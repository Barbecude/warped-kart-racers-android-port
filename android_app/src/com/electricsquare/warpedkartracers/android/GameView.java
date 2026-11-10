package com.electricsquare.warpedkartracers.android;

import android.content.Context;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.Path;
import android.graphics.RectF;
import android.view.MotionEvent;
import android.view.SurfaceHolder;
import android.view.SurfaceView;
import java.util.List;
import java.util.Random;

public class GameView extends SurfaceView implements SurfaceHolder.Callback, Runnable {
    private final GameEngine engine;
    private final SaveManager saveManager;
    private Thread gameThread;
    private volatile boolean running = false;
    private final Paint paint = new Paint(Paint.ANTI_ALIAS_FLAG);
    private final Random vfxRandom = new Random();

    // Virtual Touch Controls
    private float joyCenterX, joyCenterY, joyRadius;
    private float joyKnobX, joyKnobY;
    private boolean joyTouching = false;
    private int joyPointerId = -1;

    private RectF accelBtn, brakeBtn, driftBtn, itemBtn;
    private RectF startBtn, charBtn, trackBtn;

    public GameView(Context context, GameEngine engine, SaveManager saveManager) {
        super(context);
        this.engine = engine;
        this.saveManager = saveManager;
        getHolder().addCallback(this);
    }

    @Override
    public void surfaceCreated(SurfaceHolder holder) {
        running = true;
        gameThread = new Thread(this, "GameLoop");
        gameThread.start();
    }

    @Override
    public void surfaceChanged(SurfaceHolder holder, int format, int width, int height) {
        initLayout(width, height);
    }

    @Override
    public void surfaceDestroyed(SurfaceHolder holder) {
        running = false;
        try {
            if (gameThread != null) {
                gameThread.join(1000);
            }
        } catch (InterruptedException ignored) {}
    }

    private void initLayout(int w, int h) {
        joyCenterX = w * 0.16f;
        joyCenterY = h * 0.72f;
        joyRadius = h * 0.22f;
        joyKnobX = joyCenterX;
        joyKnobY = joyCenterY;

        float btnSize = h * 0.20f;
        accelBtn = new RectF(w * 0.85f - btnSize, h * 0.72f - btnSize * 0.5f, w * 0.85f, h * 0.72f + btnSize * 0.5f);
        brakeBtn = new RectF(w * 0.72f - btnSize * 0.8f, h * 0.74f - btnSize * 0.4f, w * 0.72f, h * 0.74f + btnSize * 0.4f);
        driftBtn = new RectF(w * 0.87f - btnSize * 0.9f, h * 0.46f - btnSize * 0.45f, w * 0.87f, h * 0.46f + btnSize * 0.45f);
        itemBtn  = new RectF(w * 0.73f - btnSize * 0.9f, h * 0.46f - btnSize * 0.45f, w * 0.73f, h * 0.46f + btnSize * 0.45f);

        // Menu buttons
        float menuBtnW = w * 0.40f;
        float menuBtnH = h * 0.14f;
        startBtn = new RectF((w - menuBtnW) / 2f, h * 0.48f, (w + menuBtnW) / 2f, h * 0.48f + menuBtnH);
        charBtn  = new RectF((w - menuBtnW) / 2f, h * 0.65f, (w + menuBtnW) / 2f, h * 0.65f + menuBtnH);
        trackBtn = new RectF((w - menuBtnW) / 2f, h * 0.82f, (w + menuBtnW) / 2f, h * 0.82f + menuBtnH);
    }

    @Override
    public void run() {
        long lastTime = System.nanoTime();
        while (running) {
            long now = System.nanoTime();
            float dt = (now - lastTime) / 1_000_000_000.0f;
            lastTime = now;
            if (dt > 0.1f) dt = 0.1f;

            engine.update(dt);
            drawFrame();

            try {
                Thread.sleep(16); // Target 60 FPS
            } catch (InterruptedException ignored) {}
        }
    }

