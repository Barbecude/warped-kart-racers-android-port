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
	public class PostEventScreen : AtlasScreen<PostEventScreenBehaviour, PostEventScreen.TransitionData>
	{
		public enum RewardStage
		{
			Placement = 0,
			DailyChallenges = 1,
			Exit = 2,
		}
		private static readonly int RankUpNothingToBronzeAnimTriggerHash;
		private static readonly int RankUpBronzeToSilverAnimTriggerHash;
		private static readonly int RankUpSilverToGoldAnimTriggerHash;
		private static readonly DefinitionID FTUEStage_9_CharacterProgress_ID;
		private static readonly DefinitionID FTUEStage_CharacterProgress_2_ID;
		private static readonly DefinitionID FTUEStage_17_DailyChallenges_ID;
		private const int InvalidIndex = -1;
		private CharacterDefinition _characterDefinition;
		private MetagameDefinition _metagameDefinition;
		private FrontEndScene _frontEndScene;
		private TransitionManager _transitionManager;
		private float _countDownToNextAward;
		private bool _awardShowing;
		private float _awardShowingTimer;
		private bool _waitingForRankUpAnimatorToFinish;
		private bool _rewardSequenceRequested;
		private uint _targetXP;
		private int _nextRankXP;
		private int _nextRankIndex;
		private int _currentRankXP;
		private int _currentRankIndex;
		private DefinitionID _nextRewardID;
		private bool _haveAward;
		private UnlockManager.XPAward.Award _award;
		private uint _characterXPBeforeAward;
		private float _pauseBeforeFirstAward;
		private bool _awardSequenceEnded;
		private bool _waitingForTransition;
		private Sequence _currentSequence;
		private bool _tweenSequenceAnimating;
		private PostEventScreen.RewardStage _rewardStage;
		private bool _skipPressed;
		private AudioEvent _audioRank1Event;
		private AudioEvent _audioRank2Event;
		private AudioEvent _audioRank3Event;
		protected virtual void OnBeforeEnter() { }
		protected virtual void OnAfterEnter() { }
		protected virtual void OnAfterExit() { }
		private bool TryGetNextAward() { return default; }
		private void OnSkipTapped() { }
		private void StartAward(UnlockManager.XPAward.Award award) { }
		private void HideAward() { }
		protected virtual void OnUpdate(float dt) { }
		private void PlacementAwardSequenceEnded() { }
		private void StartDailyChallengeSequence() { }
		private void AllowExit() { }
		private void PlayAgainPressed() { }
		private bool ExitPressed() { return default; }
	}
}
