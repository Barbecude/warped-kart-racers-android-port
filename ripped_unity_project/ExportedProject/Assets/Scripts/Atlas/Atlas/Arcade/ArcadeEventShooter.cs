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
	public class ArcadeEventShooter : ArcadeEvent<ArcadeShooterEventDefinition>
	{
		public const string UsableMaxCount = "UsableMaxCount";
		public const string UsableReplenishTimeMs = "UsableReplenishTimeMs";
		public static readonly DefinitionID ClamUsable;
		private int _usableCount;
		private float _timeUntilReplenish;
		private bool _progressStateStarted;
		private int _usableMaxCount;
		private int _usableReplenishTimeMs;
		public int UsableCount { get => default; set { } }
		public GameType GameType { get => default; }
		protected virtual void OnInit() { }
		protected virtual void OnUpdate(float dt) { }
		protected virtual void OnInProgressStateStartFirstUpdate() { }
		protected virtual void OnUsableUsed(GameContextPlayer player, UsableDefinition usable, int usesRemaining) { }
		protected virtual void OnUsableHitPlayer(GameContextPlayer hitPlayer, GameContextPlayer throwingPlayer, UsableDefinition usable) { }
		protected virtual void RecordStats() { }
		protected virtual int GetMaxScore() { return default; }
	}
}
