// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Kart.KartPhysicsVertForceConfig

// ============================================================
// RVA: 0x15ddd74 | Atlas.Gameplay.Kart.KartPhysicsVertForceConfig..ctor
// ============================================================

undefined8
Atlas_Gameplay_Kart_KartPhysicsVertForceConfig___ctor(float *param_1,long *param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  float extraout_s0;
  
  if (*param_3 != 0) {
    uVar1 = /*UnityEngine.Rigidbody$$get_mass*/ func_0x032a24c4(*param_3,0);
    if (*param_2 != 0) {
      *param_1 = extraout_s0 * *(float *)(*param_2 + 0x184);
      return uVar1;
    }
  }
  lVar2 = func_0x00f78af4();
  return *(undefined8 *)(lVar2 + 0x20);
}



