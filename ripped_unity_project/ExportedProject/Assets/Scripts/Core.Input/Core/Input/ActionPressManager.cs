using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Core.Input
{
	public struct ActionState { }
	public class ActionPressManager
	{
		private int _frameNumber;
		public void Init() { }
		public void Update(int frameNumber) { }
		public void DeInit() { }
		private void AddWatchedAction(string path, ActionType type) { }
		public bool IsPressed(string action, ActionType type) { return default; }
		public bool WasPressedThisFrame(string action, ActionType type) { return default; }
		public bool Consume(string action, ActionType type) { return default; }
		private bool CalculatePressedState(ActionState action) { return default; }
	}
}
