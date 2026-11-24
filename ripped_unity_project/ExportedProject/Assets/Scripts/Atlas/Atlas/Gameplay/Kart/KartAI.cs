using System.Collections.Generic;
using Atlas.Gameplay.Usables;
using Core.Actors;
using Core.Definitions;
using Core.GameLoop;
using Unity.Mathematics;
using Unity.Profiling;
using UnityEngine;

namespace Atlas.Gameplay.Kart
{
	public abstract class KartAI
	{
		public const int ChanceMultiplier = 100;
		public const int MaxRoll = 10000;

		protected KartAIInputData _inputData;
		protected KartAIInputData _prevInputData;
		protected GameContextBase _gameContext;
		protected KartComposite _kartComposite;
		protected float _useUsableInternalTimer;
		protected bool _performHopRaycast;
		protected float _enableBoostUsableTimer;
		protected bool _wasInHopBoostTrigger;
		protected float3 _normalizedDirToNavTarget;

		protected static readonly ProfilerMarker UpdateProfilerMarker = new ProfilerMarker("KartAI.Update()");
		protected static readonly ProfilerMarker UpdateSpeedMod = new ProfilerMarker("KartAI.UpdateSpeedModifier()");
		private static readonly ProfilerMarker UpdateUseUsableProfilerMarker = new ProfilerMarker("KartAI.UpdateUseUsable()");
		private static readonly ProfilerMarker ApplyHoppingProfilerMaker = new ProfilerMarker("KartAI.ApplyHopping()");
		private static readonly ProfilerMarker ApplyHoppingUsablesProfilerMaker = new ProfilerMarker("KartAI.ApplyHoppingUsables()");

		public KartAIInputData InputData => _inputData;

		public abstract Definition GetKartAIDefinition();

		public virtual void Init(KartComposite kartComposite, GameContextBase gameContext, bool performHopRaycastThisFrame)
		{
			_gameContext = gameContext;
			_kartComposite = kartComposite;
			_performHopRaycast = performHopRaycastThisFrame;
		}

		public virtual void PostInit()
		{
		}

		public virtual void DeInit()
		{
		}

		public abstract void Update(IUpdateParams updateParams);

		public abstract void LateUpdate(IUpdateParams updateParams);

		public virtual void OnFinishGame()
		{
		}

		public virtual void OnResetPosition()
		{
		}

		protected virtual void UpdateTimers(IUpdateParams updateParams)
		{
			float remaining = _useUsableInternalTimer - updateParams.DeltaTime;
			_useUsableInternalTimer = remaining >= 0f ? remaining : -1f;
		}

