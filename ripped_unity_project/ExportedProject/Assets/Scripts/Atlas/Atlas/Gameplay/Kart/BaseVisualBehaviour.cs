using UnityEngine;

namespace Atlas.Gameplay.Kart
{
	public abstract class BaseVisualBehaviour : MonoBehaviour
	{
		public enum Side
		{
			Left = 0,
			Right = 1,
			None = 2
		}

		private static readonly int ImpactStateNameHash = Animator.StringToHash("Impact_BT");
		private static readonly int SpeedParamId = Animator.StringToHash("Speed");
		private static readonly int SteerParamId = Animator.StringToHash("Steer");
		private static readonly int SteerIntensityParamId = Animator.StringToHash("SteerIntensity");
		private static readonly int DriftParamId = Animator.StringToHash("Drift");
		private static readonly int HopParamId = Animator.StringToHash("Hop");
		private static readonly int InAirParamId = Animator.StringToHash("InAir");
		private static readonly int GlidingParamId = Animator.StringToHash("Gliding");
		private static readonly int BoostingParamId = Animator.StringToHash("Boosting");
		private static readonly int ItemPickupParamId = Animator.StringToHash("ItemPickup");
		private static readonly int ItemActivateParamID = Animator.StringToHash("ItemActivate");
		private static readonly int ItemThrowFParamId = Animator.StringToHash("ItemThrowF");
		private static readonly int ItemThrowBParamId = Animator.StringToHash("ItemThrowB");
		private static readonly int ItemHoldingParamId = Animator.StringToHash("ItemHolding");
		private static readonly int ItemPropaneParamID = Animator.StringToHash("ItemPropane");
		private static readonly int ItemTimeCheaterParamID = Animator.StringToHash("ItemTimeCheater");
		private static readonly int GetHitSmallParamId = Animator.StringToHash("GetHitSmall");
		private static readonly int GetHitBigParamId = Animator.StringToHash("GetHitBig");
		private static readonly int IncomingParamId = Animator.StringToHash("Incoming");
		private static readonly int SideSneerLeftParamId = Animator.StringToHash("SneerL");
		private static readonly int SideSneerRightParamId = Animator.StringToHash("SneerR");
		private static readonly int OvertakenParamId = Animator.StringToHash("Overtaken");
		private static readonly int OvertakingParamId = Animator.StringToHash("Taunt");
		private static readonly int ImpactParamId = Animator.StringToHash("Impact");
		private static readonly int ImpactAngleParamId = Animator.StringToHash("ImpactAngle");
		private static readonly int ImpactForceParamId = Animator.StringToHash("ImpactForce");
		private static readonly int CelebrateSmallParamId = Animator.StringToHash("CelebrateSmall");
		private static readonly int HopBoostParamId = Animator.StringToHash("RampBoost");
		private static readonly int FinishLineIndexParamId = Animator.StringToHash("FinishLineIndex");
		private static readonly int FinishLineReactionParamId = Animator.StringToHash("FinishLineReaction");
		private static readonly int AutodriveReactionParamId = Animator.StringToHash("AutodriveReaction");
		private static readonly int IdleBreakerParamId = Animator.StringToHash("IdleBreaker");
		private static readonly int LandForceParamId = Animator.StringToHash("LandForce");
		private static readonly int BoostIntensityParamId = Animator.StringToHash("BoostIntensity");

		private static readonly int[] StartLineRandomAnimations = new int[]
		{
			OvertakenParamId,
			OvertakingParamId,
			IncomingParamId,
			SideSneerLeftParamId,
			SideSneerRightParamId,
			IdleBreakerParamId
		};

		[SerializeField]
		protected Animator _animator;

		public Animator Animator => _animator;

		public virtual void Init()
		{
			if (_animator != null)
			{
				_animator.cullingMode = AnimatorCullingMode.CullUpdateTransforms;
			}
		}

		public void DeInit()
		{
		}

		public void SetSpeed(float speed)
		{
			_animator.SetFloat(SpeedParamId, speed);
		}

		public void SetSteer(float steer)
		{
			_animator.SetFloat(SteerParamId, steer);
		}

		public void SetSteerIntensity(float steerIntensity)
		{
			_animator.SetFloat(SteerIntensityParamId, steerIntensity);
		}

		public void SetDrift(float drift)
		{
			_animator.SetFloat(DriftParamId, drift);
		}

		public virtual void SetBoosting(bool boosting, DriftBoostType _)
		{
			_animator.SetBool(BoostingParamId, boosting);
		}

		public void SetInAir(bool inAir)
		{
			_animator.SetBool(InAirParamId, inAir);
		}

		public void SetLandForce(float landForce)
		{
			_animator.SetFloat(LandForceParamId, landForce);
		}

		public void SetGliding(bool gliding)
		{
			_animator.SetBool(GlidingParamId, gliding);
		}

