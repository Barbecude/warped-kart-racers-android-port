using System.Collections.Generic;
using Atlas.Rendering;
using Core.Application;
using Core.Containers;
using Core.Definitions;
using UnityEngine;

namespace Atlas.Gameplay.Kart
{
	public class KartVisualComposite
	{
		public const int AnyMaterialId = -1;
		public const int CharacterMaterialId = 0;
		public const int KartMaterialId = 1;
		public const int GliderMaterialId = 2;
		public const int WheelsMaterialId = 3;
		public const int AntennaMaterialId = 4;
		public const int BoostMaterialId = 5;

		private const string UntaggedTag = "Untagged";
		private const string DontOverrideTag = "DontOverrideCellShading";
		private const int InitialMeshRendererMaterialCapacity = 10;
		private const int InitialMeshRendererCapacity = 10;
		private const int InitialMaterialCapacity = 2;
		private const string GreyScaleToonShaderKeyword = "GREYSCALE";
		private const float GliderRegionId = 8f;
		private const float AntennaRegionId = 10f;
		private const float KartRegionId = 12f;
		private const float CharacterRegionId = 14f;
		private const float WheelsRegionId = 16f;
		private const float BoostRegionId = 16f;

		protected GameObject _kartRootObject;
		protected GameObject _visualCompositeParent;
		private MaterialDuplicator _overridableToonMaterialDuplicator;
		private MaterialDuplicator _toonMaterialDuplicator;
		private RuntimeAnimatorController _originalKartController;
		private List<GameObject> _boostsGameObjects;

		protected GameObject _kartVisual;
		protected GameObject _characterVisual;
		protected GameObject _gliderVisual;
		protected GameObject _antennaVisual;
		protected GameObject _boostDriftVisualLeft;
		protected GameObject _boostDriftVisualRight;
		protected GameObject _boostAccelerationVisualLeft1;
		protected GameObject _boostAccelerationVisualRight1;
		protected GameObject _boostAccelerationVisualLeft2;
		protected GameObject _boostAccelerationVisualRight2;
		protected GameObject _boostAccelerationVisualLeft3;
		protected GameObject _boostAccelerationVisualRight3;
		protected GameObject _wheelFLVisual;
		protected GameObject _wheelFRVisual;
		protected GameObject _wheelRLVisual;
		protected GameObject _wheelRRVisual;

		protected KartLoadout _currentLoadout;
		protected AtlasShaders _atlasShaders;
		protected KartVisualBehaviour _kartVisualsBehaviour;
		protected CharacterVisualBehaviour _characterVisualBehaviour;
		protected GliderVisualBehaviour _gliderVisualBehaviour;
		protected AntennaVisualBehaviour _antennaVisualBehaviour;
		protected BoostVisualBehaviour _boostVisualBehaviourLeft;
		protected BoostVisualBehaviour _boostVisualBehaviourRight;
		protected BoostAccelerationVisualBehaviour _boostAccelerationBehaviourLeft1;
		protected BoostAccelerationVisualBehaviour _boostAccelerationBehaviourRight1;
		protected BoostAccelerationVisualBehaviour _boostAccelerationBehaviourLeft2;
		protected BoostAccelerationVisualBehaviour _boostAccelerationBehaviourRight2;
		protected BoostAccelerationVisualBehaviour _boostAccelerationBehaviourLeft3;
		protected BoostAccelerationVisualBehaviour _boostAccelerationBehaviourRight3;
		protected GameObject _boostAccelerationSparks;
		protected WheelVisualBehaviour _wheelFLVisualBehaviour;
		protected WheelVisualBehaviour _wheelFRVisualBehaviour;
		protected WheelVisualBehaviour _wheelRLVisualBehaviour;
		protected WheelVisualBehaviour _wheelRRVisualBehaviour;

