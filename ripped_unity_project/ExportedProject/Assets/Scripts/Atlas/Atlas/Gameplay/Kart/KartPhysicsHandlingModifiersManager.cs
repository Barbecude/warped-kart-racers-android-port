using Atlas.Gameplay.Usables;
using Unity.Mathematics;
using Unity.Profiling;
using UnityEngine;

namespace Atlas.Gameplay.Kart
{
	public class KartPhysicsHandlingModifiersManager
	{
		public const float FlipOutDisableItemUseDuration = 2f;

		protected KartPhysics _kartPhysics;
		protected float _aiSpeedMod = 1f;
		protected KartHandlingSurfaceModifiers _currentSurfaceMod;
		protected KartTriggerEffectParameters _currentSpinoutTriggerEffects;
		protected KartTriggerEffectParameters _currentPushTriggerEffects;
		protected KartTriggerEffectParameters _currentSpeedLimitTriggerEffects;
		protected KartTriggerEffectParameters _currentMagneticTriggerEffects;
		protected KartHandlingTurningModifiers _currentKartHandlingTurningModifiers = KartHandlingTurningModifiers.CreateDefault();
		protected float _spinoutTimer = -1f;
		protected float _invulnTimer = -1f;
		protected float _pushCooldownTimer = -1f;
		protected float _spinoutDuration;
		protected float _speedReductionTimer = -1f;
		protected float _speedReductionCooldownTimer = -1f;
		protected bool _pushEffectPending;
		protected float3 _pushVelPending;
		protected float _handlingTurningModifierTimer = 1f;
		protected float _disableItemUseTimer = -1f;
		protected float _transitionInTime;
		protected float _transitionInTimer = -1f;
		protected float _portalExitDelayTime;
		protected float _portalExitDelayTimer = -1f;
		protected float _exitingPortalTime;
		protected float _exitPortalInvulnTime;
		protected float _exitingPortalTimer = -1f;
		protected float _enteringPortalTime;
		protected float _enteringPortalTimer = -1f;
		protected float3 _respawnPosition;
		protected Quaternion _respawnRotation;
		protected ShieldUsable _currentShieldUsable;
		protected float _aiSpeedModifier = 1f;
		private bool _hasStartedRespawnThisFrame;
		private bool _hasUpdatedRespawnThisFrame;
		private static readonly ProfilerMarker UpdateProfilerMarker = new ProfilerMarker("KartPhysicsHandlingModifiersManager.Update()");
		private float _currentDeltaTime;

		public event OnKartRespawnDelegate OnKartRespawnEnd;
		public event OnKartRespawnDelegate OnStartTransitionEnd;
		public event OnKartRespawnDelegate OnKartPortalEntered;
		public event OnKartRespawnDelegate OnTransitionEnd;
		public event OnKartSpinOutDelegate OnSpinOutTriggered;

		public bool HasStartedRespawnThisFrame => _hasStartedRespawnThisFrame;
		public bool IsHitSpin => _spinoutTimer > 0f;
		public KartTriggerSpinoutType SpinoutType => _currentSpinoutTriggerEffects != null ? _currentSpinoutTriggerEffects.SpinoutType : KartTriggerSpinoutType.Spin;
		public bool IsInvuln => _invulnTimer > 0f;
		public bool IsPushCoolDown => _pushCooldownTimer > 0f;
		public bool IsSpeedReduced => _speedReductionTimer > 0f;
		public bool IsSpeedReductionCooldown => _speedReductionCooldownTimer > 0f;

		public float SpinoutFactor
		{
			get
			{
				if (!_kartPhysics.Replicator.SyncOwner)
				{
					return 0f;
				}
				float brakeFactor = _currentSpinoutTriggerEffects != null ? _currentSpinoutTriggerEffects.SpinoutBrakeFactor : 1f;
				return (_spinoutDuration * (_spinoutDuration - _spinoutTimer)) * brakeFactor;
			}
		}

		public float SpinoutDuration => _spinoutDuration;
		public KartTriggerEffectParameters CurrentSpinoutTriggerEffects => _currentSpinoutTriggerEffects;
		public KartTriggerEffectParameters CurrentPushTriggerEffects => _currentPushTriggerEffects;
		public KartTriggerEffectParameters CurrentSpeedLimitTriggerEffects => _currentSpeedLimitTriggerEffects;
		public KartTriggerEffectParameters CurrentMagneticTriggerEffects => _currentMagneticTriggerEffects;
		public bool PushEffectPending => _pushEffectPending;
		public bool IsRespawning => _transitionInTimer > 0f || _portalExitDelayTimer > 0f || _enteringPortalTimer > 0f || _exitingPortalTimer > 0f;
		public bool HasValidShield => _currentShieldUsable != null && _currentShieldUsable.IsValid();
		public ShieldUsable CurrentShieldUsable => _currentShieldUsable;

