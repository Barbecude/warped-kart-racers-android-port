using System.Diagnostics;
using System.Text;
using UnityEngine.Networking;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Core.Analytics
{
	public class AnalyticsManager
	{
		public struct Event { }
		private static readonly TimeSpan AWSMinimumSecondsBetweenRequests;
		private const int EventBatchEndOverSize = 262144;
		private const int EventBatchEndOverCount = 100;
		private const int EventQueueMaxCount = 100;
		private const int EventBatchInitialCapacity = 288358;
		private const int ReusableByteBufferSize = 393216;
		private const int QueueInitialCapacity = 25;
		private const int CustomParamListPoolInitialCapacity = 25;
		private const int CustomParamListPoolGrowSize = 25;
		private const int CustomParamListInitialCapacity = 8;
		private const int EventHistoryCapacity = 10;
		private const int EventDataFormatVersion = 1;
		private const string PlayerPrefsSaveKey = "AM_SAVE";
		private string _awsAPIKey;
		private string _awsEventsURL;
		private StringBuilder _activeEventBatchStringBuilder;
		private int _customParamListsCreated;
		private DateTime _dateTimeSinceLastAWSRequest;
		private UnityWebRequestAsyncOperation _awsPostAsyncOperation;
		private int _sendingEventCount;
		private int _successSentEventBatchCount;
		private int _failedSentEventBatchCount;
		private int _totalSentPostBodySize;
		private int _totalPostBodySizeBeforeCompression;
		private bool _allowStoringEvents;
		private bool _allowSendingEvents;
		private bool _compressedPostBody;
		private bool _storeEventHistory;
		private bool _sendNextBatchOfQueuedEvents;
		private string _lastPostedEventName;
		private byte[] _reusableByteBuffer;
		private Stopwatch _timeSpentBuildingAndPostingEvents;
		public int SuccessSentEventBatchCount { get => default; }
		public int FailedSentEventBatchCount { get => default; }
		public int TotalSentPostBodySize { get => default; }
		public int TotalPostBodySizeBeforeCompression { get => default; }
		public double TotalTimeBuildingAndPostingEventsMs { get => default; }
		public bool IsSendingEventBatch { get => default; }
		public int QueuedEventCount { get => default; }
		public int PostedEventHistoryCount { get => default; }
		public bool AllowStoringEvents { get => default; set { } }
		public bool AllowSendingEvents { get => default; set { } }
		public bool CompressPostBody { get => default; set { } }
		public bool StoreEventHistory { get => default; set { } }
		public int CustomParamListsCreated { get => default; }
		public int CustomParamListPoolSize { get => default; }
		public string LastPostedEventName { get => default; }
		public void Init(string AWSEventsURL, string AWSApiKey, bool storeEventHistory) { }
		public void DeInit() { }
		public void Update() { }
		public void RequestSendNextBatchOfQueuedEvents() { }
		public void ClearData() { }
		public bool CanSendEventBatchNow() { return default; }
		public void SaveQueuedEvents() { }
		public void LoadAndClearSavedQueuedEvents() { }
		public void ClearSavedQueuedEvents() { }
		public bool TryGetQueuedOrHistoryEvent(int index, out AnalyticsManager.Event outEvent, out bool outSent) { outEvent = default; outSent = default; return default; }
		private void FillCustomParamListPool(int addCount) { }
		private void ReturnPooledObjects(AnalyticsManager.Event evt) { }
		private void StartEventBatch() { }
		private void AddEventToBatch(AnalyticsManager.Event evt, bool firstInBatch) { }
		private void EndEventBatch() { }
		private bool SendEventBatch(byte[] body, bool gzipCompressed) { return default; }
		private bool SendEventBatch(UnityWebRequest webRequest) { return default; }
		private UnityWebRequest CreatePOSTRequest(string url, byte[] body, bool gzipCompressed) { return default; }
		private void UpdatePendingBatches() { }
		private void UpdateSendingEventBatch() { }
		private void RemoveAndArchiveQueuedEvents(int oldestEventCount) { }
	}
}
