using System;
using Atlas.Contexts;
using Atlas.Definitions;
using Atlas.Gameplay.Player;
using Atlas.Gameplay.Usables;
using Core.Application;
using Core.Definitions;
using Unity.Collections;
using Unity.Jobs;
using Unity.Mathematics;
using UnityEngine;

namespace Atlas.Gameplay.Kart
{
	public class RaceKartAI : KartAI
	{
		private RaceSplineRootBehaviour _raceSplineRootBehaviour;

		private float _crossSectionChangeSign = 1f;

		private float _steerThresholdMin = 0.01f;

		private float _steerThresholdMax = 1f;

		private float _driftThreshold = 0.9f;

		private float _driftMaxSteerThreshold = 0.8f;

		private float _currentSpeedMod = 1f;

		private bool _isFacingWrongWay;

		private float _wrongWayTimer;

		private float _stuckAITimer;

		private float _logicFreezeOffTimer;

		private RaceAIUtilityManager _raceAiUtilityManager;

		private RaceKartAIUpdateJobBurstParams _raceKartAIParams;

		private RaceKartAIUpdateJob _raceKartAIUpdateJob;

		private RaceKartAIDefinition _raceKartAIDefinition;

		private RaceAIGroupCache _staticRaceAIGroup;

		private const float _speedFactorUpdateTime = 0.06666667f;

		private float _speedFactorUpdateTimer = -1f;

		private bool _postInited;

		public event Action OnLapCompleted;

		public int LapsCompleted => _raceKartAIParams.LapsCompleted;

		public float2 TrackCoords => _raceKartAIParams.TrackCoords;

		public bool HasPassedHalfwayMark => _raceKartAIParams.HasPassedHalfwayMark;

		public int PolylineIndex => _raceKartAIParams.RaceSplineCache.PolylineIndex;

		public bool IsFacingWrongWay => _isFacingWrongWay;

		public bool ShowWrongWayIndicator => _isFacingWrongWay && _wrongWayTimer > _raceKartAIDefinition.WrongWayWarningTime;

		public override Definition GetKartAIDefinition()
		{
			return _raceKartAIDefinition;
		}

		public void Init(KartComposite kartComposite, GameContextBase gameContext, RaceKartAIDefinition raceKartAiDefinition, RaceAIUtilityManager raceAiUtilityManager, bool performHopRaycastThisFrame, RaceAIGroupCache staticRaceGroup)
		{
			base.Init(kartComposite, gameContext, performHopRaycastThisFrame);
			if (_gameContext != null && gameContext.TrackSceneSetupBehaviour != null)
			{
				_raceSplineRootBehaviour = gameContext.TrackSceneSetupBehaviour.RaceSplineRootBehaviour;
			}
			_raceAiUtilityManager = raceAiUtilityManager;
			if (_raceAiUtilityManager != null)
			{
				_raceAiUtilityManager.Init(gameContext, raceKartAiDefinition);
			}
			_raceKartAIDefinition = raceKartAiDefinition;
			if (_raceKartAIDefinition != null)
			{
				_raceKartAIDefinition.KartAiUsablesParameters.Calculate();
			}
			_steerThresholdMin = Mathf.Cos((90f - _raceKartAIDefinition.SteerThresholdMin) * Mathf.Deg2Rad);
			_steerThresholdMax = Mathf.Cos((90f - _raceKartAIDefinition.SteerThresholdMax) * Mathf.Deg2Rad);
			_driftThreshold = Mathf.Cos((90f - _raceKartAIDefinition.DriftStartThreshold) * Mathf.Deg2Rad);
			_driftMaxSteerThreshold = Mathf.Cos((90f - _raceKartAIDefinition.DriftMaxSteerThreshold) * Mathf.Deg2Rad);
			_stuckAITimer = 0f;
			_logicFreezeOffTimer = 0f;
			_wrongWayTimer = 0f;
			_postInited = false;
			if (staticRaceGroup != null)
			{
				_staticRaceAIGroup = staticRaceGroup;
			}
		}

		public override void DeInit()
		{
			if (_kartComposite != null && _kartComposite.KartPhysics != null)
			{
				_kartComposite.KartPhysics.OnTriggerEnterDelegate -= OnTriggerEnterCheckReroute;
				_kartComposite.KartPhysics.OnTriggerExitDelegate -= OnTriggerExitCheckReroute;
			}
			DeInitBurstContainers();
		}

