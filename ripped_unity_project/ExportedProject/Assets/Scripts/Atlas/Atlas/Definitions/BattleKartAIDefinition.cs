using System;
using Atlas.Gameplay.Kart;
using UnityEngine;

namespace Atlas.Definitions
{
	[CreateAssetMenu(fileName = "BattleKartAIDefinition", menuName = "Atlas/Definitions/BattleKartAIDefinition")]
	public class BattleKartAIDefinition : Definition
	{
		[Serializable]
		public struct HeuristicWeights
		{
			[Range(0f, 1f)] public float Proximity;
			[Range(0f, 1f)] public float Elevation;
			[Range(0f, 1f)] public float Value;
			[Range(0f, 1f)] public float ForwardBias;
		}

		public const string DefaultDefinitionID = "BattleKartAIDefinitionDefault";

		[SerializeField] protected float _steerThresholdMin;
		[SerializeField] protected float _steerThresholdMax;
		[SerializeField] protected float _steerDelta;
		[SerializeField] protected float _autoDriveSteerThresholdMin;
		[SerializeField] protected float _autoDriveSteerThresholdMax;
		[SerializeField] protected float _autoDriveSteerDelta;
		[SerializeField] private float _driftThreshold;
		[SerializeField] private float _driftMaxSteerThreshold;
		[SerializeField] private float _driftMinDistToTargetThreshold;
		[SerializeField] private float _seekPickupChance;
		[SerializeField] private float _seekOtherKartsChance;
		[SerializeField] private float _hopBoostProbability;
		[SerializeField] private float _targetReachedRadius;
		[SerializeField] private float _lookAheadFixedDist;
		[SerializeField] private float _refreshPathTime;
		[SerializeField] private float _stuckDistSqThreshold;
		[SerializeField] private float _stuckTimeThreshold;
		[SerializeField] private HeuristicWeights _pickupHeuristicWeights;
		[SerializeField] private HeuristicWeights _otherKartHeuristicWeights;
		[SerializeField] private KartAIUsablesParameters _kartAIUsableConfig;
		[SerializeField] private KartAIHopConfig _kartAIHopConfig;

		public float SteerThresholdMin => _steerThresholdMin;
		public float SteerThresholdMax => _steerThresholdMax;
		public float SteerDelta => _steerDelta;
		public float DriftThreshold => _driftThreshold;
		public float DriftMaxSteerThreshold => _driftMaxSteerThreshold;
		public float PickupChance => _seekPickupChance;
		public float SeekOtherKartsChance => _seekOtherKartsChance;
		public float LookAheadDistance => _lookAheadFixedDist;
		public float RefreshPathTime => _refreshPathTime;
		public float StuckDistSqThreshold => _stuckDistSqThreshold;
		public float StuckTimeThreshold => _stuckTimeThreshold;
		public HeuristicWeights PickupHeuristicWeights => _pickupHeuristicWeights;
		public HeuristicWeights OtherKartHeuristicWeights => _otherKartHeuristicWeights;
		public KartAIUsablesParameters KartAIUsableConfig => _kartAIUsableConfig;
		public KartAIHopConfig KartAIHopConfig => _kartAIHopConfig;
	}
}