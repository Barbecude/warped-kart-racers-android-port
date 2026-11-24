using System.Text;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Core.Settings
{
	public class DeviceQualitySettings
	{
		private const string CommentStart = "#";
		private const string DeviceSectionName = "Device";
		private const string FamilyParameterName = "Family";
		private const string ProcessorTypeParameterName = "ProcessorType";
		private const string GraphicsDeviceParameterName = "GraphicsDevice";
		private const string MinMemoryMBParameterName = "MinMemoryMB";
		private const string MaxMemoryMBParameterName = "MaxMemoryMB";
		private const string QualitySettingsParameterName = "QualitySetting";
		private const string DeviceModelParameterName = "DeviceModel";
		private const int MaxQualitySetting = 2;
		public void Init() { }
		public void DeInit() { }
		public static void GetDeviceInfoCsv(out StringBuilder deviceInfo) { deviceInfo = default; }
		public static void LogDeviceSpecs() { }
		public static string GenerateDeviceSpecsString() { return default; }
		public bool TryGetParametersForDevice(out int outQualitySettings) { outQualitySettings = default; return default; }
		public bool TryGetParametersForDevice(string family, string processorType, string graphicsDevice, string deviceModel, int memoryMB, out int outQualitySettings) { outQualitySettings = default; return default; }
		public void LoadFromConfigFileString(string data) { }
		private bool TryGetSection(string trimmedLine, out string outSectionName) { outSectionName = default; return default; }
		private bool TryGetParameterKeyAndValue(string value, out string outParameterKey, out string outParameterValue) { outParameterKey = default; outParameterValue = default; return default; }
	}
}
