using System;
using Unity.Mathematics;
using UnityEngine;

namespace Atlas.Gameplay.Kart
{
	public static class AtlasKartPhysicsConsts
	{
		public const int NumRayCastHits = 4;
		public static readonly RaycastHit DefaultRayCastHit;
		public static readonly LayerMask RaycastMask;
		public const float RaycastPosOffset = 0.5f;
		public const float RayLength = 2.5f;
		public const float WheelRadius = 0.125f;
		public const int NumRayCastsResults = 5;
		public const float GroundNormalMinYValue = 0.35f;
		public const float MinGlideTime = 0.15f;
		public const float LatBrakingForceFactor = 0.15f;
		public const float ObstacleShieldBreakInvulnTime = 0.2f;

		static AtlasKartPhysicsConsts()
		{
			DefaultRayCastHit = default;
			RaycastMask = LayerMask.GetMask("Default") | LayerMask.GetMask("Obstacle");
		}
	}

	public struct KartSuspensionConfig
	{
		public int Index;
		public int Lat;
		public int Lng;
		public float4 PosInCar;
		public float SpringRate;
		public float DamperRate;
		public float BottomingDamperRate;
		public float RideHeight;
		public float SuspensionLength;

		public KartSuspensionConfig(int _index, float _massOnWheel, in KartPhysicsSetup _setup, in float3 centerOfMass)
		{
			Index = _index;
			Lat = 1;
			Lng = 1;
			bool isFront = true;
			float latSign = -1f;
			if (_index == 0)
			{
				Lat = -1;
				latSign = -1f;
			}
			else if (_index == 1)
			{
				latSign = 1f;
			}
			else if (_index == 2)
			{
				isFront = false;
				Lat = -1;
				Lng = -1;
				latSign = -1f;
			}
			else if (_index == 3)
			{
				isFront = false;
				Lng = -1;
				latSign = 1f;
			}

			float wheelBaseOffset = isFront ? 0f : _setup.WheelBase;
			float posX = _setup.TrackWidth * latSign * 0.5f;
			float posZ = (_setup.Length * 0.5f - _setup.OverHang) - wheelBaseOffset;
			PosInCar = new float4(posX, centerOfMass.y, posZ, 1f);

			float gravY = Physics.gravity.y;
			SpringRate = (-gravY * _massOnWheel) / _setup.RideHeight;
			DamperRate = _setup.DampingRatio * 2f * Mathf.Sqrt(SpringRate * _massOnWheel);
			BottomingDamperRate = DamperRate * _setup.BottomingDampingRatio;
			RideHeight = _setup.RideHeight;
			SuspensionLength = _setup.RideHeight * 2f;
		}

		public KartSuspensionConfig(float _massOnWheel, in KartPhysicsSetup _setup, in float3 centerOfMass)
		{
			Index = 0;
			Lat = 0;
			Lng = 0;
			float posZ = (_setup.Length * 0.5f - _setup.OverHang) - _setup.WheelBase * 0.5f;
			PosInCar = new float4(0f, centerOfMass.y, posZ, 1f);

			float gravY = Physics.gravity.y;
			SpringRate = (-gravY * _massOnWheel) / _setup.RideHeight;
			DamperRate = _setup.DampingRatio * 2f * Mathf.Sqrt(SpringRate * _massOnWheel);
			BottomingDamperRate = DamperRate * _setup.BottomingDampingRatio;
			RideHeight = _setup.RideHeight;
			SuspensionLength = _setup.RideHeight * 2f;
		}
	}

	public struct KartPhysicsLngForceConfig
	{
		public float BrakingForce;
		public float EngineForceAtTopSpeed;
		public float EngineForceMax;
		public AnimationCurve EngineForceCurve;
		public AnimationCurve ReverseForceCurve;
		public AnimationCurve GlidingForceCurve;

