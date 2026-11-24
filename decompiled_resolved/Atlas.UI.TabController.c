// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.TabController

// ============================================================
// RVA: 0x1507f4c | Atlas.UI.TabController.add_OnTabChanged
// ============================================================

long Atlas_UI_TabController__add_OnTabChanged(long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000003eb4d28 & 1) == 0) {
    func_0x00f78a20(0x3d1b6c0);
    bRam0000000003eb4d28 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x18);
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar5,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<TabController.TabPanel, TabController.TabPanel>_TypeInfo*/ lRam0000000003d1b6c0))) {
    lVar3 = func_0x00ff0f44((long *)(param_1 + 0x18),plVar2,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  auVar6 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003eb4d29 & 1) == 0) {
    func_0x00f78a20(0x3d1b6c0);
    bRam0000000003eb4d29 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0x18);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*System.Action<TabController.TabPanel, TabController.TabPanel>_TypeInfo*/ lRam0000000003d1b6c0))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  lVar5 = func_0x00f78e5c(plVar4);
  return *(long *)(lVar5 + 0x20);
}



// ============================================================
// RVA: 0x1507fec | Atlas.UI.TabController.remove_OnTabChanged
// ============================================================

long Atlas_UI_TabController__remove_OnTabChanged(long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  if ((bRam0000000003eb4d29 & 1) == 0) {
    func_0x00f78a20(0x3d1b6c0);
    bRam0000000003eb4d29 = 1;
  }
  lVar4 = *(long *)(param_1 + 0x18);
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar4,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<TabController.TabPanel, TabController.TabPanel>_TypeInfo*/ lRam0000000003d1b6c0))) {
    lVar3 = func_0x00ff0f44((long *)(param_1 + 0x18),plVar2,lVar4);
    bVar1 = lVar4 == lVar3;
    lVar4 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  lVar4 = func_0x00f78e5c(plVar2);
  return *(long *)(lVar4 + 0x20);
}



// ============================================================
// RVA: 0x150808c | Atlas.UI.TabController.get_Tabs
// ============================================================

