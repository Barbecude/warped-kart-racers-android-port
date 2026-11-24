using UnityEngine.UI;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Core.UI2
{
	public class UINonDrawingGraphic : Graphic
	{
		public virtual void SetMaterialDirty() { }
		public virtual void SetVerticesDirty() { }
		protected virtual void OnPopulateMesh(VertexHelper vh) { }
	}
}
