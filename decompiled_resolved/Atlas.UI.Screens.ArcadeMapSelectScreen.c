// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.ArcadeMapSelectScreen

// ============================================================
// RVA: 0x1450690 | Atlas.UI.Screens.ArcadeMapSelectScreen.ShowToolTips
// ============================================================

void Atlas_UI_Screens_ArcadeMapSelectScreen__ShowToolTips(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int extraout_w1;
  uint uVar9;
  long lVar10;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000003eb4773 & 1) == 0) {
    func_0x00f78a20(0x3d1fc98);
    func_0x00f78a20(0x3d337c8);
    func_0x00f78a20(0x3d337d0);
    func_0x00f78a20(0x3d337d8);
    func_0x00f78a20(0x3d57280);
    func_0x00f78a20(0x3d3dc70);
    func_0x00f78a20(0x3d3e188);
    func_0x00f78a20(0x3d40fb0);
    bRam0000000003eb4773 = 1;
  }
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d40fb0);
  if (lVar3 == 0) goto LAB_01450884;
  if (*(long *)(lVar3 + 0x20) == 0) goto LAB_01450884;
  lVar3 = *(long *)(*(long *)(lVar3 + 0x20) + 0x10);
  if (((*(ushort *)(/*Atlas.UI.Screens.ArcadeMapSelectScreen_TypeInfo*/ lRam0000000003d1fc98 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.Screens.ArcadeMapSelectScreen_TypeInfo*/ lRam0000000003d1fc98 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar3 == 0) goto LAB_01450884;
  lVar3 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar3,**(undefined8 **)(/*Atlas.UI.Screens.ArcadeMapSelectScreen_TypeInfo*/ lRam0000000003d1fc98 + 0xb8),uRam0000000003d57280)
  ;
  lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d40fb0);
  if (lVar4 == 0) goto LAB_01450884;
  if (*(long *)(lVar4 + 0xb0) == 0) goto LAB_01450884;
  iVar2 = Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete(*(long *)(lVar4 + 0xb0),lVar3,0)
  ;
  if (iVar2 != 0) {
    if (lVar3 == 0) goto LAB_01450884;
    if (*(long *)(lVar3 + 0x58) == 0) goto LAB_01450884;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_58,*(long *)(lVar3 + 0x58),uRam0000000003d3dc70);
    while (uVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_58,uRam0000000003d337d0), uVar7 = uStack_48,
          (uVar5 & 1) != 0) {
      lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d40fb0);
      if (lVar3 == 0) {
        func_0x00f78af4();
code_r0x01450880:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1450884);
        (*pcVar1)();
      }
      if (*(long *)(lVar3 + 0x98) == 0) {
        func_0x00f78af4();
        goto code_r0x01450880;
      }
      /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$QueueModal*/ func_0x025dfbac(*(long *)(lVar3 + 0x98),uVar7,uRam0000000003d3e188);
    }
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_58,uRam0000000003d337c8);
  }
  do {
    lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d40fb0);
    if ((lVar3 != 0) && (*(long *)(lVar3 + 0x48) != 0)) {
      /*Atlas.Save.SaveManager$$StartSave*/ func_0x014eb4e0(*(long *)(lVar3 + 0x48),0);
      return;
    }
LAB_01450884:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x014508d0;
    plVar6 = (long *)___cxa_begin_catch();
    lVar3 = *plVar6;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_58,uRam0000000003d337c8);
  } while (lVar3 == 0);
  func_0x00f78ac0(lVar3,0);
code_r0x014508d0:
  uVar7 = __Unwind_Resume();
  if ((bRam0000000003eb4774 & 1) == 0) {
    func_0x00f78a20(0x3d1fc98);
    func_0x00f78a20(0x3d57280);
    func_0x00f78a20(0x3d3dc78);
    func_0x00f78a20(0x3d3dc80);
    func_0x00f78a20(0x3d3e188);
    func_0x00f78a20(0x3d40fb0);
    bRam0000000003eb4774 = 1;
  }
  lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar7,uRam0000000003d40fb0);
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x20) != 0)) {
    lVar3 = *(long *)(*(long *)(lVar3 + 0x20) + 0x10);
    if (((*(ushort *)(/*Atlas.UI.Screens.ArcadeMapSelectScreen_TypeInfo*/ lRam0000000003d1fc98 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.ArcadeMapSelectScreen_TypeInfo*/ lRam0000000003d1fc98 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (((lVar3 != 0) &&
        (lVar3 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar3,**(undefined8 **)(/*Atlas.UI.Screens.ArcadeMapSelectScreen_TypeInfo*/ lRam0000000003d1fc98 + 0xb8),
                                 uRam0000000003d57280), lVar3 != 0)) &&
       (lVar4 = *(long *)(lVar3 + 0x58), lVar4 != 0)) {
      uVar9 = 0;
      do {
        if ((int)*(uint *)(lVar4 + 0x18) <= (int)uVar9) {
          return;
        }
        if (*(uint *)(lVar4 + 0x18) <= uVar9) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar6 = *(long **)(*(long *)(lVar4 + 0x10) + (long)(int)uVar9 * 8 + 0x20);
        if (plVar6 == (long *)0x0) break;
        uVar8 = (**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180));
        if (((*(ushort *)(/*Atlas.UI.Screens.ArcadeMapSelectScreen_TypeInfo*/ lRam0000000003d1fc98 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.Screens.ArcadeMapSelectScreen_TypeInfo*/ lRam0000000003d1fc98 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar2 = /*System.String$$op_Inequality*/ func_0x029bd9d4(uVar8,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.ArcadeMapSelectScreen_TypeInfo*/ lRam0000000003d1fc98 + 0xb8) + 8),0)
        ;
        if (iVar2 != 0) {
          lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar7,uRam0000000003d40fb0);
          if ((lVar4 == 0) || (lVar10 = *(long *)(lVar3 + 0x58), lVar10 == 0)) break;
          lVar4 = *(long *)(lVar4 + 0x98);
          if (*(uint *)(lVar10 + 0x18) <= uVar9) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          if (lVar4 == 0) break;
          /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$QueueModal*/ func_0x025dfbac(lVar4,*(undefined8 *)
                                 (*(long *)(lVar10 + 0x10) + (long)(int)uVar9 * 8 + 0x20),
                          uRam0000000003d3e188);
        }
        uVar9 = uVar9 + 1;
        lVar4 = *(long *)(lVar3 + 0x58);
      } while (lVar4 != 0);
    }
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x14508d4 | Atlas.UI.Screens.ArcadeMapSelectScreen.ShowInfoToolTips
// ============================================================

void Atlas_UI_Screens_ArcadeMapSelectScreen__ShowInfoToolTips(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  
  if ((bRam0000000003eb4774 & 1) == 0) {
    func_0x00f78a20(0x3d1fc98);
    func_0x00f78a20(0x3d57280);
    func_0x00f78a20(0x3d3dc78);
    func_0x00f78a20(0x3d3dc80);
    func_0x00f78a20(0x3d3e188);
    func_0x00f78a20(0x3d40fb0);
    bRam0000000003eb4774 = 1;
  }
  lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d40fb0);
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x20) != 0)) {
    lVar2 = *(long *)(*(long *)(lVar2 + 0x20) + 0x10);
    if (((*(ushort *)(/*Atlas.UI.Screens.ArcadeMapSelectScreen_TypeInfo*/ lRam0000000003d1fc98 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.ArcadeMapSelectScreen_TypeInfo*/ lRam0000000003d1fc98 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (((lVar2 != 0) &&
        (lVar2 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar2,**(undefined8 **)(/*Atlas.UI.Screens.ArcadeMapSelectScreen_TypeInfo*/ lRam0000000003d1fc98 + 0xb8),
                                 uRam0000000003d57280), lVar2 != 0)) &&
       (lVar5 = *(long *)(lVar2 + 0x58), lVar5 != 0)) {
      uVar6 = 0;
      do {
        if ((int)*(uint *)(lVar5 + 0x18) <= (int)uVar6) {
          return;
        }
        if (*(uint *)(lVar5 + 0x18) <= uVar6) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar3 = *(long **)(*(long *)(lVar5 + 0x10) + (long)(int)uVar6 * 8 + 0x20);
        if (plVar3 == (long *)0x0) break;
        uVar4 = (**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180));
        if (((*(ushort *)(/*Atlas.UI.Screens.ArcadeMapSelectScreen_TypeInfo*/ lRam0000000003d1fc98 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.Screens.ArcadeMapSelectScreen_TypeInfo*/ lRam0000000003d1fc98 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar1 = /*System.String$$op_Inequality*/ func_0x029bd9d4(uVar4,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.ArcadeMapSelectScreen_TypeInfo*/ lRam0000000003d1fc98 + 0xb8) + 8),0)
        ;
        if (iVar1 != 0) {
          lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d40fb0);
          if ((lVar5 == 0) || (lVar7 = *(long *)(lVar2 + 0x58), lVar7 == 0)) break;
          lVar5 = *(long *)(lVar5 + 0x98);
          if (*(uint *)(lVar7 + 0x18) <= uVar6) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          if (lVar5 == 0) break;
          /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$QueueModal*/ func_0x025dfbac(lVar5,*(undefined8 *)
                                 (*(long *)(lVar7 + 0x10) + (long)(int)uVar6 * 8 + 0x20),
                          uRam0000000003d3e188);
        }
        uVar6 = uVar6 + 1;
        lVar5 = *(long *)(lVar2 + 0x58);
      } while (lVar5 != 0);
    }
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x1450ab8 | Atlas.UI.Screens.ArcadeMapSelectScreen.OnBeforeEnter
// ============================================================

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_UI_Screens_ArcadeMapSelectScreen__OnBeforeEnter(long param_1)

{
  float fVar1;
  float fVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 unaff_x22;
  undefined8 uVar11;
  bool bVar12;
  int iVar13;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  ulong uVar14;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar15;
  undefined *puVar16;
  float fVar17;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 *******pppppppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 ******ppppppuStack_70;
  undefined *puStack_68;
  undefined8 *****pppppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4775 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d57260);
    func_0x00f78a20(0x3d40fa8);
    func_0x00f78a20(0x3d40fb0);
    func_0x00f78a20(0x3d69bf8);
    bRam0000000003eb4775 = 1;
  }
  Atlas_UI_Screens_ArcadeMapSelectScreen__ShowToolTips(param_1);
  lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d40fb0);
  if ((lVar6 != 0) && (*(long *)(lVar6 + 0x20) != 0)) {
    uVar11 = 0x3d69bf8;
    lVar6 = *(long *)(*(long *)(lVar6 + 0x20) + 0x10);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar7 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_Arcade')*/ uRam0000000003d69bf8,0);
    unaff_x22 = 0x3d69bf8;
    if (lVar6 != 0) {
      uVar7 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar6,uVar7,uRam0000000003d57260);
      lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d40fb0);
      if (((lVar6 != 0) && (unaff_x22 = uVar11, *(long *)(lVar6 + 0x90) != 0)) &&
         (lVar6 = *(long *)(*(long *)(lVar6 + 0x90) + 0x20), lVar6 != 0)) {
        /*Atlas.Audio.MusicManager$$PlayFrontEndMusic*/ func_0x0149d1c8(lVar6,uVar7,0);
        lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d40fa8);
        if (lVar6 != 0) {
          *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(lVar6 + 0x28);
          return lVar6;
        }
      }
    }
  }
  uVar11 = func_0x00f78af4();
  puStack_38 = &Atlas_UI_Screens_ArcadeMapSelectScreen__OnStartEnter;
  pppppuStack_40 = (undefined8 *****)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4776 & 1) == 0) {
    func_0x00f78a20(0x3d40fa0);
    bRam0000000003eb4776 = 1;
  }
  lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar11,uRam0000000003d40fa0);
  if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x98), lVar6 != 0)) {
    if (pcRam0000000003ec2fc0 == (code *)0x0) {
      pcRam0000000003ec2fc0 =
           (code *)func_0x00f789d4("UnityEngine.CanvasGroup::set_alpha(System.Single)");
    }
                    /* WARNING: Could not recover jumptable at 0x032f4548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar6 = (*pcRam0000000003ec2fc0)(0x3f800000,lVar6);
    return lVar6;
  }
  lVar6 = func_0x00f78af4();
  uStack_88 = 0x3d40fa0;
  uStack_80 = 0x3eb4000;
  puStack_68 = &Atlas_UI_Screens_ArcadeMapSelectScreen__OnBeforeEnterCoroutine;
  uVar7 = 0x3d268c0;
  uStack_90 = unaff_x22;
  uStack_78 = uVar11;
  ppppppuStack_70 = &pppppuStack_40;
  if ((bRam0000000003eb4777 & 1) == 0) {
    func_0x00f78a20(0x3d268c0);
    bRam0000000003eb4777 = 1;
  }
  lVar8 = func_0x00f78aec(/*Atlas.UI.Screens.ArcadeMapSelectScreen.<OnBeforeEnterCoroutine>d__33_TypeInfo*/ uRam0000000003d268c0);
  /*Atlas.UI.Screens.ArcadeMapSelectScreen.<OnBeforeEnterCoroutine>d__33$$.ctor*/ func_0x01534094(lVar8,0,0);
  if (lVar8 != 0) {
    *(long *)(lVar8 + 0x20) = lVar6;
    return lVar8;
  }
  lVar9 = func_0x00f78af4();
  puVar3 = &uStack_c0;
  uStack_b8 = 0x3d268c0;
  puStack_98 = &Atlas_UI_Screens_ArcadeMapSelectScreen__OnAfterEnter;
  pppppppuVar15 = &pppppppuStack_a0;
  lVar10 = 0x3eb4000;
  uStack_c0 = unaff_x22;
  lStack_b0 = lVar8;
  lStack_a8 = lVar6;
  pppppppuStack_a0 = &ppppppuStack_70;
  if ((bRam0000000003eb4778 & 1) == 0) {
    func_0x00f78a20(0x3d2c690);
    func_0x00f78a20(0x3d57948);
    bRam0000000003eb4778 = 1;
  }
  if ((*(long *)(lVar9 + 0xa8) == 0) ||
     (lVar6 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(*(long *)(lVar9 + 0xa8),uRam0000000003d57948), lVar6 == 0)) {
    puVar16 = &Atlas_UI_Screens_ArcadeMapSelectScreen__AnimateMapPanels;
    lVar6 = func_0x00f78af4();
  }
  else {
    /*Atlas.UI.UIAtlasButton$$SelectButton*/ func_0x01514808(lVar6,0,0,0,0);
    /*Atlas.UI.UIAtlasButton$$PressButton*/ func_0x01514bcc(lVar6,0,0,0);
    /*Atlas.UI.Screens.AtlasScreen<SettingsScreenBehaviour, SettingsScreen.TransitionData>$$SelectComponent*/ func_0x01cb5640(lVar9,lVar6,uRam0000000003d2c690);
    puVar3 = &uStack_90;
    lVar6 = lVar9;
    lVar9 = lStack_a8;
    lVar10 = lStack_b0;
    uVar7 = uStack_b8;
    unaff_x22 = uStack_c0;
    pppppppuVar15 = pppppppuStack_a0;
    puVar16 = puStack_98;
  }
  *(undefined8 *)((long)puVar3 + -0x80) = unaff_d11;
  *(undefined8 *)((long)puVar3 + -0x78) = unaff_d10;
  *(undefined8 *)((long)puVar3 + -0x70) = unaff_d9;
  *(undefined8 *)((long)puVar3 + -0x68) = unaff_d8;
  *(undefined8 *)((long)puVar3 + -0x60) = unaff_x28;
  *(undefined8 *)((long)puVar3 + -0x58) = unaff_x27;
  *(undefined8 *)((long)puVar3 + -0x50) = unaff_x26;
  *(undefined8 *)((long)puVar3 + -0x48) = unaff_x25;
  *(undefined8 *)((long)puVar3 + -0x40) = unaff_x24;
  *(undefined8 *)((long)puVar3 + -0x38) = unaff_x23;
  *(undefined8 *)((long)puVar3 + -0x30) = unaff_x22;
  *(undefined8 *)((long)puVar3 + -0x28) = uVar7;
  *(long *)((long)puVar3 + -0x20) = lVar10;
  *(long *)((long)puVar3 + -0x18) = lVar9;
  *(undefined8 ********)((long)puVar3 + -0x10) = pppppppuVar15;
  *(undefined **)((long)puVar3 + -8) = puVar16;
  lVar8 = lVar6;
  if ((bRam0000000003eb477e & 1) == 0) {
    func_0x00f78a20(0x3d2f2d8);
    func_0x00f78a20(0x3d2de50);
    func_0x00f78a20(0x3d2e270);
    func_0x00f78a20(0x3d3b140);
    func_0x00f78a20(0x3d3b148);
    func_0x00f78a20(0x3d40fa0);
    lVar8 = func_0x00f78a20(0x3d42d20);
    bRam0000000003eb477e = 1;
  }
  fVar2 = _UNK_033f8140;
  fVar1 = _UNK_033f813c;
  lVar9 = *(long *)(lVar6 + 0x100);
  if (lVar9 != 0) {
    uVar14 = 0;
    bVar12 = false;
    *(undefined4 *)((long)puVar3 + -0xac) = 0;
    *(undefined8 *)((long)puVar3 + -0xa8) = 0;
    fVar17 = 0.0;
    do {
      if ((long)(int)*(uint *)(lVar9 + 0x18) <= (long)uVar14) goto code_r0x014510f8;
      if (*(uint *)(lVar9 + 0x18) <= uVar14) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0x10) + uVar14 * 8 + 0x20);
      lVar8 = *(long *)(lVar6 + 0x110);
      *(undefined8 *)((long)puVar3 + -0x90) = 0;
      *(undefined8 *)((long)puVar3 + -0x88) = 0;
      /*System.ValueTuple<Type, int>$$.ctor*/ func_0x01c685a4((undefined1 *)((long)puVar3 + -0x90),lVar9,0,uRam0000000003d42d20);
      if (lVar8 == 0) break;
      iVar4 = /*System.Collections.Generic.Dictionary<ValueTuple<object, int>, bool>$$get_Item*/ func_0x01e26a58(lVar8,*(undefined8 *)((long)puVar3 + -0x90),
                              *(undefined8 *)((long)puVar3 + -0x88),uRam0000000003d2de50);
      lVar8 = *(long *)(lVar6 + 0x110);
      *(undefined8 *)((long)puVar3 + -0xa0) = 0;
      *(undefined8 *)((long)puVar3 + -0x98) = 0;
      /*System.ValueTuple<Type, int>$$.ctor*/ func_0x01c685a4((undefined1 *)((long)puVar3 + -0xa0),lVar9,1,uRam0000000003d42d20);
      if (lVar8 == 0) break;
      uVar5 = /*System.Collections.Generic.Dictionary<ValueTuple<object, int>, bool>$$get_Item*/ func_0x01e26a58(lVar8,*(undefined8 *)((long)puVar3 + -0xa0),
                              *(undefined8 *)((long)puVar3 + -0x98),uRam0000000003d2de50);
      if (iVar4 == 0) {
        if (uVar5 != 0) goto code_r0x01450fac;
      }
      else {
        if (((lVar9 == 0) || (*(long *)(lVar6 + 0xe0) == 0)) ||
           (lVar8 = /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$get_Item*/ func_0x01e3bfc0(*(long *)(lVar6 + 0xe0),*(undefined8 *)(lVar9 + 0x18),
                                    uRam0000000003d2e270), lVar8 == 0)) break;
        if (*(int *)(lVar8 + 0x18) == 0) goto code_r0x014511bc;
        if (*(long *)(lVar8 + 0x20) == 0) break;
        uVar11 = /*Atlas.UI.ArcadeEventMetagameData$$GetCurrentMedal*/ func_0x0144ec24();
        if ((*(long *)(lVar6 + 0x108) == 0) ||
           (lVar8 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(*(long *)(lVar6 + 0x108),lVar9,uRam0000000003d2f2d8), lVar8 == 0
           )) break;
        /*Atlas.UI.UIArcadePanelBehavior$$DoMedalAnimation*/ func_0x01512eb8(fVar17,lVar8,0,uVar11,0);
        iVar13 = (int)uVar11;
        if (iVar13 == 1) {
          *(undefined4 *)((long)puVar3 + -0xa4) = 1;
code_r0x01450fa8:
          if ((uVar5 & 1) == 0) goto code_r0x01451040;
code_r0x01450fac:
          if (((lVar9 == 0) || (*(long *)(lVar6 + 0xe0) == 0)) ||
             (lVar8 = /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$get_Item*/ func_0x01e3bfc0(*(long *)(lVar6 + 0xe0),*(undefined8 *)(lVar9 + 0x18),
                                      uRam0000000003d2e270), lVar8 == 0)) break;
          if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) {
code_r0x014511bc:
            uVar11 = func_0x00f78b24();
            func_0x00f78ac0(uVar11,0);
            return 1;
          }
          if (*(long *)(lVar8 + 0x28) == 0) break;
          uVar11 = /*Atlas.UI.ArcadeEventMetagameData$$GetCurrentMedal*/ func_0x0144ec24();
          if ((*(long *)(lVar6 + 0x108) == 0) ||
             (lVar8 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(*(long *)(lVar6 + 0x108),lVar9,uRam0000000003d2f2d8),
             lVar8 == 0)) break;
          /*Atlas.UI.UIArcadePanelBehavior$$DoMedalAnimation*/ func_0x01512eb8(fVar17 + fVar1,lVar8,1,uVar11,0);
          iVar4 = (int)uVar11;
          if (iVar4 == 1) {
            *(undefined4 *)((long)puVar3 + -0xa4) = 1;
          }
          else if (iVar4 == 2) {
            *(undefined4 *)((long)puVar3 + -0xa8) = 1;
          }
          else if (iVar4 == 3) {
            *(undefined4 *)((long)puVar3 + -0xac) = 1;
          }
code_r0x0145105c:
          if ((*(long *)(lVar6 + 0x108) == 0) ||
             (lVar8 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(*(long *)(lVar6 + 0x108),lVar9,uRam0000000003d2f2d8),
             lVar8 == 0)) break;
          /*Atlas.UI.UIArcadePanelBehavior$$DoMedalPanelAnimation*/ func_0x01513028(fVar17,lVar8,0);
        }
        else {
          if (iVar13 == 2) {
            *(undefined4 *)((long)puVar3 + -0xa8) = 1;
          }
          else {
            if (iVar13 != 3) goto code_r0x01450fa8;
            *(undefined4 *)((long)puVar3 + -0xac) = 1;
          }
          if ((uVar5 & 1) != 0) goto code_r0x01450fac;
code_r0x01451040:
          if (iVar4 != 0) goto code_r0x0145105c;
        }
        bVar12 = true;
      }
      lVar8 = /*Atlas.UI.Screens.ArcadeMapSelectScreen$$HasGoldMedal*/ func_0x0145279c(lVar6,lVar9,0);
      if (((int)lVar8 == 0) || (lVar8 = /*Atlas.UI.Screens.ArcadeMapSelectScreen$$HasGoldMedal*/ func_0x0145279c(lVar6,lVar9,1), (int)lVar8 == 0)) {
        if (bVar12) goto code_r0x014510d8;
        bVar12 = false;
      }
      else {
        if ((*(long *)(lVar6 + 0x108) == 0) ||
           (lVar8 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(*(long *)(lVar6 + 0x108),lVar9,uRam0000000003d2f2d8), lVar8 == 0
           )) break;
        lVar8 = /*Atlas.UI.UIArcadePanelBehavior$$DoCompletedAnimation*/ func_0x01512e08(fVar17,lVar8,0);
code_r0x014510d8:
        fVar17 = fVar17 + fVar2;
        bVar12 = true;
      }
      uVar14 = uVar14 + 1;
      lVar9 = *(long *)(lVar6 + 0x100);
      if (lVar9 == 0) break;
    } while( true );
  }
code_r0x014510f4:
  lVar8 = func_0x00f78af4();
code_r0x014510f8:
  if ((*(uint *)((long)puVar3 + -0xa4) & 1) != 0) {
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d40fa0);
    if ((lVar8 == 0) || (*(long *)(lVar8 + 0xb8) == 0)) goto code_r0x014510f4;
    lVar8 = /*Atlas.UI.UIArcadeSingleMedalBehaviour$$DoMedalAnimation*/ func_0x01513db0(0,*(long *)(lVar8 + 0xb8),0);
  }
  if ((*(uint *)((long)puVar3 + -0xa8) & 1) != 0) {
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d40fa0);
    if ((lVar8 == 0) || (*(long *)(lVar8 + 0xb0) == 0)) goto code_r0x014510f4;
    lVar8 = /*Atlas.UI.UIArcadeSingleMedalBehaviour$$DoMedalAnimation*/ func_0x01513db0(0,*(long *)(lVar8 + 0xb0),0);
  }
  if ((*(uint *)((long)puVar3 + -0xac) & 1) == 0) {
    return lVar8;
  }
  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d40fa0);
  if ((lVar8 != 0) && (*(long *)(lVar8 + 0xa8) != 0)) {
    lVar6 = /*Atlas.UI.UIArcadeSingleMedalBehaviour$$DoMedalAnimation*/ func_0x01513db0(0,*(long *)(lVar8 + 0xa8),0);
    return lVar6;
  }
  goto code_r0x014510f4;
}



// ============================================================
// RVA: 0x1450bfc | Atlas.UI.Screens.ArcadeMapSelectScreen.OnStartEnter
// ============================================================

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_UI_Screens_ArcadeMapSelectScreen__OnStartEnter(undefined8 param_1)

{
  float fVar1;
  float fVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 unaff_x22;
  bool bVar10;
  int iVar11;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  ulong uVar12;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar13;
  undefined *puVar14;
  float fVar15;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 *******pppppppuStack_70;
  undefined *puStack_68;
  undefined8 ******ppppppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4776 & 1) == 0) {
    func_0x00f78a20(0x3d40fa0);
    bRam0000000003eb4776 = 1;
  }
  lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fa0);
  if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x98), lVar6 != 0)) {
    if (pcRam0000000003ec2fc0 == (code *)0x0) {
      pcRam0000000003ec2fc0 =
           (code *)func_0x00f789d4("UnityEngine.CanvasGroup::set_alpha(System.Single)");
    }
                    /* WARNING: Could not recover jumptable at 0x032f4548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar6 = (*pcRam0000000003ec2fc0)(0x3f800000,lVar6);
    return lVar6;
  }
  lVar6 = func_0x00f78af4();
  puStack_38 = &Atlas_UI_Screens_ArcadeMapSelectScreen__OnBeforeEnterCoroutine;
  ppppppuStack_40 = (undefined8 ******)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4777 & 1) == 0) {
    func_0x00f78a20(0x3d268c0);
    bRam0000000003eb4777 = 1;
  }
  lVar7 = func_0x00f78aec(/*Atlas.UI.Screens.ArcadeMapSelectScreen.<OnBeforeEnterCoroutine>d__33_TypeInfo*/ uRam0000000003d268c0);
  /*Atlas.UI.Screens.ArcadeMapSelectScreen.<OnBeforeEnterCoroutine>d__33$$.ctor*/ func_0x01534094(lVar7,0,0);
  if (lVar7 != 0) {
    *(long *)(lVar7 + 0x20) = lVar6;
    return lVar7;
  }
  lVar7 = func_0x00f78af4();
  puVar3 = &stack0xffffffffffffff70;
  puStack_68 = &Atlas_UI_Screens_ArcadeMapSelectScreen__OnAfterEnter;
  pppppppuVar13 = &pppppppuStack_70;
  uVar9 = 0x3eb4000;
  pppppppuStack_70 = &ppppppuStack_40;
  if ((bRam0000000003eb4778 & 1) == 0) {
    func_0x00f78a20(0x3d2c690);
    func_0x00f78a20(0x3d57948);
    bRam0000000003eb4778 = 1;
  }
  if ((*(long *)(lVar7 + 0xa8) == 0) ||
     (lVar8 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(*(long *)(lVar7 + 0xa8),uRam0000000003d57948), lVar8 == 0)) {
    puVar14 = &Atlas_UI_Screens_ArcadeMapSelectScreen__AnimateMapPanels;
    lVar8 = func_0x00f78af4();
  }
  else {
    /*Atlas.UI.UIAtlasButton$$SelectButton*/ func_0x01514808(lVar8,0,0,0,0);
    /*Atlas.UI.UIAtlasButton$$PressButton*/ func_0x01514bcc(lVar8,0,0,0);
    /*Atlas.UI.Screens.AtlasScreen<SettingsScreenBehaviour, SettingsScreen.TransitionData>$$SelectComponent*/ func_0x01cb5640(lVar7,lVar8,uRam0000000003d2c690);
    puVar3 = &stack0xffffffffffffffa0;
    uVar9 = 0;
    lVar8 = lVar7;
    lVar7 = lVar6;
    pppppppuVar13 = pppppppuStack_70;
    puVar14 = puStack_68;
  }
  *(undefined8 *)(puVar3 + -0x80) = unaff_d11;
  *(undefined8 *)(puVar3 + -0x78) = unaff_d10;
  *(undefined8 *)(puVar3 + -0x70) = unaff_d9;
  *(undefined8 *)(puVar3 + -0x68) = unaff_d8;
  *(undefined8 *)(puVar3 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar3 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar3 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar3 + -0x28) = 0x3d268c0;
  *(undefined8 *)(puVar3 + -0x20) = uVar9;
  *(long *)(puVar3 + -0x18) = lVar7;
  *(undefined8 ********)(puVar3 + -0x10) = pppppppuVar13;
  *(undefined **)(puVar3 + -8) = puVar14;
  lVar6 = lVar8;
  if ((bRam0000000003eb477e & 1) == 0) {
    func_0x00f78a20(0x3d2f2d8);
    func_0x00f78a20(0x3d2de50);
    func_0x00f78a20(0x3d2e270);
    func_0x00f78a20(0x3d3b140);
    func_0x00f78a20(0x3d3b148);
    func_0x00f78a20(0x3d40fa0);
    lVar6 = func_0x00f78a20(0x3d42d20);
    bRam0000000003eb477e = 1;
  }
  fVar2 = _UNK_033f8140;
  fVar1 = _UNK_033f813c;
  lVar7 = *(long *)(lVar8 + 0x100);
  if (lVar7 != 0) {
    uVar12 = 0;
    bVar10 = false;
    *(undefined4 *)(puVar3 + -0xac) = 0;
    *(undefined8 *)(puVar3 + -0xa8) = 0;
    fVar15 = 0.0;
    do {
      if ((long)(int)*(uint *)(lVar7 + 0x18) <= (long)uVar12) goto code_r0x014510f8;
      if (*(uint *)(lVar7 + 0x18) <= uVar12) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + uVar12 * 8 + 0x20);
      lVar6 = *(long *)(lVar8 + 0x110);
      *(undefined8 *)(puVar3 + -0x90) = 0;
      *(undefined8 *)(puVar3 + -0x88) = 0;
      /*System.ValueTuple<Type, int>$$.ctor*/ func_0x01c685a4(puVar3 + -0x90,lVar7,0,uRam0000000003d42d20);
      if (lVar6 == 0) break;
      iVar4 = /*System.Collections.Generic.Dictionary<ValueTuple<object, int>, bool>$$get_Item*/ func_0x01e26a58(lVar6,*(undefined8 *)(puVar3 + -0x90),*(undefined8 *)(puVar3 + -0x88),
                              uRam0000000003d2de50);
      lVar6 = *(long *)(lVar8 + 0x110);
      *(undefined8 *)(puVar3 + -0xa0) = 0;
      *(undefined8 *)(puVar3 + -0x98) = 0;
      /*System.ValueTuple<Type, int>$$.ctor*/ func_0x01c685a4(puVar3 + -0xa0,lVar7,1,uRam0000000003d42d20);
      if (lVar6 == 0) break;
      uVar5 = /*System.Collections.Generic.Dictionary<ValueTuple<object, int>, bool>$$get_Item*/ func_0x01e26a58(lVar6,*(undefined8 *)(puVar3 + -0xa0),*(undefined8 *)(puVar3 + -0x98),
                              uRam0000000003d2de50);
      if (iVar4 == 0) {
        if (uVar5 != 0) goto code_r0x01450fac;
      }
      else {
        if (((lVar7 == 0) || (*(long *)(lVar8 + 0xe0) == 0)) ||
           (lVar6 = /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$get_Item*/ func_0x01e3bfc0(*(long *)(lVar8 + 0xe0),*(undefined8 *)(lVar7 + 0x18),
                                    uRam0000000003d2e270), lVar6 == 0)) break;
        if (*(int *)(lVar6 + 0x18) == 0) goto code_r0x014511bc;
        if (*(long *)(lVar6 + 0x20) == 0) break;
        uVar9 = /*Atlas.UI.ArcadeEventMetagameData$$GetCurrentMedal*/ func_0x0144ec24();
        if ((*(long *)(lVar8 + 0x108) == 0) ||
           (lVar6 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(*(long *)(lVar8 + 0x108),lVar7,uRam0000000003d2f2d8), lVar6 == 0
           )) break;
        /*Atlas.UI.UIArcadePanelBehavior$$DoMedalAnimation*/ func_0x01512eb8(fVar15,lVar6,0,uVar9,0);
        iVar11 = (int)uVar9;
        if (iVar11 == 1) {
          *(undefined4 *)(puVar3 + -0xa4) = 1;
code_r0x01450fa8:
          if ((uVar5 & 1) == 0) goto code_r0x01451040;
code_r0x01450fac:
          if (((lVar7 == 0) || (*(long *)(lVar8 + 0xe0) == 0)) ||
             (lVar6 = /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$get_Item*/ func_0x01e3bfc0(*(long *)(lVar8 + 0xe0),*(undefined8 *)(lVar7 + 0x18),
                                      uRam0000000003d2e270), lVar6 == 0)) break;
          if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) == 0) {
code_r0x014511bc:
            uVar9 = func_0x00f78b24();
            func_0x00f78ac0(uVar9,0);
            return 1;
          }
          if (*(long *)(lVar6 + 0x28) == 0) break;
          uVar9 = /*Atlas.UI.ArcadeEventMetagameData$$GetCurrentMedal*/ func_0x0144ec24();
          if ((*(long *)(lVar8 + 0x108) == 0) ||
             (lVar6 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(*(long *)(lVar8 + 0x108),lVar7,uRam0000000003d2f2d8),
             lVar6 == 0)) break;
          /*Atlas.UI.UIArcadePanelBehavior$$DoMedalAnimation*/ func_0x01512eb8(fVar15 + fVar1,lVar6,1,uVar9,0);
          iVar4 = (int)uVar9;
          if (iVar4 == 1) {
            *(undefined4 *)(puVar3 + -0xa4) = 1;
          }
          else if (iVar4 == 2) {
            *(undefined4 *)(puVar3 + -0xa8) = 1;
          }
          else if (iVar4 == 3) {
            *(undefined4 *)(puVar3 + -0xac) = 1;
          }
code_r0x0145105c:
          if ((*(long *)(lVar8 + 0x108) == 0) ||
             (lVar6 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(*(long *)(lVar8 + 0x108),lVar7,uRam0000000003d2f2d8),
             lVar6 == 0)) break;
          /*Atlas.UI.UIArcadePanelBehavior$$DoMedalPanelAnimation*/ func_0x01513028(fVar15,lVar6,0);
        }
        else {
          if (iVar11 == 2) {
            *(undefined4 *)(puVar3 + -0xa8) = 1;
          }
          else {
            if (iVar11 != 3) goto code_r0x01450fa8;
            *(undefined4 *)(puVar3 + -0xac) = 1;
          }
          if ((uVar5 & 1) != 0) goto code_r0x01450fac;
code_r0x01451040:
          if (iVar4 != 0) goto code_r0x0145105c;
        }
        bVar10 = true;
      }
      lVar6 = /*Atlas.UI.Screens.ArcadeMapSelectScreen$$HasGoldMedal*/ func_0x0145279c(lVar8,lVar7,0);
      if (((int)lVar6 == 0) || (lVar6 = /*Atlas.UI.Screens.ArcadeMapSelectScreen$$HasGoldMedal*/ func_0x0145279c(lVar8,lVar7,1), (int)lVar6 == 0)) {
        if (bVar10) goto code_r0x014510d8;
        bVar10 = false;
      }
      else {
        if ((*(long *)(lVar8 + 0x108) == 0) ||
           (lVar6 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(*(long *)(lVar8 + 0x108),lVar7,uRam0000000003d2f2d8), lVar6 == 0
           )) break;
        lVar6 = /*Atlas.UI.UIArcadePanelBehavior$$DoCompletedAnimation*/ func_0x01512e08(fVar15,lVar6,0);
code_r0x014510d8:
        fVar15 = fVar15 + fVar2;
        bVar10 = true;
      }
      uVar12 = uVar12 + 1;
      lVar7 = *(long *)(lVar8 + 0x100);
      if (lVar7 == 0) break;
    } while( true );
  }
code_r0x014510f4:
  lVar6 = func_0x00f78af4();
code_r0x014510f8:
  if ((*(uint *)(puVar3 + -0xa4) & 1) != 0) {
    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d40fa0);
    if ((lVar6 == 0) || (*(long *)(lVar6 + 0xb8) == 0)) goto code_r0x014510f4;
    lVar6 = /*Atlas.UI.UIArcadeSingleMedalBehaviour$$DoMedalAnimation*/ func_0x01513db0(0,*(long *)(lVar6 + 0xb8),0);
  }
  if ((*(uint *)(puVar3 + -0xa8) & 1) != 0) {
    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d40fa0);
    if ((lVar6 == 0) || (*(long *)(lVar6 + 0xb0) == 0)) goto code_r0x014510f4;
    lVar6 = /*Atlas.UI.UIArcadeSingleMedalBehaviour$$DoMedalAnimation*/ func_0x01513db0(0,*(long *)(lVar6 + 0xb0),0);
  }
  if ((*(uint *)(puVar3 + -0xac) & 1) == 0) {
    return lVar6;
  }
  lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d40fa0);
  if ((lVar6 != 0) && (*(long *)(lVar6 + 0xa8) != 0)) {
    lVar6 = /*Atlas.UI.UIArcadeSingleMedalBehaviour$$DoMedalAnimation*/ func_0x01513db0(0,*(long *)(lVar6 + 0xa8),0);
    return lVar6;
  }
  goto code_r0x014510f4;
}



// ============================================================
// RVA: 0x1450c6c | Atlas.UI.Screens.ArcadeMapSelectScreen.OnBeforeEnterCoroutine
// ============================================================

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_UI_Screens_ArcadeMapSelectScreen__OnBeforeEnterCoroutine(long param_1)

{
  float fVar1;
  float fVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 unaff_x22;
  bool bVar10;
  int iVar11;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  ulong uVar12;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar13;
  undefined *puVar14;
  float fVar15;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 *******pppppppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4777 & 1) == 0) {
    func_0x00f78a20(0x3d268c0);
    bRam0000000003eb4777 = 1;
  }
  lVar6 = func_0x00f78aec(/*Atlas.UI.Screens.ArcadeMapSelectScreen.<OnBeforeEnterCoroutine>d__33_TypeInfo*/ uRam0000000003d268c0);
  /*Atlas.UI.Screens.ArcadeMapSelectScreen.<OnBeforeEnterCoroutine>d__33$$.ctor*/ func_0x01534094(lVar6,0,0);
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x20) = param_1;
    return lVar6;
  }
  lVar6 = func_0x00f78af4();
  puVar3 = &stack0xffffffffffffffa0;
  puStack_38 = &Atlas_UI_Screens_ArcadeMapSelectScreen__OnAfterEnter;
  pppppppuVar13 = &pppppppuStack_40;
  uVar8 = 0x3eb4000;
  pppppppuStack_40 = (undefined8 *******)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4778 & 1) == 0) {
    func_0x00f78a20(0x3d2c690);
    func_0x00f78a20(0x3d57948);
    bRam0000000003eb4778 = 1;
  }
  if ((*(long *)(lVar6 + 0xa8) == 0) ||
     (lVar7 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(*(long *)(lVar6 + 0xa8),uRam0000000003d57948), lVar7 == 0)) {
    puVar14 = &Atlas_UI_Screens_ArcadeMapSelectScreen__AnimateMapPanels;
    lVar7 = func_0x00f78af4();
  }
  else {
    /*Atlas.UI.UIAtlasButton$$SelectButton*/ func_0x01514808(lVar7,0,0,0,0);
    /*Atlas.UI.UIAtlasButton$$PressButton*/ func_0x01514bcc(lVar7,0,0,0);
    /*Atlas.UI.Screens.AtlasScreen<SettingsScreenBehaviour, SettingsScreen.TransitionData>$$SelectComponent*/ func_0x01cb5640(lVar6,lVar7,uRam0000000003d2c690);
    puVar3 = &stack0xffffffffffffffd0;
    uVar8 = 0;
    lVar7 = lVar6;
    lVar6 = param_1;
    pppppppuVar13 = pppppppuStack_40;
    puVar14 = puStack_38;
  }
  *(undefined8 *)(puVar3 + -0x80) = unaff_d11;
  *(undefined8 *)(puVar3 + -0x78) = unaff_d10;
  *(undefined8 *)(puVar3 + -0x70) = unaff_d9;
  *(undefined8 *)(puVar3 + -0x68) = unaff_d8;
  *(undefined8 *)(puVar3 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar3 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar3 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar3 + -0x28) = 0x3d268c0;
  *(undefined8 *)(puVar3 + -0x20) = uVar8;
  *(long *)(puVar3 + -0x18) = lVar6;
  *(undefined8 ********)(puVar3 + -0x10) = pppppppuVar13;
  *(undefined **)(puVar3 + -8) = puVar14;
  lVar6 = lVar7;
  if ((bRam0000000003eb477e & 1) == 0) {
    func_0x00f78a20(0x3d2f2d8);
    func_0x00f78a20(0x3d2de50);
    func_0x00f78a20(0x3d2e270);
    func_0x00f78a20(0x3d3b140);
    func_0x00f78a20(0x3d3b148);
    func_0x00f78a20(0x3d40fa0);
    lVar6 = func_0x00f78a20(0x3d42d20);
    bRam0000000003eb477e = 1;
  }
  fVar2 = _UNK_033f8140;
  fVar1 = _UNK_033f813c;
  lVar9 = *(long *)(lVar7 + 0x100);
  if (lVar9 != 0) {
    uVar12 = 0;
    bVar10 = false;
    *(undefined4 *)(puVar3 + -0xac) = 0;
    *(undefined8 *)(puVar3 + -0xa8) = 0;
    fVar15 = 0.0;
    do {
      if ((long)(int)*(uint *)(lVar9 + 0x18) <= (long)uVar12) goto code_r0x014510f8;
      if (*(uint *)(lVar9 + 0x18) <= uVar12) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0x10) + uVar12 * 8 + 0x20);
      lVar6 = *(long *)(lVar7 + 0x110);
      *(undefined8 *)(puVar3 + -0x90) = 0;
      *(undefined8 *)(puVar3 + -0x88) = 0;
      /*System.ValueTuple<Type, int>$$.ctor*/ func_0x01c685a4(puVar3 + -0x90,lVar9,0,uRam0000000003d42d20);
      if (lVar6 == 0) break;
      iVar4 = /*System.Collections.Generic.Dictionary<ValueTuple<object, int>, bool>$$get_Item*/ func_0x01e26a58(lVar6,*(undefined8 *)(puVar3 + -0x90),*(undefined8 *)(puVar3 + -0x88),
                              uRam0000000003d2de50);
      lVar6 = *(long *)(lVar7 + 0x110);
      *(undefined8 *)(puVar3 + -0xa0) = 0;
      *(undefined8 *)(puVar3 + -0x98) = 0;
      /*System.ValueTuple<Type, int>$$.ctor*/ func_0x01c685a4(puVar3 + -0xa0,lVar9,1,uRam0000000003d42d20);
      if (lVar6 == 0) break;
      uVar5 = /*System.Collections.Generic.Dictionary<ValueTuple<object, int>, bool>$$get_Item*/ func_0x01e26a58(lVar6,*(undefined8 *)(puVar3 + -0xa0),*(undefined8 *)(puVar3 + -0x98),
                              uRam0000000003d2de50);
      if (iVar4 == 0) {
        if (uVar5 != 0) goto code_r0x01450fac;
      }
      else {
        if (((lVar9 == 0) || (*(long *)(lVar7 + 0xe0) == 0)) ||
           (lVar6 = /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$get_Item*/ func_0x01e3bfc0(*(long *)(lVar7 + 0xe0),*(undefined8 *)(lVar9 + 0x18),
                                    uRam0000000003d2e270), lVar6 == 0)) break;
        if (*(int *)(lVar6 + 0x18) == 0) goto code_r0x014511bc;
        if (*(long *)(lVar6 + 0x20) == 0) break;
        uVar8 = /*Atlas.UI.ArcadeEventMetagameData$$GetCurrentMedal*/ func_0x0144ec24();
        if ((*(long *)(lVar7 + 0x108) == 0) ||
           (lVar6 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(*(long *)(lVar7 + 0x108),lVar9,uRam0000000003d2f2d8), lVar6 == 0
           )) break;
        /*Atlas.UI.UIArcadePanelBehavior$$DoMedalAnimation*/ func_0x01512eb8(fVar15,lVar6,0,uVar8,0);
        iVar11 = (int)uVar8;
        if (iVar11 == 1) {
          *(undefined4 *)(puVar3 + -0xa4) = 1;
code_r0x01450fa8:
          if ((uVar5 & 1) == 0) goto code_r0x01451040;
code_r0x01450fac:
          if (((lVar9 == 0) || (*(long *)(lVar7 + 0xe0) == 0)) ||
             (lVar6 = /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$get_Item*/ func_0x01e3bfc0(*(long *)(lVar7 + 0xe0),*(undefined8 *)(lVar9 + 0x18),
                                      uRam0000000003d2e270), lVar6 == 0)) break;
          if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) == 0) {
code_r0x014511bc:
            uVar8 = func_0x00f78b24();
            func_0x00f78ac0(uVar8,0);
            return 1;
          }
          if (*(long *)(lVar6 + 0x28) == 0) break;
          uVar8 = /*Atlas.UI.ArcadeEventMetagameData$$GetCurrentMedal*/ func_0x0144ec24();
          if ((*(long *)(lVar7 + 0x108) == 0) ||
             (lVar6 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(*(long *)(lVar7 + 0x108),lVar9,uRam0000000003d2f2d8),
             lVar6 == 0)) break;
          /*Atlas.UI.UIArcadePanelBehavior$$DoMedalAnimation*/ func_0x01512eb8(fVar15 + fVar1,lVar6,1,uVar8,0);
          iVar4 = (int)uVar8;
          if (iVar4 == 1) {
            *(undefined4 *)(puVar3 + -0xa4) = 1;
          }
          else if (iVar4 == 2) {
            *(undefined4 *)(puVar3 + -0xa8) = 1;
          }
          else if (iVar4 == 3) {
            *(undefined4 *)(puVar3 + -0xac) = 1;
          }
code_r0x0145105c:
          if ((*(long *)(lVar7 + 0x108) == 0) ||
             (lVar6 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(*(long *)(lVar7 + 0x108),lVar9,uRam0000000003d2f2d8),
             lVar6 == 0)) break;
          /*Atlas.UI.UIArcadePanelBehavior$$DoMedalPanelAnimation*/ func_0x01513028(fVar15,lVar6,0);
        }
        else {
          if (iVar11 == 2) {
            *(undefined4 *)(puVar3 + -0xa8) = 1;
          }
          else {
            if (iVar11 != 3) goto code_r0x01450fa8;
            *(undefined4 *)(puVar3 + -0xac) = 1;
          }
          if ((uVar5 & 1) != 0) goto code_r0x01450fac;
code_r0x01451040:
          if (iVar4 != 0) goto code_r0x0145105c;
        }
        bVar10 = true;
      }
      lVar6 = /*Atlas.UI.Screens.ArcadeMapSelectScreen$$HasGoldMedal*/ func_0x0145279c(lVar7,lVar9,0);
      if (((int)lVar6 == 0) || (lVar6 = /*Atlas.UI.Screens.ArcadeMapSelectScreen$$HasGoldMedal*/ func_0x0145279c(lVar7,lVar9,1), (int)lVar6 == 0)) {
        if (bVar10) goto code_r0x014510d8;
        bVar10 = false;
      }
      else {
        if ((*(long *)(lVar7 + 0x108) == 0) ||
           (lVar6 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(*(long *)(lVar7 + 0x108),lVar9,uRam0000000003d2f2d8), lVar6 == 0
           )) break;
        lVar6 = /*Atlas.UI.UIArcadePanelBehavior$$DoCompletedAnimation*/ func_0x01512e08(fVar15,lVar6,0);
code_r0x014510d8:
        fVar15 = fVar15 + fVar2;
        bVar10 = true;
      }
      uVar12 = uVar12 + 1;
      lVar9 = *(long *)(lVar7 + 0x100);
      if (lVar9 == 0) break;
    } while( true );
  }
code_r0x014510f4:
  lVar6 = func_0x00f78af4();
code_r0x014510f8:
  if ((*(uint *)(puVar3 + -0xa4) & 1) != 0) {
    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar7,uRam0000000003d40fa0);
    if ((lVar6 == 0) || (*(long *)(lVar6 + 0xb8) == 0)) goto code_r0x014510f4;
    lVar6 = /*Atlas.UI.UIArcadeSingleMedalBehaviour$$DoMedalAnimation*/ func_0x01513db0(0,*(long *)(lVar6 + 0xb8),0);
  }
  if ((*(uint *)(puVar3 + -0xa8) & 1) != 0) {
    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar7,uRam0000000003d40fa0);
    if ((lVar6 == 0) || (*(long *)(lVar6 + 0xb0) == 0)) goto code_r0x014510f4;
    lVar6 = /*Atlas.UI.UIArcadeSingleMedalBehaviour$$DoMedalAnimation*/ func_0x01513db0(0,*(long *)(lVar6 + 0xb0),0);
  }
  if ((*(uint *)(puVar3 + -0xac) & 1) == 0) {
    return lVar6;
  }
  lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar7,uRam0000000003d40fa0);
  if ((lVar6 != 0) && (*(long *)(lVar6 + 0xa8) != 0)) {
    lVar6 = /*Atlas.UI.UIArcadeSingleMedalBehaviour$$DoMedalAnimation*/ func_0x01513db0(0,*(long *)(lVar6 + 0xa8),0);
    return lVar6;
  }
  goto code_r0x014510f4;
}



// ============================================================
// RVA: 0x1450ce0 | Atlas.UI.Screens.ArcadeMapSelectScreen.OnAfterEnter
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_UI_Screens_ArcadeMapSelectScreen__OnAfterEnter(long param_1)

{
  float fVar1;
  float fVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar8;
  long lVar9;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  bool bVar10;
  int iVar11;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  ulong uVar12;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar13;
  undefined *unaff_x30;
  float fVar14;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  
  puVar3 = &stack0xffffffffffffffd0;
  puVar13 = &stack0xfffffffffffffff0;
  uVar8 = 0x3eb4000;
  if ((bRam0000000003eb4778 & 1) == 0) {
    func_0x00f78a20(0x3d2c690);
    func_0x00f78a20(0x3d57948);
    bRam0000000003eb4778 = 1;
  }
  if ((*(long *)(param_1 + 0xa8) == 0) ||
     (lVar6 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(*(long *)(param_1 + 0xa8),uRam0000000003d57948), lVar6 == 0)) {
    unaff_x30 = &Atlas_UI_Screens_ArcadeMapSelectScreen__AnimateMapPanels;
    lVar6 = func_0x00f78af4();
  }
  else {
    /*Atlas.UI.UIAtlasButton$$SelectButton*/ func_0x01514808(lVar6,0,0,0,0);
    /*Atlas.UI.UIAtlasButton$$PressButton*/ func_0x01514bcc(lVar6,0,0,0);
    /*Atlas.UI.Screens.AtlasScreen<SettingsScreenBehaviour, SettingsScreen.TransitionData>$$SelectComponent*/ func_0x01cb5640(param_1,lVar6,uRam0000000003d2c690);
    puVar3 = (undefined1 *)register0x00000008;
    lVar6 = param_1;
    param_1 = unaff_x19;
    uVar8 = unaff_x20;
    puVar13 = unaff_x29;
  }
  *(undefined8 *)(puVar3 + -0x80) = unaff_d11;
  *(undefined8 *)(puVar3 + -0x78) = unaff_d10;
  *(undefined8 *)(puVar3 + -0x70) = unaff_d9;
  *(undefined8 *)(puVar3 + -0x68) = unaff_d8;
  *(undefined8 *)(puVar3 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar3 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar3 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar3 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar3 + -0x20) = uVar8;
  *(long *)(puVar3 + -0x18) = param_1;
  *(undefined1 **)(puVar3 + -0x10) = puVar13;
  *(undefined **)(puVar3 + -8) = unaff_x30;
  lVar7 = lVar6;
  if ((bRam0000000003eb477e & 1) == 0) {
    func_0x00f78a20(0x3d2f2d8);
    func_0x00f78a20(0x3d2de50);
    func_0x00f78a20(0x3d2e270);
    func_0x00f78a20(0x3d3b140);
    func_0x00f78a20(0x3d3b148);
    func_0x00f78a20(0x3d40fa0);
    lVar7 = func_0x00f78a20(0x3d42d20);
    bRam0000000003eb477e = 1;
  }
  fVar2 = _UNK_033f8140;
  fVar1 = _UNK_033f813c;
  lVar9 = *(long *)(lVar6 + 0x100);
  if (lVar9 != 0) {
    uVar12 = 0;
    bVar10 = false;
    *(undefined4 *)(puVar3 + -0xac) = 0;
    *(undefined8 *)(puVar3 + -0xa8) = 0;
    fVar14 = 0.0;
    do {
      if ((long)(int)*(uint *)(lVar9 + 0x18) <= (long)uVar12) goto code_r0x014510f8;
      if (*(uint *)(lVar9 + 0x18) <= uVar12) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0x10) + uVar12 * 8 + 0x20);
      lVar7 = *(long *)(lVar6 + 0x110);
      *(undefined8 *)(puVar3 + -0x90) = 0;
      *(undefined8 *)(puVar3 + -0x88) = 0;
      /*System.ValueTuple<Type, int>$$.ctor*/ func_0x01c685a4(puVar3 + -0x90,lVar9,0,uRam0000000003d42d20);
      if (lVar7 == 0) break;
      iVar4 = /*System.Collections.Generic.Dictionary<ValueTuple<object, int>, bool>$$get_Item*/ func_0x01e26a58(lVar7,*(undefined8 *)(puVar3 + -0x90),*(undefined8 *)(puVar3 + -0x88),
                              uRam0000000003d2de50);
      lVar7 = *(long *)(lVar6 + 0x110);
      *(undefined8 *)(puVar3 + -0xa0) = 0;
      *(undefined8 *)(puVar3 + -0x98) = 0;
      /*System.ValueTuple<Type, int>$$.ctor*/ func_0x01c685a4(puVar3 + -0xa0,lVar9,1,uRam0000000003d42d20);
      if (lVar7 == 0) break;
      uVar5 = /*System.Collections.Generic.Dictionary<ValueTuple<object, int>, bool>$$get_Item*/ func_0x01e26a58(lVar7,*(undefined8 *)(puVar3 + -0xa0),*(undefined8 *)(puVar3 + -0x98),
                              uRam0000000003d2de50);
      if (iVar4 == 0) {
        if (uVar5 != 0) goto code_r0x01450fac;
      }
      else {
        if (((lVar9 == 0) || (*(long *)(lVar6 + 0xe0) == 0)) ||
           (lVar7 = /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$get_Item*/ func_0x01e3bfc0(*(long *)(lVar6 + 0xe0),*(undefined8 *)(lVar9 + 0x18),
                                    uRam0000000003d2e270), lVar7 == 0)) break;
        if (*(int *)(lVar7 + 0x18) == 0) goto code_r0x014511bc;
        if (*(long *)(lVar7 + 0x20) == 0) break;
        uVar8 = /*Atlas.UI.ArcadeEventMetagameData$$GetCurrentMedal*/ func_0x0144ec24();
        if ((*(long *)(lVar6 + 0x108) == 0) ||
           (lVar7 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(*(long *)(lVar6 + 0x108),lVar9,uRam0000000003d2f2d8), lVar7 == 0
           )) break;
        /*Atlas.UI.UIArcadePanelBehavior$$DoMedalAnimation*/ func_0x01512eb8(fVar14,lVar7,0,uVar8,0);
        iVar11 = (int)uVar8;
        if (iVar11 == 1) {
          *(undefined4 *)(puVar3 + -0xa4) = 1;
code_r0x01450fa8:
          if ((uVar5 & 1) == 0) goto code_r0x01451040;
code_r0x01450fac:
          if (((lVar9 == 0) || (*(long *)(lVar6 + 0xe0) == 0)) ||
             (lVar7 = /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$get_Item*/ func_0x01e3bfc0(*(long *)(lVar6 + 0xe0),*(undefined8 *)(lVar9 + 0x18),
                                      uRam0000000003d2e270), lVar7 == 0)) break;
          if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) == 0) {
code_r0x014511bc:
            uVar8 = func_0x00f78b24();
            func_0x00f78ac0(uVar8,0);
            return 1;
          }
          if (*(long *)(lVar7 + 0x28) == 0) break;
          uVar8 = /*Atlas.UI.ArcadeEventMetagameData$$GetCurrentMedal*/ func_0x0144ec24();
          if ((*(long *)(lVar6 + 0x108) == 0) ||
             (lVar7 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(*(long *)(lVar6 + 0x108),lVar9,uRam0000000003d2f2d8),
             lVar7 == 0)) break;
          /*Atlas.UI.UIArcadePanelBehavior$$DoMedalAnimation*/ func_0x01512eb8(fVar14 + fVar1,lVar7,1,uVar8,0);
          iVar4 = (int)uVar8;
          if (iVar4 == 1) {
            *(undefined4 *)(puVar3 + -0xa4) = 1;
          }
          else if (iVar4 == 2) {
            *(undefined4 *)(puVar3 + -0xa8) = 1;
          }
          else if (iVar4 == 3) {
            *(undefined4 *)(puVar3 + -0xac) = 1;
          }
code_r0x0145105c:
          if ((*(long *)(lVar6 + 0x108) == 0) ||
             (lVar7 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(*(long *)(lVar6 + 0x108),lVar9,uRam0000000003d2f2d8),
             lVar7 == 0)) break;
          /*Atlas.UI.UIArcadePanelBehavior$$DoMedalPanelAnimation*/ func_0x01513028(fVar14,lVar7,0);
        }
        else {
          if (iVar11 == 2) {
            *(undefined4 *)(puVar3 + -0xa8) = 1;
          }
          else {
            if (iVar11 != 3) goto code_r0x01450fa8;
            *(undefined4 *)(puVar3 + -0xac) = 1;
          }
          if ((uVar5 & 1) != 0) goto code_r0x01450fac;
code_r0x01451040:
          if (iVar4 != 0) goto code_r0x0145105c;
        }
        bVar10 = true;
      }
      lVar7 = /*Atlas.UI.Screens.ArcadeMapSelectScreen$$HasGoldMedal*/ func_0x0145279c(lVar6,lVar9,0);
      if (((int)lVar7 == 0) || (lVar7 = /*Atlas.UI.Screens.ArcadeMapSelectScreen$$HasGoldMedal*/ func_0x0145279c(lVar6,lVar9,1), (int)lVar7 == 0)) {
        if (bVar10) goto code_r0x014510d8;
        bVar10 = false;
      }
      else {
        if ((*(long *)(lVar6 + 0x108) == 0) ||
           (lVar7 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(*(long *)(lVar6 + 0x108),lVar9,uRam0000000003d2f2d8), lVar7 == 0
           )) break;
        lVar7 = /*Atlas.UI.UIArcadePanelBehavior$$DoCompletedAnimation*/ func_0x01512e08(fVar14,lVar7,0);
code_r0x014510d8:
        fVar14 = fVar14 + fVar2;
        bVar10 = true;
      }
      uVar12 = uVar12 + 1;
      lVar9 = *(long *)(lVar6 + 0x100);
      if (lVar9 == 0) break;
    } while( true );
  }
code_r0x014510f4:
  lVar7 = func_0x00f78af4();
code_r0x014510f8:
  if ((*(uint *)(puVar3 + -0xa4) & 1) != 0) {
    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d40fa0);
    if ((lVar7 == 0) || (*(long *)(lVar7 + 0xb8) == 0)) goto code_r0x014510f4;
    lVar7 = /*Atlas.UI.UIArcadeSingleMedalBehaviour$$DoMedalAnimation*/ func_0x01513db0(0,*(long *)(lVar7 + 0xb8),0);
  }
  if ((*(uint *)(puVar3 + -0xa8) & 1) != 0) {
    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d40fa0);
    if ((lVar7 == 0) || (*(long *)(lVar7 + 0xb0) == 0)) goto code_r0x014510f4;
    lVar7 = /*Atlas.UI.UIArcadeSingleMedalBehaviour$$DoMedalAnimation*/ func_0x01513db0(0,*(long *)(lVar7 + 0xb0),0);
  }
  if ((*(uint *)(puVar3 + -0xac) & 1) == 0) {
    return lVar7;
  }
  lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d40fa0);
  if ((lVar7 != 0) && (*(long *)(lVar7 + 0xa8) != 0)) {
    lVar6 = /*Atlas.UI.UIArcadeSingleMedalBehaviour$$DoMedalAnimation*/ func_0x01513db0(0,*(long *)(lVar7 + 0xa8),0);
    return lVar6;
  }
  goto code_r0x014510f4;
}



// ============================================================
// RVA: 0x1450d98 | Atlas.UI.Screens.ArcadeMapSelectScreen.AnimateMapPanels
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_UI_Screens_ArcadeMapSelectScreen__AnimateMapPanels(long param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  float fVar11;
  uint uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  lVar5 = param_1;
  if ((bRam0000000003eb477e & 1) == 0) {
    func_0x00f78a20(0x3d2f2d8);
    func_0x00f78a20(0x3d2de50);
    func_0x00f78a20(0x3d2e270);
    func_0x00f78a20(0x3d3b140);
    func_0x00f78a20(0x3d3b148);
    func_0x00f78a20(0x3d40fa0);
    lVar5 = func_0x00f78a20(0x3d42d20);
    bRam0000000003eb477e = 1;
  }
  fVar2 = _UNK_033f8140;
  fVar1 = _UNK_033f813c;
  lVar7 = *(long *)(param_1 + 0x100);
  if (lVar7 != 0) {
    uVar10 = 0;
    bVar8 = false;
    uStack_ac = 0;
    uStack_a8 = 0;
    fVar11 = 0.0;
    do {
      if ((long)(int)*(uint *)(lVar7 + 0x18) <= (long)uVar10) goto LAB_014510f8;
      if (*(uint *)(lVar7 + 0x18) <= uVar10) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + uVar10 * 8 + 0x20);
      lVar5 = *(long *)(param_1 + 0x110);
      uStack_90 = 0;
      uStack_88 = 0;
      /*System.ValueTuple<Type, int>$$.ctor*/ func_0x01c685a4(&uStack_90,lVar7,0,uRam0000000003d42d20);
      if (lVar5 == 0) break;
      iVar3 = /*System.Collections.Generic.Dictionary<ValueTuple<object, int>, bool>$$get_Item*/ func_0x01e26a58(lVar5,uStack_90,uStack_88,uRam0000000003d2de50);
      lVar5 = *(long *)(param_1 + 0x110);
      uStack_a0 = 0;
      uStack_98 = 0;
      /*System.ValueTuple<Type, int>$$.ctor*/ func_0x01c685a4(&uStack_a0,lVar7,1,uRam0000000003d42d20);
      if (lVar5 == 0) break;
      uVar4 = /*System.Collections.Generic.Dictionary<ValueTuple<object, int>, bool>$$get_Item*/ func_0x01e26a58(lVar5,uStack_a0,uStack_98,uRam0000000003d2de50);
      if (iVar3 == 0) {
        if (uVar4 != 0) goto LAB_01450fac;
      }
      else {
        if (((lVar7 == 0) || (*(long *)(param_1 + 0xe0) == 0)) ||
           (lVar5 = /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$get_Item*/ func_0x01e3bfc0(*(long *)(param_1 + 0xe0),*(undefined8 *)(lVar7 + 0x18),
                                    uRam0000000003d2e270), lVar5 == 0)) break;
        if (*(int *)(lVar5 + 0x18) == 0) goto LAB_014511bc;
        if (*(long *)(lVar5 + 0x20) == 0) break;
        uVar6 = /*Atlas.UI.ArcadeEventMetagameData$$GetCurrentMedal*/ func_0x0144ec24();
        if ((*(long *)(param_1 + 0x108) == 0) ||
           (lVar5 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(*(long *)(param_1 + 0x108),lVar7,uRam0000000003d2f2d8),
           lVar5 == 0)) break;
        /*Atlas.UI.UIArcadePanelBehavior$$DoMedalAnimation*/ func_0x01512eb8(fVar11,lVar5,0,uVar6,0);
        iVar9 = (int)uVar6;
        if (iVar9 == 1) {
          uStack_a8 = CONCAT44(1,(undefined4)uStack_a8);
LAB_01450fa8:
          if ((uVar4 & 1) == 0) goto LAB_01451040;
LAB_01450fac:
          if (((lVar7 == 0) || (*(long *)(param_1 + 0xe0) == 0)) ||
             (lVar5 = /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$get_Item*/ func_0x01e3bfc0(*(long *)(param_1 + 0xe0),*(undefined8 *)(lVar7 + 0x18),
                                      uRam0000000003d2e270), lVar5 == 0)) break;
          if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) == 0) {
LAB_014511bc:
            uVar6 = func_0x00f78b24();
            func_0x00f78ac0(uVar6,0);
            return 1;
          }
          if (*(long *)(lVar5 + 0x28) == 0) break;
          uVar6 = /*Atlas.UI.ArcadeEventMetagameData$$GetCurrentMedal*/ func_0x0144ec24();
          if ((*(long *)(param_1 + 0x108) == 0) ||
             (lVar5 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(*(long *)(param_1 + 0x108),lVar7,uRam0000000003d2f2d8),
             lVar5 == 0)) break;
          /*Atlas.UI.UIArcadePanelBehavior$$DoMedalAnimation*/ func_0x01512eb8(fVar11 + fVar1,lVar5,1,uVar6,0);
          iVar3 = (int)uVar6;
          if (iVar3 == 1) {
            uStack_a8 = CONCAT44(1,(undefined4)uStack_a8);
          }
          else if (iVar3 == 2) {
            uStack_a8 = CONCAT44(uStack_a8._4_4_,1);
          }
          else if (iVar3 == 3) {
            uStack_ac = 1;
          }
code_r0x0145105c:
          if ((*(long *)(param_1 + 0x108) == 0) ||
             (lVar5 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(*(long *)(param_1 + 0x108),lVar7,uRam0000000003d2f2d8),
             lVar5 == 0)) break;
          /*Atlas.UI.UIArcadePanelBehavior$$DoMedalPanelAnimation*/ func_0x01513028(fVar11,lVar5,0);
        }
        else {
          if (iVar9 == 2) {
            uStack_a8 = CONCAT44(uStack_a8._4_4_,1);
          }
          else {
            if (iVar9 != 3) goto LAB_01450fa8;
            uStack_ac = 1;
          }
          if ((uVar4 & 1) != 0) goto LAB_01450fac;
LAB_01451040:
          if (iVar3 != 0) goto code_r0x0145105c;
        }
        bVar8 = true;
      }
      lVar5 = /*Atlas.UI.Screens.ArcadeMapSelectScreen$$HasGoldMedal*/ func_0x0145279c(param_1,lVar7,0);
      if (((int)lVar5 == 0) || (lVar5 = /*Atlas.UI.Screens.ArcadeMapSelectScreen$$HasGoldMedal*/ func_0x0145279c(param_1,lVar7,1), (int)lVar5 == 0)) {
        if (bVar8) goto code_r0x014510d8;
        bVar8 = false;
      }
      else {
        if ((*(long *)(param_1 + 0x108) == 0) ||
           (lVar5 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(*(long *)(param_1 + 0x108),lVar7,uRam0000000003d2f2d8),
           lVar5 == 0)) break;
        lVar5 = /*Atlas.UI.UIArcadePanelBehavior$$DoCompletedAnimation*/ func_0x01512e08(fVar11,lVar5,0);
code_r0x014510d8:
        fVar11 = fVar11 + fVar2;
        bVar8 = true;
      }
      uVar10 = uVar10 + 1;
      lVar7 = *(long *)(param_1 + 0x100);
      if (lVar7 == 0) break;
    } while( true );
  }
LAB_014510f4:
  lVar5 = func_0x00f78af4();
LAB_014510f8:
  if ((uStack_a8 & 0x100000000) != 0) {
    lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fa0);
    if ((lVar5 == 0) || (*(long *)(lVar5 + 0xb8) == 0)) goto LAB_014510f4;
    lVar5 = /*Atlas.UI.UIArcadeSingleMedalBehaviour$$DoMedalAnimation*/ func_0x01513db0(0,*(long *)(lVar5 + 0xb8),0);
  }
  if ((uStack_a8 & 1) != 0) {
    lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fa0);
    if ((lVar5 == 0) || (*(long *)(lVar5 + 0xb0) == 0)) goto LAB_014510f4;
    lVar5 = /*Atlas.UI.UIArcadeSingleMedalBehaviour$$DoMedalAnimation*/ func_0x01513db0(0,*(long *)(lVar5 + 0xb0),0);
  }
  if ((uStack_ac & 1) == 0) {
    return lVar5;
  }
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fa0);
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0xa8) != 0)) {
    lVar5 = /*Atlas.UI.UIArcadeSingleMedalBehaviour$$DoMedalAnimation*/ func_0x01513db0(0,*(long *)(lVar5 + 0xa8),0);
    return lVar5;
  }
  goto LAB_014510f4;
}



// ============================================================
// RVA: 0x14511c8 | Atlas.UI.Screens.ArcadeMapSelectScreen.RequiresBeforeEnterCoroutine
// ============================================================

undefined8 Atlas_UI_Screens_ArcadeMapSelectScreen__RequiresBeforeEnterCoroutine(void)

{
  return 1;
}



// ============================================================
// RVA: 0x14511d0 | Atlas.UI.Screens.ArcadeMapSelectScreen.BuildOptions
// ============================================================

long Atlas_UI_Screens_ArcadeMapSelectScreen__BuildOptions(undefined8 param_1)

{
  bool bVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  int iVar18;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long *plStack_e8;
  int aiStack_e0 [4];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  
  if ((bRam0000000003eb4779 & 1) == 0) {
    func_0x00f78a20(0x3d268b0);
    bRam0000000003eb4779 = 1;
  }
  lVar5 = func_0x00f78aec(/*Atlas.UI.Screens.ArcadeMapSelectScreen.<BuildOptions>d__36_TypeInfo*/ uRam0000000003d268b0);
  /*Atlas.UI.Screens.ArcadeMapSelectScreen.<BuildOptions>d__36$$.ctor*/ func_0x015339bc(lVar5,0,0);
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x20) = param_1;
    return lVar5;
  }
  lVar5 = func_0x00f78af4();
  if ((bRam0000000003eb477a & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d1ed18);
    func_0x00f78a20(0x3d1fc80);
    func_0x00f78a20(0x3d436d0);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d2dc70);
    func_0x00f78a20(0x3d2e260);
    func_0x00f78a20(0x3d2f2d0);
    func_0x00f78a20(0x3d2e268);
    func_0x00f78a20(0x3d2f2c8);
    func_0x00f78a20(0x3d305d0);
    func_0x00f78a20(0x3d2e4a0);
    func_0x00f78a20(0x3d2e270);
    func_0x00f78a20(0x3d305d8);
    func_0x00f78a20(0x3d2de58);
    func_0x00f78a20(0x3d1c3f8);
    func_0x00f78a20(0x3d55b18);
    func_0x00f78a20(0x3d55e70);
    func_0x00f78a20(0x3d32548);
    func_0x00f78a20(0x3d32138);
    func_0x00f78a20(0x3d32140);
    func_0x00f78a20(0x3d32550);
    func_0x00f78a20(0x3d32148);
    func_0x00f78a20(0x3d32558);
    func_0x00f78a20(0x3d35898);
    func_0x00f78a20(0x3d1cb68);
    func_0x00f78a20(0x3d57348);
    func_0x00f78a20(0x3d57350);
    func_0x00f78a20(0x3d579a0);
    func_0x00f78a20(0x3d21b70);
    func_0x00f78a20(0x3d3a760);
    func_0x00f78a20(0x3d39cf8);
    func_0x00f78a20(0x3d39cf0);
    func_0x00f78a20(0x3d3b0f0);
    func_0x00f78a20(0x3d3b140);
    func_0x00f78a20(0x3d3b148);
    func_0x00f78a20(0x3d1d7c0);
    func_0x00f78a20(0x3d1db90);
    func_0x00f78a20(0x3d231f8);
    func_0x00f78a20(0x3d5b0d0);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d61ff8);
    func_0x00f78a20(0x3d62000);
    func_0x00f78a20(0x3d26898);
    func_0x00f78a20(0x3d62008);
    func_0x00f78a20(0x3d268a0);
    func_0x00f78a20(0x3d26890);
    func_0x00f78a20(0x3d40fa0);
    func_0x00f78a20(0x3d40fa8);
    func_0x00f78a20(0x3d42d20);
    bRam0000000003eb477a = 1;
  }
  uStack_b0 = 0;
  uStack_a8 = 0;
  plStack_a0 = (long *)0x0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  plStack_c0 = (long *)0x0;
  aiStack_e0[2] = 0;
  lVar6 = func_0x00f78aec(/*System.Collections.Generic.List<ArcadeEventDefinition>_TypeInfo*/ uRam0000000003d1d7c0);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(lVar6,uRam0000000003d39cf0);
  if ((*(long *)(lVar5 + 0x70) != 0) &&
     (lVar7 = *(long *)(*(long *)(lVar5 + 0x70) + 0x10), lVar7 != 0)) {
    /*Core.Definitions.GameDefinitions$$GetDefinitionList<object>*/ func_0x0185c5d4(lVar7,lVar6,uRam0000000003d57348);
    uVar8 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<MapDefinition, UIArcadePanelBehavior>_TypeInfo*/ uRam0000000003d1c3f8);
    /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar8,uRam0000000003d2f2c8);
    *(undefined8 *)(lVar5 + 0x108) = uVar8;
    if (lVar6 != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_f8,lVar6,uRam0000000003d39cf8);
      uStack_a8 = uStack_f0;
      uStack_b0 = uStack_f8;
      plStack_a0 = plStack_e8;
      while (uVar9 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_b0,uRam0000000003d32140), plVar10 = plStack_a0,
            (uVar9 & 1) != 0) {
        uVar8 = *(undefined8 *)(lVar5 + 0x90);
        lVar6 = func_0x00f78aec(/*Atlas.UI.ArcadeEventMetagameData_TypeInfo*/ uRam0000000003d1fc80);
        /*Atlas.UI.MetagameData$$.ctor*/ func_0x0148d648(lVar6,0);
        *(long **)(lVar6 + 0x10) = plVar10;
        *(undefined8 *)(lVar6 + 0x18) = uVar8;
        if (plVar10 == (long *)0x0) goto code_r0x01452030;
        if (*(long *)(lVar5 + 0xe0) == 0) {
          func_0x00f78af4();
          goto code_r0x01452074;
        }
        uVar9 = /*System.Collections.Generic.Dictionary<DefinitionID, RandomDefinitionIDPool>$$ContainsKey*/ func_0x01e3c30c(*(long *)(lVar5 + 0xe0),plVar10[4],uRam0000000003d2e268);
        if ((uVar9 & 1) == 0) {
          lVar7 = *(long *)(lVar5 + 0xe0);
          lVar15 = plVar10[4];
          if (((*(ushort *)(/*Atlas.FrontEnd.GameTypeExtensions_TypeInfo*/ lRam0000000003d21b70 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.FrontEnd.GameTypeExtensions_TypeInfo*/ lRam0000000003d21b70 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar8 = func_0x00f78a34(/*Atlas.UI.ArcadeEventMetagameData[]_TypeInfo*/ uRam0000000003d1ed18,
                                  **(undefined4 **)(/*Atlas.FrontEnd.GameTypeExtensions_TypeInfo*/ lRam0000000003d21b70 + 0xb8));
          if (lVar7 == 0) {
            func_0x00f78af4();
            goto code_r0x01452074;
          }
          /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$Add*/ func_0x01e3c088(lVar7,lVar15,uVar8,uRam0000000003d2e260);
        }
        lVar7 = *(long *)(lVar5 + 0xf8);
        uVar8 = (**(code **)(*plVar10 + 0x188))(plVar10,*(undefined8 *)(*plVar10 + 400));
        if (lVar7 == 0) {
          func_0x00f78af4(uVar8,uVar8);
          goto code_r0x01452074;
        }
        uVar3 = /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$get_Item*/ func_0x01e9e320(lVar7,uVar8,uRam0000000003d2e4a0);
        if (*(long *)(lVar5 + 0xe0) == 0) {
          func_0x00f78af4();
          goto code_r0x01452074;
        }
        plVar10 = (long *)/*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$get_Item*/ func_0x01e3bfc0(*(long *)(lVar5 + 0xe0),plVar10[4],uRam0000000003d2e270);
        if (plVar10 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x01452074;
        }
        lVar7 = func_0x00f78adc(lVar6,*(undefined8 *)(*plVar10 + 0x40));
        if (lVar7 == 0) {
          uVar8 = func_0x00f78b14();
code_r0x01452064:
          func_0x00f78ac0(uVar8,0);
          goto code_r0x01452074;
        }
        if (*(uint *)(plVar10 + 3) <= uVar3) {
          uVar8 = func_0x00f78b24();
          goto code_r0x01452064;
        }
        plVar10[(long)(int)uVar3 + 4] = lVar6;
      }
      aiStack_e0[0] = 0xc5;
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_b0,uRam0000000003d32138);
      aiStack_e0[2] = 0;
      uVar8 = func_0x00f78aec(/*System.Collections.Generic.List<MapDefinition>_TypeInfo*/ uRam0000000003d1db90);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar8,uRam0000000003d3b0f0);
      *(undefined8 *)(lVar5 + 0x100) = uVar8;
      if ((*(long *)(lVar5 + 0x70) != 0) &&
         (lVar6 = *(long *)(*(long *)(lVar5 + 0x70) + 0x10), lVar6 != 0)) {
        /*Core.Definitions.GameDefinitions$$GetDefinitionList<object>*/ func_0x0185c5d4(lVar6,uVar8,uRam0000000003d57350);
        uVar8 = *(undefined8 *)(lVar5 + 0x100);
        if (((*(ushort *)(/*Atlas.UI.Screens.ArcadeMapSelectScreen.<>c_TypeInfo*/ lRam0000000003d26890 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.Screens.ArcadeMapSelectScreen.<>c_TypeInfo*/ lRam0000000003d26890 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        puVar12 = *(undefined8 **)(/*Atlas.UI.Screens.ArcadeMapSelectScreen.<>c_TypeInfo*/ lRam0000000003d26890 + 0xb8);
        lVar6 = puVar12[1];
        if (lVar6 == 0) {
          if (((*(ushort *)(/*Atlas.UI.Screens.ArcadeMapSelectScreen.<>c_TypeInfo*/ lRam0000000003d26890 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.UI.Screens.ArcadeMapSelectScreen.<>c_TypeInfo*/ lRam0000000003d26890 + 0xe0) == 0)) {
            func_0x00f78ad0();
            puVar12 = *(undefined8 **)(/*Atlas.UI.Screens.ArcadeMapSelectScreen.<>c_TypeInfo*/ lRam0000000003d26890 + 0xb8);
          }
          uVar14 = *puVar12;
          lVar6 = func_0x00f78aec(/*System.Func<MapDefinition, int>_TypeInfo*/ uRam0000000003d1cb68);
          /*System.Func<object, int>$$.ctor*/ func_0x0217832c(lVar6,uVar14,uRam0000000003d61ff8,uRam0000000003d35898);
          *(long *)(*(long *)(/*Atlas.UI.Screens.ArcadeMapSelectScreen.<>c_TypeInfo*/ lRam0000000003d26890 + 0xb8) + 8) = lVar6;
        }
        uVar8 = /*System.Linq.Enumerable$$OrderBy<object, int>*/ func_0x0184f188(uVar8,lVar6,uRam0000000003d55b18);
        uVar8 = /*System.Linq.Enumerable$$ToList<VolumeParameter>*/ func_0x01854f28(uVar8,uRam0000000003d55e70);
        *(undefined8 *)(lVar5 + 0x100) = uVar8;
        lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar5,uRam0000000003d40fa0);
        if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 200), lVar6 != 0)) {
          if (0 < *(int *)(lVar6 + 0x18)) {
            uVar3 = 0;
            do {
              lVar7 = func_0x00f78aec(/*Atlas.UI.Screens.ArcadeMapSelectScreen.<>c__DisplayClass37_0_TypeInfo*/ uRam0000000003d26898);
              /*Atlas.UI.Screens.ArcadeMapSelectScreen.<>c__DisplayClass37_0$$.ctor*/ func_0x0153379c(lVar7,0);
              if (lVar7 == 0) goto code_r0x01452020;
              *(long *)(lVar7 + 0x18) = lVar5;
              if (*(uint *)(lVar6 + 0x18) <= uVar3) goto code_r0x01452024;
              lVar15 = *(long *)(lVar6 + (long)(int)uVar3 * 8 + 0x20);
              *(long *)(lVar7 + 0x10) = lVar15;
              if (lVar15 == 0) goto code_r0x01452020;
              lVar13 = *(long *)(lVar15 + 0x68);
              lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar5,uRam0000000003d40fa0);
              if ((lVar15 == 0) || (lVar13 == 0)) goto code_r0x01452020;
              /*Atlas.UI.UIAtlasButton$$SubscribeToGroup*/ func_0x01514768(lVar13,*(undefined8 *)(lVar15 + 0x88),0);
              if (*(long *)(lVar7 + 0x10) == 0) goto code_r0x01452020;
              lVar15 = *(long *)(*(long *)(lVar7 + 0x10) + 0x68);
              uVar8 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
              /*System.Action$$.ctor*/ func_0x02924c80(uVar8,lVar7,uRam0000000003d62000,0);
              if (lVar15 == 0) goto code_r0x01452020;
              /*Atlas.UI.UIAtlasButton$$add_SelectedOrPressed*/ func_0x01514578(lVar15,uVar8,0);
              uVar3 = uVar3 + 1;
            } while ((int)uVar3 < *(int *)(lVar6 + 0x18));
          }
          lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar5,uRam0000000003d40fa0);
          if (lVar6 != 0) {
            lVar7 = *(long *)(lVar6 + 0x90);
            lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar5,uRam0000000003d40fa0);
            if ((lVar6 != 0) && (lVar7 != 0)) {
              /*Atlas.UI.UIAtlasButton$$SubscribeToGroup*/ func_0x01514768(lVar7,*(undefined8 *)(lVar6 + 0x88),0);
              lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar5,uRam0000000003d40fa0);
              if (lVar6 != 0) {
                lVar6 = *(long *)(lVar6 + 0x90);
                uVar8 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                /*System.Action$$.ctor*/ func_0x02924c80(uVar8,lVar5,uRam0000000003d436d0,0);
                if (lVar6 != 0) {
                  /*Atlas.UI.UIAtlasButton$$add_SelectedOrPressed*/ func_0x01514578(lVar6,uVar8,0);
                  lVar6 = *(long *)(lVar5 + 0x100);
                  if (lVar6 != 0) {
                    iVar18 = 0;
                    uVar9 = 0;
                    lStack_110 = 0;
                    do {
                      if ((long)*(int *)(lVar6 + 0x18) <= (long)uVar9) {
                        return lStack_110;
                      }
                      lVar6 = func_0x00f78aec(/*Atlas.UI.Screens.ArcadeMapSelectScreen.<>c__DisplayClass37_1_TypeInfo*/ uRam0000000003d268a0);
                      /*Atlas.UI.Screens.ArcadeMapSelectScreen.<>c__DisplayClass37_1$$.ctor*/ func_0x015337d8(lVar6,0);
                      if (lVar6 == 0) break;
                      *(long *)(lVar6 + 0x28) = lVar5;
                      lVar7 = *(long *)(lVar5 + 0x100);
                      if (lVar7 == 0) break;
                      if (*(uint *)(lVar7 + 0x18) <= uVar9) {
                        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                      }
                      uVar8 = *(undefined8 *)(*(long *)(lVar7 + 0x10) + uVar9 * 8 + 0x20);
                      *(undefined8 *)(lVar6 + 0x10) = uVar8;
                      uVar8 = /*Atlas.UI.Screens.ArcadeMapSelectScreen$$HasObtainedMedalNow*/ func_0x01452108(lVar5,uVar8,0);
                      uVar14 = /*Atlas.UI.Screens.ArcadeMapSelectScreen$$HasObtainedMedalNow*/ func_0x01452108(lVar5,*(undefined8 *)(lVar6 + 0x10),1);
                      lVar7 = *(long *)(lVar5 + 0x110);
                      uStack_f8 = 0;
                      uStack_f0 = 0;
                      /*System.ValueTuple<Type, int>$$.ctor*/ func_0x01c685a4(&uStack_f8,*(undefined8 *)(lVar6 + 0x10),0,
                                      uRam0000000003d42d20);
                      if (lVar7 == 0) break;
                      /*System.Collections.Generic.Dictionary<ValueTuple<object, int>, bool>$$set_Item*/ func_0x01e26af4(lVar7,uStack_f8,uStack_f0,uVar8,uRam0000000003d2de58);
                      lVar7 = *(long *)(lVar5 + 0x110);
                      uStack_108 = 0;
                      uStack_100 = 0;
                      /*System.ValueTuple<Type, int>$$.ctor*/ func_0x01c685a4(&uStack_108,*(undefined8 *)(lVar6 + 0x10),1,
                                      uRam0000000003d42d20);
                      if (lVar7 == 0) break;
                      /*System.Collections.Generic.Dictionary<ValueTuple<object, int>, bool>$$set_Item*/ func_0x01e26af4(lVar7,uStack_108,uStack_100,uVar14,uRam0000000003d2de58);
                      if ((int)uVar8 != 0) {
                        if ((*(long *)(lVar6 + 0x10) == 0) || (*(long *)(lVar5 + 0xe0) == 0)) break;
                        lVar15 = *(long *)(lVar5 + 0x118);
                        lVar7 = /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$get_Item*/ func_0x01e3bfc0(*(long *)(lVar5 + 0xe0),
                                                *(undefined8 *)(*(long *)(lVar6 + 0x10) + 0x18),
                                                uRam0000000003d2e270);
                        if (lVar7 == 0) break;
                        if (*(int *)(lVar7 + 0x18) == 0) goto code_r0x01452024;
                        if ((*(long *)(lVar7 + 0x20) == 0) ||
                           (uVar8 = /*Atlas.UI.ArcadeEventMetagameData$$GetCurrentMedal*/ func_0x0144ec24(), lVar15 == 0)) break;
                        iVar4 = /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$get_Item*/ func_0x01e9e320(lVar15,uVar8,uRam0000000003d305d0);
                        /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$set_Item*/ func_0x01e9e3b8(lVar15,uVar8,iVar4 + 1,uRam0000000003d305d8);
                      }
                      if ((int)uVar14 != 0) {
                        if ((*(long *)(lVar6 + 0x10) == 0) || (*(long *)(lVar5 + 0xe0) == 0)) break;
                        lVar15 = *(long *)(lVar5 + 0x118);
                        lVar7 = /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$get_Item*/ func_0x01e3bfc0(*(long *)(lVar5 + 0xe0),
                                                *(undefined8 *)(*(long *)(lVar6 + 0x10) + 0x18),
                                                uRam0000000003d2e270);
                        if (lVar7 == 0) break;
                        if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) == 0) goto code_r0x01452024;
                        if ((*(long *)(lVar7 + 0x28) == 0) ||
                           (uVar8 = /*Atlas.UI.ArcadeEventMetagameData$$GetCurrentMedal*/ func_0x0144ec24(), lVar15 == 0)) break;
                        iVar4 = /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$get_Item*/ func_0x01e9e320(lVar15,uVar8,uRam0000000003d305d0);
                        /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$set_Item*/ func_0x01e9e3b8(lVar15,uVar8,iVar4 + 1,uRam0000000003d305d8);
                      }
                      lVar7 = *(long *)(lVar6 + 0x10);
                      if (lVar7 == 0) break;
                      if (*(char *)(lVar7 + 0x5c) != '\0') {
                        if (*(long *)(lVar5 + 0x88) == 0) break;
                        iVar4 = /*Atlas.Stats.SeasonsManager$$IsContentAvailable*/ func_0x014f2948(*(long *)(lVar5 + 0x88),lVar7,0);
                        if (iVar4 != 0) {
                          uVar8 = *(undefined8 *)(lVar5 + 0x98);
                          lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar5,uRam0000000003d40fa0);
                          if ((lVar7 == 0) || (*(long *)(lVar7 + 0x70) == 0)) break;
                          uVar14 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar7 + 0x70),0);
                          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          lVar7 = /*UnityEngine.Object$$Instantiate<Toggle>*/ func_0x018a6780(uVar8,uVar14,uRam0000000003d5b0d0);
                          if (lVar7 == 0) break;
                          lVar7 = /*UnityEngine.GameObject$$GetComponentInChildren<TMP_Dropdown.DropdownItem>*/ func_0x0185d228(lVar7,uRam0000000003d579a0);
                          uVar14 = *(undefined8 *)(lVar6 + 0x10);
                          uVar16 = *(undefined8 *)(lVar5 + 0x80);
                          uVar8 = func_0x00f78aec(/*Atlas.UI.MapMetagameData_TypeInfo*/ uRam0000000003d231f8);
                          /*Atlas.UI.MapMetagameData$$.ctor*/ func_0x0148d608(uVar8,uVar14,uVar16,0,0);
                          *(undefined8 *)(lVar6 + 0x20) = uVar8;
                          if ((lVar7 == 0) ||
                             (plVar10 = *(long **)(lVar7 + 0x18), plVar10 == (long *)0x0)) break;
                          (**(code **)(*plVar10 + 0x188))
                                    (plVar10,uVar8,*(undefined8 *)(*plVar10 + 400));
                          uVar8 = *(undefined8 *)(lVar7 + 0x70);
                          *(undefined8 *)(lVar6 + 0x18) = uVar8;
                          iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar8,0,0);
                          if (iVar4 != 0) {
                            lVar13 = *(long *)(lVar6 + 0x18);
                            lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar5,uRam0000000003d40fa0);
                            if ((lVar15 == 0) || (lVar13 == 0)) break;
                            /*Atlas.UI.UIAtlasButton$$SubscribeToGroup*/ func_0x01514768(lVar13,*(undefined8 *)(lVar15 + 0x88),0);
                            lVar15 = *(long *)(lVar6 + 0x18);
                            uVar8 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                            /*System.Action$$.ctor*/ func_0x02924c80(uVar8,lVar6,uRam0000000003d62008,0);
                            if (lVar15 == 0) break;
                            /*Atlas.UI.UIAtlasButton$$add_SelectedOrPressed*/ func_0x01514578(lVar15,uVar8,0);
                            if (*(long *)(lVar6 + 0x10) == 0) break;
                            uVar8 = *(undefined8 *)(*(long *)(lVar6 + 0x10) + 0x18);
                            lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar5,uRam0000000003d40fa8);
                            if (lVar15 == 0) break;
                            uVar14 = *(undefined8 *)(lVar15 + 0x18);
                            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                              func_0x00f78ad0();
                            }
                            uVar11 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar8,uVar14,0);
                            if ((uVar11 & 1) == 0) {
                              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                                func_0x00f78ad0();
                              }
                              iVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lStack_110,0,0);
                              if (iVar4 != 0) goto code_r0x01451da8;
                            }
                            else {
code_r0x01451da8:
                              lStack_110 = *(long *)(lVar6 + 0x18);
                            }
                            if ((*(long *)(lVar6 + 0x10) == 0) || (*(long *)(lVar5 + 0xe0) == 0))
                            break;
                            lVar15 = /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$get_Item*/ func_0x01e3bfc0(*(long *)(lVar5 + 0xe0),
                                                     *(undefined8 *)(*(long *)(lVar6 + 0x10) + 0x18)
                                                     ,uRam0000000003d2e270);
                            uVar3 = 0;
                            bVar1 = true;
                            while( true ) {
                              if (((*(ushort *)(/*Atlas.FrontEnd.GameTypeExtensions_TypeInfo*/ lRam0000000003d21b70 + 0x132) >> 10 & 1) != 0) &&
                                 (*(int *)(/*Atlas.FrontEnd.GameTypeExtensions_TypeInfo*/ lRam0000000003d21b70 + 0xe0) == 0)) {
                                func_0x00f78ad0();
                              }
                              if (**(int **)(/*Atlas.FrontEnd.GameTypeExtensions_TypeInfo*/ lRam0000000003d21b70 + 0xb8) <= (int)uVar3) break;
                              lVar13 = *(long *)(lVar7 + 0x20);
                              if (lVar13 == 0) goto code_r0x01452020;
                              if (*(uint *)(lVar13 + 0x18) <= uVar3) goto code_r0x01452024;
                              if (lVar15 == 0) goto code_r0x01452020;
                              if (*(uint *)(lVar15 + 0x18) <= uVar3) goto code_r0x01452024;
                              lVar17 = (long)(int)uVar3;
                              plVar10 = *(long **)(lVar13 + lVar17 * 8 + 0x20);
                              if (plVar10 == (long *)0x0) goto code_r0x01452020;
                              (**(code **)(*plVar10 + 0x188))
                                        (plVar10,*(undefined8 *)(lVar15 + lVar17 * 8 + 0x20),
                                         *(undefined8 *)(*plVar10 + 400));
                              lVar13 = *(long *)(lVar7 + 0x20);
                              if (lVar13 == 0) goto code_r0x01452020;
                              if (*(uint *)(lVar13 + 0x18) <= uVar3) goto code_r0x01452024;
                              plVar10 = *(long **)(lVar13 + lVar17 * 8 + 0x20);
                              if ((plVar10 == (long *)0x0) ||
                                 (lVar13 = (**(code **)(*plVar10 + 0x178))
                                                     (plVar10,*(undefined8 *)(*plVar10 + 0x180)),
                                 lVar13 == 0)) goto code_r0x01452020;
                              iVar4 = /*Atlas.UI.ArcadeEventMetagameData$$GetCurrentMedal*/ func_0x0144ec24();
                              bVar1 = (bool)(iVar4 == 3 & bVar1);
                              uVar3 = uVar3 + 1;
                            }
                            if (bVar1) {
                              if (*(long *)(lVar7 + 0x28) == 0) break;
                              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_f8,*(long *)(lVar7 + 0x28),
                                              uRam0000000003d3a760);
                              uStack_c8 = uStack_f0;
                              uStack_d0 = uStack_f8;
                              plStack_c0 = plStack_e8;
                              while (uVar11 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_d0,uRam0000000003d32550),
                                    (uVar11 & 1) != 0) {
                                if (plStack_c0 == (long *)0x0) {
                                  func_0x00f78af4();
                                  goto code_r0x01452074;
                                }
                                (**(code **)(*plStack_c0 + 0x2a8))
                                          (*(undefined4 *)(lVar7 + 0x30),
                                           *(undefined4 *)(lVar7 + 0x34),
                                           *(undefined4 *)(lVar7 + 0x38),
                                           *(undefined4 *)(lVar7 + 0x3c),plStack_c0,
                                           *(undefined8 *)(*plStack_c0 + 0x2b0));
                              }
                              aiStack_e0[iVar18] = 0x458;
                              iVar4 = aiStack_e0[2];
                              iVar18 = aiStack_e0[2] + 1;
                              aiStack_e0[2] = iVar18;
                              /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_d0,uRam0000000003d32548);
                              if (iVar18 == 0) {
                                iVar18 = 0;
                              }
                              else if (aiStack_e0[iVar4] == 0x458) {
                                iVar18 = iVar4;
                                aiStack_e0[2] = iVar4;
                              }
                            }
                          }
                          if (*(long *)(lVar5 + 0x108) == 0) break;
                          /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$Add*/ func_0x01ed77c0(*(long *)(lVar5 + 0x108),*(undefined8 *)(lVar6 + 0x10),
                                          lVar7,uRam0000000003d2f2d0);
                        }
                      }
                      uVar9 = uVar9 + 1;
                      lVar6 = *(long *)(lVar5 + 0x100);
                    } while (lVar6 != 0);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_r0x01452020:
  func_0x00f78af4();
code_r0x01452024:
  uVar8 = func_0x00f78b24();
  func_0x00f78ac0(uVar8,0);
code_r0x01452030:
  func_0x00f78af4();
code_r0x01452074:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1452078);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x1451244 | Atlas.UI.Screens.ArcadeMapSelectScreen.BuildMapPanels
// ============================================================

undefined8 Atlas_UI_Screens_ArcadeMapSelectScreen__BuildMapPanels(long param_1)

{
  bool bVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  int iVar17;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  int aiStack_b0 [4];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  
  if ((bRam0000000003eb477a & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d1ed18);
    func_0x00f78a20(0x3d1fc80);
    func_0x00f78a20(0x3d436d0);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d2dc70);
    func_0x00f78a20(0x3d2e260);
    func_0x00f78a20(0x3d2f2d0);
    func_0x00f78a20(0x3d2e268);
    func_0x00f78a20(0x3d2f2c8);
    func_0x00f78a20(0x3d305d0);
    func_0x00f78a20(0x3d2e4a0);
    func_0x00f78a20(0x3d2e270);
    func_0x00f78a20(0x3d305d8);
    func_0x00f78a20(0x3d2de58);
    func_0x00f78a20(0x3d1c3f8);
    func_0x00f78a20(0x3d55b18);
    func_0x00f78a20(0x3d55e70);
    func_0x00f78a20(0x3d32548);
    func_0x00f78a20(0x3d32138);
    func_0x00f78a20(0x3d32140);
    func_0x00f78a20(0x3d32550);
    func_0x00f78a20(0x3d32148);
    func_0x00f78a20(0x3d32558);
    func_0x00f78a20(0x3d35898);
    func_0x00f78a20(0x3d1cb68);
    func_0x00f78a20(0x3d57348);
    func_0x00f78a20(0x3d57350);
    func_0x00f78a20(0x3d579a0);
    func_0x00f78a20(0x3d21b70);
    func_0x00f78a20(0x3d3a760);
    func_0x00f78a20(0x3d39cf8);
    func_0x00f78a20(0x3d39cf0);
    func_0x00f78a20(0x3d3b0f0);
    func_0x00f78a20(0x3d3b140);
    func_0x00f78a20(0x3d3b148);
    func_0x00f78a20(0x3d1d7c0);
    func_0x00f78a20(0x3d1db90);
    func_0x00f78a20(0x3d231f8);
    func_0x00f78a20(0x3d5b0d0);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d61ff8);
    func_0x00f78a20(0x3d62000);
    func_0x00f78a20(0x3d26898);
    func_0x00f78a20(0x3d62008);
    func_0x00f78a20(0x3d268a0);
    func_0x00f78a20(0x3d26890);
    func_0x00f78a20(0x3d40fa0);
    func_0x00f78a20(0x3d40fa8);
    func_0x00f78a20(0x3d42d20);
    bRam0000000003eb477a = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  plStack_70 = (long *)0x0;
  uStack_a0 = 0;
  uStack_98 = 0;
  plStack_90 = (long *)0x0;
  aiStack_b0[2] = 0;
  lVar5 = func_0x00f78aec(/*System.Collections.Generic.List<ArcadeEventDefinition>_TypeInfo*/ uRam0000000003d1d7c0);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(lVar5,uRam0000000003d39cf0);
  if ((*(long *)(param_1 + 0x70) != 0) &&
     (lVar6 = *(long *)(*(long *)(param_1 + 0x70) + 0x10), lVar6 != 0)) {
    /*Core.Definitions.GameDefinitions$$GetDefinitionList<object>*/ func_0x0185c5d4(lVar6,lVar5,uRam0000000003d57348);
    uVar7 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<MapDefinition, UIArcadePanelBehavior>_TypeInfo*/ uRam0000000003d1c3f8);
    /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar7,uRam0000000003d2f2c8);
    *(undefined8 *)(param_1 + 0x108) = uVar7;
    if (lVar5 != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_c8,lVar5,uRam0000000003d39cf8);
      uStack_78 = uStack_c0;
      uStack_80 = uStack_c8;
      plStack_70 = plStack_b8;
      while (uVar8 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_80,uRam0000000003d32140), plVar9 = plStack_70,
            (uVar8 & 1) != 0) {
        uVar7 = *(undefined8 *)(param_1 + 0x90);
        lVar5 = func_0x00f78aec(/*Atlas.UI.ArcadeEventMetagameData_TypeInfo*/ uRam0000000003d1fc80);
        /*Atlas.UI.MetagameData$$.ctor*/ func_0x0148d648(lVar5,0);
        *(long **)(lVar5 + 0x10) = plVar9;
        *(undefined8 *)(lVar5 + 0x18) = uVar7;
        if (plVar9 == (long *)0x0) goto LAB_01452030;
        if (*(long *)(param_1 + 0xe0) == 0) {
          func_0x00f78af4();
          goto code_r0x01452074;
        }
        uVar8 = /*System.Collections.Generic.Dictionary<DefinitionID, RandomDefinitionIDPool>$$ContainsKey*/ func_0x01e3c30c(*(long *)(param_1 + 0xe0),plVar9[4],uRam0000000003d2e268);
        if ((uVar8 & 1) == 0) {
          lVar6 = *(long *)(param_1 + 0xe0);
          lVar14 = plVar9[4];
          if (((*(ushort *)(/*Atlas.FrontEnd.GameTypeExtensions_TypeInfo*/ lRam0000000003d21b70 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.FrontEnd.GameTypeExtensions_TypeInfo*/ lRam0000000003d21b70 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar7 = func_0x00f78a34(/*Atlas.UI.ArcadeEventMetagameData[]_TypeInfo*/ uRam0000000003d1ed18,
                                  **(undefined4 **)(/*Atlas.FrontEnd.GameTypeExtensions_TypeInfo*/ lRam0000000003d21b70 + 0xb8));
          if (lVar6 == 0) {
            func_0x00f78af4();
            goto code_r0x01452074;
          }
          /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$Add*/ func_0x01e3c088(lVar6,lVar14,uVar7,uRam0000000003d2e260);
        }
        lVar6 = *(long *)(param_1 + 0xf8);
        uVar7 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
        if (lVar6 == 0) {
          func_0x00f78af4(uVar7,uVar7);
          goto code_r0x01452074;
        }
        uVar3 = /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$get_Item*/ func_0x01e9e320(lVar6,uVar7,uRam0000000003d2e4a0);
        if (*(long *)(param_1 + 0xe0) == 0) {
          func_0x00f78af4();
          goto code_r0x01452074;
        }
        plVar9 = (long *)/*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$get_Item*/ func_0x01e3bfc0(*(long *)(param_1 + 0xe0),plVar9[4],uRam0000000003d2e270);
        if (plVar9 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x01452074;
        }
        lVar6 = func_0x00f78adc(lVar5,*(undefined8 *)(*plVar9 + 0x40));
        if (lVar6 == 0) {
          uVar7 = func_0x00f78b14();
code_r0x01452064:
          func_0x00f78ac0(uVar7,0);
          goto code_r0x01452074;
        }
        if (*(uint *)(plVar9 + 3) <= uVar3) {
          uVar7 = func_0x00f78b24();
          goto code_r0x01452064;
        }
        plVar9[(long)(int)uVar3 + 4] = lVar5;
      }
      aiStack_b0[0] = 0xc5;
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_80,uRam0000000003d32138);
      aiStack_b0[2] = 0;
      uVar7 = func_0x00f78aec(/*System.Collections.Generic.List<MapDefinition>_TypeInfo*/ uRam0000000003d1db90);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar7,uRam0000000003d3b0f0);
      *(undefined8 *)(param_1 + 0x100) = uVar7;
      if ((*(long *)(param_1 + 0x70) != 0) &&
         (lVar5 = *(long *)(*(long *)(param_1 + 0x70) + 0x10), lVar5 != 0)) {
        /*Core.Definitions.GameDefinitions$$GetDefinitionList<object>*/ func_0x0185c5d4(lVar5,uVar7,uRam0000000003d57350);
        uVar7 = *(undefined8 *)(param_1 + 0x100);
        if (((*(ushort *)(/*Atlas.UI.Screens.ArcadeMapSelectScreen.<>c_TypeInfo*/ lRam0000000003d26890 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.Screens.ArcadeMapSelectScreen.<>c_TypeInfo*/ lRam0000000003d26890 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        puVar11 = *(undefined8 **)(/*Atlas.UI.Screens.ArcadeMapSelectScreen.<>c_TypeInfo*/ lRam0000000003d26890 + 0xb8);
        lVar5 = puVar11[1];
        if (lVar5 == 0) {
          if (((*(ushort *)(/*Atlas.UI.Screens.ArcadeMapSelectScreen.<>c_TypeInfo*/ lRam0000000003d26890 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.UI.Screens.ArcadeMapSelectScreen.<>c_TypeInfo*/ lRam0000000003d26890 + 0xe0) == 0)) {
            func_0x00f78ad0();
            puVar11 = *(undefined8 **)(/*Atlas.UI.Screens.ArcadeMapSelectScreen.<>c_TypeInfo*/ lRam0000000003d26890 + 0xb8);
          }
          uVar13 = *puVar11;
          lVar5 = func_0x00f78aec(/*System.Func<MapDefinition, int>_TypeInfo*/ uRam0000000003d1cb68);
          /*System.Func<object, int>$$.ctor*/ func_0x0217832c(lVar5,uVar13,uRam0000000003d61ff8,uRam0000000003d35898);
          *(long *)(*(long *)(/*Atlas.UI.Screens.ArcadeMapSelectScreen.<>c_TypeInfo*/ lRam0000000003d26890 + 0xb8) + 8) = lVar5;
        }
        uVar7 = /*System.Linq.Enumerable$$OrderBy<object, int>*/ func_0x0184f188(uVar7,lVar5,uRam0000000003d55b18);
        uVar7 = /*System.Linq.Enumerable$$ToList<VolumeParameter>*/ func_0x01854f28(uVar7,uRam0000000003d55e70);
        *(undefined8 *)(param_1 + 0x100) = uVar7;
        lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fa0);
        if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 200), lVar5 != 0)) {
          if (0 < *(int *)(lVar5 + 0x18)) {
            uVar3 = 0;
            do {
              lVar6 = func_0x00f78aec(/*Atlas.UI.Screens.ArcadeMapSelectScreen.<>c__DisplayClass37_0_TypeInfo*/ uRam0000000003d26898);
              /*Atlas.UI.Screens.ArcadeMapSelectScreen.<>c__DisplayClass37_0$$.ctor*/ func_0x0153379c(lVar6,0);
              if (lVar6 == 0) goto LAB_01452020;
              *(long *)(lVar6 + 0x18) = param_1;
              if (*(uint *)(lVar5 + 0x18) <= uVar3) goto code_r0x01452024;
              lVar14 = *(long *)(lVar5 + (long)(int)uVar3 * 8 + 0x20);
              *(long *)(lVar6 + 0x10) = lVar14;
              if (lVar14 == 0) goto LAB_01452020;
              lVar12 = *(long *)(lVar14 + 0x68);
              lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fa0);
              if ((lVar14 == 0) || (lVar12 == 0)) goto LAB_01452020;
              /*Atlas.UI.UIAtlasButton$$SubscribeToGroup*/ func_0x01514768(lVar12,*(undefined8 *)(lVar14 + 0x88),0);
              if (*(long *)(lVar6 + 0x10) == 0) goto LAB_01452020;
              lVar14 = *(long *)(*(long *)(lVar6 + 0x10) + 0x68);
              uVar7 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
              /*System.Action$$.ctor*/ func_0x02924c80(uVar7,lVar6,uRam0000000003d62000,0);
              if (lVar14 == 0) goto LAB_01452020;
              /*Atlas.UI.UIAtlasButton$$add_SelectedOrPressed*/ func_0x01514578(lVar14,uVar7,0);
              uVar3 = uVar3 + 1;
            } while ((int)uVar3 < *(int *)(lVar5 + 0x18));
          }
          lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fa0);
          if (lVar5 != 0) {
            lVar6 = *(long *)(lVar5 + 0x90);
            lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fa0);
            if ((lVar5 != 0) && (lVar6 != 0)) {
              /*Atlas.UI.UIAtlasButton$$SubscribeToGroup*/ func_0x01514768(lVar6,*(undefined8 *)(lVar5 + 0x88),0);
              lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fa0);
              if (lVar5 != 0) {
                lVar5 = *(long *)(lVar5 + 0x90);
                uVar7 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                /*System.Action$$.ctor*/ func_0x02924c80(uVar7,param_1,uRam0000000003d436d0,0);
                if (lVar5 != 0) {
                  /*Atlas.UI.UIAtlasButton$$add_SelectedOrPressed*/ func_0x01514578(lVar5,uVar7,0);
                  lVar5 = *(long *)(param_1 + 0x100);
                  if (lVar5 != 0) {
                    iVar17 = 0;
                    uVar8 = 0;
                    uStack_e0 = 0;
                    do {
                      if ((long)*(int *)(lVar5 + 0x18) <= (long)uVar8) {
                        return uStack_e0;
                      }
                      lVar5 = func_0x00f78aec(/*Atlas.UI.Screens.ArcadeMapSelectScreen.<>c__DisplayClass37_1_TypeInfo*/ uRam0000000003d268a0);
                      /*Atlas.UI.Screens.ArcadeMapSelectScreen.<>c__DisplayClass37_1$$.ctor*/ func_0x015337d8(lVar5,0);
                      if (lVar5 == 0) break;
                      *(long *)(lVar5 + 0x28) = param_1;
                      lVar6 = *(long *)(param_1 + 0x100);
                      if (lVar6 == 0) break;
                      if (*(uint *)(lVar6 + 0x18) <= uVar8) {
                        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                      }
                      uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x10) + uVar8 * 8 + 0x20);
                      *(undefined8 *)(lVar5 + 0x10) = uVar7;
                      uVar7 = /*Atlas.UI.Screens.ArcadeMapSelectScreen$$HasObtainedMedalNow*/ func_0x01452108(param_1,uVar7,0);
                      uVar13 = /*Atlas.UI.Screens.ArcadeMapSelectScreen$$HasObtainedMedalNow*/ func_0x01452108(param_1,*(undefined8 *)(lVar5 + 0x10),1);
                      lVar6 = *(long *)(param_1 + 0x110);
                      uStack_c8 = 0;
                      uStack_c0 = 0;
                      /*System.ValueTuple<Type, int>$$.ctor*/ func_0x01c685a4(&uStack_c8,*(undefined8 *)(lVar5 + 0x10),0,
                                      uRam0000000003d42d20);
                      if (lVar6 == 0) break;
                      /*System.Collections.Generic.Dictionary<ValueTuple<object, int>, bool>$$set_Item*/ func_0x01e26af4(lVar6,uStack_c8,uStack_c0,uVar7,uRam0000000003d2de58);
                      lVar6 = *(long *)(param_1 + 0x110);
                      uStack_d8 = 0;
                      uStack_d0 = 0;
                      /*System.ValueTuple<Type, int>$$.ctor*/ func_0x01c685a4(&uStack_d8,*(undefined8 *)(lVar5 + 0x10),1,
                                      uRam0000000003d42d20);
                      if (lVar6 == 0) break;
                      /*System.Collections.Generic.Dictionary<ValueTuple<object, int>, bool>$$set_Item*/ func_0x01e26af4(lVar6,uStack_d8,uStack_d0,uVar13,uRam0000000003d2de58);
                      if ((int)uVar7 != 0) {
                        if ((*(long *)(lVar5 + 0x10) == 0) || (*(long *)(param_1 + 0xe0) == 0))
                        break;
                        lVar14 = *(long *)(param_1 + 0x118);
                        lVar6 = /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$get_Item*/ func_0x01e3bfc0(*(long *)(param_1 + 0xe0),
                                                *(undefined8 *)(*(long *)(lVar5 + 0x10) + 0x18),
                                                uRam0000000003d2e270);
                        if (lVar6 == 0) break;
                        if (*(int *)(lVar6 + 0x18) == 0) goto code_r0x01452024;
                        if ((*(long *)(lVar6 + 0x20) == 0) ||
                           (uVar7 = /*Atlas.UI.ArcadeEventMetagameData$$GetCurrentMedal*/ func_0x0144ec24(), lVar14 == 0)) break;
                        iVar4 = /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$get_Item*/ func_0x01e9e320(lVar14,uVar7,uRam0000000003d305d0);
                        /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$set_Item*/ func_0x01e9e3b8(lVar14,uVar7,iVar4 + 1,uRam0000000003d305d8);
                      }
                      if ((int)uVar13 != 0) {
                        if ((*(long *)(lVar5 + 0x10) == 0) || (*(long *)(param_1 + 0xe0) == 0))
                        break;
                        lVar14 = *(long *)(param_1 + 0x118);
                        lVar6 = /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$get_Item*/ func_0x01e3bfc0(*(long *)(param_1 + 0xe0),
                                                *(undefined8 *)(*(long *)(lVar5 + 0x10) + 0x18),
                                                uRam0000000003d2e270);
                        if (lVar6 == 0) break;
                        if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) == 0) goto code_r0x01452024;
                        if ((*(long *)(lVar6 + 0x28) == 0) ||
                           (uVar7 = /*Atlas.UI.ArcadeEventMetagameData$$GetCurrentMedal*/ func_0x0144ec24(), lVar14 == 0)) break;
                        iVar4 = /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$get_Item*/ func_0x01e9e320(lVar14,uVar7,uRam0000000003d305d0);
                        /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$set_Item*/ func_0x01e9e3b8(lVar14,uVar7,iVar4 + 1,uRam0000000003d305d8);
                      }
                      lVar6 = *(long *)(lVar5 + 0x10);
                      if (lVar6 == 0) break;
                      if (*(char *)(lVar6 + 0x5c) != '\0') {
                        if (*(long *)(param_1 + 0x88) == 0) break;
                        iVar4 = /*Atlas.Stats.SeasonsManager$$IsContentAvailable*/ func_0x014f2948(*(long *)(param_1 + 0x88),lVar6,0);
                        if (iVar4 != 0) {
                          uVar7 = *(undefined8 *)(param_1 + 0x98);
                          lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fa0);
                          if ((lVar6 == 0) || (*(long *)(lVar6 + 0x70) == 0)) break;
                          uVar13 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar6 + 0x70),0);
                          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          lVar6 = /*UnityEngine.Object$$Instantiate<Toggle>*/ func_0x018a6780(uVar7,uVar13,uRam0000000003d5b0d0);
                          if (lVar6 == 0) break;
                          lVar6 = /*UnityEngine.GameObject$$GetComponentInChildren<TMP_Dropdown.DropdownItem>*/ func_0x0185d228(lVar6,uRam0000000003d579a0);
                          uVar13 = *(undefined8 *)(lVar5 + 0x10);
                          uVar15 = *(undefined8 *)(param_1 + 0x80);
                          uVar7 = func_0x00f78aec(/*Atlas.UI.MapMetagameData_TypeInfo*/ uRam0000000003d231f8);
                          /*Atlas.UI.MapMetagameData$$.ctor*/ func_0x0148d608(uVar7,uVar13,uVar15,0,0);
                          *(undefined8 *)(lVar5 + 0x20) = uVar7;
                          if ((lVar6 == 0) ||
                             (plVar9 = *(long **)(lVar6 + 0x18), plVar9 == (long *)0x0)) break;
                          (**(code **)(*plVar9 + 0x188))
                                    (plVar9,uVar7,*(undefined8 *)(*plVar9 + 400));
                          uVar7 = *(undefined8 *)(lVar6 + 0x70);
                          *(undefined8 *)(lVar5 + 0x18) = uVar7;
                          iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar7,0,0);
                          if (iVar4 != 0) {
                            lVar12 = *(long *)(lVar5 + 0x18);
                            lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fa0);
                            if ((lVar14 == 0) || (lVar12 == 0)) break;
                            /*Atlas.UI.UIAtlasButton$$SubscribeToGroup*/ func_0x01514768(lVar12,*(undefined8 *)(lVar14 + 0x88),0);
                            lVar14 = *(long *)(lVar5 + 0x18);
                            uVar7 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                            /*System.Action$$.ctor*/ func_0x02924c80(uVar7,lVar5,uRam0000000003d62008,0);
                            if (lVar14 == 0) break;
                            /*Atlas.UI.UIAtlasButton$$add_SelectedOrPressed*/ func_0x01514578(lVar14,uVar7,0);
                            if (*(long *)(lVar5 + 0x10) == 0) break;
                            uVar7 = *(undefined8 *)(*(long *)(lVar5 + 0x10) + 0x18);
                            lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d40fa8);
                            if (lVar14 == 0) break;
                            uVar13 = *(undefined8 *)(lVar14 + 0x18);
                            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                              func_0x00f78ad0();
                            }
                            uVar10 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar7,uVar13,0);
                            if ((uVar10 & 1) == 0) {
                              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                                func_0x00f78ad0();
                              }
                              iVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uStack_e0,0,0);
                              if (iVar4 != 0) goto code_r0x01451da8;
                            }
                            else {
code_r0x01451da8:
                              uStack_e0 = *(undefined8 *)(lVar5 + 0x18);
                            }
                            if ((*(long *)(lVar5 + 0x10) == 0) || (*(long *)(param_1 + 0xe0) == 0))
                            break;
                            lVar14 = /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$get_Item*/ func_0x01e3bfc0(*(long *)(param_1 + 0xe0),
                                                     *(undefined8 *)(*(long *)(lVar5 + 0x10) + 0x18)
                                                     ,uRam0000000003d2e270);
                            uVar3 = 0;
                            bVar1 = true;
                            while( true ) {
                              if (((*(ushort *)(/*Atlas.FrontEnd.GameTypeExtensions_TypeInfo*/ lRam0000000003d21b70 + 0x132) >> 10 & 1) != 0) &&
                                 (*(int *)(/*Atlas.FrontEnd.GameTypeExtensions_TypeInfo*/ lRam0000000003d21b70 + 0xe0) == 0)) {
                                func_0x00f78ad0();
                              }
                              if (**(int **)(/*Atlas.FrontEnd.GameTypeExtensions_TypeInfo*/ lRam0000000003d21b70 + 0xb8) <= (int)uVar3) break;
                              lVar12 = *(long *)(lVar6 + 0x20);
                              if (lVar12 == 0) goto LAB_01452020;
                              if (*(uint *)(lVar12 + 0x18) <= uVar3) goto code_r0x01452024;
                              if (lVar14 == 0) goto LAB_01452020;
                              if (*(uint *)(lVar14 + 0x18) <= uVar3) goto code_r0x01452024;
                              lVar16 = (long)(int)uVar3;
                              plVar9 = *(long **)(lVar12 + lVar16 * 8 + 0x20);
                              if (plVar9 == (long *)0x0) goto LAB_01452020;
                              (**(code **)(*plVar9 + 0x188))
                                        (plVar9,*(undefined8 *)(lVar14 + lVar16 * 8 + 0x20),
                                         *(undefined8 *)(*plVar9 + 400));
                              lVar12 = *(long *)(lVar6 + 0x20);
                              if (lVar12 == 0) goto LAB_01452020;
                              if (*(uint *)(lVar12 + 0x18) <= uVar3) goto code_r0x01452024;
                              plVar9 = *(long **)(lVar12 + lVar16 * 8 + 0x20);
                              if ((plVar9 == (long *)0x0) ||
                                 (lVar12 = (**(code **)(*plVar9 + 0x178))
                                                     (plVar9,*(undefined8 *)(*plVar9 + 0x180)),
                                 lVar12 == 0)) goto LAB_01452020;
                              iVar4 = /*Atlas.UI.ArcadeEventMetagameData$$GetCurrentMedal*/ func_0x0144ec24();
                              bVar1 = (bool)(iVar4 == 3 & bVar1);
                              uVar3 = uVar3 + 1;
                            }
                            if (bVar1) {
                              if (*(long *)(lVar6 + 0x28) == 0) break;
                              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_c8,*(long *)(lVar6 + 0x28),
                                              uRam0000000003d3a760);
                              uStack_98 = uStack_c0;
                              uStack_a0 = uStack_c8;
                              plStack_90 = plStack_b8;
                              while (uVar10 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_a0,uRam0000000003d32550),
                                    (uVar10 & 1) != 0) {
                                if (plStack_90 == (long *)0x0) {
                                  func_0x00f78af4();
                                  goto code_r0x01452074;
                                }
                                (**(code **)(*plStack_90 + 0x2a8))
                                          (*(undefined4 *)(lVar6 + 0x30),
                                           *(undefined4 *)(lVar6 + 0x34),
                                           *(undefined4 *)(lVar6 + 0x38),
                                           *(undefined4 *)(lVar6 + 0x3c),plStack_90,
                                           *(undefined8 *)(*plStack_90 + 0x2b0));
                              }
                              aiStack_b0[iVar17] = 0x458;
                              iVar4 = aiStack_b0[2];
                              iVar17 = aiStack_b0[2] + 1;
                              aiStack_b0[2] = iVar17;
                              /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_a0,uRam0000000003d32548);
                              if (iVar17 == 0) {
                                iVar17 = 0;
                              }
                              else if (aiStack_b0[iVar4] == 0x458) {
                                iVar17 = iVar4;
                                aiStack_b0[2] = iVar4;
                              }
                            }
                          }
                          if (*(long *)(param_1 + 0x108) == 0) break;
                          /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$Add*/ func_0x01ed77c0(*(long *)(param_1 + 0x108),*(undefined8 *)(lVar5 + 0x10),
                                          lVar6,uRam0000000003d2f2d0);
                        }
                      }
                      uVar8 = uVar8 + 1;
                      lVar5 = *(long *)(param_1 + 0x100);
                    } while (lVar5 != 0);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_01452020:
  func_0x00f78af4();
code_r0x01452024:
  uVar7 = func_0x00f78b24();
  func_0x00f78ac0(uVar7,0);
LAB_01452030:
  func_0x00f78af4();
code_r0x01452074:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1452078);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x1452108 | Atlas.UI.Screens.ArcadeMapSelectScreen.HasObtainedMedalNow
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x145227c | Atlas.UI.Screens.ArcadeMapSelectScreen.ContinuePressed
// ============================================================

/* WARNING: Possible PIC construction at 0x014525c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01635710: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bd0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bbf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bc20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0150bbf4) */
/* WARNING: Removing unreachable block (ram,0x0150bbfc) */
/* WARNING: Removing unreachable block (ram,0x0150bc14) */
/* WARNING: Removing unreachable block (ram,0x0150bd10) */
/* WARNING: Removing unreachable block (ram,0x01635714) */
/* WARNING: Removing unreachable block (ram,0x01635718) */
/* WARNING: Removing unreachable block (ram,0x0163577c) */
/* WARNING: Removing unreachable block (ram,0x01635750) */
/* WARNING: Removing unreachable block (ram,0x01ed77c0) */
/* WARNING: Removing unreachable block (ram,0x01ed77e8) */
/* WARNING: Removing unreachable block (ram,0x01ed7810) */
/* WARNING: Removing unreachable block (ram,0x01ed7828) */
/* WARNING: Removing unreachable block (ram,0x01ed784c) */
/* WARNING: Removing unreachable block (ram,0x01ed786c) */
/* WARNING: Removing unreachable block (ram,0x01ed7878) */
/* WARNING: Removing unreachable block (ram,0x01ed78b8) */
/* WARNING: Removing unreachable block (ram,0x01ed78bc) */
/* WARNING: Removing unreachable block (ram,0x01ed78e0) */
/* WARNING: Removing unreachable block (ram,0x01ed797c) */
/* WARNING: Removing unreachable block (ram,0x01ed7908) */
/* WARNING: Removing unreachable block (ram,0x01ed7928) */
/* WARNING: Removing unreachable block (ram,0x01ed7934) */
/* WARNING: Removing unreachable block (ram,0x01ed7994) */
/* WARNING: Removing unreachable block (ram,0x01ed7998) */
/* WARNING: Removing unreachable block (ram,0x01ed79bc) */
/* WARNING: Removing unreachable block (ram,0x01ed79c8) */
/* WARNING: Removing unreachable block (ram,0x01ed79d4) */
/* WARNING: Removing unreachable block (ram,0x01ed79e4) */
/* WARNING: Removing unreachable block (ram,0x01ed79ec) */
/* WARNING: Removing unreachable block (ram,0x01ed7a34) */
/* WARNING: Removing unreachable block (ram,0x01ed7a40) */
/* WARNING: Removing unreachable block (ram,0x01ed7a74) */
/* WARNING: Removing unreachable block (ram,0x01ed7b20) */
/* WARNING: Removing unreachable block (ram,0x01ed7b2c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b34) */
/* WARNING: Removing unreachable block (ram,0x01ed7b3c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b40) */
/* WARNING: Removing unreachable block (ram,0x01ed7b48) */
/* WARNING: Removing unreachable block (ram,0x01ed7b50) */
/* WARNING: Removing unreachable block (ram,0x01ed7a94) */
/* WARNING: Removing unreachable block (ram,0x01ed7ab8) */
/* WARNING: Removing unreachable block (ram,0x01ed7ac4) */
/* WARNING: Removing unreachable block (ram,0x01ed7acc) */
/* WARNING: Removing unreachable block (ram,0x01ed7ad8) */
/* WARNING: Removing unreachable block (ram,0x01ed7ae4) */
/* WARNING: Removing unreachable block (ram,0x01ed7b80) */
/* WARNING: Removing unreachable block (ram,0x01ed7b84) */
/* WARNING: Removing unreachable block (ram,0x01ed7bb0) */
/* WARNING: Removing unreachable block (ram,0x01ed7bb8) */
/* WARNING: Removing unreachable block (ram,0x01ed7bc8) */
/* WARNING: Removing unreachable block (ram,0x01ed7bd0) */
/* WARNING: Removing unreachable block (ram,0x01ed7d50) */
/* WARNING: Removing unreachable block (ram,0x01ed7bfc) */
/* WARNING: Removing unreachable block (ram,0x01ed7c08) */
/* WARNING: Removing unreachable block (ram,0x01ed7c10) */
/* WARNING: Removing unreachable block (ram,0x01ed7c18) */
/* WARNING: Removing unreachable block (ram,0x01ed7c24) */
/* WARNING: Removing unreachable block (ram,0x01ed7c2c) */
/* WARNING: Removing unreachable block (ram,0x01ed7c90) */
/* WARNING: Removing unreachable block (ram,0x01ed7c9c) */
/* WARNING: Removing unreachable block (ram,0x01ed7d18) */
/* WARNING: Removing unreachable block (ram,0x01ed7d1c) */
/* WARNING: Removing unreachable block (ram,0x01ed7d80) */
/* WARNING: Removing unreachable block (ram,0x01ed7c54) */
/* WARNING: Removing unreachable block (ram,0x01ed7c64) */
/* WARNING: Removing unreachable block (ram,0x01ed7c74) */
/* WARNING: Removing unreachable block (ram,0x01ed7ae8) */
/* WARNING: Removing unreachable block (ram,0x01ed7b68) */
/* WARNING: Removing unreachable block (ram,0x01ed7b08) */
/* WARNING: Removing unreachable block (ram,0x01ed7b0c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b1c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b60) */
/* WARNING: Removing unreachable block (ram,0x01ed7b6c) */
/* WARNING: Removing unreachable block (ram,0x01ed7a50) */
/* WARNING: Removing unreachable block (ram,0x01ed79f0) */
/* WARNING: Removing unreachable block (ram,0x01ed7a00) */
/* WARNING: Removing unreachable block (ram,0x01ed7a28) */
/* WARNING: Removing unreachable block (ram,0x01ed7938) */
/* WARNING: Removing unreachable block (ram,0x01ed7958) */
/* WARNING: Removing unreachable block (ram,0x01ed7980) */
/* WARNING: Removing unreachable block (ram,0x01ed787c) */
/* WARNING: Removing unreachable block (ram,0x01ed78a4) */
/* WARNING: Removing unreachable block (ram,0x01ed789c) */
/* WARNING: Removing unreachable block (ram,0x01ed78a8) */
/* WARNING: Removing unreachable block (ram,0x01ed77f8) */
/* WARNING: Removing unreachable block (ram,0x01ed77cc) */
/* WARNING: Removing unreachable block (ram,0x0150bc24) */
/* WARNING: Removing unreachable block (ram,0x0150bc2c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_Screens_ArcadeMapSelectScreen__ContinuePressed
                (long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  undefined8 ***pppuVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  bool bVar8;
  int iVar9;
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  undefined8 ******ppppppuVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 ****ppppuVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined1 extraout_w1;
  int extraout_w1_00;
  undefined8 ******ppppppuVar20;
  long *plVar21;
  uint uVar19;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 unaff_x21;
  ulong uVar25;
  undefined8 unaff_x22;
  undefined8 *puVar26;
  undefined8 ******unaff_x23;
  undefined8 ******ppppppuVar27;
  undefined8 ******unaff_x24;
  uint uVar28;
  long *unaff_x25;
  long *plVar29;
  long lVar30;
  undefined8 ***unaff_x26;
  undefined8 ***pppuVar31;
  undefined8 ***pppuVar32;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar33;
  undefined1 *puVar34;
  undefined1 *puVar35;
  undefined *puVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [12];
  long lStack_1f8;
  uint uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 *******pppppppuStack_160;
  undefined *puStack_158;
  ulong uStack_150;
  long lStack_148;
  undefined8 *******pppppppuStack_140;
  long *plStack_138;
  undefined8 *******pppppppuStack_130;
  undefined8 ******ppppppuStack_128;
  long lStack_120;
  long lStack_118;
  ulong uStack_110;
  long lStack_108;
  undefined8 *******pppppppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 ***pppuStack_c8;
  long lStack_c0;
  undefined8 ***pppuStack_b8;
  undefined8 ***pppuStack_b0;
  undefined8 ***pppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *******pppppppuStack_30;
  undefined *puStack_28;
  
  auVar45._8_8_ = unaff_x22;
  auVar45._0_8_ = unaff_x21;
  puVar26 = (undefined8 *)&stack0xffffffffffffffe0;
  if ((bRam0000000003eb477b & 1) == 0) {
    func_0x00f78a20(0x3d40fa8);
    bRam0000000003eb477b = 1;
  }
  bVar4 = *(byte *)(param_1 + 0xd2);
  uVar24 = (ulong)bVar4;
  if (bVar4 == 0) {
LAB_014522dc:
    return (ulong)(bVar4 != 0);
  }
  lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d40fa8);
  if (lVar11 != 0) {
    if (*(long *)(lVar11 + 0x20) != 0) {
      /*Atlas.UI.Screens.ArcadeMapSelectScreen.NextSelected$$Invoke*/ func_0x01534418(*(long *)(lVar11 + 0x20),0);
    }
    goto LAB_014522dc;
  }
  auVar41 = func_0x00f78af4();
  lVar30 = auVar41._8_8_;
  lVar11 = auVar41._0_8_;
  puStack_28 = &Atlas_UI_Screens_ArcadeMapSelectScreen__OnOptionSelected;
  ppppppuVar27 = (undefined8 ******)0x3eb4000;
  uVar22 = param_3;
  pppppppuStack_30 = (undefined8 *******)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb477c & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d40fa0);
    func_0x00f78a20(0x3d40fa8);
    func_0x00f78a20(0x3d40fb0);
    func_0x00f78a20(0x3d25608);
    bRam0000000003eb477c = 1;
  }
  pppuVar1 = (undefined8 ***)0x3d40fb0;
  pppuVar31 = (undefined8 ***)0x3d40fb0;
  pppuVar32 = pppuVar31;
  if ((param_3 != 0) && (param_4 != 0)) {
    pppuVar32 = pppuVar1;
    if (lVar30 == 0) goto code_r0x01452704;
    ppppppuVar27 = *(undefined8 *******)(lVar11 + 0xa8);
    unaff_x24 = (undefined8 ******)/*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar30,0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar22 = 0;
    iVar9 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(ppppppuVar27,unaff_x24);
    if (iVar9 == 0) {
code_r0x01452590:
      if (*(char *)(lVar11 + 0xd2) == '\0') {
        lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar11,uRam0000000003d40fb0);
        pppuVar32 = pppuVar31;
        if ((lVar12 != 0) && (uVar15 = *(ulong *)(lVar12 + 0xb8), uVar15 != 0)) {
          uVar22 = 1;
          puVar26 = &uStack_f0;
          param_1 = param_4;
          uVar24 = param_3;
          unaff_x23 = ppppppuVar27;
          unaff_x26 = pppuVar1;
          pppppppuVar33 = &pppppppuStack_30;
          puVar36 = &UNK_014525c4;
          auVar45 = auVar41;
          goto code_r0x0150b9fc;
        }
      }
      else {
        *(undefined1 *)(lVar11 + 0xd2) = 1;
        *(long *)(lVar11 + 0xd8) = lVar30;
        ppppppuVar27 = (undefined8 ******)0x3d40fa0;
        lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar11,uRam0000000003d40fa0);
        pppuVar32 = pppuVar31;
        if ((lVar12 != 0) &&
           (unaff_x24 = *(undefined8 *******)(lVar12 + 200), unaff_x24 != (undefined8 ******)0x0)) {
          uVar19 = *(uint *)(unaff_x24 + 3);
          pppuVar32 = pppuVar1;
          if (0 < (int)uVar19) {
            unaff_x25 = (long *)0x0;
            pppuVar32 = &pppuStack_b8;
            do {
              uVar28 = (uint)unaff_x25;
              ppppppuVar13 = (undefined8 ******)0x3d40fa0;
              if (uVar19 <= uVar28) goto code_r0x01452708;
              if ((unaff_x24[(long)(int)uVar28 + 4] == (undefined8 *****)0x0) ||
                 (ppppuVar16 = unaff_x24[(long)(int)uVar28 + 4][0xd],
                 ppppuVar16 == (undefined8 ****)0x0)) goto code_r0x01452704;
              pppuStack_c8 = ppppuVar16[4];
              pppuStack_b0 = ppppuVar16[7];
              pppuStack_b8 = ppppuVar16[6];
              pppuStack_a8 = ppppuVar16[8];
              uVar22 = 0;
              lStack_c0 = lVar30;
              /*UnityEngine.UI.Selectable$$set_navigation*/ func_0x032e3820(ppppuVar16,&pppuStack_c8);
              unaff_x25 = (long *)(ulong)(uVar28 + 1);
              uVar19 = *(uint *)(unaff_x24 + 3);
            } while ((int)(uVar28 + 1) < (int)uVar19);
          }
          lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar11,uRam0000000003d40fa0);
          if ((lVar12 != 0) && (lVar12 = *(long *)(lVar12 + 0x90), lVar12 != 0)) {
            uStack_88 = *(undefined8 *)(lVar12 + 0x28);
            uStack_90 = *(undefined8 *)(lVar12 + 0x20);
            uStack_98 = *(undefined8 *)(lVar12 + 0x40);
            uStack_a0 = *(undefined8 *)(lVar12 + 0x38);
            lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar11,uRam0000000003d40fa0);
            if ((lVar12 != 0) && (*(long *)(lVar12 + 0x90) != 0)) {
              uStack_e8 = uStack_88;
              uStack_f0 = uStack_90;
              uStack_d0 = uStack_98;
              uStack_d8 = uStack_a0;
              uVar22 = 0;
              lStack_e0 = lVar30;
              /*UnityEngine.UI.Selectable$$set_navigation*/ func_0x032e3820(*(long *)(lVar12 + 0x90),&uStack_f0);
              lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar11,uRam0000000003d40fa8);
              if (lVar12 == 0) {
                return 0;
              }
              if (*(long *)(lVar12 + 0x10) != 0) {
                uVar24 = /*Atlas.UI.Screens.ArcadeMapSelectScreen.OptionSelected$$Invoke*/ func_0x015346b4(*(long *)(lVar12 + 0x10),param_3,param_4,0);
                return uVar24;
              }
            }
          }
        }
      }
    }
    else {
      plVar21 = (long *)0x3d40fa0;
      plVar29 = (long *)0x3d40fa0;
      lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar11,uRam0000000003d40fa0);
      unaff_x25 = plVar21;
      if (((lVar12 != 0) && (pppuVar32 = pppuVar31, *(long *)(lVar12 + 0x80) != 0)) &&
         (lVar12 = *(long *)(*(long *)(lVar12 + 0x80) + 0x18), unaff_x25 = plVar29, lVar12 != 0)) {
        ppppppuVar27 = (undefined8 ******)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar12,0);
        lVar12 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar30,0);
        if (lVar12 != 0) {
          unaff_x24 = (undefined8 ******)/*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar12,0);
          unaff_x28 = 0x3d25608;
          if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          unaff_x27 = 0x3d24188;
          if (ppppppuVar27 == (undefined8 ******)0x0) {
            ppppppuVar13 = (undefined8 ******)0x0;
            if (unaff_x24 != (undefined8 ******)0x0) goto code_r0x0145246c;
code_r0x014524d0:
            ppppppuVar20 = (undefined8 ******)0x0;
          }
          else {
            ppppppuVar13 = ppppppuVar27;
            if (*ppppppuVar27 != /*UnityEngine.RectTransform_TypeInfo*/ pppppuRam0000000003d24188) {
              ppppppuVar13 = (undefined8 ******)0x0;
            }
            if (unaff_x24 == (undefined8 ******)0x0) goto code_r0x014524d0;
code_r0x0145246c:
            ppppppuVar20 = unaff_x24;
            if (*unaff_x24 != /*UnityEngine.RectTransform_TypeInfo*/ pppppuRam0000000003d24188) {
              ppppppuVar20 = (undefined8 ******)0x0;
            }
          }
          uVar22 = 0;
          uVar24 = /*Core.UI2.UIUtils$$RectContainsRectHorizontally*/ func_0x02f915a4(ppppppuVar13,ppppppuVar20);
          unaff_x25 = plVar21;
          if ((uVar24 & 1) != 0) {
code_r0x01452580:
            uVar14 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar30,0);
            *(undefined8 *)(lVar11 + 0xa8) = uVar14;
            goto code_r0x01452590;
          }
          lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar11,uRam0000000003d40fa0);
          unaff_x25 = plVar29;
          if (lVar12 != 0) {
            ppppppuVar27 = *(undefined8 *******)(lVar12 + 0x80);
            lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar11,uRam0000000003d40fa0);
            if ((lVar12 != 0) && (*(long *)(lVar12 + 0x80) != 0)) {
              unaff_x24 = *(undefined8 *******)(*(long *)(lVar12 + 0x80) + 0x18);
              lVar12 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar30,0);
              if (lVar12 != 0) {
                unaff_x25 = (long *)/*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar12,0);
                if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                if (unaff_x25 == (long *)0x0) {
                  plVar21 = (long *)0x0;
                }
                else {
                  plVar21 = unaff_x25;
                  if ((undefined8 *****)*unaff_x25 != /*UnityEngine.RectTransform_TypeInfo*/ pppppuRam0000000003d24188) {
                    plVar21 = (long *)0x0;
                  }
                }
                uVar22 = 0;
                /*Core.UI2.UIUtils$$ScrollTargetNormalizedPosition*/ func_0x02f91280(unaff_x24,plVar21,0,0);
                if (ppppppuVar27 != (undefined8 ******)0x0) {
                  /*Atlas.UI.PaginationDotController$$ScrollToTarget*/ func_0x014b600c(ppppppuVar27,0);
                  goto code_r0x01452580;
                }
              }
            }
          }
        }
      }
    }
code_r0x01452704:
    func_0x00f78af4();
    ppppppuVar13 = ppppppuVar27;
code_r0x01452708:
    uVar14 = func_0x00f78b24();
    lVar12 = func_0x00f78ac0(uVar14,0);
    puStack_f8 = &Atlas_UI_Screens_ArcadeMapSelectScreen__OnAfterExit;
    uStack_110 = param_3;
    lStack_108 = param_4;
    pppppppuStack_100 = &pppppppuStack_30;
    if ((bRam0000000003eb477d & 1) == 0) {
      lStack_120 = lVar30;
      lStack_118 = lVar11;
      func_0x00f78a20(0x3d40fb0);
      auVar41._8_8_ = lStack_120;
      auVar41._0_8_ = lStack_118;
      bRam0000000003eb477d = 1;
    }
    lStack_120 = auVar41._8_8_;
    lStack_118 = auVar41._0_8_;
    lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar12,uRam0000000003d40fb0);
    if ((lVar11 != 0) && (*(long *)(lVar11 + 0xb8) != 0)) {
      uVar22 = 0;
      /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar11 + 0xb8),6,0,0);
      lVar11 = *(long *)(lVar12 + 0x78);
      if (lVar11 != 0) {
        uVar19 = *(uint *)(lVar12 + 0xa0);
        uVar24 = (ulong)uVar19;
        lStack_148 = *(long *)PTR_03a5d648;
        pppppppuStack_140 = (undefined8 *******)pppuVar32;
        plStack_138 = unaff_x25;
        pppppppuStack_130 = (undefined8 *******)unaff_x24;
        ppppppuStack_128 = ppppppuVar13;
        if ((bRam0000000003eb567f & 1) == 0) {
          func_0x00f78a20(0x3d1fdb0,uVar24,0);
          func_0x00f78a20(0x3d2e030);
          func_0x00f78a20(0x3d2dfc8);
          func_0x00f78a20(0x3d3cce0);
          func_0x00f78a20(0x3d3cce8);
          func_0x00f78a20(0x3d3ccf0);
          bRam0000000003eb567f = 1;
        }
        lVar30 = *(long *)(lVar11 + 0x10);
        if (lVar30 == 0) {
code_r0x016364d0:
          func_0x00f78af4();
        }
        else {
          iVar9 = *(int *)(lVar30 + 0x18);
          if (0 < iVar9) {
            uVar28 = 0;
            do {
              if (*(uint *)(lVar30 + 0x18) <= uVar28) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              lVar30 = *(long *)(lVar30 + 0x10) + (long)(int)uVar28 * 0x20;
              uVar3 = *(uint *)(lVar30 + 0x20);
              puStack_158 = *(undefined **)(lVar30 + 0x2c);
              pppppppuStack_160 = *(undefined8 ********)(lVar30 + 0x24);
              uStack_150 = CONCAT44(uStack_150._4_4_,*(undefined4 *)(lVar30 + 0x34));
              uStack_168._0_7_ =
                   CONCAT43(*(undefined4 *)(lVar30 + 0x3c),(int3)*(undefined4 *)(lVar30 + 0x39));
              if (((*(byte *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              if (uVar3 == uVar19) {
                if (*(long *)(lVar11 + 0x10) != 0) {
                  uStack_1e4 = SUB84(puStack_158,0);
                  uStack_1e0 = (undefined4)((ulong)puStack_158 >> 0x20);
                  uStack_1ec = SUB84(pppppppuStack_160,0);
                  uStack_1e8 = (undefined4)((ulong)pppppppuStack_160 >> 0x20);
                  uStack_1dc = (undefined4)uStack_150;
                  uStack_1d8._0_5_ = CONCAT41((undefined4)uStack_168,1);
                  uStack_1d8 = CONCAT44(uStack_168._3_4_,(undefined4)uStack_1d8);
                  uStack_1f0 = uVar19;
                  /*System.Collections.Generic.List<AssetManager.AssetRequest>$$set_Item*/ func_0x024afabc(*(long *)(lVar11 + 0x10),uVar28,&uStack_1f0,uRam0000000003d3ccf0);
                  if (*(long *)(lVar11 + 0x28) != 0) {
                    lVar30 = *(long *)(lVar11 + 0x18);
                    uVar10 = /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManagerHandle>$$get_Item*/ func_0x01e2ca80(*(long *)(lVar11 + 0x28),uVar24,uRam0000000003d2dfc8);
                    lVar11 = 0;
                    if (lVar30 != 0) {
                      uVar24 = /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$get_Item*/ func_0x01e2fa1c(&uStack_1f0,lVar30,uVar10,uRam0000000003d2e030);
                      if (*(long *)PTR_03a5d648 == lStack_148) {
                        return uVar24;
                      }
                      goto code_r0x016365d0;
                    }
                  }
                }
                break;
              }
              if (iVar9 - 1U == uVar28) goto code_r0x016364d4;
              lVar30 = *(long *)(lVar11 + 0x10);
              uVar28 = uVar28 + 1;
            } while (lVar30 != 0);
            goto code_r0x016364d0;
          }
        }
code_r0x016364d4:
        lVar30 = lStack_120;
        if (*(long *)PTR_03a5d648 != lStack_148) {
code_r0x016365d0:
          iVar9 = ___stack_chk_fail();
          return (ulong)(iVar9 == extraout_w1_00);
        }
        if ((bRam0000000003eb568e & 1) == 0) {
          func_0x00f78a20(0x3d2dfa0);
          func_0x00f78a20(0x3d2dfb8);
          bRam0000000003eb568e = 1;
        }
        ppppppuStack_128 = (undefined8 ******)((ulong)ppppppuStack_128 & 0xffffffff00000000);
        if (*(long *)(lVar11 + 0x28) != 0) {
          uVar22 = /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManagerHandle>$$TryGetValue*/ func_0x01e2e668(*(long *)(lVar11 + 0x28),uVar24,&ppppppuStack_128,
                                   uRam0000000003d2dfb8);
          if ((int)uVar22 == 0) {
            return uVar22;
          }
          if (*(long *)(lVar11 + 0x28) != 0) {
            /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManagerHandle>$$Remove*/ func_0x01e2e39c(*(long *)(lVar11 + 0x28),uVar24,uRam0000000003d2dfa0);
            uVar24 = /*Core.Assets.AssetManager$$RemoveAssetReference*/ func_0x016373f0(lVar11,(ulong)ppppppuStack_128 & 0xffffffff);
            return uVar24;
          }
        }
        auVar45 = func_0x00f78af4();
        lVar12 = auVar45._0_8_;
        pppppppuStack_160 = (undefined8 *******)lVar30;
        puStack_158 = (undefined *)0x3eb5000;
        plStack_138 = (long *)&Core_Assets_AssetManager__ReleaseAsset;
        uStack_150 = uVar24;
        lStack_148 = lVar11;
        pppppppuStack_140 = &pppppppuStack_100;
        if ((bRam0000000003eb5690 & 1) == 0) {
          func_0x00f78a20(0x3d433e8);
          func_0x00f78a20(0x3d43408);
          func_0x00f78a20(0x3d43420);
          func_0x00f78a20(0x3d1fae0);
          func_0x00f78a20(0x3d2c050);
          func_0x00f78a20(0x3d2be18);
          func_0x00f78a20(0x3d2bfa0);
          func_0x00f78a20(0x3d2fac8);
          func_0x00f78a20(0x3d2e008);
          func_0x00f78a20(0x3d2fec0);
          func_0x00f78a20(0x3d2e020);
          func_0x00f78a20(0x3d35c80);
          bRam0000000003eb5690 = 1;
        }
        lStack_170 = 0;
        uStack_188 = 0;
        uStack_190 = 0;
        uStack_178 = 0;
        uStack_180 = 0;
        uStack_1a8 = 0;
        uStack_1b0 = 0;
        uStack_198 = 0;
        uStack_1a0 = 0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        uStack_1e8 = 0;
        uStack_1e4 = 0;
        uStack_1f0 = 0;
        uStack_1ec = 0;
        uStack_1d8 = 0;
        uStack_1e0 = 0;
        uStack_1dc = 0;
        lStack_1f8 = 0;
        if (*(long *)(lVar12 + 0x18) == 0) goto code_r0x01635688;
        uVar22 = auVar45._8_8_ & 0xffffffff;
        uVar24 = /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$TryGetValue*/ func_0x01e31a4c(*(long *)(lVar12 + 0x18),uVar22,&uStack_1f0,uRam0000000003d2e020);
        if ((int)uVar24 == 0) {
          return uVar24;
        }
        if (*(long *)(lVar12 + 0x30) == 0) goto code_r0x01635688;
        uVar24 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(*(long *)(lVar12 + 0x30),CONCAT44(uStack_1dc,uStack_1e0),
                                 &lStack_1f8,uRam0000000003d2fec0);
        if ((int)uVar24 == 0) {
          return uVar24;
        }
        if ((char)uStack_1d8 == '\0') {
          if (uStack_1d8._1_1_ == '\0') {
            uVar14 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(&uStack_1d0,uRam0000000003d2bfa0);
            if ((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) {
              iVar9 = *(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0);
              puVar26 = (undefined8 *)0x3d43408;
              goto joined_r0x01635680;
            }
            puVar26 = (undefined8 *)0x3d43408;
          }
          else {
            uVar14 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(&uStack_1b0,uRam0000000003d2c050);
            if ((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) == 0) {
              puVar26 = (undefined8 *)0x3d43420;
            }
            else {
              iVar9 = *(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0);
              puVar26 = (undefined8 *)0x3d43420;
joined_r0x01635680:
              if (iVar9 == 0) {
                func_0x00f78ad0();
              }
            }
          }
        }
        else {
          uVar14 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(&uStack_190,uRam0000000003d2be18);
          if ((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) {
            iVar9 = *(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0);
            puVar26 = (undefined8 *)0x3d433e8;
            goto joined_r0x01635680;
          }
          puVar26 = (undefined8 *)0x3d433e8;
        }
        /*UnityEngine.AddressableAssets.Addressables$$Release<Sprite>*/ func_0x0171fc38(uVar14,*puVar26);
        if (*(long *)(lVar12 + 0x18) != 0) {
          /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$Remove*/ func_0x01e3174c(*(long *)(lVar12 + 0x18),uVar22,uRam0000000003d2e008);
          if (((*(long *)(lVar12 + 0x20) != 0) &&
              (/*System.Collections.Generic.Dictionary<string, AssetManagerHandle>$$Remove*/ func_0x01ec0ba4(*(long *)(lVar12 + 0x20),CONCAT44(uStack_1e4,uStack_1e8),
                               uRam0000000003d2fac8), lStack_1f8 != 0)) &&
             (*(long *)(lStack_1f8 + 0x20) != 0)) {
            uVar24 = /*System.Collections.Generic.HashSet<AssetManagerHandle>$$Remove*/ func_0x021cefec(*(long *)(lStack_1f8 + 0x20),uVar22,uRam0000000003d35c80);
            return uVar24;
          }
        }
code_r0x01635688:
        func_0x00f78af4();
        if ((bRam0000000003eb567a & 1) == 0) {
          func_0x00f78a20(0x3d26978);
          func_0x00f78a20(0x3d2feb0);
          func_0x00f78a20(0x3d35c68);
          func_0x00f78a20(0x3d1cdf8);
          bRam0000000003eb567a = 1;
        }
        uVar24 = func_0x00f78aec(/*Core.Assets.AssetManager.BucketInstance_TypeInfo*/ uRam0000000003d26978);
        return uVar24;
      }
    }
    auVar45 = func_0x00f78af4();
    lVar11 = auVar45._8_8_;
    lStack_148 = 0x3d40fb0;
    pppppppuStack_140 = (undefined8 *******)0x3eb4000;
    ppppppuStack_128 = (undefined8 ******)&Atlas_UI_Screens_ArcadeMapSelectScreen__HasGoldMedal;
    uStack_150 = lVar30;
    plStack_138 = (long *)lVar12;
    pppppppuStack_130 = &pppppppuStack_100;
    if ((bRam0000000003eb4780 & 1) == 0) {
      func_0x00f78a20(0x3d2e268);
      func_0x00f78a20(0x3d2e270);
      bRam0000000003eb4780 = 1;
    }
    if ((lVar11 != 0) && (lVar30 = *(long *)(auVar45._0_8_ + 0xe0), lVar30 != 0)) {
      uVar24 = /*System.Collections.Generic.Dictionary<DefinitionID, RandomDefinitionIDPool>$$ContainsKey*/ func_0x01e3c30c(lVar30,*(undefined8 *)(lVar11 + 0x18),uRam0000000003d2e268);
      if ((int)uVar24 == 0) {
        return uVar24;
      }
      lVar30 = *(long *)(auVar45._0_8_ + 0xe0);
      if ((lVar30 != 0) &&
         (lVar30 = /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$get_Item*/ func_0x01e3bfc0(lVar30,*(undefined8 *)(lVar11 + 0x18),uRam0000000003d2e270),
         lVar30 != 0)) {
        if (*(uint *)(lVar30 + 0x18) <= (uint)uVar22) goto code_r0x01452860;
        if (*(long *)(lVar30 + (long)(int)(uint)uVar22 * 8 + 0x20) != 0) {
          iVar9 = /*Atlas.UI.ArcadeEventMetagameData$$GetCurrentMedal*/ func_0x0144ec24();
          return (ulong)(iVar9 == 3);
        }
      }
    }
    func_0x00f78af4();
code_r0x01452860:
    uVar14 = func_0x00f78b24();
    uVar15 = func_0x00f78ac0(uVar14,0);
    puStack_158 = &Atlas_UI_Screens_ArcadeMapSelectScreen__OnUpdate;
    lStack_170 = lVar11;
    uStack_168 = uVar22;
    pppppppuStack_160 = &pppppppuStack_130;
    /*Core.UI2.UIScreen$$OnUpdate*/ func_0x02f8a624(uVar15,0);
    uVar24 = uVar15;
    if ((*(char *)(uVar15 + 0xd0) != '\0') && (*(char *)(uVar15 + 0xd1) == '\0')) {
      *(undefined1 *)(uVar15 + 0xd1) = 1;
      iVar9 = 0;
      do {
        uVar24 = /*Atlas.UI.Screens.ArcadeMapSelectScreen$$RunRewardSequenceIfRewardUnseen*/ func_0x014528ec(uVar15,iVar9);
        if ((uVar24 & 1) != 0) {
          return uVar24;
        }
        bVar8 = iVar9 != 5;
        iVar9 = iVar9 + 1;
      } while (bVar8);
    }
    return uVar24;
  }
  *(undefined1 *)(lVar11 + 0xd2) = 0;
  lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar11,uRam0000000003d40fb0);
  if ((lVar12 == 0) || (uVar15 = *(ulong *)(lVar12 + 0xb8), uVar15 == 0)) goto code_r0x01452704;
  uVar22 = 0;
  pppppppuVar33 = pppppppuStack_30;
  puVar36 = puStack_28;
code_r0x0150b9fc:
  lVar11 = auVar45._8_8_;
  uVar25 = auVar45._0_8_;
  uVar14 = 1;
  puVar6 = (undefined1 *)((long)puVar26 + -0x20);
  *(ulong *)((long)puVar26 + -0x20) = uVar24;
  *(long *)((long)puVar26 + -0x18) = param_1;
  *(undefined8 ********)((long)puVar26 + -0x10) = pppppppuVar33;
  *(undefined **)((long)puVar26 + -8) = puVar36;
  puVar35 = (undefined1 *)((long)puVar26 + -0x10);
  if (*(long *)(uVar15 + 0x28) == 0) {
code_r0x0150ba34:
    puVar36 = &Atlas_UI_Screens_TopBarScreen__ShowBackingPanelsIfRequired;
    auVar42 = func_0x00f78af4();
  }
  else {
    /*Atlas.UI.Screens.TopBarScreen$$RequestButtonVisible*/ func_0x0150b5b8(*(long *)(uVar15 + 0x28),6,uVar22,1,0);
    if (*(ulong *)(uVar15 + 0x28) == 0) goto code_r0x0150ba34;
    auVar42._8_8_ = 0;
    auVar42._0_8_ = *(ulong *)(uVar15 + 0x28);
    uVar22 = 0;
    puVar35 = *(undefined1 **)((long)puVar26 + -0x10);
    puVar36 = *(undefined **)((long)puVar26 + -8);
    uVar24 = *(ulong *)((long)puVar26 + -0x20);
    uVar15 = *(ulong *)((long)puVar26 + -0x18);
    puVar6 = (undefined1 *)puVar26;
  }
  uVar18 = auVar42._0_8_;
  *(long *)(puVar6 + -0x30) = lVar11;
  *(ulong *)(puVar6 + -0x28) = uVar25;
  *(ulong *)(puVar6 + -0x20) = uVar24;
  *(ulong *)(puVar6 + -0x18) = uVar15;
  *(undefined1 **)(puVar6 + -0x10) = puVar35;
  *(undefined **)(puVar6 + -8) = puVar36;
  puVar35 = puVar6 + -0x10;
  lVar30 = *(long *)(uVar18 + 0x70);
  uVar23 = uVar22;
  if (lVar30 != 0) {
    uVar19 = *(uint *)(lVar30 + 0x18);
    if (uVar19 != 0) {
      uVar15 = uVar18;
      uVar24 = uVar22;
      if (*(int *)(lVar30 + 0x5c) - 1U < 2) {
        uVar23 = 1;
      }
      else {
        if (uVar19 < 2) goto code_r0x0150bb24;
        uVar23 = (ulong)(*(int *)(lVar30 + 0xbc) - 1U < 2);
      }
      if (4 < uVar19) {
        if (*(int *)(lVar30 + 0x1dc) - 1U < 2) {
          uVar25 = 1;
        }
        else {
          if (uVar19 < 6) goto code_r0x0150bb24;
          uVar25 = (ulong)(*(int *)(lVar30 + 0x23c) - 1U < 2);
        }
        if (((int)uVar23 == 0) || ((auVar42._8_8_ & 1) != 0)) {
          if (((uint)uVar25 & ((uint)uVar22 ^ 1)) != 1) {
            return uVar18;
          }
          auVar43._8_8_ = 7;
          auVar43._0_8_ = uVar18;
          uVar23 = 1;
          puVar35 = *(undefined1 **)(puVar6 + -0x10);
          puVar36 = *(undefined **)(puVar6 + -8);
          auVar44._8_8_ = 1;
          auVar44._0_8_ = *(undefined8 *)(puVar6 + -0x20);
          uVar18 = *(ulong *)(puVar6 + -0x18);
          lVar11 = *(long *)(puVar6 + -0x30);
          uVar25 = *(ulong *)(puVar6 + -0x28);
        }
        else {
          auVar43._8_8_ = 6;
          auVar43._0_8_ = uVar18;
          auVar44._8_8_ = 1;
          auVar44._0_8_ = uVar22;
          puVar36 = &UNK_0150bae4;
          puVar6 = puVar6 + -0x30;
        }
        goto code_r0x0150bc48;
      }
    }
code_r0x0150bb24:
    uVar17 = func_0x00f78b24();
    func_0x00f78ac0(uVar17,0);
  }
  auVar46 = func_0x00f78af4();
  puVar5 = puVar6 + -0x40;
  puVar34 = puVar6 + -0x40;
  *(undefined1 **)(puVar6 + -0x40) = puVar35;
  *(undefined **)(puVar6 + -0x38) = &Atlas_UI_TopBarManager__GetButtonElementState;
  lVar30 = *(long *)(auVar46._0_8_ + 0x28);
  auVar46._8_4_ = auVar46._8_4_;
  auVar46._0_8_ = lVar30;
  if (lVar30 == 0) {
    puVar36 = &Atlas_UI_Screens_TopBarScreen__GetElementState;
    auVar46 = func_0x00f78af4();
  }
  else {
    puVar5 = puVar6 + -0x30;
    puVar34 = *(undefined1 **)(puVar6 + -0x40);
    puVar36 = *(undefined **)(puVar6 + -0x38);
  }
  *(undefined1 **)(puVar5 + -0x10) = puVar34;
  *(undefined **)(puVar5 + -8) = puVar36;
  lVar30 = *(long *)(auVar46._0_8_ + 0x70);
  if (auVar46._8_4_ < 9) {
    uVar19 = *(uint *)(&UNK_033f869c + (long)(int)auVar46._8_4_ * 4);
  }
  else {
    uVar19 = 0xffffffff;
  }
  if (lVar30 == 0) {
    func_0x00f78af4();
  }
  else if (uVar19 < *(uint *)(lVar30 + 0x18)) {
    return (ulong)*(uint *)(lVar30 + (ulong)uVar19 * 0x60 + 0x58);
  }
  uVar17 = func_0x00f78b24();
  uVar22 = func_0x00f78ac0(uVar17,0);
  *(undefined1 **)(puVar5 + -0x20) = puVar5 + -0x10;
  *(undefined **)(puVar5 + -0x18) = &Atlas_UI_TopBarManager__SetNextPanelEnabledVisuals;
  if (*(long *)(uVar22 + 0x28) != 0) {
    *(undefined1 *)(*(long *)(uVar22 + 0x28) + 0x80) = extraout_w1;
    return uVar22;
  }
  uVar18 = func_0x00f78af4();
  puVar6 = puVar5 + -0x40;
  *(ulong *)(puVar5 + -0x40) = uVar24;
  *(ulong *)(puVar5 + -0x38) = uVar15;
  *(undefined1 **)(puVar5 + -0x30) = puVar5 + -0x20;
  *(undefined **)(puVar5 + -0x28) = &Atlas_UI_TopBarManager__RequestHideBackAndNextAndPanels;
  puVar35 = puVar5 + -0x30;
  if (*(ulong *)(uVar18 + 0x28) == 0) {
    puVar36 = &Atlas_UI_Screens_TopBarScreen__RequestElementVisible;
    auVar43 = func_0x00f78af4();
    auVar44._8_8_ = uVar14;
    auVar44._0_8_ = uVar24;
  }
  else {
    auVar43._8_8_ = 0;
    auVar43._0_8_ = *(ulong *)(uVar18 + 0x28);
    uVar23 = 0;
    auVar44._8_8_ = 1;
    auVar44._0_8_ = uVar24;
    puVar36 = &UNK_0150bbf4;
    puVar6 = puVar5 + -0x40;
  }
code_r0x0150bc48:
  do {
    uVar24 = auVar43._0_8_;
    *(long *)(puVar6 + -0x20) = auVar44._0_8_;
    *(ulong *)(puVar6 + -0x18) = uVar18;
    *(undefined1 **)(puVar6 + -0x10) = puVar35;
    *(undefined **)(puVar6 + -8) = puVar36;
    uVar19 = auVar43._8_4_;
    if (uVar19 == 0xffffffff) {
      return uVar24;
    }
    lVar30 = *(long *)(uVar24 + 0x70);
    if (lVar30 == 0) {
      func_0x00f78af4();
      uVar22 = uVar18;
    }
    else {
      uVar22 = auVar43._8_8_;
      if (uVar19 < *(uint *)(lVar30 + 0x18)) {
        uVar10 = 2;
        if ((int)uVar23 == 0) {
          uVar10 = 0;
        }
        *(undefined4 *)(lVar30 + (long)(int)uVar19 * 0x60 + 0x5c) = uVar10;
        if ((auVar44._8_8_ & 1) == 0) {
          /*Atlas.UI.Screens.TopBarScreen$$ForceButtonState*/ func_0x0150c3bc(uVar24,auVar43._8_8_);
        }
        *(undefined8 *)(puVar6 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar6 + -0x58) = unaff_x27;
        *(undefined8 ****)(puVar6 + -0x50) = unaff_x26;
        *(long **)(puVar6 + -0x48) = unaff_x25;
        *(undefined8 *******)(puVar6 + -0x40) = unaff_x24;
        *(undefined8 *******)(puVar6 + -0x38) = unaff_x23;
        *(long *)(puVar6 + -0x30) = lVar11;
        *(ulong *)(puVar6 + -0x28) = uVar25;
        *(undefined8 *)(puVar6 + -0x20) = *(undefined8 *)(puVar6 + -0x20);
        *(undefined8 *)(puVar6 + -0x18) = *(undefined8 *)(puVar6 + -0x18);
        *(undefined8 *)(puVar6 + -0x10) = *(undefined8 *)(puVar6 + -0x10);
        *(undefined8 *)(puVar6 + -8) = *(undefined8 *)(puVar6 + -8);
        lVar30 = 0x3eb4000;
        if ((bRam0000000003eb4d5b & 1) == 0) {
          func_0x00f78a20(0x3d2a408);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4d5b = 1;
        }
        lVar12 = *(long *)(uVar24 + 0x70);
        if (lVar12 == 0) goto code_r0x0150c7d4;
        if (*(uint *)(lVar12 + 0x18) <= uVar19) goto code_r0x0150c7d8;
        unaff_x25 = (long *)(long)(int)uVar19;
        lVar12 = lVar12 + (long)unaff_x25 * 0x60;
        unaff_x26 = *(undefined8 ****)(lVar12 + 0x20);
        lVar11 = *(long *)(lVar12 + 0x28);
        uVar14 = *(undefined8 *)(lVar12 + 0x30);
        uVar37 = *(undefined8 *)(lVar12 + 0x48);
        uVar17 = *(undefined8 *)(lVar12 + 0x40);
        *(undefined8 *)(puVar6 + -0xe8) = *(undefined8 *)(lVar12 + 0x38);
        *(undefined8 *)(puVar6 + -0xf0) = uVar14;
        *(undefined8 *)(puVar6 + -0xd8) = uVar37;
        *(undefined8 *)(puVar6 + -0xe0) = uVar17;
        lVar30 = *(long *)(lVar12 + 0x50);
        iVar9 = *(int *)(lVar12 + 0x58);
        iVar2 = *(int *)(lVar12 + 0x5c);
        unaff_x23 = *(undefined8 *******)(lVar12 + 0x60);
        unaff_x24 = *(undefined8 *******)(lVar12 + 0x68);
        uVar14 = *(undefined8 *)(lVar12 + 0x70);
        *(undefined8 *)(puVar6 + -0xf8) = *(undefined8 *)(lVar12 + 0x78);
        *(undefined8 *)(puVar6 + -0x100) = uVar14;
        if (iVar2 == iVar9) {
code_r0x0150c768:
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar24 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar30,0,0);
          if ((int)uVar24 == 0) {
            return uVar24;
          }
          if (lVar30 != 0) {
            uVar24 = /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar30,iVar9 == 2,0);
            return uVar24;
          }
        }
        else if (iVar9 == 2) {
          if (iVar2 == 0) {
            if (unaff_x24 == (undefined8 ******)0x0) goto code_r0x0150c7d4;
            uVar17 = *(undefined8 *)(lVar12 + 0x38);
            uVar14 = *(undefined8 *)(lVar12 + 0x30);
            uVar38 = *(undefined8 *)(lVar12 + 0x48);
            uVar37 = *(undefined8 *)(lVar12 + 0x40);
            *(undefined8 *)(puVar6 + -0x118) = uVar17;
            *(undefined8 *)(puVar6 + -0x120) = uVar14;
            *(undefined8 *)(puVar6 + -0x108) = uVar38;
            *(undefined8 *)(puVar6 + -0x110) = uVar37;
            uVar40 = *(undefined8 *)(lVar12 + 0x78);
            uVar39 = *(undefined8 *)(lVar12 + 0x70);
            *(undefined8 *)(puVar6 + -0x128) = uVar40;
            *(undefined8 *)(puVar6 + -0x130) = uVar39;
            *(undefined8 ****)(puVar6 + -200) = unaff_x26;
            *(long *)(puVar6 + -0xc0) = lVar11;
            *(undefined8 *)(puVar6 + -0xb0) = uVar17;
            *(undefined8 *)(puVar6 + -0xb8) = uVar14;
            *(undefined8 *)(puVar6 + -0xa0) = uVar38;
            *(undefined8 *)(puVar6 + -0xa8) = uVar37;
            *(long *)(puVar6 + -0x98) = lVar30;
            *(undefined8 *)(puVar6 + -0x90) = _UNK_033f8620;
            *(undefined8 *******)(puVar6 + -0x88) = unaff_x23;
            *(undefined8 *******)(puVar6 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar6 + -0x70) = uVar40;
            *(undefined8 *)(puVar6 + -0x78) = uVar39;
            ppppppuVar27 = unaff_x24;
code_r0x0150c724:
            /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(ppppppuVar27,puVar6 + -200,uRam0000000003d2a408);
            iVar9 = 1;
          }
          else {
            iVar9 = 2;
          }
code_r0x0150c72c:
          lVar12 = *(long *)(uVar24 + 0x70);
          if (lVar12 != 0) {
            if (*(uint *)(lVar12 + 0x18) <= uVar19) goto code_r0x0150c7d8;
            lVar12 = lVar12 + (long)unaff_x25 * 0x60;
            *(undefined8 ****)(lVar12 + 0x20) = unaff_x26;
            *(long *)(lVar12 + 0x28) = lVar11;
            uVar14 = *(undefined8 *)(puVar6 + -0xf0);
            uVar37 = *(undefined8 *)(puVar6 + -0xd8);
            uVar17 = *(undefined8 *)(puVar6 + -0xe0);
            *(undefined8 *)(lVar12 + 0x38) = *(undefined8 *)(puVar6 + -0xe8);
            *(undefined8 *)(lVar12 + 0x30) = uVar14;
            *(undefined8 *)(lVar12 + 0x48) = uVar37;
            *(undefined8 *)(lVar12 + 0x40) = uVar17;
            *(long *)(lVar12 + 0x50) = lVar30;
            *(int *)(lVar12 + 0x58) = iVar9;
            *(int *)(lVar12 + 0x5c) = iVar2;
            *(undefined8 *******)(lVar12 + 0x60) = unaff_x23;
            *(undefined8 *******)(lVar12 + 0x68) = unaff_x24;
            uVar14 = *(undefined8 *)(puVar6 + -0x100);
            *(undefined8 *)(lVar12 + 0x78) = *(undefined8 *)(puVar6 + -0xf8);
            *(undefined8 *)(lVar12 + 0x70) = uVar14;
            goto code_r0x0150c768;
          }
        }
        else {
          if (iVar9 != 0) goto code_r0x0150c72c;
          if (iVar2 != 2) {
            iVar9 = 0;
            goto code_r0x0150c72c;
          }
          if (((lVar11 != 0) && (lVar12 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar11,0), lVar12 != 0)) &&
             (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar12,1,0), unaff_x23 != (undefined8 ******)0x0)) {
            *(undefined8 ****)(puVar6 + -200) = unaff_x26;
            *(long *)(puVar6 + -0xc0) = lVar11;
            *(undefined8 *)(puVar6 + -0xb0) = *(undefined8 *)(puVar6 + -0xe8);
            *(undefined8 *)(puVar6 + -0xb8) = *(undefined8 *)(puVar6 + -0xf0);
            *(undefined8 *)(puVar6 + -0xa0) = *(undefined8 *)(puVar6 + -0xd8);
            *(undefined8 *)(puVar6 + -0xa8) = *(undefined8 *)(puVar6 + -0xe0);
            *(long *)(puVar6 + -0x98) = lVar30;
            *(undefined8 *)(puVar6 + -0x90) = _UNK_033f8628;
            *(undefined8 *******)(puVar6 + -0x88) = unaff_x23;
            *(undefined8 *******)(puVar6 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar6 + -0x70) = *(undefined8 *)(puVar6 + -0xf8);
            *(undefined8 *)(puVar6 + -0x78) = *(undefined8 *)(puVar6 + -0x100);
            ppppppuVar27 = unaff_x23;
            goto code_r0x0150c724;
          }
        }
code_r0x0150c7d4:
        func_0x00f78af4();
code_r0x0150c7d8:
        uVar14 = func_0x00f78b24();
        auVar45 = func_0x00f78ac0(uVar14,0);
        lVar12 = auVar45._8_8_;
        *(undefined8 ****)(puVar6 + -0x180) = unaff_x26;
        *(long **)(puVar6 + -0x178) = unaff_x25;
        *(undefined8 *******)(puVar6 + -0x170) = unaff_x24;
        *(undefined8 *******)(puVar6 + -0x168) = unaff_x23;
        *(long *)(puVar6 + -0x160) = lVar11;
        *(undefined1 (*) [16])(puVar6 + -0x158) = auVar43;
        *(long *)(puVar6 + -0x148) = lVar30;
        *(undefined1 **)(puVar6 + -0x140) = puVar6 + -0x10;
        *(undefined **)(puVar6 + -0x138) = &Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
        if ((bRam0000000003eb4d55 & 1) == 0) {
          func_0x00f78a20(0x3d5e6e0);
          func_0x00f78a20(0x3d5e7a8);
          func_0x00f78a20(0x3d5e7d0);
          func_0x00f78a20(0x3d5e850);
          func_0x00f78a20(0x3d5e888);
          bRam0000000003eb4d55 = 1;
        }
        uVar14 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar12 + 0x18),*(undefined4 *)(lVar12 + 0x1c),
                                 *(undefined4 *)(lVar12 + 0x20),_UNK_033f8144,
                                 *(undefined8 *)(lVar12 + 0x10),0,0);
        uVar14 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar14,10,uRam0000000003d5e7a8);
        uVar14 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar14,*(undefined8 *)(lVar12 + 0x58),uRam0000000003d5e6e0);
        uVar14 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar14,1,uRam0000000003d5e888);
        uVar24 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar14,auVar45._0_8_,uRam0000000003d5e850);
        if ((uVar24 != 0) && (*(char *)(uVar24 + 0xe8) != '\0')) {
          *(undefined8 *)(uVar24 + 0x30) = *(undefined8 *)(lVar12 + 0x10);
        }
        return uVar24;
      }
    }
    uVar14 = func_0x00f78b24();
    auVar45 = func_0x00f78ac0(uVar14,0);
    puVar7 = puVar6 + -0x30;
    puVar35 = puVar6 + -0x30;
    *(undefined1 **)(puVar6 + -0x30) = puVar6 + -0x10;
    *(undefined **)(puVar6 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
    lVar30 = *(long *)(auVar45._0_8_ + 0x28);
    auVar44._8_8_ = auVar45._8_8_;
    auVar44._0_8_ = lVar30;
    if (lVar30 == 0) {
      puVar36 = &Atlas_UI_Screens_TopBarScreen__HideNextPanel;
      auVar44 = func_0x00f78af4();
    }
    else {
      puVar7 = puVar6 + -0x20;
      puVar35 = *(undefined1 **)(puVar6 + -0x30);
      puVar36 = *(undefined **)(puVar6 + -0x28);
    }
    uVar18 = auVar44._8_8_;
    *(ulong *)(puVar7 + -0x20) = uVar24;
    *(ulong *)(puVar7 + -0x18) = uVar22;
    *(undefined1 **)(puVar7 + -0x10) = puVar35;
    *(undefined **)(puVar7 + -8) = puVar36;
    puVar35 = puVar7 + -0x10;
    auVar43._8_8_ = 4;
    auVar43._0_8_ = auVar44._0_8_;
    uVar23 = 0;
    puVar36 = &UNK_0150bd10;
    puVar6 = puVar7 + -0x20;
  } while( true );
}



// ============================================================
// RVA: 0x14522f4 | Atlas.UI.Screens.ArcadeMapSelectScreen.OnOptionSelected
// ============================================================

/* WARNING: Possible PIC construction at 0x014525c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01635710: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bd0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bbf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bc20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0150bbf4) */
/* WARNING: Removing unreachable block (ram,0x0150bbfc) */
/* WARNING: Removing unreachable block (ram,0x0150bc14) */
/* WARNING: Removing unreachable block (ram,0x0150bd10) */
/* WARNING: Removing unreachable block (ram,0x01635714) */
/* WARNING: Removing unreachable block (ram,0x01635718) */
/* WARNING: Removing unreachable block (ram,0x0163577c) */
/* WARNING: Removing unreachable block (ram,0x01635750) */
/* WARNING: Removing unreachable block (ram,0x01ed77c0) */
/* WARNING: Removing unreachable block (ram,0x01ed77e8) */
/* WARNING: Removing unreachable block (ram,0x01ed7810) */
/* WARNING: Removing unreachable block (ram,0x01ed7828) */
/* WARNING: Removing unreachable block (ram,0x01ed784c) */
/* WARNING: Removing unreachable block (ram,0x01ed786c) */
/* WARNING: Removing unreachable block (ram,0x01ed7878) */
/* WARNING: Removing unreachable block (ram,0x01ed78b8) */
/* WARNING: Removing unreachable block (ram,0x01ed78bc) */
/* WARNING: Removing unreachable block (ram,0x01ed78e0) */
/* WARNING: Removing unreachable block (ram,0x01ed797c) */
/* WARNING: Removing unreachable block (ram,0x01ed7908) */
/* WARNING: Removing unreachable block (ram,0x01ed7928) */
/* WARNING: Removing unreachable block (ram,0x01ed7934) */
/* WARNING: Removing unreachable block (ram,0x01ed7994) */
/* WARNING: Removing unreachable block (ram,0x01ed7998) */
/* WARNING: Removing unreachable block (ram,0x01ed79bc) */
/* WARNING: Removing unreachable block (ram,0x01ed79c8) */
/* WARNING: Removing unreachable block (ram,0x01ed79d4) */
/* WARNING: Removing unreachable block (ram,0x01ed79e4) */
/* WARNING: Removing unreachable block (ram,0x01ed79ec) */
/* WARNING: Removing unreachable block (ram,0x01ed7a34) */
/* WARNING: Removing unreachable block (ram,0x01ed7a40) */
/* WARNING: Removing unreachable block (ram,0x01ed7a74) */
/* WARNING: Removing unreachable block (ram,0x01ed7b20) */
/* WARNING: Removing unreachable block (ram,0x01ed7b2c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b34) */
/* WARNING: Removing unreachable block (ram,0x01ed7b3c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b40) */
/* WARNING: Removing unreachable block (ram,0x01ed7b48) */
/* WARNING: Removing unreachable block (ram,0x01ed7b50) */
/* WARNING: Removing unreachable block (ram,0x01ed7a94) */
/* WARNING: Removing unreachable block (ram,0x01ed7ab8) */
/* WARNING: Removing unreachable block (ram,0x01ed7ac4) */
/* WARNING: Removing unreachable block (ram,0x01ed7acc) */
/* WARNING: Removing unreachable block (ram,0x01ed7ad8) */
/* WARNING: Removing unreachable block (ram,0x01ed7ae4) */
/* WARNING: Removing unreachable block (ram,0x01ed7b80) */
/* WARNING: Removing unreachable block (ram,0x01ed7b84) */
/* WARNING: Removing unreachable block (ram,0x01ed7bb0) */
/* WARNING: Removing unreachable block (ram,0x01ed7bb8) */
/* WARNING: Removing unreachable block (ram,0x01ed7bc8) */
/* WARNING: Removing unreachable block (ram,0x01ed7bd0) */
/* WARNING: Removing unreachable block (ram,0x01ed7d50) */
/* WARNING: Removing unreachable block (ram,0x01ed7bfc) */
/* WARNING: Removing unreachable block (ram,0x01ed7c08) */
/* WARNING: Removing unreachable block (ram,0x01ed7c10) */
/* WARNING: Removing unreachable block (ram,0x01ed7c18) */
/* WARNING: Removing unreachable block (ram,0x01ed7c24) */
/* WARNING: Removing unreachable block (ram,0x01ed7c2c) */
/* WARNING: Removing unreachable block (ram,0x01ed7c90) */
/* WARNING: Removing unreachable block (ram,0x01ed7c9c) */
/* WARNING: Removing unreachable block (ram,0x01ed7d18) */
/* WARNING: Removing unreachable block (ram,0x01ed7d1c) */
/* WARNING: Removing unreachable block (ram,0x01ed7d80) */
/* WARNING: Removing unreachable block (ram,0x01ed7c54) */
/* WARNING: Removing unreachable block (ram,0x01ed7c64) */
/* WARNING: Removing unreachable block (ram,0x01ed7c74) */
/* WARNING: Removing unreachable block (ram,0x01ed7ae8) */
/* WARNING: Removing unreachable block (ram,0x01ed7b68) */
/* WARNING: Removing unreachable block (ram,0x01ed7b08) */
/* WARNING: Removing unreachable block (ram,0x01ed7b0c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b1c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b60) */
/* WARNING: Removing unreachable block (ram,0x01ed7b6c) */
/* WARNING: Removing unreachable block (ram,0x01ed7a50) */
/* WARNING: Removing unreachable block (ram,0x01ed79f0) */
/* WARNING: Removing unreachable block (ram,0x01ed7a00) */
/* WARNING: Removing unreachable block (ram,0x01ed7a28) */
/* WARNING: Removing unreachable block (ram,0x01ed7938) */
/* WARNING: Removing unreachable block (ram,0x01ed7958) */
/* WARNING: Removing unreachable block (ram,0x01ed7980) */
/* WARNING: Removing unreachable block (ram,0x01ed787c) */
/* WARNING: Removing unreachable block (ram,0x01ed78a4) */
/* WARNING: Removing unreachable block (ram,0x01ed789c) */
/* WARNING: Removing unreachable block (ram,0x01ed78a8) */
/* WARNING: Removing unreachable block (ram,0x01ed77f8) */
/* WARNING: Removing unreachable block (ram,0x01ed77cc) */
/* WARNING: Removing unreachable block (ram,0x0150bc24) */
/* WARNING: Removing unreachable block (ram,0x0150bc2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_Screens_ArcadeMapSelectScreen__OnOptionSelected
                (ulong param_1,long param_2,ulong param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  undefined1 **ppuVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined1 extraout_w1;
  int extraout_w1_00;
  undefined1 **ppuVar18;
  long *plVar19;
  uint uVar17;
  ulong uVar20;
  ulong uVar21;
  long unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  undefined8 *puVar22;
  undefined1 **unaff_x23;
  undefined1 **ppuVar23;
  undefined1 **unaff_x24;
  uint uVar24;
  long *unaff_x25;
  long *plVar25;
  undefined8 *unaff_x26;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar28;
  undefined1 *puVar29;
  undefined *unaff_x30;
  undefined *puVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [12];
  long lStack_1d8;
  uint uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined1 ***pppuStack_140;
  undefined *puStack_138;
  ulong uStack_130;
  long lStack_128;
  undefined1 **ppuStack_120;
  long *plStack_118;
  undefined1 **ppuStack_110;
  undefined1 **ppuStack_108;
  long lStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  long lStack_e8;
  undefined1 *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lVar16;
  
  puVar29 = &stack0xfffffffffffffff0;
  ppuVar23 = (undefined1 **)0x3eb4000;
  uVar20 = param_3;
  if ((bRam0000000003eb477c & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d40fa0);
    func_0x00f78a20(0x3d40fa8);
    func_0x00f78a20(0x3d40fb0);
    func_0x00f78a20(0x3d25608);
    bRam0000000003eb477c = 1;
  }
  puVar22 = (undefined8 *)0x3d40fb0;
  puVar26 = (undefined8 *)0x3d40fb0;
  puVar27 = puVar26;
  if ((param_3 != 0) && (param_4 != 0)) {
    puVar27 = puVar22;
    if (param_2 == 0) goto LAB_01452704;
    ppuVar23 = *(undefined1 ***)(param_1 + 0xa8);
    unaff_x24 = (undefined1 **)/*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_2,0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar20 = 0;
    iVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(ppuVar23,unaff_x24);
    if (iVar7 == 0) {
LAB_01452590:
      if (*(char *)(param_1 + 0xd2) == '\0') {
        lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d40fb0);
        puVar27 = puVar26;
        if ((lVar9 != 0) && (uVar11 = *(ulong *)(lVar9 + 0xb8), uVar11 != 0)) {
          uVar20 = 1;
          unaff_x30 = &UNK_014525c4;
          register0x00000008 = (BADSPACEBASE *)&uStack_d0;
          unaff_x19 = param_4;
          unaff_x20 = param_3;
          unaff_x21 = param_1;
          unaff_x22 = param_2;
          unaff_x23 = ppuVar23;
          unaff_x26 = puVar22;
          unaff_x29 = puVar29;
          goto code_r0x0150b9fc;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0xd2) = 1;
        *(long *)(param_1 + 0xd8) = param_2;
        ppuVar23 = (undefined1 **)0x3d40fa0;
        lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fa0);
        puVar27 = puVar26;
        if ((lVar9 != 0) &&
           (unaff_x24 = *(undefined1 ***)(lVar9 + 200), unaff_x24 != (undefined1 **)0x0)) {
          uVar17 = *(uint *)(unaff_x24 + 3);
          puVar27 = puVar22;
          if (0 < (int)uVar17) {
            unaff_x25 = (long *)0x0;
            puVar27 = &uStack_98;
            do {
              uVar24 = (uint)unaff_x25;
              ppuVar10 = (undefined1 **)0x3d40fa0;
              if (uVar17 <= uVar24) goto code_r0x01452708;
              if ((unaff_x24[(long)(int)uVar24 + 4] == (undefined1 *)0x0) ||
                 (lVar9 = *(long *)(unaff_x24[(long)(int)uVar24 + 4] + 0x68), lVar9 == 0))
              goto LAB_01452704;
              uStack_a8 = *(undefined8 *)(lVar9 + 0x20);
              uStack_90 = *(undefined8 *)(lVar9 + 0x38);
              uStack_98 = *(undefined8 *)(lVar9 + 0x30);
              uStack_88 = *(undefined8 *)(lVar9 + 0x40);
              uVar20 = 0;
              lStack_a0 = param_2;
              /*UnityEngine.UI.Selectable$$set_navigation*/ func_0x032e3820(lVar9,&uStack_a8);
              unaff_x25 = (long *)(ulong)(uVar24 + 1);
              uVar17 = *(uint *)(unaff_x24 + 3);
            } while ((int)(uVar24 + 1) < (int)uVar17);
          }
          lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fa0);
          if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x90), lVar9 != 0)) {
            uStack_68 = *(undefined8 *)(lVar9 + 0x28);
            uStack_70 = *(undefined8 *)(lVar9 + 0x20);
            uStack_78 = *(undefined8 *)(lVar9 + 0x40);
            uStack_80 = *(undefined8 *)(lVar9 + 0x38);
            lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fa0);
            if ((lVar9 != 0) && (*(long *)(lVar9 + 0x90) != 0)) {
              uStack_c8 = uStack_68;
              uStack_d0 = uStack_70;
              uStack_b0 = uStack_78;
              uStack_b8 = uStack_80;
              uVar20 = 0;
              lStack_c0 = param_2;
              /*UnityEngine.UI.Selectable$$set_navigation*/ func_0x032e3820(*(long *)(lVar9 + 0x90),&uStack_d0);
              lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d40fa8);
              if (lVar9 == 0) {
                return 0;
              }
              if (*(long *)(lVar9 + 0x10) != 0) {
                uVar20 = /*Atlas.UI.Screens.ArcadeMapSelectScreen.OptionSelected$$Invoke*/ func_0x015346b4(*(long *)(lVar9 + 0x10),param_3,param_4,0);
                return uVar20;
              }
            }
          }
        }
      }
    }
    else {
      plVar19 = (long *)0x3d40fa0;
      plVar25 = (long *)0x3d40fa0;
      lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fa0);
      unaff_x25 = plVar19;
      if (((lVar9 != 0) && (puVar27 = puVar26, *(long *)(lVar9 + 0x80) != 0)) &&
         (lVar9 = *(long *)(*(long *)(lVar9 + 0x80) + 0x18), unaff_x25 = plVar25, lVar9 != 0)) {
        ppuVar23 = (undefined1 **)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar9,0);
        lVar9 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_2,0);
        if (lVar9 != 0) {
          unaff_x24 = (undefined1 **)/*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar9,0);
          unaff_x28 = 0x3d25608;
          if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          unaff_x27 = 0x3d24188;
          if (ppuVar23 == (undefined1 **)0x0) {
            ppuVar10 = (undefined1 **)0x0;
            if (unaff_x24 != (undefined1 **)0x0) goto code_r0x0145246c;
LAB_014524d0:
            ppuVar18 = (undefined1 **)0x0;
          }
          else {
            ppuVar10 = ppuVar23;
            if (*ppuVar23 != /*UnityEngine.RectTransform_TypeInfo*/ puRam0000000003d24188) {
              ppuVar10 = (undefined1 **)0x0;
            }
            if (unaff_x24 == (undefined1 **)0x0) goto LAB_014524d0;
code_r0x0145246c:
            ppuVar18 = unaff_x24;
            if (*unaff_x24 != /*UnityEngine.RectTransform_TypeInfo*/ puRam0000000003d24188) {
              ppuVar18 = (undefined1 **)0x0;
            }
          }
          uVar20 = 0;
          uVar11 = /*Core.UI2.UIUtils$$RectContainsRectHorizontally*/ func_0x02f915a4(ppuVar10,ppuVar18);
          unaff_x25 = plVar19;
          if ((uVar11 & 1) != 0) {
code_r0x01452580:
            uVar12 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_2,0);
            *(undefined8 *)(param_1 + 0xa8) = uVar12;
            goto LAB_01452590;
          }
          lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fa0);
          unaff_x25 = plVar25;
          if (lVar9 != 0) {
            ppuVar23 = *(undefined1 ***)(lVar9 + 0x80);
            lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fa0);
            if ((lVar9 != 0) && (*(long *)(lVar9 + 0x80) != 0)) {
              unaff_x24 = *(undefined1 ***)(*(long *)(lVar9 + 0x80) + 0x18);
              lVar9 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_2,0);
              if (lVar9 != 0) {
                unaff_x25 = (long *)/*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar9,0);
                if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                if (unaff_x25 == (long *)0x0) {
                  plVar19 = (long *)0x0;
                }
                else {
                  plVar19 = unaff_x25;
                  if ((undefined1 *)*unaff_x25 != /*UnityEngine.RectTransform_TypeInfo*/ puRam0000000003d24188) {
                    plVar19 = (long *)0x0;
                  }
                }
                uVar20 = 0;
                /*Core.UI2.UIUtils$$ScrollTargetNormalizedPosition*/ func_0x02f91280(unaff_x24,plVar19,0,0);
                if (ppuVar23 != (undefined1 **)0x0) {
                  /*Atlas.UI.PaginationDotController$$ScrollToTarget*/ func_0x014b600c(ppuVar23,0);
                  goto code_r0x01452580;
                }
              }
            }
          }
        }
      }
    }
LAB_01452704:
    func_0x00f78af4();
    ppuVar10 = ppuVar23;
code_r0x01452708:
    uVar12 = func_0x00f78b24();
    lVar9 = func_0x00f78ac0(uVar12,0);
    puStack_d8 = &Atlas_UI_Screens_ArcadeMapSelectScreen__OnAfterExit;
    lStack_100 = param_2;
    uStack_f8 = param_1;
    uStack_f0 = param_3;
    lStack_e8 = param_4;
    puStack_e0 = puVar29;
    if ((bRam0000000003eb477d & 1) == 0) {
      func_0x00f78a20(0x3d40fb0);
      bRam0000000003eb477d = 1;
    }
    lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar9,uRam0000000003d40fb0);
    if ((lVar13 != 0) && (*(long *)(lVar13 + 0xb8) != 0)) {
      uVar20 = 0;
      /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar13 + 0xb8),6,0,0);
      lVar13 = *(long *)(lVar9 + 0x78);
      if (lVar13 != 0) {
        uVar17 = *(uint *)(lVar9 + 0xa0);
        uVar20 = (ulong)uVar17;
        lStack_128 = *(long *)PTR_03a5d648;
        ppuStack_120 = (undefined1 **)puVar27;
        plStack_118 = unaff_x25;
        ppuStack_110 = unaff_x24;
        ppuStack_108 = ppuVar10;
        if ((bRam0000000003eb567f & 1) == 0) {
          func_0x00f78a20(0x3d1fdb0,uVar20,0);
          func_0x00f78a20(0x3d2e030);
          func_0x00f78a20(0x3d2dfc8);
          func_0x00f78a20(0x3d3cce0);
          func_0x00f78a20(0x3d3cce8);
          func_0x00f78a20(0x3d3ccf0);
          bRam0000000003eb567f = 1;
        }
        lVar9 = *(long *)(lVar13 + 0x10);
        if (lVar9 == 0) {
code_r0x016364d0:
          func_0x00f78af4();
        }
        else {
          iVar7 = *(int *)(lVar9 + 0x18);
          if (0 < iVar7) {
            uVar24 = 0;
            do {
              if (*(uint *)(lVar9 + 0x18) <= uVar24) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              lVar9 = *(long *)(lVar9 + 0x10) + (long)(int)uVar24 * 0x20;
              uVar2 = *(uint *)(lVar9 + 0x20);
              puStack_138 = *(undefined **)(lVar9 + 0x2c);
              pppuStack_140 = *(undefined1 ****)(lVar9 + 0x24);
              uStack_130 = CONCAT44(uStack_130._4_4_,*(undefined4 *)(lVar9 + 0x34));
              uStack_148._0_7_ =
                   CONCAT43(*(undefined4 *)(lVar9 + 0x3c),(int3)*(undefined4 *)(lVar9 + 0x39));
              if (((*(byte *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              if (uVar2 == uVar17) {
                if (*(long *)(lVar13 + 0x10) != 0) {
                  uStack_1c4 = SUB84(puStack_138,0);
                  uStack_1c0 = (undefined4)((ulong)puStack_138 >> 0x20);
                  uStack_1cc = SUB84(pppuStack_140,0);
                  uStack_1c8 = (undefined4)((ulong)pppuStack_140 >> 0x20);
                  uStack_1bc = (undefined4)uStack_130;
                  uStack_1b8._0_5_ = CONCAT41((undefined4)uStack_148,1);
                  uStack_1b8 = CONCAT44(uStack_148._3_4_,(undefined4)uStack_1b8);
                  uStack_1d0 = uVar17;
                  /*System.Collections.Generic.List<AssetManager.AssetRequest>$$set_Item*/ func_0x024afabc(*(long *)(lVar13 + 0x10),uVar24,&uStack_1d0,uRam0000000003d3ccf0);
                  if (*(long *)(lVar13 + 0x28) != 0) {
                    lVar9 = *(long *)(lVar13 + 0x18);
                    uVar8 = /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManagerHandle>$$get_Item*/ func_0x01e2ca80(*(long *)(lVar13 + 0x28),uVar20,uRam0000000003d2dfc8);
                    lVar13 = 0;
                    if (lVar9 != 0) {
                      uVar20 = /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$get_Item*/ func_0x01e2fa1c(&uStack_1d0,lVar9,uVar8,uRam0000000003d2e030);
                      if (*(long *)PTR_03a5d648 == lStack_128) {
                        return uVar20;
                      }
                      goto code_r0x016365d0;
                    }
                  }
                }
                break;
              }
              if (iVar7 - 1U == uVar24) goto code_r0x016364d4;
              lVar9 = *(long *)(lVar13 + 0x10);
              uVar24 = uVar24 + 1;
            } while (lVar9 != 0);
            goto code_r0x016364d0;
          }
        }
code_r0x016364d4:
        lVar9 = lStack_100;
        if (*(long *)PTR_03a5d648 != lStack_128) {
code_r0x016365d0:
          iVar7 = ___stack_chk_fail();
          return (ulong)(iVar7 == extraout_w1_00);
        }
        if ((bRam0000000003eb568e & 1) == 0) {
          func_0x00f78a20(0x3d2dfa0);
          func_0x00f78a20(0x3d2dfb8);
          bRam0000000003eb568e = 1;
        }
        ppuStack_108 = (undefined1 **)((ulong)ppuStack_108 & 0xffffffff00000000);
        if (*(long *)(lVar13 + 0x28) != 0) {
          uVar11 = /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManagerHandle>$$TryGetValue*/ func_0x01e2e668(*(long *)(lVar13 + 0x28),uVar20,&ppuStack_108,
                                   uRam0000000003d2dfb8);
          if ((int)uVar11 == 0) {
            return uVar11;
          }
          if (*(long *)(lVar13 + 0x28) != 0) {
            /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManagerHandle>$$Remove*/ func_0x01e2e39c(*(long *)(lVar13 + 0x28),uVar20,uRam0000000003d2dfa0);
            uVar20 = /*Core.Assets.AssetManager$$RemoveAssetReference*/ func_0x016373f0(lVar13,(ulong)ppuStack_108 & 0xffffffff);
            return uVar20;
          }
        }
        auVar37 = func_0x00f78af4();
        lVar16 = auVar37._0_8_;
        pppuStack_140 = (undefined1 ***)lVar9;
        puStack_138 = (undefined *)0x3eb5000;
        plStack_118 = (long *)&Core_Assets_AssetManager__ReleaseAsset;
        uStack_130 = uVar20;
        lStack_128 = lVar13;
        ppuStack_120 = &puStack_e0;
        if ((bRam0000000003eb5690 & 1) == 0) {
          func_0x00f78a20(0x3d433e8);
          func_0x00f78a20(0x3d43408);
          func_0x00f78a20(0x3d43420);
          func_0x00f78a20(0x3d1fae0);
          func_0x00f78a20(0x3d2c050);
          func_0x00f78a20(0x3d2be18);
          func_0x00f78a20(0x3d2bfa0);
          func_0x00f78a20(0x3d2fac8);
          func_0x00f78a20(0x3d2e008);
          func_0x00f78a20(0x3d2fec0);
          func_0x00f78a20(0x3d2e020);
          func_0x00f78a20(0x3d35c80);
          bRam0000000003eb5690 = 1;
        }
        lStack_150 = 0;
        uStack_168 = 0;
        uStack_170 = 0;
        uStack_158 = 0;
        uStack_160 = 0;
        uStack_188 = 0;
        uStack_190 = 0;
        uStack_178 = 0;
        uStack_180 = 0;
        uStack_1a8 = 0;
        uStack_1b0 = 0;
        uStack_198 = 0;
        uStack_1a0 = 0;
        uStack_1c8 = 0;
        uStack_1c4 = 0;
        uStack_1d0 = 0;
        uStack_1cc = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        uStack_1bc = 0;
        lStack_1d8 = 0;
        if (*(long *)(lVar16 + 0x18) == 0) goto code_r0x01635688;
        uVar11 = auVar37._8_8_ & 0xffffffff;
        uVar20 = /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$TryGetValue*/ func_0x01e31a4c(*(long *)(lVar16 + 0x18),uVar11,&uStack_1d0,uRam0000000003d2e020);
        if ((int)uVar20 == 0) {
          return uVar20;
        }
        if (*(long *)(lVar16 + 0x30) == 0) goto code_r0x01635688;
        uVar20 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(*(long *)(lVar16 + 0x30),CONCAT44(uStack_1bc,uStack_1c0),
                                 &lStack_1d8,uRam0000000003d2fec0);
        if ((int)uVar20 == 0) {
          return uVar20;
        }
        if ((char)uStack_1b8 == '\0') {
          if (uStack_1b8._1_1_ == '\0') {
            uVar12 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(&uStack_1b0,uRam0000000003d2bfa0);
            if ((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) {
              iVar7 = *(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0);
              puVar22 = (undefined8 *)0x3d43408;
              goto joined_r0x01635680;
            }
            puVar22 = (undefined8 *)0x3d43408;
          }
          else {
            uVar12 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(&uStack_190,uRam0000000003d2c050);
            if ((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) == 0) {
              puVar22 = (undefined8 *)0x3d43420;
            }
            else {
              iVar7 = *(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0);
              puVar22 = (undefined8 *)0x3d43420;
joined_r0x01635680:
              if (iVar7 == 0) {
                func_0x00f78ad0();
              }
            }
          }
        }
        else {
          uVar12 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(&uStack_170,uRam0000000003d2be18);
          if ((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) {
            iVar7 = *(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0);
            puVar22 = (undefined8 *)0x3d433e8;
            goto joined_r0x01635680;
          }
          puVar22 = (undefined8 *)0x3d433e8;
        }
        /*UnityEngine.AddressableAssets.Addressables$$Release<Sprite>*/ func_0x0171fc38(uVar12,*puVar22);
        if (*(long *)(lVar16 + 0x18) != 0) {
          /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$Remove*/ func_0x01e3174c(*(long *)(lVar16 + 0x18),uVar11,uRam0000000003d2e008);
          if (((*(long *)(lVar16 + 0x20) != 0) &&
              (/*System.Collections.Generic.Dictionary<string, AssetManagerHandle>$$Remove*/ func_0x01ec0ba4(*(long *)(lVar16 + 0x20),CONCAT44(uStack_1c4,uStack_1c8),
                               uRam0000000003d2fac8), lStack_1d8 != 0)) &&
             (*(long *)(lStack_1d8 + 0x20) != 0)) {
            uVar20 = /*System.Collections.Generic.HashSet<AssetManagerHandle>$$Remove*/ func_0x021cefec(*(long *)(lStack_1d8 + 0x20),uVar11,uRam0000000003d35c80);
            return uVar20;
          }
        }
code_r0x01635688:
        func_0x00f78af4();
        if ((bRam0000000003eb567a & 1) == 0) {
          func_0x00f78a20(0x3d26978);
          func_0x00f78a20(0x3d2feb0);
          func_0x00f78a20(0x3d35c68);
          func_0x00f78a20(0x3d1cdf8);
          bRam0000000003eb567a = 1;
        }
        uVar20 = func_0x00f78aec(/*Core.Assets.AssetManager.BucketInstance_TypeInfo*/ uRam0000000003d26978);
        return uVar20;
      }
    }
    auVar37 = func_0x00f78af4();
    lVar13 = auVar37._8_8_;
    lStack_128 = 0x3d40fb0;
    ppuStack_120 = (undefined1 **)0x3eb4000;
    ppuStack_108 = (undefined1 **)&Atlas_UI_Screens_ArcadeMapSelectScreen__HasGoldMedal;
    uStack_130 = param_2;
    plStack_118 = (long *)lVar9;
    ppuStack_110 = &puStack_e0;
    if ((bRam0000000003eb4780 & 1) == 0) {
      func_0x00f78a20(0x3d2e268);
      func_0x00f78a20(0x3d2e270);
      bRam0000000003eb4780 = 1;
    }
    if ((lVar13 != 0) && (lVar9 = *(long *)(auVar37._0_8_ + 0xe0), lVar9 != 0)) {
      uVar11 = /*System.Collections.Generic.Dictionary<DefinitionID, RandomDefinitionIDPool>$$ContainsKey*/ func_0x01e3c30c(lVar9,*(undefined8 *)(lVar13 + 0x18),uRam0000000003d2e268);
      if ((int)uVar11 == 0) {
        return uVar11;
      }
      lVar9 = *(long *)(auVar37._0_8_ + 0xe0);
      if ((lVar9 != 0) &&
         (lVar9 = /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$get_Item*/ func_0x01e3bfc0(lVar9,*(undefined8 *)(lVar13 + 0x18),uRam0000000003d2e270),
         lVar9 != 0)) {
        if (*(uint *)(lVar9 + 0x18) <= (uint)uVar20) goto code_r0x01452860;
        if (*(long *)(lVar9 + (long)(int)(uint)uVar20 * 8 + 0x20) != 0) {
          iVar7 = /*Atlas.UI.ArcadeEventMetagameData$$GetCurrentMedal*/ func_0x0144ec24();
          return (ulong)(iVar7 == 3);
        }
      }
    }
    func_0x00f78af4();
code_r0x01452860:
    uVar12 = func_0x00f78b24();
    uVar11 = func_0x00f78ac0(uVar12,0);
    puStack_138 = &Atlas_UI_Screens_ArcadeMapSelectScreen__OnUpdate;
    lStack_150 = lVar13;
    uStack_148 = uVar20;
    pppuStack_140 = &ppuStack_110;
    /*Core.UI2.UIScreen$$OnUpdate*/ func_0x02f8a624(uVar11,0);
    uVar20 = uVar11;
    if ((*(char *)(uVar11 + 0xd0) != '\0') && (*(char *)(uVar11 + 0xd1) == '\0')) {
      *(undefined1 *)(uVar11 + 0xd1) = 1;
      iVar7 = 0;
      do {
        uVar20 = /*Atlas.UI.Screens.ArcadeMapSelectScreen$$RunRewardSequenceIfRewardUnseen*/ func_0x014528ec(uVar11,iVar7);
        if ((uVar20 & 1) != 0) {
          return uVar20;
        }
        bVar6 = iVar7 != 5;
        iVar7 = iVar7 + 1;
      } while (bVar6);
    }
    return uVar20;
  }
  *(undefined1 *)(param_1 + 0xd2) = 0;
  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d40fb0);
  if ((lVar9 == 0) || (uVar11 = *(ulong *)(lVar9 + 0xb8), uVar11 == 0)) goto LAB_01452704;
  uVar20 = 0;
code_r0x0150b9fc:
  uVar12 = 1;
  puVar4 = (undefined1 *)((long)register0x00000008 + -0x20);
  *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  puVar29 = (undefined1 *)((long)register0x00000008 + -0x10);
  if (*(long *)(uVar11 + 0x28) == 0) {
code_r0x0150ba34:
    puVar30 = &Atlas_UI_Screens_TopBarScreen__ShowBackingPanelsIfRequired;
    auVar37 = func_0x00f78af4();
  }
  else {
    /*Atlas.UI.Screens.TopBarScreen$$RequestButtonVisible*/ func_0x0150b5b8(*(long *)(uVar11 + 0x28),6,uVar20,1,0);
    if (*(ulong *)(uVar11 + 0x28) == 0) goto code_r0x0150ba34;
    auVar37._8_8_ = 0;
    auVar37._0_8_ = *(ulong *)(uVar11 + 0x28);
    uVar20 = 0;
    puVar29 = *(undefined1 **)((long)register0x00000008 + -0x10);
    puVar30 = *(undefined **)((long)register0x00000008 + -8);
    unaff_x20 = *(ulong *)((long)register0x00000008 + -0x20);
    uVar11 = *(ulong *)((long)register0x00000008 + -0x18);
    puVar4 = (undefined1 *)register0x00000008;
  }
  uVar15 = auVar37._0_8_;
  *(long *)(puVar4 + -0x30) = unaff_x22;
  *(ulong *)(puVar4 + -0x28) = unaff_x21;
  *(ulong *)(puVar4 + -0x20) = unaff_x20;
  *(ulong *)(puVar4 + -0x18) = uVar11;
  *(undefined1 **)(puVar4 + -0x10) = puVar29;
  *(undefined **)(puVar4 + -8) = puVar30;
  puVar29 = puVar4 + -0x10;
  lVar9 = *(long *)(uVar15 + 0x70);
  uVar21 = uVar20;
  if (lVar9 != 0) {
    uVar17 = *(uint *)(lVar9 + 0x18);
    if (uVar17 != 0) {
      uVar11 = uVar15;
      unaff_x20 = uVar20;
      if (*(int *)(lVar9 + 0x5c) - 1U < 2) {
        uVar21 = 1;
      }
      else {
        if (uVar17 < 2) goto code_r0x0150bb24;
        uVar21 = (ulong)(*(int *)(lVar9 + 0xbc) - 1U < 2);
      }
      if (4 < uVar17) {
        if (*(int *)(lVar9 + 0x1dc) - 1U < 2) {
          unaff_x21 = 1;
        }
        else {
          if (uVar17 < 6) goto code_r0x0150bb24;
          unaff_x21 = (ulong)(*(int *)(lVar9 + 0x23c) - 1U < 2);
        }
        if (((int)uVar21 == 0) || ((auVar37._8_8_ & 1) != 0)) {
          if (((uint)unaff_x21 & ((uint)uVar20 ^ 1)) != 1) {
            return uVar15;
          }
          auVar35._8_8_ = 7;
          auVar35._0_8_ = uVar15;
          uVar21 = 1;
          puVar29 = *(undefined1 **)(puVar4 + -0x10);
          puVar30 = *(undefined **)(puVar4 + -8);
          auVar36._8_8_ = 1;
          auVar36._0_8_ = *(undefined8 *)(puVar4 + -0x20);
          uVar15 = *(ulong *)(puVar4 + -0x18);
          unaff_x22 = *(long *)(puVar4 + -0x30);
          unaff_x21 = *(ulong *)(puVar4 + -0x28);
        }
        else {
          auVar35._8_8_ = 6;
          auVar35._0_8_ = uVar15;
          auVar36._8_8_ = 1;
          auVar36._0_8_ = uVar20;
          puVar30 = &UNK_0150bae4;
          puVar4 = puVar4 + -0x30;
        }
        goto code_r0x0150bc48;
      }
    }
code_r0x0150bb24:
    uVar14 = func_0x00f78b24();
    func_0x00f78ac0(uVar14,0);
  }
  auVar38 = func_0x00f78af4();
  puVar3 = puVar4 + -0x40;
  puVar28 = puVar4 + -0x40;
  *(undefined1 **)(puVar4 + -0x40) = puVar29;
  *(undefined **)(puVar4 + -0x38) = &Atlas_UI_TopBarManager__GetButtonElementState;
  lVar9 = *(long *)(auVar38._0_8_ + 0x28);
  auVar38._8_4_ = auVar38._8_4_;
  auVar38._0_8_ = lVar9;
  if (lVar9 == 0) {
    puVar30 = &Atlas_UI_Screens_TopBarScreen__GetElementState;
    auVar38 = func_0x00f78af4();
  }
  else {
    puVar3 = puVar4 + -0x30;
    puVar28 = *(undefined1 **)(puVar4 + -0x40);
    puVar30 = *(undefined **)(puVar4 + -0x38);
  }
  *(undefined1 **)(puVar3 + -0x10) = puVar28;
  *(undefined **)(puVar3 + -8) = puVar30;
  lVar9 = *(long *)(auVar38._0_8_ + 0x70);
  if (auVar38._8_4_ < 9) {
    uVar17 = *(uint *)(&UNK_033f869c + (long)(int)auVar38._8_4_ * 4);
  }
  else {
    uVar17 = 0xffffffff;
  }
  if (lVar9 == 0) {
    func_0x00f78af4();
  }
  else if (uVar17 < *(uint *)(lVar9 + 0x18)) {
    return (ulong)*(uint *)(lVar9 + (ulong)uVar17 * 0x60 + 0x58);
  }
  uVar14 = func_0x00f78b24();
  uVar20 = func_0x00f78ac0(uVar14,0);
  *(undefined1 **)(puVar3 + -0x20) = puVar3 + -0x10;
  *(undefined **)(puVar3 + -0x18) = &Atlas_UI_TopBarManager__SetNextPanelEnabledVisuals;
  if (*(long *)(uVar20 + 0x28) != 0) {
    *(undefined1 *)(*(long *)(uVar20 + 0x28) + 0x80) = extraout_w1;
    return uVar20;
  }
  uVar15 = func_0x00f78af4();
  puVar4 = puVar3 + -0x40;
  *(ulong *)(puVar3 + -0x40) = unaff_x20;
  *(ulong *)(puVar3 + -0x38) = uVar11;
  *(undefined1 **)(puVar3 + -0x30) = puVar3 + -0x20;
  *(undefined **)(puVar3 + -0x28) = &Atlas_UI_TopBarManager__RequestHideBackAndNextAndPanels;
  puVar29 = puVar3 + -0x30;
  if (*(ulong *)(uVar15 + 0x28) == 0) {
    puVar30 = &Atlas_UI_Screens_TopBarScreen__RequestElementVisible;
    auVar35 = func_0x00f78af4();
    auVar36._8_8_ = uVar12;
    auVar36._0_8_ = unaff_x20;
  }
  else {
    auVar35._8_8_ = 0;
    auVar35._0_8_ = *(ulong *)(uVar15 + 0x28);
    uVar21 = 0;
    auVar36._8_8_ = 1;
    auVar36._0_8_ = unaff_x20;
    puVar30 = &UNK_0150bbf4;
    puVar4 = puVar3 + -0x40;
  }
code_r0x0150bc48:
  do {
    uVar20 = auVar35._0_8_;
    *(long *)(puVar4 + -0x20) = auVar36._0_8_;
    *(ulong *)(puVar4 + -0x18) = uVar15;
    *(undefined1 **)(puVar4 + -0x10) = puVar29;
    *(undefined **)(puVar4 + -8) = puVar30;
    uVar17 = auVar35._8_4_;
    if (uVar17 == 0xffffffff) {
      return uVar20;
    }
    lVar9 = *(long *)(uVar20 + 0x70);
    if (lVar9 == 0) {
      func_0x00f78af4();
      uVar11 = uVar15;
    }
    else {
      uVar11 = auVar35._8_8_;
      if (uVar17 < *(uint *)(lVar9 + 0x18)) {
        uVar8 = 2;
        if ((int)uVar21 == 0) {
          uVar8 = 0;
        }
        *(undefined4 *)(lVar9 + (long)(int)uVar17 * 0x60 + 0x5c) = uVar8;
        if ((auVar36._8_8_ & 1) == 0) {
          /*Atlas.UI.Screens.TopBarScreen$$ForceButtonState*/ func_0x0150c3bc(uVar20,auVar35._8_8_);
        }
        *(undefined8 *)(puVar4 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar4 + -0x58) = unaff_x27;
        *(undefined8 **)(puVar4 + -0x50) = unaff_x26;
        *(long **)(puVar4 + -0x48) = unaff_x25;
        *(undefined1 ***)(puVar4 + -0x40) = unaff_x24;
        *(undefined1 ***)(puVar4 + -0x38) = unaff_x23;
        *(long *)(puVar4 + -0x30) = unaff_x22;
        *(ulong *)(puVar4 + -0x28) = unaff_x21;
        *(undefined8 *)(puVar4 + -0x20) = *(undefined8 *)(puVar4 + -0x20);
        *(undefined8 *)(puVar4 + -0x18) = *(undefined8 *)(puVar4 + -0x18);
        *(undefined8 *)(puVar4 + -0x10) = *(undefined8 *)(puVar4 + -0x10);
        *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
        lVar9 = 0x3eb4000;
        if ((bRam0000000003eb4d5b & 1) == 0) {
          func_0x00f78a20(0x3d2a408);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4d5b = 1;
        }
        lVar13 = *(long *)(uVar20 + 0x70);
        if (lVar13 == 0) goto code_r0x0150c7d4;
        if (*(uint *)(lVar13 + 0x18) <= uVar17) goto code_r0x0150c7d8;
        unaff_x25 = (long *)(long)(int)uVar17;
        lVar13 = lVar13 + (long)unaff_x25 * 0x60;
        unaff_x26 = *(undefined8 **)(lVar13 + 0x20);
        unaff_x22 = *(long *)(lVar13 + 0x28);
        uVar12 = *(undefined8 *)(lVar13 + 0x30);
        uVar31 = *(undefined8 *)(lVar13 + 0x48);
        uVar14 = *(undefined8 *)(lVar13 + 0x40);
        *(undefined8 *)(puVar4 + -0xe8) = *(undefined8 *)(lVar13 + 0x38);
        *(undefined8 *)(puVar4 + -0xf0) = uVar12;
        *(undefined8 *)(puVar4 + -0xd8) = uVar31;
        *(undefined8 *)(puVar4 + -0xe0) = uVar14;
        lVar9 = *(long *)(lVar13 + 0x50);
        iVar7 = *(int *)(lVar13 + 0x58);
        iVar1 = *(int *)(lVar13 + 0x5c);
        unaff_x23 = *(undefined1 ***)(lVar13 + 0x60);
        unaff_x24 = *(undefined1 ***)(lVar13 + 0x68);
        uVar12 = *(undefined8 *)(lVar13 + 0x70);
        *(undefined8 *)(puVar4 + -0xf8) = *(undefined8 *)(lVar13 + 0x78);
        *(undefined8 *)(puVar4 + -0x100) = uVar12;
        if (iVar1 == iVar7) {
code_r0x0150c768:
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar20 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar9,0,0);
          if ((int)uVar20 == 0) {
            return uVar20;
          }
          if (lVar9 != 0) {
            uVar20 = /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar9,iVar7 == 2,0);
            return uVar20;
          }
        }
        else if (iVar7 == 2) {
          if (iVar1 == 0) {
            if (unaff_x24 == (undefined1 **)0x0) goto code_r0x0150c7d4;
            uVar14 = *(undefined8 *)(lVar13 + 0x38);
            uVar12 = *(undefined8 *)(lVar13 + 0x30);
            uVar32 = *(undefined8 *)(lVar13 + 0x48);
            uVar31 = *(undefined8 *)(lVar13 + 0x40);
            *(undefined8 *)(puVar4 + -0x118) = uVar14;
            *(undefined8 *)(puVar4 + -0x120) = uVar12;
            *(undefined8 *)(puVar4 + -0x108) = uVar32;
            *(undefined8 *)(puVar4 + -0x110) = uVar31;
            uVar34 = *(undefined8 *)(lVar13 + 0x78);
            uVar33 = *(undefined8 *)(lVar13 + 0x70);
            *(undefined8 *)(puVar4 + -0x128) = uVar34;
            *(undefined8 *)(puVar4 + -0x130) = uVar33;
            *(undefined8 **)(puVar4 + -200) = unaff_x26;
            *(long *)(puVar4 + -0xc0) = unaff_x22;
            *(undefined8 *)(puVar4 + -0xb0) = uVar14;
            *(undefined8 *)(puVar4 + -0xb8) = uVar12;
            *(undefined8 *)(puVar4 + -0xa0) = uVar32;
            *(undefined8 *)(puVar4 + -0xa8) = uVar31;
            *(long *)(puVar4 + -0x98) = lVar9;
            *(undefined8 *)(puVar4 + -0x90) = _UNK_033f8620;
            *(undefined1 ***)(puVar4 + -0x88) = unaff_x23;
            *(undefined1 ***)(puVar4 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar4 + -0x70) = uVar34;
            *(undefined8 *)(puVar4 + -0x78) = uVar33;
            ppuVar23 = unaff_x24;
code_r0x0150c724:
            /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(ppuVar23,puVar4 + -200,uRam0000000003d2a408);
            iVar7 = 1;
          }
          else {
            iVar7 = 2;
          }
code_r0x0150c72c:
          lVar13 = *(long *)(uVar20 + 0x70);
          if (lVar13 != 0) {
            if (*(uint *)(lVar13 + 0x18) <= uVar17) goto code_r0x0150c7d8;
            lVar13 = lVar13 + (long)unaff_x25 * 0x60;
            *(undefined8 **)(lVar13 + 0x20) = unaff_x26;
            *(long *)(lVar13 + 0x28) = unaff_x22;
            uVar12 = *(undefined8 *)(puVar4 + -0xf0);
            uVar31 = *(undefined8 *)(puVar4 + -0xd8);
            uVar14 = *(undefined8 *)(puVar4 + -0xe0);
            *(undefined8 *)(lVar13 + 0x38) = *(undefined8 *)(puVar4 + -0xe8);
            *(undefined8 *)(lVar13 + 0x30) = uVar12;
            *(undefined8 *)(lVar13 + 0x48) = uVar31;
            *(undefined8 *)(lVar13 + 0x40) = uVar14;
            *(long *)(lVar13 + 0x50) = lVar9;
            *(int *)(lVar13 + 0x58) = iVar7;
            *(int *)(lVar13 + 0x5c) = iVar1;
            *(undefined1 ***)(lVar13 + 0x60) = unaff_x23;
            *(undefined1 ***)(lVar13 + 0x68) = unaff_x24;
            uVar12 = *(undefined8 *)(puVar4 + -0x100);
            *(undefined8 *)(lVar13 + 0x78) = *(undefined8 *)(puVar4 + -0xf8);
            *(undefined8 *)(lVar13 + 0x70) = uVar12;
            goto code_r0x0150c768;
          }
        }
        else {
          if (iVar7 != 0) goto code_r0x0150c72c;
          if (iVar1 != 2) {
            iVar7 = 0;
            goto code_r0x0150c72c;
          }
          if (((unaff_x22 != 0) && (lVar13 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x22,0), lVar13 != 0)) &&
             (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar13,1,0), unaff_x23 != (undefined1 **)0x0)) {
            *(undefined8 **)(puVar4 + -200) = unaff_x26;
            *(long *)(puVar4 + -0xc0) = unaff_x22;
            *(undefined8 *)(puVar4 + -0xb0) = *(undefined8 *)(puVar4 + -0xe8);
            *(undefined8 *)(puVar4 + -0xb8) = *(undefined8 *)(puVar4 + -0xf0);
            *(undefined8 *)(puVar4 + -0xa0) = *(undefined8 *)(puVar4 + -0xd8);
            *(undefined8 *)(puVar4 + -0xa8) = *(undefined8 *)(puVar4 + -0xe0);
            *(long *)(puVar4 + -0x98) = lVar9;
            *(undefined8 *)(puVar4 + -0x90) = _UNK_033f8628;
            *(undefined1 ***)(puVar4 + -0x88) = unaff_x23;
            *(undefined1 ***)(puVar4 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar4 + -0x70) = *(undefined8 *)(puVar4 + -0xf8);
            *(undefined8 *)(puVar4 + -0x78) = *(undefined8 *)(puVar4 + -0x100);
            ppuVar23 = unaff_x23;
            goto code_r0x0150c724;
          }
        }
code_r0x0150c7d4:
        func_0x00f78af4();
code_r0x0150c7d8:
        uVar12 = func_0x00f78b24();
        auVar37 = func_0x00f78ac0(uVar12,0);
        lVar13 = auVar37._8_8_;
        *(undefined8 **)(puVar4 + -0x180) = unaff_x26;
        *(long **)(puVar4 + -0x178) = unaff_x25;
        *(undefined1 ***)(puVar4 + -0x170) = unaff_x24;
        *(undefined1 ***)(puVar4 + -0x168) = unaff_x23;
        *(long *)(puVar4 + -0x160) = unaff_x22;
        *(undefined1 (*) [16])(puVar4 + -0x158) = auVar35;
        *(long *)(puVar4 + -0x148) = lVar9;
        *(undefined1 **)(puVar4 + -0x140) = puVar4 + -0x10;
        *(undefined **)(puVar4 + -0x138) = &Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
        if ((bRam0000000003eb4d55 & 1) == 0) {
          func_0x00f78a20(0x3d5e6e0);
          func_0x00f78a20(0x3d5e7a8);
          func_0x00f78a20(0x3d5e7d0);
          func_0x00f78a20(0x3d5e850);
          func_0x00f78a20(0x3d5e888);
          bRam0000000003eb4d55 = 1;
        }
        uVar12 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar13 + 0x18),*(undefined4 *)(lVar13 + 0x1c),
                                 *(undefined4 *)(lVar13 + 0x20),_UNK_033f8144,
                                 *(undefined8 *)(lVar13 + 0x10),0,0);
        uVar12 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar12,10,uRam0000000003d5e7a8);
        uVar12 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar12,*(undefined8 *)(lVar13 + 0x58),uRam0000000003d5e6e0);
        uVar12 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar12,1,uRam0000000003d5e888);
        uVar20 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar12,auVar37._0_8_,uRam0000000003d5e850);
        if ((uVar20 != 0) && (*(char *)(uVar20 + 0xe8) != '\0')) {
          *(undefined8 *)(uVar20 + 0x30) = *(undefined8 *)(lVar13 + 0x10);
        }
        return uVar20;
      }
    }
    uVar12 = func_0x00f78b24();
    auVar37 = func_0x00f78ac0(uVar12,0);
    puVar5 = puVar4 + -0x30;
    puVar29 = puVar4 + -0x30;
    *(undefined1 **)(puVar4 + -0x30) = puVar4 + -0x10;
    *(undefined **)(puVar4 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
    lVar9 = *(long *)(auVar37._0_8_ + 0x28);
    auVar36._8_8_ = auVar37._8_8_;
    auVar36._0_8_ = lVar9;
    if (lVar9 == 0) {
      puVar30 = &Atlas_UI_Screens_TopBarScreen__HideNextPanel;
      auVar36 = func_0x00f78af4();
    }
    else {
      puVar5 = puVar4 + -0x20;
      puVar29 = *(undefined1 **)(puVar4 + -0x30);
      puVar30 = *(undefined **)(puVar4 + -0x28);
    }
    uVar15 = auVar36._8_8_;
    *(ulong *)(puVar5 + -0x20) = uVar20;
    *(ulong *)(puVar5 + -0x18) = uVar11;
    *(undefined1 **)(puVar5 + -0x10) = puVar29;
    *(undefined **)(puVar5 + -8) = puVar30;
    puVar29 = puVar5 + -0x10;
    auVar35._8_8_ = 4;
    auVar35._0_8_ = auVar36._0_8_;
    uVar21 = 0;
    puVar30 = &UNK_0150bd10;
    puVar4 = puVar5 + -0x20;
  } while( true );
}



// ============================================================
// RVA: 0x1452714 | Atlas.UI.Screens.ArcadeMapSelectScreen.OnAfterExit
// ============================================================

/* WARNING: Possible PIC construction at 0x01635710: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01635714) */
/* WARNING: Removing unreachable block (ram,0x01635718) */
/* WARNING: Removing unreachable block (ram,0x0163577c) */
/* WARNING: Removing unreachable block (ram,0x01635750) */
/* WARNING: Removing unreachable block (ram,0x01ed77c0) */
/* WARNING: Removing unreachable block (ram,0x01ed77e8) */
/* WARNING: Removing unreachable block (ram,0x01ed7810) */
/* WARNING: Removing unreachable block (ram,0x01ed7828) */
/* WARNING: Removing unreachable block (ram,0x01ed784c) */
/* WARNING: Removing unreachable block (ram,0x01ed786c) */
/* WARNING: Removing unreachable block (ram,0x01ed7878) */
/* WARNING: Removing unreachable block (ram,0x01ed78b8) */
/* WARNING: Removing unreachable block (ram,0x01ed78bc) */
/* WARNING: Removing unreachable block (ram,0x01ed78e0) */
/* WARNING: Removing unreachable block (ram,0x01ed797c) */
/* WARNING: Removing unreachable block (ram,0x01ed7908) */
/* WARNING: Removing unreachable block (ram,0x01ed7928) */
/* WARNING: Removing unreachable block (ram,0x01ed7934) */
/* WARNING: Removing unreachable block (ram,0x01ed7994) */
/* WARNING: Removing unreachable block (ram,0x01ed7998) */
/* WARNING: Removing unreachable block (ram,0x01ed79bc) */
/* WARNING: Removing unreachable block (ram,0x01ed79c8) */
/* WARNING: Removing unreachable block (ram,0x01ed79d4) */
/* WARNING: Removing unreachable block (ram,0x01ed79e4) */
/* WARNING: Removing unreachable block (ram,0x01ed79ec) */
/* WARNING: Removing unreachable block (ram,0x01ed7a34) */
/* WARNING: Removing unreachable block (ram,0x01ed7a40) */
/* WARNING: Removing unreachable block (ram,0x01ed7a74) */
/* WARNING: Removing unreachable block (ram,0x01ed7b20) */
/* WARNING: Removing unreachable block (ram,0x01ed7b2c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b34) */
/* WARNING: Removing unreachable block (ram,0x01ed7b3c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b40) */
/* WARNING: Removing unreachable block (ram,0x01ed7b48) */
/* WARNING: Removing unreachable block (ram,0x01ed7b50) */
/* WARNING: Removing unreachable block (ram,0x01ed7a94) */
/* WARNING: Removing unreachable block (ram,0x01ed7ab8) */
/* WARNING: Removing unreachable block (ram,0x01ed7ac4) */
/* WARNING: Removing unreachable block (ram,0x01ed7acc) */
/* WARNING: Removing unreachable block (ram,0x01ed7ad8) */
/* WARNING: Removing unreachable block (ram,0x01ed7ae4) */
/* WARNING: Removing unreachable block (ram,0x01ed7b80) */
/* WARNING: Removing unreachable block (ram,0x01ed7b84) */
/* WARNING: Removing unreachable block (ram,0x01ed7bb0) */
/* WARNING: Removing unreachable block (ram,0x01ed7bb8) */
/* WARNING: Removing unreachable block (ram,0x01ed7bc8) */
/* WARNING: Removing unreachable block (ram,0x01ed7bd0) */
/* WARNING: Removing unreachable block (ram,0x01ed7d50) */
/* WARNING: Removing unreachable block (ram,0x01ed7bfc) */
/* WARNING: Removing unreachable block (ram,0x01ed7c08) */
/* WARNING: Removing unreachable block (ram,0x01ed7c10) */
/* WARNING: Removing unreachable block (ram,0x01ed7c18) */
/* WARNING: Removing unreachable block (ram,0x01ed7c24) */
/* WARNING: Removing unreachable block (ram,0x01ed7c2c) */
/* WARNING: Removing unreachable block (ram,0x01ed7c90) */
/* WARNING: Removing unreachable block (ram,0x01ed7c9c) */
/* WARNING: Removing unreachable block (ram,0x01ed7d18) */
/* WARNING: Removing unreachable block (ram,0x01ed7d1c) */
/* WARNING: Removing unreachable block (ram,0x01ed7d80) */
/* WARNING: Removing unreachable block (ram,0x01ed7c54) */
/* WARNING: Removing unreachable block (ram,0x01ed7c64) */
/* WARNING: Removing unreachable block (ram,0x01ed7c74) */
/* WARNING: Removing unreachable block (ram,0x01ed7ae8) */
/* WARNING: Removing unreachable block (ram,0x01ed7b68) */
/* WARNING: Removing unreachable block (ram,0x01ed7b08) */
/* WARNING: Removing unreachable block (ram,0x01ed7b0c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b1c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b60) */
/* WARNING: Removing unreachable block (ram,0x01ed7b6c) */
/* WARNING: Removing unreachable block (ram,0x01ed7a50) */
/* WARNING: Removing unreachable block (ram,0x01ed79f0) */
/* WARNING: Removing unreachable block (ram,0x01ed7a00) */
/* WARNING: Removing unreachable block (ram,0x01ed7a28) */
/* WARNING: Removing unreachable block (ram,0x01ed7938) */
/* WARNING: Removing unreachable block (ram,0x01ed7958) */
/* WARNING: Removing unreachable block (ram,0x01ed7980) */
/* WARNING: Removing unreachable block (ram,0x01ed787c) */
/* WARNING: Removing unreachable block (ram,0x01ed78a4) */
/* WARNING: Removing unreachable block (ram,0x01ed789c) */
/* WARNING: Removing unreachable block (ram,0x01ed78a8) */
/* WARNING: Removing unreachable block (ram,0x01ed77f8) */
/* WARNING: Removing unreachable block (ram,0x01ed77cc) */

ulong Atlas_UI_Screens_ArcadeMapSelectScreen__OnAfterExit
                (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  int extraout_w1;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined1 auVar14 [16];
  long lStack_108;
  int iStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  
  if ((bRam0000000003eb477d & 1) == 0) {
    func_0x00f78a20(0x3d40fb0);
    bRam0000000003eb477d = 1;
  }
  lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d40fb0);
  if ((lVar6 != 0) && (*(long *)(lVar6 + 0xb8) != 0)) {
    param_3 = 0;
    /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar6 + 0xb8),6,0,0);
    lVar6 = *(long *)(param_1 + 0x78);
    if (lVar6 != 0) {
      iVar5 = *(int *)(param_1 + 0xa0);
      lVar9 = *(long *)PTR_03a5d648;
      if ((bRam0000000003eb567f & 1) == 0) {
        func_0x00f78a20(0x3d1fdb0,iVar5,0);
        func_0x00f78a20(0x3d2e030);
        func_0x00f78a20(0x3d2dfc8);
        func_0x00f78a20(0x3d3cce0);
        func_0x00f78a20(0x3d3cce8);
        func_0x00f78a20(0x3d3ccf0);
        bRam0000000003eb567f = 1;
      }
      lVar13 = *(long *)(lVar6 + 0x10);
      if (lVar13 == 0) {
code_r0x016364d0:
        func_0x00f78af4();
      }
      else {
        iVar1 = *(int *)(lVar13 + 0x18);
        if (0 < iVar1) {
          uVar11 = 0;
          do {
            if (*(uint *)(lVar13 + 0x18) <= uVar11) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar13 = *(long *)(lVar13 + 0x10) + (long)(int)uVar11 * 0x20;
            iVar2 = *(int *)(lVar13 + 0x20);
            puStack_68 = *(undefined **)(lVar13 + 0x2c);
            puStack_70 = *(undefined1 **)(lVar13 + 0x24);
            uVar4 = *(undefined4 *)(lVar13 + 0x34);
            uStack_78._0_7_ =
                 CONCAT43(*(undefined4 *)(lVar13 + 0x3c),(int3)*(undefined4 *)(lVar13 + 0x39));
            if (((*(byte *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            if (iVar2 == iVar5) {
              if (*(long *)(lVar6 + 0x10) != 0) {
                uStack_f4 = SUB84(puStack_68,0);
                uStack_f0 = (undefined4)((ulong)puStack_68 >> 0x20);
                uStack_fc = SUB84(puStack_70,0);
                uStack_f8 = (undefined4)((ulong)puStack_70 >> 0x20);
                uStack_e8._0_5_ = CONCAT41((undefined4)uStack_78,1);
                uStack_e8 = CONCAT44(uStack_78._3_4_,(undefined4)uStack_e8);
                iStack_100 = iVar5;
                uStack_ec = uVar4;
                /*System.Collections.Generic.List<AssetManager.AssetRequest>$$set_Item*/ func_0x024afabc(*(long *)(lVar6 + 0x10),uVar11,&iStack_100,uRam0000000003d3ccf0);
                if (*(long *)(lVar6 + 0x28) != 0) {
                  lVar13 = *(long *)(lVar6 + 0x18);
                  uVar4 = /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManagerHandle>$$get_Item*/ func_0x01e2ca80(*(long *)(lVar6 + 0x28),iVar5,uRam0000000003d2dfc8);
                  lVar6 = 0;
                  if (lVar13 != 0) {
                    uVar7 = /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$get_Item*/ func_0x01e2fa1c(&iStack_100,lVar13,uVar4,uRam0000000003d2e030);
                    if (*(long *)PTR_03a5d648 == lVar9) {
                      return uVar7;
                    }
                    goto code_r0x016365d0;
                  }
                }
              }
              break;
            }
            if (iVar1 - 1U == uVar11) goto code_r0x016364d4;
            lVar13 = *(long *)(lVar6 + 0x10);
            uVar11 = uVar11 + 1;
          } while (lVar13 != 0);
          goto code_r0x016364d0;
        }
      }
code_r0x016364d4:
      if (*(long *)PTR_03a5d648 != lVar9) {
code_r0x016365d0:
        iVar5 = ___stack_chk_fail();
        return (ulong)(iVar5 == extraout_w1);
      }
      if ((bRam0000000003eb568e & 1) == 0) {
        func_0x00f78a20(0x3d2dfa0);
        func_0x00f78a20(0x3d2dfb8);
        bRam0000000003eb568e = 1;
      }
      if (*(long *)(lVar6 + 0x28) != 0) {
        uVar7 = /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManagerHandle>$$TryGetValue*/ func_0x01e2e668(*(long *)(lVar6 + 0x28),iVar5,&stack0xffffffffffffffc8,
                                uRam0000000003d2dfb8);
        if ((int)uVar7 == 0) {
          return uVar7;
        }
        if (*(long *)(lVar6 + 0x28) != 0) {
          /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManagerHandle>$$Remove*/ func_0x01e2e39c(*(long *)(lVar6 + 0x28),iVar5,uRam0000000003d2dfa0);
          uVar7 = /*Core.Assets.AssetManager$$RemoveAssetReference*/ func_0x016373f0(lVar6,0);
          return uVar7;
        }
      }
      auVar14 = func_0x00f78af4();
      lVar6 = auVar14._0_8_;
      puStack_68 = (undefined *)0x3eb5000;
      if ((bRam0000000003eb5690 & 1) == 0) {
        func_0x00f78a20(0x3d433e8);
        func_0x00f78a20(0x3d43408);
        func_0x00f78a20(0x3d43420);
        func_0x00f78a20(0x3d1fae0);
        func_0x00f78a20(0x3d2c050);
        func_0x00f78a20(0x3d2be18);
        func_0x00f78a20(0x3d2bfa0);
        func_0x00f78a20(0x3d2fac8);
        func_0x00f78a20(0x3d2e008);
        func_0x00f78a20(0x3d2fec0);
        func_0x00f78a20(0x3d2e020);
        func_0x00f78a20(0x3d35c80);
        bRam0000000003eb5690 = 1;
      }
      lStack_80 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_f8 = 0;
      uStack_f4 = 0;
      iStack_100 = 0;
      uStack_fc = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_ec = 0;
      lStack_108 = 0;
      if (*(long *)(lVar6 + 0x18) == 0) goto code_r0x01635688;
      uVar10 = auVar14._8_8_ & 0xffffffff;
      uVar7 = /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$TryGetValue*/ func_0x01e31a4c(*(long *)(lVar6 + 0x18),uVar10,&iStack_100,uRam0000000003d2e020);
      if ((int)uVar7 == 0) {
        return uVar7;
      }
      if (*(long *)(lVar6 + 0x30) == 0) goto code_r0x01635688;
      uVar7 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(*(long *)(lVar6 + 0x30),CONCAT44(uStack_ec,uStack_f0),&lStack_108,
                              uRam0000000003d2fec0);
      if ((int)uVar7 == 0) {
        return uVar7;
      }
      if ((char)uStack_e8 == '\0') {
        if (uStack_e8._1_1_ == '\0') {
          uVar8 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(&uStack_e0,uRam0000000003d2bfa0);
          if ((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) {
            iVar5 = *(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0);
            puVar12 = (undefined8 *)0x3d43408;
            goto joined_r0x01635680;
          }
          puVar12 = (undefined8 *)0x3d43408;
        }
        else {
          uVar8 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(&uStack_c0,uRam0000000003d2c050);
          if ((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) == 0) {
            puVar12 = (undefined8 *)0x3d43420;
          }
          else {
            iVar5 = *(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0);
            puVar12 = (undefined8 *)0x3d43420;
joined_r0x01635680:
            if (iVar5 == 0) {
              func_0x00f78ad0();
            }
          }
        }
      }
      else {
        uVar8 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(&uStack_a0,uRam0000000003d2be18);
        if ((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) {
          iVar5 = *(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0);
          puVar12 = (undefined8 *)0x3d433e8;
          goto joined_r0x01635680;
        }
        puVar12 = (undefined8 *)0x3d433e8;
      }
      /*UnityEngine.AddressableAssets.Addressables$$Release<Sprite>*/ func_0x0171fc38(uVar8,*puVar12);
      if (*(long *)(lVar6 + 0x18) != 0) {
        /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$Remove*/ func_0x01e3174c(*(long *)(lVar6 + 0x18),uVar10,uRam0000000003d2e008);
        if (((*(long *)(lVar6 + 0x20) != 0) &&
            (/*System.Collections.Generic.Dictionary<string, AssetManagerHandle>$$Remove*/ func_0x01ec0ba4(*(long *)(lVar6 + 0x20),CONCAT44(uStack_f4,uStack_f8),
                             uRam0000000003d2fac8), lStack_108 != 0)) &&
           (*(long *)(lStack_108 + 0x20) != 0)) {
          uVar7 = /*System.Collections.Generic.HashSet<AssetManagerHandle>$$Remove*/ func_0x021cefec(*(long *)(lStack_108 + 0x20),uVar10,uRam0000000003d35c80);
          return uVar7;
        }
      }
code_r0x01635688:
      func_0x00f78af4();
      if ((bRam0000000003eb567a & 1) == 0) {
        func_0x00f78a20(0x3d26978);
        func_0x00f78a20(0x3d2feb0);
        func_0x00f78a20(0x3d35c68);
        func_0x00f78a20(0x3d1cdf8);
        bRam0000000003eb567a = 1;
      }
      uVar7 = func_0x00f78aec(/*Core.Assets.AssetManager.BucketInstance_TypeInfo*/ uRam0000000003d26978);
      return uVar7;
    }
  }
  auVar14 = func_0x00f78af4();
  lVar6 = auVar14._8_8_;
  if ((bRam0000000003eb4780 & 1) == 0) {
    func_0x00f78a20(0x3d2e268);
    func_0x00f78a20(0x3d2e270);
    bRam0000000003eb4780 = 1;
  }
  if ((lVar6 != 0) && (lVar9 = *(long *)(auVar14._0_8_ + 0xe0), lVar9 != 0)) {
    uVar7 = /*System.Collections.Generic.Dictionary<DefinitionID, RandomDefinitionIDPool>$$ContainsKey*/ func_0x01e3c30c(lVar9,*(undefined8 *)(lVar6 + 0x18),uRam0000000003d2e268);
    if ((int)uVar7 == 0) {
      return uVar7;
    }
    lVar9 = *(long *)(auVar14._0_8_ + 0xe0);
    if ((lVar9 != 0) &&
       (lVar9 = /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$get_Item*/ func_0x01e3bfc0(lVar9,*(undefined8 *)(lVar6 + 0x18),uRam0000000003d2e270),
       lVar9 != 0)) {
      if (*(uint *)(lVar9 + 0x18) <= (uint)param_3) goto code_r0x01452860;
      if (*(long *)(lVar9 + (long)(int)(uint)param_3 * 8 + 0x20) != 0) {
        iVar5 = /*Atlas.UI.ArcadeEventMetagameData$$GetCurrentMedal*/ func_0x0144ec24();
        return (ulong)(iVar5 == 3);
      }
    }
  }
  func_0x00f78af4();
code_r0x01452860:
  uVar8 = func_0x00f78b24();
  uVar10 = func_0x00f78ac0(uVar8,0);
  puStack_68 = &Atlas_UI_Screens_ArcadeMapSelectScreen__OnUpdate;
  lStack_80 = lVar6;
  uStack_78 = param_3;
  puStack_70 = &stack0xffffffffffffffc0;
  /*Core.UI2.UIScreen$$OnUpdate*/ func_0x02f8a624(uVar10,0);
  uVar7 = uVar10;
  if ((*(char *)(uVar10 + 0xd0) != '\0') && (*(char *)(uVar10 + 0xd1) == '\0')) {
    *(undefined1 *)(uVar10 + 0xd1) = 1;
    iVar5 = 0;
    do {
      uVar7 = /*Atlas.UI.Screens.ArcadeMapSelectScreen$$RunRewardSequenceIfRewardUnseen*/ func_0x014528ec(uVar10,iVar5);
      if ((uVar7 & 1) != 0) {
        return uVar7;
      }
      bVar3 = iVar5 != 5;
      iVar5 = iVar5 + 1;
    } while (bVar3);
  }
  return uVar7;
}



// ============================================================
// RVA: 0x145279c | Atlas.UI.Screens.ArcadeMapSelectScreen.HasGoldMedal
// ============================================================

ulong Atlas_UI_Screens_ArcadeMapSelectScreen__HasGoldMedal(long param_1,long param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  if ((bRam0000000003eb4780 & 1) == 0) {
    func_0x00f78a20(0x3d2e268);
    func_0x00f78a20(0x3d2e270);
    bRam0000000003eb4780 = 1;
  }
  if ((param_2 != 0) && (*(long *)(param_1 + 0xe0) != 0)) {
    uVar3 = /*System.Collections.Generic.Dictionary<DefinitionID, RandomDefinitionIDPool>$$ContainsKey*/ func_0x01e3c30c(*(long *)(param_1 + 0xe0),*(undefined8 *)(param_2 + 0x18),
                            uRam0000000003d2e268);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    if ((*(long *)(param_1 + 0xe0) != 0) &&
       (lVar4 = /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$get_Item*/ func_0x01e3bfc0(*(long *)(param_1 + 0xe0),*(undefined8 *)(param_2 + 0x18),
                                uRam0000000003d2e270), lVar4 != 0)) {
      if (*(uint *)(lVar4 + 0x18) <= param_3) goto LAB_01452860;
      if (*(long *)(lVar4 + (long)(int)param_3 * 8 + 0x20) != 0) {
        iVar2 = /*Atlas.UI.ArcadeEventMetagameData$$GetCurrentMedal*/ func_0x0144ec24();
        return (ulong)(iVar2 == 3);
      }
    }
  }
  func_0x00f78af4();
LAB_01452860:
  uVar5 = func_0x00f78b24();
  uVar6 = func_0x00f78ac0(uVar5,0);
  /*Core.UI2.UIScreen$$OnUpdate*/ func_0x02f8a624(uVar6,0);
  uVar3 = uVar6;
  if ((*(char *)(uVar6 + 0xd0) != '\0') && (*(char *)(uVar6 + 0xd1) == '\0')) {
    *(undefined1 *)(uVar6 + 0xd1) = 1;
    iVar2 = 0;
    do {
      uVar3 = /*Atlas.UI.Screens.ArcadeMapSelectScreen$$RunRewardSequenceIfRewardUnseen*/ func_0x014528ec(uVar6,iVar2);
      if ((uVar3 & 1) != 0) {
        return uVar3;
      }
      bVar1 = iVar2 != 5;
      iVar2 = iVar2 + 1;
    } while (bVar1);
  }
  return uVar3;
}



// ============================================================
// RVA: 0x145286c | Atlas.UI.Screens.ArcadeMapSelectScreen.OnUpdate
// ============================================================

void Atlas_UI_Screens_ArcadeMapSelectScreen__OnUpdate(long param_1)

{
  bool bVar1;
  ulong uVar2;
  int iVar3;
  
  /*Core.UI2.UIScreen$$OnUpdate*/ func_0x02f8a624(param_1,0);
  if ((*(char *)(param_1 + 0xd0) != '\0') && (*(char *)(param_1 + 0xd1) == '\0')) {
    *(undefined1 *)(param_1 + 0xd1) = 1;
    iVar3 = 0;
    do {
      uVar2 = /*Atlas.UI.Screens.ArcadeMapSelectScreen$$RunRewardSequenceIfRewardUnseen*/ func_0x014528ec(param_1,iVar3);
      if ((uVar2 & 1) != 0) {
        return;
      }
      bVar1 = iVar3 != 5;
      iVar3 = iVar3 + 1;
    } while (bVar1);
  }
  return;
}



// ============================================================
// RVA: 0x1452894 | Atlas.UI.Screens.ArcadeMapSelectScreen.RunRewardSequencesIfUnseen
// ============================================================

void Atlas_UI_Screens_ArcadeMapSelectScreen__RunRewardSequencesIfUnseen(long param_1)

{
  bool bVar1;
  ulong uVar2;
  int iVar3;
  
  if ((*(char *)(param_1 + 0xd0) != '\0') && (*(char *)(param_1 + 0xd1) == '\0')) {
    *(undefined1 *)(param_1 + 0xd1) = 1;
    iVar3 = 0;
    do {
      uVar2 = /*Atlas.UI.Screens.ArcadeMapSelectScreen$$RunRewardSequenceIfRewardUnseen*/ func_0x014528ec(param_1,iVar3);
      if ((uVar2 & 1) != 0) {
        return;
      }
      bVar1 = iVar3 != 5;
      iVar3 = iVar3 + 1;
    } while (bVar1);
  }
  return;
}



// ============================================================
// RVA: 0x14528ec | Atlas.UI.Screens.ArcadeMapSelectScreen.RunRewardSequenceIfRewardUnseen
// ============================================================

/* WARNING: Possible PIC construction at 0x01452a68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01452a98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01452ac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01452b04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01633784: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01452d88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01452e70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01452ed8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01452e74) */
/* WARNING: Removing unreachable block (ram,0x01452e80) */
/* WARNING: Removing unreachable block (ram,0x01452ee0) */
/* WARNING: Removing unreachable block (ram,0x01452e9c) */
/* WARNING: Removing unreachable block (ram,0x01452eac) */
/* WARNING: Removing unreachable block (ram,0x01452ebc) */
/* WARNING: Removing unreachable block (ram,0x01452ec4) */
/* WARNING: Removing unreachable block (ram,0x01452ec8) */
/* WARNING: Removing unreachable block (ram,0x01452d8c) */
/* WARNING: Removing unreachable block (ram,0x01452da0) */
/* WARNING: Removing unreachable block (ram,0x01452da8) */
/* WARNING: Removing unreachable block (ram,0x01452db4) */
/* WARNING: Removing unreachable block (ram,0x01452dc0) */
/* WARNING: Removing unreachable block (ram,0x01452de8) */
/* WARNING: Removing unreachable block (ram,0x01452df0) */
/* WARNING: Removing unreachable block (ram,0x01452dfc) */
/* WARNING: Removing unreachable block (ram,0x01452e08) */
/* WARNING: Removing unreachable block (ram,0x01452e2c) */
/* WARNING: Removing unreachable block (ram,0x01452e34) */
/* WARNING: Removing unreachable block (ram,0x01452e40) */
/* WARNING: Removing unreachable block (ram,0x01452e4c) */
/* WARNING: Removing unreachable block (ram,0x01452e60) */
/* WARNING: Removing unreachable block (ram,0x01633788) */
/* WARNING: Removing unreachable block (ram,0x0163378c) */
/* WARNING: Removing unreachable block (ram,0x01633798) */
/* WARNING: Removing unreachable block (ram,0x016337b4) */
/* WARNING: Removing unreachable block (ram,0x016337d0) */
/* WARNING: Removing unreachable block (ram,0x01633848) */
/* WARNING: Removing unreachable block (ram,0x01633828) */
/* WARNING: Removing unreachable block (ram,0x01452b08) */
/* WARNING: Removing unreachable block (ram,0x01452b0c) */
/* WARNING: Removing unreachable block (ram,0x016336d0) */
/* WARNING: Removing unreachable block (ram,0x016336ec) */
/* WARNING: Removing unreachable block (ram,0x01633724) */
/* WARNING: Removing unreachable block (ram,0x01633774) */
/* WARNING: Removing unreachable block (ram,0x0294d018) */
/* WARNING: Removing unreachable block (ram,0x016336e0) */
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
/* WARNING: Removing unreachable block (ram,0x01452acc) */
/* WARNING: Removing unreachable block (ram,0x01452b28) */
/* WARNING: Removing unreachable block (ram,0x01452af8) */
/* WARNING: Removing unreachable block (ram,0x01452a9c) */
/* WARNING: Removing unreachable block (ram,0x01452a6c) */
/* WARNING: Removing unreachable block (ram,0x01452edc) */
/* WARNING: Removing unreachable block (ram,0x01452ee4) */
/* WARNING: Removing unreachable block (ram,0x01452bc0) */
/* WARNING: Removing unreachable block (ram,0x01452c58) */
/* WARNING: Removing unreachable block (ram,0x01452c60) */

undefined8 *
Atlas_UI_Screens_ArcadeMapSelectScreen__RunRewardSequenceIfRewardUnseen(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  ulong *puVar4;
  undefined8 ****ppppuVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 ***pppuVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  long extraout_x1;
  long extraout_x1_00;
  undefined8 *puVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 **ppuVar19;
  ulong uVar20;
  undefined8 ****ppppuVar21;
  ulong uVar22;
  undefined8 ***unaff_x22;
  ulong uVar23;
  ulong unaff_x24;
  ulong unaff_x25;
  long unaff_x26;
  undefined8 unaff_x28;
  undefined8 ****ppppuVar24;
  undefined *puVar25;
  undefined1 auVar26 [16];
  undefined *puStack_298;
  undefined8 ***pppuStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long lStack_278;
  undefined8 ***pppuStack_270;
  undefined *puStack_268;
  undefined8 ***pppuStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long lStack_248;
  undefined8 ***pppuStack_240;
  undefined *puStack_238;
  undefined8 ***pppuStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long lStack_218;
  undefined8 ***pppuStack_210;
  undefined *puStack_208;
  undefined8 ***pppuStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 ***pppuStack_1e0;
  undefined *puStack_1d8;
  undefined8 ***pppuStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 ***pppuStack_1b0;
  undefined *puStack_1a8;
  undefined8 ***pppuStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 ***pppuStack_180;
  undefined *puStack_178;
  undefined8 ***pppuStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 ***pppuStack_150;
  undefined *puStack_148;
  undefined8 ***pppuStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 ***pppuStack_120;
  undefined *puStack_118;
  undefined8 ***pppuStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  undefined8 ***pppuStack_f0;
  undefined *puStack_e8;
  undefined8 ***pppuStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 ***pppuStack_90;
  undefined *puStack_88;
  undefined8 ***pppuStack_80;
  undefined8 ***pppuStack_78;
  undefined8 **ppuStack_70;
  undefined *puStack_68;
  undefined8 ***pppuStack_60;
  undefined *puStack_58;
  
  if ((bRam0000000003eb4781 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d5c798);
    func_0x00f78a20(0x3d40fb0);
    bRam0000000003eb4781 = 1;
  }
  if ((*(long *)(param_1 + 0xb8) == 0) ||
     (lVar17 = *(long *)(*(long *)(param_1 + 0xb8) + 0x28), lVar17 == 0)) {
LAB_01452a0c:
    func_0x00f78af4();
  }
  else if (param_2 < *(uint *)(lVar17 + 0x18)) {
    unaff_x22 = (undefined8 ***)0x3d40fb0;
    uVar18 = *(undefined8 *)(lVar17 + (long)(int)param_2 * 8 + 0x20);
    lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d40fb0);
    if ((lVar17 != 0) && (*(long *)(lVar17 + 0x50) != 0)) {
      puVar8 = (undefined8 *)/*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(*(long *)(lVar17 + 0x50),uVar18,0);
      if ((int)puVar8 == 0) {
        return puVar8;
      }
      ppppuVar21 = *(undefined8 *****)(param_1 + 0xb0);
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar18 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar18,0);
      pppuVar9 = (undefined8 ***)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d40fb0);
      lVar17 = lRam0000000003d5c798;
      puVar8 = (undefined8 *)0x3eb6000;
      if ((bRam0000000003eb6670 & 1) == 0) {
        func_0x00f78a20(0x3d1feb8);
        func_0x00f78a20(0x3d289a8);
        bRam0000000003eb6670 = 1;
      }
      if ((pppuVar9 != (undefined8 ***)0x0) && (pppuVar9[10] != (undefined8 **)0x0)) {
        puVar8 = (undefined8 *)/*Atlas.Stats.UnlockManager$$IsUnlockUnseen*/ func_0x015217ac(pppuVar9[10],uVar18,0);
        if ((int)puVar8 == 0) {
          return puVar8;
        }
        if (pppuVar9[10] != (undefined8 **)0x0) {
          /*Atlas.Stats.UnlockManager$$MarkUnlockSeen*/ func_0x015226dc(pppuVar9[10],uVar18,0);
          lVar12 = func_0x00f78aec(/*Atlas.UI.Screens.RewardScreen.TransitionData_TypeInfo*/ uRam0000000003d289a8);
          /*Atlas.UI.Screens.RewardScreen.TransitionData$$.ctor*/ func_0x01565edc(lVar12,0);
          if ((param_1 != 0) && (lVar12 != 0)) {
            *(undefined8 *)(lVar12 + 0x18) = *(undefined8 *)(param_1 + 0x40);
            *(undefined4 *)(lVar12 + 0x20) = *(undefined4 *)(param_1 + 0x48);
            uVar13 = (**(code **)**(undefined8 **)(lVar17 + 0x30))(param_1);
            *(undefined8 *)(lVar12 + 0x28) = uVar13;
            *(undefined8 *)(lVar12 + 0x30) = uVar18;
            *(undefined8 *****)(lVar12 + 0x38) = ppppuVar21;
            ppuVar19 = pppuVar9[2];
            ppppuVar21 = (undefined8 ****)0x3d1feb8;
            if (((*(byte *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            pppuVar9 = (undefined8 ***)0x0;
            if (ppuVar19 != (undefined8 **)0x0) {
              /*Atlas.UI.AtlasUIManager$$TransitionToScreen*/ func_0x0147079c(ppuVar19,*(undefined8 *)
                                        (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x90),
                              *(undefined4 *)(param_1 + 0x48),lVar12,0);
              return puVar8;
            }
          }
        }
      }
      lVar17 = func_0x00f78af4();
      puStack_58 = &
                   System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_AssetManagerHandle_
      ;
      pppuStack_80 = ppppuVar21;
      pppuStack_78 = (undefined8 ***)puVar8;
      ppuStack_70 = pppuVar9;
      puStack_68 = (undefined *)param_1;
      pppuStack_60 = (undefined8 ***)&stack0xfffffffffffffff0;
      if ((bRam0000000003eb6671 & 1) == 0) {
        func_0x00f78a20(0x3d24598);
        func_0x00f78a20(0x3d25458);
        bRam0000000003eb6671 = 1;
      }
      uVar18 = **(undefined8 **)(lVar17 + 0x30);
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar12 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar18,0);
      if (lVar12 == 0) {
        lVar17 = func_0x00f78af4();
        puStack_88 = &
                     System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_AsyncOperationHandle_
        ;
        ppppuVar24 = &pppuStack_90;
        pppuStack_90 = &pppuStack_60;
        if ((bRam0000000003eb6672 & 1) == 0) {
          func_0x00f78a20(0x3d24598);
          func_0x00f78a20(0x3d25458);
          bRam0000000003eb6672 = 1;
        }
        uVar18 = **(undefined8 **)(lVar17 + 0x30);
        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar12 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar18,0);
        if (lVar12 == 0) {
          uVar14 = func_0x00f78af4();
          puStack_d8 = (undefined *)0x3d25458;
          pppuStack_e0 = ppppuVar21;
          uStack_d0 = uVar18;
          uStack_c8 = lVar17;
          if ((bRam0000000003eb6673 & 1) == 0) {
            func_0x00f78a20(0x3d24598);
            func_0x00f78a20(0x3d25458);
            bRam0000000003eb6673 = 1;
          }
          uVar20 = **(ulong **)(uVar14 + 0x30);
          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar17 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar20,0);
          if (lVar17 == 0) {
            lVar17 = func_0x00f78af4();
            uStack_108 = 0x3d25458;
            puStack_e8 = &
                         System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_DefinitionID_
            ;
            pppuStack_110 = ppppuVar21;
            uStack_100 = uVar20;
            uStack_f8 = uVar14;
            pppuStack_f0 = (undefined8 ***)&stack0xffffffffffffff40;
            if ((bRam0000000003eb6674 & 1) == 0) {
              func_0x00f78a20(0x3d24598);
              func_0x00f78a20(0x3d25458);
              bRam0000000003eb6674 = 1;
            }
            uVar18 = **(undefined8 **)(lVar17 + 0x30);
            if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            lVar12 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar18,0);
            if (lVar12 == 0) {
              lVar12 = func_0x00f78af4();
              uStack_138 = 0x3d25458;
              puStack_118 = &
                            System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_FixedString64Bytes_
              ;
              pppuStack_140 = ppppuVar21;
              uStack_130 = uVar18;
              lStack_128 = lVar17;
              pppuStack_120 = &pppuStack_f0;
              if ((bRam0000000003eb6675 & 1) == 0) {
                func_0x00f78a20(0x3d24598);
                func_0x00f78a20(0x3d25458);
                bRam0000000003eb6675 = 1;
              }
              uVar18 = **(undefined8 **)(lVar12 + 0x30);
              if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              lVar17 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar18,0);
              if (lVar17 == 0) {
                lVar17 = func_0x00f78af4();
                uStack_168 = 0x3d25458;
                puStack_148 = &
                              System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_int_
                ;
                pppuStack_170 = ppppuVar21;
                uStack_160 = uVar18;
                lStack_158 = lVar12;
                pppuStack_150 = &pppuStack_120;
                if ((bRam0000000003eb6676 & 1) == 0) {
                  func_0x00f78a20(0x3d24598);
                  func_0x00f78a20(0x3d25458);
                  bRam0000000003eb6676 = 1;
                }
                uVar18 = **(undefined8 **)(lVar17 + 0x30);
                if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                lVar12 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar18,0);
                if (lVar12 == 0) {
                  lVar12 = func_0x00f78af4();
                  uStack_198 = 0x3d25458;
                  puStack_178 = &
                                System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_Int32Enum_
                  ;
                  pppuStack_1a0 = ppppuVar21;
                  uStack_190 = uVar18;
                  lStack_188 = lVar17;
                  pppuStack_180 = &pppuStack_150;
                  if ((bRam0000000003eb6677 & 1) == 0) {
                    func_0x00f78a20(0x3d24598);
                    func_0x00f78a20(0x3d25458);
                    bRam0000000003eb6677 = 1;
                  }
                  uVar18 = **(undefined8 **)(lVar12 + 0x30);
                  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  lVar17 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar18,0);
                  if (lVar17 == 0) {
                    lVar17 = func_0x00f78af4();
                    uStack_1c8 = 0x3d25458;
                    puStack_1a8 = &
                                  System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_InternedString_
                    ;
                    pppuStack_1d0 = ppppuVar21;
                    uStack_1c0 = uVar18;
                    lStack_1b8 = lVar12;
                    pppuStack_1b0 = &pppuStack_180;
                    if ((bRam0000000003eb6678 & 1) == 0) {
                      func_0x00f78a20(0x3d24598);
                      func_0x00f78a20(0x3d25458);
                      bRam0000000003eb6678 = 1;
                    }
                    uVar18 = **(undefined8 **)(lVar17 + 0x30);
                    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    lVar12 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar18,0);
                    if (lVar12 == 0) {
                      lVar12 = func_0x00f78af4();
                      uStack_1f8 = 0x3d25458;
                      puStack_1d8 = &
                                    System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_object_
                      ;
                      pppuStack_200 = ppppuVar21;
                      uStack_1f0 = uVar18;
                      lStack_1e8 = lVar17;
                      pppuStack_1e0 = &pppuStack_1b0;
                      if ((bRam0000000003eb6679 & 1) == 0) {
                        func_0x00f78a20(0x3d24598);
                        func_0x00f78a20(0x3d25458);
                        bRam0000000003eb6679 = 1;
                      }
                      uVar18 = **(undefined8 **)(lVar12 + 0x30);
                      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      lVar17 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar18,0);
                      if (lVar17 == 0) {
                        lVar17 = func_0x00f78af4();
                        uStack_228 = 0x3d25458;
                        puStack_208 = &
                                      System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_uint_
                        ;
                        pppuStack_230 = ppppuVar21;
                        uStack_220 = uVar18;
                        lStack_218 = lVar12;
                        pppuStack_210 = &pppuStack_1e0;
                        if ((bRam0000000003eb667a & 1) == 0) {
                          func_0x00f78a20(0x3d24598);
                          func_0x00f78a20(0x3d25458);
                          bRam0000000003eb667a = 1;
                        }
                        uVar18 = **(undefined8 **)(lVar17 + 0x30);
                        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                          func_0x00f78ad0();
                        }
                        lVar12 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar18,0);
                        if (lVar12 == 0) {
                          lVar12 = func_0x00f78af4();
                          uStack_258 = 0x3d25458;
                          puStack_238 = &
                                        System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_SequenceNode_SequenceConstructPosContext_
                          ;
                          pppuStack_260 = ppppuVar21;
                          uStack_250 = uVar18;
                          lStack_248 = lVar17;
                          pppuStack_240 = &pppuStack_210;
                          if ((bRam0000000003eb667b & 1) == 0) {
                            func_0x00f78a20(0x3d24598);
                            func_0x00f78a20(0x3d25458);
                            bRam0000000003eb667b = 1;
                          }
                          uVar18 = **(undefined8 **)(lVar12 + 0x30);
                          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          lVar17 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar18,0);
                          if (lVar17 == 0) {
                            lVar17 = func_0x00f78af4();
                            uStack_288 = 0x3d25458;
                            puStack_268 = &
                                          System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_ToastManager_Message_
                            ;
                            ppppuVar24 = &pppuStack_270;
                            pppuStack_290 = ppppuVar21;
                            uStack_280 = uVar18;
                            lStack_278 = lVar12;
                            pppuStack_270 = &pppuStack_240;
                            if ((bRam0000000003eb667c & 1) == 0) {
                              func_0x00f78a20(0x3d24598);
                              func_0x00f78a20(0x3d25458);
                              bRam0000000003eb667c = 1;
                            }
                            uVar18 = **(undefined8 **)(lVar17 + 0x30);
                            if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                               (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                              func_0x00f78ad0();
                            }
                            lVar12 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar18,0);
                            if (lVar12 == 0) {
                              lVar17 = func_0x00f78af4();
                              puStack_298 = &
                                            System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_BindingRestrictions_TestBuilder_AndNode_
                              ;
                              if ((bRam0000000003eb667d & 1) == 0) {
                                func_0x00f78a20(0x3d24598);
                                func_0x00f78a20(0x3d25458);
                                bRam0000000003eb667d = 1;
                              }
                              uVar18 = **(undefined8 **)(lVar17 + 0x30);
                              if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                                 (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                                func_0x00f78ad0();
                              }
                              lVar12 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar18,0);
                              if (lVar12 == 0) {
                                lVar17 = func_0x00f78af4();
                                lVar12 = **(long **)(lVar17 + 0x30);
                                uVar3 = *(ushort *)(lVar12 + 0x132);
                                if ((uVar3 & 1) == 0) {
                                  func_0x00fac028(lVar12);
                                  uVar3 = *(ushort *)(lVar12 + 0x132);
                                }
                                if ((uVar3 >> 10 & 1) != 0) {
                                  lVar12 = **(long **)(lVar17 + 0x30);
                                  if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
                                    func_0x00fac028(lVar12);
                                  }
                                  if (*(int *)(lVar12 + 0xe0) == 0) {
                                    lVar12 = **(long **)(lVar17 + 0x30);
                                    if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
                                      func_0x00fac028(lVar12);
                                    }
                                    func_0x00f78ad0(lVar12);
                                  }
                                }
                                lVar17 = **(long **)(lVar17 + 0x30);
                                if ((*(ushort *)(lVar17 + 0x132) & 1) == 0) {
                                  func_0x00fac028(lVar17);
                                }
                                return (undefined8 *)(ulong)**(byte **)(lVar17 + 0xb8);
                              }
                              iVar7 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar12,0);
                              if (iVar7 == 0) {
                                return (undefined8 *)((long)&MACH_HEADER.magic + 1);
                              }
                              uVar18 = **(undefined8 **)(lVar17 + 0x30);
                              if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                                 (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                                func_0x00f78ad0();
                              }
                              uVar18 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar18,0);
                              lVar17 = func_0x00f78adc(uVar18,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                              ppppuVar5 = &pppuStack_290;
                            }
                            else {
                              iVar7 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar12,0);
                              if (iVar7 == 0) {
                                return (undefined8 *)((long)&MACH_HEADER.magic + 1);
                              }
                              uVar18 = **(undefined8 **)(lVar17 + 0x30);
                              if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                                 (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                                func_0x00f78ad0();
                              }
                              uVar18 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar18,0);
                              lVar17 = func_0x00f78adc(uVar18,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                              ppppuVar5 = &pppuStack_260;
                              ppppuVar24 = (undefined8 ****)pppuStack_270;
                              puStack_298 = puStack_268;
                            }
                          }
                          else {
                            iVar7 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar17,0);
                            if (iVar7 == 0) {
                              return (undefined8 *)((long)&MACH_HEADER.magic + 1);
                            }
                            uVar18 = **(undefined8 **)(lVar12 + 0x30);
                            if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                               (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                              func_0x00f78ad0();
                            }
                            uVar18 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar18,0);
                            lVar17 = func_0x00f78adc(uVar18,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                            ppppuVar5 = &pppuStack_230;
                            ppppuVar24 = (undefined8 ****)pppuStack_240;
                            puStack_298 = puStack_238;
                          }
                        }
                        else {
                          iVar7 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar12,0);
                          if (iVar7 == 0) {
                            return (undefined8 *)((long)&MACH_HEADER.magic + 1);
                          }
                          uVar18 = **(undefined8 **)(lVar17 + 0x30);
                          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          uVar18 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar18,0);
                          lVar17 = func_0x00f78adc(uVar18,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                          ppppuVar5 = &pppuStack_200;
                          ppppuVar24 = (undefined8 ****)pppuStack_210;
                          puStack_298 = puStack_208;
                        }
                      }
                      else {
                        iVar7 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar17,0);
                        if (iVar7 == 0) {
                          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
                        }
                        uVar18 = **(undefined8 **)(lVar12 + 0x30);
                        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                          func_0x00f78ad0();
                        }
                        uVar18 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar18,0);
                        lVar17 = func_0x00f78adc(uVar18,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                        ppppuVar5 = &pppuStack_1d0;
                        ppppuVar24 = (undefined8 ****)pppuStack_1e0;
                        puStack_298 = puStack_1d8;
                      }
                    }
                    else {
                      iVar7 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar12,0);
                      if (iVar7 == 0) {
                        return (undefined8 *)((long)&MACH_HEADER.magic + 1);
                      }
                      uVar18 = **(undefined8 **)(lVar17 + 0x30);
                      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      uVar18 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar18,0);
                      lVar17 = func_0x00f78adc(uVar18,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                      ppppuVar5 = &pppuStack_1a0;
                      ppppuVar24 = (undefined8 ****)pppuStack_1b0;
                      puStack_298 = puStack_1a8;
                    }
                  }
                  else {
                    iVar7 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar17,0);
                    if (iVar7 == 0) {
                      return (undefined8 *)((long)&MACH_HEADER.magic + 1);
                    }
                    uVar18 = **(undefined8 **)(lVar12 + 0x30);
                    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    uVar18 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar18,0);
                    lVar17 = func_0x00f78adc(uVar18,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                    ppppuVar5 = &pppuStack_170;
                    ppppuVar24 = (undefined8 ****)pppuStack_180;
                    puStack_298 = puStack_178;
                  }
                }
                else {
                  iVar7 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar12,0);
                  if (iVar7 == 0) {
                    return (undefined8 *)((long)&MACH_HEADER.magic + 1);
                  }
                  uVar18 = **(undefined8 **)(lVar17 + 0x30);
                  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  uVar18 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar18,0);
                  lVar17 = func_0x00f78adc(uVar18,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                  ppppuVar5 = &pppuStack_140;
                  ppppuVar24 = (undefined8 ****)pppuStack_150;
                  puStack_298 = puStack_148;
                }
              }
              else {
                iVar7 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar17,0);
                if (iVar7 == 0) {
                  return (undefined8 *)((long)&MACH_HEADER.magic + 1);
                }
                uVar18 = **(undefined8 **)(lVar12 + 0x30);
                if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar18 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar18,0);
                lVar17 = func_0x00f78adc(uVar18,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
                ppppuVar5 = &pppuStack_110;
                ppppuVar24 = (undefined8 ****)pppuStack_120;
                puStack_298 = puStack_118;
              }
            }
            else {
              iVar7 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar12,0);
              if (iVar7 == 0) {
                return (undefined8 *)((long)&MACH_HEADER.magic + 1);
              }
              uVar18 = **(undefined8 **)(lVar17 + 0x30);
              if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar18 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar18,0);
              lVar17 = func_0x00f78adc(uVar18,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
              ppppuVar5 = &pppuStack_e0;
              ppppuVar24 = (undefined8 ****)pppuStack_f0;
              puStack_298 = puStack_e8;
            }
          }
          else {
            iVar7 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar17,0);
            if (iVar7 == 0) {
              return (undefined8 *)((long)&MACH_HEADER.magic + 1);
            }
            uVar18 = **(undefined8 **)(uVar14 + 0x30);
            if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar18 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar18,0);
            lVar17 = func_0x00f78adc(uVar18,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
            puStack_298 = &
                          System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences_char_
            ;
            ppppuVar5 = (undefined8 ****)&stack0xffffffffffffff50;
          }
        }
        else {
          iVar7 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar12,0);
          if (iVar7 == 0) {
            return (undefined8 *)((long)&MACH_HEADER.magic + 1);
          }
          uVar18 = **(undefined8 **)(lVar17 + 0x30);
          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar18 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar18,0);
          lVar17 = func_0x00f78adc(uVar18,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
          ppppuVar5 = &pppuStack_80;
          ppppuVar24 = (undefined8 ****)pppuStack_90;
          puStack_298 = puStack_88;
        }
      }
      else {
        iVar7 = /*System.Type$$get_IsValueType*/ func_0x02a03b0c(lVar12,0);
        if (iVar7 == 0) {
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        uVar18 = **(undefined8 **)(lVar17 + 0x30);
        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar18 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar18,0);
        lVar17 = func_0x00f78adc(uVar18,/*System.RuntimeType_TypeInfo*/ uRam0000000003d24598);
        ppppuVar5 = (undefined8 ****)&stack0xffffffffffffffb0;
        ppppuVar24 = (undefined8 ****)pppuStack_60;
        puStack_298 = puStack_58;
      }
      *(undefined8 *****)((long)ppppuVar5 + -0x10) = ppppuVar24;
      *(undefined **)((long)ppppuVar5 + -8) = puStack_298;
      lVar17 = func_0x00fe01c8(*(undefined8 *)(lVar17 + 0x10),1);
      return (undefined8 *)(ulong)(*(byte *)(lVar17 + 0x132) >> 5 & 1);
    }
    goto LAB_01452a0c;
  }
  uVar18 = func_0x00f78b24();
  ppppuVar21 = (undefined8 ****)func_0x00f78ac0(uVar18,0);
  puStack_58 = (undefined *)0x3eb4000;
  ppuStack_70 = (undefined8 **)&stack0xffffffffffffffc0;
  uVar14 = 0x3d40fb0;
  pppuStack_60 = unaff_x22;
  if ((bRam0000000003eb4782 & 1) == 0) {
    func_0x00f78a20(0x3d40fb0);
    bRam0000000003eb4782 = 1;
  }
  uVar20 = 1;
  puVar4 = &uStack_d0;
  pppuStack_90 = (undefined8 ***)0x3d40fb0;
  puStack_88 = (undefined *)0x3eb4000;
  pppuStack_80 = (undefined8 ***)0x3eb4000;
  puStack_68 = &UNK_01452a6c;
  uVar18 = 1;
  ppuVar19 = (undefined8 **)0x0;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = ppppuVar21;
  uVar22 = 0x3eb4000;
  pppuStack_78 = ppppuVar21;
  if ((bRam0000000003eb4783 & 1) == 0) {
    func_0x00f78a20(0x3d1fcc0);
    func_0x00f78a20(0x3d305d0);
    func_0x00f78a20(0x3d40fa0);
    func_0x00f78a20(0x3d40fb0);
    bRam0000000003eb4783 = 1;
  }
  if (ppppuVar21[0x17] == (undefined8 ***)0x0) {
code_r0x01452f08:
    func_0x00f78af4();
  }
  else {
    pppuVar9 = ppppuVar21[0x1e];
    if (pppuVar9 == (undefined8 ***)0x0) goto code_r0x01452f08;
    if (*(uint *)(pppuVar9 + 3) < 2) goto code_r0x01452f0c;
    uVar14 = 0x3d40fb0;
    if (ppppuVar21[0x23] == (undefined8 ***)0x0) goto code_r0x01452f08;
    lVar17 = 0x3d305d0;
    lVar12 = 0x3d305d0;
    uVar1 = *(uint *)(ppppuVar21[0x17] + 4);
    uVar14 = (ulong)uVar1;
    uVar22 = 1;
    uVar2 = *(uint *)((long)pppuVar9 + 0x24);
    unaff_x24 = (ulong)uVar2;
    iVar7 = /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$get_Item*/ func_0x01e9e320(ppppuVar21[0x23],1,uRam0000000003d305d0);
    uVar2 = uVar2 - iVar7;
    unaff_x25 = (ulong)uVar2;
    unaff_x26 = lVar17;
    if (ppppuVar21[0x23] == (undefined8 ***)0x0) goto code_r0x01452f08;
    unaff_x24 = /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$get_Item*/ func_0x01e9e320(ppppuVar21[0x23],2,uRam0000000003d305d0);
    if (ppppuVar21[0x23] == (undefined8 ***)0x0) goto code_r0x01452f08;
    iVar7 = /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$get_Item*/ func_0x01e9e320(ppppuVar21[0x23],3,uRam0000000003d305d0);
    uVar2 = uVar2 - ((int)unaff_x24 + iVar7);
    unaff_x25 = (ulong)uVar2;
    pppuVar9 = ppppuVar21[0x1e];
    unaff_x26 = lVar12;
    if (pppuVar9 == (undefined8 ***)0x0) goto code_r0x01452f08;
    unaff_x26 = lVar17;
    if (1 < *(uint *)(pppuVar9 + 3)) {
      if ((int)uVar1 <= (int)uVar2) {
        uVar2 = uVar1;
      }
      unaff_x24 = (ulong)uVar2;
      uVar2 = *(uint *)((long)pppuVar9 + 0x24);
      if ((int)uVar1 <= (int)*(uint *)((long)pppuVar9 + 0x24)) {
        uVar2 = uVar1;
      }
      uVar22 = (ulong)uVar2;
      lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(ppppuVar21,uRam0000000003d40fa0);
      unaff_x26 = lVar12;
      if ((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 200), lVar10 != 0)) {
        unaff_x26 = lVar17;
        if (*(int *)(lVar10 + 0x18) == 0) goto code_r0x01452f0c;
        pppuVar9 = ppppuVar21[0x18];
        unaff_x26 = lVar12;
        if (pppuVar9 != (undefined8 ***)0x0) {
          uStack_c8 = CONCAT44(uVar2,(undefined4)uStack_c8);
          if (*(int *)(pppuVar9 + 3) == 0) goto code_r0x01452f0c;
          unaff_x25 = 0;
          unaff_x28 = 0x3d40fb0;
          uVar22 = 0;
          unaff_x26 = *(long *)(lVar10 + 0x20);
          ppuVar19 = pppuVar9[4];
          uVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(ppppuVar21,uRam0000000003d40fb0);
          if (unaff_x26 != 0) {
            uVar20 = uVar14;
            /*Atlas.UI.UIArcadeRewardBehaviour$$Set*/ func_0x01513258(unaff_x26,ppuVar19,unaff_x24,uVar14,1,uVar13,0);
            uVar18 = /*Atlas.Helpers.ArcadeHelper$$IsRewardUnlocked*/ func_0x014505c4(ppppuVar21[0x17],0,ppppuVar21[0x19]);
            lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(ppppuVar21,uRam0000000003d40fb0);
            if (lVar17 != 0) {
              ppuVar19 = (undefined8 **)0x3d1fcc0;
              lVar17 = *(long *)(lVar17 + 0x48);
              unaff_x28 = 0x3d40fa0;
              if (((*(ushort *)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar6 = 0;
              puVar25 = &UNK_01452d8c;
              uVar23 = uVar14;
              unaff_x26 = lVar17;
              ppppuVar24 = (undefined8 ****)&ppuStack_70;
              goto code_r0x01452f94;
            }
          }
        }
      }
      goto code_r0x01452f08;
    }
  }
code_r0x01452f0c:
  uVar13 = func_0x00f78b24();
  auVar26 = func_0x00f78ac0(uVar13,0);
  puVar4 = &uStack_100;
  puStack_e8 = (undefined *)0x0;
  puStack_d8 = &Atlas_UI_Screens_ArcadeMapSelectScreen__DelayedCheckForMissingRewards;
  ppppuVar24 = &pppuStack_e0;
  uVar23 = 0x3d268b8;
  uStack_100 = uVar14;
  uStack_f8 = uVar22;
  pppuStack_f0 = ppppuVar21;
  pppuStack_e0 = &ppuStack_70;
  if ((bRam0000000003eb4784 & 1) == 0) {
    func_0x00f78a20(0x3d268b8);
    bRam0000000003eb4784 = 1;
  }
  puVar8 = (undefined8 *)func_0x00f78aec(/*Atlas.UI.Screens.ArcadeMapSelectScreen.<DelayedCheckForMissingRewards>d__49_TypeInfo*/ uRam0000000003d268b8);
  /*Atlas.UI.Screens.ArcadeMapSelectScreen.<DelayedCheckForMissingRewards>d__49$$.ctor*/ func_0x01533f04(puVar8,0,0);
  if (puVar8 != (undefined8 *)0x0) {
    puVar8[5] = auVar26._0_8_;
    *(int *)(puVar8 + 4) = auVar26._8_4_;
    return puVar8;
  }
  puVar25 = &Atlas_Arcade_ArcadeSave__GetRewardSeen;
  uVar6 = func_0x00f78af4();
  lVar17 = extraout_x1;
code_r0x01452f94:
  *(ulong *)((long)puVar4 + -0x30) = uVar23;
  *(undefined8 *)((long)puVar4 + -0x28) = 0;
  *(undefined1 (*) [16])((long)puVar4 + -0x20) = auVar26;
  *(undefined8 *****)((long)puVar4 + -0x10) = ppppuVar24;
  *(undefined **)((long)puVar4 + -8) = puVar25;
  *(undefined4 *)((long)puVar4 + -0x34) = uVar6;
  if ((bRam0000000003eb4797 & 1) == 0) {
    func_0x00f78a20(0x3d246e0);
    func_0x00f78a20(0x3d68948);
    bRam0000000003eb4797 = 1;
  }
  uVar13 = /*System.Int32$$ToString*/ func_0x02ae9b8c((undefined1 *)((long)puVar4 + -0x34),0);
  uVar16 = 0;
  uVar13 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('ARSeen_')*/ uRam0000000003d68948,uVar13);
  if (lVar17 != 0) {
    uVar18 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(lVar17,0);
    if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar7 = /*Atlas.Save.SaveManager$$GetIntData*/ func_0x014ecbe0(uVar13,0,uVar18,0);
    return (undefined8 *)(ulong)(iVar7 == 1);
  }
  auVar26 = func_0x00f78af4();
  *(ulong *)((long)puVar4 + -0x80) = unaff_x24;
  *(undefined8 *)((long)puVar4 + -0x78) = uVar18;
  *(ulong *)((long)puVar4 + -0x70) = uVar23;
  *(undefined8 *)((long)puVar4 + -0x68) = 0x3eb4000;
  *(undefined8 *)((long)puVar4 + -0x60) = 0x3d68948;
  *(undefined8 *)((long)puVar4 + -0x58) = 0;
  *(undefined1 **)((long)puVar4 + -0x50) = (undefined1 *)((long)puVar4 + -0x10);
  *(undefined **)((long)puVar4 + -0x48) =
       &Atlas_UI_Screens_ArcadeMapSelectScreen__OnRewardPanelClicked;
  uVar18 = uVar16;
  if ((bRam0000000003eb4785 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d62010);
    func_0x00f78a20(0x3d268a8);
    bRam0000000003eb4785 = 1;
  }
  lVar17 = func_0x00f78aec(/*Atlas.UI.Screens.ArcadeMapSelectScreen.<>c__DisplayClass50_0_TypeInfo*/ uRam0000000003d268a8);
  /*Atlas.UI.Screens.ArcadeMapSelectScreen.<>c__DisplayClass50_0$$.ctor*/ func_0x01533860(lVar17,0);
  if (lVar17 != 0) {
    *(char *)(lVar17 + 0x10) = (char)uVar16;
    *(ulong *)(lVar17 + 0x18) = uVar20;
    *(int *)(lVar17 + 0x20) = auVar26._8_4_;
    *(long *)(lVar17 + 0x28) = auVar26._0_8_;
    puVar8 = (undefined8 *)func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(puVar8,lVar17,uRam0000000003d62010,0);
    return puVar8;
  }
  uVar6 = func_0x00f78af4();
  *(undefined8 *)((long)puVar4 + -0xb0) = uVar16;
  *(long *)((long)puVar4 + -0xa8) = auVar26._8_8_;
  *(long *)((long)puVar4 + -0xa0) = auVar26._0_8_;
  *(ulong *)((long)puVar4 + -0x98) = uVar20;
  *(undefined1 **)((long)puVar4 + -0x90) = (undefined1 *)((long)puVar4 + -0x50);
  *(undefined **)((long)puVar4 + -0x88) = &Atlas_Arcade_ArcadeSave__SaveRewardSeen;
  *(undefined4 *)((long)puVar4 + -0xb4) = uVar6;
  if ((bRam0000000003eb4796 & 1) == 0) {
    func_0x00f78a20(0x3d68948);
    bRam0000000003eb4796 = 1;
  }
  uVar13 = /*System.Int32$$ToString*/ func_0x02ae9b8c((undefined1 *)((long)puVar4 + -0xb4),0);
  uVar13 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('ARSeen_')*/ uRam0000000003d68948,uVar13,0);
  if (extraout_x1_00 != 0) {
    /*Atlas.Save.SaveManager$$SetIntData*/ func_0x014ece54(extraout_x1_00,uVar13,uVar18,0);
    puVar8 = (undefined8 *)/*Atlas.Save.SaveManager$$MarkSaveAsDirty*/ func_0x014eb72c(extraout_x1_00,0);
    return puVar8;
  }
  lVar17 = func_0x00f78af4();
  *(undefined8 *)((long)puVar4 + -0x120) = unaff_x28;
  *(undefined8 ***)((long)puVar4 + -0x118) = ppuVar19;
  *(long *)((long)puVar4 + -0x110) = unaff_x26;
  *(ulong *)((long)puVar4 + -0x108) = unaff_x25;
  *(undefined8 *)((long)puVar4 + -0x100) = 0x3d268a8;
  *(undefined8 *)((long)puVar4 + -0xf8) = 0;
  *(undefined8 *)((long)puVar4 + -0xf0) = 0x3eb4000;
  *(undefined8 *)((long)puVar4 + -0xe8) = 0x3d68948;
  *(undefined8 *)((long)puVar4 + -0xe0) = uVar18;
  *(undefined8 *)((long)puVar4 + -0xd8) = 0;
  *(undefined1 **)((long)puVar4 + -0xd0) = (undefined1 *)((long)puVar4 + -0x90);
  *(undefined **)((long)puVar4 + -200) = &Atlas_UI_Screens_ArcadeMapSelectScreen___ctor;
  uVar18 = 0x3d1a510;
  uVar13 = 0x3d25458;
  if ((bRam0000000003eb4786 & 1) == 0) {
    func_0x00f78a20(0x3d2c680);
    func_0x00f78a20(0x3d305c8);
    func_0x00f78a20(0x3d2de48);
    func_0x00f78a20(0x3d2f2c8);
    func_0x00f78a20(0x3d305c0);
    func_0x00f78a20(0x3d2e258);
    func_0x00f78a20(0x3d2e490);
    func_0x00f78a20(0x3d1c1c0);
    func_0x00f78a20(0x3d1c660);
    func_0x00f78a20(0x3d1c138);
    func_0x00f78a20(0x3d1c230);
    func_0x00f78a20(0x3d1c3f8);
    func_0x00f78a20(0x3d215e0);
    func_0x00f78a20(0x3d1f100);
    func_0x00f78a20(0x3d3b0f0);
    func_0x00f78a20(0x3d1db90);
    func_0x00f78a20(0x3d1a510);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb4786 = 1;
  }
  uVar16 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<DefinitionID, ArcadeEventMetagameData[]>_TypeInfo*/ uRam0000000003d1c1c0);
  /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$.ctor*/ func_0x01e3bb54(uVar16,uRam0000000003d2e258);
  *(undefined8 *)(lVar17 + 0xe0) = uVar16;
  uVar16 = /*Atlas.Definitions.ArcadeEventDefinition.Medal_var*/ uRam0000000003d1a510;
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar16 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar16,0);
  if (((*(ushort *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar12 = /*System.Enum$$GetNames*/ func_0x02ac6658(uVar16,0);
  if (lVar12 != 0) {
    uVar16 = 0x3d1f100;
    uVar11 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,*(undefined4 *)(lVar12 + 0x18));
    *(undefined8 *)(lVar17 + 0xe8) = uVar11;
    uVar11 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*Atlas.Definitions.ArcadeEventDefinition.Medal_var*/ uRam0000000003d1a510,0);
    lVar12 = /*System.Enum$$GetNames*/ func_0x02ac6658(uVar11,0);
    if (lVar12 != 0) {
      uVar18 = 0x3d1c000;
      uVar13 = 0x3d2d000;
      uVar16 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,*(undefined4 *)(lVar12 + 0x18));
      *(undefined8 *)(lVar17 + 0xf0) = uVar16;
      uVar16 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<GameType, int>_TypeInfo*/ uRam0000000003d1c230);
      /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$.ctor*/ func_0x01e9deb4(uVar16,uRam0000000003d2e490);
      *(undefined8 *)(lVar17 + 0xf8) = uVar16;
      uVar16 = func_0x00f78aec(/*System.Collections.Generic.List<MapDefinition>_TypeInfo*/ uRam0000000003d1db90);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar16,uRam0000000003d3b0f0);
      *(undefined8 *)(lVar17 + 0x100) = uVar16;
      uVar16 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<MapDefinition, UIArcadePanelBehavior>_TypeInfo*/ uRam0000000003d1c3f8);
      /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar16,uRam0000000003d2f2c8);
      *(undefined8 *)(lVar17 + 0x108) = uVar16;
      uVar16 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<ValueTuple<MapDefinition, int>, bool>_TypeInfo*/ uRam0000000003d1c138);
      /*System.Collections.Generic.Dictionary<ValueTuple<object, int>, bool>$$.ctor*/ func_0x01e265ec(uVar16,uRam0000000003d2de48);
      *(undefined8 *)(lVar17 + 0x110) = uVar16;
      lVar12 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>_TypeInfo*/ uRam0000000003d1c660);
      /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$.ctor*/ func_0x01e9deb4(lVar12,uRam0000000003d305c0);
      uVar16 = 0;
      if (lVar12 != 0) {
        /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$Add*/ func_0x01e9e3e4(lVar12,1,0,uRam0000000003d305c8);
        /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$Add*/ func_0x01e9e3e4(lVar12,2,0,uRam0000000003d305c8);
        /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$Add*/ func_0x01e9e3e4(lVar12,3,0,uRam0000000003d305c8);
        *(long *)(lVar17 + 0x118) = lVar12;
        *(undefined8 *)((long)puVar4 + -0xd0) = *(undefined8 *)((long)puVar4 + -0xd0);
        *(undefined8 *)((long)puVar4 + -200) = *(undefined8 *)((long)puVar4 + -200);
        if (lVar17 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar8 = (undefined8 *)
                   (*(code *)**(undefined8 **)
                               (*(long *)(*(long *)(lRam0000000003d2c680 + 0x18) + 0xc0) + 0x38))();
          return puVar8;
        }
        auVar26 = func_0x00f78af4();
        puVar15 = auVar26._8_8_;
        puVar8 = auVar26._0_8_;
        uVar13 = puVar15[1];
        uVar18 = *puVar15;
        puVar8[2] = puVar15[2];
        puVar8[1] = uVar13;
        *puVar8 = uVar18;
        return puVar8;
      }
    }
  }
  func_0x00f78af4();
  *(undefined8 *)((long)puVar4 + -0x150) = uVar13;
  *(undefined8 *)((long)puVar4 + -0x148) = uVar18;
  *(undefined8 *)((long)puVar4 + -0x140) = uVar16;
  *(long *)((long)puVar4 + -0x138) = lVar17;
  *(undefined1 **)((long)puVar4 + -0x130) = (undefined1 *)((long)puVar4 + -0xd0);
  *(undefined **)((long)puVar4 + -0x128) = &Atlas_UI_Screens_ArcadeMapSelectScreen___cctor;
  if ((bRam0000000003eb4787 & 1) == 0) {
    func_0x00f78a20(0x3d1fc98);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d74f40);
    func_0x00f78a20(0x3d6cb80);
    bRam0000000003eb4787 = 1;
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar8 = (undefined8 *)/*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_24_ArcadeMapSelect')*/ uRam0000000003d6cb80,0);
  **(undefined8 **)(/*Atlas.UI.Screens.ArcadeMapSelectScreen_TypeInfo*/ lRam0000000003d1fc98 + 0xb8) = puVar8;
  *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.ArcadeMapSelectScreen_TypeInfo*/ lRam0000000003d1fc98 + 0xb8) + 8) = /*STR('ToolTipData_FTUE_TOOLTIP_RETENTION_ARCADE_04')*/ uRam0000000003d74f40;
  return puVar8;
}



// ============================================================
// RVA: 0x1452a1c | Atlas.UI.Screens.ArcadeMapSelectScreen.SetRewardPanelsAndAnimate
// ============================================================

/* WARNING: Possible PIC construction at 0x01452a68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01452a98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01452ac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01452b04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01633784: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01452d88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01452e70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01452ed8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01452e74) */
/* WARNING: Removing unreachable block (ram,0x01452e80) */
/* WARNING: Removing unreachable block (ram,0x01452ee0) */
/* WARNING: Removing unreachable block (ram,0x01452e9c) */
/* WARNING: Removing unreachable block (ram,0x01452eac) */
/* WARNING: Removing unreachable block (ram,0x01452ebc) */
/* WARNING: Removing unreachable block (ram,0x01452ec4) */
/* WARNING: Removing unreachable block (ram,0x01452ec8) */
/* WARNING: Removing unreachable block (ram,0x01452d8c) */
/* WARNING: Removing unreachable block (ram,0x01452da0) */
/* WARNING: Removing unreachable block (ram,0x01452da8) */
/* WARNING: Removing unreachable block (ram,0x01452db4) */
/* WARNING: Removing unreachable block (ram,0x01452dc0) */
/* WARNING: Removing unreachable block (ram,0x01452de8) */
/* WARNING: Removing unreachable block (ram,0x01452df0) */
/* WARNING: Removing unreachable block (ram,0x01452dfc) */
/* WARNING: Removing unreachable block (ram,0x01452e08) */
/* WARNING: Removing unreachable block (ram,0x01452e2c) */
/* WARNING: Removing unreachable block (ram,0x01452e34) */
/* WARNING: Removing unreachable block (ram,0x01452e40) */
/* WARNING: Removing unreachable block (ram,0x01452e4c) */
/* WARNING: Removing unreachable block (ram,0x01452e60) */
/* WARNING: Removing unreachable block (ram,0x01633788) */
/* WARNING: Removing unreachable block (ram,0x0163378c) */
/* WARNING: Removing unreachable block (ram,0x01633798) */
/* WARNING: Removing unreachable block (ram,0x016337b4) */
/* WARNING: Removing unreachable block (ram,0x016337d0) */
/* WARNING: Removing unreachable block (ram,0x01633848) */
/* WARNING: Removing unreachable block (ram,0x01633828) */
/* WARNING: Removing unreachable block (ram,0x01452b08) */
/* WARNING: Removing unreachable block (ram,0x01452b0c) */
/* WARNING: Removing unreachable block (ram,0x016336d0) */
/* WARNING: Removing unreachable block (ram,0x016336ec) */
/* WARNING: Removing unreachable block (ram,0x01633724) */
/* WARNING: Removing unreachable block (ram,0x01633774) */
/* WARNING: Removing unreachable block (ram,0x0294d018) */
/* WARNING: Removing unreachable block (ram,0x016336e0) */
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
/* WARNING: Removing unreachable block (ram,0x01452acc) */
/* WARNING: Removing unreachable block (ram,0x01452b28) */
/* WARNING: Removing unreachable block (ram,0x01452af8) */
/* WARNING: Removing unreachable block (ram,0x01452a9c) */
/* WARNING: Removing unreachable block (ram,0x01452a6c) */
/* WARNING: Removing unreachable block (ram,0x01452edc) */
/* WARNING: Removing unreachable block (ram,0x01452ee4) */
/* WARNING: Removing unreachable block (ram,0x01452bc0) */
/* WARNING: Removing unreachable block (ram,0x01452c58) */
/* WARNING: Removing unreachable block (ram,0x01452c60) */

undefined8 * Atlas_UI_Screens_ArcadeMapSelectScreen__SetRewardPanelsAndAnimate(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long extraout_x1;
  long extraout_x1_00;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong unaff_x24;
  ulong unaff_x25;
  long unaff_x26;
  long lVar17;
  undefined8 uVar18;
  undefined8 unaff_x28;
  undefined8 ***pppuVar19;
  undefined *puVar20;
  undefined1 auVar21 [16];
  ulong uStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 **ppuStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [12];
  uint uStack_94;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  uVar14 = 0x3d40fb0;
  if ((bRam0000000003eb4782 & 1) == 0) {
    func_0x00f78a20(0x3d40fb0);
    bRam0000000003eb4782 = 1;
  }
  uVar9 = 1;
  puVar3 = (ulong *)auStack_a0;
  uStack_38 = 0x1452a6c;
  uVar16 = 1;
  uVar18 = 0;
  uVar12 = 0;
  uVar13 = 0x3eb4000;
  puStack_40 = (undefined8 *)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4783 & 1) == 0) {
    func_0x00f78a20(0x3d1fcc0);
    func_0x00f78a20(0x3d305d0);
    func_0x00f78a20(0x3d40fa0);
    func_0x00f78a20(0x3d40fb0);
    bRam0000000003eb4783 = 1;
  }
  if (*(long *)(param_1 + 0xb8) == 0) {
code_r0x01452f08:
    func_0x00f78af4();
  }
  else {
    lVar10 = *(long *)(param_1 + 0xf0);
    if (lVar10 == 0) goto code_r0x01452f08;
    if (*(uint *)(lVar10 + 0x18) < 2) goto code_r0x01452f0c;
    uVar14 = 0x3d40fb0;
    if (*(long *)(param_1 + 0x118) == 0) goto code_r0x01452f08;
    lVar11 = 0x3d305d0;
    lVar17 = 0x3d305d0;
    uVar1 = *(uint *)(*(long *)(param_1 + 0xb8) + 0x20);
    uVar14 = (ulong)uVar1;
    uVar13 = 1;
    uVar2 = *(uint *)(lVar10 + 0x24);
    unaff_x24 = (ulong)uVar2;
    iVar4 = /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$get_Item*/ func_0x01e9e320(*(long *)(param_1 + 0x118),1,uRam0000000003d305d0);
    uVar2 = uVar2 - iVar4;
    unaff_x25 = (ulong)uVar2;
    unaff_x26 = lVar11;
    if (*(long *)(param_1 + 0x118) == 0) goto code_r0x01452f08;
    unaff_x24 = /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$get_Item*/ func_0x01e9e320(*(long *)(param_1 + 0x118),2,uRam0000000003d305d0);
    if (*(long *)(param_1 + 0x118) == 0) goto code_r0x01452f08;
    iVar4 = /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$get_Item*/ func_0x01e9e320(*(long *)(param_1 + 0x118),3,uRam0000000003d305d0);
    uVar2 = uVar2 - ((int)unaff_x24 + iVar4);
    unaff_x25 = (ulong)uVar2;
    lVar10 = *(long *)(param_1 + 0xf0);
    unaff_x26 = lVar17;
    if (lVar10 == 0) goto code_r0x01452f08;
    unaff_x26 = lVar11;
    if (1 < *(uint *)(lVar10 + 0x18)) {
      if ((int)uVar1 <= (int)uVar2) {
        uVar2 = uVar1;
      }
      unaff_x24 = (ulong)uVar2;
      uVar2 = *(uint *)(lVar10 + 0x24);
      if ((int)uVar1 <= (int)*(uint *)(lVar10 + 0x24)) {
        uVar2 = uVar1;
      }
      uVar13 = (ulong)uVar2;
      lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fa0);
      unaff_x26 = lVar17;
      if ((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 200), lVar10 != 0)) {
        unaff_x26 = lVar11;
        if (*(int *)(lVar10 + 0x18) == 0) goto code_r0x01452f0c;
        lVar11 = *(long *)(param_1 + 0xc0);
        unaff_x26 = lVar17;
        if (lVar11 != 0) {
          uStack_94 = uVar2;
          if (*(int *)(lVar11 + 0x18) == 0) goto code_r0x01452f0c;
          unaff_x25 = 0;
          unaff_x28 = 0x3d40fb0;
          uVar13 = 0;
          unaff_x26 = *(long *)(lVar10 + 0x20);
          uVar18 = *(undefined8 *)(lVar11 + 0x20);
          uVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d40fb0);
          if (unaff_x26 != 0) {
            uVar9 = uVar14;
            /*Atlas.UI.UIArcadeRewardBehaviour$$Set*/ func_0x01513258(unaff_x26,uVar18,unaff_x24,uVar14,1,uVar6,0);
            uVar16 = /*Atlas.Helpers.ArcadeHelper$$IsRewardUnlocked*/ func_0x014505c4(*(undefined8 *)(param_1 + 0xb8),0,
                                     *(undefined8 *)(param_1 + 200));
            lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d40fb0);
            if (lVar10 != 0) {
              uVar18 = 0x3d1fcc0;
              lVar10 = *(long *)(lVar10 + 0x48);
              unaff_x28 = 0x3d40fa0;
              if (((*(ushort *)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar5 = 0;
              puVar20 = &UNK_01452d8c;
              lVar11 = param_1;
              uVar15 = uVar14;
              unaff_x26 = lVar10;
              pppuVar19 = (undefined8 ***)&puStack_40;
              goto code_r0x01452f94;
            }
          }
        }
      }
      goto code_r0x01452f08;
    }
  }
code_r0x01452f0c:
  uVar12 = func_0x00f78b24();
  auVar21 = func_0x00f78ac0(uVar12,0);
  uVar12 = auVar21._8_8_;
  lVar11 = auVar21._0_8_;
  puVar3 = &uStack_d0;
  uStack_b8 = 0;
  puStack_a8 = &Atlas_UI_Screens_ArcadeMapSelectScreen__DelayedCheckForMissingRewards;
  pppuVar19 = &ppuStack_b0;
  uVar15 = 0x3d268b8;
  uStack_d0 = uVar14;
  uStack_c8 = uVar13;
  lStack_c0 = param_1;
  ppuStack_b0 = &puStack_40;
  if ((bRam0000000003eb4784 & 1) == 0) {
    func_0x00f78a20(0x3d268b8);
    bRam0000000003eb4784 = 1;
  }
  puVar7 = (undefined8 *)func_0x00f78aec(/*Atlas.UI.Screens.ArcadeMapSelectScreen.<DelayedCheckForMissingRewards>d__49_TypeInfo*/ uRam0000000003d268b8);
  /*Atlas.UI.Screens.ArcadeMapSelectScreen.<DelayedCheckForMissingRewards>d__49$$.ctor*/ func_0x01533f04(puVar7,0,0);
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[5] = lVar11;
    *(int *)(puVar7 + 4) = auVar21._8_4_;
    return puVar7;
  }
  puVar20 = &Atlas_Arcade_ArcadeSave__GetRewardSeen;
  uVar5 = func_0x00f78af4();
  lVar10 = extraout_x1;
code_r0x01452f94:
  *(ulong *)((long)puVar3 + -0x30) = uVar15;
  *(undefined8 *)((long)puVar3 + -0x28) = 0;
  *(long *)((long)puVar3 + -0x20) = lVar11;
  *(undefined8 *)((long)puVar3 + -0x18) = uVar12;
  *(undefined8 ****)((long)puVar3 + -0x10) = pppuVar19;
  *(undefined **)((long)puVar3 + -8) = puVar20;
  *(undefined4 *)((long)puVar3 + -0x34) = uVar5;
  if ((bRam0000000003eb4797 & 1) == 0) {
    func_0x00f78a20(0x3d246e0);
    func_0x00f78a20(0x3d68948);
    bRam0000000003eb4797 = 1;
  }
  uVar12 = /*System.Int32$$ToString*/ func_0x02ae9b8c((undefined1 *)((long)puVar3 + -0x34),0);
  uVar6 = 0;
  uVar12 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('ARSeen_')*/ uRam0000000003d68948,uVar12);
  if (lVar10 != 0) {
    uVar18 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(lVar10,0);
    if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar4 = /*Atlas.Save.SaveManager$$GetIntData*/ func_0x014ecbe0(uVar12,0,uVar18,0);
    return (undefined8 *)(ulong)(iVar4 == 1);
  }
  auVar21 = func_0x00f78af4();
  *(ulong *)((long)puVar3 + -0x80) = unaff_x24;
  *(undefined8 *)((long)puVar3 + -0x78) = uVar16;
  *(ulong *)((long)puVar3 + -0x70) = uVar15;
  *(undefined8 *)((long)puVar3 + -0x68) = 0x3eb4000;
  *(undefined8 *)((long)puVar3 + -0x60) = 0x3d68948;
  *(undefined8 *)((long)puVar3 + -0x58) = 0;
  *(undefined1 **)((long)puVar3 + -0x50) = (undefined1 *)((long)puVar3 + -0x10);
  *(undefined **)((long)puVar3 + -0x48) =
       &Atlas_UI_Screens_ArcadeMapSelectScreen__OnRewardPanelClicked;
  uVar16 = uVar6;
  if ((bRam0000000003eb4785 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d62010);
    func_0x00f78a20(0x3d268a8);
    bRam0000000003eb4785 = 1;
  }
  lVar10 = func_0x00f78aec(/*Atlas.UI.Screens.ArcadeMapSelectScreen.<>c__DisplayClass50_0_TypeInfo*/ uRam0000000003d268a8);
  /*Atlas.UI.Screens.ArcadeMapSelectScreen.<>c__DisplayClass50_0$$.ctor*/ func_0x01533860(lVar10,0);
  if (lVar10 != 0) {
    *(char *)(lVar10 + 0x10) = (char)uVar6;
    *(ulong *)(lVar10 + 0x18) = uVar9;
    *(int *)(lVar10 + 0x20) = auVar21._8_4_;
    *(long *)(lVar10 + 0x28) = auVar21._0_8_;
    puVar7 = (undefined8 *)func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(puVar7,lVar10,uRam0000000003d62010,0);
    return puVar7;
  }
  uVar5 = func_0x00f78af4();
  *(undefined8 *)((long)puVar3 + -0xb0) = uVar6;
  *(long *)((long)puVar3 + -0xa8) = auVar21._8_8_;
  *(long *)((long)puVar3 + -0xa0) = auVar21._0_8_;
  *(ulong *)((long)puVar3 + -0x98) = uVar9;
  *(undefined1 **)((long)puVar3 + -0x90) = (undefined1 *)((long)puVar3 + -0x50);
  *(undefined **)((long)puVar3 + -0x88) = &Atlas_Arcade_ArcadeSave__SaveRewardSeen;
  *(undefined4 *)((long)puVar3 + -0xb4) = uVar5;
  if ((bRam0000000003eb4796 & 1) == 0) {
    func_0x00f78a20(0x3d68948);
    bRam0000000003eb4796 = 1;
  }
  uVar12 = /*System.Int32$$ToString*/ func_0x02ae9b8c((undefined1 *)((long)puVar3 + -0xb4),0);
  uVar12 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('ARSeen_')*/ uRam0000000003d68948,uVar12,0);
  if (extraout_x1_00 == 0) {
    lVar10 = func_0x00f78af4();
    *(undefined8 *)((long)puVar3 + -0x120) = unaff_x28;
    *(undefined8 *)((long)puVar3 + -0x118) = uVar18;
    *(long *)((long)puVar3 + -0x110) = unaff_x26;
    *(ulong *)((long)puVar3 + -0x108) = unaff_x25;
    *(undefined8 *)((long)puVar3 + -0x100) = 0x3d268a8;
    *(undefined8 *)((long)puVar3 + -0xf8) = 0;
    *(undefined8 *)((long)puVar3 + -0xf0) = 0x3eb4000;
    *(undefined8 *)((long)puVar3 + -0xe8) = 0x3d68948;
    *(undefined8 *)((long)puVar3 + -0xe0) = uVar16;
    *(undefined8 *)((long)puVar3 + -0xd8) = 0;
    *(undefined1 **)((long)puVar3 + -0xd0) = (undefined1 *)((long)puVar3 + -0x90);
    *(undefined **)((long)puVar3 + -200) = &Atlas_UI_Screens_ArcadeMapSelectScreen___ctor;
    uVar18 = 0x3d1a510;
    uVar16 = 0x3d25458;
    if ((bRam0000000003eb4786 & 1) == 0) {
      func_0x00f78a20(0x3d2c680);
      func_0x00f78a20(0x3d305c8);
      func_0x00f78a20(0x3d2de48);
      func_0x00f78a20(0x3d2f2c8);
      func_0x00f78a20(0x3d305c0);
      func_0x00f78a20(0x3d2e258);
      func_0x00f78a20(0x3d2e490);
      func_0x00f78a20(0x3d1c1c0);
      func_0x00f78a20(0x3d1c660);
      func_0x00f78a20(0x3d1c138);
      func_0x00f78a20(0x3d1c230);
      func_0x00f78a20(0x3d1c3f8);
      func_0x00f78a20(0x3d215e0);
      func_0x00f78a20(0x3d1f100);
      func_0x00f78a20(0x3d3b0f0);
      func_0x00f78a20(0x3d1db90);
      func_0x00f78a20(0x3d1a510);
      func_0x00f78a20(0x3d25458);
      bRam0000000003eb4786 = 1;
    }
    uVar12 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<DefinitionID, ArcadeEventMetagameData[]>_TypeInfo*/ uRam0000000003d1c1c0);
    /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$.ctor*/ func_0x01e3bb54(uVar12,uRam0000000003d2e258);
    *(undefined8 *)(lVar10 + 0xe0) = uVar12;
    uVar12 = /*Atlas.Definitions.ArcadeEventDefinition.Medal_var*/ uRam0000000003d1a510;
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar12 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar12,0);
    if (((*(ushort *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar11 = /*System.Enum$$GetNames*/ func_0x02ac6658(uVar12,0);
    if (lVar11 != 0) {
      uVar12 = 0x3d1f100;
      uVar6 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,*(undefined4 *)(lVar11 + 0x18));
      *(undefined8 *)(lVar10 + 0xe8) = uVar6;
      uVar6 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*Atlas.Definitions.ArcadeEventDefinition.Medal_var*/ uRam0000000003d1a510,0);
      lVar11 = /*System.Enum$$GetNames*/ func_0x02ac6658(uVar6,0);
      if (lVar11 != 0) {
        uVar18 = 0x3d1c000;
        uVar16 = 0x3d2d000;
        uVar12 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,*(undefined4 *)(lVar11 + 0x18));
        *(undefined8 *)(lVar10 + 0xf0) = uVar12;
        uVar12 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<GameType, int>_TypeInfo*/ uRam0000000003d1c230);
        /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$.ctor*/ func_0x01e9deb4(uVar12,uRam0000000003d2e490);
        *(undefined8 *)(lVar10 + 0xf8) = uVar12;
        uVar12 = func_0x00f78aec(/*System.Collections.Generic.List<MapDefinition>_TypeInfo*/ uRam0000000003d1db90);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar12,uRam0000000003d3b0f0);
        *(undefined8 *)(lVar10 + 0x100) = uVar12;
        uVar12 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<MapDefinition, UIArcadePanelBehavior>_TypeInfo*/ uRam0000000003d1c3f8);
        /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar12,uRam0000000003d2f2c8);
        *(undefined8 *)(lVar10 + 0x108) = uVar12;
        uVar12 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<ValueTuple<MapDefinition, int>, bool>_TypeInfo*/ uRam0000000003d1c138);
        /*System.Collections.Generic.Dictionary<ValueTuple<object, int>, bool>$$.ctor*/ func_0x01e265ec(uVar12,uRam0000000003d2de48);
        *(undefined8 *)(lVar10 + 0x110) = uVar12;
        lVar11 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>_TypeInfo*/ uRam0000000003d1c660);
        /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$.ctor*/ func_0x01e9deb4(lVar11,uRam0000000003d305c0);
        uVar12 = 0;
        if (lVar11 != 0) {
          /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$Add*/ func_0x01e9e3e4(lVar11,1,0,uRam0000000003d305c8);
          /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$Add*/ func_0x01e9e3e4(lVar11,2,0,uRam0000000003d305c8);
          /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$Add*/ func_0x01e9e3e4(lVar11,3,0,uRam0000000003d305c8);
          *(long *)(lVar10 + 0x118) = lVar11;
          *(undefined8 *)((long)puVar3 + -0xd0) = *(undefined8 *)((long)puVar3 + -0xd0);
          *(undefined8 *)((long)puVar3 + -200) = *(undefined8 *)((long)puVar3 + -200);
          if (lVar10 == 0) {
            auVar21 = func_0x00f78af4();
            puVar8 = auVar21._8_8_;
            puVar7 = auVar21._0_8_;
            uVar16 = puVar8[1];
            uVar18 = *puVar8;
            puVar7[2] = puVar8[2];
            puVar7[1] = uVar16;
            *puVar7 = uVar18;
            return puVar7;
          }
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar7 = (undefined8 *)
                   (*(code *)**(undefined8 **)
                               (*(long *)(*(long *)(lRam0000000003d2c680 + 0x18) + 0xc0) + 0x38))();
          return puVar7;
        }
      }
    }
    func_0x00f78af4();
    *(undefined8 *)((long)puVar3 + -0x150) = uVar16;
    *(undefined8 *)((long)puVar3 + -0x148) = uVar18;
    *(undefined8 *)((long)puVar3 + -0x140) = uVar12;
    *(long *)((long)puVar3 + -0x138) = lVar10;
    *(undefined1 **)((long)puVar3 + -0x130) = (undefined1 *)((long)puVar3 + -0xd0);
    *(undefined **)((long)puVar3 + -0x128) = &Atlas_UI_Screens_ArcadeMapSelectScreen___cctor;
    if ((bRam0000000003eb4787 & 1) == 0) {
      func_0x00f78a20(0x3d1fc98);
      func_0x00f78a20(0x3d21270);
      func_0x00f78a20(0x3d74f40);
      func_0x00f78a20(0x3d6cb80);
      bRam0000000003eb4787 = 1;
    }
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar7 = (undefined8 *)/*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_24_ArcadeMapSelect')*/ uRam0000000003d6cb80,0);
    **(undefined8 **)(/*Atlas.UI.Screens.ArcadeMapSelectScreen_TypeInfo*/ lRam0000000003d1fc98 + 0xb8) = puVar7;
    *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.ArcadeMapSelectScreen_TypeInfo*/ lRam0000000003d1fc98 + 0xb8) + 8) = /*STR('ToolTipData_FTUE_TOOLTIP_RETENTION_ARCADE_04')*/ uRam0000000003d74f40;
    return puVar7;
  }
  /*Atlas.Save.SaveManager$$SetIntData*/ func_0x014ece54(extraout_x1_00,uVar12,uVar16,0);
  puVar7 = (undefined8 *)/*Atlas.Save.SaveManager$$MarkSaveAsDirty*/ func_0x014eb72c(extraout_x1_00,0);
  return puVar7;
}



// ============================================================
// RVA: 0x1452b2c | Atlas.UI.Screens.ArcadeMapSelectScreen.SetAndAnimateReward
// ============================================================

/* WARNING: Possible PIC construction at 0x01452d88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01452e70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01452ed8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01452e74) */
/* WARNING: Removing unreachable block (ram,0x01452e80) */
/* WARNING: Removing unreachable block (ram,0x01452ee0) */
/* WARNING: Removing unreachable block (ram,0x01452e9c) */
/* WARNING: Removing unreachable block (ram,0x01452eac) */
/* WARNING: Removing unreachable block (ram,0x01452ebc) */
/* WARNING: Removing unreachable block (ram,0x01452ec4) */
/* WARNING: Removing unreachable block (ram,0x01452ec8) */
/* WARNING: Removing unreachable block (ram,0x01452d8c) */
/* WARNING: Removing unreachable block (ram,0x01452da0) */
/* WARNING: Removing unreachable block (ram,0x01452da8) */
/* WARNING: Removing unreachable block (ram,0x01452db4) */
/* WARNING: Removing unreachable block (ram,0x01452dc0) */
/* WARNING: Removing unreachable block (ram,0x01452de8) */
/* WARNING: Removing unreachable block (ram,0x01452df0) */
/* WARNING: Removing unreachable block (ram,0x01452dfc) */
/* WARNING: Removing unreachable block (ram,0x01452e08) */
/* WARNING: Removing unreachable block (ram,0x01452e2c) */
/* WARNING: Removing unreachable block (ram,0x01452e34) */
/* WARNING: Removing unreachable block (ram,0x01452e40) */
/* WARNING: Removing unreachable block (ram,0x01452e4c) */
/* WARNING: Removing unreachable block (ram,0x01452e60) */
/* WARNING: Removing unreachable block (ram,0x01452edc) */
/* WARNING: Removing unreachable block (ram,0x01452ee4) */

undefined8 *
Atlas_UI_Screens_ArcadeMapSelectScreen__SetAndAnimateReward
          (long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long extraout_x1;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  ulong unaff_x22;
  ulong uVar19;
  uint uVar20;
  ulong unaff_x24;
  ulong unaff_x25;
  long unaff_x26;
  long lVar21;
  ulong uVar22;
  undefined8 unaff_x28;
  undefined8 ***pppuVar23;
  undefined *puVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  ulong uStack_a0;
  ulong uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 **ppuStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [12];
  uint uStack_64;
  
  auVar25._8_8_ = param_2;
  auVar25._0_8_ = param_1;
  puVar5 = (ulong *)auStack_70;
  uVar18 = 0x3eb4000;
  uVar14 = param_4;
  if ((bRam0000000003eb4783 & 1) == 0) {
    func_0x00f78a20(0x3d1fcc0);
    func_0x00f78a20(0x3d305d0);
    func_0x00f78a20(0x3d40fa0);
    func_0x00f78a20(0x3d40fb0);
    bRam0000000003eb4783 = 1;
  }
  lVar15 = *(long *)(param_1 + 0xb8);
  uVar22 = param_3;
  if (lVar15 == 0) {
LAB_01452f08:
    func_0x00f78af4();
  }
  else {
    uVar17 = (uint)param_2;
    puVar1 = (uint *)(lVar15 + 0x20);
    if ((1 << (ulong)(uVar17 & 0x1f) & 0x15U) == 0) {
      puVar1 = (uint *)(lVar15 + 0x24);
    }
    puVar2 = (uint *)(lVar15 + 0x24);
    if (uVar17 < 5) {
      puVar2 = puVar1;
    }
    lVar15 = *(long *)(param_1 + 0xf0);
    if (lVar15 == 0) goto LAB_01452f08;
    uVar20 = (uint)param_4;
    if (*(uint *)(lVar15 + 0x18) <= uVar20) goto LAB_01452f0c;
    if (*(long *)(param_1 + 0x118) == 0) goto LAB_01452f08;
    lVar16 = 0x3d305d0;
    lVar21 = 0x3d305d0;
    uVar3 = *puVar2;
    unaff_x22 = (ulong)uVar3;
    uVar18 = (ulong)(int)uVar20;
    uVar4 = *(uint *)(lVar15 + uVar18 * 4 + 0x20);
    unaff_x24 = (ulong)uVar4;
    iVar6 = /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$get_Item*/ func_0x01e9e320(*(long *)(param_1 + 0x118),param_4,uRam0000000003d305d0);
    uVar4 = uVar4 - iVar6;
    unaff_x25 = (ulong)uVar4;
    unaff_x26 = lVar16;
    if (uVar20 == 2) {
      unaff_x26 = lVar21;
      if (*(long *)(param_1 + 0x118) != 0) {
        iVar6 = /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$get_Item*/ func_0x01e9e320(*(long *)(param_1 + 0x118),3,uRam0000000003d305d0);
        unaff_x25 = (ulong)(uVar4 - iVar6);
        goto LAB_01452c70;
      }
      goto LAB_01452f08;
    }
    if (uVar20 == 1) {
      if (*(long *)(param_1 + 0x118) != 0) {
        unaff_x24 = /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$get_Item*/ func_0x01e9e320(*(long *)(param_1 + 0x118),2,uRam0000000003d305d0);
        if (*(long *)(param_1 + 0x118) != 0) {
          iVar6 = /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$get_Item*/ func_0x01e9e320(*(long *)(param_1 + 0x118),3,uRam0000000003d305d0);
          unaff_x25 = (ulong)(uVar4 - ((int)unaff_x24 + iVar6));
          goto LAB_01452c70;
        }
      }
      goto LAB_01452f08;
    }
LAB_01452c70:
    lVar15 = *(long *)(param_1 + 0xf0);
    unaff_x26 = lVar21;
    if (lVar15 == 0) goto LAB_01452f08;
    unaff_x26 = lVar16;
    if (uVar20 < *(uint *)(lVar15 + 0x18)) {
      uVar4 = *(uint *)(lVar15 + uVar18 * 4 + 0x20);
      uVar20 = (uint)unaff_x25;
      if ((int)uVar3 <= (int)(uint)unaff_x25) {
        uVar20 = uVar3;
      }
      unaff_x24 = (ulong)uVar20;
      if ((int)uVar3 <= (int)uVar4) {
        uVar4 = uVar3;
      }
      uVar18 = (ulong)uVar4;
      lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fa0);
      unaff_x26 = lVar21;
      if ((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 200), lVar15 != 0)) {
        unaff_x26 = lVar16;
        if (*(uint *)(lVar15 + 0x18) <= uVar17) goto LAB_01452f0c;
        lVar16 = *(long *)(param_1 + 0xc0);
        unaff_x26 = lVar21;
        if (lVar16 != 0) {
          uStack_64 = uVar4;
          if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_01452f0c;
          unaff_x28 = 0x3d40fb0;
          uVar18 = (ulong)(int)uVar17;
          unaff_x26 = *(long *)(lVar15 + uVar18 * 8 + 0x20);
          uVar22 = *(ulong *)(lVar16 + uVar18 * 8 + 0x20);
          uVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d40fb0);
          unaff_x25 = param_3;
          if (unaff_x26 != 0) {
            uVar14 = unaff_x22;
            /*Atlas.UI.UIArcadeRewardBehaviour$$Set*/ func_0x01513258(unaff_x26,uVar22,unaff_x24,unaff_x22,param_4,uVar8,0);
            param_4 = /*Atlas.Helpers.ArcadeHelper$$IsRewardUnlocked*/ func_0x014505c4(*(undefined8 *)(param_1 + 0xb8),param_2,
                                      *(undefined8 *)(param_1 + 200));
            lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d40fb0);
            if (lVar15 != 0) {
              uVar22 = 0x3d1fcc0;
              lVar15 = *(long *)(lVar15 + 0x48);
              unaff_x28 = 0x3d40fa0;
              if (((*(ushort *)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              puVar24 = &UNK_01452d8c;
              uVar19 = unaff_x22;
              unaff_x26 = lVar15;
              pppuVar23 = (undefined8 ***)&stack0xfffffffffffffff0;
              goto code_r0x01452f94;
            }
          }
        }
      }
      goto LAB_01452f08;
    }
  }
LAB_01452f0c:
  param_3 = unaff_x25;
  uVar8 = func_0x00f78b24();
  auVar25 = func_0x00f78ac0(uVar8,0);
  puVar5 = &uStack_a0;
  puStack_78 = &Atlas_UI_Screens_ArcadeMapSelectScreen__DelayedCheckForMissingRewards;
  pppuVar23 = &ppuStack_80;
  uVar19 = 0x3d268b8;
  uStack_a0 = unaff_x22;
  uStack_98 = uVar18;
  lStack_90 = param_1;
  uStack_88 = param_2;
  ppuStack_80 = (undefined8 **)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4784 & 1) == 0) {
    func_0x00f78a20(0x3d268b8);
    bRam0000000003eb4784 = 1;
  }
  puVar9 = (undefined8 *)func_0x00f78aec(/*Atlas.UI.Screens.ArcadeMapSelectScreen.<DelayedCheckForMissingRewards>d__49_TypeInfo*/ uRam0000000003d268b8);
  /*Atlas.UI.Screens.ArcadeMapSelectScreen.<DelayedCheckForMissingRewards>d__49$$.ctor*/ func_0x01533f04(puVar9,0,0);
  if (puVar9 != (undefined8 *)0x0) {
    puVar9[5] = auVar25._0_8_;
    *(int *)(puVar9 + 4) = auVar25._8_4_;
    return puVar9;
  }
  puVar24 = &Atlas_Arcade_ArcadeSave__GetRewardSeen;
  auVar26 = func_0x00f78af4();
  lVar15 = auVar26._8_8_;
  param_2 = auVar26._0_8_;
  uVar18 = 0;
code_r0x01452f94:
  *(ulong *)((long)puVar5 + -0x30) = uVar19;
  *(ulong *)((long)puVar5 + -0x28) = uVar18;
  *(undefined1 (*) [16])((long)puVar5 + -0x20) = auVar25;
  *(undefined8 ****)((long)puVar5 + -0x10) = pppuVar23;
  *(undefined **)((long)puVar5 + -8) = puVar24;
  *(int *)((long)puVar5 + -0x34) = (int)param_2;
  if ((bRam0000000003eb4797 & 1) == 0) {
    func_0x00f78a20(0x3d246e0);
    func_0x00f78a20(0x3d68948);
    bRam0000000003eb4797 = 1;
  }
  uVar8 = /*System.Int32$$ToString*/ func_0x02ae9b8c((undefined1 *)((long)puVar5 + -0x34),0);
  uVar13 = 0;
  uVar8 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('ARSeen_')*/ uRam0000000003d68948,uVar8);
  if (lVar15 != 0) {
    uVar13 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(lVar15,0);
    if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar6 = /*Atlas.Save.SaveManager$$GetIntData*/ func_0x014ecbe0(uVar8,0,uVar13,0);
    return (undefined8 *)(ulong)(iVar6 == 1);
  }
  auVar25 = func_0x00f78af4();
  *(ulong *)((long)puVar5 + -0x80) = unaff_x24;
  *(ulong *)((long)puVar5 + -0x78) = param_4;
  *(ulong *)((long)puVar5 + -0x70) = uVar19;
  *(undefined8 *)((long)puVar5 + -0x68) = 0x3eb4000;
  *(undefined8 *)((long)puVar5 + -0x60) = 0x3d68948;
  *(undefined8 *)((long)puVar5 + -0x58) = 0;
  *(undefined1 **)((long)puVar5 + -0x50) = (undefined1 *)((long)puVar5 + -0x10);
  *(undefined **)((long)puVar5 + -0x48) =
       &Atlas_UI_Screens_ArcadeMapSelectScreen__OnRewardPanelClicked;
  uVar8 = uVar13;
  if ((bRam0000000003eb4785 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d62010);
    func_0x00f78a20(0x3d268a8);
    bRam0000000003eb4785 = 1;
  }
  lVar15 = func_0x00f78aec(/*Atlas.UI.Screens.ArcadeMapSelectScreen.<>c__DisplayClass50_0_TypeInfo*/ uRam0000000003d268a8);
  /*Atlas.UI.Screens.ArcadeMapSelectScreen.<>c__DisplayClass50_0$$.ctor*/ func_0x01533860(lVar15,0);
  if (lVar15 != 0) {
    *(char *)(lVar15 + 0x10) = (char)uVar13;
    *(ulong *)(lVar15 + 0x18) = uVar14;
    *(int *)(lVar15 + 0x20) = auVar25._8_4_;
    *(long *)(lVar15 + 0x28) = auVar25._0_8_;
    puVar9 = (undefined8 *)func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(puVar9,lVar15,uRam0000000003d62010,0);
    return puVar9;
  }
  uVar7 = func_0x00f78af4();
  *(undefined8 *)((long)puVar5 + -0xb0) = uVar13;
  *(long *)((long)puVar5 + -0xa8) = auVar25._8_8_;
  *(long *)((long)puVar5 + -0xa0) = auVar25._0_8_;
  *(ulong *)((long)puVar5 + -0x98) = uVar14;
  *(undefined1 **)((long)puVar5 + -0x90) = (undefined1 *)((long)puVar5 + -0x50);
  *(undefined **)((long)puVar5 + -0x88) = &Atlas_Arcade_ArcadeSave__SaveRewardSeen;
  *(undefined4 *)((long)puVar5 + -0xb4) = uVar7;
  if ((bRam0000000003eb4796 & 1) == 0) {
    func_0x00f78a20(0x3d68948);
    bRam0000000003eb4796 = 1;
  }
  uVar13 = /*System.Int32$$ToString*/ func_0x02ae9b8c((undefined1 *)((long)puVar5 + -0xb4),0);
  uVar13 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('ARSeen_')*/ uRam0000000003d68948,uVar13,0);
  if (extraout_x1 != 0) {
    /*Atlas.Save.SaveManager$$SetIntData*/ func_0x014ece54(extraout_x1,uVar13,uVar8,0);
    puVar9 = (undefined8 *)/*Atlas.Save.SaveManager$$MarkSaveAsDirty*/ func_0x014eb72c(extraout_x1,0);
    return puVar9;
  }
  lVar15 = func_0x00f78af4();
  *(undefined8 *)((long)puVar5 + -0x120) = unaff_x28;
  *(ulong *)((long)puVar5 + -0x118) = uVar22;
  *(long *)((long)puVar5 + -0x110) = unaff_x26;
  *(ulong *)((long)puVar5 + -0x108) = param_3;
  *(undefined8 *)((long)puVar5 + -0x100) = 0x3d268a8;
  *(undefined8 *)((long)puVar5 + -0xf8) = 0;
  *(undefined8 *)((long)puVar5 + -0xf0) = 0x3eb4000;
  *(undefined8 *)((long)puVar5 + -0xe8) = 0x3d68948;
  *(undefined8 *)((long)puVar5 + -0xe0) = uVar8;
  *(undefined8 *)((long)puVar5 + -0xd8) = 0;
  *(undefined1 **)((long)puVar5 + -0xd0) = (undefined1 *)((long)puVar5 + -0x90);
  *(undefined **)((long)puVar5 + -200) = &Atlas_UI_Screens_ArcadeMapSelectScreen___ctor;
  uVar8 = 0x3d1a510;
  uVar13 = 0x3d25458;
  if ((bRam0000000003eb4786 & 1) == 0) {
    func_0x00f78a20(0x3d2c680);
    func_0x00f78a20(0x3d305c8);
    func_0x00f78a20(0x3d2de48);
    func_0x00f78a20(0x3d2f2c8);
    func_0x00f78a20(0x3d305c0);
    func_0x00f78a20(0x3d2e258);
    func_0x00f78a20(0x3d2e490);
    func_0x00f78a20(0x3d1c1c0);
    func_0x00f78a20(0x3d1c660);
    func_0x00f78a20(0x3d1c138);
    func_0x00f78a20(0x3d1c230);
    func_0x00f78a20(0x3d1c3f8);
    func_0x00f78a20(0x3d215e0);
    func_0x00f78a20(0x3d1f100);
    func_0x00f78a20(0x3d3b0f0);
    func_0x00f78a20(0x3d1db90);
    func_0x00f78a20(0x3d1a510);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb4786 = 1;
  }
  uVar10 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<DefinitionID, ArcadeEventMetagameData[]>_TypeInfo*/ uRam0000000003d1c1c0);
  /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$.ctor*/ func_0x01e3bb54(uVar10,uRam0000000003d2e258);
  *(undefined8 *)(lVar15 + 0xe0) = uVar10;
  uVar10 = /*Atlas.Definitions.ArcadeEventDefinition.Medal_var*/ uRam0000000003d1a510;
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar10 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar10,0);
  if (((*(ushort *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar16 = /*System.Enum$$GetNames*/ func_0x02ac6658(uVar10,0);
  if (lVar16 != 0) {
    uVar10 = 0x3d1f100;
    uVar11 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,*(undefined4 *)(lVar16 + 0x18));
    *(undefined8 *)(lVar15 + 0xe8) = uVar11;
    uVar11 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*Atlas.Definitions.ArcadeEventDefinition.Medal_var*/ uRam0000000003d1a510,0);
    lVar16 = /*System.Enum$$GetNames*/ func_0x02ac6658(uVar11,0);
    if (lVar16 != 0) {
      uVar8 = 0x3d1c000;
      uVar13 = 0x3d2d000;
      uVar10 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,*(undefined4 *)(lVar16 + 0x18));
      *(undefined8 *)(lVar15 + 0xf0) = uVar10;
      uVar10 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<GameType, int>_TypeInfo*/ uRam0000000003d1c230);
      /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$.ctor*/ func_0x01e9deb4(uVar10,uRam0000000003d2e490);
      *(undefined8 *)(lVar15 + 0xf8) = uVar10;
      uVar10 = func_0x00f78aec(/*System.Collections.Generic.List<MapDefinition>_TypeInfo*/ uRam0000000003d1db90);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar10,uRam0000000003d3b0f0);
      *(undefined8 *)(lVar15 + 0x100) = uVar10;
      uVar10 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<MapDefinition, UIArcadePanelBehavior>_TypeInfo*/ uRam0000000003d1c3f8);
      /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar10,uRam0000000003d2f2c8);
      *(undefined8 *)(lVar15 + 0x108) = uVar10;
      uVar10 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<ValueTuple<MapDefinition, int>, bool>_TypeInfo*/ uRam0000000003d1c138);
      /*System.Collections.Generic.Dictionary<ValueTuple<object, int>, bool>$$.ctor*/ func_0x01e265ec(uVar10,uRam0000000003d2de48);
      *(undefined8 *)(lVar15 + 0x110) = uVar10;
      lVar16 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>_TypeInfo*/ uRam0000000003d1c660);
      /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$.ctor*/ func_0x01e9deb4(lVar16,uRam0000000003d305c0);
      uVar10 = 0;
      if (lVar16 != 0) {
        /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$Add*/ func_0x01e9e3e4(lVar16,1,0,uRam0000000003d305c8);
        /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$Add*/ func_0x01e9e3e4(lVar16,2,0,uRam0000000003d305c8);
        /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$Add*/ func_0x01e9e3e4(lVar16,3,0,uRam0000000003d305c8);
        *(long *)(lVar15 + 0x118) = lVar16;
        *(undefined8 *)((long)puVar5 + -0xd0) = *(undefined8 *)((long)puVar5 + -0xd0);
        *(undefined8 *)((long)puVar5 + -200) = *(undefined8 *)((long)puVar5 + -200);
        if (lVar15 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar9 = (undefined8 *)
                   (*(code *)**(undefined8 **)
                               (*(long *)(*(long *)(lRam0000000003d2c680 + 0x18) + 0xc0) + 0x38))();
          return puVar9;
        }
        auVar25 = func_0x00f78af4();
        puVar12 = auVar25._8_8_;
        puVar9 = auVar25._0_8_;
        uVar13 = puVar12[1];
        uVar8 = *puVar12;
        puVar9[2] = puVar12[2];
        puVar9[1] = uVar13;
        *puVar9 = uVar8;
        return puVar9;
      }
    }
  }
  func_0x00f78af4();
  *(undefined8 *)((long)puVar5 + -0x150) = uVar13;
  *(undefined8 *)((long)puVar5 + -0x148) = uVar8;
  *(undefined8 *)((long)puVar5 + -0x140) = uVar10;
  *(long *)((long)puVar5 + -0x138) = lVar15;
  *(undefined1 **)((long)puVar5 + -0x130) = (undefined1 *)((long)puVar5 + -0xd0);
  *(undefined **)((long)puVar5 + -0x128) = &Atlas_UI_Screens_ArcadeMapSelectScreen___cctor;
  if ((bRam0000000003eb4787 & 1) == 0) {
    func_0x00f78a20(0x3d1fc98);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d74f40);
    func_0x00f78a20(0x3d6cb80);
    bRam0000000003eb4787 = 1;
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar9 = (undefined8 *)/*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_24_ArcadeMapSelect')*/ uRam0000000003d6cb80,0);
  **(undefined8 **)(/*Atlas.UI.Screens.ArcadeMapSelectScreen_TypeInfo*/ lRam0000000003d1fc98 + 0xb8) = puVar9;
  *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.ArcadeMapSelectScreen_TypeInfo*/ lRam0000000003d1fc98 + 0xb8) + 8) = /*STR('ToolTipData_FTUE_TOOLTIP_RETENTION_ARCADE_04')*/ uRam0000000003d74f40;
  return puVar9;
}



// ============================================================
// RVA: 0x1452f18 | Atlas.UI.Screens.ArcadeMapSelectScreen.DelayedCheckForMissingRewards
// ============================================================

undefined8 *
Atlas_UI_Screens_ArcadeMapSelectScreen__DelayedCheckForMissingRewards
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long extraout_x1;
  long extraout_x1_00;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 **ppuStack_c0;
  undefined *puStack_b8;
  undefined1 **ppuStack_80;
  undefined *puStack_78;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4784 & 1) == 0) {
    func_0x00f78a20(0x3d268b8);
    bRam0000000003eb4784 = 1;
  }
  puVar2 = (undefined8 *)func_0x00f78aec(/*Atlas.UI.Screens.ArcadeMapSelectScreen.<DelayedCheckForMissingRewards>d__49_TypeInfo*/ uRam0000000003d268b8);
  /*Atlas.UI.Screens.ArcadeMapSelectScreen.<DelayedCheckForMissingRewards>d__49$$.ctor*/ func_0x01533f04(puVar2,0,0);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[5] = param_1;
    *(int *)(puVar2 + 4) = (int)param_2;
    return puVar2;
  }
  uStack_64 = func_0x00f78af4();
  uStack_60 = 0x3d268b8;
  puStack_38 = &Atlas_Arcade_ArcadeSave__GetRewardSeen;
  puStack_58 = puVar2;
  uStack_50 = param_1;
  uStack_48 = param_2;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4797 & 1) == 0) {
    func_0x00f78a20(0x3d246e0);
    func_0x00f78a20(0x3d68948);
    bRam0000000003eb4797 = 1;
  }
  uVar3 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_64,0);
  uVar7 = 0;
  uVar3 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('ARSeen_')*/ uRam0000000003d68948,uVar3);
  if (extraout_x1 != 0) {
    uVar7 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(extraout_x1,0);
    if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar1 = /*Atlas.Save.SaveManager$$GetIntData*/ func_0x014ecbe0(uVar3,0,uVar7,0);
    return (undefined8 *)(ulong)(iVar1 == 1);
  }
  auVar8 = func_0x00f78af4();
  puStack_78 = &Atlas_UI_Screens_ArcadeMapSelectScreen__OnRewardPanelClicked;
  uVar3 = uVar7;
  ppuStack_80 = &puStack_40;
  if ((bRam0000000003eb4785 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d62010);
    func_0x00f78a20(0x3d268a8);
    bRam0000000003eb4785 = 1;
  }
  lVar4 = func_0x00f78aec(/*Atlas.UI.Screens.ArcadeMapSelectScreen.<>c__DisplayClass50_0_TypeInfo*/ uRam0000000003d268a8);
  /*Atlas.UI.Screens.ArcadeMapSelectScreen.<>c__DisplayClass50_0$$.ctor*/ func_0x01533860(lVar4,0);
  if (lVar4 != 0) {
    *(char *)(lVar4 + 0x10) = (char)uVar7;
    *(undefined8 *)(lVar4 + 0x18) = param_4;
    *(int *)(lVar4 + 0x20) = auVar8._8_4_;
    *(long *)(lVar4 + 0x28) = auVar8._0_8_;
    puVar2 = (undefined8 *)func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(puVar2,lVar4,uRam0000000003d62010,0);
    return puVar2;
  }
  uStack_e4 = func_0x00f78af4();
  puStack_b8 = &Atlas_Arcade_ArcadeSave__SaveRewardSeen;
  uStack_e0 = uVar7;
  uStack_c8 = param_4;
  ppuStack_c0 = &ppuStack_80;
  if ((bRam0000000003eb4796 & 1) == 0) {
    uStack_d8 = auVar8._8_8_;
    uStack_d0 = auVar8._0_8_;
    func_0x00f78a20(0x3d68948);
    auVar8._8_8_ = uStack_d8;
    auVar8._0_8_ = uStack_d0;
    bRam0000000003eb4796 = 1;
  }
  uStack_d8 = auVar8._8_8_;
  uStack_d0 = auVar8._0_8_;
  uVar7 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_e4,0);
  uVar7 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('ARSeen_')*/ uRam0000000003d68948,uVar7,0);
  if (extraout_x1_00 != 0) {
    /*Atlas.Save.SaveManager$$SetIntData*/ func_0x014ece54(extraout_x1_00,uVar7,uVar3,0);
    puVar2 = (undefined8 *)/*Atlas.Save.SaveManager$$MarkSaveAsDirty*/ func_0x014eb72c(extraout_x1_00,0);
    return puVar2;
  }
  lVar4 = func_0x00f78af4();
  if ((bRam0000000003eb4786 & 1) == 0) {
    func_0x00f78a20(0x3d2c680);
    func_0x00f78a20(0x3d305c8);
    func_0x00f78a20(0x3d2de48);
    func_0x00f78a20(0x3d2f2c8);
    func_0x00f78a20(0x3d305c0);
    func_0x00f78a20(0x3d2e258);
    func_0x00f78a20(0x3d2e490);
    func_0x00f78a20(0x3d1c1c0);
    func_0x00f78a20(0x3d1c660);
    func_0x00f78a20(0x3d1c138);
    func_0x00f78a20(0x3d1c230);
    func_0x00f78a20(0x3d1c3f8);
    func_0x00f78a20(0x3d215e0);
    func_0x00f78a20(0x3d1f100);
    func_0x00f78a20(0x3d3b0f0);
    func_0x00f78a20(0x3d1db90);
    func_0x00f78a20(0x3d1a510);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb4786 = 1;
  }
  uVar3 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<DefinitionID, ArcadeEventMetagameData[]>_TypeInfo*/ uRam0000000003d1c1c0);
  /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$.ctor*/ func_0x01e3bb54(uVar3,uRam0000000003d2e258);
  *(undefined8 *)(lVar4 + 0xe0) = uVar3;
  uVar3 = /*Atlas.Definitions.ArcadeEventDefinition.Medal_var*/ uRam0000000003d1a510;
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar3,0);
  if (((*(ushort *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar5 = /*System.Enum$$GetNames*/ func_0x02ac6658(uVar3,0);
  if (lVar5 != 0) {
    uVar3 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,*(undefined4 *)(lVar5 + 0x18));
    *(undefined8 *)(lVar4 + 0xe8) = uVar3;
    uVar3 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*Atlas.Definitions.ArcadeEventDefinition.Medal_var*/ uRam0000000003d1a510,0);
    lVar5 = /*System.Enum$$GetNames*/ func_0x02ac6658(uVar3,0);
    if (lVar5 != 0) {
      uVar3 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,*(undefined4 *)(lVar5 + 0x18));
      *(undefined8 *)(lVar4 + 0xf0) = uVar3;
      uVar3 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<GameType, int>_TypeInfo*/ uRam0000000003d1c230);
      /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$.ctor*/ func_0x01e9deb4(uVar3,uRam0000000003d2e490);
      *(undefined8 *)(lVar4 + 0xf8) = uVar3;
      uVar3 = func_0x00f78aec(/*System.Collections.Generic.List<MapDefinition>_TypeInfo*/ uRam0000000003d1db90);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar3,uRam0000000003d3b0f0);
      *(undefined8 *)(lVar4 + 0x100) = uVar3;
      uVar3 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<MapDefinition, UIArcadePanelBehavior>_TypeInfo*/ uRam0000000003d1c3f8);
      /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar3,uRam0000000003d2f2c8);
      *(undefined8 *)(lVar4 + 0x108) = uVar3;
      uVar3 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<ValueTuple<MapDefinition, int>, bool>_TypeInfo*/ uRam0000000003d1c138);
      /*System.Collections.Generic.Dictionary<ValueTuple<object, int>, bool>$$.ctor*/ func_0x01e265ec(uVar3,uRam0000000003d2de48);
      *(undefined8 *)(lVar4 + 0x110) = uVar3;
      lVar5 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>_TypeInfo*/ uRam0000000003d1c660);
      /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$.ctor*/ func_0x01e9deb4(lVar5,uRam0000000003d305c0);
      if (lVar5 != 0) {
        /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$Add*/ func_0x01e9e3e4(lVar5,1,0,uRam0000000003d305c8);
        /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$Add*/ func_0x01e9e3e4(lVar5,2,0,uRam0000000003d305c8);
        /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$Add*/ func_0x01e9e3e4(lVar5,3,0,uRam0000000003d305c8);
        *(long *)(lVar4 + 0x118) = lVar5;
        if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar2 = (undefined8 *)
                   (*(code *)**(undefined8 **)
                               (*(long *)(*(long *)(lRam0000000003d2c680 + 0x18) + 0xc0) + 0x38))();
          return puVar2;
        }
        auVar8 = func_0x00f78af4();
        puVar6 = auVar8._8_8_;
        puVar2 = auVar8._0_8_;
        uVar7 = puVar6[1];
        uVar3 = *puVar6;
        puVar2[2] = puVar6[2];
        puVar2[1] = uVar7;
        *puVar2 = uVar3;
        return puVar2;
      }
    }
  }
  func_0x00f78af4();
  if ((bRam0000000003eb4787 & 1) == 0) {
    func_0x00f78a20(0x3d1fc98);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d74f40);
    func_0x00f78a20(0x3d6cb80);
    bRam0000000003eb4787 = 1;
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar2 = (undefined8 *)/*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_24_ArcadeMapSelect')*/ uRam0000000003d6cb80,0);
  **(undefined8 **)(/*Atlas.UI.Screens.ArcadeMapSelectScreen_TypeInfo*/ lRam0000000003d1fc98 + 0xb8) = puVar2;
  *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.ArcadeMapSelectScreen_TypeInfo*/ lRam0000000003d1fc98 + 0xb8) + 8) = /*STR('ToolTipData_FTUE_TOOLTIP_RETENTION_ARCADE_04')*/ uRam0000000003d74f40;
  return puVar2;
}



// ============================================================
// RVA: 0x145306c | Atlas.UI.Screens.ArcadeMapSelectScreen.OnRewardPanelClicked
// ============================================================

undefined8 *
Atlas_UI_Screens_ArcadeMapSelectScreen__OnRewardPanelClicked
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long extraout_x1;
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  uVar4 = param_3;
  if ((bRam0000000003eb4785 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d62010);
    func_0x00f78a20(0x3d268a8);
    bRam0000000003eb4785 = 1;
  }
  lVar1 = func_0x00f78aec(/*Atlas.UI.Screens.ArcadeMapSelectScreen.<>c__DisplayClass50_0_TypeInfo*/ uRam0000000003d268a8);
  /*Atlas.UI.Screens.ArcadeMapSelectScreen.<>c__DisplayClass50_0$$.ctor*/ func_0x01533860(lVar1,0);
  if (lVar1 != 0) {
    *(char *)(lVar1 + 0x10) = (char)param_3;
    *(undefined8 *)(lVar1 + 0x18) = param_4;
    *(int *)(lVar1 + 0x20) = (int)param_2;
    *(undefined8 *)(lVar1 + 0x28) = param_1;
    puVar2 = (undefined8 *)func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(puVar2,lVar1,uRam0000000003d62010,0);
    return puVar2;
  }
  uStack_74 = func_0x00f78af4();
  puStack_48 = &Atlas_Arcade_ArcadeSave__SaveRewardSeen;
  uStack_70 = param_3;
  uStack_68 = param_2;
  uStack_60 = param_1;
  uStack_58 = param_4;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4796 & 1) == 0) {
    func_0x00f78a20(0x3d68948);
    bRam0000000003eb4796 = 1;
  }
  uVar3 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_74,0);
  uVar3 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('ARSeen_')*/ uRam0000000003d68948,uVar3,0);
  if (extraout_x1 != 0) {
    /*Atlas.Save.SaveManager$$SetIntData*/ func_0x014ece54(extraout_x1,uVar3,uVar4,0);
    puVar2 = (undefined8 *)/*Atlas.Save.SaveManager$$MarkSaveAsDirty*/ func_0x014eb72c(extraout_x1,0);
    return puVar2;
  }
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003eb4786 & 1) == 0) {
    func_0x00f78a20(0x3d2c680);
    func_0x00f78a20(0x3d305c8);
    func_0x00f78a20(0x3d2de48);
    func_0x00f78a20(0x3d2f2c8);
    func_0x00f78a20(0x3d305c0);
    func_0x00f78a20(0x3d2e258);
    func_0x00f78a20(0x3d2e490);
    func_0x00f78a20(0x3d1c1c0);
    func_0x00f78a20(0x3d1c660);
    func_0x00f78a20(0x3d1c138);
    func_0x00f78a20(0x3d1c230);
    func_0x00f78a20(0x3d1c3f8);
    func_0x00f78a20(0x3d215e0);
    func_0x00f78a20(0x3d1f100);
    func_0x00f78a20(0x3d3b0f0);
    func_0x00f78a20(0x3d1db90);
    func_0x00f78a20(0x3d1a510);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb4786 = 1;
  }
  uVar4 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<DefinitionID, ArcadeEventMetagameData[]>_TypeInfo*/ uRam0000000003d1c1c0);
  /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$.ctor*/ func_0x01e3bb54(uVar4,uRam0000000003d2e258);
  *(undefined8 *)(lVar1 + 0xe0) = uVar4;
  uVar4 = /*Atlas.Definitions.ArcadeEventDefinition.Medal_var*/ uRam0000000003d1a510;
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar4 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar4,0);
  if (((*(ushort *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar5 = /*System.Enum$$GetNames*/ func_0x02ac6658(uVar4,0);
  if (lVar5 != 0) {
    uVar4 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,*(undefined4 *)(lVar5 + 0x18));
    *(undefined8 *)(lVar1 + 0xe8) = uVar4;
    uVar4 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*Atlas.Definitions.ArcadeEventDefinition.Medal_var*/ uRam0000000003d1a510,0);
    lVar5 = /*System.Enum$$GetNames*/ func_0x02ac6658(uVar4,0);
    if (lVar5 != 0) {
      uVar4 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,*(undefined4 *)(lVar5 + 0x18));
      *(undefined8 *)(lVar1 + 0xf0) = uVar4;
      uVar4 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<GameType, int>_TypeInfo*/ uRam0000000003d1c230);
      /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$.ctor*/ func_0x01e9deb4(uVar4,uRam0000000003d2e490);
      *(undefined8 *)(lVar1 + 0xf8) = uVar4;
      uVar4 = func_0x00f78aec(/*System.Collections.Generic.List<MapDefinition>_TypeInfo*/ uRam0000000003d1db90);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar4,uRam0000000003d3b0f0);
      *(undefined8 *)(lVar1 + 0x100) = uVar4;
      uVar4 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<MapDefinition, UIArcadePanelBehavior>_TypeInfo*/ uRam0000000003d1c3f8);
      /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar4,uRam0000000003d2f2c8);
      *(undefined8 *)(lVar1 + 0x108) = uVar4;
      uVar4 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<ValueTuple<MapDefinition, int>, bool>_TypeInfo*/ uRam0000000003d1c138);
      /*System.Collections.Generic.Dictionary<ValueTuple<object, int>, bool>$$.ctor*/ func_0x01e265ec(uVar4,uRam0000000003d2de48);
      *(undefined8 *)(lVar1 + 0x110) = uVar4;
      lVar5 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>_TypeInfo*/ uRam0000000003d1c660);
      /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$.ctor*/ func_0x01e9deb4(lVar5,uRam0000000003d305c0);
      if (lVar5 != 0) {
        /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$Add*/ func_0x01e9e3e4(lVar5,1,0,uRam0000000003d305c8);
        /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$Add*/ func_0x01e9e3e4(lVar5,2,0,uRam0000000003d305c8);
        /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$Add*/ func_0x01e9e3e4(lVar5,3,0,uRam0000000003d305c8);
        *(long *)(lVar1 + 0x118) = lVar5;
        if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar2 = (undefined8 *)
                   (*(code *)**(undefined8 **)
                               (*(long *)(*(long *)(lRam0000000003d2c680 + 0x18) + 0xc0) + 0x38))();
          return puVar2;
        }
        auVar7 = func_0x00f78af4();
        puVar6 = auVar7._8_8_;
        puVar2 = auVar7._0_8_;
        uVar3 = puVar6[1];
        uVar4 = *puVar6;
        puVar2[2] = puVar6[2];
        puVar2[1] = uVar3;
        *puVar2 = uVar4;
        return puVar2;
      }
    }
  }
  func_0x00f78af4();
  if ((bRam0000000003eb4787 & 1) == 0) {
    func_0x00f78a20(0x3d1fc98);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d74f40);
    func_0x00f78a20(0x3d6cb80);
    bRam0000000003eb4787 = 1;
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar2 = (undefined8 *)/*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_24_ArcadeMapSelect')*/ uRam0000000003d6cb80,0);
  **(undefined8 **)(/*Atlas.UI.Screens.ArcadeMapSelectScreen_TypeInfo*/ lRam0000000003d1fc98 + 0xb8) = puVar2;
  *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.ArcadeMapSelectScreen_TypeInfo*/ lRam0000000003d1fc98 + 0xb8) + 8) = /*STR('ToolTipData_FTUE_TOOLTIP_RETENTION_ARCADE_04')*/ uRam0000000003d74f40;
  return puVar2;
}



// ============================================================
// RVA: 0x14531e0 | Atlas.UI.Screens.ArcadeMapSelectScreen..ctor
// ============================================================

void Atlas_UI_Screens_ArcadeMapSelectScreen___ctor(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000003eb4786 & 1) == 0) {
    func_0x00f78a20(0x3d2c680);
    func_0x00f78a20(0x3d305c8);
    func_0x00f78a20(0x3d2de48);
    func_0x00f78a20(0x3d2f2c8);
    func_0x00f78a20(0x3d305c0);
    func_0x00f78a20(0x3d2e258);
    func_0x00f78a20(0x3d2e490);
    func_0x00f78a20(0x3d1c1c0);
    func_0x00f78a20(0x3d1c660);
    func_0x00f78a20(0x3d1c138);
    func_0x00f78a20(0x3d1c230);
    func_0x00f78a20(0x3d1c3f8);
    func_0x00f78a20(0x3d215e0);
    func_0x00f78a20(0x3d1f100);
    func_0x00f78a20(0x3d3b0f0);
    func_0x00f78a20(0x3d1db90);
    func_0x00f78a20(0x3d1a510);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb4786 = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<DefinitionID, ArcadeEventMetagameData[]>_TypeInfo*/ uRam0000000003d1c1c0);
  /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$.ctor*/ func_0x01e3bb54(uVar1,uRam0000000003d2e258);
  *(undefined8 *)(param_1 + 0xe0) = uVar1;
  uVar1 = /*Atlas.Definitions.ArcadeEventDefinition.Medal_var*/ uRam0000000003d1a510;
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar1,0);
  if (((*(ushort *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar2 = /*System.Enum$$GetNames*/ func_0x02ac6658(uVar1,0);
  if (lVar2 != 0) {
    uVar1 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,*(undefined4 *)(lVar2 + 0x18));
    *(undefined8 *)(param_1 + 0xe8) = uVar1;
    uVar1 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*Atlas.Definitions.ArcadeEventDefinition.Medal_var*/ uRam0000000003d1a510,0);
    lVar2 = /*System.Enum$$GetNames*/ func_0x02ac6658(uVar1,0);
    if (lVar2 != 0) {
      uVar1 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,*(undefined4 *)(lVar2 + 0x18));
      *(undefined8 *)(param_1 + 0xf0) = uVar1;
      uVar1 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<GameType, int>_TypeInfo*/ uRam0000000003d1c230);
      /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$.ctor*/ func_0x01e9deb4(uVar1,uRam0000000003d2e490);
      *(undefined8 *)(param_1 + 0xf8) = uVar1;
      uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<MapDefinition>_TypeInfo*/ uRam0000000003d1db90);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar1,uRam0000000003d3b0f0);
      *(undefined8 *)(param_1 + 0x100) = uVar1;
      uVar1 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<MapDefinition, UIArcadePanelBehavior>_TypeInfo*/ uRam0000000003d1c3f8);
      /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar1,uRam0000000003d2f2c8);
      *(undefined8 *)(param_1 + 0x108) = uVar1;
      uVar1 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<ValueTuple<MapDefinition, int>, bool>_TypeInfo*/ uRam0000000003d1c138);
      /*System.Collections.Generic.Dictionary<ValueTuple<object, int>, bool>$$.ctor*/ func_0x01e265ec(uVar1,uRam0000000003d2de48);
      *(undefined8 *)(param_1 + 0x110) = uVar1;
      lVar2 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>_TypeInfo*/ uRam0000000003d1c660);
      /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$.ctor*/ func_0x01e9deb4(lVar2,uRam0000000003d305c0);
      if (lVar2 != 0) {
        /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$Add*/ func_0x01e9e3e4(lVar2,1,0,uRam0000000003d305c8);
        /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$Add*/ func_0x01e9e3e4(lVar2,2,0,uRam0000000003d305c8);
        /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$Add*/ func_0x01e9e3e4(lVar2,3,0,uRam0000000003d305c8);
        *(long *)(param_1 + 0x118) = lVar2;
        if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)**(undefined8 **)
                      (*(long *)(*(long *)(lRam0000000003d2c680 + 0x18) + 0xc0) + 0x38))();
          return;
        }
        auVar6 = func_0x00f78af4();
        puVar4 = auVar6._8_8_;
        puVar3 = auVar6._0_8_;
        uVar5 = puVar4[1];
        uVar1 = *puVar4;
        puVar3[2] = puVar4[2];
        puVar3[1] = uVar5;
        *puVar3 = uVar1;
        return;
      }
    }
  }
  func_0x00f78af4();
  if ((bRam0000000003eb4787 & 1) == 0) {
    func_0x00f78a20(0x3d1fc98);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d74f40);
    func_0x00f78a20(0x3d6cb80);
    bRam0000000003eb4787 = 1;
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_24_ArcadeMapSelect')*/ uRam0000000003d6cb80,0);
  **(undefined8 **)(/*Atlas.UI.Screens.ArcadeMapSelectScreen_TypeInfo*/ lRam0000000003d1fc98 + 0xb8) = uVar1;
  *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.ArcadeMapSelectScreen_TypeInfo*/ lRam0000000003d1fc98 + 0xb8) + 8) = /*STR('ToolTipData_FTUE_TOOLTIP_RETENTION_ARCADE_04')*/ uRam0000000003d74f40;
  return;
}



// ============================================================
// RVA: 0x1453508 | Atlas.UI.Screens.ArcadeMapSelectScreen..cctor
// ============================================================

void Atlas_UI_Screens_ArcadeMapSelectScreen___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb4787 & 1) == 0) {
    func_0x00f78a20(0x3d1fc98);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d74f40);
    func_0x00f78a20(0x3d6cb80);
    bRam0000000003eb4787 = 1;
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_24_ArcadeMapSelect')*/ uRam0000000003d6cb80,0);
  **(undefined8 **)(/*Atlas.UI.Screens.ArcadeMapSelectScreen_TypeInfo*/ lRam0000000003d1fc98 + 0xb8) = uVar1;
  *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.ArcadeMapSelectScreen_TypeInfo*/ lRam0000000003d1fc98 + 0xb8) + 8) = /*STR('ToolTipData_FTUE_TOOLTIP_RETENTION_ARCADE_04')*/ uRam0000000003d74f40;
  return;
}



// ============================================================
// RVA: 0x14535cc | Atlas.UI.Screens.ArcadeMapSelectScreen.<BuildMapPanels>b__37_1
// ============================================================
// [DECOMPILE_FAILED]

