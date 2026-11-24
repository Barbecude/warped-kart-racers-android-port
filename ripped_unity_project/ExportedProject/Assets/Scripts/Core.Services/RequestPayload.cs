namespace Core.Services
{
	public enum RequestPayload
	{
		NONE = 0,
		JoinGroup = 1,
		ProgressAchievements = 2,
		GetLeaderboardScores = 3,
		SubmitLeaderboardScores = 4,
		CreatePrivateMatch = 5,
		FindPublicMatch = 6,
		WriteSave = 7,
		ReadSave = 8,
		ResolveSave = 9,
		DeleteSave = 10,
		SyncSave = 11,
		Connect = 12,
		LeaveMatchQueue = 13,
		Login = 14,
		Logout = 15,
		GetAchievements = 16,
		ResetAchievements = 17,
		GetLeaderboardSets = 18,
		GetSaves = 19,
		GetGroup = 20,
		CreateGroup = 21,
		LeaveGroup = 22,
		GetPlayer = 23,
		GetLocalPlayer = 24,
	}
}
