using System;
using System.Collections.Generic;
using Unity.Collections;
using Unity.Jobs;
using UnityEngine;

namespace Core.Localisation
{
	[Serializable]
	public struct LocalisationData
	{
		public string IETFLanguageTag;
		public bool PrimaryDataWhenNoLocale;
	}
}