		public void TriggerHop()
		{
			_animator.SetTrigger(HopParamId);
		}

		public void TriggerHopBoost()
		{
			_animator.SetTrigger(HopBoostParamId);
		}

		public void TriggerGetHit(bool bigHit)
		{
			if (bigHit)
			{
				TriggerGetHitBig();
			}
			else
			{
				TriggerGetHitSmall();
			}
		}

		public void TriggerGetHitSmall()
		{
			_animator.SetTrigger(GetHitSmallParamId);
		}

		public void TriggerGetHitBig()
		{
			_animator.SetTrigger(GetHitBigParamId);
		}

		public void TriggerIncoming()
		{
			_animator.SetTrigger(IncomingParamId);
		}

		public void TriggerSideSneer(Side side)
		{
			if (side == Side.Left)
			{
				_animator.SetTrigger(SideSneerLeftParamId);
			}
			else if (side == Side.Right)
			{
				_animator.SetTrigger(SideSneerRightParamId);
			}
		}

		public void TriggerOvertaken()
		{
			_animator.SetTrigger(OvertakenParamId);
		}

		public void TriggerOvertaking()
		{
			_animator.SetTrigger(OvertakingParamId);
		}

		public bool TriggerImpact(float angle, float force)
		{
			if (_animator.GetCurrentAnimatorStateInfo(2).shortNameHash == ImpactStateNameHash)
			{
				return false;
			}
			_animator.SetFloat(ImpactAngleParamId, angle);
			_animator.SetFloat(ImpactForceParamId, force);
			_animator.SetTrigger(ImpactParamId);
			return true;
		}

		public void TriggerCelebrateSmall()
		{
			_animator.SetTrigger(CelebrateSmallParamId);
		}

		public void PlayAnimatorStateOverride(int stateHash, float normalisedPlayTime = 0f)
		{
			for (int i = 0; i < _animator.layerCount; i++)
			{
				if (_animator.GetCurrentAnimatorStateInfo(i).shortNameHash == stateHash)
				{
					return;
				}
			}
			for (int i = 0; i < _animator.layerCount; i++)
			{
				if (_animator.HasState(i, stateHash))
				{
					_animator.Play(stateHash, i, normalisedPlayTime);
				}
			}
		}

		public void UnEquipItem()
		{
			_animator.SetBool(ItemHoldingParamId, false);
		}

		public void PlayItemPickup(bool ignoreItemPickup)
		{
			TriggerItemPickup(ignoreItemPickup);
		}

		public void PlayItemActivate(float timeIntoAnim)
		{
			TriggerItemActivate();
		}

		public void PlayItemThrowForward(float timeIntoAnim)
		{
			TriggerItemThrowForward();
		}

		public void PlayItemThrowBackward(float timeIntoAnim)
		{
			TriggerItemThrowBackward();
		}

		public void PlayItemPropane()
		{
			TriggerItemPropane();
		}

		public void PlayItemTimeCheater()
		{
			_animator.SetTrigger(ItemTimeCheaterParamID);
			_animator.SetBool(ItemHoldingParamId, false);
		}

		public void TriggerFinishLineReaction()
		{
			_animator.SetTrigger(FinishLineReactionParamId);
		}

		public void SetFinishLineIndexParam(int finishPosition)
		{
			_animator.SetInteger(FinishLineIndexParamId, finishPosition);
		}

		public void TriggerAutoDriveReaction()
		{
			_animator.SetTrigger(AutodriveReactionParamId);
		}

		public void TriggerStartLineRandomAnimation()
		{
			int index = Random.Range(0, StartLineRandomAnimations.Length);
			_animator.SetTrigger(StartLineRandomAnimations[index]);
		}

		public void TriggerIdleBreaker()
		{
			_animator.SetTrigger(IdleBreakerParamId);
		}

		public void SetBoostIntensity(float intensity)
		{
			_animator.SetFloat(BoostIntensityParamId, intensity);
		}

		private void TriggerItemPickup(bool ignoreItemPickupParam)
		{
			if (!ignoreItemPickupParam)
			{
				_animator.SetTrigger(ItemPickupParamId);
			}
			_animator.SetBool(ItemHoldingParamId, true);
		}

		private void TriggerItemActivate()
		{
			_animator.SetTrigger(ItemActivateParamID);
			_animator.SetBool(ItemHoldingParamId, false);
		}

		private void TriggerItemPropane()
		{
			_animator.SetTrigger(ItemPropaneParamID);
			_animator.SetBool(ItemHoldingParamId, false);
		}

		private void TriggerItemThrowForward()
		{
			_animator.SetTrigger(ItemThrowFParamId);
			_animator.SetBool(ItemHoldingParamId, false);
		}

		private void TriggerItemThrowBackward()
		{
			_animator.SetTrigger(ItemThrowBParamId);
			_animator.SetBool(ItemHoldingParamId, false);
		}
	}
}
