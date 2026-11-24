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
	public class SeasonsRotationDefinition : Definition
	{
		[SerializeField] private RotationTypeDefinition _rotationType;
		[SerializeField] private int _numberOfWeeks;
		[SerializeField] private string _defaultSeasonID;
		[SerializeField] private RotationDate _startDate;
		[SerializeField] private int _previousNumberOfReruns;
		[SerializeField] private ToolTipManager.ToolTipData _loopingEpisodeRotations;
		[SerializeField] private ToolTipManager.ToolTipData _loopingEpisodeRotationsContinued;
		[SerializeField] private ToolTipManager.ToolTipData _episodeStart;
		[SerializeField] private ToolTipManager.ToolTipData _oneWeekLeft;
		[SerializeField] private ToolTipManager.ToolTipData _oneDayLeft;
		public RotationTypeDefinition RotationType { get => default; }
		public string DefaultSeasonID { get => default; }
		public List<RotationEntry> Seasons { get => default; }
		public int NumberOfWeeks { get => default; }
		public DateTime StartDate { get => default; }
		public int StartNumberOfReruns { get => default; }
		public ToolTipManager.ToolTipData LoopingEpisodeRotations { get => default; }
		public ToolTipManager.ToolTipData LoopingEpisodeRotationsContinued { get => default; }
		public ToolTipManager.ToolTipData EpisodeStart { get => default; }
		public ToolTipManager.ToolTipData OneWeekLeft { get => default; }
		public ToolTipManager.ToolTipData OneDayLeft { get => default; }
	}
}
