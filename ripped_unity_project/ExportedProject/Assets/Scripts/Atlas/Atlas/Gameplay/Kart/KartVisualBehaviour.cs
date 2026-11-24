using NetworkPlayer = Core.Networking.NetworkPlayer;
using System;
using System.Collections.Generic;
using Core.Networking;
using UnityEngine;

namespace Atlas.Gameplay.Kart
{
	[Serializable]
	public struct DriftLevelsVFXList
	{
		public DriftBoostType DriftBoostType;
		public GameObject[] VfxDriftChargeLevelLeft;
		public GameObject[] VfxDriftChargeLevelRight;
	}

	[Serializable]
	public struct TyreSmokeVFX
	{
		public ParticleSystem Left;
		public ParticleSystem Right;
	}

	[Serializable]
	public struct KickUpVFX
	{
		public KickUpVFXBehaviour LeftWheelKickUpBehaviour;
		public KickUpVFXBehaviour RightWheelKickUpBehaviour;
	}

	public class KartVisualBehaviour : BaseVisualBehaviour
	{
		private const float MinVelocityToKickUp = 10f;

		private static readonly int EngineRunningParamId = Animator.StringToHash("EngineRunning");
		private static readonly int ToonColourID = Shader.PropertyToID("_ToonColour");

		[SerializeField]
		private Transform _wheelSteerFrontL;

		[SerializeField]
		private Transform _wheelSteerFrontR;

		[SerializeField]
		private Transform _wheelRotFrontL;

		[SerializeField]
		private Transform _wheelRotFrontR;

		[SerializeField]
		private Transform _wheelRotRearL;

		[SerializeField]
		private Transform _wheelRotRearR;

		[SerializeField]
		private Transform _antennaAttachmentPoint;

		[SerializeField]
		private Transform _steeringWheel;

		[SerializeField]
		private MeshRenderer _dropShadowMeshRenderer;

		[SerializeField]
		private Transform _steeringWheelVisualRoot;

		[SerializeField]
		private Transform _characterFollowTranform;

		[SerializeField]
		private GameObject[] _vfxBoostObjects;

		[SerializeField]
		private DriftLevelsVFXList[] _vfxDriftLevels;

		[SerializeField]
		private TyreSmokeVFX _tyreSmokeVFX;

		[SerializeField]
		private KickUpVFX _kickUpVFX;

		[SerializeField]
		private GameObject _satelliteHitVFX;

		[SerializeField]
		private GameObject _satelliteShieldVFX;

		[SerializeField]
		private GameObject[] _laserWheelsVFX;

		[SerializeField]
		private GameObject _hopBoostSuccessVFX;

		[SerializeField]
		private GameObject _vfxBoostLeft1;

		[SerializeField]
		private GameObject _vfxBoostRight1;

		[SerializeField]
		private GameObject _vfxBoostLeft2;

		[SerializeField]
		private GameObject _vfxBoostRight2;

		[SerializeField]
		private GameObject _vfxBoostLeft3;

		[SerializeField]
		private GameObject _vfxBoostRight3;

		[SerializeField]
		private GameObject _vfxBoostSparks;

		private Vector3 _wheelLocalPosFL = Vector3.zero;
		private Vector3 _wheelLocalPosFR = Vector3.zero;
		private Vector3 _wheelLocalPosRL = Vector3.zero;
		private Vector3 _wheelLocalPosRR = Vector3.zero;

		private AestheticSurfaceType _leftWheelKickupSurfaceType;
		private AestheticSurfaceType _rightWheelKickupSurfaceType;
		private ParticleSystem _activeLeftKickUpParticleSystem;
		private ParticleSystem _activeRightKickUpParticleSystem;

		private Material _leftTyreSmokeVFXMaterial;
		private Material _rightTyreSmokeVFXMaterial;
		private Color _leftTyreSmokeVFXColor;
		private Color _rightTyreSmokeVFXColor;

		private float _hopBoostSuccessDuration;
		private Vector3 _satelliteHitOffsetPos = Vector3.zero;
		private Vector3 _satelliteShieldOffsetPos = Vector3.zero;

