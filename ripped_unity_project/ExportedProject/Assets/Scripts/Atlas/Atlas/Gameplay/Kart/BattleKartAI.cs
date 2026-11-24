using System;
using System.Collections.Generic;
using Atlas.Contexts;
using Atlas.Definitions;
using Atlas.Gameplay.Pickups;
using Core.Application;
using Core.Definitions;
using Unity.Collections;
using Unity.Jobs;
using Unity.Mathematics;
using UnityEngine;
using UnityEngine.AI;

namespace Atlas.Gameplay.Kart
{
	public class BattleKartAI : KartAI
	{
		public struct IndexValuePair
		{
			public int Index;
			public float HeuristicValue;
		}

		public const int MaxNumPathCorners = 50;
		public const int NumTriesToGetTargetPoint = 5;
		public const int IndexValueListCapacity = 3;

		private BattleKartAIDefinition _battleKartAIDefinition;
		private BattleAIMapBoundsBehaviour _battleAiMapBoundsBehaviour;
		private NavMeshPath _path;
		private int _cornersNum;
		private float3 _targetPoint;
		private float3 _lookAheadPoint;
		private Transform _trackingTarget;
		private PickupBox _trackingBox;
		private float _refreshPathTimer;
		private int _invalidPathCount;
		private int _pathIndex;
		private float _wasInAirTimer;
		private BattleKartNavState _currentNavState;

		private const float _maxSamplePositionDistance = 50f;
		private const float _pickupReachedDistTolerance = 5f;

		private float _targetReachedDistToleranceSq;
		private float _pickupReachedDistToleranceSq;
		private float _steerThresholdMin;
		private float _steerThresholdMax;
		private float _driftThreshold;
		private float _driftMaxSteerThreshold;
		private float _steerDelta;
		private float _minDistToNextTargetSq;

		private int _prevPosAreaIndex;
		private int _currentPosAreaIndex;
		private int _prevTargetAreaIndex;
		private int _currentTargetAreaIndex;

		private bool _jobInited;
		private BattleAIComputeJob _battleAIComputeJob;
		private NativeArray<float4> _computeJobResult;
		private NativeArray<float4> _processedPathCorners;
		private NativeArray<float4> _initialPathCorners;
		private NativeArray<int> _processedPathLength;
		private BattleAIProcessPathJob _battleAiProcessPathJob;
		private List<int> _tempTargetAreasIndex;
		private float _stuckAITimer;
		private float3 _prevRigidBodyPos;
		private List<IndexValuePair> _indexValueList;

		public NativeArray<float4> ProcessedPathCorners => _processedPathCorners;
		public int CornersNum => _cornersNum;
		public float3 LookAheadPoint => _lookAheadPoint;
		public int PathIndex => _pathIndex;
		public int CurrentPosAreaIndex => _currentPosAreaIndex;

		public float MinDistToNextTargetSq
		{
			get => _minDistToNextTargetSq;
			set => _minDistToNextTargetSq = value;
		}

		public override Definition GetKartAIDefinition()
		{
			return _battleKartAIDefinition;
		}

		public void Init(KartComposite kartComposite, GameContextBase gameContext, BattleKartAIDefinition battleKartAiDefinition, bool performHopRaycastThisFrame)
		{
			base.Init(kartComposite, gameContext, battleKartAiDefinition.KartAIUsableConfig, battleKartAiDefinition.KartAIHopConfig, performHopRaycastThisFrame);
			_battleKartAIDefinition = battleKartAiDefinition;
			_path = new NavMeshPath();
			_battleAiMapBoundsBehaviour = gameContext.Scene.FindComponentInScene<BattleAIMapBoundsBehaviour>();
			_targetPoint = float3.zero;
			_lookAheadPoint = float3.zero;
			_trackingTarget = null;
			_trackingBox = null;
			_refreshPathTimer = -1f;
			_invalidPathCount = 0;
			_pathIndex = 0;
			_wasInAirTimer = 0f;
			_currentNavState = BattleKartNavState.RandomPoint;
			_prevPosAreaIndex = -1;
			_currentPosAreaIndex = -1;
			_prevTargetAreaIndex = -1;
			_currentTargetAreaIndex = -1;
			_tempTargetAreasIndex = new List<int>();
			_indexValueList = new List<IndexValuePair>(IndexValueListCapacity);
			_stuckAITimer = 0f;
			_prevRigidBodyPos = float3.zero;
			InitJob();
		}

		public override void PostInit()
		{
			RandomizeTargetPoint();
		}

