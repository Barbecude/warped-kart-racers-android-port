using UnityEngine.InputSystem;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Core.Input
{
	public static class InputManagerExtensions
	{
		public static bool IsDeviceSiriRemote(InputDevice device) { return default; }
		public static bool IsDeviceJoyCon(InputDevice device) { return default; }
		public static InputFamily GetInputFamily(InputDevice device) { return default; }
		public static bool IsController(InputFamily input) { return default; }
		public static bool IsKeyboard(InputFamily input) { return default; }
		public static bool IsControllerOrKeyboard(InputFamily input) { return default; }
	}
}
