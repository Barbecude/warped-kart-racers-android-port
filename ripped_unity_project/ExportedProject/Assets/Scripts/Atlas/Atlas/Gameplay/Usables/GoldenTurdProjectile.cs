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
	public class GoldenTurdProjectile : ProjectileUsable
	{
		private float _physicsColliderRadius;
		private WeaponAudio _weaponAudio;
		private bool _hasReceivedNetworkUpdate;
		private float _sendTimerSec;
		private bool _hasRemoteStartPosition;
		private Vector3 _remotePosition;
		public GoldenTurdProjectileDefinition GoldenTurdProjectileDefinition { get => default; }
		public GoldenTurdProjectileBehaviour GoldenTurdProjectileBehaviour { get => default; }
		public virtual void DeInit() { }
		public void OnExitPool(GoldenTurdProjectileDefinition definition, GoldenTurdProjectileBehaviour goldenTurdProjectileBehaviour) { }
		public void OnExitPool(GoldenTurdProjectileDefinition definition, GoldenTurdProjectileBehaviour goldenTurdProjectileBehaviour, KartComposite kartComposite, int groupId, int sequenceId) { }
		public virtual void OnEnterPool() { }
		public virtual void SetRemoteUseParams(bool hasStartPosition, Vector3 startPosition) { }
		public virtual void Use() { }
		public virtual void Destroy() { }
		public virtual void EarlyUpdate(IUpdateParams updateParams) { }
		public virtual void Update(IUpdateParams updateParams) { }
		protected virtual void DeSpawn(bool destroyWithVFX) { }
		protected virtual void ForceToFloor() { }
		public virtual void OnTriggerEnter(Collider collider) { }
		protected virtual void CollideWithFloor(ContactPoint point) { }
		protected virtual void CollideWithEnvironment(ContactPoint point) { }
		private void OnTearDownParamsInternal() { }
	}
}
