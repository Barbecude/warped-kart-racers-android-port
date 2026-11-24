using System;
using Atlas.Definitions;
using Core.Application;
using Core.Assets;
using Core.Definitions;
using UnityEngine;
using UnityEngine.AddressableAssets;

namespace Atlas.Gameplay.Kart
{
	public enum KartPart
	{
		Kart = 0,
		Character = 1,
		Glider = 2,
		FrontWheel = 3,
		RearWheel = 4,
		Antenna = 5,
		Boost = 6,
		MAX = 7
	}

	public class KartPartLoader
	{
		public delegate void OnPartLoadedDelegate(DefinitionID definitionId, GameObject loadedPrefab, KartPart part, KartComposite kart);

		private const int MaxParts = 7;

		private KartComposite _kartComposite;
		private KartVisualComposite _kartVisualComposite;
		private AssetManager _assetManager;
		private GameDefinitions _definitions;
		private DefinitionID[] _lastRequestedPart = new DefinitionID[MaxParts];
		private AssetManagerHandle[] _loadingParts = new AssetManagerHandle[MaxParts];
		private AssetManagerHandle[] _loadedParts = new AssetManagerHandle[MaxParts];
		private bool inited;

		public event OnPartLoadedDelegate PartLoaded;

		public KartComposite KartComposite => _kartComposite;

		public void Init(KartComposite kartComposite, AssetManager assetManager, GameDefinitions definitions)
		{
			if (inited)
			{
				DeInit();
			}
			_kartComposite = kartComposite;
			_kartVisualComposite = kartComposite.KartVisualComposite;
			_assetManager = assetManager;
			_definitions = definitions;
			for (int i = 0; i < MaxParts; i++)
			{
				_loadingParts[i] = AssetManagerHandle.Invalid;
				_loadedParts[i] = AssetManagerHandle.Invalid;
				_lastRequestedPart[i] = DefinitionID.Invalid;
			}
			inited = true;
		}

		public void DeInit()
		{
			if (!inited)
			{
				return;
			}
			for (int i = 0; i < MaxParts; i++)
			{
				if (_loadingParts[i].IsValid())
				{
					_assetManager.Release(_loadingParts[i]);
					_loadingParts[i] = AssetManagerHandle.Invalid;
				}
				if (_loadedParts[i].IsValid())
				{
					_assetManager.Release(_loadedParts[i]);
					_loadedParts[i] = AssetManagerHandle.Invalid;
				}
			}
			ResetKart();
			inited = false;
		}

		public void Update(IUpdateParams updateParams)
		{
			if (!inited)
			{
				return;
			}
			for (int i = 0; i < MaxParts; i++)
			{
				if (_loadingParts[i].IsValid() && _assetManager.TryGetLoadedAsset<GameObject>(_loadingParts[i], out GameObject loadedAsset))
				{
					ApplyLoadedPart(loadedAsset, (KartPart)i);
					if (_loadedParts[i].IsValid())
					{
						_assetManager.Release(_loadedParts[i]);
					}
					_loadedParts[i] = _loadingParts[i];
					_loadingParts[i] = AssetManagerHandle.Invalid;
				}
			}
		}

		public bool IsAnyPartLoading()
		{
			for (int i = 0; i < MaxParts; i++)
			{
				if (_loadingParts[i].IsValid())
				{
					return true;
				}
			}
			return false;
		}

		public bool RequestLoadKart(DefinitionID kartID)
		{
			return RequestLoadGenericPart<KartDefinition>(kartID, KartPart.Kart);
		}

		public bool RequestLoadCharacter(DefinitionID characterID)
		{
			return RequestLoadGenericPart<CharacterDefinition>(characterID, KartPart.Character);
		}

		public bool RequestLoadGlider(DefinitionID gliderID)
		{
			return RequestLoadGenericPart<GliderDefinition>(gliderID, KartPart.Glider);
		}

		public bool RequestLoadWheels(DefinitionID wheelsID)
		{
			return RequestLoadWheelParts(wheelsID);
		}

		public bool RequestLoadAntenna(DefinitionID antennaID)
		{
			return RequestLoadGenericPart<AntennaDefinition>(antennaID, KartPart.Antenna);
		}

