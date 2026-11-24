import glob
import json
import os
import re

def main():
    s = json.load(open("il2cpp_dump/script.json", encoding="utf-8"))
    addr2sym = {}
    for m in s.get("ScriptMethod", []):
        addr2sym[m["Address"]] = m["Name"]
    for x in s.get("ScriptString", []):
        addr2sym[x["Address"]] = f"STR({x['Value']!r})"
    for x in s.get("ScriptMetadata", []):
        addr2sym[x["Address"]] = x["Name"]

    re_func = re.compile(r"\bfunc_0x([0-9a-fA-F]+)\b")
    re_ram = re.compile(r"\b[a-z]+Ram([0-9a-fA-F]{16})\b")

    files = sorted(glob.glob("decompiled_c/*.c"))
    out_dir = "decompiled_resolved"
    os.makedirs(out_dir, exist_ok=True)

    total_replaced = 0
    for fp in files:
        txt = open(fp, encoding="utf-8", errors="ignore").read()
        rep_count = 0

        def sub_func(m):
            nonlocal rep_count
            a = int(m.group(1), 16)
            if a in addr2sym:
                rep_count += 1
                return f"/*{addr2sym[a]}*/ {m.group(0)}"
            return m.group(0)

        def sub_ram(m):
            nonlocal rep_count
            a = int(m.group(1), 16)
            if a in addr2sym:
                rep_count += 1
                return f"/*{addr2sym[a]}*/ {m.group(0)}"
            return m.group(0)

        txt = re_func.sub(sub_func, txt)
        txt = re_ram.sub(sub_ram, txt)
        total_replaced += rep_count
        with open(os.path.join(out_dir, os.path.basename(fp)), "w", encoding="utf-8") as w:
            w.write(txt)

    print(f"Resolved {total_replaced} symbol/string references across {len(files)} files into {out_dir}/")


if __name__ == "__main__":
    main()
