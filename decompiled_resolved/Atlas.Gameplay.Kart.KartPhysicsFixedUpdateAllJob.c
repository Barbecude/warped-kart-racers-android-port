// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Kart.KartPhysicsFixedUpdateAllJob

// ============================================================
// RVA: 0x15d5434 | Atlas.Gameplay.Kart.KartPhysicsFixedUpdateAllJob.GetLinearVelocityAtPoint
// ============================================================

void Atlas_Gameplay_Kart_KartPhysicsFixedUpdateAllJob__GetLinearVelocityAtPoint
               (undefined8 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
               undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if ((bRam0000000003eb5386 & 1) == 0) {
    func_0x00f78a20(0x3d232d8);
    bRam0000000003eb5386 = 1;
  }
  uVar2 = param_5[1];
  uVar1 = *param_5;
  uVar4 = param_1[1];
  uVar3 = *param_1;
  uVar6 = *param_2;
  uVar7 = param_2[1];
  uVar8 = param_2[2];
  uVar9 = param_2[3];
  if (((*(ushort *)(/*Atlas.Maths.Math4d_TypeInfo*/ lRam0000000003d232d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Maths.Math4d_TypeInfo*/ lRam0000000003d232d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  fVar5 = (float)((ulong)uVar1 >> 0x20) - (float)((ulong)uVar3 >> 0x20);
  /*Atlas.Maths.Math4d$$Cross*/ func_0x014938b0(uVar6,uVar7,uVar8,uVar9,CONCAT44(fVar5,(float)uVar1 - (float)uVar3),fVar5,
                  (float)uVar2 - (float)uVar4,
                  (float)((ulong)uVar2 >> 0x20) - (float)((ulong)uVar4 >> 0x20),0);
  return;
}



// ============================================================
// RVA: 0x15d5548 | Atlas.Gameplay.Kart.KartPhysicsFixedUpdateAllJob.KartSuspensionUpdateJobExecute
// ============================================================

void Atlas_Gameplay_Kart_KartPhysicsFixedUpdateAllJob__KartSuspensionUpdateJobExecute
               (float *param_1,float param_2,undefined1 param_3 [16],float param_4,float param_5,
               long param_6,undefined8 *param_7,long param_8,int param_9,long param_10)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined1 uVar7;
  undefined8 *puVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  
  if ((bRam0000000003eb5387 & 1) == 0) {
    func_0x00f78a20(0x3d5ab70);
    func_0x00f78a20(0x3d265e8);
    bRam0000000003eb5387 = 1;
  }
  lVar6 = /*Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$GetUnsafeReadOnlyPtr<KartSuspensionConfig>*/ func_0x018a4658(*param_7,param_7[1],uRam0000000003d5ab70);
  lVar6 = lVar6 + (long)param_9 * 0x30;
  uStack_d8 = *(undefined4 *)(lVar6 + 0x14);
  uVar19 = *(undefined8 *)(lVar6 + 0xc);
  uStack_d4 = 0x3f800000;
  uStack_e0 = uVar19;
  fVar10 = (float)Atlas_Gameplay_Kart_KartPhysicsFixedUpdateAllJob__GetLinearVelocityAtPoint
                            (param_10 + 0x290,param_10 + 0x2a0,param_10 + 0x16c,param_10 + 0x1dc,
                             &uStack_e0);
  puVar8 = (undefined8 *)(*(long *)(param_6 + 0x50) + (long)param_9 * 0x34);
  uVar15 = *(undefined8 *)((long)puVar8 + 0x2c);
  uStack_a8 = *(undefined4 *)(puVar8 + 5);
  uStack_b0 = puVar8[4];
  uStack_c8 = puVar8[1];
  uStack_d0 = *puVar8;
  uStack_b8 = puVar8[3];
  uStack_c0 = puVar8[2];
  fVar18 = param_4;
  fVar11 = (float)/*UnityEngine.RaycastHit$$get_distance*/ func_0x032a1f20(&uStack_d0,0);
  fVar22 = 3.4028235e+38;
  if (fVar11 != 3.4028235e+38) {
    /*UnityEngine.RaycastHit$$get_point*/ func_0x032a1ef0(&uStack_d0,0);
    fVar24 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
    fVar20 = fVar22;
    fVar21 = fVar18;
    /*UnityEngine.RaycastHit$$get_normal*/ func_0x032a1f08(&uStack_d0,0);
    fVar13 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
    fVar12 = (float)/*UnityEngine.RaycastHit$$get_distance*/ func_0x032a1f20(&uStack_d0,0);
    fVar12 = fVar12 - *(float *)(param_10 + 0x2b0);
    fVar14 = *(float *)(lVar6 + 0x2c);
    uVar25 = NEON_fmov(0x3f800000,4);
    uVar25 = CONCAT44((int)((ulong)uVar25 >> 0x20),fVar18);
  }
  else {
    pfVar9 = *(float **)(/*Unity.Mathematics.float4_TypeInfo*/ lRam0000000003d265e8 + 0xb8);
    fVar24 = *pfVar9;
    fVar22 = pfVar9[1];
    uVar25 = *(undefined8 *)(pfVar9 + 2);
    fVar12 = *(float *)(lVar6 + 0x2c);
    fVar20 = 1.0;
    fVar21 = 0.0;
    fVar13 = 0.0;
    fVar14 = fVar12;
  }
  fVar23 = param_5 * 0.0 + param_4 * fVar21 + (float)uVar19 * fVar20 + fVar10 * fVar13;
  fVar18 = fVar14 - fVar12;
  bVar2 = false;
  bVar3 = true;
  bVar4 = false;
  if (fVar18 < param_2) {
    bVar2 = false;
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar18)) {
      bVar2 = fVar18 < 0.0;
      bVar3 = fVar18 == 0.0;
      bVar4 = false;
    }
  }
  if (bVar3 || bVar2 != bVar4) {
    param_2 = fVar18;
  }
  if (param_2 <= 0.0) {
    uVar7 = 0;
    uVar15 = 0;
    uVar17 = (*(undefined8 **)(/*Unity.Mathematics.float4_TypeInfo*/ lRam0000000003d265e8 + 0xb8))[1];
    uVar16 = **(undefined8 **)(/*Unity.Mathematics.float4_TypeInfo*/ lRam0000000003d265e8 + 0xb8);
    param_2 = 0.0;
  }
  else {
    bVar2 = false;
    bVar3 = false;
    if (fVar23 <= 0.0) {
      bVar2 = false;
      bVar3 = true;
      if (!NAN(param_2) && !NAN(fVar14)) {
        bVar2 = param_2 == fVar14;
        bVar3 = fVar14 <= param_2;
      }
    }
    lVar1 = 0x20;
    if (bVar3 && !bVar2) {
      lVar1 = 0x24;
    }
    fVar18 = param_2 * *(float *)(lVar6 + 0x1c) - fVar23 * *(float *)(lVar6 + lVar1);
    if ((*(char *)(param_8 + 0x55) != '\0') || (*(char *)(param_8 + 0x56) != '\0')) {
      iVar5 = /*System.Single$$IsNaN*/ func_0x029ba610(0,0);
      if (fVar18 <= 0.0 && iVar5 == 0) {
        fVar18 = 0.0;
      }
    }
    uVar16 = CONCAT44(fVar20 * fVar18,fVar13 * fVar18);
    uVar17 = CONCAT44(fVar18 * 0.0,fVar21 * fVar18);
    uVar7 = 1;
  }
  *param_1 = fVar10;
  param_1[1] = (float)uVar19;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = fVar24;
  param_1[5] = fVar22;
  *(undefined8 *)(param_1 + 6) = uVar25;
  param_1[8] = fVar13;
  param_1[9] = fVar20;
  param_1[10] = fVar21;
  param_1[0xb] = 0.0;
  *(undefined8 *)(param_1 + 0xe) = uVar17;
  *(undefined8 *)(param_1 + 0xc) = uVar16;
  param_1[0x10] = fVar12;
  param_1[0x11] = fVar23;
  param_1[0x12] = param_2;
  *(bool *)(param_1 + 0x13) = fVar11 != 3.4028235e+38;
  *(undefined1 *)((long)param_1 + 0x4d) = uVar7;
  *(undefined2 *)((long)param_1 + 0x4e) = 0;
  *(undefined8 *)(param_1 + 0x14) = uVar15;
  return;
}



// ============================================================
// RVA: 0x15d588c | Atlas.Gameplay.Kart.KartPhysicsFixedUpdateAllJob.GetBoostLevelFromDriftTime
// ============================================================

void Atlas_Gameplay_Kart_KartPhysicsFixedUpdateAllJob__GetBoostLevelFromDriftTime
               (undefined8 *param_1,float param_2,long param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  float fVar5;
  undefined4 uStack_d0;
  float fStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  int iStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000003eb5388 & 1) == 0) {
    func_0x00f78a20(0x3d21468);
    func_0x00f78a20(0x3d32440);
    func_0x00f78a20(0x3d32448);
    func_0x00f78a20(0x3d32450);
    func_0x00f78a20(0x3d3e200);
    bRam0000000003eb5388 = 1;
  }
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  if (0 < *(int *)(param_3 + 0x68)) {
    /*Unity.Collections.NativeArray<DriftBoostLevel>$$GetEnumerator*/ func_0x025ec050(&uStack_68,param_3 + 0x60,uRam0000000003d3e200);
    do {
      uVar1 = /*Unity.Collections.NativeArray.Enumerator<DriftBoostLevel>$$MoveNext*/ func_0x01f67144(&uStack_68,uRam0000000003d32448);
      if ((uVar1 & 1) == 0) {
        uVar3 = 0;
        iStack_b0 = 0x51;
        fVar5 = 0.0;
        goto LAB_015d59c4;
      }
      /*Unity.Collections.NativeArray.Enumerator<DriftBoostLevel>$$get_Current*/ func_0x01f6716c(&uStack_d0,&uStack_68,uRam0000000003d32450);
      uStack_78 = uStack_c0;
      uStack_80 = uStack_c8;
      uStack_70 = uStack_b8;
    } while (param_2 < fStack_cc);
    uStack_98 = uStack_c0;
    uStack_a0 = uStack_c8;
    uStack_90 = uStack_b8;
    iStack_b0 = 0x57;
    uVar3 = uStack_d0;
    fVar5 = fStack_cc;
LAB_015d59c4:
    /*Unity.Collections.NativeArray.Enumerator<DriftBoostLevel>$$Dispose*/ func_0x01f67140(&uStack_68,uRam0000000003d32440);
    if (iStack_b0 == 0x51) {
      uStack_a8 = 0;
    }
    else if (iStack_b0 == 0x57) {
      *(undefined4 *)param_1 = uVar3;
      *(float *)((long)param_1 + 4) = fVar5;
      param_1[2] = uStack_98;
      param_1[1] = uStack_a0;
      *(undefined4 *)(param_1 + 3) = uStack_90;
      return;
    }
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.DriftBoostLevel_TypeInfo*/ lRam0000000003d21468 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.DriftBoostLevel_TypeInfo*/ lRam0000000003d21468 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar2 = *(undefined8 **)(/*Atlas.Gameplay.Kart.DriftBoostLevel_TypeInfo*/ lRam0000000003d21468 + 0xb8);
  uVar4 = *puVar2;
  param_1[1] = puVar2[1];
  *param_1 = uVar4;
  uVar4 = *(undefined8 *)((long)puVar2 + 0xc);
  *(undefined8 *)((long)param_1 + 0x14) = *(undefined8 *)((long)puVar2 + 0x14);
  *(undefined8 *)((long)param_1 + 0xc) = uVar4;
  return;
}



// ============================================================
// RVA: 0x15d5a90 | Atlas.Gameplay.Kart.KartPhysicsFixedUpdateAllJob.KartPhysicsUpdateBodyJobExecute
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Kart_KartPhysicsFixedUpdateAllJob__KartPhysicsUpdateBodyJobExecute
               (undefined8 param_1,float *param_2,long *param_3,int param_4,long param_5,
               undefined1 *param_6,float *param_7,long param_8,long param_9)

