using FlatBuffers;
using System;
using System.Collections.Generic;
using Unity.Collections;
using Unity.Jobs;
using UnityEngine;

namespace Core.Services
{
	[Serializable]
	public struct Leaderboard : IFlatbufferObject
	{
		private Table __p;
		public ByteBuffer ByteBuffer { get => default; }
		public string Id { get => default; }
		public string Title { get => default; }
		public LeaderboardOccurrence? CurrentOccurrence { get => default; }
		public LeaderboardOccurrence? PreviousOccurrence { get => default; }
	}
}