		private bool _isFrontEndKart;
		private List<LODGroup> _lodChildren = new List<LODGroup>(3);
		private List<LODGroup> _pendingForcedLODs = new List<LODGroup>(7);
		private Vector3 _characterPrefabPosition = Vector3.zero;
		private Quaternion _characterPrefabRotation = Quaternion.identity;
		private Vector3 _characterPrefabScale = Vector3.one;

		public GameObject CharacterVisual => _characterVisual;
		public GameObject KartVisual => _kartVisual;
		public GameObject GliderVisual => _gliderVisual;
		public GameObject AntennaVisual => _antennaVisual;
		public GameObject WheelFLVisual => _wheelFLVisual;
		public GameObject WheelFRVisual => _wheelFRVisual;
		public GameObject WheelRLVisual => _wheelRLVisual;
		public GameObject WheelRRVisual => _wheelRRVisual;
		public KartLoadout CurrentKartLoadout => _currentLoadout;
		public KartVisualBehaviour KartVisualsBehaviour => _kartVisualsBehaviour;
		public CharacterVisualBehaviour CharacterVisualBehaviour => _characterVisualBehaviour;
		public GliderVisualBehaviour GliderVisualBehaviour => _gliderVisualBehaviour;
		public AntennaVisualBehaviour AntennaVisualBehaviour => _antennaVisualBehaviour;
		public WheelVisualBehaviour WheelFLVisualBehaviour => _wheelFLVisualBehaviour;
		public WheelVisualBehaviour WheelFRVisualBehaviour => _wheelFRVisualBehaviour;
		public WheelVisualBehaviour WheelRLVisualBehaviour => _wheelRLVisualBehaviour;
		public WheelVisualBehaviour WheelRRVisualBehaviour => _wheelRRVisualBehaviour;
		public bool IsFrontEndKart => _isFrontEndKart;
		public GameObject KartVisualsRoot => _visualCompositeParent;
		public MaterialDuplicator OverridableToonMaterialDuplicator => _overridableToonMaterialDuplicator;
		public MaterialDuplicator ToonMaterialDuplicator => _toonMaterialDuplicator;
		public float LargestVisualAxisMagnitude => 4f;
		public MaterialDuplicator MaterialDuplicator => _overridableToonMaterialDuplicator;

		public void Init(GameObject kartRootObj, GameObject visualCompositeParent, GameObject kartVisualPrefab, GameObject characterPrefab, GameObject gliderPrefab, GameObject antennaPrefab, GameObject frontWheelsPrefab, GameObject rearWheelsPrefab, GameObject boostPrefab, KartLoadout loadout, AtlasShaders atlasShaders)
		{
			Init(kartRootObj, visualCompositeParent, atlasShaders);
			_originalKartController = null;
			SetKart(kartVisualPrefab);
			SetCharacter(characterPrefab);
			SetGlider(gliderPrefab);
			SetAntenna(antennaPrefab);
			SetFrontWheels(frontWheelsPrefab);
			SetRearWheels(rearWheelsPrefab);
			SetBoost(boostPrefab);
			_currentLoadout = loadout;
		}

		public void Init(GameObject kartRootObj, GameObject visualCompositeParent, AtlasShaders atlasShaders)
		{
			_kartRootObject = kartRootObj;
			_visualCompositeParent = visualCompositeParent;
			_atlasShaders = atlasShaders;
			_overridableToonMaterialDuplicator = new MaterialDuplicator();
			_toonMaterialDuplicator = new MaterialDuplicator();
			_overridableToonMaterialDuplicator.Init(InitialMaterialCapacity, InitialMeshRendererCapacity, InitialMeshRendererMaterialCapacity);
			_toonMaterialDuplicator.Init(InitialMaterialCapacity, InitialMeshRendererCapacity, InitialMeshRendererMaterialCapacity);
			_boostsGameObjects = new List<GameObject>();
		}