		public void Init(KartPhysics kartPhysics)
		{
			_kartPhysics = kartPhysics;
		}

		public void DeInit()
		{
			_kartPhysics = null;
		}

		public void OnUseShield(ShieldUsable shieldUsable)
		{
			if (_currentShieldUsable != null && _currentShieldUsable.IsValid())
			{
				_currentShieldUsable.MarkForDestroy(false);
			}
			_currentShieldUsable = shieldUsable;
		}

		public void ConsumeShieldHit(float invulnPeriod = -1f)
		{
			if (_currentShieldUsable != null)
			{
				_currentShieldUsable.ConsumeHit(true);
				if (!_currentShieldUsable.IsValid())
				{
					_currentShieldUsable = null;
				}
			}
			if (invulnPeriod >= 0f && _invulnTimer < invulnPeriod)
			{
				_invulnTimer = invulnPeriod;
			}
		}

		public void OnShieldExpired(ShieldUsable shieldUsable)
		{
			if (_currentShieldUsable == shieldUsable)
			{
				_currentShieldUsable = null;
			}
		}

		public void SetRespawning(Vector3 pos, Quaternion rot, float transitionInTime, float portalExitDelay, float enteringPortalTime, float exitingPortalTime, float exitPortalInvulnTime)
		{
			if (!IsRespawning)
			{
				_hasStartedRespawnThisFrame = true;
				_transitionInTime = transitionInTime;
				_portalExitDelayTime = portalExitDelay;
				_exitingPortalTime = exitingPortalTime;
				_exitPortalInvulnTime = exitPortalInvulnTime;
				_enteringPortalTime = enteringPortalTime;
				_enteringPortalTimer = enteringPortalTime;
				_respawnPosition = pos;
				_respawnRotation = rot;
			}

			if (IsRespawning)
			{
				SetKinematic(true, KartKinematicChangeReason.Respawning);
				_kartPhysics.ResetStates();
				UpdateRespawning(_currentDeltaTime);
			}
		}

		public void Update(float deltaTime)
		{
			using (UpdateProfilerMarker.Auto())
			{
				_currentDeltaTime = deltaTime;
				if (_kartPhysics == null || _kartPhysics.PhysicsHandling == null)
				{
					return;
				}

				_currentSurfaceMod = _kartPhysics.PhysicsHandling.GetHandlingModifierFromSurfaceType(_kartPhysics.Body.CurrentSurfaceType);

				if (_spinoutTimer > 0f)
				{
					_spinoutTimer -= deltaTime;
					if (_spinoutTimer <= 0f)
					{
						_kartPhysics.PhysicsInput.SetGamePlayFreezeAndBrake(false);
						_currentSpinoutTriggerEffects = null;
					}
				}

				if (_invulnTimer > 0f)
				{
					_invulnTimer -= deltaTime;
				}

				if (_pushCooldownTimer > 0f)
				{
					_pushCooldownTimer -= deltaTime;
					if (_pushCooldownTimer <= 0f)
					{
						_currentPushTriggerEffects = null;
					}
				}

				if (_speedReductionTimer > 0f)
				{
					_speedReductionTimer -= deltaTime;
					if (_speedReductionTimer <= 0f)
					{
						_currentSpeedLimitTriggerEffects = null;
					}
				}

				if (_speedReductionCooldownTimer > 0f)
				{
					_speedReductionCooldownTimer -= deltaTime;
				}

				UpdateRespawning(deltaTime);

				if (_handlingTurningModifierTimer >= 0f)
				{
					_handlingTurningModifierTimer -= deltaTime;
					if (_handlingTurningModifierTimer < 0f)
					{
						_currentKartHandlingTurningModifiers.Reset();
					}
				}

				if (_disableItemUseTimer >= 0f)
				{
					_disableItemUseTimer -= deltaTime;
					if (_disableItemUseTimer < 0f)
					{
						_kartPhysics.PhysicsInput.SetDisableItemUse(false);
					}
				}
			}
		}

		public void LateUpdate()
		{
			_hasStartedRespawnThisFrame = false;
			_hasUpdatedRespawnThisFrame = false;
		}

