using Atlas.Gameplay.Kart;
using UnityEngine;

namespace Atlas.Gameplay
{
	public class ObjectTagBehaviour : MonoBehaviour
	{
		[SerializeField]
		private FloorSurfaceType _floorSurfaceType;

		[SerializeField]
		private AestheticSurfaceType _aestheticSurfaceType;

		[SerializeField]
		private bool _canHopOver;

		[SerializeField]
		private bool _isGlideTrigger;

		[SerializeField]
		private bool _isBoostTrigger;

		[SerializeField]
		private bool _isHopBoostTrigger;

		[SerializeField]
		private bool _isHopGravityTrigger;

		public FloorSurfaceType FloorSurfaceType => _floorSurfaceType;
		public AestheticSurfaceType AestheticSurfaceType => _aestheticSurfaceType;
		public bool CanHopOver => _canHopOver;
		public bool IsGlideTrigger => _isGlideTrigger;
		public bool IsBoostTrigger => _isBoostTrigger;
		public bool IsHopBoostTrigger => _isHopBoostTrigger;
		public bool IsHopGravityTrigger => _isHopGravityTrigger;
	}
}
