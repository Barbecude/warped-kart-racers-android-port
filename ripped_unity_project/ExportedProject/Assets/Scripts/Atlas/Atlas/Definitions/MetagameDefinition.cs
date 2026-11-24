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
	public class MetagameDefinition : Definition
	{
		public enum XPDifficulty
		{
			None = 0,
			Prologue = 1,
			Easy = 2,
			Medium = 3,
			Hard = 4,
			Quickplay = 5,
			Tournament = 6,
			Legend = 7,
		}
		[SerializeField] private int _maxAIVotesPerRound;
		[SerializeField] private float _secondsFromEndBeforeFirstAIVote;
		[SerializeField] private int _minMsBetweenAIVotes;
		[SerializeField] private int _maxMsBetweenAIVotes;
		[SerializeField] private int _chanceAIWillVoteHumanMajority;
		[SerializeField] private float _raceMapWeight;
		[SerializeField] private float _battleMapWeight;
		[SerializeField] private float _preferredRaceMapWeight;
		[SerializeField] private float _preferredBattleMapWeight;
		[SerializeField] private MetagameDefinition.XPRewardData[] _XPRewards;
		[SerializeField] private int[] _seasonRewardThresholds;
		[SerializeField] private float _rewardScreenDuration;
		[SerializeField] private MetagameDefinition.Rankings _rankInfo;
		[SerializeField] private KartLoadout _defaultKartLoadout;
		[SerializeField] private AssetReference _backgroundScreenPrefabAddress;
		[SerializeField] private AssetReference _pedestalPrefabAddress;
		[SerializeField] private MetagameDefinition.FrontEndSceneMapping[] _sceneMappings;
		[SerializeField] private string[] _uiAudioEventsToPreload;
		[SerializeField] private Color[] _playerColors;
		[SerializeField] private AssetReferenceSprite[] _loadingSprites;
		public int MaxAIVotesPerRound { get => default; }
		public float SecondsFromEndBeforeFirstAIVote { get => default; }
		public int MinTimeBetweenAIVotes { get => default; }
		public int MaxTimeBetweenAIVotes { get => default; }
		public float ChanceAIWillVoteHumanMajority { get => default; }
		public float RaceMapWeight { get => default; }
		public float BattleMapWeight { get => default; }
		public float PreferredRaceMapWeight { get => default; }
		public float PreferredBattleMapWeight { get => default; }
		public float RewardScreenDuration { get => default; }
		public MetagameDefinition.Rankings RankInfo { get => default; }
		public List<string> OrdinalLocKeys { get => default; }
		public List<AssetManagerAtlasedSpriteRef> PositionIcons { get => default; }
		public KartLoadout DefaultKartLoadout { get => default; }
		public AssetReference BackgroundScreenPrefabAddress { get => default; }
		public AssetReference PedestalPrefabAddress { get => default; }
		public MetagameDefinition.FrontEndSceneMapping[] SceneMappings { get => default; }
		public string[] UIAudioEventsToPreload { get => default; }
		public int[] SeasonRewardThresholds { get => default; }
		public AssetReferenceSprite[] LoadingSprites { get => default; }
		public DefinitionRef<ChapterDefinition>[] UnlockedLiveOpsChapterRefs { get => default; }
		public DefinitionRef<SeasonsRotationDefinition> SeasonsRotationRef { get => default; }
		public List<NotificationBoxManager.NotificationBoxData> NotificationBoxDataList { get => default; }
		public DefinitionRef<ArcadeDefinition> ArcadeDefinitionRef { get => default; }
		public DefinitionRef<LeagueModeDefinition> LeagueModeDefinitionRef { get => default; }
		public string GetOrdinalLocKey(int playerPosition) { return default; }
		public MetagameDefinition.XPRewardData GetXPRewardData(MetagameDefinition.XPDifficulty xpDifficulty) { return default; }
		public Color PlayerColor(int index) { return default; }
		public KartAudio.CollisionMaterials GetCollisionMaterialFromSurface(AestheticSurfaceType aestheticSurfaceType) { return default; }
	}
}
