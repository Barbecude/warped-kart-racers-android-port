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
	public class PlayWithFriendsCodeBehaviour : AtlasUIScreenBehaviour
	{
		[SerializeField] private UICodePanelBehaviour _codePanelBehaviour;
		[SerializeField] private GameObject _enterFullCodeMessageRoot;
		[SerializeField] private float _cursorFlashSpeed;
		[SerializeField] private UIAtlasButton[] _numPadButtons;
		[SerializeField] private UIAtlasButton _numPadPasteButton;
		[SerializeField] private UIAtlasButton _numPadBackSpaceButton;
		public UICodePanelBehaviour CodePanelBehaviour { get => default; }
		public GameObject EnterFullCodeMessageRoot { get => default; }
		public float CursorFlashSpeed { get => default; }
		public UIAtlasButton[] NumPadButtons { get => default; }
		public UIAtlasButton NumPadPasteButton { get => default; }
		public UIAtlasButton NumPadBackSpaceButton { get => default; }
	}
}
