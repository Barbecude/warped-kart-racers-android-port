using System;
using Core.Application;
using Core.Networking;
using Core.Services;
using Unity.Collections;
using Unity.Mathematics;
using Unity.Profiling;
using UnityEngine;

namespace Atlas.Gameplay.Kart
{
	public class KartPhysics
	{
		protected KartRootBehaviour _physicsRootBehaviour;
		protected KartPhysicsSetup _setup;
		protected KartPhysicsHandling _handling;
		protected KartPhysicsInput _input;
		protected GameObject _colliders;
		protected Replicator _replicator;
		private KartPhysicsHandlingModifiersManager _handlingModifiersManager;
		private KartComposite _kartComposite;
		private Rigidbody _rigidBody;
		private KartPhysicsState _state;
		private KartPhysicsConfig _config;
		private Vector3 _resetPosition;
		private Quaternion _resetRotation;
		private Vector3 _resetVelocity;
		private bool _reset;
		private bool _intialized;
		private KartVisualSettingsDefinition _kartVisualSettingsDefinition;
		private BurstCompatiblePhysicsHandling _handlingBurst;
		private KartManager _kartManager;
		private NativeArray<DriftBoostLevel> _driftBoostLevelsTable;
		private KartSuspensionState[] _wheels;
		private KartPhysicsRaycastResult[] _suspensionsRaycastResults;
		private RaycastHit[] _rayCastHitResults;
		private bool _burstContainersInited;
		private float _colCoolDown;
		private float _colTriggerCoolDown;
		private bool _performRaycast;
		private bool _performedRaycastThisFrame;
		private bool _preparedJobThisFixedUpdate;
		private int _kartPhysicsLayer;
		private int _kartPhysicsGhostLayer;
		private float _initialMass;
		private byte _hopCounter;
		private byte _hopBoostCounter;
		private byte _respawnCounter;

		private static readonly ProfilerMarker EarlyUpdateProfilerMarker = new ProfilerMarker("KartPhysics.EarlyUpdate()");
		private static readonly ProfilerMarker FixedUpdateProfilerMarker = new ProfilerMarker("KartPhysics.FixedUpdate()");
		private static readonly ProfilerMarker PreFixedUpdateProfilerMarker = new ProfilerMarker("KartPhysics.PreFixedUpdate()");
		private static readonly ProfilerMarker PostFixedUpdateProfilerMarker = new ProfilerMarker("KartPhysics.PostFixedUpdate()");

		public event OnTriggerDelegate OnTriggerEnterDelegate;
		public event OnTriggerDelegate OnTriggerExitDelegate;
		public event OnCollisionDelegate OnCollisionEnterDelegate;
		public event OnCollisionDelegate OnCollisionExitDelegate;

		public KartPhysicsHandlingModifiersManager HandlingModifiersManager => _handlingModifiersManager;
		public KartPhysicsConfig KartPhysicsConfig => _config;
		public GameObject GameObject => _rigidBody.gameObject;
		public Rigidbody RigidBody => _rigidBody;
		public Replicator Replicator => _replicator;
		public KartPhysicsInput PhysicsInput => _input;
		public KartPhysicsHandling PhysicsHandling => _handling;
		public ref readonly KartPhysicsState PhysicsState => ref _state;
		public ref readonly KartSuspensionState[] Wheels => ref _wheels;
		public ref readonly KartSuspensionState Suspension => ref _state.Suspension;
		public ref readonly KartPhysicsLngForceState LngForce => ref _state.LngForce;
		public ref readonly KartPhysicsForceState LatForce => ref _state.LatForce;
		public ref readonly KartPhysicsForceState VertForce => ref _state.VertForce;
		public ref readonly KartPhysicsForceState GlidingForce => ref _state.GlidingForce;
		public ref readonly KartPhysicsRotForceState RotForce => ref _state.RotForce;
		public ref readonly KartPhysicsAeroState Aero => ref _state.Aero;
		public ref readonly KartPhysicsBodyState Body => ref _state.Body;
		public ref readonly KartPhysicsEventsState Events => ref _state.Events;
		public ref readonly KartPhysicsVisualState VisualState => ref _state.VisualState;
		public bool HitInvuln => _handlingModifiersManager.IsInvuln;
		public bool HopInvuln => _state.Body.HopInvuln;
		public bool IsInvuln => _handlingModifiersManager.IsInvuln || _state.Body.HopInvuln;
		public float WheelRotation => _state.VisualState.WheelRotation;
		public float SteerAngle => _state.VisualState.SteerAngle;
		public float SteerWheelDisplay => _state.VisualState.SteerWheelDisplay;
		public float DriftDisplay => _state.VisualState.DriftDisplay;
		public KartPhysicsSetup KartSetup => _setup;

		public KartPhysics()
		{
			_config = new KartPhysicsConfig(4);
			_resetPosition = Vector3.zero;
			_resetRotation = Quaternion.identity;
			_resetVelocity = Vector3.zero;
			_performRaycast = true;
		}

