using Core.Assets;
using System;
using System.Collections.Generic;
using Unity.Collections;
using Unity.Jobs;
using UnityEngine;

namespace Core.Input
{
	[Serializable]
	public struct InputGlyphMapping
	{
		[SerializeField] private string _inputMapping;
		[SerializeField] private RemappableControllerButton _buttonForRemappingPurposes;
		[SerializeField] private AssetManagerAtlasedSpriteRef _glyphSprite;
		public string InputMapping { get => default; }
		public RemappableControllerButton ButtonForRemappingPurposes { get => default; }
		public AssetManagerAtlasedSpriteRef GlyphSprite { get => default; }
	}
}
