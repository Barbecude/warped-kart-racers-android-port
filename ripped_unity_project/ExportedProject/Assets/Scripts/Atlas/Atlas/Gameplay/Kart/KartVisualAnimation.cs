using Atlas.Audio;
using Atlas.Gameplay.Usables;
using Atlas.Rendering;
using Core.Cameras;
using Core.GameLoop;
using Core.Networking;
using UnityEngine;

namespace Atlas.Gameplay.Kart
{
	public class KartVisualAnimation
	{
		public const string BoostSplatID = "BoostSplash";
		private const float ImpactTimeBetweenAnimations = 0.75f;
		private const float ImpactMinimumVisualForce = 0.3f;
		private const float ImpactMinimumForceToPlayAnimation = 15f;
		private const float ImpactMaximumForceToPlayAnimation = 25f;
		private const float IncomingCooldownTime = 4f;
		private const float SatelliteVFXTime = 2.5f;

		private KartComposite _kartComposite;
		private CameraManager _cameraManager;
		private KartAudio _kartAudio;
		private KartVisualComposite _kartVisualComposite;
		private KartVisualBehaviour _kartVisualBehaviour;
		private CharacterVisualBehaviour _characterVisualBehaviour;
		private KartPhysics _kartPhysics;
		private KartVisualSettingsDefinition _kartVisualSettingsDefinition;
		private PostProcessingEffectBehaviour _postProcessingEffectBehaviour;

		private bool _driftEnabled = true;
		private bool _kickupEnabled = true;
		private bool _tyreSmokeEnabled = true;
		private bool _forceGliderOn;
		private bool _forceBoostersOn;

		private DriftBoostType _currentDriftState;
		private bool _wasHitLastFrame;
		private bool _wasInvulnLastFrame;
		private Vector3 _kartVisualRootLocalPos;

		private float _timeSinceLastImpact;
		private float _incomingCooldownTimer;
		private float _sideSneerCooldownTimer;
		private float _overtakenCooldownTimer;
		private float _overtakingCooldownTimer;
		private float _triggerStartLineAnimationTimer;
		private float _satelliteHitVFXTimer;
		private float _laserWheelVFXTimer;
		private float _hopBoostSuccessVFXTimer;

		private bool _wasFlying;
		private float _landForce;
		private bool _wasBoosting;

		private byte _networkHopCounter;
		private byte _networkHopBoostCounter;
		private byte _networkRespawnCounter;
		private float _networkSteeringWheel;
		private bool _networkHitInvuln;

		public CharacterVisualBehaviour CharacterVisualBehaviour => _characterVisualBehaviour;
		public bool DriftEnabled { set => _driftEnabled = value; }
		public bool KickupEnabled { set => _kickupEnabled = value; }
		public bool TyreSmokeEnabled { set => _tyreSmokeEnabled = value; }
		public bool HitInvuln => _kartPhysics.HitInvuln || _networkHitInvuln;

		public void Init(KartComposite kartComposite, CameraManager cameraManager, KartVisualSettingsDefinition kartVisualSettingsDefinition, KartAudio kartAudio)
		{
			_kartComposite = kartComposite;
			_cameraManager = cameraManager;
			_kartVisualComposite = kartComposite.KartVisualComposite;
			_kartVisualBehaviour = _kartVisualComposite.KartVisualsBehaviour;
			_characterVisualBehaviour = _kartVisualComposite.CharacterVisualBehaviour;
			_kartPhysics = kartComposite.KartPhysics;
			_kartVisualSettingsDefinition = kartVisualSettingsDefinition;
			_kartVisualRootLocalPos = _kartVisualComposite.KartVisualsRoot.transform.localPosition;
			_timeSinceLastImpact = 0f;
			_kartPhysics.OnCollisionEnterDelegate += OnCollisionEnter;
			_kartPhysics.OnCollisionExitDelegate += OnCollisionExit;
			_wasFlying = false;
			_wasBoosting = false;
			_incomingCooldownTimer = 0f;
			_sideSneerCooldownTimer = 0f;
			_overtakenCooldownTimer = 0f;
			_overtakingCooldownTimer = 0f;
			_triggerStartLineAnimationTimer = 0f;
			_kartAudio = kartAudio;
		}

