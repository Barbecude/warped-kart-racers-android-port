"""Unified CLI runner for E2E verification harness (tools/e2e_verify/).

Modes:
- --mode self-test : Run tools/e2e_verify/tests/test_e2e_harness.py, verify tier counts & 100% pass (exit 0).
- --mode static    : Run F1-F4 read-only checks against live workspace (exit 0 if all pass, else 2).
- --mode unity     : Run F3 Unity hygiene + batchmode compile + EditMode/PlayMode TestRunner (exit 0/2).

Strictly Python 3.12 stdlib only.
"""

from __future__ import annotations

import argparse
from collections import Counter
import datetime
import io
import json
from pathlib import Path
import sys
import tempfile
import traceback
from typing import Any, Callable
import unittest

_REPO_ROOT = str(Path(__file__).resolve().parents[2])
if _REPO_ROOT not in sys.path:
    sys.path.insert(0, _REPO_ROOT)

from tools.e2e_verify.verify_decompilation import (
    load_game_methods,
    verify_dashboard,
    verify_decompiled_c,
    verify_ghidra_safety,
    verify_symbol_resolution,
)
from tools.e2e_verify.verify_parity_and_fidelity import (
    check_asmdef_dag,
    check_guid_integrity,
    compare_parity,
    detect_stubs,
    parse_dump_cs,
    scan_csharp_scripts,
)
from tools.e2e_verify.verify_unity_build import (
    DEFAULT_UNITY_EXE,
    check_unity_hygiene,
    run_unity_compile,
    run_unity_tests,
)

SELF_TEST_THRESHOLDS = {
    1: 20,
    2: 20,
    3: 4,
    4: 2,
}


def _iter_suite_tests(suite: unittest.TestSuite):
    for item in suite:
        if isinstance(item, unittest.TestSuite):
            yield from _iter_suite_tests(item)
        else:
            yield item


def _safe_run(
    feature: str,
    check_id: str,
    fn: Callable[[], dict[str, Any]],
) -> dict[str, Any]:
    try:
        res = fn()
        if not isinstance(res, dict):
            return {
                "feature": feature,
                "check_id": check_id,
                "passed": False,
                "status": "ERROR",
                "error": f"Check returned non-dict: {type(res).__name__}",
            }
        out = dict(res)
        out["feature"] = feature
        out["check_id"] = check_id
        out["status"] = "PASS" if out.get("passed", False) else "FAIL"
        return out
    except Exception as exc:
        return {
            "feature": feature,
            "check_id": check_id,
            "passed": False,
            "status": "ERROR",
            "error": f"{type(exc).__name__}: {exc}",
            "traceback": traceback.format_exc(),
        }


def run_self_test() -> dict[str, Any]:
    """Execute tests/test_e2e_harness.py and verify tier counts and 100% pass."""
    from tools.e2e_verify.tests import test_e2e_harness

    loader = unittest.TestLoader()
    suite = loader.loadTestsFromModule(test_e2e_harness)

    tier_counts: Counter[int] = Counter()
    feature_counts: Counter[str] = Counter()
    all_tests = list(_iter_suite_tests(suite))
    for tc in all_tests:
        method = getattr(tc, tc._testMethodName, None)
        tier = getattr(method, "e2e_tier", None)
        feat = getattr(method, "e2e_feature", None)
        if isinstance(tier, int):
            tier_counts[tier] += 1
        if isinstance(feat, str):
            feature_counts[feat] += 1

    buf = io.StringIO()
    runner = unittest.TextTestRunner(stream=buf, verbosity=2)
    result = runner.run(suite)

    threshold_errors: list[str] = []
    for t_num, min_cnt in SELF_TEST_THRESHOLDS.items():
        actual = tier_counts[t_num]
        if actual < min_cnt:
            threshold_errors.append(f"Tier {t_num} has {actual} tests (requires >= {min_cnt})")

    passed = (
        result.testsRun > 0
        and result.wasSuccessful()
        and len(result.failures) == 0
        and len(result.errors) == 0
        and len(threshold_errors) == 0
    )

    return {
        "mode": "self-test",
        "timestamp_utc": datetime.datetime.now(datetime.timezone.utc).strftime("%Y-%m-%dT%H:%M:%SZ"),
        "passed": passed,
        "tests_run": result.testsRun,
        "failures": len(result.failures),
        "errors": len(result.errors),
        "skipped": len(result.skipped),
        "tier_counts": {f"Tier{k}": tier_counts[k] for k in (1, 2, 3, 4)},
        "feature_counts": dict(sorted(feature_counts.items())),
        "threshold_errors": threshold_errors,
        "runner_output": buf.getvalue(),
    }


