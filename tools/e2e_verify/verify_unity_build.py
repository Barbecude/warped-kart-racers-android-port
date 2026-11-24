"""Feature F3 & Tier 4 verifier: Unity hygiene, lock safety, batchmode compilation,
compile log parsing, TestRunner invocation (-quit omitted!), and NUnit XML parsing.

Strictly Python 3.12 stdlib only.
"""

from __future__ import annotations

import argparse
import json
import os
from pathlib import Path
import re
import subprocess
import sys
from typing import Any
import xml.etree.ElementTree as ET

_REPO_ROOT = str(Path(__file__).resolve().parents[2])
if _REPO_ROOT not in sys.path:
    sys.path.insert(0, _REPO_ROOT)

from tools.e2e_verify.verify_decompilation import query_running_processes

DEFAULT_UNITY_EXE = r"C:\Program Files\Unity 2020.3.30f1\Editor\Unity.exe"
DEFAULT_UNITY_VERSION = "2020.3.30f1"
MIN_UIELEMENTS_DLL_BYTES = 50 * 1024  # 50 KB threshold; 4,096 B stub causes TypeLoadException

_RE_CS_ERROR = re.compile(
    r"^(?P<file>.+?)\((?P<line>\d+),(?P<col>\d+)\):\s*error\s+(?P<code>CS\d+):\s*(?P<message>.+)$"
)
_RE_CS_ERROR_GENERIC = re.compile(r"\berror\s+(CS\d+):\s*(.+)$")
_RE_START_COMPILE = re.compile(r"-\s*Starting compile\s+(?:Library/ScriptAssemblies/)?(\S+?\.dll)\s*$")
_RE_FINISH_COMPILE = re.compile(
    r"-\s*Finished compile\s+(?:Library/ScriptAssemblies/)?(\S+?\.dll)\s+in\s+([0-9.]+)\s+seconds"
)
_RE_START_BURST = re.compile(
    r"-\s*Starting ILPostProcessor\s+'zzzUnity\.Burst\.CodeGen\.BurstILPostProcessor'\s+on\s+(\S+?\.dll)"
)
_RE_FINISH_BURST = re.compile(
    r"-\s*Finished ILPostProcessor\s+'zzzUnity\.Burst\.CodeGen\.BurstILPostProcessor'\s+on\s+(\S+?\.dll)\s+in\s+([0-9.]+)\s+seconds"
)
_RE_EXIT_CODE = re.compile(r"Application will terminate with return code\s+(\d+)")


def find_unity_processes(
    processes: list[dict[str, Any]] | None = None,
) -> list[dict[str, Any]]:
    """Return running Unity.exe processes ONLY (never Unity Hub or Unity.Licensing.Client)."""
    proc_list = processes if processes is not None else query_running_processes(("Unity.exe",))
    found: list[dict[str, Any]] = []
    for p in proc_list:
        name = str(p.get("Name") or "").strip().lower()
        if name == "unity.exe":
            found.append(
                {
                    "pid": p.get("ProcessId"),
                    "name": p.get("Name"),
                    "command_line": str(p.get("CommandLine") or ""),
                }
            )
    return found


