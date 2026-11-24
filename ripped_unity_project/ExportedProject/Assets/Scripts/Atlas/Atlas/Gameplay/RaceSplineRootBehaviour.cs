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
	public class RaceSplineRootBehaviour : TrackEditorUpdatableBehaviour
	{
		[SerializeField] protected RaceSplineProbability[] _raceSplineProbabilityConfig;
		[SerializeField] protected RaceSplineSwitchLoop[] _raceSplineSwitchLoops;
		private MainSplineBehaviour _mainSplineBehaviour;
		private SplineBranchBehaviour[] _splineBranchBehaviours;
		private float _totalLapDist;
		private bool _switchLoopsInited;
		private RaceSplineCoordsAndPointOnTrackJob _coordsAndPointJob;
		private static readonly ProfilerMarker GetTrackCoordsProfilerMarker;
		public float TotalLapDistance { get => default; }
		public NativeArray<RaceKnotBurst> RaceKnotBursts { get => default; }
		public NativeArray<RacePolyLineBurst> RacePolyLines { get => default; }
		public NativeArray<int> NextKnotsID { get => default; }
		public NativeArray<int> NextKnotsProbabilityWeights { get => default; }
		public NativeArray<int> PolyLinesToNext { get => default; }
		public NativeArray<int> PreviousKnotsID { get => default; }
		public NativeArray<int> PolyLinesFromPrev { get => default; }
		public NativeArray<PolyLinePointBurst> RacePolyLinePoints { get => default; }
		public NativeArray<bool> IsSwitchActiveToNext { get => default; }
		public List<RaceKnot> RaceKnots { get => default; }
		public virtual int GetPriority() { return default; }
		public void Init() { }
		public void DeInit() { }
		public void OnUpdate(IUpdateParams updateParams) { }
		protected void OnUpdateSplineSwitchLoops(float deltaTime) { }
		protected virtual void OnCalculate() { }
		private void GenerateBranchingProbabilityWeightTable() { }
		private int ProbabilityLookup(string splineBehaviourName) { return default; }
		private void GenerateIDForAllKnotBehaviours(MainSplineBehaviour main, SplineBranchBehaviour[] branches) { }
		public bool TryGetCoordsAndPointOnTrackJob(float3 checkpt, float lookAhead, out float2 trackCoords, out float3 targetWorldCoords, ref RaceSplineCacheParams savedCache, int desiredPolyLineIndex, out float3 closestPointOnTrack) { trackCoords = default; targetWorldCoords = default; closestPointOnTrack = default; return default; }
		public bool TryGetCoordsAndPointOnTrack(float3 checkpt, float lookAhead, out float2 trackCoords, out float3 targetWorldCoords, ref RacePolyLineCache savedCache, RacePolyLine desiredPolyLine) { trackCoords = default; targetWorldCoords = default; return default; }
		public bool TryGetPointOnTrack(RaceKnot lower, RaceKnot upper, float distFromLower, float distCrossSection, out float3 result, RacePolyLine polyLine, ref RacePolyLine desiredPolyLine, ref RaceKnot nextUpperKnot, bool random) { result = default; return default; }
		public float2 GetTrackCoords(float3 currentposition, in RaceKnot savedUpper, in RaceKnot savedLower, in RacePolyLine savedPoly, out RaceKnot lower, out RaceKnot upper, out RacePolyLine polyLine, out int lowerOnPoly, out int upperOnPoly, out float distToUpperKnot) { lower = default; upper = default; polyLine = default; lowerOnPoly = default; upperOnPoly = default; distToUpperKnot = default; return default; }
		public float GetDistanceAtTrackCoord(float2 trackCoord) { return default; }
		public float GetDistanceAtTrackCoord(float2 trackCoord, int _lapsCompleted) { return default; }
		public RaceKnot FindClosestKnot(float3 position) { return default; }
		private void OnDrawGizmosSelected() { }
		private void OnDrawGizmos() { }
		protected virtual void OnInspectorValuesChanged(int revision) { }
		private void PrepareBurstContainers() { }
		private void DeInitBurstContainers() { }
	}
}
