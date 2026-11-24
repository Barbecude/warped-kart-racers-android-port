using System;
using Atlas.Gameplay.Kart;
using UnityEngine;

namespace Atlas.Gameplay
{
	public class KickUpVFXBehaviour : MonoBehaviour
	{
		[Serializable]
		public struct KickUp
		{
			public AestheticSurfaceType SurfaceType;
			public ParticleSystem ParticleSystem;
			public ParticleSystem ChildParticleSystem1;
			public ParticleSystem ChildParticleSystem2;
			public bool OverrideColours;
			public ParticleSystem.MinMaxGradient Colour;
			public ParticleSystem.MinMaxGradient ChildColour1;
			public ParticleSystem.MinMaxGradient ChildColour2;
		}

		[SerializeField]
		private KickUp[] _kickUps;

		public KickUp[] KickUps => _kickUps;

		public int GetKickUpIndex(AestheticSurfaceType surfaceType)
		{
			if (_kickUps != null)
			{
				for (int i = 0; i < _kickUps.Length; i++)
				{
					if (_kickUps[i].SurfaceType == surfaceType)
					{
						return i;
					}
				}
			}
			return -1;
		}
	}
}
