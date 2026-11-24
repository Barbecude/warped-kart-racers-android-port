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
	public class KartSelectScreen : AtlasScreen<KartSelectBehaviour, KartSelectScreen.TransitionData>
	{
		public enum TabOrder
		{
			Kart = 0,
			Wheels = 1,
			Glider = 2,
			Antenna = 3,
			Boost = 4,
		}
		private static readonly DefinitionID FTUEStage_7_KartSelect_ID;
		private static readonly DefinitionID NoAntennaDefinitionID;
		private static readonly DefinitionID NoBoostDefinitionID;
		private CoroutineRunner _coroutineRunner;
		private AssetManager _assetManager;
		private AtlasDefinitions _atlasDefinitions;
		private SeasonsManager _seasonsManager;
		private GameDefinitions _definitions;
		private AssetManagerHandle _prefabHandle;
		private GameObject _gridIconPrefab;
		private FrontEndScene _frontEndScene;
		private bool _hasDoneInitialPose;
		private LoadoutRepresentationViewBehaviour _stockWheelRep;
		private KartLoadout _kartLoadout;
		private KartTabData _currentKartTabData;
		private KartSelectScreen.TabOrder _startTab;
		protected virtual void OnBeforeEnter() { }
		protected virtual void OnUpdate(float dt) { }
		protected virtual bool RequiresBeforeEnterCoroutine() { return default; }
		protected virtual IEnumerator OnBeforeEnterCoroutine() { return default; }
		protected virtual void OnStartEnter() { }
		protected virtual void OnAfterEnter() { }
		private void OnTabChanged(TabController.TabPanel previousTab, TabController.TabPanel newTab) { }
		private void PlayCurrentTabAnimations() { }
		private IEnumerator SetupData() { return default; }
		private void SetVisualsForCanProgress(bool canProgress) { }
		private bool ContinuePressed() { return default; }
		private void GridButtonPressed(LoadoutRepresentationViewBehaviour loadoutRepresentationViewBehaviour, FrontEndContextLoadoutState.LoadoutType loadoutType, bool changeNamePanel) { }
		private void SetSelected(UIAtlasButton button, bool setSelectedGamePadComponent) { }
		private void SetNumPages(TabController.TabPanel kartSelectTabSetup, int numItems) { }
		private void SetLastSelectedLoadout(KartSelectScreen.TabOrder tab, LoadoutRepresentationViewBehaviour loadoutRepresentationViewBehaviour) { }
		protected virtual void OnBeforeDestroyed() { }
		protected virtual void OnAfterExit() { }
		protected virtual bool CanProgressToNextScreen() { return default; }
		private KartTabData GetKartTabData(KartSelectScreen.TabOrder tab) { return default; }
		private void SetLastSelectedLoadoutRepViewBehaviour(KartSelectScreen.TabOrder tab, LoadoutRepresentationViewBehaviour loadoutRepViewBehaviour) { }
	}
}
