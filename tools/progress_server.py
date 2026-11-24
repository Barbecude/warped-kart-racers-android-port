import collections
import datetime
import http.server
import json
import os
import re
import socketserver
import sys
import threading
import time

PORT = 8765
SCAN_INTERVAL_SEC = 2.0
SPEED_WINDOW_SEC = 180.0
BOOTSTRAP_WINDOW_SEC = 300.0

DECOMP_DIR = os.path.abspath("decompiled_c")
RESOLVED_DIR = os.path.abspath("decompiled_resolved")
SCRIPTS_DIR = os.path.abspath("ripped_unity_project/ExportedProject/Assets/Scripts")
TSV_FILE = os.path.abspath("tools/game_methods.tsv")
HTML_FILE = os.path.abspath("tools/progress_dashboard.html")

DUMMY_MARKER = "Dummy class. This could have happened for several reasons"

MODULE_PREFIXES = [
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
    "Atlas.Input",
    "Atlas.Maths",
    "Atlas.Networking",
    "Atlas.",
    "Core.",
]

# Pre-load total classes per module from game_methods.tsv
ALL_CLASSES = set()
SAFE_TO_CLASS = {}
CLASS_MODULE = {}
MOD_TOTAL_CLASSES = collections.defaultdict(set)
TOTAL_METHODS = 0


def sanitize_class_name(cls_name):
    return re.sub(r"[^A-Za-z0-9._-]", "_", cls_name)


if os.path.exists(TSV_FILE):
    with open(TSV_FILE, encoding="utf-8", errors="ignore") as f:
        for line in f:
            parts = line.rstrip("\r\n").split("\t")
            if len(parts) >= 3:
                cls = parts[2]
                ALL_CLASSES.add(cls)
                TOTAL_METHODS += 1
                safe_stem = sanitize_class_name(cls)
                SAFE_TO_CLASS[safe_stem] = cls
                for pref in MODULE_PREFIXES:
                    if cls.startswith(pref):
                        MOD_TOTAL_CLASSES[pref].add(safe_stem)
                        CLASS_MODULE[safe_stem] = pref
                        break

FILE_CACHE = {}     # .c filename -> (mtime_ns, size, rva_count, fail_count)
CS_CACHE = {}       # .cs relpath -> (mtime_ns, size, is_dummy, line_count)
SAMPLES = collections.deque()  # (monotonic_ts, methods_done)
STATE_LOCK = threading.Lock()
LATEST_SNAPSHOT = None
INITIAL_READY = threading.Event()


def _match_prefix(stem):
    if stem in CLASS_MODULE:
        return CLASS_MODULE[stem]
    for pref in MODULE_PREFIXES:
        if stem.startswith(pref):
            return pref
    return None


def _classify_cs_module(rel_path):
    parts = rel_path.replace("\\", "/").split("/")
    top = parts[0]
    if top == "Atlas":
        if len(parts) >= 4 and parts[1] == "Atlas" and parts[2] == "Gameplay" and parts[3] in ("Kart", "Usables"):
            return f"Atlas.Gameplay.{parts[3]}"
        if len(parts) >= 4 and parts[1] == "Atlas" and parts[2] == "UI" and parts[3] == "Screens":
            return "Atlas.UI.Screens"
        if len(parts) >= 3 and parts[1] == "Atlas" and parts[2] in (
            "Contexts", "FrontEnd", "Save", "Audio", "League", "Gameplay",
            "UI", "Rendering", "Definitions", "Stats", "Input", "Maths", "Networking",
        ):
            return f"Atlas.{parts[2]}"
        return "Atlas."
    if top.startswith("Atlas."):
        return "Atlas."
    if top.startswith("Core."):
        return "Core."
    return None


