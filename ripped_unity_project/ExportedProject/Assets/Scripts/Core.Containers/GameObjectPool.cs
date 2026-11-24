using Core.Application;
using UnityEngine;
namespace Core.Containers
{
	public class GameObjectPool<T> where T : Component
	{
		public void Init(T prefab, Transform parent, int initialSize) { }
		public void DeInit() { }
		public T Get() => default;
		public void Return(T item) { }
		public void Update(IUpdateParams updateParams) { }
	}
}
