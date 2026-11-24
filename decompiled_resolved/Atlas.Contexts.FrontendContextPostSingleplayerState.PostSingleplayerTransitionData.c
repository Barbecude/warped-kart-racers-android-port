// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Contexts.FrontendContextPostSingleplayerState.PostSingleplayerTransitionData

// ============================================================
// RVA: 0x154fcd4 | Atlas.Contexts.FrontendContextPostSingleplayerState.PostSingleplayerTransitionData..ctor
// ============================================================

void Atlas_Contexts_FrontendContextPostSingleplayerState_PostSingleplayerTransitionData___ctor
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb4f8c & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    bRam0000000003eb4f8c = 1;
  }
  /*Core.StateManagement.TransitionData$$.ctor*/ func_0x02b9595c(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined8 *)(param_1 + 0x28) = param_4;
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(param_5,0);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  return;
}



