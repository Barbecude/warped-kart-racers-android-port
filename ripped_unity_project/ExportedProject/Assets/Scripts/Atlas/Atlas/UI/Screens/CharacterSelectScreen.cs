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
	public class CharacterSelectScreen : AtlasScreen<CharacterSelectScreenBehaviour, CharacterSelectScreen.TransitionData>
	{
		private static readonly DefinitionID FTUEStage_6_CharacterSelect_1_ID;
		private static readonly DefinitionID FTUEStage_12_CharacterSelect_2_ID;
		private AssetManager _assetManager;
		private UnlockManager _unlockManager;
		private AtlasDefinitions _atlasDefinitions;
		private SeasonsManager _seasonsManager;
		private AssetManagerHandle _prefabHandle;
		private GameObject _gridIconPrefab;
		private Random _rand;
		private CharacterDefinition _lastSelectedOwnerCharacterDefinition;
		private CharacterDefinition _lastSpokenOwnerCharacterDefinition;
		private CharacterRepresentationViewBehaviour _lastSelectedViewBehaviour;
		private GameObject _lastSelectedGameObject;
		private GameObject _lastCenteredGameObject;
		private DefinitionID _charDefIDOnEntry;
		private IPTabData _currentIPTabData;
		private FrontEndScene _frontEndScene;
		protected virtual void OnBeforeEnter() { }
		protected virtual void OnAfterEnter() { }
		protected virtual bool RequiresBeforeEnterCoroutine() { return default; }
		protected virtual IEnumerator OnBeforeEnterCoroutine() { return default; }
		protected virtual void OnUpdate(float dt) { }
		private void PlayCurrentTabAnimations() { }
		private IEnumerator SetupData() { return default; }
		private bool ContinuePressed() { return default; }
		protected virtual void OnAfterExit() { }
		private void CharacterButtonPressed(CharacterDefinition ownerCharacterDefinition, GameObject buttonObject, CharacterRepresentationViewBehaviour characterRepresentationViewBehaviour) { }
		private void SetSkin() { }
		private void KartPartLoaded(DefinitionID definitionId, GameObject loadedPrefab, KartPart part, KartComposite kart) { }
		private void PlayCharacterVO(DefinitionID characterID) { }
		private void SetVisualsForCanProgress(bool canProgress) { }
		private void SkinButtonPressed(bool up) { }
		private void SetSelected(UIAtlasButton button, bool forcePress) { }
		private void OnTabChanged(TabController.TabPanel previousTab, TabController.TabPanel newTab) { }
		protected virtual bool CanProgressToNextScreen() { return default; }
	}
}
