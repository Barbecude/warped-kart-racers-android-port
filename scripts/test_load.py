import os
import glob
import UnityPy

bundle_dir = r"C:\Users\Zevaldo\AppData\Local\Temp\rea-extracted-fc8a3516-3781-45b7-be25-04e71bd99943\Payload\Warped Kart Racers.app\Data\Raw\aa"
def_bundles = glob.glob(os.path.join(bundle_dir, "**", "*definitions*.bundle"), recursive=True)
print(f"Found {len(def_bundles)} definitions bundle(s):")
for b in def_bundles:
    print(f"Loading {os.path.basename(b)} ({os.path.getsize(b)} bytes)...")
    env = UnityPy.load(b)
    types = {}
    for obj in env.objects:
        types[obj.type.name] = types.get(obj.type.name, 0) + 1
    print("Types in bundle:", types)
