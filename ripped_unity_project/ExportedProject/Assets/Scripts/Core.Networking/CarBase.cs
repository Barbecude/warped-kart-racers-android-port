using FlatBuffers;
using System;
using System.Collections.Generic;
using Unity.Collections;
using Unity.Jobs;
using UnityEngine;

namespace Core.Networking
{
	[Serializable]
	public struct CarBase : IFlatbufferObject
	{
		private Struct __p;
		public ByteBuffer ByteBuffer { get => default; }
		public sbyte BattleScore { get => default; }
		public int LastHitTime { get => default; }
	}
}
