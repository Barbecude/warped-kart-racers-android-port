// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.UIAtlasButtonGroup

// ============================================================
// RVA: 0x1514894 | Atlas.UI.UIAtlasButtonGroup.OnButtonSelected
// ============================================================

void Atlas_UI_UIAtlasButtonGroup__OnButtonSelected(long param_1,long param_2,ulong param_3)

{
  long *plVar1;
  ushort uVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  int extraout_w1;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auVar22 [16];
  long lStack_c8;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  uVar8 = param_3;
  if ((bRam0000000003eb4dab & 1) == 0) {
    func_0x00f78a20(0x3d2a358);
    func_0x00f78a20(0x3d330a8);
    func_0x00f78a20(0x3d330b0);
    func_0x00f78a20(0x3d330b8);
    func_0x00f78a20(0x3d3c5c8);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d24188);
    bRam0000000003eb4dab = 1;
  }
  uStack_68 = 0;
  uStack_60 = 0;
  lStack_58 = 0;
  if (*(char *)(param_1 + 0x38) == '\0') {
LAB_015149bc:
    *(long *)(param_1 + 0x48) = param_2;
    if (*(char *)(param_1 + 0x21) != '\0') {
      if (param_2 == 0) goto LAB_01514b40;
      plVar6 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_2,0);
      if ((plVar6 != (long *)0x0) && (*plVar6 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
        plVar6 = (long *)0x0;
      }
      iVar4 = *(int *)(param_1 + 0x24);
      if (iVar4 == 2) {
        uVar17 = *(undefined4 *)(param_1 + 0x28);
        uVar19 = *(undefined4 *)(param_1 + 0x2c);
        uVar20 = *(undefined4 *)(param_1 + 0x30);
        uVar21 = *(undefined4 *)(param_1 + 0x34);
        uVar16 = 0x3f800000;
        uVar18 = 0x3f800000;
      }
      else {
        if (iVar4 != 1) {
          if (iVar4 == 0) {
            uVar8 = 1;
            Atlas_UI_AtlasTweenAnimations__SpinZoom
                      (*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                       *(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),plVar6,0,1,0,
                       0);
          }
          goto LAB_01514a70;
        }
        uVar16 = *(undefined4 *)(param_1 + 0x28);
        uVar18 = *(undefined4 *)(param_1 + 0x2c);
        uVar20 = *(undefined4 *)(param_1 + 0x30);
        uVar21 = *(undefined4 *)(param_1 + 0x34);
        uVar17 = 0x3f800000;
        uVar19 = 0x3f800000;
      }
      uVar8 = 1;
      Atlas_UI_AtlasTweenAnimations__SpinZoom
                (uVar16,uVar17,0x3f800000,uVar18,uVar19,0x3f800000,uVar20,uVar21,plVar6,0,1,0,0);
    }
LAB_01514a70:
    if (*(long *)(param_1 + 0x40) != 0) {
      unaff_x24 = (undefined8 *)0x3d2a358;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_68,*(long *)(param_1 + 0x40),uRam0000000003d3c5c8);
      while (uVar8 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_68,uRam0000000003d330b0), lVar13 = lStack_58,
            (uVar8 & 1) != 0) {
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar8 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar13,param_2,0);
        if ((uVar8 & 1) != 0) {
          if (lVar13 == 0) {
            func_0x00f78af4();
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1514b40);
            (*pcVar3)();
          }
          Atlas_UI_UIAtlasButton__DeselectButton(lVar13,param_3,0);
        }
      }
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_68,uRam0000000003d330a8);
      goto code_r0x01514b08;
    }
  }
  else {
    uVar14 = *(undefined8 *)(param_1 + 0x48);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar8 = 0;
    iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar14,0);
    if (iVar4 == 0) goto LAB_015149bc;
    if (*(long *)(param_1 + 0x48) != 0) {
      plVar6 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_1 + 0x48),0);
      if ((plVar6 != (long *)0x0) && (*plVar6 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
        plVar6 = (long *)0x0;
      }
      uVar8 = 1;
      Atlas_UI_AtlasTweenAnimations__SpinZoom
                (0x3f800000,0x3f800000,0,*(undefined4 *)(param_1 + 0x34),plVar6,0,1,0,0);
      goto LAB_015149bc;
    }
  }
LAB_01514b40:
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar6 = (long *)___cxa_begin_catch();
    lVar13 = *plVar6;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_68,*unaff_x25);
    if (lVar13 == 0) {
code_r0x01514b08:
      if (*(long *)(param_1 + 0x18) != 0) {
        /*System.Action<InputActionRebindingExtensions.RebindingOperation>$$Invoke*/ func_0x01e47f3c(*(long *)(param_1 + 0x18),param_2,*unaff_x24);
      }
      return;
    }
    func_0x00f78ac0(lVar13,0);
  }
  auVar22 = __Unwind_Resume();
  /*UnityEngine.UI.Selectable$$OnDeselect*/ func_0x032e4f08(auVar22._0_8_,auVar22._8_8_,0);
  if (((uVar8 & 1) != 0) || (lVar13 = *(long *)(auVar22._0_8_ + 0x150), lVar13 == 0)) {
    return;
  }
  uVar14 = 0;
  lStack_c8 = lVar13;
  lVar9 = *(long *)(lVar13 + 0x68);
  if (lVar9 == 0) {
    plVar6 = &lStack_c8;
    lVar15 = 1;
  }
  else {
    lVar15 = *(long *)(lVar9 + 0x18);
    if (lVar15 == 0) {
      return;
    }
    plVar6 = (long *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar10 = plVar6[lVar9];
    pcVar3 = *(code **)(lVar10 + 0x10);
    plVar1 = *(long **)(lVar10 + 0x20);
    lVar10 = *(long *)(lVar10 + 0x28);
    if (*(short *)(lVar10 + 0x48) == -1) {
      func_0x00f78ad8(lVar10,uVar14);
    }
    iVar4 = func_0x00f78a4c(lVar10);
    if (iVar4 == 0) {
      if ((((plVar1 == (long *)0x0) || (*(short *)(lVar10 + 0x48) == -1)) ||
          ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar13 + 0x18) == 0))
      goto code_r0x02924d98;
      iVar4 = func_0x00f78a44(lVar10);
      iVar5 = func_0x00f78ec0(lVar10);
      if (iVar4 == 0) {
        uVar2 = *(ushort *)(lVar10 + 0x48);
        if (iVar5 == 0) {
          lVar10 = *plVar1 + (ulong)uVar2 * 0x10;
          (**(code **)(lVar10 + 0x138))(plVar1,*(undefined8 *)(lVar10 + 0x140));
          uVar14 = extraout_x1_01;
          goto code_r0x02924da4;
        }
        lVar10 = func_0x00f78a48(lVar10);
        lVar11 = *plVar1;
        uVar8 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar8 != 0) {
          piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar10) {
              puVar7 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138);
              goto code_r0x02924e68;
            }
            piVar12 = piVar12 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar10,(ulong)uVar2);
code_r0x02924e68:
        pcVar3 = (code *)*puVar7;
        puVar7 = (undefined8 *)puVar7[1];
      }
      else {
        if (iVar5 == 0) {
          uVar14 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar11 = *plVar1;
          uVar8 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar8 != 0) {
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)(lVar10 + 0x18)) {
                lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar10 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x02924e40;
              }
              piVar12 = piVar12 + 4;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          lVar11 = func_0x00fac1f0(plVar1);
code_r0x02924e40:
          uVar14 = *(undefined8 *)(lVar11 + 8);
        }
        puVar7 = (undefined8 *)func_0x00f78acc(uVar14,lVar10);
        pcVar3 = (code *)*puVar7;
      }
      (*pcVar3)(plVar1,puVar7);
      uVar14 = extraout_x1_02;
    }
    else if (*(char *)(lVar10 + 0x4a) == '\0') {
      (*pcVar3)(lVar10);
      uVar14 = extraout_x1;
    }
    else {
code_r0x02924d98:
      (*pcVar3)(plVar1,lVar10);
      uVar14 = extraout_x1_00;
    }
