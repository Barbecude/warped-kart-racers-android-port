// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Geometry.PolyLine

// ============================================================
// RVA: 0x14c0a1c | Atlas.Geometry.PolyLine.get_Points
// ============================================================

undefined8 Atlas_Geometry_PolyLine__get_Points(undefined8 *param_1)

{
  return *param_1;
}



// ============================================================
// RVA: 0x14c0a24 | Atlas.Geometry.PolyLine.get_StartPoint
// ============================================================

long * Atlas_Geometry_PolyLine__get_StartPoint(long *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  
  if (*param_1 == 0) {
    func_0x00f78af4();
  }
  else if (*(int *)(*param_1 + 0x18) != 0) {
    return param_1;
  }
  uVar1 = func_0x00f78b24();
  plVar2 = (long *)func_0x00f78ac0(uVar1,0);
  if (*plVar2 == 0) {
    func_0x00f78af4();
  }
  else if ((int)plVar2[1] - 1U < *(uint *)(*plVar2 + 0x18)) {
    return plVar2;
  }
  uVar1 = func_0x00f78b24();
  lVar3 = func_0x00f78ac0(uVar1,0);
  return (long *)(ulong)*(uint *)(lVar3 + 8);
}



// ============================================================
// RVA: 0x14c0a5c | Atlas.Geometry.PolyLine.get_EndPoint
// ============================================================

long * Atlas_Geometry_PolyLine__get_EndPoint(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*param_1 == 0) {
    func_0x00f78af4();
  }
  else if ((int)param_1[1] - 1U < *(uint *)(*param_1 + 0x18)) {
    return param_1;
  }
  uVar1 = func_0x00f78b24();
  lVar2 = func_0x00f78ac0(uVar1,0);
  return (long *)(ulong)*(uint *)(lVar2 + 8);
}



// ============================================================
// RVA: 0x14c0aa8 | Atlas.Geometry.PolyLine.get_PointCount
// ============================================================

