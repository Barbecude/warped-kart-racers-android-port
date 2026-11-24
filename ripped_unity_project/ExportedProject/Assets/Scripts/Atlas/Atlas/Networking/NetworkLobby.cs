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

namespace Atlas.Networking
{
	public class NetworkLobby
	{
		private ServicesManager _services;
		private NetworkHostConfig _hostConfig;
		private NetworkLobbySessionData _sessionData;
		private bool _clearNextFrame;
		private bool _singlePlayerFallback;
		private GameType _lobbyGameType;
		private Network _parent;
		private bool _updateHostSessionDataOnUpdate;
		private bool _hasValidHostConfig;
		private bool _calledReady;
		private bool _ownSessionDataHasSize;
		private bool _matchStarted;
		public FixedString64Bytes LastSessionId { get => default; set { } }
		public bool HasMatchStarted { get => default; }
		public List<NetworkLobbyPlayerData> RemotePlayers { get => default; set { } }
		public NetworkLobbyPlayerData LocalPlayer { get => default; set { } }
		public List<NetworkPlayer> AiPlayers { get => default; set { } }
		public void Init(DependencyManager dependencyManager, Network parent) { }
		public void DeInit() { }
		public void Update() { }
		public void Clear(bool continuation) { }
		public void EnableSinglePlayerFallback(bool enable) { }
		public bool IsSinglePlayerFallbackEnabled() { return default; }
		public bool IsHostConfigValid() { return default; }
		public NetworkHostConfig GetHostConfig() { return default; }
		public void SetHostConfig(NetworkHostConfig networkHostConfig) { }
		public void SetLocalPlayerVisuals(NetworkLoadout loadOut) { }
		public NetworkLoadout GetLoadoutFromSyncId(uint syncId) { return default; }
		private void GenerateFallbackSyncIds() { }
		public GameType GetLobbyGameType() { return default; }
		public void SetLobbyGameType(GameType type) { }
		public void SetAi(int amountOfAi, bool isHost) { }
		public void SetLocalPlayerInLobby(bool isInLobby) { }
		public bool AllPlayersInLobby() { return default; }
		private string FormatDisplayName(string name) { return default; }
		private void OnMatchStarted(Match match) { }
		private NetworkPlayer SetNetworkPlayerOnLobbyData(Player player) { return default; }
		private void OnSessionPlayerConnected(Player player) { }
		private void OnSessionPlayerDisconnected(Player player) { }
		private void OnSessionPlayerActive(Player player) { }
		private void OnGroupLeaderChanged(Player _) { }
		private void OnSessionPlayerInactive(Player player) { }
		private void OnSessionOtherPlayerDataUpdated(Player player) { }
		private void VerifyOwnSessionData() { }
		private void ForceUpdateCachedPlayer() { }
		private void OnPlayerAuthenticated(Player player) { }
		private void OnLocalPlayerAuthenticated(Player player) { }
		private void OnSessionJoined() { }
		private void SetLocalPlayerReady(bool ready) { }
		public void ResetReady() { }
		private void OnMatchLeft() { }
	}
}