		public void PostInit(PostProcessingEffectBehaviour postProcessingEffectBehaviour)
		{
			_postProcessingEffectBehaviour = postProcessingEffectBehaviour;
		}

		public void DeInit()
		{
			if (_kartPhysics != null)
			{
				_kartPhysics.OnCollisionEnterDelegate -= OnCollisionEnter;
				_kartPhysics.OnCollisionExitDelegate -= OnCollisionExit;
			}
		}

		public void Update(IUpdateParams updateParams)
		{
			float dt = updateParams.DeltaTime;
			_timeSinceLastImpact += dt;
			if (_incomingCooldownTimer > 0f)
			{
				_incomingCooldownTimer -= dt;
			}
			if (_sideSneerCooldownTimer > 0f)
			{
				_sideSneerCooldownTimer -= dt;
			}
			if (_overtakenCooldownTimer > 0f)
			{
				_overtakenCooldownTimer -= dt;
			}
			if (_overtakingCooldownTimer > 0f)
			{
				_overtakingCooldownTimer -= dt;
			}

			NetworkVisualState netState = _kartComposite.NetworkVisualState;
			bool netHitFlip = netState.IsSet(NetworkVisualState.VisualStateFlags.HitFlip);
			bool netHitSpin = netState.IsSet(NetworkVisualState.VisualStateFlags.HitSpin);
			bool netBoosting = netState.IsSet(NetworkVisualState.VisualStateFlags.Boosting);
			bool netDrifting = netState.IsSet(NetworkVisualState.VisualStateFlags.Drifting);
			bool netGrounded = netState.IsSet(NetworkVisualState.VisualStateFlags.Grounded);
			bool netFlying = netState.IsSet(NetworkVisualState.VisualStateFlags.Flying);
			netState.IsSet(NetworkVisualState.VisualStateFlags.Gliding);
			_networkHitInvuln = netState.IsSet(NetworkVisualState.VisualStateFlags.HitInvuln);

			_networkSteeringWheel = Mathf.Lerp(_networkSteeringWheel, (float)netState.SteeringWheel / 127f, dt * 5f);

			bool netHopChanged = _networkHopCounter != netState.HopCounter;
			bool netHopBoostChanged = _networkHopBoostCounter != netState.HopBoostCounter;
			bool netRespawnChanged = _networkRespawnCounter != netState.RespawnCounter;

			_networkHopCounter = netState.HopCounter;
			_networkHopBoostCounter = netState.HopBoostCounter;
			_networkRespawnCounter = netState.RespawnCounter;

			if (netRespawnChanged)
			{
				Rigidbody rb = _kartComposite.KartRootBehaviour.Rigidbody;
				_kartComposite.InvokeRespawn(rb.position, rb.rotation, -1f, RespawnReason.Network);
			}

			DriftBoostType netDriftLevel;
			bool noNetDriftLevel = false;
			if (netState.IsSet(NetworkVisualState.VisualStateFlags.DriftLevel1))
			{
				netDriftLevel = DriftBoostType.DriftBoostLevel1;
			}
			else if (netState.IsSet(NetworkVisualState.VisualStateFlags.DriftLevel2))
			{
				netDriftLevel = DriftBoostType.DriftBoostLevel2;
			}
			else if (netState.IsSet(NetworkVisualState.VisualStateFlags.DriftLevel3))
			{
				netDriftLevel = DriftBoostType.DriftBoostLevel3;
			}
			else
			{
				netDriftLevel = DriftBoostType.None;
				noNetDriftLevel = true;
			}

			bool netDriftLeft = netState.IsSet(NetworkVisualState.VisualStateFlags.DriftLeft);

			bool isHitSpin = _kartPhysics.HandlingModifiersManager.IsHitSpin;
			bool isInvuln = _kartPhysics.HandlingModifiersManager.IsInvuln || _networkHitInvuln;
			SpinoutType spinoutType = _kartPhysics.HandlingModifiersManager.SpinoutType;

			KartPhysicsBodyState body = _kartPhysics.Body;
			KartPhysicsEvents events = _kartPhysics.Events;

			bool isHit = netHitSpin || isHitSpin;
			DriftBoostType boostType = body.BoostType != DriftBoostType.None ? body.BoostType : netDriftLevel;
			bool triggerHit = isHit && !_wasHitLastFrame;
			bool isFlipSpinout = spinoutType == SpinoutType.Flip;
			bool triggerHitFlip = netHitFlip || (isFlipSpinout && !netHitSpin);

			bool isBoosting = netBoosting || _kartPhysics.IsBoosting() || _forceBoostersOn;
			bool isDrifting = _kartPhysics.IsDrifting();
			bool isGrounded = _kartPhysics.IsWheelTouchingGround();
			bool isFlying = netFlying || _kartPhysics.IsFlying();

			bool hopped = netHopChanged || events.Hopped;
			bool hopBoosted = netHopBoostChanged || events.HopBoosted;

			bool landed = _wasFlying && !isFlying;
			if (landed)
			{
				float rawForce = body.LandingVelocity / -_kartVisualSettingsDefinition.MaxLandingVelocity;
				float clamped = float.IsNaN(rawForce) || rawForce > 1f ? 1f : rawForce;
				_landForce = float.IsNaN(clamped) || clamped < 0f ? 0f : clamped;
			}

			float steerInput = _networkSteeringWheel != 0f ? _networkSteeringWheel : _kartPhysics.SteerWheelDisplay;
			float maxSteer = _kartVisualSettingsDefinition.MaxSteeringWheelDisplay;
			float steerClamped = Mathf.Clamp(steerInput, -maxSteer, maxSteer);
			float steerIntensity = Mathf.Abs(steerClamped);

			KartPhysicsWheelState rearLeftWheel = _kartPhysics.Wheels.WheelStates[(int)KartPhysicsSetup.EWheel.RearLeft];
			KartPhysicsWheelState rearRightWheel = _kartPhysics.Wheels.WheelStates[(int)KartPhysicsSetup.EWheel.RearRight];
			float speed = body.Speed;

			if (_characterVisualBehaviour != null)
			{
				_characterVisualBehaviour.SetSpeed(_kartPhysics.Body.Speed);
				_characterVisualBehaviour.SetSteer(steerClamped);
				_characterVisualBehaviour.SetSteerIntensity(steerIntensity);
				_characterVisualBehaviour.SetDrift(_kartPhysics.DriftDisplay);
				if (landed)
				{
					_characterVisualBehaviour.SetLandForce(_landForce);
				}
				_characterVisualBehaviour.SetInAir(isFlying);
				_characterVisualBehaviour.SetBoosting(isBoosting, boostType);
				if (hopped && hopBoosted)
				{
					_characterVisualBehaviour.TriggerHopBoost();
				}
				if (hopped && !hopBoosted)
				{
					_characterVisualBehaviour.TriggerHop();
				}
				if (triggerHit)
				{
					_characterVisualBehaviour.TriggerGetHit(triggerHitFlip);
				}
				if (isInvuln != _wasInvulnLastFrame)
				{
					_characterVisualBehaviour.InvulnChanged(isInvuln);
				}
				if (_triggerStartLineAnimationTimer > 0f)
				{
					_triggerStartLineAnimationTimer -= dt;
					if (_triggerStartLineAnimationTimer <= 0f)
					{
						_characterVisualBehaviour.TriggerStartLineRandomAnimation();
					}
				}
			}

			if (_kartVisualBehaviour != null)
			{
				_kartVisualBehaviour.SetSpeed(_kartPhysics.Body.Speed);
				_kartVisualBehaviour.SetSteer(steerClamped);
				_kartVisualBehaviour.SetSteerIntensity(steerIntensity);
				_kartVisualBehaviour.SetDrift(_kartPhysics.DriftDisplay);
				if (landed)
				{
					_kartVisualBehaviour.SetLandForce(_landForce);
				}
				_kartVisualBehaviour.SetInAir(isFlying);
				_kartVisualBehaviour.SetBoosting(isBoosting, boostType);

				if (hopped && hopBoosted)
				{
					_kartVisualBehaviour.TriggerHopBoost();
					_kartVisualBehaviour.SetHopBoostSuccessVFX(true);
					_hopBoostSuccessVFXTimer = _kartVisualBehaviour.HopBoostSuccessDuration;
				}
				if (hopped && !hopBoosted)
				{
					_kartVisualBehaviour.TriggerHop();
				}
				if (triggerHit)
				{
					_kartVisualBehaviour.TriggerGetHit(triggerHitFlip);
				}

				DriftBoostType activeDriftLevel = noNetDriftLevel ? body.DriftBoostLevel : netDriftLevel;
				bool driftLeft = netDriftLeft || _kartPhysics.IsDriftStartLeftSide();
				DriftBoostType displayDrift = _driftEnabled ? activeDriftLevel : DriftBoostType.None;
				if (displayDrift != _currentDriftState)
				{
					_kartVisualBehaviour.SetDriftLevel(displayDrift, driftLeft);
					_currentDriftState = displayDrift;
				}

				float kickUpSpeed = (_kickupEnabled && !(isHit && triggerHitFlip)) ? speed : 0f;
				_kartVisualBehaviour.UpdateKickUp(rearLeftWheel.AestheticSurfaceType, rearRightWheel.AestheticSurfaceType, kickUpSpeed);

				bool showTyreSmoke = _tyreSmokeEnabled && (netDrifting || isDrifting) && (netGrounded || isGrounded);
				Color leftSmokeColor = _kartVisualSettingsDefinition.GetWheelSmokeTrailColor(rearLeftWheel.AestheticSurfaceType);
				Color rightSmokeColor = _kartVisualSettingsDefinition.GetWheelSmokeTrailColor(rearRightWheel.AestheticSurfaceType);
				_kartVisualBehaviour.UpdateTyreSmoke(showTyreSmoke, leftSmokeColor, rightSmokeColor);

				if (_satelliteHitVFXTimer > 0f)
				{
					_satelliteHitVFXTimer -= dt;
					if (_satelliteHitVFXTimer <= 0f)
					{
						_kartVisualBehaviour.TriggerSatelliteTargetVFX(false, false);
						_kartVisualBehaviour.TriggerSatelliteTargetVFX(false, true);
					}
				}

				if (_laserWheelVFXTimer > 0f)
				{
					_laserWheelVFXTimer -= dt;
					if (_laserWheelVFXTimer <= 0f)
					{
						_kartVisualBehaviour.SetLaserWheelVFX(false);
						_kartAudio.StopLaserCrackle();
					}
				}

				if (_hopBoostSuccessVFXTimer > 0f)
				{
					_hopBoostSuccessVFXTimer -= dt;
					if (_hopBoostSuccessVFXTimer <= 0f)
					{
						_kartVisualBehaviour.SetHopBoostSuccessVFX(false);
					}
				}
			}

			GliderVisualBehaviour glider = _kartVisualComposite.GliderVisualBehaviour;
			if (glider != null)
			{
				bool isGliding = body.IsGliding || _forceGliderOn;
				bool showGlider = isGliding || glider.ShouldGliderBeVisible;
				glider.gameObject.SetActive(showGlider);
				if (showGlider)
				{
					glider.SetGliding(isGliding);
					glider.SetSteer(steerClamped);
					glider.SetSteerIntensity(steerIntensity);
					if (_characterVisualBehaviour != null)
					{
						_characterVisualBehaviour.SetGliding(isGliding);
					}
					if (_kartVisualBehaviour != null)
					{
						_kartVisualBehaviour.SetGliding(isGliding);
					}
				}
			}

			if (_kartComposite.Player != null && _kartComposite.Player.IsLocalPlayer)
			{
				if (isBoosting && !_wasBoosting && !_kartComposite.Player.HasFinished)
				{
					if (_postProcessingEffectBehaviour != null)
					{
						_postProcessingEffectBehaviour.StartEffect("Boost", true);
					}
					_kartComposite.GameContext.PlayerManager.InvokePlaySplat(BoostSplatID, true);
				}
				else if (_wasBoosting && !isBoosting)
				{
					if (_postProcessingEffectBehaviour != null)
					{
						_postProcessingEffectBehaviour.EndEffect("Boost", false);
					}
					_kartComposite.GameContext.PlayerManager.InvokeStopSplat(BoostSplatID);
				}
			}

			_wasHitLastFrame = isHit;
			_wasInvulnLastFrame = isInvuln;
			_wasFlying = isFlying;
			_wasBoosting = isBoosting;
		}

