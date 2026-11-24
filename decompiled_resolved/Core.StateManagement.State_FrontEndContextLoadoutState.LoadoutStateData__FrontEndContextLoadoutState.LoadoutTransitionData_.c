// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.StateManagement.State<FrontEndContextLoadoutState.LoadoutStateData, FrontEndContextLoadoutState.LoadoutTransitionData>

// ============================================================
// RVA: 0x2866b00 | Core.StateManagement.State<FrontEndContextLoadoutState.LoadoutStateData, FrontEndContextLoadoutState.LoadoutTransitionData>.get_StateData
// ============================================================

long Core_StateManagement_State_FrontEndContextLoadoutState_LoadoutStateData__FrontEndContextLoadoutState_LoadoutTransitionData___get_StateData
               (long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  lVar4 = **(long **)(*(long *)(param_2 + 0x18) + 0xc0);
  if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar4);
  }
  lVar4 = func_0x00f78adc(uVar2,lVar4);
  lVar3 = **(long **)(*(long *)(param_2 + 0x18) + 0xc0);
  if ((*(ushort *)(lVar3 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar3);
  }
  if (lVar4 != 0) {
    lVar1 = func_0x00f78adc(lVar4,lVar3);
    if (lVar1 != 0) {
      return lVar1;
    }
    func_0x00f78e5c(lVar4,lVar3);
  }
  return 0;
}



// ============================================================
// RVA: 0x2866b94 | Core.StateManagement.State<FrontEndContextLoadoutState.LoadoutStateData, FrontEndContextLoadoutState.LoadoutTransitionData>.get_TransitionData
// ============================================================

long Core_StateManagement_State_FrontEndContextLoadoutState_LoadoutStateData__FrontEndContextLoadoutState_LoadoutTransitionData___get_TransitionData
               (long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  lVar4 = *(long *)(*(long *)(*(long *)(param_2 + 0x18) + 0xc0) + 8);
  if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar4);
  }
  lVar4 = func_0x00f78adc(uVar2,lVar4);
  lVar3 = *(long *)(*(long *)(*(long *)(param_2 + 0x18) + 0xc0) + 8);
  if ((*(ushort *)(lVar3 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar3);
  }
  if (lVar4 != 0) {
    lVar1 = func_0x00f78adc(lVar4,lVar3);
    if (lVar1 != 0) {
      return lVar1;
    }
    func_0x00f78e5c(lVar4,lVar3);
  }
  return 0;
}



// ============================================================
// RVA: 0x2866c28 | Core.StateManagement.State<FrontEndContextLoadoutState.LoadoutStateData, FrontEndContextLoadoutState.LoadoutTransitionData>..ctor
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



