using System;
using Core.Services;
using UnityEngine;
using UnityEngine.Events;

namespace Atlas.Gameplay.Kart
{
	[Serializable]
	public class KartRootBehaviour : MonoBehaviour, ICollidableBehaviour
	{
		[SerializeField]
		private Transform _visualCompositeParent;

		[Header("Physics")]
		[SerializeField]
		protected KartPhysicsSetup _kartPhysicsSetup;

		[Header("Components")]
		[SerializeField]
		protected Rigidbody _rigidBody;
		[SerializeField]
		protected GameObject _physicsCollider;
		[SerializeField]
		protected Replicator _replicator;
		[SerializeField]
		protected Collider _triggerCollider;

		[Header("Usable Positions")]
		[SerializeField]
		protected Vector3 _frontUsePosition;
		[SerializeField]
		protected Vector3 _backUsePosition;
		[SerializeField]
		protected Vector3 _shieldUsePosition;

		[Header("Portals")]
		[SerializeField]
		protected Transform _portalRespawnInTransform;
		[SerializeField]
		protected Transform _portalRespawnOutTransform;
		[SerializeField]
		protected Transform _introSequencePortalTransform;
		[SerializeField]
		protected Transform _outroSequencePortalTransform;

		private Vector3 _physicsColliderLocalCentre;
		private float _physicsColliderHeight;
		private UnityEvent _eventOnDrawGizmosSelected = new UnityEvent();

		public KartPhysicsSetup KartPhysicsSetup => _kartPhysicsSetup;
		public Replicator Replicator => _replicator;
		public Rigidbody RigidBody => _rigidBody;
		public GameObject PhysicsColliderObject => _physicsCollider;
		public Vector3 PhysicsColliderWorldCentre => transform.position + _physicsColliderLocalCentre;
		public float PhysicsColliderLength => _physicsColliderHeight;
		public Collider TriggerCollider => _triggerCollider;
		public Transform VisualCompositeParent => _visualCompositeParent;
		public ICollidableOwner Owner { get; set; }
		public UnityEvent EventOnDrawGizmosSelected => _eventOnDrawGizmosSelected;
		public Vector3 FrontUsePosition => _frontUsePosition;
		public Vector3 BackUsePosition => _backUsePosition;
		public Vector3 ShieldUsePosition => _shieldUsePosition;
		public Transform PortalRespawnInTransform => _portalRespawnInTransform;
		public Transform PortalRespawnOutTransform => _portalRespawnOutTransform;
		public Transform IntroSequencePortalTransform => _introSequencePortalTransform;
		public Transform OutroSequencePortalTransform => _outroSequencePortalTransform;

		public void Init()
		{
			if (_physicsCollider != null)
			{
				CapsuleCollider capsule = _physicsCollider.GetComponent<CapsuleCollider>();
				if (capsule != null)
				{
					_physicsColliderLocalCentre = capsule.center;
					_physicsColliderHeight = capsule.height;
				}
			}
		}

		public void OnCollisionEnter(Collision other)
		{
			Owner?.OnCollisionEnter(other);
		}

		public void OnCollisionStay(Collision other)
		{
			Owner?.OnCollisionStay(other);
		}

		public void OnCollisionExit(Collision other)
		{
			Owner?.OnCollisionExit(other);
		}

		public void OnTriggerEnter(Collider other)
		{
			Owner?.OnTriggerEnter(other);
		}

		public void OnTriggerStay(Collider other)
		{
			Owner?.OnTriggerStay(other);
		}

		public void OnTriggerExit(Collider other)
		{
			Owner?.OnTriggerExit(other);
		}

		private void OnDrawGizmosSelected()
		{
			_eventOnDrawGizmosSelected?.Invoke();
		}
	}
}
