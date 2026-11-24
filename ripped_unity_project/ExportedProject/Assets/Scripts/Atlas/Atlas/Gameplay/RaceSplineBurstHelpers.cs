using System;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using Atlas.Audio;
using Atlas.Contexts;
using Atlas.Definitions;
using Atlas.Gameplay;
using Atlas.Gameplay.Kart;
using Atlas.Gameplay.Pickups;
using Atlas.Gameplay.Player;
using Atlas.Gameplay.Usables;
using Atlas.Input;
using Atlas.League;
using Atlas.Lighting;
using Atlas.Networking;
using Atlas.Rendering;
using Atlas.Save;
using Atlas.Settings;
using Atlas.Stats;
using Atlas.UI;
using Core.Actors;
using Core.Application;
using Core.Assets;
using Core.Audio;
using Core.Cameras;
using Core.Containers;
using Core.Contexts;
using Core.Definitions;
using Core.Input;
using Core.Localisation;
using Core.Networking;
using Core.Scenes;
using Core.Services;
using Core.Settings;
using Unity.Collections;
using Unity.Jobs;
using Unity.Mathematics;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.Events;
using UnityEngine.UI;
using Object = UnityEngine.Object;
using Network = Atlas.Networking.Network;
using NetworkPlayer = Core.Networking.NetworkPlayer;

namespace Atlas.Gameplay
{
	public class RaceSplineBurstHelpers
	{
		public const float TrackVerticalDifferenceFactor = 4;
		public static Random RandomHelper;
		public static float2 GetTrackCoords(in RaceSplineBurstData raceSplineData, float4 position, in int savedUpperKnotIndex, in int savedLowerKnotIndex, in int savedPolylineIndex, out int lowerKnotIndex, out int upperKnotIndex, out int polyLineIndex, out int lowerOnPoly, out int upperOnPoly, out float distFromLower, out float distToUpper, out float4 closestPoint) { lowerKnotIndex = default; upperKnotIndex = default; polyLineIndex = default; lowerOnPoly = default; upperOnPoly = default; distFromLower = default; distToUpper = default; closestPoint = default; return default; }
		public static bool TryGetClosestPoint(in RaceSplineBurstData raceSplineData, float4 checkPoint, in RacePolyLineBurst poly, out float4 closestPoint, out float distToLine, out float distFromStart, out int lowerIndex, out int upperIndex) { closestPoint = default; distToLine = default; distFromStart = default; lowerIndex = default; upperIndex = default; return default; }
		public static void FindClosestPolylineFromKnot(in RaceSplineBurstData raceSplineData, int knotIndex, in float4 position, ref float minDistToLine, ref int polyLineIndex, ref int lowerKnotIndex, ref int upperKnotIndex, ref int lowerOnPoly, ref int upperOnPoly, ref float distFromLowerKnot, ref float minDistToLineBias, ref float4 closestPoint) { }
		public static int FindClosestKnot(in RaceSplineBurstData raceSplineData, float4 position) { return default; }
		public static bool TryGetPointOnTrack(in RaceSplineBurstData raceSplineData, float distFromLower, float distCrossSection, ref RaceSplineCacheParams cache, out float4 targetWorldPos, bool randomNext, Random rand) { targetWorldPos = default; return default; }
		public static bool TryGetDistanceAlong(in RaceSplineBurstData raceSplineData, in RacePolyLineBurst poly, float distanceAlong, out float3 outPoint, out int outLowerIndex) { outPoint = default; outLowerIndex = default; return default; }
		public static int GetNextPolylineIndex(in RaceSplineBurstData raceSplineData, in RaceKnotBurst knot, bool isRandom, Random rand) { return default; }
	}
}
