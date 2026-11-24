"""Feature F4 & F3-static verifier:
- il2cpp_dump/dump.cs parser (Image + TypeDefIndex mapping, nested types, normalized attributes)
- Assets/Scripts/ C# source scanner & 1:1 parity comparator
- DummyDll & brace-matched method-body stub detector
- .cs.meta GUID 1:1 pairing, uniqueness & scene/prefab m_Script verification
- .asmdef DAG cycle detection (name + GUID: refs) & allowUnsafeCode check

Strictly Python 3.12 stdlib only. Read-only against workspace.
"""

from __future__ import annotations

import argparse
from bisect import bisect_right
from collections import Counter, defaultdict
from dataclasses import dataclass, field
import json
import os
from pathlib import Path
import re
import sys
from typing import Any

DUMMY_DLL_MARKER = "Dummy class. This could have happened"

DEFAULT_TARGET_ASSEMBLY_RE = re.compile(
    r"^(?:Atlas(?:\..+)?|Core\..+|UI2|StateManagement)\.dll$"
)
DEFAULT_TARGET_FOLDER_PREFIXES = ("Atlas", "Core.", "UI2", "StateManagement")

BINARY_ASSET_DIRS = frozenset(
    {
        "Texture2D",
        "Mesh",
        "Material",
        "Shader",
        "AnimationClip",
        "Sprite",
        "Cubemap",
        "Font",
        "Avatar",
        "LightProbes",
        "NavMeshData",
        "StreamingAssets",
        "AudioClip",
        "RenderTexture",
        "PhysicMaterial",
        "PhysicsMaterial2D",
        "TerrainData",
        "VideoClip",
        "Library",
        "Temp",
        "Logs",
        "obj",
        "Samples~",
    }
)

_RE_IMAGE_HDR = re.compile(r"^//\s*Image\s+\d+:\s+(\S+\.dll)\s+-\s+(\d+)\s*$")
_RE_NS_LINE = re.compile(r"^//\s*Namespace:\s*(.*?)\s*$")
_RE_TYPEDEF = re.compile(
    r"^(?P<mods>(?:(?:public|private|protected|internal|sealed|abstract|static|unsafe|readonly|partial|new)\s+)*)"
    r"(?P<kind>class|struct|interface|enum)\s+"
    r"(?P<name>[A-Za-z0-9_.`<>]+(?:\s*<[^>]+>)?)"
    r"(?:\s*:\s*(?P<bases>[^/]+?))?"
    r"\s*//\s*TypeDefIndex:\s*(?P<idx>\d+)\s*$"
)
_RE_ATTR_LINE = re.compile(r"^\s*\[([^\]]+)\]")
_RE_FIELD_LINE = re.compile(
    r"^\s*(?P<mods>(?:(?:public|private|protected|internal|static|readonly|const|volatile|unsafe|new|fixed)\s+)*)"
    r"(?P<type>[A-Za-z0-9_.<>\[\],\s\*\?]+?)\s+"
    r"(?P<name>[A-Za-z_@][A-Za-z0-9_<>]*)"
    r"(?:\s*=\s*[^;]+)?;\s*//\s*0x[0-9a-fA-F]+"
)
_RE_PROP_LINE = re.compile(
    r"^\s*(?P<mods>(?:(?:public|private|protected|internal|static|virtual|override|abstract|sealed|new|extern|unsafe)\s+)*)"
    r"(?P<type>[A-Za-z0-9_.<>\[\],\s\*\?]+?)\s+"
    r"(?P<name>[A-Za-z0-9_.<>]+(?:\[[^\]]*\])?)\s*\{\s*(?P<acc>[^}]+)\}\s*$"
)
_RE_METHOD_LINE = re.compile(
    r"^\s*(?P<mods>(?:(?:public|private|protected|internal|static|virtual|override|abstract|sealed|new|extern|unsafe|async|partial)\s+)*)"
    r"(?:(?P<ret>[A-Za-z0-9_.<>\[\],\s\*\?]+?)\s+)?"
    r"(?P<name>[A-Za-z0-9_.`<>~]+(?:\s*<[^>]+>)?)\s*\((?P<params>[^)]*)\)\s*\{\s*\}\s*$"
)
_RE_RVA_COMMENT = re.compile(r"^\s*//\s*RVA:\s*(0x[0-9a-fA-F]+|-1)\b")
_RE_META_GUID = re.compile(r"(?m)^guid:\s*([0-9a-fA-F]{32})\s*$")
_RE_MSCRIPT_GUID = re.compile(r"m_Script:\s*\{[^}]*\bguid:\s*([0-9a-fA-F]{32})\b")

_KNOWN_INTERFACES = frozenset(
    {
        "IEnumerator",
        "IEnumerable",
        "IDisposable",
        "IComparable",
        "IJob",
        "IJobParallelFor",
        "IJobFor",
        "IPointerClickHandler",
        "IPointerDownHandler",
        "IPointerUpHandler",
        "ISerializationCallbackReceiver",
    }
)


def normalize_attr_name(raw_attr: str) -> str:
    """Normalize '[BurstCompileAttribute]' / 'BurstCompile(...)' -> 'BurstCompile'."""
    s = raw_attr.strip()
    if "(" in s:
        s = s.split("(", 1)[0].strip()
    if "." in s:
        s = s.rsplit(".", 1)[-1]
    if s.endswith("Attribute") and len(s) > len("Attribute"):
        s = s[: -len("Attribute")]
    return s


def _strip_generics_with_arity(type_name: str) -> str:
    """Normalize generic parameter names to arity markers, e.g. Foo<T, U> -> Foo`<2>."""
    out: list[str] = []
    i = 0
    n = len(type_name)
    while i < n:
        ch = type_name[i]
        if ch == "<":
            depth = 1
            j = i + 1
            arity = 1
            while j < n and depth > 0:
                if type_name[j] == "<":
                    depth += 1
                elif type_name[j] == ">":
                    depth -= 1
                elif type_name[j] == "," and depth == 1:
                    arity += 1
                j += 1
            out.append(f"<{arity}>")
            i = j
        else:
            if not ch.isspace():
                out.append(ch)
            i += 1
    return "".join(out)


def _split_top_level_commas(text: str) -> list[str]:
    parts: list[str] = []
    cur: list[str] = []
    depth = 0
    for ch in text:
        if ch in "<([":
            depth += 1
            cur.append(ch)
        elif ch in ">)]":
            depth = max(0, depth - 1)
            cur.append(ch)
        elif ch == "," and depth == 0:
            item = "".join(cur).strip()
            if item:
                parts.append(item)
            cur = []
        else:
            cur.append(ch)
    tail = "".join(cur).strip()
    if tail:
        parts.append(tail)
    return parts