code_r0x02924da4:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar15) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x1514ffc | Atlas.UI.UIAtlasButtonGroup.Subscribe
// ============================================================

/* WARNING: Possible PIC construction at 0x01514864: Changing call to branch */
/* WARNING: Type propagation algorithm not settling */

ulong Atlas_UI_UIAtlasButtonGroup__Subscribe(long param_1,undefined8 ******param_2)

{
  ushort uVar1;
  long *plVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  uint extraout_w8;
  uint uVar13;
  long lVar14;
  long extraout_x9;
  int *piVar15;
  ulong unaff_x19;
  undefined8 ******unaff_x20;
  undefined8 ******ppppppuVar16;
  undefined8 *****pppppuVar17;
  undefined8 unaff_x22;
  long lVar18;
  undefined8 unaff_x23;
  code *pcVar19;
  long lVar20;
  undefined8 unaff_x24;
  undefined1 *puVar21;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 *******pppppppuVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  long alStack_d0 [2];
  long *plStack_c0;
  undefined8 ******ppppppuStack_b8;
  long *******ppppppplStack_b0;
  code *pcStack_a8;
  undefined8 *******pppppppuStack_70;
  code *pcStack_68;
  undefined8 *******pppppppuStack_40;
  code *pcStack_38;
  undefined8 ******ppppppuVar7;
  
  if ((bRam0000000003eb4da9 & 1) == 0) {
    func_0x00f78a20(0x3d3c5b8);
    func_0x00f78a20(0x3d3c5c0);
    bRam0000000003eb4da9 = 1;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar6 = /*System.Collections.Generic.List<XmlQualifiedName>$$Contains*/ func_0x02427438(*(long *)(param_1 + 0x40),param_2,uRam0000000003d3c5c0);
    if ((uVar6 & 1) != 0) {
      return uVar6;
    }
    uVar6 = *(ulong *)(param_1 + 0x40);
    if (uVar6 != 0) {
      lVar14 = *(long *)(uVar6 + 0x10);
      puVar12 = puRam0000000003d3c5b8;
      if (lVar14 == 0) {
code_r0x0242716c:
        param_2 = unaff_x20;
        uVar6 = unaff_x19;
        uVar8 = func_0x00f78af4();
        lVar14 = extraout_x9;
        uVar13 = extraout_w8;
code_r0x02427170:
        *(uint *)(uVar6 + 0x18) = uVar13 + 1;
      }
      else {
        uVar13 = *(uint *)(uVar6 + 0x18);
        uVar8 = uVar6;
        if (uVar13 != *(uint *)(lVar14 + 0x18)) goto code_r0x02427170;
        puVar12 = *(undefined8 **)(*(long *)(puRam0000000003d3c5b8[3] + 0xc0) + 0x60);
        uVar8 = (*(code *)*puVar12)(uVar6,uVar13 + 1);
        lVar14 = *(long *)(uVar6 + 0x10);
        uVar13 = *(uint *)(uVar6 + 0x18);
        *(uint *)(uVar6 + 0x18) = uVar13 + 1;
        unaff_x19 = uVar6;
        unaff_x20 = param_2;
        if (lVar14 == 0) goto code_r0x0242716c;
      }
      if (uVar13 < *(uint *)(lVar14 + 0x18)) {
        *(undefined8 *******)(lVar14 + (long)(int)uVar13 * 8 + 0x20) = param_2;
        *(int *)(uVar6 + 0x1c) = *(int *)(uVar6 + 0x1c) + 1;
        return uVar8;
      }
      uVar9 = func_0x00f78b24();
      auVar25 = func_0x00f78ac0(uVar9,0);
      lVar20 = auVar25._8_8_;
      lVar14 = auVar25._0_8_;
      pppppppuStack_40 = (undefined8 *******)param_2;
      pcStack_38 = (code *)uVar6;
      (*(code *)**(undefined8 **)(*(long *)(puVar12[3] + 0xc0) + 0x48))(lVar20,0x14);
      if (lVar14 == 0) {
        func_0x00f78af4();
code_r0x0242734c:
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x2427350);
        (*pcVar19)();
      }
      pcVar19 = (code *)**(undefined8 **)(*(long *)(puVar12[3] + 0xc0) + 0x28);
      lVar18 = *(long *)(*(long *)(puVar12[3] + 0xc0) + 0x38);
      if ((*(ushort *)(lVar18 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar18);
      }
      if (lVar20 == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = func_0x00f78adc(lVar20,lVar18);
        if (lVar10 == 0) {
          func_0x00f78e5c(lVar20,lVar18);
          goto code_r0x0242734c;
        }
      }
      (*pcVar19)(lVar14,lVar10,*(undefined8 *)(*(long *)(puVar12[3] + 0xc0) + 0x28));
      iVar4 = (*(code *)**(undefined8 **)(*(long *)(puVar12[3] + 0xc0) + 0x68))(lVar14);
      return (ulong)(iVar4 - 1);
    }
  }
  auVar25 = func_0x00f78af4();
  lVar14 = auVar25._8_8_;
  ppppppuVar16 = auVar25._0_8_;
  uVar9 = 0x3eb4000;
  pcStack_38 = Atlas_UI_UIAtlasButton__OnPointerClick;
  pppppppuStack_40 = (undefined8 *******)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4d9d & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4d9d = 1;
  }
  uVar6 = /*Core.Input.InputManager$$IsScreenLayerInputActive*/ func_0x01648f2c(*(undefined4 *)((long)ppppppuVar16 + 0x16c),0);
  if ((int)uVar6 == 0) {
    return uVar6;
  }
  if (lVar14 != 0) {
    if (*(int *)(lVar14 + 0x134) != 0) {
      return uVar6;
    }
    Atlas_UI_UIAtlasButton__PlayButtonPressSound(ppppppuVar16);
    Atlas_UI_UIAtlasButton__PressButton(ppppppuVar16,lVar14,0);
    pppppuVar17 = ppppppuVar16[0x23];
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(pppppuVar17,0,0);
    if ((int)uVar6 == 0) {
      return uVar6;
    }
    bVar3 = false;
    plVar2 = (long *)&stack0xffffffffffffffd0;
    pppppppuVar22 = pppppppuStack_40;
    pcVar19 = pcStack_38;
    goto Atlas_UI_UIAtlasButton__SelectButton;
  }
  auVar24 = func_0x00f78af4();
  plVar2 = auVar24._8_8_;
  ppppppuVar7 = auVar24._0_8_;
  pcStack_68 = Atlas_UI_UIAtlasButton__OnSubmit;
  pppppppuStack_70 = &pppppppuStack_40;
  if ((bRam0000000003eb4d9e & 1) == 0) {
    func_0x00f78a20(0x3d21bd8);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d23da0);
    bRam0000000003eb4d9e = 1;
  }
  uVar6 = /*Core.Input.InputManager$$IsScreenLayerInputActive*/ func_0x01648f2c(*(undefined4 *)((long)ppppppuVar7 + 0x16c),0);
  if ((int)uVar6 == 0) {
    return uVar6;
  }
  if (plVar2 == (long *)0x0) {
    lVar14 = /*Core.Input.InputManager$$GetGlyphCurrentlyHandlingSubmit*/ func_0x0164a31c(0);
    bVar3 = true;
  }
  else {
    if (*(byte *)(*plVar2 + 300) < *(byte *)(/*Core.Input.GlyphEventData_TypeInfo*/ lRam0000000003d21bd8 + 300)) {
      bVar3 = true;
    }
    else {
      bVar3 = *(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(/*Core.Input.GlyphEventData_TypeInfo*/ lRam0000000003d21bd8 + 300) * 8
                       + -8) != /*Core.Input.GlyphEventData_TypeInfo*/ lRam0000000003d21bd8;
    }
    lVar14 = /*Core.Input.InputManager$$GetGlyphCurrentlyHandlingSubmit*/ func_0x0164a31c(0);
    if (*(byte *)(/*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0 + 300) <= *(byte *)(*plVar2 + 300)) {
      bVar3 = (bool)(*(long *)(*(long *)(*plVar2 + 200) +
                               (ulong)*(byte *)(/*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0 + 300) * 8 + -8) !=
                     /*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0 & bVar3);
    }
  }
  if (!bVar3) {
code_r0x015152e8:
    Atlas_UI_UIAtlasButton__PlayButtonPressSound(ppppppuVar7);
    Atlas_UI_UIAtlasButton__PressButton(ppppppuVar7,plVar2,0);
    uVar6 = (*(code *)(*ppppppuVar7)[0x39])(ppppppuVar7,(*ppppppuVar7)[0x3a]);
    if (((int)uVar6 == 0) ||
       (uVar6 = (*(code *)(*ppppppuVar7)[0x57])(ppppppuVar7,(*ppppppuVar7)[0x58]), (int)uVar6 == 0))
    {
      return uVar6;
    }
    (*(code *)(*ppppppuVar7)[0x5b])(ppppppuVar7,2,0,(*ppppppuVar7)[0x5c]);
    lVar14 = Atlas_UI_UIAtlasButton___OnSubmit_g__OnFinishSubmitCoroutine_45_0(ppppppuVar7);
    uVar9 = 0x3eb4000;
    if (lVar14 == 0) {
      func_0x00f78a24(0x3d23938,0,0);
      uVar11 = func_0x00f78aec();
      uVar23 = func_0x00f78a24(0x3d7b500);
      /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar11,uVar23,0);
    }
    else {
      uVar9 = 0x3ec0000;
      if (pcRam0000000003ec01d0 == (code *)0x0) {
        pcRam0000000003ec01d0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                    );
      }
      uVar6 = (*pcRam0000000003ec01d0)(ppppppuVar7);
      if ((uVar6 & 1) != 0) {
        if (pcRam0000000003ec01e0 == (code *)0x0) {
          pcRam0000000003ec01e0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*pcRam0000000003ec01e0)(ppppppuVar7,lVar14);
        return uVar6;
      }
      func_0x00f78a24(0x3d1fce8);
      uVar11 = func_0x00f78aec();
      uVar23 = func_0x00f78a24(0x3d6af80);
      /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar11,uVar23,0);
      ppppppuVar16 = ppppppuVar7;
    }
    uVar23 = func_0x00f78a24(0x3d5a8a8);
    auVar25 = func_0x00f78ac0(uVar11,uVar23);
    ppppppuStack_b8 = (undefined8 ******)uVar9;
    ppppppplStack_b0 = (long *******)ppppppuVar16;
    pcStack_a8 = (code *)uVar11;
    if (pcRam0000000003ec01e0 == (code *)0x0) {
      pcRam0000000003ec01e0 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (*pcRam0000000003ec01e0)(auVar25._0_8_,auVar25._8_8_);
    return uVar6;
  }
  unaff_x23 = 0x3d23990;
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar14,0);
  if (iVar4 == 0) goto code_r0x015152e8;
  if (lVar14 != 0) {
    uVar9 = *(undefined8 *)(lVar14 + 0x28);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar9,ppppppuVar7,0);
    if ((uVar6 & 1) != 0) {
      return uVar6;
    }
    goto code_r0x015152e8;
  }
  param_2 = (undefined8 ******)func_0x00f78af4();
  alStack_d0[1] = 1;
  pcStack_a8 = Atlas_UI_UIAtlasButton___OnSubmit_g__OnFinishSubmitCoroutine_45_0;
  pppppppuVar22 = &ppppppplStack_b0;
  alStack_d0[0] = lVar14;
  ppppppplStack_b0 = (long *******)&pppppppuStack_70;
  if ((bRam0000000003eb4da6 & 1) == 0) {
    plStack_c0 = plVar2;
    ppppppuStack_b8 = ppppppuVar7;
    func_0x00f78a20(0x3d29448);
    auVar24._8_8_ = plStack_c0;
    auVar24._0_8_ = ppppppuStack_b8;
    bRam0000000003eb4da6 = 1;
  }
  plStack_c0 = auVar24._8_8_;
  ppppppuStack_b8 = auVar24._0_8_;
  uVar6 = func_0x00f78aec(/*Atlas.UI.UIAtlasButton.<<OnSubmit>g__OnFinishSubmitCoroutine|45_0>d_TypeInfo*/ uRam0000000003d29448);
  Atlas_UI_UIAtlasButton___OnSubmit_g__OnFinishSubmitCoroutine_45_0_d___ctor(uVar6,0,0);
  if (uVar6 != 0) {
    *(undefined8 *******)(uVar6 + 0x20) = param_2;
    return uVar6;
  }
  auVar25 = func_0x00f78af4();
  if ((bRam0000000003eb4d9f & 1) == 0) {
    func_0x00f78a20(0x3d23da0);
    bRam0000000003eb4d9f = 1;
  }
  uVar6 = /*Core.Input.InputManager$$IsScreenLayerInputActive*/ func_0x01648f2c(*(undefined4 *)(auVar25._0_8_ + 0x16c),0);
  if ((int)uVar6 == 0) {
    return uVar6;
  }
  if (auVar25._8_8_ == (long *)0x0) {
LAB_0151546c:
    bVar3 = false;
  }
  else {
    lVar14 = *auVar25._8_8_;
    if (*(byte *)(lVar14 + 300) < *(byte *)(/*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0 + 300)) goto LAB_0151546c;
    bVar3 = *(long *)(*(long *)(lVar14 + 200) + (ulong)*(byte *)(/*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0 + 300) * 8 +
                     -8) == /*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0;
  }
  iVar4 = /*Core.Input.InputManager$$get_IsCurrentSelectionFromUser*/ func_0x0164ad7c(0);
  if ((iVar4 != 0) && (!bVar3)) {
    Atlas_UI_UIAtlasButton__PlayButtonSelectSound(auVar25._0_8_);
  }
  pcVar19 = Atlas_UI_UIAtlasButton__OnSelect;
  plVar2 = alStack_d0;
  uVar9 = 0x3d29448;
  unaff_x22 = 0;
  param_1 = 0;
Atlas_UI_UIAtlasButton__SelectButton:
  uVar6 = auVar25._0_8_;
  *(undefined8 *)((long)plVar2 + -0x30) = unaff_x22;
  *(undefined8 *)((long)plVar2 + -0x28) = uVar9;
  *(long *)((long)plVar2 + -0x20) = param_1;
  *(undefined8 *******)((long)plVar2 + -0x18) = param_2;
  *(undefined8 ********)((long)plVar2 + -0x10) = pppppppuVar22;
  *(code **)((long)plVar2 + -8) = pcVar19;
  puVar21 = (undefined1 *)((long)plVar2 + -0x10);
  uVar9 = 0;
  if ((*(char *)(uVar6 + 0x140) != '\0') && (bVar3)) {
    return uVar6;
  }
  /*UnityEngine.UI.Selectable$$OnSelect*/ func_0x032e4efc(uVar6,auVar25._8_8_,0);
  if (*(long *)(uVar6 + 0x118) != 0) {
    Atlas_UI_UIAtlasButtonGroup__OnButtonSelected(*(long *)(uVar6 + 0x118),uVar6,auVar25._8_8_);
  }
  uVar8 = *(ulong *)(uVar6 + 0x148);
  if (uVar8 == 0) {
    uVar8 = *(ulong *)(uVar6 + 0x160);
    if (uVar8 == 0) {
      return 0;
    }
    puVar21 = *(undefined1 **)((long)plVar2 + -0x10);
    uVar23 = *(undefined8 *)((long)plVar2 + -8);
    uVar9 = *(undefined8 *)((long)plVar2 + -0x20);
    unaff_x22 = *(undefined8 *)((long)plVar2 + -0x30);
    auVar25._8_8_ = *(undefined8 *)((long)plVar2 + -0x28);
    auVar25._0_8_ = *(undefined8 *)((long)plVar2 + -0x18);
  }
  else {
    uVar23 = 0x1514868;
    plVar2 = (long *)((long)plVar2 + -0x30);
  }
  uVar11 = 0;
  *(undefined8 *)((long)plVar2 + -0x50) = unaff_x26;
  *(undefined8 *)((long)plVar2 + -0x48) = unaff_x25;
  *(undefined8 *)((long)plVar2 + -0x40) = unaff_x24;
  *(undefined8 *)((long)plVar2 + -0x38) = unaff_x23;
  *(undefined8 *)((long)plVar2 + -0x30) = unaff_x22;
  *(long *)((long)plVar2 + -0x28) = auVar25._8_8_;
  *(undefined8 *)((long)plVar2 + -0x20) = uVar9;
  *(long *)((long)plVar2 + -0x18) = auVar25._0_8_;
  *(undefined1 **)((long)plVar2 + -0x10) = puVar21;
  *(undefined8 *)((long)plVar2 + -8) = uVar23;
  *(ulong *)((long)plVar2 + -0x58) = uVar8;
  lVar14 = *(long *)(uVar8 + 0x68);
  if (lVar14 == 0) {
    puVar21 = (undefined1 *)((long)plVar2 + -0x58);
    lVar20 = 1;
  }
  else {
    lVar20 = *(long *)(lVar14 + 0x18);
    if (lVar20 == 0) {
      return uVar8;
    }
    puVar21 = (undefined1 *)(lVar14 + 0x20);
  }
  lVar14 = 0;
  do {
    lVar18 = *(long *)(puVar21 + lVar14 * 8);
    pcVar19 = *(code **)(lVar18 + 0x10);
    plVar2 = *(long **)(lVar18 + 0x20);
    lVar18 = *(long *)(lVar18 + 0x28);
    if (*(short *)(lVar18 + 0x48) == -1) {
      func_0x00f78ad8(lVar18,uVar11);
    }
    iVar4 = func_0x00f78a4c(lVar18);
    if (iVar4 == 0) {
      if ((((plVar2 == (long *)0x0) || (*(short *)(lVar18 + 0x48) == -1)) ||
          ((*(byte *)(*plVar2 + 0x115) & 1) != 0)) || (*(long *)(uVar8 + 0x18) == 0))
      goto code_r0x02924d98;
      iVar4 = func_0x00f78a44(lVar18);
      iVar5 = func_0x00f78ec0(lVar18);
      if (iVar4 == 0) {
        uVar1 = *(ushort *)(lVar18 + 0x48);
        if (iVar5 == 0) {
          lVar18 = *plVar2 + (ulong)uVar1 * 0x10;
          auVar25 = (**(code **)(lVar18 + 0x138))(plVar2,*(undefined8 *)(lVar18 + 0x140));
          goto code_r0x02924da4;
        }
        lVar18 = func_0x00f78a48(lVar18);
        lVar10 = *plVar2;
        uVar6 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar6 != 0) {
          piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar18) {
              puVar12 = (undefined8 *)(lVar10 + (long)(int)(*piVar15 + (uint)uVar1) * 0x10 + 0x138);
              goto code_r0x02924e68;
            }
            piVar15 = piVar15 + 4;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        puVar12 = (undefined8 *)func_0x00fac1f0(plVar2,lVar18,(ulong)uVar1);
code_r0x02924e68:
        pcVar19 = (code *)*puVar12;
        puVar12 = (undefined8 *)puVar12[1];
      }
      else {
        if (iVar5 == 0) {
          uVar9 = *(undefined8 *)(*plVar2 + (ulong)*(ushort *)(lVar18 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar10 = *plVar2;
          uVar6 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar6 != 0) {
            piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)(lVar18 + 0x18)) {
                lVar10 = lVar10 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar18 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x02924e40;
              }
              piVar15 = piVar15 + 4;
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
          lVar10 = func_0x00fac1f0(plVar2);
code_r0x02924e40:
          uVar9 = *(undefined8 *)(lVar10 + 8);
        }
        puVar12 = (undefined8 *)func_0x00f78acc(uVar9,lVar18);
        pcVar19 = (code *)*puVar12;
      }
      auVar25 = (*pcVar19)(plVar2,puVar12);
    }
    else if (*(char *)(lVar18 + 0x4a) == '\0') {
      auVar25 = (*pcVar19)(lVar18);
    }
    else {
code_r0x02924d98:
      auVar25 = (*pcVar19)(plVar2,lVar18);
    }
code_r0x02924da4:
    uVar11 = auVar25._8_8_;
    lVar14 = lVar14 + 1;
    if (lVar14 == lVar20) {
      return auVar25._0_8_;
    }
  } while( true );
}



// ============================================================
// RVA: 0x1515dfc | Atlas.UI.UIAtlasButtonGroup.add_OnButtonSelectedEvent
// ============================================================

/* WARNING: Possible PIC construction at 0x01514cbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01514c5c) */
/* WARNING: Removing unreachable block (ram,0x01514c7c) */
/* WARNING: Removing unreachable block (ram,0x01514c90) */
/* WARNING: Removing unreachable block (ram,0x01514c94) */
/* WARNING: Removing unreachable block (ram,0x01514c98) */
/* WARNING: Removing unreachable block (ram,0x01514ca0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_UI_UIAtlasButtonGroup__add_OnButtonSelectedEvent(long param_1,undefined8 param_2)

{
  ushort uVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  int extraout_w1;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *plVar16;
  undefined8 uVar17;
  code *pcVar18;
  undefined8 unaff_x23;
  long lVar19;
  undefined8 unaff_x24;
  undefined1 *puVar20;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 *******pppppppuVar21;
  undefined *puVar22;
  undefined1 auVar23 [16];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 ******ppppppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 ******ppppppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 *****pppppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4da7 & 1) == 0) {
    func_0x00f78a20(0x3d1b5b0);
    bRam0000000003eb4da7 = 1;
  }
  plVar16 = (long *)(param_1 + 0x18);
  lVar9 = *plVar16;
  while ((plVar6 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar9,param_2,0), plVar6 == (long *)0x0 ||
         (*plVar6 == /*System.Action<UIAtlasButton>_TypeInfo*/ lRam0000000003d1b5b0))) {
    lVar7 = func_0x00ff0f44(plVar16,plVar6,lVar9);
    bVar3 = lVar9 == lVar7;
    lVar9 = lVar7;
    if (bVar3) {
      return lVar7;
    }
  }
  auVar23 = func_0x00f78e5c(plVar6);
  plVar6 = auVar23._8_8_;
  uStack_60 = 0x3d1b5b0;
  puStack_38 = &Atlas_UI_UIAtlasButtonGroup__remove_OnButtonSelectedEvent;
  lStack_58 = lVar9;
  plStack_50 = plVar16;
  uStack_48 = param_2;
  pppppuStack_40 = (undefined8 *****)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4da8 & 1) == 0) {
    func_0x00f78a20(0x3d1b5b0);
    bRam0000000003eb4da8 = 1;
  }
  plVar16 = (long *)(auVar23._0_8_ + 0x18);
  lVar9 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar9,plVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<UIAtlasButton>_TypeInfo*/ lRam0000000003d1b5b0))) {
    lVar7 = func_0x00ff0f44(plVar16,plVar8,lVar9);
    bVar3 = lVar9 == lVar7;
    lVar9 = lVar7;
    if (bVar3) {
      return lVar7;
    }
  }
  lVar7 = func_0x00f78e5c(plVar8);
  puVar2 = &uStack_90;
  uStack_90 = 0x3d1b5b0;
  puStack_68 = &Atlas_UI_UIAtlasButtonGroup__OnEnable;
  lStack_88 = lVar9;
  plStack_80 = plVar16;
  plStack_78 = plVar6;
  ppppppuStack_70 = &pppppuStack_40;
  if ((bRam0000000003eb4daa & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4daa = 1;
  }
  uVar17 = *(undefined8 *)(lVar7 + 0x48);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar9 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar17,0,0);
  if ((int)lVar9 == 0) {
    return lVar9;
  }
  if (*(long *)(lVar7 + 0x48) != 0) {
    lVar9 = Atlas_UI_UIAtlasButton__SelectButton(*(long *)(lVar7 + 0x48),0,0,0);
    if (*(char *)(lVar7 + 0x20) == '\0') {
      return lVar9;
    }
    plVar16 = *(long **)(lVar7 + 0x48);
    if (plVar16 != (long *)0x0) {
      if ((bRam0000000003eb4d9a & 1) == 0) {
        func_0x00f78a20(0x3d23da0);
        func_0x00f78a20(0x3d754d8);
        bRam0000000003eb4d9a = 1;
      }
      lVar9 = (**(code **)(*plVar16 + 0x1c8))(plVar16,*(undefined8 *)(*plVar16 + 0x1d0));
      if (((int)lVar9 == 0) ||
         (lVar9 = (**(code **)(*plVar16 + 0x2b8))(plVar16,*(undefined8 *)(*plVar16 + 0x2c0)),
         (int)lVar9 == 0)) {
        return lVar9;
      }
      /*UnityEngine.UISystemProfilerApi$$AddMarker*/ func_0x032f6f10(/*STR('UIAtlasButton.OnPress')*/ uRam0000000003d754d8,plVar16,0);
      lVar9 = plVar16[0x2b];
      if (lVar9 == 0) {
        lVar9 = plVar16[0x2c];
        if (lVar9 == 0) {
          return 0;
        }
        puVar2 = &uStack_60;
        plVar16 = plStack_78;
        plVar6 = plStack_80;
        lVar7 = lStack_88;
        uVar17 = uStack_90;
        pppppppuVar21 = (undefined8 *******)ppppppuStack_70;
        puVar22 = puStack_68;
      }
      else {
        plVar6 = (long *)0x0;
        lVar7 = 0;
        uVar17 = 0x3eb4000;
        pppppppuVar21 = &ppppppuStack_70;
        puVar22 = (undefined *)0x1514cc0;
      }
      uVar11 = 0;
      *(undefined8 *)((long)puVar2 + -0x50) = unaff_x26;
      *(undefined8 *)((long)puVar2 + -0x48) = unaff_x25;
      *(undefined8 *)((long)puVar2 + -0x40) = unaff_x24;
      *(undefined8 *)((long)puVar2 + -0x38) = unaff_x23;
      *(undefined8 *)((long)puVar2 + -0x30) = uVar17;
      *(long *)((long)puVar2 + -0x28) = lVar7;
      *(long **)((long)puVar2 + -0x20) = plVar6;
      *(long **)((long)puVar2 + -0x18) = plVar16;
      *(undefined8 ********)((long)puVar2 + -0x10) = pppppppuVar21;
      *(undefined **)((long)puVar2 + -8) = puVar22;
      *(long *)((long)puVar2 + -0x58) = lVar9;
      lVar7 = *(long *)(lVar9 + 0x68);
      if (lVar7 == 0) {
        puVar20 = (undefined1 *)((long)puVar2 + -0x58);
        lVar19 = 1;
      }
      else {
        lVar19 = *(long *)(lVar7 + 0x18);
        if (lVar19 == 0) {
          return lVar9;
        }
        puVar20 = (undefined1 *)(lVar7 + 0x20);
      }
      lVar7 = 0;
      do {
        lVar12 = *(long *)(puVar20 + lVar7 * 8);
        pcVar18 = *(code **)(lVar12 + 0x10);
        plVar16 = *(long **)(lVar12 + 0x20);
        lVar12 = *(long *)(lVar12 + 0x28);
        if (*(short *)(lVar12 + 0x48) == -1) {
          func_0x00f78ad8(lVar12,uVar11);
        }
        iVar4 = func_0x00f78a4c(lVar12);
        if (iVar4 == 0) {
          if ((((plVar16 == (long *)0x0) || (*(short *)(lVar12 + 0x48) == -1)) ||
              ((*(byte *)(*plVar16 + 0x115) & 1) != 0)) || (*(long *)(lVar9 + 0x18) == 0))
          goto code_r0x02924d98;
          iVar4 = func_0x00f78a44(lVar12);
          iVar5 = func_0x00f78ec0(lVar12);
          if (iVar4 == 0) {
            uVar1 = *(ushort *)(lVar12 + 0x48);
            if (iVar5 == 0) {
              lVar12 = *plVar16 + (ulong)uVar1 * 0x10;
              auVar23 = (**(code **)(lVar12 + 0x138))(plVar16,*(undefined8 *)(lVar12 + 0x140));
              goto code_r0x02924da4;
            }
            lVar12 = func_0x00f78a48(lVar12);
            lVar13 = *plVar16;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == lVar12) {
                  puVar10 = (undefined8 *)
                            (lVar13 + (long)(int)(*piVar15 + (uint)uVar1) * 0x10 + 0x138);
                  goto code_r0x02924e68;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            puVar10 = (undefined8 *)func_0x00fac1f0(plVar16,lVar12,(ulong)uVar1);
code_r0x02924e68:
            pcVar18 = (code *)*puVar10;
            puVar10 = (undefined8 *)puVar10[1];
          }
          else {
            if (iVar5 == 0) {
              uVar17 = *(undefined8 *)(*plVar16 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar13 = *plVar16;
              uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
              if (uVar14 != 0) {
                piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                    lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x02924e40;
                  }
                  piVar15 = piVar15 + 4;
                  uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
              }
              lVar13 = func_0x00fac1f0(plVar16);
code_r0x02924e40:
              uVar17 = *(undefined8 *)(lVar13 + 8);
            }
            puVar10 = (undefined8 *)func_0x00f78acc(uVar17,lVar12);
            pcVar18 = (code *)*puVar10;
          }
          auVar23 = (*pcVar18)(plVar16,puVar10);
        }
        else if (*(char *)(lVar12 + 0x4a) == '\0') {
          auVar23 = (*pcVar18)(lVar12);
        }
        else {
code_r0x02924d98:
          auVar23 = (*pcVar18)(plVar16,lVar12);
        }
code_r0x02924da4:
        uVar11 = auVar23._8_8_;
        lVar7 = lVar7 + 1;
        if (lVar7 == lVar19) {
          return auVar23._0_8_;
        }
      } while( true );
    }
  }
  auVar23 = func_0x00f78af4();
  uStack_c0 = 0x3d1b5b0;
  uStack_b8 = 0x3d23990;
  puStack_98 = &Atlas_UI_UIAtlasButtonGroup__SetInteractable;
  uStack_b0 = uVar17;
  lStack_a8 = lVar7;
  ppppppuStack_a0 = &ppppppuStack_70;
  if ((bRam0000000003eb4dac & 1) == 0) {
    func_0x00f78a20(0x3d330a8);
    func_0x00f78a20(0x3d330b0);
    func_0x00f78a20(0x3d330b8);
    func_0x00f78a20(0x3d3c5c8);
    bRam0000000003eb4dac = 1;
  }
  uStack_d8 = 0;
  uStack_d0 = 0;
  lStack_c8 = 0;
  lVar9 = auVar23._0_8_[8];
  if (lVar9 == 0) {
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar16 = (long *)___cxa_begin_catch();
      lVar7 = *plVar16;
      ___cxa_end_catch();
      lVar9 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_d8,*auVar23._0_8_);
      if (lVar7 == 0) {
        return lVar9;
      }
      func_0x00f78ac0(lVar7,0);
    }
    lVar9 = __Unwind_Resume();
    if ((bRam0000000003eb4dad & 1) == 0) {
      func_0x00f78a20(0x3d3c5b0);
      func_0x00f78a20(0x3d1df40);
      bRam0000000003eb4dad = 1;
    }
    *(undefined1 *)(lVar9 + 0x20) = 1;
    uVar17 = _UNK_033f8730;
    *(undefined8 *)(lVar9 + 0x30) = _UNK_033f8738;
    *(undefined8 *)(lVar9 + 0x28) = uVar17;
    *(undefined1 *)(lVar9 + 0x38) = 1;
    uVar17 = func_0x00f78aec(/*System.Collections.Generic.List<UIAtlasButton>_TypeInfo*/ uRam0000000003d1df40);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar17,uRam0000000003d3c5b0);
    *(undefined8 *)(lVar9 + 0x40) = uVar17;
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return lVar9;
  }
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_d8,lVar9,uRam0000000003d3c5c8);
  while( true ) {
    uVar14 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_d8,uRam0000000003d330b0);
    if ((uVar14 & 1) == 0) {
      lVar9 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_d8,uRam0000000003d330a8);
      return lVar9;
    }
    if (lStack_c8 == 0) break;
    /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lStack_c8,auVar23._8_8_,0);
  }
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar18 = (code *)SoftwareBreakpoint(1,0x15160e0);
  (*pcVar18)();
}



