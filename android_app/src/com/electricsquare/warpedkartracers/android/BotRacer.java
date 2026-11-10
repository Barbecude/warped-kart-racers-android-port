package com.electricsquare.warpedkartracers.android;

public class BotRacer {
    public String name;
    public String kart;
    public int color;
    public float trackDistance = 0.0f;
    public float laneOffset = 0.0f; // -1.0 (left) to 1.0 (right)
    public float targetLaneOffset = 0.0f;
    public float speed = 0.0f;
    public float maxSpeed = 37.0f;
    public float accelRate = 17.5f;
    public int currentLap = 1;
    public boolean finished = false;
    public float laneChangeTimer = 0.0f;
    public int aiGroup = 1; // 1 = Leader, 2 = Mid, 3 = Tail
    public boolean isDrifting = false;
    public int driftSparkLevel = 0; // 0=none, 1=blue, 2=orange, 3=purple

    public BotRacer(String name, String kart, int color, float maxSpeed, float laneOffset, float startDist, int aiGroup) {
        this.name = name;
        this.kart = kart;
        this.color = color;
        this.maxSpeed = maxSpeed;
        this.laneOffset = laneOffset;
        this.targetLaneOffset = laneOffset;
        this.trackDistance = startDist;
        this.aiGroup = aiGroup;
    }
}
