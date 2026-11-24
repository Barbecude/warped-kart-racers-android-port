using NetworkPlayer = Core.Networking.NetworkPlayer;
using System;
using Atlas.Arcade;
using Atlas.Audio;
using Atlas.Contexts;
using Atlas.Definitions;
using Atlas.Gameplay.Player;
using Atlas.Gameplay.Usables;
using Atlas.Lighting;
using Atlas.Networking;
using Atlas.Rendering;
using Atlas.UI;
using Core.Actors;
using Core.Application;
using Core.Networking;
using Core.Services;
using Unity.Mathematics;
using Unity.Profiling;
using UnityEngine;

namespace Atlas.Gameplay.Kart
{
	public class KartComposite : IActor, ICollidableOwner, ILightWorldSample
	{
		public enum InvokeRespawnReason
		{
			Debug = 0,
			FTUE = 1,
			WrongWay = 2,
			StuckAI = 3,
			RespawnTrigger = 4,
			OutOfBounds = 5,
			Replicator = 6,
			Takeover = 7
		}

		protected KartPhysics _kartPhysics;
		protected KartRootBehaviour _kartRootBehaviour;
		protected KartPhysicsInput _kartPhysicsInput;
		protected KartVisualComposite _kartVisualComposite;
		protected KartVisualAnimation _kartVisualAnimation;
		protected KartUsableManager _kartUsableManager;
		private KartVisualSettingsDefinition _kartVisualSettingsDefinition;
		protected NetworkPlayer _networkPlayer;
		protected KartAI _KartAI;
		protected KartAudio _kartAudio;
		protected GameContextBase _gameContext;
		protected Replicator _replicator;
		protected NetworkResultsUpdater _networkResultsUpdater;
		protected GameContextPlayer _gameContextPlayer;
		protected float _lapProgress;
		protected int _kartManagerIndex;
		private int _cachedFinishPosition;
		private int _spawnIndex;
		private bool _lastDriftButtonState;
		private KartVisualSettingsDefinition.KartShadingParams _currentKartShadingParams;
		private float _currentShadingBlend;

		private const float SinPeriod = 6.2831855f;
		private const int _networkHopBitOffset = 16;
		private const int _networkHopBoostBitOffset = 24;
		private const int _networkRespawnBitOffset = 32;
		private const int _networkSteeringWheelBitOffset = 40;

		private bool _enableRespawns;
		private float _kartToCameraDistance;
		private PortalVFXBehaviour _activePortal;
		private float _activePortalTime;

		private static readonly ProfilerMarker EarlyUpdateProfilerMarker;
		private static readonly ProfilerMarker FixedUpdateProfilerMarker;
		private static readonly ProfilerMarker PreFixedUpdateProfilerMarker;
		private static readonly ProfilerMarker PostFixedUpdateProfilerMarker;
		private static readonly ProfilerMarker LateUpdateProfilerMarker;
		private static readonly ProfilerMarker UpdateProfilerMarker;

		public GameObject KartPhysicsRootObject => _kartRootBehaviour != null ? _kartRootBehaviour.gameObject : null;
		public KartPhysics KartPhysics => _kartPhysics;
		public KartRootBehaviour KartRootBehaviour => _kartRootBehaviour;
		public KartPhysicsInput KartPhysicsInput => _kartPhysicsInput;
		public KartVisualComposite KartVisualComposite => _kartVisualComposite;
		public KartVisualAnimation KartVisualAnimation => _kartVisualAnimation;
		public KartUsableManager KartUsableManager => _kartUsableManager;
		public Replicator Replicator => _replicator;
		public NetworkPlayer NetworkPlayer => _networkPlayer;
		public NetworkVisualState NetworkVisualState => GetNetworkVisuals();
		public bool IsLocalPlayerInput => _kartPhysicsInput != null && _kartPhysicsInput.InputType == KartInputType.LocalPlayerInput;
		public KartAI KartAi => _KartAI;
		public KartAudio KartAudio => _kartAudio;
		public GameContextBase GameContext => _gameContext;
		public bool IsRespawning => _kartPhysics != null && _kartPhysics.HandlingModifiersManager != null && _kartPhysics.HandlingModifiersManager.IsRespawning;
		public int KartManagerIndex => _kartManagerIndex;
		public float CurrentShadingBlend => _currentShadingBlend;
		public float KartToCameraDistance => _kartToCameraDistance;
		public LightVolumeParams.CelShadingParams CurrentShadingParams => _currentKartShadingParams.ShadingParams;
		public bool IsAI => _KartAI != null;

