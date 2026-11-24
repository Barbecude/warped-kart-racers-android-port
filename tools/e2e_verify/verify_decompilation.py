"""Feature F1 & F2 verifier: decompilation completeness, Ghidra safety,
symbol resolution, and live progress dashboard accuracy.

Strictly Python 3.12 stdlib only. Read-only against workspace & Ghidra state.
"""

from __future__ import annotations

import argparse
from collections import Counter, defaultdict
import csv
from dataclasses import dataclass, field
import io
import json
import os
from pathlib import Path
import re
import subprocess
import sys
from typing import Any
import urllib.error
import urllib.request

FAILURE_MARKERS = (
    "// [DECOMPILE_FAILED]",
    "// [DECOMPILE_EXCEPTION]",
    "// [NO_FUNCTION_AT_ADDRESS]",
)

MODULE_PREFIXES = (
    "Atlas.Gameplay.Kart",
    "Atlas.Gameplay.Usables",
    "Atlas.Contexts",
    "Atlas.FrontEnd",
    "Atlas.UI.Screens",
    "Atlas.Save",
    "Atlas.Audio",
    "Atlas.League",
    "Atlas.Gameplay",
    "Atlas.UI",
    "Atlas.Rendering",
    "Atlas.Definitions",
    "Atlas.Stats",
    "Atlas.",
    "Core.",
)

REQUIRED_DASHBOARD_KEYS = (
    "timestamp",
    "finished",
    "methods_done",
    "methods_total",
    "methods_ok",
    "methods_fail",
    "methods_pct",
    "classes_done",
    "classes_total",
    "total_mb",
    "speed_per_min",
    "eta_text",
    "success_rate",
    "overall_pct",
    "modules",
    "stages",
    "recent",
)

_RE_CLASS_HEADER = re.compile(r"^//\s*Class:\s*(.+?)\s*$")
_RE_RVA_HEADER = re.compile(r"^//\s*RVA:\s*0x([0-9a-fA-F]+)\s*\|\s*(.+?)\s*$")
_RE_HEX = re.compile(r"^[0-9a-fA-F]+$")

_RE_BLOCK_COMMENT = re.compile(r"/\*.*?\*/")
_RE_FUNC_TOKEN = re.compile(r"\bfunc_0x([0-9a-fA-F]+)\b")
_RE_RAM_TOKEN = re.compile(r"\b[a-z]+Ram([0-9a-fA-F]{6,16})\b")
_RE_BARE_HEX = re.compile(r"(?<![A-Za-z0-9_])0x([0-9a-fA-F]{5,16})\b")
_RE_DAT_TOKEN = re.compile(r"\bDAT_[0-9a-fA-F]+\b")
_RE_FUN_TOKEN = re.compile(r"\bFUN_[0-9a-fA-F]+\b")
_RE_PRECEDING_ANNOT = re.compile(r"/\*[^*]*\*/\s*$")


def safe_filename(cls_name: str) -> str:
    """Map an IL2CPP class name to its DecompileGameMethods.java output filename."""
    return re.sub(r"[^A-Za-z0-9._-]", "_", cls_name) + ".c"


def norm_hex(hex_str: str) -> str:
    stripped = hex_str.strip().lower().lstrip("0")
    return stripped if stripped else "0"


@dataclass(frozen=True)
class MethodRow:
    start_hex: str
    end_hex: str
    class_name: str
    method_name: str
    symbol_name: str

    @property
    def full_name(self) -> str:
        return f"{self.class_name}.{self.method_name}"


@dataclass
class TsvData:
    tsv_path: str
    rows: list[MethodRow] = field(default_factory=list)
    by_class: dict[str, list[MethodRow]] = field(default_factory=dict)
    safe_to_classes: dict[str, list[str]] = field(default_factory=dict)
    collisions: dict[str, list[str]] = field(default_factory=dict)
    malformed_lines: list[dict[str, Any]] = field(default_factory=list)

    @property
    def total_rows(self) -> int:
        return len(self.rows)

    @property
    def total_classes(self) -> int:
        return len(self.by_class)


