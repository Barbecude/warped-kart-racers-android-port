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
	public class GameInProgressScreen : AtlasScreen<GameInProgressScreenBehaviour, GameInProgressScreen.TransitionData>
	{
		private GameInProgressScreen.KartIndicatorData _crownPlayerData;
		private GameInProgressScreen.KartIndicatorData _localPlayerIndicatorData;
		private int _numOfKartIndicators;
		private float _kartIndicatorMaxDistanceSquared;
		private float _kartIndicatorMinDistanceSquared;
		private float _kartIndicatorHalfMaxFOVRadians;
		private float _kartIndicatorRefreshRate;
		private bool _kartIndicatorDataUpdated;
		private Vector3 _kartIndicatorWorldOffset;
		private float _miniLeaderboardUpdateTimer;
		private int _kartIndicatorRaycastRegulator;
		private int _kartIndicatorRaycastRegulatorIndex;
		private bool _isBattleMode;
		private int _maxNumIndicatorsActive;
		private Network _network;
		private InputManager _inputManager;
		private GameContextPlayer _localPlayer;
		private int _numberOfPositionsToShow;
		private int _lastSeenLapNumber;
		private int _lastSeenLapCount;
		private bool _wasPaused;
		private UIChallengeController _challengeController;
		private bool _onAttachedUsableCTAEnabled;
		private GameType _gameType;
		private bool _allowUpdateProgressCount;
		public UIChallengeController ChallengeController { get => default; }
		public FTUEScreenBehaviour FTUEScreenBehaviour { get => default; }
		public bool ForceHideKartIndicator { get => default; set { } }
		public bool ForceHideBattlePoints { get => default; set { } }
		public bool AllowUpdateProgressCount { set { } }
		public void EnableOnAttachedUsableCTA(bool enable) { }
		public void RequestUsableUIChange(UsableType usableType, int quantity, GameInProgressScreenBehaviour.UsableAnimation animation) { }
		protected virtual void OnBeforeEnter() { }
		protected virtual void OnAfterExit() { }
		protected void OnEnterIntroState() { }
		protected void OnEnterInProgressState() { }
		private void SetUpMiniLeaderBoard() { }
		private void UpdateAllMiniLeaderboardPositions(float dt, bool playTweensOnChange) { }
		private void UpdatePlayerPositionBehaviour(GameInProgressScreen.PlayerPositionData playerPositionData, CharacterMetagameData data, bool playTweensOnChange) { }
		protected void OnExitInProgressState() { }
		private void OnPlayerPickedUpUsable(GameContextPlayer player, int shuffleTimeMs) { }
		private void OnPlayerPickUpCancelled(GameContextPlayer player) { }
		private void OnPlayerAttachedUsable(GameContextPlayer player, UsableDefinition usable, int usesRemaining) { }
		private void OnPlayerUsedUsable(GameContextPlayer player, UsableDefinition usable, int usesRemaining) { }
		private void OnPlayerDetachedUsable(GameContextPlayer player, UsableDefinition usable, int usesRemaining, bool immediate) { }
		private void OnPlayerHitByUsable(GameContextPlayer hitPlayer, GameContextPlayer throwingPlayer, UsableDefinition usable) { }
		private void OnDriftButtonStateChanged(GameContextPlayer player, bool newDriftButtonState) { }
		private void PlaySplat(string id, bool loop) { }
		private void StopSplat(string id, bool _) { }
		private bool IsPlayerOnLeaderBoard(GameContextPlayer playerToFind) { return default; }
		public void OnPauseRequested() { }
		protected virtual void OnUpdate(float dt) { }
		private void InitArcade() { }
		private void UpdateArcade() { }
		protected virtual void OnLateUpdate(float dt) { }
		public void SetFrenzy(bool active, int scoreMultiplier, float duration) { }
		public void SetTimerSecondsRemaining(int secsRemaining) { }
		public void SetEnabledHUDElement(HUDElement element, bool active) { }
		public bool IsHUDElementActive(HUDElement challengeProgress) { return default; }
		public void SetInputEnabled(bool enableInputs) { }
		private void OnInputEnabledForLayer(UIScreen screen, int layer, bool enabled) { }
		private void UpdateWeaponIndicator() { }
		private static bool IsWithinViewport(in Vector3 viewPortPosition) { return default; }
		private bool CanSeeTarget(in Vector3 sourcePosition, in Vector3 targetPosition, bool lastResult, bool bypassRegulation) { return default; }
		private void UpdateKartIndicator() { }
		private void UpdateAllKartIndicatorDataRace() { }
		private void UpdateAllKartIndicatorDataBattle() { }
	}
}
