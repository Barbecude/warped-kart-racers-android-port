import json
import re

s = json.load(open("il2cpp_dump/script.json", encoding="utf-8"))

def clean_sym(name):
    return re.sub(r"[^A-Za-z0-9_]", "_", name)

all_m = sorted((m["Address"], m["Name"]) for m in s["ScriptMethod"])
next_addr = {all_m[i][0]: all_m[i + 1][0] for i in range(len(all_m) - 1)}

PRIORITY = [
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
]

def prio(name):
    for i, p in enumerate(PRIORITY):
        if name.startswith(p):
            return i
    return len(PRIORITY)

game_rows = []
for addr, name in all_m:
    if name.startswith(("Atlas.", "Core.")) and "$$" in name:
        cls, meth = name.split("$$", 1)
        end = next_addr.get(addr, addr + 0x200)
        size = min(max(end - addr, 4), 0x2000)
        game_rows.append((prio(name), cls, addr, addr + size - 1, meth, clean_sym(name)))

game_rows.sort(key=lambda r: (r[0], r[1], r[2]))

with open("tools/game_methods.tsv", "w", encoding="utf-8") as f:
    for _, cls, start, end, meth, sym in game_rows:
        f.write(f"{start:x}\t{end:x}\t{cls}\t{meth}\t{sym}\n")

print(f"Wrote {len(game_rows)} prioritized game methods with exact bounds to tools/game_methods.tsv")
