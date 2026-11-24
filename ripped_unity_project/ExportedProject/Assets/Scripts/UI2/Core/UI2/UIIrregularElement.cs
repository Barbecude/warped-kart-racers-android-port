using UnityEngine.UI;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Core.UI2
{
	public class UIIrregularElement : MaskableGraphic, ILayoutElement, ICanvasRaycastFilter
	{
		public struct EdgeDetails { }
		private const float MAX_UV = 0.5f;
		[SerializeField] private Sprite _sprite;
		[SerializeField] private float _borderWidth;
		[SerializeField] private Color _borderColour;
		[SerializeField] private Vector2 _shadowOffset;
		[SerializeField] private Color _shadowColour;
		[SerializeField] private float _antiAliasing;
		[SerializeField] private bool _projectUVs;
		[SerializeField] private UIUtils.PreserveAspectRatioType _projectPreserveAspectRatioType;
		[SerializeField] private Vector2 _offsetUVs;
		[SerializeField] private Vector2 _scaleUVs;
		[SerializeField] private float _topLeftUVX;
		[SerializeField] private float _topLeftUVY;
		[SerializeField] private float _topRightUVX;
		[SerializeField] private float _topRightUVY;
		[SerializeField] private float _bottomRightUVX;
		[SerializeField] private float _bottomRightUVY;
		[SerializeField] private float _bottomLeftUVX;
		[SerializeField] private float _bottomLeftUVY;
		[SerializeField] private float _leftCurveMagnitude;
		[SerializeField] private float _leftCurveFrequency;
		[SerializeField] private float _leftCurveOffset;
		[SerializeField] private int _leftCurveDivisions;
		[SerializeField] private float _rightCurveMagnitude;
		[SerializeField] private float _rightCurveFrequency;
		[SerializeField] private float _rightCurveOffset;
		[SerializeField] private int _rightCurveDivisions;
		[SerializeField] private float _fillPercentage;
		private Vector2 _adjustedScaleUVs;
		private float m_CachedReferencePixelsPerUnit;
		public float FillPerc { get => default; set { } }
		public float TopLeftUVX { get => default; set { } }
		public float TopLeftUVY { get => default; set { } }
		public float TopRightUVX { get => default; set { } }
		public float TopRightUVY { get => default; set { } }
		public float BottomRightUVX { get => default; set { } }
		public float BottomRightUVY { get => default; set { } }
		public float BottomLeftUVX { get => default; set { } }
		public float BottomLeftUVY { get => default; set { } }
		public Sprite sprite { get => default; set { } }
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
		protected virtual void OnPopulateMesh(VertexHelper toFill) { }
		private Vector2 AdjustUVs(Vector2 uvs, Vector2 offset, Vector2 scale) { return default; }
		private void GenerateMesh(VertexHelper vh, bool lPreserveAspect) { }
		private void AddStripTris(int startVertIndex, int endVertIndex, int outerVertCount, VertexHelper vh) { }
		private void AddMiddleTris(int startVertIndex, int endVertIndex, int centerIndex, int outerVertCount, VertexHelper vh) { }
		private void AddEdge(UIIrregularElement.EdgeDetails edgeDetails, int vertCount, Vector2 offset, bool projectUVs, Vector4 dimensions, VertexHelper vh) { }
		private static Vector2 CalculateUV(Vector2 vert, Vector4 dimensions) { return default; }
		private Vector4 GetDrawingDimensions(bool shouldPreserveAspect) { return default; }
		private void PreserveSpriteAspectRatio(ref Rect rect, Vector2 spriteSize) { }
	}
}
