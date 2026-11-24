using System;
using Unity.Mathematics;

namespace Atlas.Lighting
{
	[Serializable]
	public struct LightVolumeParams
	{
		[Serializable]
		public struct CelShadingParams
		{
			public float4 LowTone;
			public float4 MidTone;
			public float4 HighTone;
		}

		[Serializable]
		public struct Params
		{
			public CelShadingParams CelShading;
			public float4 ShadowColor;
		}

		public Params LightParams;
		public float RcpBlendDistance;
	}
}