def load_game_methods(tsv_path: str | os.PathLike[str]) -> TsvData:
    """Parse tools/game_methods.tsv (5 tab-separated columns, no header)."""
    path = Path(tsv_path)
    data = TsvData(tsv_path=str(path))
    if not path.is_file():
        data.malformed_lines.append({"line": 0, "error": f"TSV file not found: {path}"})
        return data

    by_class: dict[str, list[MethodRow]] = defaultdict(list)
    safe_map: dict[str, set[str]] = defaultdict(set)

    with path.open("r", encoding="utf-8", errors="replace") as f:
        for lineno, raw_line in enumerate(f, start=1):
            line = raw_line.rstrip("\r\n")
            if not line:
                continue
            parts = line.split("\t")
            if len(parts) != 5:
                data.malformed_lines.append(
                    {"line": lineno, "error": f"Expected 5 columns, got {len(parts)}", "raw": line[:120]}
                )
                continue
            start_hex, end_hex, cls_name, meth_name, sym_name = parts
            if not _RE_HEX.match(start_hex) or not _RE_HEX.match(end_hex):
                data.malformed_lines.append(
                    {"line": lineno, "error": "Invalid hex RVA column", "raw": line[:120]}
                )
                continue
            if not cls_name or not meth_name:
                data.malformed_lines.append(
                    {"line": lineno, "error": "Empty class or method name", "raw": line[:120]}
                )
                continue
            row = MethodRow(
                start_hex=norm_hex(start_hex),
                end_hex=norm_hex(end_hex),
                class_name=cls_name,
                method_name=meth_name,
                symbol_name=sym_name,
            )
            data.rows.append(row)
            by_class[cls_name].append(row)
            safe_map[safe_filename(cls_name)].add(cls_name)

    data.by_class = dict(by_class)
    data.safe_to_classes = {k: sorted(v) for k, v in safe_map.items()}
    data.collisions = {k: sorted(v) for k, v in safe_map.items() if len(v) > 1}
    return data


def _scan_c_directory(
    tsv_data: TsvData,
    target_dir: Path,
) -> dict[str, Any]:
    """Shared multiset RVA & failure marker verification for decompiled_c / decompiled_resolved."""
    errors: list[str] = []
    if tsv_data.malformed_lines:
        errors.append(f"TSV has {len(tsv_data.malformed_lines)} malformed line(s)")
    if tsv_data.total_rows == 0:
        errors.append("TSV contains 0 valid method rows")
    if tsv_data.collisions:
        errors.append(f"SafeClassName collisions detected: {len(tsv_data.collisions)}")
    if not target_dir.is_dir():
        errors.append(f"Directory not found: {target_dir}")
        return {
            "passed": False,
            "directory": str(target_dir),
            "classes_expected": tsv_data.total_classes,
            "classes_found": 0,
            "methods_expected": tsv_data.total_rows,
            "methods_found": 0,
            "missing_files_count": tsv_data.total_classes,
            "empty_files_count": 0,
            "orphan_files_count": 0,
            "header_mismatches_count": 0,
            "missing_methods_count": tsv_data.total_rows,
            "extra_methods_count": 0,
            "failure_markers": {m: 0 for m in FAILURE_MARKERS},
            "total_failures": 0,
            "errors": errors,
            "samples": {},
        }

    disk_files: dict[str, Path] = {}
    for entry in os.scandir(target_dir):
        if entry.name.endswith(".c") and entry.is_file(follow_symlinks=False):
            disk_files[entry.name] = Path(entry.path)

    expected_files: dict[str, str] = {
        safe_filename(cls_name): cls_name for cls_name in tsv_data.by_class
    }

    missing_files = sorted(fname for fname in expected_files if fname not in disk_files)
    orphan_files = sorted(fname for fname in disk_files if fname not in expected_files)
    empty_files: list[str] = []
    header_mismatches: list[dict[str, str]] = []
    missing_methods: list[dict[str, Any]] = []
    extra_methods: list[dict[str, Any]] = []
    failure_counts: dict[str, int] = {m: 0 for m in FAILURE_MARKERS}
    failure_samples: list[dict[str, Any]] = []

    classes_found = 0
    methods_found = 0
    missing_methods_total = 0
    extra_methods_total = 0

    for fname, cls_name in expected_files.items():
        fpath = disk_files.get(fname)
        if fpath is None:
            continue
        try:
            st = fpath.stat()
            if st.st_size == 0:
                empty_files.append(fname)
                continue
            text = fpath.read_text(encoding="utf-8", errors="replace")
        except OSError as exc:
            errors.append(f"Failed reading {fname}: {exc}")
            continue

        classes_found += 1
        actual_counter: Counter[tuple[str, str]] = Counter()
        found_cls_header: str | None = None

        for raw_line in text.splitlines():
            if found_cls_header is None:
                hm = _RE_CLASS_HEADER.match(raw_line)
                if hm:
                    found_cls_header = hm.group(1)
            rm = _RE_RVA_HEADER.match(raw_line)
            if rm:
                rva_norm = norm_hex(rm.group(1))
                full_name = rm.group(2)
                actual_counter[(rva_norm, full_name)] += 1
                methods_found += 1
            for marker in FAILURE_MARKERS:
                if marker in raw_line:
                    failure_counts[marker] += 1
                    if len(failure_samples) < 50:
                        failure_samples.append({"file": fname, "marker": marker})

        if found_cls_header != cls_name:
            header_mismatches.append(
                {"file": fname, "expected": cls_name, "actual": found_cls_header or "<missing>"}
            )

        expected_counter = Counter(
            (row.start_hex, row.full_name) for row in tsv_data.by_class[cls_name]
        )

        diff_missing = expected_counter - actual_counter
        diff_extra = actual_counter - expected_counter

        if diff_missing:
            cnt = sum(diff_missing.values())
            missing_methods_total += cnt
            for (rva_h, full_n), mult in diff_missing.items():
                if len(missing_methods) < 50:
                    missing_methods.append(
                        {"file": fname, "rva": f"0x{rva_h}", "method": full_n, "missing_count": mult}
                    )
        if diff_extra:
            cnt = sum(diff_extra.values())
            extra_methods_total += cnt
            for (rva_h, full_n), mult in diff_extra.items():
                if len(extra_methods) < 50:
                    extra_methods.append(
                        {"file": fname, "rva": f"0x{rva_h}", "method": full_n, "extra_count": mult}
                    )

    total_failures = sum(failure_counts.values())
    passed = (
        not errors
        and len(missing_files) == 0
        and len(empty_files) == 0
        and len(orphan_files) == 0
        and len(header_mismatches) == 0
        and missing_methods_total == 0
        and extra_methods_total == 0
        and methods_found == tsv_data.total_rows
        and total_failures == 0
    )

    return {
        "passed": passed,
        "directory": str(target_dir),
        "classes_expected": tsv_data.total_classes,
        "classes_found": classes_found,
        "methods_expected": tsv_data.total_rows,
        "methods_found": methods_found,
        "missing_files_count": len(missing_files),
        "empty_files_count": len(empty_files),
        "orphan_files_count": len(orphan_files),
        "header_mismatches_count": len(header_mismatches),
        "missing_methods_count": missing_methods_total,
        "extra_methods_count": extra_methods_total,
        "failure_markers": failure_counts,
        "total_failures": total_failures,
        "errors": errors,
        "samples": {
            "missing_files": missing_files[:25],
            "empty_files": empty_files[:25],
            "orphan_files": orphan_files[:25],
            "header_mismatches": header_mismatches[:25],
            "missing_methods": missing_methods[:25],
            "extra_methods": extra_methods[:25],
            "failure_markers": failure_samples[:25],
            "malformed_tsv": tsv_data.malformed_lines[:20],
            "collisions": tsv_data.collisions,
        },
    }


