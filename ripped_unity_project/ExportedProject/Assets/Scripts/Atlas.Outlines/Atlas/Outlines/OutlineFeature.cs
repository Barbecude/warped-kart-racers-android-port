using UnityEngine.Rendering.Universal;

namespace Atlas.Outlines
{
	public class OutlineFeature : ScriptableRendererFeature
	{
		public class OutlineSettings { }
		public class OutlinePass { }
		public class AntialiasPass { }

		public OutlineSettings settings = new OutlineSettings();

		public override void Create() { }
		public override void AddRenderPasses(ScriptableRenderer renderer, ref RenderingData renderingData) { }
	}
}