		public float3 ConsumePendingPushVel()
		{
			if (!_pushEffectPending)
			{
				return float3.zero;
			}
			_pushEffectPending = false;
			return _pushVelPending;
		}

		public void SetKartTurningModifiers(KartHandlingTurningModifiers turningModifiers, float duration)
		{
			_handlingTurningModifierTimer = duration;
			_currentKartHandlingTurningModifiers = turningModifiers;
		}

		public void SetKartTriggerEffect(in KartTriggerEffectParameters triggerParam, Vector3 triggerPosition)
		{
			if (triggerParam == null)
			{
				return;
			}

			float speed = _kartPhysics.Body.Speed;

			if (triggerParam.SpinDuration > 0f && speed >= triggerParam.SpeedThresholdForSpinActivation && _invulnTimer <= 0f)
			{
				if (_currentShieldUsable != null && _currentShieldUsable.IsValid())
				{
					ConsumeShieldHit(0.2f);
				}
				else
				{
					_currentSpinoutTriggerEffects = triggerParam;
					if (triggerParam.SpinoutType == KartTriggerSpinoutType.Flip)
					{
						_disableItemUseTimer = FlipOutDisableItemUseDuration;
						_kartPhysics.PhysicsInput.SetDisableItemUse(true);
					}
					SetSpinout(triggerParam.SpinDuration, triggerParam.SpinInvulnPeriod);
					return;
				}
			}

			if (triggerParam.IsPushEffect && _pushCooldownTimer <= 0f)
			{
				float3 dir;
				if (!triggerParam.RelativePushVector)
				{
					dir = triggerParam.AbsolutePushDirectionWorld;
				}
				else
				{
					dir = _kartPhysics.Body.WorldPosition - (float3)triggerPosition;
				}

				if (triggerParam.IgnoreVerticalPushDir)
				{
					dir.y = 0f;
				}

				dir = math.normalizesafe(dir);

				float force = triggerParam.RelativeForceToKartSpeed
					? speed * triggerParam.RelativePushForceModifier
					: triggerParam.AbsolutePushForce;

				_pushEffectPending = true;
				_pushVelPending = dir * force;
				_pushCooldownTimer = triggerParam.PushCooldown;
				_currentPushTriggerEffects = triggerParam;
			}

			if (triggerParam.IsSpeedReductionEffect && _speedReductionCooldownTimer <= 0f)
			{
				_currentSpeedLimitTriggerEffects = triggerParam;
				_speedReductionTimer = triggerParam.SpeedReductionDuration;
				_speedReductionCooldownTimer = triggerParam.SpeedReductionCooldown;
			}
		}

		public void SetSpinout(float time, float invulnTime)
		{
			if (_invulnTimer > 0f)
			{
				return;
			}

			_spinoutTimer = time;
			_invulnTimer = invulnTime;
			_spinoutDuration = time;
			_kartPhysics.PhysicsInput.SetGamePlayFreezeAndBrake(time > 0f);
			OnSpinOutTriggered?.Invoke();
		}

		public void SetAISpeedModifier(float speedMod)
		{
			_aiSpeedModifier = speedMod;
		}

		public float GetSpeedModifier()
		{
			return _currentSurfaceMod != null ? _currentSurfaceMod.SpeedMod * _aiSpeedModifier : 1f;
		}

		public float GetReverseSpeedModifier()
		{
			return _currentSurfaceMod != null ? _currentSurfaceMod.ReverseSpeedMod : 1f;
		}

		public float GetBrakingModifier()
		{
			return _currentSurfaceMod != null ? _currentSurfaceMod.BrakingMod : 1f;
		}

		public float GetDriftSpeedMinModifier()
		{
			return _currentSurfaceMod != null ? _currentSurfaceMod.DriftSpeedMinMod : 1f;
		}

		public float GetSurfaceDecelerationFactor()
		{
			return _currentSurfaceMod != null ? _currentSurfaceMod.SurfaceDecelerationFactor : 1f;
		}

		public float GetRotSpeedFromKartSpeedModifier()
		{
			float val = _currentKartHandlingTurningModifiers.RotSpeedFromKartSpeedMod;
			if (_currentSurfaceMod != null)
			{
				val *= _currentSurfaceMod.RotSpeedFromKartSpeedMod;
			}
			return val;
		}

		public float GetRotSpeedFromSteerAngleModifier()
		{
			float val = _currentKartHandlingTurningModifiers.RotSpeedFromSteerAngleMod;
			if (_currentSurfaceMod != null)
			{
				val *= _currentSurfaceMod.RotSpeedFromSteerAngleMod;
			}
			return val;
		}