def _looks_like_interface(type_ref: str, known_interfaces: set[str] | None = None) -> bool:
    base = type_ref.split("<", 1)[0].rsplit(".", 1)[-1].strip()
    if base in _KNOWN_INTERFACES:
        return True
    if known_interfaces and base in known_interfaces:
        return True
    return len(base) >= 2 and base[0] == "I" and base[1].isupper()


def _split_bases(
    kind: str,
    bases_raw: str | None,
    known_interfaces: set[str] | None = None,
) -> tuple[str | None, list[str]]:
    if not bases_raw:
        return None, []
    items = [b.strip() for b in _split_top_level_commas(bases_raw) if b.strip()]
    if not items:
        return None, []
    if kind == "enum":
        return items[0], []
    if kind == "interface":
        return None, items
    if kind == "struct":
        return None, items
    # kind == "class"
    first = items[0]
    if _looks_like_interface(first, known_interfaces):
        return None, items
    return first, items[1:]


def _norm_base_name(b: str | None) -> str | None:
    if not b:
        return None
    s = b.strip()
    if "." in s:
        s = s.rsplit(".", 1)[-1]
    s = _strip_generics_with_arity(s)
    if s in ("Object", "object", "ValueType", "Enum"):
        return None
    return s


def _is_compiler_generated_name(name: str) -> bool:
    return name.startswith("<") or ".<" in name


@dataclass
class MemberField:
    name: str
    field_type: str
    modifiers: list[str] = field(default_factory=list)
    attributes: list[str] = field(default_factory=list)


@dataclass
class MemberMethod:
    name: str
    return_type: str
    param_count: int
    params_raw: str
    modifiers: list[str] = field(default_factory=list)
    attributes: list[str] = field(default_factory=list)
    rva: str | None = None
    body_stripped: str | None = None
    is_stub: bool = False
    stub_reason: str | None = None
    line: int = 0


@dataclass
class ParsedType:
    namespace: str
    raw_namespace: str
    full_name: str
    kind: str
    assembly: str = ""
    type_def_index: int = -1
    base_class: str | None = None
    interfaces: list[str] = field(default_factory=list)
    attributes: list[str] = field(default_factory=list)
    fields: list[MemberField] = field(default_factory=list)
    properties: list[str] = field(default_factory=list)
    events: list[str] = field(default_factory=list)
    methods: list[MemberMethod] = field(default_factory=list)
    is_nested: bool = False
    is_compiler_generated: bool = False
    file_path: str | None = None
    has_dummydll_marker: bool = False

    @property
    def norm_name(self) -> str:
        return _strip_generics_with_arity(self.full_name)


def parse_dump_cs(
    dump_path: str | os.PathLike[str],
    target_assembly_re: re.Pattern[str] | None = DEFAULT_TARGET_ASSEMBLY_RE,
) -> dict[str, Any]:
    """Parse il2cpp_dump/dump.cs using // Image + // TypeDefIndex ranges."""
    path = Path(dump_path)
    if not path.is_file():
        return {
            "passed": False,
            "error": f"dump.cs not found: {path}",
            "images": [],
            "user_types": [],
            "excluded_module_count": 0,
            "excluded_cg_count": 0,
        }

    images: list[tuple[int, str]] = []
    raw_types: list[ParsedType] = []

    pending_ns = ""
    pending_attrs: list[str] = []
    current_type: ParsedType | None = None
    current_section: str | None = None
    member_attrs: list[str] = []
    pending_rva: str | None = None

    with path.open("r", encoding="utf-8", errors="replace") as f:
        for raw_line in f:
            line = raw_line.rstrip("\r\n")

            if current_type is None:
                im = _RE_IMAGE_HDR.match(line)
                if im:
                    images.append((int(im.group(2)), im.group(1)))
                    continue

                nsm = _RE_NS_LINE.match(line)
                if nsm:
                    pending_ns = nsm.group(1).strip()
                    pending_attrs = []
                    continue

                stripped = line.strip()
                if not stripped:
                    continue
                if stripped.startswith("["):
                    am = _RE_ATTR_LINE.match(stripped)
                    if am:
                        for sub in _split_top_level_commas(am.group(1)):
                            pending_attrs.append(normalize_attr_name(sub))
                    continue

                tm = _RE_TYPEDEF.match(stripped)
                if tm:
                    kind = tm.group("kind")
                    full_name = tm.group("name").strip()
                    bases_raw = tm.group("bases")
                    idx = int(tm.group("idx"))
                    base_cls, ifaces = _split_bases(kind, bases_raw)
                    pt = ParsedType(
                        namespace=pending_ns,
                        raw_namespace=pending_ns,
                        full_name=full_name,
                        kind=kind,
                        type_def_index=idx,
                        base_class=base_cls,
                        interfaces=ifaces,
                        attributes=pending_attrs,
                        is_nested="." in _strip_generics_with_arity(full_name),
                        is_compiler_generated=_is_compiler_generated_name(full_name),
                    )
                    raw_types.append(pt)
                    current_type = pt
                    current_section = None
                    member_attrs = []
                    pending_rva = None
                    pending_attrs = []
                continue

            # Inside a type body
            if line == "}":
                current_type = None
                current_section = None
                member_attrs = []
                pending_rva = None
                pending_ns = ""
                pending_attrs = []
                continue
            if line == "{}":
                current_type = None
                current_section = None
                member_attrs = []
                pending_rva = None
                pending_ns = ""
                pending_attrs = []
                continue

            stripped = line.strip()
            if not stripped or stripped == "{":
                continue
            if stripped == "// Fields":
                current_section = "fields"
                member_attrs = []
                continue
            if stripped == "// Properties":
                current_section = "properties"
                member_attrs = []
                continue
            if stripped == "// Methods":
                current_section = "methods"
                member_attrs = []
                continue

            if stripped.startswith("["):
                am = _RE_ATTR_LINE.match(stripped)
                if am:
                    for sub in _split_top_level_commas(am.group(1)):
                        member_attrs.append(normalize_attr_name(sub))
                continue

            rvam = _RE_RVA_COMMENT.match(stripped)
            if rvam:
                pending_rva = rvam.group(1)
                continue

            if stripped.startswith("//") or stripped.startswith("/*") or stripped.startswith("|-"):
                continue

            if current_section == "fields":
                fm = _RE_FIELD_LINE.match(line)
                if fm:
                    # Skip compiler-generated backing fields
                    fname = fm.group("name")
                    if "CompilerGenerated" not in member_attrs and not fname.startswith("<"):
                        current_type.fields.append(
                            MemberField(
                                name=fname,
                                field_type=fm.group("type").strip(),
                                modifiers=fm.group("mods").split(),
                                attributes=member_attrs,
                            )
                        )
                    member_attrs = []
                    continue

            if current_section == "properties":
                pm = _RE_PROP_LINE.match(line)
                if pm:
                    current_type.properties.append(pm.group("name"))
                    member_attrs = []
                    continue

            if current_section == "methods":
                mm = _RE_METHOD_LINE.match(line)
                if mm:
                    mname = mm.group("name").strip()
                    params_raw = mm.group("params").strip()
                    p_cnt = len(_split_top_level_commas(params_raw)) if params_raw else 0
                    ret = (mm.group("ret") or "").strip()
                    current_type.methods.append(
                        MemberMethod(
                            name=mname,
                            return_type=ret,
                            param_count=p_cnt,
                            params_raw=params_raw,
                            modifiers=mm.group("mods").split(),
                            attributes=member_attrs,
                            rva=pending_rva,
                        )
                    )
                    member_attrs = []
                    pending_rva = None
                    continue

            member_attrs = []

    images.sort(key=lambda x: x[0])
    img_starts = [x[0] for x in images]

    def _lookup_assembly(typedef_idx: int) -> str:
        if not img_starts:
            return ""
        pos = bisect_right(img_starts, typedef_idx) - 1
        return images[pos][1] if pos >= 0 else ""

    # Assign assemblies & filter target assemblies
    filtered_types: list[ParsedType] = []
    known_interfaces: set[str] = set()
    excluded_module = 0
    excluded_cg = 0

    for pt in raw_types:
        pt.assembly = _lookup_assembly(pt.type_def_index)
        if target_assembly_re is not None and not target_assembly_re.match(pt.assembly):
            continue
        if pt.full_name == "<Module>":
            excluded_module += 1
            continue
        if pt.is_compiler_generated:
            excluded_cg += 1
            continue
        if pt.kind == "interface":
            known_interfaces.add(_strip_generics_with_arity(pt.full_name).split("<", 1)[0].rsplit(".", 1)[-1])
        filtered_types.append(pt)

    # Re-evaluate class base_class vs interface using discovered target interfaces
    parent_ns_lookup: dict[tuple[str, str], str] = {}
    for pt in filtered_types:
        if not pt.is_nested:
            parent_ns_lookup[(pt.assembly, _strip_generics_with_arity(pt.full_name))] = pt.namespace
        if pt.kind == "class" and pt.base_class and _looks_like_interface(pt.base_class, known_interfaces):
            pt.interfaces = [pt.base_class] + pt.interfaces
            pt.base_class = None

    # Second pass: nested types inherit parent namespace when raw_namespace is empty
    for pt in filtered_types:
        if pt.is_nested and not pt.namespace:
            norm_parts = _strip_generics_with_arity(pt.full_name).split(".")
            for cut in range(len(norm_parts) - 1, 0, -1):
                cand = ".".join(norm_parts[:cut])
                if (pt.assembly, cand) in parent_ns_lookup:
                    pt.namespace = parent_ns_lookup[(pt.assembly, cand)]
                    break

    return {
        "passed": True,
        "dump_path": str(path),
        "images_count": len(images),
        "user_types": filtered_types,
        "user_types_count": len(filtered_types),
        "excluded_module_count": excluded_module,
        "excluded_cg_count": excluded_cg,
    }