		public void Init(KartComposite kartComposite, KartRootBehaviour kartRootBehaviour, KartPhysicsInput input, KartPhysicsHandling handling, KartVisualSettingsDefinition kartVisualsSettings, bool performRaycastFirst)
		{
			_kartComposite = kartComposite;
			_kartPhysicsLayer = LayerMask.NameToLayer("KartPhysics");
			_kartPhysicsGhostLayer = LayerMask.NameToLayer("KartPhysicsGhost");
			_physicsRootBehaviour = kartRootBehaviour;
			_setup = kartRootBehaviour.KartPhysicsSetup;
			_replicator = kartRootBehaviour.Replicator;
			_rigidBody = kartRootBehaviour.RigidBody;
			_input = input;
			_colliders = kartRootBehaviour.Colliders;
			_kartVisualSettingsDefinition = kartVisualsSettings;
			_handling = handling;
			_handling.Init();

			_handlingModifiersManager = new KartPhysicsHandlingModifiersManager();
			_handlingModifiersManager.Init(this);

			_handlingBurst = BurstCompatiblePhysicsHandling.FromKartPhysics(_handling, _rigidBody.mass);

			_rayCastHitResults = new RaycastHit[4];
			for (int i = 0; i < _rayCastHitResults.Length; i++)
			{
				_rayCastHitResults[i] = AtlasKartPhysicsConsts.EmptyRayCastHit;
			}

			InitPhysics();
			InitCollidersAndRigidbody();

			_performRaycast = performRaycastFirst;
			_performedRaycastThisFrame = false;
			_initialMass = _rigidBody.mass;
		}

		public void RayCastRBToGround()
		{
			if (Physics.Raycast(_rigidBody.position, -(float3)Vector3.up, out RaycastHit hit, 2.5f, AtlasKartPhysicsConsts.FloorAndObstacleLayerMask, QueryTriggerInteraction.Ignore))
			{
				_rigidBody.position = hit.point;
				float3 normal = hit.normal;
				quaternion rot = quaternion.LookRotationSafe(new float3(0f, 0f, 1f), normal);
				Quaternion newRot = _rigidBody.rotation * (Quaternion)rot;
				_rigidBody.rotation = newRot;
				_rigidBody.transform.rotation = newRot;
			}
		}

		public void DeInit()
		{
			KartPhysicsJobDispose();
			DisablePhysics();
			_handlingModifiersManager?.DeInit();
			_intialized = false;
		}

		private void InitCollidersAndRigidbody()
		{
			if (_colliders != null)
			{
				_colliders.SetActive(false);
			}
			if (_rigidBody != null)
			{
				_rigidBody.constraints = RigidbodyConstraints.FreezeRotationX | RigidbodyConstraints.FreezeRotationZ;
				_rigidBody.isKinematic = true;
			}
		}

		private void PostInitCollidersAndRigidbody()
		{
			if (_colliders != null)
			{
				_colliders.SetActive(true);
			}
			if (_rigidBody != null)
			{
				_rigidBody.isKinematic = _replicator != null && !_replicator.SyncOwner;
			}
		}

		private void KartPhysicsJobInit()
		{
			if (_kartComposite != null && _kartComposite.GameContext != null)
			{
				_kartManager = _kartComposite.GameContext.KartManager;
			}

			if (_handling != null && _handling.DriftBoostLevels != null)
			{
				_driftBoostLevelsTable = new NativeArray<DriftBoostLevel>(_handling.DriftBoostLevels.Length, Allocator.Persistent);
				for (int i = 0; i < _handling.DriftBoostLevels.Length; i++)
				{
					_driftBoostLevelsTable[i] = _handling.DriftBoostLevels[i];
				}
				_burstContainersInited = true;
			}

			if (_kartManager != null && _kartComposite != null && _kartComposite.KartManagerIndex >= 0)
			{
				int idx = _kartComposite.KartManagerIndex;
				ref KartPhysicsFixedUpdateAllJob job = ref _kartManager.FixedUpdateAllJob;
				job.DriftBoostLevelsTable = _driftBoostLevelsTable;
				job.KartCount = _kartManager.LoadedKarts.Count;

				if (_config.Wheels != null)
				{
					for (int i = 0; i < 4; i++)
					{
						job.SuspensionConfigs[idx * 5 + i] = _config.Wheels[i];
					}
					job.SuspensionConfigs[idx * 5 + 4] = _config.Suspension;
				}
			}
		}

		private void KartPhysicsJobDispose()
		{
			if (_burstContainersInited)
			{
				_driftBoostLevelsTable.Dispose();
			}
			_burstContainersInited = false;
		}

		private void DisablePhysics()
		{
			if (_colliders != null)
			{
				_colliders.SetActive(false);
			}
		}

		private void InitPhysics()
		{
			_wheels = new KartSuspensionState[4];
			_suspensionsRaycastResults = new KartPhysicsRaycastResult[5];
			for (int i = 0; i < _suspensionsRaycastResults.Length; i++)
			{
				_suspensionsRaycastResults[i] = new KartPhysicsRaycastResult
				{
					Hit = AtlasKartPhysicsConsts.EmptyRayCastHit
				};
			}

			_rigidBody.inertiaTensor = _setup.InertiaTensor;
			float3 com = _setup.CenterOfMass;
			com.y += _setup.WheelRadius - _setup.WheelRadius * 0.5f;

			_config.Body = new KartPhysicsBodyConfig(_handling);
			_state.Body.Initialize();

			int wheelCount = _wheels.Length;
			for (int i = 0; i < wheelCount; i++)
			{
				_config.Wheels[i] = new KartSuspensionConfig((KartPhysicsSetup.EWheel)i, _setup, com, _rigidBody.mass / wheelCount);
				_wheels[i].Init(in _config.Wheels[i]);
			}

			_config.Suspension = new KartSuspensionConfig(_setup, com, _rigidBody.mass);
			_state.Suspension.Init(in _config.Suspension);

			com.z = (_config.Wheels[0].RestPosition.z + _config.Wheels[2].RestPosition.z) * 0.5f;
			_rigidBody.inertiaTensorRotation = Quaternion.identity;
			_rigidBody.centerOfMass = com;

			_config.LngForce = new KartPhysicsLngForceConfig(_handling, _rigidBody);
			_config.LatForce = new KartPhysicsLatForceConfig(_handling, _rigidBody);
			_config.VertForce = new KartPhysicsVertForceConfig(_handling, _rigidBody);
			_config.GlidingForce = new KartPhysicsGlidingForceConfig(_handling, _rigidBody);
			_config.RotForce = new KartPhysicsRotForceConfig(_handling, _rigidBody);
			_config.Aero = new KartPhysicsAeroConfig(in _config.LngForce, _handling);
		}

