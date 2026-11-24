// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Containers.ReorderArray<int>

// ============================================================
// RVA: 0x284f50c | Core.Containers.ReorderArray<int>.get_Count
// ============================================================

undefined4 Core_Containers_ReorderArray_int___get_Count(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



// ============================================================
// RVA: 0x284f514 | Core.Containers.ReorderArray<int>.get_Capacity
// ============================================================

undefined4 Core_Containers_ReorderArray_int___get_Capacity(long *param_1)

{
  if (*param_1 != 0) {
    return *(undefined4 *)(*param_1 + 0x18);
  }
  return 0;
}



// ============================================================
// RVA: 0x284f52c | Core.Containers.ReorderArray<int>.get_Item
// ============================================================

long * Core_Containers_ReorderArray_int___get_Item(long *param_1,uint param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [16];
  
  uVar4 = (undefined4)((ulong)param_3 >> 0x20);
  uVar3 = (undefined4)param_3;
  lVar5 = *param_1;
  if (lVar5 == 0) {
    func_0x00f78af4();
  }
  else if (param_2 < *(uint *)(lVar5 + 0x18)) {
    return (long *)(ulong)*(uint *)(lVar5 + (long)(int)param_2 * 4 + 0x20);
  }
  uVar1 = func_0x00f78b24();
  auVar6 = func_0x00f78ac0(uVar1,0);
  lVar5 = *auVar6._0_8_;
  if (lVar5 == 0) {
    func_0x00f78af4();
  }
  else if (auVar6._8_4_ < *(uint *)(lVar5 + 0x18)) {
    *(undefined4 *)(lVar5 + (long)(int)auVar6._8_4_ * 4 + 0x20) = uVar3;
    return auVar6._0_8_;
  }
  uVar1 = func_0x00f78b24();
  auVar7 = func_0x00f78ac0(uVar1,0);
  lVar5 = *(long *)(CONCAT44(uVar4,uVar3) + 0x18);
  if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar5);
  }
  lVar5 = **(long **)(lVar5 + 0xc0);
  if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar5);
  }
  plVar2 = (long *)func_0x00f78a34(lVar5,auVar7._8_8_);
  *auVar7._0_8_ = plVar2;
  *(undefined4 *)(auVar7._0_8_ + 1) = 0;
  return plVar2;
}



// ============================================================
// RVA: 0x284f568 | Core.Containers.ReorderArray<int>.set_Item
// ============================================================

void Core_Containers_ReorderArray_int___set_Item(long *param_1,uint param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  uVar3 = (undefined4)((ulong)param_3 >> 0x20);
  uVar2 = (undefined4)param_3;
  lVar4 = *param_1;
  if (lVar4 == 0) {
    func_0x00f78af4();
  }
  else if (param_2 < *(uint *)(lVar4 + 0x18)) {
    *(undefined4 *)(lVar4 + (long)(int)param_2 * 4 + 0x20) = uVar2;
    return;
  }
  uVar1 = func_0x00f78b24();
  auVar5 = func_0x00f78ac0(uVar1,0);
  lVar4 = *(long *)(CONCAT44(uVar3,uVar2) + 0x18);
  if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar4);
  }
  lVar4 = **(long **)(lVar4 + 0xc0);
  if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar4);
  }
  uVar1 = func_0x00f78a34(lVar4,auVar5._8_8_);
  *auVar5._0_8_ = uVar1;
  *(undefined4 *)(auVar5._0_8_ + 1) = 0;
  return;
}



// ============================================================
// RVA: 0x284f5a4 | Core.Containers.ReorderArray<int>.Init
// ============================================================

