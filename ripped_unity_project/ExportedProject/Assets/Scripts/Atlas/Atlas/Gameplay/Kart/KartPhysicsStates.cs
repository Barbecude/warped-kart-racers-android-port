using System;
using Unity.Mathematics;
using UnityEngine;

namespace Atlas.Gameplay.Kart
{
	public enum DriftBoostType
	{
		None = 0,
		Level1 = 1,
		Level2 = 2,
		Level3 = 3
	}

	[Serializable]
	public struct DriftBoostLevel
	{
		public static readonly DriftBoostLevel DriftBoostLevelInvalid;

		[SerializeField]
		private DriftBoostType _driftBoostType;
		[SerializeField]
		private float _timeToActivate;
		[SerializeField]
		private float _driftBoostRatio;
		[SerializeField]
		private float _driftBoostDuration;
		[SerializeField]
		private float _driftSteerMin;
		[SerializeField]
		private float _driftSteerMax;
		[SerializeField]
		private float _driftSteerNeutral;

		public DriftBoostType DriftBoostType => _driftBoostType;
		public float TimeToActivate => _timeToActivate;
		public float DriftBoostRatio => _driftBoostRatio;
		public float DriftBoostDuration => _driftBoostDuration;
		public float DriftSteerMin => _driftSteerMin;
		public float DriftSteerMax => _driftSteerMax;
		public float DriftSteerNeutral => _driftSteerNeutral;

		public bool IsValid()
		{
			return _driftBoostType != DriftBoostType.None;
		}

		static DriftBoostLevel()
		{
		}
	}

	public enum KartPhysicsCollisionDirection
	{
		None = 0,
		Front = 1,
		Left = 2,
		Right = 3,
		Rear = 4,
		Top = 5
	}

	public struct KartPhysicsTriggerInfo
	{
		public Collider ColliderData;

		public KartPhysicsTriggerInfo(Collider collider)
		{
			ColliderData = collider;
		}
	}

	public struct KartPhysicsCollisionInfo
	{
		public KartComposite KartComposite;
		public Collision CollisionData;
		public float3 ContactVelocity;
		public bool IsKartToKartCollision;
		public KartPhysicsCollisionDirection CollisionDirection;

		public KartPhysicsCollisionInfo(KartComposite kart, Collision collision, float3 contactVelocity, bool isKartToKart = false, KartPhysicsCollisionDirection collisionDirection = KartPhysicsCollisionDirection.None)
		{
			KartComposite = kart;
			CollisionData = collision;
			ContactVelocity = contactVelocity;
			IsKartToKartCollision = isKartToKart;
			CollisionDirection = collisionDirection;
		}
	}

	public delegate void OnCollisionDelegate(KartPhysicsCollisionInfo other);
	public delegate void OnTriggerDelegate(KartPhysicsTriggerInfo other);

	public enum KartKinematicChangeReason
	{
		RespawnStart = 0,
		RespawnFinish = 1,
		FrontEnd = 2
	}

	public delegate void OnKartRespawnDelegate();
	public delegate void OnKartSpinOutDelegate();

	public enum KartInputType
	{
		None = 0,
		AiInput = 1,
		LocalPlayerInput = 2,
		RemotePlayerInput = 3
	}

	public struct KartPhysicsInputData
	{
		public float RawSteerInput;
		public float Steer;
		public float Throttle;
		public float Reverse;
		public float Boost;
		public float Brake;
		public float Drift;
		public bool Hop;
		public bool Use;
		public Vector2 Yoke;

		public static KartPhysicsInputData CreateDefault()
		{
			KartPhysicsInputData data = default;
			data.Yoke = Vector2.zero;
			return data;
		}

		public void Reset()
		{
			RawSteerInput = 0f;
			Steer = 0f;
			Throttle = 0f;
			Reverse = 0f;
			Boost = 0f;
			Brake = 0f;
			Drift = 0f;
			Hop = false;
			Use = false;
			Yoke = Vector2.zero;
		}
	}

	public struct KartPhysicsRaycastResult
	{
		public RaycastHit RaycastHit;
		public FloorSurfaceType FloorSurfaceType;
		public AestheticSurfaceType AestheticSurfaceType;
	}

