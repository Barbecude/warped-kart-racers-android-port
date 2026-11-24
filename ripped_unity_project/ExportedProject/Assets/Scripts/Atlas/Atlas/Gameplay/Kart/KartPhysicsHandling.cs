using System.Collections.Generic;
using Atlas.Definitions;
using Core.Definitions;
using UnityEngine;

namespace Atlas.Gameplay.Kart
{
	[CreateAssetMenu(fileName = "KartPhysicsHandling", menuName = "Atlas/Gameplay/Kart/KartPhysicsHandling")]
	public class KartPhysicsHandling : Definition
	{
		[Header("Speed & Acceleration")]
		[SerializeField]
		protected AnimationCurve _forwardAccelCurve;
		[SerializeField]
		protected AnimationCurve _reverseAccelCurve;
		[SerializeField]
		protected float _speedHardCap = 50f;
		[SerializeField]
		protected float _verticalSpeedCap = 20f;
		[SerializeField]
		protected float _braking = 2f;
		[SerializeField]
		protected float _driftSpeedMin = 10f;

		[Header("Slope Compensation")]
		[SerializeField]
		protected float _slopeCompensationUp = 1f;
		[SerializeField]
		protected float _slopeCompensationDown = 1f;
		[SerializeField]
		protected float _slopeCompensationAngleStart = 30f;
		[SerializeField]
		protected float _slopeCompensationAngleMax = 45f;

		[Header("Steering & Drifting")]
		[SerializeField]
		protected AnimationCurve _rotSpeedFromKartSpeedCurve;
		[SerializeField]
		protected AnimationCurve _rotSpeedFromSteerAngleCurve;
		[Range(0f, 1f)]
		[SerializeField]
		protected float _rotateToSurfaceSpeed = 1f;
		[SerializeField]
		protected float _rotateToSurfaceMaxAngle = 30f;
		[SerializeField]
		protected float _tireGrip = 1f;
		[SerializeField]
		protected float _turnSpeedCompensation = 1f;
		[SerializeField]
		protected float _steerMinToDrift = 0.25f;
		[SerializeField]
		protected float _rotSpeedDriftRatio = 1.25f;
		[SerializeField]
		protected float _tireGripDrift = 1f;
		[SerializeField]
		protected float _tireGripDriftMaxSteer = 1f;
		[SerializeField]
		protected float _driftSteerMinDefault = 0.5f;
		[SerializeField]
		protected float _driftSteerMaxDefault = 0.9f;
		[SerializeField]
		protected float _driftSteerNeutralDefault = 0.45f;
		[SerializeField]
		protected float _turnSpeedDriftCompensation = 1f;
		[SerializeField]
		protected float _turnSpeedDriftSideForceRatio = 0.5f;
		[SerializeField]
		protected float _driftVisualYawVelMax = 25f;
		[SerializeField]
		protected float _driftVisualAngleOffset = 30f;
		[Range(0f, 1000f)]
		[SerializeField]
		protected float _driftVisualAngleSpeedIn = 5f;
		[Range(0f, 1000f)]
		[SerializeField]
		protected float _driftVisualAngleSpeedOut = 100f;

		[Header("Boost")]
		[SerializeField]
		protected float _boostSpeedOffset = 10f;
		[SerializeField]
		protected float _boost = 0.5f;
		[SerializeField]
		protected float _boostDuration = 2f;
		[SerializeField]
		protected float _smallBoostSpeedOffset = 5f;
		[SerializeField]
		protected float _hopBoostRatio = 0.2f;
		[SerializeField]
		protected float _hopBoostDuration = 0.5f;
		[SerializeField]
		protected float _hopBoostSpeedThreshold = 10f;
		[SerializeField]
		protected float _hopBoostGravityScale = 1f;
		[SerializeField]
		protected float _midAirBoostAccelFactor = 0.5f;
		[SerializeField]
		protected float _glidingBoostAccelFactor = 0.5f;
		[SerializeField]
		protected DriftBoostLevel[] _driftBoostLevelsTable;
		[SerializeField]
		protected float _driftInBoostAccumulationFactor = 1f;
		[SerializeField]
		protected float _driftOutBoostAccumulationFactor = 1f;
		private readonly DriftBoostLevel _driftBoostLevelInvalid;

