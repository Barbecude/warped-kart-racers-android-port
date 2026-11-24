using Core.Application;
using Unity.Profiling;
using UnityEngine;

namespace Atlas.Gameplay.Kart
{
	public class KartFollowCamera
	{
		private KartFollowCameraConfig _config;
		private VirtualCamera _virtualFollowCamera;
		private Transform _virtualFollowCameraTransform;
		private KartPhysics _kartPhysics;
		private Transform _kartTransform;
		private bool _isTracking;
		private FollowCameraParams _currentParams;
		private float _currentYaw;
		private Vector3 _currentGroundNormal = Vector3.up;
		private Vector3 _camPosition = Vector3.zero;
		private Quaternion _camRotation = Quaternion.identity;
		private float _collisionCooldownTimer;
		private bool _reverseAtCollision;
		private float _followTargetYawOffset;
		private float _kartSpeedRatio;

		private static readonly ProfilerMarker FixedUpdateProfilerMarker = new ProfilerMarker("KartFollowCamera.FixedUpdate()");

		public Transform FollowTarget { get; set; }
		public VirtualCamera VirtualFollowCamera => _virtualFollowCamera;

		private bool IsReversing => _kartPhysics.Body.LngSpeedSign < 0f && _kartPhysics.Input.Data.Reverse > 0f;

		public void Init(KartFollowCameraConfig config, Camera camera, VirtualCamera virtualFollowCamera)
		{
			_config = config;
			virtualFollowCamera.Init(camera);
			_virtualFollowCamera = virtualFollowCamera;
			_virtualFollowCameraTransform = virtualFollowCamera.transform;
		}

		public void DeInit()
		{
			_virtualFollowCamera.StopTracking();
			_virtualFollowCamera.DeInit();
			_config = null;
			_virtualFollowCamera = null;
			_virtualFollowCameraTransform = null;
		}

		public void StartTracking()
		{
			_virtualFollowCamera.StartTracking(-1f, null);
			_isTracking = true;
		}

		public void StopTracking()
		{
			_virtualFollowCamera.StopTracking();
			_isTracking = false;
		}

		public void SetTarget(KartPhysics kartPhysics)
		{
			_kartPhysics = kartPhysics;
			_currentYaw = _virtualFollowCameraTransform.rotation.eulerAngles.y;
			_kartTransform = kartPhysics.GameObject.transform;
			_currentParams = _config.NormalParams;
			UpdateCamera();
		}

		public void LateUpdate(IUpdateParams updateParams)
		{
			using (FixedUpdateProfilerMarker.Auto())
			{
				if (!(bool)_virtualFollowCameraTransform)
				{
					return;
				}
				if (updateParams.DeltaTime < Mathf.Epsilon)
				{
					return;
				}

				_kartSpeedRatio = _kartPhysics.Body.Speed / _kartPhysics.Handling.SpeedHardCap;

				float driftTarget = _kartPhysics.Body.Drifting;
				float driftDelayFrom = GetSpeedInterpolatedValue(in _config.DriftParams.DelayFrom);
				float driftDelayTo = GetSpeedInterpolatedValue(in _config.DriftParams.DelayTo);

				float boostTarget = _kartPhysics.Body.Boosting;
				float boostDelayFrom = GetSpeedInterpolatedValue(in _config.BoostParams.DelayFrom);
				float boostDelayTo = GetSpeedInterpolatedValue(in _config.BoostParams.DelayTo);

				bool reversing = (_collisionCooldownTimer == 0f) ? IsReversing : _reverseAtCollision;
				float reverseTarget = reversing ? 1f : 0f;
				float reverseDelayFrom = GetSpeedInterpolatedValue(in _config.ReverseParams.DelayFrom);
				float reverseDelayTo = GetSpeedInterpolatedValue(in _config.ReverseParams.DelayTo);

				float glidingTarget = _kartPhysics.Body.Gliding ? 1f : 0f;
				float glidingDelayFrom = GetSpeedInterpolatedValue(in _config.GlidingParams.DelayFrom);
				float glidingDelayTo = GetSpeedInterpolatedValue(in _config.GlidingParams.DelayTo);

				_config.DriftParams.Ratio = Mathf.Lerp(driftTarget, _config.DriftParams.Ratio, (1f - driftTarget) * driftDelayFrom + driftTarget * driftDelayTo);
				_config.BoostParams.Ratio = Mathf.Lerp(boostTarget, _config.BoostParams.Ratio, (1f - boostTarget) * boostDelayFrom + boostTarget * boostDelayTo);
				_config.ReverseParams.Ratio = Mathf.Lerp(reverseTarget, _config.ReverseParams.Ratio, (1f - reverseTarget) * reverseDelayFrom + reverseTarget * reverseDelayTo);
				_config.GlidingParams.Ratio = Mathf.Lerp(glidingTarget, _config.GlidingParams.Ratio, (1f - glidingTarget) * glidingDelayFrom + glidingTarget * glidingDelayTo);

				_currentParams = FollowCameraParams.Lerp(in _config.NormalParams, in _config.DriftParams);
				_currentParams = FollowCameraParams.Lerp(in _currentParams, in _config.BoostParams);
				_currentParams = FollowCameraParams.Lerp(in _currentParams, in _config.ReverseParams);
				_currentParams = FollowCameraParams.Lerp(in _currentParams, in _config.GlidingParams);

				float dirSign = 1f;
				if (_kartPhysics.Input.Data.Reverse > 0f && _collisionCooldownTimer == 0f)
				{
					dirSign = -1f;
				}

				Vector3 kartForward = _kartPhysics.GameObject.transform.forward * dirSign;
				Vector3 velocity = (Vector3)_kartPhysics.Body.RigidbodyVelocity;
				float velSign = Mathf.Sign(Vector3.Dot(velocity, kartForward));
				kartForward.y = 0f;
				velocity *= velSign;
				velocity.y = 0f;
				kartForward.Normalize();

				Vector3 velDir = kartForward;
				if (velocity.sqrMagnitude > 0.1f)
				{
					velDir = velocity.normalized;
				}

				float faceAngle = Vector3.SignedAngle(Vector3.forward, kartForward, Vector3.up);
				float velAngle = Vector3.SignedAngle(Vector3.forward, velDir, Vector3.up);
				float faceToVelRatio = GetSpeedInterpolatedValue(in _currentParams.FaceToVelocityRatio);
				float targetYaw = CalculateDelayedAngle(velAngle, faceAngle, faceToVelRatio);
				float yawDelay = GetSpeedInterpolatedValue(in _currentParams.YawDelay);
				_currentYaw = CalculateDelayedAngle(_currentYaw, targetYaw, yawDelay);

				if (_collisionCooldownTimer > 0f)
				{
					_collisionCooldownTimer -= updateParams.DeltaTime;
					if (_collisionCooldownTimer <= 0f)
					{
						_collisionCooldownTimer = 0f;
					}
				}

				UpdateFollowTargetYawOffset();
				UpdateCamera();
			}
		}