		public void SetCharacterVisualBehaviour(CharacterVisualBehaviour characterVisualBehaviour)
		{
			_characterVisualBehaviour = characterVisualBehaviour;
		}

		public void SetKartVisualBehaviour(KartVisualBehaviour kartVisualBehaviour)
		{
			_kartVisualBehaviour = kartVisualBehaviour;
		}

		public void TriggerSatelliteHitVFX(bool isShield)
		{
			if (_satelliteHitVFXTimer <= 0f)
			{
				_kartVisualBehaviour.TriggerSatelliteTargetVFX(true, isShield);
				_satelliteHitVFXTimer = SatelliteVFXTime;
			}
		}

		public void TriggerLaserWheelSpark(bool on, float duration)
		{
			_kartVisualBehaviour.SetLaserWheelVFX(on);
			_laserWheelVFXTimer = duration;
		}

		public void LateUpdate(IUpdateParams updateParams)
		{
			if (_kartPhysics == null)
			{
				return;
			}

			if (_kartVisualComposite.KartVisualsRoot != null)
			{
				float yaw = _kartComposite.KartPhysics.VisualState.VisualSpinYaw;
				_kartVisualComposite.KartVisualsRoot.transform.localRotation = Quaternion.Euler(0f, yaw, 0f);
			}

			if (_characterVisualBehaviour != null)
			{
				Camera cam = _cameraManager.GetActiveCameraIncludingOverride();
				_characterVisualBehaviour.UpdateBlendShapesWithCamera(cam, _kartComposite.BlendShapeDistanceScale);
			}

			float targetRootY = _kartVisualRootLocalPos.y;
			if (_kartVisualComposite != null)
			{
				float suspensionDelta = _kartComposite.KartPhysics.Suspension.SuspensionOffset - _kartPhysics.ChassisHeightOffset;
				float clampedSusp = Mathf.Clamp(suspensionDelta, 0f, _kartVisualSettingsDefinition.MaxChassisSuspensionHeight);
				Vector3 curLocalPos = _kartVisualComposite.KartVisualsRoot.transform.localPosition;
				targetRootY = Mathf.Lerp(curLocalPos.y, _kartVisualRootLocalPos.y + clampedSusp, _kartVisualSettingsDefinition.ChassisSuspensionLerpRate);
				_kartVisualComposite.KartVisualsRoot.transform.localPosition = new Vector3(_kartVisualRootLocalPos.x, targetRootY, _kartVisualRootLocalPos.z);
			}

			if (_kartVisualBehaviour != null)
			{
				_kartVisualBehaviour.SetWheelSteerAngle(_kartPhysics.SteerAngle);
				_kartVisualBehaviour.SetWheelRotation(_kartPhysics.WheelRotation);

				float rootDeltaY = targetRootY - _kartVisualRootLocalPos.y;
				for (int i = 0; i < 4; i++)
				{
					float wheelHeight = _kartComposite.KartPhysics.Wheels.WheelStates[i].SuspensionHeight;
					float wheelYOffset = Mathf.Clamp(wheelHeight + 0.0f - rootDeltaY, 0f, _kartVisualSettingsDefinition.MaxWheelVerticalOffset);
					_kartVisualBehaviour.SetWheelVerticalOffset((KartPhysicsSetup.EWheel)i, wheelYOffset);
				}

				if (_kartPhysics != null)
				{
					_kartVisualBehaviour.SetSatellitePosition((Vector3)_kartPhysics.Body.Position);
				}
			}
		}

