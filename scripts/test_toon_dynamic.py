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
            raw = bytes(d.compressedBlob)
            c_lens = d.compressedLengths[0]
            d_lens = d.decompressedLengths[0]
            
            decompressed = b""
            offset = 0
            for c_len, d_len in zip(c_lens, d_lens):
                chunk = raw[offset:offset+c_len]
                offset += c_len
                decompressed += lz4.block.decompress(chunk, uncompressed_size=d_len)
            
            print("Total decompressed:", len(decompressed))
            blocks = re.findall(rb"#include <metal_stdlib>[\s\S]*?(?=\x00)", decompressed)
            print("Found metal blocks:", len(blocks))
            if blocks:
                print("--- Block 0 snippet ---")
                print(blocks[0][:400].decode("utf-8", errors="replace"))
            break