def scan_cs_scripts():
    cs_total = 0
    cs_real = 0
    cs_dummy = 0
    cs_loc = 0
    mod_total = collections.Counter()
    mod_real = collections.Counter()
    real_entries = []
    seen_rel = set()

    if os.path.isdir(SCRIPTS_DIR):
        try:
            top_dirs = sorted(
                d for d in os.listdir(SCRIPTS_DIR)
                if (d == "Atlas" or d.startswith("Atlas.") or d.startswith("Core."))
                and os.path.isdir(os.path.join(SCRIPTS_DIR, d))
            )
        except OSError:
            top_dirs = []

        for top_d in top_dirs:
            base = os.path.join(SCRIPTS_DIR, top_d)
            for root, _, files in os.walk(base):
                for fn in files:
                    if not fn.endswith(".cs"):
                        continue
                    full_path = os.path.join(root, fn)
                    rel_path = os.path.relpath(full_path, SCRIPTS_DIR).replace("\\", "/")
                    mod = _classify_cs_module(rel_path)
                    if mod is None:
                        continue
                    try:
                        st = os.stat(full_path)
                    except OSError:
                        continue

                    seen_rel.add(rel_path)
                    cached = CS_CACHE.get(rel_path)
                    if cached is not None and cached[0] == st.st_mtime_ns and cached[1] == st.st_size:
                        is_dummy, line_count = cached[2], cached[3]
                    else:
                        try:
                            with open(full_path, encoding="utf-8", errors="ignore") as f:
                                txt = f.read()
                            is_dummy = DUMMY_MARKER in txt
                            line_count = txt.count("\n") + (1 if txt else 0)
                            CS_CACHE[rel_path] = (st.st_mtime_ns, st.st_size, is_dummy, line_count)
                        except OSError:
                            if cached is not None:
                                is_dummy, line_count = cached[2], cached[3]
                            else:
                                is_dummy, line_count = True, 0

                    cs_total += 1
                    mod_total[mod] += 1
                    if is_dummy:
                        cs_dummy += 1
                    else:
                        cs_real += 1
                        cs_loc += line_count
                        mod_real[mod] += 1
                        # Readable display name
                        display_name = rel_path
                        if display_name.startswith("Atlas/Atlas/"):
                            display_name = display_name[len("Atlas/"):]
                        real_entries.append((st.st_mtime_ns, st.st_mtime, display_name, st.st_size, line_count, mod))

    for stale in [k for k in CS_CACHE.keys() if k not in seen_rel]:
        CS_CACHE.pop(stale, None)

    real_entries.sort(key=lambda x: (x[0], x[2]), reverse=True)
    recent_cs = [
        {
            "name": name,
            "module": mod,
            "size": sz,
            "lines": lines,
            "time": datetime.datetime.fromtimestamp(mt).strftime("%H:%M:%S"),
        }
        for _, mt, name, sz, lines, mod in real_entries[:15]
    ]

    cs_modules = []
    for pref in MODULE_PREFIXES:
        tot = mod_total[pref]
        if tot == 0:
            continue
        dn = mod_real[pref]
        cs_modules.append({
            "name": pref,
            "done": dn,
            "total": tot,
            "pct": (dn / tot * 100.0),
        })

    cs_pct = (cs_real / cs_total * 100.0) if cs_total > 0 else 0.0
    active_mod = recent_cs[0]["module"] if recent_cs else "-"

    return {
        "cs_total": cs_total,
        "cs_real": cs_real,
        "cs_dummy": cs_dummy,
        "cs_loc": cs_loc,
        "cs_pct": cs_pct,
        "cs_active_module": active_mod,
        "cs_modules": cs_modules,
        "recent_cs": recent_cs,
    }