		public void OnHitOtherKartWithUsable(Transform hitTransform, UsableDefinition usableDefinition)
		{
			if (usableDefinition == null)
			{
				return;
			}

			_characterVisualBehaviour.TriggerCelebrateSmall();
			_kartVisualBehaviour.TriggerCelebrateSmall();

			if (usableDefinition.UsableType == UsableType.Turd)
			{
				_kartAudio.AudioManager.SpeakHitOtherKartTurd(_kartAudio);
			}
			else
			{
				_kartAudio.AudioManager.SpeakHitOtherKart(_kartAudio);
			}
		}

		public void OnHomingProjectileIncoming()
		{
			if (_incomingCooldownTimer > 0f)
			{
				return;
			}
			_characterVisualBehaviour.TriggerIncoming();
			_kartVisualBehaviour.TriggerIncoming();
			_incomingCooldownTimer = IncomingCooldownTime;
			_kartAudio.AudioManager.SpeakIncoming(_kartAudio);
		}

		public void FinishResultsUpdated(int finishingPosition)
		{
			SetFinishLineIndexParam(finishingPosition);
			_characterVisualBehaviour.TriggerFinishLineReaction();
			_kartVisualBehaviour.TriggerFinishLineReaction();
		}

		public void SetFinishLineIndexParam(int finishingPosition)
		{
			int paramId = GetFinishLineIndexParamIdFromFinishingPosition(finishingPosition);
			_characterVisualBehaviour.SetFinishLineIndexParam(paramId);
			_kartVisualBehaviour.SetFinishLineIndexParam(paramId);
		}

