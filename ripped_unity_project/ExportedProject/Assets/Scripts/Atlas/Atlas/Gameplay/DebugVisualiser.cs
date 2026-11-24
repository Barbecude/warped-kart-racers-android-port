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

namespace Atlas.Gameplay
{
	public class DebugVisualiser
	{
		public const int MaxWaypoints = 20;
		private CameraManager _cameraManager;
		private UsableManager _usableManager;
		private KartComposite _localPlayerKartComposite;
		private DebugFreeCameraController _debugFreeCameraController;
		private bool _firstTimeCache;
		private GameObject _visualiserRootGameObject;
		private GameObject _proxyGameObjectRoot;
		private Mesh _unitCubeMesh;
		private Mesh _unitSphereMesh;
		private Material _staticColliderMaterial;
		private Material _dynamicColliderMaterial;
		private Material _triggerColliderMaterial;
		private Material _respawnColliderMaterial;
		private Material _replicatorMaterial;
		private Material _baseWaypointMaterial;
		private int _kartPhysicsLayer;
		private DebugMenu _debugMenu;
		private int _debugMenuPanelId;
		private Pref _showColliders;
		private Pref _showRespawners;
		private Pref _showReplicators;
		private Pref _showTriggers;
		private Pref _hideScene;
		private Pref _highlightDynamic;
		private Pref _showOwnAIBattleWaypoints;
		private bool _praticallyPaused;
		private bool _debugCameraEnabled;
		public void Init(CameraManager cameraManager, Transform parentTransform, UsableManager usableManager, AtlasShaders atlasShaders, KartComposite localPlayerKartComposite) { }
		private static Material CreateMaterialParameters(Material baseMaterial, Color colour, Texture2D texture, string name) { return default; }
		public void DeInit() { }
		private void InitWaypoints(int maxpoints) { }
		public void InitDebugMenuBindings(DebugMenu debugMenu) { }
		public void DeInitDebugMenuBindings() { }
		public void Update(float dt) { }
		public void CacheSceneObjects(Collider[] required) { }
		private Replicator GetReplicator(Collider collider, Replicator[] replicators) { return default; }
		private bool IgnoreCollider(Collider collider, Collider[] required) { return default; }
		private bool IncludeGameObject(GameObject gameObject) { return default; }
		private MeshRenderer CreateUnitSphere(Vector3 localposition, string name, Material material) { return default; }
		private MeshRenderer CreateMeshProxy(Mesh mesh, DebugVisualiser.ITransformSource transform, string name, Material material) { return default; }
		private MeshRenderer CreateMeshProxy(Mesh mesh, Vector3 localPosition, Quaternion localRotation, Vector3 localScale, string name, Material material) { return default; }
		private void CreateProxyGameObjectRoot() { }
		private void DestroyProxyGameObjectRoot() { }
		private void Reset() { }
		private void OnUsableSpawned(Usable usable) { }
		private void OnShowCollidersPressed(int elementId, bool value) { }
		private void OnShowBattleAIWaypoints(int elementID, bool value) { }
		private void OnShowTriggersPressed(int elementId, bool value) { }
		private void OnShowRespawnersPressed(int elementId, bool value) { }
		private void OnShowReplicatorsPressed(int elementId, bool value) { }
		private void OnShowScenePressed(int elementId, bool value) { }
		private void OnHighlightDynamicPressed(int elementId, bool value) { }
		private void OnPracticallyPausedPressed(int elementId, bool value) { }
		private void OnDebugCameraChanged(int elementId, int index) { }
		private bool AreAnyCosmeticSettingsEnabled() { return default; }
		private void UpdateSettings() { }
		private DebugVisualiser.Collider CreateCollider(Collider unityCollider, Mesh mesh, DebugVisualiser.ITransformSource transform) { return default; }
		private static Mesh CreateCubeMesh(float length, float width, float height) { return default; }
		private static Mesh CreateCapsuleMesh(float height, float radius, Vector3 offset, int segments, int direction) { return default; }
		private Texture2D CreateChequerBoardTexture(int blockWidth, int blockHeight, int blockWidthCount, int blockHeightCount, Color32 onColour, Color32 offColour) { return default; }
	}
}