def scan_once():
    now_wall = time.time()
    now_mono = time.monotonic()

    total_bytes = 0
    methods_done = 0
    methods_fail = 0
    classes_done = 0
    mod_done = collections.Counter()
    file_entries = []
    recent_window_files = []
    min_mtime = None
    max_mtime = None
    seen_names = set()

    if os.path.isdir(DECOMP_DIR):
        try:
            with os.scandir(DECOMP_DIR) as it:
                for entry in it:
                    name = entry.name
                    if not name.endswith(".c"):
                        continue
                    try:
                        if not entry.is_file(follow_symlinks=False):
                            continue
                        st = entry.stat(follow_symlinks=False)
                    except OSError:
                        continue

                    seen_names.add(name)
                    total_bytes += st.st_size

                    if min_mtime is None or st.st_mtime < min_mtime:
                        min_mtime = st.st_mtime
                    if max_mtime is None or st.st_mtime > max_mtime:
                        max_mtime = st.st_mtime

                    cached = FILE_CACHE.get(name)
                    if cached is not None and cached[0] == st.st_mtime_ns and cached[1] == st.st_size:
                        rva_count, fail_count = cached[2], cached[3]
                    else:
                        rva_count = 0
                        fail_count = 0
                        if st.st_size > 0:
                            try:
                                with open(entry.path, encoding="utf-8", errors="ignore") as f:
                                    txt = f.read()
                                rva_count = txt.count("// RVA: 0x")
                                fail_count = (
                                    txt.count("// [DECOMPILE_FAILED]")
                                    + txt.count("// [DECOMPILE_EXCEPTION]")
                                    + txt.count("// [NO_FUNCTION_AT_ADDRESS]")
                                )
                                if rva_count > 0:
                                    FILE_CACHE[name] = (st.st_mtime_ns, st.st_size, rva_count, fail_count)
                            except OSError:
                                if cached is not None:
                                    rva_count, fail_count = cached[2], cached[3]

                    methods_done += rva_count
                    methods_fail += fail_count

                    if rva_count > 0 and (now_wall - BOOTSTRAP_WINDOW_SEC) <= st.st_mtime <= now_wall:
                        recent_window_files.append((st.st_mtime, rva_count))

                    stem = name[:-2]
                    if st.st_size > 0 and (not SAFE_TO_CLASS or stem in SAFE_TO_CLASS):
                        classes_done += 1
                        pref = _match_prefix(stem)
                        if pref is not None:
                            mod_done[pref] += 1

                    file_entries.append((st.st_mtime_ns, st.st_mtime, name, st.st_size))
        except OSError:
            pass

    for stale_name in [k for k in FILE_CACHE.keys() if k not in seen_names]:
        FILE_CACHE.pop(stale_name, None)

    resolved_classes = 0
    if os.path.isdir(RESOLVED_DIR):
        try:
            with os.scandir(RESOLVED_DIR) as it:
                for entry in it:
                    name = entry.name
                    if not name.endswith(".c"):
                        continue
                    try:
                        if not entry.is_file(follow_symlinks=False):
                            continue
                        st = entry.stat(follow_symlinks=False)
                    except OSError:
                        continue
                    stem = name[:-2]
                    if st.st_size > 0 and (not SAFE_TO_CLASS or stem in SAFE_TO_CLASS):
                        resolved_classes += 1
        except OSError:
            pass

    file_entries.sort(key=lambda x: (x[0], x[2]), reverse=True)
    recent = [
        {
            "name": name[:-2],
            "size": sz,
            "time": datetime.datetime.fromtimestamp(mt).strftime("%H:%M:%S"),
        }
        for _, mt, name, sz in file_entries[:12]
    ]

    cs_info = scan_cs_scripts()

    methods_total = TOTAL_METHODS or 13821
    classes_total = len(ALL_CLASSES) or 1465
    methods_ok = max(0, methods_done - methods_fail)
    finished = bool(methods_total > 0 and methods_done >= methods_total and classes_done >= classes_total)

    if min_mtime is None:
        elapsed_sec = 0
    else:
        end_ref = max_mtime if (finished and max_mtime is not None) else now_wall
        elapsed_sec = int(max(0, end_ref - min_mtime))

    SAMPLES.append((now_mono, methods_done))
    cutoff = now_mono - SPEED_WINDOW_SEC
    while len(SAMPLES) >= 2 and SAMPLES[1][0] <= cutoff:
        SAMPLES.popleft()

    speed_per_min = 0.0
    if not finished:
        live_span = (SAMPLES[-1][0] - SAMPLES[0][0]) if len(SAMPLES) >= 2 else 0.0
        if live_span >= 30.0:
            speed_per_min = max(0.0, (SAMPLES[-1][1] - SAMPLES[0][1]) / (live_span / 60.0))
        elif len(recent_window_files) >= 2:
            oldest_recent = min(t for t, _ in recent_window_files)
            boot_span = now_wall - oldest_recent
            if boot_span >= 15.0:
                boot_methods = sum(c for _, c in recent_window_files)
                speed_per_min = max(0.0, boot_methods / (min(BOOTSTRAP_WINDOW_SEC, boot_span) / 60.0))

    rem = max(0, methods_total - methods_done)
    if finished:
        eta_text = "Selesai!"
    elif speed_per_min > 0:
        eta_min = max(1, round(rem / speed_per_min)) if rem > 0 else 0
        eta_text = f"~{eta_min // 60} jam {eta_min % 60} menit" if eta_min >= 60 else f"~{eta_min} menit"
    else:
        eta_text = "Menghitung..."

    methods_pct = (methods_done / methods_total * 100.0) if methods_total else 0.0
    success_rate = (methods_ok / methods_done * 100.0) if methods_done > 0 else 100.0

    # Weighted overall 1:1 progress:
    # 25% Assets (100%) + 10% Unity 0-error pipeline (100%) + 25% Ghidra Decompile + 30% C->C# translation (live!) + 10% Android APK build (0%)
    cs_pct = cs_info["cs_pct"]
    overall_pct = 25.0 + 10.0 + (0.25 * methods_pct) + (0.30 * cs_pct)

    modules = []
    for pref in MODULE_PREFIXES:
        tot = len(MOD_TOTAL_CLASSES[pref])
        if tot == 0:
            continue
        dn = min(mod_done[pref], tot)
        modules.append({
            "name": pref,
            "done": dn,
            "total": tot,
            "pct": (dn / tot * 100.0),
        })

    stages = [
        {"name": "1. Asset 1:1 (15.310 asset, 35 scene, 9 FMOD bank)", "pct": 100.0, "note": "Selesai & tergabung penuh", "color": "fill-green"},
        {"name": "2. Fondasi Unity 2020.3.30f1 & Shader URP Android", "pct": 100.0, "note": "0 C# error di 74 assembly", "color": "fill-green"},
        {"name": "3. Decompile ARM64 -> C via Ghidra 12.1.4", "pct": methods_pct, "note": f"{methods_done:,} / {methods_total:,} method ({classes_done:,} class, {resolved_classes:,} resolved)", "color": "fill-green" if finished else "fill-blue"},
        {"name": "4. Terjemahan C -> C# 1:1 di Unity (Gameplay Penuh)", "pct": cs_pct, "note": f"{cs_info['cs_real']:,} / {cs_info['cs_total']:,} script C# ({cs_info['cs_loc']:,} baris) · {cs_info['cs_dummy']:,} stub tersisa", "color": "fill-green" if cs_pct >= 100.0 else "fill-purple"},
        {"name": "5. Build & Uji APK Android (Android Support + FMOD)", "pct": 0.0, "note": "Menunggu terjemahan C# 1:1 selesai", "color": "fill-amber"},
    ]

    return {
        "timestamp": datetime.datetime.now().strftime("%H:%M:%S"),
        "finished": finished,
        "methods_done": methods_done,
        "methods_total": methods_total,
        "methods_ok": methods_ok,
        "methods_fail": methods_fail,
        "methods_pct": methods_pct,
        "classes_done": classes_done,
        "classes_total": classes_total,
        "resolved_classes": resolved_classes,
        "elapsed_sec": elapsed_sec,
        "total_mb": total_bytes / 1048576.0,
        "speed_per_min": speed_per_min,
        "eta_text": eta_text,
        "success_rate": success_rate,
        "overall_pct": overall_pct,
        "modules": modules,
        "stages": stages,
        "recent": recent,
        **cs_info,
    }


