// Auto-generated 1:1 from il2cpp_dump/dump.cs (0-quota)

namespace Atlas.Definitions
{
	public enum RotationTypeDefinition
	{
		None = 0,
		Weekly = 1,
		NumberOfWeeks = 2,
		Monthly = 3,
	}
}

namespace Atlas.FrontEnd
{
	public enum GameType
	{
		None = 0,
		Quickplay = 1,
		Tournament = 2,
		SinglePlayer = 3,
		FreeplaySinglePlayer = 4,
		FreeplayOnline = 5,
		TimeTrial = 6,
		Collector = 7,
		Shooter = 8,
		League = 9,
	}
	public enum PortalState
	{
		None = 0,
		Entering = 1,
		Exiting = 2,
	}
	public enum FrontEndSceneType
	{
		None = 0,
		GenericFrontEnd = 1,
		Rewards = 2,
		Lobby = 3,
		MultiplayerCeremony = 4,
		LeaguePromotion = 5,
	}
	public enum FrontEndKartPose
	{
		None = 0,
		Kart = 1,
		Character = 2,
		Glider = 3,
		FrontWheel = 4,
		RearWheel = 5,
		Antenna = 6,
		Vanity = 7,
		Boost = 8,
	}
	public enum FrontEndCameraPosition
	{
		Neutral = 0,
		GenericLookUp = 1,
		LobbyZoomOut = 2,
		CharacterProgress = 3,
		KartAndCharacter = 4,
		Wheels = 5,
		Glider = 6,
		Antenna = 7,
		RewardKart = 8,
		RewardCharacter = 9,
		RewardWheels = 10,
		RewardGlider = 11,
		RewardAntenna = 12,
		HomeScreen = 13,
		LobbyLookUp = 14,
		RewardCharacterTallHead = 15,
		Arcade = 16,
		Boost = 17,
		RewardBoost = 18,
	}
	public enum Synced3DElementFit
	{
		Width = 0,
		Height = 1,
		MinimumAxis = 2,
		MaximumAxis = 3,
	}
	public enum PositioningMode
	{
		Once = 0,
		EveryFrame = 1,
	}
}

namespace Atlas.Gameplay
{
	public enum VFXTriggerEventCondition
	{
		None = 0,
		StartOf321 = 1,
		EndOf321 = 2,
		IntroStartOfCameraPan = 3,
		Lap1 = 4,
		Lap2 = 5,
		FinalLap = 6,
	}
	public enum VFXTriggerParticipant
	{
		Any = 0,
		AnyHuman = 1,
		LocalHuman = 2,
		AnyAI = 3,
	}
}

namespace Atlas.Gameplay.Kart
{
	public enum BattleKartNavState
	{
		RandomPoint = 0,
		SeekPickup = 1,
		SeekOtherKart = 2,
	}
}

namespace Atlas.League
{
	public enum LeagueUpdate
	{
		Same = 0,
		Promotion = 1,
		Demotion = 2,
	}
	public enum LeagueDecayType
	{
		None = 0,
		Warning = 1,
		Demotion = 2,
	}
}