def run_static_suite(
    workspace: Path,
    unity_project: Path,
    unity_exe: str,
    ghidra_proj_dir: str,
    ghidra_proj_name: str,
    require_ghidra_pid: int | None,
    dashboard_url: str,
    dashboard_tolerance: int,
    skip_live_dashboard: bool,
    skip_ghidra_check: bool,
) -> dict[str, Any]:
    """Run F1-F4 static checks read-only against workspace without launching Unity or touching Ghidra."""
    tsv_path = workspace / "tools" / "game_methods.tsv"
    decomp_dir = workspace / "decompiled_c"
    resolved_dir = workspace / "decompiled_resolved"
    script_json = workspace / "il2cpp_dump" / "script.json"
    dump_cs = workspace / "il2cpp_dump" / "dump.cs"
    assets_root = unity_project / "Assets"
    scripts_root = assets_root / "Scripts"
    pkg_cache = unity_project / "Library" / "PackageCache"

    tsv_data = load_game_methods(tsv_path)
    checks: list[dict[str, Any]] = []

    checks.append(
        _safe_run("F1", "f1_decompiled_c", lambda: verify_decompiled_c(tsv_data, decomp_dir))
    )
    if not skip_ghidra_check:
        checks.append(
            _safe_run(
                "F1",
                "f1_ghidra_safety",
                lambda: verify_ghidra_safety(
                    ghidra_proj_dir,
                    proj_name=ghidra_proj_name,
                    expected_pid=require_ghidra_pid,
                    require_ghidra_pid=require_ghidra_pid is not None,
                ),
            )
        )

    checks.append(
        _safe_run(
            "F2",
            "f2_symbol_resolution",
            lambda: verify_symbol_resolution(tsv_data, resolved_dir, script_json),
        )
    )
    if not skip_live_dashboard:
        checks.append(
            _safe_run(
                "F2",
                "f2_dashboard",
                lambda: verify_dashboard(
                    tsv_path,
                    decomp_dir,
                    resolved_dir,
                    base_url=dashboard_url,
                    tolerance=dashboard_tolerance,
                ),
            )
        )

    checks.append(
        _safe_run(
            "F3",
            "f3_unity_hygiene",
            lambda: check_unity_hygiene(unity_project, unity_exe=unity_exe),
        )
    )
    checks.append(
        _safe_run(
            "F3",
            "f3_asmdef_dag",
            lambda: check_asmdef_dag(scripts_root, pkg_cache),
        )
    )

    # Parse dump.cs & scan C# once for F4 parity + stubs
    dump_holder: dict[str, Any] = {}
    cs_holder: dict[str, Any] = {}

    def _run_parity() -> dict[str, Any]:
        dump_holder["res"] = parse_dump_cs(dump_cs)
        cs_holder["res"] = scan_csharp_scripts(scripts_root)
        return compare_parity(dump_holder["res"], cs_holder["res"])

    checks.append(_safe_run("F4", "f4_dump_parity", _run_parity))
    checks.append(
        _safe_run(
            "F4",
            "f4_stubs",
            lambda: detect_stubs(cs_holder.get("res") or scan_csharp_scripts(scripts_root)),
        )
    )
    checks.append(
        _safe_run(
            "F4",
            "f4_guid_integrity",
            lambda: check_guid_integrity(assets_root, scripts_root),
        )
    )

    return _summarize_checks("static", checks)


