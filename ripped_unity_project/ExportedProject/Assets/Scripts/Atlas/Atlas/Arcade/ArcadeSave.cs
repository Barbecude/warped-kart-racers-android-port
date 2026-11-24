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

namespace Atlas.Arcade
{
	public static class ArcadeSave
	{
		private const string StripRaceFromMapId = "Map_Race_";
		private const string StripBattleFromMapId = "Map_Battle_";
		private const string ArcadeRewardSeen = "ARSeen_";
		public const int RewardUnseen = 0;
		public const int RewardSeen = 1;
		private static StringBuilder ReusableStringBuilder;
		public static bool HasGoldMedal(ArcadeEventDefinition arcadeEventDefinition, SaveData saveData) { return default; }
		public static void SaveResultIfBetter(GameType gameType, DefinitionID mapId, int result, SaveManager saveManager) { }
		public static void SaveResult(GameType gameType, DefinitionID mapId, int result, SaveManager saveManager) { }
		public static bool TryGetResult(GameType gameType, DefinitionID mapId, SaveManager saveManager, out int outResult) { outResult = default; return default; }
		public static bool TryGetResult(GameType gameType, DefinitionID mapId, SaveData saveData, out int outResult) { outResult = default; return default; }
		public static void SaveRewardSeen(int index, SaveManager saveManager, int value) { }
		public static bool GetRewardSeen(int index, SaveManager saveManager) { return default; }
		public static string GetKey(GameType gameType, DefinitionID mapId) { return default; }
		private static void AppendMapKey(DefinitionID mapId, StringBuilder stringBuilder) { }
		private static void AppendGameTypeKey(GameType gameType, StringBuilder stringBuilder) { }
	}
}
