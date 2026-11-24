// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Kart.KartPhysicsRotForceConfig

// ============================================================
// RVA: 0x15dbd20 | Atlas.Gameplay.Kart.KartPhysicsRotForceConfig..ctor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
Atlas_Gameplay_Kart_KartPhysicsRotForceConfig___ctor(undefined8 *param_1,long *param_2)

{
  long lVar1;
  float fVar2;
  undefined1 auVar3 [16];
  
  *param_1 = _UNK_033f8d10;
  if (*param_2 != 0) {
    fVar2 = *(float *)(*param_2 + 0x188);
    auVar3._0_8_ = CONCAT44((float)((ulong)_UNK_033f8d18 >> 0x20) * fVar2,
                            (float)_UNK_033f8d18 * fVar2);
    param_1[1] = auVar3._0_8_;
    auVar3._8_8_ = 0;
    return auVar3;
  }
  lVar1 = func_0x00f78af4();
  return ZEXT416(*(uint *)(lVar1 + 0x10));
}



