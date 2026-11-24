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

namespace Atlas.Gameplay.Pickups
{
	public class PickupBoxBehaviour : MonoBehaviour, ICollidableBehaviour, ILightWorldSample
	{
		private static readonly int SpawnAnimStateId;
		private static readonly int DeSpawnAnimStateId;
		private static readonly int SpawnFinishedAnimStateId;
		private static readonly int DeSpawnFinishedAnimStateId;
		[SerializeField] private GameObject _visuals;
		[SerializeField] private Animator _animator;
		[SerializeField] private Collider _collider;
		[SerializeField] private BlipBehaviour _blipBehaviour;
		[SerializeField] private MeshRenderer _dropShadowMeshRenderer;
		[SerializeField] private float _dropShadowFade;
		private Material _dropShadowMaterial;
		private float _lastDropShadowFade;
		public BlipBehaviour BlipBehaviour { get => default; }
		public Material DropShadowMaterial { get => default; }
		public ICollidableOwner Owner { get => default; set { } }
		private void Awake() { }
		private void LateUpdate() { }
		public float4 GetLightWorldPosition() { return default; }
		public void SetGameObjectActive(bool active) { }
		public void SetColliderEnabled(bool enabled) { }
		public void SetAnimatorEnabled(bool enabled) { }
		public void PlaySpawnAnimation() { }
		public void PlayDeSpawnAnimation() { }
		public bool HasSpawnFinished() { return default; }
		public bool HasDeSpawnFinished() { return default; }
		public void OnCollisionEnter(Collision collision) { }
		public void OnCollisionStay(Collision collision) { }
		public void OnCollisionExit(Collision collision) { }
		public void OnTriggerEnter(Collider collider) { }
		public void OnTriggerStay(Collider collider) { }
		public void OnTriggerExit(Collider collider) { }
	}
}
