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

namespace Atlas.League
{
	public class LeagueModeUIManager
	{
		private FrontEndContextSingleplayerState.SingleplayerStateData _stateData;
		private FrontEndContextSingleplayerState _state;
		private AtlasDefinitions _atlasDefinitions;
		private FrontEndScene _frontEndScene;
		private AtlasUIManager _uiManager;
		private TopBarManager _topBarManager;
		private LocalisationManager _localisationManager;
		private SaveManager _saveManager;
		private LeagueManager _leagueManager;
		private UnlockManager _unlockManager;
		private SeasonsManager _seasonsManager;
		private TransitionManager _transitionManager;
		private TopBarManager.TopBarDelegate.ButtonPressed _backButtonPressedDelegate;
		public void Init(DependencyManager dependencyManager, FrontEndScene frontEndScene, FrontEndContextSingleplayerState.SingleplayerStateData stateData, FrontEndContextSingleplayerState state, TopBarManager.TopBarDelegate.ButtonPressed backButtonPressedDelegate) { }
		public bool ShowLeagueWeeklySchedule(DefinitionID mapId) { return default; }
		private void LeagueDaySelected(string contextName, string mapId) { }
		public bool ShowLeaderboardPostEvent(string mapId) { return default; }
		private void ShowLeaderboardWithBackButton() { }
		public void DoPodiumSequence() { }
		private void ShowPodium() { }
		private void ShowPromotion() { }
		private void ShowReward() { }
		public void ShowStarsConversion() { }
		private void ShowLeaderboardAfterPodium() { }
	}
}