    private void drawFrame() {
        SurfaceHolder holder = getHolder();
        if (holder == null || !holder.getSurface().isValid()) return;
        Canvas canvas = holder.lockCanvas();
        if (canvas == null) return;

        try {
            int w = canvas.getWidth();
            int h = canvas.getHeight();

            switch (engine.getState()) {
                case GameEngine.STATE_SPLASH:
                    drawSplash(canvas, w, h);
                    break;
                case GameEngine.STATE_MAIN_MENU:
                    drawMainMenu(canvas, w, h);
                    break;
                case GameEngine.STATE_CHARACTER_SELECT:
                    drawCharacterSelect(canvas, w, h);
                    break;
                case GameEngine.STATE_TRACK_SELECT:
                    drawTrackSelect(canvas, w, h);
                    break;
                case GameEngine.STATE_RACING:
                    drawRacing(canvas, w, h);
                    break;
                case GameEngine.STATE_RACE_RESULTS:
                    drawRaceResults(canvas, w, h);
                    break;
            }
        } finally {
            holder.unlockCanvasAndPost(canvas);
        }
    }

    private void drawSplash(Canvas c, int w, int h) {
        c.drawColor(Color.rgb(15, 18, 30));
        paint.setTextAlign(Paint.Align.CENTER);
        paint.setColor(Color.rgb(255, 215, 0)); // Gold
        paint.setTextSize(h * 0.12f);
        paint.setFakeBoldText(true);
        c.drawText("WARPED KART RACERS", w / 2f, h * 0.44f, paint);

        paint.setColor(Color.WHITE);
        paint.setTextSize(h * 0.05f);
        paint.setFakeBoldText(false);
        c.drawText("Native Android 150cc • v1.62 UHD", w / 2f, h * 0.56f, paint);

        paint.setColor(Color.rgb(160, 185, 220));
        paint.setTextSize(h * 0.035f);
        c.drawText("American Dad! • Family Guy • King of the Hill • Solar Opposites", w / 2f, h * 0.88f, paint);
    }

    private void drawMainMenu(Canvas c, int w, int h) {
        c.drawColor(Color.rgb(22, 28, 44));

        paint.setTextAlign(Paint.Align.CENTER);
        paint.setColor(Color.rgb(255, 204, 0));
        paint.setTextSize(h * 0.10f);
        paint.setFakeBoldText(true);
        c.drawText("WARPED KART RACERS", w / 2f, h * 0.20f, paint);

        // Driver & Kart info
        paint.setColor(Color.rgb(100, 220, 255));
        paint.setTextSize(h * 0.040f);
        paint.setFakeBoldText(false);
        String currentDriver = engine.characters.get(engine.selectedCharIndex);
        String currentKart = engine.karts.get(engine.selectedKartIndex);
        c.drawText("DRIVER: " + currentDriver, w / 2f, h * 0.31f, paint);
        c.drawText("KART: " + currentKart, w / 2f, h * 0.36f, paint);

        // Menu Buttons
        drawButton(c, startBtn, "START 150cc RACE", Color.rgb(46, 204, 113), Color.WHITE, h * 0.050f);
        drawButton(c, charBtn, "ROSTER (" + engine.characters.size() + " DRIVERS)", Color.rgb(52, 152, 219), Color.WHITE, h * 0.042f);
        drawButton(c, trackBtn, "CIRCUITS (" + engine.tracks.size() + " TRACKS)", Color.rgb(155, 89, 182), Color.WHITE, h * 0.042f);
    }

