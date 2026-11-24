using System.Collections.ObjectModel;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Core.Definitions
{
	public class DefinitionData
	{
		private Type _type;
		private string _dataPath;
		public Type Type { get => default; }
		public string DataPath { get => default; }
		public Dictionary<DefinitionID, IDefinition> IDDefinitionMap { get => default; }
		public List<IDefinition> DefinitionList { get => default; }
		public ReadOnlyCollection<IDefinition> DefinitionReadOnlyList { get => default; }
	}
}