		public void SetKart(GameObject kartVisualPrefab)
		{
			UnParentPart(_wheelFLVisual);
			UnParentPart(_wheelFRVisual);
			UnParentPart(_wheelRLVisual);
			UnParentPart(_wheelRRVisual);
			UnParentPart(_antennaVisual);
			UnParentPart(_characterVisual);

			InstantiatePartAndParentTo(kartVisualPrefab, _visualCompositeParent, KartMaterialId, KartRegionId, ref _kartVisual, ref _kartVisualsBehaviour);

			if (kartVisualPrefab)
			{
				ParentPartTo(_kartVisualsBehaviour.WheelRotFL.gameObject, _wheelFLVisual);
				ParentPartTo(_kartVisualsBehaviour.WheelRotFR.gameObject, _wheelFRVisual);
				ParentPartTo(_kartVisualsBehaviour.WheelRotRL.gameObject, _wheelRLVisual);
				ParentPartTo(_kartVisualsBehaviour.WheelRotRR.gameObject, _wheelRRVisual);
				ParentPartTo(_kartVisualsBehaviour.AntennaAttachmentPoint.gameObject, _antennaVisual);
				ParentPartTo(null, _characterVisual);
				_kartVisualsBehaviour.Init();
			}
			else
			{
				DestroyPart(_wheelFLVisual, WheelsMaterialId);
				DestroyPart(_wheelFRVisual, WheelsMaterialId);
				DestroyPart(_wheelRLVisual, WheelsMaterialId);
				DestroyPart(_wheelRRVisual, WheelsMaterialId);
				DestroyPart(_antennaVisual, AntennaMaterialId);
				DestroyPart(_characterVisual, CharacterMaterialId);
			}

			PostSetKartOrCharacter();
		}

		public void SetCharacter(GameObject characterPrefab)
		{
			if (characterPrefab != null)
			{
				_characterPrefabPosition = characterPrefab.transform.localPosition;
				_characterPrefabRotation = characterPrefab.transform.localRotation;
				_characterPrefabScale = characterPrefab.transform.localScale;
			}

			InstantiatePartAndParentTo(characterPrefab, null, CharacterMaterialId, CharacterRegionId, ref _characterVisual, ref _characterVisualBehaviour);

			if (_characterVisualBehaviour)
			{
				_characterVisualBehaviour.Init();
				if (_isFrontEndKart && _characterVisualBehaviour.CameraAdaptiveBlendShapesBehaviour != null)
				{
					_characterVisualBehaviour.CameraAdaptiveBlendShapesBehaviour.DisableBlendShapesOverDistance = false;
				}
			}

			PostSetKartOrCharacter();
		}

		public void SetGlider(GameObject gliderPrefab)
		{
			InstantiatePartAndParentTo(gliderPrefab, _visualCompositeParent, GliderMaterialId, GliderRegionId, ref _gliderVisual, ref _gliderVisualBehaviour);

			if (_gliderVisualBehaviour)
			{
				_gliderVisualBehaviour.Init();
				if (_isFrontEndKart)
				{
					_gliderVisualBehaviour.SetGliderShadowActive(false);
				}
			}
		}

		public void SetAntenna(GameObject antennaPrefab)
		{
			GameObject parent = _kartVisualsBehaviour ? _kartVisualsBehaviour.AntennaAttachmentPoint.gameObject : null;
			InstantiatePartAndParentTo(antennaPrefab, parent, AntennaMaterialId, AntennaRegionId, ref _antennaVisual, ref _antennaVisualBehaviour);

			if (_antennaVisualBehaviour)
			{
				_antennaVisualBehaviour.Init();
			}
		}

