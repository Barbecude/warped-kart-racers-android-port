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
	public class CampaignDefinition : ContentDefinition
	{
		[SerializeField] private DefinitionID _rewardId;
		[SerializeField] private DefinitionID _completionRewardId;
		[SerializeField] private int _challengeFirstTimeXP;
		[SerializeField] private int _challengeRepeatXP;
		[SerializeField] private string _lockedStringLocID;
		[SerializeField] private Color _difficultyColour;
		[SerializeField] private MetagameDefinition.XPDifficulty _XPDifficultyOverride;
		[SerializeField] private AssetManagerAtlasedSpriteRef _difficultyAtlasedSpriteRef;
		[SerializeField] private MusicManager.FrontEndMusicType _frontEndMusicType;
		[SerializeField] private uint _animationPriority;
		public DefinitionRef<ChapterDefinition>[] ChapterDefinitionRefList { get => default; }
		public DefinitionID RewardId { get => default; }
		public DefinitionID CompletionRewardId { get => default; }
		public int ChallengeFirstTimeXP { get => default; }
		public int ChallengeRepeatXP { get => default; }
		public string LockedStringLocID { get => default; }
		public Color DifficultyColour { get => default; }
		public MetagameDefinition.XPDifficulty XPDifficultyOverride { get => default; }
		public AssetManagerAtlasedSpriteRef DifficultyAtlasedSpriteRef { get => default; }
		public MusicManager.FrontEndMusicType FrontEndMusicType { get => default; }
		public uint AnimationPriority { get => default; }
		public bool TryGetChapterIndex(ChapterDefinition chapterDefinition, out int outChapterIndex) { outChapterIndex = default; return default; }
	}
}
