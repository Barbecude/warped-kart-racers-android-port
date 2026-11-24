using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Core.Services
{
	public class Replicator : MonoBehaviour
	{
		private Internal client;
		private ReplicatorProviderEsq provider;
		private ulong cookie;
		private uint previousSyncId;
		public Collider Collider;
		public uint SyncId;
		public bool SyncOwner;
		public SyncCategory SyncCategory;
		public short SyncInstanceId;
		public ulong SyncCookie;
		public float SnapTime;
		public bool PredictionEnabled;
		public bool FloorClampEnabled;
		public bool SimulateFlyingEnabled;
		public ulong LatestCookie { get => default; }
		public bool IsReplicating { get => default; }
		public ulong ViewID { get => default; }
		public Vector3 LatestLocalPosition { get => default; }
		public Quaternion LatestLocalRotation { get => default; }
		public Vector3 LatestPosition { get => default; }
		public Quaternion LatestRotation { get => default; }
		public Vector3 LastKnownPosition { get => default; }
		public Quaternion LastKnownRotation { get => default; }
		public bool VelocityOnlyMode { get => default; }
		public Vector3 RigidBodyVelocity { get => default; }
		public void EnableReducedMode() { }
		public void UpdateTransform(ReplicatorUpdateParams updateParams) { }
		public void Clear() { }
		public virtual string ToString() { return default; }
		private void Start() { }
		private void Initialise() { }
		private void OnDestroy() { }
		private void OnUpdateReplicatorData(ReplicatorOutput output) { }
		private bool ShouldSend() { return default; }
		private bool ShouldReceive(ulong viewId) { return default; }
		private void OnReplicatorStream(ulong viewId, int time, ReplicatorStream data) { }
	}
}
