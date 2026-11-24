using System.Collections.Generic;
using Atlas.League;
using UnityEngine;

namespace Atlas.Gameplay.Kart
{
	internal struct PendingParam
	{
		public int Id;
		public int Value;
		public bool IsBool;
	}

	public class KartFEAnimator
	{
		private static readonly int HomeScreenStateId = Animator.StringToHash("HomeScreen");
		private static readonly int CharSelectAnimatorStateId = Animator.StringToHash("Select_Char_Reaction");
		private static readonly int KartSelectAnimatorStateId = Animator.StringToHash("Select_Kart_Reaction");
		private static readonly int CharSelectParamId = Animator.StringToHash("FE_CharSelect");
		private static readonly int KartSelectParamId = Animator.StringToHash("FE_KartSelect");
		private static readonly int PostEventStateId = Animator.StringToHash("PostEventScreen");
		private static readonly int FEGainXPParamId = Animator.StringToHash("FE_GainXP");
		private static readonly int FERankUpParamId = Animator.StringToHash("FE_RankUp");
		private static readonly int RewardScreenStateId = Animator.StringToHash("RewardScreen");
		private static readonly int FEUnlockCharacterParamId = Animator.StringToHash("FE_UnlockCharacter");
		private static readonly int FEUnlockSkinParamId = Animator.StringToHash("FE_UnlockSkin");
		private static readonly int CeremonyScreenStateId = Animator.StringToHash("CeremonyScreen");
		private static readonly int CeremonyScreenWaveStateId = Animator.StringToHash("Ceremony_Waving");
		private static readonly int FELosersParamId = Animator.StringToHash("FE_Losers");
		private static readonly int FEPodiumStartParamId = Animator.StringToHash("FE_PodiumStart");
		private static readonly int FEIndexParamId = Animator.StringToHash("FE_Index");
		private static readonly int FELobbyScreenPlayerParamId = Animator.StringToHash("FE_LobbyScreen_Player");
		private static readonly int FELobbyScreenNPCParamId = Animator.StringToHash("FE_LobbyScreen_NPC");
		private static readonly int CreditsScreenStateId = Animator.StringToHash("CreditsScreen");
		private static readonly int FEExitParamId = Animator.StringToHash("FE_Exit");

		private KartPartLoader _loader;
		private KartVisualComposite _kartVisualComposite;
		private int _pendingAnimationHash = -1;
		private int _pendingTriggerHash = -1;
		private bool _pendingAnimationShouldStartAtRandomOffset;
		private readonly List<PendingParam> _pendingParams = new List<PendingParam>(8);
		private int _currentAnimationHash = -1;
		private int _currentTriggerHash = -1;
		private readonly List<PendingParam> _currentParams = new List<PendingParam>(8);

		private bool ReadyToApplyAnim
		{
			get
			{
				if ((bool)_kartVisualComposite.CharacterVisualBehaviour && (bool)_kartVisualComposite.KartVisualsBehaviour)
				{
					return !_loader.IsAnyPartLoading();
				}
				return false;
			}
		}

		public void Init(KartVisualComposite kartVisualComposite, KartPartLoader loader)
		{
			_loader = loader;
			_kartVisualComposite = kartVisualComposite;
		}

		public void Update()
		{
			if (!ReadyToApplyAnim)
			{
				return;
			}
			if (_pendingAnimationHash != -1)
			{
				float normalisedPlayTime = _pendingAnimationShouldStartAtRandomOffset ? Random.value : 0f;
				_kartVisualComposite.CharacterVisualBehaviour.PlayAnimatorStateOverride(_pendingAnimationHash, normalisedPlayTime);
				_kartVisualComposite.KartVisualsBehaviour.PlayAnimatorStateOverride(_pendingAnimationHash, normalisedPlayTime);
				_currentAnimationHash = _pendingAnimationHash;
				_pendingAnimationHash = -1;
			}
			if (_pendingTriggerHash != -1)
			{
				_kartVisualComposite.CharacterVisualBehaviour.Animator.SetTrigger(_pendingTriggerHash);
				_kartVisualComposite.KartVisualsBehaviour.Animator.SetTrigger(_pendingTriggerHash);
				_currentTriggerHash = _pendingTriggerHash;
				_pendingTriggerHash = -1;
			}
			if (_pendingParams.Count > 0)
			{
				foreach (PendingParam param in _pendingParams)
				{
					if (param.IsBool)
					{
						bool val = param.Value > 0;
						_kartVisualComposite.KartVisualsBehaviour.Animator.SetBool(param.Id, val);
						_kartVisualComposite.CharacterVisualBehaviour.Animator.SetBool(param.Id, val);
					}
					else
					{
						_kartVisualComposite.KartVisualsBehaviour.Animator.SetInteger(param.Id, param.Value);
						_kartVisualComposite.CharacterVisualBehaviour.Animator.SetInteger(param.Id, param.Value);
					}
					_currentParams.Add(param);
				}
				_pendingParams.Clear();
			}
		}

