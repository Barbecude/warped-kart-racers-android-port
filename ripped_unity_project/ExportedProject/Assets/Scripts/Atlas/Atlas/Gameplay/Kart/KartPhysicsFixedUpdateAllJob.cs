using System;
using Atlas.Maths;
using Core.Extensions;
using Unity.Burst;
using Unity.Collections;
using Unity.Jobs;
using Unity.Mathematics;
using UnityEngine;

namespace Atlas.Gameplay.Kart
{
	public struct KartPhysicsFixedUpdateJobBurstAllInput
	{
		public BurstCompatiblePhysicsHandling Handling;
		public KartPhysicsInputData InputData;
		public float4x4 LocalToWorldMatrix;
		public float4 RigidBodyForward;
		public float4 RigidBodyRight;
		public float4 RigidBodyUp;
		public float4 RigidBodyVelocity;
		public float4 RigidBodyPosition;
		public quaternion RigidBodyRotation;
		public float4 Gravity;
		public float RigidbodyMass;
		public float TurnSpeedDriftCompensationModifier;
		public float TurnSpeedCompensationModifier;
		public float DeltaTime;
		public float BrakingForce;
		public float EngineForceMax;
		public float GlidingForceCurveEvaluate;
		public float EngineForceCurveEvaluate;
		public float ReverseForceCurveEvaluate;
		public float ReverseSpeedModifier;
		public float LatBrakingForce;
		public float DriftSpeedMinModifier;
		public bool IsHitSpin;
		public float SpeedModifier;
		public bool IsSpeedReduced;
		public float BrakingModifier;
		public float SpinoutFactor;
		public float SurfaceDecelerationFactor;
		public bool RelativeSpeedLimit;
		public float RelativeSpeedReductionModifier;
		public float AbsoluteReducedSpeedLimit;
		public float TireGripModifier;
		public float TireGripDriftMinModifier;
		public float TireGripDriftMaxModifier;
		public float RotSpeedFromKartSpeedCurve;
		public float RotSpeedFromKartSpeedModifier;
		public float RotSpeedFromSteerAngleCurve;
		public float RotSpeedFromSteerAngleModifier;
		public float RotSpeedDriftRatioModifier;
		public float4 CoM;
		public float4 AngularVelocity;
		public float PosOffset;
		public float VisualWheelRotationSpeed;
		public KartVisualSettingsDefinition.KartWheelAngleVisualParams WheelAngleVisualParams;
		public KartVisualSettingsDefinition.KartSteeringVisualParams VisualSteeringParams;
		public KartPhysicsLatForceConfig LatForceConfig;
		public KartPhysicsVertForceConfig VertForceConfig;
		public KartPhysicsGlidingForceConfig GlidingForceConfig;
		public KartPhysicsBodyConfig BodyConfig;
		public KartPhysicsRotForceConfig RotForceConfig;
		public KartPhysicsAeroConfig AeroConfig;
		public float HopForceModifier;
		public bool UsedCheapRaycast;
	}

	[BurstCompile]
	public struct KartPhysicsFixedUpdateAllJob : IJob
	{
		[ReadOnly]
		public NativeArray<KartPhysicsFixedUpdateJobBurstAllInput> FixedUpdateInArray;
		[ReadOnly]
		public NativeArray<KartPhysicsState> KartPhysicsStateIn;
		[WriteOnly]
		public NativeArray<KartPhysicsFixedUpdateJobBurstOutput> Results;
		public NativeArray<KartSuspensionState> Wheels;
		[ReadOnly]
		public NativeArray<KartSuspensionConfig> WheelConfigs;
		[ReadOnly]
		public NativeArray<KartPhysicsRaycastResult> SuspensionRaycastResults;
		[ReadOnly]
		public NativeArray<DriftBoostLevel> DriftBoostLevelsTable;
		public int NumWheelsPerKart;
		public int NumKarts;
		public int RunJobBit;

		public static float4 GetLinearVelocityAtPoint(in float4 com, in float4 angularVelocity, in float4x4 localToWorld, in float4 velocity, in float4 localPoint)
		{
			float4 worldPoint = math.mul(localToWorld, localPoint);
			return velocity + Math4d.Cross(angularVelocity, worldPoint - com);
		}

		public KartSuspensionState KartSuspensionUpdateJobExecute(in NativeArray<KartSuspensionConfig> WheelConfigs, in KartPhysicsBodyState bodystate, int index, in KartPhysicsFixedUpdateJobBurstAllInput FixedUpdateIn, float minCompressedLen = 0f)
		{
			KartSuspensionConfig cfg = WheelConfigs[index];
			float4 localPos = new float4(cfg.PosInCar.xyz, 1f);
			float4 vel = GetLinearVelocityAtPoint(in FixedUpdateIn.CoM, in FixedUpdateIn.AngularVelocity, in FixedUpdateIn.LocalToWorldMatrix, in FixedUpdateIn.RigidBodyVelocity, in localPos);

			KartPhysicsRaycastResult rayRes = SuspensionRaycastResults[index];
			RaycastHit hit = rayRes.RaycastHit;
			float4 groundPos;
			float4 groundNormal;
			float rideHeight;
			float suspLen = cfg.SuspensionLength;
			bool findGround = hit.distance != float.MaxValue && hit.distance > 0f;
			if (hit.distance != float.MaxValue)
			{
				Vector3 p = hit.point;
				Vector3 n = hit.normal;
				groundPos = new float4(p.x, p.y, p.z, 1f);
				groundNormal = new float4(n.x, n.y, n.z, 0f);
				rideHeight = hit.distance - FixedUpdateIn.PosOffset;
				findGround = true;
			}
			else
			{
				groundPos = float4.zero;
				groundNormal = new float4(0f, 1f, 0f, 0f);
				rideHeight = suspLen;
				findGround = false;
			}

			float vertVel = math.dot(vel, groundNormal);
			float compressed = suspLen - rideHeight;
			if (compressed < minCompressedLen)
			{
				compressed = minCompressedLen;
			}

			bool touchGround;
			float4 suspForce;
			FloorSurfaceType floorSurf = rayRes.FloorSurfaceType;
			AestheticSurfaceType aesSurf = rayRes.AestheticSurfaceType;
			if (compressed <= 0f)
			{
				touchGround = false;
				floorSurf = FloorSurfaceType.None;
				aesSurf = AestheticSurfaceType.None;
				suspForce = float4.zero;
				compressed = 0f;
			}
			else
			{
				float damper = (vertVel <= 0f && compressed > suspLen) ? cfg.BottomingDamperRate : cfg.DamperRate;
				float forceMag = compressed * cfg.SpringRate - vertVel * damper;
				if (bodystate.Hopped || bodystate.Hopping)
				{
					forceMag = math.max(0f, forceMag);
				}
				suspForce = groundNormal * forceMag;
				touchGround = true;
			}

			KartSuspensionState state = default;
			state.Velocity = vel;
			state.GroundPos = groundPos;
			state.GroundNormal = groundNormal;
			state.SuspensionForce = suspForce;
			state.RideHeight = rideHeight;
			state.VerticalVelocity = vertVel;
			state.CompressedLength = compressed;
			state.FindGround = findGround;
			state.TouchGround = touchGround;
			state.FloorSurfaceType = floorSurf;
			state.AestheticSurfaceType = aesSurf;
			return state;
		}

