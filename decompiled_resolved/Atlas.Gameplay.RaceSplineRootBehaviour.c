// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.RaceSplineRootBehaviour

// ============================================================
// RVA: 0x14d9d7c | Atlas.Gameplay.RaceSplineRootBehaviour.get_TotalLapDistance
// ============================================================

undefined4 Atlas_Gameplay_RaceSplineRootBehaviour__get_TotalLapDistance(long param_1)

{
  return *(undefined4 *)(param_1 + 0x58);
}



// ============================================================
// RVA: 0x14d9d84 | Atlas.Gameplay.RaceSplineRootBehaviour.get_RaceKnotBursts
// ============================================================

undefined1  [16] Atlas_Gameplay_RaceSplineRootBehaviour__get_RaceKnotBursts(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x60);
}



// ============================================================
// RVA: 0x14d9d90 | Atlas.Gameplay.RaceSplineRootBehaviour.get_RacePolyLines
// ============================================================

undefined1  [16] Atlas_Gameplay_RaceSplineRootBehaviour__get_RacePolyLines(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x70);
}



// ============================================================
// RVA: 0x14d9d9c | Atlas.Gameplay.RaceSplineRootBehaviour.get_NextKnotsID
// ============================================================

undefined1  [16] Atlas_Gameplay_RaceSplineRootBehaviour__get_NextKnotsID(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x90);
}



// ============================================================
// RVA: 0x14d9da8 | Atlas.Gameplay.RaceSplineRootBehaviour.get_NextKnotsProbabilityWeights
// ============================================================

undefined1  [16]
Atlas_Gameplay_RaceSplineRootBehaviour__get_NextKnotsProbabilityWeights(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0xa0);
}



// ============================================================
// RVA: 0x14d9db4 | Atlas.Gameplay.RaceSplineRootBehaviour.get_PolyLinesToNext
// ============================================================

undefined1  [16] Atlas_Gameplay_RaceSplineRootBehaviour__get_PolyLinesToNext(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0xb0);
}



// ============================================================
// RVA: 0x14d9dc0 | Atlas.Gameplay.RaceSplineRootBehaviour.get_PreviousKnotsID
// ============================================================

undefined1  [16] Atlas_Gameplay_RaceSplineRootBehaviour__get_PreviousKnotsID(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0xc0);
}



// ============================================================
// RVA: 0x14d9dcc | Atlas.Gameplay.RaceSplineRootBehaviour.get_PolyLinesFromPrev
// ============================================================

undefined1  [16] Atlas_Gameplay_RaceSplineRootBehaviour__get_PolyLinesFromPrev(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0xd0);
}



// ============================================================
// RVA: 0x14d9dd8 | Atlas.Gameplay.RaceSplineRootBehaviour.get_RacePolyLinePoints
// ============================================================

undefined1  [16] Atlas_Gameplay_RaceSplineRootBehaviour__get_RacePolyLinePoints(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0xe0);
}



// ============================================================
// RVA: 0x14d9de4 | Atlas.Gameplay.RaceSplineRootBehaviour.get_IsSwitchActiveToNext
// ============================================================

undefined1  [16] Atlas_Gameplay_RaceSplineRootBehaviour__get_IsSwitchActiveToNext(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x80);
}



// ============================================================
// RVA: 0x14d9df0 | Atlas.Gameplay.RaceSplineRootBehaviour.get_RaceKnots
// ============================================================

undefined8 Atlas_Gameplay_RaceSplineRootBehaviour__get_RaceKnots(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



// ============================================================
// RVA: 0x14d9df8 | Atlas.Gameplay.RaceSplineRootBehaviour.GetPriority
// ============================================================

undefined8 Atlas_Gameplay_RaceSplineRootBehaviour__GetPriority(void)

{
  return 0;
}



// ============================================================
// RVA: 0x14d9e00 | Atlas.Gameplay.RaceSplineRootBehaviour.Init
// ============================================================

/* WARNING: Possible PIC construction at 0x014da8ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014da8b0) */
/* WARNING: Removing unreachable block (ram,0x014da8bc) */
/* WARNING: Removing unreachable block (ram,0x014da8c8) */
/* WARNING: Removing unreachable block (ram,0x014da8cc) */
/* WARNING: Removing unreachable block (ram,0x014da8d4) */
/* WARNING: Removing unreachable block (ram,0x014da8e0) */
/* WARNING: Removing unreachable block (ram,0x014da8f8) */
/* WARNING: Removing unreachable block (ram,0x014da914) */
/* WARNING: Removing unreachable block (ram,0x014da91c) */
/* WARNING: Removing unreachable block (ram,0x014da920) */
/* WARNING: Removing unreachable block (ram,0x014da934) */
/* WARNING: Removing unreachable block (ram,0x014da93c) */
/* WARNING: Removing unreachable block (ram,0x014da944) */
/* WARNING: Removing unreachable block (ram,0x014da9bc) */
/* WARNING: Removing unreachable block (ram,0x014da9c0) */
/* WARNING: Removing unreachable block (ram,0x014da9c4) */
/* WARNING: Removing unreachable block (ram,0x014da9d4) */
/* WARNING: Removing unreachable block (ram,0x014daa00) */
/* WARNING: Removing unreachable block (ram,0x014da9dc) */
/* WARNING: Removing unreachable block (ram,0x014da9f8) */
/* WARNING: Removing unreachable block (ram,0x014da950) */
/* WARNING: Removing unreachable block (ram,0x014da974) */
/* WARNING: Removing unreachable block (ram,0x014da994) */
/* WARNING: Removing unreachable block (ram,0x014da9a0) */
/* WARNING: Removing unreachable block (ram,0x014da984) */
/* WARNING: Removing unreachable block (ram,0x014da9b4) */
/* WARNING: Removing unreachable block (ram,0x014da98c) */

void Atlas_Gameplay_RaceSplineRootBehaviour__Init(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 uVar8;
  char cVar9;
  ushort uVar10;
  undefined2 uVar11;
  undefined1 *puVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar20;
  undefined4 *puVar21;
  uint *puVar22;
  int *piVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long *unaff_x19;
  long unaff_x20;
  long lVar27;
  uint uVar28;
  ulong unaff_x21;
  ulong uVar29;
  int iVar30;
  ulong unaff_x22;
  uint uVar31;
  ulong unaff_x23;
  long lVar32;
  undefined8 unaff_x24;
  ulong uVar33;
  ulong unaff_x25;
  ulong unaff_x26;
  ulong uVar34;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar35;
  undefined *unaff_x30;
  uint uVar36;
  uint uVar37;
  undefined8 uVar38;
  float fVar39;
  undefined8 unaff_d8;
  float fVar40;
  undefined8 unaff_d9;
  undefined1 auVar41 [16];
  undefined1 auStack_b2 [130];
  
  puVar12 = &stack0xffffffffffffffd0;
  puVar35 = &stack0xfffffffffffffff0;
  lVar27 = 0x3eb4000;
  if ((bRam0000000003eb4bba & 1) == 0) {
    func_0x00f78a20(0x3d535e0);
    func_0x00f78a20(0x3d536b0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4bba = 1;
  }
  lVar14 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_1,0);
  uVar29 = unaff_x21;
  if (lVar14 != 0) {
    lVar14 = /*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(lVar14,uRam0000000003d535e0);
    param_1[9] = lVar14;
    lVar14 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_1,0);
    if (lVar14 != 0) {
      uVar29 = 0x3d23000;
      lVar27 = /*UnityEngine.Component$$GetComponentsInChildren<TMP_SubMeshUI>*/ func_0x0183944c(lVar14,uRam0000000003d536b0);
      param_1[10] = lVar27;
      lVar27 = param_1[9];
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar15 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar27,0,0);
      if ((uVar15 & 1) != 0) {
        return;
      }
      if (param_1[9] != 0) {
        /*MainSplineBehaviour$$Init*/ func_0x0148b878(param_1[9],0);
        lVar27 = param_1[10];
        if (lVar27 != 0) {
          uVar20 = *(uint *)(lVar27 + 0x18);
          if (0 < (int)uVar20) {
            uVar29 = 0;
            do {
              uVar28 = (uint)uVar29;
              if (uVar20 <= uVar28) goto code_r0x014d9f58;
              lVar14 = *(long *)(lVar27 + (long)(int)uVar28 * 8 + 0x20);
              if (lVar14 == 0) goto LAB_014d9f54;
              /*SplineBranchBehaviour$$Init*/ func_0x01503a7c(lVar14,0);
              uVar29 = (ulong)(uVar28 + 1);
              uVar20 = *(uint *)(lVar27 + 0x18);
            } while ((int)(uVar28 + 1) < (int)uVar20);
          }
          (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
          puVar12 = (undefined1 *)register0x00000008;
          plVar16 = param_1;
          param_1 = unaff_x19;
          uVar29 = unaff_x21;
          puVar35 = unaff_x29;
          goto code_r0x014d9f64;
        }
      }
    }
  }
LAB_014d9f54:
  func_0x00f78af4();
code_r0x014d9f58:
  unaff_x20 = lVar27;
  uVar17 = func_0x00f78b24();
  unaff_x30 = &Atlas_Gameplay_RaceSplineRootBehaviour__PrepareBurstContainers;
  plVar16 = (long *)func_0x00f78ac0(uVar17,0);
code_r0x014d9f64:
  *(undefined8 *)(puVar12 + -0x70) = unaff_d9;
  *(undefined8 *)(puVar12 + -0x68) = unaff_d8;
  *(undefined8 *)(puVar12 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar12 + -0x58) = unaff_x27;
  *(ulong *)(puVar12 + -0x50) = unaff_x26;
  *(ulong *)(puVar12 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar12 + -0x40) = unaff_x24;
  *(ulong *)(puVar12 + -0x38) = unaff_x23;
  *(ulong *)(puVar12 + -0x30) = unaff_x22;
  *(ulong *)(puVar12 + -0x28) = uVar29;
  *(long *)(puVar12 + -0x20) = unaff_x20;
  *(long **)(puVar12 + -0x18) = param_1;
  *(undefined1 **)(puVar12 + -0x10) = puVar35;
  *(undefined **)(puVar12 + -8) = unaff_x30;
  uVar15 = 0x3eb4000;
  if ((bRam0000000003eb4bc9 & 1) == 0) {
    func_0x00f78a20(0x3d3ba00);
    func_0x00f78a20(0x3d3ba08);
    func_0x00f78a20(0x3d3e2e0);
    func_0x00f78a20(0x3d3e210);
    func_0x00f78a20(0x3d3e328);
    func_0x00f78a20(0x3d3e318);
    func_0x00f78a20(0x3d3e2d8);
    func_0x00f78a20(0x3d3e300);
    func_0x00f78a20(0x3d3e1c0);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d24090);
    bRam0000000003eb4bc9 = 1;
  }
  *(undefined2 *)(puVar12 + -0x7c) = 0;
  puVar12[-0x7a] = 0;
  *(undefined2 *)(puVar12 + -0x80) = 0;
  puVar12[-0x7e] = 0;
  puVar12[-0x82] = 0;
  *(undefined2 *)(puVar12 + -0x84) = 0;
  *(undefined8 *)(puVar12 + -0x98) = 0;
  *(undefined8 *)(puVar12 + -0x90) = 0;
  uVar33 = plVar16[8];
  if (uVar33 != 0) {
    uVar15 = 0;
    uVar29 = 0;
    unaff_x23 = 0;
    unaff_x22 = 0;
    uVar20 = 0;
    while (uVar28 = *(uint *)(uVar33 + 0x18), (int)uVar20 < (int)uVar28) {
      if (uVar28 <= uVar20) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar27 = *(long *)(*(long *)(uVar33 + 0x10) + (long)(int)uVar20 * 8 + 0x20);
      if (((lVar27 == 0) || (lVar27 = *(long *)(lVar27 + 0x28), lVar27 == 0)) ||
         (uVar33 = plVar16[8], uVar33 == 0)) goto code_r0x014da828;
      uVar28 = *(uint *)(lVar27 + 0x18);
      uVar34 = (ulong)uVar28;
      if (*(uint *)(uVar33 + 0x18) <= uVar20) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      unaff_x25 = (ulong)(int)uVar20;
      lVar27 = *(long *)(*(long *)(uVar33 + 0x10) + unaff_x25 * 8 + 0x20);
      unaff_x26 = uVar34;
      if (((lVar27 == 0) || (lVar27 = *(long *)(lVar27 + 0x30), lVar27 == 0)) ||
         (unaff_x26 = plVar16[8], uVar33 = uVar34, unaff_x26 == 0)) goto code_r0x014da828;
      *(undefined4 *)(puVar12 + -0x134) = *(undefined4 *)(lVar27 + 0x18);
      if (*(uint *)(unaff_x26 + 0x18) <= uVar20) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar27 = *(long *)(*(long *)(unaff_x26 + 0x10) + unaff_x25 * 8 + 0x20);
      if (((lVar27 == 0) || (lVar27 = *(long *)(lVar27 + 0x40), lVar27 == 0)) ||
         (lVar14 = plVar16[8], lVar14 == 0)) goto code_r0x014da828;
      uVar31 = *(uint *)(lVar27 + 0x18);
      unaff_x26 = (ulong)uVar31;
      if (*(uint *)(lVar14 + 0x18) <= uVar20) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar27 = *(long *)(*(long *)(lVar14 + 0x10) + unaff_x25 * 8 + 0x20);
      if ((lVar27 == 0) || (lVar27 = *(long *)(lVar27 + 0x40), lVar27 == 0)) goto code_r0x014da828;
      iVar13 = *(int *)(lVar27 + 0x18);
      if (0 < iVar13) {
        iVar30 = 0;
        do {
          if (iVar13 == iVar30) goto code_r0x014da82c;
          lVar14 = *(long *)(lVar27 + (long)iVar30 * 8 + 0x20);
          if (lVar14 == 0) goto code_r0x014da828;
          unaff_x22 = (ulong)(uint)(*(int *)(lVar14 + 0x18) + (int)unaff_x22);
          iVar30 = iVar30 + 1;
        } while (iVar13 != iVar30);
      }
      uVar15 = (ulong)((int)uVar15 + uVar28);
      uVar29 = (ulong)(uint)((int)uVar29 + *(int *)(puVar12 + -0x134));
      unaff_x23 = (ulong)((int)unaff_x23 + uVar31);
      uVar20 = uVar20 + 1;
      uVar33 = plVar16[8];
      if (uVar33 == 0) goto code_r0x014da828;
    }
    *(undefined8 *)(puVar12 + -0xb0) = 0;
    *(undefined8 *)(puVar12 + -0xa8) = 0;
    /*Unity.Collections.NativeArray<RaceKnotBurst>$$.ctor*/ func_0x025fe25c(puVar12 + -0xb0,uVar28,4,1,uRam0000000003d3e300);
    lVar27 = *(long *)(puVar12 + -0xb0);
    plVar16[0xd] = *(long *)(puVar12 + -0xa8);
    plVar16[0xc] = lVar27;
    *(undefined8 *)(puVar12 + -0xc0) = 0;
    *(undefined8 *)(puVar12 + -0xb8) = 0;
    /*Unity.Collections.NativeArray<RacePolyLineBurst>$$.ctor*/ func_0x025ff2e4(puVar12 + -0xc0,unaff_x23,4,1,uRam0000000003d3e318);
    lVar27 = *(long *)(puVar12 + -0xc0);
    plVar16[0xf] = *(long *)(puVar12 + -0xb8);
    plVar16[0xe] = lVar27;
    *(undefined8 *)(puVar12 + -0xd0) = 0;
    *(undefined8 *)(puVar12 + -200) = 0;
    /*Unity.Collections.NativeArray<int>$$.ctor*/ func_0x025eda58(puVar12 + -0xd0,uVar15,4,1,uRam0000000003d3e210);
    lVar27 = *(long *)(puVar12 + -0xd0);
    plVar16[0x13] = *(long *)(puVar12 + -200);
    plVar16[0x12] = lVar27;
    *(undefined8 *)(puVar12 + -0xe0) = 0;
    *(undefined8 *)(puVar12 + -0xd8) = 0;
    /*Unity.Collections.NativeArray<int>$$.ctor*/ func_0x025eda58(puVar12 + -0xe0,uVar15,4,1,uRam0000000003d3e210);
    lVar27 = *(long *)(puVar12 + -0xe0);
    plVar16[0x15] = *(long *)(puVar12 + -0xd8);
    plVar16[0x14] = lVar27;
    *(undefined8 *)(puVar12 + -0xf0) = 0;
    *(undefined8 *)(puVar12 + -0xe8) = 0;
    /*Unity.Collections.NativeArray<int>$$.ctor*/ func_0x025eda58(puVar12 + -0xf0,uVar15,4,1,uRam0000000003d3e210);
    lVar27 = *(long *)(puVar12 + -0xf0);
    plVar16[0x17] = *(long *)(puVar12 + -0xe8);
    plVar16[0x16] = lVar27;
    *(undefined8 *)(puVar12 + -0x100) = 0;
    *(undefined8 *)(puVar12 + -0xf8) = 0;
    /*Unity.Collections.NativeArray<int>$$.ctor*/ func_0x025eda58(puVar12 + -0x100,uVar29,4,1,uRam0000000003d3e210);
    lVar27 = *(long *)(puVar12 + -0x100);
    plVar16[0x19] = *(long *)(puVar12 + -0xf8);
    plVar16[0x18] = lVar27;
    *(undefined8 *)(puVar12 + -0x110) = 0;
    *(undefined8 *)(puVar12 + -0x108) = 0;
    /*Unity.Collections.NativeArray<PolyLinePointBurst>$$.ctor*/ func_0x025fb04c(puVar12 + -0x110,unaff_x22,4,1,uRam0000000003d3e2d8);
    lVar27 = *(long *)(puVar12 + -0x110);
    plVar16[0x1d] = *(long *)(puVar12 + -0x108);
    plVar16[0x1c] = lVar27;
    *(undefined8 *)(puVar12 + -0x120) = 0;
    *(undefined8 *)(puVar12 + -0x118) = 0;
    /*Unity.Collections.NativeArray<int>$$.ctor*/ func_0x025eda58(puVar12 + -0x120,uVar29,4,1,uRam0000000003d3e210);
    lVar27 = *(long *)(puVar12 + -0x120);
    plVar16[0x1b] = *(long *)(puVar12 + -0x118);
    plVar16[0x1a] = lVar27;
    *(undefined8 *)(puVar12 + -0x130) = 0;
    *(undefined8 *)(puVar12 + -0x128) = 0;
    /*Unity.Collections.NativeArray<bool>$$.ctor*/ func_0x025e98c0(puVar12 + -0x130,uVar15,4,1,uRam0000000003d3e1c0);
    lVar27 = *(long *)(puVar12 + -0x130);
    uVar15 = *(ulong *)(puVar12 + -0x128);
    plVar16[0x10] = lVar27;
    plVar16[0x11] = uVar15;
    if (0 < (int)uVar15) {
      _bzero(lVar27,uVar15 & 0xffffffff);
    }
    uVar15 = plVar16[8];
    unaff_x23 = 0x3d3e210;
    if (uVar15 != 0) {
      uVar29 = 0;
      unaff_x22 = 0;
      unaff_x23 = 0;
      uVar20 = 0;
      unaff_x25 = 0;
      uVar33 = 0x70;
      goto code_r0x014da33c;
    }
  }
code_r0x014da828:
  func_0x00f78af4();
code_r0x014da82c:
  uVar17 = func_0x00f78b24();
  lVar27 = func_0x00f78ac0(uVar17,0);
  *(ulong *)(puVar12 + -0x170) = unaff_x22;
  *(ulong *)(puVar12 + -0x168) = uVar29;
  *(ulong *)(puVar12 + -0x160) = uVar15;
  *(long **)(puVar12 + -0x158) = plVar16;
  *(undefined1 **)(puVar12 + -0x150) = puVar12 + -0x10;
  *(undefined **)(puVar12 + -0x148) = &Atlas_Gameplay_RaceSplineRootBehaviour__DeInit;
  if ((bRam0000000003eb4bbb & 1) == 0) {
    func_0x00f78a20(0x3d32de0);
    func_0x00f78a20(0x3d32de8);
    func_0x00f78a20(0x3d32df0);
    func_0x00f78a20(0x3d3b9f8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4bbb = 1;
  }
  *(undefined8 *)(puVar12 + -0x188) = 0;
  *(undefined8 *)(puVar12 + -0x180) = 0;
  *(undefined8 *)(puVar12 + -0x178) = 0;
  *(ulong *)(puVar12 + -0x1e0) = unaff_x26;
  *(ulong *)(puVar12 + -0x1d8) = unaff_x25;
  *(ulong *)(puVar12 + -0x1d0) = uVar33;
  *(ulong *)(puVar12 + -0x1c8) = unaff_x23;
  *(ulong *)(puVar12 + -0x1c0) = unaff_x22;
  *(ulong *)(puVar12 + -0x1b8) = uVar29;
  *(undefined8 *)(puVar12 + -0x1b0) = 0x3eb4000;
  *(long *)(puVar12 + -0x1a8) = lVar27;
  *(undefined1 **)(puVar12 + -0x1a0) = puVar12 + -0x150;
  *(undefined **)(puVar12 + -0x198) = &UNK_014da8b0;
  if ((bRam0000000003eb4bca & 1) == 0) {
    func_0x00f78a20(0x3d3e308);
    func_0x00f78a20(0x3d3e218);
    func_0x00f78a20(0x3d3e320);
    func_0x00f78a20(0x3d3e330);
    func_0x00f78a20(0x3d3e2e0);
    func_0x00f78a20(0x3d3e1c8);
    bRam0000000003eb4bca = 1;
  }
  /*Unity.Collections.NativeArray<RaceKnotBurst>$$Dispose*/ func_0x025fe6e0(lVar27 + 0x60,uRam0000000003d3e308);
  /*Unity.Collections.NativeArray<RacePolyLineBurst>$$Dispose*/ func_0x025ff730(lVar27 + 0x70,uRam0000000003d3e320);
  /*Unity.Collections.NativeArray<int>$$Dispose*/ func_0x025ede88(lVar27 + 0x90,uRam0000000003d3e218);
  /*Unity.Collections.NativeArray<int>$$Dispose*/ func_0x025ede88(lVar27 + 0xa0,uRam0000000003d3e218);
  /*Unity.Collections.NativeArray<int>$$Dispose*/ func_0x025ede88(lVar27 + 0xb0,uRam0000000003d3e218);
  /*Unity.Collections.NativeArray<int>$$Dispose*/ func_0x025ede88(lVar27 + 0xc0,uRam0000000003d3e218);
  /*Unity.Collections.NativeArray<PolyLinePointBurst>$$Dispose*/ func_0x025fb4ec(lVar27 + 0xe0,uRam0000000003d3e2e0);
  /*Unity.Collections.NativeArray<int>$$Dispose*/ func_0x025ede88(lVar27 + 0xd0,uRam0000000003d3e218);
  /*Unity.Collections.NativeArray<RaceSplineBurstJobResult>$$Dispose*/ func_0x0260079c(lVar27 + 0xf0,uRam0000000003d3e330);
  uVar17 = *(undefined8 *)(puVar12 + -0x1b0);
  uVar38 = *(undefined8 *)(puVar12 + -0x1c0);
  uVar2 = *(undefined8 *)(puVar12 + -0x1b8);
  uVar1 = *(undefined8 *)(puVar12 + -0x1d0);
  uVar3 = *(undefined8 *)(puVar12 + -0x1c8);
  *(undefined8 *)(puVar12 + -0x1b0) = uVar17;
  *(undefined8 *)(puVar12 + -0x1a8) = *(undefined8 *)(puVar12 + -0x1a8);
  *(undefined8 *)(puVar12 + -0x1a0) = *(undefined8 *)(puVar12 + -0x1a0);
  *(undefined8 *)(puVar12 + -0x198) = *(undefined8 *)(puVar12 + -0x198);
  lVar14 = *(long *)(lVar27 + 0x80);
  if (lVar14 == 0) {
    func_0x00f78a24(0x3d23998,uRam0000000003d3e1c8);
    uVar18 = func_0x00f78aec();
    uVar19 = func_0x00f78a24(0x3d73ae8);
    lVar27 = 0;
    /*System.ObjectDisposedException$$.ctor*/ func_0x029596a4(uVar18,uVar19);
  }
  else {
    iVar13 = *(int *)(lVar27 + 0x8c);
    if (iVar13 != 0) {
      if (1 < iVar13) {
        /*Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$Free*/ func_0x03279ba4(lVar14,iVar13,0);
        *(undefined4 *)(lVar27 + 0x8c) = 0;
      }
      *(long *)(lVar27 + 0x80) = 0;
      *(undefined4 *)(lVar27 + 0x88) = 0;
      return;
    }
    func_0x00f78a24(0x3d22a38);
    uVar18 = func_0x00f78aec();
    uVar19 = func_0x00f78a24(0x3d73ae0);
    lVar27 = 0;
    /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar18,uVar19);
  }
  uVar19 = func_0x00f78a24(0x3d3e1c8);
  auVar41 = func_0x00f78ac0(uVar18,uVar19);
  *(undefined8 *)(puVar12 + -0x1f0) = uVar1;
  *(undefined8 *)(puVar12 + -0x1e8) = uVar3;
  *(undefined8 *)(puVar12 + -0x1e0) = uVar38;
  *(undefined8 *)(puVar12 + -0x1d8) = uVar2;
  *(undefined8 *)(puVar12 + -0x1d0) = uVar17;
  *(undefined8 *)(puVar12 + -0x1c8) = uVar18;
  *(undefined1 **)(puVar12 + -0x1c0) = puVar12 + -0x1a0;
  *(undefined **)(puVar12 + -0x1b8) = &Unity_Collections_NativeArray_bool___CopyFrom;
  uVar17 = *auVar41._0_8_;
  uVar38 = auVar41._0_8_[1];
  lVar32 = *(long *)(lVar27 + 0x18);
  uVar10 = *(ushort *)(lVar32 + 0x132);
  lVar14 = lVar32;
  if ((uVar10 & 1) == 0) {
    func_0x00fac028(lVar32);
    lVar14 = *(long *)(lVar27 + 0x18);
    uVar10 = *(ushort *)(lVar14 + 0x132);
  }
  UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar32 + 0xc0) + 0x20);
  if ((uVar10 & 1) == 0) {
    *(code **)(puVar12 + -0x1f8) = UNRECOVERED_JUMPTABLE;
    func_0x00fac028(lVar14);
    UNRECOVERED_JUMPTABLE = *(code **)(puVar12 + -0x1f8);
  }
                    /* WARNING: Could not recover jumptable at 0x025e9e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (auVar41._8_8_,uVar17,uVar38,*(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x20));
  return;
code_r0x014da33c:
  uVar28 = (uint)unaff_x25;
  if ((int)uVar28 < (int)*(uint *)(uVar15 + 0x18)) {
    if (*(uint *)(uVar15 + 0x18) <= uVar28) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    unaff_x26 = *(ulong *)(*(long *)(uVar15 + 0x10) + (long)(int)uVar28 * 8 + 0x20);
    if (unaff_x26 != 0) {
      iVar13 = *(int *)(unaff_x26 + 0x10);
      if ((*(long *)(unaff_x26 + 0x28) != 0) && (*(long *)(unaff_x26 + 0x30) != 0)) {
        uVar17 = *(undefined8 *)(unaff_x26 + 0x18);
        uVar37 = *(uint *)(unaff_x26 + 0x20);
        uVar38 = *(undefined8 *)(unaff_x26 + 0x4c);
        uVar8 = *(undefined1 *)(unaff_x26 + 0x48);
        iVar30 = *(int *)(*(long *)(unaff_x26 + 0x28) + 0x18);
        iVar5 = *(int *)(*(long *)(unaff_x26 + 0x30) + 0x18);
        uVar31 = (uint)unaff_x23;
        puVar22 = (uint *)(plVar16[0xc] + (long)(int)uVar28 * 0x34);
        *puVar22 = uVar28;
        *(undefined8 *)(puVar22 + 1) = uVar17;
        puVar22[3] = uVar37;
        puVar22[4] = 0x3f800000;
        puVar22[5] = (uint)unaff_x22;
        puVar22[6] = (uint)unaff_x22 + iVar30;
        puVar22[7] = uVar31;
        *(uint *)(puVar12 + -0x134) = uVar31;
        puVar22[8] = uVar31 + iVar5;
        *(undefined1 *)(puVar22 + 9) = uVar8;
        *(undefined2 *)((long)puVar22 + 0x25) = *(undefined2 *)(puVar12 + -0x7c);
        *(undefined1 *)((long)puVar22 + 0x27) = puVar12[-0x7a];
        *(undefined8 *)(puVar22 + 10) = uVar38;
        *(bool *)(puVar22 + 0xc) = iVar13 == 0;
        uVar11 = *(undefined2 *)(puVar12 + -0x80);
        *(undefined1 *)((long)puVar22 + 0x33) = puVar12[-0x7e];
        *(undefined2 *)((long)puVar22 + 0x31) = uVar11;
        lVar27 = *(long *)(unaff_x26 + 0x40);
        if (lVar27 != 0) {
          uVar31 = 0;
          while ((int)uVar31 < (int)*(uint *)(lVar27 + 0x18)) {
            if (*(uint *)(lVar27 + 0x18) <= uVar31) goto code_r0x014da82c;
            lVar14 = *(long *)(unaff_x26 + 0x28);
            if (lVar14 == 0) goto code_r0x014da828;
            if (*(uint *)(lVar14 + 0x18) <= uVar31) goto code_r0x014da82c;
            lVar32 = (long)(int)uVar31;
            lVar27 = *(long *)(lVar27 + lVar32 * 8 + 0x20);
            if ((lVar27 == 0) || (*(long *)(lVar27 + 0x10) == 0)) goto code_r0x014da828;
            uVar37 = *(uint *)(lVar14 + lVar32 * 4 + 0x20);
            cVar9 = *(char *)(lVar27 + 0x20);
            uVar6 = *(uint *)(*(long *)(lVar27 + 0x10) + 0x18);
            uVar36 = *(uint *)(lVar27 + 0x108);
            uVar7 = *(uint *)(lVar27 + 0x28);
            iVar13 = (int)uVar29;
            puVar22 = (uint *)(plVar16[0xe] + (long)iVar13 * 0x20);
            *puVar22 = uVar28;
            puVar22[1] = uVar37;
            puVar22[2] = uVar36;
            puVar22[3] = uVar20;
            puVar22[4] = uVar20 + uVar6;
            puVar22[5] = uVar6;
            *(bool *)(puVar22 + 6) = cVar9 != '\0';
            *(undefined2 *)((long)puVar22 + 0x19) = *(undefined2 *)(puVar12 + -0x84);
            *(undefined1 *)((long)puVar22 + 0x1b) = puVar12[-0x82];
            puVar22[7] = uVar7;
            iVar30 = (int)unaff_x22;
            *(uint *)(plVar16[0x12] + (long)iVar30 * 4) = uVar37;
            lVar14 = *(long *)(unaff_x26 + 0x38);
            if (lVar14 == 0) goto code_r0x014da828;
            if (*(uint *)(lVar14 + 0x18) <= uVar31) goto code_r0x014da82c;
            *(undefined4 *)(plVar16[0x14] + (long)iVar30 * 4) =
                 *(undefined4 *)(lVar14 + lVar32 * 4 + 0x20);
            *(int *)(plVar16[0x16] + (long)iVar30 * 4) = iVar13;
            auVar41 = /*PolyLinePointBurst$$FromRacePolyLine*/ func_0x014c30f0(lVar27,0);
            *(undefined1 (*) [16])(puVar12 + -0x98) = auVar41;
            if (0 < auVar41._8_4_) {
              uVar29 = auVar41._8_8_ & 0xffffffff;
              uVar15 = auVar41._0_8_;
              do {
                _memmove(plVar16[0x1c] + (long)(int)uVar20 * 0x70,uVar15,0x70);
                uVar20 = uVar20 + 1;
                uVar15 = uVar15 + 0x70;
                uVar29 = uVar29 - 1;
              } while (uVar29 != 0);
            }
            /*Unity.Collections.NativeArray<PolyLinePointBurst>$$Dispose*/ func_0x025fb4ec(puVar12 + -0x98,uRam0000000003d3e2e0);
            uVar29 = (ulong)(iVar13 + 1);
            unaff_x22 = (ulong)(iVar30 + 1);
            uVar31 = uVar31 + 1;
            lVar27 = *(long *)(unaff_x26 + 0x40);
            unaff_x23 = unaff_x25;
            if (lVar27 == 0) goto code_r0x014da828;
          }
          lVar27 = *(long *)(unaff_x26 + 0x30);
          if (lVar27 != 0) goto code_r0x014da558;
        }
      }
    }
  }
  else {
    iVar13 = (int)plVar16[0xd];
    if (0 < iVar13) {
      lVar27 = 0;
      lVar14 = plVar16[0xc];
      do {
        piVar23 = (int *)(lVar14 + lVar27 * 0x34);
        lVar32 = (long)piVar23[7];
        iVar30 = piVar23[8];
        if (piVar23[7] < iVar30) {
          iVar13 = *piVar23;
          lVar24 = plVar16[0x18];
          do {
            lVar26 = lVar14 + (long)*(int *)(lVar24 + lVar32 * 4) * 0x34;
            iVar5 = *(int *)(lVar26 + 0x14);
            lVar25 = (long)iVar5;
            iVar4 = *(int *)(lVar26 + 0x18);
            if (iVar5 < iVar4) {
              do {
                if (*(int *)(plVar16[0x12] + lVar25 * 4) == iVar13) {
                  *(undefined4 *)(plVar16[0x1a] + lVar32 * 4) =
                       *(undefined4 *)(plVar16[0x16] + lVar25 * 4);
                  break;
                }
                lVar25 = lVar25 + 1;
              } while (iVar4 != lVar25);
            }
            lVar32 = lVar32 + 1;
          } while (lVar32 != iVar30);
          iVar13 = (int)plVar16[0xd];
        }
        lVar27 = lVar27 + 1;
      } while (lVar27 < iVar13);
    }
    uVar29 = plVar16[7];
    if (uVar29 != 0) {
      uVar20 = *(uint *)(uVar29 + 0x18);
      if ((int)uVar20 < 1) {
code_r0x014da74c:
        *(undefined1 *)((long)plVar16 + 0x5c) = 1;
        *(undefined8 *)(puVar12 + -0xb0) = 0;
        *(undefined8 *)(puVar12 + -0xa8) = 0;
        /*Unity.Collections.NativeArray<RaceSplineBurstJobResult>$$.ctor*/ func_0x02600334(puVar12 + -0xb0,1,4,1,uRam0000000003d3e328);
        *(undefined8 *)((long)plVar16 + 0x19c) = 0;
        *(undefined8 *)((long)plVar16 + 0x194) = 0;
        *(undefined8 *)((long)plVar16 + 0x1ac) = 0;
        *(undefined8 *)((long)plVar16 + 0x1a4) = 0;
        *(undefined8 *)((long)plVar16 + 0x1bc) = 0;
        *(undefined8 *)((long)plVar16 + 0x1b4) = 0;
        *(undefined8 *)((long)plVar16 + 0x1cc) = 0;
        *(undefined8 *)((long)plVar16 + 0x1c4) = 0;
        plVar16[0x21] = plVar16[0xd];
        plVar16[0x20] = plVar16[0xc];
        plVar16[0x23] = plVar16[0xf];
        plVar16[0x22] = plVar16[0xe];
        plVar16[0x25] = plVar16[0x13];
        plVar16[0x24] = plVar16[0x12];
        plVar16[0x27] = plVar16[0x15];
        plVar16[0x26] = plVar16[0x14];
        plVar16[0x29] = plVar16[0x17];
        plVar16[0x28] = plVar16[0x16];
        plVar16[0x2b] = plVar16[0x19];
        plVar16[0x2a] = plVar16[0x18];
        plVar16[0x2d] = plVar16[0x1b];
        plVar16[0x2c] = plVar16[0x1a];
        plVar16[0x2f] = plVar16[0x1d];
        plVar16[0x2e] = plVar16[0x1c];
        lVar27 = *(long *)(puVar12 + -0xb0);
        lVar14 = *(long *)(puVar12 + -0xa8);
        plVar16[0x1e] = lVar27;
        plVar16[0x1f] = lVar14;
        *(undefined4 *)((long)plVar16 + 0x1d4) = 0;
        plVar16[0x31] = plVar16[0x11];
        plVar16[0x30] = plVar16[0x10];
        *(int *)(plVar16 + 0x32) = (int)plVar16[0xb];
        if (((*(ushort *)(/*Atlas.Gameplay.RaceSplineBurstHelpers_TypeInfo*/ lRam0000000003d24090 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Gameplay.RaceSplineBurstHelpers_TypeInfo*/ lRam0000000003d24090 + 0xe0) == 0)) {
          func_0x00f78ad0();
          lVar27 = plVar16[0x1e];
          lVar14 = plVar16[0x1f];
        }
        *(undefined4 *)((long)plVar16 + 0x1c4) = **(undefined4 **)(/*Atlas.Gameplay.RaceSplineBurstHelpers_TypeInfo*/ lRam0000000003d24090 + 0xb8);
        plVar16[0x39] = lVar27;
        plVar16[0x3a] = lVar14;
        return;
      }
      unaff_x22 = 0;
      while( true ) {
        uVar28 = (uint)unaff_x22;
        if (uVar20 <= uVar28) goto code_r0x014da82c;
        unaff_x23 = *(ulong *)(uVar29 + (long)(int)uVar28 * 8 + 0x20);
        if ((unaff_x23 == 0) || (uVar33 = *(ulong *)(unaff_x23 + 0x10), uVar33 == 0)) break;
        uVar20 = *(uint *)(uVar33 + 0x18);
        if ((int)uVar20 < 1) {
          fVar39 = 0.0;
        }
        else {
          unaff_x25 = 0;
          fVar39 = 0.0;
          do {
            uVar31 = (uint)unaff_x25;
            if (uVar20 <= uVar31) goto code_r0x014da82c;
            unaff_x26 = *(ulong *)(uVar33 + (long)(int)uVar31 * 8 + 0x20);
            if (unaff_x26 == 0) goto code_r0x014da828;
            fVar40 = *(float *)(unaff_x26 + 0x18);
            uVar15 = *(ulong *)(unaff_x26 + 0x10);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            iVar13 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar15,0,0);
            if ((iVar13 != 0) && (0 < (int)*(uint *)(plVar16 + 0xf))) {
              if (*(long *)(unaff_x26 + 0x10) == 0) goto code_r0x014da828;
              uVar34 = 0;
              piVar23 = (int *)(plVar16[0xe] + 0x1c);
              do {
                if (*piVar23 == *(int *)(*(long *)(unaff_x26 + 0x10) + 0x90)) {
                  *(int *)(unaff_x26 + 0x1c) = (int)uVar34;
                  break;
                }
                uVar34 = uVar34 + 1;
                piVar23 = piVar23 + 8;
              } while (*(uint *)(plVar16 + 0xf) != uVar34);
            }
            fVar39 = fVar39 + fVar40;
            unaff_x25 = (ulong)(uVar31 + 1);
            uVar20 = *(uint *)(uVar33 + 0x18);
          } while ((int)(uVar31 + 1) < (int)uVar20);
        }
        *(float *)(unaff_x23 + 0x18) = fVar39;
        unaff_x22 = (ulong)(uVar28 + 1);
        uVar20 = *(uint *)(uVar29 + 0x18);
        if ((int)uVar20 <= (int)(uVar28 + 1)) goto code_r0x014da74c;
      }
    }
  }
  goto code_r0x014da828;
