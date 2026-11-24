// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Localisation.LocaliseAlignmentBehaviour

// ============================================================
// RVA: 0x1650c20 | Core.Localisation.LocaliseAlignmentBehaviour.Awake
// ============================================================

/* WARNING: Possible PIC construction at 0x01650d20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01650d68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x018729d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872a58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872b14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872c18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872cac: Changing call to branch */

long * Core_Localisation_LocaliseAlignmentBehaviour__Awake
                 (undefined1 param_1 [16],uint param_2,long param_3)

{
  bool bVar1;
  ushort uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  ulong uVar14;
  uint *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  uint *extraout_x1;
  uint *extraout_x1_00;
  uint *puVar18;
  long lVar19;
  uint uVar20;
  undefined *puVar21;
  long lVar22;
  undefined8 uVar23;
  ulong unaff_x22;
  long lVar24;
  undefined8 unaff_x23;
  long lVar25;
  long lVar26;
  long unaff_x24;
  undefined8 unaff_x25;
  ulong uVar27;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar28;
  undefined1 *puVar29;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar30;
  uint extraout_s0;
  uint extraout_s0_00;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auStack_a1 [49];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 ******ppppppuStack_50;
  undefined *puStack_48;
  
  puVar3 = (undefined8 *)&stack0xffffffffffffffc0;
  uVar11 = 0x3d53558;
  uVar23 = 0x3d23990;
  if ((bRam0000000003eb57c8 & 1) == 0) {
    func_0x00f78a20(0x3d2a320);
    func_0x00f78a20(0x3d1b598);
    func_0x00f78a20(0x3d53490);
    func_0x00f78a20(0x3d53558);
    func_0x00f78a20(0x3d5a130);
    func_0x00f78a20(0x3d230d8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb57c8 = 1;
  }
  uVar10 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(param_3,uRam0000000003d53558);
  *(undefined8 *)(param_3 + 0x18) = uVar10;
  uVar10 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(param_3,uRam0000000003d53490);
  *(undefined8 *)(param_3 + 0x20) = uVar10;
  puVar21 = *(undefined **)(param_3 + 0x18);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(puVar21,0,0);
  lVar22 = param_3;
  if (iVar7 == 0) {
    puVar21 = *(undefined **)(param_3 + 0x20);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(puVar21,0,0);
    if (iVar7 == 0) {
      if (((*(ushort *)((long)/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8 + 0x132) >> 10 & 1) != 0) &&
         ((int)/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8[0x1c] == 0)) {
        func_0x00f78ad0();
      }
      lVar22 = *(long *)/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8[0x17];
      if (lVar22 == 0) {
        return /*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8;
      }
      uVar11 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ lRam0000000003d1b598);
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar11,param_3,uRam0000000003d5a130,uRam0000000003d2a320);
      puVar4 = &stack0xffffffffffffffd0;
      puVar29 = &stack0xfffffffffffffff0;
      uVar23 = 0x3eb5000;
      if ((bRam0000000003eb57ba & 1) == 0) {
        func_0x00f78a20(0x3d1b598);
        bRam0000000003eb57ba = 1;
      }
      plVar9 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(*(undefined8 *)(lVar22 + 0x10),uVar11,0);
      if ((plVar9 == (long *)0x0) || (*plVar9 == /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598)) {
        *(long **)(lVar22 + 0x10) = plVar9;
        return plVar9;
      }
      UNRECOVERED_JUMPTABLE = Core_Localisation_LocalisationManager__UnRegisterOnLanguageChanged;
      auVar31 = func_0x00f78e5c();
      goto code_r0x0164fbb4;
    }
    if (*(long *)(param_3 + 0x20) == 0) goto LAB_01650e00;
    *(undefined1 *)(param_3 + 0x2c) = *(undefined1 *)(*(long *)(param_3 + 0x20) + 0x62);
    puVar30 = (undefined *)0x1650d6c;
    pppppppuVar28 = (undefined8 *******)&stack0xfffffffffffffff0;
  }
  else {
    if (*(long *)(param_3 + 0x18) == 0) {
LAB_01650e00:
      puVar30 = &Core_Localisation_LocaliseAlignmentBehaviour__UpdateTextComponent;
      lVar22 = func_0x00f78af4();
    }
    else {
      uVar8 = /*TMPro.TMP_Text$$get_alignment*/ func_0x031af928(*(long *)(param_3 + 0x18),0);
      *(undefined4 *)(param_3 + 0x28) = uVar8;
      puVar30 = (undefined *)0x1650d24;
    }
    puVar3 = &uStack_70;
    uStack_70 = 0x3eb5000;
    uStack_68 = 0x3d23990;
    pppppppuVar28 = &ppppppuStack_50;
    puStack_60 = puVar21;
    lStack_58 = param_3;
    ppppppuStack_50 = (undefined8 ******)&stack0xfffffffffffffff0;
    puStack_48 = puVar30;
    if ((bRam0000000003eb57ca & 1) == 0) {
      func_0x00f78a20(0x3d230d8);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb57ca = 1;
    }
    uVar23 = *(undefined8 *)(lVar22 + 0x18);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar9 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar23,0,0);
    if (((ulong)plVar9 & 1) != 0) {
      return plVar9;
    }
    uVar23 = 0x3d230d8;
    if (((*(ushort *)((long)/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8[0x1c] == 0)) {
      func_0x00f78ad0();
    }
    lVar19 = *(long *)/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8[0x17];
    if (lVar19 == 0) {
      return /*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8;
    }
    puVar21 = (undefined *)(ulong)*(uint *)(lVar22 + 0x28);
    if (((*(ushort *)((long)/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8 + 0x132) >> 10 & 1) == 0) ||
       ((int)/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8[0x1c] != 0)) {
code_r0x01650ed4:
      if (*(char *)(lVar19 + 0x60) != '\0') {
        iVar7 = *(int *)(lVar22 + 0x28);
        if (iVar7 < 0x402) {
          if (iVar7 == 0x101) {
            puVar21 = (undefined *)0x104;
          }
          else if (iVar7 == 0x201) {
            puVar21 = (undefined *)0x204;
          }
          else if (iVar7 == 0x401) {
            puVar21 = (undefined *)0x404;
          }
        }
        else if (iVar7 == 0x801) {
          puVar21 = (undefined *)0x804;
        }
        else if (iVar7 == 0x1001) {
          puVar21 = (undefined *)0x1004;
        }
        else if (iVar7 == 0x2001) {
          puVar21 = &UNK_00002004;
        }
      }
      if (*(long *)(lVar22 + 0x18) != 0) {
        plVar9 = (long *)/*TMPro.TMP_Text$$get_alignment*/ func_0x031af928(*(long *)(lVar22 + 0x18),0);
        uVar20 = (uint)puVar21;
        if ((uint)plVar9 == uVar20) {
          return plVar9;
        }
        plVar9 = *(long **)(lVar22 + 0x18);
        if (plVar9 != (long *)0x0) {
          if ((*(uint *)((long)plVar9 + 0x264) == (uVar20 & 0xff)) &&
             (*(uint *)(plVar9 + 0x4d) == (uVar20 & 0xff00))) {
            return plVar9;
          }
          *(uint *)((long)plVar9 + 0x264) = uVar20 & 0xff;
          *(uint *)(plVar9 + 0x4d) = uVar20 & 0xff00;
          *(undefined1 *)(plVar9 + 0x6d) = 1;
                    /* WARNING: Could not recover jumptable at 0x031af978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar9 = (long *)(**(code **)(*plVar9 + 0x2f8))(plVar9,*(undefined8 *)(*plVar9 + 0x300));
          return plVar9;
        }
      }
    }
    else {
      func_0x00f78ad0();
      lVar19 = *(long *)/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8[0x17];
      if (lVar19 != 0) goto code_r0x01650ed4;
    }
    puVar30 = &Core_Localisation_LocaliseAlignmentBehaviour__UpdateHorizontalLayoutGroupComponent;
    param_3 = func_0x00f78af4();
  }
  *(undefined8 *)((long)puVar3 + -0x30) = 0x3eb5000;
  *(undefined8 *)((long)puVar3 + -0x28) = uVar23;
  *(undefined **)((long)puVar3 + -0x20) = puVar21;
  *(long *)((long)puVar3 + -0x18) = lVar22;
  *(undefined8 ********)((long)puVar3 + -0x10) = pppppppuVar28;
  *(undefined **)((long)puVar3 + -8) = puVar30;
  if ((bRam0000000003eb57cb & 1) == 0) {
    func_0x00f78a20(0x3d230d8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb57cb = 1;
  }
  uVar23 = *(undefined8 *)(param_3 + 0x20);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar9 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar23,0,0);
  if (((ulong)plVar9 & 1) != 0) {
    return plVar9;
  }
  if (((*(ushort *)((long)/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  lVar22 = *(long *)/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8[0x17];
  if (lVar22 == 0) {
    return /*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8;
  }
  if (((*(ushort *)((long)/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8 + 0x132) >> 10 & 1) == 0) ||
     ((int)/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8[0x1c] != 0)) {
code_r0x01651064:
    bVar6 = *(char *)(param_3 + 0x2c) == '\0';
    bVar1 = !bVar6;
    if (*(char *)(lVar22 + 0x60) != '\0') {
      bVar1 = bVar6;
    }
    puVar15 = (uint *)(ulong)(uint)bVar1;
    plVar9 = *(long **)(param_3 + 0x20);
    if (plVar9 != (long *)0x0) {
      if ((uint)bVar1 == (uint)(*(char *)((long)plVar9 + 0x62) != '\0')) {
        return plVar9;
      }
      *(undefined8 *)((long)puVar3 + -0x30) = *(undefined8 *)((long)puVar3 + -0x30);
      *(undefined8 *)((long)puVar3 + -0x28) = *(undefined8 *)((long)puVar3 + -0x28);
      *(undefined8 *)((long)puVar3 + -0x20) = *(undefined8 *)((long)puVar3 + -0x20);
      *(undefined8 *)((long)puVar3 + -0x18) = *(undefined8 *)((long)puVar3 + -0x18);
      *(undefined8 *)((long)puVar3 + -0x10) = *(undefined8 *)((long)puVar3 + -0x10);
      *(undefined8 *)((long)puVar3 + -8) = *(undefined8 *)((long)puVar3 + -8);
      if ((bRam0000000003ec2cbf & 1) == 0) {
        func_0x00f78a20(0x3d59d60,puVar15,0);
        bRam0000000003ec2cbf = 1;
      }
      lVar22 = (long)plVar9 + 0x62;
      auVar32._8_8_ = lVar22;
      auVar32._0_8_ = plVar9;
      *(undefined8 *)((long)puVar3 + -0x30) = *(undefined8 *)((long)puVar3 + -0x30);
      *(undefined8 *)((long)puVar3 + -0x28) = *(undefined8 *)((long)puVar3 + -0x28);
      *(undefined8 *)((long)puVar3 + -0x20) = *(undefined8 *)((long)puVar3 + -0x20);
      *(undefined8 *)((long)puVar3 + -0x18) = *(undefined8 *)((long)puVar3 + -0x18);
      *(undefined8 *)((long)puVar3 + -0x10) = *(undefined8 *)((long)puVar3 + -0x10);
      *(undefined8 *)((long)puVar3 + -8) = *(undefined8 *)((long)puVar3 + -8);
      puVar29 = (undefined1 *)((long)puVar3 + -0x10);
      *(bool *)((long)puVar3 + -0x31) = bVar1;
      lVar19 = **(long **)(lRam0000000003d59d60 + 0x30);
      lVar26 = lRam0000000003d59d60;
      if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar19);
      }
      uVar23 = func_0x00f78ae0(lVar19,(undefined1 *)((long)puVar3 + -0x31));
      puVar18 = (uint *)0x0;
      plVar12 = (long *)/*System.Boolean$$Equals*/ func_0x02940ff0(lVar22,uVar23);
      if (((ulong)plVar12 & 1) != 0) {
        return plVar12;
      }
      *(bool *)lVar22 = bVar1;
      if (plVar9 == (long *)0x0) {
        auVar32 = func_0x00f78af4();
        puVar16 = auVar32._8_8_;
        plVar9 = auVar32._0_8_;
        *(long *)((long)puVar3 + -0x70) = lVar19;
        *(undefined8 *)((long)puVar3 + -0x68) = 0x62;
        *(uint **)((long)puVar3 + -0x60) = puVar15;
        *(undefined8 *)((long)puVar3 + -0x58) = 0;
        *(undefined1 **)((long)puVar3 + -0x50) = puVar29;
        *(undefined **)((long)puVar3 + -0x48) = &UnityEngine_UI_LayoutGroup__SetProperty_int_;
        puVar29 = (undefined1 *)((long)puVar3 + -0x50);
        *(int *)((long)puVar3 + -0x74) = (int)puVar18;
        lVar19 = **(long **)(lVar26 + 0x30);
        if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar19);
        }
        uVar23 = func_0x00f78ae0(lVar19,(undefined1 *)((long)puVar3 + -0x74));
        puVar15 = (uint *)0x0;
        plVar12 = (long *)/*System.Int32$$Equals*/ func_0x02ae9af0(puVar16,uVar23);
        if (((ulong)plVar12 & 1) != 0) {
          return plVar12;
        }
        *puVar16 = (int)puVar18;
        if (plVar9 == (long *)0x0) {
          auVar32 = func_0x00f78af4();
          puVar17 = auVar32._8_8_;
          plVar9 = auVar32._0_8_;
          puVar5 = (undefined1 *)((long)puVar3 + -0xe0);
          *(long *)((long)puVar3 + -0xc0) = unaff_x24;
          *(undefined8 *)((long)puVar3 + -0xb8) = 0x3d53558;
          *(long *)((long)puVar3 + -0xb0) = lVar19;
          *(undefined4 **)((long)puVar3 + -0xa8) = puVar16;
          *(uint **)((long)puVar3 + -0xa0) = puVar18;
          *(undefined8 *)((long)puVar3 + -0x98) = 0;
          *(undefined1 **)((long)puVar3 + -0x90) = puVar29;
          *(undefined **)((long)puVar3 + -0x88) =
               &UnityEngine_UI_LayoutGroup__SetProperty_GridLayoutGroup_Corner_;
          puVar29 = (undefined1 *)((long)puVar3 + -0x90);
          *(int *)((long)puVar3 + -0xc4) = (int)puVar15;
          lVar22 = **(long **)(lVar26 + 0x30);
          if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar22);
          }
          uVar11 = func_0x00f78ae0(lVar22,(undefined1 *)((long)puVar3 + -0xc4));
          lVar19 = **(long **)(lVar26 + 0x30);
          if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar19);
          }
          *(long *)((long)puVar3 + -0xe0) = lVar19;
          *(undefined8 *)((long)puVar3 + -0xd8) = 0xffffffffffffffff;
          *(undefined4 *)((long)puVar3 + -0xd0) = *puVar17;
          lVar22 = *(long *)(lVar19 + 0x140);
          plVar12 = (long *)(**(code **)(lVar19 + 0x138))
                                      ((undefined1 *)((long)puVar3 + -0xe0),uVar11);
          if (((ulong)plVar12 & 1) != 0) {
            return plVar12;
          }
          *puVar17 = (int)puVar15;
          if (plVar9 == (long *)0x0) {
            auVar31 = func_0x00f78af4();
            plVar12 = auVar31._8_8_;
            *(long *)((long)puVar3 + -0x110) = lVar19;
            *(undefined4 **)((long)puVar3 + -0x108) = puVar17;
            *(uint **)((long)puVar3 + -0x100) = puVar15;
            *(undefined8 *)((long)puVar3 + -0xf8) = 0;
            *(undefined1 **)((long)puVar3 + -0xf0) = puVar29;
            *(undefined **)((long)puVar3 + -0xe8) =
                 &UnityEngine_UI_LayoutGroup__SetProperty_RectOffset_;
            plVar9 = (long *)*plVar12;
            if (lVar22 == 0 && plVar9 == (long *)0x0) {
              return plVar9;
            }
            lVar26 = lVar22;
            if (plVar9 != (long *)0x0) {
              lVar26 = *(long *)(*plVar9 + 0x140);
              plVar9 = (long *)(**(code **)(*plVar9 + 0x138))(plVar9,lVar22);
              if (((ulong)plVar9 & 1) != 0) {
                return plVar9;
              }
            }
            *plVar12 = lVar22;
            if (auVar31._0_8_ == 0) {
              plVar9 = (long *)func_0x00f78af4();
              puVar5 = (undefined1 *)((long)puVar3 + -0x160);
              *(undefined8 *)((long)puVar3 + -0x150) = unaff_d9;
              *(undefined8 *)((long)puVar3 + -0x148) = unaff_d8;
              *(long *)((long)puVar3 + -0x140) = lVar19;
              *(long **)((long)puVar3 + -0x138) = plVar12;
              *(long *)((long)puVar3 + -0x130) = lVar22;
              *(undefined8 *)((long)puVar3 + -0x128) = 0;
              *(undefined1 **)((long)puVar3 + -0x120) = (undefined1 *)((long)puVar3 + -0xf0);
              *(undefined **)((long)puVar3 + -0x118) =
                   &UnityEngine_UI_LayoutGroup__SetProperty_float_;
              puVar29 = (undefined1 *)((long)puVar3 + -0x120);
              *(uint *)((long)puVar3 + -0x154) = extraout_s0;
              lVar22 = **(long **)(lVar26 + 0x30);
              auVar32._8_8_ = lVar22;
              auVar32._0_8_ = plVar9;
              if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
                func_0x00fac028(lVar22);
              }
              uVar23 = func_0x00f78ae0(lVar22,(undefined1 *)((long)puVar3 + -0x154));
              lVar26 = 0;
              plVar12 = (long *)/*System.Single$$Equals*/ func_0x029ba7b0(extraout_x1,uVar23);
              if (((ulong)plVar12 & 1) != 0) {
                return plVar12;
              }
              *extraout_x1 = extraout_s0;
              if (plVar9 == (long *)0x0) {
                plVar9 = (long *)func_0x00f78af4();
                puVar5 = (undefined1 *)((long)puVar3 + -0x1b0);
                *(undefined8 *)((long)puVar3 + -0x1a0) = unaff_d9;
                *(ulong *)((long)puVar3 + -0x198) = (ulong)extraout_s0;
                *(long *)((long)puVar3 + -400) = lVar19;
                *(long *)((long)puVar3 + -0x188) = lVar22;
                *(uint **)((long)puVar3 + -0x180) = extraout_x1;
                *(undefined8 *)((long)puVar3 + -0x178) = 0;
                *(undefined1 **)((long)puVar3 + -0x170) = puVar29;
                *(undefined **)((long)puVar3 + -0x168) =
                     &UnityEngine_UI_LayoutGroup__SetProperty_Vector2_;
                puVar29 = (undefined1 *)((long)puVar3 + -0x170);
                *(uint *)((long)puVar3 + -0x1a8) = extraout_s0_00;
                *(uint *)((long)puVar3 + -0x1a4) = param_2;
                lVar22 = **(long **)(lVar26 + 0x30);
                auVar32._8_8_ = lVar22;
                auVar32._0_8_ = plVar9;
                if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
                  func_0x00fac028(lVar22);
                }
                uVar23 = func_0x00f78ae0(lVar22,(undefined1 *)((long)puVar3 + -0x1a8));
                lVar26 = 0;
                plVar12 = (long *)/*UnityEngine.Vector2$$Equals*/ func_0x0327a57c(extraout_x1_00,uVar23);
                if (((ulong)plVar12 & 1) != 0) {
                  return plVar12;
                }
                *extraout_x1_00 = extraout_s0_00;
                extraout_x1_00[1] = param_2;
                if (plVar9 == (long *)0x0) {
                  auVar31 = func_0x00f78af4();
                  plVar9 = auVar31._0_8_;
                  *(long *)((long)puVar3 + -0x1e0) = lVar19;
                  *(long *)((long)puVar3 + -0x1d8) = lVar22;
                  *(uint **)((long)puVar3 + -0x1d0) = extraout_x1_00;
                  *(undefined8 *)((long)puVar3 + -0x1c8) = 0;
                  *(undefined1 **)((long)puVar3 + -0x1c0) = puVar29;
                  *(undefined **)((long)puVar3 + -0x1b8) =
                       &
                       System_Threading_LazyInitializer__EnsureInitialized_Task_ContingentProperties_
                  ;
                  lVar22 = *plVar9;
                  func_0x00f78a30();
                  if (lVar22 != 0) {
                    return (long *)*plVar9;
                  }
                    /* WARNING: Could not recover jumptable at 0x01872d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  plVar9 = (long *)(*(code *)**(undefined8 **)(*(long *)(lVar26 + 0x30) + 0x10))
                                             (plVar9,auVar31._8_8_);
                  return plVar9;
                }
                puVar21 = &UNK_01872cb0;
                puVar15 = extraout_x1_00;
              }
              else {
                puVar21 = &UNK_01872c1c;
                puVar15 = extraout_x1;
              }
            }
            else {
              puVar29 = *(undefined1 **)((long)puVar3 + -0xf0);
              puVar21 = *(undefined **)((long)puVar3 + -0xe8);
              puVar15 = *(uint **)((long)puVar3 + -0x100);
              plVar9 = *(long **)((long)puVar3 + -0xf8);
              lVar19 = *(long *)((long)puVar3 + -0x110);
              auVar32._8_8_ = *(undefined8 *)((long)puVar3 + -0x108);
              auVar32._0_8_ = auVar31._0_8_;
            }
          }
          else {
            puVar21 = &UNK_01872b18;
            puVar5 = (undefined1 *)((long)puVar3 + -0xe0);
          }
        }
        else {
          puVar21 = &UNK_01872a5c;
          puVar5 = (undefined1 *)((long)puVar3 + -0x80);
          puVar15 = puVar18;
        }
      }
      else {
        puVar21 = &UNK_018729d4;
        puVar5 = (undefined1 *)((long)puVar3 + -0x40);
      }
      plVar12 = auVar32._0_8_;
      *(long *)(puVar5 + -0x30) = lVar19;
      *(long *)(puVar5 + -0x28) = auVar32._8_8_;
      *(uint **)(puVar5 + -0x20) = puVar15;
      *(long **)(puVar5 + -0x18) = plVar9;
      *(undefined1 **)(puVar5 + -0x10) = puVar29;
      *(undefined **)(puVar5 + -8) = puVar21;
      if ((bRam0000000003ec2d3a & 1) == 0) {
        func_0x00f78a20(0x3d20558,0);
        func_0x00f78a20(0x3d22df0);
        bRam0000000003ec2d3a = 1;
      }
      plVar9 = (long *)(**(code **)(*plVar12 + 0x1c8))(plVar12,*(undefined8 *)(*plVar12 + 0x1d0));
      if ((int)plVar9 == 0) {
        return plVar9;
      }
      if (((*(ushort *)(/*UnityEngine.UI.CanvasUpdateRegistry_TypeInfo*/ lRam0000000003d20558 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.UI.CanvasUpdateRegistry_TypeInfo*/ lRam0000000003d20558 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar14 = /*UnityEngine.UI.CanvasUpdateRegistry$$IsRebuildingLayout*/ func_0x032afad4(0);
      lVar22 = /*UnityEngine.UI.LayoutGroup$$get_rectTransform*/ func_0x032d19e4(plVar12);
      if ((uVar14 & 1) != 0) {
        lVar22 = /*UnityEngine.UI.LayoutGroup$$DelayedSetDirty*/ func_0x032d29d0(lVar22,lVar22);
        plVar9 = *(long **)(puVar5 + -0x20);
        uVar11 = *(undefined8 *)(puVar5 + -0x30);
        uVar23 = *(undefined8 *)(puVar5 + -0x28);
        *(undefined8 *)(puVar5 + -0x30) = uVar11;
        *(undefined8 *)(puVar5 + -0x28) = uVar23;
        *(long **)(puVar5 + -0x20) = plVar9;
        *(undefined8 *)(puVar5 + -0x18) = *(undefined8 *)(puVar5 + -0x18);
        *(undefined8 *)(puVar5 + -0x10) = *(undefined8 *)(puVar5 + -0x10);
        *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
        if (lVar22 == 0) {
          func_0x00f78a24(0x3d23938,0,0);
          uVar13 = func_0x00f78aec();
          uVar10 = func_0x00f78a24(0x3d7b500);
          /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar13,uVar10,0);
        }
        else {
          uVar23 = 0x3ec0000;
          if (pcRam0000000003ec01d0 == (code *)0x0) {
            pcRam0000000003ec01d0 =
                 (code *)func_0x00f789d4(
                                        "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                        );
          }
          uVar14 = (*pcRam0000000003ec01d0)(plVar12);
          if ((uVar14 & 1) != 0) {
            if (pcRam0000000003ec01e0 == (code *)0x0) {
              pcRam0000000003ec01e0 =
                   (code *)func_0x00f789d4(
                                          "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                          );
            }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            plVar9 = (long *)(*pcRam0000000003ec01e0)(plVar12,lVar22);
            return plVar9;
          }
          func_0x00f78a24(0x3d1fce8);
          uVar13 = func_0x00f78aec();
          uVar10 = func_0x00f78a24(0x3d6af80);
          /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar13,uVar10,0);
          plVar9 = plVar12;
        }
        uVar10 = func_0x00f78a24(0x3d5a8a8);
        auVar31 = func_0x00f78ac0(uVar13,uVar10);
        *(undefined8 *)(puVar5 + -0x60) = uVar11;
        *(undefined8 *)(puVar5 + -0x58) = uVar23;
        *(long **)(puVar5 + -0x50) = plVar9;
        *(undefined8 *)(puVar5 + -0x48) = uVar13;
        *(undefined1 **)(puVar5 + -0x40) = puVar5 + -0x10;
        *(undefined **)(puVar5 + -0x38) = &UnityEngine_MonoBehaviour__StartCoroutineManaged2;
        if (pcRam0000000003ec01e0 == (code *)0x0) {
          pcRam0000000003ec01e0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar9 = (long *)(*pcRam0000000003ec01e0)(auVar31._0_8_,auVar31._8_8_);
        return plVar9;
      }
      if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      *(undefined8 *)(puVar5 + -0x60) = unaff_x28;
      *(undefined8 *)(puVar5 + -0x58) = unaff_x27;
      *(undefined8 *)(puVar5 + -0x50) = unaff_x26;
      *(undefined8 *)(puVar5 + -0x48) = unaff_x25;
      *(long *)(puVar5 + -0x40) = unaff_x24;
      *(undefined8 *)(puVar5 + -0x38) = uVar11;
      *(undefined8 *)(puVar5 + -0x30) = *(undefined8 *)(puVar5 + -0x30);
      *(undefined8 *)(puVar5 + -0x28) = *(undefined8 *)(puVar5 + -0x28);
      *(undefined8 *)(puVar5 + -0x20) = *(undefined8 *)(puVar5 + -0x20);
      *(undefined8 *)(puVar5 + -0x18) = *(undefined8 *)(puVar5 + -0x18);
      *(undefined8 *)(puVar5 + -0x10) = *(undefined8 *)(puVar5 + -0x10);
      *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
      if ((bRam0000000003ec2d44 & 1) == 0) {
        func_0x00f78a20(0x3d20068);
        func_0x00f78a20(0x3d19788);
        func_0x00f78a20(0x3d22df0);
        func_0x00f78a20(0x3d398f8);
        func_0x00f78a20(0x3d39900);
        func_0x00f78a20(0x3d1d6c0);
        func_0x00f78a20(0x3d3a1c0);
        func_0x00f78a20(0x3d3a1c8);
        func_0x00f78a20(0x3d23990);
        func_0x00f78a20(0x3d24188);
        func_0x00f78a20(0x3d25458);
        bRam0000000003ec2d44 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar9 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar22,0,0);
      if (((ulong)plVar9 & 1) != 0) {
        return plVar9;
      }
      if (lVar22 == 0) {
code_r0x032d1910:
        lVar22 = func_0x00f78af4();
        return *(long **)(lVar22 + 0x18);
      }
      uVar11 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar22,0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar9 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar11,0,0);
      if (((ulong)plVar9 & 1) != 0) {
        return plVar9;
      }
      if (((*(ushort *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar19 = /*UnityEngine.UI.ListPool<RectMask2D>$$Get*/ func_0x0233df3c(uRam0000000003d398f8);
      plVar9 = (long *)/*UnityEngine.Transform$$get_parent*/ func_0x03275c98(lVar22,0);
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)0x0;
      }
      else if (*plVar9 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
        plVar9 = (long *)0x0;
      }
      *(long *)(puVar5 + -0x68) = lVar22;
code_r0x032d1694:
      do {
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar14 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(plVar9,0,0);
        if ((uVar14 & 1) != 0) break;
        if (plVar9 == (long *)0x0) goto code_r0x032d1910;
        uVar11 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(plVar9,0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar7 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar11,0,0);
        uVar11 = /*UnityEngine.UI.ILayoutGroup_var*/ uRam0000000003d19788;
        if (iVar7 != 0) break;
        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar11 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar11,0);
        /*UnityEngine.Component$$GetComponents*/ func_0x03227d78(plVar9,uVar11,lVar19,0);
        if (lVar19 == 0) goto code_r0x032d1910;
        uVar20 = *(uint *)(lVar19 + 0x18);
        uVar14 = (ulong)uVar20;
        bVar1 = 0 < (int)uVar20;
        if (0 < (int)uVar20) {
          uVar27 = 0;
          do {
            if ((uVar14 & 0xffffffff) <= uVar27) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            plVar12 = *(long **)(*(long *)(lVar19 + 0x10) + uVar27 * 8 + 0x20);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            iVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar12,0,0);
            if ((iVar7 != 0) && (plVar12 != (long *)0x0)) {
              if ((*(byte *)(/*UnityEngine.Behaviour_TypeInfo*/ lRam0000000003d20068 + 300) <= *(byte *)(*plVar12 + 300)) &&
                 ((*(long *)(*(long *)(*plVar12 + 200) +
                             (ulong)*(byte *)(/*UnityEngine.Behaviour_TypeInfo*/ lRam0000000003d20068 + 300) * 8 + -8) ==
                   /*UnityEngine.Behaviour_TypeInfo*/ lRam0000000003d20068 && (uVar14 = /*UnityEngine.Behaviour$$get_isActiveAndEnabled*/ func_0x0321a980(plVar12,0), (uVar14 & 1) != 0))
                 )) {
                *(long **)(puVar5 + -0x68) = plVar9;
                break;
              }
            }
            uVar27 = uVar27 + 1;
            uVar14 = (ulong)*(int *)(lVar19 + 0x18);
            bVar1 = (long)uVar27 < (long)uVar14;
          } while ((long)uVar27 < (long)uVar14);
        }
        plVar9 = (long *)/*UnityEngine.Transform$$get_parent*/ func_0x03275c98(plVar9,0);
        if (plVar9 != (long *)0x0) {
          if (*plVar9 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
            plVar9 = (long *)0x0;
          }
          if (!bVar1) break;
          goto code_r0x032d1694;
        }
        plVar9 = (long *)0x0;
      } while (bVar1);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar11 = *(undefined8 *)(puVar5 + -0x68);
      iVar7 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar11,lVar22,0);
      if (iVar7 != 0) {
        if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar14 = /*UnityEngine.UI.LayoutRebuilder$$ValidController*/ func_0x032d39d8(uVar11,lVar19);
        if ((uVar14 & 1) == 0) goto code_r0x032d18c0;
      }
      if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*UnityEngine.UI.LayoutRebuilder$$MarkLayoutRootForRebuild*/ func_0x032d3be8(uVar11);
code_r0x032d18c0:
      if (((*(ushort *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar22 = lRam0000000003d39900;
      uVar11 = *(undefined8 *)(puVar5 + -0x30);
      uVar23 = *(undefined8 *)(puVar5 + -0x40);
      uVar10 = *(undefined8 *)(puVar5 + -0x38);
      *(undefined8 *)(puVar5 + -0x40) = uVar23;
      *(undefined8 *)(puVar5 + -0x38) = uVar10;
      *(undefined8 *)(puVar5 + -0x30) = uVar11;
      *(undefined8 *)(puVar5 + -0x28) = *(undefined8 *)(puVar5 + -0x28);
      *(undefined8 *)(puVar5 + -0x20) = *(undefined8 *)(puVar5 + -0x20);
      *(undefined8 *)(puVar5 + -0x18) = *(undefined8 *)(puVar5 + -0x18);
      *(undefined8 *)(puVar5 + -0x10) = *(undefined8 *)(puVar5 + -0x10);
      *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
      lVar26 = *(long *)(lRam0000000003d39900 + 0x18);
      if ((*(ushort *)(lVar26 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar26);
      }
      lVar26 = *(long *)(*(long *)(lVar26 + 0xc0) + 8);
      uVar2 = *(ushort *)(lVar26 + 0x132);
      if ((uVar2 & 1) == 0) {
        func_0x00fac028(lVar26);
        uVar2 = *(ushort *)(lVar26 + 0x132);
      }
      if ((uVar2 >> 10 & 1) != 0) {
        lVar26 = *(long *)(lVar22 + 0x18);
        if ((*(ushort *)(lVar26 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar26);
        }
        lVar26 = *(long *)(*(long *)(lVar26 + 0xc0) + 8);
        if ((*(ushort *)(lVar26 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar26);
        }
        if (*(int *)(lVar26 + 0xe0) == 0) {
          lVar26 = *(long *)(lVar22 + 0x18);
          if ((*(ushort *)(lVar26 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar26);
          }
          lVar26 = *(long *)(*(long *)(lVar26 + 0xc0) + 8);
          if ((*(ushort *)(lVar26 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar26);
          }
          func_0x00f78ad0(lVar26);
        }
      }
      lVar26 = *(long *)(lVar22 + 0x18);
      if ((*(ushort *)(lVar26 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar26);
      }
      lVar26 = *(long *)(*(long *)(lVar26 + 0xc0) + 8);
      if ((*(ushort *)(lVar26 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar26);
      }
      lVar26 = **(long **)(lVar26 + 0xb8);
      if (lVar26 != 0) {
        lVar25 = *(long *)(lVar22 + 0x18);
        uVar2 = *(ushort *)(lVar25 + 0x132);
        lVar24 = lVar25;
        if ((uVar2 & 1) == 0) {
          func_0x00fac028(lVar25);
          lVar24 = *(long *)(lVar22 + 0x18);
          uVar2 = *(ushort *)(lVar24 + 0x132);
        }
        UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar25 + 0xc0) + 0x18);
        if ((uVar2 & 1) == 0) {
          *(code **)(puVar5 + -0x48) = UNRECOVERED_JUMPTABLE;
          func_0x00fac028(lVar24);
          UNRECOVERED_JUMPTABLE = *(code **)(puVar5 + -0x48);
        }
                    /* WARNING: Could not recover jumptable at 0x0233e1e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar9 = (long *)(*UNRECOVERED_JUMPTABLE)
                                   (lVar26,lVar19,*(undefined8 *)(*(long *)(lVar24 + 0xc0) + 0x18));
        return plVar9;
      }
      lVar26 = func_0x00f78af4();
      *(undefined8 *)(puVar5 + -0x90) = uVar23;
      *(undefined8 *)(puVar5 + -0x88) = uVar10;
      *(undefined8 *)(puVar5 + -0x80) = uVar11;
      *(undefined8 *)(puVar5 + -0x78) = 0;
      *(long *)(puVar5 + -0x70) = lVar22;
      *(long *)(puVar5 + -0x68) = lVar19;
      *(undefined1 **)(puVar5 + -0x60) = puVar5 + -0x10;
      *(undefined **)(puVar5 + -0x58) = &UnityEngine_UI_ListPool_object____cctor;
      lVar22 = *(long *)(lVar26 + 0x18);
      if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar22);
      }
      lVar22 = *(long *)(*(long *)(lVar22 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar22);
      }
      uVar11 = func_0x00f78aec(lVar22);
      lVar19 = *(long *)(lVar26 + 0x18);
      uVar2 = *(ushort *)(lVar19 + 0x132);
      lVar22 = lVar19;
      if ((uVar2 & 1) == 0) {
        func_0x00fac028(lVar19);
        lVar22 = *(long *)(lVar26 + 0x18);
        uVar2 = *(ushort *)(lVar22 + 0x132);
      }
      UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar19 + 0xc0) + 0x30);
      lVar19 = lVar22;
      if ((uVar2 & 1) == 0) {
        func_0x00fac028(lVar22);
        lVar19 = *(long *)(lVar26 + 0x18);
        uVar2 = *(ushort *)(lVar19 + 0x132);
      }
      uVar23 = *(undefined8 *)(*(long *)(lVar22 + 0xc0) + 0x20);
      if ((uVar2 & 1) == 0) {
        func_0x00fac028(lVar19);
      }
      (*UNRECOVERED_JUMPTABLE)(uVar11,0,uVar23,*(undefined8 *)(*(long *)(lVar19 + 0xc0) + 0x30));
      lVar22 = *(long *)(lVar26 + 0x18);
      if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar22);
      }
      lVar22 = *(long *)(*(long *)(lVar22 + 0xc0) + 0x38);
      if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar22);
      }
      uVar23 = func_0x00f78aec(lVar22);
      lVar19 = *(long *)(lVar26 + 0x18);
      uVar2 = *(ushort *)(lVar19 + 0x132);
      lVar22 = lVar19;
      if ((uVar2 & 1) == 0) {
        func_0x00fac028(lVar19);
        lVar22 = *(long *)(lVar26 + 0x18);
        uVar2 = *(ushort *)(lVar22 + 0x132);
      }
      UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar19 + 0xc0) + 0x40);
      if ((uVar2 & 1) == 0) {
        func_0x00fac028(lVar22);
      }
      plVar9 = (long *)(*UNRECOVERED_JUMPTABLE)
                                 (uVar23,0,uVar11,*(undefined8 *)(*(long *)(lVar22 + 0xc0) + 0x40));
      lVar22 = *(long *)(lVar26 + 0x18);
      if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
        plVar9 = (long *)func_0x00fac028(lVar22);
      }
      lVar22 = *(long *)(*(long *)(lVar22 + 0xc0) + 8);
      if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
        plVar9 = (long *)func_0x00fac028(lVar22);
      }
      **(undefined8 **)(lVar22 + 0xb8) = uVar23;
      return plVar9;
    }
  }
  else {
    func_0x00f78ad0();
    lVar22 = *(long *)/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8[0x17];
    if (lVar22 != 0) goto code_r0x01651064;
  }
  uVar11 = func_0x00f78af4();
  *(long *)((long)puVar3 + -0x70) = unaff_x24;
  *(undefined8 *)((long)puVar3 + -0x68) = 0x3d53558;
  *(undefined8 *)((long)puVar3 + -0x60) = 0x3eb5000;
  *(undefined8 *)((long)puVar3 + -0x58) = 0x3d23990;
  *(undefined8 *)((long)puVar3 + -0x50) = 0x3d230d8;
  *(long *)((long)puVar3 + -0x48) = param_3;
  *(undefined1 **)((long)puVar3 + -0x40) = (undefined1 *)((long)puVar3 + -0x10);
  *(undefined **)((long)puVar3 + -0x38) = &Core_Localisation_LocaliseAlignmentBehaviour__OnDestroy;
  if ((bRam0000000003eb57c9 & 1) == 0) {
    func_0x00f78a20(0x3d2a320);
    func_0x00f78a20(0x3d1b598);
    func_0x00f78a20(0x3d5a130);
    func_0x00f78a20(0x3d230d8);
    bRam0000000003eb57c9 = 1;
  }
  if (((*(ushort *)((long)/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  lVar22 = *(long *)/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8[0x17];
  if (lVar22 == 0) {
    return /*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8;
  }
  uVar23 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ lRam0000000003d1b598);
  auVar31._8_8_ = uVar23;
  auVar31._0_8_ = lVar22;
  /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar23,uVar11,uRam0000000003d5a130,uRam0000000003d2a320);
  puVar29 = *(undefined1 **)((long)puVar3 + -0x40);
  UNRECOVERED_JUMPTABLE = *(code **)((long)puVar3 + -0x38);
  uVar11 = *(undefined8 *)((long)puVar3 + -0x50);
  lVar22 = *(long *)((long)puVar3 + -0x48);
  unaff_x22 = *(ulong *)((long)puVar3 + -0x60);
  uVar23 = *(undefined8 *)((long)puVar3 + -0x58);
  puVar4 = (undefined1 *)((long)puVar3 + -0x30);
  unaff_x24 = *(long *)((long)puVar3 + -0x70);
  unaff_x23 = *(undefined8 *)((long)puVar3 + -0x68);
code_r0x0164fbb4:
  lVar19 = auVar31._0_8_;
  *(ulong *)(puVar4 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar4 + -0x28) = uVar23;
  *(undefined8 *)(puVar4 + -0x20) = uVar11;
  *(long *)(puVar4 + -0x18) = lVar22;
  *(undefined1 **)(puVar4 + -0x10) = puVar29;
  *(code **)(puVar4 + -8) = UNRECOVERED_JUMPTABLE;
  if ((bRam0000000003eb57bb & 1) == 0) {
    func_0x00f78a20(0x3d1b598);
    bRam0000000003eb57bb = 1;
  }
  plVar9 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(*(undefined8 *)(lVar19 + 0x10),auVar31._8_8_,0);
  if ((plVar9 == (long *)0x0) || (*plVar9 == /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598)) {
    *(long **)(lVar19 + 0x10) = plVar9;
    return plVar9;
  }
  auVar32 = func_0x00f78e5c();
  lVar22 = auVar32._0_8_;
  *(long *)(puVar4 + -0x70) = unaff_x24;
  *(undefined8 *)(puVar4 + -0x68) = unaff_x23;
  *(ulong *)(puVar4 + -0x60) = unaff_x22;
  *(undefined8 *)(puVar4 + -0x58) = 0x3eb5000;
  *(long *)(puVar4 + -0x50) = auVar31._8_8_;
  *(long *)(puVar4 + -0x48) = lVar19;
  *(undefined1 **)(puVar4 + -0x40) = puVar4 + -0x10;
  *(code **)(puVar4 + -0x38) = Core_Localisation_LocalisationManager__GetFontReplacement;
  uVar11 = 0x3eb5000;
  if ((bRam0000000003eb57bc & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb57bc = 1;
  }
  lVar19 = *(long *)(lVar22 + 0x38);
  if (lVar19 != 0) {
    unaff_x22 = 0;
    unaff_x23 = 0x3d23990;
    unaff_x24 = 0x20;
    do {
      lVar19 = *(long *)(lVar19 + 0x20);
      if (lVar19 == 0) break;
      if ((long)(int)*(uint *)(lVar19 + 0x18) <= (long)unaff_x22) {
        return auVar32._8_8_;
      }
      if (*(uint *)(lVar19 + 0x18) <= unaff_x22) goto LAB_0164fd18;
      uVar11 = *(undefined8 *)(lVar19 + unaff_x24);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar7 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar11,auVar32._8_8_,0);
      if (iVar7 != 0) goto LAB_0164fce4;
      unaff_x22 = unaff_x22 + 1;
      lVar19 = *(long *)(lVar22 + 0x38);
      unaff_x24 = unaff_x24 + 0x10;
    } while (lVar19 != 0);
  }
  do {
    func_0x00f78af4();
LAB_0164fce4:
    lVar19 = *(long *)(lVar22 + 0x40);
  } while (lVar19 == 0);
  if ((uint)unaff_x22 < *(uint *)(lVar19 + 0x18)) {
    return *(long **)(lVar19 + unaff_x22 * 8 + 0x20);
  }
LAB_0164fd18:
  uVar23 = func_0x00f78b24();
  auVar31 = func_0x00f78ac0(uVar23,0);
  lVar22 = auVar31._0_8_;
  *(long *)(puVar4 + -0xb0) = unaff_x24;
  *(undefined8 *)(puVar4 + -0xa8) = unaff_x23;
  *(ulong *)(puVar4 + -0xa0) = unaff_x22;
  *(undefined8 *)(puVar4 + -0x98) = uVar11;
  *(undefined1 (*) [16])(puVar4 + -0x90) = auVar32;
  *(undefined1 **)(puVar4 + -0x80) = puVar4 + -0x40;
  *(code **)(puVar4 + -0x78) = Core_Localisation_LocalisationManager__GetMaterialReplacement;
  if ((bRam0000000003eb57bd & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb57bd = 1;
  }
  lVar19 = *(long *)(lVar22 + 0x38);
  if (lVar19 != 0) {
    unaff_x22 = 0;
    lVar26 = 0x20;
    do {
      lVar19 = *(long *)(lVar19 + 0x28);
      if (lVar19 == 0) break;
      if ((long)(int)*(uint *)(lVar19 + 0x18) <= (long)unaff_x22) {
        return auVar31._8_8_;
      }
      if (*(uint *)(lVar19 + 0x18) <= unaff_x22) goto LAB_0164fe0c;
      uVar11 = *(undefined8 *)(lVar19 + lVar26);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar7 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar11,auVar31._8_8_,0);
      if (iVar7 != 0) goto LAB_0164fdd8;
      unaff_x22 = unaff_x22 + 1;
      lVar19 = *(long *)(lVar22 + 0x38);
      lVar26 = lVar26 + 0x10;
    } while (lVar19 != 0);
  }
  do {
    func_0x00f78af4();
LAB_0164fdd8:
    lVar19 = *(long *)(lVar22 + 0x48);
  } while (lVar19 == 0);
  if ((uint)unaff_x22 < *(uint *)(lVar19 + 0x18)) {
    return *(long **)(lVar19 + unaff_x22 * 8 + 0x20);
  }
LAB_0164fe0c:
  uVar11 = func_0x00f78b24();
  plVar9 = (long *)func_0x00f78ac0(uVar11,0);
  return plVar9;
}



// ============================================================
// RVA: 0x1650e04 | Core.Localisation.LocaliseAlignmentBehaviour.UpdateTextComponent
// ============================================================

/* WARNING: Possible PIC construction at 0x018729d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872a58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872b14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872c18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872cac: Changing call to branch */

long * Core_Localisation_LocaliseAlignmentBehaviour__UpdateTextComponent
                 (undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  bool bVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined8 ******ppppppuVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined4 *extraout_x1;
  undefined4 *extraout_x1_00;
  undefined4 *puVar12;
  undefined4 *puVar13;
  code *UNRECOVERED_JUMPTABLE;
  long lVar14;
  long lVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong unaff_x22;
  long lVar19;
  long lVar20;
  undefined8 unaff_x23;
  long lVar21;
  long unaff_x24;
  undefined8 unaff_x25;
  ulong uVar22;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar23;
  undefined *puVar24;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auStack_1e0 [8];
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined8 ******ppppppuStack_1a0;
  undefined *puStack_198;
  undefined1 auStack_190 [12];
  undefined4 uStack_184;
  undefined8 ******ppppppuStack_150;
  undefined *puStack_148;
  long lStack_140;
  undefined4 *puStack_138;
  undefined4 *puStack_130;
  long *plStack_128;
  undefined8 ******ppppppuStack_120;
  undefined *puStack_118;
  long lStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  undefined8 ******ppppppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 ******ppppppuStack_80;
  undefined *puStack_78;
  undefined8 *****pppppuStack_70;
  undefined8 uStack_68;
  undefined8 *****pppppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb57ca & 1) == 0) {
    func_0x00f78a20(0x3d230d8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb57ca = 1;
  }
  uVar17 = *(undefined8 *)(param_3 + 0x18);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar7 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar17,0,0);
  if (((ulong)plVar7 & 1) != 0) {
    return plVar7;
  }
  if (((*(ushort *)((long)/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  lVar14 = *(long *)/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8[0x17];
  if (lVar14 == 0) {
    return /*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8;
  }
  uVar16 = *(uint *)(param_3 + 0x28);
  if (((*(ushort *)((long)/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8 + 0x132) >> 10 & 1) == 0) ||
     ((int)/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8[0x1c] != 0)) {
LAB_01650ed4:
    if (*(char *)(lVar14 + 0x60) != '\0') {
      iVar6 = *(int *)(param_3 + 0x28);
      if (iVar6 < 0x402) {
        if (iVar6 == 0x101) {
          uVar16 = 0x104;
        }
        else if (iVar6 == 0x201) {
          uVar16 = 0x204;
        }
        else if (iVar6 == 0x401) {
          uVar16 = 0x404;
        }
      }
      else if (iVar6 == 0x801) {
        uVar16 = 0x804;
      }
      else if (iVar6 == 0x1001) {
        uVar16 = 0x1004;
      }
      else if (iVar6 == 0x2001) {
        uVar16 = 0x2004;
      }
    }
    if (*(long *)(param_3 + 0x18) != 0) {
      plVar7 = (long *)/*TMPro.TMP_Text$$get_alignment*/ func_0x031af928(*(long *)(param_3 + 0x18),0);
      if ((uint)plVar7 == uVar16) {
        return plVar7;
      }
      plVar7 = *(long **)(param_3 + 0x18);
      if (plVar7 != (long *)0x0) {
        if ((*(uint *)((long)plVar7 + 0x264) == (uVar16 & 0xff)) &&
           (*(uint *)(plVar7 + 0x4d) == (uVar16 & 0xff00))) {
          return plVar7;
        }
        *(uint *)((long)plVar7 + 0x264) = uVar16 & 0xff;
        *(uint *)(plVar7 + 0x4d) = uVar16 & 0xff00;
        *(undefined1 *)(plVar7 + 0x6d) = 1;
                    /* WARNING: Could not recover jumptable at 0x031af978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar7 = (long *)(**(code **)(*plVar7 + 0x2f8))(plVar7,*(undefined8 *)(*plVar7 + 0x300));
        return plVar7;
      }
    }
  }
  else {
    func_0x00f78ad0();
    lVar14 = *(long *)/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8[0x17];
    if (lVar14 != 0) goto LAB_01650ed4;
  }
  lVar14 = func_0x00f78af4();
  puStack_38 = &Core_Localisation_LocaliseAlignmentBehaviour__UpdateHorizontalLayoutGroupComponent;
  pppppuStack_40 = (undefined8 *****)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb57cb & 1) == 0) {
    func_0x00f78a20(0x3d230d8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb57cb = 1;
  }
  uVar17 = *(undefined8 *)(lVar14 + 0x20);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar7 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar17,0,0);
  if (((ulong)plVar7 & 1) != 0) {
    return plVar7;
  }
  if (((*(ushort *)((long)/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  lVar15 = *(long *)/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8[0x17];
  if (lVar15 == 0) {
    return /*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8;
  }
  if (((*(ushort *)((long)/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8[0x1c] == 0)) {
    func_0x00f78ad0();
    lVar15 = *(long *)/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8[0x17];
    if (lVar15 == 0) goto code_r0x016510c0;
  }
  bVar5 = *(char *)(lVar14 + 0x2c) == '\0';
  bVar1 = !bVar5;
  if (*(char *)(lVar15 + 0x60) != '\0') {
    bVar1 = bVar5;
  }
  uVar16 = (uint)bVar1;
  plVar7 = *(long **)(lVar14 + 0x20);
  if (plVar7 == (long *)0x0) {
code_r0x016510c0:
    uVar17 = func_0x00f78af4();
    ppppppuStack_80 = (undefined8 ******)0x3d230d8;
    uStack_68 = &Core_Localisation_LocaliseAlignmentBehaviour__OnDestroy;
    puStack_78 = (undefined *)lVar14;
    pppppuStack_70 = &pppppuStack_40;
    if ((bRam0000000003eb57c9 & 1) == 0) {
      func_0x00f78a20(0x3d2a320);
      func_0x00f78a20(0x3d1b598);
      func_0x00f78a20(0x3d5a130);
      func_0x00f78a20(0x3d230d8);
      bRam0000000003eb57c9 = 1;
    }
    if (((*(ushort *)((long)/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8[0x1c] == 0)) {
      func_0x00f78ad0();
    }
    lVar14 = *(long *)/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8[0x17];
    if (lVar14 == 0) {
      return /*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8;
    }
    uVar18 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ lRam0000000003d1b598);
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar18,uVar17,uRam0000000003d5a130,uRam0000000003d2a320);
    if ((bRam0000000003eb57bb & 1) == 0) {
      func_0x00f78a20(0x3d1b598);
      bRam0000000003eb57bb = 1;
    }
    plVar7 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(*(undefined8 *)(lVar14 + 0x10),uVar18,0);
    if ((plVar7 == (long *)0x0) || (*plVar7 == /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598)) {
      *(long **)(lVar14 + 0x10) = plVar7;
      return plVar7;
    }
    auVar25 = func_0x00f78e5c();
    lVar15 = auVar25._0_8_;
    puStack_b8 = (undefined *)0x3eb5000;
    uVar17 = 0x3eb5000;
    uStack_b0 = uVar18;
    uStack_a8 = lVar14;
    if ((bRam0000000003eb57bc & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb57bc = 1;
    }
    lVar14 = *(long *)(lVar15 + 0x38);
    if (lVar14 != 0) {
      unaff_x22 = 0;
      uVar18 = 0x3d23990;
      unaff_x24 = 0x20;
      do {
        lVar14 = *(long *)(lVar14 + 0x20);
        unaff_x23 = uVar18;
        if (lVar14 == 0) break;
        if ((long)(int)*(uint *)(lVar14 + 0x18) <= (long)unaff_x22) {
          return auVar25._8_8_;
        }
        if (*(uint *)(lVar14 + 0x18) <= unaff_x22) goto LAB_0164fd18;
        uVar17 = *(undefined8 *)(lVar14 + unaff_x24);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar6 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar17,auVar25._8_8_,0);
        if (iVar6 != 0) goto LAB_0164fce4;
        unaff_x22 = unaff_x22 + 1;
        lVar14 = *(long *)(lVar15 + 0x38);
        unaff_x24 = unaff_x24 + 0x10;
        unaff_x23 = 0x3d23990;
      } while (lVar14 != 0);
    }
    do {
      func_0x00f78af4();
LAB_0164fce4:
      lVar14 = *(long *)(lVar15 + 0x40);
    } while (lVar14 == 0);
    if ((uint)unaff_x22 < *(uint *)(lVar14 + 0x18)) {
      return *(long **)(lVar14 + unaff_x22 * 8 + 0x20);
    }
LAB_0164fd18:
    uVar18 = func_0x00f78b24();
    auVar25 = func_0x00f78ac0(uVar18,0);
    lVar14 = auVar25._0_8_;
    lStack_110 = unaff_x24;
    uStack_108 = unaff_x23;
    uStack_100 = unaff_x22;
    uStack_f8 = uVar17;
    if ((bRam0000000003eb57bd & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb57bd = 1;
    }
    lVar15 = *(long *)(lVar14 + 0x38);
    if (lVar15 != 0) {
      unaff_x22 = 0;
      lVar19 = 0x20;
      do {
        lVar15 = *(long *)(lVar15 + 0x28);
        if (lVar15 == 0) break;
        if ((long)(int)*(uint *)(lVar15 + 0x18) <= (long)unaff_x22) {
          return auVar25._8_8_;
        }
        if (*(uint *)(lVar15 + 0x18) <= unaff_x22) goto LAB_0164fe0c;
        uVar17 = *(undefined8 *)(lVar15 + lVar19);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar6 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar17,auVar25._8_8_,0);
        if (iVar6 != 0) goto LAB_0164fdd8;
        unaff_x22 = unaff_x22 + 1;
        lVar15 = *(long *)(lVar14 + 0x38);
        lVar19 = lVar19 + 0x10;
      } while (lVar15 != 0);
    }
    do {
      func_0x00f78af4();
LAB_0164fdd8:
      lVar15 = *(long *)(lVar14 + 0x48);
    } while (lVar15 == 0);
    if ((uint)unaff_x22 < *(uint *)(lVar15 + 0x18)) {
      return *(long **)(lVar15 + unaff_x22 * 8 + 0x20);
    }
LAB_0164fe0c:
    uVar17 = func_0x00f78b24();
    plVar7 = (long *)func_0x00f78ac0(uVar17,0);
    return plVar7;
  }
  if (uVar16 == (*(char *)((long)plVar7 + 0x62) != '\0')) {
    return plVar7;
  }
  if ((bRam0000000003ec2cbf & 1) == 0) {
    func_0x00f78a20(0x3d59d60,(undefined4 *)(ulong)uVar16,0);
    bRam0000000003ec2cbf = 1;
  }
  lVar14 = (long)plVar7 + 0x62;
  auVar25._8_8_ = lVar14;
  auVar25._0_8_ = plVar7;
  uStack_68 = (undefined *)CONCAT17(bVar1,(undefined7)uStack_68);
  lVar19 = **(long **)(lRam0000000003d59d60 + 0x30);
  lVar15 = lRam0000000003d59d60;
  if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar19);
  }
  uVar17 = func_0x00f78ae0(lVar19,(long)&uStack_68 + 7);
  puVar12 = (undefined4 *)0x0;
  plVar8 = (long *)/*System.Boolean$$Equals*/ func_0x02940ff0(lVar14,uVar17);
  auVar3._8_8_ = puStack_138;
  auVar3._0_8_ = plStack_128;
  if (((ulong)plVar8 & 1) != 0) {
    return plVar8;
  }
  *(bool *)lVar14 = bVar1;
  if (plVar7 == (long *)0x0) {
    auVar25 = func_0x00f78af4();
    puStack_78 = &UnityEngine_UI_LayoutGroup__SetProperty_int_;
    uStack_a8 = CONCAT44((int)puVar12,(undefined4)uStack_a8);
    lVar19 = **(long **)(lVar15 + 0x30);
    ppppppuStack_80 = &pppppuStack_40;
    if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar19);
    }
    uVar17 = func_0x00f78ae0(lVar19,(long)&uStack_a8 + 4);
    puVar13 = (undefined4 *)0x0;
    plVar7 = (long *)/*System.Int32$$Equals*/ func_0x02ae9af0(auVar25._8_8_,uVar17);
    auVar3._8_8_ = puStack_138;
    auVar3._0_8_ = plStack_128;
    if (((ulong)plVar7 & 1) != 0) {
      return plVar7;
    }
    *auVar25._8_8_ = (int)puVar12;
    if (auVar25._0_8_ == (long *)0x0) {
      auVar25 = func_0x00f78af4();
      puVar12 = auVar25._8_8_;
      plVar7 = auVar25._0_8_;
      ppppppuVar4 = (undefined8 ******)&lStack_110;
      puStack_b8 = &UnityEngine_UI_LayoutGroup__SetProperty_GridLayoutGroup_Corner_;
      uStack_f8 = CONCAT44((int)puVar13,(undefined4)uStack_f8);
      lVar14 = **(long **)(lVar15 + 0x30);
      ppppppuStack_c0 = &ppppppuStack_80;
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      unaff_x23 = func_0x00f78ae0(lVar14,(long)&uStack_f8 + 4);
      lVar14 = **(long **)(lVar15 + 0x30);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      uStack_108 = 0xffffffffffffffff;
      uStack_100 = CONCAT44(uStack_100._4_4_,*puVar12);
      lVar15 = *(long *)(lVar14 + 0x140);
      lStack_110 = lVar14;
      plVar8 = (long *)(**(code **)(lVar14 + 0x138))(&lStack_110,unaff_x23);
      auVar3._8_8_ = puStack_138;
      auVar3._0_8_ = plStack_128;
      if (((ulong)plVar8 & 1) != 0) {
        return plVar8;
      }
      *puVar12 = (int)puVar13;
      if (plVar7 == (long *)0x0) {
        auVar26 = func_0x00f78af4();
        puStack_118 = &UnityEngine_UI_LayoutGroup__SetProperty_RectOffset_;
        plVar8 = (long *)*auVar26._8_8_;
        if (lVar15 == 0 && plVar8 == (long *)0x0) {
          return plVar8;
        }
        lVar20 = lVar15;
        lStack_140 = lVar14;
        puStack_130 = puVar13;
        ppppppuStack_120 = &ppppppuStack_c0;
        auVar3 = auVar25;
        if (plVar8 != (long *)0x0) {
          lVar20 = *(long *)(*plVar8 + 0x140);
          puStack_138 = puVar12;
          plStack_128 = plVar7;
          plVar7 = (long *)(**(code **)(*plVar8 + 0x138))(plVar8,lVar15);
          auVar3._8_8_ = puStack_138;
          auVar3._0_8_ = plStack_128;
          if (((ulong)plVar7 & 1) != 0) {
            return plVar7;
          }
        }
        puStack_138 = auVar3._8_8_;
        plStack_128 = auVar3._0_8_;
        auVar25._8_8_ = puStack_138;
        auVar25._0_8_ = auVar26._0_8_;
        *auVar26._8_8_ = lVar15;
        plVar7 = plStack_128;
        puVar13 = puStack_130;
        lVar19 = lStack_140;
        pppppppuVar23 = (undefined8 *******)ppppppuStack_120;
        puVar24 = puStack_118;
        if (auVar26._0_8_ == 0) {
          plVar7 = (long *)func_0x00f78af4();
          ppppppuVar4 = (undefined8 ******)auStack_190;
          puStack_148 = &UnityEngine_UI_LayoutGroup__SetProperty_float_;
          lVar15 = **(long **)(lVar20 + 0x30);
          auVar25._8_8_ = lVar15;
          auVar25._0_8_ = plVar7;
          uStack_184 = extraout_s0;
          ppppppuStack_150 = &ppppppuStack_120;
          if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar15);
          }
          uVar17 = func_0x00f78ae0(lVar15,&uStack_184);
          lVar15 = 0;
          plVar8 = (long *)/*System.Single$$Equals*/ func_0x029ba7b0(extraout_x1,uVar17);
          auVar3._8_8_ = puStack_138;
          auVar3._0_8_ = plStack_128;
          if (((ulong)plVar8 & 1) != 0) {
            return plVar8;
          }
          *extraout_x1 = extraout_s0;
          if (plVar7 == (long *)0x0) {
            plVar7 = (long *)func_0x00f78af4();
            ppppppuVar4 = (undefined8 ******)auStack_1e0;
            puStack_198 = &UnityEngine_UI_LayoutGroup__SetProperty_Vector2_;
            lVar15 = **(long **)(lVar15 + 0x30);
            auVar25._8_8_ = lVar15;
            auVar25._0_8_ = plVar7;
            uStack_1d8 = extraout_s0_00;
            uStack_1d4 = param_2;
            ppppppuStack_1a0 = &ppppppuStack_150;
            if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar15);
            }
            uVar17 = func_0x00f78ae0(lVar15,&uStack_1d8);
            lVar15 = 0;
            plVar8 = (long *)/*UnityEngine.Vector2$$Equals*/ func_0x0327a57c(extraout_x1_00,uVar17);
            auVar3._8_8_ = puStack_138;
            auVar3._0_8_ = plStack_128;
            if (((ulong)plVar8 & 1) != 0) {
              return plVar8;
            }
            *extraout_x1_00 = extraout_s0_00;
            extraout_x1_00[1] = param_2;
            if (plVar7 == (long *)0x0) {
              auVar25 = func_0x00f78af4();
              plVar7 = auVar25._0_8_;
              lVar14 = *plVar7;
              func_0x00f78a30();
              if (lVar14 != 0) {
                return (long *)*plVar7;
              }
                    /* WARNING: Could not recover jumptable at 0x01872d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              plVar7 = (long *)(*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x10))
                                         (plVar7,auVar25._8_8_);
              return plVar7;
            }
            puVar13 = extraout_x1_00;
            lVar19 = lVar14;
            pppppppuVar23 = &ppppppuStack_1a0;
            puVar24 = &UNK_01872cb0;
          }
          else {
            puVar13 = extraout_x1;
            lVar19 = lVar14;
            pppppppuVar23 = &ppppppuStack_150;
            puVar24 = &UNK_01872c1c;
          }
        }
      }
      else {
        ppppppuVar4 = (undefined8 ******)&lStack_110;
        lVar19 = lVar14;
        pppppppuVar23 = &ppppppuStack_c0;
        puVar24 = &UNK_01872b18;
      }
    }
    else {
      ppppppuVar4 = (undefined8 ******)&uStack_b0;
      plVar7 = auVar25._0_8_;
      puVar13 = puVar12;
      pppppppuVar23 = &ppppppuStack_80;
      puVar24 = &UNK_01872a5c;
    }
  }
  else {
    ppppppuVar4 = &pppppuStack_70;
    puVar13 = (undefined4 *)(ulong)uVar16;
    pppppppuVar23 = (undefined8 *******)&pppppuStack_40;
    puVar24 = &UNK_018729d4;
  }
  puStack_138 = auVar3._8_8_;
  plStack_128 = auVar3._0_8_;
  plVar8 = auVar25._0_8_;
  *(long *)((long)ppppppuVar4 + -0x30) = lVar19;
  *(long *)((long)ppppppuVar4 + -0x28) = auVar25._8_8_;
  *(undefined4 **)((long)ppppppuVar4 + -0x20) = puVar13;
  *(long **)((long)ppppppuVar4 + -0x18) = plVar7;
  *(undefined8 ********)((long)ppppppuVar4 + -0x10) = pppppppuVar23;
  *(undefined **)((long)ppppppuVar4 + -8) = puVar24;
  if ((bRam0000000003ec2d3a & 1) == 0) {
    func_0x00f78a20(0x3d20558,0);
    func_0x00f78a20(0x3d22df0);
    bRam0000000003ec2d3a = 1;
  }
  plVar7 = (long *)(**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
  if ((int)plVar7 == 0) {
    return plVar7;
  }
  if (((*(ushort *)(/*UnityEngine.UI.CanvasUpdateRegistry_TypeInfo*/ lRam0000000003d20558 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.UI.CanvasUpdateRegistry_TypeInfo*/ lRam0000000003d20558 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar11 = /*UnityEngine.UI.CanvasUpdateRegistry$$IsRebuildingLayout*/ func_0x032afad4(0);
  lVar14 = /*UnityEngine.UI.LayoutGroup$$get_rectTransform*/ func_0x032d19e4(plVar8);
  if ((uVar11 & 1) != 0) {
    lVar14 = /*UnityEngine.UI.LayoutGroup$$DelayedSetDirty*/ func_0x032d29d0(lVar14,lVar14);
    plVar7 = *(long **)((long)ppppppuVar4 + -0x20);
    uVar17 = *(undefined8 *)((long)ppppppuVar4 + -0x30);
    uVar18 = *(undefined8 *)((long)ppppppuVar4 + -0x28);
    *(undefined8 *)((long)ppppppuVar4 + -0x30) = uVar17;
    *(undefined8 *)((long)ppppppuVar4 + -0x28) = uVar18;
    *(long **)((long)ppppppuVar4 + -0x20) = plVar7;
    *(undefined8 *)((long)ppppppuVar4 + -0x18) = *(undefined8 *)((long)ppppppuVar4 + -0x18);
    *(undefined8 *)((long)ppppppuVar4 + -0x10) = *(undefined8 *)((long)ppppppuVar4 + -0x10);
    *(undefined8 *)((long)ppppppuVar4 + -8) = *(undefined8 *)((long)ppppppuVar4 + -8);
    if (lVar14 == 0) {
      func_0x00f78a24(0x3d23938,0,0);
      uVar9 = func_0x00f78aec();
      uVar10 = func_0x00f78a24(0x3d7b500);
      /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar9,uVar10,0);
    }
    else {
      uVar18 = 0x3ec0000;
      if (pcRam0000000003ec01d0 == (code *)0x0) {
        pcRam0000000003ec01d0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                    );
      }
      uVar11 = (*pcRam0000000003ec01d0)(plVar8);
      if ((uVar11 & 1) != 0) {
        if (pcRam0000000003ec01e0 == (code *)0x0) {
          pcRam0000000003ec01e0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar7 = (long *)(*pcRam0000000003ec01e0)(plVar8,lVar14);
        return plVar7;
      }
      func_0x00f78a24(0x3d1fce8);
      uVar9 = func_0x00f78aec();
      uVar10 = func_0x00f78a24(0x3d6af80);
      /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar9,uVar10,0);
      plVar7 = plVar8;
    }
    uVar10 = func_0x00f78a24(0x3d5a8a8);
    auVar25 = func_0x00f78ac0(uVar9,uVar10);
    *(undefined8 *)((long)ppppppuVar4 + -0x60) = uVar17;
    *(undefined8 *)((long)ppppppuVar4 + -0x58) = uVar18;
    *(long **)((long)ppppppuVar4 + -0x50) = plVar7;
    *(undefined8 *)((long)ppppppuVar4 + -0x48) = uVar9;
    *(undefined1 **)((long)ppppppuVar4 + -0x40) = (undefined1 *)((long)ppppppuVar4 + -0x10);
    *(undefined **)((long)ppppppuVar4 + -0x38) = &UnityEngine_MonoBehaviour__StartCoroutineManaged2;
    if (pcRam0000000003ec01e0 == (code *)0x0) {
      pcRam0000000003ec01e0 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar7 = (long *)(*pcRam0000000003ec01e0)(auVar25._0_8_,auVar25._8_8_);
    return plVar7;
  }
  if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)((long)ppppppuVar4 + -0x60) = unaff_x28;
  *(undefined8 *)((long)ppppppuVar4 + -0x58) = unaff_x27;
  *(undefined8 *)((long)ppppppuVar4 + -0x50) = unaff_x26;
  *(undefined8 *)((long)ppppppuVar4 + -0x48) = unaff_x25;
  *(long *)((long)ppppppuVar4 + -0x40) = unaff_x24;
  *(undefined8 *)((long)ppppppuVar4 + -0x38) = unaff_x23;
  *(undefined8 *)((long)ppppppuVar4 + -0x30) = *(undefined8 *)((long)ppppppuVar4 + -0x30);
  *(undefined8 *)((long)ppppppuVar4 + -0x28) = *(undefined8 *)((long)ppppppuVar4 + -0x28);
  *(undefined8 *)((long)ppppppuVar4 + -0x20) = *(undefined8 *)((long)ppppppuVar4 + -0x20);
  *(undefined8 *)((long)ppppppuVar4 + -0x18) = *(undefined8 *)((long)ppppppuVar4 + -0x18);
  *(undefined8 *)((long)ppppppuVar4 + -0x10) = *(undefined8 *)((long)ppppppuVar4 + -0x10);
  *(undefined8 *)((long)ppppppuVar4 + -8) = *(undefined8 *)((long)ppppppuVar4 + -8);
  if ((bRam0000000003ec2d44 & 1) == 0) {
    func_0x00f78a20(0x3d20068);
    func_0x00f78a20(0x3d19788);
    func_0x00f78a20(0x3d22df0);
    func_0x00f78a20(0x3d398f8);
    func_0x00f78a20(0x3d39900);
    func_0x00f78a20(0x3d1d6c0);
    func_0x00f78a20(0x3d3a1c0);
    func_0x00f78a20(0x3d3a1c8);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d25458);
    bRam0000000003ec2d44 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar7 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar14,0,0);
  if (((ulong)plVar7 & 1) != 0) {
    return plVar7;
  }
  if (lVar14 == 0) {
code_r0x032d1910:
    lVar14 = func_0x00f78af4();
    return *(long **)(lVar14 + 0x18);
  }
  uVar17 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar14,0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar7 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar17,0,0);
  if (((ulong)plVar7 & 1) != 0) {
    return plVar7;
  }
  if (((*(ushort *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar15 = /*UnityEngine.UI.ListPool<RectMask2D>$$Get*/ func_0x0233df3c(uRam0000000003d398f8);
  plVar7 = (long *)/*UnityEngine.Transform$$get_parent*/ func_0x03275c98(lVar14,0);
  if (plVar7 == (long *)0x0) {
    plVar7 = (long *)0x0;
  }
  else if (*plVar7 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
    plVar7 = (long *)0x0;
  }
  *(long *)((long)ppppppuVar4 + -0x68) = lVar14;
code_r0x032d1694:
  do {
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar11 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(plVar7,0,0);
    if ((uVar11 & 1) != 0) break;
    if (plVar7 == (long *)0x0) goto code_r0x032d1910;
    uVar17 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(plVar7,0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar6 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar17,0,0);
    uVar17 = /*UnityEngine.UI.ILayoutGroup_var*/ uRam0000000003d19788;
    if (iVar6 != 0) break;
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar17 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar17,0);
    /*UnityEngine.Component$$GetComponents*/ func_0x03227d78(plVar7,uVar17,lVar15,0);
    if (lVar15 == 0) goto code_r0x032d1910;
    uVar16 = *(uint *)(lVar15 + 0x18);
    uVar11 = (ulong)uVar16;
    bVar1 = 0 < (int)uVar16;
    if (0 < (int)uVar16) {
      uVar22 = 0;
      do {
        if ((uVar11 & 0xffffffff) <= uVar22) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar8 = *(long **)(*(long *)(lVar15 + 0x10) + uVar22 * 8 + 0x20);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar8,0,0);
        if ((iVar6 != 0) && (plVar8 != (long *)0x0)) {
          if ((*(byte *)(/*UnityEngine.Behaviour_TypeInfo*/ lRam0000000003d20068 + 300) <= *(byte *)(*plVar8 + 300)) &&
             ((*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(/*UnityEngine.Behaviour_TypeInfo*/ lRam0000000003d20068 + 300) * 8
                        + -8) == /*UnityEngine.Behaviour_TypeInfo*/ lRam0000000003d20068 &&
              (uVar11 = /*UnityEngine.Behaviour$$get_isActiveAndEnabled*/ func_0x0321a980(plVar8,0), (uVar11 & 1) != 0)))) {
            *(long **)((long)ppppppuVar4 + -0x68) = plVar7;
            break;
          }
        }
        uVar22 = uVar22 + 1;
        uVar11 = (ulong)*(int *)(lVar15 + 0x18);
        bVar1 = (long)uVar22 < (long)uVar11;
      } while ((long)uVar22 < (long)uVar11);
    }
    plVar7 = (long *)/*UnityEngine.Transform$$get_parent*/ func_0x03275c98(plVar7,0);
    if (plVar7 != (long *)0x0) {
      if (*plVar7 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
        plVar7 = (long *)0x0;
      }
      if (!bVar1) break;
      goto code_r0x032d1694;
    }
    plVar7 = (long *)0x0;
  } while (bVar1);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar17 = *(undefined8 *)((long)ppppppuVar4 + -0x68);
  iVar6 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar17,lVar14,0);
  if (iVar6 != 0) {
    if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar11 = /*UnityEngine.UI.LayoutRebuilder$$ValidController*/ func_0x032d39d8(uVar17,lVar15);
    if ((uVar11 & 1) == 0) goto code_r0x032d18c0;
  }
  if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*UnityEngine.UI.LayoutRebuilder$$MarkLayoutRootForRebuild*/ func_0x032d3be8(uVar17);
code_r0x032d18c0:
  if (((*(ushort *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar14 = lRam0000000003d39900;
  uVar17 = *(undefined8 *)((long)ppppppuVar4 + -0x30);
  uVar18 = *(undefined8 *)((long)ppppppuVar4 + -0x40);
  uVar10 = *(undefined8 *)((long)ppppppuVar4 + -0x38);
  *(undefined8 *)((long)ppppppuVar4 + -0x40) = uVar18;
  *(undefined8 *)((long)ppppppuVar4 + -0x38) = uVar10;
  *(undefined8 *)((long)ppppppuVar4 + -0x30) = uVar17;
  *(undefined8 *)((long)ppppppuVar4 + -0x28) = *(undefined8 *)((long)ppppppuVar4 + -0x28);
  *(undefined8 *)((long)ppppppuVar4 + -0x20) = *(undefined8 *)((long)ppppppuVar4 + -0x20);
  *(undefined8 *)((long)ppppppuVar4 + -0x18) = *(undefined8 *)((long)ppppppuVar4 + -0x18);
  *(undefined8 *)((long)ppppppuVar4 + -0x10) = *(undefined8 *)((long)ppppppuVar4 + -0x10);
  *(undefined8 *)((long)ppppppuVar4 + -8) = *(undefined8 *)((long)ppppppuVar4 + -8);
  lVar19 = *(long *)(lRam0000000003d39900 + 0x18);
  if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar19);
  }
  lVar19 = *(long *)(*(long *)(lVar19 + 0xc0) + 8);
  uVar2 = *(ushort *)(lVar19 + 0x132);
  if ((uVar2 & 1) == 0) {
    func_0x00fac028(lVar19);
    uVar2 = *(ushort *)(lVar19 + 0x132);
  }
  if ((uVar2 >> 10 & 1) != 0) {
    lVar19 = *(long *)(lVar14 + 0x18);
    if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar19);
    }
    lVar19 = *(long *)(*(long *)(lVar19 + 0xc0) + 8);
    if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar19);
    }
    if (*(int *)(lVar19 + 0xe0) == 0) {
      lVar19 = *(long *)(lVar14 + 0x18);
      if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar19);
      }
      lVar19 = *(long *)(*(long *)(lVar19 + 0xc0) + 8);
      if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar19);
      }
      func_0x00f78ad0(lVar19);
    }
  }
  lVar19 = *(long *)(lVar14 + 0x18);
  if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar19);
  }
  lVar19 = *(long *)(*(long *)(lVar19 + 0xc0) + 8);
  if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar19);
  }
  lVar19 = **(long **)(lVar19 + 0xb8);
  if (lVar19 != 0) {
    lVar21 = *(long *)(lVar14 + 0x18);
    uVar2 = *(ushort *)(lVar21 + 0x132);
    lVar20 = lVar21;
    if ((uVar2 & 1) == 0) {
      func_0x00fac028(lVar21);
      lVar20 = *(long *)(lVar14 + 0x18);
      uVar2 = *(ushort *)(lVar20 + 0x132);
    }
    UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar21 + 0xc0) + 0x18);
    if ((uVar2 & 1) == 0) {
      *(code **)((long)ppppppuVar4 + -0x48) = UNRECOVERED_JUMPTABLE;
      func_0x00fac028(lVar20);
      UNRECOVERED_JUMPTABLE = *(code **)((long)ppppppuVar4 + -0x48);
    }
                    /* WARNING: Could not recover jumptable at 0x0233e1e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar7 = (long *)(*UNRECOVERED_JUMPTABLE)
                               (lVar19,lVar15,*(undefined8 *)(*(long *)(lVar20 + 0xc0) + 0x18));
    return plVar7;
  }
  lVar19 = func_0x00f78af4();
  *(undefined8 *)((long)ppppppuVar4 + -0x90) = uVar18;
  *(undefined8 *)((long)ppppppuVar4 + -0x88) = uVar10;
  *(undefined8 *)((long)ppppppuVar4 + -0x80) = uVar17;
  *(undefined8 *)((long)ppppppuVar4 + -0x78) = 0;
  *(long *)((long)ppppppuVar4 + -0x70) = lVar14;
  *(long *)((long)ppppppuVar4 + -0x68) = lVar15;
  *(undefined1 **)((long)ppppppuVar4 + -0x60) = (undefined1 *)((long)ppppppuVar4 + -0x10);
  *(undefined **)((long)ppppppuVar4 + -0x58) = &UnityEngine_UI_ListPool_object____cctor;
  lVar14 = *(long *)(lVar19 + 0x18);
  if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar14);
  }
  lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 0x28);
  if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar14);
  }
  uVar17 = func_0x00f78aec(lVar14);
  lVar15 = *(long *)(lVar19 + 0x18);
  uVar2 = *(ushort *)(lVar15 + 0x132);
  lVar14 = lVar15;
  if ((uVar2 & 1) == 0) {
    func_0x00fac028(lVar15);
    lVar14 = *(long *)(lVar19 + 0x18);
    uVar2 = *(ushort *)(lVar14 + 0x132);
  }
  UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar15 + 0xc0) + 0x30);
  lVar15 = lVar14;
  if ((uVar2 & 1) == 0) {
    func_0x00fac028(lVar14);
    lVar15 = *(long *)(lVar19 + 0x18);
    uVar2 = *(ushort *)(lVar15 + 0x132);
  }
  uVar18 = *(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x20);
  if ((uVar2 & 1) == 0) {
    func_0x00fac028(lVar15);
  }
  (*UNRECOVERED_JUMPTABLE)(uVar17,0,uVar18,*(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x30));
  lVar14 = *(long *)(lVar19 + 0x18);
  if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar14);
  }
  lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 0x38);
  if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar14);
  }
  uVar18 = func_0x00f78aec(lVar14);
  lVar15 = *(long *)(lVar19 + 0x18);
  uVar2 = *(ushort *)(lVar15 + 0x132);
  lVar14 = lVar15;
  if ((uVar2 & 1) == 0) {
    func_0x00fac028(lVar15);
    lVar14 = *(long *)(lVar19 + 0x18);
    uVar2 = *(ushort *)(lVar14 + 0x132);
  }
  UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar15 + 0xc0) + 0x40);
  if ((uVar2 & 1) == 0) {
    func_0x00fac028(lVar14);
  }
  plVar7 = (long *)(*UNRECOVERED_JUMPTABLE)
                             (uVar18,0,uVar17,*(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x40));
  lVar14 = *(long *)(lVar19 + 0x18);
  if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
    plVar7 = (long *)func_0x00fac028(lVar14);
  }
  lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 8);
  if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
    plVar7 = (long *)func_0x00fac028(lVar14);
  }
  **(undefined8 **)(lVar14 + 0xb8) = uVar18;
  return plVar7;
}



// ============================================================
// RVA: 0x1650f98 | Core.Localisation.LocaliseAlignmentBehaviour.UpdateHorizontalLayoutGroupComponent
// ============================================================

/* WARNING: Possible PIC construction at 0x018729d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872a58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872b14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872c18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872cac: Changing call to branch */

long * Core_Localisation_LocaliseAlignmentBehaviour__UpdateHorizontalLayoutGroupComponent
                 (undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  bool bVar1;
  uint uVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  undefined1 **ppuVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined4 *extraout_x1;
  undefined4 *extraout_x1_00;
  undefined4 *puVar14;
  undefined4 *puVar15;
  code *UNRECOVERED_JUMPTABLE;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong unaff_x22;
  long lVar19;
  long lVar20;
  undefined8 unaff_x23;
  long lVar21;
  long unaff_x24;
  undefined8 unaff_x25;
  ulong uVar22;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar23;
  undefined *puVar24;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auStack_1b0 [8];
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined8 ******ppppppuStack_170;
  undefined *puStack_168;
  undefined1 auStack_160 [12];
  undefined4 uStack_154;
  undefined8 ******ppppppuStack_120;
  undefined *puStack_118;
  long lStack_110;
  undefined4 *puStack_108;
  undefined4 *puStack_100;
  long *plStack_f8;
  undefined8 ******ppppppuStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 ******ppppppuStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 ******ppppppuStack_50;
  undefined *puStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb57cb & 1) == 0) {
    func_0x00f78a20(0x3d230d8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb57cb = 1;
  }
  uVar17 = *(undefined8 *)(param_3 + 0x20);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar8 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar17,0,0);
  if (((ulong)plVar8 & 1) != 0) {
    return plVar8;
  }
  if (((*(ushort *)((long)/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  lVar16 = *(long *)/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8[0x17];
  if (lVar16 == 0) {
    return /*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8;
  }
  if (((*(ushort *)((long)/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8[0x1c] == 0)) {
    func_0x00f78ad0();
    lVar16 = *(long *)/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8[0x17];
    if (lVar16 == 0) goto LAB_016510c0;
  }
  bVar6 = *(char *)(param_3 + 0x2c) == '\0';
  bVar1 = !bVar6;
  if (*(char *)(lVar16 + 0x60) != '\0') {
    bVar1 = bVar6;
  }
  uVar2 = (uint)bVar1;
  plVar8 = *(long **)(param_3 + 0x20);
  if (plVar8 == (long *)0x0) {
LAB_016510c0:
    uVar17 = func_0x00f78af4();
    ppppppuStack_50 = (undefined8 ******)0x3d230d8;
    uStack_38 = &Core_Localisation_LocaliseAlignmentBehaviour__OnDestroy;
    puStack_48 = (undefined *)param_3;
    puStack_40 = &stack0xfffffffffffffff0;
    if ((bRam0000000003eb57c9 & 1) == 0) {
      func_0x00f78a20(0x3d2a320);
      func_0x00f78a20(0x3d1b598);
      func_0x00f78a20(0x3d5a130);
      func_0x00f78a20(0x3d230d8);
      bRam0000000003eb57c9 = 1;
    }
    if (((*(ushort *)((long)/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8[0x1c] == 0)) {
      func_0x00f78ad0();
    }
    lVar16 = *(long *)/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8[0x17];
    if (lVar16 == 0) {
      return /*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8;
    }
    uVar18 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ lRam0000000003d1b598);
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar18,uVar17,uRam0000000003d5a130,uRam0000000003d2a320);
    if ((bRam0000000003eb57bb & 1) == 0) {
      func_0x00f78a20(0x3d1b598);
      bRam0000000003eb57bb = 1;
    }
    plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(*(undefined8 *)(lVar16 + 0x10),uVar18,0);
    if ((plVar8 == (long *)0x0) || (*plVar8 == /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598)) {
      *(long **)(lVar16 + 0x10) = plVar8;
      return plVar8;
    }
    auVar25 = func_0x00f78e5c();
    lVar12 = auVar25._0_8_;
    puStack_88 = (undefined *)0x3eb5000;
    uVar17 = 0x3eb5000;
    uStack_80 = uVar18;
    uStack_78 = lVar16;
    if ((bRam0000000003eb57bc & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb57bc = 1;
    }
    lVar16 = *(long *)(lVar12 + 0x38);
    if (lVar16 != 0) {
      unaff_x22 = 0;
      uVar18 = 0x3d23990;
      unaff_x24 = 0x20;
      do {
        lVar16 = *(long *)(lVar16 + 0x20);
        unaff_x23 = uVar18;
        if (lVar16 == 0) break;
        if ((long)(int)*(uint *)(lVar16 + 0x18) <= (long)unaff_x22) {
          return auVar25._8_8_;
        }
        if (*(uint *)(lVar16 + 0x18) <= unaff_x22) goto LAB_0164fd18;
        uVar17 = *(undefined8 *)(lVar16 + unaff_x24);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar7 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar17,auVar25._8_8_,0);
        if (iVar7 != 0) goto LAB_0164fce4;
        unaff_x22 = unaff_x22 + 1;
        lVar16 = *(long *)(lVar12 + 0x38);
        unaff_x24 = unaff_x24 + 0x10;
        unaff_x23 = 0x3d23990;
      } while (lVar16 != 0);
    }
    do {
      func_0x00f78af4();
LAB_0164fce4:
      lVar16 = *(long *)(lVar12 + 0x40);
    } while (lVar16 == 0);
    if ((uint)unaff_x22 < *(uint *)(lVar16 + 0x18)) {
      return *(long **)(lVar16 + unaff_x22 * 8 + 0x20);
    }
LAB_0164fd18:
    uVar18 = func_0x00f78b24();
    auVar25 = func_0x00f78ac0(uVar18,0);
    lVar16 = auVar25._0_8_;
    lStack_e0 = unaff_x24;
    uStack_d8 = unaff_x23;
    uStack_d0 = unaff_x22;
    uStack_c8 = uVar17;
    if ((bRam0000000003eb57bd & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb57bd = 1;
    }
    lVar12 = *(long *)(lVar16 + 0x38);
    if (lVar12 != 0) {
      unaff_x22 = 0;
      lVar19 = 0x20;
      do {
        lVar12 = *(long *)(lVar12 + 0x28);
        if (lVar12 == 0) break;
        if ((long)(int)*(uint *)(lVar12 + 0x18) <= (long)unaff_x22) {
          return auVar25._8_8_;
        }
        if (*(uint *)(lVar12 + 0x18) <= unaff_x22) goto LAB_0164fe0c;
        uVar17 = *(undefined8 *)(lVar12 + lVar19);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar7 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar17,auVar25._8_8_,0);
        if (iVar7 != 0) goto LAB_0164fdd8;
        unaff_x22 = unaff_x22 + 1;
        lVar12 = *(long *)(lVar16 + 0x38);
        lVar19 = lVar19 + 0x10;
      } while (lVar12 != 0);
    }
    do {
      func_0x00f78af4();
LAB_0164fdd8:
      lVar12 = *(long *)(lVar16 + 0x48);
    } while (lVar12 == 0);
    if ((uint)unaff_x22 < *(uint *)(lVar12 + 0x18)) {
      return *(long **)(lVar12 + unaff_x22 * 8 + 0x20);
    }
LAB_0164fe0c:
    uVar17 = func_0x00f78b24();
    plVar8 = (long *)func_0x00f78ac0(uVar17,0);
    return plVar8;
  }
  if (uVar2 == (*(char *)((long)plVar8 + 0x62) != '\0')) {
    return plVar8;
  }
  if ((bRam0000000003ec2cbf & 1) == 0) {
    func_0x00f78a20(0x3d59d60,(undefined4 *)(ulong)uVar2,0);
    bRam0000000003ec2cbf = 1;
  }
  lVar16 = (long)plVar8 + 0x62;
  auVar25._8_8_ = lVar16;
  auVar25._0_8_ = plVar8;
  uStack_38 = (undefined *)CONCAT17(bVar1,(undefined7)uStack_38);
  lVar19 = **(long **)(lRam0000000003d59d60 + 0x30);
  lVar12 = lRam0000000003d59d60;
  if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar19);
  }
  uVar17 = func_0x00f78ae0(lVar19,(long)&uStack_38 + 7);
  puVar14 = (undefined4 *)0x0;
  plVar9 = (long *)/*System.Boolean$$Equals*/ func_0x02940ff0(lVar16,uVar17);
  auVar4._8_8_ = puStack_108;
  auVar4._0_8_ = plStack_f8;
  if (((ulong)plVar9 & 1) != 0) {
    return plVar9;
  }
  *(bool *)lVar16 = bVar1;
  if (plVar8 == (long *)0x0) {
    auVar25 = func_0x00f78af4();
    puStack_48 = &UnityEngine_UI_LayoutGroup__SetProperty_int_;
    uStack_78 = CONCAT44((int)puVar14,(undefined4)uStack_78);
    lVar19 = **(long **)(lVar12 + 0x30);
    ppppppuStack_50 = (undefined8 ******)&stack0xfffffffffffffff0;
    if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar19);
    }
    uVar17 = func_0x00f78ae0(lVar19,(long)&uStack_78 + 4);
    puVar15 = (undefined4 *)0x0;
    plVar8 = (long *)/*System.Int32$$Equals*/ func_0x02ae9af0(auVar25._8_8_,uVar17);
    auVar4._8_8_ = puStack_108;
    auVar4._0_8_ = plStack_f8;
    if (((ulong)plVar8 & 1) != 0) {
      return plVar8;
    }
    *auVar25._8_8_ = (int)puVar14;
    if (auVar25._0_8_ == (long *)0x0) {
      auVar25 = func_0x00f78af4();
      puVar14 = auVar25._8_8_;
      plVar8 = auVar25._0_8_;
      ppuVar5 = (undefined1 **)&lStack_e0;
      puStack_88 = &UnityEngine_UI_LayoutGroup__SetProperty_GridLayoutGroup_Corner_;
      uStack_c8 = CONCAT44((int)puVar15,(undefined4)uStack_c8);
      lVar16 = **(long **)(lVar12 + 0x30);
      ppppppuStack_90 = &ppppppuStack_50;
      if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar16);
      }
      unaff_x23 = func_0x00f78ae0(lVar16,(long)&uStack_c8 + 4);
      lVar16 = **(long **)(lVar12 + 0x30);
      if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar16);
      }
      uStack_d8 = 0xffffffffffffffff;
      uStack_d0 = CONCAT44(uStack_d0._4_4_,*puVar14);
      lVar12 = *(long *)(lVar16 + 0x140);
      lStack_e0 = lVar16;
      plVar9 = (long *)(**(code **)(lVar16 + 0x138))(&lStack_e0,unaff_x23);
      auVar4._8_8_ = puStack_108;
      auVar4._0_8_ = plStack_f8;
      if (((ulong)plVar9 & 1) != 0) {
        return plVar9;
      }
      *puVar14 = (int)puVar15;
      if (plVar8 == (long *)0x0) {
        auVar26 = func_0x00f78af4();
        puStack_e8 = &UnityEngine_UI_LayoutGroup__SetProperty_RectOffset_;
        plVar9 = (long *)*auVar26._8_8_;
        if (lVar12 == 0 && plVar9 == (long *)0x0) {
          return plVar9;
        }
        lVar20 = lVar12;
        lStack_110 = lVar16;
        puStack_100 = puVar15;
        ppppppuStack_f0 = &ppppppuStack_90;
        auVar4 = auVar25;
        if (plVar9 != (long *)0x0) {
          lVar20 = *(long *)(*plVar9 + 0x140);
          puStack_108 = puVar14;
          plStack_f8 = plVar8;
          plVar8 = (long *)(**(code **)(*plVar9 + 0x138))(plVar9,lVar12);
          auVar4._8_8_ = puStack_108;
          auVar4._0_8_ = plStack_f8;
          if (((ulong)plVar8 & 1) != 0) {
            return plVar8;
          }
        }
        puStack_108 = auVar4._8_8_;
        plStack_f8 = auVar4._0_8_;
        auVar25._8_8_ = puStack_108;
        auVar25._0_8_ = auVar26._0_8_;
        *auVar26._8_8_ = lVar12;
        plVar8 = plStack_f8;
        puVar15 = puStack_100;
        lVar19 = lStack_110;
        pppppppuVar23 = (undefined8 *******)ppppppuStack_f0;
        puVar24 = puStack_e8;
        if (auVar26._0_8_ == 0) {
          plVar8 = (long *)func_0x00f78af4();
          ppuVar5 = (undefined1 **)auStack_160;
          puStack_118 = &UnityEngine_UI_LayoutGroup__SetProperty_float_;
          lVar12 = **(long **)(lVar20 + 0x30);
          auVar25._8_8_ = lVar12;
          auVar25._0_8_ = plVar8;
          uStack_154 = extraout_s0;
          ppppppuStack_120 = &ppppppuStack_f0;
          if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar12);
          }
          uVar17 = func_0x00f78ae0(lVar12,&uStack_154);
          lVar12 = 0;
          plVar9 = (long *)/*System.Single$$Equals*/ func_0x029ba7b0(extraout_x1,uVar17);
          auVar4._8_8_ = puStack_108;
          auVar4._0_8_ = plStack_f8;
          if (((ulong)plVar9 & 1) != 0) {
            return plVar9;
          }
          *extraout_x1 = extraout_s0;
          if (plVar8 == (long *)0x0) {
            plVar8 = (long *)func_0x00f78af4();
            ppuVar5 = (undefined1 **)auStack_1b0;
            puStack_168 = &UnityEngine_UI_LayoutGroup__SetProperty_Vector2_;
            lVar12 = **(long **)(lVar12 + 0x30);
            auVar25._8_8_ = lVar12;
            auVar25._0_8_ = plVar8;
            uStack_1a8 = extraout_s0_00;
            uStack_1a4 = param_2;
            ppppppuStack_170 = &ppppppuStack_120;
            if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar12);
            }
            uVar17 = func_0x00f78ae0(lVar12,&uStack_1a8);
            lVar12 = 0;
            plVar9 = (long *)/*UnityEngine.Vector2$$Equals*/ func_0x0327a57c(extraout_x1_00,uVar17);
            auVar4._8_8_ = puStack_108;
            auVar4._0_8_ = plStack_f8;
            if (((ulong)plVar9 & 1) != 0) {
              return plVar9;
            }
            *extraout_x1_00 = extraout_s0_00;
            extraout_x1_00[1] = param_2;
            if (plVar8 == (long *)0x0) {
              auVar25 = func_0x00f78af4();
              plVar8 = auVar25._0_8_;
              lVar16 = *plVar8;
              func_0x00f78a30();
              if (lVar16 != 0) {
                return (long *)*plVar8;
              }
                    /* WARNING: Could not recover jumptable at 0x01872d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              plVar8 = (long *)(*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 0x10))
                                         (plVar8,auVar25._8_8_);
              return plVar8;
            }
            puVar15 = extraout_x1_00;
            lVar19 = lVar16;
            pppppppuVar23 = &ppppppuStack_170;
            puVar24 = &UNK_01872cb0;
          }
          else {
            puVar15 = extraout_x1;
            lVar19 = lVar16;
            pppppppuVar23 = &ppppppuStack_120;
            puVar24 = &UNK_01872c1c;
          }
        }
      }
      else {
        ppuVar5 = (undefined1 **)&lStack_e0;
        lVar19 = lVar16;
        pppppppuVar23 = &ppppppuStack_90;
        puVar24 = &UNK_01872b18;
      }
    }
    else {
      ppuVar5 = (undefined1 **)&uStack_80;
      plVar8 = auVar25._0_8_;
      puVar15 = puVar14;
      pppppppuVar23 = &ppppppuStack_50;
      puVar24 = &UNK_01872a5c;
    }
  }
  else {
    ppuVar5 = &puStack_40;
    puVar15 = (undefined4 *)(ulong)uVar2;
    pppppppuVar23 = (undefined8 *******)&stack0xfffffffffffffff0;
    puVar24 = &UNK_018729d4;
  }
  puStack_108 = auVar4._8_8_;
  plStack_f8 = auVar4._0_8_;
  plVar9 = auVar25._0_8_;
  *(long *)((long)ppuVar5 + -0x30) = lVar19;
  *(long *)((long)ppuVar5 + -0x28) = auVar25._8_8_;
  *(undefined4 **)((long)ppuVar5 + -0x20) = puVar15;
  *(long **)((long)ppuVar5 + -0x18) = plVar8;
  *(undefined8 ********)((long)ppuVar5 + -0x10) = pppppppuVar23;
  *(undefined **)((long)ppuVar5 + -8) = puVar24;
  if ((bRam0000000003ec2d3a & 1) == 0) {
    func_0x00f78a20(0x3d20558,0);
    func_0x00f78a20(0x3d22df0);
    bRam0000000003ec2d3a = 1;
  }
  plVar8 = (long *)(**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
  if ((int)plVar8 == 0) {
    return plVar8;
  }
  if (((*(ushort *)(/*UnityEngine.UI.CanvasUpdateRegistry_TypeInfo*/ lRam0000000003d20558 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.UI.CanvasUpdateRegistry_TypeInfo*/ lRam0000000003d20558 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar13 = /*UnityEngine.UI.CanvasUpdateRegistry$$IsRebuildingLayout*/ func_0x032afad4(0);
  lVar16 = /*UnityEngine.UI.LayoutGroup$$get_rectTransform*/ func_0x032d19e4(plVar9);
  if ((uVar13 & 1) != 0) {
    lVar16 = /*UnityEngine.UI.LayoutGroup$$DelayedSetDirty*/ func_0x032d29d0(lVar16,lVar16);
    plVar8 = *(long **)((long)ppuVar5 + -0x20);
    uVar17 = *(undefined8 *)((long)ppuVar5 + -0x30);
    uVar18 = *(undefined8 *)((long)ppuVar5 + -0x28);
    *(undefined8 *)((long)ppuVar5 + -0x30) = uVar17;
    *(undefined8 *)((long)ppuVar5 + -0x28) = uVar18;
    *(long **)((long)ppuVar5 + -0x20) = plVar8;
    *(undefined8 *)((long)ppuVar5 + -0x18) = *(undefined8 *)((long)ppuVar5 + -0x18);
    *(undefined8 *)((long)ppuVar5 + -0x10) = *(undefined8 *)((long)ppuVar5 + -0x10);
    *(undefined8 *)((long)ppuVar5 + -8) = *(undefined8 *)((long)ppuVar5 + -8);
    if (lVar16 == 0) {
      func_0x00f78a24(0x3d23938,0,0);
      uVar10 = func_0x00f78aec();
      uVar11 = func_0x00f78a24(0x3d7b500);
      /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar10,uVar11,0);
    }
    else {
      uVar18 = 0x3ec0000;
      if (pcRam0000000003ec01d0 == (code *)0x0) {
        pcRam0000000003ec01d0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                    );
      }
      uVar13 = (*pcRam0000000003ec01d0)(plVar9);
      if ((uVar13 & 1) != 0) {
        if (pcRam0000000003ec01e0 == (code *)0x0) {
          pcRam0000000003ec01e0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar8 = (long *)(*pcRam0000000003ec01e0)(plVar9,lVar16);
        return plVar8;
      }
      func_0x00f78a24(0x3d1fce8);
      uVar10 = func_0x00f78aec();
      uVar11 = func_0x00f78a24(0x3d6af80);
      /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar10,uVar11,0);
      plVar8 = plVar9;
    }
    uVar11 = func_0x00f78a24(0x3d5a8a8);
    auVar25 = func_0x00f78ac0(uVar10,uVar11);
    *(undefined8 *)((long)ppuVar5 + -0x60) = uVar17;
    *(undefined8 *)((long)ppuVar5 + -0x58) = uVar18;
    *(long **)((long)ppuVar5 + -0x50) = plVar8;
    *(undefined8 *)((long)ppuVar5 + -0x48) = uVar10;
    *(undefined1 **)((long)ppuVar5 + -0x40) = (undefined1 *)((long)ppuVar5 + -0x10);
    *(undefined **)((long)ppuVar5 + -0x38) = &UnityEngine_MonoBehaviour__StartCoroutineManaged2;
    if (pcRam0000000003ec01e0 == (code *)0x0) {
      pcRam0000000003ec01e0 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar8 = (long *)(*pcRam0000000003ec01e0)(auVar25._0_8_,auVar25._8_8_);
    return plVar8;
  }
  if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)((long)ppuVar5 + -0x60) = unaff_x28;
  *(undefined8 *)((long)ppuVar5 + -0x58) = unaff_x27;
  *(undefined8 *)((long)ppuVar5 + -0x50) = unaff_x26;
  *(undefined8 *)((long)ppuVar5 + -0x48) = unaff_x25;
  *(long *)((long)ppuVar5 + -0x40) = unaff_x24;
  *(undefined8 *)((long)ppuVar5 + -0x38) = unaff_x23;
  *(undefined8 *)((long)ppuVar5 + -0x30) = *(undefined8 *)((long)ppuVar5 + -0x30);
  *(undefined8 *)((long)ppuVar5 + -0x28) = *(undefined8 *)((long)ppuVar5 + -0x28);
  *(undefined8 *)((long)ppuVar5 + -0x20) = *(undefined8 *)((long)ppuVar5 + -0x20);
  *(undefined8 *)((long)ppuVar5 + -0x18) = *(undefined8 *)((long)ppuVar5 + -0x18);
  *(undefined8 *)((long)ppuVar5 + -0x10) = *(undefined8 *)((long)ppuVar5 + -0x10);
  *(undefined8 *)((long)ppuVar5 + -8) = *(undefined8 *)((long)ppuVar5 + -8);
  if ((bRam0000000003ec2d44 & 1) == 0) {
    func_0x00f78a20(0x3d20068);
    func_0x00f78a20(0x3d19788);
    func_0x00f78a20(0x3d22df0);
    func_0x00f78a20(0x3d398f8);
    func_0x00f78a20(0x3d39900);
    func_0x00f78a20(0x3d1d6c0);
    func_0x00f78a20(0x3d3a1c0);
    func_0x00f78a20(0x3d3a1c8);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d25458);
    bRam0000000003ec2d44 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar8 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar16,0,0);
  if (((ulong)plVar8 & 1) != 0) {
    return plVar8;
  }
  if (lVar16 == 0) {
code_r0x032d1910:
    lVar16 = func_0x00f78af4();
    return *(long **)(lVar16 + 0x18);
  }
  uVar17 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar16,0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar8 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar17,0,0);
  if (((ulong)plVar8 & 1) != 0) {
    return plVar8;
  }
  if (((*(ushort *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar12 = /*UnityEngine.UI.ListPool<RectMask2D>$$Get*/ func_0x0233df3c(uRam0000000003d398f8);
  plVar8 = (long *)/*UnityEngine.Transform$$get_parent*/ func_0x03275c98(lVar16,0);
  if (plVar8 == (long *)0x0) {
    plVar8 = (long *)0x0;
  }
  else if (*plVar8 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
    plVar8 = (long *)0x0;
  }
  *(long *)((long)ppuVar5 + -0x68) = lVar16;
code_r0x032d1694:
  do {
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar13 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(plVar8,0,0);
    if ((uVar13 & 1) != 0) break;
    if (plVar8 == (long *)0x0) goto code_r0x032d1910;
    uVar17 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(plVar8,0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar7 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar17,0,0);
    uVar17 = /*UnityEngine.UI.ILayoutGroup_var*/ uRam0000000003d19788;
    if (iVar7 != 0) break;
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar17 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar17,0);
    /*UnityEngine.Component$$GetComponents*/ func_0x03227d78(plVar8,uVar17,lVar12,0);
    if (lVar12 == 0) goto code_r0x032d1910;
    uVar2 = *(uint *)(lVar12 + 0x18);
    uVar13 = (ulong)uVar2;
    bVar1 = 0 < (int)uVar2;
    if (0 < (int)uVar2) {
      uVar22 = 0;
      do {
        if ((uVar13 & 0xffffffff) <= uVar22) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar9 = *(long **)(*(long *)(lVar12 + 0x10) + uVar22 * 8 + 0x20);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar9,0,0);
        if ((iVar7 != 0) && (plVar9 != (long *)0x0)) {
          if ((*(byte *)(/*UnityEngine.Behaviour_TypeInfo*/ lRam0000000003d20068 + 300) <= *(byte *)(*plVar9 + 300)) &&
             ((*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(/*UnityEngine.Behaviour_TypeInfo*/ lRam0000000003d20068 + 300) * 8
                        + -8) == /*UnityEngine.Behaviour_TypeInfo*/ lRam0000000003d20068 &&
              (uVar13 = /*UnityEngine.Behaviour$$get_isActiveAndEnabled*/ func_0x0321a980(plVar9,0), (uVar13 & 1) != 0)))) {
            *(long **)((long)ppuVar5 + -0x68) = plVar8;
            break;
          }
        }
        uVar22 = uVar22 + 1;
        uVar13 = (ulong)*(int *)(lVar12 + 0x18);
        bVar1 = (long)uVar22 < (long)uVar13;
      } while ((long)uVar22 < (long)uVar13);
    }
    plVar8 = (long *)/*UnityEngine.Transform$$get_parent*/ func_0x03275c98(plVar8,0);
    if (plVar8 != (long *)0x0) {
      if (*plVar8 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
        plVar8 = (long *)0x0;
      }
      if (!bVar1) break;
      goto code_r0x032d1694;
    }
    plVar8 = (long *)0x0;
  } while (bVar1);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar17 = *(undefined8 *)((long)ppuVar5 + -0x68);
  iVar7 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar17,lVar16,0);
  if (iVar7 != 0) {
    if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar13 = /*UnityEngine.UI.LayoutRebuilder$$ValidController*/ func_0x032d39d8(uVar17,lVar12);
    if ((uVar13 & 1) == 0) goto code_r0x032d18c0;
  }
  if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*UnityEngine.UI.LayoutRebuilder$$MarkLayoutRootForRebuild*/ func_0x032d3be8(uVar17);