		public void PostInit()
		{
			KartPhysicsJobInit();
			PostInitCollidersAndRigidbody();
			CacheRigidBodyValues();
			_intialized = true;
		}

		public void EarlyUpdate(IUpdateParams updateParams)
		{
			using (EarlyUpdateProfilerMarker.Auto())
			{
				if (!_intialized)
				{
					return;
				}
				if (_replicator != null && !_replicator.SyncOwner)
				{
					UpdateReplication(updateParams);
				}
			}
		}

		public void PrintState()
		{
		}

		public void PreFixedUpdate(IUpdateParams updateParams)
		{
			using (PreFixedUpdateProfilerMarker.Auto())
			{
				_preparedJobThisFixedUpdate = PreFixedUpdate(updateParams, ref _state);
			}
		}

		public void FixedUpdate(IUpdateParams updateParams)
		{
			using (FixedUpdateProfilerMarker.Auto())
			{
				FixedUpdate();
			}
		}

		public void PostFixedUpdate(IUpdateParams updateParams)
		{
			using (PostFixedUpdateProfilerMarker.Auto())
			{
				PostFixedUpdate(updateParams, ref _state);
			}
		}

		private bool PreFixedUpdate(IUpdateParams updateParams, ref KartPhysicsState stateBurst)
		{
			if (!_intialized || _kartComposite == null || _kartComposite.GameContextPlayer == null)
			{
				return false;
			}

			int kartIdx = _kartComposite.KartManagerIndex;
			if (kartIdx < 0 || _kartManager == null)
			{
				return false;
			}

			if (_replicator != null && _replicator.IsReplicating)
			{
				return false;
			}

			_rigidBody.mass = _initialMass;
			Transform rbTransform = _rigidBody.transform;
			stateBurst.Body.Forward = rbTransform.forward;
			stateBurst.Body.Right = rbTransform.right;
			stateBurst.Body.Up = rbTransform.up;
			stateBurst.Body.WorldPosition = rbTransform.position;

			if (_handlingModifiersManager.IsRespawning)
			{
				_handlingModifiersManager.Update(updateParams.FixedDeltaTime);
				stateBurst.Body.ResetStates();
				CacheRigidBodyValues();
				_kartManager.JobRegistered(kartIdx, false);
				return false;
			}

			if (_reset)
			{
				_reset = false;
				_rigidBody.velocity = _resetVelocity;
				_rigidBody.angularVelocity = Vector3.zero;
				_rigidBody.position = _resetPosition;
				_rigidBody.rotation = _resetRotation;
				rbTransform.position = _resetPosition;
				rbTransform.rotation = _resetRotation;
				_input.Data.Reset();
			}

			bool doRaycast = _performRaycast || !_performedRaycastThisFrame;
			if (doRaycast)
			{
				_performedRaycastThisFrame = true;
				float3 up = stateBurst.Body.Up;
				quaternion rbRot = rbTransform.rotation;
				float3 rbPos = rbTransform.position;

				for (int i = 0; i < 5; i++)
				{
					KartSuspensionConfig suspCfg = i < 4 ? _config.Wheels[i] : _config.Suspension;
					float3 origin = rbPos + math.mul(rbRot, suspCfg.RestPosition);
					float maxDist = suspCfg.RestLength + suspCfg.WheelRadius;
					int count = Physics.RaycastNonAlloc(origin, -up, _rayCastHitResults, maxDist, AtlasKartPhysicsConsts.FloorAndObstacleLayerMask, QueryTriggerInteraction.Ignore);

					RaycastHit bestHit = AtlasKartPhysicsConsts.EmptyRayCastHit;
					float bestDist = float.MaxValue;
					for (int h = 0; h < count; h++)
					{
						RaycastHit hit = _rayCastHitResults[h];
						if (hit.collider != null && hit.distance < bestDist)
						{
							bestDist = hit.distance;
							bestHit = hit;
						}
					}

					KartPhysicsRaycastResult res = default;
					res.Hit = bestHit;
					res.IsValid = bestHit.collider != null;
					if (res.IsValid && bestHit.collider.TryGetComponent<ObjectTagBehaviour>(out ObjectTagBehaviour tag))
					{
						res.FloorSurfaceType = tag.FloorSurfaceType;
						res.AestheticSurfaceType = tag.AestheticSurfaceType;
					}
					_suspensionsRaycastResults[i] = res;
				}
			}

			if (stateBurst.Body.IsGliding)
			{
				if (_rigidBody.useGravity)
				{
					_rigidBody.inertiaTensor = _setup.GlidingInertiaTensor;
					_rigidBody.useGravity = false;
					_rigidBody.constraints |= RigidbodyConstraints.FreezeRotationX | RigidbodyConstraints.FreezeRotationZ;
				}
			}
			else
			{
				if (!_rigidBody.useGravity)
				{
					_rigidBody.inertiaTensor = _setup.InertiaTensor;
					_rigidBody.useGravity = true;
					_rigidBody.constraints &= ~(RigidbodyConstraints.FreezeRotationX | RigidbodyConstraints.FreezeRotationZ);
				}
			}

			float3 rbVel = _rigidBody.velocity;
			float3 rbAngVel = _rigidBody.angularVelocity;
			quaternion rot = rbTransform.rotation;
			float3 pos = rbTransform.position;

			ref KartPhysicsFixedUpdateAllJob job = ref _kartManager.FixedUpdateAllJob;
			KartPhysicsFixedUpdateJobBurstAllInput jobInput = new KartPhysicsFixedUpdateJobBurstAllInput
			{
				FixedDeltaTime = updateParams.FixedDeltaTime,
				PhysicsHandling = _handlingBurst,
				PhysicsConfig = _config,
				InputData = _input.Data,
				RigidBodyVelocity = rbVel,
				RigidBodyAngularVelocity = rbAngVel,
				RigidBodyPosition = pos,
				RigidBodyRotation = rot,
				RigidBodyMass = _rigidBody.mass,
				RigidBodyCenterOfMass = _rigidBody.centerOfMass,
				Gravity = Physics.gravity,
				TurnSpeedDriftCompensationMod = _handlingModifiersManager.GetTurnSpeedDriftCompensationModifier(),
				TurnSpeedCompensationMod = _handlingModifiersManager.GetTurnSpeedCompensationModifier(),
				ReverseSpeedMod = _handlingModifiersManager.GetReverseSpeedModifier(),
				DriftSpeedMinMod = _handlingModifiersManager.GetDriftSpeedMinModifier(),
				IsHitSpin = _handlingModifiersManager.IsHitSpin,
				SpeedMod = _handlingModifiersManager.GetSpeedModifier(),
				IsSpeedReduced = _handlingModifiersManager.IsSpeedReduced,
				BrakingMod = _handlingModifiersManager.GetBrakingModifier(),
				SpinoutFactor = _handlingModifiersManager.SpinoutFactor,
				SurfaceDecelerationFactor = _handlingModifiersManager.GetSurfaceDecelerationFactor(),
				TireGripMod = _handlingModifiersManager.GetTireGripModifier(),
				TireGripDriftMinMod = _handlingModifiersManager.GetTireGripDriftMinModifier(),
				TireGripDriftMaxMod = _handlingModifiersManager.GetTireGripDriftMaxModifier(),
				RotSpeedFromKartSpeedMod = _handlingModifiersManager.GetRotSpeedFromKartSpeedModifier(),
				RotSpeedFromSteerAngleMod = _handlingModifiersManager.GetRotSpeedFromSteerAngleModifier(),
				RotSpeedDriftRatioMod = _handlingModifiersManager.GetRotSpeedDriftRatioModifier(),
				HopForceMod = _handlingModifiersManager.GetHopForceModifier(),
				MaxSpeedNorm = _handling.MaxSpeed > 0f ? math.abs(stateBurst.Body.ForwardSpeed) / _handling.MaxSpeed : 0f
			};

			if (_handling.AccelCurve != null)
			{
				jobInput.AccelCurveValue = _handling.AccelCurve.Evaluate(jobInput.MaxSpeedNorm);
			}
			if (_handling.SteerSpeedCurve != null)
			{
				jobInput.SteerSpeedCurveValue = _handling.SteerSpeedCurve.Evaluate(jobInput.MaxSpeedNorm);
			}
			if (_handling.RotSpeedFromKartSpeedCurve != null)
			{
				jobInput.RotSpeedFromKartSpeedCurveValue = _handling.RotSpeedFromKartSpeedCurve.Evaluate(jobInput.MaxSpeedNorm);
			}
			if (_handling.RotSpeedFromSteerAngleCurve != null)
			{
				jobInput.RotSpeedFromSteerAngleCurveValue = _handling.RotSpeedFromSteerAngleCurve.Evaluate(math.abs(_input.Data.Steer));
			}
			if (_handling.DriftBoostDecayCurve != null)
			{
				jobInput.DriftBoostDecayCurveValue = _handling.DriftBoostDecayCurve.Evaluate(stateBurst.Body.BoostNormalizedTime);
			}

			job.Inputs[kartIdx] = jobInput;
			job.States[kartIdx] = stateBurst;
			for (int i = 0; i < 4; i++)
			{
				job.Wheels[kartIdx * 4 + i] = _wheels[i];
			}
			for (int i = 0; i < 5; i++)
			{
				job.RaycastResults[kartIdx * 5 + i] = _suspensionsRaycastResults[i];
			}

			_kartManager.JobRegistered(kartIdx, true);
			return true;
		}