		public int SpawnIndex
		{
			get => _spawnIndex;
			set => _spawnIndex = value;
		}

		public GameContextPlayer GameContextPlayer
		{
			get => _gameContextPlayer;
			set => _gameContextPlayer = value;
		}

		public bool IsFrontEndKart => _kartVisualComposite.IsFrontEndKart;

		public void Init(
			KartRootBehaviour kartPhysicsRootBehaviour,
			KartPhysicsInput kartPhysicsInput,
			KartPhysics kartPhysics,
			KartVisualComposite kartVisualComposite,
			KartVisualAnimation kartVisualAnimation,
			KartUsableManager kartUsableManager,
			NetworkPlayer? networkPlayer,
			KartAI kartAi,
			GameContextBase gameContext,
			KartAudio kartAudio,
			KartInputType inputType,
			KartVisualSettingsDefinition kartVisualSettingsDefinition)
		{
			_kartRootBehaviour = kartPhysicsRootBehaviour;
			_kartPhysicsInput = kartPhysicsInput;
			_kartPhysics = kartPhysics;
			_kartVisualComposite = kartVisualComposite;
			_kartVisualAnimation = kartVisualAnimation;
			_kartUsableManager = kartUsableManager;
			_KartAI = kartAi;
			_gameContext = gameContext;
			_kartAudio = kartAudio;
			_kartVisualSettingsDefinition = kartVisualSettingsDefinition;
			_cachedFinishPosition = -1;

			_kartRootBehaviour.SetOwner(this);
			_replicator = _kartRootBehaviour.GetComponent<Replicator>();

			if (networkPlayer.HasValue)
			{
				_networkPlayer = networkPlayer.Value;
				if (_replicator != null)
				{
					_replicator.SyncId = _networkPlayer.SyncId;
					_replicator.SyncOwner = _networkPlayer.Type == NetworkPlayer.NetworkPlayerType.Local || _networkPlayer.Type == NetworkPlayer.NetworkPlayerType.LocalAi;
				}
			}

			_kartAudio?.Init(this, _gameContext);
		}

		public void PostInit(int kartManagerIndex, PostProcessingEffectBehaviour postProcessingEffectBehaviour)
		{
			_kartManagerIndex = kartManagerIndex;
			_kartPhysics?.PostInit(kartManagerIndex);
			_kartVisualComposite?.PostInit(this, postProcessingEffectBehaviour);
			_kartVisualAnimation?.PostInit();
			_KartAI?.PostInit();
			if (_kartPhysics != null && _kartPhysics.HandlingModifiersManager != null)
			{
				_kartPhysics.HandlingModifiersManager.OnKartSpinOut += OnSpinOut;
			}
		}

		public void DeInit()
		{
			if (_kartPhysics != null && _kartPhysics.HandlingModifiersManager != null)
			{
				_kartPhysics.HandlingModifiersManager.OnKartSpinOut -= OnSpinOut;
			}
			_kartUsableManager?.DeInit();
			_KartAI?.DeInit();
			_kartAudio?.DeInit();
			_kartVisualAnimation?.DeInit();
			_kartVisualComposite?.DeInit();
			_kartPhysics?.DeInit();
			_kartPhysicsInput?.DeInit();

			if (_activePortal != null)
			{
				UnityEngine.Object.Destroy(_activePortal.gameObject);
				_activePortal = null;
			}

			if (_kartRootBehaviour != null)
			{
				UnityEngine.Object.Destroy(_kartRootBehaviour.gameObject);
				_kartRootBehaviour = null;
			}

			_kartPhysics = null;
			_kartPhysicsInput = null;
			_kartVisualComposite = null;
			_kartVisualAnimation = null;
			_kartUsableManager = null;
			_KartAI = null;
			_kartAudio = null;
			_gameContext = null;
			_replicator = null;
			_gameContextPlayer = null;
		}

