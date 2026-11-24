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
	public class LeagueLeaderboardScreen : AtlasScreen<LeagueLeaderboardBehaviour, LeagueLeaderboardScreen.TransitionData>
	{
		private FrontEndScene _frontEndScene;
		private LeagueManager _leagueManager;
		private const string SlideOutTweenKey = "slideout";
		private const string SlideInTweenKey = "slidein";
		private Coroutine _slideOutCoroutine;
		private Coroutine _slideInCoroutine;
		protected virtual void OnBeforeEnter() { }
		private void ShowStarsBox() { }
		private void PrepareAnimation() { }
		protected virtual void OnStartEnter() { }
		protected virtual bool RequiresBeforeEnterCoroutine() { return default; }
		protected virtual IEnumerator OnBeforeEnterCoroutine() { return default; }
		protected virtual void OnAfterEnter() { }
		private void SelectButton(UIAtlasButton button) { }
		private IEnumerator BuildOptions() { return default; }
		private void HideEqualSigns() { }
		private bool NextPressed() { return default; }
		private void SetupLeagueRank() { }
		private void SetupTimeRemaining() { }
		private void SetupRewards() { }
		private Action OnRewardPanelClicked(int rewardID, bool isUnlocked, UILeagueRewardBehaviour[] rewards) { return default; }
		protected virtual void OnAfterExit() { }
		private void Animate() { }
		private IEnumerator PlaySlideOut(float delayCount) { return default; }
		private void OnCompleteSlideOut() { }
		private IEnumerator PlaySlideIn(float delayCount) { return default; }
		private void SetPreviousPositions() { }
		private bool AnyLeaderboardChanges() { return default; }
	}
}
