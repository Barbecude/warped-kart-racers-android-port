using UnityEngine;

namespace Atlas.Gameplay.Kart
{
	public enum WheelType
	{
		Front = 0,
		Rear = 1
	}

	public class WheelVisualBehaviour : BaseVisualBehaviour
	{
		[SerializeField]
		private WheelType _wheelType;

		public WheelType WheelType => _wheelType;
	}
}
