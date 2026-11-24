using System;
using UnityEngine;

namespace Atlas.Gameplay.Kart
{
	[Serializable]
	public class KartPhysicsSetup
	{
		public enum EWheel
		{
			FrontLeft = 0,
			FrontRight = 1,
			RearLeft = 2,
			RearRight = 3
		}

		public const int WheelCount = 4;

		[Header("Dimensions & Mass")]
		[SerializeField]
		protected Vector3 _offset = Vector3.zero;
		[SerializeField]
		protected Vector3 _angularInertia = Vector3.zero;
		[SerializeField]
		protected float _width = 0.8f;
		[SerializeField]
		protected float _length = 1.5f;
		[SerializeField]
		protected float _height = 0.5f;
		[SerializeField]
		protected float _trackWidth = 0.7f;
		[SerializeField]
		protected float _overHang = 0.2f;
		[SerializeField]
		protected float _wheelBase = 1.25f;
		[SerializeField]
		protected float _rideHeight = 0.15f;
		[SerializeField]
		protected float _dampingRatio = 0.25f;
		[SerializeField]
		protected float _bottomingDampingRatio = 5f;
		[SerializeField]
		protected float _remoteKartMassScale = 0.5f;

		public Vector3 Offset => _offset;
		public Vector3 AngularInertia => _angularInertia;
		public float Width => _width;
		public float Length => _length;
		public float Height => _height;
		public float TrackWidth => _trackWidth;
		public float OverHang => _overHang;
		public float WheelBase => _wheelBase;
		public float RideHeight => _rideHeight;
		public float DampingRatio => _dampingRatio;
		public float BottomingDampingRatio => _bottomingDampingRatio;
		public float RemoteKartMassScale => _remoteKartMassScale;

		public KartPhysicsSetup()
		{
			_offset = Vector3.zero;
			_angularInertia = Vector3.zero;
			_width = 0.8f;
			_length = 1.5f;
			_height = 0.5f;
			_trackWidth = 0.7f;
			_overHang = 0.2f;
			_wheelBase = 1.25f;
			_rideHeight = 0.15f;
			_dampingRatio = 0.25f;
			_bottomingDampingRatio = 5f;
			_remoteKartMassScale = 0.5f;
		}
	}
}
