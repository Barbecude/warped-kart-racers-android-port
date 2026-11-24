using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Core.Networking
{
	public class NetworkDelegates
	{
		public Action OnHostAllFinishDataReceived;
		public Action OnEventTimeExceeded;
		public Action OnResultsFinished;
		public Action OnHostMigrationCompleted;
	}
}
