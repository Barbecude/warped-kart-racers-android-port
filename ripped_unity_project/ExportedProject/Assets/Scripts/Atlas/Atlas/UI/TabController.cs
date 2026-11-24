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

namespace Atlas.UI
{
	public class TabController : MonoBehaviour, IInputFamilyChangeListener
	{
		[SerializeField] private TabController.TabPanel[] _tabs;
		private TabController.TabPanel _currentTab;
		private GameObject[] _previousSelectedObjectPerTab;
		private int _screenLayer;
		[SerializeField] private Button _prevTabButton;
		[SerializeField] private Button _nextTabButton;
		[SerializeField] private bool _allowControllerNavigation;
		[SerializeField] private bool _tabsWrapWhenUsingController;
		[SerializeField] private bool _forceSelectSelectionInTabWhenTabSelected;
		public TabController.TabPanel[] Tabs { get => default; }
		public TabController.TabPanel CurrentTab { get => default; }
		public void Init(int startingTabIndex) { }
		public void DeInit() { }
		private void SelectPreviousTab() { }
		private void SelectNextTab() { }
		private int GetSelectedTab() { return default; }
		private void SelectTab(int index, bool playTabChangeAudio) { }
		private void MakeSelectionInTabIfKeyboardOrController(int index) { }
		public void SetSelectedGameObjectInTab(int tabIndex, GameObject item) { }
		public void SetSelectedGameObjectInTab(TabController.TabPanel tab, GameObject item) { }
		public GameObject GetSelectedGameObjectInTab(int tabIndex) { return default; }
		private void OnTabPressed(TabController.TabPanel tab) { }
		private bool IsItemInTab(GameObject item, int tabIndex) { return default; }
		public void OnInputFamilyChanged(InputFamily family, InputGlyphMapping[] glyphMappings) { }
	}
}
