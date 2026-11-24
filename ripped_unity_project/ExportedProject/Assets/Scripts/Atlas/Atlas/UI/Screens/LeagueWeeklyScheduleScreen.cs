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
	public class LeagueWeeklyScheduleScreen : AtlasScreen<LeagueWeeklyScheduleBehaviour, LeagueWeeklyScheduleScreen.TransitionData>
	{
		private static readonly DefinitionID FTUEStage_ID;
		private static readonly DefinitionID FTUEDemotionStage_ID;
		private static readonly string ToolTipLocalisationKey;
		private AtlasDefinitions _definitions;
		private AssetManager _assetManager;
		private LocalisationManager _localisationManager;
		private SaveManager _saveManager;
		private GameObject _optionPrefab;
		private AssetManagerHandle _prefabHandle;
		private UIAtlasButton _lastSelected;
		private FrontEndScene _frontEndScene;
		private UnlockManager _unlockManager;
		private LeagueManager _leagueManager;
		private ToolTipManager _toolTipManager;
		private bool _canProgressToNextScreen;
		private int _lockedButtonDayIndex;
		protected virtual void OnBeforeEnter() { }
		protected virtual void OnStartEnter() { }
		protected virtual IEnumerator OnBeforeEnterCoroutine() { return default; }
		private void ShowToolTips() { }
		private void ShowInfoToolTips() { }
		private void ShowDemotionWarningToolTip() { }
		private void ShowDemotionToolTip() { }
		protected virtual void OnAfterEnter() { }
		private void SelectButton(UIAtlasButton button) { }
		protected virtual bool RequiresBeforeEnterCoroutine() { return default; }
		private IEnumerator BuildOptions() { return default; }
		private void PreSelectMap() { }
		private UIAtlasButton BuildMapPanels() { return default; }
		private bool ContinuePressed() { return default; }
		private void LeaderboardPressed() { }
		protected virtual bool CanProgressToNextScreen() { return default; }
		private void LockedButtonSelected(int dayIndex) { }
		private void LeaderboardOrTooltipSelected() { }
		private void ToggleProgressionToNextScreen(bool canProgressToNextScreen) { }
		private void LockedButtonPressed(int dayIndex) { }
		private void OnOptionSelected(UIAtlasButton uIAtlasButton, MapMetagameData mapMetagameData, string contextName, string mapId, int index) { }
		protected virtual void OnAfterExit() { }
	}
}
