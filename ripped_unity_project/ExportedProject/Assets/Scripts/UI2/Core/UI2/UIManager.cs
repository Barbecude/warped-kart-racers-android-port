using Unity.Profiling;
using UnityEngine.UI;
using Core.Assets;
using Core.Input;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Core.UI2
{
	public class UIManager
	{
		public struct ScreenInfo { }
		private const int InitialScreenInfoCapacity = 20;
		private const int InitialAssetRequestCapacity = 20;
		private UIManagerBehaviour _managerBehaviour;
		private Transform _rootTransform;
		private AssetManager _assetManager;
		private int _layerCount;
		private UIScreenParameters _sharedScreenParameters;
		private bool _isInited;
		private int _nextAssetRequestIndexToCheck;
		private InputManager _inputManager;
		private static readonly ProfilerMarker _updateProfilerMarker;
		private static readonly ProfilerMarker _lateUpdateProfilerMarker;
		public Canvas Canvas { get => default; }
		public CanvasScaler CanvasScaler { get => default; }
		public bool IsInited { get => default; }
		public void Init(GameObject managerPrefab, AssetManager assetManager, InputManager inputManager, Transform rootTransform, int layerCount, UIScreenParameters sharedScreenParameters) { }
		public void DeInit() { }
		public void Update(float dt) { }
		public void LateUpdate(float dt) { }
		public void RegisterScreen(string id, Type type, string assetManagerPath, string assetManagerBucket) { }
		public bool ShowScreen(string id, int layerIndex, UIScreenParameters screenParameters, bool startInvisible) { return default; }
		public void HideScreen(int layerIndex) { }
		public string GetCurrentScreenID(int layerIndex) { return default; }
		public void ClearLayer(int layerIndex) { }
		public void ClearLayerAndShowScreen(string screenId, int layerIndex, UIScreenParameters screenParameters) { }
		public bool IsScreenIdValid(string id) { return default; }
		public bool IsLayerValid(int layerIndex) { return default; }
		public bool IsLayerReady(int layerIndex) { return default; }
		public UIScreen.State GetLayerState(int layerIndex) { return default; }
		public void EnableInput(int screenLayer, bool enabled) { }
		public void SetScreenVisible(int screenLayer, bool visible) { }
		public void RequestScreenAssetsAndPin(string screenId) { }
		public void UnPinScreenAssets(string screenId) { }
		private void UpdateLayer(int layerIndex) { }
		private void UpdateLayerCurrentScreen(int layerIndex, float dt) { }
		private void LateUpdateLayerCurrentScreen(int layerIndex, float dt) { }
		private void SetPinnedAssetRequest(UIManager.ScreenInfo screenInfo, bool pinned) { }
		private bool TryGetScreenWithBehaviour(string screenId, out UIScreen outScreen) { outScreen = default; return default; }
		private void ReturnScreenWithBehaviour(UIScreen screen) { }
		private UIScreen InstantiateScreen(Type screenType) { return default; }
		private void DestroyScreen(UIScreen screen) { }
		private UIScreenBehaviour InstantiateScreenBehaviour(GameObject prefab) { return default; }
		private void DestroyScreenBehaviour(UIScreenBehaviour behaviour) { }
		private void RequestAsset(string assetManagerPath, string assetManagerBucket) { }
		private void AssetLoadSuccessHandler(object asset, string path, AssetManagerHandle handle) { }
		private void AssetLoadFailedHandler(string error, string path, AssetManagerHandle handle) { }
		private bool TryGetAssetRequestIndex(string assetManagerPath, out int outIndex) { outIndex = default; return default; }
		private bool AreScreenIdsEqual(string leftScreenId, string rightScreenId) { return default; }
		private bool TryGetScreenInfo(string screenId, out UIManager.ScreenInfo outScreenInfo) { outScreenInfo = default; return default; }
		private void UpdateCleanUpAssetRequests() { }
		private void ReleaseAssetRequestIfNotInUse(int assetRequestIndex) { }
		private GameObject CreateLayerRootGameObject(string name, Transform parent) { return default; }
		private void AssignCallbacks(UIScreen uIScreen) { }
		private void RemoveCallbacks(UIScreen uIScreen) { }
		private void OnScreenStartBeforeEnter(UIScreen uIScreen, int layer) { }
		private void OnScreenEnterStarted(UIScreen uIScreen, int layer) { }
		private void OnScreenEnterFinish(UIScreen uIScreen, int layer) { }
	}
}
