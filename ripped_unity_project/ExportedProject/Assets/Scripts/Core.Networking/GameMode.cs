using FlatBuffers;
using System;
using System.Collections.Generic;
using Unity.Collections;
using Unity.Jobs;
using UnityEngine;

namespace Core.Networking
{
	[Serializable]
	public struct GameMode : IFlatbufferObject
	{
		private Struct __p;
		public ByteBuffer ByteBuffer { get => default; }
		public sbyte State { get => default; }
		public int StateTime { get => default; }
		public uint SyncId { get => default; }
		public byte ExtraData { get => default; }
	}
}