undefined8 Atlas_UI_TabController__get_Tabs(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x1508094 | Atlas.UI.TabController.get_CurrentTab
// ============================================================

undefined8 Atlas_UI_TabController__get_CurrentTab(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x150809c | Atlas.UI.TabController.Init
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1508368 | Atlas.UI.TabController.SelectTab
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15084a8 | Atlas.UI.TabController.DeInit
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15084b0 | Atlas.UI.TabController.SelectPreviousTab
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15084dc | Atlas.UI.TabController.GetSelectedTab
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1508530 | Atlas.UI.TabController.SelectNextTab
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x150855c | Atlas.UI.TabController.SetSelectedGameObjectInTab
// ============================================================

/* WARNING: Possible PIC construction at 0x015085ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015087c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015087f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01508840: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015088a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015088e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164aba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164ad08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015089fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01508a90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01508a00) */
/* WARNING: Removing unreachable block (ram,0x01508a04) */
/* WARNING: Removing unreachable block (ram,0x01508a0c) */
/* WARNING: Removing unreachable block (ram,0x01508a18) */
/* WARNING: Removing unreachable block (ram,0x01508a28) */
/* WARNING: Removing unreachable block (ram,0x01508a30) */
/* WARNING: Removing unreachable block (ram,0x01508a40) */
/* WARNING: Removing unreachable block (ram,0x01508a4c) */
/* WARNING: Removing unreachable block (ram,0x01508a58) */
/* WARNING: Removing unreachable block (ram,0x01508a64) */
/* WARNING: Removing unreachable block (ram,0x01508a70) */
/* WARNING: Removing unreachable block (ram,0x01508ad0) */
/* WARNING: Removing unreachable block (ram,0x01508ad4) */
/* WARNING: Removing unreachable block (ram,0x01508af0) */
/* WARNING: Removing unreachable block (ram,0x01508af8) */
/* WARNING: Removing unreachable block (ram,0x01508b04) */
/* WARNING: Removing unreachable block (ram,0x01508b08) */
/* WARNING: Removing unreachable block (ram,0x01508b40) */
/* WARNING: Removing unreachable block (ram,0x01508b4c) */
/* WARNING: Removing unreachable block (ram,0x01508b10) */
/* WARNING: Removing unreachable block (ram,0x01508b34) */
/* WARNING: Removing unreachable block (ram,0x01508b20) */
/* WARNING: Removing unreachable block (ram,0x01508b2c) */
/* WARNING: Removing unreachable block (ram,0x01508a84) */
/* WARNING: Removing unreachable block (ram,0x0164ad0c) */
/* WARNING: Removing unreachable block (ram,0x0164ad68) */
/* WARNING: Removing unreachable block (ram,0x0164ad10) */
/* WARNING: Removing unreachable block (ram,0x0164ad1c) */
/* WARNING: Removing unreachable block (ram,0x0164ad24) */
/* WARNING: Removing unreachable block (ram,0x0164ad28) */
/* WARNING: Removing unreachable block (ram,0x0164ad78) */
/* WARNING: Removing unreachable block (ram,0x0164ad9c) */
/* WARNING: Removing unreachable block (ram,0x0164adb0) */
/* WARNING: Removing unreachable block (ram,0x0164add0) */
/* WARNING: Removing unreachable block (ram,0x0164adc0) */
/* WARNING: Removing unreachable block (ram,0x0164add4) */
/* WARNING: Removing unreachable block (ram,0x0164ad34) */
/* WARNING: Removing unreachable block (ram,0x0164ad44) */
/* WARNING: Removing unreachable block (ram,0x0164ad4c) */
/* WARNING: Removing unreachable block (ram,0x0164ad50) */
/* WARNING: Removing unreachable block (ram,0x0164aba4) */
/* WARNING: Removing unreachable block (ram,0x0164abbc) */
/* WARNING: Removing unreachable block (ram,0x0164abcc) */
/* WARNING: Removing unreachable block (ram,0x0164a1b8) */
/* WARNING: Removing unreachable block (ram,0x0164a1e0) */
/* WARNING: Removing unreachable block (ram,0x0164a20c) */
/* WARNING: Removing unreachable block (ram,0x0164a228) */
/* WARNING: Removing unreachable block (ram,0x0164a230) */
/* WARNING: Removing unreachable block (ram,0x0164a234) */
/* WARNING: Removing unreachable block (ram,0x0164a24c) */
/* WARNING: Removing unreachable block (ram,0x0164a254) */
/* WARNING: Removing unreachable block (ram,0x0164a264) */
/* WARNING: Removing unreachable block (ram,0x0164a274) */
/* WARNING: Removing unreachable block (ram,0x0164a28c) */
/* WARNING: Removing unreachable block (ram,0x0164a2a8) */
/* WARNING: Removing unreachable block (ram,0x0164a2b0) */
/* WARNING: Removing unreachable block (ram,0x0164a2b4) */
/* WARNING: Removing unreachable block (ram,0x0164a2c4) */
/* WARNING: Removing unreachable block (ram,0x0164a2d0) */
/* WARNING: Removing unreachable block (ram,0x0164a2d4) */
/* WARNING: Removing unreachable block (ram,0x0164a308) */
/* WARNING: Removing unreachable block (ram,0x0164a30c) */
/* WARNING: Removing unreachable block (ram,0x0164a2f4) */
/* WARNING: Removing unreachable block (ram,0x0164a2f8) */
/* WARNING: Removing unreachable block (ram,0x015088e4) */
/* WARNING: Removing unreachable block (ram,0x015088e8) */
/* WARNING: Removing unreachable block (ram,0x0164aa78) */
/* WARNING: Removing unreachable block (ram,0x0164aaac) */
/* WARNING: Removing unreachable block (ram,0x0164aad8) */
/* WARNING: Removing unreachable block (ram,0x0164aae8) */
/* WARNING: Removing unreachable block (ram,0x0164aaf0) */
/* WARNING: Removing unreachable block (ram,0x0164aafc) */
/* WARNING: Removing unreachable block (ram,0x0164aba8) */
/* WARNING: Removing unreachable block (ram,0x0164ab10) */
/* WARNING: Removing unreachable block (ram,0x0164ab14) */
/* WARNING: Removing unreachable block (ram,0x0164ab24) */
/* WARNING: Removing unreachable block (ram,0x0164ab40) */
/* WARNING: Removing unreachable block (ram,0x0164ab48) */
/* WARNING: Removing unreachable block (ram,0x0164ab4c) */
/* WARNING: Removing unreachable block (ram,0x0164ab58) */
/* WARNING: Removing unreachable block (ram,0x0164abe0) */
/* WARNING: Removing unreachable block (ram,0x0164abe4) */
/* WARNING: Removing unreachable block (ram,0x0164ac18) */
/* WARNING: Removing unreachable block (ram,0x0164ac2c) */
/* WARNING: Removing unreachable block (ram,0x0164ac3c) */
/* WARNING: Removing unreachable block (ram,0x0164ac68) */
/* WARNING: Removing unreachable block (ram,0x0164ac44) */
/* WARNING: Removing unreachable block (ram,0x0164ac6c) */
/* WARNING: Removing unreachable block (ram,0x0164ac9c) */
/* WARNING: Removing unreachable block (ram,0x0164acbc) */
/* WARNING: Removing unreachable block (ram,0x0164acd0) */
/* WARNING: Removing unreachable block (ram,0x0164acd8) */
/* WARNING: Removing unreachable block (ram,0x0164acdc) */
/* WARNING: Removing unreachable block (ram,0x0164acf4) */
/* WARNING: Removing unreachable block (ram,0x0164acfc) */
/* WARNING: Removing unreachable block (ram,0x0164ad00) */
/* WARNING: Removing unreachable block (ram,0x0164ac50) */
/* WARNING: Removing unreachable block (ram,0x0164ab74) */
/* WARNING: Removing unreachable block (ram,0x0164ab78) */
/* WARNING: Removing unreachable block (ram,0x0164ab8c) */
/* WARNING: Removing unreachable block (ram,0x0164ab94) */
/* WARNING: Removing unreachable block (ram,0x0164ab98) */
/* WARNING: Removing unreachable block (ram,0x015088a8) */
/* WARNING: Removing unreachable block (ram,0x015088ac) */
/* WARNING: Removing unreachable block (ram,0x015088b0) */
/* WARNING: Removing unreachable block (ram,0x01508844) */
/* WARNING: Removing unreachable block (ram,0x01508848) */
/* WARNING: Removing unreachable block (ram,0x01508850) */
/* WARNING: Removing unreachable block (ram,0x0150885c) */
/* WARNING: Removing unreachable block (ram,0x01508868) */
/* WARNING: Removing unreachable block (ram,0x01508870) */
/* WARNING: Removing unreachable block (ram,0x01508890) */
/* WARNING: Removing unreachable block (ram,0x01508898) */
/* WARNING: Removing unreachable block (ram,0x0150889c) */
/* WARNING: Removing unreachable block (ram,0x015087f4) */
/* WARNING: Removing unreachable block (ram,0x015088c0) */
/* WARNING: Removing unreachable block (ram,0x015088cc) */
/* WARNING: Removing unreachable block (ram,0x015088d4) */
/* WARNING: Removing unreachable block (ram,0x015088d8) */
/* WARNING: Removing unreachable block (ram,0x015087f8) */
/* WARNING: Removing unreachable block (ram,0x01508800) */
/* WARNING: Removing unreachable block (ram,0x0150880c) */
/* WARNING: Removing unreachable block (ram,0x01508920) */
/* WARNING: Removing unreachable block (ram,0x01508924) */
/* WARNING: Removing unreachable block (ram,0x0150881c) */
/* WARNING: Removing unreachable block (ram,0x0150882c) */
/* WARNING: Removing unreachable block (ram,0x01508834) */
/* WARNING: Removing unreachable block (ram,0x01508838) */
/* WARNING: Removing unreachable block (ram,0x015087cc) */
/* WARNING: Removing unreachable block (ram,0x015087dc) */
/* WARNING: Removing unreachable block (ram,0x015087e4) */
/* WARNING: Removing unreachable block (ram,0x015087e8) */
/* WARNING: Removing unreachable block (ram,0x015085f0) */
/* WARNING: Removing unreachable block (ram,0x015085f4) */
/* WARNING: Removing unreachable block (ram,0x015085fc) */
/* WARNING: Removing unreachable block (ram,0x01508600) */
/* WARNING: Removing unreachable block (ram,0x01508644) */
/* WARNING: Removing unreachable block (ram,0x01508614) */
/* WARNING: Removing unreachable block (ram,0x01508620) */
/* WARNING: Removing unreachable block (ram,0x01508a94) */
/* WARNING: Removing unreachable block (ram,0x01508ab0) */
/* WARNING: Removing unreachable block (ram,0x0327736c) */
/* WARNING: Removing unreachable block (ram,0x03277390) */
/* WARNING: Removing unreachable block (ram,0x032773a4) */
/* WARNING: Removing unreachable block (ram,0x01508a98) */
/* WARNING: Removing unreachable block (ram,0x01508a9c) */

ulong Atlas_UI_TabController__SetSelectedGameObjectInTab
                (ulong param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  ushort uVar2;
  undefined1 **ppuVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  int *piVar18;
  long *plVar19;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  code *pcVar20;
  undefined1 *puVar21;
  undefined1 **ppuVar22;
  undefined *puVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  long lVar13;
  
  auVar25._8_8_ = param_3;
  auVar25._0_8_ = param_1;
  auVar24._8_8_ = param_1;
  auVar24._0_8_ = param_3;
  ppuVar3 = (undefined1 **)&stack0xffffffffffffffd0;
  ppuVar22 = (undefined1 **)&stack0xfffffffffffffff0;
  uVar8 = param_1;
  if ((bRam0000000003eb4d2d & 1) == 0) {
    uVar8 = func_0x00f78a20(0x3d1f018);
    bRam0000000003eb4d2d = 1;
  }
  if (*(long *)(param_1 + 0x30) == 0) {
    if (*(long *)(param_1 + 0x20) == 0) goto code_r0x01508638;
    uVar8 = func_0x00f78a34(/*UnityEngine.GameObject[]_TypeInfo*/ uRam0000000003d1f018,*(undefined4 *)(*(long *)(param_1 + 0x20) + 0x18));
    *(ulong *)(param_1 + 0x30) = uVar8;
  }
  if ((int)param_2 < 0) {
    return uVar8;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x20) + 0x18) <= (int)param_2) {
      return uVar8;
    }
    puVar23 = &UNK_015085f0;
    uVar9 = param_2;
code_r0x01508994:
    *(undefined8 *)((long)ppuVar3 + -0x40) = unaff_x24;
    *(undefined8 *)((long)ppuVar3 + -0x38) = unaff_x23;
    *(undefined8 *)((long)ppuVar3 + -0x30) = 0x3eb4000;
    *(long *)((long)ppuVar3 + -0x28) = auVar24._8_8_;
    *(undefined8 *)((long)ppuVar3 + -0x20) = uVar9;
    *(long *)((long)ppuVar3 + -0x18) = auVar24._0_8_;
    *(undefined1 ***)((long)ppuVar3 + -0x10) = ppuVar22;
    *(undefined **)((long)ppuVar3 + -8) = puVar23;
    if ((bRam0000000003eb4d2f & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4d2f = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    *(undefined8 *)((long)ppuVar3 + -0x70) = 0x3eb4000;
    *(long *)((long)ppuVar3 + -0x68) = auVar25._0_8_;
    *(undefined8 *)((long)ppuVar3 + -0x60) = param_2;
    *(long *)((long)ppuVar3 + -0x58) = auVar25._8_8_;
    *(undefined1 **)((long)ppuVar3 + -0x50) = (undefined1 *)((long)ppuVar3 + -0x10);
    *(undefined **)((long)ppuVar3 + -0x48) = &UNK_01508a00;
    if ((bRam0000000003ec021a & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ec021a = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar7 = /*UnityEngine.Object$$CompareBaseObjects*/ func_0x03248740(auVar25._8_8_,0);
    return (ulong)(uVar7 ^ 1);
  }
code_r0x01508638:
  param_2 = param_3;
  func_0x00f78af4();
  uVar9 = func_0x00f78b24();
  auVar24 = func_0x00f78ac0(uVar9,0);
  lVar13 = auVar24._8_8_;
  uVar11 = auVar24._0_8_;
  uVar8 = uVar11;
  if ((bRam0000000003eb4d2e & 1) == 0) {
    uVar8 = func_0x00f78a20(0x3d2a578);
    bRam0000000003eb4d2e = 1;
  }
  if (*(long *)(uVar11 + 0x28) == lVar13) {
    return uVar8;
  }
  lVar14 = *(long *)(uVar11 + 0x20);
  if (lVar14 != 0) {
    uVar8 = 0;
    do {
      if ((long)(int)*(uint *)(lVar14 + 0x18) <= (long)uVar8) goto code_r0x015086ec;
      if (*(uint *)(lVar14 + 0x18) <= uVar8) {
        uVar9 = func_0x00f78b24();
        auVar24 = func_0x00f78ac0(uVar9,0);
        lVar13 = auVar24._0_8_;
        uVar9 = 0x3eb4000;
        if ((bRam0000000003eb4d2c & 1) == 0) {
          func_0x00f78a20(0x3d57998);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4d2c = 1;
        }
        uVar10 = /*Core.Input.InputManager$$get_CurrentInputFamily*/ func_0x01649514(0);
        uVar8 = /*Core.Input.InputManagerExtensions$$IsControllerOrKeyboard*/ func_0x0164bbd0(uVar10,0);
        if (((uVar8 & 1) == 0) && (*(char *)(lVar13 + 0x52) == '\0')) {
          return uVar8;
        }
        unaff_x23 = 0x3d23990;
        ppuVar3 = &puStack_b0;
        ppuVar22 = &puStack_b0;
        puStack_a8 = &UNK_015087cc;
        uVar7 = auVar24._8_4_;
        if ((int)uVar7 < 0) {
          return 0;
        }
        lVar14 = *(long *)(lVar13 + 0x30);
        if (lVar14 == 0) {
          return 0;
        }
        puStack_b0 = &stack0xffffffffffffff90;
        if (*(long *)(lVar13 + 0x20) == 0) {
          func_0x00f78af4(0);
        }
        else {
          if (*(int *)(*(long *)(lVar13 + 0x20) + 0x18) <= (int)uVar7) {
            return 0;
          }
          if (uVar7 < *(uint *)(lVar14 + 0x18)) {
            return *(ulong *)(lVar14 + (auVar24._8_8_ & 0xffffffff) * 8 + 0x20);
          }
        }
        uVar10 = func_0x00f78b24();
        puVar23 = &Atlas_UI_TabController__IsItemInTab;
        auVar25 = func_0x00f78ac0(uVar10,0);
        goto code_r0x01508994;
      }
      lVar17 = *(long *)(lVar14 + uVar8 * 8 + 0x20);
      if (lVar17 != lVar13) {
        if ((lVar17 == 0) || (*(long *)(lVar17 + 0x18) == 0)) break;
        param_2 = 0;
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar17 + 0x18),0);
        lVar14 = *(long *)(uVar11 + 0x20);
      }
      uVar8 = uVar8 + 1;
    } while (lVar14 != 0);
  }
  do {
    func_0x00f78af4();
code_r0x015086ec:
    plVar19 = *(long **)(uVar11 + 0x28);
    *(long *)(uVar11 + 0x28) = lVar13;
  } while ((lVar13 == 0) || (*(long *)(lVar13 + 0x18) == 0));
  /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar13 + 0x18),1,0);
  uVar8 = *(ulong *)(uVar11 + 0x18);
  if (uVar8 == 0) {
    return 0;
  }
  lVar14 = *(long *)(uVar8 + 0x68);
  if (lVar14 == 0) {
    puVar21 = &stack0xffffffffffffff68;
    lVar17 = 1;
  }
  else {
    lVar17 = *(long *)(lVar14 + 0x18);
    if (lVar17 == 0) {
      return uVar8;
    }
    puVar21 = (undefined1 *)(lVar14 + 0x20);
  }
  lVar14 = 0;
  do {
    lVar15 = *(long *)(puVar21 + lVar14 * 8);
    pcVar20 = *(code **)(lVar15 + 0x10);
    plVar1 = *(long **)(lVar15 + 0x20);
    lVar15 = *(long *)(lVar15 + 0x28);
    if (*(short *)(lVar15 + 0x48) == -1) {
      func_0x00f78ad8(lVar15);
    }
    iVar5 = func_0x00f78a4c(lVar15);
    bVar4 = *(char *)(lVar15 + 0x4a) == '\x02';
    if (iVar5 == 0) {
      if (bVar4) {
        if (plVar1 == (long *)0x0) {
code_r0x01e6ecc8:
          uVar11 = (*pcVar20)(plVar19,lVar13,lVar15);
        }
        else {
          if (((*(short *)(lVar15 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(uVar8 + 0x18) == 0)) goto code_r0x01e6ebbc;
          iVar5 = func_0x00f78a44(lVar15);
          iVar6 = func_0x00f78ec0(lVar15);
          if (iVar5 == 0) {
            uVar2 = *(ushort *)(lVar15 + 0x48);
            if (iVar6 == 0) {
              lVar15 = *plVar1 + (ulong)uVar2 * 0x10;
              uVar11 = (**(code **)(lVar15 + 0x138))
                                 (plVar1,plVar19,lVar13,*(undefined8 *)(lVar15 + 0x140));
              goto code_r0x01e6ecd8;
            }
            lVar15 = func_0x00f78a48(lVar15);
            lVar16 = *plVar1;
            uVar11 = (ulong)*(ushort *)(lVar16 + 0x12a);
            if (uVar11 != 0) {
              piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == lVar15) {
                  puVar12 = (undefined8 *)
                            (lVar16 + (long)(int)(*piVar18 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x01e6ee70;
                }
                piVar18 = piVar18 + 4;
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
            puVar12 = (undefined8 *)func_0x00fac1f0(plVar1,lVar15,(ulong)uVar2);
code_r0x01e6ee70:
            pcVar20 = (code *)*puVar12;
            puVar12 = (undefined8 *)puVar12[1];
          }
          else {
            if (iVar6 == 0) {
              uVar9 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar15 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar16 = *plVar1;
              uVar11 = (ulong)*(ushort *)(lVar16 + 0x12a);
              if (uVar11 != 0) {
                piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == *(long *)(lVar15 + 0x18)) {
                    lVar16 = lVar16 + (long)(int)(*piVar18 + (uint)*(ushort *)(lVar15 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01e6ee48;
                  }
                  piVar18 = piVar18 + 4;
                  uVar11 = uVar11 - 1;
                } while (uVar11 != 0);
              }
              lVar16 = func_0x00fac1f0(plVar1);
code_r0x01e6ee48:
              uVar9 = *(undefined8 *)(lVar16 + 8);
            }
            puVar12 = (undefined8 *)func_0x00f78acc(uVar9,lVar15);
            pcVar20 = (code *)*puVar12;
          }
          uVar11 = (*pcVar20)(plVar1,plVar19,lVar13,puVar12);
        }
      }
      else {
        if ((*(short *)(lVar15 + 0x48) == -1) || (*(long *)(uVar8 + 0x18) == 0))
        goto code_r0x01e6ecc8;
        iVar5 = func_0x00f78a44(lVar15);
        iVar6 = func_0x00f78ec0(lVar15);
        if (iVar5 == 0) {
          uVar2 = *(ushort *)(lVar15 + 0x48);
          if (iVar6 == 0) {
            lVar15 = *plVar19 + (ulong)uVar2 * 0x10;
            uVar11 = (**(code **)(lVar15 + 0x138))(plVar19,lVar13,*(undefined8 *)(lVar15 + 0x140));
            goto code_r0x01e6ecd8;
          }
          lVar15 = func_0x00f78a48(lVar15);
          lVar16 = *plVar19;
          uVar11 = (ulong)*(ushort *)(lVar16 + 0x12a);
          if (uVar11 != 0) {
            piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == lVar15) {
                puVar12 = (undefined8 *)
                          (lVar16 + (long)(int)(*piVar18 + (uint)uVar2) * 0x10 + 0x138);
                goto code_r0x01e6ee04;
              }
              piVar18 = piVar18 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          puVar12 = (undefined8 *)func_0x00fac1f0(plVar19,lVar15,(ulong)uVar2);
code_r0x01e6ee04:
          pcVar20 = (code *)*puVar12;
          puVar12 = (undefined8 *)puVar12[1];
        }
        else {
          if (iVar6 == 0) {
            uVar9 = *(undefined8 *)(*plVar19 + (ulong)*(ushort *)(lVar15 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar16 = *plVar19;
            uVar11 = (ulong)*(ushort *)(lVar16 + 0x12a);
            if (uVar11 != 0) {
              piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)(lVar15 + 0x18)) {
                  lVar16 = lVar16 + (long)(int)(*piVar18 + (uint)*(ushort *)(lVar15 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01e6eddc;
                }
                piVar18 = piVar18 + 4;
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
            lVar16 = func_0x00fac1f0(plVar19);
code_r0x01e6eddc:
            uVar9 = *(undefined8 *)(lVar16 + 8);
          }
          puVar12 = (undefined8 *)func_0x00f78acc(uVar9,lVar15);
          pcVar20 = (code *)*puVar12;
        }
        uVar11 = (*pcVar20)(plVar19,lVar13,puVar12);
      }
    }
    else {
      if (bVar4) goto code_r0x01e6ecc8;
code_r0x01e6ebbc:
      uVar11 = (*pcVar20)(plVar1,plVar19,lVar13,lVar15);
    }
code_r0x01e6ecd8:
    lVar14 = lVar14 + 1;
    if (lVar14 == lVar17) {
      return uVar11;
    }
  } while( true );
}



// ============================================================
// RVA: 0x1508650 | Atlas.UI.TabController.OnTabPressed
// ============================================================

/* WARNING: Possible PIC construction at 0x015087c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015087f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01508840: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015088a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015088e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164aba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164ad08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015089fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01508a90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015085ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01508a94) */
/* WARNING: Removing unreachable block (ram,0x01508ab0) */
/* WARNING: Removing unreachable block (ram,0x01508a98) */
/* WARNING: Removing unreachable block (ram,0x01508a00) */
/* WARNING: Removing unreachable block (ram,0x01508a9c) */
/* WARNING: Removing unreachable block (ram,0x01508a04) */
/* WARNING: Removing unreachable block (ram,0x01508a0c) */
/* WARNING: Removing unreachable block (ram,0x01508a18) */
/* WARNING: Removing unreachable block (ram,0x01508a28) */
/* WARNING: Removing unreachable block (ram,0x01508a30) */
/* WARNING: Removing unreachable block (ram,0x01508a40) */
/* WARNING: Removing unreachable block (ram,0x01508a4c) */
/* WARNING: Removing unreachable block (ram,0x01508a58) */
/* WARNING: Removing unreachable block (ram,0x01508a64) */
/* WARNING: Removing unreachable block (ram,0x01508a70) */
/* WARNING: Removing unreachable block (ram,0x01508ad0) */
/* WARNING: Removing unreachable block (ram,0x01508ad4) */
/* WARNING: Removing unreachable block (ram,0x01508af0) */
/* WARNING: Removing unreachable block (ram,0x01508af8) */
/* WARNING: Removing unreachable block (ram,0x01508b04) */
/* WARNING: Removing unreachable block (ram,0x01508b08) */
/* WARNING: Removing unreachable block (ram,0x01508b40) */
/* WARNING: Removing unreachable block (ram,0x01508b4c) */
/* WARNING: Removing unreachable block (ram,0x01508b10) */
/* WARNING: Removing unreachable block (ram,0x01508b34) */
/* WARNING: Removing unreachable block (ram,0x0150855c) */
/* WARNING: Removing unreachable block (ram,0x01508584) */
/* WARNING: Removing unreachable block (ram,0x01508598) */
/* WARNING: Removing unreachable block (ram,0x015085a8) */
/* WARNING: Removing unreachable block (ram,0x015085b0) */
/* WARNING: Removing unreachable block (ram,0x015085a0) */
/* WARNING: Removing unreachable block (ram,0x015085cc) */
/* WARNING: Removing unreachable block (ram,0x015085d4) */
/* WARNING: Removing unreachable block (ram,0x015085e0) */
/* WARNING: Removing unreachable block (ram,0x015085a4) */
/* WARNING: Removing unreachable block (ram,0x01508b20) */
/* WARNING: Removing unreachable block (ram,0x01508b2c) */
/* WARNING: Removing unreachable block (ram,0x01508a84) */
/* WARNING: Removing unreachable block (ram,0x0327736c) */
/* WARNING: Removing unreachable block (ram,0x03277390) */
/* WARNING: Removing unreachable block (ram,0x032773a4) */
/* WARNING: Removing unreachable block (ram,0x0164ad0c) */
/* WARNING: Removing unreachable block (ram,0x0164ad68) */
/* WARNING: Removing unreachable block (ram,0x0164ad10) */
/* WARNING: Removing unreachable block (ram,0x0164ad1c) */
/* WARNING: Removing unreachable block (ram,0x0164ad24) */
/* WARNING: Removing unreachable block (ram,0x0164ad28) */
/* WARNING: Removing unreachable block (ram,0x0164ad78) */
/* WARNING: Removing unreachable block (ram,0x0164ad9c) */
/* WARNING: Removing unreachable block (ram,0x0164adb0) */
/* WARNING: Removing unreachable block (ram,0x0164add0) */
/* WARNING: Removing unreachable block (ram,0x0164adc0) */
/* WARNING: Removing unreachable block (ram,0x0164add4) */
/* WARNING: Removing unreachable block (ram,0x0164ad34) */
/* WARNING: Removing unreachable block (ram,0x0164ad44) */
/* WARNING: Removing unreachable block (ram,0x0164ad4c) */
/* WARNING: Removing unreachable block (ram,0x0164ad50) */
/* WARNING: Removing unreachable block (ram,0x0164aba4) */
/* WARNING: Removing unreachable block (ram,0x0164abbc) */
/* WARNING: Removing unreachable block (ram,0x0164abcc) */
/* WARNING: Removing unreachable block (ram,0x0164a1b8) */
/* WARNING: Removing unreachable block (ram,0x0164a1e0) */
/* WARNING: Removing unreachable block (ram,0x0164a20c) */
/* WARNING: Removing unreachable block (ram,0x0164a228) */
/* WARNING: Removing unreachable block (ram,0x0164a230) */
/* WARNING: Removing unreachable block (ram,0x0164a234) */
/* WARNING: Removing unreachable block (ram,0x0164a24c) */
/* WARNING: Removing unreachable block (ram,0x0164a254) */
/* WARNING: Removing unreachable block (ram,0x0164a264) */
/* WARNING: Removing unreachable block (ram,0x0164a274) */
/* WARNING: Removing unreachable block (ram,0x0164a28c) */
/* WARNING: Removing unreachable block (ram,0x0164a2a8) */
/* WARNING: Removing unreachable block (ram,0x0164a2b0) */
/* WARNING: Removing unreachable block (ram,0x0164a2b4) */
/* WARNING: Removing unreachable block (ram,0x0164a2c4) */
/* WARNING: Removing unreachable block (ram,0x0164a2d0) */
/* WARNING: Removing unreachable block (ram,0x0164a2d4) */
/* WARNING: Removing unreachable block (ram,0x0164a308) */
/* WARNING: Removing unreachable block (ram,0x0164a30c) */
/* WARNING: Removing unreachable block (ram,0x0164a2f4) */
/* WARNING: Removing unreachable block (ram,0x0164a2f8) */
/* WARNING: Removing unreachable block (ram,0x015088e4) */
/* WARNING: Removing unreachable block (ram,0x015088e8) */
/* WARNING: Removing unreachable block (ram,0x0164aa78) */
/* WARNING: Removing unreachable block (ram,0x0164aaac) */
/* WARNING: Removing unreachable block (ram,0x0164aad8) */
/* WARNING: Removing unreachable block (ram,0x0164aae8) */
/* WARNING: Removing unreachable block (ram,0x0164aaf0) */
/* WARNING: Removing unreachable block (ram,0x0164aafc) */
/* WARNING: Removing unreachable block (ram,0x0164aba8) */
/* WARNING: Removing unreachable block (ram,0x0164ab10) */
/* WARNING: Removing unreachable block (ram,0x0164ab14) */
/* WARNING: Removing unreachable block (ram,0x0164ab24) */
/* WARNING: Removing unreachable block (ram,0x0164ab40) */
/* WARNING: Removing unreachable block (ram,0x0164ab48) */
/* WARNING: Removing unreachable block (ram,0x0164ab4c) */
/* WARNING: Removing unreachable block (ram,0x0164ab58) */
/* WARNING: Removing unreachable block (ram,0x0164abe0) */
/* WARNING: Removing unreachable block (ram,0x0164abe4) */
/* WARNING: Removing unreachable block (ram,0x0164ac18) */
/* WARNING: Removing unreachable block (ram,0x0164ac2c) */
/* WARNING: Removing unreachable block (ram,0x0164ac3c) */
/* WARNING: Removing unreachable block (ram,0x0164ac68) */
/* WARNING: Removing unreachable block (ram,0x0164ac44) */
/* WARNING: Removing unreachable block (ram,0x0164ac6c) */
/* WARNING: Removing unreachable block (ram,0x0164ac9c) */
/* WARNING: Removing unreachable block (ram,0x0164acbc) */
/* WARNING: Removing unreachable block (ram,0x0164acd0) */
/* WARNING: Removing unreachable block (ram,0x0164acd8) */
/* WARNING: Removing unreachable block (ram,0x0164acdc) */
/* WARNING: Removing unreachable block (ram,0x0164acf4) */
/* WARNING: Removing unreachable block (ram,0x0164acfc) */
/* WARNING: Removing unreachable block (ram,0x0164ad00) */
/* WARNING: Removing unreachable block (ram,0x0164ac50) */
/* WARNING: Removing unreachable block (ram,0x0164ab74) */
/* WARNING: Removing unreachable block (ram,0x0164ab78) */
/* WARNING: Removing unreachable block (ram,0x0164ab8c) */
/* WARNING: Removing unreachable block (ram,0x0164ab94) */
/* WARNING: Removing unreachable block (ram,0x0164ab98) */
/* WARNING: Removing unreachable block (ram,0x015088a8) */
/* WARNING: Removing unreachable block (ram,0x015088ac) */
/* WARNING: Removing unreachable block (ram,0x015088b0) */
/* WARNING: Removing unreachable block (ram,0x01508844) */
/* WARNING: Removing unreachable block (ram,0x01508848) */
/* WARNING: Removing unreachable block (ram,0x01508850) */
/* WARNING: Removing unreachable block (ram,0x0150885c) */
/* WARNING: Removing unreachable block (ram,0x01508868) */
/* WARNING: Removing unreachable block (ram,0x01508870) */
/* WARNING: Removing unreachable block (ram,0x01508890) */
/* WARNING: Removing unreachable block (ram,0x01508898) */
/* WARNING: Removing unreachable block (ram,0x0150889c) */
/* WARNING: Removing unreachable block (ram,0x015087f4) */
/* WARNING: Removing unreachable block (ram,0x015088c0) */
/* WARNING: Removing unreachable block (ram,0x015088cc) */
/* WARNING: Removing unreachable block (ram,0x015088d4) */
/* WARNING: Removing unreachable block (ram,0x015088d8) */
/* WARNING: Removing unreachable block (ram,0x015087f8) */
/* WARNING: Removing unreachable block (ram,0x01508800) */
/* WARNING: Removing unreachable block (ram,0x0150880c) */
/* WARNING: Removing unreachable block (ram,0x01508920) */
/* WARNING: Removing unreachable block (ram,0x01508924) */
/* WARNING: Removing unreachable block (ram,0x0150881c) */
/* WARNING: Removing unreachable block (ram,0x0150882c) */
/* WARNING: Removing unreachable block (ram,0x01508834) */
/* WARNING: Removing unreachable block (ram,0x01508838) */
/* WARNING: Removing unreachable block (ram,0x015087cc) */
/* WARNING: Removing unreachable block (ram,0x015087dc) */
/* WARNING: Removing unreachable block (ram,0x015087e4) */
/* WARNING: Removing unreachable block (ram,0x015087e8) */
/* WARNING: Removing unreachable block (ram,0x015085f0) */
/* WARNING: Removing unreachable block (ram,0x015085f4) */
/* WARNING: Removing unreachable block (ram,0x01508638) */
/* WARNING: Removing unreachable block (ram,0x015085fc) */
/* WARNING: Removing unreachable block (ram,0x01508600) */
/* WARNING: Removing unreachable block (ram,0x01508644) */
/* WARNING: Removing unreachable block (ram,0x01508614) */
/* WARNING: Removing unreachable block (ram,0x0150863c) */
/* WARNING: Removing unreachable block (ram,0x01508648) */
/* WARNING: Removing unreachable block (ram,0x01508620) */
/* WARNING: Removing unreachable block (ram,0x01508628) */

ulong Atlas_UI_TabController__OnTabPressed(ulong param_1,long param_2)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 extraout_x1;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  long *plVar16;
  code *pcVar17;
  undefined1 *puVar18;
  undefined1 auVar19 [16];
  
  uVar7 = param_1;
  if ((bRam0000000003eb4d2e & 1) == 0) {
    uVar7 = func_0x00f78a20(0x3d2a578);
    bRam0000000003eb4d2e = 1;
  }
  if (*(long *)(param_1 + 0x28) == param_2) {
    return uVar7;
  }
  lVar11 = *(long *)(param_1 + 0x20);
  if (lVar11 != 0) {
    uVar7 = 0;
    do {
      if ((long)(int)*(uint *)(lVar11 + 0x18) <= (long)uVar7) goto LAB_015086ec;
      if (*(uint *)(lVar11 + 0x18) <= uVar7) {
        uVar9 = func_0x00f78b24();
        auVar19 = func_0x00f78ac0(uVar9,0);
        lVar11 = auVar19._0_8_;
        if ((bRam0000000003eb4d2c & 1) == 0) {
          func_0x00f78a20(0x3d57998);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4d2c = 1;
        }
        uVar9 = /*Core.Input.InputManager$$get_CurrentInputFamily*/ func_0x01649514(0);
        uVar7 = /*Core.Input.InputManagerExtensions$$IsControllerOrKeyboard*/ func_0x0164bbd0(uVar9,0);
        if (((uVar7 & 1) == 0) && (*(char *)(lVar11 + 0x52) == '\0')) {
          return uVar7;
        }
        uVar7 = 0;
        uVar6 = auVar19._8_4_;
        if ((-1 < (int)uVar6) && (lVar14 = *(long *)(lVar11 + 0x30), lVar14 != 0)) {
          if (*(long *)(lVar11 + 0x20) == 0) {
            func_0x00f78af4(0);
code_r0x01508988:
            uVar9 = func_0x00f78b24();
            func_0x00f78ac0(uVar9,0);
            if ((bRam0000000003eb4d2f & 1) == 0) {
              func_0x00f78a20(0x3d23990);
              bRam0000000003eb4d2f = 1;
            }
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            if ((bRam0000000003ec021a & 1) == 0) {
              func_0x00f78a20(0x3d23990,0);
              bRam0000000003ec021a = 1;
            }
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar6 = /*UnityEngine.Object$$CompareBaseObjects*/ func_0x03248740(extraout_x1,0);
            return (ulong)(uVar6 ^ 1);
          }
          if ((int)uVar6 < *(int *)(*(long *)(lVar11 + 0x20) + 0x18)) {
            if (*(uint *)(lVar14 + 0x18) <= uVar6) goto code_r0x01508988;
            uVar7 = *(ulong *)(lVar14 + (auVar19._8_8_ & 0xffffffff) * 8 + 0x20);
          }
          else {
            uVar7 = 0;
          }
        }
        return uVar7;
      }
      lVar14 = *(long *)(lVar11 + uVar7 * 8 + 0x20);
      if (lVar14 != param_2) {
        if ((lVar14 == 0) || (*(long *)(lVar14 + 0x18) == 0)) break;
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar14 + 0x18),0);
        lVar11 = *(long *)(param_1 + 0x20);
      }
      uVar7 = uVar7 + 1;
    } while (lVar11 != 0);
  }
  do {
    func_0x00f78af4();
LAB_015086ec:
    plVar16 = *(long **)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = param_2;
  } while ((param_2 == 0) || (*(long *)(param_2 + 0x18) == 0));
  /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(param_2 + 0x18),1,0);
  uVar7 = *(ulong *)(param_1 + 0x18);
  if (uVar7 == 0) {
    return 0;
  }
  lVar11 = *(long *)(uVar7 + 0x68);
  if (lVar11 == 0) {
    puVar18 = &stack0xffffffffffffff98;
    lVar14 = 1;
  }
  else {
    lVar14 = *(long *)(lVar11 + 0x18);
    if (lVar14 == 0) {
      return uVar7;
    }
    puVar18 = (undefined1 *)(lVar11 + 0x20);
  }
  lVar11 = 0;
  do {
    lVar12 = *(long *)(puVar18 + lVar11 * 8);
    pcVar17 = *(code **)(lVar12 + 0x10);
    plVar1 = *(long **)(lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + 0x28);
    if (*(short *)(lVar12 + 0x48) == -1) {
      func_0x00f78ad8(lVar12);
    }
    iVar4 = func_0x00f78a4c(lVar12);
    bVar3 = *(char *)(lVar12 + 0x4a) == '\x02';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x01e6ecc8:
          uVar8 = (*pcVar17)(plVar16,param_2,lVar12);
        }
        else {
          if (((*(short *)(lVar12 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(uVar7 + 0x18) == 0)) goto code_r0x01e6ebbc;
          iVar4 = func_0x00f78a44(lVar12);
          iVar5 = func_0x00f78ec0(lVar12);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar12 + 0x48);
            if (iVar5 == 0) {
              lVar12 = *plVar1 + (ulong)uVar2 * 0x10;
              uVar8 = (**(code **)(lVar12 + 0x138))
                                (plVar1,plVar16,param_2,*(undefined8 *)(lVar12 + 0x140));
              goto code_r0x01e6ecd8;
            }
            lVar12 = func_0x00f78a48(lVar12);
            lVar13 = *plVar1;
            uVar8 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar8 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == lVar12) {
                  puVar10 = (undefined8 *)
                            (lVar13 + (long)(int)(*piVar15 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x01e6ee70;
                }
                piVar15 = piVar15 + 4;
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
            }
            puVar10 = (undefined8 *)func_0x00fac1f0(plVar1,lVar12,(ulong)uVar2);
code_r0x01e6ee70:
            pcVar17 = (code *)*puVar10;
            puVar10 = (undefined8 *)puVar10[1];
          }
          else {
            if (iVar5 == 0) {
              uVar9 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar13 = *plVar1;
              uVar8 = (ulong)*(ushort *)(lVar13 + 0x12a);
              if (uVar8 != 0) {
                piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                    lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01e6ee48;
                  }
                  piVar15 = piVar15 + 4;
                  uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
              }
              lVar13 = func_0x00fac1f0(plVar1);
code_r0x01e6ee48:
              uVar9 = *(undefined8 *)(lVar13 + 8);
            }
            puVar10 = (undefined8 *)func_0x00f78acc(uVar9,lVar12);
            pcVar17 = (code *)*puVar10;
          }
          uVar8 = (*pcVar17)(plVar1,plVar16,param_2,puVar10);
        }
      }
      else {
        if ((*(short *)(lVar12 + 0x48) == -1) || (*(long *)(uVar7 + 0x18) == 0))
        goto code_r0x01e6ecc8;
        iVar4 = func_0x00f78a44(lVar12);
        iVar5 = func_0x00f78ec0(lVar12);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar12 + 0x48);
          if (iVar5 == 0) {
            lVar12 = *plVar16 + (ulong)uVar2 * 0x10;
            uVar8 = (**(code **)(lVar12 + 0x138))(plVar16,param_2,*(undefined8 *)(lVar12 + 0x140));
            goto code_r0x01e6ecd8;
          }
          lVar12 = func_0x00f78a48(lVar12);
          lVar13 = *plVar16;
          uVar8 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar8 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar12) {
                puVar10 = (undefined8 *)
                          (lVar13 + (long)(int)(*piVar15 + (uint)uVar2) * 0x10 + 0x138);
                goto code_r0x01e6ee04;
              }
              piVar15 = piVar15 + 4;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          puVar10 = (undefined8 *)func_0x00fac1f0(plVar16,lVar12,(ulong)uVar2);