def _strip_cs_comments_keep_lines(src: str) -> str:
    """Replace comments and string contents with spaces while preserving line structure & braces."""
    out: list[str] = []
    i = 0
    n = len(src)
    while i < n:
        ch = src[i]
        nxt = src[i + 1] if i + 1 < n else ""
        # Line comment
        if ch == "/" and nxt == "/":
            while i < n and src[i] != "\n":
                out.append(" ")
                i += 1
            continue
        # Block comment
        if ch == "/" and nxt == "*":
            out.append("  ")
            i += 2
            while i < n and not (src[i] == "*" and i + 1 < n and src[i + 1] == "/"):
                out.append("\n" if src[i] == "\n" else " ")
                i += 1
            if i < n:
                out.append("  ")
                i += 2
            continue
        # Verbatim string @"..."
        if ch == "@" and nxt == '"':
            out.append('"')
            i += 2
            while i < n:
                if src[i] == '"':
                    if i + 1 < n and src[i + 1] == '"':
                        out.append("  ")
                        i += 2
                        continue
                    out.append('"')
                    i += 1
                    break
                out.append("\n" if src[i] == "\n" else " ")
                i += 1
            continue
        # Normal string "..."
        if ch == '"':
            out.append('"')
            i += 1
            while i < n:
                if src[i] == "\\":
                    out.append("  " if i + 1 < n else " ")
                    i += 2
                    continue
                if src[i] == '"':
                    out.append('"')
                    i += 1
                    break
                out.append("\n" if src[i] == "\n" else " ")
                i += 1
            continue
        # Char literal '...'
        if ch == "'":
            out.append("'")
            i += 1
            while i < n:
                if src[i] == "\\":
                    out.append("  " if i + 1 < n else " ")
                    i += 2
                    continue
                if src[i] == "'":
                    out.append("'")
                    i += 1
                    break
                out.append("\n" if src[i] == "\n" else " ")
                i += 1
            continue
        out.append(ch)
        i += 1
    return "".join(out)


def _classify_stub_body(stripped_body_no_ws: str) -> str | None:
    """Return stub reason if comment/whitespace-stripped method body is a placeholder stub."""
    if stripped_body_no_ws == "":
        return "EMPTY_BODY"
    if stripped_body_no_ws == "yieldbreak;":
        return "YIELD_BREAK_ONLY"
    if stripped_body_no_ws == "return;":
        return "RETURN_VOID_ONLY"
    if stripped_body_no_ws == "returnnull;":
        return "RETURN_NULL_ONLY"
    if stripped_body_no_ws == "returndefault;" or re.match(r"^returndefault\([^;]*\);$", stripped_body_no_ws):
        return "RETURN_DEFAULT_ONLY"
    if re.match(r"^return0(?:\.0+)?[fFdDlLuUmM]?;$", stripped_body_no_ws):
        return "RETURN_ZERO_ONLY"
    if stripped_body_no_ws == "returnfalse;":
        return "RETURN_FALSE_ONLY"
    if re.match(r"^thrownew(?:[A-Za-z0-9_.]+\.)?NotImplementedException\(.*\);$", stripped_body_no_ws):
        return "NOT_IMPLEMENTED_EXCEPTION"
    return None


