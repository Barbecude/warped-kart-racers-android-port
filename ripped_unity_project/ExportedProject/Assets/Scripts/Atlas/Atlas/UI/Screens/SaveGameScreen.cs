using System;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using Atlas.Audio;
using Atlas.Contexts;
using Atlas.Definitions;
using Atlas.Gameplay;
using Atlas.Gameplay.Kart;
using Atlas.Gameplay.Pickups;
using Atlas.Gameplay.Player;
using Atlas.Gameplay.Usables;
using Atlas.Input;
using Atlas.League;
using Atlas.Lighting;
using Atlas.Networking;
using Atlas.Rendering;
using Atlas.Save;
using Atlas.Settings;
using Atlas.Stats;
using Atlas.UI;
using Core.Actors;
using Core.Application;
using Core.Assets;
using Core.Audio;
using Core.Cameras;
using Core.Containers;
using Core.Contexts;
using Core.Definitions;
using Core.Input;
using Core.Localisation;
using Core.Networking;
using Core.Scenes;
using Core.Services;
using Core.Settings;
using Unity.Collections;
using Unity.Jobs;
using Unity.Mathematics;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.Events;
using UnityEngine.UI;
using Object = UnityEngine.Object;
using Network = Atlas.Networking.Network;
using NetworkPlayer = Core.Networking.NetworkPlayer;

namespace Atlas.UI.Screens
{
	public class SaveGameScreen : AtlasScreen<SaveGameScreenBehaviour, SaveGameScreen.TransitionData>
	{
		private SaveManager _saveManager;
		private AtlasDefinitions _atlasDefinitions;
		private CoroutineRunner _coroutineRunner;
		private Coroutine _coroutine;
		private ServicesManager _servicesManager;
		private LeagueManager _leagueManager;
		private GameObject _selectedObject;
		protected virtual void OnBeforeEnter() { }
		protected virtual void OnBeforeExit() { }
		protected virtual bool CanProgressToNextScreen() { return default; }
		private uint NumValidSlots() { return default; }
		private void SetSlotData(uint slot) { }
		private void RefreshSlots() { }
		private void OnControllerDeletePressed() { }
		private int FindCurrentlySelectedSaveSlotIndex() { return default; }
		private void OnDeleteButtonPressed(uint slot) { }
		private void ConfirmDeleteUnusedPrompt(uint slot) { }
		private void ConfirmDeleteCurrentPrompt(uint slot) { }
		private void ConfirmDeleteLastPrompt(uint slot) { }
		private IEnumerator DeleteUnusedSlot(uint slot) { return default; }
		private IEnumerator DeleteLastSlot(uint slot) { return default; }
		private IEnumerator DeleteCurrentSlot(uint slot) { return default; }
		private void OnUnUsedSlotSelected(uint slot) { }
		private void OnUsedSlotSelected(uint slot) { }
		private IEnumerator OnLoadSlotSelected(uint slot) { return default; }
		private IEnumerator OnStartNewSlotSelected(uint slot) { return default; }
		private IEnumerator EndTask(uint slot) { return default; }
		private bool IsBlockingSaveTaskPending() { return default; }
		private bool CanStartNewTask() { return default; }
		private void OnLanguageChanged(string IETFLanguageTag) { }
	}
}
