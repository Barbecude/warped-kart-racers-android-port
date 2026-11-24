using System;
using Unity.Mathematics;

namespace Atlas.Input
{
	[Serializable]
	public struct AtlasRawInput
	{
		public float2 LeftJoystick;
		public float2 RightJoystick;
		public bool Drift;
		public bool Use;
		public bool Hop;
	}
}
