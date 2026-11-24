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
	public class SatelliteUsable : Usable
	{
		protected KartAudio _kartAudio;
		private AtlasAudioManager _audioManager;
		private WeaponAudio _weaponAudio;
		private PostProcessingEffectBehaviour _postProcessingEffectBehaviour;
		private float _effectTimer;
		private float _kartVfxTimer;
		private float _preHitVfxTimer;
		private float _postHitVfxTimer;
		private float _impactPostProcessingTimer;
		private float staggeredEffectDelta;
		private int _triggerVFXIndex;
		private int _triggerEffectIndex;
		private string _preHitPostProcessingId;
		private string _postHitPostProcessingId;
		private string _impactPostProcessingId;
		private bool _islocalPlayerHit;
		private KartComposite _localPlayerRef;
		public SatelliteUsableDefinition SatelliteUsableDefinition { get => default; }
		public SatelliteUsableBehaviour SatelliteUsableBehaviour { get => default; }
		public virtual void Init(UsableManager usableManager, IContext context, AtlasDefinitions atlasDefinitions, AchievementManager achievementManager) { }
		public virtual void DeInit() { }
		public void OnExitPool(SatelliteUsableDefinition definition, SatelliteUsableBehaviour satelliteBehaviour) { }
		public void OnExitPool(SatelliteUsableDefinition definition, SatelliteUsableBehaviour satelliteBehaviour, KartComposite kartComposite, int groupId, int sequenceId) { }
		public virtual void OnEnterPool() { }
		protected virtual void DeSpawn(bool destroyWithVFX) { }
		public virtual void Update(IUpdateParams updateParams) { }
		public virtual void Use() { }
		private PostProcessingEffectBehaviour TryGetPostProcessingBehaviour() { return default; }
		private void OnTearDownParamsInternal() { }
	}
}