		private List<VFXBoostTiedBehaviour> _vfxBoostTiedBehaviours;
		private DriftLevelsVFXList[] _instantiatedVFXDriftLevels;
		private DriftLevelsVFXList[] _tempVFXDriftLevels;
		private GameObject[] _instantiatedVfxBoostObjects;
		private GameObject[] _tempVfxBoostObjects;
		private List<VFXBoostTiedBehaviour> _instantiatedVfxBoostTiedBehaviours;
		private List<VFXBoostTiedBehaviour> _tempVfxBoostTiedBehaviours;

		public Transform WheelSteerFL => _wheelSteerFrontL;
		public Transform WheelSteerFR => _wheelSteerFrontR;
		public Transform WheelRotFL => _wheelRotFrontL;
		public Transform WheelRotFR => _wheelRotFrontR;
		public Transform WheelRotRL => _wheelRotRearL;
		public Transform WheelRotRR => _wheelRotRearR;
		public Transform SteeringWheel => _steeringWheel;
		public MeshRenderer DropShadowMeshRenderer => _dropShadowMeshRenderer;
		public Transform SteeringWheelVisualRoot => _steeringWheelVisualRoot;
		public Transform CharacterFollowTransform => _characterFollowTranform;
		public Transform AntennaAttachmentPoint => _antennaAttachmentPoint;
		public float HopBoostSuccessDuration => _hopBoostSuccessDuration;
		public GameObject[] VfxBoostObjects => _vfxBoostObjects;
		public GameObject VfxBoostLeft1 => _vfxBoostLeft1;
		public GameObject VfxBoostRight1 => _vfxBoostRight1;
		public GameObject VfxBoostLeft2 => _vfxBoostLeft2;
		public GameObject VfxBoostRight2 => _vfxBoostRight2;
		public GameObject VfxBoostLeft3 => _vfxBoostLeft3;
		public GameObject VfxBoostRight3 => _vfxBoostRight3;
		public GameObject VfxBoostSparks => _vfxBoostSparks;

		public override void Init()
		{
			base.Init();
			if (_wheelRotFrontL != null)
			{
				_wheelLocalPosFL = _wheelRotFrontL.transform.localPosition;
			}
			if (_wheelRotFrontR != null)
			{
				_wheelLocalPosFR = _wheelRotFrontR.transform.localPosition;
			}
			if (_wheelRotRearL != null)
			{
				_wheelLocalPosRL = _wheelRotRearL.transform.localPosition;
			}
			if (_wheelRotRearR != null)
			{
				_wheelLocalPosRR = _wheelRotRearR.transform.localPosition;
			}
			if (_hopBoostSuccessVFX != null)
			{
				ParticleSystem ps = _hopBoostSuccessVFX.GetComponent<ParticleSystem>();
				_hopBoostSuccessDuration = ps.main.duration;
			}
			if (_tyreSmokeVFX.Left != null)
			{
				_leftTyreSmokeVFXMaterial = _tyreSmokeVFX.Left.GetComponent<Renderer>().sharedMaterial;
				_leftTyreSmokeVFXColor = _leftTyreSmokeVFXMaterial.GetColor(ToonColourID);
			}
			if (_tyreSmokeVFX.Right != null)
			{
				_rightTyreSmokeVFXMaterial = _tyreSmokeVFX.Right.GetComponent<Renderer>().sharedMaterial;
				_rightTyreSmokeVFXColor = _rightTyreSmokeVFXMaterial.GetColor(ToonColourID);
			}
			if (_satelliteHitVFX != null)
			{
				_satelliteHitOffsetPos = _satelliteHitVFX.transform.localPosition;
				_satelliteHitVFX.transform.SetParent(null, true);
			}
			if (_satelliteShieldVFX != null)
			{
				_satelliteShieldOffsetPos = _satelliteShieldVFX.transform.localPosition;
				_satelliteShieldVFX.transform.SetParent(null, true);
			}
			_vfxBoostTiedBehaviours = new List<VFXBoostTiedBehaviour>();
			if (_vfxBoostObjects != null)
			{
				for (int i = 0; i < _vfxBoostObjects.Length; i++)
				{
					VFXBoostTiedBehaviour tied = _vfxBoostObjects[i].GetComponentInChildren<VFXBoostTiedBehaviour>();
					if (tied != null)
					{
						tied.Init();
						_vfxBoostTiedBehaviours.Add(tied);
					}
				}
			}
		}