def verify_decompiled_c(
    tsv_data: TsvData,
    decompiled_dir: str | os.PathLike[str],
) -> dict[str, Any]:
    """F1: Verify all TSV classes & methods exist in decompiled_c/ with exact multiset parity and 0 failures."""
    return _scan_c_directory(tsv_data, Path(decompiled_dir))


def query_running_processes(names: tuple[str, ...] | None = None) -> list[dict[str, Any]]:
    """Read-only Windows process query using Get-CimInstance with tasklist CSV fallback."""
    if names:
        flt = " OR ".join(f"Name='{n}'" for n in names)
        ps_cmd = (
            f'Get-CimInstance Win32_Process -Filter "{flt}" | '
            "Select-Object ProcessId, Name, CommandLine | ConvertTo-Json -Compress"
        )
    else:
        ps_cmd = (
            "Get-CimInstance Win32_Process | "
            "Select-Object ProcessId, Name, CommandLine | ConvertTo-Json -Compress"
        )
    try:
        res = subprocess.run(
            ["powershell", "-NoProfile", "-Command", ps_cmd],
            capture_output=True,
            text=True,
            timeout=15,
            check=False,
        )
        if res.returncode == 0 and res.stdout.strip():
            raw = json.loads(res.stdout)
            if isinstance(raw, dict):
                return [raw]
            if isinstance(raw, list):
                return [item for item in raw if isinstance(item, dict)]
    except (OSError, subprocess.SubprocessError, json.JSONDecodeError):
        pass

    # Fallback: tasklist /FO CSV /NH (no CommandLine available, but gives PID + Image Name)
    procs: list[dict[str, Any]] = []
    try:
        res = subprocess.run(
            ["tasklist", "/FO", "CSV", "/NH"],
            capture_output=True,
            text=True,
            timeout=10,
            check=False,
        )
        if res.returncode == 0:
            reader = csv.reader(io.StringIO(res.stdout))
            for row in reader:
                if len(row) >= 2:
                    try:
                        pid = int(row[1])
                    except ValueError:
                        continue
                    procs.append({"ProcessId": pid, "Name": row[0], "CommandLine": ""})
    except (OSError, subprocess.SubprocessError):
        pass
    return procs


