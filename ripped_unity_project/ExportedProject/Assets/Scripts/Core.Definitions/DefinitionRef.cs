using System;
using UnityEngine;

namespace Core.Definitions
{
	[Serializable]
	public struct DefinitionRef<T> where T : IDefinition
	{
		[SerializeField] private DefinitionID _id;
		private T _cached;
		public DefinitionID ID => _id;
	}
}
