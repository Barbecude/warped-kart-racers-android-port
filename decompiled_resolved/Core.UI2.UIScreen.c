// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.UI2.UIScreen

// ============================================================
// RVA: 0x2f882d8 | Core.UI2.UIScreen.ForceExit
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Core_UI2_UIScreen__ForceExit
                (long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *extraout_x1;
  uint uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  undefined4 uStack_8e;
  undefined2 uStack_8a;
  
  (**(code **)(*param_1 + 0x218))(param_1,*(undefined8 *)(*param_1 + 0x220));
  if (param_1[5] != 0) {
    /*UnityEngine.MonoBehaviour$$StopAllCoroutines*/ func_0x032482a8(param_1[5],0);
    *(undefined4 *)((long)param_1 + 0x4c) = 4;
    Core_Input_InputManager__UnregisterListener(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x02f88334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*param_1 + 0x228))(param_1,*(undefined8 *)(*param_1 + 0x230));
    return uVar4;
  }
  func_0x00f78af4();
  if (extraout_x1 != (long *)0x0) {
    lVar7 = extraout_x1[5];
    Core_UI2_UIManager__RemoveCallbacks();
    uVar5 = (**(code **)(*extraout_x1 + 0x238))(extraout_x1,*(undefined8 *)(*extraout_x1 + 0x240));
    extraout_x1[5] = 0;
    extraout_x1[6] = 0;
    extraout_x1[9] = _UNK_037235c0;
    extraout_x1[7] = 0;
    extraout_x1[8] = 0;
    Core_UI2_UIManager__DestroyScreenBehaviour(uVar5,lVar7);
    uVar4 = (**(code **)(*extraout_x1 + 0x248))(extraout_x1,*(undefined8 *)(*extraout_x1 + 0x250));
    extraout_x1[0xb] = 0;
    return uVar4;
  }
  auVar10 = func_0x00f78af4();
  lVar7 = auVar10._0_8_;
  Core_UI2_UIManager__ClearLayer(lVar7,param_3);
  if ((bRam0000000003ebc64a & 1) == 0) {
    func_0x00f78a20(0x3d3ddc8);
    func_0x00f78a20(0x3d3ddd0);
    bRam0000000003ebc64a = 1;
  }
  iVar1 = Core_UI2_UIManager__IsScreenIdValid(lVar7,auVar10._8_8_);
  uVar6 = (uint)param_3;
  if (((int)uVar6 < 0) || (iVar1 == 0)) {
    return 0;
  }
  if (*(int *)(lVar7 + 0x50) <= (int)uVar6) {
    return 0;
  }
  lVar9 = *(long *)(lVar7 + 0x70);
  if (lVar9 != 0) {
    lVar2 = lVar9;
    if (*(uint *)(lVar9 + 0x18) <= uVar6) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      lVar2 = *(long *)(lVar7 + 0x70);
    }
    if (lVar2 != 0) {
      lVar9 = *(long *)(lVar9 + 0x10) + (param_3 & 0xffffffff) * 0x28;
      uStack_a8 = *(undefined8 *)(lVar9 + 0x28);
      uStack_b0 = *(undefined8 *)(lVar9 + 0x20);
      uStack_8e = *(undefined4 *)(lVar9 + 0x42);
      uStack_8a = *(undefined2 *)(lVar9 + 0x46);
      uStack_90 = 1;
      uStack_8f = 0;
      uStack_a0 = auVar10._8_8_;
      uStack_98 = param_4;
      /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar2,param_3,&uStack_b0,uRam0000000003d3ddd0);
      Core_UI2_UIManager__UpdateLayer(lVar7,param_3);
      return 1;
    }
  }
  auVar10 = func_0x00f78af4();
  if ((bRam0000000003ebc64e & 1) == 0) {
    func_0x00f78a20(0x3d3ddf0);
    func_0x00f78a20(0x3d3ddf8);
    bRam0000000003ebc64e = 1;
  }
  lVar7 = *(long *)(auVar10._0_8_ + 0x78);
  if (lVar7 != 0) {
    iVar1 = *(int *)(lVar7 + 0x18);
    if (iVar1 < 1) {
      return 0;
    }
    iVar8 = 1;
    uVar4 = 1;
    do {
      if (*(uint *)(lVar7 + 0x18) <= iVar8 - 1U) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + (long)(int)(iVar8 - 1U) * 0x20 + 0x20);
      if (lVar7 == 0) break;
      uVar3 = /*System.String$$Equals*/ func_0x029caa48(lVar7,auVar10._8_8_,5,0);
      if ((uVar3 & 1) != 0) {
        return uVar4;
      }
      uVar4 = (ulong)(iVar8 < iVar1);
      if (iVar1 == iVar8) {
        return uVar4;
      }
      lVar7 = *(long *)(auVar10._0_8_ + 0x78);
      iVar8 = iVar8 + 1;
    } while (lVar7 != 0);
  }
  func_0x00f78af4();
  return 0;
}



// ============================================================
// RVA: 0x2f88bfc | Core.UI2.UIScreen.StartExit
// ============================================================

/* WARNING: Possible PIC construction at 0x02f88c2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8a21c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8a244: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8a78c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f89078: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f890a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f8a248) */
/* WARNING: Removing unreachable block (ram,0x02f8a220) */
/* WARNING: Removing unreachable block (ram,0x02f8a228) */
/* WARNING: Removing unreachable block (ram,0x02f8a240) */
/* WARNING: Removing unreachable block (ram,0x02f88c30) */
/* WARNING: Removing unreachable block (ram,0x02f890ac) */
/* WARNING: Removing unreachable block (ram,0x02f890c8) */
/* WARNING: Removing unreachable block (ram,0x02f890b8) */
/* WARNING: Type propagation algorithm not settling */

long ******
Core_UI2_UIScreen__StartExit
          (long *****param_1,undefined8 param_2,long *param_3,long *****param_4,long *****param_5)

