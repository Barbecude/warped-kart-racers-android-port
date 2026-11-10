package com.electricsquare.warpedkartracers.android;

public class Standing {
    public String name;
    public boolean isPlayer;
    public float totalDistance;
    public int rank;
    public int color;

    public Standing(String name, boolean isPlayer, float totalDistance, int color) {
        this.name = name;
        this.isPlayer = isPlayer;
        this.totalDistance = totalDistance;
        this.color = color;
    }
}
