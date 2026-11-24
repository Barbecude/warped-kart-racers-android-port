using System;
using System.Collections.Generic;
using Unity.Collections;
using Unity.Jobs;
using UnityEngine;

namespace Core.Networking
{
	[Serializable]
	public struct NetworkUsable
	{
		public uint SyncId;
		public short GroupId;
		public byte ChargesRemaining;
		public short UsableKey;
		public byte Action;
		public NetworkSessionTime TimeStamp;
		public Vector3 Position;
		public bool HasPosition { get => default; }
	}
}