		private void FixedUpdate()
		{
			if (_kartComposite != null && _kartComposite.KartManagerIndex >= 0 && _kartManager != null)
			{
				_kartManager.FixedUpdateKartJobRun();
			}
		}

		private void PostFixedUpdate(IUpdateParams updateParams, ref KartPhysicsState stateBurst)
		{
			if (!_intialized || _kartComposite == null || _kartComposite.GameContextPlayer == null)
			{
				return;
			}

			if (_handlingModifiersManager.IsRespawning || !_preparedJobThisFixedUpdate)
			{
				return;
			}

			int kartIdx = _kartComposite.KartManagerIndex;
			if (kartIdx < 0 || _kartManager == null)
			{
				return;
			}

			KartPhysicsFixedUpdateJobBurstOutput output = _kartManager.FixedUpdateAllJob.Outputs[kartIdx];
			stateBurst = output.State;

			for (int i = 0; i < 4; i++)
			{
				_wheels[i] = _kartManager.FixedUpdateAllJob.Wheels[kartIdx * 4 + i];
			}

			if (output.AddVelocity)
			{
				_rigidBody.velocity += (Vector3)output.VelocityToAdd;
			}

			float dt = updateParams.FixedDeltaTime;
			Vector3 angVel = _rigidBody.angularVelocity;
			_rigidBody.angularVelocity = new Vector3(angVel.x - angVel.x * dt, angVel.y, angVel.z - angVel.z * dt);

			_rigidBody.AddForce(stateBurst.Aero.TotalForce);
			_rigidBody.AddRelativeTorque(stateBurst.RotForce.RelativeTorque);
			_rigidBody.AddTorque(stateBurst.RotForce.WorldTorque);

			if (output.MoveRotation)
			{
				_rigidBody.MoveRotation(stateBurst.RotForce.TargetRotation);
			}

			if (stateBurst.Body.WallFrictionFactor != 0f)
			{
				float mult = 1f - stateBurst.Body.WallFrictionFactor * dt;
				_rigidBody.velocity *= mult;
				stateBurst.Body.WallFrictionFactor = 0f;
			}

			if (_handlingModifiersManager.PushEffectPending)
			{
				Vector3 pushVel = _handlingModifiersManager.ConsumePendingPushVel();
				_rigidBody.velocity = pushVel;
				stateBurst.Body.WorldVelocity = pushVel;
				stateBurst.Body.PendingLinearVelocity = float3.zero;
				_colCoolDown = 0.5f;
			}
			else if (output.SetLinearVelocity)
			{
				Vector3 vel = stateBurst.Body.PendingLinearVelocity;
				_rigidBody.velocity = vel;
				stateBurst.Body.WorldVelocity = vel;
				stateBurst.Body.PendingLinearVelocity = float3.zero;
			}

			if (output.SetAngularVelocity)
			{
				_rigidBody.angularVelocity = stateBurst.Body.PendingAngularVelocity;
				stateBurst.Body.PendingAngularVelocity = float3.zero;
			}

			if (output.AddImpulseForce)
			{
				_rigidBody.AddForce(output.ImpulseForce, ForceMode.Impulse);
				stateBurst.Body.LateralBounceForce = 0f;
			}

			if (output.AddContinuousForce)
			{
				_rigidBody.AddForce(output.ContinuousForce);
			}

			if (output.OverrideVelocity)
			{
				Vector3 v = output.OverrideVelocityValue;
				_rigidBody.velocity = v;
				stateBurst.Body.WorldVelocity = v;
			}

			if (((!_input.GameplayFreeze && _input.Data.Brake <= 0f) || stateBurst.Body.ForwardSpeed >= 0.15f) &&
				(!_input.LogicFreeze || stateBurst.Body.ForwardSpeed >= 1f) || output.AddImpulseForce)
			{
				_rigidBody.constraints &= ~(RigidbodyConstraints.FreezePositionX | RigidbodyConstraints.FreezePositionZ);
			}
			else
			{
				_rigidBody.constraints |= RigidbodyConstraints.FreezePositionX | RigidbodyConstraints.FreezePositionZ;
			}

			if (_colCoolDown >= 0f)
			{
				_colCoolDown -= dt;
			}
			if (_colTriggerCoolDown >= 0f)
			{
				_colTriggerCoolDown -= dt;
			}

			_handlingModifiersManager.Update(dt);
		}

