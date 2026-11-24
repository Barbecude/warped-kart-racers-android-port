// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Containers.ReorderArray<object>

// ============================================================
// RVA: 0x284f98c | Core.Containers.ReorderArray<object>.get_Count
// ============================================================

undefined4 Core_Containers_ReorderArray_object___get_Count(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



// ============================================================
// RVA: 0x284f994 | Core.Containers.ReorderArray<object>.get_Capacity
// ============================================================

undefined4 Core_Containers_ReorderArray_object___get_Capacity(long *param_1)

{
  if (*param_1 != 0) {
    return *(undefined4 *)(*param_1 + 0x18);
  }
  return 0;
}



// ============================================================
// RVA: 0x284f9ac | Core.Containers.ReorderArray<object>.get_Item
// ============================================================

long * Core_Containers_ReorderArray_object___get_Item(long *param_1,uint param_2,long param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [16];
  
  lVar3 = *param_1;
  if (lVar3 == 0) {
    func_0x00f78af4();
  }
  else if (param_2 < *(uint *)(lVar3 + 0x18)) {
    return *(long **)(lVar3 + (long)(int)param_2 * 8 + 0x20);
  }
  uVar1 = func_0x00f78b24();
  auVar4 = func_0x00f78ac0(uVar1,0);
  lVar3 = *auVar4._0_8_;
  if (lVar3 == 0) {
    func_0x00f78af4();
  }
  else if (auVar4._8_4_ < *(uint *)(lVar3 + 0x18)) {
    *(long *)(lVar3 + (long)(int)auVar4._8_4_ * 8 + 0x20) = param_3;
    return auVar4._0_8_;
  }
  uVar1 = func_0x00f78b24();
  auVar5 = func_0x00f78ac0(uVar1,0);
  lVar3 = *(long *)(param_3 + 0x18);
  if ((*(ushort *)(lVar3 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar3);
  }
  lVar3 = **(long **)(lVar3 + 0xc0);
  if ((*(ushort *)(lVar3 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar3);
  }
  plVar2 = (long *)func_0x00f78a34(lVar3,auVar5._8_8_);
  *auVar5._0_8_ = plVar2;
  *(undefined4 *)(auVar5._0_8_ + 1) = 0;
  return plVar2;
}



// ============================================================
// RVA: 0x284f9e8 | Core.Containers.ReorderArray<object>.set_Item
// ============================================================

void Core_Containers_ReorderArray_object___set_Item(long *param_1,uint param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    func_0x00f78af4();
  }
  else if (param_2 < *(uint *)(lVar2 + 0x18)) {
    *(long *)(lVar2 + (long)(int)param_2 * 8 + 0x20) = param_3;
    return;
  }
  uVar1 = func_0x00f78b24();
  auVar3 = func_0x00f78ac0(uVar1,0);
  lVar2 = *(long *)(param_3 + 0x18);
  if ((*(ushort *)(lVar2 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar2);
  }
  lVar2 = **(long **)(lVar2 + 0xc0);
  if ((*(ushort *)(lVar2 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar2);
  }
  uVar1 = func_0x00f78a34(lVar2,auVar3._8_8_);
  *auVar3._0_8_ = uVar1;
  *(undefined4 *)(auVar3._0_8_ + 1) = 0;
  return;
}



// ============================================================
// RVA: 0x284fa24 | Core.Containers.ReorderArray<object>.Init
// ============================================================

void Core_Containers_ReorderArray_object___Init(undefined8 *param_1,undefined8 param_2,long param_3)

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
// RVA: 0x284fa8c | Core.Containers.ReorderArray<object>.DeInit
// ============================================================

void Core_Containers_ReorderArray_object___DeInit(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// ============================================================
// RVA: 0x284fa98 | Core.Containers.ReorderArray<object>.Add
// ============================================================

long * Core_Containers_ReorderArray_object___Add(long *param_1,undefined8 param_2,long param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined1 auVar4 [16];
  undefined1 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  undefined8 unaff_x19;
  ulong unaff_x20;
  ulong uVar12;
  long unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  long lVar13;
  code *unaff_x24;
  long lVar14;
  code *pcVar15;
  undefined8 ***pppuVar16;
  undefined *puVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 **ppuStack_20;
  undefined *puStack_18;
  undefined1 auVar3 [12];
  
  auVar19._8_8_ = unaff_x22;
  auVar19._0_8_ = unaff_x19;
  lVar10 = *param_1;
  if (lVar10 == 0) {
    func_0x00f78af4();
  }
  else {
    uVar2 = *(uint *)(param_1 + 1);
    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
      *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = param_2;
      *(uint *)(param_1 + 1) = uVar2 + 1;
      return param_1;
    }
  }
  uVar6 = func_0x00f78b24();
  auVar18 = func_0x00f78ac0(uVar6,0);
  plVar9 = auVar18._0_8_;
  puVar5 = &stack0xffffffffffffffb0;
  puStack_18 = &Core_Containers_ReorderArray_object___Remove;
  pppuVar16 = &ppuStack_20;
  plVar7 = plVar9;
  if (0 < (int)plVar9[1]) {
    uVar12 = 0;
    lVar10 = param_3;
    ppuStack_20 = (undefined8 **)&stack0xfffffffffffffff0;
    do {
      auVar4._8_8_ = uVar12;
      auVar4._0_8_ = plVar9;
      auVar3 = auVar4._0_12_;
      lVar14 = *(long *)(param_3 + 0x18);
      uVar1 = *(ushort *)(lVar14 + 0x132);
      lVar13 = lVar14;
      if ((uVar1 & 1) == 0) {
        func_0x00fac028(lVar14);
        lVar13 = *(long *)(param_3 + 0x18);
        uVar1 = *(ushort *)(lVar13 + 0x132);
      }
      pcVar15 = (code *)**(undefined8 **)(*(long *)(lVar14 + 0xc0) + 8);
      if ((uVar1 & 1) == 0) {
        func_0x00fac028(lVar13);
      }
      plVar7 = (long *)(*pcVar15)(*(undefined8 *)(*(long *)(lVar13 + 0xc0) + 8));
      lVar14 = *plVar9;
      if (lVar14 == 0) {
code_r0x0284fbd8:
        func_0x00f78af4();
code_r0x0284fbdc:
        uVar6 = func_0x00f78b24();
        puVar17 = &Core_Containers_ReorderArray_object___RemoveAt;
        auVar19 = func_0x00f78ac0(uVar6,0);
        auVar3 = auVar19._0_12_;
code_r0x0284fbe8:
        plVar7 = auVar3._0_8_;
        uVar6 = auVar18._8_8_;
        *(undefined8 ****)(puVar5 + -0x10) = pppuVar16;
        *(undefined **)(puVar5 + -8) = puVar17;
        uVar2 = (int)plVar7[1] - 1;
        *(uint *)(plVar7 + 1) = uVar2;
        lVar14 = *plVar7;
        if (lVar14 != 0) {
          if ((uVar2 < *(uint *)(lVar14 + 0x18)) && (auVar3._8_4_ < *(uint *)(lVar14 + 0x18))) {
            *(undefined8 *)(lVar14 + 0x20 + (long)(int)auVar3._8_4_ * 8) =
                 *(undefined8 *)(lVar14 + 0x20 + (long)(int)uVar2 * 8);
            lVar14 = *plVar7;
            if (lVar14 == 0) goto code_r0x0284fc58;
            if (uVar2 < *(uint *)(lVar14 + 0x18)) {
              *(undefined8 *)(lVar14 + (long)(int)uVar2 * 8 + 0x20) = 0;
              return plVar7;
            }
          }
          uVar8 = func_0x00f78b24();
          func_0x00f78ac0(uVar8,0);
        }
code_r0x0284fc58:
        plVar7 = (long *)func_0x00f78af4();
        *(undefined1 **)(puVar5 + -0x20) = puVar5 + -0x10;
        *(undefined **)(puVar5 + -0x18) = &Core_Containers_ReorderArray_object___Clear;
        uVar2 = *(uint *)(plVar7 + 1);
        if ((int)uVar2 < 1) goto code_r0x0284fc9c;
        uVar11 = 0;
        goto code_r0x0284fc74;
      }
      if (*(uint *)(lVar14 + 0x18) <= uVar12) goto code_r0x0284fbdc;
      if (plVar7 == (long *)0x0) goto code_r0x0284fbd8;
      lVar10 = auVar18._8_8_;
      plVar7 = (long *)(**(code **)(*plVar7 + 0x1b8))
                                 (plVar7,*(undefined8 *)(lVar14 + uVar12 * 8 + 0x20),auVar18._8_8_,
                                  *(undefined8 *)(*plVar7 + 0x1c0));
      if ((int)plVar7 != 0) {
        if ((*(ushort *)(*(long *)(param_3 + 0x18) + 0x132) & 1) == 0) {
          func_0x00fac028();
        }
        puVar5 = &stack0xfffffffffffffff0;
        uVar12 = unaff_x20;
        param_3 = unaff_x21;
        lVar13 = unaff_x23;
        pcVar15 = unaff_x24;
        pppuVar16 = (undefined8 ***)ppuStack_20;
        puVar17 = puStack_18;
        auVar18 = auVar19;
        goto code_r0x0284fbe8;
      }
      uVar12 = uVar12 + 1;
    } while ((long)uVar12 < (long)(int)plVar9[1]);
  }
  return plVar7;
code_r0x0284fc74:
  lVar14 = *plVar7;
  if (lVar14 == 0) {
    func_0x00f78af4();
code_r0x0284fcac:
    uVar8 = func_0x00f78b24();
    auVar19 = func_0x00f78ac0(uVar8,0);
    plVar7 = auVar19._0_8_;
    *(code **)(puVar5 + -0x60) = pcVar15;
    *(long *)(puVar5 + -0x58) = lVar13;
    *(undefined8 *)(puVar5 + -0x50) = uVar6;
    *(long *)(puVar5 + -0x48) = param_3;
    *(ulong *)(puVar5 + -0x40) = uVar12;
    *(long *)(puVar5 + -0x38) = auVar18._0_8_;
    *(undefined1 **)(puVar5 + -0x30) = puVar5 + -0x20;
    *(undefined **)(puVar5 + -0x28) = &Core_Containers_ReorderArray_object___CopyTo;
    if ((int)plVar7[1] < 1) {
      return plVar7;
    }
    uVar12 = 0;
    lVar13 = lVar10;
    goto code_r0x0284fce8;
  }
  if (*(uint *)(lVar14 + 0x18) <= uVar11) goto code_r0x0284fcac;
  *(undefined8 *)(lVar14 + uVar11 * 8 + 0x20) = 0;
  uVar11 = uVar11 + 1;
  if (uVar2 == uVar11) {
code_r0x0284fc9c:
    *(undefined4 *)(plVar7 + 1) = 0;
    return plVar7;
  }
  goto code_r0x0284fc74;
code_r0x0284fce8:
  lVar14 = *plVar7;
  if (lVar14 == 0) {
    func_0x00f78af4();
code_r0x0284fd48:
    uVar8 = func_0x00f78b24();
    auVar18 = func_0x00f78ac0(uVar8,0);
    plVar9 = auVar18._0_8_;
    *(code **)(puVar5 + -0xa0) = pcVar15;
    *(ulong *)(puVar5 + -0x98) = uVar12;
    *(undefined8 *)(puVar5 + -0x90) = uVar6;
    *(undefined1 (*) [16])(puVar5 + -0x88) = auVar19;
    *(long *)(puVar5 + -0x78) = lVar10;
    *(undefined1 **)(puVar5 + -0x70) = puVar5 + -0x30;
    *(undefined **)(puVar5 + -0x68) = &Core_Containers_ReorderArray_object___CopyToAndClear;
    plVar7 = plVar9;
    if ((int)plVar9[1] < 1) goto code_r0x0284fde8;
    lVar10 = 4;
    goto code_r0x0284fd84;
  }
  if (*(uint *)(lVar14 + 0x18) <= uVar12) goto code_r0x0284fd48;
  uVar6 = *(undefined8 *)(lVar14 + uVar12 * 8 + 0x20);
  if ((*(ushort *)(*(long *)(lVar10 + 0x18) + 0x132) & 1) == 0) {
    func_0x00fac028();
  }
  plVar9 = (long *)Core_Containers_ReorderArray_object___Add(auVar19._8_8_,uVar6);
  uVar12 = uVar12 + 1;
  if ((long)(int)plVar7[1] <= (long)uVar12) {
    return plVar9;
  }
  goto code_r0x0284fce8;
code_r0x0284fd84:
  lVar14 = *plVar9;
  if (lVar14 == 0) {
code_r0x0284fe00:
    func_0x00f78af4();
code_r0x0284fe04:
    uVar6 = func_0x00f78b24();
    lVar10 = func_0x00f78ac0(uVar6,0);
    return *(long **)(lVar10 + 0x18);
  }
  if ((ulong)*(uint *)(lVar14 + 0x18) <= lVar10 - 4U) goto code_r0x0284fe04;
  uVar6 = *(undefined8 *)(lVar14 + lVar10 * 8);
  if ((*(ushort *)(*(long *)(lVar13 + 0x18) + 0x132) & 1) == 0) {
    func_0x00fac028();
  }
  plVar7 = (long *)Core_Containers_ReorderArray_object___Add(auVar18._8_8_,uVar6);
  lVar14 = *plVar9;
  if (lVar14 == 0) goto code_r0x0284fe00;
  if ((ulong)*(uint *)(lVar14 + 0x18) <= lVar10 - 4U) goto code_r0x0284fe04;
  *(undefined8 *)(lVar14 + lVar10 * 8) = 0;
  lVar14 = lVar10 + -3;
  lVar10 = lVar10 + 1;
  if ((int)plVar9[1] <= lVar14) {
code_r0x0284fde8:
    *(undefined4 *)(plVar9 + 1) = 0;
    return plVar7;
  }
  goto code_r0x0284fd84;
}



// ============================================================
// RVA: 0x284fae0 | Core.Containers.ReorderArray<object>.Remove
// ============================================================

long * Core_Containers_ReorderArray_object___Remove(long *param_1,long param_2,long param_3)

{
  undefined1 *puVar1;
  ushort uVar2;
  uint uVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  long *unaff_x19;
  ulong unaff_x20;
  ulong uVar8;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long lVar9;
  long lVar10;
  code *unaff_x24;
  long lVar11;
  code *pcVar12;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  puVar1 = &stack0xfffffffffffffff0;
  plVar4 = param_1;
  if (0 < (int)param_1[1]) {
    uVar8 = 0;
    lVar10 = param_3;
    do {
      lVar11 = *(long *)(param_3 + 0x18);
      uVar2 = *(ushort *)(lVar11 + 0x132);
      lVar9 = lVar11;
      if ((uVar2 & 1) == 0) {
        func_0x00fac028(lVar11);
        lVar9 = *(long *)(param_3 + 0x18);
        uVar2 = *(ushort *)(lVar9 + 0x132);
      }
      pcVar12 = (code *)**(undefined8 **)(*(long *)(lVar11 + 0xc0) + 8);
      if ((uVar2 & 1) == 0) {
        func_0x00fac028(lVar9);
      }
      plVar4 = (long *)(*pcVar12)(*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 8));
      lVar11 = *param_1;
      if (lVar11 == 0) {
LAB_0284fbd8:
        func_0x00f78af4();
LAB_0284fbdc:
        uVar5 = func_0x00f78b24();
        unaff_x30 = &Core_Containers_ReorderArray_object___RemoveAt;
        auVar13 = func_0x00f78ac0(uVar5,0);
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
        plVar4 = auVar13._0_8_;
        uVar7 = auVar13._8_8_;
        unaff_x19 = param_1;
        unaff_x20 = uVar8;
        unaff_x21 = param_3;
        unaff_x22 = param_2;
        unaff_x23 = lVar9;
        unaff_x24 = pcVar12;
        unaff_x29 = puVar1;
code_r0x0284fbe8:
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
        uVar3 = (int)plVar4[1] - 1;
        *(uint *)(plVar4 + 1) = uVar3;
        lVar9 = *plVar4;
        if (lVar9 != 0) {
          if ((uVar3 < *(uint *)(lVar9 + 0x18)) && ((uint)uVar7 < *(uint *)(lVar9 + 0x18))) {
            *(undefined8 *)(lVar9 + 0x20 + (long)(int)(uint)uVar7 * 8) =
                 *(undefined8 *)(lVar9 + 0x20 + (long)(int)uVar3 * 8);
            lVar9 = *plVar4;
            if (lVar9 == 0) goto code_r0x0284fc58;
            if (uVar3 < *(uint *)(lVar9 + 0x18)) {
              *(undefined8 *)(lVar9 + (long)(int)uVar3 * 8 + 0x20) = 0;
              return plVar4;
            }
          }
          uVar5 = func_0x00f78b24();
          func_0x00f78ac0(uVar5,0);
        }
code_r0x0284fc58:
        plVar4 = (long *)func_0x00f78af4();
        *(undefined1 **)((long)register0x00000008 + -0x20) =
             (undefined1 *)((long)register0x00000008 + -0x10);
        *(undefined **)((long)register0x00000008 + -0x18) =
             &Core_Containers_ReorderArray_object___Clear;
        uVar3 = *(uint *)(plVar4 + 1);
        if ((int)uVar3 < 1) goto code_r0x0284fc9c;
        uVar8 = 0;
        goto code_r0x0284fc74;
      }
      if (*(uint *)(lVar11 + 0x18) <= uVar8) goto LAB_0284fbdc;
      if (plVar4 == (long *)0x0) goto LAB_0284fbd8;
      lVar10 = param_2;
      plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))
                                 (plVar4,*(undefined8 *)(lVar11 + uVar8 * 8 + 0x20),param_2,
                                  *(undefined8 *)(*plVar4 + 0x1c0));
      if ((int)plVar4 != 0) {
        plVar4 = param_1;
        uVar7 = uVar8;
        if ((*(ushort *)(*(long *)(param_3 + 0x18) + 0x132) & 1) == 0) {
          func_0x00fac028();
        }
        goto code_r0x0284fbe8;
      }
      uVar8 = uVar8 + 1;
    } while ((long)uVar8 < (long)(int)param_1[1]);
  }
  return plVar4;
code_r0x0284fc74:
  lVar9 = *plVar4;
  if (lVar9 == 0) {
    func_0x00f78af4();
code_r0x0284fcac:
    uVar5 = func_0x00f78b24();
    auVar13 = func_0x00f78ac0(uVar5,0);
    plVar4 = auVar13._0_8_;
    *(code **)((long)register0x00000008 + -0x60) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x58) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x50) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x48) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x38) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x30) =
         (undefined1 *)((long)register0x00000008 + -0x20);
    *(undefined **)((long)register0x00000008 + -0x28) =
         &Core_Containers_ReorderArray_object___CopyTo;
    if ((int)plVar4[1] < 1) {
      return plVar4;
    }
    uVar8 = 0;
    lVar9 = lVar10;
    goto code_r0x0284fce8;
  }
  if (*(uint *)(lVar9 + 0x18) <= uVar8) goto code_r0x0284fcac;
  *(undefined8 *)(lVar9 + uVar8 * 8 + 0x20) = 0;
  uVar8 = uVar8 + 1;
  if (uVar3 == uVar8) {
code_r0x0284fc9c:
    *(undefined4 *)(plVar4 + 1) = 0;
    return plVar4;
  }
  goto code_r0x0284fc74;
