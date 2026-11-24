using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Core.Services
{
	public static class ReplicatorViewId
	{
		private const byte unsetReplicatorSyncId = 0;
		private const byte streamSyncIdBitMask = 15;
		private const byte streamSyncCategoryBitOffset = 4;
		public static ulong Create(uint syncId, short syncInstanceId, SyncCategory syncCategory) { return default; }
		public static ulong Create(ReplicatorData data, ReplicatorStream stream) { return default; }
		public static byte CreateSyncIdAndCategory(uint playerSyncId, uint syncId, SyncCategory syncCategory) { return default; }
	}
}
