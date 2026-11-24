using FlatBuffers;
using System;
using System.Collections.Generic;
using Unity.Collections;
using Unity.Jobs;
using UnityEngine;

namespace Core.Networking
{
	[Serializable]
	public struct Car : IFlatbufferObject
	{
		private Struct __p;
		public ByteBuffer ByteBuffer { get => default; }
		public uint SyncId { get => default; }
		public CarBase Base { get => default; }
	}
}