	public struct KartPhysicsVisualState
	{
		public float WheelRotation;
		public float SteerAngle;
		public float SteerWheelDisplay;
		public float DriftDisplay;
		public float VisualAngleOffset;
	}

	public struct KartSuspensionState
	{
		public float4 Velocity;
		public float4 GroundPos;
		public float4 GroundNormal;
		public float4 SuspensionForce;
		public float RideHeight;
		public float VerticalVelocity;
		public float CompressedLength;
		public bool FindGround;
		public bool TouchGround;
		public FloorSurfaceType FloorSurfaceType;
		public AestheticSurfaceType AestheticSurfaceType;

		public static KartSuspensionState Init(KartSuspensionConfig _config)
		{
			KartSuspensionState state = default;
			state.Velocity = float4.zero;
			state.GroundPos = _config.PosInCar;
			state.GroundNormal = new float4(0f, 1f, 0f, 0f);
			state.SuspensionForce = float4.zero;
			state.RideHeight = 0f;
			state.VerticalVelocity = 0f;
			state.CompressedLength = 0f;
			state.FindGround = false;
			state.TouchGround = false;
			state.FloorSurfaceType = FloorSurfaceType.None;
			state.AestheticSurfaceType = AestheticSurfaceType.None;
			return state;
		}

		public string GetDebugStr()
		{
			return string.Format(
				"KartSuspensionState: Velocity: {0}, GroundPos {1}, GroundNormal {2}, SuspensionForce {3}, RideHeight {4}, CompressedLength {5}, FindGround {6}, TouchGround {7} ",
				Velocity, GroundPos, GroundNormal, SuspensionForce, RideHeight, CompressedLength, FindGround, TouchGround);
		}
	}

	public struct KartPhysicsLngForceState
	{
		public float BoostTimer;
		public float BoostSpeedOffset;
		public float Boost;
		public float UsableBoostTimer;
		public float UsableBoostSpeedOffset;
		public float UsableBoost;
		public bool UsableBoostVFXOn;
		public float DriftBoostTimer;
		public float Force;
		public float ForwardForce;
		public float BrakedForce;
		public float ReverseForce;
		public float BoostForce;
		public float NormalizedSpeed;
		public float CanInput;
		public float HopBoostTimer;
		public float HopBoostRatio;
		public int HopBoostAvailable;
		public bool HopBoostPending;
	}

	public struct KartPhysicsForceState
	{
		public float Force;
	}

	public struct KartPhysicsAngleControl
	{
		public float Error;
		public float Derivative;
		public float VelError;
		public float VelDerivative;
		public float Torque;
	}

	public struct KartPhysicsRotForceState
	{
		public KartPhysicsAngleControl Yaw;
		public KartPhysicsAngleControl Pitch;
		public KartPhysicsAngleControl Roll;
		public float YawFromRoll;
		public float3 RelativeTorqueResult;
		public float3 TorqueResult;
		public quaternion NewRotation;
	}

	public struct KartPhysicsAeroState
	{
		public float Force;
	}

	public enum GlidingState
	{
		NotGliding = 0,
		TakeOff = 1,
		Gliding = 2,
		Landing = 3
	}

	public struct KartPhysicsBodyState
	{
		public float Speed;
		public float LngSpeed;
		public float LatSpeed;
		public float VertSpeed;
		public float UpSpeed;
		public float LngSpeedSign;
		public float SlipAngle;
		public float SlopeCompForce;
		public float TurnCompForce;
		public int WheelOnGroundCount;
		public int FindGroundCount;
		public bool LostControl;
		public float LostControlTimer;
		public bool Spining;
		public float SpiningTimer;
		public bool WheelTouchGround;
		public bool InAir;
		public bool WasInAir;
		public bool Gliding;
		public bool SteepSlope;
		public float SlopeAngle;
		public float UpDownSlopeAngle;
		public GlidingState GlidingState;
		public float GlideTime;
		public bool Reverse;
		public bool Hopped;
		public bool Hopping;
		public float HopTimer;
		public float Boosting;
		public bool BoostVFXOn;
		public float Drifting;
		public float DriftTimer;
		public float DriftStartSign;
		public DriftBoostType DriftBoostType;
		public float DriftBoostRatio;
		public float DriftBoostDuration;
		public float ExternalLatImpulseForce;
		public float SpeedPenalty;
		public int UseHopBoostGravity;
		public float3 LocalEuler;
		public float3 NewVelocity;
		public float3 NewAngularVelocity;
		public float3 GroundNormal;
		public float3 SuspensionUp;
		public float3 Up;
		public float3 Torque;
		public float3 SurfaceUp;
		public float3 SurfaceForward;
		public float3 SurfaceRight;
		public float3 RigidbodyVelocity;
		public float3 RigidbodyAngularVelocity;
		public float3 RigidbodyForward;
		public float3 RigidbodyRight;
		public float3 RigidbodyUp;
		public float3 RigidbodyPosition;
		public quaternion RigidbodyRotation;
		public float4 CompForce;
		public float4 CombinedForce;
		public FloorSurfaceType FloorSurfaceType;
		public AestheticSurfaceType AestheticSurfaceType;
		public DriftBoostLevel CurrentAccumulatedDriftBoostLevel;