def check_unity_hygiene(
    project_dir: str | os.PathLike[str],
    unity_exe: str | os.PathLike[str] = DEFAULT_UNITY_EXE,
    expected_version: str = DEFAULT_UNITY_VERSION,
    processes: list[dict[str, Any]] | None = None,
) -> dict[str, Any]:
    """F3: Check Unity.exe process lock, Temp/UnityLockfile, UIElementsModule.dll, version & TestFramework."""
    pdir = Path(project_dir)
    errors: list[str] = []
    warnings: list[str] = []

    project_exists = pdir.is_dir()
    if not project_exists:
        errors.append(f"Unity project directory missing: {pdir}")

    unity_exe_path = Path(unity_exe)
    unity_exe_exists = unity_exe_path.is_file()
    if not unity_exe_exists:
        errors.append(f"Unity.exe not found: {unity_exe_path}")

    # ProjectSettings/ProjectVersion.txt
    version_file = pdir / "ProjectSettings" / "ProjectVersion.txt"
    detected_version = None
    version_ok = False
    if version_file.is_file():
        for ln in version_file.read_text(encoding="utf-8", errors="replace").splitlines():
            if ln.startswith("m_EditorVersion:"):
                detected_version = ln.split(":", 1)[1].strip()
                version_ok = detected_version == expected_version
                break
    if not version_ok:
        errors.append(
            f"ProjectVersion mismatch: expected {expected_version}, got {detected_version or '<missing>'}"
        )

    # com.unity.test-framework resolution
    test_framework_version = None
    lock_json = pdir / "Packages" / "packages-lock.json"
    manifest_json = pdir / "Packages" / "manifest.json"
    if lock_json.is_file():
        try:
            ldata = json.loads(lock_json.read_text(encoding="utf-8", errors="replace"))
            deps = ldata.get("dependencies", {})
            if "com.unity.test-framework" in deps:
                test_framework_version = deps["com.unity.test-framework"].get("version")
        except (OSError, json.JSONDecodeError) as exc:
            errors.append(f"Failed parsing packages-lock.json: {exc}")
    if test_framework_version is None and manifest_json.is_file():
        try:
            mdata = json.loads(manifest_json.read_text(encoding="utf-8", errors="replace"))
            deps = mdata.get("dependencies", {})
            if "com.unity.test-framework" in deps:
                test_framework_version = deps["com.unity.test-framework"]
        except (OSError, json.JSONDecodeError):
            pass
    if not test_framework_version:
        errors.append("com.unity.test-framework is not resolved in packages-lock.json or manifest.json")

    # Lockfile & Unity.exe safety
    unity_procs = find_unity_processes(processes=processes)
    lockfile = pdir / "Temp" / "UnityLockfile"
    lockfile_exists = lockfile.exists()

    if unity_procs:
        lock_status = "LOCKED_BY_UNITY"
        errors.append(f"LOCKED_BY_UNITY: Unity.exe is currently running (PIDs: {[p['pid'] for p in unity_procs]})")
    elif lockfile_exists:
        lock_status = "STALE_LOCKFILE"
        errors.append(f"STALE_LOCKFILE: {lockfile} exists while no Unity.exe process is running")
    else:
        lock_status = "CLEAN"

    # Stale Library/ScriptAssemblies/UnityEngine.UIElementsModule.dll override check
    uielements_dll = pdir / "Library" / "ScriptAssemblies" / "UnityEngine.UIElementsModule.dll"
    uielements_present = uielements_dll.is_file()
    uielements_bytes = uielements_dll.stat().st_size if uielements_present else 0
    uielements_stale = uielements_present and uielements_bytes < MIN_UIELEMENTS_DLL_BYTES
    if uielements_stale:
        errors.append(
            f"STALE_UIELEMENTS_OVERRIDE: {uielements_dll} is {uielements_bytes} bytes (< {MIN_UIELEMENTS_DLL_BYTES} bytes), causing TypeLoadException"
        )

    passed = len(errors) == 0
    return {
        "passed": passed,
        "project_dir": str(pdir),
        "unity_exe": str(unity_exe_path),
        "unity_exe_exists": unity_exe_exists,
        "expected_version": expected_version,
        "detected_version": detected_version,
        "version_ok": version_ok,
        "test_framework_version": test_framework_version,
        "unity_processes": unity_procs,
        "lockfile_exists": lockfile_exists,
        "lock_status": lock_status,
        "uielements_override_present": uielements_present,
        "uielements_override_bytes": uielements_bytes,
        "uielements_stale": uielements_stale,
        "errors": errors,
        "warnings": warnings,
    }


def build_compile_args(
    unity_exe: str | os.PathLike[str],
    project_dir: str | os.PathLike[str],
    log_file: str | os.PathLike[str],
) -> list[str]:
    """Build Unity batchmode compile CLI args (includes -quit)."""
    return [
        str(unity_exe),
        "-batchmode",
        "-nographics",
        "-quit",
        "-projectPath",
        str(project_dir),
        "-logFile",
        str(log_file),
    ]


def build_test_runner_args(
    unity_exe: str | os.PathLike[str],
    project_dir: str | os.PathLike[str],
    log_file: str | os.PathLike[str],
    test_platform: str,
    test_results: str | os.PathLike[str],
    categories: list[str] | None = None,
    assembly_names: list[str] | None = None,
) -> list[str]:
    """Build Unity batchmode TestRunner CLI args (critically OMITS -quit!)."""
    if test_platform not in ("EditMode", "PlayMode"):
        raise ValueError(f"Unsupported test_platform: {test_platform!r}")
    args = [
        str(unity_exe),
        "-batchmode",
        "-nographics",
        "-runTests",
        "-testPlatform",
        test_platform,
        "-testResults",
        str(test_results),
    ]
    if categories:
        args.extend(["-testCategory", ";".join(categories)])
    if assembly_names:
        args.extend(["-assemblyNames", ";".join(assembly_names)])
    args.extend(["-projectPath", str(project_dir), "-logFile", str(log_file)])
    return args


