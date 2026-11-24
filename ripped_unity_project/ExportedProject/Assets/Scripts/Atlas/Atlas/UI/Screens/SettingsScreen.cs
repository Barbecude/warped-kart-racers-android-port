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
	public class SettingsScreen : AtlasScreen<SettingsScreenBehaviour, SettingsScreen.TransitionData>
	{
		private CoroutineRunner _coroutineRunner;
		private LocalisationManager _localisationManager;
		private bool _settingLanguage;
		protected virtual void OnBeforeEnter() { }
		private void OnTabChanged(TabController.TabPanel previousTab, TabController.TabPanel newTab) { }
		private void SelectButtonForSelectedLanguage() { }
		protected virtual void OnAfterEnter() { }
		protected virtual void OnBeforeExit() { }
		protected virtual void OnAfterExit() { }
		private void OnLanguageChanged(string IETFLanguageTag) { }
		private void BuildOptions() { }
		private void SetLanguage(string languageIETF) { }
		private IEnumerator SetLanguageCoroutine(string languageIETF) { return default; }
		private void SetMultiplayerConsent(bool consent) { }
		private void SetAnalyticsConsent(bool consent) { }
	}
}
