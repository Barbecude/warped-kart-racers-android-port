using System;
using System.Collections;
using System.Collections.Generic;
using Unity.Mathematics;
using UnityEngine;
using Core.Application;
using Core.Definitions;

namespace Atlas.Geometry
{
	public interface IWidthHeightSampler
	{
		bool TryGetNext(int authoredIndex, out float outWidth, out float outHeight);
	}
}
