using UnityEngine.UI;
using UnityEngine.EventSystems;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Core.DebugMenu
{
	public class ProxySelectable : Selectable
	{
		[SerializeField] private Selectable _forwardToSelectable;
		public Selectable ForwardToSelectable { get => default; set { } }
		public virtual void OnSelect(BaseEventData eventData) { }
		private IEnumerator SelectOnNextFrameRoutine(GameObject go) { return default; }
		public virtual void OnDeselect(BaseEventData eventData) { }
	}
}
