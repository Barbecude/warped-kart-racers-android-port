using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Core.UI2
{
	public class UITweenGroup : MonoBehaviour
	{
		[SerializeField] private UITweenAnimation[] _tweenAnimations;
		public UITweenAnimation[] TweenAnimations { get => default; }
		public UITweenAnimation GetTweenAnimation(string key) { return default; }
	}
}
