import os
import glob
import re
import lz4.block
import UnityPy

out_base = r"C:\wkr\extracted_shaders\msl"
os.makedirs(out_base, exist_ok=True)

app_dir = r"C:\Users\Zevaldo\AppData\Local\Temp\rea-extracted-fc8a3516-3781-45b7-be25-04e71bd99943\Payload\Warped Kart Racers.app"
bundle_files = glob.glob(os.path.join(app_dir, "Data", "Raw", "aa", "**", "*.bundle"), recursive=True)
data_files = glob.glob(os.path.join(app_dir, "Data", "*"), recursive=False)

extracted_count = 0
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
                
                if not name:
                    continue
                
                # Check if it has compressedBlob
                if not hasattr(d, "compressedBlob") or not d.compressedBlob:
                    continue
                
                raw = bytes(d.compressedBlob)
                if not d.compressedLengths or not d.decompressedLengths:
                    continue
                
                c_lens = d.compressedLengths[0] if isinstance(d.compressedLengths[0], list) else d.compressedLengths
                d_lens = d.decompressedLengths[0] if isinstance(d.decompressedLengths[0], list) else d.decompressedLengths
                
                decompressed = b""
                offset = 0
                try:
                    for c_len, d_len in zip(c_lens, d_lens):
                        chunk = raw[offset:offset+c_len]
                        offset += c_len
                        decompressed += lz4.block.decompress(chunk, uncompressed_size=d_len)
                except Exception as e:
                    print(f"Error decompressing {name}: {e}")
                    continue
                
                blocks = re.findall(rb"#include <metal_stdlib>[\s\S]*?(?=\x00)", decompressed)
                if not blocks:
                    continue
                
                safe_name = name.replace("/", "_").replace("\\", "_")
                shader_dir = os.path.join(out_base, safe_name)
                os.makedirs(shader_dir, exist_ok=True)
                
                for idx, block in enumerate(blocks):
                    out_path = os.path.join(shader_dir, f"subprogram_{idx}.metal")
                    with open(out_path, "wb") as f:
                        f.write(block)
                
                print(f"Extracted {len(blocks)} metal kernels for: {name}")
                extracted_count += 1
    except Exception as e:
        pass

print(f"Total shaders with metal source extracted: {extracted_count}")
