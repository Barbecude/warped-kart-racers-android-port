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

namespace Atlas.Gameplay.Pickups
{
	public class PickupManager
	{
		private GameContextBase _gameContextBase;
		private AtlasDefinitions _definitions;
		private AssetManager _assetManager;
		private NetworkIdentifiers _networkIdentifiers;
		private Network _network;
		private PickupSpotsRootBehaviour _pickupSpotsRootBehaviour;
		private AtlasStats _stats;
		private PickupLimitsDefinition _pickupLimitsDefinition;
		private MapBehaviour _mapBehaviour;
		private UsableManager _usableManager;
		private PickupTable _pickupTable;
		private PickupBoxDefinition _overridePickupBoxDefinition;
		private const int _maxRolls = 5;
		private int _numUsableTypes;
		private int[] _usablesInPlay;
		private int[] _usablePickupLimits;
		private float[] _usableCooldownTimers;
		private bool _trackUsableCounts;
		private static readonly ProfilerMarker UpdateProfilerMarker;
		public List<PickupBox> LoadedBoxes { get => default; }
		public int[] UsablesInPlay { get => default; }
		public int[] UsablePickupLimits { get => default; }
		public float[] UsableCooldownTimers { get => default; }
		public HashSet<UsableType> CurrentUsableTypes { get => default; }
		public bool TrackUsableCounts { set { } }
		public void Init(MapBehaviour mapBehaviour, GameContextBase gameContextBase, UsableManager usableManager, AtlasStats stats, PickupLimitsDefinition pickupLimitsDefinition, DependencyManager dependencyManager) { }
		public void DeInit() { }
		public IEnumerator LoadAndSpawnPickupBoxes() { return default; }
		public void DestroyAndDeSpawnBoxes() { }
		public void Update(IUpdateParams updateParams) { }
		private void OnLoadPickupBoxSuccess(object asset, string path, AssetManagerHandle handle) { }
		private void CreatePickupBox(in PickupBoxBehaviour pickupBoxBehaviour, in PickupBoxDefinition pickupBoxDefinition, in PickupSpotBehaviour pickupSpotBehaviour) { }
		private void OnLoadPickupBoxFailure(string error, string path, AssetManagerHandle handle) { }
		private void OnBoxHit(PickupBox pickupBox, KartComposite kartComposite) { }
		private void RollPickup(KartComposite kartComposite, PickupTableDefinition pickupTableDefinition) { }
		private bool RollPickupForRemote(NetworkPlayer networkPlayer, short pickupTableDefinitionKey, out UsableDefinition usableDefinition) { usableDefinition = default; return default; }
		private UsableDefinition RollPickupInternal(KartComposite kartComposite, PickupTableDefinition pickupTableDefinition) { return default; }
		private void OnUsableRequested(short usableTableKey, NetworkPlayer fromPlayer) { }
		private void OnUsableResponse(short usableDefinitionKey) { }
		private UsableDefinition RollUsableTable(KartComposite kartComposite, PickupTableDefinition pickupTableDefinition, float distanceOrPosition) { return default; }
		private bool IsUseableAvailable(KartComposite kartComposite, UsableDefinition usableDefinition) { return default; }
		public void DebugOnUsablePickedUp(UsableDefinition usableDefinition, GameContextPlayer gameContextPlayer) { }
		public void OnUsablePickedUp(UsableDefinition usableDefinition, GameContextPlayer gameContextPlayer) { }
		private bool IncrementUsableInPlay(UsableDefinition usableDefinition) { return default; }
		public void OnUsableDespawned(UsableDefinition usableDefinition, int amountDespawned) { }
	}
}
