using UnityEngine.UI;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Core.UI2
{
	public class UIScreenBehaviour : MonoBehaviour
	{
		private static readonly int EnterAnimStateName;
		private static readonly int ExitAnimStateName;
		[SerializeField] private Animator _stateAnimator;
		[SerializeField] private Canvas _canvas;
		[SerializeField] private GraphicRaycaster _graphicRaycaster;
		private bool _setVisibleNextFrame;
		private float _tweenFinishTime;
		public Canvas Canvas { get => default; }
		public int LayerIndex { get => default; set { } }
		public void AfterInstantiated() { }
		public void BeforeDestroyed() { }
		private void Update() { }
		public virtual void SetVisible(bool visible) { }
		public bool HasStateAnimationFinished() { return default; }
		public void PlayStateAnimationEnter() { }
		public void PlayStateAnimationExit() { }
		protected virtual void OnAfterInstantiated() { }
		protected virtual void OnBeforeDestroyed() { }
		private bool HasValidAnimator() { return default; }
		protected virtual bool PlayTweensOnStart() { return default; }
	}
}