{
  undefined1 *puVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  float *pfVar8;
  undefined8 uVar9;
  long lVar10;
  char cVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  char cVar15;
  float fVar16;
  double dVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  byte bVar21;
  byte bVar22;
  float fVar20;
  byte bVar23;
  float fVar24;
  ulong uVar25;
  ulong uVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  ulong uVar36;
  float fVar37;
  undefined1 auStack_6a0 [416];
  undefined1 auStack_500 [328];
  undefined8 uStack_3b8;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined8 uStack_3a4;
  undefined1 auStack_218 [328];
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  
  if ((bRam0000000003eb5389 & 1) == 0) {
    func_0x00f78a20(0x3d21468);
    func_0x00f78a20(0x3d22cc8);
    bRam0000000003eb5389 = 1;
  }
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  param_2[9] = 0.0;
  param_2[10] = 0.0;
  if (param_4 < 0x7ffffffc) {
    fVar29 = 0.0;
    fVar24 = 0.0;
    lVar10 = (long)param_4;
    lVar12 = (long)param_4 * 0x58;
    do {
      lVar13 = *param_3;
      if (*(char *)(lVar13 + lVar12 + 0x4d) != '\0') {
        fVar24 = (float)((int)fVar24 + 1);
        param_2[9] = fVar24;
        lVar13 = *param_3;
      }
      if (*(char *)(lVar13 + lVar12 + 0x4c) != '\0') {
        fVar29 = (float)((int)fVar29 + 1);
        param_2[10] = fVar29;
      }
      lVar10 = lVar10 + 1;
      lVar12 = lVar12 + 0x58;
    } while (lVar10 < param_4 + 4);
  }
  if (*(char *)(param_9 + 0x32c) == '\0') {
    lVar10 = *param_3;
    lVar12 = lVar10 + (long)param_4 * 0x58;
    cVar15 = *(char *)(lVar12 + 0x4c);
    lVar13 = lVar10 + (long)(param_4 + 1) * 0x58;
    lVar14 = lVar10 + (long)(param_4 + 2) * 0x58;
    cVar11 = *(char *)(lVar14 + 0x4c);
    lVar10 = lVar10 + (long)(param_4 + 3) * 0x58;
    cVar2 = *(char *)(lVar10 + 0x4c);
    fVar20 = (float)*(undefined8 *)(lVar12 + 0x14);
    fVar32 = (float)*(undefined8 *)(lVar14 + 0x14);
    fVar16 = fVar20 - fVar32;
    fVar31 = (float)((ulong)*(undefined8 *)(lVar12 + 0x14) >> 0x20);
    fVar33 = (float)((ulong)*(undefined8 *)(lVar14 + 0x14) >> 0x20);
    fVar37 = fVar31 - fVar33;
    fVar24 = *(float *)(param_9 + 0x1ac);
    fVar29 = *(float *)(param_9 + 0x1b8);
    if (cVar11 != '\0' && cVar15 != '\0') {
      fVar24 = *(float *)(lVar12 + 0x10) - *(float *)(lVar14 + 0x10);
      fVar29 = *(float *)(lVar12 + 0x1c) - *(float *)(lVar14 + 0x1c);
    }
    iVar6 = -(uint)(cVar11 == '\0' || cVar15 == '\0');
    uVar36 = CONCAT44(fVar37,fVar16) ^
             (CONCAT44(fVar37,fVar16) ^ *(ulong *)(param_9 + 0x1b0)) & CONCAT44(iVar6,iVar6);
    fVar16 = (float)*(undefined8 *)(lVar13 + 0x14);
    fVar37 = (float)((ulong)*(undefined8 *)(lVar13 + 0x14) >> 0x20);
    fVar34 = (float)*(undefined8 *)(lVar10 + 0x14);
    fVar35 = (float)((ulong)*(undefined8 *)(lVar10 + 0x14) >> 0x20);
    if (((cVar2 != '\0') && (*(char *)(lVar13 + 0x4c) != '\0')) &&
       (fVar28 = fVar16 - fVar34, ABS((float)uVar36) < ABS(fVar28))) {
      fVar24 = *(float *)(lVar13 + 0x10) - *(float *)(lVar10 + 0x10);
      fVar29 = *(float *)(lVar13 + 0x1c) - *(float *)(lVar10 + 0x1c);
      uVar36 = CONCAT44(fVar37 - fVar35,fVar28);
    }
    fVar34 = fVar34 - fVar32;
    fVar35 = fVar35 - fVar33;
    fVar32 = *(float *)(param_9 + 0x1bc);
    fVar33 = *(float *)(param_9 + 0x1c8);
    if (cVar11 != '\0' && cVar2 != '\0') {
      fVar32 = *(float *)(lVar10 + 0x10) - *(float *)(lVar14 + 0x10);
      fVar33 = *(float *)(lVar10 + 0x1c) - *(float *)(lVar14 + 0x1c);
    }
    iVar6 = -(uint)(cVar11 == '\0' || cVar2 == '\0');
    uVar25 = CONCAT44(fVar35,fVar34) ^
             (CONCAT44(fVar35,fVar34) ^ *(ulong *)(param_9 + 0x1c0)) & CONCAT44(iVar6,iVar6);
    if (((cVar15 != '\0') && (*(char *)(lVar13 + 0x4c) != '\0')) &&
       (fVar16 = fVar16 - fVar20, uVar26 = CONCAT44((int)uVar25,fVar16) & 0x7fffffff7fffffff,
       (float)(uVar26 >> 0x20) < (float)uVar26)) {
      fVar32 = *(float *)(lVar13 + 0x10) - *(float *)(lVar12 + 0x10);
      fVar33 = *(float *)(lVar13 + 0x1c) - *(float *)(lVar12 + 0x1c);
      uVar25 = CONCAT44(fVar37 - fVar31,fVar16);
    }
    if (cRam0000000003ca34fc == '\0') {
      func_0x00f78a20(0x3d232c0);
      cRam0000000003ca34fc = '\x01';
    }
    if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) == 0) ||
       (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) != 0)) {
      cVar15 = '\x01';
    }
    else {
      func_0x00f78ad0();
      cVar15 = cRam0000000003ca34fc;
    }
    fVar20 = (float)uVar36;
    fVar31 = (float)(uVar36 >> 0x20);
    fVar29 = 1.0 / SQRT(fVar29 * fVar29 + fVar31 * fVar31 + fVar20 * fVar20 + fVar24 * fVar24);
    if (cVar15 == '\0') {
      func_0x00f78a20(0x3d232c0);
      cRam0000000003ca34fc = '\x01';
    }
    if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    fVar16 = (float)uVar25;
    fVar37 = (float)(uVar25 >> 0x20);
    fVar33 = 1.0 / SQRT(fVar33 * fVar33 + fVar37 * fVar37 + fVar16 * fVar16 + fVar32 * fVar32);
    uVar9 = NEON_rev64(CONCAT44(fVar37 * fVar33,fVar16 * fVar33),4);
    fVar16 = fVar24 * fVar29 * fVar16 * fVar33 - fVar32 * fVar33 * fVar20 * fVar29;
    fVar20 = fVar20 * fVar29 * (float)uVar9 - fVar31 * fVar29 * (float)((ulong)uVar9 >> 0x20);
    fVar24 = fVar32 * fVar33 * fVar31 * fVar29 - fVar24 * fVar29 * fVar37 * fVar33;
  }
  else {
    fVar20 = *(float *)(param_5 + 0x20);
    fVar24 = *(float *)(param_5 + 0x24);
    fVar16 = *(float *)(param_5 + 0x28);
  }
  param_2[0x2e] = fVar20;
  param_2[0x2f] = fVar24;
  param_2[0x30] = fVar16;
  fVar24 = *(float *)(param_5 + 0x28);
  *(undefined8 *)(param_2 + 0x2b) = *(undefined8 *)(param_5 + 0x20);
  param_2[0x2d] = fVar24;
  if (param_7[3] <= 0.0) {
    fVar24 = *(float *)(param_5 + 0x50);
  }
  else {
    fVar24 = 1.4013e-45;
  }
  param_2[0x5e] = fVar24;
  param_2[0x5f] = *(float *)(param_5 + 0x54);
  fVar24 = *(float *)(param_9 + 0x1dc);
  fVar29 = *(float *)(param_9 + 0x1e0);
  fVar20 = *(float *)(param_9 + 0x1e4);
  fVar31 = *(float *)(param_9 + 0x1e8);
  if (cRam0000000003ca34fc == '\0') {
    func_0x00f78a20(0x3d232c0);
    cRam0000000003ca34fc = '\x01';
  }
  if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *param_2 = SQRT(fVar31 * fVar31 + fVar20 * fVar20 + fVar24 * fVar24 + fVar29 * fVar29);
  fVar20 = (float)((ulong)*(undefined8 *)(param_9 + 0x1b4) >> 0x20) *
           (float)((ulong)*(undefined8 *)(param_9 + 0x1e4) >> 0x20) +
           (float)*(undefined8 *)(param_9 + 0x1b4) * (float)*(undefined8 *)(param_9 + 0x1e4) +
           (float)*(undefined8 *)(param_9 + 0x1ac) * (float)*(undefined8 *)(param_9 + 0x1dc) +
           (float)((ulong)*(undefined8 *)(param_9 + 0x1ac) >> 0x20) *
           (float)((ulong)*(undefined8 *)(param_9 + 0x1dc) >> 0x20);
  param_2[1] = fVar20;
  fVar29 = *(float *)(param_9 + 0x1c8) * *(float *)(param_9 + 0x1e8) +
           *(float *)(param_9 + 0x1c4) * *(float *)(param_9 + 0x1e4) +
           *(float *)(param_9 + 0x1bc) * *(float *)(param_9 + 0x1dc) +
           *(float *)(param_9 + 0x1c0) * *(float *)(param_9 + 0x1e0);
  param_2[2] = fVar29;
  fVar24 = *(float *)(param_9 + 0x1e0);
  param_2[3] = *(float *)(param_9 + 0x1d8) * *(float *)(param_9 + 0x1e8) +
               *(float *)(param_9 + 0x1d4) * *(float *)(param_9 + 0x1e4) +
               *(float *)(param_9 + 0x1cc) * *(float *)(param_9 + 0x1dc) +
               *(float *)(param_9 + 0x1d0) * fVar24;
  param_2[4] = fVar24;
  fVar24 = 1.0;
  if (fVar20 == 0.0 || 0.0 > fVar20) {
    fVar24 = 0.0;
  }
  fVar31 = 1.0;
  if (0.0 <= fVar20) {
    fVar31 = 0.0;
  }
  param_2[5] = fVar24 - fVar31;
  if (cRam0000000003ca350a == '\0') {
    func_0x00f78a20(0x3d232c0);
    cRam0000000003ca350a = '\x01';
  }
  if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) == 0) ||
     (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) != 0)) {
    cVar15 = '\x01';
  }
  else {
    func_0x00f78ad0();
    cVar15 = cRam0000000003ca350a;
  }
  dVar17 = (double)_atan2((double)fVar29,(double)((fVar24 - fVar31) * fVar20));
  param_2[6] = (float)dVar17;
  fVar24 = *(float *)(param_9 + 0x1fc);
  fVar29 = *(float *)(param_9 + 0x200);
  fVar33 = *(float *)(param_9 + 0x204);
  fVar20 = *(float *)(param_9 + 0x208);
  fVar31 = fVar24 + fVar24;
  fVar16 = fVar29 + fVar29;
  fVar32 = fVar33 * (fVar33 + fVar33);
  if (cVar15 == '\0') {
    func_0x00f78a20(0x3d232c0);
    cRam0000000003ca350a = '\x01';
  }
  if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) == 0) ||
     (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) != 0)) {
    cVar15 = '\x01';
  }
  else {
    func_0x00f78ad0();
    cVar15 = cRam0000000003ca350a;
  }
  dVar17 = (double)_atan2((double)(fVar31 * fVar20 - fVar16 * fVar33),
                          (double)((1.0 - fVar24 * fVar31) - fVar32));
  param_2[0x22] = -(float)dVar17;
  if (cVar15 == '\0') {
    func_0x00f78a20(0x3d232c0);
    cRam0000000003ca350a = '\x01';
  }
  if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  dVar17 = (double)_atan2((double)(fVar16 * fVar20 - fVar31 * fVar33),
                          (double)((1.0 - fVar29 * fVar16) - fVar32));
  param_2[0x23] = (float)dVar17;
  if (cRam0000000003ca350b == '\0') {
    func_0x00f78a20(0x3d232c0);
    cRam0000000003ca350b = '\x01';
  }
  if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  dVar17 = (double)_asin((double)(fVar31 * fVar29 + (fVar33 + fVar33) * fVar20));
  param_2[0x24] = -(float)dVar17;
  fVar24 = param_2[0x31];
  fVar29 = param_2[0x32];
  fVar20 = param_2[0x33];
  if (cRam0000000003ca34fd == '\0') {
    func_0x00f78a20(0x3d232c0);
    cRam0000000003ca34fd = '\x01';
  }
  if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) == 0) ||
     (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) != 0)) {
    cVar15 = '\x01';
  }
  else {
    func_0x00f78ad0();
    cVar15 = cRam0000000003ca34fd;
  }
  dVar17 = (double)_acos((double)(fVar24 * 0.0 + fVar29 + fVar20 * 0.0));
  param_2[0x11] = (float)dVar17;
  *(bool *)(param_2 + 0x10) = *(float *)(param_9 + 0x4c) < (float)dVar17;
  fVar24 = *(float *)(param_9 + 0x1b8) * 0.0 +
           *(float *)(param_9 + 0x1ac) * 0.0 + *(float *)(param_9 + 0x1b0) +
           *(float *)(param_9 + 0x1b4) * 0.0;
  if (cVar15 == '\0') {
    func_0x00f78a20(0x3d232c0);
    cRam0000000003ca34fd = '\x01';
  }
  if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  dVar17 = (double)_acos((double)ABS(fVar24));
  fVar20 = 1.0;
  fVar29 = fVar20;
  if (fVar24 == 0.0 || 0.0 > fVar24) {
    fVar29 = 0.0;
  }
  if (0.0 <= fVar24) {
    fVar20 = 0.0;
  }
  param_2[0x12] = (fVar29 - fVar20) * (_UNK_033f8b50 - (float)dVar17);
  fVar24 = param_2[9];
  *(bool *)(param_2 + 0xf) = fVar24 != 0.0;
  cVar15 = *(char *)((long)param_2 + 0x3d);
  *(char *)((long)param_2 + 0x3e) = cVar15;
  cVar11 = *(char *)((long)param_2 + 0x3f);
  bVar4 = cVar11 == '\0';
  bVar3 = bVar4 && fVar24 == 0.0;
  *(bool *)((long)param_2 + 0x3d) = bVar3;
  switch(param_2[0x13]) {
  case 0.0:
    if (cVar11 != '\0') {
      cVar11 = '\x01';
      param_2[0x13] = 1.4013e-45;
    }
    break;
  case 1.4013e-45:
    if ((cVar11 != '\0') && (fVar24 == 0.0)) {
      param_2[0x13] = 2.8026e-45;
      param_2[0x14] = 0.0;
      cVar11 = '\x01';
    }
    break;
  case 2.8026e-45:
    fVar29 = param_2[0x14] + *(float *)(param_9 + 0x228);
    param_2[0x14] = fVar29;
    if ((fVar24 != 0.0 || cVar11 == '\0') && (_UNK_033f8144 < fVar29)) {
      param_2[0x13] = 4.2039e-45;
    }
    break;
  case 4.2039e-45:
    cVar11 = '\0';
    param_2[0x13] = 0.0;
    *(undefined1 *)((long)param_2 + 0x3f) = 0;
    param_6[9] = 1;
  }
  if ((!bVar4 || fVar24 != 0.0) && cVar15 != '\0') {
    puVar1 = param_6 + 9;
    if (-*(float *)(param_9 + 0x1e0) <= *(float *)(param_9 + 0x54)) {
      puVar1 = param_6 + 1;
    }
    *puVar1 = 1;
    if (*(char *)(param_7 + 0x12) != '\0') {
      param_7[0xf] = *(float *)(param_9 + 0x28);
      param_7[0x10] = *(float *)(param_9 + 0x34);
    }
    *(undefined1 *)(param_7 + 0x12) = 0;
  }
  if ((cVar11 != '\0') && (*(char *)(param_7 + 0x12) != '\0')) {
    param_7[0xf] = *(float *)(param_9 + 0x28);
    param_7[0x10] = *(float *)(param_9 + 0x34);
    *(undefined1 *)(param_7 + 0x12) = 0;
  }
  if (*(char *)(param_8 + 0x1c) == '\0') {
code_r0x015d6364:
    if (0.0 < param_2[0x19]) {
      if (fVar24 != 0.0) {
        param_2[0x1a] =
             param_2[0x1a] +
             *(float *)(param_9 + 0x228) *
             (*(float *)(param_9 + 0x140) +
             ((ABS(*(float *)(param_8 + 4)) - *(float *)(param_9 + 0xc0)) /
             (*(float *)(param_9 + 0xc4) - *(float *)(param_9 + 0xc0))) *
             (*(float *)(param_9 + 0x13c) - *(float *)(param_9 + 0x140)));
      }
      goto code_r0x015d63c8;
    }
code_r0x015d64b8:
    if ((0.0 < *(float *)(param_8 + 0x18)) &&
       (((*(char *)((long)param_2 + 0x55) != '\0' ||
         (*(char *)((long)param_2 + 0x56) != '\0' || bVar3)) || (cVar15 != '\0')))) {
      _memcpy(auStack_218,param_9,0x144);
      uVar27 = *(undefined4 *)(param_8 + 4);
      _memcpy(&uStack_3b8,param_2,0x19c);
      uVar30 = *(undefined4 *)(param_9 + 0x248);
      if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartPhysics_TypeInfo*/ lRam0000000003d22cc8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Kart.KartPhysics_TypeInfo*/ lRam0000000003d22cc8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      _memcpy(auStack_500,auStack_218,0x144);
      _memcpy(auStack_6a0,&uStack_3b8,0x19c);
      iVar6 = Atlas_Gameplay_Kart_KartPhysics__IsDriftingStateRequirementsMet
                        (uVar27,uVar30,auStack_500,auStack_6a0,0);
      if (iVar6 != 0) {
        param_6[4] = 1;
        param_2[0x19] = 1.0;
        fVar29 = *(float *)(param_8 + 4);
        fVar20 = 1.0;
        fVar24 = fVar20;
        if (fVar29 == 0.0 || 0.0 > fVar29) {
          fVar24 = 0.0;
        }
        if (0.0 <= fVar29) {
          fVar20 = 0.0;
        }
        param_2[0x1b] = fVar24 - fVar20;
      }
    }
  }
  else {
    if (fVar24 != 0.0) {
      if ((*(char *)((long)param_2 + 0x56) == '\0') &&
         ((param_2[0x19] <= 0.0 || (*(float *)(param_8 + 0x18) == 0.0)))) {
        *(undefined1 *)((long)param_2 + 0x55) = 1;
        *param_6 = 1;
      }
      goto code_r0x015d6364;
    }
    if (param_2[0x19] <= 0.0) goto code_r0x015d64b8;
code_r0x015d63c8:
    fVar24 = param_2[1];
    fVar29 = *(float *)(param_9 + 0x10) * *(float *)(param_9 + 0x248);
    Atlas_Gameplay_Kart_KartPhysicsFixedUpdateAllJob__GetBoostLevelFromDriftTime
              (&uStack_3b8,param_2[0x1a],param_1);
    uStack_c8 = uStack_3b0;
    uStack_d0 = uStack_3b8;
    uStack_bc = (undefined4)uStack_3a4;
    uStack_b8 = (undefined4)((ulong)uStack_3a4 >> 0x20);
    uStack_c4 = uStack_3ac;
    uStack_c0 = uStack_3a8;
    *(ulong *)(param_2 + 0x62) = CONCAT44(uStack_3ac,uStack_3b0);
    *(undefined8 *)(param_2 + 0x60) = uStack_3b8;
    *(undefined8 *)(param_2 + 0x65) = uStack_3a4;
    *(ulong *)(param_2 + 99) = CONCAT44(uStack_3a8,uStack_3ac);
    if ((fVar24 < fVar29) || (*(float *)(param_8 + 0x18) == 0.0)) {
      uVar5 = Atlas_Gameplay_Kart_DriftBoostLevel__IsValid(&uStack_d0,0);
      uVar5 = uVar5 ^ 1 | (uint)(fVar24 < fVar29);
      fVar24 = 0.0;
      if (uVar5 == 0) {
        fVar24 = (float)uStack_d0;
      }
      iVar6 = -(uint)(uVar5 != 0);
      bVar21 = (byte)((uint)iVar6 >> 8);
      bVar22 = (byte)((uint)iVar6 >> 0x10);
      bVar23 = (byte)((uint)iVar6 >> 0x18);
      param_6[10] = (byte)uVar5 ^ 1;
      *(ulong *)(param_2 + 0x1d) =
           CONCAT17((byte)((uint)uStack_c4 >> 0x18) & ~bVar23,
                    CONCAT16((byte)((uint)uStack_c4 >> 0x10) & ~bVar22,
                             CONCAT15((byte)((uint)uStack_c4 >> 8) & ~bVar21,
                                      CONCAT14((byte)uStack_c4 & ~(byte)iVar6,
                                               CONCAT13((byte)((uint)uStack_c8 >> 0x18) & ~bVar23,
                                                        CONCAT12((byte)((uint)uStack_c8 >> 0x10) &
                                                                 ~bVar22,CONCAT11((byte)((uint)
                                                  uStack_c8 >> 8) & ~bVar21,
                                                  (byte)uStack_c8 & ~(byte)iVar6)))))));
      param_2[0x1c] = fVar24;
      param_2[0x1a] = 0.0;
      param_2[0x1b] = 0.0;
      param_2[0x19] = 0.0;
      param_6[5] = 1;
      if (((*(byte *)(/*Atlas.Gameplay.Kart.DriftBoostLevel_TypeInfo*/ lRam0000000003d21468 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Kart.DriftBoostLevel_TypeInfo*/ lRam0000000003d21468 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      puVar7 = *(undefined8 **)(/*Atlas.Gameplay.Kart.DriftBoostLevel_TypeInfo*/ lRam0000000003d21468 + 0xb8);
      uVar19 = puVar7[1];
      uVar18 = *puVar7;
      uVar9 = puVar7[2];
      param_2[0x66] = *(float *)(puVar7 + 3);
      *(undefined8 *)(param_2 + 100) = uVar9;
      *(undefined8 *)(param_2 + 0x62) = uVar19;
      *(undefined8 *)(param_2 + 0x60) = uVar18;
    }
  }
  fVar29 = param_2[0xc];
  fVar24 = 0.0;
  if (fVar29 <= 0.0) {
    fVar20 = 0.0;
  }
  else {
    fVar20 = fVar29 - *(float *)(param_9 + 0x228);
  }
  *(bool *)(param_2 + 0xb) = 0.0 < fVar29;
  param_2[0xc] = fVar20;
  fVar29 = param_2[0xe];
  if (0.0 < fVar29) {
    fVar24 = fVar29 - *(float *)(param_9 + 0x228);
  }
  *(bool *)(param_2 + 0xd) = 0.0 < fVar29;
  param_2[0xe] = fVar24;
  param_2[0x17] = 0.0;
  *(undefined1 *)(param_2 + 0x18) = 1;
  if (0.0 < param_7[3]) {
    param_2[0x17] = 1.0;
    *(undefined1 *)(param_2 + 0x18) = *(undefined1 *)(param_7 + 6);
  }
  if (((0.0 < *param_7) || (0.0 < param_7[7])) || (0.0 < param_7[0xf])) {
    param_2[0x17] = 1.0;
    *(undefined1 *)(param_2 + 0x18) = 1;
  }
  if ((param_7[0xb] <= 0.0) || (*(float *)(param_8 + 0xc) <= 0.0)) {
    if (*(char *)(param_2 + 0x15) != '\0') {
      param_6[7] = 1;
    }
    *(undefined1 *)(param_2 + 0x15) = 0;
  }
  else {
    if (*(char *)(param_2 + 0x15) == '\0') {
      param_6[6] = 1;
    }
    *(undefined1 *)(param_2 + 0x15) = 1;
  }
  cVar15 = *(char *)((long)param_2 + 0x3d);
  if ((*(char *)((long)param_2 + 0x3e) != '\0') == (cVar15 != '\0')) {
    fVar20 = param_2[0x37];
    fVar29 = param_2[0x38];
    fVar24 = param_2[0x39];
    if (fVar24 * fVar24 + fVar20 * fVar20 + fVar29 * fVar29 == 0.0) goto code_r0x015d6700;
    if (*(char *)((long)param_2 + 0x3f) != '\0') {
      fVar20 = param_2[0x31];
      fVar29 = param_2[0x32];
      fVar24 = param_2[0x33];
      goto code_r0x015d67a4;
    }
    if (cVar15 != '\0') goto code_r0x015d67b4;
    bVar4 = param_2[9] != 5.60519e-45;
    lVar10 = 0xbc;
    if (bVar4) {
      lVar10 = 0xb0;
    }
    lVar12 = 0xc0;
    if (bVar4) {
      lVar12 = 0xb4;
    }
    fVar24 = *(float *)((long)param_2 + lVar12);
    fVar29 = *(float *)((long)param_2 + lVar10);
    lVar10 = 0xb8;
    if (bVar4) {
      lVar10 = 0xac;
    }
    fVar20 = *(float *)((long)param_2 + lVar10);
    param_2[0x37] = fVar20;
    param_2[0x38] = fVar29;
    param_2[0x39] = fVar24;
code_r0x015d680c:
    pfVar8 = (float *)(param_9 + 0x9c);
  }
  else {
code_r0x015d6700:
    *(undefined8 *)(param_2 + 0x37) = _UNK_033f83a8;
    param_2[0x39] = 0.0;
    fVar24 = 0.0;
    if (0.5 <= ABS(*(float *)(param_9 + 0x1c8) * 0.0 +
                   *(float *)(param_9 + 0x1bc) * 0.0 + *(float *)(param_9 + 0x1c0) +
                   *(float *)(param_9 + 0x1c4) * 0.0)) {
      fVar29 = 1.0;
      fVar20 = 0.0;
      if (cVar15 == '\0') {
        fVar31 = param_2[0x2c];
        goto code_r0x015d6788;
      }
    }
    else {
      fVar31 = param_2[0x2c];
      if (0.25 <= ABS(fVar31)) {
        fVar29 = 1.0;
        fVar20 = 0.0;
        fVar24 = 0.0;
        if (cVar15 != '\0') goto code_r0x015d67b4;
      }
code_r0x015d6788:
      fVar20 = param_2[0x2b];
      fVar24 = param_2[0x2d];
      fVar29 = fVar31;
code_r0x015d67a4:
      param_2[0x37] = fVar20;
      param_2[0x38] = fVar29;
      param_2[0x39] = fVar24;
      if (cVar15 == '\0') goto code_r0x015d680c;
    }
code_r0x015d67b4:
    pfVar8 = (float *)(param_9 + 0xe0);
  }
  fVar31 = *pfVar8 * _UNK_033f7d80;
  fVar32 = param_2[0x31];
  fVar33 = param_2[0x32];
  fVar16 = param_2[0x33];
  if (cRam0000000003ca34fc == '\0') {
    func_0x00f78a20(0x3d232c0);
    cRam0000000003ca34fc = '\x01';
  }
  fVar32 = fVar32 + fVar31 * (fVar20 - fVar32);
  fVar33 = fVar33 + fVar31 * (fVar29 - fVar33);
  fVar16 = fVar16 + fVar31 * (fVar24 - fVar16);
  if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) == 0) ||
     (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) != 0)) {
    bVar4 = false;
  }
  else {
    func_0x00f78ad0();
    bVar4 = cRam0000000003ca34fc == '\0';
  }
  fVar24 = 1.0 / SQRT(fVar16 * fVar16 + fVar32 * fVar32 + fVar33 * fVar33);
  param_2[0x31] = fVar32 * fVar24;
  param_2[0x32] = fVar33 * fVar24;
  param_2[0x33] = fVar16 * fVar24;
  fVar24 = *(float *)(param_9 + 0x1ac);
  fVar20 = *(float *)(param_9 + 0x1b0);
  fVar31 = *(float *)(param_9 + 0x1b4);
  param_2[0x3a] = fVar24;
  param_2[0x3b] = fVar20;
  fVar29 = fVar20 * param_2[0x37] - fVar24 * param_2[0x38];
  fVar20 = fVar31 * param_2[0x38] - fVar20 * param_2[0x39];
  param_2[0x3c] = fVar31;
  param_2[0x3d] = fVar20;
  fVar24 = fVar24 * param_2[0x39] - fVar31 * param_2[0x37];
  param_2[0x3e] = fVar24;
  param_2[0x3f] = fVar29;
  if (bVar4) {
    func_0x00f78a20(0x3d232c0);
    cRam0000000003ca34fc = '\x01';
  }
  if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) == 0) ||
     (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) != 0)) {
    bVar4 = false;
  }
  else {
    func_0x00f78ad0();
    bVar4 = cRam0000000003ca34fc == '\0';
  }
  fVar31 = 1.0 / SQRT(fVar29 * fVar29 + fVar20 * fVar20 + fVar24 * fVar24);
  fVar20 = fVar20 * fVar31;
  fVar24 = fVar24 * fVar31;
  fVar29 = fVar29 * fVar31;
  param_2[0x3e] = fVar24;
  param_2[0x3f] = fVar29;
  fVar31 = fVar24 * param_2[0x39] - fVar29 * param_2[0x38];
  fVar29 = fVar29 * param_2[0x37] - fVar20 * param_2[0x39];
  param_2[0x3a] = fVar31;
  param_2[0x3b] = fVar29;
  fVar24 = fVar20 * param_2[0x38] - fVar24 * param_2[0x37];
  param_2[0x3c] = fVar24;
  param_2[0x3d] = fVar20;
  if (bVar4) {
    func_0x00f78a20(0x3d232c0);
    cRam0000000003ca34fc = '\x01';
  }
  if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  fVar20 = 1.0 / SQRT(fVar24 * fVar24 + fVar31 * fVar31 + fVar29 * fVar29);
  param_2[0x3a] = fVar31 * fVar20;
  param_2[0x3b] = fVar29 * fVar20;
  param_2[0x3c] = fVar24 * fVar20;
  return;
}



