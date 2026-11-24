using System;

namespace Atlas.Gameplay.Kart
{
	public enum FloorSurfaceType
	{
		None = 0,
		Tarmac = 1,
		Grass = 2,
		Dust = 3,
		Dirt = 4,
		Wood = 5,
		RumbleStrip = 6,
		DeepMud = 7
	}

	public enum AestheticSurfaceType
	{
		None = 0,
		Tarmac = 1,
		Grass = 2,
		Dust = 3,
		Dirt = 4,
		Wood = 5,
		RumbleStrip = 6,
		CobbledStreet = 7,
		ZingDonutLarge = 8,
		ZingDonutSmall = 9,
		DeepMud = 10,
		Sand = 11,
		Rubber = 12,
		Metal = 13,
		SweetWrappersGround = 15,
		Marble = 16,
		RainbowDust = 17,
		Rock = 18,
		RedDirt = 19,
		WetCement = 20,
		Cardboard = 21,
		Plastic = 22,
		Concrete = 23,
		Hay = 24,
		CosmicDustBlue = 25,
		CosmicDustYellow = 26,
		CosmicDustOrange = 27,
		CosmicDustGreen = 28,
		CosmicDustPurple = 29
	}

	public static class SurfaceTags
	{
		public static bool IsTagAFloorSurface(FloorSurfaceType floorSurfaceType)
		{
			return floorSurfaceType != FloorSurfaceType.None;
		}

		public static bool IsSurfaceOffRoad(FloorSurfaceType floorSurfaceType)
		{
			return floorSurfaceType == FloorSurfaceType.Grass || floorSurfaceType == FloorSurfaceType.DeepMud;
		}
	}
}
