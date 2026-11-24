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
	public class GenericFrontEndSubsceneBehaviour : FrontEndSubsceneBehaviourBase
	{
		[SerializeField] private MeshRenderer _centreSpotRenderer;
		[SerializeField] private MeshRenderer _backdropRenderer;
		[SerializeField] private Animator _floorAnimator;
		[SerializeField] private GameObject _floorObjectsRoot;
		[SerializeField] private GameObject[] _floorObjects;
		[SerializeField] private GameObject _backgroundObjectsRoot;
		[SerializeField] private GameObject[] _backgroundObjects;
		[SerializeField] private Transform _boxDropLocator;
		[SerializeField] private Transform _rewardKartLocator;
		[SerializeField] private Transform _rewardCharacterLocator;
		[SerializeField] private Transform _rewardAntennaLocator;
		[SerializeField] private Transform _rewardGliderLocator;
		[SerializeField] private Transform _rewardWheelLocator;
		[SerializeField] private Transform _rewardBoostLocator;
		[SerializeField] private MeshRenderer _rewardKartIPPlane;
		[SerializeField] private MeshRenderer _rewardCharacterIPPlane;
		[SerializeField] private MeshRenderer _rewardAntennaIPPlane;
		[SerializeField] private MeshRenderer _rewardGliderIPPlane;
		[SerializeField] private MeshRenderer _rewardWheelIPPlane;
		private Color _genericFloorDiscColour;
		private Color _currentIPFloorDiscColour;
		private Color _genericBackgroundColour;
		private Color _currentIPBackgroundColour;
		private Color _currentlyAppliedFloorDiscColour;
		private Color _currentlyAppliedBackgroundColour;
		private Color _overrideBGColour;
		private Color _targetBGColour;
		private Color _targetFloorDiscColour;
		private IPDefinition _genericIP;
		private IPDefinition _currentIP;
		private bool _usingGenericIPColours;
		private bool _useOverrideBGColour;
		private static readonly int ToonColourID;
		private static readonly int ExpandedParam;
		public Transform BoxDropLocator { get => default; }
		public Transform RewardKartLocator { get => default; }
		public Transform RewardCharacterLocator { get => default; }
		public Transform RewardAntennaLocator { get => default; }
		public Transform RewardGliderLocator { get => default; }
		public Transform RewardWheelLocator { get => default; }
		public Transform RewardBoostLocator { get => default; }
		public MeshRenderer RewardKartIPPlane { get => default; }
		public MeshRenderer RewardCharacterIPPlane { get => default; }
		public MeshRenderer RewardAntennaIPPlane { get => default; }
		public MeshRenderer RewardGliderIPPlane { get => default; }
		public MeshRenderer RewardWheelIPPlane { get => default; }
		private void Update() { }
		protected virtual void OnInit(FrontEndScene frontEndScene, IPDefinition genericIPDefinition, LightWorld lightWorld) { }
		private void ApplyColoursToRenderers(float dt) { }
		private static Color HueLerp(Color c1, Color c2, float alpha) { return default; }
		protected virtual void OnIPChanged(IPDefinition newIP) { }
		protected virtual void OnSceneDefinitionChanged(FrontEndScreen3DSceneDefinition sceneDefinition) { }
		private void ChangeIPBackgroundObjects() { }
		public void ShowIPPlane(KartPart forPart, IPDefinition ipDefinition) { }
		public void HideIPPlanes() { }
	}
}