		public void SetFrontWheels(GameObject frontWheelsPrefab)
		{
			GameObject parentFL = _kartVisualsBehaviour ? _kartVisualsBehaviour.WheelRotFL.gameObject : null;
			InstantiatePartAndParentTo(frontWheelsPrefab, parentFL, WheelsMaterialId, WheelsRegionId, ref _wheelFLVisual, ref _wheelFLVisualBehaviour);

			GameObject parentFR = _kartVisualsBehaviour ? _kartVisualsBehaviour.WheelRotFR.gameObject : null;
			InstantiatePartAndParentTo(frontWheelsPrefab, parentFR, WheelsMaterialId, WheelsRegionId, ref _wheelFRVisual, ref _wheelFRVisualBehaviour);

			if (frontWheelsPrefab)
			{
				SetWheelRotation(_wheelFLVisual.transform, false);
				SetWheelRotation(_wheelFRVisual.transform, true);
				_wheelFLVisualBehaviour.Init();
				_wheelFRVisualBehaviour.Init();
			}
		}

		public void SetRearWheels(GameObject rearWheelsPrefab)
		{
			GameObject parentRL = _kartVisualsBehaviour ? _kartVisualsBehaviour.WheelRotRL.gameObject : null;
			InstantiatePartAndParentTo(rearWheelsPrefab, parentRL, WheelsMaterialId, WheelsRegionId, ref _wheelRLVisual, ref _wheelRLVisualBehaviour);

			GameObject parentRR = _kartVisualsBehaviour ? _kartVisualsBehaviour.WheelRotRR.gameObject : null;
			InstantiatePartAndParentTo(rearWheelsPrefab, parentRR, WheelsMaterialId, WheelsRegionId, ref _wheelRRVisual, ref _wheelRRVisualBehaviour);

			if (rearWheelsPrefab)
			{
				SetWheelRotation(_wheelRLVisual.transform, false);
				SetWheelRotation(_wheelRRVisual.transform, true);
				_wheelRLVisualBehaviour.Init();
				_wheelRRVisualBehaviour.Init();
			}
		}

