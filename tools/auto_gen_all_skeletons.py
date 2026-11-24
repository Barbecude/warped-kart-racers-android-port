import os
import re
import glob
from collections import defaultdict

DUMP_PATH = "il2cpp_dump/dump.cs"
SCRIPTS_ROOT = "ripped_unity_project/ExportedProject/Assets/Scripts"

# Safe usings per assembly prefix
ATLAS_USINGS = """using System;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using Atlas.Audio;
using Atlas.Contexts;
using Atlas.Definitions;
using Atlas.Gameplay;
using Atlas.Gameplay.Kart;
using Atlas.Gameplay.Pickups;
using Atlas.Gameplay.Player;
using Atlas.Gameplay.Usables;
using Atlas.Input;
using Atlas.League;
using Atlas.Lighting;
using Atlas.Networking;
using Atlas.Rendering;
using Atlas.Save;
using Atlas.Settings;
using Atlas.Stats;
using Atlas.UI;
using Core.Actors;
using Core.Application;
using Core.Assets;
using Core.Audio;
using Core.Cameras;
using Core.Containers;
using Core.Contexts;
using Core.Definitions;
using Core.Input;
using Core.Localisation;
using Core.Networking;
using Core.Scenes;
using Core.Services;
using Core.Settings;
using Unity.Collections;
using Unity.Jobs;
using Unity.Mathematics;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.Events;
using UnityEngine.UI;
using Object = UnityEngine.Object;
using Network = Atlas.Networking.Network;
"""

def parse_dump():
    with open(DUMP_PATH, "r", encoding="utf-8", errors="replace") as f:
        text = f.read()

    blocks = re.split(r'\n(?=// Namespace:)', text)
    types = {}
    nested = defaultdict(list)

    for blk in blocks:
        m_ns = re.match(r'// Namespace:\s*(.*)', blk)
        if not m_ns:
            continue
        ns = m_ns.group(1).strip()
        m_hdr = re.search(
            r'^(public|internal|private|protected)?\s*(static|abstract|sealed)?\s*(class|struct|enum|interface)\s+([^\s/{:<]+)(?:\s*:\s*([^{/\n]+))?',
            blk,
            re.MULTILINE
        )
        if not m_hdr:
            continue
        vis = m_hdr.group(1) or "public"
        mod = m_hdr.group(2) or ""
        kind = m_hdr.group(3)
        name = m_hdr.group(4).strip()
        bases = re.sub(r'//.*', '', (m_hdr.group(5) or "")).strip()
        if "<" in name or "$" in name or "__StaticArrayInitTypeSize" in name or "`" in name:
            continue
        entry = {
            "ns": ns,
            "vis": vis,
            "mod": mod,
            "kind": kind,
            "name": name,
            "bases": bases,
            "raw": blk,
        }
        if "." in name:
            parent = name.split(".")[0]
            nested[parent].append(entry)
        else:
            # Prefer Atlas/Core namespaces if duplicate short name
            if name not in types or ns.startswith("Atlas") or ns.startswith("Core"):
                types[name] = entry
    return types, nested

def clean_type(t):
    t = t.strip()
    t = re.sub(r'\bNullable<([^>]+)>', r'\1?', t)
    return t

def emit_enum(entry, short_name=None):
    nm = short_name or entry["name"]
    lines = [f"public enum {nm}", "{"]
    for m in re.finditer(r'public const [^\s]+ ([^\s=]+)\s*=\s*(-?\d+);', entry["raw"]):
        lines.append(f"\t{m.group(1)} = {m.group(2)},")
    lines.append("}")
    return lines

def extract_fields(raw):
    fields = []
    in_fields = False
    is_ser = False
    for line in raw.splitlines():
        s = line.strip()
        if s == "// Fields":
            in_fields = True
            continue
        if s in ("// Properties", "// Methods"):
            break
        if not in_fields:
            continue
        if "[SerializeField]" in s:
            is_ser = True
            continue
        if s.startswith("[") or s.startswith("//") or not s:
            continue
        # Remove trailing // 0x...
        s_clean = re.sub(r'\s*//.*', '', s).strip()
        if not s_clean.endswith(";"):
            is_ser = False
            continue
        # Skip compiler-generated backing fields or invalid names
        if "<" in s_clean or "$" in s_clean or "value__" in s_clean:
            is_ser = False
            continue
        # Skip unsafe/fixed/pointer
        if "*" in s_clean or "fixed " in s_clean:
            is_ser = False
            continue
        s_clean = clean_type(s_clean)
        # Convert private to public for structs/classes? Keep exact visibility, add [SerializeField] if needed
        if is_ser:
            fields.append("[SerializeField] " + s_clean)
        else:
            fields.append(s_clean)
        is_ser = False
    return fields