		private void CacheRigidBodyValues()
		{
			Transform t = _rigidBody.transform;
			_state.Body.Forward = t.forward;
			_state.Body.Right = t.right;
			_state.Body.Up = t.up;
			_state.Body.WorldPosition = _rigidBody.position;
			_state.Body.WorldRotation = _rigidBody.rotation;
			_state.Body.WorldVelocity = _rigidBody.velocity;
			_state.Body.AngularVelocity = _rigidBody.angularVelocity;
		}

		private void UpdateReplication(IUpdateParams tick)
		{
			if (_replicator == null || _rigidBody == null)
			{
				return;
			}

			Transform t = _rigidBody.transform;
			_replicator.UpdateTransform(t.position, t.rotation, _rigidBody.velocity);
			Vector3 repVel = _replicator.RigidBodyVelocity;
			_state.Body.WorldVelocity = repVel;
			_state.Body.Speed = repVel.magnitude;
		}

		public void LateUpdate(IUpdateParams updateParams)
		{
			if (!_intialized)
			{
				return;
			}

			if (_replicator != null)
			{
				NetworkVisualState visualState = default;

				if (_handlingModifiersManager.IsHitSpin)
				{
					visualState.SetFlag(NetworkVisualState.VisualState.Spinning);
				}
				if (_handlingModifiersManager.SpinoutType == KartTriggerSpinoutType.Flip)
				{
					visualState.SetFlag(NetworkVisualState.VisualState.Flip);
				}
				if (_state.Body.BoostTimer > 0f && _state.Body.BoostUseVFX && !_state.Events.StartAnyBoost())
				{
					visualState.SetFlag(NetworkVisualState.VisualState.Boosting);
				}
				if (_state.Body.DriftTimer > 0f)
				{
					visualState.SetFlag(NetworkVisualState.VisualState.Drifting);
				}
				if (_state.Body.IsWheelTouchingGround)
				{
					visualState.SetFlag(NetworkVisualState.VisualState.Grounded);
				}
				if (IsInvuln)
				{
					visualState.SetFlag(NetworkVisualState.VisualState.Invuln);
				}
				if (_handlingModifiersManager.IsInvuln)
				{
					visualState.SetFlag(NetworkVisualState.VisualState.HitInvuln);
				}

				int boostIdx = (int)_state.Body.CurrentDriftBoostLevel.BoostType - 1;
				if (boostIdx == 0)
				{
					visualState.SetFlag(NetworkVisualState.VisualState.DriftBoostLevel1);
				}
				else if (boostIdx == 1)
				{
					visualState.SetFlag(NetworkVisualState.VisualState.DriftBoostLevel2);
				}
				else if (boostIdx == 2)
				{
					visualState.SetFlag(NetworkVisualState.VisualState.DriftBoostLevel3);
				}

				if (_state.Body.DriftDirection < 0f)
				{
					visualState.SetFlag(NetworkVisualState.VisualState.DriftBoostStartedLeftSide);
				}

				if (_state.Events.Hop)
				{
					_hopCounter++;
				}
				if (_state.Events.HopBoost)
				{
					_hopBoostCounter++;
				}
				if (_handlingModifiersManager.HasStartedRespawnThisFrame)
				{
					_respawnCounter++;
				}

				visualState.HopCounter = _hopCounter;
				visualState.HopBoostCounter = _hopBoostCounter;
				visualState.RespawnCounter = _respawnCounter;
				visualState.SteeringWheel = (sbyte)(int)(Mathf.Clamp(_state.VisualState.SteerWheelDisplay, -1f, 1f) * 127f);

				_kartComposite.SetNetworkVisuals(visualState);
			}

			_handlingModifiersManager.LateUpdate();
			_state.Events.Reset();
			_performRaycast = !_performRaycast;
			_performedRaycastThisFrame = false;
		}

