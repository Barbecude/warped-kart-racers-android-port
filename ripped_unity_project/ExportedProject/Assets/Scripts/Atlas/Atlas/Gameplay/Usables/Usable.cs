using Atlas.Contexts;
using Atlas.Definitions;
using Atlas.Gameplay.Kart;
using Core.Actors;
using Core.Application;
using Core.Services;
using UnityEngine;

namespace Atlas.Gameplay.Usables
{
	public abstract class Usable : IActor
	{
		protected UsableManager _usableManager;
		protected bool _isUsed;
		protected bool _areParamsSetUp;
		protected IContext _currentContext;
		protected KartComposite _ownerKart;
		protected UsableDefinition _usableDefinition;
		protected AchievementManager _achievementManager;
		protected float _lifeTimer;
		protected UsableBehaviour _usableBehaviour;
		protected KartComposite _latestHitKart;
		private AtlasDefinitions _definitions;
		private bool _markedForDestroy;
		private bool _destroyWithVFX;
		private TransformData _originalVisualValues;
		private InHandUsableVisualsDefinition _inHandUsableDefinition;
		private TransformData _inHandUsableTransformValues;

		protected GameContextBase GameContextBase => _currentContext as GameContextBase;
		public UsableBehaviour Behaviour => _usableBehaviour;
		public UsableDefinition UsableDefinition => _usableDefinition;
		public bool IsUsed => _isUsed;
		public virtual bool IsAlive => _lifeTimer > 0f && !_markedForDestroy;
		public float TimeLeftAlive => _lifeTimer;
		public float TimeAlive => _usableDefinition != null ? _usableDefinition.GeneralData.LifeTime - _lifeTimer : 0f;
		public KartComposite OwnerKart => _ownerKart;
		protected bool MarkedForDestroy => _markedForDestroy;
		protected bool DestroyWithVFX => _destroyWithVFX;

		public virtual void Init(UsableManager usableManager, IContext context, AtlasDefinitions definitions, AchievementManager achievementManager)
		{
			_usableManager = usableManager;
			_currentContext = context;
			_definitions = definitions;
			_achievementManager = achievementManager;
		}

		public virtual void DeInit()
		{
			if (_areParamsSetUp)
			{
				OnTearDownParamsInternal();
			}
			_usableManager = null;
			_currentContext = null;
			_definitions = null;
			_achievementManager = null;
		}

		public void OnExitPool(UsableDefinition usableDefinition, UsableBehaviour usableBehaviour)
		{
			OnExitPool(usableDefinition, usableBehaviour, null, 0, 0);
		}

		public void OnExitPool(UsableDefinition usableDefinition, UsableBehaviour usableBehaviour, KartComposite ownerKart, int groupId, int sequenceId)
		{
			_areParamsSetUp = true;
			_ownerKart = ownerKart;
			_usableDefinition = usableDefinition;
			_usableBehaviour = usableBehaviour;
			_latestHitKart = null;
			if (_definitions != null && usableDefinition != null)
			{
				_inHandUsableDefinition = _definitions.GameDefinitions.GetDefinition<InHandUsableVisualsDefinition>((Core.Definitions.DefinitionID)usableDefinition.GeneralData.InHandVisualsID);
				SetInHandUsableTransformValues();
			}
		}

		public virtual void OnCharacterStartUse() { }
		public virtual void OnEnterPool()
		{
			if (_areParamsSetUp)
			{
				OnTearDownParamsInternal();
			}
		}

		public virtual void Destroy()
		{
			if (!_markedForDestroy)
			{
				_markedForDestroy = true;
				_destroyWithVFX = true;
			}
		}

		public void MarkForDestroy(bool destroyWithVFX)
		{
			_markedForDestroy = true;
			_destroyWithVFX = destroyWithVFX;
		}

		public void DestroyImmediately(bool destroyWithVFX)
		{
			if (_usableBehaviour != null)
			{
				DeSpawn(destroyWithVFX);
			}
		}

		public virtual void SetRemoteUseParams(bool hasStartPosition = false, Vector3 startPosition = default) { }

		public virtual void Use()
		{
			if (_usableDefinition != null)
			{
				if (!_usableDefinition.GeneralData.KeepInHandTransformValuesOnUse && _usableBehaviour != null && _usableBehaviour.VisualRoot != null)
				{
					_usableBehaviour.VisualRoot.localPosition = _originalVisualValues.Position;
					_usableBehaviour.VisualRoot.localRotation = _originalVisualValues.Rotation;
					_usableBehaviour.VisualRoot.localScale = _originalVisualValues.Scale;
				}
				_isUsed = true;
				_lifeTimer = _usableDefinition.GeneralData.LifeTime;
			}
		}

		public virtual void Update(IUpdateParams updateParams)
		{
			if (!_isUsed)
			{
				return;
			}
			_lifeTimer -= updateParams.DeltaTime;
			if (_lifeTimer <= 0f)
			{
				Destroy();
			}
		}

		public virtual void LateUpdate(IUpdateParams updateParams)
		{
			if (_markedForDestroy)
			{
				DeSpawn(_destroyWithVFX);
			}
		}

		public virtual void FixedUpdate(IUpdateParams updateParams) { }
		public virtual void PreFixedUpdate(IUpdateParams updateParams) { }
		public virtual void PostFixedUpdate(IUpdateParams updateParams) { }
		public virtual void EarlyUpdate(IUpdateParams updateParams) { }

		public void AttachToTransform(Transform attachTo)
		{
			if (_usableBehaviour != null)
			{
				Transform t = _usableBehaviour.transform;
				t.SetParent(attachTo, false);
				t.localPosition = Vector3.zero;
				t.localRotation = Quaternion.identity;
				t.localScale = Vector3.one;
			}
		}

		protected Vector3 InterpolateDespawnVFXPosition(KartComposite hitkart, Vector3 usableHitPosition, float interpolant)
		{
			if (hitkart != null && hitkart.KartPhysics != null && hitkart.KartPhysics.Rigidbody != null)
			{
				return Vector3.Lerp(usableHitPosition, hitkart.KartPhysics.Rigidbody.position, interpolant);
			}
			return usableHitPosition;
		}

		protected abstract void DeSpawn(bool destroyWithVFX);

		private void OnTearDownParamsInternal()
		{
			if (_usableBehaviour != null && _usableBehaviour.VisualRoot != null)
			{
				_usableBehaviour.VisualRoot.localPosition = _originalVisualValues.Position;
				_usableBehaviour.VisualRoot.localRotation = _originalVisualValues.Rotation;
				_usableBehaviour.VisualRoot.localScale = _originalVisualValues.Scale;
			}
			_areParamsSetUp = false;
			_inHandUsableDefinition = null;
			_inHandUsableTransformValues = default;
			if (_usableBehaviour != null && _usableBehaviour.Replicator != null)
			{
				_usableBehaviour.Replicator.ResetState();
			}
			_usableBehaviour = null;
			_isUsed = false;
			_ownerKart = null;
			_usableDefinition = null;
			_lifeTimer = -1f;
			_markedForDestroy = false;
			_destroyWithVFX = false;
		}

		private void SetInHandUsableTransformValues()
		{
			if (_ownerKart == null || _inHandUsableDefinition == null)
			{
				return;
			}
			_inHandUsableTransformValues = _inHandUsableDefinition.DefaultTransformData;
		}

		protected Usable()
		{
		}
	}
}
