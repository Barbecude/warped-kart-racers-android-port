import collections
import re
import sys

log_path = sys.argv[1] if len(sys.argv) > 1 else "tools/unity_compile10.log"
errs = sorted(set(
    l.strip()
    for l in open(log_path, encoding="utf-8", errors="ignore")
    if "error CS" in l
))
print("Unique errors:", len(errs))

by_type = collections.defaultdict(set)
other = []
for e in errs:
    m = re.search(r"'([^']+)' does not contain a definition for '([^']+)'", e)
    if m:
        if m.group(1) != "DependencyManager":
            by_type[m.group(1)].add(m.group(2))
    else:
        other.append(e)

print(f"\nTypes needing members ({len(by_type)}):")
for t in sorted(by_type):
    print(f"  {t}: {sorted(by_type[t])}")

print(f"\nOther errors ({len(other)}):")
for o in other[:30]:
    print(" ", o)