		public bool IsBoosting()
		{
			return _state.Body.BoostTimer > 0f && _state.Body.BoostUseVFX && !_state.Events.StartAnyBoost();
		}

		public bool IsDrifting()
		{
			return _state.Body.DriftTimer > 0f;
		}

		public bool IsGliding()
		{
			return _state.Body.IsGliding;
		}

		public bool IsDriftStartLeftSide()
		{
			return _state.Body.DriftDirection < 0f;
		}

		public bool IsWheelTouchingGround()
		{
			return _state.Body.IsWheelTouchingGround;
		}

		public bool IsFlying()
		{
			return _state.Body.IsFlying && !_state.Events.HopBoost;
		}

		private void OnBoostEnter()
		{
			_state.LngForce.PadBoostTimer = _handling.PadBoostDuration;
			_state.LngForce.PadBoostSpeedOffset = _handling.PadBoostSpeedOffset;
			_state.LngForce.PadBoostRatio = _handling.PadBoostRatio;
			_state.Events.StartPadBoost = true;
		}

		private void OnGlideEnter()
		{
			_state.Body.IsGliding = true;
			_state.Events.StartGliding = true;
		}

		public void OnUsableBoost(float duration, float speedOffset, float boostRatio, bool useVFX = true)
		{
			_state.LngForce.UsableBoostTimer = duration;
			_state.LngForce.UsableBoostSpeedOffset = speedOffset;
			_state.LngForce.UsableBoostRatio = boostRatio;
			_state.LngForce.UsableBoostUseVFX = useVFX;
			_state.Events.StartUsableBoost = true;
		}

		public void OnTriggerEnter(Collider collider)
		{
			if (collider == null)
			{
				return;
			}

			ObjectTagBehaviour tag = collider.GetComponent<ObjectTagBehaviour>();
			if (tag != null)
			{
				if (tag.IsBoostTrigger)
				{
					float3 triggerFwd = collider.transform.forward;
					float3 kartFwd = _rigidBody.transform.forward;
					if (math.dot(triggerFwd, kartFwd) > 0f)
					{
						OnBoostEnter();
					}
				}
				if (tag.IsGlideTrigger)
				{
					OnGlideEnter();
				}
				if (tag.IsHopBoostTrigger)
				{
					OnHopBoostTriggerEnter();
				}
				if (tag.IsHopGravityTrigger)
				{
					OnHopGravityTriggerEnter();
				}
			}

			InteractableBehaviour interactable = collider.GetComponent<InteractableBehaviour>();
			if (interactable != null)
			{
				KartTriggerEffectParameters triggerParams = interactable.KartTriggerEffectParameters;
				_handlingModifiersManager.SetKartTriggerEffect(in triggerParams, interactable.transform.position);
			}

			OnTriggerEnterDelegate?.Invoke(collider);
		}

		public void OnTriggerStay(Collider collider)
		{
			if (collider != null && collider.attachedRigidbody != null && _colTriggerCoolDown < 0f)
			{
				_colTriggerCoolDown = 0.12f;
			}
		}

		public void OnTriggerExit(Collider collider)
		{
			if (collider == null)
			{
				return;
			}

			ObjectTagBehaviour tag = collider.GetComponent<ObjectTagBehaviour>();
			if (tag != null)
			{
				if (tag.IsHopBoostTrigger)
				{
					OnHopBoostTriggerExit();
				}
				if (tag.IsHopGravityTrigger)
				{
					OnHopGravityTriggerExit();
				}
			}

			OnTriggerExitDelegate?.Invoke(collider);
		}

		private void OnHopGravityTriggerEnter()
		{
			_state.Body.HopGravityTriggerCount++;
		}

		private void OnHopGravityTriggerExit()
		{
			_state.Body.HopGravityTriggerCount = Mathf.Max(0, _state.Body.HopGravityTriggerCount - 1);
		}

		private void OnHopBoostTriggerEnter()
		{
			_state.LngForce.HopBoostTriggerCount++;
		}

		private void OnHopBoostTriggerExit()
		{
			_state.LngForce.HopBoostTriggerCount = Mathf.Max(0, _state.LngForce.HopBoostTriggerCount - 1);
		}

