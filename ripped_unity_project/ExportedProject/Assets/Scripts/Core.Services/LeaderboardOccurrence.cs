using FlatBuffers;
using System;
using System.Collections.Generic;
using Unity.Collections;
using Unity.Jobs;
using UnityEngine;

namespace Core.Services
{
	[Serializable]
	public struct LeaderboardOccurrence : IFlatbufferObject
	{
		private Table __p;
		public ByteBuffer ByteBuffer { get => default; }
		public long StartDate { get => default; }
		public long NextStartDate { get => default; }
	}
}
