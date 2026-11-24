// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Definitions.MapDefinition

// ============================================================
// RVA: 0x148d544 | Atlas.Definitions.MapDefinition.get_ProxyOfMapID
// ============================================================

undefined8 Atlas_Definitions_MapDefinition__get_ProxyOfMapID(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



// ============================================================
// RVA: 0x148d54c | Atlas.Definitions.MapDefinition.get_FreePlayOrder
// ============================================================

undefined4 Atlas_Definitions_MapDefinition__get_FreePlayOrder(long param_1)

{
  return *(undefined4 *)(param_1 + 0x58);
}



// ============================================================
// RVA: 0x148d554 | Atlas.Definitions.MapDefinition.get_PlayerFacing
// ============================================================

undefined1 Atlas_Definitions_MapDefinition__get_PlayerFacing(long param_1)

{
  return *(undefined1 *)(param_1 + 0x5c);
}



// ============================================================
// RVA: 0x148d55c | Atlas.Definitions.MapDefinition.get_SceneInfoList
// ============================================================

undefined8 Atlas_Definitions_MapDefinition__get_SceneInfoList(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



// ============================================================
// RVA: 0x148d564 | Atlas.Definitions.MapDefinition.get_LargeMapSpriteRef
// ============================================================

undefined8 Atlas_Definitions_MapDefinition__get_LargeMapSpriteRef(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



// ============================================================
// RVA: 0x148d56c | Atlas.Definitions.MapDefinition.get_SmallMapSpriteRef
// ============================================================

undefined8 Atlas_Definitions_MapDefinition__get_SmallMapSpriteRef(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



// ============================================================
// RVA: 0x148d574 | Atlas.Definitions.MapDefinition.get_SmallMinimapSpriteRef
// ============================================================

undefined8 Atlas_Definitions_MapDefinition__get_SmallMinimapSpriteRef(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



// ============================================================
// RVA: 0x148d57c | Atlas.Definitions.MapDefinition.get_LargeMinimapSpriteRef
// ============================================================

undefined8 Atlas_Definitions_MapDefinition__get_LargeMinimapSpriteRef(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



// ============================================================
// RVA: 0x148d584 | Atlas.Definitions.MapDefinition.get_GameContextDefinitionDefinitionRef
// ============================================================

long Atlas_Definitions_MapDefinition__get_GameContextDefinitionDefinitionRef(long param_1)

{
  return param_1 + 0x88;
}



// ============================================================
// RVA: 0x148d58c | Atlas.Definitions.MapDefinition.get_MusicEvent
// ============================================================

undefined8 Atlas_Definitions_MapDefinition__get_MusicEvent(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



// ============================================================
// RVA: 0x148d594 | Atlas.Definitions.MapDefinition.get_MusicUseAlternativeIntro
// ============================================================

undefined1 Atlas_Definitions_MapDefinition__get_MusicUseAlternativeIntro(long param_1)

{
  return *(undefined1 *)(param_1 + 0xa0);
}



// ============================================================
// RVA: 0x148d59c | Atlas.Definitions.MapDefinition.get_Preferred
// ============================================================

undefined1 Atlas_Definitions_MapDefinition__get_Preferred(long param_1)

{
  return *(undefined1 *)(param_1 + 0xa1);
}



// ============================================================
// RVA: 0x148d5a4 | Atlas.Definitions.MapDefinition..ctor
// ============================================================

void Atlas_Definitions_MapDefinition___ctor(long param_1)

{
  if ((bRam0000000003eb497c & 1) == 0) {
    func_0x00f78a20(0x3d78f88);
    bRam0000000003eb497c = 1;
  }
  *(undefined1 *)(param_1 + 0x5c) = 1;
  *(undefined8 *)(param_1 + 0x98) = /*STR('event:/Music/')*/ uRam0000000003d78f88;
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