		[Header("Collision")]
		[SerializeField]
		protected float _smallLandingSpeedVertical = 1f;
		[SerializeField]
		protected float _slowerKartBounceMin = 1f;
		[SerializeField]
		protected float _slowerKartBounceMax = 10f;
		[SerializeField]
		protected float _fasterKartBounceMin = 1f;
		[SerializeField]
		protected float _fasterKartBounceMax = 10f;
		[SerializeField]
		protected float _kartToKartSeparationThreshold = 1.1f;
		[SerializeField]
		protected float _kartToStaticBounce = 0.5f;
		[SerializeField]
		protected float _kartToStaticCollisionEnterSeparationThreshold = 0.45f;
		[SerializeField]
		protected float _kartToStaticCollisionStaySeparationThreshold = 0.3f;
		[SerializeField]
		protected float _kartToStaticBounceMin = 5f;
		[SerializeField]
		protected float _kartToStaticBounceMax = 30f;
		[SerializeField]
		protected float _kartToStaticSpeedPenaltyFactor = 0.05f;
		[SerializeField]
		protected float _kartToStaticSpeedPenaltyMinThreshold = 20f;
		[SerializeField]
		protected float _crashSpeedThreshold = 16f;
		[SerializeField]
		protected float _impactSpeedThreshold = 8f;
		[SerializeField]
		protected float _lostControlTimerOnCrash = 2f;
		[SerializeField]
		protected float _collisionEnterCooldown = 0.5f;

		[Header("Air")]
		[SerializeField]
		protected float _airRotSpeedRatio = 0.85f;
		[Range(0f, 1f)]
		[SerializeField]
		protected float _rotateToVerticalInAirSpeed = 0.1f;

		[Header("Gliding")]
		[SerializeField]
		protected AnimationCurve _glidingAccelCurve;
		[SerializeField]
		protected float _glidingSpeedPitchUp = 10f;
		[SerializeField]
		protected float _glidingYawSpeed = 0.5f;
		[SerializeField]
		protected float _glidingRollSpeed = 1f;
		[SerializeField]
		protected float _glidingPitchSpeed = 1f;
		[SerializeField]
		protected float _glidingYawFromRoll = 0.5f;
		[SerializeField]
		protected float _glidingPitchUpMax = 7.5f;
		[SerializeField]
		protected float _glidingPitchDownMax = 15f;
		[SerializeField]
		protected float _glidingRollMax = 45f;
		[SerializeField]
		protected float _glidingPitchStabilisation = 0.1f;
		[SerializeField]
		protected float _glidingRollStabilisation = 0.1f;
		[SerializeField]
		protected float _glidingRatio = 3f;
		[SerializeField]
		protected float _glidingRatioPitchUp = 3f;
		[SerializeField]
		protected float _lateralAirGrip = 5f;
		[SerializeField]
		protected float _verticalAirGrip = 1f;
		[SerializeField]
		protected float _glidingTorque = 7f;
		[SerializeField]
		protected float _glidingUpdraftForce = 0.5f;

		[Header("Hop")]
		[SerializeField]
		protected float _hopForce = 1f;
		[SerializeField]
		protected float _hopTimer = 0.5f;
		[SerializeField]
		protected float _hopGravityScale = 1f;

		[Header("Steering Lock")]
		[SerializeField]
		protected float _initialSteeringlock = 0.5f;
		[SerializeField]
		protected float _hitStateSteerCap = 0.2f;
		[SerializeField]
		protected float _steeringlockReleaseTime = 0.8f;

		[Header("Surfaces")]
		[SerializeField]
		protected KartHandlingSurfaceType[] KartHandlingSurfaceTypes;

		[Header("Input")]
		[SerializeField]
		protected KartPhysicsInputConfig _kartPhysicsInputConfig;

		private KartHandlingSurfaceModifiers _default = new KartHandlingSurfaceModifiers();
		private float _topSpeed;
		private float _topAcceleration;
		private float _steerSpeed;
		private float _glidingSpeed;
		private Dictionary<FloorSurfaceType, KartHandlingSurfaceType> _cachedSurfaceTypes;

