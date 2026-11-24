using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Core.Services
{
	public class ReplicatorProviderEsq
	{
		public class Extrapolator3 { }
		private Rigidbody _rb;
		private ReplicatorFloorClampEsq _clamper;
		private readonly Internal _client;
		private readonly Replicator _replicator;
		private bool _hasHadFirstNetworkUpdate;
		private const float _velocityOnlyTime = 1;
		private const float _gravityOnlyTime = 2.5f;
		private double _latestNetworkTime;
		private Vector3 _latestNetworkPos;
		private Quaternion _latestNetworkRot;
		private Vector3 _latestNetworkVel;
		private double _previousNetworkTime;
		private Quaternion _previousNetworkRot;
		private Vector3 _lastKnownNetworkPos;
		private Quaternion _lastKnownNetworkRot;
		private Vector3 _instantVel;
		private Vector3 _deadReckoningPos;
		private double _realtimeSinceUpdate;
		private double _realtimeSinceNetworkUpdate;
		private Vector3 _cachedPosition;
		private Vector3 _cachedVelocity;
		private Quaternion _cachedRotations;
		private bool _reducedReplicatorMode;
		private ReplicatorProviderEsq.Extrapolator3 _extrapolator;
		private const float _positionQuantizeMinMax = 2000;
		private const float _velocityQuantizeMinMax = 100;
		private const float _rotationQuantizeMinMax = 1;
		private const float Epsilon = 1E-05;
		private bool _velocityOnlyMode;
		private bool _gravityOnlyMode;
		public bool HasHadFirstNetworkUpdate { get => default; }
		public Vector3 GetRigidBodyVelocity() { return default; }
		public void EnableReducedMode() { }
		public Vector3 GetLatestPosition() { return default; }
		public Quaternion GetLatestRotation() { return default; }
		public Vector3 GetLastKnownPosition() { return default; }
		public Quaternion GetLastKnownRotation() { return default; }
		public bool VelocityOnlyMode() { return default; }
		public void GetOwnerState(ref QuantizedVector3UShort position, ref QuantizedVector3UShort velocity, ref QuantizedQuaternionByte rotation) { }
		public void GetOwnerState(ref Vector3 positionOut, ref Vector3 velocityOut, ref Quaternion rotationOut) { }
		public void OnOwnerChanged() { }
		public void OnUpdateTransform(ReplicatorUpdateParams updateParams) { }
		public void OnClear() { }
		public void OnReplicatorStream(int originalTime, ReplicatorStream stream) { }
		private void SetPosition(Vector3 pos) { }
		private double NowPacketTime() { return default; }
		private static double ToPacketTime(int time) { return default; }
		private static bool IsNaN(Vector3 v) { return default; }
		private static bool IsNaN(Quaternion q) { return default; }
		private static Vector3 ToVector3(ReplicatorVector3 v, float minMax) { return default; }
		private static Quaternion ToQuaternion(ReplicatorQuaternion q, float minMax) { return default; }
	}
}
