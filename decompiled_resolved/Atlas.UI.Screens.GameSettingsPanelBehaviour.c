// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.GameSettingsPanelBehaviour

// ============================================================
// RVA: 0x15b2b38 | Atlas.UI.Screens.GameSettingsPanelBehaviour.get_MusicSlider
// ============================================================

undefined8 Atlas_UI_Screens_GameSettingsPanelBehaviour__get_MusicSlider(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x15b2b40 | Atlas.UI.Screens.GameSettingsPanelBehaviour.get_CloseButton
// ============================================================

undefined8 Atlas_UI_Screens_GameSettingsPanelBehaviour__get_CloseButton(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x15b2b48 | Atlas.UI.Screens.GameSettingsPanelBehaviour.Init
// ============================================================

/* WARNING: Possible PIC construction at 0x015b2cc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015b2d04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015b2cc4) */
/* WARNING: Removing unreachable block (ram,0x015b2ccc) */
/* WARNING: Removing unreachable block (ram,0x015b2cf8) */
/* WARNING: Removing unreachable block (ram,0x015b2d08) */
/* WARNING: Removing unreachable block (ram,0x015b2d10) */
/* WARNING: Removing unreachable block (ram,0x015b2d3c) */
/* WARNING: Type propagation algorithm not settling */

long * Atlas_UI_Screens_GameSettingsPanelBehaviour__Init
                 (long *******param_1,long ******param_2,long ******param_3)

{
  long *******ppppppplVar1;
  long *******ppppppplVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long *******ppppppplVar6;
  long *****ppppplVar7;
  long *******ppppppplVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar13;
  undefined8 extraout_x1_02;
  long *plVar14;
  long *******ppppppplVar15;
  long *******ppppppplVar16;
  long *******ppppppplVar17;
  undefined8 uVar18;
  long ******pppppplVar19;
  undefined8 uVar20;
  long lVar21;
  uint uVar22;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  uint uVar23;
  undefined8 unaff_x28;
  long lVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined *puStack_98;
  long *******ppppppplStack_90;
  long *******ppppppplStack_88;
  long *******ppppppplStack_80;
  long *******ppppppplStack_78;
  long *******ppppppplStack_70;
  long *******ppppppplStack_68;
  long ******pppppplStack_60;
  undefined *puStack_58;
  
  if ((bRam0000000003eb5265 & 1) == 0) {
    func_0x00f78a20(0x3d57ad8);
    func_0x00f78a20(0x3d57ae0);
    func_0x00f78a20(0x3d57ae8);
    func_0x00f78a20(0x3d415e0);
    func_0x00f78a20(0x3d1eb28);
    func_0x00f78a20(0x3d41730);
    bRam0000000003eb5265 = 1;
  }
  param_1[7] = param_2;
  param_1[8] = param_3;
  ppppppplStack_68 = param_1;
  pppppplStack_60 = (long ******)&stack0xfffffffffffffff0;
  if (param_3 == (long ******)0x0) {
LAB_015b2d60:
    ppppppplVar6 = (long *******)func_0x00f78af4();
    puStack_58 = &Atlas_UI_Screens_GameSettingsPanelBehaviour__DeInit;
    ppppppplStack_70 = (long *******)param_3;
    if ((ppppppplVar6[3] != (long ******)0x0) &&
       (ppppplVar7 = ppppppplVar6[3][0x24], param_1 = ppppppplVar6, ppppplVar7 != (long *****)0x0))
    {
      /*UnityEngine.Events.UnityEventBase$$RemoveAllListeners*/ func_0x03278aac(ppppplVar7,0);
      if ((ppppppplVar6[4] != (long ******)0x0) &&
         (ppppplVar7 = ppppppplVar6[4][0x24], ppppplVar7 != (long *****)0x0)) {
        /*UnityEngine.Events.UnityEventBase$$RemoveAllListeners*/ func_0x03278aac(ppppplVar7,0);
        if ((ppppppplVar6[5] != (long ******)0x0) &&
           (ppppplVar7 = ppppppplVar6[5][0x24], ppppplVar7 != (long *****)0x0)) {
          plVar9 = (long *)/*UnityEngine.Events.UnityEventBase$$RemoveAllListeners*/ func_0x03278aac(ppppplVar7,0);
          ppppppplVar6[7] = (long ******)0x0;
          ppppppplVar6[8] = (long ******)0x0;
          return plVar9;
        }
      }
    }
    plVar9 = (long *)func_0x00f78af4();
    ppppppplStack_78 = (long *******)&Atlas_UI_Screens_GameSettingsPanelBehaviour___ctor;
    ppppppplStack_90 = (long *******)param_3;
    ppppppplStack_88 = param_1;
    ppppppplStack_80 = &pppppplStack_60;
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return plVar9;
  }
  pppppplVar19 = param_1[3];
  lVar5 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(param_3,0);
  if ((lVar5 == 0) || (pppppplVar19 == (long ******)0x0)) goto LAB_015b2d60;
  (*(code *)(*pppppplVar19)[0x85])(*(undefined4 *)(lVar5 + 0xc0),pppppplVar19,(*pppppplVar19)[0x86])
  ;
  if (param_1[8] == (long ******)0x0) goto LAB_015b2d60;
  param_3 = param_1[4];
  lVar5 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(param_1[8],0);
  if ((lVar5 == 0) || (param_3 == (long ******)0x0)) goto LAB_015b2d60;
  (*(code *)(*param_3)[0x85])(*(undefined4 *)(lVar5 + 0xc4),param_3,(*param_3)[0x86]);
  if (param_1[8] == (long ******)0x0) goto LAB_015b2d60;
  param_3 = param_1[5];
  lVar5 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(param_1[8],0);
  if ((lVar5 == 0) || (param_3 == (long ******)0x0)) goto LAB_015b2d60;
  (*(code *)(*param_3)[0x85])(*(undefined4 *)(lVar5 + 200),param_3,(*param_3)[0x86]);
  if (param_1[3] == (long ******)0x0) goto LAB_015b2d60;
  ppppppplVar16 = (long *******)param_1[3][0x24];
  ppppppplVar6 = (long *******)func_0x00f78aec(/*UnityEngine.Events.UnityAction<float>_TypeInfo*/ uRam0000000003d1eb28);
  lVar5 = lRam0000000003d415e0;
  /*UnityEngine.Events.UnityAction<float>$$.ctor*/ func_0x01b7f17c(ppppppplVar6,param_1,uRam0000000003d57ad8);
  param_3 = (long ******)0x0;
  if (ppppppplVar16 == (long *******)0x0) goto LAB_015b2d60;
  puStack_58 = (undefined *)0x15b2cc4;
  plVar9 = plRam0000000003d41730;
  ppppppplStack_70 = ppppppplVar16;
  ppppppplVar8 = (long *******)
                 (**(code **)**(undefined8 **)(plRam0000000003d41730[3] + 0xc0))(ppppppplVar6);
  ppppppplVar15 = ppppppplStack_68;
  ppppppplVar17 = ppppppplStack_70;
  if (ppppppplVar16 != (long *******)0x0) {
    plVar14 = (long *)0x0;
    ppppppplVar16 = (long *******)ppppppplVar16[2];
    if (ppppppplVar16 == (long *******)0x0) {
      auVar26 = func_0x00f78af4();
      lVar5 = auVar26._8_8_;
      ppppppplVar1 = (long *******)&ppppppplStack_80;
      ppppppplStack_80 = ppppppplVar17;
      ppppppplStack_78 = ppppppplVar15;
      ppppppplStack_68 = (long *******)&UnityEngine_Events_UnityEvent__RemoveListener;
      ppppppplStack_70 = &pppppplStack_60;
      if (lVar5 != 0) {
        ppppppplVar15 = *(long ********)(lVar5 + 0x20);
        ppppppplStack_70 = &pppppplStack_60;
        plVar14 = (long *)/*System.Delegate$$get_Method*/ func_0x02aaf9e8(lVar5,0);
        pppppplVar19 = auVar26._0_8_[2];
        auVar25._8_8_ = ppppppplVar15;
        auVar25._0_8_ = pppppplVar19;
        ppppppplVar17 = auVar26._0_8_;
        if (pppppplVar19 != (long ******)0x0) {
          ppppppplVar1 = &pppppplStack_60;
          ppppppplVar15 = ppppppplStack_78;
          ppppppplVar17 = ppppppplStack_80;
          ppppppplVar16 = ppppppplStack_70;
          ppppppplVar8 = ppppppplStack_68;
          goto code_r0x032315f0;
        }
      }
      auVar27 = func_0x00f78af4();
      ppppppplVar16 = (long *******)&ppppppplStack_70;
      ppppppplVar8 = (long *******)&UnityEngine_Events_UnityEventBase__RemoveListener;
code_r0x0327807c:
      *(long ********)((long)ppppppplVar1 + -0x10) = ppppppplVar16;
      *(long ********)((long)ppppppplVar1 + -8) = ppppppplVar8;
      lVar5 = *(long *)(auVar27._0_8_ + 0x10);
      auVar25._8_8_ = auVar27._8_8_;
      auVar25._0_8_ = lVar5;
      if (lVar5 == 0) {
        func_0x00f78af4();
        *(undefined8 *)((long)ppppppplVar1 + -0x40) = 0x3d415e0;
        *(long ********)((long)ppppppplVar1 + -0x38) = ppppppplVar6;
        *(long ********)((long)ppppppplVar1 + -0x30) = ppppppplVar17;
        *(long ********)((long)ppppppplVar1 + -0x28) = ppppppplVar15;
        *(undefined1 **)((long)ppppppplVar1 + -0x20) = (undefined1 *)((long)ppppppplVar1 + -0x10);
        *(undefined **)((long)ppppppplVar1 + -0x18) =
             &UnityEngine_Events_UnityEvent__FindMethod_Impl;
        if ((bRam0000000003ec1a30 & 1) == 0) {
          func_0x00f78a20(0x3d1f578);
          bRam0000000003ec1a30 = 1;
        }
        plVar10 = (long *)func_0x00f78a34(/*System.Type[]_TypeInfo*/ uRam0000000003d1f578,0);
        ppppppplVar17 = *(long ********)((long)ppppppplVar1 + -0x20);
        puStack_98 = *(undefined **)((long)ppppppplVar1 + -0x18);
        uVar18 = *(undefined8 *)((long)ppppppplVar1 + -0x30);
        uVar12 = *(undefined8 *)((long)ppppppplVar1 + -0x28);
        ppppppplVar2 = (long *******)((long)ppppppplVar1 + -0x10);
        uVar20 = *(undefined8 *)((long)ppppppplVar1 + -0x40);
        ppppppplVar6 = *(long ********)((long)ppppppplVar1 + -0x38);
        uVar13 = extraout_x1_01;
UnityEngine_Events_UnityEventBase__GetValidMethodInfo:
        *(undefined8 *)((long)ppppppplVar2 + -0x60) = unaff_x28;
        *(undefined8 *)((long)ppppppplVar2 + -0x58) = unaff_x27;
        *(undefined8 *)((long)ppppppplVar2 + -0x50) = unaff_x26;
        *(undefined8 *)((long)ppppppplVar2 + -0x48) = unaff_x25;
        *(undefined8 *)((long)ppppppplVar2 + -0x40) = 0x3d41730;
        *(undefined8 *)((long)ppppppplVar2 + -0x38) = 0x3d1eb28;
        *(undefined8 *)((long)ppppppplVar2 + -0x30) = uVar20;
        *(long ********)((long)ppppppplVar2 + -0x28) = ppppppplVar6;
        *(undefined8 *)((long)ppppppplVar2 + -0x20) = uVar18;
        *(undefined8 *)((long)ppppppplVar2 + -0x18) = uVar12;
        *(long ********)((long)ppppppplVar2 + -0x10) = ppppppplVar17;
        *(undefined **)((long)ppppppplVar2 + -8) = puStack_98;
        if ((bRam0000000003ec1a38 & 1) == 0) {
          func_0x00f78a20(0x3d19b78);
          func_0x00f78a20(0x3d25458);
          bRam0000000003ec1a38 = 1;
        }
        do {
          uVar18 = /*object_var*/ uRam0000000003d19b78;
          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          plVar9 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar18,0);
          if (plVar14 == (long *)0x0) {
            return (long *)0x0;
          }
          if (plVar14 == plVar9) {
            return (long *)0x0;
          }
          uVar18 = 0x3c;
          plVar9 = (long *)/*System.Type$$GetMethod*/ func_0x02a0304c(plVar14,uVar13,0x3c,0,plVar10,0,0);
          if (plVar9 != (long *)0x0) {
            lVar5 = (**(code **)(*plVar9 + 600))(plVar9,*(undefined8 *)(*plVar9 + 0x260));
            if (lVar5 == 0) {
code_r0x032782ac:
              func_0x00f78af4();
code_r0x032782b0:
              uVar12 = func_0x00f78b24();
              func_0x00f78ac0(uVar12,0);
              *(long **)((long)ppppppplVar2 + -0x90) = plVar9;
              *(long **)((long)ppppppplVar2 + -0x88) = plVar14;
              *(undefined8 *)((long)ppppppplVar2 + -0x80) = uVar13;
              *(long **)((long)ppppppplVar2 + -0x78) = plVar10;
              *(undefined1 **)((long)ppppppplVar2 + -0x70) =
                   (undefined1 *)((long)ppppppplVar2 + -0x10);
              *(undefined **)((long)ppppppplVar2 + -0x68) =
                   &UnityEngine_Events_UnityEvent__GetDelegate;
              if ((bRam0000000003ec1a31 & 1) == 0) {
                func_0x00f78a20(0x3d22a90);
                bRam0000000003ec1a31 = 1;
              }
              plVar9 = (long *)func_0x00f78aec(/*UnityEngine.Events.InvokableCall_TypeInfo*/ uRam0000000003d22a90);
              /*UnityEngine.Events.InvokableCall$$.ctor*/ func_0x03231308(plVar9,extraout_x1_02,uVar18,0);
              return plVar9;
            }
            uVar22 = *(uint *)(lVar5 + 0x18);
            if ((int)uVar22 < 1) {
              return plVar9;
            }
            uVar23 = 0;
            while( true ) {
              if (uVar22 <= uVar23) goto code_r0x032782b0;
              if (plVar10 == (long *)0x0) goto code_r0x032782ac;
              if (*(uint *)(plVar10 + 3) <= uVar23) goto code_r0x032782b0;
              plVar11 = *(long **)(lVar5 + (long)(int)uVar23 * 8 + 0x20);
              if (plVar11 == (long *)0x0) goto code_r0x032782ac;
              lVar24 = plVar10[(long)(int)uVar23 + 4];
              lVar21 = (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
              if ((lVar24 == 0) || (iVar3 = /*System.Type$$get_IsPrimitive*/ func_0x02a040ac(lVar24,0), lVar21 == 0))
              goto code_r0x032782ac;
              iVar4 = /*System.Type$$get_IsPrimitive*/ func_0x02a040ac(lVar21,0);
              if (iVar3 != iVar4) break;
              uVar23 = uVar23 + 1;
              uVar22 = *(uint *)(lVar5 + 0x18);
              if ((int)uVar22 <= (int)uVar23) {
                return plVar9;
              }
            }
          }
          plVar14 = (long *)(**(code **)(*plVar14 + 0x328))
                                      (plVar14,*(undefined8 *)(*plVar14 + 0x330));
        } while( true );
      }
      ppppppplVar16 = *(long ********)((long)ppppppplVar1 + -0x10);
      ppppppplVar8 = *(long ********)((long)ppppppplVar1 + -8);
    }
    else {
      plVar14 = (long *)0x0;
      ppppppplVar1 = (long *******)&ppppppplStack_80;
      ppppppplStack_80 = (long *******)0x3d415e0;
      ppppppplStack_78 = ppppppplVar6;
      if ((bRam0000000003ebf6be & 1) == 0) {
        func_0x00f78a20(0x3d39e30);
        bRam0000000003ebf6be = 1;
      }
      if (ppppppplVar16[3] != (long ******)0x0) {
        plVar9 = (long *)/*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(ppppppplVar16[3],ppppppplVar8,uRam0000000003d39e30);
        *(undefined1 *)(ppppppplVar16 + 5) = 1;
        return plVar9;
      }
      auVar25 = func_0x00f78af4();
      ppppppplVar15 = ppppppplVar16;
      ppppppplVar17 = ppppppplVar8;
      ppppppplVar6 = (long *******)0x3ebf000;
      ppppppplVar16 = &pppppplStack_60;
      ppppppplVar8 = (long *******)&UnityEngine_Events_InvokableCallList__RemoveListener;
    }
code_r0x032315f0:
    lVar5 = auVar25._0_8_;
    *(undefined8 *)((long)ppppppplVar1 + -0x60) = unaff_x28;
    *(undefined8 *)((long)ppppppplVar1 + -0x58) = unaff_x27;
    *(undefined8 *)((long)ppppppplVar1 + -0x50) = unaff_x26;
    *(undefined8 *)((long)ppppppplVar1 + -0x48) = unaff_x25;
    *(undefined8 *)((long)ppppppplVar1 + -0x40) = 0x3d41730;
    *(undefined8 *)((long)ppppppplVar1 + -0x38) = 0x3d1eb28;
    *(undefined8 *)((long)ppppppplVar1 + -0x30) = 0x3d415e0;
    *(long ********)((long)ppppppplVar1 + -0x28) = ppppppplVar6;
    *(long ********)((long)ppppppplVar1 + -0x20) = ppppppplVar17;
    *(long ********)((long)ppppppplVar1 + -0x18) = ppppppplVar15;
    *(long ********)((long)ppppppplVar1 + -0x10) = ppppppplVar16;
    *(long ********)((long)ppppppplVar1 + -8) = ppppppplVar8;
    if ((bRam0000000003ebf6bf & 1) == 0) {
      func_0x00f78a20(0x3d39e30);
      func_0x00f78a20(0x3d39e48);
      func_0x00f78a20(0x3d39e28);
      func_0x00f78a20(0x3d39e50);
      func_0x00f78a20(0x3d39e58);
      func_0x00f78a20(0x3d1d7f8);
      func_0x00f78a20(0x3d3f3d8);
      func_0x00f78a20(0x3d1e548);
      bRam0000000003ebf6bf = 1;
    }
    plVar9 = (long *)func_0x00f78aec(/*System.Collections.Generic.List<BaseInvokableCall>_TypeInfo*/ uRam0000000003d1d7f8);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(plVar9,uRam0000000003d39e28);
    lVar21 = *(long *)(lVar5 + 0x18);
    if (lVar21 != 0) {
      lVar24 = 4;
      do {
        uVar22 = (int)lVar24 - 4;
        if ((int)*(uint *)(lVar21 + 0x18) <= (int)uVar22) {
          uVar18 = func_0x00f78aec(/*System.Predicate<BaseInvokableCall>_TypeInfo*/ uRam0000000003d1e548);
          if (plVar9 != (long *)0x0) {
            /*System.Predicate<TMP_MaterialManager.MaskingMaterial>$$.ctor*/ func_0x0270a61c(uVar18,plVar9,*(undefined8 *)(*plVar9 + 0x210),uRam0000000003d3f3d8);
            plVar9 = (long *)/*System.Collections.Generic.List<AddressablesImpl.ResourceLocatorInfo>$$RemoveAll*/ func_0x0242879c(lVar21,uVar18,uRam0000000003d39e48);
            *(undefined1 *)(lVar5 + 0x28) = 1;
            return plVar9;
          }
          break;
        }
        if (*(uint *)(lVar21 + 0x18) <= uVar22) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar10 = *(long **)(*(long *)(lVar21 + 0x10) + lVar24 * 8);
        if (plVar10 == (long *)0x0) break;
        iVar3 = (**(code **)(*plVar10 + 0x188))
                          (plVar10,auVar25._8_8_,plVar14,*(undefined8 *)(*plVar10 + 400));
        if (iVar3 != 0) {
          lVar21 = *(long *)(lVar5 + 0x18);
          if (lVar21 == 0) break;
          if (*(uint *)(lVar21 + 0x18) <= uVar22) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          if (plVar9 == (long *)0x0) break;
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(plVar9,*(undefined8 *)(*(long *)(lVar21 + 0x10) + lVar24 * 8),
                          uRam0000000003d39e30);
        }
        lVar21 = *(long *)(lVar5 + 0x18);
        lVar24 = lVar24 + 1;
      } while (lVar21 != 0);
    }
    lVar21 = func_0x00f78af4();
    *(long **)((long)ppppppplVar1 + -0x80) = plVar14;
    *(long *)((long)ppppppplVar1 + -0x78) = lVar5;
    *(undefined1 **)((long)ppppppplVar1 + -0x70) = (undefined1 *)((long)ppppppplVar1 + -0x10);
    *(undefined **)((long)ppppppplVar1 + -0x68) = &UnityEngine_Events_InvokableCallList__Clear;
    if ((bRam0000000003ebf6c0 & 1) == 0) {
      func_0x00f78a20(0x3d39e40);
      bRam0000000003ebf6c0 = 1;
    }
    if (*(long *)(lVar21 + 0x18) != 0) {
      plVar9 = (long *)/*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar21 + 0x18),uRam0000000003d39e40);
      *(undefined1 *)(lVar21 + 0x28) = 1;
      return plVar9;
    }
    lVar5 = func_0x00f78af4();
    *(undefined8 *)((long)ppppppplVar1 + -0xa0) = 0x3ebf000;
    *(long *)((long)ppppppplVar1 + -0x98) = lVar21;
    *(undefined1 **)((long)ppppppplVar1 + -0x90) = (undefined1 *)((long)ppppppplVar1 + -0x70);
    *(undefined **)((long)ppppppplVar1 + -0x88) =
         &UnityEngine_Events_InvokableCallList__ClearPersistent;
    if ((bRam0000000003ebf6c1 & 1) == 0) {
      func_0x00f78a20(0x3d39e40);
      bRam0000000003ebf6c1 = 1;
    }
    if (*(long *)(lVar5 + 0x10) != 0) {
      plVar9 = (long *)/*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar5 + 0x10),uRam0000000003d39e40);
      *(undefined1 *)(lVar5 + 0x28) = 1;
      return plVar9;
    }
    lVar21 = func_0x00f78af4();
    *(undefined8 *)((long)ppppppplVar1 + -0xc0) = 0x3ebf000;
    *(long *)((long)ppppppplVar1 + -0xb8) = lVar5;
    *(undefined1 **)((long)ppppppplVar1 + -0xb0) = (undefined1 *)((long)ppppppplVar1 + -0x90);
    *(undefined **)((long)ppppppplVar1 + -0xa8) =
         &UnityEngine_Events_InvokableCallList__PrepareInvoke;
    uVar18 = 0x3ebf000;
    if ((bRam0000000003ebf6c2 & 1) == 0) {
      func_0x00f78a20(0x3d39e38);
      func_0x00f78a20(0x3d39e40);
      bRam0000000003ebf6c2 = 1;
    }
    if (*(char *)(lVar21 + 0x28) != '\0') {
      if (*(long *)(lVar21 + 0x20) != 0) {
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar21 + 0x20),uRam0000000003d39e40);
        if (*(long *)(lVar21 + 0x20) != 0) {
          uVar18 = 0x3d39e38;
          /*System.Collections.Generic.List<TimeZoneInfo.AdjustmentRule>$$AddRange*/ func_0x02427364(*(long *)(lVar21 + 0x20),*(undefined8 *)(lVar21 + 0x10),
                          uRam0000000003d39e38);
          if (*(long *)(lVar21 + 0x20) != 0) {
            /*System.Collections.Generic.List<TimeZoneInfo.AdjustmentRule>$$AddRange*/ func_0x02427364(*(long *)(lVar21 + 0x20),*(undefined8 *)(lVar21 + 0x18),
                            uRam0000000003d39e38);
            *(undefined1 *)(lVar21 + 0x28) = 0;
            goto code_r0x03231910;
          }
        }
      }
      plVar14 = (long *)func_0x00f78af4();
      *(long **)((long)ppppppplVar1 + -0xf0) = plVar9;
      *(long *)((long)ppppppplVar1 + -0xe8) = auVar25._8_8_;
      *(undefined8 *)((long)ppppppplVar1 + -0xe0) = uVar18;
      *(long *)((long)ppppppplVar1 + -0xd8) = lVar21;
      *(undefined1 **)((long)ppppppplVar1 + -0xd0) = (undefined1 *)((long)ppppppplVar1 + -0xb0);
      *(undefined **)((long)ppppppplVar1 + -200) = &UnityEngine_Events_InvokableCallList___ctor;
      if ((bRam0000000003ebf6c3 & 1) == 0) {
        func_0x00f78a20(0x3d39e28);
        func_0x00f78a20(0x3d1d7f8);
        bRam0000000003ebf6c3 = 1;
      }
      lVar5 = func_0x00f78aec(/*System.Collections.Generic.List<BaseInvokableCall>_TypeInfo*/ uRam0000000003d1d7f8);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(lVar5,uRam0000000003d39e28);
      plVar14[2] = lVar5;
      lVar5 = func_0x00f78aec(/*System.Collections.Generic.List<BaseInvokableCall>_TypeInfo*/ uRam0000000003d1d7f8);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(lVar5,uRam0000000003d39e28);
      plVar14[3] = lVar5;
      lVar5 = func_0x00f78aec(/*System.Collections.Generic.List<BaseInvokableCall>_TypeInfo*/ uRam0000000003d1d7f8);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(lVar5,uRam0000000003d39e28);
      plVar14[4] = lVar5;
      *(undefined1 *)(plVar14 + 5) = 1;
      return plVar14;
    }
code_r0x03231910:
    return *(long **)(lVar21 + 0x20);
  }
  auVar26 = func_0x00f78af4();
  lVar21 = auVar26._8_8_;
  ppppppplStack_78 = (long *******)&UnityEngine_Events_UnityEvent_float___RemoveListener;
  ppppppplVar17 = (long *******)&ppppppplStack_80;
  uVar18 = 0;
  ppppppplStack_90 = ppppppplVar16;
  ppppppplStack_88 = ppppppplVar16;
  ppppppplStack_80 = &pppppplStack_60;
  if (lVar21 != 0) {
    uVar18 = *(undefined8 *)(lVar21 + 0x20);
    auVar27._8_8_ = uVar18;
    auVar27._0_8_ = auVar26._0_8_;
    plVar14 = (long *)/*System.Delegate$$get_Method*/ func_0x02aaf9e8(lVar21,0);
    if (auVar26._0_8_ != 0) {
      ppppppplVar1 = (long *******)&ppppppplStack_70;
      ppppppplVar15 = ppppppplStack_88;
      ppppppplVar17 = ppppppplStack_90;
      ppppppplVar16 = ppppppplStack_80;
      ppppppplVar8 = ppppppplStack_78;
      goto code_r0x0327807c;
    }
  }
  plVar14 = plVar9;
  uVar12 = 0;
  func_0x00f78af4();
  puStack_98 = &UnityEngine_Events_UnityEvent_float___FindMethod_Impl;
  plVar9 = plVar14;
  lVar21 = lVar5;
  if ((bRam0000000003eb6c4b & 1) == 0) {
    func_0x00f78a20(0x3d1f578);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6c4b = 1;
  }
  plVar10 = (long *)func_0x00f78a34(/*System.Type[]_TypeInfo*/ uRam0000000003d1f578,1);
  uVar20 = *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x18) + 0xc0) + 0x10);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar20,0);
  if (plVar10 == (long *)0x0) {
    func_0x00f78af4();
  }
  else {
    if ((lVar5 != 0) &&
       (lVar24 = func_0x00f78adc(lVar5,*(undefined8 *)(*plVar10 + 0x40)), lVar24 == 0)) {
      uVar18 = func_0x00f78b14();
      goto code_r0x01b84758;
    }
    if ((int)plVar10[3] != 0) {
      plVar10[4] = lVar5;
      uVar20 = 0x3d415e0;
      ppppppplVar2 = (long *******)&ppppppplStack_90;
      uVar13 = extraout_x1;
      goto UnityEngine_Events_UnityEventBase__GetValidMethodInfo;
    }
  }
  uVar18 = func_0x00f78b24();