		public void TriggerRandomStartLineAnimation(float delay = 0f)
		{
			_triggerStartLineAnimationTimer = delay;
		}

		public void TriggerAutoDriveReaction()
		{
			_characterVisualBehaviour.TriggerAutoDriveReaction();
			_kartVisualBehaviour.TriggerAutoDriveReaction();
		}

		private static int GetFinishLineIndexParamIdFromFinishingPosition(int finishingPosition)
		{
			switch (finishingPosition)
			{
				case 1:
					return 1;
				case 2:
				case 3:
					return 2;
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
					return 3;
				case 0:
				case 10:
				case 11:
				case 12:
					return 4;
				default:
					return 3;
			}
		}

		public void PlaySideSneer(BaseVisualBehaviour.Side side)
		{
			if (_sideSneerCooldownTimer > 0f)
			{
				return;
			}
			_characterVisualBehaviour.TriggerSideSneer(side);
			_kartVisualBehaviour.TriggerSideSneer(side);
			_sideSneerCooldownTimer = _kartVisualSettingsDefinition.SideSneerCooldown;
			_kartAudio.AudioManager.SpeakSneer(_kartAudio);
		}

		public void PlayOvertaken()
		{
			if (_overtakenCooldownTimer > 0f)
			{
				return;
			}
			_characterVisualBehaviour.TriggerOvertaken();
			_kartVisualBehaviour.TriggerOvertaken();
			_overtakenCooldownTimer = _kartVisualSettingsDefinition.OvertakenCooldown;
		}

