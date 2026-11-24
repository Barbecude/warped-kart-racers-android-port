using System;
using Atlas.Gameplay.Usables;
using Atlas.Stats;
using UnityEngine;

namespace Atlas.Definitions
{
	public abstract class UsableDefinition : Definition
	{
		public enum UseType
		{
			ThrowForwards = 0,
			ThrowBackwards = 1,
			Activate = 2,
			Propane = 3,
			TimeCheater = 4
		}

		[Serializable]
		public struct GeneralUsableData
		{
			[SerializeField] private int _numberOfUses;
			[SerializeField] private float _lifeTime;
			[SerializeField] private int _equippingTime;
			[SerializeField] private int _activatingTime;
			[SerializeField] private int _reequipTime;
			[SerializeField] private string _onHitSplatId;
			[SerializeField] private string _inHandVisualsID;
			[SerializeField] private bool _keepInHandTransformValuesOnUse;
			[SerializeField] private bool _ignoreItemPickupAnimOnReequip;

			public int NumberOfUses => _numberOfUses;
			public float LifeTime => _lifeTime;
			public int EquippingTime => _equippingTime;
			public int ActivatingTime => _activatingTime;
			public int ReequipTime => _reequipTime;
			public string OnHitSplatId => _onHitSplatId;
			public string InHandVisualsID => _inHandVisualsID;
			public bool KeepInHandTransformValuesOnUse => _keepInHandTransformValuesOnUse;
			public bool IgnoreItemPickupAnimOnReequip => _ignoreItemPickupAnimOnReequip;
		}

		[SerializeField] private GeneralUsableData _generalData;
		[SerializeField] private Stat _hitOpponentWithStat;
		[SerializeField] private Stat _wasHitByStat;
		[SerializeField] private Stat _usedStat;

		public GeneralUsableData GeneralData => _generalData;
		public Stat HitOpponentWithStat => _hitOpponentWithStat;
		public Stat WasHitByStat => _wasHitByStat;
		public Stat UsedStat => _usedStat;
		public abstract UsableType UsableType { get; }
		public abstract UseType PrimaryUseType();
	}
}