		public override void OnFinishGame()
		{
			base.OnFinishGame();
			_currentNavState = BattleKartNavState.RandomPoint;
			ResetTrackingTargets();
			RandomizeTargetPoint();
		}

		public void InitJob()
		{
			if (_jobInited)
			{
				return;
			}
			_computeJobResult = new NativeArray<float4>(1, Allocator.Persistent);
			_processedPathCorners = new NativeArray<float4>(MaxNumPathCorners, Allocator.Persistent);
			_initialPathCorners = new NativeArray<float4>(MaxNumPathCorners, Allocator.Persistent);
			_processedPathLength = new NativeArray<int>(1, Allocator.Persistent);

			_battleAIComputeJob = new BattleAIComputeJob
			{
				Result = _computeJobResult,
				ProcessedPathCorners = _processedPathCorners
			};
			_battleAiProcessPathJob = new BattleAIProcessPathJob
			{
				InitialPathCorners = _initialPathCorners,
				ProcessedPathCorners = _processedPathCorners,
				ProcessedPathLength = _processedPathLength
			};
			_jobInited = true;
		}

		public void DeInitJob()
		{
			if (!_jobInited)
			{
				return;
			}
			if (_computeJobResult.IsCreated) _computeJobResult.Dispose();
			if (_processedPathCorners.IsCreated) _processedPathCorners.Dispose();
			if (_initialPathCorners.IsCreated) _initialPathCorners.Dispose();
			if (_processedPathLength.IsCreated) _processedPathLength.Dispose();
			_jobInited = false;
		}

		public override void DeInit()
		{
			DeInitJob();
			base.DeInit();
		}

		public override void Update(IUpdateParams updateParams)
		{
			base.Update(updateParams);
			if (!_isActive || _kartComposite == null)
			{
				return;
			}

			UpdateAreaIndex();
			UpdateCurrentNavState();
			if (_refreshPathTimer < 0f)
			{
				TryGetPath();
			}
			ApplyNavigationSteering(updateParams);
			UpdateStuckAI(updateParams);
		}

		public override void LateUpdate(IUpdateParams updateParams)
		{
		}

		protected override void UpdateTimers(IUpdateParams updateParams)
		{
			float dt = updateParams.DeltaTime;
			_refreshPathTimer -= dt;
			if (_refreshPathTimer < 0f)
			{
				_refreshPathTimer = -1f;
			}

			if (!_kartComposite.KartPhysics.Body.InAir || _kartComposite.KartPhysics.Body.Hopping)
			{
				if (_wasInAirTimer > 0.1f)
				{
					_refreshPathTimer = -1f;
				}
				_wasInAirTimer = 0f;
			}
			else
			{
				_wasInAirTimer += dt;
			}

			base.UpdateTimers(updateParams);
		}

		protected void UpdateStuckAI(IUpdateParams updateParams)
		{
			if (_inputData.Brake >= 0.1f)
			{
				_stuckAITimer = 0f;
				return;
			}

			float3 curPos = _kartComposite.KartPhysics.Rigidbody.position;
			float distSq = math.distancesq(curPos, _prevRigidBodyPos);
			_prevRigidBodyPos = curPos;

			if (distSq < _battleKartAIDefinition.StuckDistSqThreshold)
			{
				_stuckAITimer += updateParams.DeltaTime;
				if (_stuckAITimer >= _battleKartAIDefinition.StuckTimeThreshold)
				{
					_stuckAITimer = 0f;
					NextNavStateAndRefreshTarget();
				}
			}
			else
			{
				_stuckAITimer = 0f;
			}
		}

		protected void UpdateAreaIndex()
		{
			if (_battleAiMapBoundsBehaviour == null)
			{
				return;
			}

			Vector3 pos = _kartComposite.KartPhysics.Rigidbody.position;
			int areaIdx = _battleAiMapBoundsBehaviour.GetAreaIndex(pos);
			if (areaIdx >= 0 && areaIdx != _currentPosAreaIndex)
			{
				_prevPosAreaIndex = _currentPosAreaIndex;
				_currentPosAreaIndex = areaIdx;
			}
		}

		public override void OnResetPosition()
		{
			_refreshPathTimer = -1f;
		}