		public DriftBoostLevel GetBoostLevelFromDriftTime(float driftTime)
		{
			for (int i = 0; i < DriftBoostLevelsTable.Length; i++)
			{
				DriftBoostLevel lvl = DriftBoostLevelsTable[i];
				if (lvl.TimeToActivate <= driftTime)
				{
					return lvl;
				}
			}
			return DriftBoostLevel.DriftBoostLevelInvalid;
		}

		public void KartPhysicsUpdateBodyJobExecute(ref KartPhysicsBodyState bodyState, in NativeArray<KartSuspensionState> Wheels, int wheelsIndexStart, in KartSuspensionState bodySuspension, ref KartPhysicsEventsState eventsState, ref KartPhysicsLngForceState LngForceState, in KartPhysicsInputData inputData, in KartPhysicsFixedUpdateJobBurstAllInput FixedUpdateIn)
		{
			bodyState.WheelOnGroundCount = 0;
			bodyState.FindGroundCount = 0;
			for (int i = 0; i < 4; i++)
			{
				KartSuspensionState w = Wheels[wheelsIndexStart + i];
				if (w.TouchGround)
				{
					bodyState.WheelOnGroundCount++;
				}
				if (w.FindGround)
				{
					bodyState.FindGroundCount++;
				}
			}

			if (!FixedUpdateIn.UsedCheapRaycast)
			{
				KartSuspensionState wFL = Wheels[wheelsIndexStart];
				KartSuspensionState wFR = Wheels[wheelsIndexStart + 1];
				KartSuspensionState wRL = Wheels[wheelsIndexStart + 2];
				KartSuspensionState wRR = Wheels[wheelsIndexStart + 3];

				float4 fwd = FixedUpdateIn.RigidBodyForward;
				if (wFL.FindGround && wRL.FindGround)
				{
					fwd = wFL.GroundPos - wRL.GroundPos;
				}
				if (wFR.FindGround && wRR.FindGround)
				{
					float4 fwdR = wFR.GroundPos - wRR.GroundPos;
					if (math.abs(fwd.y) < math.abs(fwdR.y))
					{
						fwd = fwdR;
					}
				}

				float4 right = FixedUpdateIn.RigidBodyRight;
				if (wRL.FindGround && wRR.FindGround)
				{
					right = wRR.GroundPos - wRL.GroundPos;
				}
				if (wFL.FindGround && wFR.FindGround)
				{
					float4 rightF = wFR.GroundPos - wFL.GroundPos;
					if (math.abs(right.y) < math.abs(rightF.y))
					{
						right = rightF;
					}
				}

				float3 fwdNorm = math.normalizesafe(fwd.xyz, FixedUpdateIn.RigidBodyForward.xyz);
				float3 rightNorm = math.normalizesafe(right.xyz, FixedUpdateIn.RigidBodyRight.xyz);
				bodyState.SuspensionUp = math.cross(fwdNorm, rightNorm);
			}
			else
			{
				bodyState.SuspensionUp = bodySuspension.GroundNormal.xyz;
			}

			bodyState.GroundNormal = bodySuspension.GroundNormal.xyz;
			bodyState.FloorSurfaceType = (LngForceState.UsableBoostTimer > 0f) ? FloorSurfaceType.Tarmac : bodySuspension.FloorSurfaceType;
			bodyState.AestheticSurfaceType = bodySuspension.AestheticSurfaceType;

			float4 vel = FixedUpdateIn.RigidBodyVelocity;
			bodyState.Speed = math.length(vel);
			bodyState.LngSpeed = math.dot(FixedUpdateIn.RigidBodyForward, vel);
			bodyState.LatSpeed = math.dot(FixedUpdateIn.RigidBodyRight, vel);
			bodyState.VertSpeed = math.dot(FixedUpdateIn.RigidBodyUp, vel);
			bodyState.UpSpeed = vel.y;
			bodyState.LngSpeedSign = (bodyState.LngSpeed > 0f ? 1f : 0f) - (bodyState.LngSpeed < 0f ? 1f : 0f);
			bodyState.SlipAngle = math.atan2(bodyState.LatSpeed, bodyState.LngSpeedSign * bodyState.LngSpeed);

			quaternion q = FixedUpdateIn.RigidBodyRotation;
			float qx = q.value.x;
			float qy = q.value.y;
			float qz = q.value.z;
			float qw = q.value.w;
			float x2 = qx + qx;
			float y2 = qy + qy;
			float zz2 = qz * (qz + qz);
			bodyState.LocalEuler.x = -math.atan2(x2 * qw - y2 * qz, 1f - qx * x2 - zz2);
			bodyState.LocalEuler.y = math.atan2(y2 * qw - x2 * qz, 1f - qy * y2 - zz2);
			bodyState.LocalEuler.z = -math.asin(math.clamp(x2 * qy + (qz + qz) * qw, -1f, 1f));

			bodyState.SlopeAngle = math.acos(math.clamp(bodyState.Up.y, -1f, 1f));
			bodyState.SteepSlope = FixedUpdateIn.Handling.SlopeCompensationAngleMax < bodyState.SlopeAngle;

			float fwdY = FixedUpdateIn.RigidBodyForward.y;
			float fwdYSign = (fwdY > 0f ? 1f : 0f) - (fwdY < 0f ? 1f : 0f);
			bodyState.UpDownSlopeAngle = fwdYSign * ((Mathf.PI * 0.5f) - math.acos(math.clamp(math.abs(fwdY), -1f, 1f)));

			int onGround = bodyState.WheelOnGroundCount;
			bodyState.WheelTouchGround = onGround != 0;
			bool prevInAir = bodyState.InAir;
			bodyState.WasInAir = prevInAir;
			bool gliding = bodyState.Gliding;
			bool inAir = !gliding && onGround == 0;
			bodyState.InAir = inAir;

			switch (bodyState.GlidingState)
			{
				case GlidingState.NotGliding:
					if (gliding)
					{
						bodyState.GlidingState = GlidingState.TakeOff;
					}
					break;
				case GlidingState.TakeOff:
					if (gliding && onGround == 0)
					{
						bodyState.GlidingState = GlidingState.Gliding;
						bodyState.GlideTime = 0f;
					}
					break;
				case GlidingState.Gliding:
					bodyState.GlideTime += FixedUpdateIn.DeltaTime;
					if ((onGround != 0 || !gliding) && bodyState.GlideTime > AtlasKartPhysicsConsts.MinGlideTime)
					{
						bodyState.GlidingState = GlidingState.Landing;
					}
					break;
				case GlidingState.Landing:
					gliding = false;
					bodyState.GlidingState = GlidingState.NotGliding;
					bodyState.Gliding = false;
					eventsState.Landed = true;
					break;
			}

			if ((gliding || onGround != 0) && prevInAir)
			{
				if (-FixedUpdateIn.RigidBodyVelocity.y <= FixedUpdateIn.Handling.SmallLandingSpeedVertical)
				{
					eventsState.LandedSmall = true;
				}
				else
				{
					eventsState.Landed = true;
				}
				if (LngForceState.HopBoostPending)
				{
					LngForceState.HopBoostTimer = FixedUpdateIn.Handling.HopBoostDuration;
					LngForceState.HopBoostRatio = FixedUpdateIn.Handling.HopBoostRatio;
				}
				LngForceState.HopBoostPending = false;
			}

			if (gliding && LngForceState.HopBoostPending)
			{
				LngForceState.HopBoostTimer = FixedUpdateIn.Handling.HopBoostDuration;
				LngForceState.HopBoostRatio = FixedUpdateIn.Handling.HopBoostRatio;
				LngForceState.HopBoostPending = false;
			}

			if (inputData.Hop && onGround != 0)
			{
				if (!bodyState.Hopping && (bodyState.Drifting <= 0f || inputData.Drift == 0f))
				{
					bodyState.Hopped = true;
					eventsState.Hopped = true;
				}
			}

			if (bodyState.Drifting > 0f)
			{
				if (onGround != 0)
				{
					float steerNorm = (math.abs(inputData.Steer) - FixedUpdateIn.Handling.DriftSteerMin) / (FixedUpdateIn.Handling.DriftSteerMax - FixedUpdateIn.Handling.DriftSteerMin);
					float accumFactor = FixedUpdateIn.Handling.DriftOutBoostAccumulationFactor + steerNorm * (FixedUpdateIn.Handling.DriftInBoostAccumulationFactor - FixedUpdateIn.Handling.DriftOutBoostAccumulationFactor);
					bodyState.DriftTimer += FixedUpdateIn.DeltaTime * accumFactor;
				}

				float minDriftSpd = FixedUpdateIn.Handling.DriftSpeedMin * FixedUpdateIn.DriftSpeedMinModifier;
				DriftBoostLevel lvl = GetBoostLevelFromDriftTime(bodyState.DriftTimer);
				bodyState.CurrentAccumulatedDriftBoostLevel = lvl;

				if (bodyState.LngSpeed < minDriftSpd || inputData.Drift == 0f)
				{
					bool grantBoost = lvl.IsValid() && bodyState.LngSpeed >= minDriftSpd;
					eventsState.StartDriftBoost = grantBoost;
					bodyState.DriftBoostType = grantBoost ? lvl.DriftBoostType : DriftBoostType.None;
					bodyState.DriftBoostRatio = grantBoost ? lvl.DriftBoostRatio : 0f;
					bodyState.DriftBoostDuration = grantBoost ? lvl.DriftBoostDuration : 0f;
					bodyState.DriftTimer = 0f;
					bodyState.DriftStartSign = 0f;
					bodyState.Drifting = 0f;
					eventsState.StopDrift = true;
					bodyState.CurrentAccumulatedDriftBoostLevel = DriftBoostLevel.DriftBoostLevelInvalid;
				}
			}
			else if (inputData.Drift > 0f && (bodyState.Hopped || bodyState.Hopping || inAir || prevInAir))
			{
				if (KartPhysics.IsDriftingStateRequirementsMet(FixedUpdateIn.Handling, inputData.Steer, bodyState, FixedUpdateIn.DriftSpeedMinModifier))
				{
					eventsState.StartDrift = true;
					bodyState.Drifting = 1f;
					bodyState.DriftStartSign = (inputData.Steer > 0f ? 1f : 0f) - (inputData.Steer < 0f ? 1f : 0f);
				}
			}

			bodyState.LostControl = bodyState.LostControlTimer > 0f;
			bodyState.LostControlTimer = bodyState.LostControlTimer > 0f ? bodyState.LostControlTimer - FixedUpdateIn.DeltaTime : 0f;

			bodyState.Spining = bodyState.SpiningTimer > 0f;
			bodyState.SpiningTimer = bodyState.SpiningTimer > 0f ? bodyState.SpiningTimer - FixedUpdateIn.DeltaTime : 0f;

			bodyState.Boosting = 0f;
			bodyState.BoostVFXOn = true;
			if (LngForceState.UsableBoostTimer > 0f)
			{
				bodyState.Boosting = 1f;
				bodyState.BoostVFXOn = LngForceState.UsableBoostVFXOn;
			}
			if (LngForceState.BoostTimer > 0f || LngForceState.DriftBoostTimer > 0f || LngForceState.HopBoostTimer > 0f)
			{
				bodyState.Boosting = 1f;
				bodyState.BoostVFXOn = true;
			}

			if (LngForceState.ReverseForce <= 0f || inputData.Reverse <= 0f)
			{
				if (bodyState.Reverse)
				{
					eventsState.StopReverse = true;
				}
				bodyState.Reverse = false;
			}
			else
			{
				if (!bodyState.Reverse)
				{
					eventsState.StartReverse = true;
				}
				bodyState.Reverse = true;
			}

			float rotSpeed;
			if (bodyState.WasInAir == bodyState.InAir && math.lengthsq(bodyState.SurfaceUp) > 0f)
			{
				if (bodyState.Gliding)
				{
					bodyState.SurfaceUp = bodyState.Up;
					rotSpeed = bodyState.InAir ? FixedUpdateIn.Handling.RotateToVerticalInAirSpeed : FixedUpdateIn.Handling.RotateToSurfaceSpeed;
				}
				else if (bodyState.InAir)
				{
					rotSpeed = FixedUpdateIn.Handling.RotateToVerticalInAirSpeed;
				}
				else
				{
					bodyState.SurfaceUp = (bodyState.WheelOnGroundCount == 4) ? bodyState.SuspensionUp : bodyState.GroundNormal;
					rotSpeed = FixedUpdateIn.Handling.RotateToSurfaceSpeed;
				}
			}
			else
			{
				bodyState.SurfaceUp = new float3(0f, 1f, 0f);
				if (math.abs(FixedUpdateIn.RigidBodyRight.y) >= 0.5f)
				{
					if (!bodyState.InAir)
					{
						bodyState.SurfaceUp = bodyState.GroundNormal;
					}
				}
				else if (math.abs(bodyState.GroundNormal.y) >= 0.25f)
				{
					if (!bodyState.InAir)
					{
						bodyState.SurfaceUp = bodyState.GroundNormal;
					}
				}
				else
				{
					bodyState.SurfaceUp = bodyState.GroundNormal;
				}
				rotSpeed = bodyState.InAir ? FixedUpdateIn.Handling.RotateToVerticalInAirSpeed : FixedUpdateIn.Handling.RotateToSurfaceSpeed;
			}

			float lerpFactor = rotSpeed * 0.01f;
			bodyState.Up = math.normalizesafe(bodyState.Up + lerpFactor * (bodyState.SurfaceUp - bodyState.Up), new float3(0f, 1f, 0f));
			bodyState.SurfaceForward = FixedUpdateIn.RigidBodyForward.xyz;
			bodyState.SurfaceRight = math.normalizesafe(math.cross(bodyState.SurfaceUp, bodyState.SurfaceForward), FixedUpdateIn.RigidBodyRight.xyz);
			bodyState.SurfaceForward = math.normalizesafe(math.cross(bodyState.SurfaceRight, bodyState.SurfaceUp), FixedUpdateIn.RigidBodyForward.xyz);
		}

