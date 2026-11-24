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

namespace Atlas.Maths
{
	public static class Math2d
	{
		public static readonly float2 Right;
		public static readonly float2 Up;
		public static readonly float2 Down;
		public static readonly float2 Half;
		public static readonly float2 Min;
		public static readonly float2 Max;
		public static readonly Vector2 HalfVec2;
		public static void Barycentric(float2 p, float2 a, float2 b, float2 c, out float outU, out float outV, out float outW) { outU = default; outV = default; outW = default; }
		public static float2 PointFromBarycentric(float2 a, float2 b, float2 c, float u, float v, float w) { return default; }
		public static bool LineSegmentsIntersectionXZ(float3 p1, float3 p2, float3 p3, float3 p4) { return default; }
		public static bool LineSegmentsIntersection(Vector2 p1, Vector2 p2, Vector2 p3, Vector2 p4, out Vector2 intersection) { intersection = default; return default; }
		public static float2 Float2XY(Vector3 value) { return default; }
		public static Vector2 Vector3XY(Vector3 value) { return default; }
		public static Vector2[] Vector3ArrayToVector2Array(Vector3[] values) { return default; }
		public static float2[] Vector3ArrayToFloat2Array(Vector3[] values) { return default; }
		public static float2[] Vector2ArrayToFloat2Array(Vector2[] values) { return default; }
	}
}
