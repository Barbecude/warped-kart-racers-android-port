using UnityEngine;

namespace Atlas
{
	public class AtlasBuildInfo : ScriptableObject
	{
		private static AtlasBuildInfo _current;
		public static AtlasBuildInfo Current => _current != null ? _current : (_current = CreateInstance<AtlasBuildInfo>());
		public string DisplayChangelist => "offline-android";
	}
}
