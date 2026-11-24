using Core.Definitions;
using UnityEngine;

namespace Atlas.Definitions
{
	public class Definition : ScriptableObject, IDefinition
	{
		[SerializeField]
		private DefinitionID _definitionID;

		public DefinitionID DefinitionID => _definitionID;
	}
}