// ============================================================
// RVA: 0x1515e9c | Atlas.UI.UIAtlasButtonGroup.remove_OnButtonSelectedEvent
// ============================================================

/* WARNING: Possible PIC construction at 0x01514cbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01514c5c) */
/* WARNING: Removing unreachable block (ram,0x01514c7c) */
/* WARNING: Removing unreachable block (ram,0x01514c90) */
/* WARNING: Removing unreachable block (ram,0x01514c94) */
/* WARNING: Removing unreachable block (ram,0x01514c98) */
/* WARNING: Removing unreachable block (ram,0x01514ca0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_UI_UIAtlasButtonGroup__remove_OnButtonSelectedEvent(long param_1,long *param_2)

{
  ushort uVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  int extraout_w1;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long *plVar15;
  undefined8 uVar16;
  code *pcVar17;
  undefined8 unaff_x23;
  long lVar18;
  undefined8 unaff_x24;
  undefined1 *puVar19;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 *******pppppppuVar20;
  undefined *puVar21;
  undefined1 auVar22 [16];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 ******ppppppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long *plStack_50;
  long *plStack_48;
  undefined8 ******ppppppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4da8 & 1) == 0) {
    func_0x00f78a20(0x3d1b5b0);
    bRam0000000003eb4da8 = 1;
  }
  plVar15 = (long *)(param_1 + 0x18);
  lVar8 = *plVar15;
  while ((plVar6 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar8,param_2,0), plVar6 == (long *)0x0 ||
         (*plVar6 == /*System.Action<UIAtlasButton>_TypeInfo*/ lRam0000000003d1b5b0))) {
    lVar7 = func_0x00ff0f44(plVar15,plVar6,lVar8);
    bVar3 = lVar8 == lVar7;
    lVar8 = lVar7;
    if (bVar3) {
      return lVar7;
    }
  }
  lVar7 = func_0x00f78e5c(plVar6);
  puVar2 = &uStack_60;
  uStack_60 = 0x3d1b5b0;
  puStack_38 = &Atlas_UI_UIAtlasButtonGroup__OnEnable;
  lStack_58 = lVar8;
  plStack_50 = plVar15;
  plStack_48 = param_2;
  ppppppuStack_40 = (undefined8 ******)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4daa & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4daa = 1;
  }
  uVar16 = *(undefined8 *)(lVar7 + 0x48);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar8 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar16,0,0);
  if ((int)lVar8 == 0) {
    return lVar8;
  }
  if (*(long *)(lVar7 + 0x48) != 0) {
    lVar8 = Atlas_UI_UIAtlasButton__SelectButton(*(long *)(lVar7 + 0x48),0,0,0);
    if (*(char *)(lVar7 + 0x20) == '\0') {
      return lVar8;
    }
    plVar15 = *(long **)(lVar7 + 0x48);
    if (plVar15 != (long *)0x0) {
      if ((bRam0000000003eb4d9a & 1) == 0) {
        func_0x00f78a20(0x3d23da0);
        func_0x00f78a20(0x3d754d8);
        bRam0000000003eb4d9a = 1;
      }
      lVar8 = (**(code **)(*plVar15 + 0x1c8))(plVar15,*(undefined8 *)(*plVar15 + 0x1d0));
      if (((int)lVar8 == 0) ||
         (lVar8 = (**(code **)(*plVar15 + 0x2b8))(plVar15,*(undefined8 *)(*plVar15 + 0x2c0)),
         (int)lVar8 == 0)) {
        return lVar8;
      }
      /*UnityEngine.UISystemProfilerApi$$AddMarker*/ func_0x032f6f10(/*STR('UIAtlasButton.OnPress')*/ uRam0000000003d754d8,plVar15,0);
      lVar8 = plVar15[0x2b];
      if (lVar8 == 0) {
        lVar8 = plVar15[0x2c];
        if (lVar8 == 0) {
          return 0;
        }
        puVar2 = (undefined8 *)&stack0xffffffffffffffd0;
        plVar15 = plStack_48;
        plVar6 = plStack_50;
        lVar7 = lStack_58;
        uVar16 = uStack_60;
        pppppppuVar20 = (undefined8 *******)ppppppuStack_40;
        puVar21 = puStack_38;
      }
      else {
        plVar6 = (long *)0x0;
        lVar7 = 0;
        uVar16 = 0x3eb4000;
        pppppppuVar20 = &ppppppuStack_40;
        puVar21 = (undefined *)0x1514cc0;
      }
      uVar10 = 0;
      *(undefined8 *)((long)puVar2 + -0x50) = unaff_x26;
      *(undefined8 *)((long)puVar2 + -0x48) = unaff_x25;
      *(undefined8 *)((long)puVar2 + -0x40) = unaff_x24;
      *(undefined8 *)((long)puVar2 + -0x38) = unaff_x23;
      *(undefined8 *)((long)puVar2 + -0x30) = uVar16;
      *(long *)((long)puVar2 + -0x28) = lVar7;
      *(long **)((long)puVar2 + -0x20) = plVar6;
      *(long **)((long)puVar2 + -0x18) = plVar15;
      *(undefined8 ********)((long)puVar2 + -0x10) = pppppppuVar20;
      *(undefined **)((long)puVar2 + -8) = puVar21;
      *(long *)((long)puVar2 + -0x58) = lVar8;
      lVar7 = *(long *)(lVar8 + 0x68);
      if (lVar7 == 0) {
        puVar19 = (undefined1 *)((long)puVar2 + -0x58);
        lVar18 = 1;
      }
      else {
        lVar18 = *(long *)(lVar7 + 0x18);
        if (lVar18 == 0) {
          return lVar8;
        }
        puVar19 = (undefined1 *)(lVar7 + 0x20);
      }
      lVar7 = 0;
      do {
        lVar11 = *(long *)(puVar19 + lVar7 * 8);
        pcVar17 = *(code **)(lVar11 + 0x10);
        plVar15 = *(long **)(lVar11 + 0x20);
        lVar11 = *(long *)(lVar11 + 0x28);
        if (*(short *)(lVar11 + 0x48) == -1) {
          func_0x00f78ad8(lVar11,uVar10);
        }
        iVar4 = func_0x00f78a4c(lVar11);
        if (iVar4 == 0) {
          if ((((plVar15 == (long *)0x0) || (*(short *)(lVar11 + 0x48) == -1)) ||
              ((*(byte *)(*plVar15 + 0x115) & 1) != 0)) || (*(long *)(lVar8 + 0x18) == 0))
          goto code_r0x02924d98;
          iVar4 = func_0x00f78a44(lVar11);
          iVar5 = func_0x00f78ec0(lVar11);
          if (iVar4 == 0) {
            uVar1 = *(ushort *)(lVar11 + 0x48);
            if (iVar5 == 0) {
              lVar11 = *plVar15 + (ulong)uVar1 * 0x10;
              auVar22 = (**(code **)(lVar11 + 0x138))(plVar15,*(undefined8 *)(lVar11 + 0x140));
              goto code_r0x02924da4;
            }
            lVar11 = func_0x00f78a48(lVar11);
            lVar12 = *plVar15;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar11) {
                  puVar9 = (undefined8 *)
                           (lVar12 + (long)(int)(*piVar14 + (uint)uVar1) * 0x10 + 0x138);
                  goto code_r0x02924e68;
                }
                piVar14 = piVar14 + 4;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            puVar9 = (undefined8 *)func_0x00fac1f0(plVar15,lVar11,(ulong)uVar1);
code_r0x02924e68:
            pcVar17 = (code *)*puVar9;
            puVar9 = (undefined8 *)puVar9[1];
          }
          else {
            if (iVar5 == 0) {
              uVar16 = *(undefined8 *)(*plVar15 + (ulong)*(ushort *)(lVar11 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar12 = *plVar15;
              uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)(lVar11 + 0x18)) {
                    lVar12 = lVar12 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar11 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x02924e40;
                  }
                  piVar14 = piVar14 + 4;
                  uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
              }
              lVar12 = func_0x00fac1f0(plVar15);
code_r0x02924e40:
              uVar16 = *(undefined8 *)(lVar12 + 8);
            }
            puVar9 = (undefined8 *)func_0x00f78acc(uVar16,lVar11);
            pcVar17 = (code *)*puVar9;
          }
          auVar22 = (*pcVar17)(plVar15,puVar9);
        }
        else if (*(char *)(lVar11 + 0x4a) == '\0') {
          auVar22 = (*pcVar17)(lVar11);
        }
        else {
code_r0x02924d98:
          auVar22 = (*pcVar17)(plVar15,lVar11);
        }
code_r0x02924da4:
        uVar10 = auVar22._8_8_;
        lVar7 = lVar7 + 1;
        if (lVar7 == lVar18) {
          return auVar22._0_8_;
        }
      } while( true );
    }
  }
  auVar22 = func_0x00f78af4();
  uStack_90 = 0x3d1b5b0;
  uStack_88 = 0x3d23990;
  puStack_68 = &Atlas_UI_UIAtlasButtonGroup__SetInteractable;
  uStack_80 = uVar16;
  lStack_78 = lVar7;
  ppppppuStack_70 = &ppppppuStack_40;
  if ((bRam0000000003eb4dac & 1) == 0) {
    func_0x00f78a20(0x3d330a8);
    func_0x00f78a20(0x3d330b0);
    func_0x00f78a20(0x3d330b8);
    func_0x00f78a20(0x3d3c5c8);
    bRam0000000003eb4dac = 1;
  }
  uStack_a8 = 0;
  uStack_a0 = 0;
  lStack_98 = 0;
  lVar8 = auVar22._0_8_[8];
  if (lVar8 == 0) {
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar15 = (long *)___cxa_begin_catch();
      lVar7 = *plVar15;
      ___cxa_end_catch();
      lVar8 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_a8,*auVar22._0_8_);
      if (lVar7 == 0) {
        return lVar8;
      }
      func_0x00f78ac0(lVar7,0);
    }
    lVar8 = __Unwind_Resume();
    if ((bRam0000000003eb4dad & 1) == 0) {
      func_0x00f78a20(0x3d3c5b0);
      func_0x00f78a20(0x3d1df40);
      bRam0000000003eb4dad = 1;
    }
    *(undefined1 *)(lVar8 + 0x20) = 1;
    uVar16 = _UNK_033f8730;
    *(undefined8 *)(lVar8 + 0x30) = _UNK_033f8738;
    *(undefined8 *)(lVar8 + 0x28) = uVar16;
    *(undefined1 *)(lVar8 + 0x38) = 1;
    uVar16 = func_0x00f78aec(/*System.Collections.Generic.List<UIAtlasButton>_TypeInfo*/ uRam0000000003d1df40);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar16,uRam0000000003d3c5b0);
    *(undefined8 *)(lVar8 + 0x40) = uVar16;
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return lVar8;
  }
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_a8,lVar8,uRam0000000003d3c5c8);
  while( true ) {
    uVar13 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_a8,uRam0000000003d330b0);
    if ((uVar13 & 1) == 0) {
      lVar8 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_a8,uRam0000000003d330a8);
      return lVar8;
    }
    if (lStack_98 == 0) break;
    /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lStack_98,auVar22._8_8_,0);
  }
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar17 = (code *)SoftwareBreakpoint(1,0x15160e0);
  (*pcVar17)();
}



