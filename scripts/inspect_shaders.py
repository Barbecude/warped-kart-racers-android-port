import os
import glob
import UnityPy

app_dir = r"C:\Users\Zevaldo\AppData\Local\Temp\rea-extracted-fc8a3516-3781-45b7-be25-04e71bd99943\Payload\Warped Kart Racers.app"

# Look for shaders in Data/
data_files = [os.path.join(app_dir, "Data", "Resources", "unity_builtin_extra")]
bundle_files = glob.glob(os.path.join(app_dir, "Data", "Raw", "aa", "**", "*shader*.bundle"), recursive=True)

all_shaders = []
for p in data_files + bundle_files:
    if not os.path.exists(p):
        continue
    env = UnityPy.load(p)
    for obj in env.objects:
        if obj.type.name == "Shader":
            data = obj.read()
            name = getattr(data, "m_Name", None) or getattr(data, "name", None)
            all_shaders.append((name, os.path.basename(p)))

print(f"Total Shaders found: {len(all_shaders)}")
for name, origin in all_shaders[:30]:
    print(f" - {name} ({origin})")
