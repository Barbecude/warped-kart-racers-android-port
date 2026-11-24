using FlatBuffers;
using System;
using System.Collections.Generic;
using Unity.Collections;
using Unity.Jobs;
using UnityEngine;

namespace Core.Services
{
	[Serializable]
	public struct ReadSaveRequest : IFlatbufferObject
	{
		private Table __p;
		public ByteBuffer ByteBuffer { get => default; }
		public uint Index { get => default; }
		public bool Conflict { get => default; }
		public long ToAddress { get => default; }
		public uint Size { get => default; }
	}
}
