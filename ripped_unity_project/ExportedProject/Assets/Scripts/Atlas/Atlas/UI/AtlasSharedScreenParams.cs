using Core.Application;

namespace Atlas.UI
{
	public class AtlasSharedScreenParams
	{
		public DependencyManager DependencyManager { get; private set; }
		public AtlasSharedScreenParams() { }
		public AtlasSharedScreenParams(DependencyManager dependencyManager)
		{
			DependencyManager = dependencyManager;
		}
	}
}
