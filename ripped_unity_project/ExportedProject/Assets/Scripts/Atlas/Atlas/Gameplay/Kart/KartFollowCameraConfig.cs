using System;
using Atlas.Definitions;
using Core.Definitions;
using UnityEngine;

namespace Atlas.Gameplay.Kart
{
	[Serializable]
	public struct KartFollowCameraOffset
	{
		[SerializeField]
		private Vector2 _length;

		[SerializeField]
		private Vector2 _height;

		[SerializeField]
		private Vector2 _pitch;

		public float Length(float speedRatio)
		{
			return Mathf.Lerp(_length.x, _length.y, speedRatio);
		}

		public float Height(float speedRatio)
		{
			return Mathf.Lerp(_height.x, _height.y, speedRatio);
		}

		public float Pitch(float speedRatio)
		{
			return Mathf.Lerp(_pitch.x, _pitch.y, speedRatio);
		}

		public Vector3 Offset(float speedRatio)
		{
			return new Vector3(0f, Height(speedRatio), Length(speedRatio));
		}

		public Quaternion Rotation(float speedRatio)
		{
			return Quaternion.Euler(Pitch(speedRatio), 0f, 0f);
		}

		public static KartFollowCameraOffset Lerp(in KartFollowCameraOffset a, in KartFollowCameraOffset b, float t)
		{
			return new KartFollowCameraOffset
			{
				_length = Vector2.Lerp(a._length, b._length, t),
				_height = Vector2.Lerp(a._height, b._height, t),
				_pitch = Vector2.Lerp(a._pitch, b._pitch, t)
			};
		}
	}

	[Serializable]
	public struct FollowCameraParams
	{
		private const float MAX_DELAY = 1000f;
		private const float ONE_OVER_MAX_DELAY = 0.001f;

		[Tooltip("0 = follow kart facing, 1 = follow kart velocity")]
		[SerializeField]
		private Vector2 _faceToVelocityRatio;

		[SerializeField]
		private KartFollowCameraOffset _from;

		[SerializeField]
		private KartFollowCameraOffset _target;

		[Space]
		[SerializeField]
		private Vector2 _fieldOfView;

		[SerializeField]
		private Vector2 _yawDelay;

		[SerializeField]
		private Vector2 _delayTo;

		[SerializeField]
		private Vector2 _delayFrom;

		[Header("Ramp Adjustment")]
		[Range(0f, 1f)]
		[SerializeField]
		private float _rampAdjustmentLerpFactor;

		[SerializeField]
		private float _rampAdjustmentFromOffsetYAdjustment;

		[SerializeField]
		private float _rampAdjustmentTargetOffsetYAdjustment;

		public Vector2 FaceToVelocityRatio => _faceToVelocityRatio;
		public Vector2 YawDelay => _yawDelay * ONE_OVER_MAX_DELAY;
		public Vector2 FieldOfView => _fieldOfView;
		public Vector2 DelayTo => _delayTo * ONE_OVER_MAX_DELAY;
		public Vector2 DelayFrom => _delayFrom * ONE_OVER_MAX_DELAY;
		public float Ratio { get; set; }
		public float RampAdjustmentLerpFactor => _rampAdjustmentLerpFactor;
		public float RampAdjustmentFromOffsetYAdjustment => _rampAdjustmentFromOffsetYAdjustment;
		public float RampAdjustmentTargetOffsetYAdjustment => _rampAdjustmentTargetOffsetYAdjustment;
		public KartFollowCameraOffset From => _from;
		public KartFollowCameraOffset Target => _target;

		public static FollowCameraParams Lerp(in FollowCameraParams a, in FollowCameraParams b, float t)
		{
			float ct = Mathf.Clamp01(t);
			return new FollowCameraParams
			{
				_faceToVelocityRatio = Vector2.Lerp(a._faceToVelocityRatio, b._faceToVelocityRatio, ct),
				_from = KartFollowCameraOffset.Lerp(in a._from, in b._from, t),
				_target = KartFollowCameraOffset.Lerp(in a._target, in b._target, t),
				_fieldOfView = Vector2.Lerp(a._fieldOfView, b._fieldOfView, ct),
				_yawDelay = Vector2.Lerp(a._yawDelay, b._yawDelay, ct),
				_delayTo = Vector2.Lerp(a._delayTo, b._delayTo, ct),
				_delayFrom = Vector2.Lerp(a._delayFrom, b._delayFrom, ct),
				_rampAdjustmentLerpFactor = Mathf.Lerp(a._rampAdjustmentLerpFactor, b._rampAdjustmentLerpFactor, t),
				_rampAdjustmentFromOffsetYAdjustment = Mathf.Lerp(a._rampAdjustmentFromOffsetYAdjustment, b._rampAdjustmentFromOffsetYAdjustment, t),
				_rampAdjustmentTargetOffsetYAdjustment = Mathf.Lerp(a._rampAdjustmentTargetOffsetYAdjustment, b._rampAdjustmentTargetOffsetYAdjustment, t),
				Ratio = 0f
			};
		}

		public static FollowCameraParams Lerp(in FollowCameraParams a, in FollowCameraParams b)
		{
			return Lerp(in a, in b, b.Ratio);
		}
	}

	[CreateAssetMenu(fileName = "KartFollowCameraConfig", menuName = "Atlas/Kart/KartFollowCameraConfig")]
	public class KartFollowCameraConfig : Definition
	{
		public FollowCameraParams NormalParams;
		public FollowCameraParams DriftParams;
		public FollowCameraParams BoostParams;
		public FollowCameraParams ReverseParams;
		public FollowCameraParams GlidingParams;

		[Space]
		public float CollisionCooldown;

		[Header("Follow Target")]
		public float FollowTargetDamping = 0.01f;
		public float FollowTargetMultiplier = 0.5f;
		public float FollowTargetAngleSoftThreshold = 60f;
		public float FollowTargetAngleHardThreshold = 70f;
	}
}
