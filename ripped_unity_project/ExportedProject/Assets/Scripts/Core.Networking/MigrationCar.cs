using FlatBuffers;
using System;
using System.Collections.Generic;
using Unity.Collections;
using Unity.Jobs;
using UnityEngine;

namespace Core.Networking
{
	[Serializable]
	public struct MigrationCar : IFlatbufferObject
	{
		private Table __p;
		public ByteBuffer ByteBuffer { get => default; }
		public uint SyncId { get => default; }
		public Vec3? Position { get => default; }
		public Vec4? Rotation { get => default; }
		public short UsableType { get => default; }
		public byte UsableUsesLeft { get => default; }
		public byte BattleScore { get => default; }
		public sbyte LapsCompleted { get => default; }
		public float TrackCoordsX { get => default; }
		public float TrackCoordsY { get => default; }
		public bool Halfway { get => default; }
	}
}