		protected void ApplyNavigationSteering(IUpdateParams updateParams)
		{
			if (_cornersNum <= 0)
			{
				return;
			}

			ComputeLookAhead();

			Vector3 pos = _kartComposite.KartPhysics.Rigidbody.position;
			Vector3 fwd = _kartComposite.KartPhysics.Rigidbody.transform.forward;
			Vector3 right = _kartComposite.KartPhysics.Rigidbody.transform.right;
			Vector3 toLookAhead = (Vector3)_lookAheadPoint - pos;
			toLookAhead.y = 0f;
			float distSq = toLookAhead.sqrMagnitude;

			if (distSq > 0.0001f)
			{
				Vector3 dir = toLookAhead.normalized;
				float rightDot = Vector3.Dot(right, dir);
				float fwdDot = Vector3.Dot(fwd, dir);

				float absRight = Mathf.Abs(rightDot);
				float steerSign = Mathf.Sign(rightDot);
				float steerMag = 0f;

				if (fwdDot < 0f)
				{
					steerMag = 1f;
				}
				else if (absRight > _steerThresholdMin)
				{
					steerMag = Mathf.Clamp01((absRight - _steerThresholdMin) / (_steerThresholdMax - _steerThresholdMin));
				}

				float targetSteer = steerSign * steerMag;
				_inputData.Steer = Mathf.MoveTowards(_inputData.Steer, targetSteer, _steerDelta * updateParams.DeltaTime * 10f);
				_inputData.Throttle = 1f;
				_inputData.Brake = 0f;

				if (Mathf.Abs(_inputData.Steer) > _driftThreshold && fwdDot > 0f && _kartComposite.KartPhysics.Body.LngSpeed > 15f)
				{
					_inputData.Drift = 1f;
				}
				else if (Mathf.Abs(_inputData.Steer) < _driftMaxSteerThreshold * 0.5f)
				{
					_inputData.Drift = 0f;
				}

				if (fwdDot < -0.5f && _kartComposite.KartPhysics.Body.LngSpeed > 5f)
				{
					_inputData.Throttle = 0f;
					_inputData.Brake = 0.9f;
				}
			}
		}

		protected void ComputeLookAhead()
		{
			if (!_jobInited || _cornersNum <= 0)
			{
				return;
			}

			float3 curPos = _kartComposite.KartPhysics.Rigidbody.position;
			_battleAIComputeJob.CurrentPosition = new float4(curPos.x, curPos.y, curPos.z, 0f);
			_battleAIComputeJob.PathIndex = _pathIndex;
			_battleAIComputeJob.CornersNum = _cornersNum;
			_battleAIComputeJob.LookAheadDistance = _battleKartAIDefinition.LookAheadDistance;
			_battleAIComputeJob.TargetReachedDistToleranceSq = _targetReachedDistToleranceSq;
			_battleAIComputeJob.Schedule().Complete();

			float4 res = _computeJobResult[0];
			_lookAheadPoint = new float3(res.x, res.y, res.z);
			_pathIndex = (int)res.w;
		}

		protected void NextNavStateAndRefreshTarget()
		{
			NextNavState();
			SetTargetPoint();
			_refreshPathTimer = -1f;
		}

		protected void UpdateCurrentNavState()
		{
			float3 curPos = _kartComposite.KartPhysics.Rigidbody.position;
			if (_trackingTarget != null)
			{
				_targetPoint = _trackingTarget.position;
			}

			float distSq = math.distancesq(curPos, _targetPoint);
			if (_currentNavState == BattleKartNavState.SeekPickup)
			{
				if (_trackingBox == null || !_trackingBox.IsActive || distSq <= _pickupReachedDistToleranceSq || _kartComposite.KartUsableManager.HasUsableEquipped)
				{
					NextNavStateAndRefreshTarget();
				}
			}
			else if (_currentNavState == BattleKartNavState.SeekOtherKart)
			{
				if (_trackingTarget == null || !_kartComposite.KartUsableManager.HasUsableEquipped || distSq <= _targetReachedDistToleranceSq)
				{
					NextNavStateAndRefreshTarget();
				}
			}
			else
			{
				if (distSq <= _targetReachedDistToleranceSq)
				{
					NextNavStateAndRefreshTarget();
				}
			}
		}

		protected void NextNavState()
		{
			if (_kartComposite.KartUsableManager != null && _kartComposite.KartUsableManager.HasUsableEquipped)
			{
				_currentNavState = BattleKartNavState.SeekOtherKart;
			}
			else
			{
				_currentNavState = UnityEngine.Random.value < _battleKartAIDefinition.PickupChance ? BattleKartNavState.SeekPickup : BattleKartNavState.RandomPoint;
			}
		}

		protected void SetTargetPoint()
		{
			ResetTrackingTargets();
			switch (_currentNavState)
			{
				case BattleKartNavState.SeekPickup:
					SetTargetToPickup();
					break;
				case BattleKartNavState.SeekOtherKart:
					SetTargetToOtherKart();
					break;
				default:
					RandomizeTargetPoint();
					break;
			}
		}