void Core_Containers_ReorderArray_int___Init(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_3 + 0x18);
  if ((*(ushort *)(lVar2 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar2);
  }
  lVar2 = **(long **)(lVar2 + 0xc0);
  if ((*(ushort *)(lVar2 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar2);
  }
  uVar1 = func_0x00f78a34(lVar2,param_2);
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// ============================================================
// RVA: 0x284f60c | Core.Containers.ReorderArray<int>.DeInit
// ============================================================

void Core_Containers_ReorderArray_int___DeInit(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// ============================================================
// RVA: 0x284f618 | Core.Containers.ReorderArray<int>.Add
// ============================================================

long * Core_Containers_ReorderArray_int___Add(long *param_1,undefined4 param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  ushort uVar3;
  uint uVar4;
  undefined1 auVar6 [16];
  undefined1 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 unaff_x19;
  ulong unaff_x20;
  ulong uVar14;
  long unaff_x21;
  undefined8 unaff_x22;
  ulong uVar15;
  long unaff_x23;
  long lVar16;
  code *unaff_x24;
  long lVar17;
  code *pcVar18;
  undefined8 ****ppppuVar19;
  undefined *puVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 ***pppuStack_20;
  undefined *puStack_18;
  undefined1 auVar5 [12];
  
  auVar22._8_8_ = unaff_x22;
  auVar22._0_8_ = unaff_x19;
  lVar11 = *param_1;
  if (lVar11 == 0) {
    func_0x00f78af4();
  }
  else if (*(uint *)(param_1 + 1) < *(uint *)(lVar11 + 0x18)) {
    *(undefined4 *)(lVar11 + (long)(int)*(uint *)(param_1 + 1) * 4 + 0x20) = param_2;
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    return param_1;
  }
  uVar8 = func_0x00f78b24();
  auVar21 = func_0x00f78ac0(uVar8,0);
  plVar10 = auVar21._0_8_;
  puVar7 = &stack0xffffffffffffffb0;
  puStack_18 = &Core_Containers_ReorderArray_int___Remove;
  ppppuVar19 = &pppuStack_20;
  if ((int)plVar10[1] < 1) {
    return plVar10;
  }
  uVar14 = 0;
  lVar11 = param_3;
  pppuStack_20 = (undefined8 ***)&stack0xfffffffffffffff0;
  while( true ) {
    auVar6._8_8_ = uVar14;
    auVar6._0_8_ = plVar10;
    auVar5 = auVar6._0_12_;
    lVar17 = *(long *)(param_3 + 0x18);
    uVar3 = *(ushort *)(lVar17 + 0x132);
    lVar16 = lVar17;
    if ((uVar3 & 1) == 0) {
      func_0x00fac028(lVar17);
      lVar16 = *(long *)(param_3 + 0x18);
      uVar3 = *(ushort *)(lVar16 + 0x132);
    }
    pcVar18 = (code *)**(undefined8 **)(*(long *)(lVar17 + 0xc0) + 8);
    if ((uVar3 & 1) == 0) {
      func_0x00fac028(lVar16);
    }
    plVar9 = (long *)(*pcVar18)(*(undefined8 *)(*(long *)(lVar16 + 0xc0) + 8));
    lVar17 = *plVar10;
    if (lVar17 == 0) break;
    if (*(uint *)(lVar17 + 0x18) <= uVar14) goto code_r0x0284f760;
    if (plVar9 == (long *)0x0) break;
    lVar11 = auVar21._8_8_;
    plVar9 = (long *)(**(code **)(*plVar9 + 0x1b8))
                               (plVar9,*(undefined4 *)(lVar17 + uVar14 * 4 + 0x20),auVar21._8_8_,
                                *(undefined8 *)(*plVar9 + 0x1c0));
    if ((int)plVar9 != 0) {
      if ((*(ushort *)(*(long *)(param_3 + 0x18) + 0x132) & 1) == 0) {
        func_0x00fac028();
      }
      puVar7 = &stack0xfffffffffffffff0;
      uVar14 = unaff_x20;
      param_3 = unaff_x21;
      lVar16 = unaff_x23;
      pcVar18 = unaff_x24;
      ppppuVar19 = (undefined8 ****)pppuStack_20;
      puVar20 = puStack_18;
      auVar21 = auVar22;
      goto code_r0x0284f76c;
    }
    uVar14 = uVar14 + 1;
    if ((long)(int)plVar10[1] <= (long)uVar14) {
      return plVar9;
    }
  }
  func_0x00f78af4();
code_r0x0284f760:
  uVar8 = func_0x00f78b24();
  puVar20 = &Core_Containers_ReorderArray_int___RemoveAt;
  auVar22 = func_0x00f78ac0(uVar8,0);
  auVar5 = auVar22._0_12_;
code_r0x0284f76c:
  plVar10 = auVar5._0_8_;
  uVar15 = auVar21._8_8_;
  *(undefined8 *****)(puVar7 + -0x10) = ppppuVar19;
  *(undefined **)(puVar7 + -8) = puVar20;
  uVar4 = (int)plVar10[1] - 1;
  *(uint *)(plVar10 + 1) = uVar4;
  lVar17 = *plVar10;
  if (lVar17 != 0) {
    uVar1 = *(uint *)(lVar17 + 0x18);
    if ((uVar4 < uVar1) && (auVar5._8_4_ < uVar1)) {
      *(undefined4 *)(lVar17 + 0x20 + (long)(int)auVar5._8_4_ * 4) =
           *(undefined4 *)(lVar17 + 0x20 + (long)(int)uVar4 * 4);
      if (*(uint *)(plVar10 + 1) < uVar1) {
        *(undefined4 *)(lVar17 + (long)(int)*(uint *)(plVar10 + 1) * 4 + 0x20) = 0;
        return plVar10;
      }
    }
    uVar8 = func_0x00f78b24();
    func_0x00f78ac0(uVar8,0);
  }
  plVar10 = (long *)func_0x00f78af4();
  *(undefined1 **)(puVar7 + -0x20) = puVar7 + -0x10;
  *(undefined **)(puVar7 + -0x18) = &Core_Containers_ReorderArray_int___Clear;
  if (0 < (int)plVar10[1]) {
    lVar17 = *plVar10;
    if (lVar17 == 0) {
code_r0x0284f830:
      auVar22 = func_0x00f78af4();
      plVar9 = auVar22._0_8_;
      *(code **)(puVar7 + -0x60) = pcVar18;
      *(long *)(puVar7 + -0x58) = lVar16;
      *(ulong *)(puVar7 + -0x50) = uVar15;
      *(long *)(puVar7 + -0x48) = param_3;
      *(ulong *)(puVar7 + -0x40) = uVar14;
      *(long *)(puVar7 + -0x38) = auVar21._0_8_;
      *(undefined1 **)(puVar7 + -0x30) = puVar7 + -0x20;
      *(undefined **)(puVar7 + -0x28) = &Core_Containers_ReorderArray_int___CopyTo;
      plVar10 = plVar9;
      if (0 < (int)plVar9[1]) {
        uVar14 = 0;
        lVar16 = lVar11;
        do {
          lVar17 = *plVar9;
          if (lVar17 == 0) {
            func_0x00f78af4();
code_r0x0284f8c4:
            uVar8 = func_0x00f78b24();
            auVar21 = func_0x00f78ac0(uVar8,0);
            plVar9 = auVar21._0_8_;
            *(code **)(puVar7 + -0xa0) = pcVar18;
            *(ulong *)(puVar7 + -0x98) = uVar14;
            *(ulong *)(puVar7 + -0x90) = uVar15;
            *(undefined1 (*) [16])(puVar7 + -0x88) = auVar22;
            *(long *)(puVar7 + -0x78) = lVar11;
            *(undefined1 **)(puVar7 + -0x70) = puVar7 + -0x30;
            *(undefined **)(puVar7 + -0x68) = &Core_Containers_ReorderArray_int___CopyToAndClear;
            plVar10 = plVar9;
            if ((int)plVar9[1] < 1) goto code_r0x0284f964;
            lVar17 = *plVar9;
            lVar11 = 8;
            goto code_r0x0284f904;
          }
          if (*(uint *)(lVar17 + 0x18) <= uVar14) goto code_r0x0284f8c4;
          uVar15 = (ulong)*(uint *)(lVar17 + uVar14 * 4 + 0x20);
          if ((*(ushort *)(*(long *)(lVar11 + 0x18) + 0x132) & 1) == 0) {
            func_0x00fac028();
          }
          plVar10 = (long *)Core_Containers_ReorderArray_int___Add(auVar22._8_8_,uVar15);
          uVar14 = uVar14 + 1;
        } while ((long)uVar14 < (long)(int)plVar9[1]);
      }
      return plVar10;
    }
    uVar12 = 0;
    uVar4 = *(uint *)(lVar17 + 0x18);
    do {
      if (uVar4 == uVar12) {
        uVar8 = func_0x00f78b24();
        func_0x00f78ac0(uVar8,0);
        goto code_r0x0284f830;
      }
      *(undefined4 *)(lVar17 + 0x20 + uVar12 * 4) = 0;
      uVar12 = uVar12 + 1;
    } while ((long)uVar12 < (long)(int)plVar10[1]);
  }
  *(undefined4 *)(plVar10 + 1) = 0;
  return plVar10;
code_r0x0284f904:
  if (lVar17 == 0) {
code_r0x0284f97c:
    func_0x00f78af4();
code_r0x0284f980:
    uVar8 = func_0x00f78b24();
    lVar11 = func_0x00f78ac0(uVar8,0);
    return (long *)(ulong)*(uint *)(lVar11 + 8);
  }
  if ((ulong)*(uint *)(lVar17 + 0x18) <= lVar11 - 8U) goto code_r0x0284f980;
  uVar2 = *(undefined4 *)(lVar17 + lVar11 * 4);
  if ((*(ushort *)(*(long *)(lVar16 + 0x18) + 0x132) & 1) == 0) {
    func_0x00fac028();
  }
  plVar10 = (long *)Core_Containers_ReorderArray_int___Add(auVar21._8_8_,uVar2);
  lVar17 = *plVar9;
  if (lVar17 == 0) goto code_r0x0284f97c;
  if ((ulong)*(uint *)(lVar17 + 0x18) <= lVar11 - 8U) goto code_r0x0284f980;
  *(undefined4 *)(lVar17 + lVar11 * 4) = 0;
  lVar13 = lVar11 + -7;
  lVar11 = lVar11 + 1;
  if ((int)plVar9[1] <= lVar13) {
code_r0x0284f964:
    *(undefined4 *)(plVar9 + 1) = 0;
    return plVar10;
  }
  goto code_r0x0284f904;
}



// ============================================================
// RVA: 0x284f664 | Core.Containers.ReorderArray<int>.Remove
// ============================================================

long * Core_Containers_ReorderArray_int___Remove(long *param_1,ulong param_2,ulong param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  ushort uVar4;
  uint uVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long *unaff_x19;
  ulong unaff_x20;
  ulong uVar12;
  ulong unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  long lVar13;
  code *unaff_x24;
  long lVar14;
  code *pcVar15;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  puVar1 = &stack0xfffffffffffffff0;
  if ((int)param_1[1] < 1) {
    return param_1;
  }
  uVar12 = 0;
  uVar10 = param_3;
  while( true ) {
    lVar14 = *(long *)(param_3 + 0x18);
    uVar4 = *(ushort *)(lVar14 + 0x132);
    lVar13 = lVar14;
    if ((uVar4 & 1) == 0) {
      func_0x00fac028(lVar14);
      lVar13 = *(long *)(param_3 + 0x18);
      uVar4 = *(ushort *)(lVar13 + 0x132);
    }
    pcVar15 = (code *)**(undefined8 **)(*(long *)(lVar14 + 0xc0) + 8);
    if ((uVar4 & 1) == 0) {
      func_0x00fac028(lVar13);
    }
    plVar6 = (long *)(*pcVar15)(*(undefined8 *)(*(long *)(lVar13 + 0xc0) + 8));
    lVar14 = *param_1;
    if (lVar14 == 0) break;
    if (*(uint *)(lVar14 + 0x18) <= uVar12) goto LAB_0284f760;
    if (plVar6 == (long *)0x0) break;
    uVar10 = param_2;
    plVar6 = (long *)(**(code **)(*plVar6 + 0x1b8))
                               (plVar6,*(undefined4 *)(lVar14 + uVar12 * 4 + 0x20),param_2,
                                *(undefined8 *)(*plVar6 + 0x1c0));
    if ((int)plVar6 != 0) {
      plVar6 = param_1;
      uVar9 = uVar12;
      if ((*(ushort *)(*(long *)(param_3 + 0x18) + 0x132) & 1) == 0) {
        func_0x00fac028();
      }
      goto code_r0x0284f76c;
    }
    uVar12 = uVar12 + 1;
    if ((long)(int)param_1[1] <= (long)uVar12) {
      return plVar6;
    }
  }
  func_0x00f78af4();
LAB_0284f760:
  uVar7 = func_0x00f78b24();
  unaff_x30 = &Core_Containers_ReorderArray_int___RemoveAt;
  auVar16 = func_0x00f78ac0(uVar7,0);
  register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
  plVar6 = auVar16._0_8_;
  uVar9 = auVar16._8_8_;
  unaff_x19 = param_1;
  unaff_x20 = uVar12;
  unaff_x21 = param_3;
  unaff_x22 = param_2;
  unaff_x23 = lVar13;
  unaff_x24 = pcVar15;
  unaff_x29 = puVar1;
code_r0x0284f76c:
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  uVar5 = (int)plVar6[1] - 1;
  *(uint *)(plVar6 + 1) = uVar5;
  lVar13 = *plVar6;
  if (lVar13 != 0) {
    uVar2 = *(uint *)(lVar13 + 0x18);
    if ((uVar5 < uVar2) && ((uint)uVar9 < uVar2)) {
      *(undefined4 *)(lVar13 + 0x20 + (long)(int)(uint)uVar9 * 4) =
           *(undefined4 *)(lVar13 + 0x20 + (long)(int)uVar5 * 4);
      if (*(uint *)(plVar6 + 1) < uVar2) {
        *(undefined4 *)(lVar13 + (long)(int)*(uint *)(plVar6 + 1) * 4 + 0x20) = 0;
        return plVar6;
      }
    }
    uVar7 = func_0x00f78b24();
    func_0x00f78ac0(uVar7,0);
  }
  plVar6 = (long *)func_0x00f78af4();
  *(undefined1 **)((long)register0x00000008 + -0x20) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x18) = &Core_Containers_ReorderArray_int___Clear;
  if (0 < (int)plVar6[1]) {
    lVar13 = *plVar6;
    if (lVar13 == 0) {
code_r0x0284f830:
      auVar16 = func_0x00f78af4();
      plVar8 = auVar16._0_8_;
      *(code **)((long)register0x00000008 + -0x60) = unaff_x24;
      *(long *)((long)register0x00000008 + -0x58) = unaff_x23;
      *(ulong *)((long)register0x00000008 + -0x50) = unaff_x22;
      *(ulong *)((long)register0x00000008 + -0x48) = unaff_x21;
      *(ulong *)((long)register0x00000008 + -0x40) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x38) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x30) =
           (undefined1 *)((long)register0x00000008 + -0x20);
      *(undefined **)((long)register0x00000008 + -0x28) = &Core_Containers_ReorderArray_int___CopyTo
      ;
      plVar6 = plVar8;
      if (0 < (int)plVar8[1]) {
        uVar12 = 0;
        uVar9 = uVar10;
        do {
          lVar13 = *plVar8;
          if (lVar13 == 0) {
            func_0x00f78af4();
code_r0x0284f8c4:
            uVar7 = func_0x00f78b24();
            auVar17 = func_0x00f78ac0(uVar7,0);
            plVar8 = auVar17._0_8_;
            *(code **)((long)register0x00000008 + -0xa0) = unaff_x24;
            *(ulong *)((long)register0x00000008 + -0x98) = uVar12;
            *(ulong *)((long)register0x00000008 + -0x90) = unaff_x22;
            *(undefined1 (*) [16])((long)register0x00000008 + -0x88) = auVar16;
            *(ulong *)((long)register0x00000008 + -0x78) = uVar10;
            *(undefined1 **)((long)register0x00000008 + -0x70) =
                 (undefined1 *)((long)register0x00000008 + -0x30);
            *(undefined **)((long)register0x00000008 + -0x68) =
                 &Core_Containers_ReorderArray_int___CopyToAndClear;
            plVar6 = plVar8;
            if ((int)plVar8[1] < 1) goto code_r0x0284f964;
            lVar14 = *plVar8;
            lVar13 = 8;
            goto code_r0x0284f904;
          }
          if (*(uint *)(lVar13 + 0x18) <= uVar12) goto code_r0x0284f8c4;
          unaff_x22 = (ulong)*(uint *)(lVar13 + uVar12 * 4 + 0x20);
          if ((*(ushort *)(*(long *)(uVar10 + 0x18) + 0x132) & 1) == 0) {
            func_0x00fac028();
          }
          plVar6 = (long *)Core_Containers_ReorderArray_int___Add(auVar16._8_8_,unaff_x22);
          uVar12 = uVar12 + 1;
        } while ((long)uVar12 < (long)(int)plVar8[1]);
      }
      return plVar6;
    }
    uVar12 = 0;
    uVar5 = *(uint *)(lVar13 + 0x18);
    do {
      if (uVar5 == uVar12) {
        uVar7 = func_0x00f78b24();
        func_0x00f78ac0(uVar7,0);
        goto code_r0x0284f830;
      }
      *(undefined4 *)(lVar13 + 0x20 + uVar12 * 4) = 0;
      uVar12 = uVar12 + 1;
    } while ((long)uVar12 < (long)(int)plVar6[1]);
  }
  *(undefined4 *)(plVar6 + 1) = 0;
  return plVar6;
code_r0x0284f904:
  if (lVar14 == 0) {
code_r0x0284f97c:
    func_0x00f78af4();
code_r0x0284f980:
    uVar7 = func_0x00f78b24();
    lVar13 = func_0x00f78ac0(uVar7,0);
    return (long *)(ulong)*(uint *)(lVar13 + 8);
  }
  if ((ulong)*(uint *)(lVar14 + 0x18) <= lVar13 - 8U) goto code_r0x0284f980;
  uVar3 = *(undefined4 *)(lVar14 + lVar13 * 4);
  if ((*(ushort *)(*(long *)(uVar9 + 0x18) + 0x132) & 1) == 0) {
    func_0x00fac028();
  }
  plVar6 = (long *)Core_Containers_ReorderArray_int___Add(auVar17._8_8_,uVar3);
  lVar14 = *plVar8;
  if (lVar14 == 0) goto code_r0x0284f97c;
  if ((ulong)*(uint *)(lVar14 + 0x18) <= lVar13 - 8U) goto code_r0x0284f980;
  *(undefined4 *)(lVar14 + lVar13 * 4) = 0;
  lVar11 = lVar13 + -7;
  lVar13 = lVar13 + 1;
  if ((int)plVar8[1] <= lVar11) {
code_r0x0284f964:
    *(undefined4 *)(plVar8 + 1) = 0;
    return plVar6;
  }
  goto code_r0x0284f904;
}



