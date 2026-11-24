// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Definitions.AssetDefinition

// ============================================================
// RVA: 0x1449380 | Atlas.Definitions.AssetDefinition..ctor
// ============================================================

void Atlas_Definitions_AssetDefinition___ctor(long param_1)

{
  if ((bRam0000000003eb50a9 & 1) == 0) {
    func_0x00f78a20(0x3d21270,0);
    bRam0000000003eb50a9 = 1;
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)(param_1 + 0x18) = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
  if ((bRam0000000003ec0cc7 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ec0cc7 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*UnityEngine.Object$$.ctor*/ func_0x032343d4(param_1,0);
  if (pcRam0000000003ec0cc8 == (code *)0x0) {
    pcRam0000000003ec0cc8 =
         (code *)func_0x00f789d4(
                                "UnityEngine.ScriptableObject::CreateScriptableObject(UnityEngine.ScriptableObject)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x0324fa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec0cc8)(param_1);
  return;
}



// ============================================================
// RVA: 0x14552dc | Atlas.Definitions.AssetDefinition.get_AssetRef
// ============================================================

undefined8 Atlas_Definitions_AssetDefinition__get_AssetRef(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



// ============================================================
// RVA: 0x14552e4 | Atlas.Definitions.AssetDefinition.get_ThumbnailAtlasedSpriteRef
// ============================================================

undefined8 Atlas_Definitions_AssetDefinition__get_ThumbnailAtlasedSpriteRef(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



// ============================================================
// RVA: 0x14552ec | Atlas.Definitions.AssetDefinition.get_UnlockedByDefault
// ============================================================

undefined1 Atlas_Definitions_AssetDefinition__get_UnlockedByDefault(long param_1)

{
  return *(undefined1 *)(param_1 + 0x60);
}



// ============================================================
// RVA: 0x14552f4 | Atlas.Definitions.AssetDefinition.get_EnableMaskOnGrid
// ============================================================

undefined1 Atlas_Definitions_AssetDefinition__get_EnableMaskOnGrid(long param_1)

{
  return *(undefined1 *)(param_1 + 0x61);
}



