using FlatBuffers;
using System;
using System.Collections.Generic;
using Unity.Collections;
using Unity.Jobs;
using UnityEngine;

namespace Core.Services
{
	[Serializable]
	public struct LeaderboardScores : IFlatbufferObject
	{
		private Table __p;
		public ByteBuffer ByteBuffer { get => default; }
		public int MaxRange { get => default; }
		public int DataLength { get => default; }
		public LeaderboardScore? LocalPlayerScore { get => default; }
		public LeaderboardOccurrence? CurrentOccurrence { get => default; }
		public LeaderboardOccurrence? PreviousOccurrence { get => default; }
	}
}
