"""Comprehensive stdlib unittest suite (Tiers 1-4) for tools/e2e_verify/.

Uses synthetic tempfile fixtures and ephemeral ThreadingHTTPServer (127.0.0.1:0).
Never touches live Ghidra WKR project or launches Unity.exe.
"""

from __future__ import annotations

from collections import defaultdict
from contextlib import contextmanager
import http.server
import json
from pathlib import Path
import socketserver
import subprocess
import sys
import tempfile
import threading
import unittest
from typing import Any, Callable

_REPO_ROOT = str(Path(__file__).resolve().parents[3])
if _REPO_ROOT not in sys.path:
    sys.path.insert(0, _REPO_ROOT)

from tools.e2e_verify.run_e2e_suite import format_markdown_report, run_static_suite
from tools.e2e_verify.verify_decompilation import (
    REQUIRED_DASHBOARD_KEYS,
    compute_ground_truth_progress,
    load_game_methods,
    safe_filename,
    verify_dashboard,
    verify_decompiled_c,
    verify_ghidra_safety,
    verify_symbol_resolution,
)
from tools.e2e_verify.verify_parity_and_fidelity import (
    DUMMY_DLL_MARKER,
    check_asmdef_dag,
    check_guid_integrity,
    compare_parity,
    detect_stubs,
    parse_dump_cs,
    scan_csharp_scripts,
)
from tools.e2e_verify.verify_unity_build import (
    build_compile_args,
    build_test_runner_args,
    check_unity_hygiene,
    parse_compile_log,
    parse_nunit_xml,
)


def e2e_test(tier: int, feature: str) -> Callable[[Callable[..., Any]], Callable[..., Any]]:
    def decorator(fn: Callable[..., Any]) -> Callable[..., Any]:
        setattr(fn, "e2e_tier", tier)
        setattr(fn, "e2e_feature", feature)
        return fn

    return decorator


class _SilentServer(socketserver.ThreadingMixIn, http.server.HTTPServer):
    daemon_threads = True


@contextmanager
def _ephemeral_dashboard(payload_fn: Callable[[], dict[str, Any]], html: str = "<html><body>/api/progress</body></html>"):
    class Handler(http.server.BaseHTTPRequestHandler):
        def do_GET(self):
            if self.path.startswith("/api/progress"):
                body = json.dumps(payload_fn()).encode("utf-8")
                self.send_response(200)
                self.send_header("Content-Type", "application/json")
                self.send_header("Content-Length", str(len(body)))
                self.end_headers()
                self.wfile.write(body)
            else:
                body = html.encode("utf-8")
                self.send_response(200)
                self.send_header("Content-Type", "text/html")
                self.send_header("Content-Length", str(len(body)))
                self.end_headers()
                self.wfile.write(body)

        def log_message(self, format, *args):
            pass

    srv = _SilentServer(("127.0.0.1", 0), Handler)
    port = srv.server_address[1]
    t = threading.Thread(target=srv.serve_forever, daemon=True)
    t.start()
    try:
        yield f"http://127.0.0.1:{port}"
    finally:
        srv.shutdown()
        srv.server_close()


def _write_tsv(path: Path, rows: list[tuple[str, str, str, str, str]]) -> None:
    lines = ["\t".join(r) for r in rows]
    path.write_text("\n".join(lines) + ("\n" if lines else ""), encoding="utf-8")


def _write_decompiled_file(directory: Path, cls_name: str, methods: list[tuple[str, str, str]]) -> Path:
    fp = directory / safe_filename(cls_name)
    chunks = [
        "// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4",
        f"// Class: {cls_name}",
        "",
    ]
    for rva_hex, meth_name, body in methods:
        chunks.extend(
            [
                "// ============================================================",
                f"// RVA: 0x{rva_hex} | {cls_name}.{meth_name}",
                "// ============================================================",
                body,
                "",
            ]
        )
    fp.write_text("\n".join(chunks), encoding="utf-8")
    return fp


def _make_full_dashboard_json(gt: dict[str, Any], overrides: dict[str, Any] | None = None) -> dict[str, Any]:
    mods = [
        {"name": k, "done": v["done"], "total": v["total"], "pct": 100.0}
        for k, v in gt["modules"].items()
    ]
    payload: dict[str, Any] = {
        "timestamp": "12:00:00",
        "finished": gt["methods_done"] >= gt["methods_total"],
        "methods_done": gt["methods_done"],
        "methods_total": gt["methods_total"],
        "methods_ok": gt["methods_ok"],
        "methods_fail": gt["methods_fail"],
        "methods_pct": 100.0 if gt["methods_total"] else 0.0,
        "classes_done": gt["classes_done"],
        "classes_total": gt["classes_total"],
        "resolved_classes": gt["resolved_classes"],
        "total_mb": gt["total_mb"],
        "speed_per_min": 0.0,
        "eta_text": "Selesai!",
        "success_rate": 100.0,
        "overall_pct": 60.6,
        "modules": mods,
        "stages": [{"name": "stage1", "pct": 100.0}],
        "recent": [],
    }
    if overrides:
        payload.update(overrides)
    return payload


def _create_synthetic_unity_project(root: Path, clean: bool = True) -> Path:
    proj = root / "UnityProj"
    (proj / "ProjectSettings").mkdir(parents=True)
    (proj / "Packages").mkdir(parents=True)
    (proj / "Temp").mkdir(parents=True)
    (proj / "Library" / "ScriptAssemblies").mkdir(parents=True)
    (proj / "Assets" / "Scripts").mkdir(parents=True)

    (proj / "ProjectSettings" / "ProjectVersion.txt").write_text(
        "m_EditorVersion: 2020.3.30f1\nm_EditorVersionWithRevision: 2020.3.30f1 (abc)\n",
        encoding="utf-8",
    )
    (proj / "Packages" / "packages-lock.json").write_text(
        json.dumps({"dependencies": {"com.unity.test-framework": {"version": "1.1.29", "depth": 2}}}),
        encoding="utf-8",
    )
    fake_exe = root / "Unity.exe"
    fake_exe.write_bytes(b"MZ")
    if not clean:
        (proj / "Temp" / "UnityLockfile").write_bytes(b"")
        (proj / "Library" / "ScriptAssemblies" / "UnityEngine.UIElementsModule.dll").write_bytes(b"\x00" * 4096)
    return fake_exe


