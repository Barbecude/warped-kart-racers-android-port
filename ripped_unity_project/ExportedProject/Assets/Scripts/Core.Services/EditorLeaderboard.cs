using FlatBuffers;
using System;
using System.Collections.Generic;
using Unity.Collections;
using Unity.Jobs;
using UnityEngine;

namespace Core.Services
{
	[Serializable]
	public struct EditorLeaderboard : IFlatbufferObject
	{
		private Table __p;
		public ByteBuffer ByteBuffer { get => default; }
		public string Id { get => default; }
		public long Duration { get => default; }
		public bool Empty { get => default; }
		public bool SortAscending { get => default; }
		public int RandomScoreMin { get => default; }
		public int RandomScoreMax { get => default; }
		public int RandomScoreEnrtryCountMin { get => default; }
		public int RandomScoreEnrtryCountMax { get => default; }
	}
}
