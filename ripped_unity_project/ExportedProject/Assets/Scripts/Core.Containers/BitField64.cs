using System;
namespace Core.Containers
{
	[Serializable]
	public struct BitField64 : IEquatable<BitField64>
	{
		public ulong Value;
		public bool Equals(BitField64 other) => Value == other.Value;
	}
}
