using FlatBuffers;
using System;
using System.Collections.Generic;
using Unity.Collections;
using Unity.Jobs;
using UnityEngine;

namespace Core.Services
{
	[Serializable]
	public struct ReplicatorStream : IFlatbufferObject
	{
		public const int Size = 32;
		public Struct __p;
		public ByteBuffer ByteBuffer { get => default; }
		public ulong Cookie { get => default; }
		public byte SyncIdAndCategory { get => default; }
		public short SyncInstanceId { get => default; }
		public ReplicatorVector3 Position { get => default; }
		public ReplicatorQuaternion Rotation { get => default; }
		public ReplicatorVector3 Velocity { get => default; }
	}
}
