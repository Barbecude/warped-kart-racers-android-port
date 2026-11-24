// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Geometry.Spline

// ============================================================
// RVA: 0x15023a0 | Atlas.Geometry.Spline.get_Knots
// ============================================================

undefined8 Atlas_Geometry_Spline__get_Knots(undefined8 *param_1)

{
  return *param_1;
}



// ============================================================
// RVA: 0x15023a8 | Atlas.Geometry.Spline.get_KnotCount
// ============================================================

undefined4 Atlas_Geometry_Spline__get_KnotCount(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



// ============================================================
// RVA: 0x15023b0 | Atlas.Geometry.Spline.get_LastKnot
// ============================================================

long * Atlas_Geometry_Spline__get_LastKnot(undefined8 *param_1,long *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar3 = *param_2;
  if (lVar3 == 0) {
    func_0x00f78af4();
  }
  else {
    uVar1 = (int)param_2[1] - 1;
    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
      lVar3 = lVar3 + (long)(int)uVar1 * 0x24;
      uVar2 = *(undefined8 *)(lVar3 + 0x20);
      uVar5 = *(undefined8 *)(lVar3 + 0x38);
      uVar4 = *(undefined8 *)(lVar3 + 0x30);
      param_1[1] = *(undefined8 *)(lVar3 + 0x28);
      *param_1 = uVar2;
      param_1[3] = uVar5;
      param_1[2] = uVar4;
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(lVar3 + 0x40);
      return param_2;
    }
  }
  uVar2 = func_0x00f78b24();
  lVar3 = func_0x00f78ac0(uVar2,0);
  return (long *)(ulong)*(byte *)(lVar3 + 0x10);
}



// ============================================================
// RVA: 0x1502404 | Atlas.Geometry.Spline.get_Loop
// ============================================================

