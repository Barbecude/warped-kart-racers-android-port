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

namespace Atlas.Contexts
{
	public class FrontEndContextSettingsState : State<StateData, FrontEndContextSettingsState.StateTransitionData>
	{
		private AtlasUIManager _uiManager;
		private TopBarManager _topBarManager;
		private SaveManager _saveManager;
		private MessageBoxManager _messageBoxManager;
		private FTUEManager _FTUEManager;
		private AtlasDefinitions _atlasDefinitions;
		private ContextManager _contextManager;
		private AtlasQualitySettings _atlasQualitySettings;
		private ServicesManager _servicesManager;
		private Network _network;
		private LocalisationManager _localisationManager;
		private SeasonsManager _seasonsManager;
		private UnlockManager _unlockManager;
		private AtlasAnalyticsManager _analyticsManager;
		private FrontEndScene _frontEndScene;
		public void Init(DependencyManager dependencyManager) { }
		protected virtual void OnDeInit() { }
		protected virtual void OnEnter() { }
		private bool ShowSettingsScreen(int tabIndex, bool isComingBackFromCredits) { return default; }
		private void ShowCreditsScreen() { }
		private void ShowLicenseScreen() { }
		private void ShowSaveGameScreen() { }
		private void ShowSupportLink() { }
		private void ShowPrivacyPolicyLink() { }
		private bool ExitSelected() { return default; }
		private void ToggleMultiplayerConsent() { }
		private void MultiplayerConsentGiven() { }
		private void ToggleAnalyticsConsent() { }
		private void AnalyticsConsentGiven() { }
		private void BootFTUE() { }
	}
}