// ============================================================
// RVA: 0x15d6a4c | Atlas.Gameplay.Kart.KartPhysicsFixedUpdateAllJob.LngJobExecute
// ============================================================

void Atlas_Gameplay_Kart_KartPhysicsFixedUpdateAllJob__LngJobExecute
               (undefined8 param_1,long param_2,float *param_3,float *param_4,long param_5,
               float *param_6)

{
  long lVar1;
  int iVar2;
  char cVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  param_3[0xe] = 1.0;
  if ((*(char *)(param_4 + 0xf) != '\0') || (param_4[0x17] <= 0.0)) {
    cVar3 = *(char *)((long)param_4 + 0x3f);
    fVar5 = 1.0;
    if (cVar3 != '\0') {
      fVar5 = 0.0;
    }
  }
  else {
    cVar3 = *(char *)((long)param_4 + 0x3f);
    lVar1 = 0x38;
    if (cVar3 != '\0') {
      lVar1 = 0x3c;
    }
    fVar5 = *(float *)((long)param_6 + lVar1);
  }
  if (*(char *)(param_4 + 0x10) != '\0') {
    fVar5 = 0.0;
  }
  param_3[0xe] = fVar5;
  fVar10 = 1.0;
  if (cVar3 == '\0') {
    fVar10 = *(float *)(param_5 + 8) * fVar5;
  }
  fVar12 = *(float *)(param_5 + 0xc);
  if (*(char *)(param_6 + 0x93) == '\0') {
    fVar9 = 1.0;
    if (0.0 < param_3[3]) goto code_r0x015d6b70;
  }
  else {
    param_3[0xe] = 0.0;
    if (0.0 < *param_3) {
      *(undefined1 *)(param_2 + 3) = 1;
    }
    if (0.0 < param_3[7]) {
      *(undefined1 *)(param_2 + 0xb) = 1;
    }
    if (0.0 < param_3[3]) {
      *(undefined1 *)(param_2 + 0xd) = 1;
    }
    param_3[0xf] = 0.0;
    *param_3 = 0.0;
    param_3[7] = 0.0;
    param_3[3] = 0.0;
  }
  fVar9 = param_6[0x94];
code_r0x015d6b70:
  pfVar4 = param_3 + 3;
  fVar8 = param_4[0x22] / param_6[0x45];
  iVar2 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar8,0);
  fVar11 = 1.0;
  if (iVar2 == 0 && fVar8 <= 1.0) {
    fVar11 = fVar8;
  }
  iVar2 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar11,0);
  cVar3 = *(char *)((long)param_4 + 0x3f);
  if (cVar3 == '\0') {
    fVar11 = fVar9 * (*param_6 + *(float *)(param_5 + 0x10) * param_6[9]);
  }
  else {
    fVar8 = 0.0;
    if (iVar2 == 0 && 0.0 <= fVar11) {
      fVar8 = fVar11;
    }
    fVar11 = param_6[0x39] + fVar8 * (param_6[0x3a] - param_6[0x39]);
  }
  if (*(char *)(param_6 + 0x95) != '\0') {
    if (*(char *)(param_6 + 0x99) == '\0') {
      fVar11 = param_6[0x9b];
    }
    else {
      fVar11 = fVar11 * param_6[0x9a];
    }
  }
  fVar8 = (*param_4 * *param_6) / fVar11;
  param_3[0xd] = fVar8;
  if (cVar3 == '\0') {
    fVar6 = fVar9 * param_6[0x8e];
  }
  else {
    fVar6 = param_6[0x8d];
  }
  fVar7 = fVar10 * fVar6 + 0.0;
  param_3[8] = fVar7;
  param_3[9] = fVar10 * fVar6;
  fVar5 = fVar12 * fVar5 * param_6[0x8f] * param_6[0x90];
  param_3[0xb] = fVar5;
  param_3[8] = fVar7 - fVar5;
  fVar10 = param_4[5];
  fVar12 = ABS(param_4[1]) + ABS(param_4[1]);
  iVar2 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar12,0);
  fVar5 = 1.0;
  if (iVar2 == 0 && fVar12 <= 1.0) {
    fVar5 = fVar12;
  }
  iVar2 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar5,0);
  fVar12 = 0.0;
  if (iVar2 == 0 && 0.0 <= fVar5) {
    fVar12 = fVar5;
  }
  fVar10 = fVar10 * fVar12;
  fVar5 = -param_6[0x8b];
  if (*(char *)(param_6 + 0x93) == '\0') {
    fVar12 = param_6[0x96] * param_3[0xe] * *(float *)(param_5 + 0x14) * fVar5 * fVar10;
  }
  else {
    fVar12 = fVar10 * fVar5 * param_6[0x97];
  }
  if ((((*param_6 < fVar8) && (*param_3 <= 0.0)) && (param_3[7] <= 0.0)) && (*pfVar4 <= 0.0)) {
    fVar12 = fVar12 + fVar10 * fVar5 * param_6[0x98];
  }
  param_3[8] = fVar12 + param_3[8];
  fVar9 = fVar11 / fVar9;
  iVar2 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar9,0);
  fVar5 = fVar11;
  if (fVar11 <= fVar9 && iVar2 == 0) {
    fVar5 = fVar9;
  }
  fVar5 = param_6[9] + param_3[1] + fVar5;
  fVar8 = (param_4[1] - fVar5) / (fVar11 - fVar5);
  iVar2 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar8,0);
  fVar10 = 1.0;
  fVar5 = fVar10;
  if (iVar2 == 0 && fVar8 <= 1.0) {
    fVar5 = fVar8;
  }
  iVar2 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar5,0);
  fVar6 = 0.0;
  fVar8 = fVar6;
  if (iVar2 == 0 && 0.0 <= fVar5) {
    fVar8 = fVar5;
  }
  fVar5 = fVar11 + param_3[1] + param_6[9];
  fVar7 = (param_4[1] - fVar5) / (fVar11 - fVar5);
  iVar2 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar7,0);
  fVar5 = fVar10;
  if (iVar2 == 0 && fVar7 <= 1.0) {
    fVar5 = fVar7;
  }
  iVar2 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar5,0);
  fVar7 = fVar6;
  if (iVar2 == 0 && 0.0 <= fVar5) {
    fVar7 = fVar5;
  }
  iVar2 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar9,0);
  fVar5 = fVar11;
  if (fVar11 <= fVar9 && iVar2 == 0) {
    fVar5 = fVar9;
  }
  fVar5 = param_6[9] + param_3[4] + fVar5;
  fVar5 = (param_4[1] - fVar5) / (fVar11 - fVar5);
  iVar2 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar5,0);
  if (iVar2 == 0 && fVar5 <= 1.0) {
    fVar10 = fVar5;
  }
  iVar2 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar10,0);
  fVar5 = 0.0;
  if (iVar2 == 0 && 0.0 <= fVar10) {
    fVar5 = fVar10;
  }
  if (param_3[0xf] <= 0.0) {
    param_3[0xf] = 0.0;
  }
  else {
    param_3[0xf] = param_3[0xf] - param_6[0x8a];
    fVar6 = fVar8 * param_6[0x8c] * param_3[0x10];
  }
  fVar10 = param_3[7];
  if ((*(char *)(param_2 + 10) != '\0') && (fVar10 == 0.0)) {
    fVar10 = param_4[0x1e];
  }
  if (fVar10 <= 0.0) {
    param_3[7] = 0.0;
  }
  else {
    fVar9 = param_6[0x8a];
    param_3[7] = fVar10 - fVar9;
    fVar6 = fVar7 * param_6[0x8c] * param_4[0x1d];
    if (fVar10 - fVar9 <= 0.0) {
      *(undefined1 *)(param_2 + 0xb) = 1;
    }
  }
  if (*param_3 <= 0.0) {
    *param_3 = 0.0;
  }
  else {
    fVar10 = *param_3 - param_6[0x8a];
    *param_3 = fVar10;
    fVar6 = fVar8 * param_6[0x8c] * param_3[2];
    if (fVar10 <= 0.0) {
      *(undefined1 *)(param_2 + 3) = 1;
    }
  }
  if (*pfVar4 <= 0.0) {
    *pfVar4 = 0.0;
  }
  else {
    fVar10 = *pfVar4 - param_6[0x8a];
    param_3[3] = fVar10;
    fVar6 = fVar5 * param_6[0x8c] * param_3[5];
    if (fVar10 <= 0.0) {
      *(undefined1 *)(param_2 + 0xd) = 1;
    }
  }
  param_3[8] = param_3[8] + fVar6 * param_3[0xe];
  param_3[10] = fVar12;
  param_3[0xc] = fVar6;
  return;
}



