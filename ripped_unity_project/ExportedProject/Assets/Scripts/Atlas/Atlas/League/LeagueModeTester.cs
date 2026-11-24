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
	public static class LeagueModeTester
	{
		private static readonly int bronze;
		private static readonly int silver;
		private static readonly int gold;
		private static readonly int platinum;
		private static readonly int diamond;
		private static readonly int master;
		public static void TestMapGeneration(LeagueModeDefinition leagueMode) { }
		public static void TestPromotionsAndDemotions(LeagueModeDefinition def) { }
		public static void TestNextLeague(LeagueModeDefinition def) { }
		public static void TestPlacements(LeagueModeDefinition definition) { }
		public static void TestDecay(LeagueModeDefinition def) { }
		public static void TestStarConversion(LeagueModeDefinition def) { }
		public static void TestPodiumPlaceBrokenLeaderboard(LeaguePlayerSave save, SeasonsManager seasonsManager, SaveManager saveManager) { }
		public static void TestPodiumPlaceBrokenLeaderboard2(LeaguePlayerSave save, SeasonsManager seasonsManager, SaveManager saveManager) { }
		public static void TestPodiumPlaceBrokenLeaderboard3(LeaguePlayerSave save, SeasonsManager seasonsManager, SaveManager saveManager) { }
		public static void TestPodium1stPlace(LeaguePlayerSave save, SeasonsManager seasonsManager, SaveManager saveManager) { }
		public static void TestPodium2ndPlace(LeaguePlayerSave save, SeasonsManager seasonsManager, SaveManager saveManager) { }
		public static void TestPodium6thPlace(LeaguePlayerSave save, SeasonsManager seasonsManager, SaveManager saveManager) { }
		public static void TestPodium11thPlace(LeaguePlayerSave save, SeasonsManager seasonsManager, SaveManager saveManager) { }
		public static void TestPodium12thPlace(LeaguePlayerSave save, SeasonsManager seasonsManager, SaveManager saveManager) { }
		public static void TestPodiumPlace(LeaguePlayerSave save, SeasonsManager seasonsManager, SaveManager saveManager, int placement) { }
		public static void TestPodiumAsIs(LeaguePlayerSave save, SeasonsManager seasonsManager, SaveManager saveManager) { }
		public static void TestDecayDemotion(LeaguePlayerSave save, SeasonsManager seasonsManager, SaveManager saveManager, int days) { }
		public static void ToggleTieWithAI(LeagueManager leagueManager) { }
	}
}
