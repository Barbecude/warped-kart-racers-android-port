// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Contexts.RoundResultsState.RoundResultsTransitionData

// ============================================================
// RVA: 0x1566048 | Atlas.Contexts.RoundResultsState.RoundResultsTransitionData..ctor
// ============================================================

void Atlas_Contexts_RoundResultsState_RoundResultsTransitionData___ctor
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  /*Core.StateManagement.TransitionData$$.ctor*/ func_0x02b9595c(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  uVar1 = *param_4;
  uVar3 = param_4[3];
  uVar2 = param_4[2];
  *(undefined8 *)(param_1 + 0x28) = param_4[1];
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  return;
}



