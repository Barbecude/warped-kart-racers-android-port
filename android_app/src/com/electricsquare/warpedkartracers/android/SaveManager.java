package com.electricsquare.warpedkartracers.android;

import android.content.Context;
import org.json.JSONArray;
import org.json.JSONObject;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.nio.charset.StandardCharsets;

public class SaveManager {
    public static final int SAVE_SLOTS = 3;
    private final File saveFile;
    private JSONObject saveData;

    public SaveManager(Context context) {
        saveFile = new File(context.getFilesDir(), "savedata.json");
        load();
    }

    public synchronized void load() {
        if (!saveFile.exists()) {
            initDefaultSave();
            save();
            return;
        }
        try (FileInputStream fis = new FileInputStream(saveFile)) {
            byte[] data = new byte[(int) saveFile.length()];
            fis.read(data);
            saveData = new JSONObject(new String(data, StandardCharsets.UTF_8));
        } catch (Exception e) {
            initDefaultSave();
        }
    }

    private void initDefaultSave() {
        saveData = new JSONObject();
        try {
            saveData.put("version", 3);
            saveData.put("activeSlot", 0);
            saveData.put("languageIETF", "en-us");
            saveData.put("targetFPS", 60);
            saveData.put("vsync", 1);
            saveData.put("masterVolume", 1.0);
            saveData.put("musicVolume", 0.8);
            saveData.put("sfxVolume", 0.9);

            JSONArray slots = new JSONArray();
            for (int i = 0; i < SAVE_SLOTS; i++) {
                JSONObject slot = new JSONObject();
                slot.put("slotId", i);
                slot.put("characterId", "Character_AD_Stan");
                slot.put("kartId", "Kart_AD_SuburbanSpeeder");
                slot.put("trophies", 0);
                slot.put("coins", 500);

                JSONArray unlocked = new JSONArray();
                unlocked.put("Character_AD_Stan");
                unlocked.put("Character_FG_Peter");
                unlocked.put("Character_KOH_Hank");
                unlocked.put("Character_SOL_Korvo");
                unlocked.put("Kart_AD_SuburbanSpeeder");
                unlocked.put("Kart_FG_FamilySedan");
                slot.put("unlocked", unlocked);

                slots.put(slot);
            }
            saveData.put("slots", slots);
        } catch (Exception ignored) {}
    }

    public synchronized void save() {
        try (FileOutputStream fos = new FileOutputStream(saveFile)) {
            fos.write(saveData.toString(2).getBytes(StandardCharsets.UTF_8));
        } catch (Exception ignored) {}
    }

    public JSONObject getActiveSlotData() {
        try {
            int active = saveData.optInt("activeSlot", 0);
            return saveData.getJSONArray("slots").getJSONObject(active);
        } catch (Exception e) {
            return new JSONObject();
        }
    }

    public String getActiveCharacter() {
        return getActiveSlotData().optString("characterId", "Character_AD_Stan");
    }

    public String getActiveKart() {
        return getActiveSlotData().optString("kartId", "Kart_AD_SuburbanSpeeder");
    }

    public int getCoins() {
        return getActiveSlotData().optInt("coins", 0);
    }
}
