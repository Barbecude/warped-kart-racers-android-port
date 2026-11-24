using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using Atlas.Analytics;
using Atlas.Definitions;
using Atlas.FrontEnd;
using Atlas.Stats;
using Atlas.UI;
using Core.Localisation;
using Core.Services;
using UnityEngine;

namespace Atlas.Save
{
	public class SaveManager
	{
		public const int SAVE_SLOTS = 3;
		public const float SCHEDULED_SAVE_TIME_SECS = 5f;
		private const int SaveBufferSize = 51200;

		private bool _readWriteGuard;
		private float _saveScheduledTime;
		private AtlasStats _atlasStats;
		private UnlockManager _unlockManager;
		private ServicesManager _servicesManager;
		private AtlasDefinitions _atlasDefinitions;
		private FTUEManager _FTUEManager;
		private AchievementManager _achievementManager;
		private LocalisationManager _localisationManager;
		private AtlasAnalyticsManager _analyticsManager;
		private MessageBoxManager _messageBoxManager;

		private SaveData[] _saveData = new SaveData[SAVE_SLOTS];
		private uint _currentSaveSlotIndex;
		private bool _saveDirty;
		private bool _inited;

		public bool IsReadingWriting => _readWriteGuard;

		public SaveData SaveData => SlotSaveData(_currentSaveSlotIndex);

		public uint CurrentSlotIndex => _currentSaveSlotIndex;

		public bool IsSaveDirty => _saveDirty;

		public bool IsInited => _inited;

		public void Init(ServicesManager servicesManager, AtlasDefinitions atlasDefinitions)
		{
			Init(null, servicesManager, atlasDefinitions, null, null, null, null, null, null);
		}

		public void Init(
			AtlasStats atlasStats,
			ServicesManager servicesManager,
			AtlasDefinitions atlasDefinitions,
			UnlockManager unlockManager,
			FTUEManager FTUEManager,
			AchievementManager achievementManager,
			LocalisationManager localisationManager,
			AtlasAnalyticsManager analyticsManager,
			MessageBoxManager messageBoxManager)
		{
			_atlasStats = atlasStats;
			_servicesManager = servicesManager;
			_atlasDefinitions = atlasDefinitions;
			_unlockManager = unlockManager;
			_FTUEManager = FTUEManager;
			_achievementManager = achievementManager;
			_localisationManager = localisationManager;
			_analyticsManager = analyticsManager;
			_messageBoxManager = messageBoxManager;

			for (uint i = 0; i < SAVE_SLOTS; i++)
			{
				if (_saveData[i] == null)
				{
					_saveData[i] = new SaveData();
				}
			}

			_inited = true;
		}

		public void DeInit()
		{
			StartSaveIfDirty();
			_inited = false;
		}

		public void Update()
		{
			if (!_inited)
			{
				return;
			}

			if (_saveScheduledTime > 0f)
			{
				_saveScheduledTime -= Time.unscaledDeltaTime;
				if (_saveScheduledTime <= 0f)
				{
					_saveScheduledTime = 0f;
					StartSaveIfDirty();
				}
			}
		}

		public bool StartSave()
		{
			return StartSave(_currentSaveSlotIndex);
		}

		public void ScheduleSave()
		{
			_saveDirty = true;
			if (_saveScheduledTime <= 0f)
			{
				_saveScheduledTime = SCHEDULED_SAVE_TIME_SECS;
			}
		}

		public bool StartSaveIfDirty()
		{
			if (!_saveDirty)
			{
				return false;
			}
			return StartSave(_currentSaveSlotIndex);
		}

		public IEnumerator FlushScheduledSaveIfAnyAndWait()
		{
			if (_saveDirty)
			{
				StartSave(_currentSaveSlotIndex);
			}
			while (_readWriteGuard)
			{
				yield return null;
			}
		}

		public void MarkSaveAsDirty()
		{
			_saveDirty = true;
		}

		public IEnumerator Load(uint saveSlotIndex)
		{
			if (saveSlotIndex >= SAVE_SLOTS)
			{
				yield break;
			}

			_readWriteGuard = true;
			string path = ServicesManager.GetOfflineSavePath(saveSlotIndex);
			if (File.Exists(path))
			{
				try
				{
					string json = File.ReadAllText(path);
					SaveData loaded = JsonUtility.FromJson<SaveData>(json);
					_saveData[saveSlotIndex] = loaded ?? new SaveData();
				}
				catch (Exception)
				{
					_saveData[saveSlotIndex] = new SaveData();
				}
			}
			else
			{
				_saveData[saveSlotIndex] = new SaveData();
			}
			_readWriteGuard = false;
			yield break;
		}

		public IEnumerator LoadAll()
		{
			for (uint i = 0; i < SAVE_SLOTS; i++)
			{
				yield return Load(i);
			}
		}

		public IEnumerator Delete(uint saveSlotIndex)
		{
			if (saveSlotIndex >= SAVE_SLOTS)
			{
				yield break;
			}

			string path = ServicesManager.GetOfflineSavePath(saveSlotIndex);
			if (File.Exists(path))
			{
				File.Delete(path);
			}
			ResetSave(saveSlotIndex);
			yield break;
		}

		public IEnumerator ChangeSaveSlot(uint saveSlotIndex)
		{
			if (saveSlotIndex >= SAVE_SLOTS)
			{
				yield break;
			}

			yield return FlushScheduledSaveIfAnyAndWait();
			_currentSaveSlotIndex = saveSlotIndex;
			yield return Load(_currentSaveSlotIndex);
		}

		public SaveData SlotSaveData(uint slotIndex)
		{
			if (slotIndex >= SAVE_SLOTS)
			{
				slotIndex = 0;
			}
			if (_saveData[slotIndex] == null)
			{
				_saveData[slotIndex] = new SaveData();
			}
			return _saveData[slotIndex];
		}

		private void ResetSave(uint slot)
		{
			if (slot < SAVE_SLOTS)
			{
				_saveData[slot] = new SaveData();
			}
		}

		private bool StartSave(uint saveSlotIndex)
		{
			if (_readWriteGuard || saveSlotIndex >= SAVE_SLOTS)
			{
				return false;
			}

			_readWriteGuard = true;
			try
			{
				SaveData data = SlotSaveData(saveSlotIndex);
				data.SaveDateTime = DateTime.UtcNow;
				string path = ServicesManager.GetOfflineSavePath(saveSlotIndex);
				string dir = Path.GetDirectoryName(path);
				if (!string.IsNullOrEmpty(dir))
				{
					Directory.CreateDirectory(dir);
				}
				File.WriteAllText(path, JsonUtility.ToJson(data, true));
				_saveDirty = false;
			}
			finally
			{
				_readWriteGuard = false;
			}
			return true;
		}
	}
}
