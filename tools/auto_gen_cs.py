import os
import re
import glob
from collections import defaultdict

DUMP_PATH = "il2cpp_dump/dump.cs"
SCRIPTS_ROOT = "ripped_unity_project/ExportedProject/Assets/Scripts"

# Map namespace prefixes to target Unity assembly folders
ASM_MAP = [
    ("Atlas.Outlines", "Atlas.Outlines"),
    ("Atlas.Settings", "Atlas.Settings"),
    ("Atlas.Build", "Atlas.Build.Runtime"),
    ("Atlas", "Atlas"),
    ("Core.Actors", "Core.Actors"),
    ("Core.Analytics", "Core.Analytics"),
    ("Core.Application", "Core.Application"),
    ("Core.Assets", "Core.Assets"),
    ("Core.Audio", "Core.Audio"),
    ("Core.Cameras", "Core.Cameras"),
    ("Core.Containers", "Core.Containers"),
    ("Core.Contexts", "Core.Contexts"),
    ("Core.DebugMenu", "Core.DebugMenu"),
    ("Core.Definitions", "Core.Definitions"),
    ("Core.Environment", "Core.Environment"),
    ("Core.Extensions", "Core.Extensions"),
    ("Core.Input", "Core.Input"),
    ("Core.Localisation", "Core.Localisation"),
    ("Core.Logging", "Core.Logging"),
    ("Core.Networking", "Core.Networking"),
    ("Core.Scenes", "Core.Scenes"),
    ("Core.Services", "Core.Services"),
    ("Core.Settings", "Core.Settings"),
]

def get_asm_for_ns(ns):
    for prefix, asm in ASM_MAP:
        if ns == prefix or ns.startswith(prefix + "."):
            return asm
    return None

def parse_dump():
    with open(DUMP_PATH, "r", encoding="utf-8", errors="replace") as f:
        text = f.read()

    # Split by "// Namespace:"
    blocks = re.split(r'\n(?=// Namespace:)', text)
    types = []
    for blk in blocks:
        m_ns = re.match(r'// Namespace:\s*(.*)', blk)
        if not m_ns:
            continue
        ns = m_ns.group(1).strip()
        # Find type header line
        m_hdr = re.search(
            r'^(public|internal|private|protected)?\s*(static|abstract|sealed)?\s*(class|struct|enum|interface)\s+([^\s/{:]+)(?:\s*:\s*([^{/\n]+))?',
            blk,
            re.MULTILINE
        )
        if not m_hdr:
            continue
        vis = m_hdr.group(1) or "public"
        mod = m_hdr.group(2) or ""
        kind = m_hdr.group(3)
        name = m_hdr.group(4).strip()
        bases = (m_hdr.group(5) or "").strip()
        # Strip trailing // TypeDefIndex...
        bases = re.sub(r'//.*', '', bases).strip()
        # Skip compiler-generated types
        if "<" in name or "$" in name or "__StaticArrayInitTypeSize" in name:
            continue
        types.append({
            "ns": ns,
            "vis": vis,
            "mod": mod,
            "kind": kind,
            "name": name,
            "bases": bases,
            "raw": blk,
        })
    return types

def parse_enum(raw, name, vis):
    lines = [f"{vis} enum {name}", "{"]
    for m in re.finditer(r'public const [^\s]+ ([^\s=]+)\s*=\s*(-?\d+);', raw):
        lines.append(f"\t{m.group(1)} = {m.group(2)},")
    lines.append("}")
    return "\n".join(lines)

def parse_interface(raw, name, vis, bases):
    base_str = f" : {bases}" if bases else ""
    lines = [f"{vis} interface {name}{base_str}", "{"]
    in_methods = False
    for line in raw.splitlines():
        s = line.strip()
        if s == "// Methods":
            in_methods = True
            continue
        if not in_methods or not s or s.startswith("//") or s.startswith("[") or s == "}":
            continue
        # public abstract void Foo(int x);
        m = re.match(r'public abstract\s+(.+?);', s)
        if m:
            sig = m.group(1).strip()
            # Skip property getter/setter methods if we want raw methods, or keep clean
            if sig.startswith("get_") or sig.startswith("set_") or " get_" in sig or " set_" in sig:
                continue
            lines.append(f"\t{sig};")
    lines.append("}")
    return "\n".join(lines)

