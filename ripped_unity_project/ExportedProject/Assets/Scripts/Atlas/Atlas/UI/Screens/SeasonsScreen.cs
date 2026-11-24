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
	public class SeasonsScreen : AtlasScreen<SeasonsScreenBehaviour, SeasonsScreen.TransitionData>
	{
		public enum RewardStage
		{
			Placement = 0,
			SeasonSummary = 1,
			Exit = 2,
		}
		private static readonly DefinitionID FTUEStage_20_SeasonScreen_1_ID;
		private static readonly DefinitionID FTUEStage_21_SeasonScreen_2_ID;
		private FrontEndScene _frontEndScene;
		private SeasonDefinition _currentSeason;
		private UnlockManager.XPAward.Award _award;
		private Sequence _currentSequence;
		private uint _seasonStarsBeforeAward;
		private uint _targetStars;
		private int _nextRankStars;
		private int _currentRankStars;
		private DefinitionID _nextRewardID;
		private SeasonsScreen.RewardStage _rewardStage;
		private float _countDownToNextAward;
		private bool _haveAward;
		private bool _skipPressed;
		private bool _tweenSequenceAnimating;
		private bool _awardShowing;
		private bool _rewardSequenceRequested;
		private bool _waitingForTransition;
		private bool _awardSequenceEnded;
		private AudioEvent _starsAddedToBarEvent;
		private AudioEvent _audioPanelEvent;
		protected virtual void OnBeforeEnter() { }
		protected virtual void OnAfterEnter() { }
		protected virtual void OnAfterExit() { }
		private void OnSkipTapped() { }
		private bool ExitPressed() { return default; }
		private bool TryGetNextAward() { return default; }
		private void StartAward(UnlockManager.XPAward.Award award) { }
		private float SpinZoomDuration() { return default; }
		private void HideAward() { }
		protected virtual void OnUpdate(float dt) { }
		private void PlacementAwardSequenceEnded() { }
		private void StartSummarySequence() { }
		private void AllowExit() { }
		private void RunRewardSequence() { }
	}
}