// ============================================================
// RVA: 0x15d6ffc | Atlas.Gameplay.Kart.KartPhysicsFixedUpdateAllJob.LatJobExecute
// ============================================================

void Atlas_Gameplay_Kart_KartPhysicsFixedUpdateAllJob__LatJobExecute
               (undefined8 param_1,float *param_2,long param_3,long param_4,long param_5)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (*(char *)(param_3 + 0x3f) == '\0') {
    fVar4 = *(float *)(param_3 + 100);
    fVar2 = *(float *)(param_5 + 0x2e0) * *(float *)(param_5 + 0x270);
    fVar2 = fVar2 + (*(float *)(param_5 + 0x2e4) - fVar2) * fVar4;
  }
  else {
    fVar2 = *(float *)(param_5 + 0x2ec);
    fVar4 = *(float *)(param_3 + 100);
  }
  fVar5 = *(float *)(param_5 + 0x25c);
  *param_2 = fVar2;
  if (0.0 < fVar4) {
    fVar2 = *(float *)(param_5 + 0x2e4) * *(float *)(param_5 + 0x274);
    fVar7 = *(float *)(param_5 + 0x2e8) * *(float *)(param_5 + 0x278);
    fVar6 = fVar2 + (fVar7 - *(float *)(param_5 + 0x2e4)) * 0.5;
    fVar4 = ABS(*(float *)(param_4 + 4));
    fVar3 = *(float *)(param_5 + 200);
    if (fVar3 <= fVar4) {
      fVar4 = (fVar4 - fVar3) / (*(float *)(param_5 + 0xc4) - fVar3);
      iVar1 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar4,0);
      fVar2 = 1.0;
      if (iVar1 == 0 && fVar4 <= 1.0) {
        fVar2 = fVar4;
      }
      iVar1 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar2,0);
      fVar4 = 0.0;
      if (iVar1 == 0 && 0.0 <= fVar2) {
        fVar4 = fVar2;
      }
      fVar2 = fVar6 + (fVar7 - fVar6) * fVar4;
    }
    else {
      fVar3 = (fVar4 - *(float *)(param_5 + 0xc0)) / (fVar3 - *(float *)(param_5 + 0xc0));
      iVar1 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar3,0);
      fVar4 = 1.0;
      if (iVar1 == 0 && fVar3 <= 1.0) {
        fVar4 = fVar3;
      }
      iVar1 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar4,0);
      fVar3 = 0.0;
      if (iVar1 == 0 && 0.0 <= fVar4) {
        fVar3 = fVar4;
      }
      fVar2 = fVar2 + (fVar6 - fVar2) * fVar3;
    }
  }
  fVar5 = fVar5 * fVar2 * -*(float *)(param_3 + 8);
  *param_2 = fVar5;
  fVar2 = 1.0;
  if (0.0 <= *(float *)(param_3 + 8)) {
    fVar2 = 0.0;
  }
  fVar4 = 1.0;
  if (*(float *)(param_3 + 8) <= 0.0) {
    fVar4 = 0.0;
  }
  *param_2 = fVar5 + *(float *)(param_5 + 0x244) * *(float *)(param_4 + 0x14) * (fVar2 - fVar4);
  return;
}



