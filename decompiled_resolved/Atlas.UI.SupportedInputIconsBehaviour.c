// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.SupportedInputIconsBehaviour

// ============================================================
// RVA: 0x15074ec | Atlas.UI.SupportedInputIconsBehaviour.Init
// ============================================================

/* WARNING: Possible PIC construction at 0x015075b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015075f8: Changing call to branch */

undefined1  [16] Atlas_UI_SupportedInputIconsBehaviour__Init(long param_1)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar5;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar6 [16];
  
  /*Atlas.UI.SupportedInputIconsBehaviour$$SetRequirementsText*/ func_0x01507510();
  puVar1 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4d22 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4d22 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar2 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar5,0);
  if (iVar2 == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar2 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar5,0);
    if (iVar2 == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      auVar6 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar5,0);
      if (auVar6._0_4_ == 0) {
        return auVar6;
      }
      lVar3 = *(long *)(param_1 + 0x30);
      if (lVar3 == 0) goto code_r0x01507658;
      uVar4 = 0;
    }
    else {
      lVar3 = *(long *)(param_1 + 0x28);
      if (lVar3 == 0) {
code_r0x01507658:
        auVar6._0_8_ = func_0x00f78af4();
        if ((bRam0000000003ebf1b8 & 1) == 0) {
          func_0x00f78a20(0x3d23990,0);
          bRam0000000003ebf1b8 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        auVar6._8_8_ = 0;
        return auVar6;
      }
      uVar4 = 1;
      unaff_x30 = &UNK_015075fc;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
      unaff_x19 = param_1;
      unaff_x20 = uVar5;
      unaff_x21 = 0x3d23990;
      unaff_x29 = puVar1;
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 == 0) goto code_r0x01507658;
    uVar4 = 1;
    unaff_x30 = &UNK_015075bc;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x19 = param_1;
    unaff_x20 = uVar5;
    unaff_x21 = 0x3d23990;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if (pcRam0000000003ebf4c0 == (code *)0x0) {
    pcRam0000000003ebf4c0 =
         (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
  }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar6 = (*pcRam0000000003ebf4c0)(lVar3,uVar4);
  return auVar6;
}



// ============================================================
// RVA: 0x1507510 | Atlas.UI.SupportedInputIconsBehaviour.SetRequirementsText
// ============================================================

/* WARNING: Possible PIC construction at 0x015075b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015075f8: Changing call to branch */

undefined1  [16] Atlas_UI_SupportedInputIconsBehaviour__SetRequirementsText(long param_1)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar6;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 ***unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar7 [16];
  undefined8 **ppuStack_20;
  undefined *puStack_18;
  
  if ((*(long *)(param_1 + 0x38) == 0) ||
     (lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0x38),0), lVar3 == 0)) {
    lVar4 = func_0x00f78af4();
    puVar1 = &stack0xffffffffffffffc0;
    puStack_18 = &Atlas_UI_SupportedInputIconsBehaviour__ShowAppropriateIcons;
    unaff_x29 = &ppuStack_20;
    ppuStack_20 = (undefined8 **)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb4d22 & 1) == 0) {
      ppuStack_20 = (undefined8 **)&stack0xfffffffffffffff0;
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4d22 = 1;
    }
    uVar6 = *(undefined8 *)(lVar4 + 0x20);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar2 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar6,0);
    if (iVar2 == 0) {
      uVar6 = *(undefined8 *)(lVar4 + 0x28);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar2 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar6,0);
      if (iVar2 == 0) {
        uVar6 = *(undefined8 *)(lVar4 + 0x30);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        auVar7 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar6,0);
        if (auVar7._0_4_ == 0) {
          return auVar7;
        }
        lVar3 = *(long *)(lVar4 + 0x30);
        if (lVar3 == 0) goto code_r0x01507658;
        uVar5 = 0;
        puVar1 = &stack0xfffffffffffffff0;
        unaff_x29 = (undefined8 ***)ppuStack_20;
        unaff_x30 = puStack_18;
      }
      else {
        lVar3 = *(long *)(lVar4 + 0x28);
        if (lVar3 == 0) {
code_r0x01507658:
          auVar7._0_8_ = func_0x00f78af4();
          if ((bRam0000000003ebf1b8 & 1) == 0) {
            func_0x00f78a20(0x3d23990,0);
            bRam0000000003ebf1b8 = 1;
          }
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          auVar7._8_8_ = 0;
          return auVar7;
        }
        uVar5 = 1;
        unaff_x30 = &UNK_015075fc;
        unaff_x19 = lVar4;
        unaff_x20 = uVar6;
        unaff_x21 = 0x3d23990;
      }
    }
    else {
      lVar3 = *(long *)(lVar4 + 0x20);
      if (lVar3 == 0) goto code_r0x01507658;
      uVar5 = 1;
      unaff_x30 = &UNK_015075bc;
      puVar1 = &stack0xffffffffffffffc0;
      unaff_x19 = lVar4;
      unaff_x20 = uVar6;
      unaff_x21 = 0x3d23990;
    }
  }
  else {
    uVar5 = 0;
    puVar1 = (undefined1 *)register0x00000008;
  }
  *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
  *(long *)(puVar1 + -0x18) = unaff_x19;
  *(undefined8 ****)(puVar1 + -0x10) = unaff_x29;
  *(undefined **)(puVar1 + -8) = unaff_x30;
  if (pcRam0000000003ebf4c0 == (code *)0x0) {
    pcRam0000000003ebf4c0 =
         (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
  }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar7 = (*pcRam0000000003ebf4c0)(lVar3,uVar5);
  return auVar7;
}