code_r0x01b84758:
  func_0x00f78ac0(uVar18,0);
  lVar5 = *(long *)(*(long *)(*(long *)(lVar21 + 0x18) + 0xc0) + 0x18);
  if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar5);
  }
  plVar14 = (long *)func_0x00f78aec(lVar5);
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar21 + 0x18) + 0xc0) + 0x20))
            (plVar14,extraout_x1_00,plVar9);
  return plVar14;
}



// ============================================================
// RVA: 0x15b2d64 | Atlas.UI.Screens.GameSettingsPanelBehaviour.DeInit
// ============================================================

undefined8 Atlas_UI_Screens_GameSettingsPanelBehaviour__DeInit(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0x120), lVar1 != 0)) {
    /*UnityEngine.Events.UnityEventBase$$RemoveAllListeners*/ func_0x03278aac(lVar1,0);
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x120), lVar1 != 0)) {
      /*UnityEngine.Events.UnityEventBase$$RemoveAllListeners*/ func_0x03278aac(lVar1,0);
      if ((*(long *)(param_1 + 0x28) != 0) &&
         (lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 0x120), lVar1 != 0)) {
        uVar2 = /*UnityEngine.Events.UnityEventBase$$RemoveAllListeners*/ func_0x03278aac(lVar1,0);
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(undefined8 *)(param_1 + 0x40) = 0;
        return uVar2;
      }
    }
  }
  uVar2 = func_0x00f78af4();
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return uVar2;
}