def _norm_win_path(p: str) -> str:
    return p.replace("/", "\\").rstrip("\\").lower()


def _cmdline_targets_project(cmdline: str, proj_dir_norm: str, proj_name: str) -> bool:
    if not cmdline:
        return False
    low = cmdline.replace("/", "\\").lower()
    is_ghidra = (
        "analyzeheadless" in low
        or "ghidra.ghidra" in low
        or "ghidra.app.util.headless" in low
    )
    if not is_ghidra:
        return False
    if proj_dir_norm not in low:
        return False
    # Exact project name token (do not match WKR_SHARD_1 when proj_name == "WKR")
    pattern = re.compile(r'(?:^|[\s"\'])' + re.escape(proj_name.lower()) + r'(?:$|[\s"\'])')
    return bool(pattern.search(low))


def verify_ghidra_safety(
    proj_dir: str | os.PathLike[str],
    proj_name: str = "WKR",
    expected_pid: int | None = None,
    require_ghidra_pid: bool = False,
    processes: list[dict[str, Any]] | None = None,
) -> dict[str, Any]:
    """F1: Read-only verification of Ghidra project integrity & absence of conflicting writers.

    Never touches, opens, or modifies WKR.lock.
    Does not fail solely because a historical PID is no longer running unless require_ghidra_pid=True.
    """
    pdir = Path(proj_dir)
    gpr_path = pdir / f"{proj_name}.gpr"
    rep_path = pdir / f"{proj_name}.rep"
    lock_path = pdir / f"{proj_name}.lock"

    errors: list[str] = []
    warnings: list[str] = []

    proj_dir_exists = pdir.is_dir()
    gpr_ok = gpr_path.is_file() and gpr_path.stat().st_size > 0
    rep_entries = 0
    rep_ok = False
    if rep_path.is_dir():
        try:
            rep_entries = sum(1 for _ in os.scandir(rep_path))
            rep_ok = rep_entries > 0
        except OSError as exc:
            errors.append(f"Failed inspecting {rep_path}: {exc}")

    # Strictly stat/exists check only — never open or modify lock file.
    lock_present = lock_path.exists()

    if not proj_dir_exists:
        errors.append(f"Ghidra project directory missing: {pdir}")
    if not gpr_ok:
        errors.append(f"Ghidra project file missing or empty: {gpr_path}")
    if not rep_ok:
        errors.append(f"Ghidra repository directory missing or empty: {rep_path}")

    proc_list = processes if processes is not None else query_running_processes(("java.exe", "javaw.exe"))
    proj_dir_norm = _norm_win_path(str(pdir))
    targeting_procs: list[dict[str, Any]] = []
    for proc in proc_list:
        cmd = str(proc.get("CommandLine") or "")
        if _cmdline_targets_project(cmd, proj_dir_norm, proj_name):
            targeting_procs.append(
                {
                    "pid": proc.get("ProcessId"),
                    "name": proc.get("Name"),
                    "command_line": cmd,
                }
            )

    if len(targeting_procs) > 1:
        errors.append(
            f"CONFLICTING_WRITERS: {len(targeting_procs)} concurrent Ghidra processes targeting {pdir}\\{proj_name}"
        )

    active_pids = [p["pid"] for p in targeting_procs]
    expected_pid_alive = expected_pid in active_pids if expected_pid is not None else None
    if require_ghidra_pid:
        if expected_pid is None:
            errors.append("--require-ghidra-pid requested without a PID")
        elif not expected_pid_alive:
            errors.append(f"Required Ghidra PID {expected_pid} is not running on {pdir}\\{proj_name}")

    if lock_present and len(targeting_procs) == 0:
        warnings.append(f"Lock file present ({lock_path.name}) while no active Ghidra writer detected")

    passed = len(errors) == 0
    return {
        "passed": passed,
        "proj_dir": str(pdir),
        "proj_name": proj_name,
        "gpr_ok": gpr_ok,
        "rep_ok": rep_ok,
        "rep_entries": rep_entries,
        "lock_present": lock_present,
        "active_wkr_processes": targeting_procs,
        "active_wkr_pids": active_pids,
        "expected_pid": expected_pid,
        "expected_pid_alive": expected_pid_alive,
        "require_ghidra_pid": require_ghidra_pid,
        "errors": errors,
        "warnings": warnings,
    }