namespace Atlas.Stats
{
	public enum DailyChallengeConditionType
	{
		None = 0,
		Map = 1,
		Character = 2,
		Kart = 3,
	}
	public enum Stat
	{
		Invalid = 0,
		FinishedFirst = 1,
		FinishedSecond = 2,
		FinishedThird = 3,
		FinishedFourth = 4,
		FinishedFifth = 5,
		FinishedSixth = 6,
		FinishedSeventh = 7,
		FinishedEighth = 8,
		FinishedNinth = 9,
		FinishedTenth = 10,
		FinishedEleventh = 11,
		FinishedTwelfth = 12,
		FinishedFirstTrackByCulturePod = 13,
		DistanceDrifted = 14,
		DistanceBoosted = 15,
		DistanceGlided = 16,
		DriftBoostTierOneCount = 17,
		DriftBoostTierTwoCount = 18,
		DriftBoostTierThreeCount = 19,
		PickupBoxesHit = 20,
		PickupBoxesHitWhileBoosting = 21,
		PickupBoxesHitWhileDrifting = 22,
		PickupBoxesHitWhileGliding = 23,
		BoostPadHitCount = 24,
		GliderPadHitCount = 25,
		HopBoostCount = 26,
		HopCount = 27,
		HopCountWhileOffRoad = 28,
		UsedGoldenTurd = 29,
		UsedFuelTank = 30,
		UsedDrunkenClam = 31,
		UsedShield = 32,
		UsedSheldon = 33,
		UsedCulturePod = 34,
		UsedPropaneBomb = 35,
		UsedTimeCheater = 36,
		UsedSatellite = 37,
		UsedAnyWhileBoosting = 38,
		UsedAnyWhileGliding = 39,
		UsedUniqueCount = 40,
		UsedFuelTankWhileOffRoad = 41,
		UsedTimeCheaterWhileOffRoad = 42,
		UsedClamWhileInAir = 43,
		UsedClamWhileBoosting = 44,
		UsedClamWhileDrifting = 45,
		UsedClamWhileGliding = 46,
		UsedSheldonWhileInAir = 47,
		UsedSheldonWhileBoosting = 48,
		UsedSheldonWhileDrifting = 49,
		UsedSheldonWhileGliding = 50,
		HitOpponentWithGoldenTurd = 51,
		HitOpponentWithFuelTank = 52,
		HitOpponentWithDrunkenClam = 53,
		HitOpponentWithShield = 54,
		HitOpponentWithSheldon = 55,
		HitOpponentWithCulturePod = 56,
		HitOpponentWithPropaneBomb = 57,
		HitOpponentWithTimeCheater = 58,
		HitOpponentWithSatellite = 59,
		HitOpponentWithClamAfterTwoOrMoreBounces = 60,
		HitOpponentWithAnyWhileBoosting = 61,
		HitOpponentWithAnyWhileGliding = 62,
		HitOpponentWithSheldonWhileTargetIsGliding = 63,
		HitOpponentWithClamWhileBoosting = 64,
		HitOpponentWithClamWhileDrifting = 65,
		HitOpponentWithClamWhileGliding = 66,
		HitOpponentWithSheldonWhileBoosting = 67,
		HitOpponentWithSheldonWhileDrifting = 68,
		HitOpponentWithSheldonWhileGliding = 69,
		HitMultipleOpponentsWithCulturePod = 70,
		HitMultipleOpponentsWithPropaneBomb = 71,
		HazardsCounteredWithShieldHazardIsShield = 72,
		HazardsCounteredWithShieldHazardIsClam = 73,
		HazardsCounteredWithShieldHazardIsSheldon = 74,
		HazardsCounteredWithShieldHazardIsGoldenTurd = 75,
		HazardsCounteredWithShieldHazardIsCulturePod = 76,
		HazardsCounteredWithShieldHazardIsPropaneBomb = 77,
		HazardsCounteredWithShieldHazardIsTimeCheater = 78,
		HazardsCounteredWithShieldHazardIsSatellite = 79,
		HazardsCounteredWithTimeCheaterHazardIsShield = 80,
		HazardsCounteredWithTimeCheaterHazardIsClam = 81,
		HazardsCounteredWithTimeCheaterHazardIsSheldon = 82,
		HazardsCounteredWithTimeCheaterHazardIsGoldenTurd = 83,
		HazardsCounteredWithTimeCheaterHazardIsCulturePod = 84,
		HazardsCounteredWithTimeCheaterHazardIsPropaneBomb = 85,
		HazardsCounteredWithTimeCheaterHazardIsTimeCheater = 86,
		HazardsCounteredWithTimeCheaterHazardIsSatellite = 87,
		HazardsCounteredWithHopHazardIsClam = 88,
		HazardsCounteredWithHopHazardIsSheldon = 89,
		HazardsCounteredWithHopHazardIsGoldenTurd = 90,
		WasHitByGoldenTurd = 91,
		WasHitByFuelTank = 92,
		WasHitByDrunkenClam = 93,
		WasHitByShield = 94,
		WasHitBySheldon = 95,
		WasHitByCulturePod = 96,
		WasHitByPropaneBomb = 97,
		WasHitByTimeCheater = 98,
		WasHitBySatellite = 99,
		BattlePoints = 100,
		HitOpponentWithAnyWhileTargetIsGliding = 101,
		HitOpponentWithClamWhileTargetIsGliding = 102,
		ShortcutsTaken = 103,
		DistanceOffRoadBoosted = 104,
		LapsCompletedWithoutRespawning = 105,
		DistanceHopped = 106,
		SinglePlayerRacesWon = 107,
		SinglePlayerBattlesWon = 108,
		MultiplayerBattlesWon = 109,
		MultiplayerRacesWon = 110,
		MultiplayerTournamentsWon = 111,
		NOT_IMPLEMENTED_FreePlayRacesWon = 112,
		NOT_IMPLEMENTED_FreePlayBattlesWon = 113,
		SinglePlayerRacesPlayed = 114,
		SinglePlayerBattlesPlayed = 115,
		MultiplayerBattlesPlayed = 116,
		MultiplayerRacesPlayed = 117,
		MultiplayerTournamentsPlayed = 118,
		FreePlayRacesPlayed = 119,
		FreePlayBattlesPlayed = 120,
		SeasonRewardsEarned = 121,
		SeasonsCompleted = 122,
		ArcadeTimeTrialLaps = 123,
		ArcadeCollectorHits = 124,
		ArcadeShooterHits = 125,
		ArcadeMedalBronzeWon = 126,
		ArcadeMedalSilverWon = 127,
		ArcadeMedalGoldWon = 128,
		ArcadeMedalGoldUniqueWon = 129,
		ArcadeShooterMedalWon = 130,
		ArcadeCollectorMedalWon = 131,
		ArcadeTimeTrialMedalWon = 132,
	}
}

namespace Atlas.Tests
{
	public enum RebootPoint
	{
		Manual = 0,
		DuringInit = 1,
		DuringUpdate = 2,
		DuringDeInit = 3,
	}
}

namespace Atlas.UI
{
	public enum ModalState
	{
		None = 0,
		Deactivated = 1,
		Activating = 2,
		Activated = 3,
		Deactiving = 4,
	}
}

namespace Atlas.UI.Screens
{
	public enum DisplayStyle
	{
		Race = 0,
		Battle = 1,
	}
	public enum HUDElement
	{
		Use = 0,
		Drift = 1,
		ProgressCounter = 2,
		ChallengeProgress = 3,
		Pause = 4,
		Joystick = 5,
		Minimap = 6,
		MiniLeaderboard = 7,
		Timer = 8,
		ArcadeProgress = 9,
	}
}
