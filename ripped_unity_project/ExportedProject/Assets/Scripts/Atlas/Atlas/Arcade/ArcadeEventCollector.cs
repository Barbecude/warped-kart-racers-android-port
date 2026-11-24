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

namespace Atlas.Arcade
{
	public class ArcadeEventCollector : ArcadeEvent<ArcadeCollectorEventDefinition>
	{
		private const string CollectibleBreakAddressableName = "P_VFX_CollectibleBreak";
		private const int CollectibleBreakPoolSize = 20;
		private AudioEvent _hitEvent;
		public List<CollectibleBehaviour> CollectibleBehaviours { get => default; }
		public GameType GameType { get => default; }
		protected virtual void OnInit() { }
		protected virtual void OnInitPools(Transform poolRoot) { }
		protected virtual void OnDeInit() { }
		protected virtual void OnUpdate(float dt) { }
		protected virtual void OnFindAndInitBehaviours(MapDefinition mapDefinition, AddressablesSceneLoader sceneLoader) { }
		protected virtual void RecordStats() { }
		protected virtual int GetMaxScore() { return default; }
		private void OnCollectibleHit(CollectibleBehaviour collectBehaviour) { }
	}
}
