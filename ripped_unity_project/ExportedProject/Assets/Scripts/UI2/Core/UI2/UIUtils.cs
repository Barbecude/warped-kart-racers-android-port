using UnityEngine.UI;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Core.UI2
{
	public static class UIUtils
	{
		public enum PreserveAspectRatioType
		{
			None = 0,
			ScaleToFill = 1,
			ScaleToFit = 2,
		}
		private static Vector3[] corners;
		public static bool TryGetScreenBehaviourFromGameObject(GameObject gameObject, out UIScreenBehaviour behaviour) { behaviour = default; return default; }
		public static bool TryGetScreenLayerFromGameObject(GameObject gameObject, out int layerIndex) { layerIndex = default; return default; }
		public static int GetScreenLayerFromGameObject(GameObject gameObject) { return default; }
		public static Vector2 CalculatePreserveAspectRatioScale(Vector2 destinationDimensions, Vector2 sourceDimensions, UIUtils.PreserveAspectRatioType preserveAspectRatioType) { return default; }
		public static Vector4 CalculateCentredSTCoordsForScaleFactor(Vector2 scale) { return default; }
		public static string GetSizeFormattedProgressString(int currentValue, int maxValue, float currentValueSizePercent) { return default; }
		public static Bounds TransformBoundsTo(RectTransform source, Transform target) { return default; }
		public static float NormalizeScrollDistance(ScrollRect scrollRect, int axis, float distance) { return default; }
		public static float ScrollTargetNormalizedPosition(ScrollRect scrollRect, RectTransform target, RectTransform.Axis axis) { return default; }
		public static void SnapToCenter(ScrollRect scrollRect, RectTransform target, RectTransform.Axis axis) { }
		public static Rect GetWorldRect(RectTransform rt) { return default; }
		public static bool RectContainsRectHorizontally(RectTransform lhsRect, RectTransform rhsRect) { return default; }
	}
}
