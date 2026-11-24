using FlatBuffers;
using System;
using System.Collections.Generic;
using Unity.Collections;
using Unity.Jobs;
using UnityEngine;

namespace Core.Services
{
	[Serializable]
	public struct ReplicatorQuaternion : IFlatbufferObject
	{
		private Struct __p;
		public ByteBuffer ByteBuffer { get => default; }
		public byte X { get => default; }
		public byte Y { get => default; }
		public byte Z { get => default; }
		public byte W { get => default; }
	}
}
