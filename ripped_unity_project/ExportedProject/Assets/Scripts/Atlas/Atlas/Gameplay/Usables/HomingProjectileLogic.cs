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

namespace Atlas.Gameplay.Usables
{
	public class HomingProjectileLogic
	{
		private Transform _transform;
		private ProjectileUsable _projectileUsable;
		private KartComposite _kartTarget;
		private float _startTrackingInAirTimer;
		private float3 _trackWaypointPos;
		private float2 _currentTrackCoords;
		private float3 _currentClosestPointOnTrack;
		private SpatialUtils.LoSParams _loSParams;
		private RaceSplineRootBehaviour _raceSpline;
		private HomingData _homingData;
		private float _cosHalfFoV;
		private readonly float _behindCosHalfFoV;
		private RaceSplineCacheParams _raceSplineJobCache;
		private float _currentSteer;
		private float _currentMaxSteer;
		private float _slerpStartTime;
		public bool HasKartTarget { get => default; }
		public bool HasSplineRoot { get => default; }
		public bool CanTrack { get => default; }
		public float StartTrackingInAirTimer { get => default; }
		public RaceSplineCacheParams RaceSplineJobCache { get => default; }
		public RaceSplineRootBehaviour RaceSpline { get => default; }
		public float2 CurrentTrackCoords { get => default; }
		public float3 CurrentClosestPointOnTrack { get => default; }
		public KartComposite KartTarget { get => default; set { } }
		public Vector3 TrackWaypointPos { get => default; }
		public float CurrentMaxSteer { get => default; }
		public float CurrentSteer { get => default; }
		public int DesiredPolyLineIndex { get => default; set { } }
		public void Init(IContext context) { }
		public void DeInit() { }
		public void SetUpParams(HomingData homingData, Transform transform, ProjectileUsable projectileUsable) { }
		public void TearDownParams() { }
		public void Update(IUpdateParams updateParams) { }
		public bool CanSeeKart(KartComposite kartComposite, Vector3 dir) { return default; }
		public void UpdateCoordAndWaypoint() { }
		public void TrackTarget(Vector3 toTarget, float currentTime, bool isInFreeFall, ref Vector3 direction, bool isTrackingKart, bool overrideY) { }
		public bool HasLoSToKart(Vector3 from, GameContextPlayer toPlayer) { return default; }
		public bool HasLoSToKart(Vector3 from, GameContextPlayer toPlayer, SpatialUtils.LoSParams loSParams) { return default; }
		public float DistToTargetSquared(KartComposite kartComposite) { return default; }
		public float SplineDistToTargetSquared(GameContextPlayer player) { return default; }
		public float LinearDistToTargetSquared(Vector3 position) { return default; }
		public bool IsBehindKart(KartComposite kart) { return default; }
	}
}
