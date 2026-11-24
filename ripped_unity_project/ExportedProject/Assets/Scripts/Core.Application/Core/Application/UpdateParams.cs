using UnityEngine;

namespace Core.Application
{
	public class UpdateParams : IUpdateParams
	{
		public float DeltaTime { get; private set; }
		public float UnscaledTime { get; private set; }
		public int FrameCount { get; private set; }
		public float FixedDeltaTime { get; private set; }
		public float LocalTime { get; private set; }

		public void Set()
		{
			DeltaTime = Time.deltaTime;
			UnscaledTime = Time.unscaledTime;
			FrameCount = Time.frameCount;
			FixedDeltaTime = Time.fixedDeltaTime;
			LocalTime = Time.time;
		}
	}
}