    private void drawCharacterSelect(Canvas c, int w, int h) {
        c.drawColor(Color.rgb(18, 22, 36));
        paint.setTextAlign(Paint.Align.CENTER);
        paint.setColor(Color.rgb(255, 215, 0));
        paint.setTextSize(h * 0.075f);
        paint.setFakeBoldText(true);
        c.drawText("SELECT DRIVER (" + (engine.selectedCharIndex + 1) + " / " + engine.characters.size() + ")", w / 2f, h * 0.16f, paint);

        // Driver Display Name
        paint.setColor(Color.WHITE);
        paint.setTextSize(h * 0.055f);
        String current = engine.characters.get(engine.selectedCharIndex);
        c.drawText("<   " + current + "   >", w / 2f, h * 0.42f, paint);

        // Kart selector underneath
        paint.setColor(Color.rgb(120, 220, 255));
        paint.setTextSize(h * 0.045f);
        paint.setFakeBoldText(false);
        c.drawText("Kart: " + engine.karts.get(engine.selectedKartIndex), w / 2f, h * 0.54f, paint);

        paint.setColor(Color.rgb(160, 180, 210));
        paint.setTextSize(h * 0.035f);
        c.drawText("Tap Left/Right to Switch Driver", w / 2f, h * 0.62f, paint);

        drawButton(c, startBtn, "CONFIRM & BACK", Color.rgb(46, 204, 113), Color.WHITE, h * 0.05f);
    }

    private void drawTrackSelect(Canvas c, int w, int h) {
        c.drawColor(Color.rgb(18, 22, 36));
        paint.setTextAlign(Paint.Align.CENTER);
        paint.setColor(Color.rgb(255, 215, 0));
        paint.setTextSize(h * 0.075f);
        paint.setFakeBoldText(true);
        c.drawText("SELECT CIRCUIT (" + (engine.selectedTrackIndex + 1) + " / " + engine.tracks.size() + ")", w / 2f, h * 0.16f, paint);

        paint.setColor(Color.WHITE);
        paint.setTextSize(h * 0.055f);
        String current = engine.tracks.get(engine.selectedTrackIndex);
        c.drawText("<   " + current + "   >", w / 2f, h * 0.42f, paint);

        paint.setColor(Color.rgb(180, 205, 230));
        paint.setTextSize(h * 0.04f);
        paint.setFakeBoldText(false);
        c.drawText("3 Laps • 150cc • 3 AI Opponent Bots", w / 2f, h * 0.54f, paint);

        paint.setColor(Color.rgb(160, 180, 210));
        paint.setTextSize(h * 0.035f);
        c.drawText("Tap Left/Right to Switch Circuit", w / 2f, h * 0.62f, paint);

        drawButton(c, startBtn, "CONFIRM & BACK", Color.rgb(46, 204, 113), Color.WHITE, h * 0.05f);
    }