// ============================================================
// RVA: 0x15d71dc | Atlas.Gameplay.Kart.KartPhysicsFixedUpdateAllJob.VertJobExecute
// ============================================================

void Atlas_Gameplay_Kart_KartPhysicsFixedUpdateAllJob__VertJobExecute
               (undefined8 param_1,float *param_2,long param_3,long param_4)

{
  *param_2 = 0.0;
  if (*(char *)(param_3 + 0x3f) != '\0') {
    *param_2 = *(float *)(param_4 + 0x2f0) * -*(float *)(param_3 + 0xc);
  }
  return;
}



// ============================================================
// RVA: 0x15d7200 | Atlas.Gameplay.Kart.KartPhysicsFixedUpdateAllJob.GlidingJobExecute
// ============================================================

void Atlas_Gameplay_Kart_KartPhysicsFixedUpdateAllJob__GlidingJobExecute
               (undefined8 param_1,float *param_2,long param_3,long param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  if (*(char *)(param_3 + 0x3f) == '\0') {
    fVar2 = 0.0;
  }
  else {
    fVar3 = *(float *)(param_3 + 0x88) / *(float *)(param_4 + 0x114);
    iVar1 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar3,0);
    fVar2 = 1.0;
    if (iVar1 == 0 && fVar3 <= 1.0) {
      fVar2 = fVar3;
    }
    iVar1 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar2,0);
    fVar3 = 0.0;
    if (iVar1 == 0 && 0.0 <= fVar2) {
      fVar3 = fVar2;
    }
    fVar2 = *(float *)(param_4 + 0x2f4) +
            (*(float *)(param_4 + 0x2f8) - *(float *)(param_4 + 0x2f4)) * fVar3;
  }
  *param_2 = fVar2;
  return;
}



// ============================================================
// RVA: 0x15d72a4 | Atlas.Gameplay.Kart.KartPhysicsFixedUpdateAllJob.BodyCompensationExecute
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Kart_KartPhysicsFixedUpdateAllJob__BodyCompensationExecute
               (undefined8 param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  fVar18 = param_5[0xc0];
  fVar20 = param_5[0xc1];
  fVar4 = param_5[0xc2];
  fVar7 = param_5[0xc3];
  param_2[7] = 0.0;
  param_2[8] = 0.0;
  param_2[0x56] = 0.0;
  param_2[0x57] = 0.0;
  param_2[0x58] = 0.0;
  param_2[0x59] = 0.0;
  if ((*(char *)((long)param_2 + 0x3f) == '\0') &&
     ((*(char *)((long)param_2 + 0x3d) == '\0' || (*(char *)((long)param_2 + 0x56) != '\0')))) {
    fVar7 = 1.0 - (param_2[0x11] - fVar4) / (fVar7 - fVar4);
    iVar1 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar7,0);
    fVar4 = 1.0;
    if (iVar1 == 0 && fVar7 <= 1.0) {
      fVar4 = fVar7;
    }
    iVar1 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar4,0);
    fVar7 = 0.0;
    if (iVar1 == 0 && 0.0 <= fVar4) {
      fVar7 = fVar4;
    }
    fVar4 = (float)((ulong)*(undefined8 *)(param_5 + 0x6d) >> 0x20) *
            (float)((ulong)*(undefined8 *)(param_5 + 0x85) >> 0x20) +
            (float)*(undefined8 *)(param_5 + 0x6d) * (float)*(undefined8 *)(param_5 + 0x85) +
            (float)*(undefined8 *)(param_5 + 0x6b) * (float)*(undefined8 *)(param_5 + 0x83) +
            (float)((ulong)*(undefined8 *)(param_5 + 0x6b) >> 0x20) *
            (float)((ulong)*(undefined8 *)(param_5 + 0x83) >> 0x20);
    if (param_5[0x87] * fVar4 <= 0.0) {
      fVar20 = fVar18;
    }
    param_2[7] = fVar7 * fVar20 * -(param_5[0x87] * fVar4);
    fVar20 = *param_4;
    fVar4 = param_4[1];
    fVar7 = param_4[2];
    fVar18 = param_4[3];
    fVar12 = param_5[0x6f];
    fVar13 = param_5[0x70];
    fVar14 = param_5[0x71];
    fVar15 = param_5[0x72];
    fVar21 = *param_3;
    if ((param_2[0x19] <= 0.0) || (*(char *)(param_2 + 0xf) == '\0')) {
      pfVar2 = param_5 + 0x29;
      pfVar3 = param_5 + 0x89;
    }
    else {
      pfVar2 = param_5 + 0x2e;
      pfVar3 = param_5 + 0x88;
    }
    fVar5 = *pfVar2;
    fVar8 = *pfVar3;
    fVar11 = *param_5 * _UNK_033f8754;
    fVar16 = (*param_2 - fVar11) / (*param_5 * _UNK_033f84b0 - fVar11);
    iVar1 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar16,0);
    fVar19 = 1.0;
    fVar11 = fVar19;
    if (iVar1 == 0 && fVar16 <= 1.0) {
      fVar11 = fVar16;
    }
    iVar1 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar11,0);
    fVar6 = 0.0;
    fVar16 = fVar6;
    if (iVar1 == 0 && 0.0 <= fVar11) {
      fVar16 = fVar11;
    }
    fVar11 = ABS(param_2[1]);
    iVar1 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar11,0);
    fVar17 = fVar19;
    if (iVar1 == 0 && fVar11 <= 1.0) {
      fVar17 = fVar11;
    }
    iVar1 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar17,0);
    fVar11 = fVar6;
    if (iVar1 == 0 && 0.0 <= fVar17) {
      fVar11 = fVar17;
    }
    fVar20 = fVar5 * fVar8 * fVar16 * fVar11 *
             -(fVar18 * fVar15 * fVar21 +
              fVar7 * fVar14 * fVar21 + fVar20 * fVar12 * fVar21 + fVar4 * fVar13 * fVar21);
    param_2[8] = fVar20;
    if (param_2[0x19] <= 0.0) {
      uVar9 = CONCAT44((float)((ulong)*(undefined8 *)param_4 >> 0x20) * fVar20,
                       (float)*(undefined8 *)param_4 * fVar20);
      uVar10 = CONCAT44((float)((ulong)*(undefined8 *)(param_4 + 2) >> 0x20) * fVar20,
                        (float)*(undefined8 *)(param_4 + 2) * fVar20);
    }
    else {
      fVar7 = 1.0 - param_5[0x2f];
      iVar1 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar7,0);
      fVar4 = fVar19;
      if (iVar1 == 0 && fVar7 <= 1.0) {
        fVar4 = fVar7;
      }
      iVar1 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar4,0);
      fVar7 = fVar6;
      if (iVar1 == 0 && 0.0 <= fVar4) {
        fVar7 = fVar4;
      }
      fVar20 = fVar20 * fVar7;
      fVar4 = param_2[0x1b];
      fVar7 = param_2[8];
      fVar18 = param_5[0x2f];
      uVar10 = *(undefined8 *)(param_4 + 2);
      uVar9 = *(undefined8 *)param_4;
      iVar1 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar18,0);
      if (fVar18 <= 1.0 && iVar1 == 0) {
        fVar19 = fVar18;
      }
      iVar1 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar19,0);
      if (iVar1 == 0 && 0.0 <= fVar19) {
        fVar6 = fVar19;
      }
      fVar6 = fVar7 * -fVar4 * fVar6;
      uVar9 = CONCAT44((float)((ulong)uVar9 >> 0x20) * fVar20 +
                       (float)((ulong)*(undefined8 *)(param_5 + 0x6f) >> 0x20) * fVar6,
                       (float)uVar9 * fVar20 + (float)*(undefined8 *)(param_5 + 0x6f) * fVar6);
      uVar10 = CONCAT44((float)((ulong)uVar10 >> 0x20) * fVar20 +
                        (float)((ulong)*(undefined8 *)(param_5 + 0x71) >> 0x20) * fVar6,
                        (float)uVar10 * fVar20 + (float)*(undefined8 *)(param_5 + 0x71) * fVar6);
    }
    *(undefined8 *)(param_2 + 0x58) = uVar10;
    *(undefined8 *)(param_2 + 0x56) = uVar9;
  }
  return;
}



// ============================================================
// RVA: 0x15d7608 | Atlas.Gameplay.Kart.KartPhysicsFixedUpdateAllJob.GlidingRotJobExecute
// ============================================================

/* WARNING: Type propagation algorithm not settling */

void Atlas_Gameplay_Kart_KartPhysicsFixedUpdateAllJob__GlidingRotJobExecute
               (undefined8 param_1,long param_2,long param_3,undefined8 *param_4,long param_5,
               long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fStack_b8;
  float afStack_b4 [3];
  float fStack_a8;
  float fStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  if (*(char *)(param_3 + 0x3f) != '\0') {
    *(undefined4 *)(param_2 + 0x24) = 0;
    *(undefined4 *)(param_2 + 0x38) = 0;
    *(undefined4 *)(param_2 + 0x10) = 0;
    fVar5 = *(float *)(param_5 + 0x24);
    fVar4 = (float)/*Unity.Mathematics.float2$$op_Implicit*/ func_0x030c22cc(*(undefined4 *)(param_5 + 0x20),0);
    uStack_98 = param_4[1];
    uStack_a0 = *param_4;
    lVar3 = 0x114;
    if (*(float *)(param_3 + 0x88) <= 0.0) {
      lVar3 = 0x118;
    }
    fVar12 = (*(float *)(param_6 + lVar3) - ABS(*(float *)(param_3 + 0x88))) /
             *(float *)(param_6 + lVar3);
    fVar11 = (*(float *)(param_6 + 0x11c) - ABS(*(float *)(param_3 + 0x90))) /
             *(float *)(param_6 + 0x11c);
    fStack_a4 = fVar4 * *(float *)(param_6 + 0xec);
    lVar3 = param_6 + 800;
    lVar1 = param_6 + 0x31c;
    lVar2 = param_6 + 0x228;
    /*Atlas.Gameplay.Kart.KartPhysicsFixedUpdateAllJob$$UpdateAngleVelControl*/ func_0x015d78b8(param_2,&fStack_a4,(ulong)&uStack_a0 | 4,lVar3,lVar1,lVar2);
    fVar9 = 1.0;
    fVar10 = 1.0;
    if (fVar5 == 0.0 || 0.0 > fVar5) {
      fVar9 = 0.0;
    }
    fVar6 = fVar10;
    if (0.0 <= fVar5) {
      fVar6 = 0.0;
    }
    fVar7 = fVar10;
    if (0.0 <= *(float *)(param_3 + 0x88)) {
      fVar7 = 0.0;
    }
    fVar8 = fVar10;
    if (*(float *)(param_3 + 0x88) <= 0.0) {
      fVar8 = 0.0;
    }
    if (fVar9 - fVar6 != fVar7 - fVar8) {
      fVar12 = 1.0;
    }
    fStack_a8 = fVar5 * *(float *)(param_6 + 0xf4) * fVar12;
    /*Atlas.Gameplay.Kart.KartPhysicsFixedUpdateAllJob$$UpdateAngleVelControl*/ func_0x015d78b8(param_2 + 0x14,&fStack_a8,&uStack_a0,lVar3,lVar1,lVar2);
    afStack_b4[1] = 0.0;
    afStack_b4[0] = -*(float *)(param_3 + 0x88);
    fStack_b8 = (1.0 - ABS(fVar5)) * *(float *)(param_6 + 0x120) * *(float *)(param_6 + 800);
    /*Atlas.Gameplay.Kart.KartPhysicsFixedUpdateAllJob$$UpdateAngleControl*/ func_0x015d78fc(param_2 + 0x14,afStack_b4 + 1,afStack_b4,&fStack_b8,lVar1,lVar2);
    fVar5 = fVar10;
    if (0.0 <= fVar4) {
      fVar5 = 0.0;
    }
    fVar9 = fVar10;
    if (fVar4 <= 0.0) {
      fVar9 = 0.0;
    }
    fVar12 = fVar10;
    if (0.0 <= *(float *)(param_3 + 0x90)) {
      fVar12 = 0.0;
    }
    if (*(float *)(param_3 + 0x90) <= 0.0) {
      fVar10 = 0.0;
    }
    if (fVar5 - fVar9 != fVar12 - fVar10) {
      fVar11 = 1.0;
    }
    afStack_b4[2] = *(float *)(param_6 + 0xf0) * -fVar4 * fVar11;
    /*Atlas.Gameplay.Kart.KartPhysicsFixedUpdateAllJob$$UpdateAngleVelControl*/ func_0x015d78b8(param_2 + 0x28,afStack_b4 + 2,(ulong)&uStack_a0 | 8,lVar3,lVar1,lVar2);
    afStack_b4[1] = 0.0;
    afStack_b4[0] = -*(float *)(param_3 + 0x90);
    fStack_b8 = (1.0 - ABS(fVar4)) * *(float *)(param_6 + 0x124) * *(float *)(param_6 + 800);
    /*Atlas.Gameplay.Kart.KartPhysicsFixedUpdateAllJob$$UpdateAngleControl*/ func_0x015d78fc(param_2 + 0x28,afStack_b4 + 1,afStack_b4,&fStack_b8,lVar1,lVar2);
    fVar4 = *(float *)(param_6 + 800) * *(float *)(param_3 + 0x90) * *(float *)(param_6 + 0xf8);
    fVar5 = *(float *)(param_2 + 0x10) * 0.0;
    fVar9 = *(float *)(param_2 + 0x24) * 0.0;
    fVar12 = *(float *)(param_2 + 0x38) * 0.0;
    *(float *)(param_2 + 0x3c) = fVar4;
    *(float *)(param_2 + 0x40) = fVar5 + *(float *)(param_2 + 0x24) + fVar12;
    *(float *)(param_2 + 0x44) = *(float *)(param_2 + 0x10) + fVar9 + fVar12;
    *(float *)(param_2 + 0x48) = *(float *)(param_2 + 0x38) + fVar5 + fVar9;
    *(float *)(param_2 + 0x4c) = fVar4 * 0.0;
    *(float *)(param_2 + 0x50) = fVar4;
    *(float *)(param_2 + 0x54) = fVar4 * 0.0;
  }
  return;
}



