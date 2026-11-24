// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Kart.KartPhysicsBodyConfig

// ============================================================
// RVA: 0x15d5098 | Atlas.Gameplay.Kart.KartPhysicsBodyConfig..ctor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] Atlas_Gameplay_Kart_KartPhysicsBodyConfig___ctor(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    *param_1 = *(undefined8 *)(lVar1 + 0x40);
    param_1[1] = CONCAT44((float)((ulong)*(undefined8 *)(lVar1 + 0x48) >> 0x20) * 0.017453292,
                          (float)*(undefined8 *)(lVar1 + 0x48) * 0.017453292);
    auVar2 = _cosf(*(float *)(lVar1 + 100) * _UNK_033f850c);
    *(int *)(param_1 + 2) = auVar2._0_4_;
    return auVar2;
  }
  lVar1 = func_0x00f78af4();
  return ZEXT416((uint)(*(float *)(lVar1 + 0x48) * _UNK_033f850c));
}