		public void SetWheelSteerAngle(float wheelSteerAngle)
		{
			if (_wheelSteerFrontL != null)
			{
				_wheelSteerFrontL.localEulerAngles = new Vector3(0f, wheelSteerAngle, 0f);
			}
			if (_wheelSteerFrontR != null)
			{
				_wheelSteerFrontR.localEulerAngles = new Vector3(0f, wheelSteerAngle, 0f);
			}
		}

		public void SetWheelRotation(float rotation)
		{
			if (_wheelRotFrontL != null)
			{
				_wheelRotFrontL.localEulerAngles = new Vector3(rotation, 0f, 0f);
			}
			if (_wheelRotFrontR != null)
			{
				_wheelRotFrontR.localEulerAngles = new Vector3(rotation, 0f, 0f);
			}
			if (_wheelRotRearL != null)
			{
				_wheelRotRearL.localEulerAngles = new Vector3(rotation, 0f, 0f);
			}
			if (_wheelRotRearR != null)
			{
				_wheelRotRearR.localEulerAngles = new Vector3(rotation, 0f, 0f);
			}
		}

		public void SetWheelVerticalOffset(KartPhysicsSetup.EWheel wheelType, float yOffset)
		{
			switch (wheelType)
			{
				case KartPhysicsSetup.EWheel.FrontLeft:
					if (_wheelRotFrontL != null)
					{
						_wheelRotFrontL.localPosition = _wheelLocalPosFL + new Vector3(0f, yOffset, 0f);
					}
					break;
				case KartPhysicsSetup.EWheel.FrontRight:
					if (_wheelRotFrontR != null)
					{
						_wheelRotFrontR.localPosition = _wheelLocalPosFR + new Vector3(0f, yOffset, 0f);
					}
					break;
				case KartPhysicsSetup.EWheel.RearLeft:
					if (_wheelRotRearL != null)
					{
						_wheelRotRearL.localPosition = _wheelLocalPosRL + new Vector3(0f, yOffset, 0f);
					}
					break;
				case KartPhysicsSetup.EWheel.RearRight:
					if (_wheelRotRearR != null)
					{
						_wheelRotRearR.localPosition = _wheelLocalPosRR + new Vector3(0f, yOffset, 0f);
					}
					break;
			}
		}

		public override void SetBoosting(bool boosting, DriftBoostType driftBoostType)
		{
			base.SetBoosting(boosting, driftBoostType);
			if (_instantiatedVfxBoostObjects == null || _instantiatedVfxBoostTiedBehaviours == null)
			{
				_tempVfxBoostObjects = _vfxBoostObjects;
				_tempVfxBoostTiedBehaviours = _vfxBoostTiedBehaviours;
			}
			else
			{
				_tempVfxBoostObjects = _instantiatedVfxBoostObjects;
				_tempVfxBoostTiedBehaviours = _instantiatedVfxBoostTiedBehaviours;
			}

			foreach (VFXBoostTiedBehaviour tied in _tempVfxBoostTiedBehaviours)
			{
				tied.SetBoostLevel(driftBoostType);
			}

			if (_tempVfxBoostObjects != null)
			{
				for (int i = 0; i < _tempVfxBoostObjects.Length; i++)
				{
					_tempVfxBoostObjects[i].SetActive(boosting);
				}
			}

			if (_vfxBoostObjects != null)
			{
				for (int i = 0; i < _vfxBoostObjects.Length; i++)
				{
					_vfxBoostObjects[i].SetActive(boosting);
				}
			}
		}

		public void SetDriftLevel(DriftBoostType level, bool leftSide)
		{
			if (_vfxDriftLevels == null)
			{
				return;
			}

			_tempVFXDriftLevels = _instantiatedVFXDriftLevels != null ? _instantiatedVFXDriftLevels : _vfxDriftLevels;

			for (int i = 0; i < _tempVFXDriftLevels.Length; i++)
			{
				bool matchesLevel = _tempVFXDriftLevels[i].DriftBoostType == level;
				GameObject[] leftObjects = _tempVFXDriftLevels[i].VfxDriftChargeLevelLeft;
				for (int j = 0; j < leftObjects.Length; j++)
				{
					if (leftObjects[j] != null)
					{
						leftObjects[j].SetActive(matchesLevel && leftSide);
					}
				}

				GameObject[] rightObjects = _tempVFXDriftLevels[i].VfxDriftChargeLevelRight;
				for (int j = 0; j < rightObjects.Length; j++)
				{
					if (rightObjects[j] != null)
					{
						rightObjects[j].SetActive(matchesLevel && !leftSide);
					}
				}
			}
		}

