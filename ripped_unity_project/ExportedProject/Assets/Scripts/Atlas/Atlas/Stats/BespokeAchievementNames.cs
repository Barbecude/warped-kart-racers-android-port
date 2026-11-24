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
	public class BespokeAchievementNames
	{
		public const string CompletePrologue = "arcadeFTUX";
		public const string CompleteDrivingFTUE = "Achievement_01";
		public const string UnlockedMediumCampaign = "Achievement_04";
		public const string UnlockedHardCampaign = "Achievement_13";
		public const string WinEventWithSmallNumberOfUniqueSkins = "Achievement_30";
		public const string WinEventWithMediumNumberOfUniqueSkins = "Achievement_31";
		public const string WinEventWithLargeNumberOfUniqueSkins = "Achievement_32";
		public const string PlayLargeNumberOfDifferentMaps = "Achievement_38";
		public const string PlayAsLargeNumberOfDifferentCharacters = "Achievement_40";
		public const string PlayAsLargeNumberOfDifferentKarts = "Achievement_42";
		public const string CompleteAllPrologueCampaignChallenges = "Achievement_14";
		public const string CompleteAllEasyCampaignChallenges = "Achievement_15";
		public const string CompleteAllMediumCampaignChallenges = "Achievement_16";
		public const string CompleteAllHardCampaignChallenges = "Achievement_17";
		public const string CompleteAllLegendCampaignChallenges = "Achievement_63";
		public const string CompleteAllSeriesCampaignChallenges = "Achievement_64";
		public const string CompleteAllDailyChallengesInADay = "Achievement_18";
		public const string CompleteDailyChallengeStreak = "Achievement_20";
		public const string HitOpponentAfterMultipleClamBounces = "Achievement_12";
		public const string AttemptAllArcadeMissions = "Achievement_72";
		public const string CompleteAnArcadeMissionAndEarnNoMedal = "Achievement_73";
		public const string CompleteAllLeagueEventsInSingleWeek = "Achievement_74";
		public const string BeInGoldLeagueOrHigher3WeeksInARow = "Achievement_75";
		public const string MoveUp5PlacesOntheLeaderboardInADay = "Achievement_76";
		public const string Come1stInTheMasterLeague = "Achievement_77";
	}
}
