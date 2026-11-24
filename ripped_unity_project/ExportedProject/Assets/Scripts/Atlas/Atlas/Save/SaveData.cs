using System;
using System.Collections.Generic;
using Core.Definitions;
using UnityEngine;

namespace Atlas.Save
{
	[Serializable]
	public class SaveData
	{
		public const int LastestVersion = 3;

		[Serializable]
		public struct CharacterProgression
		{
			public string CharacterId;
			public uint CharXP;
			public string LastUsedSkinId;
		}

		[Serializable]
		public struct EventProgression
		{
			public string EventId;
			public byte ChallengesCompletedBitField;
			public byte SeenCompletedChallengesBitField;
		}

		[Serializable]
		public struct UnlockedData
		{
			public string UnlockId;
			public int UnlockStatusBitField;
		}

		[Serializable]
		public struct KeyValueInt
		{
			public string Key;
			public int Value;
		}

		[Serializable]
		public struct KeyValueString
		{
			public string Key;
			public string Value;
		}

		public int Version = LastestVersion;
		public string SaveDateTimeIso;
		public string LanguageIETF = "en-US";
		public bool MultiplayerConsentGiven;

		public List<UnlockedData> UnlockedList = new List<UnlockedData>();
		public List<string> UnlockedIdList = new List<string>();
		public List<string> UnseenUnlockedIdList = new List<string>();
		public List<CharacterProgression> CharacterProgressionList = new List<CharacterProgression>();
		public List<EventProgression> EventProgressionList = new List<EventProgression>();
		public List<string> MapsPlayed = new List<string>();
		public List<string> CharactersAndSkinsPlayedAs = new List<string>();
		public List<string> KartsPlayedAs = new List<string>();
		public List<string> CharactersAndSkinsWithEventWins = new List<string>();

		public string SelectedCharacterId;
		public string SelectedKartId;
		public string SelectedGliderId;
		public string SelectedWheelsId;
		public string SelectedAntennaId;
		public string SelectedBoostId;

		public float MusicVolume = 1f;
		public float SfxVolume = 1f;
		public float VOVolume = 1f;

		public List<KeyValueInt> IntSettings = new List<KeyValueInt>();
		public List<KeyValueString> StringSettings = new List<KeyValueString>();

		public DateTime SaveDateTime
		{
			get
			{
				DateTime dt;
				return DateTime.TryParse(SaveDateTimeIso, out dt) ? dt : DateTime.MinValue;
			}
			set
			{
				SaveDateTimeIso = value.ToString("O");
			}
		}
	}
}