// ============================================================
// RVA: 0x1515f3c | Atlas.UI.UIAtlasButtonGroup.OnEnable
// ============================================================

/* WARNING: Possible PIC construction at 0x01514cbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01514c5c) */
/* WARNING: Removing unreachable block (ram,0x01514c7c) */
/* WARNING: Removing unreachable block (ram,0x01514c90) */
/* WARNING: Removing unreachable block (ram,0x01514c94) */
/* WARNING: Removing unreachable block (ram,0x01514c98) */
/* WARNING: Removing unreachable block (ram,0x01514ca0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_UI_UIAtlasButtonGroup__OnEnable(long param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  int extraout_w1;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar12;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  code *pcVar13;
  undefined8 unaff_x23;
  long lVar14;
  undefined8 unaff_x24;
  undefined1 *puVar15;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar16 [16];
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  if ((bRam0000000003eb4daa & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4daa = 1;
  }
  uVar12 = *(undefined8 *)(param_1 + 0x48);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar12,0,0);
  if ((int)lVar4 == 0) {
    return lVar4;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    lVar4 = Atlas_UI_UIAtlasButton__SelectButton(*(long *)(param_1 + 0x48),0,0,0);
    if (*(char *)(param_1 + 0x20) == '\0') {
      return lVar4;
    }
    plVar5 = *(long **)(param_1 + 0x48);
    if (plVar5 != (long *)0x0) {
      puVar15 = &stack0xfffffffffffffff0;
      if ((bRam0000000003eb4d9a & 1) == 0) {
        func_0x00f78a20(0x3d23da0);
        func_0x00f78a20(0x3d754d8);
        bRam0000000003eb4d9a = 1;
      }
      lVar4 = (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
      if (((int)lVar4 == 0) ||
         (lVar4 = (**(code **)(*plVar5 + 0x2b8))(plVar5,*(undefined8 *)(*plVar5 + 0x2c0)),
         (int)lVar4 == 0)) {
        return lVar4;
      }
      /*UnityEngine.UISystemProfilerApi$$AddMarker*/ func_0x032f6f10(/*STR('UIAtlasButton.OnPress')*/ uRam0000000003d754d8,plVar5,0);
      lVar4 = plVar5[0x2b];
      if (lVar4 == 0) {
        lVar4 = plVar5[0x2c];
        if (lVar4 == 0) {
          return 0;
        }
      }
      else {
        unaff_x30 = 0x1514cc0;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
        unaff_x19 = plVar5;
        unaff_x20 = 0;
        unaff_x21 = 0;
        unaff_x22 = 0x3eb4000;
        unaff_x29 = puVar15;
      }
      uVar12 = 0;
      *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
      *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
      *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
      *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      *(long *)((long)register0x00000008 + -0x58) = lVar4;
      lVar7 = *(long *)(lVar4 + 0x68);
      if (lVar7 == 0) {
        puVar15 = (undefined1 *)((long)register0x00000008 + -0x58);
        lVar14 = 1;
      }
      else {
        lVar14 = *(long *)(lVar7 + 0x18);
        if (lVar14 == 0) {
          return lVar4;
        }
        puVar15 = (undefined1 *)(lVar7 + 0x20);
      }
      lVar7 = 0;
      do {
        lVar8 = *(long *)(puVar15 + lVar7 * 8);
        pcVar13 = *(code **)(lVar8 + 0x10);
        plVar5 = *(long **)(lVar8 + 0x20);
        lVar8 = *(long *)(lVar8 + 0x28);
        if (*(short *)(lVar8 + 0x48) == -1) {
          func_0x00f78ad8(lVar8,uVar12);
        }
        iVar2 = func_0x00f78a4c(lVar8);
        if (iVar2 == 0) {
          if ((((plVar5 == (long *)0x0) || (*(short *)(lVar8 + 0x48) == -1)) ||
              ((*(byte *)(*plVar5 + 0x115) & 1) != 0)) || (*(long *)(lVar4 + 0x18) == 0))
          goto code_r0x02924d98;
          iVar2 = func_0x00f78a44(lVar8);
          iVar3 = func_0x00f78ec0(lVar8);
          if (iVar2 == 0) {
            uVar1 = *(ushort *)(lVar8 + 0x48);
            if (iVar3 == 0) {
              lVar8 = *plVar5 + (ulong)uVar1 * 0x10;
              auVar16 = (**(code **)(lVar8 + 0x138))(plVar5,*(undefined8 *)(lVar8 + 0x140));
              goto code_r0x02924da4;
            }
            lVar8 = func_0x00f78a48(lVar8);
            lVar9 = *plVar5;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == lVar8) {
                  puVar6 = (undefined8 *)
                           (lVar9 + (long)(int)(*piVar11 + (uint)uVar1) * 0x10 + 0x138);
                  goto code_r0x02924e68;
                }
                piVar11 = piVar11 + 4;
                uVar10 = uVar10 - 1;
              } while (uVar10 != 0);
            }
            puVar6 = (undefined8 *)func_0x00fac1f0(plVar5,lVar8,(ulong)uVar1);