undefined4 Atlas_Geometry_PolyLine__get_PointCount(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



// ============================================================
// RVA: 0x14c0ab0 | Atlas.Geometry.PolyLine.get_PointCountNoLoopPoint
// ============================================================

undefined4 Atlas_Geometry_PolyLine__get_PointCountNoLoopPoint(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ============================================================
// RVA: 0x14c0ab8 | Atlas.Geometry.PolyLine.get_IsLoop
// ============================================================

undefined1 Atlas_Geometry_PolyLine__get_IsLoop(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



// ============================================================
// RVA: 0x14c0ac0 | Atlas.Geometry.PolyLine..ctor
// ============================================================

void Atlas_Geometry_PolyLine___ctor(long *param_1,long param_2,int param_3,byte param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (param_3 < 2) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  else {
    *param_1 = param_2;
    *(int *)(param_1 + 1) = param_3;
    *(int *)((long)param_1 + 0xc) = param_3;
    *(byte *)(param_1 + 2) = param_4;
    if ((param_4 & 1) != 0) {
      *(uint *)((long)param_1 + 0xc) = param_3 - 1U;
      if (param_2 == 0) {
        func_0x00f78af4();
      }
      else if (param_3 - 1U < *(uint *)(param_2 + 0x18)) {
        return;
      }
      uVar1 = func_0x00f78b24();
      puVar2 = (undefined8 *)func_0x00f78ac0(uVar1,0);
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined1 *)(puVar2 + 2) = 0;
      return;
    }
  }
  return;
}



// ============================================================
// RVA: 0x14c0b1c | Atlas.Geometry.PolyLine.Reset
// ============================================================

void Atlas_Geometry_PolyLine__Reset(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}



// ============================================================
// RVA: 0x14c0b2c | Atlas.Geometry.PolyLine.CreateOptimised
// ============================================================

ulong Atlas_Geometry_PolyLine__CreateOptimised
                (float param_1,float param_2,float param_3,float param_4,long *param_5,long param_6,
                long param_7,int param_8,undefined8 *param_9,undefined8 *param_10,ulong *param_11)

{
  ulong uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  float fVar15;
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
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  
  fVar15 = param_2;
  if ((bRam0000000003eb4b18 & 1) == 0) {
    func_0x00f78a20(0x3d3cb28);
    func_0x00f78a20(0x3d3bf38);
    func_0x00f78a20(0x3d3ac90);
    func_0x00f78a20(0x3d3bf40);
    func_0x00f78a20(0x3d3cb38);
    func_0x00f78a20(0x3d3acc8);
    func_0x00f78a20(0x3d3ac88);
    func_0x00f78a20(0x3d3cb20);
    func_0x00f78a20(0x3d3bf30);
    func_0x00f78a20(0x3d3cb40);
    func_0x00f78a20(0x3d3d620);
    func_0x00f78a20(0x3d1e030);
    func_0x00f78a20(0x3d1de18);
    func_0x00f78a20(0x3d1daa8);
    bRam0000000003eb4b18 = 1;
  }
  lVar11 = param_5[1];
  lVar7 = func_0x00f78aec(/*System.Collections.Generic.List<float3>_TypeInfo*/ uRam0000000003d1e030);
  /*System.Collections.Generic.List<float3>$$.ctor*/ func_0x0249baa0(lVar7,(int)lVar11,uRam0000000003d3cb20);
  lVar11 = param_5[1];
  lVar8 = func_0x00f78aec(/*System.Collections.Generic.List<SplineLocation>_TypeInfo*/ uRam0000000003d1de18);
  /*System.Collections.Generic.List<SplineLocation>$$.ctor*/ func_0x02462a78(lVar8,(int)lVar11,uRam0000000003d3bf30);
  lVar11 = param_5[1];
  lVar9 = func_0x00f78aec(/*System.Collections.Generic.List<int>_TypeInfo*/ uRam0000000003d1daa8);
  /*System.Collections.Generic.List<int>$$.ctor*/ func_0x023db0e4(lVar9,(int)lVar11,uRam0000000003d3ac88);
  lVar11 = *param_5;
  if (lVar11 == 0) goto LAB_014c1274;
  if (*(int *)(lVar11 + 0x18) != 0) {
    if (param_7 == 0) goto LAB_014c1274;
    fVar28 = *(float *)(lVar11 + 0x20);
    fVar30 = *(float *)(lVar11 + 0x24);
    fVar32 = *(float *)(lVar11 + 0x28);
    if (*(int *)(param_7 + 0x18) == 0) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    if (lVar7 == 0) goto LAB_014c1274;
    lVar11 = *(long *)(param_7 + 0x10);
    fStack_c4 = *(float *)(lVar11 + 0x48);
    fStack_c8 = *(float *)(lVar11 + 0x4c);
    fStack_cc = *(float *)(lVar11 + 0x50);
    fStack_d0 = *(float *)(lVar11 + 0x54);
    fVar15 = fVar30;
    param_3 = fVar32;
    /*System.Collections.Generic.List<float3>$$Add*/ func_0x0249c6b4(fVar28,lVar7,uRam0000000003d3cb28);
    if (param_6 == 0) goto LAB_014c1274;
    if (*(int *)(param_6 + 0x18) != 0) {
      if ((lVar8 == 0) ||
         (/*System.Collections.Generic.List<SplineLocation>$$Add*/ func_0x02463660(*(undefined4 *)(param_6 + 0x20),lVar8,uRam0000000003d3bf38), lVar9 == 0))
      goto LAB_014c1274;
      /*System.Collections.Generic.List<int>$$Add*/ func_0x023dbccc(lVar9,0,uRam0000000003d3ac90);
      uVar2 = (int)param_5[1] - 1;
      if (1 < (int)uVar2) {
        iVar14 = 0;
        uVar13 = 1;
        do {
          lVar11 = *param_5;
          if (lVar11 == 0) goto LAB_014c1274;
          if (*(uint *)(lVar11 + 0x18) <= uVar13) goto LAB_014c1268;
          lVar11 = lVar11 + uVar13 * 0xc;
          fVar29 = *(float *)(lVar11 + 0x20);
          fVar31 = *(float *)(lVar11 + 0x24);
          fVar33 = *(float *)(lVar11 + 0x28);
          if (*(uint *)(param_7 + 0x18) <= uVar13) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar11 = *(long *)(param_7 + 0x10);
          lVar12 = lVar11 + uVar13 * 0x38;
          fVar24 = *(float *)(lVar12 + 0x48);
          fVar25 = *(float *)(lVar12 + 0x4c);
          fVar26 = *(float *)(lVar12 + 0x50);
          fVar27 = *(float *)(lVar12 + 0x54);
          if (iVar14 < param_8) {
            lVar12 = *param_5;
            if (lVar12 == 0) goto LAB_014c1274;
            uVar1 = uVar13 + 1;
            if (*(uint *)(lVar12 + 0x18) <= uVar1) goto LAB_014c1268;
            lVar12 = lVar12 + uVar1 * 0xc;
            fVar19 = *(float *)(lVar12 + 0x20);
            fVar15 = *(float *)(lVar12 + 0x24);
            fVar16 = *(float *)(lVar12 + 0x28);
            if (*(uint *)(param_7 + 0x18) <= uVar1) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              lVar11 = *(long *)(param_7 + 0x10);
            }
            lVar11 = lVar11 + uVar1 * 0x38;
            param_4 = *(float *)(lVar11 + 0x54);
            fVar17 = ABS(*(float *)(lVar11 + 0x48) - fVar24);
            bVar3 = false;
            bVar5 = true;
            if (ABS(fVar24 - fStack_c4) <= param_2) {
              bVar3 = false;
              bVar5 = true;
              if (!NAN(fVar17) && !NAN(param_2)) {
                bVar3 = fVar17 == param_2;
                bVar5 = param_2 <= fVar17;
              }
            }
            fVar17 = ABS(*(float *)(lVar11 + 0x48) - fStack_c4);
            bVar4 = false;
            bVar6 = true;
            if (!bVar5 || bVar3) {
              bVar4 = false;
              bVar6 = true;
              if (!NAN(fVar17) && !NAN(param_2)) {
                bVar4 = fVar17 == param_2;
                bVar6 = param_2 <= fVar17;
              }
            }
            fVar17 = ABS(fVar25 - fStack_c8);
            bVar3 = false;
            bVar5 = true;
            if (!bVar6 || bVar4) {
              bVar3 = false;
              bVar5 = true;
              if (!NAN(fVar17) && !NAN(param_2)) {
                bVar3 = fVar17 == param_2;
                bVar5 = param_2 <= fVar17;
              }
            }
            fVar17 = ABS(*(float *)(lVar11 + 0x4c) - fVar25);
            bVar4 = false;
            bVar6 = true;
            if (!bVar5 || bVar3) {
              bVar4 = false;
              bVar6 = true;
              if (!NAN(fVar17) && !NAN(param_2)) {
                bVar4 = fVar17 == param_2;
                bVar6 = param_2 <= fVar17;
              }
            }
            fVar17 = ABS(*(float *)(lVar11 + 0x4c) - fStack_c8);
            bVar3 = false;
            bVar5 = true;
            if (!bVar6 || bVar4) {
              bVar3 = false;
              bVar5 = true;
              if (!NAN(fVar17) && !NAN(param_2)) {
                bVar3 = fVar17 == param_2;
                bVar5 = param_2 <= fVar17;
              }
            }
            fVar17 = ABS(fVar26 - fStack_cc);
            bVar4 = false;
            bVar6 = true;
            if (!bVar5 || bVar3) {
              bVar4 = false;
              bVar6 = true;
              if (!NAN(fVar17) && !NAN(param_2)) {
                bVar4 = fVar17 == param_2;
                bVar6 = param_2 <= fVar17;
              }
            }
            fVar17 = ABS(*(float *)(lVar11 + 0x50) - fVar26);
            bVar3 = false;
            bVar5 = true;
            if (!bVar6 || bVar4) {
              bVar3 = false;
              bVar5 = true;
              if (!NAN(fVar17) && !NAN(param_2)) {
                bVar3 = fVar17 == param_2;
                bVar5 = param_2 <= fVar17;
              }
            }
            fVar17 = ABS(*(float *)(lVar11 + 0x50) - fStack_cc);
            bVar4 = false;
            bVar6 = true;
            if (!bVar5 || bVar3) {
              bVar4 = false;
              bVar6 = true;
              if (!NAN(fVar17) && !NAN(param_2)) {
                bVar4 = fVar17 == param_2;
                bVar6 = param_2 <= fVar17;
              }
            }
            fVar17 = ABS(fVar27 - fStack_d0);
            bVar3 = false;
            bVar5 = true;
            if (!bVar6 || bVar4) {
              bVar3 = false;
              bVar5 = true;
              if (!NAN(fVar17) && !NAN(param_2)) {
                bVar3 = fVar17 == param_2;
                bVar5 = param_2 <= fVar17;
              }
            }
            fVar17 = ABS(param_4 - fVar27);
            bVar4 = false;
            bVar6 = true;
            if (!bVar5 || bVar3) {
              bVar4 = false;
              bVar6 = true;
              if (!NAN(fVar17) && !NAN(param_2)) {
                bVar4 = fVar17 == param_2;
                bVar6 = param_2 <= fVar17;
              }
            }
            fVar17 = ABS(param_4 - fStack_d0);
            bVar3 = false;
            bVar5 = true;
            if (!bVar6 || bVar4) {
              bVar3 = false;
              bVar5 = true;
              if (!NAN(fVar17) && !NAN(param_2)) {
                bVar3 = fVar17 == param_2;
                bVar5 = param_2 <= fVar17;
              }
            }
            if (bVar5 && !bVar3) goto LAB_014c0ec0;
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
            fVar17 = fVar29 - fVar28;
            fVar20 = fVar31 - fVar30;
            fVar21 = fVar33 - fVar32;
            param_4 = fVar19 - fVar29;
            fVar22 = fVar15 - fVar31;
            fVar23 = fVar16 - fVar33;
            fVar19 = fVar19 - fVar28;
            fVar15 = fVar15 - fVar30;
            fVar16 = fVar16 - fVar32;
            fVar34 = 1.0 / SQRT(fVar21 * fVar21 + fVar17 * fVar17 + fVar20 * fVar20);
            fVar35 = 1.0 / SQRT(fVar23 * fVar23 + param_4 * param_4 + fVar22 * fVar22);
            param_4 = param_4 * fVar35;
            fVar36 = 1.0 / SQRT(fVar16 * fVar16 + fVar19 * fVar19 + fVar15 * fVar15);
            fVar18 = fVar21 * fVar34 * fVar16 * fVar36 +
                     fVar17 * fVar34 * fVar19 * fVar36 + fVar20 * fVar34 * fVar15 * fVar36;
            fVar15 = fVar16 * fVar36 * fVar23 * fVar35 +
                     fVar19 * fVar36 * param_4 + fVar15 * fVar36 * fVar22 * fVar35;
            bVar3 = true;
            bVar5 = false;
            if (param_1 <=
                fVar21 * fVar34 * fVar23 * fVar35 +
                fVar17 * fVar34 * param_4 + fVar20 * fVar34 * fVar22 * fVar35) {
              bVar3 = false;
              bVar5 = true;
              if (!NAN(fVar18) && !NAN(param_1)) {
                bVar3 = fVar18 < param_1;
                bVar5 = false;
              }
            }
            bVar4 = true;
            bVar6 = false;
            if (bVar3 == bVar5) {
              bVar4 = false;
              bVar6 = true;
              if (!NAN(fVar15) && !NAN(param_1)) {
                bVar4 = fVar15 < param_1;
                bVar6 = false;
              }
            }
            if (bVar4 != bVar6) goto LAB_014c0ec0;
            iVar14 = iVar14 + 1;
            param_3 = param_1;
          }
          else {
LAB_014c0ec0:
            fVar15 = fVar31;
            param_3 = fVar33;
            /*System.Collections.Generic.List<float3>$$Add*/ func_0x0249c6b4(fVar29,lVar7,uRam0000000003d3cb28);
            if (*(uint *)(param_6 + 0x18) <= uVar13) goto LAB_014c1268;
            /*System.Collections.Generic.List<SplineLocation>$$Add*/ func_0x02463660(*(undefined4 *)(param_6 + uVar13 * 4 + 0x20),lVar8,uRam0000000003d3bf38)
            ;
            /*System.Collections.Generic.List<int>$$Add*/ func_0x023dbccc(lVar9,uVar13,uRam0000000003d3ac90);
            iVar14 = 0;
            fVar28 = fVar29;
            fVar30 = fVar31;
            fVar32 = fVar33;
            fStack_d0 = fVar27;
            fStack_cc = fVar26;
            fStack_c8 = fVar25;
            fStack_c4 = fVar24;
          }
          uVar13 = uVar13 + 1;
          uVar2 = (int)param_5[1] - 1;
        } while ((long)uVar13 < (long)(int)uVar2);
      }
      lVar11 = *param_5;
      if (lVar11 == 0) goto LAB_014c1274;
      if (uVar2 < *(uint *)(lVar11 + 0x18)) {
        lVar11 = lVar11 + (long)(int)uVar2 * 0xc;
        fVar15 = *(float *)(lVar11 + 0x24);
        param_3 = *(float *)(lVar11 + 0x28);
        /*System.Collections.Generic.List<float3>$$Add*/ func_0x0249c6b4(*(undefined4 *)(lVar11 + 0x20),lVar7,uRam0000000003d3cb28);
        uVar2 = (int)param_5[1] - 1;
        if (uVar2 < *(uint *)(param_6 + 0x18)) {
          /*System.Collections.Generic.List<SplineLocation>$$Add*/ func_0x02463660(*(undefined4 *)(param_6 + (long)(int)uVar2 * 4 + 0x20),lVar8,
                          uRam0000000003d3bf38);
          /*System.Collections.Generic.List<int>$$Add*/ func_0x023dbccc(lVar9,(int)param_5[1] + -1,uRam0000000003d3ac90);
          uVar10 = /*System.Collections.Generic.List<float3>$$ToArray*/ func_0x0249e3e4(lVar7,uRam0000000003d3cb38);
          uStack_c0 = 0;
          uStack_b8 = 0;
          uStack_b0 = 0;
          Atlas_Geometry_PolyLine___ctor
                    (&uStack_c0,uVar10,*(undefined4 *)(lVar7 + 0x18),(char)param_5[2]);
          param_9[1] = uStack_b8;
          *param_9 = uStack_c0;
          param_9[2] = uStack_b0;
          uVar10 = /*System.Collections.Generic.List<SplineLocation>$$ToArray*/ func_0x024652d0(lVar8,uRam0000000003d3bf40);
          *param_10 = uVar10;
          uVar13 = /*System.Collections.Generic.List<int>$$ToArray*/ func_0x023dd918(lVar9,uRam0000000003d3acc8);
          *param_11 = uVar13;
          return uVar13;
        }
      }
    }
  }
LAB_014c1268:
  uVar10 = func_0x00f78b24();
  func_0x00f78ac0(uVar10,0);
LAB_014c1274:
  fVar28 = (float)func_0x00f78af4();
  if ((ABS(fVar15 - fVar28) <= param_4) && (ABS(param_3 - fVar15) <= param_4)) {
    return (ulong)(ABS(param_3 - fVar28) <= param_4);
  }
  return 0;
}



// ============================================================
// RVA: 0x14c1278 | Atlas.Geometry.PolyLine.CanCull
// ============================================================

bool Atlas_Geometry_PolyLine__CanCull(float param_1,float param_2,float param_3,float param_4)

{
  if ((ABS(param_2 - param_1) <= param_4) && (ABS(param_3 - param_2) <= param_4)) {
    return ABS(param_3 - param_1) <= param_4;
  }
  return false;
}



// ============================================================
// RVA: 0x14c12ac | Atlas.Geometry.PolyLine.CreateProjectionSamples
// ============================================================

long Atlas_Geometry_PolyLine__CreateProjectionSamples
               (undefined1 param_1 [16],undefined1 param_2 [16],ulong param_3,float param_4,
               long *param_5,long param_6,long param_7)

{
  long lVar1;
  float *pfVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar7;
  long lVar8;
  undefined8 *extraout_x8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar32 [16];
  undefined1 *puVar33;
  undefined *puVar34;
  float fStack_124;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  
  puVar33 = &stack0xfffffffffffffff0;
  uVar12 = 0x3d1e258;
  uVar6 = 0x3d3d608;
  uVar10 = 0x3d3d608;
  lVar8 = param_7;
  if ((bRam0000000003eb4b19 & 1) == 0) {
    func_0x00f78a20(0x3d3d610);
    func_0x00f78a20(0x3d3d608);
    func_0x00f78a20(0x3d3d620);
    func_0x00f78a20(0x3d1e258);
    func_0x00f78a20(0x3d232d0);
    bRam0000000003eb4b19 = 1;
  }
  lVar5 = func_0x00f78aec(/*System.Collections.Generic.List<PolyLine.ProjectionSample>_TypeInfo*/ uRam0000000003d1e258);
  /*System.Collections.Generic.List<PolyLine.ProjectionSample>$$.ctor*/ func_0x02564d34(lVar5,uRam0000000003d3d608);
  cVar3 = (char)param_5[2];
  lVar7 = *param_5;
  if (cVar3 == '\0') {
    uVar4 = 0x3d1e258;
    if (lVar7 != 0) {
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_014c1728;
      iVar9 = *(int *)((long)param_5 + 0xc);
      lVar1 = lVar7;
      goto LAB_014c13b4;
    }
  }
  else {
    uVar10 = uVar6;
    uVar4 = uVar12;
    if (lVar7 != 0) {
      iVar9 = *(int *)((long)param_5 + 0xc);
      if (*(uint *)(lVar7 + 0x18) <= iVar9 - 1U) goto LAB_014c1728;
      lVar1 = lVar7 + (long)(int)(iVar9 - 1U) * 0xc;
LAB_014c13b4:
      if (iVar9 < 1) {
code_r0x014c1698:
        if (cVar3 == '\0') {
          return lVar5;
        }
        uVar10 = uVar6;
        uVar4 = uVar12;
        if (lVar5 != 0) {
          if (*(int *)(lVar5 + 0x18) == 0) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar8 = *(long *)(lVar5 + 0x10);
          uStack_d8 = *(undefined8 *)(lVar8 + 0x28);
          uStack_e0 = *(undefined8 *)(lVar8 + 0x20);
          uStack_c8 = *(undefined8 *)(lVar8 + 0x38);
          uStack_d0 = *(undefined8 *)(lVar8 + 0x30);
          uStack_b8 = *(undefined8 *)(lVar8 + 0x48);
          uStack_c0 = *(undefined8 *)(lVar8 + 0x40);
          uStack_b0 = *(undefined8 *)(lVar8 + 0x50);
          /*System.Collections.Generic.List<PolyLine.ProjectionSample>$$Add*/ func_0x02565a9c(lVar5,&uStack_e0,lRam0000000003d3d610);
          return lVar5;
        }
      }
      else {
        uVar10 = uVar6;
        uVar4 = uVar12;
        if (lVar7 != 0) {
          uVar13 = 0;
          lVar14 = 0x34;
          uVar12 = 0x3ca3000;
          uVar6 = 0x3d232c0;
          uVar11 = 0x3d232c0;
          fVar21 = *(float *)(lVar1 + 0x28);
          fVar22 = *(float *)(lVar1 + 0x24);
          fVar18 = *(float *)(lVar1 + 0x20);
          do {
            uVar10 = uVar6;
            if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_014c1728;
            uVar10 = uVar11;
            uVar4 = uVar12;
            if (param_7 == 0) break;
            if (*(uint *)(param_7 + 0x18) <= uVar13) goto LAB_014c1728;
            lVar1 = lVar7 + lVar14;
            fVar24 = *(float *)(lVar1 + -0x14);
            fVar25 = *(float *)(lVar1 + -0x10);
            fVar26 = *(float *)(lVar1 + -0xc);
            uVar23 = *(undefined4 *)(param_7 + 0x20 + uVar13 * 4);
            fVar27 = fVar26;
            fVar28 = fVar25;
            fStack_124 = fVar24;
            if ((long)uVar13 < (long)((int)param_5[1] + -1)) {
              if ((ulong)*(uint *)(lVar7 + 0x18) <= uVar13 + 1) goto LAB_014c1728;
              pfVar2 = (float *)(lVar7 + lVar14);
              fStack_124 = pfVar2[-2];
              fVar28 = pfVar2[-1];
              fVar27 = *pfVar2;
            }
            if (cRam0000000003ca34fc == '\0') {
              func_0x00f78a20(0x3d232c0);
              cRam0000000003ca34fc = '\x01';
            }
            if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            if (((*(ushort *)(/*Atlas.Maths.Math3d_TypeInfo*/ lRam0000000003d232d0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Maths.Math3d_TypeInfo*/ lRam0000000003d232d0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            if (param_6 == 0) break;
            lVar7 = *(long *)(/*Atlas.Maths.Math3d_TypeInfo*/ lRam0000000003d232d0 + 0xb8);
            fVar19 = *(float *)(lVar7 + 0xc);
            fVar15 = *(float *)(lVar7 + 0x10);
            fVar16 = *(float *)(lVar7 + 0x14);
            fVar20 = fVar19;
            fVar17 = (float)/*ProjectionParameterSampler$$Sample*/ func_0x014cfdc0(uVar23,param_6,0);
            if (cRam0000000003ca34fc == '\0') {
              func_0x00f78a20(0x3d232c0);
              param_3 = param_3 & 0xffffffff;
              cRam0000000003ca34fc = '\x01';
            }
            if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
              func_0x00f78ad0();
              param_3 = param_3 & 0xffffffff;
            }
            if (lVar5 == 0) break;
            fVar18 = (fVar24 - fVar18) + (fStack_124 - fVar24);
            fVar28 = (fVar25 - fVar22) + (fVar28 - fVar25);
            fVar29 = (fVar26 - fVar21) + (fVar27 - fVar26);
            fVar21 = 1.0 / SQRT(fVar29 * fVar29 + fVar28 * fVar28 + fVar18 * fVar18);
            fVar18 = fVar18 * fVar21;
            fVar28 = fVar28 * fVar21;
            fVar29 = fVar29 * fVar21;
            fVar31 = fVar28 * fVar19 - fVar18 * fVar15;
            fVar22 = fVar29 * fVar15 - fVar28 * fVar16;
            fVar27 = fVar18 * fVar16 - fVar29 * fVar19;
            fVar21 = (float)param_3;
            fVar15 = (fVar24 + fVar22 * fVar21) - (fVar24 + fVar22 * fVar17);
            fVar16 = (param_4 + fVar25 + fVar27 * fVar21) - (fVar20 + fVar25 + fVar27 * fVar17);
            fVar19 = (fVar26 + fVar31 * fVar21) - (fVar26 + fVar31 * fVar17);
            fVar30 = 1.0 / SQRT(fVar19 * fVar19 + fVar15 * fVar15 + fVar16 * fVar16);
            fVar15 = fVar15 * fVar30;
            fVar19 = fVar19 * fVar30;
            fVar16 = fVar16 * fVar30;
            uStack_e0 = CONCAT44(fVar15,(int)uVar13);
            uStack_d8 = CONCAT44(fVar19,fVar16);
            uStack_d0 = CONCAT44(fVar27,fVar22);
            uStack_c8 = CONCAT44(fVar28 * fVar19 - fVar29 * fVar16,fVar31);
            uStack_c0 = CONCAT44(fVar18 * fVar16 - fVar28 * fVar15,fVar29 * fVar15 - fVar18 * fVar19
                                );
            uStack_b8 = CONCAT44(fVar20,fVar17);
            uStack_b0 = CONCAT44(param_4,fVar21);
            lVar8 = lRam0000000003d3d610;
            /*System.Collections.Generic.List<PolyLine.ProjectionSample>$$Add*/ func_0x02565a9c(lVar5,&uStack_e0);
            uVar13 = uVar13 + 1;
            if ((long)*(int *)((long)param_5 + 0xc) <= (long)uVar13) {
              cVar3 = (char)param_5[2];
              goto code_r0x014c1698;
            }
            lVar7 = *param_5;
            lVar14 = lVar14 + 0xc;
            fVar21 = fVar26;
            fVar22 = fVar25;
            fVar18 = fVar24;
          } while (lVar7 != 0);
        }
      }
    }
  }
  uVar12 = uVar4;
  func_0x00f78af4();
LAB_014c1728:
  uVar6 = func_0x00f78b24();
  auVar32 = func_0x00f78ac0(uVar6,0);
  puVar34 = &Atlas_Geometry_PolyLine__CreateProjectedPolyLine;
  if ((bRam0000000003eb4b1a & 1) == 0) {
    func_0x00f78a20(0x3d1f698);
    bRam0000000003eb4b1a = 1;
  }
  uVar6 = func_0x00f78a34(/*Unity.Mathematics.float3[]_TypeInfo*/ uRam0000000003d1f698,lVar8);
  lVar5 = /*System.Array$$Copy*/ func_0x0292b4cc(*auVar32._0_8_,auVar32._8_8_,uVar6,0,lVar8,0,in_x6,in_x7,uVar12,uVar10,
                          param_6,param_5,param_7,lVar5,puVar33,puVar34);
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  iVar9 = (int)lVar8;
  if (iVar9 < 2) {
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
    *(undefined1 *)(extraout_x8 + 2) = 0;
  }
  else {
    *extraout_x8 = uVar6;
    *(int *)(extraout_x8 + 1) = iVar9;
    *(int *)((long)extraout_x8 + 0xc) = iVar9;
  }
  return lVar5;
}



// ============================================================
// RVA: 0x14c1734 | Atlas.Geometry.PolyLine.CreateProjectedPolyLine
// ============================================================

void Atlas_Geometry_PolyLine__CreateProjectedPolyLine
               (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  
  if ((bRam0000000003eb4b1a & 1) == 0) {
    func_0x00f78a20(0x3d1f698);
    bRam0000000003eb4b1a = 1;
  }
  uVar1 = func_0x00f78a34(/*Unity.Mathematics.float3[]_TypeInfo*/ uRam0000000003d1f698,param_4);
  /*System.Array$$Copy*/ func_0x0292b4cc(*param_2,param_3,uVar1,0,param_4,0);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar2 = (int)param_4;
  if (iVar2 < 2) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  else {
    *param_1 = uVar1;
    *(int *)(param_1 + 1) = iVar2;
    *(int *)((long)param_1 + 0xc) = iVar2;
  }
  return;
}



// ============================================================
// RVA: 0x14c17e4 | Atlas.Geometry.PolyLine.CreateProjectedPolyLine
// ============================================================

/* WARNING: Possible PIC construction at 0x014c2260: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014c2264) */

long * Atlas_Geometry_PolyLine__CreateProjectedPolyLine
                 (undefined8 *param_1,undefined4 param_2,ulong param_3,ulong param_4,long *param_5,
                 long param_6,long *param_7,undefined8 *param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong *puVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  float *extraout_x1;
  float *pfVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  ulong uVar14;
  ulong uVar15;
  int *piVar16;
  float *pfVar17;
  uint uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  undefined1 **ppuVar22;
  undefined *puVar23;
  float fVar24;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  float fVar32;
  undefined8 uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [12];
  ulong uStack_260;
  long lStack_258;
  long *plStack_250;
  long lStack_248;
  long *plStack_240;
  undefined1 *puStack_230;
  undefined *puStack_228;
  undefined1 ***pppuStack_220;
  undefined *puStack_218;
  undefined8 uStack_208;
  undefined1 **ppuStack_180;
  undefined *puStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  undefined1 *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  
  fVar29 = (float)param_3;
  if ((bRam0000000003eb4b1b & 1) == 0) {
    func_0x00f78a20(0x3d3d618);
    func_0x00f78a20(0x3d3d620);
    func_0x00f78a20(0x3d1f698);
    bRam0000000003eb4b1b = 1;
  }
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  lVar7 = func_0x00f78a34(/*Unity.Mathematics.float3[]_TypeInfo*/ uRam0000000003d1f698,(int)param_5[1]);
  uVar18 = *(uint *)((long)param_5 + 0xc);
  if (0 < (int)uVar18) {
    lVar19 = 0;
    uVar20 = 0;
    lVar21 = 0x20;
    do {
      lVar12 = *param_5;
      if (lVar12 == 0) goto LAB_014c1a10;
      if (*(uint *)(lVar12 + 0x18) <= uVar20) goto LAB_014c1a14;
      if (param_6 == 0) goto LAB_014c1a10;
      uVar30 = *(undefined8 *)(lVar12 + lVar19 + 0x20);
      fVar32 = *(float *)(lVar12 + lVar19 + 0x28);
      if (*(uint *)(param_6 + 0x18) <= uVar20) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      puVar4 = (ulong *)(*(long *)(param_6 + 0x10) + lVar21);
      uStack_a8 = puVar4[3];
      param_3 = puVar4[2];
      uStack_98 = puVar4[5];
      uStack_a0 = puVar4[4];
      uStack_90 = puVar4[6];
      uStack_b8 = puVar4[1];
      param_4 = *puVar4;
      uStack_c0 = param_4;
      uStack_b0 = param_3;
      uStack_d0 = /*ProjectionParameters$$GetWidth*/ func_0x014cff70(param_2,&uStack_98,0);
      fVar24 = (float)/*ProjectionParameters$$GetHeight*/ func_0x014cff88(param_2,&uStack_98,0);
      if (lVar7 == 0) goto LAB_014c1a10;
      if (*(uint *)(lVar7 + 0x18) <= uVar20) goto LAB_014c1a14;
      fVar28 = (float)uStack_d0;
      fVar26 = (float)uVar30 + (float)uStack_b0 * fVar28;
      fVar27 = (float)((ulong)uVar30 >> 0x20) + (float)(uStack_b0 >> 0x20) * fVar28;
      param_4 = CONCAT44(fVar27,fVar26);
      fVar32 = fVar32 + fVar28 * (float)uStack_a8 + 0.0;
      param_3 = (ulong)(uint)fVar32;
      *(ulong *)(lVar7 + lVar19 + 0x20) = CONCAT44(fVar27 + fVar24 + fVar29,fVar26 + 0.0);
      *(float *)(lVar7 + lVar19 + 0x28) = fVar32;
      uVar20 = uVar20 + 1;
      uVar18 = *(uint *)((long)param_5 + 0xc);
      lVar19 = lVar19 + 0xc;
      lVar21 = lVar21 + 0x38;
    } while ((long)uVar20 < (long)(int)uVar18);
  }
  if ((char)param_5[2] == '\0') {
    bVar5 = false;
LAB_014c19d0:
    lVar19 = param_5[1];
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    plVar8 = (long *)Atlas_Geometry_PolyLine___ctor(param_1,lVar7,(int)lVar19,bVar5);
    return plVar8;
  }
  if (lVar7 == 0) {
LAB_014c1a10:
    func_0x00f78af4();
  }
  else if ((*(uint *)(lVar7 + 0x18) != 0) && (uVar18 < *(uint *)(lVar7 + 0x18))) {
    uVar25 = *(undefined4 *)(lVar7 + 0x28);
    puVar13 = (undefined8 *)(lVar7 + 0x20 + (long)(int)uVar18 * 0xc);
    *puVar13 = *(undefined8 *)(lVar7 + 0x20);
    *(undefined4 *)(puVar13 + 1) = uVar25;
    bVar5 = (char)param_5[2] != '\0';
    goto LAB_014c19d0;
  }
LAB_014c1a14:
  uVar30 = func_0x00f78b24();
  auVar34 = func_0x00f78ac0(uVar30,0);
  lVar7 = auVar34._8_8_;
  plVar11 = auVar34._0_8_;
  puStack_d8 = &Atlas_Geometry_PolyLine__CreateProjectedPolyLineWorldSpace;
  plVar8 = param_7;
  puStack_e0 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4b1c & 1) == 0) {
    func_0x00f78a20(0x3d22660);
    func_0x00f78a20(0x3d3d618);
    func_0x00f78a20(0x3d3d620);
    func_0x00f78a20(0x3d1f698);
    bRam0000000003eb4b1c = 1;
  }
  uStack_168 = 0;
  lVar19 = func_0x00f78a34(/*Unity.Mathematics.float3[]_TypeInfo*/ uRam0000000003d1f698,(int)plVar11[1]);
  uVar18 = *(uint *)((long)plVar11 + 0xc);
  puStack_170 = extraout_x8;
  if (0 < (int)uVar18) {
    uVar20 = 0;
    do {
      lVar21 = *plVar11;
      if (lVar21 == 0) goto code_r0x014c1c80;
      if (*(uint *)(lVar21 + 0x18) <= uVar20) goto code_r0x014c1c84;
      if (lVar7 == 0) goto code_r0x014c1c80;
      lVar21 = lVar21 + uVar20 * 0xc;
      uVar30 = *(undefined8 *)(lVar21 + 0x20);
      fVar29 = *(float *)(lVar21 + 0x28);
      if (*(uint *)(lVar7 + 0x18) <= uVar20) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if (param_7 == (long *)0x0) goto code_r0x014c1c80;
      lVar21 = *(long *)(lVar7 + 0x10) + uVar20 * 0x38;
      uVar25 = *(undefined4 *)(lVar21 + 0x20);
      uVar31 = *(undefined8 *)(lVar21 + 0x30);
      fVar32 = *(float *)(lVar21 + 0x38);
      lVar21 = *param_7;
      uVar14 = (ulong)*(ushort *)(lVar21 + 0x12a);
      if (uVar14 != 0) {
        piVar16 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == /*Atlas.Geometry.IWidthHeightSampler_TypeInfo*/ lRam0000000003d22660) {
            puVar13 = (undefined8 *)(lVar21 + (long)*piVar16 * 0x10 + 0x138);
            goto code_r0x014c1b84;
          }
          piVar16 = piVar16 + 4;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      puVar13 = (undefined8 *)func_0x00fac1f0(param_7,/*Atlas.Geometry.IWidthHeightSampler_TypeInfo*/ lRam0000000003d22660,0);
code_r0x014c1b84:
      plVar8 = (long *)((long)&uStack_168 + 4);
      param_8 = &uStack_168;
      (*(code *)*puVar13)(param_7,uVar25,plVar8,param_8,puVar13[1]);
      if (lVar19 == 0) goto code_r0x014c1c80;
      if (*(uint *)(lVar19 + 0x18) <= uVar20) goto code_r0x014c1c84;
      param_4 = 0;
      fVar29 = fVar29 + fVar32 * uStack_168._4_4_ + 0.0;
      param_3 = (ulong)(uint)fVar29;
      lVar21 = lVar19 + uVar20 * 0xc;
      *(ulong *)(lVar21 + 0x20) =
           CONCAT44((float)uStack_168 +
                    (float)((ulong)uVar30 >> 0x20) +
                    (float)((ulong)uVar31 >> 0x20) * uStack_168._4_4_,
                    (float)uVar30 + (float)uVar31 * uStack_168._4_4_ + 0.0);
      *(float *)(lVar21 + 0x28) = fVar29;
      uVar20 = uVar20 + 1;
      uVar18 = *(uint *)((long)plVar11 + 0xc);
    } while ((long)uVar20 < (long)(int)uVar18);
  }
  if ((char)plVar11[2] == '\0') {
    bVar5 = false;
code_r0x014c1c3c:
    lVar7 = plVar11[1];
    puStack_170[1] = 0;
    puStack_170[2] = 0;
    *puStack_170 = 0;
    plVar8 = (long *)Atlas_Geometry_PolyLine___ctor(puStack_170,lVar19,(int)lVar7,bVar5);
    return plVar8;
  }
  if (lVar19 == 0) {
code_r0x014c1c80:
    func_0x00f78af4();
  }
  else if ((*(uint *)(lVar19 + 0x18) != 0) && (uVar18 < *(uint *)(lVar19 + 0x18))) {
    uVar25 = *(undefined4 *)(lVar19 + 0x28);
    puVar13 = (undefined8 *)(lVar19 + 0x20 + (long)(int)uVar18 * 0xc);
    *puVar13 = *(undefined8 *)(lVar19 + 0x20);
    *(undefined4 *)(puVar13 + 1) = uVar25;
    bVar5 = (char)plVar11[2] != '\0';
    goto code_r0x014c1c3c;
  }
code_r0x014c1c84:
  uVar30 = func_0x00f78b24();
  auVar34 = func_0x00f78ac0(uVar30,0);
  lVar7 = auVar34._8_8_;
  plVar9 = auVar34._0_8_;
  puStack_178 = &Atlas_Geometry_PolyLine__CreateProjectedPolyLineObjectSpace;
  uVar20 = 0x3eb4000;
  plVar11 = plVar8;
  ppuStack_180 = &puStack_e0;
  if ((bRam0000000003eb4b1d & 1) == 0) {
    func_0x00f78a20(0x3d22660);
    func_0x00f78a20(0x3d3d618);
    func_0x00f78a20(0x3d3d620);
    func_0x00f78a20(0x3d1f698);
    bRam0000000003eb4b1d = 1;
  }
  uStack_208 = 0;
  lVar19 = func_0x00f78a34(/*Unity.Mathematics.float3[]_TypeInfo*/ uRam0000000003d1f698,(int)plVar9[1]);
  uVar6 = (uint)plVar11;
  uVar18 = *(uint *)((long)plVar9 + 0xc);
  if (0 < (int)uVar18) {
    uVar14 = 0;
    do {
      uVar6 = (uint)plVar11;
      lVar21 = *plVar9;
      if (lVar21 == 0) goto code_r0x014c1ee8;
      if (*(uint *)(lVar21 + 0x18) <= uVar14) goto code_r0x014c1eec;
      if (lVar7 == 0) goto code_r0x014c1ee8;
      lVar21 = lVar21 + uVar14 * 0xc;
      uVar30 = *(undefined8 *)(lVar21 + 0x20);
      fVar29 = *(float *)(lVar21 + 0x28);
      if (*(uint *)(lVar7 + 0x18) <= uVar14) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if (plVar8 == (long *)0x0) goto code_r0x014c1ee8;
      lVar21 = *(long *)(lVar7 + 0x10) + uVar14 * 0x38;
      uVar20 = (ulong)*(uint *)(lVar21 + 0x20);
      fVar24 = *(float *)(lVar21 + 0x2c);
      uVar33 = *(undefined8 *)(lVar21 + 0x24);
      uVar31 = *(undefined8 *)(lVar21 + 0x3c);
      fVar32 = *(float *)(lVar21 + 0x44);
      lVar21 = *plVar8;
      uVar15 = (ulong)*(ushort *)(lVar21 + 0x12a);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == /*Atlas.Geometry.IWidthHeightSampler_TypeInfo*/ lRam0000000003d22660) {
            puVar13 = (undefined8 *)(lVar21 + (long)*piVar16 * 0x10 + 0x138);
            goto code_r0x014c1df0;
          }
          piVar16 = piVar16 + 4;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
      puVar13 = (undefined8 *)func_0x00fac1f0(plVar8,/*Atlas.Geometry.IWidthHeightSampler_TypeInfo*/ lRam0000000003d22660,0);
code_r0x014c1df0:
      plVar11 = (long *)((long)&uStack_208 + 4);
      param_8 = &uStack_208;
      (*(code *)*puVar13)(plVar8,uVar20,plVar11,param_8,puVar13[1]);
      uVar6 = (uint)plVar11;
      if (lVar19 == 0) goto code_r0x014c1ee8;
      if (*(uint *)(lVar19 + 0x18) <= uVar14) goto code_r0x014c1eec;
      fVar32 = fVar32 * (float)uStack_208;
      param_4 = (ulong)(uint)fVar32;
      fVar32 = fVar29 + fVar24 * uStack_208._4_4_ + fVar32;
      param_3 = (ulong)(uint)fVar32;
      lVar21 = lVar19 + uVar14 * 0xc;
      *(ulong *)(lVar21 + 0x20) =
           CONCAT44((float)((ulong)uVar30 >> 0x20) +
                    (float)((ulong)uVar33 >> 0x20) * uStack_208._4_4_ +
                    (float)((ulong)uVar31 >> 0x20) * (float)uStack_208,
                    (float)uVar30 + (float)uVar33 * uStack_208._4_4_ +
                    (float)uVar31 * (float)uStack_208);
      *(float *)(lVar21 + 0x28) = fVar32;
      uVar14 = uVar14 + 1;
      uVar18 = *(uint *)((long)plVar9 + 0xc);
    } while ((long)uVar14 < (long)(int)uVar18);
  }
  if ((char)plVar9[2] != '\0') {
    if (lVar19 == 0) {
code_r0x014c1ee8:
      func_0x00f78af4();
    }
    else if ((*(uint *)(lVar19 + 0x18) != 0) && (uVar18 < *(uint *)(lVar19 + 0x18))) {
      uVar25 = *(undefined4 *)(lVar19 + 0x28);
      puVar13 = (undefined8 *)(lVar19 + 0x20 + (long)(int)uVar18 * 0xc);
      *puVar13 = *(undefined8 *)(lVar19 + 0x20);
      *(undefined4 *)(puVar13 + 1) = uVar25;
      bVar5 = (char)plVar9[2] != '\0';
      goto code_r0x014c1ea4;
    }
code_r0x014c1eec:
    uVar30 = func_0x00f78b24();
    auVar36 = func_0x00f78ac0(uVar30,0);
    puStack_218 = &Atlas_Geometry_PolyLine__GetPoint;
    lVar21 = *auVar36._0_8_;
    pppuStack_220 = &ppuStack_180;
    if (lVar21 == 0) {
      func_0x00f78af4();
    }
    else if (auVar36._8_4_ < *(uint *)(lVar21 + 0x18)) {
      return auVar36._0_8_;
    }
    uVar30 = func_0x00f78b24();
    auVar35 = func_0x00f78ac0(uVar30,0);
    uVar14 = auVar35._8_8_;
    plVar11 = auVar35._0_8_;
    puStack_228 = &Atlas_Geometry_PolyLine__TryGetPoints;
    ppuVar22 = &puStack_230;
    uStack_260 = uVar20;
    plStack_250 = plVar8;
    lStack_248 = lVar19;
    puStack_230 = (undefined1 *)&pppuStack_220;
    if ((bRam0000000003eb4b1e & 1) == 0) {
      lStack_258 = lVar7;
      plStack_240 = plVar9;
      puStack_230 = (undefined1 *)&pppuStack_220;
      func_0x00f78a20(0x3d3cb28);
      auVar34._8_8_ = lStack_258;
      auVar34._0_8_ = plStack_240;
      bRam0000000003eb4b1e = 1;
    }
    plVar8 = (long *)0x0;
    uVar18 = auVar35._8_4_;
    if ((((-1 < (int)uVar18) && (iVar2 = *(int *)((long)plVar11 + 0xc), (int)uVar6 < iVar2)) &&
        (-1 < (int)uVar6)) && ((int)uVar18 < iVar2)) {
      if ((char)plVar11[2] == '\0') {
        if (uVar6 < uVar18) {
          do {
            lStack_258 = auVar34._8_8_;
            plStack_240 = auVar34._0_8_;
            lVar7 = *plVar11;
            if (lVar7 == 0) goto code_r0x014c2194;
            uVar18 = (uint)uVar14;
            if (*(uint *)(lVar7 + 0x18) <= uVar18) goto code_r0x014c2198;
            if (param_8 == (undefined8 *)0x0) goto code_r0x014c2194;
            lVar7 = lVar7 + (long)(int)uVar18 * 0xc;
            param_3 = (ulong)*(uint *)(lVar7 + 0x24);
            param_4 = (ulong)*(uint *)(lVar7 + 0x28);
            plVar8 = (long *)/*System.Collections.Generic.List<float3>$$Add*/ func_0x0249c6b4(*(undefined4 *)(lVar7 + 0x20),param_8,
                                             uRam0000000003d3cb28);
            auVar34._8_8_ = lStack_258;
            auVar34._0_8_ = plStack_240;
            uVar14 = (ulong)(uVar18 - 1);
          } while ((int)uVar6 <= (int)(uVar18 - 1));
        }
        else {
          do {
            lStack_258 = auVar34._8_8_;
            plStack_240 = auVar34._0_8_;
            lVar7 = *plVar11;
            if (lVar7 == 0) goto code_r0x014c2194;
            uVar18 = (uint)uVar14;
            if (*(uint *)(lVar7 + 0x18) <= uVar18) goto code_r0x014c2198;
            if (param_8 == (undefined8 *)0x0) goto code_r0x014c2194;
            lVar7 = lVar7 + (long)(int)uVar18 * 0xc;
            param_3 = (ulong)*(uint *)(lVar7 + 0x24);
            param_4 = (ulong)*(uint *)(lVar7 + 0x28);
            plVar8 = (long *)/*System.Collections.Generic.List<float3>$$Add*/ func_0x0249c6b4(*(undefined4 *)(lVar7 + 0x20),param_8,
                                             uRam0000000003d3cb28);
            auVar34._8_8_ = lStack_258;
            auVar34._0_8_ = plStack_240;
            uVar14 = (ulong)(uVar18 + 1);
          } while ((int)(uVar18 + 1) <= (int)uVar6);
        }
      }
      else {
        iVar3 = uVar6 - uVar18;
        iVar1 = -iVar3;
        if (-1 < iVar3) {
          iVar1 = iVar3;
        }
        if (iVar1 < iVar3 + iVar2) {
          if (uVar6 < uVar18) {
            do {
              lStack_258 = auVar34._8_8_;
              plStack_240 = auVar34._0_8_;
              lVar7 = *plVar11;
              if (lVar7 == 0) {
code_r0x014c2194:
                lStack_258 = auVar34._8_8_;
                plStack_240 = auVar34._0_8_;
                func_0x00f78af4(plVar8);
                auVar34._8_8_ = lStack_258;
                auVar34._0_8_ = plStack_240;
code_r0x014c2198:
                lStack_258 = auVar34._8_8_;
                plStack_240 = auVar34._0_8_;
                uVar30 = func_0x00f78b24();
                puVar23 = &Atlas_Geometry_PolyLine__GetClosestPointIndex;
                plVar8 = (long *)func_0x00f78ac0(uVar30,0);
                puVar4 = &uStack_260;
                pfVar10 = extraout_x1;
                uVar30 = extraout_d0;
                while( true ) {
                  *(undefined1 ***)((long)puVar4 + -0x10) = ppuVar22;
                  *(undefined **)((long)puVar4 + -8) = puVar23;
                  uVar18 = *(uint *)((long)plVar8 + 0xc);
                  if ((int)uVar18 < 1) break;
                  lVar7 = *plVar8;
                  if (lVar7 != 0) {
                    uVar20 = 0;
                    plVar8 = (long *)0x0;
                    fVar29 = 3.4028235e+38;
                    pfVar17 = (float *)(lVar7 + 0x28);
                    while (uVar18 - 1 < *(uint *)(lVar7 + 0x18)) {
                      fVar32 = pfVar17[-2] - (float)uVar30;
                      fVar24 = pfVar17[-1] - (float)param_3;
                      fVar26 = *pfVar17 - (float)param_4;
                      fVar32 = fVar26 * fVar26 + fVar32 * fVar32 + fVar24 * fVar24;
                      uVar6 = (uint)uVar20;
                      if (fVar29 <= fVar32) {
                        uVar6 = (uint)plVar8;
                      }
                      plVar8 = (long *)(ulong)uVar6;
                      if (fVar29 <= fVar32) {
                        fVar32 = fVar29;
                      }
                      fVar29 = fVar32;
                      uVar20 = uVar20 + 1;
                      pfVar17 = pfVar17 + 3;
                      if (uVar18 == uVar20) goto code_r0x014c2234;
                    }
                    uVar30 = func_0x00f78b24(plVar8);
                    func_0x00f78ac0(uVar30,0);
                  }
                  plVar8 = (long *)func_0x00f78af4();
                  *(undefined1 **)((long)puVar4 + -0x20) = (undefined1 *)((long)puVar4 + -0x10);
                  *(undefined **)((long)puVar4 + -0x18) =
                       &Atlas_Geometry_PolyLine__GetClosestPointIndex;
                  ppuVar22 = (undefined1 **)((long)puVar4 + -0x20);
                  pfVar10 = (float *)((long)puVar4 + -0x24);
                  puVar23 = &UNK_014c2264;
                  puVar4 = (ulong *)((long)puVar4 + -0x30);
                  uVar30 = extraout_d0_00;
                }
                plVar8 = (long *)0x0;
                fVar29 = 3.4028235e+38;
code_r0x014c2234:
                *pfVar10 = fVar29;
                return plVar8;
              }
              uVar18 = (uint)uVar14;
              if (*(uint *)(lVar7 + 0x18) <= uVar18) goto code_r0x014c2198;
              if (param_8 == (undefined8 *)0x0) goto code_r0x014c2194;
              lVar7 = lVar7 + (long)(int)uVar18 * 0xc;
              param_3 = (ulong)*(uint *)(lVar7 + 0x24);
              param_4 = (ulong)*(uint *)(lVar7 + 0x28);
              plVar8 = (long *)/*System.Collections.Generic.List<float3>$$Add*/ func_0x0249c6b4(*(undefined4 *)(lVar7 + 0x20),param_8,
                                               uRam0000000003d3cb28);
              auVar34._8_8_ = lStack_258;
              auVar34._0_8_ = plStack_240;
              uVar14 = (ulong)(uVar18 - 1);
            } while ((int)uVar6 <= (int)(uVar18 - 1));
          }
          else {
            do {
              lStack_258 = auVar34._8_8_;
              plStack_240 = auVar34._0_8_;
              lVar7 = *plVar11;
              if (lVar7 == 0) goto code_r0x014c2194;
              uVar18 = (uint)uVar14;
              if (*(uint *)(lVar7 + 0x18) <= uVar18) goto code_r0x014c2198;
              if (param_8 == (undefined8 *)0x0) goto code_r0x014c2194;
              lVar7 = lVar7 + (long)(int)uVar18 * 0xc;
              param_3 = (ulong)*(uint *)(lVar7 + 0x24);
              param_4 = (ulong)*(uint *)(lVar7 + 0x28);
              plVar8 = (long *)/*System.Collections.Generic.List<float3>$$Add*/ func_0x0249c6b4(*(undefined4 *)(lVar7 + 0x20),param_8,
                                               uRam0000000003d3cb28);
              auVar34._8_8_ = lStack_258;
              auVar34._0_8_ = plStack_240;
              uVar14 = (ulong)(uVar18 + 1);
            } while ((int)(uVar18 + 1) <= (int)uVar6);
          }
        }
        else {
          lVar7 = (long)(int)uVar18 * 0xc;
          do {
            lStack_258 = auVar34._8_8_;
            plStack_240 = auVar34._0_8_;
            lVar19 = *plVar11;
            if (lVar19 == 0) goto code_r0x014c2194;
            if (*(uint *)(lVar19 + 0x18) <= (uint)uVar14) goto code_r0x014c2198;
            if (param_8 == (undefined8 *)0x0) goto code_r0x014c2194;
            lVar19 = lVar19 + lVar7;
            param_3 = (ulong)*(uint *)(lVar19 + 0x24);
            param_4 = (ulong)*(uint *)(lVar19 + 0x28);
            plVar8 = (long *)/*System.Collections.Generic.List<float3>$$Add*/ func_0x0249c6b4(*(undefined4 *)(lVar19 + 0x20),param_8,
                                             uRam0000000003d3cb28);
            auVar34._8_8_ = lStack_258;
            auVar34._0_8_ = plStack_240;
            uVar18 = (uint)uVar14 + 1;
            uVar14 = (ulong)uVar18;
            lVar7 = lVar7 + 0xc;
          } while ((int)uVar18 < *(int *)((long)plVar11 + 0xc));
          if (-1 < (int)uVar6) {
            uVar18 = 0;
            do {
              auVar34._8_8_ = lStack_258;
              auVar34._0_8_ = plStack_240;
              lVar7 = *plVar11;
              if (lVar7 == 0) goto code_r0x014c2194;
              if (*(uint *)(lVar7 + 0x18) <= uVar18) goto code_r0x014c2198;
              lVar7 = lVar7 + (long)(int)uVar18 * 0xc;
              param_3 = (ulong)*(uint *)(lVar7 + 0x24);
              param_4 = (ulong)*(uint *)(lVar7 + 0x28);
              plVar8 = (long *)/*System.Collections.Generic.List<float3>$$Add*/ func_0x0249c6b4(*(undefined4 *)(lVar7 + 0x20),param_8,
                                               uRam0000000003d3cb28);
              uVar18 = uVar18 + 1;
            } while ((int)uVar18 <= (int)uVar6);
          }
        }
      }
      plVar8 = (long *)((long)&MACH_HEADER.magic + 1);
    }
    return plVar8;
  }
  bVar5 = false;
code_r0x014c1ea4:
  lVar7 = plVar9[1];
  extraout_x8_00[1] = 0;
  extraout_x8_00[2] = 0;
  *extraout_x8_00 = 0;
  plVar8 = (long *)Atlas_Geometry_PolyLine___ctor(extraout_x8_00,lVar19,(int)lVar7,bVar5);
  return plVar8;
}



// ============================================================
// RVA: 0x14c1a20 | Atlas.Geometry.PolyLine.CreateProjectedPolyLineWorldSpace
// ============================================================

/* WARNING: Possible PIC construction at 0x014c2260: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014c2264) */

long * Atlas_Geometry_PolyLine__CreateProjectedPolyLineWorldSpace
                 (undefined8 *param_1,undefined1 param_2 [16],float param_3,ulong param_4,
                 long *param_5,long param_6,long *param_7,undefined8 *param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong *puVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  float *extraout_x1;
  float *pfVar11;
  long *plVar12;
  long lVar13;
  undefined8 *extraout_x8;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  int *piVar17;
  float *pfVar18;
  uint uVar19;
  ulong uVar20;
  undefined1 **ppuVar21;
  undefined *puVar22;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined4 uVar23;
  undefined8 uVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [12];
  ulong uStack_190;
  long lStack_188;
  long *plStack_180;
  long lStack_178;
  long *plStack_170;
  undefined1 *puStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_138;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  long *plVar10;
  
  plVar9 = param_7;
  if ((bRam0000000003eb4b1c & 1) == 0) {
    func_0x00f78a20(0x3d22660);
    func_0x00f78a20(0x3d3d618);
    func_0x00f78a20(0x3d3d620);
    func_0x00f78a20(0x3d1f698);
    bRam0000000003eb4b1c = 1;
  }
  uStack_98 = 0;
  lVar7 = func_0x00f78a34(/*Unity.Mathematics.float3[]_TypeInfo*/ uRam0000000003d1f698,(int)param_5[1]);
  uVar19 = *(uint *)((long)param_5 + 0xc);
  if (0 < (int)uVar19) {
    uVar20 = 0;
    puStack_a0 = param_1;
    do {
      lVar13 = *param_5;
      if (lVar13 == 0) goto LAB_014c1c80;
      if (*(uint *)(lVar13 + 0x18) <= uVar20) goto LAB_014c1c84;
      if (param_6 == 0) goto LAB_014c1c80;
      lVar13 = lVar13 + uVar20 * 0xc;
      uVar24 = *(undefined8 *)(lVar13 + 0x20);
      fVar25 = *(float *)(lVar13 + 0x28);
      if (*(uint *)(param_6 + 0x18) <= uVar20) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if (param_7 == (long *)0x0) goto LAB_014c1c80;
      lVar13 = *(long *)(param_6 + 0x10) + uVar20 * 0x38;
      uVar23 = *(undefined4 *)(lVar13 + 0x20);
      uVar26 = *(undefined8 *)(lVar13 + 0x30);
      fVar27 = *(float *)(lVar13 + 0x38);
      lVar13 = *param_7;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar15 != 0) {
        piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == /*Atlas.Geometry.IWidthHeightSampler_TypeInfo*/ lRam0000000003d22660) {
            puVar8 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_014c1b84;
          }
          piVar17 = piVar17 + 4;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
      puVar8 = (undefined8 *)func_0x00fac1f0(param_7,/*Atlas.Geometry.IWidthHeightSampler_TypeInfo*/ lRam0000000003d22660,0);
LAB_014c1b84:
      plVar9 = (long *)((long)&uStack_98 + 4);
      param_8 = &uStack_98;
      (*(code *)*puVar8)(param_7,uVar23,plVar9,param_8,puVar8[1]);
      if (lVar7 == 0) goto LAB_014c1c80;
      if (*(uint *)(lVar7 + 0x18) <= uVar20) goto LAB_014c1c84;
      param_4 = 0;
      param_3 = fVar25 + fVar27 * uStack_98._4_4_ + 0.0;
      lVar13 = lVar7 + uVar20 * 0xc;
      *(ulong *)(lVar13 + 0x20) =
           CONCAT44((float)uStack_98 +
                    (float)((ulong)uVar24 >> 0x20) +
                    (float)((ulong)uVar26 >> 0x20) * uStack_98._4_4_,
                    (float)uVar24 + (float)uVar26 * uStack_98._4_4_ + 0.0);
      *(float *)(lVar13 + 0x28) = param_3;
      uVar20 = uVar20 + 1;
      uVar19 = *(uint *)((long)param_5 + 0xc);
      param_1 = puStack_a0;
    } while ((long)uVar20 < (long)(int)uVar19);
  }
  if ((char)param_5[2] == '\0') {
    bVar5 = false;
code_r0x014c1c3c:
    lVar13 = param_5[1];
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    plVar9 = (long *)Atlas_Geometry_PolyLine___ctor(param_1,lVar7,(int)lVar13,bVar5);
    return plVar9;
  }
  if (lVar7 == 0) {
LAB_014c1c80:
    func_0x00f78af4();
  }
  else if ((*(uint *)(lVar7 + 0x18) != 0) && (uVar19 < *(uint *)(lVar7 + 0x18))) {
    uVar23 = *(undefined4 *)(lVar7 + 0x28);
    puVar8 = (undefined8 *)(lVar7 + 0x20 + (long)(int)uVar19 * 0xc);
    *puVar8 = *(undefined8 *)(lVar7 + 0x20);
    *(undefined4 *)(puVar8 + 1) = uVar23;
    bVar5 = (char)param_5[2] != '\0';
    goto code_r0x014c1c3c;
  }
LAB_014c1c84:
  uVar24 = func_0x00f78b24();
  auVar30 = func_0x00f78ac0(uVar24,0);
  lVar7 = auVar30._8_8_;
  plVar10 = auVar30._0_8_;
  puStack_a8 = &Atlas_Geometry_PolyLine__CreateProjectedPolyLineObjectSpace;
  uVar20 = 0x3eb4000;
  plVar12 = plVar9;
  puStack_b0 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4b1d & 1) == 0) {
    func_0x00f78a20(0x3d22660);
    func_0x00f78a20(0x3d3d618);
    func_0x00f78a20(0x3d3d620);
    func_0x00f78a20(0x3d1f698);
    bRam0000000003eb4b1d = 1;
  }
  uStack_138 = 0;
  lVar13 = func_0x00f78a34(/*Unity.Mathematics.float3[]_TypeInfo*/ uRam0000000003d1f698,(int)plVar10[1]);
  uVar6 = (uint)plVar12;
  uVar19 = *(uint *)((long)plVar10 + 0xc);
  if (0 < (int)uVar19) {
    uVar15 = 0;
    do {
      uVar6 = (uint)plVar12;
      lVar14 = *plVar10;
      if (lVar14 == 0) goto code_r0x014c1ee8;
      if (*(uint *)(lVar14 + 0x18) <= uVar15) goto code_r0x014c1eec;
      if (lVar7 == 0) goto code_r0x014c1ee8;
      lVar14 = lVar14 + uVar15 * 0xc;
      uVar24 = *(undefined8 *)(lVar14 + 0x20);
      fVar25 = *(float *)(lVar14 + 0x28);
      if (*(uint *)(lVar7 + 0x18) <= uVar15) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if (plVar9 == (long *)0x0) goto code_r0x014c1ee8;
      lVar14 = *(long *)(lVar7 + 0x10) + uVar15 * 0x38;
      uVar20 = (ulong)*(uint *)(lVar14 + 0x20);
      fVar29 = *(float *)(lVar14 + 0x2c);
      uVar28 = *(undefined8 *)(lVar14 + 0x24);
      uVar26 = *(undefined8 *)(lVar14 + 0x3c);
      fVar27 = *(float *)(lVar14 + 0x44);
      lVar14 = *plVar9;
      uVar16 = (ulong)*(ushort *)(lVar14 + 0x12a);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == /*Atlas.Geometry.IWidthHeightSampler_TypeInfo*/ lRam0000000003d22660) {
            puVar8 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x014c1df0;
          }
          piVar17 = piVar17 + 4;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
      puVar8 = (undefined8 *)func_0x00fac1f0(plVar9,/*Atlas.Geometry.IWidthHeightSampler_TypeInfo*/ lRam0000000003d22660,0);
code_r0x014c1df0:
      plVar12 = (long *)((long)&uStack_138 + 4);
      param_8 = &uStack_138;
      (*(code *)*puVar8)(plVar9,uVar20,plVar12,param_8,puVar8[1]);
      uVar6 = (uint)plVar12;
      if (lVar13 == 0) goto code_r0x014c1ee8;
      if (*(uint *)(lVar13 + 0x18) <= uVar15) goto code_r0x014c1eec;
      fVar27 = fVar27 * (float)uStack_138;
      param_4 = (ulong)(uint)fVar27;
      param_3 = fVar25 + fVar29 * uStack_138._4_4_ + fVar27;
      lVar14 = lVar13 + uVar15 * 0xc;
      *(ulong *)(lVar14 + 0x20) =
           CONCAT44((float)((ulong)uVar24 >> 0x20) +
                    (float)((ulong)uVar28 >> 0x20) * uStack_138._4_4_ +
                    (float)((ulong)uVar26 >> 0x20) * (float)uStack_138,
                    (float)uVar24 + (float)uVar28 * uStack_138._4_4_ +
                    (float)uVar26 * (float)uStack_138);
      *(float *)(lVar14 + 0x28) = param_3;
      uVar15 = uVar15 + 1;
      uVar19 = *(uint *)((long)plVar10 + 0xc);
    } while ((long)uVar15 < (long)(int)uVar19);
  }
  if ((char)plVar10[2] != '\0') {
    if (lVar13 == 0) {
code_r0x014c1ee8:
      func_0x00f78af4();
    }
    else if ((*(uint *)(lVar13 + 0x18) != 0) && (uVar19 < *(uint *)(lVar13 + 0x18))) {
      uVar23 = *(undefined4 *)(lVar13 + 0x28);
      puVar8 = (undefined8 *)(lVar13 + 0x20 + (long)(int)uVar19 * 0xc);
      *puVar8 = *(undefined8 *)(lVar13 + 0x20);
      *(undefined4 *)(puVar8 + 1) = uVar23;
      bVar5 = (char)plVar10[2] != '\0';
      goto code_r0x014c1ea4;
    }
code_r0x014c1eec:
    uVar24 = func_0x00f78b24();
    auVar32 = func_0x00f78ac0(uVar24,0);
    puStack_148 = &Atlas_Geometry_PolyLine__GetPoint;
    lVar14 = *auVar32._0_8_;
    ppuStack_150 = &puStack_b0;
    if (lVar14 == 0) {
      func_0x00f78af4();
    }
    else if (auVar32._8_4_ < *(uint *)(lVar14 + 0x18)) {
      return auVar32._0_8_;
    }
    uVar24 = func_0x00f78b24();
    auVar31 = func_0x00f78ac0(uVar24,0);
    uVar15 = auVar31._8_8_;
    plVar12 = auVar31._0_8_;
    puStack_158 = &Atlas_Geometry_PolyLine__TryGetPoints;
    ppuVar21 = &puStack_160;
    uStack_190 = uVar20;
    plStack_180 = plVar9;
    lStack_178 = lVar13;
    puStack_160 = (undefined1 *)&ppuStack_150;
    if ((bRam0000000003eb4b1e & 1) == 0) {
      lStack_188 = lVar7;
      plStack_170 = plVar10;
      puStack_160 = (undefined1 *)&ppuStack_150;
      func_0x00f78a20(0x3d3cb28);
      auVar30._8_8_ = lStack_188;
      auVar30._0_8_ = plStack_170;
      bRam0000000003eb4b1e = 1;
    }
    plVar9 = (long *)0x0;
    uVar19 = auVar31._8_4_;
    if ((((-1 < (int)uVar19) && (iVar2 = *(int *)((long)plVar12 + 0xc), (int)uVar6 < iVar2)) &&
        (-1 < (int)uVar6)) && ((int)uVar19 < iVar2)) {
      if ((char)plVar12[2] == '\0') {
        if (uVar6 < uVar19) {
          do {
            lStack_188 = auVar30._8_8_;
            plStack_170 = auVar30._0_8_;
            lVar7 = *plVar12;
            if (lVar7 == 0) goto code_r0x014c2194;
            uVar19 = (uint)uVar15;
            if (*(uint *)(lVar7 + 0x18) <= uVar19) goto code_r0x014c2198;
            if (param_8 == (undefined8 *)0x0) goto code_r0x014c2194;
            lVar7 = lVar7 + (long)(int)uVar19 * 0xc;
            param_3 = *(float *)(lVar7 + 0x24);
            param_4 = (ulong)*(uint *)(lVar7 + 0x28);
            plVar9 = (long *)/*System.Collections.Generic.List<float3>$$Add*/ func_0x0249c6b4(*(undefined4 *)(lVar7 + 0x20),param_8,
                                             uRam0000000003d3cb28);
            auVar30._8_8_ = lStack_188;
            auVar30._0_8_ = plStack_170;
            uVar15 = (ulong)(uVar19 - 1);
          } while ((int)uVar6 <= (int)(uVar19 - 1));
        }
        else {
          do {
            lStack_188 = auVar30._8_8_;
            plStack_170 = auVar30._0_8_;
            lVar7 = *plVar12;
            if (lVar7 == 0) goto code_r0x014c2194;
            uVar19 = (uint)uVar15;
            if (*(uint *)(lVar7 + 0x18) <= uVar19) goto code_r0x014c2198;
            if (param_8 == (undefined8 *)0x0) goto code_r0x014c2194;
            lVar7 = lVar7 + (long)(int)uVar19 * 0xc;
            param_3 = *(float *)(lVar7 + 0x24);
            param_4 = (ulong)*(uint *)(lVar7 + 0x28);
            plVar9 = (long *)/*System.Collections.Generic.List<float3>$$Add*/ func_0x0249c6b4(*(undefined4 *)(lVar7 + 0x20),param_8,
                                             uRam0000000003d3cb28);
            auVar30._8_8_ = lStack_188;
            auVar30._0_8_ = plStack_170;
            uVar15 = (ulong)(uVar19 + 1);
          } while ((int)(uVar19 + 1) <= (int)uVar6);
        }
      }
      else {
        iVar3 = uVar6 - uVar19;
        iVar1 = -iVar3;
        if (-1 < iVar3) {
          iVar1 = iVar3;
        }
        if (iVar1 < iVar3 + iVar2) {
          if (uVar6 < uVar19) {
            do {
              lStack_188 = auVar30._8_8_;
              plStack_170 = auVar30._0_8_;
              lVar7 = *plVar12;
              if (lVar7 == 0) {
code_r0x014c2194:
                lStack_188 = auVar30._8_8_;
                plStack_170 = auVar30._0_8_;
                func_0x00f78af4(plVar9);
                auVar30._8_8_ = lStack_188;
                auVar30._0_8_ = plStack_170;
code_r0x014c2198:
                lStack_188 = auVar30._8_8_;
                plStack_170 = auVar30._0_8_;
                uVar24 = func_0x00f78b24();
                puVar22 = &Atlas_Geometry_PolyLine__GetClosestPointIndex;
                plVar9 = (long *)func_0x00f78ac0(uVar24,0);
                puVar4 = &uStack_190;
                pfVar11 = extraout_x1;
                uVar24 = extraout_d0;
                while( true ) {
                  *(undefined1 ***)((long)puVar4 + -0x10) = ppuVar21;
                  *(undefined **)((long)puVar4 + -8) = puVar22;
                  uVar19 = *(uint *)((long)plVar9 + 0xc);
                  if ((int)uVar19 < 1) break;
                  lVar7 = *plVar9;
                  if (lVar7 != 0) {
                    uVar20 = 0;
                    plVar9 = (long *)0x0;
                    pfVar18 = (float *)(lVar7 + 0x28);
                    fVar27 = 3.4028235e+38;
                    while (uVar19 - 1 < *(uint *)(lVar7 + 0x18)) {
                      fVar25 = pfVar18[-2] - (float)uVar24;
                      fVar29 = *pfVar18 - (float)param_4;
                      fVar25 = fVar29 * fVar29 +
                               fVar25 * fVar25 + (pfVar18[-1] - param_3) * (pfVar18[-1] - param_3);
                      uVar6 = (uint)uVar20;
                      if (fVar27 <= fVar25) {
                        uVar6 = (uint)plVar9;
                      }
                      plVar9 = (long *)(ulong)uVar6;
                      if (fVar27 <= fVar25) {
                        fVar25 = fVar27;
                      }
                      uVar20 = uVar20 + 1;
                      pfVar18 = pfVar18 + 3;
                      fVar27 = fVar25;
                      if (uVar19 == uVar20) goto code_r0x014c2234;
                    }
                    uVar24 = func_0x00f78b24(plVar9);
                    func_0x00f78ac0(uVar24,0);
                  }
                  plVar9 = (long *)func_0x00f78af4();
                  *(undefined1 **)((long)puVar4 + -0x20) = (undefined1 *)((long)puVar4 + -0x10);
                  *(undefined **)((long)puVar4 + -0x18) =
                       &Atlas_Geometry_PolyLine__GetClosestPointIndex;
                  ppuVar21 = (undefined1 **)((long)puVar4 + -0x20);
                  pfVar11 = (float *)((long)puVar4 + -0x24);
                  puVar22 = &UNK_014c2264;
                  puVar4 = (ulong *)((long)puVar4 + -0x30);
                  uVar24 = extraout_d0_00;
                }
                plVar9 = (long *)0x0;
                fVar25 = 3.4028235e+38;
code_r0x014c2234:
                *pfVar11 = fVar25;
                return plVar9;
              }
              uVar19 = (uint)uVar15;
              if (*(uint *)(lVar7 + 0x18) <= uVar19) goto code_r0x014c2198;
              if (param_8 == (undefined8 *)0x0) goto code_r0x014c2194;
              lVar7 = lVar7 + (long)(int)uVar19 * 0xc;
              param_3 = *(float *)(lVar7 + 0x24);
              param_4 = (ulong)*(uint *)(lVar7 + 0x28);
              plVar9 = (long *)/*System.Collections.Generic.List<float3>$$Add*/ func_0x0249c6b4(*(undefined4 *)(lVar7 + 0x20),param_8,
                                               uRam0000000003d3cb28);
              auVar30._8_8_ = lStack_188;
              auVar30._0_8_ = plStack_170;
              uVar15 = (ulong)(uVar19 - 1);
            } while ((int)uVar6 <= (int)(uVar19 - 1));
          }
          else {
            do {
              lStack_188 = auVar30._8_8_;
              plStack_170 = auVar30._0_8_;
              lVar7 = *plVar12;
              if (lVar7 == 0) goto code_r0x014c2194;
              uVar19 = (uint)uVar15;
              if (*(uint *)(lVar7 + 0x18) <= uVar19) goto code_r0x014c2198;
              if (param_8 == (undefined8 *)0x0) goto code_r0x014c2194;
              lVar7 = lVar7 + (long)(int)uVar19 * 0xc;
              param_3 = *(float *)(lVar7 + 0x24);
              param_4 = (ulong)*(uint *)(lVar7 + 0x28);
              plVar9 = (long *)/*System.Collections.Generic.List<float3>$$Add*/ func_0x0249c6b4(*(undefined4 *)(lVar7 + 0x20),param_8,
                                               uRam0000000003d3cb28);
              auVar30._8_8_ = lStack_188;
              auVar30._0_8_ = plStack_170;
              uVar15 = (ulong)(uVar19 + 1);
            } while ((int)(uVar19 + 1) <= (int)uVar6);
          }
        }
        else {
          lVar7 = (long)(int)uVar19 * 0xc;
          do {
            lStack_188 = auVar30._8_8_;
            plStack_170 = auVar30._0_8_;
            lVar13 = *plVar12;
            if (lVar13 == 0) goto code_r0x014c2194;
            if (*(uint *)(lVar13 + 0x18) <= (uint)uVar15) goto code_r0x014c2198;
            if (param_8 == (undefined8 *)0x0) goto code_r0x014c2194;
            lVar13 = lVar13 + lVar7;
            param_3 = *(float *)(lVar13 + 0x24);
            param_4 = (ulong)*(uint *)(lVar13 + 0x28);
            plVar9 = (long *)/*System.Collections.Generic.List<float3>$$Add*/ func_0x0249c6b4(*(undefined4 *)(lVar13 + 0x20),param_8,
                                             uRam0000000003d3cb28);
            auVar30._8_8_ = lStack_188;
            auVar30._0_8_ = plStack_170;
            uVar19 = (uint)uVar15 + 1;
            uVar15 = (ulong)uVar19;
            lVar7 = lVar7 + 0xc;
          } while ((int)uVar19 < *(int *)((long)plVar12 + 0xc));
          if (-1 < (int)uVar6) {
            uVar19 = 0;
            do {
              auVar30._8_8_ = lStack_188;
              auVar30._0_8_ = plStack_170;
              lVar7 = *plVar12;
              if (lVar7 == 0) goto code_r0x014c2194;
              if (*(uint *)(lVar7 + 0x18) <= uVar19) goto code_r0x014c2198;
              lVar7 = lVar7 + (long)(int)uVar19 * 0xc;
              param_3 = *(float *)(lVar7 + 0x24);
              param_4 = (ulong)*(uint *)(lVar7 + 0x28);
              plVar9 = (long *)/*System.Collections.Generic.List<float3>$$Add*/ func_0x0249c6b4(*(undefined4 *)(lVar7 + 0x20),param_8,
                                               uRam0000000003d3cb28);
              uVar19 = uVar19 + 1;
            } while ((int)uVar19 <= (int)uVar6);
          }
        }
      }
      plVar9 = (long *)((long)&MACH_HEADER.magic + 1);
    }
    return plVar9;
  }
  bVar5 = false;
