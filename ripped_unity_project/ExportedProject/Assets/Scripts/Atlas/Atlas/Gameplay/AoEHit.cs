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
	public class AoEHit : IActor
	{
		private AoEHitData _data;
		private KartComposite _ownerKart;
		private PooledActorManager _pooledActorManager;
		private ActorManager _actorManager;
		private NetworkSessionTime _deSpawnTime;
		private Network _network;
		private UsableDefinition _fromUsable;
		private KartComposite _excludeKartHit;
		private float _radius;
		private Vector3 _centre;
		public void Spawn(AoEHitData data, Vector3 position, KartComposite ownerKart, PooledActorManager pooledActorManager, ActorManager actorManager, Network network, UsableDefinition fromUsable, KartComposite excludeKart) { }
		public void OnDeSpawn() { }
		public void EarlyUpdate(IUpdateParams updateParams) { }
		public void Update(IUpdateParams updateParams) { }
		public void LateUpdate(IUpdateParams updateParams) { }
		public void FixedUpdate(IUpdateParams updateParams) { }
		public void PreFixedUpdate(IUpdateParams updateParams) { }
		public void PostFixedUpdate(IUpdateParams updateParams) { }
		private bool IsInRange(Vector3 transformPosition) { return default; }
	}
}
