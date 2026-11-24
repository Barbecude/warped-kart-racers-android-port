using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Core.Localisation
{
	public class LocaliseTextBehaviour : LocaliseFontBehaviour
	{
		[SerializeField] private string _localisationKey;
		[SerializeField] private int _splitTextIfOverCharacterCount;
		public void SetLocalisationKey(string locKey) { }
		public void SplitTextIfRequired(ref string text, int splitTextIfOverCharacterCount) { }
		protected virtual void UpdateTextComponent() { }
	}
}