{
  long ***ppplVar1;
  ushort uVar2;
  undefined8 ******ppppppuVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  long ****pppplVar11;
  long ****pppplVar12;
  long lVar13;
  undefined8 uVar14;
  long ******pppppplVar15;
  long *plVar16;
  long ******pppppplVar17;
  undefined8 uVar18;
  long ******pppppplVar19;
  long *plVar20;
  undefined4 uVar21;
  ulong uVar22;
  long ****pppplVar23;
  long **pplVar24;
  long *****ppppplVar25;
  code *pcVar26;
  ulong uVar27;
  ulong uVar28;
  long ******pppppplVar29;
  undefined8 unaff_x20;
  long *******ppppppplVar30;
  long ***ppplVar31;
  long *****ppppplVar32;
  undefined8 unaff_x21;
  long lVar33;
  undefined8 unaff_x22;
  long lVar34;
  undefined8 unaff_x23;
  undefined8 uVar35;
  long ***ppplVar36;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  long ****pppplVar37;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar38;
  undefined1 *puVar39;
  undefined *puVar40;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_b0_01;
  undefined1 extraout_b0_02;
  undefined1 extraout_b0_03;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  undefined1 extraout_var_13;
  float fVar41;
  ulong unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined8 uStack_1b0;
  code *pcStack_188;
  undefined8 uStack_180;
  long ******pppppplStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  long *******ppppppplStack_140;
  undefined *puStack_138;
  undefined1 auStack_130 [16];
  undefined8 *******pppppppuStack_120;
  long ******pppppplStack_118;
  undefined8 ******ppppppuStack_d0;
  code *pcStack_c8;
  undefined8 *****pppppuStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long *plStack_98;
  long ***ppplStack_90;
  undefined *puStack_88;
  uint uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_30;
  code *pcStack_28;
  
  puVar7 = &stack0xffffffffffffffe0;
  puVar39 = &stack0xfffffffffffffff0;
  (*(code *)(*param_1)[0x43])(param_1,(*param_1)[0x44]);
  *(undefined4 *)((long)param_1 + 0x4c) = 3;
  pppplVar12 = param_1[5];
  if (pppplVar12 == (long ****)0x0) {
    auVar42 = func_0x00f78af4();
    lVar13 = auVar42._0_8_;
    pcStack_28 = Core_UI2_UIManager__TryGetScreenWithBehaviour;
    lVar34 = 0x3ebc000;
    puStack_30 = (undefined8 *)puVar39;
    if ((bRam0000000003ebc657 & 1) == 0) {
      func_0x00f78a20(0x3d3dda8);
      func_0x00f78a20(0x3d23990);
      bRam0000000003ebc657 = 1;
    }
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_74 = 0;
    pppppplVar19 = (long ******)
                   Core_UI2_UIManager__TryGetScreenInfo(lVar13,auVar42._8_8_,&uStack_70);
    uVar18 = uStack_60;
    if ((int)pppppplVar19 == 0) {
      plVar20 = (long *)0x0;
      goto LAB_02f88d88;
    }
    uVar22 = Core_UI2_UIManager__TryGetAssetRequestIndex(lVar13,uStack_60,&uStack_74);
    if ((uVar22 & 1) == 0) {
      Core_UI2_UIManager__RequestAsset(lVar13,uVar18,uStack_58);
LAB_02f88d80:
      plVar20 = (long *)0x0;
      pppppplVar19 = (long ******)0x0;
LAB_02f88d88:
      *param_3 = (long)plVar20;
      return pppppplVar19;
    }
    lVar33 = *(long *)(lVar13 + 0x80);
    uVar18 = 0;
    if (lVar33 != 0) {
      lVar34 = (long)(int)uStack_74;
      if (*(uint *)(lVar33 + 0x18) <= uStack_74) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      uVar18 = *(undefined8 *)(*(long *)(lVar33 + 0x10) + lVar34 * 0x20 + 0x30);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar22 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar18,0,0);
      if ((uVar22 & 1) != 0) goto LAB_02f88d80;
      plVar20 = (long *)Core_UI2_UIManager__InstantiateScreen(lVar13,uStack_68);
      lVar33 = Core_UI2_UIManager__InstantiateScreenBehaviour(plVar20,uVar18);
      lVar13 = 0;
      if (plVar20 != (long *)0x0) {
        plVar20[5] = lVar33;
        *(undefined4 *)((long)plVar20 + 0x4c) = 4;
        (**(code **)(*plVar20 + 0x1a8))(plVar20,*(undefined8 *)(*plVar20 + 0x1b0));
        pppppplVar19 = (long ******)((long)&MACH_HEADER.magic + 1);
        goto LAB_02f88d88;
      }
    }
    auVar42 = func_0x00f78af4();
    puStack_88 = &Core_UI2_UIScreen__SetParent;
    lStack_b0 = lVar34;
    uStack_a8 = uVar18;
    lStack_a0 = lVar13;
    plStack_98 = param_3;
    ppplStack_90 = (long ***)&puStack_30;
    if ((bRam0000000003ebc66f & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003ebc66f = 1;
    }
    uVar18 = *(undefined8 *)(auVar42._0_8_ + 0x28);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar21 = 0;
    pppppplVar19 = (long ******)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar18,0);
    if ((int)pppppplVar19 == 0) {
      return pppppplVar19;
    }
    lVar13 = *(long *)(auVar42._0_8_ + 0x28);
    if ((lVar13 != 0) && (lVar13 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar13,0), lVar13 != 0)) {
      if (pcRam0000000003ec1898 == (code *)0x0) {
        pcRam0000000003ec1898 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x03275f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pppppplVar19 = (long ******)(*pcRam0000000003ec1898)(lVar13,auVar42._8_8_,0);
      return pppppplVar19;
    }
    auVar42 = func_0x00f78af4();
    pppppplVar19 = auVar42._0_8_;
    ppppppuStack_d0 = &pppppuStack_c0;
    puStack_b8 = &Core_UI2_UIScreen__AssignParameters;
    pppppplVar19[7] = param_5;
    pppppplVar19[8] = auVar42._8_8_;
    *(undefined4 *)(pppppplVar19 + 9) = uVar21;
    pppppplVar19[6] = param_4;
    if (pppppplVar19[5] != (long *****)0x0) {
      *(undefined4 *)(pppppplVar19[5] + 6) = uVar21;
      return pppppplVar19;
    }
    pppppuStack_c0 = (undefined8 *****)&ppplStack_90;
    auVar42 = func_0x00f78af4();
    lVar13 = auVar42._8_8_;
    uVar14 = auVar42._0_8_;
    pcStack_c8 = Core_UI2_UIManager__AssignCallbacks;
    uVar18 = 0x3d1b6b8;
    uVar35 = 0x3d5f740;
    uStack_1b0 = 0x3d2a558;
    ppppppuVar3 = &pppppuStack_c0;
    if ((bRam0000000003ebc662 & 1) == 0) {
      func_0x00f78a20(0x3d2a558);
      func_0x00f78a20(0x3d1b6b8);
      func_0x00f78a20(0x3d5f738);
      func_0x00f78a20(0x3d5f740);
      func_0x00f78a20(0x3d5f748);
      bRam0000000003ebc662 = 1;
      ppppppuVar3 = ppppppuStack_d0;
    }
    ppppppuStack_d0 = ppppppuVar3;
    pppppplVar19 = (long ******)func_0x00f78aec(/*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8);
    /*System.Action<UIScreen, int>$$.ctor*/ func_0x01e6e270(pppppplVar19,uVar14,uRam0000000003d5f740,uRam0000000003d2a558);
    if (lVar13 != 0) {
      /*Core.UI2.UIScreen$$add_ScreenEnterStarted*/ func_0x02f899e0(lVar13,pppppplVar19);
      uVar18 = func_0x00f78aec(/*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8);
      /*System.Action<UIScreen, int>$$.ctor*/ func_0x01e6e270(uVar18,uVar14,uRam0000000003d5f748,uRam0000000003d2a558);
      /*Core.UI2.UIScreen$$add_ScreenEnterStartBefore*/ func_0x02f89a80(lVar13,uVar18);
      uVar18 = func_0x00f78aec(/*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8);
      /*System.Action<UIScreen, int>$$.ctor*/ func_0x01e6e270(uVar18,uVar14,uRam0000000003d5f738,uRam0000000003d2a558);
      if ((bRam0000000003ebc66d & 1) == 0) {
        func_0x00f78a20(0x3d1b6b8);
        bRam0000000003ebc66d = 1;
      }
      pppppplVar19 = *(long *******)(lVar13 + 0x20);
      while ((plVar20 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(pppppplVar19,uVar18,0), plVar20 == (long *)0x0 ||
             (*plVar20 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
        pppppplVar15 = (long ******)
                       func_0x00ff0f44((undefined8 *)(lVar13 + 0x20),plVar20,pppppplVar19);
        bVar8 = pppppplVar19 == pppppplVar15;
        pppppplVar19 = pppppplVar15;
        if (bVar8) {
          return pppppplVar15;
        }
      }
      auVar42 = func_0x00f78e5c(plVar20);
      puVar40 = auVar42._8_8_;
      pppppppuStack_120 = (undefined8 *******)0x3d1b6b8;
      pppppplStack_118 = pppppplVar19;
      if ((bRam0000000003ebc66c & 1) == 0) {
        func_0x00f78a20(0x3d1b6b8);
        bRam0000000003ebc66c = 1;
      }
      ppppppplVar30 = (long *******)(auVar42._0_8_ + 0x18);
      pppppplVar19 = *ppppppplVar30;
      while ((plVar20 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(pppppplVar19,puVar40,0), plVar20 == (long *)0x0 ||
             (*plVar20 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
        pppppplVar15 = (long ******)func_0x00ff0f44(ppppppplVar30,plVar20,pppppplVar19);
        bVar8 = pppppplVar19 == pppppplVar15;
        pppppplVar19 = pppppplVar15;
        if (bVar8) {
          return pppppplVar15;
        }
      }
      auVar42 = func_0x00f78e5c(plVar20);
      uVar18 = auVar42._8_8_;
      auStack_130._8_8_ = &Core_UI2_UIScreen__remove_ScreenEnterStartBefore;
      ppppppplStack_140 = ppppppplVar30;
      puStack_138 = puVar40;
      auStack_130._0_8_ = &stack0xffffffffffffff00;
      if ((bRam0000000003ebc66a & 1) == 0) {
        func_0x00f78a20(0x3d1b6b8);
        bRam0000000003ebc66a = 1;
      }
      plVar20 = (long *)(auVar42._0_8_ + 0x10);
      pppppplVar19 = (long ******)*plVar20;
      while ((plVar16 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(pppppplVar19,uVar18,0), plVar16 == (long *)0x0 ||
             (*plVar16 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
        pppppplVar15 = (long ******)func_0x00ff0f44(plVar20,plVar16,pppppplVar19);
        bVar8 = pppppplVar19 == pppppplVar15;
        pppppplVar19 = pppppplVar15;
        if (bVar8) {
          return pppppplVar15;
        }
      }
      auVar42 = func_0x00f78e5c(plVar16);
      uStack_180 = 0x3d1b6b8;
      ppppppplVar30 = (long *******)&stack0xfffffffffffffea0;
      pppppplStack_178 = pppppplVar19;
      plStack_170 = plVar20;
      uStack_168 = uVar18;
      if ((bRam0000000003ebc66e & 1) == 0) {
        func_0x00f78a20(0x3d1b6b8);
        bRam0000000003ebc66e = 1;
      }
      ppppplVar32 = (long *****)(auVar42._0_8_ + 0x20);
      pppppplVar19 = (long ******)*ppppplVar32;
      while( true ) {
        uVar22 = 0;
        plVar20 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(pppppplVar19,auVar42._8_8_,0);
        if ((plVar20 != (long *)0x0) && (*plVar20 != /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8)) break;
        pppppplVar15 = (long ******)func_0x00ff0f44(ppppplVar32,plVar20,pppppplVar19);
        bVar8 = pppppplVar19 == pppppplVar15;
        pppppplVar19 = pppppplVar15;
        if (bVar8) {
          return pppppplVar15;
        }
      }
      auVar43 = func_0x00f78e5c(plVar20);
      pppppplVar15 = auVar43._8_8_;
      uStack_1b0 = 0x3d1b6b8;
      pcStack_188 = Core_UI2_UIManager__OnScreenStartBeforeEnter;
      if ((bRam0000000003ebc664 & 1) == 0) {
        func_0x00f78a20(0x3d2a560);
        bRam0000000003ebc664 = 1;
      }
      pppppplVar17 = *(long *******)(auVar43._0_8_ + 0x10);
      if (pppppplVar17 == (long ******)0x0) {
        return (long ******)0x0;
      }
      puVar4 = &uStack_180;
      pppppplVar29 = auVar42._8_8_;
      uVar18 = unaff_x23;
      uVar35 = unaff_x24;
      goto code_r0x01e6e280;
    }
    pppppplVar15 = (long ******)func_0x00f78af4();
    puVar4 = (undefined8 *)auStack_130;
    pppppplStack_118 = (long ******)&Core_UI2_UIScreen__StartBeforeEnter;
    ppppppplVar30 = (long *******)&pppppppuStack_120;
    pppppppuStack_120 = &ppppppuStack_d0;
    auStack_130 = auVar42;
    if ((bRam0000000003ebc670 & 1) == 0) {
      func_0x00f78a20(0x3d2a560);
      bRam0000000003ebc670 = 1;
    }
    *(undefined4 *)((long)pppppplVar15 + 0x4c) = 0;
    Core_Input_InputManager__RegisterListener(pppppplVar15,0);
    (*(code *)(*pppppplVar15)[0x37])(pppppplVar15,(*pppppplVar15)[0x38]);
    ppppplVar32 = (long *****)(*(code *)(*pppppplVar15)[0x31])(pppppplVar15,(*pppppplVar15)[0x32]);
    ppppplVar25 = pppppplVar15[5];
    if (ppppplVar25 == (long *****)0x0) {
code_r0x02f8908c:
      pppppplVar15 = (long ******)func_0x00f78af4();
      auVar42._8_8_ = pppppplVar15;
      auVar42._0_8_ = ppppplVar32;
      puVar5 = &stack0xfffffffffffffea0;
      ppppppplStack_140 = ppppppplVar30;
      puStack_138 = &Core_UI2_UIScreen__Update;
      pppppppuVar38 = &ppppppplStack_140;
      unaff_d8 = (ulong)CONCAT13(extraout_var_09,
                                 CONCAT12(extraout_var_04,CONCAT11(extraout_var,extraout_b0)));
      pppppplVar17 = (long ******)&UNK_02f890ac;
    }
    else {
      (*(code *)(*ppppplVar25)[0x2f])(ppppplVar25,0,(*ppppplVar25)[0x30]);
      if ((int)ppppplVar32 == 0) {
        *(undefined1 *)(pppppplVar15 + 10) = 1;
      }
      else {
        ppppplVar25 = pppppplVar15[5];
        uVar14 = /*Core.UI2.UIScreen$$BeforeEnterCoroutine*/ func_0x02f8a0c0(pppppplVar15);
        ppppplVar32 = (long *****)0x0;
        if (ppppplVar25 == (long *****)0x0) goto code_r0x02f8908c;
        /*UnityEngine.MonoBehaviour$$StartCoroutine*/ func_0x03247e70(ppppplVar25,uVar14,0);
        ppppplVar32 = ppppplVar25;
      }
      pppppplVar17 = (long ******)pppppplVar15[2];
      if (pppppplVar17 != (long ******)0x0) {
        uVar22 = (ulong)*(uint *)(pppppplVar15 + 9);
        pcStack_188 = (code *)&UNK_02f8907c;
        pppppplVar29 = pppppplVar15;
        goto code_r0x01e6e280;
      }
      puVar5 = &stack0xfffffffffffffef0;
      pppppppuVar38 = pppppppuStack_120;
      pppppplVar17 = pppppplStack_118;
      auVar42 = auStack_130;
    }
    uVar14 = auVar42._0_8_;
    puVar6 = puVar5 + -0x20;
    *(undefined1 (*) [16])(puVar5 + -0x20) = auVar42;
    *(undefined8 ********)(puVar5 + -0x10) = pppppppuVar38;
    *(long *******)(puVar5 + -8) = pppppplVar17;
    puVar39 = puVar5 + -0x10;
    iVar10 = *(int *)((long)pppppplVar15 + 0x4c);
    if (iVar10 == 3) {
      if (pppppplVar15[5] != (long *****)0x0) {
        pppppplVar19 = (long ******)/*Core.UI2.UIScreenBehaviour$$HasStateAnimationFinished*/ func_0x02f8a63c();
        if ((int)pppppplVar19 == 0) {
          return pppppplVar19;
        }
        *(undefined4 *)((long)pppppplVar15 + 0x4c) = 4;
        Core_Input_InputManager__UnregisterListener(pppppplVar15,0);
                    /* WARNING: Could not recover jumptable at 0x02f8a1c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pppppplVar19 = (long ******)
                       (*(code *)(*pppppplVar15)[0x45])(pppppplVar15,(*pppppplVar15)[0x46]);
        return pppppplVar19;
      }
code_r0x02f8a1d8:
      puVar40 = &Core_UI2_UIScreen__StartEnter;
      pppppplVar17 = (long ******)func_0x00f78af4();
    }
    else {
      if (iVar10 == 1) {
        if (pppppplVar15[5] != (long *****)0x0) {
          pppppplVar17 = (long ******)/*Core.UI2.UIScreenBehaviour$$HasStateAnimationFinished*/ func_0x02f8a63c();
          if ((int)pppppplVar17 == 0) {
            return pppppplVar17;
          }
          puVar4 = (undefined8 *)(puVar5 + -0x20);
          *(undefined8 *)(puVar5 + -0x20) = *(undefined8 *)(puVar5 + -0x20);
          *(undefined8 *)(puVar5 + -0x18) = *(undefined8 *)(puVar5 + -0x18);
          *(undefined8 *)(puVar5 + -0x10) = *(undefined8 *)(puVar5 + -0x10);
          *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
          ppppppplVar30 = (long *******)(puVar5 + -0x10);
          ppppplVar32 = (long *****)0x3ebc000;
          if ((bRam0000000003ebc673 & 1) == 0) {
            func_0x00f78a20(0x3d2a560);
            bRam0000000003ebc673 = 1;
          }
          *(undefined4 *)((long)pppppplVar15 + 0x4c) = 2;
          pppppplVar17 = (long ******)pppppplVar15[4];
          if (pppppplVar17 == (long ******)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02f8a7a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            pppppplVar19 = (long ******)
                           (*(code *)(*pppppplVar15)[0x3d])(pppppplVar15,(*pppppplVar15)[0x3e]);
            return pppppplVar19;
          }
          uVar22 = (ulong)*(uint *)(pppppplVar15 + 9);
          pcStack_188 = (code *)&UNK_02f8a790;
          pppppplVar29 = pppppplVar15;
code_r0x01e6e280:
          *(undefined8 *)((long)puVar4 + -0x60) = unaff_x28;
          *(undefined8 *)((long)puVar4 + -0x58) = unaff_x27;
          *(undefined8 *)((long)puVar4 + -0x50) = unaff_x26;
          *(undefined8 *)((long)puVar4 + -0x48) = unaff_x25;
          *(undefined8 *)((long)puVar4 + -0x40) = uVar35;
          *(undefined8 *)((long)puVar4 + -0x38) = uVar18;
          *(undefined8 *)((long)puVar4 + -0x30) = uStack_1b0;
          *(long *******)((long)puVar4 + -0x28) = pppppplVar19;
          *(long ******)((long)puVar4 + -0x20) = ppppplVar32;
          *(long *******)((long)puVar4 + -0x18) = pppppplVar29;
          *(long ********)((long)puVar4 + -0x10) = ppppppplVar30;
          *(code **)((long)puVar4 + -8) = pcStack_188;
          *(long *******)((long)puVar4 + -0x68) = pppppplVar17;
          ppppplVar32 = pppppplVar17[0xd];
          if (ppppplVar32 == (long *****)0x0) {
            ppppplVar32 = (long *****)((long)puVar4 + -0x68);
            pppplVar12 = (long ****)0x1;
          }
          else {
            pppplVar12 = ppppplVar32[3];
            if (pppplVar12 == (long ****)0x0) {
              return pppppplVar17;
            }
            ppppplVar32 = ppppplVar32 + 4;
          }
          pppplVar37 = (long ****)0x0;
          do {
            pppplVar23 = ppppplVar32[(long)pppplVar37];
            ppplVar36 = pppplVar23[2];
            ppplVar31 = pppplVar23[4];
            ppplVar1 = pppplVar23[5];
            if (*(short *)(ppplVar1 + 9) == -1) {
              func_0x00f78ad8(ppplVar1);
            }
            iVar10 = func_0x00f78a4c(ppplVar1);
            bVar8 = *(char *)((long)ppplVar1 + 0x4a) == '\x02';
            if (iVar10 == 0) {
              if (bVar8) {
                if (ppplVar31 == (long ***)0x0) {
code_r0x01e6e418:
                  pppppplVar19 = (long ******)(*(code *)ppplVar36)(pppppplVar15,uVar22,ppplVar1);
                }
                else {
                  if (((*(short *)(ppplVar1 + 9) == -1) ||
                      ((*(byte *)((long)*ppplVar31 + 0x115) & 1) != 0)) ||
                     (pppppplVar17[3] == (long *****)0x0)) goto code_r0x01e6e30c;
                  iVar10 = func_0x00f78a44(ppplVar1);
                  iVar9 = func_0x00f78ec0(ppplVar1);
                  if (iVar10 == 0) {
                    uVar2 = *(ushort *)(ppplVar1 + 9);
                    uVar27 = (ulong)uVar2;
                    if (iVar9 == 0) {
                      pppppplVar19 = (long ******)
                                     (*(code *)(*ppplVar31)[uVar27 * 2 + 0x27])
                                               (ppplVar31,pppppplVar15,uVar22,
                                                (*ppplVar31)[uVar27 * 2 + 0x28]);
                      goto code_r0x01e6e428;
                    }
                    lVar13 = func_0x00f78a48(ppplVar1);
                    pplVar24 = *ppplVar31;
                    uVar28 = (ulong)*(ushort *)((long)pplVar24 + 0x12a);
                    if (uVar28 != 0) {
                      plVar20 = pplVar24[0x16] + 1;
                      do {
                        if (plVar20[0xffffffffffffffff] == lVar13) {
                          pplVar24 = pplVar24 + (long)(int)((int)*plVar20 + (uint)uVar2) * 2 + 0x27;
                          goto code_r0x01e6e5c0;
                        }
                        plVar20 = plVar20 + 2;
                        uVar28 = uVar28 - 1;
                      } while (uVar28 != 0);
                    }
                    pplVar24 = (long **)func_0x00fac1f0(ppplVar31,lVar13,uVar27);
code_r0x01e6e5c0:
                    pcVar26 = (code *)*pplVar24;
                    plVar20 = pplVar24[1];
                  }
                  else {
                    if (iVar9 == 0) {
                      plVar20 = (*ppplVar31)[(ulong)*(ushort *)(ppplVar1 + 9) * 2 + 0x28];
                    }
                    else {
                      pplVar24 = *ppplVar31;
                      uVar27 = (ulong)*(ushort *)((long)pplVar24 + 0x12a);
                      if (uVar27 != 0) {
                        plVar20 = pplVar24[0x16] + 1;
                        do {
                          if ((long **)plVar20[0xffffffffffffffff] == ppplVar1[3]) {
                            pplVar24 = pplVar24 +
                                       (long)(int)((int)*plVar20 + (uint)*(ushort *)(ppplVar1 + 9))
                                       * 2 + 0x27;
                            goto code_r0x01e6e598;
                          }
                          plVar20 = plVar20 + 2;
                          uVar27 = uVar27 - 1;
                        } while (uVar27 != 0);
                      }
                      pplVar24 = (long **)func_0x00fac1f0(ppplVar31);
code_r0x01e6e598:
                      plVar20 = pplVar24[1];
                    }
                    plVar20 = (long *)func_0x00f78acc(plVar20,ppplVar1);
                    pcVar26 = (code *)*plVar20;
                  }
                  pppppplVar19 = (long ******)(*pcVar26)(ppplVar31,pppppplVar15,uVar22,plVar20);
                }
              }
              else {
                if ((*(short *)(ppplVar1 + 9) == -1) || (pppppplVar17[3] == (long *****)0x0))
                goto code_r0x01e6e418;
                iVar10 = func_0x00f78a44(ppplVar1);
                iVar9 = func_0x00f78ec0(ppplVar1);
                if (iVar10 == 0) {
                  uVar2 = *(ushort *)(ppplVar1 + 9);
                  uVar27 = (ulong)uVar2;
                  if (iVar9 == 0) {
                    pppppplVar19 = (long ******)
                                   (*(code *)(*pppppplVar15)[uVar27 * 2 + 0x27])
                                             (pppppplVar15,uVar22,(*pppppplVar15)[uVar27 * 2 + 0x28]
                                             );
                    goto code_r0x01e6e428;
                  }
                  ppplVar31 = (long ***)func_0x00f78a48(ppplVar1);
                  ppppplVar25 = *pppppplVar15;
                  uVar28 = (ulong)*(ushort *)((long)ppppplVar25 + 0x12a);
                  if (uVar28 != 0) {
                    pppplVar23 = ppppplVar25[0x16] + 1;
                    do {
                      if (pppplVar23[-1] == ppplVar31) {
                        ppppplVar25 = ppppplVar25 +
                                      (long)(int)(*(int *)pppplVar23 + (uint)uVar2) * 2 + 0x27;
                        goto code_r0x01e6e554;
                      }
                      pppplVar23 = pppplVar23 + 2;
                      uVar28 = uVar28 - 1;
                    } while (uVar28 != 0);
                  }
                  ppppplVar25 = (long *****)func_0x00fac1f0(pppppplVar15,ppplVar31,uVar27);
code_r0x01e6e554:
                  pppplVar23 = *ppppplVar25;
                  pppplVar11 = ppppplVar25[1];
                }
                else {
                  if (iVar9 == 0) {
                    pppplVar23 = (*pppppplVar15)[(ulong)*(ushort *)(ppplVar1 + 9) * 2 + 0x28];
                  }
                  else {
                    ppppplVar25 = *pppppplVar15;
                    uVar27 = (ulong)*(ushort *)((long)ppppplVar25 + 0x12a);
                    if (uVar27 != 0) {
                      pppplVar23 = ppppplVar25[0x16] + 1;
                      do {
                        if (pppplVar23[-1] == (long ***)ppplVar1[3]) {
                          ppppplVar25 = ppppplVar25 +
                                        (long)(int)(*(int *)pppplVar23 +
                                                   (uint)*(ushort *)(ppplVar1 + 9)) * 2 + 0x27;
                          goto code_r0x01e6e52c;
                        }
                        pppplVar23 = pppplVar23 + 2;
                        uVar27 = uVar27 - 1;
                      } while (uVar27 != 0);
                    }
                    ppppplVar25 = (long *****)func_0x00fac1f0(pppppplVar15);
code_r0x01e6e52c:
                    pppplVar23 = ppppplVar25[1];
                  }
                  pppplVar11 = (long ****)func_0x00f78acc(pppplVar23,ppplVar1);
                  pppplVar23 = (long ****)*pppplVar11;
                }
                pppppplVar19 = (long ******)(*(code *)pppplVar23)(pppppplVar15,uVar22,pppplVar11);
              }
            }
            else {
              if (bVar8) goto code_r0x01e6e418;
code_r0x01e6e30c:
              pppppplVar19 = (long ******)
                             (*(code *)ppplVar36)(ppplVar31,pppppplVar15,uVar22,ppplVar1);
            }
code_r0x01e6e428:
            pppplVar37 = (long ****)((long)pppplVar37 + 1);
            if (pppplVar37 == pppplVar12) {
              return pppppplVar19;
            }
          } while( true );
        }
        goto code_r0x02f8a1d8;
      }
      if (iVar10 != 0) {
        return pppppplVar15;
      }
      if (*(char *)(pppppplVar15 + 10) == '\0') {
        return pppppplVar15;
      }
      puVar39 = *(undefined1 **)(puVar5 + -0x10);
      puVar40 = *(undefined **)(puVar5 + -8);
      uVar14 = *(undefined8 *)(puVar5 + -0x20);
      puVar6 = puVar5;
      pppppplVar17 = pppppplVar15;
      pppppplVar15 = *(long *******)(puVar5 + -0x18);
    }
    *(undefined8 *)(puVar6 + -0x20) = uVar14;
    *(long *******)(puVar6 + -0x18) = pppppplVar15;
    *(undefined1 **)(puVar6 + -0x10) = puVar39;
    *(undefined **)(puVar6 + -8) = puVar40;
    if ((bRam0000000003ebc671 & 1) == 0) {
      func_0x00f78a20(0x3d2a560);
      bRam0000000003ebc671 = 1;
    }
    *(undefined4 *)((long)pppppplVar17 + 0x4c) = 1;
    param_1 = pppppplVar17[5];
    if (param_1 == (long *****)0x0) {
      puVar40 = &Core_UI2_UIScreenBehaviour__PlayStateAnimationEnter;
      param_1 = (long *****)func_0x00f78af4();
    }
    else {
      puVar40 = &UNK_02f8a220;
    }
    puVar7 = puVar6 + -0x60;
    *(undefined8 *)(puVar6 + -0x60) = unaff_d9;
    *(ulong *)(puVar6 + -0x58) = unaff_d8;
    *(undefined8 *)(puVar6 + -0x50) = 0x3d2a558;
    *(long *******)(puVar6 + -0x48) = pppppplVar19;
    *(undefined8 *)(puVar6 + -0x40) = 0x3ebc000;
    *(long *******)(puVar6 + -0x38) = pppppplVar17;
    *(undefined1 **)(puVar6 + -0x30) = puVar6 + -0x10;
    *(undefined **)(puVar6 + -0x28) = puVar40;
    puVar39 = puVar6 + -0x30;
    if ((bRam0000000003ebc678 & 1) == 0) {
      func_0x00f78a20(0x3d255d8);
      func_0x00f78a20(0x3d25600);
      func_0x00f78a20(0x3d78e90);
      bRam0000000003ebc678 = 1;
    }
    iVar10 = /*Core.UI2.UIScreenBehaviour$$HasValidAnimator*/ func_0x02f8a8e0(param_1);
    if (iVar10 == 0) goto code_r0x02f8a348;
    unaff_x21 = 0x3d255d8;
    pppplVar12 = param_1[3];
    if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (pppplVar12 != (long ****)0x0) {
      iVar10 = /*UnityEngine.Animator$$HasState*/ func_0x03211cd4(pppplVar12,0,**(undefined4 **)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xb8),0);
      if (iVar10 == 0) {
code_r0x02f8a348:
        iVar10 = (*(code *)(*param_1)[0x35])(param_1,(*param_1)[0x36]);
        fVar41 = 0.0;
        if (iVar10 != 0) {
          uVar18 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_1,0);
          if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          /*Core.UI2.UITweener$$RunTweenAnimationInGroups*/ func_0x02f8a9a8(/*STR('enter')*/ uRam0000000003d78e90,uVar18,0,0,0);
          fVar41 = (float)CONCAT13(extraout_var_10,
                                   CONCAT12(extraout_var_05,CONCAT11(extraout_var_00,extraout_b0_00)
                                           ));
        }
        pppppplVar19 = (long ******)/*UnityEngine.Time$$get_time*/ func_0x03272b70(0);
        *(float *)(param_1 + 7) =
             fVar41 + (float)CONCAT13(extraout_var_11,
                                      CONCAT12(extraout_var_06,
                                               CONCAT11(extraout_var_01,extraout_b0_01)));
        *(undefined1 *)((long)param_1 + 0x34) = 1;
        return pppppplVar19;
      }
      pppplVar12 = param_1[3];
      if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (pppplVar12 != (long ****)0x0) {
        /*UnityEngine.Animator$$Play*/ func_0x03210958(0,pppplVar12,**(undefined4 **)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xb8),0,0);
        goto code_r0x02f8a348;
      }
    }
    unaff_x20 = 0;
    puVar40 = &Core_UI2_UIScreenBehaviour__PlayStateAnimationExit;
    pppplVar12 = (long ****)func_0x00f78af4();
    unaff_x22 = uStack_1b0;
  }
  else {
    puVar40 = (undefined *)0x2f88c30;
  }
  *(undefined8 *)(puVar7 + -0x40) = unaff_d9;
  *(ulong *)(puVar7 + -0x38) = unaff_d8;
  *(undefined8 *)(puVar7 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar7 + -0x20) = unaff_x20;
  *(long ******)(puVar7 + -0x18) = param_1;
  *(undefined1 **)(puVar7 + -0x10) = puVar39;
  *(undefined **)(puVar7 + -8) = puVar40;
  if ((bRam0000000003ebc679 & 1) == 0) {
    func_0x00f78a20(0x3d255d8);
    func_0x00f78a20(0x3d25600);
    func_0x00f78a20(0x3d791b0);
    bRam0000000003ebc679 = 1;
  }
  iVar10 = /*Core.UI2.UIScreenBehaviour$$HasValidAnimator*/ func_0x02f8a8e0(pppplVar12);
  if (iVar10 != 0) {
    ppplVar31 = pppplVar12[3];
    if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (ppplVar31 == (long ***)0x0) {
code_r0x02f8a540:
      plVar20 = (long *)func_0x00f78af4();
      *(undefined8 *)(puVar7 + -0x60) = 0;
      *(long *****)(puVar7 + -0x58) = pppplVar12;
      *(undefined1 **)(puVar7 + -0x50) = puVar7 + -0x10;
      *(undefined **)(puVar7 + -0x48) = &Core_UI2_UIScreen__InActive;
      *(undefined4 *)((long)plVar20 + 0x4c) = 4;
      Core_Input_InputManager__UnregisterListener(plVar20,0);
                    /* WARNING: Could not recover jumptable at 0x02f8a57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pppppplVar19 = (long ******)
                     (**(code **)(*plVar20 + 0x228))(plVar20,*(undefined8 *)(*plVar20 + 0x230));
      return pppppplVar19;
    }
    iVar10 = /*UnityEngine.Animator$$HasState*/ func_0x03211cd4(ppplVar31,0,*(undefined4 *)(*(long *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xb8) + 4)
                             ,0);
    if (iVar10 != 0) {
      ppplVar31 = pppplVar12[3];
      if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (ppplVar31 == (long ***)0x0) goto code_r0x02f8a540;
      /*UnityEngine.Animator$$Play*/ func_0x03210958(0,ppplVar31,*(undefined4 *)(*(long *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xb8) + 4),0,0);
    }
  }
  uVar18 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(pppplVar12,0);
  if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*Core.UI2.UITweener$$RunTweenAnimationInGroups*/ func_0x02f8a9a8(/*STR('exit')*/ uRam0000000003d791b0,uVar18,1,0,0);
  pppppplVar19 = (long ******)/*UnityEngine.Time$$get_time*/ func_0x03272b70(0);
  *(float *)(pppplVar12 + 7) =
       (float)CONCAT13(extraout_var_12,
                       CONCAT12(extraout_var_07,CONCAT11(extraout_var_02,extraout_b0_02))) +
       (float)CONCAT13(extraout_var_13,
                       CONCAT12(extraout_var_08,CONCAT11(extraout_var_03,extraout_b0_03)));
  return pppppplVar19;
}



// ============================================================
// RVA: 0x2f88da4 | Core.UI2.UIScreen.SetParent
// ============================================================

/* WARNING: Possible PIC construction at 0x02f89078: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8a21c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8a244: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8a78c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f890a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f8a248) */
/* WARNING: Removing unreachable block (ram,0x02f8a220) */
/* WARNING: Removing unreachable block (ram,0x02f8a228) */
/* WARNING: Removing unreachable block (ram,0x02f8a240) */
/* WARNING: Removing unreachable block (ram,0x02f890ac) */
/* WARNING: Removing unreachable block (ram,0x02f890c8) */
/* WARNING: Removing unreachable block (ram,0x02f890b8) */

void Core_UI2_UIScreen__SetParent
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  ushort uVar1;
  undefined8 ******ppppppuVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar9;
  int iVar8;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined *puVar15;
  long ******pppppplVar16;
  long *plVar17;
  undefined4 uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  int *piVar23;
  long *******ppppppplVar24;
  undefined8 uVar25;
  long ******pppppplVar26;
  undefined8 unaff_x23;
  undefined8 uVar27;
  code *pcVar28;
  undefined8 unaff_x24;
  long lVar29;
  undefined8 unaff_x25;
  undefined1 *puVar30;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar31;
  undefined *puVar32;
  uint extraout_s0;
  float fVar33;
  float fVar34;
  ulong unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined8 uStack_130;
  code *pcStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  undefined8 ******ppppppuStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [16];
  long ******pppppplStack_a0;
  undefined *puStack_98;
  long *****ppppplStack_50;
  code *pcStack_48;
  long ****pppplStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003ebc66f & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003ebc66f = 1;
  }
  uVar25 = *(undefined8 *)(param_1 + 0x28);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar18 = 0;
  iVar8 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar25,0);
  if (iVar8 == 0) {
    return;
  }
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (lVar10 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_1 + 0x28),0), lVar10 != 0)) {
    if (pcRam0000000003ec1898 == (code *)0x0) {
      pcRam0000000003ec1898 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03275f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ec1898)(lVar10,param_2,0);
    return;
  }
  auVar35 = func_0x00f78af4();
  lVar10 = auVar35._0_8_;
  ppppplStack_50 = &pppplStack_40;
  puStack_38 = &Core_UI2_UIScreen__AssignParameters;
  *(undefined8 *)(lVar10 + 0x38) = param_5;
  *(long *)(lVar10 + 0x40) = auVar35._8_8_;
  *(undefined4 *)(lVar10 + 0x48) = uVar18;
  *(undefined8 *)(lVar10 + 0x30) = param_4;
  if (*(long *)(lVar10 + 0x28) != 0) {
    *(undefined4 *)(*(long *)(lVar10 + 0x28) + 0x30) = uVar18;
    return;
  }
  pppplStack_40 = (long ****)&stack0xfffffffffffffff0;
  auVar35 = func_0x00f78af4();
  lVar10 = auVar35._8_8_;
  uVar13 = auVar35._0_8_;
  pcStack_48 = Core_UI2_UIManager__AssignCallbacks;
  uVar25 = 0x3d1b6b8;
  uVar27 = 0x3d5f740;
  uStack_130 = 0x3d2a558;
  ppppppuVar2 = (undefined8 ******)&pppplStack_40;
  if ((bRam0000000003ebc662 & 1) == 0) {
    func_0x00f78a20(0x3d2a558);
    func_0x00f78a20(0x3d1b6b8);
    func_0x00f78a20(0x3d5f738);
    func_0x00f78a20(0x3d5f740);
    func_0x00f78a20(0x3d5f748);
    bRam0000000003ebc662 = 1;
    ppppppuVar2 = (undefined8 ******)ppppplStack_50;
  }
  ppppplStack_50 = (long *****)ppppppuVar2;
  lVar11 = func_0x00f78aec(/*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8);
  /*System.Action<UIScreen, int>$$.ctor*/ func_0x01e6e270(lVar11,uVar13,uRam0000000003d5f740,uRam0000000003d2a558);
  if (lVar10 != 0) {
    /*Core.UI2.UIScreen$$add_ScreenEnterStarted*/ func_0x02f899e0(lVar10,lVar11);
    uVar25 = func_0x00f78aec(/*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8);
    /*System.Action<UIScreen, int>$$.ctor*/ func_0x01e6e270(uVar25,uVar13,uRam0000000003d5f748,uRam0000000003d2a558);
    /*Core.UI2.UIScreen$$add_ScreenEnterStartBefore*/ func_0x02f89a80(lVar10,uVar25);
    uVar25 = func_0x00f78aec(/*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8);
    /*System.Action<UIScreen, int>$$.ctor*/ func_0x01e6e270(uVar25,uVar13,uRam0000000003d5f738,uRam0000000003d2a558);
    if ((bRam0000000003ebc66d & 1) == 0) {
      func_0x00f78a20(0x3d1b6b8);
      bRam0000000003ebc66d = 1;
    }
    puVar32 = *(undefined **)(lVar10 + 0x20);
    while ((plVar14 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(puVar32,uVar25,0), plVar14 == (long *)0x0 ||
           (*plVar14 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
      puVar15 = (undefined *)func_0x00ff0f44((undefined8 *)(lVar10 + 0x20),plVar14,puVar32);
      bVar6 = puVar32 == puVar15;
      puVar32 = puVar15;
      if (bVar6) {
        return;
      }
    }
    auVar35 = func_0x00f78e5c(plVar14);
    puVar15 = auVar35._8_8_;
    pppppplStack_a0 = (long ******)0x3d1b6b8;
    puStack_98 = puVar32;
    if ((bRam0000000003ebc66c & 1) == 0) {
      func_0x00f78a20(0x3d1b6b8);
      bRam0000000003ebc66c = 1;
    }
    ppppppplVar24 = (long *******)(auVar35._0_8_ + 0x18);
    pppppplVar26 = *ppppppplVar24;
    while ((plVar14 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(pppppplVar26,puVar15,0), plVar14 == (long *)0x0 ||
           (*plVar14 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
      pppppplVar16 = (long ******)func_0x00ff0f44(ppppppplVar24,plVar14,pppppplVar26);
      bVar6 = pppppplVar26 == pppppplVar16;
      pppppplVar26 = pppppplVar16;
      if (bVar6) {
        return;
      }
    }
    auVar35 = func_0x00f78e5c(plVar14);
    uVar25 = auVar35._8_8_;
    auStack_b0._8_8_ = &Core_UI2_UIScreen__remove_ScreenEnterStartBefore;
    ppppppuStack_c0 = ppppppplVar24;
    puStack_b8 = puVar15;
    auStack_b0._0_8_ = &stack0xffffffffffffff80;
    if ((bRam0000000003ebc66a & 1) == 0) {
      func_0x00f78a20(0x3d1b6b8);
      bRam0000000003ebc66a = 1;
    }
    plVar14 = (long *)(auVar35._0_8_ + 0x10);
    lVar10 = *plVar14;
    while ((plVar17 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar10,uVar25,0), plVar17 == (long *)0x0 ||
           (*plVar17 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
      lVar11 = func_0x00ff0f44(plVar14,plVar17,lVar10);
      bVar6 = lVar10 == lVar11;
      lVar10 = lVar11;
      if (bVar6) {
        return;
      }
    }
    auVar35 = func_0x00f78e5c(plVar17);
    uStack_100 = 0x3d1b6b8;
    ppppppplVar24 = (long *******)&stack0xffffffffffffff20;
    lStack_f8 = lVar10;
    plStack_f0 = plVar14;
    uStack_e8 = uVar25;
    if ((bRam0000000003ebc66e & 1) == 0) {
      func_0x00f78a20(0x3d1b6b8);
      bRam0000000003ebc66e = 1;
    }
    plVar14 = (long *)(auVar35._0_8_ + 0x20);
    lVar11 = *plVar14;
    while( true ) {
      uVar19 = 0;
      plVar17 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,auVar35._8_8_,0);
      if ((plVar17 != (long *)0x0) && (*plVar17 != /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8)) break;
      lVar10 = func_0x00ff0f44(plVar14,plVar17,lVar11);
      bVar6 = lVar11 == lVar10;
      lVar11 = lVar10;
      if (bVar6) {
        return;
      }
    }
    auVar36 = func_0x00f78e5c(plVar17);
    plVar17 = auVar36._8_8_;
    uStack_130 = 0x3d1b6b8;
    pcStack_108 = Core_UI2_UIManager__OnScreenStartBeforeEnter;
    if ((bRam0000000003ebc664 & 1) == 0) {
      func_0x00f78a20(0x3d2a560);
      bRam0000000003ebc664 = 1;
    }
    lVar10 = *(long *)(auVar36._0_8_ + 0x10);
    if (lVar10 == 0) {
      return;
    }
    puVar3 = &uStack_100;
    plVar12 = auVar35._8_8_;
    uVar25 = unaff_x23;
    uVar27 = unaff_x24;
    goto code_r0x01e6e280;
  }
  plVar17 = (long *)func_0x00f78af4();
  puVar3 = (undefined8 *)auStack_b0;
  puStack_98 = &Core_UI2_UIScreen__StartBeforeEnter;
  ppppppplVar24 = &pppppplStack_a0;
  pppppplStack_a0 = &ppppplStack_50;
  auStack_b0 = auVar35;
  if ((bRam0000000003ebc670 & 1) == 0) {
    func_0x00f78a20(0x3d2a560);
    bRam0000000003ebc670 = 1;
  }
  *(undefined4 *)((long)plVar17 + 0x4c) = 0;
  Core_Input_InputManager__RegisterListener(plVar17,0);
  (**(code **)(*plVar17 + 0x1b8))(plVar17,*(undefined8 *)(*plVar17 + 0x1c0));
  plVar14 = (long *)(**(code **)(*plVar17 + 0x188))(plVar17,*(undefined8 *)(*plVar17 + 400));
  plVar12 = (long *)plVar17[5];
  if (plVar12 == (long *)0x0) {
code_r0x02f8908c:
    plVar17 = (long *)func_0x00f78af4();
    auVar35._8_8_ = plVar17;
    auVar35._0_8_ = plVar14;
    puVar4 = &stack0xffffffffffffff20;
    ppppppuStack_c0 = ppppppplVar24;
    puStack_b8 = &Core_UI2_UIScreen__Update;
    pppppppuVar31 = &ppppppuStack_c0;
    unaff_d8 = (ulong)extraout_s0;
    puVar32 = &UNK_02f890ac;
  }
  else {
    (**(code **)(*plVar12 + 0x178))(plVar12,0,*(undefined8 *)(*plVar12 + 0x180));
    if ((int)plVar14 == 0) {
      *(undefined1 *)(plVar17 + 10) = 1;
    }
    else {
      plVar12 = (long *)plVar17[5];
      uVar13 = /*Core.UI2.UIScreen$$BeforeEnterCoroutine*/ func_0x02f8a0c0(plVar17);
      plVar14 = (long *)0x0;
      if (plVar12 == (long *)0x0) goto code_r0x02f8908c;
      /*UnityEngine.MonoBehaviour$$StartCoroutine*/ func_0x03247e70(plVar12,uVar13,0);
      plVar14 = plVar12;
    }
    lVar10 = plVar17[2];
    if (lVar10 != 0) {
      uVar19 = (ulong)*(uint *)(plVar17 + 9);
      pcStack_108 = (code *)&UNK_02f8907c;
      plVar12 = plVar17;
      goto code_r0x01e6e280;
    }
    puVar4 = &stack0xffffffffffffff70;
    pppppppuVar31 = (undefined8 *******)pppppplStack_a0;
    puVar32 = puStack_98;
    auVar35 = auStack_b0;
  }
  uVar13 = auVar35._0_8_;
  puVar5 = puVar4 + -0x20;
  *(undefined1 (*) [16])(puVar4 + -0x20) = auVar35;
  *(undefined8 ********)(puVar4 + -0x10) = pppppppuVar31;
  *(undefined **)(puVar4 + -8) = puVar32;
  puVar30 = puVar4 + -0x10;
  iVar8 = *(int *)((long)plVar17 + 0x4c);
  if (iVar8 == 3) {
    if (plVar17[5] != 0) {
      iVar8 = /*Core.UI2.UIScreenBehaviour$$HasStateAnimationFinished*/ func_0x02f8a63c();
      if (iVar8 == 0) {
        return;
      }
      *(undefined4 *)((long)plVar17 + 0x4c) = 4;
      Core_Input_InputManager__UnregisterListener(plVar17,0);
                    /* WARNING: Could not recover jumptable at 0x02f8a1c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar17 + 0x228))(plVar17,*(undefined8 *)(*plVar17 + 0x230));
      return;
    }
code_r0x02f8a1d8:
    puVar32 = &Core_UI2_UIScreen__StartEnter;
    plVar14 = (long *)func_0x00f78af4();
  }
  else {
    if (iVar8 == 1) {
      if (plVar17[5] != 0) {
        iVar8 = /*Core.UI2.UIScreenBehaviour$$HasStateAnimationFinished*/ func_0x02f8a63c();
        if (iVar8 == 0) {
          return;
        }
        puVar3 = (undefined8 *)(puVar4 + -0x20);
        *(undefined8 *)(puVar4 + -0x20) = *(undefined8 *)(puVar4 + -0x20);
        *(undefined8 *)(puVar4 + -0x18) = *(undefined8 *)(puVar4 + -0x18);
        *(undefined8 *)(puVar4 + -0x10) = *(undefined8 *)(puVar4 + -0x10);
        *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
        ppppppplVar24 = (long *******)(puVar4 + -0x10);
        plVar14 = (long *)0x3ebc000;
        if ((bRam0000000003ebc673 & 1) == 0) {
          func_0x00f78a20(0x3d2a560);
          bRam0000000003ebc673 = 1;
        }
        *(undefined4 *)((long)plVar17 + 0x4c) = 2;
        lVar10 = plVar17[4];
        if (lVar10 == 0) {
                    /* WARNING: Could not recover jumptable at 0x02f8a7a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar17 + 0x1e8))(plVar17,*(undefined8 *)(*plVar17 + 0x1f0));
          return;
        }
        uVar19 = (ulong)*(uint *)(plVar17 + 9);
        pcStack_108 = (code *)&UNK_02f8a790;
        plVar12 = plVar17;
code_r0x01e6e280:
        *(undefined8 *)((long)puVar3 + -0x60) = unaff_x28;
        *(undefined8 *)((long)puVar3 + -0x58) = unaff_x27;
        *(undefined8 *)((long)puVar3 + -0x50) = unaff_x26;
        *(undefined8 *)((long)puVar3 + -0x48) = unaff_x25;
        *(undefined8 *)((long)puVar3 + -0x40) = uVar27;
        *(undefined8 *)((long)puVar3 + -0x38) = uVar25;
        *(undefined8 *)((long)puVar3 + -0x30) = uStack_130;
        *(long *)((long)puVar3 + -0x28) = lVar11;
        *(long **)((long)puVar3 + -0x20) = plVar14;
        *(long **)((long)puVar3 + -0x18) = plVar12;
        *(long ********)((long)puVar3 + -0x10) = ppppppplVar24;
        *(code **)((long)puVar3 + -8) = pcStack_108;
        *(long *)((long)puVar3 + -0x68) = lVar10;
        lVar11 = *(long *)(lVar10 + 0x68);
        if (lVar11 == 0) {
          puVar30 = (undefined1 *)((long)puVar3 + -0x68);
          lVar29 = 1;
        }
        else {
          lVar29 = *(long *)(lVar11 + 0x18);
          if (lVar29 == 0) {
            return;
          }
          puVar30 = (undefined1 *)(lVar11 + 0x20);
        }
        lVar11 = 0;
        do {
          lVar20 = *(long *)(puVar30 + lVar11 * 8);
          pcVar28 = *(code **)(lVar20 + 0x10);
          plVar14 = *(long **)(lVar20 + 0x20);
          lVar20 = *(long *)(lVar20 + 0x28);
          if (*(short *)(lVar20 + 0x48) == -1) {
            func_0x00f78ad8(lVar20);
          }
          iVar8 = func_0x00f78a4c(lVar20);
          bVar6 = *(char *)(lVar20 + 0x4a) == '\x02';
          if (iVar8 == 0) {
            if (bVar6) {
              if (plVar14 == (long *)0x0) {
code_r0x01e6e418:
                (*pcVar28)(plVar17,uVar19,lVar20);
              }
              else {
                if (((*(short *)(lVar20 + 0x48) == -1) || ((*(byte *)(*plVar14 + 0x115) & 1) != 0))
                   || (*(long *)(lVar10 + 0x18) == 0)) goto code_r0x01e6e30c;
                iVar8 = func_0x00f78a44(lVar20);
                iVar7 = func_0x00f78ec0(lVar20);
                if (iVar8 == 0) {
                  uVar1 = *(ushort *)(lVar20 + 0x48);
                  if (iVar7 == 0) {
                    lVar20 = *plVar14 + (ulong)uVar1 * 0x10;
                    (**(code **)(lVar20 + 0x138))
                              (plVar14,plVar17,uVar19,*(undefined8 *)(lVar20 + 0x140));
                    goto code_r0x01e6e428;
                  }
                  lVar20 = func_0x00f78a48(lVar20);
                  lVar21 = *plVar14;
                  uVar22 = (ulong)*(ushort *)(lVar21 + 0x12a);
                  if (uVar22 != 0) {
                    piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar23 + -2) == lVar20) {
                        puVar9 = (undefined8 *)
                                 (lVar21 + (long)(int)(*piVar23 + (uint)uVar1) * 0x10 + 0x138);
                        goto code_r0x01e6e5c0;
                      }
                      piVar23 = piVar23 + 4;
                      uVar22 = uVar22 - 1;
                    } while (uVar22 != 0);
                  }
                  puVar9 = (undefined8 *)func_0x00fac1f0(plVar14,lVar20,(ulong)uVar1);
code_r0x01e6e5c0:
                  pcVar28 = (code *)*puVar9;
                  puVar9 = (undefined8 *)puVar9[1];
                }
                else {
                  if (iVar7 == 0) {
                    uVar25 = *(undefined8 *)
                              (*plVar14 + (ulong)*(ushort *)(lVar20 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar21 = *plVar14;
                    uVar22 = (ulong)*(ushort *)(lVar21 + 0x12a);
                    if (uVar22 != 0) {
                      piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar23 + -2) == *(long *)(lVar20 + 0x18)) {
                          lVar21 = lVar21 + (long)(int)(*piVar23 + (uint)*(ushort *)(lVar20 + 0x48))
                                            * 0x10 + 0x138;
                          goto code_r0x01e6e598;
                        }
                        piVar23 = piVar23 + 4;
                        uVar22 = uVar22 - 1;
                      } while (uVar22 != 0);
                    }
                    lVar21 = func_0x00fac1f0(plVar14);
code_r0x01e6e598:
                    uVar25 = *(undefined8 *)(lVar21 + 8);
                  }
                  puVar9 = (undefined8 *)func_0x00f78acc(uVar25,lVar20);
                  pcVar28 = (code *)*puVar9;
                }
                (*pcVar28)(plVar14,plVar17,uVar19,puVar9);
              }
            }
            else {
              if ((*(short *)(lVar20 + 0x48) == -1) || (*(long *)(lVar10 + 0x18) == 0))
              goto code_r0x01e6e418;
              iVar8 = func_0x00f78a44(lVar20);
              iVar7 = func_0x00f78ec0(lVar20);
              if (iVar8 == 0) {
                uVar1 = *(ushort *)(lVar20 + 0x48);
                if (iVar7 == 0) {
                  lVar20 = *plVar17 + (ulong)uVar1 * 0x10;
                  (**(code **)(lVar20 + 0x138))(plVar17,uVar19,*(undefined8 *)(lVar20 + 0x140));
                  goto code_r0x01e6e428;
                }
                lVar20 = func_0x00f78a48(lVar20);
                lVar21 = *plVar17;
                uVar22 = (ulong)*(ushort *)(lVar21 + 0x12a);
                if (uVar22 != 0) {
                  piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar23 + -2) == lVar20) {
                      puVar9 = (undefined8 *)
                               (lVar21 + (long)(int)(*piVar23 + (uint)uVar1) * 0x10 + 0x138);
                      goto code_r0x01e6e554;
                    }
                    piVar23 = piVar23 + 4;
                    uVar22 = uVar22 - 1;
                  } while (uVar22 != 0);
                }
                puVar9 = (undefined8 *)func_0x00fac1f0(plVar17,lVar20,(ulong)uVar1);
code_r0x01e6e554:
                pcVar28 = (code *)*puVar9;
                puVar9 = (undefined8 *)puVar9[1];
              }
              else {
                if (iVar7 == 0) {
                  uVar25 = *(undefined8 *)
                            (*plVar17 + (ulong)*(ushort *)(lVar20 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar21 = *plVar17;
                  uVar22 = (ulong)*(ushort *)(lVar21 + 0x12a);
                  if (uVar22 != 0) {
                    piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar23 + -2) == *(long *)(lVar20 + 0x18)) {
                        lVar21 = lVar21 + (long)(int)(*piVar23 + (uint)*(ushort *)(lVar20 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01e6e52c;
                      }
                      piVar23 = piVar23 + 4;
                      uVar22 = uVar22 - 1;
                    } while (uVar22 != 0);
                  }
                  lVar21 = func_0x00fac1f0(plVar17);
code_r0x01e6e52c:
                  uVar25 = *(undefined8 *)(lVar21 + 8);
                }
                puVar9 = (undefined8 *)func_0x00f78acc(uVar25,lVar20);
                pcVar28 = (code *)*puVar9;
              }
              (*pcVar28)(plVar17,uVar19,puVar9);
            }
          }
          else {
            if (bVar6) goto code_r0x01e6e418;
code_r0x01e6e30c:
            (*pcVar28)(plVar14,plVar17,uVar19,lVar20);
          }
code_r0x01e6e428:
          lVar11 = lVar11 + 1;
          if (lVar11 == lVar29) {
            return;
          }
        } while( true );
      }
      goto code_r0x02f8a1d8;
    }
    if (iVar8 != 0) {
      return;
    }
    if ((char)plVar17[10] == '\0') {
      return;
    }
    puVar30 = *(undefined1 **)(puVar4 + -0x10);
    puVar32 = *(undefined **)(puVar4 + -8);
    uVar13 = *(undefined8 *)(puVar4 + -0x20);
    puVar5 = puVar4;
    plVar14 = plVar17;
    plVar17 = *(long **)(puVar4 + -0x18);
  }
  *(undefined8 *)(puVar5 + -0x20) = uVar13;
  *(long **)(puVar5 + -0x18) = plVar17;
  *(undefined1 **)(puVar5 + -0x10) = puVar30;
  *(undefined **)(puVar5 + -8) = puVar32;
  if ((bRam0000000003ebc671 & 1) == 0) {
    func_0x00f78a20(0x3d2a560);
    bRam0000000003ebc671 = 1;
  }
  *(undefined4 *)((long)plVar14 + 0x4c) = 1;
  plVar17 = (long *)plVar14[5];
  if (plVar17 == (long *)0x0) {
    puVar32 = &Core_UI2_UIScreenBehaviour__PlayStateAnimationEnter;
    plVar17 = (long *)func_0x00f78af4();
  }
  else {
    puVar32 = &UNK_02f8a220;
  }
  *(undefined8 *)(puVar5 + -0x60) = unaff_d9;
  *(ulong *)(puVar5 + -0x58) = unaff_d8;
  *(undefined8 *)(puVar5 + -0x50) = 0x3d2a558;
  *(long *)(puVar5 + -0x48) = lVar11;
  *(undefined8 *)(puVar5 + -0x40) = 0x3ebc000;
  *(long **)(puVar5 + -0x38) = plVar14;
  *(undefined1 **)(puVar5 + -0x30) = puVar5 + -0x10;
  *(undefined **)(puVar5 + -0x28) = puVar32;
  if ((bRam0000000003ebc678 & 1) == 0) {
    func_0x00f78a20(0x3d255d8);
    func_0x00f78a20(0x3d25600);
    func_0x00f78a20(0x3d78e90);
    bRam0000000003ebc678 = 1;
  }
  iVar8 = /*Core.UI2.UIScreenBehaviour$$HasValidAnimator*/ func_0x02f8a8e0(plVar17);
  if (iVar8 == 0) goto code_r0x02f8a348;
  lVar10 = plVar17[3];
  if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar10 != 0) {
    iVar8 = /*UnityEngine.Animator$$HasState*/ func_0x03211cd4(lVar10,0,**(undefined4 **)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xb8),0);
    if (iVar8 == 0) {
code_r0x02f8a348:
      iVar8 = (**(code **)(*plVar17 + 0x1a8))(plVar17,*(undefined8 *)(*plVar17 + 0x1b0));
      fVar33 = 0.0;
      if (iVar8 != 0) {
        uVar25 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar17,0);
        if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        fVar33 = (float)/*Core.UI2.UITweener$$RunTweenAnimationInGroups*/ func_0x02f8a9a8(/*STR('enter')*/ uRam0000000003d78e90,uVar25,0,0,0);
      }
      fVar34 = (float)/*UnityEngine.Time$$get_time*/ func_0x03272b70(0);
      *(float *)(plVar17 + 7) = fVar33 + fVar34;
      *(undefined1 *)((long)plVar17 + 0x34) = 1;
      return;
    }
    lVar10 = plVar17[3];
    if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar10 != 0) {
      /*UnityEngine.Animator$$Play*/ func_0x03210958(0,lVar10,**(undefined4 **)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xb8),0,0);
      goto code_r0x02f8a348;
    }
  }
  lVar10 = func_0x00f78af4();
  *(undefined8 *)(puVar5 + -0xa0) = unaff_d9;
  *(ulong *)(puVar5 + -0x98) = unaff_d8;
  *(undefined8 *)(puVar5 + -0x90) = 0x3d2a558;
  *(undefined8 *)(puVar5 + -0x88) = 0x3d255d8;
  *(undefined8 *)(puVar5 + -0x80) = 0;
  *(long **)(puVar5 + -0x78) = plVar17;
  *(undefined1 **)(puVar5 + -0x70) = puVar5 + -0x30;
  *(undefined **)(puVar5 + -0x68) = &Core_UI2_UIScreenBehaviour__PlayStateAnimationExit;
  if ((bRam0000000003ebc679 & 1) == 0) {
    func_0x00f78a20(0x3d255d8);
    func_0x00f78a20(0x3d25600);
    func_0x00f78a20(0x3d791b0);
    bRam0000000003ebc679 = 1;
  }
  iVar8 = /*Core.UI2.UIScreenBehaviour$$HasValidAnimator*/ func_0x02f8a8e0(lVar10);
  if (iVar8 != 0) {
    lVar11 = *(long *)(lVar10 + 0x18);
    if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar11 == 0) {
code_r0x02f8a540:
      plVar14 = (long *)func_0x00f78af4();
      *(undefined8 *)(puVar5 + -0xc0) = 0;
      *(long *)(puVar5 + -0xb8) = lVar10;
      *(undefined1 **)(puVar5 + -0xb0) = puVar5 + -0x70;
      *(undefined **)(puVar5 + -0xa8) = &Core_UI2_UIScreen__InActive;
      *(undefined4 *)((long)plVar14 + 0x4c) = 4;
      Core_Input_InputManager__UnregisterListener(plVar14,0);
                    /* WARNING: Could not recover jumptable at 0x02f8a57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar14 + 0x228))(plVar14,*(undefined8 *)(*plVar14 + 0x230));
      return;
    }
    iVar8 = /*UnityEngine.Animator$$HasState*/ func_0x03211cd4(lVar11,0,*(undefined4 *)(*(long *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xb8) + 4),0);
    if (iVar8 != 0) {
      lVar11 = *(long *)(lVar10 + 0x18);
      if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar11 == 0) goto code_r0x02f8a540;
      /*UnityEngine.Animator$$Play*/ func_0x03210958(0,lVar11,*(undefined4 *)(*(long *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xb8) + 4),0,0);
    }
  }
  uVar25 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar10,0);
  if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  fVar33 = (float)/*Core.UI2.UITweener$$RunTweenAnimationInGroups*/ func_0x02f8a9a8(/*STR('exit')*/ uRam0000000003d791b0,uVar25,1,0,0);
  fVar34 = (float)/*UnityEngine.Time$$get_time*/ func_0x03272b70(0);
  *(float *)(lVar10 + 0x38) = fVar33 + fVar34;
  return;
}



// ============================================================
// RVA: 0x2f88e58 | Core.UI2.UIScreen.AssignParameters
// ============================================================

/* WARNING: Possible PIC construction at 0x02f89078: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8a21c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8a244: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8a78c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f890a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f8a248) */
/* WARNING: Removing unreachable block (ram,0x02f8a220) */
/* WARNING: Removing unreachable block (ram,0x02f8a228) */
/* WARNING: Removing unreachable block (ram,0x02f8a240) */
/* WARNING: Removing unreachable block (ram,0x02f890ac) */
/* WARNING: Removing unreachable block (ram,0x02f890c8) */
/* WARNING: Removing unreachable block (ram,0x02f890b8) */

void Core_UI2_UIScreen__AssignParameters
               (long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5)

{
  ushort uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined *puVar14;
  long ******pppppplVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  int *piVar22;
  long *******ppppppplVar23;
  long ******pppppplVar24;
  undefined8 unaff_x23;
  undefined8 uVar25;
  code *pcVar26;
  undefined8 unaff_x24;
  long lVar27;
  undefined8 unaff_x25;
  undefined1 *puVar28;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar29;
  undefined *puVar30;
  uint extraout_s0;
  float fVar31;
  float fVar32;
  ulong unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined8 uStack_100;
  code *pcStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined8 ******ppppppuStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [16];
  long ******pppppplStack_70;
  undefined *puStack_68;
  long *****ppppplStack_20;
  code *pcStack_18;
  
  *(undefined8 *)(param_1 + 0x38) = param_5;
  *(undefined8 *)(param_1 + 0x40) = param_2;
  *(undefined4 *)(param_1 + 0x48) = param_3;
  *(undefined8 *)(param_1 + 0x30) = param_4;
  if (*(long *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x30) = param_3;
    return;
  }
  auVar33 = func_0x00f78af4();
  lVar17 = auVar33._8_8_;
  uVar12 = auVar33._0_8_;
  pcStack_18 = Core_UI2_UIManager__AssignCallbacks;
  uVar10 = 0x3d1b6b8;
  uVar25 = 0x3d5f740;
  uStack_100 = 0x3d2a558;
  ppppplStack_20 = (long *****)&stack0xfffffffffffffff0;
  if ((bRam0000000003ebc662 & 1) == 0) {
    ppppplStack_20 = (long *****)&stack0xfffffffffffffff0;
    func_0x00f78a20(0x3d2a558);
    func_0x00f78a20(0x3d1b6b8);
    func_0x00f78a20(0x3d5f738);
    func_0x00f78a20(0x3d5f740);
    func_0x00f78a20(0x3d5f748);
    bRam0000000003ebc662 = 1;
  }
  lVar9 = func_0x00f78aec(/*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8);
  /*System.Action<UIScreen, int>$$.ctor*/ func_0x01e6e270(lVar9,uVar12,uRam0000000003d5f740,uRam0000000003d2a558);
  if (lVar17 != 0) {
    /*Core.UI2.UIScreen$$add_ScreenEnterStarted*/ func_0x02f899e0(lVar17,lVar9);
    uVar10 = func_0x00f78aec(/*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8);
    /*System.Action<UIScreen, int>$$.ctor*/ func_0x01e6e270(uVar10,uVar12,uRam0000000003d5f748,uRam0000000003d2a558);
    /*Core.UI2.UIScreen$$add_ScreenEnterStartBefore*/ func_0x02f89a80(lVar17,uVar10);
    uVar10 = func_0x00f78aec(/*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8);
    /*System.Action<UIScreen, int>$$.ctor*/ func_0x01e6e270(uVar10,uVar12,uRam0000000003d5f738,uRam0000000003d2a558);
    if ((bRam0000000003ebc66d & 1) == 0) {
      func_0x00f78a20(0x3d1b6b8);
      bRam0000000003ebc66d = 1;
    }
    puVar30 = *(undefined **)(lVar17 + 0x20);
    while ((plVar13 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(puVar30,uVar10,0), plVar13 == (long *)0x0 ||
           (*plVar13 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
      puVar14 = (undefined *)func_0x00ff0f44((undefined8 *)(lVar17 + 0x20),plVar13,puVar30);
      bVar5 = puVar30 == puVar14;
      puVar30 = puVar14;
      if (bVar5) {
        return;
      }
    }
    auVar33 = func_0x00f78e5c(plVar13);
    puVar14 = auVar33._8_8_;
    pppppplStack_70 = (long ******)0x3d1b6b8;
    puStack_68 = puVar30;
    if ((bRam0000000003ebc66c & 1) == 0) {
      func_0x00f78a20(0x3d1b6b8);
      bRam0000000003ebc66c = 1;
    }
    ppppppplVar23 = (long *******)(auVar33._0_8_ + 0x18);
    pppppplVar24 = *ppppppplVar23;
    while ((plVar13 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(pppppplVar24,puVar14,0), plVar13 == (long *)0x0 ||
           (*plVar13 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
      pppppplVar15 = (long ******)func_0x00ff0f44(ppppppplVar23,plVar13,pppppplVar24);
      bVar5 = pppppplVar24 == pppppplVar15;
      pppppplVar24 = pppppplVar15;
      if (bVar5) {
        return;
      }
    }
    auVar33 = func_0x00f78e5c(plVar13);
    uVar10 = auVar33._8_8_;
    auStack_80._8_8_ = &Core_UI2_UIScreen__remove_ScreenEnterStartBefore;
    ppppppuStack_90 = ppppppplVar23;
    puStack_88 = puVar14;
    auStack_80._0_8_ = &stack0xffffffffffffffb0;
    if ((bRam0000000003ebc66a & 1) == 0) {
      func_0x00f78a20(0x3d1b6b8);
      bRam0000000003ebc66a = 1;
    }
    plVar13 = (long *)(auVar33._0_8_ + 0x10);
    lVar17 = *plVar13;
    while ((plVar16 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar17,uVar10,0), plVar16 == (long *)0x0 ||
           (*plVar16 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
      lVar9 = func_0x00ff0f44(plVar13,plVar16,lVar17);
      bVar5 = lVar17 == lVar9;
      lVar17 = lVar9;
      if (bVar5) {
        return;
      }
    }
    auVar33 = func_0x00f78e5c(plVar16);
    uStack_d0 = 0x3d1b6b8;
    ppppppplVar23 = (long *******)&stack0xffffffffffffff50;
    lStack_c8 = lVar17;
    plStack_c0 = plVar13;
    uStack_b8 = uVar10;
    if ((bRam0000000003ebc66e & 1) == 0) {
      func_0x00f78a20(0x3d1b6b8);
      bRam0000000003ebc66e = 1;
    }
    plVar13 = (long *)(auVar33._0_8_ + 0x20);
    lVar9 = *plVar13;
    while( true ) {
      uVar18 = 0;
      plVar16 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar9,auVar33._8_8_,0);
      if ((plVar16 != (long *)0x0) && (*plVar16 != /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8)) break;
      lVar17 = func_0x00ff0f44(plVar13,plVar16,lVar9);
      bVar5 = lVar9 == lVar17;
      lVar9 = lVar17;
      if (bVar5) {
        return;
      }
    }
    auVar34 = func_0x00f78e5c(plVar16);
    plVar16 = auVar34._8_8_;
    uStack_100 = 0x3d1b6b8;
    pcStack_d8 = Core_UI2_UIManager__OnScreenStartBeforeEnter;
    if ((bRam0000000003ebc664 & 1) == 0) {
      func_0x00f78a20(0x3d2a560);
      bRam0000000003ebc664 = 1;
    }
    lVar17 = *(long *)(auVar34._0_8_ + 0x10);
    if (lVar17 == 0) {
      return;
    }
    puVar2 = &uStack_d0;
    plVar11 = auVar33._8_8_;
    uVar10 = unaff_x23;
    uVar25 = unaff_x24;
    goto code_r0x01e6e280;
  }
  plVar16 = (long *)func_0x00f78af4();
  puVar2 = (undefined8 *)auStack_80;
  puStack_68 = &Core_UI2_UIScreen__StartBeforeEnter;
  ppppppplVar23 = &pppppplStack_70;
  pppppplStack_70 = &ppppplStack_20;
  auStack_80 = auVar33;
  if ((bRam0000000003ebc670 & 1) == 0) {
    func_0x00f78a20(0x3d2a560);
    bRam0000000003ebc670 = 1;
  }
  *(undefined4 *)((long)plVar16 + 0x4c) = 0;
  Core_Input_InputManager__RegisterListener(plVar16,0);
  (**(code **)(*plVar16 + 0x1b8))(plVar16,*(undefined8 *)(*plVar16 + 0x1c0));
  plVar13 = (long *)(**(code **)(*plVar16 + 0x188))(plVar16,*(undefined8 *)(*plVar16 + 400));
  plVar11 = (long *)plVar16[5];
  if (plVar11 == (long *)0x0) {
code_r0x02f8908c:
    plVar16 = (long *)func_0x00f78af4();
    auVar33._8_8_ = plVar16;
    auVar33._0_8_ = plVar13;
    puVar3 = &stack0xffffffffffffff50;
    ppppppuStack_90 = ppppppplVar23;
    puStack_88 = &Core_UI2_UIScreen__Update;
    pppppppuVar29 = &ppppppuStack_90;
    unaff_d8 = (ulong)extraout_s0;
    puVar30 = &UNK_02f890ac;
  }
  else {
    (**(code **)(*plVar11 + 0x178))(plVar11,0,*(undefined8 *)(*plVar11 + 0x180));
    if ((int)plVar13 == 0) {
      *(undefined1 *)(plVar16 + 10) = 1;
    }
    else {
      plVar11 = (long *)plVar16[5];
      uVar12 = /*Core.UI2.UIScreen$$BeforeEnterCoroutine*/ func_0x02f8a0c0(plVar16);
      plVar13 = (long *)0x0;
      if (plVar11 == (long *)0x0) goto code_r0x02f8908c;
      /*UnityEngine.MonoBehaviour$$StartCoroutine*/ func_0x03247e70(plVar11,uVar12,0);
      plVar13 = plVar11;
    }
    lVar17 = plVar16[2];
    if (lVar17 != 0) {
      uVar18 = (ulong)*(uint *)(plVar16 + 9);
      pcStack_d8 = (code *)&UNK_02f8907c;
      plVar11 = plVar16;
      goto code_r0x01e6e280;
    }
    puVar3 = &stack0xffffffffffffffa0;
    pppppppuVar29 = (undefined8 *******)pppppplStack_70;
    puVar30 = puStack_68;
    auVar33 = auStack_80;
  }
  uVar12 = auVar33._0_8_;
  puVar4 = puVar3 + -0x20;
  *(undefined1 (*) [16])(puVar3 + -0x20) = auVar33;
  *(undefined8 ********)(puVar3 + -0x10) = pppppppuVar29;
  *(undefined **)(puVar3 + -8) = puVar30;
  puVar28 = puVar3 + -0x10;
  iVar6 = *(int *)((long)plVar16 + 0x4c);
  if (iVar6 == 3) {
    if (plVar16[5] != 0) {
      iVar6 = /*Core.UI2.UIScreenBehaviour$$HasStateAnimationFinished*/ func_0x02f8a63c();
      if (iVar6 == 0) {
        return;
      }
      *(undefined4 *)((long)plVar16 + 0x4c) = 4;
      Core_Input_InputManager__UnregisterListener(plVar16,0);
                    /* WARNING: Could not recover jumptable at 0x02f8a1c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar16 + 0x228))(plVar16,*(undefined8 *)(*plVar16 + 0x230));
      return;
    }
code_r0x02f8a1d8:
    puVar30 = &Core_UI2_UIScreen__StartEnter;
    plVar13 = (long *)func_0x00f78af4();
  }
  else {
    if (iVar6 == 1) {
      if (plVar16[5] != 0) {
        iVar6 = /*Core.UI2.UIScreenBehaviour$$HasStateAnimationFinished*/ func_0x02f8a63c();
        if (iVar6 == 0) {
          return;
        }
        puVar2 = (undefined8 *)(puVar3 + -0x20);
        *(undefined8 *)(puVar3 + -0x20) = *(undefined8 *)(puVar3 + -0x20);
        *(undefined8 *)(puVar3 + -0x18) = *(undefined8 *)(puVar3 + -0x18);
        *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
        *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
        ppppppplVar23 = (long *******)(puVar3 + -0x10);
        plVar13 = (long *)0x3ebc000;
        if ((bRam0000000003ebc673 & 1) == 0) {
          func_0x00f78a20(0x3d2a560);
          bRam0000000003ebc673 = 1;
        }
        *(undefined4 *)((long)plVar16 + 0x4c) = 2;
        lVar17 = plVar16[4];
        if (lVar17 == 0) {
                    /* WARNING: Could not recover jumptable at 0x02f8a7a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar16 + 0x1e8))(plVar16,*(undefined8 *)(*plVar16 + 0x1f0));
          return;
        }
        uVar18 = (ulong)*(uint *)(plVar16 + 9);
        pcStack_d8 = (code *)&UNK_02f8a790;
        plVar11 = plVar16;
code_r0x01e6e280:
        *(undefined8 *)((long)puVar2 + -0x60) = unaff_x28;
        *(undefined8 *)((long)puVar2 + -0x58) = unaff_x27;
        *(undefined8 *)((long)puVar2 + -0x50) = unaff_x26;
        *(undefined8 *)((long)puVar2 + -0x48) = unaff_x25;
        *(undefined8 *)((long)puVar2 + -0x40) = uVar25;
        *(undefined8 *)((long)puVar2 + -0x38) = uVar10;
        *(undefined8 *)((long)puVar2 + -0x30) = uStack_100;
        *(long *)((long)puVar2 + -0x28) = lVar9;
        *(long **)((long)puVar2 + -0x20) = plVar13;
        *(long **)((long)puVar2 + -0x18) = plVar11;
        *(long ********)((long)puVar2 + -0x10) = ppppppplVar23;
        *(code **)((long)puVar2 + -8) = pcStack_d8;
        *(long *)((long)puVar2 + -0x68) = lVar17;
        lVar9 = *(long *)(lVar17 + 0x68);
        if (lVar9 == 0) {
          puVar28 = (undefined1 *)((long)puVar2 + -0x68);
          lVar27 = 1;
        }
        else {
          lVar27 = *(long *)(lVar9 + 0x18);
          if (lVar27 == 0) {
            return;
          }
          puVar28 = (undefined1 *)(lVar9 + 0x20);
        }
        lVar9 = 0;
        do {
          lVar19 = *(long *)(puVar28 + lVar9 * 8);
          pcVar26 = *(code **)(lVar19 + 0x10);
          plVar13 = *(long **)(lVar19 + 0x20);
          lVar19 = *(long *)(lVar19 + 0x28);
          if (*(short *)(lVar19 + 0x48) == -1) {
            func_0x00f78ad8(lVar19);
          }
          iVar6 = func_0x00f78a4c(lVar19);
          bVar5 = *(char *)(lVar19 + 0x4a) == '\x02';
          if (iVar6 == 0) {
            if (bVar5) {
              if (plVar13 == (long *)0x0) {
code_r0x01e6e418:
                (*pcVar26)(plVar16,uVar18,lVar19);
              }
              else {
                if (((*(short *)(lVar19 + 0x48) == -1) || ((*(byte *)(*plVar13 + 0x115) & 1) != 0))
                   || (*(long *)(lVar17 + 0x18) == 0)) goto code_r0x01e6e30c;
                iVar6 = func_0x00f78a44(lVar19);
                iVar7 = func_0x00f78ec0(lVar19);
                if (iVar6 == 0) {
                  uVar1 = *(ushort *)(lVar19 + 0x48);
                  if (iVar7 == 0) {
                    lVar19 = *plVar13 + (ulong)uVar1 * 0x10;
                    (**(code **)(lVar19 + 0x138))
                              (plVar13,plVar16,uVar18,*(undefined8 *)(lVar19 + 0x140));
                    goto code_r0x01e6e428;
                  }
                  lVar19 = func_0x00f78a48(lVar19);
                  lVar20 = *plVar13;
                  uVar21 = (ulong)*(ushort *)(lVar20 + 0x12a);
                  if (uVar21 != 0) {
                    piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar22 + -2) == lVar19) {
                        puVar8 = (undefined8 *)
                                 (lVar20 + (long)(int)(*piVar22 + (uint)uVar1) * 0x10 + 0x138);
                        goto code_r0x01e6e5c0;
                      }
                      piVar22 = piVar22 + 4;
                      uVar21 = uVar21 - 1;
                    } while (uVar21 != 0);
                  }
                  puVar8 = (undefined8 *)func_0x00fac1f0(plVar13,lVar19,(ulong)uVar1);
code_r0x01e6e5c0:
                  pcVar26 = (code *)*puVar8;
                  puVar8 = (undefined8 *)puVar8[1];
                }
                else {
                  if (iVar7 == 0) {
                    uVar10 = *(undefined8 *)
                              (*plVar13 + (ulong)*(ushort *)(lVar19 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar20 = *plVar13;
                    uVar21 = (ulong)*(ushort *)(lVar20 + 0x12a);
                    if (uVar21 != 0) {
                      piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar22 + -2) == *(long *)(lVar19 + 0x18)) {
                          lVar20 = lVar20 + (long)(int)(*piVar22 + (uint)*(ushort *)(lVar19 + 0x48))
                                            * 0x10 + 0x138;
                          goto code_r0x01e6e598;
                        }
                        piVar22 = piVar22 + 4;
                        uVar21 = uVar21 - 1;
                      } while (uVar21 != 0);
                    }
                    lVar20 = func_0x00fac1f0(plVar13);
code_r0x01e6e598:
                    uVar10 = *(undefined8 *)(lVar20 + 8);
                  }
                  puVar8 = (undefined8 *)func_0x00f78acc(uVar10,lVar19);
                  pcVar26 = (code *)*puVar8;
                }
                (*pcVar26)(plVar13,plVar16,uVar18,puVar8);
              }
            }
            else {
              if ((*(short *)(lVar19 + 0x48) == -1) || (*(long *)(lVar17 + 0x18) == 0))
              goto code_r0x01e6e418;
              iVar6 = func_0x00f78a44(lVar19);
              iVar7 = func_0x00f78ec0(lVar19);
              if (iVar6 == 0) {
                uVar1 = *(ushort *)(lVar19 + 0x48);
                if (iVar7 == 0) {
                  lVar19 = *plVar16 + (ulong)uVar1 * 0x10;
                  (**(code **)(lVar19 + 0x138))(plVar16,uVar18,*(undefined8 *)(lVar19 + 0x140));
                  goto code_r0x01e6e428;
                }
                lVar19 = func_0x00f78a48(lVar19);
                lVar20 = *plVar16;
                uVar21 = (ulong)*(ushort *)(lVar20 + 0x12a);
                if (uVar21 != 0) {
                  piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar22 + -2) == lVar19) {
                      puVar8 = (undefined8 *)
                               (lVar20 + (long)(int)(*piVar22 + (uint)uVar1) * 0x10 + 0x138);
                      goto code_r0x01e6e554;
                    }
                    piVar22 = piVar22 + 4;
                    uVar21 = uVar21 - 1;
                  } while (uVar21 != 0);
                }
                puVar8 = (undefined8 *)func_0x00fac1f0(plVar16,lVar19,(ulong)uVar1);
code_r0x01e6e554:
                pcVar26 = (code *)*puVar8;
                puVar8 = (undefined8 *)puVar8[1];
              }
              else {
                if (iVar7 == 0) {
                  uVar10 = *(undefined8 *)
                            (*plVar16 + (ulong)*(ushort *)(lVar19 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar20 = *plVar16;
                  uVar21 = (ulong)*(ushort *)(lVar20 + 0x12a);
                  if (uVar21 != 0) {
                    piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar22 + -2) == *(long *)(lVar19 + 0x18)) {
                        lVar20 = lVar20 + (long)(int)(*piVar22 + (uint)*(ushort *)(lVar19 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01e6e52c;
                      }
                      piVar22 = piVar22 + 4;
                      uVar21 = uVar21 - 1;
                    } while (uVar21 != 0);
                  }
                  lVar20 = func_0x00fac1f0(plVar16);
code_r0x01e6e52c:
                  uVar10 = *(undefined8 *)(lVar20 + 8);
                }
                puVar8 = (undefined8 *)func_0x00f78acc(uVar10,lVar19);
                pcVar26 = (code *)*puVar8;
              }
              (*pcVar26)(plVar16,uVar18,puVar8);
            }
          }
          else {
            if (bVar5) goto code_r0x01e6e418;
code_r0x01e6e30c:
            (*pcVar26)(plVar13,plVar16,uVar18,lVar19);
          }
code_r0x01e6e428:
          lVar9 = lVar9 + 1;
          if (lVar9 == lVar27) {
            return;
          }
        } while( true );
      }
      goto code_r0x02f8a1d8;
    }
    if (iVar6 != 0) {
      return;
    }
    if ((char)plVar16[10] == '\0') {
      return;
    }
    puVar28 = *(undefined1 **)(puVar3 + -0x10);
    puVar30 = *(undefined **)(puVar3 + -8);
    uVar12 = *(undefined8 *)(puVar3 + -0x20);
    puVar4 = puVar3;
    plVar13 = plVar16;
    plVar16 = *(long **)(puVar3 + -0x18);
  }
  *(undefined8 *)(puVar4 + -0x20) = uVar12;
  *(long **)(puVar4 + -0x18) = plVar16;
  *(undefined1 **)(puVar4 + -0x10) = puVar28;
  *(undefined **)(puVar4 + -8) = puVar30;
  if ((bRam0000000003ebc671 & 1) == 0) {
    func_0x00f78a20(0x3d2a560);
    bRam0000000003ebc671 = 1;
  }
  *(undefined4 *)((long)plVar13 + 0x4c) = 1;
  plVar16 = (long *)plVar13[5];
  if (plVar16 == (long *)0x0) {
    puVar30 = &Core_UI2_UIScreenBehaviour__PlayStateAnimationEnter;
    plVar16 = (long *)func_0x00f78af4();
  }
  else {
    puVar30 = &UNK_02f8a220;
  }
  *(undefined8 *)(puVar4 + -0x60) = unaff_d9;
  *(ulong *)(puVar4 + -0x58) = unaff_d8;
  *(undefined8 *)(puVar4 + -0x50) = 0x3d2a558;
  *(long *)(puVar4 + -0x48) = lVar9;
  *(undefined8 *)(puVar4 + -0x40) = 0x3ebc000;
  *(long **)(puVar4 + -0x38) = plVar13;
  *(undefined1 **)(puVar4 + -0x30) = puVar4 + -0x10;
  *(undefined **)(puVar4 + -0x28) = puVar30;
  if ((bRam0000000003ebc678 & 1) == 0) {
    func_0x00f78a20(0x3d255d8);
    func_0x00f78a20(0x3d25600);
    func_0x00f78a20(0x3d78e90);
    bRam0000000003ebc678 = 1;
  }
  iVar6 = /*Core.UI2.UIScreenBehaviour$$HasValidAnimator*/ func_0x02f8a8e0(plVar16);
  if (iVar6 == 0) goto code_r0x02f8a348;
  lVar17 = plVar16[3];
  if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar17 != 0) {
    iVar6 = /*UnityEngine.Animator$$HasState*/ func_0x03211cd4(lVar17,0,**(undefined4 **)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xb8),0);
    if (iVar6 == 0) {
code_r0x02f8a348:
      iVar6 = (**(code **)(*plVar16 + 0x1a8))(plVar16,*(undefined8 *)(*plVar16 + 0x1b0));
      fVar31 = 0.0;
      if (iVar6 != 0) {
        uVar10 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar16,0);
        if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        fVar31 = (float)/*Core.UI2.UITweener$$RunTweenAnimationInGroups*/ func_0x02f8a9a8(/*STR('enter')*/ uRam0000000003d78e90,uVar10,0,0,0);
      }
      fVar32 = (float)/*UnityEngine.Time$$get_time*/ func_0x03272b70(0);
      *(float *)(plVar16 + 7) = fVar31 + fVar32;
      *(undefined1 *)((long)plVar16 + 0x34) = 1;
      return;
    }
    lVar17 = plVar16[3];
    if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar17 != 0) {
      /*UnityEngine.Animator$$Play*/ func_0x03210958(0,lVar17,**(undefined4 **)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xb8),0,0);
      goto code_r0x02f8a348;
    }
  }
  lVar17 = func_0x00f78af4();
  *(undefined8 *)(puVar4 + -0xa0) = unaff_d9;
  *(ulong *)(puVar4 + -0x98) = unaff_d8;
  *(undefined8 *)(puVar4 + -0x90) = 0x3d2a558;
  *(undefined8 *)(puVar4 + -0x88) = 0x3d255d8;
  *(undefined8 *)(puVar4 + -0x80) = 0;
  *(long **)(puVar4 + -0x78) = plVar16;
  *(undefined1 **)(puVar4 + -0x70) = puVar4 + -0x30;
  *(undefined **)(puVar4 + -0x68) = &Core_UI2_UIScreenBehaviour__PlayStateAnimationExit;
  if ((bRam0000000003ebc679 & 1) == 0) {
    func_0x00f78a20(0x3d255d8);
    func_0x00f78a20(0x3d25600);
    func_0x00f78a20(0x3d791b0);
    bRam0000000003ebc679 = 1;
  }
  iVar6 = /*Core.UI2.UIScreenBehaviour$$HasValidAnimator*/ func_0x02f8a8e0(lVar17);
  if (iVar6 != 0) {
    lVar9 = *(long *)(lVar17 + 0x18);
    if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar9 == 0) {
code_r0x02f8a540:
      plVar13 = (long *)func_0x00f78af4();
      *(undefined8 *)(puVar4 + -0xc0) = 0;
      *(long *)(puVar4 + -0xb8) = lVar17;
      *(undefined1 **)(puVar4 + -0xb0) = puVar4 + -0x70;
      *(undefined **)(puVar4 + -0xa8) = &Core_UI2_UIScreen__InActive;
      *(undefined4 *)((long)plVar13 + 0x4c) = 4;
      Core_Input_InputManager__UnregisterListener(plVar13,0);
                    /* WARNING: Could not recover jumptable at 0x02f8a57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar13 + 0x228))(plVar13,*(undefined8 *)(*plVar13 + 0x230));
      return;
    }
    iVar6 = /*UnityEngine.Animator$$HasState*/ func_0x03211cd4(lVar9,0,*(undefined4 *)(*(long *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xb8) + 4),0);
    if (iVar6 != 0) {
      lVar9 = *(long *)(lVar17 + 0x18);
      if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar9 == 0) goto code_r0x02f8a540;
      /*UnityEngine.Animator$$Play*/ func_0x03210958(0,lVar9,*(undefined4 *)(*(long *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xb8) + 4),0,0);
    }
  }
  uVar10 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar17,0);
  if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  fVar31 = (float)/*Core.UI2.UITweener$$RunTweenAnimationInGroups*/ func_0x02f8a9a8(/*STR('exit')*/ uRam0000000003d791b0,uVar10,1,0,0);
  fVar32 = (float)/*UnityEngine.Time$$get_time*/ func_0x03272b70(0);
  *(float *)(lVar17 + 0x38) = fVar31 + fVar32;
  return;
}



// ============================================================
// RVA: 0x2f88fb0 | Core.UI2.UIScreen.StartBeforeEnter
// ============================================================

/* WARNING: Possible PIC construction at 0x02f8a21c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8a244: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f890a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f8a248) */
/* WARNING: Removing unreachable block (ram,0x02f8a220) */
/* WARNING: Removing unreachable block (ram,0x02f8a228) */
/* WARNING: Removing unreachable block (ram,0x02f8a240) */
/* WARNING: Removing unreachable block (ram,0x02f890ac) */
/* WARNING: Removing unreachable block (ram,0x02f890c8) */
/* WARNING: Removing unreachable block (ram,0x02f890b8) */

void Core_UI2_UIScreen__StartBeforeEnter(long *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long *unaff_x19;
  undefined8 unaff_x20;
  long lVar7;
  long lVar8;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 **unaff_x29;
  undefined1 *puVar9;
  undefined *unaff_x30;
  undefined *puVar10;
  uint extraout_s0;
  float fVar11;
  float fVar12;
  ulong unaff_d8;
  undefined8 unaff_d9;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  if ((bRam0000000003ebc670 & 1) == 0) {
    func_0x00f78a20(0x3d2a560);
    bRam0000000003ebc670 = 1;
  }
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  Core_Input_InputManager__RegisterListener(param_1,0);
  (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
  uVar3 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
  plVar4 = (long *)param_1[5];
  if (plVar4 == (long *)0x0) {
LAB_02f8908c:
    unaff_x20 = uVar3;
    param_1 = (long *)func_0x00f78af4();
    puStack_30 = &stack0xfffffffffffffff0;
    puStack_28 = &Core_UI2_UIScreen__Update;
    unaff_x29 = &puStack_30;
    unaff_d8 = (ulong)extraout_s0;
    unaff_x30 = &UNK_02f890ac;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
    unaff_x19 = param_1;
  }
  else {
    (**(code **)(*plVar4 + 0x178))(plVar4,0,*(undefined8 *)(*plVar4 + 0x180));
    if ((int)uVar3 == 0) {
      *(undefined1 *)(param_1 + 10) = 1;
    }
    else {
      lVar7 = param_1[5];
      uVar5 = /*Core.UI2.UIScreen$$BeforeEnterCoroutine*/ func_0x02f8a0c0(param_1);
      uVar3 = 0;
      if (lVar7 == 0) goto LAB_02f8908c;
      /*UnityEngine.MonoBehaviour$$StartCoroutine*/ func_0x03247e70(lVar7,uVar5,0);
    }
    if (param_1[2] != 0) {
      /*System.Action<UIScreen, int>$$Invoke*/ func_0x01e6e280(param_1[2],param_1,(int)param_1[9],uRam0000000003d2a560);
    }
  }
  puVar1 = (undefined1 *)((long)register0x00000008 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  puVar9 = (undefined1 *)((long)register0x00000008 + -0x10);
  iVar2 = *(int *)((long)param_1 + 0x4c);
  if (iVar2 == 3) {
    if (param_1[5] != 0) {
      iVar2 = /*Core.UI2.UIScreenBehaviour$$HasStateAnimationFinished*/ func_0x02f8a63c();
      if (iVar2 == 0) {
        return;
      }
      *(undefined4 *)((long)param_1 + 0x4c) = 4;
      Core_Input_InputManager__UnregisterListener(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x02f8a1c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x228))(param_1,*(undefined8 *)(*param_1 + 0x230));
      return;
    }
code_r0x02f8a1d8:
    puVar10 = &Core_UI2_UIScreen__StartEnter;
    plVar4 = (long *)func_0x00f78af4();
  }
  else {
    if (iVar2 == 1) {
      if (param_1[5] != 0) {
        iVar2 = /*Core.UI2.UIScreenBehaviour$$HasStateAnimationFinished*/ func_0x02f8a63c();
        if (iVar2 == 0) {
          return;
        }
        *(undefined8 *)((long)register0x00000008 + -0x20) =
             *(undefined8 *)((long)register0x00000008 + -0x20);
        *(undefined8 *)((long)register0x00000008 + -0x18) =
             *(undefined8 *)((long)register0x00000008 + -0x18);
        *(undefined8 *)((long)register0x00000008 + -0x10) =
             *(undefined8 *)((long)register0x00000008 + -0x10);
        *(undefined8 *)((long)register0x00000008 + -8) =
             *(undefined8 *)((long)register0x00000008 + -8);
        if ((bRam0000000003ebc673 & 1) == 0) {
          func_0x00f78a20(0x3d2a560);
          bRam0000000003ebc673 = 1;
        }
        *(undefined4 *)((long)param_1 + 0x4c) = 2;
        if (param_1[4] != 0) {
          /*System.Action<UIScreen, int>$$Invoke*/ func_0x01e6e280(param_1[4],param_1,(int)param_1[9],uRam0000000003d2a560);
        }
                    /* WARNING: Could not recover jumptable at 0x02f8a7a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x1e8))(param_1,*(undefined8 *)(*param_1 + 0x1f0));
        return;
      }
      goto code_r0x02f8a1d8;
    }
    if ((iVar2 != 0) || ((char)param_1[10] == '\0')) {
      return;
    }
    puVar9 = *(undefined1 **)((long)register0x00000008 + -0x10);
    puVar10 = *(undefined **)((long)register0x00000008 + -8);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x20);
    puVar1 = (undefined1 *)register0x00000008;
    plVar4 = param_1;
    param_1 = *(long **)((long)register0x00000008 + -0x18);
  }
  *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
  *(long **)(puVar1 + -0x18) = param_1;
  *(undefined1 **)(puVar1 + -0x10) = puVar9;
  *(undefined **)(puVar1 + -8) = puVar10;
  if ((bRam0000000003ebc671 & 1) == 0) {
    func_0x00f78a20(0x3d2a560);
    bRam0000000003ebc671 = 1;
  }
  *(undefined4 *)((long)plVar4 + 0x4c) = 1;
  plVar6 = (long *)plVar4[5];
  if (plVar6 == (long *)0x0) {
    puVar10 = &Core_UI2_UIScreenBehaviour__PlayStateAnimationEnter;
    plVar6 = (long *)func_0x00f78af4();
  }
  else {
    puVar10 = &UNK_02f8a220;
  }
  *(undefined8 *)(puVar1 + -0x60) = unaff_d9;
  *(ulong *)(puVar1 + -0x58) = unaff_d8;
  *(undefined8 *)(puVar1 + -0x50) = unaff_x22;
  *(undefined8 *)(puVar1 + -0x48) = unaff_x21;
  *(undefined8 *)(puVar1 + -0x40) = 0x3ebc000;
  *(long **)(puVar1 + -0x38) = plVar4;
  *(undefined1 **)(puVar1 + -0x30) = puVar1 + -0x10;
  *(undefined **)(puVar1 + -0x28) = puVar10;
  if ((bRam0000000003ebc678 & 1) == 0) {
    func_0x00f78a20(0x3d255d8);
    func_0x00f78a20(0x3d25600);
    func_0x00f78a20(0x3d78e90);
    bRam0000000003ebc678 = 1;
  }
  iVar2 = /*Core.UI2.UIScreenBehaviour$$HasValidAnimator*/ func_0x02f8a8e0(plVar6);
  if (iVar2 == 0) goto code_r0x02f8a348;
  lVar7 = plVar6[3];
  if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar7 != 0) {
    iVar2 = /*UnityEngine.Animator$$HasState*/ func_0x03211cd4(lVar7,0,**(undefined4 **)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xb8),0);
    if (iVar2 == 0) {
code_r0x02f8a348:
      iVar2 = (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
      fVar11 = 0.0;
      if (iVar2 != 0) {
        uVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar6,0);
        if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        fVar11 = (float)/*Core.UI2.UITweener$$RunTweenAnimationInGroups*/ func_0x02f8a9a8(/*STR('enter')*/ uRam0000000003d78e90,uVar3,0,0,0);
      }
      fVar12 = (float)/*UnityEngine.Time$$get_time*/ func_0x03272b70(0);
      *(float *)(plVar6 + 7) = fVar11 + fVar12;
      *(undefined1 *)((long)plVar6 + 0x34) = 1;
      return;
    }
    lVar7 = plVar6[3];
    if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar7 != 0) {
      /*UnityEngine.Animator$$Play*/ func_0x03210958(0,lVar7,**(undefined4 **)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xb8),0,0);
      goto code_r0x02f8a348;
    }
  }
  lVar7 = func_0x00f78af4();
  *(undefined8 *)(puVar1 + -0xa0) = unaff_d9;
  *(ulong *)(puVar1 + -0x98) = unaff_d8;
  *(undefined8 *)(puVar1 + -0x90) = unaff_x22;
  *(undefined8 *)(puVar1 + -0x88) = 0x3d255d8;
  *(undefined8 *)(puVar1 + -0x80) = 0;
  *(long **)(puVar1 + -0x78) = plVar6;
  *(undefined1 **)(puVar1 + -0x70) = puVar1 + -0x30;
  *(undefined **)(puVar1 + -0x68) = &Core_UI2_UIScreenBehaviour__PlayStateAnimationExit;
  if ((bRam0000000003ebc679 & 1) == 0) {
    func_0x00f78a20(0x3d255d8);
    func_0x00f78a20(0x3d25600);
    func_0x00f78a20(0x3d791b0);
    bRam0000000003ebc679 = 1;
  }
  iVar2 = /*Core.UI2.UIScreenBehaviour$$HasValidAnimator*/ func_0x02f8a8e0(lVar7);
  if (iVar2 != 0) {
    lVar8 = *(long *)(lVar7 + 0x18);
    if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar8 == 0) {
code_r0x02f8a540:
      plVar4 = (long *)func_0x00f78af4();
      *(undefined8 *)(puVar1 + -0xc0) = 0;
      *(long *)(puVar1 + -0xb8) = lVar7;
      *(undefined1 **)(puVar1 + -0xb0) = puVar1 + -0x70;
      *(undefined **)(puVar1 + -0xa8) = &Core_UI2_UIScreen__InActive;
      *(undefined4 *)((long)plVar4 + 0x4c) = 4;
      Core_Input_InputManager__UnregisterListener(plVar4,0);
                    /* WARNING: Could not recover jumptable at 0x02f8a57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x228))(plVar4,*(undefined8 *)(*plVar4 + 0x230));
      return;
    }
    iVar2 = /*UnityEngine.Animator$$HasState*/ func_0x03211cd4(lVar8,0,*(undefined4 *)(*(long *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xb8) + 4),0);
    if (iVar2 != 0) {
      lVar8 = *(long *)(lVar7 + 0x18);
      if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar8 == 0) goto code_r0x02f8a540;
      /*UnityEngine.Animator$$Play*/ func_0x03210958(0,lVar8,*(undefined4 *)(*(long *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xb8) + 4),0,0);
    }
  }
  uVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar7,0);
  if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  fVar11 = (float)/*Core.UI2.UITweener$$RunTweenAnimationInGroups*/ func_0x02f8a9a8(/*STR('exit')*/ uRam0000000003d791b0,uVar3,1,0,0);
  fVar12 = (float)/*UnityEngine.Time$$get_time*/ func_0x03272b70(0);
  *(float *)(lVar7 + 0x38) = fVar11 + fVar12;
  return;
}



// ============================================================
// RVA: 0x2f89090 | Core.UI2.UIScreen.Update
// ============================================================

void Core_UI2_UIScreen__Update(undefined4 param_1,long *param_2)

{
  /*Core.UI2.UIScreen$$UpdateState*/ func_0x02f8a12c();
  if (*(int *)((long)param_2 + 0x4c) == 4) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02f890e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x1f8))(param_1,param_2,*(undefined8 *)(*param_2 + 0x200));
  return;
}



// ============================================================
// RVA: 0x2f890e8 | Core.UI2.UIScreen.LateUpdate
// ============================================================

void Core_UI2_UIScreen__LateUpdate(long *param_1)

{
  if (*(int *)((long)param_1 + 0x4c) == 4) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02f89104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x208))(param_1,*(undefined8 *)(*param_1 + 0x210));
  return;
}