code_r0x0284fce8:
  lVar11 = *plVar4;
  if (lVar11 == 0) {
    func_0x00f78af4();
code_r0x0284fd48:
    uVar5 = func_0x00f78b24();
    auVar14 = func_0x00f78ac0(uVar5,0);
    plVar6 = auVar14._0_8_;
    *(code **)((long)register0x00000008 + -0xa0) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x98) = uVar8;
    *(long *)((long)register0x00000008 + -0x90) = unaff_x22;
    *(undefined1 (*) [16])((long)register0x00000008 + -0x88) = auVar13;
    *(long *)((long)register0x00000008 + -0x78) = lVar10;
    *(undefined1 **)((long)register0x00000008 + -0x70) =
         (undefined1 *)((long)register0x00000008 + -0x30);
    *(undefined **)((long)register0x00000008 + -0x68) =
         &Core_Containers_ReorderArray_object___CopyToAndClear;
    plVar4 = plVar6;
    if ((int)plVar6[1] < 1) goto code_r0x0284fde8;
    lVar10 = 4;
    goto code_r0x0284fd84;
  }
  if (*(uint *)(lVar11 + 0x18) <= uVar8) goto code_r0x0284fd48;
  unaff_x22 = *(long *)(lVar11 + uVar8 * 8 + 0x20);
  if ((*(ushort *)(*(long *)(lVar10 + 0x18) + 0x132) & 1) == 0) {
    func_0x00fac028();
  }
  plVar6 = (long *)Core_Containers_ReorderArray_object___Add(auVar13._8_8_,unaff_x22);
  uVar8 = uVar8 + 1;
  if ((long)(int)plVar4[1] <= (long)uVar8) {
    return plVar6;
  }
  goto code_r0x0284fce8;