code_r0x032d18c0:
  if (((*(ushort *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar16 = lRam0000000003d39900;
  uVar17 = *(undefined8 *)((long)ppuVar5 + -0x30);
  uVar18 = *(undefined8 *)((long)ppuVar5 + -0x40);
  uVar11 = *(undefined8 *)((long)ppuVar5 + -0x38);
  *(undefined8 *)((long)ppuVar5 + -0x40) = uVar18;
  *(undefined8 *)((long)ppuVar5 + -0x38) = uVar11;
  *(undefined8 *)((long)ppuVar5 + -0x30) = uVar17;
  *(undefined8 *)((long)ppuVar5 + -0x28) = *(undefined8 *)((long)ppuVar5 + -0x28);
  *(undefined8 *)((long)ppuVar5 + -0x20) = *(undefined8 *)((long)ppuVar5 + -0x20);
  *(undefined8 *)((long)ppuVar5 + -0x18) = *(undefined8 *)((long)ppuVar5 + -0x18);
  *(undefined8 *)((long)ppuVar5 + -0x10) = *(undefined8 *)((long)ppuVar5 + -0x10);
  *(undefined8 *)((long)ppuVar5 + -8) = *(undefined8 *)((long)ppuVar5 + -8);
  lVar19 = *(long *)(lRam0000000003d39900 + 0x18);
  if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar19);
  }
  lVar19 = *(long *)(*(long *)(lVar19 + 0xc0) + 8);
  uVar3 = *(ushort *)(lVar19 + 0x132);
  if ((uVar3 & 1) == 0) {
    func_0x00fac028(lVar19);
    uVar3 = *(ushort *)(lVar19 + 0x132);
  }
  if ((uVar3 >> 10 & 1) != 0) {
    lVar19 = *(long *)(lVar16 + 0x18);
    if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar19);
    }
    lVar19 = *(long *)(*(long *)(lVar19 + 0xc0) + 8);
    if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar19);
    }
    if (*(int *)(lVar19 + 0xe0) == 0) {
      lVar19 = *(long *)(lVar16 + 0x18);
      if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar19);
      }
      lVar19 = *(long *)(*(long *)(lVar19 + 0xc0) + 8);
      if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar19);
      }
      func_0x00f78ad0(lVar19);
    }
  }
  lVar19 = *(long *)(lVar16 + 0x18);
  if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar19);
  }
  lVar19 = *(long *)(*(long *)(lVar19 + 0xc0) + 8);
  if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar19);
  }
  lVar19 = **(long **)(lVar19 + 0xb8);
  if (lVar19 != 0) {
    lVar21 = *(long *)(lVar16 + 0x18);
    uVar3 = *(ushort *)(lVar21 + 0x132);
    lVar20 = lVar21;
    if ((uVar3 & 1) == 0) {
      func_0x00fac028(lVar21);
      lVar20 = *(long *)(lVar16 + 0x18);
      uVar3 = *(ushort *)(lVar20 + 0x132);
    }
    UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar21 + 0xc0) + 0x18);
    if ((uVar3 & 1) == 0) {
      *(code **)((long)ppuVar5 + -0x48) = UNRECOVERED_JUMPTABLE;
      func_0x00fac028(lVar20);
      UNRECOVERED_JUMPTABLE = *(code **)((long)ppuVar5 + -0x48);
    }
                    /* WARNING: Could not recover jumptable at 0x0233e1e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar8 = (long *)(*UNRECOVERED_JUMPTABLE)
                               (lVar19,lVar12,*(undefined8 *)(*(long *)(lVar20 + 0xc0) + 0x18));
    return plVar8;
  }
  lVar19 = func_0x00f78af4();
  *(undefined8 *)((long)ppuVar5 + -0x90) = uVar18;
  *(undefined8 *)((long)ppuVar5 + -0x88) = uVar11;
  *(undefined8 *)((long)ppuVar5 + -0x80) = uVar17;
  *(undefined8 *)((long)ppuVar5 + -0x78) = 0;
  *(long *)((long)ppuVar5 + -0x70) = lVar16;
  *(long *)((long)ppuVar5 + -0x68) = lVar12;
  *(undefined1 **)((long)ppuVar5 + -0x60) = (undefined1 *)((long)ppuVar5 + -0x10);
  *(undefined **)((long)ppuVar5 + -0x58) = &UnityEngine_UI_ListPool_object____cctor;
  lVar16 = *(long *)(lVar19 + 0x18);
  if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar16);
  }
  lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x28);
  if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar16);
  }
  uVar17 = func_0x00f78aec(lVar16);
  lVar12 = *(long *)(lVar19 + 0x18);
  uVar3 = *(ushort *)(lVar12 + 0x132);
  lVar16 = lVar12;
  if ((uVar3 & 1) == 0) {
    func_0x00fac028(lVar12);
    lVar16 = *(long *)(lVar19 + 0x18);
    uVar3 = *(ushort *)(lVar16 + 0x132);
  }
  UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar12 + 0xc0) + 0x30);
  lVar12 = lVar16;
  if ((uVar3 & 1) == 0) {
    func_0x00fac028(lVar16);
    lVar12 = *(long *)(lVar19 + 0x18);
    uVar3 = *(ushort *)(lVar12 + 0x132);
  }
  uVar18 = *(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x20);
  if ((uVar3 & 1) == 0) {
    func_0x00fac028(lVar12);
  }
  (*UNRECOVERED_JUMPTABLE)(uVar17,0,uVar18,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x30));
  lVar16 = *(long *)(lVar19 + 0x18);
  if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar16);
  }
  lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x38);
  if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar16);
  }
  uVar18 = func_0x00f78aec(lVar16);
  lVar12 = *(long *)(lVar19 + 0x18);
  uVar3 = *(ushort *)(lVar12 + 0x132);
  lVar16 = lVar12;
  if ((uVar3 & 1) == 0) {
    func_0x00fac028(lVar12);
    lVar16 = *(long *)(lVar19 + 0x18);
    uVar3 = *(ushort *)(lVar16 + 0x132);
  }
  UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar12 + 0xc0) + 0x40);
  if ((uVar3 & 1) == 0) {
    func_0x00fac028(lVar16);
  }
  plVar8 = (long *)(*UNRECOVERED_JUMPTABLE)
                             (uVar18,0,uVar17,*(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x40));
  lVar16 = *(long *)(lVar19 + 0x18);
  if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
    plVar8 = (long *)func_0x00fac028(lVar16);
  }
  lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
  if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
    plVar8 = (long *)func_0x00fac028(lVar16);
  }
  **(undefined8 **)(lVar16 + 0xb8) = uVar18;
  return plVar8;
}



// ============================================================
// RVA: 0x16510c4 | Core.Localisation.LocaliseAlignmentBehaviour.OnDestroy
// ============================================================

long * Core_Localisation_LocaliseAlignmentBehaviour__OnDestroy(undefined8 param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong unaff_x22;
  long lVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003eb57c9 & 1) == 0) {
    func_0x00f78a20(0x3d2a320);
    func_0x00f78a20(0x3d1b598);
    func_0x00f78a20(0x3d5a130);
    func_0x00f78a20(0x3d230d8);
    bRam0000000003eb57c9 = 1;
  }
  if (((*(ushort *)((long)/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  lVar5 = *(long *)/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8[0x17];
  if (lVar5 == 0) {
    return /*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8;
  }
  uVar3 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ lRam0000000003d1b598);
  /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar3,param_1,uRam0000000003d5a130,uRam0000000003d2a320);
  if ((bRam0000000003eb57bb & 1) == 0) {
    func_0x00f78a20(0x3d1b598);
    bRam0000000003eb57bb = 1;
  }
  plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(*(undefined8 *)(lVar5 + 0x10),uVar3,0);
  if ((plVar2 == (long *)0x0) || (*plVar2 == /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598)) {
    *(long **)(lVar5 + 0x10) = plVar2;
    return plVar2;
  }
  auVar7 = func_0x00f78e5c();
  lVar5 = auVar7._0_8_;
  if ((bRam0000000003eb57bc & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb57bc = 1;
  }
  lVar4 = *(long *)(lVar5 + 0x38);
  if (lVar4 != 0) {
    unaff_x22 = 0;
    lVar6 = 0x20;
    do {
      lVar4 = *(long *)(lVar4 + 0x20);
      if (lVar4 == 0) break;
      if ((long)(int)*(uint *)(lVar4 + 0x18) <= (long)unaff_x22) {
        return auVar7._8_8_;
      }
      if (*(uint *)(lVar4 + 0x18) <= unaff_x22) goto LAB_0164fd18;
      uVar3 = *(undefined8 *)(lVar4 + lVar6);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar1 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar3,auVar7._8_8_,0);
      if (iVar1 != 0) goto LAB_0164fce4;
      unaff_x22 = unaff_x22 + 1;
      lVar4 = *(long *)(lVar5 + 0x38);
      lVar6 = lVar6 + 0x10;
    } while (lVar4 != 0);
  }
  do {
    func_0x00f78af4();
LAB_0164fce4:
    lVar4 = *(long *)(lVar5 + 0x40);
  } while (lVar4 == 0);
  if ((uint)unaff_x22 < *(uint *)(lVar4 + 0x18)) {
    return *(long **)(lVar4 + unaff_x22 * 8 + 0x20);
  }
LAB_0164fd18:
  uVar3 = func_0x00f78b24();
  auVar7 = func_0x00f78ac0(uVar3,0);
  lVar5 = auVar7._0_8_;
  if ((bRam0000000003eb57bd & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb57bd = 1;
  }
  lVar4 = *(long *)(lVar5 + 0x38);
  if (lVar4 != 0) {
    unaff_x22 = 0;
    lVar6 = 0x20;
    do {
      lVar4 = *(long *)(lVar4 + 0x28);
      if (lVar4 == 0) break;
      if ((long)(int)*(uint *)(lVar4 + 0x18) <= (long)unaff_x22) {
        return auVar7._8_8_;
      }
      if (*(uint *)(lVar4 + 0x18) <= unaff_x22) goto LAB_0164fe0c;
      uVar3 = *(undefined8 *)(lVar4 + lVar6);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar1 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar3,auVar7._8_8_,0);
      if (iVar1 != 0) goto LAB_0164fdd8;
      unaff_x22 = unaff_x22 + 1;
      lVar4 = *(long *)(lVar5 + 0x38);
      lVar6 = lVar6 + 0x10;
    } while (lVar4 != 0);
  }
  do {
    func_0x00f78af4();
LAB_0164fdd8:
    lVar4 = *(long *)(lVar5 + 0x48);
  } while (lVar4 == 0);
  if ((uint)unaff_x22 < *(uint *)(lVar4 + 0x18)) {
    return *(long **)(lVar4 + unaff_x22 * 8 + 0x20);
  }
LAB_0164fe0c:
  uVar3 = func_0x00f78b24();
  plVar2 = (long *)func_0x00f78ac0(uVar3,0);
  return plVar2;
}



// ============================================================
// RVA: 0x16511b4 | Core.Localisation.LocaliseAlignmentBehaviour.LanguageChanged
// ============================================================

/* WARNING: Possible PIC construction at 0x018729d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872a58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872b14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872c18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872cac: Changing call to branch */

