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
	public class RewardScreen : AtlasScreen<RewardScreenViewBehaviour, RewardScreen.TransitionData>
	{
		private static readonly DefinitionID FTUEStage_4_SinglePlayerRewardsID;
		private static readonly DefinitionID FTUEStage_10_RankUpID;
		private static readonly DefinitionID FTUEStage_11_RankUpRewardID;
		private AssetDefinition _loadOutDefinition;
		private AtlasShaders _atlasShaders;
		private AssetManager _assetManager;
		private MaterialDuplicator _toonMaterialDuplicator;
		private AssetManagerHandle _loadingAssetHandle;
		private LightWorldTransformSample _lightWorldTransformSample;
		private GameObject _instantiatedAsset;
		private Transform _assetParentTransform;
		private float _newItemTimer;
		private AssetManagerHandle _rewardDropAssetHandle;
		private GameObject _rewardDropRootObject;
		private Animator _rewardDropAnimator;
		private bool _isRunningRewardDrop;
		private bool _boxHasOpened;
		private FrontEndScene _frontEndScene;
		private GenericFrontEndSubsceneBehaviour _rewardsSubscene;
		protected virtual void OnBeforeEnter() { }
		protected virtual void OnAfterEnter() { }
		protected virtual void OnAfterExit() { }
		protected virtual void OnUpdate(float dt) { }
		private void RunBoxDrop() { }
		private void PreloadReward() { }
		private void ShowIPPlane() { }
		private void ShowReward() { }
		private void OnSkipTapped() { }
		private void EndOfNewItem() { }
		private void ReturnToPreviousScreen() { }
		private void InstantiateAndAnimateReward() { }
		private void AnimateReward() { }
		private void PlayRewardTweenUp(Transform rootTransform) { }
	}
}
