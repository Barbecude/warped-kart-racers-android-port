using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Core.Networking
{
	public class NetworkSessionId
	{
		private readonly string _id;
		private readonly int _hash;
		public virtual string ToString() { return default; }
		public virtual bool Equals(object obj) { return default; }
		public virtual int GetHashCode() { return default; }
	}
}