// ============================================================
// RVA: 0x1507540 | Atlas.UI.SupportedInputIconsBehaviour.ShowAppropriateIcons
// ============================================================

/* WARNING: Possible PIC construction at 0x015075b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015075f8: Changing call to branch */

undefined1  [16] Atlas_UI_SupportedInputIconsBehaviour__ShowAppropriateIcons(long param_1)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar5;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar6 [16];
  
  puVar1 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4d22 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4d22 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar2 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar5,0);
  if (iVar2 == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar2 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar5,0);
    if (iVar2 == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      auVar6 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar5,0);
      if (auVar6._0_4_ == 0) {
        return auVar6;
      }
      lVar3 = *(long *)(param_1 + 0x30);
      if (lVar3 == 0) goto LAB_01507658;
      uVar4 = 0;
    }
    else {
      lVar3 = *(long *)(param_1 + 0x28);
      if (lVar3 == 0) {
LAB_01507658:
        auVar6._0_8_ = func_0x00f78af4();
        if ((bRam0000000003ebf1b8 & 1) == 0) {
          func_0x00f78a20(0x3d23990,0);
          bRam0000000003ebf1b8 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        auVar6._8_8_ = 0;
        return auVar6;
      }
      uVar4 = 1;
      unaff_x30 = 0x15075fc;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
      unaff_x19 = param_1;
      unaff_x20 = uVar5;
      unaff_x21 = 0x3d23990;
      unaff_x29 = puVar1;
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 == 0) goto LAB_01507658;
    uVar4 = 1;
    unaff_x30 = 0x15075bc;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x19 = param_1;
    unaff_x20 = uVar5;
    unaff_x21 = 0x3d23990;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (pcRam0000000003ebf4c0 == (code *)0x0) {
    pcRam0000000003ebf4c0 =
         (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
  }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar6 = (*pcRam0000000003ebf4c0)(lVar3,uVar4);
  return auVar6;
}



// ============================================================
// RVA: 0x150765c | Atlas.UI.SupportedInputIconsBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_SupportedInputIconsBehaviour___ctor(ulong param_1)

{
  undefined1 auVar1 [16];
  
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



