using TMPro;
using UnityEngine.UI;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Core.Localisation
{
	public class LocaliseAlignmentBehaviour : MonoBehaviour
	{
		public static LocalisationManager LocalisationManager;
		protected TMP_Text _text;
		protected HorizontalLayoutGroup _horizontalLayoutGroup;
		private TextAlignmentOptions _primaryAlignment;
		private bool _primaryLayoutReversed;
		private void Awake() { }
		private void OnDestroy() { }
		private void LanguageChanged(string IETFLanguageTag) { }
		private void UpdateTextComponent() { }
		private void UpdateHorizontalLayoutGroupComponent() { }
	}
}
