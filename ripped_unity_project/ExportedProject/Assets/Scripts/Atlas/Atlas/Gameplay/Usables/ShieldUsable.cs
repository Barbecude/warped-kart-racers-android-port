using Atlas.Gameplay.Kart;
using Core.Actors;
using UnityEngine;

namespace Atlas.Gameplay.Usables
{
	public abstract class ShieldUsable : Usable
	{
		protected ActorManager _actorManager;
		protected ActorGroup _kartActorGroup;

		public override void Use()
		{
			base.Use();
			SetPosition();
		}

		private void SetPosition()
		{
			if (_usableBehaviour != null && _ownerKart != null && _ownerKart.KartPhysics != null && _ownerKart.KartPhysics.Rigidbody != null)
			{
				Transform t = _usableBehaviour.transform;
				t.SetParent(_ownerKart.KartPhysics.Rigidbody.transform, false);
				t.localPosition = Vector3.zero;
				t.localRotation = Quaternion.identity;
				t.localScale = Vector3.one;
			}
		}

		public abstract void TriggerDestroy();
		public abstract void ConsumeHit(bool synchronise);
		public abstract KartTriggerEffectParameters GetKartTriggerEffectParameters();
		public virtual void TriggerScale(bool scaledown) { }

		protected ShieldUsable()
		{
		}
	}
}
