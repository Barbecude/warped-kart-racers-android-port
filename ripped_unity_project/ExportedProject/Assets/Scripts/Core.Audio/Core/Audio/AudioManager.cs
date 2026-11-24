using FMODUnity;
using FMOD.Studio;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Core.Audio
{
	public struct PARAMETER_ID { public uint data1; public uint data2; }
	public class AudioManager
	{
		private bool _inited;
		public virtual void Init() { }
		public virtual void DeInit() { }
		public virtual void Update(float dt) { }
		public bool IsBankLoaded(string bankName) { return default; }
		public void LoadBank(string bankName, bool preloadSamples) { }
		public void UnloadBank(string bankName) { }
		public bool AnyBanksLoading() { return default; }
		public void WaitForLoad() { }
		public void SetListenerCount(int listenerCount) { }
		public void SetListenerTransform(int listenerIndex, Transform transform) { }
		public void SetParameter(string name, float value) { }
		public bool TryGetParameterIdByName(string name, out PARAMETER_ID outParameterId) { outParameterId = default; return default; }
		public PARAMETER_ID GetParameterIdByName(string name) { return default; }
		public void SetParameter(PARAMETER_ID id, float value, bool ignoreseekspeed) { }
		public bool TryGetParameter(string name, out float value) { value = default; return default; }
		public void PlayOneShot(string name) { }
		public void PlayOneShot(string name, Vector3 position) { }
		public void MuteAllEvents(bool pause) { }
		private void RemoveFromLoadedBanksList(string bankName) { }
		public void SetGlobalParameter(string name, float value, bool ignoreseekspeed) { }
	}
}
