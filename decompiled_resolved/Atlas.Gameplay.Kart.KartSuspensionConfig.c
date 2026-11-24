// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Kart.KartSuspensionConfig

// ============================================================
// RVA: 0x15e11b8 | Atlas.Gameplay.Kart.KartSuspensionConfig..ctor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Kart_KartSuspensionConfig___ctor
               (float param_1,int *param_2,int param_3,long *param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined4 extraout_w1;
  undefined4 extraout_var;
  long *plVar3;
  bool bVar4;
  undefined8 *extraout_x8;
  int *piVar5;
  long lVar6;
  float extraout_s0;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  
  *param_2 = param_3;
  piVar5 = param_2 + 1;
  piVar5[0] = 1;
  piVar5[1] = 1;
  bVar4 = true;
  fVar9 = -1.0;
  if (param_3 != 0) {
    if (param_3 == 3) {
      bVar4 = false;
      piVar5 = param_2 + 2;
      fVar9 = 1.0;
    }
    else {
      fVar9 = 1.0;
      if (param_3 != 2) goto LAB_015e123c;
      bVar4 = false;
      *piVar5 = -1;
      piVar5 = param_2 + 2;
      fVar9 = -1.0;
    }
  }
  *piVar5 = -1;
LAB_015e123c:
  lVar6 = *param_4;
  plVar3 = param_4;
  if (lVar6 != 0) {
    fVar10 = *(float *)(lVar6 + 0x2c);
    fVar12 = *(float *)(lVar6 + 0x38);
    fVar13 = 0.0;
    if (!bVar4) {
      fVar13 = *(float *)(lVar6 + 0x3c);
    }
    iVar14 = *(int *)(param_5 + 4);
    fVar9 = *(float *)(lVar6 + 0x34) * fVar9;
    param_2[3] = (int)(fVar9 * 0.5);
    param_2[4] = iVar14;
    param_2[5] = (int)((fVar10 * 0.5 - fVar12) - fVar13);
    param_2[6] = 0x3f800000;
    /*UnityEngine.Physics$$get_gravity*/ func_0x0329f7d0(0);
    lVar6 = *param_4;
    if (lVar6 != 0) {
      fVar10 = *(float *)(lVar6 + 0x44);
      fVar9 = (-fVar9 * param_1) / *(float *)(lVar6 + 0x40);
      param_2[7] = (int)fVar9;
      if (cRam0000000003ca34fc == '\0') {
        func_0x00f78a20(0x3d232c0);
        cRam0000000003ca34fc = '\x01';
      }
      if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      fVar9 = SQRT(fVar9 * param_1);
      fVar10 = fVar10 * (fVar9 + fVar9);
      param_2[8] = (int)fVar10;
      lVar6 = *param_4;
      if (lVar6 != 0) {
        fVar9 = *(float *)(lVar6 + 0x40);
        param_2[9] = (int)(fVar10 * *(float *)(lVar6 + 0x48));
        param_2[10] = (int)fVar9;
        param_2[0xb] = (int)(fVar9 + fVar9);
        return;
      }
    }
  }
  puVar2 = (undefined8 *)func_0x00f78af4();
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 1) = 0;
  lVar6 = *(long *)CONCAT44(extraout_var,extraout_w1);
  if (lVar6 != 0) {
    fVar9 = *(float *)(lVar6 + 0x2c);
    fVar12 = *(float *)(lVar6 + 0x38);
    fVar13 = *(float *)(lVar6 + 0x3c);
    uVar11 = *(undefined4 *)((long)plVar3 + 4);
    fVar10 = *(float *)(lVar6 + 0x34) * 0.0 * 0.5;
    *(float *)((long)puVar2 + 0xc) = fVar10;
    *(undefined4 *)(puVar2 + 2) = uVar11;
    *(float *)((long)puVar2 + 0x14) = (fVar9 * 0.5 - fVar12) - fVar13 * 0.5;
    *(undefined4 *)(puVar2 + 3) = 0x3f800000;
    /*UnityEngine.Physics$$get_gravity*/ func_0x0329f7d0(0);
    lVar6 = *(long *)CONCAT44(extraout_var,extraout_w1);
    if (lVar6 != 0) {
      fVar9 = *(float *)(lVar6 + 0x44);
      fVar10 = (-fVar10 * extraout_s0) / *(float *)(lVar6 + 0x40);
      *(float *)((long)puVar2 + 0x1c) = fVar10;
      if (cRam0000000003ca34fc == '\0') {
        func_0x00f78a20(0x3d232c0);
        cRam0000000003ca34fc = '\x01';
      }
      if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      fVar10 = SQRT(fVar10 * extraout_s0);
      fVar9 = fVar9 * (fVar10 + fVar10);
      *(float *)(puVar2 + 4) = fVar9;
      lVar6 = *(long *)CONCAT44(extraout_var,extraout_w1);
      if (lVar6 != 0) {
        fVar10 = *(float *)(lVar6 + 0x40);
        *(float *)((long)puVar2 + 0x24) = fVar9 * *(float *)(lVar6 + 0x48);
        *(float *)(puVar2 + 5) = fVar10;
        *(float *)((long)puVar2 + 0x2c) = fVar10 + fVar10;
        return;
      }
    }
  }
  lVar6 = func_0x00f78af4();
  if ((bRam0000000003eb53b9 & 1) == 0) {
    func_0x00f78a20(0x3d265e8);
    bRam0000000003eb53b9 = 1;
  }
  puVar2 = *(undefined8 **)(/*Unity.Mathematics.float4_TypeInfo*/ lRam0000000003d265e8 + 0xb8);
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  uVar1 = _UNK_033f8448;
  uVar8 = _UNK_033f8440;
  uVar7 = *(undefined8 *)(lVar6 + 0xc);
  extraout_x8[3] = *(undefined8 *)(lVar6 + 0x14);
  extraout_x8[2] = uVar7;
  extraout_x8[5] = uVar1;
  extraout_x8[4] = uVar8;
  uVar8 = *puVar2;
  extraout_x8[7] = puVar2[1];
  extraout_x8[6] = uVar8;
  extraout_x8[9] = 0;
  extraout_x8[10] = 0;
  extraout_x8[8] = 0;
  return;
}



