namespace Core.Assets
{
	public struct AssetManagerHandle
	{
		public static readonly AssetManagerHandle Invalid = new AssetManagerHandle(0u);
		private uint _value;

		public AssetManagerHandle(uint value)
		{
			_value = value;
		}

		public static bool operator ==(AssetManagerHandle A, AssetManagerHandle B)
		{
			return A._value == B._value;
		}

		public static bool operator !=(AssetManagerHandle A, AssetManagerHandle B)
		{
			return A._value != B._value;
		}

		public override int GetHashCode()
		{
			return _value.GetHashCode();
		}

		public override bool Equals(object obj)
		{
			return obj is AssetManagerHandle other && _value == other._value;
		}

		public bool IsValid()
		{
			return _value != 0u;
		}
	}
}