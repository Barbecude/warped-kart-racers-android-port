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

namespace Atlas.Animations
{
	public class AnimatorSetBoolStateMachineBehaviour : StateMachineBehaviour
	{
		[SerializeField] private bool _onEnter;
		[SerializeField] private string _onEnterBoolName;
		[SerializeField] private bool _onEnterBoolState;
		[SerializeField] private bool _onExit;
		[SerializeField] private string _onExitBoolName;
		[SerializeField] private bool _onExitBoolState;
		private int _onEnterBoolNameHash;
		private int _onExitBoolNameHash;
		private void Awake() { }
		public virtual void OnStateEnter(Animator animator, AnimatorStateInfo stateInfo, int layerIndex) { }
		public virtual void OnStateExit(Animator animator, AnimatorStateInfo stateInfo, int layerIndex) { }
	}
}
