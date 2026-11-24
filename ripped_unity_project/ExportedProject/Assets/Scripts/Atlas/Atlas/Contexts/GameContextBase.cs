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

namespace Atlas.Contexts
{
	public abstract class GameContextBase : AtlasContext
	{
		public const string ContextName = "GameContextBase";
		protected AtlasStats _atlasStats;
		protected StateMachine _stateMachine;
		protected GameContextBaseIntroState _introState;
		protected GameContextBaseInProgressState _inProgressState;
		protected GameContextBaseOutroState _outroState;
		protected GameContextPlayerManager _gameContextPlayerManager;
		protected GameInProgressScreen _gameInProgressScreen;
		protected EventDefinition.EventDuration _durationType;
		private static readonly DefinitionID SkipPostEventFTUEStage;
		private DependencyManager _dependencyManager;
		private CameraManager _cameraManager;
		private AtlasUIManager _uiManager;
		private ContextManager _contextManager;
		private KartCompositeFactory _kartCompositeFactory;
		private GameContextDebugBinding _gameContextDebugBinding;
		private AssetManager _assetManager;
		private AtlasPoolCreator _poolCreator;
		private PoolManager _poolManager;
		private ActorManager _actorManager;
		private PooledActorManager _pooledActorManager;
		private UsableManager _usableManager;
		private AtlasDefinitions _atlasDefinitions;
		private Network _network;
		private AtlasQualitySettings _atlasQualitySettings;
		private TransitionManager _transitionManager;
		private PostProcessingManager _postProcessingManager;
		private AchievementManager _achievementManager;
		private DailyChallengeManager _dailyChallengeManager;
		private FTUEManager _FTUEManager;
		private LocalisationManager _localisationManager;
		private MessageBoxManager _messageBoxManager;
		private MPErrorManager _mpErrorManager;
		private SeasonsManager _seasonsManager;
		private MatchMakingManager _matchMakingManager;
		private ServicesManager _servicesManager;
		private ToastManager _toastManager;
		private KartManager _kartManager;
		private KartFollowCamera _kartFollowCamera;
		private MapSequenceController _sequenceController;
		private MusicManager _musicManager;
		private AtlasAudioManager _audioManager;
		private SaveManager _saveManager;
		private UnlockManager _unlockManager;
		private PauseManager _pauseManager;
		private InputManager _inputManager;
		private BaseLayerFTUEManager _baseLayerFtueManager;
		private AddressablesSceneLoader _sceneLoader;
		private NetworkTimelineManager _networkTimelineManager;
		private NetworkCarUpdater _networkCarUpdater;
		private NetworkResultsUpdater _networkResults;
		private NetworkMigrationUpdater _networkMigrationUpdater;
		private AtlasShaders _shaders;
		private AtlasAnalyticsManager _analyticsManager;
		private bool _isUserPauseAllowed;
		private GameContextInfoBase _currentContextInfo;
		private GameContextDefinition _currentContextDefinition;
		private MapBehaviour _mapBehaviour;
		private ToonShaderBehaviour _toonShaderBehaviour;
		private PickupManager _pickupManager;
		private InteractableManager _interactableManager;
		private LightWorld _lightWorld;
		private PostProcessingEffectBehaviour _postProcessingEffectBehaviour;
		private VfxHitVolumeManager _vfxHitVolumeManager;
		private PickupLimitsDefinition _pickupLimitsDefinition;
		private DateTime _startTime;
		private double _perfTrackingFrameTimeAcculator;
		private uint _perfTrackingFrameCount;
		private ArcadeEvent _arcadeEvent;
		private bool _disableEndConditions;
		private LeagueManager _leagueManager;
		private bool _trackChallenges;
		private bool _isNetworkSessionValid;
		private bool _earlyExit;
		private bool _restarting;
		private static readonly ProfilerMarker UpdateProfilerMarker;
		private static readonly ProfilerMarker FixedUpdateProfilerMarker;
		private static readonly ProfilerMarker LateUpdateProfilerMarker;
		public MapBehaviour MapBehaviour { get => default; set { } }
		public AtlasUIManager UIManager { get => default; }
		public KartManager KartManager { get => default; }
		public KartFollowCamera KartFollowCamera { get => default; }
		public MapSequenceController SequenceController { get => default; }
		public GameContextPlayerManager GameContextPlayerManager { get => default; }
		public GameInProgressScreen GameInProgressScreen { get => default; }
		public GameContextInfoBase CurrentContextInfo { get => default; }
		public GameContextDefinition CurrentGameContextDefinition { get => default; }
		public PickupManager PickupManager { get => default; }
		public ActorManager ActorManager { get => default; }
		public DependencyManager DependencyManager { get => default; }
		public TransitionManager TransitionManager { get => default; }
		public AtlasAudioManager AudioManager { get => default; }
		public PostProcessingEffectBehaviour PostProcessingEffectBehaviour { get => default; }
		public Network Network { get => default; }
		public VfxHitVolumeManager VfxHitVolumeManager { get => default; }
		public ArcadeEvent ArcadeEvent { get => default; }
		public bool DisableEndConditions { get => default; set { } }
		public int ScorePerHit { get => default; }
		public bool IsUserPauseAllowed { get => default; set { } }
		public virtual string GetContextName() { return default; }
		public virtual IEnumerator OnInit(IContextInfo contextInfo, DependencyManager dependencyManager) { return default; }
		public NetworkResultsUpdater GetResultUpdater() { return default; }
		public virtual IEnumerator OnPostInit(IContextInfo contextInfo, DependencyManager dependencyManager) { return default; }
		public virtual void OnUpdate(IUpdateParams updateParams) { }
		public virtual void OnPreLateUpdate(IUpdateParams updateParams) { }
		public virtual void OnLateUpdate(IUpdateParams updateParams) { }
		public virtual void OnFixedUpdate(IUpdateParams updateParams) { }
		public virtual IEnumerator OnDeInit() { return default; }
		public virtual void DeInitEditor() { }
		public void InitLightWorld() { }
		public void DeInitLightWorld() { }
		public void ExitContext() { }
		private void DispatchLeagueEventAnalytics(bool hasPlayedEventPreviously, int eventDayIndex, int previousPlayerPosition, int newPlayerPosition) { }
		public void InitPickupLimitsDefinition() { }
		private void UpdateLoadingProgress(float percentageComplete) { }
		private void SwitchToFrontEndContext(int challengesCompleted) { }
		private void OnDisconnect() { }
		private void EndOfTournamentRound() { }
		public bool IsUsingPoints() { return default; }
		public VFXBehaviour SpawnAoE(string vfxPoolName, AoEHitData data, Vector3 centre, KartComposite ownerKart, UsableDefinition fromUsable, KartComposite excludeKart) { return default; }
		public static bool TryGetLocalHumanPlayerFromCollider(Collider collider, out KartComposite localHumanPlayer) { localHumanPlayer = default; return default; }
		public static bool TryGetKartCompositeFromCollider(Collider collider, out KartComposite kartComposite) { kartComposite = default; return default; }
		public void StartTrackingChallenges() { }
		public void ResetChallenges() { }
		protected void MapBehaviourUpdate(IUpdateParams updateParams) { }
		private void RandomizeInvalidKartVisuals() { }
		private void InitPostProcessing(GameObject prefab) { }
		private void FindAndInitCoreBehaviours(MapDefinition mapDefinition) { }
		private void DeInitBehaviours() { }
		private void DeInitFollowCam() { }
		private void InitStates(EventDefinition eventDefinition) { }
		private void DeInitStates() { }
		private IEnumerator InitPools() { return default; }
		private void DeInitPools() { }
		private void InitAtlasPlayers(AtlasStats atlasStats) { }
		private void DeInitAtlasPlayers(AtlasStats atlasStats) { }
		private void HandleUsableHitPlayer(GameContextPlayer hitPlayer, GameContextPlayer throwingPlayer, UsableDefinition usable) { }
		private void OnQuitFromPause() { }
		private void OnRestartFromPause() { }
		private void UpdateFrameTiming(IUpdateParams updateParams) { }
		private void OnPartyInviteReceived(string lobbyCode) { }
		public void InProgressStateStartFirstUpdate() { }
		private void InitArcade() { }
		private void DeInitArcade(out int position) { position = default; }
		private void PostInitArcade() { }
		private void OnUsableUsed(GameContextPlayer player, UsableDefinition usable, int usesRemaining) { }
		public virtual void SetupGameContextScreen(GameInProgressScreen screen, GameInProgressScreenBehaviour screenBehaviour) { }
		public void PostSetupGameContextScreen(GameInProgressScreen screen, GameInProgressScreenBehaviour screenBehaviour) { }
	}
}