		public float SpeedHardCap => _speedHardCap;
		public float VerticalSpeedCap => _verticalSpeedCap;
		public float TopSpeed => _topSpeed;
		public float TopSpeedBoost => _topSpeed + _boostSpeedOffset;
		public float TopAcceleration => _topAcceleration;
		public float DriftSpeedMin => _driftSpeedMin;
		public float Braking => _braking;
		public float BoostSpeedOffset => _boostSpeedOffset;
		public float Boost => _boost;
		public float BoostDuration => _boostDuration;
		public float SmallBoostSpeedOffset => _smallBoostSpeedOffset;
		public float HopBoostRatio => _hopBoostRatio;
		public float HopBoostDuration => _hopBoostDuration;
		public float HopBoostSpeedThreshold => _hopBoostSpeedThreshold;
		public float HopBoostGravityScale => _hopBoostGravityScale;
		public float MidAirBoostAccelFactor => _midAirBoostAccelFactor;
		public float GlidingBoostAccelFactor => _glidingBoostAccelFactor;
		public AnimationCurve ForwardAccelCurve => _forwardAccelCurve;
		public AnimationCurve ReverseAccelCurve => _reverseAccelCurve;
		public float SlopeCompensationUp => _slopeCompensationUp;
		public float SlopeCompensationDown => _slopeCompensationDown;
		public float SlopeCompensationAngleStart => _slopeCompensationAngleStart * Mathf.Deg2Rad;
		public float SlopeCompensationAngleMax => _slopeCompensationAngleMax * Mathf.Deg2Rad;
		public float RotateToSurfaceMaxAngle => _rotateToSurfaceMaxAngle;
		public float SmallLandingSpeedVertical => _smallLandingSpeedVertical;
		public float SlowerKartBounceMin => _slowerKartBounceMin;
		public float SlowerKartBounceMax => _slowerKartBounceMax;
		public float FasterKartBounceMin => _fasterKartBounceMin;
		public float FasterKartBounceMax => _fasterKartBounceMax;
		public float KartToStaticBounce => _kartToStaticBounce;
		public float KartToKartSeparationThreshold => _kartToKartSeparationThreshold;
		public float KartToStaticCollisionEnterSeparationThreshold => _kartToStaticCollisionEnterSeparationThreshold;
		public float KartToStaticCollisionStaySeparationThreshold => _kartToStaticCollisionStaySeparationThreshold;
		public float KartToStaticBounceMin => _kartToStaticBounceMin;
		public float KartToStaticBounceMax => _kartToStaticBounceMax;
		public float KartToStaticSpeedPenaltyFactor => _kartToStaticSpeedPenaltyFactor;
		public float KartToStaticSpeedPenaltyMinThreshold => _kartToStaticSpeedPenaltyMinThreshold;
		public float CrashSpeedThreshold => _crashSpeedThreshold;
		public float ImpactSpeedThreshold => _impactSpeedThreshold;
		public float LostControlTimerOnCrash => _lostControlTimerOnCrash;
		public float CollisionEnterCooldown => _collisionEnterCooldown;
		public AnimationCurve RotSpeedFromKartSpeedCurve => _rotSpeedFromKartSpeedCurve;
		public AnimationCurve RotSpeedFromSteerAngleCurve => _rotSpeedFromSteerAngleCurve;
		public float SteerSpeed => _steerSpeed;
		public float RotateToSurfaceSpeed => _rotateToSurfaceSpeed;
		public float TireGrip => _tireGrip;
		public float TurnSpeedCompensation => _turnSpeedCompensation;
		public float SteerMinToDrift => _steerMinToDrift;
		public float RotSpeedDriftRatio => _rotSpeedDriftRatio;
		public float TireGripDrift => _tireGripDrift;
		public float TireGripDriftMaxSteer => _tireGripDriftMaxSteer;
		public float TurnSpeedDriftCompensation => _turnSpeedDriftCompensation;
		public float TurnSpeedDriftSideForceRatio => _turnSpeedDriftSideForceRatio;
		public float DriftSteerMin => _driftSteerMinDefault;
		public float DriftSteerMax => _driftSteerMaxDefault;
		public float DriftSteerNeutral => _driftSteerNeutralDefault;
		public float DriftVisualYawVelMax => _driftVisualYawVelMax * Mathf.Deg2Rad;
		public float DriftVisualAngleOffset => _driftVisualAngleOffset;
		public float DriftVisualAngleSpeedIn => _driftVisualAngleSpeedIn * 0.001f;
		public float DriftVisualAngleSpeedOut => _driftVisualAngleSpeedOut * 0.001f;
		public float AirRotSpeedRatio => _airRotSpeedRatio;
		public float RotateToVerticalInAirSpeed => _rotateToVerticalInAirSpeed;
		public AnimationCurve GlidingAccelCurve => _glidingAccelCurve;
		public float GlidingSpeed => _glidingSpeed;
		public float GlidingSpeedPitchUp => _glidingSpeedPitchUp;
		public float GlidingYawSpeed => _glidingYawSpeed;
		public float GlidingRollSpeed => _glidingRollSpeed;
		public float GlidingPitchSpeed => _glidingPitchSpeed;
		public float GlidingYawFromRoll => _glidingYawFromRoll;
		public float GlidingRatio => _glidingRatio;
		public float GlidingRatioPitchUp => _glidingRatioPitchUp;
		public float LateralAirGrip => _lateralAirGrip;
		public float VerticalAirGrip => _verticalAirGrip;
		public float GlidingTorque => _glidingTorque;
		public float GlidingUpdraftForce => _glidingUpdraftForce;
		public float GlidingPitchUpMax => _glidingPitchUpMax * Mathf.Deg2Rad;
		public float GlidingPitchDownMax => _glidingPitchDownMax * Mathf.Deg2Rad;
		public float GlidingRollMax => _glidingRollMax * Mathf.Deg2Rad;
		public float GlidingPitchStabilisation => _glidingPitchStabilisation;
		public float GlidingRollStabilisation => _glidingRollStabilisation;
		public float HopForce => _hopForce;
		public float HopTimer => _hopTimer;
		public float HopGravityScale => _hopGravityScale;
		public float InitialSteeringlock => _initialSteeringlock;
		public float HitStateSteerCap => _hitStateSteerCap;
		public float SteeringlockReleaseTime => _steeringlockReleaseTime;
		public KartPhysicsInputConfig KartPhysicsInputConfig => _kartPhysicsInputConfig;
		public DriftBoostLevel[] DriftBoostLevelsTable => _driftBoostLevelsTable;
		public float DriftInBoostAccumulationFactor => _driftInBoostAccumulationFactor;
		public float DriftOutBoostAccumulationFactor => _driftOutBoostAccumulationFactor;