def load_script_json_index(script_json_path: str | os.PathLike[str]) -> dict[int, tuple[str, str]]:
    """Build address -> (category, symbol_name) from il2cpp_dump/script.json."""
    path = Path(script_json_path)
    with path.open("r", encoding="utf-8") as f:
        data = json.load(f)

    index: dict[int, tuple[str, str]] = {}
    for category, name_key in (
        ("ScriptMethod", "Name"),
        ("ScriptString", "Value"),
        ("ScriptMetadata", "Name"),
        ("ScriptMetadataMethod", "Name"),
    ):
        for item in data.get(category, []):
            addr = item.get("Address")
            if isinstance(addr, int):
                val = str(item.get(name_key, ""))
                index[addr] = (category, val)
    return index


def _scan_line_for_tokens(
    line: str,
    known_addrs: dict[int, tuple[str, str]] | None,
) -> tuple[dict[str, int], list[dict[str, Any]]]:
    """Scan a single C line for annotated vs unresolved script.json references & residual tokens."""
    stats = {
        "annotations": 0,
        "annotated_func_0x": 0,
        "annotated_ram": 0,
        "annotated_bare_hex": 0,
        "residual_non_script_func_0x": 0,
        "residual_non_script_ram": 0,
        "residual_dat": 0,
        "residual_fun": 0,
    }
    unresolved: list[dict[str, Any]] = []

    # Strip trailing // line comment; skip pure comment lines
    code = line
    if "//" in code:
        # Respect // outside strings/block comments simply for Ghidra C lines
        idx = code.find("//")
        if idx == 0:
            return stats, unresolved
        code = code[:idx]

    stats["annotations"] = len(_RE_BLOCK_COMMENT.findall(code))

    # Build masked version where text inside /* ... */ is replaced with spaces of equal length
    # so we never treat addresses inside /* ... */ as bare code literals, while preserving indices
    masked_chars = list(code)
    for bm in _RE_BLOCK_COMMENT.finditer(code):
        for i in range(bm.start(), bm.end()):
            masked_chars[i] = " "
    masked = "".join(masked_chars)

    def _is_annotated(start_pos: int) -> bool:
        prefix = code[:start_pos]
        return bool(_RE_PRECEDING_ANNOT.search(prefix))

    seen_spans: list[tuple[int, int]] = []

    for m in _RE_FUNC_TOKEN.finditer(masked):
        seen_spans.append((m.start(), m.end()))
        addr = int(m.group(1), 16)
        annotated = _is_annotated(m.start())
        if annotated:
            stats["annotated_func_0x"] += 1
        elif known_addrs is not None and addr in known_addrs:
            cat, sym = known_addrs[addr]
            unresolved.append(
                {"kind": "func_0x", "token": m.group(0), "address": f"0x{addr:x}", "category": cat, "symbol": sym}
            )
        else:
            stats["residual_non_script_func_0x"] += 1

    for m in _RE_RAM_TOKEN.finditer(masked):
        seen_spans.append((m.start(), m.end()))
        addr = int(m.group(1), 16)
        annotated = _is_annotated(m.start())
        if annotated:
            stats["annotated_ram"] += 1
        elif known_addrs is not None and addr in known_addrs:
            cat, sym = known_addrs[addr]
            unresolved.append(
                {"kind": "ram", "token": m.group(0), "address": f"0x{addr:x}", "category": cat, "symbol": sym}
            )
        else:
            stats["residual_non_script_ram"] += 1

    for m in _RE_BARE_HEX.finditer(masked):
        s_pos, e_pos = m.start(), m.end()
        if any(sp_s <= s_pos and e_pos <= sp_e for sp_s, sp_e in seen_spans):
            continue
        addr = int(m.group(1), 16)
        annotated = _is_annotated(s_pos)
        if annotated:
            stats["annotated_bare_hex"] += 1
        elif known_addrs is not None and addr in known_addrs:
            cat, sym = known_addrs[addr]
            unresolved.append(
                {"kind": "bare_hex", "token": m.group(0), "address": f"0x{addr:x}", "category": cat, "symbol": sym}
            )

    stats["residual_dat"] = len(_RE_DAT_TOKEN.findall(masked))
    stats["residual_fun"] = len(_RE_FUN_TOKEN.findall(masked))
    return stats, unresolved