_RE_CS_NS_DECL = re.compile(r"\bnamespace\s+([A-Za-z_][A-Za-z0-9_.]*)\s*$")
_RE_CS_TYPE_DECL = re.compile(
    r"^(?P<mods>(?:(?:public|private|protected|internal|sealed|abstract|static|unsafe|readonly|partial|new)\s+)*)"
    r"(?P<kind>class|struct|interface|enum)\s+"
    r"(?P<name>[A-Za-z_][A-Za-z0-9_]*(?:\s*<[^>]+>)?)"
    r"(?:\s*:\s*(?P<bases>.+?))?"
    r"(?:\s+where\s+.+)?$"
)
_RE_CS_DELEGATE = re.compile(
    r"(?:public|private|protected|internal|new|\s)*\bdelegate\s+"
    r"(?P<ret>[A-Za-z0-9_.<>\[\],\s\*\?]+?)\s+"
    r"(?P<name>[A-Za-z_][A-Za-z0-9_]*(?:\s*<[^>]+>)?)\s*\((?P<params>[^)]*)\)\s*;"
)
_RE_CS_METHOD_SIG = re.compile(
    r"^(?P<mods>(?:(?:public|private|protected|internal|static|virtual|override|abstract|sealed|new|extern|unsafe|async|partial|readonly)\s+)*)"
    r"(?:(?P<ret>[A-Za-z0-9_.<>\[\],\s\*\?]+?)\s+)?"
    r"(?P<name>[A-Za-z_~][A-Za-z0-9_.]*(?:\s*<[^>]+>)?)\s*\((?P<params>[^)]*)\)"
    r"(?:\s*:\s*(?:base|this)\s*\([^)]*\))?(?:\s+where\s+.+)?$"
)
_RE_CS_FIELD_SIG = re.compile(
    r"^(?P<mods>(?:(?:public|private|protected|internal|static|readonly|const|volatile|unsafe|new|fixed)\s+)*)"
    r"(?P<type>[A-Za-z0-9_.<>\[\],\s\*\?]+?)\s+"
    r"(?P<name>[A-Za-z_][A-Za-z0-9_]*)\s*(?:=.*)?;$"
)
_RE_CS_EVENT_SIG = re.compile(
    r"^(?:public|private|protected|internal|static|virtual|override|abstract|sealed|new|\s)*\bevent\s+"
    r"(?P<type>[A-Za-z0-9_.<>\[\],\s\*\?]+?)\s+(?P<name>[A-Za-z_][A-Za-z0-9_]*)\s*;$"
)
_RE_CS_PROP_HEADER = re.compile(
    r"^(?P<mods>(?:(?:public|private|protected|internal|static|virtual|override|abstract|sealed|new|unsafe)\s+)*)"
    r"(?P<type>[A-Za-z0-9_.<>\[\],\s\*\?]+?)\s+(?P<name>[A-Za-z_][A-Za-z0-9_]*)\s*$"
)


def _collect_cs_files(scripts_root: Path, target_prefixes: tuple[str, ...] | None) -> list[Path]:
    if not scripts_root.is_dir():
        return []
    if target_prefixes is None:
        return sorted(scripts_root.rglob("*.cs"))

    selected_dirs: list[Path] = []
    for entry in os.scandir(scripts_root):
        if entry.is_dir(follow_symlinks=False) and any(
            entry.name == p or entry.name.startswith(p) for p in target_prefixes
        ):
            selected_dirs.append(Path(entry.path))

    if not selected_dirs:
        return sorted(scripts_root.rglob("*.cs"))

    files: list[Path] = []
    for sdir in sorted(selected_dirs):
        files.extend(sorted(sdir.rglob("*.cs")))
    return files