// ============================================================
// RVA: 0x2f893c0 | Core.UI2.UIScreen.AssignBehaviour
// ============================================================

void Core_UI2_UIScreen__AssignBehaviour(long *param_1,long param_2)

{
  param_1[5] = param_2;
  *(undefined4 *)((long)param_1 + 0x4c) = 4;
                    /* WARNING: Could not recover jumptable at 0x02f893d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
  return;
}



// ============================================================
// RVA: 0x2f89504 | Core.UI2.UIScreen.RemoveBehaviour
// ============================================================

void Core_UI2_UIScreen__RemoveBehaviour(long *param_1)

{
  (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
  param_1[5] = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = 4;
  return;
}



// ============================================================
// RVA: 0x2f8953c | Core.UI2.UIScreen.RemoveParameters
// ============================================================

void Core_UI2_UIScreen__RemoveParameters(long param_1)

{
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}



// ============================================================
// RVA: 0x2f89610 | Core.UI2.UIScreen.AfterInstantiated
// ============================================================

void Core_UI2_UIScreen__AfterInstantiated(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x02f89618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
  return;
}



// ============================================================
// RVA: 0x2f8961c | Core.UI2.UIScreen.BeforeDestroyed
// ============================================================

void Core_UI2_UIScreen__BeforeDestroyed(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x02f89628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
  return;
}



// ============================================================
// RVA: 0x2f8962c | Core.UI2.UIScreen.DeInit
// ============================================================

void Core_UI2_UIScreen__DeInit(long param_1)

{
  *(undefined8 *)(param_1 + 0x58) = 0;
  return;
}



// ============================================================
// RVA: 0x2f899e0 | Core.UI2.UIScreen.add_ScreenEnterStarted
// ============================================================

void Core_UI2_UIScreen__add_ScreenEnterStarted(long param_1,undefined8 param_2)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  code *pcVar17;
  long lVar18;
  undefined1 auVar19 [16];
  long lStack_188;
  
  if ((bRam0000000003ebc66b & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc66b = 1;
  }
  lVar11 = *(long *)(param_1 + 0x18);
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,param_2,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
    lVar9 = func_0x00ff0f44((long *)(param_1 + 0x18),plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar8);
  if ((bRam0000000003ebc669 & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc669 = 1;
  }
  plVar8 = (long *)(auVar19._0_8_ + 0x10);
  lVar11 = *plVar8;
  while ((plVar10 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,auVar19._8_8_,0), plVar10 == (long *)0x0 ||
         (*plVar10 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
    lVar9 = func_0x00ff0f44(plVar8,plVar10,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar10);
  if ((bRam0000000003ebc66d & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc66d = 1;
  }
  plVar8 = (long *)(auVar19._0_8_ + 0x20);
  lVar11 = *plVar8;
  while ((plVar10 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,auVar19._8_8_,0), plVar10 == (long *)0x0 ||
         (*plVar10 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
    lVar9 = func_0x00ff0f44(plVar8,plVar10,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar10);
  if ((bRam0000000003ebc66c & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc66c = 1;
  }
  plVar8 = (long *)(auVar19._0_8_ + 0x18);
  lVar11 = *plVar8;
  while ((plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,auVar19._8_8_,0), plVar10 == (long *)0x0 ||
         (*plVar10 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
    lVar9 = func_0x00ff0f44(plVar8,plVar10,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar10);
  if ((bRam0000000003ebc66a & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc66a = 1;
  }
  plVar8 = (long *)(auVar19._0_8_ + 0x10);
  lVar11 = *plVar8;
  while ((plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,auVar19._8_8_,0), plVar10 == (long *)0x0 ||
         (*plVar10 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
    lVar9 = func_0x00ff0f44(plVar8,plVar10,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar10);
  if ((bRam0000000003ebc66e & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc66e = 1;
  }
  plVar8 = (long *)(auVar19._0_8_ + 0x20);
  lVar11 = *plVar8;
  while( true ) {
    uVar12 = 0;
    plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,auVar19._8_8_,0);
    if ((plVar10 != (long *)0x0) && (*plVar10 != /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8)) break;
    lVar9 = func_0x00ff0f44(plVar8,plVar10,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar10);
  plVar8 = auVar19._8_8_;
  if ((bRam0000000003ebc664 & 1) == 0) {
    func_0x00f78a20(0x3d2a560);
    bRam0000000003ebc664 = 1;
  }
  lVar11 = *(long *)(auVar19._0_8_ + 0x10);
  if (lVar11 == 0) {
    return;
  }
  lStack_188 = lVar11;
  lVar9 = *(long *)(lVar11 + 0x68);
  if (lVar9 == 0) {
    plVar10 = &lStack_188;
    lVar18 = 1;
  }
  else {
    lVar18 = *(long *)(lVar9 + 0x18);
    if (lVar18 == 0) {
      return;
    }
    plVar10 = (long *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar13 = plVar10[lVar9];
    pcVar17 = *(code **)(lVar13 + 0x10);
    plVar1 = *(long **)(lVar13 + 0x20);
    lVar13 = *(long *)(lVar13 + 0x28);
    if (*(short *)(lVar13 + 0x48) == -1) {
      func_0x00f78ad8(lVar13);
    }
    iVar4 = func_0x00f78a4c(lVar13);
    bVar3 = *(char *)(lVar13 + 0x4a) == '\x02';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x01e6e418:
          (*pcVar17)(plVar8,uVar12,lVar13);
        }
        else {
          if (((*(short *)(lVar13 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar11 + 0x18) == 0)) goto code_r0x01e6e30c;
          iVar4 = func_0x00f78a44(lVar13);
          iVar5 = func_0x00f78ec0(lVar13);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar13 + 0x48);
            if (iVar5 == 0) {
              lVar13 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar13 + 0x138))(plVar1,plVar8,uVar12,*(undefined8 *)(lVar13 + 0x140));
              goto code_r0x01e6e428;
            }
            lVar13 = func_0x00f78a48(lVar13);
            lVar14 = *plVar1;
            uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == lVar13) {
                  puVar7 = (undefined8 *)
                           (lVar14 + (long)(int)(*piVar16 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x01e6e5c0;
                }
                piVar16 = piVar16 + 4;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar13,(ulong)uVar2);
code_r0x01e6e5c0:
            pcVar17 = (code *)*puVar7;
            puVar7 = (undefined8 *)puVar7[1];
          }
          else {
            if (iVar5 == 0) {
              uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar13 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar14 = *plVar1;
              uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)(lVar13 + 0x18)) {
                    lVar14 = lVar14 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar13 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01e6e598;
                  }
                  piVar16 = piVar16 + 4;
                  uVar15 = uVar15 - 1;
                } while (uVar15 != 0);
              }
              lVar14 = func_0x00fac1f0(plVar1);
code_r0x01e6e598:
              uVar6 = *(undefined8 *)(lVar14 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar13);
            pcVar17 = (code *)*puVar7;
          }
          (*pcVar17)(plVar1,plVar8,uVar12,puVar7);
        }
      }
      else {
        if ((*(short *)(lVar13 + 0x48) == -1) || (*(long *)(lVar11 + 0x18) == 0))
        goto code_r0x01e6e418;
        iVar4 = func_0x00f78a44(lVar13);
        iVar5 = func_0x00f78ec0(lVar13);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar13 + 0x48);
          if (iVar5 == 0) {
            lVar13 = *plVar8 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar13 + 0x138))(plVar8,uVar12,*(undefined8 *)(lVar13 + 0x140));
            goto code_r0x01e6e428;
          }
          lVar13 = func_0x00f78a48(lVar13);
          lVar14 = *plVar8;
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == lVar13) {
                puVar7 = (undefined8 *)(lVar14 + (long)(int)(*piVar16 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x01e6e554;
              }
              piVar16 = piVar16 + 4;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,lVar13,(ulong)uVar2);
code_r0x01e6e554:
          pcVar17 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar5 == 0) {
            uVar6 = *(undefined8 *)(*plVar8 + (ulong)*(ushort *)(lVar13 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar14 = *plVar8;
            uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)(lVar13 + 0x18)) {
                  lVar14 = lVar14 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar13 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01e6e52c;
                }
                piVar16 = piVar16 + 4;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            lVar14 = func_0x00fac1f0(plVar8);
code_r0x01e6e52c:
            uVar6 = *(undefined8 *)(lVar14 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar13);
          pcVar17 = (code *)*puVar7;
        }
        (*pcVar17)(plVar8,uVar12,puVar7);
      }
    }
    else {
      if (bVar3) goto code_r0x01e6e418;
code_r0x01e6e30c:
      (*pcVar17)(plVar1,plVar8,uVar12,lVar13);
    }
code_r0x01e6e428:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar18) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x2f89a80 | Core.UI2.UIScreen.add_ScreenEnterStartBefore
// ============================================================

void Core_UI2_UIScreen__add_ScreenEnterStartBefore(long param_1,undefined8 param_2)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  code *pcVar17;
  long lVar18;
  undefined1 auVar19 [16];
  long lStack_158;
  
  if ((bRam0000000003ebc669 & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc669 = 1;
  }
  lVar11 = *(long *)(param_1 + 0x10);
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,param_2,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
    lVar9 = func_0x00ff0f44((long *)(param_1 + 0x10),plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar8);
  if ((bRam0000000003ebc66d & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc66d = 1;
  }
  plVar8 = (long *)(auVar19._0_8_ + 0x20);
  lVar11 = *plVar8;
  while ((plVar10 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,auVar19._8_8_,0), plVar10 == (long *)0x0 ||
         (*plVar10 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
    lVar9 = func_0x00ff0f44(plVar8,plVar10,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar10);
  if ((bRam0000000003ebc66c & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc66c = 1;
  }
  plVar8 = (long *)(auVar19._0_8_ + 0x18);
  lVar11 = *plVar8;
  while ((plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,auVar19._8_8_,0), plVar10 == (long *)0x0 ||
         (*plVar10 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
    lVar9 = func_0x00ff0f44(plVar8,plVar10,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar10);
  if ((bRam0000000003ebc66a & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc66a = 1;
  }
  plVar8 = (long *)(auVar19._0_8_ + 0x10);
  lVar11 = *plVar8;
  while ((plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,auVar19._8_8_,0), plVar10 == (long *)0x0 ||
         (*plVar10 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
    lVar9 = func_0x00ff0f44(plVar8,plVar10,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar10);
  if ((bRam0000000003ebc66e & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc66e = 1;
  }
  plVar8 = (long *)(auVar19._0_8_ + 0x20);
  lVar11 = *plVar8;
  while( true ) {
    uVar12 = 0;
    plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,auVar19._8_8_,0);
    if ((plVar10 != (long *)0x0) && (*plVar10 != /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8)) break;
    lVar9 = func_0x00ff0f44(plVar8,plVar10,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar10);
  plVar8 = auVar19._8_8_;
  if ((bRam0000000003ebc664 & 1) == 0) {
    func_0x00f78a20(0x3d2a560);
    bRam0000000003ebc664 = 1;
  }
  lVar11 = *(long *)(auVar19._0_8_ + 0x10);
  if (lVar11 == 0) {
    return;
  }
  lStack_158 = lVar11;
  lVar9 = *(long *)(lVar11 + 0x68);
  if (lVar9 == 0) {
    plVar10 = &lStack_158;
    lVar18 = 1;
  }
  else {
    lVar18 = *(long *)(lVar9 + 0x18);
    if (lVar18 == 0) {
      return;
    }
    plVar10 = (long *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar13 = plVar10[lVar9];
    pcVar17 = *(code **)(lVar13 + 0x10);
    plVar1 = *(long **)(lVar13 + 0x20);
    lVar13 = *(long *)(lVar13 + 0x28);
    if (*(short *)(lVar13 + 0x48) == -1) {
      func_0x00f78ad8(lVar13);
    }
    iVar4 = func_0x00f78a4c(lVar13);
    bVar3 = *(char *)(lVar13 + 0x4a) == '\x02';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x01e6e418:
          (*pcVar17)(plVar8,uVar12,lVar13);
        }
        else {
          if (((*(short *)(lVar13 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar11 + 0x18) == 0)) goto code_r0x01e6e30c;
          iVar4 = func_0x00f78a44(lVar13);
          iVar5 = func_0x00f78ec0(lVar13);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar13 + 0x48);
            if (iVar5 == 0) {
              lVar13 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar13 + 0x138))(plVar1,plVar8,uVar12,*(undefined8 *)(lVar13 + 0x140));
              goto code_r0x01e6e428;
            }
            lVar13 = func_0x00f78a48(lVar13);
            lVar14 = *plVar1;
            uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == lVar13) {
                  puVar7 = (undefined8 *)
                           (lVar14 + (long)(int)(*piVar16 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x01e6e5c0;
                }
                piVar16 = piVar16 + 4;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar13,(ulong)uVar2);
code_r0x01e6e5c0:
            pcVar17 = (code *)*puVar7;
            puVar7 = (undefined8 *)puVar7[1];
          }
          else {
            if (iVar5 == 0) {
              uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar13 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar14 = *plVar1;
              uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)(lVar13 + 0x18)) {
                    lVar14 = lVar14 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar13 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01e6e598;
                  }
                  piVar16 = piVar16 + 4;
                  uVar15 = uVar15 - 1;
                } while (uVar15 != 0);
              }
              lVar14 = func_0x00fac1f0(plVar1);
code_r0x01e6e598:
              uVar6 = *(undefined8 *)(lVar14 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar13);
            pcVar17 = (code *)*puVar7;
          }
          (*pcVar17)(plVar1,plVar8,uVar12,puVar7);
        }
      }
      else {
        if ((*(short *)(lVar13 + 0x48) == -1) || (*(long *)(lVar11 + 0x18) == 0))
        goto code_r0x01e6e418;
        iVar4 = func_0x00f78a44(lVar13);
        iVar5 = func_0x00f78ec0(lVar13);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar13 + 0x48);
          if (iVar5 == 0) {
            lVar13 = *plVar8 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar13 + 0x138))(plVar8,uVar12,*(undefined8 *)(lVar13 + 0x140));
            goto code_r0x01e6e428;
          }
          lVar13 = func_0x00f78a48(lVar13);
          lVar14 = *plVar8;
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == lVar13) {
                puVar7 = (undefined8 *)(lVar14 + (long)(int)(*piVar16 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x01e6e554;
              }
              piVar16 = piVar16 + 4;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,lVar13,(ulong)uVar2);
code_r0x01e6e554:
          pcVar17 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar5 == 0) {
            uVar6 = *(undefined8 *)(*plVar8 + (ulong)*(ushort *)(lVar13 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar14 = *plVar8;
            uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)(lVar13 + 0x18)) {
                  lVar14 = lVar14 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar13 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01e6e52c;
                }
                piVar16 = piVar16 + 4;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            lVar14 = func_0x00fac1f0(plVar8);
code_r0x01e6e52c:
            uVar6 = *(undefined8 *)(lVar14 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar13);
          pcVar17 = (code *)*puVar7;
        }
        (*pcVar17)(plVar8,uVar12,puVar7);
      }
    }
    else {
      if (bVar3) goto code_r0x01e6e418;
code_r0x01e6e30c:
      (*pcVar17)(plVar1,plVar8,uVar12,lVar13);
    }
code_r0x01e6e428:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar18) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x2f89b20 | Core.UI2.UIScreen.add_ScreenEnterFinished
// ============================================================

void Core_UI2_UIScreen__add_ScreenEnterFinished(long param_1,undefined8 param_2)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  code *pcVar17;
  long lVar18;
  undefined1 auVar19 [16];
  long lStack_128;
  
  if ((bRam0000000003ebc66d & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc66d = 1;
  }
  lVar11 = *(long *)(param_1 + 0x20);
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,param_2,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
    lVar9 = func_0x00ff0f44((long *)(param_1 + 0x20),plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar8);
  if ((bRam0000000003ebc66c & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc66c = 1;
  }
  plVar8 = (long *)(auVar19._0_8_ + 0x18);
  lVar11 = *plVar8;
  while ((plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,auVar19._8_8_,0), plVar10 == (long *)0x0 ||
         (*plVar10 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
    lVar9 = func_0x00ff0f44(plVar8,plVar10,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar10);
  if ((bRam0000000003ebc66a & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc66a = 1;
  }
  plVar8 = (long *)(auVar19._0_8_ + 0x10);
  lVar11 = *plVar8;
  while ((plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,auVar19._8_8_,0), plVar10 == (long *)0x0 ||
         (*plVar10 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
    lVar9 = func_0x00ff0f44(plVar8,plVar10,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar10);
  if ((bRam0000000003ebc66e & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc66e = 1;
  }
  plVar8 = (long *)(auVar19._0_8_ + 0x20);
  lVar11 = *plVar8;
  while( true ) {
    uVar12 = 0;
    plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,auVar19._8_8_,0);
    if ((plVar10 != (long *)0x0) && (*plVar10 != /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8)) break;
    lVar9 = func_0x00ff0f44(plVar8,plVar10,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar10);
  plVar8 = auVar19._8_8_;
  if ((bRam0000000003ebc664 & 1) == 0) {
    func_0x00f78a20(0x3d2a560);
    bRam0000000003ebc664 = 1;
  }
  lVar11 = *(long *)(auVar19._0_8_ + 0x10);
  if (lVar11 == 0) {
    return;
  }
  lStack_128 = lVar11;
  lVar9 = *(long *)(lVar11 + 0x68);
  if (lVar9 == 0) {
    plVar10 = &lStack_128;
    lVar18 = 1;
  }
  else {
    lVar18 = *(long *)(lVar9 + 0x18);
    if (lVar18 == 0) {
      return;
    }
    plVar10 = (long *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar13 = plVar10[lVar9];
    pcVar17 = *(code **)(lVar13 + 0x10);
    plVar1 = *(long **)(lVar13 + 0x20);
    lVar13 = *(long *)(lVar13 + 0x28);
    if (*(short *)(lVar13 + 0x48) == -1) {
      func_0x00f78ad8(lVar13);
    }
    iVar4 = func_0x00f78a4c(lVar13);
    bVar3 = *(char *)(lVar13 + 0x4a) == '\x02';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x01e6e418:
          (*pcVar17)(plVar8,uVar12,lVar13);
        }
        else {
          if (((*(short *)(lVar13 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar11 + 0x18) == 0)) goto code_r0x01e6e30c;
          iVar4 = func_0x00f78a44(lVar13);
          iVar5 = func_0x00f78ec0(lVar13);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar13 + 0x48);
            if (iVar5 == 0) {
              lVar13 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar13 + 0x138))(plVar1,plVar8,uVar12,*(undefined8 *)(lVar13 + 0x140));
              goto code_r0x01e6e428;
            }
            lVar13 = func_0x00f78a48(lVar13);
            lVar14 = *plVar1;
            uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == lVar13) {
                  puVar7 = (undefined8 *)
                           (lVar14 + (long)(int)(*piVar16 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x01e6e5c0;
                }
                piVar16 = piVar16 + 4;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar13,(ulong)uVar2);
code_r0x01e6e5c0:
            pcVar17 = (code *)*puVar7;
            puVar7 = (undefined8 *)puVar7[1];
          }
          else {
            if (iVar5 == 0) {
              uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar13 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar14 = *plVar1;
              uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)(lVar13 + 0x18)) {
                    lVar14 = lVar14 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar13 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01e6e598;
                  }
                  piVar16 = piVar16 + 4;
                  uVar15 = uVar15 - 1;
                } while (uVar15 != 0);
              }
              lVar14 = func_0x00fac1f0(plVar1);
code_r0x01e6e598:
              uVar6 = *(undefined8 *)(lVar14 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar13);
            pcVar17 = (code *)*puVar7;
          }
          (*pcVar17)(plVar1,plVar8,uVar12,puVar7);
        }
      }
      else {
        if ((*(short *)(lVar13 + 0x48) == -1) || (*(long *)(lVar11 + 0x18) == 0))
        goto code_r0x01e6e418;
        iVar4 = func_0x00f78a44(lVar13);
        iVar5 = func_0x00f78ec0(lVar13);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar13 + 0x48);
          if (iVar5 == 0) {
            lVar13 = *plVar8 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar13 + 0x138))(plVar8,uVar12,*(undefined8 *)(lVar13 + 0x140));
            goto code_r0x01e6e428;
          }
          lVar13 = func_0x00f78a48(lVar13);
          lVar14 = *plVar8;
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == lVar13) {
                puVar7 = (undefined8 *)(lVar14 + (long)(int)(*piVar16 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x01e6e554;
              }
              piVar16 = piVar16 + 4;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,lVar13,(ulong)uVar2);
code_r0x01e6e554:
          pcVar17 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar5 == 0) {
            uVar6 = *(undefined8 *)(*plVar8 + (ulong)*(ushort *)(lVar13 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar14 = *plVar8;
            uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)(lVar13 + 0x18)) {
                  lVar14 = lVar14 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar13 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01e6e52c;
                }
                piVar16 = piVar16 + 4;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            lVar14 = func_0x00fac1f0(plVar8);
code_r0x01e6e52c:
            uVar6 = *(undefined8 *)(lVar14 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar13);
          pcVar17 = (code *)*puVar7;
        }
        (*pcVar17)(plVar8,uVar12,puVar7);
      }
    }
    else {
      if (bVar3) goto code_r0x01e6e418;
code_r0x01e6e30c:
      (*pcVar17)(plVar1,plVar8,uVar12,lVar13);
    }
code_r0x01e6e428:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar18) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x2f89bc0 | Core.UI2.UIScreen.remove_ScreenEnterStarted
// ============================================================

void Core_UI2_UIScreen__remove_ScreenEnterStarted(long param_1,undefined8 param_2)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  code *pcVar17;
  long lVar18;
  undefined1 auVar19 [16];
  long lStack_f8;
  
  if ((bRam0000000003ebc66c & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc66c = 1;
  }
  lVar11 = *(long *)(param_1 + 0x18);
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,param_2,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
    lVar9 = func_0x00ff0f44((long *)(param_1 + 0x18),plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar8);
  if ((bRam0000000003ebc66a & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc66a = 1;
  }
  plVar8 = (long *)(auVar19._0_8_ + 0x10);
  lVar11 = *plVar8;
  while ((plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,auVar19._8_8_,0), plVar10 == (long *)0x0 ||
         (*plVar10 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
    lVar9 = func_0x00ff0f44(plVar8,plVar10,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar10);
  if ((bRam0000000003ebc66e & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc66e = 1;
  }
  plVar8 = (long *)(auVar19._0_8_ + 0x20);
  lVar11 = *plVar8;
  while( true ) {
    uVar12 = 0;
    plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,auVar19._8_8_,0);
    if ((plVar10 != (long *)0x0) && (*plVar10 != /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8)) break;
    lVar9 = func_0x00ff0f44(plVar8,plVar10,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar10);
  plVar8 = auVar19._8_8_;
  if ((bRam0000000003ebc664 & 1) == 0) {
    func_0x00f78a20(0x3d2a560);
    bRam0000000003ebc664 = 1;
  }
  lVar11 = *(long *)(auVar19._0_8_ + 0x10);
  if (lVar11 == 0) {
    return;
  }
  lStack_f8 = lVar11;
  lVar9 = *(long *)(lVar11 + 0x68);
  if (lVar9 == 0) {
    plVar10 = &lStack_f8;
    lVar18 = 1;
  }
  else {
    lVar18 = *(long *)(lVar9 + 0x18);
    if (lVar18 == 0) {
      return;
    }
    plVar10 = (long *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar13 = plVar10[lVar9];
    pcVar17 = *(code **)(lVar13 + 0x10);
    plVar1 = *(long **)(lVar13 + 0x20);
    lVar13 = *(long *)(lVar13 + 0x28);
    if (*(short *)(lVar13 + 0x48) == -1) {
      func_0x00f78ad8(lVar13);
    }
    iVar4 = func_0x00f78a4c(lVar13);
    bVar3 = *(char *)(lVar13 + 0x4a) == '\x02';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x01e6e418:
          (*pcVar17)(plVar8,uVar12,lVar13);
        }
        else {
          if (((*(short *)(lVar13 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar11 + 0x18) == 0)) goto code_r0x01e6e30c;
          iVar4 = func_0x00f78a44(lVar13);
          iVar5 = func_0x00f78ec0(lVar13);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar13 + 0x48);
            if (iVar5 == 0) {
              lVar13 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar13 + 0x138))(plVar1,plVar8,uVar12,*(undefined8 *)(lVar13 + 0x140));
              goto code_r0x01e6e428;
            }
            lVar13 = func_0x00f78a48(lVar13);
            lVar14 = *plVar1;
            uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == lVar13) {
                  puVar7 = (undefined8 *)
                           (lVar14 + (long)(int)(*piVar16 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x01e6e5c0;
                }
                piVar16 = piVar16 + 4;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar13,(ulong)uVar2);
code_r0x01e6e5c0:
            pcVar17 = (code *)*puVar7;
            puVar7 = (undefined8 *)puVar7[1];
          }
          else {
            if (iVar5 == 0) {
              uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar13 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar14 = *plVar1;
              uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)(lVar13 + 0x18)) {
                    lVar14 = lVar14 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar13 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01e6e598;
                  }
                  piVar16 = piVar16 + 4;
                  uVar15 = uVar15 - 1;
                } while (uVar15 != 0);
              }
              lVar14 = func_0x00fac1f0(plVar1);
code_r0x01e6e598:
              uVar6 = *(undefined8 *)(lVar14 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar13);
            pcVar17 = (code *)*puVar7;
          }
          (*pcVar17)(plVar1,plVar8,uVar12,puVar7);
        }
      }
      else {
        if ((*(short *)(lVar13 + 0x48) == -1) || (*(long *)(lVar11 + 0x18) == 0))
        goto code_r0x01e6e418;
        iVar4 = func_0x00f78a44(lVar13);
        iVar5 = func_0x00f78ec0(lVar13);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar13 + 0x48);
          if (iVar5 == 0) {
            lVar13 = *plVar8 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar13 + 0x138))(plVar8,uVar12,*(undefined8 *)(lVar13 + 0x140));
            goto code_r0x01e6e428;
          }
          lVar13 = func_0x00f78a48(lVar13);
          lVar14 = *plVar8;
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == lVar13) {
                puVar7 = (undefined8 *)(lVar14 + (long)(int)(*piVar16 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x01e6e554;
              }
              piVar16 = piVar16 + 4;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,lVar13,(ulong)uVar2);
code_r0x01e6e554:
          pcVar17 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar5 == 0) {
            uVar6 = *(undefined8 *)(*plVar8 + (ulong)*(ushort *)(lVar13 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar14 = *plVar8;
            uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)(lVar13 + 0x18)) {
                  lVar14 = lVar14 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar13 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01e6e52c;
                }
                piVar16 = piVar16 + 4;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            lVar14 = func_0x00fac1f0(plVar8);
code_r0x01e6e52c:
            uVar6 = *(undefined8 *)(lVar14 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar13);
          pcVar17 = (code *)*puVar7;
        }
        (*pcVar17)(plVar8,uVar12,puVar7);
      }
    }
    else {
      if (bVar3) goto code_r0x01e6e418;
code_r0x01e6e30c:
      (*pcVar17)(plVar1,plVar8,uVar12,lVar13);
    }
code_r0x01e6e428:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar18) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x2f89c60 | Core.UI2.UIScreen.remove_ScreenEnterStartBefore
// ============================================================

void Core_UI2_UIScreen__remove_ScreenEnterStartBefore(long param_1,undefined8 param_2)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  code *pcVar17;
  long lVar18;
  undefined1 auVar19 [16];
  long lStack_c8;
  
  if ((bRam0000000003ebc66a & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc66a = 1;
  }
  lVar11 = *(long *)(param_1 + 0x10);
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,param_2,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
    lVar9 = func_0x00ff0f44((long *)(param_1 + 0x10),plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar8);
  if ((bRam0000000003ebc66e & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc66e = 1;
  }
  plVar8 = (long *)(auVar19._0_8_ + 0x20);
  lVar11 = *plVar8;
  while( true ) {
    uVar12 = 0;
    plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,auVar19._8_8_,0);
    if ((plVar10 != (long *)0x0) && (*plVar10 != /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8)) break;
    lVar9 = func_0x00ff0f44(plVar8,plVar10,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar10);
  plVar8 = auVar19._8_8_;
  if ((bRam0000000003ebc664 & 1) == 0) {
    func_0x00f78a20(0x3d2a560);
    bRam0000000003ebc664 = 1;
  }
  lVar11 = *(long *)(auVar19._0_8_ + 0x10);
  if (lVar11 == 0) {
    return;
  }
  lStack_c8 = lVar11;
  lVar9 = *(long *)(lVar11 + 0x68);
  if (lVar9 == 0) {
    plVar10 = &lStack_c8;
    lVar18 = 1;
  }
  else {
    lVar18 = *(long *)(lVar9 + 0x18);
    if (lVar18 == 0) {
      return;
    }
    plVar10 = (long *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar13 = plVar10[lVar9];
    pcVar17 = *(code **)(lVar13 + 0x10);
    plVar1 = *(long **)(lVar13 + 0x20);
    lVar13 = *(long *)(lVar13 + 0x28);
    if (*(short *)(lVar13 + 0x48) == -1) {
      func_0x00f78ad8(lVar13);
    }
    iVar4 = func_0x00f78a4c(lVar13);
    bVar3 = *(char *)(lVar13 + 0x4a) == '\x02';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x01e6e418:
          (*pcVar17)(plVar8,uVar12,lVar13);
        }
        else {
          if (((*(short *)(lVar13 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar11 + 0x18) == 0)) goto code_r0x01e6e30c;
          iVar4 = func_0x00f78a44(lVar13);
          iVar5 = func_0x00f78ec0(lVar13);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar13 + 0x48);
            if (iVar5 == 0) {
              lVar13 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar13 + 0x138))(plVar1,plVar8,uVar12,*(undefined8 *)(lVar13 + 0x140));
              goto code_r0x01e6e428;
            }
            lVar13 = func_0x00f78a48(lVar13);
            lVar14 = *plVar1;
            uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == lVar13) {
                  puVar7 = (undefined8 *)
                           (lVar14 + (long)(int)(*piVar16 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x01e6e5c0;
                }
                piVar16 = piVar16 + 4;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar13,(ulong)uVar2);
code_r0x01e6e5c0:
            pcVar17 = (code *)*puVar7;
            puVar7 = (undefined8 *)puVar7[1];
          }
          else {
            if (iVar5 == 0) {
              uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar13 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar14 = *plVar1;
              uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)(lVar13 + 0x18)) {
                    lVar14 = lVar14 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar13 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01e6e598;
                  }
                  piVar16 = piVar16 + 4;
                  uVar15 = uVar15 - 1;
                } while (uVar15 != 0);
              }
              lVar14 = func_0x00fac1f0(plVar1);
code_r0x01e6e598:
              uVar6 = *(undefined8 *)(lVar14 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar13);
            pcVar17 = (code *)*puVar7;
          }
          (*pcVar17)(plVar1,plVar8,uVar12,puVar7);
        }
      }
      else {
        if ((*(short *)(lVar13 + 0x48) == -1) || (*(long *)(lVar11 + 0x18) == 0))
        goto code_r0x01e6e418;
        iVar4 = func_0x00f78a44(lVar13);
        iVar5 = func_0x00f78ec0(lVar13);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar13 + 0x48);
          if (iVar5 == 0) {
            lVar13 = *plVar8 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar13 + 0x138))(plVar8,uVar12,*(undefined8 *)(lVar13 + 0x140));
            goto code_r0x01e6e428;
          }
          lVar13 = func_0x00f78a48(lVar13);
          lVar14 = *plVar8;
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == lVar13) {
                puVar7 = (undefined8 *)(lVar14 + (long)(int)(*piVar16 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x01e6e554;
              }
              piVar16 = piVar16 + 4;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,lVar13,(ulong)uVar2);
code_r0x01e6e554:
          pcVar17 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar5 == 0) {
            uVar6 = *(undefined8 *)(*plVar8 + (ulong)*(ushort *)(lVar13 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar14 = *plVar8;
            uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)(lVar13 + 0x18)) {
                  lVar14 = lVar14 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar13 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01e6e52c;
                }
                piVar16 = piVar16 + 4;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            lVar14 = func_0x00fac1f0(plVar8);
code_r0x01e6e52c:
            uVar6 = *(undefined8 *)(lVar14 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar13);
          pcVar17 = (code *)*puVar7;
        }
        (*pcVar17)(plVar8,uVar12,puVar7);
      }
    }
    else {
      if (bVar3) goto code_r0x01e6e418;
code_r0x01e6e30c:
      (*pcVar17)(plVar1,plVar8,uVar12,lVar13);
    }
code_r0x01e6e428:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar18) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x2f89d00 | Core.UI2.UIScreen.remove_ScreenEnterFinished
// ============================================================

void Core_UI2_UIScreen__remove_ScreenEnterFinished(long param_1,undefined8 param_2)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  code *pcVar16;
  long lVar17;
  long *plVar18;
  undefined1 auVar19 [16];
  long lStack_98;
  
  if ((bRam0000000003ebc66e & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc66e = 1;
  }
  lVar10 = *(long *)(param_1 + 0x20);
  while( true ) {
    uVar11 = 0;
    plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar10,param_2,0);
    if ((plVar8 != (long *)0x0) && (*plVar8 != /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8)) break;
    lVar9 = func_0x00ff0f44((long *)(param_1 + 0x20),plVar8,lVar10);
    bVar3 = lVar10 == lVar9;
    lVar10 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar8);
  plVar8 = auVar19._8_8_;
  if ((bRam0000000003ebc664 & 1) == 0) {
    func_0x00f78a20(0x3d2a560);
    bRam0000000003ebc664 = 1;
  }
  lVar10 = *(long *)(auVar19._0_8_ + 0x10);
  if (lVar10 == 0) {
    return;
  }
  lStack_98 = lVar10;
  lVar9 = *(long *)(lVar10 + 0x68);
  if (lVar9 == 0) {
    plVar18 = &lStack_98;
    lVar17 = 1;
  }
  else {
    lVar17 = *(long *)(lVar9 + 0x18);
    if (lVar17 == 0) {
      return;
    }
    plVar18 = (long *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar12 = plVar18[lVar9];
    pcVar16 = *(code **)(lVar12 + 0x10);
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
code_r0x01e6e418:
          (*pcVar16)(plVar8,uVar11,lVar12);
        }
        else {
          if (((*(short *)(lVar12 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar10 + 0x18) == 0)) goto code_r0x01e6e30c;
          iVar4 = func_0x00f78a44(lVar12);
          iVar5 = func_0x00f78ec0(lVar12);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar12 + 0x48);
            if (iVar5 == 0) {
              lVar12 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar12 + 0x138))(plVar1,plVar8,uVar11,*(undefined8 *)(lVar12 + 0x140));
              goto code_r0x01e6e428;
            }
            lVar12 = func_0x00f78a48(lVar12);
            lVar13 = *plVar1;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == lVar12) {
                  puVar7 = (undefined8 *)
                           (lVar13 + (long)(int)(*piVar15 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x01e6e5c0;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar12,(ulong)uVar2);
code_r0x01e6e5c0:
            pcVar16 = (code *)*puVar7;
            puVar7 = (undefined8 *)puVar7[1];
          }
          else {
            if (iVar5 == 0) {
              uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar13 = *plVar1;
              uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
              if (uVar14 != 0) {
                piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                    lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01e6e598;
                  }
                  piVar15 = piVar15 + 4;
                  uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
              }
              lVar13 = func_0x00fac1f0(plVar1);
code_r0x01e6e598:
              uVar6 = *(undefined8 *)(lVar13 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar12);
            pcVar16 = (code *)*puVar7;
          }
          (*pcVar16)(plVar1,plVar8,uVar11,puVar7);
        }
      }
      else {
        if ((*(short *)(lVar12 + 0x48) == -1) || (*(long *)(lVar10 + 0x18) == 0))
        goto code_r0x01e6e418;
        iVar4 = func_0x00f78a44(lVar12);
        iVar5 = func_0x00f78ec0(lVar12);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar12 + 0x48);
          if (iVar5 == 0) {
            lVar12 = *plVar8 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar12 + 0x138))(plVar8,uVar11,*(undefined8 *)(lVar12 + 0x140));
            goto code_r0x01e6e428;
          }
          lVar12 = func_0x00f78a48(lVar12);
          lVar13 = *plVar8;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar12) {
                puVar7 = (undefined8 *)(lVar13 + (long)(int)(*piVar15 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x01e6e554;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,lVar12,(ulong)uVar2);
code_r0x01e6e554:
          pcVar16 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar5 == 0) {
            uVar6 = *(undefined8 *)(*plVar8 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar13 = *plVar8;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                  lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01e6e52c;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            lVar13 = func_0x00fac1f0(plVar8);
code_r0x01e6e52c:
            uVar6 = *(undefined8 *)(lVar13 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar12);
          pcVar16 = (code *)*puVar7;
        }
        (*pcVar16)(plVar8,uVar11,puVar7);
      }
    }
    else {
      if (bVar3) goto code_r0x01e6e418;
code_r0x01e6e30c:
      (*pcVar16)(plVar1,plVar8,uVar11,lVar12);
    }
code_r0x01e6e428:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar17) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x2f8a098 | Core.UI2.UIScreen.get_ScreenId
// ============================================================

undefined8 Core_UI2_UIScreen__get_ScreenId(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



// ============================================================
// RVA: 0x2f8a0a0 | Core.UI2.UIScreen.get_LayerIndex
// ============================================================

undefined4 Core_UI2_UIScreen__get_LayerIndex(long param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}



// ============================================================
// RVA: 0x2f8a0a8 | Core.UI2.UIScreen.get_CurrentState
// ============================================================

undefined4 Core_UI2_UIScreen__get_CurrentState(long param_1)

{
  return *(undefined4 *)(param_1 + 0x4c);
}



// ============================================================
// RVA: 0x2f8a0b0 | Core.UI2.UIScreen.get_BaseBehaviour
// ============================================================

undefined8 Core_UI2_UIScreen__get_BaseBehaviour(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x2f8a0b8 | Core.UI2.UIScreen.Init
// ============================================================

void Core_UI2_UIScreen__Init(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x58) = param_2;
  return;
}



// ============================================================
// RVA: 0x2f8a0c0 | Core.UI2.UIScreen.BeforeEnterCoroutine
// ============================================================

long Core_UI2_UIScreen__BeforeEnterCoroutine(undefined8 param_1)

{
  long lVar1;
  
  if ((bRam0000000003ebc674 & 1) == 0) {
    func_0x00f78a20(0x3d29488);
    bRam0000000003ebc674 = 1;
  }
  lVar1 = func_0x00f78aec(/*Core.UI2.UIScreen.<BeforeEnterCoroutine>d__57_TypeInfo*/ uRam0000000003d29488);
  /*System.Object$$.ctor*/ func_0x0294d018(lVar1,0);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  return lVar1;
}



