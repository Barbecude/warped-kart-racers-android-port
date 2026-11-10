import os
import sys
import subprocess
import shutil
import zipfile

BUILD_TOOLS = r"C:\tools\android-sdk\build-tools\33.0.2"
ANDROID_JAR = r"C:\tools\android-sdk\platforms\android-31\android.jar"
KEYSTORE = r"C:\wkr\debug.keystore"
KEYSTORE_PASS = "android"
ALIAS = "androiddebugkey"
STAGE_DIR = r"C:\wkr\android_app"
CLASSES_DEX = r"C:\tools\unity_native_runtime\classes.dex"
WORKSPACE_DIR = r"C:\Users\Zevaldo\Documents\my apps\warped-kart-racers-android-port 99% clone"

AAPT2 = os.path.join(BUILD_TOOLS, "aapt2.exe")
ZIPALIGN = os.path.join(BUILD_TOOLS, "zipalign.exe")
APKSIGNER = os.path.join(BUILD_TOOLS, "apksigner.bat")

OUT_BUILD = r"C:\wkr\build_unity"
os.makedirs(OUT_BUILD, exist_ok=True)

COMPILED_RES = os.path.join(OUT_BUILD, "compiled_res.zip")
BASE_APK = os.path.join(OUT_BUILD, "base_apk.apk")
PACKAGED_APK = os.path.join(OUT_BUILD, "packaged_unaligned.apk")
ALIGNED_APK = os.path.join(OUT_BUILD, "aligned_unity.apk")
FINAL_SIGNED_APK = os.path.join(OUT_BUILD, "WarpedKartRacers_v1.62_TrueUnity3D_android.apk")

def run(cmd, desc):
    print(f"=== {desc} ===")
    print("Command:", " ".join(cmd) if isinstance(cmd, list) else cmd)
    res = subprocess.run(cmd, capture_output=True, text=True, shell=isinstance(cmd, str))
    if res.returncode != 0:
        print("STDOUT:\n", res.stdout)
        print("STDERR:\n", res.stderr)
        raise RuntimeError(f"Step failed: {desc} (code {res.returncode})")
    print("Success.")
    if res.stdout.strip():
        print(res.stdout.strip())
    return res

def main():
    print("Starting True Unity 3D Android Packaging...")

    # Step 1: Compile res
    res_dir = os.path.join(STAGE_DIR, "res")
    run([AAPT2, "compile", "--dir", res_dir, "-o", COMPILED_RES], "Compile Resources with AAPT2")

    # Step 2: Link manifest and compiled resources into base APK (without assets first, or we can package directly)
    manifest = os.path.join(STAGE_DIR, "AndroidManifest.xml")
    if os.path.exists(BASE_APK):
        os.remove(BASE_APK)
    run([
        AAPT2, "link",
        "-I", ANDROID_JAR,
        "--manifest", manifest,
        "-o", BASE_APK,
        COMPILED_RES
    ], "Link Manifest & Base APK with AAPT2")

    # Step 3: Create full unaligned APK by copying BASE_APK and adding classes.dex, lib/, and assets/
    print("=== Assembling Full APK Archive ===")
    if os.path.exists(PACKAGED_APK):
        os.remove(PACKAGED_APK)
    shutil.copy2(BASE_APK, PACKAGED_APK)

    # Open PACKAGED_APK with zipfile and add classes.dex, lib, and assets
    with zipfile.ZipFile(PACKAGED_APK, "a", compression=zipfile.ZIP_DEFLATED) as zf:
        # 3a. Add classes.dex (uncompressed is standard for dex in many Android versions, or deflate)
        print("Adding classes.dex...")
        zf.write(CLASSES_DEX, "classes.dex")

        # 3b. Add native libraries in lib/arm64-v8a/
        # Note: Android 6.0+ supports direct memory mapping if uncompressed (store) & 4k aligned.
        # But we can store them uncompressed with ZIP_STORED so zipalign can page-align them!
        lib_dir = os.path.join(STAGE_DIR, "lib")
        print("Adding native libraries (ZIP_STORED for page alignment)...")
        for root, dirs, files in os.walk(lib_dir):
            for file in files:
                full_path = os.path.join(root, file)
                rel_path = os.path.relpath(full_path, STAGE_DIR).replace("\\", "/")
                print(f"  Adding {rel_path} ({os.path.getsize(full_path)} bytes)")
                # Write native .so with ZIP_STORED so zipalign -p can align them to 4096 bytes
                zf.write(full_path, rel_path, compress_type=zipfile.ZIP_STORED)

        # 3c. Add Unity Data Assets in assets/
        assets_dir = os.path.join(STAGE_DIR, "assets")
        print("Adding assets/bin/Data/...")
        count = 0
        total_size = 0
        for root, dirs, files in os.walk(assets_dir):
            for file in files:
                full_path = os.path.join(root, file)
                rel_path = os.path.relpath(full_path, STAGE_DIR).replace("\\", "/")
                # AssetBundles are already LZ4 compressed, store or deflate
                # Using ZIP_STORED for large pre-compressed assets speed up loading and build time
                zf.write(full_path, rel_path, compress_type=zipfile.ZIP_STORED)
                count += 1
                total_size += os.path.getsize(full_path)
        print(f"Added {count} asset files ({total_size / (1024*1024):.2f} MB).")

    print(f"Packaged unaligned APK size: {os.path.getsize(PACKAGED_APK) / (1024*1024):.2f} MB")

    # Step 4: Zipalign 4-byte / page alignment (-p)
    if os.path.exists(ALIGNED_APK):
        os.remove(ALIGNED_APK)
    run([ZIPALIGN, "-f", "-p", "4", PACKAGED_APK, ALIGNED_APK], "Zipalign APK (4KB Page Aligned for SO mmap)")
    print(f"Aligned APK size: {os.path.getsize(ALIGNED_APK) / (1024*1024):.2f} MB")

    # Step 5: Apksigner sign
    if os.path.exists(FINAL_SIGNED_APK):
        os.remove(FINAL_SIGNED_APK)
    sign_cmd = f'"{APKSIGNER}" sign --ks "{KEYSTORE}" --ks-pass pass:{KEYSTORE_PASS} --ks-key-alias {ALIAS} --out "{FINAL_SIGNED_APK}" "{ALIGNED_APK}"'
    run(sign_cmd, "Sign APK with apksigner (v1, v2, v3)")

    # Step 6: Verify signature
    verify_cmd = f'"{APKSIGNER}" verify --verbose "{FINAL_SIGNED_APK}"'
    run(verify_cmd, "Verify Signature with apksigner")

    # Step 7: Copy to Workspace
    target_apk = os.path.join(WORKSPACE_DIR, "WarpedKartRacers_v1.62_TrueUnity3D_android.apk")
    print(f"Copying final APK to workspace: {target_apk}")
    shutil.copy2(FINAL_SIGNED_APK, target_apk)
    print("Done! Final file size in workspace:", os.path.getsize(target_apk) / (1024*1024), "MB")

if __name__ == "__main__":
    main()