def scan_csharp_scripts(
    scripts_root: str | os.PathLike[str],
    target_prefixes: tuple[str, ...] | None = DEFAULT_TARGET_FOLDER_PREFIXES,
) -> dict[str, Any]:
    """Scan Assets/Scripts/ target C# files, extracting types, members, attributes & bodies."""
    sroot = Path(scripts_root)
    files = _collect_cs_files(sroot, target_prefixes)
    parsed_types: list[ParsedType] = []
    dummydll_files: list[str] = []
    files_without_namespace: list[str] = []
    parse_errors: list[str] = []

    for fpath in files:
        try:
            raw = fpath.read_text(encoding="utf-8", errors="replace")
        except OSError as exc:
            parse_errors.append(f"{fpath}: {exc}")
            continue

        has_dummy = DUMMY_DLL_MARKER in raw
        if has_dummy:
            dummydll_files.append(str(fpath))

        cleaned = _strip_cs_comments_keep_lines(raw)
        # Brace-driven lightweight C# structural parser
        ns_stack: list[tuple[int, str]] = []
        type_stack: list[tuple[int, ParsedType]] = []
        brace_depth = 0
        pending_attrs: list[str] = []
        stmt_buf: list[str] = []
        line_no = 1

        i = 0
        n = len(cleaned)
        while i < n:
            ch = cleaned[i]
            if ch == "\n":
                line_no += 1

            # Skip preprocessor directives (#if, #region, etc.)
            if ch == "#" and (i == 0 or cleaned[i - 1] == "\n"):
                while i < n and cleaned[i] != "\n":
                    i += 1
                continue

            # Capture attribute blocks [...] at statement start
            if ch == "[" and not "".join(stmt_buf).strip():
                depth_sq = 1
                j = i + 1
                while j < n and depth_sq > 0:
                    if cleaned[j] == "[":
                        depth_sq += 1
                    elif cleaned[j] == "]":
                        depth_sq -= 1
                    elif cleaned[j] == "\n":
                        line_no += 1
                    j += 1
                attr_content = cleaned[i + 1 : j - 1]
                for sub in _split_top_level_commas(attr_content):
                    if sub and not sub.startswith(("assembly:", "return:", "param:")):
                        pending_attrs.append(normalize_attr_name(sub))
                i = j
                continue

            if ch == ";":
                stmt = " ".join("".join(stmt_buf).split())
                stmt_buf = []
                if stmt:
                    dm = _RE_CS_DELEGATE.match(stmt + ";")
                    if dm:
                        cur_ns = ".".join(x[1] for x in ns_stack)
                        parent_prefix = ".".join(x[1].full_name.rsplit(".", 1)[-1] for x in type_stack)
                        dname = dm.group("name").strip()
                        full_dname = f"{parent_prefix}.{dname}" if parent_prefix else dname
                        dt = ParsedType(
                            namespace=cur_ns,
                            raw_namespace=cur_ns,
                            full_name=full_dname,
                            kind="delegate",
                            base_class="MulticastDelegate",
                            attributes=pending_attrs,
                            is_nested=bool(type_stack),
                            file_path=str(fpath),
                            has_dummydll_marker=has_dummy,
                        )
                        parsed_types.append(dt)
                    elif type_stack and brace_depth == type_stack[-1][0]:
                        cur_type = type_stack[-1][1]
                        em = _RE_CS_EVENT_SIG.match(stmt + ";")
                        if em:
                            cur_type.events.append(em.group("name"))
                        else:
                            fm = _RE_CS_FIELD_SIG.match(stmt + ";")
                            if fm:
                                cur_type.fields.append(
                                    MemberField(
                                        name=fm.group("name"),
                                        field_type=fm.group("type").strip(),
                                        modifiers=fm.group("mods").split(),
                                        attributes=pending_attrs,
                                    )
                                )
                            else:
                                # Could be abstract/extern/interface method signature ending in ';'
                                mm = _RE_CS_METHOD_SIG.match(stmt)
                                if mm:
                                    mname = mm.group("name").strip()
                                    if mname not in ("if", "for", "foreach", "while", "switch", "catch", "using", "lock"):
                                        pr = mm.group("params").strip()
                                        pc = len(_split_top_level_commas(pr)) if pr else 0
                                        cur_type.methods.append(
                                            MemberMethod(
                                                name=mname,
                                                return_type=(mm.group("ret") or "").strip(),
                                                param_count=pc,
                                                params_raw=pr,
                                                modifiers=mm.group("mods").split(),
                                                attributes=pending_attrs,
                                                line=line_no,
                                            )
                                        )
                pending_attrs = []
                i += 1
                continue

            if ch == "{":
                header = " ".join("".join(stmt_buf).split())
                stmt_buf = []
                # Namespace?
                nsm = _RE_CS_NS_DECL.match(header)
                if nsm:
                    brace_depth += 1
                    ns_stack.append((brace_depth, nsm.group(1)))
                    pending_attrs = []
                    i += 1
                    continue

                # Type declaration?
                tm = _RE_CS_TYPE_DECL.match(header)
                if tm:
                    brace_depth += 1
                    cur_ns = ".".join(x[1] for x in ns_stack)
                    tname = tm.group("name").strip()
                    if type_stack:
                        full_tname = f"{type_stack[-1][1].full_name}.{tname}"
                        is_nested = True
                    else:
                        full_tname = tname
                        is_nested = False
                        if not cur_ns:
                            files_without_namespace.append(str(fpath))
                    base_cls, ifaces = _split_bases(tm.group("kind"), tm.group("bases"))
                    pt = ParsedType(
                        namespace=cur_ns,
                        raw_namespace=cur_ns,
                        full_name=full_tname,
                        kind=tm.group("kind"),
                        base_class=base_cls,
                        interfaces=ifaces,
                        attributes=pending_attrs,
                        is_nested=is_nested,
                        file_path=str(fpath),
                        has_dummydll_marker=has_dummy,
                    )
                    parsed_types.append(pt)
                    type_stack.append((brace_depth, pt))
                    pending_attrs = []
                    i += 1
                    continue

                # Inside a type body -> method, constructor, property, indexer, or enum body
                if type_stack and brace_depth == type_stack[-1][0]:
                    cur_type = type_stack[-1][1]
                    if cur_type.kind != "enum":
                        # Check method / ctor
                        mm = _RE_CS_METHOD_SIG.match(header)
                        if mm and cur_type.kind != "interface":
                            # Extract matching { ... } body cleanly
                            body_start = i + 1
                            bdepth = 1
                            j = body_start
                            end_line = line_no
                            while j < n and bdepth > 0:
                                if cleaned[j] == "{":
                                    bdepth += 1
                                elif cleaned[j] == "}":
                                    bdepth -= 1
                                elif cleaned[j] == "\n":
                                    end_line += 1
                                j += 1
                            body_clean = cleaned[body_start : j - 1]
                            no_ws = re.sub(r"\s+", "", body_clean)
                            mods = mm.group("mods").split()
                            mname = mm.group("name").strip()
                            short_cls = cur_type.full_name.rsplit(".", 1)[-1].split("<", 1)[0]
                            is_ctor = mname == short_cls
                            # Regular method stub check (empty constructors `Foo() {}` allowed unless explicitly NotImplemented)
                            stub_reason = _classify_stub_body(no_ws)
                            if is_ctor and stub_reason == "EMPTY_BODY":
                                stub_reason = None
                            if "abstract" in mods or "extern" in mods:
                                stub_reason = None

                            pr = mm.group("params").strip()
                            pc = len(_split_top_level_commas(pr)) if pr else 0
                            cur_type.methods.append(
                                MemberMethod(
                                    name=mname,
                                    return_type=(mm.group("ret") or "").strip(),
                                    param_count=pc,
                                    params_raw=pr,
                                    modifiers=mods,
                                    attributes=pending_attrs,
                                    body_stripped=no_ws,
                                    is_stub=stub_reason is not None,
                                    stub_reason=stub_reason,
                                    line=line_no,
                                )
                            )
                            pending_attrs = []
                            line_no = end_line
                            i = j
                            continue

                        pm = _RE_CS_PROP_HEADER.match(header)
                        if pm:
                            cur_type.properties.append(pm.group("name"))
                            # Skip property { ... } block
                            bdepth = 1
                            j = i + 1
                            while j < n and bdepth > 0:
                                if cleaned[j] == "{":
                                    bdepth += 1
                                elif cleaned[j] == "}":
                                    bdepth -= 1
                                elif cleaned[j] == "\n":
                                    line_no += 1
                                j += 1
                            pending_attrs = []
                            i = j
                            continue

                brace_depth += 1
                pending_attrs = []
                i += 1
                continue

            if ch == "}":
                stmt_buf = []
                pending_attrs = []
                if type_stack and brace_depth == type_stack[-1][0]:
                    type_stack.pop()
                if ns_stack and brace_depth == ns_stack[-1][0]:
                    ns_stack.pop()
                brace_depth = max(0, brace_depth - 1)
                i += 1
                continue

            stmt_buf.append(ch)
            i += 1

    return {
        "files_scanned": len(files),
        "types": parsed_types,
        "dummydll_files": sorted(set(dummydll_files)),
        "files_without_namespace": sorted(set(files_without_namespace)),
        "parse_errors": parse_errors,
    }


def _match_method_names(dump_type: ParsedType, cs_type: ParsedType) -> tuple[int, int]:
    """Compare methods on matched non-DummyDll types, accounting for properties/events/ctors."""
    cs_short = cs_type.full_name.rsplit(".", 1)[-1].split("<", 1)[0]
    cs_sigs: Counter[tuple[str, int]] = Counter()
    for m in cs_type.methods:
        if m.name == cs_short:
            if "static" in m.modifiers:
                cs_sigs[(".cctor", 0)] += 1
            else:
                cs_sigs[(".ctor", m.param_count)] += 1
        else:
            cs_sigs[(_strip_generics_with_arity(m.name), m.param_count)] += 1
    for p in cs_type.properties:
        cs_sigs[(f"get_{p}", 0)] += 1
        cs_sigs[(f"set_{p}", 1)] += 1
    for ev in cs_type.events:
        cs_sigs[(f"add_{ev}", 1)] += 1
        cs_sigs[(f"remove_{ev}", 1)] += 1

    missing = 0
    attr_mismatch = 0
    cs_method_attrs: dict[str, set[str]] = defaultdict(set)
    for m in cs_type.methods:
        cs_method_attrs[_strip_generics_with_arity(m.name)].update(m.attributes)

    for dm in dump_type.methods:
        dname = _strip_generics_with_arity(dm.name)
        if (dname, dm.param_count) not in cs_sigs:
            # Allow getter/setter/indexer flexibility for property accessors
            if dname.startswith(("get_", "set_", "add_", "remove_")) and any(
                k[0] == dname for k in cs_sigs
            ):
                pass
            else:
                missing += 1
        if "BurstCompile" in dm.attributes and "BurstCompile" not in cs_method_attrs.get(dname, set()):
            attr_mismatch += 1

    return missing, attr_mismatch