		protected void UpdateUseUsable(IUpdateParams updateParams, KartAIUsablesParameters usableParams)
		{
			UpdateUseUsableProfilerMarker.Begin();

			if (_useUsableInternalTimer > 0f)
			{
				UpdateUseUsableProfilerMarker.End();
				return;
			}

			if (!_kartComposite.UsableManager.CanStartUseLocal || _gameContext.KartManager == null)
			{
				UpdateUseUsableProfilerMarker.End();
				return;
			}

			KartPhysicsBodyState body = _kartComposite.KartPhysics.Body;
			Vector3 myPos = (Vector3)body.Position;
			UsableType usableType = _kartComposite.UsableManager.CurHeldUsable.Definition.UsableType;

			switch (usableType)
			{
				case UsableType.Ricochet:
					if (PassRoll(usableParams.RicochetUseChance))
					{
						float rangeSq = usableParams.RicochetRange * usableParams.RicochetRange;
						foreach (KartComposite otherKart in _gameContext.KartManager.Karts)
						{
							if (otherKart == _kartComposite)
							{
								continue;
							}
							Vector3 otherPos = (Vector3)otherKart.KartPhysics.Body.Position;
							if (math.distancesq((float3)myPos, (float3)otherPos) <= rangeSq)
							{
								float3 dir = math.normalizesafe((float3)(otherPos - myPos));
								if (math.dot(dir, body.Forward) > usableParams.CosRicochetHalfFOV)
								{
									TryFireUsable(usableParams);
									break;
								}
							}
						}
					}
					_useUsableInternalTimer = usableParams.TryUseRicochetInterval;
					break;

				case UsableType.ProximityHoming:
					if (PassRoll(usableParams.ProximityHomingUseChance))
					{
						float rangeSq = usableParams.ProximityHomingRange * usableParams.ProximityHomingRange;
						foreach (KartComposite otherKart in _gameContext.KartManager.Karts)
						{
							if (otherKart == _kartComposite)
							{
								continue;
							}
							Vector3 otherPos = (Vector3)otherKart.KartPhysics.Body.Position;
							if (math.distancesq((float3)myPos, (float3)otherPos) <= rangeSq)
							{
								float3 dir = math.normalizesafe((float3)(otherPos - myPos));
								if (math.dot(dir, body.Forward) > usableParams.CosProximityHomingHalfFov)
								{
									TryFireUsable(usableParams);
									break;
								}
							}
						}
					}
					_useUsableInternalTimer = usableParams.TryUseProximityHomingInterval;
					break;

				case UsableType.PlacementHoming:
					if (PassRoll(usableParams.PlacementHomingUseChance))
					{
						TryFireUsable(usableParams);
					}
					_useUsableInternalTimer = usableParams.TryUsePlacementHomingInterval;
					break;

				case UsableType.Shield:
					if (PassRoll(usableParams.ShieldUseChance))
					{
						TryFireUsable(usableParams);
					}
					_useUsableInternalTimer = usableParams.TryUseShieldInterval;
					break;

				case UsableType.Boost:
					if (math.dot(body.Forward, _normalizedDirToNavTarget) > usableParams.CosBoostHalfFov)
					{
						_enableBoostUsableTimer += updateParams.DeltaTime;
					}
					else
					{
						_enableBoostUsableTimer = 0f;
					}
					if (_enableBoostUsableTimer >= usableParams.BoostTimeWithinThresholdToEnable)
					{
						if (PassRoll(usableParams.BoostUseChance))
						{
							TryFireUsable(usableParams);
							_enableBoostUsableTimer = 0f;
						}
						_useUsableInternalTimer = usableParams.TryUseBoostInterval;
					}
					break;

				case UsableType.Turd:
					if (PassRoll(usableParams.GoldenTurdUseChance))
					{
						TryFireUsable(usableParams);
					}
					_useUsableInternalTimer = usableParams.TryUseGoldenTurdInterval;
					break;

				case UsableType.SuperShield:
					if (PassRoll(usableParams.SuperShieldUseChance))
					{
						TryFireUsable(usableParams);
					}
					_useUsableInternalTimer = usableParams.TryUseSuperShieldInterval;
					break;

				case UsableType.Satellite:
					if (PassRoll(usableParams.SatelliteUseChance))
					{
						TryFireUsable(usableParams);
					}
					_useUsableInternalTimer = usableParams.TryUseSatelliteInterval;
					break;
			}

			UpdateUseUsableProfilerMarker.End();
		}

		protected void TryFireUsable(KartAIUsablesParameters usableParams)
		{
			if (_kartComposite.UsableManager.CanStartUseLocal)
			{
				_inputData.Use = true;
			}
		}

		protected void ApplyHopping()
		{
			ApplyHoppingProfilerMaker.Begin();

			KartPhysicsBodyState body = _kartComposite.KartPhysics.Body;
			if (body.IsGrounded && !_performHopRaycast)
			{
				_performHopRaycast = true;
				float chassisY = _kartComposite.KartPhysics.Suspension.ChassisHeight + 0.32f;
				Vector3 pos = (Vector3)body.Position;
				pos.y = chassisY;
				Vector3 forward = (Vector3)body.Forward;

				if (Physics.Raycast(pos, forward, out RaycastHit hit, 4f))
				{
					ObjectTagBehaviour tag = hit.collider.GetComponent<ObjectTagBehaviour>();
					if (tag != null && tag.IsJumpable)
					{
						_inputData.Hop = true;
					}
				}
			}
			else if (body.IsGrounded)
			{
				_performHopRaycast = false;
			}

			ApplyHoppingProfilerMaker.End();
		}