		public void OnCollisionEnter(Collision collision)
		{
			if (_colCoolDown > 0f || collision == null)
			{
				return;
			}

			float3 fwd = _state.Body.Forward;
			float3 right = _state.Body.Right;
			float3 up = _state.Body.Up;
			float3 worldPos = _state.Body.WorldPosition;

			ContactPoint bestContact = default;
			int bestScore = 0;
			int bestWeightedScore = 0;
			bool frontHit = false;
			bool backHit = false;
			bool leftHit = false;
			bool rightHit = false;
			bool topHit = false;
			bool strongFrontHit = false;
			float impactSpeed = 0f;

			int contactCount = collision.contactCount;
			for (int i = 0; i < contactCount; i++)
			{
				ContactPoint cp = collision.GetContact(i);
				if (cp.normal.y > 0.35f)
				{
					continue;
				}

				float3 normal = cp.normal;
				float3 relVel = collision.relativeVelocity;
				float3 localPt = (float3)cp.point - worldPos;

				float fwdDot = math.dot(fwd, localPt);
				float rightDot = math.dot(right, localPt);
				float upDot = math.dot(up, localPt);

				bool isTop = upDot > 0.5f && normal.y < 0f;
				int score = (fwdDot > 0.5f ? 100 : 0) | (fwdDot < -0.5f ? 10 : 0) | (rightDot < -0.5f ? 1 : 0);
				if (rightDot > 0.5f) score += 1;
				score += isTop ? 1 : 0;

				if (score > bestScore)
				{
					bestScore = score;
					bestContact = cp;
					frontHit = fwdDot > 0.5f;
					backHit = fwdDot < -0.5f;
					leftHit = rightDot < -0.5f;
					rightHit = rightDot > 0.5f;
					topHit = isTop;
				}

				float fwdNormalDot = math.dot(fwd, normal);
				float rightNormalDot = math.dot(right, normal);
				bool isStrongFront = fwdDot > 0.5f && math.abs(fwdNormalDot) > 0.8f;
				bool isStrongBack = fwdDot < -0.5f && math.abs(fwdNormalDot) > 0.8f;
				bool isStrongRight = rightDot > 0.5f && math.abs(rightNormalDot) > 0.8f;
				bool isStrongLeft = rightDot < -0.5f && math.abs(rightNormalDot) > 0.8f;

				impactSpeed = math.dot(normal, relVel);
				int wScore = (isStrongFront ? 100 : 0) | (isStrongBack ? 10 : 0);
				if (isStrongRight) wScore += 1;
				if (isStrongLeft) wScore += 1;
				if (isTop) wScore += 1;

				if (wScore > bestWeightedScore)
				{
					bestWeightedScore = wScore;
					strongFrontHit = isStrongFront;
				}
			}

			KartRootBehaviour otherKartRoot = collision.rigidbody != null ? collision.rigidbody.GetComponent<KartRootBehaviour>() : null;
			bool isKartCollision = otherKartRoot != null;

			KartPhysicsCollisionDirection dir = KartPhysicsCollisionDirection.None;
			if (topHit) dir = KartPhysicsCollisionDirection.Top;
			if (backHit) dir = KartPhysicsCollisionDirection.Back;
			if (leftHit) dir = KartPhysicsCollisionDirection.Left;
			if (rightHit) dir = KartPhysicsCollisionDirection.Right;
			if (frontHit) dir = KartPhysicsCollisionDirection.Front;

			float maxSep = isKartCollision ? _handlingBurst.KartCollisionSeparationThreshold : _handlingBurst.WallCollisionSeparationThreshold;
			if (bestContact.separation > maxSep)
			{
				return;
			}

			if (OnCollisionEnterDelegate != null)
			{
				KartPhysicsCollisionInfo info = new KartPhysicsCollisionInfo(_kartComposite, collision, isKartCollision, dir, impactSpeed);
				OnCollisionEnterDelegate.Invoke(in info);
			}

			if (bestWeightedScore == 0 && !isKartCollision)
			{
				CollisionStopGliding(impactSpeed, bestContact.normal);
				return;
			}

			if (!isKartCollision)
			{
				if (collision.rigidbody == null)
				{
					if (strongFrontHit)
					{
						_state.Body.PendingAngularVelocity = float3.zero;
						if (impactSpeed > _handling.FrontWallBounceSpinThreshold)
						{
							float dur = _handling.FrontWallBounceSpinDuration;
							_state.Body.FrontWallBounceTimer = dur;
							_state.Body.FrontWallBounceDuration = dur;
							float spinSpeed = UnityEngine.Random.Range(5f, 10f) * UnityEngine.Random.Range(-1, 2);
							_state.Body.PendingAngularVelocity = (float3)(_rigidBody.transform.up * spinSpeed);
						}

						float3 kartFwd = _rigidBody.transform.forward;
						float3 horizFwd = math.normalizesafe(new float3(kartFwd.x, 0f, kartFwd.z));
						_state.Body.PendingLinearVelocity = -horizFwd * impactSpeed * _handling.FrontWallBounceFactor;
						ResetBoosts();
					}
					else
					{
						float3 diff = (float3)(_rigidBody.transform.position - bestContact.point);
						float speedRatio = math.abs(_state.Body.ForwardSpeed) / (_handlingBurst.MaxSpeed + _handlingBurst.BoostMaxSpeedOffset);
						float minForce = _handlingBurst.WallSideBounceMinForce;
						float maxForce = _handlingBurst.WallSideBounceMaxForce;
						float dot = math.dot(diff, (float3)_rigidBody.transform.right);
						float sign = (dot > 0f ? 1f : 0f) - (dot < 0f ? 1f : 0f);
						_state.Body.LateralBounceForce = (minForce + speedRatio * (maxForce - minForce)) * sign;
					}

					CollisionStopGliding(impactSpeed, bestContact.normal);
				}
			}
			else
			{
				if (otherKartRoot.Owner is KartComposite otherKart && otherKart.KartPhysics != null)
				{
					float3 diff = (float3)(_rigidBody.transform.position - otherKartRoot.gameObject.transform.position);
					float otherSpeed = otherKart.KartPhysics.Body.ForwardSpeed;
					float speedDiff = _state.Body.ForwardSpeed - otherSpeed;
					float maxSpd = _handlingBurst.MaxSpeed + _handlingBurst.BoostMaxSpeedOffset;
					float ratio = math.abs(speedDiff) / maxSpd;

					float minF = speedDiff >= 0f ? _handlingBurst.KartBounceFasterMinForce : _handlingBurst.KartBounceSlowerMinForce;
					float maxF = speedDiff >= 0f ? _handlingBurst.KartBounceFasterMaxForce : _handlingBurst.KartBounceSlowerMaxForce;

					float dot = math.dot(diff, (float3)_rigidBody.transform.right);
					float sign = (dot > 0f ? 1f : 0f) - (dot < 0f ? 1f : 0f);
					_state.Body.LateralBounceForce = (minF + ratio * (maxF - minF)) * sign;
				}
			}

			_colCoolDown = _handlingBurst.CollisionCooldown;
		}

