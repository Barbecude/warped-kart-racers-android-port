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

namespace Atlas.Geometry
{
	public class TrackEditorUpdatableBehaviour : MonoBehaviour
	{
		public const int InvalidRevision = -1;
		private int _revision;
		private int _childrenRevision;
		private int _updatedToRevision;
		private int _updatedToChildrenRevision;
		public int Revision { get => default; }
		public int ChildrenRevision { get => default; }
		public int UpdatedToRevision { get => default; }
		public int UpdatedToChildrenRevision { get => default; }
		private void Awake() { }
		public virtual int GetPriority() { return default; }
		public double Calculate() { return default; }
		public bool NeedsUpdate() { return default; }
		protected void ResetTransform() { }
		protected void ClearDependencies() { }
		protected void AddDependency(TrackEditorUpdatableBehaviour updatableBehaviour) { }
		protected void UpdatedToLatestAllRevision() { }
		protected virtual void OnCalculate() { }
		protected virtual void OnTransformedChanged(int revision) { }
		protected virtual void OnInspectorValuesChanged(int revision) { }
		protected virtual void OnChildChanged(TrackEditorUpdatableBehaviour behaviour, int revision) { }
		private void ChildChanged(TrackEditorUpdatableBehaviour behaviour, int revision) { }
		private void TransformChanged() { }
		private void InspectorValuesChanged() { }
		private void NotifyParentOfChange() { }
	}
}
