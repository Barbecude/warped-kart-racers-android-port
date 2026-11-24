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
	public class DebugOverlayScreenBehaviour : UIScreenBehaviour
	{
		[SerializeField] private TMP_Text _buildText;
		[SerializeField] private TMP_Text _pingText;
		[SerializeField] private TMP_Text _trafficInText;
		[SerializeField] private TMP_Text _trafficOutText;
		[SerializeField] private TMP_Text _fpsText;
		[SerializeField] private TMP_Text _servicesText;
		[SerializeField] private RectTransform _errorRoot;
		[SerializeField] private TMP_Text _errorText;
		[SerializeField] private UIAtlasButton _errorCloseButton;
		public TMP_Text BuildText { get => default; }
		public TMP_Text PingText { get => default; }
		public TMP_Text TrafficInText { get => default; }
		public TMP_Text TrafficOutText { get => default; }
		public TMP_Text FpsText { get => default; }
		public TMP_Text ServicesText { get => default; }
		public RectTransform ErrorRoot { get => default; }
		public TMP_Text ErrorText { get => default; }
		public UIAtlasButton ErrorCloseButton { get => default; }
	}
}
