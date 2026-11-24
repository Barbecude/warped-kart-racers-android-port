using System;
using System.Collections.Generic;
using Unity.Collections;
using Unity.Jobs;
using UnityEngine;

namespace Core.Containers
{
	[Serializable]
	public struct BitField8
	{
		[SerializeField] public byte Bits;
		public bool Item { get => default; set { } }
		public int Length { get => default; }
	}
}