		public void LngJobExecute(ref KartPhysicsEventsState eventsState, ref KartPhysicsLngForceState lngForceState, ref KartPhysicsBodyState bodyState, in KartPhysicsInputData inputData, in KartPhysicsFixedUpdateJobBurstAllInput FixedUpdateIn)
		{
			float canInput = 1f;
			if (!bodyState.WheelTouchGround && bodyState.Boosting > 0f)
			{
				canInput = bodyState.Gliding ? FixedUpdateIn.Handling.GlidingBoostAccelFactor : FixedUpdateIn.Handling.MidAirBoostAccelFactor;
			}
			else if (bodyState.Gliding)
			{
				canInput = 0f;
			}
			if (bodyState.SteepSlope)
			{
				canInput = 0f;
			}
			lngForceState.CanInput = canInput;

			float throttleFactor = bodyState.Gliding ? 1f : (inputData.Throttle * canInput);
			float reverseInput = inputData.Reverse;

			float speedMod = FixedUpdateIn.SpeedModifier;
			if (FixedUpdateIn.IsHitSpin)
			{
				lngForceState.CanInput = 0f;
				if (lngForceState.BoostTimer > 0f) eventsState.StopBoost = true;
				if (lngForceState.DriftBoostTimer > 0f) eventsState.StopDriftBoost = true;
				if (lngForceState.UsableBoostTimer > 0f) eventsState.StopUsableBoost = true;
				lngForceState.HopBoostTimer = 0f;
				lngForceState.BoostTimer = 0f;
				lngForceState.DriftBoostTimer = 0f;
				lngForceState.UsableBoostTimer = 0f;
			}
			else if (lngForceState.UsableBoostTimer > 0f)
			{
				speedMod = 1f;
			}

			float targetTopSpeed;
			if (!bodyState.Gliding)
			{
				targetTopSpeed = speedMod * (FixedUpdateIn.Handling.TopSpeed + inputData.Boost * FixedUpdateIn.Handling.SmallBoostSpeedOffset);
			}
			else
			{
				float pitchT = math.clamp(bodyState.LocalEuler.x / FixedUpdateIn.Handling.GlidingPitchUpMax, 0f, 1f);
				targetTopSpeed = math.lerp(FixedUpdateIn.Handling.GlidingSpeed, FixedUpdateIn.Handling.GlidingSpeedPitchUp, pitchT);
			}

			if (FixedUpdateIn.IsSpeedReduced)
			{
				targetTopSpeed = FixedUpdateIn.RelativeSpeedLimit ? (targetTopSpeed * FixedUpdateIn.RelativeSpeedReductionModifier) : FixedUpdateIn.AbsoluteReducedSpeedLimit;
			}

			float normalizedSpeed = (bodyState.Speed * FixedUpdateIn.Handling.TopSpeed) / targetTopSpeed;
			lngForceState.NormalizedSpeed = normalizedSpeed;

			float engineEval = bodyState.Gliding ? FixedUpdateIn.GlidingForceCurveEvaluate : (speedMod * FixedUpdateIn.EngineForceCurveEvaluate);
			float forwardForce = throttleFactor * engineEval;
			lngForceState.ForwardForce = forwardForce;
			lngForceState.Force = forwardForce;

			float reverseForce = reverseInput * canInput * FixedUpdateIn.ReverseForceCurveEvaluate * FixedUpdateIn.ReverseSpeedModifier;
			lngForceState.ReverseForce = reverseForce;
			lngForceState.Force -= reverseForce;

			float brakeDir = bodyState.LngSpeedSign * math.clamp(math.abs(bodyState.LngSpeed) * 2f, 0f, 1f);
			float negBraking = -FixedUpdateIn.BrakingForce;
			float brakedForce;
			if (!FixedUpdateIn.IsHitSpin)
			{
				brakedForce = FixedUpdateIn.BrakingModifier * lngForceState.CanInput * inputData.Brake * negBraking * brakeDir;
			}
			else
			{
				brakedForce = brakeDir * negBraking * FixedUpdateIn.SpinoutFactor;
			}

			if (normalizedSpeed > FixedUpdateIn.Handling.TopSpeed && lngForceState.BoostTimer <= 0f && lngForceState.DriftBoostTimer <= 0f && lngForceState.UsableBoostTimer <= 0f)
			{
				brakedForce += brakeDir * negBraking * FixedUpdateIn.SurfaceDecelerationFactor;
			}
			lngForceState.Force += brakedForce;

			float unscaledTop = math.max(targetTopSpeed, targetTopSpeed / speedMod);
			float boostLimit = FixedUpdateIn.Handling.SmallBoostSpeedOffset + lngForceState.BoostSpeedOffset + unscaledTop;
			float boostBlend = math.clamp((bodyState.LngSpeed - boostLimit) / (targetTopSpeed - boostLimit), 0f, 1f);

			float driftLimit = targetTopSpeed + lngForceState.BoostSpeedOffset + FixedUpdateIn.Handling.SmallBoostSpeedOffset;
			float driftBlend = math.clamp((bodyState.LngSpeed - driftLimit) / (targetTopSpeed - driftLimit), 0f, 1f);

			float usableLimit = FixedUpdateIn.Handling.SmallBoostSpeedOffset + lngForceState.UsableBoostSpeedOffset + unscaledTop;
			float usableBlend = math.clamp((bodyState.LngSpeed - usableLimit) / (targetTopSpeed - usableLimit), 0f, 1f);

			float boostForce = 0f;
			if (lngForceState.HopBoostTimer <= 0f)
			{
				lngForceState.HopBoostTimer = 0f;
			}
			else
			{
				lngForceState.HopBoostTimer -= FixedUpdateIn.DeltaTime;
				boostForce = boostBlend * FixedUpdateIn.EngineForceMax * lngForceState.HopBoostRatio;
			}

			if (eventsState.StartDriftBoost && lngForceState.DriftBoostTimer == 0f)
			{
				lngForceState.DriftBoostTimer = bodyState.DriftBoostDuration;
			}
			if (lngForceState.DriftBoostTimer <= 0f)
			{
				lngForceState.DriftBoostTimer = 0f;
			}
			else
			{
				lngForceState.DriftBoostTimer -= FixedUpdateIn.DeltaTime;
				boostForce = driftBlend * FixedUpdateIn.EngineForceMax * bodyState.DriftBoostRatio;
				if (lngForceState.DriftBoostTimer <= 0f)
				{
					eventsState.StopDriftBoost = true;
				}
			}

			if (lngForceState.BoostTimer <= 0f)
			{
				lngForceState.BoostTimer = 0f;
			}
			else
			{
				lngForceState.BoostTimer -= FixedUpdateIn.DeltaTime;
				boostForce = boostBlend * FixedUpdateIn.EngineForceMax * lngForceState.Boost;
				if (lngForceState.BoostTimer <= 0f)
				{
					eventsState.StopBoost = true;
				}
			}

			if (lngForceState.UsableBoostTimer <= 0f)
			{
				lngForceState.UsableBoostTimer = 0f;
			}
			else
			{
				lngForceState.UsableBoostTimer -= FixedUpdateIn.DeltaTime;
				boostForce = usableBlend * FixedUpdateIn.EngineForceMax * lngForceState.UsableBoost;
				if (lngForceState.UsableBoostTimer <= 0f)
				{
					eventsState.StopUsableBoost = true;
				}
			}

			lngForceState.Force += boostForce * lngForceState.CanInput;
			lngForceState.BrakedForce = brakedForce;
			lngForceState.BoostForce = boostForce;
		}

