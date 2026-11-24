using UnityEngine;

namespace Atlas.Gameplay.Kart
{
	public class GliderVisualBehaviour : BaseVisualBehaviour
	{
		private static readonly int GliderOffNameHash = Animator.StringToHash("Glider_Off");

		[SerializeField]
		private GameObject _leftTrailGameObject;

		[SerializeField]
		private GameObject _rightTrailGameObject;

		public bool ShouldGliderBeVisible
		{
			get
			{
				if (_animator == null)
				{
					return false;
				}
				return _animator.GetCurrentAnimatorStateInfo(0).shortNameHash != GliderOffNameHash;
			}
		}

		public void SetTrailsEnabled(bool enabled)
		{
			if (_leftTrailGameObject != null)
			{
				_leftTrailGameObject.SetActive(enabled);
			}
			if (_rightTrailGameObject != null)
			{
				_rightTrailGameObject.SetActive(enabled);
			}
		}
	}
}
