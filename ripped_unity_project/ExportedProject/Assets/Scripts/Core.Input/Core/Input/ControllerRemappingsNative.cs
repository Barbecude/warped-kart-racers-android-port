using System;

namespace Core.Input
{
	public static class ControllerRemappingsNative
	{
		public delegate void OnControllerMappingsChanged();
		public delegate void InternalControllerMappingsChangedFunc();

		public static event OnControllerMappingsChanged ControllerMappingsChanged { add { } remove { } }
		public static void ControllerRemapping_Init() { }
		public static void ControllerRemapping_DeInit() { }
		public static void ControllerRemapping_SetCallback(InternalControllerMappingsChangedFunc cb) { }
		public static IntPtr ControllerRemapping_GetDataCopy() => IntPtr.Zero;
	}
}
