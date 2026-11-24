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
	public class Synced3DElement
	{
		private Synced3DElementBehaviour _behaviour;
		private Camera _camera;
		private CanvasScaler _canvasScaler;
		private Transform _synced3DElement;
		private bool _hasFinishedPositioning;
		public Transform TransformOf3DObject { get => default; }
		public GameObject GameObjectIn3D { get => default; }
		public void Init(Synced3DElementBehaviour behaviour, CameraManager cameraManager, UIManager uiManager) { }
		public void DeInit() { }
		public void Update() { }
		private static Vector3 ManualScreenToWorldPoint(Camera camera, Vector3 screenPoint) { return default; }
		public void SetTarget3DObject(GameObject object3D) { }
		private static Vector3 WithZ(Vector3 inVector, float z) { return default; }
	}
}
