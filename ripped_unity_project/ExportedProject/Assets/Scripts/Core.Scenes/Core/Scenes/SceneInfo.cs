using System;

namespace Core.Scenes
{
	public struct SceneInfo : IEquatable<SceneInfo>
	{
		public string SceneName;

		public bool Equals(SceneInfo other)
		{
			return string.Equals(SceneName, other.SceneName, StringComparison.Ordinal);
		}
	}
}
