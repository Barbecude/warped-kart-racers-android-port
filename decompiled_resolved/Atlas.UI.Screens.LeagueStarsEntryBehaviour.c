// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.LeagueStarsEntryBehaviour

// ============================================================
// RVA: 0x1481bc0 | Atlas.UI.Screens.LeagueStarsEntryBehaviour.SetData
// ============================================================

/* WARNING: Possible PIC construction at 0x01514864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01515350: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01515354) */
/* WARNING: Removing unreachable block (ram,0x03247e70) */
/* WARNING: Removing unreachable block (ram,0x03247ef0) */
/* WARNING: Removing unreachable block (ram,0x03247e84) */
/* WARNING: Removing unreachable block (ram,0x03247e98) */
/* WARNING: Removing unreachable block (ram,0x03247eac) */
/* WARNING: Removing unreachable block (ram,0x03247f24) */
/* WARNING: Removing unreachable block (ram,0x03247f54) */
/* WARNING: Removing unreachable block (ram,0x03247f90) */
/* WARNING: Removing unreachable block (ram,0x03247fa4) */
/* WARNING: Removing unreachable block (ram,0x03247eb8) */
/* WARNING: Removing unreachable block (ram,0x03247ec4) */
/* WARNING: Removing unreachable block (ram,0x03247ed8) */

ulong Atlas_UI_Screens_LeagueStarsEntryBehaviour__SetData
                (long param_1,undefined8 param_2,undefined8 param_3)

