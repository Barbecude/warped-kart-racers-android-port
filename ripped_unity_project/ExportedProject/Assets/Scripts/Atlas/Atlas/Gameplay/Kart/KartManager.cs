using System;
using System.Collections;
using System.Collections.Generic;
using Atlas.Audio;
using Atlas.Contexts;
using Atlas.Lighting;
using Atlas.Networking;
using Atlas.Rendering;
using Atlas.Settings;
using Core.Actors;
using Core.Application;
using Core.Cameras;
using Core.Definitions;
using Core.Networking;
using Unity.Collections;
using Unity.Jobs;
using Unity.Mathematics;
using UnityEngine;

namespace Atlas.Gameplay.Kart
{
	public class KartManager
	{
		private struct SideOnKartData
		{
			public float SideOnTime;
			public BaseVisualBehaviour.Side Side;
			public bool TriggerSneerAnim;
			public bool TriggerOvertakeAnims;
		}

		private List<KartComposite> _loadedKarts;
		private KartCompositeFactory _kartCompositeFactory;
		private GameContextBase _gameContextBase;
		private ActorManager _actorManager;
		private AtlasQualitySettings _atlasQualitySettings;
		private LightWorld _lightWorld;
		private CameraManager _cameraManager;
		private KartComposite _localPlayerKartComposite;
		private NetworkResultsUpdater _networkResultsUpdater;
		private AtlasAudioManager _audioManager;

		private readonly float _sideFrontCosFoV;
		private readonly float _sideBackCosFoV;
		private readonly float _halfFrontCosFoV;
		private readonly float _velocitySimThreshold;

		private SideOnKartData[][] _kartSideOnTimeRelationships;

		private const float _sideSneerTriggerTime = 2f;
		private const float _animSpeedThreshold = 24f;
		private const float _overtakingSpeedThreshold = 10f;
		private const float _animDistanceThreshold = 5f;
		private const int _kartNumAnimLimit = 2;

		private NativeArray<float4> _kartPositions;
		private NativeArray<float> _kartDistanceValues;
		private NativeArray<float> _kartToCameraDistanceValues;
		private KartPhysicsFixedUpdateAllJob _kartsFixedUpdateJob;
		private int _kartsFixedUpdatePrepared;

		public List<KartComposite> LoadedKarts => _loadedKarts;
		public KartComposite LocalPlayerKartComposite => _localPlayerKartComposite;
		public ref KartPhysicsFixedUpdateAllJob FixedUpdateAllJob => ref _kartsFixedUpdateJob;

		public void Init(KartCompositeFactory kartCompositeFactory, GameContextBase gameContextBase, LightWorld lightWorld, DependencyManager dependencyManager)
		{
			_kartCompositeFactory = kartCompositeFactory;
			_gameContextBase = gameContextBase;
			_lightWorld = lightWorld;
			_actorManager = dependencyManager.GetDependency<ActorManager>();
			_atlasQualitySettings = dependencyManager.GetDependency<AtlasQualitySettings>();
			_cameraManager = dependencyManager.GetDependency<CameraManager>();
			_audioManager = dependencyManager.GetDependency<AtlasAudioManager>();

			_loadedKarts = new List<KartComposite>();
			_kartPositions = new NativeArray<float4>(12, Allocator.Persistent);
			_kartDistanceValues = new NativeArray<float>(144, Allocator.Persistent);
			_kartToCameraDistanceValues = new NativeArray<float>(12, Allocator.Persistent);

			_kartsFixedUpdateJob.Init(12);
			_kartsFixedUpdatePrepared = 0;

			_atlasQualitySettings.RegisterOnSettingChanged(AtlasQualitySettings.VFXSetting, ApplyVFXSettings);
			_atlasQualitySettings.RegisterOnSettingChanged(AtlasQualitySettings.OutlinesSetting, ApplyOutlineSettings);
			_atlasQualitySettings.RegisterOnSettingChanged(AtlasQualitySettings.DebugSetting, ApplyDebugSettings);
		}

		public void JobRegistered(int kartIndex, bool run)
		{
			_kartsFixedUpdatePrepared++;
			_kartsFixedUpdateJob.Run[kartIndex] = run;
			if (_kartsFixedUpdatePrepared >= _loadedKarts.Count)
			{
				FixedUpdateKartJobRun();
				_kartsFixedUpdatePrepared = 0;
			}
		}

