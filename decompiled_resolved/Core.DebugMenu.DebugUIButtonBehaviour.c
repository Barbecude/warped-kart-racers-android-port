// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.DebugMenu.DebugUIButtonBehaviour

// ============================================================
// RVA: 0x1641b28 | Core.DebugMenu.DebugUIButtonBehaviour.set_Text
// ============================================================

/* WARNING: Possible PIC construction at 0x01641cd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01641dc4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01641cd4) */
/* WARNING: Removing unreachable block (ram,0x01641dc8) */

ulong Core_DebugMenu_DebugUIButtonBehaviour__set_Text
                (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 ******ppppppuVar12;
  undefined *puVar13;
  undefined1 auVar14 [16];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long *plStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  long *plStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 *****pppppuStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 ****ppppuStack_50;
  code *pcStack_48;
  undefined8 *****pppppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb5732 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5732 = 1;
  }
  plVar10 = *(long **)(param_1 + 0x20);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar8 = 0;
  uVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar10,0);
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  plVar5 = *(long **)(param_1 + 0x20);
  if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01641bbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*plVar5 + 0x5e8))(plVar5,param_2,*(undefined8 *)(*plVar5 + 0x5f0));
    return uVar4;
  }
  auVar14 = func_0x00f78af4();
  puStack_38 = &Core_DebugMenu_DebugUIButtonBehaviour__set_Interactable;
  plVar5 = *(long **)(auVar14._0_8_ + 0x18);
  pppppuStack_40 = (undefined8 *****)&stack0xfffffffffffffff0;
  if (plVar5 == (long *)0x0) {
    auVar14 = func_0x00f78af4();
    uVar6 = auVar14._0_8_;
    puVar2 = &uStack_b0;
    pcStack_48 = Core_DebugMenu_DebugMenu__ConfigureButton;
    unaff_x23 = 0x3eb5000;
    ppppuStack_50 = &pppppuStack_40;
    if ((bRam0000000003eb5715 & 1) == 0) {
      ppppuStack_50 = &pppppuStack_40;
      func_0x00f78a20(0x3d21140);
      bRam0000000003eb5715 = 1;
    }
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    plStack_98 = (long *)0x0;
    uStack_a0 = 0;
    uVar9 = 2;
    uVar4 = Core_DebugMenu_DebugMenu__TryGetElementCopy(uVar6,auVar14._8_8_,2,&uStack_b0);
    if ((uVar4 & 1) == 0) {
      uVar9 = 3;
      uVar4 = Core_DebugMenu_DebugMenu__TryGetElementCopy(uVar6,auVar14._8_8_,3,&uStack_b0);
      if ((int)uVar4 == 0) {
        return uVar4;
      }
    }
    plVar1 = plStack_98;
    if (plStack_98 != (long *)0x0) {
      if ((*(byte *)(*plStack_98 + 300) < *(byte *)(/*Core.DebugMenu.DebugUIButtonBehaviour_TypeInfo*/ lRam0000000003d21140 + 300)) ||
         (*(long *)(*(long *)(*plStack_98 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIButtonBehaviour_TypeInfo*/ lRam0000000003d21140 + 300) * 8
                   + -8) != /*Core.DebugMenu.DebugUIButtonBehaviour_TypeInfo*/ lRam0000000003d21140)) {
        func_0x00f78e5c(plStack_98);
      }
      else {
        Core_DebugMenu_DebugUIButtonBehaviour__set_Text(plStack_98,lVar8);
        plVar5 = (long *)plVar1[3];
        if (plVar5 != (long *)0x0) {
          puVar13 = (undefined *)0x1641cd4;
          uVar9 = param_4;
          param_1 = lVar8;
          plVar10 = plVar1;
          uVar11 = uVar6;
          ppppppuVar12 = (undefined8 ******)&ppppuStack_50;
          goto code_r0x032e3be8;
        }
      }
    }
    auVar14 = func_0x00f78af4();
    param_1 = auVar14._8_8_;
    plVar10 = auVar14._0_8_;
    puVar2 = &uStack_110;
    plStack_d8 = plVar1;
    pcStack_b8 = Core_DebugMenu_DebugMenu__SetButtonInteractable;
    ppppppuVar12 = &pppppuStack_c0;
    uVar11 = 0x3eb5000;
    uStack_e0 = uVar6;
    lStack_d0 = lVar8;
    uStack_c8 = param_4;
    pppppuStack_c0 = &ppppuStack_50;
    if ((bRam0000000003eb5716 & 1) == 0) {
      func_0x00f78a20(0x3d21140);
      bRam0000000003eb5716 = 1;
    }
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    plStack_f8 = (long *)0x0;
    uStack_100 = 0;
    uVar4 = Core_DebugMenu_DebugMenu__TryGetElementCopy(plVar10,param_1,2,&uStack_110);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    if (plStack_f8 == (long *)0x0) {
      return 0;
    }
    if (*(byte *)(*plStack_f8 + 300) < *(byte *)(/*Core.DebugMenu.DebugUIButtonBehaviour_TypeInfo*/ lRam0000000003d21140 + 300)) {
      return 0;
    }
    if (*(long *)(*(long *)(*plStack_f8 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIButtonBehaviour_TypeInfo*/ lRam0000000003d21140 + 300) * 8 +
                 -8) != /*Core.DebugMenu.DebugUIButtonBehaviour_TypeInfo*/ lRam0000000003d21140) {
      return 0;
    }
    plVar5 = (long *)plStack_f8[3];
    if (plVar5 == (long *)0x0) {
      uVar4 = func_0x00f78af4();
      return uVar4;
    }
    puVar13 = &UNK_01641dc8;
    param_4 = uVar9;
  }
  else {
    puVar2 = (undefined8 *)&stack0xffffffffffffffd0;
    puVar13 = &Core_DebugMenu_DebugUIButtonBehaviour__set_Interactable;
    uVar9 = auVar14._8_8_;
    param_4 = param_2;
    uVar11 = 0x3d23990;
    ppppppuVar12 = (undefined8 ******)&stack0xfffffffffffffff0;
  }
