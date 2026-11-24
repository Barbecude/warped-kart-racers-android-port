"""Read exact float32 / float64 / int32 constants from UnityFramework Mach-O ARM64 (image_base=0)."""
import struct
import sys

BIN = r"C:\tools\wkr_ghidra\UnityFramework"

with open(BIN, "rb") as f:
    for arg in sys.argv[1:]:
        a = int(arg.replace("_UNK_", "").replace("0x", ""), 16)
        f.seek(a)
        b = f.read(16)
        f32 = struct.unpack("<4f", b)
        f64 = struct.unpack("<2d", b)
        i32 = struct.unpack("<4i", b)
        print(f"0x{a:08x}: f32=({f32[0]:.9g}, {f32[1]:.9g}, {f32[2]:.9g}, {f32[3]:.9g})  f64=({f64[0]:.12g}, {f64[1]:.12g})  i32={i32}")
