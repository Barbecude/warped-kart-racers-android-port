using Unity.Mathematics;

namespace Core.Extensions
{
	public static class MathsExtensions
	{
		public static bool IsNaN(this float2 v)
		{
			return float.IsNaN(v.x) || float.IsNaN(v.y);
		}

		public static bool IsNaN(this float3 v)
		{
			return float.IsNaN(v.x) || float.IsNaN(v.y) || float.IsNaN(v.z);
		}

		public static bool IsNaN(this float4 v)
		{
			return float.IsNaN(v.x) || float.IsNaN(v.y) || float.IsNaN(v.z) || float.IsNaN(v.w);
		}

		public static bool IsNaN(this quaternion q)
		{
			return float.IsNaN(q.value.x) || float.IsNaN(q.value.y) || float.IsNaN(q.value.z) || float.IsNaN(q.value.w);
		}
	}
}