{
  ushort uVar1;
  undefined8 ******ppppppuVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 ******ppppppuVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *****pppppuVar14;
  undefined8 *****extraout_x1;
  undefined8 uVar16;
  undefined8 *puVar17;
  uint extraout_w8;
  uint uVar18;
  ulong uVar19;
  undefined8 ****extraout_x8;
  undefined8 ****ppppuVar20;
  long extraout_x9;
  int *piVar21;
  ulong unaff_x21;
  undefined8 ******unaff_x22;
  long lVar22;
  ulong unaff_x23;
  code *pcVar23;
  long lVar24;
  undefined8 unaff_x24;
  undefined1 *puVar25;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  long *******ppppppplVar26;
  undefined *puVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined8 *****pppppuStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  long *plStack_118;
  long ******pppppplStack_110;
  undefined *puStack_108;
  undefined8 ******ppppppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_b8;
  undefined8 ******ppppppuStack_a0;
  undefined *puStack_98;
  undefined8 *****pppppuStack_90;
  undefined *puStack_88;
  undefined8 *****pppppuStack_80;
  ulong uStack_78;
  long *plVar15;
  
  plVar6 = *(long **)(param_1 + 0x18);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x558))(plVar6,param_2,*(undefined8 *)(*plVar6 + 0x560));
    plVar6 = *(long **)(param_1 + 0x20);
    if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01481c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (**(code **)(*plVar6 + 0x558))(plVar6,param_3,*(undefined8 *)(*plVar6 + 0x560));
      return uVar7;
    }
  }
  lVar8 = func_0x00f78af4();
  /*ModalBehaviour$$Hide*/ func_0x014940f0(lVar8,0);
  if (*(long *)(lVar8 + 0x70) == 0) {
LAB_01481c58:
    uVar7 = func_0x00f78af4();
    if ((bRam0000000003eb4912 & 1) == 0) {
      func_0x00f78a20(0x3d234d0);
      bRam0000000003eb4912 = 1;
    }
    if (((*(ushort *)(/*ModalBehaviour_TypeInfo*/ lRam0000000003d234d0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*ModalBehaviour_TypeInfo*/ lRam0000000003d234d0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return uVar7;
  }
  /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(*(long *)(lVar8 + 0x70),0,0);
  uVar7 = *(ulong *)(lVar8 + 0x70);
  if (uVar7 == 0) goto LAB_01481c58;
  if ((bRam0000000003eb4d9b & 1) == 0) {
    func_0x00f78a20(0x3d1fa78,0);
    bRam0000000003eb4d9b = 1;
  }
  plVar6 = *(long **)(uVar7 + 0x148);
  ppppppuVar2 = (undefined8 ******)0x3eb4000;
  if (plVar6 == (long *)0x0) {
code_r0x01514e70:
    plVar6 = *(long **)(uVar7 + 0x150);
    if (plVar6 != (long *)0x0) {
      ppppppuVar9 = (undefined8 ******)
                    (**(code **)(*plVar6 + 0x1d8))(plVar6,*(undefined8 *)(*plVar6 + 0x1e0));
      if (ppppppuVar9 == (undefined8 ******)0x0) goto code_r0x01514ff8;
      ppppppuVar2 = ppppppuVar9;
      if (0 < (int)ppppppuVar9[3]) {
        unaff_x21 = 0;
        uVar19 = (ulong)ppppppuVar9[3] & 0xffffffff;
        unaff_x22 = ppppppuVar9 + 4;
        unaff_x23 = 0x3d1fa78;
        do {
          if (uVar19 <= unaff_x21) goto code_r0x01514fe0;
          pppppuVar14 = unaff_x22[unaff_x21];
          if ((pppppuVar14 != (undefined8 *****)0x0) &&
             (ppppuVar20 = /*System.Action_TypeInfo*/ ppppuRam0000000003d1fa78, *pppppuVar14 != /*System.Action_TypeInfo*/ ppppuRam0000000003d1fa78))
          goto code_r0x01514fec;
          /*Atlas.UI.UIAtlasButton$$remove_Deselected*/ func_0x0151438c(uVar7);
          unaff_x21 = unaff_x21 + 1;
          uVar19 = (ulong)*(uint *)(ppppppuVar9 + 3);
        } while ((long)unaff_x21 < (long)(int)*(uint *)(ppppppuVar9 + 3));
      }
    }
    plVar6 = *(long **)(uVar7 + 0x158);
    if (plVar6 != (long *)0x0) {
      ppppppuVar9 = (undefined8 ******)
                    (**(code **)(*plVar6 + 0x1d8))(plVar6,*(undefined8 *)(*plVar6 + 0x1e0));
      if (ppppppuVar9 == (undefined8 ******)0x0) goto code_r0x01514ff8;
      ppppppuVar2 = ppppppuVar9;
      if (0 < (int)ppppppuVar9[3]) {
        unaff_x21 = 0;
        uVar19 = (ulong)ppppppuVar9[3] & 0xffffffff;
        unaff_x22 = ppppppuVar9 + 4;
        unaff_x23 = 0x3d1fa78;
        do {
          if (uVar19 <= unaff_x21) goto code_r0x01514fe0;
          pppppuVar14 = unaff_x22[unaff_x21];
          if ((pppppuVar14 != (undefined8 *****)0x0) &&
             (ppppuVar20 = /*System.Action_TypeInfo*/ ppppuRam0000000003d1fa78, *pppppuVar14 != /*System.Action_TypeInfo*/ ppppuRam0000000003d1fa78))
          goto code_r0x01514fec;
          /*Atlas.UI.UIAtlasButton$$remove_Pressed*/ func_0x015144d4(uVar7);
          unaff_x21 = unaff_x21 + 1;
          uVar19 = (ulong)*(uint *)(ppppppuVar9 + 3);
        } while ((long)unaff_x21 < (long)(int)*(uint *)(ppppppuVar9 + 3));
      }
    }
    plVar6 = *(long **)(uVar7 + 0x160);
    if (plVar6 == (long *)0x0) {
      return 0;
    }
    ppppppuVar9 = (undefined8 ******)
                  (**(code **)(*plVar6 + 0x1d8))(plVar6,*(undefined8 *)(*plVar6 + 0x1e0));
    if (ppppppuVar9 != (undefined8 ******)0x0) {
      if ((int)ppppppuVar9[3] < 1) {
        return (ulong)ppppppuVar9;
      }
      unaff_x21 = 0;
      uVar19 = (ulong)ppppppuVar9[3] & 0xffffffff;
      unaff_x22 = ppppppuVar9 + 4;
      while (unaff_x21 < uVar19) {
        pppppuVar14 = unaff_x22[unaff_x21];
        if ((pppppuVar14 != (undefined8 *****)0x0) &&
           (ppppuVar20 = /*System.Action_TypeInfo*/ ppppuRam0000000003d1fa78, *pppppuVar14 != /*System.Action_TypeInfo*/ ppppuRam0000000003d1fa78))
        goto code_r0x01514fec;
        uVar10 = /*Atlas.UI.UIAtlasButton$$remove_SelectedOrPressed*/ func_0x0151461c(uVar7);
        unaff_x21 = unaff_x21 + 1;
        uVar19 = (ulong)*(uint *)(ppppppuVar9 + 3);
        if ((long)(int)*(uint *)(ppppppuVar9 + 3) <= (long)unaff_x21) {
          return uVar10;
        }
      }
code_r0x01514fe0:
      uVar12 = func_0x00f78b24();
      func_0x00f78ac0(uVar12,0);
      pppppuVar14 = extraout_x1;
      ppppuVar20 = extraout_x8;
code_r0x01514fec:
      unaff_x23 = 0x3d1fa78;
      func_0x00f78e5c(pppppuVar14,ppppuVar20);
      ppppppuVar2 = ppppppuVar9;
    }
  }
  else {
    ppppppuVar9 = (undefined8 ******)
                  (**(code **)(*plVar6 + 0x1d8))(plVar6,*(undefined8 *)(*plVar6 + 0x1e0));
    if (ppppppuVar9 != (undefined8 ******)0x0) {
      ppppppuVar2 = ppppppuVar9;
      if (0 < (int)ppppppuVar9[3]) {
        unaff_x21 = 0;
        uVar19 = (ulong)ppppppuVar9[3] & 0xffffffff;
        unaff_x22 = ppppppuVar9 + 4;
        unaff_x23 = 0x3d1fa78;
        do {
          if (uVar19 <= unaff_x21) goto code_r0x01514fe0;
          pppppuVar14 = unaff_x22[unaff_x21];
          if ((pppppuVar14 != (undefined8 *****)0x0) &&
             (ppppuVar20 = /*System.Action_TypeInfo*/ ppppuRam0000000003d1fa78, *pppppuVar14 != /*System.Action_TypeInfo*/ ppppuRam0000000003d1fa78))
          goto code_r0x01514fec;
          /*Atlas.UI.UIAtlasButton$$remove_Selected*/ func_0x01514244(uVar7);
          unaff_x21 = unaff_x21 + 1;
          uVar19 = (ulong)*(uint *)(ppppppuVar9 + 3);
        } while ((long)unaff_x21 < (long)(int)*(uint *)(ppppppuVar9 + 3));
      }
      goto code_r0x01514e70;
    }
  }
code_r0x01514ff8:
  auVar28 = func_0x00f78af4();
  ppppppuVar9 = auVar28._8_8_;
  pppppuStack_90 = unaff_x22;
  puStack_88 = (undefined *)unaff_x21;
  pppppuStack_80 = ppppppuVar2;
  uStack_78 = uVar7;
  if ((bRam0000000003eb4da9 & 1) == 0) {
    func_0x00f78a20(0x3d3c5b8);
    func_0x00f78a20(0x3d3c5c0);
    bRam0000000003eb4da9 = 1;
  }
  lVar8 = *(long *)(auVar28._0_8_ + 0x40);
  if (lVar8 != 0) {
    uVar7 = /*System.Collections.Generic.List<XmlQualifiedName>$$Contains*/ func_0x02427438(lVar8,ppppppuVar9,uRam0000000003d3c5c0);
    if ((uVar7 & 1) != 0) {
      return uVar7;
    }
    uVar7 = *(ulong *)(auVar28._0_8_ + 0x40);
    if (uVar7 != 0) {
      lVar8 = *(long *)(uVar7 + 0x10);
      puVar17 = puRam0000000003d3c5b8;
      uVar19 = uStack_78;
      ppppppuVar2 = (undefined8 ******)pppppuStack_80;
      if (lVar8 == 0) {
code_r0x0242716c:
        ppppppuVar9 = ppppppuVar2;
        uVar7 = uVar19;
        uVar10 = func_0x00f78af4();
        lVar8 = extraout_x9;
        uVar18 = extraout_w8;
code_r0x02427170:
        *(uint *)(uVar7 + 0x18) = uVar18 + 1;
      }
      else {
        uVar18 = *(uint *)(uVar7 + 0x18);
        uVar10 = uVar7;
        if (uVar18 != *(uint *)(lVar8 + 0x18)) goto code_r0x02427170;
        puVar17 = *(undefined8 **)(*(long *)(puRam0000000003d3c5b8[3] + 0xc0) + 0x60);
        uVar10 = (*(code *)*puVar17)(uVar7,uVar18 + 1);
        lVar8 = *(long *)(uVar7 + 0x10);
        uVar18 = *(uint *)(uVar7 + 0x18);
        *(uint *)(uVar7 + 0x18) = uVar18 + 1;
        uVar19 = uVar7;
        ppppppuVar2 = ppppppuVar9;
        if (lVar8 == 0) goto code_r0x0242716c;
      }
      if (uVar18 < *(uint *)(lVar8 + 0x18)) {
        *(undefined8 *******)(lVar8 + (long)(int)uVar18 * 8 + 0x20) = ppppppuVar9;
        *(int *)(uVar7 + 0x1c) = *(int *)(uVar7 + 0x1c) + 1;
        return uVar10;
      }
      uVar12 = func_0x00f78b24();
      auVar28 = func_0x00f78ac0(uVar12,0);
      lVar24 = auVar28._8_8_;
      lVar8 = auVar28._0_8_;
      puStack_88 = &System_Collections_Generic_List_object___System_Collections_IList_Add;
      ppppppuStack_a0 = ppppppuVar9;
      puStack_98 = (undefined *)uVar7;
      pppppuStack_90 = (undefined8 *****)&stack0xffffffffffffff90;
      (*(code *)**(undefined8 **)(*(long *)(puVar17[3] + 0xc0) + 0x48))(lVar24,0x14);
      if (lVar8 == 0) {
        func_0x00f78af4();
code_r0x0242734c:
                    /* WARNING: Does not return */
        pcVar23 = (code *)SoftwareBreakpoint(1,0x2427350);
        (*pcVar23)();
      }
      pcVar23 = (code *)**(undefined8 **)(*(long *)(puVar17[3] + 0xc0) + 0x28);
      lVar22 = *(long *)(*(long *)(puVar17[3] + 0xc0) + 0x38);
      if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar22);
      }
      if (lVar24 == 0) {
        lVar13 = 0;
      }
      else {
        lVar13 = func_0x00f78adc(lVar24,lVar22);
        if (lVar13 == 0) {
          func_0x00f78e5c(lVar24,lVar22);
          goto code_r0x0242734c;
        }
      }
      (*pcVar23)(lVar8,lVar13,*(undefined8 *)(*(long *)(puVar17[3] + 0xc0) + 0x28));
      iVar4 = (*(code *)**(undefined8 **)(*(long *)(puVar17[3] + 0xc0) + 0x68))(lVar8);
      return (ulong)(iVar4 - 1);
    }
  }
  auVar29 = func_0x00f78af4();
  lVar24 = auVar29._8_8_;
  lVar8 = auVar29._0_8_;
  uStack_b8 = 0x3eb4000;
  puStack_98 = &Atlas_UI_UIAtlasButton__OnPointerClick;
  ppppppuStack_a0 = (undefined8 ******)&stack0xffffffffffffff90;
  if ((bRam0000000003eb4d9d & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4d9d = 1;
  }
  uVar7 = /*Core.Input.InputManager$$IsScreenLayerInputActive*/ func_0x01648f2c(*(undefined4 *)(lVar8 + 0x16c),0);
  if ((int)uVar7 == 0) {
    return uVar7;
  }
  if (lVar24 != 0) {
    if (*(int *)(lVar24 + 0x134) != 0) {
      return uVar7;
    }
    /*Atlas.UI.UIAtlasButton$$PlayButtonPressSound*/ func_0x01514d3c(lVar8);
    /*Atlas.UI.UIAtlasButton$$PressButton*/ func_0x01514bcc(lVar8,lVar24,0);
    uVar12 = *(undefined8 *)(lVar8 + 0x118);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar12,0,0);
    if ((int)uVar7 == 0) {
      return uVar7;
    }
    bVar3 = false;
    ppppppuVar2 = &pppppuStack_90;
    ppppppplVar26 = (long *******)ppppppuStack_a0;
    puVar27 = puStack_98;
    goto Atlas_UI_UIAtlasButton__SelectButton;
  }
  auVar30 = func_0x00f78af4();
  plVar15 = auVar30._8_8_;
  plVar6 = auVar30._0_8_;
  puStack_c8 = &Atlas_UI_UIAtlasButton__OnSubmit;
  ppppppuStack_d0 = &ppppppuStack_a0;
  if ((bRam0000000003eb4d9e & 1) == 0) {
    func_0x00f78a20(0x3d21bd8);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d23da0);
    bRam0000000003eb4d9e = 1;
  }
  uVar7 = /*Core.Input.InputManager$$IsScreenLayerInputActive*/ func_0x01648f2c(*(undefined4 *)((long)plVar6 + 0x16c),0);
  if ((int)uVar7 == 0) {
    return uVar7;
  }
  if (plVar15 == (long *)0x0) {
    unaff_x22 = (undefined8 ******)/*Core.Input.InputManager$$GetGlyphCurrentlyHandlingSubmit*/ func_0x0164a31c(0);
    unaff_x23 = 1;
  }
  else {
    if (*(byte *)(*plVar15 + 300) < *(byte *)(/*Core.Input.GlyphEventData_TypeInfo*/ lRam0000000003d21bd8 + 300)) {
      unaff_x23 = 1;
    }
    else {
      unaff_x23 = (ulong)(*(long *)(*(long *)(*plVar15 + 200) +
                                    (ulong)*(byte *)(/*Core.Input.GlyphEventData_TypeInfo*/ lRam0000000003d21bd8 + 300) * 8 + -8) !=
                         /*Core.Input.GlyphEventData_TypeInfo*/ lRam0000000003d21bd8);
    }
    unaff_x22 = (undefined8 ******)/*Core.Input.InputManager$$GetGlyphCurrentlyHandlingSubmit*/ func_0x0164a31c(0);
    if (*(byte *)(/*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0 + 300) <= *(byte *)(*plVar15 + 300)) {
      unaff_x23 = (ulong)((uint)(*(long *)(*(long *)(*plVar15 + 200) +
                                           (ulong)*(byte *)(/*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0 + 300) * 8 + -8) !=
                                /*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0) & (uint)unaff_x23);
    }
  }
  if ((int)unaff_x23 == 0) {
code_r0x015152e8:
    /*Atlas.UI.UIAtlasButton$$PlayButtonPressSound*/ func_0x01514d3c(plVar6);
    /*Atlas.UI.UIAtlasButton$$PressButton*/ func_0x01514bcc(plVar6,plVar15,0);
    uVar7 = (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
    if (((int)uVar7 == 0) ||
       (uVar7 = (**(code **)(*plVar6 + 0x2b8))(plVar6,*(undefined8 *)(*plVar6 + 0x2c0)),
       (int)uVar7 == 0)) {
      return uVar7;
    }
    (**(code **)(*plVar6 + 0x2d8))(plVar6,2,0,*(undefined8 *)(*plVar6 + 0x2e0));
    puStack_108 = &UNK_01515354;
    plVar11 = plVar6;
  }
  else {
    unaff_x23 = 0x3d23990;
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(unaff_x22,0);
    if (iVar4 == 0) goto code_r0x015152e8;
    if (unaff_x22 != (undefined8 ******)0x0) {
      unaff_x22 = (undefined8 ******)unaff_x22[5];
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x22,plVar6,0);
      if ((uVar7 & 1) != 0) {
        return uVar7;
      }
      goto code_r0x015152e8;
    }
    puStack_108 = &Atlas_UI_UIAtlasButton___OnSubmit_g__OnFinishSubmitCoroutine_45_0;
    plVar11 = (long *)func_0x00f78af4();
  }
  uStack_128 = 1;
  ppppppplVar26 = &pppppplStack_110;
  pppppuStack_130 = unaff_x22;
  pppppplStack_110 = (long ******)&ppppppuStack_d0;
  if ((bRam0000000003eb4da6 & 1) == 0) {
    plStack_120 = plVar15;
    plStack_118 = plVar6;
    func_0x00f78a20(0x3d29448);
    auVar30._8_8_ = plStack_120;
    auVar30._0_8_ = plStack_118;
    bRam0000000003eb4da6 = 1;
  }
  plStack_120 = auVar30._8_8_;
  plStack_118 = auVar30._0_8_;
  uVar7 = func_0x00f78aec(/*Atlas.UI.UIAtlasButton.<<OnSubmit>g__OnFinishSubmitCoroutine|45_0>d_TypeInfo*/ uRam0000000003d29448);
  /*Atlas.UI.UIAtlasButton.<<OnSubmit>g__OnFinishSubmitCoroutine|45_0>d$$.ctor*/ func_0x0156c5e4(uVar7,0,0);
  if (uVar7 != 0) {
    *(long **)(uVar7 + 0x20) = plVar11;
    return uVar7;
  }
  auVar29 = func_0x00f78af4();
  if ((bRam0000000003eb4d9f & 1) == 0) {
    func_0x00f78a20(0x3d23da0);
    bRam0000000003eb4d9f = 1;
  }
  uVar7 = /*Core.Input.InputManager$$IsScreenLayerInputActive*/ func_0x01648f2c(*(undefined4 *)(auVar29._0_8_ + 0x16c),0);
  if ((int)uVar7 == 0) {
    return uVar7;
  }
  if (auVar29._8_8_ == (long *)0x0) {
code_r0x0151546c:
    bVar3 = false;
  }
  else {
    lVar8 = *auVar29._8_8_;
    if (*(byte *)(lVar8 + 300) < *(byte *)(/*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0 + 300)) goto code_r0x0151546c;
    bVar3 = *(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(/*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0 + 300) * 8 + -8
                     ) == /*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0;
  }
  iVar4 = /*Core.Input.InputManager$$get_IsCurrentSelectionFromUser*/ func_0x0164ad7c(0);
  if ((iVar4 != 0) && (!bVar3)) {
    /*Atlas.UI.UIAtlasButton$$PlayButtonSelectSound*/ func_0x01514cec(auVar29._0_8_);
  }
  puVar27 = &Atlas_UI_UIAtlasButton__OnSelect;
  ppppppuVar2 = &pppppuStack_130;
  uStack_b8 = 0x3d29448;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = plVar11;
  auVar28 = auVar28 << 0x40;
Atlas_UI_UIAtlasButton__SelectButton:
  uVar7 = auVar29._0_8_;
  *(undefined8 *******)((long)ppppppuVar2 + -0x30) = unaff_x22;
  *(undefined8 *)((long)ppppppuVar2 + -0x28) = uStack_b8;
  *(undefined1 (*) [16])((long)ppppppuVar2 + -0x20) = auVar28;
  *(long ********)((long)ppppppuVar2 + -0x10) = ppppppplVar26;
  *(undefined **)((long)ppppppuVar2 + -8) = puVar27;
  puVar25 = (undefined1 *)((long)ppppppuVar2 + -0x10);
  uVar12 = 0;
  if ((*(char *)(uVar7 + 0x140) != '\0') && (bVar3)) {
    return uVar7;
  }
  /*UnityEngine.UI.Selectable$$OnSelect*/ func_0x032e4efc(uVar7,auVar29._8_8_,0);
  if (*(long *)(uVar7 + 0x118) != 0) {
    /*Atlas.UI.UIAtlasButtonGroup$$OnButtonSelected*/ func_0x01514894(*(long *)(uVar7 + 0x118),uVar7,auVar29._8_8_);
  }
  uVar19 = *(ulong *)(uVar7 + 0x148);
  if (uVar19 == 0) {
    uVar19 = *(ulong *)(uVar7 + 0x160);
    if (uVar19 == 0) {
      return 0;
    }
    puVar25 = *(undefined1 **)((long)ppppppuVar2 + -0x10);
    puVar27 = *(undefined **)((long)ppppppuVar2 + -8);
    uVar12 = *(undefined8 *)((long)ppppppuVar2 + -0x20);
    unaff_x22 = *(undefined8 *******)((long)ppppppuVar2 + -0x30);
    auVar29._8_8_ = *(undefined8 *)((long)ppppppuVar2 + -0x28);
    auVar29._0_8_ = *(undefined8 *)((long)ppppppuVar2 + -0x18);
  }
  else {
    puVar27 = &UNK_01514868;
    ppppppuVar2 = (undefined8 ******)((long)ppppppuVar2 + -0x30);
  }
  uVar16 = 0;
  *(undefined8 *)((long)ppppppuVar2 + -0x50) = unaff_x26;
  *(undefined8 *)((long)ppppppuVar2 + -0x48) = unaff_x25;
  *(undefined8 *)((long)ppppppuVar2 + -0x40) = unaff_x24;
  *(ulong *)((long)ppppppuVar2 + -0x38) = unaff_x23;
  *(undefined8 *******)((long)ppppppuVar2 + -0x30) = unaff_x22;
  *(long *)((long)ppppppuVar2 + -0x28) = auVar29._8_8_;
  *(undefined8 *)((long)ppppppuVar2 + -0x20) = uVar12;
  *(long *)((long)ppppppuVar2 + -0x18) = auVar29._0_8_;
  *(undefined1 **)((long)ppppppuVar2 + -0x10) = puVar25;
  *(undefined **)((long)ppppppuVar2 + -8) = puVar27;
  *(ulong *)((long)ppppppuVar2 + -0x58) = uVar19;
  lVar8 = *(long *)(uVar19 + 0x68);
  if (lVar8 == 0) {
    puVar25 = (undefined1 *)((long)ppppppuVar2 + -0x58);
    lVar24 = 1;
  }
  else {
    lVar24 = *(long *)(lVar8 + 0x18);
    if (lVar24 == 0) {
      return uVar19;
    }
    puVar25 = (undefined1 *)(lVar8 + 0x20);
  }
  lVar8 = 0;
  do {
    lVar22 = *(long *)(puVar25 + lVar8 * 8);
    pcVar23 = *(code **)(lVar22 + 0x10);
    plVar6 = *(long **)(lVar22 + 0x20);
    lVar22 = *(long *)(lVar22 + 0x28);
    if (*(short *)(lVar22 + 0x48) == -1) {
      func_0x00f78ad8(lVar22,uVar16);
    }
    iVar4 = func_0x00f78a4c(lVar22);
    if (iVar4 == 0) {
      if ((((plVar6 == (long *)0x0) || (*(short *)(lVar22 + 0x48) == -1)) ||
          ((*(byte *)(*plVar6 + 0x115) & 1) != 0)) || (*(long *)(uVar19 + 0x18) == 0))
      goto code_r0x02924d98;
      iVar4 = func_0x00f78a44(lVar22);
      iVar5 = func_0x00f78ec0(lVar22);
      if (iVar4 == 0) {
        uVar1 = *(ushort *)(lVar22 + 0x48);
        if (iVar5 == 0) {
          lVar22 = *plVar6 + (ulong)uVar1 * 0x10;
          auVar28 = (**(code **)(lVar22 + 0x138))(plVar6,*(undefined8 *)(lVar22 + 0x140));
          goto code_r0x02924da4;
        }
        lVar22 = func_0x00f78a48(lVar22);
        lVar13 = *plVar6;
        uVar7 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar7 != 0) {
          piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == lVar22) {
              puVar17 = (undefined8 *)(lVar13 + (long)(int)(*piVar21 + (uint)uVar1) * 0x10 + 0x138);
              goto code_r0x02924e68;
            }
            piVar21 = piVar21 + 4;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        puVar17 = (undefined8 *)func_0x00fac1f0(plVar6,lVar22,(ulong)uVar1);
code_r0x02924e68:
        pcVar23 = (code *)*puVar17;
        puVar17 = (undefined8 *)puVar17[1];
      }
      else {
        if (iVar5 == 0) {
          uVar12 = *(undefined8 *)(*plVar6 + (ulong)*(ushort *)(lVar22 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar13 = *plVar6;
          uVar7 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar7 != 0) {
            piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)(lVar22 + 0x18)) {
                lVar13 = lVar13 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar22 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x02924e40;
              }
              piVar21 = piVar21 + 4;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
          lVar13 = func_0x00fac1f0(plVar6);
code_r0x02924e40:
          uVar12 = *(undefined8 *)(lVar13 + 8);
        }
        puVar17 = (undefined8 *)func_0x00f78acc(uVar12,lVar22);
        pcVar23 = (code *)*puVar17;
      }
      auVar28 = (*pcVar23)(plVar6,puVar17);
    }
    else if (*(char *)(lVar22 + 0x4a) == '\0') {
      auVar28 = (*pcVar23)(lVar22);
    }
    else {
code_r0x02924d98:
      auVar28 = (*pcVar23)(plVar6,lVar22);
    }
code_r0x02924da4:
    uVar16 = auVar28._8_8_;
    lVar8 = lVar8 + 1;
    if (lVar8 == lVar24) {
      return auVar28._0_8_;
    }
  } while( true );
}



// ============================================================
// RVA: 0x1482184 | Atlas.UI.Screens.LeagueStarsEntryBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_Screens_LeagueStarsEntryBehaviour___ctor(ulong param_1)

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



