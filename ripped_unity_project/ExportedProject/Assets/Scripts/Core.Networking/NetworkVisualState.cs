namespace Core.Networking
{
	public struct NetworkVisualState
	{
		public enum VisualState
		{
			None = 0,
			Spinning = 1,
			Flip = 4,
			Boosting = 8,
			Drifting = 16,
			Grounded = 32,
			Flying = 64,
			DriftBoostStartedLeftSide = 128,
			DriftBoostLevel1 = 256,
			DriftBoostLevel2 = 512,
			DriftBoostLevel3 = 1024,
			Invuln = 2048,
			HitInvuln = 4096
		}

		public ushort Flags;
		public byte HopCounter;
		public byte HopBoostCounter;
		public byte RespawnCounter;
		public sbyte SteeringWheel;

		public bool IsSet(VisualState state)
		{
			return (Flags & (ushort)state) != 0;
		}

		public void SetFlag(VisualState state)
		{
			Flags |= (ushort)state;
		}
	}
}