def compare_parity(
    dump_result: dict[str, Any],
    cs_result: dict[str, Any],
) -> dict[str, Any]:
    """F4: Compare dump.cs authoritative types vs Assets/Scripts/ C# types."""
    if not dump_result.get("passed", False):
        return {
            "passed": False,
            "error": dump_result.get("error", "dump.cs parse failed"),
        }

    dump_types: list[ParsedType] = dump_result["user_types"]
    cs_types: list[ParsedType] = cs_result["types"]

    cs_by_key: dict[tuple[str, str], ParsedType] = {}
    cs_by_name: dict[str, list[ParsedType]] = defaultdict(list)
    for ct in cs_types:
        cs_by_key[(ct.namespace, ct.norm_name)] = ct
        cs_by_name[ct.norm_name].append(ct)

    missing_types: list[dict[str, str]] = []
    namespace_mismatches: list[dict[str, str]] = []
    base_class_mismatches: list[dict[str, Any]] = []
    interface_mismatches: list[dict[str, Any]] = []
    attribute_mismatches: list[dict[str, Any]] = []
    field_mismatches: list[dict[str, Any]] = []
    method_mismatches: list[dict[str, Any]] = []

    matched_count = 0
    missing_fields_total = 0
    missing_methods_total = 0

    for dt in dump_types:
        key = (dt.namespace, dt.norm_name)
        ct = cs_by_key.get(key)
        if ct is None:
            cands = cs_by_name.get(dt.norm_name, [])
            if cands:
                ct = cands[0]
                namespace_mismatches.append(
                    {
                        "type": dt.full_name,
                        "assembly": dt.assembly,
                        "expected_namespace": dt.namespace,
                        "actual_namespace": ct.namespace,
                        "file": ct.file_path or "",
                    }
                )
            else:
                missing_types.append(
                    {
                        "type": dt.full_name,
                        "assembly": dt.assembly,
                        "namespace": dt.namespace,
                        "kind": dt.kind,
                    }
                )
                continue

        matched_count += 1

        # Base class parity
        d_base = _norm_base_name(dt.base_class)
        c_base = _norm_base_name(ct.base_class)
        if d_base != c_base:
            base_class_mismatches.append(
                {
                    "type": dt.full_name,
                    "namespace": dt.namespace,
                    "expected_base": dt.base_class,
                    "actual_base": ct.base_class,
                    "file": ct.file_path or "",
                }
            )

        # Interfaces parity
        d_ifaces = {_strip_generics_with_arity(x.rsplit(".", 1)[-1]) for x in dt.interfaces}
        c_ifaces = {_strip_generics_with_arity(x.rsplit(".", 1)[-1]) for x in ct.interfaces}
        missing_ifaces = sorted(d_ifaces - c_ifaces)
        if missing_ifaces:
            interface_mismatches.append(
                {
                    "type": dt.full_name,
                    "missing_interfaces": missing_ifaces,
                    "file": ct.file_path or "",
                }
            )

        # Critical attributes parity ([BurstCompile], [Serializable])
        for req_attr in ("BurstCompile",):
            if req_attr in dt.attributes and req_attr not in ct.attributes:
                attribute_mismatches.append(
                    {
                        "type": dt.full_name,
                        "member": "<type>",
                        "missing_attribute": req_attr,
                        "file": ct.file_path or "",
                    }
                )

        # Field & method parity (check on all matched types; track counts)
        cs_field_map = {f.name: f for f in ct.fields}
        type_missing_fields: list[str] = []
        for df in dt.fields:
            cf = cs_field_map.get(df.name)
            if cf is None:
                type_missing_fields.append(df.name)
            else:
                if "SerializeField" in df.attributes and "SerializeField" not in cf.attributes:
                    attribute_mismatches.append(
                        {
                            "type": dt.full_name,
                            "member": df.name,
                            "missing_attribute": "SerializeField",
                            "file": ct.file_path or "",
                        }
                    )
                d_ftype = _strip_generics_with_arity(df.field_type.rsplit(".", 1)[-1])
                c_ftype = _strip_generics_with_arity(cf.field_type.rsplit(".", 1)[-1])
                if d_ftype != c_ftype:
                    field_mismatches.append(
                        {
                            "type": dt.full_name,
                            "field": df.name,
                            "expected_type": df.field_type,
                            "actual_type": cf.field_type,
                            "file": ct.file_path or "",
                        }
                    )
        if type_missing_fields:
            missing_fields_total += len(type_missing_fields)
            field_mismatches.append(
                {
                    "type": dt.full_name,
                    "missing_fields": type_missing_fields[:10],
                    "missing_count": len(type_missing_fields),
                    "file": ct.file_path or "",
                }
            )

        m_miss, m_attr_miss = _match_method_names(dt, ct)
        if m_miss > 0:
            missing_methods_total += m_miss
            method_mismatches.append(
                {
                    "type": dt.full_name,
                    "missing_methods_count": m_miss,
                    "expected_total": len(dt.methods),
                    "actual_total": len(ct.methods),
                    "file": ct.file_path or "",
                }
            )
        if m_attr_miss > 0:
            attribute_mismatches.append(
                {
                    "type": dt.full_name,
                    "member": "<methods>",
                    "missing_attribute": "BurstCompile",
                    "count": m_attr_miss,
                    "file": ct.file_path or "",
                }
            )

    passed = (
        len(missing_types) == 0
        and len(namespace_mismatches) == 0
        and len(base_class_mismatches) == 0
        and len(interface_mismatches) == 0
        and len(attribute_mismatches) == 0
        and len(field_mismatches) == 0
        and len(method_mismatches) == 0
    )

    return {
        "passed": passed,
        "dump_user_types": len(dump_types),
        "cs_types_found": len(cs_types),
        "matched_types": matched_count,
        "missing_types_count": len(missing_types),
        "namespace_mismatches_count": len(namespace_mismatches),
        "base_class_mismatches_count": len(base_class_mismatches),
        "interface_mismatches_count": len(interface_mismatches),
        "attribute_mismatches_count": len(attribute_mismatches),
        "field_mismatch_types_count": len(field_mismatches),
        "missing_fields_total": missing_fields_total,
        "method_mismatch_types_count": len(method_mismatches),
        "missing_methods_total": missing_methods_total,
        "samples": {
            "missing_types": missing_types[:30],
            "namespace_mismatches": namespace_mismatches[:30],
            "base_class_mismatches": base_class_mismatches[:30],
            "interface_mismatches": interface_mismatches[:30],
            "attribute_mismatches": attribute_mismatches[:30],
            "field_mismatches": field_mismatches[:30],
            "method_mismatches": method_mismatches[:30],
        },
    }


