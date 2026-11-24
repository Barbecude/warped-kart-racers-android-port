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
	public class SingleplayerChapterScreen : AtlasScreen<SingleplayerChapterBehaviour, SingleplayerChapterScreen.TransitionData>
	{
		private const float DelayBeforeReward = 0.5;
		private const float DelayBeforeFillingBar = 0.5;
		private static readonly DefinitionID SingleplayerChapterScreenFTUEStage_1_ID;
		private static readonly DefinitionID SingleplayerChapterScreenFTUEStage_2_ID;
		private static readonly DefinitionID RewardScreenFTUEStageID;
		private static readonly DefinitionID FTUEStage_16_UnlockingTheGameChapterScreen_ID;
		private static readonly DefinitionID ChpaterPrologueID;
		private UnlockManager _unlockManager;
		private AtlasDefinitions _atlasDefinitions;
		private FrontEndScene _frontEndScene;
		private DefinitionID _selectedEventId;
		private bool _hasCheckedRewards;
		private bool _requestShowNextBackAfterNoModals;
		private FTUEManager _FTUEManager;
		private FTUEStageDefinition _rewardScreenFTUEStageDefinition;
		private int _totalChallengesCompleted;
		private int _totalChallengesCompletedSeen;
		private bool _isGoingToRewardSequence;
		private float _waitToStartTimer;
		private float _barStationaryTimer;
		protected virtual void OnBeforeEnter() { }
		protected virtual void OnStartEnter() { }
		protected virtual void OnAfterEnter() { }
		protected virtual void OnBeforeExit() { }
		protected virtual void OnAfterExit() { }
		protected virtual void OnUpdate(float dt) { }
		private void FillBarPassedFirstReward() { }
		private void FillBarPassedSecondReward() { }
		private void FillBarPassedThirdReward() { }
		private void FillBarPassedReward(int rewardIndex) { }
		private void ProgressBarAnimationFinished() { }
		private bool ShouldDisableInput() { return default; }
		private bool AreAnyFTUEStageUnlockedButNotComplete() { return default; }
		private void SetReward(UIRewardBehaviour rewardBehaviour, DefinitionID rewardId) { }
		private bool RunRewardSequenceIfRewardUnseen(RewardScreen.TransitionData transitionData) { return default; }
		private bool RunRewardSequenceIfRewardUnseen(DefinitionID rewardID) { return default; }
		private void EventButtonPressed(DefinitionID eventId, int eventIndex) { }
		private void SelectEvent(DefinitionID eventId, int eventIndex) { }
		protected virtual bool CanProgressToNextScreen() { return default; }
		private bool ContinuePressed() { return default; }
	}
}
