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
	public class ArcadeDefinition : Definition
	{
		public const int NUM_REWARDS = 6;
		public const int HALF_BRONZE_IDX = 0;
		public const int ALL_BRONZE_IDX = 1;
		public const int HALF_SILVER_IDX = 2;
		public const int ALL_SILVER_IDX = 3;
		public const int HALF_GOLD_IDX = 4;
		public const int ALL_GOLD_IDX = 5;
		[SerializeField] public int HalfwayMedalCount;
		[SerializeField] public int AllMedalCount;
		[SerializeField] private DefinitionID[] _rewardDefinitions;
		public DefinitionID[] RewardDefinitions { get => default; }
		public DefinitionID GetHalfwayReward(ArcadeEventDefinition.Medal medal) { return default; }
		public DefinitionID GetAllReward(ArcadeEventDefinition.Medal medal) { return default; }
	}
}
