# Warped Kart Racers (v1.62) - Android Port & Reverse Engineering Project

Proyek reverse engineering dan porting **Warped Kart Racers v1.62** dari Apple Arcade (`.ipa`) ke Android ARM64 (`arm64-v8a`) menggunakan runtime native Unity 2020.3.31f1 (`libunity.so`, `libil2cpp.so`, `libmain.so`).

## Struktur Repositori

```text
├── android_app/
│   ├── AndroidManifest.xml       # Konfigurasi manifest UnityPlayerActivity, hardware acceleration, dsb.
│   ├── res/                      # Seluruh varian icon HD (mdpi, hdpi, xhdpi, xxhdpi, xxxhdpi)
│   └── src/                      # Source code Java tambahan
├── scripts/
│   ├── package_unity_apk.py      # Automasi packaging AAPT2, merge DEX D8, zipalign 4KB, dan apksigner
│   ├── extract_all_shaders.py    # Pipeline ekstraksi shader URP
│   ├── dump_fmod_events.py       # Ekstraksi event suara FMOD
│   └── ...                       # Berbagai helper tooling reverse engineering
├── unity_player_src/             # Implementasi source code UnityPlayerActivity resmi
├── debug.keystore                # Debug signing key untuk penandatanganan APK Android
└── clean_icon.png                # Icon asli 1:1 hasil decoding Apple CgBI format ke standard PNG
```

## Analisis Masalah Force Close & Rencana Tindak Lanjut

### 1. Masalah Teknis Utama
* Game ini dikompilasi untuk **iOS Apple Arcade** menggunakan IL2CPP (`UnityFramework`).
* Pada iOS, IL2CPP menghasilkan kode mesin ARM64 dengan binding native Apple (`libsystem_kernel.dylib`, `GameKit`, dsb.).
* Agar game dapat berjalan 100% mulus di Android, implementasi C# gameplay assembly (`Atlas.dll`, `Assembly-CSharp.dll`) memerlukan rebuild / decompilation atau binding layer ELF Linux/Android untuk IL2CPP code registration (`g_CodeRegistration` & `g_MetadataRegistration`).

### 2. Cara Build APK di Komputer Lain
1. Pastikan terinstall Android SDK Build-Tools (versi 31 ke atas), Java JDK 17/21, dan Python 3.10+.
2. Masukkan file aset Unity dari IPA ke `android_app/assets/bin/Data/`.
3. Jalankan skrip packaging:
   ```bash
   python scripts/package_unity_apk.py
   ```