code_r0x01e6ee04:
          pcVar17 = (code *)*puVar10;
          puVar10 = (undefined8 *)puVar10[1];
        }
        else {
          if (iVar5 == 0) {
            uVar9 = *(undefined8 *)(*plVar16 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar13 = *plVar16;
            uVar8 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar8 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                  lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01e6eddc;
                }
                piVar15 = piVar15 + 4;
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
            }
            lVar13 = func_0x00fac1f0(plVar16);
code_r0x01e6eddc:
            uVar9 = *(undefined8 *)(lVar13 + 8);
          }
          puVar10 = (undefined8 *)func_0x00f78acc(uVar9,lVar12);
          pcVar17 = (code *)*puVar10;
        }
        uVar8 = (*pcVar17)(plVar16,param_2,puVar10);
      }
    }
    else {
      if (bVar3) goto code_r0x01e6ecc8;
code_r0x01e6ebbc:
      uVar8 = (*pcVar17)(plVar1,plVar16,param_2,lVar12);
    }
code_r0x01e6ecd8:
    lVar11 = lVar11 + 1;
    if (lVar11 == lVar14) {
      return uVar8;
    }
  } while( true );
}



// ============================================================
// RVA: 0x1508754 | Atlas.UI.TabController.MakeSelectionInTabIfKeyboardOrController
// ============================================================

