using Core.Application;
using Unity.Profiling;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Core.Actors
{
	public class ActorGroup
	{
		private Type _actorType;
		private readonly ProfilerMarker EarlyUpdateProfilerMarker;
		private readonly ProfilerMarker UpdateProfilerMarker;
		private readonly ProfilerMarker LateUpdateProfilerMarker;
		private readonly ProfilerMarker FixedUpdateProfilerMarker;
		public Type ActorType { get => default; }
		public List<IActor> Actors { get => default; }
		public void EarlyUpdate(IUpdateParams updateParams) { }
		public void Update(IUpdateParams updateParams) { }
		public void LateUpdate(IUpdateParams updateParams) { }
		public void PreFixedUpdate(IUpdateParams updateParams) { }
		public void FixedUpdate(IUpdateParams updateParams) { }
		public void PostFixedUpdate(IUpdateParams updateParams) { }
		public void Add(IActor toAdd) { }
		public void MarkForRemove(IActor toRemove) { }
		public void RemoveAll() { }
		private void UpdateMarkForRemove() { }
	}
}