// ============================================================
// RVA: 0x15d78b8 | Atlas.Gameplay.Kart.KartPhysicsFixedUpdateAllJob.UpdateAngleVelControl
// ============================================================

void Atlas_Gameplay_Kart_KartPhysicsFixedUpdateAllJob__UpdateAngleVelControl
               (long param_1,float *param_2,float *param_3,float *param_4,float *param_5,
               float *param_6)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *param_2 - *param_3;
  fVar2 = (fVar1 - *(float *)(param_1 + 8)) / *param_6;
  *(float *)(param_1 + 8) = fVar1;
  *(float *)(param_1 + 0xc) = fVar2;
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + (fVar1 * *param_4 - fVar2 * *param_5);
  return;
}



// ============================================================
// RVA: 0x15d78fc | Atlas.Gameplay.Kart.KartPhysicsFixedUpdateAllJob.UpdateAngleControl
// ============================================================

void Atlas_Gameplay_Kart_KartPhysicsFixedUpdateAllJob__UpdateAngleControl
               (float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
               float *param_6)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *param_2 - *param_3;
  fVar2 = (fVar1 - *param_1) / *param_6;
  *param_1 = fVar1;
  param_1[1] = fVar2;
  param_1[4] = param_1[4] + (fVar1 * *param_4 - fVar2 * *param_5);
  return;
}



// ============================================================
// RVA: 0x15d7940 | Atlas.Gameplay.Kart.KartPhysicsFixedUpdateAllJob.RotJobExecute
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Kart_KartPhysicsFixedUpdateAllJob__RotJobExecute
               (undefined8 param_1,long param_2,long param_3,long param_4,long param_5,long param_6)

{
  char cVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  int iVar19;
  float fVar20;
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  fVar2 = 1.0;
  if (*(char *)(param_3 + 0x34) != '\0') {
    fVar2 = _UNK_033f8140;
  }
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x24) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  fVar17 = 1.0;
  if ((*(char *)(param_3 + 0x3d) != '\0') && (fVar17 = 1.0, *(char *)(param_3 + 0x56) == '\0')) {
    fVar17 = *(float *)(param_6 + 0xdc);
  }
  fVar17 = *(float *)(param_5 + 4) *
           *(float *)(param_6 + 0x28c) *
           ((1.0 - *(float *)(param_3 + 100)) +
           *(float *)(param_3 + 100) * *(float *)(param_6 + 0xac)) *
           fVar17 * *(float *)(param_6 + 0x27c) * *(float *)(param_6 + 0x280) *
                    *(float *)(param_6 + 0x284) * *(float *)(param_6 + 0x288) -
           *(float *)(param_4 + 4);
  fVar18 = (fVar17 - *(float *)(param_2 + 8)) / *(float *)(param_6 + 0x228);
  *(float *)(param_2 + 8) = fVar17;
  *(float *)(param_2 + 0xc) = fVar18;
  fVar2 = fVar2 * (fVar17 * *(float *)(param_6 + 0x318) - fVar18 * *(float *)(param_6 + 0x314));
  *(float *)(param_2 + 0x10) = fVar2;
  fVar17 = fVar2 * 0.0 + 0.0;
  *(float *)(param_2 + 0x40) = fVar17;
  *(float *)(param_2 + 0x44) = fVar2 + 0.0;
  *(float *)(param_2 + 0x48) = fVar17;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined4 *)(param_2 + 0x4c) = 0;
  fVar20 = *(float *)(param_3 + 0xc4);
  fVar23 = *(float *)(param_3 + 200);
  fVar24 = *(float *)(param_3 + 0xcc);
  fVar2 = *(float *)(param_6 + 0x1bc);
  fVar17 = *(float *)(param_6 + 0x1c0);
  fVar18 = *(float *)(param_6 + 0x1c4);
  if (cRam0000000003ca34fc == '\0') {
    func_0x00f78a20(0x3d232c0);
    cRam0000000003ca34fc = '\x01';
  }
  fVar26 = fVar23 * fVar2 - fVar20 * fVar17;
  fVar17 = fVar24 * fVar17 - fVar23 * fVar18;
  fVar2 = fVar20 * fVar18 - fVar24 * fVar2;
  if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) == 0) ||
     (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) != 0)) {
    cVar1 = '\x01';
  }
  else {
    func_0x00f78ad0();
    cVar1 = cRam0000000003ca34fc;
  }
  fVar18 = 1.0 / SQRT(fVar26 * fVar26 + fVar17 * fVar17 + fVar2 * fVar2);
  if (cVar1 == '\0') {
    func_0x00f78a20(0x3d232c0);
    cRam0000000003ca34fc = '\x01';
  }
  fVar17 = fVar17 * fVar18;
  fVar2 = fVar2 * fVar18;
  fVar26 = fVar26 * fVar18;
  if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  fStack_b4 = fVar24 * fVar17 - fVar20 * fVar26;
  fStack_b8 = fVar23 * fVar26 - fVar24 * fVar2;
  fStack_b0 = fVar20 * fVar2 - fVar23 * fVar17;
  fVar18 = 1.0 / SQRT(fStack_b0 * fStack_b0 + fStack_b8 * fStack_b8 + fStack_b4 * fStack_b4);
  fStack_b8 = fStack_b8 * fVar18;
  fStack_b4 = fStack_b4 * fVar18;
  fStack_b0 = fStack_b0 * fVar18;
  fStack_a4 = fVar17 * fStack_b4 - fVar2 * fStack_b8;
  fStack_ac = fVar2 * fStack_b0 - fVar26 * fStack_b4;
  fStack_a8 = fVar26 * fStack_b8 - fVar17 * fStack_b0;
  uStack_90 = 0;
  uStack_88 = 0;
  fStack_a0 = fVar17;
  fStack_9c = fVar2;
  fStack_98 = fVar26;
  /*Unity.Mathematics.quaternion$$.ctor*/ func_0x030c5a04(&uStack_90,&fStack_b8,0);
  fVar18 = (float)uStack_88;
  fVar20 = (float)((ulong)uStack_88 >> 0x20);
  fVar2 = (float)uStack_90;
  fVar17 = (float)((ulong)uStack_90 >> 0x20);
  if ((*(char *)(param_3 + 0x3d) != '\0') || (*(float *)(param_3 + 0xe0) < 0.5)) {
    fVar24 = *(float *)(param_6 + 0x1ac);
    fVar23 = *(float *)(param_6 + 0x1b4);
    if (cRam0000000003ca34fc == '\0') {
      func_0x00f78a20(0x3d232c0);
      cRam0000000003ca34fc = '\x01';
    }
    if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) == 0) ||
       (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) != 0)) {
      cVar1 = '\x01';
    }
    else {
      func_0x00f78ad0();
      cVar1 = cRam0000000003ca34fc;
    }
    fVar3 = fVar23 * fVar23 + fVar24 * fVar24 + 0.0;
    fVar12 = 1.0 / SQRT(fVar3);
    fVar24 = fVar24 * fVar12;
    fVar26 = fVar12 * 0.0;
    fVar23 = fVar23 * fVar12;
    if (fVar3 <= 1.1754944e-38) {
      fVar23 = 0.0;
      fVar26 = 0.0;
      fVar24 = 0.0;
    }
    if (cVar1 == '\0') {
      func_0x00f78a20(0x3d232c0);
      cRam0000000003ca34fc = '\x01';
    }
    if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    fStack_b4 = fVar24 * 0.0 - fVar23 * 0.0;
    fStack_b8 = fVar23 - fVar26 * 0.0;
    fStack_b0 = fVar26 * 0.0 - fVar24;
    fVar3 = 1.0 / SQRT(fStack_b0 * fStack_b0 + fStack_b8 * fStack_b8 + fStack_b4 * fStack_b4);
    fStack_b8 = fStack_b8 * fVar3;
    fStack_b4 = fStack_b4 * fVar3;
    fStack_b0 = fStack_b0 * fVar3;
    fStack_a4 = fVar24 * fStack_b4 - fVar26 * fStack_b8;
    fStack_ac = fVar26 * fStack_b0 - fVar23 * fStack_b4;
    fStack_a8 = fVar23 * fStack_b8 - fVar24 * fStack_b0;
    uStack_90 = 0;
    uStack_88 = 0;
    fStack_a0 = fVar24;
    fStack_9c = fVar26;
    fStack_98 = fVar23;
    /*Unity.Mathematics.quaternion$$.ctor*/ func_0x030c5a04(&uStack_90,&fStack_b8,0);
    auVar11._8_8_ = uStack_88;
    auVar11._0_8_ = uStack_90;
    auVar13._0_4_ = fVar2 * (float)uStack_90;
    fVar23 = (float)((ulong)uStack_90 >> 0x20);
    auVar13._4_4_ = fVar17 * fVar23;
    auVar13._8_4_ = fVar18 * (float)uStack_88;
    fVar24 = (float)((ulong)uStack_88 >> 0x20);
    auVar13._12_4_ = fVar20 * fVar24;
    auVar14 = NEON_ext(auVar13,auVar13,8,1);
    fVar26 = auVar13._12_4_ + auVar14._0_4_ + auVar13._0_4_ + auVar13._4_4_;
    iVar19 = -(uint)(fVar26 < 0.0);
    auVar21._0_4_ = -(float)uStack_90;
    auVar21._4_4_ = -fVar23;
    auVar21._8_4_ = -(float)uStack_88;
    auVar21._12_4_ = -fVar24;
    auVar14._4_4_ = iVar19;
    auVar14._0_4_ = iVar19;
    auVar14._8_4_ = iVar19;
    auVar14._12_4_ = iVar19;
    auVar21 = auVar21 ^ (auVar21 ^ auVar11) & ~auVar14;
    fVar23 = -fVar26;
    if (0.0 <= fVar26) {
      fVar23 = fVar26;
    }
    fVar24 = auVar21._0_4_;
    fVar26 = auVar21._4_4_;
    fVar3 = auVar21._8_4_;
    fVar12 = auVar21._12_4_;
    if (_UNK_033f8b54 <= fVar23) {
      auVar8._0_4_ = fVar2 * fVar24;
      auVar8._4_4_ = fVar17 * fVar26;
      auVar8._8_4_ = fVar18 * fVar3;
      auVar8._12_4_ = fVar20 * fVar12;
      auVar14 = NEON_ext(auVar8,auVar8,8,1);
      iVar19 = -(uint)(auVar8._12_4_ + auVar14._0_4_ + auVar8._0_4_ + auVar8._4_4_ < 0.0);
      auVar9._0_8_ = CONCAT44(iVar19,iVar19);
      auVar9._8_4_ = iVar19;
      auVar9._12_4_ = iVar19;
      auVar15._0_8_ = CONCAT44(-fVar26,-fVar24);
      auVar15._8_4_ = -fVar3;
      auVar15._12_4_ = -fVar12;
      if (cRam0000000003ca34fc == '\0') {
        func_0x00f78a20(0x3d232c0);
        auVar15._8_8_ = auVar15._8_8_;
        auVar9._8_8_ = auVar9._8_8_;
        cRam0000000003ca34fc = '\x01';
      }
      auVar21 = auVar21 ^ (auVar21 ^ auVar15) & auVar9;
      if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      fVar2 = fVar2 + (auVar21._0_4_ - fVar2) * 0.04;
      fVar17 = fVar17 + (auVar21._4_4_ - fVar17) * 0.04;
      fVar18 = fVar18 + (auVar21._8_4_ - fVar18) * 0.04;
      fVar20 = fVar20 + (auVar21._12_4_ - fVar20) * 0.04;
      auVar16._0_4_ = fVar2 * fVar2;
      auVar16._4_4_ = fVar17 * fVar17;
      auVar16._8_4_ = fVar18 * fVar18;
      auVar16._12_4_ = fVar20 * fVar20;
      auVar14 = NEON_ext(auVar16,auVar16,8,1);
      fVar23 = 1.0 / SQRT(auVar16._12_4_ + auVar14._0_4_ + auVar16._0_4_ + auVar16._4_4_);
      fVar2 = fVar2 * fVar23;
      fVar17 = fVar17 * fVar23;
      fVar18 = fVar18 * fVar23;
      fVar20 = fVar20 * fVar23;
    }
    else {
      if (cRam0000000003ca34fd == '\0') {
        func_0x00f78a20(0x3d232c0);
        cRam0000000003ca34fd = '\x01';
      }
      if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      auVar5._0_8_ = (double)fVar23;
      auVar5._8_8_ = 0;
      auVar14 = _acos(auVar5);
      if (cRam0000000003ca34fc == '\0') {
        func_0x00f78a20(0x3d232c0);
        cRam0000000003ca34fc = '\x01';
      }
      if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      fVar25 = _UNK_033f8b58;
      if (cRam0000000003ca3504 == '\0') {
        func_0x00f78a20(0x3d232c0);
        cRam0000000003ca3504 = '\x01';
      }
      fVar25 = (float)auVar14._0_8_ * fVar25;
      fVar23 = 1.0 / SQRT(1.0 - fVar23 * fVar23);
      if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) == 0) ||
         (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) != 0)) {
        auVar6._0_8_ = (double)fVar25;
        auVar6._8_8_ = 0;
        dVar4 = (double)_sin(auVar6);
      }
      else {
        func_0x00f78ad0();
        cVar1 = cRam0000000003ca3504;
        auVar10._0_8_ = (double)fVar25;
        auVar10._8_8_ = 0;
        auVar11 = _sin(auVar10);
        dVar4 = auVar11._0_8_;
        if (cVar1 == '\0') {
          func_0x00f78a20(0x3d232c0);
          cRam0000000003ca3504 = '\x01';
        }
      }
      fVar25 = fVar23 * (float)dVar4;
      fVar22 = (float)auVar14._0_8_ * _UNK_033f8b5c;
      if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      auVar7._0_8_ = (double)fVar22;
      auVar7._8_8_ = 0;
      dVar4 = (double)_sin(auVar7);
      fVar23 = fVar23 * (float)dVar4;
      fVar2 = fVar24 * fVar23 + fVar2 * fVar25;
      fVar17 = fVar26 * fVar23 + fVar17 * fVar25;
      fVar18 = fVar3 * fVar23 + fVar18 * fVar25;
      fVar20 = fVar12 * fVar23 + fVar20 * fVar25;
    }
  }
  *(ulong *)(param_2 + 0x60) = CONCAT44(fVar20,fVar18);
  *(ulong *)(param_2 + 0x58) = CONCAT44(fVar17,fVar2);
  return;
}