		public override void PostInit()
		{
			if (_raceAiUtilityManager != null)
			{
				_raceAiUtilityManager.PostInit();
			}
			if (_kartComposite != null && _kartComposite.KartPhysics != null)
			{
				_kartComposite.KartPhysics.OnTriggerEnterDelegate += OnTriggerEnterCheckReroute;
				_kartComposite.KartPhysics.OnTriggerExitDelegate += OnTriggerExitCheckReroute;
			}
			InitBurstContainers();
			_postInited = true;
		}

		public void OverrideLapPositionState(int lapsCompleted, float2 trackCoords, bool hasPassedHalfwayMark)
		{
			_raceKartAIParams.TrackCoords = trackCoords;
			_raceKartAIParams.LapsCompleted = lapsCompleted;
			_raceKartAIParams.HasPassedHalfwayMark = hasPassedHalfwayMark;
		}

		public override void OnFinishGame()
		{
			_steerThresholdMin = Mathf.Cos((90f - _raceKartAIDefinition.AutoDriveSteerThresholdMin) * Mathf.Deg2Rad);
			_steerThresholdMax = Mathf.Cos((90f - _raceKartAIDefinition.AutoDriveSteerThresholdMax) * Mathf.Deg2Rad);
			_raceKartAIUpdateJob.SteerThresholdMin = _steerThresholdMin;
			_raceKartAIUpdateJob.SteerThresholdMax = _steerThresholdMax;
			_raceKartAIUpdateJob.SteerDelta = _raceKartAIDefinition.AutoDriveSteerDelta;
		}

		public override void OnResetPosition()
		{
			_raceKartAIParams.RaceSplineCache.PolylineIndex = -1;
			_raceKartAIParams.RaceSplineCache.KnotIndex = -1;
			_raceKartAIParams.RaceSplineCache.NextKnotIndex = -1;
			_raceKartAIParams.RaceSplineCache.PrevKnotIndex = -1;
			_raceKartAIParams.RaceSplineCache.LastSwitchLoopIndex = -1;
			_raceKartAIParams.lowerIndexOnPoly = -1;
			_raceKartAIParams.upperIndexOnPoly = -1;
			_raceKartAIParams.DistCrossSectionInited = false;
			_raceKartAIParams.InputData.Steer = 0f;
			_inputData.Steer = 0f;
			_prevInputData.Steer = 0f;
		}

		public void OnTriggerEnterCheckReroute(KartPhysicsTriggerBehaviour kartTrigger)
		{
			if (_kartComposite.IsLocalPlayerInput || _raceKartAIParams.Rerouting)
			{
				return;
			}
			AIRerouteBehaviour component = kartTrigger.GetComponent<AIRerouteBehaviour>();
			if (component != null)
			{
				_raceKartAIParams.LastTriggerReroutePosition = component.ReroutePosition;
				_raceKartAIParams.RerouteTriggerCount++;
			}
		}

		public void OnTriggerExitCheckReroute(KartPhysicsTriggerBehaviour kartTrigger)
		{
			AIRerouteBehaviour component = kartTrigger.GetComponent<AIRerouteBehaviour>();
			if (component != null)
			{
				int count = _raceKartAIParams.RerouteTriggerCount - 1;
				if (count < 1)
				{
					count = 0;
				}
				_raceKartAIParams.RerouteTriggerCount = count;
			}
		}

		public void SetKartProgressToBeginningOfLap(int lapIndex, bool hasPassedHalfwayMark)
		{
			_raceKartAIParams.LapsCompleted = lapIndex - 1;
			_raceKartAIParams.HasPassedHalfwayMark = hasPassedHalfwayMark;
		}

