using System;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using Atlas.Audio;
using Atlas.Contexts;
using Atlas.Definitions;
using Atlas.Gameplay;
using Atlas.Gameplay.Kart;
using Atlas.Gameplay.Pickups;
using Atlas.Gameplay.Player;
using Atlas.Gameplay.Usables;
using Atlas.Input;
using Atlas.League;
using Atlas.Lighting;
using Atlas.Networking;
using Atlas.Rendering;
using Atlas.Save;
using Atlas.Settings;
using Atlas.Stats;
using Atlas.UI;
using Core.Actors;
using Core.Application;
using Core.Assets;
using Core.Audio;
using Core.Cameras;
using Core.Containers;
using Core.Contexts;
using Core.Definitions;
using Core.Input;
using Core.Localisation;
using Core.Networking;
using Core.Scenes;
using Core.Services;
using Core.Settings;
using Unity.Collections;
using Unity.Jobs;
using Unity.Mathematics;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.Events;
using UnityEngine.UI;
using Object = UnityEngine.Object;
using Network = Atlas.Networking.Network;
using NetworkPlayer = Core.Networking.NetworkPlayer;

namespace Atlas.Definitions
{
	public class SeasonRotationHelper
	{
		private const int _daysInAWeek = 7;
		public static bool IsRotationActive(DateTime dateTime, DateTime startDate) { return default; }
		private static DateRange GetMonthlyDateRange(DateTime dateTime) { return default; }
		private static DateRange GetNumberOfWeekDateRange(DateTime startDate, DateTime dateTime, int numberOfWeeks) { return default; }
		public static int GetNumberOfReruns(DateTime date, DateTime startDate, RotationTypeDefinition type, int seasonCount) { return default; }
		private static int GetMonthlyReruns(DateTime date, DateTime startDate, int seasonCount) { return default; }
		private static int GetNumberOfWeeksReruns(DateTime date, DateTime startDate) { return default; }
		private static int GetWeeklyReruns(DateTime date, DateTime startDate) { return default; }
	}
}
