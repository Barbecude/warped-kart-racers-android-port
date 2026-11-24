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

namespace Atlas.Gameplay.Usables
{
	public class SuperShieldUsableBehaviour : UsableBehaviour
	{
		[SerializeField] private GameObject _inHandModel;
		[SerializeField] private GameObject _inUseModel;
		[SerializeField] private Animator _inUseAnimator;
		private static readonly int ShieldFade;
		private static readonly int ShieldFadeToOn;
		private static readonly int ShieldHit;
		private static readonly int ShieldDestroy;
		private static readonly int ShieldInUse;
		private static readonly int ShieldDestroyedState;
		private static readonly int ShieldOnState;
		private static readonly int ShieldOffState;
		private static readonly int ShieldInHandState;
		private bool _fadeTriggered;
		private Vector3 _originalScale;
		private float _scaleLerpTimer;
		private bool _scaleDown;
		private float _scaleTime;
		public GameObject InHandVFX { get => default; }
		public GameObject InUseVFX { get => default; }
		public void Awake() { }
		public void ResetAndStart() { }
		public void TriggerFade() { }
		public void TriggerHit() { }
		public void TriggerUse() { }
		public void PlayPowerShieldOff() { }
		public void TriggerScale(bool scaledown, float scaleTime) { }
		public void Update() { }
	}
}