		public void FixedUpdateKartJobRun()
		{
			_kartsFixedUpdateJob.Schedule(_loadedKarts.Count, 1).Complete();
		}

		public void DeInit()
		{
			_kartsFixedUpdateJob.Dispose();
			if (_kartPositions.IsCreated)
			{
				_kartPositions.Dispose();
			}
			if (_kartDistanceValues.IsCreated)
			{
				_kartDistanceValues.Dispose();
			}
			if (_kartToCameraDistanceValues.IsCreated)
			{
				_kartToCameraDistanceValues.Dispose();
			}

			_atlasQualitySettings.UnRegisterOnSettingChanged(AtlasQualitySettings.VFXSetting, ApplyVFXSettings);
			_atlasQualitySettings.UnRegisterOnSettingChanged(AtlasQualitySettings.OutlinesSetting, ApplyOutlineSettings);
			_atlasQualitySettings.UnRegisterOnSettingChanged(AtlasQualitySettings.DebugSetting, ApplyDebugSettings);

			UnloadKarts();
			_kartCompositeFactory.OnDeInitContext();
			_kartCompositeFactory = null;
			_gameContextBase = null;
			_actorManager = null;
			_atlasQualitySettings = null;
			_localPlayerKartComposite = null;
			_lightWorld = null;
			_cameraManager = null;
			_networkResultsUpdater = null;
			_audioManager = null;
		}

		public void RequestLoadKarts(Transform[] spawnLocations)
		{
			_kartCompositeFactory.RequestLoadKarts(spawnLocations, _gameContextBase.GameContextInfo);
		}

		public void Update(IUpdateParams updateParams)
		{
			UpdateDistanceMatrix();
			UpdateContextualEvents(updateParams.DeltaTime);
		}

		public void PreLateUpdate(IUpdateParams updateParams)
		{
			UpdateKartCameraDistance();
		}

		public IEnumerator WaitOnLoad()
		{
			yield return _kartCompositeFactory.WaitOnLoad();
		}

		public void InitKarts(DefinitionID kartAIHandlingID, DefinitionID kartAIDefinitionID, bool enableKartObjectOnSpawn = true)
		{
			_kartCompositeFactory.CreateRequestedKartComposites(_loadedKarts, kartAIHandlingID, kartAIDefinitionID, _gameContextBase);
			for (int i = 0; i < _loadedKarts.Count; i++)
			{
				KartComposite kart = _loadedKarts[i];
				_actorManager.AddActor(kart);
				_lightWorld.AddLightWorldSample(kart);
				if (kart.NetworkPlayer.Type == NetworkPlayerType.Local)
				{
					_localPlayerKartComposite = kart;
				}
				kart.KartPhysicsRootObject.SetActive(enableKartObjectOnSpawn);
			}

			InitKartSideOnTimeRelationships();
			ApplyVFXSettings(AtlasQualitySettings.VFXSetting);
			ApplyOutlineSettings(AtlasQualitySettings.OutlinesSetting);
			ApplyDebugSettings(AtlasQualitySettings.DebugSetting);
		}

		public void PostInitKarts(NetworkResultsUpdater networkResultsUpdater, PostProcessingEffectBehaviour postProcessingEffectBehaviour)
		{
			_networkResultsUpdater = networkResultsUpdater;
			_loadedKarts.Sort((KartComposite x, KartComposite y) => x.NetworkPlayer.SyncId < y.NetworkPlayer.SyncId ? -1 : 1);

			for (int i = 0; i < _loadedKarts.Count; i++)
			{
				KartComposite kart = _loadedKarts[i];
				kart.PostInit(i, postProcessingEffectBehaviour);
				kart.StartKartAudio(kart.KartAudio.Engine);
				if (_networkResultsUpdater != null)
				{
					_networkResultsUpdater.AddOnStandingUpdated(kart.NetworkPlayer.SyncId, kart.OnFinishGameResultUpdated);
				}
			}

			UpdateDistanceMatrix();
			UpdateKartCameraDistance();
		}

		public float GetKartToKartDistance(KartComposite kart1, KartComposite kart2)
		{
			return GetKartToKartDistance(kart1.KartManagerIndex, kart2.KartManagerIndex);
		}