		public void SetBoost(GameObject boostPrefab)
		{
			if (boostPrefab == null)
			{
				return;
			}

			BoostVisualBehaviour boostVisual = boostPrefab.GetComponent<BoostVisualBehaviour>();
			if (boostVisual.IsDefault)
			{
				_boostAccelerationSparks = null;
				ToggleKartNonDefaultBoosterVFX(false);
				if (_kartVisualsBehaviour != null && _kartVisualsBehaviour.VfxBoostObjects.Length > 0)
				{
					_kartVisualsBehaviour.VfxBoostObjects[0].gameObject.transform.GetChild(0).gameObject.SetActive(true);
				}
				return;
			}

			ToggleKartNonDefaultBoosterVFX(true);
			if (_kartVisualsBehaviour != null && _kartVisualsBehaviour.VfxBoostObjects.Length > 0)
			{
				_kartVisualsBehaviour.VfxBoostObjects[0].gameObject.transform.GetChild(0).gameObject.SetActive(false);
			}

			DriftLevelsVFXList[] driftLevels = new DriftLevelsVFXList[3];
			GameObject leftParent = _kartVisualsBehaviour ? _kartVisualsBehaviour.WheelRotRL.transform.parent.gameObject : null;
			InstantiatePartAndParentTo(boostPrefab, leftParent, BoostMaterialId, BoostRegionId, ref _boostDriftVisualLeft, ref _boostVisualBehaviourLeft);

			GameObject rightParent = _kartVisualsBehaviour ? _kartVisualsBehaviour.WheelRotRR.transform.parent.gameObject : null;
			InstantiatePartAndParentTo(boostPrefab, rightParent, BoostMaterialId, BoostRegionId, ref _boostDriftVisualRight, ref _boostVisualBehaviourRight);

			for (int i = 0; i < 3; i++)
			{
				driftLevels[i] = default(DriftLevelsVFXList);
				driftLevels[i].VfxDriftChargeLevelLeft = new GameObject[] { _boostVisualBehaviourLeft.DriftLevelsL[i] };
				driftLevels[i].VfxDriftChargeLevelRight = new GameObject[] { _boostVisualBehaviourRight.DriftLevelsR[i] };
			}
			driftLevels[0].DriftBoostType = DriftBoostType.DriftBoostLevel1;
			driftLevels[1].DriftBoostType = DriftBoostType.DriftBoostLevel2;
			driftLevels[2].DriftBoostType = DriftBoostType.DriftBoostLevel3;

			if (_kartVisualsBehaviour != null)
			{
				_kartVisualsBehaviour.SetDriftVFX(driftLevels);
				_boostAccelerationSparks = _kartVisualsBehaviour.VfxBoostSparks;
			}
			else
			{
				_boostAccelerationSparks = null;
			}

			_boostsGameObjects.Clear();
			_boostsGameObjects.Add(_boostAccelerationSparks);

			GameObject left1Parent = _kartVisualsBehaviour ? _kartVisualsBehaviour.VfxBoostLeft1.gameObject : null;
			InstantiatePartAndParentTo(boostVisual.AccelerationL, left1Parent, BoostMaterialId, BoostRegionId, ref _boostAccelerationVisualLeft1, ref _boostAccelerationBehaviourLeft1);

			GameObject right1Parent = _kartVisualsBehaviour ? _kartVisualsBehaviour.VfxBoostRight1.gameObject : null;
			InstantiatePartAndParentTo(boostVisual.AccelerationR, right1Parent, BoostMaterialId, BoostRegionId, ref _boostAccelerationVisualRight1, ref _boostAccelerationBehaviourRight1);

			_boostsGameObjects.Add(_boostAccelerationVisualLeft1);
			_boostsGameObjects.Add(_boostAccelerationVisualRight1);

			if ((_kartVisualsBehaviour != null ? _kartVisualsBehaviour.VfxBoostLeft2 : null) != null)
			{
				GameObject left2Parent = _kartVisualsBehaviour ? _kartVisualsBehaviour.VfxBoostLeft2.gameObject : null;
				InstantiatePartAndParentTo(boostVisual.AccelerationL, left2Parent, BoostMaterialId, BoostRegionId, ref _boostAccelerationVisualLeft2, ref _boostAccelerationBehaviourLeft2);
				_boostsGameObjects.Add(_boostAccelerationVisualLeft2);
			}

			if ((_kartVisualsBehaviour != null ? _kartVisualsBehaviour.VfxBoostRight2 : null) != null)
			{
				GameObject right2Parent = _kartVisualsBehaviour ? _kartVisualsBehaviour.VfxBoostRight2.gameObject : null;
				InstantiatePartAndParentTo(boostVisual.AccelerationR, right2Parent, BoostMaterialId, BoostRegionId, ref _boostAccelerationVisualRight2, ref _boostAccelerationBehaviourRight2);
				_boostsGameObjects.Add(_boostAccelerationVisualRight2);
			}

			if ((_kartVisualsBehaviour != null ? _kartVisualsBehaviour.VfxBoostLeft3 : null) != null)
			{
				GameObject left3Parent = _kartVisualsBehaviour ? _kartVisualsBehaviour.VfxBoostLeft3.gameObject : null;
				InstantiatePartAndParentTo(boostVisual.AccelerationL, left3Parent, BoostMaterialId, BoostRegionId, ref _boostAccelerationVisualLeft3, ref _boostAccelerationBehaviourLeft3);
				_boostsGameObjects.Add(_boostAccelerationVisualLeft3);
			}

			if ((_kartVisualsBehaviour != null ? _kartVisualsBehaviour.VfxBoostRight3 : null) != null)
			{
				GameObject right3Parent = _kartVisualsBehaviour ? _kartVisualsBehaviour.VfxBoostRight3.gameObject : null;
				InstantiatePartAndParentTo(boostVisual.AccelerationR, right3Parent, BoostMaterialId, BoostRegionId, ref _boostAccelerationVisualRight3, ref _boostAccelerationBehaviourRight3);
				_boostsGameObjects.Add(_boostAccelerationVisualRight3);
			}

			if (_kartVisualsBehaviour != null)
			{
				_kartVisualsBehaviour.SetAccelerationBoostVFX(_boostsGameObjects.ToArray());
			}
		}

