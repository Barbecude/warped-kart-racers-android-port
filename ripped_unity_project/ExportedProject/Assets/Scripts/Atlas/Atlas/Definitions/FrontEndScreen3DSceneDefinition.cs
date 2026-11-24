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

namespace Atlas.Definitions
{
	public class FrontEndScreen3DSceneDefinition : Definition
	{
		[SerializeField] private string _screenId;
		[SerializeField] private FrontEndSceneType _sceneType;
		[SerializeField] private FrontEndCameraPosition _cameraPosition;
		[SerializeField] private bool _isDefaultScene;
		[SerializeField] private bool _showPlayerKart;
		[SerializeField] private bool _showAdditionalKartSpots;
		[SerializeField] private bool _showFloorTrash;
		[SerializeField] private bool _showFallingItems;
		[SerializeField] private bool _useExpandedFloorspace;
		[SerializeField] private bool _useIPColouring;
		[SerializeField] private bool _useOverrideBGColour;
		[SerializeField] private Color _overrideBGColour;
		public string ScreenId { get => default; }
		public FrontEndSceneType SceneType { get => default; }
		public FrontEndCameraPosition CameraPosition { get => default; }
		public bool IsDefaultScene { get => default; }
		public bool ShowPlayerKart { get => default; }
		public bool ShowAdditionalKartSpots { get => default; }
		public bool ShowFloorTrash { get => default; }
		public bool ShowFallingItems { get => default; }
		public bool UseExpandedFloorspace { get => default; }
		public bool UseIPColouring { get => default; }
		public bool UseOverrideBGColour { get => default; }
		public Color OverrideBGColour { get => default; }
	}
}