		public void UpdateKickUp(AestheticSurfaceType leftWheelSurfaceType, AestheticSurfaceType rightWheelSurfaceType, float speed)
		{
			UpdateKickUp(leftWheelSurfaceType, speed, _kickUpVFX.LeftWheelKickUpBehaviour, ref _activeLeftKickUpParticleSystem, ref _leftWheelKickupSurfaceType);
			UpdateKickUp(rightWheelSurfaceType, speed, _kickUpVFX.RightWheelKickUpBehaviour, ref _activeRightKickUpParticleSystem, ref _rightWheelKickupSurfaceType);
		}

		private void UpdateKickUp(AestheticSurfaceType surfaceType, float speed, KickUpVFXBehaviour kickUpVFXBehaviour, ref ParticleSystem activeParticleSystem, ref AestheticSurfaceType activeSurfaceType)
		{
			if (kickUpVFXBehaviour == null)
			{
				return;
			}

			KickUpVFXBehaviour.KickUp kickUp = default(KickUpVFXBehaviour.KickUp);
			if (surfaceType != AestheticSurfaceType.None && speed >= MinVelocityToKickUp)
			{
				int index = kickUpVFXBehaviour.GetKickUpIndex(surfaceType);
				if (index >= 0)
				{
					kickUp = kickUpVFXBehaviour.KickUps[index];
				}
			}

			if (kickUp.SurfaceType != activeSurfaceType)
			{
				if (kickUp.OverrideColours)
				{
					SetStartColour(kickUp.ParticleSystem, kickUp.Colour);
					if (kickUp.ChildParticleSystem1 != null)
					{
						SetStartColour(kickUp.ChildParticleSystem1, kickUp.ChildColour1);
					}
					if (kickUp.ChildParticleSystem2 != null)
					{
						SetStartColour(kickUp.ChildParticleSystem2, kickUp.ChildColour2);
					}
				}
				activeSurfaceType = kickUp.SurfaceType;
			}

			if (kickUp.ParticleSystem != activeParticleSystem)
			{
				if (activeParticleSystem != null)
				{
					activeParticleSystem.Stop(true, ParticleSystemStopBehavior.StopEmitting);
				}
				if (kickUp.ParticleSystem != null)
				{
					kickUp.ParticleSystem.Play();
				}
				activeParticleSystem = kickUp.ParticleSystem;
			}
		}

		public void UpdateTyreSmoke(bool emitting, Color leftSmokeColour, Color rightSmokeColour)
		{
			if (_tyreSmokeVFX.Left)
			{
				SetParticleSystemEmitting(_tyreSmokeVFX.Left, emitting);
				if (emitting && _leftTyreSmokeVFXMaterial)
				{
					_leftTyreSmokeVFXColor = Color.Lerp(_leftTyreSmokeVFXColor, leftSmokeColour, 0.1f);
					_leftTyreSmokeVFXMaterial.SetColor(ToonColourID, _leftTyreSmokeVFXColor);
				}
			}
			if (_tyreSmokeVFX.Right)
			{
				SetParticleSystemEmitting(_tyreSmokeVFX.Right, emitting);
				if (emitting && _rightTyreSmokeVFXMaterial)
				{
					_rightTyreSmokeVFXColor = Color.Lerp(_rightTyreSmokeVFXColor, rightSmokeColour, 0.1f);
					_rightTyreSmokeVFXMaterial.SetColor(ToonColourID, _rightTyreSmokeVFXColor);
				}
			}
		}

		public void TriggerSatelliteTargetVFX(bool active, bool isShield)
		{
			if (isShield)
			{
				if (_satelliteShieldVFX != null)
				{
					_satelliteShieldVFX.SetActive(active);
				}
			}
			else if (_satelliteHitVFX != null)
			{
				_satelliteHitVFX.SetActive(active);
			}
		}

