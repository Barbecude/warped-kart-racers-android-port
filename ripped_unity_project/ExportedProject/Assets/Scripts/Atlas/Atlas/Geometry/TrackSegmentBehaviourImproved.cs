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
	public class TrackSegmentBehaviourImproved : TrackEditorUpdatableBehaviour
	{
		[SerializeField] private float _length;
		[SerializeField] private float _leftWidth;
		[SerializeField] private float _leftHeight;
		[SerializeField] private float _rightWidth;
		[SerializeField] private float _rightHeight;
		[SerializeField] private float _angle;
		[SerializeField] private float _elevation;
		[SerializeField] private float _heightAdjustment;
		[SerializeField] private float _curatureAdjustment;
		[SerializeField] private bool _freeMoveTransform;
		public float Length { get => default; }
		public float LeftWidth { get => default; }
		public float LeftHeight { get => default; }
		public float RightWidth { get => default; }
		public float RightHeight { get => default; }
		public float Angle { get => default; }
		public float Elevation { get => default; }
		public float CuratureAdjustment { get => default; }
		public float HeightAdjustment { get => default; }
		public bool FreeMoveTransform { get => default; }
		private void Awake() { }
		public virtual int GetPriority() { return default; }
	}
}
