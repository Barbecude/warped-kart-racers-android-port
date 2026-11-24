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
	public static class LeagueModeHelper
	{
		public static MapDefinition[] GenerateMapSelection(DateTime date, LeagueModeDefinition leagueMode) { return default; }
		private static MapDefinition[] GetEligiblePool(DayOfWeek dayOfWeek, LeagueModeDefinition leagueMode) { return default; }
		public static DateTime FindFirstDayOfWeek(DateTime currentDateTime) { return default; }
		private static DateTime StartOfWeek(DateTime dt, DayOfWeek startOfWeek) { return default; }
		public static LeagueUpdate CalculateLeagueUpdate(LeagueModeDefinition leagueMode, int placementIndex, int currentLeagueIndex) { return default; }
		public static int CalculateNextLeague(LeagueModeDefinition leagueMode, LeagueUpdate update, int currentLeagueIndex) { return default; }
		public static int CalculatePoints(LeagueModeDefinition def, LeaguePlacementData data) { return default; }
		public static int CalculatePreviousPoints(LeagueModeDefinition def, LeaguePlacementData data, int dayIndex) { return default; }
		public static int CalculatePointsForPlacement(int placementIndex, LeagueModeDefinition definition) { return default; }
		public static LeagueDecayType CalculateDecay(DateTime latestPlayedDate, DateTime firstDayOfCurrentWeek, int currentLeagueIndex, out int newLeagueIndex) { newLeagueIndex = default; return default; }
		private static int GetLeagueModeSeed(DateTime date) { return default; }
		public static string ConvertDateTimeToSeedFormat(DateTime dateTime) { return default; }
		public static DateTime ConvertSeedFormatToDateTime(string date) { return default; }
		public static int GetStarsFromLeaderboardPlacement(int placementIndex, int currentLeagueIndex, LeagueModeDefinition def) { return default; }
		public static bool LatestCheckedStatsInCurrentWeek(DateTime currentDateTime, LeaguePlayerSave playerSave) { return default; }
		public static bool LastOpenedInCurrentWeek(DateTime currentDateTime, LeaguePlayerSave playerSave) { return default; }
		public static bool IsEventPlayable(int dayIndex, DateTime dateTime) { return default; }
		public static int GetDayIndex(DateTime dateTime) { return default; }
		public static string GetLeagueDefinitionID(int leagueIndex) { return default; }
		public static bool LastOpenedOrPlayedInFuture(DateTime currentDateTime, LeaguePlayerSave save) { return default; }
	}
}
