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
	public class EndOfRoundScreen : AtlasScreen<EndOfRoundScreenBehaviour, EndOfRoundScreen.TransitionData>
	{
		private const string SlideOutTweenKey = "slideout";
		private const string SlideInTweenKey = "slidein";
		private float _endTimer;
		protected virtual void OnBeforeEnter() { }
		protected virtual void OnAfterEnter() { }
		protected virtual void OnUpdate(float dt) { }
		private void OnStartStarDeltaSpawn() { }
		private void OnStarDeltaEnterTweensStart() { }
		private void OnStarDeltaEnterTweensComplete() { }
		private void OnPlayStarSpawnTweensStart() { }
		private void OnCompleteStarSpawnTweens() { }
		private void OnCompleteSlideOut() { }
		private void OnCompleteSlideIn() { }
		private void LayoutLeaderboard(int numPlayers) { }
		private void SetRoundNumber(int roundNum) { }
	}
}
