// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.StateManagement.State<StateData, FrontEndContextSettingsState.StateTransitionData>

// ============================================================
// RVA: 0x2866c28 | Core.StateManagement.State<StateData, FrontEndContextSettingsState.StateTransitionData>..ctor
// ============================================================

void Core_StateManagement_State_FrontEndContextLoadoutState_LoadoutStateData__FrontEndContextLoadoutState_LoadoutTransitionData____ctor
               (long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  if (param_1 != 0) {
    return;
  }
  auVar2 = func_0x00f78af4();
  lVar1 = auVar2._0_8_;
  *(undefined8 *)(lVar1 + 0x10) = *param_3;
  *(long *)(lVar1 + 0x20) = auVar2._8_8_;
  *(undefined8 **)(lVar1 + 0x28) = param_3;
  return;
}



