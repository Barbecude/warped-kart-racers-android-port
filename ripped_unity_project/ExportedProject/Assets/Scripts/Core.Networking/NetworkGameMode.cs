using System;
using System.Collections.Generic;
using Unity.Collections;
using Unity.Jobs;
using UnityEngine;

namespace Core.Networking
{
	[Serializable]
	public struct NetworkGameMode
	{
		public enum NetworkGameModeState
		{
			None = 0,
			LoadingDone = 1,
			Advance = 2,
			Finished = 3,
			ResultsDone = 4,
			ExitGamePlay = 5,
			HostMigration = 6,
		}
		public uint SyncId;
		public NetworkGameMode.NetworkGameModeState State;
		public NetworkSessionTime StateTime;
		public byte ExtraData;
	}
}
