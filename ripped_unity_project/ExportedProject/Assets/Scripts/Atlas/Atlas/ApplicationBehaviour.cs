using System;
using System.Collections;
using Atlas.Analytics;
using Atlas.Assets;
using Atlas.Audio;
using Atlas.Contexts;
using Atlas.Debugging;
using Atlas.Definitions;
using Atlas.FrontEnd;
using Atlas.Gameplay;
using Atlas.Gameplay.Kart;
using Atlas.Gameplay.Usables;
using Atlas.Input;
using Atlas.League;
using Atlas.Networking;
using Atlas.Rendering;
using Atlas.Save;
using Atlas.Settings;
using Atlas.Stats;
using Atlas.UI;
using Atlas.UI.Screens;
using Core.Actors;
using Core.Application;
using Core.Assets;
using Core.Cameras;
using Core.Containers;
using Core.Contexts;
using Core.Definitions;
using Core.Input;
using Core.Localisation;
using Core.Services;
using DG.Tweening;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace Atlas
{
	public class ApplicationBehaviour : MonoBehaviour
	{
		public const string StartGameContextIdEditorPref = "StartInGameContext";
		public const string StartGameContextMapIdEditorPref = "StartInGameContextMapId";
		public const string StartGameSkipEditorPref = "StartGameSkip";

		private const int MaxTweens = 1000;
		private const int MaxSequences = 200;

		private AtlasBuildInfo _buildInfo;
		private string _photonAppVersion;
		private DependencyManager _dependencyManager;
		private bool _initialised;
		private UpdateParams _updateParams;
		private LogHandler _logHandler;
		private ServicesManager _servicesManager;
		private AtlasStats _atlasStats;
		private SaveManager _saveManager;
		private AchievementManager _achievementsManager;
		private DailyChallengeManager _dailyChallengeManager;
		private CoroutineRunner _coroutineRunner;
		private AtlasQualitySettings _atlasQualitySettings;
		private AtlasDefinitions _atlasDefinitions;
		private AssetManager _assetManager;
		private CameraManager _cameraManager;
		private PostProcessingManager _postProcessingManager;
		private AtlasCameras _atlasCameras;
		private ContextManager _contextManager;
		private PoolManager _poolManager;
		private AtlasPoolCreator _atlasPoolCreator;
		private ActorManager _actorManager;
		private PooledActorManager _pooledActorManager;
		private UsableManager _usableManager;
		private AtlasUIManager _uiManager;
		private PauseManager _pauseManager;
		private TransitionManager _transitionManager;
		private HostMigrationTransitionManager _hostMigrationTransitionManager;
		private TopBarManager _topBarManager;
		private ContextManagerTransitions _contextManagerTransitions;
		private Atlas.Networking.Network _network;
		private Atlas.Networking.NetworkIdentifiers _networkIdentifiers;
		private MPErrorManager _mpErrorManager;
		private KartCompositeFactory _kartCompositeFactory;
		private KartInputManager _kartInputManager;
		private AtlasAudioManager _audioManager;
		private MusicManager _musicManager;
		private UIAudio _uiAudio;
		private VotingManager _votingManager;
		private LocalisationManager _localisationManager;
		private UnlockManager _unlockManager;
		private AtlasShaders _atlasShaders;
		private ToolTipManager _toolTipManager;
		private MessageBoxManager _messageBoxManager;
		private NotificationBoxManager _notificationBoxManager;
		private InputManager _inputManager;
		private FTUEManager _FTUEManager;
		private MatchMakingManager _matchMakingManager;
		private SeasonsManager _seasonsManager;
		private AtlasAnalyticsManager _analyticsManager;
		private ToastManager _toastManager;
		private LeagueManager _leagueManager;
		private LeagueModeUIManager _leagueModeUIManager;
		private LeagueStarsBoxManager _leagueStarsBoxManager;

		private bool _deInitHasBegun;
		private bool _rebootHasBegun;
		private bool _memWarningSent;

		public bool IsRebooting => _rebootHasBegun;

		public bool IsInitialised => _initialised;

		private IEnumerator Start()
		{
			Debug.unityLogger.logEnabled = false;
			Application.SetStackTraceLogType(LogType.Error, StackTraceLogType.ScriptOnly);
			Application.SetStackTraceLogType(LogType.Assert, StackTraceLogType.ScriptOnly);
			Application.SetStackTraceLogType(LogType.Warning, StackTraceLogType.None);
			Application.SetStackTraceLogType(LogType.Log, StackTraceLogType.None);
			Application.SetStackTraceLogType(LogType.Exception, StackTraceLogType.ScriptOnly);

			yield return Init();
			yield return StartGame();
		}

		private IEnumerator Init()
		{
			Application.lowMemory += DidReceiveMemoryWarning;
			InitialiseBuildInfo();

			_logHandler = new LogHandler();
			_logHandler.Init();

			_updateParams = new UpdateParams();
			_updateParams.Set();

			CreateAndRegisterDependencies();
			yield return InitSystems();

			_initialised = true;
		}

		private void InitialiseBuildInfo()
		{
			_buildInfo = AtlasBuildInfo.Current;
		}

		private void CreateAndRegisterDependencies()
		{
			_dependencyManager = new DependencyManager();

			_servicesManager = new ServicesManager();
			_coroutineRunner = new CoroutineRunner();
			_atlasQualitySettings = new AtlasQualitySettings();
			_atlasDefinitions = new AtlasDefinitions();
			_assetManager = new AssetManager();
			_cameraManager = new CameraManager();
			_postProcessingManager = new PostProcessingManager();
			_atlasCameras = new AtlasCameras();
			_contextManager = new ContextManager();
			_poolManager = new PoolManager();
			_atlasPoolCreator = new AtlasPoolCreator();
			_actorManager = new ActorManager();
			_pooledActorManager = new PooledActorManager();
			_usableManager = new UsableManager();
			_uiManager = new AtlasUIManager();
			_pauseManager = new PauseManager();
			_transitionManager = new TransitionManager();
			_hostMigrationTransitionManager = new HostMigrationTransitionManager();
			_topBarManager = new TopBarManager();
			_contextManagerTransitions = new ContextManagerTransitions();
			_network = new Atlas.Networking.Network();
			_networkIdentifiers = new Atlas.Networking.NetworkIdentifiers();
			_mpErrorManager = new MPErrorManager();
			_kartCompositeFactory = new KartCompositeFactory();
			_kartInputManager = new KartInputManager();
			_audioManager = new AtlasAudioManager();
			_musicManager = new MusicManager();
			_uiAudio = new UIAudio();
			_votingManager = new VotingManager();
			_localisationManager = new LocalisationManager();
			_saveManager = new SaveManager();
			_atlasStats = new AtlasStats();
			_achievementsManager = new AchievementManager();
			_dailyChallengeManager = new DailyChallengeManager();
			_unlockManager = new UnlockManager();
			_atlasShaders = new AtlasShaders();
			_toolTipManager = new ToolTipManager();
			_messageBoxManager = new MessageBoxManager();
			_notificationBoxManager = new NotificationBoxManager();
			_inputManager = new InputManager();
			_FTUEManager = new FTUEManager();
			_matchMakingManager = new MatchMakingManager();
			_seasonsManager = new SeasonsManager();
			_analyticsManager = new AtlasAnalyticsManager();
			_toastManager = new ToastManager();
			_leagueManager = new LeagueManager();
			_leagueModeUIManager = new LeagueModeUIManager();
			_leagueStarsBoxManager = new LeagueStarsBoxManager();

			_dependencyManager.AddDependency(this);
			_dependencyManager.AddDependency(_buildInfo);
			_dependencyManager.AddDependency(_servicesManager);
			_dependencyManager.AddDependency(_coroutineRunner);
			_dependencyManager.AddDependency(_atlasQualitySettings);
			_dependencyManager.AddDependency(_atlasDefinitions);
			_dependencyManager.AddDependency(_assetManager);
			_dependencyManager.AddDependency(_cameraManager);
			_dependencyManager.AddDependency(_postProcessingManager);
			_dependencyManager.AddDependency(_atlasCameras);
			_dependencyManager.AddDependency(_contextManager);
			_dependencyManager.AddDependency(_poolManager);
			_dependencyManager.AddDependency(_atlasPoolCreator);
			_dependencyManager.AddDependency(_actorManager);
			_dependencyManager.AddDependency(_pooledActorManager);
			_dependencyManager.AddDependency(_usableManager);
			_dependencyManager.AddDependency(_uiManager);
			_dependencyManager.AddDependency(_pauseManager);
			_dependencyManager.AddDependency(_transitionManager);
			_dependencyManager.AddDependency(_hostMigrationTransitionManager);
			_dependencyManager.AddDependency(_topBarManager);
			_dependencyManager.AddDependency(_contextManagerTransitions);
			_dependencyManager.AddDependency(_network);
			_dependencyManager.AddDependency(_networkIdentifiers);
			_dependencyManager.AddDependency(_mpErrorManager);
			_dependencyManager.AddDependency(_kartCompositeFactory);
			_dependencyManager.AddDependency(_kartInputManager);
			_dependencyManager.AddDependency(_audioManager);
			_dependencyManager.AddDependency(_musicManager);
			_dependencyManager.AddDependency(_uiAudio);
			_dependencyManager.AddDependency(_votingManager);
			_dependencyManager.AddDependency(_localisationManager);
			_dependencyManager.AddDependency(_saveManager);
			_dependencyManager.AddDependency(_atlasStats);
			_dependencyManager.AddDependency(_achievementsManager);
			_dependencyManager.AddDependency(_dailyChallengeManager);
			_dependencyManager.AddDependency(_unlockManager);
			_dependencyManager.AddDependency(_atlasShaders);
			_dependencyManager.AddDependency(_toolTipManager);
			_dependencyManager.AddDependency(_messageBoxManager);
			_dependencyManager.AddDependency(_notificationBoxManager);
			_dependencyManager.AddDependency(_inputManager);
			_dependencyManager.AddDependency(_FTUEManager);
			_dependencyManager.AddDependency(_matchMakingManager);
			_dependencyManager.AddDependency(_seasonsManager);
			_dependencyManager.AddDependency(_analyticsManager);
			_dependencyManager.AddDependency(_toastManager);
			_dependencyManager.AddDependency(_leagueManager);
			_dependencyManager.AddDependency(_leagueModeUIManager);
			_dependencyManager.AddDependency(_leagueStarsBoxManager);
		}

		private IEnumerator InitSystems()
		{
			_photonAppVersion = Application.version + "AtlasRelease";
			_servicesManager.Init(_photonAppVersion);
			_coroutineRunner.Init(transform);

			AtlasQualitySettings.BeginBoostLoadingBeforeSettingsLoaded();
			_assetManager.Init();
			AtlasAssetBucketUtils.CreateBuckets(_assetManager);

			LoadingBehaviour.RequestLoad(_buildInfo);
			yield return _atlasQualitySettings.Init();
			LoadingBehaviour.Show();

			Coroutine achRoutine = StartCoroutine(_achievementsManager.Init("StatAchievementConfig", _servicesManager));
			Coroutine shaderRoutine = StartCoroutine(_atlasShaders.Init());

			yield return _localisationManager.Init("LC_Keys", "LocalisationData", "efigs/FM_PrimaryFontMappings.asset");

			_assetManager.RequestAsset("P_UIManager", "Default");
			_atlasDefinitions.Init(_assetManager);
			Coroutine defRoutine = StartCoroutine(_atlasDefinitions.RequestLoad());

			while (!LoadingBehaviour.IsFullyVisible())
			{
				yield return null;
			}

			LoadingBehaviour.SetProgress(0.2f, LoadingBehaviour.ProgressStage.AppInit);

			InitCameraManager(_assetManager);
			_postProcessingManager.Init(_atlasQualitySettings);
			_contextManager.Init(AtlasContextCreator.CreateContexts(), _dependencyManager);
			_poolManager.Init();
			_atlasPoolCreator.Init(_poolManager, _assetManager);
			_actorManager.Init(AtlasActorGroupCreator.CreateGroups());

			yield return defRoutine;
			yield return shaderRoutine;
			yield return achRoutine;

			LoadingBehaviour.SetProgress(0.4f, LoadingBehaviour.ProgressStage.AppInit);

			_audioManager.Init();
			_musicManager.Init(_audioManager);
			_uiAudio.Init(_audioManager);
			_inputManager.Init("Glyph", _assetManager);
			AtlasInputManagerExtensions.AddGlyphMappingsFromDefinitions(_inputManager, _atlasDefinitions);
			_kartInputManager.Init(_inputManager);
			_atlasStats.Init(_atlasDefinitions, _servicesManager);
			_pooledActorManager.Init(_actorManager, _poolManager);
			_usableManager.Init(_atlasDefinitions, _pooledActorManager);
			_analyticsManager.Init(_buildInfo);
			_localisationManager.PostInit();

			_saveManager.Init(_servicesManager, _atlasDefinitions);
			Coroutine saveRoutine = StartCoroutine(_saveManager.LoadAll());
			_kartCompositeFactory.Init(_atlasDefinitions, _assetManager);

			LoadingBehaviour.SetProgress(0.55f, LoadingBehaviour.ProgressStage.AppInit);

			yield return _assetManager.WaitForAsset("P_UIManager");
			GameObject uiManagerPrefab = _assetManager.GetLoadedAsset<GameObject>("P_UIManager");
			InitUI(uiManagerPrefab);

			_pauseManager.Init(_uiManager, _audioManager);
			InitNetwork(_atlasDefinitions);
			_mpErrorManager.Init(_network, _messageBoxManager);
			_votingManager.Init(_network, _atlasDefinitions);
			_matchMakingManager.Init(_servicesManager, _network);

			LoadingBehaviour.SetProgress(0.7f, LoadingBehaviour.ProgressStage.AppInit);

			yield return _atlasCameras.WaitOnLoad();
			_atlasQualitySettings.SetCameraManager(_cameraManager);

			LoadingBehaviour.SetProgress(0.8f, LoadingBehaviour.ProgressStage.AppInit);

			yield return _dailyChallengeManager.Init("DailyChallengesConfig", _saveManager, _atlasDefinitions);

			LoadingBehaviour.SetProgress(0.85f, LoadingBehaviour.ProgressStage.AppInit);

			yield return saveRoutine;
			_audioManager.SetMusicVolume(_saveManager.SaveData.MusicVolume);
			_audioManager.SetSfxVolume(_saveManager.SaveData.SfxVolume);
			_audioManager.SetVOVolume(_saveManager.SaveData.VOVolume);

			LoadingBehaviour.SetProgress(0.95f, LoadingBehaviour.ProgressStage.AppInit);

			_unlockManager.Init(_saveManager, _atlasDefinitions);
			_seasonsManager.Init(_saveManager, _atlasDefinitions);
			_FTUEManager.Init(_saveManager, _atlasDefinitions);
			_leagueManager.Init(_saveManager, _atlasDefinitions, _servicesManager);

			StartMusic();

			DOTween.Init(false, true, LogBehaviour.ErrorsOnly).SetCapacity(MaxTweens, MaxSequences);
			LoadingBehaviour.SetProgress(1f, LoadingBehaviour.ProgressStage.AppInit);
		}

		private IEnumerator DeInit()
		{
			if (_deInitHasBegun)
			{
				yield break;
			}

			_deInitHasBegun = true;
			_initialised = false;

			Application.lowMemory -= DidReceiveMemoryWarning;

			yield return _contextManager.DeInit();
			DeInitUI();
			DeInitNetwork();
			DeInitCameras();
			_servicesManager.DeInit();
			StopHandlingLogs();
		}

		private void StopHandlingLogs()
		{
			if (_logHandler != null)
			{
				_logHandler.DeInit();
				_logHandler = null;
			}
		}

		private void StopLoggingToFile()
		{
		}

		private void Update()
		{
			if (!_initialised)
			{
				return;
			}

			_updateParams.Set();

			_network.EarlyUpdate();
			_servicesManager.EarlyUpdate();
			_actorManager.EarlyUpdate(_updateParams);

			_servicesManager.Update();
			_assetManager.Update();
			_saveManager.Update();
			_kartInputManager.Update(_updateParams);
			_actorManager.Update(_updateParams);
			_contextManager.Update(_updateParams);
			_network.Update();
			_uiManager.Update(_updateParams);
			_inputManager.Update();
			_transitionManager.Update(_updateParams);
			_hostMigrationTransitionManager.Update(_updateParams);
			_topBarManager.Update(_updateParams);
			_poolManager.Update();
			_toolTipManager.Update(_updateParams);
			_messageBoxManager.Update(_updateParams);
			_notificationBoxManager.Update(_updateParams);
			_toastManager.Update(_updateParams);
			_leagueStarsBoxManager.Update(_updateParams);
			_atlasStats.Update();
			_dailyChallengeManager.Update();
			_votingManager.Update();
			_matchMakingManager.Update();
			_contextManagerTransitions.Update(_updateParams);
			_mpErrorManager.Update();
			_analyticsManager.Update();
		}

		private void LateUpdate()
		{
			if (!_initialised)
			{
				return;
			}

			_contextManager.PreLateUpdate(_updateParams);
			_actorManager.LateUpdate(_updateParams);
			_contextManager.LateUpdate(_updateParams);
			_achievementsManager.SubmitAchievementProgress();
			_network.LateUpdate();
			_servicesManager.LateUpdate();
			_uiManager.LateUpdate(_updateParams);
			_pauseManager.LateUpdate();
		}

		private void FixedUpdate()
		{
			if (!_initialised)
			{
				return;
			}

			_actorManager.FixedUpdate(_updateParams);
			_contextManager.FixedUpdate(_updateParams);
		}

		private void OnApplicationFocus(bool hasFocus)
		{
		}

		private void OnApplicationPause(bool paused)
		{
			if (paused && _initialised)
			{
				StartCoroutine(OnApplicationPause());
			}
		}

		private IEnumerator OnApplicationPause()
		{
			yield return null;
		}

		private void OnApplicationQuit()
		{
			ApplicationClosed();
		}

		private void ApplicationClosed()
		{
			StopHandlingLogs();
		}

		private void DidReceiveMemoryWarning()
		{
			if (!_memWarningSent)
			{
				_memWarningSent = true;
				Resources.UnloadUnusedAssets();
			}
		}

		private IEnumerator StartGame()
		{
			FTUEStageDefinition ftueStage = _FTUEManager.GetCurrentStage();
			if (ftueStage != null && ftueStage.GameContextDefinition != null)
			{
				IContextInfo ftueInfo = ContextManagerExtensions.ContextToInfoBase(ftueStage.GameContextDefinition, ftueStage.EventDefinition);
				_contextManager.RequestContextChange(ftueStage.GameContextDefinition.ContextName, ftueInfo);
			}
			else
			{
				FrontEndContextInfo frontEndInfo = new FrontEndContextInfo();
				_contextManager.RequestContextChange(FrontEndContext.ContextName, frontEndInfo);
			}

			yield break;
		}

		public void RebootGame()
		{
			if (!_rebootHasBegun)
			{
				_rebootHasBegun = true;
				StartCoroutine(RebootGameCoroutine());
			}
		}

		private IEnumerator RebootGameCoroutine()
		{
			yield return DeInit();
			SceneManager.LoadScene("Application", LoadSceneMode.Single);
		}

		private void StartMusic()
		{
			FTUEStageDefinition stage = _FTUEManager.GetCurrentStage();
			if (stage != null && stage.GameContextDefinition != null)
			{
				_musicManager.PlayBaseLayerMusic(stage.EventDefinition.MapDefinitionRef);
			}
			else
			{
				_musicManager.PlayFrontEndMusic();
			}
		}

		private void InitCameraManager(AssetManager assetManager)
		{
			_cameraManager.Init(gameObject);
			_atlasCameras.Init(_cameraManager, assetManager);
			_atlasCameras.RequestCameraPrefabs();
		}

		private void DeInitCameras()
		{
			_atlasCameras.DeInit();
			_cameraManager.DeInit();
		}

		private void AddNetworkIdentifierDefinition<T>(AtlasDefinitions atlasDefinitions) where T : UnityEngine.Object
		{
			_networkIdentifiers.AddDefinitions(atlasDefinitions.GetDefinitions<T>());
		}

		private void InitNetwork(AtlasDefinitions atlasDefinitions)
		{
			_networkIdentifiers.Init();
			_network.Init(_servicesManager, _networkIdentifiers);
			AddNetworkIdentifierDefinition<AntennaDefinition>(atlasDefinitions);
			AddNetworkIdentifierDefinition<BoostDefinition>(atlasDefinitions);
			AddNetworkIdentifierDefinition<CharacterDefinition>(atlasDefinitions);
			AddNetworkIdentifierDefinition<GameContextDefinition>(atlasDefinitions);
			AddNetworkIdentifierDefinition<GliderDefinition>(atlasDefinitions);
			AddNetworkIdentifierDefinition<KartDefinition>(atlasDefinitions);
			AddNetworkIdentifierDefinition<MapDefinition>(atlasDefinitions);
			AddNetworkIdentifierDefinition<PickupTableDefinition>(atlasDefinitions);
			AddNetworkIdentifierDefinition<UsableDefinition>(atlasDefinitions);
			AddNetworkIdentifierDefinition<WheelsDefinition>(atlasDefinitions);
			_networkIdentifiers.FinishAddingAndGenerateKeys();
		}

		private void DeInitNetwork()
		{
			_network.DeInit();
			_networkIdentifiers.DeInit();
		}

		private void InitUI(GameObject uiManagerPrefab)
		{
			AtlasSharedScreenParams sharedParams = new AtlasSharedScreenParams(_dependencyManager);
			_uiManager.Init(uiManagerPrefab, transform, sharedParams);

			_uiManager.RegisterScreen<DebugOverlayScreen>("Screens/P_DebugOverlayScreen.prefab");
			_uiManager.RegisterScreen<ModeSelectScreen>("Screens/P_ModeSelectScreen.prefab");
			_uiManager.RegisterScreen<GameInProgressScreen>("Screens/GameContextScreens/GameInProgressScreen/P_GameInProgressScreen.prefab");
			_uiManager.RegisterScreen<GameInProgressScreen>("Screens/GameContextScreens/FTUE/GameInProgressScreenFTUE/P_GameInProgressScreenFTUE.prefab");
			_uiManager.RegisterScreen<GameIntroScreen>("Screens/GameContextScreens/GameIntroScreen/P_GameIntroScreen.prefab");
			_uiManager.RegisterScreen<GameOutroScreen>("Screens/GameContextScreens/GameOutroScreen/P_GameOutroScreen.prefab");
			_uiManager.RegisterScreen<MaskTransitionScreen>("Screens/MaskTransition/P_MaskTransitionScreen.prefab");
			_uiManager.RegisterScreen<MultiplayerLobbyScreen>("Screens/P_MultiplayerLobbyScreen.prefab");
			_uiManager.RegisterScreen<TopBarScreen>("Screens/P_TopBarScreen.prefab");
			_uiManager.RegisterScreen<MultiplayerModeSelectScreen>("Screens/MultiplayerModeSelectScreen/P_MultiplayerModeSelectScreen.prefab");
			_uiManager.RegisterScreen<KartSelectScreen>("Screens/KartSelect/P_KartSelectScreen.prefab");
			_uiManager.RegisterScreen<CharacterSelectScreen>("Screens/CharacterSelect/P_CharacterSelectScreen.prefab");
			_uiManager.RegisterScreen<VotingScreen>("Screens/VotingScreen/P_VotingScreen.prefab");
			_uiManager.RegisterScreen<ResultsScreen>("Screens/ResultsScreen/P_ResultsScreen.prefab");
			_uiManager.RegisterScreen<PostEventScreen>("Screens/PostEventScreen/P_PostEventScreen.prefab");
			_uiManager.RegisterScreen<PostArcadeScreen>("Screens/PostArcadeScreen/P_PostArcadeScreen.prefab");
			_uiManager.RegisterScreen<EndOfRoundScreen>("Screens/EndOfRoundScreen/P_EndOfRoundScreen.prefab");
			_uiManager.RegisterScreen<RewardScreen>("Screens/RewardScreen/P_RewardScreen.prefab");
			_uiManager.RegisterScreen<SingleplayerOverviewScreen>("Screens/Singleplayer/P_SingleplayerOverviewScreen.prefab");
			_uiManager.RegisterScreen<SingleplayerCampaignScreen>("Screens/Singleplayer/P_SingleplayerCampaignScreen.prefab");
			_uiManager.RegisterScreen<SingleplayerChapterScreen>("Screens/Singleplayer/P_SingleplayerChapterScreen.prefab");
			_uiManager.RegisterScreen<PlayWithFriendsCodeScreen>("Screens/PlayWithFriends/P_PlayWithFriendsCodeScreen.prefab");
			_uiManager.RegisterScreen<SettingsScreen>("Screens/SettingsScreen/P_SettingsScreen.prefab");
			_uiManager.RegisterScreen<CharacterRewardScreen>("Screens/CharacterRank/P_CharacterRankScreen.prefab");
			_uiManager.RegisterScreen<SeasonsScreen>("Screens/Seasons/P_SeasonsScreen.prefab");
			_uiManager.RegisterScreen<FreeplayScreen>("Screens/P_FreeplayScreen.prefab");
			_uiManager.RegisterScreen<PauseScreen>("Screens/P_PauseScreen.prefab");
			_uiManager.RegisterScreen<CreditsScreen>("Screens/CreditsScreen/P_CreditsScreen.prefab");
			_uiManager.RegisterScreen<SaveGameScreen>("Screens/SaveGameScreen/P_SaveGameScreen.prefab");
			_uiManager.RegisterScreen<MessageBoxScreen>("Screens/MessageBoxScreen/P_MessageBoxScreen.prefab");
			_uiManager.RegisterScreen<ToolTipScreen>("Screens/ToolTipScreen/P_ToolTipScreen.prefab");
			_uiManager.RegisterScreen<FreeplayDifficultyScreen>("Screens/FreeplayDifficultyScreen/P_FreeplayDifficultyScreen.prefab");
			_uiManager.RegisterScreen<LicenseScreen>("Screens/LicenseScreen/P_LicenseScreen.prefab");
			_uiManager.RegisterScreen<NotificationBoxScreen>("Screens/NotificationBoxScreen/P_NotificationBoxScreen.prefab");
			_uiManager.RegisterScreen<LobbySettingsScreen>("Screens/LobbySettingsScreen/P_LobbySettingsScreen.prefab");
			_uiManager.RegisterScreen<ArcadeModeSelectScreen>("Screens/P_ArcadeModeSelectScreen.prefab");
			_uiManager.RegisterScreen<ArcadeMapSelectScreen>("Screens/P_ArcadeMapSelectScreen.prefab");
			_uiManager.RegisterScreen<GameArcadeOutroScreen>("Screens/P_GameArcadeOutroScreen.prefab");
			_uiManager.RegisterScreen<LeagueWeeklyScheduleScreen>("Screens/P_LeagueWeeklyScheduleScreen.prefab");
			_uiManager.RegisterScreen<LeagueLeaderboardScreen>("Screens/P_LeagueLeaderboardScreen.prefab");
			_uiManager.RegisterScreen<LeaguePodiumScreen>("Screens/P_LeaguePodiumScreen.prefab");
			_uiManager.RegisterScreen<LeaguePromotionScreen>("Screens/P_LeaguePromotionScreen.prefab");
			_uiManager.RegisterScreen<LeagueStarsBoxScreen>("Screens/LeagueStarsBoxScreen/P_LeagueStarsBoxScreen.prefab");

			_transitionManager.Init(_uiManager, "GENERIC_LOADING");
			_hostMigrationTransitionManager.Init(_uiManager, "GENERIC_RECONNECTING");
			_contextManagerTransitions.Init(_contextManager, _transitionManager);
			_topBarManager.Init(_uiManager);
			_toolTipManager.Init(_uiManager);
			_messageBoxManager.Init(_uiManager);
			_notificationBoxManager.Init(_uiManager);
			_toastManager.Init(_uiManager);
			_leagueStarsBoxManager.Init(_uiManager);
		}

		private void DeInitUI()
		{
			_toastManager.DeInit();
			_leagueStarsBoxManager.DeInit();
			_notificationBoxManager.DeInit();
			_topBarManager.DeInit();
			_messageBoxManager.DeInit();
			_toolTipManager.DeInit();
			_contextManagerTransitions.DeInit();
			_transitionManager.DeInit();
			_hostMigrationTransitionManager.DeInit();
			_uiManager.DeInit();
		}
	}
}
