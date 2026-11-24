// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Kart.KartPhysicsAeroConfig

// ============================================================
// RVA: 0x15d5060 | Atlas.Gameplay.Kart.KartPhysicsAeroConfig..ctor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
Atlas_Gameplay_Kart_KartPhysicsAeroConfig___ctor(float *param_1,long param_2,long *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  float fVar3;
  undefined1 auVar4 [16];
  
  if (*param_3 != 0) {
    fVar3 = *(float *)(*param_3 + 0x1c0);
    fVar3 = *(float *)(param_2 + 4) / (fVar3 * fVar3 * 1.25);
    *param_1 = fVar3;
    return ZEXT416((uint)fVar3);
  }
  auVar4 = func_0x00f78af4();
  puVar1 = auVar4._0_8_;
  lVar2 = *auVar4._8_8_;
  if (lVar2 != 0) {
    *puVar1 = *(undefined8 *)(lVar2 + 0x40);
    puVar1[1] = CONCAT44((float)((ulong)*(undefined8 *)(lVar2 + 0x48) >> 0x20) * 0.017453292,
                         (float)*(undefined8 *)(lVar2 + 0x48) * 0.017453292);
    auVar4 = _cosf(*(float *)(lVar2 + 100) * _UNK_033f850c);
    *(int *)(puVar1 + 2) = auVar4._0_4_;
    return auVar4;
  }
  lVar2 = func_0x00f78af4();
  return ZEXT416((uint)(*(float *)(lVar2 + 0x48) * _UNK_033f850c));
}



