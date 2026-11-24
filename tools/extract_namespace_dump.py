"""Extract exact C# type/field/method declarations for a namespace from il2cpp_dump/dump.cs."""
import re
import sys
from pathlib import Path

DUMP_PATH = Path("il2cpp_dump/dump.cs")


def extract_namespace(ns_prefix: str, exact: bool = False):
    text = DUMP_PATH.read_text(encoding="utf-8", errors="replace")
    # Split on "// Namespace: "
    blocks = re.split(r"(?m)(?=^// Namespace: )", text)
    matched = []
    for blk in blocks:
        if not blk.startswith("// Namespace: "):
            continue
        first_line = blk.splitlines()[0]
        ns = first_line[len("// Namespace: "):].strip()
        if (exact and ns == ns_prefix) or (not exact and (ns == ns_prefix or ns.startswith(ns_prefix + "."))):
            matched.append((ns, blk))
    return matched


def summarize_types(blocks):
    type_re = re.compile(r"(?m)^(?:public|internal|private|protected)?\s*(?:sealed|abstract|static|unsafe)?\s*(?:class|struct|enum|interface)\s+([^\s:{]+)")
    out = []
    for ns, blk in blocks:
        m = type_re.search(blk)
        tname = m.group(1) if m else "<unknown>"
        lines = blk.count("\n")
        out.append((ns, tname, lines))
    return out


if __name__ == "__main__":
    if len(sys.argv) < 2:
        print("Usage: python tools/extract_namespace_dump.py <NamespacePrefix> [--exact] [--out file.txt] [--type TypeName]")
        sys.exit(1)
    ns = sys.argv[1]
    exact = "--exact" in sys.argv
    out_file = None
    type_filter = None
    for i, a in enumerate(sys.argv):
        if a == "--out" and i + 1 < len(sys.argv):
            out_file = Path(sys.argv[i + 1])
        if a == "--type" and i + 1 < len(sys.argv):
            type_filter = sys.argv[i + 1]

    blocks = extract_namespace(ns, exact=exact)
    if type_filter:
        blocks = [(n, b) for n, b in blocks if re.search(rf"\b{re.escape(type_filter)}\b", b.splitlines()[1] if len(b.splitlines()) > 1 else b)]
    if out_file:
        out_file.parent.mkdir(parents=True, exist_ok=True)
        out_file.write_text("\n".join(b for _, b in blocks), encoding="utf-8")
        print(f"Wrote {len(blocks)} type blocks to {out_file}")
    else:
        rows = summarize_types(blocks)
        print(f"Found {len(rows)} types in {ns}:")
        for n, t, l in rows:
            print(f"  {n}.{t} ({l} lines)")