		public void OnCollisionStay(Collision collision)
		{
			if (collision == null || collision.rigidbody != null)
			{
				return;
			}

			float maxSep = _handlingBurst.WallStaySeparationThreshold;
			int count = collision.contactCount;
			for (int i = 0; i < count; i++)
			{
				ContactPoint cp = collision.GetContact(i);
				if (cp.normal.y <= 0.35f)
				{
					StopGliding();
					if (cp.separation <= maxSep)
					{
						if (_handlingBurst.WallFrictionFactor != 0f && _state.Body.ForwardSpeed > _handlingBurst.WallFrictionMinSpeed)
						{
							_state.Body.WallFrictionFactor = _handlingBurst.WallFrictionFactor;
						}
						return;
					}
				}
			}
		}

		public void OnCollisionExit(Collision collision)
		{
			if (OnCollisionExitDelegate != null)
			{
				KartPhysicsCollisionInfo info = new KartPhysicsCollisionInfo(_kartComposite, collision, false, KartPhysicsCollisionDirection.None, 0f);
				OnCollisionExitDelegate.Invoke(in info);
			}
		}

		private void CollisionStopGliding(float contactVelocity, float3 normal)
		{
			if (contactVelocity >= 1f && normal.y <= 0.35f && _state.Body.GlidingFrameCount > 1 && _state.Body.IsGliding)
			{
				_state.Body.GlidingFrameCount = 0;
				_state.Body.IsGliding = false;
				_state.Events.StopGliding = true;
			}
		}

		public void StopGliding()
		{
			if (_state.Body.IsGliding)
			{
				_state.Body.GlidingFrameCount = 0;
				_state.Body.IsGliding = false;
				_state.Events.StopGliding = true;
			}
		}

		public void Reset(Vector3 pos, Quaternion rot, Vector3 velocity)
		{
			if (_replicator != null && !_replicator.SyncOwner)
			{
				return;
			}

			_reset = true;
			_resetPosition = pos;
			_resetRotation = rot;
			_resetVelocity = velocity;

			_rigidBody.velocity = velocity;
			_rigidBody.angularVelocity = Vector3.zero;
			_rigidBody.position = pos;
			_rigidBody.rotation = rot;
			_rigidBody.transform.position = pos;
			_rigidBody.transform.rotation = rot;

			ResetStates();
		}

		public void SetPhysicsLayerNormal()
		{
			_colliders.layer = _kartPhysicsLayer;
		}

		public void SetPhysicsLayerGhost()
		{
			_colliders.layer = _kartPhysicsGhostLayer;
		}

		public void DisableCollisions()
		{
			_colliders.SetActive(false);
		}

		public void ResetStates()
		{
			_state.Body.ResetStates();
			ResetBoosts();
		}

		public void ResetBoosts()
		{
			_state.LngForce.PadBoostTimer = 0f;
			_state.LngForce.DriftBoostTimer = 0f;
			_state.LngForce.UsableBoostTimer = 0f;
			_state.LngForce.HopBoostTimer = 0f;
			_state.LngForce.IsHopBoostActive = false;
			_state.Body.BoostTimer = 0f;
		}

		public void OnUsableHit(KartTriggerEffectParameters kartTriggerEffectParams, Vector3 triggerPosition)
		{
			_handlingModifiersManager?.SetKartTriggerEffect(in kartTriggerEffectParams, triggerPosition);
		}

		public static bool IsDriftingStateRequirementsMet(KartPhysicsHandling handling, float steer, in KartPhysicsBodyState bodyState, float driftspeedMinModifer)
		{
			if (Mathf.Abs(steer) <= handling.DriftMinSteerInput)
			{
				return false;
			}
			return handling.DriftMinSpeed * driftspeedMinModifer < bodyState.ForwardSpeed;
		}

		public static bool IsDriftingStateRequirementsMet(BurstCompatiblePhysicsHandling handling, float steer, KartPhysicsBodyState bodyState, float driftspeedMinModifer)
		{
			if (math.abs(steer) <= handling.DriftMinSteerInput)
			{
				return false;
			}
			return handling.DriftMinSpeed * driftspeedMinModifer < bodyState.ForwardSpeed;
		}
	}
}
