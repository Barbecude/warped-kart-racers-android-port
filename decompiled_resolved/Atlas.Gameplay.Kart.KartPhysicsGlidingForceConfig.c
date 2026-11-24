// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Kart.KartPhysicsGlidingForceConfig

// ============================================================
// RVA: 0x15d8d28 | Atlas.Gameplay.Kart.KartPhysicsGlidingForceConfig..ctor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float Atlas_Gameplay_Kart_KartPhysicsGlidingForceConfig___ctor
                (float *param_1,long *param_2,long *param_3)

{
  long lVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (*param_3 != 0) {
    fVar2 = (float)/*UnityEngine.Rigidbody$$get_mass*/ func_0x032a24c4(*param_3,0);
    if (*param_2 != 0) {
      fVar6 = *(float *)(*param_2 + 0x164);
      if (cRam0000000003ca3504 == '\0') {
        func_0x00f78a20(0x3d232c0);
        cRam0000000003ca3504 = '\x01';
      }
      if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar1 = *param_2;
      if (lVar1 != 0) {
        dVar3 = (double)_sin((double)(fVar6 * _UNK_033f8b60));
        fVar5 = *(float *)(lVar1 + 0x178);
        fVar6 = fVar5 * *(float *)(lVar1 + 0x1cc) * (float)dVar3 * fVar2 * *(float *)(lVar1 + 0x184)
        ;
        fVar4 = *(float *)(lVar1 + 0x17c);
        *param_1 = fVar6;
        param_1[1] = (fVar6 * fVar4) / fVar5;
        fVar2 = fVar2 * *(float *)(lVar1 + 0x18c);
        param_1[2] = fVar2;
        return fVar2;
      }
    }
  }
  lVar1 = func_0x00f78af4();
  return *(float *)(lVar1 + 0x164) * _UNK_033f850c;
}