		public KartPhysicsLngForceConfig(in KartPhysicsHandling handling, in Rigidbody rigidbody)
		{
			float mass = rigidbody.mass;
			BrakingForce = mass * handling.Braking;
			EngineForceCurve = new AnimationCurve(handling.ForwardAccelCurve.keys);
			ReverseForceCurve = new AnimationCurve(handling.ReverseAccelCurve.keys);
			GlidingForceCurve = new AnimationCurve(handling.GlidingAccelCurve.keys);
			EngineForceAtTopSpeed = 0f;
			EngineForceMax = 0f;

			CurveMultiplyValue(ref EngineForceCurve, mass);
			CurveMultiplyValue(ref ReverseForceCurve, mass);
			CurveMultiplyValue(ref GlidingForceCurve, mass);

			if (EngineForceCurve.keys.Length > 0)
			{
				EngineForceMax = EngineForceCurve.Evaluate(0f);
				EngineForceAtTopSpeed = EngineForceCurve.Evaluate(handling.TopSpeed);
			}
		}

		private void CurveMultiplyValue(ref AnimationCurve curve, float val)
		{
			Keyframe[] keys = curve.keys;
			for (int i = 0; i < keys.Length; i++)
			{
				keys[i].value *= val;
			}
			curve.keys = keys;
		}
	}

	public struct KartPhysicsLatForceConfig
	{
		public float LatForce;
		public float LatForceDrift;
		public float LatForceDriftMaxSteer;
		public float LatForceGliding;

		public KartPhysicsLatForceConfig(in KartPhysicsHandling handling, in Rigidbody rigidbody)
		{
			float mass = rigidbody.mass;
			LatForce = mass * handling.TireGrip;
			LatForceDrift = mass * handling.TireGripDrift;
			LatForceDriftMaxSteer = mass * handling.TireGripDriftMaxSteer;
			LatForceGliding = mass * handling.LateralAirGrip;
		}
	}

	public struct KartPhysicsVertForceConfig
	{
		public float VertForce;

		public KartPhysicsVertForceConfig(in KartPhysicsHandling handling, in Rigidbody rigidbody)
		{
			VertForce = rigidbody.mass * handling.VerticalAirGrip;
		}
	}

	public struct KartPhysicsGlidingForceConfig
	{
		public float GlidingForce;
		public float GlidingForcePitchUp;
		public float UpDraftForce;

		public KartPhysicsGlidingForceConfig(in KartPhysicsHandling handling, in Rigidbody rigidbody)
		{
			float mass = rigidbody.mass;
			float sinPitchUp = (float)Math.Sin(-handling.GlidingPitchUpMax);
			GlidingForce = handling.GlidingRatio * handling.GlidingSpeed * sinPitchUp * mass * handling.VerticalAirGrip;
			GlidingForcePitchUp = (GlidingForce * handling.GlidingRatioPitchUp) / handling.GlidingRatio;
			UpDraftForce = mass * handling.GlidingUpdraftForce;
		}
	}

	public struct KartPhysicsRotForceConfig
	{
		public float Damper;
		public float Torque;
		public float GlidingDamper;
		public float GlidingTorque;

		public KartPhysicsRotForceConfig(in KartPhysicsHandling handling, in Rigidbody rigidbody)
		{
			Damper = 25f;
			Torque = 2180f;
			GlidingDamper = 0.01f * handling.GlidingTorque;
			GlidingTorque = 20f * handling.GlidingTorque;
		}
	}

	public struct KartPhysicsAeroConfig
	{
		public float Drag;

		public KartPhysicsAeroConfig(in KartPhysicsLngForceConfig _lngConfig, in KartPhysicsHandling _handling)
		{
			float topSpeed = _handling.TopSpeed;
			Drag = _lngConfig.EngineForceAtTopSpeed / (topSpeed * topSpeed * 1.25f);
		}
	}

	public struct KartPhysicsBodyConfig
	{
		public float SlopeCompRatioUp;
		public float SlopeCompRatioDown;
		public float SlopeCompFadeAngleStart;
		public float SlopeCompFadeAngleEnd;
		public float RotToSurfaceMaxDot;

		public KartPhysicsBodyConfig(in KartPhysicsHandling handling)
		{
			SlopeCompRatioUp = handling.SlopeCompensationUp;
			SlopeCompRatioDown = handling.SlopeCompensationDown;
			SlopeCompFadeAngleStart = handling.SlopeCompensationAngleStart;
			SlopeCompFadeAngleEnd = handling.SlopeCompensationAngleMax;
			RotToSurfaceMaxDot = Mathf.Cos(handling.RotateToSurfaceMaxAngle * Mathf.Deg2Rad);
		}
	}

