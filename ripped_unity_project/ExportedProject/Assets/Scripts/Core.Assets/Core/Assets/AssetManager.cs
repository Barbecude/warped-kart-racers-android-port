using System;
using System.Collections;
using System.Collections.Generic;
using Unity.Profiling;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.AddressableAssets.ResourceLocators;
using UnityEngine.ResourceManagement.AsyncOperations;

namespace Core.Assets
{
	public enum AssetCachingStrategy
	{
		None = 0,
		ReferenceCount = 1,
		LeastRecentlyUsed = 2
	}

	public class AssetManager
	{
		public delegate void AssetLoadSuccessHandler(AssetManagerHandle handle, UnityEngine.Object asset);
		public delegate void AssetLoadFailedHandler(AssetManagerHandle handle, string key);

		public const string DefaultBucket = "Default";

		private class LoadedEntry
		{
			public string Key;
			public string Bucket;
			public bool IsMultiple;
			public bool IsSprite;
			public int RefCount;
			public AsyncOperationHandle<UnityEngine.Object> SingleOp;
			public AsyncOperationHandle<Sprite> SpriteOp;
			public AsyncOperationHandle<IList<UnityEngine.Object>> MultipleOp;
			public AssetLoadSuccessHandler OnSuccess;
			public AssetLoadFailedHandler OnFailed;
			public bool CallbackFired;
		}

		private readonly Dictionary<AssetManagerHandle, LoadedEntry> _entries = new Dictionary<AssetManagerHandle, LoadedEntry>();
		private readonly Dictionary<string, AssetManagerHandle> _keyToHandle = new Dictionary<string, AssetManagerHandle>();
		private readonly Dictionary<AssetManagerHandle, AssetManagerHandle> _refToAssetHandle = new Dictionary<AssetManagerHandle, AssetManagerHandle>();
		private uint _nextHandleValue = 1u;
		private AsyncOperationHandle<IResourceLocator> _initialiseHandle;
		private bool _inited;
		private static readonly ProfilerMarker _updateProfilerMarker = new ProfilerMarker("AssetManager.Update");

		public bool IsInited => _inited;

		public IEnumerator Init()
		{
			if (_inited)
			{
				yield break;
			}
			_initialiseHandle = Addressables.InitializeAsync();
			yield return _initialiseHandle;
			_inited = true;
		}

		public IEnumerator DeInit()
		{
			foreach (KeyValuePair<AssetManagerHandle, LoadedEntry> kv in _entries)
			{
				ReleaseEntryOp(kv.Value);
			}
			_entries.Clear();
			_keyToHandle.Clear();
			_refToAssetHandle.Clear();
			_inited = false;
			yield break;
		}

		public void Update()
		{
			using (_updateProfilerMarker.Auto())
			{
				foreach (KeyValuePair<AssetManagerHandle, LoadedEntry> kv in _entries)
				{
					LoadedEntry e = kv.Value;
					if (e.CallbackFired)
					{
						continue;
					}
					if (IsEntryDone(e))
					{
						e.CallbackFired = true;
						if (IsEntrySucceeded(e))
						{
							UnityEngine.Object obj = GetEntryObject(e);
							e.OnSuccess?.Invoke(kv.Key, obj);
						}
						else
						{
							e.OnFailed?.Invoke(kv.Key, e.Key);
						}
					}
				}
			}
		}

		public void AddAssetBucket(string name, AssetCachingStrategy cachingStrategy, int limit = 0)
		{
		}

		public bool RemoveAssetBucket(string name)
		{
			return true;
		}

		public AssetManagerHandle RequestAsset(string key, string bucketName = "Default", AssetLoadSuccessHandler assetLoadSuccessHandler = null, AssetLoadFailedHandler assetLoadFailedHandler = null)
		{
			return RequestAsset(key, false, false, bucketName, assetLoadSuccessHandler, assetLoadFailedHandler);
		}

