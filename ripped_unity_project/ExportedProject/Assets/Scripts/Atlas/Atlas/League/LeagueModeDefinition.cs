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

namespace Atlas.League
{
	public class LeagueModeDefinition : Definition
	{
		public enum EventType
		{
			RacesOnly = 0,
			BattlesOnly = 1,
		}
		public static readonly int FLAGS_REQUIRED_TO_UNLOCK;
		public static readonly int NUM_LEAGUES;
		public static readonly int EVENTS_PER_WEEK;
		public static readonly int AI_CHARACTERS;
		public static readonly int DEFAULT_DAY_PLACEMENT;
		public static readonly int GOLD_LEAGUE_INDEX;
		public static readonly int DECAY_GRACE_PERIOD_WEEKS;
		public const int BRONZE_RANK = 0;
		public const int SILVER_RANK = 1;
		public const int GOLD_RANK = 2;
		public const int PLATINUM_RANK = 3;
		public const int DIAMOND_RANK = 4;
		public const int MASTER_RANK = 5;
		[SerializeField] private EventDefinition _raceEventDefinition;
		[SerializeField] private EventDefinition _battleEventDefinition;
		[SerializeField] private LeagueDefinition[] _leagueDefinitions;
		[SerializeField] private MapDefinition[] _raceMaps;
		[SerializeField] private MapDefinition[] _battleMaps;
		[SerializeField] private LeagueModeDefinition.DaySchedule[] _weeklySchedule;
		[SerializeField] private int[] _pointsPerPlacement;
		public EventDefinition RaceEventDefinition { get => default; }
		public EventDefinition BattleEventDefinition { get => default; }
		public LeagueDefinition[] LeagueDefinitions { get => default; }
		public MapDefinition[] RaceMaps { get => default; }
		public MapDefinition[] BattleMaps { get => default; }
		public LeagueModeDefinition.DaySchedule[] WeeklySchedule { get => default; }
		public int[] PointsPerPlacement { get => default; }
	}
}
