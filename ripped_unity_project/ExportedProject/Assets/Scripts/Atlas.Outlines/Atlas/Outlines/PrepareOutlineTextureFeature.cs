using UnityEngine.Rendering.Universal;

namespace Atlas.Outlines
{
	public class PrepareOutlineTextureFeature : ScriptableRendererFeature
	{
		public struct OutlineLayerMaterialMapping { }

		public override void Create() { }
		public override void AddRenderPasses(ScriptableRenderer renderer, ref RenderingData renderingData) { }
	}
}
