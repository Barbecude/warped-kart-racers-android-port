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
	public class ProximityHomingProjectile : ProjectileUsable
	{
		private HomingProjectileLogic _homingProjectileLogic;
		private WeaponAudio _weaponAudio;
		private float _physicsColliderRadius;
		private float _cosHalfFOV;
		private float _targetWarningRangeMin;
		private float _targetWarningRangeMax;
		private KartComposite _firstKartTargetSpotted;
		private bool _canSeeTargetThisFrame;
		private bool _searchedOnce;
		private float _reLockOnTimer;
		public ProximityHomingProjectileDefinition ProximityHomingProjectileDefinition { get => default; }
		public ProximityHomingProjectileBehaviour ProximityHomingBehaviour { get => default; }
		public bool CanTrack { get => default; }
		public bool AttemptingReLockOn { get => default; }
		public virtual void Init(UsableManager usableManager, IContext context, AtlasDefinitions atlasDefinitions, AchievementManager achievementManager) { }
		public virtual void DeInit() { }
		public void OnExitPool(ProximityHomingProjectileDefinition definition, ProximityHomingProjectileBehaviour proximityBehaviour) { }
		public void OnExitPool(ProximityHomingProjectileDefinition definition, ProximityHomingProjectileBehaviour proximityBehaviour, KartComposite kartComposite, int groupId, int sequenceId) { }
		public virtual void OnEnterPool() { }
		public virtual void Use() { }
		public virtual void Update(IUpdateParams updateParams) { }
		public virtual void EarlyUpdate(IUpdateParams updateParams) { }
		public virtual void OnTriggerEnter(Collider collider) { }
		public virtual void Destroy() { }
		protected virtual void FixedUpdateGameplay(IUpdateParams updateParams) { }
		protected virtual void DeSpawn(bool destroyWithVFX) { }
		protected virtual void CreateDeSpawnVfx() { }
		protected virtual void ForceToFloor() { }
		protected virtual void CollideWithFloor(ContactPoint point) { }
		protected virtual void CollideWithEnvironment(ContactPoint point) { }
		private KartComposite GetClosestKart() { return default; }
		public float GetDistanceRatioToTarget() { return default; }
		private KartComposite FindKartTarget() { return default; }
		private void StartTargetLostTimer() { }
		private void UpdateReLockOnTimer(float deltaTime) { }
		private void LoseTarget() { }
		private void OnTearDownParamsInternal() { }
	}
}
