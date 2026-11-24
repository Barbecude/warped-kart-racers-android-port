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
	public class UIBackgroundBehaviour : MaskableGraphic, ILayoutElement, ICanvasRaycastFilter
	{
		[SerializeField] private Sprite _sprite;
		[SerializeField] private float _skewX;
		[SerializeField] private Vector2 _offsetUVs;
		[SerializeField] private Vector2 _scaleUVs;
		[SerializeField] private int _gridCountY;
		[SerializeField] private bool _hideBackground;
		[SerializeField] private int _maxDotsFullyVisible;
		[SerializeField] private int _minDotsFullyVisible;
		[SerializeField] private int _maxDotsFlipped;
		[SerializeField] private float _fadeInOutTime;
		[SerializeField] private float _changeLayoutTime;
		[SerializeField] private int _possibleDotLocationCount;
		[SerializeField] private float _removeDotsDistanceFromCenter;
		[SerializeField] private float _fadeInDotsOverDistance;
		[SerializeField] private int _randomSeed;
		private UIBackgroundBehaviour.FilledLocation[] _filledLocations;
		private UIBackgroundBehaviour.Dot[] _dots;
		private float _updateTimer;
		private Color32 _fadeInColour;
		private Color32 _fadeOutColour;
		private bool _fading;
		private int _generatedSeed;
		private float _generatedWidth;
		private float _generatedHeight;
		private int _generatedPossibleDotLocationCount;
		private int _generatedGridCountY;
		private float m_CachedReferencePixelsPerUnit;
		public Sprite Sprite { set { } }
		public float minWidth { get => default; }
		public float preferredWidth { get => default; }
		public float flexibleWidth { get => default; }
		public float minHeight { get => default; }
		public float preferredHeight { get => default; }
		public float flexibleHeight { get => default; }
		public int layoutPriority { get => default; }
		public Texture mainTexture { get => default; }
		public float pixelsPerUnit { get => default; }
		public virtual void CalculateLayoutInputHorizontal() { }
		public virtual void CalculateLayoutInputVertical() { }
		public virtual bool IsRaycastLocationValid(Vector2 screenPoint, Camera eventCamera) { return default; }
		private void Update() { }
		private void InitDotIndices() { }
		private void UpdateDots() { }
		private void GenerateDots(Vector2 min, Vector2 orgSize) { }
		protected virtual void OnPopulateMesh(VertexHelper vh) { }
		private void AddDotsToVertexHelper(UIBackgroundBehaviour.Dot[] dots, Color32 colour, VertexHelper vh) { }
		private void AddDotToVertexHelper(ref UIBackgroundBehaviour.Dot dot, Color32 colour, VertexHelper vh) { }
		private void AddQuad(Vector2 minCorner, Vector2 maxCorner, Color32 colour32, Vector2 min, Vector2 orgSize, VertexHelper vh) { }
		private UIBackgroundBehaviour.Dot CreateDot(Vector2 minCorner, Vector2 maxCorner, Vector2 min, Vector2 orgSize) { return default; }
		private Vector4 CreateVector4(float x, float y, Vector2 yw) { return default; }
		private Vector4 AdjustUVs(Vector2 uvs, Vector2 offset, Vector2 scale) { return default; }
	}
}