code_r0x014c1ea4:
  lVar7 = plVar10[1];
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  *extraout_x8 = 0;
  plVar9 = (long *)Atlas_Geometry_PolyLine___ctor(extraout_x8,lVar13,(int)lVar7,bVar5);
  return plVar9;
}



// ============================================================
// RVA: 0x14c1c90 | Atlas.Geometry.PolyLine.CreateProjectedPolyLineObjectSpace
// ============================================================

/* WARNING: Possible PIC construction at 0x014c2260: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014c2264) */

long * Atlas_Geometry_PolyLine__CreateProjectedPolyLineObjectSpace
                 (undefined8 *param_1,undefined1 param_2 [16],float param_3,float param_4,
                 long *param_5,long param_6,long *param_7,undefined8 *param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong *puVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  float *extraout_x1;
  float *pfVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  float *pfVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 **ppuVar19;
  undefined *puVar20;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined4 uVar21;
  undefined8 uVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [12];
  ulong uStack_f0;
  long lStack_e8;
  long *plStack_e0;
  long lStack_d8;
  long *plStack_d0;
  undefined8 *puStack_c8;
  undefined1 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_98;
  
  uVar17 = 0x3eb4000;
  plVar9 = param_7;
  if ((bRam0000000003eb4b1d & 1) == 0) {
    func_0x00f78a20(0x3d22660);
    func_0x00f78a20(0x3d3d618);
    func_0x00f78a20(0x3d3d620);
    func_0x00f78a20(0x3d1f698);
    bRam0000000003eb4b1d = 1;
  }
  uStack_98 = 0;
  lVar7 = func_0x00f78a34(/*Unity.Mathematics.float3[]_TypeInfo*/ uRam0000000003d1f698,(int)param_5[1]);
  uVar6 = (uint)plVar9;
  uVar16 = *(uint *)((long)param_5 + 0xc);
  if (0 < (int)uVar16) {
    uVar18 = 0;
    do {
      uVar6 = (uint)plVar9;
      lVar12 = *param_5;
      if (lVar12 == 0) goto LAB_014c1ee8;
      if (*(uint *)(lVar12 + 0x18) <= uVar18) goto LAB_014c1eec;
      if (param_6 == 0) goto LAB_014c1ee8;
      lVar12 = lVar12 + uVar18 * 0xc;
      uVar22 = *(undefined8 *)(lVar12 + 0x20);
      fVar23 = *(float *)(lVar12 + 0x28);
      if (*(uint *)(param_6 + 0x18) <= uVar18) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if (param_7 == (long *)0x0) goto LAB_014c1ee8;
      lVar12 = *(long *)(param_6 + 0x10) + uVar18 * 0x38;
      uVar17 = (ulong)*(uint *)(lVar12 + 0x20);
      fVar27 = *(float *)(lVar12 + 0x2c);
      uVar26 = *(undefined8 *)(lVar12 + 0x24);
      uVar24 = *(undefined8 *)(lVar12 + 0x3c);
      fVar25 = *(float *)(lVar12 + 0x44);
      lVar12 = *param_7;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == /*Atlas.Geometry.IWidthHeightSampler_TypeInfo*/ lRam0000000003d22660) {
            puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_014c1df0;
          }
          piVar14 = piVar14 + 4;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)func_0x00fac1f0(param_7,/*Atlas.Geometry.IWidthHeightSampler_TypeInfo*/ lRam0000000003d22660,0);
LAB_014c1df0:
      plVar9 = (long *)((long)&uStack_98 + 4);
      param_8 = &uStack_98;
      (*(code *)*puVar8)(param_7,uVar17,plVar9,param_8,puVar8[1]);
      uVar6 = (uint)plVar9;
      if (lVar7 == 0) goto LAB_014c1ee8;
      if (*(uint *)(lVar7 + 0x18) <= uVar18) goto LAB_014c1eec;
      param_4 = fVar25 * (float)uStack_98;
      param_3 = fVar23 + fVar27 * uStack_98._4_4_ + param_4;
      lVar12 = lVar7 + uVar18 * 0xc;
      *(ulong *)(lVar12 + 0x20) =
           CONCAT44((float)((ulong)uVar22 >> 0x20) +
                    (float)((ulong)uVar26 >> 0x20) * uStack_98._4_4_ +
                    (float)((ulong)uVar24 >> 0x20) * (float)uStack_98,
                    (float)uVar22 + (float)uVar26 * uStack_98._4_4_ +
                    (float)uVar24 * (float)uStack_98);
      *(float *)(lVar12 + 0x28) = param_3;
      uVar18 = uVar18 + 1;
      uVar16 = *(uint *)((long)param_5 + 0xc);
    } while ((long)uVar18 < (long)(int)uVar16);
  }
  if ((char)param_5[2] != '\0') {
    if (lVar7 == 0) {
LAB_014c1ee8:
      func_0x00f78af4();
    }
    else if ((*(uint *)(lVar7 + 0x18) != 0) && (uVar16 < *(uint *)(lVar7 + 0x18))) {
      uVar21 = *(undefined4 *)(lVar7 + 0x28);
      puVar8 = (undefined8 *)(lVar7 + 0x20 + (long)(int)uVar16 * 0xc);
      *puVar8 = *(undefined8 *)(lVar7 + 0x20);
      *(undefined4 *)(puVar8 + 1) = uVar21;
      bVar5 = (char)param_5[2] != '\0';
      goto code_r0x014c1ea4;
    }
LAB_014c1eec:
    uVar22 = func_0x00f78b24();
    auVar29 = func_0x00f78ac0(uVar22,0);
    puStack_a8 = &Atlas_Geometry_PolyLine__GetPoint;
    lVar12 = *auVar29._0_8_;
    puStack_b0 = &stack0xfffffffffffffff0;
    if (lVar12 == 0) {
      func_0x00f78af4();
    }
    else if (auVar29._8_4_ < *(uint *)(lVar12 + 0x18)) {
      return auVar29._0_8_;
    }
    uVar22 = func_0x00f78b24();
    auVar28 = func_0x00f78ac0(uVar22,0);
    uVar18 = auVar28._8_8_;
    plVar9 = auVar28._0_8_;
    puStack_b8 = &Atlas_Geometry_PolyLine__TryGetPoints;
    ppuVar19 = &puStack_c0;
    uStack_f0 = uVar17;
    lStack_e8 = param_6;
    plStack_e0 = param_7;
    lStack_d8 = lVar7;
    plStack_d0 = param_5;
    puStack_c8 = param_1;
    puStack_c0 = (undefined1 *)&puStack_b0;
    if ((bRam0000000003eb4b1e & 1) == 0) {
      puStack_c0 = (undefined1 *)&puStack_b0;
      func_0x00f78a20(0x3d3cb28);
      bRam0000000003eb4b1e = 1;
    }
    plVar10 = (long *)0x0;
    uVar16 = auVar28._8_4_;
    if ((((-1 < (int)uVar16) && (iVar2 = *(int *)((long)plVar9 + 0xc), (int)uVar6 < iVar2)) &&
        (-1 < (int)uVar6)) && ((int)uVar16 < iVar2)) {
      if ((char)plVar9[2] == '\0') {
        if (uVar6 < uVar16) {
          do {
            lVar7 = *plVar9;
            if (lVar7 == 0) goto code_r0x014c2194;
            uVar16 = (uint)uVar18;
            if (*(uint *)(lVar7 + 0x18) <= uVar16) goto code_r0x014c2198;
            if (param_8 == (undefined8 *)0x0) goto code_r0x014c2194;
            lVar7 = lVar7 + (long)(int)uVar16 * 0xc;
            param_3 = *(float *)(lVar7 + 0x24);
            param_4 = *(float *)(lVar7 + 0x28);
            plVar10 = (long *)/*System.Collections.Generic.List<float3>$$Add*/ func_0x0249c6b4(*(undefined4 *)(lVar7 + 0x20),param_8,
                                              uRam0000000003d3cb28);
            uVar18 = (ulong)(uVar16 - 1);
          } while ((int)uVar6 <= (int)(uVar16 - 1));
        }
        else {
          do {
            lVar7 = *plVar9;
            if (lVar7 == 0) goto code_r0x014c2194;
            uVar16 = (uint)uVar18;
            if (*(uint *)(lVar7 + 0x18) <= uVar16) goto code_r0x014c2198;
            if (param_8 == (undefined8 *)0x0) goto code_r0x014c2194;
            lVar7 = lVar7 + (long)(int)uVar16 * 0xc;
            param_3 = *(float *)(lVar7 + 0x24);
            param_4 = *(float *)(lVar7 + 0x28);
            plVar10 = (long *)/*System.Collections.Generic.List<float3>$$Add*/ func_0x0249c6b4(*(undefined4 *)(lVar7 + 0x20),param_8,
                                              uRam0000000003d3cb28);
            uVar18 = (ulong)(uVar16 + 1);
          } while ((int)(uVar16 + 1) <= (int)uVar6);
        }
      }
      else {
        iVar3 = uVar6 - uVar16;
        iVar1 = -iVar3;
        if (-1 < iVar3) {
          iVar1 = iVar3;
        }
        if (iVar1 < iVar3 + iVar2) {
          if (uVar6 < uVar16) {
            do {
              lVar7 = *plVar9;
              if (lVar7 == 0) {
code_r0x014c2194:
                func_0x00f78af4(plVar10);
code_r0x014c2198:
                uVar22 = func_0x00f78b24();
                puVar20 = &Atlas_Geometry_PolyLine__GetClosestPointIndex;
                plVar9 = (long *)func_0x00f78ac0(uVar22,0);
                puVar4 = &uStack_f0;
                pfVar11 = extraout_x1;
                uVar22 = extraout_d0;
                while( true ) {
                  *(undefined1 ***)((long)puVar4 + -0x10) = ppuVar19;
                  *(undefined **)((long)puVar4 + -8) = puVar20;
                  uVar16 = *(uint *)((long)plVar9 + 0xc);
                  if ((int)uVar16 < 1) break;
                  lVar7 = *plVar9;
                  if (lVar7 != 0) {
                    uVar17 = 0;
                    plVar9 = (long *)0x0;
                    pfVar15 = (float *)(lVar7 + 0x28);
                    fVar25 = 3.4028235e+38;
                    while (uVar16 - 1 < *(uint *)(lVar7 + 0x18)) {
                      fVar23 = pfVar15[-2] - (float)uVar22;
                      fVar23 = (*pfVar15 - param_4) * (*pfVar15 - param_4) +
                               fVar23 * fVar23 + (pfVar15[-1] - param_3) * (pfVar15[-1] - param_3);
                      uVar6 = (uint)uVar17;
                      if (fVar25 <= fVar23) {
                        uVar6 = (uint)plVar9;
                      }
                      plVar9 = (long *)(ulong)uVar6;
                      if (fVar25 <= fVar23) {
                        fVar23 = fVar25;
                      }
                      uVar17 = uVar17 + 1;
                      pfVar15 = pfVar15 + 3;
                      fVar25 = fVar23;
                      if (uVar16 == uVar17) goto code_r0x014c2234;
                    }
                    uVar22 = func_0x00f78b24(plVar9);
                    func_0x00f78ac0(uVar22,0);
                  }
                  plVar9 = (long *)func_0x00f78af4();
                  *(undefined1 **)((long)puVar4 + -0x20) = (undefined1 *)((long)puVar4 + -0x10);
                  *(undefined **)((long)puVar4 + -0x18) =
                       &Atlas_Geometry_PolyLine__GetClosestPointIndex;
                  ppuVar19 = (undefined1 **)((long)puVar4 + -0x20);
                  pfVar11 = (float *)((long)puVar4 + -0x24);
                  puVar20 = &UNK_014c2264;
                  puVar4 = (ulong *)((long)puVar4 + -0x30);
                  uVar22 = extraout_d0_00;
                }
                plVar9 = (long *)0x0;
                fVar23 = 3.4028235e+38;
code_r0x014c2234:
                *pfVar11 = fVar23;
                return plVar9;
              }
              uVar16 = (uint)uVar18;
              if (*(uint *)(lVar7 + 0x18) <= uVar16) goto code_r0x014c2198;
              if (param_8 == (undefined8 *)0x0) goto code_r0x014c2194;
              lVar7 = lVar7 + (long)(int)uVar16 * 0xc;
              param_3 = *(float *)(lVar7 + 0x24);
              param_4 = *(float *)(lVar7 + 0x28);
              plVar10 = (long *)/*System.Collections.Generic.List<float3>$$Add*/ func_0x0249c6b4(*(undefined4 *)(lVar7 + 0x20),param_8,
                                                uRam0000000003d3cb28);
              uVar18 = (ulong)(uVar16 - 1);
            } while ((int)uVar6 <= (int)(uVar16 - 1));
          }
          else {
            do {
              lVar7 = *plVar9;
              if (lVar7 == 0) goto code_r0x014c2194;
              uVar16 = (uint)uVar18;
              if (*(uint *)(lVar7 + 0x18) <= uVar16) goto code_r0x014c2198;
              if (param_8 == (undefined8 *)0x0) goto code_r0x014c2194;
              lVar7 = lVar7 + (long)(int)uVar16 * 0xc;
              param_3 = *(float *)(lVar7 + 0x24);
              param_4 = *(float *)(lVar7 + 0x28);
              plVar10 = (long *)/*System.Collections.Generic.List<float3>$$Add*/ func_0x0249c6b4(*(undefined4 *)(lVar7 + 0x20),param_8,
                                                uRam0000000003d3cb28);
              uVar18 = (ulong)(uVar16 + 1);
            } while ((int)(uVar16 + 1) <= (int)uVar6);
          }
        }
        else {
          lVar7 = (long)(int)uVar16 * 0xc;
          do {
            lVar12 = *plVar9;
            if (lVar12 == 0) goto code_r0x014c2194;
            if (*(uint *)(lVar12 + 0x18) <= (uint)uVar18) goto code_r0x014c2198;
            if (param_8 == (undefined8 *)0x0) goto code_r0x014c2194;
            lVar12 = lVar12 + lVar7;
            param_3 = *(float *)(lVar12 + 0x24);
            param_4 = *(float *)(lVar12 + 0x28);
            plVar10 = (long *)/*System.Collections.Generic.List<float3>$$Add*/ func_0x0249c6b4(*(undefined4 *)(lVar12 + 0x20),param_8,
                                              uRam0000000003d3cb28);
            uVar16 = (uint)uVar18 + 1;
            uVar18 = (ulong)uVar16;
            lVar7 = lVar7 + 0xc;
          } while ((int)uVar16 < *(int *)((long)plVar9 + 0xc));
          if (-1 < (int)uVar6) {
            uVar16 = 0;
            do {
              lVar7 = *plVar9;
              if (lVar7 == 0) goto code_r0x014c2194;
              if (*(uint *)(lVar7 + 0x18) <= uVar16) goto code_r0x014c2198;
              lVar7 = lVar7 + (long)(int)uVar16 * 0xc;
              param_3 = *(float *)(lVar7 + 0x24);
              param_4 = *(float *)(lVar7 + 0x28);
              plVar10 = (long *)/*System.Collections.Generic.List<float3>$$Add*/ func_0x0249c6b4(*(undefined4 *)(lVar7 + 0x20),param_8,
                                                uRam0000000003d3cb28);
              uVar16 = uVar16 + 1;
            } while ((int)uVar16 <= (int)uVar6);
          }
        }
      }
      plVar10 = (long *)((long)&MACH_HEADER.magic + 1);
    }
    return plVar10;
  }
  bVar5 = false;