		protected void TryHopBoost(float hopBoostProbability)
		{
			int hopBoostCount = _kartComposite.KartPhysics.LngForce.InHopBoostTriggerCount;
			KartPhysicsBodyState body = _kartComposite.KartPhysics.Body;
			if (body.IsGrounded && hopBoostCount > 0 && !_wasInHopBoostTrigger)
			{
				if (PassRoll(hopBoostProbability))
				{
					_inputData.Hop = true;
					_inputData.Drift = false;
				}
			}
			_wasInHopBoostTrigger = hopBoostCount > 0;
		}

		protected void ApplyHoppingUsables(KartAIUsablesParameters usableParams)
		{
			ApplyHoppingUsablesProfilerMaker.Begin();

			if (!_kartComposite.KartPhysics.HopInvuln && _gameContext != null && _kartComposite != null)
			{
				ActorManager actorManager = _gameContext.ActorManager;
				if (actorManager != null)
				{
					TryHopOverRicochet(usableParams, actorManager);
					if (!_inputData.Hop)
					{
						TryHopOverTurd(usableParams, actorManager);
					}
				}
			}

			ApplyHoppingUsablesProfilerMaker.End();
		}

		protected void TryHopOverRicochet(KartAIUsablesParameters usableParams, ActorManager actorManager)
		{
			ActorGroup group = actorManager.FindActorGroup<RicochetProjectile>();
			if (group == null)
			{
				return;
			}

			foreach (Actor actor in group.Actors)
			{
				RicochetProjectile projectile = actor as RicochetProjectile;
				if (projectile == null || !projectile.IsActive)
				{
					continue;
				}

				if (!PassRoll(usableParams.RicochetHopChance))
				{
					continue;
				}

				float3 projPos = (float3)projectile.RicochetBehaviour.transform.position;
				float3 kartPos = _kartComposite.KartPhysics.Body.Position;
				float distSq = math.distancesq(kartPos, projPos);
				if (distSq >= 24f && distSq <= 30f)
				{
					float3 toProj = projPos - kartPos;
					float3 projVel = (float3)projectile.RicochetBehaviour.Rigidbody.velocity;
					if (math.dot(toProj, projVel) < 0f)
					{
						_inputData.Hop = true;
						_inputData.Drift = false;
						break;
					}
				}
			}
		}

		protected void TryHopOverTurd(KartAIUsablesParameters usableParams, ActorManager actorManager)
		{
			ActorGroup group = actorManager.FindActorGroup<GoldenTurdProjectile>();
			if (group == null)
			{
				return;
			}

			foreach (Actor actor in group.Actors)
			{
				GoldenTurdProjectile turd = actor as GoldenTurdProjectile;
				if (turd == null || !turd.IsActive)
				{
					continue;
				}

				if (!PassRoll(usableParams.TurdHopChance))
				{
					continue;
				}

				float3 turdPos = (float3)turd.GoldenTurdProjectileBehaviour.transform.position;
				KartPhysicsBodyState body = _kartComposite.KartPhysics.Body;
				float distSq = math.distancesq(body.Position, turdPos);
				if (distSq >= 24f && distSq <= 30f)
				{
					float3 toTurd = turdPos - body.Position;
					if (math.dot(toTurd, body.Velocity) > 0f)
					{
						_inputData.Hop = true;
						_inputData.Drift = false;
						break;
					}
				}
			}
		}

		protected bool PassRoll(float chance)
		{
			return GetRoll() < (int)(chance * ChanceMultiplier);
		}

		protected int GetRoll()
		{
			return Random.Range(0, MaxRoll);
		}
	}
}
