namespace Core.Services
{
	public enum GroupJoinedUpdateReason
	{
		SearchingForGroup = 0,
		ConnectingToGroupSession = 1,
		ConnectingToGroupLeader = 2,
		Cancelled = 3,
	}
}
