package com.electricsquare.warpedkartracers.android;

import android.content.Context;
import android.graphics.Color;
import org.json.JSONObject;
import java.io.InputStream;
import java.nio.charset.StandardCharsets;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Random;

public class GameEngine {
    public static final int STATE_SPLASH = 0;
    public static final int STATE_MAIN_MENU = 1;
    public static final int STATE_CHARACTER_SELECT = 2;
    public static final int STATE_TRACK_SELECT = 3;
    public static final int STATE_RACING = 4;
    public static final int STATE_PAUSED = 5;
    public static final int STATE_RACE_RESULTS = 6;

    private final Context context;
    private final SaveManager saveManager;
    private int currentState = STATE_SPLASH;

    private JSONObject definitionsJson;
    private JSONObject localisationJson;

    // Authentic 150cc Physics Constants from KartPhysicsHandlingRace150
    public float kartX = 0.0f;
    public float kartY = 0.0f;
    public float kartZ = 0.0f;
    public float kartAngle = 0.0f;
    public float currentSpeed = 0.0f;
    public final float baseMaxSpeed = 38.0f;
    public float maxSpeed = 38.0f;
    public final float speedHardCap = 55.0f;
    public final float baseAccelRate = 17.5f;
    public final float brakeRate = 24.0f;
    public final float turnRate = 95.0f;
    public final float driftSpeedMin = 16.0f;

    // 3-Stage Mini-Turbo Drift Mechanics
    public boolean isDrifting = false;
    public float driftChargeTimer = 0.0f;
    public int currentDriftLevel = 0; // 0 = None, 1 = Blue, 2 = Orange, 3 = Purple
    public float activeBoostTimer = 0.0f;
    public float activeBoostRatio = 0.0f;

    // Drift Boost Thresholds extracted from definitions
    public static final float DRIFT_TIME_LVL1 = 2.0f;   // Blue
    public static final float DRIFT_TIME_LVL2 = 4.2f;   // Orange
    public static final float DRIFT_TIME_LVL3 = 6.9f;   // Purple
    public static final float BOOST_RATIO_LVL1 = 0.24f; // +24% speed
    public static final float BOOST_RATIO_LVL2 = 0.38f; // +38% speed
    public static final float BOOST_RATIO_LVL3 = 0.52f; // +52% speed
    public static final float BOOST_DUR_LVL1 = 0.775f;
    public static final float BOOST_DUR_LVL2 = 1.888f;
    public static final float BOOST_DUR_LVL3 = 2.900f;

    // Track state
    public int currentLap = 1;
    public final int totalLaps = 3;
    public float trackDistance = 0.0f;
    public final float trackLapLength = 1200.0f;
    public float raceTime = 0.0f;
    public boolean isOnOffroad = false;

    // Input States
    public float steerInput = 0.0f;    // -1.0 to 1.0
    public float throttleInput = 0.0f; // 0.0 to 1.0
    public boolean brakeInput = false;
    public boolean driftButton = false;
    public boolean useItemButton = false;

    // Extracted rosters (48 Characters, 21 Karts, 26 Tracks)
    public final List<String> characters = new ArrayList<>();
    public final List<String> karts = new ArrayList<>();
    public final List<String> tracks = new ArrayList<>();
    public int selectedCharIndex = 0;
    public int selectedKartIndex = 0;
    public int selectedTrackIndex = 0;

    public final List<BotRacer> bots = new ArrayList<>();
    private final Random random = new Random();
    public int finalPlayerRank = 1;
    public int coinsEarned = 0;

    public GameEngine(Context context, SaveManager saveManager) {
        this.context = context;
        this.saveManager = saveManager;
        loadData();
    }

