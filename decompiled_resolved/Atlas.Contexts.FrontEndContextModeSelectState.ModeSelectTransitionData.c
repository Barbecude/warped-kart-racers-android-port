// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Contexts.FrontEndContextModeSelectState.ModeSelectTransitionData

// ============================================================
// RVA: 0x154e4ac | Atlas.Contexts.FrontEndContextModeSelectState.ModeSelectTransitionData..ctor
// ============================================================

void Atlas_Contexts_FrontEndContextModeSelectState_ModeSelectTransitionData___ctor
               (long param_1,undefined8 param_2)

{
  if ((bRam0000000003eb4f82 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb4f82 = 1;
  }
  *(undefined8 *)(param_1 + 0x20) = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  /*Core.StateManagement.TransitionData$$.ctor*/ func_0x02b9595c(param_1,0);
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return;
}



// ============================================================
// RVA: 0x154e824 | Atlas.Contexts.FrontEndContextModeSelectState.ModeSelectTransitionData..ctor
// ============================================================

void Atlas_Contexts_FrontEndContextModeSelectState_ModeSelectTransitionData___ctor
               (long param_1,undefined8 param_2,undefined1 param_3)

{
  if ((bRam0000000003eb4f83 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb4f83 = 1;
  }
  *(undefined8 *)(param_1 + 0x20) = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  /*Core.StateManagement.TransitionData$$.ctor*/ func_0x02b9595c(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined1 *)(param_1 + 0x18) = param_3;
  return;
}



