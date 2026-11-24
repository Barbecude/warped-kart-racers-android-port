using Atlas.Rendering;
using UnityEngine;

namespace Atlas.Gameplay.Kart
{
	public class AntennaVisualBehaviour : BaseVisualBehaviour
	{
		[SerializeField]
		private WibbleBehaviour _wibbleBehaviour;

		[SerializeField]
		private SphereCollider _tapSphereCollider;

		public WibbleBehaviour WibbleBehaviour => _wibbleBehaviour;
		public SphereCollider TapSphereCollider => _tapSphereCollider;
	}
}