def verify_symbol_resolution(
    tsv_data: TsvData,
    resolved_dir: str | os.PathLike[str],
    script_json_path: str | os.PathLike[str] | None = None,
) -> dict[str, Any]:
    """F2: Verify decompiled_resolved/*.c completeness, 0 failures, and script.json resolution."""
    rdir = Path(resolved_dir)
    base_res = _scan_c_directory(tsv_data, rdir)

    known_addrs: dict[int, tuple[str, str]] | None = None
    script_json_loaded = False
    if script_json_path is not None:
        spath = Path(script_json_path)
        if spath.is_file():
            try:
                known_addrs = load_script_json_index(spath)
                script_json_loaded = True
            except (OSError, json.JSONDecodeError) as exc:
                base_res["errors"].append(f"Failed loading script.json: {exc}")
        else:
            base_res["errors"].append(f"script.json not found: {spath}")

    totals: Counter[str] = Counter()
    unresolved_by_cat: Counter[str] = Counter()
    unresolved_by_kind: Counter[str] = Counter()
    unresolved_total = 0
    unresolved_samples: list[dict[str, Any]] = []

    if rdir.is_dir():
        for fname in sorted(
            e.name for e in os.scandir(rdir) if e.name.endswith(".c") and e.is_file(follow_symlinks=False)
        ):
            fpath = rdir / fname
            try:
                text = fpath.read_text(encoding="utf-8", errors="replace")
            except OSError:
                continue
            for lineno, line in enumerate(text.splitlines(), start=1):
                line_stats, line_unres = _scan_line_for_tokens(line, known_addrs)
                for k, v in line_stats.items():
                    totals[k] += v
                for u in line_unres:
                    unresolved_total += 1
                    unresolved_by_cat[u["category"]] += 1
                    unresolved_by_kind[u["kind"]] += 1
                    if len(unresolved_samples) < 50:
                        u_rec = dict(u)
                        u_rec["file"] = fname
                        u_rec["line"] = lineno
                        unresolved_samples.append(u_rec)

    passed = (
        base_res["passed"]
        and len(base_res["errors"]) == 0
        and unresolved_total == 0
        and (script_json_path is None or script_json_loaded)
    )

    base_res["passed"] = passed
    base_res["script_json_loaded"] = script_json_loaded
    base_res["script_json_addresses"] = len(known_addrs) if known_addrs is not None else 0
    base_res["inline_annotations"] = totals["annotations"]
    base_res["annotated_tokens"] = {
        "func_0x": totals["annotated_func_0x"],
        "ram": totals["annotated_ram"],
        "bare_hex": totals["annotated_bare_hex"],
    }
    base_res["unresolved_known_total"] = unresolved_total
    base_res["unresolved_by_category"] = dict(unresolved_by_cat)
    base_res["unresolved_by_kind"] = dict(unresolved_by_kind)
    base_res["residual_non_script_json"] = {
        "func_0x": totals["residual_non_script_func_0x"],
        "ram": totals["residual_non_script_ram"],
        "DAT_": totals["residual_dat"],
        "FUN_": totals["residual_fun"],
    }
    base_res["samples"]["unresolved_known"] = unresolved_samples
    return base_res


def _match_module_prefix(cls_name: str) -> str | None:
    for pref in MODULE_PREFIXES:
        if cls_name.startswith(pref):
            return pref
    return None


def compute_ground_truth_progress(
    tsv_path: str | os.PathLike[str],
    decompiled_dir: str | os.PathLike[str],
    resolved_dir: str | os.PathLike[str] | None = None,
) -> dict[str, Any]:
    """Compute ground-truth decompile & resolved metrics directly from disk."""
    tsv_data = load_game_methods(tsv_path)
    safe_to_cls = {safe_filename(cls): cls for cls in tsv_data.by_class}

    mod_total: dict[str, set[str]] = defaultdict(set)
    for cls in tsv_data.by_class:
        pref = _match_module_prefix(cls)
        if pref is not None:
            mod_total[pref].add(safe_filename(cls))

    classes_done = 0
    methods_done = 0
    methods_fail = 0
    total_bytes = 0
    mod_done: Counter[str] = Counter()

    ddir = Path(decompiled_dir)
    if ddir.is_dir():
        for entry in os.scandir(ddir):
            if not entry.name.endswith(".c") or not entry.is_file(follow_symlinks=False):
                continue
            try:
                st = entry.stat(follow_symlinks=False)
            except OSError:
                continue
            total_bytes += st.st_size
            if st.st_size <= 0:
                continue
            if safe_to_cls and entry.name not in safe_to_cls:
                continue
            try:
                txt = Path(entry.path).read_text(encoding="utf-8", errors="replace")
            except OSError:
                continue
            rva_cnt = txt.count("// RVA: 0x")
            fail_cnt = sum(txt.count(m) for m in FAILURE_MARKERS)
            methods_done += rva_cnt
            methods_fail += fail_cnt
            classes_done += 1
            cls_name = safe_to_cls.get(entry.name, entry.name[:-2])
            pref = _match_module_prefix(cls_name)
            if pref is not None:
                mod_done[pref] += 1

    resolved_classes = 0
    if resolved_dir is not None:
        rdir = Path(resolved_dir)
        if rdir.is_dir():
            for entry in os.scandir(rdir):
                if not entry.name.endswith(".c") or not entry.is_file(follow_symlinks=False):
                    continue
                try:
                    st = entry.stat(follow_symlinks=False)
                except OSError:
                    continue
                if st.st_size > 0 and (not safe_to_cls or entry.name in safe_to_cls):
                    resolved_classes += 1

    methods_ok = max(0, methods_done - methods_fail)
    modules = {}
    for pref in MODULE_PREFIXES:
        tot = len(mod_total[pref])
        if tot > 0:
            modules[pref] = {"done": min(mod_done[pref], tot), "total": tot}

    return {
        "classes_total": tsv_data.total_classes,
        "classes_done": classes_done,
        "methods_total": tsv_data.total_rows,
        "methods_done": methods_done,
        "methods_ok": methods_ok,
        "methods_fail": methods_fail,
        "resolved_classes": resolved_classes,
        "total_mb": total_bytes / 1048576.0,
        "modules": modules,
    }


