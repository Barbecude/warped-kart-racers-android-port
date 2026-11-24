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

namespace Atlas.Gameplay.Player
{
	public class GameContextPlayerManager
	{
		private ActorManager _actorManager;
		private GameContextBase _gameContext;
		private Network _network;
		private GameContextPlayer[] _players;
		private PlayerRankingPair[] _playerRanking;
		private bool _eventCompleted;
		private AtlasAudioManager _audioManager;
		private GameContextPlayerEvents.UsablePickedUpDelegate OnUsablePickedUp;
		private GameContextPlayerEvents.PlayerDelegate OnUsablePickupCancelled;
		private GameContextPlayerEvents.UsableActionDelegate OnUsableAttached;
		private GameContextPlayerEvents.UsableActionDetachDelegate OnUsableDetached;
		private GameContextPlayerEvents.UsableActionDelegate OnUsableUsed;
		private GameContextPlayerEvents.PlayerDelegate OnBeforeRespawn;
		private GameContextPlayerEvents.PlayerDriftButtonStateDelegate OnDriftButtonStateChanged;
		private GameContextPlayerEvents.UsableHitPlayerDelegate OnUsableHitPlayer;
		private GameContextPlayerEvents.UsableHitShieldDelegate OnUsableHitShield;
		private GameContextPlayerEvents.UsableHoppedOverDelegate OnUsableHoppedOver;
		private GameContextPlayerEvents.SplatDelegate PlaySplat;
		private GameContextPlayerEvents.SplatDelegate StopSplat;
		public IList<GameContextPlayer> Players { get => default; }
		public IReadOnlyList<GameContextPlayer> PlayersReadOnly { get => default; }
		public List<GameContextPlayer> AIPlayers { get => default; }
		public void FireOnUsablePickedUp(GameContextPlayer player, int shuffleTimeMs) { }
		public void FireOnUsablePickedUpCancelled(GameContextPlayer player) { }
		public void FireOnUsableAttached(GameContextPlayer player, UsableDefinition usable, int usesRemaining) { }
		public void FireOnUsableDetached(GameContextPlayer player, UsableDefinition usable, int usesRemaining, bool immediate) { }
		public void FireOnUsableUsed(GameContextPlayer player, UsableDefinition usable, int usesRemaining) { }
		public void FireOnBeforeRespawn(GameContextPlayer player) { }
		public void FireOnDriftButtonStateChanged(GameContextPlayer player, bool buttonState) { }
		public void FireOnUsableHitPlayer(GameContextPlayer hitPlayer, GameContextPlayer throwingPlayer, UsableDefinition projectile) { }
		public void FireOnUsableHitShield(GameContextPlayer hitPlayer, GameContextPlayer throwingPlayer, UsableDefinition usable, UsableDefinition shieldDefinition) { }
		public void FireOnUsableHoppedOver(GameContextPlayer gameContextPlayer, UsableType usableType) { }
		public void InvokePlaySplat(string id, bool loop) { }
		public void InvokeStopSplat(string id) { }
		public GameContextPlayer GetPlayerFromKartComposite(KartComposite kartComposite) { return default; }
		public void Update() { }
		public void DeInit() { }
		public GameContextPlayer GetNthPlacedPlayer(int placement) { return default; }
		public GameContextPlayer GetLocalGameContextPlayer() { return default; }
		private void OnEventResults(NetworkEventResult results) { }
		private void SortPlayers() { }
		public int GetAIPlacement(GameContextPlayer player) { return default; }
		public GameContextPlayer GetNthPlacedAI(int placement) { return default; }
		public GameContextPlayer GetLastHumanPlayer() { return default; }
		public GameContextPlayer GetLocalHumanPlayer() { return default; }
		private void UpdatePlayerTypeArrays() { }
		private int GetPlacementIndex(GameContextPlayer player) { return default; }
		private void OnGameModeStarted(NetworkGameMode gameMode) { }
		private void SetStartTime(NetworkSessionTime time) { }
	}
}