// ============================================================
// RVA: 0x2f8a12c | Core.UI2.UIScreen.UpdateState
// ============================================================

/* WARNING: Possible PIC construction at 0x02f8a21c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f8a220) */
/* WARNING: Removing unreachable block (ram,0x02f8a228) */
/* WARNING: Removing unreachable block (ram,0x02f8a240) */

void Core_UI2_UIScreen__UpdateState(long *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  long *unaff_x19;
  undefined8 unaff_x20;
  long lVar6;
  long lVar7;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined *puVar8;
  float fVar9;
  float fVar10;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar2 = *(int *)((long)param_1 + 0x4c);
  if (iVar2 == 3) {
    if (param_1[5] != 0) {
      iVar2 = /*Core.UI2.UIScreenBehaviour$$HasStateAnimationFinished*/ func_0x02f8a63c();
      if (iVar2 == 0) {
        return;
      }
      *(undefined4 *)((long)param_1 + 0x4c) = 4;
      Core_Input_InputManager__UnregisterListener(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x02f8a1c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x228))(param_1,*(undefined8 *)(*param_1 + 0x230));
      return;
    }
code_r0x02f8a1d8:
    unaff_x30 = &Core_UI2_UIScreen__StartEnter;
    plVar5 = (long *)func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x19 = param_1;
    unaff_x29 = puVar1;
  }
  else {
    if (iVar2 == 1) {
      if (param_1[5] != 0) {
        iVar2 = /*Core.UI2.UIScreenBehaviour$$HasStateAnimationFinished*/ func_0x02f8a63c();
        if (iVar2 == 0) {
          return;
        }
        if ((bRam0000000003ebc673 & 1) == 0) {
          func_0x00f78a20(0x3d2a560);
          bRam0000000003ebc673 = 1;
        }
        *(undefined4 *)((long)param_1 + 0x4c) = 2;
        if (param_1[4] != 0) {
          /*System.Action<UIScreen, int>$$Invoke*/ func_0x01e6e280(param_1[4],param_1,(int)param_1[9],uRam0000000003d2a560);
        }
                    /* WARNING: Could not recover jumptable at 0x02f8a7a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x1e8))(param_1,*(undefined8 *)(*param_1 + 0x1f0));
        return;
      }
      goto code_r0x02f8a1d8;
    }
    if ((iVar2 != 0) || (plVar5 = param_1, (char)param_1[10] == '\0')) {
      return;
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if ((bRam0000000003ebc671 & 1) == 0) {
    func_0x00f78a20(0x3d2a560);
    bRam0000000003ebc671 = 1;
  }
  *(undefined4 *)((long)plVar5 + 0x4c) = 1;
  plVar3 = (long *)plVar5[5];
  if (plVar3 == (long *)0x0) {
    puVar8 = &Core_UI2_UIScreenBehaviour__PlayStateAnimationEnter;
    plVar3 = (long *)func_0x00f78af4();
  }
  else {
    puVar8 = &UNK_02f8a220;
  }
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_d8;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x40) = 0x3ebc000;
  *(long **)((long)register0x00000008 + -0x38) = plVar5;
  *(undefined1 **)((long)register0x00000008 + -0x30) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x28) = puVar8;
  if ((bRam0000000003ebc678 & 1) == 0) {
    func_0x00f78a20(0x3d255d8);
    func_0x00f78a20(0x3d25600);
    func_0x00f78a20(0x3d78e90);
    bRam0000000003ebc678 = 1;
  }
  iVar2 = /*Core.UI2.UIScreenBehaviour$$HasValidAnimator*/ func_0x02f8a8e0(plVar3);
  if (iVar2 == 0) goto code_r0x02f8a348;
  lVar6 = plVar3[3];
  if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    iVar2 = /*UnityEngine.Animator$$HasState*/ func_0x03211cd4(lVar6,0,**(undefined4 **)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xb8),0);
    if (iVar2 == 0) {
code_r0x02f8a348:
      iVar2 = (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0));
      fVar9 = 0.0;
      if (iVar2 != 0) {
        uVar4 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar3,0);
        if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        fVar9 = (float)/*Core.UI2.UITweener$$RunTweenAnimationInGroups*/ func_0x02f8a9a8(/*STR('enter')*/ uRam0000000003d78e90,uVar4,0,0,0);
      }
      fVar10 = (float)/*UnityEngine.Time$$get_time*/ func_0x03272b70(0);
      *(float *)(plVar3 + 7) = fVar9 + fVar10;
      *(undefined1 *)((long)plVar3 + 0x34) = 1;
      return;
    }
    lVar6 = plVar3[3];
    if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar6 != 0) {
      /*UnityEngine.Animator$$Play*/ func_0x03210958(0,lVar6,**(undefined4 **)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xb8),0,0);
      goto code_r0x02f8a348;
    }
  }
  lVar6 = func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_d8;
  *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x88) = 0x3d255d8;
  *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
  *(long **)((long)register0x00000008 + -0x78) = plVar3;
  *(undefined1 **)((long)register0x00000008 + -0x70) =
       (undefined1 *)((long)register0x00000008 + -0x30);
  *(undefined **)((long)register0x00000008 + -0x68) =
       &Core_UI2_UIScreenBehaviour__PlayStateAnimationExit;
  if ((bRam0000000003ebc679 & 1) == 0) {
    func_0x00f78a20(0x3d255d8);
    func_0x00f78a20(0x3d25600);
    func_0x00f78a20(0x3d791b0);
    bRam0000000003ebc679 = 1;
  }
  iVar2 = /*Core.UI2.UIScreenBehaviour$$HasValidAnimator*/ func_0x02f8a8e0(lVar6);
  if (iVar2 != 0) {
    lVar7 = *(long *)(lVar6 + 0x18);
    if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar7 == 0) {
code_r0x02f8a540:
      plVar5 = (long *)func_0x00f78af4();
      *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
      *(long *)((long)register0x00000008 + -0xb8) = lVar6;
      *(undefined1 **)((long)register0x00000008 + -0xb0) =
           (undefined1 *)((long)register0x00000008 + -0x70);
      *(undefined **)((long)register0x00000008 + -0xa8) = &Core_UI2_UIScreen__InActive;
      *(undefined4 *)((long)plVar5 + 0x4c) = 4;
      Core_Input_InputManager__UnregisterListener(plVar5,0);
                    /* WARNING: Could not recover jumptable at 0x02f8a57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230));
      return;
    }
    iVar2 = /*UnityEngine.Animator$$HasState*/ func_0x03211cd4(lVar7,0,*(undefined4 *)(*(long *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xb8) + 4),0);
    if (iVar2 != 0) {
      lVar7 = *(long *)(lVar6 + 0x18);
      if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar7 == 0) goto code_r0x02f8a540;
      /*UnityEngine.Animator$$Play*/ func_0x03210958(0,lVar7,*(undefined4 *)(*(long *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xb8) + 4),0,0);
    }
  }
  uVar4 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar6,0);
  if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  fVar9 = (float)/*Core.UI2.UITweener$$RunTweenAnimationInGroups*/ func_0x02f8a9a8(/*STR('exit')*/ uRam0000000003d791b0,uVar4,1,0,0);
  fVar10 = (float)/*UnityEngine.Time$$get_time*/ func_0x03272b70(0);
  *(float *)(lVar6 + 0x38) = fVar9 + fVar10;
  return;
}



