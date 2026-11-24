namespace Core.Audio
{
	public class AudioEvent
	{
		public string EventPath { get; private set; }
		public AudioEvent() { }
		public AudioEvent(string eventPath, bool preload = false, bool allowFadeout = false)
		{
			EventPath = eventPath;
		}
		public void Play() { }
		public void Stop(bool allowFadeout = false) { }
		public void SetParameter(string name, float value, bool ignoreSeekSpeed = false) { }
	}
}
