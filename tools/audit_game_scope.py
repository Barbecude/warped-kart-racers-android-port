import collections
import json

s = json.load(open("il2cpp_dump/script.json", encoding="utf-8"))
game_m = [m for m in s["ScriptMethod"] if m["Name"].startswith(("Atlas.", "Core."))]
by_ns = collections.Counter()
classes = set()
for m in game_m:
    if "$$" in m["Name"]:
        cls = m["Name"].split("$$")[0]
        classes.add(cls)
        ns = cls.rsplit(".", 1)[0] if "." in cls else "(global)"
        by_ns[ns] += 1

print(f"Total ScriptMethod in binary: {len(s['ScriptMethod'])}")
print(f"Total game methods (Atlas.* + Core.*): {len(game_m)}")
print(f"Total unique game classes: {len(classes)}")
print("\nTop 25 namespaces by method count:")
for ns, c in by_ns.most_common(25):
    print(f"  {c:5d}  {ns}")
