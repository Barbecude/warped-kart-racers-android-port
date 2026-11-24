// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Contexts.FrontEndContextLoadoutState.LoadoutStateData

// ============================================================
// RVA: 0x154e658 | Atlas.Contexts.FrontEndContextLoadoutState.LoadoutStateData..ctor
// ============================================================

void Atlas_Contexts_FrontEndContextLoadoutState_LoadoutStateData___ctor(long *param_1)

{
  /*Core.StateManagement.StateData$$.ctor*/ func_0x02b9520c(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x0154e684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
  return;
}



// ============================================================
// RVA: 0x154e688 | Atlas.Contexts.FrontEndContextLoadoutState.LoadoutStateData.Reset
// ============================================================

void Atlas_Contexts_FrontEndContextLoadoutState_LoadoutStateData__Reset(long param_1)

{
  Atlas_Gameplay_KartLoadout__ClearLoadout(param_1 + 0x10,0);
  *(undefined1 *)(param_1 + 0x90) = 0;
  return;
}



