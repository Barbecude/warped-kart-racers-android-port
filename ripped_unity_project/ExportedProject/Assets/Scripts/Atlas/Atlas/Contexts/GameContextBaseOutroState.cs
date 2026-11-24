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
	public class GameContextBaseOutroState : State
	{
		private GameContextBase _gameContextBase;
		private bool _showPoints;
		private bool _showTimer;
		private AtlasUIManager _uiManager;
		private MusicManager _musicManager;
		private AtlasAudioManager _audioManager;
		private AtlasStats _atlasStats;
		private SaveManager _saveManager;
		private AchievementManager _achievementManager;
		private AtlasDefinitions _atlasDefinitions;
		private NetworkResultsUpdater _resultsUpdater;
		private StateMachine _stateMachine;
		private Network _network;
		private OutroSequenceBeginRoundCompleteState _beginRoundCompleteState;
		private OutroSequenceShowPlacementsState _showPlacementsState;
		private OutroSequenceEndGameState _endGameState;
		private bool _isArcadeEvent;
		public bool ShowPoints { get => default; set { } }
		public bool ShowTimer { get => default; set { } }
		public bool IsArcadeEvent { get => default; set { } }
		public StateMachine StateMachine { get => default; }
		public OutroSequenceBeginRoundCompleteState BeginRoundCompleteState { get => default; }
		public OutroSequenceShowPlacementsState ShowPlacementsState { get => default; }
		public void Init(GameContextBase gameContextBase, NetworkResultsUpdater resultsUpdater, KartFollowCamera kartFollowCamera, DependencyManager dependencyManager) { }
		private void OnGameModeUpdated(NetworkGameMode networkGameMode) { }
		protected virtual void OnEnter() { }
		protected virtual void OnUpdate(IUpdateParams updateParams) { }
		protected virtual void OnFixedUpdate(IUpdateParams updateParams) { }
		protected virtual void OnExit() { }
		protected virtual void OnDeInit() { }
		private void TransitionToBeginRoundCompleteState() { }
		private void TransitionToShowPlacementState() { }
	}
}
