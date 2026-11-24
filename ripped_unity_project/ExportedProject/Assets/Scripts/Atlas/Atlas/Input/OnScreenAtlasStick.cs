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

namespace Atlas.Input
{
	public class OnScreenAtlasStick : OnScreenControl, IPointerDownHandler, IEventSystemHandler, IPointerUpHandler, IDragHandler
	{
		[SerializeField] private Image _detection;
		[SerializeField] private Image _background;
		[SerializeField] private Image _knob;
		[SerializeField] private string _controlPath;
		[SerializeField] private float _touchSizeInPixel;
		[SerializeField] private float _touchDeadZonePercent;
		[SerializeField] private bool _followFinger;
		[SerializeField] private float _followDistanceRatio;
		[SerializeField] private bool _showInitially;
		[SerializeField] private float _fadeInSpeed;
		[SerializeField] private float _fadeOutSpeed;
		private float _realRadiusInPixel;
		private float _touchDeadZone;
		private float _backgroundAlpha;
		private float _knobAlpha;
		private RectTransform _recTrs;
		private RectTransform _backgroundRecTrs;
		private RectTransform _knobRecTrs;
		private Vector2 _refReso;
		private float _resoFactor;
		private Vector2 _pointerDownPoint;
		private float _alpha;
		private float _alpha_wanted;
		private bool _pointerDown;
		private bool _interactable;
		private bool _mirrored;
		public Image Background { get => default; }
		public bool Mirrored { set { } }
		protected string controlPathInternal { get => default; set { } }
		public void SetInteractable(bool isInteractable) { }
		private void Start() { }
		public void OnPointerDown(PointerEventData eventData) { }
		public void OnDrag(PointerEventData eventData) { }
		public void OnPointerUp(PointerEventData eventData) { }
		private void OnPointerUpInternal() { }
		private void FixedUpdate() { }
		private Color SetColorApha(in Color col, float alpha) { return default; }
		private float DeadZone(float v, float deadzone) { return default; }
		private Vector2 DeadZone(Vector2 stick, float deadZone) { return default; }
	}
}