code_r0x014c1ea4:
  lVar12 = param_5[1];
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  plVar9 = (long *)Atlas_Geometry_PolyLine___ctor(param_1,lVar7,(int)lVar12,bVar5);
  return plVar9;
}



// ============================================================
// RVA: 0x14c1ef8 | Atlas.Geometry.PolyLine.GetPoint
// ============================================================

/* WARNING: Possible PIC construction at 0x014c2260: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014c2264) */

long * Atlas_Geometry_PolyLine__GetPoint
                 (undefined1 param_1 [16],float param_2,float param_3,long *param_4,uint param_5,
                 uint param_6,long param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  float *extraout_x1;
  float *pfVar11;
  long lVar12;
  long lVar13;
  float *pfVar14;
  uint uVar15;
  ulong uVar16;
  undefined *puVar17;
  float extraout_s0;
  float fVar18;
  float extraout_s0_00;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 *puVar6;
  
  if (*param_4 == 0) {
    func_0x00f78af4();
  }
  else if (param_5 < *(uint *)(*param_4 + 0x18)) {
    return param_4;
  }
  uVar8 = func_0x00f78b24();
  auVar21 = func_0x00f78ac0(uVar8,0);
  uVar16 = auVar21._8_8_;
  plVar10 = auVar21._0_8_;
  if ((bRam0000000003eb4b1e & 1) == 0) {
    func_0x00f78a20(0x3d3cb28);
    bRam0000000003eb4b1e = 1;
  }
  plVar9 = (long *)0x0;
  uVar15 = auVar21._8_4_;
  if ((((-1 < (int)uVar15) && (iVar2 = *(int *)((long)plVar10 + 0xc), (int)param_6 < iVar2)) &&
      (-1 < (int)param_6)) && ((int)uVar15 < iVar2)) {
    if ((char)plVar10[2] == '\0') {
      if (param_6 < uVar15) {
        do {
          lVar12 = *plVar10;
          if (lVar12 == 0) goto code_r0x014c2194;
          uVar15 = (uint)uVar16;
          if (*(uint *)(lVar12 + 0x18) <= uVar15) goto code_r0x014c2198;
          if (param_7 == 0) goto code_r0x014c2194;
          lVar12 = lVar12 + (long)(int)uVar15 * 0xc;
          param_2 = *(float *)(lVar12 + 0x24);
          param_3 = *(float *)(lVar12 + 0x28);
          plVar9 = (long *)/*System.Collections.Generic.List<float3>$$Add*/ func_0x0249c6b4(*(undefined4 *)(lVar12 + 0x20),param_7,
                                           uRam0000000003d3cb28);
          uVar16 = (ulong)(uVar15 - 1);
        } while ((int)param_6 <= (int)(uVar15 - 1));
      }
      else {
        do {
          lVar12 = *plVar10;
          if (lVar12 == 0) goto code_r0x014c2194;
          uVar15 = (uint)uVar16;
          if (*(uint *)(lVar12 + 0x18) <= uVar15) goto code_r0x014c2198;
          if (param_7 == 0) goto code_r0x014c2194;
          lVar12 = lVar12 + (long)(int)uVar15 * 0xc;
          param_2 = *(float *)(lVar12 + 0x24);
          param_3 = *(float *)(lVar12 + 0x28);
          plVar9 = (long *)/*System.Collections.Generic.List<float3>$$Add*/ func_0x0249c6b4(*(undefined4 *)(lVar12 + 0x20),param_7,
                                           uRam0000000003d3cb28);
          uVar16 = (ulong)(uVar15 + 1);
        } while ((int)(uVar15 + 1) <= (int)param_6);
      }
    }
    else {
      iVar3 = param_6 - uVar15;
      iVar1 = -iVar3;
      if (-1 < iVar3) {
        iVar1 = iVar3;
      }
      if (iVar1 < iVar3 + iVar2) {
        if (param_6 < uVar15) {
          do {
            lVar12 = *plVar10;
            if (lVar12 == 0) {
code_r0x014c2194:
              func_0x00f78af4(plVar9);
code_r0x014c2198:
              uVar8 = func_0x00f78b24();
              puVar17 = &Atlas_Geometry_PolyLine__GetClosestPointIndex;
              plVar10 = (long *)func_0x00f78ac0(uVar8,0);
              puVar4 = &stack0xffffffffffffffb0;
              pfVar11 = extraout_x1;
              fVar18 = extraout_s0;
              puVar5 = (undefined1 *)register0x00000008;
              while( true ) {
                puVar6 = puVar4;
                *(undefined1 **)(puVar6 + -0x10) = puVar5 + -0x20;
                *(undefined **)(puVar6 + -8) = puVar17;
                uVar15 = *(uint *)((long)plVar10 + 0xc);
                if ((int)uVar15 < 1) break;
                lVar12 = *plVar10;
                if (lVar12 != 0) {
                  uVar16 = 0;
                  plVar10 = (long *)0x0;
                  pfVar14 = (float *)(lVar12 + 0x28);
                  fVar19 = 3.4028235e+38;
                  while (uVar15 - 1 < *(uint *)(lVar12 + 0x18)) {
                    fVar20 = (*pfVar14 - param_3) * (*pfVar14 - param_3) +
                             (pfVar14[-2] - fVar18) * (pfVar14[-2] - fVar18) +
                             (pfVar14[-1] - param_2) * (pfVar14[-1] - param_2);
                    uVar7 = (uint)uVar16;
                    if (fVar19 <= fVar20) {
                      uVar7 = (uint)plVar10;
                    }
                    plVar10 = (long *)(ulong)uVar7;
                    if (fVar19 <= fVar20) {
                      fVar20 = fVar19;
                    }
                    uVar16 = uVar16 + 1;
                    pfVar14 = pfVar14 + 3;
                    fVar19 = fVar20;
                    if (uVar15 == uVar16) goto code_r0x014c2234;
                  }
                  uVar8 = func_0x00f78b24(plVar10);
                  func_0x00f78ac0(uVar8,0);
                }
                plVar10 = (long *)func_0x00f78af4();
                *(undefined1 **)(puVar6 + -0x20) = puVar6 + -0x10;
                *(undefined **)(puVar6 + -0x18) = &Atlas_Geometry_PolyLine__GetClosestPointIndex;
                pfVar11 = (float *)(puVar6 + -0x24);
                puVar17 = &UNK_014c2264;
                puVar4 = puVar6 + -0x30;
                fVar18 = extraout_s0_00;
                puVar5 = puVar6;
              }
              plVar10 = (long *)0x0;
              fVar20 = 3.4028235e+38;
code_r0x014c2234:
              *pfVar11 = fVar20;
              return plVar10;
            }
            uVar15 = (uint)uVar16;
            if (*(uint *)(lVar12 + 0x18) <= uVar15) goto code_r0x014c2198;
            if (param_7 == 0) goto code_r0x014c2194;
            lVar12 = lVar12 + (long)(int)uVar15 * 0xc;
            param_2 = *(float *)(lVar12 + 0x24);
            param_3 = *(float *)(lVar12 + 0x28);
            plVar9 = (long *)/*System.Collections.Generic.List<float3>$$Add*/ func_0x0249c6b4(*(undefined4 *)(lVar12 + 0x20),param_7,
                                             uRam0000000003d3cb28);
            uVar16 = (ulong)(uVar15 - 1);
          } while ((int)param_6 <= (int)(uVar15 - 1));
        }
        else {
          do {
            lVar12 = *plVar10;
            if (lVar12 == 0) goto code_r0x014c2194;
            uVar15 = (uint)uVar16;
            if (*(uint *)(lVar12 + 0x18) <= uVar15) goto code_r0x014c2198;
            if (param_7 == 0) goto code_r0x014c2194;
            lVar12 = lVar12 + (long)(int)uVar15 * 0xc;
            param_2 = *(float *)(lVar12 + 0x24);
            param_3 = *(float *)(lVar12 + 0x28);
            plVar9 = (long *)/*System.Collections.Generic.List<float3>$$Add*/ func_0x0249c6b4(*(undefined4 *)(lVar12 + 0x20),param_7,
                                             uRam0000000003d3cb28);
            uVar16 = (ulong)(uVar15 + 1);
          } while ((int)(uVar15 + 1) <= (int)param_6);
        }
      }
      else {
        lVar12 = (long)(int)uVar15 * 0xc;
        do {
          lVar13 = *plVar10;
          if (lVar13 == 0) goto code_r0x014c2194;
          if (*(uint *)(lVar13 + 0x18) <= (uint)uVar16) goto code_r0x014c2198;
          if (param_7 == 0) goto code_r0x014c2194;
          lVar13 = lVar13 + lVar12;
          param_2 = *(float *)(lVar13 + 0x24);
          param_3 = *(float *)(lVar13 + 0x28);
          plVar9 = (long *)/*System.Collections.Generic.List<float3>$$Add*/ func_0x0249c6b4(*(undefined4 *)(lVar13 + 0x20),param_7,
                                           uRam0000000003d3cb28);
          uVar15 = (uint)uVar16 + 1;
          uVar16 = (ulong)uVar15;
          lVar12 = lVar12 + 0xc;
        } while ((int)uVar15 < *(int *)((long)plVar10 + 0xc));
        if (-1 < (int)param_6) {
          uVar15 = 0;
          do {
            lVar12 = *plVar10;
            if (lVar12 == 0) goto code_r0x014c2194;
            if (*(uint *)(lVar12 + 0x18) <= uVar15) goto code_r0x014c2198;
            lVar12 = lVar12 + (long)(int)uVar15 * 0xc;
            param_2 = *(float *)(lVar12 + 0x24);
            param_3 = *(float *)(lVar12 + 0x28);
            plVar9 = (long *)/*System.Collections.Generic.List<float3>$$Add*/ func_0x0249c6b4(*(undefined4 *)(lVar12 + 0x20),param_7,
                                             uRam0000000003d3cb28);
            uVar15 = uVar15 + 1;
          } while ((int)uVar15 <= (int)param_6);
        }
      }
    }
    plVar9 = (long *)((long)&MACH_HEADER.magic + 1);
  }
  return plVar9;
}