	public struct KartPhysicsConfig
	{
		public KartSuspensionConfig[] Suspensions;
		public KartSuspensionConfig Suspension;
		public KartPhysicsLngForceConfig LngForce;
		public KartPhysicsLatForceConfig LatForce;
		public KartPhysicsVertForceConfig VertForce;
		public KartPhysicsGlidingForceConfig GlidingForce;
		public KartPhysicsRotForceConfig RotForce;
		public KartPhysicsAeroConfig Aero;
		public KartPhysicsBodyConfig Body;

		public KartPhysicsConfig(int _wheelCount = 4)
		{
			Suspensions = new KartSuspensionConfig[_wheelCount];
			Suspension = default;
			LngForce = default;
			LatForce = default;
			VertForce = default;
			GlidingForce = default;
			RotForce = default;
			Aero = default;
			Body = default;
		}
	}

	public struct BurstCompatiblePhysicsHandling
	{
		public float TopSpeed;
		public float TopAcceleration;
		public float SpeedHardCap;
		public float VerticalSpeedCap;
		public float DriftSpeedMin;
		public float Braking;
		public float BoostSpeedOffset;
		public float Boost;
		public float BoostDuration;
		public float SmallBoostSpeedOffset;
		public float HopBoostDuration;
		public float HopBoostSpeedThreshold;
		public float HopBoostGravityScale;
		public float HopBoostRatio;
		public float MidAirBoostAccelFactor;
		public float GlidingBoostAccelFactor;
		public float SlopeCompensationUp;
		public float SlopeCompensationDown;
		public float SlopeCompensationAngleStart;
		public float SlopeCompensationAngleMax;
		public float RotateToSurfaceMaxAngle;
		public float SmallLandingSpeedVertical;
		public float SlowerKartBounceMin;
		public float SlowerKartBounceMax;
		public float FasterKartBounceMin;
		public float FasterKartBounceMax;
		public float KartToStaticBounce;
		public float KartToKartSeparationThreshold;
		public float KartToStaticCollisionEnterSeparationThreshold;
		public float KartToStaticCollisionStaySeparationThreshold;
		public float KartToStaticBounceMin;
		public float KartToStaticBounceMax;
		public float KartToStaticSpeedPenaltyFactor;
		public float KartToStaticSpeedPenaltyMinThreshold;
		public float CrashSpeedThreshold;
		public float ImpactSpeedThreshold;
		public float LostControlTimerOnCrash;
		public float CollisionEnterCooldown;
		public float SteerSpeed;
		public float RotateToSurfaceSpeed;
		public float TireGrip;
		public float TurnSpeedCompensation;
		public float SteerMinToDrift;
		public float RotSpeedDriftRatio;
		public float TireGripDrift;
		public float TireGripDriftMaxSteer;
		public float TurnSpeedDriftCompensation;
		public float TurnSpeedDriftSideForceRatio;
		public float DriftSteerMin;
		public float DriftSteerMax;
		public float DriftSteerNeutral;
		public float DriftVisualYawVelMax;
		public float DriftVisualAngleOffset;
		public float DriftVisualAngleSpeedIn;
		public float DriftVisualAngleSpeedOut;
		public float AirRotSpeedRatio;
		public float RotateToVerticalInAirSpeed;
		public float GlidingSpeed;
		public float GlidingSpeedPitchUp;
		public float GlidingYawSpeed;
		public float GlidingRollSpeed;
		public float GlidingPitchSpeed;
		public float GlidingYawFromRoll;
		public float GlidingRatio;
		public float GlidingRatioPitchUp;
		public float LateralAirGrip;
		public float VerticalAirGrip;
		public float GlidingTorque;
		public float GlidingUpdraftForce;
		public float GlidingPitchUpMax;
		public float GlidingPitchDownMax;
		public float GlidingRollMax;
		public float GlidingPitchStabilisation;
		public float GlidingRollStabilisation;
		public float HopForce;
		public float HopTimer;
		public float HopGravityScale;
		public float InitialSteeringlock;
		public float SteeringlockReleaseTime;
		public float DriftInBoostAccumulationFactor;
		public float DriftOutBoostAccumulationFactor;

