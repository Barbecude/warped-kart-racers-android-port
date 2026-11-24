using UnityEngine;

namespace Atlas.Gameplay
{
	public class InteractableBehaviour : MonoBehaviour, ICollidableBehaviour
	{
		[SerializeField]
		private KartTriggerEffectParameters _kartTriggerEffectParameters;

		public KartTriggerEffectParameters KartTriggerEffectParameters => _kartTriggerEffectParameters;
		public ICollidableOwner Owner { get; set; }

		public void Init()
		{
			if (_kartTriggerEffectParameters != null)
			{
				_kartTriggerEffectParameters.CalculateCacheValues(transform);
			}
		}

		public void DeInit()
		{
		}

		public void OnCollisionEnter(Collision collision)
		{
			Owner?.OnCollisionEnter(collision);
		}

		public void OnCollisionStay(Collision collision)
		{
			Owner?.OnCollisionStay(collision);
		}

		public void OnCollisionExit(Collision collision)
		{
			Owner?.OnCollisionExit(collision);
		}

		public void OnTriggerEnter(Collider collider)
		{
			Owner?.OnTriggerEnter(collider);
		}

		public void OnTriggerStay(Collider collider)
		{
			Owner?.OnTriggerStay(collider);
		}

		public void OnTriggerExit(Collider collider)
		{
			Owner?.OnTriggerExit(collider);
		}
	}
}