// ============================================================
// RVA: 0x14c1f3c | Atlas.Geometry.PolyLine.TryGetPoints
// ============================================================

/* WARNING: Possible PIC construction at 0x014c2260: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014c2264) */

ulong Atlas_Geometry_PolyLine__TryGetPoints
                (undefined1 param_1 [16],float param_2,float param_3,long *param_4,uint param_5,
                uint param_6,long param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  float *extraout_x1;
  float *pfVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  float *pfVar13;
  uint uVar14;
  undefined1 *puVar15;
  undefined *puVar16;
  float extraout_s0;
  float fVar17;
  float extraout_s0_00;
  float fVar18;
  float fVar19;
  
  puVar15 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4b1e & 1) == 0) {
    func_0x00f78a20(0x3d3cb28);
    bRam0000000003eb4b1e = 1;
  }
  uVar6 = 0;
  if ((((-1 < (int)param_5) && (iVar2 = *(int *)((long)param_4 + 0xc), (int)param_6 < iVar2)) &&
      (-1 < (int)param_6)) && ((int)param_5 < iVar2)) {
    if ((char)param_4[2] == '\0') {
      if (param_6 < param_5) {
        do {
          lVar10 = *param_4;
          if (lVar10 == 0) goto LAB_014c2194;
          if (*(uint *)(lVar10 + 0x18) <= param_5) goto LAB_014c2198;
          if (param_7 == 0) goto LAB_014c2194;
          lVar10 = lVar10 + (long)(int)param_5 * 0xc;
          param_2 = *(float *)(lVar10 + 0x24);
          param_3 = *(float *)(lVar10 + 0x28);
          uVar6 = /*System.Collections.Generic.List<float3>$$Add*/ func_0x0249c6b4(*(undefined4 *)(lVar10 + 0x20),param_7,uRam0000000003d3cb28);
          param_5 = param_5 - 1;
        } while ((int)param_6 <= (int)param_5);
      }
      else {
        do {
          lVar10 = *param_4;
          if (lVar10 == 0) goto LAB_014c2194;
          if (*(uint *)(lVar10 + 0x18) <= param_5) goto LAB_014c2198;
          if (param_7 == 0) goto LAB_014c2194;
          lVar10 = lVar10 + (long)(int)param_5 * 0xc;
          param_2 = *(float *)(lVar10 + 0x24);
          param_3 = *(float *)(lVar10 + 0x28);
          uVar6 = /*System.Collections.Generic.List<float3>$$Add*/ func_0x0249c6b4(*(undefined4 *)(lVar10 + 0x20),param_7,uRam0000000003d3cb28);
          param_5 = param_5 + 1;
        } while ((int)param_5 <= (int)param_6);
      }
    }
    else {
      iVar3 = param_6 - param_5;
      iVar1 = -iVar3;
      if (-1 < iVar3) {
        iVar1 = iVar3;
      }
      if (iVar1 < iVar3 + iVar2) {
        if (param_6 < param_5) {
          do {
            lVar10 = *param_4;
            if (lVar10 == 0) {
LAB_014c2194:
              func_0x00f78af4(uVar6);
LAB_014c2198:
              uVar7 = func_0x00f78b24();
              puVar16 = &Atlas_Geometry_PolyLine__GetClosestPointIndex;
              plVar8 = (long *)func_0x00f78ac0(uVar7,0);
              puVar4 = &stack0xffffffffffffffc0;
              pfVar9 = extraout_x1;
              fVar17 = extraout_s0;
              while( true ) {
                *(undefined1 **)(puVar4 + -0x10) = puVar15;
                *(undefined **)(puVar4 + -8) = puVar16;
                uVar14 = *(uint *)((long)plVar8 + 0xc);
                if ((int)uVar14 < 1) break;
                lVar10 = *plVar8;
                if (lVar10 != 0) {
                  uVar12 = 0;
                  uVar6 = 0;
                  pfVar13 = (float *)(lVar10 + 0x28);
                  fVar18 = 3.4028235e+38;
                  while (uVar14 - 1 < *(uint *)(lVar10 + 0x18)) {
                    fVar19 = (*pfVar13 - param_3) * (*pfVar13 - param_3) +
                             (pfVar13[-2] - fVar17) * (pfVar13[-2] - fVar17) +
                             (pfVar13[-1] - param_2) * (pfVar13[-1] - param_2);
                    uVar5 = (uint)uVar12;
                    if (fVar18 <= fVar19) {
                      uVar5 = (uint)uVar6;
                    }
                    uVar6 = (ulong)uVar5;
                    if (fVar18 <= fVar19) {
                      fVar19 = fVar18;
                    }
                    uVar12 = uVar12 + 1;
                    pfVar13 = pfVar13 + 3;
                    fVar18 = fVar19;
                    if (uVar14 == uVar12) goto code_r0x014c2234;
                  }
                  uVar7 = func_0x00f78b24(uVar6);
                  func_0x00f78ac0(uVar7,0);
                }
                plVar8 = (long *)func_0x00f78af4();
                *(undefined1 **)(puVar4 + -0x20) = puVar4 + -0x10;
                *(undefined **)(puVar4 + -0x18) = &Atlas_Geometry_PolyLine__GetClosestPointIndex;
                puVar15 = puVar4 + -0x20;
                pfVar9 = (float *)(puVar4 + -0x24);
                puVar16 = &UNK_014c2264;
                puVar4 = puVar4 + -0x30;
                fVar17 = extraout_s0_00;
              }
              uVar6 = 0;
              fVar19 = 3.4028235e+38;
code_r0x014c2234:
              *pfVar9 = fVar19;
              return uVar6;
            }
            if (*(uint *)(lVar10 + 0x18) <= param_5) goto LAB_014c2198;
            if (param_7 == 0) goto LAB_014c2194;
            lVar10 = lVar10 + (long)(int)param_5 * 0xc;
            param_2 = *(float *)(lVar10 + 0x24);
            param_3 = *(float *)(lVar10 + 0x28);
            uVar6 = /*System.Collections.Generic.List<float3>$$Add*/ func_0x0249c6b4(*(undefined4 *)(lVar10 + 0x20),param_7,uRam0000000003d3cb28);
            param_5 = param_5 - 1;
          } while ((int)param_6 <= (int)param_5);
        }
        else {
          do {
            lVar10 = *param_4;
            if (lVar10 == 0) goto LAB_014c2194;
            if (*(uint *)(lVar10 + 0x18) <= param_5) goto LAB_014c2198;
            if (param_7 == 0) goto LAB_014c2194;
            lVar10 = lVar10 + (long)(int)param_5 * 0xc;
            param_2 = *(float *)(lVar10 + 0x24);
            param_3 = *(float *)(lVar10 + 0x28);
            uVar6 = /*System.Collections.Generic.List<float3>$$Add*/ func_0x0249c6b4(*(undefined4 *)(lVar10 + 0x20),param_7,uRam0000000003d3cb28);
            param_5 = param_5 + 1;
          } while ((int)param_5 <= (int)param_6);
        }
      }
      else {
        lVar10 = (long)(int)param_5 * 0xc;
        do {
          lVar11 = *param_4;
          if (lVar11 == 0) goto LAB_014c2194;
          if (*(uint *)(lVar11 + 0x18) <= param_5) goto LAB_014c2198;
          if (param_7 == 0) goto LAB_014c2194;
          lVar11 = lVar11 + lVar10;
          param_2 = *(float *)(lVar11 + 0x24);
          param_3 = *(float *)(lVar11 + 0x28);
          uVar6 = /*System.Collections.Generic.List<float3>$$Add*/ func_0x0249c6b4(*(undefined4 *)(lVar11 + 0x20),param_7,uRam0000000003d3cb28);
          param_5 = param_5 + 1;
          lVar10 = lVar10 + 0xc;
        } while ((int)param_5 < *(int *)((long)param_4 + 0xc));
        if (-1 < (int)param_6) {
          uVar14 = 0;
          do {
            lVar10 = *param_4;
            if (lVar10 == 0) goto LAB_014c2194;
            if (*(uint *)(lVar10 + 0x18) <= uVar14) goto LAB_014c2198;
            lVar10 = lVar10 + (long)(int)uVar14 * 0xc;
            param_2 = *(float *)(lVar10 + 0x24);
            param_3 = *(float *)(lVar10 + 0x28);
            uVar6 = /*System.Collections.Generic.List<float3>$$Add*/ func_0x0249c6b4(*(undefined4 *)(lVar10 + 0x20),param_7,uRam0000000003d3cb28);
            uVar14 = uVar14 + 1;
          } while ((int)uVar14 <= (int)param_6);
        }
      }
    }
    uVar6 = 1;
  }
  return uVar6;
}



