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

namespace Atlas.UI
{
	public class UIAtlasButtonGroup : MonoBehaviour
	{
		public enum ScaleAxis
		{
			XY = 0,
			X = 1,
			Y = 2,
		}
		[SerializeField] private bool _clickSelectedOnEnable;
		[SerializeField] private bool _scaleSelected;
		[SerializeField] private UIAtlasButtonGroup.ScaleAxis _scaleAxis;
		[SerializeField] private float _minScale;
		[SerializeField] private float _maxScale;
		[SerializeField] private float _angleChange;
		[SerializeField] private float _duration;
		[SerializeField] private bool _holdMaxScale;
		private UIAtlasButton _lastSelected;
		public void Subscribe(UIAtlasButton button) { }
		public void OnEnable() { }
		public void OnButtonSelected(UIAtlasButton button, BaseEventData eventData) { }
		public void SetInteractable(bool interactable) { }
	}
}
