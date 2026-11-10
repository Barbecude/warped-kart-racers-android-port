import os
import glob
import UnityPy

app_dir = r"C:\Users\Zevaldo\AppData\Local\Temp\rea-extracted-fc8a3516-3781-45b7-be25-04e71bd99943\Payload\Warped Kart Racers.app"
bundle_files = glob.glob(os.path.join(app_dir, "Data", "Raw", "aa", "**", "*.bundle"), recursive=True)
data_files = glob.glob(os.path.join(app_dir, "Data", "*"), recursive=False)

shader_names = set()
for p in data_files + bundle_files:
    if os.path.isdir(p):
        continue
    try:
        env = UnityPy.load(p)
        for obj in env.objects:
            if obj.type.name == "Shader":
                d = obj.read()
                name = None
                if getattr(d, "m_ParsedForm", None) and getattr(d.m_ParsedForm, "m_Name", None):
                    name = d.m_ParsedForm.m_Name
                elif getattr(d, "m_Name", None):
                    name = d.m_Name
                if name:
                    shader_names.add((name, os.path.basename(p)))
    except Exception:
        pass

print(f"Total unique named shaders found: {len(shader_names)}")
for s, origin in sorted(shader_names):
    print(f" - {s} (from {origin})")
