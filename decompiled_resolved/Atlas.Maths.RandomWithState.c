// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Maths.RandomWithState

// ============================================================
// RVA: 0x14e010c | Atlas.Maths.RandomWithState.Init
// ============================================================

void Atlas_Maths_RandomWithState__Init(undefined1 (*param_1) [16],undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  /*UnityEngine.Random$$InitState*/ func_0x032526cc(param_2,0);
  auVar1 = /*UnityEngine.Random$$get_state*/ func_0x0325270c(0);
  *param_1 = auVar1;
  return;
}



// ============================================================
// RVA: 0x14e0140 | Atlas.Maths.RandomWithState.GetValue
// ============================================================

undefined4 Atlas_Maths_RandomWithState__GetValue(undefined1 (*param_1) [16])

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  
  /*UnityEngine.Random$$set_state*/ func_0x0325279c(*(undefined8 *)*param_1,*(undefined8 *)(*param_1 + 8),0);
  uVar1 = /*UnityEngine.Random$$get_value*/ func_0x03252940(0);
  auVar2 = /*UnityEngine.Random$$get_state*/ func_0x0325270c(0);
  *param_1 = auVar2;
  return uVar1;
}



// ============================================================
// RVA: 0x14e0190 | Atlas.Maths.RandomWithState.GetValueFromRange
// ============================================================

undefined4
Atlas_Maths_RandomWithState__GetValueFromRange
          (undefined4 param_1,undefined4 param_2,undefined1 (*param_3) [16])

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  
  /*UnityEngine.Random$$set_state*/ func_0x0325279c(*(undefined8 *)*param_3,*(undefined8 *)(*param_3 + 8),0);
  uVar1 = /*UnityEngine.Random$$Range*/ func_0x03252854(param_1,param_2,0);
  auVar2 = /*UnityEngine.Random$$get_state*/ func_0x0325270c(0);
  *param_3 = auVar2;
  return uVar1;
}



// ============================================================
// RVA: 0x14e01f0 | Atlas.Maths.RandomWithState.GetValueFromRange
// ============================================================

undefined8
Atlas_Maths_RandomWithState__GetValueFromRange
          (undefined1 (*param_1) [16],undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  /*UnityEngine.Random$$set_state*/ func_0x0325279c(*(undefined8 *)*param_1,*(undefined8 *)(*param_1 + 8),0);
  uVar1 = /*UnityEngine.Random$$Range*/ func_0x032528a0(param_2,param_3,0);
  auVar2 = /*UnityEngine.Random$$get_state*/ func_0x0325270c(0);
  *param_1 = auVar2;
  return uVar1;
}