code_r0x032e3be8:
  *(undefined8 *)((long)puVar2 + -0x40) = unaff_x24;
  *(undefined8 *)((long)puVar2 + -0x38) = unaff_x23;
  *(undefined8 *)((long)puVar2 + -0x30) = uVar11;
  *(long **)((long)puVar2 + -0x28) = plVar10;
  *(long *)((long)puVar2 + -0x20) = param_1;
  *(undefined8 *)((long)puVar2 + -0x18) = param_4;
  *(undefined8 *******)((long)puVar2 + -0x10) = ppppppuVar12;
  *(undefined **)((long)puVar2 + -8) = puVar13;
  if ((bRam0000000003ec2dc6 & 1) == 0) {
    func_0x00f78a20(0x3d216c0,uVar9,0);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d5ce68);
    bRam0000000003ec2dc6 = 1;
  }
  uVar4 = /*UnityEngine.UI.SetPropertyUtility$$SetStruct<bool>*/ func_0x018dfa24(plVar5 + 0x1a,uVar9,uRam0000000003d5ce68);
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  if ((char)plVar5[0x1a] == '\0') {
    if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar6 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar6,0,0);
    if (iVar3 != 0) {
      if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar8 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
      if (lVar8 == 0) {
code_r0x032e3d84:
        lVar8 = func_0x00f78af4();
        return (ulong)*(byte *)(lVar8 + 0xe8);
      }
      uVar9 = *(undefined8 *)(lVar8 + 0x38);
      uVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(plVar5,0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar9,uVar6,0);
      if (iVar3 != 0) {
        if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar8 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
        if (lVar8 == 0) goto code_r0x032e3d84;
        /*UnityEngine.EventSystems.EventSystem$$SetSelectedGameObject*/ func_0x032b7cb0(lVar8,0,0);
      }
    }
  }
  *(undefined8 *)((long)puVar2 + -0x20) = *(undefined8 *)((long)puVar2 + -0x20);
  *(undefined8 *)((long)puVar2 + -0x18) = *(undefined8 *)((long)puVar2 + -0x18);
  *(undefined8 *)((long)puVar2 + -0x10) = *(undefined8 *)((long)puVar2 + -0x10);
  *(undefined8 *)((long)puVar2 + -8) = *(undefined8 *)((long)puVar2 + -8);
  iVar3 = (**(code **)(*plVar5 + 0x2b8))(plVar5,*(undefined8 *)(*plVar5 + 0x2c0));
  if (iVar3 == 0) {
    uVar7 = 4;
  }
  else if (*(char *)((long)plVar5 + 0xe9) == '\0') {
    if (*(char *)((long)plVar5 + 0xea) == '\0') {
      uVar7 = (undefined1)plVar5[0x1d];
    }
    else {
      uVar7 = 3;
    }
  }
  else {
    uVar7 = 2;
  }
                    /* WARNING: Could not recover jumptable at 0x032e38f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*plVar5 + 0x2d8))(plVar5,uVar7,0,*(undefined8 *)(*plVar5 + 0x2e0));
  return uVar4;
}



// ============================================================
// RVA: 0x1641bd4 | Core.DebugMenu.DebugUIButtonBehaviour.set_Interactable
// ============================================================

/* WARNING: Possible PIC construction at 0x01641cd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01641dc4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01641cd4) */
/* WARNING: Removing unreachable block (ram,0x01641dc8) */
/* WARNING: Type propagation algorithm not settling */

