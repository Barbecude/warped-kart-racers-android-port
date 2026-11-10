import os
import subprocess
import zipfile
import glob
import sys
import shutil

app_dir = r"C:\wkr\android_app"
build_dir = os.path.join(app_dir, "build")
gen_dir = os.path.join(app_dir, "gen")
obj_dir = os.path.join(build_dir, "obj")
dex_dir = os.path.join(build_dir, "dex")

for d in [build_dir, gen_dir, obj_dir, dex_dir]:
    os.makedirs(d, exist_ok=True)

# Clean obj and dex
for f in glob.glob(os.path.join(obj_dir, "**", "*"), recursive=True):
    if os.path.isfile(f): os.remove(f)
for f in glob.glob(os.path.join(dex_dir, "**", "*"), recursive=True):
    if os.path.isfile(f): os.remove(f)

android_jar = r"C:\tools\android-sdk\platforms\android-31\android.jar"
aapt2 = r"C:\tools\android-sdk\build-tools\33.0.2\aapt2.exe"
zipalign = r"C:\tools\android-sdk\build-tools\33.0.2\zipalign.exe"
d8_jar = r"C:\tools\android-sdk\build-tools\33.0.2\lib\d8.jar"
apksigner_jar = r"C:\tools\android-sdk\build-tools\33.0.2\lib\apksigner.jar"
keystore = r"C:\wkr\debug.keystore"

print("[Step 1] Compiling Android resources with aapt2...")
compiled_res = os.path.join(build_dir, "compiled_res.zip")
cmd = [aapt2, "compile", "--dir", os.path.join(app_dir, "res"), "-o", compiled_res]
subprocess.run(cmd, check=True)

print("[Step 2] Linking resources and assets with aapt2 link...")
unaligned_apk = os.path.join(build_dir, "unaligned.apk")
manifest = os.path.join(app_dir, "AndroidManifest.xml")
assets = os.path.join(app_dir, "assets")

cmd = [
    aapt2, "link",
    "-I", android_jar,
    "--manifest", manifest,
    "-A", assets,
    "-o", unaligned_apk,
    "--java", gen_dir,
    compiled_res
]
subprocess.run(cmd, check=True)

print("[Step 3] Compiling Java classes with javac (--release 11)...")
java_files = glob.glob(os.path.join(app_dir, "src", "**", "*.java"), recursive=True)
gen_java = glob.glob(os.path.join(gen_dir, "**", "*.java"), recursive=True)
all_java = java_files + gen_java
print(f"Compiling {len(all_java)} java source files...")

cmd = ["javac", "-cp", android_jar, "-source", "11", "-target", "11", "-d", obj_dir] + all_java
subprocess.run(cmd, check=True)

print("[Step 4] Compiling bytecode to DEX with D8...")
class_files = glob.glob(os.path.join(obj_dir, "**", "*.class"), recursive=True)
print(f"D8 processing {len(class_files)} class files...")

cmd = [
    "java", "-cp", d8_jar,
    "com.android.tools.r8.D8",
    "--output", dex_dir,
    "--min-api", "26",
    "--lib", android_jar
] + class_files
subprocess.run(cmd, check=True)

print("[Step 5] Adding classes.dex to APK...")
classes_dex = os.path.join(dex_dir, "classes.dex")
with zipfile.ZipFile(unaligned_apk, "a", zipfile.ZIP_DEFLATED) as zf:
    zf.write(classes_dex, "classes.dex")

print("[Step 6] Running zipalign...")
aligned_apk = os.path.join(build_dir, "aligned.apk")
if os.path.exists(aligned_apk):
    os.remove(aligned_apk)
cmd = [zipalign, "-p", "-f", "4", unaligned_apk, aligned_apk]
subprocess.run(cmd, check=True)

print("[Step 7] Signing APK with apksigner...")
final_apk_wkr = r"C:\wkr\WarpedKartRacers_v1.62_android.apk"
final_apk_workspace = r"C:\Users\Zevaldo\Documents\my apps\warped-kart-racers-android-port 99% clone\WarpedKartRacers_v1.62_android.apk"

cmd = [
    "java", "-jar", apksigner_jar,
    "sign",
    "--ks", keystore,
    "--ks-pass", "pass:android",
    "--ks-key-alias", "androiddebugkey",
    "--key-pass", "pass:android",
    "--out", final_apk_wkr,
    aligned_apk
]
subprocess.run(cmd, check=True)

# Copy to user workspace
shutil.copy(final_apk_wkr, final_apk_workspace)

print("[Step 8] Verifying APK signature...")
cmd = ["java", "-jar", apksigner_jar, "verify", "--verbose", final_apk_wkr]
subprocess.run(cmd, check=True)

print(f"\nSUCCESS! Native Android APK created and verified:")
print(f" - Staging output: {final_apk_wkr} ({os.path.getsize(final_apk_wkr)} bytes)")
print(f" - Workspace output: {final_apk_workspace} ({os.path.getsize(final_apk_workspace)} bytes)")
