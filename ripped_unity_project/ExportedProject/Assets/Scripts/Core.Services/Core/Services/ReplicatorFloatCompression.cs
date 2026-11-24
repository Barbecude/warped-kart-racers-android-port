using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Core.Services
{
	public static class ReplicatorFloatCompression
	{
		private const int MaxValueUnsignedByte = 255;
		private const int MaxValueUnsignedShort = 65535;
		public static byte QuantizeToByte(float value, float minMax) { return default; }
		public static float DeQuantize(byte value, float minMax) { return default; }
		public static ushort QuantizeToUShort(float value, float minMax) { return default; }
		public static float DeQuantize(ushort value, float minMax) { return default; }
		public static QuantizedVector3UShort QuantizeToUShort(Vector3 value, float minMax) { return default; }
		public static Vector3 DeQuantize(QuantizedVector3UShort value, float minMax) { return default; }
		public static QuantizedQuaternionByte QuantizeToUShort(Quaternion value, float minMax) { return default; }
		public static Quaternion DeQuantize(QuantizedQuaternionByte value, float minMax) { return default; }
		private static uint QuantizeInternal(float value, float minMax, int maxValue) { return default; }
		private static float DeQuantizeInternal(uint value, float minMax, int maxValue) { return default; }
	}
}
