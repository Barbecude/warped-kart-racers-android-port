using FlatBuffers;
using System;
using System.Collections.Generic;
using Unity.Collections;
using Unity.Jobs;
using UnityEngine;

namespace Core.Networking
{
	[Serializable]
	public struct Vote : IFlatbufferObject
	{
		private Struct __p;
		public ByteBuffer ByteBuffer { get => default; }
		public uint SyncId { get => default; }
		public short Data { get => default; }
		public sbyte Type { get => default; }
	}
}
