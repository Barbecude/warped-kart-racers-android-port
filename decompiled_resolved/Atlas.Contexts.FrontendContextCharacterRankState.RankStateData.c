// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Contexts.FrontendContextCharacterRankState.RankStateData

// ============================================================
// RVA: 0x154fc6c | Atlas.Contexts.FrontendContextCharacterRankState.RankStateData..ctor
// ============================================================

void Atlas_Contexts_FrontendContextCharacterRankState_RankStateData___ctor(long *param_1)

{
  /*Core.StateManagement.StateData$$.ctor*/ func_0x02b9520c(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x0154fc98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
  return;
}



// ============================================================
// RVA: 0x154fc9c | Atlas.Contexts.FrontendContextCharacterRankState.RankStateData.Reset
// ============================================================

void Atlas_Contexts_FrontendContextCharacterRankState_RankStateData__Reset(long param_1)

{
  long lVar1;
  
  if ((bRam0000000003eb5339 & 1) == 0) {
    func_0x00f78a20(0x3d21270,0);
    bRam0000000003eb5339 = 1;
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)(param_1 + 0x10) = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
  lVar1 = /*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270;
  *(undefined8 *)(param_1 + 0x18) = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
  *(undefined8 *)(param_1 + 0x20) = **(undefined8 **)(lVar1 + 0xb8);
  *(undefined8 *)(param_1 + 0x28) = **(undefined8 **)(lVar1 + 0xb8);
  *(undefined8 *)(param_1 + 0x30) = **(undefined8 **)(lVar1 + 0xb8);
  *(undefined8 *)(param_1 + 0x38) = **(undefined8 **)(lVar1 + 0xb8);
  *(undefined8 *)(param_1 + 0x40) = **(undefined8 **)(lVar1 + 0xb8);
  *(undefined8 *)(param_1 + 0x48) = **(undefined8 **)(lVar1 + 0xb8);
  return;
}