code_r0x0284fd84:
  lVar11 = *plVar6;
  if (lVar11 == 0) {
code_r0x0284fe00:
    func_0x00f78af4();
code_r0x0284fe04:
    uVar5 = func_0x00f78b24();
    lVar10 = func_0x00f78ac0(uVar5,0);
    return *(long **)(lVar10 + 0x18);
  }
  if ((ulong)*(uint *)(lVar11 + 0x18) <= lVar10 - 4U) goto code_r0x0284fe04;
  uVar5 = *(undefined8 *)(lVar11 + lVar10 * 8);
  if ((*(ushort *)(*(long *)(lVar9 + 0x18) + 0x132) & 1) == 0) {
    func_0x00fac028();
  }
  plVar4 = (long *)Core_Containers_ReorderArray_object___Add(auVar14._8_8_,uVar5);
  lVar11 = *plVar6;
  if (lVar11 == 0) goto code_r0x0284fe00;
  if ((ulong)*(uint *)(lVar11 + 0x18) <= lVar10 - 4U) goto code_r0x0284fe04;
  *(undefined8 *)(lVar11 + lVar10 * 8) = 0;
  lVar11 = lVar10 + -3;
  lVar10 = lVar10 + 1;
  if ((int)plVar6[1] <= lVar11) {
code_r0x0284fde8:
    *(undefined4 *)(plVar6 + 1) = 0;
    return plVar4;
  }
  goto code_r0x0284fd84;
}