long * Core_Localisation_LocaliseAlignmentBehaviour__LanguageChanged
                 (undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  bool bVar1;
  uint uVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  undefined1 **ppuVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined4 *extraout_x1;
  undefined4 *extraout_x1_00;
  undefined4 *puVar14;
  undefined4 *puVar15;
  code *UNRECOVERED_JUMPTABLE;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong unaff_x22;
  long lVar19;
  long lVar20;
  undefined8 unaff_x23;
  long lVar21;
  long unaff_x24;
  undefined8 unaff_x25;
  ulong uVar22;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar23;
  undefined *puVar24;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auStack_1b0 [8];
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined8 ******ppppppuStack_170;
  undefined *puStack_168;
  undefined1 auStack_160 [12];
  undefined4 uStack_154;
  undefined8 ******ppppppuStack_120;
  undefined *puStack_118;
  long lStack_110;
  undefined4 *puStack_108;
  undefined4 *puStack_100;
  long *plStack_f8;
  undefined8 ******ppppppuStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 ******ppppppuStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 ******ppppppuStack_50;
  undefined *puStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  Core_Localisation_LocaliseAlignmentBehaviour__UpdateTextComponent();
  if ((bRam0000000003eb57cb & 1) == 0) {
    func_0x00f78a20(0x3d230d8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb57cb = 1;
  }
  uVar17 = *(undefined8 *)(param_3 + 0x20);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar8 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar17,0,0);
  if (((ulong)plVar8 & 1) != 0) {
    return plVar8;
  }
  if (((*(ushort *)((long)/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  lVar16 = *(long *)/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8[0x17];
  if (lVar16 == 0) {
    return /*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8;
  }
  if (((*(ushort *)((long)/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8[0x1c] == 0)) {
    func_0x00f78ad0();
    lVar16 = *(long *)/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8[0x17];
    if (lVar16 == 0) goto LAB_016510c0;
  }
  bVar6 = *(char *)(param_3 + 0x2c) == '\0';
  bVar1 = !bVar6;
  if (*(char *)(lVar16 + 0x60) != '\0') {
    bVar1 = bVar6;
  }
  uVar2 = (uint)bVar1;
  plVar8 = *(long **)(param_3 + 0x20);
  if (plVar8 == (long *)0x0) {
LAB_016510c0:
    uVar17 = func_0x00f78af4();
    ppppppuStack_50 = (undefined8 ******)0x3d230d8;
    uStack_38 = Core_Localisation_LocaliseAlignmentBehaviour__OnDestroy;
    puStack_48 = (undefined *)param_3;
    puStack_40 = &stack0xfffffffffffffff0;
    if ((bRam0000000003eb57c9 & 1) == 0) {
      func_0x00f78a20(0x3d2a320);
      func_0x00f78a20(0x3d1b598);
      func_0x00f78a20(0x3d5a130);
      func_0x00f78a20(0x3d230d8);
      bRam0000000003eb57c9 = 1;
    }
    if (((*(ushort *)((long)/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8[0x1c] == 0)) {
      func_0x00f78ad0();
    }
    lVar16 = *(long *)/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8[0x17];
    if (lVar16 == 0) {
      return /*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ plRam0000000003d230d8;
    }
    uVar18 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ lRam0000000003d1b598);
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar18,uVar17,uRam0000000003d5a130,uRam0000000003d2a320);
    if ((bRam0000000003eb57bb & 1) == 0) {
      func_0x00f78a20(0x3d1b598);
      bRam0000000003eb57bb = 1;
    }
    plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(*(undefined8 *)(lVar16 + 0x10),uVar18,0);
    if ((plVar8 == (long *)0x0) || (*plVar8 == /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598)) {
      *(long **)(lVar16 + 0x10) = plVar8;
      return plVar8;
    }
    auVar25 = func_0x00f78e5c();
    lVar12 = auVar25._0_8_;
    puStack_88 = (undefined *)0x3eb5000;
    uVar17 = 0x3eb5000;
    uStack_80 = uVar18;
    uStack_78 = lVar16;
    if ((bRam0000000003eb57bc & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb57bc = 1;
    }
    lVar16 = *(long *)(lVar12 + 0x38);
    if (lVar16 != 0) {
      unaff_x22 = 0;
      uVar18 = 0x3d23990;
      unaff_x24 = 0x20;
      do {
        lVar16 = *(long *)(lVar16 + 0x20);
        unaff_x23 = uVar18;
        if (lVar16 == 0) break;
        if ((long)(int)*(uint *)(lVar16 + 0x18) <= (long)unaff_x22) {
          return auVar25._8_8_;
        }
        if (*(uint *)(lVar16 + 0x18) <= unaff_x22) goto LAB_0164fd18;
        uVar17 = *(undefined8 *)(lVar16 + unaff_x24);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar7 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar17,auVar25._8_8_,0);
        if (iVar7 != 0) goto LAB_0164fce4;
        unaff_x22 = unaff_x22 + 1;
        lVar16 = *(long *)(lVar12 + 0x38);
        unaff_x24 = unaff_x24 + 0x10;
        unaff_x23 = 0x3d23990;
      } while (lVar16 != 0);
    }
    do {
      func_0x00f78af4();
LAB_0164fce4:
      lVar16 = *(long *)(lVar12 + 0x40);
    } while (lVar16 == 0);
    if ((uint)unaff_x22 < *(uint *)(lVar16 + 0x18)) {
      return *(long **)(lVar16 + unaff_x22 * 8 + 0x20);
    }
LAB_0164fd18:
    uVar18 = func_0x00f78b24();
    auVar25 = func_0x00f78ac0(uVar18,0);
    lVar16 = auVar25._0_8_;
    lStack_e0 = unaff_x24;
    uStack_d8 = unaff_x23;
    uStack_d0 = unaff_x22;
    uStack_c8 = uVar17;
    if ((bRam0000000003eb57bd & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb57bd = 1;
    }
    lVar12 = *(long *)(lVar16 + 0x38);
    if (lVar12 != 0) {
      unaff_x22 = 0;
      lVar19 = 0x20;
      do {
        lVar12 = *(long *)(lVar12 + 0x28);
        if (lVar12 == 0) break;
        if ((long)(int)*(uint *)(lVar12 + 0x18) <= (long)unaff_x22) {
          return auVar25._8_8_;
        }
        if (*(uint *)(lVar12 + 0x18) <= unaff_x22) goto LAB_0164fe0c;
        uVar17 = *(undefined8 *)(lVar12 + lVar19);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar7 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar17,auVar25._8_8_,0);
        if (iVar7 != 0) goto LAB_0164fdd8;
        unaff_x22 = unaff_x22 + 1;
        lVar12 = *(long *)(lVar16 + 0x38);
        lVar19 = lVar19 + 0x10;
      } while (lVar12 != 0);
    }
    do {
      func_0x00f78af4();
LAB_0164fdd8:
      lVar12 = *(long *)(lVar16 + 0x48);
    } while (lVar12 == 0);
    if ((uint)unaff_x22 < *(uint *)(lVar12 + 0x18)) {
      return *(long **)(lVar12 + unaff_x22 * 8 + 0x20);
    }
LAB_0164fe0c:
    uVar17 = func_0x00f78b24();
    plVar8 = (long *)func_0x00f78ac0(uVar17,0);
    return plVar8;
  }
  if (uVar2 == (*(char *)((long)plVar8 + 0x62) != '\0')) {
    return plVar8;
  }
  if ((bRam0000000003ec2cbf & 1) == 0) {
    func_0x00f78a20(0x3d59d60,(undefined4 *)(ulong)uVar2,0);
    bRam0000000003ec2cbf = 1;
  }
  lVar16 = (long)plVar8 + 0x62;
  auVar25._8_8_ = lVar16;
  auVar25._0_8_ = plVar8;
  uStack_38 = (code *)CONCAT17(bVar1,(undefined7)uStack_38);
  lVar19 = **(long **)(lRam0000000003d59d60 + 0x30);
  lVar12 = lRam0000000003d59d60;
  if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar19);
  }
  uVar17 = func_0x00f78ae0(lVar19,(long)&uStack_38 + 7);
  puVar14 = (undefined4 *)0x0;
  plVar9 = (long *)/*System.Boolean$$Equals*/ func_0x02940ff0(lVar16,uVar17);
  auVar4._8_8_ = puStack_108;
  auVar4._0_8_ = plStack_f8;
  if (((ulong)plVar9 & 1) != 0) {
    return plVar9;
  }
  *(bool *)lVar16 = bVar1;
  if (plVar8 == (long *)0x0) {
    auVar25 = func_0x00f78af4();
    puStack_48 = &UnityEngine_UI_LayoutGroup__SetProperty_int_;
    uStack_78 = CONCAT44((int)puVar14,(undefined4)uStack_78);
    lVar19 = **(long **)(lVar12 + 0x30);
    ppppppuStack_50 = (undefined8 ******)&stack0xfffffffffffffff0;
    if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar19);
    }
    uVar17 = func_0x00f78ae0(lVar19,(long)&uStack_78 + 4);
    puVar15 = (undefined4 *)0x0;
    plVar8 = (long *)/*System.Int32$$Equals*/ func_0x02ae9af0(auVar25._8_8_,uVar17);
    auVar4._8_8_ = puStack_108;
    auVar4._0_8_ = plStack_f8;
    if (((ulong)plVar8 & 1) != 0) {
      return plVar8;
    }
    *auVar25._8_8_ = (int)puVar14;
    if (auVar25._0_8_ == (long *)0x0) {
      auVar25 = func_0x00f78af4();
      puVar14 = auVar25._8_8_;
      plVar8 = auVar25._0_8_;
      ppuVar5 = (undefined1 **)&lStack_e0;
      puStack_88 = &UnityEngine_UI_LayoutGroup__SetProperty_GridLayoutGroup_Corner_;
      uStack_c8 = CONCAT44((int)puVar15,(undefined4)uStack_c8);
      lVar16 = **(long **)(lVar12 + 0x30);
      ppppppuStack_90 = &ppppppuStack_50;
      if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar16);
      }
      unaff_x23 = func_0x00f78ae0(lVar16,(long)&uStack_c8 + 4);
      lVar16 = **(long **)(lVar12 + 0x30);
      if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar16);
      }
      uStack_d8 = 0xffffffffffffffff;
      uStack_d0 = CONCAT44(uStack_d0._4_4_,*puVar14);
      lVar12 = *(long *)(lVar16 + 0x140);
      lStack_e0 = lVar16;
      plVar9 = (long *)(**(code **)(lVar16 + 0x138))(&lStack_e0,unaff_x23);
      auVar4._8_8_ = puStack_108;
      auVar4._0_8_ = plStack_f8;
      if (((ulong)plVar9 & 1) != 0) {
        return plVar9;
      }
      *puVar14 = (int)puVar15;
      if (plVar8 == (long *)0x0) {
        auVar26 = func_0x00f78af4();
        puStack_e8 = &UnityEngine_UI_LayoutGroup__SetProperty_RectOffset_;
        plVar9 = (long *)*auVar26._8_8_;
        if (lVar12 == 0 && plVar9 == (long *)0x0) {
          return plVar9;
        }
        lVar20 = lVar12;
        lStack_110 = lVar16;
        puStack_100 = puVar15;
        ppppppuStack_f0 = &ppppppuStack_90;
        auVar4 = auVar25;
        if (plVar9 != (long *)0x0) {
          lVar20 = *(long *)(*plVar9 + 0x140);
          puStack_108 = puVar14;
          plStack_f8 = plVar8;
          plVar8 = (long *)(**(code **)(*plVar9 + 0x138))(plVar9,lVar12);
          auVar4._8_8_ = puStack_108;
          auVar4._0_8_ = plStack_f8;
          if (((ulong)plVar8 & 1) != 0) {
            return plVar8;
          }
        }
        puStack_108 = auVar4._8_8_;
        plStack_f8 = auVar4._0_8_;
        auVar25._8_8_ = puStack_108;
        auVar25._0_8_ = auVar26._0_8_;
        *auVar26._8_8_ = lVar12;
        plVar8 = plStack_f8;
        puVar15 = puStack_100;
        lVar19 = lStack_110;
        pppppppuVar23 = (undefined8 *******)ppppppuStack_f0;
        puVar24 = puStack_e8;
        if (auVar26._0_8_ == 0) {
          plVar8 = (long *)func_0x00f78af4();
          ppuVar5 = (undefined1 **)auStack_160;
          puStack_118 = &UnityEngine_UI_LayoutGroup__SetProperty_float_;
          lVar12 = **(long **)(lVar20 + 0x30);
          auVar25._8_8_ = lVar12;
          auVar25._0_8_ = plVar8;
          uStack_154 = extraout_s0;
          ppppppuStack_120 = &ppppppuStack_f0;
          if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar12);
          }
          uVar17 = func_0x00f78ae0(lVar12,&uStack_154);
          lVar12 = 0;
          plVar9 = (long *)/*System.Single$$Equals*/ func_0x029ba7b0(extraout_x1,uVar17);
          auVar4._8_8_ = puStack_108;
          auVar4._0_8_ = plStack_f8;
          if (((ulong)plVar9 & 1) != 0) {
            return plVar9;
          }
          *extraout_x1 = extraout_s0;
          if (plVar8 == (long *)0x0) {
            plVar8 = (long *)func_0x00f78af4();
            ppuVar5 = (undefined1 **)auStack_1b0;
            puStack_168 = &UnityEngine_UI_LayoutGroup__SetProperty_Vector2_;
            lVar12 = **(long **)(lVar12 + 0x30);
            auVar25._8_8_ = lVar12;
            auVar25._0_8_ = plVar8;
            uStack_1a8 = extraout_s0_00;
            uStack_1a4 = param_2;
            ppppppuStack_170 = &ppppppuStack_120;
            if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar12);
            }
            uVar17 = func_0x00f78ae0(lVar12,&uStack_1a8);
            lVar12 = 0;
            plVar9 = (long *)/*UnityEngine.Vector2$$Equals*/ func_0x0327a57c(extraout_x1_00,uVar17);
            auVar4._8_8_ = puStack_108;
            auVar4._0_8_ = plStack_f8;
            if (((ulong)plVar9 & 1) != 0) {
              return plVar9;
            }
            *extraout_x1_00 = extraout_s0_00;
            extraout_x1_00[1] = param_2;
            if (plVar8 == (long *)0x0) {
              auVar25 = func_0x00f78af4();
              plVar8 = auVar25._0_8_;
              lVar16 = *plVar8;
              func_0x00f78a30();
              if (lVar16 != 0) {
                return (long *)*plVar8;
              }
                    /* WARNING: Could not recover jumptable at 0x01872d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              plVar8 = (long *)(*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 0x10))
                                         (plVar8,auVar25._8_8_);
              return plVar8;
            }
            puVar15 = extraout_x1_00;
            lVar19 = lVar16;
            pppppppuVar23 = &ppppppuStack_170;
            puVar24 = &UNK_01872cb0;
          }
          else {
            puVar15 = extraout_x1;
            lVar19 = lVar16;
            pppppppuVar23 = &ppppppuStack_120;
            puVar24 = &UNK_01872c1c;
          }
        }
      }
      else {
        ppuVar5 = (undefined1 **)&lStack_e0;
        lVar19 = lVar16;
        pppppppuVar23 = &ppppppuStack_90;
        puVar24 = &UNK_01872b18;
      }
    }
    else {
      ppuVar5 = (undefined1 **)&uStack_80;
      plVar8 = auVar25._0_8_;
      puVar15 = puVar14;
      pppppppuVar23 = &ppppppuStack_50;
      puVar24 = &UNK_01872a5c;
    }
  }
  else {
    ppuVar5 = &puStack_40;
    puVar15 = (undefined4 *)(ulong)uVar2;
    pppppppuVar23 = (undefined8 *******)&stack0xfffffffffffffff0;
    puVar24 = &UNK_018729d4;
  }
  puStack_108 = auVar4._8_8_;
  plStack_f8 = auVar4._0_8_;
  plVar9 = auVar25._0_8_;
  *(long *)((long)ppuVar5 + -0x30) = lVar19;
  *(long *)((long)ppuVar5 + -0x28) = auVar25._8_8_;
  *(undefined4 **)((long)ppuVar5 + -0x20) = puVar15;
  *(long **)((long)ppuVar5 + -0x18) = plVar8;
  *(undefined8 ********)((long)ppuVar5 + -0x10) = pppppppuVar23;
  *(undefined **)((long)ppuVar5 + -8) = puVar24;
  if ((bRam0000000003ec2d3a & 1) == 0) {
    func_0x00f78a20(0x3d20558,0);
    func_0x00f78a20(0x3d22df0);
    bRam0000000003ec2d3a = 1;
  }
  plVar8 = (long *)(**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
  if ((int)plVar8 == 0) {
    return plVar8;
  }
  if (((*(ushort *)(/*UnityEngine.UI.CanvasUpdateRegistry_TypeInfo*/ lRam0000000003d20558 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.UI.CanvasUpdateRegistry_TypeInfo*/ lRam0000000003d20558 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar13 = /*UnityEngine.UI.CanvasUpdateRegistry$$IsRebuildingLayout*/ func_0x032afad4(0);
  lVar16 = /*UnityEngine.UI.LayoutGroup$$get_rectTransform*/ func_0x032d19e4(plVar9);
  if ((uVar13 & 1) != 0) {
    lVar16 = /*UnityEngine.UI.LayoutGroup$$DelayedSetDirty*/ func_0x032d29d0(lVar16,lVar16);
    plVar8 = *(long **)((long)ppuVar5 + -0x20);
    uVar17 = *(undefined8 *)((long)ppuVar5 + -0x30);
    uVar18 = *(undefined8 *)((long)ppuVar5 + -0x28);
    *(undefined8 *)((long)ppuVar5 + -0x30) = uVar17;
    *(undefined8 *)((long)ppuVar5 + -0x28) = uVar18;
    *(long **)((long)ppuVar5 + -0x20) = plVar8;
    *(undefined8 *)((long)ppuVar5 + -0x18) = *(undefined8 *)((long)ppuVar5 + -0x18);
    *(undefined8 *)((long)ppuVar5 + -0x10) = *(undefined8 *)((long)ppuVar5 + -0x10);
    *(undefined8 *)((long)ppuVar5 + -8) = *(undefined8 *)((long)ppuVar5 + -8);
    if (lVar16 == 0) {
      func_0x00f78a24(0x3d23938,0,0);
      uVar10 = func_0x00f78aec();
      uVar11 = func_0x00f78a24(0x3d7b500);
      /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar10,uVar11,0);
    }
    else {
      uVar18 = 0x3ec0000;
      if (pcRam0000000003ec01d0 == (code *)0x0) {
        pcRam0000000003ec01d0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                    );
      }
      uVar13 = (*pcRam0000000003ec01d0)(plVar9);
      if ((uVar13 & 1) != 0) {
        if (pcRam0000000003ec01e0 == (code *)0x0) {
          pcRam0000000003ec01e0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar8 = (long *)(*pcRam0000000003ec01e0)(plVar9,lVar16);
        return plVar8;
      }
      func_0x00f78a24(0x3d1fce8);
      uVar10 = func_0x00f78aec();
      uVar11 = func_0x00f78a24(0x3d6af80);
      /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar10,uVar11,0);
      plVar8 = plVar9;
    }
    uVar11 = func_0x00f78a24(0x3d5a8a8);
    auVar25 = func_0x00f78ac0(uVar10,uVar11);
    *(undefined8 *)((long)ppuVar5 + -0x60) = uVar17;
    *(undefined8 *)((long)ppuVar5 + -0x58) = uVar18;
    *(long **)((long)ppuVar5 + -0x50) = plVar8;
    *(undefined8 *)((long)ppuVar5 + -0x48) = uVar10;
    *(undefined1 **)((long)ppuVar5 + -0x40) = (undefined1 *)((long)ppuVar5 + -0x10);
    *(undefined **)((long)ppuVar5 + -0x38) = &UnityEngine_MonoBehaviour__StartCoroutineManaged2;
    if (pcRam0000000003ec01e0 == (code *)0x0) {
      pcRam0000000003ec01e0 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar8 = (long *)(*pcRam0000000003ec01e0)(auVar25._0_8_,auVar25._8_8_);
    return plVar8;
  }
  if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)((long)ppuVar5 + -0x60) = unaff_x28;
  *(undefined8 *)((long)ppuVar5 + -0x58) = unaff_x27;
  *(undefined8 *)((long)ppuVar5 + -0x50) = unaff_x26;
  *(undefined8 *)((long)ppuVar5 + -0x48) = unaff_x25;
  *(long *)((long)ppuVar5 + -0x40) = unaff_x24;
  *(undefined8 *)((long)ppuVar5 + -0x38) = unaff_x23;
  *(undefined8 *)((long)ppuVar5 + -0x30) = *(undefined8 *)((long)ppuVar5 + -0x30);
  *(undefined8 *)((long)ppuVar5 + -0x28) = *(undefined8 *)((long)ppuVar5 + -0x28);
  *(undefined8 *)((long)ppuVar5 + -0x20) = *(undefined8 *)((long)ppuVar5 + -0x20);
  *(undefined8 *)((long)ppuVar5 + -0x18) = *(undefined8 *)((long)ppuVar5 + -0x18);
  *(undefined8 *)((long)ppuVar5 + -0x10) = *(undefined8 *)((long)ppuVar5 + -0x10);
  *(undefined8 *)((long)ppuVar5 + -8) = *(undefined8 *)((long)ppuVar5 + -8);
  if ((bRam0000000003ec2d44 & 1) == 0) {
    func_0x00f78a20(0x3d20068);
    func_0x00f78a20(0x3d19788);
    func_0x00f78a20(0x3d22df0);
    func_0x00f78a20(0x3d398f8);
    func_0x00f78a20(0x3d39900);
    func_0x00f78a20(0x3d1d6c0);
    func_0x00f78a20(0x3d3a1c0);
    func_0x00f78a20(0x3d3a1c8);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d25458);
    bRam0000000003ec2d44 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar8 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar16,0,0);
  if (((ulong)plVar8 & 1) != 0) {
    return plVar8;
  }
  if (lVar16 == 0) {
code_r0x032d1910:
    lVar16 = func_0x00f78af4();
    return *(long **)(lVar16 + 0x18);
  }
  uVar17 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar16,0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar8 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar17,0,0);
  if (((ulong)plVar8 & 1) != 0) {
    return plVar8;
  }
  if (((*(ushort *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar12 = /*UnityEngine.UI.ListPool<RectMask2D>$$Get*/ func_0x0233df3c(uRam0000000003d398f8);
  plVar8 = (long *)/*UnityEngine.Transform$$get_parent*/ func_0x03275c98(lVar16,0);
  if (plVar8 == (long *)0x0) {
    plVar8 = (long *)0x0;
  }
  else if (*plVar8 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
    plVar8 = (long *)0x0;
  }
  *(long *)((long)ppuVar5 + -0x68) = lVar16;
code_r0x032d1694:
  do {
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar13 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(plVar8,0,0);
    if ((uVar13 & 1) != 0) break;
    if (plVar8 == (long *)0x0) goto code_r0x032d1910;
    uVar17 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(plVar8,0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar7 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar17,0,0);
    uVar17 = /*UnityEngine.UI.ILayoutGroup_var*/ uRam0000000003d19788;
    if (iVar7 != 0) break;
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar17 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar17,0);
    /*UnityEngine.Component$$GetComponents*/ func_0x03227d78(plVar8,uVar17,lVar12,0);
    if (lVar12 == 0) goto code_r0x032d1910;
    uVar2 = *(uint *)(lVar12 + 0x18);
    uVar13 = (ulong)uVar2;
    bVar1 = 0 < (int)uVar2;
    if (0 < (int)uVar2) {
      uVar22 = 0;
      do {
        if ((uVar13 & 0xffffffff) <= uVar22) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar9 = *(long **)(*(long *)(lVar12 + 0x10) + uVar22 * 8 + 0x20);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar9,0,0);
        if ((iVar7 != 0) && (plVar9 != (long *)0x0)) {
          if ((*(byte *)(/*UnityEngine.Behaviour_TypeInfo*/ lRam0000000003d20068 + 300) <= *(byte *)(*plVar9 + 300)) &&
             ((*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(/*UnityEngine.Behaviour_TypeInfo*/ lRam0000000003d20068 + 300) * 8
                        + -8) == /*UnityEngine.Behaviour_TypeInfo*/ lRam0000000003d20068 &&
              (uVar13 = /*UnityEngine.Behaviour$$get_isActiveAndEnabled*/ func_0x0321a980(plVar9,0), (uVar13 & 1) != 0)))) {
            *(long **)((long)ppuVar5 + -0x68) = plVar8;
            break;
          }
        }
        uVar22 = uVar22 + 1;
        uVar13 = (ulong)*(int *)(lVar12 + 0x18);
        bVar1 = (long)uVar22 < (long)uVar13;
      } while ((long)uVar22 < (long)uVar13);
    }
    plVar8 = (long *)/*UnityEngine.Transform$$get_parent*/ func_0x03275c98(plVar8,0);
    if (plVar8 != (long *)0x0) {
      if (*plVar8 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
        plVar8 = (long *)0x0;
      }
      if (!bVar1) break;
      goto code_r0x032d1694;
    }
    plVar8 = (long *)0x0;
  } while (bVar1);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar17 = *(undefined8 *)((long)ppuVar5 + -0x68);
  iVar7 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar17,lVar16,0);
  if (iVar7 != 0) {
    if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar13 = /*UnityEngine.UI.LayoutRebuilder$$ValidController*/ func_0x032d39d8(uVar17,lVar12);
    if ((uVar13 & 1) == 0) goto code_r0x032d18c0;
  }
  if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*UnityEngine.UI.LayoutRebuilder$$MarkLayoutRootForRebuild*/ func_0x032d3be8(uVar17);