def run_unity_suite(
    unity_project: Path,
    unity_exe: str,
    tier: str,
    artifacts_dir: Path | None,
) -> dict[str, Any]:
    """Run F3 Unity hygiene, batchmode compile, and EditMode/PlayMode TestRunner."""
    out_dir = artifacts_dir or Path(tempfile.mkdtemp(prefix="wkr_unity_e2e_"))
    out_dir.mkdir(parents=True, exist_ok=True)
    categories = None if tier == "all" else [f"Tier{tier}"]

    checks: list[dict[str, Any]] = []
    hygiene_res = _safe_run(
        "F3", "f3_unity_hygiene", lambda: check_unity_hygiene(unity_project, unity_exe=unity_exe)
    )
    checks.append(hygiene_res)

    if hygiene_res.get("passed", False):
        checks.append(
            _safe_run(
                "F3",
                "f3_unity_compile",
                lambda: run_unity_compile(
                    unity_project, out_dir / "unity_compile.log", unity_exe=unity_exe
                ),
            )
        )
        for plat in ("EditMode", "PlayMode"):
            checks.append(
                _safe_run(
                    "F3",
                    f"f3_unity_tests_{plat.lower()}",
                    lambda p=plat: run_unity_tests(
                        unity_project,
                        test_platform=p,
                        test_results=out_dir / f"TestResults-{p}.xml",
                        log_file=out_dir / f"unity_tests_{p.lower()}.log",
                        unity_exe=unity_exe,
                        categories=categories,
                    ),
                )
            )
    return _summarize_checks("unity", checks)


def _summarize_checks(mode: str, checks: list[dict[str, Any]]) -> dict[str, Any]:
    by_feature: dict[str, dict[str, int]] = {}
    for chk in checks:
        feat = chk["feature"]
        bucket = by_feature.setdefault(feat, {"passed": 0, "failed": 0, "error": 0, "total": 0})
        bucket["total"] += 1
        st = chk["status"]
        if st == "PASS":
            bucket["passed"] += 1
        elif st == "FAIL":
            bucket["failed"] += 1
        else:
            bucket["error"] += 1

    total = len(checks)
    passed_cnt = sum(1 for c in checks if c["status"] == "PASS")
    failed_cnt = sum(1 for c in checks if c["status"] == "FAIL")
    error_cnt = sum(1 for c in checks if c["status"] == "ERROR")
    all_passed = total > 0 and failed_cnt == 0 and error_cnt == 0

    return {
        "mode": mode,
        "timestamp_utc": datetime.datetime.now(datetime.timezone.utc).strftime("%Y-%m-%dT%H:%M:%SZ"),
        "passed": all_passed,
        "summary": {
            "total_checks": total,
            "passed_checks": passed_cnt,
            "failed_checks": failed_cnt,
            "error_checks": error_cnt,
            "by_feature": by_feature,
        },
        "checks": checks,
    }


