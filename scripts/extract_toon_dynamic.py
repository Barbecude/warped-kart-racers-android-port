import lz4.block
import UnityPy
import re

bundle_path = r"C:\Users\Zevaldo\AppData\Local\Temp\rea-extracted-fc8a3516-3781-45b7-be25-04e71bd99943\Payload\Warped Kart Racers.app\Data\Raw\aa\iOS\common_assets_all_4df27c2ccff01e5ed8789ba427c31bf9.bundle"
env = UnityPy.load(bundle_path)

for obj in env.objects:
    if obj.type.name == "Shader":
        d = obj.read()
        name = getattr(d.m_ParsedForm, "m_Name", None) if getattr(d, "m_ParsedForm", None) else getattr(d, "m_Name", None)
        if name == "Toon/Dynamic":
            print("Found Toon/Dynamic!")
            blob = d.compressedBlob
            c_lens = [item for sublist in d.compressedLengths for item in (sublist if isinstance(sublist, list) else [sublist])]
            d_lens = [item for sublist in d.decompressedLengths for item in (sublist if isinstance(sublist, list) else [sublist])]
            
            decompressed = b""
            offset = 0
            for c_len, d_len in zip(c_lens, d_lens):
                chunk = blob[offset:offset+c_len]
                offset += c_len
                dec = lz4.block.decompress(chunk, uncompressed_size=d_len)
                decompressed += dec
            
            print(f"Total decompressed: {len(decompressed)} bytes")
            with open(r"C:\wkr\extracted_data\toon_dynamic_decompressed.bin", "wb") as f:
                f.write(decompressed)
            
            strings = re.findall(rb"#include <metal_stdlib>[\s\S]*?(?=\x00)", decompressed)
            print(f"Found {len(strings)} metal source blocks!")
            if strings:
                print("First 500 bytes of first block:")
                print(strings[0][:500].decode("utf-8", errors="replace"))
            break
