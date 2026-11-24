// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.SiblingPolyLineTriangulator

// ============================================================
// RVA: 0x14f6a0c | Atlas.SiblingPolyLineTriangulator.get_Indices
// ============================================================

undefined8 Atlas_SiblingPolyLineTriangulator__get_Indices(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



// ============================================================
// RVA: 0x14f6a14 | Atlas.SiblingPolyLineTriangulator.Init
// ============================================================

/* WARNING: Possible PIC construction at 0x014f6adc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014f6ae0) */

ulong Atlas_SiblingPolyLineTriangulator__Init
                (long param_1,long param_2,ulong param_3,long param_4,ulong param_5,ulong param_6,
                long param_7)

{
  ulong uVar1;
  undefined1 **ppuVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  int extraout_w1;
  int extraout_w1_00;
  uint uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  undefined1 **ppuVar17;
  undefined *puVar18;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  uVar9 = (uint)param_3;
  ppuVar2 = (undefined1 **)&stack0xffffffffffffffc0;
  uVar5 = param_3;
  lVar7 = param_4;
  uVar10 = param_5;
  if ((bRam0000000003eb4caa & 1) == 0) {
    func_0x00f78a20(0x3d1f100);
    bRam0000000003eb4caa = 1;
  }
  uVar6 = (uint)uVar5;
  uVar3 = uVar10;
  uVar11 = (uint)param_6;
  if (param_2 != 0) {
    uVar3 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,
                            ((int)param_4 * 6 + -6) * (*(int *)(param_2 + 0x18) + -1));
    *(ulong *)(param_1 + 0x10) = uVar3;
    uVar14 = *(ulong *)(param_2 + 0x18);
    if (0 < (int)uVar14 + -1) {
      uVar3 = 0;
      uVar12 = 0;
      do {
        uVar11 = (uint)param_6;
        uVar6 = (uint)uVar5;
        if (((uVar14 & 0xffffffff) <= uVar12) ||
           (uVar1 = uVar12 + 1, (uVar14 & 0xffffffff) <= uVar1)) {
          uVar4 = func_0x00f78b24();
          func_0x00f78ac0(uVar4,0);
          uVar3 = uVar10;
          goto LAB_014f6b20;
        }
        lVar7 = param_2 + uVar12 * 4;
        iVar13 = *(int *)(lVar7 + 0x20);
        uVar6 = *(uint *)(lVar7 + 0x24);
        uVar5 = (ulong)uVar6;
        lVar7 = *(long *)(param_1 + 0x10);
        if ((param_5 & 1) != 0) {
          puVar18 = (undefined *)0x14f6ae0;
          ppuVar17 = (undefined1 **)&stack0xfffffffffffffff0;
          goto code_r0x014f6c14;
        }
        uVar10 = uVar3;
        param_6 = param_3;
        param_7 = param_4;
        uVar3 = /*Atlas.SiblingPolyLineTriangulator$$Trianglulate*/ func_0x014f6b24();
        uVar14 = *(ulong *)(param_2 + 0x18);
        uVar12 = uVar1;
      } while ((long)uVar1 < (long)((int)uVar14 + -1));
    }
    return uVar3;
  }
LAB_014f6b20:
  uVar9 = uVar11;
  param_4 = param_7;
  func_0x00f78af4();
  ppuVar2 = &puStack_50;
  ppuVar17 = &puStack_50;
  puStack_48 = &Atlas_SiblingPolyLineTriangulator__Trianglulate;
  if ((int)uVar9 < (int)param_4 + -1) {
    puStack_50 = &stack0xfffffffffffffff0;
    if (lVar7 == 0) {
code_r0x014f6c10:
      puVar18 = &Atlas_SiblingPolyLineTriangulator__TrianglulateSwapWindingOrder;
      func_0x00f78af4();
      iVar13 = extraout_w1_00;
code_r0x014f6c14:
      *(undefined1 ***)((long)ppuVar2 + -0x10) = ppuVar17;
      *(undefined **)((long)ppuVar2 + -8) = puVar18;
      if ((int)uVar9 < (int)param_4 + -1) {
        if (lVar7 == 0) {
code_r0x014f6d00:
          uVar5 = func_0x00f78af4();
          return uVar5;
        }
        uVar11 = *(uint *)(lVar7 + 0x18);
        iVar13 = uVar9 + iVar13;
        iVar15 = uVar9 + uVar6;
        iVar16 = ~uVar9 + (int)param_4;
        do {
          uVar9 = (uint)uVar3;
          if (uVar11 <= uVar9) {
code_r0x014f6cf4:
            uVar4 = func_0x00f78b24();
            func_0x00f78ac0(uVar4,0);
            goto code_r0x014f6d00;
          }
          *(int *)(lVar7 + (long)(int)uVar9 * 4 + 0x20) = iVar13;
          if ((uVar11 <= uVar9 + 1) ||
             (*(int *)(lVar7 + (long)(int)(uVar9 + 1) * 4 + 0x20) = iVar15, uVar11 <= uVar9 + 2))
          goto code_r0x014f6cf4;
          *(int *)(lVar7 + (long)(int)(uVar9 + 2) * 4 + 0x20) = iVar13 + 1;
          if ((uVar11 <= uVar9 + 3) ||
             ((*(int *)(lVar7 + (long)(int)(uVar9 + 3) * 4 + 0x20) = iVar13 + 1, uVar11 <= uVar9 + 4
              || (*(int *)(lVar7 + (long)(int)(uVar9 + 4) * 4 + 0x20) = iVar15, uVar11 <= uVar9 + 5)
              ))) goto code_r0x014f6cf4;
          *(int *)(lVar7 + (long)(int)(uVar9 + 5) * 4 + 0x20) = iVar15 + 1;
          iVar13 = iVar13 + 1;
          iVar15 = iVar15 + 1;
          uVar3 = (ulong)(uVar9 + 6);
          iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
        uVar3 = (ulong)(uVar9 + 6);
      }
      return uVar3;
    }
    uVar11 = *(uint *)(lVar7 + 0x18);
    iVar13 = uVar9 + extraout_w1;
    iVar15 = uVar9 + uVar6;
    iVar16 = ~uVar9 + (int)param_4;
    do {
      uVar8 = (uint)uVar3;
      if (uVar11 <= uVar8) {
code_r0x014f6c04:
        uVar4 = func_0x00f78b24();
        func_0x00f78ac0(uVar4,0);
        goto code_r0x014f6c10;
      }
      *(int *)(lVar7 + (long)(int)uVar8 * 4 + 0x20) = iVar13;
      if (uVar11 <= uVar8 + 1) goto code_r0x014f6c04;
      *(int *)(lVar7 + (long)(int)(uVar8 + 1) * 4 + 0x20) = iVar13 + 1;
      if ((((uVar11 <= uVar8 + 2) ||
           (*(int *)(lVar7 + (long)(int)(uVar8 + 2) * 4 + 0x20) = iVar15, uVar11 <= uVar8 + 3)) ||
          (*(int *)(lVar7 + (long)(int)(uVar8 + 3) * 4 + 0x20) = iVar15, uVar11 <= uVar8 + 4)) ||
         (*(int *)(lVar7 + (long)(int)(uVar8 + 4) * 4 + 0x20) = iVar13 + 1, uVar11 <= uVar8 + 5))
      goto code_r0x014f6c04;
      *(int *)(lVar7 + (long)(int)(uVar8 + 5) * 4 + 0x20) = iVar15 + 1;
      iVar13 = iVar13 + 1;
      iVar15 = iVar15 + 1;
      uVar3 = (ulong)(uVar8 + 6);
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
    uVar3 = (ulong)(uVar8 + 6);
  }
  return uVar3;
}



// ============================================================
// RVA: 0x14f6b24 | Atlas.SiblingPolyLineTriangulator.Trianglulate
// ============================================================

ulong Atlas_SiblingPolyLineTriangulator__Trianglulate
                (undefined8 param_1,int param_2,int param_3,long param_4,ulong param_5,uint param_6,
                int param_7)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  int extraout_w1;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if ((int)param_6 < param_7 + -1) {
    if (param_4 == 0) {
LAB_014f6c10:
      func_0x00f78af4();
      if ((int)param_6 < param_7 + -1) {
        if (param_4 == 0) {
code_r0x014f6d00:
          uVar3 = func_0x00f78af4();
          return uVar3;
        }
        uVar1 = *(uint *)(param_4 + 0x18);
        iVar5 = param_6 + extraout_w1;
        param_3 = param_6 + param_3;
        param_7 = ~param_6 + param_7;
        do {
          uVar4 = (uint)param_5;
          if (uVar1 <= uVar4) {
code_r0x014f6cf4:
            uVar2 = func_0x00f78b24();
            func_0x00f78ac0(uVar2,0);
            goto code_r0x014f6d00;
          }
          *(int *)(param_4 + (long)(int)uVar4 * 4 + 0x20) = iVar5;
          if ((uVar1 <= uVar4 + 1) ||
             (*(int *)(param_4 + (long)(int)(uVar4 + 1) * 4 + 0x20) = param_3, uVar1 <= uVar4 + 2))
          goto code_r0x014f6cf4;
          *(int *)(param_4 + (long)(int)(uVar4 + 2) * 4 + 0x20) = iVar5 + 1;
          if ((uVar1 <= uVar4 + 3) ||
             ((*(int *)(param_4 + (long)(int)(uVar4 + 3) * 4 + 0x20) = iVar5 + 1, uVar1 <= uVar4 + 4
              || (*(int *)(param_4 + (long)(int)(uVar4 + 4) * 4 + 0x20) = param_3,
                 uVar1 <= uVar4 + 5)))) goto code_r0x014f6cf4;
          *(int *)(param_4 + (long)(int)(uVar4 + 5) * 4 + 0x20) = param_3 + 1;
          iVar5 = iVar5 + 1;
          param_3 = param_3 + 1;
          param_5 = (ulong)(uVar4 + 6);
          param_7 = param_7 + -1;
        } while (param_7 != 0);
        param_5 = (ulong)(uVar4 + 6);
      }
      return param_5;
    }
    uVar1 = *(uint *)(param_4 + 0x18);
    param_2 = param_6 + param_2;
    iVar5 = param_6 + param_3;
    iVar6 = ~param_6 + param_7;
    do {
      uVar4 = (uint)param_5;
      if (uVar1 <= uVar4) {
LAB_014f6c04:
        uVar2 = func_0x00f78b24();
        func_0x00f78ac0(uVar2,0);
        goto LAB_014f6c10;
      }
      *(int *)(param_4 + (long)(int)uVar4 * 4 + 0x20) = param_2;
      if (uVar1 <= uVar4 + 1) goto LAB_014f6c04;
      *(int *)(param_4 + (long)(int)(uVar4 + 1) * 4 + 0x20) = param_2 + 1;
      if ((((uVar1 <= uVar4 + 2) ||
           (*(int *)(param_4 + (long)(int)(uVar4 + 2) * 4 + 0x20) = iVar5, uVar1 <= uVar4 + 3)) ||
          (*(int *)(param_4 + (long)(int)(uVar4 + 3) * 4 + 0x20) = iVar5, uVar1 <= uVar4 + 4)) ||
         (*(int *)(param_4 + (long)(int)(uVar4 + 4) * 4 + 0x20) = param_2 + 1, uVar1 <= uVar4 + 5))
      goto LAB_014f6c04;
      *(int *)(param_4 + (long)(int)(uVar4 + 5) * 4 + 0x20) = iVar5 + 1;
      param_2 = param_2 + 1;
      iVar5 = iVar5 + 1;
      param_5 = (ulong)(uVar4 + 6);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    param_5 = (ulong)(uVar4 + 6);
  }
  return param_5;
}



// ============================================================
// RVA: 0x14f6c14 | Atlas.SiblingPolyLineTriangulator.TrianglulateSwapWindingOrder
// ============================================================

undefined1  [16]
Atlas_SiblingPolyLineTriangulator__TrianglulateSwapWindingOrder
          (undefined8 param_1,undefined8 param_2,int param_3,long param_4,ulong param_5,uint param_6
          ,int param_7)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if ((int)param_6 < param_7 + -1) {
    if (param_4 == 0) {
LAB_014f6d00:
      auVar6._0_8_ = func_0x00f78af4();
      auVar6._8_8_ = 0;
      return auVar6;
    }
    uVar1 = *(uint *)(param_4 + 0x18);
    iVar4 = param_6 + (int)param_2;
    param_3 = param_6 + param_3;
    param_7 = ~param_6 + param_7;
    do {
      uVar3 = (uint)param_5;
      if (uVar1 <= uVar3) {
LAB_014f6cf4:
        uVar2 = func_0x00f78b24();
        func_0x00f78ac0(uVar2,0);
        goto LAB_014f6d00;
      }
      *(int *)(param_4 + (long)(int)uVar3 * 4 + 0x20) = iVar4;
      if ((uVar1 <= uVar3 + 1) ||
         (*(int *)(param_4 + (long)(int)(uVar3 + 1) * 4 + 0x20) = param_3, uVar1 <= uVar3 + 2))
      goto LAB_014f6cf4;
      *(int *)(param_4 + (long)(int)(uVar3 + 2) * 4 + 0x20) = iVar4 + 1;
      if ((uVar1 <= uVar3 + 3) ||
         ((*(int *)(param_4 + (long)(int)(uVar3 + 3) * 4 + 0x20) = iVar4 + 1, uVar1 <= uVar3 + 4 ||
          (*(int *)(param_4 + (long)(int)(uVar3 + 4) * 4 + 0x20) = param_3, uVar1 <= uVar3 + 5))))
      goto LAB_014f6cf4;
      *(int *)(param_4 + (long)(int)(uVar3 + 5) * 4 + 0x20) = param_3 + 1;
      iVar4 = iVar4 + 1;
      param_3 = param_3 + 1;
      param_5 = (ulong)(uVar3 + 6);
      param_7 = param_7 + -1;
    } while (param_7 != 0);
    param_5 = (ulong)(uVar3 + 6);
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_5;
  return auVar5;
}



// ============================================================
// RVA: 0x14f6d04 | Atlas.SiblingPolyLineTriangulator..ctor
// ============================================================

void Atlas_SiblingPolyLineTriangulator___ctor(void)

{
  return;
}