class TestE2EHarness(unittest.TestCase):
    # =========================================================================
    # TIER 1 — F1 (6 tests)
    # =========================================================================

    @e2e_test(1, "F1")
    def test_t1_f1_valid_tsv_and_complete_decompiled_c_with_duplicate_generics(self):
        with tempfile.TemporaryDirectory() as td:
            root = Path(td)
            tsv = root / "game_methods.tsv"
            ddir = root / "decompiled_c"
            ddir.mkdir()
            rows = [
                ("1871bfc", "1871c20", "Atlas.Gameplay.Kart.KartPartLoader", "RequestLoadGenericPart<AntennaDefinition>", "s1"),
                ("1871bfc", "1871c20", "Atlas.Gameplay.Kart.KartPartLoader", "RequestLoadGenericPart<BoostDefinition>", "s2"),
                ("1455940", "1455980", "Atlas.Analytics.AtlasAnalyticsEvents", "FillReusableCustomParamsList", "s3"),
                ("14574f8", "1457520", "Atlas.Analytics.AtlasAnalyticsEvents", "FillReusableCustomParamsList", "s4"),
            ]
            _write_tsv(tsv, rows)
            _write_decompiled_file(
                ddir,
                "Atlas.Gameplay.Kart.KartPartLoader",
                [
                    ("1871bfc", "RequestLoadGenericPart<AntennaDefinition>", "void f1() { return; }"),
                    ("1871bfc", "RequestLoadGenericPart<BoostDefinition>", "void f2() { return; }"),
                ],
            )
            _write_decompiled_file(
                ddir,
                "Atlas.Analytics.AtlasAnalyticsEvents",
                [
                    ("1455940", "FillReusableCustomParamsList", "void f3() { return; }"),
                    ("14574f8", "FillReusableCustomParamsList", "void f4() { return; }"),
                ],
            )
            res = verify_decompiled_c(load_game_methods(tsv), ddir)
            self.assertTrue(res["passed"], res)
            self.assertEqual(res["methods_found"], 4)
            self.assertEqual(res["classes_found"], 2)

    @e2e_test(1, "F1")
    def test_t1_f1_special_chars_safe_filename_mapping(self):
        with tempfile.TemporaryDirectory() as td:
            root = Path(td)
            tsv = root / "game_methods.tsv"
            ddir = root / "decompiled_c"
            ddir.mkdir()
            cls = "Atlas.Gameplay.Kart.KartCompositeFactory.<>c|A, B"
            self.assertEqual(safe_filename(cls), "Atlas.Gameplay.Kart.KartCompositeFactory.__c_A__B.c")
            _write_tsv(tsv, [("1449388", "1449390", cls, ".ctor", "sym")])
            _write_decompiled_file(ddir, cls, [("1449388", ".ctor", "void ctor() {}")])
            res = verify_decompiled_c(load_game_methods(tsv), ddir)
            self.assertTrue(res["passed"], res)

    @e2e_test(1, "F1")
    def test_t1_f1_missing_or_empty_c_file_detected(self):
        with tempfile.TemporaryDirectory() as td:
            root = Path(td)
            tsv = root / "game_methods.tsv"
            ddir = root / "decompiled_c"
            ddir.mkdir()
            _write_tsv(
                tsv,
                [
                    ("1000", "1010", "Atlas.A", "M1", "s1"),
                    ("1020", "1030", "Atlas.B", "M2", "s2"),
                ],
            )
            (ddir / "Atlas.A.c").write_text("", encoding="utf-8")
            res = verify_decompiled_c(load_game_methods(tsv), ddir)
            self.assertFalse(res["passed"])
            self.assertEqual(res["empty_files_count"], 1)
            self.assertEqual(res["missing_files_count"], 1)

    @e2e_test(1, "F1")
    def test_t1_f1_missing_duplicate_generic_rva_detected(self):
        with tempfile.TemporaryDirectory() as td:
            root = Path(td)
            tsv = root / "game_methods.tsv"
            ddir = root / "decompiled_c"
            ddir.mkdir()
            cls = "Atlas.Gameplay.Kart.KartPartLoader"
            _write_tsv(
                tsv,
                [
                    ("1871bfc", "1871c20", cls, "RequestLoadGenericPart<A>", "s1"),
                    ("1871bfc", "1871c20", cls, "RequestLoadGenericPart<B>", "s2"),
                ],
            )
            _write_decompiled_file(ddir, cls, [("1871bfc", "RequestLoadGenericPart<A>", "void f() {}")])
            res = verify_decompiled_c(load_game_methods(tsv), ddir)
            self.assertFalse(res["passed"])
            self.assertEqual(res["missing_methods_count"], 1)

    @e2e_test(1, "F1")
    def test_t1_f1_all_three_failure_markers_detected(self):
        with tempfile.TemporaryDirectory() as td:
            root = Path(td)
            tsv = root / "game_methods.tsv"
            ddir = root / "decompiled_c"
            ddir.mkdir()
            cls = "Atlas.FailTest"
            _write_tsv(
                tsv,
                [
                    ("1000", "1010", cls, "M1", "s1"),
                    ("1020", "1030", cls, "M2", "s2"),
                    ("1040", "1050", cls, "M3", "s3"),
                ],
            )
            _write_decompiled_file(
                ddir,
                cls,
                [
                    ("1000", "M1", "// [DECOMPILE_FAILED]"),
                    ("1020", "M2", "// [DECOMPILE_EXCEPTION]"),
                    ("1040", "M3", "// [NO_FUNCTION_AT_ADDRESS]"),
                ],
            )
            res = verify_decompiled_c(load_game_methods(tsv), ddir)
            self.assertFalse(res["passed"])
            self.assertEqual(res["total_failures"], 3)
            self.assertEqual(res["failure_markers"]["// [DECOMPILE_FAILED]"], 1)
            self.assertEqual(res["failure_markers"]["// [DECOMPILE_EXCEPTION]"], 1)
            self.assertEqual(res["failure_markers"]["// [NO_FUNCTION_AT_ADDRESS]"], 1)

    @e2e_test(1, "F1")
    def test_t1_f1_ghidra_project_safety_valid_and_missing_gpr(self):
        with tempfile.TemporaryDirectory() as td:
            pdir = Path(td) / "proj"
            pdir.mkdir()
            (pdir / "WKR.gpr").write_text("<PROJECT/>", encoding="utf-8")
            (pdir / "WKR.rep").mkdir()
            (pdir / "WKR.rep" / "idata").write_text("ok", encoding="utf-8")
            (pdir / "WKR.lock").write_text("lock", encoding="utf-8")

            ok_res = verify_ghidra_safety(pdir, "WKR", expected_pid=5796, require_ghidra_pid=False, processes=[])
            self.assertTrue(ok_res["passed"], ok_res)
            self.assertTrue(ok_res["lock_present"])

            (pdir / "WKR.gpr").unlink()
            bad_res = verify_ghidra_safety(pdir, "WKR", processes=[])
            self.assertFalse(bad_res["passed"])

    # =========================================================================
    # TIER 1 — F2 (6 tests)
    # =========================================================================

    @e2e_test(1, "F2")
    def test_t1_f2_complete_resolved_c_with_script_json_annotations(self):
        with tempfile.TemporaryDirectory() as td:
            root = Path(td)
            tsv = root / "game_methods.tsv"
            rdir = root / "decompiled_resolved"
            rdir.mkdir()
            sjson = root / "script.json"
            sjson.write_text(
                json.dumps(
                    {
                        "ScriptMethod": [{"Address": 0x1500000, "Name": "Atlas.Foo$$Bar"}],
                        "ScriptString": [{"Address": 0x3783428, "Value": "hello"}],
                        "ScriptMetadata": [{"Address": 0x3d20028, "Name": "Atlas.Foo_TypeInfo"}],
                        "ScriptMetadataMethod": [{"Address": 0x37683e0, "Name": "Method$Atlas.Foo.Bar()"}],
                    }
                ),
                encoding="utf-8",
            )
            _write_tsv(tsv, [("1449388", "14493a0", "Atlas.Foo", "Bar", "s1")])
            body = (
                "void f() {\n"
                "  /*Atlas.Foo$$Bar*/ func_0x01500000();\n"
                "  /*STR('hello')*/ lRam0000000003783428 = 1;\n"
                "  /*Atlas.Foo_TypeInfo*/ func_0x00f78a20(/*Atlas.Foo_TypeInfo*/ 0x3d20028);\n"
                "  use(/*Method$Atlas.Foo.Bar()*/ lRam00000000037683e0);\n"
                "}"
            )
            _write_decompiled_file(rdir, "Atlas.Foo", [("1449388", "Bar", body)])
            res = verify_symbol_resolution(load_game_methods(tsv), rdir, sjson)
            self.assertTrue(res["passed"], res)
            self.assertEqual(res["unresolved_known_total"], 0)
            self.assertGreaterEqual(res["inline_annotations"], 5)

    @e2e_test(1, "F2")
    def test_t1_f2_unresolved_script_json_tokens_detected(self):
        with tempfile.TemporaryDirectory() as td:
            root = Path(td)
            tsv = root / "game_methods.tsv"
            rdir = root / "decompiled_resolved"
            rdir.mkdir()
            sjson = root / "script.json"
            sjson.write_text(
                json.dumps(
                    {
                        "ScriptMethod": [{"Address": 0x1500000, "Name": "Atlas.Foo$$Bar"}],
                        "ScriptString": [{"Address": 0x3783428, "Value": "hello"}],
                        "ScriptMetadata": [{"Address": 0x3d20028, "Name": "Atlas.Foo_TypeInfo"}],
                        "ScriptMetadataMethod": [{"Address": 0x37683e0, "Name": "Method$Atlas.Foo.Bar()"}],
                    }
                ),
                encoding="utf-8",
            )
            _write_tsv(tsv, [("1449388", "14493a0", "Atlas.Foo", "Bar", "s1")])
            body = (
                "void f() {\n"
                "  func_0x01500000();\n"
                "  lRam0000000003783428 = 1;\n"
                "  func_0x00f78a20(0x3d20028);\n"
                "  use(lRam00000000037683e0);\n"
                "}"
            )
            _write_decompiled_file(rdir, "Atlas.Foo", [("1449388", "Bar", body)])
            res = verify_symbol_resolution(load_game_methods(tsv), rdir, sjson)
            self.assertFalse(res["passed"])
            self.assertEqual(res["unresolved_known_total"], 4)
            self.assertEqual(res["unresolved_by_kind"]["bare_hex"], 1)
            self.assertEqual(res["unresolved_by_kind"]["func_0x"], 1)
            self.assertEqual(res["unresolved_by_kind"]["ram"], 2)

    @e2e_test(1, "F2")
    def test_t1_f2_missing_resolved_file_and_failure_marker_detected(self):
        with tempfile.TemporaryDirectory() as td:
            root = Path(td)
            tsv = root / "game_methods.tsv"
            rdir = root / "decompiled_resolved"
            rdir.mkdir()
            _write_tsv(
                tsv,
                [
                    ("1000", "1010", "Atlas.A", "M1", "s1"),
                    ("1020", "1030", "Atlas.B", "M2", "s2"),
                ],
            )
            _write_decompiled_file(rdir, "Atlas.A", [("1000", "M1", "// [DECOMPILE_FAILED]")])
            res = verify_symbol_resolution(load_game_methods(tsv), rdir)
            self.assertFalse(res["passed"])
            self.assertEqual(res["missing_files_count"], 1)
            self.assertEqual(res["total_failures"], 1)

    @e2e_test(1, "F2")
    def test_t1_f2_ephemeral_dashboard_matches_disk_truth(self):
        with tempfile.TemporaryDirectory() as td:
            root = Path(td)
            tsv = root / "game_methods.tsv"
            ddir = root / "decompiled_c"
            rdir = root / "decompiled_resolved"
            ddir.mkdir()
            rdir.mkdir()
            _write_tsv(tsv, [("1000", "1010", "Atlas.Gameplay.Kart.K1", "M1", "s1")])
            _write_decompiled_file(ddir, "Atlas.Gameplay.Kart.K1", [("1000", "M1", "void f() {}")])
            _write_decompiled_file(rdir, "Atlas.Gameplay.Kart.K1", [("1000", "M1", "void f() {}")])
            gt = compute_ground_truth_progress(tsv, ddir, rdir)
            with _ephemeral_dashboard(lambda: _make_full_dashboard_json(gt)) as url:
                res = verify_dashboard(tsv, ddir, rdir, base_url=url, tolerance=0)
            self.assertTrue(res["passed"], res)

    @e2e_test(1, "F2")
    def test_t1_f2_ephemeral_dashboard_stale_counts_detected(self):
        with tempfile.TemporaryDirectory() as td:
            root = Path(td)
            tsv = root / "game_methods.tsv"
            ddir = root / "decompiled_c"
            rdir = root / "decompiled_resolved"
            ddir.mkdir()
            rdir.mkdir()
            _write_tsv(
                tsv,
                [
                    ("1000", "1010", "Atlas.A", "M1", "s1"),
                    ("1020", "1030", "Atlas.A", "M2", "s2"),
                ],
            )
            _write_decompiled_file(
                ddir,
                "Atlas.A",
                [("1000", "M1", "void f1() {}"), ("1020", "M2", "// [DECOMPILE_FAILED]")],
            )
            gt = compute_ground_truth_progress(tsv, ddir, rdir)
            # Simulate stale log bug: reports 1 done, 0 fail
            stale = _make_full_dashboard_json(gt, {"methods_done": 1, "methods_ok": 1, "methods_fail": 0})
            with _ephemeral_dashboard(lambda: stale) as url:
                res = verify_dashboard(tsv, ddir, rdir, base_url=url, tolerance=0)
            self.assertFalse(res["passed"])
            self.assertGreaterEqual(len(res["discrepancies"]), 2)

    @e2e_test(1, "F2")
    def test_t1_f2_ground_truth_module_prefix_precedence(self):
        with tempfile.TemporaryDirectory() as td:
            root = Path(td)
            tsv = root / "game_methods.tsv"
            ddir = root / "decompiled_c"
            ddir.mkdir()
            _write_tsv(
                tsv,
                [
                    ("1000", "1010", "Atlas.Gameplay.Kart.K", "M1", "s1"),
                    ("1020", "1030", "Atlas.Gameplay.G", "M2", "s2"),
                    ("1040", "1050", "Core.Assets.A", "M3", "s3"),
                ],
            )
            _write_decompiled_file(ddir, "Atlas.Gameplay.Kart.K", [("1000", "M1", "void f() {}")])
            gt = compute_ground_truth_progress(tsv, ddir)
            self.assertEqual(gt["modules"]["Atlas.Gameplay.Kart"], {"done": 1, "total": 1})
            self.assertEqual(gt["modules"]["Atlas.Gameplay"], {"done": 0, "total": 1})
            self.assertEqual(gt["modules"]["Core."], {"done": 0, "total": 1})

    # =========================================================================
    # TIER 1 — F3 (6 tests)
    # =========================================================================

    @e2e_test(1, "F3")
    def test_t1_f3_valid_acyclic_asmdef_dag_name_and_guid_refs(self):
        with tempfile.TemporaryDirectory() as td:
            sroot = Path(td) / "Scripts"
            (sroot / "Core.Assets").mkdir(parents=True)
            (sroot / "Atlas").mkdir(parents=True)
            g_core = "11111111111111111111111111111111"
            g_atlas = "22222222222222222222222222222222"
            (sroot / "Core.Assets" / "Core.Assets.asmdef").write_text(
                json.dumps({"name": "Core.Assets", "references": [], "allowUnsafeCode": True}),
                encoding="utf-8",
            )
            (sroot / "Core.Assets" / "Core.Assets.asmdef.meta").write_text(
                f"fileFormatVersion: 2\nguid: {g_core}\n", encoding="utf-8"
            )
            (sroot / "Atlas" / "Atlas.asmdef").write_text(
                json.dumps({"name": "Atlas", "references": [f"GUID:{g_core}", "Unity.Burst"], "allowUnsafeCode": True}),
                encoding="utf-8",
            )
            (sroot / "Atlas" / "Atlas.asmdef.meta").write_text(
                f"fileFormatVersion: 2\nguid: {g_atlas}\n", encoding="utf-8"
            )
            res = check_asmdef_dag(sroot)
            self.assertTrue(res["passed"], res)
            self.assertEqual(res["cycles_count"], 0)
            self.assertEqual(res["ref_style_counts"]["GUID"], 1)

    @e2e_test(1, "F3")
    def test_t1_f3_cyclic_asmdef_dag_detected(self):
        with tempfile.TemporaryDirectory() as td:
            sroot = Path(td) / "Scripts"
            (sroot / "Core.A").mkdir(parents=True)
            (sroot / "Core.B").mkdir(parents=True)
            (sroot / "Core.A" / "Core.A.asmdef").write_text(
                json.dumps({"name": "Core.A", "references": ["Core.B"], "allowUnsafeCode": True}),
                encoding="utf-8",
            )
            (sroot / "Core.B" / "Core.B.asmdef").write_text(
                json.dumps({"name": "Core.B", "references": ["Core.A"], "allowUnsafeCode": True}),
                encoding="utf-8",
            )
            res = check_asmdef_dag(sroot)
            self.assertFalse(res["passed"])
            self.assertEqual(res["cycles_count"], 1)

    @e2e_test(1, "F3")
    def test_t1_f3_missing_allow_unsafe_code_detected(self):
        with tempfile.TemporaryDirectory() as td:
            sroot = Path(td) / "Scripts"
            (sroot / "Atlas").mkdir(parents=True)
            (sroot / "Atlas" / "Atlas.asmdef").write_text(
                json.dumps({"name": "Atlas", "references": [], "allowUnsafeCode": False}),
                encoding="utf-8",
            )
            res = check_asmdef_dag(sroot)
            self.assertFalse(res["passed"])
            self.assertIn("Atlas", res["missing_allow_unsafe"])

    @e2e_test(1, "F3")
    def test_t1_f3_stale_uielements_4kb_detected(self):
        with tempfile.TemporaryDirectory() as td:
            root = Path(td)
            exe = _create_synthetic_unity_project(root, clean=False)
            (root / "UnityProj" / "Temp" / "UnityLockfile").unlink()
            res = check_unity_hygiene(root / "UnityProj", unity_exe=exe, processes=[])
            self.assertFalse(res["passed"])
            self.assertTrue(res["uielements_stale"])
            self.assertEqual(res["uielements_override_bytes"], 4096)

    @e2e_test(1, "F3")
    def test_t1_f3_unity_lockfile_and_process_detection(self):
        with tempfile.TemporaryDirectory() as td:
            root = Path(td)
            exe = _create_synthetic_unity_project(root, clean=True)
            (root / "UnityProj" / "Temp" / "UnityLockfile").write_bytes(b"")

            # Unity Hub & Licensing client must NOT be treated as Unity.exe
            hub_procs = [
                {"ProcessId": 20840, "Name": "Unity Hub.exe", "CommandLine": "Unity Hub.exe"},
                {"ProcessId": 16768, "Name": "Unity.Licensing.Client.exe", "CommandLine": "Unity.Licensing.Client.exe"},
            ]
            stale_res = check_unity_hygiene(root / "UnityProj", unity_exe=exe, processes=hub_procs)
            self.assertFalse(stale_res["passed"])
            self.assertEqual(stale_res["lock_status"], "STALE_LOCKFILE")
            self.assertEqual(len(stale_res["unity_processes"]), 0)

            active_procs = hub_procs + [{"ProcessId": 9999, "Name": "Unity.exe", "CommandLine": "Unity.exe -batchmode"}]
            locked_res = check_unity_hygiene(root / "UnityProj", unity_exe=exe, processes=active_procs)
            self.assertFalse(locked_res["passed"])
            self.assertEqual(locked_res["lock_status"], "LOCKED_BY_UNITY")

    @e2e_test(1, "F3")
    def test_t1_f3_unity_hygiene_clean_project_passes(self):
        with tempfile.TemporaryDirectory() as td:
            root = Path(td)
            exe = _create_synthetic_unity_project(root, clean=True)
            res = check_unity_hygiene(root / "UnityProj", unity_exe=exe, processes=[])
            self.assertTrue(res["passed"], res)
            self.assertEqual(res["lock_status"], "CLEAN")

    # =========================================================================
    # TIER 1 — F4 (6 tests)
    # =========================================================================

    @e2e_test(1, "F4")
    def test_t1_f4_parse_dump_cs_images_nested_empty_ns_and_burst_attr(self):
        with tempfile.TemporaryDirectory() as td:
            dp = Path(td) / "dump.cs"
            dp.write_text(
                """// Image 0: mscorlib.dll - 0
// Image 88: Atlas.dll - 10
// Image 92: Assembly-CSharp.dll - 50

// Namespace: 
internal class <Module> // TypeDefIndex: 10
{}

// Namespace: 
public class AnimatorRandomInt : MonoBehaviour // TypeDefIndex: 11
{
}

// Namespace: 
[Serializable]
public class OutlineFeature.OutlineSettings // TypeDefIndex: 12
{
}

// Namespace: Atlas.Outlines
public class OutlineFeature : ScriptableRendererFeature // TypeDefIndex: 13
{
}

// Namespace: Atlas.Maths
[BurstCompileAttribute] // RVA: 0x24E6C Offset: 0x24E6C VA: 0x24E6C
public struct DistanceJob : IJob // TypeDefIndex: 14
{
\t// Fields
\t[ReadOnlyAttribute] // RVA: 0x10 Offset: 0x10 VA: 0x10
\tpublic float4 Position; // 0x0
\t// Methods
\t// RVA: 0x15807A8 Offset: 0x15807A8 VA: 0x15807A8 Slot: 4
\tpublic void Execute() { }
}

// Namespace: Code.Atlas.Geometry
public struct PolyJob : IJob // TypeDefIndex: 15
{
}

// Namespace: Atlas.Gameplay
private sealed class ApplicationBehaviour.<Start>d__66 : IEnumerator<object> // TypeDefIndex: 16
{
}
""",
                encoding="utf-8",
            )
            res = parse_dump_cs(dp)
            self.assertTrue(res["passed"])
            self.assertEqual(res["excluded_module_count"], 1)
            self.assertEqual(res["excluded_cg_count"], 1)
            names = {t.full_name: t for t in res["user_types"]}
            self.assertIn("AnimatorRandomInt", names)
            self.assertEqual(names["AnimatorRandomInt"].namespace, "")
            self.assertEqual(names["OutlineFeature.OutlineSettings"].namespace, "Atlas.Outlines")
            self.assertIn("BurstCompile", names["DistanceJob"].attributes)
            self.assertEqual(names["DistanceJob"].interfaces, ["IJob"])
            self.assertEqual(names["PolyJob"].namespace, "Code.Atlas.Geometry")

    @e2e_test(1, "F4")
    def test_t1_f4_missing_type_detected(self):
        with tempfile.TemporaryDirectory() as td:
            root = Path(td)
            dp = root / "dump.cs"
            dp.write_text(
                "// Image 88: Atlas.dll - 0\n// Namespace: Atlas\npublic class PresentType // TypeDefIndex: 0\n{}\n// Namespace: Atlas\npublic class MissingType // TypeDefIndex: 1\n{}\n",
                encoding="utf-8",
            )
            sdir = root / "Scripts" / "Atlas"
            sdir.mkdir(parents=True)
            (sdir / "PresentType.cs").write_text("namespace Atlas { public class PresentType {} }", encoding="utf-8")
            parity = compare_parity(parse_dump_cs(dp), scan_csharp_scripts(root / "Scripts"))
            self.assertFalse(parity["passed"])
            self.assertEqual(parity["missing_types_count"], 1)

    @e2e_test(1, "F4")
    def test_t1_f4_base_class_mismatch_detected(self):
        with tempfile.TemporaryDirectory() as td:
            root = Path(td)
            dp = root / "dump.cs"
            dp.write_text(
                "// Image 88: Atlas.dll - 0\n// Namespace: Atlas.Gameplay.Kart\npublic class KartPhysics // TypeDefIndex: 0\n{}\n",
                encoding="utf-8",
            )
            sdir = root / "Scripts" / "Atlas"
            sdir.mkdir(parents=True)
            (sdir / "KartPhysics.cs").write_text(
                "namespace Atlas.Gameplay.Kart { public class KartPhysics : MonoBehaviour {} }",
                encoding="utf-8",
            )
            parity = compare_parity(parse_dump_cs(dp), scan_csharp_scripts(root / "Scripts"))
            self.assertFalse(parity["passed"])
            self.assertEqual(parity["base_class_mismatches_count"], 1)

    @e2e_test(1, "F4")
    def test_t1_f4_missing_namespace_wrapper_detected(self):
        with tempfile.TemporaryDirectory() as td:
            root = Path(td)
            dp = root / "dump.cs"
            dp.write_text(
                "// Image 88: Atlas.dll - 0\n// Namespace: Atlas.UI\npublic class AtlasScreen : MonoBehaviour // TypeDefIndex: 0\n{}\n",
                encoding="utf-8",
            )
            sdir = root / "Scripts" / "Atlas"
            sdir.mkdir(parents=True)
            (sdir / "AtlasScreen.cs").write_text("public class AtlasScreen : MonoBehaviour {}", encoding="utf-8")
            parity = compare_parity(parse_dump_cs(dp), scan_csharp_scripts(root / "Scripts"))
            self.assertFalse(parity["passed"])
            self.assertEqual(parity["namespace_mismatches_count"], 1)

    @e2e_test(1, "F4")
    def test_t1_f4_dummydll_comment_stub_detected(self):
        with tempfile.TemporaryDirectory() as td:
            sdir = Path(td) / "Scripts" / "Atlas"
            sdir.mkdir(parents=True)
            (sdir / "Dummy.cs").write_text(f"namespace Atlas {{ public class Dummy {{ /* {DUMMY_DLL_MARKER} */ }} }}", encoding="utf-8")
            stubs = detect_stubs(scan_csharp_scripts(Path(td) / "Scripts"))
            self.assertFalse(stubs["passed"])
            self.assertEqual(stubs["dummydll_files_count"], 1)

    @e2e_test(1, "F4")
    def test_t1_f4_clean_1_to_1_parity_and_guids_passes(self):
        with tempfile.TemporaryDirectory() as td:
            root = Path(td)
            dp = root / "dump.cs"
            dp.write_text(
                """// Image 88: Atlas.dll - 0
// Namespace: Atlas.Maths
[BurstCompileAttribute] // RVA: 0x10 Offset: 0x10 VA: 0x10
public struct DistanceJob : IJob // TypeDefIndex: 0
{
\t// Fields
\t[SerializeFieldAttribute] // RVA: 0x20 Offset: 0x20 VA: 0x20
\tpublic float Scale; // 0x0
\t// Methods
\t// RVA: 0x1000 Offset: 0x1000 VA: 0x1000
\tpublic void Execute() { }
}
""",
                encoding="utf-8",
            )
            sdir = root / "Assets" / "Scripts" / "Atlas"
            sdir.mkdir(parents=True)
            cs_p = sdir / "DistanceJob.cs"
            cs_p.write_text(
                """namespace Atlas.Maths {
    [BurstCompile]
    public struct DistanceJob : IJob {
        [SerializeField]
        public float Scale;
        public void Execute() {
            Scale = Scale * 2.0f;
        }
    }
}""",
                encoding="utf-8",
            )
            (sdir / "DistanceJob.cs.meta").write_text(
                "fileFormatVersion: 2\nguid: aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa\n", encoding="utf-8"
            )
            cs_res = scan_csharp_scripts(root / "Assets" / "Scripts")
            parity = compare_parity(parse_dump_cs(dp), cs_res)
            stubs = detect_stubs(cs_res)
            guids = check_guid_integrity(root / "Assets", root / "Assets" / "Scripts")
            self.assertTrue(parity["passed"], parity)
            self.assertTrue(stubs["passed"], stubs)
            self.assertTrue(guids["passed"], guids)

    # =========================================================================
    # TIER 2 — F1 (6 tests)
    # =========================================================================

    @e2e_test(2, "F1")
    def test_t2_f1_empty_and_corrupt_tsv_handled_cleanly(self):
        with tempfile.TemporaryDirectory() as td:
            root = Path(td)
            ddir = root / "decompiled_c"
            ddir.mkdir()
            empty_tsv = root / "empty.tsv"
            empty_tsv.write_text("", encoding="utf-8")
            r1 = verify_decompiled_c(load_game_methods(empty_tsv), ddir)
            self.assertFalse(r1["passed"])

            corrupt_tsv = root / "corrupt.tsv"
            corrupt_tsv.write_text("not_hex\t10\tAtlas.A\tM\tsym\nbad_cols\t123\n", encoding="utf-8")
            td_bad = load_game_methods(corrupt_tsv)
            self.assertEqual(len(td_bad.malformed_lines), 2)
            r2 = verify_decompiled_c(td_bad, ddir)
            self.assertFalse(r2["passed"])

    @e2e_test(2, "F1")
    def test_t2_f1_overloaded_methods_same_class_distinct_rva(self):
        with tempfile.TemporaryDirectory() as td:
            root = Path(td)
            tsv = root / "game_methods.tsv"
            ddir = root / "decompiled_c"
            ddir.mkdir()
            cls = "Atlas.Analytics.AtlasAnalyticsEvents"
            _write_tsv(
                tsv,
                [
                    ("1455940", "1455980", cls, "FillReusableCustomParamsList", "s1"),
                    ("14574f8", "1457520", cls, "FillReusableCustomParamsList", "s2"),
                ],
            )
            _write_decompiled_file(ddir, cls, [("1455940", "FillReusableCustomParamsList", "void f() {}")])
            res = verify_decompiled_c(load_game_methods(tsv), ddir)
            self.assertFalse(res["passed"])
            self.assertEqual(res["missing_methods_count"], 1)

    @e2e_test(2, "F1")
    def test_t2_f1_orphan_c_file_and_class_header_mismatch(self):
        with tempfile.TemporaryDirectory() as td:
            root = Path(td)
            tsv = root / "game_methods.tsv"
            ddir = root / "decompiled_c"
            ddir.mkdir()
            _write_tsv(tsv, [("1000", "1010", "Atlas.A", "M1", "s1")])
            (ddir / "Atlas.A.c").write_text(
                "// Decompiled\n// Class: Atlas.WRONG\n// RVA: 0x1000 | Atlas.A.M1\nvoid f() {}\n",
                encoding="utf-8",
            )
            (ddir / "Orphan.c").write_text("// orphan", encoding="utf-8")
            res = verify_decompiled_c(load_game_methods(tsv), ddir)
            self.assertFalse(res["passed"])
            self.assertEqual(res["header_mismatches_count"], 1)
            self.assertEqual(res["orphan_files_count"], 1)

    @e2e_test(2, "F1")
    def test_t2_f1_duplicate_concurrent_ghidra_writers_flagged(self):
        with tempfile.TemporaryDirectory() as td:
            pdir = Path(td) / "proj"
            pdir.mkdir()
            (pdir / "WKR.gpr").write_text("<PROJECT/>", encoding="utf-8")
            (pdir / "WKR.rep").mkdir()
            (pdir / "WKR.rep" / "idata").write_text("ok", encoding="utf-8")

            procs = [
                {"ProcessId": 7728, "Name": "javaw.exe", "CommandLine": "minecraft.Main"},
                {"ProcessId": 8888, "Name": "java.exe", "CommandLine": f'ghidra.app.util.headless.AnalyzeHeadless "{pdir}_shards" "WKR_SHARD_1"'},
                {"ProcessId": 1001, "Name": "java.exe", "CommandLine": f'ghidra.app.util.headless.AnalyzeHeadless "{pdir}" "WKR" -postScript DecompileGameMethods.java'},
                {"ProcessId": 1002, "Name": "java.exe", "CommandLine": f'ghidra.app.util.headless.AnalyzeHeadless "{pdir}" "WKR" -postScript RetryFailed.java'},
            ]
            res = verify_ghidra_safety(pdir, "WKR", processes=procs)
            self.assertFalse(res["passed"])
            self.assertEqual(sorted(res["active_wkr_pids"]), [1001, 1002])

            single = verify_ghidra_safety(pdir, "WKR", processes=procs[:3])
            self.assertTrue(single["passed"], single)
            self.assertEqual(single["active_wkr_pids"], [1001])

    @e2e_test(2, "F1")
    def test_t2_f1_require_ghidra_pid_flag_behavior(self):
        with tempfile.TemporaryDirectory() as td:
            pdir = Path(td) / "proj"
            pdir.mkdir()
            (pdir / "WKR.gpr").write_text("<PROJECT/>", encoding="utf-8")
            (pdir / "WKR.rep").mkdir()
            (pdir / "WKR.rep" / "idata").write_text("ok", encoding="utf-8")

            proc_alive = [
                {"ProcessId": 24000, "Name": "java.exe", "CommandLine": f'AnalyzeHeadless "{pdir}" "WKR" -postScript RetryFailed.java'}
            ]
            r_miss = verify_ghidra_safety(pdir, "WKR", expected_pid=5796, require_ghidra_pid=True, processes=proc_alive)
            self.assertFalse(r_miss["passed"])
            r_ok = verify_ghidra_safety(pdir, "WKR", expected_pid=24000, require_ghidra_pid=True, processes=proc_alive)
            self.assertTrue(r_ok["passed"], r_ok)

    @e2e_test(2, "F1")
    def test_t2_f1_safefilename_collision_detected(self):
        with tempfile.TemporaryDirectory() as td:
            root = Path(td)
            tsv = root / "game_methods.tsv"
            ddir = root / "decompiled_c"
            ddir.mkdir()
            _write_tsv(
                tsv,
                [
                    ("1000", "1010", "Atlas.A<T>", "M1", "s1"),
                    ("1020", "1030", "Atlas.A|T>", "M2", "s2"),
                ],
            )
            td_col = load_game_methods(tsv)
            self.assertIn("Atlas.A_T_.c", td_col.collisions)
            res = verify_decompiled_c(td_col, ddir)
            self.assertFalse(res["passed"])

    # =========================================================================
    # TIER 2 — F2 (6 tests)
    # =========================================================================

    @e2e_test(2, "F2")
    def test_t2_f2_unreachable_dashboard_no_crash(self):
        with tempfile.TemporaryDirectory() as td:
            root = Path(td)
            tsv = root / "game_methods.tsv"
            ddir = root / "decompiled_c"
            ddir.mkdir()
            _write_tsv(tsv, [("1000", "1010", "Atlas.A", "M1", "s1")])
            res = verify_dashboard(tsv, ddir, base_url="http://127.0.0.1:59999", timeout=0.5)
            self.assertFalse(res["passed"])
            self.assertGreaterEqual(len(res["errors"]), 1)

    @e2e_test(2, "F2")
    def test_t2_f2_malformed_json_and_arithmetic_inconsistency(self):
        with tempfile.TemporaryDirectory() as td:
            root = Path(td)
            tsv = root / "game_methods.tsv"
            ddir = root / "decompiled_c"
            ddir.mkdir()
            _write_tsv(tsv, [("1000", "1010", "Atlas.A", "M1", "s1")])
            _write_decompiled_file(ddir, "Atlas.A", [("1000", "M1", "void f() {}")])
            gt = compute_ground_truth_progress(tsv, ddir)
            bad = _make_full_dashboard_json(gt, {"methods_ok": 1, "methods_fail": 1})  # 1+1 != 1
            bad.pop("stages")
            with _ephemeral_dashboard(lambda: bad) as url:
                res = verify_dashboard(tsv, ddir, base_url=url)
            self.assertFalse(res["passed"])
            self.assertIn("stages", res["schema_missing"])

    @e2e_test(2, "F2")
    def test_t2_f2_progress_server_offline_scan_once(self):
        import tools.progress_server as ps

        with tempfile.TemporaryDirectory() as td:
            root = Path(td)
            ddir = root / "decompiled_c"
            rdir = root / "decompiled_resolved"
            ddir.mkdir()
            rdir.mkdir()
            _write_decompiled_file(
                ddir,
                "Atlas.Gameplay.Kart.K",
                [("1000", "M1", "void f1() {}"), ("1010", "M2", "// [DECOMPILE_FAILED]")],
            )
            _write_decompiled_file(
                rdir,
                "Atlas.Gameplay.Kart.K",
                [("1000", "M1", "void f1() {}"), ("1010", "M2", "void f2() {}")],
            )

            orig = (
                ps.DECOMP_DIR,
                ps.RESOLVED_DIR,
                ps.ALL_CLASSES,
                ps.SAFE_TO_CLASS,
                ps.CLASS_MODULE,
                ps.MOD_TOTAL_CLASSES,
                ps.TOTAL_METHODS,
                dict(ps.FILE_CACHE),
            )
            try:
                ps.DECOMP_DIR = str(ddir)
                ps.RESOLVED_DIR = str(rdir)
                ps.ALL_CLASSES = {"Atlas.Gameplay.Kart.K"}
                ps.SAFE_TO_CLASS = {"Atlas.Gameplay.Kart.K": "Atlas.Gameplay.Kart.K"}
                ps.CLASS_MODULE = {"Atlas.Gameplay.Kart.K": "Atlas.Gameplay.Kart"}
                ps.MOD_TOTAL_CLASSES = defaultdict(set, {"Atlas.Gameplay.Kart": {"Atlas.Gameplay.Kart.K"}})
                ps.TOTAL_METHODS = 2
                ps.FILE_CACHE.clear()
                snap = ps.scan_once()
                self.assertEqual(snap["methods_done"], 2)
                self.assertEqual(snap["methods_ok"], 1)
                self.assertEqual(snap["methods_fail"], 1)
                self.assertEqual(snap["classes_done"], 1)
                self.assertEqual(snap["resolved_classes"], 1)
                for k in REQUIRED_DASHBOARD_KEYS:
                    self.assertIn(k, snap)
            finally:
                (
                    ps.DECOMP_DIR,
                    ps.RESOLVED_DIR,
                    ps.ALL_CLASSES,
                    ps.SAFE_TO_CLASS,
                    ps.CLASS_MODULE,
                    ps.MOD_TOTAL_CLASSES,
                    ps.TOTAL_METHODS,
                    cached,
                ) = orig
                ps.FILE_CACHE.clear()
                ps.FILE_CACHE.update(cached)

    @e2e_test(2, "F2")
    def test_t2_f2_residual_non_script_json_tokens_no_false_positive(self):
        with tempfile.TemporaryDirectory() as td:
            root = Path(td)
            tsv = root / "game_methods.tsv"
            rdir = root / "decompiled_resolved"
            rdir.mkdir()
            sjson = root / "script.json"
            sjson.write_text(json.dumps({"ScriptMethod": [{"Address": 0x1500000, "Name": "Atlas.A$$B"}]}), encoding="utf-8")
            _write_tsv(tsv, [("1449388", "14493a0", "Atlas.A", "M", "s1")])
            body = (
                "void f() {\n"
                "  if ((bRam0000000003eb4730 & 1) == 0) { func_0x00f78a20(DAT_03eb0000); }\n"
                "  /*Atlas.A$$B*/ func_0x01500000();\n"
                "  FUN_00123456();\n"
                "}"
            )
            _write_decompiled_file(rdir, "Atlas.A", [("1449388", "M", body)])
            res = verify_symbol_resolution(load_game_methods(tsv), rdir, sjson)
            self.assertTrue(res["passed"], res)
            self.assertEqual(res["residual_non_script_json"]["DAT_"], 1)
            self.assertEqual(res["residual_non_script_json"]["FUN_"], 1)
            self.assertEqual(res["residual_non_script_json"]["ram"], 1)

    @e2e_test(2, "F2")
    def test_t2_f2_dashboard_tolerance_boundary(self):
        with tempfile.TemporaryDirectory() as td:
            root = Path(td)
            tsv = root / "game_methods.tsv"
            ddir = root / "decompiled_c"
            ddir.mkdir()
            _write_tsv(tsv, [("1000", "1010", "Atlas.A", "M1", "s1"), ("1020", "1030", "Atlas.A", "M2", "s2")])
            _write_decompiled_file(ddir, "Atlas.A", [("1000", "M1", "void f() {}"), ("1020", "M2", "void g() {}")])
            gt = compute_ground_truth_progress(tsv, ddir)
            delta1 = _make_full_dashboard_json(gt, {"methods_done": 1, "methods_ok": 1, "methods_fail": 0})
            with _ephemeral_dashboard(lambda: delta1) as url:
                self.assertTrue(verify_dashboard(tsv, ddir, base_url=url, tolerance=1)["passed"])
                self.assertFalse(verify_dashboard(tsv, ddir, base_url=url, tolerance=0)["passed"])

    @e2e_test(2, "F2")
    def test_t2_f2_resolved_rva_header_mismatch_detected(self):
        with tempfile.TemporaryDirectory() as td:
            root = Path(td)
            tsv = root / "game_methods.tsv"
            rdir = root / "decompiled_resolved"
            rdir.mkdir()
            _write_tsv(tsv, [("1000", "1010", "Atlas.A", "M1", "s1")])
            _write_decompiled_file(rdir, "Atlas.A", [("9999", "M1", "void f() {}")])
            res = verify_symbol_resolution(load_game_methods(tsv), rdir)
            self.assertFalse(res["passed"])
            self.assertEqual(res["missing_methods_count"], 1)
            self.assertEqual(res["extra_methods_count"], 1)

    # =========================================================================
    # TIER 2 — F3 (6 tests)
    # =========================================================================

    @e2e_test(2, "F3")
    def test_t2_f3_parse_compile_log_errors_and_type_load_exception(self):
        log_txt = (
            "- Starting compile Library/ScriptAssemblies/Atlas.dll\n"
            "Assets/Scripts/Atlas/Foo.cs(12,5): error CS0234: The type or namespace name 'Bar' does not exist\n"
            "Assets/Scripts/Atlas/Foo.cs(20,9): error CS1061: 'Baz' does not contain a definition for 'Qux'\n"
            "TypeLoadException: Could not resolve type with token 01000004\n"
            "Scripts have compiler errors.\n"
            "Application will terminate with return code 1\n"
        )
        res = parse_compile_log(log_txt)
        self.assertFalse(res["passed"])
        self.assertEqual(res["cs_errors_count"], 2)
        self.assertEqual(res["cs_errors"][0]["code"], "CS0234")
        self.assertEqual(res["type_load_exceptions_count"], 1)
        self.assertTrue(res["scripts_have_compiler_errors"])
        self.assertEqual(res["unity_return_code"], 1)

    @e2e_test(2, "F3")
    def test_t2_f3_parse_compile_log_clean_with_burst_ilpp(self):
        log_txt = (
            "- Starting compile Library/ScriptAssemblies/Atlas.dll\n"
            "- Finished compile Library/ScriptAssemblies/Atlas.dll in 2.15 seconds\n"
            "- Starting ILPostProcessor 'zzzUnity.Burst.CodeGen.BurstILPostProcessor' on Atlas.dll\n"
            "- Finished ILPostProcessor 'zzzUnity.Burst.CodeGen.BurstILPostProcessor' on Atlas.dll in 0.40 seconds\n"
            "Exiting without the bug reporter. Application will terminate with return code 0\n"
        )
        res = parse_compile_log(log_txt)
        self.assertTrue(res["passed"], res)
        self.assertEqual(res["finished_assemblies_count"], 1)
        self.assertEqual(res["burst_ilpp_finished_count"], 1)

    @e2e_test(2, "F3")
    def test_t2_f3_parse_nunit_xml_mixed_and_clean(self):
        bad_xml = """<test-run id="2" testcasecount="2" result="Failed(Child)" total="2" passed="1" failed="1" inconclusive="0" skipped="0" asserts="2" engine-version="3.5.0.0">
  <test-suite type="Assembly" name="WKR.Tests.EditMode.dll" result="Failed">
    <test-case fullname="Tests.T1" name="T1" result="Passed" duration="0.01">
      <properties><property name="Category" value="Tier1" /></properties>
    </test-case>
    <test-case fullname="Tests.T2" name="T2" result="Failed" duration="0.02">
      <properties><property name="Category" value="Tier2" /></properties>
      <failure><message>Expected 10, got 0</message><stack-trace>at Tests.T2()</stack-trace></failure>
    </test-case>
  </test-suite>
</test-run>"""
        r_bad = parse_nunit_xml(bad_xml)
        self.assertFalse(r_bad["passed"])
        self.assertEqual(r_bad["failed_count"], 1)
        self.assertEqual(r_bad["failures"][0]["message"], "Expected 10, got 0")

        good_xml = bad_xml.replace('result="Failed(Child)"', 'result="Passed"').replace('failed="1"', 'failed="0"').replace('passed="1"', 'passed="2"').replace('result="Failed"', 'result="Passed"')
        # Remove second test-case failure element so it's clean Passed
        good_xml = good_xml.split("<failure>")[0] + "</test-case></test-suite></test-run>"
        r_good = parse_nunit_xml(good_xml)
        self.assertTrue(r_good["passed"], r_good)

    @e2e_test(2, "F3")
    def test_t2_f3_cli_args_quit_present_for_compile_omitted_for_runtests(self):
        c_args = build_compile_args("Unity.exe", "Proj", "compile.log")
        self.assertIn("-quit", c_args)
        t_args = build_test_runner_args(
            "Unity.exe", "Proj", "test.log", "EditMode", "results.xml", categories=["Tier1", "Tier2"]
        )
        self.assertNotIn("-quit", t_args)
        self.assertIn("-runTests", t_args)
        self.assertIn("EditMode", t_args)
        self.assertIn("Tier1;Tier2", t_args)

    @e2e_test(2, "F3")
    def test_t2_f3_broken_local_guid_ref_in_asmdef_detected(self):
        with tempfile.TemporaryDirectory() as td:
            sroot = Path(td) / "Scripts"
            (sroot / "Atlas").mkdir(parents=True)
            (sroot / "Atlas" / "Atlas.asmdef").write_text(
                json.dumps({"name": "Atlas", "references": ["GUID:deadbeefdeadbeefdeadbeefdeadbeef"], "allowUnsafeCode": True}),
                encoding="utf-8",
            )
            res = check_asmdef_dag(sroot)
            self.assertFalse(res["passed"])
            self.assertEqual(res["broken_guid_refs_count"], 1)

    @e2e_test(2, "F3")
    def test_t2_f3_version_mismatch_and_missing_test_framework(self):
        with tempfile.TemporaryDirectory() as td:
            root = Path(td)
            exe = _create_synthetic_unity_project(root, clean=True)
            (root / "UnityProj" / "ProjectSettings" / "ProjectVersion.txt").write_text(
                "m_EditorVersion: 2019.4.0f1\n", encoding="utf-8"
            )
            (root / "UnityProj" / "Packages" / "packages-lock.json").write_text("{}", encoding="utf-8")
            res = check_unity_hygiene(root / "UnityProj", unity_exe=exe, processes=[])
            self.assertFalse(res["passed"])
            self.assertFalse(res["version_ok"])
            self.assertIsNone(res["test_framework_version"])

    # =========================================================================
    # TIER 2 — F4 (6 tests)
    # =========================================================================

    @e2e_test(2, "F4")
    def test_t2_f4_method_body_stub_variants_vs_savemanager_yield_break(self):
        with tempfile.TemporaryDirectory() as td:
            sdir = Path(td) / "Scripts" / "Atlas"
            sdir.mkdir(parents=True)
            (sdir / "StubVariants.cs").write_text(
                """using System;
using System.Collections;
namespace Atlas.Save {
    public class StubVariants {
        public StubVariants() { } // ctor allowed empty
        public void M_Empty() { /* todo */ }
        public IEnumerator M_Yield() { yield break; }
        public object M_Null() { return null; }
        public int M_Default() { return default(int); }
        public float M_Zero() { return 0f; }
        public bool M_False() { return false; }
        public void M_NotImpl() { throw new NotImplementedException("nyi"); }
        public IEnumerator Load(uint slot) {
            if (slot >= 3) {
                yield break;
            }
            _guard = true;
            _data[slot] = ReadFile(slot);
            _guard = false;
            yield break;
        }
    }
}""",
                encoding="utf-8",
            )
            stubs = detect_stubs(scan_csharp_scripts(Path(td) / "Scripts"))
            self.assertFalse(stubs["passed"])
            flagged = {m["method"]: m["reason"] for m in stubs["samples"]["stub_methods"]}
            self.assertEqual(len(flagged), 7, flagged)
            self.assertNotIn("Load", flagged)
            self.assertNotIn("StubVariants", flagged)

    @e2e_test(2, "F4")
    def test_t2_f4_burst_serializefield_and_field_method_mismatches(self):
        with tempfile.TemporaryDirectory() as td:
            root = Path(td)
            dp = root / "dump.cs"
            dp.write_text(
                """// Image 88: Atlas.dll - 0
// Namespace: Atlas.Maths
[BurstCompileAttribute] // RVA: 0x10 Offset: 0x10 VA: 0x10
public struct MyJob : IJob // TypeDefIndex: 0
{
\t// Fields
\t[SerializeFieldAttribute] // RVA: 0x20 Offset: 0x20 VA: 0x20
\tprivate float _speed; // 0x0
\t// Methods
\t// RVA: 0x1000 Offset: 0x1000 VA: 0x1000
\tpublic void Execute() { }
}
""",
                encoding="utf-8",
            )
            sdir = root / "Scripts" / "Atlas"
            sdir.mkdir(parents=True)
            (sdir / "MyJob.cs").write_text(
                "namespace Atlas.Maths { public struct MyJob : IJob { private int _speed; } }",
                encoding="utf-8",
            )
            parity = compare_parity(parse_dump_cs(dp), scan_csharp_scripts(root / "Scripts"))
            self.assertFalse(parity["passed"])
            self.assertGreaterEqual(parity["attribute_mismatches_count"], 2)
            self.assertEqual(parity["field_mismatch_types_count"], 1)
            self.assertEqual(parity["method_mismatch_types_count"], 1)

    @e2e_test(2, "F4")
    def test_t2_f4_duplicate_cs_meta_guid_and_missing_meta(self):
        with tempfile.TemporaryDirectory() as td:
            assets = Path(td) / "Assets"
            sdir = assets / "Scripts" / "Atlas"
            sdir.mkdir(parents=True)
            dup = "abcdef0123456789abcdef0123456789"
            (sdir / "A.cs").write_text("class A {}", encoding="utf-8")
            (sdir / "A.cs.meta").write_text(f"guid: {dup}\n", encoding="utf-8")
            (sdir / "B.cs").write_text("class B {}", encoding="utf-8")
            (sdir / "B.cs.meta").write_text(f"guid: {dup}\n", encoding="utf-8")
            (sdir / "C.cs").write_text("class C {}", encoding="utf-8")
            res = check_guid_integrity(assets)
            self.assertFalse(res["passed"])
            self.assertEqual(res["duplicate_guids_count"], 1)
            self.assertEqual(res["missing_meta_count"], 1)

    @e2e_test(2, "F4")
    def test_t2_f4_scene_prefab_mscript_external_vs_broken_local(self):
        with tempfile.TemporaryDirectory() as td:
            assets = Path(td) / "Assets"
            sdir = assets / "Scripts" / "Atlas"
            scenes = assets / "Scenes"
            sdir.mkdir(parents=True)
            scenes.mkdir(parents=True)
            local_g = "1234567890abcdef1234567890abcdef"
            ext_ugui_g = "fe87c0e1cc204ed48ad3b37840f39efc"
            removed_local_g = "99999999999999999999999999999999"

            (sdir / "SplashBehaviour.cs").write_text("namespace Atlas { public class SplashBehaviour {} }", encoding="utf-8")
            (sdir / "SplashBehaviour.cs.meta").write_text(f"guid: {local_g}\n", encoding="utf-8")

            scene_yaml = (
                f"m_Script: {{fileID: 11500000, guid: {local_g}, type: 3}}\n"
                f"m_Script: {{fileID: 11500000, guid: {ext_ugui_g}, type: 3}}\n"
            )
            (scenes / "Splash.unity").write_text(scene_yaml, encoding="utf-8")

            ok_res = check_guid_integrity(assets)
            self.assertTrue(ok_res["passed"], ok_res)
            self.assertEqual(ok_res["resolved_local_script_refs"], 1)
            self.assertEqual(ok_res["external_unmapped_script_guids_count"], 1)

            # Now reference a previously local GUID missing from disk (via baseline)
            (scenes / "Splash.unity").write_text(
                scene_yaml + f"m_Script: {{fileID: 11500000, guid: {removed_local_g}, type: 3}}\n",
                encoding="utf-8",
            )
            bad_res = check_guid_integrity(assets, baseline_guids={"Atlas/Old.cs.meta": removed_local_g})
            self.assertFalse(bad_res["passed"])
            self.assertGreaterEqual(bad_res["broken_script_refs_count"], 1)

    @e2e_test(2, "F4")
    def test_t2_f4_nested_types_and_generics_parity(self):
        with tempfile.TemporaryDirectory() as td:
            root = Path(td)
            dp = root / "dump.cs"
            dp.write_text(
                """// Image 52: Core.Assets.dll - 0
// Namespace: 
public sealed class AssetManager.LoadHandler : MulticastDelegate // TypeDefIndex: 0
{}
// Namespace: 
public struct AssetManager.Request<T> // TypeDefIndex: 1
{
\t// Fields
\tpublic int Id; // 0x0
}
// Namespace: Core.Assets
public class AssetManager // TypeDefIndex: 2
{
\t// Methods
\t// RVA: 0x1000 Offset: 0x1000 VA: 0x1000
\tpublic void Load() { }
}
""",
                encoding="utf-8",
            )
            sdir = root / "Scripts" / "Core.Assets"
            sdir.mkdir(parents=True)
            (sdir / "AssetManager.cs").write_text(
                """namespace Core.Assets {
    public class AssetManager {
        public delegate void LoadHandler(int x);
        public struct Request<TItem> {
            public int Id;
        }
        public void Load() {
            int x = 1;
            x += 1;
        }
    }
}""",
                encoding="utf-8",
            )
            parity = compare_parity(parse_dump_cs(dp), scan_csharp_scripts(root / "Scripts"))
            self.assertTrue(parity["passed"], parity)

    @e2e_test(2, "F4")
    def test_t2_f4_binary_dirs_pruned_and_baseline_guid_change_detected(self):
        with tempfile.TemporaryDirectory() as td:
            assets = Path(td) / "Assets"
            sdir = assets / "Scripts" / "Atlas"
            texdir = assets / "Texture2D"
            sdir.mkdir(parents=True)
            texdir.mkdir(parents=True)
            (sdir / "A.cs").write_text("class A {}", encoding="utf-8")
            (sdir / "A.cs.meta").write_text("guid: 11111111111111111111111111111111\n", encoding="utf-8")
            # Put broken prefab inside pruned Texture2D dir to prove pruning skips binary dirs
            (texdir / "Ignored.prefab").write_text("m_Script: {fileID: 11500000, guid: 00000000000000000000000000000000, type: 3}\n", encoding="utf-8")

            res = check_guid_integrity(
                assets,
                baseline_guids={"Atlas/A.cs.meta": "22222222222222222222222222222222"},
            )
            self.assertFalse(res["passed"])
            self.assertEqual(res["scenes_prefabs_scanned"], 0)
            self.assertEqual(res["changed_baseline_guids_count"], 1)

    # =========================================================================
    # TIER 3 — Pairwise Cross-Feature Integration (5 tests)
    # =========================================================================

    @e2e_test(3, "F1xF2")
    def test_t3_f1_f2_decompile_to_resolved_and_dashboard_drift(self):
        with tempfile.TemporaryDirectory() as td:
            root = Path(td)
            tsv = root / "game_methods.tsv"
            ddir = root / "decompiled_c"
            rdir = root / "decompiled_resolved"
            ddir.mkdir()
            rdir.mkdir()
            sjson = root / "script.json"
            sjson.write_text(json.dumps({"ScriptMethod": [{"Address": 0x1600000, "Name": "Atlas.A$$Helper"}]}), encoding="utf-8")
            _write_tsv(tsv, [("1449388", "14493a0", "Atlas.A", "Run", "s1")])
            _write_decompiled_file(ddir, "Atlas.A", [("1449388", "Run", "void f() { func_0x01600000(); }")])
            _write_decompiled_file(rdir, "Atlas.A", [("1449388", "Run", "void f() { /*Atlas.A$$Helper*/ func_0x01600000(); }")])

            tsv_data = load_game_methods(tsv)
            self.assertTrue(verify_decompiled_c(tsv_data, ddir)["passed"])
            self.assertTrue(verify_symbol_resolution(tsv_data, rdir, sjson)["passed"])
            gt = compute_ground_truth_progress(tsv, ddir, rdir)
            drifted = _make_full_dashboard_json(gt, {"methods_done": 0, "methods_ok": 0, "methods_fail": 0})
            with _ephemeral_dashboard(lambda: drifted) as url:
                self.assertFalse(verify_dashboard(tsv, ddir, rdir, base_url=url)["passed"])

    @e2e_test(3, "F2xF1")
    def test_t3_f2_f1_ghidra_multiwriter_with_resolved_pipeline(self):
        with tempfile.TemporaryDirectory() as td:
            root = Path(td)
            tsv = root / "game_methods.tsv"
            rdir = root / "decompiled_resolved"
            pdir = root / "proj"
            rdir.mkdir()
            pdir.mkdir()
            (pdir / "WKR.gpr").write_text("<PROJECT/>", encoding="utf-8")
            (pdir / "WKR.rep").mkdir()
            (pdir / "WKR.rep" / "idata").write_text("ok", encoding="utf-8")
            _write_tsv(tsv, [("1000", "1010", "Atlas.A", "M", "s1")])
            _write_decompiled_file(rdir, "Atlas.A", [("1000", "M", "void f() {}")])

            self.assertTrue(verify_symbol_resolution(load_game_methods(tsv), rdir)["passed"])
            procs = [
                {"ProcessId": 1, "Name": "java.exe", "CommandLine": f'AnalyzeHeadless "{pdir}" "WKR"'},
                {"ProcessId": 2, "Name": "java.exe", "CommandLine": f'AnalyzeHeadless "{pdir}" "WKR"'},
            ]
            self.assertFalse(verify_ghidra_safety(pdir, "WKR", processes=procs)["passed"])

    @e2e_test(3, "F3xF4")
    def test_t3_f3_f4_asmdef_dag_plus_parity_and_guids(self):
        with tempfile.TemporaryDirectory() as td:
            root = Path(td)
            dp = root / "dump.cs"
            dp.write_text(
                "// Image 52: Core.Assets.dll - 0\n// Namespace: Core.Assets\npublic class Loader // TypeDefIndex: 0\n{}\n"
                "// Image 88: Atlas.dll - 10\n// Namespace: Atlas.Gameplay\npublic class Driver : MonoBehaviour // TypeDefIndex: 10\n{}\n",
                encoding="utf-8",
            )
            assets = root / "Assets"
            sroot = assets / "Scripts"
            (sroot / "Core.Assets").mkdir(parents=True)
            (sroot / "Atlas").mkdir(parents=True)
            (sroot / "Core.Assets" / "Core.Assets.asmdef").write_text(
                json.dumps({"name": "Core.Assets", "references": [], "allowUnsafeCode": True}), encoding="utf-8"
            )
            (sroot / "Atlas" / "Atlas.asmdef").write_text(
                json.dumps({"name": "Atlas", "references": ["Core.Assets"], "allowUnsafeCode": True}), encoding="utf-8"
            )
            (sroot / "Core.Assets" / "Loader.cs").write_text("namespace Core.Assets { public class Loader {} }", encoding="utf-8")
            (sroot / "Core.Assets" / "Loader.cs.meta").write_text("guid: 11111111111111111111111111111111\n", encoding="utf-8")
            (sroot / "Atlas" / "Driver.cs").write_text("namespace Atlas.Gameplay { public class Driver : MonoBehaviour {} }", encoding="utf-8")
            (sroot / "Atlas" / "Driver.cs.meta").write_text("guid: 22222222222222222222222222222222\n", encoding="utf-8")

            self.assertTrue(check_asmdef_dag(sroot)["passed"])
            cs_res = scan_csharp_scripts(sroot)
            self.assertTrue(compare_parity(parse_dump_cs(dp), cs_res)["passed"])
            self.assertTrue(detect_stubs(cs_res)["passed"])
            self.assertTrue(check_guid_integrity(assets)["passed"])

    @e2e_test(3, "F4xF3")
    def test_t3_f4_f3_hygiene_blocks_otherwise_clean_parity(self):
        with tempfile.TemporaryDirectory() as td:
            root = Path(td)
            exe = _create_synthetic_unity_project(root, clean=False)
            dp = root / "dump.cs"
            dp.write_text("// Image 88: Atlas.dll - 0\n// Namespace: Atlas\npublic class Clean // TypeDefIndex: 0\n{}\n", encoding="utf-8")
            sdir = root / "UnityProj" / "Assets" / "Scripts" / "Atlas"
            sdir.mkdir(parents=True)
            (sdir / "Clean.cs").write_text("namespace Atlas { public class Clean {} }", encoding="utf-8")
            self.assertTrue(compare_parity(parse_dump_cs(dp), scan_csharp_scripts(root / "UnityProj" / "Assets" / "Scripts"))["passed"])
            hyg = check_unity_hygiene(root / "UnityProj", unity_exe=exe, processes=[])
            self.assertFalse(hyg["passed"])
            self.assertEqual(hyg["lock_status"], "STALE_LOCKFILE")
            self.assertTrue(hyg["uielements_stale"])

    @e2e_test(3, "F1xF4")
    def test_t3_f1_f4_tsv_classes_correspond_to_dump_parity(self):
        with tempfile.TemporaryDirectory() as td:
            root = Path(td)
            tsv = root / "game_methods.tsv"
            ddir = root / "decompiled_c"
            ddir.mkdir()
            _write_tsv(tsv, [("1000", "1010", "Atlas.Save.SaveManager", "Load", "s1")])
            _write_decompiled_file(ddir, "Atlas.Save.SaveManager", [("1000", "Load", "void f() {}")])
            dp = root / "dump.cs"
            dp.write_text(
                "// Image 88: Atlas.dll - 0\n// Namespace: Atlas.Save\npublic class SaveManager // TypeDefIndex: 0\n{\n\t// Methods\n\t// RVA: 0x1000\n\tpublic void Load() { }\n}\n",
                encoding="utf-8",
            )
            sdir = root / "Scripts" / "Atlas"
            sdir.mkdir(parents=True)
            (sdir / "SaveManager.cs").write_text("namespace Atlas.Save { public class SaveManager { public void Load() { int a = 1; } } }", encoding="utf-8")

            self.assertTrue(verify_decompiled_c(load_game_methods(tsv), ddir)["passed"])
            self.assertTrue(compare_parity(parse_dump_cs(dp), scan_csharp_scripts(root / "Scripts"))["passed"])

    # =========================================================================
    # TIER 4 — End-to-End Scenarios (4 tests)
    # =========================================================================

    @e2e_test(4, "F1+F2")
    def test_t4_e2e_f1_f2_decompile_resolve_dashboard_ghidra_pipeline(self):
        with tempfile.TemporaryDirectory() as td:
            root = Path(td)
            tsv = root / "game_methods.tsv"
            ddir = root / "decompiled_c"
            rdir = root / "decompiled_resolved"
            pdir = root / "ghidra_proj"
            ddir.mkdir()
            rdir.mkdir()
            pdir.mkdir()
            (pdir / "WKR.gpr").write_text("<PROJECT/>", encoding="utf-8")
            (pdir / "WKR.rep").mkdir()
            (pdir / "WKR.rep" / "idata").write_text("ok", encoding="utf-8")

            sjson = root / "script.json"
            sjson.write_text(
                json.dumps(
                    {
                        "ScriptMethod": [{"Address": 0x1800000, "Name": "Core.Services.Svc$$Init"}],
                        "ScriptString": [{"Address": 0x3783428, "Value": "ok"}],
                        "ScriptMetadata": [{"Address": 0x3d20028, "Name": "Atlas.Kart_TypeInfo"}],
                        "ScriptMetadataMethod": [{"Address": 0x37683e0, "Name": "Method$Atlas.Kart.Run()"}],
                    }
                ),
                encoding="utf-8",
            )
            cls1 = "Atlas.Gameplay.Kart.KartPartLoader"
            cls2 = "Atlas.Gameplay.Kart.KartCompositeFactory.<>c"
            _write_tsv(
                tsv,
                [
                    ("1871bfc", "1871c10", cls1, "Load<A>", "s1"),
                    ("1871bfc", "1871c10", cls1, "Load<B>", "s2"),
                    ("1449388", "1449398", cls2, ".ctor", "s3"),
                ],
            )
            _write_decompiled_file(
                ddir,
                cls1,
                [("1871bfc", "Load<A>", "void f() { func_0x01800000(); }"), ("1871bfc", "Load<B>", "void g() { use(0x3d20028); }")],
            )
            _write_decompiled_file(ddir, cls2, [("1449388", ".ctor", "void c() { use(lRam0000000003783428); }")])
            _write_decompiled_file(
                rdir,
                cls1,
                [
                    ("1871bfc", "Load<A>", "void f() { /*Core.Services.Svc$$Init*/ func_0x01800000(); }"),
                    ("1871bfc", "Load<B>", "void g() { use(/*Atlas.Kart_TypeInfo*/ 0x3d20028); }"),
                ],
            )
            _write_decompiled_file(
                rdir,
                cls2,
                [("1449388", ".ctor", "void c() { use(/*STR('ok')*/ lRam0000000003783428, /*Method$Atlas.Kart.Run()*/ lRam00000000037683e0); }")],
            )

            td_obj = load_game_methods(tsv)
            r_decomp = verify_decompiled_c(td_obj, ddir)
            r_res = verify_symbol_resolution(td_obj, rdir, sjson)
            r_ghidra = verify_ghidra_safety(pdir, "WKR", processes=[])
            gt = compute_ground_truth_progress(tsv, ddir, rdir)
            with _ephemeral_dashboard(lambda: _make_full_dashboard_json(gt)) as url:
                r_dash = verify_dashboard(tsv, ddir, rdir, base_url=url)

            self.assertTrue(r_decomp["passed"], r_decomp)
            self.assertTrue(r_res["passed"], r_res)
            self.assertTrue(r_ghidra["passed"], r_ghidra)
            self.assertTrue(r_dash["passed"], r_dash)

    @e2e_test(4, "F1-F4")
    def test_t4_e2e_f3_f4_static_suite_clean_vs_m0_defect_exit_codes(self):
        with tempfile.TemporaryDirectory() as td:
            ws = Path(td)
            (ws / "tools").mkdir()
            (ws / "decompiled_c").mkdir()
            (ws / "decompiled_resolved").mkdir()
            (ws / "il2cpp_dump").mkdir()
            exe = _create_synthetic_unity_project(ws, clean=True)
            uproj = ws / "UnityProj"
            sroot = uproj / "Assets" / "Scripts"
            (sroot / "Atlas").mkdir(parents=True)

            _write_tsv(ws / "tools" / "game_methods.tsv", [("1000", "1010", "Atlas.Kart", "Step", "s1")])
            _write_decompiled_file(ws / "decompiled_c", "Atlas.Kart", [("1000", "Step", "void f() {}")])
            _write_decompiled_file(ws / "decompiled_resolved", "Atlas.Kart", [("1000", "Step", "void f() {}")])
            (ws / "il2cpp_dump" / "script.json").write_text("{}", encoding="utf-8")
            (ws / "il2cpp_dump" / "dump.cs").write_text(
                "// Image 88: Atlas.dll - 0\n// Namespace: Atlas\npublic class Kart // TypeDefIndex: 0\n{\n\t// Methods\n\t// RVA: 0x1000\n\tpublic void Step() { }\n}\n",
                encoding="utf-8",
            )
            (sroot / "Atlas" / "Atlas.asmdef").write_text(
                json.dumps({"name": "Atlas", "references": [], "allowUnsafeCode": True}), encoding="utf-8"
            )
            (sroot / "Atlas" / "Atlas.asmdef.meta").write_text("guid: aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa\n", encoding="utf-8")
            (sroot / "Atlas" / "Kart.cs").write_text(
                "namespace Atlas { public class Kart { public void Step() { int x = 1; } } }", encoding="utf-8"
            )
            (sroot / "Atlas" / "Kart.cs.meta").write_text("guid: bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb\n", encoding="utf-8")

            # Clean suite passes (skipping live Unity processes & ghidra via skip flags, testing dashboard live)
            gt = compute_ground_truth_progress(ws / "tools" / "game_methods.tsv", ws / "decompiled_c", ws / "decompiled_resolved")
            with _ephemeral_dashboard(lambda: _make_full_dashboard_json(gt)) as url:
                # Note: check_unity_hygiene queries local machine processes (Unity.exe is not running)
                clean_rep = run_static_suite(
                    workspace=ws,
                    unity_project=uproj,
                    unity_exe=str(exe),
                    ghidra_proj_dir="",
                    ghidra_proj_name="WKR",
                    require_ghidra_pid=None,
                    dashboard_url=url,
                    dashboard_tolerance=0,
                    skip_live_dashboard=False,
                    skip_ghidra_check=True,
                )
            self.assertTrue(clean_rep["passed"], clean_rep)

            # Inject M0 defects: DummyDll stub + Kart : MonoBehaviour + 4KB UIElementsModule.dll
            (sroot / "Atlas" / "Kart.cs").write_text(
                f"namespace Atlas {{ public class Kart : MonoBehaviour {{ /* {DUMMY_DLL_MARKER} */ }} }}",
                encoding="utf-8",
            )
            (uproj / "Library" / "ScriptAssemblies" / "UnityEngine.UIElementsModule.dll").write_bytes(b"\x00" * 4096)
            bad_rep = run_static_suite(
                workspace=ws,
                unity_project=uproj,
                unity_exe=str(exe),
                ghidra_proj_dir="",
                ghidra_proj_name="WKR",
                require_ghidra_pid=None,
                dashboard_url=url,
                dashboard_tolerance=0,
                skip_live_dashboard=True,
                skip_ghidra_check=True,
            )
            self.assertFalse(bad_rep["passed"])
            self.assertGreaterEqual(bad_rep["summary"]["failed_checks"], 3)
            md = format_markdown_report(bad_rep)
            self.assertIn("FAIL", md)

    @e2e_test(4, "F1-F4")
    def test_t4_e2e_cli_subprocess_static_and_json_md_outputs(self):
        with tempfile.TemporaryDirectory() as td:
            ws = Path(td)
            (ws / "tools").mkdir()
            (ws / "decompiled_c").mkdir()
            (ws / "decompiled_resolved").mkdir()
            (ws / "il2cpp_dump").mkdir()
            exe = _create_synthetic_unity_project(ws, clean=True)
            uproj = ws / "UnityProj"
            sroot = uproj / "Assets" / "Scripts"
            (sroot / "Atlas").mkdir(parents=True)

            _write_tsv(ws / "tools" / "game_methods.tsv", [("1000", "1010", "Atlas.Kart", "Step", "s1")])
            _write_decompiled_file(ws / "decompiled_c", "Atlas.Kart", [("1000", "Step", "void f() {}")])
            _write_decompiled_file(ws / "decompiled_resolved", "Atlas.Kart", [("1000", "Step", "void f() {}")])
            (ws / "il2cpp_dump" / "script.json").write_text("{}", encoding="utf-8")
            (ws / "il2cpp_dump" / "dump.cs").write_text(
                "// Image 88: Atlas.dll - 0\n// Namespace: Atlas\npublic class Kart // TypeDefIndex: 0\n{\n\t// Methods\n\t// RVA: 0x1000\n\tpublic void Step() { }\n}\n",
                encoding="utf-8",
            )
            (sroot / "Atlas" / "Atlas.asmdef").write_text(
                json.dumps({"name": "Atlas", "references": [], "allowUnsafeCode": True}), encoding="utf-8"
            )
            (sroot / "Atlas" / "Kart.cs").write_text(
                "namespace Atlas { public class Kart { public void Step() { int x = 1; } } }", encoding="utf-8"
            )
            (sroot / "Atlas" / "Kart.cs.meta").write_text("guid: bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb\n", encoding="utf-8")

            json_out = ws / "out" / "report.json"
            md_out = ws / "out" / "report.md"
            runner = Path(_REPO_ROOT) / "tools" / "e2e_verify" / "run_e2e_suite.py"
            proc = subprocess.run(
                [
                    sys.executable,
                    str(runner),
                    "--mode",
                    "static",
                    "--workspace",
                    str(ws),
                    "--unity-project",
                    str(uproj),
                    "--unity-exe",
                    str(exe),
                    "--skip-live-dashboard",
                    "--skip-ghidra-check",
                    "--json-out",
                    str(json_out),
                    "--md-out",
                    str(md_out),
                ],
                capture_output=True,
                text=True,
                timeout=30,
                check=False,
            )
            self.assertEqual(proc.returncode, 0, proc.stdout + proc.stderr)
            self.assertTrue(json_out.is_file())
            self.assertTrue(md_out.is_file())
            parsed = json.loads(json_out.read_text(encoding="utf-8"))
            self.assertTrue(parsed["passed"])

    @e2e_test(4, "F3")
    def test_t4_e2e_unity_compile_and_testrunner_pipeline_simulation(self):
        with tempfile.TemporaryDirectory() as td:
            root = Path(td)
            exe = _create_synthetic_unity_project(root, clean=True)
            hyg = check_unity_hygiene(root / "UnityProj", unity_exe=exe, processes=[])
            self.assertTrue(hyg["passed"])

            compile_log = root / "compile.log"
            compile_log.write_text(
                "- Starting compile Library/ScriptAssemblies/Atlas.dll\n"
                "- Finished compile Library/ScriptAssemblies/Atlas.dll in 1.23 seconds\n"
                "- Starting ILPostProcessor 'zzzUnity.Burst.CodeGen.BurstILPostProcessor' on Atlas.dll\n"
                "- Finished ILPostProcessor 'zzzUnity.Burst.CodeGen.BurstILPostProcessor' on Atlas.dll in 0.12 seconds\n"
                "Application will terminate with return code 0\n",
                encoding="utf-8",
            )
            c_res = parse_compile_log(compile_log)
            self.assertTrue(c_res["passed"])

            xml_p = root / "TestResults-EditMode.xml"
            xml_p.write_text(
                '<test-run id="2" testcasecount="2" result="Passed" total="2" passed="2" failed="0" inconclusive="0" skipped="0" engine-version="3.5.0.0">'
                '<test-case fullname="WKR.T1" name="T1" result="Passed" duration="0.01"/>'
                '<test-case fullname="WKR.T2" name="T2" result="Passed" duration="0.02"/>'
                "</test-run>",
                encoding="utf-8",
            )
            t_res = parse_nunit_xml(xml_p)
            self.assertTrue(t_res["passed"])
            self.assertEqual(t_res["passed_count"], 2)


if __name__ == "__main__":
    unittest.main()