def parse_compile_log(log_input: str | os.PathLike[str]) -> dict[str, Any]:
    """Parse Unity batchmode compile log text or file path."""
    if isinstance(log_input, os.PathLike) or (
        isinstance(log_input, str) and "\n" not in log_input and Path(log_input).is_file()
    ):
        text = Path(log_input).read_text(encoding="utf-8", errors="replace")
    else:
        text = str(log_input)

    cs_errors: list[dict[str, Any]] = []
    type_load_exceptions: list[str] = []
    scripts_have_compiler_errors = False
    started_assemblies: list[str] = []
    finished_assemblies: list[dict[str, Any]] = []
    burst_started: list[str] = []
    burst_finished: list[dict[str, Any]] = []
    unity_return_code: int | None = None

    for line in text.splitlines():
        m = _RE_CS_ERROR.match(line.strip())
        if m:
            cs_errors.append(
                {
                    "file": m.group("file").strip(),
                    "line": int(m.group("line")),
                    "col": int(m.group("col")),
                    "code": m.group("code"),
                    "message": m.group("message").strip(),
                }
            )
            continue

        gm = _RE_CS_ERROR_GENERIC.search(line)
        if gm:
            cs_errors.append(
                {
                    "file": "",
                    "line": 0,
                    "col": 0,
                    "code": gm.group(1),
                    "message": gm.group(2).strip(),
                }
            )
            continue

        if "TypeLoadException" in line:
            type_load_exceptions.append(line.strip())
        if "Scripts have compiler errors." in line:
            scripts_have_compiler_errors = True

        sm = _RE_START_COMPILE.search(line)
        if sm:
            started_assemblies.append(sm.group(1))
            continue
        fm = _RE_FINISH_COMPILE.search(line)
        if fm:
            finished_assemblies.append({"assembly": fm.group(1), "seconds": float(fm.group(2))})
            continue
        bsm = _RE_START_BURST.search(line)
        if bsm:
            burst_started.append(bsm.group(1))
            continue
        bfm = _RE_FINISH_BURST.search(line)
        if bfm:
            burst_finished.append({"assembly": bfm.group(1), "seconds": float(bfm.group(2))})
            continue
        rcm = _RE_EXIT_CODE.search(line)
        if rcm:
            unity_return_code = int(rcm.group(1))

    passed = (
        len(cs_errors) == 0
        and len(type_load_exceptions) == 0
        and not scripts_have_compiler_errors
        and (unity_return_code is None or unity_return_code == 0)
    )
    return {
        "passed": passed,
        "cs_errors_count": len(cs_errors),
        "cs_errors": cs_errors[:50],
        "type_load_exceptions_count": len(type_load_exceptions),
        "type_load_exceptions": type_load_exceptions[:20],
        "scripts_have_compiler_errors": scripts_have_compiler_errors,
        "started_assemblies_count": len(started_assemblies),
        "finished_assemblies_count": len(finished_assemblies),
        "finished_assemblies": finished_assemblies,
        "burst_ilpp_started_count": len(burst_started),
        "burst_ilpp_finished_count": len(burst_finished),
        "unity_return_code": unity_return_code,
    }


def parse_nunit_xml(xml_input: str | os.PathLike[str]) -> dict[str, Any]:
    """Parse NUnit 3.5 XML produced by Unity TestRunner (-testResults)."""
    if isinstance(xml_input, os.PathLike) or (
        isinstance(xml_input, str) and "<test-run" not in xml_input and Path(xml_input).is_file()
    ):
        xml_text = Path(xml_input).read_text(encoding="utf-8", errors="replace")
    else:
        xml_text = str(xml_input)

    try:
        root = ET.fromstring(xml_text)
    except ET.ParseError as exc:
        return {"passed": False, "error": f"Invalid NUnit XML: {exc}", "total": 0, "failed": 0, "failures": []}

    if root.tag != "test-run":
        return {"passed": False, "error": f"Unexpected root XML tag: {root.tag}", "total": 0, "failed": 0, "failures": []}

    def _int_attr(k: str) -> int:
        try:
            return int(root.attrib.get(k, "0"))
        except ValueError:
            return 0

    total = _int_attr("total")
    passed_cnt = _int_attr("passed")
    failed_cnt = _int_attr("failed")
    inconclusive_cnt = _int_attr("inconclusive")
    skipped_cnt = _int_attr("skipped")
    result_str = root.attrib.get("result", "")

    failures: list[dict[str, Any]] = []
    cases_summary: list[dict[str, Any]] = []

    for tc in root.iter("test-case"):
        tc_res = tc.attrib.get("result", "")
        cats = [
            prop.attrib.get("value", "")
            for prop in tc.findall("./properties/property")
            if prop.attrib.get("name") == "Category"
        ]
        rec = {
            "fullname": tc.attrib.get("fullname", tc.attrib.get("name", "")),
            "name": tc.attrib.get("name", ""),
            "result": tc_res,
            "duration": tc.attrib.get("duration", ""),
            "categories": cats,
        }
        cases_summary.append(rec)
        if tc_res.lower() not in ("passed", "skipped"):
            msg_el = tc.find("./failure/message")
            stk_el = tc.find("./failure/stack-trace")
            fail_rec = dict(rec)
            fail_rec["message"] = (msg_el.text or "").strip() if msg_el is not None else ""
            fail_rec["stack_trace"] = (stk_el.text or "").strip() if stk_el is not None else ""
            failures.append(fail_rec)

    passed = (
        total > 0
        and failed_cnt == 0
        and inconclusive_cnt == 0
        and result_str.lower().startswith("pass")
        and len(failures) == 0
    )

    return {
        "passed": passed,
        "result": result_str,
        "engine_version": root.attrib.get("engine-version", ""),
        "total": total,
        "passed_count": passed_cnt,
        "failed_count": failed_cnt,
        "inconclusive_count": inconclusive_cnt,
        "skipped_count": skipped_cnt,
        "failures": failures,
        "cases_parsed": len(cases_summary),
    }


