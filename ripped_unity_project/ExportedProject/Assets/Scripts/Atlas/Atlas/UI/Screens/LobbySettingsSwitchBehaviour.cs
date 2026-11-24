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
	public class LobbySettingsSwitchBehaviour : MonoBehaviour
	{
		[SerializeField] private LobbySettingsSwitchBehaviour.Value[] _values;
		[SerializeField] private UIAtlasButton _leftButton;
		[SerializeField] private UIAtlasButton _rightButton;
		[SerializeField] private UISlantElement _backingElement;
		[SerializeField] private LocaliseTextBehaviour _text;
		[SerializeField] private Image _icon;
		[SerializeField] private HorizontalLayoutGroup _layoutGroup;
		public int SelectedIndex { get => default; set { } }
		private void Awake() { }
		public void SetValueByIndex(int index) { }
		private void OnLeftButtonPressed() { }
		private void OnRightButtonPressed() { }
	}
}