		public void StartKartAudio(KartAudio.EngineType type)
		{
			_kartAudio?.StartEngine(type);
		}

		public void PreFixedUpdate(IUpdateParams updateParams)
		{
			using (PreFixedUpdateProfilerMarker.Auto())
			{
				if (updateParams.DeltaTime > 0.0001f)
				{
					_kartPhysics?.PreFixedUpdate(updateParams);
				}
			}
		}

		public void FixedUpdate(IUpdateParams updateParams)
		{
			using (FixedUpdateProfilerMarker.Auto())
			{
				if (updateParams.DeltaTime > 0.0001f)
				{
					_kartPhysics?.FixedUpdate(updateParams);
				}
			}
		}

		public void PostFixedUpdate(IUpdateParams updateParams)
		{
			using (PostFixedUpdateProfilerMarker.Auto())
			{
				if (updateParams.DeltaTime > 0.0001f)
				{
					_kartPhysics?.PostFixedUpdate(updateParams);
				}
			}
		}

		public void EarlyUpdate(IUpdateParams updateParams)
		{
			using (EarlyUpdateProfilerMarker.Auto())
			{
				_kartPhysics?.EarlyUpdate(updateParams);
			}
		}

		public void Update(IUpdateParams updateParams)
		{
			using (UpdateProfilerMarker.Auto())
			{
				_kartPhysicsInput?.Update(updateParams);
				_KartAI?.Update(updateParams);
				_kartPhysics?.Update(updateParams);
				_kartUsableManager?.Update(updateParams);
				_kartVisualComposite?.Update(updateParams);
				_kartVisualAnimation?.Update(updateParams);
				_kartAudio?.Update(updateParams);
				UpdateShading(updateParams.DeltaTime);
				PerformMapBoundsCheckUpdate();

				if (_activePortal != null && _activePortal.gameObject.activeSelf)
				{
					_activePortalTime += updateParams.DeltaTime;
				}
			}
		}

		public float4 GetLightWorldPosition()
		{
			if (_kartPhysics != null && _kartPhysics.Rigidbody != null)
			{
				Vector3 pos = _kartPhysics.Rigidbody.position;
				return new float4(pos.x, pos.y, pos.z, 1f);
			}
			return float4.zero;
		}

		private void UpdateShading(float time)
		{
			if (_kartVisualSettingsDefinition == null || _kartPhysics == null || _kartPhysics.HandlingModifiersManager == null)
			{
				return;
			}

			KartVisualSettingsDefinition.KartShadingParams targetParams = _kartVisualSettingsDefinition.DefaultShadingParams;
			bool hasActiveShading = false;

			if (_kartPhysics.HandlingModifiersManager.IsInvuln)
			{
				targetParams = _kartVisualSettingsDefinition.InvulnShadingParams;
				hasActiveShading = true;
			}
			else if (_kartPhysics.HandlingModifiersManager.IsSpinningOut)
			{
				targetParams = _kartVisualSettingsDefinition.SpinOutShadingParams;
				hasActiveShading = true;
			}

			_currentKartShadingParams = targetParams;
			if (hasActiveShading)
			{
				SetCurrentBlendAmount(time, targetParams.BlendTime);
			}
			else
			{
				_currentShadingBlend = 0f;
			}
		}

		private void SetCurrentBlendAmount(float time, float currentShadingBlendTime)
		{
			if (currentShadingBlendTime > 0f)
			{
				_currentShadingBlend = (Mathf.Sin(time * SinPeriod / currentShadingBlendTime) + 1f) * 0.5f;
			}
			else
			{
				_currentShadingBlend = 1f;
			}
		}