		public void DeInit()
		{
			_kartVisualComposite = null;
		}

		private void Play(int stateHash, bool randomiseStartTime = false)
		{
			_pendingAnimationHash = stateHash;
			_pendingAnimationShouldStartAtRandomOffset = randomiseStartTime;
			_currentTriggerHash = -1;
			_currentParams.Clear();
		}

		private void SetTrigger(int triggerHash)
		{
			if (triggerHash != FEExitParamId || _pendingTriggerHash == -1)
			{
				_pendingTriggerHash = triggerHash;
			}
		}

		private void SetInt(int nameHash, int value)
		{
			_pendingParams.Add(new PendingParam
			{
				Id = nameHash,
				Value = value,
				IsBool = false
			});
		}

		private void SetBool(int nameHash, bool value)
		{
			_pendingParams.Add(new PendingParam
			{
				Id = nameHash,
				Value = value ? 1 : 0,
				IsBool = true
			});
		}

		public void ReapplyAnimationAndTriggers()
		{
			if (_pendingAnimationHash == -1)
			{
				Play(_currentAnimationHash, false);
			}
			if (_pendingTriggerHash == -1)
			{
				SetTrigger(_currentTriggerHash);
			}
			if (_pendingParams.Count == 0)
			{
				_pendingParams.AddRange(_currentParams);
				_currentParams.Clear();
			}
		}

		public void PlayHomeScreen()
		{
			Play(HomeScreenStateId, false);
		}

		public void PlayCharacterSelectScreen()
		{
			SetTrigger(CharSelectParamId);
		}

		public void PlayCharacterConfirmed()
		{
		}

		public void PlayKartSelectScreen()
		{
			SetTrigger(KartSelectParamId);
		}

		public void PlayPostEventScreen()
		{
			Play(PostEventStateId, false);
		}

		public void TriggerFEGainXP()
		{
			SetTrigger(FEGainXPParamId);
		}

		public void TriggerFERankUp()
		{
			SetTrigger(FERankUpParamId);
		}

		public void PlayRewardScreen()
		{
			Play(RewardScreenStateId, false);
		}

		public void TriggerFEUnlockCharacter(bool isSkin)
		{
			SetTrigger(isSkin ? FEUnlockSkinParamId : FEUnlockCharacterParamId);
		}

		public void PlayCeremonyScreen(bool isLoser)
		{
			Play(isLoser ? CeremonyScreenStateId : CeremonyScreenWaveStateId, !isLoser);
			SetBool(FELosersParamId, isLoser);
		}

		public void PlayCeremonyScreen(LeagueUpdate leagueUpdate)
		{
			bool isLoser = false;
			if (leagueUpdate == LeagueUpdate.Demotion)
			{
				PlayerLoserCeremonyScreen();
				isLoser = true;
			}
			else if (leagueUpdate == LeagueUpdate.Promotion)
			{
				PlayWinnerCeremonyScreen();
			}
			else
			{
				PlayerNeutralCerremonyScreen();
			}
			SetBool(FELosersParamId, isLoser);
		}

		public void TriggerFEPodiumStart(int podiumIndex)
		{
			SetInt(FEIndexParamId, podiumIndex);
			SetTrigger(FEPodiumStartParamId);
		}

		public void TriggerFELobbyScreen(bool isPlayer)
		{
			SetTrigger(isPlayer ? FELobbyScreenPlayerParamId : FELobbyScreenNPCParamId);
		}

		public void PlayCreditsScreen()
		{
			Play(CreditsScreenStateId, false);
		}

		public void ExitFEScreen()
		{
			SetTrigger(FEExitParamId);
		}

		private void PlayerLoserCeremonyScreen()
		{
			Play(CeremonyScreenStateId, false);
		}

		private void PlayWinnerCeremonyScreen()
		{
			Play(CeremonyScreenWaveStateId, true);
		}

		private void PlayerNeutralCerremonyScreen()
		{
			Play(HomeScreenStateId, false);
		}
	}
}
