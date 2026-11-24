using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Core.Networking
{
	public static class NetworkLog
	{
		public static void Info(string message) { }
		public static void Warning(string message) { }
		public static void Error(string message) { }
		private static string FormatLogMessage(string message, string level) { return default; }
	}
}
