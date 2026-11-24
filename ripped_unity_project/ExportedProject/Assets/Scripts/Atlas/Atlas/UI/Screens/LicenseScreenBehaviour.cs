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
	public class LicenseScreenBehaviour : AtlasUIScreenBehaviour
	{
		[SerializeField] private ScrollRect _creditsScroller;
		[SerializeField] private CanvasGroup _contentCanvasGroup;
		[SerializeField] private float _scrollSpeed;
		[SerializeField] private float _afterDragCooldown;
		[SerializeField] private float _delayBeginningStartScroll;
		private bool _beingDragged;
		public ScrollRect CreditsScroller { get => default; }
		public CanvasGroup ContentCanvasGroup { get => default; }
		public bool BeingDragged { get => default; set { } }
		public float ScrollSpeed { get => default; }
		public float AfterDragCooldown { get => default; }
		public float DelayBeginningStartScroll { get => default; }
	}
}
