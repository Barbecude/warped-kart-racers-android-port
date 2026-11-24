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
	public class GameIntroScreenBehaviour : AtlasUIScreenBehaviour
	{
		[SerializeField] private GameObject _countdownGameObject;
		[SerializeField] private GameObject _bannerGameObject;
		[SerializeField] private Animator _bannerAnimator;
		[SerializeField] private UIIrregularElement _bannerBackgroundElement;
		[SerializeField] private MapRepresentationViewBehaviour _mapViewBehaviour;
		[SerializeField] private PickupBoxRepresentationViewBehaviour _pickupBoxViewBehaviour;
		[SerializeField] private RectTransform _arcadeRootTransform;
		[SerializeField] private UIArcadeTimeMedalBehaviour _arcadeTimeMedalBehaviour;
		[SerializeField] private UIArcadeNextMedalBehaviour _arcadeNextMedalBehaviour;
		[SerializeField] private ArcadeModeRepresentationViewBehaviour _arcadeModeBehaviour;
		[SerializeField] private GameObject _gameRulesGameObject;
		public GameObject CountdownGameObject { get => default; }
		public GameObject BannerGameObject { get => default; }
		public Animator BannerAnimator { get => default; }
		public UIIrregularElement BannerBackgroundElement { get => default; }
		public MapRepresentationViewBehaviour MapViewBehaviour { get => default; }
		public PickupBoxRepresentationViewBehaviour PickupBoxViewBehaviour { get => default; }
		public RectTransform ArcadeRootTransform { get => default; }
		public UIArcadeTimeMedalBehaviour ArcadeTimeMedalBehaviour { get => default; }
		public UIArcadeNextMedalBehaviour ArcadeNextMedalBehaviour { get => default; }
		public ArcadeModeRepresentationViewBehaviour ArcadeModeBehaviour { get => default; }
		public GameObject GameRulesGameObject { get => default; }
		protected virtual bool PlayTweensOnStart() { return default; }
	}
}
