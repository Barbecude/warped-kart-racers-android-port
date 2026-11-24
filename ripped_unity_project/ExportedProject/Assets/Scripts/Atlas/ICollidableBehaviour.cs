using UnityEngine;

namespace Atlas.Gameplay
{
	public interface ICollidableBehaviour
	{
		ICollidableOwner Owner { get; set; }
		void OnCollisionEnter(Collision collision);
		void OnCollisionStay(Collision collision);
		void OnCollisionExit(Collision collision);
		void OnTriggerEnter(Collider collider);
		void OnTriggerStay(Collider collider);
		void OnTriggerExit(Collider collider);
	}
}
