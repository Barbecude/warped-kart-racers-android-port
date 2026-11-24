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
	public class LerpFloat
	{
		private float _valueToLerp;
		private float _lerpTarget;
		private float _upSpeed;
		private float _downSpeed;
		private float _lastValue;
		public bool Changed { get => default; }
		public float Difference { get => default; }
		public float Value { get => default; }
		public LerpFloat Tick(float delta) { return default; }
		public void SetValue(float val) { }
		public void SetValueImmediate(float val) { }
		public void SetRate(float upRate, float downRate) { }
	}
}