		public void LatJobExecute(ref KartPhysicsForceState latForceState, in KartPhysicsBodyState bodyStateIn, in KartPhysicsInputData inputData, in KartPhysicsFixedUpdateJobBurstAllInput FixedUpdateIn)
		{
			float latCoeff;
			if (!bodyStateIn.Gliding)
			{
				float baseLat = FixedUpdateIn.LatForceConfig.LatForce * FixedUpdateIn.TireGripModifier;
				latCoeff = baseLat + (FixedUpdateIn.LatForceConfig.LatForceDrift - baseLat) * bodyStateIn.Drifting;
			}
			else
			{
				latCoeff = FixedUpdateIn.LatForceConfig.LatForceGliding;
			}

			if (bodyStateIn.Drifting > 0f)
			{
				float minLat = FixedUpdateIn.LatForceConfig.LatForceDrift * FixedUpdateIn.TireGripDriftMinModifier;
				float maxLat = FixedUpdateIn.LatForceConfig.LatForceDriftMaxSteer * FixedUpdateIn.TireGripDriftMaxModifier;
				float midLat = minLat + (maxLat - FixedUpdateIn.LatForceConfig.LatForceDrift) * 0.5f;
				float absSteer = math.abs(inputData.Steer);
				float neutral = FixedUpdateIn.Handling.DriftSteerNeutral;
				if (absSteer >= neutral)
				{
					float t = math.clamp((absSteer - neutral) / (FixedUpdateIn.Handling.DriftSteerMax - neutral), 0f, 1f);
					latCoeff = math.lerp(midLat, maxLat, t);
				}
				else
				{
					float t = math.clamp((absSteer - FixedUpdateIn.Handling.DriftSteerMin) / (neutral - FixedUpdateIn.Handling.DriftSteerMin), 0f, 1f);
					latCoeff = math.lerp(minLat, midLat, t);
				}
			}

			float force = FixedUpdateIn.SpinoutFactor * latCoeff * -bodyStateIn.LatSpeed;
			float negSign = (bodyStateIn.LatSpeed < 0f ? 1f : 0f) - (bodyStateIn.LatSpeed > 0f ? 1f : 0f);
			latForceState.Force = force + FixedUpdateIn.LatBrakingForce * inputData.Brake * negSign;
		}

