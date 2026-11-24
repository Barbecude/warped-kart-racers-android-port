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

namespace Atlas.UI
{
	public class SeasonMetagameData : MetagameData
	{
		private SeasonDefinition _seasonDefinition;
		private UnlockManager _unlockManager;
		private GameDefinitions _gameDefinitions;
		private LocalisationManager _localisationManager;
		private IPMetagameData _IPMetagameData;
		private MapMetagameData _mapMetagameData;
		private MapMetagameData[] _featureableMapsMetaGameData;
		private CharacterMetagameData _charMetagameData;
		private SeasonsManager _seasonsManager;
		private bool _showAsInActive;
		public bool ShowAsInActive { get => default; }
		public string ID { get => default; }
		public bool IsRewardUnlockedAndUnseen(int index) { return default; }
		public bool IsRewardUnlocked(int index) { return default; }
		public AssetDefinition GetRewardAssetDefinition(int index) { return default; }
		public AssetDefinition GetFinalRewardAssetDefinition() { return default; }
		public int GetRewardThreshold(int index) { return default; }
		public int GetLastRewardThreshold() { return default; }
		public IPMetagameData GetIPMetagameData() { return default; }
		public MapMetagameData GetMapMetagameData() { return default; }
		public MapMetagameData GetMapToFeatureData() { return default; }
		public CharacterMetagameData GetCharacterMetagameData() { return default; }
		public string DisplayNameFull() { return default; }
		public string DisplayNameShort() { return default; }
		public float GetProgressForRewardSegment(int index) { return default; }
		public int StarsForSeason() { return default; }
		public float SeasonProgress() { return default; }
		public int GetCurrentRewardIndex() { return default; }
		public bool IsSeasonActive() { return default; }
		public string GetTimeLeftString() { return default; }
		public string GetFinishedString() { return default; }
	}
}