		public bool RequestLoadBoost(DefinitionID boostID)
		{
			return RequestLoadGenericPart<BoostDefinition>(boostID, KartPart.Boost);
		}

		private bool RequestLoadGenericPart<TDefinition>(DefinitionID definitionID, KartPart part) where TDefinition : AssetDefinition
		{
			TDefinition definition = _definitions.GetDefinition<TDefinition>(definitionID);
			return RequestLoadPartIntoSlot(definitionID, definition.AssetRef, part);
		}

		private bool RequestLoadWheelParts(DefinitionID wheelsID)
		{
			WheelsDefinition definition = _definitions.GetDefinition<WheelsDefinition>(wheelsID);
			bool front = RequestLoadPartIntoSlot(wheelsID, definition.AssetRef, KartPart.FrontWheel);
			bool rear = RequestLoadPartIntoSlot(wheelsID, definition.RearWheelAssetRef, KartPart.RearWheel);
			return front | rear;
		}

		private bool RequestLoadPartIntoSlot(DefinitionID definitionId, AssetReference assetReference, KartPart part)
		{
			if (part == KartPart.Kart)
			{
				_lastRequestedPart[(int)KartPart.Boost] = DefinitionID.Invalid;
			}
			if (_lastRequestedPart[(int)part] == definitionId)
			{
				return false;
			}
			if (_loadingParts[(int)part].IsValid())
			{
				_assetManager.Release(_loadingParts[(int)part]);
			}
			_lastRequestedPart[(int)part] = definitionId;
			_loadingParts[(int)part] = _assetManager.RequestAsset(assetReference, GetBucketNameForPart(part));
			return true;
		}

		private static string GetBucketNameForPart(KartPart part)
		{
			switch (part)
			{
				case KartPart.Kart:
					return "Karts";
				case KartPart.Character:
					return "Characters";
				case KartPart.Glider:
					return "Gliders";
				case KartPart.FrontWheel:
				case KartPart.RearWheel:
					return "Wheels";
				case KartPart.Antenna:
					return "Antennas";
				case KartPart.Boost:
					return "Boosts";
				default:
					return "Default";
			}
		}

		private void ApplyLoadedPart(GameObject loadedPart, KartPart part)
		{
			switch (part)
			{
				case KartPart.Kart:
					_kartVisualComposite.SetKart(loadedPart);
					_kartComposite.KartVisualAnimation.SetKartVisualBehaviour(_kartVisualComposite.KartVisualsBehaviour);
					break;
				case KartPart.Character:
					_kartVisualComposite.SetCharacter(loadedPart);
					_kartComposite.KartVisualAnimation.SetCharacterVisualBehaviour(_kartVisualComposite.CharacterVisualBehaviour);
					break;
				case KartPart.Glider:
					_kartVisualComposite.SetGlider(loadedPart);
					break;
				case KartPart.FrontWheel:
					_kartVisualComposite.SetFrontWheels(loadedPart);
					break;
				case KartPart.RearWheel:
					_kartVisualComposite.SetRearWheels(loadedPart);
					break;
				case KartPart.Antenna:
					_kartVisualComposite.SetAntenna(loadedPart);
					if (_kartVisualComposite.AntennaVisual && _kartVisualComposite.AntennaVisual.TryGetComponent<AntennaVisualBehaviour>(out AntennaVisualBehaviour antennaBehaviour) && antennaBehaviour.TapSphereCollider != null)
					{
						antennaBehaviour.TapSphereCollider.enabled = true;
					}
					break;
				case KartPart.Boost:
					_kartVisualComposite.SetBoost(loadedPart);
					break;
			}

			PartLoaded?.Invoke(_lastRequestedPart[(int)part], loadedPart, part, _kartComposite);
		}

		public void ResetKart()
		{
			_kartVisualComposite.SetAntenna(null);
			_kartVisualComposite.SetGlider(null);
			_kartVisualComposite.SetFrontWheels(null);
			_kartVisualComposite.SetRearWheels(null);
			_kartVisualComposite.SetCharacter(null);
			_kartVisualComposite.SetKart(null);
			_kartVisualComposite.SetBoost(null);
			for (int i = 0; i < MaxParts; i++)
			{
				_lastRequestedPart[i] = DefinitionID.Invalid;
			}
		}
	}
}
