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
	public class SingleplayerOverviewScreen : AtlasScreen<SingleplayerOverviewBehaviour, SingleplayerOverviewScreen.TransitionData>
	{
		private static readonly DefinitionID FTUEStage_14_UnlockingTheGame_ID;
		private static readonly float ANIM_WAIT_TIME;
		private float _currentAnimWaitTime;
		private bool _unlockAnimQueued;
		private int _numCTAAnimsQueued;
		protected virtual void OnBeforeEnter() { }
		private void SetupArcadePanel(AtlasDefinitions atlasDefinitions) { }
		protected virtual void OnUpdate(float dt) { }
		private void SetLockedMaterial(CampaignPanelButtonBehaviour campaignPanelButton) { }
		private void LockButton(CampaignPanelButtonBehaviour campaignPanelButton) { }
		private void ButtonPressed(DefinitionID campaignId) { }
		private void LockedButtonPressed(DefinitionID campaignId) { }
		private void SetupLeagueBadgeRepresentation(LeagueButtonBehaviour leagueButton, bool leagueUnlocked) { }
	}
}
