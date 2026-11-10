import os
import json
import glob
import UnityPy

out_dir = r"C:\wkr\extracted_data"
os.makedirs(out_dir, exist_ok=True)

raw_aa = r"C:\Users\Zevaldo\AppData\Local\Temp\rea-extracted-fc8a3516-3781-45b7-be25-04e71bd99943\Payload\Warped Kart Racers.app\Data\Raw\aa"

# 1. Definitions
def_bundles = glob.glob(os.path.join(raw_aa, "**", "*definitions*.bundle"), recursive=True)
all_defs = {}
if def_bundles:
    print(f"Processing definitions bundle: {def_bundles[0]}")
    env = UnityPy.load(def_bundles[0])
    for obj in env.objects:
        if obj.type.name == "MonoBehaviour":
            try:
                tree = obj.read_typetree()
                name = tree.get("m_Name", f"obj_{obj.path_id}")
                all_defs[name] = tree
            except Exception as e:
                print(f"Error reading {obj.path_id}: {e}")

print(f"Extracted {len(all_defs)} definitions.")
with open(os.path.join(out_dir, "definitions.json"), "w", encoding="utf-8") as f:
    json.dump(all_defs, f, indent=2)

# 2. Localisation
loc_bundles = glob.glob(os.path.join(raw_aa, "**", "*localisation*.bundle"), recursive=True)
all_loc = {}
if loc_bundles:
    print(f"Processing localisation bundle: {loc_bundles[0]}")
    env = UnityPy.load(loc_bundles[0])
    for obj in env.objects:
        if obj.type.name == "MonoBehaviour":
            try:
                tree = obj.read_typetree()
                name = tree.get("m_Name", f"obj_{obj.path_id}")
                all_loc[name] = tree
            except Exception as e:
                print(f"Error reading loc {obj.path_id}: {e}")

print(f"Extracted {len(all_loc)} localisation objects.")
with open(os.path.join(out_dir, "localisation.json"), "w", encoding="utf-8") as f:
    json.dump(all_loc, f, indent=2)

print("Finished dumping definitions and localisation!")