def format_markdown_report(report: dict[str, Any]) -> str:
    mode = report.get("mode", "unknown")
    lines: list[str] = [
        f"# E2E Verification Report (`--mode {mode}`)",
        f"- **Timestamp (UTC)**: {report.get('timestamp_utc', '')}",
        f"- **Overall Result**: {'PASS' if report.get('passed') else 'FAIL'}",
        "",
    ]
    if mode == "self-test":
        lines.extend(
            [
                f"- **Tests Run**: {report.get('tests_run', 0)} "
                f"(failures={report.get('failures', 0)}, errors={report.get('errors', 0)})",
                f"- **Tier Breakdown**: {report.get('tier_counts', {})}",
                f"- **Feature Breakdown**: {report.get('feature_counts', {})}",
            ]
        )
        if report.get("threshold_errors"):
            lines.append(f"- **Threshold Errors**: {report['threshold_errors']}")
        return "\n".join(lines) + "\n"

    summary = report.get("summary", {})
    lines.extend(
        [
            f"- **Checks**: {summary.get('passed_checks', 0)}/{summary.get('total_checks', 0)} passed "
            f"(failed={summary.get('failed_checks', 0)}, errors={summary.get('error_checks', 0)})",
            "",
            "## Feature Summary",
            "| Feature | Passed | Failed | Error | Total |",
            "|---|---:|---:|---:|---:|",
        ]
    )
    for feat, counts in sorted(summary.get("by_feature", {}).items()):
        lines.append(
            f"| {feat} | {counts['passed']} | {counts['failed']} | {counts['error']} | {counts['total']} |"
        )
    lines.extend(
        [
            "",
            "## Check Details",
            "| Check ID | Feature | Status | Key Metrics / Errors |",
            "|---|---|---|---|",
        ]
    )
    for chk in report.get("checks", []):
        cid = chk.get("check_id", "")
        feat = chk.get("feature", "")
        st = chk.get("status", "")
        notes: list[str] = []
        if chk.get("error"):
            notes.append(str(chk["error"]))
        if chk.get("errors"):
            notes.append("; ".join(str(e) for e in chk["errors"][:3]))
        for key in (
            "classes_found",
            "methods_found",
            "total_failures",
            "unresolved_known_total",
            "asmdef_count",
            "cycles_count",
            "missing_types_count",
            "namespace_mismatches_count",
            "base_class_mismatches_count",
            "dummydll_files_count",
            "stub_methods_count",
            "duplicate_guids_count",
            "lock_status",
            "uielements_override_bytes",
        ):
            if key in chk:
                notes.append(f"{key}={chk[key]}")
        lines.append(f"| `{cid}` | {feat} | **{st}** | {'; '.join(notes[:5])} |")
    return "\n".join(lines) + "\n"


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(description="Unified E2E verification runner (tools/e2e_verify/).")
    parser.add_argument("--mode", required=True, choices=("self-test", "static", "unity"))
    parser.add_argument("--workspace", default=_REPO_ROOT)
    parser.add_argument("--unity-project", default=None)
    parser.add_argument("--unity-exe", default=DEFAULT_UNITY_EXE)
    parser.add_argument("--ghidra-proj-dir", default=r"C:\tools\wkr_ghidra\proj")
    parser.add_argument("--ghidra-proj-name", default="WKR")
    parser.add_argument("--require-ghidra-pid", type=int, default=None)
    parser.add_argument("--dashboard-url", default="http://127.0.0.1:8765")
    parser.add_argument("--dashboard-tolerance", type=int, default=0)
    parser.add_argument("--skip-live-dashboard", action="store_true")
    parser.add_argument("--skip-ghidra-check", action="store_true")
    parser.add_argument("--tier", default="all", choices=("1", "2", "3", "4", "all"))
    parser.add_argument("--artifacts-dir", default=None)
    parser.add_argument("--json-out", default=None)
    parser.add_argument("--md-out", default=None)
    args = parser.parse_args(argv)

    ws = Path(args.workspace).resolve()
    uproj = (
        Path(args.unity_project).resolve()
        if args.unity_project
        else ws / "ripped_unity_project" / "ExportedProject"
    )

    if args.mode == "self-test":
        report = run_self_test()
        exit_code = 0 if report["passed"] else 1
    elif args.mode == "static":
        report = run_static_suite(
            workspace=ws,
            unity_project=uproj,
            unity_exe=args.unity_exe,
            ghidra_proj_dir=args.ghidra_proj_dir,
            ghidra_proj_name=args.ghidra_proj_name,
            require_ghidra_pid=args.require_ghidra_pid,
            dashboard_url=args.dashboard_url,
            dashboard_tolerance=args.dashboard_tolerance,
            skip_live_dashboard=args.skip_live_dashboard,
            skip_ghidra_check=args.skip_ghidra_check,
        )
        exit_code = 0 if report["passed"] else 2
    else:
        art_dir = Path(args.artifacts_dir).resolve() if args.artifacts_dir else None
        report = run_unity_suite(
            unity_project=uproj,
            unity_exe=args.unity_exe,
            tier=args.tier,
            artifacts_dir=art_dir,
        )
        exit_code = 0 if report["passed"] else 2

    md_text = format_markdown_report(report)
    if args.json_out:
        jp = Path(args.json_out)
        jp.parent.mkdir(parents=True, exist_ok=True)
        jp.write_text(json.dumps(report, indent=2), encoding="utf-8")
    if args.md_out:
        mp = Path(args.md_out)
        mp.parent.mkdir(parents=True, exist_ok=True)
        mp.write_text(md_text, encoding="utf-8")

    print(md_text)
    if args.mode == "self-test" and not report["passed"]:
        print(report.get("runner_output", ""), file=sys.stderr)
    return exit_code


if __name__ == "__main__":
    sys.exit(main())
