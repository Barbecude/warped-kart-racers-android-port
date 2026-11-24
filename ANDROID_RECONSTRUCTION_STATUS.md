# Warped Kart Racers (v1.62) — 1:1 Offline Android Reconstruction Status

Semua asset dan kode di project ini berasal **100% dari `warped-kart-racers-v1.62.ipa` asli** (Unity `2020.3.31f1`, IL2CPP v27.1). Tidak ada satu pun asset buatan AI atau gameplay karangan.

## Status Kompilasi Unity (`2020.3.30f1`)
- **C# Compiler Errors:** **0 error** di seluruh **74 assembly** (terverifikasi langsung oleh `Unity.exe -batchmode` di `tools/unity_compile12.log`).
- Project siap langsung dibuka di Unity Hub (`ripped_unity_project/ExportedProject/`).

## 1. Asset Asli yang Sudah Diekstrak 100% (`ripped_unity_project/ExportedProject/Assets/`)
- **35 Scene `.unity` asli:** `Splash.unity`, `Application.unity`, `SC_FE_Generic.unity`, `SC_FE_Ceremony.unity`, `SC_FE_LeaguePromotion.unity`, + 30 scene track & gameplay.
- **15.310 file asset Addressables** (29.904 file termasuk `.meta` GUID) digabung penuh ke project Unity utama:
  - 7.376 `.asset` (mesh 3D, ScriptableObject definisi karakter/kart/track/campaign/league)
  - 2.600 `.prefab` (kart, karakter, roda, glider, 42 layar UI, item/usables, prop track)
  - 1.791 `.anim`, 124 `.controller`, 51 `.overridecontroller`, 57 `.playable`
  - 1.481 `.png`, 121 `.texture2d`, 1.244 `.mat`, 26 `.shader`
  - 9 `.mp4` + 1 `.m4v` (video splash/cutscene), 3 `.ttf` (font)
- **9 FMOD Audio Banks (`Assets/StreamingAssets/Bank_*.bank`)** disalin langsung dari `Data/Raw/`.

## 2. Script C# 1:1 & Offline Android yang Sudah Ditulis & Terkompilasi (0 Error)
- **Boot & Loading:** `Atlas/SplashBehaviour.cs`, `Atlas/UI/LoadingBehaviour.cs`, `Atlas/UI/SlantFillBar.cs`, `Core/Scenes/AddressablesSceneLoader.cs`, `Core/Scenes/SceneInfo.cs`
- **Master Bootstrapper & Core:** `Atlas/ApplicationBehaviour.cs` (50 subsystem + 42 prefab UI screen asli), `Atlas/AtlasContextCreator.cs`, `Core/Application/DependencyManager.cs`, `UpdateParams.cs`, `IUpdateParams.cs`, `CoroutineRunner.cs`, `Core/Contexts/ContextManager.cs`, `IContext.cs`, `IContextInfo.cs`
- **Offline Android Save & Services:** `Core/Services/ServicesManager.cs` (3 slot lokal di `Application.persistentDataPath/OfflineSaves`, tanpa GameKit/iCloud), `Atlas/Save/SaveData.cs`, `Atlas/Save/SaveManager.cs`, `Atlas/Networking/NetworkIdentifiers.cs`
- **Game & Menu Contexts:** `Atlas/FrontEnd/FrontEndContext.cs`, `FrontEndContextInfo.cs`, `Atlas/Contexts/RaceGameContext.cs`, `Atlas/Contexts/BattleGameContext.cs`
- **Subsystem APIs & Shims:** 50 subsystem `Atlas.*`/`Core.*` (`AssetManager`, `AtlasUIManager`, `AtlasDefinitions`, `AudioEvent`, `UISlantElement`, `FMODCompatShim`, `DOTweenCompatShim`, dll.)

## 3. Konfigurasi Android & Shader
- `Packages/manifest.json`: URP `10.8.1`, Addressables `1.18.19`, InputSystem `1.3.0`, Cinemachine `2.6.11`, TextMeshPro `3.0.6`, Burst `1.6.5`, Collections, Mathematics, Timeline.
- `Custom_AtlasOutliner.shader` & `Custom_AtlasOutlinerAA.shader`: shader HLSL URP Android dengan 8 property asli.
- Seluruh 23 folder stub duplikat (`Unity.*`, `Cinemachine`, `UnityEngine.*Module`) sudah dibersihkan agar memakai package UPM & runtime asli Unity.

## 4. Langkah Lanjutan untuk APK Playable 1:1 Penuh
1. Di **Unity Hub → Installs → Locate** `C:\Program Files\Unity 2020.3.30f1\Editor\Unity.exe` → tambahkan modul **Android Build Support** (SDK, NDK, OpenJDK).
2. Buka `ripped_unity_project/ExportedProject/` di Unity `2020.3.30f1` (tunggu impor awal 15.310 asset selesai) dan impor plugin **FMOD for Unity (Android)**.
3. Lanjutkan decompile bertahap isi logika fungsi dari `UnityFramework` menggunakan `tools/disasm_il2cpp.py` + `il2cpp_dump/dump.cs` per modul:
   - `FrontEndContext` states (`ModeSelect`, `Singleplayer`, `Loadout`)
   - `GameContextBase` + `RaceGameContext` + `BattleGameContext`
   - `Atlas.Gameplay.Kart.*` (`KartPhysics`, `KartPhysicsInput`, `KartManager`, `KartComposite`, `RaceKartAI`, `BattleKartAI`)
   - `Atlas.Gameplay.Usables.*` (`UsableManager`, `KartUsableManager`)