// ============================================================
// RVA: 0x284fbe8 | Core.Containers.ReorderArray<object>.RemoveAt
// ============================================================

long * Core_Containers_ReorderArray_object___RemoveAt(long *param_1,uint param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  uVar1 = (int)param_1[1] - 1;
  *(uint *)(param_1 + 1) = uVar1;
  lVar7 = *param_1;
  if (lVar7 != 0) {
    if ((uVar1 < *(uint *)(lVar7 + 0x18)) && (param_2 < *(uint *)(lVar7 + 0x18))) {
      *(undefined8 *)(lVar7 + 0x20 + (long)(int)param_2 * 8) =
           *(undefined8 *)(lVar7 + 0x20 + (long)(int)uVar1 * 8);
      lVar7 = *param_1;
      if (lVar7 == 0) goto LAB_0284fc58;
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = 0;
        return param_1;
      }
    }
    uVar2 = func_0x00f78b24();
    func_0x00f78ac0(uVar2,0);
  }
LAB_0284fc58:
  plVar3 = (long *)func_0x00f78af4();
  uVar1 = *(uint *)(plVar3 + 1);
  if (0 < (int)uVar1) {
    uVar8 = 0;
    do {
      lVar7 = *plVar3;
      if (lVar7 == 0) {
        func_0x00f78af4();
code_r0x0284fcac:
        uVar2 = func_0x00f78b24();
        auVar9 = func_0x00f78ac0(uVar2,0);
        plVar3 = auVar9._0_8_;
        if ((int)plVar3[1] < 1) {
          return plVar3;
        }
        uVar8 = 0;
        lVar7 = param_3;
        goto code_r0x0284fce8;
      }
      if (*(uint *)(lVar7 + 0x18) <= uVar8) goto code_r0x0284fcac;
      *(undefined8 *)(lVar7 + uVar8 * 8 + 0x20) = 0;
      uVar8 = uVar8 + 1;
    } while (uVar1 != uVar8);
  }
  *(undefined4 *)(plVar3 + 1) = 0;
  return plVar3;
