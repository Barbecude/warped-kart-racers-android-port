// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Kart.KartPhysicsInputData

// ============================================================
// RVA: 0x15db7fc | Atlas.Gameplay.Kart.KartPhysicsInputData.Reset
// ============================================================

void Atlas_Gameplay_Kart_KartPhysicsInputData__Reset
               (undefined1 param_1 [16],undefined4 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  
  *param_3 = 0;
  param_3[1] = 0;
  *(undefined8 *)((long)param_3 + 0x16) = 0;
  param_3[2] = 0;
  uVar1 = /*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
  *(undefined4 *)(param_3 + 4) = uVar1;
  *(undefined4 *)((long)param_3 + 0x24) = param_2;
  return;
}



// ============================================================
// RVA: 0x15db90c | Atlas.Gameplay.Kart.KartPhysicsInputData.CreateDefault
// ============================================================

void Atlas_Gameplay_Kart_KartPhysicsInputData__CreateDefault
               (undefined8 *param_1,undefined1 param_2 [16],undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = /*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)((long)param_1 + 0x24) = param_3;
  return;
}