// ============================================================
// RVA: 0x2f8a1dc | Core.UI2.UIScreen.StartEnter
// ============================================================

/* WARNING: Possible PIC construction at 0x02f8a21c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f8a220) */
/* WARNING: Removing unreachable block (ram,0x02f8a228) */
/* WARNING: Removing unreachable block (ram,0x02f8a240) */

void Core_UI2_UIScreen__StartEnter(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  
  if ((bRam0000000003ebc671 & 1) == 0) {
    func_0x00f78a20(0x3d2a560);
    bRam0000000003ebc671 = 1;
  }
  *(undefined4 *)(param_1 + 0x4c) = 1;
  plVar2 = *(long **)(param_1 + 0x28);
  if (plVar2 == (long *)0x0) {
    plVar2 = (long *)func_0x00f78af4();
  }
  if ((bRam0000000003ebc678 & 1) == 0) {
    func_0x00f78a20(0x3d255d8);
    func_0x00f78a20(0x3d25600);
    func_0x00f78a20(0x3d78e90);
    bRam0000000003ebc678 = 1;
  }
  iVar1 = /*Core.UI2.UIScreenBehaviour$$HasValidAnimator*/ func_0x02f8a8e0(plVar2);
  if (iVar1 == 0) goto code_r0x02f8a348;
  lVar4 = plVar2[3];
  if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar4 != 0) {
    iVar1 = /*UnityEngine.Animator$$HasState*/ func_0x03211cd4(lVar4,0,**(undefined4 **)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xb8),0);
    if (iVar1 == 0) {
code_r0x02f8a348:
      iVar1 = (**(code **)(*plVar2 + 0x1a8))(plVar2,*(undefined8 *)(*plVar2 + 0x1b0));
      fVar6 = 0.0;
      if (iVar1 != 0) {
        uVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar2,0);
        if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        fVar6 = (float)/*Core.UI2.UITweener$$RunTweenAnimationInGroups*/ func_0x02f8a9a8(/*STR('enter')*/ uRam0000000003d78e90,uVar3,0,0,0);
      }
      fVar7 = (float)/*UnityEngine.Time$$get_time*/ func_0x03272b70(0);
      *(float *)(plVar2 + 7) = fVar6 + fVar7;
      *(undefined1 *)((long)plVar2 + 0x34) = 1;
      return;
    }
    lVar4 = plVar2[3];
    if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar4 != 0) {
      /*UnityEngine.Animator$$Play*/ func_0x03210958(0,lVar4,**(undefined4 **)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xb8),0,0);
      goto code_r0x02f8a348;
    }
  }
  lVar4 = func_0x00f78af4();
  if ((bRam0000000003ebc679 & 1) == 0) {
    func_0x00f78a20(0x3d255d8);
    func_0x00f78a20(0x3d25600);
    func_0x00f78a20(0x3d791b0);
    bRam0000000003ebc679 = 1;
  }
  iVar1 = /*Core.UI2.UIScreenBehaviour$$HasValidAnimator*/ func_0x02f8a8e0(lVar4);
  if (iVar1 != 0) {
    lVar5 = *(long *)(lVar4 + 0x18);
    if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar5 == 0) {
code_r0x02f8a540:
      plVar2 = (long *)func_0x00f78af4();
      *(undefined4 *)((long)plVar2 + 0x4c) = 4;
      Core_Input_InputManager__UnregisterListener(plVar2,0);
                    /* WARNING: Could not recover jumptable at 0x02f8a57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x228))(plVar2,*(undefined8 *)(*plVar2 + 0x230));
      return;
    }
    iVar1 = /*UnityEngine.Animator$$HasState*/ func_0x03211cd4(lVar5,0,*(undefined4 *)(*(long *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xb8) + 4),0);
    if (iVar1 != 0) {
      lVar5 = *(long *)(lVar4 + 0x18);
      if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar5 == 0) goto code_r0x02f8a540;
      /*UnityEngine.Animator$$Play*/ func_0x03210958(0,lVar5,*(undefined4 *)(*(long *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xb8) + 4),0,0);
    }
  }
  uVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar4,0);
  if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  fVar6 = (float)/*Core.UI2.UITweener$$RunTweenAnimationInGroups*/ func_0x02f8a9a8(/*STR('exit')*/ uRam0000000003d791b0,uVar3,1,0,0);
  fVar7 = (float)/*UnityEngine.Time$$get_time*/ func_0x03272b70(0);
  *(float *)(lVar4 + 0x38) = fVar6 + fVar7;
  return;
}