def detect_stubs(cs_result: dict[str, Any]) -> dict[str, Any]:
    """F4: Detect AssetRipper DummyDll files & brace-matched stub method bodies."""
    dummydll_files: list[str] = cs_result.get("dummydll_files", [])
    stub_methods: list[dict[str, Any]] = []
    total_methods_checked = 0

    for pt in cs_result.get("types", []):
        for m in pt.methods:
            total_methods_checked += 1
            if m.is_stub:
                stub_methods.append(
                    {
                        "type": pt.full_name,
                        "method": m.name,
                        "reason": m.stub_reason,
                        "line": m.line,
                        "file": pt.file_path or "",
                    }
                )

    passed = len(dummydll_files) == 0 and len(stub_methods) == 0
    return {
        "passed": passed,
        "files_scanned": cs_result.get("files_scanned", 0),
        "total_methods_checked": total_methods_checked,
        "dummydll_files_count": len(dummydll_files),
        "stub_methods_count": len(stub_methods),
        "samples": {
            "dummydll_files": dummydll_files[:30],
            "stub_methods": stub_methods[:40],
        },
    }


def _iter_non_binary_files(root: Path, extensions: tuple[str, ...]) -> list[Path]:
    results: list[Path] = []
    if not root.is_dir():
        return results
    for dirpath, dirnames, filenames in os.walk(root):
        dirnames[:] = [d for d in dirnames if d not in BINARY_ASSET_DIRS]
        for fn in filenames:
            if fn.endswith(extensions):
                results.append(Path(dirpath) / fn)
    return results


def check_guid_integrity(
    assets_root: str | os.PathLike[str],
    scripts_root: str | os.PathLike[str] | None = None,
    baseline_guids: dict[str, str] | None = None,
    strict_all_script_guids: bool = False,
) -> dict[str, Any]:
    """F4: Verify .cs <-> .cs.meta pairing, 0 duplicate GUIDs, and scene/prefab m_Script bindings."""
    aroot = Path(assets_root)
    sroot = Path(scripts_root) if scripts_root is not None else aroot / "Scripts"

    missing_meta: list[str] = []
    orphan_meta: list[str] = []
    invalid_meta_guid: list[str] = []
    guid_to_files: dict[str, list[str]] = defaultdict(list)
    scripts_guids: dict[str, str] = {}

    if sroot.is_dir():
        cs_files = sorted(sroot.rglob("*.cs"))
        cs_meta_files = sorted(sroot.rglob("*.cs.meta"))
        cs_set = {str(p) for p in cs_files}
        meta_set = {str(p) for p in cs_meta_files}

        for cs_p in cs_files:
            if f"{cs_p}.meta" not in meta_set:
                missing_meta.append(str(cs_p))
        for mp in cs_meta_files:
            if str(mp)[:-5] not in cs_set:
                orphan_meta.append(str(mp))
            try:
                txt = mp.read_text(encoding="utf-8", errors="replace")
            except OSError:
                invalid_meta_guid.append(str(mp))
                continue
            gm = _RE_META_GUID.search(txt)
            if not gm:
                invalid_meta_guid.append(str(mp))
                continue
            guid = gm.group(1).lower()
            rel = str(mp.relative_to(sroot)).replace("\\", "/")
            scripts_guids[rel] = guid
            guid_to_files[guid].append(str(mp))

    # Also check global uniqueness across any remaining *.cs.meta under Assets (pruning binary dirs)
    for mp in _iter_non_binary_files(aroot, (".cs.meta",)):
        mp_str = str(mp)
        if any(mp_str in lst for lst in guid_to_files.values()):
            continue
        try:
            txt = mp.read_text(encoding="utf-8", errors="replace")
        except OSError:
            continue
        gm = _RE_META_GUID.search(txt)
        if gm:
            guid_to_files[gm.group(1).lower()].append(mp_str)

    duplicate_guids = {g: files for g, files in guid_to_files.items() if len(files) > 1}
    owned_guid_set = set(guid_to_files.keys())

    changed_baseline_guids: list[dict[str, str]] = []
    baseline_guid_values: set[str] = set()
    if baseline_guids:
        for rel, old_g in baseline_guids.items():
            old_low = old_g.lower()
            baseline_guid_values.add(old_low)
            cur_g = scripts_guids.get(rel.replace("\\", "/"))
            if cur_g != old_low:
                changed_baseline_guids.append({"file": rel, "expected": old_low, "actual": cur_g or "<missing>"})

    # Scene & prefab m_Script scan (pruning binary-only directories)
    scene_prefab_files = _iter_non_binary_files(aroot, (".unity", ".prefab"))
    resolved_local_refs = 0
    external_unmapped_guids: set[str] = set()
    broken_script_refs: list[dict[str, str]] = []

    for spf in scene_prefab_files:
        try:
            txt = spf.read_text(encoding="utf-8", errors="replace")
        except OSError:
            continue
        for m in _RE_MSCRIPT_GUID.finditer(txt):
            g = m.group(1).lower()
            if g == "0" * 32:
                broken_script_refs.append({"asset": str(spf), "guid": g, "reason": "NULL_GUID"})
            elif g in owned_guid_set:
                resolved_local_refs += 1
            elif g in baseline_guid_values:
                broken_script_refs.append({"asset": str(spf), "guid": g, "reason": "MISSING_BASELINE_LOCAL_SCRIPT"})
            elif strict_all_script_guids:
                broken_script_refs.append({"asset": str(spf), "guid": g, "reason": "UNRESOLVED_SCRIPT_GUID"})
            else:
                external_unmapped_guids.add(g)

    passed = (
        len(missing_meta) == 0
        and len(orphan_meta) == 0
        and len(invalid_meta_guid) == 0
        and len(duplicate_guids) == 0
        and len(changed_baseline_guids) == 0
        and len(broken_script_refs) == 0
    )

    return {
        "passed": passed,
        "scripts_meta_count": len(scripts_guids),
        "unique_guids_count": len(guid_to_files),
        "missing_meta_count": len(missing_meta),
        "orphan_meta_count": len(orphan_meta),
        "invalid_meta_guid_count": len(invalid_meta_guid),
        "duplicate_guids_count": len(duplicate_guids),
        "changed_baseline_guids_count": len(changed_baseline_guids),
        "scenes_prefabs_scanned": len(scene_prefab_files),
        "resolved_local_script_refs": resolved_local_refs,
        "external_unmapped_script_guids_count": len(external_unmapped_guids),
        "broken_script_refs_count": len(broken_script_refs),
        "samples": {
            "missing_meta": missing_meta[:25],
            "orphan_meta": orphan_meta[:25],
            "invalid_meta_guid": invalid_meta_guid[:25],
            "duplicate_guids": dict(list(duplicate_guids.items())[:10]),
            "changed_baseline_guids": changed_baseline_guids[:25],
            "broken_script_refs": broken_script_refs[:25],
        },
    }