		public void VertJobExecute(ref KartPhysicsForceState vertForceState, in KartPhysicsBodyState bodyState, in KartPhysicsFixedUpdateJobBurstAllInput FixedUpdateIn)
		{
			vertForceState.Force = bodyState.Gliding ? (FixedUpdateIn.VertForceConfig.VertForce * -bodyState.VertSpeed) : 0f;
		}

		public void GlidingJobExecute(ref KartPhysicsForceState glidingForceState, in KartPhysicsBodyState bodyState, in KartPhysicsFixedUpdateJobBurstAllInput FixedUpdateIn)
		{
			if (!bodyState.Gliding)
			{
				glidingForceState.Force = 0f;
				return;
			}
			float t = math.clamp(bodyState.LocalEuler.x / FixedUpdateIn.Handling.GlidingPitchUpMax, 0f, 1f);
			glidingForceState.Force = math.lerp(FixedUpdateIn.GlidingForceConfig.GlidingForce, FixedUpdateIn.GlidingForceConfig.GlidingForcePitchUp, t);
		}

		public void BodyCompensationExecute(ref KartPhysicsBodyState bodyState, in KartPhysicsForceState latForceState, in float4 VelocityNormalized, in KartPhysicsFixedUpdateJobBurstAllInput FixedUpdateIn)
		{
			bodyState.SlopeCompForce = 0f;
			bodyState.TurnCompForce = 0f;
			bodyState.CompForce = float4.zero;

			if (!bodyState.Gliding && (!bodyState.InAir || bodyState.Hopping))
			{
				float fade = math.clamp(1f - (bodyState.SlopeAngle - FixedUpdateIn.BodyConfig.SlopeCompFadeAngleStart) / (FixedUpdateIn.BodyConfig.SlopeCompFadeAngleEnd - FixedUpdateIn.BodyConfig.SlopeCompFadeAngleStart), 0f, 1f);
				float gravFwd = math.dot(FixedUpdateIn.RigidBodyForward, FixedUpdateIn.Gravity);
				float massGravFwd = FixedUpdateIn.RigidbodyMass * gravFwd;
				float slopeRatio = (massGravFwd <= 0f) ? FixedUpdateIn.BodyConfig.SlopeCompRatioUp : FixedUpdateIn.BodyConfig.SlopeCompRatioDown;
				bodyState.SlopeCompForce = fade * slopeRatio * -massGravFwd;

				float turnComp = (bodyState.Drifting > 0f && bodyState.WheelTouchGround) ? FixedUpdateIn.Handling.TurnSpeedDriftCompensation : FixedUpdateIn.Handling.TurnSpeedCompensation;
				float turnMod = (bodyState.Drifting > 0f && bodyState.WheelTouchGround) ? FixedUpdateIn.TurnSpeedDriftCompensationModifier : FixedUpdateIn.TurnSpeedCompensationModifier;

				float spdHigh = FixedUpdateIn.Handling.TopSpeed * 1.1f;
				float spdLow = FixedUpdateIn.Handling.TopSpeed * 0.9f;
				float spdFactor = math.clamp((bodyState.Speed - spdHigh) / (spdLow - spdHigh), 0f, 1f);
				float lngFactor = math.clamp(math.abs(bodyState.LngSpeed), 0f, 1f);
				float latDotVel = math.dot(VelocityNormalized, FixedUpdateIn.RigidBodyRight * latForceState.Force);
				float turnCompForce = turnComp * turnMod * spdFactor * lngFactor * -latDotVel;
				bodyState.TurnCompForce = turnCompForce;

				if (bodyState.Drifting <= 0f)
				{
					bodyState.CompForce = VelocityNormalized * turnCompForce;
				}
				else
				{
					float fwdRatio = math.clamp(1f - FixedUpdateIn.Handling.TurnSpeedDriftSideForceRatio, 0f, 1f);
					float sideRatio = math.clamp(FixedUpdateIn.Handling.TurnSpeedDriftSideForceRatio, 0f, 1f);
					bodyState.CompForce = VelocityNormalized * (turnCompForce * fwdRatio) + FixedUpdateIn.RigidBodyRight * (turnCompForce * -bodyState.DriftStartSign * sideRatio);
				}
			}
		}

