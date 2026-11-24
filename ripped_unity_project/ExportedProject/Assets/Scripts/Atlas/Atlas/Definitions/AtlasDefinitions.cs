namespace Atlas.Definitions
{
	public class AtlasDefinitions
	{
		public void Init(object assetManager) { }
		public System.Collections.IEnumerator RequestLoad() { yield break; }
		public System.Collections.Generic.IEnumerable<T> GetDefinitions<T>() { return System.Array.Empty<T>(); }
	}
}
