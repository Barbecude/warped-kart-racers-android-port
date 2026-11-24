namespace Core.Networking
{
	public enum NetworkStateType
	{
		Invalid = 0,
		PreHostConfig = 1,
		HostConfigCompleted = 2,
		VotingStarted = 3,
		VotingCompleted = 4,
		StartingEvent = 5,
		Countdown = 6,
		Event = 7,
		RaceFinished = 8,
		ResultsCompleted = 9,
		ResultsCompletedLastRound = 10,
	}
}
