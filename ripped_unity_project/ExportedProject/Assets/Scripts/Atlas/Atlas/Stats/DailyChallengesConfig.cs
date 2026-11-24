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

namespace Atlas.Stats
{
	public class DailyChallengesConfig : ScriptableObject
	{
		public enum ChallengeDifficulty
		{
			Easy = 0,
			Medium = 1,
			Hard = 2,
		}
		[SerializeField] private int _version;
		[SerializeField] private DailyChallengesConfig.MinuteHour _localRefreshTime;
		[SerializeField] private DailyChallengesConfig.ChallengeDifficultySpecification[] _difficultySpecification;
		[SerializeField] private DailyChallengesConfig.ChallengeOrderData[] _challengeOrderConstraints;
		[SerializeField] private DailyChallengeData[] _challengeDatas;
		[SerializeField] private DailyChallengesConfig.DailyChallengeFTUEData[] _ftueDailyChallenges;
		public int Version { get => default; }
		public DailyChallengesConfig.MinuteHour LocalRefreshTime { get => default; }
		public DailyChallengesConfig.ChallengeDifficultySpecification[] DifficultySpecification { get => default; }
		public DailyChallengeData[] ChallengeDatas { get => default; }
		public DailyChallengesConfig.ChallengeOrderData[] ChallengeOrderConstraints { get => default; }
		public DailyChallengesConfig.DailyChallengeFTUEData[] FtueDailyChallenges { get => default; }
	}
}
