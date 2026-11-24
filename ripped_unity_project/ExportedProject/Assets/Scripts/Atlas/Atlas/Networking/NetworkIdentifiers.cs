using System.Collections.Generic;
using UnityEngine;

namespace Atlas.Networking
{
	public class NetworkIdentifiers
	{
		private readonly Dictionary<string, int> _keys = new Dictionary<string, int>();

		public void Init()
		{
			_keys.Clear();
		}

		public void DeInit()
		{
			_keys.Clear();
		}

		public void AddDefinitions<T>(IEnumerable<T> definitions) where T : Object
		{
			if (definitions == null) return;
			foreach (T def in definitions)
			{
				if (def != null && !_keys.ContainsKey(def.name))
				{
					_keys[def.name] = _keys.Count;
				}
			}
		}

		public void FinishAddingAndGenerateKeys()
		{
		}
	}
}