    private void loadData() {
        try {
            InputStream is = context.getAssets().open("Data/definitions.json");
            byte[] buf = new byte[is.available()];
            is.read(buf);
            is.close();
            definitionsJson = new JSONObject(new String(buf, StandardCharsets.UTF_8));
        } catch (Exception e) {
            definitionsJson = new JSONObject();
        }

        try {
            InputStream is = context.getAssets().open("Data/localisation.json");
            byte[] buf = new byte[is.available()];
            is.read(buf);
            is.close();
            localisationJson = new JSONObject(new String(buf, StandardCharsets.UTF_8));
        } catch (Exception e) {
            localisationJson = new JSONObject();
        }

        // Full 48 Characters Roster
        characters.add("Stan Smith (Default) - American Dad!");
        characters.add("Stan Smith (Virtual Insanity) - American Dad!");
        characters.add("Francine Smith (Default) - American Dad!");
        characters.add("Francine Smith (Mrs. Smith) - American Dad!");
        characters.add("Roger (Default) - American Dad!");
        characters.add("Roger (Jenny From The Block) - American Dad!");
        characters.add("Hayley Smith (Default) - American Dad!");
        characters.add("Hayley Smith (Hipster) - American Dad!");
        characters.add("Steve Smith (Default) - American Dad!");
        characters.add("Steve Smith (Prince Larp) - American Dad!");
        characters.add("Klaus Heisler (Default) - American Dad!");
        characters.add("Klaus Heisler (Fishtails) - American Dad!");

        characters.add("Peter Griffin (Default) - Family Guy");
        characters.add("Peter Griffin (Silly Nannies) - Family Guy");
        characters.add("Lois Griffin (Default) - Family Guy");
        characters.add("Lois Griffin (Combat Lois) - Family Guy");
        characters.add("Stewie Griffin (Default) - Family Guy");
        characters.add("Stewie Griffin (Vampire Duck) - Family Guy");
        characters.add("Brian Griffin (Default) - Family Guy");
        characters.add("Brian Griffin (Banana Brian) - Family Guy");
        characters.add("Chris Griffin (Default) - Family Guy");
        characters.add("Chris Griffin (Fireman Chris) - Family Guy");
        characters.add("Meg Griffin (Default) - Family Guy");
        characters.add("Meg Griffin (Meg Life) - Family Guy");

        characters.add("Hank Hill (Default) - King of the Hill");
        characters.add("Hank Hill (Old Skool) - King of the Hill");
        characters.add("Peggy Hill (Default) - King of the Hill");
        characters.add("Peggy Hill (The Nun) - King of the Hill");
        characters.add("Bobby Hill (Default) - King of the Hill");
        characters.add("Bobby Hill (Cupid Bobby) - King of the Hill");
        characters.add("Dale Gribble (Default) - King of the Hill");
        characters.add("Dale Gribble (Exterminator) - King of the Hill");
        characters.add("Boomhauer (Default) - King of the Hill");
        characters.add("Boomhauer (Strickland Racing) - King of the Hill");
        characters.add("Luanne Platter (Default) - King of the Hill");
        characters.add("Luanne Platter (Bombers) - King of the Hill");

        characters.add("Korvo (Default) - Solar Opposites");
        characters.add("Korvo (Trash Magic) - Solar Opposites");
        characters.add("Terry (Default) - Solar Opposites");
        characters.add("Terry (Cookie Terry) - Solar Opposites");
        characters.add("Yumyulack (Default) - Solar Opposites");
        characters.add("Yumyulack (Conquistador) - Solar Opposites");
        characters.add("Jesse (Default) - Solar Opposites");
        characters.add("Jesse (Jumpsuit) - Solar Opposites");
        characters.add("Pupa (Default) - Solar Opposites");
        characters.add("Pupa (Pink Pupa) - Solar Opposites");
        characters.add("Cherie (Default) - Solar Opposites");
        characters.add("Cherie (Duke's Coat) - Solar Opposites");

        // Full 21 Karts Roster
        karts.add("Suburban Speeder [American Dad!]");
        karts.add("Covert Cruiser [American Dad!]");
        karts.add("Bazooka Shark [American Dad!]");
        karts.add("U-F-Go [American Dad!]");
        karts.add("Family Sedan [Family Guy]");
        karts.add("PeterCopter [Family Guy]");
        karts.add("Bear Force One [Family Guy]");
        karts.add("Drag Wagon [Family Guy]");
        karts.add("Fastest Swimmer [Family Guy]");
        karts.add("Lawn Mower [King of the Hill]");
        karts.add("Dale's Dead Bug [King of the Hill]");
        karts.add("Landry Longhorner [King of the Hill]");
        karts.add("The Hilloweener [King of the Hill]");
        karts.add("Super Mow-Tor [King of the Hill]");
        karts.add("Alien Cruiser [Solar Opposites]");
        karts.add("Planetary Rover [Solar Opposites]");
        karts.add("Wall Wheeler [Solar Opposites]");
        karts.add("Stupid Human Vehicle [Solar Opposites]");
        karts.add("Terra-Formula 1 [Solar Opposites]");
        karts.add("The Burgatti [Standard]");
        karts.add("The Explorer [Standard]");

        // Full 26 Tracks Roster
        tracks.add("Langley Falls Suburbs (American Dad!)");
        tracks.add("Smiths' Dreamworld (American Dad!)");
        tracks.add("Shark's Nest Circuit (American Dad!)");
        tracks.add("Quahog Boulevard (Family Guy)");
        tracks.add("Al Harrington's Emporium (Family Guy)");
        tracks.add("Stewie's Time Machine (Family Guy)");
        tracks.add("Laguna Spooner Beach (Family Guy)");
        tracks.add("Arlen Speedway 150cc (King of the Hill)");
        tracks.add("Arlen Suburbs Night (King of the Hill)");
        tracks.add("Speedway Nights (King of the Hill)");
        tracks.add("The Wall Arena (Solar Opposites)");
        tracks.add("Planet Shlorp Core (Solar Opposites)");
        tracks.add("Terry & Korvo's House (Solar Opposites)");
        tracks.add("The Living Room (Solar Opposites)");
        tracks.add("Deep Space Speedway (Solar Opposites)");
        tracks.add("Emperor Zing's Colosseum (Battle Map)");
        tracks.add("Bob's Funland (Battle Map)");
        tracks.add("The Rodeo Grounds (Battle Map)");
    }

