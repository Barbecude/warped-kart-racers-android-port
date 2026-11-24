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
	public class PlacementHomingProjectile : ProjectileUsable
	{
		private HomingProjectileLogic _homingProjectileLogic;
		private float _triggerRadius;
		private float _triggerLength;
		private float _currentTrackingRange;
		private bool _canSeeTargetThisFrame;
		private float _floorPerimeterGap;
		private float _targetWarningRangeMin;
		private float _targetWarningRangeMax;
		private float _currentVisualSteer;
		private Vector3 _previousDir;
		private bool _attachToTargetKart;
		private float _attachToKartTimer;
		private float _attachKartSlerpTimer;
		private float _attachKartSlerpTime;
		private float _attachKartLerpTimer;
		private float _attachKartLerpTime;
		private float _hitTriggerDistSq;
		private Quaternion _launchLookat;
		private Vector3 _launchDir;
		private bool _charStartUse;
		private float _startUseSlerpTimer;
		private float _startUseSlerpTime;
		private const float _rotateTime = 0.3;
		private float _rotateTimer;
		private float _transitionToInFlightSpeedStartTime;
		private float _transitionToEndStartTime;
		private WeaponAudio _weaponAudio;
		public PlacementHomingProjectileBehaviour PlacementHomingBehaviour { get => default; }
		public PlacementHomingProjectileDefinition PlacementHomingProjectileDefinition { get => default; }
		public virtual void Init(UsableManager usableManager, IContext context, AtlasDefinitions atlasDefinitions, AchievementManager achievementManager) { }
		public virtual void DeInit() { }
		public void OnExitPool(PlacementHomingProjectileDefinition definition, PlacementHomingProjectileBehaviour placementHomingProjectileBehaviour) { }
		public void OnExitPool(PlacementHomingProjectileDefinition definition, PlacementHomingProjectileBehaviour placementHomingProjectileBehaviour, KartComposite kartComposite, int groupId, int sequenceId) { }
		public virtual void OnEnterPool() { }
		public virtual void OnCharacterStartUse() { }
		public virtual void Use() { }
		public virtual void FixedUpdate(IUpdateParams updateParams) { }
		public virtual void Update(IUpdateParams updateParams) { }
		public virtual void EarlyUpdate(IUpdateParams updateParams) { }
		public float GetDistanceRatioToTarget() { return default; }
		private void ComputeVisualSteering(float deltaTime) { }
		private void UpdateHitTargetAnim() { }
		private void UpdateFloorPerimeterGap() { }
		private void UpdateToInFlightSpeed(float currentTime) { }
		private void UpdateToEndSpeed(float currentTime) { }
		protected virtual void FixedUpdateGameplay(IUpdateParams updateParams) { }
		public virtual void OnTriggerEnter(Collider collider) { }
		protected virtual void CreateDeSpawnVfx() { }
		private void LoseTarget() { }
		public virtual void Destroy() { }
		protected virtual void DeSpawn(bool destroyWithVFX) { }
		public virtual void OnAoEHit() { }
		protected virtual void ForceToFloor() { }
		protected virtual void ForceToFloorRemote(float colliderRadius) { }
		private void HandleMinY() { }
		private ProjectileUsable.FloorHitData ForceToFloorLogic() { return default; }
		protected virtual void CollideWithEnvironment(ContactPoint point) { }
		protected virtual void CollideWithFloor(ContactPoint point) { }
		private void StartTrackingKartTarget(float currentTime) { }
		private void StopTrackingKartTarget(float currentTime) { }
		private void OnTearDownParamsInternal() { }
		private KartComposite GetTarget() { return default; }
	}
}