		public AssetManagerHandle RequestAsset(AssetReference assetRef, string bucketName = "Default", AssetLoadSuccessHandler assetLoadSuccessHandler = null, AssetLoadFailedHandler assetLoadFailedHandler = null)
		{
			if (assetRef == null || !assetRef.RuntimeKeyIsValid())
			{
				return AssetManagerHandle.Invalid;
			}
			string key = assetRef.RuntimeKey != null ? assetRef.RuntimeKey.ToString() : string.Empty;
			return RequestAsset(key, false, false, bucketName, assetLoadSuccessHandler, assetLoadFailedHandler);
		}

		public AssetManagerHandle RequestSpriteAsset(string key, string bucketName = "Default", AssetLoadSuccessHandler assetLoadSuccessHandler = null, AssetLoadFailedHandler assetLoadFailedHandler = null)
		{
			return RequestAsset(key, false, true, bucketName, assetLoadSuccessHandler, assetLoadFailedHandler);
		}

		public AssetManagerHandle RequestSpriteAsset(AssetReference assetRef, string bucketName = "Default", AssetLoadSuccessHandler assetLoadSuccessHandler = null, AssetLoadFailedHandler assetLoadFailedHandler = null)
		{
			if (assetRef == null || !assetRef.RuntimeKeyIsValid())
			{
				return AssetManagerHandle.Invalid;
			}
			string key = assetRef.RuntimeKey != null ? assetRef.RuntimeKey.ToString() : string.Empty;
			return RequestAsset(key, false, true, bucketName, assetLoadSuccessHandler, assetLoadFailedHandler);
		}

		public AssetManagerHandle RequestMultipleAssets(string label, string bucketName = "Default", AssetLoadSuccessHandler assetLoadSuccessHandler = null, AssetLoadFailedHandler assetLoadFailedHandler = null)
		{
			return RequestAsset(label, true, false, bucketName, assetLoadSuccessHandler, assetLoadFailedHandler);
		}

		public AssetManagerHandle RequestAsset(string keyOrLabel, bool multipleAssets, bool isSprite, string bucketName = "Default", AssetLoadSuccessHandler assetLoadSuccessHandler = null, AssetLoadFailedHandler assetLoadFailedHandler = null)
		{
			if (string.IsNullOrEmpty(keyOrLabel))
			{
				return AssetManagerHandle.Invalid;
			}

			string lookupKey = (isSprite ? "sprite:" : (multipleAssets ? "multi:" : "obj:")) + keyOrLabel;
			AssetManagerHandle refHandle = GetNextHandle();

			if (_keyToHandle.TryGetValue(lookupKey, out AssetManagerHandle existingHandle) && _entries.TryGetValue(existingHandle, out LoadedEntry existingEntry))
			{
				existingEntry.RefCount++;
				_refToAssetHandle[refHandle] = existingHandle;
				if (IsEntryDone(existingEntry))
				{
					if (IsEntrySucceeded(existingEntry))
					{
						assetLoadSuccessHandler?.Invoke(refHandle, GetEntryObject(existingEntry));
					}
					else
					{
						assetLoadFailedHandler?.Invoke(refHandle, keyOrLabel);
					}
				}
				return refHandle;
			}

			AssetManagerHandle assetHandle = GetNextHandle();
			LoadedEntry entry = new LoadedEntry
			{
				Key = keyOrLabel,
				Bucket = bucketName,
				IsMultiple = multipleAssets,
				IsSprite = isSprite,
				RefCount = 1,
				OnSuccess = assetLoadSuccessHandler,
				OnFailed = assetLoadFailedHandler
			};

			if (multipleAssets)
			{
				entry.MultipleOp = Addressables.LoadAssetsAsync<UnityEngine.Object>(keyOrLabel, null);
			}
			else if (isSprite)
			{
				entry.SpriteOp = Addressables.LoadAssetAsync<Sprite>(keyOrLabel);
			}
			else
			{
				entry.SingleOp = Addressables.LoadAssetAsync<UnityEngine.Object>(keyOrLabel);
			}

			_entries[assetHandle] = entry;
			_keyToHandle[lookupKey] = assetHandle;
			_refToAssetHandle[refHandle] = assetHandle;
			return refHandle;
		}