		public void GlidingRotJobExecute(ref KartPhysicsRotForceState rotForceState, in KartPhysicsBodyState BodyStateIn, in float4 localAngularVelocity, in KartPhysicsInputData inputData, in KartPhysicsFixedUpdateJobBurstAllInput FixedUpdateIn)
		{
			if (!BodyStateIn.Gliding)
			{
				return;
			}
			rotForceState.Yaw.Torque = 0f;
			rotForceState.Pitch.Torque = 0f;
			rotForceState.Roll.Torque = 0f;

			float2 yoke = inputData.Yoke;
			float pitchMax = (BodyStateIn.LocalEuler.x > 0f) ? FixedUpdateIn.Handling.GlidingPitchUpMax : FixedUpdateIn.Handling.GlidingPitchDownMax;
			float pitchScale = (pitchMax - math.abs(BodyStateIn.LocalEuler.x)) / pitchMax;
			float rollScale = (FixedUpdateIn.Handling.GlidingRollMax - math.abs(BodyStateIn.LocalEuler.z)) / FixedUpdateIn.Handling.GlidingRollMax;

			float desiredYawVel = yoke.x * FixedUpdateIn.Handling.GlidingYawSpeed;
			UpdateAngleVelControl(ref rotForceState.Yaw, in desiredYawVel, in localAngularVelocity.y, in FixedUpdateIn.RotForceConfig.GlidingTorque, in FixedUpdateIn.RotForceConfig.GlidingDamper, in FixedUpdateIn.DeltaTime);

			float yokeYSign = (yoke.y > 0f ? 1f : 0f) - (yoke.y < 0f ? 1f : 0f);
			float negPitchSign = (BodyStateIn.LocalEuler.x < 0f ? 1f : 0f) - (BodyStateIn.LocalEuler.x > 0f ? 1f : 0f);
			if (yokeYSign != negPitchSign)
			{
				pitchScale = 1f;
			}
			float desiredPitchVel = yoke.y * FixedUpdateIn.Handling.GlidingPitchSpeed * pitchScale;
			UpdateAngleVelControl(ref rotForceState.Pitch, in desiredPitchVel, in localAngularVelocity.x, in FixedUpdateIn.RotForceConfig.GlidingTorque, in FixedUpdateIn.RotForceConfig.GlidingDamper, in FixedUpdateIn.DeltaTime);

			float zero = 0f;
			float negPitch = -BodyStateIn.LocalEuler.x;
			float pitchStabTorque = (1f - math.abs(yoke.y)) * FixedUpdateIn.Handling.GlidingPitchStabilisation * FixedUpdateIn.RotForceConfig.GlidingTorque;
			UpdateAngleControl(ref rotForceState.Pitch, in zero, in negPitch, in pitchStabTorque, in FixedUpdateIn.RotForceConfig.GlidingDamper, in FixedUpdateIn.DeltaTime);

			float negYokeXSign = (yoke.x < 0f ? 1f : 0f) - (yoke.x > 0f ? 1f : 0f);
			float negRollSign = (BodyStateIn.LocalEuler.z < 0f ? 1f : 0f) - (BodyStateIn.LocalEuler.z > 0f ? 1f : 0f);
			if (negYokeXSign != negRollSign)
			{
				rollScale = 1f;
			}
			float desiredRollVel = FixedUpdateIn.Handling.GlidingRollSpeed * -yoke.x * rollScale;
			UpdateAngleVelControl(ref rotForceState.Roll, in desiredRollVel, in localAngularVelocity.z, in FixedUpdateIn.RotForceConfig.GlidingTorque, in FixedUpdateIn.RotForceConfig.GlidingDamper, in FixedUpdateIn.DeltaTime);

			float negRoll = -BodyStateIn.LocalEuler.z;
			float rollStabTorque = (1f - math.abs(yoke.x)) * FixedUpdateIn.Handling.GlidingRollStabilisation * FixedUpdateIn.RotForceConfig.GlidingTorque;
			UpdateAngleControl(ref rotForceState.Roll, in zero, in negRoll, in rollStabTorque, in FixedUpdateIn.RotForceConfig.GlidingDamper, in FixedUpdateIn.DeltaTime);

			float yawFromRoll = FixedUpdateIn.RotForceConfig.GlidingTorque * BodyStateIn.LocalEuler.z * FixedUpdateIn.Handling.GlidingYawFromRoll;
			rotForceState.YawFromRoll = yawFromRoll;
			rotForceState.RelativeTorqueResult = new float3(rotForceState.Pitch.Torque, rotForceState.Yaw.Torque, rotForceState.Roll.Torque);
			rotForceState.TorqueResult = new float3(0f, yawFromRoll, 0f);
		}

		public static void UpdateAngleVelControl(ref KartPhysicsAngleControl angleControl, in float desiredVel, in float angleVel, in float torque, in float damper, in float deltaTime)
		{
			float err = desiredVel - angleVel;
			float deriv = (err - angleControl.VelError) / deltaTime;
			angleControl.VelError = err;
			angleControl.VelDerivative = deriv;
			angleControl.Torque += err * torque - deriv * damper;
		}

		public static void UpdateAngleControl(ref KartPhysicsAngleControl angleControl, in float desired, in float angle, in float torque, in float damper, in float deltaTime)
		{
			float err = desired - angle;
			float deriv = (err - angleControl.Error) / deltaTime;
			angleControl.Error = err;
			angleControl.Derivative = deriv;
			angleControl.Torque += err * torque - deriv * damper;
		}