		private void InitBurstContainers()
		{
			_prevInputData.Reset();
			_inputData.Reset();
			_raceKartAIParams.InputData.Reset();
			_raceKartAIParams.TrackCoords = float2.zero;
			_raceKartAIParams.AttemptedDriftProbability = false;
			_raceKartAIParams.DistCrossSection = 0f;
			_raceKartAIParams.DriftOutTimer = 0f;
			_raceKartAIParams.RaceSplineCache = default(RaceSplineCacheParams);
			_raceKartAIParams.RaceSplineCache.Init();
			_raceKartAIParams.TargetWorldPos = float4.zero;
			_raceKartAIParams.DistToUpperKnot = 0f;
			_raceKartAIParams.HasPassedHalfwayMark = true;
			_raceKartAIParams.WasInHopBoostTrigger = false;
			_raceKartAIParams.LapsCompleted = -1;
			_raceKartAIParams.DistCrossSectionInited = false;

			_raceKartAIUpdateJob.Input = _raceKartAIParams;
			_raceKartAIUpdateJob.HopBoostProbability = _raceKartAIDefinition.HopBoostProbability;
			_raceKartAIUpdateJob.StopDriftToHopBoostProbability = _raceKartAIDefinition.StopDriftToHopBoostProbability;
			_raceKartAIUpdateJob.LookAheadSpeedModifier = _raceKartAIDefinition.LookAheadSpeedModifier;
			_raceKartAIUpdateJob.LookAheadFixedDistance = _raceKartAIDefinition.LookAheadFixedDist;
			_raceKartAIUpdateJob.SteerThresholdMin = _steerThresholdMin;
			_raceKartAIUpdateJob.SteerThresholdMax = _steerThresholdMax;
			_raceKartAIUpdateJob.SteerDelta = _raceKartAIDefinition.SteerDelta;
			_raceKartAIUpdateJob.DriftThreshold = _driftThreshold;

			KartPhysicsHandling kartHandling = _kartComposite.KartPhysics.KartHandling;
			_raceKartAIUpdateJob.SteerMinToDrift = kartHandling.DriftSteerMin;
			_raceKartAIUpdateJob.DriftMinSpeed = kartHandling.DriftSpeedMin;
			_raceKartAIUpdateJob.DriftProbability = _raceKartAIDefinition.DriftProbability;
			_raceKartAIUpdateJob.DriftSteerMax = kartHandling.DriftMaxAngle;
			_raceKartAIUpdateJob.DriftSteerNeutral = kartHandling.DriftNeutralAngle;
			_raceKartAIUpdateJob.DriftSteerMin = kartHandling.DriftMinAngle;
			_raceKartAIUpdateJob.DriftMaxSteerThreshold = _driftMaxSteerThreshold;
			_raceKartAIUpdateJob.ExitDriftOutTime = _raceKartAIDefinition.ExitDriftOutTime;
			_raceKartAIUpdateJob.ExitDriftCosAngleThreshold = Mathf.Cos((90f - _raceKartAIDefinition.ExitDriftAngle) * Mathf.Deg2Rad);
			_raceKartAIUpdateJob.RateOfChangeCrossSection = _raceKartAIDefinition.RateOfChangeCrossSection;

			_raceKartAIUpdateJob.RaceSplineData = default(RaceSplineBurstData);
			if (_raceSplineRootBehaviour != null)
			{
				_raceKartAIUpdateJob.RaceSplineData.RaceKnotsBurst = _raceSplineRootBehaviour.RaceKnotBursts;
				_raceKartAIUpdateJob.RaceSplineData.RacePolylines = _raceSplineRootBehaviour.RacePolyLines;
				_raceKartAIUpdateJob.RaceSplineData.NextKnotsID = _raceSplineRootBehaviour.NextKnotsID;
				_raceKartAIUpdateJob.RaceSplineData.NextKnotsProbabilityWeight = _raceSplineRootBehaviour.NextKnotsProbabilityWeights;
				_raceKartAIUpdateJob.RaceSplineData.PolyLinesToNext = _raceSplineRootBehaviour.PolyLinesToNext;
				_raceKartAIUpdateJob.RaceSplineData.PreviousKnotsID = _raceSplineRootBehaviour.PreviousKnotsID;
				_raceKartAIUpdateJob.RaceSplineData.PolyLinesFromPrev = _raceSplineRootBehaviour.PolyLinesFromPrev;
				_raceKartAIUpdateJob.RaceSplineData.RacePolyLinePoints = _raceSplineRootBehaviour.RacePolyLinePoints;
				_raceKartAIUpdateJob.RaceSplineData.IsSwitchActiveToNext = _raceSplineRootBehaviour.IsSwitchActiveToNext;
				_raceKartAIUpdateJob.RaceSplineData.TotalLapDist = _raceSplineRootBehaviour.TotalLapDistance;
			}

			_raceKartAIUpdateJob.KartAIUsablesParameters = _raceKartAIDefinition.KartAiUsablesParameters.ToBurstStruct();
			_raceKartAIUpdateJob.Result = new NativeArray<RaceKartAIUpdateJobBurstParams>(1, Allocator.Persistent);
			_raceKartAIUpdateJob.ActiveUsablePositions = new NativeArray<float4>(100, Allocator.Persistent);
			_raceKartAIUpdateJob.ActiveUsableVelocities = new NativeArray<float4>(100, Allocator.Persistent);
			_raceKartAIUpdateJob.UsableAvoidRolls = new NativeArray<int>(100, Allocator.Persistent);
			_raceKartAIUpdateJob.OtherKartsPositions = new NativeArray<float4>(12, Allocator.Persistent);
			_raceKartAIUpdateJob.Rand = RaceSplineBurstHelpers.Random;
			_raceKartAIUpdateJob.StuckAISpeedThreshold = _raceKartAIDefinition.StuckAiSpeedThreshold;
			_raceKartAIUpdateJob.StuckAITimeToRespawn = _raceKartAIDefinition.StuckAiTimeToRespawn;
			_raceKartAIUpdateJob.RerouteTimeThreshold = _raceKartAIDefinition.RerouteTriggerColliderTime;
			float rerouteDist = _raceKartAIDefinition.ReroutePointReachedDistThreshold;
			_raceKartAIUpdateJob.ReroutePointThresholdSqDist = rerouteDist * rerouteDist;
		}