		public float GetKartToKartDistance(int kartManagerIndex1, int kartManagerIndex2)
		{
			if (kartManagerIndex1 >= 0 && kartManagerIndex1 < _loadedKarts.Count &&
				kartManagerIndex2 >= 0 && kartManagerIndex2 < _loadedKarts.Count)
			{
				return _kartDistanceValues[kartManagerIndex1 * 12 + kartManagerIndex2];
			}
			return -1f;
		}

		public void UnloadKarts()
		{
			if (_loadedKarts != null)
			{
				for (int i = 0; i < _loadedKarts.Count; i++)
				{
					KartComposite kart = _loadedKarts[i];
					if (kart != null)
					{
						if (_networkResultsUpdater != null)
						{
							_networkResultsUpdater.RemoveOnStandingUpdated(kart.NetworkPlayer.SyncId, kart.OnFinishGameResultUpdated);
						}
						_actorManager.RemoveActor(kart);
						_lightWorld.RemoveLightWorldSample(kart);
						kart.DeInit();
					}
				}
				_loadedKarts.Clear();
			}
			DeInitKartSideOnTimeRelationships();
		}

		public void FreezeAllKarts(bool freeze)
		{
			if (_loadedKarts == null)
			{
				return;
			}
			for (int i = 0; i < _loadedKarts.Count; i++)
			{
				KartComposite kart = _loadedKarts[i];
				if (kart != null && kart.KartPhysics != null && kart.KartPhysics.KartPhysicsInput != null)
				{
					kart.KartPhysics.KartPhysicsInput.SetGamePlayFreezeAndBrake(freeze);
				}
			}
		}

		public void FreezeKartByNetworkPlayer(bool freeze, NetworkPlayer networkPlayer)
		{
			if (_loadedKarts == null)
			{
				return;
			}
			for (int i = 0; i < _loadedKarts.Count; i++)
			{
				KartComposite kart = _loadedKarts[i];
				if (kart != null && kart.NetworkPlayer.SyncId == networkPlayer.SyncId &&
					kart.KartPhysics != null && kart.KartPhysics.KartPhysicsInput != null)
				{
					kart.KartPhysics.KartPhysicsInput.SetGamePlayFreezeAndBrake(freeze);
				}
			}
		}

		public void SetActiveKartVisuals(bool active)
		{
			if (_loadedKarts == null)
			{
				return;
			}
			for (int i = 0; i < _loadedKarts.Count; i++)
			{
				KartComposite kart = _loadedKarts[i];
				if (kart != null && kart.KartVisualComposite != null)
				{
					kart.KartVisualComposite.SetActive(active);
				}
			}
		}

		public void SetInputTypeByNetworkPlayer(KartInputType inputType, NetworkPlayer networkPlayer)
		{
			if (_loadedKarts == null)
			{
				return;
			}
			for (int i = 0; i < _loadedKarts.Count; i++)
			{
				KartComposite kart = _loadedKarts[i];
				if (kart != null && kart.NetworkPlayer.SyncId == networkPlayer.SyncId &&
					kart.KartPhysicsInput != null)
				{
					kart.KartPhysicsInput.InputType = inputType;
				}
			}
		}

		public static int GetLocalPlayerIndex(List<KartComposite> playerList)
		{
			if (playerList != null)
			{
				for (int i = 0; i < playerList.Count; i++)
				{
					if (playerList[i].NetworkPlayer.Type == NetworkPlayerType.Local)
					{
						return i;
					}
				}
			}
			return -1;
		}

		private void InitKartSideOnTimeRelationships()
		{
			int count = _loadedKarts.Count;
			_kartSideOnTimeRelationships = new SideOnKartData[count][];
			for (int i = 0; i < count; i++)
			{
				_kartSideOnTimeRelationships[i] = new SideOnKartData[count];
			}
		}

		private void DeInitKartSideOnTimeRelationships()
		{
			_kartSideOnTimeRelationships = null;
		}

		private void UpdateDistanceMatrix()
		{
			for (int i = 0; i < _loadedKarts.Count; i++)
			{
				Vector3 pos = _loadedKarts[i].KartPhysics.Rigidbody.position;
				_kartPositions[i] = new float4(pos.x, pos.y, pos.z, 0f);
			}

			KartDistancesJob job = new KartDistancesJob
			{
				KartPositions = _kartPositions,
				KartDistances = _kartDistanceValues
			};
			job.Schedule(_loadedKarts.Count, 1).Complete();
		}