code_r0x02924e68:
            pcVar13 = (code *)*puVar6;
            puVar6 = (undefined8 *)puVar6[1];
          }
          else {
            if (iVar3 == 0) {
              uVar12 = *(undefined8 *)(*plVar5 + (ulong)*(ushort *)(lVar8 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar9 = *plVar5;
              uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
              if (uVar10 != 0) {
                piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *(long *)(lVar8 + 0x18)) {
                    lVar9 = lVar9 + (long)(int)(*piVar11 + (uint)*(ushort *)(lVar8 + 0x48)) * 0x10 +
                            0x138;
                    goto code_r0x02924e40;
                  }
                  piVar11 = piVar11 + 4;
                  uVar10 = uVar10 - 1;
                } while (uVar10 != 0);
              }
              lVar9 = func_0x00fac1f0(plVar5);
code_r0x02924e40:
              uVar12 = *(undefined8 *)(lVar9 + 8);
            }
            puVar6 = (undefined8 *)func_0x00f78acc(uVar12,lVar8);
            pcVar13 = (code *)*puVar6;
          }
          auVar16 = (*pcVar13)(plVar5,puVar6);
        }
        else if (*(char *)(lVar8 + 0x4a) == '\0') {
          auVar16 = (*pcVar13)(lVar8);
        }
        else {
code_r0x02924d98:
          auVar16 = (*pcVar13)(plVar5,lVar8);
        }