		private void DeInitBurstContainers()
		{
			if (_raceKartAIUpdateJob.Result.IsCreated)
			{
				_raceKartAIUpdateJob.Result.Dispose();
			}
			if (_raceKartAIUpdateJob.ActiveUsablePositions.IsCreated)
			{
				_raceKartAIUpdateJob.ActiveUsablePositions.Dispose();
			}
			if (_raceKartAIUpdateJob.ActiveUsableVelocities.IsCreated)
			{
				_raceKartAIUpdateJob.ActiveUsableVelocities.Dispose();
			}
			if (_raceKartAIUpdateJob.UsableAvoidRolls.IsCreated)
			{
				_raceKartAIUpdateJob.UsableAvoidRolls.Dispose();
			}
			if (_raceKartAIUpdateJob.OtherKartsPositions.IsCreated)
			{
				_raceKartAIUpdateJob.OtherKartsPositions.Dispose();
			}
		}

		private void DebugFixedUpdate()
		{
			_steerThresholdMin = Mathf.Cos((90f - _raceKartAIDefinition.SteerThresholdMin) * Mathf.Deg2Rad);
			_steerThresholdMax = Mathf.Cos((90f - _raceKartAIDefinition.SteerThresholdMax) * Mathf.Deg2Rad);
			_raceKartAIUpdateJob.SteerThresholdMin = _steerThresholdMin;
			_raceKartAIUpdateJob.SteerThresholdMax = _steerThresholdMax;
			_raceKartAIUpdateJob.SteerDelta = _raceKartAIDefinition.SteerDelta;
			_raceKartAIUpdateJob.ExitDriftCosAngleThreshold = Mathf.Cos((90f - _raceKartAIDefinition.ExitDriftAngle) * Mathf.Deg2Rad);
			_driftThreshold = Mathf.Cos((90f - _raceKartAIDefinition.DriftStartThreshold) * Mathf.Deg2Rad);
			_raceKartAIUpdateJob.DriftThreshold = _driftThreshold;
			_raceKartAIUpdateJob.DriftProbability = _raceKartAIDefinition.DriftProbability;
			_driftMaxSteerThreshold = Mathf.Cos((90f - _raceKartAIDefinition.DriftMaxSteerThreshold) * Mathf.Deg2Rad);
			_raceKartAIUpdateJob.DriftMaxSteerThreshold = _driftMaxSteerThreshold;
			_raceKartAIUpdateJob.ExitDriftOutTime = _raceKartAIDefinition.ExitDriftOutTime;
			_raceKartAIUpdateJob.LookAheadSpeedModifier = _raceKartAIDefinition.LookAheadSpeedModifier;
			_raceKartAIUpdateJob.LookAheadFixedDistance = _raceKartAIDefinition.LookAheadFixedDist;
		}