		public void Initialize()
		{
			Speed = 0f;
			LngSpeed = 0f;
			LatSpeed = 0f;
			VertSpeed = 0f;
			UpSpeed = 0f;
			LngSpeedSign = 1f;
			SlipAngle = 0f;
			SlopeCompForce = 0f;
			TurnCompForce = 0f;
			WheelOnGroundCount = 0;
			FindGroundCount = 0;
			LostControl = false;
			LostControlTimer = 0f;
			Spining = false;
			SpiningTimer = 0f;
			WheelTouchGround = false;
			InAir = false;
			WasInAir = false;
			Gliding = false;
			SteepSlope = false;
			SlopeAngle = 0f;
			UpDownSlopeAngle = 0f;
			GlidingState = GlidingState.NotGliding;
			GlideTime = 0f;
			Reverse = false;
			Hopped = false;
			Hopping = false;
			HopTimer = 0f;
			Boosting = 0f;
			BoostVFXOn = false;
			Drifting = 0f;
			DriftTimer = 0f;
			DriftStartSign = 0f;
			LocalEuler = float3.zero;
			NewVelocity = float3.zero;
			NewAngularVelocity = float3.zero;
			GroundNormal = new float3(0f, 1f, 0f);
			SuspensionUp = new float3(0f, 1f, 0f);
			Up = new float3(0f, 1f, 0f);
			Torque = float3.zero;
			SurfaceUp = new float3(0f, 1f, 0f);
			SurfaceForward = new float3(0f, 0f, 1f);
			SurfaceRight = new float3(1f, 0f, 0f);
			RigidbodyForward = new float3(0f, 0f, 1f);
			RigidbodyRight = new float3(1f, 0f, 0f);
			RigidbodyUp = new float3(0f, 1f, 0f);
			RigidbodyPosition = float3.zero;
			RigidbodyRotation = quaternion.identity;
			RigidbodyVelocity = float3.zero;
			RigidbodyAngularVelocity = float3.zero;
		}

		public void ResetStates()
		{
			GlidingState = GlidingState.NotGliding;
			Reverse = false;
			Hopped = false;
			Hopping = false;
			Boosting = 0f;
			Drifting = 0f;
			DriftTimer = 0f;
			DriftBoostType = DriftBoostType.None;
			InAir = false;
			WasInAir = false;
			Gliding = false;
			SteepSlope = false;
			CurrentAccumulatedDriftBoostLevel = DriftBoostLevel.DriftBoostLevelInvalid;
		}
	}

	public struct KartPhysicsEventsState
	{
		public bool Hopped;
		public bool LandedSmall;
		public bool StartBoost;
		public bool StopBoost;
		public bool StartDrift;
		public bool StopDrift;
		public bool StartReverse;
		public bool StopReverse;
		public bool StartGliding;
		public bool Landed;
		public bool StartDriftBoost;
		public bool StopDriftBoost;
		public bool StartUsableBoost;
		public bool StopUsableBoost;
		public bool HopBoostStart;