    private void drawRacing(Canvas c, int w, int h) {
        float horizonY = h * 0.52f;
        String trackName = engine.tracks.get(engine.selectedTrackIndex);

        // Dynamic Scenery Palette per franchise track
        int skyColor = Color.rgb(55, 120, 215);
        int groundColor = Color.rgb(38, 140, 55);
        int horizonElementColor = Color.rgb(28, 95, 42);

        if (trackName.contains("Quahog") || trackName.contains("Beach")) {
            skyColor = Color.rgb(235, 120, 65); // Twilight orange
            groundColor = Color.rgb(215, 180, 120); // Sand verge
            horizonElementColor = Color.rgb(45, 30, 55); // City silhouettes
        } else if (trackName.contains("Speedway") || trackName.contains("Night")) {
            skyColor = Color.rgb(15, 20, 40); // Stadium night
            groundColor = Color.rgb(25, 60, 30);
            horizonElementColor = Color.rgb(40, 50, 75); // Floodlight towers
        } else if (trackName.contains("Wall") || trackName.contains("Space") || trackName.contains("Shlorp")) {
            skyColor = Color.rgb(25, 10, 45); // Deep cosmos
            groundColor = Color.rgb(30, 15, 50); // Cybernetic verge
            horizonElementColor = Color.rgb(130, 30, 180); // Alien structures
        }

        // Sky
        paint.setColor(skyColor);
        c.drawRect(0, 0, w, horizonY, paint);

        // Ground Verge
        paint.setColor(groundColor);
        c.drawRect(0, horizonY, w, h, paint);

        // Horizon Mountain / City Silhouettes
        paint.setColor(horizonElementColor);
        Path horizonPath = new Path();
        horizonPath.moveTo(0, horizonY);
        for (int i = 0; i <= 8; i++) {
            float px = (w / 8f) * i;
            float py = horizonY - (float)(Math.sin((i + engine.trackDistance * 0.002f) * 1.5f) * (h * 0.08f));
            horizonPath.lineTo(px, py);
        }
        horizonPath.lineTo(w, horizonY);
        horizonPath.close();
        c.drawPath(horizonPath, paint);

        // Curving Road perspective
        Path road = new Path();
        float roadTopW = w * 0.12f;
        float roadBotW = w * 0.72f;
        float curveOffset = (float) Math.sin(engine.trackDistance * 0.005f) * w * 0.18f;

        road.moveTo(w / 2f - roadTopW / 2f + curveOffset, horizonY);
        road.lineTo(w / 2f + roadTopW / 2f + curveOffset, horizonY);
        road.lineTo(w / 2f + roadBotW / 2f, h);
        road.lineTo(w / 2f - roadBotW / 2f, h);
        road.close();

        // Asphalt surface
        paint.setColor(Color.rgb(55, 60, 68));
        c.drawPath(road, paint);

        // Scrolling Red & White Rumble Strip Curbs
        float curbPhase = (engine.trackDistance % 40.0f) / 40.0f;
        paint.setStrokeWidth(Math.max(4f, h * 0.015f));
        paint.setColor((curbPhase < 0.5f) ? Color.rgb(230, 45, 45) : Color.WHITE);
        c.drawLine(w / 2f - roadTopW / 2f + curveOffset, horizonY, w / 2f - roadBotW / 2f, h, paint);
        c.drawLine(w / 2f + roadTopW / 2f + curveOffset, horizonY, w / 2f + roadBotW / 2f, h, paint);

        // Dashed Centerline that scrolls with player speed
        paint.setColor(Color.rgb(255, 220, 50));
        paint.setStrokeWidth(Math.max(2f, h * 0.006f));
        float midTopX = w / 2f + curveOffset;
        float midBotX = w / 2f;
        for (float t = curbPhase * 0.1f; t < 1.0f; t += 0.12f) {
            float segY1 = horizonY + (h - horizonY) * t;
            float segY2 = horizonY + (h - horizonY) * (t + 0.06f);
            float segX1 = midTopX + (midBotX - midTopX) * t;
            float segX2 = midTopX + (midBotX - midTopX) * (t + 0.06f);
            c.drawLine(segX1, segY1, segX2, segY2, paint);
        }

        // Draw Bot AI Karts (depth-sorted)
        for (BotRacer bot : engine.bots) {
            float distDelta = bot.trackDistance - engine.trackDistance;
            if (distDelta > -15.0f && distDelta < 220.0f) {
                float depthFactor = Math.max(0.0f, Math.min(1.0f, 1.0f - (distDelta / 220.0f)));
                float botY = horizonY + (h * 0.38f) * depthFactor;
                float roadWAtY = roadTopW + (roadBotW - roadTopW) * depthFactor;
                float curveAtY = curveOffset * (1.0f - depthFactor * 0.5f);
                float botX = (w / 2f) + curveAtY + (bot.laneOffset * (roadWAtY * 0.38f));
                float botScale = 0.30f + 0.70f * depthFactor;
                float botKartSize = h * 0.14f * botScale;

                drawBotKart(c, bot, botX, botY, botKartSize);
            }
        }

        // Player Kart Model projection
        float kartDrawX = w / 2f + (engine.steerInput * w * 0.12f);
        float kartDrawY = h * 0.82f;
        float kartSize = h * 0.14f;

        // Active Boost speed lines & exhaust flames
        if (engine.activeBoostTimer > 0.0f) {
            drawBoostSpeedLines(c, w, h);
            drawExhaustFlames(c, kartDrawX, kartDrawY, kartSize);
        }

        // 3-Stage Drift Sparks VFX under rear tires
        if (engine.isDrifting && engine.currentDriftLevel > 0) {
            drawDriftSparks(c, kartDrawX, kartDrawY, kartSize, engine.currentDriftLevel);
        }

        // Draw Player Kart
        drawKart(c, kartDrawX, kartDrawY, kartSize, Color.rgb(230, 40, 30), "YOU");

        // HUD Dashboard: Speedometer, Lap, Position
        drawHUD(c, w, h);

        // On-screen Touch Controls
        drawControls(c);
    }

