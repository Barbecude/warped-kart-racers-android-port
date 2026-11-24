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
	public class UIRewardBehaviour : MonoBehaviour
	{
		[SerializeField] private GameObject _completedRoot;
		[SerializeField] private Image _completedTickImage;
		[SerializeField] private GameObject _rewardIndex;
		[SerializeField] private TMP_Text _rewardIndexText;
		[SerializeField] private bool _showIndexIfLocked;
		[SerializeField] private UIIconAndValueBehaviour _iconAndValueBehaviour;
		[SerializeField] private CharacterRepresentationViewBehaviour _characterView;
		[SerializeField] private LoadoutRepresentationViewBehaviour _loadoutView;
		private int _index;
		public UIIconAndValueBehaviour IconAndValueBehaviour { get => default; }
		public virtual void Set(AssetDefinition loadOutDefinition, bool completed, int index) { }
		public void Set(bool completed) { }
		public void SetCompletedAndStamp() { }
		public void Wiggle(float delayStart, TweenCallback onComplete) { }
	}
}
