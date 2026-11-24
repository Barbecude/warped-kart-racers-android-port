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
	public class TopBarScreenBehaviour : UIScreenBehaviour
	{
		[SerializeField] private RectTransform _backPanelRoot;
		[SerializeField] private UIAtlasButton _backButton;
		[SerializeField] private UIAtlasButton _settingsButton;
		[SerializeField] private RectTransform _nextPanelRoot;
		[SerializeField] private UIAtlasButton _nextButton;
		[SerializeField] private UIAtlasButton _padlockButton;
		[SerializeField] private Image _nextPanelImage;
		[SerializeField] private Animator _nextPanelAnimator;
		[SerializeField] private RectTransform _titlePanelRoot;
		[SerializeField] private LocaliseTextBehaviour _titleText;
		[SerializeField] private Image _titleIconImage;
		[SerializeField] private UIAtlasButton _gameCenterButton;
		[SerializeField] private UIAtlasButton _transparentGameCenterButton;
		public RectTransform BackPanelRoot { get => default; }
		public UIAtlasButton BackButton { get => default; }
		public UIAtlasButton SettingsButton { get => default; }
		public RectTransform NextPanelRoot { get => default; }
		public UIAtlasButton NextButton { get => default; }
		public UIAtlasButton PadlockButton { get => default; }
		public Image NextPanelImage { get => default; }
		public Animator NextPanelAnimator { get => default; }
		public RectTransform TitlePanelRoot { get => default; }
		public LocaliseTextBehaviour TitleText { get => default; }
		public Image TitleIconImage { get => default; }
		public UIAtlasButton GameCenterButton { get => default; }
		public UIAtlasButton TransparentGameCenterButton { get => default; }
	}
}