    private void drawDriftSparks(Canvas c, float x, float y, float size, int level) {
        int sparkColor;
        switch (level) {
            case 3: sparkColor = Color.rgb(186, 85, 211); break; // Purple Ultra Mini-Turbo
            case 2: sparkColor = Color.rgb(255, 140, 0); break;   // Orange Super Mini-Turbo
            case 1:
            default: sparkColor = Color.rgb(0, 191, 255); break;  // Blue Mini-Turbo
        }

        paint.setColor(sparkColor);
        float leftTireX = x - size * 0.65f;
        float rightTireX = x + size * 0.65f;
        float tireY = y + size * 0.25f;

        for (int i = 0; i < 5; i++) {
            float ox1 = (vfxRandom.nextFloat() - 0.5f) * size * 0.35f;
            float oy1 = (vfxRandom.nextFloat() - 0.5f) * size * 0.25f;
            float r1 = Math.max(3f, vfxRandom.nextFloat() * size * 0.08f);
            c.drawCircle(leftTireX + ox1, tireY + oy1, r1, paint);

            float ox2 = (vfxRandom.nextFloat() - 0.5f) * size * 0.35f;
            float oy2 = (vfxRandom.nextFloat() - 0.5f) * size * 0.25f;
            float r2 = Math.max(3f, vfxRandom.nextFloat() * size * 0.08f);
            c.drawCircle(rightTireX + ox2, tireY + oy2, r2, paint);
        }
    }

    private void drawExhaustFlames(Canvas c, float x, float y, float size) {
        paint.setColor(Color.rgb(255, 100, 20));
        float flameY = y + size * 0.38f;
        c.drawCircle(x - size * 0.30f, flameY, size * 0.12f, paint);
        c.drawCircle(x + size * 0.30f, flameY, size * 0.12f, paint);

        paint.setColor(Color.rgb(255, 230, 80));
        c.drawCircle(x - size * 0.30f, flameY, size * 0.06f, paint);
        c.drawCircle(x + size * 0.30f, flameY, size * 0.06f, paint);
    }

    private void drawBoostSpeedLines(Canvas c, int w, int h) {
        paint.setColor(Color.argb(80, 255, 255, 255));
        paint.setStrokeWidth(3f);
        for (int i = 0; i < 8; i++) {
            float startX = vfxRandom.nextFloat() * w;
            float startY = vfxRandom.nextFloat() * h * 0.5f;
            c.drawLine(startX, startY, startX + (startX > w / 2f ? 40f : -40f), startY + 60f, paint);
        }
    }

