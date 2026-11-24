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
	public abstract class FrontEndSubsceneBehaviourBase : MonoBehaviour
	{
		[SerializeField] private FrontEndCameraEntry[] _cameraMappings;
		[SerializeField] private Transform[] _kartLocators;
		[SerializeField] private Transform[] _nameLocators;
		[SerializeField] private Transform[] _portalLocators;
		private FrontEndScene _frontEndScene;
		public FrontEndScene FrontEndScene { get => default; }
		public Transform GetKartLocator(int index) { return default; }
		public Transform GetNameLocator(int index) { return default; }
		public Transform GetPortalLocator(int index) { return default; }
		protected virtual void OnInit(FrontEndScene frontEndScene, IPDefinition genericIPDefinition, LightWorld lightWorld) { }
		protected virtual void OnDeInit() { }
		protected virtual void OnIPChanged(IPDefinition newIP) { }
		protected virtual void OnSceneDefinitionChanged(FrontEndScreen3DSceneDefinition sceneDefinition) { }
		protected void Start() { }
		public void Init(FrontEndScene frontEndScene, IPDefinition genericIPDefinition, LightWorld lightWorld) { }
		public void DeInit() { }
		public void ChangeIP(IPDefinition ipDefinition) { }
		public void SetNeutralCameraPosition() { }
		public void SetCustomisationCameraPosition(FrontEndKartPose pose) { }
		public void SetCameraPosition(FrontEndCameraPosition cameraPosition) { }
		public void SetFrontEndSceneType(FrontEndScreen3DSceneDefinition sceneDefinition) { }
	}
}