		public void DeInit()
		{
			_overridableToonMaterialDuplicator.Clear();
			_toonMaterialDuplicator.Clear();

			DestroyAndNullOut(ref _kartVisual, ref _kartVisualsBehaviour);
			DestroyAndNullOut(ref _characterVisual, ref _characterVisualBehaviour);
			DestroyAndNullOut(ref _gliderVisual, ref _gliderVisualBehaviour);
			DestroyAndNullOut(ref _antennaVisual, ref _antennaVisualBehaviour);
			DestroyAndNullOut(ref _wheelFLVisual, ref _wheelFLVisualBehaviour);
			DestroyAndNullOut(ref _wheelFRVisual, ref _wheelFRVisualBehaviour);
			DestroyAndNullOut(ref _wheelRLVisual, ref _wheelRLVisualBehaviour);
			DestroyAndNullOut(ref _wheelRRVisual, ref _wheelRRVisualBehaviour);
			DestroyAndNullOut(ref _boostDriftVisualLeft, ref _boostVisualBehaviourLeft);
			DestroyAndNullOut(ref _boostDriftVisualRight, ref _boostVisualBehaviourRight);
			DestroyAndNullOut(ref _boostAccelerationVisualLeft1, ref _boostAccelerationBehaviourLeft1);
			DestroyAndNullOut(ref _boostAccelerationVisualRight1, ref _boostAccelerationBehaviourRight1);
			DestroyAndNullOut(ref _boostAccelerationVisualLeft2, ref _boostAccelerationBehaviourLeft2);
			DestroyAndNullOut(ref _boostAccelerationVisualRight2, ref _boostAccelerationBehaviourRight2);
			DestroyAndNullOut(ref _boostAccelerationVisualLeft3, ref _boostAccelerationBehaviourLeft3);
			DestroyAndNullOut(ref _boostAccelerationVisualRight3, ref _boostAccelerationBehaviourRight3);

			if (_overridableToonMaterialDuplicator != null)
			{
				_overridableToonMaterialDuplicator.DeInit();
			}
			_overridableToonMaterialDuplicator = null;

			if (_toonMaterialDuplicator != null)
			{
				_toonMaterialDuplicator.DeInit();
			}
			_toonMaterialDuplicator = null;

			_currentLoadout = KartLoadout.Invalid;
		}

		public void SetKartInFrontEnd()
		{
			_isFrontEndKart = true;
		}

		private void DestroyAndNullOut<TBehaviour>(ref GameObject obj, ref TBehaviour behaviour) where TBehaviour : BaseVisualBehaviour
		{
			if (obj != null)
			{
				_overridableToonMaterialDuplicator.RemoveDuplicatedMaterials(obj, _atlasShaders.ToonShader, UntaggedTag);
				_toonMaterialDuplicator.RemoveDuplicatedMaterials(obj, _atlasShaders.ToonShader, DontOverrideTag);
				Object.Destroy(obj);
				obj = null;
			}
			if (behaviour != null)
			{
				behaviour.DeInit();
				behaviour = null;
			}
		}

		private void InstantiatePartAndParentTo<TBehaviour>(GameObject prefab, GameObject parent, int materialId, float regionId, ref GameObject target, ref TBehaviour targetBehaviour) where TBehaviour : BaseVisualBehaviour
		{
			if (target)
			{
				UnParentPart(target);
				DestroyPart(target, materialId);
			}

			if (!prefab)
			{
				target = null;
				targetBehaviour = null;
				return;
			}

			target = Object.Instantiate(prefab);
			targetBehaviour = null;

			if (target != null)
			{
				targetBehaviour = target.GetComponent<TBehaviour>();
				_overridableToonMaterialDuplicator.DuplicateRendererMaterial(target, _atlasShaders.ToonShader, UntaggedTag, materialId);
				_toonMaterialDuplicator.DuplicateRendererMaterial(target, _atlasShaders.ToonShader, DontOverrideTag, materialId);
				SetRegionId(materialId, regionId);
			}

			ParentPartTo(parent, target);

			if (_isFrontEndKart)
			{
				target.GetComponentsInChildren(_lodChildren);
				foreach (LODGroup lodGroup in _lodChildren)
				{
					if (lodGroup.gameObject.activeInHierarchy)
					{
						lodGroup.ForceLOD(0);
					}
					else
					{
						_pendingForcedLODs.Add(lodGroup);
					}
				}
			}
		}