// ============================================================
// RVA: 0x14c21a4 | Atlas.Geometry.PolyLine.GetClosestPointIndex
// ============================================================

ulong Atlas_Geometry_PolyLine__GetClosestPointIndex
                (float param_1,float param_2,float param_3,long *param_4,float *param_5)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_24 [4];
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  uVar1 = *(uint *)((long)param_4 + 0xc);
  if ((int)uVar1 < 1) {
    uVar3 = 0;
    fVar9 = 3.4028235e+38;
  }
  else {
    lVar6 = *param_4;
    if (lVar6 == 0) {
LAB_014c224c:
      uVar4 = func_0x00f78af4();
      puStack_18 = &Atlas_Geometry_PolyLine__GetClosestPointIndex;
      puStack_20 = &stack0xfffffffffffffff0;
      uVar3 = Atlas_Geometry_PolyLine__GetClosestPointIndex(uVar4,auStack_24);
      return uVar3;
    }
    uVar5 = 0;
    uVar3 = 0;
    pfVar7 = (float *)(lVar6 + 0x28);
    fVar8 = 3.4028235e+38;
    do {
      if (*(uint *)(lVar6 + 0x18) <= uVar1 - 1) {
        uVar4 = func_0x00f78b24(uVar3);
        func_0x00f78ac0(uVar4,0);
        goto LAB_014c224c;
      }
      fVar9 = (*pfVar7 - param_3) * (*pfVar7 - param_3) +
              (pfVar7[-2] - param_1) * (pfVar7[-2] - param_1) +
              (pfVar7[-1] - param_2) * (pfVar7[-1] - param_2);
      uVar2 = (uint)uVar5;
      if (fVar8 <= fVar9) {
        uVar2 = (uint)uVar3;
      }
      uVar3 = (ulong)uVar2;
      if (fVar8 <= fVar9) {
        fVar9 = fVar8;
      }
      uVar5 = uVar5 + 1;
      pfVar7 = pfVar7 + 3;
      fVar8 = fVar9;
    } while (uVar1 != uVar5);
  }
  *param_5 = fVar9;
  return uVar3;
}