code_r0x02924da4:
        uVar12 = auVar16._8_8_;
        lVar7 = lVar7 + 1;
        if (lVar7 == lVar14) {
          return auVar16._0_8_;
        }
      } while( true );
    }
  }
  auVar16 = func_0x00f78af4();
  if ((bRam0000000003eb4dac & 1) == 0) {
    func_0x00f78a20(0x3d330a8);
    func_0x00f78a20(0x3d330b0);
    func_0x00f78a20(0x3d330b8);
    func_0x00f78a20(0x3d3c5c8);
    bRam0000000003eb4dac = 1;
  }
  uStack_78 = 0;
  uStack_70 = 0;
  lStack_68 = 0;
  lVar4 = auVar16._0_8_[8];
  if (lVar4 == 0) {
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar5 = (long *)___cxa_begin_catch();
      lVar7 = *plVar5;
      ___cxa_end_catch();
      lVar4 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_78,*auVar16._0_8_);
      if (lVar7 == 0) {
        return lVar4;
      }
      func_0x00f78ac0(lVar7,0);
    }
    lVar4 = __Unwind_Resume();
    if ((bRam0000000003eb4dad & 1) == 0) {
      func_0x00f78a20(0x3d3c5b0);
      func_0x00f78a20(0x3d1df40);
      bRam0000000003eb4dad = 1;
    }
    *(undefined1 *)(lVar4 + 0x20) = 1;
    uVar12 = _UNK_033f8730;
    *(undefined8 *)(lVar4 + 0x30) = _UNK_033f8738;
    *(undefined8 *)(lVar4 + 0x28) = uVar12;
    *(undefined1 *)(lVar4 + 0x38) = 1;
    uVar12 = func_0x00f78aec(/*System.Collections.Generic.List<UIAtlasButton>_TypeInfo*/ uRam0000000003d1df40);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar12,uRam0000000003d3c5b0);
    *(undefined8 *)(lVar4 + 0x40) = uVar12;
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return lVar4;
  }
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_78,lVar4,uRam0000000003d3c5c8);
  while( true ) {
    uVar10 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_78,uRam0000000003d330b0);
    if ((uVar10 & 1) == 0) {
      lVar4 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_78,uRam0000000003d330a8);
      return lVar4;
    }
    if (lStack_68 == 0) break;
    /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lStack_68,auVar16._8_8_,0);
  }
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x15160e0);
  (*pcVar13)();
}



