using FlatBuffers;
using System;
using System.Collections.Generic;
using Unity.Collections;
using Unity.Jobs;
using UnityEngine;

namespace Core.Services
{
	[Serializable]
	public struct LeaderboardScore : IFlatbufferObject
	{
		private Table __p;
		public ByteBuffer ByteBuffer { get => default; }
		public ulong Context { get => default; }
		public string FormattedValue { get => default; }
		public Player? Player { get => default; }
		public uint Rank { get => default; }
		public ulong Value { get => default; }
	}
}