		private void UnParentPart(GameObject part)
		{
			if (part)
			{
				part.SetActive(false);
				part.transform.SetParent(null, false);
			}
		}

		private void ParentPartTo(GameObject parent, GameObject part)
		{
			if (!part)
			{
				return;
			}
			if (parent)
			{
				part.transform.SetParent(parent.transform, false);
				part.SetActive(true);
			}
			else
			{
				part.SetActive(false);
			}
		}

		private void DestroyPart(GameObject part, int materialId)
		{
			if (part)
			{
				_overridableToonMaterialDuplicator.RemoveDuplicatedMaterials(part.gameObject, _atlasShaders.ToonShader, UntaggedTag, materialId);
				_toonMaterialDuplicator.RemoveDuplicatedMaterials(part, _atlasShaders.ToonShader, DontOverrideTag, materialId);
				Object.Destroy(part);
			}
		}

		private void PostSetKartOrCharacter()
		{
			if (_characterVisualBehaviour == null || _kartVisualsBehaviour == null)
			{
				return;
			}
			AttachCharacterToKart();
			AdjustForSeatingPosition();
			ApplyCharacterSpecificKartAnimatorOverride();
		}

		private void SetWheelRotation(Transform wheel, bool isRight)
		{
			wheel.localRotation = isRight ? Quaternion.Euler(0f, 180f, 0f) : Quaternion.identity;
		}

		private void ToggleKartNonDefaultBoosterVFX(bool active)
		{
			if (_kartVisualsBehaviour == null)
			{
				return;
			}
			if (_kartVisualsBehaviour.VfxBoostLeft1 != null)
			{
				_kartVisualsBehaviour.VfxBoostLeft1.gameObject.SetActive(active);
			}
			if (_kartVisualsBehaviour.VfxBoostLeft2 != null)
			{
				_kartVisualsBehaviour.VfxBoostLeft2.gameObject.SetActive(active);
			}
			if (_kartVisualsBehaviour.VfxBoostLeft3 != null)
			{
				_kartVisualsBehaviour.VfxBoostLeft3.gameObject.SetActive(active);
			}
			if (_kartVisualsBehaviour.VfxBoostRight1 != null)
			{
				_kartVisualsBehaviour.VfxBoostRight1.gameObject.SetActive(active);
			}
			if (_kartVisualsBehaviour.VfxBoostRight2 != null)
			{
				_kartVisualsBehaviour.VfxBoostRight2.gameObject.SetActive(active);
			}
			if (_kartVisualsBehaviour.VfxBoostRight3 != null)
			{
				_kartVisualsBehaviour.VfxBoostRight3.gameObject.SetActive(active);
			}
		}

		public bool HasAntenna()
		{
			return _antennaVisualBehaviour != null;
		}

		private void AttachCharacterToKart()
		{
			Transform charTransform = _characterVisualBehaviour.transform;
			charTransform.SetParent(_kartVisualsBehaviour.transform, false);
			charTransform.localPosition = _characterPrefabPosition;
			charTransform.localRotation = _characterPrefabRotation;
			charTransform.localScale = _characterPrefabScale;
			charTransform.SetParent(_kartVisualsBehaviour.CharacterFollowTransform, true);
			_characterVisualBehaviour.gameObject.SetActive(true);
		}