ulong Core_DebugMenu_DebugUIButtonBehaviour__set_Interactable
                (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *******pppppppuVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 uVar8;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar9;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 *******unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar10 [16];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *******pppppppuStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 ******ppppppuStack_20;
  code *pcStack_18;
  
  auVar10._8_8_ = unaff_x20;
  auVar10._0_8_ = unaff_x21;
  plVar4 = *(long **)(param_1 + 0x18);
  if (plVar4 == (long *)0x0) {
    auVar10 = func_0x00f78af4();
    uVar6 = auVar10._0_8_;
    pcStack_18 = Core_DebugMenu_DebugMenu__ConfigureButton;
    pppppppuVar1 = &ppppppuStack_20;
    unaff_x23 = 0x3eb5000;
    ppppppuStack_20 = (undefined8 ******)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb5715 & 1) == 0) {
      ppppppuStack_20 = (undefined8 ******)&stack0xfffffffffffffff0;
      func_0x00f78a20(0x3d21140);
      bRam0000000003eb5715 = 1;
    }
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    plStack_68 = (long *)0x0;
    uStack_70 = 0;
    param_2 = 2;
    uVar5 = Core_DebugMenu_DebugMenu__TryGetElementCopy(uVar6,auVar10._8_8_,2,&uStack_80);
    if ((uVar5 & 1) == 0) {
      param_2 = 3;
      uVar5 = Core_DebugMenu_DebugMenu__TryGetElementCopy(uVar6,auVar10._8_8_,3,&uStack_80);
      if ((int)uVar5 == 0) {
        return uVar5;
      }
    }
    plVar2 = plStack_68;
    auVar10._8_8_ = param_3;
    auVar10._0_8_ = plStack_68;
    if (plStack_68 != (long *)0x0) {
      if ((*(byte *)(*plStack_68 + 300) < *(byte *)(/*Core.DebugMenu.DebugUIButtonBehaviour_TypeInfo*/ lRam0000000003d21140 + 300)) ||
         (*(long *)(*(long *)(*plStack_68 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIButtonBehaviour_TypeInfo*/ lRam0000000003d21140 + 300) * 8
                   + -8) != /*Core.DebugMenu.DebugUIButtonBehaviour_TypeInfo*/ lRam0000000003d21140)) {
        func_0x00f78e5c(plStack_68);
      }
      else {
        Core_DebugMenu_DebugUIButtonBehaviour__set_Text(plStack_68,param_3);
        plVar4 = (long *)plVar2[3];
        if (plVar4 != (long *)0x0) {
          unaff_x30 = (undefined *)0x1641cd4;
          register0x00000008 = (BADSPACEBASE *)&uStack_80;
          param_2 = param_4;
          unaff_x19 = param_4;
          unaff_x22 = uVar6;
          unaff_x29 = pppppppuVar1;
          goto code_r0x032e3be8;
        }
      }
    }
    auVar10 = func_0x00f78af4();
    plStack_a8 = plVar2;
    pcStack_88 = Core_DebugMenu_DebugMenu__SetButtonInteractable;
    unaff_x29 = &pppppppuStack_90;
    unaff_x22 = 0x3eb5000;
    uStack_b0 = uVar6;
    uStack_a0 = param_3;
    uStack_98 = param_4;
    pppppppuStack_90 = pppppppuVar1;
    if ((bRam0000000003eb5716 & 1) == 0) {
      func_0x00f78a20(0x3d21140);
      bRam0000000003eb5716 = 1;
    }
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    plStack_c8 = (long *)0x0;
    uStack_d0 = 0;
    uVar5 = Core_DebugMenu_DebugMenu__TryGetElementCopy(auVar10._0_8_,auVar10._8_8_,2,&uStack_e0);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
    if (plStack_c8 == (long *)0x0) {
      return 0;
    }
    if (*(byte *)(*plStack_c8 + 300) < *(byte *)(/*Core.DebugMenu.DebugUIButtonBehaviour_TypeInfo*/ lRam0000000003d21140 + 300)) {
      return 0;
    }
    if (*(long *)(*(long *)(*plStack_c8 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIButtonBehaviour_TypeInfo*/ lRam0000000003d21140 + 300) * 8 +
                 -8) != /*Core.DebugMenu.DebugUIButtonBehaviour_TypeInfo*/ lRam0000000003d21140) {
      return 0;
    }
    plVar4 = (long *)plStack_c8[3];
    if (plVar4 == (long *)0x0) {
      uVar5 = func_0x00f78af4();
      return uVar5;
    }
    unaff_x30 = &UNK_01641dc8;
    register0x00000008 = (BADSPACEBASE *)&uStack_e0;
    unaff_x19 = param_2;
  }