		public float GetTireGripModifier()
		{
			float val = _currentKartHandlingTurningModifiers.TireGripMod;
			if (_currentSurfaceMod != null)
			{
				val *= _currentSurfaceMod.TireGripMod;
			}
			return val;
		}

		public float GetTurnSpeedCompensationModifier()
		{
			float val = _currentKartHandlingTurningModifiers.TurnSpeedCompensationMod;
			if (_currentSurfaceMod != null)
			{
				val *= _currentSurfaceMod.TurnSpeedCompensationMod;
			}
			return val;
		}

		public float GetTurnSpeedDriftCompensationModifier()
		{
			return _currentSurfaceMod != null ? _currentSurfaceMod.TurnSpeedDriftCompensationMod : 1f;
		}

		public float GetRotSpeedDriftRatioModifier()
		{
			return _currentSurfaceMod != null ? _currentSurfaceMod.RotSpeedDriftRatioMod : 1f;
		}

		public float GetTireGripDriftMinModifier()
		{
			return _currentSurfaceMod != null ? _currentSurfaceMod.TireGripDriftMinMod : 1f;
		}

		public float GetTireGripDriftMaxModifier()
		{
			return _currentSurfaceMod != null ? _currentSurfaceMod.TireGripDriftMaxMod : 1f;
		}

		public float GetHopForceModifier()
		{
			return _currentSurfaceMod != null ? _currentSurfaceMod.HopForceMod : 1f;
		}

		public void SetKinematic(bool value, KartKinematicChangeReason reason)
		{
			bool canChange = reason == KartKinematicChangeReason.Debug || _kartPhysics.Replicator.SyncOwner;
			if (canChange && _kartPhysics.RigidBody.isKinematic != value)
			{
				_kartPhysics.RigidBody.isKinematic = value;
			}
		}

		public void ClearSpeedLimitEffect()
		{
			_speedReductionTimer = -1f;
			_currentSpeedLimitTriggerEffects = null;
		}

		public void SetInvuln(float duration)
		{
			if (_invulnTimer <= 0f)
			{
				_invulnTimer = duration;
			}
		}

		private void ResetEffects()
		{
			_speedReductionTimer = -1f;
			_speedReductionCooldownTimer = -1f;
			_currentSpeedLimitTriggerEffects = null;
			_pushCooldownTimer = -1f;
			_spinoutTimer = -1f;
			_invulnTimer = -1f;
			_kartPhysics.PhysicsInput.SetGamePlayFreezeAndBrake(false);
			_currentSpinoutTriggerEffects = null;
			_currentPushTriggerEffects = null;

			if (_currentShieldUsable != null && _currentShieldUsable.IsValid())
			{
				_currentShieldUsable.MarkForDestroy(false);
				_currentShieldUsable = null;
			}
		}

		private void UpdateRespawning(float deltaTime)
		{
			_hasUpdatedRespawnThisFrame = true;

			if (_enteringPortalTimer >= 0f)
			{
				_enteringPortalTimer -= deltaTime;
				if (_enteringPortalTimer < 0f)
				{
					_enteringPortalTimer = -1f;
					OnKartPortalEntered?.Invoke();
					_transitionInTimer = _transitionInTime;
				}
			}
			else if (_transitionInTimer >= 0f)
			{
				_transitionInTimer -= deltaTime;
				if (_transitionInTimer < 0f)
				{
					_transitionInTimer = -1f;
					_kartPhysics.Reset(_respawnPosition, _respawnRotation, Vector3.zero);
					ResetEffects();
					_portalExitDelayTimer = _portalExitDelayTime;
					OnStartTransitionEnd?.Invoke();
					_invulnTimer = _exitPortalInvulnTime;
				}
			}
			else if (_portalExitDelayTimer >= 0f)
			{
				_portalExitDelayTimer -= deltaTime;
				if (_portalExitDelayTimer <= 0f)
				{
					_portalExitDelayTimer = -1f;
					OnTransitionEnd?.Invoke();
					_exitingPortalTimer = _exitingPortalTime;
				}
			}
			else if (_exitingPortalTimer >= 0f)
			{
				_exitingPortalTimer -= deltaTime;
				if (_exitingPortalTimer <= 0f)
				{
					_exitingPortalTimer = -1f;
					SetKinematic(false, KartKinematicChangeReason.RespawningEnded);
					OnKartRespawnEnd?.Invoke();
				}
			}
		}
	}
}
