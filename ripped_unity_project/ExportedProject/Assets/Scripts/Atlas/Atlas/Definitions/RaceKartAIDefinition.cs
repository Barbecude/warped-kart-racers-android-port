using System;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using Atlas.Audio;
using Atlas.Contexts;
using Atlas.Definitions;
using Atlas.Gameplay;
using Atlas.Gameplay.Kart;
using Atlas.Gameplay.Pickups;
using Atlas.Gameplay.Player;
using Atlas.Gameplay.Usables;
using Atlas.Input;
using Atlas.League;
using Atlas.Lighting;
using Atlas.Networking;
using Atlas.Rendering;
using Atlas.Save;
using Atlas.Settings;
using Atlas.Stats;
using Atlas.UI;
using Core.Actors;
using Core.Application;
using Core.Assets;
using Core.Audio;
using Core.Cameras;
using Core.Containers;
using Core.Contexts;
using Core.Definitions;
using Core.Input;
using Core.Localisation;
using Core.Networking;
using Core.Scenes;
using Core.Services;
using Core.Settings;
using Unity.Collections;
using Unity.Jobs;
using Unity.Mathematics;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.Events;
using UnityEngine.UI;
using Object = UnityEngine.Object;
using Network = Atlas.Networking.Network;
using NetworkPlayer = Core.Networking.NetworkPlayer;

namespace Atlas.Definitions
{
	public class RaceKartAIDefinition : Definition
	{
		public const string DefaultDefinitionID = "RaceKartAIDefinitionDefault";
		[SerializeField] protected float _steerThresholdMin;
		[SerializeField] protected float _steerThresholdMax;
		[SerializeField] protected float _steerDelta;
		[SerializeField] protected float _autoDriveSteerThresholdMin;
		[SerializeField] protected float _autoDriveSteerThresholdMax;
		[SerializeField] protected float _autoDriveSteerDelta;
		[SerializeField] protected float _lookAheadFixedDist;
		[SerializeField] protected float _lookAheadSpeedModifier;
		[SerializeField] protected float _rateOfChangeCrossSection;
		[SerializeField] private float _driftProbability;
		[SerializeField] private float _driftStartThreshold;
		[SerializeField] private float _driftMaxSteerThreshold;
		[SerializeField] private float _exitDriftOutTime;
		[SerializeField] private float _exitDriftAngle;
		[SerializeField] private float _hopBoostProbability;
		[SerializeField] private float _stopDriftToHopBoostProbability;
		[SerializeField] private float _wrongWayWarningTime;
		[SerializeField] private float _wrongWayRespawnTime;
		[SerializeField] private float _stuckAISpeedThreshold;
		[SerializeField] private float _stuckAITimeToRespawn;
		[SerializeField] private float _rerouteTriggerColliderTime;
		[SerializeField] private float _reroutePointReachedDistThreshold;
		[SerializeField] protected KartAIUsablesParameters _kartAiUsablesParameters;
		[SerializeField] protected RaceAIGroup[] _aiGroupings;
		public float SteerThresholdMin { get => default; }
		public float SteerThresholdMax { get => default; }
		public float SteerDelta { get => default; }
		public float AutoDriveSteerThresholdMin { get => default; }
		public float AutoDriveSteerThresholdMax { get => default; }
		public float AutoDriveSteerDelta { get => default; }
		public float LookAheadFixedDist { get => default; }
		public float LookAheadSpeedModifier { get => default; }
		public float RateOfChangeCrossSection { get => default; }
		public KartAIUsablesParameters KartAiUsablesParameters { get => default; }
		public RaceAIGroup[] AiGroupings { get => default; }
		public float DriftProbability { get => default; }
		public float DriftStartThreshold { get => default; }
		public float DriftMaxSteerThreshold { get => default; }
		public float ExitDriftOutTime { get => default; }
		public float ExitDriftAngle { get => default; }
		public float HopBoostProbability { get => default; }
		public float WrongWayWarningTime { get => default; }
		public float WrongWayRespawnTime { get => default; }
		public float StuckAiSpeedThreshold { get => default; }
		public float StuckAiTimeToRespawn { get => default; }
		public float RerouteTriggerColliderTime { get => default; }
		public float ReroutePointReachedDistThreshold { get => default; }
		public float StopDriftToHopBoostProbability { get => default; }
		public RaceAIGroup GetAIGroupBasedOnRacePlacement(int racePlacement) { return default; }
	}
}