def sampler_loop():
    global LATEST_SNAPSHOT
    while True:
        try:
            snap = scan_once()
            with STATE_LOCK:
                LATEST_SNAPSHOT = snap
            INITIAL_READY.set()
        except Exception as exc:
            print(f"[progress_server] scan error: {exc}", file=sys.stderr, flush=True)
        time.sleep(SCAN_INTERVAL_SEC)


class Handler(http.server.BaseHTTPRequestHandler):
    def do_GET(self):
        try:
            if self.path.startswith("/api/progress"):
                if LATEST_SNAPSHOT is None:
                    INITIAL_READY.wait(timeout=15.0)
                with STATE_LOCK:
                    snap = LATEST_SNAPSHOT
                if snap is None:
                    snap = scan_once()
                body = json.dumps(snap).encode("utf-8")
                self.send_response(200)
                self.send_header("Content-Type", "application/json; charset=utf-8")
                self.send_header("Cache-Control", "no-store")
                self.send_header("Content-Length", str(len(body)))
                self.end_headers()
                self.wfile.write(body)
            else:
                with open(HTML_FILE, "rb") as f:
                    body = f.read()
                self.send_response(200)
                self.send_header("Content-Type", "text/html; charset=utf-8")
                self.send_header("Cache-Control", "no-store")
                self.send_header("Content-Length", str(len(body)))
                self.end_headers()
                self.wfile.write(body)
        except (BrokenPipeError, ConnectionResetError, ConnectionAbortedError):
            pass

    def log_message(self, format, *args):
        pass


class ThreadingProgressServer(socketserver.ThreadingMixIn, http.server.HTTPServer):
    daemon_threads = True
    allow_reuse_address = True
    request_queue_size = 32

    def handle_error(self, request, client_address):
        _, exc, _ = sys.exc_info()
        if isinstance(exc, (BrokenPipeError, ConnectionResetError, ConnectionAbortedError)):
            return
        super().handle_error(request, client_address)


if __name__ == "__main__":
    t = threading.Thread(target=sampler_loop, name="ProgressSampler", daemon=True)
    t.start()
    INITIAL_READY.wait(timeout=15.0)
    with ThreadingProgressServer(("127.0.0.1", PORT), Handler) as httpd:
        print(f"Progress dashboard running at http://127.0.0.1:{PORT}", flush=True)
        httpd.serve_forever()
