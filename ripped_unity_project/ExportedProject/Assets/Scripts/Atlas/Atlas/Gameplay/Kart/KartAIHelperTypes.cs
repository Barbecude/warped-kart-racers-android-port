using Atlas.Gameplay;
using System;
using Atlas.Gameplay.Player;
using Atlas.Gameplay.Usables;
using Unity.Mathematics;
using UnityEngine;

namespace Atlas.Gameplay.Kart
{
	public struct KartAIInputData
	{
		public float Steer;
		public float Throttle;
		public float Brake;
		public bool Hop;
		public bool Drift;
		public bool Use;

		public void Reset()
		{
			Steer = 0f;
			Throttle = 0f;
			Brake = 0f;
			Hop = false;
			Drift = false;
			Use = false;
		}
	}

	[Serializable]
	public class KartAIUsablesParameters
	{
		public float RicochetUseChance;
		public float RicochetFOV;
		public float RicochetRange;
		public float TryUseRicochetInterval;
		public float ProximityHomingUseChance;
		public float TryUseProximityHomingInterval;
		public float ProximityHomingFOV;
		public float ProximityHomingRange;
		public float PlacementHomingUseChance;
		public float TryUsePlacementHomingInterval;
		public float ShieldUseChance;
		public float TryUseShieldInterval;
		public float BoostUseChance;
		public float TryUseBoostInterval;
		public float BoostLookAheadFOVThreshold;
		public float BoostTimeWithinThresholdToEnable;
		public float GoldenTurdUseChance;
		public float TryUseGoldenTurdInterval;
		public float SuperShieldUseChance;
		public float TryUseSuperShieldInterval;
		public float SatelliteUseChance;
		public float TryUseSatelliteInterval;
		public float RicochetHopChance;
		public float TurdHopChance;
	}

	public struct KartAIUsablesParametersBurst
	{
		public float RicochetUseChance;
		public float RicochetFOV;
		public float RicochetRange;
		public float RicochetHopChance;
		public float TryUseRicochetInterval;
		public float ProximityHomingUseChance;
		public float CosProximityHalfFOV;
		public float ProximityHomingRange;
		public float TryUseProximityHomingInterval;
		public float PlacementHomingUseChance;
		public float TryUsePlacementHomingInterval;
		public float ShieldUseChance;
		public float TryUseShieldInterval;
		public float BoostUseChance;
		public float TryUseBoostInterval;
		public float BoostTimeWithinThresholdToEnable;
		public float CosBoostHalfFov;
		public float GoldenTurdUseChance;
		public float TryUseGoldenTurdInterval;
		public float SuperShieldUseChance;
		public float TryUseSuperShieldInterval;
		public float SatelliteUseChance;
		public float TryUseSatelliteInterval;
		public float CosRicochetHalfFOV;
		public float TurdHopChance;

		public float GetChance(UsableType type)
		{
			switch (type)
			{
				case UsableType.RicochetProjectile: return RicochetUseChance;
				case UsableType.ProximityHomingProjectile: return ProximityHomingUseChance;
				case UsableType.PlacementHomingProjectile: return PlacementHomingUseChance;
				case UsableType.NormalShield: return ShieldUseChance;
				case UsableType.Boost: return BoostUseChance;
				case UsableType.GoldenTurd: return GoldenTurdUseChance;
				case UsableType.SuperShield: return SuperShieldUseChance;
				case UsableType.Satellite: return SatelliteUseChance;
				default: return 0f;
			}
		}

		public float GetUseInterval(UsableType type)
		{
			switch (type)
			{
				case UsableType.RicochetProjectile: return TryUseRicochetInterval;
				case UsableType.ProximityHomingProjectile: return TryUseProximityHomingInterval;
				case UsableType.PlacementHomingProjectile: return TryUsePlacementHomingInterval;
				case UsableType.NormalShield: return TryUseShieldInterval;
				case UsableType.Boost: return TryUseBoostInterval;
				case UsableType.GoldenTurd: return TryUseGoldenTurdInterval;
				case UsableType.SuperShield: return TryUseSuperShieldInterval;
				case UsableType.Satellite: return TryUseSatelliteInterval;
				default: return 0f;
			}
		}
	}

	[Serializable]
	public struct KartAIHopConfig
	{
		public float HopChance;
		public float RaycastDistance;
	}

	public struct RaceSplineCacheParams
	{
		public int PolylineIndex;
		public int LowerKnotIndex;
		public int UpperKnotIndex;
		public int NextPolyLineIndex;
		public int NextUpperKnotIndex;

		public void Init()
		{
			PolylineIndex = -1;
			LowerKnotIndex = -1;
			UpperKnotIndex = -1;
			NextPolyLineIndex = -1;
			NextUpperKnotIndex = -1;
		}
	}

	public struct RaceKartAIUpdateJobBurstParams
	{
		public RaceSplineCacheParams RaceSplineCache;
		public int LapsCompleted;
		public int lowerIndexOnPoly;
		public int upperIndexOnPoly;
		public float DistToUpperKnot;
		public float DistFromLowerKnot;
		public float DistCrossSection;
		public float DriftOutTimer;
		public bool WasInHopBoostTrigger;
		public bool AttemptedDriftProbability;
		public bool HasPassedHalfwayMark;
		public float2 TrackCoords;
		public float4 TargetWorldPos;
		public float4 KartToTargetDirNormalized;
		public bool IsStuckAI;
		public float3 StuckAIRespawnPos;
		public quaternion StuckAIRespawnRot;
		public KartAIInputData InputData;
		public float UseUsableTimer;
		public float EnableBoostWithinThresholdTimer;
		public bool DistCrossSectionInited;
		public bool Rerouting;
		public float StuckAITimer;
		public float4 LastTriggerReroutePosition;
		public int RerouteTriggerCount;
		public float InRerouteTriggerTimer;
	}

	public class KartPhysicsTriggerBehaviour : MonoBehaviour
	{
	}
}

namespace Atlas.Gameplay
{
	using Atlas.Gameplay.Kart;

	public class RaceAIGroupCache
	{
		public RaceAIGroup AiGroup;
		private int _firstPlacementOfGroup;
		private int _lastPlacementOfGroup;
		private GameContextPlayer _firstPlayerOfGroup;
		private GameContextPlayer _lastPlayerOfGroup;

		public int FirstPlacementOfGroup => _firstPlacementOfGroup;
		public int LastPlacementOfGroup => _lastPlacementOfGroup;
		public GameContextPlayer FirstPlayerOfGroup => _firstPlayerOfGroup;
		public GameContextPlayer LastPlayerOfGroup => _lastPlayerOfGroup;

		public void Init(RaceAIGroup group, int firstPositionOfGroup)
		{
			AiGroup = group;
			_firstPlacementOfGroup = firstPositionOfGroup;
		}

		public void SetFirstPlayerCache(GameContextPlayer player) => _firstPlayerOfGroup = player;
		public void SetLastPlayerCache(GameContextPlayer player) => _lastPlayerOfGroup = player;
	}
}