code_r0x032d18c0:
  if (((*(ushort *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar16 = lRam0000000003d39900;
  uVar17 = *(undefined8 *)((long)ppuVar5 + -0x30);
  uVar18 = *(undefined8 *)((long)ppuVar5 + -0x40);
  uVar11 = *(undefined8 *)((long)ppuVar5 + -0x38);
  *(undefined8 *)((long)ppuVar5 + -0x40) = uVar18;
  *(undefined8 *)((long)ppuVar5 + -0x38) = uVar11;
  *(undefined8 *)((long)ppuVar5 + -0x30) = uVar17;
  *(undefined8 *)((long)ppuVar5 + -0x28) = *(undefined8 *)((long)ppuVar5 + -0x28);
  *(undefined8 *)((long)ppuVar5 + -0x20) = *(undefined8 *)((long)ppuVar5 + -0x20);
  *(undefined8 *)((long)ppuVar5 + -0x18) = *(undefined8 *)((long)ppuVar5 + -0x18);
  *(undefined8 *)((long)ppuVar5 + -0x10) = *(undefined8 *)((long)ppuVar5 + -0x10);
  *(undefined8 *)((long)ppuVar5 + -8) = *(undefined8 *)((long)ppuVar5 + -8);
  lVar19 = *(long *)(lRam0000000003d39900 + 0x18);
  if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar19);
  }
  lVar19 = *(long *)(*(long *)(lVar19 + 0xc0) + 8);
  uVar3 = *(ushort *)(lVar19 + 0x132);
  if ((uVar3 & 1) == 0) {
    func_0x00fac028(lVar19);
    uVar3 = *(ushort *)(lVar19 + 0x132);
  }
  if ((uVar3 >> 10 & 1) != 0) {
    lVar19 = *(long *)(lVar16 + 0x18);
    if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar19);
    }
    lVar19 = *(long *)(*(long *)(lVar19 + 0xc0) + 8);
    if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar19);
    }
    if (*(int *)(lVar19 + 0xe0) == 0) {
      lVar19 = *(long *)(lVar16 + 0x18);
      if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar19);
      }
      lVar19 = *(long *)(*(long *)(lVar19 + 0xc0) + 8);
      if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar19);
      }
      func_0x00f78ad0(lVar19);
    }
  }
  lVar19 = *(long *)(lVar16 + 0x18);
  if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar19);
  }
  lVar19 = *(long *)(*(long *)(lVar19 + 0xc0) + 8);
  if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar19);
  }
  lVar19 = **(long **)(lVar19 + 0xb8);
  if (lVar19 != 0) {
    lVar21 = *(long *)(lVar16 + 0x18);
    uVar3 = *(ushort *)(lVar21 + 0x132);
    lVar20 = lVar21;
    if ((uVar3 & 1) == 0) {
      func_0x00fac028(lVar21);
      lVar20 = *(long *)(lVar16 + 0x18);
      uVar3 = *(ushort *)(lVar20 + 0x132);
    }
    UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar21 + 0xc0) + 0x18);
    if ((uVar3 & 1) == 0) {
      *(code **)((long)ppuVar5 + -0x48) = UNRECOVERED_JUMPTABLE;
      func_0x00fac028(lVar20);
      UNRECOVERED_JUMPTABLE = *(code **)((long)ppuVar5 + -0x48);
    }
                    /* WARNING: Could not recover jumptable at 0x0233e1e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar8 = (long *)(*UNRECOVERED_JUMPTABLE)
                               (lVar19,lVar12,*(undefined8 *)(*(long *)(lVar20 + 0xc0) + 0x18));
    return plVar8;
  }
  lVar19 = func_0x00f78af4();
  *(undefined8 *)((long)ppuVar5 + -0x90) = uVar18;
  *(undefined8 *)((long)ppuVar5 + -0x88) = uVar11;
  *(undefined8 *)((long)ppuVar5 + -0x80) = uVar17;
  *(undefined8 *)((long)ppuVar5 + -0x78) = 0;
  *(long *)((long)ppuVar5 + -0x70) = lVar16;
  *(long *)((long)ppuVar5 + -0x68) = lVar12;
  *(undefined1 **)((long)ppuVar5 + -0x60) = (undefined1 *)((long)ppuVar5 + -0x10);
  *(undefined **)((long)ppuVar5 + -0x58) = &UnityEngine_UI_ListPool_object____cctor;
  lVar16 = *(long *)(lVar19 + 0x18);
  if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar16);
  }
  lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x28);
  if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar16);
  }
  uVar17 = func_0x00f78aec(lVar16);
  lVar12 = *(long *)(lVar19 + 0x18);
  uVar3 = *(ushort *)(lVar12 + 0x132);
  lVar16 = lVar12;
  if ((uVar3 & 1) == 0) {
    func_0x00fac028(lVar12);
    lVar16 = *(long *)(lVar19 + 0x18);
    uVar3 = *(ushort *)(lVar16 + 0x132);
  }
  UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar12 + 0xc0) + 0x30);
  lVar12 = lVar16;
  if ((uVar3 & 1) == 0) {
    func_0x00fac028(lVar16);
    lVar12 = *(long *)(lVar19 + 0x18);
    uVar3 = *(ushort *)(lVar12 + 0x132);
  }
  uVar18 = *(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x20);
  if ((uVar3 & 1) == 0) {
    func_0x00fac028(lVar12);
  }
  (*UNRECOVERED_JUMPTABLE)(uVar17,0,uVar18,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x30));
  lVar16 = *(long *)(lVar19 + 0x18);
  if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar16);
  }
  lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x38);
  if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar16);
  }
  uVar18 = func_0x00f78aec(lVar16);
  lVar12 = *(long *)(lVar19 + 0x18);
  uVar3 = *(ushort *)(lVar12 + 0x132);
  lVar16 = lVar12;
  if ((uVar3 & 1) == 0) {
    func_0x00fac028(lVar12);
    lVar16 = *(long *)(lVar19 + 0x18);
    uVar3 = *(ushort *)(lVar16 + 0x132);
  }
  UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar12 + 0xc0) + 0x40);
  if ((uVar3 & 1) == 0) {
    func_0x00fac028(lVar16);
  }
  plVar8 = (long *)(*UNRECOVERED_JUMPTABLE)
                             (uVar18,0,uVar17,*(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x40));
  lVar16 = *(long *)(lVar19 + 0x18);
  if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
    plVar8 = (long *)func_0x00fac028(lVar16);
  }
  lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
  if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
    plVar8 = (long *)func_0x00fac028(lVar16);
  }
  **(undefined8 **)(lVar16 + 0xb8) = uVar18;
  return plVar8;
}



// ============================================================
// RVA: 0x16511d8 | Core.Localisation.LocaliseAlignmentBehaviour..ctor
// ============================================================

undefined1  [16] Core_Localisation_LocaliseAlignmentBehaviour___ctor(ulong param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)(param_1 + 0x28) = 0x802;
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



// ============================================================
// RVA: 0x16511e8 | Core.Localisation.LocaliseAlignmentBehaviour..cctor
// ============================================================

void Core_Localisation_LocaliseAlignmentBehaviour___cctor(void)

{
  return;
}