def _default_requires_allow_unsafe(asm_name: str) -> bool:
    return (
        asm_name == "Atlas"
        or asm_name.startswith("Atlas.")
        or asm_name.startswith("Core.")
        or asm_name in ("UI2", "StateManagement")
    )


def check_asmdef_dag(
    scripts_root: str | os.PathLike[str],
    package_cache_dir: str | os.PathLike[str] | None = None,
) -> dict[str, Any]:
    """F3 static: Validate .asmdef acyclic DAG (name & GUID: refs) and allowUnsafeCode."""
    sroot = Path(scripts_root)
    asmdef_files = sorted(sroot.rglob("*.asmdef")) if sroot.is_dir() else []

    nodes: dict[str, dict[str, Any]] = {}
    guid_to_name: dict[str, str] = {}
    parse_errors: list[str] = []

    for ap in asmdef_files:
        try:
            data = json.loads(ap.read_text(encoding="utf-8", errors="replace"))
        except (OSError, json.JSONDecodeError) as exc:
            parse_errors.append(f"{ap}: {exc}")
            continue
        name = data.get("name")
        if not name:
            parse_errors.append(f"{ap}: missing 'name' field")
            continue

        meta_p = Path(f"{ap}.meta")
        meta_guid = None
        if meta_p.is_file():
            gm = _RE_META_GUID.search(meta_p.read_text(encoding="utf-8", errors="replace"))
            if gm:
                meta_guid = gm.group(1).lower()
                guid_to_name[meta_guid] = name

        nodes[name] = {
            "path": str(ap),
            "guid": meta_guid,
            "references": list(data.get("references") or []),
            "allowUnsafeCode": bool(data.get("allowUnsafeCode", False)),
        }

    # Optional package cache GUID lookup (skipping Samples~ to avoid Windows >260 char paths)
    package_guids: set[str] = set()
    if package_cache_dir is not None:
        pc_dir = Path(package_cache_dir)
        if pc_dir.is_dir():
            for dirpath, dirnames, filenames in os.walk(pc_dir):
                dirnames[:] = [d for d in dirnames if d != "Samples~"]
                for fn in filenames:
                    if fn.endswith(".asmdef.meta"):
                        try:
                            txt = (Path(dirpath) / fn).read_text(encoding="utf-8", errors="replace")
                            gm = _RE_META_GUID.search(txt)
                            if gm:
                                package_guids.add(gm.group(1).lower())
                        except OSError:
                            pass

    adj: dict[str, list[str]] = {name: [] for name in nodes}
    broken_guid_refs: list[dict[str, str]] = []
    external_refs: list[dict[str, str]] = []
    ref_style_counts = {"NAME": 0, "GUID": 0}
    missing_allow_unsafe: list[str] = []

    for name, info in nodes.items():
        if _default_requires_allow_unsafe(name) and not info["allowUnsafeCode"]:
            missing_allow_unsafe.append(name)

        for ref in info["references"]:
            if not isinstance(ref, str):
                continue
            if ref.upper().startswith("GUID:"):
                ref_style_counts["GUID"] += 1
                g = ref.split(":", 1)[1].strip().lower()
                target_name = guid_to_name.get(g)
                if target_name:
                    adj[name].append(target_name)
                elif g in package_guids:
                    external_refs.append({"assembly": name, "ref": ref})
                else:
                    broken_guid_refs.append({"assembly": name, "ref": ref})
            else:
                ref_style_counts["NAME"] += 1
                if ref in nodes:
                    adj[name].append(ref)
                else:
                    external_refs.append({"assembly": name, "ref": ref})

    # 3-color DFS cycle detection (0=WHITE, 1=GRAY, 2=BLACK)
    color: dict[str, int] = {name: 0 for name in nodes}
    stack: list[str] = []
    cycles: list[list[str]] = []

    def dfs(u: str) -> None:
        color[u] = 1
        stack.append(u)
        for v in adj.get(u, []):
            if color[v] == 1:
                idx = stack.index(v)
                cycles.append(stack[idx:] + [v])
            elif color[v] == 0:
                dfs(v)
        stack.pop()
        color[u] = 2

    for node_name in sorted(nodes):
        if color[node_name] == 0:
            dfs(node_name)

    passed = (
        len(parse_errors) == 0
        and len(nodes) > 0
        and len(cycles) == 0
        and len(broken_guid_refs) == 0
        and len(missing_allow_unsafe) == 0
    )

    return {
        "passed": passed,
        "asmdef_count": len(nodes),
        "ref_style_counts": ref_style_counts,
        "external_refs_count": len(external_refs),
        "cycles_count": len(cycles),
        "cycles": cycles[:20],
        "broken_guid_refs_count": len(broken_guid_refs),
        "broken_guid_refs": broken_guid_refs[:20],
        "missing_allow_unsafe_count": len(missing_allow_unsafe),
        "missing_allow_unsafe": missing_allow_unsafe,
        "parse_errors": parse_errors,
    }


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(description="Verify F4 (dump.cs parity, stubs, GUIDs) & F3-static (.asmdef DAG).")
    parser.add_argument("--workspace", default=".")
    parser.add_argument("--dump-cs", default=None)
    parser.add_argument("--unity-project", default=None)
    parser.add_argument("--json-out", default=None)
    args = parser.parse_args(argv)

    ws = Path(args.workspace).resolve()
    dump_path = Path(args.dump_cs) if args.dump_cs else ws / "il2cpp_dump" / "dump.cs"
    uproj = Path(args.unity_project) if args.unity_project else ws / "ripped_unity_project" / "ExportedProject"
    assets_root = uproj / "Assets"
    scripts_root = assets_root / "Scripts"
    pkg_cache = uproj / "Library" / "PackageCache"

    dump_res = parse_dump_cs(dump_path)
    cs_res = scan_csharp_scripts(scripts_root)
    parity = compare_parity(dump_res, cs_res)
    stubs = detect_stubs(cs_res)
    guids = check_guid_integrity(assets_root, scripts_root)
    dag = check_asmdef_dag(scripts_root, pkg_cache)

    payload = {
        "passed": all(r.get("passed", False) for r in (parity, stubs, guids, dag)),
        "results": {
            "f4_parity": parity,
            "f4_stubs": stubs,
            "f4_guids": guids,
            "f3_asmdef_dag": dag,
        },
    }
    if args.json_out:
        out_p = Path(args.json_out)
        out_p.parent.mkdir(parents=True, exist_ok=True)
        out_p.write_text(json.dumps(payload, indent=2), encoding="utf-8")
    else:
        print(json.dumps(payload, indent=2))
    return 0 if payload["passed"] else 2


if __name__ == "__main__":
    sys.exit(main())