		public override void Update(IUpdateParams updateParams)
		{
			using (KartAIUpdateMarker.Auto())
			{
				if (!_postInited)
				{
					return;
				}
				_prevInputData = _inputData;
				if (_raceSplineRootBehaviour == null || _kartComposite == null || _kartComposite.KartPhysics == null || _kartComposite.KartPhysics.KartRigidbody == null)
				{
					return;
				}
				PrepareJobUpdate(updateParams);
				RunUpdateJob();
				PostUpdateJob();

				if (_kartComposite.KartPhysicsInput.InputType == KartInputType.AI)
				{
					if (!_inputData.Hop)
					{
						ApplyHopping();
					}
					CheckStuckAI();
					UpdateTimers(updateParams);
					UpdateSpeedFactor(updateParams.DeltaTime);
					_kartComposite.KartPhysics.HandlingModifiersManager.AISpeedModifier = _currentSpeedMod;
					if (UnityEngine.Random.Range(0, 2) != 0)
					{
						_crossSectionChangeSign = -_crossSectionChangeSign;
					}
				}
				else
				{
					UpdateWrongWay(updateParams.DeltaTime, _raceKartAIParams.lowerIndexOnPoly, _raceKartAIParams.upperIndexOnPoly);
				}
			}
		}

		private void UpdateSpeedFactor(float dt)
		{
			using (KartAISpeedFactorMarker.Auto())
			{
				if (_kartComposite.IsLocalPlayerInput || _gameContext == null || _gameContext.PlayerManager == null)
				{
					return;
				}
				_speedFactorUpdateTimer -= dt;
				if (_speedFactorUpdateTimer > 0f)
				{
					return;
				}
				_speedFactorUpdateTimer = _speedFactorUpdateTime;
				_currentSpeedMod = 1f;

				GameContextPlayer gameContextPlayer = _kartComposite.GameContextPlayer;
				if (gameContextPlayer.HasFinished)
				{
					return;
				}
				int aiPlacement = _gameContext.PlayerManager.GetAIPlacement(gameContextPlayer);
				if (aiPlacement < 0)
				{
					return;
				}
				RaceAIGroupCache aiGroup = _staticRaceAIGroup;
				if (aiGroup == null)
				{
					aiGroup = _raceAiUtilityManager.GetAIGroupBasedOnRacePlacement(aiPlacement);
					if (aiGroup == null)
					{
						return;
					}
				}
				if (!aiGroup.AiGroup.IsValid)
				{
					return;
				}
				float raceProgress = gameContextPlayer.GetRaceProgress();
				_currentSpeedMod = aiGroup.AiGroup.GeneralSpeedFactor;
				float refHumanProgress = _raceAiUtilityManager.GetReferenceHumanPlayerProgress();
				RaceAIRubberBandingRule rule = aiGroup.AiGroup.GetRubberbandingRuleFromProgress(raceProgress);
				if (rule.IsValid)
				{
					if (aiGroup.FirstPlayerOfGroup != null)
					{
						float firstProgress = aiGroup.FirstPlayerOfGroup.GetRaceProgress();
						if ((refHumanProgress - firstProgress) * _raceSplineRootBehaviour.TotalLapDistance >= rule.CatchupDistanceFromPlayer)
						{
							_currentSpeedMod *= rule.CatchupSpeedFactor;
						}
					}
					if (aiGroup.LastPlayerOfGroup != null)
					{
						float lastProgress = aiGroup.LastPlayerOfGroup.GetRaceProgress();
						if ((lastProgress - refHumanProgress) * _raceSplineRootBehaviour.TotalLapDistance >= rule.SlowDownDistanceFromPlayer)
						{
							_currentSpeedMod *= rule.SlowdownSpeedFactor;
						}
					}
				}
			}
		}