		private void PerformMapBoundsCheckUpdate()
		{
			if (!_enableRespawns || _gameContext == null || _kartPhysics == null || IsRespawning || IsFrontEndKart)
			{
				return;
			}

			if (_kartPhysicsInput != null && _kartPhysicsInput.InputType == KartInputType.RemotePlayerInput)
			{
				return;
			}

			Vector3 pos = _kartPhysics.Rigidbody.position;
			if (_gameContext.IsOutOfBounds(pos))
			{
				_gameContext.GetRespawnTransform(this, out Vector3 respawnPos, out Quaternion respawnRot);
				InvokeRespawn(respawnPos, respawnRot, InvokeRespawnReason.OutOfBounds);
			}
		}

		public void LateUpdate(IUpdateParams updateParams)
		{
			using (LateUpdateProfilerMarker.Auto())
			{
				_KartAI?.LateUpdate(updateParams);
				_kartVisualComposite?.LateUpdate(updateParams);
				_kartVisualAnimation?.LateUpdate(updateParams);
				_kartAudio?.LateUpdate(updateParams);
			}
		}

		public void EnableRespawns(bool b)
		{
			_enableRespawns = b;
		}

		public void InvokeRespawn(Vector3 position, Quaternion rotation, InvokeRespawnReason reason, float portalDelay = -1f)
		{
			if (!_enableRespawns && reason != InvokeRespawnReason.Debug && reason != InvokeRespawnReason.Takeover)
			{
				return;
			}

			if (_kartPhysics == null || _kartPhysics.HandlingModifiersManager == null)
			{
				return;
			}

			RemoveActiveUsables();

			_kartPhysics.HandlingModifiersManager.OnKartPortalEntered += StartTransition;
			_kartPhysics.HandlingModifiersManager.OnTransitionEnd += EndTransition;
			_kartPhysics.HandlingModifiersManager.OnKartPortalExit += StartPortalExit;
			_kartPhysics.HandlingModifiersManager.OnKartRespawnEnd += EndPortalExit;

			PortalVFXBehaviour portal = GetPortal();
			if (portal != null)
			{
				_kartAudio?.EnterPortal(portal.transform);
				portal.transform.position = _kartRootBehaviour.VisualRoot.position;
				portal.transform.rotation = _kartRootBehaviour.VisualRoot.rotation;
				portal.StartEnteringPortal(_kartVisualComposite, _kartUsableManager);
			}

			_kartPhysics.HandlingModifiersManager.StartRespawn(position, rotation, portalDelay);
		}

		public NetworkCar GetAsNetworkCar()
		{
			NetworkCar car = default;
			car.SyncId = _networkPlayer.SyncId;
			car.IsLocal = _networkPlayer.Type == NetworkPlayer.NetworkPlayerType.Local;
			return car;
		}

		public void SetToAiIfLocalAi(NetworkPlayer player)
		{
			_networkPlayer = player;
			_replicator.SyncId = _networkPlayer.SyncId;
			if (player.Type == NetworkPlayer.NetworkPlayerType.LocalAi)
			{
				_replicator.SyncOwner = true;
				if (_kartPhysicsInput.InputType == KartInputType.RemotePlayerInput)
				{
					_kartPhysics.Rigidbody.velocity = Vector3.zero;
					InvokeRespawn(_replicator.LastKnownPosition, _replicator.LastKnownRotation, InvokeRespawnReason.Takeover);
					_KartAI?.OnResetPosition();
				}
				_kartPhysicsInput.InputType = KartInputType.AiInput;
			}
			_replicator.ResetState();
		}

		public void SetKartInFrontEnd()
		{
			_kartPhysics.KartPhysicsInput.SetGamePlayFreezeAndBrake(true);
			_kartPhysics.HandlingModifiersManager.SetKinematic(true, KartKinematicChangeReason.FrontEnd);
			_kartVisualComposite.SetKartInFrontEnd();
			_replicator.enabled = false;
		}