		public void PlayOvertaking()
		{
			if (_overtakingCooldownTimer > 0f)
			{
				return;
			}
			_characterVisualBehaviour.TriggerOvertaking();
			_kartVisualBehaviour.TriggerOvertaking();
			_overtakingCooldownTimer = _kartVisualSettingsDefinition.OvertakingCooldown;
		}

		public void UnEquipItem()
		{
			if (_characterVisualBehaviour != null)
			{
				_characterVisualBehaviour.UnEquipItem();
			}
			if (_kartVisualBehaviour != null)
			{
				_kartVisualBehaviour.UnEquipItem();
			}
		}

		public void PlayItemPickup(bool ignoreItemPickupParam)
		{
			if (_characterVisualBehaviour != null)
			{
				_characterVisualBehaviour.PlayItemPickup(ignoreItemPickupParam);
			}
			if (_kartVisualBehaviour != null)
			{
				_kartVisualBehaviour.PlayItemPickup(ignoreItemPickupParam);
			}
			_kartAudio.AudioManager.SpeakPickupUsable(_kartAudio);
		}

		public void PlayItemUse(UsableDefinition.UseType useAnimationType, float timeIntoAnim)
		{
			switch (useAnimationType)
			{
				case UsableDefinition.UseType.ThrowForward:
					PlayItemThrowForward(timeIntoAnim);
					break;
				case UsableDefinition.UseType.ThrowBackward:
					PlayItemThrowBackward(timeIntoAnim);
					break;
				case UsableDefinition.UseType.Activate:
					PlayItemActivate(timeIntoAnim);
					break;
				case UsableDefinition.UseType.Propane:
					PlayItemPropane();
					break;
				case UsableDefinition.UseType.TimeCheater:
					PlayItemTimeCheater();
					break;
			}
		}

		private void PlayItemTimeCheater()
		{
			if (_characterVisualBehaviour != null)
			{
				_characterVisualBehaviour.PlayItemTimeCheater();
			}
			if (_kartVisualBehaviour != null)
			{
				_kartVisualBehaviour.PlayItemTimeCheater();
			}
		}

