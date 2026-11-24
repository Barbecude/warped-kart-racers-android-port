# Warped Kart Racers — Android 1:1 Port Handoff Context

Dokumen ini berisi seluruh konteks penting untuk langsung melanjutkan pengembangan port **Warped Kart Racers (v1.62 iOS Apple Arcade → 100% Offline Android)** di device lain.

---

## 1. Tujuan & Aturan Proyek
- **Target:** Rekonstruksi 1:1 seluruh ~1.465 class C# (`Atlas.*` + `Core.*`) ke dalam Unity Project `2020.3.30f1` (`ripped_unity_project/ExportedProject/`).
- **100% Offline Android:** Ganti Apple GameKit / iCloud / Apple Arcade dengan penyimpanan lokal (`Application.persistentDataPath/OfflineSaves`).
- **Zero Guessed Logic:** Semua konstanta, field, dan method diambil dari:
  - `il2cpp_dump/dump.cs` (struktur lengkap class, field, offset, method)
  - `decompiled_resolved/*.c` (hasil decompile Ghidra 12.1.4 + 170.511 symbol & string yang sudah di-resolve)
- **Preserve Unity `.meta` GUIDs:** Selalu timpa file `.cs` dummy AssetRipper di tempatnya agar referensi scene/prefab tidak rusak.

---

## 2. Status Progres Saat Ini
1. **Asset & Scene Unity (100% Selesai):**
   - Semua 15.310 asset, 35 `.unity` scene, dan 9 FMOD `.bank` sudah tergabung di `ripped_unity_project/ExportedProject/Assets/` (catatan: asset besar mungkin di-ignore jika melebihi batas GitHub, atau di-clone terpisah).
2. **Ghidra 12.1.4 Decompilation & Symbol Resolution (100% Selesai):**
   - `decompiled_resolved/` berisi seluruh **1.465 / 1.465 class** dengan symbol/string sudah ter-resolve.
3. **Script C# 1:1 yang Sudah Direkonstruksi Penuh (42+ file):**
   - **Seluruh modul `Atlas.Gameplay.Kart` (32/32 file selesai!):**
     `SurfaceTags.cs`, `KartHandlingSurfaceModifiers.cs`, `KartPhysicsInputConfig.cs`, `KartPhysicsSetup.cs`, `KartPhysicsHandling.cs`, `KartPhysicsConfigs.cs`, `KartPhysicsStates.cs`, `KartPhysicsFixedUpdateAllJob.cs`, `KartRootBehaviour.cs`, `KartPhysicsInput.cs`, `KartPhysicsHandlingModifiersManager.cs`, `KartPhysics.cs`, `KartFollowCameraConfig.cs`, `KartFollowCamera.cs`, `AntennaVisualBehaviour.cs`, `GliderVisualBehaviour.cs`, `WheelVisualBehaviour.cs`, `VFXBoostTiedBehaviour.cs`, `CharacterVisualBehaviour.cs`, `BaseVisualBehaviour.cs`, `KartFEAnimator.cs`, `KartVisualBehaviour.cs`, `KartPartLoader.cs`, `KartVisualComposite.cs`, `KartVisualAnimation.cs`, `KartAI.cs`, `RaceKartAI.cs`, `BattleKartAI.cs`, `KartUsableManager.cs`, `KartManager.cs`, `KartComposite.cs`, `KartCompositeFactory.cs`.
   - **Core & Supporting Scripts:**
     `Core.Extensions/MathsExtensions.cs`, `Core.Assets/AssetManager.cs`, `Core.Actors/IActor.cs`, `Atlas/ILightWorldSample.cs`, `Atlas/UsableType.cs`, `Atlas/Math4d.cs`, `Atlas/KartVisualSettingsDefinition.cs`, `Atlas/ICollidableBehaviour.cs`, `Atlas/ICollidableOwner.cs`, `Atlas/AtlasRawInput.cs`, `Atlas/AtlasInput.cs`, `Atlas/KartInputManager.cs`, `Atlas/InputManager.cs`, `Atlas/NetworkVisualState.cs`, `Atlas/Atlas/Gameplay/KartTriggerEffectParameters.cs`, `Atlas/Atlas/Gameplay/ObjectTagBehaviour.cs`, `Atlas/Atlas/Gameplay/InteractableBehaviour.cs`, `Atlas/Atlas/Gameplay/KickUpVFXBehaviour.cs`.
4. **Auto-Generator 0-Kuota (`tools/auto_gen_cs.py`):**
   - Sudah dibuat dan dijalankan untuk meng-generate otomatis semua `enum` dan `interface` dari `il2cpp_dump/dump.cs` (29 dummy enum + 4 dummy interface + 23 missing enum).
   - Bisa diperluas untuk meng-auto-generate `struct`, `Definition` (`ScriptableObject`), dan simple getter/setter untuk seluruh sisa 1.100+ dummy class.

---

## 3. Langkah Berikutnya di Device Baru
1. **Install prasyarat:**
   - **Unity 2020.3.30f1** (atau 2020.3.31f1) + **Android Build Support** (SDK, NDK, OpenJDK) via Unity Hub.
   - **Python 3.10+** (untuk menjalankan `tools/auto_gen_cs.py` dan `tools/progress_server.py`).
2. **Selesaikan kompilasi 0 error pada `Atlas.Gameplay.Kart`:**
   - Jalankan Unity batch compile:
     ```powershell
     Unity.exe -batchmode -nographics -quit -projectPath "ripped_unity_project/ExportedProject" -logFile tools/unity_compile.log
     ```
   - Perluas `tools/auto_gen_cs.py` untuk meng-generate `struct` & `Definition` yang masih dummy (seperti `LightVolumeParams`, `BattleKartAIDefinition`, `KartAudio`, `RaceAIGroupCache`, `KartAIInputData`, `KartAIUsablesParameters`, `RaceKartAIUpdateJobBurstParams`, `NetworkSpawnPosition`).
3. **Lanjutkan rekonstruksi modul berikutnya:**
   - `Atlas.Gameplay.Usables` (28 class)
   - `Atlas.Contexts` & `Atlas.Gameplay`
   - `Atlas.FrontEnd`, `Atlas.UI`, `Atlas.UI.Screens` (42 UI screens)
   - `Atlas.Audio`, `Atlas.League`, `Atlas.Stats`, `Atlas.Definitions`, `Atlas.Save` (offline), `Core.*`
4. **Build Android APK:**
   - Pastikan plugin **FMOD for Unity (Android)** terpasang dan 9 `.bank` FMOD berada di `StreamingAssets`.

---

## 4. Tools Penting di Folder `tools/`
- `tools/auto_gen_cs.py` — Generator C# otomatis 0-kuota dari `il2cpp_dump/dump.cs`.
- `tools/progress_server.py` & `tools/progress_dashboard.html` — Dashboard progres realtime (`http://127.0.0.1:8765`).
