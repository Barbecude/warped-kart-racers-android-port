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

namespace Atlas.UI
{
	public class UILeagueRewardBehaviour : MonoBehaviour
	{
		[SerializeField] private Animator _animator;
		[SerializeField] private GameObject _completedRoot;
		[SerializeField] private LeagueBadgeRepresentationBehaviour _leagueBadge;
		[SerializeField] private LoadoutRepresentationViewBehaviour _loadoutView;
		[SerializeField] private float _unlockAnimationLength;
		[SerializeField] private UIAtlasButton _button;
		[SerializeField] private ToolTipManager.ToolTipData _tooltipData;
		public float UnlockAnimationLength { get => default; }
		public UIAtlasButton RewardButton { get => default; }
		public ToolTipManager.ToolTipData ToolTipData { get => default; }
		public void Set(AssetDefinition loadOutDefinition, LeagueBadgeData leagueBadge, AtlasSharedScreenParams screenParams) { }
		public void PlayAnimation(bool completed, bool animateUnlock, int delayCount) { }
		private void PlayAnimation(int stateID) { }
		public void PlaySound(string eventName) { }
		public void Wiggle() { }
		public void PlayStarsAnimation() { }
		private IEnumerator AnimateStars() { return default; }
		private IEnumerator PlayDelayedAnimation(int delayCount) { return default; }
	}
}
