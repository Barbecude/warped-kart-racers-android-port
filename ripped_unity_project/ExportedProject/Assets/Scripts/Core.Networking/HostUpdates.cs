namespace Core.Networking
{
	public enum HostUpdates
	{
		NONE = 0,
		HostCarUpdate = 1,
		HostVoteStart = 2,
		HostVoteUpdate = 3,
		HostVoteResult = 4,
		HostGameModeUpdate = 5,
		HostEventResults = 6,
		HostUsable = 7,
		HostUsableResponse = 8,
		HostStanding = 9,
		HostMigration = 10,
		HostMigrationDone = 11,
	}
}