    private void drawHUD(Canvas c, int w, int h) {
        // Speedometer & Laps
        paint.setColor(Color.WHITE);
        paint.setTextAlign(Paint.Align.LEFT);
        paint.setTextSize(h * 0.055f);
        paint.setFakeBoldText(true);
        c.drawText(String.format("SPEED: %d MPH", (int) Math.abs(engine.currentSpeed * 2.2f)), w * 0.04f, h * 0.10f, paint);
        c.drawText("LAP: " + engine.currentLap + " / " + engine.totalLaps, w * 0.04f, h * 0.17f, paint);

        // Drift Level Gauge Indicator
        if (engine.isDrifting) {
            String driftText;
            int driftColor;
            switch (engine.currentDriftLevel) {
                case 3:
                    driftText = "ULTRA MINI-TURBO (LVL 3)";
                    driftColor = Color.rgb(186, 85, 211);
                    break;
                case 2:
                    driftText = "SUPER MINI-TURBO (LVL 2)";
                    driftColor = Color.rgb(255, 140, 0);
                    break;
                case 1:
                    driftText = "MINI-TURBO (LVL 1)";
                    driftColor = Color.rgb(0, 191, 255);
                    break;
                default:
                    driftText = "CHARGING DRIFT...";
                    driftColor = Color.WHITE;
                    break;
            }
            paint.setColor(driftColor);
            c.drawText(driftText, w * 0.04f, h * 0.24f, paint);
        } else if (engine.activeBoostTimer > 0.0f) {
            paint.setColor(Color.rgb(255, 180, 0));
            c.drawText("BOOST ACTIVE!", w * 0.04f, h * 0.24f, paint);
        }

        // Live Standings (Top Right)
        int playerRank = engine.getPlayerRank();
        paint.setTextAlign(Paint.Align.RIGHT);
        paint.setColor(playerRank == 1 ? Color.rgb(255, 215, 0) : Color.WHITE);
        paint.setTextSize(h * 0.075f);
        c.drawText("POS: " + getOrdinal(playerRank) + " / " + (engine.bots.size() + 1), w * 0.95f, h * 0.10f, paint);

        // Mini Leaderboard
        List<Standing> standings = engine.getLiveStandings();
        paint.setTextSize(h * 0.035f);
        for (int i = 0; i < standings.size(); i++) {
            Standing s = standings.get(i);
            paint.setColor(s.isPlayer ? Color.rgb(255, 220, 50) : Color.rgb(200, 210, 220));
            String shortName = s.name.contains("(") ? s.name.substring(0, s.name.indexOf("(")).trim() : s.name;
            c.drawText(s.rank + ". " + shortName, w * 0.95f, h * (0.16f + (i * 0.04f)), paint);
        }
    }

    private String getOrdinal(int n) {
        switch (n) {
            case 1: return "1st";
            case 2: return "2nd";
            case 3: return "3rd";
            default: return n + "th";
        }
    }

    private void drawBotKart(Canvas c, BotRacer bot, float x, float y, float size) {
        // Draw bot drift sparks if bot is drifting
        if (bot.isDrifting && bot.driftSparkLevel > 0) {
            drawDriftSparks(c, x, y, size, bot.driftSparkLevel);
        }
        drawKart(c, x, y, size, bot.color, bot.name.contains("(") ? bot.name.substring(0, bot.name.indexOf("(")).trim() : bot.name);
    }

    private void drawKart(Canvas c, float x, float y, float size, int chassisColor, String label) {
        // Driver Label above kart
        paint.setTextAlign(Paint.Align.CENTER);
        paint.setTextSize(Math.max(16f, size * 0.28f));
        paint.setColor(Color.WHITE);
        paint.setFakeBoldText(true);
        c.drawText(label, x, y - size * 0.52f, paint);

        // Kart Chassis
        paint.setColor(chassisColor);
        c.drawRoundRect(x - size * 0.6f, y - size * 0.4f, x + size * 0.6f, y + size * 0.4f, 16f, 16f, paint);

        // Tires
        paint.setColor(Color.rgb(25, 25, 25));
        c.drawRoundRect(x - size * 0.75f, y - size * 0.35f, x - size * 0.6f, y - size * 0.05f, 6f, 6f, paint);
        c.drawRoundRect(x + size * 0.6f, y - size * 0.35f, x + size * 0.75f, y - size * 0.05f, 6f, 6f, paint);
        c.drawRoundRect(x - size * 0.75f, y + size * 0.05f, x - size * 0.6f, y + size * 0.35f, 6f, 6f, paint);
        c.drawRoundRect(x + size * 0.6f, y + size * 0.05f, x + size * 0.75f, y + size * 0.35f, 6f, 6f, paint);

        // Driver Head
        paint.setColor(Color.rgb(255, 218, 185)); // Peach
        c.drawCircle(x, y - size * 0.1f, size * 0.28f, paint);

        // Driver Cap / Helmet
        paint.setColor(Color.rgb(30, 45, 95));
        c.drawArc(x - size * 0.28f, y - size * 0.38f, x + size * 0.28f, y + size * 0.18f, 180, 180, true, paint);
    }