code_r0x0284fce8:
  lVar5 = *plVar3;
  if (lVar5 == 0) {
    func_0x00f78af4();
code_r0x0284fd48:
    uVar2 = func_0x00f78b24();
    auVar9 = func_0x00f78ac0(uVar2,0);
    plVar4 = auVar9._0_8_;
    plVar3 = plVar4;
    if ((int)plVar4[1] < 1) goto code_r0x0284fde8;
    lVar5 = 4;
    goto code_r0x0284fd84;
  }
  if (*(uint *)(lVar5 + 0x18) <= uVar8) goto code_r0x0284fd48;
  uVar2 = *(undefined8 *)(lVar5 + uVar8 * 8 + 0x20);
  if ((*(ushort *)(*(long *)(param_3 + 0x18) + 0x132) & 1) == 0) {
    func_0x00fac028();
  }
  plVar4 = (long *)Core_Containers_ReorderArray_object___Add(auVar9._8_8_,uVar2);
  uVar8 = uVar8 + 1;
  if ((long)(int)plVar3[1] <= (long)uVar8) {
    return plVar4;
  }
  goto code_r0x0284fce8;
code_r0x0284fd84:
  lVar6 = *plVar4;
  if (lVar6 == 0) {
code_r0x0284fe00:
    func_0x00f78af4();
code_r0x0284fe04:
    uVar2 = func_0x00f78b24();
    lVar7 = func_0x00f78ac0(uVar2,0);
    return *(long **)(lVar7 + 0x18);
  }
  if ((ulong)*(uint *)(lVar6 + 0x18) <= lVar5 - 4U) goto code_r0x0284fe04;
  uVar2 = *(undefined8 *)(lVar6 + lVar5 * 8);
  if ((*(ushort *)(*(long *)(lVar7 + 0x18) + 0x132) & 1) == 0) {
    func_0x00fac028();
  }
  plVar3 = (long *)Core_Containers_ReorderArray_object___Add(auVar9._8_8_,uVar2);
  lVar6 = *plVar4;
  if (lVar6 == 0) goto code_r0x0284fe00;
  if ((ulong)*(uint *)(lVar6 + 0x18) <= lVar5 - 4U) goto code_r0x0284fe04;
  *(undefined8 *)(lVar6 + lVar5 * 8) = 0;
  lVar6 = lVar5 + -3;
  lVar5 = lVar5 + 1;
  if ((int)plVar4[1] <= lVar6) {
code_r0x0284fde8:
    *(undefined4 *)(plVar4 + 1) = 0;
    return plVar3;
  }
  goto code_r0x0284fd84;
}



