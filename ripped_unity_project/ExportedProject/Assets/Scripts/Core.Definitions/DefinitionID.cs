using System;
using System.Collections.Generic;
using Unity.Collections;
using Unity.Jobs;
using UnityEngine;

namespace Core.Definitions
{
	[Serializable]
	public struct DefinitionID
	{
		public static readonly DefinitionID Null;
		public string Value;
		public bool IsValid { get => default; }
		public string ValueOrEmptyIfNull { get => default; }
	}
}
