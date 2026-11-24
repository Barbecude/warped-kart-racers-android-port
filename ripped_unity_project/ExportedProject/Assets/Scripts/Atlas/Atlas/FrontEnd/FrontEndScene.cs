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

namespace Atlas.FrontEnd
{
	public class FrontEndScene
	{
		private CameraManager _cameraManager;
		private AtlasUIManager _uiManager;
		private AssetManager _assetManager;
		private TransitionManager _transitionManager;
		private KartCompositeFactory _kartCompositeFactory;
		private AtlasDefinitions _definitions;
		private CoroutineRunner _coroutineRunner;
		private AtlasQualitySettings _atlasQualitySettings;
		private UnlockManager _unlockManager;
		private AtlasAudioManager _atlasAudioManager;
		private ToonShaderBehaviour _toonShaderBehaviour;
		private Camera _frontEndCamera;
		private CinemachineBrain _frontEndCameraBrain;
		private KartJiggler _kartJiggler;
		private LightWorld _lightWorld;
		private bool _inited;
		private readonly FrontEndKartInfo[] _kartInfo;
		private AssetManagerHandle _pedestalRequestHandle;
		private AssetManagerHandle _portalAssetHandle;
		private FrontEndSceneType _frontEndSceneType;
		private MetagameDefinition.FrontEndSceneMapping[] _sceneMappings;
		private Coroutine _sceneChangeCoroutine;
		private DefinitionID _currentCharacterIP;
		private DefinitionID _overrideIP;
		private FrontEndSubsceneBehaviourBase _subsceneBehaviour;
		private IPDefinition _genericIPDefinition;
		private float _outlineMipBias;
		private DefinitionID CurrentIP { get => default; }
		public bool IsInited { get => default; }
		public Camera FrontEndCamera { get => default; }
		public LightWorld LightWorld { get => default; }
		public bool IsSceneChanging { get => default; }
		public IEnumerator Init(FrontEndSceneType preloadSceneType, AssetManager assetManager, AtlasUIManager uiManager, CameraManager cameraManager, TransitionManager transitionManager, CoroutineRunner coroutineRunner, KartCompositeFactory kartCompositeFactory, AtlasDefinitions definitions, AtlasQualitySettings qualitySettings, UnlockManager unlockManager, AtlasAudioManager atlasAudioManager) { return default; }
		public void StartPortalExit(int kartIndex) { }
		public void StartPortalEnter(int kartIndex) { }
		public void Update(IUpdateParams updateParams) { }
		public void LateUpdate(IUpdateParams updateParams) { }
		public IEnumerator DeInit() { return default; }
		public void DeInitEditor() { }
		public bool AreAllRequestPartsLoadedAndInstantiated() { return default; }
		private void DestroyKartAndPedestal(int index) { }
		private IPDefinition GetIPDefinitionFromIDOrGeneric(DefinitionID defId) { return default; }
		private IPDefinition GetGenericIPDefinition() { return default; }
		public void SetOverrideIP(DefinitionID overrideIP) { }
		public void SetOverrideGenericIP() { }
		public void ClearOverrideIP() { }
		private void OnIPChanged(DefinitionID newIPDefinitionID) { }
		private void UpdateKarts(in IUpdateParams updateParams) { }
		private void LateUpdateKarts(in IUpdateParams updateParams) { }
		private void OnPedestalLoadedSuccessfully(object asset, string path, AssetManagerHandle handle) { }
		private void OnPedestalFailedToLoad(string error, string path, AssetManagerHandle handle) { }
		private void OnPortalLoadedSuccessfully(object asset, string path, AssetManagerHandle handle) { }
		private void OnPortalFailedToLoad(string error, string path, AssetManagerHandle handle) { }
		public Transform GetKartTransform(int index) { return default; }
		public Transform GetPortalTransform(int index) { return default; }
		public void SetKartJigglerEnabled(bool kartInteractionEnabled, bool antennaInteractionEnabled) { }
		public void OnCharacterSelectConfirm() { }
		public void SetFrontEndSceneType(FrontEndScreen3DSceneDefinition definition) { }
		private IEnumerator LoadSubsceneAndMakeActive(AssetReference sceneAsset, Action onComplete) { return default; }
		private static AssetReference FindSceneAssetForType(MetagameDefinition.FrontEndSceneMapping[] mappings, FrontEndSceneType type) { return default; }
		private IEnumerator UnloadAnyLoadedScene() { return default; }
		private bool TryGetLoadedScene(AssetReference asset, out SceneInstance instance) { instance = default; return default; }
		public bool RequestLoadKart(int index, DefinitionID kartID) { return default; }
		public bool RequestLoadCharacter(int index, DefinitionID characterID) { return default; }
		public bool RequestLoadGlider(int index, DefinitionID gliderID) { return default; }
		public bool RequestLoadWheels(int index, DefinitionID wheelsID) { return default; }
		public bool RequestLoadAntenna(int index, DefinitionID antennaID) { return default; }
		public bool RequestLoadBoost(int index, DefinitionID boostID) { return default; }
		public void SetVisibleAndRequestLoadout(int index, KartLoadout kartLoadout) { }
		public void SetVisibleAndRequestLoadout(int index, NetworkLoadout netLoadout) { }
		public void SetGreyScaleLockedKartPartsOnLoad(int index, bool enabled) { }
		public void SetKartVisible(int index) { }
		public bool GetKartVisible(int index) { return default; }
		public void SetKartHidden(int index) { }
		public void ResetKart(int index) { }
		public KartFEAnimator GetKartFEAnimator(int index) { return default; }
		public void SetGliderExtended(int index, bool extended) { }
		public void SetBoostersOn(int index, bool boostersOn) { }
		private int GetMaterialDuplicatorIdForPart(KartPart part) { return default; }
		private void KartPartLoaded(DefinitionID definitionId, GameObject loadedPrefab, KartPart part, KartComposite kart) { }
		public void SetKartGreyScale(int index, bool greyScaleEnabled, int materialDuplicatorId) { }
		public void SetKartGreyScale(KartComposite kartComposite, bool greyScaleEnabled, int materialDuplicatorId) { }
		public KartComposite GetKart(int index) { return default; }
		public KartPartLoader GetKartPartLoader(int index) { return default; }
		private static FrontEndKartPose GetPoseFromPart(KartPart part) { return default; }
		private void ApplyOutlineSettings(string settingName) { }
	}
}
