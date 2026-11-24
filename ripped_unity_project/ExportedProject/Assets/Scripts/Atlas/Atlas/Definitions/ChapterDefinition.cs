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
	public class ChapterDefinition : ContentDefinition
	{
		public static readonly int NUM_RANK_REWARDS;
		[SerializeField] private DefinitionID _rewardId1;
		[SerializeField] private DefinitionID _rewardId2;
		[SerializeField] private DefinitionID _rewardId3;
		[SerializeField] private bool _unlockedByDefault;
		[SerializeField] private string _lockedStringLocID;
		public DefinitionRef<EventDefinition>[] EventDefinitionRefList { get => default; }
		public DefinitionID RankRewardId1 { get => default; }
		public DefinitionID RankRewardId2 { get => default; }
		public DefinitionID RankRewardId3 { get => default; }
		public bool UnlockedByDefault { get => default; }
		public string LockedStringLocID { get => default; }
		public DefinitionID GetRankRewardIdByIndex(int index) { return default; }
	}
}