// ============================================================
// RVA: 0x15b2dd0 | Atlas.UI.Screens.GameSettingsPanelBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_Screens_GameSettingsPanelBehaviour___ctor(ulong param_1)

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
// RVA: 0x15b2dd8 | Atlas.UI.Screens.GameSettingsPanelBehaviour.<Init>b__10_0
// ============================================================

undefined1  [16] Atlas_UI_Screens_GameSettingsPanelBehaviour___Init_b__10_0(long param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 extraout_x1;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  plVar2 = *(long **)(param_1 + 0x18);
  if (plVar2 != (long *)0x0) {
    lVar4 = *(long *)(param_1 + 0x38);
    (**(code **)(*plVar2 + 0x418))(plVar2,*(undefined8 *)(*plVar2 + 0x420));
    if (lVar4 != 0) {
      /*Atlas.Audio.AtlasAudioManager$$SetMusicVolume*/ func_0x0145c220(lVar4,0);
      if (*(long *)(param_1 + 0x40) != 0) {
        lVar4 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(param_1 + 0x40),0);
        plVar2 = *(long **)(param_1 + 0x18);
        if ((plVar2 != (long *)0x0) &&
           (uVar6 = (**(code **)(*plVar2 + 0x418))(plVar2,*(undefined8 *)(*plVar2 + 0x420)),
           lVar4 != 0)) {
          *(undefined4 *)(lVar4 + 0xc0) = uVar6;
          uVar3 = *(ulong *)(param_1 + 0x40);
          if (uVar3 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
        }
      }
    }
  }
  lVar4 = func_0x00f78af4();
  plVar2 = *(long **)(lVar4 + 0x20);
  if (plVar2 != (long *)0x0) {
    lVar5 = *(long *)(lVar4 + 0x38);
    (**(code **)(*plVar2 + 0x418))(plVar2,*(undefined8 *)(*plVar2 + 0x420));
    if (lVar5 != 0) {
      /*Atlas.Audio.AtlasAudioManager$$SetSfxVolume*/ func_0x0145c344(lVar5,0);
      if (*(long *)(lVar4 + 0x40) != 0) {
        lVar5 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(lVar4 + 0x40),0);
        plVar2 = *(long **)(lVar4 + 0x20);
        if ((plVar2 != (long *)0x0) &&
           (uVar6 = (**(code **)(*plVar2 + 0x418))(plVar2,*(undefined8 *)(*plVar2 + 0x420)),
           lVar5 != 0)) {
          *(undefined4 *)(lVar5 + 0xc4) = uVar6;
          uVar3 = *(ulong *)(lVar4 + 0x40);
          if (uVar3 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
        }
      }
    }
  }
  lVar4 = func_0x00f78af4();
  plVar2 = *(long **)(lVar4 + 0x28);
  if (plVar2 != (long *)0x0) {
    lVar5 = *(long *)(lVar4 + 0x38);
    (**(code **)(*plVar2 + 0x418))(plVar2,*(undefined8 *)(*plVar2 + 0x420));
    if (lVar5 != 0) {
      /*Atlas.Audio.AtlasAudioManager$$SetVOVolume*/ func_0x0145c434(lVar5,0);
      if (*(long *)(lVar4 + 0x40) != 0) {
        lVar5 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(lVar4 + 0x40),0);
        plVar2 = *(long **)(lVar4 + 0x28);
        if ((plVar2 != (long *)0x0) &&
           (uVar6 = (**(code **)(*plVar2 + 0x418))(plVar2,*(undefined8 *)(*plVar2 + 0x420)),
           lVar5 != 0)) {
          *(undefined4 *)(lVar5 + 200) = uVar6;
          uVar3 = *(ulong *)(lVar4 + 0x40);
          if (uVar3 != 0) {
Atlas_Save_SaveManager__MarkSaveAsDirty:
            *(undefined1 *)(uVar3 + 0x110) = 1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar3;
            return auVar7;
          }
        }
      }
    }
  }
  iVar1 = func_0x00f78af4();
  auVar8._1_7_ = 0;
  auVar8[0] = iVar1 == 5 || iVar1 - 1U < 2;
  auVar8._8_8_ = extraout_x1;
  return auVar8;
}



