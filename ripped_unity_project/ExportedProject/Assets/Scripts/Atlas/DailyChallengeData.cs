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

namespace Atlas.Stats
{
	[Serializable]
	public struct ConditionLocKeyPair { public string Condition; public string LocKey; }
	public struct DailyChallengeDifficultyValue { public int Difficulty; public float Value; }
	public struct DailyChallengeData
	{
		[SerializeField] private string _challengeID;
		[SerializeField] private Stat[] _stats;
		[SerializeField] private StatCondition.Comparison _statComparison;
		[SerializeField] private ConditionLocKeyPair[] _allowedConditionTypes;
		[SerializeField] private DailyChallengeDifficultyValue[] _difficulties;
		public string ChallengeID { get => default; }
		public Stat[] Stats { get => default; }
		public StatCondition.Comparison StatComparison { get => default; }
		public ConditionLocKeyPair[] AllowedConditionTypes { get => default; }
		public DailyChallengeDifficultyValue[] Difficulties { get => default; }
	}
}