// ============================================================
// RVA: 0x1515ffc | Atlas.UI.UIAtlasButtonGroup.SetInteractable
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_UI_UIAtlasButtonGroup__SetInteractable(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  int extraout_w1;
  long lVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000003eb4dac & 1) == 0) {
    func_0x00f78a20(0x3d330a8);
    func_0x00f78a20(0x3d330b0);
    func_0x00f78a20(0x3d330b8);
    func_0x00f78a20(0x3d3c5c8);
    bRam0000000003eb4dac = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  if (param_1[8] == 0) {
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar4 = (long *)___cxa_begin_catch();
      lVar6 = *plVar4;
      ___cxa_end_catch();
      lVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_48,*param_1);
      if (lVar6 == 0) {
        return lVar3;
      }
      func_0x00f78ac0(lVar6,0);
    }
    lVar3 = __Unwind_Resume();
    if ((bRam0000000003eb4dad & 1) == 0) {
      func_0x00f78a20(0x3d3c5b0);
      func_0x00f78a20(0x3d1df40);
      bRam0000000003eb4dad = 1;
    }
    *(undefined1 *)(lVar3 + 0x20) = 1;
    uVar5 = _UNK_033f8730;
    *(undefined8 *)(lVar3 + 0x30) = _UNK_033f8738;
    *(undefined8 *)(lVar3 + 0x28) = uVar5;
    *(undefined1 *)(lVar3 + 0x38) = 1;
    uVar5 = func_0x00f78aec(/*System.Collections.Generic.List<UIAtlasButton>_TypeInfo*/ uRam0000000003d1df40);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar5,uRam0000000003d3c5b0);
    *(undefined8 *)(lVar3 + 0x40) = uVar5;
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return lVar3;
  }
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_48,param_1[8],uRam0000000003d3c5c8);
  while( true ) {
    uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_48,uRam0000000003d330b0);
    if ((uVar2 & 1) == 0) {
      lVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_48,uRam0000000003d330a8);
      return lVar3;
    }
    if (lStack_38 == 0) break;
    /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lStack_38,param_2,0);
  }
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x15160e0);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x1516120 | Atlas.UI.UIAtlasButtonGroup..ctor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] Atlas_UI_UIAtlasButtonGroup___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb4dad & 1) == 0) {
    func_0x00f78a20(0x3d3c5b0);
    func_0x00f78a20(0x3d1df40);
    bRam0000000003eb4dad = 1;
  }
  *(undefined1 *)(param_1 + 0x20) = 1;
  uVar1 = _UNK_033f8730;
  *(undefined8 *)(param_1 + 0x30) = _UNK_033f8738;
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(undefined1 *)(param_1 + 0x38) = 1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<UIAtlasButton>_TypeInfo*/ uRam0000000003d1df40);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar1,uRam0000000003d3c5b0);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
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



