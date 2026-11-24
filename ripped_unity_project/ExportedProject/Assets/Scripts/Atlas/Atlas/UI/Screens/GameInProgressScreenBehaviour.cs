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

namespace Atlas.UI.Screens
{
	public class GameInProgressScreenBehaviour : AtlasUIScreenBehaviour
	{
		public enum UsableAnimation
		{
			AnimateOn = 0,
			AnimateOff = 1,
			ChangeValue = 2,
		}
		[SerializeField] private MiniLeaderboardBehaviour _miniLeaderboardBehaviour;
		[SerializeField] private TMP_Text _progressCounterText;
		[SerializeField] private int _progressCounterTextSize;
		[SerializeField] private Image _progressIconImage;
		[SerializeField] private GameObject _progressCounterRoot;
		[SerializeField] private GameObject timerRoot;
		[SerializeField] private TMP_Text timerText;
		[SerializeField] private GameObject pauseButtonRoot;
		[SerializeField] private UIAtlasButton pauseButton;
		[SerializeField] private RectTransform safeAreaRoot;
		[SerializeField] private ScreenSafeAreaScaler safeAreaScaler;
		[SerializeField] private SplatsBehaviour _splatsBehaviour;
		[SerializeField] private GameObject _onScreenStickRoot;
		[SerializeField] private OnScreenAtlasStick _onScreenStick;
		[SerializeField] private InputDependentBehaviour _onScreenStickInputDependentBehaviour;
		[SerializeField] private Sprite _onScreenStickBackgroundBase;
		[SerializeField] private Sprite _onScreenStickBackgroundDrifting;
		[SerializeField] private Sprite _onScreenStickBackgroundGliding;
		[SerializeField] private GameObject driftRoot;
		[SerializeField] private UIAtlasButton driftButton;
		[SerializeField] private Image driftButtonImage;
		[SerializeField] private float driftButtonTransitionSpeedScale;
		[SerializeField] private float driftButtonOffScale;
		[SerializeField] private float driftButtonOnScale;
		[SerializeField] private Color driftButtonOffColour;
		[SerializeField] private Color driftButtonOnColour;
		[SerializeField] private GameObject usableRoot;
		[SerializeField] private GameObject noUsableIndicator;
		[SerializeField] private UIAtlasButton usableButton;
		[SerializeField] private TMP_Text usableQuantityText;
		[SerializeField] private GameInProgressScreenBehaviour.UIUsableSpriteMapping[] usableSpriteMappings;
		[SerializeField] private Image usableIconMask;
		[SerializeField] private Image usableIconBottom;
		[SerializeField] private Image usableIconMiddle;
		[SerializeField] private Image usableIconTop;
		[SerializeField] private AnimationCurve usableShuffleIntervalCurve;
		[SerializeField] private float usableCallToActionDuration;
		[SerializeField] private float usableCallToActionMaxScale;
		[SerializeField] private float usableUsedAnimationDuration;
		[SerializeField] private float usableUsedAnimationMaxScale;
		[SerializeField] private Image weaponIndicatorRoot;
		[SerializeField] private float weaponIndicatorFadeMinAlpha;
		[SerializeField] private float weaponIndicatorFadeSpeed;
		[SerializeField] private WeaponIndicatorBehaviour[] weaponIndicatorArrowSheldons;
		[SerializeField] private WeaponIndicatorBehaviour[] weaponIndicatorArrowCulturePods;
		[SerializeField] private RectTransform kartIndicatorRoot;
		[SerializeField] private KartIndicatorBehaviour[] kartIndicators;
		[SerializeField] private LayerMask kartIndicatorRayCastLayers;
		[SerializeField] private float kartIndicatorRadiusRace;
		[SerializeField] private float kartIndicatorRadiusBattle;
		[SerializeField] private float kartIndicatorRefreshRate;
		[SerializeField] private float kartIndicatorFOV;
		[SerializeField] private float kartIndicatorWorldVerticalOffset;
		[SerializeField] private float kartIndicatorMinDistanceFilterRace;
		[SerializeField] private int raceModeMaxKartIndicators;
		[SerializeField] private int battleModeMaxKartIndicators;
		[SerializeField] private GameObject challengeProgressRoot;
		[SerializeField] private UIChallengeProgressBehaviourContainer _challengeProgressBehaviourContainer;
		[SerializeField] private GameObject frenzyRoot;
		[SerializeField] private TMP_Text frenzyMultiplierText;
		[SerializeField] private Sprite frenzyPanelInactiveSprite;
		[SerializeField] private Sprite frenzyPanelActiveSprite;
		[SerializeField] private float frenzyOnHitDuration;
		[SerializeField] private UISlantElement frenzyTimerPanel;
		[SerializeField] private AnimationCurve frenzyTimerScaleCurve;
		[SerializeField] private float frenzyPanicDurationFromEnd;
		[SerializeField] private GameObject frenzyVignetteRoot;
		[SerializeField] private Image[] frenzyVignetteSprites;
		[SerializeField] private AnimationCurve frenzyVignetteFadeCurve;
		[SerializeField] private Color frenzyVignetteBaseColor;
		[SerializeField] private GameObject wrongWayIndicatorRoot;
		[SerializeField] private MiniMapBehaviour _miniMapBehaviour;
		[SerializeField] private FTUEScreenBehaviour _ftueScreenBehaviour;
		[SerializeField] private UIArcadeInProgressBehaviour _arcadeInProgressBehaviour;
		private DisplayStyle _displayStyle;
		private int _shuffleTimer;
		private const int _shuffleIconCount = 3;
		private int _usableIconIndex;
		private bool _isFrenzyActive;
		private float _frenzyTimer;
		private float _frenzyDuration;
		private float _frenzyFadeDuration;
		private bool _isDriftButtonPressed;
		private float _currentDriftButtonValue;
		private bool _forceInactiveButtons;
		private bool _stashedUsableButtonEnabledState;
		private bool _stashedDriftButtonEnabledState;
		private float _weaponIndicatorTimer;
		private bool _updateUsablesBasedOnCallbacks;
		public MiniLeaderboardBehaviour MiniLeaderboard { get => default; }
		public UIAtlasButton PauseButton { get => default; }
		public RectTransform SafeAreaRoot { get => default; }
		public ScreenSafeAreaScaler SafeAreaScaler { get => default; }
		public TMP_Text ProgressCounterText { get => default; }
		public int ProgressCounterTextSize { get => default; }
		public Image ProgressIconImage { get => default; }
		public GameObject ProgressCounterRoot { get => default; }
		public RectTransform KartIndicatorRoot { get => default; }
		public KartIndicatorBehaviour[] KartIndicators { get => default; }
		public LayerMask KartIndicatorRayCastLayers { get => default; }
		public float KartIndicatorRadiusBattle { get => default; }
		public float KartIndicatorRadiusRace { get => default; }
		public float KartIndicatorFOV { get => default; }
		public float KartIndicatorRefreshRate { get => default; }
		public float KartIndicatorWorldVerticalOffset { get => default; }
		public float KartIndicatorMinDistanceFilterRace { get => default; }
		public int BattleModeMaxKartIndicators { get => default; }
		public int RaceModeMaxKartIndicators { get => default; }
		public UIChallengeProgressBehaviourContainer ChallengeProgressBehaviourContainer { get => default; }
		public UIChallengeProgressBehaviour[] ChallengeProgressList { get => default; }
		public GameObject ChallengeProgressRoot { get => default; }
		public MiniMapBehaviour MiniMapBehaviour { get => default; }
		public FTUEScreenBehaviour FTUEScreenBehaviour { get => default; }
		public UIArcadeInProgressBehaviour ArcadeInProgressBehaviour { get => default; }
		public bool UpdateUsablesBasedOnCallbacks { set { } }
		public DisplayStyle DisplayStyle { get => default; }
		private int GetNextUsableIconIndex() { return default; }
		protected virtual void OnBeforeDestroyed() { }
		public void PlayRandomSplat(string id) { }
		public void PlaySplat(string id, bool loop) { }
		public void StopSplat(string id) { }
		public void SetDriftButtonPressed(bool isPressed) { }
		public void StashButtonInteractableStates() { }
		public void RestoreButtonInteractableStates() { }
		public void SetEnabledHUDElement(HUDElement element, bool active) { }
		public bool IsHUDElementActive(HUDElement element) { return default; }
		public void ResetTimerRootSortOrder() { }
		public void SetDisplayStyle(DisplayStyle style) { }
		public void Init() { }
		private void InitUsableIcons() { }
		private void ResetUsableIconPositions() { }
		private void UpdateUsableIcon(Image usableIcon, float dt) { }
		public void OnPlayerPickUpCancelledUsable() { }
		public void OnPlayerAttachedUsable(UsableType usableType, int quantity, bool playTween) { }
		public void OnPlayerUsedUsable(UsableType usableType, int quantity) { }
		public void OnPlayerDetachedUsable(bool immediate) { }
		public void SetUsableIconVisible(bool visible, int quantity, UsableType usableType) { }
		public void SetUsableQuantityText(int quantity) { }
		public Sprite GetUsableSprite(UsableType usableType) { return default; }
		public void OnUpdate(float dt) { }
		public void SetProgressCounter(string lapText) { }
		public void SetTimerSecondsRemaining(int totalSecs) { }
		public void UpdateFrenzy(float dt) { }
		public void UpdateFrenzyTimer() { }
		public void UpdateFrenzyVignette(float dt) { }
		public void SetFrenzy(bool active, int scoreMultiplier, float duration) { }
		public void AnimateUsables(UsableType usableType, int quantity, GameInProgressScreenBehaviour.UsableAnimation usableAnimation) { }
		private void UsablesAnimateOn(UsableType usableType, int quantity, bool playTween) { }
		private void UsablesChanged(UsableType usableType, int newQuantity) { }
		private void UsablesAnimateOff() { }
		private void UpdateDriftButtonSize(float dt) { }
		public void SetWeaponIndicatorActive(bool active) { }
		public void UpdateWeaponIndicator(float dt) { }
		public void SetWrongWayIndicator(bool active) { }
		public void UpdateOnScreenStickBackground(bool isDrifting, bool isGliding) { }
		public void SetInputEnabled(bool enabled) { }
		public void OnDestroy() { }
		protected virtual bool PlayTweensOnStart() { return default; }
	}
}
