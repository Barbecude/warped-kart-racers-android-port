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
	public class LeaguePlayerSave
	{
		public const string LatestOpenedDateKey_String = "L_OD";
		public const string LatestPlayedDateKey_String = "L_LPD";
		public const string ShowPodiumLatchKey_Int = "L_SP";
		public const string PlayerLeagueKey_Int = "L_PL";
		public const string PlayerDayPlacementKey_Int = "L_PDP";
		public const string StarsAwardedLatchKey_Int = "L_SAL";
		public const string WeeksBronzeTotalKey_Int = "L_WB";
		public const string WeeksSilverTotalKey_Int = "L_WS";
		public const string WeeksGoldTotalKey_Int = "L_WG";
		public const string WeeksPlatinumTotalKey_Int = "L_WP";
		public const string WeeksDiamondTotalKey_Int = "L_WD";
		public const string WeeksMasterTotalKey_Int = "L_WM";
		public const string WeeksGoldOrHigherRowKey_Int = "L_WGHR";
		public const string LeagueRewardSeenKey_Int = "L_R_";
		public const string ReplayCountDayKey_Int = "L_RC_";
		public const string LeaderboardAIKey_Int = "L_LB_A_{0}";
		public const string LeaderboardPlayerKey_Int = "L_LB_P";
		public const string LatestCheckedStatsDateKey_String = "L_CSD";
		private readonly SaveManager _sm;
		public int PlayerLeague { get => default; set { } }
		public string LatestOpenedDate { get => default; set { } }
		public string LatestPlayedDate { get => default; set { } }
		public bool ShowPodiumLatch { get => default; set { } }
		public bool StarsAwardedLatch { get => default; set { } }
		public string LatestCheckedStatsDate { get => default; set { } }
		public int WeeksBronzeTotal { get => default; set { } }
		public int WeeksSilverTotal { get => default; set { } }
		public int WeeksGoldTotal { get => default; set { } }
		public int WeeksPlatinumTotal { get => default; set { } }
		public int WeeksDiamondTotal { get => default; set { } }
		public int WeeksMasterTotal { get => default; set { } }
		public int WeeksGoldOrHigherInARow { get => default; set { } }
		public void SetPlayerDayPlacement(int dayIndex, int placement) { }
		public int GetPlayerDayPlacement(int dayIndex) { return default; }
		public void ClearAllDayPlacements() { }
		private string DayPlacementKey(int dayIndex) { return default; }
		public void SaveRewardSeen(string itemID) { }
		public void SaveRewardUnseen(string itemID) { }
		private void SaveRewardSeenStatus(string itemID, int unlockStatus) { }
		public bool GetRewardSeen(string itemID) { return default; }
		public void SetReplayCountDay(int dayIndex, int value) { }
		public int GetReplayCountDay(int dayIndex) { return default; }
		private string ParseLeaderboardAIKey(int aiIndex) { return default; }
		public void SaveLeaderboardForUI(int[] aiStandings, int playerStanding) { }
		public int[] GetLeaderboardForUI() { return default; }
		public int GetPlayerStandingForUI() { return default; }
	}
}
