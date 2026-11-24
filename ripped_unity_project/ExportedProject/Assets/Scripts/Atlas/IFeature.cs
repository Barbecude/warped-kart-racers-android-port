using System;
using System.Collections;
using System.Collections.Generic;
using Unity.Mathematics;
using UnityEngine;
using Core.Application;
using Core.Definitions;

namespace Atlas.Geometry
{
	public interface IFeature
	{
		bool TryGetClosestPoint(float3 checkPoint, out PolyLine outPolyline, out int outPointIndex);
		bool TryGetClosestEndPoint(float3 checkPoint, out PolyLine outPolyline, out int outPointIndex);
	}
}
