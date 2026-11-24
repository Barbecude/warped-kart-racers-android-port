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
	public class PolyLineBehaviour : FeatureBehaviour
	{
		[SerializeField] private float _resolution;
		[SerializeField] private bool _loop;
		private PolyLine _polyLine;
		public PolyLine PolyLine { get => default; }
		public virtual int GetPriority() { return default; }
		protected virtual void OnCalculate() { }
		public virtual bool TryGetClosestPoint(float3 checkPoint, out PolyLine outPolyline, out int outPointIndex) { outPolyline = default; outPointIndex = default; return default; }
		public virtual bool TryGetClosestEndPoint(float3 checkPoint, out PolyLine outPolyline, out int outPointIndex) { outPolyline = default; outPointIndex = default; return default; }
		public virtual int GetPolyLineCount() { return default; }
		public virtual bool TryGetPolyLine(int index, out PolyLine outPolyline) { outPolyline = default; return default; }
		private void OnDrawGizmosSelected() { }
		private void OnDrawGizmos() { }
	}
}
