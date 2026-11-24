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

namespace Atlas.Geometry
{
	[Serializable]
	public struct SplinePolyLine : IFeature
	{
		public bool TryGetClosestPoint(float3 point, out PolyLine polyLine, out int index) { polyLine = default; index = -1; return false; }
		public bool TryGetClosestEndPoint(float3 point, out PolyLine polyLine, out int index) { polyLine = default; index = -1; return false; }
		private Spline _spline;
		private PolyLine _polyLine;
		private SplineLocation[] _polyLineSplineLocations;
		private SplineDistanceLookup _distanceLookup;
		public Spline Spline { get => default; }
		public PolyLine PolyLine { get => default; }
		public SplineLocation[] PolyLineSplineLocations { get => default; }
		public SplineDistanceLookup DistanceLookup { get => default; }
	}
}
