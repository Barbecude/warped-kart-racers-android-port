using System;
using UnityEngine;

namespace Atlas.Gameplay.Kart
{
	[Serializable]
	public class KartPhysicsInputConfig
	{
		[Range(0f, 360f)]
		[SerializeField]
		protected float _maxAngleVirtualSteeringWheel = 135f;

		[Range(0f, 1f)]
		[SerializeField]
		protected float _glidingPitchUpDeadZone = 0.5f;

		[Range(0f, 90f)]
		[SerializeField]
		protected float _glidingPitchUpDeadZoneAngle = 45f;

		[Range(0f, 1f)]
		[SerializeField]
		protected float _glidingPitchDownDeadZone = 0.5f;

		[Range(0f, 90f)]
		[SerializeField]
		protected float _glidingPitchDownDeadZoneAngle = 45f;

		[Range(0f, 1f)]
		[SerializeField]
		protected float _brakeDeadZone = 0.5f;

		[Range(0f, 90f)]
		[SerializeField]
		protected float _brakeDeadZoneAngle = 45f;

		[SerializeField]
		protected bool _disableBrakeOnDrift;

		[SerializeField]
		protected bool _disableReverse;

		[SerializeField]
		protected bool _extraSteerEnabled;

		public float MaxAngleVirtualSteeringWheel => _maxAngleVirtualSteeringWheel;
		public float GlidingPitchUpDeadZone => _glidingPitchUpDeadZone;
		public float GlidingPitchUpDeadZoneAngleRadians => _glidingPitchUpDeadZoneAngle * Mathf.Deg2Rad;
		public float GlidingPitchDownDeadZone => _glidingPitchDownDeadZone;
		public float GlidingPitchDownDeadZoneAngleRadians => _glidingPitchDownDeadZoneAngle * Mathf.Deg2Rad;
		public float BrakeDeadZone => _brakeDeadZone;
		public float BrakeDeadZoneAngleRadians => _brakeDeadZoneAngle * Mathf.Deg2Rad;
		public bool DisableBrakeOnDrift => _disableBrakeOnDrift;
		public bool DisableReverse => _disableReverse;
		public bool ExtraSteerEnabled => _extraSteerEnabled;

		public KartPhysicsInputConfig()
		{
			_maxAngleVirtualSteeringWheel = 135f;
			_glidingPitchUpDeadZone = 0.5f;
			_glidingPitchUpDeadZoneAngle = 45f;
			_glidingPitchDownDeadZone = 0.5f;
			_glidingPitchDownDeadZoneAngle = 45f;
			_brakeDeadZone = 0.5f;
			_brakeDeadZoneAngle = 45f;
		}
	}
}