code_r0x014da558:
  uVar34 = (ulong)*(uint *)(lVar27 + 0x18);
  lVar14 = (long)(int)*(uint *)(lVar27 + 0x18);
  if (lVar14 < 1) {
    lVar14 = 0;
  }
  unaff_x23 = (ulong)*(uint *)(puVar12 + -0x134);
  if (uVar34 == 1 || 0x100000000 < (long)(uVar34 << 0x20)) {
    puVar21 = (undefined4 *)(lVar27 + 0x20);
    do {
      if (uVar34 == 0) goto code_r0x014da82c;
      *(undefined4 *)(plVar16[0x18] + (long)(int)unaff_x23 * 4) = *puVar21;
      unaff_x23 = (ulong)((int)unaff_x23 + 1);
      uVar34 = uVar34 - 1;
      lVar14 = lVar14 + -1;
      puVar21 = puVar21 + 1;
    } while (lVar14 != 0);
  }
  unaff_x25 = (ulong)(uVar28 + 1);
  uVar15 = plVar16[8];
  if (uVar15 == 0) goto code_r0x014da828;
  goto code_r0x014da33c;
}



// ============================================================
// RVA: 0x14d9f64 | Atlas.Gameplay.RaceSplineRootBehaviour.PrepareBurstContainers
// ============================================================

/* WARNING: Possible PIC construction at 0x014da8ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014da8b0) */
/* WARNING: Removing unreachable block (ram,0x014da8bc) */
/* WARNING: Removing unreachable block (ram,0x014da8c8) */
/* WARNING: Removing unreachable block (ram,0x014da8cc) */
/* WARNING: Removing unreachable block (ram,0x014da8d4) */
/* WARNING: Removing unreachable block (ram,0x014da8e0) */
/* WARNING: Removing unreachable block (ram,0x014da8f8) */
/* WARNING: Removing unreachable block (ram,0x014da914) */
/* WARNING: Removing unreachable block (ram,0x014da91c) */
/* WARNING: Removing unreachable block (ram,0x014da920) */
/* WARNING: Removing unreachable block (ram,0x014da934) */
/* WARNING: Removing unreachable block (ram,0x014da93c) */
/* WARNING: Removing unreachable block (ram,0x014da944) */
/* WARNING: Removing unreachable block (ram,0x014da9bc) */
/* WARNING: Removing unreachable block (ram,0x014da9c0) */
/* WARNING: Removing unreachable block (ram,0x014da9c4) */
/* WARNING: Removing unreachable block (ram,0x014da9d4) */
/* WARNING: Removing unreachable block (ram,0x014daa00) */
/* WARNING: Removing unreachable block (ram,0x014da9dc) */
/* WARNING: Removing unreachable block (ram,0x014da9f8) */
/* WARNING: Removing unreachable block (ram,0x014da950) */
/* WARNING: Removing unreachable block (ram,0x014da974) */
/* WARNING: Removing unreachable block (ram,0x014da994) */
/* WARNING: Removing unreachable block (ram,0x014da9a0) */
/* WARNING: Removing unreachable block (ram,0x014da984) */
/* WARNING: Removing unreachable block (ram,0x014da9b4) */
/* WARNING: Removing unreachable block (ram,0x014da98c) */

void Atlas_Gameplay_RaceSplineRootBehaviour__PrepareBurstContainers(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 uVar8;
  char cVar9;
  ushort uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  int iVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  code *UNRECOVERED_JUMPTABLE;
  long lVar21;
  undefined4 *puVar22;
  int iVar23;
  uint *puVar24;
  int *piVar25;
  long lVar26;
  long lVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  int iVar31;
  uint uVar32;
  long lVar33;
  long lVar34;
  uint uVar35;
  long lVar36;
  ulong uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  float fVar41;
  float fVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined8 uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_98 [16];
  undefined2 uStack_84;
  undefined1 uStack_82;
  undefined2 uStack_80;
  undefined1 uStack_7e;
  undefined2 uStack_7c;
  undefined1 uStack_7a;
  
  if ((bRam0000000003eb4bc9 & 1) == 0) {
    func_0x00f78a20(0x3d3ba00);
    func_0x00f78a20(0x3d3ba08);
    func_0x00f78a20(0x3d3e2e0);
    func_0x00f78a20(0x3d3e210);
    func_0x00f78a20(0x3d3e328);
    func_0x00f78a20(0x3d3e318);
    func_0x00f78a20(0x3d3e2d8);
    func_0x00f78a20(0x3d3e300);
    func_0x00f78a20(0x3d3e1c0);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d24090);
    bRam0000000003eb4bc9 = 1;
  }
  uStack_7c = 0;
  uStack_7a = 0;
  uStack_80 = 0;
  uStack_7e = 0;
  uStack_82 = 0;
  uStack_84 = 0;
  auStack_98._0_8_ = 0;
  auStack_98._8_8_ = 0;
  lVar33 = *(long *)(param_1 + 0x40);
  auVar44 = ZEXT816(0);
  if (lVar33 != 0) {
    iVar28 = 0;
    iVar29 = 0;
    iVar31 = 0;
    iVar18 = 0;
    uVar38 = 0;
    while (uVar30 = *(uint *)(lVar33 + 0x18), (int)uVar38 < (int)uVar30) {
      if (uVar30 <= uVar38) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      auVar13._8_8_ = auStack_98._8_8_;
      auVar13._0_8_ = auStack_98._0_8_;
      auVar12._8_8_ = auStack_98._8_8_;
      auVar12._0_8_ = auStack_98._0_8_;
      auVar44._8_8_ = auStack_98._8_8_;
      auVar44._0_8_ = auStack_98._0_8_;
      lVar33 = *(long *)(*(long *)(lVar33 + 0x10) + (long)(int)uVar38 * 8 + 0x20);
      if (((lVar33 == 0) || (lVar33 = *(long *)(lVar33 + 0x28), auVar44 = auVar12, lVar33 == 0)) ||
         (lVar34 = *(long *)(param_1 + 0x40), auVar44 = auVar13, lVar34 == 0)) goto LAB_014da828;
      iVar1 = *(int *)(lVar33 + 0x18);
      if (*(uint *)(lVar34 + 0x18) <= uVar38) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      auVar15._8_8_ = auStack_98._8_8_;
      auVar15._0_8_ = auStack_98._0_8_;
      auVar14._8_8_ = auStack_98._8_8_;
      auVar14._0_8_ = auStack_98._0_8_;
      auVar44._8_8_ = auStack_98._8_8_;
      auVar44._0_8_ = auStack_98._0_8_;
      lVar36 = (long)(int)uVar38;
      lVar33 = *(long *)(*(long *)(lVar34 + 0x10) + lVar36 * 8 + 0x20);
      if (((lVar33 == 0) || (lVar33 = *(long *)(lVar33 + 0x30), auVar44 = auVar14, lVar33 == 0)) ||
         (lVar34 = *(long *)(param_1 + 0x40), auVar44 = auVar15, lVar34 == 0)) goto LAB_014da828;
      iVar2 = *(int *)(lVar33 + 0x18);
      if (*(uint *)(lVar34 + 0x18) <= uVar38) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      auVar17._8_8_ = auStack_98._8_8_;
      auVar17._0_8_ = auStack_98._0_8_;
      auVar16._8_8_ = auStack_98._8_8_;
      auVar16._0_8_ = auStack_98._0_8_;
      auVar44._8_8_ = auStack_98._8_8_;
      auVar44._0_8_ = auStack_98._0_8_;
      lVar33 = *(long *)(*(long *)(lVar34 + 0x10) + lVar36 * 8 + 0x20);
      if (((lVar33 == 0) || (lVar33 = *(long *)(lVar33 + 0x40), auVar44 = auVar16, lVar33 == 0)) ||
         (lVar34 = *(long *)(param_1 + 0x40), auVar44 = auVar17, lVar34 == 0)) goto LAB_014da828;
      iVar3 = *(int *)(lVar33 + 0x18);
      if (*(uint *)(lVar34 + 0x18) <= uVar38) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar33 = *(long *)(*(long *)(lVar34 + 0x10) + lVar36 * 8 + 0x20);
      auVar44 = auStack_98;
      if ((lVar33 == 0) || (lVar33 = *(long *)(lVar33 + 0x40), lVar33 == 0)) goto LAB_014da828;
      iVar4 = *(int *)(lVar33 + 0x18);
      if (0 < iVar4) {
        iVar23 = 0;
        do {
          if (iVar4 == iVar23) goto LAB_014da82c;
          lVar34 = *(long *)(lVar33 + (long)iVar23 * 8 + 0x20);
          if (lVar34 == 0) goto LAB_014da828;
          iVar18 = *(int *)(lVar34 + 0x18) + iVar18;
          iVar23 = iVar23 + 1;
        } while (iVar4 != iVar23);
      }
      iVar28 = iVar28 + iVar1;
      iVar29 = iVar29 + iVar2;
      iVar31 = iVar31 + iVar3;
      uVar38 = uVar38 + 1;
      lVar33 = *(long *)(param_1 + 0x40);
      if (lVar33 == 0) goto LAB_014da828;
    }
    uStack_b0 = 0;
    uStack_a8 = 0;
    /*Unity.Collections.NativeArray<RaceKnotBurst>$$.ctor*/ func_0x025fe25c(&uStack_b0,uVar30,4,1,uRam0000000003d3e300);
    *(undefined8 *)(param_1 + 0x68) = uStack_a8;
    *(undefined8 *)(param_1 + 0x60) = uStack_b0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    /*Unity.Collections.NativeArray<RacePolyLineBurst>$$.ctor*/ func_0x025ff2e4(&uStack_c0,iVar31,4,1,uRam0000000003d3e318);
    *(undefined8 *)(param_1 + 0x78) = uStack_b8;
    *(undefined8 *)(param_1 + 0x70) = uStack_c0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    /*Unity.Collections.NativeArray<int>$$.ctor*/ func_0x025eda58(&uStack_d0,iVar28,4,1,uRam0000000003d3e210);
    *(undefined8 *)(param_1 + 0x98) = uStack_c8;
    *(undefined8 *)(param_1 + 0x90) = uStack_d0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    /*Unity.Collections.NativeArray<int>$$.ctor*/ func_0x025eda58(&uStack_e0,iVar28,4,1,uRam0000000003d3e210);
    *(undefined8 *)(param_1 + 0xa8) = uStack_d8;
    *(undefined8 *)(param_1 + 0xa0) = uStack_e0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    /*Unity.Collections.NativeArray<int>$$.ctor*/ func_0x025eda58(&uStack_f0,iVar28,4,1,uRam0000000003d3e210);
    *(undefined8 *)(param_1 + 0xb8) = uStack_e8;
    *(undefined8 *)(param_1 + 0xb0) = uStack_f0;
    uStack_100 = 0;
    uStack_f8 = 0;
    /*Unity.Collections.NativeArray<int>$$.ctor*/ func_0x025eda58(&uStack_100,iVar29,4,1,uRam0000000003d3e210);
    *(undefined8 *)(param_1 + 200) = uStack_f8;
    *(undefined8 *)(param_1 + 0xc0) = uStack_100;
    uStack_110 = 0;
    uStack_108 = 0;
    /*Unity.Collections.NativeArray<PolyLinePointBurst>$$.ctor*/ func_0x025fb04c(&uStack_110,iVar18,4,1,uRam0000000003d3e2d8);
    *(undefined8 *)(param_1 + 0xe8) = uStack_108;
    *(undefined8 *)(param_1 + 0xe0) = uStack_110;
    uStack_120 = 0;
    uStack_118 = 0;
    /*Unity.Collections.NativeArray<int>$$.ctor*/ func_0x025eda58(&uStack_120,iVar29,4,1,uRam0000000003d3e210);
    *(undefined8 *)(param_1 + 0xd8) = uStack_118;
    *(undefined8 *)(param_1 + 0xd0) = uStack_120;
    uStack_130 = 0;
    uStack_128 = 0;
    /*Unity.Collections.NativeArray<bool>$$.ctor*/ func_0x025e98c0(&uStack_130,iVar28,4,1,uRam0000000003d3e1c0);
    *(undefined8 *)(param_1 + 0x80) = uStack_130;
    *(ulong *)(param_1 + 0x88) = uStack_128;
    if (0 < (int)uStack_128) {
      _bzero(uStack_130,uStack_128 & 0xffffffff);
    }
    lVar33 = *(long *)(param_1 + 0x40);
    auVar44 = auStack_98;
    if (lVar33 != 0) {
      iVar18 = 0;
      uVar30 = 0;
      uVar32 = 0;
      uVar38 = 0;
      uVar35 = 0;
      goto code_r0x014da33c;
    }
  }
LAB_014da828:
  auStack_98 = auVar44;
  func_0x00f78af4();
LAB_014da82c:
  uVar19 = func_0x00f78b24();
  lVar33 = func_0x00f78ac0(uVar19,0);
  if ((bRam0000000003eb4bbb & 1) == 0) {
    func_0x00f78a20(0x3d32de0);
    func_0x00f78a20(0x3d32de8);
    func_0x00f78a20(0x3d32df0);
    func_0x00f78a20(0x3d3b9f8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4bbb = 1;
  }
  if ((bRam0000000003eb4bca & 1) == 0) {
    func_0x00f78a20(0x3d3e308);
    func_0x00f78a20(0x3d3e218);
    func_0x00f78a20(0x3d3e320);
    func_0x00f78a20(0x3d3e330);
    func_0x00f78a20(0x3d3e2e0);
    func_0x00f78a20(0x3d3e1c8);
    bRam0000000003eb4bca = 1;
  }
  /*Unity.Collections.NativeArray<RaceKnotBurst>$$Dispose*/ func_0x025fe6e0(lVar33 + 0x60,uRam0000000003d3e308);
  /*Unity.Collections.NativeArray<RacePolyLineBurst>$$Dispose*/ func_0x025ff730(lVar33 + 0x70,uRam0000000003d3e320);
  /*Unity.Collections.NativeArray<int>$$Dispose*/ func_0x025ede88(lVar33 + 0x90,uRam0000000003d3e218);
  /*Unity.Collections.NativeArray<int>$$Dispose*/ func_0x025ede88(lVar33 + 0xa0,uRam0000000003d3e218);
  /*Unity.Collections.NativeArray<int>$$Dispose*/ func_0x025ede88(lVar33 + 0xb0,uRam0000000003d3e218);
  /*Unity.Collections.NativeArray<int>$$Dispose*/ func_0x025ede88(lVar33 + 0xc0,uRam0000000003d3e218);
  /*Unity.Collections.NativeArray<PolyLinePointBurst>$$Dispose*/ func_0x025fb4ec(lVar33 + 0xe0,uRam0000000003d3e2e0);
  /*Unity.Collections.NativeArray<int>$$Dispose*/ func_0x025ede88(lVar33 + 0xd0,uRam0000000003d3e218);
  /*Unity.Collections.NativeArray<RaceSplineBurstJobResult>$$Dispose*/ func_0x0260079c(lVar33 + 0xf0,uRam0000000003d3e330);
  lVar34 = *(long *)(lVar33 + 0x80);
  if (lVar34 == 0) {
    func_0x00f78a24(0x3d23998,uRam0000000003d3e1c8);
    uVar20 = func_0x00f78aec();
    uVar19 = func_0x00f78a24(0x3d73ae8);
    lVar33 = 0;
    /*System.ObjectDisposedException$$.ctor*/ func_0x029596a4(uVar20,uVar19);
  }
  else {
    iVar18 = *(int *)(lVar33 + 0x8c);
    if (iVar18 != 0) {
      if (1 < iVar18) {
        /*Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$Free*/ func_0x03279ba4(lVar34,iVar18,0);
        *(undefined4 *)(lVar33 + 0x8c) = 0;
      }
      *(long *)(lVar33 + 0x80) = 0;
      *(undefined4 *)(lVar33 + 0x88) = 0;
      return;
    }
    func_0x00f78a24(0x3d22a38);
    uVar20 = func_0x00f78aec();
    uVar19 = func_0x00f78a24(0x3d73ae0);
    lVar33 = 0;
    /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar20,uVar19);
  }
  uVar19 = func_0x00f78a24(0x3d3e1c8);
  auVar44 = func_0x00f78ac0(uVar20,uVar19);
  uVar19 = *auVar44._0_8_;
  uVar20 = auVar44._0_8_[1];
  lVar36 = *(long *)(lVar33 + 0x18);
  uVar10 = *(ushort *)(lVar36 + 0x132);
  lVar34 = lVar36;
  if ((uVar10 & 1) == 0) {
    func_0x00fac028(lVar36);
    lVar34 = *(long *)(lVar33 + 0x18);
    uVar10 = *(ushort *)(lVar34 + 0x132);
  }
  UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar36 + 0xc0) + 0x20);
  if ((uVar10 & 1) == 0) {
    func_0x00fac028(lVar34);
  }
                    /* WARNING: Could not recover jumptable at 0x025e9e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (auVar44._8_8_,uVar19,uVar20,*(undefined8 *)(*(long *)(lVar34 + 0xc0) + 0x20));
  return;
code_r0x014da33c:
  if ((int)uVar35 < (int)*(uint *)(lVar33 + 0x18)) {
    if (*(uint *)(lVar33 + 0x18) <= uVar35) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar33 = *(long *)(*(long *)(lVar33 + 0x10) + (long)(int)uVar35 * 8 + 0x20);
    auVar44 = auStack_98;
    if (lVar33 != 0) {
      iVar28 = *(int *)(lVar33 + 0x10);
      if ((*(long *)(lVar33 + 0x28) != 0) && (*(long *)(lVar33 + 0x30) != 0)) {
        uVar19 = *(undefined8 *)(lVar33 + 0x18);
        uVar40 = *(uint *)(lVar33 + 0x20);
        uVar20 = *(undefined8 *)(lVar33 + 0x4c);
        uVar8 = *(undefined1 *)(lVar33 + 0x48);
        iVar29 = *(int *)(*(long *)(lVar33 + 0x28) + 0x18);
        iVar31 = *(int *)(*(long *)(lVar33 + 0x30) + 0x18);
        puVar24 = (uint *)(*(long *)(param_1 + 0x60) + (long)(int)uVar35 * 0x34);
        *puVar24 = uVar35;
        *(undefined8 *)(puVar24 + 1) = uVar19;
        puVar24[3] = uVar40;
        puVar24[4] = 0x3f800000;
        puVar24[5] = uVar30;
        puVar24[6] = uVar30 + iVar29;
        puVar24[7] = uVar32;
        puVar24[8] = uVar32 + iVar31;
        *(undefined1 *)(puVar24 + 9) = uVar8;
        *(undefined2 *)((long)puVar24 + 0x25) = uStack_7c;
        *(undefined1 *)((long)puVar24 + 0x27) = uStack_7a;
        *(undefined8 *)(puVar24 + 10) = uVar20;
        *(bool *)(puVar24 + 0xc) = iVar28 == 0;
        *(undefined1 *)((long)puVar24 + 0x33) = uStack_7e;
        *(undefined2 *)((long)puVar24 + 0x31) = uStack_80;
        lVar34 = *(long *)(lVar33 + 0x40);
        if (lVar34 != 0) {
          uVar40 = 0;
          while (auVar44 = auStack_98, (int)uVar40 < (int)*(uint *)(lVar34 + 0x18)) {
            if (*(uint *)(lVar34 + 0x18) <= uVar40) goto LAB_014da82c;
            lVar36 = *(long *)(lVar33 + 0x28);
            if (lVar36 == 0) goto LAB_014da828;
            if (*(uint *)(lVar36 + 0x18) <= uVar40) goto LAB_014da82c;
            lVar21 = (long)(int)uVar40;
            lVar34 = *(long *)(lVar34 + lVar21 * 8 + 0x20);
            if ((lVar34 == 0) || (*(long *)(lVar34 + 0x10) == 0)) goto LAB_014da828;
            uVar5 = *(uint *)(lVar36 + lVar21 * 4 + 0x20);
            cVar9 = *(char *)(lVar34 + 0x20);
            uVar6 = *(uint *)(*(long *)(lVar34 + 0x10) + 0x18);
            uVar39 = *(uint *)(lVar34 + 0x108);
            uVar7 = *(uint *)(lVar34 + 0x28);
            puVar24 = (uint *)(*(long *)(param_1 + 0x70) + (long)iVar18 * 0x20);
            *puVar24 = uVar35;
            puVar24[1] = uVar5;
            puVar24[2] = uVar39;
            puVar24[3] = uVar38;
            puVar24[4] = uVar38 + uVar6;
            puVar24[5] = uVar6;
            *(bool *)(puVar24 + 6) = cVar9 != '\0';
            *(undefined2 *)((long)puVar24 + 0x19) = uStack_84;
            *(undefined1 *)((long)puVar24 + 0x1b) = uStack_82;
            puVar24[7] = uVar7;
            *(uint *)(*(long *)(param_1 + 0x90) + (long)(int)uVar30 * 4) = uVar5;
            lVar36 = *(long *)(lVar33 + 0x38);
            if (lVar36 == 0) goto LAB_014da828;
            if (*(uint *)(lVar36 + 0x18) <= uVar40) goto LAB_014da82c;
            *(undefined4 *)(*(long *)(param_1 + 0xa0) + (long)(int)uVar30 * 4) =
                 *(undefined4 *)(lVar36 + lVar21 * 4 + 0x20);
            *(int *)(*(long *)(param_1 + 0xb0) + (long)(int)uVar30 * 4) = iVar18;
            auVar43 = /*PolyLinePointBurst$$FromRacePolyLine*/ func_0x014c30f0(lVar34,0);
            auStack_98._0_8_ = auVar43._0_8_;
            auVar11 = auVar43;
            if (0 < auVar43._8_4_) {
              uVar37 = auVar43._8_8_ & 0xffffffff;
              do {
                auStack_98._8_8_ = auVar43._8_8_;
                lVar34 = auVar43._0_8_;
                _memmove(*(long *)(param_1 + 0xe0) + (long)(int)uVar38 * 0x70,lVar34,0x70);
                auVar11._8_8_ = auStack_98._8_8_;
                auVar11._0_8_ = auStack_98._0_8_;
                uVar38 = uVar38 + 1;
                auVar43._8_8_ = auStack_98._8_8_;
                auVar43._0_8_ = lVar34 + 0x70;
                uVar37 = uVar37 - 1;
              } while (uVar37 != 0);
            }
            auStack_98 = auVar11;
            /*Unity.Collections.NativeArray<PolyLinePointBurst>$$Dispose*/ func_0x025fb4ec(auStack_98,uRam0000000003d3e2e0);
            iVar18 = iVar18 + 1;
            uVar30 = uVar30 + 1;
            uVar40 = uVar40 + 1;
            lVar34 = *(long *)(lVar33 + 0x40);
            auVar44 = auStack_98;
            if (lVar34 == 0) goto LAB_014da828;
          }
          lVar33 = *(long *)(lVar33 + 0x30);
          if (lVar33 != 0) goto code_r0x014da558;
        }
      }
    }
  }
  else {
    iVar18 = *(int *)(param_1 + 0x68);
    if (0 < iVar18) {
      lVar33 = 0;
      lVar34 = *(long *)(param_1 + 0x60);
      do {
        piVar25 = (int *)(lVar34 + lVar33 * 0x34);
        lVar36 = (long)piVar25[7];
        iVar28 = piVar25[8];
        if (piVar25[7] < iVar28) {
          iVar18 = *piVar25;
          lVar21 = *(long *)(param_1 + 0xc0);
          do {
            lVar27 = lVar34 + (long)*(int *)(lVar21 + lVar36 * 4) * 0x34;
            iVar29 = *(int *)(lVar27 + 0x14);
            lVar26 = (long)iVar29;
            iVar31 = *(int *)(lVar27 + 0x18);
            if (iVar29 < iVar31) {
              do {
                if (*(int *)(*(long *)(param_1 + 0x90) + lVar26 * 4) == iVar18) {
                  *(undefined4 *)(*(long *)(param_1 + 0xd0) + lVar36 * 4) =
                       *(undefined4 *)(*(long *)(param_1 + 0xb0) + lVar26 * 4);
                  break;
                }
                lVar26 = lVar26 + 1;
              } while (iVar31 != lVar26);
            }
            lVar36 = lVar36 + 1;
          } while (lVar36 != iVar28);
          iVar18 = *(int *)(param_1 + 0x68);
        }
        lVar33 = lVar33 + 1;
      } while (lVar33 < iVar18);
    }
    lVar33 = *(long *)(param_1 + 0x38);
    auVar44 = auStack_98;
    if (lVar33 != 0) {
      uVar38 = *(uint *)(lVar33 + 0x18);
      if ((int)uVar38 < 1) {
code_r0x014da74c:
        *(undefined1 *)(param_1 + 0x5c) = 1;
        uStack_b0 = 0;
        uStack_a8 = 0;
        /*Unity.Collections.NativeArray<RaceSplineBurstJobResult>$$.ctor*/ func_0x02600334(&uStack_b0,1,4,1,uRam0000000003d3e328);
        *(undefined8 *)(param_1 + 0x19c) = 0;
        *(undefined8 *)(param_1 + 0x194) = 0;
        *(undefined8 *)(param_1 + 0x1ac) = 0;
        *(undefined8 *)(param_1 + 0x1a4) = 0;
        *(undefined8 *)(param_1 + 0x1bc) = 0;
        *(undefined8 *)(param_1 + 0x1b4) = 0;
        *(undefined8 *)(param_1 + 0x1cc) = 0;
        *(undefined8 *)(param_1 + 0x1c4) = 0;
        *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_1 + 0x68);
        *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_1 + 0x60);
        *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_1 + 0x78);
        *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_1 + 0x70);
        *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_1 + 0x98);
        *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_1 + 0x90);
        *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_1 + 0xa8);
        *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_1 + 0xa0);
        *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_1 + 0xb8);
        *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_1 + 0xb0);
        *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_1 + 200);
        *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_1 + 0xc0);
        *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_1 + 0xd8);
        *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_1 + 0xd0);
        *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_1 + 0xe8);
        *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_1 + 0xe0);
        *(undefined8 *)(param_1 + 0xf0) = uStack_b0;
        *(undefined8 *)(param_1 + 0xf8) = uStack_a8;
        *(undefined4 *)(param_1 + 0x1d4) = 0;
        *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_1 + 0x88);
        *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_1 + 0x80);
        *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_1 + 0x58);
        if (((*(ushort *)(/*Atlas.Gameplay.RaceSplineBurstHelpers_TypeInfo*/ lRam0000000003d24090 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Gameplay.RaceSplineBurstHelpers_TypeInfo*/ lRam0000000003d24090 + 0xe0) == 0)) {
          func_0x00f78ad0();
          uStack_b0 = *(undefined8 *)(param_1 + 0xf0);
          uStack_a8 = *(undefined8 *)(param_1 + 0xf8);
        }
        *(undefined4 *)(param_1 + 0x1c4) = **(undefined4 **)(/*Atlas.Gameplay.RaceSplineBurstHelpers_TypeInfo*/ lRam0000000003d24090 + 0xb8);
        *(undefined8 *)(param_1 + 0x1c8) = uStack_b0;
        *(undefined8 *)(param_1 + 0x1d0) = uStack_a8;
        return;
      }
      uVar30 = 0;
      while( true ) {
        if (uVar38 <= uVar30) goto LAB_014da82c;
        lVar34 = *(long *)(lVar33 + (long)(int)uVar30 * 8 + 0x20);
        auVar44 = auStack_98;
        if ((lVar34 == 0) || (lVar36 = *(long *)(lVar34 + 0x10), lVar36 == 0)) break;
        uVar38 = *(uint *)(lVar36 + 0x18);
        if ((int)uVar38 < 1) {
          fVar41 = 0.0;
        }
        else {
          uVar32 = 0;
          fVar41 = 0.0;
          do {
            if (uVar38 <= uVar32) goto LAB_014da82c;
            lVar21 = *(long *)(lVar36 + (long)(int)uVar32 * 8 + 0x20);
            auVar44 = auStack_98;
            if (lVar21 == 0) goto LAB_014da828;
            fVar42 = *(float *)(lVar21 + 0x18);
            uVar19 = *(undefined8 *)(lVar21 + 0x10);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            iVar18 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar19,0,0);
            if ((iVar18 != 0) && (0 < (int)*(uint *)(param_1 + 0x78))) {
              auVar44 = auStack_98;
              if (*(long *)(lVar21 + 0x10) == 0) goto LAB_014da828;
              uVar37 = 0;
              piVar25 = (int *)(*(long *)(param_1 + 0x70) + 0x1c);
              do {
                if (*piVar25 == *(int *)(*(long *)(lVar21 + 0x10) + 0x90)) {
                  *(int *)(lVar21 + 0x1c) = (int)uVar37;
                  break;
                }
                uVar37 = uVar37 + 1;
                piVar25 = piVar25 + 8;
              } while (*(uint *)(param_1 + 0x78) != uVar37);
            }
            fVar41 = fVar41 + fVar42;
            uVar32 = uVar32 + 1;
            uVar38 = *(uint *)(lVar36 + 0x18);
          } while ((int)uVar32 < (int)uVar38);
        }
        *(float *)(lVar34 + 0x18) = fVar41;
        uVar30 = uVar30 + 1;
        uVar38 = *(uint *)(lVar33 + 0x18);
        if ((int)uVar38 <= (int)uVar30) goto code_r0x014da74c;
      }
    }
  }
  goto LAB_014da828;
code_r0x014da558:
  uVar37 = (ulong)*(uint *)(lVar33 + 0x18);
  lVar34 = (long)(int)*(uint *)(lVar33 + 0x18);
  if (lVar34 < 1) {
    lVar34 = 0;
  }
  if (uVar37 == 1 || 0x100000000 < (long)(uVar37 << 0x20)) {
    puVar22 = (undefined4 *)(lVar33 + 0x20);
    do {
      if (uVar37 == 0) goto LAB_014da82c;
      *(undefined4 *)(*(long *)(param_1 + 0xc0) + (long)(int)uVar32 * 4) = *puVar22;
      uVar32 = uVar32 + 1;
      uVar37 = uVar37 - 1;
      lVar34 = lVar34 + -1;
      puVar22 = puVar22 + 1;
    } while (lVar34 != 0);
  }
  uVar35 = uVar35 + 1;
  lVar33 = *(long *)(param_1 + 0x40);
  if (lVar33 == 0) goto LAB_014da828;
  goto code_r0x014da33c;
}



