// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Contexts.FrontEndContextModeSelectState.ModeSelectStateData

// ============================================================
// RVA: 0x154e788 | Atlas.Contexts.FrontEndContextModeSelectState.ModeSelectStateData..ctor
// ============================================================

void Atlas_Contexts_FrontEndContextModeSelectState_ModeSelectStateData___ctor(long *param_1)

{
  long lVar1;
  
  if ((bRam0000000003eb4f81 & 1) == 0) {
    func_0x00f78a20(0x3d21688);
    bRam0000000003eb4f81 = 1;
  }
  lVar1 = func_0x00f78aec(/*Atlas.FrontEnd.EventInfo_TypeInfo*/ uRam0000000003d21688);
  /*Atlas.FrontEnd.EventInfo$$.ctor*/ func_0x01583970(lVar1,0);
  param_1[2] = lVar1;
  /*Core.StateManagement.StateData$$.ctor*/ func_0x02b9520c(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x0154e800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
  return;
}



// ============================================================
// RVA: 0x154e804 | Atlas.Contexts.FrontEndContextModeSelectState.ModeSelectStateData.Reset
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Contexts_FrontEndContextModeSelectState_ModeSelectStateData__Reset
               (long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    if ((bRam0000000003eb50c4 & 1) == 0) {
      func_0x00f78a20(0x3d24dd0,0);
      bRam0000000003eb50c4 = 1;
    }
    *(undefined4 *)(lVar1 + 0x10) = 0;
    uVar2 = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
    *(undefined8 *)(lVar1 + 0x20) = uVar2;
    *(undefined8 *)(lVar1 + 0x28) = _UNK_033f8410;
    Atlas_Gameplay_KartLoadout__ClearLoadout(lVar1 + 0x30,0);
    *(undefined8 *)(lVar1 + 0x70) = 0;
    *(undefined1 *)(lVar1 + 0x78) = 0;
    return;
  }
  auVar3 = func_0x00f78af4();
  lVar1 = auVar3._0_8_;
  if ((bRam0000000003eb4f83 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb4f83 = 1;
  }
  *(undefined8 *)(lVar1 + 0x20) = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  /*Core.StateManagement.TransitionData$$.ctor*/ func_0x02b9595c(lVar1,0);
  *(long *)(lVar1 + 0x10) = auVar3._8_8_;
  *(undefined1 *)(lVar1 + 0x18) = param_3;
  return;
}



