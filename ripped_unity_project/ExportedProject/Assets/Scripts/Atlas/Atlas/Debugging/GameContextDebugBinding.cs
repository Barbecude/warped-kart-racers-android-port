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

namespace Atlas.Debugging
{
	public class GameContextDebugBinding
	{
		private DebugMenu _debugMenu;
		private GameContextBase _gameContextBase;
		private Network _network;
		private ServicesManager _servicesManager;
		private ActorManager _actorManager;
		private KartManager _kartManager;
		private AtlasStats _atlasStats;
		private UsableManager _usableManager;
		private int _usableInfoPanelID;
		private int _usableInfoLabelID;
		private Pref _usableForceIndex;
		private Pref _usableUnlimited;
		private Pref _usableSpamSpawnMode;
		private Pref _usableSpamHitMode;
		private Pref _usableShowInfo;
		private StringBuilder _usableInfoText;
		private int _kartInfoPanelID;
		private int _kartInfoLabelID;
		private Pref _kartShowInfo;
		private Pref _kartPlayerToAi;
		private Pref _kartDisableAutoAcceleration;
		private Pref _kartForceBreakPlayer;
		private Pref _kartForceBreakAi;
		private Pref _KartForceShowKartIndicator;
		private int _kartTeleportPlacementIndex;
		private bool _kartTeleportPlacementRespawn;
		private float _kartInvulnDuration;
		private static int _ownPlayerPlacementSelectionIndex;
		private StringBuilder _kartInfoText;
		private bool _hasPlayer;
		private bool _hasScreen;
		public int PlayerPlacementPositionOverride { get => default; }
		public void Init(GameContextBase gameContextBase, DependencyManager dependencies) { }
		public void DeInit() { }
		public void Update(float dt) { }
		private void UpdateUsableInfo() { }
		private void UpdateKartInfo() { }
		private void TeleportLocalKart(bool isBehind, int placement) { }
		private int GetDifferenceBehindKart(int placement) { return default; }
		private void UpdateKartFromToggles() { }
		private void UpdateUsableFromToggles() { }
		private void UpdateScreenFromToggles() { }
		private void OnUsableForcePickupSelected(int _) { }
		private void OnUsableForceAIPickupSelected(int _) { }
		private void OnUsableSimulateConsumeShieldHit(int _) { }
		private void OnUsableSimulateAllHitKartLocal(int _) { }
		private void OnUsableSimulateAllHitKartOther(int _) { }
		private void OnUsableSimulateAllHitKartRemote(int _) { }
		private void OnUsableSimulateHit(int _) { }
		private void OnUsableToggleUnlimited(int _, bool b) { }
		private void OnUsableToggleForceIndex(int _, int i) { }
		private void OnUsableShowInfo(int _, bool b) { }
		private void OnKartShowInfo(int _, bool b) { }
		private void OnKartTogglePlayerToAI(int _, bool b) { }
		private void OnToggleDisableAutoAcceleration(int _, bool b) { }
		private void OnToggleForceBreakPlayer(int _, bool b) { }
		private void OnToggleForceBreakAI(int _, bool b) { }
		private void OnToggleForceHideIndicator(int _, bool b) { }
		private GameContextPlayer GetPlayer() { return default; }
		private KartUsableManager GetKartUsableManager() { return default; }
		private bool CanChangePlayerUsables() { return default; }
		private bool CanHitPlayerUsables() { return default; }
		private void SwitchToOutroState() { }
	}
}