// ============================================================
// RVA: 0x14da838 | Atlas.Gameplay.RaceSplineRootBehaviour.DeInit
// ============================================================

/* WARNING: Possible PIC construction at 0x014da8ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014da8b0) */
/* WARNING: Removing unreachable block (ram,0x014da8bc) */
/* WARNING: Removing unreachable block (ram,0x014da8c8) */
/* WARNING: Removing unreachable block (ram,0x014da8cc) */
/* WARNING: Removing unreachable block (ram,0x014da8d4) */
/* WARNING: Removing unreachable block (ram,0x014da8e0) */
/* WARNING: Removing unreachable block (ram,0x014da8f8) */
/* WARNING: Removing unreachable block (ram,0x014da914) */
/* WARNING: Removing unreachable block (ram,0x014da91c) */
/* WARNING: Removing unreachable block (ram,0x014da920) */
/* WARNING: Removing unreachable block (ram,0x014da934) */
/* WARNING: Removing unreachable block (ram,0x014da93c) */
/* WARNING: Removing unreachable block (ram,0x014da944) */
/* WARNING: Removing unreachable block (ram,0x014da9bc) */
/* WARNING: Removing unreachable block (ram,0x014da9c0) */
/* WARNING: Removing unreachable block (ram,0x014da9c4) */
/* WARNING: Removing unreachable block (ram,0x014da9d4) */
/* WARNING: Removing unreachable block (ram,0x014daa00) */
/* WARNING: Removing unreachable block (ram,0x014da9dc) */
/* WARNING: Removing unreachable block (ram,0x014da9f8) */
/* WARNING: Removing unreachable block (ram,0x014da950) */
/* WARNING: Removing unreachable block (ram,0x014da974) */
/* WARNING: Removing unreachable block (ram,0x014da994) */
/* WARNING: Removing unreachable block (ram,0x014da9a0) */
/* WARNING: Removing unreachable block (ram,0x014da984) */
/* WARNING: Removing unreachable block (ram,0x014da9b4) */
/* WARNING: Removing unreachable block (ram,0x014da98c) */

void Atlas_Gameplay_RaceSplineRootBehaviour__DeInit(long param_1)

{
  int iVar1;
  ushort uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  if ((bRam0000000003eb4bbb & 1) == 0) {
    func_0x00f78a20(0x3d32de0);
    func_0x00f78a20(0x3d32de8);
    func_0x00f78a20(0x3d32df0);
    func_0x00f78a20(0x3d3b9f8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4bbb = 1;
  }
  if ((bRam0000000003eb4bca & 1) == 0) {
    func_0x00f78a20(0x3d3e308);
    func_0x00f78a20(0x3d3e218);
    func_0x00f78a20(0x3d3e320);
    func_0x00f78a20(0x3d3e330);
    func_0x00f78a20(0x3d3e2e0);
    func_0x00f78a20(0x3d3e1c8);
    bRam0000000003eb4bca = 1;
  }
  /*Unity.Collections.NativeArray<RaceKnotBurst>$$Dispose*/ func_0x025fe6e0(param_1 + 0x60,uRam0000000003d3e308);
  /*Unity.Collections.NativeArray<RacePolyLineBurst>$$Dispose*/ func_0x025ff730(param_1 + 0x70,uRam0000000003d3e320);
  /*Unity.Collections.NativeArray<int>$$Dispose*/ func_0x025ede88(param_1 + 0x90,uRam0000000003d3e218);
  /*Unity.Collections.NativeArray<int>$$Dispose*/ func_0x025ede88(param_1 + 0xa0,uRam0000000003d3e218);
  /*Unity.Collections.NativeArray<int>$$Dispose*/ func_0x025ede88(param_1 + 0xb0,uRam0000000003d3e218);
  /*Unity.Collections.NativeArray<int>$$Dispose*/ func_0x025ede88(param_1 + 0xc0,uRam0000000003d3e218);
  /*Unity.Collections.NativeArray<PolyLinePointBurst>$$Dispose*/ func_0x025fb4ec(param_1 + 0xe0,uRam0000000003d3e2e0);
  /*Unity.Collections.NativeArray<int>$$Dispose*/ func_0x025ede88(param_1 + 0xd0,uRam0000000003d3e218);
  /*Unity.Collections.NativeArray<RaceSplineBurstJobResult>$$Dispose*/ func_0x0260079c(param_1 + 0xf0,uRam0000000003d3e330);
  lVar3 = *(long *)(param_1 + 0x80);
  if (lVar3 == 0) {
    func_0x00f78a24(0x3d23998,uRam0000000003d3e1c8);
    uVar4 = func_0x00f78aec();
    uVar5 = func_0x00f78a24(0x3d73ae8);
    lVar3 = 0;
    /*System.ObjectDisposedException$$.ctor*/ func_0x029596a4(uVar4,uVar5);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x8c);
    if (iVar1 != 0) {
      if (1 < iVar1) {
        /*Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$Free*/ func_0x03279ba4(lVar3,iVar1,0);
        *(undefined4 *)(param_1 + 0x8c) = 0;
      }
      *(long *)(param_1 + 0x80) = 0;
      *(undefined4 *)(param_1 + 0x88) = 0;
      return;
    }
    func_0x00f78a24(0x3d22a38);
    uVar4 = func_0x00f78aec();
    uVar5 = func_0x00f78a24(0x3d73ae0);
    lVar3 = 0;
    /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar4,uVar5);
  }
  uVar5 = func_0x00f78a24(0x3d3e1c8);
  auVar8 = func_0x00f78ac0(uVar4,uVar5);
  uVar5 = *auVar8._0_8_;
  uVar4 = auVar8._0_8_[1];
  lVar7 = *(long *)(lVar3 + 0x18);
  uVar2 = *(ushort *)(lVar7 + 0x132);
  lVar6 = lVar7;
  if ((uVar2 & 1) == 0) {
    func_0x00fac028(lVar7);
    lVar6 = *(long *)(lVar3 + 0x18);
    uVar2 = *(ushort *)(lVar6 + 0x132);
  }
  UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x20);
  if ((uVar2 & 1) == 0) {
    func_0x00fac028(lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x025e9e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(auVar8._8_8_,uVar5,uVar4,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x20))
  ;
  return;
}



// ============================================================
// RVA: 0x14daa04 | Atlas.Gameplay.RaceSplineRootBehaviour.DeInitBurstContainers
// ============================================================

void Atlas_Gameplay_RaceSplineRootBehaviour__DeInitBurstContainers(long param_1)

{
  int iVar1;
  ushort uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  if ((bRam0000000003eb4bca & 1) == 0) {
    func_0x00f78a20(0x3d3e308);
    func_0x00f78a20(0x3d3e218);
    func_0x00f78a20(0x3d3e320);
    func_0x00f78a20(0x3d3e330);
    func_0x00f78a20(0x3d3e2e0);
    func_0x00f78a20(0x3d3e1c8);
    bRam0000000003eb4bca = 1;
  }
  /*Unity.Collections.NativeArray<RaceKnotBurst>$$Dispose*/ func_0x025fe6e0(param_1 + 0x60,uRam0000000003d3e308);
  /*Unity.Collections.NativeArray<RacePolyLineBurst>$$Dispose*/ func_0x025ff730(param_1 + 0x70,uRam0000000003d3e320);
  /*Unity.Collections.NativeArray<int>$$Dispose*/ func_0x025ede88(param_1 + 0x90,uRam0000000003d3e218);
  /*Unity.Collections.NativeArray<int>$$Dispose*/ func_0x025ede88(param_1 + 0xa0,uRam0000000003d3e218);
  /*Unity.Collections.NativeArray<int>$$Dispose*/ func_0x025ede88(param_1 + 0xb0,uRam0000000003d3e218);
  /*Unity.Collections.NativeArray<int>$$Dispose*/ func_0x025ede88(param_1 + 0xc0,uRam0000000003d3e218);
  /*Unity.Collections.NativeArray<PolyLinePointBurst>$$Dispose*/ func_0x025fb4ec(param_1 + 0xe0,uRam0000000003d3e2e0);
  /*Unity.Collections.NativeArray<int>$$Dispose*/ func_0x025ede88(param_1 + 0xd0,uRam0000000003d3e218);
  /*Unity.Collections.NativeArray<RaceSplineBurstJobResult>$$Dispose*/ func_0x0260079c(param_1 + 0xf0,uRam0000000003d3e330);
  lVar3 = *(long *)(param_1 + 0x80);
  if (lVar3 == 0) {
    func_0x00f78a24(0x3d23998,uRam0000000003d3e1c8);
    uVar4 = func_0x00f78aec();
    uVar5 = func_0x00f78a24(0x3d73ae8);
    lVar3 = 0;
    /*System.ObjectDisposedException$$.ctor*/ func_0x029596a4(uVar4,uVar5);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x8c);
    if (iVar1 != 0) {
      if (1 < iVar1) {
        /*Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$Free*/ func_0x03279ba4(lVar3,iVar1,0);
        *(undefined4 *)(param_1 + 0x8c) = 0;
      }
      *(long *)(param_1 + 0x80) = 0;
      *(undefined4 *)(param_1 + 0x88) = 0;
      return;
    }
    func_0x00f78a24(0x3d22a38);
    uVar4 = func_0x00f78aec();
    uVar5 = func_0x00f78a24(0x3d73ae0);
    lVar3 = 0;
    /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar4,uVar5);
  }
  uVar5 = func_0x00f78a24(0x3d3e1c8);
  auVar8 = func_0x00f78ac0(uVar4,uVar5);
  uVar5 = *auVar8._0_8_;
  uVar4 = auVar8._0_8_[1];
  lVar7 = *(long *)(lVar3 + 0x18);
  uVar2 = *(ushort *)(lVar7 + 0x132);
  lVar6 = lVar7;
  if ((uVar2 & 1) == 0) {
    func_0x00fac028(lVar7);
    lVar6 = *(long *)(lVar3 + 0x18);
    uVar2 = *(ushort *)(lVar6 + 0x132);
  }
  UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x20);
  if ((uVar2 & 1) == 0) {
    func_0x00fac028(lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x025e9e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(auVar8._8_8_,uVar5,uVar4,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x20))
  ;
  return;
}



// ============================================================
// RVA: 0x14dab38 | Atlas.Gameplay.RaceSplineRootBehaviour.OnUpdate
// ============================================================

void Atlas_Gameplay_RaceSplineRootBehaviour__OnUpdate(long param_1,long *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar9;
  long lVar10;
  uint uVar11;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  uint uVar12;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  long lVar13;
  undefined1 *unaff_x29;
  undefined1 *puVar14;
  undefined *unaff_x30;
  float fVar15;
  float extraout_s0;
  float extraout_s0_00;
  undefined8 unaff_d8;
  float fVar16;
  undefined8 unaff_d9;
  float fVar17;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  
  puVar2 = &stack0xffffffffffffffd0;
  puVar14 = &stack0xfffffffffffffff0;
  uVar9 = 0x3eb4000;
  if ((bRam0000000003eb4bbc & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    bRam0000000003eb4bbc = 1;
  }
  if (param_2 == (long *)0x0) {
    unaff_x30 = &Atlas_Gameplay_RaceSplineRootBehaviour__OnUpdateSplineSwitchLoops;
    lVar5 = func_0x00f78af4();
    unaff_x20 = 0;
    fVar15 = extraout_s0;
  }
  else {
    lVar5 = *param_2;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_014dabc8;
        }
        piVar8 = piVar8 + 4;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)func_0x00fac1f0(param_2,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
LAB_014dabc8:
    fVar15 = (float)(*(code *)*puVar4)(param_2,puVar4[1]);
    puVar2 = (undefined1 *)register0x00000008;
    lVar5 = param_1;
    param_1 = unaff_x19;
    uVar9 = unaff_x21;
    puVar14 = unaff_x29;
  }
  *(undefined8 *)(puVar2 + -0x70) = unaff_d11;
  *(undefined8 *)(puVar2 + -0x68) = unaff_d10;
  *(undefined8 *)(puVar2 + -0x60) = unaff_d9;
  *(undefined8 *)(puVar2 + -0x58) = unaff_d8;
  *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar2 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar2 + -0x28) = uVar9;
  *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
  *(long *)(puVar2 + -0x18) = param_1;
  *(undefined1 **)(puVar2 + -0x10) = puVar14;
  *(undefined **)(puVar2 + -8) = unaff_x30;
  if ((bRam0000000003eb4bbd & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4bbd = 1;
  }
  if (*(char *)(lVar5 + 0x5c) != '\0') {
    lVar10 = *(long *)(lVar5 + 0x38);
    if (lVar10 == 0) {
code_r0x014dad60:
      lVar5 = func_0x00f78af4();
      fVar15 = *(float *)(lVar5 + 0x1c) + extraout_s0_00;
      *(float *)(lVar5 + 0x1c) = fVar15;
      if (*(float *)(lVar5 + 0x18) <= fVar15) {
        *(float *)(lVar5 + 0x1c) = fVar15 - *(float *)(lVar5 + 0x18);
      }
      return;
    }
    uVar1 = *(uint *)(lVar10 + 0x18);
    if (0 < (int)uVar1) {
      uVar11 = 0;
      do {
        if (uVar1 <= uVar11) {
code_r0x014dad54:
          uVar9 = func_0x00f78b24();
          func_0x00f78ac0(uVar9,0);
          goto code_r0x014dad60;
        }
        lVar6 = *(long *)(lVar10 + (long)(int)uVar11 * 8 + 0x20);
        if (lVar6 == 0) goto code_r0x014dad60;
        fVar16 = *(float *)(lVar6 + 0x1c) + fVar15;
        *(float *)(lVar6 + 0x1c) = fVar16;
        if (*(float *)(lVar6 + 0x18) <= fVar16) {
          fVar16 = fVar16 - *(float *)(lVar6 + 0x18);
          *(float *)(lVar6 + 0x1c) = fVar16;
        }
        lVar6 = *(long *)(lVar6 + 0x10);
        if (lVar6 == 0) goto code_r0x014dad60;
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (0 < (int)uVar1) {
          uVar12 = 0;
          do {
            if (uVar1 <= uVar12) goto code_r0x014dad54;
            lVar13 = *(long *)(lVar6 + (long)(int)uVar12 * 8 + 0x20);
            if (lVar13 == 0) goto code_r0x014dad60;
            fVar17 = *(float *)(lVar13 + 0x18);
            uVar9 = *(undefined8 *)(lVar13 + 0x10);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            fVar17 = fVar16 - fVar17;
            iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar9,0,0);
            if (iVar3 != 0) {
              *(bool *)(*(long *)(lVar5 + 0x80) + (long)*(int *)(lVar13 + 0x1c)) =
                   fVar17 <= 0.0 && 0.0 < fVar16;
            }
            uVar12 = uVar12 + 1;
            uVar1 = *(uint *)(lVar6 + 0x18);
            fVar16 = fVar17;
          } while ((int)uVar12 < (int)uVar1);
        }
        uVar11 = uVar11 + 1;
        uVar1 = *(uint *)(lVar10 + 0x18);
      } while ((int)uVar11 < (int)uVar1);
    }
  }
  return;
}



// ============================================================
// RVA: 0x14dabec | Atlas.Gameplay.RaceSplineRootBehaviour.OnUpdateSplineSwitchLoops
// ============================================================

void Atlas_Gameplay_RaceSplineRootBehaviour__OnUpdateSplineSwitchLoops(float param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  float extraout_s0;
  float fVar9;
  float fVar10;
  
  if ((bRam0000000003eb4bbd & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4bbd = 1;
  }
  if (*(char *)(param_2 + 0x5c) != '\0') {
    lVar5 = *(long *)(param_2 + 0x38);
    if (lVar5 == 0) {
LAB_014dad60:
      lVar5 = func_0x00f78af4();
      fVar9 = *(float *)(lVar5 + 0x1c) + extraout_s0;
      *(float *)(lVar5 + 0x1c) = fVar9;
      if (*(float *)(lVar5 + 0x18) <= fVar9) {
        *(float *)(lVar5 + 0x1c) = fVar9 - *(float *)(lVar5 + 0x18);
      }
      return;
    }
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (0 < (int)uVar1) {
      uVar6 = 0;
      do {
        if (uVar1 <= uVar6) {
LAB_014dad54:
          uVar4 = func_0x00f78b24();
          func_0x00f78ac0(uVar4,0);
          goto LAB_014dad60;
        }
        lVar3 = *(long *)(lVar5 + (long)(int)uVar6 * 8 + 0x20);
        if (lVar3 == 0) goto LAB_014dad60;
        fVar9 = *(float *)(lVar3 + 0x1c) + param_1;
        *(float *)(lVar3 + 0x1c) = fVar9;
        if (*(float *)(lVar3 + 0x18) <= fVar9) {
          fVar9 = fVar9 - *(float *)(lVar3 + 0x18);
          *(float *)(lVar3 + 0x1c) = fVar9;
        }
        lVar3 = *(long *)(lVar3 + 0x10);
        if (lVar3 == 0) goto LAB_014dad60;
        uVar1 = *(uint *)(lVar3 + 0x18);
        if (0 < (int)uVar1) {
          uVar7 = 0;
          do {
            if (uVar1 <= uVar7) goto LAB_014dad54;
            lVar8 = *(long *)(lVar3 + (long)(int)uVar7 * 8 + 0x20);
            if (lVar8 == 0) goto LAB_014dad60;
            fVar10 = *(float *)(lVar8 + 0x18);
            uVar4 = *(undefined8 *)(lVar8 + 0x10);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            fVar10 = fVar9 - fVar10;
            iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar4,0,0);
            if (iVar2 != 0) {
              *(bool *)(*(long *)(param_2 + 0x80) + (long)*(int *)(lVar8 + 0x1c)) =
                   fVar10 <= 0.0 && 0.0 < fVar9;
            }
            uVar7 = uVar7 + 1;
            uVar1 = *(uint *)(lVar3 + 0x18);
            fVar9 = fVar10;
          } while ((int)uVar7 < (int)uVar1);
        }
        uVar6 = uVar6 + 1;
        uVar1 = *(uint *)(lVar5 + 0x18);
      } while ((int)uVar6 < (int)uVar1);
    }
  }
  return;
}



// ============================================================
// RVA: 0x14dad84 | Atlas.Gameplay.RaceSplineRootBehaviour.OnCalculate
// ============================================================

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Atlas_Gameplay_RaceSplineRootBehaviour__OnCalculate(undefined8 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  int extraout_w1;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  float fVar19;
  int iStack_17c;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  int aiStack_f0 [4];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lVar15 = 0x3eb4000;
  puVar14 = &uRam0000000003d3b9e0;
  if ((bRam0000000003eb4bbe & 1) == 0) {
    func_0x00f78a20(&uRam0000000003d535e0);
    func_0x00f78a20(&uRam0000000003d536b0);
    func_0x00f78a20(&uRam0000000003d32de0);
    func_0x00f78a20(&uRam0000000003d32de8);
    func_0x00f78a20(0x3d32df0);
    func_0x00f78a20(&uRam0000000003d3b9e8);
    func_0x00f78a20(&uRam0000000003d3b9f0);
    func_0x00f78a20(&uRam0000000003d3b9f8);
    func_0x00f78a20(&uRam0000000003d3b9e0);
    func_0x00f78a20(0x3d3aeb8);
    func_0x00f78a20(0x3d3b0e0);
    func_0x00f78a20(0x3d3ba00);
    func_0x00f78a20(0x3d3ba08);
    func_0x00f78a20(0x3d3aec0);
    func_0x00f78a20(0x3d3b0e8);
    func_0x00f78a20(&/*System.Collections.Generic.List<RaceKnot>_TypeInfo*/ uRam0000000003d1dd08);
    func_0x00f78a20(&/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990);
    func_0x00f78a20(&uRam0000000003d3f478);
    func_0x00f78a20(&/*System.Predicate<RaceKnot>_TypeInfo*/ uRam0000000003d1e5e0);
    func_0x00f78a20(&/*Atlas.Gameplay.RaceKnot_TypeInfo*/ uRam0000000003d24080);
    func_0x00f78a20(&/*RacePolyLine_TypeInfo*/ uRam0000000003d24088);
    func_0x00f78a20(&uRam0000000003d63a90);
    func_0x00f78a20(&/*Atlas.Gameplay.RaceSplineRootBehaviour.<>c__DisplayClass46_0_TypeInfo*/ uRam0000000003d287d0);
    func_0x00f78a20(&uRam0000000003d63a98);
    func_0x00f78a20(&/*Atlas.Gameplay.RaceSplineRootBehaviour.<>c__DisplayClass46_1_TypeInfo*/ uRam0000000003d287d8);
    bRam0000000003eb4bbe = 1;
  }
  uStack_90 = 0;
  uStack_88 = 0;
  lStack_80 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  aiStack_f0[2] = 0;
  /*Atlas.Geometry.TrackEditorUpdatableBehaviour$$OnCalculate*/ func_0x01511148(param_1,0);
  *(undefined4 *)(param_1 + 0xb) = 0;
  uVar7 = func_0x00f78aec(/*System.Collections.Generic.List<RaceKnot>_TypeInfo*/ uRam0000000003d1dd08);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar7,uRam0000000003d3b9e0);
  param_1[8] = uVar7;
  lVar8 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_1,0);
  if (lVar8 != 0) {
    uVar9 = /*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(lVar8,uRam0000000003d535e0);
    param_1[9] = uVar9;
    lVar8 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_1,0);
    if (lVar8 != 0) {
      puVar14 = (undefined8 *)0x3d23000;
      uVar9 = /*UnityEngine.Component$$GetComponentsInChildren<TMP_SubMeshUI>*/ func_0x0183944c(lVar8,uRam0000000003d536b0);
      param_1[10] = uVar9;
      uVar7 = param_1[9];
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar10 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar7,0,0);
      if ((uVar10 & 1) != 0) {
        return;
      }
      /*Atlas.Gameplay.RaceSplineRootBehaviour$$GenerateIDForAllKnotBehaviours*/ func_0x014db900(uVar10,param_1[9],param_1[10]);
      /*Atlas.Gameplay.RaceSplineRootBehaviour$$GenerateBranchingProbabilityWeightTable*/ func_0x014dba64(param_1);
      lVar8 = param_1[9];
      if (lVar8 != 0) {
        lVar15 = 0;
        uVar7 = 0;
        puVar14 = (undefined8 *)0xffffffff;
        lVar18 = 4;
        while (lVar8 = *(long *)(lVar8 + 0x78), lVar8 != 0) {
          puVar16 = (undefined8 *)(lVar18 + -4);
          puVar13 = param_1;
          if ((long)(int)*(uint *)(lVar8 + 0x18) <= (long)puVar16) goto LAB_014db208;
          bVar4 = (undefined8 *)(ulong)*(uint *)(lVar8 + 0x18) <= puVar16;
          if (lVar15 == 0) {
            if (bVar4) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            puVar14 = *(undefined8 **)(*(long *)(lVar8 + 0x10) + lVar18 * 8);
            lVar15 = func_0x00f78aec(/*Atlas.Gameplay.RaceKnot_TypeInfo*/ uRam0000000003d24080);
            Atlas_Gameplay_RaceKnot___ctor(lVar15,puVar14,uVar7,0);
            if (param_1[8] == 0) break;
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(param_1[8],lVar15,uRam0000000003d3b9e8);
            uVar7 = (ulong)((int)uVar7 + 1);
            puVar14 = puVar16;
          }
          else {
            if (bVar4) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar8 = *(long *)(*(long *)(lVar8 + 0x10) + lVar18 * 8);
            if (lVar8 == 0) break;
            iVar5 = /*MainSplineKnotBehaviour$$NumBranchIn*/ func_0x0148c964(lVar8,0);
            if (iVar5 == 0) {
              if ((param_1[9] == 0) || (lVar8 = *(long *)(param_1[9] + 0x78), lVar8 == 0)) break;
              if ((undefined8 *)(ulong)*(uint *)(lVar8 + 0x18) <= puVar16) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              lVar8 = *(long *)(*(long *)(lVar8 + 0x10) + lVar18 * 8);
              if (lVar8 == 0) break;
              iVar5 = /*MainSplineKnotBehaviour$$NumBranchOut*/ func_0x0148ca40(lVar8,0);
              if (iVar5 == 0) goto LAB_014db1f8;
            }
            if ((param_1[9] == 0) || (lVar8 = *(long *)(param_1[9] + 0x78), lVar8 == 0)) break;
            if ((undefined8 *)(ulong)*(uint *)(lVar8 + 0x18) <= puVar16) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            uVar9 = *(undefined8 *)(*(long *)(lVar8 + 0x10) + lVar18 * 8);
            lVar8 = func_0x00f78aec(/*Atlas.Gameplay.RaceKnot_TypeInfo*/ uRam0000000003d24080);
            Atlas_Gameplay_RaceKnot___ctor(lVar8,uVar9,uVar7,0);
            if (((param_1[8] == 0) ||
                (/*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(param_1[8],lVar8,uRam0000000003d3b9e8), lVar8 == 0)) ||
               (param_1[9] == 0)) break;
            uVar1 = *(undefined4 *)(lVar8 + 0x10);
            uVar9 = /*UnityEngine.Object$$get_name*/ func_0x03244608(param_1[9],0);
            uVar9 = /*Atlas.Gameplay.RaceSplineRootBehaviour$$ProbabilityLookup*/ func_0x014dbbb4(param_1,uVar9);
            if (param_1[9] == 0) break;
            /*MainSplineBehaviour$$SplitPolyLine*/ func_0x0148bcd4(&uStack_108,param_1[9],puVar14,puVar16,0);
            if (param_1[9] == 0) break;
            uVar7 = (ulong)((int)uVar7 + 1);
            uVar11 = /*MainSplineBehaviour$$GetKnots*/ func_0x0148c318(param_1[9],puVar14,puVar16,0);
            uVar12 = func_0x00f78aec(/*RacePolyLine_TypeInfo*/ uRam0000000003d24088);
            uStack_118 = uStack_100;
            uStack_120 = uStack_108;
            lStack_110 = lStack_f8;
            /*RacePolyLine$$.ctor*/ func_0x014d7334(uVar12,&uStack_120,uVar11,0xffffffff);
            Atlas_Gameplay_RaceKnot__AddNextKnot(lVar15,uVar1,uVar9,uVar12);
            Atlas_Gameplay_RaceKnot__AddPreviousKnot(lVar8,*(undefined4 *)(lVar15 + 0x10));
            puVar14 = puVar16;
            lVar15 = lVar8;
          }
LAB_014db1f8:
          lVar8 = param_1[9];
          lVar18 = lVar18 + 1;
          if (lVar8 == 0) break;
        }
      }
    }
  }
LAB_014db204:
  do {
    do {
      do {
        func_0x00f78af4();
        puVar13 = param_1;
LAB_014db208:
        lVar8 = puVar13[8];
        param_1 = puVar13;
      } while (lVar8 == 0);
      if (*(int *)(lVar8 + 0x18) == 0) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
    } while ((lVar15 == 0) || (lVar8 = *(long *)(*(long *)(lVar8 + 0x10) + 0x20), lVar8 == 0));
    Atlas_Gameplay_RaceKnot__AddPreviousKnot(lVar8,*(undefined4 *)(lVar15 + 0x10));
    lVar8 = puVar13[8];
  } while (lVar8 == 0);
  if (*(int *)(lVar8 + 0x18) == 0) {
    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    lVar18 = puVar13[8];
    lVar15 = 0xffffffff;
    if (lVar18 == 0) goto LAB_014db204;
    lVar15 = *(long *)(lVar8 + 0x10) + -8;
  }
  else {
    lVar15 = *(long *)(lVar8 + 0x10) + (long)(*(int *)(lVar8 + 0x18) + -1) * 8;
    lVar18 = lVar8;
  }
  lVar15 = *(long *)(lVar15 + 0x20);
  if (*(int *)(lVar18 + 0x18) == 0) {
    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
  }
  lVar8 = *(long *)(*(long *)(lVar18 + 0x10) + 0x20);
  if ((lVar8 != 0) && (puVar13[9] != 0)) {
    uVar1 = *(undefined4 *)(lVar8 + 0x10);
    uVar9 = /*UnityEngine.Object$$get_name*/ func_0x03244608(puVar13[9],0);
    uVar9 = /*Atlas.Gameplay.RaceSplineRootBehaviour$$ProbabilityLookup*/ func_0x014dbbb4(puVar13,uVar9);
    if (puVar13[9] != 0) {
      /*MainSplineBehaviour$$SplitPolyLine*/ func_0x0148bcd4(&uStack_108,puVar13[9],puVar14,0,0);
      if (puVar13[9] != 0) {
        uVar11 = /*MainSplineBehaviour$$GetKnots*/ func_0x0148c318(puVar13[9],puVar14,0,0);
        puVar14 = (undefined8 *)func_0x00f78aec(/*RacePolyLine_TypeInfo*/ uRam0000000003d24088);
        uStack_138 = uStack_100;
        uStack_140 = uStack_108;
        lStack_130 = lStack_f8;
        /*RacePolyLine$$.ctor*/ func_0x014d7334(puVar14,&uStack_140,uVar11,0xffffffff);
        if (lVar15 != 0) {
          Atlas_Gameplay_RaceKnot__AddNextKnot(lVar15,uVar1,uVar9,puVar14);
          if (puVar13[8] != 0) {
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_158,puVar13[8],uRam0000000003d3b9f8);
            uStack_88 = uStack_150;
            uStack_90 = uStack_158;
            lStack_80 = lStack_148;
            iStack_17c = (int)uVar7;
            while (uVar7 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_90,uRam0000000003d32de8), (uVar7 & 1) != 0) {
              if (lStack_80 == 0) {
                func_0x00f78af4();
                goto code_r0x014db860;
              }
              fVar19 = *(float *)(puVar13 + 0xb);
              lVar8 = Atlas_Gameplay_RaceKnot__get_PrimaryNextPoly();
              if (lVar8 == 0) {
                func_0x00f78af4();
                goto code_r0x014db860;
              }
              *(float *)(puVar13 + 0xb) = fVar19 + *(float *)(lVar8 + 0x108);
            }
            aiStack_f0[aiStack_f0[2]] = 0x23b;
            iVar5 = aiStack_f0[2];
            uVar6 = aiStack_f0[2] + 1;
            aiStack_f0[2] = uVar6;
            /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_90,uRam0000000003d32de0);
            puVar14 = (undefined8 *)(ulong)uVar6;
            if ((uVar6 != 0) && (aiStack_f0[iVar5] == 0x23b)) {
              puVar14 = (undefined8 *)(ulong)(uint)iVar5;
              aiStack_f0[2] = iVar5;
            }
            iVar5 = (int)puVar14;
            uVar7 = puVar13[10];
            if (uVar7 != 0) {
              if (0 < *(int *)(uVar7 + 0x18)) {
                puVar14 = (undefined8 *)0x0;
                do {
                  lVar15 = func_0x00f78aec(/*Atlas.Gameplay.RaceSplineRootBehaviour.<>c__DisplayClass46_0_TypeInfo*/ uRam0000000003d287d0);
                  /*Atlas.Gameplay.RaceSplineRootBehaviour.<>c__DisplayClass46_0$$.ctor*/ func_0x01563d50(lVar15,0);
                  if ((undefined8 *)(ulong)*(uint *)(uVar7 + 0x18) <= puVar14) {
                    puVar13 = (undefined8 *)func_0x00f78b24();
                    do {
                      while (func_0x00f78ac0(puVar13,0), extraout_w1 != 1) {
                        __Unwind_Resume();
                        puVar13 = puVar14;
                      }
                      puVar13 = (undefined8 *)___cxa_begin_catch();
                      puVar13 = (undefined8 *)*puVar13;
                      ___cxa_end_catch();
                      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_90,uRam0000000003d32de0);
                    } while (puVar13 != (undefined8 *)0x0);
                    return;
                  }
                  param_1 = puVar13;
                  if (lVar15 == 0) goto LAB_014db204;
                  *(undefined8 *)(lVar15 + 0x10) = *(undefined8 *)(uVar7 + 0x20 + (long)puVar14 * 8)
                  ;
                  lVar8 = func_0x00f78aec(/*Atlas.Gameplay.RaceSplineRootBehaviour.<>c__DisplayClass46_1_TypeInfo*/ uRam0000000003d287d8);
                  /*Atlas.Gameplay.RaceSplineRootBehaviour.<>c__DisplayClass46_1$$.ctor*/ func_0x01563de4(lVar8,0);
                  if (*(long *)(lVar15 + 0x10) == 0) goto LAB_014db204;
                  *(int *)(*(long *)(lVar15 + 0x10) + 0x90) = (int)puVar14;
                  lVar18 = puVar13[8];
                  uVar9 = func_0x00f78aec(/*System.Predicate<RaceKnot>_TypeInfo*/ uRam0000000003d1e5e0);
                  /*System.Predicate<TMP_MaterialManager.MaskingMaterial>$$.ctor*/ func_0x0270a61c(uVar9,lVar15,uRam0000000003d63a90,uRam0000000003d3f478);
                  if (lVar18 == 0) goto LAB_014db204;
                  uVar6 = /*System.Collections.Generic.List<TMP_MaterialManager.MaskingMaterial>$$FindIndex*/ func_0x02427980(lVar18,uVar9,uRam0000000003d3b9f0);
                  if ((int)uVar6 < 0) {
                    if ((*(long *)(lVar15 + 0x10) == 0) ||
                       (lVar18 = *(long *)(*(long *)(lVar15 + 0x10) + 0x40), lVar18 == 0))
                    goto LAB_014db204;
                    if (*(int *)(lVar18 + 0x18) == 0) {
                      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                    }
                    uVar9 = *(undefined8 *)(*(long *)(lVar18 + 0x10) + 0x20);
                    lVar18 = func_0x00f78aec(/*Atlas.Gameplay.RaceKnot_TypeInfo*/ uRam0000000003d24080);
                    Atlas_Gameplay_RaceKnot___ctor(lVar18,uVar9,iStack_17c,1);
                    if (puVar13[8] == 0) goto LAB_014db204;
                    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(puVar13[8],lVar18,uRam0000000003d3b9e8);
                    iStack_17c = iStack_17c + 1;
                  }
                  else {
                    lVar18 = puVar13[8];
                    if (lVar18 == 0) goto LAB_014db204;
                    if (*(uint *)(lVar18 + 0x18) <= uVar6) {
                      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                    }
                    lVar18 = *(long *)(*(long *)(lVar18 + 0x10) + (ulong)uVar6 * 8 + 0x20);
                  }
                  if ((*(long *)(lVar15 + 0x10) == 0) ||
                     (lVar17 = *(long *)(*(long *)(lVar15 + 0x10) + 0x40), lVar17 == 0))
                  goto LAB_014db204;
                  iVar2 = *(int *)(lVar17 + 0x18);
                  if (iVar2 == 0) {
                    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  lVar17 = *(long *)(*(long *)(lVar17 + 0x10) + (long)(iVar2 + -1) * 8 + 0x20);
                  if ((lVar17 == 0) || (lVar8 == 0)) goto LAB_014db204;
                  *(undefined4 *)(lVar8 + 0x10) = *(undefined4 *)(lVar17 + 0x38);
                  lVar17 = puVar13[8];
                  uVar9 = func_0x00f78aec(/*System.Predicate<RaceKnot>_TypeInfo*/ uRam0000000003d1e5e0);
                  /*System.Predicate<TMP_MaterialManager.MaskingMaterial>$$.ctor*/ func_0x0270a61c(uVar9,lVar8,uRam0000000003d63a98,uRam0000000003d3f478);
                  if (lVar17 == 0) goto LAB_014db204;
                  uVar6 = /*System.Collections.Generic.List<TMP_MaterialManager.MaskingMaterial>$$FindIndex*/ func_0x02427980(lVar17,uVar9,uRam0000000003d3b9f0);
                  if ((int)uVar6 < 0) {
                    if ((*(long *)(lVar15 + 0x10) == 0) ||
                       (lVar8 = *(long *)(*(long *)(lVar15 + 0x10) + 0x40), lVar8 == 0))
                    goto LAB_014db204;
                    iVar2 = *(int *)(lVar8 + 0x18);
                    if (iVar2 == 0) {
                      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                    }
                    uVar9 = *(undefined8 *)(*(long *)(lVar8 + 0x10) + (long)(iVar2 + -1) * 8 + 0x20)
                    ;
                    lVar8 = func_0x00f78aec(/*Atlas.Gameplay.RaceKnot_TypeInfo*/ uRam0000000003d24080);
                    Atlas_Gameplay_RaceKnot___ctor(lVar8,uVar9,iStack_17c,1);
                    if (puVar13[8] == 0) goto LAB_014db204;
                    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(puVar13[8],lVar8,uRam0000000003d3b9e8);
                    iStack_17c = iStack_17c + 1;
                  }
                  else {
                    lVar8 = puVar13[8];
                    if (lVar8 == 0) goto LAB_014db204;
                    if (*(uint *)(lVar8 + 0x18) <= uVar6) {
                      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                    }
                    lVar8 = *(long *)(*(long *)(lVar8 + 0x10) + (ulong)uVar6 * 8 + 0x20);
                  }
                  if ((lVar8 == 0) || (*(long *)(lVar15 + 0x10) == 0)) goto LAB_014db204;
                  uVar1 = *(undefined4 *)(lVar8 + 0x10);
                  uVar9 = /*UnityEngine.Object$$get_name*/ func_0x03244608(*(long *)(lVar15 + 0x10),0);
                  uVar9 = /*Atlas.Gameplay.RaceSplineRootBehaviour$$ProbabilityLookup*/ func_0x014dbbb4(puVar13,uVar9);
                  lVar17 = *(long *)(lVar15 + 0x10);
                  param_1 = &uRam0000000003d3f478;
                  if (lVar17 == 0) goto LAB_014db204;
                  uStack_170 = *(undefined8 *)(lVar17 + 0x60);
                  uStack_d0 = *(undefined8 *)(lVar17 + 0x58);
                  uStack_a0 = *(undefined8 *)(lVar17 + 0x88);
                  uStack_a8 = *(undefined8 *)(lVar17 + 0x80);
                  uStack_b0 = *(undefined8 *)(lVar17 + 0x78);
                  uStack_160 = *(undefined8 *)(lVar17 + 0x70);
                  uStack_168 = *(undefined8 *)(lVar17 + 0x68);
                  uStack_d8 = *(undefined8 *)(lVar17 + 0x50);
                  uStack_e0 = *(undefined8 *)(lVar17 + 0x48);
                  uStack_c8 = uStack_170;
                  uStack_c0 = uStack_168;
                  uStack_b8 = uStack_160;
                  uVar11 = /*SplineBranchBehaviour$$GetKnots*/ func_0x01503aa4(lVar17,0);
                  lVar15 = func_0x00f78aec(/*RacePolyLine_TypeInfo*/ uRam0000000003d24088);
                  /*RacePolyLine$$.ctor*/ func_0x014d7334(lVar15,&uStack_170,uVar11,puVar14);
                  if (lVar18 == 0) goto LAB_014db204;
                  Atlas_Gameplay_RaceKnot__AddNextKnot(lVar18,uVar1,uVar9,lVar15);
                  Atlas_Gameplay_RaceKnot__AddPreviousKnot(lVar8,*(undefined4 *)(lVar18 + 0x10));
                  puVar14 = (undefined8 *)((long)puVar14 + 1);
                } while ((long)puVar14 < (long)*(int *)(uVar7 + 0x18));
              }
              param_1 = puVar13;
              if (puVar13[8] != 0) {
                /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_108,puVar13[8],uRam0000000003d3b9f8);
                uStack_88 = uStack_100;
                uStack_90 = uStack_108;
                lStack_80 = lStack_f8;
                while( true ) {
                  uVar7 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_90,uRam0000000003d32de8);
                  if ((uVar7 & 1) == 0) {
                    aiStack_f0[iVar5] = 0x418;
                    aiStack_f0[2] = aiStack_f0[2] + 1;
                    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_90,uRam0000000003d32de0);
                    return;
                  }
                  if (lStack_80 == 0) break;
                  Atlas_Gameplay_RaceKnot__ComputeDistanceToLap(lStack_80,puVar13[8]);
                }
                func_0x00f78af4();
code_r0x014db860:
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x14db864);
                (*pcVar3)();
              }
            }
          }
        }
      }
    }
  }
  goto LAB_014db204;
}



