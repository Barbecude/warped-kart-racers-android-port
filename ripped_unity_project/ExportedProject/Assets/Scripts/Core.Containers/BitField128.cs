using System;
namespace Core.Containers
{
	[Serializable]
	public struct Bits128 { public ulong Low; public ulong High; }

	[Serializable]
	public struct BitField128 : IEquatable<BitField128>
	{
		public Bits128 Value;
		public bool Equals(BitField128 other) => Value.Low == other.Value.Low && Value.High == other.Value.High;
	}
}
