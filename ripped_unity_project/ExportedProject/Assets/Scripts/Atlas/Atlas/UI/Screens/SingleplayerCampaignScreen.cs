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

namespace Atlas.UI.Screens
{
	public class SingleplayerCampaignScreen : AtlasScreen<SingleplayerCampaignBehaviour, SingleplayerCampaignScreen.TransitionData>
	{
		public const string PrologueCampaignID = "Campaign_Prologue";
		public const string EasyCampaignID = "Campaign_Easy";
		public const string MediumCampaignID = "Campaign_Medium";
		public const string HardCampaignID = "Campaign_Hard";
		public const string SeriesCampaignID = "Campaign_Series";
		public const string LegendCampaignID = "Campaign_Legend";
		public const string FreeplayCampaignID = "Campaign_Freeplay";
		protected virtual void OnBeforeEnter() { }
		private void ButtonPressed(DefinitionID chapterId) { }
		private void LockedButtonPressed(DefinitionID chapterId) { }
	}
}