		private void AdjustForSeatingPosition()
		{
			if (_kartVisualsBehaviour.SteeringWheel != null)
			{
				_kartVisualsBehaviour.SteeringWheel.position = _characterVisualBehaviour.transform.position;
				_kartVisualsBehaviour.SteeringWheel.rotation = _characterVisualBehaviour.transform.rotation;
				_kartVisualsBehaviour.SteeringWheel.localScale = _characterVisualBehaviour.transform.localScale;
				_kartVisualsBehaviour.SteeringWheel.gameObject.SetActive(!_characterVisualBehaviour.HideSteeringWheel);
			}
		}

		private void ApplyCharacterSpecificKartAnimatorOverride()
		{
			if (_originalKartController == null)
			{
				_originalKartController = _kartVisualsBehaviour.Animator.runtimeAnimatorController;
			}
			if (_characterVisualBehaviour.KartAnimatorOverride != null && _characterVisualBehaviour.KartAnimatorOverride.runtimeAnimatorController != null)
			{
				_kartVisualsBehaviour.Animator.runtimeAnimatorController = _characterVisualBehaviour.KartAnimatorOverride;
			}
			else if (_originalKartController != null)
			{
				_kartVisualsBehaviour.Animator.runtimeAnimatorController = _originalKartController;
			}
		}

		public void SetVisualRootActive(bool active)
		{
			_visualCompositeParent.gameObject.SetActive(active);
		}

		public void SetGreyScale(bool greyscale, int materialId = AnyMaterialId)
		{
			foreach (MaterialDuplicator.MaterialPair pair in _overridableToonMaterialDuplicator.DuplicatedMaterials)
			{
				if (materialId == AnyMaterialId || pair.Id == materialId)
				{
					if (greyscale)
					{
						pair.Duplicated.EnableKeyword(GreyScaleToonShaderKeyword);
					}
					else
					{
						pair.Duplicated.DisableKeyword(GreyScaleToonShaderKeyword);
					}
				}
			}
		}

		public void SetOutlineTextureBias(float bias)
		{
			SetTextureBias(ToonShaderNames.OutlineMapPropId, bias, AnyMaterialId);
		}

		public void SetTextureBias(int textureId, float bias, int materialId = AnyMaterialId)
		{
			foreach (MaterialDuplicator.MaterialPair pair in _overridableToonMaterialDuplicator.DuplicatedMaterials)
			{
				if (materialId == AnyMaterialId || pair.Id == materialId)
				{
					if (pair.Duplicated.HasProperty(textureId))
					{
						Texture tex = pair.Duplicated.GetTexture(textureId);
						if (tex != null)
						{
							tex.mipMapBias = bias;
						}
					}
				}
			}
		}

		public void SetOutlineTextureBias(float bias, int materialId)
		{
			SetTextureBias(ToonShaderNames.OutlineMapPropId, bias, materialId);
		}

		private void SetRegionId(int materialId, float regionId)
		{
			foreach (MaterialDuplicator.MaterialPair pair in _overridableToonMaterialDuplicator.DuplicatedMaterials)
			{
				if (pair.Id == materialId)
				{
					if (pair.Duplicated.HasProperty(ToonShaderNames.RegionIdPropId))
					{
						pair.Duplicated.SetFloat(ToonShaderNames.RegionIdPropId, regionId);
					}
				}
			}
		}

		public void Update(IUpdateParams updateParams)
		{
			if (!_isFrontEndKart)
			{
				return;
			}
			for (int i = 0; i < _pendingForcedLODs.Count; i++)
			{
				if (!_pendingForcedLODs[i] || !_pendingForcedLODs[i].gameObject)
				{
					_pendingForcedLODs.ReorderRemoveAt(i--);
				}
				else if (_pendingForcedLODs[i].gameObject.activeInHierarchy)
				{
					_pendingForcedLODs[i].ForceLOD(0);
					_pendingForcedLODs.ReorderRemoveAt(i--);
				}
			}
		}
	}
}
