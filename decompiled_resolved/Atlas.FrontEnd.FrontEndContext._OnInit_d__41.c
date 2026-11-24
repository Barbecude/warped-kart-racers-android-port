// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.FrontEnd.FrontEndContext.<OnInit>d__41

// ============================================================
// RVA: 0x154db64 | Atlas.FrontEnd.FrontEndContext.<OnInit>d__41..ctor
// ============================================================

void Atlas_FrontEnd_FrontEndContext__OnInit_d__41___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x154db90 | Atlas.FrontEnd.FrontEndContext.<OnInit>d__41.System.IDisposable.Dispose
// ============================================================

void Atlas_FrontEnd_FrontEndContext__OnInit_d__41__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x154db94 | Atlas.FrontEnd.FrontEndContext.<OnInit>d__41.MoveNext
// ============================================================

undefined8 Atlas_FrontEnd_FrontEndContext__OnInit_d__41__MoveNext(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if ((bRam0000000003eb4f7f & 1) == 0) {
    func_0x00f78a20(0x3d2a320);
    func_0x00f78a20(0x3d1b598);
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d55078);
    func_0x00f78a20(0x3d55088);
    func_0x00f78a20(0x3d55090);
    func_0x00f78a20(0x3d550a0);
    func_0x00f78a20(0x3d550b8);
    func_0x00f78a20(0x3d550c0);
    func_0x00f78a20(0x3d550c8);
    func_0x00f78a20(0x3d550d0);
    func_0x00f78a20(0x3d55100);
    func_0x00f78a20(0x3d55128);
    func_0x00f78a20(0x3d55140);
    func_0x00f78a20(0x3d55148);
    func_0x00f78a20(0x3d55188);
    func_0x00f78a20(0x3d55190);
    func_0x00f78a20(0x3d55198);
    func_0x00f78a20(0x3d551a0);
    func_0x00f78a20(0x3d551a8);
    func_0x00f78a20(0x3d551b0);
    func_0x00f78a20(0x3d551b8);
    func_0x00f78a20(0x3d551c0);
    func_0x00f78a20(0x3d21a08);
    func_0x00f78a20(0x3d194c8);
    func_0x00f78a20(0x3d194d8);
    func_0x00f78a20(0x3d56b70);
    func_0x00f78a20(0x3d21a18);
    func_0x00f78a20(0x3d27628);
    func_0x00f78a20(0x3d5d990);
    func_0x00f78a20(0x3d24d40);
    func_0x00f78a20(0x3d29350);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb4f7f = 1;
  }
  iVar4 = *(int *)(param_1 + 0x10);
  lVar12 = *(long *)(param_1 + 0x28);
  if (iVar4 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar12 != 0) {
code_r0x0154de8c:
      if (*(long *)(lVar12 + 0x18) != 0) {
        iVar4 = /*Atlas.UI.AtlasUIManager$$IsLayerReady*/ func_0x01470920(*(long *)(lVar12 + 0x18),4,0);
        if (iVar4 == 0) {
          *(undefined8 *)(param_1 + 0x18) = 0;
          *(undefined4 *)(param_1 + 0x10) = 2;
          return 1;
        }
        if (*(char *)(param_1 + 0x40) == '\0') {
          if (*(long *)(param_1 + 0x38) == 0) {
            uVar7 = 0;
          }
          else {
            uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x28);
          }
          uVar15 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextModeSelectState.ModeSelectTransitionData_TypeInfo*/ uRam0000000003d27628);
          Atlas_Contexts_FrontEndContextModeSelectState_ModeSelectTransitionData___ctor
                    (uVar15,uVar7);
          if (*(long *)(lVar12 + 0xa8) != 0) {
            /*Core.StateManagement.StateMachine$$TryRequestState<OutroSequenceShowPlacementsState>*/ func_0x018e16a8(*(long *)(lVar12 + 0xa8),0,uVar15,uRam0000000003d5d990);
            return 0;
          }
        }
        else {
          lVar14 = *(long *)(param_1 + 0x38);
          if ((lVar14 != 0) && (*(long *)(lVar12 + 0xa8) != 0)) {
            /*Core.StateManagement.StateMachine$$TryRequestState*/ func_0x02b955cc(*(long *)(lVar12 + 0xa8),*(undefined8 *)(lVar14 + 0x18),0,
                            *(undefined8 *)(lVar14 + 0x20),0);
            return 0;
          }
        }
      }
    }
  }
  else if (iVar4 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar12 != 0) {
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      Atlas_FrontEnd_FrontEndContext__TryFixSavedLoadout(lVar12,&uStack_f0,0);
      goto code_r0x0154de8c;
    }
  }
  else {
    if (iVar4 != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    plVar6 = *(long **)(param_1 + 0x20);
    if (plVar6 == (long *)0x0) {
      iVar4 = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined1 *)(param_1 + 0x40) = 0;
    }
    else {
      if ((*(byte *)(*plVar6 + 300) < *(byte *)(/*Atlas.FrontEnd.FrontEndContextInfo_TypeInfo*/ lRam0000000003d21a08 + 300)) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(/*Atlas.FrontEnd.FrontEndContextInfo_TypeInfo*/ lRam0000000003d21a08 + 300) * 8 + -8
                   ) != /*Atlas.FrontEnd.FrontEndContextInfo_TypeInfo*/ lRam0000000003d21a08)) goto LAB_0154e4a8;
      *(long *)(param_1 + 0x38) = (long)plVar6;
      lVar14 = plVar6[3];
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar4 = /*System.Type$$op_Inequality*/ func_0x02a02a90(lVar14,0,0);
      *(char *)(param_1 + 0x40) = (char)iVar4;
      uVar7 = /*Atlas.Contexts.FrontEndContextPostQuickPlayState_var*/ uRam0000000003d194d8;
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        lVar14 = *(long *)(param_1 + 0x38);
        if (lVar14 == 0) goto LAB_0154e4a4;
        uVar15 = *(undefined8 *)(lVar14 + 0x18);
        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar7 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar7,0);
        iVar4 = /*System.Type$$op_Equality*/ func_0x02a02980(uVar15,uVar7,0);
      }
    }
    if (lVar12 != 0) {
      Atlas_Contexts_AtlasContext__ReadyToHideLoadingScreenAfterInit(lVar12,0);
      if (*(char *)(param_1 + 0x40) == '\0') {
        Atlas_Contexts_AtlasContext__NotReadyToHideLoadingScreenAfterInit(lVar12,0);
      }
      uVar7 = /*Atlas.Contexts.FrontEndContextModeSelectState_var*/ uRam0000000003d194c8;
      lVar14 = *(long *)(param_1 + 0x38);
      if (lVar14 != 0) {
        uVar15 = *(undefined8 *)(lVar14 + 0x18);
        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar7 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar7,0);
        uVar8 = /*System.Type$$op_Equality*/ func_0x02a02980(uVar15,uVar7,0);
        uVar7 = /*Atlas.Contexts.FrontEndContextPostQuickPlayState_var*/ uRam0000000003d194d8;
        if ((uVar8 & 1) == 0) {
          lVar14 = *(long *)(param_1 + 0x38);
          if (lVar14 == 0) goto LAB_0154e4a4;
          uVar15 = *(undefined8 *)(lVar14 + 0x18);
          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar7 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar7,0);
          iVar5 = /*System.Type$$op_Equality*/ func_0x02a02980(uVar15,uVar7,0);
          if (iVar5 == 0) goto code_r0x0154dfe8;
        }
        Atlas_Contexts_AtlasContext__NotReadyToHideLoadingScreenAfterInit(lVar12,0);
      }