    private void drawControls(Canvas c) {
        // Joystick Base
        paint.setColor(Color.argb(80, 255, 255, 255));
        c.drawCircle(joyCenterX, joyCenterY, joyRadius, paint);

        // Joystick Knob
        paint.setColor(Color.argb(160, 255, 255, 255));
        c.drawCircle(joyKnobX, joyKnobY, joyRadius * 0.4f, paint);

        // Action Buttons
        drawButton(c, accelBtn, "GAS", Color.argb(150, 46, 204, 113), Color.WHITE, accelBtn.height() * 0.35f);
        drawButton(c, brakeBtn, "BRAKE", Color.argb(150, 231, 76, 60), Color.WHITE, brakeBtn.height() * 0.35f);
        drawButton(c, driftBtn, "DRIFT", Color.argb(150, 241, 196, 15), Color.WHITE, driftBtn.height() * 0.35f);
        drawButton(c, itemBtn,  "ITEM",  Color.argb(150, 52, 152, 219), Color.WHITE, itemBtn.height() * 0.35f);
    }

    private void drawRaceResults(Canvas c, int w, int h) {
        c.drawColor(Color.argb(235, 12, 16, 28));
        paint.setTextAlign(Paint.Align.CENTER);

        int rank = engine.finalPlayerRank;
        if (rank == 1) {
            paint.setColor(Color.rgb(255, 215, 0));
            paint.setTextSize(h * 0.09f);
            c.drawText("🏆 1ST PLACE WINNER! 🏆", w / 2f, h * 0.20f, paint);
        } else {
            paint.setColor(Color.rgb(220, 230, 245));
            paint.setTextSize(h * 0.08f);
            c.drawText("RACE FINISHED - " + getOrdinal(rank) + " PLACE", w / 2f, h * 0.20f, paint);
        }

        // Standings List
        List<Standing> standings = engine.getLiveStandings();
        paint.setTextSize(h * 0.045f);
        float listY = h * 0.32f;
        for (Standing s : standings) {
            paint.setColor(s.isPlayer ? Color.rgb(255, 220, 50) : Color.WHITE);
            paint.setFakeBoldText(s.isPlayer);
            c.drawText(s.rank + ". " + s.name + (s.isPlayer ? " (YOU)" : ""), w / 2f, listY, paint);
            listY += h * 0.065f;
        }

        paint.setColor(Color.rgb(46, 204, 113));
        paint.setTextSize(h * 0.05f);
        paint.setFakeBoldText(true);
        c.drawText("+" + engine.coinsEarned + " Coins Earned!", w / 2f, listY + h * 0.04f, paint);

        drawButton(c, startBtn, "RETURN TO MAIN MENU", Color.rgb(46, 204, 113), Color.WHITE, h * 0.05f);
    }

    private void drawButton(Canvas c, RectF rect, String text, int bgColor, int textColor, float textSize) {
        paint.setColor(bgColor);
        c.drawRoundRect(rect, 20f, 20f, paint);

        paint.setColor(textColor);
        paint.setTextAlign(Paint.Align.CENTER);
        paint.setTextSize(textSize);
        paint.setFakeBoldText(true);
        float textY = rect.centerY() - (paint.descent() + paint.ascent()) / 2f;
        c.drawText(text, rect.centerX(), textY, paint);
    }