// ============================================================
// RVA: 0x14db900 | Atlas.Gameplay.RaceSplineRootBehaviour.GenerateIDForAllKnotBehaviours
// ============================================================

/* WARNING: Possible PIC construction at 0x014dbb6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014dbed4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014dbb70) */
/* WARNING: Removing unreachable block (ram,0x014dbb7c) */
/* WARNING: Removing unreachable block (ram,0x014dbed8) */
/* WARNING: Removing unreachable block (ram,0x014dbff8) */
/* WARNING: Removing unreachable block (ram,0x014dbee4) */
/* WARNING: Removing unreachable block (ram,0x014dbf00) */
/* WARNING: Removing unreachable block (ram,0x014dbf04) */
/* WARNING: Removing unreachable block (ram,0x014dbf34) */
/* WARNING: Removing unreachable block (ram,0x014dbf38) */
/* WARNING: Removing unreachable block (ram,0x014dbf44) */
/* WARNING: Removing unreachable block (ram,0x014dbf48) */
/* WARNING: Removing unreachable block (ram,0x014dbf78) */
/* WARNING: Removing unreachable block (ram,0x014dbf7c) */
/* WARNING: Removing unreachable block (ram,0x014dc000) */
/* WARNING: Removing unreachable block (ram,0x014dbf80) */
/* WARNING: Removing unreachable block (ram,0x014dbf88) */
/* WARNING: Removing unreachable block (ram,0x014dbf90) */
/* WARNING: Removing unreachable block (ram,0x014dbf9c) */
/* WARNING: Removing unreachable block (ram,0x014dbfa0) */
/* WARNING: Removing unreachable block (ram,0x014dbfa8) */
/* WARNING: Removing unreachable block (ram,0x014dc00c) */
/* WARNING: Removing unreachable block (ram,0x014dc020) */
/* WARNING: Removing unreachable block (ram,0x014dc02c) */
/* WARNING: Removing unreachable block (ram,0x014dc034) */
/* WARNING: Removing unreachable block (ram,0x014dbfb8) */
/* WARNING: Removing unreachable block (ram,0x014dbfc4) */
/* WARNING: Removing unreachable block (ram,0x014dbfe0) */
/* WARNING: Removing unreachable block (ram,0x014dc0c0) */
/* WARNING: Removing unreachable block (ram,0x014dbfe8) */
/* WARNING: Removing unreachable block (ram,0x014dc0cc) */
/* WARNING: Removing unreachable block (ram,0x014dbff0) */
/* WARNING: Removing unreachable block (ram,0x014dc03c) */
/* WARNING: Removing unreachable block (ram,0x014dc04c) */
/* WARNING: Removing unreachable block (ram,0x014dc054) */
/* WARNING: Removing unreachable block (ram,0x014dc070) */
/* WARNING: Removing unreachable block (ram,0x014dc094) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong Atlas_Gameplay_RaceSplineRootBehaviour__GenerateIDForAllKnotBehaviours
                (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
                ulong param_5,long param_6,undefined8 *param_7,long *param_8,undefined8 param_9,
                ulong *param_10)

{
  char cVar1;
  float fVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *extraout_x1;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  char *pcVar13;
  long *plVar14;
  long lVar15;
  ulong *puVar16;
  bool bVar17;
  uint uVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  uint uVar24;
  float fVar25;
  undefined4 extraout_s0;
  undefined4 uVar26;
  ulong extraout_d0;
  uint uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined8 uVar30;
  float fVar31;
  undefined1 auVar32 [16];
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined4 auStack_314 [3];
  float fStack_308;
  undefined4 uStack_304;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  undefined8 uStack_2e8;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  
  uVar27 = 0x3eb4000;
  puVar8 = param_7;
  if ((bRam0000000003eb4bc0 & 1) == 0) {
    func_0x00f78a20(0x3d3aeb8);
    func_0x00f78a20(0x3d3b0e0);
    func_0x00f78a20(0x3d3aec0);
    param_5 = func_0x00f78a20(0x3d3b0e8);
    bRam0000000003eb4bc0 = 1;
  }
  if ((param_6 != 0) && (lVar19 = *(long *)(param_6 + 0x78), lVar19 != 0)) {
    uVar27 = 0;
    do {
      if ((int)*(uint *)(lVar19 + 0x18) <= (int)uVar27) goto LAB_014db9b4;
      if (*(uint *)(lVar19 + 0x18) <= uVar27) {
        param_5 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar19 = *(long *)(*(long *)(lVar19 + 0x10) + (long)(int)uVar27 * 8 + 0x20);
      if (lVar19 == 0) break;
      *(uint *)(lVar19 + 0x38) = uVar27;
      uVar27 = uVar27 + 1;
      lVar19 = *(long *)(param_6 + 0x78);
    } while (lVar19 != 0);
  }
LAB_014db9b0:
  do {
    do {
      param_5 = func_0x00f78af4();
LAB_014db9b4:
    } while (param_7 == (undefined8 *)0x0);
    uVar24 = *(uint *)(param_7 + 3);
    if ((int)uVar24 < 1) {
      return param_5;
    }
    uVar18 = 0;
    while( true ) {
      if (uVar24 <= uVar18) {
        uVar5 = func_0x00f78b24();
        lVar19 = func_0x00f78ac0(uVar5,0);
        if ((bRam0000000003eb4bbf & 1) == 0) {
          func_0x00f78a20(&/*Atlas.Gameplay.RaceSplineProbability[]_TypeInfo*/ uRam0000000003d1f2d8);
          bRam0000000003eb4bbf = 1;
        }
        if (((*(long *)(lVar19 + 0x50) == 0) ||
            (lVar22 = func_0x00f78a34(/*Atlas.Gameplay.RaceSplineProbability[]_TypeInfo*/ uRam0000000003d1f2d8,
                                      *(int *)(*(long *)(lVar19 + 0x50) + 0x18) + 1), lVar22 == 0))
           || (*(long *)(lVar19 + 0x48) == 0)) goto code_r0x014dbbb0;
        uVar6 = /*UnityEngine.Object$$get_name*/ func_0x03244608(*(long *)(lVar19 + 0x48),0);
        iVar4 = (int)*(ulong *)(lVar22 + 0x18);
        if (iVar4 == 0) goto code_r0x014dbba4;
        *(ulong *)(lVar22 + 0x20) = uVar6;
        if (1 < iVar4) {
          uVar20 = 0;
          puVar16 = (ulong *)(lVar22 + 0x30);
          goto code_r0x014dbaf0;
        }
        uVar12 = *(ulong *)(lVar22 + 0x18) & 0xffffffff;
        goto code_r0x014dbb44;
      }
      lVar19 = param_7[(long)(int)uVar18 + 4];
      if ((lVar19 == 0) || (lVar22 = *(long *)(lVar19 + 0x40), lVar22 == 0)) break;
      uVar21 = 0;
      while( true ) {
        if ((int)*(uint *)(lVar22 + 0x18) <= (int)uVar21) break;
        if (*(uint *)(lVar22 + 0x18) <= uVar21) {
          param_5 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar22 = *(long *)(*(long *)(lVar22 + 0x10) + (long)(int)uVar21 * 8 + 0x20);
        if (lVar22 == 0) goto LAB_014db9b0;
        *(uint *)(lVar22 + 0x38) = uVar27 + uVar21;
        uVar21 = uVar21 + 1;
        lVar22 = *(long *)(lVar19 + 0x40);
        if (lVar22 == 0) goto LAB_014db9b0;
      }
      uVar18 = uVar18 + 1;
      uVar24 = *(uint *)(param_7 + 3);
      uVar27 = uVar27 + uVar21;
      if ((int)uVar24 <= (int)uVar18) {
        return param_5;
      }
    }
  } while( true );
  while( true ) {
    if (*(uint *)(lVar11 + 0x18) <= uVar20) goto code_r0x014dbba4;
    lVar11 = *(long *)(lVar11 + uVar20 * 8 + 0x20);
    if (lVar11 == 0) goto code_r0x014dbbb0;
    uVar6 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar11,0);
    uVar27 = *(uint *)(lVar22 + 0x18);
    uVar12 = (ulong)uVar27;
    if (uVar12 <= uVar20 + 1) goto code_r0x014dbba4;
    *puVar16 = uVar6;
    lVar11 = uVar20 + 2;
    uVar20 = uVar20 + 1;
    puVar16 = puVar16 + 2;
    if ((int)uVar27 <= lVar11) break;
code_r0x014dbaf0:
    lVar11 = *(long *)(lVar19 + 0x50);
    if (lVar11 == 0) goto code_r0x014dbbb0;
  }
code_r0x014dbb44:
  if ((*(long *)(lVar19 + 0x30) == 0) || ((int)uVar12 < 1)) {
    *(long *)(lVar19 + 0x30) = lVar22;
    return uVar6;
  }
  if (uVar12 == 0) {
code_r0x014dbba4:
    uVar5 = func_0x00f78b24();
    func_0x00f78ac0(uVar5,0);
code_r0x014dbbb0:
    auVar32 = func_0x00f78af4();
  }
  else {
    auVar32._8_8_ = *(undefined8 *)(lVar22 + 0x20);
    auVar32._0_8_ = lVar19;
  }
  lVar19 = *(long *)(auVar32._0_8_ + 0x30);
  if ((lVar19 != 0) && (0 < (int)*(ulong *)(lVar19 + 0x18))) {
    uVar6 = 0;
    uVar12 = *(ulong *)(lVar19 + 0x18) & 0xffffffff;
    puVar16 = (ulong *)(lVar19 + 0x28);
    do {
      uVar26 = (undefined4)param_2;
      uVar28 = (undefined4)param_3;
      uVar29 = (undefined4)param_4;
      if (uVar12 <= uVar6) {
        uVar5 = func_0x00f78b24();
        lVar19 = func_0x00f78ac0(uVar5,0);
        lStack_158 = *(long *)PTR_03a5d648;
        puVar9 = puVar8;
        plVar10 = param_8;
        uVar5 = param_9;
        if ((bRam0000000003eb4bc1 & 1) == 0) {
          func_0x00f78a20(&uRam0000000003d57fb8);
          bRam0000000003eb4bc1 = 1;
        }
        *(undefined4 *)(lVar19 + 0x198) = extraout_s0;
        *(undefined4 *)(lVar19 + 0x19c) = uVar26;
        *(undefined4 *)(lVar19 + 0x1a0) = uVar28;
        *(undefined4 *)(lVar19 + 0x1a4) = 0x3f800000;
        *(undefined4 *)(lVar19 + 0x1bc) = uVar29;
        lVar11 = param_8[1];
        lVar22 = *param_8;
        *(int *)(lVar19 + 0x1b8) = (int)param_8[2];
        *(long *)(lVar19 + 0x1b0) = lVar11;
        *(long *)(lVar19 + 0x1a8) = lVar22;
        *(int *)(lVar19 + 0x1c0) = (int)param_9;
        uStack_188 = *(undefined8 *)(lVar19 + 0x1a8);
        uStack_190 = *(undefined8 *)(lVar19 + 0x1a0);
        uStack_178 = *(undefined8 *)(lVar19 + 0x1b8);
        uStack_180 = *(undefined8 *)(lVar19 + 0x1b0);
        uStack_168 = *(undefined8 *)(lVar19 + 0x1c8);
        uStack_170 = *(undefined8 *)(lVar19 + 0x1c0);
        uStack_160 = *(undefined8 *)(lVar19 + 0x1d0);
        uStack_1c8 = *(undefined8 *)(lVar19 + 0x168);
        uStack_1d0 = *(undefined8 *)(lVar19 + 0x160);
        uStack_1b8 = *(undefined8 *)(lVar19 + 0x178);
        uStack_1c0 = *(undefined8 *)(lVar19 + 0x170);
        uStack_1a8 = *(undefined8 *)(lVar19 + 0x188);
        uStack_1b0 = *(undefined8 *)(lVar19 + 0x180);
        uStack_198 = *(undefined8 *)(lVar19 + 0x198);
        uStack_1a0 = *(undefined8 *)(lVar19 + 400);
        uStack_208 = *(undefined8 *)(lVar19 + 0x128);
        uStack_210 = *(undefined8 *)(lVar19 + 0x120);
        uStack_1f8 = *(undefined8 *)(lVar19 + 0x138);
        uStack_200 = *(undefined8 *)(lVar19 + 0x130);
        uStack_1e8 = *(undefined8 *)(lVar19 + 0x148);
        uStack_1f0 = *(undefined8 *)(lVar19 + 0x140);
        uStack_1d8 = *(undefined8 *)(lVar19 + 0x158);
        uStack_1e0 = *(undefined8 *)(lVar19 + 0x150);
        uStack_228 = *(undefined8 *)(lVar19 + 0x108);
        uStack_230 = *(undefined8 *)(lVar19 + 0x100);
        uStack_218 = *(undefined8 *)(lVar19 + 0x118);
        uStack_220 = *(undefined8 *)(lVar19 + 0x110);
        /*Unity.Jobs.IJobExtensions$$Run<RaceSplineCoordsAndPointOnTrackJob>*/ func_0x0185e800(&uStack_230,uRam0000000003d57fb8);
        pcVar13 = *(char **)(lVar19 + 0x1c8);
        cVar1 = *pcVar13;
        uVar26 = *(undefined4 *)(pcVar13 + 0xc);
        uVar27 = *(uint *)(pcVar13 + 0x24);
        uVar6 = (ulong)uVar27;
        uStack_220 = *(undefined8 *)(pcVar13 + 0x38);
        uStack_228 = *(undefined8 *)(pcVar13 + 0x30);
        uStack_230 = *(undefined8 *)(pcVar13 + 0x28);
        uVar30 = *(undefined8 *)(pcVar13 + 0x14);
        uStack_248 = (undefined4)uStack_228;
        uStack_244 = (undefined4)((ulong)uStack_228 >> 0x20);
        uStack_24c = (undefined4)((ulong)uStack_230 >> 0x20);
        uStack_240 = (undefined4)uStack_220;
        uStack_23c = (undefined4)((ulong)uStack_220 >> 0x20);
        uVar12 = *(ulong *)(pcVar13 + 0x1c);
        *puVar8 = *(undefined8 *)(pcVar13 + 4);
        *(undefined4 *)(puVar8 + 1) = uVar26;
        *extraout_x1 = uVar30;
        param_8[1] = CONCAT44(uStack_240,uStack_244);
        *param_8 = CONCAT44(uStack_248,uStack_24c);
        *(undefined4 *)(param_8 + 2) = uStack_23c;
        *param_10 = uVar12;
        *(uint *)(param_10 + 1) = uVar27;
        if (*(long *)PTR_03a5d648 == lStack_158) {
          return (ulong)(cVar1 != '\0');
        }
        lVar19 = ___stack_chk_fail((ulong)(cVar1 != '\0'));
        uStack_2e8 = uVar5;
        if ((bRam0000000003eb4bc2 & 1) == 0) {
          func_0x00f78a20(0x3d3ba08);
          func_0x00f78a20(&/*Unity.Mathematics.float3_TypeInfo*/ lRam0000000003d265d8);
          bRam0000000003eb4bc2 = 1;
        }
        lStack_2f8 = 0;
        lStack_2f0 = 0;
        lStack_300 = 0;
        fStack_308 = 0.0;
        auStack_314[0] = 0;
        uVar26 = *(undefined4 *)(*(undefined8 **)(/*Unity.Mathematics.float3_TypeInfo*/ lRam0000000003d265d8 + 0xb8) + 1);
        *puVar9 = **(undefined8 **)(/*Unity.Mathematics.float3_TypeInfo*/ lRam0000000003d265d8 + 0xb8);
        *(undefined4 *)(puVar9 + 1) = uVar26;
        plVar14 = &lStack_2f0;
        if ((bRam0000000003eb4bc4 & 1) == 0) {
          func_0x00f78a20(0x3d3ba08);
          func_0x00f78a20(&/*Atlas.Gameplay.RaceSplineRootBehaviour_TypeInfo*/ lRam0000000003d240a0);
          func_0x00f78a20(&/*Unity.Mathematics.float2_TypeInfo*/ uRam0000000003d265d0);
          bRam0000000003eb4bc4 = 1;
        }
        uStack_3d8 = 0;
        uStack_3d0 = 0;
        uStack_3e8 = 0;
        uStack_3e0 = 0;
        uStack_3f8 = 0;
        uStack_3f0 = 0;
        if (((*(ushort *)(/*Atlas.Gameplay.RaceSplineRootBehaviour_TypeInfo*/ lRam0000000003d240a0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Gameplay.RaceSplineRootBehaviour_TypeInfo*/ lRam0000000003d240a0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar5 = **(undefined8 **)(/*Atlas.Gameplay.RaceSplineRootBehaviour_TypeInfo*/ lRam0000000003d240a0 + 0xb8);
        /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar5,0);
        lVar22 = plVar10[2];
        if (lVar22 == 0) {
          lVar22 = /*Atlas.Gameplay.RaceSplineRootBehaviour$$FindClosestKnot*/ func_0x014dce18(extraout_d0 & 0xffffffff,uVar6 & 0xffffffff,uVar12 & 0xffffffff,
                                   lVar19);
        }
        uStack_3d0._4_4_ = 3.4028235e+38;
        lStack_300 = *plVar10;
        lStack_2f0 = 0;
        lStack_2f8 = 0;
        auStack_314[0] = 0xffffffff;
        uStack_304 = 0xffffffff;
        fStack_308 = 0.0;
        if (*plVar10 != 0) {
          lStack_2f8 = plVar10[2];
          lStack_2f0 = plVar10[1];
          if (*plVar10 == 0) {
            func_0x00f78af4();
          }
          else {
            /*RacePolyLine$$TryGetClosestPoint*/ func_0x014d836c(extraout_d0 & 0xffffffff,uVar6 & 0xffffffff,uVar12 & 0xffffffff,*plVar10
                            ,&uStack_3d8,(long)&uStack_3d0 + 4,&fStack_308,auStack_314,&uStack_304);
            if ((fStack_308 < 20.0) || (lStack_300 != 0)) goto code_r0x014dc718;
            func_0x00f78af4();
          }
          goto code_r0x014dc8b0;
        }
        if (lVar22 == 0) goto code_r0x014dc718;
        lVar11 = *(long *)(lVar22 + 0x40);
        if (lVar11 == 0) {
          func_0x00f78af4();
          goto code_r0x014dc8b0;
        }
        fVar25 = 3.4028235e+38;
        uVar27 = *(uint *)(lVar11 + 0x18);
        fVar31 = uStack_3d0._4_4_;
        if (0 < (int)uVar27) {
          uVar24 = 0;
          uVar18 = 0;
          goto code_r0x014dc2c0;
        }
        uVar24 = 0;
        goto code_r0x014dc3c8;
      }
      uVar12 = *puVar16;
      puVar8 = (undefined8 *)0x0;
      iVar4 = /*System.String$$op_Equality*/ func_0x029bdf2c(auVar32._8_8_,puVar16[-1]);
      if (iVar4 != 0) {
        return uVar12;
      }
      uVar6 = uVar6 + 1;
      uVar12 = (ulong)*(uint *)(lVar19 + 0x18);
      puVar16 = puVar16 + 2;
    } while ((long)uVar6 < (long)(int)*(uint *)(lVar19 + 0x18));
  }
  return 0;
  while( true ) {
    uVar20 = /*RacePolyLine$$TryGetClosestPoint*/ func_0x014d836c(extraout_d0 & 0xffffffff,uVar6 & 0xffffffff,uVar12 & 0xffffffff,lVar15,
                             &uStack_3d8,&uStack_3e0,(long)&uStack_3e0 + 4,(long)&uStack_3e8 + 4,
                             &uStack_3e8);
    if (((uVar20 & 1) != 0) && (ABS((float)uStack_3e0) < ABS(fVar25))) {
      auStack_314[0] = uStack_3e8._4_4_;
      uStack_304 = (undefined4)uStack_3e8;
      fStack_308 = uStack_3e0._4_4_;
      fVar31 = (float)uStack_3e0;
      uVar24 = uVar18;
      fVar25 = (float)uStack_3e0;
      lStack_300 = lVar15;
    }
    uVar18 = uVar18 + 1;
    uVar27 = *(uint *)(lVar11 + 0x18);
    if ((int)uVar27 <= (int)uVar18) break;
code_r0x014dc2c0:
    if (uVar27 <= uVar18) {
      uStack_3d0._4_4_ = fVar31;
      uVar5 = func_0x00f78b24();
      func_0x00f78ac0(uVar5,0);
      goto code_r0x014dc8b0;
    }
    lVar15 = *(long *)(lVar11 + (long)(int)uVar18 * 8 + 0x20);
    if (lVar15 == 0) {
      uStack_3d0._4_4_ = fVar31;
      func_0x00f78af4();
      goto code_r0x014dc8b0;
    }
  }
code_r0x014dc3c8:
  lVar11 = *(long *)(lVar22 + 0x30);
  uStack_3d0._4_4_ = fVar31;
  if (lVar11 == 0) {
    func_0x00f78af4();
    goto code_r0x014dc8b0;
  }
  uVar27 = *(uint *)(lVar11 + 0x18);
  if ((int)uVar27 < 1) {
    bVar17 = false;
    uVar18 = 0xffffffff;
  }
  else {
    uVar21 = 0;
    bVar17 = false;
    uVar18 = 0xffffffff;
    do {
      if (uVar27 <= uVar21) {
        uStack_3d0._4_4_ = fVar31;
        uVar5 = func_0x00f78b24();
        func_0x00f78ac0(uVar5,0);
        goto code_r0x014dc8b0;
      }
      lVar15 = *(long *)(lVar19 + 0x40);
      if (lVar15 == 0) {
code_r0x014dc758:
        uStack_3d0._4_4_ = fVar31;
        func_0x00f78af4();
        goto code_r0x014dc8b0;
      }
      uVar20 = 0;
      uVar27 = *(uint *)(lVar11 + (long)(int)uVar21 * 4 + 0x20);
      lVar23 = (long)(int)uVar27;
      while( true ) {
        if (*(uint *)(lVar15 + 0x18) <= uVar27) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar15 = *(long *)(*(long *)(lVar15 + 0x10) + lVar23 * 8 + 0x20);
        if (lVar15 == 0) {
          uStack_3d0._4_4_ = fVar31;
          func_0x00f78af4();
          goto code_r0x014dc8b0;
        }
        lVar15 = *(long *)(lVar15 + 0x28);
        if (lVar15 == 0) {
          uStack_3d0._4_4_ = fVar31;
          func_0x00f78af4();
          goto code_r0x014dc8b0;
        }
        if ((long)*(int *)(lVar15 + 0x18) <= (long)uVar20) break;
        lVar15 = *(long *)(lVar19 + 0x40);
        if (lVar15 == 0) {
          uStack_3d0._4_4_ = fVar31;
          func_0x00f78af4();
          goto code_r0x014dc8b0;
        }
        if (*(uint *)(lVar15 + 0x18) <= uVar27) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar15 = *(long *)(*(long *)(lVar15 + 0x10) + lVar23 * 8 + 0x20);
        if (lVar15 == 0) {
          uStack_3d0._4_4_ = fVar31;
          func_0x00f78af4();
          goto code_r0x014dc8b0;
        }
        lVar15 = *(long *)(lVar15 + 0x28);
        if (lVar15 == 0) {
          uStack_3d0._4_4_ = fVar31;
          func_0x00f78af4();
          goto code_r0x014dc8b0;
        }
        if (*(uint *)(lVar15 + 0x18) <= uVar20) {
          uStack_3d0._4_4_ = fVar31;
          uVar5 = func_0x00f78b24();
          func_0x00f78ac0(uVar5,0);
          goto code_r0x014dc8b0;
        }
        if (*(int *)(lVar15 + uVar20 * 4 + 0x20) == *(int *)(lVar22 + 0x10)) {
          lVar15 = *(long *)(lVar19 + 0x40);
          if (lVar15 == 0) {
            uStack_3d0._4_4_ = fVar31;
            func_0x00f78af4();
            goto code_r0x014dc8b0;
          }
          if (*(uint *)(lVar15 + 0x18) <= uVar27) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar15 = *(long *)(*(long *)(lVar15 + 0x10) + lVar23 * 8 + 0x20);
          if (lVar15 == 0) {
            uStack_3d0._4_4_ = fVar31;
            func_0x00f78af4();
            goto code_r0x014dc8b0;
          }
          lVar15 = *(long *)(lVar15 + 0x40);
          if (lVar15 == 0) {
            uStack_3d0._4_4_ = fVar31;
            func_0x00f78af4();
            goto code_r0x014dc8b0;
          }
          if (*(uint *)(lVar15 + 0x18) <= uVar20) {
            uStack_3d0._4_4_ = fVar31;
            uVar5 = func_0x00f78b24();
            func_0x00f78ac0(uVar5,0);
            goto code_r0x014dc8b0;
          }
          lVar15 = *(long *)(lVar15 + uVar20 * 8 + 0x20);
          if (lVar15 == 0) {
            uStack_3d0._4_4_ = fVar31;
            func_0x00f78af4();
            goto code_r0x014dc8b0;
          }
          uVar7 = /*RacePolyLine$$TryGetClosestPoint*/ func_0x014d836c(extraout_d0 & 0xffffffff,uVar6 & 0xffffffff,uVar12 & 0xffffffff,
                                  lVar15,&uStack_3d8,&uStack_3f0,(long)&uStack_3f0 + 4,
                                  (long)&uStack_3f8 + 4,&uStack_3f8);
          if (((uVar7 & 1) != 0) &&
             (fVar2 = (float)uStack_3f0, ABS((float)uStack_3f0) < ABS(fVar25))) {
            lVar15 = *(long *)(lVar19 + 0x40);
            if (lVar15 == 0) {
              uStack_3d0._4_4_ = (float)uStack_3f0;
              func_0x00f78af4();
              goto code_r0x014dc8b0;
            }
            if (*(uint *)(lVar15 + 0x18) <= uVar27) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar15 = *(long *)(*(long *)(lVar15 + 0x10) + lVar23 * 8 + 0x20);
            if (lVar15 == 0) {
              uStack_3d0._4_4_ = fVar2;
              func_0x00f78af4();
              goto code_r0x014dc8b0;
            }
            lVar15 = *(long *)(lVar15 + 0x40);
            if (lVar15 == 0) {
              uStack_3d0._4_4_ = fVar2;
              func_0x00f78af4();
              goto code_r0x014dc8b0;
            }
            if (*(uint *)(lVar15 + 0x18) <= uVar20) {
              uStack_3d0._4_4_ = fVar2;
              uVar5 = func_0x00f78b24();
              func_0x00f78ac0(uVar5,0);
              goto code_r0x014dc8b0;
            }
            lStack_300 = *(long *)(lVar15 + uVar20 * 8 + 0x20);
            auStack_314[0] = uStack_3f8._4_4_;
            uStack_304 = (undefined4)uStack_3f8;
            fStack_308 = uStack_3f0._4_4_;
            bVar17 = true;
            fVar31 = fVar2;
            fVar25 = fVar2;
            uVar18 = uVar27;
          }
        }
        uVar20 = uVar20 + 1;
        lVar15 = *(long *)(lVar19 + 0x40);
        if (lVar15 == 0) goto code_r0x014dc758;
      }
      uVar21 = uVar21 + 1;
      uVar27 = *(uint *)(lVar11 + 0x18);
    } while ((int)uVar21 < (int)uVar27);
  }
  uStack_3d0._4_4_ = fVar31;
  if (bVar17) {
    lVar19 = *(long *)(lVar19 + 0x40);
    lStack_2f8 = lVar22;
    if (lVar19 == 0) {
      func_0x00f78af4();
      goto code_r0x014dc8b0;
    }
    if (*(uint *)(lVar19 + 0x18) <= uVar18) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
  }
  else {
    lVar11 = *(long *)(lVar22 + 0x28);
    lStack_2f0 = lVar22;
    if (lVar11 == 0) {
      func_0x00f78af4();
      goto code_r0x014dc8b0;
    }
    if (*(uint *)(lVar11 + 0x18) <= uVar24) {
      uVar5 = func_0x00f78b24();
      func_0x00f78ac0(uVar5,0);
      goto code_r0x014dc8b0;
    }
    lVar19 = *(long *)(lVar19 + 0x40);
    if (lVar19 == 0) {
      func_0x00f78af4();
      goto code_r0x014dc8b0;
    }
    uVar18 = *(uint *)(lVar11 + (long)(int)uVar24 * 4 + 0x20);
    plVar14 = &lStack_2f8;
    if (*(uint *)(lVar19 + 0x18) <= uVar18) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
  }
  *plVar14 = *(long *)(*(long *)(lVar19 + 0x10) + (long)(int)uVar18 * 8 + 0x20);
  if ((fStack_308 < 20.0) || (lStack_300 != 0)) {
code_r0x014dc718:
    uVar6 = /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$EndSample*/ func_0x03250f64(uVar5,0);
    return uVar6;
  }
  func_0x00f78af4();
code_r0x014dc8b0:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x14dc8b4);
  (*pcVar3)();
}



// ============================================================
// RVA: 0x14dba64 | Atlas.Gameplay.RaceSplineRootBehaviour.GenerateBranchingProbabilityWeightTable
// ============================================================

/* WARNING: Possible PIC construction at 0x014dbb6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014dbed4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014dbb70) */
/* WARNING: Removing unreachable block (ram,0x014dbb7c) */
/* WARNING: Removing unreachable block (ram,0x014dbed8) */
/* WARNING: Removing unreachable block (ram,0x014dbff8) */
/* WARNING: Removing unreachable block (ram,0x014dbee4) */
/* WARNING: Removing unreachable block (ram,0x014dbf00) */
/* WARNING: Removing unreachable block (ram,0x014dbf04) */
/* WARNING: Removing unreachable block (ram,0x014dbf34) */
/* WARNING: Removing unreachable block (ram,0x014dbf38) */
/* WARNING: Removing unreachable block (ram,0x014dbf44) */
/* WARNING: Removing unreachable block (ram,0x014dbf48) */
/* WARNING: Removing unreachable block (ram,0x014dbf78) */
/* WARNING: Removing unreachable block (ram,0x014dbf7c) */
/* WARNING: Removing unreachable block (ram,0x014dc000) */
/* WARNING: Removing unreachable block (ram,0x014dbf80) */
/* WARNING: Removing unreachable block (ram,0x014dbf88) */
/* WARNING: Removing unreachable block (ram,0x014dbf90) */
/* WARNING: Removing unreachable block (ram,0x014dbf9c) */
/* WARNING: Removing unreachable block (ram,0x014dbfa0) */
/* WARNING: Removing unreachable block (ram,0x014dbfa8) */
/* WARNING: Removing unreachable block (ram,0x014dc00c) */
/* WARNING: Removing unreachable block (ram,0x014dc020) */
/* WARNING: Removing unreachable block (ram,0x014dc02c) */
/* WARNING: Removing unreachable block (ram,0x014dc034) */
/* WARNING: Removing unreachable block (ram,0x014dbfb8) */
/* WARNING: Removing unreachable block (ram,0x014dbfc4) */
/* WARNING: Removing unreachable block (ram,0x014dbfe0) */
/* WARNING: Removing unreachable block (ram,0x014dc0c0) */
/* WARNING: Removing unreachable block (ram,0x014dbfe8) */
/* WARNING: Removing unreachable block (ram,0x014dc0cc) */
/* WARNING: Removing unreachable block (ram,0x014dbff0) */
/* WARNING: Removing unreachable block (ram,0x014dc03c) */
/* WARNING: Removing unreachable block (ram,0x014dc04c) */
/* WARNING: Removing unreachable block (ram,0x014dc054) */
/* WARNING: Removing unreachable block (ram,0x014dc070) */
/* WARNING: Removing unreachable block (ram,0x014dc094) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong Atlas_Gameplay_RaceSplineRootBehaviour__GenerateBranchingProbabilityWeightTable
                (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
                long param_5,undefined8 param_6,undefined8 *param_7,long *param_8,undefined8 param_9
                ,ulong *param_10)

{
  char cVar1;
  float fVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *extraout_x1;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  char *pcVar13;
  long *plVar14;
  long lVar15;
  ulong *puVar16;
  long lVar17;
  bool bVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  long lVar22;
  uint uVar23;
  float fVar24;
  undefined4 extraout_s0;
  undefined4 uVar25;
  ulong extraout_d0;
  uint uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined8 uVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined4 auStack_2c4 [3];
  float fStack_2b8;
  undefined4 uStack_2b4;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  undefined8 uStack_298;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  
  if ((bRam0000000003eb4bbf & 1) == 0) {
    func_0x00f78a20(&/*Atlas.Gameplay.RaceSplineProbability[]_TypeInfo*/ uRam0000000003d1f2d8);
    bRam0000000003eb4bbf = 1;
  }
  if (((*(long *)(param_5 + 0x50) != 0) &&
      (lVar5 = func_0x00f78a34(/*Atlas.Gameplay.RaceSplineProbability[]_TypeInfo*/ uRam0000000003d1f2d8,*(int *)(*(long *)(param_5 + 0x50) + 0x18) + 1),
      lVar5 != 0)) && (*(long *)(param_5 + 0x48) != 0)) {
    uVar6 = /*UnityEngine.Object$$get_name*/ func_0x03244608(*(long *)(param_5 + 0x48),0);
    iVar4 = (int)*(ulong *)(lVar5 + 0x18);
    if (iVar4 != 0) {
      *(ulong *)(lVar5 + 0x20) = uVar6;
      if (iVar4 < 2) {
        uVar12 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
      }
      else {
        uVar20 = 0;
        puVar16 = (ulong *)(lVar5 + 0x30);
        do {
          lVar11 = *(long *)(param_5 + 0x50);
          if (lVar11 == 0) goto LAB_014dbbb0;
          if (*(uint *)(lVar11 + 0x18) <= uVar20) goto LAB_014dbba4;
          lVar11 = *(long *)(lVar11 + uVar20 * 8 + 0x20);
          if (lVar11 == 0) goto LAB_014dbbb0;
          uVar6 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar11,0);
          uVar26 = *(uint *)(lVar5 + 0x18);
          uVar12 = (ulong)uVar26;
          if (uVar12 <= uVar20 + 1) goto LAB_014dbba4;
          *puVar16 = uVar6;
          lVar11 = uVar20 + 2;
          uVar20 = uVar20 + 1;
          puVar16 = puVar16 + 2;
        } while (lVar11 < (int)uVar26);
      }
      if ((*(long *)(param_5 + 0x30) == 0) || ((int)uVar12 < 1)) {
        *(long *)(param_5 + 0x30) = lVar5;
        return uVar6;
      }
      if (uVar12 != 0) {
        uVar8 = *(undefined8 *)(lVar5 + 0x20);
        goto code_r0x014dbbb4;
      }
    }
