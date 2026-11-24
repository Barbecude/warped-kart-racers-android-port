using Unity.Burst;
using Unity.Mathematics;
using UnityEngine;

namespace Atlas.Maths
{
	public static class Math4d
	{
		public static readonly float4 Up = new float4(0f, 1f, 0f, 0f);

		[BurstCompile]
		public static float4 NearestPointOnLineSegment(float4 point, float4 startLineSeg, float4 endLineSeg, float4 dStartEndLenSig, float dStartEndLenSegDistSqrdRcp)
		{
			float t = math.dot(point - startLineSeg, dStartEndLenSig) * dStartEndLenSegDistSqrdRcp;
			t = math.clamp(t, 0f, 1f);
			return startLineSeg + dStartEndLenSig * t;
		}

		public static float4 Cross(float3 left, float4 right)
		{
			float3 c = math.cross(left, right.xyz);
			return new float4(c.x, c.y, c.z, 0f);
		}

		public static float4 Cross(float4 left, float3 right)
		{
			float3 c = math.cross(left.xyz, right);
			return new float4(c.x, c.y, c.z, 0f);
		}

		[BurstCompile]
		public static float4 Cross(float4 left, float4 right)
		{
			float3 c = math.cross(left.xyz, right.xyz);
			return new float4(c.x, c.y, c.z, 0f);
		}

		public static Vector3 Float4ToVector3(float4 value)
		{
			return new Vector3(value.x, value.y, value.z);
		}

		public static float4 Vector3ToFloat4(Vector3 value)
		{
			return new float4(value.x, value.y, value.z, 0f);
		}
	}
}
