// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Kart.KartAIUsablesParameters

// ============================================================
// RVA: 0x15bbbe4 | Atlas.Gameplay.Kart.KartAIUsablesParameters.get_CosRicochetHalfFOV
// ============================================================

undefined4 Atlas_Gameplay_Kart_KartAIUsablesParameters__get_CosRicochetHalfFOV(long param_1)

{
  return *(undefined4 *)(param_1 + 0x70);
}



// ============================================================
// RVA: 0x15bbbec | Atlas.Gameplay.Kart.KartAIUsablesParameters.get_CosProximityHomingHalfFov
// ============================================================

undefined4 Atlas_Gameplay_Kart_KartAIUsablesParameters__get_CosProximityHomingHalfFov(long param_1)

{
  return *(undefined4 *)(param_1 + 0x74);
}



// ============================================================
// RVA: 0x15bbbf4 | Atlas.Gameplay.Kart.KartAIUsablesParameters.get_CosBoostHalfFov
// ============================================================

undefined4 Atlas_Gameplay_Kart_KartAIUsablesParameters__get_CosBoostHalfFov(long param_1)

{
  return *(undefined4 *)(param_1 + 0x78);
}



// ============================================================
// RVA: 0x15bbbfc | Atlas.Gameplay.Kart.KartAIUsablesParameters.Calculate
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Kart_KartAIUsablesParameters__Calculate(long param_1)

{
  float fVar1;
  bool bVar2;
  float fVar3;
  double dVar4;
  
  fVar1 = _UNK_033f850c;
  fVar3 = *(float *)(param_1 + 0x14);
  if (cRam0000000003ca3501 == '\0') {
    func_0x00f78a20(0x3d232c0);
    cRam0000000003ca3501 = '\x01';
  }
  if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) == 0) ||
     (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) != 0)) {
    bVar2 = false;
  }
  else {
    func_0x00f78ad0();
    bVar2 = cRam0000000003ca3501 == '\0';
  }
  dVar4 = (double)_cos((double)(fVar3 * 0.5 * fVar1));
  *(float *)(param_1 + 0x70) = (float)dVar4;
  fVar3 = *(float *)(param_1 + 0x28);
  if (bVar2) {
    func_0x00f78a20(0x3d232c0);
    cRam0000000003ca3501 = '\x01';
  }
  if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) == 0) ||
     (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) != 0)) {
    bVar2 = false;
  }
  else {
    func_0x00f78ad0();
    bVar2 = cRam0000000003ca3501 == '\0';
  }
  dVar4 = (double)_cos((double)(fVar3 * 0.5 * fVar1));
  *(float *)(param_1 + 0x74) = (float)dVar4;
  fVar3 = *(float *)(param_1 + 0x48);
  if (bVar2) {
    func_0x00f78a20(0x3d232c0);
    cRam0000000003ca3501 = '\x01';
  }
  if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  dVar4 = (double)_cos((double)(fVar3 * 0.5 * fVar1));
  *(float *)(param_1 + 0x78) = (float)dVar4;
  return;
}



// ============================================================
// RVA: 0x15bbd58 | Atlas.Gameplay.Kart.KartAIUsablesParameters.ToBurstStruct
// ============================================================

void Atlas_Gameplay_Kart_KartAIUsablesParameters__ToBurstStruct(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  Atlas_Gameplay_Kart_KartAIUsablesParameters__Calculate();
  uVar1 = *(undefined4 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x68);
  uVar4 = *(undefined4 *)(param_2 + 0x24);
  uVar5 = *(undefined4 *)(param_2 + 0x2c);
  uVar6 = *(undefined4 *)(param_2 + 0x74);
  uVar7 = *(undefined4 *)(param_2 + 0x78);
  uVar8 = *(undefined4 *)(param_2 + 0x4c);
  *param_1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 1) = uVar1;
  *(undefined4 *)((long)param_1 + 0xc) = uVar3;
  param_1[2] = *(undefined8 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 3) = uVar6;
  *(undefined4 *)((long)param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 4) = uVar4;
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)((long)param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)((long)param_1 + 0x24) = uVar2;
  *(undefined8 *)((long)param_1 + 0x34) = *(undefined8 *)(param_2 + 0x40);
  *(undefined4 *)((long)param_1 + 0x3c) = uVar8;
  *(undefined4 *)(param_1 + 8) = uVar7;
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)((long)param_1 + 0x4c) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)((long)param_1 + 0x44) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  *(ulong *)((long)param_1 + 0x5c) =
       CONCAT44(*(undefined4 *)(param_2 + 0x6c),*(undefined4 *)(param_2 + 0x70));
  *(undefined8 *)((long)param_1 + 0x54) = uVar2;
  return;
}



// ============================================================
// RVA: 0x15bbde4 | Atlas.Gameplay.Kart.KartAIUsablesParameters..ctor
// ============================================================

void Atlas_Gameplay_Kart_KartAIUsablesParameters___ctor(long param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0x42480000;
  *(undefined4 *)(param_1 + 0x48) = 0x40a00000;
  return;
}