code_r0x032e3be8:
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined1 (*) [16])((long)register0x00000008 + -0x28) = auVar10;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 ********)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if ((bRam0000000003ec2dc6 & 1) == 0) {
    func_0x00f78a20(0x3d216c0,param_2,0);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d5ce68);
    bRam0000000003ec2dc6 = 1;
  }
  uVar5 = /*UnityEngine.UI.SetPropertyUtility$$SetStruct<bool>*/ func_0x018dfa24(plVar4 + 0x1a,param_2,uRam0000000003d5ce68);
  if ((int)uVar5 == 0) {
    return uVar5;
  }
  if ((char)plVar4[0x1a] == '\0') {
    if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar6 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar6,0,0);
    if (iVar3 != 0) {
      if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar7 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
      if (lVar7 == 0) {
code_r0x032e3d84:
        lVar7 = func_0x00f78af4();
        return (ulong)*(byte *)(lVar7 + 0xe8);
      }
      uVar9 = *(undefined8 *)(lVar7 + 0x38);
      uVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(plVar4,0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar9,uVar6,0);
      if (iVar3 != 0) {
        if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar7 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
        if (lVar7 == 0) goto code_r0x032e3d84;
        /*UnityEngine.EventSystems.EventSystem$$SetSelectedGameObject*/ func_0x032b7cb0(lVar7,0,0);
      }
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) =
       *(undefined8 *)((long)register0x00000008 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x18) =
       *(undefined8 *)((long)register0x00000008 + -0x18);
  *(undefined8 *)((long)register0x00000008 + -0x10) =
       *(undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  iVar3 = (**(code **)(*plVar4 + 0x2b8))(plVar4,*(undefined8 *)(*plVar4 + 0x2c0));
  if (iVar3 == 0) {
    uVar8 = 4;
  }
  else if (*(char *)((long)plVar4 + 0xe9) == '\0') {
    if (*(char *)((long)plVar4 + 0xea) == '\0') {
      uVar8 = (undefined1)plVar4[0x1d];
    }
    else {
      uVar8 = 3;
    }
  }
  else {
    uVar8 = 2;
  }
                    /* WARNING: Could not recover jumptable at 0x032e38f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (**(code **)(*plVar4 + 0x2d8))(plVar4,uVar8,0,*(undefined8 *)(*plVar4 + 0x2e0));
  return uVar5;
}



// ============================================================
// RVA: 0x1643a94 | Core.DebugMenu.DebugUIButtonBehaviour.get_Button
// ============================================================

undefined8 Core_DebugMenu_DebugUIButtonBehaviour__get_Button(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1643a9c | Core.DebugMenu.DebugUIButtonBehaviour.get_ShowPanelId
// ============================================================

undefined4 Core_DebugMenu_DebugUIButtonBehaviour__get_ShowPanelId(long param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}



// ============================================================
// RVA: 0x1643aa4 | Core.DebugMenu.DebugUIButtonBehaviour.set_ShowPanelId
// ============================================================

void Core_DebugMenu_DebugUIButtonBehaviour__set_ShowPanelId(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}



// ============================================================
// RVA: 0x1643aac | Core.DebugMenu.DebugUIButtonBehaviour.get_PushPanelId
// ============================================================

undefined4 Core_DebugMenu_DebugUIButtonBehaviour__get_PushPanelId(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x1643ab4 | Core.DebugMenu.DebugUIButtonBehaviour.set_PushPanelId
// ============================================================

void Core_DebugMenu_DebugUIButtonBehaviour__set_PushPanelId(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return;
}



// ============================================================
// RVA: 0x1643abc | Core.DebugMenu.DebugUIButtonBehaviour..ctor
// ============================================================

long Core_DebugMenu_DebugUIButtonBehaviour___ctor(long param_1)

{
  *(undefined8 *)(param_1 + 0x28) = 0xffffffffffffffff;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return param_1;
}