LAB_014dbba4:
    uVar8 = func_0x00f78b24();
    func_0x00f78ac0(uVar8,0);
  }
LAB_014dbbb0:
  auVar31 = func_0x00f78af4();
  uVar8 = auVar31._8_8_;
  param_5 = auVar31._0_8_;
code_r0x014dbbb4:
  lVar5 = *(long *)(param_5 + 0x30);
  if ((lVar5 != 0) && (0 < (int)*(ulong *)(lVar5 + 0x18))) {
    uVar6 = 0;
    uVar12 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
    puVar16 = (ulong *)(lVar5 + 0x28);
    do {
      uVar25 = (undefined4)param_2;
      uVar27 = (undefined4)param_3;
      uVar28 = (undefined4)param_4;
      if (uVar12 <= uVar6) {
        uVar8 = func_0x00f78b24();
        lVar5 = func_0x00f78ac0(uVar8,0);
        lStack_108 = *(long *)PTR_03a5d648;
        puVar9 = param_7;
        plVar10 = param_8;
        uVar8 = param_9;
        if ((bRam0000000003eb4bc1 & 1) == 0) {
          func_0x00f78a20(&uRam0000000003d57fb8);
          bRam0000000003eb4bc1 = 1;
        }
        *(undefined4 *)(lVar5 + 0x198) = extraout_s0;
        *(undefined4 *)(lVar5 + 0x19c) = uVar25;
        *(undefined4 *)(lVar5 + 0x1a0) = uVar27;
        *(undefined4 *)(lVar5 + 0x1a4) = 0x3f800000;
        *(undefined4 *)(lVar5 + 0x1bc) = uVar28;
        lVar17 = param_8[1];
        lVar11 = *param_8;
        *(int *)(lVar5 + 0x1b8) = (int)param_8[2];
        *(long *)(lVar5 + 0x1b0) = lVar17;
        *(long *)(lVar5 + 0x1a8) = lVar11;
        *(int *)(lVar5 + 0x1c0) = (int)param_9;
        uStack_138 = *(undefined8 *)(lVar5 + 0x1a8);
        uStack_140 = *(undefined8 *)(lVar5 + 0x1a0);
        uStack_128 = *(undefined8 *)(lVar5 + 0x1b8);
        uStack_130 = *(undefined8 *)(lVar5 + 0x1b0);
        uStack_118 = *(undefined8 *)(lVar5 + 0x1c8);
        uStack_120 = *(undefined8 *)(lVar5 + 0x1c0);
        uStack_110 = *(undefined8 *)(lVar5 + 0x1d0);
        uStack_178 = *(undefined8 *)(lVar5 + 0x168);
        uStack_180 = *(undefined8 *)(lVar5 + 0x160);
        uStack_168 = *(undefined8 *)(lVar5 + 0x178);
        uStack_170 = *(undefined8 *)(lVar5 + 0x170);
        uStack_158 = *(undefined8 *)(lVar5 + 0x188);
        uStack_160 = *(undefined8 *)(lVar5 + 0x180);
        uStack_148 = *(undefined8 *)(lVar5 + 0x198);
        uStack_150 = *(undefined8 *)(lVar5 + 400);
        uStack_1b8 = *(undefined8 *)(lVar5 + 0x128);
        uStack_1c0 = *(undefined8 *)(lVar5 + 0x120);
        uStack_1a8 = *(undefined8 *)(lVar5 + 0x138);
        uStack_1b0 = *(undefined8 *)(lVar5 + 0x130);
        uStack_198 = *(undefined8 *)(lVar5 + 0x148);
        uStack_1a0 = *(undefined8 *)(lVar5 + 0x140);
        uStack_188 = *(undefined8 *)(lVar5 + 0x158);
        uStack_190 = *(undefined8 *)(lVar5 + 0x150);
        uStack_1d8 = *(undefined8 *)(lVar5 + 0x108);
        uStack_1e0 = *(undefined8 *)(lVar5 + 0x100);
        uStack_1c8 = *(undefined8 *)(lVar5 + 0x118);
        uStack_1d0 = *(undefined8 *)(lVar5 + 0x110);
        /*Unity.Jobs.IJobExtensions$$Run<RaceSplineCoordsAndPointOnTrackJob>*/ func_0x0185e800(&uStack_1e0,uRam0000000003d57fb8);
        pcVar13 = *(char **)(lVar5 + 0x1c8);
        cVar1 = *pcVar13;
        uVar25 = *(undefined4 *)(pcVar13 + 0xc);
        uVar26 = *(uint *)(pcVar13 + 0x24);
        uVar6 = (ulong)uVar26;
        uStack_1d0 = *(undefined8 *)(pcVar13 + 0x38);
        uStack_1d8 = *(undefined8 *)(pcVar13 + 0x30);
        uStack_1e0 = *(undefined8 *)(pcVar13 + 0x28);
        uVar29 = *(undefined8 *)(pcVar13 + 0x14);
        uStack_1f8 = (undefined4)uStack_1d8;
        uStack_1f4 = (undefined4)((ulong)uStack_1d8 >> 0x20);
        uStack_1fc = (undefined4)((ulong)uStack_1e0 >> 0x20);
        uStack_1f0 = (undefined4)uStack_1d0;
        uStack_1ec = (undefined4)((ulong)uStack_1d0 >> 0x20);
        uVar12 = *(ulong *)(pcVar13 + 0x1c);
        *param_7 = *(undefined8 *)(pcVar13 + 4);
        *(undefined4 *)(param_7 + 1) = uVar25;
        *extraout_x1 = uVar29;
        param_8[1] = CONCAT44(uStack_1f0,uStack_1f4);
        *param_8 = CONCAT44(uStack_1f8,uStack_1fc);
        *(undefined4 *)(param_8 + 2) = uStack_1ec;
        *param_10 = uVar12;
        *(uint *)(param_10 + 1) = uVar26;
        if (*(long *)PTR_03a5d648 == lStack_108) {
          return (ulong)(cVar1 != '\0');
        }
        lVar5 = ___stack_chk_fail((ulong)(cVar1 != '\0'));
        uStack_298 = uVar8;
        if ((bRam0000000003eb4bc2 & 1) == 0) {
          func_0x00f78a20(0x3d3ba08);
          func_0x00f78a20(&/*Unity.Mathematics.float3_TypeInfo*/ lRam0000000003d265d8);
          bRam0000000003eb4bc2 = 1;
        }
        lStack_2a8 = 0;
        lStack_2a0 = 0;
        lStack_2b0 = 0;
        fStack_2b8 = 0.0;
        auStack_2c4[0] = 0;
        uVar25 = *(undefined4 *)(*(undefined8 **)(/*Unity.Mathematics.float3_TypeInfo*/ lRam0000000003d265d8 + 0xb8) + 1);
        *puVar9 = **(undefined8 **)(/*Unity.Mathematics.float3_TypeInfo*/ lRam0000000003d265d8 + 0xb8);
        *(undefined4 *)(puVar9 + 1) = uVar25;
        plVar14 = &lStack_2a0;
        if ((bRam0000000003eb4bc4 & 1) == 0) {
          func_0x00f78a20(0x3d3ba08);
          func_0x00f78a20(&/*Atlas.Gameplay.RaceSplineRootBehaviour_TypeInfo*/ lRam0000000003d240a0);
          func_0x00f78a20(&/*Unity.Mathematics.float2_TypeInfo*/ uRam0000000003d265d0);
          bRam0000000003eb4bc4 = 1;
        }
        uStack_388 = 0;
        uStack_380 = 0;
        uStack_398 = 0;
        uStack_390 = 0;
        uStack_3a8 = 0;
        uStack_3a0 = 0;
        if (((*(ushort *)(/*Atlas.Gameplay.RaceSplineRootBehaviour_TypeInfo*/ lRam0000000003d240a0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Gameplay.RaceSplineRootBehaviour_TypeInfo*/ lRam0000000003d240a0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar8 = **(undefined8 **)(/*Atlas.Gameplay.RaceSplineRootBehaviour_TypeInfo*/ lRam0000000003d240a0 + 0xb8);
        /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar8,0);
        lVar11 = plVar10[2];
        if (lVar11 == 0) {
          lVar11 = /*Atlas.Gameplay.RaceSplineRootBehaviour$$FindClosestKnot*/ func_0x014dce18(extraout_d0 & 0xffffffff,uVar6 & 0xffffffff,uVar12 & 0xffffffff,
                                   lVar5);
        }
        uStack_380._4_4_ = 3.4028235e+38;
        lStack_2b0 = *plVar10;
        lStack_2a0 = 0;
        lStack_2a8 = 0;
        auStack_2c4[0] = 0xffffffff;
        uStack_2b4 = 0xffffffff;
        fStack_2b8 = 0.0;
        if (*plVar10 != 0) {
          lStack_2a8 = plVar10[2];
          lStack_2a0 = plVar10[1];
          if (*plVar10 == 0) {
            func_0x00f78af4();
          }
          else {
            /*RacePolyLine$$TryGetClosestPoint*/ func_0x014d836c(extraout_d0 & 0xffffffff,uVar6 & 0xffffffff,uVar12 & 0xffffffff,*plVar10
                            ,&uStack_388,(long)&uStack_380 + 4,&fStack_2b8,auStack_2c4,&uStack_2b4);
            if ((fStack_2b8 < 20.0) || (lStack_2b0 != 0)) goto code_r0x014dc718;
            func_0x00f78af4();
          }
          goto code_r0x014dc8b0;
        }
        if (lVar11 == 0) goto code_r0x014dc718;
        lVar17 = *(long *)(lVar11 + 0x40);
        if (lVar17 == 0) {
          func_0x00f78af4();
          goto code_r0x014dc8b0;
        }
        fVar24 = 3.4028235e+38;
        uVar26 = *(uint *)(lVar17 + 0x18);
        fVar30 = uStack_380._4_4_;
        if (0 < (int)uVar26) {
          uVar23 = 0;
          uVar19 = 0;
          goto code_r0x014dc2c0;
        }
        uVar23 = 0;
        goto code_r0x014dc3c8;
      }
      uVar12 = *puVar16;
      param_7 = (undefined8 *)0x0;
      iVar4 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar8,puVar16[-1]);
      if (iVar4 != 0) {
        return uVar12;
      }
      uVar6 = uVar6 + 1;
      uVar12 = (ulong)*(uint *)(lVar5 + 0x18);
      puVar16 = puVar16 + 2;
    } while ((long)uVar6 < (long)(int)*(uint *)(lVar5 + 0x18));
  }
  return 0;
  while( true ) {
    uVar20 = /*RacePolyLine$$TryGetClosestPoint*/ func_0x014d836c(extraout_d0 & 0xffffffff,uVar6 & 0xffffffff,uVar12 & 0xffffffff,lVar15,
                             &uStack_388,&uStack_390,(long)&uStack_390 + 4,(long)&uStack_398 + 4,
                             &uStack_398);
    if (((uVar20 & 1) != 0) && (ABS((float)uStack_390) < ABS(fVar24))) {
      auStack_2c4[0] = uStack_398._4_4_;
      uStack_2b4 = (undefined4)uStack_398;
      fStack_2b8 = uStack_390._4_4_;
      fVar30 = (float)uStack_390;
      uVar23 = uVar19;
      fVar24 = (float)uStack_390;
      lStack_2b0 = lVar15;
    }
    uVar19 = uVar19 + 1;
    uVar26 = *(uint *)(lVar17 + 0x18);
    if ((int)uVar26 <= (int)uVar19) break;
code_r0x014dc2c0:
    if (uVar26 <= uVar19) {
      uStack_380._4_4_ = fVar30;
      uVar8 = func_0x00f78b24();
      func_0x00f78ac0(uVar8,0);
      goto code_r0x014dc8b0;
    }
    lVar15 = *(long *)(lVar17 + (long)(int)uVar19 * 8 + 0x20);
    if (lVar15 == 0) {
      uStack_380._4_4_ = fVar30;
      func_0x00f78af4();
      goto code_r0x014dc8b0;
    }
  }
code_r0x014dc3c8:
  lVar17 = *(long *)(lVar11 + 0x30);
  uStack_380._4_4_ = fVar30;
  if (lVar17 == 0) {
    func_0x00f78af4();
    goto code_r0x014dc8b0;
  }
  uVar26 = *(uint *)(lVar17 + 0x18);
  if ((int)uVar26 < 1) {
    bVar18 = false;
    uVar19 = 0xffffffff;
  }
  else {
    uVar21 = 0;
    bVar18 = false;
    uVar19 = 0xffffffff;
    do {
      if (uVar26 <= uVar21) {
        uStack_380._4_4_ = fVar30;
        uVar8 = func_0x00f78b24();
        func_0x00f78ac0(uVar8,0);
        goto code_r0x014dc8b0;
      }
      lVar15 = *(long *)(lVar5 + 0x40);
      if (lVar15 == 0) {
code_r0x014dc758:
        uStack_380._4_4_ = fVar30;
        func_0x00f78af4();
        goto code_r0x014dc8b0;
      }
      uVar20 = 0;
      uVar26 = *(uint *)(lVar17 + (long)(int)uVar21 * 4 + 0x20);
      lVar22 = (long)(int)uVar26;
      while( true ) {
        if (*(uint *)(lVar15 + 0x18) <= uVar26) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar15 = *(long *)(*(long *)(lVar15 + 0x10) + lVar22 * 8 + 0x20);
        if (lVar15 == 0) {
          uStack_380._4_4_ = fVar30;
          func_0x00f78af4();
          goto code_r0x014dc8b0;
        }
        lVar15 = *(long *)(lVar15 + 0x28);
        if (lVar15 == 0) {
          uStack_380._4_4_ = fVar30;
          func_0x00f78af4();
          goto code_r0x014dc8b0;
        }
        if ((long)*(int *)(lVar15 + 0x18) <= (long)uVar20) break;
        lVar15 = *(long *)(lVar5 + 0x40);
        if (lVar15 == 0) {
          uStack_380._4_4_ = fVar30;
          func_0x00f78af4();
          goto code_r0x014dc8b0;
        }
        if (*(uint *)(lVar15 + 0x18) <= uVar26) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar15 = *(long *)(*(long *)(lVar15 + 0x10) + lVar22 * 8 + 0x20);
        if (lVar15 == 0) {
          uStack_380._4_4_ = fVar30;
          func_0x00f78af4();
          goto code_r0x014dc8b0;
        }
        lVar15 = *(long *)(lVar15 + 0x28);
        if (lVar15 == 0) {
          uStack_380._4_4_ = fVar30;
          func_0x00f78af4();
          goto code_r0x014dc8b0;
        }
        if (*(uint *)(lVar15 + 0x18) <= uVar20) {
          uStack_380._4_4_ = fVar30;
          uVar8 = func_0x00f78b24();
          func_0x00f78ac0(uVar8,0);
          goto code_r0x014dc8b0;
        }
        if (*(int *)(lVar15 + uVar20 * 4 + 0x20) == *(int *)(lVar11 + 0x10)) {
          lVar15 = *(long *)(lVar5 + 0x40);
          if (lVar15 == 0) {
            uStack_380._4_4_ = fVar30;
            func_0x00f78af4();
            goto code_r0x014dc8b0;
          }
          if (*(uint *)(lVar15 + 0x18) <= uVar26) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar15 = *(long *)(*(long *)(lVar15 + 0x10) + lVar22 * 8 + 0x20);
          if (lVar15 == 0) {
            uStack_380._4_4_ = fVar30;
            func_0x00f78af4();
            goto code_r0x014dc8b0;
          }
          lVar15 = *(long *)(lVar15 + 0x40);
          if (lVar15 == 0) {
            uStack_380._4_4_ = fVar30;
            func_0x00f78af4();
            goto code_r0x014dc8b0;
          }
          if (*(uint *)(lVar15 + 0x18) <= uVar20) {
            uStack_380._4_4_ = fVar30;
            uVar8 = func_0x00f78b24();
            func_0x00f78ac0(uVar8,0);
            goto code_r0x014dc8b0;
          }
          lVar15 = *(long *)(lVar15 + uVar20 * 8 + 0x20);
          if (lVar15 == 0) {
            uStack_380._4_4_ = fVar30;
            func_0x00f78af4();
            goto code_r0x014dc8b0;
          }
          uVar7 = /*RacePolyLine$$TryGetClosestPoint*/ func_0x014d836c(extraout_d0 & 0xffffffff,uVar6 & 0xffffffff,uVar12 & 0xffffffff,
                                  lVar15,&uStack_388,&uStack_3a0,(long)&uStack_3a0 + 4,
                                  (long)&uStack_3a8 + 4,&uStack_3a8);
          if (((uVar7 & 1) != 0) &&
             (fVar2 = (float)uStack_3a0, ABS((float)uStack_3a0) < ABS(fVar24))) {
            lVar15 = *(long *)(lVar5 + 0x40);
            if (lVar15 == 0) {
              uStack_380._4_4_ = (float)uStack_3a0;
              func_0x00f78af4();
              goto code_r0x014dc8b0;
            }
            if (*(uint *)(lVar15 + 0x18) <= uVar26) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar15 = *(long *)(*(long *)(lVar15 + 0x10) + lVar22 * 8 + 0x20);
            if (lVar15 == 0) {
              uStack_380._4_4_ = fVar2;
              func_0x00f78af4();
              goto code_r0x014dc8b0;
            }
            lVar15 = *(long *)(lVar15 + 0x40);
            if (lVar15 == 0) {
              uStack_380._4_4_ = fVar2;
              func_0x00f78af4();
              goto code_r0x014dc8b0;
            }
            if (*(uint *)(lVar15 + 0x18) <= uVar20) {
              uStack_380._4_4_ = fVar2;
              uVar8 = func_0x00f78b24();
              func_0x00f78ac0(uVar8,0);
              goto code_r0x014dc8b0;
            }
            lStack_2b0 = *(long *)(lVar15 + uVar20 * 8 + 0x20);
            auStack_2c4[0] = uStack_3a8._4_4_;
            uStack_2b4 = (undefined4)uStack_3a8;
            fStack_2b8 = uStack_3a0._4_4_;
            bVar18 = true;
            fVar30 = fVar2;
            fVar24 = fVar2;
            uVar19 = uVar26;
          }
        }
        uVar20 = uVar20 + 1;
        lVar15 = *(long *)(lVar5 + 0x40);
        if (lVar15 == 0) goto code_r0x014dc758;
      }
      uVar21 = uVar21 + 1;
      uVar26 = *(uint *)(lVar17 + 0x18);
    } while ((int)uVar21 < (int)uVar26);
  }
  uStack_380._4_4_ = fVar30;
  if (bVar18) {
    lVar5 = *(long *)(lVar5 + 0x40);
    lStack_2a8 = lVar11;
    if (lVar5 == 0) {
      func_0x00f78af4();
      goto code_r0x014dc8b0;
    }
    if (*(uint *)(lVar5 + 0x18) <= uVar19) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
  }
  else {
    lVar17 = *(long *)(lVar11 + 0x28);
    lStack_2a0 = lVar11;
    if (lVar17 == 0) {
      func_0x00f78af4();
      goto code_r0x014dc8b0;
    }
    if (*(uint *)(lVar17 + 0x18) <= uVar23) {
      uVar8 = func_0x00f78b24();
      func_0x00f78ac0(uVar8,0);
      goto code_r0x014dc8b0;
    }
    lVar5 = *(long *)(lVar5 + 0x40);
    if (lVar5 == 0) {
      func_0x00f78af4();
      goto code_r0x014dc8b0;
    }
    uVar19 = *(uint *)(lVar17 + (long)(int)uVar23 * 4 + 0x20);
    plVar14 = &lStack_2a8;
    if (*(uint *)(lVar5 + 0x18) <= uVar19) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
  }
  *plVar14 = *(long *)(*(long *)(lVar5 + 0x10) + (long)(int)uVar19 * 8 + 0x20);
  if ((fStack_2b8 < 20.0) || (lStack_2b0 != 0)) {
code_r0x014dc718:
    uVar6 = /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$EndSample*/ func_0x03250f64(uVar8,0);
    return uVar6;
  }
  func_0x00f78af4();
code_r0x014dc8b0:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x14dc8b4);
  (*pcVar3)();
}



// ============================================================
// RVA: 0x14dbbb4 | Atlas.Gameplay.RaceSplineRootBehaviour.ProbabilityLookup
// ============================================================

/* WARNING: Possible PIC construction at 0x014dbed4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014dbed8) */
/* WARNING: Removing unreachable block (ram,0x014dbff8) */
/* WARNING: Removing unreachable block (ram,0x014dbee4) */
/* WARNING: Removing unreachable block (ram,0x014dbf00) */
/* WARNING: Removing unreachable block (ram,0x014dbf04) */
/* WARNING: Removing unreachable block (ram,0x014dbf34) */
/* WARNING: Removing unreachable block (ram,0x014dbf38) */
/* WARNING: Removing unreachable block (ram,0x014dbf44) */
/* WARNING: Removing unreachable block (ram,0x014dbf48) */
/* WARNING: Removing unreachable block (ram,0x014dbf78) */
/* WARNING: Removing unreachable block (ram,0x014dbf7c) */
/* WARNING: Removing unreachable block (ram,0x014dc000) */
/* WARNING: Removing unreachable block (ram,0x014dbf80) */
/* WARNING: Removing unreachable block (ram,0x014dbf88) */
/* WARNING: Removing unreachable block (ram,0x014dbf90) */
/* WARNING: Removing unreachable block (ram,0x014dbf9c) */
/* WARNING: Removing unreachable block (ram,0x014dbfa0) */
/* WARNING: Removing unreachable block (ram,0x014dbfa8) */
/* WARNING: Removing unreachable block (ram,0x014dc00c) */
/* WARNING: Removing unreachable block (ram,0x014dc020) */
/* WARNING: Removing unreachable block (ram,0x014dc02c) */
/* WARNING: Removing unreachable block (ram,0x014dc034) */
/* WARNING: Removing unreachable block (ram,0x014dbfb8) */
/* WARNING: Removing unreachable block (ram,0x014dbfc4) */
/* WARNING: Removing unreachable block (ram,0x014dbfe0) */
/* WARNING: Removing unreachable block (ram,0x014dc0c0) */
/* WARNING: Removing unreachable block (ram,0x014dbfe8) */
/* WARNING: Removing unreachable block (ram,0x014dc0cc) */
/* WARNING: Removing unreachable block (ram,0x014dbff0) */
/* WARNING: Removing unreachable block (ram,0x014dc03c) */
/* WARNING: Removing unreachable block (ram,0x014dc04c) */
/* WARNING: Removing unreachable block (ram,0x014dc054) */
/* WARNING: Removing unreachable block (ram,0x014dc070) */
/* WARNING: Removing unreachable block (ram,0x014dc094) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong Atlas_Gameplay_RaceSplineRootBehaviour__ProbabilityLookup
                (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
                long param_5,undefined8 param_6,undefined8 *param_7,long *param_8,undefined8 param_9
                ,ulong *param_10)

{
  char cVar1;
  float fVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *extraout_x1;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  char *pcVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  bool bVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  ulong *puVar20;
  long lVar21;
  long lVar22;
  uint uVar23;
  float fVar24;
  undefined4 extraout_s0;
  undefined4 uVar25;
  ulong extraout_d0;
  uint uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined8 uVar29;
  float fVar30;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined4 auStack_284 [3];
  float fStack_278;
  undefined4 uStack_274;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  undefined8 uStack_258;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  
  lVar14 = *(long *)(param_5 + 0x30);
  if ((lVar14 != 0) && (0 < (int)*(ulong *)(lVar14 + 0x18))) {
    uVar18 = 0;
    uVar10 = *(ulong *)(lVar14 + 0x18) & 0xffffffff;
    puVar20 = (ulong *)(lVar14 + 0x28);
    do {
      uVar25 = (undefined4)param_2;
      uVar27 = (undefined4)param_3;
      uVar28 = (undefined4)param_4;
      if (uVar10 <= uVar18) {
        uVar5 = func_0x00f78b24();
        lVar14 = func_0x00f78ac0(uVar5,0);
        lStack_c8 = *(long *)PTR_03a5d648;
        puVar8 = param_7;
        plVar9 = param_8;
        uVar5 = param_9;
        if ((bRam0000000003eb4bc1 & 1) == 0) {
          func_0x00f78a20(&uRam0000000003d57fb8);
          bRam0000000003eb4bc1 = 1;
        }
        *(undefined4 *)(lVar14 + 0x198) = extraout_s0;
        *(undefined4 *)(lVar14 + 0x19c) = uVar25;
        *(undefined4 *)(lVar14 + 0x1a0) = uVar27;
        *(undefined4 *)(lVar14 + 0x1a4) = 0x3f800000;
        *(undefined4 *)(lVar14 + 0x1bc) = uVar28;
        lVar15 = param_8[1];
        lVar22 = *param_8;
        *(int *)(lVar14 + 0x1b8) = (int)param_8[2];
        *(long *)(lVar14 + 0x1b0) = lVar15;
        *(long *)(lVar14 + 0x1a8) = lVar22;
        *(int *)(lVar14 + 0x1c0) = (int)param_9;
        uStack_f8 = *(undefined8 *)(lVar14 + 0x1a8);
        uStack_100 = *(undefined8 *)(lVar14 + 0x1a0);
        uStack_e8 = *(undefined8 *)(lVar14 + 0x1b8);
        uStack_f0 = *(undefined8 *)(lVar14 + 0x1b0);
        uStack_d8 = *(undefined8 *)(lVar14 + 0x1c8);
        uStack_e0 = *(undefined8 *)(lVar14 + 0x1c0);
        uStack_d0 = *(undefined8 *)(lVar14 + 0x1d0);
        uStack_138 = *(undefined8 *)(lVar14 + 0x168);
        uStack_140 = *(undefined8 *)(lVar14 + 0x160);
        uStack_128 = *(undefined8 *)(lVar14 + 0x178);
        uStack_130 = *(undefined8 *)(lVar14 + 0x170);
        uStack_118 = *(undefined8 *)(lVar14 + 0x188);
        uStack_120 = *(undefined8 *)(lVar14 + 0x180);
        uStack_108 = *(undefined8 *)(lVar14 + 0x198);
        uStack_110 = *(undefined8 *)(lVar14 + 400);
        uStack_178 = *(undefined8 *)(lVar14 + 0x128);
        uStack_180 = *(undefined8 *)(lVar14 + 0x120);
        uStack_168 = *(undefined8 *)(lVar14 + 0x138);
        uStack_170 = *(undefined8 *)(lVar14 + 0x130);
        uStack_158 = *(undefined8 *)(lVar14 + 0x148);
        uStack_160 = *(undefined8 *)(lVar14 + 0x140);
        uStack_148 = *(undefined8 *)(lVar14 + 0x158);
        uStack_150 = *(undefined8 *)(lVar14 + 0x150);
        uStack_198 = *(undefined8 *)(lVar14 + 0x108);
        uStack_1a0 = *(undefined8 *)(lVar14 + 0x100);
        uStack_188 = *(undefined8 *)(lVar14 + 0x118);
        uStack_190 = *(undefined8 *)(lVar14 + 0x110);
        /*Unity.Jobs.IJobExtensions$$Run<RaceSplineCoordsAndPointOnTrackJob>*/ func_0x0185e800(&uStack_1a0,uRam0000000003d57fb8);
        pcVar11 = *(char **)(lVar14 + 0x1c8);
        cVar1 = *pcVar11;
        uVar25 = *(undefined4 *)(pcVar11 + 0xc);
        uVar26 = *(uint *)(pcVar11 + 0x24);
        uVar18 = (ulong)uVar26;
        uStack_190 = *(undefined8 *)(pcVar11 + 0x38);
        uStack_198 = *(undefined8 *)(pcVar11 + 0x30);
        uStack_1a0 = *(undefined8 *)(pcVar11 + 0x28);
        uVar29 = *(undefined8 *)(pcVar11 + 0x14);
        uStack_1b8 = (undefined4)uStack_198;
        uStack_1b4 = (undefined4)((ulong)uStack_198 >> 0x20);
        uStack_1bc = (undefined4)((ulong)uStack_1a0 >> 0x20);
        uStack_1b0 = (undefined4)uStack_190;
        uStack_1ac = (undefined4)((ulong)uStack_190 >> 0x20);
        uVar10 = *(ulong *)(pcVar11 + 0x1c);
        *param_7 = *(undefined8 *)(pcVar11 + 4);
        *(undefined4 *)(param_7 + 1) = uVar25;
        *extraout_x1 = uVar29;
        param_8[1] = CONCAT44(uStack_1b0,uStack_1b4);
        *param_8 = CONCAT44(uStack_1b8,uStack_1bc);
        *(undefined4 *)(param_8 + 2) = uStack_1ac;
        *param_10 = uVar10;
        *(uint *)(param_10 + 1) = uVar26;
        if (*(long *)PTR_03a5d648 == lStack_c8) {
          return (ulong)(cVar1 != '\0');
        }
        lVar14 = ___stack_chk_fail((ulong)(cVar1 != '\0'));
        uStack_258 = uVar5;
        if ((bRam0000000003eb4bc2 & 1) == 0) {
          func_0x00f78a20(0x3d3ba08);
          func_0x00f78a20(&/*Unity.Mathematics.float3_TypeInfo*/ lRam0000000003d265d8);
          bRam0000000003eb4bc2 = 1;
        }
        lStack_268 = 0;
        lStack_260 = 0;
        lStack_270 = 0;
        fStack_278 = 0.0;
        auStack_284[0] = 0;
        uVar25 = *(undefined4 *)(*(undefined8 **)(/*Unity.Mathematics.float3_TypeInfo*/ lRam0000000003d265d8 + 0xb8) + 1);
        *puVar8 = **(undefined8 **)(/*Unity.Mathematics.float3_TypeInfo*/ lRam0000000003d265d8 + 0xb8);
        *(undefined4 *)(puVar8 + 1) = uVar25;
        plVar12 = &lStack_260;
        if ((bRam0000000003eb4bc4 & 1) == 0) {
          func_0x00f78a20(0x3d3ba08);
          func_0x00f78a20(&/*Atlas.Gameplay.RaceSplineRootBehaviour_TypeInfo*/ lRam0000000003d240a0);
          func_0x00f78a20(&/*Unity.Mathematics.float2_TypeInfo*/ uRam0000000003d265d0);
          bRam0000000003eb4bc4 = 1;
        }
        uStack_348 = 0;
        uStack_340 = 0;
        uStack_358 = 0;
        uStack_350 = 0;
        uStack_368 = 0;
        uStack_360 = 0;
        if (((*(ushort *)(/*Atlas.Gameplay.RaceSplineRootBehaviour_TypeInfo*/ lRam0000000003d240a0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Gameplay.RaceSplineRootBehaviour_TypeInfo*/ lRam0000000003d240a0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar5 = **(undefined8 **)(/*Atlas.Gameplay.RaceSplineRootBehaviour_TypeInfo*/ lRam0000000003d240a0 + 0xb8);
        /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar5,0);
        lVar22 = plVar9[2];
        if (lVar22 == 0) {
          lVar22 = /*Atlas.Gameplay.RaceSplineRootBehaviour$$FindClosestKnot*/ func_0x014dce18(extraout_d0 & 0xffffffff,uVar18 & 0xffffffff,uVar10 & 0xffffffff,
                                   lVar14);
        }
        uStack_340._4_4_ = 3.4028235e+38;
        lStack_270 = *plVar9;
        lStack_260 = 0;
        lStack_268 = 0;
        auStack_284[0] = 0xffffffff;
        uStack_274 = 0xffffffff;
        fStack_278 = 0.0;
        if (*plVar9 != 0) {
          lStack_268 = plVar9[2];
          lStack_260 = plVar9[1];
          if (*plVar9 == 0) {
            func_0x00f78af4();
          }
          else {
            /*RacePolyLine$$TryGetClosestPoint*/ func_0x014d836c(extraout_d0 & 0xffffffff,uVar18 & 0xffffffff,uVar10 & 0xffffffff,*plVar9
                            ,&uStack_348,(long)&uStack_340 + 4,&fStack_278,auStack_284,&uStack_274);
            if ((fStack_278 < 20.0) || (lStack_270 != 0)) goto code_r0x014dc718;
            func_0x00f78af4();
          }
          goto code_r0x014dc8b0;
        }
        if (lVar22 == 0) goto code_r0x014dc718;
        lVar15 = *(long *)(lVar22 + 0x40);
        if (lVar15 == 0) {
          func_0x00f78af4();
          goto code_r0x014dc8b0;
        }
        fVar24 = 3.4028235e+38;
        uVar26 = *(uint *)(lVar15 + 0x18);
        fVar30 = uStack_340._4_4_;
        if (0 < (int)uVar26) {
          uVar23 = 0;
          uVar17 = 0;
          goto code_r0x014dc2c0;
        }
        uVar23 = 0;
        goto code_r0x014dc3c8;
      }
      uVar10 = *puVar20;
      param_7 = (undefined8 *)0x0;
      iVar4 = /*System.String$$op_Equality*/ func_0x029bdf2c(param_6,puVar20[-1]);
      if (iVar4 != 0) {
        return uVar10;
      }
      uVar18 = uVar18 + 1;
      uVar10 = (ulong)*(uint *)(lVar14 + 0x18);
      puVar20 = puVar20 + 2;
    } while ((long)uVar18 < (long)(int)*(uint *)(lVar14 + 0x18));
  }
  return 0;
  while( true ) {
    uVar6 = /*RacePolyLine$$TryGetClosestPoint*/ func_0x014d836c(extraout_d0 & 0xffffffff,uVar18 & 0xffffffff,uVar10 & 0xffffffff,lVar13,
                            &uStack_348,&uStack_350,(long)&uStack_350 + 4,(long)&uStack_358 + 4,
                            &uStack_358);
    if (((uVar6 & 1) != 0) && (ABS((float)uStack_350) < ABS(fVar24))) {
      auStack_284[0] = uStack_358._4_4_;
      uStack_274 = (undefined4)uStack_358;
      fStack_278 = uStack_350._4_4_;
      fVar30 = (float)uStack_350;
      uVar23 = uVar17;
      fVar24 = (float)uStack_350;
      lStack_270 = lVar13;
    }
    uVar17 = uVar17 + 1;
    uVar26 = *(uint *)(lVar15 + 0x18);
    if ((int)uVar26 <= (int)uVar17) break;
code_r0x014dc2c0:
    if (uVar26 <= uVar17) {
      uStack_340._4_4_ = fVar30;
      uVar5 = func_0x00f78b24();
      func_0x00f78ac0(uVar5,0);
      goto code_r0x014dc8b0;
    }
    lVar13 = *(long *)(lVar15 + (long)(int)uVar17 * 8 + 0x20);
    if (lVar13 == 0) {
      uStack_340._4_4_ = fVar30;
      func_0x00f78af4();
      goto code_r0x014dc8b0;
    }
  }
