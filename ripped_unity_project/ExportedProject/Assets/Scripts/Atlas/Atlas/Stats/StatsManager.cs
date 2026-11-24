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
	public class StatsManager
	{
		private StatsData _committedData;
		private StatsData _transactionData;
		private StatsData _activeData;
		private Action[] _onStatChange;
		private static readonly string[] _statNames;
		public static readonly int StatCount;
		public StatsData CommittedData { get => default; }
		public void Init() { }
		public void DeInit() { }
		public void Update() { }
		public void CommitAnyCurrentAndStartTransaction() { }
		public void CommitTransaction() { }
		public void EndAndResetTransaction() { }
		public void RegisterOnStatChange(Stat stat, Action action) { }
		public void UnRegisterOnStatChange(Stat stat, Action action) { }
		public void ResetStats() { }
		public void ResetAndSet(StatsData statsData) { }
		public void IncrementStat(Stat stat) { }
		public void DecrementStat(Stat stat) { }
		public void SetStat(Stat stat, int value) { }
		public int GetStat(Stat stat) { return default; }
		public int GetTransactionStat(Stat stat) { return default; }
		public int GetCommittedStat(Stat stat) { return default; }
		public int GetGlobalStat(Stat stat) { return default; }
		public int GetSummedStats(Stat[] stats) { return default; }
		public int GetSummedCommittedStats(Stat[] stats) { return default; }
		public int GetSummedTransactionStats(Stat[] stats) { return default; }
		public int GetSummedGlobalStats(Stat[] stats) { return default; }
		public static Stat GetStatFromString(string statName) { return default; }
		public static bool TryGetStatFromString(string statName, out Stat outStat) { outStat = default; return default; }
		private void InternalSetStat(Stat stat, int value) { }
	}
}
