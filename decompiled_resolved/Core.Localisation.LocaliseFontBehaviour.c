// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Localisation.LocaliseFontBehaviour

// ============================================================
// RVA: 0x16511ec | Core.Localisation.LocaliseFontBehaviour.UpdateTextComponent
// ============================================================

long * Core_Localisation_LocaliseFontBehaviour__UpdateTextComponent(long param_1)

{
  ulong *puVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong unaff_x22;
  undefined8 unaff_x23;
  long lVar11;
  long unaff_x24;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 uStack_a8;
  code *pcStack_88;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  if ((bRam0000000003eb57cc & 1) == 0) {
    func_0x00f78a20(0x3d230e0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb57cc = 1;
  }
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar9,0,0);
  if ((int)plVar4 == 0) {
    return plVar4;
  }
  if (((*(ushort *)((long)/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ plRam0000000003d230e0 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ plRam0000000003d230e0[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  if (*(long *)/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ plRam0000000003d230e0[0x17] == 0) {
    return /*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ plRam0000000003d230e0;
  }
  uVar9 = 0x3eb5000;
  if ((bRam0000000003eb57cd & 1) == 0) {
    func_0x00f78a20(0x3d230e0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb57cd = 1;
  }
  if (((*(ushort *)((long)/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ plRam0000000003d230e0 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ plRam0000000003d230e0[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = 0x3d230e0;
  if (*(long *)/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ plRam0000000003d230e0[0x17] != 0) {
    uVar9 = Core_Localisation_LocalisationManager__GetFontReplacement
                      (*(long *)/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ plRam0000000003d230e0[0x17],*(undefined8 *)(param_1 + 0x20));
    if (*(long *)/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ plRam0000000003d230e0[0x17] != 0) {
      uVar5 = Core_Localisation_LocalisationManager__GetMaterialReplacement
                        (*(long *)/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ plRam0000000003d230e0[0x17],*(undefined8 *)(param_1 + 0x28));
      uVar3 = 0x3d230e0;
      if (*(long *)(param_1 + 0x18) != 0) {
        unaff_x22 = *(ulong *)(*(long *)(param_1 + 0x18) + 0xf0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x22,uVar9,0);
        uVar3 = uVar5;
        unaff_x23 = 0x3d23990;
        if (iVar2 != 0) {
          if (*(long *)(param_1 + 0x18) == 0) goto code_r0x01651430;
          /*TMPro.TMP_Text$$set_font*/ func_0x031ae8c4(*(long *)(param_1 + 0x18),uVar9,0);
        }
        plVar4 = *(long **)(param_1 + 0x18);
        if (plVar4 != (long *)0x0) {
          uVar9 = (**(code **)(*plVar4 + 0x568))(plVar4,*(undefined8 *)(*plVar4 + 0x570));
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          plVar4 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar9,uVar5,0);
          if ((int)plVar4 == 0) {
            return plVar4;
          }
          plVar4 = *(long **)(param_1 + 0x18);
          unaff_x23 = 0x3d23990;
          if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01651418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            plVar4 = (long *)(**(code **)(*plVar4 + 0x578))
                                       (plVar4,uVar5,*(undefined8 *)(*plVar4 + 0x580));
            return plVar4;
          }
        }
      }
    }
  }
code_r0x01651430:
  plVar4 = (long *)func_0x00f78af4();
  puStack_48 = &Core_Localisation_LocaliseFontBehaviour__Awake;
  uStack_70 = unaff_x22;
  uStack_68 = uVar9;
  uStack_60 = uVar3;
  lStack_58 = param_1;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb57ce & 1) == 0) {
    func_0x00f78a20(0x3d2a320);
    func_0x00f78a20(0x3d1b598);
    func_0x00f78a20(0x3d53558);
    func_0x00f78a20(0x3d5a138);
    func_0x00f78a20(0x3d230e0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb57ce = 1;
  }
  lVar6 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(plVar4,uRam0000000003d53558);
  plVar4[3] = lVar6;
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar6,0,0);
  if (iVar2 != 0) {
    plVar7 = (long *)plVar4[3];
    if (plVar7 == (long *)0x0) {
      uVar9 = func_0x00f78af4();
      uStack_a8 = 0x3d23990;
      pcStack_88 = (code *)&Core_Localisation_LocaliseFontBehaviour__OnDestroy;
      if ((bRam0000000003eb57cf & 1) == 0) {
        func_0x00f78a20(0x3d2a320);
        func_0x00f78a20(0x3d1b598);
        func_0x00f78a20(0x3d5a138);
        func_0x00f78a20(0x3d230e0);
        bRam0000000003eb57cf = 1;
      }
      if (((*(ushort *)((long)/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ plRam0000000003d230e0 + 0x132) >> 10 & 1) != 0) &&
         ((int)/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ plRam0000000003d230e0[0x1c] == 0)) {
        func_0x00f78ad0();
      }
      lVar8 = *(long *)/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ plRam0000000003d230e0[0x17];
      if (lVar8 == 0) {
        return /*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ plRam0000000003d230e0;
      }
      uVar3 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ lRam0000000003d1b598);
      auVar12._8_8_ = uVar3;
      auVar12._0_8_ = lVar8;
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar3,uVar9,uRam0000000003d5a138,uRam0000000003d2a320);
      uVar10 = 0x3d53558;
      puVar1 = (ulong *)&stack0xffffffffffffff80;
      goto code_r0x0164fbb4;
    }
    plVar4[4] = plVar7[0x1e];
    lVar6 = (**(code **)(*plVar7 + 0x568))(plVar7,*(undefined8 *)(*plVar7 + 0x570));
    plVar4[5] = lVar6;
    (**(code **)(*plVar4 + 0x178))(plVar4,*(undefined8 *)(*plVar4 + 0x180));
  }
  if (((*(ushort *)((long)/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ plRam0000000003d230e0 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ plRam0000000003d230e0[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  plVar7 = *(long **)/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ plRam0000000003d230e0[0x17];
  if (plVar7 == (long *)0x0) {
    return /*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ plRam0000000003d230e0;
  }
  lVar6 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ lRam0000000003d1b598);
  /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar6,plVar4,uRam0000000003d5a138,uRam0000000003d2a320);
  uVar10 = uStack_70;
  puVar1 = &uStack_70;
  uStack_a8 = 0x3eb5000;
  if ((bRam0000000003eb57ba & 1) == 0) {
    func_0x00f78a20(0x3d1b598);
    bRam0000000003eb57ba = 1;
  }
  plVar4 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(plVar7[2],lVar6,0);
  if ((plVar4 == (long *)0x0) || (*plVar4 == /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598)) {
    plVar7[2] = (long)plVar4;
    return plVar4;
  }
  pcStack_88 = Core_Localisation_LocalisationManager__UnRegisterOnLanguageChanged;
  auVar12 = func_0x00f78e5c();
  plVar4 = plVar7;
code_r0x0164fbb4:
  lVar8 = auVar12._0_8_;
  *(ulong *)((long)puVar1 + -0x30) = uVar10;
  *(undefined8 *)((long)puVar1 + -0x28) = uStack_a8;
  *(long *)((long)puVar1 + -0x20) = lVar6;
  *(long **)((long)puVar1 + -0x18) = plVar4;
  *(undefined1 ***)((long)puVar1 + -0x10) = &puStack_50;
  *(code **)((long)puVar1 + -8) = pcStack_88;
  if ((bRam0000000003eb57bb & 1) == 0) {
    func_0x00f78a20(0x3d1b598);
    bRam0000000003eb57bb = 1;
  }
  plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(*(undefined8 *)(lVar8 + 0x10),auVar12._8_8_,0);
  if ((plVar4 == (long *)0x0) || (*plVar4 == /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598)) {
    *(long **)(lVar8 + 0x10) = plVar4;
    return plVar4;
  }
  auVar13 = func_0x00f78e5c();
  lVar6 = auVar13._0_8_;
  *(long *)((long)puVar1 + -0x70) = unaff_x24;
  *(undefined8 *)((long)puVar1 + -0x68) = unaff_x23;
  *(ulong *)((long)puVar1 + -0x60) = uVar10;
  *(undefined8 *)((long)puVar1 + -0x58) = 0x3eb5000;
  *(long *)((long)puVar1 + -0x50) = auVar12._8_8_;
  *(long *)((long)puVar1 + -0x48) = lVar8;
  *(undefined1 **)((long)puVar1 + -0x40) = (undefined1 *)((long)puVar1 + -0x10);
  *(code **)((long)puVar1 + -0x38) = Core_Localisation_LocalisationManager__GetFontReplacement;
  uVar9 = 0x3eb5000;
  if ((bRam0000000003eb57bc & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb57bc = 1;
  }
  lVar8 = *(long *)(lVar6 + 0x38);
  if (lVar8 != 0) {
    uVar10 = 0;
    unaff_x23 = 0x3d23990;
    unaff_x24 = 0x20;
    do {
      lVar8 = *(long *)(lVar8 + 0x20);
      if (lVar8 == 0) break;
      if ((long)(int)*(uint *)(lVar8 + 0x18) <= (long)uVar10) {
        return auVar13._8_8_;
      }
      if (*(uint *)(lVar8 + 0x18) <= uVar10) goto LAB_0164fd18;
      uVar9 = *(undefined8 *)(lVar8 + unaff_x24);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar9,auVar13._8_8_,0);
      if (iVar2 != 0) goto LAB_0164fce4;
      uVar10 = uVar10 + 1;
      lVar8 = *(long *)(lVar6 + 0x38);
      unaff_x24 = unaff_x24 + 0x10;
    } while (lVar8 != 0);
  }
  do {
    func_0x00f78af4();
LAB_0164fce4:
    lVar8 = *(long *)(lVar6 + 0x40);
  } while (lVar8 == 0);
  if ((uint)uVar10 < *(uint *)(lVar8 + 0x18)) {
    return *(long **)(lVar8 + uVar10 * 8 + 0x20);
  }
LAB_0164fd18:
  uVar3 = func_0x00f78b24();
  auVar12 = func_0x00f78ac0(uVar3,0);
  lVar6 = auVar12._0_8_;
  *(long *)((long)puVar1 + -0xb0) = unaff_x24;
  *(undefined8 *)((long)puVar1 + -0xa8) = unaff_x23;
  *(ulong *)((long)puVar1 + -0xa0) = uVar10;
  *(undefined8 *)((long)puVar1 + -0x98) = uVar9;
  *(undefined1 (*) [16])((long)puVar1 + -0x90) = auVar13;
  *(undefined1 **)((long)puVar1 + -0x80) = (undefined1 *)((long)puVar1 + -0x40);
  *(code **)((long)puVar1 + -0x78) = Core_Localisation_LocalisationManager__GetMaterialReplacement;
  if ((bRam0000000003eb57bd & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb57bd = 1;
  }
  lVar8 = *(long *)(lVar6 + 0x38);
  if (lVar8 != 0) {
    uVar10 = 0;
    lVar11 = 0x20;
    do {
      lVar8 = *(long *)(lVar8 + 0x28);
      if (lVar8 == 0) break;
      if ((long)(int)*(uint *)(lVar8 + 0x18) <= (long)uVar10) {
        return auVar12._8_8_;
      }
      if (*(uint *)(lVar8 + 0x18) <= uVar10) goto LAB_0164fe0c;
      uVar9 = *(undefined8 *)(lVar8 + lVar11);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar9,auVar12._8_8_,0);
      if (iVar2 != 0) goto LAB_0164fdd8;
      uVar10 = uVar10 + 1;
      lVar8 = *(long *)(lVar6 + 0x38);
      lVar11 = lVar11 + 0x10;
    } while (lVar8 != 0);
  }
  do {
    func_0x00f78af4();
LAB_0164fdd8:
    lVar8 = *(long *)(lVar6 + 0x48);
  } while (lVar8 == 0);
  if ((uint)uVar10 < *(uint *)(lVar8 + 0x18)) {
    return *(long **)(lVar8 + uVar10 * 8 + 0x20);
  }
LAB_0164fe0c:
  uVar9 = func_0x00f78b24();
  plVar4 = (long *)func_0x00f78ac0(uVar9,0);
  return plVar4;
}



// ============================================================
// RVA: 0x16512b8 | Core.Localisation.LocaliseFontBehaviour.SetTextFontAndMaterials
// ============================================================

long * Core_Localisation_LocaliseFontBehaviour__SetTextFontAndMaterials(long param_1)

{
  ulong *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong unaff_x22;
  undefined8 unaff_x23;
  long lVar11;
  long unaff_x24;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 uStack_a8;
  code *pcStack_88;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  uVar9 = 0x3eb5000;
  if ((bRam0000000003eb57cd & 1) == 0) {
    func_0x00f78a20(0x3d230e0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb57cd = 1;
  }
  if (((*(ushort *)((long)/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ plRam0000000003d230e0 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ plRam0000000003d230e0[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = 0x3d230e0;
  if (*(long *)/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ plRam0000000003d230e0[0x17] != 0) {
    uVar9 = Core_Localisation_LocalisationManager__GetFontReplacement
                      (*(long *)/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ plRam0000000003d230e0[0x17],*(undefined8 *)(param_1 + 0x20));
    if (*(long *)/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ plRam0000000003d230e0[0x17] != 0) {
      uVar4 = Core_Localisation_LocalisationManager__GetMaterialReplacement
                        (*(long *)/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ plRam0000000003d230e0[0x17],*(undefined8 *)(param_1 + 0x28));
      uVar3 = 0x3d230e0;
      if (*(long *)(param_1 + 0x18) != 0) {
        unaff_x22 = *(ulong *)(*(long *)(param_1 + 0x18) + 0xf0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x22,uVar9,0);
        uVar3 = uVar4;
        unaff_x23 = 0x3d23990;
        if (iVar2 != 0) {
          if (*(long *)(param_1 + 0x18) == 0) goto LAB_01651430;
          /*TMPro.TMP_Text$$set_font*/ func_0x031ae8c4(*(long *)(param_1 + 0x18),uVar9,0);
        }
        plVar5 = *(long **)(param_1 + 0x18);
        if (plVar5 != (long *)0x0) {
          uVar9 = (**(code **)(*plVar5 + 0x568))(plVar5,*(undefined8 *)(*plVar5 + 0x570));
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          plVar5 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar9,uVar4,0);
          if ((int)plVar5 == 0) {
            return plVar5;
          }
          plVar5 = *(long **)(param_1 + 0x18);
          unaff_x23 = 0x3d23990;
          if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01651418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            plVar5 = (long *)(**(code **)(*plVar5 + 0x578))
                                       (plVar5,uVar4,*(undefined8 *)(*plVar5 + 0x580));
            return plVar5;
          }
        }
      }
    }
  }
