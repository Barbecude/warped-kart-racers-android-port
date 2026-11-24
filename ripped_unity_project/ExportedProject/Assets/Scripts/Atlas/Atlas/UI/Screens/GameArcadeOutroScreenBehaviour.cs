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
	public class GameArcadeOutroScreenBehaviour : AtlasUIScreenBehaviour
	{
		[SerializeField] private RectTransform _playerInfoRootTransform;
		[SerializeField] private RectTransform _placementRootTransform;
		[SerializeField] private UIArcadeTimeMedalBehaviour _playerInfoTimeMedalBehaviour;
		[SerializeField] private UIArcadeTimeMedalBehaviour _placementTimeMedalBehaviour;
		[SerializeField] private UIArcadeNextMedalBehaviour _placementNextMedalBehaviour;
		[SerializeField] private TMP_Text _medalText;
		[SerializeField] private float _finishCameraHoldTime;
		[SerializeField] private float _autoDriveCameraChangeDelay;
		[SerializeField] private float _autoDriveCameraChangeIntervalMin;
		[SerializeField] private float _autoDriveCameraChangeIntervalMax;
		public RectTransform PlayerInfoRootTransform { get => default; }
		public RectTransform PlacementRootTransform { get => default; }
		public UIArcadeTimeMedalBehaviour PlayerInfoTimeMedalBehaviour { get => default; }
		public UIArcadeTimeMedalBehaviour PlacementTimeMedalBehaviour { get => default; }
		public UIArcadeNextMedalBehaviour PlacementNextMedalBehaviour { get => default; }
		public TMP_Text MedalText { get => default; }
		public float FinishCameraHoldTime { get => default; }
		public float AutoDriveCameraChangeDelay { get => default; }
		public float AutoDriveCameraChangeIntervalMin { get => default; }
		public float AutoDriveCameraChangeIntervalMax { get => default; }
		protected virtual void OnBeforeDestroyed() { }
		protected virtual bool PlayTweensOnStart() { return default; }
	}
}
