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

namespace Atlas.Contexts
{
	public class FrontEndContextSingleplayerState : State<FrontEndContextSingleplayerState.SingleplayerStateData, FrontEndContextSingleplayerState.SingleplayerTransitionData>
	{
		private static readonly DefinitionID Chapter_Freeplay_1_ID;
		private AtlasUIManager _uiManager;
		private TopBarManager _topBarManager;
		private AtlasDefinitions _atlasDefinitions;
		private ContextManager _contextManager;
		private UnlockManager _unlockManager;
		private LocalisationManager _localisationManager;
		private FrontEndScene _frontEndScene;
		private LeagueModeUIManager _leagueModeUIManager;
		private LeagueManager _leagueManager;
		private SaveManager _saveManager;
		private bool _hasUsedGenericIPOverride;
		private TopBarManager.TopBarDelegate.ButtonPressed _backButtonPressedDelegate;
		public void Init(DependencyManager dependencyManager, FrontEndScene frontEndScene) { }
		protected virtual void OnDeInit() { }
		protected virtual void OnEnter() { }
		private bool ShowOverview(DefinitionID completedCampaignID) { return default; }
		private bool ShowFreeplay() { return default; }
		private bool ShowArcadeMapSelect() { return default; }
		private void SetBackButtonAndTransitionToScreen(string screenId, UIScreenParameters transitionData, TopBarManager.TopBarDelegate.ButtonPressed backPressed) { }
		private void MapSelected(string contextName, string mapId) { }
		private bool ShowFreeplayDifficultyScreen() { return default; }
		private bool ShowArcadeModeSelectScreen() { return default; }
		private void DifficultySelected(DefinitionID freeplayEventDefinition) { }
		private void ArcadeModeSelected(GameType gameType) { }
		public void EnterLoadOutState() { }
		public bool OverviewBackPressed() { return default; }
		public bool ShowCampaign(DefinitionID campaignId, DefinitionID completedChapterID) { return default; }
		private bool BackOutOfEventSelect() { return default; }
		private bool ShowChapter(DefinitionID chapterId) { return default; }
		private bool ShowChapter(DefinitionID chapterId, int selectedEventIndex, int comingFromEventIndex) { return default; }
		private void EventSelectd(DefinitionID eventId) { }
		public static int GetDuration(EventDefinition.EventDuration duration, GameContextDefinition gameContextDefinition) { return default; }
	}
}