code_r0x0154dfe8:
      plVar6 = (long *)(param_1 + 0x30);
      if (*plVar6 != 0) {
        uVar7 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(*plVar6,uRam0000000003d550b8);
        *(undefined8 *)(lVar12 + 0x18) = uVar7;
        if (*plVar6 != 0) {
          uVar7 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(*plVar6,uRam0000000003d55148);
          *(undefined8 *)(lVar12 + 0x28) = uVar7;
          if (*plVar6 != 0) {
            uVar7 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(*plVar6,uRam0000000003d550c8);
            *(undefined8 *)(lVar12 + 0x30) = uVar7;
            if (*plVar6 != 0) {
              uVar7 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(*plVar6,uRam0000000003d55090);
              *(undefined8 *)(lVar12 + 0x38) = uVar7;
              if (*plVar6 != 0) {
                uVar7 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(*plVar6,uRam0000000003d551b0);
                *(undefined8 *)(lVar12 + 0x20) = uVar7;
                if (*plVar6 != 0) {
                  uVar7 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(*plVar6,uRam0000000003d55078);
                  *(undefined8 *)(lVar12 + 0x40) = uVar7;
                  if (*plVar6 != 0) {
                    uVar7 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(*plVar6,uRam0000000003d550c0);
                    *(undefined8 *)(lVar12 + 0x48) = uVar7;
                    if (*plVar6 != 0) {
                      uVar7 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(*plVar6,uRam0000000003d55100);
                      *(undefined8 *)(lVar12 + 0x110) = uVar7;
                      if (*plVar6 != 0) {
                        uVar7 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(*plVar6,uRam0000000003d551b8);
                        *(undefined8 *)(lVar12 + 0x50) = uVar7;
                        if (*plVar6 != 0) {
                          uVar7 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(*plVar6,uRam0000000003d550d0);
                          *(undefined8 *)(lVar12 + 0x58) = uVar7;
                          if (*plVar6 != 0) {
                            uVar7 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(*plVar6,uRam0000000003d55198);
                            *(undefined8 *)(lVar12 + 0x60) = uVar7;
                            if (*plVar6 != 0) {
                              uVar7 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(*plVar6,uRam0000000003d55140);
                              *(undefined8 *)(lVar12 + 0x68) = uVar7;
                              if (*plVar6 != 0) {
                                uVar7 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(*plVar6,uRam0000000003d551a8);
                                *(undefined8 *)(lVar12 + 0x70) = uVar7;
                                if (*plVar6 != 0) {
                                  uVar7 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(*plVar6,uRam0000000003d550a0);
                                  *(undefined8 *)(lVar12 + 0x78) = uVar7;
                                  if (*plVar6 != 0) {
                                    uVar7 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(*plVar6,uRam0000000003d55188);
                                    *(undefined8 *)(lVar12 + 0x80) = uVar7;
                                    if (*plVar6 != 0) {
                                      uVar7 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(*plVar6,uRam0000000003d551c0);
                                      *(undefined8 *)(lVar12 + 0x88) = uVar7;
                                      if (*plVar6 != 0) {
                                        uVar7 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(*plVar6,uRam0000000003d55190);
                                        *(undefined8 *)(lVar12 + 0x90) = uVar7;
                                        if (*plVar6 != 0) {
                                          uVar7 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(*plVar6,uRam0000000003d551a0);
                                          *(undefined8 *)(lVar12 + 0x98) = uVar7;
                                          if (*plVar6 != 0) {
                                            uVar7 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(*plVar6,uRam0000000003d55128);
                                            *(undefined8 *)(lVar12 + 0xa0) = uVar7;
                                            if (*(long *)(lVar12 + 0x78) != 0) {
                                              /*Atlas.Settings.AtlasQualitySettings$$BeginBoostLoading*/ func_0x0145ec94(*(long *)(lVar12 + 0x78),0);
                                              if (*(long *)(lVar12 + 0x78) != 0) {
                                                /*Atlas.Settings.AtlasQualitySettings$$SetDrawOutlinesAfterTransparencyPass*/ func_0x0145fe80(*(long *)(lVar12 + 0x78),1,0,0);
                                                if (*(long *)(lVar12 + 0x78) != 0) {
                                                  /*Atlas.Settings.AtlasQualitySettings$$SetFrontEndSettings*/ func_0x0145ec00(*(long *)(lVar12 + 0x78),0);
                                                  lVar14 = *(long *)(lVar12 + 0x60);
                                                  if (lVar14 != 0) {
                                                    uVar15 = *(undefined8 *)(lVar14 + 0x48);
                                                    uVar7 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ lRam0000000003d1b598);
                                                    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar7,lVar12,
                                                                    uRam0000000003d56b70,
                                                                    uRam0000000003d2a320);
                                                    plVar9 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar15,uVar7,0)
                                                    ;
                                                    if ((plVar9 != (long *)0x0) &&
                                                       (*plVar9 != /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598))
                                                    goto LAB_0154e4a8;
                                                    *(long **)(lVar14 + 0x48) = plVar9;
                                                    lVar14 = func_0x00f78aec(/*Core.StateManagement.StateMachine_TypeInfo*/ uRam0000000003d24d40);
                                                    /*Core.StateManagement.StateMachine$$.ctor*/ func_0x02b9585c(lVar14,0);
                                                    *(long *)(lVar12 + 0xa8) = lVar14;
                                                    if (lVar14 != 0) {
                                                      /*Core.StateManagement.StateMachine$$Init*/ func_0x02b95450(lVar14,2,0);
                                                      uVar7 = func_0x00f78aec(/*Atlas.FrontEnd.FrontEndScene_TypeInfo*/ uRam0000000003d21a18);
                                                      /*Atlas.FrontEnd.FrontEndScene$$.ctor*/ func_0x0159588c(uVar7,0);
                                                      *(undefined8 *)(lVar12 + 0x118) = uVar7;
                                                      Atlas_FrontEnd_FrontEndContext__InitStates
                                                                (lVar12,*plVar6,0);
                                                      if (*(long *)(lVar12 + 0x80) != 0) {
                                                        uVar7 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(lVar12 + 
                                                  0x80),0);
                                                  Atlas_Gameplay_KartLoadout__FromSaveGame
                                                            (&uStack_a8,uVar7,0);
                                                  *(undefined8 *)(lVar12 + 0x128) = uStack_a0;
                                                  *(undefined8 *)(lVar12 + 0x120) = uStack_a8;
                                                  *(undefined8 *)(lVar12 + 0x138) = uStack_90;
                                                  *(undefined8 *)(lVar12 + 0x130) = uStack_98;
                                                  *(undefined8 *)(lVar12 + 0x148) = uStack_80;
                                                  *(undefined8 *)(lVar12 + 0x140) = uStack_88;
                                                  *(undefined8 *)(lVar12 + 0x158) = uStack_70;
                                                  *(undefined8 *)(lVar12 + 0x150) = uStack_78;
                                                  lVar14 = func_0x00f78aec(/*Atlas.UI.Screens.TopBarScreen.TransitionData_TypeInfo*/ uRam0000000003d29350);
                                                  /*Atlas.UI.Screens.TopBarScreen.TransitionData$$.ctor*/ func_0x0156b600(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x10) =
                                                         *(undefined8 *)(lVar12 + 0x20);
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)(lVar12 + 0x60);
                                                    lVar18 = *(long *)(lVar12 + 0x18);
                                                    if (((*(byte *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x133) >>
                                                          2 & 1) != 0) &&
                                                       (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0))
                                                    {
                                                      func_0x00f78ad0();
                                                    }
                                                    if (lVar18 != 0) {
                                                      /*Atlas.UI.AtlasUIManager$$ClearLayerAndShowScreen*/ func_0x01470900(lVar18,*(undefined8 *)
                                                                              (*(long *)(
                                                  /*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x40),4,lVar14,0);
                                                  uVar11 = 4;
                                                  if (iVar4 == 0) {
                                                    uVar11 = 1;
                                                  }
                                                  if (*plVar6 != 0) {
                                                    uVar17 = *(undefined8 *)(lVar12 + 0x18);
                                                    uVar7 = *(undefined8 *)(lVar12 + 0x48);
                                                    uVar2 = *(undefined8 *)(lVar12 + 0x50);
                                                    uVar19 = *(undefined8 *)(lVar12 + 0x58);
                                                    uVar15 = *(undefined8 *)(lVar12 + 0x110);
                                                    lVar14 = *(long *)(lVar12 + 0x118);
                                                    uVar1 = *(undefined8 *)(lVar12 + 0x38);
                                                    uVar3 = *(undefined8 *)(lVar12 + 0x40);
                                                    uVar16 = *(undefined8 *)(lVar12 + 0x78);
                                                    uVar13 = *(undefined8 *)(lVar12 + 0x88);
                                                    uVar10 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(*plVar6,
                                                  uRam0000000003d55088);
                                                  if (lVar14 != 0) {
                                                    uVar7 = /*Atlas.FrontEnd.FrontEndScene$$Init*/ func_0x01593620(lVar14,uVar11,uVar3,
                                                                            uVar17,uVar7,uVar2,
                                                                            uVar19,uVar15,uVar1,
                                                                            uVar16,uVar13,uVar10,0);
                                                    *(undefined8 *)(param_1 + 0x18) = uVar7;
                                                    *(undefined4 *)(param_1 + 0x10) = 1;
                                                    return 1;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0154e4a4:
  func_0x00f78af4();
LAB_0154e4a8:
  auVar20 = func_0x00f78e5c();
  lVar12 = auVar20._0_8_;
  if ((bRam0000000003eb4f82 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb4f82 = 1;
  }
  *(undefined8 *)(lVar12 + 0x20) = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  uVar7 = /*Core.StateManagement.TransitionData$$.ctor*/ func_0x02b9595c(lVar12,0);
  *(long *)(lVar12 + 0x20) = auVar20._8_8_;
  return uVar7;
}



// ============================================================
// RVA: 0x154e51c | Atlas.FrontEnd.FrontEndContext.<OnInit>d__41.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_FrontEnd_FrontEndContext__OnInit_d__41__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x154e524 | Atlas.FrontEnd.FrontEndContext.<OnInit>d__41.System.Collections.IEnumerator.Reset
// ============================================================

undefined8 Atlas_FrontEnd_FrontEndContext__OnInit_d__41__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d62e38);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x154e564 | Atlas.FrontEnd.FrontEndContext.<OnInit>d__41.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_FrontEnd_FrontEndContext__OnInit_d__41__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



