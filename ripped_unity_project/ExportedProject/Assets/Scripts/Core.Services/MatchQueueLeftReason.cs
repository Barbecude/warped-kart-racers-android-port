namespace Core.Services
{
	public enum MatchQueueLeftReason
	{
		None = 0,
		UnhandledError = 1,
		Requested = 2,
		SessionLeft = 3,
		SessionHidden = 4,
		SessionUnusable = 5,
	}
}
