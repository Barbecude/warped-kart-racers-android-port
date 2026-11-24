using System;
using System.Collections.Generic;
using Unity.Collections;
using Unity.Jobs;
using UnityEngine;

namespace Core.Networking
{
	[Serializable]
	public struct NetworkCar
	{
		public uint SyncId;
		public bool Own;
		public sbyte BattleScore;
		public NetworkSessionTime LastHitTime;
	}
}