		public void Release(AssetManagerHandle referenceHandle)
		{
			if (!referenceHandle.IsValid())
			{
				return;
			}
			if (!_refToAssetHandle.TryGetValue(referenceHandle, out AssetManagerHandle assetHandle))
			{
				return;
			}
			_refToAssetHandle.Remove(referenceHandle);
			if (_entries.TryGetValue(assetHandle, out LoadedEntry entry))
			{
				entry.RefCount--;
				if (entry.RefCount <= 0)
				{
					ReleaseEntryOp(entry);
					_entries.Remove(assetHandle);
					string lookupKey = (entry.IsSprite ? "sprite:" : (entry.IsMultiple ? "multi:" : "obj:")) + entry.Key;
					_keyToHandle.Remove(lookupKey);
				}
			}
		}

		public void Release(List<AssetManagerHandle> referenceHandles)
		{
			if (referenceHandles == null)
			{
				return;
			}
			for (int i = 0; i < referenceHandles.Count; i++)
			{
				Release(referenceHandles[i]);
			}
		}

		public int PurgeUnreferencedAssets(string bucketName)
		{
			return 0;
		}

		public int PurgeAllAssets(string bucketName)
		{
			return 0;
		}

		public bool TryGetLoadedAsset(AssetManagerHandle handle, out UnityEngine.Object outObject)
		{
			outObject = null;
			if (!handle.IsValid() || !_refToAssetHandle.TryGetValue(handle, out AssetManagerHandle assetHandle))
			{
				return false;
			}
			if (!_entries.TryGetValue(assetHandle, out LoadedEntry entry) || !IsEntrySucceeded(entry))
			{
				return false;
			}
			outObject = GetEntryObject(entry);
			return outObject != null;
		}

		public bool TryGetLoadedAsset<TAsset>(AssetManagerHandle handle, out TAsset outObject) where TAsset : UnityEngine.Object
		{
			outObject = null;
			if (TryGetLoadedAsset(handle, out UnityEngine.Object obj))
			{
				outObject = obj as TAsset;
				return outObject != null;
			}
			return false;
		}

		public TAsset GetLoadedAsset<TAsset>(AssetManagerHandle handle) where TAsset : UnityEngine.Object
		{
			TryGetLoadedAsset<TAsset>(handle, out TAsset result);
			return result;
		}

		public bool TryGetLoadedMultipleAssets(AssetManagerHandle handle, out IList<UnityEngine.Object> outObjects)
		{
			outObjects = null;
			if (!handle.IsValid() || !_refToAssetHandle.TryGetValue(handle, out AssetManagerHandle assetHandle))
			{
				return false;
			}
			if (!_entries.TryGetValue(assetHandle, out LoadedEntry entry) || !entry.IsMultiple || !entry.MultipleOp.IsValid() || entry.MultipleOp.Status != AsyncOperationStatus.Succeeded)
			{
				return false;
			}
			outObjects = entry.MultipleOp.Result;
			return outObjects != null;
		}

		public IList<UnityEngine.Object> GetLoadedMultipleAssets(AssetManagerHandle handle)
		{
			TryGetLoadedMultipleAssets(handle, out IList<UnityEngine.Object> list);
			return list;
		}

		public T[] GetLoadedMultipleAssets<T>(AssetManagerHandle handle) where T : UnityEngine.Object
		{
			if (!TryGetLoadedMultipleAssets(handle, out IList<UnityEngine.Object> list) || list == null)
			{
				return Array.Empty<T>();
			}
			List<T> result = new List<T>(list.Count);
			for (int i = 0; i < list.Count; i++)
			{
				if (list[i] is T t)
				{
					result.Add(t);
				}
			}
			return result.ToArray();
		}

