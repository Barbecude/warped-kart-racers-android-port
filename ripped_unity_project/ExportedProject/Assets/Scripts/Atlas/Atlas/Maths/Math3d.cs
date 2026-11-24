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
	public static class Math3d
	{
		public static readonly float3 Right;
		public static readonly float3 Up;
		public static readonly float3 Forward;
		public static readonly float3 Down;
		public static float3 XY0(float2 value) { return default; }
		public static float3 XY1(float2 value) { return default; }
		public static float3 PerpendicularXZ(float3 value) { return default; }
		public static void Barycentric(float3 p, float3 a, float3 b, float3 c, out float outU, out float outV, out float outW) { outU = default; outV = default; outW = default; }
		public static float3 PointFromBarycentric(float3 a, float3 b, float3 c, float u, float v, float w) { return default; }
		public static float3 NearestPointOnLineSegment(float3 point, float3 startLineSeg, float3 endLineSeg) { return default; }
	}
}