		public void RotJobExecute(ref KartPhysicsRotForceState rotForceState, in KartPhysicsBodyState BodyStateIn, in float4 localAngularVelocity, in KartPhysicsInputData inputData, in KartPhysicsFixedUpdateJobBurstAllInput FixedUpdateIn)
		{
			float spinScale = BodyStateIn.Spining ? 0.1f : 1f;
			rotForceState.Yaw.Torque = 0f;
			rotForceState.Pitch.Torque = 0f;
			rotForceState.Roll.Torque = 0f;
			rotForceState.YawFromRoll = 0f;

			float airRatio = (BodyStateIn.InAir && !BodyStateIn.Hopping) ? FixedUpdateIn.Handling.AirRotSpeedRatio : 1f;
			float driftRotScale = (1f - BodyStateIn.Drifting) + BodyStateIn.Drifting * FixedUpdateIn.Handling.RotSpeedDriftRatio;
			float desiredYawVel = inputData.Steer * FixedUpdateIn.RotSpeedDriftRatioModifier * driftRotScale * airRatio * FixedUpdateIn.RotSpeedFromKartSpeedCurve * FixedUpdateIn.RotSpeedFromKartSpeedModifier * FixedUpdateIn.RotSpeedFromSteerAngleCurve * FixedUpdateIn.RotSpeedFromSteerAngleModifier;

			float err = desiredYawVel - localAngularVelocity.y;
			float deriv = (err - rotForceState.Yaw.VelError) / FixedUpdateIn.DeltaTime;
			rotForceState.Yaw.VelError = err;
			rotForceState.Yaw.VelDerivative = deriv;
			float yawTorque = spinScale * (err * FixedUpdateIn.RotForceConfig.Torque - deriv * FixedUpdateIn.RotForceConfig.Damper);
			rotForceState.Yaw.Torque = yawTorque;
			rotForceState.RelativeTorqueResult = new float3(0f, yawTorque, 0f);
			rotForceState.TorqueResult = float3.zero;

			float3 fwd = math.normalizesafe(math.cross(FixedUpdateIn.RigidBodyRight.xyz, BodyStateIn.Up), FixedUpdateIn.RigidBodyForward.xyz);
			quaternion targetRot = quaternion.LookRotation(fwd, BodyStateIn.Up);

			if (BodyStateIn.InAir || BodyStateIn.SurfaceUp.y < 0.5f)
			{
				float3 flatFwd = math.normalizesafe(new float3(FixedUpdateIn.RigidBodyForward.x, 0f, FixedUpdateIn.RigidBodyForward.z), new float3(0f, 0f, 1f));
				quaternion uprightRot = quaternion.LookRotation(flatFwd, new float3(0f, 1f, 0f));
				targetRot = math.slerp(targetRot, uprightRot, 0.04f);
			}

			rotForceState.NewRotation = targetRot;
		}

		public void AeroJobExecute(ref KartPhysicsAeroState aeroState, in KartPhysicsAeroConfig aeroConfig, in KartPhysicsBodyState bodyState, float airDensityRatio)
		{
			aeroState.Force = aeroConfig.Drag * bodyState.LngSpeed * bodyState.LngSpeed * bodyState.LngSpeedSign * -1.25f * airDensityRatio;
		}

		public void VisualJobExecute(ref KartPhysicsVisualState visualState, in KartPhysicsBodyState BodyStateIn, in float4 localAngularVelocity, in KartPhysicsInputData inputData, in KartPhysicsFixedUpdateJobBurstAllInput FixedUpdateIn)
		{
			visualState.WheelRotation += FixedUpdateIn.DeltaTime * BodyStateIn.LngSpeedSign * BodyStateIn.Speed * 8f * FixedUpdateIn.VisualWheelRotationSpeed;

			float yawMax = FixedUpdateIn.Handling.DriftVisualYawVelMax;
			float clampedYawVel = math.clamp(FixedUpdateIn.AngularVelocity.y, -yawMax, yawMax);
			float driftAngleSpeed = (BodyStateIn.Drifting > 0f) ? FixedUpdateIn.Handling.DriftVisualAngleSpeedIn : FixedUpdateIn.Handling.DriftVisualAngleSpeedOut;
			float targetVisualAngle = (1f / yawMax) * FixedUpdateIn.Handling.DriftVisualAngleOffset * BodyStateIn.Drifting * clampedYawVel;
			visualState.VisualAngleOffset += driftAngleSpeed * (targetVisualAngle - visualState.VisualAngleOffset);

			float rawSteer = inputData.RawSteerInput;
			float rawSign = (rawSteer > 0f ? 1f : 0f) - (rawSteer < 0f ? 1f : 0f);
			float clampedWheelIn = rawSign * math.clamp(math.abs(rawSteer), FixedUpdateIn.WheelAngleVisualParams.SteerInputToWheelAngleMin, FixedUpdateIn.WheelAngleVisualParams.SteerInputToWheelAngleMax);
			float clampedWheelSign = (clampedWheelIn > 0f ? 1f : 0f) - (clampedWheelIn < 0f ? 1f : 0f);
			float normWheelSteer = clampedWheelSign * ((math.abs(clampedWheelIn) - FixedUpdateIn.WheelAngleVisualParams.SteerInputToWheelAngleMin) / (FixedUpdateIn.WheelAngleVisualParams.SteerInputToWheelAngleMax - FixedUpdateIn.WheelAngleVisualParams.SteerInputToWheelAngleMin));
			float wheelLerp = math.clamp(FixedUpdateIn.WheelAngleVisualParams.SteerInputDeltaSpeed * FixedUpdateIn.DeltaTime, 0f, 1f);
			float maxAngle = FixedUpdateIn.WheelAngleVisualParams.WheelMaxSteerAngle;

			if (BodyStateIn.Drifting <= 0f)
			{
				float targetAngle = math.clamp(maxAngle * normWheelSteer, -maxAngle, maxAngle);
				visualState.SteerAngle = BodyStateIn.LngSpeedSign * (visualState.SteerAngle + wheelLerp * (targetAngle - visualState.SteerAngle));
			}
			else
			{
				float minLim = (BodyStateIn.DriftStartSign >= 0f) ? FixedUpdateIn.WheelAngleVisualParams.WheelDriftMaxSteerAngleOut : FixedUpdateIn.WheelAngleVisualParams.WheelDriftMaxSteerAngleIn;
				float maxLim = (BodyStateIn.DriftStartSign >= 0f) ? FixedUpdateIn.WheelAngleVisualParams.WheelDriftMaxSteerAngleIn : FixedUpdateIn.WheelAngleVisualParams.WheelDriftMaxSteerAngleOut;
				float targetAngle = math.clamp(maxAngle * normWheelSteer, -minLim, maxLim);
				visualState.SteerAngle = visualState.SteerAngle + wheelLerp * (targetAngle - visualState.SteerAngle);
			}

			float clampedAnimIn = rawSign * math.clamp(math.abs(rawSteer), FixedUpdateIn.VisualSteeringParams.SteerInputToAnimMin, FixedUpdateIn.VisualSteeringParams.SteerInputToAnimMax);
			float clampedAnimSign = (clampedAnimIn > 0f ? 1f : 0f) - (clampedAnimIn < 0f ? 1f : 0f);
			float normAnimSteer = clampedAnimSign * ((math.abs(clampedAnimIn) - FixedUpdateIn.VisualSteeringParams.SteerInputToAnimMin) / (FixedUpdateIn.VisualSteeringParams.SteerInputToAnimMax - FixedUpdateIn.VisualSteeringParams.SteerInputToAnimMin));
			float animLerp = math.clamp(FixedUpdateIn.VisualSteeringParams.SteerInputDeltaSpeed * FixedUpdateIn.DeltaTime, 0f, 1f);
			visualState.SteerWheelDisplay += animLerp * (normAnimSteer - visualState.SteerWheelDisplay);
			visualState.DriftDisplay += 0.1f * (BodyStateIn.Drifting - visualState.DriftDisplay);
		}

