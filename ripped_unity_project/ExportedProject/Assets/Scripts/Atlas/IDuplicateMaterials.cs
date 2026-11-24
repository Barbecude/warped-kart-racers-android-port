using System;
using System.Collections;
using System.Collections.Generic;
using Unity.Mathematics;
using UnityEngine;
using Core.Application;
using Core.Definitions;

namespace Atlas.Rendering
{
	public interface IDuplicateMaterials
	{
		void CreateDuplicatedMaterials(MaterialDuplicator materialDuplicator, IReadOnlyList<Shader> onlyShaders);
		void ReleaseDuplicatedMaterials();
	}
}