def verify_dashboard(
    tsv_path: str | os.PathLike[str],
    decompiled_dir: str | os.PathLike[str],
    resolved_dir: str | os.PathLike[str] | None = None,
    base_url: str = "http://127.0.0.1:8765",
    tolerance: int = 0,
    timeout: float = 3.0,
) -> dict[str, Any]:
    """F2: Verify live /api/progress JSON + HTML dashboard against ground-truth disk counts."""
    gt = compute_ground_truth_progress(tsv_path, decompiled_dir, resolved_dir)
    base = base_url.rstrip("/")
    api_url = base if base.endswith("/api/progress") else f"{base}/api/progress"
    html_url = base[: -len("/api/progress")] + "/" if base.endswith("/api/progress") else f"{base}/"

    errors: list[str] = []
    api_data: dict[str, Any] | None = None
    html_ok = False
    html_status: int | None = None

    try:
        with urllib.request.urlopen(api_url, timeout=timeout) as resp:
            if resp.status != 200:
                errors.append(f"GET {api_url} returned HTTP {resp.status}")
            raw_body = resp.read().decode("utf-8", errors="replace")
        api_data = json.loads(raw_body)
        if not isinstance(api_data, dict):
            errors.append("/api/progress did not return a JSON object")
            api_data = None
    except (urllib.error.URLError, OSError, TimeoutError, json.JSONDecodeError) as exc:
        errors.append(f"Failed fetching {api_url}: {exc}")

    try:
        with urllib.request.urlopen(html_url, timeout=timeout) as resp:
            html_status = resp.status
            html_body = resp.read().decode("utf-8", errors="replace")
            if resp.status == 200 and "<html" in html_body.lower() and "/api/progress" in html_body:
                html_ok = True
            else:
                errors.append(f"Dashboard HTML check failed (status={resp.status})")
    except (urllib.error.URLError, OSError, TimeoutError) as exc:
        errors.append(f"Failed fetching {html_url}: {exc}")

    schema_missing: list[str] = []
    discrepancies: list[dict[str, Any]] = []

    if api_data is not None:
        schema_missing = [k for k in REQUIRED_DASHBOARD_KEYS if k not in api_data]
        if schema_missing:
            errors.append(f"Missing required /api/progress keys: {schema_missing}")

        m_done = api_data.get("methods_done")
        m_ok = api_data.get("methods_ok")
        m_fail = api_data.get("methods_fail")
        if all(isinstance(v, int) and not isinstance(v, bool) for v in (m_done, m_ok, m_fail)):
            if m_ok + m_fail != m_done:
                errors.append(
                    f"Arithmetic inconsistency: methods_ok ({m_ok}) + methods_fail ({m_fail}) != methods_done ({m_done})"
                )
        else:
            errors.append("methods_done / methods_ok / methods_fail must be integers")

        for total_key, gt_key in (("methods_total", "methods_total"), ("classes_total", "classes_total")):
            val = api_data.get(total_key)
            if val != gt[gt_key]:
                discrepancies.append({"field": total_key, "api": val, "disk": gt[gt_key]})

        compare_fields = ["classes_done", "methods_done", "methods_ok", "methods_fail"]
        if "resolved_classes" in api_data and resolved_dir is not None:
            compare_fields.append("resolved_classes")

        for field_name in compare_fields:
            val = api_data.get(field_name)
            expected = gt[field_name]
            if not isinstance(val, int) or isinstance(val, bool):
                discrepancies.append({"field": field_name, "api": val, "disk": expected, "error": "not int"})
            elif abs(val - expected) > tolerance:
                discrepancies.append(
                    {"field": field_name, "api": val, "disk": expected, "delta": val - expected}
                )

        # Module breakdown check
        api_mods = api_data.get("modules")
        if isinstance(api_mods, list):
            api_mod_map = {m.get("name"): m for m in api_mods if isinstance(m, dict) and "name" in m}
            for mod_name, gt_mod in gt["modules"].items():
                am = api_mod_map.get(mod_name)
                if am is None:
                    discrepancies.append({"field": f"modules[{mod_name}]", "api": None, "disk": gt_mod})
                else:
                    if am.get("total") != gt_mod["total"]:
                        discrepancies.append(
                            {"field": f"modules[{mod_name}].total", "api": am.get("total"), "disk": gt_mod["total"]}
                        )
                    ad = am.get("done")
                    if not isinstance(ad, int) or abs(ad - gt_mod["done"]) > tolerance:
                        discrepancies.append(
                            {"field": f"modules[{mod_name}].done", "api": ad, "disk": gt_mod["done"]}
                        )
        else:
            errors.append("modules field is not a list")

        if discrepancies:
            errors.append(f"Dashboard vs disk discrepancies ({len(discrepancies)}): {discrepancies[:5]}")

    passed = len(errors) == 0 and html_ok and api_data is not None and not schema_missing and not discrepancies
    return {
        "passed": passed,
        "api_url": api_url,
        "html_url": html_url,
        "html_ok": html_ok,
        "html_status": html_status,
        "tolerance": tolerance,
        "ground_truth": gt,
        "api_snapshot": {k: api_data.get(k) for k in ("classes_done", "classes_total", "methods_done", "methods_total", "methods_ok", "methods_fail", "resolved_classes")} if api_data else None,
        "schema_missing": schema_missing,
        "discrepancies": discrepancies,
        "errors": errors,
    }


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(description="Verify F1 (decompilation & Ghidra safety) and F2 (symbol resolution & dashboard).")
    parser.add_argument("--workspace", default=".")
    parser.add_argument("--tsv", default=None)
    parser.add_argument("--decompiled-dir", default=None)
    parser.add_argument("--resolved-dir", default=None)
    parser.add_argument("--script-json", default=None)
    parser.add_argument("--dashboard-url", default="http://127.0.0.1:8765")
    parser.add_argument("--ghidra-proj-dir", default=r"C:\tools\wkr_ghidra\proj")
    parser.add_argument("--ghidra-proj-name", default="WKR")
    parser.add_argument("--require-ghidra-pid", type=int, default=None)
    parser.add_argument("--skip-live-dashboard", action="store_true")
    parser.add_argument("--skip-ghidra-check", action="store_true")
    parser.add_argument("--dashboard-tolerance", type=int, default=0)
    parser.add_argument("--json-out", default=None)
    args = parser.parse_args(argv)

    ws = Path(args.workspace).resolve()
    tsv_path = Path(args.tsv) if args.tsv else ws / "tools" / "game_methods.tsv"
    decomp_dir = Path(args.decompiled_dir) if args.decompiled_dir else ws / "decompiled_c"
    res_dir = Path(args.resolved_dir) if args.resolved_dir else ws / "decompiled_resolved"
    script_json = Path(args.script_json) if args.script_json else ws / "il2cpp_dump" / "script.json"

    tsv_data = load_game_methods(tsv_path)
    results: dict[str, Any] = {
        "f1_decompiled_c": verify_decompiled_c(tsv_data, decomp_dir),
        "f2_symbol_resolution": verify_symbol_resolution(tsv_data, res_dir, script_json),
    }
    if not args.skip_ghidra_check:
        results["f1_ghidra_safety"] = verify_ghidra_safety(
            args.ghidra_proj_dir,
            proj_name=args.ghidra_proj_name,
            expected_pid=args.require_ghidra_pid,
            require_ghidra_pid=args.require_ghidra_pid is not None,
        )
    if not args.skip_live_dashboard:
        results["f2_dashboard"] = verify_dashboard(
            tsv_path,
            decomp_dir,
            res_dir,
            base_url=args.dashboard_url,
            tolerance=args.dashboard_tolerance,
        )

    all_passed = all(v.get("passed", False) for v in results.values())
    payload = {"passed": all_passed, "results": results}
    if args.json_out:
        out_p = Path(args.json_out)
        out_p.parent.mkdir(parents=True, exist_ok=True)
        out_p.write_text(json.dumps(payload, indent=2), encoding="utf-8")
    else:
        print(json.dumps(payload, indent=2))
    return 0 if all_passed else 2


if __name__ == "__main__":
    sys.exit(main())
