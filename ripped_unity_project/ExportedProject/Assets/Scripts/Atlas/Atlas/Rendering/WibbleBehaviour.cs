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

namespace Atlas.Rendering
{
	public class WibbleBehaviour : MonoBehaviour
	{
		private static readonly int WibbleParamsId;
		[SerializeField] private MeshRenderer[] _wibbleMeshRenderers;
		[SerializeField] public Vector3 _topOffset;
		[SerializeField] public float _damping;
		[SerializeField] public float _stiffness;
		public float _airResistance;
		public float _maxAirResistance;
		public float _visualBendAmount;
		private VerletIntegration _verletIntegration;
		private Vector3 _lastWorldPosition;
		private float _impulseTime;
		private Vector3 _impulse;
		public Vector3 Target { get => default; }
		public Vector3 WibbleEnd { get => default; }
		public void ApplyForceInDirection(Vector3 worldSpaceDirection, float force) { }
		public void ApplyForceAtPoint(Vector3 worldSpacePoint, float force) { }
		public void ApplyImpulseAtPoint(Vector3 worldSpacePoint, float force, float time) { }
		private void Awake() { }
		private void OnValidate() { }
		private void SetParameters() { }
		private void FixedUpdate() { }
		private void UpdateAirResistance(float dt) { }
		private void Update() { }
		private void OnDrawGizmos() { }
	}
}