// ============================================================
// RVA: 0x284f76c | Core.Containers.ReorderArray<int>.RemoveAt
// ============================================================

long * Core_Containers_ReorderArray_int___RemoveAt(long *param_1,uint param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [16];
  
  uVar3 = (int)param_1[1] - 1;
  *(uint *)(param_1 + 1) = uVar3;
  lVar7 = *param_1;
  if (lVar7 != 0) {
    uVar1 = *(uint *)(lVar7 + 0x18);
    if ((uVar3 < uVar1) && (param_2 < uVar1)) {
      *(undefined4 *)(lVar7 + 0x20 + (long)(int)param_2 * 4) =
           *(undefined4 *)(lVar7 + 0x20 + (long)(int)uVar3 * 4);
      if (*(uint *)(param_1 + 1) < uVar1) {
        *(undefined4 *)(lVar7 + (long)(int)*(uint *)(param_1 + 1) * 4 + 0x20) = 0;
        return param_1;
      }
    }
    uVar4 = func_0x00f78b24();
    func_0x00f78ac0(uVar4,0);
  }
  plVar5 = (long *)func_0x00f78af4();
  if (0 < (int)plVar5[1]) {
    lVar7 = *plVar5;
    if (lVar7 == 0) {
code_r0x0284f830:
      auVar12 = func_0x00f78af4();
      plVar6 = auVar12._0_8_;
      plVar5 = plVar6;
      if (0 < (int)plVar6[1]) {
        uVar8 = 0;
        lVar7 = param_3;
        do {
          lVar9 = *plVar6;
          if (lVar9 == 0) {
            func_0x00f78af4();
code_r0x0284f8c4:
            uVar4 = func_0x00f78b24();
            auVar12 = func_0x00f78ac0(uVar4,0);
            plVar6 = auVar12._0_8_;
            plVar5 = plVar6;
            if ((int)plVar6[1] < 1) goto code_r0x0284f964;
            lVar10 = *plVar6;
            lVar9 = 8;
            goto code_r0x0284f904;
          }
          if (*(uint *)(lVar9 + 0x18) <= uVar8) goto code_r0x0284f8c4;
          uVar2 = *(undefined4 *)(lVar9 + uVar8 * 4 + 0x20);
          if ((*(ushort *)(*(long *)(param_3 + 0x18) + 0x132) & 1) == 0) {
            func_0x00fac028();
          }
          plVar5 = (long *)Core_Containers_ReorderArray_int___Add(auVar12._8_8_,uVar2);
          uVar8 = uVar8 + 1;
        } while ((long)uVar8 < (long)(int)plVar6[1]);
      }
      return plVar5;
    }
    uVar8 = 0;
    uVar3 = *(uint *)(lVar7 + 0x18);
    do {
      if (uVar3 == uVar8) {
        uVar4 = func_0x00f78b24();
        func_0x00f78ac0(uVar4,0);
        goto code_r0x0284f830;
      }
      *(undefined4 *)(lVar7 + 0x20 + uVar8 * 4) = 0;
      uVar8 = uVar8 + 1;
    } while ((long)uVar8 < (long)(int)plVar5[1]);
  }
  *(undefined4 *)(plVar5 + 1) = 0;
  return plVar5;
code_r0x0284f904:
  if (lVar10 == 0) {
code_r0x0284f97c:
    func_0x00f78af4();
code_r0x0284f980:
    uVar4 = func_0x00f78b24();
    lVar7 = func_0x00f78ac0(uVar4,0);
    return (long *)(ulong)*(uint *)(lVar7 + 8);
  }
  if ((ulong)*(uint *)(lVar10 + 0x18) <= lVar9 - 8U) goto code_r0x0284f980;
  uVar2 = *(undefined4 *)(lVar10 + lVar9 * 4);
  if ((*(ushort *)(*(long *)(lVar7 + 0x18) + 0x132) & 1) == 0) {
    func_0x00fac028();
  }
  plVar5 = (long *)Core_Containers_ReorderArray_int___Add(auVar12._8_8_,uVar2);
  lVar10 = *plVar6;
  if (lVar10 == 0) goto code_r0x0284f97c;
  if ((ulong)*(uint *)(lVar10 + 0x18) <= lVar9 - 8U) goto code_r0x0284f980;
  *(undefined4 *)(lVar10 + lVar9 * 4) = 0;
  lVar11 = lVar9 + -7;
  lVar9 = lVar9 + 1;
  if ((int)plVar6[1] <= lVar11) {
code_r0x0284f964:
    *(undefined4 *)(plVar6 + 1) = 0;
    return plVar5;
  }
  goto code_r0x0284f904;
}



