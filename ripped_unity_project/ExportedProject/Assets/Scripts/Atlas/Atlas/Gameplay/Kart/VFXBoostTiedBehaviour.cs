using System;
using UnityEngine;

namespace Atlas.Gameplay.Kart
{
	[Serializable]
	public struct BoostTiedParam
	{
		public DriftBoostType DriftBoostType;
		public int EmissionBurstCycles;
		public ParticleSystem.MinMaxGradient ColorOverLifetime;
	}

	public class VFXBoostTiedBehaviour : MonoBehaviour
	{
		[SerializeField]
		private ParticleSystem _particleSystem;

		[SerializeField]
		private BoostTiedParam[] _levels;

		private DriftBoostType _boostType;

		public void Init()
		{
			_boostType = DriftBoostType.None;
		}

		public void SetBoostLevel(DriftBoostType boostType)
		{
			if ((bool)_particleSystem && _boostType != boostType)
			{
				if (boostType != DriftBoostType.None)
				{
					for (int i = 0; i < _levels.Length; i++)
					{
						BoostTiedParam param = _levels[i];
						if (param.DriftBoostType == boostType)
						{
							ParticleSystem.ColorOverLifetimeModule colorOverLifetime = _particleSystem.colorOverLifetime;
							colorOverLifetime.color = param.ColorOverLifetime;
							ParticleSystem.EmissionModule emission = _particleSystem.emission;
							if (emission.burstCount > 0)
							{
								ParticleSystem.Burst burst = emission.GetBurst(0);
								burst.cycleCount = param.EmissionBurstCycles;
								emission.SetBurst(0, burst);
							}
							break;
						}
					}
				}
				_boostType = boostType;
			}
		}
	}
}