// ============================================================
// RVA: 0x15b2e64 | Atlas.UI.Screens.GameSettingsPanelBehaviour.<Init>b__10_1
// ============================================================

undefined1  [16] Atlas_UI_Screens_GameSettingsPanelBehaviour___Init_b__10_1(long param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 extraout_x1;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  plVar2 = *(long **)(param_1 + 0x20);
  if (plVar2 != (long *)0x0) {
    lVar4 = *(long *)(param_1 + 0x38);
    (**(code **)(*plVar2 + 0x418))(plVar2,*(undefined8 *)(*plVar2 + 0x420));
    if (lVar4 != 0) {
      /*Atlas.Audio.AtlasAudioManager$$SetSfxVolume*/ func_0x0145c344(lVar4,0);
      if (*(long *)(param_1 + 0x40) != 0) {
        lVar4 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(param_1 + 0x40),0);
        plVar2 = *(long **)(param_1 + 0x20);
        if ((plVar2 != (long *)0x0) &&
           (uVar6 = (**(code **)(*plVar2 + 0x418))(plVar2,*(undefined8 *)(*plVar2 + 0x420)),
           lVar4 != 0)) {
          *(undefined4 *)(lVar4 + 0xc4) = uVar6;
          uVar3 = *(ulong *)(param_1 + 0x40);
          if (uVar3 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
        }
      }
    }
  }
  lVar4 = func_0x00f78af4();
  plVar2 = *(long **)(lVar4 + 0x28);
  if (plVar2 != (long *)0x0) {
    lVar5 = *(long *)(lVar4 + 0x38);
    (**(code **)(*plVar2 + 0x418))(plVar2,*(undefined8 *)(*plVar2 + 0x420));
    if (lVar5 != 0) {
      /*Atlas.Audio.AtlasAudioManager$$SetVOVolume*/ func_0x0145c434(lVar5,0);
      if (*(long *)(lVar4 + 0x40) != 0) {
        lVar5 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(lVar4 + 0x40),0);
        plVar2 = *(long **)(lVar4 + 0x28);
        if ((plVar2 != (long *)0x0) &&
           (uVar6 = (**(code **)(*plVar2 + 0x418))(plVar2,*(undefined8 *)(*plVar2 + 0x420)),
           lVar5 != 0)) {
          *(undefined4 *)(lVar5 + 200) = uVar6;
          uVar3 = *(ulong *)(lVar4 + 0x40);
          if (uVar3 != 0) {
Atlas_Save_SaveManager__MarkSaveAsDirty:
            *(undefined1 *)(uVar3 + 0x110) = 1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar3;
            return auVar7;
          }
        }
      }
    }
  }
  iVar1 = func_0x00f78af4();
  auVar8._1_7_ = 0;
  auVar8[0] = iVar1 == 5 || iVar1 - 1U < 2;
  auVar8._8_8_ = extraout_x1;
  return auVar8;
}



