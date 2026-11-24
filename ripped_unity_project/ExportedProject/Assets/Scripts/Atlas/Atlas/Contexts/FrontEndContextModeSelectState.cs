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
	public class FrontEndContextModeSelectState : State<FrontEndContextModeSelectState.ModeSelectStateData, FrontEndContextModeSelectState.ModeSelectTransitionData>
	{
		private AtlasUIManager _uiManager;
		private TopBarManager _topBarManager;
		private AtlasDefinitions _atlasDefinitions;
		private FrontEndScene _frontEndScene;
		private ServicesManager _servicesManager;
		private MessageBoxManager _messageBoxManager;
		private SaveManager _saveManager;
		private MatchMakingManager _matchMakingManager;
		private TransitionManager _transitionManager;
		private LeagueManager _leagueManager;
		private LeagueModeUIManager _leagueUIManager;
		private UnityEvent _joinGroupFailed;
		public void Init(DependencyManager dependencyManager, FrontEndScene frontEndScene) { }
		protected virtual void OnEnter() { }
		protected virtual void OnUpdate(IUpdateParams updateParams) { }
		protected virtual void OnExit() { }
		protected virtual void OnDeInit() { }
		private bool ShowModeSelect() { return default; }
		private bool BackToModeSelect() { return default; }
		private void CheckAndProceedToMultiplayerModeSelect() { }
		private bool MultiplayerModeSelected() { return default; }
		private void CreateRoom() { }
		private void OnCreateRoomFailed(ErrorCode errorCode) { }
		private void ShowPlayWithFriendsJoinScreen() { }
		private void ShowPlayWithFriendsJoinScreen(string roomCode) { }
		private void SetPWFDefaultEventInfo() { }
		private void TryJoinRoom(string roomCode) { }
		private void OnGroupJoined(Group group) { }
		private void OnJoinRoomFailed(ErrorCode errorCode) { }
		private void EndJoinOrCreateGroup() { }
		private void GameTypeSelected(GameType gameType, DefinitionID mode) { }
		private void MoveToLoadoutState() { }
		private void MoveToSingleplayerState() { }
		private void MoveToPlayWithFriendsState() { }
		private bool MoveToSettingsState() { return default; }
		private bool ShowGameCenterOverlay() { return default; }
		private bool CheckAndWarnIfMultiplayerIsUnavailable() { return default; }
		private void RequestMultiplayerConsent() { }
		private void MultiplayerConsentGiven() { }
	}
}
