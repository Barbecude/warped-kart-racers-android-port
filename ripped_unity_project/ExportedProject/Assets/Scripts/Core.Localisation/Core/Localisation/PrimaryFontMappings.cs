using System.Collections.Generic;
using TMPro;
using UnityEngine;

namespace Core.Localisation
{
	public class PrimaryFontMappings : ScriptableObject
	{
		public struct FontMap { }
		public struct MaterialMap { }

		[SerializeField] private TMP_FontAsset _primaryFont;
		[SerializeField] private List<FontMap> _fontMaps;
		[SerializeField] private List<MaterialMap> _materialMaps;
	}
}