		private void PrepareJobUpdate(IUpdateParams updateParams)
		{
			_raceKartAIParams.InputData = _prevInputData;
			_raceKartAIParams.UseUsableTimer = _useUsableTimer;

			ref KartPhysicsBodyState body = ref _kartComposite.KartPhysics.Body;
			KartPhysicsHandlingModifiersManager modifiersManager = _kartComposite.KartPhysics.HandlingModifiersManager;
			bool canStartUseLocal = _kartComposite.KartUsableManager.CanStartUseLocal;

			float logicFreezeTimer = 1.25f;
			if (!_kartComposite.KartPhysicsInput.IsLogicFrozen)
			{
				logicFreezeTimer = _logicFreezeOffTimer - updateParams.DeltaTime;
				if (logicFreezeTimer < 0f)
				{
					logicFreezeTimer = -1f;
				}
			}
			_logicFreezeOffTimer = logicFreezeTimer;

			_raceKartAIUpdateJob.Input = _raceKartAIParams;
			_raceKartAIUpdateJob.KartSpeed = body.Speed;
			_raceKartAIUpdateJob.IsLogicFreeze = _logicFreezeOffTimer > 0f;
			_raceKartAIUpdateJob.KartPos = new float4(body.Position, 1f);
			_raceKartAIUpdateJob.KartVelocity = new float4(body.Velocity, 1f);
			_raceKartAIUpdateJob.KartRigidBodyRight = new float4(body.Right, 1f);
			_raceKartAIUpdateJob.KartRigidBodyForward = new float4(body.Forward, 1f);
			_raceKartAIUpdateJob.KartIsDrifting = body.DriftTimer > 0f;
			_raceKartAIUpdateJob.IsPlayer = _kartComposite.KartPhysicsInput.InputType != KartInputType.AI;
			_raceKartAIUpdateJob.HasFinished = _kartComposite.GameContextPlayer.HasFinished;
			_raceKartAIUpdateJob.DeltaTime = updateParams.DeltaTime;
			_raceKartAIUpdateJob.WheelTouchGround = body.IsGrounded;
			_raceKartAIUpdateJob.Gliding = body.IsGliding;
			_raceKartAIUpdateJob.HopBoostAvailable = _kartComposite.KartPhysics.LngForce.HopBoostCount > 0;
			_raceKartAIUpdateJob.LngSpeed = body.LngSpeed;
			_raceKartAIUpdateJob.DriftspeedMinModifer = modifiersManager.GetDriftSpeedMinModifier();
			_raceKartAIUpdateJob.DriftStartSign = body.DriftStartSign;
			_raceKartAIUpdateJob.CrossSectionChangeSign = _crossSectionChangeSign;
			_raceKartAIUpdateJob.HopRoll = GetRoll();
			_raceKartAIUpdateJob.IsKartHopInvuln = _kartComposite.KartPhysics.HopInvuln;
			_raceKartAIUpdateJob.GiveUpDriftToHopBoostRoll = GetRoll();
			_raceKartAIUpdateJob.CanUseUsable = canStartUseLocal;
			_raceKartAIUpdateJob.NumOtherKarts = 0;
			_raceKartAIUpdateJob.DriftRoll = GetRoll();
			_raceKartAIUpdateJob.CheckStuckAI = !modifiersManager.IsRespawning
				&& !modifiersManager.IsHitSpin
				&& _kartComposite.KartPhysicsInput.FreezeTimer <= 0f
				&& _gameContext.IsActiveState<GameContextBaseInProgressState>();

			var ricochetGroup = _gameContext.ActorManager.FindActorGroup<RicochetProjectile>();
			var turdGroup = _gameContext.ActorManager.FindActorGroup<GoldenTurdProjectile>();
			int usableCount = 0;
			if (ricochetGroup != null)
			{
				foreach (var actor in ricochetGroup.Actors)
				{
					if (actor is RicochetProjectile ricochet && ricochet.IsActive)
					{
						_raceKartAIUpdateJob.ActiveUsablePositions[usableCount] = new float4((float3)ricochet.RicochetBehaviour.transform.position, 1f);
						_raceKartAIUpdateJob.ActiveUsableVelocities[usableCount] = new float4((float3)ricochet.RicochetBehaviour.Rigidbody.velocity, 0f);
						_raceKartAIUpdateJob.UsableAvoidRolls[usableCount] = GetRoll();
						usableCount++;
					}
				}
			}
			if (turdGroup != null)
			{
				_raceKartAIUpdateJob.TurdUsableIndexStart = usableCount;
				foreach (var actor in turdGroup.Actors)
				{
					if (actor is GoldenTurdProjectile turd && turd.IsActive)
					{
						_raceKartAIUpdateJob.ActiveUsablePositions[usableCount] = new float4((float3)turd.GoldenTurdProjectileBehaviour.transform.position, 1f);
						_raceKartAIUpdateJob.ActiveUsableVelocities[usableCount] = new float4((float3)turd.GoldenTurdProjectileBehaviour.Rigidbody.velocity, 0f);
						_raceKartAIUpdateJob.UsableAvoidRolls[usableCount] = GetRoll();
						usableCount++;
					}
				}
			}
			_raceKartAIUpdateJob.NumActiveUseables = usableCount;

			if (canStartUseLocal && _raceKartAIParams.UseUsableTimer < 0f)
			{
				_raceKartAIUpdateJob.Rand.NextUInt();
				UsableType usableType = _kartComposite.KartUsableManager.CurHeldUsable.UsableDefinition.UsableType;
				_raceKartAIUpdateJob.UsableTypeHolding = usableType;
				if ((uint)usableType < 2u)
				{
					int otherKartCount = 0;
					foreach (KartComposite otherKart in _gameContext.KartManager.LoadedKarts)
					{
						if (otherKart != _kartComposite)
						{
							ref KartPhysicsBodyState otherBody = ref otherKart.KartPhysics.Body;
							_raceKartAIUpdateJob.OtherKartsPositions[otherKartCount] = new float4(otherBody.Position, 1f);
							otherKartCount++;
						}
					}
					_raceKartAIUpdateJob.NumOtherKarts = otherKartCount;
				}
			}
		}