// ============================================================
// RVA: 0x2f8a544 | Core.UI2.UIScreen.InActive
// ============================================================

void Core_UI2_UIScreen__InActive(long *param_1)

{
  *(undefined4 *)((long)param_1 + 0x4c) = 4;
  Core_Input_InputManager__UnregisterListener(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x02f8a57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x228))(param_1,*(undefined8 *)(*param_1 + 0x230));
  return;
}



// ============================================================
// RVA: 0x2f8a580 | Core.UI2.UIScreen.RequiresBeforeEnterCoroutine
// ============================================================

undefined8 Core_UI2_UIScreen__RequiresBeforeEnterCoroutine(void)

{
  return 0;
}



// ============================================================
// RVA: 0x2f8a588 | Core.UI2.UIScreen.OnAfterInstantiated
// ============================================================

void Core_UI2_UIScreen__OnAfterInstantiated(void)

{
  return;
}



// ============================================================
// RVA: 0x2f8a58c | Core.UI2.UIScreen.OnAfterAssignBehaviour
// ============================================================

void Core_UI2_UIScreen__OnAfterAssignBehaviour(void)

{
  return;
}



// ============================================================
// RVA: 0x2f8a590 | Core.UI2.UIScreen.OnBeforeEnter
// ============================================================

void Core_UI2_UIScreen__OnBeforeEnter(void)