/* WARNING: Possible PIC construction at 0x015087c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015087f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01508840: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015088a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015088e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164aba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164ad08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015089fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01508a90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015085ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01508a94) */
/* WARNING: Removing unreachable block (ram,0x01508ab0) */
/* WARNING: Removing unreachable block (ram,0x01508a98) */
/* WARNING: Removing unreachable block (ram,0x01508a00) */
/* WARNING: Removing unreachable block (ram,0x01508a9c) */
/* WARNING: Removing unreachable block (ram,0x01508a04) */
/* WARNING: Removing unreachable block (ram,0x01508a0c) */
/* WARNING: Removing unreachable block (ram,0x01508a18) */
/* WARNING: Removing unreachable block (ram,0x01508a28) */
/* WARNING: Removing unreachable block (ram,0x01508a30) */
/* WARNING: Removing unreachable block (ram,0x01508a40) */
/* WARNING: Removing unreachable block (ram,0x01508a4c) */
/* WARNING: Removing unreachable block (ram,0x01508a58) */
/* WARNING: Removing unreachable block (ram,0x01508a64) */
/* WARNING: Removing unreachable block (ram,0x01508a70) */
/* WARNING: Removing unreachable block (ram,0x01508ad0) */
/* WARNING: Removing unreachable block (ram,0x01508ad4) */
/* WARNING: Removing unreachable block (ram,0x01508af0) */
/* WARNING: Removing unreachable block (ram,0x01508af8) */
/* WARNING: Removing unreachable block (ram,0x01508b04) */
/* WARNING: Removing unreachable block (ram,0x01508b08) */
/* WARNING: Removing unreachable block (ram,0x01508b40) */
/* WARNING: Removing unreachable block (ram,0x01508b4c) */
/* WARNING: Removing unreachable block (ram,0x01508b10) */
/* WARNING: Removing unreachable block (ram,0x01508b34) */
/* WARNING: Removing unreachable block (ram,0x0150855c) */
/* WARNING: Removing unreachable block (ram,0x01508584) */
/* WARNING: Removing unreachable block (ram,0x01508598) */
/* WARNING: Removing unreachable block (ram,0x015085a8) */
/* WARNING: Removing unreachable block (ram,0x015085b0) */
/* WARNING: Removing unreachable block (ram,0x015085a0) */
/* WARNING: Removing unreachable block (ram,0x015085cc) */
/* WARNING: Removing unreachable block (ram,0x015085d4) */
/* WARNING: Removing unreachable block (ram,0x015085e0) */
/* WARNING: Removing unreachable block (ram,0x015085a4) */
/* WARNING: Removing unreachable block (ram,0x01508b20) */
/* WARNING: Removing unreachable block (ram,0x01508b2c) */
/* WARNING: Removing unreachable block (ram,0x01508a84) */
/* WARNING: Removing unreachable block (ram,0x0327736c) */
/* WARNING: Removing unreachable block (ram,0x03277390) */
/* WARNING: Removing unreachable block (ram,0x032773a4) */
/* WARNING: Removing unreachable block (ram,0x0164ad0c) */
/* WARNING: Removing unreachable block (ram,0x0164ad68) */
/* WARNING: Removing unreachable block (ram,0x0164ad10) */
/* WARNING: Removing unreachable block (ram,0x0164ad1c) */
/* WARNING: Removing unreachable block (ram,0x0164ad24) */
/* WARNING: Removing unreachable block (ram,0x0164ad28) */
/* WARNING: Removing unreachable block (ram,0x0164ad78) */
/* WARNING: Removing unreachable block (ram,0x0164ad9c) */
/* WARNING: Removing unreachable block (ram,0x0164adb0) */
/* WARNING: Removing unreachable block (ram,0x0164add0) */
/* WARNING: Removing unreachable block (ram,0x0164adc0) */
/* WARNING: Removing unreachable block (ram,0x0164add4) */
/* WARNING: Removing unreachable block (ram,0x0164ad34) */
/* WARNING: Removing unreachable block (ram,0x0164ad44) */
/* WARNING: Removing unreachable block (ram,0x0164ad4c) */
/* WARNING: Removing unreachable block (ram,0x0164ad50) */
/* WARNING: Removing unreachable block (ram,0x0164aba4) */
/* WARNING: Removing unreachable block (ram,0x0164abbc) */
/* WARNING: Removing unreachable block (ram,0x0164abcc) */
/* WARNING: Removing unreachable block (ram,0x0164a1b8) */
/* WARNING: Removing unreachable block (ram,0x0164a1e0) */
/* WARNING: Removing unreachable block (ram,0x0164a20c) */
/* WARNING: Removing unreachable block (ram,0x0164a228) */
/* WARNING: Removing unreachable block (ram,0x0164a230) */
/* WARNING: Removing unreachable block (ram,0x0164a234) */
/* WARNING: Removing unreachable block (ram,0x0164a24c) */
/* WARNING: Removing unreachable block (ram,0x0164a254) */
/* WARNING: Removing unreachable block (ram,0x0164a264) */
/* WARNING: Removing unreachable block (ram,0x0164a274) */
/* WARNING: Removing unreachable block (ram,0x0164a28c) */
/* WARNING: Removing unreachable block (ram,0x0164a2a8) */
/* WARNING: Removing unreachable block (ram,0x0164a2b0) */
/* WARNING: Removing unreachable block (ram,0x0164a2b4) */
/* WARNING: Removing unreachable block (ram,0x0164a2c4) */
/* WARNING: Removing unreachable block (ram,0x0164a2d0) */
/* WARNING: Removing unreachable block (ram,0x0164a2d4) */
/* WARNING: Removing unreachable block (ram,0x0164a308) */
/* WARNING: Removing unreachable block (ram,0x0164a30c) */
/* WARNING: Removing unreachable block (ram,0x0164a2f4) */
/* WARNING: Removing unreachable block (ram,0x0164a2f8) */
/* WARNING: Removing unreachable block (ram,0x015088e4) */
/* WARNING: Removing unreachable block (ram,0x015088e8) */
/* WARNING: Removing unreachable block (ram,0x0164aa78) */
/* WARNING: Removing unreachable block (ram,0x0164aaac) */
/* WARNING: Removing unreachable block (ram,0x0164aad8) */
/* WARNING: Removing unreachable block (ram,0x0164aae8) */
/* WARNING: Removing unreachable block (ram,0x0164aaf0) */
/* WARNING: Removing unreachable block (ram,0x0164aafc) */
/* WARNING: Removing unreachable block (ram,0x0164aba8) */
/* WARNING: Removing unreachable block (ram,0x0164ab10) */
/* WARNING: Removing unreachable block (ram,0x0164ab14) */
/* WARNING: Removing unreachable block (ram,0x0164ab24) */
/* WARNING: Removing unreachable block (ram,0x0164ab40) */
/* WARNING: Removing unreachable block (ram,0x0164ab48) */
/* WARNING: Removing unreachable block (ram,0x0164ab4c) */
/* WARNING: Removing unreachable block (ram,0x0164ab58) */
/* WARNING: Removing unreachable block (ram,0x0164abe0) */
/* WARNING: Removing unreachable block (ram,0x0164abe4) */
/* WARNING: Removing unreachable block (ram,0x0164ac18) */
/* WARNING: Removing unreachable block (ram,0x0164ac2c) */
/* WARNING: Removing unreachable block (ram,0x0164ac3c) */
/* WARNING: Removing unreachable block (ram,0x0164ac68) */
/* WARNING: Removing unreachable block (ram,0x0164ac44) */
/* WARNING: Removing unreachable block (ram,0x0164ac6c) */
/* WARNING: Removing unreachable block (ram,0x0164ac9c) */
/* WARNING: Removing unreachable block (ram,0x0164acbc) */
/* WARNING: Removing unreachable block (ram,0x0164acd0) */
/* WARNING: Removing unreachable block (ram,0x0164acd8) */
/* WARNING: Removing unreachable block (ram,0x0164acdc) */
/* WARNING: Removing unreachable block (ram,0x0164acf4) */
/* WARNING: Removing unreachable block (ram,0x0164acfc) */
/* WARNING: Removing unreachable block (ram,0x0164ad00) */
/* WARNING: Removing unreachable block (ram,0x0164ac50) */
/* WARNING: Removing unreachable block (ram,0x0164ab74) */
/* WARNING: Removing unreachable block (ram,0x0164ab78) */
/* WARNING: Removing unreachable block (ram,0x0164ab8c) */
/* WARNING: Removing unreachable block (ram,0x0164ab94) */
/* WARNING: Removing unreachable block (ram,0x0164ab98) */
/* WARNING: Removing unreachable block (ram,0x015088a8) */
/* WARNING: Removing unreachable block (ram,0x015088ac) */
/* WARNING: Removing unreachable block (ram,0x015088b0) */
/* WARNING: Removing unreachable block (ram,0x01508844) */
/* WARNING: Removing unreachable block (ram,0x01508848) */
/* WARNING: Removing unreachable block (ram,0x01508850) */
/* WARNING: Removing unreachable block (ram,0x0150885c) */
/* WARNING: Removing unreachable block (ram,0x01508868) */
/* WARNING: Removing unreachable block (ram,0x01508870) */
/* WARNING: Removing unreachable block (ram,0x01508890) */
/* WARNING: Removing unreachable block (ram,0x01508898) */
/* WARNING: Removing unreachable block (ram,0x0150889c) */
/* WARNING: Removing unreachable block (ram,0x015087f4) */
/* WARNING: Removing unreachable block (ram,0x015088c0) */
/* WARNING: Removing unreachable block (ram,0x015088cc) */
/* WARNING: Removing unreachable block (ram,0x015088d4) */
/* WARNING: Removing unreachable block (ram,0x015088d8) */
/* WARNING: Removing unreachable block (ram,0x015087f8) */
/* WARNING: Removing unreachable block (ram,0x01508800) */
/* WARNING: Removing unreachable block (ram,0x0150880c) */
/* WARNING: Removing unreachable block (ram,0x01508920) */
/* WARNING: Removing unreachable block (ram,0x01508924) */
/* WARNING: Removing unreachable block (ram,0x0150881c) */
/* WARNING: Removing unreachable block (ram,0x0150882c) */
/* WARNING: Removing unreachable block (ram,0x01508834) */
/* WARNING: Removing unreachable block (ram,0x01508838) */
/* WARNING: Removing unreachable block (ram,0x015087cc) */
/* WARNING: Removing unreachable block (ram,0x015087dc) */
/* WARNING: Removing unreachable block (ram,0x015087e4) */
/* WARNING: Removing unreachable block (ram,0x015087e8) */
/* WARNING: Removing unreachable block (ram,0x015085f0) */
/* WARNING: Removing unreachable block (ram,0x015085f4) */
/* WARNING: Removing unreachable block (ram,0x01508638) */
/* WARNING: Removing unreachable block (ram,0x015085fc) */
/* WARNING: Removing unreachable block (ram,0x01508600) */
/* WARNING: Removing unreachable block (ram,0x01508644) */
/* WARNING: Removing unreachable block (ram,0x01508614) */
/* WARNING: Removing unreachable block (ram,0x0150863c) */
/* WARNING: Removing unreachable block (ram,0x01508648) */
/* WARNING: Removing unreachable block (ram,0x01508674) */
/* WARNING: Removing unreachable block (ram,0x01508688) */
/* WARNING: Removing unreachable block (ram,0x01508694) */
/* WARNING: Removing unreachable block (ram,0x0150869c) */
/* WARNING: Removing unreachable block (ram,0x015086a0) */
/* WARNING: Removing unreachable block (ram,0x015086ac) */
/* WARNING: Removing unreachable block (ram,0x01508748) */
/* WARNING: Removing unreachable block (ram,0x015086b4) */
/* WARNING: Removing unreachable block (ram,0x015086c4) */
/* WARNING: Removing unreachable block (ram,0x015086c8) */
/* WARNING: Removing unreachable block (ram,0x015086d0) */
/* WARNING: Removing unreachable block (ram,0x015086e0) */
/* WARNING: Removing unreachable block (ram,0x015086e8) */
/* WARNING: Removing unreachable block (ram,0x015086ec) */
/* WARNING: Removing unreachable block (ram,0x015086f8) */
/* WARNING: Removing unreachable block (ram,0x01508700) */
/* WARNING: Removing unreachable block (ram,0x01508738) */
/* WARNING: Removing unreachable block (ram,0x01508714) */
/* WARNING: Removing unreachable block (ram,0x01e6eb30) */
/* WARNING: Removing unreachable block (ram,0x01e6eb78) */
/* WARNING: Removing unreachable block (ram,0x01e6eb68) */
/* WARNING: Removing unreachable block (ram,0x01e6eb70) */
/* WARNING: Removing unreachable block (ram,0x01e6eb80) */
/* WARNING: Removing unreachable block (ram,0x01e6eb84) */
/* WARNING: Removing unreachable block (ram,0x01e6eb9c) */
/* WARNING: Removing unreachable block (ram,0x01e6eba4) */
/* WARNING: Removing unreachable block (ram,0x01e6ebd4) */
/* WARNING: Removing unreachable block (ram,0x01e6ec58) */
/* WARNING: Removing unreachable block (ram,0x01e6ec64) */
/* WARNING: Removing unreachable block (ram,0x01e6ec6c) */
/* WARNING: Removing unreachable block (ram,0x01e6ece8) */
/* WARNING: Removing unreachable block (ram,0x01e6ed4c) */
/* WARNING: Removing unreachable block (ram,0x01e6ecf0) */
/* WARNING: Removing unreachable block (ram,0x01e6ed08) */
/* WARNING: Removing unreachable block (ram,0x01e6ed10) */
/* WARNING: Removing unreachable block (ram,0x01e6edf4) */
/* WARNING: Removing unreachable block (ram,0x01e6ed1c) */
/* WARNING: Removing unreachable block (ram,0x01e6ed28) */
/* WARNING: Removing unreachable block (ram,0x01e6ee04) */
/* WARNING: Removing unreachable block (ram,0x01e6ec84) */
/* WARNING: Removing unreachable block (ram,0x01e6ed38) */
/* WARNING: Removing unreachable block (ram,0x01e6ec88) */
/* WARNING: Removing unreachable block (ram,0x01e6ec9c) */
/* WARNING: Removing unreachable block (ram,0x01e6eca4) */
/* WARNING: Removing unreachable block (ram,0x01e6edcc) */
/* WARNING: Removing unreachable block (ram,0x01e6ecb0) */
/* WARNING: Removing unreachable block (ram,0x01e6ecbc) */
/* WARNING: Removing unreachable block (ram,0x01e6eddc) */
/* WARNING: Removing unreachable block (ram,0x01e6ede0) */
/* WARNING: Removing unreachable block (ram,0x01e6ee08) */
/* WARNING: Removing unreachable block (ram,0x01e6ebd8) */
/* WARNING: Removing unreachable block (ram,0x01e6ebdc) */
/* WARNING: Removing unreachable block (ram,0x01e6ebe8) */
/* WARNING: Removing unreachable block (ram,0x01e6ebf4) */
/* WARNING: Removing unreachable block (ram,0x01e6ebfc) */
/* WARNING: Removing unreachable block (ram,0x01e6ed68) */
/* WARNING: Removing unreachable block (ram,0x01e6ee18) */
/* WARNING: Removing unreachable block (ram,0x01e6ed70) */
/* WARNING: Removing unreachable block (ram,0x01e6ed88) */
/* WARNING: Removing unreachable block (ram,0x01e6ed90) */
/* WARNING: Removing unreachable block (ram,0x01e6ee60) */
/* WARNING: Removing unreachable block (ram,0x01e6ed9c) */
/* WARNING: Removing unreachable block (ram,0x01e6eda8) */
/* WARNING: Removing unreachable block (ram,0x01e6ee70) */
/* WARNING: Removing unreachable block (ram,0x01e6ec14) */
/* WARNING: Removing unreachable block (ram,0x01e6edb8) */
/* WARNING: Removing unreachable block (ram,0x01e6ec18) */
/* WARNING: Removing unreachable block (ram,0x01e6ec2c) */
/* WARNING: Removing unreachable block (ram,0x01e6ec34) */
/* WARNING: Removing unreachable block (ram,0x01e6ee38) */
/* WARNING: Removing unreachable block (ram,0x01e6ec40) */
/* WARNING: Removing unreachable block (ram,0x01e6ec4c) */
/* WARNING: Removing unreachable block (ram,0x01e6ee48) */
/* WARNING: Removing unreachable block (ram,0x01e6ee4c) */
/* WARNING: Removing unreachable block (ram,0x01e6ee74) */
/* WARNING: Removing unreachable block (ram,0x01e6ebb8) */
/* WARNING: Removing unreachable block (ram,0x01e6ecc8) */
/* WARNING: Removing unreachable block (ram,0x01e6ebbc) */
/* WARNING: Removing unreachable block (ram,0x01e6ecd8) */
/* WARNING: Removing unreachable block (ram,0x01e6ece4) */
/* WARNING: Removing unreachable block (ram,0x01e6ee88) */
/* WARNING: Removing unreachable block (ram,0x01508620) */
/* WARNING: Removing unreachable block (ram,0x01508628) */

