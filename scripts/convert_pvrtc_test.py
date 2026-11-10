import UnityPy
from PIL import Image
import os

out_dir = r"C:\wkr\extracted_textures\converted_pvrtc"
os.makedirs(out_dir, exist_ok=True)

targets = [
    (r"C:\Users\Zevaldo\AppData\Local\Temp\rea-extracted-fc8a3516-3781-45b7-be25-04e71bd99943\Payload\Warped Kart Racers.app\Data\Raw\aa\iOS\karts_common_assets_all_9d4a10df03ab799604aedb630204ee00.bundle", "SA_VFX_ExplosionSet"),
    (r"C:\Users\Zevaldo\AppData\Local\Temp\rea-extracted-fc8a3516-3781-45b7-be25-04e71bd99943\Payload\Warped Kart Racers.app\Data\Raw\aa\iOS\ui_assets_all_ac86a0f5fff84a1e0b3cf71d9ba3c137.bundle", "Square")
]

for bundle_path, tex_name in targets:
    env = UnityPy.load(bundle_path)
    for obj in env.objects:
        if obj.type.name == "Texture2D":
            d = obj.read()
            if getattr(d, "m_Name", None) == tex_name or getattr(d, "name", None) == tex_name:
                print(f"Found {tex_name}! Format: {d.m_TextureFormat}")
                img = d.image
                out_path = os.path.join(out_dir, f"{tex_name}.png")
                img.save(out_path)
                print(f"Saved {tex_name} to {out_path} (size: {img.size})")
