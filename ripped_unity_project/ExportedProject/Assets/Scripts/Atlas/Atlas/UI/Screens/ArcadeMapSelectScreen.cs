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
	public class ArcadeMapSelectScreen : AtlasScreen<ArcadeMapSelectBehaviour, ArcadeMapSelectScreen.TransitionData>
	{
		private static readonly DefinitionID FTUEStage_ID;
		private static readonly string ToolTipLocalisationKey;
		private AtlasDefinitions _definitions;
		private AssetManager _assetManager;
		private LocalisationManager _localisationManager;
		private SeasonsManager _seasonsManager;
		private SaveManager _saveManager;
		private GameObject _optionPrefab;
		private AssetManagerHandle _prefabHandle;
		private GameObject _lastSelected;
		private FrontEndScene _frontEndScene;
		private ArcadeDefinition _arcadeDefinition;
		private AssetDefinition[] _rewards;
		private UnlockManager _unlockManager;
		private bool _canCheckForMissedRewards;
		private bool _hasCheckedRewards;
		private bool _mapSelected;
		private UIAtlasButton _lastMapButtonSelected;
		private int[] _medalCount;
		private int[] _medalAndAboveCount;
		private void ShowToolTips() { }
		private void ShowInfoToolTips() { }
		protected virtual void OnBeforeEnter() { }
		protected virtual void OnStartEnter() { }
		protected virtual IEnumerator OnBeforeEnterCoroutine() { return default; }
		protected virtual void OnAfterEnter() { }
		protected virtual bool RequiresBeforeEnterCoroutine() { return default; }
		private IEnumerator BuildOptions() { return default; }
		private UIAtlasButton BuildMapPanels() { return default; }
		private bool ContinuePressed() { return default; }
		private void OnOptionSelected(UIAtlasButton uIAtlasButton, string contextName, string mapId) { }
		protected virtual void OnAfterExit() { }
		private void AnimateMapPanels() { }
		private bool HasObtainedMedalNow(MapDefinition map, int eventIndex) { return default; }
		private bool HasGoldMedal(MapDefinition map, int index) { return default; }
		protected virtual void OnUpdate(float dt) { }
		private void RunRewardSequencesIfUnseen() { }
		private bool RunRewardSequenceIfRewardUnseen(int index) { return default; }
		private void SetRewardPanelsAndAnimate() { }
		private int SetAndAnimateReward(int rewardIndex, int delayCount, ArcadeEventDefinition.Medal medal) { return default; }
		private IEnumerator DelayedCheckForMissingRewards(int delayCount) { return default; }
		private Action OnRewardPanelClicked(int rewardID, bool isUnlocked, UIArcadeRewardBehaviour[] rewards) { return default; }
	}
}