		private void RemoveActiveUsables()
		{
			if (_kartPhysics.HandlingModifiersManager.HasValidShield)
			{
				_kartPhysics.HandlingModifiersManager.CurrentShieldUsable.TriggerDestroy();
			}
		}

		public bool OnUsableHit(KartTriggerEffectParameters triggerEffectParameters, UsableDefinition usable, KartComposite fromKart, Vector3 triggerPosition)
		{
			if (_kartPhysics == null)
			{
				return false;
			}

			if (_kartPhysics.HandlingModifiersManager.IsInvuln)
			{
				return false;
			}

			GameContextPlayer fromPlayer = fromKart != null ? fromKart.GameContextPlayer : null;
			if (!_kartPhysics.HandlingModifiersManager.HasValidShield)
			{
				_kartAudio.OnUsableHit();
				_kartPhysics.HandlingModifiersManager.SetKartTriggerEffect(triggerEffectParameters, triggerPosition);
				_gameContext.PlayerManager.FireOnUsableHitPlayer(_gameContextPlayer, fromPlayer, usable);
				return true;
			}

			_gameContext.PlayerManager.FireOnUsableHitShield(_gameContextPlayer, fromPlayer, usable, _kartPhysics.HandlingModifiersManager.CurrentShieldUsable.UsableDefinition);
			_kartPhysics.HandlingModifiersManager.ConsumeShieldHit();
			return false;
		}

		public void OnHitOtherKartWithUsable(Transform hitTransform, UsableDefinition usableDefinition)
		{
			_kartVisualAnimation?.TriggerHitOtherKartAnim(hitTransform);
			_kartAudio?.OnHitOtherKartWithUsable(usableDefinition);
		}

		public void OnUsableHoppedOver(UsableType usableType)
		{
			_gameContext.PlayerManager.FireOnUsableHoppedOver(_gameContextPlayer, usableType);
		}

		public void OnCollisionEnter(Collision collision)
		{
			_kartPhysics.OnCollisionEnter(collision);
		}

		public void OnCollisionStay(Collision collision)
		{
			_kartPhysics.OnCollisionStay(collision);
		}

		public void OnCollisionExit(Collision collision)
		{
			_kartPhysics.OnCollisionExit(collision);
		}

		public void OnTriggerEnter(Collider collider)
		{
			_kartPhysics.OnTriggerEnter(collider);
		}

		public void OnTriggerStay(Collider collider)
		{
			_kartPhysics.OnTriggerStay(collider);
		}

		public void OnTriggerExit(Collider collider)
		{
			_kartPhysics.OnTriggerExit(collider);
		}

		public void OnUseShield(ShieldUsable shieldUseable)
		{
			_kartPhysics.HandlingModifiersManager.OnUseShield(shieldUseable);
		}

		public void OnFinishGameResultUpdated(NetworkResultsStanding s)
		{
			if (s.SyncId != _networkPlayer.SyncId)
			{
				return;
			}

			int finishPos;
			if (_gameContext.ArcadeEvent != null)
			{
				int timeMs = _gameContext.ArcadeEvent.TimeMsInProgress();
				MedalType medal = _gameContext.ArcadeEvent.MetagameData.GetMedal(timeMs);
				finishPos = ArcadeEvent.GetFakeFinishPositionForMedal(medal);
			}
			else
			{
				finishPos = s.Position;
			}

			_cachedFinishPosition = finishPos;
			_kartVisualAnimation.FinishResultsUpdated(finishPos);
			_kartPhysics.ResetAllBoosts();
			RemoveActiveUsables();
		}

		public void OnUseBoost(float duration, float speedOffset, float boostRatio, bool useVfx = true)
		{
			_kartPhysics.ApplyUsableBoost(duration, speedOffset, boostRatio, useVfx);
		}

