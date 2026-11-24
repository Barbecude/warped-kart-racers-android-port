namespace Core.Services
{
	public enum ResponsePayload
	{
		NONE = 0,
		CreateGroup = 1,
		JoinGroup = 2,
		GetAchievements = 3,
		ResetAchievements = 4,
		ProgressAchievements = 5,
		GetLeaderboardSets = 6,
		GetLeaderboardScores = 7,
		Login = 8,
		GetPlayer = 9,
		GetLocalPlayer = 10,
		GetGroup = 11,
		GetSaves = 12,
		WriteSave = 13,
		ReadSave = 14,
		ResolveSave = 15,
		SyncSave = 16,
		DeleteSave = 17,
	}
}