def run_unity_compile(
    project_dir: str | os.PathLike[str],
    log_file: str | os.PathLike[str],
    unity_exe: str | os.PathLike[str] = DEFAULT_UNITY_EXE,
    timeout: int = 600,
) -> dict[str, Any]:
    """Run Unity batchmode compile after hygiene/lock pre-flight."""
    hygiene = check_unity_hygiene(project_dir, unity_exe=unity_exe)
    if not hygiene["passed"]:
        return {
            "passed": False,
            "aborted_by_hygiene": True,
            "hygiene": hygiene,
        }

    log_p = Path(log_file)
    log_p.parent.mkdir(parents=True, exist_ok=True)
    args = build_compile_args(unity_exe, project_dir, log_p)
    proc = subprocess.run(args, capture_output=True, text=True, timeout=timeout, check=False)
    parsed = parse_compile_log(log_p) if log_p.is_file() else {"passed": False, "error": "Log file not created"}
    passed = proc.returncode == 0 and parsed.get("passed", False)
    return {
        "passed": passed,
        "aborted_by_hygiene": False,
        "returncode": proc.returncode,
        "args": args,
        "log_file": str(log_p),
        "compile": parsed,
    }


def run_unity_tests(
    project_dir: str | os.PathLike[str],
    test_platform: str,
    test_results: str | os.PathLike[str],
    log_file: str | os.PathLike[str],
    unity_exe: str | os.PathLike[str] = DEFAULT_UNITY_EXE,
    categories: list[str] | None = None,
    assembly_names: list[str] | None = None,
    timeout: int = 600,
) -> dict[str, Any]:
    """Run Unity batchmode TestRunner (-quit omitted!) after hygiene/lock pre-flight."""
    hygiene = check_unity_hygiene(project_dir, unity_exe=unity_exe)
    if not hygiene["passed"]:
        return {
            "passed": False,
            "aborted_by_hygiene": True,
            "hygiene": hygiene,
        }

    res_p = Path(test_results)
    res_p.parent.mkdir(parents=True, exist_ok=True)
    log_p = Path(log_file)
    log_p.parent.mkdir(parents=True, exist_ok=True)

    args = build_test_runner_args(
        unity_exe=unity_exe,
        project_dir=project_dir,
        log_file=log_p,
        test_platform=test_platform,
        test_results=res_p,
        categories=categories,
        assembly_names=assembly_names,
    )
    proc = subprocess.run(args, capture_output=True, text=True, timeout=timeout, check=False)
    nunit = parse_nunit_xml(res_p) if res_p.is_file() else {"passed": False, "error": "NUnit XML not created"}
    passed = proc.returncode == 0 and nunit.get("passed", False)
    return {
        "passed": passed,
        "aborted_by_hygiene": False,
        "test_platform": test_platform,
        "returncode": proc.returncode,
        "args": args,
        "results_xml": str(res_p),
        "log_file": str(log_p),
        "nunit": nunit,
    }


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(description="Verify F3 Unity project hygiene, batchmode compile, and NUnit tests.")
    parser.add_argument("--unity-project", required=True)
    parser.add_argument("--unity-exe", default=DEFAULT_UNITY_EXE)
    parser.add_argument("--hygiene-only", action="store_true")
    parser.add_argument("--json-out", default=None)
    args = parser.parse_args(argv)

    res = check_unity_hygiene(args.unity_project, unity_exe=args.unity_exe)
    if args.json_out:
        out_p = Path(args.json_out)
        out_p.parent.mkdir(parents=True, exist_ok=True)
        out_p.write_text(json.dumps(res, indent=2), encoding="utf-8")
    else:
        print(json.dumps(res, indent=2))
    return 0 if res["passed"] else 2


if __name__ == "__main__":
    sys.exit(main())
