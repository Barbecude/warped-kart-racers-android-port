using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Core.Environment
{
	public sealed class Pref
	{
		private bool _valueBool;
		private int _valueInt;
		private float _valueFloat;
		private readonly string _name;
		public static Pref CreateBool(string name, bool defaultValue) { return default; }
		public static Pref CreateInt(string name, int defaultValue) { return default; }
		public static Pref CreateFloat(string name, float defaultValue) { return default; }
		public void SetInt(int value) { }
		public void SetFloat(float value) { }
		public void SetBool(bool value) { }
		public bool GetBool() { return default; }
		public int GetInt() { return default; }
		public float GetFloat() { return default; }
	}
}