// ============================================================
// RVA: 0x284fc5c | Core.Containers.ReorderArray<object>.Clear
// ============================================================

long * Core_Containers_ReorderArray_object___Clear(long *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  
  uVar1 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar1) {
    uVar7 = 0;
    do {
      lVar8 = *param_1;
      if (lVar8 == 0) {
        func_0x00f78af4();
LAB_0284fcac:
        uVar2 = func_0x00f78b24();
        auVar9 = func_0x00f78ac0(uVar2,0);
        plVar4 = auVar9._0_8_;
        if ((int)plVar4[1] < 1) {
          return plVar4;
        }
        uVar7 = 0;
        lVar8 = param_3;
        goto code_r0x0284fce8;
      }
      if (*(uint *)(lVar8 + 0x18) <= uVar7) goto LAB_0284fcac;
      *(undefined8 *)(lVar8 + uVar7 * 8 + 0x20) = 0;
      uVar7 = uVar7 + 1;
    } while (uVar1 != uVar7);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  return param_1;
code_r0x0284fce8:
  lVar5 = *plVar4;
  if (lVar5 == 0) {
    func_0x00f78af4();
code_r0x0284fd48:
    uVar2 = func_0x00f78b24();
    auVar9 = func_0x00f78ac0(uVar2,0);
    plVar3 = auVar9._0_8_;
    plVar4 = plVar3;
    if ((int)plVar3[1] < 1) goto code_r0x0284fde8;
    lVar5 = 4;
    goto code_r0x0284fd84;
  }
  if (*(uint *)(lVar5 + 0x18) <= uVar7) goto code_r0x0284fd48;
  uVar2 = *(undefined8 *)(lVar5 + uVar7 * 8 + 0x20);
  if ((*(ushort *)(*(long *)(param_3 + 0x18) + 0x132) & 1) == 0) {
    func_0x00fac028();
  }
  plVar3 = (long *)Core_Containers_ReorderArray_object___Add(auVar9._8_8_,uVar2);
  uVar7 = uVar7 + 1;
  if ((long)(int)plVar4[1] <= (long)uVar7) {
    return plVar3;
  }
  goto code_r0x0284fce8;
code_r0x0284fd84:
  lVar6 = *plVar3;
  if (lVar6 == 0) {
code_r0x0284fe00:
    func_0x00f78af4();
code_r0x0284fe04:
    uVar2 = func_0x00f78b24();
    lVar8 = func_0x00f78ac0(uVar2,0);
    return *(long **)(lVar8 + 0x18);
  }
  if ((ulong)*(uint *)(lVar6 + 0x18) <= lVar5 - 4U) goto code_r0x0284fe04;
  uVar2 = *(undefined8 *)(lVar6 + lVar5 * 8);
  if ((*(ushort *)(*(long *)(lVar8 + 0x18) + 0x132) & 1) == 0) {
    func_0x00fac028();
  }
  plVar4 = (long *)Core_Containers_ReorderArray_object___Add(auVar9._8_8_,uVar2);
  lVar6 = *plVar3;
  if (lVar6 == 0) goto code_r0x0284fe00;
  if ((ulong)*(uint *)(lVar6 + 0x18) <= lVar5 - 4U) goto code_r0x0284fe04;
  *(undefined8 *)(lVar6 + lVar5 * 8) = 0;
  lVar6 = lVar5 + -3;
  lVar5 = lVar5 + 1;
  if ((int)plVar3[1] <= lVar6) {
code_r0x0284fde8:
    *(undefined4 *)(plVar3 + 1) = 0;
    return plVar4;
  }
  goto code_r0x0284fd84;
}