		private void UpdateKartCameraDistance()
		{
			if (_cameraManager == null || _cameraManager.ActiveCamera == null)
			{
				return;
			}

			Vector3 camPos = _cameraManager.ActiveCamera.transform.position;
			KartToCameraDistanceJob job = new KartToCameraDistanceJob
			{
				KartPositions = _kartPositions,
				CameraPosition = new float4(camPos.x, camPos.y, camPos.z, 0f),
				KartToCameraDistances = _kartToCameraDistanceValues
			};
			job.Schedule(_loadedKarts.Count, 1).Complete();

			for (int i = 0; i < _loadedKarts.Count; i++)
			{
				_loadedKarts[i].SetKartToCameraDistance(_kartToCameraDistanceValues[i]);
			}
		}

		private void UpdateContextualEvents(float deltaTime)
		{
			if (_loadedKarts == null || _kartSideOnTimeRelationships == null)
			{
				return;
			}

			int count = _loadedKarts.Count;
			for (int i = 0; i < count; i++)
			{
				KartComposite kart = _loadedKarts[i];
				if (kart == null)
				{
					continue;
				}

				if (kart.KartPhysics.GetReadOnlyState().Body.CurrentSpeed < _animSpeedThreshold)
				{
					ResetAllKartSideOnTimePairings(ref _kartSideOnTimeRelationships[i]);
					continue;
				}

				Vector3 kartPos = kart.KartPhysics.Rigidbody.position;
				Vector3 kartFwd = kart.KartPhysics.Rigidbody.transform.forward;
				Vector3 kartRight = kart.KartPhysics.Rigidbody.transform.right;
				Vector3 kartVelNorm = kart.KartPhysics.Rigidbody.velocity.normalized;

				for (int j = 0; j < count; j++)
				{
					if (i == j)
					{
						continue;
					}

					KartComposite other = _loadedKarts[j];
					if (other == null)
					{
						continue;
					}

					float dist = GetKartToKartDistance(i, j);
					if (dist < 0f || dist > _animDistanceThreshold)
					{
						_kartSideOnTimeRelationships[i][j].SideOnTime = 0f;
						_kartSideOnTimeRelationships[i][j].TriggerSneerAnim = false;
						_kartSideOnTimeRelationships[i][j].TriggerOvertakeAnims = false;
						continue;
					}

					Vector3 otherPos = other.KartPhysics.Rigidbody.position;
					Vector3 toOther = (otherPos - kartPos).normalized;
					float fwdDot = Vector3.Dot(kartFwd, toOther);
					float rightDot = Vector3.Dot(kartRight, toOther);
					BaseVisualBehaviour.Side side = rightDot > 0f ? BaseVisualBehaviour.Side.Right : BaseVisualBehaviour.Side.Left;

					if (fwdDot < _sideFrontCosFoV && fwdDot > _sideBackCosFoV)
					{
						Vector3 otherVelNorm = other.KartPhysics.Rigidbody.velocity.normalized;
						if (Vector3.Dot(kartVelNorm, otherVelNorm) > _velocitySimThreshold)
						{
							_kartSideOnTimeRelationships[i][j].SideOnTime += deltaTime;
							_kartSideOnTimeRelationships[i][j].Side = side;
							if (_kartSideOnTimeRelationships[i][j].SideOnTime >= _sideSneerTriggerTime)
							{
								_kartSideOnTimeRelationships[i][j].TriggerSneerAnim = true;
							}
						}
					}
					else if (fwdDot < _halfFrontCosFoV && CanPlayOvertakeAnimations(kart, other, _kartSideOnTimeRelationships[i][j].SideOnTime))
					{
						_kartSideOnTimeRelationships[i][j].TriggerOvertakeAnims = true;
						_kartSideOnTimeRelationships[i][j].SideOnTime = 0f;
					}
					else
					{
						_kartSideOnTimeRelationships[i][j].SideOnTime = 0f;
						_kartSideOnTimeRelationships[i][j].TriggerSneerAnim = false;
						_kartSideOnTimeRelationships[i][j].TriggerOvertakeAnims = false;
					}
				}
			}

			int animCount = 0;
			for (int i = 0; i < count && animCount < _kartNumAnimLimit; i++)
			{
				KartComposite kart = _loadedKarts[i];
				if (kart == null)
				{
					continue;
				}

				for (int j = 0; j < count && animCount < _kartNumAnimLimit; j++)
				{
					if (i == j)
					{
						continue;
					}

					if (_kartSideOnTimeRelationships[i][j].TriggerOvertakeAnims)
					{
						KartComposite other = _loadedKarts[j];
						BaseVisualBehaviour.Side side = _kartSideOnTimeRelationships[i][j].Side;
						kart.KartVisualAnimation.TriggerOvertakingAnim(side);
						other.KartVisualAnimation.TriggerOvertakenAnim(side == BaseVisualBehaviour.Side.Left ? BaseVisualBehaviour.Side.Right : BaseVisualBehaviour.Side.Left);
						_kartSideOnTimeRelationships[i][j].TriggerOvertakeAnims = false;
						_kartSideOnTimeRelationships[i][j].TriggerSneerAnim = false;
						animCount++;
					}
					else if (_kartSideOnTimeRelationships[i][j].TriggerSneerAnim)
					{
						kart.KartVisualAnimation.TriggerSneerAnim(_kartSideOnTimeRelationships[i][j].Side);
						_kartSideOnTimeRelationships[i][j].TriggerSneerAnim = false;
						_kartSideOnTimeRelationships[i][j].SideOnTime = 0f;
						animCount++;
					}
				}
			}
		}