		public static BurstCompatiblePhysicsHandling FromKartPhysics(KartPhysicsHandling kartPhysicsHandling, float rigidbodyMass = 1f)
		{
			BurstCompatiblePhysicsHandling result = default;
			result.TopSpeed = kartPhysicsHandling.TopSpeed;
			result.TopAcceleration = kartPhysicsHandling.TopAcceleration;
			result.SpeedHardCap = kartPhysicsHandling.SpeedHardCap;
			result.VerticalSpeedCap = kartPhysicsHandling.VerticalSpeedCap;
			result.DriftSpeedMin = kartPhysicsHandling.DriftSpeedMin;
			result.Braking = kartPhysicsHandling.Braking;
			result.BoostSpeedOffset = kartPhysicsHandling.BoostSpeedOffset;
			result.Boost = kartPhysicsHandling.Boost;
			result.BoostDuration = kartPhysicsHandling.BoostDuration;
			result.SmallBoostSpeedOffset = kartPhysicsHandling.SmallBoostSpeedOffset;
			result.HopBoostDuration = kartPhysicsHandling.HopBoostDuration;
			result.HopBoostSpeedThreshold = kartPhysicsHandling.HopBoostSpeedThreshold;
			result.HopBoostGravityScale = kartPhysicsHandling.HopBoostGravityScale;
			result.HopBoostRatio = kartPhysicsHandling.HopBoostRatio;
			result.MidAirBoostAccelFactor = kartPhysicsHandling.MidAirBoostAccelFactor;
			result.GlidingBoostAccelFactor = kartPhysicsHandling.GlidingBoostAccelFactor;
			result.SlopeCompensationUp = kartPhysicsHandling.SlopeCompensationUp;
			result.SlopeCompensationDown = kartPhysicsHandling.SlopeCompensationDown;
			result.SlopeCompensationAngleStart = kartPhysicsHandling.SlopeCompensationAngleStart;
			result.SlopeCompensationAngleMax = kartPhysicsHandling.SlopeCompensationAngleMax;
			result.RotateToSurfaceMaxAngle = kartPhysicsHandling.RotateToSurfaceMaxAngle;
			result.SmallLandingSpeedVertical = kartPhysicsHandling.SmallLandingSpeedVertical;
			result.SlowerKartBounceMin = kartPhysicsHandling.SlowerKartBounceMin * rigidbodyMass;
			result.SlowerKartBounceMax = kartPhysicsHandling.SlowerKartBounceMax * rigidbodyMass;
			result.FasterKartBounceMin = kartPhysicsHandling.FasterKartBounceMin * rigidbodyMass;
			result.FasterKartBounceMax = kartPhysicsHandling.FasterKartBounceMax * rigidbodyMass;
			result.KartToStaticBounce = kartPhysicsHandling.KartToStaticBounce;
			result.KartToKartSeparationThreshold = kartPhysicsHandling.KartToKartSeparationThreshold;
			result.KartToStaticCollisionEnterSeparationThreshold = kartPhysicsHandling.KartToStaticCollisionEnterSeparationThreshold;
			result.KartToStaticCollisionStaySeparationThreshold = kartPhysicsHandling.KartToStaticCollisionStaySeparationThreshold;
			result.KartToStaticBounceMin = kartPhysicsHandling.KartToStaticBounceMin * rigidbodyMass;
			result.KartToStaticBounceMax = kartPhysicsHandling.KartToStaticBounceMax * rigidbodyMass;
			result.KartToStaticSpeedPenaltyFactor = kartPhysicsHandling.KartToStaticSpeedPenaltyFactor;
			result.KartToStaticSpeedPenaltyMinThreshold = kartPhysicsHandling.KartToStaticSpeedPenaltyMinThreshold;
			result.CrashSpeedThreshold = kartPhysicsHandling.CrashSpeedThreshold;
			result.ImpactSpeedThreshold = kartPhysicsHandling.ImpactSpeedThreshold;
			result.LostControlTimerOnCrash = kartPhysicsHandling.LostControlTimerOnCrash;
			result.CollisionEnterCooldown = kartPhysicsHandling.CollisionEnterCooldown;
			result.SteerSpeed = kartPhysicsHandling.SteerSpeed;
			result.RotateToSurfaceSpeed = kartPhysicsHandling.RotateToSurfaceSpeed;
			result.TireGrip = kartPhysicsHandling.TireGrip;
			result.TurnSpeedCompensation = kartPhysicsHandling.TurnSpeedCompensation;
			result.SteerMinToDrift = kartPhysicsHandling.SteerMinToDrift;
			result.RotSpeedDriftRatio = kartPhysicsHandling.RotSpeedDriftRatio;
			result.TireGripDrift = kartPhysicsHandling.TireGripDrift;
			result.TireGripDriftMaxSteer = kartPhysicsHandling.TireGripDriftMaxSteer;
			result.TurnSpeedDriftCompensation = kartPhysicsHandling.TurnSpeedDriftCompensation;
			result.TurnSpeedDriftSideForceRatio = kartPhysicsHandling.TurnSpeedDriftSideForceRatio;
			result.DriftSteerMin = kartPhysicsHandling.DriftSteerMin;
			result.DriftSteerMax = kartPhysicsHandling.DriftSteerMax;
			result.DriftSteerNeutral = kartPhysicsHandling.DriftSteerNeutral;
			result.DriftVisualYawVelMax = kartPhysicsHandling.DriftVisualYawVelMax;
			result.DriftVisualAngleOffset = kartPhysicsHandling.DriftVisualAngleOffset;
			result.DriftVisualAngleSpeedIn = kartPhysicsHandling.DriftVisualAngleSpeedIn;
			result.DriftVisualAngleSpeedOut = kartPhysicsHandling.DriftVisualAngleSpeedOut;
			result.AirRotSpeedRatio = kartPhysicsHandling.AirRotSpeedRatio;
			result.RotateToVerticalInAirSpeed = kartPhysicsHandling.RotateToVerticalInAirSpeed;
			result.GlidingSpeed = kartPhysicsHandling.GlidingSpeed;
			result.GlidingSpeedPitchUp = kartPhysicsHandling.GlidingSpeedPitchUp;
			result.GlidingYawSpeed = kartPhysicsHandling.GlidingYawSpeed;
			result.GlidingRollSpeed = kartPhysicsHandling.GlidingRollSpeed;
			result.GlidingPitchSpeed = kartPhysicsHandling.GlidingPitchSpeed;
			result.GlidingYawFromRoll = kartPhysicsHandling.GlidingYawFromRoll;
			result.GlidingRatio = kartPhysicsHandling.GlidingRatio;
			result.GlidingRatioPitchUp = kartPhysicsHandling.GlidingRatioPitchUp;
			result.LateralAirGrip = kartPhysicsHandling.LateralAirGrip;
			result.VerticalAirGrip = kartPhysicsHandling.VerticalAirGrip;
			result.GlidingTorque = kartPhysicsHandling.GlidingTorque;
			result.GlidingUpdraftForce = kartPhysicsHandling.GlidingUpdraftForce;
			result.GlidingPitchUpMax = kartPhysicsHandling.GlidingPitchUpMax;
			result.GlidingPitchDownMax = kartPhysicsHandling.GlidingPitchDownMax;
			result.GlidingRollMax = kartPhysicsHandling.GlidingRollMax;
			result.GlidingPitchStabilisation = kartPhysicsHandling.GlidingPitchStabilisation;
			result.GlidingRollStabilisation = kartPhysicsHandling.GlidingRollStabilisation;
			result.HopForce = kartPhysicsHandling.HopForce;
			result.HopTimer = kartPhysicsHandling.HopTimer;
			result.HopGravityScale = kartPhysicsHandling.HopGravityScale;
			result.InitialSteeringlock = kartPhysicsHandling.InitialSteeringlock;
			result.SteeringlockReleaseTime = kartPhysicsHandling.SteeringlockReleaseTime;
			result.DriftInBoostAccumulationFactor = kartPhysicsHandling.DriftInBoostAccumulationFactor;
			result.DriftOutBoostAccumulationFactor = kartPhysicsHandling.DriftOutBoostAccumulationFactor;
			return result;
		}
	}
}
