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
	public class PickupBox : ICollidableOwner
	{
		protected PickupBoxBehaviour _pickupBoxBehaviour;
		private PickupSpotBehaviour _pickupSpotBehaviour;
		private PickupBoxDefinition _pickupBoxDefinition;
		private PickupTableDefinition _playerPickupTableDefinition;
		private PickupTableDefinition _aiPickupTableDefinition;
		private float _respawnTimer;
		private bool _despawning;
		private bool _spawning;
		private bool _isIndividual;
		private int _battleMapAreaIndex;
		public PickupBoxBehaviour PickupBoxBehaviour { get => default; }
		public PickupSpotBehaviour PickupSpotBehaviour { get => default; }
		public PickupTableDefinition PlayerPickupTableDefinition { get => default; }
		public PickupTableDefinition AiPickupTableDefinition { get => default; }
		public float RespawnTimer { get => default; }
		public bool IsBoxAvailable { get => default; }
		public HashSet<UsableType> UsableTypes { get => default; }
		public PickupBoxDefinition PickupBoxDefinition { get => default; }
		public int BattleMapAreaIndex { get => default; }
		public void Init(in PickupBoxBehaviour pickupBoxBehaviour, in PickupBoxDefinition pickupBoxDefinition, in PickupSpotBehaviour pickupSpotBehaviour, AtlasDefinitions definitions, int battleMapAreaIndex) { }
		public void DeInit() { }
		public void SpawnBox() { }
		public void DeSpawnBox() { }
		public void UpdateDeSpawnBox() { }
		public void DestroyBox() { }
		public void CountDownRespawnTimer(float deltaTime) { }
		public void ResetRespawnTimer() { }
		public void OnTriggerEnter(Collider collider) { }
		public void OnCollisionEnter(Collision collision) { }
		public void OnCollisionStay(Collision collision) { }
		public void OnCollisionExit(Collision collision) { }
		public void OnTriggerStay(Collider collider) { }
		public void OnTriggerExit(Collider collider) { }
	}
}
