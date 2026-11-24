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
	public class Track : IFeature
	{
		private SplinePolyLine _splinePolyLine;
		private SplineDistanceLookup _distanceLookup;
		private ProjectionParameterSampler _projectionParameterSampler;
		private float _polyLineResolution;
		private bool _loop;
		private int[] _authoredIndices;
		private PolyLine _startCapPolyLine;
		private PolyLine[] _leftPolyLines;
		private float[] _leftUVOffsets;
		private PolyLine _leftOutermostPolyLine;
		private PolyLine _centrePolyLine;
		private PolyLine[] _rightPolyLines;
		private float[] _rightUVOffsets;
		private PolyLine _rightOutermostPolyLine;
		private PolyLine _endCapPolyLine;
		private float _marginWidth;
		public SplinePolyLine SplinePolyLine { get => default; }
		public float PolyLineResolution { get => default; }
		public bool Loop { get => default; }
		public int[] AuthoredIndices { get => default; }
		public PolyLine StartCapPolyLine { get => default; }
		public PolyLine[] LeftPolyLines { get => default; }
		public float[] LeftUVOffsets { get => default; }
		public PolyLine LeftOutermostPolyLine { get => default; }
		public PolyLine CentrePolyLine { get => default; }
		public PolyLine[] RightPolyLines { get => default; }
		public float[] RightUVOffsets { get => default; }
		public PolyLine RightOutermostPolyLine { get => default; }
		public PolyLine EndCapPolyLine { get => default; }
		public List<PolyLine.ProjectionSample> PolyLineSamples { get => default; }
		public List<Track.RenderableSection> RenderableSections { get => default; }
		public float MarginWdith { get => default; }
		public void Reset() { }
		public bool TryGetClosestPoint(float3 checkPoint, out PolyLine outPolyline, out int outPointIndex) { outPolyline = default; outPointIndex = default; return default; }
		public bool TryGetClosestEndPoint(float3 checkPoint, out PolyLine outPolyline, out int outPointIndex) { outPolyline = default; outPointIndex = default; return default; }
		public void DrawGizmos(int selectedKnotIndex) { }
		public void DrawGizmosImproved(int selectedKnotIndex) { }
	}
}