		public void Reset()
		{
			Hopped = false;
			LandedSmall = false;
			StartBoost = false;
			StopBoost = false;
			StartDrift = false;
			StopDrift = false;
			StartReverse = false;
			StopReverse = false;
			StartGliding = false;
			Landed = false;
			StartDriftBoost = false;
			StopDriftBoost = false;
			StartUsableBoost = false;
			StopUsableBoost = false;
			HopBoostStart = false;
		}

		public readonly bool StartAnyBoost()
		{
			return StartBoost || StartDriftBoost || StartUsableBoost || HopBoostStart;
		}
	}

	public struct KartPhysicsState
	{
		public KartSuspensionState Suspension;
		public KartPhysicsLngForceState LngForce;
		public KartPhysicsForceState LatForce;
		public KartPhysicsForceState VertForce;
		public KartPhysicsForceState GlidingForce;
		public KartPhysicsRotForceState RotForce;
		public KartPhysicsAeroState Aero;
		public KartPhysicsBodyState Body;
		public KartPhysicsEventsState Events;
		public KartPhysicsVisualState VisualState;

		public string GetPrint()
		{
			return " print PhysicsState. "
				+ string.Format("Suspension Velocity {0}, GroundPos {1}, GroundNormal {2}, SuspensionForce {3}, RideHeight {4}, ",
					Suspension.Velocity, Suspension.GroundPos, Suspension.GroundNormal, Suspension.SuspensionForce, Suspension.RideHeight)
				+ string.Format("VerticalVelocity {0} , CompressedLength{1}, FindGround {2}, TouchGround{3}, FloorSurfaceType {4}, AestheticSurfaceType {5} \n",
					Suspension.VerticalVelocity, Suspension.CompressedLength, Suspension.FindGround, Suspension.TouchGround, Suspension.FloorSurfaceType, Suspension.AestheticSurfaceType)
				+ string.Format("LngForce BoostTimer {0}, BoostSpeedOffset {1}, Boost {2}, DriftBoostTimer {3}, Force {4}, ForwardForce {5}, BrakedForce {6}, ReverseForce {7}, ",
					LngForce.BoostTimer, LngForce.BoostSpeedOffset, LngForce.Boost, LngForce.DriftBoostTimer, LngForce.Force, LngForce.ForwardForce, LngForce.BrakedForce, LngForce.ReverseForce)
				+ string.Format("BoostForce {0}, NormalizedSpeed {1}, CanInput {2} \n",
					LngForce.BoostForce, LngForce.NormalizedSpeed, LngForce.CanInput)
				+ string.Format("LatForce {0} \n", LatForce.Force)
				+ string.Format("VertForce {0} \n", VertForce.Force)
				+ string.Format("GlidingForce {0} \n", GlidingForce.Force)
				+ string.Format("RotForce Yaw {0}, Pitch {1}, Roll {2}, YawFromRoll {3}, RelativeTorqueResult {4}, TorqueResult {5}, NewRotation {6}, \n",
					RotForce.Yaw.Torque, RotForce.Pitch.Torque, RotForce.Roll.Torque, RotForce.YawFromRoll, RotForce.RelativeTorqueResult, RotForce.TorqueResult, RotForce.NewRotation)
				+ string.Format("Aero {0} \n", Aero.Force)
				+ string.Format("Body Speed {0}, LngSpeed {1}, LatSpeed {2}, VertSpeed {3}, UpSpeed {4}, LngSpeedSign {5}, SlipAngle {6}, SlopeCompForce {7}, WheelOnGroundCount {8}, \n",
					Body.Speed, Body.LngSpeed, Body.LatSpeed, Body.VertSpeed, Body.UpSpeed, Body.LngSpeedSign, Body.SlipAngle, Body.SlopeCompForce, Body.WheelOnGroundCount);
		}
	}

	public struct KartPhysicsFixedUpdateJobBurstOutput
	{
		public KartPhysicsState OutState;
		public bool MoveRotation;
		public bool HasNewVelocity;
		public bool HasNewAngularVelocity;
		public bool HasExternalLatImpulseForce;
		public float3 ExternalLatImpulseForce;
		public bool HasHopForce;
		public float3 HopForce;
		public bool HasAdditionalGravity;
		public float3 AdditionalGravityForce;
		public bool IsOverSpeedHardCap;
		public float3 SpeedCap;
	}
}