		private void RunUpdateJob()
		{
			_raceKartAIUpdateJob.Run();
			_raceKartAIUpdateJob.Rand.NextUInt();
		}

		private void PostUpdateJob()
		{
			RaceKartAIUpdateJobBurstParams result = _raceKartAIUpdateJob.Result[0];
			int prevLaps = _raceKartAIParams.LapsCompleted;
			_raceKartAIParams = result;
			if (prevLaps < result.LapsCompleted)
			{
				OnLapCompleted?.Invoke();
			}
			_inputData = _raceKartAIParams.InputData;
			_wasInHopBoostTrigger = _raceKartAIParams.WasInHopBoostTrigger;
			_useUsableTimer = _raceKartAIParams.UseUsableTimer;
		}

		private void UpdateWrongWay(float dt, int lowerIndex, int upperIndex)
		{
			if (lowerIndex < 0 || upperIndex < 0)
			{
				return;
			}
			int pointCount = _raceKartAIUpdateJob.RaceSplineData.RacePolyLinePoints.Length;
			if (lowerIndex >= pointCount || upperIndex >= pointCount)
			{
				return;
			}
			Vector3 kartForward = _kartComposite.KartPhysics.Body.Forward;
			Vector3 trackForward = _raceKartAIUpdateJob.RaceSplineData.RacePolyLinePoints[upperIndex].Forward;
			_isFacingWrongWay = Vector3.Dot(kartForward, trackForward) < 0f;
			if (!_isFacingWrongWay)
			{
				_wrongWayTimer = 0f;
				return;
			}
			if (_wrongWayTimer <= _raceKartAIDefinition.WrongWayRespawnTime)
			{
				_wrongWayTimer += dt;
				return;
			}
			PolyLinePointBurst lowerPoint = _raceKartAIUpdateJob.RaceSplineData.RacePolyLinePoints[lowerIndex];
			Vector3 respawnPos = lowerPoint.Position;
			Quaternion respawnRot = Quaternion.LookRotation(lowerPoint.Forward, lowerPoint.Up);
			_kartComposite.InvokeRespawn(respawnPos, respawnRot, KartRespawnReason.WrongWay);
			_wrongWayTimer = 0f;
		}

		private void CheckStuckAI()
		{
			if (_raceKartAIParams.IsStuckAI)
			{
				_kartComposite.InvokeRespawn(_raceKartAIParams.StuckAIRespawnPos, _raceKartAIParams.StuckAIRespawnRot, KartRespawnReason.StuckAI);
				_raceKartAIParams.IsStuckAI = false;
			}
		}

		public override void LateUpdate()
		{
			if (_raceAiUtilityManager != null)
			{
				_raceAiUtilityManager.LateUpdate();
			}
		}
	}
}
