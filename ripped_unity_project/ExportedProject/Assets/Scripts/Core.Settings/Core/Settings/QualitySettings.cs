using System.Globalization;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Core.Settings
{
	public class QualitySettings
	{
		public struct Value { }
		public struct Parameter { }
		public struct Setting { }
		public struct SettingQuality { }
		public enum SectionType
		{
			None = 0,
			Setting = 1,
			SettingQuality = 2,
		}
		public const int InvalidQualityLevel = -1;
		public const int MinQualityLevel = 0;
		public const int MaxQualityLevelLevel = 4;
		private const int DefaultSettingCount = 10;
		private const string CommentStart = "#";
		private const char SettingQualityDelimiter = '\x40';
		private const char ParameterDetailDelimiter = '\x2e';
		private const string ParameterMinDetail = "Min";
		private const string ParameterMaxDetail = "Max";
		private const string ParameterDecimalPlacesDetail = "DecimalPlaces";
		private const string ParameterValidValueDetail = "ValidValue";
		private const int MinFloatToStringDecimalPlaces = 1;
		private const int MaxFloatToStringDecimalPlaces = 4;
		private const int FloatToStringDecimalPlacesCount = 4;
		private static readonly string[] FloatToStringFormat;
		private const NumberStyles IntNumberStyle = (NumberStyles)4;
		private const NumberStyles FloatNumberStyle = (NumberStyles)36;
		public void Init() { }
		public void DeInit() { }
		public void SetQualityLevel(int qualityLevel, bool notifyOnlyChanged) { }
		public void LoadFromConfigFileString(string data) { }
		public bool TryGetFloatParameter(string settingName, string parameterName, ref float refValue) { return default; }
		public bool TryGetIntParameter(string settingName, string parameterName, ref int refValue) { return default; }
		public bool TryGetBoolParameter(string settingName, string parameterName, ref bool refValue) { return default; }
		public bool TrySetBoolParameter(string settingName, string parameterName, bool boolValue) { return default; }
		public bool TrySetFloatParameter(string settingName, string parameterName, float floatValue) { return default; }
		public bool TrySetIntParameter(string settingName, string parameterName, int intValue) { return default; }
		public string CreateSettingsString() { return default; }
		public static string CreateValueStringFromParameter(QualitySettings.Parameter parameter) { return default; }
		public static string CreateValueStringFromParameter(ref QualitySettings.Parameter parameter) { return default; }
		public static string CreateValueStringFromParameterAndValue(ref QualitySettings.Parameter parameter, QualitySettings.Value value) { return default; }
		public static string CreateValueStringFromParameterAndFloat(ref QualitySettings.Parameter parameter, float value) { return default; }
		private static string GetFloatParameterStringFormatter(ref QualitySettings.Parameter parameter) { return default; }
		public bool DoesSettingExist(string settingName) { return default; }
		public bool IsQualityLevelValid(int qualityLevel) { return default; }
		public bool TryGetParameterAndSetValue(string settingName, string parameterName, out QualitySettings.Parameter outParameter, out QualitySettings.Value outValue) { outParameter = default; outValue = default; return default; }
		private bool TryGetSettingAndParameter(string settingName, string parameterName, out QualitySettings.Setting outSetting, out QualitySettings.Parameter outParameter) { outSetting = default; outParameter = default; return default; }
		private bool TryGetSettingAndParameterIndex(string settingName, string parameterName, out QualitySettings.Setting outSetting, out int outParameterIndex) { outSetting = default; outParameterIndex = default; return default; }
		private bool TrySetParameter(string settingName, string parameterName, QualitySettings.Value value) { return default; }
		private bool TryGetSectionName(string trimmedLine, out string outSectionName) { outSectionName = default; return default; }
		private bool TryGetSettingAndLevel(string sectionName, out string outSetting, out int outLevel) { outSetting = default; outLevel = default; return default; }
		private bool UpdateSettingParameter(string trimmedLine, ref QualitySettings.Setting setting) { return default; }
		private bool UpdateSettingQualityParameter(string trimmedLine, ref QualitySettings.SettingQuality settingQuality, ref QualitySettings.Setting setting) { return default; }
		private bool TryParseValue(string trimmedString, out QualitySettings.Value outValue) { outValue = default; return default; }
		private bool CreateSettingQuality(string settingName, int qualityLevel, out QualitySettings.SettingQuality outSettingQuality) { outSettingQuality = default; return default; }
		private bool CreateNewSetting(string settingName, out QualitySettings.Setting outSetting) { outSetting = default; return default; }
	}
}
