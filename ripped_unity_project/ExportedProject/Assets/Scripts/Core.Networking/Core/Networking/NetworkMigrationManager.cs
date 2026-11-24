using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Core.Networking
{
	public class NetworkMigrationManager
	{
		public NetworkSessionTime MigrationStartTime;
		public NetworkMigrationState[] State;
		private int _stateIndex;
		private bool _stateReadyForRollback;
		private bool _isRollbackAllowedByState;
		public NetworkMigrationState MigrationState { get => default; set { } }
		public void Init() { }
		public void SetNetworkState(NetworkState state) { }
		public void AddKartData(uint syncId, Vector3 pos, Quaternion rot, short usableType, byte usableUsesLeft, byte battleScore, NetworkSessionTime lastHitTime, sbyte lapsCompleted, Vector2 trackCoords, bool halfway) { }
		private void SetMigrationState(int fromIndex) { }
		public void CompleteFrame() { }
	}
}
