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
	public class SingleplayerChapterBehaviour : AtlasUIScreenBehaviour
	{
		[SerializeField] private Image _ipImage;
		[SerializeField] private EventPanelButtonBehaviour[] _eventPanelList;
		[SerializeField] private SlantFillBar _flagsFillBar;
		[SerializeField] private float _fillDuration;
		[SerializeField] private UIRewardBehaviour[] _rewardBehaviours;
		[SerializeField] private TMP_Text _selectedEventTitleText;
		[SerializeField] private TMP_Text _selectedEventNumberText;
		[SerializeField] private UIAnimatingFlagsBehaviour[] _selectedChallengeFlagBehaviourList;
		[SerializeField] private Image[] _selectedEventModifierIcons;
		[SerializeField] private GameContextRepresentationViewBehaviour _gameContextRepView;
		[SerializeField] private UIIrregularElement _eventBacking;
		[SerializeField] private PickupBoxRepresentationViewBehaviour _pickupBoxRep;
		[SerializeField] private VerticalLayoutGroup _eventVerticalLayoutGroup;
		public Image IpImage { get => default; }
		public EventPanelButtonBehaviour[] EventPanelButtonBehaviour { get => default; }
		public SlantFillBar FlagsFillBar { get => default; }
		public float FillDuration { get => default; }
		public UIRewardBehaviour[] RewardBehaviours { get => default; }
		public TMP_Text SelectedEventTitleText { get => default; }
		public TMP_Text SelectedEventNumberText { get => default; }
		public UIAnimatingFlagsBehaviour[] SelectedChallengeFlagBehaviourList { get => default; }
		public Image[] SelectedEventModifierIcons { get => default; }
		public GameContextRepresentationViewBehaviour GameContextRepView { get => default; }
		public UIIrregularElement EventBacking { get => default; }
		public PickupBoxRepresentationViewBehaviour PickupBoxRep { get => default; }
		public VerticalLayoutGroup EventVerticalLayoutGroup { get => default; }
		public virtual void SetVisible(bool visible) { }
		public void RebuildEventLayout() { }
	}
}
