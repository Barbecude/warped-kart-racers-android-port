// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Definitions.ArcadeModeDefinition

// ============================================================
// RVA: 0x144f4c8 | Atlas.Definitions.ArcadeModeDefinition.GetSetting
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x145363c | Atlas.Definitions.ArcadeModeDefinition.get_DisplayNameLocKey
// ============================================================

undefined8 Atlas_Definitions_ArcadeModeDefinition__get_DisplayNameLocKey(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x1453644 | Atlas.Definitions.ArcadeModeDefinition.get_GameType
// ============================================================

undefined4 Atlas_Definitions_ArcadeModeDefinition__get_GameType(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x145364c | Atlas.Definitions.ArcadeModeDefinition.get_IconSpriteRef
// ============================================================

undefined8 Atlas_Definitions_ArcadeModeDefinition__get_IconSpriteRef(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x1453654 | Atlas.Definitions.ArcadeModeDefinition.get_TiledBannerBackground
// ============================================================

undefined8 Atlas_Definitions_ArcadeModeDefinition__get_TiledBannerBackground(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



// ============================================================
// RVA: 0x145365c | Atlas.Definitions.ArcadeModeDefinition.get_DisablePickupBoxes
// ============================================================

undefined1 Atlas_Definitions_ArcadeModeDefinition__get_DisablePickupBoxes(long param_1)

{
  return *(undefined1 *)(param_1 + 0x40);
}



// ============================================================
// RVA: 0x1453664 | Atlas.Definitions.ArcadeModeDefinition.get_EquipUsableOnStart
// ============================================================

undefined8 Atlas_Definitions_ArcadeModeDefinition__get_EquipUsableOnStart(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



// ============================================================
// RVA: 0x145366c | Atlas.Definitions.ArcadeModeDefinition.get_BattleEventDefinition
// ============================================================

undefined8 Atlas_Definitions_ArcadeModeDefinition__get_BattleEventDefinition(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



// ============================================================
// RVA: 0x1453674 | Atlas.Definitions.ArcadeModeDefinition.get_RaceEventDefinition
// ============================================================

undefined8 Atlas_Definitions_ArcadeModeDefinition__get_RaceEventDefinition(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



// ============================================================
// RVA: 0x145367c | Atlas.Definitions.ArcadeModeDefinition.get_ModeDescriptionLocKey
// ============================================================

undefined8 Atlas_Definitions_ArcadeModeDefinition__get_ModeDescriptionLocKey(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



// ============================================================
// RVA: 0x1453684 | Atlas.Definitions.ArcadeModeDefinition..ctor
// ============================================================

void Atlas_Definitions_ArcadeModeDefinition___ctor(long param_1)

{
  long lVar1;
  
  if ((bRam0000000003eb4789 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    bRam0000000003eb4789 = 1;
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar1 = /*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270;
  *(undefined8 *)(param_1 + 0x48) = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
  *(undefined8 *)(param_1 + 0x50) = **(undefined8 **)(lVar1 + 0xb8);
  *(undefined8 *)(param_1 + 0x58) = **(undefined8 **)(lVar1 + 0xb8);
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



