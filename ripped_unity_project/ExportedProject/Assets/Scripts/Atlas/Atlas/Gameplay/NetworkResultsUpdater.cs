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

namespace Atlas.Gameplay
{
	public class NetworkResultsUpdater
	{
		private Network _network;
		private ServicesManager _services;
		private GameContextPlayerManager _playerManager;
		private GameContextBase _gameContext;
		private GameContextDefinition _gameContextDefinition;
		private NetworkSessionTime _raceEndedTime;
		private int _localPlayerFinishPosition;
		private bool _isGameModeFinished;
		private GameContextPlayer[] _finishedGameContextPlayers;
		public uint GetStarsAwardedForPosition(int position) { return default; }
		public uint GetStarsAwardedForDnf() { return default; }
		private static bool EventStandingRaceComparison(NetworkEventStanding first, NetworkEventStanding second) { return default; }
		private static bool EventStandingBattleComparison(NetworkEventStanding first, NetworkEventStanding second) { return default; }
		public void Init(DependencyManager dependencyManager, GameContextPlayerManager playerManager, GameContextBase gameContext, GameContextDefinition gameContextDefinition) { }
		public void DeInit() { }
		public int GetLocalPlayerFinishPosition() { return default; }
		public NetworkSessionTime GetRaceEndedTime() { return default; }
		private void OnHostMigrationSynced(NetworkSessionTime _, uint delta) { }
		private void OnHostAllFinishDataReceived() { }
		private void OnEventResults(NetworkEventResult results) { }
		private void CallIndividualResults() { }
		private bool IsSinglePlayerRace() { return default; }
		private bool IsLeagueGame() { return default; }
	}
}