		public void Init()
		{
			CalculateCacheValues();
		}

		public void DeInit()
		{
		}

		public KartHandlingSurfaceModifiers GetHandlingModifierFromSurfaceType(FloorSurfaceType type)
		{
			if (type == FloorSurfaceType.None)
			{
				type = FloorSurfaceType.Tarmac;
			}
			if (_cachedSurfaceTypes != null && _cachedSurfaceTypes.ContainsKey(type))
			{
				return _cachedSurfaceTypes[type].KartHandlingSurfaceModifiers;
			}
			return _default;
		}

		public DriftBoostLevel FindBoostLevel(DriftBoostType driftBoostType)
		{
			if (_driftBoostLevelsTable != null && _driftBoostLevelsTable.Length > 0)
			{
				for (int i = 0; i < _driftBoostLevelsTable.Length; i++)
				{
					if (_driftBoostLevelsTable[i].DriftBoostType == driftBoostType)
					{
						return _driftBoostLevelsTable[i];
					}
				}
			}
			return _driftBoostLevelInvalid;
		}

		public DriftBoostLevel GetBoostLevelFromDriftTime(float driftTime)
		{
			if (_driftBoostLevelsTable != null && _driftBoostLevelsTable.Length > 0)
			{
				for (int i = 0; i < _driftBoostLevelsTable.Length; i++)
				{
					if (_driftBoostLevelsTable[i].TimeToActivate <= driftTime)
					{
						return _driftBoostLevelsTable[i];
					}
				}
			}
			return _driftBoostLevelInvalid;
		}

		private void ValidateDriftBoostLevels()
		{
			if (_driftBoostLevelsTable == null || _driftBoostLevelsTable.Length <= 1)
			{
				return;
			}
			DriftBoostLevel prev = _driftBoostLevelsTable[0];
			if (!prev.IsValid())
			{
				return;
			}
			for (int i = 1; i < _driftBoostLevelsTable.Length; i++)
			{
				DriftBoostLevel curr = _driftBoostLevelsTable[i];
				if (!curr.IsValid() || prev.TimeToActivate < curr.TimeToActivate)
				{
					return;
				}
				prev = curr;
			}
		}

		private void CalculateCacheValues()
		{
			if (_forwardAccelCurve != null && _forwardAccelCurve.length > 0)
			{
				_topSpeed = _forwardAccelCurve[_forwardAccelCurve.length - 1].time;
				_topAcceleration = _forwardAccelCurve.Evaluate(0f);
			}
			if (_rotSpeedFromKartSpeedCurve != null)
			{
				_steerSpeed = _rotSpeedFromKartSpeedCurve.Evaluate(999f);
			}
			if (_glidingAccelCurve != null && _glidingAccelCurve.keys != null && _glidingAccelCurve.keys.Length > 0)
			{
				_glidingSpeed = _glidingAccelCurve.keys[_glidingAccelCurve.keys.Length - 1].time;
			}
			_cachedSurfaceTypes = new Dictionary<FloorSurfaceType, KartHandlingSurfaceType>();
			if (KartHandlingSurfaceTypes != null)
			{
				for (int i = 0; i < KartHandlingSurfaceTypes.Length; i++)
				{
					KartHandlingSurfaceType item = KartHandlingSurfaceTypes[i];
					if (!_cachedSurfaceTypes.ContainsKey(item.SurfaceType))
					{
						_cachedSurfaceTypes.Add(item.SurfaceType, item);
					}
				}
			}
		}
	}
}
