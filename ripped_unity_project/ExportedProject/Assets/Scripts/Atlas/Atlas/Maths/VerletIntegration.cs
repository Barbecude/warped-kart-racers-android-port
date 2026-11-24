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

namespace Atlas.Maths
{
	public class VerletIntegration
	{
		private const float _mass = 1;
		private const float _rcpMass = 1;
		private const float _stepSize = 0.016393442;
		private float _damping;
		private float _stiffness;
		private Vector3 _endValue;
		private Vector3 _currentValue;
		private Vector3 _currentVelocity;
		private Vector3 _currentAcceleration;
		public Vector3 CurrentValue { get => default; }
		public Vector3 EndValue { get => default; }
		public float Damping { set { } }
		public float Stiffness { set { } }
		public void Init(Vector3 startValue, Vector3 initialVelocity) { }
		public void UpdateEndValue(Vector3 value) { }
		public void UpdateEndValue(Vector3 value, Vector3 velocity) { }
		public void UpdateCurrentValue(Vector3 value) { }
		public Vector3 Evaluate(float deltaTime) { return default; }
		public Vector3 EvaluateFixed(float deltaTime) { return default; }
	}
}
