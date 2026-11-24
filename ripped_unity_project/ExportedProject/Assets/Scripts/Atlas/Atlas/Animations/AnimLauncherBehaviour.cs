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

namespace Atlas.Animations
{
	public class AnimLauncherBehaviour : MonoBehaviour
	{
		[SerializeField] private float _playAnimationAfterMin;
		[SerializeField] private float _playAnimationAfterMax;
		private float _nextAnimationTimer;
		private float _playerNextAnimationAfter;
		private const int InvalidAnimationIndex = -1;
		private int _playingAnimationIndex;
		private int _lastAnimationIndex;
		private bool _allowLaunchAnims;
		public bool AllowLaunchAnims { set { } }
		public float NextAnimationTimer { set { } }
		private void Start() { }
		private void Update() { }
		private void SetPlayAnimationAfter() { }
		private void PlayRandomAnimation() { }
		private void HideLastPlayerAnimationAndReset() { }
	}
}