		public void Execute()
		{
			for (int i = 0; i < NumKarts; i++)
			{
				if ((RunJobBit & (1 << i)) == 0)
				{
					continue;
				}

				KartPhysicsState state = KartPhysicsStateIn[i];
				KartPhysicsFixedUpdateJobBurstAllInput input = FixedUpdateInArray[i];
				KartPhysicsFixedUpdateJobBurstOutput output = default;

				float totalCompressed = 0f;
				int wheelBaseIdx = i * NumWheelsPerKart;
				int rayBaseIdx = i * (NumWheelsPerKart + 1);
				for (int w = 0; w < NumWheelsPerKart; w++)
				{
					KartSuspensionState ws = KartSuspensionUpdateJobExecute(in WheelConfigs, in state.Body, rayBaseIdx + w, in input, 0f);
					Wheels[wheelBaseIdx + w] = ws;
					totalCompressed += ws.CompressedLength;
				}

				float avgCompressed = NumWheelsPerKart > 0 ? (totalCompressed / NumWheelsPerKart) : 0f;
				state.Suspension = KartSuspensionUpdateJobExecute(in WheelConfigs, in state.Body, rayBaseIdx + NumWheelsPerKart, in input, avgCompressed);

				KartPhysicsUpdateBodyJobExecute(ref state.Body, in Wheels, wheelBaseIdx, in state.Suspension, ref state.Events, ref state.LngForce, in input.InputData, in input);
				LngJobExecute(ref state.Events, ref state.LngForce, ref state.Body, in input.InputData, in input);
				LatJobExecute(ref state.LatForce, in state.Body, in input.InputData, in input);
				VertJobExecute(ref state.VertForce, in state.Body, in input);
				GlidingJobExecute(ref state.GlidingForce, in state.Body, in input);

				float4 velNorm = math.normalizesafe(input.RigidBodyVelocity, float4.zero);
				BodyCompensationExecute(ref state.Body, in state.LatForce, in velNorm, in input);

				float4 localAngVel = new float4(
					math.dot(input.RigidBodyRight, input.AngularVelocity),
					math.dot(input.RigidBodyUp, input.AngularVelocity),
					math.dot(input.RigidBodyForward, input.AngularVelocity),
					0f);

				if (!state.Body.Gliding)
				{
					RotJobExecute(ref state.RotForce, in state.Body, in localAngVel, in input.InputData, in input);
				}
				else
				{
					GlidingRotJobExecute(ref state.RotForce, in state.Body, in localAngVel, in input.InputData, in input);
				}

				AeroJobExecute(ref state.Aero, in input.AeroConfig, in state.Body, 1f);

				float totalLng = state.LngForce.Force + state.Body.SlopeCompForce + state.Aero.Force;
				state.Body.CombinedForce =
					input.RigidBodyForward * totalLng +
					input.RigidBodyRight * state.LatForce.Force +
					input.RigidBodyUp * state.VertForce.Force +
					new float4(0f, state.GlidingForce.Force, 0f, 0f) +
					state.Body.CompForce +
					state.Suspension.SuspensionForce;

				VisualJobExecute(ref state.VisualState, in state.Body, in localAngVel, in input.InputData, in input);

				output.MoveRotation = !state.Body.Gliding && !state.RotForce.NewRotation.IsNaN();
				output.HasNewVelocity = math.any(state.Body.NewVelocity != float3.zero);
				output.HasNewAngularVelocity = math.any(state.Body.NewAngularVelocity != float3.zero);
				output.HasExternalLatImpulseForce = state.Body.ExternalLatImpulseForce != 0f;
				output.ExternalLatImpulseForce = input.RigidBodyRight.xyz * state.Body.ExternalLatImpulseForce;
				output.HasHopForce = false;
				output.HopForce = float3.zero;
				output.HasAdditionalGravity = false;
				output.AdditionalGravityForce = float3.zero;
				output.IsOverSpeedHardCap = false;
				output.SpeedCap = float3.zero;

				if (state.Body.Hopped)
				{
					state.Body.Hopped = false;
					state.Body.Hopping = true;
					output.HasHopForce = true;
					output.HopForce = new float3(0f, input.Handling.HopForce * input.HopForceModifier, 0f);
					state.Body.HopTimer = input.Handling.HopTimer;
					if (state.LngForce.HopBoostAvailable > 0 && state.Body.Speed >= input.Handling.HopBoostSpeedThreshold)
					{
						state.LngForce.HopBoostPending = true;
						state.Events.HopBoostStart = true;
					}
				}

				if (state.Body.HopTimer > 0f)
				{
					if (!state.Body.Gliding)
					{
						state.Body.HopTimer -= input.DeltaTime;
						output.HasAdditionalGravity = true;
						float gravScale = (input.Handling.HopGravityScale - 1f) * input.RigidbodyMass;
						float hopBoostGrav = (state.Body.UseHopBoostGravity > 0 || state.LngForce.HopBoostPending) ? input.Handling.HopBoostGravityScale : 1f;
						output.AdditionalGravityForce = input.Gravity.xyz * gravScale * hopBoostGrav;
						if (state.Body.HopTimer <= 0f)
						{
							state.Body.Hopping = false;
						}
					}
					else
					{
						state.Body.HopTimer = 0f;
						state.Body.Hopping = false;
					}
				}

				state.Body.RigidbodyForward = input.RigidBodyForward.xyz;
				state.Body.RigidbodyRight = input.RigidBodyRight.xyz;
				state.Body.RigidbodyUp = input.RigidBodyUp.xyz;
				state.Body.RigidbodyPosition = input.RigidBodyPosition.xyz;
				state.Body.RigidbodyRotation = input.RigidBodyRotation;
				state.Body.RigidbodyVelocity = input.RigidBodyVelocity.xyz;
				state.Body.RigidbodyAngularVelocity = input.AngularVelocity.xyz;

				float3 cappedVel = input.RigidBodyVelocity.xyz;
				if (state.Body.Speed > input.Handling.SpeedHardCap)
				{
					output.IsOverSpeedHardCap = true;
					state.Body.Speed = input.Handling.SpeedHardCap;
					cappedVel = math.normalizesafe(cappedVel, float3.zero) * input.Handling.SpeedHardCap;
					output.SpeedCap = cappedVel;
				}
				if (cappedVel.y > input.Handling.VerticalSpeedCap)
				{
					output.IsOverSpeedHardCap = true;
					cappedVel.y = input.Handling.VerticalSpeedCap;
					output.SpeedCap = cappedVel;
				}
				if (output.SpeedCap.IsNaN())
				{
					output.IsOverSpeedHardCap = false;
				}

				output.OutState = state;
				Results[i] = output;
			}
		}
	}
}