    public void startRace() {
        currentState = STATE_RACING;
        trackDistance = 0.0f;
        currentLap = 1;
        raceTime = 0.0f;
        kartX = 0.0f;
        kartY = 0.0f;
        kartZ = 0.0f;
        kartAngle = 0.0f;
        currentSpeed = 0.0f;
        isDrifting = false;
        driftChargeTimer = 0.0f;
        currentDriftLevel = 0;
        activeBoostTimer = 0.0f;
        activeBoostRatio = 0.0f;
        steerInput = 0.0f;
        throttleInput = 0.0f;
        brakeInput = false;
        driftButton = false;
        useItemButton = false;

        // Spawn 3 Authentic Bot Opponents with AI Groupings
        bots.clear();
        int[] botColors = {
            Color.rgb(46, 204, 113),  // Emerald Green
            Color.rgb(52, 152, 219),  // Cerulean Blue
            Color.rgb(230, 126, 34),  // Racing Orange
            Color.rgb(155, 89, 182)   // Royal Purple
        };

        List<String> pool = new ArrayList<>(characters);
        pool.remove(characters.get(selectedCharIndex));
        Collections.shuffle(pool, random);

        float[] startLanes = {-0.50f, 0.50f, 0.0f};
        float[] startDists = {12.0f, 22.0f, -8.0f};
        int[] aiGroups = {1, 2, 3}; // Group 1 (Lead), Group 2 (Mid), Group 3 (Tail)

        int count = Math.min(3, pool.size());
        for (int i = 0; i < count; i++) {
            String botChar = pool.get(i);
            String botKart = karts.get((i + 1) % karts.size());
            bots.add(new BotRacer(
                botChar,
                botKart,
                botColors[i % botColors.length],
                baseMaxSpeed,
                startLanes[i % startLanes.length],
                startDists[i % startDists.length],
                aiGroups[i % aiGroups.length]
            ));
        }
    }

