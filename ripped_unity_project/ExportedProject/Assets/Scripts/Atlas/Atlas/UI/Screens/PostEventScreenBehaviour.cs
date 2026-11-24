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
	public class PostEventScreenBehaviour : AtlasUIScreenBehaviour
	{
		[SerializeField] private PostEventScreenBehaviour.PostEventSettings _postEventSettings;
		[SerializeField] private TMP_Text _awardDescription;
		[SerializeField] private GameObject _placementAwardContainer;
		[SerializeField] private TMP_Text _placementDescription;
		[SerializeField] private Image _placementAwardImage;
		[SerializeField] private GameObject _challengeAwardContainer;
		[SerializeField] private GameObject _starsAwardContainer;
		[SerializeField] private GameObject _dailyChallengeAwardContainer;
		[SerializeField] private GameObject _goldMedalAwardContainer;
		[SerializeField] private GameObject _silverMedalAwardContainer;
		[SerializeField] private GameObject _bronzeMedalAwardContainer;
		[SerializeField] private GameObject _noMedalAwardContainer;
		[SerializeField] private UIXPBehaviour _awardXPBehaviour;
		[SerializeField] private UIXPBehaviour _pointerXPBehaviour;
		[SerializeField] private GameObject _pointerXPParent;
		[SerializeField] private SlantFillBar _fillBar;
		[SerializeField] private UIRewardBehaviour _reward;
		[SerializeField] private UIAtlasButton _playAgainButton;
		[SerializeField] private CharacterRepresentationViewBehaviour _characterName;
		[SerializeField] private Animator _characterRankUpAnimator;
		[SerializeField] private Image _nextCharacterRankIcon;
		[SerializeField] private CanvasGroup _infoBoxCanvasGroup;
		[SerializeField] private RectTransform _infoBoxParent;
		[SerializeField] private RectTransform _infoTargetLeft;
		[SerializeField] private RectTransform _infoTargetCentre;
		[SerializeField] private RectTransform _infoTargetRight;
		[SerializeField] private CanvasGroup _xpCanvasGroup;
		[SerializeField] private RectTransform _xpParent;
		[SerializeField] private RectTransform _xpIconOnBar;
		[SerializeField] private UIAtlasButton _skipButton;
		[SerializeField] private DailyChallengesWidgetBehaviour _dailyChallengesWidgetBehaviour;
		public PostEventScreenBehaviour.PostEventSettings Settings { get => default; }
		public TMP_Text AwardDescription { get => default; }
		public GameObject PlacementAwardContainer { get => default; }
		public TMP_Text PlacementDescription { get => default; }
		public Image PlacementAwardImage { get => default; }
		public GameObject ChallengeAwardContainer { get => default; }
		public GameObject StarsAwardContainer { get => default; }
		public GameObject DailyChallengeAwardContainer { get => default; }
		public GameObject GoldMedalAwardContainer { get => default; }
		public GameObject SilverMedalAwardContainer { get => default; }
		public GameObject BronzeMedalAwardContainer { get => default; }
		public GameObject NoMedalAwardContainer { get => default; }
		public UIXPBehaviour AwardXPBehaviour { get => default; }
		public UIXPBehaviour PointerXPBehaviour { get => default; }
		public GameObject PointerXPParent { get => default; }
		public SlantFillBar FillBar { get => default; }
		public UIRewardBehaviour Reward { get => default; }
		public UIAtlasButton PlayAgainButton { get => default; }
		public CharacterRepresentationViewBehaviour CharacterName { get => default; }
		public Animator CharacterRankUpAnimator { get => default; }
		public Image NextCharacterRankIcon { get => default; }
		public CanvasGroup InfoBoxCanvasGroup { get => default; }
		public RectTransform InfoBoxParent { get => default; }
		public RectTransform InfoTargetLeft { get => default; }
		public RectTransform InfoTargetCentre { get => default; }
		public RectTransform InfoTargetRight { get => default; }
		public CanvasGroup XpCanvasGroup { get => default; }
		public RectTransform XpParent { get => default; }
		public RectTransform XpIconOnBar { get => default; }
		public UIAtlasButton SkipButton { get => default; }
		public DailyChallengesWidgetBehaviour DailyChallengesWidgetBehaviour { get => default; }
	}
}
