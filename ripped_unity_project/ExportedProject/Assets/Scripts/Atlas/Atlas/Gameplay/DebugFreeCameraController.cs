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
	public class DebugFreeCameraController
	{
		public enum Style
		{
			Free = 0,
			OrbitalLocal = 1,
			OrbitalWorld = 2,
		}
		private static readonly Vector3 OrbitFocalPointOffset;
		private const float CameraFOV = 30;
		private const int InvalidTouchId = -1;
		private DebugFreeCameraController.Style _cameraStyle;
		private Camera _camera;
		private int _leftTouchId;
		private int _rightTouchId;
		private Vector3 _orbitialTargetPosition;
		private Vector3 _orbitialTargetRight;
		private Vector3 _orbitialTargetUp;
		private Vector3 _orbitialTargetForward;
		private float _orbitalYRotation;
		private float _orbitalXRotation;
		private float _orbitalDistance;
		public DebugFreeCameraController.Style CameraStyle { get => default; set { } }
		public void Init() { }
		public void DeInit() { }
		public void SetCamera(Camera camera) { }
		public void SetOrbitalTarget(Vector3 position, Vector3 right, Vector3 up, Vector3 forward) { }
		public void Update(float dt) { }
		private void UpdateFree(Vector2 adjustInput, float depthInput, float dt) { }
		private void UpdateOrbital(Vector2 adjustInput1, Vector2 adjustInput2, float depthInput, bool localSpace, float dt) { }
		private bool TryGetNormalisedRangeByTouchId(int touchId, Touchscreen touchscreen, out Vector2 outRange) { outRange = default; return default; }
		private bool TryGetNormalisedDeltaByTouchId(int touchId, Touchscreen touchscreen, out Vector2 outDelta) { outDelta = default; return default; }
		private TouchControl GetTouchControlById(int touchId, Touchscreen touchscreen) { return default; }
	}
}
