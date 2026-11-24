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

namespace Atlas.Maps
{
	public class MapBehaviour : MonoBehaviour
	{
		private Vector3 _cachedBoundingBoxMin;
		private Vector3 _cachedBoundingBoxMax;
		private bool _boundingBoxBoundsCached;
		private int _mapBoundsRespawnCounter;
		[SerializeField] private MapSequenceBehaviour _mapSequence;
		[SerializeField] private RaceSplineRootBehaviour _raceSplineRootBehaviour;
		[SerializeField] private SpawnLocationsBehaviour _spawnLocationsBehaviour;
		[SerializeField] private PickupSpotsRootBehaviour _pickupSpotsRootBehaviour;
		[SerializeField] private HitVolumeRootBehaviour _hitVolumeRootBehaviour;
		[SerializeField] private IdentifiableLocatorBehaviourRoot _identifiableLocatorRootBehaviour;
		[SerializeField] private BattleAIMapBoundsBehaviour _battleAiMapBoundsBehaviour;
		[SerializeField] private Transform _interactablesRoot;
		[SerializeField] private PlayableDirector[] _networkSyncedPlayableDirectors;
		[SerializeField] private int _variantTextureSwapIndex;
		[SerializeField] protected Transform _mapBoundsBox;
		[SerializeField] protected Transform _minimapBoundsPlane;
		[SerializeField] protected bool _rotateMinimapAxes;
		[SerializeField] protected Transform _aiRerouteTriggersRoot;
		public MapSequenceBehaviour MapSequence { get => default; }
		public RaceSplineRootBehaviour RaceSplineRootBehaviour { get => default; }
		public SpawnLocationsBehaviour SpawnLocationsBehaviour { get => default; }
		public PickupSpotsRootBehaviour PickupSpotsRootBehaviour { get => default; }
		public BattleAIMapBoundsBehaviour BattleAiMapBoundsBehaviour { get => default; }
		public Transform InteractablesRoot { get => default; }
		public PlayableDirector[] NetworkSyncedPlayableDirectors { get => default; }
		public int VariantTextureSwapIndex { get => default; }
		public Transform MapBoundsBox { get => default; }
		public Transform MinimapBounds { get => default; }
		public bool RotateMinimapAxes { get => default; }
		public HitVolumeRootBehaviour HitVolumeRootBehaviour { get => default; }
		public IdentifiableLocatorBehaviourRoot IdentifiableLocatorRootBehaviour { get => default; }
		public void Init() { }
		public void DeInit() { }
		public Transform GetSpawnLocation() { return default; }
		public bool IsOutsideBounds(Vector3 pos) { return default; }
		public bool IsNearBounds(Vector3 pos) { return default; }
		public bool TryGetMapBounds(out Vector3 min, out Vector3 max) { min = default; max = default; return default; }
	}
}
