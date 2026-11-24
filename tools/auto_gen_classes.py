import os
import re
import glob
from collections import defaultdict

DUMP_PATH = "il2cpp_dump/dump.cs"
SCRIPTS_ROOT = "ripped_unity_project/ExportedProject/Assets/Scripts"

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
using NetworkPlayer = Core.Networking.NetworkPlayer;
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
        s_clean = re.sub(r'\s*//.*', '', s).strip()
        if not s_clean.endswith(";"):
            is_ser = False
            continue
        if "<" in s_clean or "$" in s_clean or "value__" in s_clean or "*" in s_clean or "fixed " in s_clean:
            is_ser = False
            continue
        s_clean = clean_type(s_clean)
        fields.append(("[SerializeField] " + s_clean) if is_ser else s_clean)
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

def extract_methods(raw, class_name):
    methods = []
    in_methods = False
    seen = set()
    for line in raw.splitlines():
        s = line.strip()
        if s == "// Methods":
            in_methods = True
            continue
        if not in_methods or not s or s.startswith("//") or s.startswith("[") or s == "}":
            continue
        if not s.endswith("{ }"):
            continue
        sig = s[:-3].strip()
        # Skip property accessors, operators, constructors, generic/compiler-gen
        if any(x in sig for x in ("get_", "set_", "add_", "remove_", "op_", ".ctor", ".cctor", "<", ">", "$", "*")):
            continue
        m = re.match(r'^(public|protected|internal|private)\s+((?:static|virtual|override|abstract|sealed|new)\s+)*(.+?)\s+([A-Za-z_][A-Za-z0-9_]*)\s*\((.*)\)$', sig)
        if not m:
            continue
        vis, mods, ret, mname, params = m.groups()
        if mname == class_name:
            continue
        mods = (mods or "").strip()
        # Skip abstract methods on non-abstract or keep simple virtual
        if "abstract" in mods:
            continue
        # Remove override to avoid base-class mismatch in skeletons
        mods = re.sub(r'\boverride\b', 'virtual', mods).strip()
        ret = clean_type(ret)
        params = clean_type(params)
        # Skip ref/out complex defaults
        if "= " in params:
            params = re.sub(r'\s*=\s*[^,)]+', '', params)
        key = (mname, params)
        if key in seen:
            continue
        seen.add(key)
        mod_str = (mods + " ") if mods else ""
        # Handle out parameters
        out_inits = []
        for pm in re.finditer(r'\bout\s+[^\s]+\s+([A-Za-z_][A-Za-z0-9_]*)', params):
            out_inits.append(f"{pm.group(1)} = default;")
        body_prefix = " ".join(out_inits) + (" " if out_inits else "")
        if ret == "void":
            methods.append(f"{vis} {mod_str}void {mname}({params}) {{ {body_prefix}}}")
        else:
            methods.append(f"{vis} {mod_str}{ret} {mname}({params}) {{ {body_prefix}return default; }}")
    return methods

def generate_class_file(entry, nested_list):
    lines = []
    ns = entry["ns"]
    if ns.startswith("Atlas"):
        lines.append(ATLAS_USINGS)
    else:
        lines.append("using System;\nusing System.Collections;\nusing System.Collections.Generic;\nusing UnityEngine;\n")
    if ns:
        lines.append(f"namespace {ns}\n{{")
    indent = "\t" if ns else ""
    bases = entry["bases"]
    if bases:
        b_list = [b.strip() for b in bases.split(",") if b.strip() not in ("Object", "ValueType", "Enum")]
        bases = ", ".join(b_list)
    base_str = f" : {bases}" if bases else ""
    mod = (entry["mod"] + " ") if entry["mod"] in ("static", "abstract", "sealed") else ""
    lines.append(f"{indent}public {mod}class {entry['name']}{base_str}")
    lines.append(f"{indent}{{")
    for n in nested_list:
        if n["kind"] == "enum" and n["name"].count(".") == 1:
            short = n["name"].split(".")[1]
            for el in emit_enum(n, short):
                lines.append(f"{indent}\t{el}")
    for f in extract_fields(entry["raw"]):
        lines.append(f"{indent}\t{f}")
    for p in extract_properties(entry["raw"]):
        lines.append(f"{indent}\t{p}")
    for m in extract_methods(entry["raw"], entry["name"]):
        lines.append(f"{indent}\t{m}")
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
    updated_classes = 0
    for path in dummy_paths:
        base = os.path.splitext(os.path.basename(path))[0]
        if base in types and types[base]["kind"] == "class":
            entry = types[base]
            if entry["ns"].startswith("Atlas") or entry["ns"].startswith("Core"):
                code = generate_class_file(entry, nested.get(base, []))
                with open(path, "w", encoding="utf-8") as f:
                    f.write(code)
                updated_classes += 1
    print(f"Auto-generated {updated_classes} dummy classes 1:1 from dump.cs!")

if __name__ == "__main__":
    main()
