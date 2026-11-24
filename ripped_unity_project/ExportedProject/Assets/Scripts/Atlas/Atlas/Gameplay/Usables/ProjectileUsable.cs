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
	public abstract class ProjectileUsable : CollidableUsable
	{
		protected GameObject _lastBounceEnvironment;
		protected float _lastGameplayBounceTimer;
		protected const float _gameplayBounceCounterCooldownTime = 0.2;
		protected float _lastPhysicsBounceCooldownTimer;
		protected const float _physicsBounceCooldownTime = 0.05;
		protected Vector3 _dir;
		protected int _bounceCount;
		protected bool _isInFreeFall;
		protected ProjectilePhysics _projectilePhysics;
		protected Transform _transform;
		protected ProjectileUsable.FloorHitData _previousFloorHitData;
		protected bool _hasYMin;
		protected float _yMinValue;
		protected bool _overrideY;
		protected bool _stopForceToFloor;
		protected float _speed;
		protected bool _isGhostProjectile;
		protected bool _velocityAsDestroyIndicator;
		protected AudioEvent _audioEvent;
		private bool _firstUsedFlag;
		private int _didNotMoveEnoughCounter;
		private Vector2 _previousXZPos;
		private const int _didNotMoveDespawnThreshold = 20;
		private float _floorRaycastDistance;
		private bool _reflectWhenStuck;
		private LayerMask _rayCastMask;
		private bool _attemptedRemoteHit;
		private float _noMovementTime;
		private const float MaxTimeNoMovement = 0.6;
		private bool _hasVelocityUpdatedOnce;
		private float _ghostingTime;
		private const float _setPosForwardBackwardRaycastDist = 1;
		private const float _setPosFloorRaycastYDist = 2;
		private Vector3 _previousLinearVelocity;
		private Vector3 _previousAngularVelocity;
		private Vector3 _previousPosition;
		private Quaternion _previousRotation;
		private int _hitFlagOffset;
		private int _hitSyncIdOffset;
		public ProjectileUsableDefinition ProjectileUsableDefinition { get => default; }
		public bool IsGhostProjectile { get => default; }
		public virtual void Init(UsableManager usableManager, IContext context, AtlasDefinitions atlasDefinitions, AchievementManager achievementManager) { }
		public virtual void DeInit() { }
		public void OnExitPool(ProjectileUsableDefinition projectileUsableDefinition, CollidableUsableBehaviour behaviour) { }
		public void OnExitPool(ProjectileUsableDefinition projectileUsableDefinition, CollidableUsableBehaviour collidableUsableBehaviour, KartComposite kartComposite, int groupId, int sequenceId) { }
		public virtual void OnEnterPool() { }
		public void SetYMinValue(float yMin, bool hasYMin) { }
		public virtual void Use() { }
		public void Use(Vector3 direction) { }
		public void Use(Vector3 direction, Vector3 initalVelocity) { }
		protected virtual void FixedUpdateGameplay(IUpdateParams updateParams) { }
		public virtual void PreFixedUpdate(IUpdateParams updateParams) { }
		public virtual void FixedUpdate(IUpdateParams updateParams) { }
		public virtual void EarlyUpdate(IUpdateParams updateParams) { }
		public virtual void Destroy() { }
		public virtual void PlayUseSound() { }
		public virtual void PlayRicochetSound() { }
		public virtual void PlayKillSound(KartComposite kart) { }
		public virtual void OnCollisionEnter(Collision collision) { }
		public virtual void OnCollisionStay(Collision collision) { }
		protected void SetStartPosition() { }
		private void UpdatePhysicsTimers(float deltaTime) { }
		protected void ForceToFloorSphere(float colliderRadius, bool matchNormalOrientation) { }
		protected virtual void ForceToFloorRemote(float colliderRadius) { }
		protected virtual void ForceToFloor(ProjectileUsable.FloorHitData floorHitData, float centreToEdgeColliderDist, Vector3 position, float floorPerimeterGap, bool setTransform) { }
		protected void SetForceToFloorNetworkFlag(bool forceToFloor) { }
		protected void SetHitNetworkFlag(bool hit) { }
		protected void SetHitSyncIdNetwork(uint syncId) { }
		protected bool GetForceToFloorNetworkFlag() { return default; }
		protected bool GetHitNetworkFlag() { return default; }
		protected uint GetHitSyncId() { return default; }
		protected void ReflectBounce(Vector3 normal, GameObject collidedWith) { }
		protected void SetFreeFall(bool b) { }
		protected void SetToGhostProjectile(bool deSpawnVfx, bool ghosting) { }
		protected void SetupDespawnVFX(VFXBehaviour vfx, UsableDefinition.DespawnVFXData data) { }
		protected virtual void CreateDeSpawnVfx() { }
		private void StartUsedPhysics(IUpdateParams updateParams) { }
		private void PhysicsUpdate(IUpdateParams updateParams) { }
		private void HandleExpectedMovement() { }
		private void UpdateVelocity(bool overrideY) { }
		private void OnTearDownParamsInternal() { }
		protected ProjectileUsable.FloorHitData RaycastProjectedNTimes(float centreToBounds, Vector3 startingPosition, int numOfProjections) { return default; }
		private void UpdateReplicator(IUpdateParams tick) { }
	}
}
