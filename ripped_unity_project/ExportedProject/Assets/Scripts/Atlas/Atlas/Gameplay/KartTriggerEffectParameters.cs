using System;
using UnityEngine;

namespace Atlas.Gameplay
{
	public enum KartTriggerSpinoutType
	{
		Spin = 0,
		Flip = 1
	}

	[Serializable]
	public class KartTriggerEffectParameters
	{
		[SerializeField]
		private int _priority;

		[Header("Spinout")]
		[SerializeField]
		private float _speedThresholdForSpinActivation;

		[SerializeField]
		private KartTriggerSpinoutType _spinoutType;

		[SerializeField]
		private float _spinDuration;

		[SerializeField]
		private float _spinInvulnPeriod;

		[SerializeField]
		private float _spinoutBrakeFactor = 0.5f;

		[Header("Push")]
		[SerializeField]
		private bool _isPushEffect;

		[SerializeField]
		private bool _relativePushVector;

		[SerializeField]
		private bool _ignoreVerticalPushDir;

		[SerializeField]
		private Vector3 _absolutePushDirection = Vector3.zero;

		[SerializeField]
		private bool _relativeForceToKartSpeed;

		[SerializeField]
		private float _absolutePushForce;

		[SerializeField]
		private float _relativePushForceModifier = 1f;

		[SerializeField]
		private float _pushCooldown;

		private Vector3 _absolutePushDirectionWorld = Vector3.zero;

		[Header("Speed Reduction")]
		[SerializeField]
		private bool _isSpeedReductionEffect;

		[SerializeField]
		private float _speedReductionDuration;

		[SerializeField]
		private bool _relativeSpeedLimit;

		[SerializeField]
		private float _absoluteReducedSpeedLimit = 10f;

		[SerializeField]
		private float _relativeSpeedReductionModifier = 1f;

		[SerializeField]
		private float _speedReductionCooldown;

		[Header("Magnetic")]
		[SerializeField]
		private bool _isMagneticEffect;

		[SerializeField]
		private float _magneticStrength;

		[SerializeField]
		private float _magneticRadius = 1f;

		[SerializeField]
		private bool _isRepel;

		public int Priority => _priority;
		public float SpeedThresholdForSpinActivation => _speedThresholdForSpinActivation;
		public KartTriggerSpinoutType SpinoutType => _spinoutType;
		public float SpinDuration => _spinDuration;
		public float SpinInvulnPeriod => _spinInvulnPeriod;
		public float SpinoutBrakeFactor => _spinoutBrakeFactor;
		public bool IsPushEffect => _isPushEffect;
		public bool RelativePushVector => _relativePushVector;
		public bool IgnoreVerticalPushDir => _ignoreVerticalPushDir;
		public Vector3 AbsolutePushDirection => _absolutePushDirection;
		public bool RelativeForceToKartSpeed => _relativeForceToKartSpeed;
		public float AbsolutePushForce => _absolutePushForce;
		public float RelativePushForceModifier => _relativePushForceModifier;
		public float PushCooldown => _pushCooldown;
		public bool IsSpeedReductionEffect => _isSpeedReductionEffect;
		public float SpeedReductionDuration => _speedReductionDuration;
		public bool RelativeSpeedLimit => _relativeSpeedLimit;
		public float AbsoluteReducedSpeedLimit => _absoluteReducedSpeedLimit;
		public float RelativeSpeedReductionModifier => _relativeSpeedReductionModifier;
		public float SpeedReductionCooldown => _speedReductionCooldown;
		public bool IsMagneticEffect => _isMagneticEffect;
		public float MagneticStrength => _magneticStrength;
		public float MagneticRadius => _magneticRadius;
		public bool IsRepel => _isRepel;
		public Vector3 AbsolutePushDirectionWorld => _absolutePushDirectionWorld;

		public void CalculateCacheValues(Transform transform)
		{
			_absolutePushDirectionWorld = (Vector3)(transform.localToWorldMatrix * (Vector4)_absolutePushDirection);
			_absolutePushDirectionWorld.Normalize();
		}
	}
}