		protected void ResetTrackingTargets()
		{
			_trackingTarget = null;
			_trackingBox = null;
		}

		protected void RandomizeTargetPoint()
		{
			if (_battleAiMapBoundsBehaviour == null)
			{
				return;
			}

			float3 curPos = _kartComposite.KartPhysics.Rigidbody.position;
			for (int i = 0; i < NumTriesToGetTargetPoint; i++)
			{
				Vector3 randomPoint = _battleAiMapBoundsBehaviour.GetRandomPoint(_currentPosAreaIndex, _prevPosAreaIndex, out int targetArea);
				if (NavMesh.SamplePosition(randomPoint, out NavMeshHit hit, _maxSamplePositionDistance, NavMesh.AllAreas))
				{
					float3 candidate = hit.position;
					if (math.distancesq(curPos, candidate) >= _minDistToNextTargetSq || i == NumTriesToGetTargetPoint - 1)
					{
						_targetPoint = candidate;
						_prevTargetAreaIndex = _currentTargetAreaIndex;
						_currentTargetAreaIndex = targetArea;
						return;
					}
				}
			}
		}

		protected void SetTargetToPickup()
		{
			BattleGameContext battleContext = _gameContext as BattleGameContext;
			if (battleContext == null || battleContext.PickupBoxManager == null)
			{
				RandomizeTargetPoint();
				return;
			}

			List<PickupBox> pickupBoxes = battleContext.PickupBoxManager.PickupBoxes;
			_tempTargetAreasIndex.Clear();
			if (_battleAiMapBoundsBehaviour != null && _currentPosAreaIndex >= 0)
			{
				_battleAiMapBoundsBehaviour.GetConnectedAreas(_currentPosAreaIndex, _tempTargetAreasIndex);
			}

			PopulatePickupBoxIndexValueList(in pickupBoxes, in _tempTargetAreasIndex);
			if (_indexValueList.Count > 0)
			{
				int chosen = _indexValueList[UnityEngine.Random.Range(0, _indexValueList.Count)].Index;
				_trackingBox = pickupBoxes[chosen];
				_trackingTarget = _trackingBox.transform;
				_targetPoint = _trackingTarget.position;
			}
			else
			{
				RandomizeTargetPoint();
			}
		}

		private void PopulatePickupBoxIndexValueList(in List<PickupBox> pickupBoxList, in List<int> filterAreaIndexList)
		{
			_indexValueList.Clear();
			if (pickupBoxList == null || pickupBoxList.Count == 0)
			{
				return;
			}

			Vector3 ownPos = _kartComposite.KartPhysics.Rigidbody.position;
			Vector3 ownFwd = _kartComposite.KartPhysics.Rigidbody.transform.forward;

			for (int i = 0; i < pickupBoxList.Count; i++)
			{
				PickupBox box = pickupBoxList[i];
				if (box == null || !box.IsActive)
				{
					continue;
				}

				Vector3 boxPos = box.transform.position;
				if (filterAreaIndexList != null && filterAreaIndexList.Count > 0 && _battleAiMapBoundsBehaviour != null)
				{
					int areaIdx = _battleAiMapBoundsBehaviour.GetAreaIndex(boxPos);
					if (!filterAreaIndexList.Contains(areaIdx))
					{
						continue;
					}
				}

				float weight = EvaluateWeight(ownPos, ownFwd, boxPos, 1f, _battleKartAIDefinition.PickupHeuristicWeights);
				InsertIndexValuePair(i, weight);
			}
		}

		protected void SetTargetToOtherKart()
		{
			if (_gameContext == null || _gameContext.KartManager == null)
			{
				RandomizeTargetPoint();
				return;
			}

			List<KartComposite> karts = _gameContext.KartManager.LoadedKarts;
			_tempTargetAreasIndex.Clear();
			if (_battleAiMapBoundsBehaviour != null && _currentPosAreaIndex >= 0)
			{
				_battleAiMapBoundsBehaviour.GetConnectedAreas(_currentPosAreaIndex, _tempTargetAreasIndex);
			}

			PopulateOtherKartIndexValueList(in karts, in _tempTargetAreasIndex);
			if (_indexValueList.Count > 0)
			{
				int chosen = _indexValueList[UnityEngine.Random.Range(0, _indexValueList.Count)].Index;
				KartComposite targetKart = karts[chosen];
				_trackingTarget = targetKart.KartPhysics.Rigidbody.transform;
				_targetPoint = _trackingTarget.position;
			}
			else
			{
				RandomizeTargetPoint();
			}
		}