// ============================================================
// RVA: 0x15d7ff4 | Atlas.Gameplay.Kart.KartPhysicsFixedUpdateAllJob.AeroJobExecute
// ============================================================

void Atlas_Gameplay_Kart_KartPhysicsFixedUpdateAllJob__AeroJobExecute
               (float param_1,undefined8 param_2,float *param_3,float *param_4,long param_5)

{
  *param_3 = *param_4 *
             *(float *)(param_5 + 4) * *(float *)(param_5 + 4) * *(float *)(param_5 + 0x14) * -1.25
             * param_1;
  return;
}



// ============================================================
// RVA: 0x15d8020 | Atlas.Gameplay.Kart.KartPhysicsFixedUpdateAllJob.VisualJobExecute
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Kart_KartPhysicsFixedUpdateAllJob__VisualJobExecute
               (undefined8 param_1,float *param_2,float *param_3,undefined8 param_4,float *param_5,
               long param_6)

{
  long lVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  *param_2 = *param_2 +
             *(float *)(param_6 + 0x228) * param_3[5] * *param_3 * 8.0 * *(float *)(param_6 + 0x2b4)
  ;
  fVar7 = param_3[0x19];
  fVar6 = *(float *)(param_6 + 0x2a4);
  fVar8 = *(float *)(param_6 + 0xcc);
  iVar2 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar6,0);
  fVar3 = fVar8;
  if (fVar6 <= fVar8 && iVar2 == 0) {
    fVar3 = fVar6;
  }
  iVar2 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar3,0);
  fVar6 = -fVar8;
  if (iVar2 == 0 && -fVar8 <= fVar3) {
    fVar6 = fVar3;
  }
  fVar3 = 1.0;
  fVar8 = 1.0;
  lVar1 = 0xd4;
  if (param_3[0x19] <= 0.0) {
    lVar1 = 0xd8;
  }
  param_2[4] = param_2[4] +
               *(float *)(param_6 + lVar1) *
               ((1.0 / *(float *)(param_6 + 0xcc)) * *(float *)(param_6 + 0xd0) * fVar7 * fVar6 -
               param_2[4]);
  fVar7 = *param_5;
  fVar6 = fVar3;
  if (fVar7 == 0.0 || 0.0 > fVar7) {
    fVar6 = 0.0;
  }
  fVar5 = fVar8;
  if (0.0 <= fVar7) {
    fVar5 = 0.0;
  }
  fVar7 = ABS(fVar7);
  fVar9 = *(float *)(param_6 + 0x2b8);
  fVar10 = *(float *)(param_6 + 700);
  iVar2 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar7,0);
  if (iVar2 == 0 && fVar7 <= fVar10) {
    fVar10 = fVar7;
  }
  iVar2 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar10,0);
  if (iVar2 == 0 && fVar9 <= fVar10) {
    fVar9 = fVar10;
  }
  fVar9 = (fVar6 - fVar5) * fVar9;
  fVar6 = fVar3;
  if (fVar9 == 0.0 || 0.0 > fVar9) {
    fVar6 = 0.0;
  }
  if (0.0 <= fVar9) {
    fVar8 = 0.0;
  }
  fVar8 = (fVar6 - fVar8) *
          ((ABS(fVar9) - *(float *)(param_6 + 0x2b8)) /
          (*(float *)(param_6 + 700) - *(float *)(param_6 + 0x2b8)));
  fVar7 = *(float *)(param_6 + 0x2c0);
  fVar6 = *(float *)(param_6 + 0x2cc) * *(float *)(param_6 + 0x228);
  iVar2 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar6,0);
  if (iVar2 == 0 && fVar6 <= 1.0) {
    fVar3 = fVar6;
  }
  iVar2 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar3,0);
  fVar6 = 0.0;
  if (iVar2 == 0 && 0.0 <= fVar3) {
    fVar6 = fVar3;
  }
  if (param_3[0x19] <= 0.0) {
    fVar8 = fVar7 * fVar8;
    iVar2 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar8,0);
    fVar3 = fVar7;
    if (fVar8 <= fVar7 && iVar2 == 0) {
      fVar3 = fVar8;
    }
    iVar2 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar3,0);
    fVar8 = -fVar7;
    if (iVar2 == 0 && -fVar7 <= fVar3) {
      fVar8 = fVar3;
    }
    fVar3 = param_3[5] * (param_2[1] + fVar6 * (fVar8 - param_2[1]));
  }
  else {
    fVar5 = *(float *)(param_6 + 0x2c8);
    fVar3 = *(float *)(param_6 + 0x2c4);
    if (0.0 <= param_3[0x1b]) {
      fVar5 = *(float *)(param_6 + 0x2c4);
      fVar3 = *(float *)(param_6 + 0x2c8);
    }
    fVar7 = fVar7 * fVar8;
    iVar2 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar7,0);
    if (iVar2 == 0 && fVar7 <= fVar3) {
      fVar3 = fVar7;
    }
    iVar2 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar3,0);
    fVar7 = -fVar5;
    if (iVar2 == 0 && -fVar5 <= fVar3) {
      fVar7 = fVar3;
    }
    fVar3 = param_2[1] + fVar6 * (fVar7 - param_2[1]);
  }
  param_2[1] = fVar3;
  fVar7 = *param_5;
  fVar6 = 1.0;
  fVar8 = 1.0;
  fVar3 = fVar6;
  if (fVar7 == 0.0 || 0.0 > fVar7) {
    fVar3 = 0.0;
  }
  fVar5 = fVar8;
  if (0.0 <= fVar7) {
    fVar5 = 0.0;
  }
  fVar7 = ABS(fVar7);
  fVar9 = *(float *)(param_6 + 0x2d0);
  fVar10 = *(float *)(param_6 + 0x2d4);
  iVar2 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar7,0);
  if (iVar2 == 0 && fVar7 <= fVar10) {
    fVar10 = fVar7;
  }
  iVar2 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar10,0);
  if (iVar2 == 0 && fVar9 <= fVar10) {
    fVar9 = fVar10;
  }
  fVar9 = (fVar3 - fVar5) * fVar9;
  fVar3 = fVar6;
  if (fVar9 == 0.0 || 0.0 > fVar9) {
    fVar3 = 0.0;
  }
  if (0.0 <= fVar9) {
    fVar8 = 0.0;
  }
  fVar7 = *(float *)(param_6 + 0x2d0);
  fVar5 = *(float *)(param_6 + 0x2d4);
  fVar10 = *(float *)(param_6 + 0x2d8) * *(float *)(param_6 + 0x228);
  iVar2 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar10,0);
  if (iVar2 == 0 && fVar10 <= 1.0) {
    fVar6 = fVar10;
  }
  iVar2 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar6,0);
  fVar10 = 0.0;
  if (iVar2 == 0 && 0.0 <= fVar6) {
    fVar10 = fVar6;
  }
  fVar6 = (float)*(undefined8 *)(param_2 + 2);
  fVar4 = (float)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20);
  *(ulong *)(param_2 + 2) =
       CONCAT44(fVar4 + _UNK_033f8140 * (param_3[0x19] - fVar4),
                fVar6 + fVar10 * ((fVar3 - fVar8) * ((ABS(fVar9) - fVar7) / (fVar5 - fVar7)) - fVar6
                                 ));
  return;
}