LAB_01651430:
  plVar5 = (long *)func_0x00f78af4();
  puStack_48 = &Core_Localisation_LocaliseFontBehaviour__Awake;
  uStack_70 = unaff_x22;
  uStack_68 = uVar9;
  uStack_60 = uVar3;
  lStack_58 = param_1;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb57ce & 1) == 0) {
    func_0x00f78a20(0x3d2a320);
    func_0x00f78a20(0x3d1b598);
    func_0x00f78a20(0x3d53558);
    func_0x00f78a20(0x3d5a138);
    func_0x00f78a20(0x3d230e0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb57ce = 1;
  }
  lVar6 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(plVar5,uRam0000000003d53558);
  plVar5[3] = lVar6;
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar6,0,0);
  if (iVar2 != 0) {
    plVar7 = (long *)plVar5[3];
    if (plVar7 == (long *)0x0) {
      uVar9 = func_0x00f78af4();
      uStack_a8 = 0x3d23990;
      pcStack_88 = (code *)&Core_Localisation_LocaliseFontBehaviour__OnDestroy;
      if ((bRam0000000003eb57cf & 1) == 0) {
        func_0x00f78a20(0x3d2a320);
        func_0x00f78a20(0x3d1b598);
        func_0x00f78a20(0x3d5a138);
        func_0x00f78a20(0x3d230e0);
        bRam0000000003eb57cf = 1;
      }
      if (((*(ushort *)((long)/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ plRam0000000003d230e0 + 0x132) >> 10 & 1) != 0) &&
         ((int)/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ plRam0000000003d230e0[0x1c] == 0)) {
        func_0x00f78ad0();
      }
      lVar8 = *(long *)/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ plRam0000000003d230e0[0x17];
      if (lVar8 == 0) {
        return /*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ plRam0000000003d230e0;
      }
      uVar3 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ lRam0000000003d1b598);
      auVar12._8_8_ = uVar3;
      auVar12._0_8_ = lVar8;
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar3,uVar9,uRam0000000003d5a138,uRam0000000003d2a320);
      uVar10 = 0x3d53558;
      puVar1 = (ulong *)&stack0xffffffffffffff80;
      goto code_r0x0164fbb4;
    }
    plVar5[4] = plVar7[0x1e];
    lVar6 = (**(code **)(*plVar7 + 0x568))(plVar7,*(undefined8 *)(*plVar7 + 0x570));
    plVar5[5] = lVar6;
    (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
  }
  if (((*(ushort *)((long)/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ plRam0000000003d230e0 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ plRam0000000003d230e0[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  plVar7 = *(long **)/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ plRam0000000003d230e0[0x17];
  if (plVar7 == (long *)0x0) {
    return /*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ plRam0000000003d230e0;
  }
  lVar6 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ lRam0000000003d1b598);
  /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar6,plVar5,uRam0000000003d5a138,uRam0000000003d2a320);
  uVar10 = uStack_70;
  puVar1 = &uStack_70;
  uStack_a8 = 0x3eb5000;
  if ((bRam0000000003eb57ba & 1) == 0) {
    func_0x00f78a20(0x3d1b598);
    bRam0000000003eb57ba = 1;
  }
  plVar5 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(plVar7[2],lVar6,0);
  if ((plVar5 == (long *)0x0) || (*plVar5 == /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598)) {
    plVar7[2] = (long)plVar5;
    return plVar5;
  }
  pcStack_88 = Core_Localisation_LocalisationManager__UnRegisterOnLanguageChanged;
  auVar12 = func_0x00f78e5c();
  plVar5 = plVar7;
code_r0x0164fbb4:
  lVar8 = auVar12._0_8_;
  *(ulong *)((long)puVar1 + -0x30) = uVar10;
  *(undefined8 *)((long)puVar1 + -0x28) = uStack_a8;
  *(long *)((long)puVar1 + -0x20) = lVar6;
  *(long **)((long)puVar1 + -0x18) = plVar5;
  *(undefined1 ***)((long)puVar1 + -0x10) = &puStack_50;
  *(code **)((long)puVar1 + -8) = pcStack_88;
  if ((bRam0000000003eb57bb & 1) == 0) {
    func_0x00f78a20(0x3d1b598);
    bRam0000000003eb57bb = 1;
  }
  plVar5 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(*(undefined8 *)(lVar8 + 0x10),auVar12._8_8_,0);
  if ((plVar5 == (long *)0x0) || (*plVar5 == /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598)) {
    *(long **)(lVar8 + 0x10) = plVar5;
    return plVar5;
  }
  auVar13 = func_0x00f78e5c();
  lVar6 = auVar13._0_8_;
  *(long *)((long)puVar1 + -0x70) = unaff_x24;
  *(undefined8 *)((long)puVar1 + -0x68) = unaff_x23;
  *(ulong *)((long)puVar1 + -0x60) = uVar10;
  *(undefined8 *)((long)puVar1 + -0x58) = 0x3eb5000;
  *(long *)((long)puVar1 + -0x50) = auVar12._8_8_;
  *(long *)((long)puVar1 + -0x48) = lVar8;
  *(undefined1 **)((long)puVar1 + -0x40) = (undefined1 *)((long)puVar1 + -0x10);
  *(code **)((long)puVar1 + -0x38) = Core_Localisation_LocalisationManager__GetFontReplacement;
  uVar9 = 0x3eb5000;
  if ((bRam0000000003eb57bc & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb57bc = 1;
  }
  lVar8 = *(long *)(lVar6 + 0x38);
  if (lVar8 != 0) {
    uVar10 = 0;
    unaff_x23 = 0x3d23990;
    unaff_x24 = 0x20;
    do {
      lVar8 = *(long *)(lVar8 + 0x20);
      if (lVar8 == 0) break;
      if ((long)(int)*(uint *)(lVar8 + 0x18) <= (long)uVar10) {
        return auVar13._8_8_;
      }
      if (*(uint *)(lVar8 + 0x18) <= uVar10) goto LAB_0164fd18;
      uVar9 = *(undefined8 *)(lVar8 + unaff_x24);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar9,auVar13._8_8_,0);
      if (iVar2 != 0) goto LAB_0164fce4;
      uVar10 = uVar10 + 1;
      lVar8 = *(long *)(lVar6 + 0x38);
      unaff_x24 = unaff_x24 + 0x10;
    } while (lVar8 != 0);
  }
  do {
    func_0x00f78af4();
LAB_0164fce4:
    lVar8 = *(long *)(lVar6 + 0x40);
  } while (lVar8 == 0);
  if ((uint)uVar10 < *(uint *)(lVar8 + 0x18)) {
    return *(long **)(lVar8 + uVar10 * 8 + 0x20);
  }
LAB_0164fd18:
  uVar3 = func_0x00f78b24();
  auVar12 = func_0x00f78ac0(uVar3,0);
  lVar6 = auVar12._0_8_;
  *(long *)((long)puVar1 + -0xb0) = unaff_x24;
  *(undefined8 *)((long)puVar1 + -0xa8) = unaff_x23;
  *(ulong *)((long)puVar1 + -0xa0) = uVar10;
  *(undefined8 *)((long)puVar1 + -0x98) = uVar9;
  *(undefined1 (*) [16])((long)puVar1 + -0x90) = auVar13;
  *(undefined1 **)((long)puVar1 + -0x80) = (undefined1 *)((long)puVar1 + -0x40);
  *(code **)((long)puVar1 + -0x78) = Core_Localisation_LocalisationManager__GetMaterialReplacement;
  if ((bRam0000000003eb57bd & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb57bd = 1;
  }
  lVar8 = *(long *)(lVar6 + 0x38);
  if (lVar8 != 0) {
    uVar10 = 0;
    lVar11 = 0x20;
    do {
      lVar8 = *(long *)(lVar8 + 0x28);
      if (lVar8 == 0) break;
      if ((long)(int)*(uint *)(lVar8 + 0x18) <= (long)uVar10) {
        return auVar12._8_8_;
      }
      if (*(uint *)(lVar8 + 0x18) <= uVar10) goto LAB_0164fe0c;
      uVar9 = *(undefined8 *)(lVar8 + lVar11);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar9,auVar12._8_8_,0);
      if (iVar2 != 0) goto LAB_0164fdd8;
      uVar10 = uVar10 + 1;
      lVar8 = *(long *)(lVar6 + 0x38);
      lVar11 = lVar11 + 0x10;
    } while (lVar8 != 0);
  }
  do {
    func_0x00f78af4();
LAB_0164fdd8:
    lVar8 = *(long *)(lVar6 + 0x48);
  } while (lVar8 == 0);
  if ((uint)uVar10 < *(uint *)(lVar8 + 0x18)) {
    return *(long **)(lVar8 + uVar10 * 8 + 0x20);
  }
LAB_0164fe0c:
  uVar9 = func_0x00f78b24();
  plVar5 = (long *)func_0x00f78ac0(uVar9,0);
  return plVar5;
}



// ============================================================
// RVA: 0x1651434 | Core.Localisation.LocaliseFontBehaviour.Awake
// ============================================================

long * Core_Localisation_LocaliseFontBehaviour__Awake(long *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  ulong unaff_x22;
  undefined8 unaff_x23;
  long lVar9;
  long unaff_x24;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uStack_68;
  code *pcStack_48;
  
  if ((bRam0000000003eb57ce & 1) == 0) {
    func_0x00f78a20(0x3d2a320);
    func_0x00f78a20(0x3d1b598);
    func_0x00f78a20(0x3d53558);
    func_0x00f78a20(0x3d5a138);
    func_0x00f78a20(0x3d230e0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb57ce = 1;
  }
  lVar5 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(param_1,uRam0000000003d53558);
  param_1[3] = lVar5;
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar5,0,0);
  if (iVar2 != 0) {
    plVar6 = (long *)param_1[3];
    if (plVar6 == (long *)0x0) {
      uVar8 = func_0x00f78af4();
      uStack_68 = 0x3d23990;
      pcStack_48 = (code *)&Core_Localisation_LocaliseFontBehaviour__OnDestroy;
      if ((bRam0000000003eb57cf & 1) == 0) {
        func_0x00f78a20(0x3d2a320);
        func_0x00f78a20(0x3d1b598);
        func_0x00f78a20(0x3d5a138);
        func_0x00f78a20(0x3d230e0);
        bRam0000000003eb57cf = 1;
      }
      if (((*(ushort *)((long)/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ plRam0000000003d230e0 + 0x132) >> 10 & 1) != 0) &&
         ((int)/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ plRam0000000003d230e0[0x1c] == 0)) {
        func_0x00f78ad0();
      }
      lVar7 = *(long *)/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ plRam0000000003d230e0[0x17];
      if (lVar7 == 0) {
        return /*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ plRam0000000003d230e0;
      }
      uVar4 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ lRam0000000003d1b598);
      auVar10._8_8_ = uVar4;
      auVar10._0_8_ = lVar7;
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar4,uVar8,uRam0000000003d5a138,uRam0000000003d2a320);
      unaff_x22 = 0x3d53558;
      puVar1 = &stack0xffffffffffffffc0;
      goto code_r0x0164fbb4;
    }
    param_1[4] = plVar6[0x1e];
    lVar5 = (**(code **)(*plVar6 + 0x568))(plVar6,*(undefined8 *)(*plVar6 + 0x570));
    param_1[5] = lVar5;
    (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
  }
  if (((*(ushort *)((long)/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ plRam0000000003d230e0 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ plRam0000000003d230e0[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = *(long **)/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ plRam0000000003d230e0[0x17];
  if (plVar6 == (long *)0x0) {
    return /*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ plRam0000000003d230e0;
  }
  lVar5 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ lRam0000000003d1b598);
  /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar5,param_1,uRam0000000003d5a138,uRam0000000003d2a320);
  puVar1 = &stack0xffffffffffffffd0;
  uStack_68 = 0x3eb5000;
  if ((bRam0000000003eb57ba & 1) == 0) {
    func_0x00f78a20(0x3d1b598);
    bRam0000000003eb57ba = 1;
  }
  plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(plVar6[2],lVar5,0);
  if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598)) {
    plVar6[2] = (long)plVar3;
    return plVar3;
  }
  pcStack_48 = Core_Localisation_LocalisationManager__UnRegisterOnLanguageChanged;
  auVar10 = func_0x00f78e5c();
  param_1 = plVar6;
code_r0x0164fbb4:
  lVar7 = auVar10._0_8_;
  *(ulong *)(puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar1 + -0x28) = uStack_68;
  *(long *)(puVar1 + -0x20) = lVar5;
  *(long **)(puVar1 + -0x18) = param_1;
  *(undefined1 **)(puVar1 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(puVar1 + -8) = pcStack_48;
  if ((bRam0000000003eb57bb & 1) == 0) {
    func_0x00f78a20(0x3d1b598);
    bRam0000000003eb57bb = 1;
  }
  plVar6 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(*(undefined8 *)(lVar7 + 0x10),auVar10._8_8_,0);
  if ((plVar6 == (long *)0x0) || (*plVar6 == /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598)) {
    *(long **)(lVar7 + 0x10) = plVar6;
    return plVar6;
  }
  auVar11 = func_0x00f78e5c();
  lVar5 = auVar11._0_8_;
  *(long *)(puVar1 + -0x70) = unaff_x24;
  *(undefined8 *)(puVar1 + -0x68) = unaff_x23;
  *(ulong *)(puVar1 + -0x60) = unaff_x22;
  *(undefined8 *)(puVar1 + -0x58) = 0x3eb5000;
  *(long *)(puVar1 + -0x50) = auVar10._8_8_;
  *(long *)(puVar1 + -0x48) = lVar7;
  *(undefined1 **)(puVar1 + -0x40) = puVar1 + -0x10;
  *(code **)(puVar1 + -0x38) = Core_Localisation_LocalisationManager__GetFontReplacement;
  uVar8 = 0x3eb5000;
  if ((bRam0000000003eb57bc & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb57bc = 1;
  }
  lVar7 = *(long *)(lVar5 + 0x38);
  if (lVar7 != 0) {
    unaff_x22 = 0;
    unaff_x23 = 0x3d23990;
    unaff_x24 = 0x20;
    do {
      lVar7 = *(long *)(lVar7 + 0x20);
      if (lVar7 == 0) break;
      if ((long)(int)*(uint *)(lVar7 + 0x18) <= (long)unaff_x22) {
        return auVar11._8_8_;
      }
      if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_0164fd18;
      uVar8 = *(undefined8 *)(lVar7 + unaff_x24);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar8,auVar11._8_8_,0);
      if (iVar2 != 0) goto LAB_0164fce4;
      unaff_x22 = unaff_x22 + 1;
      lVar7 = *(long *)(lVar5 + 0x38);
      unaff_x24 = unaff_x24 + 0x10;
    } while (lVar7 != 0);
  }
  do {
    func_0x00f78af4();
LAB_0164fce4:
    lVar7 = *(long *)(lVar5 + 0x40);
  } while (lVar7 == 0);
  if ((uint)unaff_x22 < *(uint *)(lVar7 + 0x18)) {
    return *(long **)(lVar7 + unaff_x22 * 8 + 0x20);
  }
LAB_0164fd18:
  uVar4 = func_0x00f78b24();
  auVar10 = func_0x00f78ac0(uVar4,0);
  lVar5 = auVar10._0_8_;
  *(long *)(puVar1 + -0xb0) = unaff_x24;
  *(undefined8 *)(puVar1 + -0xa8) = unaff_x23;
  *(ulong *)(puVar1 + -0xa0) = unaff_x22;
  *(undefined8 *)(puVar1 + -0x98) = uVar8;
  *(undefined1 (*) [16])(puVar1 + -0x90) = auVar11;
  *(undefined1 **)(puVar1 + -0x80) = puVar1 + -0x40;
  *(code **)(puVar1 + -0x78) = Core_Localisation_LocalisationManager__GetMaterialReplacement;
  if ((bRam0000000003eb57bd & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb57bd = 1;
  }
  lVar7 = *(long *)(lVar5 + 0x38);
  if (lVar7 != 0) {
    unaff_x22 = 0;
    lVar9 = 0x20;
    do {
      lVar7 = *(long *)(lVar7 + 0x28);
      if (lVar7 == 0) break;
      if ((long)(int)*(uint *)(lVar7 + 0x18) <= (long)unaff_x22) {
        return auVar10._8_8_;
      }
      if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_0164fe0c;
      uVar8 = *(undefined8 *)(lVar7 + lVar9);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar8,auVar10._8_8_,0);
      if (iVar2 != 0) goto LAB_0164fdd8;
      unaff_x22 = unaff_x22 + 1;
      lVar7 = *(long *)(lVar5 + 0x38);
      lVar9 = lVar9 + 0x10;
    } while (lVar7 != 0);
  }
  do {
    func_0x00f78af4();
LAB_0164fdd8:
    lVar7 = *(long *)(lVar5 + 0x48);
  } while (lVar7 == 0);
  if ((uint)unaff_x22 < *(uint *)(lVar7 + 0x18)) {
    return *(long **)(lVar7 + unaff_x22 * 8 + 0x20);
  }
LAB_0164fe0c:
  uVar8 = func_0x00f78b24();
  plVar6 = (long *)func_0x00f78ac0(uVar8,0);
  return plVar6;
}



// ============================================================
// RVA: 0x16515c4 | Core.Localisation.LocaliseFontBehaviour.OnDestroy
// ============================================================

long * Core_Localisation_LocaliseFontBehaviour__OnDestroy(undefined8 param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong unaff_x22;
  long lVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003eb57cf & 1) == 0) {
    func_0x00f78a20(0x3d2a320);
    func_0x00f78a20(0x3d1b598);
    func_0x00f78a20(0x3d5a138);
    func_0x00f78a20(0x3d230e0);
    bRam0000000003eb57cf = 1;
  }
  if (((*(ushort *)((long)/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ plRam0000000003d230e0 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ plRam0000000003d230e0[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  lVar5 = *(long *)/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ plRam0000000003d230e0[0x17];
  if (lVar5 == 0) {
    return /*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ plRam0000000003d230e0;
  }
  uVar3 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ lRam0000000003d1b598);
  /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar3,param_1,uRam0000000003d5a138,uRam0000000003d2a320);
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
// RVA: 0x16516b4 | Core.Localisation.LocaliseFontBehaviour.LanguageChanged
// ============================================================

void Core_Localisation_LocaliseFontBehaviour__LanguageChanged(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x016516bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
  return;
}



// ============================================================
// RVA: 0x16516c0 | Core.Localisation.LocaliseFontBehaviour..ctor
// ============================================================

undefined1  [16] Core_Localisation_LocaliseFontBehaviour___ctor(ulong param_1)

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



// ============================================================
// RVA: 0x16516c8 | Core.Localisation.LocaliseFontBehaviour..cctor
// ============================================================

void Core_Localisation_LocaliseFontBehaviour___cctor(void)

{
  return;
}



