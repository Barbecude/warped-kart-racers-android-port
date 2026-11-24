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

namespace Atlas.Analytics
{
	public class AtlasAnalyticsEvents
	{
		private AnalyticsManager _analyticsManager;
		private string _sessionGUID;
		public string SessionGUID { set { } }
		public void Init(AnalyticsManager analyticsManager) { }
		public void DeInit() { }
		public void StartSessionEvent(string os, string inputFamily, string gameVersion) { }
		public void NewSaveGameEvent() { }
		public void FTUEStageCompletedEvent(string ftueStageId) { }
		public void LobbyExitEvent(int humanCount, int durationMs, int reason, int gameType, string lobby) { }
		public void VolumeChangedEvent(int oldVO, int oldMusic, int oldSFX, int newVO, int newMusic, int newSFX) { }
		public void EpisodeProgressEvent(string episodeID, int numberOfReruns, int progress, int firstProgressOfSeason) { }
		public void CharacterRankUpEvent(string characterId, int rank) { }
		public void RewardEvent(string item) { }
		public void DailyChallengeEvent(int difficulty, int position) { }
		public void EventResultsEvent(string eventId, int completedChallengeBitField, int flagCount) { }
		public void NetworkErrorEvent(string errorCode) { }
		public void MemoryWarningEvent(string deviceModel) { }
		public void ArcadeProgressEvent(ArcadeEventDefinition.Medal medal, int totalGoldMedalCount, int totalSilverMedalCount, int totalBronzeMedalCount) { }
		public void EndBaseLayerEvent(int finishPosition, int score, GameType gameType, DefinitionID contextId, DefinitionID mapId, DefinitionID aiId, DefinitionID characterId, DefinitionID kartId, DefinitionID gliderId, DefinitionID wheelsId, DefinitionID antennaId, DefinitionID boostId) { }
		public void LeagueEvent(string leagueTier, string leagueSeed, int currentDay, int eventDay, int position, int replayCount, int positionChange) { }
		public void LeagueEndEvent(string leagueTier, string leagueSeed, string leagueStanding, int eventCount, int promoted, int starsAwarded) { }
	}
}