    @Override
    public boolean onTouchEvent(MotionEvent event) {
        int action = event.getActionMasked();
        int index = event.getActionIndex();

        switch (action) {
            case MotionEvent.ACTION_DOWN:
            case MotionEvent.ACTION_POINTER_DOWN: {
                float x = event.getX(index);
                float y = event.getY(index);
                handleTouchDown(x, y, event.getPointerId(index));
                break;
            }
            case MotionEvent.ACTION_MOVE: {
                for (int i = 0; i < event.getPointerCount(); i++) {
                    int pId = event.getPointerId(i);
                    float x = event.getX(i);
                    float y = event.getY(i);
                    if (pId == joyPointerId) {
                        float dx = x - joyCenterX;
                        float dy = y - joyCenterY;
                        float dist = (float) Math.hypot(dx, dy);
                        if (dist > joyRadius) {
                            dx = (dx / dist) * joyRadius;
                            dy = (dy / dist) * joyRadius;
                        }
                        joyKnobX = joyCenterX + dx;
                        joyKnobY = joyCenterY + dy;
                        engine.steerInput = dx / joyRadius;
                    }
                }
                break;
            }
            case MotionEvent.ACTION_UP:
            case MotionEvent.ACTION_POINTER_UP: {
                int pId = event.getPointerId(index);
                if (pId == joyPointerId) {
                    joyTouching = false;
                    joyPointerId = -1;
                    joyKnobX = joyCenterX;
                    joyKnobY = joyCenterY;
                    engine.steerInput = 0.0f;
                }
                handleTouchUp(event.getX(index), event.getY(index));
                break;
            }
        }
        return true;
    }

    private void handleTouchDown(float x, float y, int pointerId) {
        int state = engine.getState();
        if (state == GameEngine.STATE_MAIN_MENU) {
            if (startBtn.contains(x, y)) {
                engine.startRace();
            } else if (charBtn.contains(x, y)) {
                engine.setState(GameEngine.STATE_CHARACTER_SELECT);
            } else if (trackBtn.contains(x, y)) {
                engine.setState(GameEngine.STATE_TRACK_SELECT);
            }
        } else if (state == GameEngine.STATE_CHARACTER_SELECT) {
            if (startBtn.contains(x, y)) {
                engine.setState(GameEngine.STATE_MAIN_MENU);
            } else if (x < getWidth() * 0.35f) {
                engine.selectedCharIndex = (engine.selectedCharIndex - 1 + engine.characters.size()) % engine.characters.size();
            } else if (x > getWidth() * 0.65f) {
                engine.selectedCharIndex = (engine.selectedCharIndex + 1) % engine.characters.size();
            } else {
                // Center tap switches kart
                engine.selectedKartIndex = (engine.selectedKartIndex + 1) % engine.karts.size();
            }
        } else if (state == GameEngine.STATE_TRACK_SELECT) {
            if (startBtn.contains(x, y)) {
                engine.setState(GameEngine.STATE_MAIN_MENU);
            } else if (x < getWidth() * 0.35f) {
                engine.selectedTrackIndex = (engine.selectedTrackIndex - 1 + engine.tracks.size()) % engine.tracks.size();
            } else if (x > getWidth() * 0.65f) {
                engine.selectedTrackIndex = (engine.selectedTrackIndex + 1) % engine.tracks.size();
            }
        } else if (state == GameEngine.STATE_RACE_RESULTS) {
            if (startBtn.contains(x, y)) {
                engine.setState(GameEngine.STATE_MAIN_MENU);
            }
        } else if (state == GameEngine.STATE_RACING) {
            if (x < getWidth() * 0.45f && !joyTouching) {
                joyTouching = true;
                joyPointerId = pointerId;
                joyKnobX = x;
                joyKnobY = y;
                float dx = x - joyCenterX;
                engine.steerInput = Math.max(-1.0f, Math.min(1.0f, dx / joyRadius));
            }

            if (accelBtn.contains(x, y)) engine.throttleInput = 1.0f;
            if (brakeBtn.contains(x, y)) engine.brakeInput = true;
            if (driftBtn.contains(x, y)) engine.driftButton = true;
            if (itemBtn.contains(x, y))  engine.useItemButton = true;
        }
    }

    private void handleTouchUp(float x, float y) {
        if (engine.getState() == GameEngine.STATE_RACING) {
            if (accelBtn.contains(x, y)) engine.throttleInput = 0.0f;
            if (brakeBtn.contains(x, y)) engine.brakeInput = false;
            if (driftBtn.contains(x, y)) engine.driftButton = false;
            if (itemBtn.contains(x, y))  engine.useItemButton = false;
        }
    }
}
