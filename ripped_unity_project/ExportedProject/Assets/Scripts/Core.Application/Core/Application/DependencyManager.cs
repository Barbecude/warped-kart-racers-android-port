using System;
using System.Collections.Generic;

namespace Core.Application
{
	public class DependencyManager
	{
		protected readonly Dictionary<Type, object> _dependencyContainer = new Dictionary<Type, object>();

		public T CreateAndAddDependency<T>() where T : new()
		{
			T dep = new T();
			return AddDependency(dep);
		}

		public T AddDependency<T>(T dep)
		{
			_dependencyContainer[typeof(T)] = dep;
			return dep;
		}

		public object AddDependency(object dep)
		{
			if (dep != null)
			{
				_dependencyContainer[dep.GetType()] = dep;
			}
			return dep;
		}

		public object GetDependency(Type type)
		{
			object value;
			_dependencyContainer.TryGetValue(type, out value);
			return value;
		}

		public T GetDependency<T>()
		{
			object value;
			if (_dependencyContainer.TryGetValue(typeof(T), out value))
			{
				return (T)value;
			}
			return default(T);
		}
	}
}
