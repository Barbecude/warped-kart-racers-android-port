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
	public class LeaguePromotionScreen : AtlasScreen<LeaguePromotionBehaviour, LeaguePromotionScreen.TransitionData>
	{
		private FrontEndScene _frontEndScene;
		private LeaguePromotionScreen.ContinueSelected _continueSelected;
		private LeaguePromotionFrontEndSubsceneBehaviour _promotionBehaviour;
		private int _waitToSettleFrames;
		private bool _waitingOnLoad;
		private bool _isWaitingForTransition;
		protected virtual void OnBeforeEnter() { }
		private void DispatchAnalytics() { }
		protected virtual void OnUpdate(float dt) { }
		private IEnumerator DoPromotionDemotionSequence() { return default; }
		private bool ContinuePressed() { return default; }
	}
}
