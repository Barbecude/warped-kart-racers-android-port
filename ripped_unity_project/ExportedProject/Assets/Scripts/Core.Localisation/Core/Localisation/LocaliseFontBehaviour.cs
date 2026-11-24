using TMPro;
using UnityEngine.UI;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Core.Localisation
{
	public class LocaliseFontBehaviour : MonoBehaviour
	{
		public static LocalisationManager LocalisationManager;
		protected TMP_Text _text;
		private TMP_FontAsset _primaryFont;
		private Material _primaryMaterial;
		protected virtual void UpdateTextComponent() { }
		protected void SetTextFontAndMaterials() { }
		private void Awake() { }
		private void OnDestroy() { }
		private void LanguageChanged(string IETFLanguageTag) { }
	}
}