		public void SetLaserWheelVFX(bool active)
		{
			if (_laserWheelsVFX != null)
			{
				for (int i = 0; i < _laserWheelsVFX.Length; i++)
				{
					if (_laserWheelsVFX[i] != null)
					{
						_laserWheelsVFX[i].SetActive(active);
					}
				}
			}
		}

		public void SetHopBoostSuccessVFX(bool active)
		{
			if (_hopBoostSuccessVFX != null)
			{
				_hopBoostSuccessVFX.SetActive(active);
			}
		}

		public void SetSatellitePosition(Vector3 pos)
		{
			if (_satelliteHitVFX != null)
			{
				_satelliteHitVFX.transform.position = pos + _satelliteHitOffsetPos;
			}
			if (_satelliteShieldVFX != null)
			{
				_satelliteShieldVFX.transform.position = pos + _satelliteShieldOffsetPos;
			}
		}

		public void ConfigureEffectsForPlayer(NetworkPlayer networkPlayer)
		{
			if (networkPlayer.IsRemote())
			{
				if (_tyreSmokeVFX.Left)
				{
					SetEmissionRate(_tyreSmokeVFX.Left, 40f);
				}
				if (_tyreSmokeVFX.Right)
				{
					SetEmissionRate(_tyreSmokeVFX.Right, 40f);
				}
			}
		}

		private void SetEmissionRate(ParticleSystem particleSystem, float rate)
		{
			ParticleSystem.EmissionModule emission = particleSystem.emission;
			emission.rateOverTime = rate;
			emission.rateOverDistance = 0f;
		}

		private void SetParticleSystemEmitting(ParticleSystem particleSystem, bool emitting)
		{
			if (emitting)
			{
				if (!particleSystem.isEmitting)
				{
					particleSystem.Play(true);
				}
			}
			else if (particleSystem.isEmitting)
			{
				particleSystem.Stop(true, ParticleSystemStopBehavior.StopEmitting);
			}
		}

		private void SetStartColour(ParticleSystem particleSystem, ParticleSystem.MinMaxGradient colour)
		{
			ParticleSystem.MainModule main = particleSystem.main;
			main.startColor = colour;
		}

		public void SetEngineRunningEnabled(bool running)
		{
			_animator.SetBool(EngineRunningParamId, running);
		}

		private void OnDestroy()
		{
			if (_satelliteHitVFX != null)
			{
				Destroy(_satelliteHitVFX);
			}
			if (_satelliteShieldVFX != null)
			{
				Destroy(_satelliteShieldVFX);
			}
		}

		public void SetDriftVFX(DriftLevelsVFXList[] driftVFX)
		{
			for (int i = 0; i < _vfxDriftLevels.Length; i++)
			{
				driftVFX[i].VfxDriftChargeLevelLeft[0].transform.localPosition = _vfxDriftLevels[i].VfxDriftChargeLevelLeft[0].transform.localPosition;
				driftVFX[i].VfxDriftChargeLevelRight[0].transform.localPosition = _vfxDriftLevels[i].VfxDriftChargeLevelRight[0].transform.localPosition;
				driftVFX[i].VfxDriftChargeLevelLeft[0].transform.localRotation = _vfxDriftLevels[i].VfxDriftChargeLevelLeft[0].transform.localRotation;
				driftVFX[i].VfxDriftChargeLevelRight[0].transform.localRotation = _vfxDriftLevels[i].VfxDriftChargeLevelRight[0].transform.localRotation;
			}
			_instantiatedVFXDriftLevels = driftVFX;
		}

		public void SetAccelerationBoostVFX(GameObject[] accelerationBoostVFX)
		{
			_instantiatedVfxBoostObjects = accelerationBoostVFX;
			_instantiatedVfxBoostTiedBehaviours = new List<VFXBoostTiedBehaviour>();
			for (int i = 0; i < accelerationBoostVFX.Length; i++)
			{
				VFXBoostTiedBehaviour tied = accelerationBoostVFX[i].GetComponentInChildren<VFXBoostTiedBehaviour>();
				if (tied != null)
				{
					tied.Init();
					_instantiatedVfxBoostTiedBehaviours.Add(tied);
				}
			}
		}
	}
}