// ============================================================
// RVA: 0x15e133c | Atlas.Gameplay.Kart.KartSuspensionConfig..ctor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Kart_KartSuspensionConfig___ctor
               (float param_1,undefined8 *param_2,long *param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *extraout_x8;
  undefined8 *puVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  lVar2 = *param_3;
  if (lVar2 != 0) {
    fVar4 = *(float *)(lVar2 + 0x2c);
    fVar8 = *(float *)(lVar2 + 0x38);
    fVar9 = *(float *)(lVar2 + 0x3c);
    uVar10 = *(undefined4 *)(param_4 + 4);
    fVar7 = *(float *)(lVar2 + 0x34) * 0.0 * 0.5;
    *(float *)((long)param_2 + 0xc) = fVar7;
    *(undefined4 *)(param_2 + 2) = uVar10;
    *(float *)((long)param_2 + 0x14) = (fVar4 * 0.5 - fVar8) - fVar9 * 0.5;
    *(undefined4 *)(param_2 + 3) = 0x3f800000;
    /*UnityEngine.Physics$$get_gravity*/ func_0x0329f7d0(0);
    lVar2 = *param_3;
    if (lVar2 != 0) {
      fVar4 = *(float *)(lVar2 + 0x44);
      fVar7 = (-fVar7 * param_1) / *(float *)(lVar2 + 0x40);
      *(float *)((long)param_2 + 0x1c) = fVar7;
      if (cRam0000000003ca34fc == '\0') {
        func_0x00f78a20(0x3d232c0);
        cRam0000000003ca34fc = '\x01';
      }
      if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      fVar7 = SQRT(fVar7 * param_1);
      fVar4 = fVar4 * (fVar7 + fVar7);
      *(float *)(param_2 + 4) = fVar4;
      lVar2 = *param_3;
      if (lVar2 != 0) {
        fVar7 = *(float *)(lVar2 + 0x40);
        *(float *)((long)param_2 + 0x24) = fVar4 * *(float *)(lVar2 + 0x48);
        *(float *)(param_2 + 5) = fVar7;
        *(float *)((long)param_2 + 0x2c) = fVar7 + fVar7;
        return;
      }
    }
  }
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb53b9 & 1) == 0) {
    func_0x00f78a20(0x3d265e8);
    bRam0000000003eb53b9 = 1;
  }
  puVar3 = *(undefined8 **)(/*Unity.Mathematics.float4_TypeInfo*/ lRam0000000003d265e8 + 0xb8);
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  uVar1 = _UNK_033f8448;
  uVar6 = _UNK_033f8440;
  uVar5 = *(undefined8 *)(lVar2 + 0xc);
  extraout_x8[3] = *(undefined8 *)(lVar2 + 0x14);
  extraout_x8[2] = uVar5;
  extraout_x8[5] = uVar1;
  extraout_x8[4] = uVar6;
  uVar6 = *puVar3;
  extraout_x8[7] = puVar3[1];
  extraout_x8[6] = uVar6;
  extraout_x8[9] = 0;
  extraout_x8[10] = 0;
  extraout_x8[8] = 0;
  return;
}



