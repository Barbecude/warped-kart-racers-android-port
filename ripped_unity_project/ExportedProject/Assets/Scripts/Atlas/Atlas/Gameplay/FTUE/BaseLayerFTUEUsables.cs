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

namespace Atlas.Gameplay.FTUE
{
	public class BaseLayerFTUEUsables : BaseLayerFTUEManager
	{
		public enum Section
		{
			None = 0,
			PickupUsable = 1,
			UseUsable = 2,
			HitPlayer = 3,
		}
		private UsableManager _usableManager;
		private HitVolumeBehaviour _enterStartPickupUsables;
		private HitVolumeBehaviour _enterEndPickupUsables;
		private HitVolumeBehaviour _enterEndUseUsableSection;
		private HitVolumeBehaviour _enterEndHitPlayerSection;
		private HitVolumeBehaviour _pickupUsableSequenceHitVolume;
		private BaseLayerFTUEUsables.Section _state;
		public FTUEUsablesDefinition FtueUsablesDefinition { get => default; }
		public virtual void Init(BaseLayerFTUEDefinition baseLayerFtueDefinition, GameContextBase gameContextBase, GameContextBaseInProgressState inProgressState, GameContextBaseOutroState outroState, MapBehaviour mapBehaviour) { }
		public virtual void DeInit() { }
		public virtual void OnEnterInProgressScreen(GameInProgressScreen gameInProgressScreen) { }
		private void OnEnterPickupUsableStartTrigger(Collider collider, HitVolumeBehaviour triggerVolume) { }
		private void OnEnterPickupUsableEndTrigger(Collider collider, HitVolumeBehaviour triggerVolume) { }
		private void OnFailPickupUsable() { }
		private void OnEnterUseUsableEndTrigger(Collider collider, HitVolumeBehaviour triggerVolume) { }
		private void OnFailedUseUsableSection() { }
		private void OnEnterHitPlayerEndTrigger(Collider collider, HitVolumeBehaviour triggerVolume) { }
		private void OnFailedHitPlayerSection() { }
		private void OnPickup(GameContextPlayer player, UsableDefinition usable, int usesRemaining) { }
		private void CompletePickupCondition() { }
		private void StartUseUsableSection() { }
		private void OnUse(GameContextPlayer player, UsableDefinition usable, int usesremaining) { }
		private void CompleteUseUsableCondition() { }
		private void StartHitPlayerSection() { }
		private void OnHit(GameContextPlayer hitplayer, GameContextPlayer throwingplayer, UsableDefinition usable) { }
		private void CompleteHitPlayerCondition() { }
	}
}
