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
	public class RewardScreenViewBehaviour : AtlasUIScreenBehaviour
	{
		public enum State
		{
			None = 0,
			CharacterRankUp = 1,
			Rewards = 2,
		}
		[SerializeField] private Canvas _rootCanvas;
		[SerializeField] private TMP_Text _titleText;
		[SerializeField] private TMP_Text _titleTextMeasurement;
		[SerializeField] private UIAtlasButton _skipButton;
		[SerializeField] private TMP_Text _rewardNameText;
		[SerializeField] private UIRewardBehaviour _rewardIcon;
		[SerializeField] private IPRepresentationViewBehaviour _brandIcon;
		[SerializeField] private AssetReferenceGameObject _otherRewardDropPrefabAddress;
		[SerializeField] private AssetReferenceGameObject _characterRewardDropPrefabAddress;
		public TMP_Text TitleText { get => default; }
		public TMP_Text TitleTextMeasurement { get => default; }
		public UIAtlasButton SkipButton { get => default; }
		public TMP_Text RewardNameText { get => default; }
		public UIRewardBehaviour RewardIcon { get => default; }
		public IPRepresentationViewBehaviour BrandIcon { get => default; }
		public AssetReferenceGameObject OtherRewardDropPrefabAddress { get => default; }
		public AssetReferenceGameObject CharacterRewardDropPrefabAddress { get => default; }
		public void SetContentVisible(bool visible) { }
	}
}