// ============================================================
// RVA: 0x15b2ef0 | Atlas.UI.Screens.GameSettingsPanelBehaviour.<Init>b__10_2
// ============================================================

undefined1  [16] Atlas_UI_Screens_GameSettingsPanelBehaviour___Init_b__10_2(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 extraout_x1;
  long lVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  plVar2 = *(long **)(param_1 + 0x28);
  if (plVar2 != (long *)0x0) {
    lVar3 = *(long *)(param_1 + 0x38);
    (**(code **)(*plVar2 + 0x418))(plVar2,*(undefined8 *)(*plVar2 + 0x420));
    if (lVar3 != 0) {
      /*Atlas.Audio.AtlasAudioManager$$SetVOVolume*/ func_0x0145c434(lVar3,0);
      if (*(long *)(param_1 + 0x40) != 0) {
        lVar3 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(param_1 + 0x40),0);
        plVar2 = *(long **)(param_1 + 0x28);
        if ((plVar2 != (long *)0x0) &&
           (uVar4 = (**(code **)(*plVar2 + 0x418))(plVar2,*(undefined8 *)(*plVar2 + 0x420)),
           lVar3 != 0)) {
          *(undefined4 *)(lVar3 + 200) = uVar4;
          auVar5._0_8_ = *(ulong *)(param_1 + 0x40);
          if (auVar5._0_8_ != 0) {
            *(undefined1 *)(auVar5._0_8_ + 0x110) = 1;
            auVar5._8_8_ = 0;
            return auVar5;
          }
        }
      }
    }
  }
  iVar1 = func_0x00f78af4();
  auVar6._1_7_ = 0;
  auVar6[0] = iVar1 == 5 || iVar1 - 1U < 2;
  auVar6._8_8_ = extraout_x1;
  return auVar6;
}



