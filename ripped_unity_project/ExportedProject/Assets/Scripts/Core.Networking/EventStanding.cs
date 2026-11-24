using FlatBuffers;
using System;
using System.Collections.Generic;
using Unity.Collections;
using Unity.Jobs;
using UnityEngine;

namespace Core.Networking
{
	[Serializable]
	public struct EventStanding : IFlatbufferObject
	{
		private Table __p;
		public ByteBuffer ByteBuffer { get => default; }
		public uint SyncId { get => default; }
		public byte BattleScore { get => default; }
		public int TimeStamp { get => default; }
		public float SplinePosition { get => default; }
		public bool Dnf { get => default; }
	}
}