undefined1 Atlas_Geometry_Spline__get_Loop(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



// ============================================================
// RVA: 0x150240c | Atlas.Geometry.Spline..ctor
// ============================================================

void Atlas_Geometry_Spline___ctor(float param_1,long *param_2,long param_3,int param_4,int param_5)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  float *pfVar14;
  undefined1 *unaff_x29;
  undefined1 *puVar15;
  undefined *unaff_x30;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auStack_b0 [4];
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined1 *puVar3;
  
  puVar2 = auStack_b0;
  puVar15 = &stack0xfffffffffffffff0;
  iVar5 = param_4;
  fStack_a8 = param_1;
  if ((bRam0000000003eb4cf9 & 1) == 0) {
    func_0x00f78a20(0x3d1f8a0);
    func_0x00f78a20(0x3d3cb40);
    func_0x00f78a20(0x3d3cb48);
    bRam0000000003eb4cf9 = 1;
  }
  if (param_3 == 0) {
LAB_015027c8:
    func_0x00f78af4();
  }
  else {
    iVar6 = *(int *)(param_3 + 0x18);
    *(int *)(param_2 + 1) = iVar6;
    *(int *)((long)param_2 + 0xc) = iVar6;
    if (param_4 == 0) {
      if (iVar6 == 0) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar11 = *(long *)(param_3 + 0x10);
    }
    else {
      *(int *)((long)param_2 + 0xc) = iVar6 + -1;
      if (iVar6 == 0 || iVar6 + -1 == 0) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar11 = *(long *)(param_3 + 0x10) + (long)(iVar6 + -2) * 0xc;
    }
    fVar29 = *(float *)(lVar11 + 0x28);
    fVar24 = *(float *)(lVar11 + 0x24);
    fVar22 = *(float *)(lVar11 + 0x20);
    lVar11 = func_0x00f78a34(/*Atlas.Geometry.Spline.Knot[]_TypeInfo*/ uRam0000000003d1f8a0,(int)param_2[1]);
    uVar7 = *(uint *)(param_2 + 1);
    uVar8 = (ulong)uVar7;
    if (0 < (int)uVar7) {
      lVar12 = 0;
      uVar13 = 0;
      fStack_ac = -fStack_a8;
      pfVar14 = (float *)(lVar11 + 0x40);
      do {
        iVar6 = (int)uVar8;
        if (*(uint *)(param_3 + 0x18) <= uVar13) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          iVar6 = (int)param_2[1];
        }
        lVar10 = *(long *)(param_3 + 0x10);
        lVar1 = lVar10 + lVar12;
        fVar26 = *(float *)(lVar1 + 0x20);
        fVar27 = *(float *)(lVar1 + 0x24);
        fVar28 = *(float *)(lVar1 + 0x28);
        fVar25 = fVar27;
        fVar23 = fVar26;
        fStack_a4 = fVar28;
        if ((long)uVar13 < (long)(iVar6 + -1)) {
          if ((ulong)*(uint *)(param_3 + 0x18) <= uVar13 + 1) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            lVar10 = *(long *)(param_3 + 0x10);
          }
          lVar10 = lVar10 + lVar12;
          fVar23 = *(float *)(lVar10 + 0x2c);
          fVar25 = *(float *)(lVar10 + 0x30);
          fStack_a4 = *(float *)(lVar10 + 0x34);
        }
        if (cRam0000000003ca34fc == '\0') {
          func_0x00f78a20(0x3d232c0);
          cRam0000000003ca34fc = '\x01';
        }
        if ((((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
            (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) &&
           (func_0x00f78ad0(), cRam0000000003ca34fc == '\0')) {
          func_0x00f78a20(0x3d232c0);
          cRam0000000003ca34fc = '\x01';
        }
        if ((((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
            (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) &&
           (func_0x00f78ad0(), cRam0000000003ca34fc == '\0')) {
          func_0x00f78a20(0x3d232c0);
          cRam0000000003ca34fc = '\x01';
        }
        if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (lVar11 == 0) goto LAB_015027c8;
        if (*(uint *)(lVar11 + 0x18) <= uVar13) goto code_r0x015027cc;
        fVar22 = fVar26 - fVar22;
        fVar24 = fVar27 - fVar24;
        fVar29 = fVar28 - fVar29;
        fVar23 = fVar23 - fVar26;
        fVar25 = fVar25 - fVar27;
        fVar19 = fStack_a4 - fVar28;
        fVar20 = SQRT(fVar29 * fVar29 + fVar22 * fVar22 + fVar24 * fVar24);
        fVar21 = SQRT(fVar19 * fVar19 + fVar25 * fVar25 + fVar23 * fVar23);
        fVar22 = fVar22 + fVar23;
        fVar24 = fVar24 + fVar25;
        fVar29 = fVar29 + fVar19;
        fVar25 = 1.0 / SQRT(fVar29 * fVar29 + fVar24 * fVar24 + fVar22 * fVar22);
        pfVar14[-8] = fVar26;
        pfVar14[-7] = fVar27;
        pfVar14[-6] = fVar28;
        pfVar14[-5] = fVar20 * fVar22 * fVar25 * 0.5 * fStack_ac;
        pfVar14[-4] = fVar20 * fVar24 * fVar25 * 0.5 * fStack_ac;
        pfVar14[-3] = fVar20 * fVar29 * fVar25 * 0.5 * fStack_ac;
        pfVar14[-2] = fVar21 * fVar22 * fVar25 * 0.5 * fStack_a8;
        pfVar14[-1] = fVar21 * fVar24 * fVar25 * 0.5 * fStack_a8;
        *pfVar14 = fVar21 * fVar29 * fVar25 * 0.5 * fStack_a8;
        uVar13 = uVar13 + 1;
        lVar12 = lVar12 + 0xc;
        uVar7 = *(uint *)(param_2 + 1);
        uVar8 = (ulong)(int)uVar7;
        pfVar14 = pfVar14 + 9;
        fVar29 = fVar28;
        fVar24 = fVar27;
        fVar22 = fVar26;
      } while ((long)uVar13 < (long)uVar8);
    }
    if (param_4 == 0) {
code_r0x0150278c:
      *param_2 = lVar11;
      *(char *)(param_2 + 2) = (char)param_4;
      puVar2 = (undefined1 *)register0x00000008;
      puVar15 = unaff_x29;
      goto code_r0x015027d8;
    }
    if (lVar11 == 0) goto LAB_015027c8;
    if ((*(uint *)(lVar11 + 0x18) != 0) && (uVar7 - 1 < *(uint *)(lVar11 + 0x18))) {
      puVar9 = (undefined8 *)(lVar11 + 0x20 + (long)(int)(uVar7 - 1) * 0x24);
      uVar16 = *(undefined8 *)(lVar11 + 0x28);
      uVar4 = *(undefined8 *)(lVar11 + 0x20);
      uVar18 = *(undefined8 *)(lVar11 + 0x38);
      uVar17 = *(undefined8 *)(lVar11 + 0x30);
      *(undefined4 *)(puVar9 + 4) = *(undefined4 *)(lVar11 + 0x40);
      puVar9[1] = uVar16;
      *puVar9 = uVar4;
      puVar9[3] = uVar18;
      puVar9[2] = uVar17;
      goto code_r0x0150278c;
    }
  }
code_r0x015027cc:
  uVar4 = func_0x00f78b24();
  unaff_x30 = &Atlas_Geometry_Spline__Validate;
  param_2 = (long *)func_0x00f78ac0(uVar4,0);
code_r0x015027d8:
  do {
    puVar3 = puVar2 + -0x10;
    *(undefined1 **)(puVar2 + -0x10) = puVar15;
    *(undefined **)(puVar2 + -8) = unaff_x30;
    if ((char)param_2[2] == '\0') {
      return;
    }
    if (*param_2 != 0) {
      uVar7 = *(uint *)(*param_2 + 0x18);
      if ((uVar7 != 0) && ((int)param_2[1] - 1U < uVar7)) {
        return;
      }
      uVar4 = func_0x00f78b24();
      func_0x00f78ac0(uVar4,0);
    }
    unaff_x30 = &Atlas_Geometry_Spline___ctor;
    auVar30 = func_0x00f78af4();
    param_2 = auVar30._0_8_;
    *param_2 = auVar30._8_8_;
    *(int *)(param_2 + 1) = iVar5;
    *(int *)((long)param_2 + 0xc) = iVar5 - param_5;
    *(char *)(param_2 + 2) = (char)param_5;
    puVar2 = puVar2 + -0x10;
    puVar15 = puVar3;
  } while( true );
}



// ============================================================
// RVA: 0x15027d8 | Atlas.Geometry.Spline.Validate
// ============================================================

void Atlas_Geometry_Spline__Validate(long *param_1,undefined8 param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar4 [16];
  
  do {
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    if ((char)param_1[2] == '\0') {
      return;
    }
    if (*param_1 != 0) {
      uVar1 = *(uint *)(*param_1 + 0x18);
      if ((uVar1 != 0) && ((int)param_1[1] - 1U < uVar1)) {
        return;
      }
      uVar3 = func_0x00f78b24();
      func_0x00f78ac0(uVar3,0);
    }
    unaff_x30 = &Atlas_Geometry_Spline___ctor;
    auVar4 = func_0x00f78af4();
    param_1 = auVar4._0_8_;
    *param_1 = auVar4._8_8_;
    *(int *)(param_1 + 1) = param_3;
    *(int *)((long)param_1 + 0xc) = param_3 - param_4;
    *(char *)(param_1 + 2) = (char)param_4;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x10);
    unaff_x29 = puVar2;
  } while( true );
}



// ============================================================
// RVA: 0x1502820 | Atlas.Geometry.Spline..ctor
// ============================================================

void Atlas_Geometry_Spline___ctor(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auVar5 [16];
  
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  do {
    plVar4 = auVar5._0_8_;
    *plVar4 = auVar5._8_8_;
    *(int *)(plVar4 + 1) = param_3;
    *(int *)((long)plVar4 + 0xc) = param_3 - param_4;
    *(char *)(plVar4 + 2) = (char)param_4;
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    if ((char)plVar4[2] == '\0') {
      return;
    }
    if (*plVar4 != 0) {
      uVar1 = *(uint *)(*plVar4 + 0x18);
      if ((uVar1 != 0) && ((int)plVar4[1] - 1U < uVar1)) {
        return;
      }
      uVar3 = func_0x00f78b24();
      func_0x00f78ac0(uVar3,0);
    }
    unaff_x30 = Atlas_Geometry_Spline___ctor;
    auVar5 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x10);
    unaff_x29 = puVar2;
  } while( true );
}



// ============================================================
// RVA: 0x1502834 | Atlas.Geometry.Spline.KnotsEqual
// ============================================================

bool Atlas_Geometry_Spline__KnotsEqual(float *param_1,float *param_2)

{
  if (((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
      ((param_1[3] == param_2[3] && (param_1[4] == param_2[4])))) &&
     ((param_1[5] == param_2[5] && ((param_1[6] == param_2[6] && (param_1[7] == param_2[7])))))) {
    return param_1[8] == param_2[8];
  }
  return false;
}



// ============================================================
// RVA: 0x15028d0 | Atlas.Geometry.Spline.Reset
// ============================================================

void Atlas_Geometry_Spline__Reset(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}



// ============================================================
// RVA: 0x15028e0 | Atlas.Geometry.Spline.CreatePolyLine
// ============================================================

/* WARNING: Possible PIC construction at 0x015029c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01502a24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01502a90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01502a28) */
/* WARNING: Removing unreachable block (ram,0x01502a2c) */
/* WARNING: Removing unreachable block (ram,0x01502b60) */
/* WARNING: Removing unreachable block (ram,0x01502a44) */
/* WARNING: Removing unreachable block (ram,0x01502a7c) */
/* WARNING: Removing unreachable block (ram,0x01502a80) */
/* WARNING: Removing unreachable block (ram,0x01502a84) */
/* WARNING: Removing unreachable block (ram,0x015029c4) */
/* WARNING: Removing unreachable block (ram,0x015029dc) */
/* WARNING: Removing unreachable block (ram,0x015029e0) */
/* WARNING: Removing unreachable block (ram,0x015029e4) */
/* WARNING: Removing unreachable block (ram,0x01502a94) */
/* WARNING: Removing unreachable block (ram,0x01502ac0) */
/* WARNING: Removing unreachable block (ram,0x01502ac4) */
/* WARNING: Removing unreachable block (ram,0x01502a88) */
/* WARNING: Removing unreachable block (ram,0x01502ac8) */
/* WARNING: Removing unreachable block (ram,0x014c0ac0) */
/* WARNING: Removing unreachable block (ram,0x014c0adc) */
/* WARNING: Removing unreachable block (ram,0x014c0aec) */
/* WARNING: Removing unreachable block (ram,0x014c0b0c) */
/* WARNING: Removing unreachable block (ram,0x014c0af8) */
/* WARNING: Removing unreachable block (ram,0x014c0b10) */
/* WARNING: Removing unreachable block (ram,0x014c0ad0) */
/* WARNING: Removing unreachable block (ram,0x014c0b04) */

undefined1  [16] Atlas_Geometry_Spline__CreatePolyLine(undefined8 param_1,long param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  float extraout_s0;
  undefined4 extraout_s0_00;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uStack_190;
  undefined8 uStack_188;
  
  if ((bRam0000000003eb4cfa & 1) == 0) {
    func_0x00f78a20(0x3d3cb28);
    func_0x00f78a20(0x3d3bf38);
    func_0x00f78a20(0x3d3bf40);
    func_0x00f78a20(0x3d3cb38);
    func_0x00f78a20(0x3d3cb20);
    func_0x00f78a20(0x3d3bf30);
    func_0x00f78a20(0x3d3cb40);
    func_0x00f78a20(0x3d1e030);
    func_0x00f78a20(0x3d1de18);
    bRam0000000003eb4cfa = 1;
  }
  if (param_2 == 0) {
    func_0x00f78af4();
  }
  else if (param_3 - 1U < *(uint *)(param_2 + 0x18)) {
    return ZEXT416(*(uint *)(param_2 + (long)(int)(param_3 - 1U) * 8 + 0x20));
  }
  uVar2 = func_0x00f78b24();
  plVar3 = (long *)func_0x00f78ac0(uVar2,0);
  fVar7 = -extraout_s0;
  if (extraout_s0 != INFINITY) {
    fVar7 = extraout_s0;
  }
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    uVar5 = (uint)fVar7;
    if ((uVar5 < *(uint *)(lVar4 + 0x18)) && (uVar5 + 1 < *(uint *)(lVar4 + 0x18))) {
      lVar4 = lVar4 + (long)(int)uVar5 * 0x24;
      fVar10 = *(float *)(lVar4 + 0x20);
      fVar11 = *(float *)(lVar4 + 0x24);
      fVar12 = *(float *)(lVar4 + 0x28);
      fVar7 = *(float *)(lVar4 + 0x38);
      fVar8 = *(float *)(lVar4 + 0x3c);
      fVar9 = *(float *)(lVar4 + 0x40);
      if (cRam0000000003ca3502 == '\0') {
        func_0x00f78a20(0x3d232c0);
        cRam0000000003ca3502 = '\x01';
      }
      if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      auVar6 = /*Atlas.Geometry.Spline$$GetPoint*/ func_0x015031b8(extraout_s0 - (float)(int)extraout_s0,fVar10,fVar11,fVar12,
                               fVar10 + fVar7,fVar11 + fVar8,fVar12 + fVar9);
      return auVar6;
    }
    uVar2 = func_0x00f78b24();
    func_0x00f78ac0(uVar2,0);
  }
  uVar2 = func_0x00f78af4();
  uStack_190 = 0;
  uStack_188 = 0;
  iVar1 = /*SplineDistanceLookup$$GetSurroundingReadings*/ func_0x0150432c(uVar2,&uStack_188,&uStack_190);
  auVar6 = ZEXT816(0);
  if (iVar1 != 0) {
    auVar6 = /*SplineDistanceLookup.Reading$$EastimateLocation*/ func_0x0156b20c(uStack_188 & 0xffffffff,uStack_188._4_4_,(undefined4)uStack_190,
                             uStack_190._4_4_,extraout_s0_00,0);
  }
  return auVar6;
}



// ============================================================
// RVA: 0x1502ba8 | Atlas.Geometry.Spline.SampleSpline
// ============================================================

undefined1  [16] Atlas_Geometry_Spline__SampleSpline(float param_1,long *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  undefined4 extraout_s0;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  
  fVar6 = -param_1;
  if (param_1 != INFINITY) {
    fVar6 = param_1;
  }
  lVar3 = *param_2;
  if (lVar3 != 0) {
    uVar4 = (uint)fVar6;
    if ((uVar4 < *(uint *)(lVar3 + 0x18)) && (uVar4 + 1 < *(uint *)(lVar3 + 0x18))) {
      lVar3 = lVar3 + (long)(int)uVar4 * 0x24;
      fVar9 = *(float *)(lVar3 + 0x20);
      fVar10 = *(float *)(lVar3 + 0x24);
      fVar11 = *(float *)(lVar3 + 0x28);
      fVar6 = *(float *)(lVar3 + 0x38);
      fVar7 = *(float *)(lVar3 + 0x3c);
      fVar8 = *(float *)(lVar3 + 0x40);
      if (cRam0000000003ca3502 == '\0') {
        func_0x00f78a20(0x3d232c0);
        cRam0000000003ca3502 = '\x01';
      }
      if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      auVar5 = /*Atlas.Geometry.Spline$$GetPoint*/ func_0x015031b8(param_1 - (float)(int)param_1,fVar9,fVar10,fVar11,fVar9 + fVar6,
                               fVar10 + fVar7,fVar11 + fVar8);
      return auVar5;
    }
    uVar2 = func_0x00f78b24();
    func_0x00f78ac0(uVar2,0);
  }
  uVar2 = func_0x00f78af4();
  uStack_c0 = 0;
  uStack_b8 = 0;
  iVar1 = /*SplineDistanceLookup$$GetSurroundingReadings*/ func_0x0150432c(uVar2,&uStack_b8,&uStack_c0);
  auVar5 = ZEXT816(0);
  if (iVar1 != 0) {
    auVar5 = /*SplineDistanceLookup.Reading$$EastimateLocation*/ func_0x0156b20c(uStack_b8 & 0xffffffff,uStack_b8._4_4_,(undefined4)uStack_c0,
                             uStack_c0._4_4_,extraout_s0,0);
  }
  return auVar5;
}



// ============================================================
// RVA: 0x1502d5c | Atlas.Geometry.Spline.CreateDistanceLookup
// ============================================================

long Atlas_Geometry_Spline__CreateDistanceLookup
               (float param_1,long *param_2,undefined8 param_3,undefined8 *param_4,
               undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long unaff_x23;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float in_s5;
  float in_s6;
  float in_s7;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  
  if ((bRam0000000003eb4cfb & 1) == 0) {
    func_0x00f78a20(0x3d1f8a8);
    bRam0000000003eb4cfb = 1;
  }
  if (cRam0000000003ca3503 == '\0') {
    func_0x00f78a20(0x3d232c0);
    cRam0000000003ca3503 = '\x01';
  }
  if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  fVar9 = (float)(int)(1.0 / param_1);
  fVar13 = -fVar9;
  if (fVar9 != INFINITY) {
    fVar13 = fVar9;
  }
  lVar1 = func_0x00f78a34(/*SplineDistanceLookup.Reading[]_TypeInfo*/ uRam0000000003d1f8a8,((int)param_2[1] + -1) * (int)fVar13 + 1);
  lVar6 = 0x3d1f8a8;
  if (lVar1 == 0) {
LAB_01503054:
    func_0x00f78af4();
  }
  else {
    if (*(int *)(lVar1 + 0x18) == 0) goto LAB_01503148;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    lVar5 = *param_2;
    lVar6 = lVar1;
    if (lVar5 == 0) goto LAB_01503054;
    if (*(int *)(lVar5 + 0x18) == 0) goto LAB_01503148;
    in_s7 = *(float *)(lVar5 + 0x20);
    in_s5 = *(float *)(lVar5 + 0x24);
    in_s6 = *(float *)(lVar5 + 0x28);
    iVar4 = (int)param_2[1];
    unaff_x23 = 0x3ca3000;
    if (1 < iVar4) {
      fStack_cc = 0.0;
      uVar7 = 1;
      uVar8 = 1;
      fVar13 = in_s5;
      fVar9 = in_s6;
      fVar16 = in_s7;
      fVar14 = *(float *)(lVar5 + 0x3c);
      fVar20 = in_s6;
      fVar18 = in_s5;
      fVar15 = *(float *)(lVar5 + 0x40);
      fVar11 = in_s7;
      fVar22 = param_1;
      fVar23 = param_1;
      fVar10 = *(float *)(lVar5 + 0x38);
      do {
        if (*(uint *)(lVar5 + 0x18) <= uVar8) goto LAB_01503148;
        lVar5 = lVar5 + uVar8 * 0x24;
        in_s7 = *(float *)(lVar5 + 0x20);
        in_s5 = *(float *)(lVar5 + 0x24);
        in_s6 = *(float *)(lVar5 + 0x28);
        fVar24 = *(float *)(lVar5 + 0x38);
        fVar25 = *(float *)(lVar5 + 0x3c);
        fVar26 = *(float *)(lVar5 + 0x40);
        if (fVar22 < 1.0) {
          fVar21 = fVar20;
          fVar19 = fVar18;
          fVar17 = fVar11;
          do {
            fVar18 = fVar16;
            fVar20 = fVar13;
            fVar11 = (float)/*Atlas.Geometry.Spline$$GetPoint*/ func_0x015031b8(fVar22,fVar16,fVar13,fVar9,fVar10 + fVar16,
                                            fVar14 + fVar13,fVar15 + fVar9);
            if (cRam0000000003ca34fc == '\0') {
              func_0x00f78a20(0x3d232c0);
              cRam0000000003ca34fc = '\x01';
            }
            if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            if (*(uint *)(lVar1 + 0x18) <= uVar7) goto LAB_01503148;
            fStack_cc = fStack_cc +
                        SQRT((fVar20 - fVar21) * (fVar20 - fVar21) +
                             (fVar11 - fVar17) * (fVar11 - fVar17) +
                             (fVar18 - fVar19) * (fVar18 - fVar19));
            lVar5 = lVar1 + (long)(int)uVar7 * 8;
            *(float *)(lVar5 + 0x20) = fVar23;
            *(float *)(lVar5 + 0x24) = fStack_cc;
            uVar7 = uVar7 + 1;
            fVar22 = fVar22 + param_1;
            fVar23 = fVar23 + param_1;
            fVar21 = fVar20;
            fVar19 = fVar18;
            fVar17 = fVar11;
          } while (fVar22 < 1.0);
          iVar4 = (int)param_2[1];
        }
        uVar8 = uVar8 + 1;
        if ((long)iVar4 <= (long)uVar8) goto LAB_01503080;
        fVar22 = fVar22 + -1.0;
        lVar5 = *param_2;
        fVar13 = in_s5;
        fVar9 = in_s6;
        fVar16 = in_s7;
        fVar14 = fVar25;
        fVar15 = fVar26;
        fVar10 = fVar24;
      } while (lVar5 != 0);
      goto LAB_01503054;
    }
  }
  fStack_cc = 0.0;
  uVar7 = 1;
  lVar1 = lVar6;
  fVar11 = in_s7;
  fVar20 = in_s6;
  fVar18 = in_s5;
LAB_01503080:
  Atlas_Geometry_Spline__get_LastKnot(&fStack_c8,param_2);
  if (*(char *)(unaff_x23 + 0x4fc) == '\0') {
    func_0x00f78a20(0x3d232c0);
    *(undefined1 *)(unaff_x23 + 0x4fc) = 1;
  }
  if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (uVar7 < *(uint *)(lVar1 + 0x18)) {
    lVar6 = lVar1 + (long)(int)uVar7 * 8;
    *(float *)(lVar6 + 0x20) = (float)((int)param_2[1] + -1);
    *(float *)(lVar6 + 0x24) =
         fStack_cc +
         SQRT((fStack_c0 - fVar20) * (fStack_c0 - fVar20) +
              (fStack_c8 - fVar11) * (fStack_c8 - fVar11) +
              (fStack_c4 - fVar18) * (fStack_c4 - fVar18));
    return lVar1;
  }
LAB_01503148:
  uVar2 = func_0x00f78b24();
  auVar27 = func_0x00f78ac0(uVar2,0);
  puVar3 = auVar27._8_8_;
  uVar12 = *(undefined4 *)(puVar3 + 1);
  *param_5 = *puVar3;
  *(undefined4 *)(param_5 + 1) = uVar12;
  fVar13 = *(float *)(puVar3 + 1);
  fVar9 = *(float *)(puVar3 + 4);
  *param_6 = CONCAT44((float)((ulong)*puVar3 >> 0x20) + (float)((ulong)puVar3[3] >> 0x20),
                      (float)*puVar3 + (float)puVar3[3]);
  *(float *)(param_6 + 1) = fVar13 + fVar9;
  fVar13 = *(float *)(param_4 + 1);
  fVar9 = *(float *)((long)param_4 + 0x14);
  *param_7 = CONCAT44((float)((ulong)*param_4 >> 0x20) +
                      (float)((ulong)*(undefined8 *)((long)param_4 + 0xc) >> 0x20),
                      (float)*param_4 + (float)*(undefined8 *)((long)param_4 + 0xc));
  *(float *)(param_7 + 1) = fVar13 + fVar9;
  uVar12 = *(undefined4 *)(param_4 + 1);
  *param_8 = *param_4;
  *(undefined4 *)(param_8 + 1) = uVar12;
  return auVar27._0_8_;
}



// ============================================================
// RVA: 0x1503154 | Atlas.Geometry.Spline.GetPoints
// ============================================================

void Atlas_Geometry_Spline__GetPoints
               (undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
               undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = *(undefined4 *)(param_2 + 1);
  *param_4 = *param_2;
  *(undefined4 *)(param_4 + 1) = uVar1;
  fVar2 = *(float *)(param_2 + 1);
  fVar3 = *(float *)(param_2 + 4);
  *param_5 = CONCAT44((float)((ulong)*param_2 >> 0x20) + (float)((ulong)param_2[3] >> 0x20),
                      (float)*param_2 + (float)param_2[3]);
  *(float *)(param_5 + 1) = fVar2 + fVar3;
  fVar2 = *(float *)(param_3 + 1);
  fVar3 = *(float *)((long)param_3 + 0x14);
  *param_6 = CONCAT44((float)((ulong)*param_3 >> 0x20) +
                      (float)((ulong)*(undefined8 *)((long)param_3 + 0xc) >> 0x20),
                      (float)*param_3 + (float)*(undefined8 *)((long)param_3 + 0xc));
  *(float *)(param_6 + 1) = fVar2 + fVar3;
  uVar1 = *(undefined4 *)(param_3 + 1);
  *param_7 = *param_3;
  *(undefined4 *)(param_7 + 1) = uVar1;
  return;
}



// ============================================================
// RVA: 0x15031b8 | Atlas.Geometry.Spline.GetPoint
// ============================================================

float Atlas_Geometry_Spline__GetPoint
                (float param_1,float param_2,undefined1 param_3 [16],undefined1 param_4 [16],
                float param_5)

{
  float fVar1;
  float in_stack_00000000;
  undefined8 in_stack_00000008;
  
  fVar1 = 1.0 - param_1;
  return param_1 * param_1 * param_1 * in_stack_00000008._4_4_ +
         in_stack_00000000 * fVar1 * 3.0 * param_1 * param_1 +
         param_2 * fVar1 * fVar1 * fVar1 + param_5 * fVar1 * fVar1 * 3.0 * param_1;
}



// ============================================================
// RVA: 0x1503258 | Atlas.Geometry.Spline.SampleSpline
// ============================================================

/* WARNING: Possible PIC construction at 0x01503274: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01503278) */
/* WARNING: Removing unreachable block (ram,0x01502ba8) */
/* WARNING: Removing unreachable block (ram,0x01502bdc) */
/* WARNING: Removing unreachable block (ram,0x01502be0) */
/* WARNING: Removing unreachable block (ram,0x01502be4) */
/* WARNING: Removing unreachable block (ram,0x01502bec) */
/* WARNING: Removing unreachable block (ram,0x01502bfc) */
/* WARNING: Removing unreachable block (ram,0x01502cfc) */
/* WARNING: Removing unreachable block (ram,0x01502d08) */
/* WARNING: Removing unreachable block (ram,0x01502c08) */
/* WARNING: Removing unreachable block (ram,0x01502c3c) */
/* WARNING: Removing unreachable block (ram,0x01502c68) */
/* WARNING: Removing unreachable block (ram,0x01502c7c) */
/* WARNING: Removing unreachable block (ram,0x01502c84) */
/* WARNING: Removing unreachable block (ram,0x01502ca0) */

undefined1  [16]
Atlas_Geometry_Spline__SampleSpline
          (undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_s0;
  undefined4 uVar4;
  undefined4 extraout_var;
  undefined8 uVar5;
  undefined8 extraout_var_00;
  undefined1 auVar3 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_30 = param_3;
  uStack_28 = param_4;
  iVar1 = /*SplineDistanceLookup$$GetSurroundingReadings*/ func_0x0150432c(&uStack_30,&uStack_58,&uStack_60);
  uVar2 = 0;
  uVar4 = 0;
  uVar5 = 0;
  if (iVar1 != 0) {
    /*SplineDistanceLookup.Reading$$EastimateLocation*/ func_0x0156b20c((undefined4)uStack_58,uStack_58._4_4_,(undefined4)uStack_60,uStack_60._4_4_,
                    param_1,0);
    uVar2 = extraout_s0;
    uVar4 = extraout_var;
    uVar5 = extraout_var_00;
  }
  auVar3._4_4_ = uVar4;
  auVar3._0_4_ = uVar2;
  auVar3._8_8_ = uVar5;
  return auVar3;
}



// ============================================================
// RVA: 0x150328c | Atlas.Geometry.Spline.DrawGizmos
// ============================================================

void Atlas_Geometry_Spline__DrawGizmos
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,long *param_6,int param_7)

{
  float *pfVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *extraout_x8;
  ulong uVar4;
  long lVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
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
  
  /*UnityEngine.Gizmos$$set_color*/ func_0x0322fbcc(param_2,param_3,param_4,param_5,0);
  if (0 < *(int *)((long)param_6 + 0xc)) {
    uVar4 = 0;
    lVar5 = 0x40;
    do {
      lVar3 = *param_6;
      if (lVar3 == 0) {
        func_0x00f78af4();
LAB_015033d0:
        uVar2 = func_0x00f78b24();
        lVar5 = func_0x00f78ac0(uVar2,0);
        uVar2 = *(undefined8 *)(lVar5 + 0x50);
        uVar10 = *(undefined8 *)(lVar5 + 0x68);
        uVar9 = *(undefined8 *)(lVar5 + 0x60);
        extraout_x8[5] = *(undefined8 *)(lVar5 + 0x58);
        extraout_x8[4] = uVar2;
        extraout_x8[7] = uVar10;
        extraout_x8[6] = uVar9;
        extraout_x8[8] = *(undefined8 *)(lVar5 + 0x70);
        uVar10 = *(undefined8 *)(lVar5 + 0x30);
        uVar9 = *(undefined8 *)(lVar5 + 0x48);
        uVar2 = *(undefined8 *)(lVar5 + 0x40);
        extraout_x8[1] = *(undefined8 *)(lVar5 + 0x38);
        *extraout_x8 = uVar10;
        extraout_x8[3] = uVar9;
        extraout_x8[2] = uVar2;
        return;
      }
      if (*(uint *)(lVar3 + 0x18) <= uVar4) goto LAB_015033d0;
      pfVar1 = (float *)(lVar3 + lVar5);
      fVar12 = pfVar1[-8];
      fVar13 = pfVar1[-7];
      fVar14 = pfVar1[-6];
      fVar15 = pfVar1[-5];
      fVar16 = pfVar1[-4];
      fVar17 = pfVar1[-3];
      fVar18 = pfVar1[-2];
      fVar11 = pfVar1[-1];
      fVar6 = *pfVar1;
      /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(fVar12,fVar13,fVar14,0);
      /*UnityEngine.Gizmos$$DrawSphere*/ func_0x0322f8e8(0);
      if (param_7 != 0) {
        fVar16 = fVar13 + fVar16;
        fVar17 = fVar14 + fVar17;
        uVar7 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(fVar12 + fVar15,fVar16,fVar17,0);
        fVar13 = fVar13 + fVar11;
        fVar14 = fVar14 + fVar6;
        uVar8 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(fVar12 + fVar18,fVar13,fVar14,0);
        /*UnityEngine.Gizmos$$DrawLine*/ func_0x0322f78c(uVar7,fVar16,fVar17,uVar8,fVar13,fVar14,0);
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x24;
    } while ((long)uVar4 < (long)*(int *)((long)param_6 + 0xc));
  }
  return;
}



