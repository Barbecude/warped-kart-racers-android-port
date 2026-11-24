import json
import sys
import capstone

BIN_PATH = r"extracted_ipa\Payload\Warped Kart Racers.app\Frameworks\UnityFramework.framework\UnityFramework"
SCRIPT_JSON = r"il2cpp_dump\script.json"


def main():
    if len(sys.argv) < 2:
        print("Usage: python tools/disasm_il2cpp.py <ClassNameFilter> [max_methods]")
        sys.exit(1)

    query = sys.argv[1]
    max_methods = int(sys.argv[2]) if len(sys.argv) > 2 else 30

    with open(SCRIPT_JSON, encoding="utf-8") as f:
        s = json.load(f)

    all_methods = sorted((m["Address"], m["Name"]) for m in s["ScriptMethod"])
    addr2name = {addr: name for addr, name in all_methods}
    addr2str = {x["Address"]: x["Value"] for x in s.get("ScriptString", [])}
    addr2meta = {x["Address"]: x["Name"] for x in s.get("ScriptMetadata", [])}

    # Build map from address to next method address for exact function bounds
    next_addr = {}
    for i in range(len(all_methods) - 1):
        next_addr[all_methods[i][0]] = all_methods[i + 1][0]

    matched = [(addr, name) for addr, name in all_methods if query in name]
    print(f"Matched {len(matched)} methods for {query!r} (showing up to {max_methods})")

    with open(BIN_PATH, "rb") as f:
        data = f.read()

    md = capstone.Cs(capstone.CS_ARCH_ARM64, capstone.CS_MODE_ARM)

    for addr, name in matched[:max_methods]:
        end = next_addr.get(addr, addr + 0x200)
        size = min(max(end - addr, 4), 0x800)
        print(f"\n=== {hex(addr)} {name} (size={size}) ===")
        adrp = {}
        for insn in md.disasm(data[addr : addr + size], addr):
            note = ""
            if insn.mnemonic == "adrp":
                parts = insn.op_str.split(", #")
                if len(parts) == 2:
                    adrp[parts[0].strip()] = int(parts[1], 16)
            elif insn.mnemonic in ("add", "ldr") and "#0x" in insn.op_str:
                parts = [p.strip().strip("[]") for p in insn.op_str.split(",")]
                if len(parts) >= 3 and parts[1] in adrp:
                    try:
                        off = int(parts[2].lstrip("#").rstrip("]"), 16)
                        val = adrp[parts[1]] + off
                        if val in addr2str:
                            note = f"  ; STR: {addr2str[val]!r}"
                        elif val in addr2meta:
                            note = f"  ; META: {addr2meta[val]}"
                    except ValueError:
                        pass
            elif insn.mnemonic in ("bl", "b") and insn.op_str.startswith("#0x"):
                t = int(insn.op_str[1:], 16)
                if t in addr2name:
                    note = f"  ; {addr2name[t]}"
            print(f"  {hex(insn.address)}: {insn.mnemonic:8} {insn.op_str}{note}")


if __name__ == "__main__":
    main()
