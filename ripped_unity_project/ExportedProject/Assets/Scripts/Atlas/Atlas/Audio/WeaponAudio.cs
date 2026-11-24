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

namespace Atlas.Audio
{
	public class WeaponAudio
	{
		public enum WeaponType
		{
			RED_SHELL = 0,
			CLAM = 1,
			TURD = 2,
			CULTURE_POD = 3,
			SHIELD = 4,
			SHEILD2 = 5,
			BOOST = 6,
			SATELLITE = 7,
			SUPER_SHIELD = 8,
		}
		private const float NONE = 0;
		private const float IN_HAND = 1;
		private const float USE = 2;
		private const float IN_TRANSIT = 3;
		private const float RICOCHET = 4;
		private const float EXPLODE = 5;
		private const string PARAM = "WeaponActions";
		private AudioEvent _event;
		private Transform _transform;
		private WeaponAudioManager _manager;
		private float _destroyDelay;
		private bool _canPlay;
		private WeaponAudio.WeaponType _weaponType;
		public WeaponAudio.WeaponType WeaponName { get => default; set { } }
		public void Pickup() { }
		public void Use() { }
		public void InTransit(Transform transform) { }
		public void Ricochet() { }
		public void Explode(Transform targetTransform) { }
		public void Stop() { }
		public void Init(AudioEvent ev, Transform transform, WeaponAudioManager manager, float destroyTime, bool canPlayWeapons) { }
		public void DeInit() { }
	}
}