		private void PopulateOtherKartIndexValueList(in List<KartComposite> kartCompList, in List<int> filterAreaIndexList)
		{
			_indexValueList.Clear();
			if (kartCompList == null || kartCompList.Count == 0)
			{
				return;
			}

			Vector3 ownPos = _kartComposite.KartPhysics.Rigidbody.position;
			Vector3 ownFwd = _kartComposite.KartPhysics.Rigidbody.transform.forward;

			for (int i = 0; i < kartCompList.Count; i++)
			{
				KartComposite other = kartCompList[i];
				if (other == null || other == _kartComposite || other.IsRespawning)
				{
					continue;
				}

				Vector3 otherPos = other.KartPhysics.Rigidbody.position;
				if (filterAreaIndexList != null && filterAreaIndexList.Count > 0 && _battleAiMapBoundsBehaviour != null)
				{
					int areaIdx = _battleAiMapBoundsBehaviour.GetAreaIndex(otherPos);
					if (!filterAreaIndexList.Contains(areaIdx))
					{
						continue;
					}
				}

				float scoreValue = other.GameContextPlayer != null ? other.GameContextPlayer.Score : 0f;
				float weight = EvaluateWeight(ownPos, ownFwd, otherPos, scoreValue, _battleKartAIDefinition.OtherKartHeuristicWeights);
				InsertIndexValuePair(i, weight);
			}
		}

		private void InsertIndexValuePair(int index, float value)
		{
			int insertIdx = _indexValueList.Count;
			for (int i = 0; i < _indexValueList.Count; i++)
			{
				if (value > _indexValueList[i].HeuristicValue)
				{
					insertIdx = i;
					break;
				}
			}

			if (insertIdx < IndexValueListCapacity)
			{
				if (_indexValueList.Count >= IndexValueListCapacity)
				{
					_indexValueList.RemoveAt(_indexValueList.Count - 1);
				}
				_indexValueList.Insert(insertIdx, new IndexValuePair { Index = index, HeuristicValue = value });
			}
		}

		protected void TryGetPath()
		{
			Vector3 startPos = _kartComposite.KartPhysics.Rigidbody.position;
			Vector3 endPos = _targetPoint;

			if (!NavMesh.SamplePosition(startPos, out NavMeshHit startHit, _maxSamplePositionDistance, NavMesh.AllAreas) ||
				!NavMesh.SamplePosition(endPos, out NavMeshHit endHit, _maxSamplePositionDistance, NavMesh.AllAreas) ||
				!NavMesh.CalculatePath(startHit.position, endHit.position, NavMesh.AllAreas, _path) ||
				_path.status == NavMeshPathStatus.PathInvalid ||
				_path.corners.Length == 0)
			{
				_invalidPathCount++;
				if (_invalidPathCount >= NumTriesToGetTargetPoint)
				{
					_invalidPathCount = 0;
					RandomizeTargetPoint();
				}
				_refreshPathTimer = _battleKartAIDefinition.RefreshPathTime;
				return;
			}

			_invalidPathCount = 0;
			int rawCount = Mathf.Min(_path.corners.Length, MaxNumPathCorners);
			for (int i = 0; i < rawCount; i++)
			{
				Vector3 c = _path.corners[i];
				_initialPathCorners[i] = new float4(c.x, c.y, c.z, 0f);
			}

			_battleAiProcessPathJob.InitialPathLength = rawCount;
			_battleAiProcessPathJob.Schedule().Complete();

			_cornersNum = _processedPathLength[0];
			_pathIndex = 0;
			_refreshPathTimer = _battleKartAIDefinition.RefreshPathTime;
		}

		protected float EvaluateWeight(Vector3 ownPos, Vector3 ownForward, Vector3 targetPos, float value, BattleKartAIDefinition.HeuristicWeights weights)
		{
			Vector3 toTarget = targetPos - ownPos;
			float dist = toTarget.magnitude;
			float angleDot = dist > 0.001f ? Vector3.Dot(ownForward, toTarget / dist) : 1f;
			float distScore = weights.Proximity / (dist + 1f);
			float angleScore = weights.ForwardBias * ((angleDot + 1f) * 0.5f);
			float valueScore = weights.Value * value;
			return distScore + angleScore + valueScore;
		}

		public BattleKartAI()
		{
			_targetReachedDistToleranceSq = 50f;
			_pickupReachedDistToleranceSq = 25f;
			_steerThresholdMin = 0.01f;
			_steerThresholdMax = 0.5f;
			_driftThreshold = 0.9f;
			_driftMaxSteerThreshold = 0.92f;
			_steerDelta = 1f;
			_minDistToNextTargetSq = 6400f;
		}
	}
}
