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
	public class UIScroller
	{
		private const float _holdAtEndDelay = 4;
		private const float _holdAtRestartDelay = 2;
		private ScrollRect _scrollRect;
		private float _afterDragCooldown;
		private float _delayBeginningStartScroll;
		private float _scrollSpeed;
		private float _targetPos;
		private float _startPos;
		private float _lastDragTime;
		private float _t;
		private bool _resetting;
		private float _resettingTimer;
		private float _endTimer;
		private bool _beingDragged;
		public bool BeingDragged { set { } }
		public void Init(ScrollRect scrollRect, float afterDragCooldown, float delayBeginningStartScroll, float scrollSpeed) { }
		public void DeInit() { }
		public void Update(float dt) { }
	}
}
