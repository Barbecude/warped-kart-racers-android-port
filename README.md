# Warped Kart Racers — Port Android

Proyek ini adalah rekonstruksi **Warped Kart Racers v1.62** untuk Unity dengan sasaran Android dan permainan offline. Isinya mencakup proyek Unity, skrip C# hasil rekonstruksi, konfigurasi Android, serta alat bantu analisis. Ini **bukan** rilis resmi game dan belum merupakan APK siap dimainkan.

## Status

- Proyek Unity menggunakan **Unity 2020.3.30f1**.
- Rekonstruksi dan pengujian masih berlangsung; lihat [status rekonstruksi](ANDROID_RECONSTRUCTION_STATUS.md) dan [konteks handoff](HANDOFF_CONTEXT.md) untuk rincian pekerjaan.
- Clone Git ini **tidak menyertakan aset biner Unity/game**. `.gitignore` mengecualikan konten `Assets` selain skrip dan file `.meta` terkait. Plugin FMOD for Unity juga perlu dipasang terpisah.
- Karena aset dan plugin tersebut tidak tersedia dalam clone, membuka atau membangun proyek dari clone saja belum tentu berhasil dan tidak menghasilkan APK playable.

## Membuka proyek di Unity

1. Pasang **Unity Hub** dan Unity Editor **2020.3.30f1**.
2. Di Unity Hub, pilih **Add/Open project**, lalu arahkan ke:
   `ripped_unity_project/ExportedProject/`
3. Tunggu Unity menyelesaikan impor dan pemulihan paket dari `Packages/manifest.json`.
4. Untuk target Android, pasang modul **Android Build Support** beserta **Android SDK & NDK Tools** dan **OpenJDK** melalui Unity Hub.
5. Untuk mencoba build Android, buka **File > Build Settings**, pilih **Android**, lalu pilih **Switch Platform**. Proses build tetap memerlukan aset dan plugin yang tidak disertakan di repo.

## Kompilasi melalui command line

Setelah Unity Editor terpasang, ganti `<path-ke-Unity>` dengan lokasi executable Unity di komputer:

```sh
"<path-ke-Unity>" -batchmode -nographics -quit \
  -projectPath "ripped_unity_project/ExportedProject" \
  -logFile "tools/unity_compile.log"
```

Contoh lokasi executable:

- Windows: `C:\Program Files\Unity\Hub\Editor\2020.3.30f1\Editor\Unity.exe`
- macOS: `/Applications/Unity/Hub/Editor/2020.3.30f1/Unity.app/Contents/MacOS/Unity`
- Linux: `/opt/Unity/Editor/Unity`

Perintah ini meminta Unity membuka dan mengompilasi proyek dalam mode batch; ini **bukan** perintah untuk membuat APK.

## Alat bantu

Beberapa skrip Python di `tools/` membantu analisis dan rekonstruksi. Untuk dashboard progres lokal:

```sh
python3 tools/progress_server.py
```

Kemudian buka `http://127.0.0.1:8765` di browser. Skrip generator dan verifikasi lainnya dijelaskan dalam [konteks handoff](HANDOFF_CONTEXT.md).
