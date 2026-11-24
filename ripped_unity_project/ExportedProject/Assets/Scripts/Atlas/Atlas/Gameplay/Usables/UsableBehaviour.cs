using UnityEngine;
using UnityEngine.Events;
using Atlas.Lighting;
using Core.Services;

namespace Atlas.Gameplay.Usables
{
	public class UsableBehaviour : MonoBehaviour
	{
		[SerializeField] private Transform _visualRoot;
		[SerializeField] private Replicator _replicator;
		[SerializeField] private UnityEvent _eventOnDrawGizmos = new UnityEvent();
		[SerializeField] private Usable _usable;
		private LightWorld _lightWorld;

		public Transform VisualRoot => _visualRoot;
		public UnityEvent EventOnDrawGizmos => _eventOnDrawGizmos;
		public Replicator Replicator => _replicator;
		public LightWorld LightWorld
		{
			get => _lightWorld;
			set => _lightWorld = value;
		}
	}
}