{
  return;
}



// ============================================================
// RVA: 0x2f8a594 | Core.UI2.UIScreen.OnBeforeEnterCoroutine
// ============================================================

long Core_UI2_UIScreen__OnBeforeEnterCoroutine(void)

{
  long lVar1;
  
  if ((bRam0000000003ebc672 & 1) == 0) {
    func_0x00f78a20(0x3d29490);
    bRam0000000003ebc672 = 1;
  }
  lVar1 = func_0x00f78aec(/*Core.UI2.UIScreen.<OnBeforeEnterCoroutine>d__45_TypeInfo*/ uRam0000000003d29490);
  /*System.Object$$.ctor*/ func_0x0294d018(lVar1,0);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  return lVar1;
}



// ============================================================
// RVA: 0x2f8a61c | Core.UI2.UIScreen.OnStartEnter
// ============================================================

void Core_UI2_UIScreen__OnStartEnter(void)

{
  return;
}



// ============================================================
// RVA: 0x2f8a620 | Core.UI2.UIScreen.OnAfterEnter
// ============================================================

void Core_UI2_UIScreen__OnAfterEnter(void)

{
  return;
}



// ============================================================
// RVA: 0x2f8a624 | Core.UI2.UIScreen.OnUpdate
// ============================================================

void Core_UI2_UIScreen__OnUpdate(void)

