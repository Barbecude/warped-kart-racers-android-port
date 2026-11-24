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

namespace Atlas.Contexts
{
	public class OutroSequenceShowPlacementsState : State
	{
		private GameContextBase _gameContextBase;
		private GameContextPlayer _localPlayer;
		private MapSequenceController _sequenceController;
		private Transform _cameraParentTransform;
		private GameContextPlayer _focusedPlayer;
		private float _timer;
		private int _focusedPlayerIndex;
		private int _playerCount;
		private bool _isStateComplete;
		private NiceRandomSelection _cameraTimelineRandomSelectionPrimary;
		private NiceRandomSelection _cameraTimelineRandomSelectionSecondary;
		private bool _cameraChangeFlipFlop;
		public float AutoDriveCameraChangeDelay { get => default; set { } }
		public float AutoDriveCameraChangeIntervalMin { get => default; set { } }
		public float AutoDriveCameraChangeIntervalMax { get => default; set { } }
		public List<TimelineAsset> AutoDriveCameraChangePansPrimary { get => default; set { } }
		public List<TimelineAsset> AutoDriveCameraChangePansSecondary { get => default; set { } }
		public void Init(GameContextBase gameContextBase, bool isSinglePlayer) { }
		protected virtual void OnEnter() { }
		protected virtual void OnUpdate(IUpdateParams updateParams) { }
		protected virtual void OnExit() { }
		protected virtual void OnDeInit() { }
		private void SwitchCameraFocus(in GameContextPlayer player) { }
	}
}
