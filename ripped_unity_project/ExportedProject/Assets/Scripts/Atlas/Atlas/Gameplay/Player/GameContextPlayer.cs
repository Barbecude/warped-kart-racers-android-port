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

namespace Atlas.Gameplay.Player
{
	public class GameContextPlayer : IActor
	{
		public const int TimeToSubtractFromFinalTimes = 4005;
		private KartComposite _kartComposite;
		private MapBehaviour _mapBehaviour;
		private GameContextPlayerManager _gameContextPlayerManager;
		private KartLoadout _kartLoadout;
		private int _lapsCompleted;
		private float2 _trackPolylineCoord;
		private int _playerPosition;
		private int _numWeaponHits;
		private int _raceEndTime;
		private NetworkSessionTime _lastWeaponHitTime;
		private bool _hasFinished;
		private bool _dnf;
		private bool _isFacingWrongWay;
		private bool _showWrongWayIndicator;
		private bool _hasKartIndicator;
		private string _displayName;
		private Sprite _headIcon;
		private Color _playerColor;
		private DefinitionID _lastHeldUsableID;
		private NetworkSessionTime _raceStartTime;
		private Network _network;
		private GameObject _autoDriveHighlight;
		public KartComposite KartComposite { get => default; }
		public int CurrentLap { get => default; }
		public float2 TrackPolylineCoord { get => default; }
		public bool IsLocalPlayer { get => default; }
		public bool IsHumanPlayer { get => default; }
		public bool IsFacingWrongWay { get => default; }
		public bool ShowWrongWayIndicator { get => default; }
		public DefinitionID LastHeldUsableId { get => default; }
		public List<PlacementHomingProjectile> PlacementProjectiles { get => default; }
		public List<ProximityHomingProjectile> ProximityProjectiles { get => default; }
		public NetworkSessionTime RaceStartTime { get => default; }
		public int PlayerPosition { get => default; }
		public int NumWeaponHits { get => default; }
		public NetworkSessionTime LastWeaponHitTime { get => default; }
		public bool HasFinished { get => default; }
		public bool Dnf { get => default; }
		public bool HasKartIndicator { get => default; set { } }
		public string DisplayName { get => default; set { } }
		public Sprite HeadIcon { get => default; set { } }
		public GameObject AutoDriveHighlight { get => default; set { } }
		public bool IsAutoDriveHighlightActive { get => default; }
		public Color PlayerColor { get => default; }
		public KartLoadout KartLoadout { get => default; }
		public int RaceEndTime { get => default; }
		public void Init(KartComposite kartComposite, KartLoadout kartLoadout, MapBehaviour mapBehaviour, GameContextPlayerManager gameContextPlayerManager, Network network, Color playerColor) { }
		public void DeInit() { }
		public void SetNumWeaponHitScore(int weaponHitScore, NetworkSessionTime timeStamp) { }
		public void AddNumWeaponHitScore(int addWeaponHitScore, NetworkSessionTime timeStamp) { }
		public void FixedUpdate(IUpdateParams updateParams) { }
		public void PreFixedUpdate(IUpdateParams updateParams) { }
		public void PostFixedUpdate(IUpdateParams updateParams) { }
		public void EarlyUpdate(IUpdateParams updateParams) { }
		public void Update(IUpdateParams updateParams) { }
		public void LateUpdate(IUpdateParams updateParams) { }
		public void UsablePickedUp(DefinitionID usableID) { }
		public void UsablePickedUpResponse(DefinitionID usableID) { }
		public float GetRaceProgress() { return default; }
		public void SetKartProgressToBeginningOfLap(int lap, bool afterHalfWayMark) { }
		public void OnFinishedGame(NetworkSessionTime finishTime) { }
		public void SetPlayerPosition(int position) { }
		public void SetStartTime(NetworkSessionTime now) { }
		public void OverrideLapPositionState(float2 trackCoords, int lapsCompleted, bool hasPassedHalfwayMark) { }
		private void UpdateRaceCoords() { }
	}
}
