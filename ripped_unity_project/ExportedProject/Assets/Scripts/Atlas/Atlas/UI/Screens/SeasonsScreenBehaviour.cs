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
	public class SeasonsScreenBehaviour : AtlasUIScreenBehaviour
	{
		[SerializeField] private SeasonRepresentationViewBehaviour _seasonRepresentation;
		[SerializeField] private SlantFillBar _fillBar;
		[SerializeField] private UIRewardBehaviour _reward;
		[SerializeField] private UIXPBehaviour _pointerXPBehaviour;
		[SerializeField] private GameObject _pointerXPParent;
		[SerializeField] private TMP_Text _awardDescription;
		[SerializeField] private UIXPBehaviour _awardXPBehaviour;
		[SerializeField] private Image _modeSprite;
		[SerializeField] private TMP_Text _timeTextTitle;
		[SerializeField] private PostEventScreenBehaviour.PostEventSettings _postEventSettings;
		[SerializeField] private UIAtlasButton _skipButton;
		[SerializeField] private CanvasGroup _infoBoxCanvasGroup;
		[SerializeField] private RectTransform _infoBoxParent;
		[SerializeField] private RectTransform _starXPParent;
		[SerializeField] private AtlasTweenAnimations.WiggleParams _starWiggleParams;
		[SerializeField] private GameObject _seasonSummaryParant;
		[SerializeField] private AtlasTweenAnimations.SpinZoomParams _seasonSummarySpinZoomParams;
		[SerializeField] private SeasonProgressPanelBehaviour _seasonProgressPanelBehaviour;
		[SerializeField] private CanvasGroup _xpCanvasGroup;
		[SerializeField] private RectTransform _xpParent;
		[SerializeField] private RectTransform _xpIconOnBar;
		public SeasonRepresentationViewBehaviour SeasonRepresentation { get => default; }
		public SlantFillBar FillBar { get => default; }
		public UIRewardBehaviour Reward { get => default; }
		public UIXPBehaviour PointerXPBehaviour { get => default; }
		public GameObject PointerXPParent { get => default; }
		public TMP_Text AwardDescription { get => default; }
		public UIXPBehaviour AwardXPBehaviour { get => default; }
		public Image ModeSprite { get => default; }
		public TMP_Text TimeTextTitle { get => default; }
		public PostEventScreenBehaviour.PostEventSettings Settings { get => default; }
		public UIAtlasButton SkipButton { get => default; }
		public CanvasGroup InfoBoxCanvasGroup { get => default; }
		public RectTransform InfoBoxParent { get => default; }
		public CanvasGroup XpCanvasGroup { get => default; }
		public RectTransform XpParent { get => default; }
		public RectTransform XpIconOnBar { get => default; }
		public RectTransform StarXPParent { get => default; }
		public AtlasTweenAnimations.WiggleParams StarWiggleParams { get => default; }
		public GameObject SeasonSummaryParant { get => default; }
		public AtlasTweenAnimations.SpinZoomParams SeasonSummarySpinZoomParams { get => default; }
		public SeasonProgressPanelBehaviour SeasonProgressPanelBehaviour { get => default; }
	}
}
