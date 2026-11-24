using Atlas.Rendering;
using UnityEngine;

namespace Atlas.Gameplay.Kart
{
	public class CharacterVisualBehaviour : BaseVisualBehaviour
	{
		public static readonly int AnimFinishedState = Animator.StringToHash("AnimFinished");
		public static readonly int ReactAngryParamId = Animator.StringToHash("ReactAngry");

		[SerializeField]
		private Transform _rightHandAttachTransform;

		[SerializeField]
		private Transform _leftHandAttachTransform;

		[SerializeField]
		private CameraAdaptiveBlendShapesBehaviour _cameraAdaptiveBlendShapesBehaviour;

		[SerializeField]
		private bool _hasOwnSteeringWheel;

		[SerializeField]
		private AnimatorOverrideController _kartAnimatorOverride;

		[SerializeField]
		private ParticleSystem _dizzyParticleSystem;

		public Transform RightHandAttachTransform => _rightHandAttachTransform;
		public Transform LeftHandAttachTransform => _leftHandAttachTransform;
		public CameraAdaptiveBlendShapesBehaviour CameraAdaptiveBlendShapesBehaviour => _cameraAdaptiveBlendShapesBehaviour;
		public bool HasOwnSteeringWheel => _hasOwnSteeringWheel;
		public AnimatorOverrideController KartAnimatorOverride => _kartAnimatorOverride;
		public bool AnimFinished => _animator.GetBool(AnimFinishedState);
		public ParticleSystem DizzyParticleSystem => _dizzyParticleSystem;

		public void UpdateBlendShapesWithCamera(Camera camera, float kartToCamDistance)
		{
			if (_cameraAdaptiveBlendShapesBehaviour != null)
			{
				_cameraAdaptiveBlendShapesBehaviour.UpdateWithCamera(camera, kartToCamDistance);
			}
		}

		public void InvulnChanged(bool invuln)
		{
			if ((bool)_dizzyParticleSystem)
			{
				if (invuln)
				{
					_dizzyParticleSystem.Play(true);
				}
				else
				{
					_dizzyParticleSystem.Stop(true, ParticleSystemStopBehavior.StopEmittingAndClear);
				}
			}
		}

		public void TriggerReactAngry()
		{
			_animator.SetTrigger(ReactAngryParamId);
		}
	}
}