		public void OnSpinOut()
		{
			_kartVisualAnimation?.TriggerSpinOutAnim();
		}

		public void ClearSpeedLimitEffects()
		{
			_kartPhysics?.HandlingModifiersManager?.ClearSpeedLimitEffects();
		}

		public void SetNetworkVisuals(NetworkVisualState visuals)
		{
			if (_replicator != null)
			{
				_replicator.NetworkVisualState = visuals;
			}
		}

		public void SetKartToCameraDistance(float distance)
		{
			_kartToCameraDistance = distance;
		}

		private PortalVFXBehaviour GetPortal()
		{
			if (_activePortal == null)
			{
				_activePortal = _gameContext.SpawnObject<PortalVFXBehaviour>("PortalVFXBehaviour");
			}
			else
			{
				_activePortal.Reset();
			}
			_activePortalTime = 0f;
			return _activePortal;
		}

		private NetworkVisualState GetNetworkVisuals()
		{
			NetworkVisualState state = default;
			if (_replicator != null)
			{
				state = _replicator.NetworkVisualState;
			}
			return state;
		}

		private void StartTransition()
		{
			if (_kartPhysicsInput.InputType == KartInputType.LocalPlayerInput)
			{
				if (_gameContext.TransitionManager != null && _gameContext.TransitionManager.IsTransitionHidden)
				{
					_gameContext.TransitionManager.StartTransitionSequence(TransitionType.Respawn);
				}
			}

			_kartVisualComposite.SetVisualRootActive(false);
			_kartPhysics.HandlingModifiersManager.OnKartPortalEntered -= StartTransition;
		}

		private void EndTransition()
		{
			if (_gameContext.TransitionManager != null)
			{
				_gameContext.TransitionManager.EndTransitionSequence(TransitionType.Respawn);
			}
			_kartPhysics.HandlingModifiersManager.OnTransitionEnd -= EndTransition;
		}

		private void StartPortalExit()
		{
			_kartVisualComposite.SetVisualRootActive(true);
			PortalVFXBehaviour portal = GetPortal();
			if (portal != null)
			{
				_kartAudio.ExitPortal(portal.transform);
				portal.transform.position = _kartRootBehaviour.VisualRoot.position;
				portal.transform.rotation = _kartRootBehaviour.VisualRoot.rotation;
				portal.StartExitingPortal(_kartVisualComposite, _kartUsableManager);
			}

			if (_kartUsableManager.HasUsableEquipped)
			{
				_kartVisualAnimation.PlayItemPickup(false);
			}

			if (_cachedFinishPosition > -1)
			{
				_kartVisualAnimation.SetFinishLineIndexParam(_cachedFinishPosition);
			}

			_kartPhysics.HandlingModifiersManager.OnKartPortalExit -= StartPortalExit;
		}

		private void EndPortalExit()
		{
			_kartPhysics.HandlingModifiersManager.OnKartRespawnEnd -= EndPortalExit;
			_KartAI?.OnResetPosition();

			if (_kartUsableManager != null && _kartUsableManager.HasUsableEquipped)
			{
				if (_kartUsableManager.CurHeldUsable is ShieldUsable shield)
				{
					shield.TriggerScale(false);
				}
			}
		}

		public KartComposite()
		{
			_enableRespawns = true;
			_kartToCameraDistance = -1f;
		}

		static KartComposite()
		{
			EarlyUpdateProfilerMarker = new ProfilerMarker("KartComposite.EarlyUpdate");
			FixedUpdateProfilerMarker = new ProfilerMarker("KartComposite.FixedUpdate");
			PreFixedUpdateProfilerMarker = new ProfilerMarker("KartComposite.PreFixedUpdate");
			PostFixedUpdateProfilerMarker = new ProfilerMarker("KartComposite.PostFixedUpdate");
			LateUpdateProfilerMarker = new ProfilerMarker("KartComposite.LateUpdate");
			UpdateProfilerMarker = new ProfilerMarker("KartComposite.Update");
		}
	}
}