code_r0x014dc3c8:
  lVar15 = *(long *)(lVar22 + 0x30);
  uStack_340._4_4_ = fVar30;
  if (lVar15 == 0) {
    func_0x00f78af4();
    goto code_r0x014dc8b0;
  }
  uVar26 = *(uint *)(lVar15 + 0x18);
  if ((int)uVar26 < 1) {
    bVar16 = false;
    uVar17 = 0xffffffff;
  }
  else {
    uVar19 = 0;
    bVar16 = false;
    uVar17 = 0xffffffff;
    do {
      if (uVar26 <= uVar19) {
        uStack_340._4_4_ = fVar30;
        uVar5 = func_0x00f78b24();
        func_0x00f78ac0(uVar5,0);
        goto code_r0x014dc8b0;
      }
      lVar13 = *(long *)(lVar14 + 0x40);
      if (lVar13 == 0) {
code_r0x014dc758:
        uStack_340._4_4_ = fVar30;
        func_0x00f78af4();
        goto code_r0x014dc8b0;
      }
      uVar6 = 0;
      uVar26 = *(uint *)(lVar15 + (long)(int)uVar19 * 4 + 0x20);
      lVar21 = (long)(int)uVar26;
      while( true ) {
        if (*(uint *)(lVar13 + 0x18) <= uVar26) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar13 = *(long *)(*(long *)(lVar13 + 0x10) + lVar21 * 8 + 0x20);
        if (lVar13 == 0) {
          uStack_340._4_4_ = fVar30;
          func_0x00f78af4();
          goto code_r0x014dc8b0;
        }
        lVar13 = *(long *)(lVar13 + 0x28);
        if (lVar13 == 0) {
          uStack_340._4_4_ = fVar30;
          func_0x00f78af4();
          goto code_r0x014dc8b0;
        }
        if ((long)*(int *)(lVar13 + 0x18) <= (long)uVar6) break;
        lVar13 = *(long *)(lVar14 + 0x40);
        if (lVar13 == 0) {
          uStack_340._4_4_ = fVar30;
          func_0x00f78af4();
          goto code_r0x014dc8b0;
        }
        if (*(uint *)(lVar13 + 0x18) <= uVar26) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar13 = *(long *)(*(long *)(lVar13 + 0x10) + lVar21 * 8 + 0x20);
        if (lVar13 == 0) {
          uStack_340._4_4_ = fVar30;
          func_0x00f78af4();
          goto code_r0x014dc8b0;
        }
        lVar13 = *(long *)(lVar13 + 0x28);
        if (lVar13 == 0) {
          uStack_340._4_4_ = fVar30;
          func_0x00f78af4();
          goto code_r0x014dc8b0;
        }
        if (*(uint *)(lVar13 + 0x18) <= uVar6) {
          uStack_340._4_4_ = fVar30;
          uVar5 = func_0x00f78b24();
          func_0x00f78ac0(uVar5,0);
          goto code_r0x014dc8b0;
        }
        if (*(int *)(lVar13 + uVar6 * 4 + 0x20) == *(int *)(lVar22 + 0x10)) {
          lVar13 = *(long *)(lVar14 + 0x40);
          if (lVar13 == 0) {
            uStack_340._4_4_ = fVar30;
            func_0x00f78af4();
            goto code_r0x014dc8b0;
          }
          if (*(uint *)(lVar13 + 0x18) <= uVar26) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar13 = *(long *)(*(long *)(lVar13 + 0x10) + lVar21 * 8 + 0x20);
          if (lVar13 == 0) {
            uStack_340._4_4_ = fVar30;
            func_0x00f78af4();
            goto code_r0x014dc8b0;
          }
          lVar13 = *(long *)(lVar13 + 0x40);
          if (lVar13 == 0) {
            uStack_340._4_4_ = fVar30;
            func_0x00f78af4();
            goto code_r0x014dc8b0;
          }
          if (*(uint *)(lVar13 + 0x18) <= uVar6) {
            uStack_340._4_4_ = fVar30;
            uVar5 = func_0x00f78b24();
            func_0x00f78ac0(uVar5,0);
            goto code_r0x014dc8b0;
          }
          lVar13 = *(long *)(lVar13 + uVar6 * 8 + 0x20);
          if (lVar13 == 0) {
            uStack_340._4_4_ = fVar30;
            func_0x00f78af4();
            goto code_r0x014dc8b0;
          }
          uVar7 = /*RacePolyLine$$TryGetClosestPoint*/ func_0x014d836c(extraout_d0 & 0xffffffff,uVar18 & 0xffffffff,uVar10 & 0xffffffff,
                                  lVar13,&uStack_348,&uStack_360,(long)&uStack_360 + 4,
                                  (long)&uStack_368 + 4,&uStack_368);
          if (((uVar7 & 1) != 0) &&
             (fVar2 = (float)uStack_360, ABS((float)uStack_360) < ABS(fVar24))) {
            lVar13 = *(long *)(lVar14 + 0x40);
            if (lVar13 == 0) {
              uStack_340._4_4_ = (float)uStack_360;
              func_0x00f78af4();
              goto code_r0x014dc8b0;
            }
            if (*(uint *)(lVar13 + 0x18) <= uVar26) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar13 = *(long *)(*(long *)(lVar13 + 0x10) + lVar21 * 8 + 0x20);
            if (lVar13 == 0) {
              uStack_340._4_4_ = fVar2;
              func_0x00f78af4();
              goto code_r0x014dc8b0;
            }
            lVar13 = *(long *)(lVar13 + 0x40);
            if (lVar13 == 0) {
              uStack_340._4_4_ = fVar2;
              func_0x00f78af4();
              goto code_r0x014dc8b0;
            }
            if (*(uint *)(lVar13 + 0x18) <= uVar6) {
              uStack_340._4_4_ = fVar2;
              uVar5 = func_0x00f78b24();
              func_0x00f78ac0(uVar5,0);
              goto code_r0x014dc8b0;
            }
            lStack_270 = *(long *)(lVar13 + uVar6 * 8 + 0x20);
            auStack_284[0] = uStack_368._4_4_;
            uStack_274 = (undefined4)uStack_368;
            fStack_278 = uStack_360._4_4_;
            bVar16 = true;
            fVar30 = fVar2;
            fVar24 = fVar2;
            uVar17 = uVar26;
          }
        }
        uVar6 = uVar6 + 1;
        lVar13 = *(long *)(lVar14 + 0x40);
        if (lVar13 == 0) goto code_r0x014dc758;
      }
      uVar19 = uVar19 + 1;
      uVar26 = *(uint *)(lVar15 + 0x18);
    } while ((int)uVar19 < (int)uVar26);
  }
  uStack_340._4_4_ = fVar30;
  if (bVar16) {
    lVar14 = *(long *)(lVar14 + 0x40);
    lStack_268 = lVar22;
    if (lVar14 == 0) {
      func_0x00f78af4();
      goto code_r0x014dc8b0;
    }
    if (*(uint *)(lVar14 + 0x18) <= uVar17) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
  }
  else {
    lVar15 = *(long *)(lVar22 + 0x28);
    lStack_260 = lVar22;
    if (lVar15 == 0) {
      func_0x00f78af4();
      goto code_r0x014dc8b0;
    }
    if (*(uint *)(lVar15 + 0x18) <= uVar23) {
      uVar5 = func_0x00f78b24();
      func_0x00f78ac0(uVar5,0);
      goto code_r0x014dc8b0;
    }
    lVar14 = *(long *)(lVar14 + 0x40);
    if (lVar14 == 0) {
      func_0x00f78af4();
      goto code_r0x014dc8b0;
    }
    uVar17 = *(uint *)(lVar15 + (long)(int)uVar23 * 4 + 0x20);
    plVar12 = &lStack_268;
    if (*(uint *)(lVar14 + 0x18) <= uVar17) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
  }
  *plVar12 = *(long *)(*(long *)(lVar14 + 0x10) + (long)(int)uVar17 * 8 + 0x20);
  if ((fStack_278 < 20.0) || (lStack_270 != 0)) {
code_r0x014dc718:
    uVar18 = /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$EndSample*/ func_0x03250f64(uVar5,0);
    return uVar18;
  }
  func_0x00f78af4();
code_r0x014dc8b0:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x14dc8b4);
  (*pcVar3)();
}



// ============================================================
// RVA: 0x14dbc44 | Atlas.Gameplay.RaceSplineRootBehaviour.TryGetCoordsAndPointOnTrackJob
// ============================================================