		private void PlayItemPropane()
		{
			if (_characterVisualBehaviour != null)
			{
				_characterVisualBehaviour.PlayItemPropane();
			}
			if (_kartVisualBehaviour != null)
			{
				_kartVisualBehaviour.PlayItemPropane();
			}
			_kartAudio.AudioManager.SpeakBoostPad(_kartAudio, 0f);
		}

		private void PlayItemActivate(float timeIntoAnim)
		{
			if (_characterVisualBehaviour != null)
			{
				_characterVisualBehaviour.PlayItemActivate(timeIntoAnim);
			}
			if (_kartVisualBehaviour != null)
			{
				_kartVisualBehaviour.PlayItemActivate(timeIntoAnim);
			}
		}

		public void PlayItemThrowForward(float timeIntoAnim)
		{
			if (_characterVisualBehaviour != null)
			{
				_characterVisualBehaviour.PlayItemThrowForward(timeIntoAnim);
			}
			if (_kartVisualBehaviour != null)
			{
				_kartVisualBehaviour.PlayItemThrowForward(timeIntoAnim);
			}
			_kartAudio.AudioManager.SpeakThrowProjectile(_kartAudio);
		}

		public void PlayItemThrowBackward(float timeIntoAnim)
		{
			if (_characterVisualBehaviour != null)
			{
				_characterVisualBehaviour.PlayItemThrowBackward(timeIntoAnim);
			}
			if (_kartVisualBehaviour != null)
			{
				_kartVisualBehaviour.PlayItemThrowBackward(timeIntoAnim);
			}
			_kartAudio.AudioManager.SpeakThrowProjectile(_kartAudio);
		}

		public bool TryPlayAnimatorStateOverride(int stateHash, bool needsKartToSucceed = true, bool needsCharacterToSucceed = true)
		{
			bool success;
			if (_kartVisualComposite.KartVisualsBehaviour)
			{
				_kartVisualComposite.KartVisualsBehaviour.PlayAnimatorStateOverride(stateHash);
				success = true;
			}
			else
			{
				success = !needsKartToSucceed;
			}

			if (_kartVisualComposite.CharacterVisualBehaviour)
			{
				_kartVisualComposite.CharacterVisualBehaviour.PlayAnimatorStateOverride(stateHash);
				return success;
			}
			return success && !needsCharacterToSucceed;
		}

		public void SetBoostIntensityParameter(float boostIntensity)
		{
			if (_kartVisualBehaviour)
			{
				_kartVisualBehaviour.SetBoostIntensity(boostIntensity);
			}
			if (_characterVisualBehaviour)
			{
				_characterVisualBehaviour.SetBoostIntensity(boostIntensity);
			}
		}

		private void OnCollisionEnter(KartPhysicsCollisionInfo other)
		{
			if (_timeSinceLastImpact < ImpactTimeBetweenAnimations || other.Direction == KartPhysicsCollisionDirection.None)
			{
				return;
			}

			float impactSpeed = other.Collision.relativeVelocity.magnitude;
			if (impactSpeed < ImpactMinimumForceToPlayAnimation)
			{
				return;
			}

			float t = Mathf.Clamp01((impactSpeed - ImpactMinimumForceToPlayAnimation) / (ImpactMaximumForceToPlayAnimation - ImpactMinimumForceToPlayAnimation));
			float angle = 0f;
			switch (other.Direction)
			{
				case KartPhysicsCollisionDirection.Left:
					angle = -90f;
					break;
				case KartPhysicsCollisionDirection.Right:
					angle = 90f;
					break;
				case KartPhysicsCollisionDirection.Back:
					angle = -180f;
					break;
			}

			float force = t * (1f - ImpactMinimumVisualForce) + ImpactMinimumVisualForce;
			_kartVisualBehaviour.TriggerImpact(angle, force);
			_characterVisualBehaviour.TriggerImpact(angle, force);
			_timeSinceLastImpact = 0f;
		}

		private void OnCollisionExit(KartPhysicsCollisionInfo other)
		{
		}

		public void SetGlidingOverride(bool forceGliding)
		{
			_forceGliderOn = forceGliding;
		}

		public void SetBoosterOverride(bool boosterOverride)
		{
			_forceBoostersOn = boosterOverride;
		}
	}
}
