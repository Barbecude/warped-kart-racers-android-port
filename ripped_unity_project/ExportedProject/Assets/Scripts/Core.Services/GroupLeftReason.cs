namespace Core.Services
{
	public enum GroupLeftReason
	{
		Disconnected = 0,
		SelfLeft = 1,
		Backgrounded = 2,
		JoiningOtherGroup = 3,
		PlatformError = 4,
		Kicked = 5,
	}
}