/* WARNING: Possible PIC construction at 0x014dbed4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014dbed8) */
/* WARNING: Removing unreachable block (ram,0x014dbff8) */
/* WARNING: Removing unreachable block (ram,0x014dbee4) */
/* WARNING: Removing unreachable block (ram,0x014dbf00) */
/* WARNING: Removing unreachable block (ram,0x014dbf04) */
/* WARNING: Removing unreachable block (ram,0x014dbf34) */
/* WARNING: Removing unreachable block (ram,0x014dbf38) */
/* WARNING: Removing unreachable block (ram,0x014dbf44) */
/* WARNING: Removing unreachable block (ram,0x014dbf48) */
/* WARNING: Removing unreachable block (ram,0x014dbf78) */
/* WARNING: Removing unreachable block (ram,0x014dbf7c) */
/* WARNING: Removing unreachable block (ram,0x014dc000) */
/* WARNING: Removing unreachable block (ram,0x014dbf80) */
/* WARNING: Removing unreachable block (ram,0x014dbf88) */
/* WARNING: Removing unreachable block (ram,0x014dbf90) */
/* WARNING: Removing unreachable block (ram,0x014dbf9c) */
/* WARNING: Removing unreachable block (ram,0x014dbfa0) */
/* WARNING: Removing unreachable block (ram,0x014dbfa8) */
/* WARNING: Removing unreachable block (ram,0x014dc00c) */
/* WARNING: Removing unreachable block (ram,0x014dc020) */
/* WARNING: Removing unreachable block (ram,0x014dc02c) */
/* WARNING: Removing unreachable block (ram,0x014dc034) */
/* WARNING: Removing unreachable block (ram,0x014dbfb8) */
/* WARNING: Removing unreachable block (ram,0x014dbfc4) */
/* WARNING: Removing unreachable block (ram,0x014dbfe0) */
/* WARNING: Removing unreachable block (ram,0x014dc0c0) */
/* WARNING: Removing unreachable block (ram,0x014dbfe8) */
/* WARNING: Removing unreachable block (ram,0x014dc0cc) */
/* WARNING: Removing unreachable block (ram,0x014dbff0) */
/* WARNING: Removing unreachable block (ram,0x014dc03c) */
/* WARNING: Removing unreachable block (ram,0x014dc04c) */
/* WARNING: Removing unreachable block (ram,0x014dc054) */
/* WARNING: Removing unreachable block (ram,0x014dc070) */
/* WARNING: Removing unreachable block (ram,0x014dc094) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1  [16]
Atlas_Gameplay_RaceSplineRootBehaviour__TryGetCoordsAndPointOnTrackJob
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,long param_5,
          undefined8 *param_6,undefined8 *param_7,long *param_8,undefined8 param_9,ulong *param_10)

{
  char cVar1;
  undefined1 auVar2 [16];
  float fVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  char *pcVar11;
  long *plVar12;
  float fVar13;
  long lVar14;
  long lVar15;
  bool bVar16;
  uint uVar17;
  uint uVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  uint uVar22;
  float fVar23;
  undefined4 uVar24;
  ulong extraout_d0;
  uint uVar25;
  ulong uVar27;
  undefined8 uVar28;
  float fVar29;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined4 auStack_244 [3];
  float fStack_238;
  undefined4 uStack_234;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  undefined8 uStack_218;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  ulong uVar26;
  
  lStack_88 = *(long *)PTR_03a5d648;
  puVar9 = param_7;
  plVar10 = param_8;
  uVar19 = param_9;
  if ((bRam0000000003eb4bc1 & 1) == 0) {
    func_0x00f78a20(&uRam0000000003d57fb8);
    bRam0000000003eb4bc1 = 1;
  }
  *(undefined4 *)(param_5 + 0x198) = param_1;
  *(undefined4 *)(param_5 + 0x19c) = param_2;
  *(undefined4 *)(param_5 + 0x1a0) = param_3;
  *(undefined4 *)(param_5 + 0x1a4) = 0x3f800000;
  *(undefined4 *)(param_5 + 0x1bc) = param_4;
  lVar21 = param_8[1];
  lVar6 = *param_8;
  *(int *)(param_5 + 0x1b8) = (int)param_8[2];
  *(long *)(param_5 + 0x1b0) = lVar21;
  *(long *)(param_5 + 0x1a8) = lVar6;
  *(int *)(param_5 + 0x1c0) = (int)param_9;
  uStack_b8 = *(undefined8 *)(param_5 + 0x1a8);
  uStack_c0 = *(undefined8 *)(param_5 + 0x1a0);
  uStack_a8 = *(undefined8 *)(param_5 + 0x1b8);
  uStack_b0 = *(undefined8 *)(param_5 + 0x1b0);
  uStack_98 = *(undefined8 *)(param_5 + 0x1c8);
  uStack_a0 = *(undefined8 *)(param_5 + 0x1c0);
  uStack_90 = *(undefined8 *)(param_5 + 0x1d0);
  uStack_f8 = *(undefined8 *)(param_5 + 0x168);
  uStack_100 = *(undefined8 *)(param_5 + 0x160);
  uStack_e8 = *(undefined8 *)(param_5 + 0x178);
  uStack_f0 = *(undefined8 *)(param_5 + 0x170);
  uStack_d8 = *(undefined8 *)(param_5 + 0x188);
  uStack_e0 = *(undefined8 *)(param_5 + 0x180);
  uStack_c8 = *(undefined8 *)(param_5 + 0x198);
  uStack_d0 = *(undefined8 *)(param_5 + 400);
  uStack_138 = *(undefined8 *)(param_5 + 0x128);
  uStack_140 = *(undefined8 *)(param_5 + 0x120);
  uStack_128 = *(undefined8 *)(param_5 + 0x138);
  uStack_130 = *(undefined8 *)(param_5 + 0x130);
  uStack_118 = *(undefined8 *)(param_5 + 0x148);
  uStack_120 = *(undefined8 *)(param_5 + 0x140);
  uStack_108 = *(undefined8 *)(param_5 + 0x158);
  uStack_110 = *(undefined8 *)(param_5 + 0x150);
  uStack_158 = *(undefined8 *)(param_5 + 0x108);
  uStack_160 = *(undefined8 *)(param_5 + 0x100);
  uStack_148 = *(undefined8 *)(param_5 + 0x118);
  uStack_150 = *(undefined8 *)(param_5 + 0x110);
  /*Unity.Jobs.IJobExtensions$$Run<RaceSplineCoordsAndPointOnTrackJob>*/ func_0x0185e800(&uStack_160,uRam0000000003d57fb8);
  pcVar11 = *(char **)(param_5 + 0x1c8);
  cVar1 = *pcVar11;
  uVar24 = *(undefined4 *)(pcVar11 + 0xc);
  uVar25 = *(uint *)(pcVar11 + 0x24);
  uVar26 = (ulong)uVar25;
  uStack_150 = *(undefined8 *)(pcVar11 + 0x38);
  uStack_158 = *(undefined8 *)(pcVar11 + 0x30);
  uStack_160 = *(undefined8 *)(pcVar11 + 0x28);
  uVar28 = *(undefined8 *)(pcVar11 + 0x14);
  uStack_178 = (undefined4)uStack_158;
  uStack_174 = (undefined4)((ulong)uStack_158 >> 0x20);
  uStack_17c = (undefined4)((ulong)uStack_160 >> 0x20);
  uStack_170 = (undefined4)uStack_150;
  uStack_16c = (undefined4)((ulong)uStack_150 >> 0x20);
  uVar27 = *(ulong *)(pcVar11 + 0x1c);
  *param_7 = *(undefined8 *)(pcVar11 + 4);
  *(undefined4 *)(param_7 + 1) = uVar24;
  *param_6 = uVar28;
  auVar2._4_4_ = uStack_178;
  auVar2._0_4_ = uStack_17c;
  auVar2._8_4_ = uStack_174;
  auVar2._12_4_ = uStack_170;
  param_8[1] = CONCAT44(uStack_170,uStack_174);
  *param_8 = CONCAT44(uStack_178,uStack_17c);
  *(undefined4 *)(param_8 + 2) = uStack_16c;
  *param_10 = uVar27;
  *(uint *)(param_10 + 1) = uVar25;
  if (*(long *)PTR_03a5d648 == lStack_88) {
    return auVar2;
  }
  lVar6 = ___stack_chk_fail(cVar1 != '\0');
  uStack_218 = uVar19;
  if ((bRam0000000003eb4bc2 & 1) == 0) {
    func_0x00f78a20(0x3d3ba08);
    func_0x00f78a20(&/*Unity.Mathematics.float3_TypeInfo*/ lRam0000000003d265d8);
    bRam0000000003eb4bc2 = 1;
  }
  lStack_228 = 0;
  lStack_220 = 0;
  lStack_230 = 0;
  fStack_238 = 0.0;
  auStack_244[0] = 0;
  uVar24 = *(undefined4 *)(*(undefined8 **)(/*Unity.Mathematics.float3_TypeInfo*/ lRam0000000003d265d8 + 0xb8) + 1);
  *puVar9 = **(undefined8 **)(/*Unity.Mathematics.float3_TypeInfo*/ lRam0000000003d265d8 + 0xb8);
  *(undefined4 *)(puVar9 + 1) = uVar24;
  plVar12 = &lStack_220;
  if ((bRam0000000003eb4bc4 & 1) == 0) {
    func_0x00f78a20(0x3d3ba08);
    func_0x00f78a20(&/*Atlas.Gameplay.RaceSplineRootBehaviour_TypeInfo*/ lRam0000000003d240a0);
    func_0x00f78a20(&/*Unity.Mathematics.float2_TypeInfo*/ lRam0000000003d265d0);
    bRam0000000003eb4bc4 = 1;
  }
  uStack_308 = 0;
  uStack_300 = 0;
  uStack_318 = 0;
  uStack_310 = 0;
  uStack_328 = 0;
  uStack_320 = 0;
  if (((*(ushort *)(/*Atlas.Gameplay.RaceSplineRootBehaviour_TypeInfo*/ lRam0000000003d240a0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.RaceSplineRootBehaviour_TypeInfo*/ lRam0000000003d240a0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar19 = **(undefined8 **)(/*Atlas.Gameplay.RaceSplineRootBehaviour_TypeInfo*/ lRam0000000003d240a0 + 0xb8);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar19,0);
  fVar29 = **(float **)(/*Unity.Mathematics.float2_TypeInfo*/ lRam0000000003d265d0 + 0xb8);
  lVar21 = plVar10[2];
  if (lVar21 == 0) {
    lVar21 = /*Atlas.Gameplay.RaceSplineRootBehaviour$$FindClosestKnot*/ func_0x014dce18(extraout_d0 & 0xffffffff,uVar26 & 0xffffffff,uVar27 & 0xffffffff,lVar6)
    ;
  }
  uStack_300._4_4_ = 3.4028235e+38;
  lStack_230 = *plVar10;
  lStack_220 = 0;
  lStack_228 = 0;
  auStack_244[0] = 0xffffffff;
  uStack_234 = 0xffffffff;
  fStack_238 = 0.0;
  if (*plVar10 != 0) {
    lStack_228 = plVar10[2];
    lStack_220 = plVar10[1];
    if (*plVar10 == 0) {
      func_0x00f78af4();
    }
    else {
      iVar5 = /*RacePolyLine$$TryGetClosestPoint*/ func_0x014d836c(extraout_d0 & 0xffffffff,uVar26 & 0xffffffff,uVar27 & 0xffffffff,
                              *plVar10,&uStack_308,(long)&uStack_300 + 4,&fStack_238,auStack_244,
                              &uStack_234);
      if ((fStack_238 < 20.0) || (lStack_230 != 0)) {
        fVar13 = uStack_300._4_4_;
        if (iVar5 == 0) {
          fVar13 = fVar29;
        }
        goto code_r0x014dc718;
      }
      func_0x00f78af4();
    }
    goto code_r0x014dc8b0;
  }
  fVar13 = fVar29;
  if (lVar21 == 0) {
code_r0x014dc718:
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$EndSample*/ func_0x03250f64(uVar19,0);
    return ZEXT416((uint)fVar13);
  }
  lVar15 = *(long *)(lVar21 + 0x40);
  if (lVar15 == 0) {
    func_0x00f78af4();
  }
  else {
    fVar23 = 3.4028235e+38;
    uVar25 = *(uint *)(lVar15 + 0x18);
    fVar29 = uStack_300._4_4_;
    if ((int)uVar25 < 1) {
      uVar22 = 0;
      fVar13 = 3.4028235e+38;
    }
    else {
      uVar22 = 0;
      uVar17 = 0;
      fVar13 = 3.4028235e+38;
      do {
        if (uVar25 <= uVar17) {
          uStack_300._4_4_ = fVar29;
          uVar19 = func_0x00f78b24();
          func_0x00f78ac0(uVar19,0);
          goto code_r0x014dc8b0;
        }
        lVar14 = *(long *)(lVar15 + (long)(int)uVar17 * 8 + 0x20);
        if (lVar14 == 0) {
          uStack_300._4_4_ = fVar29;
          func_0x00f78af4();
          goto code_r0x014dc8b0;
        }
        uVar7 = /*RacePolyLine$$TryGetClosestPoint*/ func_0x014d836c(extraout_d0 & 0xffffffff,uVar26 & 0xffffffff,uVar27 & 0xffffffff,
                                lVar14,&uStack_308,&uStack_310,(long)&uStack_310 + 4,
                                (long)&uStack_318 + 4,&uStack_318);
        if (((uVar7 & 1) != 0) && (fVar13 = fVar23, ABS((float)uStack_310) < ABS(fVar23))) {
          auStack_244[0] = uStack_318._4_4_;
          uStack_234 = (undefined4)uStack_318;
          fStack_238 = uStack_310._4_4_;
          fVar13 = (float)uStack_310;
          fVar29 = (float)uStack_310;
          uVar22 = uVar17;
          fVar23 = (float)uStack_310;
          lStack_230 = lVar14;
        }
        uVar17 = uVar17 + 1;
        uVar25 = *(uint *)(lVar15 + 0x18);
      } while ((int)uVar17 < (int)uVar25);
    }
    lVar15 = *(long *)(lVar21 + 0x30);
    uStack_300._4_4_ = fVar29;
    if (lVar15 == 0) {
      func_0x00f78af4();
    }
    else {
      uVar25 = *(uint *)(lVar15 + 0x18);
      if ((int)uVar25 < 1) {
        bVar16 = false;
        uVar17 = 0xffffffff;
      }
      else {
        uVar18 = 0;
        bVar16 = false;
        uVar17 = 0xffffffff;
        do {
          if (uVar25 <= uVar18) {
            uStack_300._4_4_ = fVar29;
            uVar19 = func_0x00f78b24();
            func_0x00f78ac0(uVar19,0);
            goto code_r0x014dc8b0;
          }
          lVar14 = *(long *)(lVar6 + 0x40);
          if (lVar14 == 0) {
code_r0x014dc758:
            uStack_300._4_4_ = fVar29;
            func_0x00f78af4();
            goto code_r0x014dc8b0;
          }
          uVar7 = 0;
          uVar25 = *(uint *)(lVar15 + (long)(int)uVar18 * 4 + 0x20);
          lVar20 = (long)(int)uVar25;
          while( true ) {
            if (*(uint *)(lVar14 + 0x18) <= uVar25) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar14 = *(long *)(*(long *)(lVar14 + 0x10) + lVar20 * 8 + 0x20);
            if (lVar14 == 0) {
              uStack_300._4_4_ = fVar29;
              func_0x00f78af4();
              goto code_r0x014dc8b0;
            }
            lVar14 = *(long *)(lVar14 + 0x28);
            if (lVar14 == 0) {
              uStack_300._4_4_ = fVar29;
              func_0x00f78af4();
              goto code_r0x014dc8b0;
            }
            if ((long)*(int *)(lVar14 + 0x18) <= (long)uVar7) break;
            lVar14 = *(long *)(lVar6 + 0x40);
            if (lVar14 == 0) {
              uStack_300._4_4_ = fVar29;
              func_0x00f78af4();
              goto code_r0x014dc8b0;
            }
            if (*(uint *)(lVar14 + 0x18) <= uVar25) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar14 = *(long *)(*(long *)(lVar14 + 0x10) + lVar20 * 8 + 0x20);
            if (lVar14 == 0) {
              uStack_300._4_4_ = fVar29;
              func_0x00f78af4();
              goto code_r0x014dc8b0;
            }
            lVar14 = *(long *)(lVar14 + 0x28);
            if (lVar14 == 0) {
              uStack_300._4_4_ = fVar29;
              func_0x00f78af4();
              goto code_r0x014dc8b0;
            }
            if (*(uint *)(lVar14 + 0x18) <= uVar7) {
              uStack_300._4_4_ = fVar29;
              uVar19 = func_0x00f78b24();
              func_0x00f78ac0(uVar19,0);
              goto code_r0x014dc8b0;
            }
            if (*(int *)(lVar14 + uVar7 * 4 + 0x20) == *(int *)(lVar21 + 0x10)) {
              lVar14 = *(long *)(lVar6 + 0x40);
              if (lVar14 == 0) {
                uStack_300._4_4_ = fVar29;
                func_0x00f78af4();
                goto code_r0x014dc8b0;
              }
              if (*(uint *)(lVar14 + 0x18) <= uVar25) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              lVar14 = *(long *)(*(long *)(lVar14 + 0x10) + lVar20 * 8 + 0x20);
              if (lVar14 == 0) {
                uStack_300._4_4_ = fVar29;
                func_0x00f78af4();
                goto code_r0x014dc8b0;
              }
              lVar14 = *(long *)(lVar14 + 0x40);
              if (lVar14 == 0) {
                uStack_300._4_4_ = fVar29;
                func_0x00f78af4();
                goto code_r0x014dc8b0;
              }
              if (*(uint *)(lVar14 + 0x18) <= uVar7) {
                uStack_300._4_4_ = fVar29;
                uVar19 = func_0x00f78b24();
                func_0x00f78ac0(uVar19,0);
                goto code_r0x014dc8b0;
              }
              lVar14 = *(long *)(lVar14 + uVar7 * 8 + 0x20);
              if (lVar14 == 0) {
                uStack_300._4_4_ = fVar29;
                func_0x00f78af4();
                goto code_r0x014dc8b0;
              }
              uVar8 = /*RacePolyLine$$TryGetClosestPoint*/ func_0x014d836c(extraout_d0 & 0xffffffff,uVar26 & 0xffffffff,
                                      uVar27 & 0xffffffff,lVar14,&uStack_308,&uStack_320,
                                      (long)&uStack_320 + 4,(long)&uStack_328 + 4,&uStack_328);
              if (((uVar8 & 1) != 0) &&
                 (fVar3 = (float)uStack_320, fVar13 = fVar23, ABS((float)uStack_320) < ABS(fVar23)))
              {
                lVar14 = *(long *)(lVar6 + 0x40);
                if (lVar14 == 0) {
                  uStack_300._4_4_ = (float)uStack_320;
                  func_0x00f78af4();
                  goto code_r0x014dc8b0;
                }
                if (*(uint *)(lVar14 + 0x18) <= uVar25) {
                  /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                }
                lVar14 = *(long *)(*(long *)(lVar14 + 0x10) + lVar20 * 8 + 0x20);
                if (lVar14 == 0) {
                  uStack_300._4_4_ = fVar3;
                  func_0x00f78af4();
                  goto code_r0x014dc8b0;
                }
                lVar14 = *(long *)(lVar14 + 0x40);
                if (lVar14 == 0) {
                  uStack_300._4_4_ = fVar3;
                  func_0x00f78af4();
                  goto code_r0x014dc8b0;
                }
                if (*(uint *)(lVar14 + 0x18) <= uVar7) {
                  uStack_300._4_4_ = fVar3;
                  uVar19 = func_0x00f78b24();
                  func_0x00f78ac0(uVar19,0);
                  goto code_r0x014dc8b0;
                }
                lStack_230 = *(long *)(lVar14 + uVar7 * 8 + 0x20);
                auStack_244[0] = uStack_328._4_4_;
                uStack_234 = (undefined4)uStack_328;
                fStack_238 = uStack_320._4_4_;
                bVar16 = true;
                fVar13 = fVar3;
                fVar29 = fVar3;
                fVar23 = fVar3;
                uVar17 = uVar25;
              }
            }
            uVar7 = uVar7 + 1;
            lVar14 = *(long *)(lVar6 + 0x40);
            if (lVar14 == 0) goto code_r0x014dc758;
          }
          uVar18 = uVar18 + 1;
          uVar25 = *(uint *)(lVar15 + 0x18);
        } while ((int)uVar18 < (int)uVar25);
      }
      uStack_300._4_4_ = fVar29;
      if (bVar16) {
        lVar6 = *(long *)(lVar6 + 0x40);
        lStack_228 = lVar21;
        if (lVar6 == 0) {
          func_0x00f78af4();
          goto code_r0x014dc8b0;
        }
        if (*(uint *)(lVar6 + 0x18) <= uVar17) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
      }
      else {
        lVar15 = *(long *)(lVar21 + 0x28);
        lStack_220 = lVar21;
        if (lVar15 == 0) {
          func_0x00f78af4();
          goto code_r0x014dc8b0;
        }
        if (*(uint *)(lVar15 + 0x18) <= uVar22) {
          uVar19 = func_0x00f78b24();
          func_0x00f78ac0(uVar19,0);
          goto code_r0x014dc8b0;
        }
        lVar6 = *(long *)(lVar6 + 0x40);
        if (lVar6 == 0) {
          func_0x00f78af4();
          goto code_r0x014dc8b0;
        }
        uVar17 = *(uint *)(lVar15 + (long)(int)uVar22 * 4 + 0x20);
        plVar12 = &lStack_228;
        if (*(uint *)(lVar6 + 0x18) <= uVar17) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
      }
      *plVar12 = *(long *)(*(long *)(lVar6 + 0x10) + (long)(int)uVar17 * 8 + 0x20);
      if ((fStack_238 < 20.0) || (lStack_230 != 0)) goto code_r0x014dc718;
      func_0x00f78af4();
    }
  }
code_r0x014dc8b0:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x14dc8b4);
  (*pcVar4)();
}



// ============================================================
// RVA: 0x14dbde8 | Atlas.Gameplay.RaceSplineRootBehaviour.TryGetCoordsAndPointOnTrack
// ============================================================

/* WARNING: Possible PIC construction at 0x014dbed4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014dbed8) */
/* WARNING: Removing unreachable block (ram,0x014dbff8) */
/* WARNING: Removing unreachable block (ram,0x014dbee4) */
/* WARNING: Removing unreachable block (ram,0x014dbf00) */
/* WARNING: Removing unreachable block (ram,0x014dbf04) */
/* WARNING: Removing unreachable block (ram,0x014dbf34) */
/* WARNING: Removing unreachable block (ram,0x014dbf38) */
/* WARNING: Removing unreachable block (ram,0x014dbf44) */
/* WARNING: Removing unreachable block (ram,0x014dbf48) */
/* WARNING: Removing unreachable block (ram,0x014dbf78) */
/* WARNING: Removing unreachable block (ram,0x014dbf7c) */
/* WARNING: Removing unreachable block (ram,0x014dc000) */
/* WARNING: Removing unreachable block (ram,0x014dbf80) */
/* WARNING: Removing unreachable block (ram,0x014dbf88) */
/* WARNING: Removing unreachable block (ram,0x014dbf90) */
/* WARNING: Removing unreachable block (ram,0x014dbf9c) */
/* WARNING: Removing unreachable block (ram,0x014dbfa0) */
/* WARNING: Removing unreachable block (ram,0x014dbfa8) */
/* WARNING: Removing unreachable block (ram,0x014dc00c) */
/* WARNING: Removing unreachable block (ram,0x014dc020) */
/* WARNING: Removing unreachable block (ram,0x014dc02c) */
/* WARNING: Removing unreachable block (ram,0x014dc034) */
/* WARNING: Removing unreachable block (ram,0x014dbfb8) */
/* WARNING: Removing unreachable block (ram,0x014dbfc4) */
/* WARNING: Removing unreachable block (ram,0x014dbfe0) */
/* WARNING: Removing unreachable block (ram,0x014dc0c0) */
/* WARNING: Removing unreachable block (ram,0x014dbfe8) */
/* WARNING: Removing unreachable block (ram,0x014dc0cc) */
/* WARNING: Removing unreachable block (ram,0x014dbff0) */
/* WARNING: Removing unreachable block (ram,0x014dc03c) */
/* WARNING: Removing unreachable block (ram,0x014dc04c) */
/* WARNING: Removing unreachable block (ram,0x014dc054) */
/* WARNING: Removing unreachable block (ram,0x014dc070) */
/* WARNING: Removing unreachable block (ram,0x014dc094) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

float Atlas_Gameplay_RaceSplineRootBehaviour__TryGetCoordsAndPointOnTrack
                (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
                undefined8 param_5,undefined8 *param_6,long *param_7,undefined8 param_8)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  long *plVar7;
  float fVar8;
  long lVar9;
  long lVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined4 auStack_c4 [3];
  float fStack_b8;
  undefined4 uStack_b4;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  
  uStack_98 = param_8;
  if ((bRam0000000003eb4bc2 & 1) == 0) {
    func_0x00f78a20(0x3d3ba08);
    func_0x00f78a20(&/*Unity.Mathematics.float3_TypeInfo*/ lRam0000000003d265d8);
    bRam0000000003eb4bc2 = 1;
  }
  lStack_a8 = 0;
  lStack_a0 = 0;
  lStack_b0 = 0;
  fStack_b8 = 0.0;
  auStack_c4[0] = 0;
  uVar19 = *(undefined4 *)(*(undefined8 **)(/*Unity.Mathematics.float3_TypeInfo*/ lRam0000000003d265d8 + 0xb8) + 1);
  *param_6 = **(undefined8 **)(/*Unity.Mathematics.float3_TypeInfo*/ lRam0000000003d265d8 + 0xb8);
  *(undefined4 *)(param_6 + 1) = uVar19;
  plVar7 = &lStack_a0;
  if ((bRam0000000003eb4bc4 & 1) == 0) {
    func_0x00f78a20(0x3d3ba08);
    func_0x00f78a20(&/*Atlas.Gameplay.RaceSplineRootBehaviour_TypeInfo*/ lRam0000000003d240a0);
    func_0x00f78a20(&/*Unity.Mathematics.float2_TypeInfo*/ lRam0000000003d265d0);
    bRam0000000003eb4bc4 = 1;
  }
  uStack_188 = 0;
  uStack_180 = 0;
  uStack_198 = 0;
  uStack_190 = 0;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  if (((*(ushort *)(/*Atlas.Gameplay.RaceSplineRootBehaviour_TypeInfo*/ lRam0000000003d240a0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.RaceSplineRootBehaviour_TypeInfo*/ lRam0000000003d240a0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar14 = **(undefined8 **)(/*Atlas.Gameplay.RaceSplineRootBehaviour_TypeInfo*/ lRam0000000003d240a0 + 0xb8);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar14,0);
  fVar20 = **(float **)(/*Unity.Mathematics.float2_TypeInfo*/ lRam0000000003d265d0 + 0xb8);
  lVar16 = param_7[2];
  if (lVar16 == 0) {
    lVar16 = /*Atlas.Gameplay.RaceSplineRootBehaviour$$FindClosestKnot*/ func_0x014dce18(param_1,param_2,param_3,param_4);
  }
  uStack_180._4_4_ = 3.4028235e+38;
  lStack_b0 = *param_7;
  lStack_a0 = 0;
  lStack_a8 = 0;
  auStack_c4[0] = 0xffffffff;
  uStack_b4 = 0xffffffff;
  fStack_b8 = 0.0;
  if (*param_7 != 0) {
    lStack_a8 = param_7[2];
    lStack_a0 = param_7[1];
    if (*param_7 == 0) {
      func_0x00f78af4();
    }
    else {
      iVar3 = /*RacePolyLine$$TryGetClosestPoint*/ func_0x014d836c(param_1,param_2,param_3,*param_7,&uStack_188,(long)&uStack_180 + 4,
                              &fStack_b8,auStack_c4,&uStack_b4);
      if ((fStack_b8 < 20.0) || (lStack_b0 != 0)) {
        fVar8 = uStack_180._4_4_;
        if (iVar3 == 0) {
          fVar8 = fVar20;
        }
        goto code_r0x014dc718;
      }
      func_0x00f78af4();
    }
    goto code_r0x014dc8b0;
  }
  fVar8 = fVar20;
  if (lVar16 == 0) {
code_r0x014dc718:
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$EndSample*/ func_0x03250f64(uVar14,0);
    return fVar8;
  }
  lVar10 = *(long *)(lVar16 + 0x40);
  if (lVar10 == 0) {
    func_0x00f78af4();
  }
  else {
    fVar18 = 3.4028235e+38;
    uVar6 = *(uint *)(lVar10 + 0x18);
    fVar20 = uStack_180._4_4_;
    if ((int)uVar6 < 1) {
      uVar17 = 0;
      fVar8 = 3.4028235e+38;
    }
    else {
      uVar17 = 0;
      uVar12 = 0;
      fVar8 = 3.4028235e+38;
      do {
        if (uVar6 <= uVar12) {
          uStack_180._4_4_ = fVar20;
          uVar14 = func_0x00f78b24();
          func_0x00f78ac0(uVar14,0);
          goto code_r0x014dc8b0;
        }
        lVar9 = *(long *)(lVar10 + (long)(int)uVar12 * 8 + 0x20);
        if (lVar9 == 0) {
          uStack_180._4_4_ = fVar20;
          func_0x00f78af4();
          goto code_r0x014dc8b0;
        }
        uVar4 = /*RacePolyLine$$TryGetClosestPoint*/ func_0x014d836c(param_1,param_2,param_3,lVar9,&uStack_188,&uStack_190,
                                (long)&uStack_190 + 4,(long)&uStack_198 + 4,&uStack_198);
        if (((uVar4 & 1) != 0) && (fVar8 = fVar18, ABS((float)uStack_190) < ABS(fVar18))) {
          auStack_c4[0] = uStack_198._4_4_;
          uStack_b4 = (undefined4)uStack_198;
          fStack_b8 = uStack_190._4_4_;
          fVar8 = (float)uStack_190;
          fVar20 = (float)uStack_190;
          uVar17 = uVar12;
          fVar18 = (float)uStack_190;
          lStack_b0 = lVar9;
        }
        uVar12 = uVar12 + 1;
        uVar6 = *(uint *)(lVar10 + 0x18);
      } while ((int)uVar12 < (int)uVar6);
    }
    lVar10 = *(long *)(lVar16 + 0x30);
    uStack_180._4_4_ = fVar20;
    if (lVar10 == 0) {
      func_0x00f78af4();
    }
    else {
      uVar6 = *(uint *)(lVar10 + 0x18);
      if ((int)uVar6 < 1) {
        bVar11 = false;
        uVar12 = 0xffffffff;
      }
      else {
        uVar13 = 0;
        bVar11 = false;
        uVar12 = 0xffffffff;
        do {
          if (uVar6 <= uVar13) {
            uStack_180._4_4_ = fVar20;
            uVar14 = func_0x00f78b24();
            func_0x00f78ac0(uVar14,0);
            goto code_r0x014dc8b0;
          }
          lVar9 = *(long *)(param_4 + 0x40);
          if (lVar9 == 0) {
code_r0x014dc758:
            uStack_180._4_4_ = fVar20;
            func_0x00f78af4();
            goto code_r0x014dc8b0;
          }
          uVar4 = 0;
          uVar6 = *(uint *)(lVar10 + (long)(int)uVar13 * 4 + 0x20);
          lVar15 = (long)(int)uVar6;
          while( true ) {
            if (*(uint *)(lVar9 + 0x18) <= uVar6) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar9 = *(long *)(*(long *)(lVar9 + 0x10) + lVar15 * 8 + 0x20);
            if (lVar9 == 0) {
              uStack_180._4_4_ = fVar20;
              func_0x00f78af4();
              goto code_r0x014dc8b0;
            }
            lVar9 = *(long *)(lVar9 + 0x28);
            if (lVar9 == 0) {
              uStack_180._4_4_ = fVar20;
              func_0x00f78af4();
              goto code_r0x014dc8b0;
            }
            if ((long)*(int *)(lVar9 + 0x18) <= (long)uVar4) break;
            lVar9 = *(long *)(param_4 + 0x40);
            if (lVar9 == 0) {
              uStack_180._4_4_ = fVar20;
              func_0x00f78af4();
              goto code_r0x014dc8b0;
            }
            if (*(uint *)(lVar9 + 0x18) <= uVar6) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar9 = *(long *)(*(long *)(lVar9 + 0x10) + lVar15 * 8 + 0x20);
            if (lVar9 == 0) {
              uStack_180._4_4_ = fVar20;
              func_0x00f78af4();
              goto code_r0x014dc8b0;
            }
            lVar9 = *(long *)(lVar9 + 0x28);
            if (lVar9 == 0) {
              uStack_180._4_4_ = fVar20;
              func_0x00f78af4();
              goto code_r0x014dc8b0;
            }
            if (*(uint *)(lVar9 + 0x18) <= uVar4) {
              uStack_180._4_4_ = fVar20;
              uVar14 = func_0x00f78b24();
              func_0x00f78ac0(uVar14,0);
              goto code_r0x014dc8b0;
            }
            if (*(int *)(lVar9 + uVar4 * 4 + 0x20) == *(int *)(lVar16 + 0x10)) {
              lVar9 = *(long *)(param_4 + 0x40);
              if (lVar9 == 0) {
                uStack_180._4_4_ = fVar20;
                func_0x00f78af4();
                goto code_r0x014dc8b0;
              }
              if (*(uint *)(lVar9 + 0x18) <= uVar6) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              lVar9 = *(long *)(*(long *)(lVar9 + 0x10) + lVar15 * 8 + 0x20);
              if (lVar9 == 0) {
                uStack_180._4_4_ = fVar20;
                func_0x00f78af4();
                goto code_r0x014dc8b0;
              }
              lVar9 = *(long *)(lVar9 + 0x40);
              if (lVar9 == 0) {
                uStack_180._4_4_ = fVar20;
                func_0x00f78af4();
                goto code_r0x014dc8b0;
              }
              if (*(uint *)(lVar9 + 0x18) <= uVar4) {
                uStack_180._4_4_ = fVar20;
                uVar14 = func_0x00f78b24();
                func_0x00f78ac0(uVar14,0);
                goto code_r0x014dc8b0;
              }
              lVar9 = *(long *)(lVar9 + uVar4 * 8 + 0x20);
              if (lVar9 == 0) {
                uStack_180._4_4_ = fVar20;
                func_0x00f78af4();
                goto code_r0x014dc8b0;
              }
              uVar5 = /*RacePolyLine$$TryGetClosestPoint*/ func_0x014d836c(param_1,param_2,param_3,lVar9,&uStack_188,&uStack_1a0,
                                      (long)&uStack_1a0 + 4,(long)&uStack_1a8 + 4,&uStack_1a8);
              if (((uVar5 & 1) != 0) &&
                 (fVar1 = (float)uStack_1a0, fVar8 = fVar18, ABS((float)uStack_1a0) < ABS(fVar18)))
              {
                lVar9 = *(long *)(param_4 + 0x40);
                if (lVar9 == 0) {
                  uStack_180._4_4_ = (float)uStack_1a0;
                  func_0x00f78af4();
                  goto code_r0x014dc8b0;
                }
                if (*(uint *)(lVar9 + 0x18) <= uVar6) {
                  /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                }
                lVar9 = *(long *)(*(long *)(lVar9 + 0x10) + lVar15 * 8 + 0x20);
                if (lVar9 == 0) {
                  uStack_180._4_4_ = fVar1;
                  func_0x00f78af4();
                  goto code_r0x014dc8b0;
                }
                lVar9 = *(long *)(lVar9 + 0x40);
                if (lVar9 == 0) {
                  uStack_180._4_4_ = fVar1;
                  func_0x00f78af4();
                  goto code_r0x014dc8b0;
                }
                if (*(uint *)(lVar9 + 0x18) <= uVar4) {
                  uStack_180._4_4_ = fVar1;
                  uVar14 = func_0x00f78b24();
                  func_0x00f78ac0(uVar14,0);
                  goto code_r0x014dc8b0;
                }
                lStack_b0 = *(long *)(lVar9 + uVar4 * 8 + 0x20);
                auStack_c4[0] = uStack_1a8._4_4_;
                uStack_b4 = (undefined4)uStack_1a8;
                fStack_b8 = uStack_1a0._4_4_;
                bVar11 = true;
                fVar8 = fVar1;
                fVar20 = fVar1;
                fVar18 = fVar1;
                uVar12 = uVar6;
              }
            }
            uVar4 = uVar4 + 1;
            lVar9 = *(long *)(param_4 + 0x40);
            if (lVar9 == 0) goto code_r0x014dc758;
          }
          uVar13 = uVar13 + 1;
          uVar6 = *(uint *)(lVar10 + 0x18);
        } while ((int)uVar13 < (int)uVar6);
      }
      uStack_180._4_4_ = fVar20;
      if (bVar11) {
        lVar9 = *(long *)(param_4 + 0x40);
        lStack_a8 = lVar16;
        if (lVar9 == 0) {
          func_0x00f78af4();
          goto code_r0x014dc8b0;
        }
        if (*(uint *)(lVar9 + 0x18) <= uVar12) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
      }
      else {
        lVar10 = *(long *)(lVar16 + 0x28);
        lStack_a0 = lVar16;
        if (lVar10 == 0) {
          func_0x00f78af4();
          goto code_r0x014dc8b0;
        }
        if (*(uint *)(lVar10 + 0x18) <= uVar17) {
          uVar14 = func_0x00f78b24();
          func_0x00f78ac0(uVar14,0);
          goto code_r0x014dc8b0;
        }
        lVar9 = *(long *)(param_4 + 0x40);
        if (lVar9 == 0) {
          func_0x00f78af4();
          goto code_r0x014dc8b0;
        }
        uVar12 = *(uint *)(lVar10 + (long)(int)uVar17 * 4 + 0x20);
        plVar7 = &lStack_a8;
        if (*(uint *)(lVar9 + 0x18) <= uVar12) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
      }
      *plVar7 = *(long *)(*(long *)(lVar9 + 0x10) + (long)(int)uVar12 * 8 + 0x20);
      if ((fStack_b8 < 20.0) || (lStack_b0 != 0)) goto code_r0x014dc718;
      func_0x00f78af4();
    }
  }
code_r0x014dc8b0:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x14dc8b4);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x14dc0d0 | Atlas.Gameplay.RaceSplineRootBehaviour.GetTrackCoords
// ============================================================

float Atlas_Gameplay_RaceSplineRootBehaviour__GetTrackCoords
                (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,long *param_5
                ,long *param_6,long *param_7,long *param_8,long *param_9,long *param_10,
                undefined4 *param_11,undefined4 *param_12,float *param_13)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  float fVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  
  if ((bRam0000000003eb4bc4 & 1) == 0) {
    func_0x00f78a20(0x3d3ba08);
    func_0x00f78a20(0x3d240a0);
    func_0x00f78a20(0x3d265d0);
    bRam0000000003eb4bc4 = 1;
  }
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  if (((*(ushort *)(/*Atlas.Gameplay.RaceSplineRootBehaviour_TypeInfo*/ lRam0000000003d240a0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.RaceSplineRootBehaviour_TypeInfo*/ lRam0000000003d240a0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar13 = **(undefined8 **)(/*Atlas.Gameplay.RaceSplineRootBehaviour_TypeInfo*/ lRam0000000003d240a0 + 0xb8);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar13,0);
  fVar18 = **(float **)(/*Unity.Mathematics.float2_TypeInfo*/ lRam0000000003d265d0 + 0xb8);
  lVar15 = *param_5;
  if (lVar15 == 0) {
    lVar15 = /*Atlas.Gameplay.RaceSplineRootBehaviour$$FindClosestKnot*/ func_0x014dce18(param_1,param_2,param_3,param_4);
  }
  uStack_a0._4_4_ = 3.4028235e+38;
  *param_10 = *param_7;
  *param_8 = 0;
  *param_9 = 0;
  *param_11 = 0xffffffff;
  *param_12 = 0xffffffff;
  *param_13 = 0.0;
  if (*param_7 != 0) {
    *param_9 = *param_5;
    *param_8 = *param_6;
    if (*param_7 == 0) {
      func_0x00f78af4();
    }
    else {
      iVar3 = /*RacePolyLine$$TryGetClosestPoint*/ func_0x014d836c(param_1,param_2,param_3,*param_7,&uStack_a8,(long)&uStack_a0 + 4,
                              param_13,param_11,param_12);
      if ((*param_13 < 20.0) || (*param_10 != 0)) {
        fVar7 = uStack_a0._4_4_;
        if (iVar3 == 0) {
          fVar7 = fVar18;
        }
        goto code_r0x014dc718;
      }
      func_0x00f78af4();
    }
    goto code_r0x014dc8b0;
  }
  fVar7 = fVar18;
  if (lVar15 == 0) {
code_r0x014dc718:
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$EndSample*/ func_0x03250f64(uVar13,0);
    return fVar7;
  }
  lVar9 = *(long *)(lVar15 + 0x40);
  if (lVar9 == 0) {
    func_0x00f78af4();
  }
  else {
    fVar17 = 3.4028235e+38;
    uVar6 = *(uint *)(lVar9 + 0x18);
    fVar18 = uStack_a0._4_4_;
    if ((int)uVar6 < 1) {
      uVar16 = 0;
      fVar7 = 3.4028235e+38;
    }
    else {
      uVar16 = 0;
      uVar11 = 0;
      fVar7 = 3.4028235e+38;
      do {
        if (uVar6 <= uVar11) {
          uStack_a0._4_4_ = fVar18;
          uVar13 = func_0x00f78b24();
          func_0x00f78ac0(uVar13,0);
          goto code_r0x014dc8b0;
        }
        lVar8 = *(long *)(lVar9 + (long)(int)uVar11 * 8 + 0x20);
        if (lVar8 == 0) {
          uStack_a0._4_4_ = fVar18;
          func_0x00f78af4();
          goto code_r0x014dc8b0;
        }
        uVar4 = /*RacePolyLine$$TryGetClosestPoint*/ func_0x014d836c(param_1,param_2,param_3,lVar8,&uStack_a8,&uStack_b0,
                                (long)&uStack_b0 + 4,(long)&uStack_b8 + 4,&uStack_b8);
        if (((uVar4 & 1) != 0) && (fVar7 = fVar17, ABS((float)uStack_b0) < ABS(fVar17))) {
          *param_10 = lVar8;
          *param_11 = uStack_b8._4_4_;
          *param_12 = (undefined4)uStack_b8;
          *param_13 = uStack_b0._4_4_;
          fVar7 = (float)uStack_b0;
          fVar18 = (float)uStack_b0;
          uVar16 = uVar11;
          fVar17 = (float)uStack_b0;
        }
        uVar11 = uVar11 + 1;
        uVar6 = *(uint *)(lVar9 + 0x18);
      } while ((int)uVar11 < (int)uVar6);
    }
    lVar9 = *(long *)(lVar15 + 0x30);
    uStack_a0._4_4_ = fVar18;
    if (lVar9 == 0) {
      func_0x00f78af4();
    }
    else {
      uVar6 = *(uint *)(lVar9 + 0x18);
      if ((int)uVar6 < 1) {
        bVar10 = false;
        uVar11 = 0xffffffff;
      }
      else {
        uVar12 = 0;
        bVar10 = false;
        uVar11 = 0xffffffff;
        do {
          if (uVar6 <= uVar12) {
            uStack_a0._4_4_ = fVar18;
            uVar13 = func_0x00f78b24();
            func_0x00f78ac0(uVar13,0);
            goto code_r0x014dc8b0;
          }
          lVar8 = *(long *)(param_4 + 0x40);
          if (lVar8 == 0) {
code_r0x014dc758:
            uStack_a0._4_4_ = fVar18;
            func_0x00f78af4();
            goto code_r0x014dc8b0;
          }
          uVar4 = 0;
          uVar6 = *(uint *)(lVar9 + (long)(int)uVar12 * 4 + 0x20);
          lVar14 = (long)(int)uVar6;
          while( true ) {
            if (*(uint *)(lVar8 + 0x18) <= uVar6) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar8 = *(long *)(*(long *)(lVar8 + 0x10) + lVar14 * 8 + 0x20);
            if (lVar8 == 0) {
              uStack_a0._4_4_ = fVar18;
              func_0x00f78af4();
              goto code_r0x014dc8b0;
            }
            lVar8 = *(long *)(lVar8 + 0x28);
            if (lVar8 == 0) {
              uStack_a0._4_4_ = fVar18;
              func_0x00f78af4();
              goto code_r0x014dc8b0;
            }
            if ((long)*(int *)(lVar8 + 0x18) <= (long)uVar4) break;
            lVar8 = *(long *)(param_4 + 0x40);
            if (lVar8 == 0) {
              uStack_a0._4_4_ = fVar18;
              func_0x00f78af4();
              goto code_r0x014dc8b0;
            }
            if (*(uint *)(lVar8 + 0x18) <= uVar6) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar8 = *(long *)(*(long *)(lVar8 + 0x10) + lVar14 * 8 + 0x20);
            if (lVar8 == 0) {
              uStack_a0._4_4_ = fVar18;
              func_0x00f78af4();
              goto code_r0x014dc8b0;
            }
            lVar8 = *(long *)(lVar8 + 0x28);
            if (lVar8 == 0) {
              uStack_a0._4_4_ = fVar18;
              func_0x00f78af4();
              goto code_r0x014dc8b0;
            }
            if (*(uint *)(lVar8 + 0x18) <= uVar4) {
              uStack_a0._4_4_ = fVar18;
              uVar13 = func_0x00f78b24();
              func_0x00f78ac0(uVar13,0);
              goto code_r0x014dc8b0;
            }
            if (*(int *)(lVar8 + uVar4 * 4 + 0x20) == *(int *)(lVar15 + 0x10)) {
              lVar8 = *(long *)(param_4 + 0x40);
              if (lVar8 == 0) {
                uStack_a0._4_4_ = fVar18;
                func_0x00f78af4();
                goto code_r0x014dc8b0;
              }
              if (*(uint *)(lVar8 + 0x18) <= uVar6) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              lVar8 = *(long *)(*(long *)(lVar8 + 0x10) + lVar14 * 8 + 0x20);
              if (lVar8 == 0) {
                uStack_a0._4_4_ = fVar18;
                func_0x00f78af4();
                goto code_r0x014dc8b0;
              }
              lVar8 = *(long *)(lVar8 + 0x40);
              if (lVar8 == 0) {
                uStack_a0._4_4_ = fVar18;
                func_0x00f78af4();
                goto code_r0x014dc8b0;
              }
              if (*(uint *)(lVar8 + 0x18) <= uVar4) {
                uStack_a0._4_4_ = fVar18;
                uVar13 = func_0x00f78b24();
                func_0x00f78ac0(uVar13,0);
                goto code_r0x014dc8b0;
              }
              lVar8 = *(long *)(lVar8 + uVar4 * 8 + 0x20);
              if (lVar8 == 0) {
                uStack_a0._4_4_ = fVar18;
                func_0x00f78af4();
                goto code_r0x014dc8b0;
              }
              uVar5 = /*RacePolyLine$$TryGetClosestPoint*/ func_0x014d836c(param_1,param_2,param_3,lVar8,&uStack_a8,&uStack_c0,
                                      (long)&uStack_c0 + 4,(long)&uStack_c8 + 4,&uStack_c8);
              if (((uVar5 & 1) != 0) &&
                 (fVar1 = (float)uStack_c0, fVar7 = fVar17, ABS((float)uStack_c0) < ABS(fVar17))) {
                lVar8 = *(long *)(param_4 + 0x40);
                if (lVar8 == 0) {
                  uStack_a0._4_4_ = (float)uStack_c0;
                  func_0x00f78af4();
                  goto code_r0x014dc8b0;
                }
                if (*(uint *)(lVar8 + 0x18) <= uVar6) {
                  /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                }
                lVar8 = *(long *)(*(long *)(lVar8 + 0x10) + lVar14 * 8 + 0x20);
                if (lVar8 == 0) {
                  uStack_a0._4_4_ = fVar1;
                  func_0x00f78af4();
                  goto code_r0x014dc8b0;
                }
                lVar8 = *(long *)(lVar8 + 0x40);
                if (lVar8 == 0) {
                  uStack_a0._4_4_ = fVar1;
                  func_0x00f78af4();
                  goto code_r0x014dc8b0;
                }
                if (*(uint *)(lVar8 + 0x18) <= uVar4) {
                  uStack_a0._4_4_ = fVar1;
                  uVar13 = func_0x00f78b24();
                  func_0x00f78ac0(uVar13,0);
                  goto code_r0x014dc8b0;
                }
                *param_10 = *(long *)(lVar8 + uVar4 * 8 + 0x20);
                *param_11 = uStack_c8._4_4_;
                *param_12 = (undefined4)uStack_c8;
                *param_13 = uStack_c0._4_4_;
                bVar10 = true;
                fVar7 = fVar1;
                fVar18 = fVar1;
                fVar17 = fVar1;
                uVar11 = uVar6;
              }
            }
            uVar4 = uVar4 + 1;
            lVar8 = *(long *)(param_4 + 0x40);
            if (lVar8 == 0) goto code_r0x014dc758;
          }
          uVar12 = uVar12 + 1;
          uVar6 = *(uint *)(lVar9 + 0x18);
        } while ((int)uVar12 < (int)uVar6);
      }
      uStack_a0._4_4_ = fVar18;
      if (bVar10) {
        *param_9 = lVar15;
        lVar9 = *(long *)(param_4 + 0x40);
        if (lVar9 == 0) {
          func_0x00f78af4();
          goto code_r0x014dc8b0;
        }
        if (*(uint *)(lVar9 + 0x18) <= uVar11) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
      }
      else {
        *param_8 = lVar15;
        lVar15 = *(long *)(lVar15 + 0x28);
        if (lVar15 == 0) {
          func_0x00f78af4();
          goto code_r0x014dc8b0;
        }
        if (*(uint *)(lVar15 + 0x18) <= uVar16) {
          uVar13 = func_0x00f78b24();
          func_0x00f78ac0(uVar13,0);
          goto code_r0x014dc8b0;
        }
        lVar9 = *(long *)(param_4 + 0x40);
        if (lVar9 == 0) {
          func_0x00f78af4();
          goto code_r0x014dc8b0;
        }
        uVar11 = *(uint *)(lVar15 + (long)(int)uVar16 * 4 + 0x20);
        param_8 = param_9;
        if (*(uint *)(lVar9 + 0x18) <= uVar11) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
      }
      *param_8 = *(long *)(*(long *)(lVar9 + 0x10) + (long)(int)uVar11 * 8 + 0x20);
      if ((*param_13 < 20.0) || (*param_10 != 0)) goto code_r0x014dc718;
      func_0x00f78af4();
    }
  }
code_r0x014dc8b0:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x14dc8b4);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x14dc990 | Atlas.Gameplay.RaceSplineRootBehaviour.TryGetPointOnTrack
// ============================================================

long Atlas_Gameplay_RaceSplineRootBehaviour__TryGetPointOnTrack
               (float param_1,float param_2,float param_3,long param_4,long param_5,long param_6,
               undefined8 *param_7,long param_8,long *param_9,long *param_10,int param_11)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  int extraout_w1;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float extraout_s0;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  uint uStack_94;
  
  if ((bRam0000000003eb4bc3 & 1) == 0) {
    func_0x00f78a20(0x3d3ba08);
    func_0x00f78a20(0x3d265d8);
    bRam0000000003eb4bc3 = 1;
  }
  uStack_94 = 0;
  uVar16 = *(undefined4 *)(*(undefined8 **)(/*Unity.Mathematics.float3_TypeInfo*/ lRam0000000003d265d8 + 0xb8) + 1);
  uVar22 = **(undefined8 **)(/*Unity.Mathematics.float3_TypeInfo*/ lRam0000000003d265d8 + 0xb8);
  *param_7 = uVar22;
  *(undefined4 *)(param_7 + 1) = uVar16;
  if (*param_9 == param_8) {
    *param_9 = 0;
    *param_10 = 0;
  }
  if (param_8 == 0) {
    if ((param_5 != 0) && (lVar6 = *(long *)(param_5 + 0x28), lVar6 != 0)) {
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (0 < (int)uVar1) {
        uVar10 = 0;
        do {
          if (uVar1 == uVar10) goto code_r0x014dce08;
          if (param_6 == 0) goto code_r0x014dce14;
          if (*(int *)(lVar6 + (long)(int)uVar10 * 4 + 0x20) == *(int *)(param_6 + 0x10)) {
            lVar6 = *(long *)(param_5 + 0x40);
            if (lVar6 == 0) goto code_r0x014dce14;
            if (*(uint *)(lVar6 + 0x18) <= uVar10) goto code_r0x014dce08;
            param_8 = *(long *)(lVar6 + (long)(int)uVar10 * 8 + 0x20);
            if (param_8 == 0) {
              return 0;
            }
            goto LAB_014dcacc;
          }
          uVar10 = uVar10 + 1;
        } while (uVar1 != uVar10);
      }
      return 0;
    }
    goto code_r0x014dce14;
  }
LAB_014dcacc:
  fVar27 = *(float *)(param_8 + 0x108);
  if (param_1 <= fVar27) {
    if ((*param_10 == 0) || (lVar6 = *param_9, lVar6 == 0)) {
code_r0x014dcc30:
      /*RacePolyLine$$TryGetPointDistanceAlong*/ func_0x014d8610(param_1,param_8,0,param_7,&uStack_94);
      lVar6 = *(long *)(param_8 + 0xd0);
      if (lVar6 == 0) goto code_r0x014dce14;
      lVar7 = (long)(int)uStack_94;
      uVar10 = *(uint *)(lVar6 + 0x18);
      uVar1 = uVar10 - 1;
      if ((int)(uStack_94 + 1) <= (int)uVar1) {
        uVar1 = uStack_94 + 1;
      }
      if ((int)uVar1 < 1) {
        uVar1 = 0;
      }
      uVar8 = (ulong)uVar1;
      lVar15 = *(long *)(param_8 + 0xf0);
      if (lVar15 == 0) goto code_r0x014dce14;
      if ((((uStack_94 < *(uint *)(lVar15 + 0x18)) && (uVar1 < *(uint *)(lVar15 + 0x18))) &&
          (uStack_94 < uVar10)) && (uVar1 < uVar10)) {
        lVar12 = *(long *)(param_8 + 0xe0);
        if (lVar12 == 0) goto code_r0x014dce14;
        if ((uStack_94 < *(uint *)(lVar12 + 0x18)) && (uVar1 < *(uint *)(lVar12 + 0x18))) {
          lVar13 = *(long *)(param_8 + 0xe8);
          if (lVar13 == 0) goto code_r0x014dce14;
          if ((uStack_94 < *(uint *)(lVar13 + 0x18)) && (uVar1 < *(uint *)(lVar13 + 0x18))) {
            fVar27 = *(float *)(lVar15 + 0x20 + lVar7 * 4);
            fVar17 = (param_1 - fVar27) / (*(float *)(lVar15 + 0x20 + uVar8 * 4) - fVar27);
            puVar14 = (undefined8 *)(lVar6 + 0x20 + lVar7 * 0xc);
            fVar20 = *(float *)(puVar14 + 1);
            puVar9 = (undefined8 *)(lVar6 + 0x20 + uVar8 * 0xc);
            fVar23 = *(float *)(puVar9 + 1);
            uVar22 = *puVar14;
            uVar26 = *puVar9;
            fVar24 = (float)uVar22;
            fVar25 = (float)((ulong)uVar22 >> 0x20);
            fVar21 = *(float *)(lVar12 + 0x20 + lVar7 * 4);
            fVar27 = *(float *)(lVar13 + 0x20 + lVar7 * 4);
            bVar3 = 0.0 <= param_2;
            fVar27 = fVar27 + fVar17 * (*(float *)(lVar13 + 0x20 + uVar8 * 4) - fVar27);
            if (param_2 == 0.0 || !bVar3) {
              fVar27 = fVar21 + fVar17 * (*(float *)(lVar12 + 0x20 + uVar8 * 4) - fVar21);
            }
            fVar18 = 1.0;
            fVar21 = fVar18;
            if (param_2 == 0.0 || !bVar3) {
              fVar21 = 0.0;
            }
            if (bVar3) {
              fVar18 = 0.0;
            }
            param_2 = ABS(param_2);
            iVar4 = /*System.Single$$IsNaN*/ func_0x029ba610(param_2,0);
            if (iVar4 == 0 && param_2 <= fVar27) {
              fVar27 = param_2;
            }
            iVar4 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar27,0);
            fVar19 = 0.0;
            if (iVar4 == 0 && 0.0 <= fVar27) {
              fVar19 = fVar27;
            }
            fVar19 = (fVar21 - fVar18) * fVar19;
            *param_7 = CONCAT44((float)((ulong)*param_7 >> 0x20) +
                                (fVar25 + ((float)((ulong)uVar26 >> 0x20) - fVar25) * fVar17) *
                                fVar19,(float)*param_7 +
                                       (fVar24 + ((float)uVar26 - fVar24) * fVar17) * fVar19);
            *(float *)(param_7 + 1) =
                 *(float *)(param_7 + 1) + (fVar20 + fVar17 * (fVar23 - fVar20)) * fVar19;
            return 1;
          }
        }
      }
    }
    else {
      lVar7 = *(long *)(lVar6 + 0x110);
      if (lVar7 == 0) goto code_r0x014dce14;
      if (*(int *)(lVar7 + 0x18) != 0) {
        if ((*(long *)(lVar7 + 0x20) == 0) || (lVar15 = *(long *)(param_8 + 0x110), lVar15 == 0))
        goto code_r0x014dce14;
        if (*(int *)(lVar15 + 0x18) != 0) {
          if (*(long *)(lVar15 + 0x20) == 0) goto code_r0x014dce14;
          param_8 = lVar6;
          if (*(int *)(*(long *)(lVar7 + 0x20) + 0x38) != *(int *)(*(long *)(lVar15 + 0x20) + 0x38))
          {
            param_1 = 1.0;
          }
          goto code_r0x014dcc30;
        }
      }
    }
  }
  else {
    param_8 = *param_9;
    if (param_8 != 0) {
      if ((param_6 == 0) || (lVar6 = *(long *)(param_6 + 0x40), lVar6 == 0)) goto code_r0x014dce14;
      iVar4 = *(int *)(lVar6 + 0x18);
      if (0 < iVar4) {
        iVar11 = 0;
        do {
          if (iVar4 == iVar11) goto code_r0x014dce08;
          if (*(long *)(lVar6 + (long)iVar11 * 8 + 0x20) == param_8) goto code_r0x014dcc18;
          iVar11 = iVar11 + 1;
        } while (iVar4 != iVar11);
      }
    }
    if (param_11 == 0) {
      if (param_6 == 0) goto code_r0x014dce14;
      lVar6 = 0;
    }
    else {
      if (param_6 == 0) goto code_r0x014dce14;
      iVar4 = Atlas_Gameplay_RaceKnot__RandomNextKnotIndex(param_6);
      lVar6 = (long)iVar4;
    }
    lVar7 = *(long *)(param_6 + 0x28);
    if (lVar7 == 0) goto code_r0x014dce14;
    if ((uint)lVar6 < *(uint *)(lVar7 + 0x18)) {
      lVar15 = *(long *)(param_4 + 0x40);
      if (lVar15 == 0) goto code_r0x014dce14;
      uVar1 = *(uint *)(lVar7 + lVar6 * 4 + 0x20);
      if (*(uint *)(lVar15 + 0x18) <= uVar1) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      *param_10 = *(long *)(*(long *)(lVar15 + 0x10) + (long)(int)uVar1 * 8 + 0x20);
      lVar7 = *(long *)(param_6 + 0x40);
      if (lVar7 == 0) goto code_r0x014dce14;
      if ((uint)lVar6 < *(uint *)(lVar7 + 0x18)) {
        param_8 = *(long *)(lVar7 + lVar6 * 8 + 0x20);
        *param_9 = param_8;
code_r0x014dcc18:
        if (param_8 == 0) goto code_r0x014dce14;
        fVar27 = param_1 - fVar27;
        param_1 = *(float *)(param_8 + 0x108);
        if (fVar27 <= *(float *)(param_8 + 0x108)) {
          param_1 = fVar27;
        }
        goto code_r0x014dcc30;
      }
    }
  }
code_r0x014dce08:
  uVar26 = func_0x00f78b24();
  func_0x00f78ac0(uVar26,0);
code_r0x014dce14:
  fVar27 = (float)uVar22;
  lVar6 = func_0x00f78af4();
  if ((bRam0000000003eb4bc5 & 1) == 0) {
    func_0x00f78a20(0x3d32de0);
    func_0x00f78a20(0x3d32de8);
    func_0x00f78a20(0x3d32df0);
    func_0x00f78a20(0x3d3b9f8);
    bRam0000000003eb4bc5 = 1;
  }
  if (*(long *)(lVar6 + 0x40) == 0) {
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar5 = (long *)___cxa_begin_catch();
      lVar6 = *plVar5;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_120,*param_10);
      if (lVar6 == 0) {
        return 0x3eb4000;
      }
      func_0x00f78ac0(lVar6,0);
    }
    lVar6 = __Unwind_Resume();
    return lVar6;
  }
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_138,*(long *)(lVar6 + 0x40),uRam0000000003d3b9f8);
  uStack_118 = uStack_130;
  uStack_120 = uStack_138;
  lStack_110 = lStack_128;
  fVar17 = 3.4028235e+38;
  lVar6 = 0;
  while( true ) {
    uVar8 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_120,uRam0000000003d32de8);
    if ((uVar8 & 1) == 0) {
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_120,uRam0000000003d32de0);
      return lVar6;
    }
    if (lStack_110 == 0) break;
    fVar20 = *(float *)(lStack_110 + 0x18) - extraout_s0;
    fVar21 = *(float *)(lStack_110 + 0x1c) - fVar27;
    fVar23 = *(float *)(lStack_110 + 0x20) - param_3;
    fVar20 = fVar23 * fVar23 + fVar20 * fVar20 + fVar21 * fVar21;
    lVar7 = lStack_110;
    if (fVar17 <= fVar20) {
      lVar7 = lVar6;
    }
    lVar15 = *(long *)(lStack_110 + 0x40);
    if (lVar15 == 0) {
      func_0x00f78af4();
      goto code_r0x014dd074;
    }
    if (fVar17 <= fVar20) {
      fVar20 = fVar17;
    }
    fVar17 = fVar20;
    iVar4 = *(int *)(lVar15 + 0x18);
    lVar6 = lVar7;
    if (0 < iVar4) {
      iVar11 = 0;
      do {
        if (iVar11 == iVar4) {
          uVar22 = func_0x00f78b24();
          func_0x00f78ac0(uVar22,0);
          goto code_r0x014dd074;
        }
        lVar6 = *(long *)(lVar15 + (long)iVar11 * 8 + 0x20);
        if (lVar6 == 0) {
          func_0x00f78af4();
          goto code_r0x014dd074;
        }
        uVar1 = *(int *)(lVar6 + 0x18) / 0x14;
        if (*(int *)(lVar6 + 0x18) + 0x13U < 0x27) {
          uVar1 = 1;
        }
        lVar12 = *(long *)(lVar6 + 0x10);
        lVar6 = 0x13;
        uVar10 = uVar1;
        do {
          if (lVar12 == 0) {
            func_0x00f78af4();
            goto code_r0x014dd074;
          }
          if ((int)*(uint *)(lVar12 + 0x18) <= (int)uVar10) break;
          if (*(uint *)(lVar12 + 0x18) <= uVar10) {
            uVar22 = func_0x00f78b24();
            func_0x00f78ac0(uVar22,0);
            goto code_r0x014dd074;
          }
          lVar13 = lVar12 + (long)(int)uVar10 * 0xc;
          fVar20 = *(float *)(lVar13 + 0x20) - extraout_s0;
          fVar21 = *(float *)(lVar13 + 0x24) - fVar27;
          fVar23 = *(float *)(lVar13 + 0x28) - param_3;
          fVar20 = fVar23 * fVar23 + fVar20 * fVar20 + fVar21 * fVar21;
          lVar13 = lStack_110;
          if (fVar17 <= fVar20) {
            fVar20 = fVar17;
            lVar13 = lVar7;
          }
          lVar7 = lVar13;
          fVar17 = fVar20;
          uVar10 = uVar10 + uVar1;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
        iVar11 = iVar11 + 1;
        lVar6 = lVar7;
      } while (iVar11 != iVar4);
    }
  }
  func_0x00f78af4();
