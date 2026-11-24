// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Contexts.RoundResultsState.RoundResultsStateData

// ============================================================
// RVA: 0x1565fdc | Atlas.Contexts.RoundResultsState.RoundResultsStateData..ctor
// ============================================================

undefined1  [16] Atlas_Contexts_RoundResultsState_RoundResultsStateData___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb4fe7 & 1) == 0) {
    func_0x00f78a20(0x3d21688);
    bRam0000000003eb4fe7 = 1;
  }
  uVar1 = func_0x00f78aec(/*Atlas.FrontEnd.EventInfo_TypeInfo*/ uRam0000000003d21688);
  /*Atlas.FrontEnd.EventInfo$$.ctor*/ func_0x01583970(uVar1,0);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



