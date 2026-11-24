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
	public class UIArcadeRewardBehaviour : MonoBehaviour
	{
		[SerializeField] private ArcadeMedalSprites _medalSprites;
		[SerializeField] private Animator _animator;
		[SerializeField] private GameObject _completedRoot;
		[SerializeField] private UIIconAndValueBehaviour _iconAndValueBehaviour;
		[SerializeField] private LoadoutRepresentationViewBehaviour _loadoutView;
		[SerializeField] private float _unlockAnimationLength;
		[SerializeField] private UIAtlasButton _button;
		[SerializeField] private ToolTipManager.ToolTipData _tooltipData;
		private int totalObtained;
		private int totalCount;
		public float UnlockAnimationLength { get => default; }
		public UIAtlasButton Button { get => default; }
		public ToolTipManager.ToolTipData ToolTipData { get => default; }
		public void Set(AssetDefinition loadOutDefinition, int obtainedMedalCount, int totalMedals, ArcadeEventDefinition.Medal medal, AtlasSharedScreenParams screenParams) { }
		public void PlayAnimation(bool completed, bool animateUnlock, int delayCount) { }
		public void PlayCoinCountAnimation(int startingValue, int targetValue, int totalValue) { }
		private IEnumerator AnimateMedalCount(int startingValue, int targetValue, int totalValue) { return default; }
		private void PlayAnimation(int stateID) { }
		public void PlaySound(string eventName) { }
		public void Wiggle() { }
		public void PlayStarsAnimation() { }
		private IEnumerator AnimateStars() { return default; }
		private IEnumerator PlayDelayedAnimation(int delayCount) { return default; }
	}
}
