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

namespace Atlas.Gameplay.Usables
{
	public abstract class CollidableUsable : Usable, ICollidableOwner
	{
		private float _selfInvulnTimer;
		protected Replicator _replicator;
		public CollidableUsableDefinition CollidableDefinition { get => default; }
		public CollidableUsableBehaviour CollidableUsableBehaviour { get => default; }
		public virtual void DeInit() { }
		public void OnExitPool(CollidableUsableDefinition collidableDefinition, CollidableUsableBehaviour usableBehaviour) { }
		public void OnExitPool(CollidableUsableDefinition collidableDefinition, CollidableUsableBehaviour usableBehaviour, KartComposite ownerKart, int groupId, int sequenceId) { }
		public virtual void OnEnterPool() { }
		protected bool IsRemote() { return default; }
		protected bool IsSelfInvulnerable() { return default; }
		public virtual void Use() { }
		public virtual void Update(IUpdateParams updateParams) { }
		protected virtual bool KartCollision(KartComposite kartComposite, bool markForDestroy) { return default; }
		protected virtual bool KartCollision(KartComposite kartComposite, KartTriggerEffectParameters kartTriggerEffectParameters, bool markForDestroy) { return default; }
		public virtual void OnAoEHit() { }
		private void OnHitSuccess(KartComposite kartHit) { }
		public virtual void OnCollisionEnter(Collision collision) { }
		public virtual void OnCollisionStay(Collision collision) { }
		public virtual void OnCollisionExit(Collision collision) { }
		public virtual void OnTriggerEnter(Collider collider) { }
		public virtual void OnTriggerStay(Collider collider) { }
		public virtual void OnTriggerExit(Collider collider) { }
		private void OnTearDownParamsInternal() { }
		private void SetKinematic(bool kinematic) { }
	}
}