// ============================================================
// RVA: 0x284f7d4 | Core.Containers.ReorderArray<int>.Clear
// ============================================================

long * Core_Containers_ReorderArray_int___Clear(long *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auVar11 [16];
  
  if (0 < (int)param_1[1]) {
    lVar9 = *param_1;
    if (lVar9 == 0) {
LAB_0284f830:
      auVar11 = func_0x00f78af4();
      plVar4 = auVar11._0_8_;
      plVar5 = plVar4;
      if (0 < (int)plVar4[1]) {
        uVar6 = 0;
        lVar9 = param_3;
        do {
          lVar7 = *plVar4;
          if (lVar7 == 0) {
            func_0x00f78af4();
code_r0x0284f8c4:
            uVar3 = func_0x00f78b24();
            auVar11 = func_0x00f78ac0(uVar3,0);
            plVar4 = auVar11._0_8_;
            plVar5 = plVar4;
            if ((int)plVar4[1] < 1) goto code_r0x0284f964;
            lVar8 = *plVar4;
            lVar7 = 8;
            goto code_r0x0284f904;
          }
          if (*(uint *)(lVar7 + 0x18) <= uVar6) goto code_r0x0284f8c4;
          uVar2 = *(undefined4 *)(lVar7 + uVar6 * 4 + 0x20);
          if ((*(ushort *)(*(long *)(param_3 + 0x18) + 0x132) & 1) == 0) {
            func_0x00fac028();
          }
          plVar5 = (long *)Core_Containers_ReorderArray_int___Add(auVar11._8_8_,uVar2);
          uVar6 = uVar6 + 1;
        } while ((long)uVar6 < (long)(int)plVar4[1]);
      }
      return plVar5;
    }
    uVar6 = 0;
    uVar1 = *(uint *)(lVar9 + 0x18);
    do {
      if (uVar1 == uVar6) {
        uVar3 = func_0x00f78b24();
        func_0x00f78ac0(uVar3,0);
        goto LAB_0284f830;
      }
      *(undefined4 *)(lVar9 + 0x20 + uVar6 * 4) = 0;
      uVar6 = uVar6 + 1;
    } while ((long)uVar6 < (long)(int)param_1[1]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  return param_1;
code_r0x0284f904:
  if (lVar8 == 0) {
code_r0x0284f97c:
    func_0x00f78af4();
code_r0x0284f980:
    uVar3 = func_0x00f78b24();
    lVar9 = func_0x00f78ac0(uVar3,0);
    return (long *)(ulong)*(uint *)(lVar9 + 8);
  }
  if ((ulong)*(uint *)(lVar8 + 0x18) <= lVar7 - 8U) goto code_r0x0284f980;
  uVar2 = *(undefined4 *)(lVar8 + lVar7 * 4);
  if ((*(ushort *)(*(long *)(lVar9 + 0x18) + 0x132) & 1) == 0) {
    func_0x00fac028();
  }
  plVar5 = (long *)Core_Containers_ReorderArray_int___Add(auVar11._8_8_,uVar2);
  lVar8 = *plVar4;
  if (lVar8 == 0) goto code_r0x0284f97c;
  if ((ulong)*(uint *)(lVar8 + 0x18) <= lVar7 - 8U) goto code_r0x0284f980;
  *(undefined4 *)(lVar8 + lVar7 * 4) = 0;
  lVar10 = lVar7 + -7;
  lVar7 = lVar7 + 1;
  if ((int)plVar4[1] <= lVar10) {
code_r0x0284f964:
    *(undefined4 *)(plVar4 + 1) = 0;
    return plVar5;
  }
  goto code_r0x0284f904;
}



// ============================================================
// RVA: 0x284f834 | Core.Containers.ReorderArray<int>.CopyTo
// ============================================================

long * Core_Containers_ReorderArray_int___CopyTo(long *param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  
  plVar2 = param_1;
  if (0 < (int)param_1[1]) {
    uVar9 = 0;
    lVar5 = param_3;
    do {
      lVar6 = *param_1;
      if (lVar6 == 0) {
        func_0x00f78af4();
LAB_0284f8c4:
        uVar3 = func_0x00f78b24();
        auVar10 = func_0x00f78ac0(uVar3,0);
        plVar4 = auVar10._0_8_;
        plVar2 = plVar4;
        if ((int)plVar4[1] < 1) goto code_r0x0284f964;
        lVar7 = *plVar4;
        lVar6 = 8;
        goto code_r0x0284f904;
      }
      if (*(uint *)(lVar6 + 0x18) <= uVar9) goto LAB_0284f8c4;
      uVar1 = *(undefined4 *)(lVar6 + uVar9 * 4 + 0x20);
      if ((*(ushort *)(*(long *)(param_3 + 0x18) + 0x132) & 1) == 0) {
        func_0x00fac028();
      }
      plVar2 = (long *)Core_Containers_ReorderArray_int___Add(param_2,uVar1);
      uVar9 = uVar9 + 1;
    } while ((long)uVar9 < (long)(int)param_1[1]);
  }
  return plVar2;
code_r0x0284f904:
  if (lVar7 == 0) {
code_r0x0284f97c:
    func_0x00f78af4();
code_r0x0284f980:
    uVar3 = func_0x00f78b24();
    lVar5 = func_0x00f78ac0(uVar3,0);
    return (long *)(ulong)*(uint *)(lVar5 + 8);
  }
  if ((ulong)*(uint *)(lVar7 + 0x18) <= lVar6 - 8U) goto code_r0x0284f980;
  uVar1 = *(undefined4 *)(lVar7 + lVar6 * 4);
  if ((*(ushort *)(*(long *)(lVar5 + 0x18) + 0x132) & 1) == 0) {
    func_0x00fac028();
  }
  plVar2 = (long *)Core_Containers_ReorderArray_int___Add(auVar10._8_8_,uVar1);
  lVar7 = *plVar4;
  if (lVar7 == 0) goto code_r0x0284f97c;
  if ((ulong)*(uint *)(lVar7 + 0x18) <= lVar6 - 8U) goto code_r0x0284f980;
  *(undefined4 *)(lVar7 + lVar6 * 4) = 0;
  lVar8 = lVar6 + -7;
  lVar6 = lVar6 + 1;
  if ((int)plVar4[1] <= lVar8) {
code_r0x0284f964:
    *(undefined4 *)(plVar4 + 1) = 0;
    return plVar2;
  }
  goto code_r0x0284f904;
}



// ============================================================
// RVA: 0x284f8d0 | Core.Containers.ReorderArray<int>.CopyToAndClear
// ============================================================

long * Core_Containers_ReorderArray_int___CopyToAndClear
                 (long *param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  plVar2 = param_1;
  if (0 < (int)param_1[1]) {
    lVar4 = *param_1;
    lVar6 = 8;
    do {
      if (lVar4 == 0) {
LAB_0284f97c:
        func_0x00f78af4();
LAB_0284f980:
        uVar3 = func_0x00f78b24();
        lVar6 = func_0x00f78ac0(uVar3,0);
        return (long *)(ulong)*(uint *)(lVar6 + 8);
      }
      if ((ulong)*(uint *)(lVar4 + 0x18) <= lVar6 - 8U) goto LAB_0284f980;
      uVar1 = *(undefined4 *)(lVar4 + lVar6 * 4);
      if ((*(ushort *)(*(long *)(param_3 + 0x18) + 0x132) & 1) == 0) {
        func_0x00fac028();
      }
      plVar2 = (long *)Core_Containers_ReorderArray_int___Add(param_2,uVar1);
      lVar4 = *param_1;
      if (lVar4 == 0) goto LAB_0284f97c;
      if ((ulong)*(uint *)(lVar4 + 0x18) <= lVar6 - 8U) goto LAB_0284f980;
      *(undefined4 *)(lVar4 + lVar6 * 4) = 0;
      lVar5 = lVar6 + -7;
      lVar6 = lVar6 + 1;
    } while (lVar5 < (int)param_1[1]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  return plVar2;
}



