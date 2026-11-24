using Atlas.Contexts;
using Atlas.Definitions;
using Atlas.Gameplay.Kart;
using Core.Application;
using UnityEngine;

namespace Atlas.Audio
{
	public class KartAudio
	{
		public enum EngineType
		{
			GENERIC = 0,
			MUSCLE = 1,
			TRACTOR = 2,
			SPORTS = 3,
			DIESEL = 4,
			ELECTRIC = 5
		}

		public EngineType Engine { get; set; }

		public void Init(KartComposite kartComposite, GameContextBase gameContext) { }
		public void DeInit() { }
		public void StartEngine(EngineType type) { Engine = type; }
		public void Update(IUpdateParams updateParams) { }
		public void LateUpdate(IUpdateParams updateParams) { }
		public void OnUsableHit() { }
		public void OnHitOtherKartWithUsable(UsableDefinition usableDefinition) { }
		public void EnterPortal(Transform portalTransform) { }
		public void ExitPortal(Transform portalTransform) { }
		public void PlayVoiceLine(string line) { }
		public void OnKartCollision(KartPhysicsCollisionInfo info) { }
	}
}