		public bool HasAssetFinishedLoading(AssetManagerHandle handle)
		{
			if (!handle.IsValid() || !_refToAssetHandle.TryGetValue(handle, out AssetManagerHandle assetHandle))
			{
				return true;
			}
			if (!_entries.TryGetValue(assetHandle, out LoadedEntry entry))
			{
				return true;
			}
			return IsEntryDone(entry);
		}

		public IEnumerator WaitForAllAssetsToLoad()
		{
			while (AreAssetsLoading())
			{
				yield return null;
			}
		}

		public IEnumerator WaitForAllAssetsToLoad(string bucketName)
		{
			while (AreAssetsLoading(bucketName))
			{
				yield return null;
			}
		}

		public IEnumerator WaitForAsset(AssetManagerHandle handle)
		{
			while (!HasAssetFinishedLoading(handle))
			{
				yield return null;
			}
		}

		public IEnumerator WaitForAssets(List<AssetManagerHandle> handles)
		{
			if (handles == null)
			{
				yield break;
			}
			for (int i = 0; i < handles.Count; i++)
			{
				while (!HasAssetFinishedLoading(handles[i]))
				{
					yield return null;
				}
			}
		}

		public int CancelAllLoadingAssets()
		{
			return 0;
		}

		public bool AreAssetsLoading()
		{
			foreach (KeyValuePair<AssetManagerHandle, LoadedEntry> kv in _entries)
			{
				if (!IsEntryDone(kv.Value))
				{
					return true;
				}
			}
			return false;
		}

		public bool AreAssetsLoading(string bucketName)
		{
			foreach (KeyValuePair<AssetManagerHandle, LoadedEntry> kv in _entries)
			{
				if (kv.Value.Bucket == bucketName && !IsEntryDone(kv.Value))
				{
					return true;
				}
			}
			return false;
		}

		private AssetManagerHandle GetNextHandle()
		{
			uint val = _nextHandleValue++;
			if (_nextHandleValue == 0u)
			{
				_nextHandleValue = 1u;
			}
			return new AssetManagerHandle(val);
		}

		private static bool IsEntryDone(LoadedEntry entry)
		{
			if (entry.IsMultiple) return !entry.MultipleOp.IsValid() || entry.MultipleOp.IsDone;
			if (entry.IsSprite) return !entry.SpriteOp.IsValid() || entry.SpriteOp.IsDone;
			return !entry.SingleOp.IsValid() || entry.SingleOp.IsDone;
		}

		private static bool IsEntrySucceeded(LoadedEntry entry)
		{
			if (entry.IsMultiple) return entry.MultipleOp.IsValid() && entry.MultipleOp.Status == AsyncOperationStatus.Succeeded;
			if (entry.IsSprite) return entry.SpriteOp.IsValid() && entry.SpriteOp.Status == AsyncOperationStatus.Succeeded;
			return entry.SingleOp.IsValid() && entry.SingleOp.Status == AsyncOperationStatus.Succeeded;
		}

		private static UnityEngine.Object GetEntryObject(LoadedEntry entry)
		{
			if (entry.IsSprite) return entry.SpriteOp.IsValid() ? entry.SpriteOp.Result : null;
			if (!entry.IsMultiple) return entry.SingleOp.IsValid() ? entry.SingleOp.Result : null;
			return null;
		}

		private static void ReleaseEntryOp(LoadedEntry entry)
		{
			if (entry.IsMultiple && entry.MultipleOp.IsValid()) Addressables.Release(entry.MultipleOp);
			else if (entry.IsSprite && entry.SpriteOp.IsValid()) Addressables.Release(entry.SpriteOp);
			else if (entry.SingleOp.IsValid()) Addressables.Release(entry.SingleOp);
		}
	}
}
