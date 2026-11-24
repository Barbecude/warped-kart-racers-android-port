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

namespace Atlas.Gameplay
{
	public class InteractableController : ICollidableOwner, IActor
	{
		private InteractableBehaviour _interactableBehaviour;
		private ActorManager _actorManager;
		private ActorGroup _kartCompositeActorGroup;
		private KartTriggerEffectParameters _interactableTriggerParameters;
		public void Init(InteractableBehaviour behaviour, ActorManager actorManager) { }
		public void DeInit() { }
		public void PreFixedUpdate(IUpdateParams updateParams) { }
		public void PostFixedUpdate(IUpdateParams updateParams) { }
		public void EarlyUpdate(IUpdateParams updateParams) { }
		public void Update(IUpdateParams updateParams) { }
		public void LateUpdate(IUpdateParams updateParams) { }
		public void FixedUpdate(IUpdateParams updateParams) { }
		public void OnCollisionEnter(Collision collision) { }
		public void OnCollisionStay(Collision collision) { }
		public void OnCollisionExit(Collision collision) { }
		public void OnTriggerEnter(Collider collider) { }
		public void OnTriggerStay(Collider collider) { }
		public void OnTriggerExit(Collider collider) { }
	}
}
