namespace FMOD
{
	public struct System
	{
		public void mixerSuspend() { }
		public void mixerResume() { }
	}
}

namespace FMOD.Studio
{
	public enum STOP_MODE
	{
		ALLOWFADEOUT = 0,
		IMMEDIATE = 1
	}

	public struct EventInstance
	{
		private bool _valid;
		public bool isValid() => _valid;
		public void start() { _valid = true; }
		public void stop(STOP_MODE mode) { }
		public void release() { _valid = false; }
	}
}