// ============================================================
// RVA: 0x15d8414 | Atlas.Gameplay.Kart.KartPhysicsFixedUpdateAllJob.Execute
// ============================================================

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Atlas_Gameplay_Kart_KartPhysicsFixedUpdateAllJob__Execute(long *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int iVar18;
  undefined8 uVar19;
  long lVar20;
  int iVar21;
  undefined8 *puVar22;
  float *pfVar23;
  uint uVar24;
  long lVar25;
  int iVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined8 uStack_db8;
  undefined8 uStack_db0;
  undefined8 uStack_da8;
  undefined8 uStack_da0;
  undefined8 uStack_d98;
  undefined8 uStack_d90;
  undefined8 uStack_d88;
  undefined8 uStack_d80;
  undefined8 uStack_d78;
  undefined8 uStack_d70;
  undefined8 uStack_d68;
  undefined8 uStack_d60;
  undefined8 uStack_d58;
  undefined8 uStack_d50;
  undefined8 uStack_d48;
  undefined8 uStack_d40;
  undefined8 uStack_d38;
  undefined8 uStack_d30;
  undefined8 uStack_d28;
  undefined8 uStack_d20;
  undefined8 uStack_d18;
  undefined8 uStack_d10;
  undefined1 auStack_a30 [732];
  byte bStack_754;
  undefined1 uStack_753;
  undefined1 uStack_752;
  undefined1 uStack_751;
  undefined8 uStack_750;
  float fStack_748;
  undefined1 uStack_744;
  float fStack_740;
  float fStack_73c;
  float fStack_738;
  undefined1 uStack_734;
  undefined8 uStack_730;
  float fStack_728;
  undefined1 uStack_724;
  float fStack_720;
  float fStack_71c;
  float fStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined1 auStack_6f0 [48];
  undefined1 auStack_6c0 [8];
  float fStack_6b8;
  float fStack_6b4;
  float fStack_694;
  float fStack_690;
  float fStack_598;
  float fStack_594;
  float fStack_590;
  float fStack_514;
  float fStack_510;
  float fStack_50c;
  float fStack_508;
  float fStack_504;
  float fStack_500;
  float fStack_4fc;
  float fStack_4f8;
  float fStack_4f4;
  float fStack_4f0;
  float fStack_4ec;
  float fStack_4e8;
  float fStack_4e4;
  float fStack_4e0;
  float fStack_4dc;
  float fStack_4d8;
  undefined4 uStack_4d4;
  undefined8 uStack_4d0;
  undefined8 uStack_4c4;
  undefined8 uStack_4bc;
  undefined8 uStack_4b4;
  float fStack_4ac;
  float fStack_4a4;
  float fStack_498;
  undefined8 uStack_420;
  float fStack_418;
  float fStack_414;
  undefined1 auStack_39c [4];
  float fStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined1 auStack_338 [32];
  float fStack_318;
  int iStack_2f4;
  char cStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
  undefined1 auStack_2e0 [88];
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  float fStack_278;
  float afStack_274 [7];
  float fStack_258;
  char cStack_235;
  ushort uStack_21f;
  float fStack_21c;
  float fStack_1f8;
  int iStack_1f0;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_174;
  undefined8 uStack_168;
  float fStack_160;
  undefined4 uStack_138;
  undefined8 uStack_134;
  undefined8 uStack_12c;
  undefined8 uStack_124;
  undefined8 uStack_11c;
  undefined8 uStack_114;
  undefined8 uStack_10c;
  undefined8 uStack_104;
  undefined1 auStack_d8 [14];
  undefined1 uStack_ca;
  undefined1 auStack_c8 [40];
  
  if ((bRam0000000003eb538a & 1) == 0) {
    func_0x00f78a20(&/*Unity.Mathematics.float3_TypeInfo*/ lRam0000000003d265d8);
    bRam0000000003eb538a = 1;
  }
  _bzero(&uStack_390,0x2dc);
  _bzero(auStack_6c0,0x330);
  uStack_6f8 = 0;
  uStack_700 = 0;
  uStack_708 = 0;
  uStack_710 = 0;
  _bzero(auStack_a30,0x31c);
  if (0 < *(int *)((long)param_1 + 0x74)) {
    lVar25 = 0;
    fVar38 = 0.0;
    do {
      uVar24 = (uint)lVar25;
      if (0 < (int)(*(uint *)(param_1 + 0xf) & 1 << (ulong)(uVar24 & 0x1f))) {
        _memmove(&uStack_390,param_1[2] + lVar25 * 0x2dc,0x2dc);
        _memmove(auStack_6c0,*param_1 + lVar25 * 0x330,0x330);
        _memcpy(&uStack_d60,auStack_6c0,0x330);
        fVar11 = fStack_4ec;
        fVar9 = fStack_4f0;
        fVar7 = fStack_4f4;
        fVar4 = fStack_4fc;
        fVar36 = fStack_500;
        fVar30 = fStack_504;
        fVar33 = fStack_50c;
        fVar37 = fStack_510;
        fVar29 = fStack_514;
        iVar18 = (int)param_1[0xe];
        if (iVar18 < 1) {
          fVar39 = 0.0;
        }
        else {
          iVar26 = 0;
          fVar39 = 0.0;
          iVar21 = iVar18;
          while( true ) {
            iVar21 = iVar26 + uVar24 * iVar21;
            Atlas_Gameplay_Kart_KartPhysicsFixedUpdateAllJob__KartSuspensionUpdateJobExecute
                      (&uStack_d60,0,param_1,param_1 + 8,afStack_274,uVar24 * (iVar18 + 1) + iVar26,
                       auStack_6c0);
            puVar22 = (undefined8 *)(param_1[6] + (long)iVar21 * 0x58);
            puVar22[5] = uStack_d38;
            puVar22[4] = uStack_d40;
            puVar22[7] = uStack_d28;
            puVar22[6] = uStack_d30;
            puVar22[9] = uStack_d18;
            puVar22[8] = uStack_d20;
            puVar22[10] = uStack_d10;
            puVar22[1] = uStack_d58;
            *puVar22 = uStack_d60;
            puVar22[3] = uStack_d48;
            puVar22[2] = uStack_d50;
            fVar39 = fVar39 + *(float *)(param_1[6] + (long)iVar21 * 0x58 + 0x48);
            if (iVar18 + -1 == iVar26) break;
            iVar21 = (int)param_1[0xe];
            iVar26 = iVar26 + 1;
          }
        }
        Atlas_Gameplay_Kart_KartPhysicsFixedUpdateAllJob__KartSuspensionUpdateJobExecute
                  (&uStack_db8,fVar39 / (float)iVar18,param_1,param_1 + 8,afStack_274,
                   (iVar18 + 1) * uVar24 + iVar18,auStack_6c0);
        uStack_368 = uStack_d90;
        uStack_370 = uStack_d98;
        uStack_358 = uStack_d80;
        uStack_360 = uStack_d88;
        uStack_348 = uStack_d70;
        uStack_350 = uStack_d78;
        uStack_340 = uStack_d68;
        uStack_388 = uStack_db0;
        uStack_390 = uStack_db8;
        uStack_378 = uStack_da0;
        uStack_380 = uStack_da8;
        uVar19 = Atlas_Gameplay_Kart_KartPhysicsFixedUpdateAllJob__KartPhysicsUpdateBodyJobExecute
                           (param_1,afStack_274,param_1 + 6,(int)param_1[0xe] * uVar24,&uStack_390,
                            auStack_d8,auStack_338,auStack_6f0,auStack_6c0);
        uVar19 = Atlas_Gameplay_Kart_KartPhysicsFixedUpdateAllJob__LngJobExecute
                           (uVar19,auStack_d8,auStack_338,afStack_274,auStack_6f0,auStack_6c0);
        uVar19 = Atlas_Gameplay_Kart_KartPhysicsFixedUpdateAllJob__LatJobExecute
                           (uVar19,&fStack_2ec,afStack_274,auStack_6f0,auStack_6c0);
        uVar19 = Atlas_Gameplay_Kart_KartPhysicsFixedUpdateAllJob__VertJobExecute
                           (uVar19,&fStack_2e8,afStack_274,auStack_6c0);
        Atlas_Gameplay_Kart_KartPhysicsFixedUpdateAllJob__GlidingJobExecute
                  (uVar19,&fStack_2e4,afStack_274,auStack_6c0);
        fVar2 = fStack_4d8;
        fVar3 = fStack_4dc;
        fVar39 = fStack_4e0;
        fVar1 = fStack_4e4;
        if (cRam0000000003ca34fc == '\0') {
          func_0x00f78a20(&/*System.Math_TypeInfo*/ lRam0000000003d232c0);
          cRam0000000003ca34fc = '\x01';
        }
        lVar20 = /*System.Math_TypeInfo*/ lRam0000000003d232c0;
        if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
          lVar20 = func_0x00f78ad0();
        }
        fVar27 = fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 + fVar39 * fVar39;
        fVar31 = 1.0 / SQRT(fVar27);
        fVar39 = fVar39 * fVar31;
        fVar1 = fVar1 * fVar31;
        fVar2 = fVar2 * fVar31;
        if (fVar27 <= 1.1754944e-38) {
          fVar39 = 0.0;
          fVar1 = fVar38;
          fVar2 = fVar38;
        }
        uStack_700 = CONCAT44(fVar39,fVar1);
        fVar39 = fVar3 * fVar31;
        if (fVar27 <= 1.1754944e-38) {
          fVar39 = fVar38;
        }
        uStack_6f8 = CONCAT44(fVar2,fVar39);
        uVar19 = Atlas_Gameplay_Kart_KartPhysicsFixedUpdateAllJob__BodyCompensationExecute
                           (lVar20,afStack_274,&fStack_2ec,&uStack_700,auStack_6c0);
        fVar17 = fStack_258;
        fVar16 = fStack_2e4;
        fVar15 = fStack_2e8;
        fVar14 = fStack_2ec;
        fVar28 = fStack_318;
        fVar13 = fStack_4e8;
        fVar12 = fStack_4ec;
        fVar10 = fStack_4f0;
        fVar8 = fStack_4f4;
        fVar6 = fStack_4f8;
        fVar5 = fStack_4fc;
        fVar31 = fStack_500;
        fVar27 = fStack_504;
        fVar2 = fStack_508;
        fVar3 = fStack_50c;
        fVar1 = fStack_510;
        fVar39 = fStack_514;
        fVar32 = fStack_414 * 0.0;
        fVar34 = (float)uStack_420;
        fVar35 = (float)((ulong)uStack_420 >> 0x20);
        uStack_710 = CONCAT44(fVar32 + fVar34 * fVar7 + fVar35 * fVar9 + fVar11 * fStack_418,
                              fVar32 + fVar35 * fVar36 + fVar34 * fVar30 + fVar4 * fStack_418);
        uStack_708 = CONCAT44(fStack_414 + fVar34 * 0.0 + fVar35 * 0.0 + fStack_418 * 0.0,
                              fVar32 + fVar35 * fVar37 + fVar34 * fVar29 + fVar33 * fStack_418);
        if (cStack_235 == '\0') {
          uVar19 = Atlas_Gameplay_Kart_KartPhysicsFixedUpdateAllJob__RotJobExecute
                             (uVar19,auStack_2e0,afStack_274,&uStack_710,auStack_6f0,auStack_6c0);
        }
        else {
          uVar19 = Atlas_Gameplay_Kart_KartPhysicsFixedUpdateAllJob__GlidingRotJobExecute
                             (uVar19,auStack_2e0,afStack_274);
        }
        fVar28 = fVar28 + fVar17;
        fVar29 = fVar16 * 0.0;
        uVar19 = Atlas_Gameplay_Kart_KartPhysicsFixedUpdateAllJob__AeroJobExecute
                           (0x3f800000,uVar19,&fStack_278,auStack_39c,afStack_274);
        uStack_10c = CONCAT44(fStack_510 * fStack_278 +
                              fVar1 * fVar28 + fVar31 * fVar14 + fVar10 * fVar15 + fVar16 +
                              (float)((ulong)uStack_11c >> 0x20) +
                              (float)((ulong)uStack_360 >> 0x20),
                              fStack_514 * fStack_278 +
                              fVar39 * fVar28 + fVar27 * fVar14 + fVar8 * fVar15 + fVar29 +
                              (float)uStack_11c + (float)uStack_360);
        uStack_104 = CONCAT44(fStack_508 * fStack_278 +
                              fVar2 * fVar28 + fVar6 * fVar14 + fVar13 * fVar15 + fVar29 +
                              (float)((ulong)uStack_114 >> 0x20) +
                              (float)((ulong)uStack_358 >> 0x20),
                              fStack_50c * fStack_278 +
                              fVar3 * fVar28 + fVar5 * fVar14 + fVar12 * fVar15 + fVar29 +
                              (float)uStack_114 + (float)uStack_358);
        Atlas_Gameplay_Kart_KartPhysicsFixedUpdateAllJob__VisualJobExecute
                  (uVar19,auStack_c8,afStack_274);
        if (cStack_235 == '\0') {
          bStack_754 = /*Core.Extensions.MathsExtensions$$IsNaN*/ func_0x01646908(uStack_288,uStack_284,uStack_280,uStack_27c,0);
          bStack_754 = bStack_754 ^ 1;
        }
        else {
          bStack_754 = 0;
        }
        fVar33 = fStack_4dc;
        fVar37 = fStack_4e0;
        fVar29 = fStack_4e4;
        pfVar23 = *(float **)(/*Unity.Mathematics.float3_TypeInfo*/ lRam0000000003d265d8 + 0xb8);
        fStack_720 = *pfVar23;
        fStack_71c = pfVar23[1];
        uStack_730 = *(undefined8 *)pfVar23;
        fStack_718 = pfVar23[2];
        uStack_753 = (fStack_1e0 != fStack_720 || fStack_1dc != fStack_71c) ||
                     fStack_1d8 != fStack_718;
        uStack_752 = (fStack_1d4 != fStack_720 || fStack_1d0 != fStack_71c) ||
                     fStack_1cc != fStack_718;
        uStack_751 = fStack_1f8 != 0.0;
        fStack_748 = fStack_1f8 * fStack_4fc;
        uStack_750 = CONCAT44(fStack_500 * fStack_1f8,fStack_504 * fStack_1f8);
        uStack_744 = 0;
        uStack_734 = 0;
        uStack_724 = 0;
        fStack_740 = fStack_720;
        fStack_73c = fStack_71c;
        fStack_738 = fStack_718;
        if ((char)uStack_21f != '\0') {
          uStack_21f = 0x100;
          fStack_73c = fStack_598 * fStack_398;
          uStack_744 = 1;
          fStack_740 = 0.0;
          fStack_738 = 0.0;
          fStack_21c = fStack_594;
          if ((0 < iStack_2f4) && (fStack_694 <= afStack_274[0])) {
            cStack_2f0 = '\x01';
            uStack_ca = 1;
          }
        }
        fStack_728 = fStack_718;
        if (0.0 < fStack_21c) {
          if (cStack_235 == '\0') {
            fStack_21c = fStack_21c - fStack_498;
            uStack_734 = 1;
            fVar36 = (fStack_590 + -1.0) * fStack_4a4;
            fVar30 = fStack_690;
            if (iStack_1f0 < 1 && cStack_2f0 == '\0') {
              fVar30 = 1.0;
            }
            fStack_728 = fStack_4ac * fVar36 * fVar30;
            uStack_730 = CONCAT44((float)((ulong)uStack_4b4 >> 0x20) * fVar36 * fVar30,
                                  (float)uStack_4b4 * fVar36 * fVar30);
            if (0.0 < fStack_21c) goto code_r0x015d8b98;
          }
          else {
            fStack_21c = 0.0;
          }
          uStack_21f = uStack_21f & 0xff;
        }
code_r0x015d8b98:
        uStack_138 = uStack_4d4;
        uStack_12c = uStack_4c4;
        uStack_134 = uStack_4d0;
        uStack_124 = uStack_4bc;
        fStack_174 = fStack_4e4;
        uStack_168 = uStack_420;
        fStack_160 = fStack_418;
        if (fStack_6b8 < afStack_274[0]) {
          uStack_724 = 1;
          if (cRam0000000003ca34fc == '\0') {
            func_0x00f78a20(&/*System.Math_TypeInfo*/ lRam0000000003d232c0);
            cRam0000000003ca34fc = '\x01';
          }
          if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          fVar30 = 1.0 / SQRT(fVar33 * fVar33 + fVar29 * fVar29 + fVar37 * fVar37);
          afStack_274[0] = fStack_6b8;
          fVar29 = fVar29 * fVar30 * fStack_6b8;
          fStack_71c = fVar37 * fVar30 * fStack_6b8;
          fVar33 = fVar33 * fVar30 * fStack_6b8;
          fStack_720 = fVar29;
          fStack_718 = fVar33;
          fVar37 = fStack_71c;
        }
        if (fStack_6b4 < fVar37) {
          uStack_724 = 1;
          fStack_71c = fStack_6b4;
          fStack_720 = fVar29;
          fStack_718 = fVar33;
        }
        iVar18 = /*Core.Extensions.MathsExtensions$$IsNaN*/ func_0x01646840(fStack_720,fStack_71c,fStack_718,0);
        if (iVar18 != 0) {
          uStack_724 = 0;
        }
        _memcpy(auStack_a30,&uStack_390,0x2dc);
        _memcpy(param_1[4] + lVar25 * 0x31c,auStack_a30,0x31c);
      }
      lVar25 = lVar25 + 1;
    } while (lVar25 < *(int *)((long)param_1 + 0x74));
  }
  return;
}