		private bool CanPlayOvertakeAnimations(KartComposite kart, KartComposite compareTo, float timeSpentBySide)
		{
			if (timeSpentBySide <= 0f)
			{
				return false;
			}

			float kartSpeed = kart.KartPhysics.GetReadOnlyState().Body.CurrentSpeed;
			float otherSpeed = compareTo.KartPhysics.GetReadOnlyState().Body.CurrentSpeed;
			return kartSpeed > _overtakingSpeedThreshold && kartSpeed > otherSpeed;
		}

		private void ResetAllKartSideOnTimePairings(ref SideOnKartData[] kartSideOnTimeRelationship)
		{
			if (kartSideOnTimeRelationship == null)
			{
				return;
			}
			for (int i = 0; i < kartSideOnTimeRelationship.Length; i++)
			{
				kartSideOnTimeRelationship[i].SideOnTime = 0f;
				kartSideOnTimeRelationship[i].TriggerSneerAnim = false;
				kartSideOnTimeRelationship[i].TriggerOvertakeAnims = false;
			}
		}

		private void ApplyVFXSettings(string settingName)
		{
			bool driftEnabled = true;
			bool kickupEnabled = true;
			bool tyreSmokeEnabled = true;
			_atlasQualitySettings.TryGetBoolParameter(AtlasQualitySettings.VFXSetting, AtlasQualitySettings.VFXDriftEnabledParam, ref driftEnabled);
			_atlasQualitySettings.TryGetBoolParameter(AtlasQualitySettings.VFXSetting, AtlasQualitySettings.VFXKickupEnabledParam, ref kickupEnabled);
			_atlasQualitySettings.TryGetBoolParameter(AtlasQualitySettings.VFXSetting, AtlasQualitySettings.VFXTyreSmokeEnabledParam, ref tyreSmokeEnabled);

			for (int i = 0; i < _loadedKarts.Count; i++)
			{
				KartComposite kart = _loadedKarts[i];
				if (kart != null && kart.KartVisualComposite != null)
				{
					kart.KartVisualComposite.SetVFXQualitySettings(driftEnabled, kickupEnabled, tyreSmokeEnabled);
				}
			}
		}

		private void ApplyOutlineSettings(string settingName)
		{
			float mipBias = 0f;
			_atlasQualitySettings.TryGetFloatParameter(AtlasQualitySettings.OutlinesSetting, AtlasQualitySettings.OutlinesBaseLayerMipBiasParam, ref mipBias);

			for (int i = 0; i < _loadedKarts.Count; i++)
			{
				KartComposite kart = _loadedKarts[i];
				if (kart != null && kart.KartVisualComposite != null)
				{
					kart.KartVisualComposite.SetOutlineMipBias(mipBias);
				}
			}
		}

		private void ApplyDebugSettings(string settingName)
		{
		}

		public KartManager()
		{
			_sideFrontCosFoV = Mathf.Cos(60f * Mathf.Deg2Rad);
			_sideBackCosFoV = Mathf.Cos(100f * Mathf.Deg2Rad);
			_halfFrontCosFoV = Mathf.Cos(90f * Mathf.Deg2Rad);
			_velocitySimThreshold = Mathf.Cos(50f * Mathf.Deg2Rad);
		}
	}
}
