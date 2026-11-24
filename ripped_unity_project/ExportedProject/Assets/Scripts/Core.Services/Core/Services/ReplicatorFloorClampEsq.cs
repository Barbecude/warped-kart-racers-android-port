using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Core.Services
{
	public class ReplicatorFloorClampEsq
	{
		private bool _init;
		private float _colliderHeight;
		private float _previousHeightCorrection;
		private const float MaxRaycastLengthScale = 2.5f;
		private static readonly LayerMask RaycastMask;
		private static readonly ProfilerMarker ClampToFloorProfileMarker;
		public void Init(Collider collider) { }
		public Vector3 ClampToFloor(Vector3 position) { return default; }
	}
}
