namespace FlatBuffers
{
	public interface IFlatbufferObject
	{
	}

	public struct Offset<T> where T : struct
	{
		public int Value;
	}

	public struct StringOffset
	{
		public int Value;
	}

	public struct VectorOffset
	{
		public int Value;
	}

	public struct Table
	{
	}
}
