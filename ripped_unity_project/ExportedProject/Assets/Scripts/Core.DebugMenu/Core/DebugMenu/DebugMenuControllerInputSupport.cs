using Unity.Profiling;
using UnityEngine.InputSystem;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Core.DebugMenu
{
	public class DebugMenuControllerInputSupport
	{
		private DebugMenu _debugMenu;
		private InputAction _backAction;
		private InputAction[] _showHideActions;
		private static ProfilerMarker _updateProfilerMarker;
		public void Init(DebugMenu debugMenu) { }
		public void DeInit() { }
		public void Update() { }
		private void HandleGoBack(InputAction.CallbackContext _) { }
		private void HandleShowHide(InputAction.CallbackContext _) { }
	}
}
