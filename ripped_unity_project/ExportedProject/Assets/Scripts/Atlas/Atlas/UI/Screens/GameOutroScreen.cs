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
	public class GameOutroScreen : AtlasScreen<GameOutroScreenBehaviour, GameOutroScreen.TransitionData>
	{
		private OutroSequenceBeginRoundCompleteState _beginRoundCompleteState;
		private OutroSequenceShowPlacementsState _showPlacementsState;
		private bool _showPoints;
		private bool _showTimer;
		private bool _hasWaitTimerElapsed;
		private bool _wasAutoContinued;
		private GameContextPlayerManager _playerManager;
		private AtlasDefinitions _definitions;
		private Network _network;
		private NetworkResultsUpdater _resultsUpdater;
		private UIChallengeController _challengeController;
		private GameOutroScreen.TransitionData _transitionData;
		private int _finishingPosition;
		private int _pointsScored;
		private bool _isBattleMode;
		private bool _isRaceMode;
		private bool _isLeagueMode;
		private bool _playerInfoFinishedEntryAnimation;
		private float _playerInfoExitAnimationStartDelayTimer;
		private bool _playerInfoExitAnimationPlayingOrPlayed;
		private bool _placementSequenceEnterStarted;
		private bool _placementSequenceEnterComplete;
		private bool _endButtonShown;
		private int _lastTimeLeftMillis;
		private UITweenLeaf[] _reusableUITweenLeaves;
		private int _previousResultsCount;
		private const int _reusableUITweenLeavesCapacity = 12;
		protected virtual void OnBeforeEnter() { }
		protected virtual void OnAfterExit() { }
		private void OnEnterOutroState() { }
		private void SetMultiplayerScore(int position) { }
		private void OnExitOutroState() { }
		protected virtual void OnUpdate(float dt) { }
		public virtual void OnInputFamilyChanged(InputFamily family, InputGlyphMapping[] glyphMappings) { }
		private void OnEntryAnimationComplete() { }
		private void OnCompletePlayerFinishedExitAnimation() { }
		private bool IsResultsAnimationComplete() { return default; }
		private void StartShowPlacement() { }
		private void OnCompleteShowResultsAnim() { }
		private void EmptyReusableTweenLeaves() { }
		private void UpdateLeaderboardEntry(int index, NetworkResultsStanding result) { }
		private LeaderboardEntryBehaviour GetInactivateNonLocalHumanPlayerEntry() { return default; }
		private bool TryGetLeaderboardEntry(Transform transform, out LeaderboardEntryBehaviour entry) { entry = default; return default; }
		private void SetLeaderboardEntry(LeaderboardEntryBehaviour entry, NetworkResultsStanding result) { }
		private Sprite GetCrown(int position) { return default; }
		private string GetFinishTimeText(NetworkResultsStanding result) { return default; }
		private void ToggleLeaderboardEntry(LeaderboardEntryBehaviour entry, bool visible) { }
		private void SetFinishPositionTextAndCrown(int position) { }
		private bool EndGame() { return default; }
		private void OnPlayPlacementSequenceExitComplete() { }
		private void OnPreEnterBeginRoundCompleteState() { }
	}
}