// ============================================================
// RVA: 0x14c2250 | Atlas.Geometry.PolyLine.GetClosestPointIndex
// ============================================================

void Atlas_Geometry_PolyLine__GetClosestPointIndex(undefined8 param_1)

{
  undefined1 auStack_14 [4];
  
  Atlas_Geometry_PolyLine__GetClosestPointIndex(param_1,auStack_14);
  return;
}



// ============================================================
// RVA: 0x14c2270 | Atlas.Geometry.PolyLine.GetClosestEndPointIndex
// ============================================================

ulong Atlas_Geometry_PolyLine__GetClosestEndPointIndex
                (float param_1,float param_2,float param_3,long *param_4,float *param_5)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_24 [4];
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  lVar4 = *param_4;
  if (lVar4 != 0) {
    if ((*(uint *)(lVar4 + 0x18) != 0) &&
       (uVar1 = *(int *)((long)param_4 + 0xc) - 1, uVar1 < *(uint *)(lVar4 + 0x18))) {
      pfVar5 = (float *)(lVar4 + 0x20) + (long)(int)uVar1 * 3;
      fVar6 = *(float *)(lVar4 + 0x20) - param_1;
      fVar7 = *(float *)(lVar4 + 0x24) - param_2;
      fVar8 = *(float *)(lVar4 + 0x28) - param_3;
      fVar7 = fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7;
      fVar6 = (pfVar5[2] - param_3) * (pfVar5[2] - param_3) +
              (*pfVar5 - param_1) * (*pfVar5 - param_1) +
              (pfVar5[1] - param_2) * (pfVar5[1] - param_2);
      if (fVar7 <= fVar6) {
        uVar1 = 0;
        fVar6 = fVar7;
      }
      *param_5 = fVar6;
      return (ulong)uVar1;
    }
    uVar2 = func_0x00f78b24();
    func_0x00f78ac0(uVar2,0);
  }
  uVar2 = func_0x00f78af4();
  puStack_18 = &Atlas_Geometry_PolyLine__GetClosestEndPointIndex;
  puStack_20 = &stack0xfffffffffffffff0;
  uVar3 = Atlas_Geometry_PolyLine__GetClosestEndPointIndex(uVar2,auStack_24);
  return uVar3;
}



// ============================================================
// RVA: 0x14c2310 | Atlas.Geometry.PolyLine.GetClosestEndPointIndex
// ============================================================

void Atlas_Geometry_PolyLine__GetClosestEndPointIndex(undefined8 param_1)

{
  undefined1 auStack_14 [4];
  
  Atlas_Geometry_PolyLine__GetClosestEndPointIndex(param_1,auStack_14);
  return;
}



// ============================================================
// RVA: 0x14c2330 | Atlas.Geometry.PolyLine.GetClosestPoints
// ============================================================

long * Atlas_Geometry_PolyLine__GetClosestPoints
                 (float param_1,float param_2,float param_3,float param_4,long *param_5,
                 long *param_6,undefined4 *param_7,int *param_8,float *param_9)