ulong Atlas_UI_TabController__MakeSelectionInTabIfKeyboardOrController(long param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 extraout_x1;
  long lVar4;
  
  if ((bRam0000000003eb4d2c & 1) == 0) {
    func_0x00f78a20(0x3d57998);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4d2c = 1;
  }
  uVar2 = /*Core.Input.InputManager$$get_CurrentInputFamily*/ func_0x01649514(0);
  uVar3 = /*Core.Input.InputManagerExtensions$$IsControllerOrKeyboard*/ func_0x0164bbd0(uVar2,0);
  if (((uVar3 & 1) == 0) && (*(char *)(param_1 + 0x52) == '\0')) {
    return uVar3;
  }
  uVar3 = 0;
  if ((-1 < (int)param_2) && (lVar4 = *(long *)(param_1 + 0x30), lVar4 != 0)) {
    if (*(long *)(param_1 + 0x20) == 0) {
      func_0x00f78af4(0);
code_r0x01508988:
      uVar2 = func_0x00f78b24();
      func_0x00f78ac0(uVar2,0);
      if ((bRam0000000003eb4d2f & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4d2f = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if ((bRam0000000003ec021a & 1) == 0) {
        func_0x00f78a20(0x3d23990,0);
        bRam0000000003ec021a = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar1 = /*UnityEngine.Object$$CompareBaseObjects*/ func_0x03248740(extraout_x1,0);
      return (ulong)(uVar1 ^ 1);
    }
    if ((int)param_2 < *(int *)(*(long *)(param_1 + 0x20) + 0x18)) {
      if (*(uint *)(lVar4 + 0x18) <= param_2) goto code_r0x01508988;
      uVar3 = *(ulong *)(lVar4 + (ulong)param_2 * 8 + 0x20);
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}



// ============================================================
// RVA: 0x1508930 | Atlas.UI.TabController.GetSelectedGameObjectInTab
// ============================================================

/* WARNING: Possible PIC construction at 0x015089fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01508a90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015085ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015087f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01508840: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015088a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015088e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164aba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164ad08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0164aba4) */
/* WARNING: Removing unreachable block (ram,0x0164abbc) */
/* WARNING: Removing unreachable block (ram,0x0164abcc) */
/* WARNING: Removing unreachable block (ram,0x0164a1b8) */
/* WARNING: Removing unreachable block (ram,0x0164a1e0) */
/* WARNING: Removing unreachable block (ram,0x0164a20c) */
/* WARNING: Removing unreachable block (ram,0x0164a228) */
/* WARNING: Removing unreachable block (ram,0x0164a230) */
/* WARNING: Removing unreachable block (ram,0x0164a234) */
/* WARNING: Removing unreachable block (ram,0x0164a24c) */
/* WARNING: Removing unreachable block (ram,0x0164a254) */
/* WARNING: Removing unreachable block (ram,0x0164a264) */
/* WARNING: Removing unreachable block (ram,0x0164a274) */
/* WARNING: Removing unreachable block (ram,0x0164a28c) */
/* WARNING: Removing unreachable block (ram,0x0164a2a8) */
/* WARNING: Removing unreachable block (ram,0x0164a2b0) */
/* WARNING: Removing unreachable block (ram,0x0164a2b4) */
/* WARNING: Removing unreachable block (ram,0x0164a2c4) */
/* WARNING: Removing unreachable block (ram,0x0164a2d0) */
/* WARNING: Removing unreachable block (ram,0x0164a2d4) */
/* WARNING: Removing unreachable block (ram,0x0164a308) */
/* WARNING: Removing unreachable block (ram,0x0164a30c) */
/* WARNING: Removing unreachable block (ram,0x0164a2f4) */
/* WARNING: Removing unreachable block (ram,0x0164a2f8) */
/* WARNING: Removing unreachable block (ram,0x015088e4) */
/* WARNING: Removing unreachable block (ram,0x015088e8) */
/* WARNING: Removing unreachable block (ram,0x0164aa78) */
/* WARNING: Removing unreachable block (ram,0x0164aaac) */
/* WARNING: Removing unreachable block (ram,0x0164aad8) */
/* WARNING: Removing unreachable block (ram,0x0164aae8) */
/* WARNING: Removing unreachable block (ram,0x0164aaf0) */
/* WARNING: Removing unreachable block (ram,0x0164aafc) */
/* WARNING: Removing unreachable block (ram,0x0164aba8) */
/* WARNING: Removing unreachable block (ram,0x0164ab10) */
/* WARNING: Removing unreachable block (ram,0x0164ab14) */
/* WARNING: Removing unreachable block (ram,0x0164ab24) */
/* WARNING: Removing unreachable block (ram,0x0164ab40) */
/* WARNING: Removing unreachable block (ram,0x0164ab48) */
/* WARNING: Removing unreachable block (ram,0x0164ab4c) */
/* WARNING: Removing unreachable block (ram,0x0164ab58) */
/* WARNING: Removing unreachable block (ram,0x0164abe0) */
/* WARNING: Removing unreachable block (ram,0x0164abe4) */
/* WARNING: Removing unreachable block (ram,0x0164ac18) */
/* WARNING: Removing unreachable block (ram,0x0164ac2c) */
/* WARNING: Removing unreachable block (ram,0x0164ac3c) */
/* WARNING: Removing unreachable block (ram,0x0164ac68) */
/* WARNING: Removing unreachable block (ram,0x0164ac44) */
/* WARNING: Removing unreachable block (ram,0x0164ac6c) */
/* WARNING: Removing unreachable block (ram,0x0164ac9c) */
/* WARNING: Removing unreachable block (ram,0x0164acbc) */
/* WARNING: Removing unreachable block (ram,0x0164acd0) */
/* WARNING: Removing unreachable block (ram,0x0164acd8) */
/* WARNING: Removing unreachable block (ram,0x0164acdc) */
/* WARNING: Removing unreachable block (ram,0x0164acf4) */
/* WARNING: Removing unreachable block (ram,0x0164acfc) */
/* WARNING: Removing unreachable block (ram,0x0164ad00) */
/* WARNING: Removing unreachable block (ram,0x0164ac50) */
/* WARNING: Removing unreachable block (ram,0x0164ab74) */
/* WARNING: Removing unreachable block (ram,0x0164ab78) */
/* WARNING: Removing unreachable block (ram,0x0164ab8c) */
/* WARNING: Removing unreachable block (ram,0x0164ab94) */
/* WARNING: Removing unreachable block (ram,0x0164ab98) */
/* WARNING: Removing unreachable block (ram,0x015088a8) */
/* WARNING: Removing unreachable block (ram,0x015088ac) */
/* WARNING: Removing unreachable block (ram,0x015088b0) */
/* WARNING: Removing unreachable block (ram,0x01508844) */
/* WARNING: Removing unreachable block (ram,0x01508848) */
/* WARNING: Removing unreachable block (ram,0x01508850) */
/* WARNING: Removing unreachable block (ram,0x0150885c) */
/* WARNING: Removing unreachable block (ram,0x01508868) */
/* WARNING: Removing unreachable block (ram,0x01508870) */
/* WARNING: Removing unreachable block (ram,0x01508890) */
/* WARNING: Removing unreachable block (ram,0x01508898) */
/* WARNING: Removing unreachable block (ram,0x0150889c) */
/* WARNING: Removing unreachable block (ram,0x015087f4) */
/* WARNING: Removing unreachable block (ram,0x015088c0) */
/* WARNING: Removing unreachable block (ram,0x015088cc) */
/* WARNING: Removing unreachable block (ram,0x015088d4) */
/* WARNING: Removing unreachable block (ram,0x015088d8) */
/* WARNING: Removing unreachable block (ram,0x015087f8) */
/* WARNING: Removing unreachable block (ram,0x01508800) */
/* WARNING: Removing unreachable block (ram,0x0150880c) */
/* WARNING: Removing unreachable block (ram,0x01508920) */
/* WARNING: Removing unreachable block (ram,0x01508924) */
/* WARNING: Removing unreachable block (ram,0x0150881c) */
/* WARNING: Removing unreachable block (ram,0x0150882c) */
/* WARNING: Removing unreachable block (ram,0x01508834) */
/* WARNING: Removing unreachable block (ram,0x01508838) */
/* WARNING: Removing unreachable block (ram,0x015085f0) */
/* WARNING: Removing unreachable block (ram,0x015085f4) */
/* WARNING: Removing unreachable block (ram,0x015085fc) */
/* WARNING: Removing unreachable block (ram,0x01508600) */
/* WARNING: Removing unreachable block (ram,0x01508644) */
/* WARNING: Removing unreachable block (ram,0x01508614) */
/* WARNING: Removing unreachable block (ram,0x01508620) */
/* WARNING: Removing unreachable block (ram,0x01508a94) */
/* WARNING: Removing unreachable block (ram,0x01508ab0) */
/* WARNING: Removing unreachable block (ram,0x01508a98) */
/* WARNING: Removing unreachable block (ram,0x01508a00) */
/* WARNING: Removing unreachable block (ram,0x01508a9c) */
/* WARNING: Removing unreachable block (ram,0x01508a04) */
/* WARNING: Removing unreachable block (ram,0x01508a0c) */
/* WARNING: Removing unreachable block (ram,0x01508a18) */
/* WARNING: Removing unreachable block (ram,0x01508a28) */
/* WARNING: Removing unreachable block (ram,0x01508a30) */
/* WARNING: Removing unreachable block (ram,0x01508a40) */
/* WARNING: Removing unreachable block (ram,0x01508a4c) */
/* WARNING: Removing unreachable block (ram,0x01508a58) */
/* WARNING: Removing unreachable block (ram,0x01508a64) */
/* WARNING: Removing unreachable block (ram,0x01508a70) */
/* WARNING: Removing unreachable block (ram,0x01508ad0) */
/* WARNING: Removing unreachable block (ram,0x01508ad4) */
/* WARNING: Removing unreachable block (ram,0x01508af0) */
/* WARNING: Removing unreachable block (ram,0x01508af8) */
/* WARNING: Removing unreachable block (ram,0x01508b04) */
/* WARNING: Removing unreachable block (ram,0x01508b08) */
/* WARNING: Removing unreachable block (ram,0x01508b40) */
/* WARNING: Removing unreachable block (ram,0x01508b4c) */
/* WARNING: Removing unreachable block (ram,0x01508b10) */
/* WARNING: Removing unreachable block (ram,0x01508b34) */
/* WARNING: Removing unreachable block (ram,0x0150855c) */
/* WARNING: Removing unreachable block (ram,0x01508584) */
/* WARNING: Removing unreachable block (ram,0x01508598) */
/* WARNING: Removing unreachable block (ram,0x015085a8) */
/* WARNING: Removing unreachable block (ram,0x015085b0) */
/* WARNING: Removing unreachable block (ram,0x015085a0) */
/* WARNING: Removing unreachable block (ram,0x015085cc) */
/* WARNING: Removing unreachable block (ram,0x01508638) */
/* WARNING: Removing unreachable block (ram,0x0150863c) */
/* WARNING: Removing unreachable block (ram,0x01508648) */
/* WARNING: Removing unreachable block (ram,0x01508674) */
/* WARNING: Removing unreachable block (ram,0x01508688) */
/* WARNING: Removing unreachable block (ram,0x01508694) */
/* WARNING: Removing unreachable block (ram,0x0150869c) */
/* WARNING: Removing unreachable block (ram,0x015086a0) */
/* WARNING: Removing unreachable block (ram,0x015086ac) */
/* WARNING: Removing unreachable block (ram,0x01508748) */
/* WARNING: Removing unreachable block (ram,0x01508754) */
/* WARNING: Removing unreachable block (ram,0x0150877c) */
/* WARNING: Removing unreachable block (ram,0x0150879c) */
/* WARNING: Removing unreachable block (ram,0x015087b0) */
/* WARNING: Removing unreachable block (ram,0x0150890c) */
/* WARNING: Removing unreachable block (ram,0x015087b8) */
/* WARNING: Removing unreachable block (ram,0x015087dc) */
/* WARNING: Removing unreachable block (ram,0x015087e4) */
/* WARNING: Removing unreachable block (ram,0x015087e8) */
/* WARNING: Removing unreachable block (ram,0x015086b4) */
/* WARNING: Removing unreachable block (ram,0x015086c4) */
/* WARNING: Removing unreachable block (ram,0x015086c8) */
/* WARNING: Removing unreachable block (ram,0x015086d0) */
/* WARNING: Removing unreachable block (ram,0x015086e0) */
/* WARNING: Removing unreachable block (ram,0x015086e8) */
/* WARNING: Removing unreachable block (ram,0x015086ec) */
/* WARNING: Removing unreachable block (ram,0x015086f8) */
/* WARNING: Removing unreachable block (ram,0x01508700) */
/* WARNING: Removing unreachable block (ram,0x01508738) */
/* WARNING: Removing unreachable block (ram,0x01508714) */
/* WARNING: Removing unreachable block (ram,0x01e6eb30) */
/* WARNING: Removing unreachable block (ram,0x01e6eb78) */
/* WARNING: Removing unreachable block (ram,0x01e6eb68) */
/* WARNING: Removing unreachable block (ram,0x01e6eb70) */
/* WARNING: Removing unreachable block (ram,0x01e6eb80) */
/* WARNING: Removing unreachable block (ram,0x01e6eb84) */
/* WARNING: Removing unreachable block (ram,0x01e6eb9c) */
/* WARNING: Removing unreachable block (ram,0x01e6eba4) */
/* WARNING: Removing unreachable block (ram,0x01e6ebd4) */
/* WARNING: Removing unreachable block (ram,0x01e6ec58) */
/* WARNING: Removing unreachable block (ram,0x01e6ec64) */
/* WARNING: Removing unreachable block (ram,0x01e6ec6c) */
/* WARNING: Removing unreachable block (ram,0x01e6ece8) */
/* WARNING: Removing unreachable block (ram,0x01e6ed4c) */
/* WARNING: Removing unreachable block (ram,0x01e6ecf0) */
/* WARNING: Removing unreachable block (ram,0x01e6ed08) */
/* WARNING: Removing unreachable block (ram,0x01e6ed10) */
/* WARNING: Removing unreachable block (ram,0x01e6edf4) */
/* WARNING: Removing unreachable block (ram,0x01e6ed1c) */
/* WARNING: Removing unreachable block (ram,0x01e6ed28) */
/* WARNING: Removing unreachable block (ram,0x01e6ee04) */
/* WARNING: Removing unreachable block (ram,0x01e6ec84) */
/* WARNING: Removing unreachable block (ram,0x01e6ed38) */
/* WARNING: Removing unreachable block (ram,0x01e6ec88) */
/* WARNING: Removing unreachable block (ram,0x01e6ec9c) */
/* WARNING: Removing unreachable block (ram,0x01e6eca4) */
/* WARNING: Removing unreachable block (ram,0x01e6edcc) */
/* WARNING: Removing unreachable block (ram,0x01e6ecb0) */
/* WARNING: Removing unreachable block (ram,0x01e6ecbc) */
/* WARNING: Removing unreachable block (ram,0x01e6eddc) */
/* WARNING: Removing unreachable block (ram,0x01e6ede0) */
/* WARNING: Removing unreachable block (ram,0x01e6ee08) */
/* WARNING: Removing unreachable block (ram,0x01e6ebd8) */
/* WARNING: Removing unreachable block (ram,0x01e6ebdc) */
/* WARNING: Removing unreachable block (ram,0x01e6ebe8) */
/* WARNING: Removing unreachable block (ram,0x01e6ebf4) */
/* WARNING: Removing unreachable block (ram,0x01e6ebfc) */
/* WARNING: Removing unreachable block (ram,0x01e6ed68) */
/* WARNING: Removing unreachable block (ram,0x01e6ee18) */
/* WARNING: Removing unreachable block (ram,0x01e6ed70) */
/* WARNING: Removing unreachable block (ram,0x01e6ed88) */
/* WARNING: Removing unreachable block (ram,0x01e6ed90) */
/* WARNING: Removing unreachable block (ram,0x01e6ee60) */
/* WARNING: Removing unreachable block (ram,0x01e6ed9c) */
/* WARNING: Removing unreachable block (ram,0x01e6eda8) */
/* WARNING: Removing unreachable block (ram,0x01e6ee70) */
/* WARNING: Removing unreachable block (ram,0x01e6ec14) */
/* WARNING: Removing unreachable block (ram,0x01e6edb8) */
/* WARNING: Removing unreachable block (ram,0x01e6ec18) */
/* WARNING: Removing unreachable block (ram,0x01e6ec2c) */
/* WARNING: Removing unreachable block (ram,0x01e6ec34) */
/* WARNING: Removing unreachable block (ram,0x01e6ee38) */
/* WARNING: Removing unreachable block (ram,0x01e6ec40) */
/* WARNING: Removing unreachable block (ram,0x01e6ec4c) */
/* WARNING: Removing unreachable block (ram,0x01e6ee48) */
/* WARNING: Removing unreachable block (ram,0x01e6ee4c) */
/* WARNING: Removing unreachable block (ram,0x01e6ee74) */
/* WARNING: Removing unreachable block (ram,0x01e6ebb8) */
/* WARNING: Removing unreachable block (ram,0x01e6ecc8) */
/* WARNING: Removing unreachable block (ram,0x01e6ebbc) */
/* WARNING: Removing unreachable block (ram,0x01e6ecd8) */
/* WARNING: Removing unreachable block (ram,0x01e6ece4) */
/* WARNING: Removing unreachable block (ram,0x01e6ee88) */
/* WARNING: Removing unreachable block (ram,0x015085d4) */
/* WARNING: Removing unreachable block (ram,0x015085e0) */
/* WARNING: Removing unreachable block (ram,0x015085a4) */
/* WARNING: Removing unreachable block (ram,0x01508628) */
/* WARNING: Removing unreachable block (ram,0x01508b20) */
/* WARNING: Removing unreachable block (ram,0x01508b2c) */
/* WARNING: Removing unreachable block (ram,0x01508a84) */
/* WARNING: Removing unreachable block (ram,0x0327736c) */
/* WARNING: Removing unreachable block (ram,0x03277390) */
/* WARNING: Removing unreachable block (ram,0x032773a4) */
/* WARNING: Removing unreachable block (ram,0x0164ad0c) */
/* WARNING: Removing unreachable block (ram,0x0164ad68) */
/* WARNING: Removing unreachable block (ram,0x0164ad10) */
/* WARNING: Removing unreachable block (ram,0x0164ad1c) */
/* WARNING: Removing unreachable block (ram,0x0164ad24) */
/* WARNING: Removing unreachable block (ram,0x0164ad28) */
/* WARNING: Removing unreachable block (ram,0x0164ad78) */
/* WARNING: Removing unreachable block (ram,0x0164ad9c) */
/* WARNING: Removing unreachable block (ram,0x0164adb0) */
/* WARNING: Removing unreachable block (ram,0x0164add0) */
/* WARNING: Removing unreachable block (ram,0x0164adc0) */
/* WARNING: Removing unreachable block (ram,0x0164add4) */
/* WARNING: Removing unreachable block (ram,0x0164ad34) */
/* WARNING: Removing unreachable block (ram,0x0164ad44) */
/* WARNING: Removing unreachable block (ram,0x0164ad4c) */
/* WARNING: Removing unreachable block (ram,0x0164ad50) */

ulong Atlas_UI_TabController__GetSelectedGameObjectInTab(long param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  long lVar4;
  
  uVar2 = 0;
  if ((-1 < (int)param_2) && (lVar4 = *(long *)(param_1 + 0x30), lVar4 != 0)) {
    if (*(long *)(param_1 + 0x20) == 0) {
      func_0x00f78af4(0);
LAB_01508988:
      uVar3 = func_0x00f78b24();
      func_0x00f78ac0(uVar3,0);
      if ((bRam0000000003eb4d2f & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4d2f = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if ((bRam0000000003ec021a & 1) == 0) {
        func_0x00f78a20(0x3d23990,0);
        bRam0000000003ec021a = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar1 = /*UnityEngine.Object$$CompareBaseObjects*/ func_0x03248740(extraout_x1,0);
      return (ulong)(uVar1 ^ 1);
    }
    if ((int)param_2 < *(int *)(*(long *)(param_1 + 0x20) + 0x18)) {
      if (*(uint *)(lVar4 + 0x18) <= param_2) goto LAB_01508988;
      uVar2 = *(ulong *)(lVar4 + (ulong)param_2 * 8 + 0x20);
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



// ============================================================
// RVA: 0x1508994 | Atlas.UI.TabController.IsItemInTab
// ============================================================

/* WARNING: Possible PIC construction at 0x015089fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01508a90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015087f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01508840: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015088a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015088e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164aba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164ad08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0164aba4) */
/* WARNING: Removing unreachable block (ram,0x0164abbc) */
/* WARNING: Removing unreachable block (ram,0x0164abcc) */
/* WARNING: Removing unreachable block (ram,0x0164a1b8) */
/* WARNING: Removing unreachable block (ram,0x0164a1e0) */
/* WARNING: Removing unreachable block (ram,0x0164a20c) */
/* WARNING: Removing unreachable block (ram,0x0164a228) */
/* WARNING: Removing unreachable block (ram,0x0164a230) */
/* WARNING: Removing unreachable block (ram,0x0164a234) */
/* WARNING: Removing unreachable block (ram,0x0164a24c) */
/* WARNING: Removing unreachable block (ram,0x0164a254) */
/* WARNING: Removing unreachable block (ram,0x0164a264) */
/* WARNING: Removing unreachable block (ram,0x0164a274) */
/* WARNING: Removing unreachable block (ram,0x0164a28c) */
/* WARNING: Removing unreachable block (ram,0x0164a2a8) */
/* WARNING: Removing unreachable block (ram,0x0164a2b0) */
/* WARNING: Removing unreachable block (ram,0x0164a2b4) */
/* WARNING: Removing unreachable block (ram,0x0164a2c4) */
/* WARNING: Removing unreachable block (ram,0x0164a2d0) */
/* WARNING: Removing unreachable block (ram,0x0164a2d4) */
/* WARNING: Removing unreachable block (ram,0x0164a308) */
/* WARNING: Removing unreachable block (ram,0x0164a30c) */
/* WARNING: Removing unreachable block (ram,0x0164a2f4) */
/* WARNING: Removing unreachable block (ram,0x0164a2f8) */
/* WARNING: Removing unreachable block (ram,0x015088e4) */
/* WARNING: Removing unreachable block (ram,0x015088e8) */
/* WARNING: Removing unreachable block (ram,0x0164aa78) */
/* WARNING: Removing unreachable block (ram,0x0164aaac) */
/* WARNING: Removing unreachable block (ram,0x0164aad8) */
/* WARNING: Removing unreachable block (ram,0x0164aae8) */
/* WARNING: Removing unreachable block (ram,0x0164aaf0) */
/* WARNING: Removing unreachable block (ram,0x0164aafc) */
/* WARNING: Removing unreachable block (ram,0x0164aba8) */
/* WARNING: Removing unreachable block (ram,0x0164ab10) */
/* WARNING: Removing unreachable block (ram,0x0164ab14) */
/* WARNING: Removing unreachable block (ram,0x0164ab24) */
/* WARNING: Removing unreachable block (ram,0x0164ab40) */
/* WARNING: Removing unreachable block (ram,0x0164ab48) */
/* WARNING: Removing unreachable block (ram,0x0164ab4c) */
/* WARNING: Removing unreachable block (ram,0x0164ab58) */
/* WARNING: Removing unreachable block (ram,0x0164abe0) */
/* WARNING: Removing unreachable block (ram,0x0164abe4) */
/* WARNING: Removing unreachable block (ram,0x0164ac18) */
/* WARNING: Removing unreachable block (ram,0x0164ac2c) */
/* WARNING: Removing unreachable block (ram,0x0164ac3c) */
/* WARNING: Removing unreachable block (ram,0x0164ac68) */
/* WARNING: Removing unreachable block (ram,0x0164ac44) */
/* WARNING: Removing unreachable block (ram,0x0164ac6c) */
/* WARNING: Removing unreachable block (ram,0x0164ac9c) */
/* WARNING: Removing unreachable block (ram,0x0164acbc) */
/* WARNING: Removing unreachable block (ram,0x0164acd0) */
/* WARNING: Removing unreachable block (ram,0x0164acd8) */
/* WARNING: Removing unreachable block (ram,0x0164acdc) */
/* WARNING: Removing unreachable block (ram,0x0164acf4) */
/* WARNING: Removing unreachable block (ram,0x0164acfc) */
/* WARNING: Removing unreachable block (ram,0x0164ad00) */
/* WARNING: Removing unreachable block (ram,0x0164ac50) */
/* WARNING: Removing unreachable block (ram,0x0164ab74) */
/* WARNING: Removing unreachable block (ram,0x0164ab78) */
/* WARNING: Removing unreachable block (ram,0x0164ab8c) */
/* WARNING: Removing unreachable block (ram,0x0164ab94) */
/* WARNING: Removing unreachable block (ram,0x0164ab98) */
/* WARNING: Removing unreachable block (ram,0x015088a8) */
/* WARNING: Removing unreachable block (ram,0x015088ac) */
/* WARNING: Removing unreachable block (ram,0x015088b0) */
/* WARNING: Removing unreachable block (ram,0x01508844) */
/* WARNING: Removing unreachable block (ram,0x01508848) */
/* WARNING: Removing unreachable block (ram,0x01508850) */
/* WARNING: Removing unreachable block (ram,0x0150885c) */
/* WARNING: Removing unreachable block (ram,0x01508868) */
/* WARNING: Removing unreachable block (ram,0x01508870) */
/* WARNING: Removing unreachable block (ram,0x01508890) */
/* WARNING: Removing unreachable block (ram,0x01508898) */
/* WARNING: Removing unreachable block (ram,0x0150889c) */
/* WARNING: Removing unreachable block (ram,0x015087f4) */
/* WARNING: Removing unreachable block (ram,0x015088c0) */
/* WARNING: Removing unreachable block (ram,0x015088cc) */
/* WARNING: Removing unreachable block (ram,0x015088d4) */
/* WARNING: Removing unreachable block (ram,0x015088d8) */
/* WARNING: Removing unreachable block (ram,0x015087f8) */
/* WARNING: Removing unreachable block (ram,0x01508800) */
/* WARNING: Removing unreachable block (ram,0x0150880c) */
/* WARNING: Removing unreachable block (ram,0x01508920) */
/* WARNING: Removing unreachable block (ram,0x01508924) */
/* WARNING: Removing unreachable block (ram,0x01508944) */
/* WARNING: Removing unreachable block (ram,0x0150894c) */
/* WARNING: Removing unreachable block (ram,0x01508984) */
/* WARNING: Removing unreachable block (ram,0x01508954) */
/* WARNING: Removing unreachable block (ram,0x01508978) */
/* WARNING: Removing unreachable block (ram,0x01508960) */
/* WARNING: Removing unreachable block (ram,0x01508988) */
/* WARNING: Removing unreachable block (ram,0x0150896c) */
/* WARNING: Removing unreachable block (ram,0x0150897c) */
/* WARNING: Removing unreachable block (ram,0x0150881c) */
/* WARNING: Removing unreachable block (ram,0x0150882c) */
/* WARNING: Removing unreachable block (ram,0x01508834) */
/* WARNING: Removing unreachable block (ram,0x01508838) */
/* WARNING: Removing unreachable block (ram,0x01508a94) */
/* WARNING: Removing unreachable block (ram,0x01508ab0) */
/* WARNING: Removing unreachable block (ram,0x01508a98) */
/* WARNING: Removing unreachable block (ram,0x01508a00) */
/* WARNING: Removing unreachable block (ram,0x01508a9c) */
/* WARNING: Removing unreachable block (ram,0x01508a04) */
/* WARNING: Removing unreachable block (ram,0x01508a0c) */
/* WARNING: Removing unreachable block (ram,0x01508a18) */
/* WARNING: Removing unreachable block (ram,0x01508a28) */
/* WARNING: Removing unreachable block (ram,0x01508a30) */
/* WARNING: Removing unreachable block (ram,0x01508a40) */
/* WARNING: Removing unreachable block (ram,0x01508a4c) */
/* WARNING: Removing unreachable block (ram,0x01508a58) */
/* WARNING: Removing unreachable block (ram,0x01508a64) */
/* WARNING: Removing unreachable block (ram,0x01508a70) */
/* WARNING: Removing unreachable block (ram,0x01508ad0) */
/* WARNING: Removing unreachable block (ram,0x01508ad4) */
/* WARNING: Removing unreachable block (ram,0x01508af0) */
/* WARNING: Removing unreachable block (ram,0x01508af8) */
/* WARNING: Removing unreachable block (ram,0x01508b04) */
/* WARNING: Removing unreachable block (ram,0x01508b08) */
/* WARNING: Removing unreachable block (ram,0x01508b40) */
/* WARNING: Removing unreachable block (ram,0x01508b4c) */
/* WARNING: Removing unreachable block (ram,0x01508b10) */
/* WARNING: Removing unreachable block (ram,0x01508b34) */
/* WARNING: Removing unreachable block (ram,0x0150855c) */
/* WARNING: Removing unreachable block (ram,0x01508584) */
/* WARNING: Removing unreachable block (ram,0x01508598) */
/* WARNING: Removing unreachable block (ram,0x015085a8) */
/* WARNING: Removing unreachable block (ram,0x015085b0) */
/* WARNING: Removing unreachable block (ram,0x015085a0) */
/* WARNING: Removing unreachable block (ram,0x015085cc) */
/* WARNING: Removing unreachable block (ram,0x015085d4) */
/* WARNING: Removing unreachable block (ram,0x015085e0) */
/* WARNING: Removing unreachable block (ram,0x015085f4) */
/* WARNING: Removing unreachable block (ram,0x01508638) */
/* WARNING: Removing unreachable block (ram,0x015085fc) */
/* WARNING: Removing unreachable block (ram,0x01508600) */
/* WARNING: Removing unreachable block (ram,0x01508644) */
/* WARNING: Removing unreachable block (ram,0x01508614) */
/* WARNING: Removing unreachable block (ram,0x0150863c) */
/* WARNING: Removing unreachable block (ram,0x01508648) */
/* WARNING: Removing unreachable block (ram,0x01508674) */
/* WARNING: Removing unreachable block (ram,0x01508688) */
/* WARNING: Removing unreachable block (ram,0x01508694) */
/* WARNING: Removing unreachable block (ram,0x0150869c) */
/* WARNING: Removing unreachable block (ram,0x015086a0) */
/* WARNING: Removing unreachable block (ram,0x015086ac) */
/* WARNING: Removing unreachable block (ram,0x01508748) */
/* WARNING: Removing unreachable block (ram,0x01508754) */
/* WARNING: Removing unreachable block (ram,0x0150877c) */
/* WARNING: Removing unreachable block (ram,0x0150879c) */
/* WARNING: Removing unreachable block (ram,0x015087b0) */
/* WARNING: Removing unreachable block (ram,0x0150890c) */
/* WARNING: Removing unreachable block (ram,0x015087b8) */
/* WARNING: Removing unreachable block (ram,0x015087dc) */
/* WARNING: Removing unreachable block (ram,0x015087e4) */
/* WARNING: Removing unreachable block (ram,0x015087e8) */
/* WARNING: Removing unreachable block (ram,0x015086b4) */
/* WARNING: Removing unreachable block (ram,0x015086c4) */
/* WARNING: Removing unreachable block (ram,0x015086c8) */
/* WARNING: Removing unreachable block (ram,0x015086d0) */
/* WARNING: Removing unreachable block (ram,0x015086e0) */
/* WARNING: Removing unreachable block (ram,0x015086e8) */
/* WARNING: Removing unreachable block (ram,0x015086ec) */
/* WARNING: Removing unreachable block (ram,0x015086f8) */
/* WARNING: Removing unreachable block (ram,0x01508700) */
/* WARNING: Removing unreachable block (ram,0x01508738) */
/* WARNING: Removing unreachable block (ram,0x01508714) */
/* WARNING: Removing unreachable block (ram,0x01e6eb30) */
/* WARNING: Removing unreachable block (ram,0x01e6eb78) */
/* WARNING: Removing unreachable block (ram,0x01e6eb68) */
/* WARNING: Removing unreachable block (ram,0x01e6eb70) */
/* WARNING: Removing unreachable block (ram,0x01e6eb80) */
/* WARNING: Removing unreachable block (ram,0x01e6eb84) */
/* WARNING: Removing unreachable block (ram,0x01e6eb9c) */
/* WARNING: Removing unreachable block (ram,0x01e6eba4) */
/* WARNING: Removing unreachable block (ram,0x01e6ebd4) */
/* WARNING: Removing unreachable block (ram,0x01e6ec58) */
/* WARNING: Removing unreachable block (ram,0x01e6ec64) */
/* WARNING: Removing unreachable block (ram,0x01e6ec6c) */
/* WARNING: Removing unreachable block (ram,0x01e6ece8) */
/* WARNING: Removing unreachable block (ram,0x01e6ed4c) */
/* WARNING: Removing unreachable block (ram,0x01e6ecf0) */
/* WARNING: Removing unreachable block (ram,0x01e6ed08) */
/* WARNING: Removing unreachable block (ram,0x01e6ed10) */
/* WARNING: Removing unreachable block (ram,0x01e6edf4) */
/* WARNING: Removing unreachable block (ram,0x01e6ed1c) */
/* WARNING: Removing unreachable block (ram,0x01e6ed28) */
/* WARNING: Removing unreachable block (ram,0x01e6ee04) */
/* WARNING: Removing unreachable block (ram,0x01e6ec84) */
/* WARNING: Removing unreachable block (ram,0x01e6ed38) */
/* WARNING: Removing unreachable block (ram,0x01e6ec88) */
/* WARNING: Removing unreachable block (ram,0x01e6ec9c) */
/* WARNING: Removing unreachable block (ram,0x01e6eca4) */
/* WARNING: Removing unreachable block (ram,0x01e6edcc) */
/* WARNING: Removing unreachable block (ram,0x01e6ecb0) */
/* WARNING: Removing unreachable block (ram,0x01e6ecbc) */
/* WARNING: Removing unreachable block (ram,0x01e6eddc) */
/* WARNING: Removing unreachable block (ram,0x01e6ede0) */
/* WARNING: Removing unreachable block (ram,0x01e6ee08) */
/* WARNING: Removing unreachable block (ram,0x01e6ebd8) */
/* WARNING: Removing unreachable block (ram,0x01e6ebdc) */
/* WARNING: Removing unreachable block (ram,0x01e6ebe8) */
/* WARNING: Removing unreachable block (ram,0x01e6ebf4) */
/* WARNING: Removing unreachable block (ram,0x01e6ebfc) */
/* WARNING: Removing unreachable block (ram,0x01e6ed68) */
/* WARNING: Removing unreachable block (ram,0x01e6ee18) */
/* WARNING: Removing unreachable block (ram,0x01e6ed70) */
/* WARNING: Removing unreachable block (ram,0x01e6ed88) */
/* WARNING: Removing unreachable block (ram,0x01e6ed90) */
/* WARNING: Removing unreachable block (ram,0x01e6ee60) */
/* WARNING: Removing unreachable block (ram,0x01e6ed9c) */
/* WARNING: Removing unreachable block (ram,0x01e6eda8) */
/* WARNING: Removing unreachable block (ram,0x01e6ee70) */
/* WARNING: Removing unreachable block (ram,0x01e6ec14) */
/* WARNING: Removing unreachable block (ram,0x01e6edb8) */
/* WARNING: Removing unreachable block (ram,0x01e6ec18) */
/* WARNING: Removing unreachable block (ram,0x01e6ec2c) */
/* WARNING: Removing unreachable block (ram,0x01e6ec34) */
/* WARNING: Removing unreachable block (ram,0x01e6ee38) */
/* WARNING: Removing unreachable block (ram,0x01e6ec40) */
/* WARNING: Removing unreachable block (ram,0x01e6ec4c) */
/* WARNING: Removing unreachable block (ram,0x01e6ee48) */
/* WARNING: Removing unreachable block (ram,0x01e6ee4c) */
/* WARNING: Removing unreachable block (ram,0x01e6ee74) */
/* WARNING: Removing unreachable block (ram,0x01e6ebb8) */
/* WARNING: Removing unreachable block (ram,0x01e6ecc8) */
/* WARNING: Removing unreachable block (ram,0x01e6ebbc) */
/* WARNING: Removing unreachable block (ram,0x01e6ecd8) */
/* WARNING: Removing unreachable block (ram,0x01e6ece4) */
/* WARNING: Removing unreachable block (ram,0x01e6ee88) */
/* WARNING: Removing unreachable block (ram,0x01508620) */
/* WARNING: Removing unreachable block (ram,0x015085a4) */
/* WARNING: Removing unreachable block (ram,0x01508628) */
/* WARNING: Removing unreachable block (ram,0x01508b20) */
/* WARNING: Removing unreachable block (ram,0x01508b2c) */
/* WARNING: Removing unreachable block (ram,0x01508a84) */
/* WARNING: Removing unreachable block (ram,0x0327736c) */
/* WARNING: Removing unreachable block (ram,0x03277390) */
/* WARNING: Removing unreachable block (ram,0x032773a4) */
/* WARNING: Removing unreachable block (ram,0x0164ad0c) */
/* WARNING: Removing unreachable block (ram,0x0164ad68) */
/* WARNING: Removing unreachable block (ram,0x0164ad10) */
/* WARNING: Removing unreachable block (ram,0x0164ad1c) */
/* WARNING: Removing unreachable block (ram,0x0164ad24) */
/* WARNING: Removing unreachable block (ram,0x0164ad28) */
/* WARNING: Removing unreachable block (ram,0x0164ad78) */
/* WARNING: Removing unreachable block (ram,0x0164ad9c) */
/* WARNING: Removing unreachable block (ram,0x0164adb0) */
/* WARNING: Removing unreachable block (ram,0x0164add0) */
/* WARNING: Removing unreachable block (ram,0x0164adc0) */
/* WARNING: Removing unreachable block (ram,0x0164add4) */
/* WARNING: Removing unreachable block (ram,0x0164ad34) */
/* WARNING: Removing unreachable block (ram,0x0164ad44) */
/* WARNING: Removing unreachable block (ram,0x0164ad4c) */
/* WARNING: Removing unreachable block (ram,0x0164ad50) */

uint Atlas_UI_TabController__IsItemInTab(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  
  if ((bRam0000000003eb4d2f & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4d2f = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003ec021a & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ec021a = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*UnityEngine.Object$$CompareBaseObjects*/ func_0x03248740(param_2,0);
  return uVar1 ^ 1;
}



// ============================================================
// RVA: 0x1508ae0 | Atlas.UI.TabController.SetSelectedGameObjectInTab
// ============================================================

/* WARNING: Possible PIC construction at 0x015087f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01508840: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015088a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015088e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164aba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164ad08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015089fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01508a90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01508a00) */
/* WARNING: Removing unreachable block (ram,0x01508a04) */
/* WARNING: Removing unreachable block (ram,0x01508a0c) */
/* WARNING: Removing unreachable block (ram,0x01508a18) */
/* WARNING: Removing unreachable block (ram,0x01508a28) */
/* WARNING: Removing unreachable block (ram,0x01508a30) */
/* WARNING: Removing unreachable block (ram,0x01508a40) */
/* WARNING: Removing unreachable block (ram,0x01508a4c) */
/* WARNING: Removing unreachable block (ram,0x01508a58) */
/* WARNING: Removing unreachable block (ram,0x01508a64) */
/* WARNING: Removing unreachable block (ram,0x01508a70) */
/* WARNING: Removing unreachable block (ram,0x01508ad0) */
/* WARNING: Removing unreachable block (ram,0x01508ad4) */
/* WARNING: Removing unreachable block (ram,0x01508a84) */
/* WARNING: Removing unreachable block (ram,0x0164ad0c) */
/* WARNING: Removing unreachable block (ram,0x0164ad68) */
/* WARNING: Removing unreachable block (ram,0x0164ad10) */
/* WARNING: Removing unreachable block (ram,0x0164ad1c) */
/* WARNING: Removing unreachable block (ram,0x0164ad24) */
/* WARNING: Removing unreachable block (ram,0x0164ad28) */
/* WARNING: Removing unreachable block (ram,0x0164ad78) */
/* WARNING: Removing unreachable block (ram,0x0164ad9c) */
/* WARNING: Removing unreachable block (ram,0x0164adb0) */
/* WARNING: Removing unreachable block (ram,0x0164add0) */
/* WARNING: Removing unreachable block (ram,0x0164adc0) */
/* WARNING: Removing unreachable block (ram,0x0164add4) */
/* WARNING: Removing unreachable block (ram,0x0164ad34) */
/* WARNING: Removing unreachable block (ram,0x0164ad44) */
/* WARNING: Removing unreachable block (ram,0x0164ad4c) */
/* WARNING: Removing unreachable block (ram,0x0164ad50) */
/* WARNING: Removing unreachable block (ram,0x0164aba4) */
/* WARNING: Removing unreachable block (ram,0x0164abbc) */
/* WARNING: Removing unreachable block (ram,0x0164abcc) */
/* WARNING: Removing unreachable block (ram,0x0164a1b8) */
/* WARNING: Removing unreachable block (ram,0x0164a1e0) */
/* WARNING: Removing unreachable block (ram,0x0164a20c) */
/* WARNING: Removing unreachable block (ram,0x0164a228) */
/* WARNING: Removing unreachable block (ram,0x0164a230) */
/* WARNING: Removing unreachable block (ram,0x0164a234) */
/* WARNING: Removing unreachable block (ram,0x0164a24c) */
/* WARNING: Removing unreachable block (ram,0x0164a254) */
/* WARNING: Removing unreachable block (ram,0x0164a264) */
/* WARNING: Removing unreachable block (ram,0x0164a274) */
/* WARNING: Removing unreachable block (ram,0x0164a28c) */
/* WARNING: Removing unreachable block (ram,0x0164a2a8) */
/* WARNING: Removing unreachable block (ram,0x0164a2b0) */
/* WARNING: Removing unreachable block (ram,0x0164a2b4) */
/* WARNING: Removing unreachable block (ram,0x0164a2c4) */
/* WARNING: Removing unreachable block (ram,0x0164a2d0) */
/* WARNING: Removing unreachable block (ram,0x0164a2d4) */
/* WARNING: Removing unreachable block (ram,0x0164a308) */
/* WARNING: Removing unreachable block (ram,0x0164a30c) */
/* WARNING: Removing unreachable block (ram,0x0164a2f4) */
/* WARNING: Removing unreachable block (ram,0x0164a2f8) */
/* WARNING: Removing unreachable block (ram,0x015088e4) */
/* WARNING: Removing unreachable block (ram,0x015088e8) */
/* WARNING: Removing unreachable block (ram,0x0164aa78) */
/* WARNING: Removing unreachable block (ram,0x0164aaac) */
/* WARNING: Removing unreachable block (ram,0x0164aad8) */
/* WARNING: Removing unreachable block (ram,0x0164aae8) */
/* WARNING: Removing unreachable block (ram,0x0164aaf0) */
/* WARNING: Removing unreachable block (ram,0x0164aafc) */
/* WARNING: Removing unreachable block (ram,0x0164aba8) */
/* WARNING: Removing unreachable block (ram,0x0164ab10) */
/* WARNING: Removing unreachable block (ram,0x0164ab14) */
/* WARNING: Removing unreachable block (ram,0x0164ab24) */
/* WARNING: Removing unreachable block (ram,0x0164ab40) */
/* WARNING: Removing unreachable block (ram,0x0164ab48) */
/* WARNING: Removing unreachable block (ram,0x0164ab4c) */
/* WARNING: Removing unreachable block (ram,0x0164ab58) */
/* WARNING: Removing unreachable block (ram,0x0164abe0) */
/* WARNING: Removing unreachable block (ram,0x0164abe4) */
/* WARNING: Removing unreachable block (ram,0x0164ac18) */
/* WARNING: Removing unreachable block (ram,0x0164ac2c) */
/* WARNING: Removing unreachable block (ram,0x0164ac3c) */
/* WARNING: Removing unreachable block (ram,0x0164ac68) */
/* WARNING: Removing unreachable block (ram,0x0164ac44) */
/* WARNING: Removing unreachable block (ram,0x0164ac6c) */
/* WARNING: Removing unreachable block (ram,0x0164ac9c) */
/* WARNING: Removing unreachable block (ram,0x0164acbc) */
/* WARNING: Removing unreachable block (ram,0x0164acd0) */
/* WARNING: Removing unreachable block (ram,0x0164acd8) */
/* WARNING: Removing unreachable block (ram,0x0164acdc) */
/* WARNING: Removing unreachable block (ram,0x0164acf4) */
/* WARNING: Removing unreachable block (ram,0x0164acfc) */
/* WARNING: Removing unreachable block (ram,0x0164ad00) */
/* WARNING: Removing unreachable block (ram,0x0164ac50) */
/* WARNING: Removing unreachable block (ram,0x0164ab74) */
/* WARNING: Removing unreachable block (ram,0x0164ab78) */
/* WARNING: Removing unreachable block (ram,0x0164ab8c) */
/* WARNING: Removing unreachable block (ram,0x0164ab94) */
/* WARNING: Removing unreachable block (ram,0x0164ab98) */
/* WARNING: Removing unreachable block (ram,0x015088a8) */
/* WARNING: Removing unreachable block (ram,0x015088ac) */
/* WARNING: Removing unreachable block (ram,0x015088b0) */
/* WARNING: Removing unreachable block (ram,0x01508844) */
/* WARNING: Removing unreachable block (ram,0x01508848) */
/* WARNING: Removing unreachable block (ram,0x01508850) */
/* WARNING: Removing unreachable block (ram,0x0150885c) */
/* WARNING: Removing unreachable block (ram,0x01508868) */
/* WARNING: Removing unreachable block (ram,0x01508870) */
/* WARNING: Removing unreachable block (ram,0x01508890) */
/* WARNING: Removing unreachable block (ram,0x01508898) */
/* WARNING: Removing unreachable block (ram,0x0150889c) */
/* WARNING: Removing unreachable block (ram,0x015087f4) */
/* WARNING: Removing unreachable block (ram,0x015088c0) */
/* WARNING: Removing unreachable block (ram,0x015088cc) */
/* WARNING: Removing unreachable block (ram,0x015088d4) */
/* WARNING: Removing unreachable block (ram,0x015088d8) */
/* WARNING: Removing unreachable block (ram,0x015087f8) */
/* WARNING: Removing unreachable block (ram,0x01508800) */
/* WARNING: Removing unreachable block (ram,0x0150880c) */
/* WARNING: Removing unreachable block (ram,0x01508920) */
/* WARNING: Removing unreachable block (ram,0x01508924) */
/* WARNING: Removing unreachable block (ram,0x01508944) */
/* WARNING: Removing unreachable block (ram,0x0150894c) */
/* WARNING: Removing unreachable block (ram,0x01508984) */
/* WARNING: Removing unreachable block (ram,0x01508954) */
/* WARNING: Removing unreachable block (ram,0x01508978) */
/* WARNING: Removing unreachable block (ram,0x01508960) */
/* WARNING: Removing unreachable block (ram,0x01508988) */
/* WARNING: Removing unreachable block (ram,0x015089c8) */
/* WARNING: Removing unreachable block (ram,0x015089dc) */
/* WARNING: Removing unreachable block (ram,0x015089e8) */
/* WARNING: Removing unreachable block (ram,0x015089f0) */
/* WARNING: Removing unreachable block (ram,0x015089f4) */
/* WARNING: Removing unreachable block (ram,0x0150896c) */
/* WARNING: Removing unreachable block (ram,0x0150897c) */
/* WARNING: Removing unreachable block (ram,0x0150881c) */
/* WARNING: Removing unreachable block (ram,0x0150882c) */
/* WARNING: Removing unreachable block (ram,0x01508834) */
/* WARNING: Removing unreachable block (ram,0x01508838) */
/* WARNING: Removing unreachable block (ram,0x01508a94) */
/* WARNING: Removing unreachable block (ram,0x01508ab0) */
/* WARNING: Removing unreachable block (ram,0x0327736c) */
/* WARNING: Removing unreachable block (ram,0x03277390) */
/* WARNING: Removing unreachable block (ram,0x032773a4) */
/* WARNING: Removing unreachable block (ram,0x01508a98) */
/* WARNING: Removing unreachable block (ram,0x01508a9c) */

long * Atlas_UI_TabController__SetSelectedGameObjectInTab(long *param_1,long param_2,long param_3)

{
  ushort uVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  int *piVar21;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  ulong unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  code *pcVar22;
  long **pplVar23;
  undefined1 **ppuVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  long *plStack_98;
  undefined8 uStack_60;
  long *plStack_58;
  ulong uStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  auVar25._8_8_ = unaff_x19;
  auVar25._0_8_ = unaff_x20;
  ppuVar24 = (undefined1 **)&stack0xfffffffffffffff0;
  lVar20 = param_1[4];
  if (lVar20 != 0) {
    uVar6 = *(uint *)(lVar20 + 0x18);
    if (0 < (int)uVar6) {
      uVar16 = 0;
      do {
        uVar14 = (uint)uVar16;
        if (uVar6 == uVar14) {
          uVar8 = func_0x00f78b24();
          func_0x00f78ac0(uVar8,0);
          goto LAB_01508b4c;
        }
        if (*(long *)(lVar20 + (long)(int)uVar14 * 8 + 0x20) == param_2) {
          unaff_x22 = 0x3eb4000;
          plVar7 = param_1;
          if ((bRam0000000003eb4d2d & 1) == 0) {
            plVar7 = (long *)func_0x00f78a20(0x3d1f018);
            bRam0000000003eb4d2d = 1;
          }
          if (param_1[6] == 0) {
            if (param_1[4] != 0) {
              plVar7 = (long *)func_0x00f78a34(/*UnityEngine.GameObject[]_TypeInfo*/ uRam0000000003d1f018,
                                               *(undefined4 *)(param_1[4] + 0x18));
              param_1[6] = (long)plVar7;
              goto joined_r0x015085c8;
            }
code_r0x01508638:
            func_0x00f78af4();
code_r0x0150863c:
            uVar8 = func_0x00f78b24();
          }
          else {
joined_r0x015085c8:
            if ((int)uVar14 < 0) {
              return plVar7;
            }
            if (param_1[4] == 0) goto code_r0x01508638;
            if (*(int *)(param_1[4] + 0x18) <= (int)uVar14) {
              return plVar7;
            }
            plVar7 = (long *)Atlas_UI_TabController__IsItemInTab(param_1,param_3,uVar16);
            if ((int)plVar7 == 0) {
              return plVar7;
            }
            param_1 = (long *)param_1[6];
            if (param_1 == (long *)0x0) goto code_r0x01508638;
            if ((param_3 == 0) ||
               (plVar7 = (long *)func_0x00f78adc(param_3,*(undefined8 *)(*param_1 + 0x40)),
               plVar7 != (long *)0x0)) {
              if (uVar14 < *(uint *)(param_1 + 3)) {
                param_1[uVar16 + 4] = param_3;
                return plVar7;
              }
              goto code_r0x0150863c;
            }
            uVar8 = func_0x00f78b14();
          }
          auVar25 = func_0x00f78ac0(uVar8,0);
          lVar20 = auVar25._8_8_;
          plVar9 = auVar25._0_8_;
          puVar2 = &uStack_60;
          uStack_60 = 0x3eb4000;
          pcStack_38 = Atlas_UI_TabController__OnTabPressed;
          ppuVar24 = &puStack_40;
          plVar7 = plVar9;
          plStack_58 = param_1;
          uStack_50 = uVar16;
          lStack_48 = param_3;
          puStack_40 = &stack0xfffffffffffffff0;
          if ((bRam0000000003eb4d2e & 1) == 0) {
            plVar7 = (long *)func_0x00f78a20(0x3d2a578);
            bRam0000000003eb4d2e = 1;
          }
          if (plVar9[5] == lVar20) {
            return plVar7;
          }
          lVar15 = plVar9[4];
          if (lVar15 == 0) goto LAB_015086e8;
          unaff_x21 = 0;
          goto LAB_015086a0;
        }
        uVar16 = (ulong)(uVar14 + 1);
      } while (uVar6 != uVar14 + 1);
    }
    return param_1;
  }
LAB_01508b4c:
  uVar8 = func_0x00f78af4();
  pcVar22 = (code *)&Atlas_UI_TabController__OnInputFamilyChanged;
  uVar10 = Atlas_UI_TabController__GetSelectedTab();
  auVar26._8_8_ = uVar10;
  auVar26._0_8_ = uVar8;
  puVar2 = (undefined8 *)&stack0xfffffffffffffff0;
code_r0x01508754:
  lVar20 = auVar26._0_8_;
  *(undefined8 *)((long)puVar2 + -0x40) = unaff_x24;
  *(undefined8 *)((long)puVar2 + -0x38) = unaff_x23;
  *(undefined8 *)((long)puVar2 + -0x30) = unaff_x22;
  *(ulong *)((long)puVar2 + -0x28) = unaff_x21;
  *(undefined1 (*) [16])((long)puVar2 + -0x20) = auVar25;
  *(undefined1 ***)((long)puVar2 + -0x10) = ppuVar24;
  *(code **)((long)puVar2 + -8) = pcVar22;
  if ((bRam0000000003eb4d2c & 1) == 0) {
    func_0x00f78a20(0x3d57998);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4d2c = 1;
  }
  uVar8 = /*Core.Input.InputManager$$get_CurrentInputFamily*/ func_0x01649514(0);
  plVar7 = (long *)/*Core.Input.InputManagerExtensions$$IsControllerOrKeyboard*/ func_0x0164bbd0(uVar8,0);
  if ((((ulong)plVar7 & 1) == 0) && (*(char *)(lVar20 + 0x52) == '\0')) {
    return plVar7;
  }
  uVar8 = Atlas_UI_TabController__GetSelectedGameObjectInTab(lVar20,auVar26._8_8_);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)((long)puVar2 + -0x70) = unaff_x22;
  *(long *)((long)puVar2 + -0x68) = auVar26._8_8_;
  *(undefined8 *)((long)puVar2 + -0x60) = uVar8;
  *(long *)((long)puVar2 + -0x58) = lVar20;
  *(undefined1 **)((long)puVar2 + -0x50) = (undefined1 *)((long)puVar2 + -0x10);
  *(undefined8 *)((long)puVar2 + -0x48) = 0x15087f4;
  if ((bRam0000000003ec021a & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ec021a = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar6 = /*UnityEngine.Object$$CompareBaseObjects*/ func_0x03248740(uVar8,0);
  return (long *)(ulong)(uVar6 ^ 1);
  while (unaff_x21 = unaff_x21 + 1, lVar15 != 0) {
LAB_015086a0:
    if ((long)(int)*(uint *)(lVar15 + 0x18) <= (long)unaff_x21) goto LAB_015086ec;
    if (*(uint *)(lVar15 + 0x18) <= unaff_x21) {
      uVar8 = func_0x00f78b24();
      pcVar22 = Atlas_UI_TabController__MakeSelectionInTabIfKeyboardOrController;
      auVar26 = func_0x00f78ac0(uVar8,0);
      goto code_r0x01508754;
    }
    lVar19 = *(long *)(lVar15 + unaff_x21 * 8 + 0x20);
    if (lVar19 != lVar20) {
      if ((lVar19 == 0) || (*(long *)(lVar19 + 0x18) == 0)) break;
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar19 + 0x18),0,0);
      lVar15 = plVar9[4];
    }
  }
LAB_015086e8:
  do {
    func_0x00f78af4();
LAB_015086ec:
    plVar7 = (long *)plVar9[5];
    plVar9[5] = lVar20;
  } while ((lVar20 == 0) || (*(long *)(lVar20 + 0x18) == 0));
  /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar20 + 0x18),1,0);
  plVar9 = (long *)plVar9[3];
  if (plVar9 == (long *)0x0) {
    return (long *)0x0;
  }
  plStack_98 = plVar9;
  lVar15 = plVar9[0xd];
  if (lVar15 == 0) {
    pplVar23 = &plStack_98;
    lVar19 = 1;
  }
  else {
    lVar19 = *(long *)(lVar15 + 0x18);
    if (lVar19 == 0) {
      return plVar9;
    }
    pplVar23 = (long **)(lVar15 + 0x20);
  }
  lVar15 = 0;
  do {
    plVar17 = pplVar23[lVar15];
    pcVar22 = (code *)plVar17[2];
    plVar11 = (long *)plVar17[4];
    lVar12 = plVar17[5];
    if (*(short *)(lVar12 + 0x48) == -1) {
      func_0x00f78ad8(lVar12);
    }
    iVar4 = func_0x00f78a4c(lVar12);
    bVar3 = *(char *)(lVar12 + 0x4a) == '\x02';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar11 == (long *)0x0) {
code_r0x01e6ecc8:
          plVar11 = (long *)(*pcVar22)(plVar7,lVar20,lVar12);
        }
        else {
          if (((*(short *)(lVar12 + 0x48) == -1) || ((*(byte *)(*plVar11 + 0x115) & 1) != 0)) ||
             (plVar9[3] == 0)) goto code_r0x01e6ebbc;
          iVar4 = func_0x00f78a44(lVar12);
          iVar5 = func_0x00f78ec0(lVar12);
          if (iVar4 == 0) {
            uVar1 = *(ushort *)(lVar12 + 0x48);
            if (iVar5 == 0) {
              lVar12 = *plVar11 + (ulong)uVar1 * 0x10;
              plVar11 = (long *)(**(code **)(lVar12 + 0x138))
                                          (plVar11,plVar7,lVar20,*(undefined8 *)(lVar12 + 0x140));
              goto code_r0x01e6ecd8;
            }
            lVar12 = func_0x00f78a48(lVar12);
            lVar18 = *plVar11;
            uVar16 = (ulong)*(ushort *)(lVar18 + 0x12a);
            if (uVar16 != 0) {
              piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == lVar12) {
                  puVar13 = (undefined8 *)
                            (lVar18 + (long)(int)(*piVar21 + (uint)uVar1) * 0x10 + 0x138);
                  goto code_r0x01e6ee70;
                }
                piVar21 = piVar21 + 4;
                uVar16 = uVar16 - 1;
              } while (uVar16 != 0);
            }
            puVar13 = (undefined8 *)func_0x00fac1f0(plVar11,lVar12,(ulong)uVar1);
code_r0x01e6ee70:
            pcVar22 = (code *)*puVar13;
            puVar13 = (undefined8 *)puVar13[1];
          }
          else {
            if (iVar5 == 0) {
              uVar8 = *(undefined8 *)(*plVar11 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar18 = *plVar11;
              uVar16 = (ulong)*(ushort *)(lVar18 + 0x12a);
              if (uVar16 != 0) {
                piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar21 + -2) == *(long *)(lVar12 + 0x18)) {
                    lVar18 = lVar18 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar12 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01e6ee48;
                  }
                  piVar21 = piVar21 + 4;
                  uVar16 = uVar16 - 1;
                } while (uVar16 != 0);
              }
              lVar18 = func_0x00fac1f0(plVar11);
code_r0x01e6ee48:
              uVar8 = *(undefined8 *)(lVar18 + 8);
            }
            puVar13 = (undefined8 *)func_0x00f78acc(uVar8,lVar12);
            pcVar22 = (code *)*puVar13;
          }
          plVar11 = (long *)(*pcVar22)(plVar11,plVar7,lVar20,puVar13);
        }
      }
      else {
        if ((*(short *)(lVar12 + 0x48) == -1) || (plVar9[3] == 0)) goto code_r0x01e6ecc8;
        iVar4 = func_0x00f78a44(lVar12);
        iVar5 = func_0x00f78ec0(lVar12);
        if (iVar4 == 0) {
          uVar1 = *(ushort *)(lVar12 + 0x48);
          if (iVar5 == 0) {
            lVar12 = *plVar7 + (ulong)uVar1 * 0x10;
            plVar11 = (long *)(**(code **)(lVar12 + 0x138))
                                        (plVar7,lVar20,*(undefined8 *)(lVar12 + 0x140));
            goto code_r0x01e6ecd8;
          }
          lVar12 = func_0x00f78a48(lVar12);
          lVar18 = *plVar7;
          uVar16 = (ulong)*(ushort *)(lVar18 + 0x12a);
          if (uVar16 != 0) {
            piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == lVar12) {
                puVar13 = (undefined8 *)
                          (lVar18 + (long)(int)(*piVar21 + (uint)uVar1) * 0x10 + 0x138);
                goto code_r0x01e6ee04;
              }
              piVar21 = piVar21 + 4;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
          puVar13 = (undefined8 *)func_0x00fac1f0(plVar7,lVar12,(ulong)uVar1);
code_r0x01e6ee04:
          pcVar22 = (code *)*puVar13;
          puVar13 = (undefined8 *)puVar13[1];
        }
        else {
          if (iVar5 == 0) {
            uVar8 = *(undefined8 *)(*plVar7 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar18 = *plVar7;
            uVar16 = (ulong)*(ushort *)(lVar18 + 0x12a);
            if (uVar16 != 0) {
              piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == *(long *)(lVar12 + 0x18)) {
                  lVar18 = lVar18 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01e6eddc;
                }
                piVar21 = piVar21 + 4;
                uVar16 = uVar16 - 1;
              } while (uVar16 != 0);
            }
            lVar18 = func_0x00fac1f0(plVar7);
code_r0x01e6eddc:
            uVar8 = *(undefined8 *)(lVar18 + 8);
          }
          puVar13 = (undefined8 *)func_0x00f78acc(uVar8,lVar12);
          pcVar22 = (code *)*puVar13;
        }
        plVar11 = (long *)(*pcVar22)(plVar7,lVar20,puVar13);
      }
    }
    else {
      if (bVar3) goto code_r0x01e6ecc8;
code_r0x01e6ebbc:
      plVar11 = (long *)(*pcVar22)(plVar11,plVar7,lVar20,lVar12);
    }
code_r0x01e6ecd8:
    lVar15 = lVar15 + 1;
    if (lVar15 == lVar19) {
      return plVar11;
    }
  } while( true );
}



// ============================================================
// RVA: 0x1508b50 | Atlas.UI.TabController.OnInputFamilyChanged
// ============================================================

/* WARNING: Possible PIC construction at 0x015087f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01508840: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015088a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015088e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164aba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164ad08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015089fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01508a90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01508a00) */
/* WARNING: Removing unreachable block (ram,0x01508a04) */
/* WARNING: Removing unreachable block (ram,0x01508a0c) */
/* WARNING: Removing unreachable block (ram,0x01508a18) */
/* WARNING: Removing unreachable block (ram,0x01508a28) */
/* WARNING: Removing unreachable block (ram,0x01508a30) */
/* WARNING: Removing unreachable block (ram,0x01508a40) */
/* WARNING: Removing unreachable block (ram,0x01508a4c) */
/* WARNING: Removing unreachable block (ram,0x01508a58) */
/* WARNING: Removing unreachable block (ram,0x01508a64) */
/* WARNING: Removing unreachable block (ram,0x01508a70) */
/* WARNING: Removing unreachable block (ram,0x01508ad0) */
/* WARNING: Removing unreachable block (ram,0x01508ad4) */
/* WARNING: Removing unreachable block (ram,0x01508af0) */
/* WARNING: Removing unreachable block (ram,0x01508af8) */
/* WARNING: Removing unreachable block (ram,0x01508b04) */
/* WARNING: Removing unreachable block (ram,0x01508b08) */
/* WARNING: Removing unreachable block (ram,0x01508b40) */
/* WARNING: Removing unreachable block (ram,0x01508b4c) */
/* WARNING: Removing unreachable block (ram,0x01508b10) */
/* WARNING: Removing unreachable block (ram,0x01508b34) */
/* WARNING: Removing unreachable block (ram,0x0150855c) */
/* WARNING: Removing unreachable block (ram,0x01508584) */
/* WARNING: Removing unreachable block (ram,0x01508598) */
/* WARNING: Removing unreachable block (ram,0x015085a8) */
/* WARNING: Removing unreachable block (ram,0x015085b0) */
/* WARNING: Removing unreachable block (ram,0x015085a0) */
/* WARNING: Removing unreachable block (ram,0x015085cc) */
/* WARNING: Removing unreachable block (ram,0x015085d4) */
/* WARNING: Removing unreachable block (ram,0x015085e0) */
/* WARNING: Removing unreachable block (ram,0x015085f4) */
/* WARNING: Removing unreachable block (ram,0x01508638) */
/* WARNING: Removing unreachable block (ram,0x015085fc) */
/* WARNING: Removing unreachable block (ram,0x01508600) */
/* WARNING: Removing unreachable block (ram,0x01508644) */
/* WARNING: Removing unreachable block (ram,0x01508614) */
/* WARNING: Removing unreachable block (ram,0x0150863c) */
/* WARNING: Removing unreachable block (ram,0x01508648) */
/* WARNING: Removing unreachable block (ram,0x01508674) */
/* WARNING: Removing unreachable block (ram,0x01508688) */
/* WARNING: Removing unreachable block (ram,0x01508694) */
/* WARNING: Removing unreachable block (ram,0x0150869c) */
/* WARNING: Removing unreachable block (ram,0x015086a0) */
/* WARNING: Removing unreachable block (ram,0x015086ac) */
/* WARNING: Removing unreachable block (ram,0x01508748) */
/* WARNING: Removing unreachable block (ram,0x015086b4) */
/* WARNING: Removing unreachable block (ram,0x015086c4) */
/* WARNING: Removing unreachable block (ram,0x015086c8) */
/* WARNING: Removing unreachable block (ram,0x015086d0) */
/* WARNING: Removing unreachable block (ram,0x015086e0) */
/* WARNING: Removing unreachable block (ram,0x015086e8) */
/* WARNING: Removing unreachable block (ram,0x015086ec) */
/* WARNING: Removing unreachable block (ram,0x015086f8) */
/* WARNING: Removing unreachable block (ram,0x01508700) */
/* WARNING: Removing unreachable block (ram,0x01508738) */
/* WARNING: Removing unreachable block (ram,0x01508714) */
/* WARNING: Removing unreachable block (ram,0x01e6eb30) */
/* WARNING: Removing unreachable block (ram,0x01e6eb78) */
/* WARNING: Removing unreachable block (ram,0x01e6eb68) */
/* WARNING: Removing unreachable block (ram,0x01e6eb70) */
/* WARNING: Removing unreachable block (ram,0x01e6eb80) */
/* WARNING: Removing unreachable block (ram,0x01e6eb84) */
/* WARNING: Removing unreachable block (ram,0x01e6eb9c) */
/* WARNING: Removing unreachable block (ram,0x01e6eba4) */
/* WARNING: Removing unreachable block (ram,0x01e6ebd4) */
/* WARNING: Removing unreachable block (ram,0x01e6ec58) */
/* WARNING: Removing unreachable block (ram,0x01e6ec64) */
/* WARNING: Removing unreachable block (ram,0x01e6ec6c) */
/* WARNING: Removing unreachable block (ram,0x01e6ece8) */
/* WARNING: Removing unreachable block (ram,0x01e6ed4c) */
/* WARNING: Removing unreachable block (ram,0x01e6ecf0) */
/* WARNING: Removing unreachable block (ram,0x01e6ed08) */
/* WARNING: Removing unreachable block (ram,0x01e6ed10) */
/* WARNING: Removing unreachable block (ram,0x01e6edf4) */
/* WARNING: Removing unreachable block (ram,0x01e6ed1c) */
/* WARNING: Removing unreachable block (ram,0x01e6ed28) */
/* WARNING: Removing unreachable block (ram,0x01e6ee04) */
/* WARNING: Removing unreachable block (ram,0x01e6ec84) */
/* WARNING: Removing unreachable block (ram,0x01e6ed38) */
/* WARNING: Removing unreachable block (ram,0x01e6ec88) */
/* WARNING: Removing unreachable block (ram,0x01e6ec9c) */
/* WARNING: Removing unreachable block (ram,0x01e6eca4) */
/* WARNING: Removing unreachable block (ram,0x01e6edcc) */
/* WARNING: Removing unreachable block (ram,0x01e6ecb0) */
/* WARNING: Removing unreachable block (ram,0x01e6ecbc) */
/* WARNING: Removing unreachable block (ram,0x01e6eddc) */
/* WARNING: Removing unreachable block (ram,0x01e6ede0) */
/* WARNING: Removing unreachable block (ram,0x01e6ee08) */
/* WARNING: Removing unreachable block (ram,0x01e6ebd8) */
/* WARNING: Removing unreachable block (ram,0x01e6ebdc) */
/* WARNING: Removing unreachable block (ram,0x01e6ebe8) */
/* WARNING: Removing unreachable block (ram,0x01e6ebf4) */
/* WARNING: Removing unreachable block (ram,0x01e6ebfc) */
/* WARNING: Removing unreachable block (ram,0x01e6ed68) */
/* WARNING: Removing unreachable block (ram,0x01e6ee18) */
/* WARNING: Removing unreachable block (ram,0x01e6ed70) */
/* WARNING: Removing unreachable block (ram,0x01e6ed88) */
/* WARNING: Removing unreachable block (ram,0x01e6ed90) */
/* WARNING: Removing unreachable block (ram,0x01e6ee60) */
/* WARNING: Removing unreachable block (ram,0x01e6ed9c) */
/* WARNING: Removing unreachable block (ram,0x01e6eda8) */
/* WARNING: Removing unreachable block (ram,0x01e6ee70) */
/* WARNING: Removing unreachable block (ram,0x01e6ec14) */
/* WARNING: Removing unreachable block (ram,0x01e6edb8) */
/* WARNING: Removing unreachable block (ram,0x01e6ec18) */
/* WARNING: Removing unreachable block (ram,0x01e6ec2c) */
/* WARNING: Removing unreachable block (ram,0x01e6ec34) */
/* WARNING: Removing unreachable block (ram,0x01e6ee38) */
/* WARNING: Removing unreachable block (ram,0x01e6ec40) */
/* WARNING: Removing unreachable block (ram,0x01e6ec4c) */
/* WARNING: Removing unreachable block (ram,0x01e6ee48) */
/* WARNING: Removing unreachable block (ram,0x01e6ee4c) */
/* WARNING: Removing unreachable block (ram,0x01e6ee74) */
/* WARNING: Removing unreachable block (ram,0x01e6ebb8) */
/* WARNING: Removing unreachable block (ram,0x01e6ecc8) */
/* WARNING: Removing unreachable block (ram,0x01e6ebbc) */
/* WARNING: Removing unreachable block (ram,0x01e6ecd8) */
/* WARNING: Removing unreachable block (ram,0x01e6ece4) */
/* WARNING: Removing unreachable block (ram,0x01e6ee88) */
/* WARNING: Removing unreachable block (ram,0x01508620) */
/* WARNING: Removing unreachable block (ram,0x015085a4) */
/* WARNING: Removing unreachable block (ram,0x01508628) */
/* WARNING: Removing unreachable block (ram,0x01508b20) */
/* WARNING: Removing unreachable block (ram,0x01508b2c) */
/* WARNING: Removing unreachable block (ram,0x01508a84) */
/* WARNING: Removing unreachable block (ram,0x0164ad0c) */
/* WARNING: Removing unreachable block (ram,0x0164ad68) */
/* WARNING: Removing unreachable block (ram,0x0164ad10) */
/* WARNING: Removing unreachable block (ram,0x0164ad1c) */
/* WARNING: Removing unreachable block (ram,0x0164ad24) */
/* WARNING: Removing unreachable block (ram,0x0164ad28) */
/* WARNING: Removing unreachable block (ram,0x0164ad78) */
/* WARNING: Removing unreachable block (ram,0x0164ad9c) */
/* WARNING: Removing unreachable block (ram,0x0164adb0) */
/* WARNING: Removing unreachable block (ram,0x0164add0) */
/* WARNING: Removing unreachable block (ram,0x0164adc0) */
/* WARNING: Removing unreachable block (ram,0x0164add4) */
/* WARNING: Removing unreachable block (ram,0x0164ad34) */
/* WARNING: Removing unreachable block (ram,0x0164ad44) */
/* WARNING: Removing unreachable block (ram,0x0164ad4c) */
/* WARNING: Removing unreachable block (ram,0x0164ad50) */
/* WARNING: Removing unreachable block (ram,0x0164aba4) */
/* WARNING: Removing unreachable block (ram,0x0164abbc) */
/* WARNING: Removing unreachable block (ram,0x0164abcc) */
/* WARNING: Removing unreachable block (ram,0x0164a1b8) */
/* WARNING: Removing unreachable block (ram,0x0164a1e0) */
/* WARNING: Removing unreachable block (ram,0x0164a20c) */
/* WARNING: Removing unreachable block (ram,0x0164a228) */
/* WARNING: Removing unreachable block (ram,0x0164a230) */
/* WARNING: Removing unreachable block (ram,0x0164a234) */
/* WARNING: Removing unreachable block (ram,0x0164a24c) */
/* WARNING: Removing unreachable block (ram,0x0164a254) */
/* WARNING: Removing unreachable block (ram,0x0164a264) */
/* WARNING: Removing unreachable block (ram,0x0164a274) */
/* WARNING: Removing unreachable block (ram,0x0164a28c) */
/* WARNING: Removing unreachable block (ram,0x0164a2a8) */
/* WARNING: Removing unreachable block (ram,0x0164a2b0) */
/* WARNING: Removing unreachable block (ram,0x0164a2b4) */
/* WARNING: Removing unreachable block (ram,0x0164a2c4) */
/* WARNING: Removing unreachable block (ram,0x0164a2d0) */
/* WARNING: Removing unreachable block (ram,0x0164a2d4) */
/* WARNING: Removing unreachable block (ram,0x0164a308) */
/* WARNING: Removing unreachable block (ram,0x0164a30c) */
/* WARNING: Removing unreachable block (ram,0x0164a2f4) */
/* WARNING: Removing unreachable block (ram,0x0164a2f8) */
/* WARNING: Removing unreachable block (ram,0x015088e4) */
/* WARNING: Removing unreachable block (ram,0x015088e8) */
/* WARNING: Removing unreachable block (ram,0x0164aa78) */
/* WARNING: Removing unreachable block (ram,0x0164aaac) */
/* WARNING: Removing unreachable block (ram,0x0164aad8) */
/* WARNING: Removing unreachable block (ram,0x0164aae8) */
/* WARNING: Removing unreachable block (ram,0x0164aaf0) */
/* WARNING: Removing unreachable block (ram,0x0164aafc) */
/* WARNING: Removing unreachable block (ram,0x0164aba8) */
/* WARNING: Removing unreachable block (ram,0x0164ab10) */
/* WARNING: Removing unreachable block (ram,0x0164ab14) */
/* WARNING: Removing unreachable block (ram,0x0164ab24) */
/* WARNING: Removing unreachable block (ram,0x0164ab40) */
/* WARNING: Removing unreachable block (ram,0x0164ab48) */
/* WARNING: Removing unreachable block (ram,0x0164ab4c) */
/* WARNING: Removing unreachable block (ram,0x0164ab58) */
/* WARNING: Removing unreachable block (ram,0x0164abe0) */
/* WARNING: Removing unreachable block (ram,0x0164abe4) */
/* WARNING: Removing unreachable block (ram,0x0164ac18) */
/* WARNING: Removing unreachable block (ram,0x0164ac2c) */
/* WARNING: Removing unreachable block (ram,0x0164ac3c) */
/* WARNING: Removing unreachable block (ram,0x0164ac68) */
/* WARNING: Removing unreachable block (ram,0x0164ac44) */
/* WARNING: Removing unreachable block (ram,0x0164ac6c) */
/* WARNING: Removing unreachable block (ram,0x0164ac9c) */
/* WARNING: Removing unreachable block (ram,0x0164acbc) */
/* WARNING: Removing unreachable block (ram,0x0164acd0) */
/* WARNING: Removing unreachable block (ram,0x0164acd8) */
/* WARNING: Removing unreachable block (ram,0x0164acdc) */
/* WARNING: Removing unreachable block (ram,0x0164acf4) */
/* WARNING: Removing unreachable block (ram,0x0164acfc) */
/* WARNING: Removing unreachable block (ram,0x0164ad00) */
/* WARNING: Removing unreachable block (ram,0x0164ac50) */
/* WARNING: Removing unreachable block (ram,0x0164ab74) */
/* WARNING: Removing unreachable block (ram,0x0164ab78) */
/* WARNING: Removing unreachable block (ram,0x0164ab8c) */
/* WARNING: Removing unreachable block (ram,0x0164ab94) */
/* WARNING: Removing unreachable block (ram,0x0164ab98) */
/* WARNING: Removing unreachable block (ram,0x015088a8) */
/* WARNING: Removing unreachable block (ram,0x015088ac) */
/* WARNING: Removing unreachable block (ram,0x015088b0) */
/* WARNING: Removing unreachable block (ram,0x01508844) */
/* WARNING: Removing unreachable block (ram,0x01508848) */
/* WARNING: Removing unreachable block (ram,0x01508850) */
/* WARNING: Removing unreachable block (ram,0x0150885c) */
/* WARNING: Removing unreachable block (ram,0x01508868) */
/* WARNING: Removing unreachable block (ram,0x01508870) */
/* WARNING: Removing unreachable block (ram,0x01508890) */
/* WARNING: Removing unreachable block (ram,0x01508898) */
/* WARNING: Removing unreachable block (ram,0x0150889c) */
/* WARNING: Removing unreachable block (ram,0x015087f4) */
/* WARNING: Removing unreachable block (ram,0x015088c0) */
/* WARNING: Removing unreachable block (ram,0x015088cc) */
/* WARNING: Removing unreachable block (ram,0x015088d4) */
/* WARNING: Removing unreachable block (ram,0x015088d8) */
/* WARNING: Removing unreachable block (ram,0x015087f8) */
/* WARNING: Removing unreachable block (ram,0x01508800) */
/* WARNING: Removing unreachable block (ram,0x0150880c) */
/* WARNING: Removing unreachable block (ram,0x01508920) */
/* WARNING: Removing unreachable block (ram,0x01508924) */
/* WARNING: Removing unreachable block (ram,0x01508944) */
/* WARNING: Removing unreachable block (ram,0x0150894c) */
/* WARNING: Removing unreachable block (ram,0x01508984) */
/* WARNING: Removing unreachable block (ram,0x01508954) */
/* WARNING: Removing unreachable block (ram,0x01508978) */
/* WARNING: Removing unreachable block (ram,0x01508960) */
/* WARNING: Removing unreachable block (ram,0x01508988) */
/* WARNING: Removing unreachable block (ram,0x015089c8) */
/* WARNING: Removing unreachable block (ram,0x015089dc) */
/* WARNING: Removing unreachable block (ram,0x015089e8) */
/* WARNING: Removing unreachable block (ram,0x015089f0) */
/* WARNING: Removing unreachable block (ram,0x015089f4) */
/* WARNING: Removing unreachable block (ram,0x0150896c) */
/* WARNING: Removing unreachable block (ram,0x0150897c) */
/* WARNING: Removing unreachable block (ram,0x0150881c) */
/* WARNING: Removing unreachable block (ram,0x0150882c) */
/* WARNING: Removing unreachable block (ram,0x01508834) */
/* WARNING: Removing unreachable block (ram,0x01508838) */
/* WARNING: Removing unreachable block (ram,0x01508a94) */
/* WARNING: Removing unreachable block (ram,0x01508ab0) */
/* WARNING: Removing unreachable block (ram,0x0327736c) */
/* WARNING: Removing unreachable block (ram,0x03277390) */
/* WARNING: Removing unreachable block (ram,0x032773a4) */
/* WARNING: Removing unreachable block (ram,0x01508a98) */
/* WARNING: Removing unreachable block (ram,0x01508a9c) */

ulong Atlas_UI_TabController__OnInputFamilyChanged(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar4 = Atlas_UI_TabController__GetSelectedTab();
  if ((bRam0000000003eb4d2c & 1) == 0) {
    func_0x00f78a20(0x3d57998);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4d2c = 1;
  }
  uVar2 = /*Core.Input.InputManager$$get_CurrentInputFamily*/ func_0x01649514(0);
  uVar3 = /*Core.Input.InputManagerExtensions$$IsControllerOrKeyboard*/ func_0x0164bbd0(uVar2,0);
  if (((uVar3 & 1) == 0) && (*(char *)(param_1 + 0x52) == '\0')) {
    return uVar3;
  }
  uVar4 = Atlas_UI_TabController__GetSelectedGameObjectInTab(param_1,uVar4);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003ec021a & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ec021a = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*UnityEngine.Object$$CompareBaseObjects*/ func_0x03248740(uVar4,0);
  return (ulong)(uVar1 ^ 1);
}



// ============================================================
// RVA: 0x1508b78 | Atlas.UI.TabController..ctor
// ============================================================

undefined1  [16] Atlas_UI_TabController___ctor(ulong param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x50) = 1;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1;
  return auVar1;
}