def scan_existing_cs():
    dummy_files = {}     # type_name -> path
    real_types = set()   # type_names already implemented in non-dummy files
    for path in glob.glob(os.path.join(SCRIPTS_ROOT, "**", "*.cs"), recursive=True):
        with open(path, "r", encoding="utf-8", errors="replace") as f:
            txt = f.read()
        base = os.path.splitext(os.path.basename(path))[0]
        if "Dummy class" in txt:
            dummy_files[base] = path
        else:
            for m in re.finditer(r'\b(?:class|struct|enum|interface)\s+([A-Za-z_][A-Za-z0-9_]*)', txt):
                real_types.add(m.group(1))
    return dummy_files, real_types

def main():
    types = parse_dump()
    dummy_files, real_types = scan_existing_cs()

    # Group nested types by parent
    nested_by_parent = defaultdict(list)
    top_level = []
    for t in types:
        if "." in t["name"]:
            parent = t["name"].split(".")[0]
            nested_by_parent[parent].append(t)
        else:
            top_level.append(t)

    atlas_core = [t for t in top_level if get_asm_for_ns(t["ns"]) is not None]
    enums = [t for t in atlas_core if t["kind"] == "enum"]
    ifaces = [t for t in atlas_core if t["kind"] == "interface"]
    structs = [t for t in atlas_core if t["kind"] == "struct"]
    classes = [t for t in atlas_core if t["kind"] == "class"]

    print(f"Parsed {len(types)} total types from dump.cs")
    print(f"Atlas/Core top-level: {len(atlas_core)} (enums={len(enums)}, interfaces={len(ifaces)}, structs={len(structs)}, classes={len(classes)})")
    print(f"Existing dummy .cs files: {len(dummy_files)}")
    print(f"Already real implemented types: {len(real_types)}")

    # Step 1: Auto-overwrite ALL dummy enum & interface files in place (100% exact from dump.cs!)
    updated_enums = 0
    updated_ifaces = 0
    for t in enums:
        if t["name"] in dummy_files and t["name"] not in real_types:
            path = dummy_files[t["name"]]
            body = parse_enum(t["raw"], t["name"], "public")
            code = f"namespace {t['ns']}\n{{\n" + "\n".join("\t" + l for l in body.splitlines()) + "\n}\n"
            with open(path, "w", encoding="utf-8") as f:
                f.write(code)
            updated_enums += 1
            real_types.add(t["name"])

    for t in ifaces:
        if t["name"] in dummy_files and t["name"] not in real_types:
            path = dummy_files[t["name"]]
            body = parse_interface(t["raw"], t["name"], "public", t["bases"])
            usings = "using System;\nusing System.Collections;\nusing System.Collections.Generic;\nusing Unity.Mathematics;\nusing UnityEngine;\n"
            if t["ns"].startswith("Atlas"):
                usings += "using Core.Application;\nusing Core.Definitions;\n"
            code = f"{usings}\nnamespace {t['ns']}\n{{\n" + "\n".join("\t" + l for l in body.splitlines()) + "\n}\n"
            with open(path, "w", encoding="utf-8") as f:
                f.write(code)
            updated_ifaces += 1
            real_types.add(t["name"])

    # Step 2: Generate ALL missing top-level enums per assembly (0-quota, 100% exact!)
    missing_enums_by_asm = defaultdict(list)
    for t in enums:
        if t["name"] not in real_types and t["name"] not in dummy_files:
            asm = get_asm_for_ns(t["ns"])
            if asm:
                missing_enums_by_asm[asm].append(t)

    gen_enum_count = 0
    for asm, elist in missing_enums_by_asm.items():
        asm_dir = os.path.join(SCRIPTS_ROOT, asm)
        if not os.path.exists(asm_dir):
            continue
        out_path = os.path.join(asm_dir, f"{asm.replace('.', '_')}_AutoGen_Enums.cs")
        by_ns = defaultdict(list)
        for t in elist:
            by_ns[t["ns"]].append(t)
        parts = ["// Auto-generated 1:1 from il2cpp_dump/dump.cs (0-quota)\n"]
        for ns, nlist in sorted(by_ns.items()):
            parts.append(f"namespace {ns}\n{{")
            for t in nlist:
                body = parse_enum(t["raw"], t["name"], "public")
                parts.append("\n".join("\t" + l for l in body.splitlines()))
                gen_enum_count += 1
            parts.append("}\n")
        with open(out_path, "w", encoding="utf-8") as f:
            f.write("\n".join(parts))

    print(f"Updated {updated_enums} dummy enums, {updated_ifaces} dummy interfaces in place.")
    print(f"Generated {gen_enum_count} missing enums across {len(missing_enums_by_asm)} assemblies.")

if __name__ == "__main__":
    main()
