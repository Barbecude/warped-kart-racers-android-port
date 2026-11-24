using UnityEngine;
using UnityEngine.UI;

namespace Core.UI2
{
	public class UISlantElement : MaskableGraphic
	{
		public float StartFillPercentage { get; set; }
		public float EndfillPercentage { get; set; }
		public Vector2 BottomRightPosition => rectTransform != null ? new Vector2(rectTransform.rect.xMax, rectTransform.rect.yMin) : Vector2.zero;
	}
}
