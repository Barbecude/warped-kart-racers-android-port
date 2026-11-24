using FlatBuffers;
using System;
using System.Collections.Generic;
using Unity.Collections;
using Unity.Jobs;
using UnityEngine;

namespace Core.Services
{
	[Serializable]
	public struct GetLeaderboardScoresRequest : IFlatbufferObject
	{
		private Table __p;
		public ByteBuffer ByteBuffer { get => default; }
		public string Id { get => default; }
		public int RangeMin { get => default; }
		public int RangeMax { get => default; }
		public LeaderboardPlayerScope PlayerScope { get => default; }
		public LeaderboardTimeScope TimeScope { get => default; }
		public bool PreviousOccurrence { get => default; }
	}
}
