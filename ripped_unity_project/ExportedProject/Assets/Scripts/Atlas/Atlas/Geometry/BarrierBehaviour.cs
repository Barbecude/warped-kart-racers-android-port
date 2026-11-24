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

namespace Atlas.Geometry
{
	public class BarrierBehaviour : TrackEditorUpdatableBehaviour
	{
		private const float _tolerance = 0.0001;
		[SerializeField] private Mesh[] _startMeshes;
		[SerializeField] private Mesh[] _midMeshes;
		[SerializeField] private Mesh[] _endMeshes;
		[SerializeField] private Mesh[] _postMeshes;
		[SerializeField] private BarrierBehaviour.FeatureData _featureData;
		[SerializeField] private int _midCount;
		[SerializeField] private float _heightOffset;
		[SerializeField] private float _startOffset;
		[SerializeField] private bool _mirror;
		[SerializeField] private bool _joinSections;
		[SerializeField] private bool _mergeVerts;
		[SerializeField] private float _gapDistance;
		[SerializeField] private bool _randomlySelectFromMidMeshes;
		[SerializeField] private bool _randomlySelectFromPostMeshes;
		[SerializeField] private int _postEvery;
		[SerializeField] private bool _alwaysAddPostToEnd;
		[SerializeField] private bool _generateSimplifiedJoinedCollisionMesh;
		[SerializeField] private float _simplifiedJoinedCollisionMeshLeftOffset;
		[SerializeField] private float _simplifiedJoinedCollisionMeshRightOffset;
		[SerializeField] private float _simplifiedJoinedCollisionMeshHeight;
		private bool _generateLightmapUVs;
		[SerializeField] private int _randomSeed;
		protected virtual void OnCalculate() { }
		private BarrierBehaviour.MeshData GetNextMeshData(BarrierBehaviour.BarrierSectionMeshes sectionMeshes) { return default; }
		protected BarrierBehaviour.MeshData CreateMeshData(Mesh mesh, bool shiftVertsToZeroStart) { return default; }
		private BarrierBehaviour.BarrierSectionMeshes CreateMeshSection(Mesh[] meshes, bool shiftVertsToZeroStart, bool randomlySelect) { return default; }
		protected virtual void OnInspectorValuesChanged(int revision) { }
		private void OnDrawGizmos() { }
	}
}