{
  return;
}



// ============================================================
// RVA: 0x2f8a628 | Core.UI2.UIScreen.OnLateUpdate
// ============================================================

void Core_UI2_UIScreen__OnLateUpdate(void)

{
  return;
}



// ============================================================
// RVA: 0x2f8a62c | Core.UI2.UIScreen.OnBeforeExit
// ============================================================

void Core_UI2_UIScreen__OnBeforeExit(void)

{
  return;
}



// ============================================================
// RVA: 0x2f8a630 | Core.UI2.UIScreen.OnAfterExit
// ============================================================

void Core_UI2_UIScreen__OnAfterExit(void)

{
  return;
}



// ============================================================
// RVA: 0x2f8a634 | Core.UI2.UIScreen.OnBeforeRemoveBehaviour
// ============================================================

void Core_UI2_UIScreen__OnBeforeRemoveBehaviour(void)

{
  return;
}



// ============================================================
// RVA: 0x2f8a638 | Core.UI2.UIScreen.OnBeforeDestroyed
// ============================================================

void Core_UI2_UIScreen__OnBeforeDestroyed(void)

{
  return;
}



// ============================================================
// RVA: 0x2f8a738 | Core.UI2.UIScreen.Active
// ============================================================

void Core_UI2_UIScreen__Active(long *param_1)

{
  if ((bRam0000000003ebc673 & 1) == 0) {
    func_0x00f78a20(0x3d2a560);
    bRam0000000003ebc673 = 1;
  }
  *(undefined4 *)((long)param_1 + 0x4c) = 2;
  if (param_1[4] != 0) {
    /*System.Action<UIScreen, int>$$Invoke*/ func_0x01e6e280(param_1[4],param_1,(int)param_1[9],uRam0000000003d2a560);
  }
                    /* WARNING: Could not recover jumptable at 0x02f8a7a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1e8))(param_1,*(undefined8 *)(*param_1 + 0x1f0));
  return;
}



// ============================================================
// RVA: 0x2f8a7d4 | Core.UI2.UIScreen.OnInputFamilyChanged
// ============================================================

void Core_UI2_UIScreen__OnInputFamilyChanged(void)

{
  return;
}



// ============================================================
// RVA: 0x2f8a7d8 | Core.UI2.UIScreen..ctor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Core_UI2_UIScreen___ctor(long param_1)

{
  *(undefined8 *)(param_1 + 0x48) = _UNK_037235c0;
  return;
}



