namespace Core.Containers
{
	public class ObjectCache<TKeyType, TObject>
	{
		public void Add(TKeyType key, TObject obj) { }
		public bool TryGet(TKeyType key, out TObject obj) { obj = default; return false; }
		public void Clear() { }
	}
}