code_r0x014dd074:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x14dd078);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x14dce18 | Atlas.Gameplay.RaceSplineRootBehaviour.FindClosestKnot
// ============================================================

long Atlas_Gameplay_RaceSplineRootBehaviour__FindClosestKnot
               (float param_1,float param_2,float param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  int extraout_w1;
  float fVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  undefined8 *unaff_x21;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  if ((bRam0000000003eb4bc5 & 1) == 0) {
    func_0x00f78a20(0x3d32de0);
    func_0x00f78a20(0x3d32de8);
    func_0x00f78a20(0x3d32df0);
    func_0x00f78a20(0x3d3b9f8);
    bRam0000000003eb4bc5 = 1;
  }
  if (*(long *)(param_4 + 0x40) == 0) {
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar6 = (long *)___cxa_begin_catch();
      lVar10 = *plVar6;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_80,*unaff_x21);
      if (lVar10 == 0) {
        return 0x3eb4000;
      }
      func_0x00f78ac0(lVar10,0);
    }
    lVar10 = __Unwind_Resume();
    return lVar10;
  }
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_98,*(long *)(param_4 + 0x40),uRam0000000003d3b9f8);
  uStack_78 = uStack_90;
  uStack_80 = uStack_98;
  lStack_70 = lStack_88;
  fVar7 = 3.4028235e+38;
  lVar10 = 0;
  while( true ) {
    uVar4 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_80,uRam0000000003d32de8);
    if ((uVar4 & 1) == 0) {
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_80,uRam0000000003d32de0);
      return lVar10;
    }
    if (lStack_70 == 0) break;
    fVar15 = *(float *)(lStack_70 + 0x18) - param_1;
    fVar16 = *(float *)(lStack_70 + 0x1c) - param_2;
    fVar17 = *(float *)(lStack_70 + 0x20) - param_3;
    fVar15 = fVar17 * fVar17 + fVar15 * fVar15 + fVar16 * fVar16;
    lVar14 = lStack_70;
    if (fVar7 <= fVar15) {
      lVar14 = lVar10;
    }
    lVar8 = *(long *)(lStack_70 + 0x40);
    if (lVar8 == 0) {
      func_0x00f78af4();
      goto code_r0x014dd074;
    }
    if (fVar7 <= fVar15) {
      fVar15 = fVar7;
    }
    fVar7 = fVar15;
    iVar2 = *(int *)(lVar8 + 0x18);
    lVar10 = lVar14;
    if (0 < iVar2) {
      iVar9 = 0;
      do {
        if (iVar9 == iVar2) {
          uVar5 = func_0x00f78b24();
          func_0x00f78ac0(uVar5,0);
          goto code_r0x014dd074;
        }
        lVar10 = *(long *)(lVar8 + (long)iVar9 * 8 + 0x20);
        if (lVar10 == 0) {
          func_0x00f78af4();
          goto code_r0x014dd074;
        }
        uVar1 = *(int *)(lVar10 + 0x18) / 0x14;
        if (*(int *)(lVar10 + 0x18) + 0x13U < 0x27) {
          uVar1 = 1;
        }
        lVar11 = *(long *)(lVar10 + 0x10);
        lVar10 = 0x13;
        uVar12 = uVar1;
        do {
          if (lVar11 == 0) {
            func_0x00f78af4();
            goto code_r0x014dd074;
          }
          if ((int)*(uint *)(lVar11 + 0x18) <= (int)uVar12) break;
          if (*(uint *)(lVar11 + 0x18) <= uVar12) {
            uVar5 = func_0x00f78b24();
            func_0x00f78ac0(uVar5,0);
            goto code_r0x014dd074;
          }
          lVar13 = lVar11 + (long)(int)uVar12 * 0xc;
          fVar15 = *(float *)(lVar13 + 0x20) - param_1;
          fVar16 = *(float *)(lVar13 + 0x24) - param_2;
          fVar17 = *(float *)(lVar13 + 0x28) - param_3;
          fVar15 = fVar17 * fVar17 + fVar15 * fVar15 + fVar16 * fVar16;
          lVar13 = lStack_70;
          if (fVar7 <= fVar15) {
            fVar15 = fVar7;
            lVar13 = lVar14;
          }
          lVar14 = lVar13;
          fVar7 = fVar15;
          uVar12 = uVar12 + uVar1;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
        iVar9 = iVar9 + 1;
        lVar10 = lVar14;
      } while (iVar9 != iVar2);
    }
  }
  func_0x00f78af4();
code_r0x014dd074:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x14dd078);
  (*pcVar3)();
}



// ============================================================
// RVA: 0x14dd0cc | Atlas.Gameplay.RaceSplineRootBehaviour.GetDistanceAtTrackCoord
// ============================================================

float Atlas_Gameplay_RaceSplineRootBehaviour__GetDistanceAtTrackCoord
                (undefined1 param_1 [16],float param_2,long param_3)

{
  return param_2 * *(float *)(param_3 + 0x58) + *(float *)(param_3 + 0x58) * 0.0;
}



// ============================================================
// RVA: 0x14dd0e4 | Atlas.Gameplay.RaceSplineRootBehaviour.GetDistanceAtTrackCoord
// ============================================================

float Atlas_Gameplay_RaceSplineRootBehaviour__GetDistanceAtTrackCoord
                (undefined1 param_1 [16],float param_2,long param_3,int param_4)

{
  return param_2 * *(float *)(param_3 + 0x58) + *(float *)(param_3 + 0x58) * (float)param_4;
}



// ============================================================
// RVA: 0x14dd0fc | Atlas.Gameplay.RaceSplineRootBehaviour.OnDrawGizmosSelected
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_RaceSplineRootBehaviour__OnDrawGizmosSelected
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  int extraout_w1;
  uint uVar9;
  int iVar10;
  undefined8 *unaff_x21;
  long lVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  if ((bRam0000000003eb4bc6 & 1) == 0) {
    func_0x00f78a20(0x3d32de0);
    func_0x00f78a20(0x3d32de8);
    func_0x00f78a20(0x3d32df0);
    func_0x00f78a20(0x3d3b9f8);
    func_0x00f78a20(0x3d3ba08);
    bRam0000000003eb4bc6 = 1;
  }
  uStack_90 = 0;
  uStack_88 = 0;
  lStack_80 = 0;
  if (*(long *)(param_5 + 0x40) == 0) {
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar8 = (long *)___cxa_begin_catch();
      lVar13 = *plVar8;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_90,*unaff_x21);
      if (lVar13 == 0) {
        return;
      }
      func_0x00f78ac0(lVar13,0);
    }
    lVar13 = __Unwind_Resume();
    if ((bRam0000000003eb4bc7 & 1) == 0) {
      func_0x00f78a20(0x3d32de0);
      func_0x00f78a20(0x3d32de8);
      func_0x00f78a20(0x3d32df0);
      func_0x00f78a20(0x3d3b9f8);
      bRam0000000003eb4bc7 = 1;
    }
    if (*(long *)(lVar13 + 0x40) != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_168,*(long *)(lVar13 + 0x40),uRam0000000003d3b9f8);
      uVar20 = _UNK_033f83fc;
      uStack_148 = uStack_160;
      uStack_150 = uStack_168;
      lStack_140 = lStack_158;
      while (uVar6 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_150,uRam0000000003d32de8), (uVar6 & 1) != 0) {
        if (lStack_140 == 0) {
          func_0x00f78af4();
code_r0x014dd774:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x14dd778);
          (*pcVar5)();
        }
        lVar12 = *(long *)(lStack_140 + 0x40);
        if (lVar12 == 0) {
          func_0x00f78af4();
          goto code_r0x014dd774;
        }
        uVar9 = *(uint *)(lVar12 + 0x18);
        if (0 < (int)uVar9) {
          uVar14 = 0;
          uVar17 = param_2;
          do {
            if (uVar9 <= uVar14) {
              uVar7 = func_0x00f78b24();
              func_0x00f78ac0(uVar7,0);
              goto code_r0x014dd774;
            }
            lVar15 = *(long *)(lVar12 + (long)(int)uVar14 * 8 + 0x20);
            param_2 = /*UnityEngine.Color$$get_black*/ func_0x032235bc(0);
            if (lVar15 == 0) {
              func_0x00f78af4();
              goto code_r0x014dd774;
            }
            /*RacePolyLine$$DrawGizmosPoints*/ func_0x014d7f68(uVar20,param_2,uVar17,param_3,param_4,lVar15);
            param_4 = param_3;
            /*UnityEngine.Color$$get_white*/ func_0x032235a8(0);
            param_3 = uVar17;
            /*RacePolyLine$$DrawGizmosLines*/ func_0x014d80f4(lVar15);
            uVar14 = uVar14 + 1;
            uVar9 = *(uint *)(lVar12 + 0x18);
            uVar17 = param_2;
          } while ((int)uVar14 < (int)uVar9);
        }
      }
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_150,uRam0000000003d32de0);
      if (*(char *)(lVar13 + 0x5c) != '\0') {
        /*UnityEngine.Color$$get_green*/ func_0x03223580(0);
        /*UnityEngine.Gizmos$$set_color*/ func_0x0322fbcc(0);
        iVar10 = *(int *)(lVar13 + 0x88);
        if (0 < iVar10) {
          lVar12 = 0;
          do {
            if (*(char *)(*(long *)(lVar13 + 0x80) + lVar12) != '\0') {
              lVar15 = *(long *)(lVar13 + 0x70) + lVar12 * 0x20;
              iVar3 = *(int *)(lVar15 + 0xc);
              iVar4 = *(int *)(lVar15 + 0x10);
              if (iVar3 < iVar4) {
                lVar11 = 0;
                lVar15 = (long)iVar3 * 0x70;
                puVar1 = (undefined4 *)(*(long *)(lVar13 + 0xe0) + lVar15);
                uVar20 = puVar1[1];
                uVar17 = *puVar1;
                uVar21 = puVar1[2];
                uVar24 = *puVar1;
                uVar16 = puVar1[1];
                uVar18 = puVar1[2];
                while( true ) {
                  uVar22 = uVar21;
                  uVar23 = uVar17;
                  uVar19 = uVar20;
                  /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(uVar23,uVar19,uVar22,0);
                  /*UnityEngine.Gizmos$$DrawSphere*/ func_0x0322f8e8(0);
                  if (lVar11 != 0) {
                    uVar21 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(uVar24,uVar16,uVar18,0);
                    uVar20 = uVar19;
                    uVar17 = uVar22;
                    uVar24 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(uVar23,uVar19,uVar22,0);
                    /*UnityEngine.Gizmos$$DrawLine*/ func_0x0322f78c(uVar21,uVar16,uVar18,uVar24,uVar20,uVar17,0);
                  }
                  if ((iVar3 - iVar4) + 1 == (int)lVar11) break;
                  lVar2 = *(long *)(lVar13 + 0xe0) + lVar15;
                  lVar11 = lVar11 + -1;
                  lVar15 = lVar15 + 0x70;
                  uVar20 = *(undefined4 *)(lVar2 + 0x74);
                  uVar17 = *(undefined4 *)(lVar2 + 0x70);
                  uVar21 = *(undefined4 *)(lVar2 + 0x78);
                  uVar24 = uVar23;
                  uVar16 = uVar19;
                  uVar18 = uVar22;
                }
                iVar10 = *(int *)(lVar13 + 0x88);
              }
            }
            lVar12 = lVar12 + 1;
          } while (lVar12 < iVar10);
        }
      }
    }
    return;
  }
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_a8,*(long *)(param_5 + 0x40),uRam0000000003d3b9f8);
  uVar20 = _UNK_033f82c4;
  uStack_88 = uStack_a0;
  uStack_90 = uStack_a8;
  lStack_80 = lStack_98;
  while( true ) {
    uVar6 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_90,uRam0000000003d32de8);
    lVar13 = lStack_80;
    if ((uVar6 & 1) == 0) {
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_90,uRam0000000003d32de0);
      return;
    }
    if (lStack_80 == 0) break;
    if (*(int *)(lStack_80 + 0x10) == 0) {
      /*UnityEngine.Color$$get_red*/ func_0x0322356c(0);
    }
    else {
      /*UnityEngine.Color$$get_blue*/ func_0x03223594(0);
    }
    /*UnityEngine.Gizmos$$set_color*/ func_0x0322fbcc(0);
    uVar17 = *(undefined4 *)(lVar13 + 0x1c);
    uVar21 = *(undefined4 *)(lVar13 + 0x20);
    /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar13 + 0x18),uVar17,uVar21,0);
    uVar24 = 0x3f800000;
    /*UnityEngine.Gizmos$$DrawSphere*/ func_0x0322f8e8(0);
    /*UnityEngine.Color$$get_magenta*/ func_0x03223600(0);
    /*UnityEngine.Gizmos$$set_color*/ func_0x0322fbcc(0);
    lVar12 = *(long *)(lVar13 + 0x28);
    if (lVar12 == 0) {
      func_0x00f78af4();
      goto code_r0x014dd3e8;
    }
    uVar9 = *(uint *)(lVar12 + 0x18);
    if (0 < (int)uVar9) {
      uVar14 = 0;
      do {
        if (uVar9 <= uVar14) {
          uVar7 = func_0x00f78b24();
          func_0x00f78ac0(uVar7,0);
          goto code_r0x014dd3e8;
        }
        uVar9 = *(uint *)(lVar12 + (long)(int)uVar14 * 4 + 0x20);
        uVar17 = *(undefined4 *)(lVar13 + 0x1c);
        uVar21 = *(undefined4 *)(lVar13 + 0x20);
        uVar16 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar13 + 0x18),uVar17,uVar21,0);
        lVar15 = *(long *)(param_5 + 0x40);
        if (lVar15 == 0) {
          func_0x00f78af4();
          goto code_r0x014dd3e8;
        }
        if (*(uint *)(lVar15 + 0x18) <= uVar9) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar15 = *(long *)(*(long *)(lVar15 + 0x10) + (long)(int)uVar9 * 8 + 0x20);
        if (lVar15 == 0) {
          func_0x00f78af4();
          goto code_r0x014dd3e8;
        }
        uVar18 = *(undefined4 *)(lVar15 + 0x1c);
        uVar22 = *(undefined4 *)(lVar15 + 0x20);
        uVar24 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar15 + 0x18),uVar18,uVar22,0);
        /*UnityEngine.Gizmos$$DrawLine*/ func_0x0322f78c(uVar16,uVar17,uVar21,uVar24,uVar18,uVar22,0);
        /*UnityEngine.Color$$get_cyan*/ func_0x032235ec(0);
        /*UnityEngine.Gizmos$$set_color*/ func_0x0322fbcc(0);
        uVar14 = uVar14 + 1;
        uVar9 = *(uint *)(lVar12 + 0x18);
      } while ((int)uVar14 < (int)uVar9);
    }
    lVar13 = *(long *)(lVar13 + 0x40);
    if (lVar13 == 0) {
      func_0x00f78af4();
      goto code_r0x014dd3e8;
    }
    uVar9 = *(uint *)(lVar13 + 0x18);
    if (0 < (int)uVar9) {
      uVar14 = 0;
      do {
        if (uVar9 <= uVar14) {
          uVar7 = func_0x00f78b24();
          func_0x00f78ac0(uVar7,0);
          goto code_r0x014dd3e8;
        }
        lVar12 = *(long *)(lVar13 + (long)(int)uVar14 * 8 + 0x20);
        uVar16 = /*UnityEngine.Color$$get_black*/ func_0x032235bc(0);
        if (lVar12 == 0) {
          func_0x00f78af4();
          goto code_r0x014dd3e8;
        }
        /*RacePolyLine$$DrawGizmosPoints*/ func_0x014d7f68(uVar20,uVar16,uVar17,uVar21,uVar24,lVar12);
        uVar24 = uVar21;
        /*UnityEngine.Color$$get_white*/ func_0x032235a8(0);
        uVar21 = uVar17;
        /*RacePolyLine$$DrawGizmosLines*/ func_0x014d80f4(lVar12);
        uVar14 = uVar14 + 1;
        uVar9 = *(uint *)(lVar13 + 0x18);
        uVar17 = uVar16;
      } while ((int)uVar14 < (int)uVar9);
    }
  }
  func_0x00f78af4();
code_r0x014dd3e8:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x14dd3ec);
  (*pcVar5)();
}



// ============================================================
// RVA: 0x14dd488 | Atlas.Gameplay.RaceSplineRootBehaviour.OnDrawGizmos
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_RaceSplineRootBehaviour__OnDrawGizmos
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  if ((bRam0000000003eb4bc7 & 1) == 0) {
    func_0x00f78a20(0x3d32de0);
    func_0x00f78a20(0x3d32de8);
    func_0x00f78a20(0x3d32df0);
    func_0x00f78a20(0x3d3b9f8);
    bRam0000000003eb4bc7 = 1;
  }
  if (*(long *)(param_5 + 0x40) != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_b8,*(long *)(param_5 + 0x40),uRam0000000003d3b9f8);
    uVar20 = _UNK_033f83fc;
    uStack_98 = uStack_b0;
    uStack_a0 = uStack_b8;
    lStack_90 = lStack_a8;
    while (uVar6 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_a0,uRam0000000003d32de8), (uVar6 & 1) != 0) {
      if (lStack_90 == 0) {
        func_0x00f78af4();
code_r0x014dd774:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x14dd778);
        (*pcVar5)();
      }
      lVar12 = *(long *)(lStack_90 + 0x40);
      if (lVar12 == 0) {
        func_0x00f78af4();
        goto code_r0x014dd774;
      }
      uVar8 = *(uint *)(lVar12 + 0x18);
      if (0 < (int)uVar8) {
        uVar13 = 0;
        uVar17 = param_2;
        do {
          if (uVar8 <= uVar13) {
            uVar7 = func_0x00f78b24();
            func_0x00f78ac0(uVar7,0);
            goto code_r0x014dd774;
          }
          lVar10 = *(long *)(lVar12 + (long)(int)uVar13 * 8 + 0x20);
          param_2 = /*UnityEngine.Color$$get_black*/ func_0x032235bc(0);
          if (lVar10 == 0) {
            func_0x00f78af4();
            goto code_r0x014dd774;
          }
          /*RacePolyLine$$DrawGizmosPoints*/ func_0x014d7f68(uVar20,param_2,uVar17,param_3,param_4,lVar10);
          param_4 = param_3;
          /*UnityEngine.Color$$get_white*/ func_0x032235a8(0);
          param_3 = uVar17;
          /*RacePolyLine$$DrawGizmosLines*/ func_0x014d80f4(lVar10);
          uVar13 = uVar13 + 1;
          uVar8 = *(uint *)(lVar12 + 0x18);
          uVar17 = param_2;
        } while ((int)uVar13 < (int)uVar8);
      }
    }
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_a0,uRam0000000003d32de0);
    if (*(char *)(param_5 + 0x5c) != '\0') {
      /*UnityEngine.Color$$get_green*/ func_0x03223580(0);
      /*UnityEngine.Gizmos$$set_color*/ func_0x0322fbcc(0);
      iVar9 = *(int *)(param_5 + 0x88);
      if (0 < iVar9) {
        lVar12 = 0;
        do {
          if (*(char *)(*(long *)(param_5 + 0x80) + lVar12) != '\0') {
            lVar10 = *(long *)(param_5 + 0x70) + lVar12 * 0x20;
            iVar3 = *(int *)(lVar10 + 0xc);
            iVar4 = *(int *)(lVar10 + 0x10);
            if (iVar3 < iVar4) {
              lVar11 = 0;
              lVar10 = (long)iVar3 * 0x70;
              puVar1 = (undefined4 *)(*(long *)(param_5 + 0xe0) + lVar10);
              uVar20 = puVar1[1];
              uVar17 = *puVar1;
              uVar15 = puVar1[2];
              uVar16 = *puVar1;
              uVar19 = puVar1[1];
              uVar22 = puVar1[2];
              while( true ) {
                uVar14 = uVar15;
                uVar21 = uVar17;
                uVar18 = uVar20;
                /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(uVar21,uVar18,uVar14,0);
                /*UnityEngine.Gizmos$$DrawSphere*/ func_0x0322f8e8(0);
                if (lVar11 != 0) {
                  uVar15 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(uVar16,uVar19,uVar22,0);
                  uVar20 = uVar18;
                  uVar17 = uVar14;
                  uVar16 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(uVar21,uVar18,uVar14,0);
                  /*UnityEngine.Gizmos$$DrawLine*/ func_0x0322f78c(uVar15,uVar19,uVar22,uVar16,uVar20,uVar17,0);
                }
                if ((iVar3 - iVar4) + 1 == (int)lVar11) break;
                lVar2 = *(long *)(param_5 + 0xe0) + lVar10;
                lVar11 = lVar11 + -1;
                lVar10 = lVar10 + 0x70;
                uVar20 = *(undefined4 *)(lVar2 + 0x74);
                uVar17 = *(undefined4 *)(lVar2 + 0x70);
                uVar15 = *(undefined4 *)(lVar2 + 0x78);
                uVar16 = uVar21;
                uVar19 = uVar18;
                uVar22 = uVar14;
              }
              iVar9 = *(int *)(param_5 + 0x88);
            }
          }
          lVar12 = lVar12 + 1;
        } while (lVar12 < iVar9);
      }
    }
  }
  return;
}



// ============================================================
// RVA: 0x14dd7cc | Atlas.Gameplay.RaceSplineRootBehaviour.OnInspectorValuesChanged
// ============================================================

long Atlas_Gameplay_RaceSplineRootBehaviour__OnInspectorValuesChanged(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  
  if ((bRam0000000003eb4bc8 & 1) == 0) {
    func_0x00f78a20(0x3d535e0);
    func_0x00f78a20(0x3d536b0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4bc8 = 1;
  }
  /*Atlas.Geometry.TrackEditorUpdatableBehaviour$$ClearDependencies*/ func_0x0151103c(param_1,0);
  lVar1 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_1,0);
  if (lVar1 != 0) {
    lVar1 = /*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(lVar1,uRam0000000003d535e0);
    lVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_1,0);
    if (lVar2 != 0) {
      lVar2 = /*UnityEngine.Component$$GetComponentsInChildren<TMP_SubMeshUI>*/ func_0x0183944c(lVar2,uRam0000000003d536b0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar1,0,0);
      if ((int)lVar3 != 0) {
        if (lVar1 == 0) goto LAB_014dd968;
        /*MainSplineBehaviour$$ClearUpdateableDependencies*/ func_0x0148c4f4(lVar1,0);
        lVar3 = /*Atlas.Geometry.TrackEditorUpdatableBehaviour$$AddDependency*/ func_0x01511090(param_1,lVar1,0);
      }
      if (lVar2 != 0) {
        uVar5 = *(uint *)(lVar2 + 0x18);
        if (0 < (int)uVar5) {
          uVar7 = 0;
          do {
            if (uVar5 <= uVar7) goto LAB_014dd96c;
            lVar6 = *(long *)(lVar2 + (long)(int)uVar7 * 8 + 0x20);
            /*Atlas.Geometry.TrackEditorUpdatableBehaviour$$AddDependency*/ func_0x01511090(param_1,lVar6,0);
            if (lVar6 == 0) goto LAB_014dd968;
            /*SplineBranchBehaviour$$ClearUpdateableDependencies*/ func_0x01503a94(lVar6,0);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            lVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar1,0,0);
            if ((int)lVar3 != 0) {
              lVar3 = /*SplineBranchBehaviour$$AddUpdateableDependency*/ func_0x01503a8c(lVar6,lVar1,0);
            }
            uVar7 = uVar7 + 1;
            uVar5 = *(uint *)(lVar2 + 0x18);
          } while ((int)uVar7 < (int)uVar5);
        }
        return lVar3;
      }
    }
  }
LAB_014dd968:
  func_0x00f78af4();
LAB_014dd96c:
  uVar4 = func_0x00f78b24();
  lVar1 = func_0x00f78ac0(uVar4,0);
  if ((bRam0000000003eb4d72 & 1) == 0) {
    func_0x00f78a20(0x3d3dce0,0);
    func_0x00f78a20(0x3d1e398);
    bRam0000000003eb4d72 = 1;
  }
  uVar4 = func_0x00f78aec(/*System.Collections.Generic.List<TrackEditorUpdatableBehaviour.Dependency>_TypeInfo*/ uRam0000000003d1e398);
  /*System.Collections.Generic.List<TrackEditorUpdatableBehaviour.Dependency>$$.ctor*/ func_0x025b4e4c(uVar4,uRam0000000003d3dce0);
  *(undefined8 *)(lVar1 + 0x28) = uVar4;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return lVar1;
}



// ============================================================
// RVA: 0x14dd978 | Atlas.Gameplay.RaceSplineRootBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_Gameplay_RaceSplineRootBehaviour___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb4d72 & 1) == 0) {
    func_0x00f78a20(0x3d3dce0,0);
    func_0x00f78a20(0x3d1e398);
    bRam0000000003eb4d72 = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<TrackEditorUpdatableBehaviour.Dependency>_TypeInfo*/ uRam0000000003d1e398);
  /*System.Collections.Generic.List<TrackEditorUpdatableBehaviour.Dependency>$$.ctor*/ func_0x025b4e4c(uVar1,uRam0000000003d3dce0);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



// ============================================================
// RVA: 0x14dd980 | Atlas.Gameplay.RaceSplineRootBehaviour..cctor
// ============================================================

void Atlas_Gameplay_RaceSplineRootBehaviour___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb4bcb & 1) == 0) {
    func_0x00f78a20(0x3d240a0);
    func_0x00f78a20(0x3d71938);
    bRam0000000003eb4bcb = 1;
  }
  uVar1 = /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$CreateMarker*/ func_0x03250e74(/*STR('RaceSplineRootBehaviour.GetTrackCoords()')*/ uRam0000000003d71938,1,0,0,0);
  **(undefined8 **)(/*Atlas.Gameplay.RaceSplineRootBehaviour_TypeInfo*/ lRam0000000003d240a0 + 0xb8) = uVar1;
  return;
}



