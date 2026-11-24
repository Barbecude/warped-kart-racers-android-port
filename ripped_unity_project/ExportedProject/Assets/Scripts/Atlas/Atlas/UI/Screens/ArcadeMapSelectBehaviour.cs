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
	public class ArcadeMapSelectBehaviour : AtlasUIScreenBehaviour
	{
		[SerializeField] private AssetReference _arcadePanelRef;
		[SerializeField] private GameObject _optionParent;
		[SerializeField] private GameObject _optionContainer;
		[SerializeField] private PaginationDotController _paginationDotController;
		[SerializeField] private UIAtlasButtonGroup _uISingleSelectionAtlasButtonGroup;
		[SerializeField] private UIAtlasButton _infoButton;
		[SerializeField] private CanvasGroup _contentCanvasGroup;
		[SerializeField] private int _numPaginations;
		[SerializeField] private UIArcadeSingleMedalBehaviour _goldMedalBehaviour;
		[SerializeField] private UIArcadeSingleMedalBehaviour _silverMedalBehaviour;
		[SerializeField] private UIArcadeSingleMedalBehaviour _bronzeMedalBehaviour;
		[SerializeField] private UIArcadeSingleMedalBehaviour _noMedalBehaviour;
		[SerializeField] private UIArcadeRewardBehaviour[] _rewardBehaviours;
		public AssetReference ArcadePanelRef { get => default; }
		public GameObject OptionParent { get => default; }
		public GameObject OptionContainer { get => default; }
		public PaginationDotController PaginationDotController { get => default; }
		public UIAtlasButtonGroup ScrollGroup { get => default; }
		public UIAtlasButton InfoButton { get => default; }
		public CanvasGroup ContentCanvasGroup { get => default; }
		public int NumPaginations { get => default; }
		public UIArcadeSingleMedalBehaviour GoldMedalBehaviour { get => default; }
		public UIArcadeSingleMedalBehaviour SilverMedalBehaviour { get => default; }
		public UIArcadeSingleMedalBehaviour BronzeMedalBehaviour { get => default; }
		public UIArcadeSingleMedalBehaviour NoMedalBehaviour { get => default; }
		public UIArcadeRewardBehaviour[] RewardBehaviours { get => default; }
	}
}
