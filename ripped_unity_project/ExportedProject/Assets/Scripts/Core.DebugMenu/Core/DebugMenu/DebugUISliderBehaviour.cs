using UnityEngine.UI;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Core.DebugMenu
{
	public class DebugUISliderBehaviour : MonoBehaviour
	{
		[SerializeField] private Text _minValueText;
		[SerializeField] private Text _valueText;
		[SerializeField] private Text _maxValueText;
		[SerializeField] private Slider _slider;
		private bool _valueNeedsSyncing;
		private int _decimalPlaces;
		private string _decimalFormatString;
		public float MinValueText { set { } }
		public float ValueText { set { } }
		public float MaxValueText { set { } }
		public Slider Slider { get => default; }
		public float Value { get => default; set { } }
		public bool ValueNeedsSyncing { get => default; set { } }
		public void SetDecimalPlaces(int count) { }
		private void SetTextForValues(Text text, float value) { }
		public void AddListenerToUpdateValueText() { }
		private void OnValueChanged(float value) { }
	}
}
