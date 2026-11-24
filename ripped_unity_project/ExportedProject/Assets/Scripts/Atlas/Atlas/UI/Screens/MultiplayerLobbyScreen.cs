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

namespace Atlas.UI.Screens
{
	public class MultiplayerLobbyScreen : AtlasScreen<MultiplayerLobbyScreenBehaviour, MultiplayerLobbyScreen.TransitionData>
	{
		public enum LobbyState
		{
			None = 0,
			MatchMaking = 1,
			PreGameGroup = 2,
			StartingMatch = 3,
		}
		private const int LobbySettingsScreenLayer = 5;
		private static readonly DefinitionID FTUEStage_ID;
		private static readonly DefinitionID FTUEStage_PWF_ID;
		private Network _network;
		private ServicesManager _servicesManager;
		private LocalisationManager _localisationManager;
		private MatchMakingManager _matchMakingManager;
		private GenericFrontEndSubsceneBehaviour _genericFrontEndSubsceneBehaviour;
		private bool _hasUpdatedSubscene;
		private bool _enteredLockedState;
		private int _cachedPlayerCount;
		private MultiplayerLobbyScreen.LobbyState _cachedLobbyState;
		private bool _hasBegunMM;
		private FrontEndScene _frontEndScene;
		protected virtual void OnBeforeEnter() { }
		protected virtual void OnBeforeExit() { }
		protected virtual void OnAfterExit() { }
		protected virtual void OnUpdate(float dt) { }
		public void SetConnecting(bool enabled) { }
		private void UpdateState(float dt) { }
		public void ClearLobby(bool hideKarts) { }
		public void AddOrUpdateLobbyPlayer(uint id, string name, NetworkLoadout loadout, bool isLocalPlayer, bool isGroupLeader, bool isAway) { }
		private void SetStatusTextFromState() { }
		private void UpdateAllLobbyPlayers(bool forceAbleToBeginStatus) { }
		private void CheckInvalidPlayers() { }
		private bool IsLoadoutValid(NetworkLoadout loadout) { return default; }
		public void RemoveLobbyPlayer(uint id) { }
		private int GetLobbyPlayerIndex(uint id) { return default; }
		private void OnLockPlayersIntoLobby() { }
		private void StartPortalling(float startTime) { }
		private void UpdateSpawnTimes(float localTime) { }
		private void CloseLobbySettingsScreen() { }
		private void OnLobbySettingsButtonPressed() { }
		private void OnRequestCloseLobbySettingsScreen() { }
		private void OnLobbySettingsScreenFinishedExiting() { }
		private void SetPlayerCountText() { }
		private void OnGroupLeaderChangedJoined(Player player) { }
		private void SetHostOptionsVisuals(bool locked) { }
	}
}