		private float CalculateDelayedAngle(float currentAngle, float newAngle, float delay)
		{
			float delta = Mathf.DeltaAngle(currentAngle, newAngle);
			return Mathf.Lerp(currentAngle + delta, currentAngle, delay);
		}

		private void UpdateCamera()
		{
			_currentGroundNormal = Vector3.Lerp(_currentGroundNormal, (Vector3)_kartPhysics.Body.GroundNormal, _currentParams.RampAdjustmentLerpFactor);

			Vector3 flatForward = _kartTransform.forward;
			flatForward.y = 0f;
			flatForward.Normalize();
			float rampDot = Vector3.Dot(flatForward, _currentGroundNormal);

			Quaternion fromRot = Quaternion.Euler(0f, _currentYaw + _followTargetYawOffset, 0f) * _currentParams.From.Rotation(_kartSpeedRatio);
			Vector3 fromPos = _kartTransform.position + fromRot * _currentParams.From.Offset(_kartSpeedRatio) + Vector3.up * (rampDot * _currentParams.RampAdjustmentFromOffsetYAdjustment);

			Quaternion targetRot = Quaternion.Euler(0f, _currentYaw + _followTargetYawOffset, 0f) * _currentParams.Target.Rotation(_kartSpeedRatio);
			Vector3 targetPos = _kartTransform.position + targetRot * _currentParams.Target.Offset(_kartSpeedRatio) + Vector3.down * (rampDot * _currentParams.RampAdjustmentTargetOffsetYAdjustment);

			_camPosition = fromPos;
			Vector3 lookDir = targetPos - fromPos;
			if (lookDir.sqrMagnitude > 0f)
			{
				_camRotation = Quaternion.LookRotation(lookDir);
			}

			if (_virtualFollowCameraTransform != null && _isTracking)
			{
				_virtualFollowCameraTransform.localPosition = _camPosition;
				_virtualFollowCameraTransform.localRotation = _camRotation;
				_virtualFollowCamera.FieldOfView = GetSpeedInterpolatedValue(in _currentParams.FieldOfView);
			}
		}

		private void UpdateFollowTargetYawOffset()
		{
			float targetOffset = 0f;
			if ((bool)FollowTarget)
			{
				Vector3 toTarget = FollowTarget.position - _kartTransform.position;
				toTarget.y = 0f;
				Vector3 forward = _kartTransform.forward;
				forward.y = 0f;
				Vector3 right = _kartTransform.right;
				right.y = 0f;

				float angle = Quaternion.Angle(Quaternion.LookRotation(toTarget), Quaternion.LookRotation(forward));
				if (angle <= _config.FollowTargetAngleHardThreshold)
				{
					targetOffset = angle;
					if (angle > _config.FollowTargetAngleSoftThreshold)
					{
						targetOffset *= 1f - (angle - _config.FollowTargetAngleSoftThreshold) / (_config.FollowTargetAngleHardThreshold - _config.FollowTargetAngleSoftThreshold);
					}
				}
				targetOffset *= _config.FollowTargetMultiplier;
				if (Vector3.Dot(toTarget, right) < 0f)
				{
					targetOffset = -targetOffset;
				}
			}
			_followTargetYawOffset = Mathf.Lerp(_followTargetYawOffset, targetOffset, _config.FollowTargetDamping);
		}

		private float GetSpeedInterpolatedValue(in Vector2 value)
		{
			return Mathf.Lerp(value.x, value.y, _kartSpeedRatio);
		}
	}
}
