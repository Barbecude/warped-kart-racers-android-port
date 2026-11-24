using FlatBuffers;
using System;
using System.Collections.Generic;
using Unity.Collections;
using Unity.Jobs;
using UnityEngine;

namespace Core.Networking
{
	[Serializable]
	public struct UsableBase : IFlatbufferObject
	{
		private Struct __p;
		public ByteBuffer ByteBuffer { get => default; }
		public Vec3 Position { get => default; }
		public byte GroupId { get => default; }
		public byte ChargesRemaining { get => default; }
		public short UsableKey { get => default; }
		public byte Action { get => default; }
		public int Time { get => default; }
	}
}
