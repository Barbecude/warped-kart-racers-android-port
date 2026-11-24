using System;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using Unity.Collections;
using Unity.Jobs;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;
using Object = UnityEngine.Object;

namespace Atlas
{
	public static class AtlasBuildFlavour
	{
		public const string Performance = "Performance";
		public static bool IsValid(string flavour) { return default; }
	}
}
