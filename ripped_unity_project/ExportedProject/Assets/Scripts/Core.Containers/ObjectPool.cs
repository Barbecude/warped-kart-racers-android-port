using System;
using System.Collections.Generic;
using Core.Application;
namespace Core.Containers
{
	public class ObjectPool<T>
	{
		public struct Callbacks<TCb> { public Func<TCb> Create; public Action<TCb> OnEnterPool; public Action<TCb> OnExitPool; public Action<TCb> Destroy; }
		public void Init(int initialSize, Callbacks<T> callbacks) { }
		public void DeInit() { }
		public T Get() => default;
		public void Return(T item) { }
		public void Update(IUpdateParams updateParams) { }
	}
	public static class ObjectPool
	{
		public struct Callbacks<T> { public Func<T> Create; public Action<T> OnEnterPool; public Action<T> OnExitPool; public Action<T> Destroy; }
	}
}
