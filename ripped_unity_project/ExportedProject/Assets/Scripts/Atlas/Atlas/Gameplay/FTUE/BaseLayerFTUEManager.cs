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
	public abstract class BaseLayerFTUEManager
	{
		public const string PlayerFailureSpawnLocatorIDDefault = "PlayerFailureSpawn";
		protected GameContextBase _gameContextBase;
		protected GameContextBaseInProgressState _inProgressState;
		protected AchievementManager _achievementManager;
		protected GameContextBaseOutroState _outroState;
		protected AtlasStats _stats;
		protected KartComposite _localHumanPlayer;
		protected BaseLayerFTUEDefinition _baseLayerFtueDefinition;
		protected GameInProgressScreen _gameInProgressScreen;
		protected HitVolumeRootBehaviour _hitVolumeRootBehaviour;
		private IdentifiableLocatorBehaviourRoot _identifiableLocatorRoot;
		private BaseLayerPauseManager _baseLayerPauseManager;
		private BaseLayerToolTipManager _baseLayerToolTipManager;
		private BaseLayerSequenceManager _baseLayerSequenceManager;
		private int _currentMaxRetries;
		private int _currentRetries;
		private bool _areRetriesInfinite;
		private int _maxLapPlayerAchieved;
		private bool _challengesActivated;
		private HitVolumeBehaviour _currentlyActiveHitVolume;
		private StringID _activeSectionID;
		private const int SectionStartingCapacity = 3;
		public bool IsPaused { get => default; }
		public static BaseLayerFTUEManager CreateFTUE(GameDefinitions definitions, DefinitionID ftueID, GameContextBase gameContextBase, GameContextBaseInProgressState inProgressState, GameContextBaseOutroState outroState, MapBehaviour mapBehaviour) { return default; }
		public virtual void Init(BaseLayerFTUEDefinition baseLayerFtueDefinition, GameContextBase gameContextBase, GameContextBaseInProgressState inProgressState, GameContextBaseOutroState outroState, MapBehaviour mapBehaviour) { }
		public virtual void DeInit() { }
		public void UnRegisterAllHitVolumeListeners() { }
		public virtual void Update(IUpdateParams updateParams) { }
		public void SetInputsEnabled() { }
		public virtual void OnEnterInProgressScreen(GameInProgressScreen gameInProgressScreen) { }
		public virtual void OnExitInProgressScreen() { }
		public void OnExitInProgressState() { }
		protected void StartSection(StringID sectionID, int numberOfTries, bool infiniteRetries) { }
		protected void SwitchToSection(StringID sectionID, int numberOfTries, bool infiniteRetries) { }
		protected void SwitchToNoSection() { }
		protected void RetrySection() { }
		protected void CallReactions(BaseLayerFTUEDefinition.Reaction reaction) { }
		protected bool IsValidHumanCollision(Collider collider) { return default; }
		protected bool IsWithinMaxRetryLimit() { return default; }
		private void RegisterEnter(Collider collider, HitVolumeBehaviour hitvolumebehaviour) { }
		private void RegisterExit(Collider collider, HitVolumeBehaviour hitvolumebehaviour) { }
		protected BaseLayerFTUEDefinition.Section GetSection(StringID sectionID) { return default; }
		protected BaseLayerFTUEDefinition.Section GetActiveSection() { return default; }
		protected bool IsInSection(StringID sectionID) { return default; }
		private void StartSection(StringID sectionID) { }
		private void EndSection() { }
		private void AddBaseListener(BaseLayerFTUEManager.BaseListenerVolumePair baseListenerVolumePair, HitVolumeBehaviour hitVolume) { }
		protected void RemoveBaseListener(StringID hitVolumeID) { }
		private void OnCollideWithHitTrigger(Collider collider, BaseLayerFTUEDefinition.TriggerPointReaction reaction, HitVolumeBehaviour hitVolume) { }
		private bool CallReactions(KartComposite localHuman, BaseLayerFTUEDefinition.TriggerPointReaction triggerPointReaction) { return default; }
		private bool IsValidHumanCollision(KartComposite localHuman) { return default; }
		private void RespawnHumanPlayerAtLocator(StringID locatorID) { }
		private OnKartRespawnDelegate GetAIRespawnDelegate(GameContextPlayer ai) { return default; }
		private void ResetKartRacePosition(GameContextPlayer player) { }
		private bool AreInTriggerSection(StringID triggerSectionID) { return default; }
		private void ActivateChallengeTrackingLogic() { }
		private bool CanTriggerReaction(BaseLayerFTUEDefinition.TriggerPointReaction reaction, KartComposite localHuman) { return default; }
		private void RespawnPlayerIfBackToStartLine() { }
	}
}