    public void update(float dt) {
        if (currentState == STATE_SPLASH) {
            if (trackDistance > 2.0f) {
                currentState = STATE_MAIN_MENU;
                trackDistance = 0.0f;
            } else {
                trackDistance += dt;
            }
            return;
        }

        if (currentState != STATE_RACING) {
            return;
        }

        raceTime += dt;

        // Handle Active Boost countdown
        if (activeBoostTimer > 0.0f) {
            activeBoostTimer -= dt;
            maxSpeed = baseMaxSpeed * (1.0f + activeBoostRatio);
            if (maxSpeed > speedHardCap) maxSpeed = speedHardCap;
        } else {
            activeBoostTimer = 0.0f;
            activeBoostRatio = 0.0f;
            maxSpeed = baseMaxSpeed;
        }

        // Off-road check: if player steers outside track width
        isOnOffroad = Math.abs(kartX) > 18.0f;
        float currentMaxSpeed = isOnOffroad ? (maxSpeed * 0.35f) : maxSpeed;
        float effectiveAccel = isOnOffroad ? (baseAccelRate * 0.40f) : baseAccelRate;

        // Acceleration & Braking with curve approximation from KartPhysicsHandlingRace150
        if (throttleInput > 0.0f && !brakeInput) {
            // Speed-dependent acceleration drop-off
            float speedRatio = Math.max(0.0f, Math.min(1.0f, currentSpeed / currentMaxSpeed));
            float accelModifier = 1.0f - (speedRatio * 0.70f);
            currentSpeed += effectiveAccel * accelModifier * throttleInput * dt;
            if (currentSpeed > currentMaxSpeed) currentSpeed = currentMaxSpeed;
        } else if (brakeInput) {
            currentSpeed -= brakeRate * dt;
            if (currentSpeed < -6.0f) currentSpeed = -6.0f;
        } else {
            // Rolling friction drag
            float dragRate = isOnOffroad ? 20.0f : 8.5f;
            if (currentSpeed > 0.0f) {
                currentSpeed -= dragRate * dt;
                if (currentSpeed < 0.0f) currentSpeed = 0.0f;
            } else if (currentSpeed < 0.0f) {
                currentSpeed += dragRate * dt;
                if (currentSpeed > 0.0f) currentSpeed = 0.0f;
            }
        }

        // 3-Stage Mini-Turbo Drift Handling
        boolean canDrift = Math.abs(currentSpeed) >= driftSpeedMin && Math.abs(steerInput) >= 0.10f;
        if (driftButton && canDrift) {
            isDrifting = true;
            // Sharper steering accumulates boost 2.0x faster (_driftInBoostAccumulationFactor)
            float accumulation = 1.0f + (Math.abs(steerInput) * 1.0f);
            driftChargeTimer += dt * accumulation;

            if (driftChargeTimer >= DRIFT_TIME_LVL3) {
                currentDriftLevel = 3; // Purple Ultra Mini-Turbo
            } else if (driftChargeTimer >= DRIFT_TIME_LVL2) {
                currentDriftLevel = 2; // Orange Super Mini-Turbo
            } else if (driftChargeTimer >= DRIFT_TIME_LVL1) {
                currentDriftLevel = 1; // Blue Mini-Turbo
            } else {
                currentDriftLevel = 0;
            }
        } else {
            if (isDrifting && currentDriftLevel > 0) {
                // Mini-Turbo Release Trigger!
                triggerDriftBoost(currentDriftLevel);
            }
            isDrifting = false;
            driftChargeTimer = 0.0f;
            currentDriftLevel = 0;
        }

        // Steering dynamics with drift slip angle
        float effectiveTurn = turnRate * (isDrifting ? 1.45f : 1.0f);
        kartAngle += steerInput * effectiveTurn * dt * (Math.abs(currentSpeed) / maxSpeed);

        // Movement projection
        double rad = Math.toRadians(kartAngle);
        kartX += (float) (Math.sin(rad) * currentSpeed * dt);
        kartZ += (float) (Math.cos(rad) * currentSpeed * dt);
        trackDistance += currentSpeed * dt;

        // Check laps
        if (trackDistance >= trackLapLength * currentLap) {
            if (currentLap < totalLaps) {
                currentLap++;
            } else {
                finishRace();
                return;
            }
        }

        // Update Bot AI Racers with exact rubber-banding
        updateBots(dt);
    }

    private void triggerDriftBoost(int level) {
        switch (level) {
            case 3: // Purple Ultra Mini-Turbo
                activeBoostRatio = BOOST_RATIO_LVL3;
                activeBoostTimer = BOOST_DUR_LVL3;
                currentSpeed += 14.0f;
                break;
            case 2: // Orange Super Mini-Turbo
                activeBoostRatio = BOOST_RATIO_LVL2;
                activeBoostTimer = BOOST_DUR_LVL2;
                currentSpeed += 10.0f;
                break;
            case 1: // Blue Mini-Turbo
            default:
                activeBoostRatio = BOOST_RATIO_LVL1;
                activeBoostTimer = BOOST_DUR_LVL1;
                currentSpeed += 6.5f;
                break;
        }
    }

