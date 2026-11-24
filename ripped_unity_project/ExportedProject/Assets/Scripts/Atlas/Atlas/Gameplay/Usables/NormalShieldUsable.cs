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
	public class NormalShieldUsable : ShieldUsable
	{
		private Transform _transform;
		private KartAudio _kartAudio;
		private int _shieldUses;
		private bool _destroyTriggered;
		public NormalShieldUsableDefinition ShieldUsableDefinition { get => default; }
		public NormalShieldUsableBehaviour NormalShieldUsableBehaviour { get => default; }
		public bool IsAlive { get => default; }
		public virtual void DeInit() { }
		public void OnExitPool(NormalShieldUsableDefinition definition, NormalShieldUsableBehaviour normalShieldBehaviour) { }
		public void OnExitPool(NormalShieldUsableDefinition definition, NormalShieldUsableBehaviour normalShieldBehaviour, KartComposite kartComposite, int groupId, int sequenceId) { }
		public virtual void TriggerScale(bool scaledown) { }
		public virtual void OnEnterPool() { }
		protected virtual void DeSpawn(bool destroyWithVFX) { }
		public virtual KartTriggerEffectParameters GetKartTriggerEffectParameters() { return default; }
		public virtual void Update(IUpdateParams updateParams) { }
		public virtual void Use() { }
		public virtual void TriggerDestroy() { }
		public virtual void ConsumeHit(bool synchronise) { }
		private void InUseVisuals() { }
		private void InUseLogic() { }
		public void PlayUseSound() { }
		private void PlayTimeoutSound() { }
		public void PlayExplodeSound() { }
		private void OnTearDownParamsInternal() { }
	}
}
