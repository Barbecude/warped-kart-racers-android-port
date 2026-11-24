using FlatBuffers;
using System;
using System.Collections.Generic;
using Unity.Collections;
using Unity.Jobs;
using UnityEngine;

namespace Core.Services
{
	[Serializable]
	public struct SaveFile : IFlatbufferObject
	{
		private Table __p;
		public ByteBuffer ByteBuffer { get => default; }
		public bool Dirty { get => default; }
		public bool Deleted { get => default; }
		public long LastUpdatedAt { get => default; }
		public string DeviceName { get => default; }
		public uint Size { get => default; }
	}
}
