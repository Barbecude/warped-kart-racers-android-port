using FlatBuffers;
using System;
using System.Collections.Generic;
using Unity.Collections;
using Unity.Jobs;
using UnityEngine;

namespace Core.Networking
{
	[Serializable]
	public struct SessionKartVisuals : IFlatbufferObject
	{
		private Table __p;
		public ByteBuffer ByteBuffer { get => default; }
		public short Character { get => default; }
		public short Kart { get => default; }
		public short Glider { get => default; }
		public short Antenna { get => default; }
		public short Wheels { get => default; }
		public short Extra1 { get => default; }
		public short Extra2 { get => default; }
		public short Extra3 { get => default; }
	}
}