{
  uint *puVar1;
  int *piVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  int extraout_w1;
  float *extraout_x1;
  ulong extraout_x1_00;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  long lVar9;
  float *pfVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  int iVar19;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float fVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  uVar7 = (undefined4)((ulong)param_7 >> 0x20);
  iVar21 = (int)param_7;
  puVar1 = (uint *)((long)param_5 + 0xc);
  if ((int)*puVar1 < 1) {
    iVar6 = 0;
    uVar13 = 0;
    fVar14 = 3.4028235e+38;
LAB_014c2434:
    *param_7 = uVar13;
    *param_8 = iVar6;
    *param_9 = fVar14;
    return param_5;
  }
  lVar15 = *param_5;
  if (lVar15 != 0) {
    uVar16 = 0;
    uVar13 = 0;
    iVar6 = 0;
    fVar14 = 3.4028235e+38;
    do {
      if (uVar16 == *(uint *)(lVar15 + 0x18)) {
LAB_014c2448:
        uVar3 = func_0x00f78b24();
        func_0x00f78ac0(uVar3,0);
        goto LAB_014c2454;
      }
      lVar17 = lVar15 + uVar16 * 0xc;
      fVar30 = *(float *)(lVar17 + 0x20) - param_1;
      fVar31 = *(float *)(lVar17 + 0x24) - param_2;
      fVar32 = *(float *)(lVar17 + 0x28) - param_3;
      if (param_4 <= fVar32 * fVar32 + fVar30 * fVar30 + fVar31 * fVar31) {
        uVar11 = *(uint *)((long)param_6 + 0xc);
        if (0 < (int)uVar11) {
          lVar9 = *param_6;
          if (lVar9 == 0) goto LAB_014c2454;
          uVar18 = 0;
          param_5 = (long *)(ulong)(uVar11 - 1);
          pfVar10 = (float *)(lVar9 + 0x28);
          uVar12 = uVar13;
          do {
            if (*(uint *)(lVar9 + 0x18) <= uVar11 - 1) goto LAB_014c2448;
            fVar30 = pfVar10[-2] - *(float *)(lVar17 + 0x20);
            fVar31 = pfVar10[-1] - *(float *)(lVar17 + 0x24);
            fVar32 = *pfVar10 - *(float *)(lVar17 + 0x28);
            fVar30 = fVar32 * fVar32 + fVar30 * fVar30 + fVar31 * fVar31;
            uVar13 = (int)uVar16;
            iVar19 = (int)uVar18;
            if (fVar14 <= fVar30) {
              uVar13 = uVar12;
              iVar19 = iVar6;
              fVar30 = fVar14;
            }
            fVar14 = fVar30;
            iVar6 = iVar19;
            uVar18 = uVar18 + 1;
            pfVar10 = pfVar10 + 3;
            uVar12 = uVar13;
          } while (uVar11 != uVar18);
        }
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 != *puVar1);
    goto LAB_014c2434;
  }
LAB_014c2454:
  plVar4 = (long *)func_0x00f78af4();
  piVar2 = (int *)CONCAT44(uVar7,iVar21);
  plVar5 = plVar4;
  piVar8 = param_8;
  if ((bRam0000000003eb4b1f & 1) == 0) {
    func_0x00f78a20(0x3d232d0);
    plVar5 = (long *)func_0x00f78a20(0x3d265d8);
    bRam0000000003eb4b1f = 1;
  }
  lVar15 = *plVar4;
  if (lVar15 != 0) {
    if (*(int *)(lVar15 + 0x18) == 0) {
code_r0x014c265c:
      uVar3 = func_0x00f78b24();
      plVar5 = (long *)func_0x00f78ac0(uVar3,0);
      lVar15 = *plVar5;
      iVar6 = iVar21;
      if (lVar15 != 0) {
        if (*(uint *)(lVar15 + 0x18) <= (uint)extraout_x1_00) goto code_r0x014c2844;
        lVar15 = lVar15 + (long)(int)(uint)extraout_x1_00 * 0xc;
        iVar19 = 500000;
        uVar16 = extraout_x1_00;
        uVar3 = *(undefined8 *)(lVar15 + 0x20);
        fVar14 = *(float *)(lVar15 + 0x28);
        fVar30 = 0.0;
        do {
          fVar31 = (float)uVar16;
          uVar16 = (ulong)((int)fVar31 + 1U);
          if (*(int *)((long)plVar5 + 0xc) <= (int)((int)fVar31 + 1U)) {
            if ((char)plVar5[2] == '\0' || iVar21 == 0) break;
            uVar16 = 0;
          }
          lVar15 = *plVar5;
          if (lVar15 == 0) goto code_r0x014c2840;
          if (*(uint *)(lVar15 + 0x18) <= (uint)uVar16) goto code_r0x014c2844;
          lVar15 = lVar15 + (long)(int)(uint)uVar16 * 0xc;
          uVar29 = *(undefined8 *)(lVar15 + 0x20);
          fVar32 = *(float *)(lVar15 + 0x28);
          if (cRam0000000003ca34fc == '\0') {
            func_0x00f78a20(0x3d232c0);
            cRam0000000003ca34fc = '\x01';
          }
          if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          fVar20 = (float)uVar29 - (float)uVar3;
          fVar26 = (float)((ulong)uVar3 >> 0x20);
          fVar22 = (float)((ulong)uVar29 >> 0x20) - fVar26;
          fVar23 = fVar32 - fVar14;
          fVar24 = fVar30 + SQRT(fVar23 * fVar23 + fVar20 * fVar20 + fVar22 * fVar22);
          if (extraout_s0_01 <= fVar24) {
            fVar30 = (extraout_s0_01 - fVar30) / (fVar24 - fVar30);
            *(ulong *)piVar8 = CONCAT44(fVar26 + fVar22 * fVar30,(float)uVar3 + fVar20 * fVar30);
            piVar8[2] = (int)(fVar14 + fVar23 * fVar30);
            plVar4 = (long *)((long)&MACH_HEADER.magic + 1);
            goto code_r0x014c2810;
          }
          iVar19 = iVar19 + -1;
          uVar3 = uVar29;
          fVar14 = fVar32;
          fVar30 = fVar24;
        } while (iVar19 != 0);
        lVar15 = *plVar5;
        if (lVar15 != 0) {
          uVar11 = (int)plVar5[1] - 1;
          if (uVar11 < *(uint *)(lVar15 + 0x18)) {
            plVar4 = (long *)0x0;
            lVar15 = lVar15 + (long)(int)uVar11 * 0xc;
            iVar21 = *(int *)(lVar15 + 0x28);
            *(undefined8 *)piVar8 = *(undefined8 *)(lVar15 + 0x20);
            piVar8[2] = iVar21;
            fVar31 = (float)((int)plVar5[1] + -1);
code_r0x014c2810:
            *param_9 = fVar31;
            return plVar4;
          }
          goto code_r0x014c2844;
        }
      }
code_r0x014c2840:
      func_0x00f78af4();
code_r0x014c2844:
      uVar3 = func_0x00f78b24();
      iVar21 = func_0x00f78ac0(uVar3,0);
      uVar11 = 0;
      if (extraout_w1 <= iVar21) {
        uVar11 = (uint)(iVar21 <= iVar6 || iVar6 < extraout_w1);
      }
      return (long *)(ulong)uVar11;
    }
    if ((int)plVar4[1] < 2) goto code_r0x014c25f0;
    lVar17 = 0;
    uVar18 = 0;
    uVar16 = 1;
    fVar14 = 3.4028235e+38;
    uVar7 = *(undefined4 *)(lVar15 + 0x24);
    uVar13 = *(undefined4 *)(lVar15 + 0x28);
    uVar12 = *(undefined4 *)(lVar15 + 0x20);
    do {
      if (*(uint *)(lVar15 + 0x18) <= uVar16) goto code_r0x014c265c;
      lVar15 = lVar15 + lVar17;
      uVar27 = *(undefined4 *)(lVar15 + 0x2c);
      uVar28 = *(undefined4 *)(lVar15 + 0x30);
      uVar25 = *(undefined4 *)(lVar15 + 0x34);
      if (((*(ushort *)(/*Atlas.Maths.Math3d_TypeInfo*/ lRam0000000003d232d0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Maths.Math3d_TypeInfo*/ lRam0000000003d232d0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      fVar30 = param_3;
      fVar31 = param_2;
      plVar5 = (long *)/*Atlas.Maths.Math3d$$NearestPointOnLineSegment*/ func_0x0149353c(extraout_s0,param_2,param_3,uVar12,uVar7,uVar13,0);
      fVar30 = (param_3 - fVar30) * (param_3 - fVar30) +
               (extraout_s0 - extraout_s0_00) * (extraout_s0 - extraout_s0_00) +
               (param_2 - fVar31) * (param_2 - fVar31);
      if (fVar30 < fVar14) {
        uVar18 = uVar16;
        fVar14 = fVar30;
      }
      iVar6 = (int)uVar18;
      uVar16 = uVar16 + 1;
      if ((long)(int)plVar4[1] <= (long)uVar16) goto code_r0x014c2608;
      lVar15 = *plVar4;
      lVar17 = lVar17 + 0xc;
      uVar7 = uVar28;
      uVar13 = uVar25;
      uVar12 = uVar27;
    } while (lVar15 != 0);
  }
  plVar5 = (long *)func_0x00f78af4();
code_r0x014c25f0:
  iVar6 = 0;
  fVar14 = 3.4028235e+38;
code_r0x014c2608:
  *extraout_x1 = fVar14;
  *param_8 = iVar6;
  *piVar2 = iVar6 + -1;
  if (((char)plVar4[2] != '\0') && (iVar6 == *(int *)((long)plVar4 + 0xc))) {
    *param_8 = 0;
  }
  return plVar5;
}



// ============================================================
// RVA: 0x14c2458 | Atlas.Geometry.PolyLine.GetClosestPoint
// ============================================================

long * Atlas_Geometry_PolyLine__GetClosestPoint
                 (float param_1,float param_2,float param_3,long *param_4,float *param_5,
                 int *param_6,int *param_7,int *param_8)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  int extraout_w1;
  ulong extraout_x1;
  int iVar4;
  int *piVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  float extraout_s0;
  float extraout_s0_00;
  float fVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined8 uVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  
  iVar14 = (int)param_6;
  plVar1 = param_4;
  piVar5 = param_7;
  if ((bRam0000000003eb4b1f & 1) == 0) {
    func_0x00f78a20(0x3d232d0);
    plVar1 = (long *)func_0x00f78a20(0x3d265d8);
    bRam0000000003eb4b1f = 1;
  }
  lVar7 = *param_4;
  if (lVar7 != 0) {
    if (*(int *)(lVar7 + 0x18) == 0) {
LAB_014c265c:
      uVar2 = func_0x00f78b24();
      plVar1 = (long *)func_0x00f78ac0(uVar2,0);
      lVar7 = *plVar1;
      iVar4 = iVar14;
      if (lVar7 != 0) {
        if (*(uint *)(lVar7 + 0x18) <= (uint)extraout_x1) goto code_r0x014c2844;
        lVar7 = lVar7 + (long)(int)(uint)extraout_x1 * 0xc;
        iVar12 = 500000;
        uVar11 = extraout_x1;
        uVar2 = *(undefined8 *)(lVar7 + 0x20);
        fVar22 = *(float *)(lVar7 + 0x28);
        fVar18 = 0.0;
        do {
          iVar8 = (int)uVar11;
          uVar11 = (ulong)(iVar8 + 1U);
          if (*(int *)((long)plVar1 + 0xc) <= (int)(iVar8 + 1U)) {
            if ((char)plVar1[2] == '\0' || iVar14 == 0) break;
            uVar11 = 0;
          }
          lVar7 = *plVar1;
          if (lVar7 == 0) goto code_r0x014c2840;
          if (*(uint *)(lVar7 + 0x18) <= (uint)uVar11) goto code_r0x014c2844;
          lVar7 = lVar7 + (long)(int)(uint)uVar11 * 0xc;
          uVar25 = *(undefined8 *)(lVar7 + 0x20);
          fVar26 = *(float *)(lVar7 + 0x28);
          if (cRam0000000003ca34fc == '\0') {
            func_0x00f78a20(0x3d232c0);
            cRam0000000003ca34fc = '\x01';
          }
          if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          fVar13 = (float)uVar25 - (float)uVar2;
          fVar21 = (float)((ulong)uVar2 >> 0x20);
          fVar15 = (float)((ulong)uVar25 >> 0x20) - fVar21;
          fVar16 = fVar26 - fVar22;
          fVar17 = fVar18 + SQRT(fVar16 * fVar16 + fVar13 * fVar13 + fVar15 * fVar15);
          if (extraout_s0_00 <= fVar17) {
            fVar18 = (extraout_s0_00 - fVar18) / (fVar17 - fVar18);
            *(ulong *)piVar5 = CONCAT44(fVar21 + fVar15 * fVar18,(float)uVar2 + fVar13 * fVar18);
            piVar5[2] = (int)(fVar22 + fVar16 * fVar18);
            plVar3 = (long *)((long)&MACH_HEADER.magic + 1);
            goto code_r0x014c2810;
          }
          iVar12 = iVar12 + -1;
          uVar2 = uVar25;
          fVar22 = fVar26;
          fVar18 = fVar17;
        } while (iVar12 != 0);
        lVar7 = *plVar1;
        if (lVar7 != 0) {
          uVar6 = (int)plVar1[1] - 1;
          if (uVar6 < *(uint *)(lVar7 + 0x18)) {
            plVar3 = (long *)0x0;
            lVar7 = lVar7 + (long)(int)uVar6 * 0xc;
            iVar14 = *(int *)(lVar7 + 0x28);
            *(undefined8 *)piVar5 = *(undefined8 *)(lVar7 + 0x20);
            piVar5[2] = iVar14;
            iVar8 = (int)plVar1[1] + -1;
code_r0x014c2810:
            *param_8 = iVar8;
            return plVar3;
          }
          goto code_r0x014c2844;
        }
      }
code_r0x014c2840:
      func_0x00f78af4();
code_r0x014c2844:
      uVar2 = func_0x00f78b24();
      iVar14 = func_0x00f78ac0(uVar2,0);
      uVar6 = 0;
      if (extraout_w1 <= iVar14) {
        uVar6 = (uint)(iVar14 <= iVar4 || iVar4 < extraout_w1);
      }
      return (long *)(ulong)uVar6;
    }
    if ((int)param_4[1] < 2) goto LAB_014c25f0;
    lVar10 = 0;
    uVar9 = 0;
    uVar11 = 1;
    fVar22 = 3.4028235e+38;
    uVar28 = *(undefined4 *)(lVar7 + 0x24);
    uVar27 = *(undefined4 *)(lVar7 + 0x28);
    uVar19 = *(undefined4 *)(lVar7 + 0x20);
    do {
      if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_014c265c;
      lVar7 = lVar7 + lVar10;
      uVar23 = *(undefined4 *)(lVar7 + 0x2c);
      uVar24 = *(undefined4 *)(lVar7 + 0x30);
      uVar20 = *(undefined4 *)(lVar7 + 0x34);
      if (((*(ushort *)(/*Atlas.Maths.Math3d_TypeInfo*/ lRam0000000003d232d0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Maths.Math3d_TypeInfo*/ lRam0000000003d232d0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      fVar18 = param_3;
      fVar26 = param_2;
      plVar1 = (long *)/*Atlas.Maths.Math3d$$NearestPointOnLineSegment*/ func_0x0149353c(param_1,param_2,param_3,uVar19,uVar28,uVar27,0);
      fVar18 = (param_3 - fVar18) * (param_3 - fVar18) +
               (param_1 - extraout_s0) * (param_1 - extraout_s0) +
               (param_2 - fVar26) * (param_2 - fVar26);
      if (fVar18 < fVar22) {
        uVar9 = uVar11;
        fVar22 = fVar18;
      }
      iVar4 = (int)uVar9;
      uVar11 = uVar11 + 1;
      if ((long)(int)param_4[1] <= (long)uVar11) goto LAB_014c2608;
      lVar7 = *param_4;
      lVar10 = lVar10 + 0xc;
      uVar28 = uVar24;
      uVar27 = uVar20;
      uVar19 = uVar23;
    } while (lVar7 != 0);
  }
  plVar1 = (long *)func_0x00f78af4();
LAB_014c25f0:
  iVar4 = 0;
  fVar22 = 3.4028235e+38;
LAB_014c2608:
  *param_5 = fVar22;
  *param_7 = iVar4;
  *param_6 = iVar4 + -1;
  if (((char)param_4[2] != '\0') && (iVar4 == *(int *)((long)param_4 + 0xc))) {
    *param_7 = 0;
  }
  return plVar1;
}



// ============================================================
// RVA: 0x14c2668 | Atlas.Geometry.PolyLine.TryGetPointDistanceAlong
// ============================================================

bool Atlas_Geometry_PolyLine__TryGetPointDistanceAlong
               (float param_1,long *param_2,uint param_3,int param_4,undefined8 *param_5,
               uint *param_6)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  int extraout_w1;
  int iVar4;
  long lVar5;
  uint uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  
  lVar5 = *param_2;
  iVar4 = param_4;
  if (lVar5 != 0) {
    if (*(uint *)(lVar5 + 0x18) <= param_3) goto LAB_014c2844;
    lVar5 = lVar5 + (long)(int)param_3 * 0xc;
    iVar2 = 500000;
    uVar3 = *(undefined8 *)(lVar5 + 0x20);
    fVar14 = *(float *)(lVar5 + 0x28);
    fVar12 = 0.0;
    do {
      uVar6 = param_3 + 1;
      if (*(int *)((long)param_2 + 0xc) <= (int)uVar6) {
        if ((char)param_2[2] == '\0' || param_4 == 0) break;
        uVar6 = 0;
      }
      lVar5 = *param_2;
      if (lVar5 == 0) goto LAB_014c2840;
      if (*(uint *)(lVar5 + 0x18) <= uVar6) goto LAB_014c2844;
      lVar5 = lVar5 + (long)(int)uVar6 * 0xc;
      uVar15 = *(undefined8 *)(lVar5 + 0x20);
      fVar16 = *(float *)(lVar5 + 0x28);
      if (cRam0000000003ca34fc == '\0') {
        func_0x00f78a20(0x3d232c0);
        cRam0000000003ca34fc = '\x01';
      }
      if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      fVar7 = (float)uVar15 - (float)uVar3;
      fVar13 = (float)((ulong)uVar3 >> 0x20);
      fVar9 = (float)((ulong)uVar15 >> 0x20) - fVar13;
      fVar10 = fVar16 - fVar14;
      fVar11 = fVar12 + SQRT(fVar10 * fVar10 + fVar7 * fVar7 + fVar9 * fVar9);
      if (param_1 <= fVar11) {
        fVar12 = (param_1 - fVar12) / (fVar11 - fVar12);
        *param_5 = CONCAT44(fVar13 + fVar9 * fVar12,(float)uVar3 + fVar7 * fVar12);
        *(float *)(param_5 + 1) = fVar14 + fVar10 * fVar12;
        bVar1 = true;
        goto LAB_014c2810;
      }
      iVar2 = iVar2 + -1;
      uVar3 = uVar15;
      fVar14 = fVar16;
      fVar12 = fVar11;
      param_3 = uVar6;
    } while (iVar2 != 0);
    lVar5 = *param_2;
    if (lVar5 != 0) {
      uVar6 = (int)param_2[1] - 1;
      if (uVar6 < *(uint *)(lVar5 + 0x18)) {
        bVar1 = false;
        lVar5 = lVar5 + (long)(int)uVar6 * 0xc;
        uVar8 = *(undefined4 *)(lVar5 + 0x28);
        *param_5 = *(undefined8 *)(lVar5 + 0x20);
        *(undefined4 *)(param_5 + 1) = uVar8;
        param_3 = (int)param_2[1] - 1;
LAB_014c2810:
        *param_6 = param_3;
        return bVar1;
      }
      goto LAB_014c2844;
    }
  }
LAB_014c2840:
  func_0x00f78af4();
LAB_014c2844:
  uVar3 = func_0x00f78b24();
  iVar2 = func_0x00f78ac0(uVar3,0);
  return extraout_w1 <= iVar2 && (iVar2 <= iVar4 || iVar4 < extraout_w1);
}



// ============================================================
// RVA: 0x14c2850 | Atlas.Geometry.PolyLine.IsPointIndexBetweenInclusive
// ============================================================

bool Atlas_Geometry_PolyLine__IsPointIndexBetweenInclusive(int param_1,int param_2,int param_3)

{
  return param_2 <= param_1 && (param_1 <= param_3 || param_3 < param_2);
}



// ============================================================
// RVA: 0x14c2868 | Atlas.Geometry.PolyLine.DrawGizmosPoints
// ============================================================

void Atlas_Geometry_PolyLine__DrawGizmosPoints(undefined8 param_1)

{
  /*Atlas.Geometry.PolyLine$$DrawGizmosPoints*/ func_0x014c2894(param_1,0x7fffffff,0x7fffffff);
  return;
}



// ============================================================
// RVA: 0x14c2894 | Atlas.Geometry.PolyLine.DrawGizmosPoints
// ============================================================

void Atlas_Geometry_PolyLine__DrawGizmosPoints
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,long *param_6,int param_7,int param_8)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *extraout_x8;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  lVar3 = *param_6;
  if ((lVar3 != 0) && (0 < *(int *)((long)param_6 + 0xc))) {
    lVar5 = 0;
    lVar6 = 1;
    do {
      uVar4 = lVar6 - 1;
      if (*(uint *)(lVar3 + 0x18) <= uVar4) {
        uVar1 = func_0x00f78b24();
        plVar2 = (long *)func_0x00f78ac0(uVar1,0);
        if (*plVar2 == 0) {
          return;
        }
        /*UnityEngine.Gizmos$$set_color*/ func_0x0322fbcc(0);
        lVar3 = *plVar2;
        if (lVar3 == 0) goto code_r0x014c2ad4;
        if (*(int *)(lVar3 + 0x18) != 0) {
          if ((int)plVar2[1] < 2) {
            return;
          }
          lVar6 = 0;
          uVar4 = 1;
          uVar7 = *(undefined4 *)(lVar3 + 0x24);
          uVar9 = *(undefined4 *)(lVar3 + 0x28);
          uVar8 = *(undefined4 *)(lVar3 + 0x20);
          while (uVar4 < *(uint *)(lVar3 + 0x18)) {
            lVar3 = lVar3 + lVar6;
            uVar15 = *(undefined4 *)(lVar3 + 0x2c);
            uVar11 = *(undefined4 *)(lVar3 + 0x30);
            uVar12 = *(undefined4 *)(lVar3 + 0x34);
            uVar13 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(uVar8,uVar7,uVar9,0);
            uVar8 = uVar11;
            uVar10 = uVar12;
            uVar14 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(uVar15,uVar11,uVar12,0);
            /*UnityEngine.Gizmos$$DrawLine*/ func_0x0322f78c(uVar13,uVar7,uVar9,uVar14,uVar8,uVar10,0);
            uVar4 = uVar4 + 1;
            if ((long)(int)plVar2[1] <= (long)uVar4) {
              return;
            }
            lVar6 = lVar6 + 0xc;
            lVar3 = *plVar2;
            uVar7 = uVar11;
            uVar9 = uVar12;
            uVar8 = uVar15;
            if (lVar3 == 0) {
code_r0x014c2ad4:
              func_0x00f78af4();
              return;
            }
          }
        }
        uVar1 = func_0x00f78b24();
        lVar3 = func_0x00f78ac0(uVar1,0);
        uVar1 = *(undefined8 *)(lVar3 + 0x38);
        extraout_x8[1] = *(undefined8 *)(lVar3 + 0x40);
        *extraout_x8 = uVar1;
        extraout_x8[2] = *(undefined8 *)(lVar3 + 0x48);
        return;
      }
      lVar3 = lVar3 + lVar5;
      uVar13 = *(undefined4 *)(lVar3 + 0x20);
      uVar14 = *(undefined4 *)(lVar3 + 0x24);
      uVar15 = *(undefined4 *)(lVar3 + 0x28);
      uVar7 = uStack000000000000000c;
      uVar9 = uStack0000000000000008;
      uVar8 = uStack0000000000000004;
      uVar10 = uStack0000000000000000;
      if ((long)uVar4 < (long)param_7 || param_7 <= param_8 && (long)param_8 < (long)uVar4) {
        uVar7 = param_5;
        uVar9 = param_4;
        uVar8 = param_3;
        uVar10 = param_2;
      }
      /*UnityEngine.Gizmos$$set_color*/ func_0x0322fbcc(uVar10,uVar8,uVar9,uVar7,0);
      /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(uVar13,uVar14,uVar15,0);
      /*UnityEngine.Gizmos$$DrawSphere*/ func_0x0322f8e8(0);
      if (*(int *)((long)param_6 + 0xc) <= lVar6) {
        return;
      }
      lVar3 = *param_6;
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0xc;
    } while (lVar3 != 0);
    func_0x00f78af4();
  }
  return;
}



// ============================================================
// RVA: 0x14c29f0 | Atlas.Geometry.PolyLine.DrawGizmosLines
// ============================================================

void Atlas_Geometry_PolyLine__DrawGizmosLines(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *extraout_x8;
  long lVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  if (*param_1 != 0) {
    /*UnityEngine.Gizmos$$set_color*/ func_0x0322fbcc(0);
    lVar2 = *param_1;
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x18) == 0) {
LAB_014c2af4:
        uVar1 = func_0x00f78b24();
        lVar2 = func_0x00f78ac0(uVar1,0);
        uVar1 = *(undefined8 *)(lVar2 + 0x38);
        extraout_x8[1] = *(undefined8 *)(lVar2 + 0x40);
        *extraout_x8 = uVar1;
        extraout_x8[2] = *(undefined8 *)(lVar2 + 0x48);
        return;
      }
      if ((int)param_1[1] < 2) {
        return;
      }
      lVar3 = 0;
      uVar4 = 1;
      uVar7 = *(undefined4 *)(lVar2 + 0x24);
      uVar9 = *(undefined4 *)(lVar2 + 0x28);
      uVar8 = *(undefined4 *)(lVar2 + 0x20);
      do {
        if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_014c2af4;
        lVar2 = lVar2 + lVar3;
        uVar11 = *(undefined4 *)(lVar2 + 0x2c);
        uVar12 = *(undefined4 *)(lVar2 + 0x30);
        uVar13 = *(undefined4 *)(lVar2 + 0x34);
        uVar5 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(uVar8,uVar7,uVar9,0);
        uVar8 = uVar12;
        uVar10 = uVar13;
        uVar6 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(uVar11,uVar12,uVar13,0);
        /*UnityEngine.Gizmos$$DrawLine*/ func_0x0322f78c(uVar5,uVar7,uVar9,uVar6,uVar8,uVar10,0);
        uVar4 = uVar4 + 1;
        if ((long)(int)param_1[1] <= (long)uVar4) {
          return;
        }
        lVar3 = lVar3 + 0xc;
        lVar2 = *param_1;
        uVar7 = uVar12;
        uVar9 = uVar13;
        uVar8 = uVar11;
      } while (lVar2 != 0);
    }
    func_0x00f78af4();
  }
  return;
}



