namespace Core.Application
{
	public interface IUpdateParams
	{
		float DeltaTime { get; }
		float UnscaledTime { get; }
		int FrameCount { get; }
		float FixedDeltaTime { get; }
		float LocalTime { get; }
	}
}
