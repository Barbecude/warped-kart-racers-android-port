import os
import shutil
from PIL import Image, ImageFile
ImageFile.LOAD_TRUNCATED_IMAGES = True

app_dir = r"C:\wkr\android_app"
src_dir = os.path.join(app_dir, "src", "com", "electricsquare", "warpedkartracers", "android")
res_dir = os.path.join(app_dir, "res")
values_dir = os.path.join(res_dir, "values")
mipmap_dir = os.path.join(res_dir, "mipmap-xxxhdpi")
assets_dir = os.path.join(app_dir, "assets", "Data")
assets_raw_dir = os.path.join(assets_dir, "Raw")
assets_tex_dir = os.path.join(assets_dir, "Textures")

for d in [src_dir, values_dir, mipmap_dir, assets_dir, assets_raw_dir, assets_tex_dir]:
    os.makedirs(d, exist_ok=True)

# 1. AndroidManifest.xml
manifest_content = """<?xml version="1.0" encoding="utf-8"?>
<manifest xmlns:android="http://schemas.android.com/apk/res/android"
    package="com.electricsquare.warpedkartracers.android"
    android:versionCode="13308"
    android:versionName="1.62">

    <uses-sdk android:minSdkVersion="26" android:targetSdkVersion="31" />

    <uses-permission android:name="android.permission.INTERNET" />
    <uses-permission android:name="android.permission.ACCESS_NETWORK_STATE" />
    <uses-permission android:name="android.permission.VIBRATE" />

    <uses-feature android:glEsVersion="0x00030000" android:required="true" />
    <uses-feature android:name="android.hardware.gamepad" android:required="false" />
    <uses-feature android:name="android.hardware.touchscreen" android:required="false" />

    <application
        android:label="@string/app_name"
        android:icon="@mipmap/ic_launcher"
        android:theme="@android:style/Theme.NoTitleBar.Fullscreen"
        android:hardwareAccelerated="true"
        android:extractNativeLibs="true">

        <activity
            android:name=".MainActivity"
            android:label="@string/app_name"
            android:screenOrientation="sensorLandscape"
            android:configChanges="orientation|screenSize|screenLayout|keyboardHidden|keyboard|navigation"
            android:exported="true">
            <intent-filter>
                <action android:name="android.intent.action.MAIN" />
                <category android:name="android.intent.category.LAUNCHER" />
            </intent-filter>
        </activity>
    </application>
</manifest>
"""
with open(os.path.join(app_dir, "AndroidManifest.xml"), "w", encoding="utf-8") as f:
    f.write(manifest_content.strip())

# 2. strings.xml
strings_content = """<?xml version="1.0" encoding="utf-8"?>
<resources>
    <string name="app_name">Warped Kart Racers</string>
</resources>
"""
with open(os.path.join(values_dir, "strings.xml"), "w", encoding="utf-8") as f:
    f.write(strings_content.strip())

# 3. Icon
icon_src = r"C:\Users\Zevaldo\AppData\Local\Temp\rea-extracted-fc8a3516-3781-45b7-be25-04e71bd99943\Payload\Warped Kart Racers.app\AppIcon76x76@2x~ipad.png"
if os.path.exists(icon_src):
    img = Image.open(icon_src)
    img_192 = img.resize((192, 192))
    img_192.save(os.path.join(mipmap_dir, "ic_launcher.png"))
    print("Icon generated at 192x192")

# 4. Copy extracted definitions and localisation
shutil.copy(r"C:\wkr\extracted_data\definitions.json", os.path.join(assets_dir, "definitions.json"))
shutil.copy(r"C:\wkr\extracted_data\localisation.json", os.path.join(assets_dir, "localisation.json"))

# 5. Copy quality configs
cfg_src = r"C:\Users\Zevaldo\AppData\Local\Temp\rea-extracted-fc8a3516-3781-45b7-be25-04e71bd99943\Payload\Warped Kart Racers.app\Data\Raw"
shutil.copy(os.path.join(cfg_src, "QualitySettings.cfg"), os.path.join(assets_raw_dir, "QualitySettings.cfg"))
shutil.copy(os.path.join(cfg_src, "DeviceQualitySettings.cfg"), os.path.join(assets_raw_dir, "DeviceQualitySettings.cfg"))

# 6. Copy converted PVRTC textures
tex_src = r"C:\wkr\extracted_textures\converted_pvrtc"
for f in os.listdir(tex_src):
    shutil.copy(os.path.join(tex_src, f), os.path.join(assets_tex_dir, f))

print("Android project base and assets initialized successfully!")