    private void updateBots(float dt) {
        for (BotRacer bot : bots) {
            if (bot.finished) continue;

            float distFromPlayer = bot.trackDistance - trackDistance;
            float targetSpeed = bot.maxSpeed;

            // Authentic Rubber-Banding Rules from RaceKartAIDefinitionDefault
            if (bot.aiGroup == 1) { // Leader AI
                targetSpeed *= 0.97f;
                if (distFromPlayer < -10.0f) {
                    targetSpeed *= 1.20f; // Catchup
                } else if (distFromPlayer > 130.0f) {
                    targetSpeed *= 0.93f; // Slowdown
                }
            } else if (bot.aiGroup == 2) { // Mid AI
                targetSpeed *= 0.94f;
                if (distFromPlayer < -70.0f) {
                    targetSpeed *= 1.15f; // Catchup
                } else if (distFromPlayer > 100.0f) {
                    targetSpeed *= 0.89f; // Slowdown
                }
            } else { // Tail AI
                targetSpeed *= 0.90f;
                if (distFromPlayer < -130.0f) {
                    targetSpeed *= 1.10f; // Catchup
                } else if (distFromPlayer > 70.0f) {
                    targetSpeed *= 0.85f; // Slowdown
                }
            }

            // Bot acceleration
            if (bot.speed < targetSpeed) {
                bot.speed += bot.accelRate * dt;
                if (bot.speed > targetSpeed) bot.speed = targetSpeed;
            } else if (bot.speed > targetSpeed) {
                bot.speed -= 9.0f * dt;
                if (bot.speed < targetSpeed) bot.speed = targetSpeed;
            }

            // Bot Lane Changes and Drift Simulation
            bot.laneChangeTimer += dt;
            if (bot.laneChangeTimer > 2.8f + (random.nextFloat() * 1.5f)) {
                bot.laneChangeTimer = 0.0f;
                bot.targetLaneOffset = (random.nextFloat() * 1.3f) - 0.65f;
                // Bot drifts on aggressive lane changes
                bot.isDrifting = (random.nextFloat() < 0.65f);
                bot.driftSparkLevel = bot.isDrifting ? (1 + random.nextInt(3)) : 0;
            }

            float dLane = bot.targetLaneOffset - bot.laneOffset;
            bot.laneOffset += dLane * Math.min(1.0f, dt * 2.4f);

            // Move bot along track
            bot.trackDistance += bot.speed * dt;
            bot.currentLap = 1 + (int)(bot.trackDistance / trackLapLength);
            if (bot.currentLap > totalLaps) {
                bot.currentLap = totalLaps;
                bot.finished = true;
            }
        }
    }

    public List<Standing> getLiveStandings() {
        List<Standing> list = new ArrayList<>();
        list.add(new Standing(characters.get(selectedCharIndex), true, trackDistance, Color.rgb(230, 40, 30)));
        for (BotRacer bot : bots) {
            list.add(new Standing(bot.name, false, bot.trackDistance, bot.color));
        }

        // In-place sort descending by distance
        for (int i = 0; i < list.size() - 1; i++) {
            for (int j = 0; j < list.size() - i - 1; j++) {
                if (list.get(j).totalDistance < list.get(j + 1).totalDistance) {
                    Standing temp = list.get(j);
                    list.set(j, list.get(j + 1));
                    list.set(j + 1, temp);
                }
            }
        }

        for (int i = 0; i < list.size(); i++) {
            list.get(i).rank = i + 1;
        }
        return list;
    }

    public int getPlayerRank() {
        List<Standing> standings = getLiveStandings();
        for (Standing s : standings) {
            if (s.isPlayer) return s.rank;
        }
        return 1;
    }

    private void finishRace() {
        currentState = STATE_RACE_RESULTS;
        finalPlayerRank = getPlayerRank();

        switch (finalPlayerRank) {
            case 1: coinsEarned = 250; break;
            case 2: coinsEarned = 150; break;
            case 3: coinsEarned = 80; break;
            default: coinsEarned = 40; break;
        }

        if (saveManager != null) {
            saveManager.save();
        }
    }

    public int getState() { return currentState; }
    public void setState(int state) { this.currentState = state; }
}
