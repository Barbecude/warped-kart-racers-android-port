using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Core.UI2
{
	public class UITweenLeaf : MonoBehaviour
	{
		[SerializeField] private bool _muteAudio;
		private RectTransform _rectTransform;
		private Animator _animator;
		private bool _previousAnimatorEnabledState;
		private bool _dontReactivateAnimatorAfterTweens;
		public void PerformTweenAnimation(UITweenAnimation tweenAnim, float delay, bool dontReactivateAnimatorsAfterwards) { }
		private void OnDestroy() { }
		private static Vector3 CalculateOffScreenStartingPosition(RectTransform element, UITweenAnimationDirection direction, float magnitude) { return default; }
		private static Vector3 CalculateOffScreenEndingPosition(RectTransform element, UITweenAnimationDirection direction, float magnitude) { return default; }
		private void OnTweenPlaybackFinished() { }
	}
}