// ============================================================
// RVA: 0x284fcb8 | Core.Containers.ReorderArray<object>.CopyTo
// ============================================================

long * Core_Containers_ReorderArray_object___CopyTo(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  plVar1 = param_1;
  if (0 < (int)param_1[1]) {
    uVar7 = 0;
    lVar3 = param_3;
    do {
      lVar4 = *param_1;
      if (lVar4 == 0) {
        func_0x00f78af4();
LAB_0284fd48:
        uVar6 = func_0x00f78b24();
        auVar8 = func_0x00f78ac0(uVar6,0);
        plVar2 = auVar8._0_8_;
        plVar1 = plVar2;
        if ((int)plVar2[1] < 1) goto code_r0x0284fde8;
        lVar4 = 4;
        goto code_r0x0284fd84;
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar7) goto LAB_0284fd48;
      uVar6 = *(undefined8 *)(lVar4 + uVar7 * 8 + 0x20);
      if ((*(ushort *)(*(long *)(param_3 + 0x18) + 0x132) & 1) == 0) {
        func_0x00fac028();
      }
      plVar1 = (long *)Core_Containers_ReorderArray_object___Add(param_2,uVar6);
      uVar7 = uVar7 + 1;
    } while ((long)uVar7 < (long)(int)param_1[1]);
  }
  return plVar1;
code_r0x0284fd84:
  lVar5 = *plVar2;
  if (lVar5 == 0) {
code_r0x0284fe00:
    func_0x00f78af4();
code_r0x0284fe04:
    uVar6 = func_0x00f78b24();
    lVar3 = func_0x00f78ac0(uVar6,0);
    return *(long **)(lVar3 + 0x18);
  }
  if ((ulong)*(uint *)(lVar5 + 0x18) <= lVar4 - 4U) goto code_r0x0284fe04;
  uVar6 = *(undefined8 *)(lVar5 + lVar4 * 8);
  if ((*(ushort *)(*(long *)(lVar3 + 0x18) + 0x132) & 1) == 0) {
    func_0x00fac028();
  }
  plVar1 = (long *)Core_Containers_ReorderArray_object___Add(auVar8._8_8_,uVar6);
  lVar5 = *plVar2;
  if (lVar5 == 0) goto code_r0x0284fe00;
  if ((ulong)*(uint *)(lVar5 + 0x18) <= lVar4 - 4U) goto code_r0x0284fe04;
  *(undefined8 *)(lVar5 + lVar4 * 8) = 0;
  lVar5 = lVar4 + -3;
  lVar4 = lVar4 + 1;
  if ((int)plVar2[1] <= lVar5) {
code_r0x0284fde8:
    *(undefined4 *)(plVar2 + 1) = 0;
    return plVar1;
  }
  goto code_r0x0284fd84;
}



