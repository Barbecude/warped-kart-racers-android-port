using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Core.UI2
{
	public class UIIrregularElementWobble : MonoBehaviour
	{
		public struct UVDeltaInfo { }
		public enum UVpositions
		{
			TopLeftUVX = 0,
			TopLeftUVY = 1,
			TopRightUVX = 2,
			TopRightUVY = 3,
			BottomRightUVX = 4,
			BottomRightUVY = 5,
			BottomLeftUVX = 6,
			BottomLeftUVY = 7,
			Count = 8,
		}
		[SerializeField] private UIIrregularElement _irregularElement;
		[SerializeField] public UIIrregularElementWobble.UVDeltaInfo[] _UVInfos;
		private bool _startingPositionsSet;
		private float _elapsedTime;
		private void OnEnable() { }
		private void SetUVInfo(UIIrregularElementWobble.UVpositions uVpositions, float startingValue) { }
		private void Update() { }
		private float WobbleDelta(UIIrregularElementWobble.UVDeltaInfo uVDeltaInfo) { return default; }
	}
}