def extract_properties(raw):
    props = []
    in_props = False
    for line in raw.splitlines():
        s = line.strip()
        if s == "// Properties":
            in_props = True
            continue
        if s == "// Methods":
            break
        if not in_props or not s or s.startswith("//") or s.startswith("["):
            continue
        # e.g. public float Foo { get; set; }
        m = re.match(r'^(public|protected|internal|private)\s+(?:virtual\s+|override\s+|abstract\s+|static\s+)?(.+?)\s+([A-Za-z_][A-Za-z0-9_]*)\s*\{\s*(get;\s*)?(set;\s*)?\}$', s)
        if m:
            vis, typ, pname, has_get, has_set = m.groups()
            typ = clean_type(typ)
            if "<" in typ and ">" not in typ:
                continue
            acc = []
            if has_get: acc.append("get => default;")
            if has_set: acc.append("set { }")
            if acc:
                props.append(f"{vis} {typ} {pname} {{ {' '.join(acc)} }}")
    return props

def generate_struct_file(entry, nested_list):
    lines = []
    ns = entry["ns"]
    if ns.startswith("Atlas"):
        lines.append(ATLAS_USINGS)
    else:
        lines.append("using System;\nusing System.Collections.Generic;\nusing Unity.Collections;\nusing Unity.Jobs;\nusing Unity.Mathematics;\nusing UnityEngine;\n")
    if ns:
        lines.append(f"namespace {ns}\n{{")
    indent = "\t" if ns else ""
    bases = entry["bases"]
    # Filter bases to valid interfaces (not ValueType/Object/Enum)
    if bases:
        b_list = [b.strip() for b in bases.split(",") if b.strip() not in ("ValueType", "Object", "Enum")]
        bases = ", ".join(b_list)
    base_str = f" : {bases}" if bases else ""
    lines.append(f"{indent}[Serializable]")
    lines.append(f"{indent}public struct {entry['name']}{base_str}")
    lines.append(f"{indent}{{")
    # Nested enums
    for n in nested_list:
        if n["kind"] == "enum" and n["name"].count(".") == 1:
            short = n["name"].split(".")[1]
            for el in emit_enum(n, short):
                lines.append(f"{indent}\t{el}")
    for f in extract_fields(entry["raw"]):
        # Strip const/static init issues if any
        lines.append(f"{indent}\t{f}")
    for p in extract_properties(entry["raw"]):
        lines.append(f"{indent}\t{p}")
    # If implements IJob / IJobParallelFor, add Execute()
    if "IJobParallelFor" in bases:
        lines.append(f"{indent}\tpublic void Execute(int index) {{ }}")
    elif "IJob" in bases:
        lines.append(f"{indent}\tpublic void Execute() {{ }}")
    lines.append(f"{indent}}}")
    if ns:
        lines.append("}")
    return "\n".join(lines) + "\n"

def main():
    types, nested = parse_dump()
    dummy_paths = []
    for path in glob.glob(os.path.join(SCRIPTS_ROOT, "**", "*.cs"), recursive=True):
        with open(path, "r", encoding="utf-8", errors="replace") as f:
            txt = f.read()
        if "Dummy class" in txt:
            dummy_paths.append(path)

    print(f"Found {len(dummy_paths)} remaining dummy .cs files.")
    updated_structs = 0
    for path in dummy_paths:
        base = os.path.splitext(os.path.basename(path))[0]
        if base in types and types[base]["kind"] == "struct":
            entry = types[base]
            # Only overwrite Atlas/Core structs
            if entry["ns"].startswith("Atlas") or entry["ns"].startswith("Core"):
                code = generate_struct_file(entry, nested.get(base, []))
                with open(path, "w", encoding="utf-8") as f:
                    f.write(code)
                updated_structs += 1
    print(f"Auto-generated {updated_structs} dummy structs 1:1 from dump.cs!")

if __name__ == "__main__":
    main()