// ============================================================
// RVA: 0x284fd54 | Core.Containers.ReorderArray<object>.CopyToAndClear
// ============================================================

long * Core_Containers_ReorderArray_object___CopyToAndClear
                 (long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  plVar1 = param_1;
  if (0 < (int)param_1[1]) {
    lVar4 = 4;
    do {
      lVar2 = *param_1;
      if (lVar2 == 0) {
LAB_0284fe00:
        func_0x00f78af4();
LAB_0284fe04:
        uVar3 = func_0x00f78b24();
        lVar4 = func_0x00f78ac0(uVar3,0);
        return *(long **)(lVar4 + 0x18);
      }
      if ((ulong)*(uint *)(lVar2 + 0x18) <= lVar4 - 4U) goto LAB_0284fe04;
      uVar3 = *(undefined8 *)(lVar2 + lVar4 * 8);
      if ((*(ushort *)(*(long *)(param_3 + 0x18) + 0x132) & 1) == 0) {
        func_0x00fac028();
      }
      plVar1 = (long *)Core_Containers_ReorderArray_object___Add(param_2,uVar3);
      lVar2 = *param_1;
      if (lVar2 == 0) goto LAB_0284fe00;
      if ((ulong)*(uint *)(lVar2 + 0x18) <= lVar4 - 4U) goto LAB_0284fe04;
      *(undefined8 *)(lVar2 + lVar4 * 8) = 0;
      lVar2 = lVar4 + -3;
      lVar4 = lVar4 + 1;
    } while (lVar2 < (int)param_1[1]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  return plVar1;
}



