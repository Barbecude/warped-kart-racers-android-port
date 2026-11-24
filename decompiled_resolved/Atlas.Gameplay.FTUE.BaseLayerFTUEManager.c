// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.FTUE.BaseLayerFTUEManager

// ============================================================
// RVA: 0x1475314 | Atlas.Gameplay.FTUE.BaseLayerFTUEManager.Init
// ============================================================

void Atlas_Gameplay_FTUE_BaseLayerFTUEManager__Init
               (long *param_1,long param_2,long param_3,long param_4,long param_5,long param_6)

{
  undefined4 uVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined4 uStack_a8;
  int iStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  if ((bRam0000000003eb4897 & 1) == 0) {
    func_0x00f78a20(0x3d2a068);
    func_0x00f78a20(0x3d1b438);
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d527a8);
    func_0x00f78a20(0x3d527b0);
    func_0x00f78a20(0x3d527b8);
    func_0x00f78a20(0x3d527c8);
    func_0x00f78a20(0x3d20000);
    func_0x00f78a20(0x3d20008);
    func_0x00f78a20(0x3d20010);
    func_0x00f78a20(0x3d55068);
    func_0x00f78a20(0x3d550b0);
    func_0x00f78a20(0x3d55168);
    func_0x00f78a20(0x3d551a8);
    func_0x00f78a20(0x3d324e8);
    func_0x00f78a20(0x3d32578);
    func_0x00f78a20(0x3d32580);
    func_0x00f78a20(0x3d324f0);
    func_0x00f78a20(0x3d32588);
    func_0x00f78a20(0x3d324f8);
    func_0x00f78a20(0x3d278d8);
    func_0x00f78a20(0x3d3cd80);
    func_0x00f78a20(0x3d3a670);
    func_0x00f78a20(0x3d3a798);
    func_0x00f78a20(0x3d3cd78);
    func_0x00f78a20(0x3d3cd90);
    func_0x00f78a20(0x3d3cd30);
    func_0x00f78a20(0x3d3a7a0);
    func_0x00f78a20(0x3d3a678);
    func_0x00f78a20(0x3d1e090);
    func_0x00f78a20(0x3d1e080);
    func_0x00f78a20(0x3d1e088);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d23a50);
    func_0x00f78a20(0x3d62268);
    func_0x00f78a20(0x3d26ac0);
    bRam0000000003eb4897 = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  lStack_70 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  iStack_a0 = 0;
  if ((param_3 != 0) && (*(long *)(param_3 + 0x58) != 0)) {
    lVar5 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(*(long *)(param_3 + 0x58),uRam0000000003d55068);
    param_1[4] = lVar5;
    if (*(long *)(param_3 + 0x58) != 0) {
      lVar5 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(*(long *)(param_3 + 0x58),uRam0000000003d550b0);
      param_1[8] = param_2;
      param_1[5] = param_5;
      param_1[6] = lVar5;
      param_1[2] = param_3;
      param_1[3] = param_4;
      if (param_6 != 0) {
        param_1[0xc] = *(long *)(param_6 + 0x58);
        param_1[0xd] = *(long *)(param_6 + 0x60);
        *(undefined4 *)((long)param_1 + 0x94) = 0xffffffff;
        uVar6 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
        /*System.Action$$.ctor*/ func_0x02924c80(uVar6,param_1,uRam0000000003d527a8,0);
        if (param_4 != 0) {
          /*Core.StateManagement.State$$add_OnPostExitCallback*/ func_0x02b94ca8(param_4,uVar6,0);
          if (*(long *)(param_3 + 0x58) != 0) {
            uVar6 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(*(long *)(param_3 + 0x58),uRam0000000003d55168);
            uVar9 = *(undefined8 *)(param_3 + 0x150);
            lVar5 = func_0x00f78aec(/*Atlas.Gameplay.FTUE.BaseLayerPauseManager_TypeInfo*/ uRam0000000003d20000);
            /*Atlas.Gameplay.FTUE.BaseLayerPauseManager$$.ctor*/ func_0x015364f4(lVar5,0);
            param_1[0xe] = lVar5;
            if (lVar5 != 0) {
              /*Atlas.Gameplay.FTUE.BaseLayerPauseManager$$Init*/ func_0x015361b4(lVar5,uVar6,uVar9,0,0);
              if (*(long *)(param_3 + 0x58) != 0) {
                uVar6 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(*(long *)(param_3 + 0x58),uRam0000000003d551a8);
                lVar5 = func_0x00f78aec(/*Atlas.Gameplay.FTUE.BaseLayerToolTipManager_TypeInfo*/ uRam0000000003d20010);
                /*Atlas.Gameplay.FTUE.BaseLayerToolTipManager$$.ctor*/ func_0x01537638(lVar5,0);
                param_1[0xf] = lVar5;
                if (lVar5 != 0) {
                  /*Atlas.Gameplay.FTUE.BaseLayerToolTipManager$$Init*/ func_0x01536fe0(lVar5,uVar6,0);
                  lVar5 = func_0x00f78aec(/*Atlas.Gameplay.FTUE.BaseLayerSequenceManager_TypeInfo*/ uRam0000000003d20008);
                  /*Atlas.Gameplay.FTUE.BaseLayerSequenceManager$$.ctor*/ func_0x01536fd8(lVar5,0);
                  param_1[0x10] = lVar5;
                  if (lVar5 != 0) {
                    *(undefined1 *)(lVar5 + 0x39) = 0;
                    if ((*(long *)(param_3 + 0x40) != 0) &&
                       (lVar5 = /*Atlas.Gameplay.Player.GameContextPlayerManager$$GetLocalHumanPlayer*/ func_0x0159aaf0(*(long *)(param_3 + 0x40),0), lVar5 != 0)) {
                      param_1[7] = *(long *)(lVar5 + 0x10);
                      lVar5 = func_0x00f78aec(/*System.Collections.Generic.List<BaseLayerFTUEDefinition.Section>_TypeInfo*/ uRam0000000003d1e080);
                      /*System.Collections.Generic.List<BaseLayerFTUEDefinition.Section>$$.ctor*/ func_0x024ba0fc(lVar5,3,uRam0000000003d3cd30);
                      param_1[10] = lVar5;
                      if (param_1[8] != 0) {
                        cVar2 = *(char *)(param_1[8] + 0x20);
                        *(char *)(param_1 + 0x13) = cVar2;
                        if (cVar2 != '\0') {
                          if (param_1[2] == 0) goto LAB_01475a68;
                          Atlas_Contexts_GameContextBase__StartTrackingChallenges(param_1[2],0);
                        }
                        lVar5 = param_1[3];
                        uVar6 = func_0x00f78aec(/*System.Action<GameInProgressScreen>_TypeInfo*/ uRam0000000003d1b438);
                        /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar6,param_1,*(undefined8 *)(*param_1 + 0x1b0),
                                        uRam0000000003d2a068);
                        if (lVar5 != 0) {
                          Atlas_Contexts_GameContextBaseInProgressState__add_OnInProgressScreenEntered
                                    (lVar5,uVar6,0);
                          lVar5 = param_1[3];
                          uVar6 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                          /*System.Action$$.ctor*/ func_0x02924c80(uVar6,param_1,*(undefined8 *)(*param_1 + 0x1c0),0);
                          if (lVar5 != 0) {
                            Atlas_Contexts_GameContextBaseInProgressState__add_OnInProgressScreenExited
                                      (lVar5,uVar6,0);
                            lVar5 = param_1[5];
                            uVar6 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                            /*System.Action$$.ctor*/ func_0x02924c80(uVar6,param_1,uRam0000000003d527c8,0);
                            if (lVar5 != 0) {
                              /*Core.StateManagement.State$$add_OnPreEnterCallback*/ func_0x02b94168(lVar5,uVar6,0);
                              lVar5 = param_1[0xc];
                              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                                func_0x00f78ad0();
                              }
                              iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar5,0,0);
                              if (iVar4 != 0) {
                                if ((param_1[0xc] == 0) ||
                                   (lVar5 = *(long *)(param_1[0xc] + 0x30), lVar5 == 0))
                                goto LAB_01475a68;
                                uVar1 = *(undefined4 *)(lVar5 + 0x18);
                                lVar5 = func_0x00f78aec(/*System.Collections.Generic.List<BaseLayerFTUEManager.BaseListenerVolumePair>_TypeInfo*/ uRam0000000003d1e090);
                                /*System.Collections.Generic.List<BaseLayerFTUEManager.BaseListenerVolumePair>$$.ctor*/ func_0x024c80c0(lVar5,uVar1,uRam0000000003d3cd90);
                                param_1[9] = lVar5;
                                if ((param_1[0xc] == 0) ||
                                   (lVar5 = *(long *)(param_1[0xc] + 0x30), lVar5 == 0))
                                goto LAB_01475a68;
                                /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_c0,lVar5,uRam0000000003d3a798);
                                uStack_78 = uStack_b8;
                                uStack_80 = uStack_c0;
                                lStack_70 = lStack_b0;
                                while (uVar7 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_80,uRam0000000003d32580),
                                      lVar5 = lStack_70, (uVar7 & 1) != 0) {
                                  uVar6 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
                                  /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(uVar6,param_1,uRam0000000003d527b0,0);
                                  if (lVar5 == 0) goto LAB_01475a6c;
                                  /*Atlas.Gameplay.HitVolumeBehaviour$$add_OnEnter*/ func_0x015b49e0(lVar5,uVar6,0);
                                  uVar6 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
                                  /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(uVar6,param_1,uRam0000000003d527b8,0);
                                  /*Atlas.Gameplay.HitVolumeBehaviour$$add_OnExit*/ func_0x015b4c60(lVar5,uVar6,0);
                                }
                                uStack_a8 = 0x1e5;
                                iStack_a0 = 1;
                                /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_80,uRam0000000003d32578);
                                iStack_a0 = 0;
                              }
                              if ((param_1[2] != 0) &&
                                 (lVar5 = *(long *)(param_1[2] + 0x40), lVar5 != 0)) {
                                lVar5 = *(long *)(lVar5 + 0x40);
                                if ((lVar5 != 0) && (iVar4 = *(int *)(lVar5 + 0x18), 0 < iVar4)) {
                                  lVar8 = func_0x00f78aec(/*System.Collections.Generic.List<BaseLayerFTUEManager.AIDelegateRespawnPair>_TypeInfo*/ uRam0000000003d1e088);
                                  /*System.Collections.Generic.List<BaseLayerFTUEManager.AIDelegateRespawnPair>$$.ctor*/ func_0x024c55f0(lVar8,iVar4,uRam0000000003d3cd78);
                                  param_1[0x16] = lVar8;
                                  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_98,lVar5,uRam0000000003d3a670);
                                  while (uVar7 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_98,uRam0000000003d324f0),
                                        (uVar7 & 1) != 0) {
                                    lVar5 = func_0x00f78aec(/*Atlas.Gameplay.FTUE.BaseLayerFTUEManager.<>c__DisplayClass30_0_TypeInfo*/ uRam0000000003d26ac0);
                                    /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager.<>c__DisplayClass30_0$$.ctor*/ func_0x0154716c(lVar5,0);
                                    uVar6 = uStack_88;
                                    if (lVar5 == 0) {
                                      func_0x00f78af4();
                                      goto code_r0x01475a80;
                                    }
                                    *(undefined8 *)(lVar5 + 0x10) = uStack_88;
                                    *(long **)(lVar5 + 0x18) = param_1;
                                    uVar9 = func_0x00f78aec(/*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ uRam0000000003d23a50);
                                    Atlas_Gameplay_Kart_OnKartRespawnDelegate___ctor
                                              (uVar9,lVar5,uRam0000000003d62268,0);
                                    if (param_1[0x16] == 0) {
                                      func_0x00f78af4();
                                      goto code_r0x01475a80;
                                    }
                                    /*System.Collections.Generic.List<BaseLayerFTUEManager.AIDelegateRespawnPair>$$Add*/ func_0x024c61ec(param_1[0x16],uVar6,uVar9,uRam0000000003d3cd80);
                                  }
                                  iStack_a0 = iStack_a0 + 1;
                                  uStack_a8 = 0x288;
                                  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_98,uRam0000000003d324e8);
                                }
                                return;
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
LAB_01475a68:
  func_0x00f78af4();
LAB_01475a6c:
  func_0x00f78af4();
code_r0x01475a80:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1475a84);
  (*pcVar3)();
}



// ============================================================
// RVA: 0x1475b68 | Atlas.Gameplay.FTUE.BaseLayerFTUEManager.OnEnterInProgressScreen
// ============================================================

void Atlas_Gameplay_FTUE_BaseLayerFTUEManager__OnEnterInProgressScreen(long *param_1,long param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  int extraout_w1;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auVar10 [16];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  long *plStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  puVar8 = (undefined8 *)0x3d2a068;
  if ((bRam0000000003eb489b & 1) == 0) {
    func_0x00f78a20(0x3d2a068);
    func_0x00f78a20(0x3d1b438);
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d527c0);
    func_0x00f78a20(0x3d32560);
    func_0x00f78a20(0x3d32568);
    func_0x00f78a20(0x3d32570);
    func_0x00f78a20(0x3d3a780);
    bRam0000000003eb489b = 1;
  }
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  puVar7 = (undefined8 *)param_1[3];
  puVar2 = (undefined8 *)func_0x00f78aec(/*System.Action<GameInProgressScreen>_TypeInfo*/ uRam0000000003d1b438);
  /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(puVar2,param_1,*(undefined8 *)(*param_1 + 0x1b0),uRam0000000003d2a068);
  puVar9 = (undefined8 *)0x3d2a068;
  if (puVar7 == (undefined8 *)0x0) goto LAB_01475de4;
  Atlas_Contexts_GameContextBaseInProgressState__remove_OnInProgressScreenEntered(puVar7,puVar2,0);
  param_1[0xb] = param_2;
  if (param_1[0xe] == 0) goto LAB_01475de4;
  /*Atlas.Gameplay.FTUE.BaseLayerPauseManager$$OnInProgressScreenEntered*/ func_0x01536390(param_1[0xe],param_2,0);
  puVar9 = puVar8;
  if (param_1[0x10] == 0) goto LAB_01475de4;
  *(long *)(param_1[0x10] + 0x30) = param_2;
  if (param_1[8] == 0) goto LAB_01475de4;
  lVar3 = *(long *)(param_1[8] + 0x28);
  if (lVar3 == 0) goto LAB_01475de4;
  puVar9 = (undefined8 *)0x3d1fa78;
  puVar2 = (undefined8 *)0x3d527c0;
  /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$GetEnumerator*/ func_0x023df1f8(&uStack_58,lVar3,uRam0000000003d3a780);
  while (uVar4 = /*System.Collections.Generic.List.Enumerator<TopBarManager.TopBarButton>$$MoveNext*/ func_0x01f694e8(&uStack_58,uRam0000000003d32568), (uVar4 & 1) != 0) {
    if (param_1[0xb] == 0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1475de4);
      (*pcVar1)();
    }
    Atlas_UI_Screens_GameInProgressScreen__SetEnabledHUDElement
              (param_1[0xb],uStack_48 & 0xffffffff,0,0);
  }
  /*System.Collections.Generic.List.Enumerator<TopBarManager.TopBarButton>$$Dispose*/ func_0x01f694e4(&uStack_58,uRam0000000003d32560);
  do {
    lVar3 = param_1[0xe];
    puVar7 = (undefined8 *)func_0x00f78aec(*puVar9);
    /*System.Action$$.ctor*/ func_0x02924c80(puVar7,param_1,*puVar2,0);
    param_2 = 0;
    if (lVar3 != 0) {
      /*Atlas.Gameplay.FTUE.BaseLayerPauseManager$$add_OnAfterStartPauseFinish*/ func_0x0153606c(lVar3,puVar7,0);
      lVar3 = param_1[0xe];
      puVar7 = (undefined8 *)func_0x00f78aec(*puVar9);
      /*System.Action$$.ctor*/ func_0x02924c80(puVar7,param_1,*puVar2,0);
      param_2 = 0;
      if (lVar3 != 0) {
        /*Atlas.Gameplay.FTUE.BaseLayerPauseManager$$add_OnAfterUnPauseFinish*/ func_0x01535f2c(lVar3,puVar7,0);
        lVar3 = param_1[0x10];
        puVar7 = (undefined8 *)func_0x00f78aec(*puVar9);
        /*System.Action$$.ctor*/ func_0x02924c80(puVar7,param_1,*puVar2,0);
        param_2 = 0;
        if (lVar3 != 0) {
          /*Atlas.Gameplay.FTUE.BaseLayerSequenceManager$$add_OnStartPlaySequence*/ func_0x015364fc(lVar3,puVar7,0);
          lVar3 = param_1[0x10];
          puVar7 = (undefined8 *)func_0x00f78aec(*puVar9);
          /*System.Action$$.ctor*/ func_0x02924c80(puVar7,param_1,*puVar2,0);
          param_2 = 0;
          if (lVar3 != 0) {
            /*Atlas.Gameplay.FTUE.BaseLayerSequenceManager$$add_OnResetSequenceStopped*/ func_0x0153663c(lVar3,puVar7,0);
            /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$SetInputsEnabled*/ func_0x01477f58(param_1);
            return;
          }
        }
      }
    }
LAB_01475de4:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x01475e20;
    plVar5 = (long *)___cxa_begin_catch();
    param_2 = *plVar5;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<TopBarManager.TopBarButton>$$Dispose*/ func_0x01f694e4(&uStack_58,*puVar7);
  } while (param_2 == 0);
  func_0x00f78ac0(param_2,0);
code_r0x01475e20:
  auVar10 = __Unwind_Resume();
  lVar6 = auVar10._8_8_;
  lVar3 = auVar10._0_8_;
  puStack_68 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions;
  lStack_80 = param_2;
  plStack_78 = param_1;
  puStack_70 = &stack0xfffffffffffffff0;
  if (*(long *)(lVar3 + 0x70) != 0) {
    /*Atlas.Gameplay.FTUE.BaseLayerPauseManager$$FTUEPause*/ func_0x01536418(*(undefined4 *)(lVar6 + 8),*(long *)(lVar3 + 0x70),0);
    if (*(long *)(lVar3 + 0x78) != 0) {
      /*Atlas.Gameplay.FTUE.BaseLayerToolTipManager$$SetCurrentToolTipSequence*/ func_0x015373d4(*(long *)(lVar3 + 0x78),*(undefined8 *)(lVar6 + 0x10),0);
      if (*(long *)(lVar3 + 0x80) != 0) {
        /*Atlas.Gameplay.FTUE.BaseLayerSequenceManager$$SetCurrentFTUESequence*/ func_0x01536c60(*(long *)(lVar3 + 0x80),*(undefined8 *)(lVar6 + 0x18),0);
        if (*(char *)(lVar6 + 0x20) != '\0') {
          /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$ActivateChallengeTrackingLogic*/ func_0x01478a84(lVar3);
        }
        lVar6 = *(long *)(lVar6 + 0x28);
        puStack_90 = puVar2;
        puStack_88 = puVar7;
        if ((bRam0000000003eb48a7 & 1) == 0) {
          func_0x00f78a20(0x3d32560);
          func_0x00f78a20(0x3d32568);
          func_0x00f78a20(0x3d32570);
          func_0x00f78a20(0x3d3a780);
          bRam0000000003eb48a7 = 1;
        }
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_98 = 0;
        if (lVar6 != 0) {
          /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$GetEnumerator*/ func_0x023df1f8(&uStack_a8,lVar6,uRam0000000003d3a780);
          while (uVar4 = /*System.Collections.Generic.List.Enumerator<TopBarManager.TopBarButton>$$MoveNext*/ func_0x01f694e8(&uStack_a8,uRam0000000003d32568), (uVar4 & 1) != 0) {
            if (*(long *)(lVar3 + 0x58) == 0) {
              func_0x00f78af4();
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1478bac);
              (*pcVar1)();
            }
            Atlas_UI_Screens_GameInProgressScreen__SetEnabledHUDElement
                      (*(long *)(lVar3 + 0x58),uStack_98 & 0xffffffff,1,0);
          }
          /*System.Collections.Generic.List.Enumerator<TopBarManager.TopBarButton>$$Dispose*/ func_0x01f694e4(&uStack_a8,uRam0000000003d32560);
        }
        return;
      }
    }
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x1475e24 | Atlas.Gameplay.FTUE.BaseLayerFTUEManager.CallReactions
// ============================================================

void Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions(long param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  if (*(long *)(param_1 + 0x70) != 0) {
    /*Atlas.Gameplay.FTUE.BaseLayerPauseManager$$FTUEPause*/ func_0x01536418(*(undefined4 *)(param_2 + 8),*(long *)(param_1 + 0x70),0);
    if (*(long *)(param_1 + 0x78) != 0) {
      /*Atlas.Gameplay.FTUE.BaseLayerToolTipManager$$SetCurrentToolTipSequence*/ func_0x015373d4(*(long *)(param_1 + 0x78),*(undefined8 *)(param_2 + 0x10),0);
      if (*(long *)(param_1 + 0x80) != 0) {
        /*Atlas.Gameplay.FTUE.BaseLayerSequenceManager$$SetCurrentFTUESequence*/ func_0x01536c60(*(long *)(param_1 + 0x80),*(undefined8 *)(param_2 + 0x18),0);
        if (*(char *)(param_2 + 0x20) != '\0') {
          /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$ActivateChallengeTrackingLogic*/ func_0x01478a84(param_1);
        }
        lVar3 = *(long *)(param_2 + 0x28);
        if ((bRam0000000003eb48a7 & 1) == 0) {
          func_0x00f78a20(0x3d32560);
          func_0x00f78a20(0x3d32568);
          func_0x00f78a20(0x3d32570);
          func_0x00f78a20(0x3d3a780);
          bRam0000000003eb48a7 = 1;
        }
        uStack_48 = 0;
        uStack_40 = 0;
        uStack_38 = 0;
        if (lVar3 != 0) {
          /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$GetEnumerator*/ func_0x023df1f8(&uStack_48,lVar3,uRam0000000003d3a780);
          while (uVar2 = /*System.Collections.Generic.List.Enumerator<TopBarManager.TopBarButton>$$MoveNext*/ func_0x01f694e8(&uStack_48,uRam0000000003d32568), (uVar2 & 1) != 0) {
            if (*(long *)(param_1 + 0x58) == 0) {
              func_0x00f78af4();
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1478bac);
              (*pcVar1)();
            }
            Atlas_UI_Screens_GameInProgressScreen__SetEnabledHUDElement
                      (*(long *)(param_1 + 0x58),uStack_38 & 0xffffffff,1,0);
          }
          /*System.Collections.Generic.List.Enumerator<TopBarManager.TopBarButton>$$Dispose*/ func_0x01f694e4(&uStack_48,uRam0000000003d32560);
        }
        return;
      }
    }
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x1475ea4 | Atlas.Gameplay.FTUE.BaseLayerFTUEManager..ctor
// ============================================================

void Atlas_Gameplay_FTUE_BaseLayerFTUEManager___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x1476598 | Atlas.Gameplay.FTUE.BaseLayerFTUEManager.StartSection
// ============================================================

void Atlas_Gameplay_FTUE_BaseLayerFTUEManager__StartSection
               (long param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  int extraout_w1;
  int extraout_w1_00;
  undefined8 *extraout_x8;
  long lVar9;
  long *unaff_x22;
  undefined8 uVar10;
  undefined8 *unaff_x23;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long lStack_260;
  long lStack_258;
  undefined1 **ppuStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  int iStack_1f8;
  undefined4 uStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
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
  undefined8 uStack_80;
  undefined8 auStack_70 [2];
  
  *(undefined4 *)(param_1 + 0x88) = param_3;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined1 *)(param_1 + 0x90) = param_4;
  auStack_70[0] = param_2;
  if ((bRam0000000003eb48a2 & 1) == 0) {
    func_0x00f78a20(0x3d33318);
    func_0x00f78a20(0x3d33320);
    func_0x00f78a20(0x3d33328);
    func_0x00f78a20(0x3d278d8);
    func_0x00f78a20(0x3d3cd70);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d24e08);
    func_0x00f78a20(0x3d62270);
    func_0x00f78a20(0x3d26ac8);
    bRam0000000003eb48a2 = 1;
  }
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  *(undefined8 *)(param_1 + 0xa8) = param_2;
  if ((*(long *)(param_1 + 0x40) != 0) &&
     (lVar4 = *(long *)(*(long *)(param_1 + 0x40) + 0x30), lVar4 != 0)) {
    /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090(&uStack_110,lVar4,uRam0000000003d3cd70);
    uStack_98 = uStack_e8;
    uStack_a0 = uStack_f0;
    uStack_88 = uStack_d8;
    uStack_90 = uStack_e0;
    uStack_80 = uStack_d0;
    uStack_b8 = uStack_108;
    uStack_c0 = uStack_110;
    uStack_a8 = uStack_f8;
    uStack_b0 = uStack_100;
code_r0x01478328:
    do {
      uVar5 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8(&uStack_c0,uRam0000000003d33320);
      if ((uVar5 & 1) == 0) {
code_r0x01478494:
        /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_c0,uRam0000000003d33318);
        return;
      }
      lVar4 = func_0x00f78aec(/*Atlas.Gameplay.FTUE.BaseLayerFTUEManager.<>c__DisplayClass50_0_TypeInfo*/ uRam0000000003d26ac8);
      /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager.<>c__DisplayClass50_0$$.ctor*/ func_0x0154719c(lVar4,0);
      if (lVar4 == 0) {
        func_0x00f78af4();
        goto code_r0x014784dc;
      }
      *(long *)(lVar4 + 0x50) = param_1;
      *(undefined8 *)(lVar4 + 0x40) = uStack_80;
      *(undefined8 *)(lVar4 + 0x28) = uStack_98;
      *(undefined8 *)(lVar4 + 0x20) = uStack_a0;
      *(undefined8 *)(lVar4 + 0x38) = uStack_88;
      *(undefined8 *)(lVar4 + 0x30) = uStack_90;
      *(undefined8 *)(lVar4 + 0x18) = uStack_a8;
      *(undefined8 *)(lVar4 + 0x10) = uStack_b0;
      uStack_110 = *(undefined8 *)(lVar4 + 0x18);
      uVar6 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,&uStack_110);
      uVar5 = /*Atlas.StringID$$Equals*/ func_0x015057f8(auStack_70,uVar6,0);
    } while ((uVar5 & 1) == 0);
    if (*(long *)(param_1 + 0x60) == 0) {
      func_0x00f78af4();
code_r0x014784dc:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x14784e0);
      (*pcVar3)();
    }
    puVar1 = (undefined8 *)(lVar4 + 0x10);
    puVar2 = (undefined8 *)(lVar4 + 0x48);
    uVar5 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(param_1 + 0x60),*puVar1,puVar2,0);
    if ((uVar5 & 1) == 0) goto code_r0x01478494;
    uVar6 = *(undefined8 *)(param_1 + 0xa0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar6,0,0);
    if ((uVar5 & 1) != 0) {
      if (*(long *)(param_1 + 0xa0) == 0) {
        func_0x00f78af4();
        goto code_r0x014784dc;
      }
      uStack_c8 = *(undefined8 *)(*(long *)(param_1 + 0xa0) + 0x18);
      uStack_110 = *puVar1;
      uVar6 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,&uStack_110);
      uVar5 = /*Atlas.StringID$$Equals*/ func_0x015057f8(&uStack_c8,uVar6,0);
      if ((uVar5 & 1) != 0) {
        uStack_148 = *(undefined8 *)(lVar4 + 0x18);
        uStack_150 = *puVar1;
        uStack_138 = *(undefined8 *)(lVar4 + 0x28);
        uStack_140 = *(undefined8 *)(lVar4 + 0x20);
        uStack_128 = *(undefined8 *)(lVar4 + 0x38);
        uStack_130 = *(undefined8 *)(lVar4 + 0x30);
        uStack_120 = *(undefined8 *)(lVar4 + 0x40);
        /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$CallReactions*/ func_0x01478e78(param_1,*(undefined8 *)(param_1 + 0x38),&uStack_150);
        goto code_r0x01478328;
      }
    }
    uVar10 = *puVar2;
    uVar6 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
    /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(uVar6,lVar4,uRam0000000003d62270,0);
    /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$AddBaseListener*/ func_0x01478f10(param_1,uVar10,uVar6,*puVar2);
    goto code_r0x01478328;
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar7 = (long *)___cxa_begin_catch();
    lVar4 = *plVar7;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_c0,uRam0000000003d33318);
    if (lVar4 == 0) {
      return;
    }
    func_0x00f78ac0(lVar4,0);
  }
  lVar4 = __Unwind_Resume();
  puStack_158 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__EndSection;
  lVar9 = 0x3eb4000;
  puStack_160 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb48a3 & 1) == 0) {
    func_0x00f78a20(0x3d33318);
    func_0x00f78a20(0x3d33320);
    func_0x00f78a20(0x3d33328);
    func_0x00f78a20(0x3d3cd70);
    func_0x00f78a20(0x3d24e08);
    bRam0000000003eb48a3 = 1;
  }
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  if ((*(long *)(lVar4 + 0x40) != 0) &&
     (lVar8 = *(long *)(*(long *)(lVar4 + 0x40) + 0x30), lVar8 != 0)) {
    unaff_x22 = (long *)0x3d24e08;
    /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090(&uStack_240,lVar8,uRam0000000003d3cd70);
    uStack_1b8 = uStack_218;
    uStack_1c0 = uStack_220;
    uStack_1a8 = uStack_208;
    uStack_1b0 = uStack_210;
    uStack_1a0 = uStack_200;
    uStack_1d8 = uStack_238;
    uStack_1e0 = uStack_240;
    uStack_1c8 = uStack_228;
    uStack_1d0 = uStack_230;
code_r0x01478624:
    do {
      uVar5 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8(&uStack_1e0,uRam0000000003d33320);
      uVar6 = uStack_1d0;
      if ((uVar5 & 1) == 0) goto code_r0x01478690;
      uStack_240 = uStack_1c8;
      uVar10 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,&uStack_240);
      uVar5 = /*Atlas.StringID$$Equals*/ func_0x015057f8(lVar4 + 0xa8,uVar10,0);
      if ((uVar5 & 1) != 0) {
        if (*(long *)(lVar4 + 0x60) == 0) {
          func_0x00f78af4();
        }
        else {
          uVar5 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(lVar4 + 0x60),uVar6,&lStack_1e8,0);
          if ((uVar5 & 1) == 0) {
            iStack_1f8 = 0x86;
            goto code_r0x0147869c;
          }
          if (lStack_1e8 != 0) {
            /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$RemoveBaseListener*/ func_0x014765a4(lVar4,*(undefined8 *)(lStack_1e8 + 0x18));
            goto code_r0x01478624;
          }
          func_0x00f78af4();
        }
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1478708);
        (*pcVar3)();
      }
    } while( true );
  }
  func_0x00f78af4();
  if (extraout_w1_00 == 1) {
    plVar7 = (long *)___cxa_begin_catch();
    lVar9 = *plVar7;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_1e0,*unaff_x23);
    if (lVar9 == 0) goto code_r0x014786b8;
    func_0x00f78ac0(lVar9,0);
  }
  lVar8 = __Unwind_Resume();
  puStack_248 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetActiveSection;
  lStack_260 = lVar9;
  lStack_258 = lVar4;
  ppuStack_250 = &puStack_160;
  /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$GetSection*/ func_0x01478c3c(&uStack_2c0,lVar8,*(undefined8 *)(lVar8 + 0xa8));
  extraout_x8[5] = uStack_298;
  extraout_x8[4] = uStack_2a0;
  extraout_x8[7] = uStack_288;
  extraout_x8[6] = uStack_290;
  extraout_x8[9] = uStack_278;
  extraout_x8[8] = uStack_280;
  extraout_x8[0xb] = uStack_268;
  extraout_x8[10] = uStack_270;
  extraout_x8[1] = uStack_2b8;
  *extraout_x8 = uStack_2c0;
  extraout_x8[3] = uStack_2a8;
  extraout_x8[2] = uStack_2b0;
  return;
code_r0x01478690:
  iStack_1f8 = 0x7b;
code_r0x0147869c:
  /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_1e0,uRam0000000003d33318);
  if (iStack_1f8 == 0x86) {
    return;
  }
code_r0x014786b8:
  lVar9 = *unaff_x22;
  if (((*(ushort *)(lVar9 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar9 + 0xe0) == 0)) {
    func_0x00f78ad0();
    lVar9 = *unaff_x22;
  }
  *(undefined8 *)(lVar4 + 0xa8) = **(undefined8 **)(lVar9 + 0xb8);
  return;
}



// ============================================================
// RVA: 0x14765a4 | Atlas.Gameplay.FTUE.BaseLayerFTUEManager.RemoveBaseListener
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14768fc | Atlas.Gameplay.FTUE.BaseLayerFTUEManager.DeInit
// ============================================================

/* WARNING: Possible PIC construction at 0x01476a1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015858fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0153734c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015371e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01476dcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01476f34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01476f9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147710c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01476fa0) */
/* WARNING: Removing unreachable block (ram,0x01476f38) */
/* WARNING: Removing unreachable block (ram,0x01476fd4) */
/* WARNING: Removing unreachable block (ram,0x01476f3c) */
/* WARNING: Removing unreachable block (ram,0x01476fe8) */
/* WARNING: Removing unreachable block (ram,0x01476ff4) */
/* WARNING: Removing unreachable block (ram,0x01476ffc) */
/* WARNING: Removing unreachable block (ram,0x01477030) */
/* WARNING: Removing unreachable block (ram,0x01477080) */
/* WARNING: Removing unreachable block (ram,0x01476f44) */
/* WARNING: Removing unreachable block (ram,0x01476f50) */
/* WARNING: Removing unreachable block (ram,0x01477058) */
/* WARNING: Removing unreachable block (ram,0x01477070) */
/* WARNING: Removing unreachable block (ram,0x01477068) */
/* WARNING: Removing unreachable block (ram,0x01476f90) */
/* WARNING: Removing unreachable block (ram,0x01476dd0) */
/* WARNING: Removing unreachable block (ram,0x01476e2c) */
/* WARNING: Removing unreachable block (ram,0x01476dd4) */
/* WARNING: Removing unreachable block (ram,0x01476e3c) */
/* WARNING: Removing unreachable block (ram,0x01476e10) */
/* WARNING: Removing unreachable block (ram,0x015b4a80) */
/* WARNING: Removing unreachable block (ram,0x015b4aa4) */
/* WARNING: Removing unreachable block (ram,0x015b4ab8) */
/* WARNING: Removing unreachable block (ram,0x015b4ac4) */
/* WARNING: Removing unreachable block (ram,0x015b4adc) */
/* WARNING: Removing unreachable block (ram,0x015b4b18) */
/* WARNING: Removing unreachable block (ram,0x015b4b44) */
/* WARNING: Removing unreachable block (ram,0x015b4b58) */
/* WARNING: Removing unreachable block (ram,0x015b4b64) */
/* WARNING: Removing unreachable block (ram,0x015b4b7c) */
/* WARNING: Removing unreachable block (ram,0x015b4bb8) */
/* WARNING: Removing unreachable block (ram,0x015b4be4) */
/* WARNING: Removing unreachable block (ram,0x015b4bf8) */
/* WARNING: Removing unreachable block (ram,0x015b4c04) */
/* WARNING: Removing unreachable block (ram,0x015b4c1c) */
/* WARNING: Removing unreachable block (ram,0x015b4c58) */
/* WARNING: Removing unreachable block (ram,0x015b4c84) */
/* WARNING: Removing unreachable block (ram,0x015b4c98) */
/* WARNING: Removing unreachable block (ram,0x015b4ca4) */
/* WARNING: Removing unreachable block (ram,0x015b4cbc) */
/* WARNING: Removing unreachable block (ram,0x015b4cf8) */
/* WARNING: Removing unreachable block (ram,0x015b4d24) */
/* WARNING: Removing unreachable block (ram,0x015b4d38) */
/* WARNING: Removing unreachable block (ram,0x015b4d44) */
/* WARNING: Removing unreachable block (ram,0x015b4d5c) */
/* WARNING: Removing unreachable block (ram,0x015b4d98) */
/* WARNING: Removing unreachable block (ram,0x015b4db4) */
/* WARNING: Removing unreachable block (ram,0x015b4dac) */
/* WARNING: Removing unreachable block (ram,0x01554b70) */
/* WARNING: Removing unreachable block (ram,0x01554bb8) */
/* WARNING: Removing unreachable block (ram,0x01554ba8) */
/* WARNING: Removing unreachable block (ram,0x01554bb0) */
/* WARNING: Removing unreachable block (ram,0x01554bc0) */
/* WARNING: Removing unreachable block (ram,0x01554bc4) */
/* WARNING: Removing unreachable block (ram,0x01554bdc) */
/* WARNING: Removing unreachable block (ram,0x01554be4) */
/* WARNING: Removing unreachable block (ram,0x01554c14) */
/* WARNING: Removing unreachable block (ram,0x01554c98) */
/* WARNING: Removing unreachable block (ram,0x01554ca4) */
/* WARNING: Removing unreachable block (ram,0x01554cac) */
/* WARNING: Removing unreachable block (ram,0x01554d28) */
/* WARNING: Removing unreachable block (ram,0x01554d8c) */
/* WARNING: Removing unreachable block (ram,0x01554d30) */
/* WARNING: Removing unreachable block (ram,0x01554d48) */
/* WARNING: Removing unreachable block (ram,0x01554d50) */
/* WARNING: Removing unreachable block (ram,0x01554e34) */
/* WARNING: Removing unreachable block (ram,0x01554d5c) */
/* WARNING: Removing unreachable block (ram,0x01554d68) */
/* WARNING: Removing unreachable block (ram,0x01554e44) */
/* WARNING: Removing unreachable block (ram,0x01554cc4) */
/* WARNING: Removing unreachable block (ram,0x01554d78) */
/* WARNING: Removing unreachable block (ram,0x01554cc8) */
/* WARNING: Removing unreachable block (ram,0x01554cdc) */
/* WARNING: Removing unreachable block (ram,0x01554ce4) */
/* WARNING: Removing unreachable block (ram,0x01554e0c) */
/* WARNING: Removing unreachable block (ram,0x01554cf0) */
/* WARNING: Removing unreachable block (ram,0x01554cfc) */
/* WARNING: Removing unreachable block (ram,0x01554e1c) */
/* WARNING: Removing unreachable block (ram,0x01554e20) */
/* WARNING: Removing unreachable block (ram,0x01554e48) */
/* WARNING: Removing unreachable block (ram,0x01554c18) */
/* WARNING: Removing unreachable block (ram,0x01554c1c) */
/* WARNING: Removing unreachable block (ram,0x01554c28) */
/* WARNING: Removing unreachable block (ram,0x01554c34) */
/* WARNING: Removing unreachable block (ram,0x01554c3c) */
/* WARNING: Removing unreachable block (ram,0x01554da8) */
/* WARNING: Removing unreachable block (ram,0x01554e58) */
/* WARNING: Removing unreachable block (ram,0x01554db0) */
/* WARNING: Removing unreachable block (ram,0x01554dc8) */
/* WARNING: Removing unreachable block (ram,0x01554dd0) */
/* WARNING: Removing unreachable block (ram,0x01554ea0) */
/* WARNING: Removing unreachable block (ram,0x01554ddc) */
/* WARNING: Removing unreachable block (ram,0x01554de8) */
/* WARNING: Removing unreachable block (ram,0x01554eb0) */
/* WARNING: Removing unreachable block (ram,0x01554c54) */
/* WARNING: Removing unreachable block (ram,0x01554df8) */
/* WARNING: Removing unreachable block (ram,0x01554c58) */
/* WARNING: Removing unreachable block (ram,0x01554c6c) */
/* WARNING: Removing unreachable block (ram,0x01554c74) */
/* WARNING: Removing unreachable block (ram,0x01554e78) */
/* WARNING: Removing unreachable block (ram,0x01554c80) */
/* WARNING: Removing unreachable block (ram,0x01554c8c) */
/* WARNING: Removing unreachable block (ram,0x01554e88) */
/* WARNING: Removing unreachable block (ram,0x01554e8c) */
/* WARNING: Removing unreachable block (ram,0x01554eb4) */
/* WARNING: Removing unreachable block (ram,0x01554bf8) */
/* WARNING: Removing unreachable block (ram,0x01554d08) */
/* WARNING: Removing unreachable block (ram,0x01554bfc) */
/* WARNING: Removing unreachable block (ram,0x01554d18) */
/* WARNING: Removing unreachable block (ram,0x01554d24) */
/* WARNING: Removing unreachable block (ram,0x01554ec8) */
/* WARNING: Removing unreachable block (ram,0x015b4d6c) */
/* WARNING: Removing unreachable block (ram,0x015b4d88) */
/* WARNING: Removing unreachable block (ram,0x015b4ccc) */
/* WARNING: Removing unreachable block (ram,0x015b4ce8) */
/* WARNING: Removing unreachable block (ram,0x015b4c2c) */
/* WARNING: Removing unreachable block (ram,0x015b4c48) */
/* WARNING: Removing unreachable block (ram,0x015b4b8c) */
/* WARNING: Removing unreachable block (ram,0x015b4ba8) */
/* WARNING: Removing unreachable block (ram,0x015b4aec) */
/* WARNING: Removing unreachable block (ram,0x015b4b08) */
/* WARNING: Removing unreachable block (ram,0x015371e8) */
/* WARNING: Removing unreachable block (ram,0x015371f0) */
/* WARNING: Removing unreachable block (ram,0x01537350) */
/* WARNING: Removing unreachable block (ram,0x01537358) */
/* WARNING: Removing unreachable block (ram,0x01537364) */
/* WARNING: Removing unreachable block (ram,0x0153736c) */
/* WARNING: Removing unreachable block (ram,0x01537394) */
/* WARNING: Removing unreachable block (ram,0x015373a0) */
/* WARNING: Removing unreachable block (ram,0x025dfbac) */
/* WARNING: Removing unreachable block (ram,0x025dfbd4) */
/* WARNING: Removing unreachable block (ram,0x025dfc00) */
/* WARNING: Removing unreachable block (ram,0x025dfc04) */
/* WARNING: Removing unreachable block (ram,0x025dfc30) */
/* WARNING: Removing unreachable block (ram,0x025dfc54) */
/* WARNING: Removing unreachable block (ram,0x025dfc70) */
/* WARNING: Removing unreachable block (ram,0x025dfc80) */
/* WARNING: Removing unreachable block (ram,0x025dfcfc) */
/* WARNING: Removing unreachable block (ram,0x025dfd14) */
/* WARNING: Removing unreachable block (ram,0x025dfd88) */
/* WARNING: Removing unreachable block (ram,0x025dfdb8) */
/* WARNING: Removing unreachable block (ram,0x025dfdd8) */
/* WARNING: Removing unreachable block (ram,0x025dfde0) */
/* WARNING: Removing unreachable block (ram,0x025dfdec) */
/* WARNING: Removing unreachable block (ram,0x025dfdf8) */
/* WARNING: Removing unreachable block (ram,0x025dfe04) */
/* WARNING: Removing unreachable block (ram,0x025dfe0c) */
/* WARNING: Removing unreachable block (ram,0x025dfe1c) */
/* WARNING: Removing unreachable block (ram,0x025dfe24) */
/* WARNING: Removing unreachable block (ram,0x025dfe30) */
/* WARNING: Removing unreachable block (ram,0x025dfe34) */
/* WARNING: Removing unreachable block (ram,0x025dfe44) */
/* WARNING: Removing unreachable block (ram,0x025dfe48) */
/* WARNING: Removing unreachable block (ram,0x025dfe4c) */
/* WARNING: Removing unreachable block (ram,0x025dfd34) */
/* WARNING: Removing unreachable block (ram,0x025dfd58) */
/* WARNING: Removing unreachable block (ram,0x025dfd74) */
/* WARNING: Removing unreachable block (ram,0x025dfc88) */
/* WARNING: Removing unreachable block (ram,0x025dfcb4) */
/* WARNING: Removing unreachable block (ram,0x025dfce0) */
/* WARNING: Removing unreachable block (ram,0x025dfcd0) */
/* WARNING: Removing unreachable block (ram,0x01585900) */
/* WARNING: Removing unreachable block (ram,0x01585908) */
/* WARNING: Removing unreachable block (ram,0x01476a20) */
/* WARNING: Removing unreachable block (ram,0x01476a5c) */
/* WARNING: Removing unreachable block (ram,0x01476a64) */
/* WARNING: Removing unreachable block (ram,0x01476a6c) */
/* WARNING: Removing unreachable block (ram,0x01476a8c) */
/* WARNING: Removing unreachable block (ram,0x01476a98) */
/* WARNING: Removing unreachable block (ram,0x01476a9c) */
/* WARNING: Removing unreachable block (ram,0x01476aa0) */
/* WARNING: Removing unreachable block (ram,0x01476a2c) */
/* WARNING: Removing unreachable block (ram,0x01476a34) */
/* WARNING: Removing unreachable block (ram,0x01476a3c) */
/* WARNING: Removing unreachable block (ram,0x01476ab8) */
/* WARNING: Removing unreachable block (ram,0x01476a44) */
/* WARNING: Removing unreachable block (ram,0x01476a48) */
/* WARNING: Removing unreachable block (ram,0x01476a4c) */
/* WARNING: Removing unreachable block (ram,0x01476a50) */
/* WARNING: Removing unreachable block (ram,0x01476aa8) */
/* WARNING: Removing unreachable block (ram,0x01477110) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * Atlas_Gameplay_FTUE_BaseLayerFTUEManager__DeInit
                 (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  long *****ppppplVar6;
  undefined1 ******ppppppuVar7;
  undefined1 ******ppppppuVar8;
  undefined1 *puVar9;
  undefined8 ******ppppppuVar10;
  undefined1 *puVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  long *plVar16;
  int iVar15;
  long lVar17;
  long *plVar18;
  float *pfVar19;
  undefined8 uVar20;
  int extraout_w1;
  int extraout_w1_00;
  ulong extraout_x1;
  byte bVar22;
  long ***ppplVar23;
  undefined8 *extraout_x8;
  long lVar24;
  ulong uVar25;
  long **pplVar26;
  undefined8 uVar27;
  long lVar28;
  ulong uVar29;
  undefined8 unaff_x21;
  undefined8 uVar30;
  long *plVar31;
  long *****unaff_x22;
  undefined8 *unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  long ******pppppplVar32;
  long *****ppppplVar33;
  undefined8 ******ppppppuVar34;
  undefined *puVar35;
  code *pcVar36;
  float fVar37;
  ulong unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [12];
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  long lStack_3d0;
  long lStack_3c8;
  long ******pppppplStack_3c0;
  undefined *puStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  int iStack_368;
  undefined4 uStack_360;
  long lStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 ******ppppppuStack_2d0;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 auStack_1e0 [2];
  undefined1 ******ppppppuStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  long lStack_168;
  ulong uStack_160;
  long *plStack_158;
  long *****ppppplStack_150;
  undefined *puStack_148;
  undefined8 ******ppppppuStack_130;
  code *pcStack_128;
  long *****ppppplStack_120;
  undefined *puStack_118;
  long ****pppplStack_110;
  code *pcStack_108;
  undefined1 ******ppppppuStack_100;
  code *pcStack_f8;
  long *****ppppplStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long ****pppplStack_c0;
  ulong uStack_b8;
  undefined8 *****pppppuStack_b0;
  code *pcStack_a8;
  long *****ppppplStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined1 *****pppppuStack_80;
  undefined8 uStack_78;
  long *****ppppplStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined1 ****ppppuStack_50;
  code *pcStack_48;
  long ****pppplVar21;
  
  uVar27 = 0x3eb4000;
  if ((bRam0000000003eb4898 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d527a8);
    bRam0000000003eb4898 = 1;
  }
  (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
  /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$UnRegisterAllHitVolumeListeners*/ func_0x01477c10(param_1);
  if (param_1[0xf] != 0) {
    /*Atlas.Gameplay.FTUE.BaseLayerToolTipManager$$DeInit*/ func_0x01536fec(param_1[0xf],0);
    unaff_x22 = (long *****)(param_1 + 0xe);
    if (*unaff_x22 != (long ****)0x0) {
      /*Atlas.Gameplay.FTUE.BaseLayerPauseManager$$DeInit*/ func_0x015361c0(*unaff_x22,0);
      if (param_1[0x10] != 0) {
        unaff_x23 = (undefined8 *)0x3d52000;
        /*Atlas.Gameplay.FTUE.BaseLayerSequenceManager$$DeInit*/ func_0x0153678c(param_1[0x10],0);
        lVar28 = param_1[3];
        unaff_x21 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
        param_4 = 0;
        /*System.Action$$.ctor*/ func_0x02924c80(unaff_x21,param_1,uRam0000000003d527a8);
        uVar27 = 0;
        if (lVar28 != 0) {
          plVar16 = (long *)/*Core.StateManagement.State$$remove_OnPostExitCallback*/ func_0x02b94d48(lVar28,unaff_x21,0);
          param_1[0xc] = 0;
          param_1[10] = 0;
          param_1[0x16] = 0;
          param_1[3] = 0;
          param_1[2] = 0;
          param_1[5] = 0;
          param_1[4] = 0;
          param_1[7] = 0;
          param_1[8] = 0;
          param_1[0xf] = 0;
          param_1[0x10] = 0;
          *unaff_x22 = (long ****)0x0;
          return plVar16;
        }
      }
    }
  }
  auVar38 = func_0x00f78af4();
  pppplVar21 = auVar38._8_8_;
  uVar29 = auVar38._0_8_;
  pcStack_48 = Atlas_Gameplay_FTUE_BaseLayerFTUEDriving__Update;
  pppppuStack_80 = &ppppuStack_50;
  uStack_78 = 0x1476a20;
  uVar30 = 0x3eb4000;
  ppppplStack_a0 = unaff_x22;
  uStack_98 = unaff_x21;
  uStack_90 = uVar27;
  uStack_88 = uVar29;
  ppppplStack_70 = unaff_x22;
  uStack_68 = unaff_x21;
  uStack_60 = uVar27;
  plStack_58 = param_1;
  ppppuStack_50 = (undefined1 ****)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb489a & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    bRam0000000003eb489a = 1;
  }
  if (pppplVar21 == (long ****)0x0) {
code_r0x01476c68:
    lVar28 = func_0x00f78af4();
    pcStack_a8 = Atlas_Gameplay_FTUE_BaseLayerFTUEDriving__OnEnterInProgressScreen;
    pppplStack_c0 = pppplVar21;
    uStack_b8 = uVar29;
    pppppuStack_b0 = &pppppuStack_80;
    Atlas_Gameplay_FTUE_BaseLayerFTUEManager__OnEnterInProgressScreen();
    *(undefined4 *)(lVar28 + 0xd8) = 1;
    lVar17 = Atlas_Gameplay_FTUE_BaseLayerFTUEDriving__get_BaseLayerFtueDrivingDefinition(lVar28);
    if (lVar17 != 0) {
      uStack_e8 = *(undefined8 *)(lVar17 + 0x48);
      ppppplStack_f0 = *(long ******)(lVar17 + 0x40);
      uStack_d8 = *(undefined8 *)(lVar17 + 0x58);
      uStack_e0 = *(undefined8 *)(lVar17 + 0x50);
      uStack_c8 = *(undefined8 *)(lVar17 + 0x68);
      uStack_d0 = *(undefined8 *)(lVar17 + 0x60);
      plVar16 = (long *)Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions
                                  (lVar28,&ppppplStack_f0);
      return plVar16;
    }
    lVar17 = func_0x00f78af4();
    pcStack_f8 = Atlas_Gameplay_FTUE_BaseLayerFTUEDriving__OnEnterOutroState;
    ppppplStack_120 = unaff_x22;
    puStack_118 = (undefined *)uVar30;
    pppplStack_110 = pppplVar21;
    pcStack_108 = (code *)lVar28;
    ppppppuStack_100 = (undefined1 ******)&pppppuStack_b0;
    if ((bRam0000000003eb488c & 1) == 0) {
      func_0x00f78a20(0x3d1fa78);
      func_0x00f78a20(0x3d52790);
      func_0x00f78a20(0x3d68a20);
      bRam0000000003eb488c = 1;
    }
    lVar28 = *(long *)(lVar17 + 0x28);
    uVar27 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(uVar27,lVar17,uRam0000000003d52790,0);
    if (lVar28 != 0) {
      /*Core.StateManagement.State$$remove_OnPreEnterCallback*/ func_0x02b94208(lVar28,uVar27,0);
      ppppplVar33 = ppppplStack_120;
      auVar5._8_8_ = pcStack_108;
      auVar5._0_8_ = pppplStack_110;
      auVar38._8_8_ = /*STR('Achievement_01')*/ uRam0000000003d68a20;
      auVar38._0_8_ = *(long *)(lVar17 + 0x20);
      if (*(long *)(lVar17 + 0x20) != 0) {
        ppppppuVar7 = (undefined1 ******)&ppppplStack_f0;
        puVar35 = puStack_118;
        ppppppuVar8 = ppppppuStack_100;
        pcVar36 = pcStack_f8;
        do {
          auVar39 = auVar38;
          uVar27 = auVar39._8_8_;
          lVar28 = auVar39._0_8_;
          *(undefined8 *)((long)ppppppuVar7 + -0x40) = unaff_d9;
          *(ulong *)((long)ppppppuVar7 + -0x38) = unaff_d8;
          *(long ******)((long)ppppppuVar7 + -0x30) = ppppplVar33;
          *(undefined **)((long)ppppppuVar7 + -0x28) = puVar35;
          *(undefined1 (*) [16])((long)ppppppuVar7 + -0x20) = auVar5;
          *(undefined1 *******)((long)ppppppuVar7 + -0x10) = ppppppuVar8;
          *(code **)((long)ppppppuVar7 + -8) = pcVar36;
          ppppppuVar8 = (undefined1 ******)((long)ppppppuVar7 + -0x10);
          unaff_d8 = 0x42c80000;
          puVar35 = (undefined *)0x3eb4000;
          if ((bRam0000000003eb4717 & 1) == 0) {
            func_0x00f78a20(0x3d2fe08);
            func_0x00f78a20(0x3d2fe18);
            bRam0000000003eb4717 = 1;
          }
          *(undefined4 *)((long)ppppppuVar7 + -0x44) = 0;
          if (*(long *)(lVar28 + 0x60) != 0) {
            plVar16 = (long *)/*System.Collections.Generic.Dictionary<string, float>$$TryGetValue*/ func_0x01ee246c(*(long *)(lVar28 + 0x60),uVar27,
                                              (undefined1 *)((long)ppppppuVar7 + -0x44),
                                              uRam0000000003d2fe08);
            bVar12 = true;
            bVar13 = false;
            if ((int)plVar16 != 0) {
              bVar12 = false;
              bVar13 = true;
              if (!NAN(*(float *)((long)ppppppuVar7 + -0x44))) {
                bVar12 = *(float *)((long)ppppppuVar7 + -0x44) < 100.0;
                bVar13 = false;
              }
            }
            if (bVar12 == bVar13) {
              return plVar16;
            }
            if (*(long *)(lVar28 + 0x60) != 0) {
              puVar35 = (undefined *)0x3d2fe18;
              /*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(0x42c80000,*(long *)(lVar28 + 0x60),uVar27,uRam0000000003d2fe18);
              if (*(long *)(lVar28 + 0x58) != 0) {
                plVar16 = (long *)/*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(0x42c80000,*(long *)(lVar28 + 0x58),uVar27,
                                                  uRam0000000003d2fe18);
                return plVar16;
              }
            }
          }
          pcVar36 = (code *)&Atlas_Stats_AchievementManager__UnlockAchievement;
          auVar38 = func_0x00f78af4();
          ppppppuVar7 = (undefined1 ******)((long)ppppppuVar7 + -0x50);
          auVar5 = auVar39;
        } while( true );
      }
    }
    auVar38 = func_0x00f78af4();
    ppppplStack_150 = (long *****)0x3d52790;
    pcStack_128 = Atlas_Gameplay_FTUE_BaseLayerFTUEDriving__OnEnterEngageJoyStickStartTrigger;
    pppppplVar32 = (long ******)&ppppppuStack_130;
    puStack_148 = (undefined *)uVar27;
    ppppppuStack_130 = &ppppppuStack_100;
    if ((bRam0000000003eb488d & 1) == 0) {
      func_0x00f78a20(0x3d52780);
      func_0x00f78a20(0x3d278d8);
      bRam0000000003eb488d = 1;
    }
    uVar27 = 0x1476dd0;
    ppppppuVar8 = (undefined1 ******)&ppppplStack_150;
    while( true ) {
      uVar30 = auVar38._8_8_;
      *(undefined8 *)((long)ppppppuVar8 + -0x30) = 0x3d52790;
      *(undefined8 *)((long)ppppppuVar8 + -0x28) = 0x3eb4000;
      *(undefined8 *)((long)ppppppuVar8 + -0x20) = uVar30;
      *(long *)((long)ppppppuVar8 + -0x18) = auVar38._0_8_;
      *(long *******)((long)ppppppuVar8 + -0x10) = pppppplVar32;
      *(undefined8 *)((long)ppppppuVar8 + -8) = uVar27;
      if ((bRam0000000003eb489f & 1) == 0) {
        func_0x00f78a20(0x3d21b08);
        bRam0000000003eb489f = 1;
      }
      *(undefined8 *)((long)ppppppuVar8 + -0x38) = 0;
      if (((*(ushort *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar16 = (long *)Atlas_Contexts_GameContextBase__TryGetLocalHumanPlayerFromCollider
                                  (uVar30,(undefined1 *)((long)ppppppuVar8 + -0x38),0);
      if ((int)plVar16 == 0) break;
      if (*(long *)((long)ppppppuVar8 + -0x38) != 0) {
        uVar14 = Atlas_Gameplay_Kart_KartComposite__get_IsRespawning
                           (*(long *)((long)ppppppuVar8 + -0x38),0);
        return (long *)(ulong)(uVar14 ^ 1);
      }
      auVar38 = func_0x00f78af4();
      *(undefined8 *)((long)ppppppuVar8 + -0x80) = unaff_x24;
      *(undefined8 **)((long)ppppppuVar8 + -0x78) = unaff_x23;
      *(undefined8 *)((long)ppppppuVar8 + -0x70) = 0x3d52790;
      *(undefined8 *)((long)ppppppuVar8 + -0x68) = 0x3eb4000;
      *(undefined8 *)((long)ppppppuVar8 + -0x60) = 0x3d21b08;
      *(undefined8 *)((long)ppppppuVar8 + -0x58) = uVar30;
      *(undefined1 **)((long)ppppppuVar8 + -0x50) = (undefined1 *)((long)ppppppuVar8 + -0x10);
      *(code **)((long)ppppppuVar8 + -0x48) =
           Atlas_Gameplay_FTUE_BaseLayerFTUEDriving__OnEnterEngageJoystickEndTrigger;
      pppppplVar32 = (long ******)((long)ppppppuVar8 + -0x50);
      if ((bRam0000000003eb488e & 1) == 0) {
        func_0x00f78a20(0x3d52780);
        func_0x00f78a20(0x3d52788);
        func_0x00f78a20(0x3d278d8);
        bRam0000000003eb488e = 1;
      }
      uVar27 = 0x1476f38;
      ppppppuVar8 = (undefined1 ******)((long)ppppppuVar8 + -0x80);
    }
    return plVar16;
  }
  plVar16 = *(long **)(uVar29 + 0x78);
  ppplVar23 = *pppplVar21;
  uVar25 = (ulong)*(ushort *)((long)ppplVar23 + 0x12a);
  if (uVar25 != 0) {
    pplVar26 = ppplVar23[0x16] + 1;
    do {
      if (pplVar26[-1] == /*Core.Application.IUpdateParams_TypeInfo*/ plRam0000000003d22618) {
        ppplVar23 = ppplVar23 + (long)(*(int *)pplVar26 + 1) * 2 + 0x27;
        goto code_r0x01476b54;
      }
      pplVar26 = pplVar26 + 2;
      uVar25 = uVar25 - 1;
    } while (uVar25 != 0);
  }
  ppplVar23 = (long ***)func_0x00fac1f0(pppplVar21,/*Core.Application.IUpdateParams_TypeInfo*/ plRam0000000003d22618,1);
code_r0x01476b54:
  (*(code *)*ppplVar23)(pppplVar21,ppplVar23[1]);
  uVar30 = 0;
  unaff_x22 = (long *****)0x3d22618;
  if (plVar16 == (long *)0x0) goto code_r0x01476c68;
  (**(code **)(*plVar16 + 0x188))(plVar16,*(undefined8 *)(*plVar16 + 400));
  lVar28 = *(long *)(uVar29 + 0x80);
  ppplVar23 = *pppplVar21;
  uVar25 = (ulong)*(ushort *)((long)ppplVar23 + 0x12a);
  if (uVar25 != 0) {
    pplVar26 = ppplVar23[0x16] + 1;
    do {
      if (pplVar26[-1] == /*Core.Application.IUpdateParams_TypeInfo*/ plRam0000000003d22618) {
        ppplVar23 = ppplVar23 + (long)(*(int *)pplVar26 + 1) * 2 + 0x27;
        goto code_r0x01476bc8;
      }
      pplVar26 = pplVar26 + 2;
      uVar25 = uVar25 - 1;
    } while (uVar25 != 0);
  }
  ppplVar23 = (long ***)func_0x00fac1f0(pppplVar21,/*Core.Application.IUpdateParams_TypeInfo*/ plRam0000000003d22618,1);
code_r0x01476bc8:
  (*(code *)*ppplVar23)(pppplVar21,ppplVar23[1]);
  uVar30 = 0;
  if (lVar28 == 0) goto code_r0x01476c68;
  /*Atlas.Gameplay.FTUE.BaseLayerSequenceManager$$Update*/ func_0x01536790(lVar28,0);
  lVar28 = *(long *)(uVar29 + 0x70);
  ppplVar23 = *pppplVar21;
  uVar25 = (ulong)*(ushort *)((long)ppplVar23 + 0x12a);
  if (uVar25 != 0) {
    pplVar26 = ppplVar23[0x16] + 1;
    do {
      if (pplVar26[-1] == /*Core.Application.IUpdateParams_TypeInfo*/ plRam0000000003d22618) {
        ppplVar23 = ppplVar23 + (long)(*(int *)pplVar26 + 1) * 2 + 0x27;
        goto code_r0x01476c38;
      }
      pplVar26 = pplVar26 + 2;
      uVar25 = uVar25 - 1;
    } while (uVar25 != 0);
  }
  ppplVar23 = (long ***)func_0x00fac1f0(pppplVar21,/*Core.Application.IUpdateParams_TypeInfo*/ plRam0000000003d22618,1);
code_r0x01476c38:
  (*(code *)*ppplVar23)(pppplVar21,ppplVar23[1]);
  uVar30 = 0;
  unaff_x22 = (long *****)0x3d22618;
  if (lVar28 == 0) goto code_r0x01476c68;
  /*Atlas.Gameplay.FTUE.BaseLayerPauseManager$$Update*/ func_0x015361c8(lVar28,0);
  uVar27 = uStack_98;
  ppppplVar33 = ppppplStack_a0;
  uVar30 = 0x3eb4000;
  if ((bRam0000000003eb48ab & 1) == 0) {
    func_0x00f78a20(0x3d24e08);
    func_0x00f78a20(0x3d712d0);
    bRam0000000003eb48ab = 1;
  }
  if ((*(long *)(uVar29 + 0x38) != 0) &&
     (lVar28 = *(long *)(*(long *)(uVar29 + 0x38) + 0x90), lVar28 != 0)) {
    iVar15 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(lVar28,0);
    plVar16 = (long *)(ulong)*(uint *)(uVar29 + 0x94);
    if ((int)*(uint *)(uVar29 + 0x94) < iVar15) {
      if ((*(long *)(uVar29 + 0x38) == 0) ||
         (lVar28 = *(long *)(*(long *)(uVar29 + 0x38) + 0x90), lVar28 == 0)) goto code_r0x01477f54;
      plVar16 = (long *)/*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(lVar28,0);
    }
    *(int *)(uVar29 + 0x94) = (int)plVar16;
    if ((int)plVar16 < 1) {
      return plVar16;
    }
    if ((*(long *)(uVar29 + 0x38) != 0) &&
       (lVar28 = *(long *)(*(long *)(uVar29 + 0x38) + 0x90), lVar28 != 0)) {
      plVar16 = (long *)/*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(lVar28,0);
      if (0 < (int)plVar16) {
        return plVar16;
      }
      if ((*(long *)(uVar29 + 0x38) != 0) &&
         (lVar28 = *(long *)(*(long *)(uVar29 + 0x38) + 0x90), lVar28 != 0)) {
        if (_UNK_033f82cc <= *(float *)(lVar28 + 0x70)) {
          return plVar16;
        }
        *(undefined4 *)(uVar29 + 0x94) = 0;
        /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$GetSection*/ func_0x01478c3c(&ppppplStack_f0,uVar29,*(undefined8 *)(uVar29 + 0xa8));
        ppppplVar6 = ppppplStack_a0;
        if (*(long *)(uVar29 + 0x40) != 0) {
          ppppplStack_f0 = *(long ******)(*(long *)(uVar29 + 0x40) + 0x38);
          uVar25 = /*Atlas.StringID$$get_IsValid*/ func_0x01505738(&ppppplStack_f0,0);
          if ((uVar25 & 1) == 0) {
            ppppplStack_f0 = ppppplVar6;
          }
          iVar15 = /*Atlas.StringID$$get_IsValid*/ func_0x01505738(&ppppplStack_f0,0);
          if (iVar15 == 0) {
            if (((*(ushort *)(/*Atlas.StringID_TypeInfo*/ lRam0000000003d24e08 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.StringID_TypeInfo*/ lRam0000000003d24e08 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            ppppplStack_f0 = (long *****)/*Atlas.StringID$$op_Implicit*/ func_0x01505760(/*STR('PlayerFailureSpawn')*/ uRam0000000003d712d0,0);
          }
          plVar16 = (long *)/*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$RespawnHumanPlayerAtLocator*/ func_0x014787a0(uVar29,ppppplStack_f0);
          return plVar16;
        }
      }
    }
  }
code_r0x01477f54:
  lVar28 = func_0x00f78af4();
  pcStack_f8 = (code *)&Atlas_Gameplay_FTUE_BaseLayerFTUEManager__SetInputsEnabled;
  ppppppuStack_100 = &pppppuStack_80;
  if (*(long *)(lVar28 + 0x70) != 0) {
    if (*(char *)(*(long *)(lVar28 + 0x70) + 0x20) == '\0') {
      if (*(long *)(lVar28 + 0x80) != 0) {
        if (*(char *)(*(long *)(lVar28 + 0x80) + 0x38) != '\0') goto code_r0x01477f80;
        lVar28 = *(long *)(lVar28 + 0x58);
        if (lVar28 == 0) goto code_r0x01477fa8;
        bVar22 = 1;
        goto code_r0x01477f8c;
      }
    }
    else {
code_r0x01477f80:
      lVar28 = *(long *)(lVar28 + 0x58);
      if (lVar28 != 0) {
        bVar22 = 0;
code_r0x01477f8c:
        iVar15 = 0;
        pcStack_f8 = (code *)&Atlas_Gameplay_FTUE_BaseLayerFTUEManager__SetInputsEnabled;
        lVar17 = *(long *)(lVar28 + 200);
        if (lVar17 == 0) {
          plVar18 = (long *)func_0x00f78af4();
          ppppppuStack_130 = (undefined8 ******)ppppplVar33;
          pcStack_128 = (code *)uVar27;
          ppppplStack_120 = (long *****)0x3eb4000;
          pcStack_108 = Atlas_UI_Screens_GameInProgressScreen__OnInputEnabledForLayer;
          plVar16 = plVar18;
          puStack_118 = (undefined *)uVar29;
          pppplStack_110 = (long ****)&ppppppuStack_100;
          if ((bRam0000000003eb522d & 1) == 0) {
            pppplStack_110 = (long ****)&ppppppuStack_100;
            func_0x00f78a20(0x3d23990);
            plVar16 = (long *)func_0x00f78a20(0x3d41080);
            bRam0000000003eb522d = 1;
          }
          if ((int)plVar18[9] != iVar15) {
            return plVar16;
          }
          lVar28 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(plVar18,uRam0000000003d41080);
          if (lVar28 != 0) {
            Atlas_UI_Screens_GameInProgressScreenBehaviour__SetInputEnabled(lVar28,param_4,0);
            uVar27 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(plVar18);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            plVar16 = (long *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar27,0);
            if ((int)plVar16 == 0) {
              return plVar16;
            }
            lVar28 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(plVar18);
            puStack_148 = pcStack_128;
            ppppplStack_150 = (long *****)ppppppuStack_130;
            if (lVar28 != 0) {
              lVar28 = *(long *)(lVar28 + 0xa8);
              if (lVar28 != 0) {
                pcStack_128 = (code *)0x1585900;
                ppppppuStack_130 = (undefined8 ******)&pppplStack_110;
                if (pcRam0000000003ebe9d8 == (code *)0x0) {
                  pcRam0000000003ebe9d8 =
                       (code *)func_0x00f789d4("UnityEngine.Behaviour::set_enabled(System.Boolean)")
                  ;
                }
                    /* WARNING: Could not recover jumptable at 0x0321a97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                plVar16 = (long *)(*pcRam0000000003ebe9d8)(lVar28,param_4);
                return plVar16;
              }
              plVar16 = (long *)func_0x00f78af4(0,param_4,0);
              pcStack_128 = Atlas_UI_Screens_FTUEScreenBehaviour___ctor;
              ppppppuStack_130 = (undefined8 ******)&pppplStack_110;
              if ((bRam0000000003ebf1b8 & 1) == 0) {
                func_0x00f78a20(0x3d23990,0);
                bRam0000000003ebf1b8 = 1;
              }
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              return plVar16;
            }
          }
          pfVar19 = (float *)func_0x00f78af4();
          fVar37 = *pfVar19;
          bVar12 = false;
          bVar13 = true;
          if (0.0 <= fVar37) {
            bVar12 = false;
            bVar13 = true;
            if (!NAN(fVar37)) {
              bVar12 = fVar37 == 1.0;
              bVar13 = 1.0 <= fVar37;
            }
          }
          if (!bVar13 || bVar12) {
            fVar37 = pfVar19[1];
            bVar12 = false;
            bVar13 = true;
            if (0.0 <= fVar37) {
              bVar12 = false;
              bVar13 = true;
              if (!NAN(fVar37)) {
                bVar12 = fVar37 == 1.0;
                bVar13 = 1.0 <= fVar37;
              }
            }
            if (!bVar13 || bVar12) {
              return (long *)(ulong)(0.0 <= pfVar19[2]);
            }
          }
          return (long *)0x0;
        }
        bVar22 = bVar22 ^ 1;
        ppppppuVar34 = &ppppppuStack_100;
        pcStack_f8 = (code *)&Atlas_Gameplay_FTUE_BaseLayerFTUEManager__SetInputsEnabled;
        lVar24 = *(long *)(lVar17 + 0x38);
        if (lVar24 == 0) {
          func_0x00f78af4();
code_r0x0164b040:
          uVar20 = func_0x00f78b24();
          auVar40 = func_0x00f78ac0(uVar20,0);
          lVar17 = auVar40._0_8_;
          pcStack_108 = (code *)&Core_Input_InputManager__SetScreenLayerInputExclusive;
          lVar28 = *(long *)(lVar17 + 0x38);
          if (lVar28 == 0) {
            pppplStack_110 = (long ****)&ppppppuStack_100;
            func_0x00f78af4();
          }
          else {
            pppplStack_110 = (long ****)&ppppppuStack_100;
            if (auVar40._8_4_ < *(uint *)(lVar28 + 0x18)) {
              *(byte *)(lVar28 + (long)(int)auVar40._8_4_ * 0x10 + 0x29) = bVar22;
              ppppppuVar10 = &ppppppuStack_100;
              pcVar36 = (code *)&Core_Input_InputManager__SetScreenLayerInputExclusive;
              pppplStack_110 = (long ****)&ppppppuStack_100;
              goto Core_Input_InputManager__ReselectTopmostActiveLayer;
            }
          }
          uVar27 = func_0x00f78b24();
          func_0x00f78ac0(uVar27,0);
          ppppppuVar10 = (undefined8 ******)&stack0xfffffffffffffec0;
          ppppppuStack_130 = (undefined8 ******)0x3eb4000;
          puStack_118 = &Core_Input_InputManager__SetMultiTouchEnabled;
          ppppppuVar34 = &ppppplStack_120;
          uVar30 = 0x3eb5000;
          uVar27 = 0x3d216c0;
          pcStack_128 = (code *)uVar29;
          ppppplStack_120 = &pppplStack_110;
          if ((bRam0000000003eb5795 & 1) == 0) {
            ppppplStack_120 = &pppplStack_110;
            func_0x00f78a20(0x3d216c0);
            func_0x00f78a20(0x3d22880);
            bRam0000000003eb5795 = 1;
          }
          if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar28 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
          if (lVar28 == 0) {
code_r0x0164b158:
            func_0x00f78af4();
          }
          else {
            plVar16 = *(long **)(lVar28 + 0x20);
            if (plVar16 == (long *)0x0) {
code_r0x0164b130:
              if (plVar16 != (long *)0x0) {
                *(uint *)((long)plVar16 + 0xbc) = (uint)((extraout_x1 & 1) == 0);
                return plVar16;
              }
              goto code_r0x0164b158;
            }
            if ((*(byte *)(/*UnityEngine.InputSystem.UI.InputSystemUIInputModule_TypeInfo*/ lRam0000000003d22880 + 300) <= *(byte *)(*plVar16 + 300)) &&
               (*(long *)(*(long *)(*plVar16 + 200) +
                          (ulong)*(byte *)(/*UnityEngine.InputSystem.UI.InputSystemUIInputModule_TypeInfo*/ lRam0000000003d22880 + 300) * 8 + -8) ==
                /*UnityEngine.InputSystem.UI.InputSystemUIInputModule_TypeInfo*/ lRam0000000003d22880)) goto code_r0x0164b130;
          }
          pcVar36 = (code *)&Core_Input_InputManager__SetActiveLayer;
          auVar40 = func_0x00f78e5c();
          lVar17 = auVar40._0_8_;
          *(int *)(lVar17 + 0x40) = auVar40._8_4_;
          uVar29 = extraout_x1;
        }
        else {
          if (*(uint *)(lVar24 + 0x18) <= *(uint *)(lVar28 + 0x48)) goto code_r0x0164b040;
          *(byte *)(lVar24 + (long)(int)*(uint *)(lVar28 + 0x48) * 0x10 + 0x28) = bVar22;
          ppppppuVar10 = &ppppplStack_f0;
          ppppppuVar34 = (undefined8 ******)&pppppuStack_80;
          pcVar36 = pcStack_f8;
          pcStack_f8 = (code *)&Atlas_Gameplay_FTUE_BaseLayerFTUEManager__SetInputsEnabled;
        }
Core_Input_InputManager__ReselectTopmostActiveLayer:
        *(long ******)((long)ppppppuVar10 + -0x30) = ppppplVar33;
        *(undefined8 *)((long)ppppppuVar10 + -0x28) = uVar27;
        *(undefined8 *)((long)ppppppuVar10 + -0x20) = uVar30;
        *(ulong *)((long)ppppppuVar10 + -0x18) = uVar29;
        *(undefined8 *******)((long)ppppppuVar10 + -0x10) = ppppppuVar34;
        *(code **)((long)ppppppuVar10 + -8) = pcVar36;
        if ((bRam0000000003eb5797 & 1) == 0) {
          func_0x00f78a20(0x3d216c0);
          func_0x00f78a20(0x3d22848);
          func_0x00f78a20(0x3d232c0);
          bRam0000000003eb5797 = 1;
        }
        uVar4 = *(undefined4 *)(lVar17 + 0x40);
        uVar27 = /*Core.Input.InputManager$$FindTopmostExclusiveLayer*/ func_0x0164a6a0(lVar17);
        if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar16 = (long *)/*System.Math$$Max*/ func_0x02b01f40(uVar4,uVar27,0);
        uVar14 = (uint)plVar16;
        if (uVar14 == 0xffffffff) {
          return plVar16;
        }
        lVar28 = *(long *)(lVar17 + 0x38);
        if (lVar28 != 0) {
          if (*(uint *)(lVar28 + 0x18) <= uVar14) goto code_r0x0164a30c;
          if (*(char *)(lVar28 + (long)(int)uVar14 * 0x10 + 0x28) != '\0') {
            return plVar16;
          }
          if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) != 0) {
            *(undefined1 *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x29) = 1;
            if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            lVar28 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
            lVar17 = *(long *)(lVar17 + 0x38);
            if (lVar17 != 0) {
              if (*(uint *)(lVar17 + 0x18) <= uVar14) goto code_r0x0164a30c;
              if (lVar28 != 0) {
                plVar16 = (long *)/*UnityEngine.EventSystems.EventSystem$$SetSelectedGameObject*/ func_0x032b7cb0(lVar28,*(undefined8 *)
                                                          (lVar17 + (long)(int)uVar14 * 0x10 + 0x20)
                                                  ,0);
                if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) != 0) {
                  *(undefined1 *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x29) = 0;
                  return plVar16;
                }
              }
            }
          }
        }
        func_0x00f78af4();
code_r0x0164a30c:
        uVar27 = func_0x00f78b24();
        plVar16 = (long *)func_0x00f78ac0(uVar27,0);
        return plVar16;
      }
    }
  }
code_r0x01477fa8:
  plVar16 = (long *)func_0x00f78af4();
  ppppppuStack_130 = (undefined8 ******)ppppplVar33;
  pcStack_128 = (code *)uVar27;
  ppppplStack_120 = (long *****)0x3eb4000;
  pcStack_108 = (code *)&Atlas_Gameplay_FTUE_BaseLayerFTUEManager__OnExitInProgressScreen;
  puStack_118 = (undefined *)uVar29;
  pppplStack_110 = (long ****)&ppppppuStack_100;
  if ((bRam0000000003eb489c & 1) == 0) {
    pppplStack_110 = (long ****)&ppppppuStack_100;
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d527c0);
    bRam0000000003eb489c = 1;
  }
  uVar29 = plVar16[3];
  lVar28 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
  /*System.Action$$.ctor*/ func_0x02924c80(lVar28,plVar16,*(undefined8 *)(*plVar16 + 0x1c0),0);
  if (uVar29 != 0) {
    plVar18 = (long *)Atlas_Contexts_GameContextBaseInProgressState__remove_OnInProgressScreenExited
                                (uVar29,lVar28,0);
    if (plVar16[0xb] == 0) {
      return plVar18;
    }
    if (plVar16[0xe] != 0) {
      /*Atlas.Gameplay.FTUE.BaseLayerPauseManager$$OnAfterExitGameContextScreen*/ func_0x01536404(plVar16[0xe],0);
      if (plVar16[0x10] != 0) {
        /*Atlas.Gameplay.FTUE.BaseLayerSequenceManager$$OnAfterExitGameContextScreen*/ func_0x01536b90(plVar16[0x10],0);
        lVar17 = plVar16[0xe];
        lVar28 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
        /*System.Action$$.ctor*/ func_0x02924c80(lVar28,plVar16,uRam0000000003d527c0,0);
        uVar29 = 0;
        unaff_x23 = (undefined8 *)0x3d527c0;
        if (lVar17 != 0) {
          /*Atlas.Gameplay.FTUE.BaseLayerPauseManager$$remove_OnAfterStartPauseFinish*/ func_0x0153610c(lVar17,lVar28,0);
          lVar17 = plVar16[0xe];
          lVar28 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
          /*System.Action$$.ctor*/ func_0x02924c80(lVar28,plVar16,uRam0000000003d527c0,0);
          uVar29 = 0;
          if (lVar17 != 0) {
            /*Atlas.Gameplay.FTUE.BaseLayerPauseManager$$remove_OnAfterUnPauseFinish*/ func_0x01535fcc(lVar17,lVar28,0);
            lVar17 = plVar16[0x10];
            lVar28 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
            /*System.Action$$.ctor*/ func_0x02924c80(lVar28,plVar16,uRam0000000003d527c0,0);
            uVar29 = 0;
            unaff_x23 = (undefined8 *)0x3d527c0;
            if (lVar17 != 0) {
              /*Atlas.Gameplay.FTUE.BaseLayerSequenceManager$$remove_OnStartPlaySequence*/ func_0x0153659c(lVar17,lVar28,0);
              lVar17 = plVar16[0x10];
              lVar28 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
              /*System.Action$$.ctor*/ func_0x02924c80(lVar28,plVar16,uRam0000000003d527c0,0);
              uVar29 = 0;
              if (lVar17 != 0) {
                plVar18 = (long *)/*Atlas.Gameplay.FTUE.BaseLayerSequenceManager$$remove_OnResetSequenceStopped*/ func_0x015366dc(lVar17,lVar28,0);
                plVar16[0xb] = 0;
                return plVar18;
              }
            }
          }
        }
      }
    }
  }
  lVar17 = func_0x00f78af4();
  uStack_170 = 0x3d1fa78;
  puStack_148 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__OnExitInProgressState;
  plVar18 = (long *)0x3d527a8;
  lStack_168 = lVar28;
  uStack_160 = uVar29;
  plStack_158 = plVar16;
  ppppplStack_150 = &pppplStack_110;
  if ((bRam0000000003eb489d & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d527a8);
    bRam0000000003eb489d = 1;
  }
  lVar28 = *(long *)(lVar17 + 0x18);
  uVar27 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
  /*System.Action$$.ctor*/ func_0x02924c80(uVar27,lVar17,uRam0000000003d527a8,0);
  if (lVar28 != 0) {
    /*Core.StateManagement.State$$remove_OnPostExitCallback*/ func_0x02b94d48(lVar28,uVar27,0);
    if (*(long *)(lVar17 + 0x70) != 0) {
      /*Atlas.Gameplay.FTUE.BaseLayerPauseManager$$OnExitInProgressState*/ func_0x015364e4(*(long *)(lVar17 + 0x70),0);
      if (*(ulong *)(lVar17 + 0x78) != 0) {
        auVar39._8_8_ = 0;
        auVar39._0_8_ = *(ulong *)(lVar17 + 0x78);
        puVar9 = &stack0xfffffffffffffec0;
        plVar16 = plStack_158;
        uVar29 = uStack_160;
        lVar28 = lStack_168;
        uVar27 = uStack_170;
        ppppplVar33 = ppppplStack_150;
        puVar35 = puStack_148;
        do {
          lVar17 = auVar39._0_8_;
          *(ulong *)(puVar9 + -0x20) = uVar29;
          *(long **)(puVar9 + -0x18) = plVar16;
          *(long ******)(puVar9 + -0x10) = ppppplVar33;
          *(undefined **)(puVar9 + -8) = puVar35;
          if ((bRam0000000003eb4ed9 & 1) == 0) {
            func_0x00f78a20(0x3d3e190,auVar39._8_8_);
            func_0x00f78a20(0x3d75d18);
            bRam0000000003eb4ed9 = 1;
          }
          *(undefined8 *)(lVar17 + 0x28) = 0;
          *(undefined8 *)(lVar17 + 0x30) = 0xbf800000;
          *(undefined8 *)(lVar17 + 0x18) = 0;
          *(undefined8 *)(lVar17 + 0x20) = 0;
          lVar24 = *(long *)(lVar17 + 0x10);
          if (lVar24 != 0) {
            ppppplVar33 = *(long ******)(puVar9 + -0x10);
            puVar35 = *(undefined **)(puVar9 + -8);
            uVar29 = *(ulong *)(puVar9 + -0x20);
            puVar11 = puVar9;
            plVar16 = *(long **)(puVar9 + -0x18);
            goto code_r0x025e0480;
          }
          plVar18 = (long *)func_0x00f78af4();
          if (*(float *)(plVar18 + 6) <= 0.0) {
            return plVar18;
          }
          puVar11 = puVar9 + -0x50;
          *(undefined8 *)(puVar9 + -0x50) = uVar27;
          *(long *)(puVar9 + -0x48) = lVar28;
          *(undefined8 *)(puVar9 + -0x40) = 0x3eb4000;
          *(long *)(puVar9 + -0x38) = lVar17;
          *(undefined1 **)(puVar9 + -0x30) = puVar9 + -0x10;
          *(undefined **)(puVar9 + -0x28) =
               &Atlas_Gameplay_FTUE_BaseLayerToolTipManager__OnInputFamilyChanged;
          ppppplVar33 = (long *****)(puVar9 + -0x30);
          plVar16 = plVar18;
          if ((bRam0000000003eb4ed8 & 1) == 0) {
            func_0x00f78a20(0x3d3cd60);
            func_0x00f78a20(0x3d3cd68);
            func_0x00f78a20(0x3d3e188);
            func_0x00f78a20(0x3d3e190);
            plVar16 = (long *)func_0x00f78a20(0x3d6df50);
            bRam0000000003eb4ed8 = 1;
          }
          uVar14 = *(int *)((long)plVar18 + 0x34) - 1;
          uVar29 = (ulong)uVar14;
          if ((int)uVar14 < 0) {
            return plVar16;
          }
          if (plVar18[3] != 0) {
            if (*(int *)(plVar18[3] + 0x18) <= (int)uVar14) {
              return plVar16;
            }
            lVar24 = plVar18[2];
            if (lVar24 != 0) {
              puVar35 = &UNK_01537350;
              plVar16 = plVar18;
              goto code_r0x025e0480;
            }
          }
          auVar38 = func_0x00f78af4();
          lVar17 = auVar38._8_8_;
          plVar16 = auVar38._0_8_;
          *(undefined8 *)(puVar9 + -0x80) = uVar27;
          *(long *)(puVar9 + -0x78) = lVar28;
          *(ulong *)(puVar9 + -0x70) = uVar29;
          *(long **)(puVar9 + -0x68) = plVar18;
          *(long ******)(puVar9 + -0x60) = ppppplVar33;
          *(undefined **)(puVar9 + -0x58) =
               &Atlas_Gameplay_FTUE_BaseLayerToolTipManager__SetCurrentToolTipSequence;
          plVar18 = plVar16;
          if ((bRam0000000003eb4ed5 & 1) == 0) {
            plVar18 = (long *)func_0x00f78a20(0x3d3cd60);
            bRam0000000003eb4ed5 = 1;
          }
          if ((lVar17 == 0) || (*(int *)(lVar17 + 0x18) == 0)) {
            return plVar18;
          }
          plVar16[3] = lVar17;
          *(undefined4 *)((long)plVar16 + 0x34) = 0;
          uVar27 = *(undefined8 *)(puVar9 + -0x80);
          lVar28 = *(long *)(puVar9 + -0x78);
          puVar11 = puVar9 + -0x90;
          *(undefined8 *)(puVar9 + -0x90) = unaff_d9;
          *(ulong *)(puVar9 + -0x88) = unaff_d8;
          *(undefined8 *)(puVar9 + -0x80) = uVar27;
          *(long *)(puVar9 + -0x78) = lVar28;
          *(undefined8 *)(puVar9 + -0x70) = *(undefined8 *)(puVar9 + -0x70);
          *(undefined8 *)(puVar9 + -0x68) = *(undefined8 *)(puVar9 + -0x68);
          *(undefined8 *)(puVar9 + -0x60) = *(undefined8 *)(puVar9 + -0x60);
          *(undefined8 *)(puVar9 + -0x58) = *(undefined8 *)(puVar9 + -0x58);
          ppppplVar33 = (long *****)(puVar9 + -0x60);
          plVar18 = plVar16;
          if ((bRam0000000003eb4ed6 & 1) == 0) {
            func_0x00f78a20(0x3d3cd60);
            func_0x00f78a20(0x3d3cd68);
            func_0x00f78a20(0x3d3e188);
            func_0x00f78a20(0x3d3e190);
            plVar18 = (long *)func_0x00f78a20(0x3d717f0);
            bRam0000000003eb4ed6 = 1;
          }
          uVar29 = plVar16[3];
          if (uVar29 != 0) {
            uVar14 = *(uint *)((long)plVar16 + 0x34);
            lVar28 = (long)(int)uVar14;
            if ((int)*(uint *)(uVar29 + 0x18) <= (int)uVar14) {
              return plVar18;
            }
            if (*(uint *)(uVar29 + 0x18) <= uVar14) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar24 = *(long *)(uVar29 + 0x10) + lVar28 * 0x18;
            lVar17 = *(long *)(lVar24 + 0x28);
            unaff_d8 = (ulong)*(uint *)(lVar24 + 0x30);
            plVar16[5] = *(long *)(lVar24 + 0x20);
            if (lVar17 != 0) {
              plVar16[4] = *(long *)(lVar17 + 0x28);
              uVar29 = /*Atlas.UI.ToolTipManager.ToolTipData$$Copy*/ func_0x0156b4ec(lVar17,0);
              uVar30 = /*Atlas.Gameplay.FTUE.BaseLayerToolTipManager$$GetCurrentToolTipLocalisationKey*/ func_0x0153744c(plVar16);
              if (uVar29 != 0) {
                *(undefined8 *)(uVar29 + 0x28) = uVar30;
                lVar24 = plVar16[2];
                if (lVar24 != 0) goto code_r0x015371d4;
              }
            }
          }
          puVar35 = &Atlas_Gameplay_FTUE_BaseLayerToolTipManager__HideCurrentModal;
          auVar39 = func_0x00f78af4();
          puVar9 = puVar9 + -0x90;
        } while( true );
      }
    }
  }
  auVar38 = func_0x00f78af4();
  uVar27 = auVar38._8_8_;
  lVar28 = auVar38._0_8_;
  puStack_178 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__StartSection;
  auStack_1e0[0] = uVar27;
  ppppppuStack_180 = (undefined1 ******)&ppppplStack_150;
  if ((bRam0000000003eb48a2 & 1) == 0) {
    func_0x00f78a20(0x3d33318);
    func_0x00f78a20(0x3d33320);
    func_0x00f78a20(0x3d33328);
    func_0x00f78a20(0x3d278d8);
    func_0x00f78a20(0x3d3cd70);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d24e08);
    func_0x00f78a20(0x3d62270);
    func_0x00f78a20(0x3d26ac8);
    bRam0000000003eb48a2 = 1;
  }
  uStack_1f0 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_238 = 0;
  *(undefined8 *)(lVar28 + 0xa8) = uVar27;
  if ((*(long *)(lVar28 + 0x40) != 0) &&
     (lVar17 = *(long *)(*(long *)(lVar28 + 0x40) + 0x30), lVar17 != 0)) {
    /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090(&uStack_280,lVar17,uRam0000000003d3cd70);
    uStack_208 = uStack_258;
    uStack_210 = uStack_260;
    uStack_1f8 = uStack_248;
    uStack_200 = uStack_250;
    uStack_1f0 = uStack_240;
    uStack_228 = uStack_278;
    uStack_230 = uStack_280;
    uStack_218 = uStack_268;
    uStack_220 = uStack_270;
code_r0x01478328:
    do {
      uVar29 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8(&uStack_230,uRam0000000003d33320);
      if ((uVar29 & 1) == 0) {
code_r0x01478494:
        plVar16 = (long *)/*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_230,uRam0000000003d33318);
        return plVar16;
      }
      lVar17 = func_0x00f78aec(/*Atlas.Gameplay.FTUE.BaseLayerFTUEManager.<>c__DisplayClass50_0_TypeInfo*/ uRam0000000003d26ac8);
      /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager.<>c__DisplayClass50_0$$.ctor*/ func_0x0154719c(lVar17,0);
      if (lVar17 == 0) {
        func_0x00f78af4();
        goto code_r0x014784dc;
      }
      *(long *)(lVar17 + 0x50) = lVar28;
      *(undefined8 *)(lVar17 + 0x40) = uStack_1f0;
      *(undefined8 *)(lVar17 + 0x28) = uStack_208;
      *(undefined8 *)(lVar17 + 0x20) = uStack_210;
      *(undefined8 *)(lVar17 + 0x38) = uStack_1f8;
      *(undefined8 *)(lVar17 + 0x30) = uStack_200;
      *(undefined8 *)(lVar17 + 0x18) = uStack_218;
      *(undefined8 *)(lVar17 + 0x10) = uStack_220;
      uStack_280 = *(undefined8 *)(lVar17 + 0x18);
      uVar27 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ lRam0000000003d24e08,&uStack_280);
      uVar29 = /*Atlas.StringID$$Equals*/ func_0x015057f8(auStack_1e0,uVar27,0);
    } while ((uVar29 & 1) == 0);
    if (*(long *)(lVar28 + 0x60) == 0) {
      func_0x00f78af4();
code_r0x014784dc:
                    /* WARNING: Does not return */
      pcVar36 = (code *)SoftwareBreakpoint(1,0x14784e0);
      (*pcVar36)();
    }
    puVar2 = (undefined8 *)(lVar17 + 0x10);
    puVar3 = (undefined8 *)(lVar17 + 0x48);
    uVar29 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(lVar28 + 0x60),*puVar2,puVar3,0);
    if ((uVar29 & 1) == 0) goto code_r0x01478494;
    uVar27 = *(undefined8 *)(lVar28 + 0xa0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar29 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar27,0,0);
    if ((uVar29 & 1) != 0) {
      if (*(long *)(lVar28 + 0xa0) == 0) {
        func_0x00f78af4();
        goto code_r0x014784dc;
      }
      uStack_238 = *(undefined8 *)(*(long *)(lVar28 + 0xa0) + 0x18);
      uStack_280 = *puVar2;
      uVar27 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ lRam0000000003d24e08,&uStack_280);
      uVar29 = /*Atlas.StringID$$Equals*/ func_0x015057f8(&uStack_238,uVar27,0);
      if ((uVar29 & 1) != 0) {
        uStack_2b8 = *(undefined8 *)(lVar17 + 0x18);
        uStack_2c0 = *puVar2;
        uStack_2a8 = *(undefined8 *)(lVar17 + 0x28);
        uStack_2b0 = *(undefined8 *)(lVar17 + 0x20);
        uStack_298 = *(undefined8 *)(lVar17 + 0x38);
        uStack_2a0 = *(undefined8 *)(lVar17 + 0x30);
        uStack_290 = *(undefined8 *)(lVar17 + 0x40);
        /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$CallReactions*/ func_0x01478e78(lVar28,*(undefined8 *)(lVar28 + 0x38),&uStack_2c0);
        goto code_r0x01478328;
      }
    }
    uVar30 = *puVar3;
    uVar27 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
    /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(uVar27,lVar17,uRam0000000003d62270,0);
    /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$AddBaseListener*/ func_0x01478f10(lVar28,uVar30,uVar27,*puVar3);
    goto code_r0x01478328;
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar16 = (long *)___cxa_begin_catch();
    lVar28 = *plVar16;
    ___cxa_end_catch();
    plVar16 = (long *)/*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_230,uRam0000000003d33318);
    if (lVar28 == 0) {
      return plVar16;
    }
    func_0x00f78ac0(lVar28,0);
  }
  lVar28 = __Unwind_Resume();
  puStack_2c8 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__EndSection;
  lVar17 = 0x3eb4000;
  ppppppuStack_2d0 = &ppppppuStack_180;
  if ((bRam0000000003eb48a3 & 1) == 0) {
    func_0x00f78a20(0x3d33318);
    func_0x00f78a20(0x3d33320);
    func_0x00f78a20(0x3d33328);
    func_0x00f78a20(0x3d3cd70);
    func_0x00f78a20(0x3d24e08);
    bRam0000000003eb48a3 = 1;
  }
  lStack_358 = 0;
  uStack_360 = 0;
  if ((*(long *)(lVar28 + 0x40) != 0) &&
     (lVar24 = *(long *)(*(long *)(lVar28 + 0x40) + 0x30), lVar24 != 0)) {
    plVar18 = (long *)0x3d24e08;
    /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090(&uStack_3b0,lVar24,uRam0000000003d3cd70);
    uStack_328 = uStack_388;
    uStack_330 = uStack_390;
    uStack_318 = uStack_378;
    uStack_320 = uStack_380;
    uStack_310 = uStack_370;
    uStack_348 = uStack_3a8;
    uStack_350 = uStack_3b0;
    uStack_338 = uStack_398;
    uStack_340 = uStack_3a0;
code_r0x01478624:
    do {
      uVar29 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8(&uStack_350,uRam0000000003d33320);
      uVar27 = uStack_340;
      if ((uVar29 & 1) == 0) goto code_r0x01478690;
      uStack_3b0 = uStack_338;
      uVar30 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ lRam0000000003d24e08,&uStack_3b0);
      uVar29 = /*Atlas.StringID$$Equals*/ func_0x015057f8(lVar28 + 0xa8,uVar30,0);
      if ((uVar29 & 1) != 0) {
        if (*(long *)(lVar28 + 0x60) == 0) {
          func_0x00f78af4();
        }
        else {
          uVar29 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(lVar28 + 0x60),uVar27,&lStack_358,0);
          if ((uVar29 & 1) == 0) {
            iStack_368 = 0x86;
            goto code_r0x0147869c;
          }
          if (lStack_358 != 0) {
            Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RemoveBaseListener
                      (lVar28,*(undefined8 *)(lStack_358 + 0x18));
            goto code_r0x01478624;
          }
          func_0x00f78af4();
        }
                    /* WARNING: Does not return */
        pcVar36 = (code *)SoftwareBreakpoint(1,0x1478708);
        (*pcVar36)();
      }
    } while( true );
  }
  func_0x00f78af4();
  if (extraout_w1_00 == 1) {
    plVar16 = (long *)___cxa_begin_catch();
    lVar17 = *plVar16;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_350,*unaff_x23);
    if (lVar17 == 0) {
code_r0x014786b8:
      plVar16 = (long *)*plVar18;
      if (((*(ushort *)((long)plVar16 + 0x132) >> 10 & 1) != 0) && ((int)plVar16[0x1c] == 0)) {
        func_0x00f78ad0();
        plVar16 = (long *)*plVar18;
      }
      *(undefined8 *)(lVar28 + 0xa8) = *(undefined8 *)plVar16[0x17];
      return plVar16;
    }
    func_0x00f78ac0(lVar17,0);
  }
  lVar24 = __Unwind_Resume();
  puStack_3b8 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetActiveSection;
  lStack_3d0 = lVar17;
  lStack_3c8 = lVar28;
  pppppplStack_3c0 = (long ******)&ppppppuStack_2d0;
  plVar16 = (long *)/*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$GetSection*/ func_0x01478c3c(&uStack_430,lVar24,*(undefined8 *)(lVar24 + 0xa8));
  extraout_x8[5] = uStack_408;
  extraout_x8[4] = uStack_410;
  extraout_x8[7] = uStack_3f8;
  extraout_x8[6] = uStack_400;
  extraout_x8[9] = uStack_3e8;
  extraout_x8[8] = uStack_3f0;
  extraout_x8[0xb] = uStack_3d8;
  extraout_x8[10] = uStack_3e0;
  extraout_x8[1] = uStack_428;
  *extraout_x8 = uStack_430;
  extraout_x8[3] = uStack_418;
  extraout_x8[2] = uStack_420;
  return plVar16;
code_r0x01478690:
  iStack_368 = 0x7b;
code_r0x0147869c:
  plVar16 = (long *)/*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_350,uRam0000000003d33318);
  if (iStack_368 == 0x86) {
    return plVar16;
  }
  goto code_r0x014786b8;
code_r0x015371d4:
  puVar35 = &UNK_015371e8;
code_r0x025e0480:
  lVar17 = lRam0000000003d3e190;
  *(undefined8 *)(puVar11 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar11 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar11 + -0x40) = unaff_x24;
  *(undefined8 **)(puVar11 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar11 + -0x30) = uVar27;
  *(long *)(puVar11 + -0x28) = lVar28;
  *(ulong *)(puVar11 + -0x20) = uVar29;
  *(long **)(puVar11 + -0x18) = plVar16;
  *(long ******)(puVar11 + -0x10) = ppppplVar33;
  *(undefined **)(puVar11 + -8) = puVar35;
  if ((bRam0000000003eb8330 & 1) == 0) {
    func_0x00f78a20(0x3d3b350);
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    func_0x00f78a20(0x3d6bd58);
    bRam0000000003eb8330 = 1;
  }
  if (lVar24 != 0) {
    plVar16 = (long *)(*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar17 + 0x18) + 0xc0) + 8))
                                (lVar24,/*STR('DismissAllQueuedAndShowing')*/ uRam0000000003d6bd58);
    if (*(long *)(lVar24 + 0x40) != 0) {
      lVar28 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar17 + 0x18) + 0xc0) + 0x10))
                         (lVar24);
      if ((lVar28 == 0) || (*(long *)(lVar28 + 0x68) == 0)) goto code_r0x025e05fc;
      plVar16 = (long *)/*ModalBehaviour$$Dismiss*/ func_0x01496e90(*(long *)(lVar28 + 0x68),1,0);
      *(undefined8 *)(lVar24 + 0x40) = 0;
    }
    lVar28 = *(long *)(lVar24 + 0x38);
    if (lVar28 != 0) {
      if (*(int *)(lVar28 + 0x18) + -1 < 0) {
        return plVar16;
      }
      iVar15 = *(int *)(lVar28 + 0x18) + -2;
      plVar16 = (long *)0x0;
      do {
        uVar14 = iVar15 + 1;
        if (uVar14 < *(uint *)(lVar28 + 0x18)) {
          lVar1 = *(long *)(lVar28 + 0x10) + (ulong)uVar14 * 8;
          lVar17 = lVar28;
        }
        else {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          lVar17 = *(long *)(lVar24 + 0x38);
          if (lVar17 == 0) break;
          lVar1 = *(long *)(lVar28 + 0x10) + (ulong)uVar14 * 8;
        }
        lVar28 = *(long *)(lVar1 + 0x20);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(lVar17,uVar14,uRam0000000003d3b350);
        if (lVar28 == 0) break;
        plVar31 = *(long **)(lVar28 + 0x18);
        plVar18 = plVar16;
        if (plVar31 != (long *)0x0) {
          if (plVar31 == (long *)0x0) break;
          plVar16 = (long *)/*UnityEngine.Events.UnityAction$$Invoke*/ func_0x03277c60(plVar31,0);
          plVar18 = plVar31;
        }
        if (iVar15 < 0) {
          return plVar16;
        }
        lVar28 = *(long *)(lVar24 + 0x38);
        iVar15 = iVar15 + -1;
        plVar16 = plVar18;
      } while (lVar28 != 0);
    }
  }
code_r0x025e05fc:
  plVar16 = (long *)func_0x00f78af4();
  return plVar16;
}



// ============================================================
// RVA: 0x1476abc | Atlas.Gameplay.FTUE.BaseLayerFTUEManager.Update
// ============================================================

/* WARNING: Possible PIC construction at 0x015858fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0153734c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015371e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01476dcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01476f34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01476f9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147710c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01476fa0) */
/* WARNING: Removing unreachable block (ram,0x01476f38) */
/* WARNING: Removing unreachable block (ram,0x01476fd4) */
/* WARNING: Removing unreachable block (ram,0x01476f3c) */
/* WARNING: Removing unreachable block (ram,0x01476fe8) */
/* WARNING: Removing unreachable block (ram,0x01476ff4) */
/* WARNING: Removing unreachable block (ram,0x01476ffc) */
/* WARNING: Removing unreachable block (ram,0x01477030) */
/* WARNING: Removing unreachable block (ram,0x01477080) */
/* WARNING: Removing unreachable block (ram,0x01476f44) */
/* WARNING: Removing unreachable block (ram,0x01476f50) */
/* WARNING: Removing unreachable block (ram,0x01477058) */
/* WARNING: Removing unreachable block (ram,0x01477070) */
/* WARNING: Removing unreachable block (ram,0x01477068) */
/* WARNING: Removing unreachable block (ram,0x01476f90) */
/* WARNING: Removing unreachable block (ram,0x01476dd0) */
/* WARNING: Removing unreachable block (ram,0x01476e2c) */
/* WARNING: Removing unreachable block (ram,0x01476dd4) */
/* WARNING: Removing unreachable block (ram,0x01476e3c) */
/* WARNING: Removing unreachable block (ram,0x01476e10) */
/* WARNING: Removing unreachable block (ram,0x015b4a80) */
/* WARNING: Removing unreachable block (ram,0x015b4aa4) */
/* WARNING: Removing unreachable block (ram,0x015b4ab8) */
/* WARNING: Removing unreachable block (ram,0x015b4ac4) */
/* WARNING: Removing unreachable block (ram,0x015b4adc) */
/* WARNING: Removing unreachable block (ram,0x015b4b18) */
/* WARNING: Removing unreachable block (ram,0x015b4b44) */
/* WARNING: Removing unreachable block (ram,0x015b4b58) */
/* WARNING: Removing unreachable block (ram,0x015b4b64) */
/* WARNING: Removing unreachable block (ram,0x015b4b7c) */
/* WARNING: Removing unreachable block (ram,0x015b4bb8) */
/* WARNING: Removing unreachable block (ram,0x015b4be4) */
/* WARNING: Removing unreachable block (ram,0x015b4bf8) */
/* WARNING: Removing unreachable block (ram,0x015b4c04) */
/* WARNING: Removing unreachable block (ram,0x015b4c1c) */
/* WARNING: Removing unreachable block (ram,0x015b4c58) */
/* WARNING: Removing unreachable block (ram,0x015b4c84) */
/* WARNING: Removing unreachable block (ram,0x015b4c98) */
/* WARNING: Removing unreachable block (ram,0x015b4ca4) */
/* WARNING: Removing unreachable block (ram,0x015b4cbc) */
/* WARNING: Removing unreachable block (ram,0x015b4cf8) */
/* WARNING: Removing unreachable block (ram,0x015b4d24) */
/* WARNING: Removing unreachable block (ram,0x015b4d38) */
/* WARNING: Removing unreachable block (ram,0x015b4d44) */
/* WARNING: Removing unreachable block (ram,0x015b4d5c) */
/* WARNING: Removing unreachable block (ram,0x015b4d98) */
/* WARNING: Removing unreachable block (ram,0x015b4db4) */
/* WARNING: Removing unreachable block (ram,0x015b4dac) */
/* WARNING: Removing unreachable block (ram,0x01554b70) */
/* WARNING: Removing unreachable block (ram,0x01554bb8) */
/* WARNING: Removing unreachable block (ram,0x01554ba8) */
/* WARNING: Removing unreachable block (ram,0x01554bb0) */
/* WARNING: Removing unreachable block (ram,0x01554bc0) */
/* WARNING: Removing unreachable block (ram,0x01554bc4) */
/* WARNING: Removing unreachable block (ram,0x01554bdc) */
/* WARNING: Removing unreachable block (ram,0x01554be4) */
/* WARNING: Removing unreachable block (ram,0x01554c14) */
/* WARNING: Removing unreachable block (ram,0x01554c98) */
/* WARNING: Removing unreachable block (ram,0x01554ca4) */
/* WARNING: Removing unreachable block (ram,0x01554cac) */
/* WARNING: Removing unreachable block (ram,0x01554d28) */
/* WARNING: Removing unreachable block (ram,0x01554d8c) */
/* WARNING: Removing unreachable block (ram,0x01554d30) */
/* WARNING: Removing unreachable block (ram,0x01554d48) */
/* WARNING: Removing unreachable block (ram,0x01554d50) */
/* WARNING: Removing unreachable block (ram,0x01554e34) */
/* WARNING: Removing unreachable block (ram,0x01554d5c) */
/* WARNING: Removing unreachable block (ram,0x01554d68) */
/* WARNING: Removing unreachable block (ram,0x01554e44) */
/* WARNING: Removing unreachable block (ram,0x01554cc4) */
/* WARNING: Removing unreachable block (ram,0x01554d78) */
/* WARNING: Removing unreachable block (ram,0x01554cc8) */
/* WARNING: Removing unreachable block (ram,0x01554cdc) */
/* WARNING: Removing unreachable block (ram,0x01554ce4) */
/* WARNING: Removing unreachable block (ram,0x01554e0c) */
/* WARNING: Removing unreachable block (ram,0x01554cf0) */
/* WARNING: Removing unreachable block (ram,0x01554cfc) */
/* WARNING: Removing unreachable block (ram,0x01554e1c) */
/* WARNING: Removing unreachable block (ram,0x01554e20) */
/* WARNING: Removing unreachable block (ram,0x01554e48) */
/* WARNING: Removing unreachable block (ram,0x01554c18) */
/* WARNING: Removing unreachable block (ram,0x01554c1c) */
/* WARNING: Removing unreachable block (ram,0x01554c28) */
/* WARNING: Removing unreachable block (ram,0x01554c34) */
/* WARNING: Removing unreachable block (ram,0x01554c3c) */
/* WARNING: Removing unreachable block (ram,0x01554da8) */
/* WARNING: Removing unreachable block (ram,0x01554e58) */
/* WARNING: Removing unreachable block (ram,0x01554db0) */
/* WARNING: Removing unreachable block (ram,0x01554dc8) */
/* WARNING: Removing unreachable block (ram,0x01554dd0) */
/* WARNING: Removing unreachable block (ram,0x01554ea0) */
/* WARNING: Removing unreachable block (ram,0x01554ddc) */
/* WARNING: Removing unreachable block (ram,0x01554de8) */
/* WARNING: Removing unreachable block (ram,0x01554eb0) */
/* WARNING: Removing unreachable block (ram,0x01554c54) */
/* WARNING: Removing unreachable block (ram,0x01554df8) */
/* WARNING: Removing unreachable block (ram,0x01554c58) */
/* WARNING: Removing unreachable block (ram,0x01554c6c) */
/* WARNING: Removing unreachable block (ram,0x01554c74) */
/* WARNING: Removing unreachable block (ram,0x01554e78) */
/* WARNING: Removing unreachable block (ram,0x01554c80) */
/* WARNING: Removing unreachable block (ram,0x01554c8c) */
/* WARNING: Removing unreachable block (ram,0x01554e88) */
/* WARNING: Removing unreachable block (ram,0x01554e8c) */
/* WARNING: Removing unreachable block (ram,0x01554eb4) */
/* WARNING: Removing unreachable block (ram,0x01554bf8) */
/* WARNING: Removing unreachable block (ram,0x01554d08) */
/* WARNING: Removing unreachable block (ram,0x01554bfc) */
/* WARNING: Removing unreachable block (ram,0x01554d18) */
/* WARNING: Removing unreachable block (ram,0x01554d24) */
/* WARNING: Removing unreachable block (ram,0x01554ec8) */
/* WARNING: Removing unreachable block (ram,0x015b4d6c) */
/* WARNING: Removing unreachable block (ram,0x015b4d88) */
/* WARNING: Removing unreachable block (ram,0x015b4ccc) */
/* WARNING: Removing unreachable block (ram,0x015b4ce8) */
/* WARNING: Removing unreachable block (ram,0x015b4c2c) */
/* WARNING: Removing unreachable block (ram,0x015b4c48) */
/* WARNING: Removing unreachable block (ram,0x015b4b8c) */
/* WARNING: Removing unreachable block (ram,0x015b4ba8) */
/* WARNING: Removing unreachable block (ram,0x015b4aec) */
/* WARNING: Removing unreachable block (ram,0x015b4b08) */
/* WARNING: Removing unreachable block (ram,0x015371e8) */
/* WARNING: Removing unreachable block (ram,0x015371f0) */
/* WARNING: Removing unreachable block (ram,0x01537350) */
/* WARNING: Removing unreachable block (ram,0x01537358) */
/* WARNING: Removing unreachable block (ram,0x01537364) */
/* WARNING: Removing unreachable block (ram,0x0153736c) */
/* WARNING: Removing unreachable block (ram,0x01537394) */
/* WARNING: Removing unreachable block (ram,0x015373a0) */
/* WARNING: Removing unreachable block (ram,0x025dfbac) */
/* WARNING: Removing unreachable block (ram,0x025dfbd4) */
/* WARNING: Removing unreachable block (ram,0x025dfc00) */
/* WARNING: Removing unreachable block (ram,0x025dfc04) */
/* WARNING: Removing unreachable block (ram,0x025dfc30) */
/* WARNING: Removing unreachable block (ram,0x025dfc54) */
/* WARNING: Removing unreachable block (ram,0x025dfc70) */
/* WARNING: Removing unreachable block (ram,0x025dfc80) */
/* WARNING: Removing unreachable block (ram,0x025dfcfc) */
/* WARNING: Removing unreachable block (ram,0x025dfd14) */
/* WARNING: Removing unreachable block (ram,0x025dfd88) */
/* WARNING: Removing unreachable block (ram,0x025dfdb8) */
/* WARNING: Removing unreachable block (ram,0x025dfdd8) */
/* WARNING: Removing unreachable block (ram,0x025dfde0) */
/* WARNING: Removing unreachable block (ram,0x025dfdec) */
/* WARNING: Removing unreachable block (ram,0x025dfdf8) */
/* WARNING: Removing unreachable block (ram,0x025dfe04) */
/* WARNING: Removing unreachable block (ram,0x025dfe0c) */
/* WARNING: Removing unreachable block (ram,0x025dfe1c) */
/* WARNING: Removing unreachable block (ram,0x025dfe24) */
/* WARNING: Removing unreachable block (ram,0x025dfe30) */
/* WARNING: Removing unreachable block (ram,0x025dfe34) */
/* WARNING: Removing unreachable block (ram,0x025dfe44) */
/* WARNING: Removing unreachable block (ram,0x025dfe48) */
/* WARNING: Removing unreachable block (ram,0x025dfe4c) */
/* WARNING: Removing unreachable block (ram,0x025dfd34) */
/* WARNING: Removing unreachable block (ram,0x025dfd58) */
/* WARNING: Removing unreachable block (ram,0x025dfd74) */
/* WARNING: Removing unreachable block (ram,0x025dfc88) */
/* WARNING: Removing unreachable block (ram,0x025dfcb4) */
/* WARNING: Removing unreachable block (ram,0x025dfce0) */
/* WARNING: Removing unreachable block (ram,0x025dfcd0) */
/* WARNING: Removing unreachable block (ram,0x01585900) */
/* WARNING: Removing unreachable block (ram,0x01585908) */
/* WARNING: Removing unreachable block (ram,0x01477110) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * Atlas_Gameplay_FTUE_BaseLayerFTUEManager__Update
                 (ulong param_1,undefined1 ****param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  long *****ppppplVar6;
  long *****ppppplVar7;
  undefined1 *puVar8;
  long *****ppppplVar9;
  undefined1 *puVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  long *plVar16;
  float *pfVar17;
  undefined8 uVar18;
  int extraout_w1;
  int extraout_w1_00;
  ulong extraout_x1;
  byte bVar19;
  undefined1 ***pppuVar20;
  undefined8 *extraout_x8;
  long lVar21;
  ulong uVar22;
  undefined1 **ppuVar23;
  undefined8 unaff_x21;
  undefined8 uVar24;
  long *plVar25;
  long lVar26;
  long *plVar27;
  undefined1 *****unaff_x22;
  undefined1 *****pppppuVar28;
  undefined8 *unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 ******ppppppuVar29;
  undefined *puVar30;
  code *pcVar31;
  float fVar32;
  ulong unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [12];
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  long lStack_360;
  long lStack_358;
  undefined1 ******ppppppuStack_350;
  undefined *puStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  int iStack_2f8;
  undefined4 uStack_2f0;
  long lStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 *****pppppuStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
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
  undefined8 auStack_170 [2];
  long *****ppppplStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  ulong uStack_f0;
  long *plStack_e8;
  undefined1 *****pppppuStack_e0;
  undefined *puStack_d8;
  undefined8 *****pppppuStack_c0;
  code *pcStack_b8;
  undefined1 *****pppppuStack_b0;
  undefined *puStack_a8;
  undefined1 ****ppppuStack_a0;
  code *pcStack_98;
  long *****ppppplStack_90;
  code *pcStack_88;
  undefined1 *****pppppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 ****ppppuStack_50;
  ulong uStack_48;
  long ***ppplStack_40;
  code *pcStack_38;
  
  uVar24 = 0x3eb4000;
  if ((bRam0000000003eb489a & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    bRam0000000003eb489a = 1;
  }
  pppppuVar28 = unaff_x22;
  if (param_2 == (undefined1 ****)0x0) {
LAB_01476c68:
    lVar26 = func_0x00f78af4();
    pcStack_38 = Atlas_Gameplay_FTUE_BaseLayerFTUEDriving__OnEnterInProgressScreen;
    ppppuStack_50 = param_2;
    uStack_48 = param_1;
    ppplStack_40 = (long ***)&stack0xfffffffffffffff0;
    Atlas_Gameplay_FTUE_BaseLayerFTUEManager__OnEnterInProgressScreen();
    *(undefined4 *)(lVar26 + 0xd8) = 1;
    lVar15 = Atlas_Gameplay_FTUE_BaseLayerFTUEDriving__get_BaseLayerFtueDrivingDefinition(lVar26);
    if (lVar15 != 0) {
      uStack_78 = *(undefined8 *)(lVar15 + 0x48);
      pppppuStack_80 = *(undefined1 ******)(lVar15 + 0x40);
      uStack_68 = *(undefined8 *)(lVar15 + 0x58);
      uStack_70 = *(undefined8 *)(lVar15 + 0x50);
      uStack_58 = *(undefined8 *)(lVar15 + 0x68);
      uStack_60 = *(undefined8 *)(lVar15 + 0x60);
      plVar25 = (long *)Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions
                                  (lVar26,&pppppuStack_80);
      return plVar25;
    }
    lVar15 = func_0x00f78af4();
    pcStack_88 = Atlas_Gameplay_FTUE_BaseLayerFTUEDriving__OnEnterOutroState;
    pppppuStack_b0 = pppppuVar28;
    puStack_a8 = (undefined *)uVar24;
    ppppuStack_a0 = param_2;
    pcStack_98 = (code *)lVar26;
    ppppplStack_90 = (long *****)&ppplStack_40;
    if ((bRam0000000003eb488c & 1) == 0) {
      func_0x00f78a20(0x3d1fa78);
      func_0x00f78a20(0x3d52790);
      func_0x00f78a20(0x3d68a20);
      bRam0000000003eb488c = 1;
    }
    lVar26 = *(long *)(lVar15 + 0x28);
    uVar24 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(uVar24,lVar15,uRam0000000003d52790,0);
    if (lVar26 != 0) {
      /*Core.StateManagement.State$$remove_OnPreEnterCallback*/ func_0x02b94208(lVar26,uVar24,0);
      pppppuVar28 = pppppuStack_b0;
      auVar5._8_8_ = pcStack_98;
      auVar5._0_8_ = ppppuStack_a0;
      auVar34._8_8_ = /*STR('Achievement_01')*/ uRam0000000003d68a20;
      auVar34._0_8_ = *(long *)(lVar15 + 0x20);
      if (*(long *)(lVar15 + 0x20) != 0) {
        ppppplVar6 = (long *****)&pppppuStack_80;
        puVar30 = puStack_a8;
        ppppplVar7 = ppppplStack_90;
        pcVar31 = pcStack_88;
        do {
          auVar33 = auVar34;
          uVar24 = auVar33._8_8_;
          lVar26 = auVar33._0_8_;
          *(undefined8 *)((long)ppppplVar6 + -0x40) = unaff_d9;
          *(ulong *)((long)ppppplVar6 + -0x38) = unaff_d8;
          *(undefined1 ******)((long)ppppplVar6 + -0x30) = pppppuVar28;
          *(undefined **)((long)ppppplVar6 + -0x28) = puVar30;
          *(undefined1 (*) [16])((long)ppppplVar6 + -0x20) = auVar5;
          *(long ******)((long)ppppplVar6 + -0x10) = ppppplVar7;
          *(code **)((long)ppppplVar6 + -8) = pcVar31;
          ppppplVar7 = (long *****)((long)ppppplVar6 + -0x10);
          unaff_d8 = 0x42c80000;
          puVar30 = (undefined *)0x3eb4000;
          if ((bRam0000000003eb4717 & 1) == 0) {
            func_0x00f78a20(0x3d2fe08);
            func_0x00f78a20(0x3d2fe18);
            bRam0000000003eb4717 = 1;
          }
          *(undefined4 *)((long)ppppplVar6 + -0x44) = 0;
          if (*(long *)(lVar26 + 0x60) != 0) {
            plVar25 = (long *)/*System.Collections.Generic.Dictionary<string, float>$$TryGetValue*/ func_0x01ee246c(*(long *)(lVar26 + 0x60),uVar24,
                                              (undefined1 *)((long)ppppplVar6 + -0x44),
                                              uRam0000000003d2fe08);
            bVar11 = true;
            bVar12 = false;
            if ((int)plVar25 != 0) {
              bVar11 = false;
              bVar12 = true;
              if (!NAN(*(float *)((long)ppppplVar6 + -0x44))) {
                bVar11 = *(float *)((long)ppppplVar6 + -0x44) < 100.0;
                bVar12 = false;
              }
            }
            if (bVar11 == bVar12) {
              return plVar25;
            }
            if (*(long *)(lVar26 + 0x60) != 0) {
              puVar30 = (undefined *)0x3d2fe18;
              /*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(0x42c80000,*(long *)(lVar26 + 0x60),uVar24,uRam0000000003d2fe18);
              if (*(long *)(lVar26 + 0x58) != 0) {
                plVar25 = (long *)/*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(0x42c80000,*(long *)(lVar26 + 0x58),uVar24,
                                                  uRam0000000003d2fe18);
                return plVar25;
              }
            }
          }
          pcVar31 = (code *)&Atlas_Stats_AchievementManager__UnlockAchievement;
          auVar34 = func_0x00f78af4();
          ppppplVar6 = (long *****)((long)ppppplVar6 + -0x50);
          auVar5 = auVar33;
        } while( true );
      }
    }
    auVar34 = func_0x00f78af4();
    pppppuStack_e0 = (undefined1 *****)0x3d52790;
    pcStack_b8 = Atlas_Gameplay_FTUE_BaseLayerFTUEDriving__OnEnterEngageJoyStickStartTrigger;
    ppppppuVar29 = (undefined1 ******)&pppppuStack_c0;
    puStack_d8 = (undefined *)uVar24;
    pppppuStack_c0 = &ppppplStack_90;
    if ((bRam0000000003eb488d & 1) == 0) {
      func_0x00f78a20(0x3d52780);
      func_0x00f78a20(0x3d278d8);
      bRam0000000003eb488d = 1;
    }
    uVar24 = 0x1476dd0;
    ppppplVar7 = (long *****)&pppppuStack_e0;
    while( true ) {
      uVar18 = auVar34._8_8_;
      *(undefined8 *)((long)ppppplVar7 + -0x30) = 0x3d52790;
      *(undefined8 *)((long)ppppplVar7 + -0x28) = 0x3eb4000;
      *(undefined8 *)((long)ppppplVar7 + -0x20) = uVar18;
      *(long *)((long)ppppplVar7 + -0x18) = auVar34._0_8_;
      *(undefined1 *******)((long)ppppplVar7 + -0x10) = ppppppuVar29;
      *(undefined8 *)((long)ppppplVar7 + -8) = uVar24;
      if ((bRam0000000003eb489f & 1) == 0) {
        func_0x00f78a20(0x3d21b08);
        bRam0000000003eb489f = 1;
      }
      *(undefined8 *)((long)ppppplVar7 + -0x38) = 0;
      if (((*(ushort *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar25 = (long *)Atlas_Contexts_GameContextBase__TryGetLocalHumanPlayerFromCollider
                                  (uVar18,(undefined1 *)((long)ppppplVar7 + -0x38),0);
      if ((int)plVar25 == 0) break;
      if (*(long *)((long)ppppplVar7 + -0x38) != 0) {
        uVar13 = Atlas_Gameplay_Kart_KartComposite__get_IsRespawning
                           (*(long *)((long)ppppplVar7 + -0x38),0);
        return (long *)(ulong)(uVar13 ^ 1);
      }
      auVar34 = func_0x00f78af4();
      *(undefined8 *)((long)ppppplVar7 + -0x80) = unaff_x24;
      *(undefined8 **)((long)ppppplVar7 + -0x78) = unaff_x23;
      *(undefined8 *)((long)ppppplVar7 + -0x70) = 0x3d52790;
      *(undefined8 *)((long)ppppplVar7 + -0x68) = 0x3eb4000;
      *(undefined8 *)((long)ppppplVar7 + -0x60) = 0x3d21b08;
      *(undefined8 *)((long)ppppplVar7 + -0x58) = uVar18;
      *(undefined1 **)((long)ppppplVar7 + -0x50) = (undefined1 *)((long)ppppplVar7 + -0x10);
      *(code **)((long)ppppplVar7 + -0x48) =
           Atlas_Gameplay_FTUE_BaseLayerFTUEDriving__OnEnterEngageJoystickEndTrigger;
      ppppppuVar29 = (undefined1 ******)((long)ppppplVar7 + -0x50);
      if ((bRam0000000003eb488e & 1) == 0) {
        func_0x00f78a20(0x3d52780);
        func_0x00f78a20(0x3d52788);
        func_0x00f78a20(0x3d278d8);
        bRam0000000003eb488e = 1;
      }
      uVar24 = 0x1476f38;
      ppppplVar7 = (long *****)((long)ppppplVar7 + -0x80);
    }
    return plVar25;
  }
  plVar25 = *(long **)(param_1 + 0x78);
  pppuVar20 = *param_2;
  uVar22 = (ulong)*(ushort *)((long)pppuVar20 + 0x12a);
  if (uVar22 != 0) {
    ppuVar23 = pppuVar20[0x16] + 1;
    do {
      if (ppuVar23[-1] == /*Core.Application.IUpdateParams_TypeInfo*/ puRam0000000003d22618) {
        pppuVar20 = pppuVar20 + (long)(*(int *)ppuVar23 + 1) * 2 + 0x27;
        goto LAB_01476b54;
      }
      ppuVar23 = ppuVar23 + 2;
      uVar22 = uVar22 - 1;
    } while (uVar22 != 0);
  }
  pppuVar20 = (undefined1 ***)func_0x00fac1f0(param_2,/*Core.Application.IUpdateParams_TypeInfo*/ puRam0000000003d22618,1);
LAB_01476b54:
  (*(code *)*pppuVar20)(param_2,pppuVar20[1]);
  uVar24 = 0;
  pppppuVar28 = (undefined1 *****)0x3d22618;
  if (plVar25 == (long *)0x0) goto LAB_01476c68;
  (**(code **)(*plVar25 + 0x188))(plVar25,*(undefined8 *)(*plVar25 + 400));
  lVar26 = *(long *)(param_1 + 0x80);
  pppuVar20 = *param_2;
  uVar22 = (ulong)*(ushort *)((long)pppuVar20 + 0x12a);
  if (uVar22 != 0) {
    ppuVar23 = pppuVar20[0x16] + 1;
    do {
      if (ppuVar23[-1] == /*Core.Application.IUpdateParams_TypeInfo*/ puRam0000000003d22618) {
        pppuVar20 = pppuVar20 + (long)(*(int *)ppuVar23 + 1) * 2 + 0x27;
        goto code_r0x01476bc8;
      }
      ppuVar23 = ppuVar23 + 2;
      uVar22 = uVar22 - 1;
    } while (uVar22 != 0);
  }
  pppuVar20 = (undefined1 ***)func_0x00fac1f0(param_2,/*Core.Application.IUpdateParams_TypeInfo*/ puRam0000000003d22618,1);
code_r0x01476bc8:
  (*(code *)*pppuVar20)(param_2,pppuVar20[1]);
  uVar24 = 0;
  if (lVar26 == 0) goto LAB_01476c68;
  /*Atlas.Gameplay.FTUE.BaseLayerSequenceManager$$Update*/ func_0x01536790(lVar26,0);
  lVar26 = *(long *)(param_1 + 0x70);
  pppuVar20 = *param_2;
  uVar22 = (ulong)*(ushort *)((long)pppuVar20 + 0x12a);
  if (uVar22 != 0) {
    ppuVar23 = pppuVar20[0x16] + 1;
    do {
      if (ppuVar23[-1] == /*Core.Application.IUpdateParams_TypeInfo*/ puRam0000000003d22618) {
        pppuVar20 = pppuVar20 + (long)(*(int *)ppuVar23 + 1) * 2 + 0x27;
        goto code_r0x01476c38;
      }
      ppuVar23 = ppuVar23 + 2;
      uVar22 = uVar22 - 1;
    } while (uVar22 != 0);
  }
  pppuVar20 = (undefined1 ***)func_0x00fac1f0(param_2,/*Core.Application.IUpdateParams_TypeInfo*/ puRam0000000003d22618,1);
code_r0x01476c38:
  (*(code *)*pppuVar20)(param_2,pppuVar20[1]);
  uVar24 = 0;
  pppppuVar28 = (undefined1 *****)0x3d22618;
  if (lVar26 == 0) goto LAB_01476c68;
  /*Atlas.Gameplay.FTUE.BaseLayerPauseManager$$Update*/ func_0x015361c8(lVar26,0);
  uVar24 = 0x3eb4000;
  if ((bRam0000000003eb48ab & 1) == 0) {
    func_0x00f78a20(0x3d24e08);
    func_0x00f78a20(0x3d712d0);
    bRam0000000003eb48ab = 1;
  }
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (lVar26 = *(long *)(*(long *)(param_1 + 0x38) + 0x90), lVar26 != 0)) {
    iVar14 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(lVar26,0);
    plVar25 = (long *)(ulong)*(uint *)(param_1 + 0x94);
    if ((int)*(uint *)(param_1 + 0x94) < iVar14) {
      if ((*(long *)(param_1 + 0x38) == 0) ||
         (lVar26 = *(long *)(*(long *)(param_1 + 0x38) + 0x90), lVar26 == 0)) goto code_r0x01477f54;
      plVar25 = (long *)/*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(lVar26,0);
    }
    *(int *)(param_1 + 0x94) = (int)plVar25;
    if ((int)plVar25 < 1) {
      return plVar25;
    }
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (lVar26 = *(long *)(*(long *)(param_1 + 0x38) + 0x90), lVar26 != 0)) {
      plVar25 = (long *)/*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(lVar26,0);
      if (0 < (int)plVar25) {
        return plVar25;
      }
      if ((*(long *)(param_1 + 0x38) != 0) &&
         (lVar26 = *(long *)(*(long *)(param_1 + 0x38) + 0x90), lVar26 != 0)) {
        if (_UNK_033f82cc <= *(float *)(lVar26 + 0x70)) {
          return plVar25;
        }
        *(undefined4 *)(param_1 + 0x94) = 0;
        /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$GetSection*/ func_0x01478c3c(&pppppuStack_80,param_1,*(undefined8 *)(param_1 + 0xa8));
        if (*(long *)(param_1 + 0x40) != 0) {
          pppppuStack_80 = *(undefined1 ******)(*(long *)(param_1 + 0x40) + 0x38);
          uVar22 = /*Atlas.StringID$$get_IsValid*/ func_0x01505738(&pppppuStack_80,0);
          if ((uVar22 & 1) == 0) {
            pppppuStack_80 = unaff_x22;
          }
          iVar14 = /*Atlas.StringID$$get_IsValid*/ func_0x01505738(&pppppuStack_80,0);
          if (iVar14 == 0) {
            if (((*(ushort *)(/*Atlas.StringID_TypeInfo*/ lRam0000000003d24e08 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.StringID_TypeInfo*/ lRam0000000003d24e08 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            pppppuStack_80 = (undefined1 *****)/*Atlas.StringID$$op_Implicit*/ func_0x01505760(/*STR('PlayerFailureSpawn')*/ uRam0000000003d712d0,0);
          }
          plVar25 = (long *)/*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$RespawnHumanPlayerAtLocator*/ func_0x014787a0(param_1,pppppuStack_80);
          return plVar25;
        }
      }
    }
  }
code_r0x01477f54:
  lVar26 = func_0x00f78af4();
  pcStack_88 = (code *)&Atlas_Gameplay_FTUE_BaseLayerFTUEManager__SetInputsEnabled;
  ppppplStack_90 = (long *****)&stack0xfffffffffffffff0;
  if (*(long *)(lVar26 + 0x70) != 0) {
    if (*(char *)(*(long *)(lVar26 + 0x70) + 0x20) == '\0') {
      if (*(long *)(lVar26 + 0x80) != 0) {
        if (*(char *)(*(long *)(lVar26 + 0x80) + 0x38) != '\0') goto code_r0x01477f80;
        lVar26 = *(long *)(lVar26 + 0x58);
        if (lVar26 == 0) goto code_r0x01477fa8;
        bVar19 = 1;
        goto code_r0x01477f8c;
      }
    }
    else {
code_r0x01477f80:
      lVar26 = *(long *)(lVar26 + 0x58);
      if (lVar26 != 0) {
        bVar19 = 0;
code_r0x01477f8c:
        iVar14 = 0;
        pcStack_88 = (code *)&Atlas_Gameplay_FTUE_BaseLayerFTUEManager__SetInputsEnabled;
        lVar15 = *(long *)(lVar26 + 200);
        if (lVar15 == 0) {
          plVar16 = (long *)func_0x00f78af4();
          pppppuStack_b0 = (undefined1 *****)0x3eb4000;
          pcStack_98 = Atlas_UI_Screens_GameInProgressScreen__OnInputEnabledForLayer;
          plVar25 = plVar16;
          pppppuStack_c0 = (undefined8 *****)unaff_x22;
          pcStack_b8 = (code *)unaff_x21;
          puStack_a8 = (undefined *)param_1;
          ppppuStack_a0 = (undefined1 ****)&ppppplStack_90;
          if ((bRam0000000003eb522d & 1) == 0) {
            ppppuStack_a0 = (undefined1 ****)&ppppplStack_90;
            func_0x00f78a20(0x3d23990);
            plVar25 = (long *)func_0x00f78a20(0x3d41080);
            bRam0000000003eb522d = 1;
          }
          if ((int)plVar16[9] != iVar14) {
            return plVar25;
          }
          lVar26 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(plVar16,uRam0000000003d41080);
          if (lVar26 != 0) {
            Atlas_UI_Screens_GameInProgressScreenBehaviour__SetInputEnabled(lVar26,param_4,0);
            uVar24 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(plVar16);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            plVar25 = (long *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar24,0);
            if ((int)plVar25 == 0) {
              return plVar25;
            }
            lVar26 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(plVar16);
            if (lVar26 != 0) {
              lVar26 = *(long *)(lVar26 + 0xa8);
              if (lVar26 != 0) {
                pppppuStack_e0 = (undefined1 *****)pppppuStack_c0;
                puStack_d8 = pcStack_b8;
                pcStack_b8 = (code *)0x1585900;
                pppppuStack_c0 = (undefined8 *****)&ppppuStack_a0;
                if (pcRam0000000003ebe9d8 == (code *)0x0) {
                  pcRam0000000003ebe9d8 =
                       (code *)func_0x00f789d4("UnityEngine.Behaviour::set_enabled(System.Boolean)")
                  ;
                }
                    /* WARNING: Could not recover jumptable at 0x0321a97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                plVar25 = (long *)(*pcRam0000000003ebe9d8)(lVar26,param_4);
                return plVar25;
              }
              plVar25 = (long *)func_0x00f78af4(0,param_4,0);
              pppppuStack_e0 = (undefined1 *****)pppppuStack_c0;
              puStack_d8 = pcStack_b8;
              pcStack_b8 = Atlas_UI_Screens_FTUEScreenBehaviour___ctor;
              pppppuStack_c0 = (undefined8 *****)&ppppuStack_a0;
              if ((bRam0000000003ebf1b8 & 1) == 0) {
                func_0x00f78a20(0x3d23990,0);
                bRam0000000003ebf1b8 = 1;
              }
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              return plVar25;
            }
          }
          pfVar17 = (float *)func_0x00f78af4();
          fVar32 = *pfVar17;
          bVar11 = false;
          bVar12 = true;
          if (0.0 <= fVar32) {
            bVar11 = false;
            bVar12 = true;
            if (!NAN(fVar32)) {
              bVar11 = fVar32 == 1.0;
              bVar12 = 1.0 <= fVar32;
            }
          }
          if (!bVar12 || bVar11) {
            fVar32 = pfVar17[1];
            bVar11 = false;
            bVar12 = true;
            if (0.0 <= fVar32) {
              bVar11 = false;
              bVar12 = true;
              if (!NAN(fVar32)) {
                bVar11 = fVar32 == 1.0;
                bVar12 = 1.0 <= fVar32;
              }
            }
            if (!bVar12 || bVar11) {
              return (long *)(ulong)(0.0 <= pfVar17[2]);
            }
          }
          return (long *)0x0;
        }
        bVar19 = bVar19 ^ 1;
        ppppplVar7 = (long *****)&ppppplStack_90;
        pcStack_88 = (code *)&Atlas_Gameplay_FTUE_BaseLayerFTUEManager__SetInputsEnabled;
        lVar21 = *(long *)(lVar15 + 0x38);
        if (lVar21 == 0) {
          func_0x00f78af4();
code_r0x0164b040:
          uVar18 = func_0x00f78b24();
          auVar35 = func_0x00f78ac0(uVar18,0);
          lVar15 = auVar35._0_8_;
          pcStack_98 = (code *)&Core_Input_InputManager__SetScreenLayerInputExclusive;
          lVar26 = *(long *)(lVar15 + 0x38);
          if (lVar26 == 0) {
            ppppuStack_a0 = (undefined1 ****)&ppppplStack_90;
            func_0x00f78af4();
          }
          else {
            ppppuStack_a0 = (undefined1 ****)&ppppplStack_90;
            if (auVar35._8_4_ < *(uint *)(lVar26 + 0x18)) {
              *(byte *)(lVar26 + (long)(int)auVar35._8_4_ * 0x10 + 0x29) = bVar19;
              ppppplVar9 = (long *****)&ppppplStack_90;
              pcVar31 = (code *)&Core_Input_InputManager__SetScreenLayerInputExclusive;
              ppppuStack_a0 = (undefined1 ****)&ppppplStack_90;
              goto Core_Input_InputManager__ReselectTopmostActiveLayer;
            }
          }
          uVar24 = func_0x00f78b24();
          func_0x00f78ac0(uVar24,0);
          ppppplVar9 = (long *****)&stack0xffffffffffffff30;
          pppppuStack_c0 = (undefined8 *****)0x3eb4000;
          puStack_a8 = &Core_Input_InputManager__SetMultiTouchEnabled;
          ppppplVar7 = (long *****)&pppppuStack_b0;
          uVar24 = 0x3eb5000;
          unaff_x21 = 0x3d216c0;
          pcStack_b8 = (code *)param_1;
          pppppuStack_b0 = &ppppuStack_a0;
          if ((bRam0000000003eb5795 & 1) == 0) {
            pppppuStack_b0 = &ppppuStack_a0;
            func_0x00f78a20(0x3d216c0);
            func_0x00f78a20(0x3d22880);
            bRam0000000003eb5795 = 1;
          }
          if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar26 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
          if (lVar26 == 0) {
code_r0x0164b158:
            func_0x00f78af4();
          }
          else {
            plVar25 = *(long **)(lVar26 + 0x20);
            if (plVar25 == (long *)0x0) {
code_r0x0164b130:
              if (plVar25 != (long *)0x0) {
                *(uint *)((long)plVar25 + 0xbc) = (uint)((extraout_x1 & 1) == 0);
                return plVar25;
              }
              goto code_r0x0164b158;
            }
            if ((*(byte *)(/*UnityEngine.InputSystem.UI.InputSystemUIInputModule_TypeInfo*/ lRam0000000003d22880 + 300) <= *(byte *)(*plVar25 + 300)) &&
               (*(long *)(*(long *)(*plVar25 + 200) +
                          (ulong)*(byte *)(/*UnityEngine.InputSystem.UI.InputSystemUIInputModule_TypeInfo*/ lRam0000000003d22880 + 300) * 8 + -8) ==
                /*UnityEngine.InputSystem.UI.InputSystemUIInputModule_TypeInfo*/ lRam0000000003d22880)) goto code_r0x0164b130;
          }
          pcVar31 = (code *)&Core_Input_InputManager__SetActiveLayer;
          auVar35 = func_0x00f78e5c();
          lVar15 = auVar35._0_8_;
          *(int *)(lVar15 + 0x40) = auVar35._8_4_;
          param_1 = extraout_x1;
        }
        else {
          if (*(uint *)(lVar21 + 0x18) <= *(uint *)(lVar26 + 0x48)) goto code_r0x0164b040;
          *(byte *)(lVar21 + (long)(int)*(uint *)(lVar26 + 0x48) * 0x10 + 0x28) = bVar19;
          ppppplVar9 = (long *****)&pppppuStack_80;
          ppppplVar7 = (long *****)&stack0xfffffffffffffff0;
          pcVar31 = pcStack_88;
          pcStack_88 = (code *)&Atlas_Gameplay_FTUE_BaseLayerFTUEManager__SetInputsEnabled;
        }
Core_Input_InputManager__ReselectTopmostActiveLayer:
        *(undefined1 ******)((long)ppppplVar9 + -0x30) = unaff_x22;
        *(undefined8 *)((long)ppppplVar9 + -0x28) = unaff_x21;
        *(undefined8 *)((long)ppppplVar9 + -0x20) = uVar24;
        *(ulong *)((long)ppppplVar9 + -0x18) = param_1;
        *(long ******)((long)ppppplVar9 + -0x10) = ppppplVar7;
        *(code **)((long)ppppplVar9 + -8) = pcVar31;
        if ((bRam0000000003eb5797 & 1) == 0) {
          func_0x00f78a20(0x3d216c0);
          func_0x00f78a20(0x3d22848);
          func_0x00f78a20(0x3d232c0);
          bRam0000000003eb5797 = 1;
        }
        uVar4 = *(undefined4 *)(lVar15 + 0x40);
        uVar24 = /*Core.Input.InputManager$$FindTopmostExclusiveLayer*/ func_0x0164a6a0(lVar15);
        if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar25 = (long *)/*System.Math$$Max*/ func_0x02b01f40(uVar4,uVar24,0);
        uVar13 = (uint)plVar25;
        if (uVar13 == 0xffffffff) {
          return plVar25;
        }
        lVar26 = *(long *)(lVar15 + 0x38);
        if (lVar26 != 0) {
          if (*(uint *)(lVar26 + 0x18) <= uVar13) goto code_r0x0164a30c;
          if (*(char *)(lVar26 + (long)(int)uVar13 * 0x10 + 0x28) != '\0') {
            return plVar25;
          }
          if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) != 0) {
            *(undefined1 *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x29) = 1;
            if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            lVar26 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
            lVar15 = *(long *)(lVar15 + 0x38);
            if (lVar15 != 0) {
              if (*(uint *)(lVar15 + 0x18) <= uVar13) goto code_r0x0164a30c;
              if (lVar26 != 0) {
                plVar25 = (long *)/*UnityEngine.EventSystems.EventSystem$$SetSelectedGameObject*/ func_0x032b7cb0(lVar26,*(undefined8 *)
                                                          (lVar15 + (long)(int)uVar13 * 0x10 + 0x20)
                                                  ,0);
                if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) != 0) {
                  *(undefined1 *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x29) = 0;
                  return plVar25;
                }
              }
            }
          }
        }
        func_0x00f78af4();
code_r0x0164a30c:
        uVar24 = func_0x00f78b24();
        plVar25 = (long *)func_0x00f78ac0(uVar24,0);
        return plVar25;
      }
    }
  }
code_r0x01477fa8:
  plVar25 = (long *)func_0x00f78af4();
  pppppuStack_b0 = (undefined1 *****)0x3eb4000;
  pcStack_98 = (code *)&Atlas_Gameplay_FTUE_BaseLayerFTUEManager__OnExitInProgressScreen;
  puStack_a8 = (undefined *)param_1;
  ppppuStack_a0 = (undefined1 ****)&ppppplStack_90;
  if ((bRam0000000003eb489c & 1) == 0) {
    ppppuStack_a0 = (undefined1 ****)&ppppplStack_90;
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d527c0);
    bRam0000000003eb489c = 1;
  }
  uVar22 = plVar25[3];
  lVar26 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
  /*System.Action$$.ctor*/ func_0x02924c80(lVar26,plVar25,*(undefined8 *)(*plVar25 + 0x1c0),0);
  if (uVar22 != 0) {
    plVar16 = (long *)Atlas_Contexts_GameContextBaseInProgressState__remove_OnInProgressScreenExited
                                (uVar22,lVar26,0);
    if (plVar25[0xb] == 0) {
      return plVar16;
    }
    if (plVar25[0xe] != 0) {
      /*Atlas.Gameplay.FTUE.BaseLayerPauseManager$$OnAfterExitGameContextScreen*/ func_0x01536404(plVar25[0xe],0);
      if (plVar25[0x10] != 0) {
        /*Atlas.Gameplay.FTUE.BaseLayerSequenceManager$$OnAfterExitGameContextScreen*/ func_0x01536b90(plVar25[0x10],0);
        lVar15 = plVar25[0xe];
        lVar26 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
        /*System.Action$$.ctor*/ func_0x02924c80(lVar26,plVar25,uRam0000000003d527c0,0);
        uVar22 = 0;
        unaff_x23 = (undefined8 *)0x3d527c0;
        if (lVar15 != 0) {
          /*Atlas.Gameplay.FTUE.BaseLayerPauseManager$$remove_OnAfterStartPauseFinish*/ func_0x0153610c(lVar15,lVar26,0);
          lVar15 = plVar25[0xe];
          lVar26 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
          /*System.Action$$.ctor*/ func_0x02924c80(lVar26,plVar25,uRam0000000003d527c0,0);
          uVar22 = 0;
          if (lVar15 != 0) {
            /*Atlas.Gameplay.FTUE.BaseLayerPauseManager$$remove_OnAfterUnPauseFinish*/ func_0x01535fcc(lVar15,lVar26,0);
            lVar15 = plVar25[0x10];
            lVar26 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
            /*System.Action$$.ctor*/ func_0x02924c80(lVar26,plVar25,uRam0000000003d527c0,0);
            uVar22 = 0;
            unaff_x23 = (undefined8 *)0x3d527c0;
            if (lVar15 != 0) {
              /*Atlas.Gameplay.FTUE.BaseLayerSequenceManager$$remove_OnStartPlaySequence*/ func_0x0153659c(lVar15,lVar26,0);
              lVar15 = plVar25[0x10];
              lVar26 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
              /*System.Action$$.ctor*/ func_0x02924c80(lVar26,plVar25,uRam0000000003d527c0,0);
              uVar22 = 0;
              if (lVar15 != 0) {
                plVar16 = (long *)/*Atlas.Gameplay.FTUE.BaseLayerSequenceManager$$remove_OnResetSequenceStopped*/ func_0x015366dc(lVar15,lVar26,0);
                plVar25[0xb] = 0;
                return plVar16;
              }
            }
          }
        }
      }
    }
  }
  lVar15 = func_0x00f78af4();
  uStack_100 = 0x3d1fa78;
  puStack_d8 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__OnExitInProgressState;
  plVar16 = (long *)0x3d527a8;
  lStack_f8 = lVar26;
  uStack_f0 = uVar22;
  plStack_e8 = plVar25;
  pppppuStack_e0 = &ppppuStack_a0;
  if ((bRam0000000003eb489d & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d527a8);
    bRam0000000003eb489d = 1;
  }
  lVar26 = *(long *)(lVar15 + 0x18);
  uVar24 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
  /*System.Action$$.ctor*/ func_0x02924c80(uVar24,lVar15,uRam0000000003d527a8,0);
  if (lVar26 != 0) {
    /*Core.StateManagement.State$$remove_OnPostExitCallback*/ func_0x02b94d48(lVar26,uVar24,0);
    if (*(long *)(lVar15 + 0x70) != 0) {
      /*Atlas.Gameplay.FTUE.BaseLayerPauseManager$$OnExitInProgressState*/ func_0x015364e4(*(long *)(lVar15 + 0x70),0);
      if (*(ulong *)(lVar15 + 0x78) != 0) {
        auVar33._8_8_ = 0;
        auVar33._0_8_ = *(ulong *)(lVar15 + 0x78);
        puVar8 = &stack0xffffffffffffff30;
        plVar25 = plStack_e8;
        uVar22 = uStack_f0;
        lVar26 = lStack_f8;
        uVar24 = uStack_100;
        pppppuVar28 = pppppuStack_e0;
        puVar30 = puStack_d8;
        do {
          lVar15 = auVar33._0_8_;
          *(ulong *)(puVar8 + -0x20) = uVar22;
          *(long **)(puVar8 + -0x18) = plVar25;
          *(undefined1 ******)(puVar8 + -0x10) = pppppuVar28;
          *(undefined **)(puVar8 + -8) = puVar30;
          if ((bRam0000000003eb4ed9 & 1) == 0) {
            func_0x00f78a20(0x3d3e190,auVar33._8_8_);
            func_0x00f78a20(0x3d75d18);
            bRam0000000003eb4ed9 = 1;
          }
          *(undefined8 *)(lVar15 + 0x28) = 0;
          *(undefined8 *)(lVar15 + 0x30) = 0xbf800000;
          *(undefined8 *)(lVar15 + 0x18) = 0;
          *(undefined8 *)(lVar15 + 0x20) = 0;
          lVar21 = *(long *)(lVar15 + 0x10);
          if (lVar21 != 0) {
            pppppuVar28 = *(undefined1 ******)(puVar8 + -0x10);
            puVar30 = *(undefined **)(puVar8 + -8);
            uVar22 = *(ulong *)(puVar8 + -0x20);
            puVar10 = puVar8;
            plVar25 = *(long **)(puVar8 + -0x18);
            goto code_r0x025e0480;
          }
          plVar16 = (long *)func_0x00f78af4();
          if (*(float *)(plVar16 + 6) <= 0.0) {
            return plVar16;
          }
          puVar10 = puVar8 + -0x50;
          *(undefined8 *)(puVar8 + -0x50) = uVar24;
          *(long *)(puVar8 + -0x48) = lVar26;
          *(undefined8 *)(puVar8 + -0x40) = 0x3eb4000;
          *(long *)(puVar8 + -0x38) = lVar15;
          *(undefined1 **)(puVar8 + -0x30) = puVar8 + -0x10;
          *(undefined **)(puVar8 + -0x28) =
               &Atlas_Gameplay_FTUE_BaseLayerToolTipManager__OnInputFamilyChanged;
          pppppuVar28 = (undefined1 *****)(puVar8 + -0x30);
          plVar25 = plVar16;
          if ((bRam0000000003eb4ed8 & 1) == 0) {
            func_0x00f78a20(0x3d3cd60);
            func_0x00f78a20(0x3d3cd68);
            func_0x00f78a20(0x3d3e188);
            func_0x00f78a20(0x3d3e190);
            plVar25 = (long *)func_0x00f78a20(0x3d6df50);
            bRam0000000003eb4ed8 = 1;
          }
          uVar13 = *(int *)((long)plVar16 + 0x34) - 1;
          uVar22 = (ulong)uVar13;
          if ((int)uVar13 < 0) {
            return plVar25;
          }
          if (plVar16[3] != 0) {
            if (*(int *)(plVar16[3] + 0x18) <= (int)uVar13) {
              return plVar25;
            }
            lVar21 = plVar16[2];
            if (lVar21 != 0) {
              puVar30 = &UNK_01537350;
              plVar25 = plVar16;
              goto code_r0x025e0480;
            }
          }
          auVar34 = func_0x00f78af4();
          lVar15 = auVar34._8_8_;
          plVar25 = auVar34._0_8_;
          *(undefined8 *)(puVar8 + -0x80) = uVar24;
          *(long *)(puVar8 + -0x78) = lVar26;
          *(ulong *)(puVar8 + -0x70) = uVar22;
          *(long **)(puVar8 + -0x68) = plVar16;
          *(undefined1 ******)(puVar8 + -0x60) = pppppuVar28;
          *(undefined **)(puVar8 + -0x58) =
               &Atlas_Gameplay_FTUE_BaseLayerToolTipManager__SetCurrentToolTipSequence;
          plVar16 = plVar25;
          if ((bRam0000000003eb4ed5 & 1) == 0) {
            plVar16 = (long *)func_0x00f78a20(0x3d3cd60);
            bRam0000000003eb4ed5 = 1;
          }
          if ((lVar15 == 0) || (*(int *)(lVar15 + 0x18) == 0)) {
            return plVar16;
          }
          plVar25[3] = lVar15;
          *(undefined4 *)((long)plVar25 + 0x34) = 0;
          uVar24 = *(undefined8 *)(puVar8 + -0x80);
          lVar26 = *(long *)(puVar8 + -0x78);
          puVar10 = puVar8 + -0x90;
          *(undefined8 *)(puVar8 + -0x90) = unaff_d9;
          *(ulong *)(puVar8 + -0x88) = unaff_d8;
          *(undefined8 *)(puVar8 + -0x80) = uVar24;
          *(long *)(puVar8 + -0x78) = lVar26;
          *(undefined8 *)(puVar8 + -0x70) = *(undefined8 *)(puVar8 + -0x70);
          *(undefined8 *)(puVar8 + -0x68) = *(undefined8 *)(puVar8 + -0x68);
          *(undefined8 *)(puVar8 + -0x60) = *(undefined8 *)(puVar8 + -0x60);
          *(undefined8 *)(puVar8 + -0x58) = *(undefined8 *)(puVar8 + -0x58);
          pppppuVar28 = (undefined1 *****)(puVar8 + -0x60);
          plVar16 = plVar25;
          if ((bRam0000000003eb4ed6 & 1) == 0) {
            func_0x00f78a20(0x3d3cd60);
            func_0x00f78a20(0x3d3cd68);
            func_0x00f78a20(0x3d3e188);
            func_0x00f78a20(0x3d3e190);
            plVar16 = (long *)func_0x00f78a20(0x3d717f0);
            bRam0000000003eb4ed6 = 1;
          }
          uVar22 = plVar25[3];
          if (uVar22 != 0) {
            uVar13 = *(uint *)((long)plVar25 + 0x34);
            lVar26 = (long)(int)uVar13;
            if ((int)*(uint *)(uVar22 + 0x18) <= (int)uVar13) {
              return plVar16;
            }
            if (*(uint *)(uVar22 + 0x18) <= uVar13) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar21 = *(long *)(uVar22 + 0x10) + lVar26 * 0x18;
            lVar15 = *(long *)(lVar21 + 0x28);
            unaff_d8 = (ulong)*(uint *)(lVar21 + 0x30);
            plVar25[5] = *(long *)(lVar21 + 0x20);
            if (lVar15 != 0) {
              plVar25[4] = *(long *)(lVar15 + 0x28);
              uVar22 = /*Atlas.UI.ToolTipManager.ToolTipData$$Copy*/ func_0x0156b4ec(lVar15,0);
              uVar18 = /*Atlas.Gameplay.FTUE.BaseLayerToolTipManager$$GetCurrentToolTipLocalisationKey*/ func_0x0153744c(plVar25);
              if (uVar22 != 0) {
                *(undefined8 *)(uVar22 + 0x28) = uVar18;
                lVar21 = plVar25[2];
                if (lVar21 != 0) goto code_r0x015371d4;
              }
            }
          }
          puVar30 = &Atlas_Gameplay_FTUE_BaseLayerToolTipManager__HideCurrentModal;
          auVar33 = func_0x00f78af4();
          puVar8 = puVar8 + -0x90;
        } while( true );
      }
    }
  }
  auVar34 = func_0x00f78af4();
  uVar24 = auVar34._8_8_;
  lVar26 = auVar34._0_8_;
  puStack_108 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__StartSection;
  auStack_170[0] = uVar24;
  ppppplStack_110 = (long *****)&pppppuStack_e0;
  if ((bRam0000000003eb48a2 & 1) == 0) {
    func_0x00f78a20(0x3d33318);
    func_0x00f78a20(0x3d33320);
    func_0x00f78a20(0x3d33328);
    func_0x00f78a20(0x3d278d8);
    func_0x00f78a20(0x3d3cd70);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d24e08);
    func_0x00f78a20(0x3d62270);
    func_0x00f78a20(0x3d26ac8);
    bRam0000000003eb48a2 = 1;
  }
  uStack_180 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_1c8 = 0;
  *(undefined8 *)(lVar26 + 0xa8) = uVar24;
  if ((*(long *)(lVar26 + 0x40) != 0) &&
     (lVar15 = *(long *)(*(long *)(lVar26 + 0x40) + 0x30), lVar15 != 0)) {
    /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090(&uStack_210,lVar15,uRam0000000003d3cd70);
    uStack_198 = uStack_1e8;
    uStack_1a0 = uStack_1f0;
    uStack_188 = uStack_1d8;
    uStack_190 = uStack_1e0;
    uStack_180 = uStack_1d0;
    uStack_1b8 = uStack_208;
    uStack_1c0 = uStack_210;
    uStack_1a8 = uStack_1f8;
    uStack_1b0 = uStack_200;
code_r0x01478328:
    do {
      uVar22 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8(&uStack_1c0,uRam0000000003d33320);
      if ((uVar22 & 1) == 0) {
code_r0x01478494:
        plVar25 = (long *)/*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_1c0,uRam0000000003d33318);
        return plVar25;
      }
      lVar15 = func_0x00f78aec(/*Atlas.Gameplay.FTUE.BaseLayerFTUEManager.<>c__DisplayClass50_0_TypeInfo*/ uRam0000000003d26ac8);
      /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager.<>c__DisplayClass50_0$$.ctor*/ func_0x0154719c(lVar15,0);
      if (lVar15 == 0) {
        func_0x00f78af4();
        goto code_r0x014784dc;
      }
      *(long *)(lVar15 + 0x50) = lVar26;
      *(undefined8 *)(lVar15 + 0x40) = uStack_180;
      *(undefined8 *)(lVar15 + 0x28) = uStack_198;
      *(undefined8 *)(lVar15 + 0x20) = uStack_1a0;
      *(undefined8 *)(lVar15 + 0x38) = uStack_188;
      *(undefined8 *)(lVar15 + 0x30) = uStack_190;
      *(undefined8 *)(lVar15 + 0x18) = uStack_1a8;
      *(undefined8 *)(lVar15 + 0x10) = uStack_1b0;
      uStack_210 = *(undefined8 *)(lVar15 + 0x18);
      uVar24 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ lRam0000000003d24e08,&uStack_210);
      uVar22 = /*Atlas.StringID$$Equals*/ func_0x015057f8(auStack_170,uVar24,0);
    } while ((uVar22 & 1) == 0);
    if (*(long *)(lVar26 + 0x60) == 0) {
      func_0x00f78af4();
code_r0x014784dc:
                    /* WARNING: Does not return */
      pcVar31 = (code *)SoftwareBreakpoint(1,0x14784e0);
      (*pcVar31)();
    }
    puVar2 = (undefined8 *)(lVar15 + 0x10);
    puVar3 = (undefined8 *)(lVar15 + 0x48);
    uVar22 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(lVar26 + 0x60),*puVar2,puVar3,0);
    if ((uVar22 & 1) == 0) goto code_r0x01478494;
    uVar24 = *(undefined8 *)(lVar26 + 0xa0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar22 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar24,0,0);
    if ((uVar22 & 1) != 0) {
      if (*(long *)(lVar26 + 0xa0) == 0) {
        func_0x00f78af4();
        goto code_r0x014784dc;
      }
      uStack_1c8 = *(undefined8 *)(*(long *)(lVar26 + 0xa0) + 0x18);
      uStack_210 = *puVar2;
      uVar24 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ lRam0000000003d24e08,&uStack_210);
      uVar22 = /*Atlas.StringID$$Equals*/ func_0x015057f8(&uStack_1c8,uVar24,0);
      if ((uVar22 & 1) != 0) {
        uStack_248 = *(undefined8 *)(lVar15 + 0x18);
        uStack_250 = *puVar2;
        uStack_238 = *(undefined8 *)(lVar15 + 0x28);
        uStack_240 = *(undefined8 *)(lVar15 + 0x20);
        uStack_228 = *(undefined8 *)(lVar15 + 0x38);
        uStack_230 = *(undefined8 *)(lVar15 + 0x30);
        uStack_220 = *(undefined8 *)(lVar15 + 0x40);
        /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$CallReactions*/ func_0x01478e78(lVar26,*(undefined8 *)(lVar26 + 0x38),&uStack_250);
        goto code_r0x01478328;
      }
    }
    uVar18 = *puVar3;
    uVar24 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
    /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(uVar24,lVar15,uRam0000000003d62270,0);
    /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$AddBaseListener*/ func_0x01478f10(lVar26,uVar18,uVar24,*puVar3);
    goto code_r0x01478328;
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar25 = (long *)___cxa_begin_catch();
    lVar26 = *plVar25;
    ___cxa_end_catch();
    plVar25 = (long *)/*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_1c0,uRam0000000003d33318);
    if (lVar26 == 0) {
      return plVar25;
    }
    func_0x00f78ac0(lVar26,0);
  }
  lVar26 = __Unwind_Resume();
  puStack_258 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__EndSection;
  lVar15 = 0x3eb4000;
  pppppuStack_260 = &ppppplStack_110;
  if ((bRam0000000003eb48a3 & 1) == 0) {
    func_0x00f78a20(0x3d33318);
    func_0x00f78a20(0x3d33320);
    func_0x00f78a20(0x3d33328);
    func_0x00f78a20(0x3d3cd70);
    func_0x00f78a20(0x3d24e08);
    bRam0000000003eb48a3 = 1;
  }
  lStack_2e8 = 0;
  uStack_2f0 = 0;
  if ((*(long *)(lVar26 + 0x40) != 0) &&
     (lVar21 = *(long *)(*(long *)(lVar26 + 0x40) + 0x30), lVar21 != 0)) {
    plVar16 = (long *)0x3d24e08;
    /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090(&uStack_340,lVar21,uRam0000000003d3cd70);
    uStack_2b8 = uStack_318;
    uStack_2c0 = uStack_320;
    uStack_2a8 = uStack_308;
    uStack_2b0 = uStack_310;
    uStack_2a0 = uStack_300;
    uStack_2d8 = uStack_338;
    uStack_2e0 = uStack_340;
    uStack_2c8 = uStack_328;
    uStack_2d0 = uStack_330;
code_r0x01478624:
    do {
      uVar22 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8(&uStack_2e0,uRam0000000003d33320);
      uVar24 = uStack_2d0;
      if ((uVar22 & 1) == 0) goto code_r0x01478690;
      uStack_340 = uStack_2c8;
      uVar18 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ lRam0000000003d24e08,&uStack_340);
      uVar22 = /*Atlas.StringID$$Equals*/ func_0x015057f8(lVar26 + 0xa8,uVar18,0);
      if ((uVar22 & 1) != 0) {
        if (*(long *)(lVar26 + 0x60) == 0) {
          func_0x00f78af4();
        }
        else {
          uVar22 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(lVar26 + 0x60),uVar24,&lStack_2e8,0);
          if ((uVar22 & 1) == 0) {
            iStack_2f8 = 0x86;
            goto code_r0x0147869c;
          }
          if (lStack_2e8 != 0) {
            Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RemoveBaseListener
                      (lVar26,*(undefined8 *)(lStack_2e8 + 0x18));
            goto code_r0x01478624;
          }
          func_0x00f78af4();
        }
                    /* WARNING: Does not return */
        pcVar31 = (code *)SoftwareBreakpoint(1,0x1478708);
        (*pcVar31)();
      }
    } while( true );
  }
  func_0x00f78af4();
  if (extraout_w1_00 == 1) {
    plVar25 = (long *)___cxa_begin_catch();
    lVar15 = *plVar25;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_2e0,*unaff_x23);
    if (lVar15 == 0) {
code_r0x014786b8:
      plVar25 = (long *)*plVar16;
      if (((*(ushort *)((long)plVar25 + 0x132) >> 10 & 1) != 0) && ((int)plVar25[0x1c] == 0)) {
        func_0x00f78ad0();
        plVar25 = (long *)*plVar16;
      }
      *(undefined8 *)(lVar26 + 0xa8) = *(undefined8 *)plVar25[0x17];
      return plVar25;
    }
    func_0x00f78ac0(lVar15,0);
  }
  lVar21 = __Unwind_Resume();
  puStack_348 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetActiveSection;
  lStack_360 = lVar15;
  lStack_358 = lVar26;
  ppppppuStack_350 = (undefined1 ******)&pppppuStack_260;
  plVar25 = (long *)/*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$GetSection*/ func_0x01478c3c(&uStack_3c0,lVar21,*(undefined8 *)(lVar21 + 0xa8));
  extraout_x8[5] = uStack_398;
  extraout_x8[4] = uStack_3a0;
  extraout_x8[7] = uStack_388;
  extraout_x8[6] = uStack_390;
  extraout_x8[9] = uStack_378;
  extraout_x8[8] = uStack_380;
  extraout_x8[0xb] = uStack_368;
  extraout_x8[10] = uStack_370;
  extraout_x8[1] = uStack_3b8;
  *extraout_x8 = uStack_3c0;
  extraout_x8[3] = uStack_3a8;
  extraout_x8[2] = uStack_3b0;
  return plVar25;
code_r0x01478690:
  iStack_2f8 = 0x7b;
code_r0x0147869c:
  plVar25 = (long *)/*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_2e0,uRam0000000003d33318);
  if (iStack_2f8 == 0x86) {
    return plVar25;
  }
  goto code_r0x014786b8;
code_r0x015371d4:
  puVar30 = &UNK_015371e8;
code_r0x025e0480:
  lVar15 = lRam0000000003d3e190;
  *(undefined8 *)(puVar10 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar10 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar10 + -0x40) = unaff_x24;
  *(undefined8 **)(puVar10 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar10 + -0x30) = uVar24;
  *(long *)(puVar10 + -0x28) = lVar26;
  *(ulong *)(puVar10 + -0x20) = uVar22;
  *(long **)(puVar10 + -0x18) = plVar25;
  *(undefined1 ******)(puVar10 + -0x10) = pppppuVar28;
  *(undefined **)(puVar10 + -8) = puVar30;
  if ((bRam0000000003eb8330 & 1) == 0) {
    func_0x00f78a20(0x3d3b350);
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    func_0x00f78a20(0x3d6bd58);
    bRam0000000003eb8330 = 1;
  }
  if (lVar21 != 0) {
    plVar25 = (long *)(*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar15 + 0x18) + 0xc0) + 8))
                                (lVar21,/*STR('DismissAllQueuedAndShowing')*/ uRam0000000003d6bd58);
    if (*(long *)(lVar21 + 0x40) != 0) {
      lVar26 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar15 + 0x18) + 0xc0) + 0x10))
                         (lVar21);
      if ((lVar26 == 0) || (*(long *)(lVar26 + 0x68) == 0)) goto code_r0x025e05fc;
      plVar25 = (long *)/*ModalBehaviour$$Dismiss*/ func_0x01496e90(*(long *)(lVar26 + 0x68),1,0);
      *(undefined8 *)(lVar21 + 0x40) = 0;
    }
    lVar26 = *(long *)(lVar21 + 0x38);
    if (lVar26 != 0) {
      if (*(int *)(lVar26 + 0x18) + -1 < 0) {
        return plVar25;
      }
      iVar14 = *(int *)(lVar26 + 0x18) + -2;
      plVar25 = (long *)0x0;
      do {
        uVar13 = iVar14 + 1;
        if (uVar13 < *(uint *)(lVar26 + 0x18)) {
          lVar1 = *(long *)(lVar26 + 0x10) + (ulong)uVar13 * 8;
          lVar15 = lVar26;
        }
        else {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          lVar15 = *(long *)(lVar21 + 0x38);
          if (lVar15 == 0) break;
          lVar1 = *(long *)(lVar26 + 0x10) + (ulong)uVar13 * 8;
        }
        lVar26 = *(long *)(lVar1 + 0x20);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(lVar15,uVar13,uRam0000000003d3b350);
        if (lVar26 == 0) break;
        plVar27 = *(long **)(lVar26 + 0x18);
        plVar16 = plVar25;
        if (plVar27 != (long *)0x0) {
          if (plVar27 == (long *)0x0) break;
          plVar25 = (long *)/*UnityEngine.Events.UnityAction$$Invoke*/ func_0x03277c60(plVar27,0);
          plVar16 = plVar27;
        }
        if (iVar14 < 0) {
          return plVar25;
        }
        lVar26 = *(long *)(lVar21 + 0x38);
        iVar14 = iVar14 + -1;
        plVar25 = plVar16;
      } while (lVar26 != 0);
    }
  }
code_r0x025e05fc:
  plVar25 = (long *)func_0x00f78af4();
  return plVar25;
}



// ============================================================
// RVA: 0x1476e40 | Atlas.Gameplay.FTUE.BaseLayerFTUEManager.IsValidHumanCollision
// ============================================================

/* WARNING: Possible PIC construction at 0x01476fb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147710c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01476fb8) */
/* WARNING: Removing unreachable block (ram,0x01477110) */
/* WARNING: Removing unreachable block (ram,0x01478200) */
/* WARNING: Removing unreachable block (ram,0x01478238) */
/* WARNING: Removing unreachable block (ram,0x014782ac) */
/* WARNING: Removing unreachable block (ram,0x014782cc) */
/* WARNING: Removing unreachable block (ram,0x014784e0) */
/* WARNING: Removing unreachable block (ram,0x0147851c) */
/* WARNING: Removing unreachable block (ram,0x01478524) */
/* WARNING: Removing unreachable block (ram,0x01478548) */
/* WARNING: Removing unreachable block (ram,0x01478554) */
/* WARNING: Removing unreachable block (ram,0x014782d4) */
/* WARNING: Removing unreachable block (ram,0x01478328) */
/* WARNING: Removing unreachable block (ram,0x01478338) */
/* WARNING: Removing unreachable block (ram,0x014784c8) */
/* WARNING: Removing unreachable block (ram,0x01478350) */
/* WARNING: Removing unreachable block (ram,0x01478394) */
/* WARNING: Removing unreachable block (ram,0x014784d0) */
/* WARNING: Removing unreachable block (ram,0x0147839c) */
/* WARNING: Removing unreachable block (ram,0x01478494) */
/* WARNING: Removing unreachable block (ram,0x014784a8) */
/* WARNING: Removing unreachable block (ram,0x014783b8) */
/* WARNING: Removing unreachable block (ram,0x014783c8) */
/* WARNING: Removing unreachable block (ram,0x014783d0) */
/* WARNING: Removing unreachable block (ram,0x014783d4) */
/* WARNING: Removing unreachable block (ram,0x014783e8) */
/* WARNING: Removing unreachable block (ram,0x014784d8) */
/* WARNING: Removing unreachable block (ram,0x014784dc) */
/* WARNING: Removing unreachable block (ram,0x014783f0) */
/* WARNING: Removing unreachable block (ram,0x0147844c) */
/* WARNING: Removing unreachable block (ram,0x01478420) */

ulong Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsValidHumanCollision
                (undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  int extraout_w1;
  undefined4 uVar11;
  undefined8 *extraout_x8;
  undefined8 uVar12;
  ulong *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *puVar13;
  ulong unaff_x24;
  undefined *puVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
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
  undefined1 *puStack_50;
  code *pcStack_48;
  long lStack_38;
  
  if ((bRam0000000003eb489f & 1) == 0) {
    func_0x00f78a20(0x3d21b08);
    bRam0000000003eb489f = 1;
  }
  lStack_38 = 0;
  if (((*(ushort *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar5 = Atlas_Contexts_GameContextBase__TryGetLocalHumanPlayerFromCollider(param_2,&lStack_38,0);
  if ((int)uVar5 == 0) {
    return uVar5;
  }
  if (lStack_38 != 0) {
    uVar4 = Atlas_Gameplay_Kart_KartComposite__get_IsRespawning(lStack_38,0);
    return (ulong)(uVar4 ^ 1);
  }
  auVar16 = func_0x00f78af4();
  lVar6 = auVar16._0_8_;
  puVar3 = (undefined8 *)&stack0xffffffffffffff80;
  pcStack_48 = Atlas_Gameplay_FTUE_BaseLayerFTUEDriving__OnEnterEngageJoystickEndTrigger;
  lVar7 = lVar6;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb488e & 1) == 0) {
    func_0x00f78a20(0x3d52780);
    func_0x00f78a20(0x3d52788);
    lVar7 = func_0x00f78a20(0x3d278d8);
    bRam0000000003eb488e = 1;
  }
  uVar5 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsValidHumanCollision(lVar7,auVar16._8_8_);
  if ((int)uVar5 == 0) {
    return uVar5;
  }
  if ((*(char *)(lVar6 + 0xe0) == '\0') &&
     ((*(int *)(lVar6 + 0x8c) < *(int *)(lVar6 + 0x88) || (*(char *)(lVar6 + 0x90) != '\0')))) {
    lVar7 = *(long *)(lVar6 + 0xb8);
    uVar12 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
    /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(uVar12,lVar6,uRam0000000003d52780,0);
    if (lVar7 == 0) goto LAB_01477058;
    /*Atlas.Gameplay.HitVolumeBehaviour$$add_OnEnter*/ func_0x015b49e0(lVar7,uVar12,0);
    puVar3 = &uStack_150;
    *(int *)(lVar6 + 0x8c) = *(int *)(lVar6 + 0x8c) + 1;
    /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$GetSection*/ func_0x01478c3c(&uStack_d0,lVar6,*(undefined8 *)(lVar6 + 0xa8));
    uStack_118 = uStack_c8;
    uStack_120 = uStack_d0;
    uStack_108 = uStack_b8;
    uStack_110 = uStack_c0;
    uStack_e8 = uStack_98;
    uStack_f0 = uStack_a0;
    uStack_d8 = uStack_88;
    uStack_e0 = uStack_90;
    uStack_f8 = uStack_a8;
    uStack_100 = uStack_b0;
    uStack_138 = uStack_98;
    uStack_140 = uStack_a0;
    uStack_128 = uStack_88;
    uStack_130 = uStack_90;
    uStack_148 = uStack_a8;
    uStack_150 = uStack_b0;
    Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions(lVar6,&uStack_150);
    /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$RespawnHumanPlayerAtLocator*/ func_0x014787a0(lVar6,unaff_x24);
    /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$RespawnAIsAtLocators*/ func_0x01478874(lVar6,unaff_x23);
    uVar12 = *(undefined8 *)(lVar6 + 0xa8);
    puVar14 = &UNK_01477110;
    puVar13 = unaff_x23;
  }
  else {
    lVar7 = Atlas_Gameplay_FTUE_BaseLayerFTUEDriving__get_BaseLayerFtueDrivingDefinition(lVar6);
    if (lVar7 == 0) {
LAB_01477058:
      lVar7 = func_0x00f78af4();
      if (*(int *)(lVar7 + 0x88) <= *(int *)(lVar7 + 0x8c)) {
        return (ulong)(*(char *)(lVar7 + 0x90) != '\0');
      }
      return 1;
    }
    uVar12 = *(undefined8 *)(lVar7 + 0xd0);
    bVar1 = *(byte *)(lVar7 + 0xe8);
    unaff_x24 = (ulong)bVar1;
    uVar4 = *(uint *)(lVar7 + 0xec);
    unaff_x23 = *(undefined8 **)(lVar6 + 0xc0);
    unaff_x22 = (ulong *)func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
    /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(unaff_x22,lVar6,uRam0000000003d52788,0);
    if (unaff_x23 == (undefined8 *)0x0) goto LAB_01477058;
    /*Atlas.Gameplay.HitVolumeBehaviour$$remove_OnEnter*/ func_0x015b4a80(unaff_x23,unaff_x22,0);
    *(uint *)(lVar6 + 0x88) = uVar4;
    *(undefined4 *)(lVar6 + 0x8c) = 0;
    *(bool *)(lVar6 + 0x90) = bVar1 != 0;
    puVar14 = (undefined *)0x1476fb8;
    puVar13 = (undefined8 *)(ulong)uVar4;
  }
  *(ulong *)((long)puVar3 + -0x40) = unaff_x24;
  *(undefined8 **)((long)puVar3 + -0x38) = puVar13;
  *(ulong **)((long)puVar3 + -0x30) = unaff_x22;
  *(undefined8 **)((long)puVar3 + -0x28) = unaff_x23;
  *(undefined8 *)((long)puVar3 + -0x20) = uVar12;
  *(long *)((long)puVar3 + -0x18) = lVar6;
  *(undefined1 ***)((long)puVar3 + -0x10) = &puStack_50;
  *(undefined **)((long)puVar3 + -8) = puVar14;
  lVar7 = 0x3eb4000;
  if ((bRam0000000003eb48a3 & 1) == 0) {
    func_0x00f78a20(0x3d33318);
    func_0x00f78a20(0x3d33320);
    func_0x00f78a20(0x3d33328);
    func_0x00f78a20(0x3d3cd70);
    func_0x00f78a20(0x3d24e08);
    bRam0000000003eb48a3 = 1;
  }
  *(undefined8 *)((long)puVar3 + -0x98) = 0;
  *(undefined4 *)((long)puVar3 + -0xa0) = 0;
  if ((*(long *)(lVar6 + 0x40) != 0) &&
     (lVar8 = *(long *)(*(long *)(lVar6 + 0x40) + 0x30), lVar8 != 0)) {
    unaff_x22 = (ulong *)0x3d24e08;
    /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090((undefined1 *)((long)puVar3 + -0xf0),lVar8,uRam0000000003d3cd70);
    *(undefined8 *)((long)puVar3 + -0x68) = *(undefined8 *)((long)puVar3 + -200);
    *(undefined8 *)((long)puVar3 + -0x70) = *(undefined8 *)((long)puVar3 + -0xd0);
    *(undefined8 *)((long)puVar3 + -0x58) = *(undefined8 *)((long)puVar3 + -0xb8);
    *(undefined8 *)((long)puVar3 + -0x60) = *(undefined8 *)((long)puVar3 + -0xc0);
    *(undefined8 *)((long)puVar3 + -0x50) = *(undefined8 *)((long)puVar3 + -0xb0);
    *(undefined8 *)((long)puVar3 + -0x88) = *(undefined8 *)((long)puVar3 + -0xe8);
    *(undefined8 *)((long)puVar3 + -0x90) = *(undefined8 *)((long)puVar3 + -0xf0);
    *(undefined8 *)((long)puVar3 + -0x78) = *(undefined8 *)((long)puVar3 + -0xd8);
    *(undefined8 *)((long)puVar3 + -0x80) = *(undefined8 *)((long)puVar3 + -0xe0);
code_r0x01478624:
    do {
      uVar5 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8((undefined1 *)((long)puVar3 + -0x90),uRam0000000003d33320);
      if ((uVar5 & 1) == 0) goto code_r0x01478690;
      uVar12 = *(undefined8 *)((long)puVar3 + -0x80);
      *(undefined8 *)((long)puVar3 + -0xf0) = *(undefined8 *)((long)puVar3 + -0x78);
      uVar9 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,(undefined1 *)((long)puVar3 + -0xf0));
      uVar5 = /*Atlas.StringID$$Equals*/ func_0x015057f8(lVar6 + 0xa8,uVar9,0);
      if ((uVar5 & 1) != 0) {
        if (*(long *)(lVar6 + 0x60) == 0) {
          func_0x00f78af4();
        }
        else {
          uVar5 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(lVar6 + 0x60),uVar12,
                                  (undefined1 *)((long)puVar3 + -0x98),0);
          if ((uVar5 & 1) == 0) {
            uVar11 = 0x86;
            goto code_r0x0147869c;
          }
          if (*(long *)((long)puVar3 + -0x98) != 0) {
            Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RemoveBaseListener
                      (lVar6,*(undefined8 *)(*(long *)((long)puVar3 + -0x98) + 0x18));
            goto code_r0x01478624;
          }
          func_0x00f78af4();
        }
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1478708);
        (*pcVar2)();
      }
    } while( true );
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar10 = (long *)___cxa_begin_catch();
    lVar7 = *plVar10;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4((undefined1 *)((long)puVar3 + -0x90),*puVar13);
    if (lVar7 == 0) goto code_r0x014786b8;
    func_0x00f78ac0(lVar7,0);
  }
  lVar8 = __Unwind_Resume();
  *(long *)((long)puVar3 + -0x110) = lVar7;
  *(long *)((long)puVar3 + -0x108) = lVar6;
  *(undefined1 **)((long)puVar3 + -0x100) = (undefined1 *)((long)puVar3 + -0x10);
  *(undefined **)((long)puVar3 + -0xf8) =
       &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetActiveSection;
  uVar5 = /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$GetSection*/ func_0x01478c3c((undefined1 *)((long)puVar3 + -0x170),lVar8,*(undefined8 *)(lVar8 + 0xa8))
  ;
  uVar12 = *(undefined8 *)((long)puVar3 + -0x150);
  uVar15 = *(undefined8 *)((long)puVar3 + -0x138);
  uVar9 = *(undefined8 *)((long)puVar3 + -0x140);
  extraout_x8[5] = *(undefined8 *)((long)puVar3 + -0x148);
  extraout_x8[4] = uVar12;
  extraout_x8[7] = uVar15;
  extraout_x8[6] = uVar9;
  uVar12 = *(undefined8 *)((long)puVar3 + -0x130);
  uVar15 = *(undefined8 *)((long)puVar3 + -0x118);
  uVar9 = *(undefined8 *)((long)puVar3 + -0x120);
  extraout_x8[9] = *(undefined8 *)((long)puVar3 + -0x128);
  extraout_x8[8] = uVar12;
  extraout_x8[0xb] = uVar15;
  extraout_x8[10] = uVar9;
  uVar12 = *(undefined8 *)((long)puVar3 + -0x170);
  uVar15 = *(undefined8 *)((long)puVar3 + -0x158);
  uVar9 = *(undefined8 *)((long)puVar3 + -0x160);
  extraout_x8[1] = *(undefined8 *)((long)puVar3 + -0x168);
  *extraout_x8 = uVar12;
  extraout_x8[3] = uVar15;
  extraout_x8[2] = uVar9;
  return uVar5;
code_r0x01478690:
  uVar11 = 0x7b;
code_r0x0147869c:
  *(undefined4 *)((long)puVar3 + -0xa8) = uVar11;
  uVar5 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4((undefined1 *)((long)puVar3 + -0x90),uRam0000000003d33318);
  if (*(int *)((long)puVar3 + -0xa8) == 0x86) {
    return uVar5;
  }
code_r0x014786b8:
  uVar5 = *unaff_x22;
  if (((*(ushort *)(uVar5 + 0x132) >> 10 & 1) != 0) && (*(int *)(uVar5 + 0xe0) == 0)) {
    func_0x00f78ad0();
    uVar5 = *unaff_x22;
  }
  *(undefined8 *)(lVar6 + 0xa8) = **(undefined8 **)(uVar5 + 0xb8);
  return uVar5;
}



// ============================================================
// RVA: 0x147705c | Atlas.Gameplay.FTUE.BaseLayerFTUEManager.IsWithinMaxRetryLimit
// ============================================================

bool Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsWithinMaxRetryLimit(long param_1)

{
  if (*(int *)(param_1 + 0x8c) < *(int *)(param_1 + 0x88)) {
    return true;
  }
  return *(char *)(param_1 + 0x90) != '\0';
}



// ============================================================
// RVA: 0x1477080 | Atlas.Gameplay.FTUE.BaseLayerFTUEManager.RetrySection
// ============================================================

/* WARNING: Possible PIC construction at 0x0147710c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01477110) */
/* WARNING: Removing unreachable block (ram,0x01478200) */
/* WARNING: Removing unreachable block (ram,0x01478238) */
/* WARNING: Removing unreachable block (ram,0x014782ac) */
/* WARNING: Removing unreachable block (ram,0x014782cc) */
/* WARNING: Removing unreachable block (ram,0x014784e0) */
/* WARNING: Removing unreachable block (ram,0x0147851c) */
/* WARNING: Removing unreachable block (ram,0x01478524) */
/* WARNING: Removing unreachable block (ram,0x01478548) */
/* WARNING: Removing unreachable block (ram,0x01478554) */
/* WARNING: Removing unreachable block (ram,0x014782d4) */
/* WARNING: Removing unreachable block (ram,0x01478328) */
/* WARNING: Removing unreachable block (ram,0x01478338) */
/* WARNING: Removing unreachable block (ram,0x014784c8) */
/* WARNING: Removing unreachable block (ram,0x01478350) */
/* WARNING: Removing unreachable block (ram,0x01478394) */
/* WARNING: Removing unreachable block (ram,0x014784d0) */
/* WARNING: Removing unreachable block (ram,0x0147839c) */
/* WARNING: Removing unreachable block (ram,0x01478494) */
/* WARNING: Removing unreachable block (ram,0x014784a8) */
/* WARNING: Removing unreachable block (ram,0x014783b8) */
/* WARNING: Removing unreachable block (ram,0x014783c8) */
/* WARNING: Removing unreachable block (ram,0x014783d0) */
/* WARNING: Removing unreachable block (ram,0x014783d4) */
/* WARNING: Removing unreachable block (ram,0x014783e8) */
/* WARNING: Removing unreachable block (ram,0x014784d8) */
/* WARNING: Removing unreachable block (ram,0x014784dc) */
/* WARNING: Removing unreachable block (ram,0x014783f0) */
/* WARNING: Removing unreachable block (ram,0x0147844c) */
/* WARNING: Removing unreachable block (ram,0x01478420) */

void Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RetrySection(long param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  int extraout_w1;
  undefined8 *extraout_x8;
  long lVar7;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_220;
  long lStack_218;
  undefined1 **ppuStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  int iStack_1b8;
  undefined4 uStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
  /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$GetSection*/ func_0x01478c3c(&uStack_90,param_1,*(undefined8 *)(param_1 + 0xa8));
  uStack_d8 = uStack_88;
  uStack_e0 = uStack_90;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_98 = uStack_48;
  uStack_a0 = uStack_50;
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  uStack_f8 = uStack_58;
  uStack_100 = uStack_60;
  uStack_e8 = uStack_48;
  uStack_f0 = uStack_50;
  uStack_108 = uStack_68;
  uStack_110 = uStack_70;
  Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions(param_1,&uStack_110);
  /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$RespawnHumanPlayerAtLocator*/ func_0x014787a0(param_1,uStack_40);
  /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$RespawnAIsAtLocators*/ func_0x01478874(param_1,uStack_38);
  uStack_118 = 0x1477110;
  lVar7 = 0x3eb4000;
  puStack_120 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb48a3 & 1) == 0) {
    func_0x00f78a20(0x3d33318);
    func_0x00f78a20(0x3d33320);
    func_0x00f78a20(0x3d33328);
    func_0x00f78a20(0x3d3cd70);
    func_0x00f78a20(0x3d24e08);
    bRam0000000003eb48a3 = 1;
  }
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  if ((*(long *)(param_1 + 0x40) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x40) + 0x30), lVar3 != 0)) {
    unaff_x22 = (long *)0x3d24e08;
    /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090(&uStack_200,lVar3,uRam0000000003d3cd70);
    uStack_178 = uStack_1d8;
    uStack_180 = uStack_1e0;
    uStack_168 = uStack_1c8;
    uStack_170 = uStack_1d0;
    uStack_160 = uStack_1c0;
    uStack_198 = uStack_1f8;
    uStack_1a0 = uStack_200;
    uStack_188 = uStack_1e8;
    uStack_190 = uStack_1f0;
code_r0x01478624:
    do {
      uVar4 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8(&uStack_1a0,uRam0000000003d33320);
      uVar1 = uStack_190;
      if ((uVar4 & 1) == 0) goto code_r0x01478690;
      uStack_200 = uStack_188;
      uVar5 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,&uStack_200);
      uVar4 = /*Atlas.StringID$$Equals*/ func_0x015057f8(param_1 + 0xa8,uVar5,0);
      if ((uVar4 & 1) != 0) {
        if (*(long *)(param_1 + 0x60) == 0) {
          func_0x00f78af4();
        }
        else {
          uVar4 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(param_1 + 0x60),uVar1,&lStack_1a8,0);
          if ((uVar4 & 1) == 0) {
            iStack_1b8 = 0x86;
            goto code_r0x0147869c;
          }
          if (lStack_1a8 != 0) {
            Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RemoveBaseListener
                      (param_1,*(undefined8 *)(lStack_1a8 + 0x18));
            goto code_r0x01478624;
          }
          func_0x00f78af4();
        }
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1478708);
        (*pcVar2)();
      }
    } while( true );
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar6 = (long *)___cxa_begin_catch();
    lVar7 = *plVar6;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_1a0,*unaff_x23);
    if (lVar7 == 0) goto code_r0x014786b8;
    func_0x00f78ac0(lVar7,0);
  }
  lVar3 = __Unwind_Resume();
  puStack_208 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetActiveSection;
  lStack_220 = lVar7;
  lStack_218 = param_1;
  ppuStack_210 = &puStack_120;
  /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$GetSection*/ func_0x01478c3c(&uStack_280,lVar3,*(undefined8 *)(lVar3 + 0xa8));
  extraout_x8[5] = uStack_258;
  extraout_x8[4] = uStack_260;
  extraout_x8[7] = uStack_248;
  extraout_x8[6] = uStack_250;
  extraout_x8[9] = uStack_238;
  extraout_x8[8] = uStack_240;
  extraout_x8[0xb] = uStack_228;
  extraout_x8[10] = uStack_230;
  extraout_x8[1] = uStack_278;
  *extraout_x8 = uStack_280;
  extraout_x8[3] = uStack_268;
  extraout_x8[2] = uStack_270;
  return;
code_r0x01478690:
  iStack_1b8 = 0x7b;
code_r0x0147869c:
  /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_1a0,uRam0000000003d33318);
  if (iStack_1b8 == 0x86) {
    return;
  }
code_r0x014786b8:
  lVar7 = *unaff_x22;
  if (((*(ushort *)(lVar7 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar7 + 0xe0) == 0)) {
    func_0x00f78ad0();
    lVar7 = *unaff_x22;
  }
  *(undefined8 *)(param_1 + 0xa8) = **(undefined8 **)(lVar7 + 0xb8);
  return;
}



// ============================================================
// RVA: 0x147712c | Atlas.Gameplay.FTUE.BaseLayerFTUEManager.SwitchToSection
// ============================================================

/* WARNING: Possible PIC construction at 0x01477148: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0147714c) */
/* WARNING: Removing unreachable block (ram,0x01478200) */
/* WARNING: Removing unreachable block (ram,0x01478238) */
/* WARNING: Removing unreachable block (ram,0x014782ac) */
/* WARNING: Removing unreachable block (ram,0x014782cc) */
/* WARNING: Removing unreachable block (ram,0x014784e0) */
/* WARNING: Removing unreachable block (ram,0x0147851c) */
/* WARNING: Removing unreachable block (ram,0x01478524) */
/* WARNING: Removing unreachable block (ram,0x01478548) */
/* WARNING: Removing unreachable block (ram,0x01478554) */
/* WARNING: Removing unreachable block (ram,0x014782d4) */
/* WARNING: Removing unreachable block (ram,0x01478328) */
/* WARNING: Removing unreachable block (ram,0x01478338) */
/* WARNING: Removing unreachable block (ram,0x014784c8) */
/* WARNING: Removing unreachable block (ram,0x01478350) */
/* WARNING: Removing unreachable block (ram,0x01478394) */
/* WARNING: Removing unreachable block (ram,0x014784d0) */
/* WARNING: Removing unreachable block (ram,0x0147839c) */
/* WARNING: Removing unreachable block (ram,0x01478494) */
/* WARNING: Removing unreachable block (ram,0x014784a8) */
/* WARNING: Removing unreachable block (ram,0x014783b8) */
/* WARNING: Removing unreachable block (ram,0x014783c8) */
/* WARNING: Removing unreachable block (ram,0x014783d0) */
/* WARNING: Removing unreachable block (ram,0x014783d4) */
/* WARNING: Removing unreachable block (ram,0x014783e8) */
/* WARNING: Removing unreachable block (ram,0x014784d8) */
/* WARNING: Removing unreachable block (ram,0x014784dc) */
/* WARNING: Removing unreachable block (ram,0x014783f0) */
/* WARNING: Removing unreachable block (ram,0x0147844c) */
/* WARNING: Removing unreachable block (ram,0x01478420) */

void Atlas_Gameplay_FTUE_BaseLayerFTUEManager__SwitchToSection
               (long param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  int extraout_w1;
  undefined8 *extraout_x8;
  long lVar7;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  undefined1 **ppuStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  int iStack_c8;
  undefined4 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  puStack_30 = &stack0xfffffffffffffff0;
  *(undefined4 *)(param_1 + 0x88) = param_3;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined1 *)(param_1 + 0x90) = param_4;
  uStack_28 = 0x147714c;
  lVar7 = 0x3eb4000;
  if ((bRam0000000003eb48a3 & 1) == 0) {
    func_0x00f78a20(0x3d33318);
    func_0x00f78a20(0x3d33320);
    func_0x00f78a20(0x3d33328);
    func_0x00f78a20(0x3d3cd70);
    func_0x00f78a20(0x3d24e08);
    bRam0000000003eb48a3 = 1;
  }
  lStack_b8 = 0;
  uStack_c0 = 0;
  if ((*(long *)(param_1 + 0x40) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x40) + 0x30), lVar3 != 0)) {
    unaff_x22 = (long *)0x3d24e08;
    /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090(&uStack_110,lVar3,uRam0000000003d3cd70);
    uStack_88 = uStack_e8;
    uStack_90 = uStack_f0;
    uStack_78 = uStack_d8;
    uStack_80 = uStack_e0;
    uStack_70 = uStack_d0;
    uStack_a8 = uStack_108;
    uStack_b0 = uStack_110;
    uStack_98 = uStack_f8;
    uStack_a0 = uStack_100;
code_r0x01478624:
    do {
      uVar4 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8(&uStack_b0,uRam0000000003d33320);
      uVar1 = uStack_a0;
      if ((uVar4 & 1) == 0) goto code_r0x01478690;
      uStack_110 = uStack_98;
      uVar5 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,&uStack_110);
      uVar4 = /*Atlas.StringID$$Equals*/ func_0x015057f8(param_1 + 0xa8,uVar5,0);
      if ((uVar4 & 1) != 0) {
        if (*(long *)(param_1 + 0x60) == 0) {
          func_0x00f78af4();
        }
        else {
          uVar4 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(param_1 + 0x60),uVar1,&lStack_b8,0);
          if ((uVar4 & 1) == 0) {
            iStack_c8 = 0x86;
            goto code_r0x0147869c;
          }
          if (lStack_b8 != 0) {
            Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RemoveBaseListener
                      (param_1,*(undefined8 *)(lStack_b8 + 0x18));
            goto code_r0x01478624;
          }
          func_0x00f78af4();
        }
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1478708);
        (*pcVar2)();
      }
    } while( true );
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar6 = (long *)___cxa_begin_catch();
    lVar7 = *plVar6;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_b0,*unaff_x23);
    if (lVar7 == 0) goto code_r0x014786b8;
    func_0x00f78ac0(lVar7,0);
  }
  lVar3 = __Unwind_Resume();
  puStack_118 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetActiveSection;
  lStack_130 = lVar7;
  lStack_128 = param_1;
  ppuStack_120 = &puStack_30;
  /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$GetSection*/ func_0x01478c3c(&uStack_190,lVar3,*(undefined8 *)(lVar3 + 0xa8));
  extraout_x8[5] = uStack_168;
  extraout_x8[4] = uStack_170;
  extraout_x8[7] = uStack_158;
  extraout_x8[6] = uStack_160;
  extraout_x8[9] = uStack_148;
  extraout_x8[8] = uStack_150;
  extraout_x8[0xb] = uStack_138;
  extraout_x8[10] = uStack_140;
  extraout_x8[1] = uStack_188;
  *extraout_x8 = uStack_190;
  extraout_x8[3] = uStack_178;
  extraout_x8[2] = uStack_180;
  return;
code_r0x01478690:
  iStack_c8 = 0x7b;
code_r0x0147869c:
  /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_b0,uRam0000000003d33318);
  if (iStack_c8 == 0x86) {
    return;
  }
code_r0x014786b8:
  lVar7 = *unaff_x22;
  if (((*(ushort *)(lVar7 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar7 + 0xe0) == 0)) {
    func_0x00f78ad0();
    lVar7 = *unaff_x22;
  }
  *(undefined8 *)(param_1 + 0xa8) = **(undefined8 **)(lVar7 + 0xb8);
  return;
}



// ============================================================
// RVA: 0x1477378 | Atlas.Gameplay.FTUE.BaseLayerFTUEManager.SwitchToNoSection
// ============================================================

/* WARNING: Possible PIC construction at 0x014773c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014773c4) */
/* WARNING: Removing unreachable block (ram,0x014773d0) */
/* WARNING: Removing unreachable block (ram,0x014773d8) */
/* WARNING: Removing unreachable block (ram,0x014773e0) */
/* WARNING: Removing unreachable block (ram,0x01478200) */
/* WARNING: Removing unreachable block (ram,0x01478238) */
/* WARNING: Removing unreachable block (ram,0x014782ac) */
/* WARNING: Removing unreachable block (ram,0x014782cc) */
/* WARNING: Removing unreachable block (ram,0x014784e0) */
/* WARNING: Removing unreachable block (ram,0x0147851c) */
/* WARNING: Removing unreachable block (ram,0x01478524) */
/* WARNING: Removing unreachable block (ram,0x01478548) */
/* WARNING: Removing unreachable block (ram,0x01478554) */
/* WARNING: Removing unreachable block (ram,0x014782d4) */
/* WARNING: Removing unreachable block (ram,0x01478328) */
/* WARNING: Removing unreachable block (ram,0x01478338) */
/* WARNING: Removing unreachable block (ram,0x014784c8) */
/* WARNING: Removing unreachable block (ram,0x01478350) */
/* WARNING: Removing unreachable block (ram,0x01478394) */
/* WARNING: Removing unreachable block (ram,0x014784d0) */
/* WARNING: Removing unreachable block (ram,0x0147839c) */
/* WARNING: Removing unreachable block (ram,0x01478494) */
/* WARNING: Removing unreachable block (ram,0x014784a8) */
/* WARNING: Removing unreachable block (ram,0x014783b8) */
/* WARNING: Removing unreachable block (ram,0x014783c8) */
/* WARNING: Removing unreachable block (ram,0x014783d0) */
/* WARNING: Removing unreachable block (ram,0x014783d4) */
/* WARNING: Removing unreachable block (ram,0x014783e8) */
/* WARNING: Removing unreachable block (ram,0x014784d8) */
/* WARNING: Removing unreachable block (ram,0x014784dc) */
/* WARNING: Removing unreachable block (ram,0x014783f0) */
/* WARNING: Removing unreachable block (ram,0x0147844c) */
/* WARNING: Removing unreachable block (ram,0x01478420) */

void Atlas_Gameplay_FTUE_BaseLayerFTUEManager__SwitchToNoSection(long param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  int extraout_w1;
  undefined8 *extraout_x8;
  long lVar7;
  long *unaff_x22;
  undefined8 *unaff_x23;
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
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  long lStack_138;
  undefined1 **ppuStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  int iStack_d8;
  undefined4 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb489e & 1) == 0) {
    func_0x00f78a20(0x3d24e08);
    bRam0000000003eb489e = 1;
  }
  *(undefined1 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  uStack_38 = 0x14773c4;
  lVar7 = 0x3eb4000;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb48a3 & 1) == 0) {
    func_0x00f78a20(0x3d33318);
    func_0x00f78a20(0x3d33320);
    func_0x00f78a20(0x3d33328);
    func_0x00f78a20(0x3d3cd70);
    func_0x00f78a20(0x3d24e08);
    bRam0000000003eb48a3 = 1;
  }
  lStack_c8 = 0;
  uStack_d0 = 0;
  if ((*(long *)(param_1 + 0x40) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x40) + 0x30), lVar3 != 0)) {
    unaff_x22 = (long *)0x3d24e08;
    /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090(&uStack_120,lVar3,uRam0000000003d3cd70);
    uStack_98 = uStack_f8;
    uStack_a0 = uStack_100;
    uStack_88 = uStack_e8;
    uStack_90 = uStack_f0;
    uStack_80 = uStack_e0;
    uStack_b8 = uStack_118;
    uStack_c0 = uStack_120;
    uStack_a8 = uStack_108;
    uStack_b0 = uStack_110;
code_r0x01478624:
    do {
      uVar4 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8(&uStack_c0,uRam0000000003d33320);
      uVar1 = uStack_b0;
      if ((uVar4 & 1) == 0) goto code_r0x01478690;
      uStack_120 = uStack_a8;
      uVar5 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,&uStack_120);
      uVar4 = /*Atlas.StringID$$Equals*/ func_0x015057f8(param_1 + 0xa8,uVar5,0);
      if ((uVar4 & 1) != 0) {
        if (*(long *)(param_1 + 0x60) == 0) {
          func_0x00f78af4();
        }
        else {
          uVar4 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(param_1 + 0x60),uVar1,&lStack_c8,0);
          if ((uVar4 & 1) == 0) {
            iStack_d8 = 0x86;
            goto code_r0x0147869c;
          }
          if (lStack_c8 != 0) {
            Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RemoveBaseListener
                      (param_1,*(undefined8 *)(lStack_c8 + 0x18));
            goto code_r0x01478624;
          }
          func_0x00f78af4();
        }
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1478708);
        (*pcVar2)();
      }
    } while( true );
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar6 = (long *)___cxa_begin_catch();
    lVar7 = *plVar6;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_c0,*unaff_x23);
    if (lVar7 == 0) goto code_r0x014786b8;
    func_0x00f78ac0(lVar7,0);
  }
  lVar3 = __Unwind_Resume();
  puStack_128 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetActiveSection;
  lStack_140 = lVar7;
  lStack_138 = param_1;
  ppuStack_130 = &puStack_40;
  /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$GetSection*/ func_0x01478c3c(&uStack_1a0,lVar3,*(undefined8 *)(lVar3 + 0xa8));
  extraout_x8[5] = uStack_178;
  extraout_x8[4] = uStack_180;
  extraout_x8[7] = uStack_168;
  extraout_x8[6] = uStack_170;
  extraout_x8[9] = uStack_158;
  extraout_x8[8] = uStack_160;
  extraout_x8[0xb] = uStack_148;
  extraout_x8[10] = uStack_150;
  extraout_x8[1] = uStack_198;
  *extraout_x8 = uStack_1a0;
  extraout_x8[3] = uStack_188;
  extraout_x8[2] = uStack_190;
  return;
code_r0x01478690:
  iStack_d8 = 0x7b;
code_r0x0147869c:
  /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_c0,uRam0000000003d33318);
  if (iStack_d8 == 0x86) {
    return;
  }
code_r0x014786b8:
  lVar7 = *unaff_x22;
  if (((*(ushort *)(lVar7 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar7 + 0xe0) == 0)) {
    func_0x00f78ad0();
    lVar7 = *unaff_x22;
  }
  *(undefined8 *)(param_1 + 0xa8) = **(undefined8 **)(lVar7 + 0xb8);
  return;
}



// ============================================================
// RVA: 0x1477860 | Atlas.Gameplay.FTUE.BaseLayerFTUEManager.IsInSection
// ============================================================

ulong Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsInSection(long param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2;
  if ((bRam0000000003eb48a1 & 1) == 0) {
    func_0x00f78a20(0x3d24e08);
    bRam0000000003eb48a1 = 1;
  }
  uVar2 = /*Atlas.StringID$$get_IsValid*/ func_0x01505738(&uStack_28,0);
  if ((uVar2 & 1) == 0) {
    uVar1 = /*Atlas.StringID$$get_IsValid*/ func_0x01505738(param_1 + 0xa8,0);
    uVar2 = (ulong)(uVar1 ^ 1);
  }
  else {
    uStack_30 = *(undefined8 *)(param_1 + 0xa8);
    uVar3 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,&uStack_30);
    uVar2 = /*Atlas.StringID$$Equals*/ func_0x015057f8(&uStack_28,uVar3,0);
  }
  return uVar2;
}



// ============================================================
// RVA: 0x1477a78 | Atlas.Gameplay.FTUE.BaseLayerFTUEManager.get_IsPaused
// ============================================================

long * Atlas_Gameplay_FTUE_BaseLayerFTUEManager__get_IsPaused
                 (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  
  if (*(long *)(param_1 + 0x70) != 0) {
    return (long *)(ulong)*(byte *)(*(long *)(param_1 + 0x70) + 0x20);
  }
  auVar6 = func_0x00f78af4();
  plVar4 = auVar6._8_8_;
  if ((bRam0000000003eb4896 & 1) == 0) {
    func_0x00f78a20(0x3d1ffd8);
    func_0x00f78a20(0x3d1ffe8);
    func_0x00f78a20(0x3d1fff0);
    func_0x00f78a20(0x3d1fff8);
    func_0x00f78a20(0x3d57250);
    bRam0000000003eb4896 = 1;
  }
  if (auVar6._0_8_ == 0) goto code_r0x01477ba0;
  plVar2 = (long *)/*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(auVar6._0_8_,plVar4,uRam0000000003d57250);
  if (plVar2 == (long *)0x0) goto code_r0x01477ba0;
  uVar1 = (**(code **)(*plVar2 + 0x188))(plVar2,*(undefined8 *)(*plVar2 + 400));
  switch(uVar1) {
  case 0:
    puVar5 = (undefined8 *)0x3d1ffe8;
    break;
  case 1:
    plVar3 = (long *)func_0x00f78aec(/*Atlas.Gameplay.FTUE.BaseLayerFTUEUsables_TypeInfo*/ uRam0000000003d1fff8);
    /*Atlas.Gameplay.FTUE.BaseLayerFTUEUsables$$.ctor*/ func_0x01535f1c(plVar3,0);
    plVar4 = plVar2;
    if (plVar3 == (long *)0x0) goto code_r0x01477ba0;
    goto code_r0x01477bd0;
  case 2:
    goto code_r0x01477ba4;
  case 3:
    puVar5 = (undefined8 *)0x3d1fff0;
    break;
  default:
    return (long *)0x0;
  }
  while( true ) {
    plVar3 = (long *)func_0x00f78aec(*puVar5);
    /*System.Object$$.ctor*/ func_0x0294d018(plVar3,0);
    plVar4 = plVar2;
    if (plVar3 != (long *)0x0) break;
code_r0x01477ba0:
    plVar2 = plVar4;
    func_0x00f78af4();
code_r0x01477ba4:
    puVar5 = (undefined8 *)0x3d1ffd8;
  }
code_r0x01477bd0:
  (**(code **)(*plVar3 + 0x178))
            (plVar3,plVar2,param_3,param_4,param_5,param_6,*(undefined8 *)(*plVar3 + 0x180));
  return plVar3;
}



// ============================================================
// RVA: 0x1477a98 | Atlas.Gameplay.FTUE.BaseLayerFTUEManager.CreateFTUE
// ============================================================

long * Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CreateFTUE
                 (long param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  if ((bRam0000000003eb4896 & 1) == 0) {
    func_0x00f78a20(0x3d1ffd8);
    func_0x00f78a20(0x3d1ffe8);
    func_0x00f78a20(0x3d1fff0);
    func_0x00f78a20(0x3d1fff8);
    func_0x00f78a20(0x3d57250);
    bRam0000000003eb4896 = 1;
  }
  if (param_1 == 0) goto LAB_01477ba0;
  plVar2 = (long *)/*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(param_1,param_2,uRam0000000003d57250);
  if (plVar2 == (long *)0x0) goto LAB_01477ba0;
  uVar1 = (**(code **)(*plVar2 + 0x188))(plVar2,*(undefined8 *)(*plVar2 + 400));
  switch(uVar1) {
  case 0:
    puVar4 = (undefined8 *)0x3d1ffe8;
    break;
  case 1:
    plVar3 = (long *)func_0x00f78aec(/*Atlas.Gameplay.FTUE.BaseLayerFTUEUsables_TypeInfo*/ uRam0000000003d1fff8);
    /*Atlas.Gameplay.FTUE.BaseLayerFTUEUsables$$.ctor*/ func_0x01535f1c(plVar3,0);
    param_2 = plVar2;
    if (plVar3 == (long *)0x0) goto LAB_01477ba0;
    goto code_r0x01477bd0;
  case 2:
    goto code_r0x01477ba4;
  case 3:
    puVar4 = (undefined8 *)0x3d1fff0;
    break;
  default:
    return (long *)0x0;
  }
  while( true ) {
    plVar3 = (long *)func_0x00f78aec(*puVar4);
    /*System.Object$$.ctor*/ func_0x0294d018(plVar3,0);
    param_2 = plVar2;
    if (plVar3 != (long *)0x0) break;
LAB_01477ba0:
    plVar2 = param_2;
    func_0x00f78af4();
code_r0x01477ba4:
    puVar4 = (undefined8 *)0x3d1ffd8;
  }
code_r0x01477bd0:
  (**(code **)(*plVar3 + 0x178))
            (plVar3,plVar2,param_3,param_4,param_5,param_6,*(undefined8 *)(*plVar3 + 0x180));
  return plVar3;
}



// ============================================================
// RVA: 0x1477c10 | Atlas.Gameplay.FTUE.BaseLayerFTUEManager.UnRegisterAllHitVolumeListeners
// ============================================================

/* WARNING: Possible PIC construction at 0x015858fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0153734c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015371e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01537350) */
/* WARNING: Removing unreachable block (ram,0x01537358) */
/* WARNING: Removing unreachable block (ram,0x01537364) */
/* WARNING: Removing unreachable block (ram,0x0153736c) */
/* WARNING: Removing unreachable block (ram,0x01537394) */
/* WARNING: Removing unreachable block (ram,0x015373a0) */
/* WARNING: Removing unreachable block (ram,0x025dfbac) */
/* WARNING: Removing unreachable block (ram,0x025dfbd4) */
/* WARNING: Removing unreachable block (ram,0x025dfc00) */
/* WARNING: Removing unreachable block (ram,0x025dfc04) */
/* WARNING: Removing unreachable block (ram,0x025dfc30) */
/* WARNING: Removing unreachable block (ram,0x025dfc54) */
/* WARNING: Removing unreachable block (ram,0x025dfc70) */
/* WARNING: Removing unreachable block (ram,0x025dfc80) */
/* WARNING: Removing unreachable block (ram,0x025dfcfc) */
/* WARNING: Removing unreachable block (ram,0x025dfd14) */
/* WARNING: Removing unreachable block (ram,0x025dfd88) */
/* WARNING: Removing unreachable block (ram,0x025dfdb8) */
/* WARNING: Removing unreachable block (ram,0x025dfdd8) */
/* WARNING: Removing unreachable block (ram,0x025dfde0) */
/* WARNING: Removing unreachable block (ram,0x025dfdec) */
/* WARNING: Removing unreachable block (ram,0x025dfdf8) */
/* WARNING: Removing unreachable block (ram,0x025dfe04) */
/* WARNING: Removing unreachable block (ram,0x025dfe0c) */
/* WARNING: Removing unreachable block (ram,0x025dfe1c) */
/* WARNING: Removing unreachable block (ram,0x025dfe24) */
/* WARNING: Removing unreachable block (ram,0x025dfe30) */
/* WARNING: Removing unreachable block (ram,0x025dfe34) */
/* WARNING: Removing unreachable block (ram,0x025dfe44) */
/* WARNING: Removing unreachable block (ram,0x025dfe48) */
/* WARNING: Removing unreachable block (ram,0x025dfe4c) */
/* WARNING: Removing unreachable block (ram,0x025dfd34) */
/* WARNING: Removing unreachable block (ram,0x025dfd58) */
/* WARNING: Removing unreachable block (ram,0x025dfd74) */
/* WARNING: Removing unreachable block (ram,0x025dfc88) */
/* WARNING: Removing unreachable block (ram,0x025dfcb4) */
/* WARNING: Removing unreachable block (ram,0x025dfce0) */
/* WARNING: Removing unreachable block (ram,0x025dfcd0) */
/* WARNING: Removing unreachable block (ram,0x01585900) */
/* WARNING: Removing unreachable block (ram,0x01585908) */
/* WARNING: Removing unreachable block (ram,0x015371e8) */
/* WARNING: Removing unreachable block (ram,0x015371f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * Atlas_Gameplay_FTUE_BaseLayerFTUEManager__UnRegisterAllHitVolumeListeners(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  undefined1 ***pppuVar7;
  undefined1 *puVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  undefined8 uVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  float *pfVar19;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  ulong extraout_x1;
  byte bVar20;
  undefined8 uVar21;
  undefined8 *extraout_x8;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long *plVar26;
  undefined1 **ppuVar27;
  undefined8 *unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 ***pppuVar28;
  undefined *puVar29;
  float fVar30;
  ulong unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar31 [16];
  undefined1 auVar32 [12];
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  undefined1 *****pppppuStack_3a0;
  undefined *puStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  int iStack_348;
  undefined4 uStack_340;
  long lStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 ****ppppuStack_2b0;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 auStack_1c0 [2];
  undefined1 ***pppuStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  ulong uStack_140;
  long *plStack_138;
  undefined1 **ppuStack_130;
  undefined *puStack_128;
  undefined1 *puStack_100;
  undefined *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined1 **ppuStack_e0;
  undefined *puStack_d8;
  undefined8 auStack_d0 [10];
  undefined8 uStack_80;
  undefined8 uStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  ppuVar27 = (undefined1 **)0x3d527c8;
  if ((bRam0000000003eb4899 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d527c8);
    func_0x00f78a20(0x3d32578);
    func_0x00f78a20(0x3d32580);
    func_0x00f78a20(0x3d32588);
    func_0x00f78a20(0x3d3a798);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4899 = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  lVar23 = *(long *)(param_1 + 0x28);
  uVar13 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
  uVar21 = 0;
  /*System.Action$$.ctor*/ func_0x02924c80(uVar13,param_1,uRam0000000003d527c8);
  uVar24 = 0;
  if (lVar23 != 0) {
    ppuVar27 = (undefined1 **)0x3d23000;
    /*Core.StateManagement.State$$remove_OnPreEnterCallback*/ func_0x02b94208(lVar23,uVar13,0);
    uVar24 = *(undefined8 *)(param_1 + 0x60);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar14 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar24,0,0);
    if ((int)plVar14 == 0) {
      return plVar14;
    }
    if ((*(long *)(param_1 + 0x60) != 0) &&
       (lVar23 = *(long *)(*(long *)(param_1 + 0x60) + 0x30), lVar23 != 0)) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_48,lVar23,uRam0000000003d3a798);
      while( true ) {
        uVar15 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_48,uRam0000000003d32580);
        if ((uVar15 & 1) == 0) {
          plVar14 = (long *)/*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_48,uRam0000000003d32578);
          return plVar14;
        }
        if (lStack_38 == 0) break;
        /*Atlas.Gameplay.HitVolumeBehaviour$$ClearDelegates*/ func_0x015b4de8(lStack_38,0);
      }
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1477d94);
      (*pcVar5)();
    }
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar14 = (long *)___cxa_begin_catch();
    param_1 = *plVar14;
    ___cxa_end_catch();
    plVar14 = (long *)/*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_48,uRam0000000003d32578);
    if (param_1 == 0) {
      return plVar14;
    }
    func_0x00f78ac0(param_1,0);
  }
  uVar15 = __Unwind_Resume();
  pppuVar7 = (undefined1 ***)auStack_d0;
  puStack_58 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RespawnPlayerIfBackToStartLine;
  uVar25 = 0x3eb4000;
  uStack_70 = uVar24;
  lStack_68 = param_1;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb48ab & 1) == 0) {
    func_0x00f78a20(0x3d24e08);
    func_0x00f78a20(0x3d712d0);
    bRam0000000003eb48ab = 1;
  }
  if ((*(long *)(uVar15 + 0x38) != 0) &&
     (lVar23 = *(long *)(*(long *)(uVar15 + 0x38) + 0x90), lVar23 != 0)) {
    iVar11 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(lVar23,0);
    plVar14 = (long *)(ulong)*(uint *)(uVar15 + 0x94);
    if ((int)*(uint *)(uVar15 + 0x94) < iVar11) {
      if ((*(long *)(uVar15 + 0x38) == 0) ||
         (lVar23 = *(long *)(*(long *)(uVar15 + 0x38) + 0x90), lVar23 == 0)) goto code_r0x01477f54;
      plVar14 = (long *)/*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(lVar23,0);
    }
    *(int *)(uVar15 + 0x94) = (int)plVar14;
    if ((int)plVar14 < 1) {
      return plVar14;
    }
    if ((*(long *)(uVar15 + 0x38) != 0) &&
       (lVar23 = *(long *)(*(long *)(uVar15 + 0x38) + 0x90), lVar23 != 0)) {
      plVar14 = (long *)/*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(lVar23,0);
      if (0 < (int)plVar14) {
        return plVar14;
      }
      if ((*(long *)(uVar15 + 0x38) != 0) &&
         (lVar23 = *(long *)(*(long *)(uVar15 + 0x38) + 0x90), lVar23 != 0)) {
        if (_UNK_033f82cc <= *(float *)(lVar23 + 0x70)) {
          return plVar14;
        }
        *(undefined4 *)(uVar15 + 0x94) = 0;
        /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$GetSection*/ func_0x01478c3c(auStack_d0,uVar15,*(undefined8 *)(uVar15 + 0xa8));
        if (*(long *)(uVar15 + 0x40) != 0) {
          auStack_d0[0] = *(undefined8 *)(*(long *)(uVar15 + 0x40) + 0x38);
          uVar16 = /*Atlas.StringID$$get_IsValid*/ func_0x01505738(auStack_d0,0);
          if ((uVar16 & 1) == 0) {
            auStack_d0[0] = uStack_80;
          }
          iVar11 = /*Atlas.StringID$$get_IsValid*/ func_0x01505738(auStack_d0,0);
          if (iVar11 == 0) {
            if (((*(ushort *)(/*Atlas.StringID_TypeInfo*/ lRam0000000003d24e08 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.StringID_TypeInfo*/ lRam0000000003d24e08 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            auStack_d0[0] = /*Atlas.StringID$$op_Implicit*/ func_0x01505760(/*STR('PlayerFailureSpawn')*/ uRam0000000003d712d0,0);
          }
          plVar14 = (long *)/*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$RespawnHumanPlayerAtLocator*/ func_0x014787a0(uVar15,auStack_d0[0]);
          return plVar14;
        }
      }
    }
  }
code_r0x01477f54:
  lVar23 = func_0x00f78af4();
  puStack_d8 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__SetInputsEnabled;
  ppuStack_e0 = &puStack_60;
  if (*(long *)(lVar23 + 0x70) != 0) {
    if (*(char *)(*(long *)(lVar23 + 0x70) + 0x20) == '\0') {
      if (*(long *)(lVar23 + 0x80) != 0) {
        if (*(char *)(*(long *)(lVar23 + 0x80) + 0x38) != '\0') goto code_r0x01477f80;
        lVar23 = *(long *)(lVar23 + 0x58);
        if (lVar23 == 0) goto code_r0x01477fa8;
        bVar20 = 1;
        goto code_r0x01477f8c;
      }
    }
    else {
code_r0x01477f80:
      lVar23 = *(long *)(lVar23 + 0x58);
      if (lVar23 != 0) {
        bVar20 = 0;
code_r0x01477f8c:
        iVar11 = 0;
        puStack_d8 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__SetInputsEnabled;
        lVar17 = *(long *)(lVar23 + 200);
        if (lVar17 == 0) {
          plVar18 = (long *)func_0x00f78af4();
          puStack_100 = (undefined1 *)0x3eb4000;
          pcStack_e8 = Atlas_UI_Screens_GameInProgressScreen__OnInputEnabledForLayer;
          plVar14 = plVar18;
          puStack_f8 = (undefined *)uVar15;
          puStack_f0 = (undefined1 *)&ppuStack_e0;
          if ((bRam0000000003eb522d & 1) == 0) {
            puStack_f0 = (undefined1 *)&ppuStack_e0;
            func_0x00f78a20(0x3d23990);
            plVar14 = (long *)func_0x00f78a20(0x3d41080);
            bRam0000000003eb522d = 1;
          }
          if ((int)plVar18[9] != iVar11) {
            return plVar14;
          }
          lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(plVar18,uRam0000000003d41080);
          if (lVar23 != 0) {
            Atlas_UI_Screens_GameInProgressScreenBehaviour__SetInputEnabled(lVar23,uVar21,0);
            uVar24 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(plVar18);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            plVar14 = (long *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar24,0);
            if ((int)plVar14 == 0) {
              return plVar14;
            }
            lVar23 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(plVar18);
            if (lVar23 != 0) {
              lVar23 = *(long *)(lVar23 + 0xa8);
              ppuStack_130 = ppuVar27;
              puStack_128 = (undefined *)uVar13;
              if (lVar23 != 0) {
                if (pcRam0000000003ebe9d8 == (code *)0x0) {
                  pcRam0000000003ebe9d8 =
                       (code *)func_0x00f789d4("UnityEngine.Behaviour::set_enabled(System.Boolean)")
                  ;
                }
                    /* WARNING: Could not recover jumptable at 0x0321a97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                plVar14 = (long *)(*pcRam0000000003ebe9d8)(lVar23,uVar21);
                return plVar14;
              }
              plVar14 = (long *)func_0x00f78af4(0,uVar21,0);
              if ((bRam0000000003ebf1b8 & 1) == 0) {
                func_0x00f78a20(0x3d23990,0);
                bRam0000000003ebf1b8 = 1;
              }
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              return plVar14;
            }
          }
          pfVar19 = (float *)func_0x00f78af4();
          fVar30 = *pfVar19;
          bVar9 = false;
          bVar10 = true;
          if (0.0 <= fVar30) {
            bVar9 = false;
            bVar10 = true;
            if (!NAN(fVar30)) {
              bVar9 = fVar30 == 1.0;
              bVar10 = 1.0 <= fVar30;
            }
          }
          if (!bVar10 || bVar9) {
            fVar30 = pfVar19[1];
            bVar9 = false;
            bVar10 = true;
            if (0.0 <= fVar30) {
              bVar9 = false;
              bVar10 = true;
              if (!NAN(fVar30)) {
                bVar9 = fVar30 == 1.0;
                bVar10 = 1.0 <= fVar30;
              }
            }
            if (!bVar10 || bVar9) {
              return (long *)(ulong)(0.0 <= pfVar19[2]);
            }
          }
          return (long *)0x0;
        }
        bVar20 = bVar20 ^ 1;
        pppuVar28 = &ppuStack_e0;
        puStack_d8 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__SetInputsEnabled;
        lVar22 = *(long *)(lVar17 + 0x38);
        if (lVar22 == 0) {
          func_0x00f78af4();
code_r0x0164b040:
          uVar24 = func_0x00f78b24();
          auVar32 = func_0x00f78ac0(uVar24,0);
          lVar17 = auVar32._0_8_;
          pcStack_e8 = (code *)&Core_Input_InputManager__SetScreenLayerInputExclusive;
          lVar23 = *(long *)(lVar17 + 0x38);
          if (lVar23 == 0) {
            puStack_f0 = (undefined1 *)&ppuStack_e0;
            func_0x00f78af4();
          }
          else {
            puStack_f0 = (undefined1 *)&ppuStack_e0;
            if (auVar32._8_4_ < *(uint *)(lVar23 + 0x18)) {
              *(byte *)(lVar23 + (long)(int)auVar32._8_4_ * 0x10 + 0x29) = bVar20;
              pppuVar7 = &ppuStack_e0;
              puVar29 = &Core_Input_InputManager__SetScreenLayerInputExclusive;
              puStack_f0 = (undefined1 *)&ppuStack_e0;
              goto Core_Input_InputManager__ReselectTopmostActiveLayer;
            }
          }
          uVar13 = func_0x00f78b24();
          func_0x00f78ac0(uVar13,0);
          pppuVar7 = (undefined1 ***)&stack0xfffffffffffffee0;
          puStack_f8 = &Core_Input_InputManager__SetMultiTouchEnabled;
          pppuVar28 = (undefined1 ***)&puStack_100;
          uVar25 = 0x3eb5000;
          uVar13 = 0x3d216c0;
          puStack_100 = (undefined1 *)&puStack_f0;
          if ((bRam0000000003eb5795 & 1) == 0) {
            puStack_100 = (undefined1 *)&puStack_f0;
            func_0x00f78a20(0x3d216c0);
            func_0x00f78a20(0x3d22880);
            bRam0000000003eb5795 = 1;
          }
          if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar23 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
          if (lVar23 == 0) {
code_r0x0164b158:
            func_0x00f78af4();
          }
          else {
            plVar14 = *(long **)(lVar23 + 0x20);
            if (plVar14 == (long *)0x0) {
code_r0x0164b130:
              if (plVar14 != (long *)0x0) {
                *(uint *)((long)plVar14 + 0xbc) = (uint)((extraout_x1 & 1) == 0);
                return plVar14;
              }
              goto code_r0x0164b158;
            }
            if ((*(byte *)(/*UnityEngine.InputSystem.UI.InputSystemUIInputModule_TypeInfo*/ lRam0000000003d22880 + 300) <= *(byte *)(*plVar14 + 300)) &&
               (*(long *)(*(long *)(*plVar14 + 200) +
                          (ulong)*(byte *)(/*UnityEngine.InputSystem.UI.InputSystemUIInputModule_TypeInfo*/ lRam0000000003d22880 + 300) * 8 + -8) ==
                /*UnityEngine.InputSystem.UI.InputSystemUIInputModule_TypeInfo*/ lRam0000000003d22880)) goto code_r0x0164b130;
          }
          puVar29 = &Core_Input_InputManager__SetActiveLayer;
          auVar32 = func_0x00f78e5c();
          lVar17 = auVar32._0_8_;
          *(int *)(lVar17 + 0x40) = auVar32._8_4_;
          uVar15 = extraout_x1;
        }
        else {
          if (*(uint *)(lVar22 + 0x18) <= *(uint *)(lVar23 + 0x48)) goto code_r0x0164b040;
          *(byte *)(lVar22 + (long)(int)*(uint *)(lVar23 + 0x48) * 0x10 + 0x28) = bVar20;
          pppuVar28 = (undefined1 ***)&puStack_60;
          puVar29 = puStack_d8;
          puStack_d8 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__SetInputsEnabled;
        }
Core_Input_InputManager__ReselectTopmostActiveLayer:
        *(undefined1 ***)((long)pppuVar7 + -0x30) = ppuVar27;
        *(undefined8 *)((long)pppuVar7 + -0x28) = uVar13;
        *(undefined8 *)((long)pppuVar7 + -0x20) = uVar25;
        *(ulong *)((long)pppuVar7 + -0x18) = uVar15;
        *(undefined1 ****)((long)pppuVar7 + -0x10) = pppuVar28;
        *(undefined **)((long)pppuVar7 + -8) = puVar29;
        if ((bRam0000000003eb5797 & 1) == 0) {
          func_0x00f78a20(0x3d216c0);
          func_0x00f78a20(0x3d22848);
          func_0x00f78a20(0x3d232c0);
          bRam0000000003eb5797 = 1;
        }
        uVar4 = *(undefined4 *)(lVar17 + 0x40);
        uVar13 = /*Core.Input.InputManager$$FindTopmostExclusiveLayer*/ func_0x0164a6a0(lVar17);
        if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar14 = (long *)/*System.Math$$Max*/ func_0x02b01f40(uVar4,uVar13,0);
        uVar12 = (uint)plVar14;
        if (uVar12 == 0xffffffff) {
          return plVar14;
        }
        lVar23 = *(long *)(lVar17 + 0x38);
        if (lVar23 != 0) {
          if (*(uint *)(lVar23 + 0x18) <= uVar12) goto code_r0x0164a30c;
          if (*(char *)(lVar23 + (long)(int)uVar12 * 0x10 + 0x28) != '\0') {
            return plVar14;
          }
          if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) != 0) {
            *(undefined1 *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x29) = 1;
            if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            lVar23 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
            lVar17 = *(long *)(lVar17 + 0x38);
            if (lVar17 != 0) {
              if (*(uint *)(lVar17 + 0x18) <= uVar12) goto code_r0x0164a30c;
              if (lVar23 != 0) {
                plVar14 = (long *)/*UnityEngine.EventSystems.EventSystem$$SetSelectedGameObject*/ func_0x032b7cb0(lVar23,*(undefined8 *)
                                                          (lVar17 + (long)(int)uVar12 * 0x10 + 0x20)
                                                  ,0);
                if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) != 0) {
                  *(undefined1 *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x29) = 0;
                  return plVar14;
                }
              }
            }
          }
        }
        func_0x00f78af4();
code_r0x0164a30c:
        uVar13 = func_0x00f78b24();
        plVar14 = (long *)func_0x00f78ac0(uVar13,0);
        return plVar14;
      }
    }
  }
code_r0x01477fa8:
  plVar14 = (long *)func_0x00f78af4();
  puStack_100 = (undefined1 *)0x3eb4000;
  pcStack_e8 = (code *)&Atlas_Gameplay_FTUE_BaseLayerFTUEManager__OnExitInProgressScreen;
  puStack_f8 = (undefined *)uVar15;
  puStack_f0 = (undefined1 *)&ppuStack_e0;
  if ((bRam0000000003eb489c & 1) == 0) {
    puStack_f0 = (undefined1 *)&ppuStack_e0;
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d527c0);
    bRam0000000003eb489c = 1;
  }
  uVar15 = plVar14[3];
  lVar23 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
  /*System.Action$$.ctor*/ func_0x02924c80(lVar23,plVar14,*(undefined8 *)(*plVar14 + 0x1c0),0);
  if (uVar15 != 0) {
    plVar18 = (long *)Atlas_Contexts_GameContextBaseInProgressState__remove_OnInProgressScreenExited
                                (uVar15,lVar23,0);
    if (plVar14[0xb] == 0) {
      return plVar18;
    }
    if (plVar14[0xe] != 0) {
      /*Atlas.Gameplay.FTUE.BaseLayerPauseManager$$OnAfterExitGameContextScreen*/ func_0x01536404(plVar14[0xe],0);
      if (plVar14[0x10] != 0) {
        /*Atlas.Gameplay.FTUE.BaseLayerSequenceManager$$OnAfterExitGameContextScreen*/ func_0x01536b90(plVar14[0x10],0);
        lVar17 = plVar14[0xe];
        lVar23 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
        /*System.Action$$.ctor*/ func_0x02924c80(lVar23,plVar14,uRam0000000003d527c0,0);
        uVar15 = 0;
        unaff_x23 = (undefined8 *)0x3d527c0;
        if (lVar17 != 0) {
          /*Atlas.Gameplay.FTUE.BaseLayerPauseManager$$remove_OnAfterStartPauseFinish*/ func_0x0153610c(lVar17,lVar23,0);
          lVar17 = plVar14[0xe];
          lVar23 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
          /*System.Action$$.ctor*/ func_0x02924c80(lVar23,plVar14,uRam0000000003d527c0,0);
          uVar15 = 0;
          if (lVar17 != 0) {
            /*Atlas.Gameplay.FTUE.BaseLayerPauseManager$$remove_OnAfterUnPauseFinish*/ func_0x01535fcc(lVar17,lVar23,0);
            lVar17 = plVar14[0x10];
            lVar23 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
            /*System.Action$$.ctor*/ func_0x02924c80(lVar23,plVar14,uRam0000000003d527c0,0);
            uVar15 = 0;
            unaff_x23 = (undefined8 *)0x3d527c0;
            if (lVar17 != 0) {
              /*Atlas.Gameplay.FTUE.BaseLayerSequenceManager$$remove_OnStartPlaySequence*/ func_0x0153659c(lVar17,lVar23,0);
              lVar17 = plVar14[0x10];
              lVar23 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
              /*System.Action$$.ctor*/ func_0x02924c80(lVar23,plVar14,uRam0000000003d527c0,0);
              uVar15 = 0;
              if (lVar17 != 0) {
                plVar18 = (long *)/*Atlas.Gameplay.FTUE.BaseLayerSequenceManager$$remove_OnResetSequenceStopped*/ func_0x015366dc(lVar17,lVar23,0);
                plVar14[0xb] = 0;
                return plVar18;
              }
            }
          }
        }
      }
    }
  }
  lVar17 = func_0x00f78af4();
  uStack_150 = 0x3d1fa78;
  puStack_128 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__OnExitInProgressState;
  plVar18 = (long *)0x3d527a8;
  lStack_148 = lVar23;
  uStack_140 = uVar15;
  plStack_138 = plVar14;
  ppuStack_130 = &puStack_f0;
  if ((bRam0000000003eb489d & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d527a8);
    bRam0000000003eb489d = 1;
  }
  lVar23 = *(long *)(lVar17 + 0x18);
  uVar13 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
  /*System.Action$$.ctor*/ func_0x02924c80(uVar13,lVar17,uRam0000000003d527a8,0);
  if (lVar23 != 0) {
    /*Core.StateManagement.State$$remove_OnPostExitCallback*/ func_0x02b94d48(lVar23,uVar13,0);
    if (*(long *)(lVar17 + 0x70) != 0) {
      /*Atlas.Gameplay.FTUE.BaseLayerPauseManager$$OnExitInProgressState*/ func_0x015364e4(*(long *)(lVar17 + 0x70),0);
      if (*(ulong *)(lVar17 + 0x78) != 0) {
        auVar31._8_8_ = 0;
        auVar31._0_8_ = *(ulong *)(lVar17 + 0x78);
        puVar6 = &stack0xfffffffffffffee0;
        plVar14 = plStack_138;
        uVar15 = uStack_140;
        lVar23 = lStack_148;
        uVar13 = uStack_150;
        ppuVar27 = ppuStack_130;
        puVar29 = puStack_128;
        do {
          lVar17 = auVar31._0_8_;
          *(ulong *)(puVar6 + -0x20) = uVar15;
          *(long **)(puVar6 + -0x18) = plVar14;
          *(undefined1 ***)(puVar6 + -0x10) = ppuVar27;
          *(undefined **)(puVar6 + -8) = puVar29;
          if ((bRam0000000003eb4ed9 & 1) == 0) {
            func_0x00f78a20(0x3d3e190,auVar31._8_8_);
            func_0x00f78a20(0x3d75d18);
            bRam0000000003eb4ed9 = 1;
          }
          *(undefined8 *)(lVar17 + 0x28) = 0;
          *(undefined8 *)(lVar17 + 0x30) = 0xbf800000;
          *(undefined8 *)(lVar17 + 0x18) = 0;
          *(undefined8 *)(lVar17 + 0x20) = 0;
          lVar22 = *(long *)(lVar17 + 0x10);
          if (lVar22 != 0) {
            ppuVar27 = *(undefined1 ***)(puVar6 + -0x10);
            puVar29 = *(undefined **)(puVar6 + -8);
            uVar15 = *(ulong *)(puVar6 + -0x20);
            puVar8 = puVar6;
            plVar14 = *(long **)(puVar6 + -0x18);
            goto code_r0x025e0480;
          }
          plVar18 = (long *)func_0x00f78af4();
          if (*(float *)(plVar18 + 6) <= 0.0) {
            return plVar18;
          }
          puVar8 = puVar6 + -0x50;
          *(undefined8 *)(puVar6 + -0x50) = uVar13;
          *(long *)(puVar6 + -0x48) = lVar23;
          *(undefined8 *)(puVar6 + -0x40) = 0x3eb4000;
          *(long *)(puVar6 + -0x38) = lVar17;
          *(undefined1 **)(puVar6 + -0x30) = puVar6 + -0x10;
          *(undefined **)(puVar6 + -0x28) =
               &Atlas_Gameplay_FTUE_BaseLayerToolTipManager__OnInputFamilyChanged;
          ppuVar27 = (undefined1 **)(puVar6 + -0x30);
          plVar14 = plVar18;
          if ((bRam0000000003eb4ed8 & 1) == 0) {
            func_0x00f78a20(0x3d3cd60);
            func_0x00f78a20(0x3d3cd68);
            func_0x00f78a20(0x3d3e188);
            func_0x00f78a20(0x3d3e190);
            plVar14 = (long *)func_0x00f78a20(0x3d6df50);
            bRam0000000003eb4ed8 = 1;
          }
          uVar12 = *(int *)((long)plVar18 + 0x34) - 1;
          uVar15 = (ulong)uVar12;
          if ((int)uVar12 < 0) {
            return plVar14;
          }
          if (plVar18[3] != 0) {
            if (*(int *)(plVar18[3] + 0x18) <= (int)uVar12) {
              return plVar14;
            }
            lVar22 = plVar18[2];
            if (lVar22 != 0) {
              puVar29 = &UNK_01537350;
              plVar14 = plVar18;
              goto code_r0x025e0480;
            }
          }
          auVar31 = func_0x00f78af4();
          lVar17 = auVar31._8_8_;
          plVar14 = auVar31._0_8_;
          *(undefined8 *)(puVar6 + -0x80) = uVar13;
          *(long *)(puVar6 + -0x78) = lVar23;
          *(ulong *)(puVar6 + -0x70) = uVar15;
          *(long **)(puVar6 + -0x68) = plVar18;
          *(undefined1 ***)(puVar6 + -0x60) = ppuVar27;
          *(undefined **)(puVar6 + -0x58) =
               &Atlas_Gameplay_FTUE_BaseLayerToolTipManager__SetCurrentToolTipSequence;
          plVar18 = plVar14;
          if ((bRam0000000003eb4ed5 & 1) == 0) {
            plVar18 = (long *)func_0x00f78a20(0x3d3cd60);
            bRam0000000003eb4ed5 = 1;
          }
          if ((lVar17 == 0) || (*(int *)(lVar17 + 0x18) == 0)) {
            return plVar18;
          }
          plVar14[3] = lVar17;
          *(undefined4 *)((long)plVar14 + 0x34) = 0;
          uVar13 = *(undefined8 *)(puVar6 + -0x80);
          lVar23 = *(long *)(puVar6 + -0x78);
          puVar8 = puVar6 + -0x90;
          *(undefined8 *)(puVar6 + -0x90) = unaff_d9;
          *(ulong *)(puVar6 + -0x88) = unaff_d8;
          *(undefined8 *)(puVar6 + -0x80) = uVar13;
          *(long *)(puVar6 + -0x78) = lVar23;
          *(undefined8 *)(puVar6 + -0x70) = *(undefined8 *)(puVar6 + -0x70);
          *(undefined8 *)(puVar6 + -0x68) = *(undefined8 *)(puVar6 + -0x68);
          *(undefined8 *)(puVar6 + -0x60) = *(undefined8 *)(puVar6 + -0x60);
          *(undefined8 *)(puVar6 + -0x58) = *(undefined8 *)(puVar6 + -0x58);
          ppuVar27 = (undefined1 **)(puVar6 + -0x60);
          plVar18 = plVar14;
          if ((bRam0000000003eb4ed6 & 1) == 0) {
            func_0x00f78a20(0x3d3cd60);
            func_0x00f78a20(0x3d3cd68);
            func_0x00f78a20(0x3d3e188);
            func_0x00f78a20(0x3d3e190);
            plVar18 = (long *)func_0x00f78a20(0x3d717f0);
            bRam0000000003eb4ed6 = 1;
          }
          uVar15 = plVar14[3];
          if (uVar15 != 0) {
            uVar12 = *(uint *)((long)plVar14 + 0x34);
            lVar23 = (long)(int)uVar12;
            if ((int)*(uint *)(uVar15 + 0x18) <= (int)uVar12) {
              return plVar18;
            }
            if (*(uint *)(uVar15 + 0x18) <= uVar12) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar22 = *(long *)(uVar15 + 0x10) + lVar23 * 0x18;
            lVar17 = *(long *)(lVar22 + 0x28);
            unaff_d8 = (ulong)*(uint *)(lVar22 + 0x30);
            plVar14[5] = *(long *)(lVar22 + 0x20);
            if (lVar17 != 0) {
              plVar14[4] = *(long *)(lVar17 + 0x28);
              uVar15 = /*Atlas.UI.ToolTipManager.ToolTipData$$Copy*/ func_0x0156b4ec(lVar17,0);
              uVar24 = /*Atlas.Gameplay.FTUE.BaseLayerToolTipManager$$GetCurrentToolTipLocalisationKey*/ func_0x0153744c(plVar14);
              if (uVar15 != 0) {
                *(undefined8 *)(uVar15 + 0x28) = uVar24;
                lVar22 = plVar14[2];
                if (lVar22 != 0) goto code_r0x015371d4;
              }
            }
          }
          puVar29 = &Atlas_Gameplay_FTUE_BaseLayerToolTipManager__HideCurrentModal;
          auVar31 = func_0x00f78af4();
          puVar6 = puVar6 + -0x90;
        } while( true );
      }
    }
  }
  auVar31 = func_0x00f78af4();
  uVar13 = auVar31._8_8_;
  lVar23 = auVar31._0_8_;
  puStack_158 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__StartSection;
  auStack_1c0[0] = uVar13;
  pppuStack_160 = &ppuStack_130;
  if ((bRam0000000003eb48a2 & 1) == 0) {
    func_0x00f78a20(0x3d33318);
    func_0x00f78a20(0x3d33320);
    func_0x00f78a20(0x3d33328);
    func_0x00f78a20(0x3d278d8);
    func_0x00f78a20(0x3d3cd70);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d24e08);
    func_0x00f78a20(0x3d62270);
    func_0x00f78a20(0x3d26ac8);
    bRam0000000003eb48a2 = 1;
  }
  uStack_1d0 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_218 = 0;
  *(undefined8 *)(lVar23 + 0xa8) = uVar13;
  if ((*(long *)(lVar23 + 0x40) != 0) &&
     (lVar17 = *(long *)(*(long *)(lVar23 + 0x40) + 0x30), lVar17 != 0)) {
    /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090(&uStack_260,lVar17,uRam0000000003d3cd70);
    uStack_1e8 = uStack_238;
    uStack_1f0 = uStack_240;
    uStack_1d8 = uStack_228;
    uStack_1e0 = uStack_230;
    uStack_1d0 = uStack_220;
    uStack_208 = uStack_258;
    uStack_210 = uStack_260;
    uStack_1f8 = uStack_248;
    uStack_200 = uStack_250;
code_r0x01478328:
    do {
      uVar15 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8(&uStack_210,uRam0000000003d33320);
      if ((uVar15 & 1) == 0) {
code_r0x01478494:
        plVar14 = (long *)/*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_210,uRam0000000003d33318);
        return plVar14;
      }
      lVar17 = func_0x00f78aec(/*Atlas.Gameplay.FTUE.BaseLayerFTUEManager.<>c__DisplayClass50_0_TypeInfo*/ uRam0000000003d26ac8);
      /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager.<>c__DisplayClass50_0$$.ctor*/ func_0x0154719c(lVar17,0);
      if (lVar17 == 0) {
        func_0x00f78af4();
        goto code_r0x014784dc;
      }
      *(long *)(lVar17 + 0x50) = lVar23;
      *(undefined8 *)(lVar17 + 0x40) = uStack_1d0;
      *(undefined8 *)(lVar17 + 0x28) = uStack_1e8;
      *(undefined8 *)(lVar17 + 0x20) = uStack_1f0;
      *(undefined8 *)(lVar17 + 0x38) = uStack_1d8;
      *(undefined8 *)(lVar17 + 0x30) = uStack_1e0;
      *(undefined8 *)(lVar17 + 0x18) = uStack_1f8;
      *(undefined8 *)(lVar17 + 0x10) = uStack_200;
      uStack_260 = *(undefined8 *)(lVar17 + 0x18);
      uVar13 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ lRam0000000003d24e08,&uStack_260);
      uVar15 = /*Atlas.StringID$$Equals*/ func_0x015057f8(auStack_1c0,uVar13,0);
    } while ((uVar15 & 1) == 0);
    if (*(long *)(lVar23 + 0x60) == 0) {
      func_0x00f78af4();
code_r0x014784dc:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x14784e0);
      (*pcVar5)();
    }
    puVar2 = (undefined8 *)(lVar17 + 0x10);
    puVar3 = (undefined8 *)(lVar17 + 0x48);
    uVar15 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(lVar23 + 0x60),*puVar2,puVar3,0);
    if ((uVar15 & 1) == 0) goto code_r0x01478494;
    uVar13 = *(undefined8 *)(lVar23 + 0xa0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar15 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar13,0,0);
    if ((uVar15 & 1) != 0) {
      if (*(long *)(lVar23 + 0xa0) == 0) {
        func_0x00f78af4();
        goto code_r0x014784dc;
      }
      uStack_218 = *(undefined8 *)(*(long *)(lVar23 + 0xa0) + 0x18);
      uStack_260 = *puVar2;
      uVar13 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ lRam0000000003d24e08,&uStack_260);
      uVar15 = /*Atlas.StringID$$Equals*/ func_0x015057f8(&uStack_218,uVar13,0);
      if ((uVar15 & 1) != 0) {
        uStack_298 = *(undefined8 *)(lVar17 + 0x18);
        uStack_2a0 = *puVar2;
        uStack_288 = *(undefined8 *)(lVar17 + 0x28);
        uStack_290 = *(undefined8 *)(lVar17 + 0x20);
        uStack_278 = *(undefined8 *)(lVar17 + 0x38);
        uStack_280 = *(undefined8 *)(lVar17 + 0x30);
        uStack_270 = *(undefined8 *)(lVar17 + 0x40);
        /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$CallReactions*/ func_0x01478e78(lVar23,*(undefined8 *)(lVar23 + 0x38),&uStack_2a0);
        goto code_r0x01478328;
      }
    }
    uVar24 = *puVar3;
    uVar13 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
    /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(uVar13,lVar17,uRam0000000003d62270,0);
    /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$AddBaseListener*/ func_0x01478f10(lVar23,uVar24,uVar13,*puVar3);
    goto code_r0x01478328;
  }
  func_0x00f78af4();
  if (extraout_w1_00 == 1) {
    plVar14 = (long *)___cxa_begin_catch();
    lVar23 = *plVar14;
    ___cxa_end_catch();
    plVar14 = (long *)/*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_210,uRam0000000003d33318);
    if (lVar23 == 0) {
      return plVar14;
    }
    func_0x00f78ac0(lVar23,0);
  }
  lVar23 = __Unwind_Resume();
  puStack_2a8 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__EndSection;
  lVar17 = 0x3eb4000;
  ppppuStack_2b0 = &pppuStack_160;
  if ((bRam0000000003eb48a3 & 1) == 0) {
    func_0x00f78a20(0x3d33318);
    func_0x00f78a20(0x3d33320);
    func_0x00f78a20(0x3d33328);
    func_0x00f78a20(0x3d3cd70);
    func_0x00f78a20(0x3d24e08);
    bRam0000000003eb48a3 = 1;
  }
  lStack_338 = 0;
  uStack_340 = 0;
  if ((*(long *)(lVar23 + 0x40) != 0) &&
     (lVar22 = *(long *)(*(long *)(lVar23 + 0x40) + 0x30), lVar22 != 0)) {
    plVar18 = (long *)0x3d24e08;
    /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090(&uStack_390,lVar22,uRam0000000003d3cd70);
    uStack_308 = uStack_368;
    uStack_310 = uStack_370;
    uStack_2f8 = uStack_358;
    uStack_300 = uStack_360;
    uStack_2f0 = uStack_350;
    uStack_328 = uStack_388;
    uStack_330 = uStack_390;
    uStack_318 = uStack_378;
    uStack_320 = uStack_380;
code_r0x01478624:
    do {
      uVar15 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8(&uStack_330,uRam0000000003d33320);
      uVar13 = uStack_320;
      if ((uVar15 & 1) == 0) goto code_r0x01478690;
      uStack_390 = uStack_318;
      uVar24 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ lRam0000000003d24e08,&uStack_390);
      uVar15 = /*Atlas.StringID$$Equals*/ func_0x015057f8(lVar23 + 0xa8,uVar24,0);
      if ((uVar15 & 1) != 0) {
        if (*(long *)(lVar23 + 0x60) == 0) {
          func_0x00f78af4();
        }
        else {
          uVar15 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(lVar23 + 0x60),uVar13,&lStack_338,0);
          if ((uVar15 & 1) == 0) {
            iStack_348 = 0x86;
            goto code_r0x0147869c;
          }
          if (lStack_338 != 0) {
            Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RemoveBaseListener
                      (lVar23,*(undefined8 *)(lStack_338 + 0x18));
            goto code_r0x01478624;
          }
          func_0x00f78af4();
        }
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1478708);
        (*pcVar5)();
      }
    } while( true );
  }
  func_0x00f78af4();
  if (extraout_w1_01 == 1) {
    plVar14 = (long *)___cxa_begin_catch();
    lVar17 = *plVar14;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_330,*unaff_x23);
    if (lVar17 == 0) {
code_r0x014786b8:
      plVar14 = (long *)*plVar18;
      if (((*(ushort *)((long)plVar14 + 0x132) >> 10 & 1) != 0) && ((int)plVar14[0x1c] == 0)) {
        func_0x00f78ad0();
        plVar14 = (long *)*plVar18;
      }
      *(undefined8 *)(lVar23 + 0xa8) = *(undefined8 *)plVar14[0x17];
      return plVar14;
    }
    func_0x00f78ac0(lVar17,0);
  }
  lVar22 = __Unwind_Resume();
  puStack_398 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetActiveSection;
  lStack_3b0 = lVar17;
  lStack_3a8 = lVar23;
  pppppuStack_3a0 = &ppppuStack_2b0;
  plVar14 = (long *)/*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$GetSection*/ func_0x01478c3c(&uStack_410,lVar22,*(undefined8 *)(lVar22 + 0xa8));
  extraout_x8[5] = uStack_3e8;
  extraout_x8[4] = uStack_3f0;
  extraout_x8[7] = uStack_3d8;
  extraout_x8[6] = uStack_3e0;
  extraout_x8[9] = uStack_3c8;
  extraout_x8[8] = uStack_3d0;
  extraout_x8[0xb] = uStack_3b8;
  extraout_x8[10] = uStack_3c0;
  extraout_x8[1] = uStack_408;
  *extraout_x8 = uStack_410;
  extraout_x8[3] = uStack_3f8;
  extraout_x8[2] = uStack_400;
  return plVar14;
code_r0x01478690:
  iStack_348 = 0x7b;
code_r0x0147869c:
  plVar14 = (long *)/*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_330,uRam0000000003d33318);
  if (iStack_348 == 0x86) {
    return plVar14;
  }
  goto code_r0x014786b8;
code_r0x015371d4:
  puVar29 = &UNK_015371e8;
code_r0x025e0480:
  lVar17 = lRam0000000003d3e190;
  *(undefined8 *)(puVar8 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar8 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar8 + -0x40) = unaff_x24;
  *(undefined8 **)(puVar8 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar8 + -0x30) = uVar13;
  *(long *)(puVar8 + -0x28) = lVar23;
  *(ulong *)(puVar8 + -0x20) = uVar15;
  *(long **)(puVar8 + -0x18) = plVar14;
  *(undefined1 ***)(puVar8 + -0x10) = ppuVar27;
  *(undefined **)(puVar8 + -8) = puVar29;
  if ((bRam0000000003eb8330 & 1) == 0) {
    func_0x00f78a20(0x3d3b350);
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    func_0x00f78a20(0x3d6bd58);
    bRam0000000003eb8330 = 1;
  }
  if (lVar22 != 0) {
    plVar14 = (long *)(*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar17 + 0x18) + 0xc0) + 8))
                                (lVar22,/*STR('DismissAllQueuedAndShowing')*/ uRam0000000003d6bd58);
    if (*(long *)(lVar22 + 0x40) != 0) {
      lVar23 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar17 + 0x18) + 0xc0) + 0x10))
                         (lVar22);
      if ((lVar23 == 0) || (*(long *)(lVar23 + 0x68) == 0)) goto code_r0x025e05fc;
      plVar14 = (long *)/*ModalBehaviour$$Dismiss*/ func_0x01496e90(*(long *)(lVar23 + 0x68),1,0);
      *(undefined8 *)(lVar22 + 0x40) = 0;
    }
    lVar23 = *(long *)(lVar22 + 0x38);
    if (lVar23 != 0) {
      if (*(int *)(lVar23 + 0x18) + -1 < 0) {
        return plVar14;
      }
      iVar11 = *(int *)(lVar23 + 0x18) + -2;
      plVar14 = (long *)0x0;
      do {
        uVar12 = iVar11 + 1;
        if (uVar12 < *(uint *)(lVar23 + 0x18)) {
          lVar1 = *(long *)(lVar23 + 0x10) + (ulong)uVar12 * 8;
          lVar17 = lVar23;
        }
        else {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          lVar17 = *(long *)(lVar22 + 0x38);
          if (lVar17 == 0) break;
          lVar1 = *(long *)(lVar23 + 0x10) + (ulong)uVar12 * 8;
        }
        lVar23 = *(long *)(lVar1 + 0x20);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(lVar17,uVar12,uRam0000000003d3b350);
        if (lVar23 == 0) break;
        plVar26 = *(long **)(lVar23 + 0x18);
        plVar18 = plVar14;
        if (plVar26 != (long *)0x0) {
          if (plVar26 == (long *)0x0) break;
          plVar14 = (long *)/*UnityEngine.Events.UnityAction$$Invoke*/ func_0x03277c60(plVar26,0);
          plVar18 = plVar26;
        }
        if (iVar11 < 0) {
          return plVar14;
        }
        lVar23 = *(long *)(lVar22 + 0x38);
        iVar11 = iVar11 + -1;
        plVar14 = plVar18;
      } while (lVar23 != 0);
    }
  }
code_r0x025e05fc:
  plVar14 = (long *)func_0x00f78af4();
  return plVar14;
}



// ============================================================
// RVA: 0x1477ddc | Atlas.Gameplay.FTUE.BaseLayerFTUEManager.RespawnPlayerIfBackToStartLine
// ============================================================

/* WARNING: Possible PIC construction at 0x015858fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0153734c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015371e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01537350) */
/* WARNING: Removing unreachable block (ram,0x01537358) */
/* WARNING: Removing unreachable block (ram,0x01537364) */
/* WARNING: Removing unreachable block (ram,0x0153736c) */
/* WARNING: Removing unreachable block (ram,0x01537394) */
/* WARNING: Removing unreachable block (ram,0x015373a0) */
/* WARNING: Removing unreachable block (ram,0x025dfbac) */
/* WARNING: Removing unreachable block (ram,0x025dfbd4) */
/* WARNING: Removing unreachable block (ram,0x025dfc00) */
/* WARNING: Removing unreachable block (ram,0x025dfc04) */
/* WARNING: Removing unreachable block (ram,0x025dfc30) */
/* WARNING: Removing unreachable block (ram,0x025dfc54) */
/* WARNING: Removing unreachable block (ram,0x025dfc70) */
/* WARNING: Removing unreachable block (ram,0x025dfc80) */
/* WARNING: Removing unreachable block (ram,0x025dfcfc) */
/* WARNING: Removing unreachable block (ram,0x025dfd14) */
/* WARNING: Removing unreachable block (ram,0x025dfd88) */
/* WARNING: Removing unreachable block (ram,0x025dfdb8) */
/* WARNING: Removing unreachable block (ram,0x025dfdd8) */
/* WARNING: Removing unreachable block (ram,0x025dfde0) */
/* WARNING: Removing unreachable block (ram,0x025dfdec) */
/* WARNING: Removing unreachable block (ram,0x025dfdf8) */
/* WARNING: Removing unreachable block (ram,0x025dfe04) */
/* WARNING: Removing unreachable block (ram,0x025dfe0c) */
/* WARNING: Removing unreachable block (ram,0x025dfe1c) */
/* WARNING: Removing unreachable block (ram,0x025dfe24) */
/* WARNING: Removing unreachable block (ram,0x025dfe30) */
/* WARNING: Removing unreachable block (ram,0x025dfe34) */
/* WARNING: Removing unreachable block (ram,0x025dfe44) */
/* WARNING: Removing unreachable block (ram,0x025dfe48) */
/* WARNING: Removing unreachable block (ram,0x025dfe4c) */
/* WARNING: Removing unreachable block (ram,0x025dfd34) */
/* WARNING: Removing unreachable block (ram,0x025dfd58) */
/* WARNING: Removing unreachable block (ram,0x025dfd74) */
/* WARNING: Removing unreachable block (ram,0x025dfc88) */
/* WARNING: Removing unreachable block (ram,0x025dfcb4) */
/* WARNING: Removing unreachable block (ram,0x025dfce0) */
/* WARNING: Removing unreachable block (ram,0x025dfcd0) */
/* WARNING: Removing unreachable block (ram,0x01585900) */
/* WARNING: Removing unreachable block (ram,0x01585908) */
/* WARNING: Removing unreachable block (ram,0x015371e8) */
/* WARNING: Removing unreachable block (ram,0x015371f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RespawnPlayerIfBackToStartLine
                 (ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  undefined1 ***pppuVar7;
  undefined1 *puVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  float *pfVar18;
  undefined8 uVar19;
  int extraout_w1;
  int extraout_w1_00;
  ulong extraout_x1;
  byte bVar20;
  undefined8 *extraout_x8;
  long lVar21;
  undefined8 uVar22;
  undefined8 unaff_x21;
  long *plVar23;
  undefined8 unaff_x22;
  undefined8 *unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 **ppuVar24;
  undefined1 ***pppuVar25;
  undefined *puVar26;
  float fVar27;
  ulong unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar28 [16];
  undefined1 auVar29 [12];
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  long lStack_360;
  long lStack_358;
  undefined1 *****pppppuStack_350;
  undefined *puStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  int iStack_2f8;
  undefined4 uStack_2f0;
  long lStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined1 ****ppppuStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
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
  undefined8 auStack_170 [2];
  undefined1 ***pppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  ulong uStack_f0;
  long *plStack_e8;
  undefined1 **ppuStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  undefined8 auStack_80 [10];
  undefined8 uStack_30;
  
  pppuVar7 = (undefined1 ***)auStack_80;
  uVar22 = 0x3eb4000;
  if ((bRam0000000003eb48ab & 1) == 0) {
    func_0x00f78a20(0x3d24e08);
    func_0x00f78a20(0x3d712d0);
    bRam0000000003eb48ab = 1;
  }
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (lVar13 = *(long *)(*(long *)(param_1 + 0x38) + 0x90), lVar13 != 0)) {
    iVar11 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(lVar13,0);
    plVar14 = (long *)(ulong)*(uint *)(param_1 + 0x94);
    if ((int)*(uint *)(param_1 + 0x94) < iVar11) {
      if ((*(long *)(param_1 + 0x38) == 0) ||
         (lVar13 = *(long *)(*(long *)(param_1 + 0x38) + 0x90), lVar13 == 0)) goto LAB_01477f54;
      plVar14 = (long *)/*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(lVar13,0);
    }
    *(int *)(param_1 + 0x94) = (int)plVar14;
    if ((int)plVar14 < 1) {
      return plVar14;
    }
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (lVar13 = *(long *)(*(long *)(param_1 + 0x38) + 0x90), lVar13 != 0)) {
      plVar14 = (long *)/*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(lVar13,0);
      if (0 < (int)plVar14) {
        return plVar14;
      }
      if ((*(long *)(param_1 + 0x38) != 0) &&
         (lVar13 = *(long *)(*(long *)(param_1 + 0x38) + 0x90), lVar13 != 0)) {
        if (_UNK_033f82cc <= *(float *)(lVar13 + 0x70)) {
          return plVar14;
        }
        *(undefined4 *)(param_1 + 0x94) = 0;
        /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$GetSection*/ func_0x01478c3c(auStack_80,param_1,*(undefined8 *)(param_1 + 0xa8));
        if (*(long *)(param_1 + 0x40) != 0) {
          auStack_80[0] = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x38);
          uVar15 = /*Atlas.StringID$$get_IsValid*/ func_0x01505738(auStack_80,0);
          if ((uVar15 & 1) == 0) {
            auStack_80[0] = uStack_30;
          }
          iVar11 = /*Atlas.StringID$$get_IsValid*/ func_0x01505738(auStack_80,0);
          if (iVar11 == 0) {
            if (((*(ushort *)(/*Atlas.StringID_TypeInfo*/ lRam0000000003d24e08 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.StringID_TypeInfo*/ lRam0000000003d24e08 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            auStack_80[0] = /*Atlas.StringID$$op_Implicit*/ func_0x01505760(/*STR('PlayerFailureSpawn')*/ uRam0000000003d712d0,0);
          }
          plVar14 = (long *)/*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$RespawnHumanPlayerAtLocator*/ func_0x014787a0(param_1,auStack_80[0]);
          return plVar14;
        }
      }
    }
  }
LAB_01477f54:
  lVar13 = func_0x00f78af4();
  puStack_88 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__SetInputsEnabled;
  ppuStack_90 = (undefined1 **)&stack0xfffffffffffffff0;
  if (*(long *)(lVar13 + 0x70) != 0) {
    if (*(char *)(*(long *)(lVar13 + 0x70) + 0x20) == '\0') {
      if (*(long *)(lVar13 + 0x80) != 0) {
        if (*(char *)(*(long *)(lVar13 + 0x80) + 0x38) != '\0') goto code_r0x01477f80;
        lVar13 = *(long *)(lVar13 + 0x58);
        if (lVar13 == 0) goto code_r0x01477fa8;
        bVar20 = 1;
        goto code_r0x01477f8c;
      }
    }
    else {
code_r0x01477f80:
      lVar13 = *(long *)(lVar13 + 0x58);
      if (lVar13 != 0) {
        bVar20 = 0;
code_r0x01477f8c:
        iVar11 = 0;
        puStack_88 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__SetInputsEnabled;
        lVar16 = *(long *)(lVar13 + 200);
        if (lVar16 == 0) {
          plVar17 = (long *)func_0x00f78af4();
          puStack_b0 = (undefined1 *)0x3eb4000;
          pcStack_98 = Atlas_UI_Screens_GameInProgressScreen__OnInputEnabledForLayer;
          plVar14 = plVar17;
          puStack_a8 = (undefined *)param_1;
          puStack_a0 = (undefined1 *)&ppuStack_90;
          if ((bRam0000000003eb522d & 1) == 0) {
            puStack_a0 = (undefined1 *)&ppuStack_90;
            func_0x00f78a20(0x3d23990);
            plVar14 = (long *)func_0x00f78a20(0x3d41080);
            bRam0000000003eb522d = 1;
          }
          if ((int)plVar17[9] != iVar11) {
            return plVar14;
          }
          lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(plVar17,uRam0000000003d41080);
          if (lVar13 != 0) {
            Atlas_UI_Screens_GameInProgressScreenBehaviour__SetInputEnabled(lVar13,param_4,0);
            uVar22 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(plVar17);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            plVar14 = (long *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar22,0);
            if ((int)plVar14 == 0) {
              return plVar14;
            }
            lVar13 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(plVar17);
            if (lVar13 != 0) {
              lVar13 = *(long *)(lVar13 + 0xa8);
              if (lVar13 != 0) {
                if (pcRam0000000003ebe9d8 == (code *)0x0) {
                  pcRam0000000003ebe9d8 =
                       (code *)func_0x00f789d4("UnityEngine.Behaviour::set_enabled(System.Boolean)")
                  ;
                }
                    /* WARNING: Could not recover jumptable at 0x0321a97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                plVar14 = (long *)(*pcRam0000000003ebe9d8)(lVar13,param_4);
                return plVar14;
              }
              plVar14 = (long *)func_0x00f78af4(0,param_4,0);
              if ((bRam0000000003ebf1b8 & 1) == 0) {
                func_0x00f78a20(0x3d23990,0);
                bRam0000000003ebf1b8 = 1;
              }
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              return plVar14;
            }
          }
          pfVar18 = (float *)func_0x00f78af4();
          fVar27 = *pfVar18;
          bVar9 = false;
          bVar10 = true;
          if (0.0 <= fVar27) {
            bVar9 = false;
            bVar10 = true;
            if (!NAN(fVar27)) {
              bVar9 = fVar27 == 1.0;
              bVar10 = 1.0 <= fVar27;
            }
          }
          if (!bVar10 || bVar9) {
            fVar27 = pfVar18[1];
            bVar9 = false;
            bVar10 = true;
            if (0.0 <= fVar27) {
              bVar9 = false;
              bVar10 = true;
              if (!NAN(fVar27)) {
                bVar9 = fVar27 == 1.0;
                bVar10 = 1.0 <= fVar27;
              }
            }
            if (!bVar10 || bVar9) {
              return (long *)(ulong)(0.0 <= pfVar18[2]);
            }
          }
          return (long *)0x0;
        }
        bVar20 = bVar20 ^ 1;
        pppuVar25 = &ppuStack_90;
        puStack_88 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__SetInputsEnabled;
        lVar21 = *(long *)(lVar16 + 0x38);
        if (lVar21 == 0) {
          func_0x00f78af4();
code_r0x0164b040:
          uVar19 = func_0x00f78b24();
          auVar29 = func_0x00f78ac0(uVar19,0);
          lVar16 = auVar29._0_8_;
          pcStack_98 = (code *)&Core_Input_InputManager__SetScreenLayerInputExclusive;
          lVar13 = *(long *)(lVar16 + 0x38);
          if (lVar13 == 0) {
            puStack_a0 = (undefined1 *)&ppuStack_90;
            func_0x00f78af4();
          }
          else {
            puStack_a0 = (undefined1 *)&ppuStack_90;
            if (auVar29._8_4_ < *(uint *)(lVar13 + 0x18)) {
              *(byte *)(lVar13 + (long)(int)auVar29._8_4_ * 0x10 + 0x29) = bVar20;
              pppuVar7 = &ppuStack_90;
              puVar26 = &Core_Input_InputManager__SetScreenLayerInputExclusive;
              puStack_a0 = (undefined1 *)&ppuStack_90;
              goto Core_Input_InputManager__ReselectTopmostActiveLayer;
            }
          }
          uVar22 = func_0x00f78b24();
          func_0x00f78ac0(uVar22,0);
          pppuVar7 = (undefined1 ***)&stack0xffffffffffffff30;
          puStack_a8 = &Core_Input_InputManager__SetMultiTouchEnabled;
          pppuVar25 = (undefined1 ***)&puStack_b0;
          uVar22 = 0x3eb5000;
          unaff_x21 = 0x3d216c0;
          puStack_b0 = (undefined1 *)&puStack_a0;
          if ((bRam0000000003eb5795 & 1) == 0) {
            puStack_b0 = (undefined1 *)&puStack_a0;
            func_0x00f78a20(0x3d216c0);
            func_0x00f78a20(0x3d22880);
            bRam0000000003eb5795 = 1;
          }
          if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar13 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
          if (lVar13 == 0) {
code_r0x0164b158:
            func_0x00f78af4();
          }
          else {
            plVar14 = *(long **)(lVar13 + 0x20);
            if (plVar14 == (long *)0x0) {
code_r0x0164b130:
              if (plVar14 != (long *)0x0) {
                *(uint *)((long)plVar14 + 0xbc) = (uint)((extraout_x1 & 1) == 0);
                return plVar14;
              }
              goto code_r0x0164b158;
            }
            if ((*(byte *)(/*UnityEngine.InputSystem.UI.InputSystemUIInputModule_TypeInfo*/ lRam0000000003d22880 + 300) <= *(byte *)(*plVar14 + 300)) &&
               (*(long *)(*(long *)(*plVar14 + 200) +
                          (ulong)*(byte *)(/*UnityEngine.InputSystem.UI.InputSystemUIInputModule_TypeInfo*/ lRam0000000003d22880 + 300) * 8 + -8) ==
                /*UnityEngine.InputSystem.UI.InputSystemUIInputModule_TypeInfo*/ lRam0000000003d22880)) goto code_r0x0164b130;
          }
          puVar26 = &Core_Input_InputManager__SetActiveLayer;
          auVar29 = func_0x00f78e5c();
          lVar16 = auVar29._0_8_;
          *(int *)(lVar16 + 0x40) = auVar29._8_4_;
          param_1 = extraout_x1;
        }
        else {
          if (*(uint *)(lVar21 + 0x18) <= *(uint *)(lVar13 + 0x48)) goto code_r0x0164b040;
          *(byte *)(lVar21 + (long)(int)*(uint *)(lVar13 + 0x48) * 0x10 + 0x28) = bVar20;
          pppuVar25 = (undefined1 ***)&stack0xfffffffffffffff0;
          puVar26 = puStack_88;
          puStack_88 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__SetInputsEnabled;
        }
Core_Input_InputManager__ReselectTopmostActiveLayer:
        *(undefined8 *)((long)pppuVar7 + -0x30) = unaff_x22;
        *(undefined8 *)((long)pppuVar7 + -0x28) = unaff_x21;
        *(undefined8 *)((long)pppuVar7 + -0x20) = uVar22;
        *(ulong *)((long)pppuVar7 + -0x18) = param_1;
        *(undefined1 ****)((long)pppuVar7 + -0x10) = pppuVar25;
        *(undefined **)((long)pppuVar7 + -8) = puVar26;
        if ((bRam0000000003eb5797 & 1) == 0) {
          func_0x00f78a20(0x3d216c0);
          func_0x00f78a20(0x3d22848);
          func_0x00f78a20(0x3d232c0);
          bRam0000000003eb5797 = 1;
        }
        uVar4 = *(undefined4 *)(lVar16 + 0x40);
        uVar22 = /*Core.Input.InputManager$$FindTopmostExclusiveLayer*/ func_0x0164a6a0(lVar16);
        if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar14 = (long *)/*System.Math$$Max*/ func_0x02b01f40(uVar4,uVar22,0);
        uVar12 = (uint)plVar14;
        if (uVar12 == 0xffffffff) {
          return plVar14;
        }
        lVar13 = *(long *)(lVar16 + 0x38);
        if (lVar13 != 0) {
          if (*(uint *)(lVar13 + 0x18) <= uVar12) goto code_r0x0164a30c;
          if (*(char *)(lVar13 + (long)(int)uVar12 * 0x10 + 0x28) != '\0') {
            return plVar14;
          }
          if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) != 0) {
            *(undefined1 *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x29) = 1;
            if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            lVar13 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
            lVar16 = *(long *)(lVar16 + 0x38);
            if (lVar16 != 0) {
              if (*(uint *)(lVar16 + 0x18) <= uVar12) goto code_r0x0164a30c;
              if (lVar13 != 0) {
                plVar14 = (long *)/*UnityEngine.EventSystems.EventSystem$$SetSelectedGameObject*/ func_0x032b7cb0(lVar13,*(undefined8 *)
                                                          (lVar16 + (long)(int)uVar12 * 0x10 + 0x20)
                                                  ,0);
                if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) != 0) {
                  *(undefined1 *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x29) = 0;
                  return plVar14;
                }
              }
            }
          }
        }
        func_0x00f78af4();
code_r0x0164a30c:
        uVar22 = func_0x00f78b24();
        plVar14 = (long *)func_0x00f78ac0(uVar22,0);
        return plVar14;
      }
    }
  }
code_r0x01477fa8:
  plVar14 = (long *)func_0x00f78af4();
  puStack_b0 = (undefined1 *)0x3eb4000;
  pcStack_98 = (code *)&Atlas_Gameplay_FTUE_BaseLayerFTUEManager__OnExitInProgressScreen;
  puStack_a8 = (undefined *)param_1;
  puStack_a0 = (undefined1 *)&ppuStack_90;
  if ((bRam0000000003eb489c & 1) == 0) {
    puStack_a0 = (undefined1 *)&ppuStack_90;
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d527c0);
    bRam0000000003eb489c = 1;
  }
  uVar15 = plVar14[3];
  lVar13 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
  /*System.Action$$.ctor*/ func_0x02924c80(lVar13,plVar14,*(undefined8 *)(*plVar14 + 0x1c0),0);
  if (uVar15 != 0) {
    plVar17 = (long *)Atlas_Contexts_GameContextBaseInProgressState__remove_OnInProgressScreenExited
                                (uVar15,lVar13,0);
    if (plVar14[0xb] == 0) {
      return plVar17;
    }
    if (plVar14[0xe] != 0) {
      /*Atlas.Gameplay.FTUE.BaseLayerPauseManager$$OnAfterExitGameContextScreen*/ func_0x01536404(plVar14[0xe],0);
      if (plVar14[0x10] != 0) {
        /*Atlas.Gameplay.FTUE.BaseLayerSequenceManager$$OnAfterExitGameContextScreen*/ func_0x01536b90(plVar14[0x10],0);
        lVar16 = plVar14[0xe];
        lVar13 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
        /*System.Action$$.ctor*/ func_0x02924c80(lVar13,plVar14,uRam0000000003d527c0,0);
        uVar15 = 0;
        unaff_x23 = (undefined8 *)0x3d527c0;
        if (lVar16 != 0) {
          /*Atlas.Gameplay.FTUE.BaseLayerPauseManager$$remove_OnAfterStartPauseFinish*/ func_0x0153610c(lVar16,lVar13,0);
          lVar16 = plVar14[0xe];
          lVar13 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
          /*System.Action$$.ctor*/ func_0x02924c80(lVar13,plVar14,uRam0000000003d527c0,0);
          uVar15 = 0;
          if (lVar16 != 0) {
            /*Atlas.Gameplay.FTUE.BaseLayerPauseManager$$remove_OnAfterUnPauseFinish*/ func_0x01535fcc(lVar16,lVar13,0);
            lVar16 = plVar14[0x10];
            lVar13 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
            /*System.Action$$.ctor*/ func_0x02924c80(lVar13,plVar14,uRam0000000003d527c0,0);
            uVar15 = 0;
            unaff_x23 = (undefined8 *)0x3d527c0;
            if (lVar16 != 0) {
              /*Atlas.Gameplay.FTUE.BaseLayerSequenceManager$$remove_OnStartPlaySequence*/ func_0x0153659c(lVar16,lVar13,0);
              lVar16 = plVar14[0x10];
              lVar13 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
              /*System.Action$$.ctor*/ func_0x02924c80(lVar13,plVar14,uRam0000000003d527c0,0);
              uVar15 = 0;
              if (lVar16 != 0) {
                plVar17 = (long *)/*Atlas.Gameplay.FTUE.BaseLayerSequenceManager$$remove_OnResetSequenceStopped*/ func_0x015366dc(lVar16,lVar13,0);
                plVar14[0xb] = 0;
                return plVar17;
              }
            }
          }
        }
      }
    }
  }
  lVar16 = func_0x00f78af4();
  uStack_100 = 0x3d1fa78;
  puStack_d8 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__OnExitInProgressState;
  plVar17 = (long *)0x3d527a8;
  lStack_f8 = lVar13;
  uStack_f0 = uVar15;
  plStack_e8 = plVar14;
  ppuStack_e0 = &puStack_a0;
  if ((bRam0000000003eb489d & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d527a8);
    bRam0000000003eb489d = 1;
  }
  lVar13 = *(long *)(lVar16 + 0x18);
  uVar22 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
  /*System.Action$$.ctor*/ func_0x02924c80(uVar22,lVar16,uRam0000000003d527a8,0);
  if (lVar13 != 0) {
    /*Core.StateManagement.State$$remove_OnPostExitCallback*/ func_0x02b94d48(lVar13,uVar22,0);
    if (*(long *)(lVar16 + 0x70) != 0) {
      /*Atlas.Gameplay.FTUE.BaseLayerPauseManager$$OnExitInProgressState*/ func_0x015364e4(*(long *)(lVar16 + 0x70),0);
      if (*(ulong *)(lVar16 + 0x78) != 0) {
        auVar28._8_8_ = 0;
        auVar28._0_8_ = *(ulong *)(lVar16 + 0x78);
        puVar6 = &stack0xffffffffffffff30;
        plVar14 = plStack_e8;
        uVar15 = uStack_f0;
        lVar13 = lStack_f8;
        uVar22 = uStack_100;
        ppuVar24 = ppuStack_e0;
        puVar26 = puStack_d8;
        do {
          lVar16 = auVar28._0_8_;
          *(ulong *)(puVar6 + -0x20) = uVar15;
          *(long **)(puVar6 + -0x18) = plVar14;
          *(undefined1 ***)(puVar6 + -0x10) = ppuVar24;
          *(undefined **)(puVar6 + -8) = puVar26;
          if ((bRam0000000003eb4ed9 & 1) == 0) {
            func_0x00f78a20(0x3d3e190,auVar28._8_8_);
            func_0x00f78a20(0x3d75d18);
            bRam0000000003eb4ed9 = 1;
          }
          *(undefined8 *)(lVar16 + 0x28) = 0;
          *(undefined8 *)(lVar16 + 0x30) = 0xbf800000;
          *(undefined8 *)(lVar16 + 0x18) = 0;
          *(undefined8 *)(lVar16 + 0x20) = 0;
          lVar21 = *(long *)(lVar16 + 0x10);
          if (lVar21 != 0) {
            ppuVar24 = *(undefined1 ***)(puVar6 + -0x10);
            puVar26 = *(undefined **)(puVar6 + -8);
            uVar15 = *(ulong *)(puVar6 + -0x20);
            puVar8 = puVar6;
            plVar14 = *(long **)(puVar6 + -0x18);
            goto code_r0x025e0480;
          }
          plVar17 = (long *)func_0x00f78af4();
          if (*(float *)(plVar17 + 6) <= 0.0) {
            return plVar17;
          }
          puVar8 = puVar6 + -0x50;
          *(undefined8 *)(puVar6 + -0x50) = uVar22;
          *(long *)(puVar6 + -0x48) = lVar13;
          *(undefined8 *)(puVar6 + -0x40) = 0x3eb4000;
          *(long *)(puVar6 + -0x38) = lVar16;
          *(undefined1 **)(puVar6 + -0x30) = puVar6 + -0x10;
          *(undefined **)(puVar6 + -0x28) =
               &Atlas_Gameplay_FTUE_BaseLayerToolTipManager__OnInputFamilyChanged;
          ppuVar24 = (undefined1 **)(puVar6 + -0x30);
          plVar14 = plVar17;
          if ((bRam0000000003eb4ed8 & 1) == 0) {
            func_0x00f78a20(0x3d3cd60);
            func_0x00f78a20(0x3d3cd68);
            func_0x00f78a20(0x3d3e188);
            func_0x00f78a20(0x3d3e190);
            plVar14 = (long *)func_0x00f78a20(0x3d6df50);
            bRam0000000003eb4ed8 = 1;
          }
          uVar12 = *(int *)((long)plVar17 + 0x34) - 1;
          uVar15 = (ulong)uVar12;
          if ((int)uVar12 < 0) {
            return plVar14;
          }
          if (plVar17[3] != 0) {
            if (*(int *)(plVar17[3] + 0x18) <= (int)uVar12) {
              return plVar14;
            }
            lVar21 = plVar17[2];
            if (lVar21 != 0) {
              puVar26 = &UNK_01537350;
              plVar14 = plVar17;
              goto code_r0x025e0480;
            }
          }
          auVar28 = func_0x00f78af4();
          lVar16 = auVar28._8_8_;
          plVar14 = auVar28._0_8_;
          *(undefined8 *)(puVar6 + -0x80) = uVar22;
          *(long *)(puVar6 + -0x78) = lVar13;
          *(ulong *)(puVar6 + -0x70) = uVar15;
          *(long **)(puVar6 + -0x68) = plVar17;
          *(undefined1 ***)(puVar6 + -0x60) = ppuVar24;
          *(undefined **)(puVar6 + -0x58) =
               &Atlas_Gameplay_FTUE_BaseLayerToolTipManager__SetCurrentToolTipSequence;
          plVar17 = plVar14;
          if ((bRam0000000003eb4ed5 & 1) == 0) {
            plVar17 = (long *)func_0x00f78a20(0x3d3cd60);
            bRam0000000003eb4ed5 = 1;
          }
          if ((lVar16 == 0) || (*(int *)(lVar16 + 0x18) == 0)) {
            return plVar17;
          }
          plVar14[3] = lVar16;
          *(undefined4 *)((long)plVar14 + 0x34) = 0;
          uVar22 = *(undefined8 *)(puVar6 + -0x80);
          lVar13 = *(long *)(puVar6 + -0x78);
          puVar8 = puVar6 + -0x90;
          *(undefined8 *)(puVar6 + -0x90) = unaff_d9;
          *(ulong *)(puVar6 + -0x88) = unaff_d8;
          *(undefined8 *)(puVar6 + -0x80) = uVar22;
          *(long *)(puVar6 + -0x78) = lVar13;
          *(undefined8 *)(puVar6 + -0x70) = *(undefined8 *)(puVar6 + -0x70);
          *(undefined8 *)(puVar6 + -0x68) = *(undefined8 *)(puVar6 + -0x68);
          *(undefined8 *)(puVar6 + -0x60) = *(undefined8 *)(puVar6 + -0x60);
          *(undefined8 *)(puVar6 + -0x58) = *(undefined8 *)(puVar6 + -0x58);
          ppuVar24 = (undefined1 **)(puVar6 + -0x60);
          plVar17 = plVar14;
          if ((bRam0000000003eb4ed6 & 1) == 0) {
            func_0x00f78a20(0x3d3cd60);
            func_0x00f78a20(0x3d3cd68);
            func_0x00f78a20(0x3d3e188);
            func_0x00f78a20(0x3d3e190);
            plVar17 = (long *)func_0x00f78a20(0x3d717f0);
            bRam0000000003eb4ed6 = 1;
          }
          uVar15 = plVar14[3];
          if (uVar15 != 0) {
            uVar12 = *(uint *)((long)plVar14 + 0x34);
            lVar13 = (long)(int)uVar12;
            if ((int)*(uint *)(uVar15 + 0x18) <= (int)uVar12) {
              return plVar17;
            }
            if (*(uint *)(uVar15 + 0x18) <= uVar12) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar21 = *(long *)(uVar15 + 0x10) + lVar13 * 0x18;
            lVar16 = *(long *)(lVar21 + 0x28);
            unaff_d8 = (ulong)*(uint *)(lVar21 + 0x30);
            plVar14[5] = *(long *)(lVar21 + 0x20);
            if (lVar16 != 0) {
              plVar14[4] = *(long *)(lVar16 + 0x28);
              uVar15 = /*Atlas.UI.ToolTipManager.ToolTipData$$Copy*/ func_0x0156b4ec(lVar16,0);
              uVar19 = /*Atlas.Gameplay.FTUE.BaseLayerToolTipManager$$GetCurrentToolTipLocalisationKey*/ func_0x0153744c(plVar14);
              if (uVar15 != 0) {
                *(undefined8 *)(uVar15 + 0x28) = uVar19;
                lVar21 = plVar14[2];
                if (lVar21 != 0) goto code_r0x015371d4;
              }
            }
          }
          puVar26 = &Atlas_Gameplay_FTUE_BaseLayerToolTipManager__HideCurrentModal;
          auVar28 = func_0x00f78af4();
          puVar6 = puVar6 + -0x90;
        } while( true );
      }
    }
  }
  auVar28 = func_0x00f78af4();
  uVar22 = auVar28._8_8_;
  lVar13 = auVar28._0_8_;
  puStack_108 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__StartSection;
  auStack_170[0] = uVar22;
  pppuStack_110 = &ppuStack_e0;
  if ((bRam0000000003eb48a2 & 1) == 0) {
    func_0x00f78a20(0x3d33318);
    func_0x00f78a20(0x3d33320);
    func_0x00f78a20(0x3d33328);
    func_0x00f78a20(0x3d278d8);
    func_0x00f78a20(0x3d3cd70);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d24e08);
    func_0x00f78a20(0x3d62270);
    func_0x00f78a20(0x3d26ac8);
    bRam0000000003eb48a2 = 1;
  }
  uStack_180 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_1c8 = 0;
  *(undefined8 *)(lVar13 + 0xa8) = uVar22;
  if ((*(long *)(lVar13 + 0x40) != 0) &&
     (lVar16 = *(long *)(*(long *)(lVar13 + 0x40) + 0x30), lVar16 != 0)) {
    /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090(&uStack_210,lVar16,uRam0000000003d3cd70);
    uStack_198 = uStack_1e8;
    uStack_1a0 = uStack_1f0;
    uStack_188 = uStack_1d8;
    uStack_190 = uStack_1e0;
    uStack_180 = uStack_1d0;
    uStack_1b8 = uStack_208;
    uStack_1c0 = uStack_210;
    uStack_1a8 = uStack_1f8;
    uStack_1b0 = uStack_200;
code_r0x01478328:
    do {
      uVar15 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8(&uStack_1c0,uRam0000000003d33320);
      if ((uVar15 & 1) == 0) {
code_r0x01478494:
        plVar14 = (long *)/*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_1c0,uRam0000000003d33318);
        return plVar14;
      }
      lVar16 = func_0x00f78aec(/*Atlas.Gameplay.FTUE.BaseLayerFTUEManager.<>c__DisplayClass50_0_TypeInfo*/ uRam0000000003d26ac8);
      /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager.<>c__DisplayClass50_0$$.ctor*/ func_0x0154719c(lVar16,0);
      if (lVar16 == 0) {
        func_0x00f78af4();
        goto code_r0x014784dc;
      }
      *(long *)(lVar16 + 0x50) = lVar13;
      *(undefined8 *)(lVar16 + 0x40) = uStack_180;
      *(undefined8 *)(lVar16 + 0x28) = uStack_198;
      *(undefined8 *)(lVar16 + 0x20) = uStack_1a0;
      *(undefined8 *)(lVar16 + 0x38) = uStack_188;
      *(undefined8 *)(lVar16 + 0x30) = uStack_190;
      *(undefined8 *)(lVar16 + 0x18) = uStack_1a8;
      *(undefined8 *)(lVar16 + 0x10) = uStack_1b0;
      uStack_210 = *(undefined8 *)(lVar16 + 0x18);
      uVar22 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ lRam0000000003d24e08,&uStack_210);
      uVar15 = /*Atlas.StringID$$Equals*/ func_0x015057f8(auStack_170,uVar22,0);
    } while ((uVar15 & 1) == 0);
    if (*(long *)(lVar13 + 0x60) == 0) {
      func_0x00f78af4();
code_r0x014784dc:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x14784e0);
      (*pcVar5)();
    }
    puVar2 = (undefined8 *)(lVar16 + 0x10);
    puVar3 = (undefined8 *)(lVar16 + 0x48);
    uVar15 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(lVar13 + 0x60),*puVar2,puVar3,0);
    if ((uVar15 & 1) == 0) goto code_r0x01478494;
    uVar22 = *(undefined8 *)(lVar13 + 0xa0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar15 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar22,0,0);
    if ((uVar15 & 1) != 0) {
      if (*(long *)(lVar13 + 0xa0) == 0) {
        func_0x00f78af4();
        goto code_r0x014784dc;
      }
      uStack_1c8 = *(undefined8 *)(*(long *)(lVar13 + 0xa0) + 0x18);
      uStack_210 = *puVar2;
      uVar22 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ lRam0000000003d24e08,&uStack_210);
      uVar15 = /*Atlas.StringID$$Equals*/ func_0x015057f8(&uStack_1c8,uVar22,0);
      if ((uVar15 & 1) != 0) {
        uStack_248 = *(undefined8 *)(lVar16 + 0x18);
        uStack_250 = *puVar2;
        uStack_238 = *(undefined8 *)(lVar16 + 0x28);
        uStack_240 = *(undefined8 *)(lVar16 + 0x20);
        uStack_228 = *(undefined8 *)(lVar16 + 0x38);
        uStack_230 = *(undefined8 *)(lVar16 + 0x30);
        uStack_220 = *(undefined8 *)(lVar16 + 0x40);
        /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$CallReactions*/ func_0x01478e78(lVar13,*(undefined8 *)(lVar13 + 0x38),&uStack_250);
        goto code_r0x01478328;
      }
    }
    uVar19 = *puVar3;
    uVar22 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
    /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(uVar22,lVar16,uRam0000000003d62270,0);
    /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$AddBaseListener*/ func_0x01478f10(lVar13,uVar19,uVar22,*puVar3);
    goto code_r0x01478328;
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar14 = (long *)___cxa_begin_catch();
    lVar13 = *plVar14;
    ___cxa_end_catch();
    plVar14 = (long *)/*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_1c0,uRam0000000003d33318);
    if (lVar13 == 0) {
      return plVar14;
    }
    func_0x00f78ac0(lVar13,0);
  }
  lVar13 = __Unwind_Resume();
  puStack_258 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__EndSection;
  lVar16 = 0x3eb4000;
  ppppuStack_260 = &pppuStack_110;
  if ((bRam0000000003eb48a3 & 1) == 0) {
    func_0x00f78a20(0x3d33318);
    func_0x00f78a20(0x3d33320);
    func_0x00f78a20(0x3d33328);
    func_0x00f78a20(0x3d3cd70);
    func_0x00f78a20(0x3d24e08);
    bRam0000000003eb48a3 = 1;
  }
  lStack_2e8 = 0;
  uStack_2f0 = 0;
  if ((*(long *)(lVar13 + 0x40) != 0) &&
     (lVar21 = *(long *)(*(long *)(lVar13 + 0x40) + 0x30), lVar21 != 0)) {
    plVar17 = (long *)0x3d24e08;
    /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090(&uStack_340,lVar21,uRam0000000003d3cd70);
    uStack_2b8 = uStack_318;
    uStack_2c0 = uStack_320;
    uStack_2a8 = uStack_308;
    uStack_2b0 = uStack_310;
    uStack_2a0 = uStack_300;
    uStack_2d8 = uStack_338;
    uStack_2e0 = uStack_340;
    uStack_2c8 = uStack_328;
    uStack_2d0 = uStack_330;
code_r0x01478624:
    do {
      uVar15 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8(&uStack_2e0,uRam0000000003d33320);
      uVar22 = uStack_2d0;
      if ((uVar15 & 1) == 0) goto code_r0x01478690;
      uStack_340 = uStack_2c8;
      uVar19 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ lRam0000000003d24e08,&uStack_340);
      uVar15 = /*Atlas.StringID$$Equals*/ func_0x015057f8(lVar13 + 0xa8,uVar19,0);
      if ((uVar15 & 1) != 0) {
        if (*(long *)(lVar13 + 0x60) == 0) {
          func_0x00f78af4();
        }
        else {
          uVar15 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(lVar13 + 0x60),uVar22,&lStack_2e8,0);
          if ((uVar15 & 1) == 0) {
            iStack_2f8 = 0x86;
            goto code_r0x0147869c;
          }
          if (lStack_2e8 != 0) {
            Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RemoveBaseListener
                      (lVar13,*(undefined8 *)(lStack_2e8 + 0x18));
            goto code_r0x01478624;
          }
          func_0x00f78af4();
        }
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1478708);
        (*pcVar5)();
      }
    } while( true );
  }
  func_0x00f78af4();
  if (extraout_w1_00 == 1) {
    plVar14 = (long *)___cxa_begin_catch();
    lVar16 = *plVar14;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_2e0,*unaff_x23);
    if (lVar16 == 0) {
code_r0x014786b8:
      plVar14 = (long *)*plVar17;
      if (((*(ushort *)((long)plVar14 + 0x132) >> 10 & 1) != 0) && ((int)plVar14[0x1c] == 0)) {
        func_0x00f78ad0();
        plVar14 = (long *)*plVar17;
      }
      *(undefined8 *)(lVar13 + 0xa8) = *(undefined8 *)plVar14[0x17];
      return plVar14;
    }
    func_0x00f78ac0(lVar16,0);
  }
  lVar21 = __Unwind_Resume();
  puStack_348 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetActiveSection;
  lStack_360 = lVar16;
  lStack_358 = lVar13;
  pppppuStack_350 = &ppppuStack_260;
  plVar14 = (long *)/*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$GetSection*/ func_0x01478c3c(&uStack_3c0,lVar21,*(undefined8 *)(lVar21 + 0xa8));
  extraout_x8[5] = uStack_398;
  extraout_x8[4] = uStack_3a0;
  extraout_x8[7] = uStack_388;
  extraout_x8[6] = uStack_390;
  extraout_x8[9] = uStack_378;
  extraout_x8[8] = uStack_380;
  extraout_x8[0xb] = uStack_368;
  extraout_x8[10] = uStack_370;
  extraout_x8[1] = uStack_3b8;
  *extraout_x8 = uStack_3c0;
  extraout_x8[3] = uStack_3a8;
  extraout_x8[2] = uStack_3b0;
  return plVar14;
code_r0x01478690:
  iStack_2f8 = 0x7b;
code_r0x0147869c:
  plVar14 = (long *)/*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_2e0,uRam0000000003d33318);
  if (iStack_2f8 == 0x86) {
    return plVar14;
  }
  goto code_r0x014786b8;
code_r0x015371d4:
  puVar26 = &UNK_015371e8;
code_r0x025e0480:
  lVar16 = lRam0000000003d3e190;
  *(undefined8 *)(puVar8 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar8 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar8 + -0x40) = unaff_x24;
  *(undefined8 **)(puVar8 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar8 + -0x30) = uVar22;
  *(long *)(puVar8 + -0x28) = lVar13;
  *(ulong *)(puVar8 + -0x20) = uVar15;
  *(long **)(puVar8 + -0x18) = plVar14;
  *(undefined1 ***)(puVar8 + -0x10) = ppuVar24;
  *(undefined **)(puVar8 + -8) = puVar26;
  if ((bRam0000000003eb8330 & 1) == 0) {
    func_0x00f78a20(0x3d3b350);
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    func_0x00f78a20(0x3d6bd58);
    bRam0000000003eb8330 = 1;
  }
  if (lVar21 != 0) {
    plVar14 = (long *)(*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar16 + 0x18) + 0xc0) + 8))
                                (lVar21,/*STR('DismissAllQueuedAndShowing')*/ uRam0000000003d6bd58);
    if (*(long *)(lVar21 + 0x40) != 0) {
      lVar13 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar16 + 0x18) + 0xc0) + 0x10))
                         (lVar21);
      if ((lVar13 == 0) || (*(long *)(lVar13 + 0x68) == 0)) goto code_r0x025e05fc;
      plVar14 = (long *)/*ModalBehaviour$$Dismiss*/ func_0x01496e90(*(long *)(lVar13 + 0x68),1,0);
      *(undefined8 *)(lVar21 + 0x40) = 0;
    }
    lVar13 = *(long *)(lVar21 + 0x38);
    if (lVar13 != 0) {
      if (*(int *)(lVar13 + 0x18) + -1 < 0) {
        return plVar14;
      }
      iVar11 = *(int *)(lVar13 + 0x18) + -2;
      plVar14 = (long *)0x0;
      do {
        uVar12 = iVar11 + 1;
        if (uVar12 < *(uint *)(lVar13 + 0x18)) {
          lVar1 = *(long *)(lVar13 + 0x10) + (ulong)uVar12 * 8;
          lVar16 = lVar13;
        }
        else {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          lVar16 = *(long *)(lVar21 + 0x38);
          if (lVar16 == 0) break;
          lVar1 = *(long *)(lVar13 + 0x10) + (ulong)uVar12 * 8;
        }
        lVar13 = *(long *)(lVar1 + 0x20);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(lVar16,uVar12,uRam0000000003d3b350);
        if (lVar13 == 0) break;
        plVar23 = *(long **)(lVar13 + 0x18);
        plVar17 = plVar14;
        if (plVar23 != (long *)0x0) {
          if (plVar23 == (long *)0x0) break;
          plVar14 = (long *)/*UnityEngine.Events.UnityAction$$Invoke*/ func_0x03277c60(plVar23,0);
          plVar17 = plVar23;
        }
        if (iVar11 < 0) {
          return plVar14;
        }
        lVar13 = *(long *)(lVar21 + 0x38);
        iVar11 = iVar11 + -1;
        plVar14 = plVar17;
      } while (lVar13 != 0);
    }
  }
code_r0x025e05fc:
  plVar14 = (long *)func_0x00f78af4();
  return plVar14;
}



// ============================================================
// RVA: 0x1477f58 | Atlas.Gameplay.FTUE.BaseLayerFTUEManager.SetInputsEnabled
// ============================================================

/* WARNING: Possible PIC construction at 0x015858fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0153734c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015371e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01537350) */
/* WARNING: Removing unreachable block (ram,0x01537358) */
/* WARNING: Removing unreachable block (ram,0x01537364) */
/* WARNING: Removing unreachable block (ram,0x0153736c) */
/* WARNING: Removing unreachable block (ram,0x01537394) */
/* WARNING: Removing unreachable block (ram,0x015373a0) */
/* WARNING: Removing unreachable block (ram,0x025dfbac) */
/* WARNING: Removing unreachable block (ram,0x025dfbd4) */
/* WARNING: Removing unreachable block (ram,0x025dfc00) */
/* WARNING: Removing unreachable block (ram,0x025dfc04) */
/* WARNING: Removing unreachable block (ram,0x025dfc30) */
/* WARNING: Removing unreachable block (ram,0x025dfc54) */
/* WARNING: Removing unreachable block (ram,0x025dfc70) */
/* WARNING: Removing unreachable block (ram,0x025dfc80) */
/* WARNING: Removing unreachable block (ram,0x025dfcfc) */
/* WARNING: Removing unreachable block (ram,0x025dfd14) */
/* WARNING: Removing unreachable block (ram,0x025dfd88) */
/* WARNING: Removing unreachable block (ram,0x025dfdb8) */
/* WARNING: Removing unreachable block (ram,0x025dfdd8) */
/* WARNING: Removing unreachable block (ram,0x025dfde0) */
/* WARNING: Removing unreachable block (ram,0x025dfdec) */
/* WARNING: Removing unreachable block (ram,0x025dfdf8) */
/* WARNING: Removing unreachable block (ram,0x025dfe04) */
/* WARNING: Removing unreachable block (ram,0x025dfe0c) */
/* WARNING: Removing unreachable block (ram,0x025dfe1c) */
/* WARNING: Removing unreachable block (ram,0x025dfe24) */
/* WARNING: Removing unreachable block (ram,0x025dfe30) */
/* WARNING: Removing unreachable block (ram,0x025dfe34) */
/* WARNING: Removing unreachable block (ram,0x025dfe44) */
/* WARNING: Removing unreachable block (ram,0x025dfe48) */
/* WARNING: Removing unreachable block (ram,0x025dfe4c) */
/* WARNING: Removing unreachable block (ram,0x025dfd34) */
/* WARNING: Removing unreachable block (ram,0x025dfd58) */
/* WARNING: Removing unreachable block (ram,0x025dfd74) */
/* WARNING: Removing unreachable block (ram,0x025dfc88) */
/* WARNING: Removing unreachable block (ram,0x025dfcb4) */
/* WARNING: Removing unreachable block (ram,0x025dfce0) */
/* WARNING: Removing unreachable block (ram,0x025dfcd0) */
/* WARNING: Removing unreachable block (ram,0x01585900) */
/* WARNING: Removing unreachable block (ram,0x01585908) */
/* WARNING: Removing unreachable block (ram,0x015371e8) */
/* WARNING: Removing unreachable block (ram,0x015371f0) */

long * Atlas_Gameplay_FTUE_BaseLayerFTUEManager__SetInputsEnabled
                 (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  float *pfVar15;
  undefined8 uVar16;
  long *plVar17;
  int extraout_w1;
  int extraout_w1_00;
  ulong extraout_x1;
  byte bVar18;
  undefined8 *extraout_x8;
  long lVar19;
  ulong unaff_x19;
  undefined8 unaff_x20;
  ulong uVar20;
  undefined8 unaff_x21;
  long *plVar21;
  undefined8 unaff_x22;
  undefined8 *unaff_x23;
  int iVar22;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined1 **ppuVar23;
  undefined *unaff_x30;
  undefined *puVar24;
  float fVar25;
  ulong unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar26 [16];
  undefined1 auVar27 [12];
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  undefined1 *****pppppuStack_2d0;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  int iStack_278;
  undefined4 uStack_270;
  long lStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 ****ppppuStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 auStack_f0 [2];
  undefined1 ***pppuStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  ulong uStack_70;
  long *plStack_68;
  undefined1 **ppuStack_60;
  undefined *puStack_58;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  if (*(long *)(param_1 + 0x70) != 0) {
    if (*(char *)(*(long *)(param_1 + 0x70) + 0x20) == '\0') {
      if (*(long *)(param_1 + 0x80) != 0) {
        if (*(char *)(*(long *)(param_1 + 0x80) + 0x38) != '\0') goto LAB_01477f80;
        lVar11 = *(long *)(param_1 + 0x58);
        if (lVar11 == 0) goto LAB_01477fa8;
        bVar18 = 1;
        goto code_r0x01477f8c;
      }
    }
    else {
LAB_01477f80:
      lVar11 = *(long *)(param_1 + 0x58);
      if (lVar11 != 0) {
        bVar18 = 0;
code_r0x01477f8c:
        iVar22 = 0;
        lVar13 = *(long *)(lVar11 + 200);
        if (lVar13 == 0) {
          plVar14 = (long *)func_0x00f78af4();
          pcStack_18 = Atlas_UI_Screens_GameInProgressScreen__OnInputEnabledForLayer;
          plVar17 = plVar14;
          puStack_20 = &stack0xfffffffffffffff0;
          if ((bRam0000000003eb522d & 1) == 0) {
            puStack_20 = &stack0xfffffffffffffff0;
            func_0x00f78a20(0x3d23990);
            plVar17 = (long *)func_0x00f78a20(0x3d41080);
            bRam0000000003eb522d = 1;
          }
          if ((int)plVar14[9] != iVar22) {
            return plVar17;
          }
          lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(plVar14,uRam0000000003d41080);
          if (lVar11 != 0) {
            Atlas_UI_Screens_GameInProgressScreenBehaviour__SetInputEnabled(lVar11,param_4,0);
            uVar16 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(plVar14);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            plVar17 = (long *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar16,0);
            if ((int)plVar17 == 0) {
              return plVar17;
            }
            lVar11 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(plVar14);
            if (lVar11 != 0) {
              lVar11 = *(long *)(lVar11 + 0xa8);
              if (lVar11 != 0) {
                if (pcRam0000000003ebe9d8 == (code *)0x0) {
                  pcRam0000000003ebe9d8 =
                       (code *)func_0x00f789d4("UnityEngine.Behaviour::set_enabled(System.Boolean)")
                  ;
                }
                    /* WARNING: Could not recover jumptable at 0x0321a97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                plVar17 = (long *)(*pcRam0000000003ebe9d8)(lVar11,param_4);
                return plVar17;
              }
              plVar17 = (long *)func_0x00f78af4(0,param_4,0);
              if ((bRam0000000003ebf1b8 & 1) == 0) {
                func_0x00f78a20(0x3d23990,0);
                bRam0000000003ebf1b8 = 1;
              }
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              return plVar17;
            }
          }
          pfVar15 = (float *)func_0x00f78af4();
          fVar25 = *pfVar15;
          bVar8 = false;
          bVar9 = true;
          if (0.0 <= fVar25) {
            bVar8 = false;
            bVar9 = true;
            if (!NAN(fVar25)) {
              bVar8 = fVar25 == 1.0;
              bVar9 = 1.0 <= fVar25;
            }
          }
          if (!bVar9 || bVar8) {
            fVar25 = pfVar15[1];
            bVar8 = false;
            bVar9 = true;
            if (0.0 <= fVar25) {
              bVar8 = false;
              bVar9 = true;
              if (!NAN(fVar25)) {
                bVar8 = fVar25 == 1.0;
                bVar9 = 1.0 <= fVar25;
              }
            }
            if (!bVar9 || bVar8) {
              return (long *)(ulong)(0.0 <= pfVar15[2]);
            }
          }
          return (long *)0x0;
        }
        bVar18 = bVar18 ^ 1;
        puVar6 = &stack0xfffffffffffffff0;
        lVar19 = *(long *)(lVar13 + 0x38);
        if (lVar19 == 0) {
          func_0x00f78af4();
code_r0x0164b040:
          uVar16 = func_0x00f78b24();
          auVar27 = func_0x00f78ac0(uVar16,0);
          lVar13 = auVar27._0_8_;
          pcStack_18 = (code *)&Core_Input_InputManager__SetScreenLayerInputExclusive;
          lVar11 = *(long *)(lVar13 + 0x38);
          if (lVar11 == 0) {
            puStack_20 = &stack0xfffffffffffffff0;
            func_0x00f78af4();
          }
          else {
            puStack_20 = &stack0xfffffffffffffff0;
            if (auVar27._8_4_ < *(uint *)(lVar11 + 0x18)) {
              *(byte *)(lVar11 + (long)(int)auVar27._8_4_ * 0x10 + 0x29) = bVar18;
              puVar7 = &stack0xfffffffffffffff0;
              unaff_x30 = &Core_Input_InputManager__SetScreenLayerInputExclusive;
              puStack_20 = &stack0xfffffffffffffff0;
              goto Core_Input_InputManager__ReselectTopmostActiveLayer;
            }
          }
          uVar16 = func_0x00f78b24();
          func_0x00f78ac0(uVar16,0);
          puVar7 = &stack0xffffffffffffffb0;
          puVar6 = &stack0xffffffffffffffd0;
          unaff_x20 = 0x3eb5000;
          unaff_x21 = 0x3d216c0;
          if ((bRam0000000003eb5795 & 1) == 0) {
            func_0x00f78a20(0x3d216c0);
            func_0x00f78a20(0x3d22880);
            bRam0000000003eb5795 = 1;
          }
          if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar11 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
          if (lVar11 == 0) {
code_r0x0164b158:
            func_0x00f78af4();
          }
          else {
            plVar17 = *(long **)(lVar11 + 0x20);
            if (plVar17 == (long *)0x0) {
code_r0x0164b130:
              if (plVar17 != (long *)0x0) {
                *(uint *)((long)plVar17 + 0xbc) = (uint)((extraout_x1 & 1) == 0);
                return plVar17;
              }
              goto code_r0x0164b158;
            }
            if ((*(byte *)(/*UnityEngine.InputSystem.UI.InputSystemUIInputModule_TypeInfo*/ lRam0000000003d22880 + 300) <= *(byte *)(*plVar17 + 300)) &&
               (*(long *)(*(long *)(*plVar17 + 200) +
                          (ulong)*(byte *)(/*UnityEngine.InputSystem.UI.InputSystemUIInputModule_TypeInfo*/ lRam0000000003d22880 + 300) * 8 + -8) ==
                /*UnityEngine.InputSystem.UI.InputSystemUIInputModule_TypeInfo*/ lRam0000000003d22880)) goto code_r0x0164b130;
          }
          unaff_x30 = &Core_Input_InputManager__SetActiveLayer;
          auVar27 = func_0x00f78e5c();
          lVar13 = auVar27._0_8_;
          *(int *)(lVar13 + 0x40) = auVar27._8_4_;
          unaff_x19 = extraout_x1;
        }
        else {
          if (*(uint *)(lVar19 + 0x18) <= *(uint *)(lVar11 + 0x48)) goto code_r0x0164b040;
          *(byte *)(lVar19 + (long)(int)*(uint *)(lVar11 + 0x48) * 0x10 + 0x28) = bVar18;
          puVar7 = (undefined1 *)register0x00000008;
          puVar6 = unaff_x29;
        }
Core_Input_InputManager__ReselectTopmostActiveLayer:
        *(undefined8 *)(puVar7 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
        *(undefined8 *)(puVar7 + -0x20) = unaff_x20;
        *(ulong *)(puVar7 + -0x18) = unaff_x19;
        *(undefined1 **)(puVar7 + -0x10) = puVar6;
        *(undefined **)(puVar7 + -8) = unaff_x30;
        if ((bRam0000000003eb5797 & 1) == 0) {
          func_0x00f78a20(0x3d216c0);
          func_0x00f78a20(0x3d22848);
          func_0x00f78a20(0x3d232c0);
          bRam0000000003eb5797 = 1;
        }
        uVar4 = *(undefined4 *)(lVar13 + 0x40);
        uVar16 = /*Core.Input.InputManager$$FindTopmostExclusiveLayer*/ func_0x0164a6a0(lVar13);
        if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar17 = (long *)/*System.Math$$Max*/ func_0x02b01f40(uVar4,uVar16,0);
        uVar10 = (uint)plVar17;
        if (uVar10 == 0xffffffff) {
          return plVar17;
        }
        lVar11 = *(long *)(lVar13 + 0x38);
        if (lVar11 != 0) {
          if (*(uint *)(lVar11 + 0x18) <= uVar10) goto code_r0x0164a30c;
          if (*(char *)(lVar11 + (long)(int)uVar10 * 0x10 + 0x28) != '\0') {
            return plVar17;
          }
          if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) != 0) {
            *(undefined1 *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x29) = 1;
            if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            lVar11 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
            lVar13 = *(long *)(lVar13 + 0x38);
            if (lVar13 != 0) {
              if (*(uint *)(lVar13 + 0x18) <= uVar10) goto code_r0x0164a30c;
              if (lVar11 != 0) {
                plVar17 = (long *)/*UnityEngine.EventSystems.EventSystem$$SetSelectedGameObject*/ func_0x032b7cb0(lVar11,*(undefined8 *)
                                                          (lVar13 + (long)(int)uVar10 * 0x10 + 0x20)
                                                  ,0);
                if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) != 0) {
                  *(undefined1 *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x29) = 0;
                  return plVar17;
                }
              }
            }
          }
        }
        func_0x00f78af4();
code_r0x0164a30c:
        uVar16 = func_0x00f78b24();
        plVar17 = (long *)func_0x00f78ac0(uVar16,0);
        return plVar17;
      }
    }
  }
LAB_01477fa8:
  plVar17 = (long *)func_0x00f78af4();
  pcStack_18 = (code *)&Atlas_Gameplay_FTUE_BaseLayerFTUEManager__OnExitInProgressScreen;
  puStack_20 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb489c & 1) == 0) {
    puStack_20 = &stack0xfffffffffffffff0;
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d527c0);
    bRam0000000003eb489c = 1;
  }
  uVar20 = plVar17[3];
  lVar11 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
  /*System.Action$$.ctor*/ func_0x02924c80(lVar11,plVar17,*(undefined8 *)(*plVar17 + 0x1c0),0);
  if (uVar20 != 0) {
    plVar14 = (long *)Atlas_Contexts_GameContextBaseInProgressState__remove_OnInProgressScreenExited
                                (uVar20,lVar11,0);
    if (plVar17[0xb] == 0) {
      return plVar14;
    }
    if (plVar17[0xe] != 0) {
      /*Atlas.Gameplay.FTUE.BaseLayerPauseManager$$OnAfterExitGameContextScreen*/ func_0x01536404(plVar17[0xe],0);
      if (plVar17[0x10] != 0) {
        /*Atlas.Gameplay.FTUE.BaseLayerSequenceManager$$OnAfterExitGameContextScreen*/ func_0x01536b90(plVar17[0x10],0);
        lVar13 = plVar17[0xe];
        lVar11 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
        /*System.Action$$.ctor*/ func_0x02924c80(lVar11,plVar17,uRam0000000003d527c0,0);
        uVar20 = 0;
        unaff_x23 = (undefined8 *)0x3d527c0;
        if (lVar13 != 0) {
          /*Atlas.Gameplay.FTUE.BaseLayerPauseManager$$remove_OnAfterStartPauseFinish*/ func_0x0153610c(lVar13,lVar11,0);
          lVar13 = plVar17[0xe];
          lVar11 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
          /*System.Action$$.ctor*/ func_0x02924c80(lVar11,plVar17,uRam0000000003d527c0,0);
          uVar20 = 0;
          if (lVar13 != 0) {
            /*Atlas.Gameplay.FTUE.BaseLayerPauseManager$$remove_OnAfterUnPauseFinish*/ func_0x01535fcc(lVar13,lVar11,0);
            lVar13 = plVar17[0x10];
            lVar11 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
            /*System.Action$$.ctor*/ func_0x02924c80(lVar11,plVar17,uRam0000000003d527c0,0);
            uVar20 = 0;
            unaff_x23 = (undefined8 *)0x3d527c0;
            if (lVar13 != 0) {
              /*Atlas.Gameplay.FTUE.BaseLayerSequenceManager$$remove_OnStartPlaySequence*/ func_0x0153659c(lVar13,lVar11,0);
              lVar13 = plVar17[0x10];
              lVar11 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
              /*System.Action$$.ctor*/ func_0x02924c80(lVar11,plVar17,uRam0000000003d527c0,0);
              uVar20 = 0;
              if (lVar13 != 0) {
                plVar14 = (long *)/*Atlas.Gameplay.FTUE.BaseLayerSequenceManager$$remove_OnResetSequenceStopped*/ func_0x015366dc(lVar13,lVar11,0);
                plVar17[0xb] = 0;
                return plVar14;
              }
            }
          }
        }
      }
    }
  }
  lVar13 = func_0x00f78af4();
  uStack_80 = 0x3d1fa78;
  puStack_58 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__OnExitInProgressState;
  plVar14 = (long *)0x3d527a8;
  lStack_78 = lVar11;
  uStack_70 = uVar20;
  plStack_68 = plVar17;
  ppuStack_60 = &puStack_20;
  if ((bRam0000000003eb489d & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d527a8);
    bRam0000000003eb489d = 1;
  }
  lVar11 = *(long *)(lVar13 + 0x18);
  uVar16 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
  /*System.Action$$.ctor*/ func_0x02924c80(uVar16,lVar13,uRam0000000003d527a8,0);
  if (lVar11 != 0) {
    /*Core.StateManagement.State$$remove_OnPostExitCallback*/ func_0x02b94d48(lVar11,uVar16,0);
    if (*(long *)(lVar13 + 0x70) != 0) {
      /*Atlas.Gameplay.FTUE.BaseLayerPauseManager$$OnExitInProgressState*/ func_0x015364e4(*(long *)(lVar13 + 0x70),0);
      if (*(ulong *)(lVar13 + 0x78) != 0) {
        auVar26._8_8_ = 0;
        auVar26._0_8_ = *(ulong *)(lVar13 + 0x78);
        puVar6 = &stack0xffffffffffffffb0;
        plVar17 = plStack_68;
        uVar20 = uStack_70;
        lVar11 = lStack_78;
        uVar16 = uStack_80;
        ppuVar23 = ppuStack_60;
        puVar24 = puStack_58;
        do {
          lVar13 = auVar26._0_8_;
          *(ulong *)(puVar6 + -0x20) = uVar20;
          *(long **)(puVar6 + -0x18) = plVar17;
          *(undefined1 ***)(puVar6 + -0x10) = ppuVar23;
          *(undefined **)(puVar6 + -8) = puVar24;
          if ((bRam0000000003eb4ed9 & 1) == 0) {
            func_0x00f78a20(0x3d3e190,auVar26._8_8_);
            func_0x00f78a20(0x3d75d18);
            bRam0000000003eb4ed9 = 1;
          }
          *(undefined8 *)(lVar13 + 0x28) = 0;
          *(undefined8 *)(lVar13 + 0x30) = 0xbf800000;
          *(undefined8 *)(lVar13 + 0x18) = 0;
          *(undefined8 *)(lVar13 + 0x20) = 0;
          lVar19 = *(long *)(lVar13 + 0x10);
          if (lVar19 != 0) {
            ppuVar23 = *(undefined1 ***)(puVar6 + -0x10);
            puVar24 = *(undefined **)(puVar6 + -8);
            uVar20 = *(ulong *)(puVar6 + -0x20);
            puVar7 = puVar6;
            plVar17 = *(long **)(puVar6 + -0x18);
            goto code_r0x025e0480;
          }
          plVar14 = (long *)func_0x00f78af4();
          if (*(float *)(plVar14 + 6) <= 0.0) {
            return plVar14;
          }
          puVar7 = puVar6 + -0x50;
          *(undefined8 *)(puVar6 + -0x50) = uVar16;
          *(long *)(puVar6 + -0x48) = lVar11;
          *(undefined8 *)(puVar6 + -0x40) = 0x3eb4000;
          *(long *)(puVar6 + -0x38) = lVar13;
          *(undefined1 **)(puVar6 + -0x30) = puVar6 + -0x10;
          *(undefined **)(puVar6 + -0x28) =
               &Atlas_Gameplay_FTUE_BaseLayerToolTipManager__OnInputFamilyChanged;
          ppuVar23 = (undefined1 **)(puVar6 + -0x30);
          plVar17 = plVar14;
          if ((bRam0000000003eb4ed8 & 1) == 0) {
            func_0x00f78a20(0x3d3cd60);
            func_0x00f78a20(0x3d3cd68);
            func_0x00f78a20(0x3d3e188);
            func_0x00f78a20(0x3d3e190);
            plVar17 = (long *)func_0x00f78a20(0x3d6df50);
            bRam0000000003eb4ed8 = 1;
          }
          uVar10 = *(int *)((long)plVar14 + 0x34) - 1;
          uVar20 = (ulong)uVar10;
          if ((int)uVar10 < 0) {
            return plVar17;
          }
          if (plVar14[3] != 0) {
            if (*(int *)(plVar14[3] + 0x18) <= (int)uVar10) {
              return plVar17;
            }
            lVar19 = plVar14[2];
            if (lVar19 != 0) {
              puVar24 = &UNK_01537350;
              plVar17 = plVar14;
              goto code_r0x025e0480;
            }
          }
          auVar26 = func_0x00f78af4();
          lVar13 = auVar26._8_8_;
          plVar17 = auVar26._0_8_;
          *(undefined8 *)(puVar6 + -0x80) = uVar16;
          *(long *)(puVar6 + -0x78) = lVar11;
          *(ulong *)(puVar6 + -0x70) = uVar20;
          *(long **)(puVar6 + -0x68) = plVar14;
          *(undefined1 ***)(puVar6 + -0x60) = ppuVar23;
          *(undefined **)(puVar6 + -0x58) =
               &Atlas_Gameplay_FTUE_BaseLayerToolTipManager__SetCurrentToolTipSequence;
          plVar14 = plVar17;
          if ((bRam0000000003eb4ed5 & 1) == 0) {
            plVar14 = (long *)func_0x00f78a20(0x3d3cd60);
            bRam0000000003eb4ed5 = 1;
          }
          if ((lVar13 == 0) || (*(int *)(lVar13 + 0x18) == 0)) {
            return plVar14;
          }
          plVar17[3] = lVar13;
          *(undefined4 *)((long)plVar17 + 0x34) = 0;
          uVar16 = *(undefined8 *)(puVar6 + -0x80);
          lVar11 = *(long *)(puVar6 + -0x78);
          puVar7 = puVar6 + -0x90;
          *(undefined8 *)(puVar6 + -0x90) = unaff_d9;
          *(ulong *)(puVar6 + -0x88) = unaff_d8;
          *(undefined8 *)(puVar6 + -0x80) = uVar16;
          *(long *)(puVar6 + -0x78) = lVar11;
          *(undefined8 *)(puVar6 + -0x70) = *(undefined8 *)(puVar6 + -0x70);
          *(undefined8 *)(puVar6 + -0x68) = *(undefined8 *)(puVar6 + -0x68);
          *(undefined8 *)(puVar6 + -0x60) = *(undefined8 *)(puVar6 + -0x60);
          *(undefined8 *)(puVar6 + -0x58) = *(undefined8 *)(puVar6 + -0x58);
          ppuVar23 = (undefined1 **)(puVar6 + -0x60);
          plVar14 = plVar17;
          if ((bRam0000000003eb4ed6 & 1) == 0) {
            func_0x00f78a20(0x3d3cd60);
            func_0x00f78a20(0x3d3cd68);
            func_0x00f78a20(0x3d3e188);
            func_0x00f78a20(0x3d3e190);
            plVar14 = (long *)func_0x00f78a20(0x3d717f0);
            bRam0000000003eb4ed6 = 1;
          }
          uVar20 = plVar17[3];
          if (uVar20 != 0) {
            uVar10 = *(uint *)((long)plVar17 + 0x34);
            lVar11 = (long)(int)uVar10;
            if ((int)*(uint *)(uVar20 + 0x18) <= (int)uVar10) {
              return plVar14;
            }
            if (*(uint *)(uVar20 + 0x18) <= uVar10) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar19 = *(long *)(uVar20 + 0x10) + lVar11 * 0x18;
            lVar13 = *(long *)(lVar19 + 0x28);
            unaff_d8 = (ulong)*(uint *)(lVar19 + 0x30);
            plVar17[5] = *(long *)(lVar19 + 0x20);
            if (lVar13 != 0) {
              plVar17[4] = *(long *)(lVar13 + 0x28);
              uVar20 = /*Atlas.UI.ToolTipManager.ToolTipData$$Copy*/ func_0x0156b4ec(lVar13,0);
              uVar12 = /*Atlas.Gameplay.FTUE.BaseLayerToolTipManager$$GetCurrentToolTipLocalisationKey*/ func_0x0153744c(plVar17);
              if (uVar20 != 0) {
                *(undefined8 *)(uVar20 + 0x28) = uVar12;
                lVar19 = plVar17[2];
                if (lVar19 != 0) goto code_r0x015371d4;
              }
            }
          }
          puVar24 = &Atlas_Gameplay_FTUE_BaseLayerToolTipManager__HideCurrentModal;
          auVar26 = func_0x00f78af4();
          puVar6 = puVar6 + -0x90;
        } while( true );
      }
    }
  }
  auVar26 = func_0x00f78af4();
  uVar16 = auVar26._8_8_;
  lVar11 = auVar26._0_8_;
  puStack_88 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__StartSection;
  auStack_f0[0] = uVar16;
  pppuStack_90 = &ppuStack_60;
  if ((bRam0000000003eb48a2 & 1) == 0) {
    func_0x00f78a20(0x3d33318);
    func_0x00f78a20(0x3d33320);
    func_0x00f78a20(0x3d33328);
    func_0x00f78a20(0x3d278d8);
    func_0x00f78a20(0x3d3cd70);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d24e08);
    func_0x00f78a20(0x3d62270);
    func_0x00f78a20(0x3d26ac8);
    bRam0000000003eb48a2 = 1;
  }
  uStack_100 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_148 = 0;
  *(undefined8 *)(lVar11 + 0xa8) = uVar16;
  if ((*(long *)(lVar11 + 0x40) != 0) &&
     (lVar13 = *(long *)(*(long *)(lVar11 + 0x40) + 0x30), lVar13 != 0)) {
    /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090(&uStack_190,lVar13,uRam0000000003d3cd70);
    uStack_118 = uStack_168;
    uStack_120 = uStack_170;
    uStack_108 = uStack_158;
    uStack_110 = uStack_160;
    uStack_100 = uStack_150;
    uStack_138 = uStack_188;
    uStack_140 = uStack_190;
    uStack_128 = uStack_178;
    uStack_130 = uStack_180;
code_r0x01478328:
    do {
      uVar20 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8(&uStack_140,uRam0000000003d33320);
      if ((uVar20 & 1) == 0) {
code_r0x01478494:
        plVar17 = (long *)/*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_140,uRam0000000003d33318);
        return plVar17;
      }
      lVar13 = func_0x00f78aec(/*Atlas.Gameplay.FTUE.BaseLayerFTUEManager.<>c__DisplayClass50_0_TypeInfo*/ uRam0000000003d26ac8);
      /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager.<>c__DisplayClass50_0$$.ctor*/ func_0x0154719c(lVar13,0);
      if (lVar13 == 0) {
        func_0x00f78af4();
        goto code_r0x014784dc;
      }
      *(long *)(lVar13 + 0x50) = lVar11;
      *(undefined8 *)(lVar13 + 0x40) = uStack_100;
      *(undefined8 *)(lVar13 + 0x28) = uStack_118;
      *(undefined8 *)(lVar13 + 0x20) = uStack_120;
      *(undefined8 *)(lVar13 + 0x38) = uStack_108;
      *(undefined8 *)(lVar13 + 0x30) = uStack_110;
      *(undefined8 *)(lVar13 + 0x18) = uStack_128;
      *(undefined8 *)(lVar13 + 0x10) = uStack_130;
      uStack_190 = *(undefined8 *)(lVar13 + 0x18);
      uVar16 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,&uStack_190);
      uVar20 = /*Atlas.StringID$$Equals*/ func_0x015057f8(auStack_f0,uVar16,0);
    } while ((uVar20 & 1) == 0);
    if (*(long *)(lVar11 + 0x60) == 0) {
      func_0x00f78af4();
code_r0x014784dc:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x14784e0);
      (*pcVar5)();
    }
    puVar2 = (undefined8 *)(lVar13 + 0x10);
    puVar3 = (undefined8 *)(lVar13 + 0x48);
    uVar20 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(lVar11 + 0x60),*puVar2,puVar3,0);
    if ((uVar20 & 1) == 0) goto code_r0x01478494;
    uVar16 = *(undefined8 *)(lVar11 + 0xa0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar20 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar16,0,0);
    if ((uVar20 & 1) != 0) {
      if (*(long *)(lVar11 + 0xa0) == 0) {
        func_0x00f78af4();
        goto code_r0x014784dc;
      }
      uStack_148 = *(undefined8 *)(*(long *)(lVar11 + 0xa0) + 0x18);
      uStack_190 = *puVar2;
      uVar16 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,&uStack_190);
      uVar20 = /*Atlas.StringID$$Equals*/ func_0x015057f8(&uStack_148,uVar16,0);
      if ((uVar20 & 1) != 0) {
        uStack_1c8 = *(undefined8 *)(lVar13 + 0x18);
        uStack_1d0 = *puVar2;
        uStack_1b8 = *(undefined8 *)(lVar13 + 0x28);
        uStack_1c0 = *(undefined8 *)(lVar13 + 0x20);
        uStack_1a8 = *(undefined8 *)(lVar13 + 0x38);
        uStack_1b0 = *(undefined8 *)(lVar13 + 0x30);
        uStack_1a0 = *(undefined8 *)(lVar13 + 0x40);
        /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$CallReactions*/ func_0x01478e78(lVar11,*(undefined8 *)(lVar11 + 0x38),&uStack_1d0);
        goto code_r0x01478328;
      }
    }
    uVar12 = *puVar3;
    uVar16 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
    /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(uVar16,lVar13,uRam0000000003d62270,0);
    /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$AddBaseListener*/ func_0x01478f10(lVar11,uVar12,uVar16,*puVar3);
    goto code_r0x01478328;
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar17 = (long *)___cxa_begin_catch();
    lVar11 = *plVar17;
    ___cxa_end_catch();
    plVar17 = (long *)/*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_140,uRam0000000003d33318);
    if (lVar11 == 0) {
      return plVar17;
    }
    func_0x00f78ac0(lVar11,0);
  }
  lVar11 = __Unwind_Resume();
  puStack_1d8 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__EndSection;
  lVar13 = 0x3eb4000;
  ppppuStack_1e0 = &pppuStack_90;
  if ((bRam0000000003eb48a3 & 1) == 0) {
    func_0x00f78a20(0x3d33318);
    func_0x00f78a20(0x3d33320);
    func_0x00f78a20(0x3d33328);
    func_0x00f78a20(0x3d3cd70);
    func_0x00f78a20(0x3d24e08);
    bRam0000000003eb48a3 = 1;
  }
  lStack_268 = 0;
  uStack_270 = 0;
  if ((*(long *)(lVar11 + 0x40) != 0) &&
     (lVar19 = *(long *)(*(long *)(lVar11 + 0x40) + 0x30), lVar19 != 0)) {
    plVar14 = (long *)0x3d24e08;
    /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090(&uStack_2c0,lVar19,uRam0000000003d3cd70);
    uStack_238 = uStack_298;
    uStack_240 = uStack_2a0;
    uStack_228 = uStack_288;
    uStack_230 = uStack_290;
    uStack_220 = uStack_280;
    uStack_258 = uStack_2b8;
    uStack_260 = uStack_2c0;
    uStack_248 = uStack_2a8;
    uStack_250 = uStack_2b0;
code_r0x01478624:
    do {
      uVar20 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8(&uStack_260,uRam0000000003d33320);
      uVar16 = uStack_250;
      if ((uVar20 & 1) == 0) goto code_r0x01478690;
      uStack_2c0 = uStack_248;
      uVar12 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,&uStack_2c0);
      uVar20 = /*Atlas.StringID$$Equals*/ func_0x015057f8(lVar11 + 0xa8,uVar12,0);
      if ((uVar20 & 1) != 0) {
        if (*(long *)(lVar11 + 0x60) == 0) {
          func_0x00f78af4();
        }
        else {
          uVar20 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(lVar11 + 0x60),uVar16,&lStack_268,0);
          if ((uVar20 & 1) == 0) {
            iStack_278 = 0x86;
            goto code_r0x0147869c;
          }
          if (lStack_268 != 0) {
            Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RemoveBaseListener
                      (lVar11,*(undefined8 *)(lStack_268 + 0x18));
            goto code_r0x01478624;
          }
          func_0x00f78af4();
        }
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1478708);
        (*pcVar5)();
      }
    } while( true );
  }
  func_0x00f78af4();
  if (extraout_w1_00 == 1) {
    plVar17 = (long *)___cxa_begin_catch();
    lVar13 = *plVar17;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_260,*unaff_x23);
    if (lVar13 == 0) {
code_r0x014786b8:
      plVar17 = (long *)*plVar14;
      if (((*(ushort *)((long)plVar17 + 0x132) >> 10 & 1) != 0) && ((int)plVar17[0x1c] == 0)) {
        func_0x00f78ad0();
        plVar17 = (long *)*plVar14;
      }
      *(undefined8 *)(lVar11 + 0xa8) = *(undefined8 *)plVar17[0x17];
      return plVar17;
    }
    func_0x00f78ac0(lVar13,0);
  }
  lVar19 = __Unwind_Resume();
  puStack_2c8 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetActiveSection;
  lStack_2e0 = lVar13;
  lStack_2d8 = lVar11;
  pppppuStack_2d0 = &ppppuStack_1e0;
  plVar17 = (long *)/*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$GetSection*/ func_0x01478c3c(&uStack_340,lVar19,*(undefined8 *)(lVar19 + 0xa8));
  extraout_x8[5] = uStack_318;
  extraout_x8[4] = uStack_320;
  extraout_x8[7] = uStack_308;
  extraout_x8[6] = uStack_310;
  extraout_x8[9] = uStack_2f8;
  extraout_x8[8] = uStack_300;
  extraout_x8[0xb] = uStack_2e8;
  extraout_x8[10] = uStack_2f0;
  extraout_x8[1] = uStack_338;
  *extraout_x8 = uStack_340;
  extraout_x8[3] = uStack_328;
  extraout_x8[2] = uStack_330;
  return plVar17;
code_r0x01478690:
  iStack_278 = 0x7b;
code_r0x0147869c:
  plVar17 = (long *)/*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_260,uRam0000000003d33318);
  if (iStack_278 == 0x86) {
    return plVar17;
  }
  goto code_r0x014786b8;
code_r0x015371d4:
  puVar24 = &UNK_015371e8;
code_r0x025e0480:
  lVar13 = lRam0000000003d3e190;
  *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar7 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar7 + -0x40) = unaff_x24;
  *(undefined8 **)(puVar7 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar7 + -0x30) = uVar16;
  *(long *)(puVar7 + -0x28) = lVar11;
  *(ulong *)(puVar7 + -0x20) = uVar20;
  *(long **)(puVar7 + -0x18) = plVar17;
  *(undefined1 ***)(puVar7 + -0x10) = ppuVar23;
  *(undefined **)(puVar7 + -8) = puVar24;
  if ((bRam0000000003eb8330 & 1) == 0) {
    func_0x00f78a20(0x3d3b350);
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    func_0x00f78a20(0x3d6bd58);
    bRam0000000003eb8330 = 1;
  }
  if (lVar19 != 0) {
    plVar17 = (long *)(*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar13 + 0x18) + 0xc0) + 8))
                                (lVar19,/*STR('DismissAllQueuedAndShowing')*/ uRam0000000003d6bd58);
    if (*(long *)(lVar19 + 0x40) != 0) {
      lVar11 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar13 + 0x18) + 0xc0) + 0x10))
                         (lVar19);
      if ((lVar11 == 0) || (*(long *)(lVar11 + 0x68) == 0)) goto code_r0x025e05fc;
      plVar17 = (long *)/*ModalBehaviour$$Dismiss*/ func_0x01496e90(*(long *)(lVar11 + 0x68),1,0);
      *(undefined8 *)(lVar19 + 0x40) = 0;
    }
    lVar11 = *(long *)(lVar19 + 0x38);
    if (lVar11 != 0) {
      if (*(int *)(lVar11 + 0x18) + -1 < 0) {
        return plVar17;
      }
      iVar22 = *(int *)(lVar11 + 0x18) + -2;
      plVar17 = (long *)0x0;
      do {
        uVar10 = iVar22 + 1;
        if (uVar10 < *(uint *)(lVar11 + 0x18)) {
          lVar1 = *(long *)(lVar11 + 0x10) + (ulong)uVar10 * 8;
          lVar13 = lVar11;
        }
        else {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          lVar13 = *(long *)(lVar19 + 0x38);
          if (lVar13 == 0) break;
          lVar1 = *(long *)(lVar11 + 0x10) + (ulong)uVar10 * 8;
        }
        lVar11 = *(long *)(lVar1 + 0x20);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(lVar13,uVar10,uRam0000000003d3b350);
        if (lVar11 == 0) break;
        plVar21 = *(long **)(lVar11 + 0x18);
        plVar14 = plVar17;
        if (plVar21 != (long *)0x0) {
          if (plVar21 == (long *)0x0) break;
          plVar17 = (long *)/*UnityEngine.Events.UnityAction$$Invoke*/ func_0x03277c60(plVar21,0);
          plVar14 = plVar21;
        }
        if (iVar22 < 0) {
          return plVar17;
        }
        lVar11 = *(long *)(lVar19 + 0x38);
        iVar22 = iVar22 + -1;
        plVar17 = plVar14;
      } while (lVar11 != 0);
    }
  }
code_r0x025e05fc:
  plVar17 = (long *)func_0x00f78af4();
  return plVar17;
}



// ============================================================
// RVA: 0x1477fac | Atlas.Gameplay.FTUE.BaseLayerFTUEManager.OnExitInProgressScreen
// ============================================================

/* WARNING: Possible PIC construction at 0x0153734c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015371e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01537350) */
/* WARNING: Removing unreachable block (ram,0x01537358) */
/* WARNING: Removing unreachable block (ram,0x01537364) */
/* WARNING: Removing unreachable block (ram,0x0153736c) */
/* WARNING: Removing unreachable block (ram,0x01537394) */
/* WARNING: Removing unreachable block (ram,0x015373a0) */
/* WARNING: Removing unreachable block (ram,0x025dfbac) */
/* WARNING: Removing unreachable block (ram,0x025dfbd4) */
/* WARNING: Removing unreachable block (ram,0x025dfc00) */
/* WARNING: Removing unreachable block (ram,0x025dfc04) */
/* WARNING: Removing unreachable block (ram,0x025dfc30) */
/* WARNING: Removing unreachable block (ram,0x025dfc54) */
/* WARNING: Removing unreachable block (ram,0x025dfc70) */
/* WARNING: Removing unreachable block (ram,0x025dfc80) */
/* WARNING: Removing unreachable block (ram,0x025dfcfc) */
/* WARNING: Removing unreachable block (ram,0x025dfd14) */
/* WARNING: Removing unreachable block (ram,0x025dfd88) */
/* WARNING: Removing unreachable block (ram,0x025dfdb8) */
/* WARNING: Removing unreachable block (ram,0x025dfdd8) */
/* WARNING: Removing unreachable block (ram,0x025dfde0) */
/* WARNING: Removing unreachable block (ram,0x025dfdec) */
/* WARNING: Removing unreachable block (ram,0x025dfdf8) */
/* WARNING: Removing unreachable block (ram,0x025dfe04) */
/* WARNING: Removing unreachable block (ram,0x025dfe0c) */
/* WARNING: Removing unreachable block (ram,0x025dfe1c) */
/* WARNING: Removing unreachable block (ram,0x025dfe24) */
/* WARNING: Removing unreachable block (ram,0x025dfe30) */
/* WARNING: Removing unreachable block (ram,0x025dfe34) */
/* WARNING: Removing unreachable block (ram,0x025dfe44) */
/* WARNING: Removing unreachable block (ram,0x025dfe48) */
/* WARNING: Removing unreachable block (ram,0x025dfe4c) */
/* WARNING: Removing unreachable block (ram,0x025dfd34) */
/* WARNING: Removing unreachable block (ram,0x025dfd58) */
/* WARNING: Removing unreachable block (ram,0x025dfd74) */
/* WARNING: Removing unreachable block (ram,0x025dfc88) */
/* WARNING: Removing unreachable block (ram,0x025dfcb4) */
/* WARNING: Removing unreachable block (ram,0x025dfce0) */
/* WARNING: Removing unreachable block (ram,0x025dfcd0) */
/* WARNING: Removing unreachable block (ram,0x015371e8) */
/* WARNING: Removing unreachable block (ram,0x015371f0) */

void Atlas_Gameplay_FTUE_BaseLayerFTUEManager__OnExitInProgressScreen(long *param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  int extraout_w1;
  int extraout_w1_00;
  undefined8 *extraout_x8;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *unaff_x23;
  int iVar16;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *puVar17;
  undefined *puVar18;
  ulong unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar19 [16];
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  undefined1 ****ppppuStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  int iStack_268;
  undefined4 uStack_260;
  long lStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 ***pppuStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 auStack_e0 [2];
  undefined1 **ppuStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  ulong uStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  if ((bRam0000000003eb489c & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d527c0);
    bRam0000000003eb489c = 1;
  }
  uVar14 = param_1[3];
  lVar8 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
  /*System.Action$$.ctor*/ func_0x02924c80(lVar8,param_1,*(undefined8 *)(*param_1 + 0x1c0),0);
  if (uVar14 != 0) {
    Atlas_Contexts_GameContextBaseInProgressState__remove_OnInProgressScreenExited(uVar14,lVar8,0);
    if (param_1[0xb] == 0) {
      return;
    }
    if (param_1[0xe] != 0) {
      /*Atlas.Gameplay.FTUE.BaseLayerPauseManager$$OnAfterExitGameContextScreen*/ func_0x01536404(param_1[0xe],0);
      if (param_1[0x10] != 0) {
        /*Atlas.Gameplay.FTUE.BaseLayerSequenceManager$$OnAfterExitGameContextScreen*/ func_0x01536b90(param_1[0x10],0);
        lVar15 = param_1[0xe];
        lVar8 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
        /*System.Action$$.ctor*/ func_0x02924c80(lVar8,param_1,uRam0000000003d527c0,0);
        uVar14 = 0;
        unaff_x23 = (undefined8 *)0x3d527c0;
        if (lVar15 != 0) {
          /*Atlas.Gameplay.FTUE.BaseLayerPauseManager$$remove_OnAfterStartPauseFinish*/ func_0x0153610c(lVar15,lVar8,0);
          lVar15 = param_1[0xe];
          lVar8 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
          /*System.Action$$.ctor*/ func_0x02924c80(lVar8,param_1,uRam0000000003d527c0,0);
          uVar14 = 0;
          if (lVar15 != 0) {
            /*Atlas.Gameplay.FTUE.BaseLayerPauseManager$$remove_OnAfterUnPauseFinish*/ func_0x01535fcc(lVar15,lVar8,0);
            lVar15 = param_1[0x10];
            lVar8 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
            /*System.Action$$.ctor*/ func_0x02924c80(lVar8,param_1,uRam0000000003d527c0,0);
            uVar14 = 0;
            unaff_x23 = (undefined8 *)0x3d527c0;
            if (lVar15 != 0) {
              /*Atlas.Gameplay.FTUE.BaseLayerSequenceManager$$remove_OnStartPlaySequence*/ func_0x0153659c(lVar15,lVar8,0);
              lVar15 = param_1[0x10];
              lVar8 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
              /*System.Action$$.ctor*/ func_0x02924c80(lVar8,param_1,uRam0000000003d527c0,0);
              uVar14 = 0;
              if (lVar15 != 0) {
                /*Atlas.Gameplay.FTUE.BaseLayerSequenceManager$$remove_OnResetSequenceStopped*/ func_0x015366dc(lVar15,lVar8,0);
                param_1[0xb] = 0;
                return;
              }
            }
          }
        }
      }
    }
  }
  lVar15 = func_0x00f78af4();
  uStack_70 = 0x3d1fa78;
  puStack_48 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__OnExitInProgressState;
  plVar13 = (long *)0x3d527a8;
  lStack_68 = lVar8;
  uStack_60 = uVar14;
  plStack_58 = param_1;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb489d & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d527a8);
    bRam0000000003eb489d = 1;
  }
  lVar8 = *(long *)(lVar15 + 0x18);
  uVar9 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
  /*System.Action$$.ctor*/ func_0x02924c80(uVar9,lVar15,uRam0000000003d527a8,0);
  if (lVar8 != 0) {
    /*Core.StateManagement.State$$remove_OnPostExitCallback*/ func_0x02b94d48(lVar8,uVar9,0);
    if (*(long *)(lVar15 + 0x70) != 0) {
      /*Atlas.Gameplay.FTUE.BaseLayerPauseManager$$OnExitInProgressState*/ func_0x015364e4(*(long *)(lVar15 + 0x70),0);
      if (*(ulong *)(lVar15 + 0x78) != 0) {
        auVar19._8_8_ = 0;
        auVar19._0_8_ = *(ulong *)(lVar15 + 0x78);
        puVar6 = &stack0xffffffffffffffc0;
        plVar13 = plStack_58;
        uVar14 = uStack_60;
        lVar8 = lStack_68;
        uVar9 = uStack_70;
        puVar17 = puStack_50;
        puVar18 = puStack_48;
        do {
          lVar15 = auVar19._0_8_;
          *(ulong *)(puVar6 + -0x20) = uVar14;
          *(long **)(puVar6 + -0x18) = plVar13;
          *(undefined1 **)(puVar6 + -0x10) = puVar17;
          *(undefined **)(puVar6 + -8) = puVar18;
          if ((bRam0000000003eb4ed9 & 1) == 0) {
            func_0x00f78a20(0x3d3e190,auVar19._8_8_);
            func_0x00f78a20(0x3d75d18);
            bRam0000000003eb4ed9 = 1;
          }
          *(undefined8 *)(lVar15 + 0x28) = 0;
          *(undefined8 *)(lVar15 + 0x30) = 0xbf800000;
          *(undefined8 *)(lVar15 + 0x18) = 0;
          *(undefined8 *)(lVar15 + 0x20) = 0;
          lVar11 = *(long *)(lVar15 + 0x10);
          if (lVar11 != 0) {
            puVar17 = *(undefined1 **)(puVar6 + -0x10);
            puVar18 = *(undefined **)(puVar6 + -8);
            uVar14 = *(ulong *)(puVar6 + -0x20);
            puVar7 = puVar6;
            plVar13 = *(long **)(puVar6 + -0x18);
            goto code_r0x025e0480;
          }
          plVar12 = (long *)func_0x00f78af4();
          if (*(float *)(plVar12 + 6) <= 0.0) {
            return;
          }
          puVar7 = puVar6 + -0x50;
          *(undefined8 *)(puVar6 + -0x50) = uVar9;
          *(long *)(puVar6 + -0x48) = lVar8;
          *(undefined8 *)(puVar6 + -0x40) = 0x3eb4000;
          *(long *)(puVar6 + -0x38) = lVar15;
          *(undefined1 **)(puVar6 + -0x30) = puVar6 + -0x10;
          *(undefined **)(puVar6 + -0x28) =
               &Atlas_Gameplay_FTUE_BaseLayerToolTipManager__OnInputFamilyChanged;
          puVar17 = puVar6 + -0x30;
          if ((bRam0000000003eb4ed8 & 1) == 0) {
            func_0x00f78a20(0x3d3cd60);
            func_0x00f78a20(0x3d3cd68);
            func_0x00f78a20(0x3d3e188);
            func_0x00f78a20(0x3d3e190);
            func_0x00f78a20(0x3d6df50);
            bRam0000000003eb4ed8 = 1;
          }
          uVar2 = *(int *)((long)plVar12 + 0x34) - 1;
          uVar14 = (ulong)uVar2;
          if ((int)uVar2 < 0) {
            return;
          }
          if (plVar12[3] != 0) {
            if (*(int *)(plVar12[3] + 0x18) <= (int)uVar2) {
              return;
            }
            lVar11 = plVar12[2];
            if (lVar11 != 0) {
              puVar18 = &UNK_01537350;
              plVar13 = plVar12;
              goto code_r0x025e0480;
            }
          }
          auVar19 = func_0x00f78af4();
          lVar15 = auVar19._8_8_;
          plVar13 = auVar19._0_8_;
          *(undefined8 *)(puVar6 + -0x80) = uVar9;
          *(long *)(puVar6 + -0x78) = lVar8;
          *(ulong *)(puVar6 + -0x70) = uVar14;
          *(long **)(puVar6 + -0x68) = plVar12;
          *(undefined1 **)(puVar6 + -0x60) = puVar17;
          *(undefined **)(puVar6 + -0x58) =
               &Atlas_Gameplay_FTUE_BaseLayerToolTipManager__SetCurrentToolTipSequence;
          if ((bRam0000000003eb4ed5 & 1) == 0) {
            func_0x00f78a20(0x3d3cd60);
            bRam0000000003eb4ed5 = 1;
          }
          if ((lVar15 == 0) || (*(int *)(lVar15 + 0x18) == 0)) {
            return;
          }
          plVar13[3] = lVar15;
          *(undefined4 *)((long)plVar13 + 0x34) = 0;
          uVar9 = *(undefined8 *)(puVar6 + -0x80);
          lVar8 = *(long *)(puVar6 + -0x78);
          puVar7 = puVar6 + -0x90;
          *(undefined8 *)(puVar6 + -0x90) = unaff_d9;
          *(ulong *)(puVar6 + -0x88) = unaff_d8;
          *(undefined8 *)(puVar6 + -0x80) = uVar9;
          *(long *)(puVar6 + -0x78) = lVar8;
          *(undefined8 *)(puVar6 + -0x70) = *(undefined8 *)(puVar6 + -0x70);
          *(undefined8 *)(puVar6 + -0x68) = *(undefined8 *)(puVar6 + -0x68);
          *(undefined8 *)(puVar6 + -0x60) = *(undefined8 *)(puVar6 + -0x60);
          *(undefined8 *)(puVar6 + -0x58) = *(undefined8 *)(puVar6 + -0x58);
          puVar17 = puVar6 + -0x60;
          if ((bRam0000000003eb4ed6 & 1) == 0) {
            func_0x00f78a20(0x3d3cd60);
            func_0x00f78a20(0x3d3cd68);
            func_0x00f78a20(0x3d3e188);
            func_0x00f78a20(0x3d3e190);
            func_0x00f78a20(0x3d717f0);
            bRam0000000003eb4ed6 = 1;
          }
          uVar14 = plVar13[3];
          if (uVar14 != 0) {
            uVar2 = *(uint *)((long)plVar13 + 0x34);
            lVar8 = (long)(int)uVar2;
            if ((int)*(uint *)(uVar14 + 0x18) <= (int)uVar2) {
              return;
            }
            if (*(uint *)(uVar14 + 0x18) <= uVar2) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar11 = *(long *)(uVar14 + 0x10) + lVar8 * 0x18;
            lVar15 = *(long *)(lVar11 + 0x28);
            unaff_d8 = (ulong)*(uint *)(lVar11 + 0x30);
            plVar13[5] = *(long *)(lVar11 + 0x20);
            if (lVar15 != 0) {
              plVar13[4] = *(long *)(lVar15 + 0x28);
              uVar14 = /*Atlas.UI.ToolTipManager.ToolTipData$$Copy*/ func_0x0156b4ec(lVar15,0);
              uVar10 = /*Atlas.Gameplay.FTUE.BaseLayerToolTipManager$$GetCurrentToolTipLocalisationKey*/ func_0x0153744c(plVar13);
              if (uVar14 != 0) {
                *(undefined8 *)(uVar14 + 0x28) = uVar10;
                lVar11 = plVar13[2];
                if (lVar11 != 0) goto code_r0x015371d4;
              }
            }
          }
          puVar18 = &Atlas_Gameplay_FTUE_BaseLayerToolTipManager__HideCurrentModal;
          auVar19 = func_0x00f78af4();
          puVar6 = puVar6 + -0x90;
        } while( true );
      }
    }
  }
  auVar19 = func_0x00f78af4();
  uVar9 = auVar19._8_8_;
  lVar8 = auVar19._0_8_;
  puStack_78 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__StartSection;
  auStack_e0[0] = uVar9;
  ppuStack_80 = &puStack_50;
  if ((bRam0000000003eb48a2 & 1) == 0) {
    func_0x00f78a20(0x3d33318);
    func_0x00f78a20(0x3d33320);
    func_0x00f78a20(0x3d33328);
    func_0x00f78a20(0x3d278d8);
    func_0x00f78a20(0x3d3cd70);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d24e08);
    func_0x00f78a20(0x3d62270);
    func_0x00f78a20(0x3d26ac8);
    bRam0000000003eb48a2 = 1;
  }
  uStack_f0 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_138 = 0;
  *(undefined8 *)(lVar8 + 0xa8) = uVar9;
  if ((*(long *)(lVar8 + 0x40) != 0) &&
     (lVar15 = *(long *)(*(long *)(lVar8 + 0x40) + 0x30), lVar15 != 0)) {
    /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090(&uStack_180,lVar15,uRam0000000003d3cd70);
    uStack_108 = uStack_158;
    uStack_110 = uStack_160;
    uStack_f8 = uStack_148;
    uStack_100 = uStack_150;
    uStack_f0 = uStack_140;
    uStack_128 = uStack_178;
    uStack_130 = uStack_180;
    uStack_118 = uStack_168;
    uStack_120 = uStack_170;
code_r0x01478328:
    do {
      uVar14 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8(&uStack_130,uRam0000000003d33320);
      if ((uVar14 & 1) == 0) {
code_r0x01478494:
        /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_130,uRam0000000003d33318);
        return;
      }
      lVar15 = func_0x00f78aec(/*Atlas.Gameplay.FTUE.BaseLayerFTUEManager.<>c__DisplayClass50_0_TypeInfo*/ uRam0000000003d26ac8);
      /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager.<>c__DisplayClass50_0$$.ctor*/ func_0x0154719c(lVar15,0);
      if (lVar15 == 0) {
        func_0x00f78af4();
        goto code_r0x014784dc;
      }
      *(long *)(lVar15 + 0x50) = lVar8;
      *(undefined8 *)(lVar15 + 0x40) = uStack_f0;
      *(undefined8 *)(lVar15 + 0x28) = uStack_108;
      *(undefined8 *)(lVar15 + 0x20) = uStack_110;
      *(undefined8 *)(lVar15 + 0x38) = uStack_f8;
      *(undefined8 *)(lVar15 + 0x30) = uStack_100;
      *(undefined8 *)(lVar15 + 0x18) = uStack_118;
      *(undefined8 *)(lVar15 + 0x10) = uStack_120;
      uStack_180 = *(undefined8 *)(lVar15 + 0x18);
      uVar9 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,&uStack_180);
      uVar14 = /*Atlas.StringID$$Equals*/ func_0x015057f8(auStack_e0,uVar9,0);
    } while ((uVar14 & 1) == 0);
    if (*(long *)(lVar8 + 0x60) == 0) {
      func_0x00f78af4();
code_r0x014784dc:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x14784e0);
      (*pcVar5)();
    }
    puVar3 = (undefined8 *)(lVar15 + 0x10);
    puVar4 = (undefined8 *)(lVar15 + 0x48);
    uVar14 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(lVar8 + 0x60),*puVar3,puVar4,0);
    if ((uVar14 & 1) == 0) goto code_r0x01478494;
    uVar9 = *(undefined8 *)(lVar8 + 0xa0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar14 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar9,0,0);
    if ((uVar14 & 1) != 0) {
      if (*(long *)(lVar8 + 0xa0) == 0) {
        func_0x00f78af4();
        goto code_r0x014784dc;
      }
      uStack_138 = *(undefined8 *)(*(long *)(lVar8 + 0xa0) + 0x18);
      uStack_180 = *puVar3;
      uVar9 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,&uStack_180);
      uVar14 = /*Atlas.StringID$$Equals*/ func_0x015057f8(&uStack_138,uVar9,0);
      if ((uVar14 & 1) != 0) {
        uStack_1b8 = *(undefined8 *)(lVar15 + 0x18);
        uStack_1c0 = *puVar3;
        uStack_1a8 = *(undefined8 *)(lVar15 + 0x28);
        uStack_1b0 = *(undefined8 *)(lVar15 + 0x20);
        uStack_198 = *(undefined8 *)(lVar15 + 0x38);
        uStack_1a0 = *(undefined8 *)(lVar15 + 0x30);
        uStack_190 = *(undefined8 *)(lVar15 + 0x40);
        /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$CallReactions*/ func_0x01478e78(lVar8,*(undefined8 *)(lVar8 + 0x38),&uStack_1c0);
        goto code_r0x01478328;
      }
    }
    uVar10 = *puVar4;
    uVar9 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
    /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(uVar9,lVar15,uRam0000000003d62270,0);
    /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$AddBaseListener*/ func_0x01478f10(lVar8,uVar10,uVar9,*puVar4);
    goto code_r0x01478328;
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar12 = (long *)___cxa_begin_catch();
    lVar8 = *plVar12;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_130,uRam0000000003d33318);
    if (lVar8 == 0) {
      return;
    }
    func_0x00f78ac0(lVar8,0);
  }
  lVar8 = __Unwind_Resume();
  puStack_1c8 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__EndSection;
  lVar15 = 0x3eb4000;
  pppuStack_1d0 = &ppuStack_80;
  if ((bRam0000000003eb48a3 & 1) == 0) {
    func_0x00f78a20(0x3d33318);
    func_0x00f78a20(0x3d33320);
    func_0x00f78a20(0x3d33328);
    func_0x00f78a20(0x3d3cd70);
    func_0x00f78a20(0x3d24e08);
    bRam0000000003eb48a3 = 1;
  }
  lStack_258 = 0;
  uStack_260 = 0;
  if ((*(long *)(lVar8 + 0x40) != 0) &&
     (lVar11 = *(long *)(*(long *)(lVar8 + 0x40) + 0x30), lVar11 != 0)) {
    plVar13 = (long *)0x3d24e08;
    /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090(&uStack_2b0,lVar11,uRam0000000003d3cd70);
    uStack_228 = uStack_288;
    uStack_230 = uStack_290;
    uStack_218 = uStack_278;
    uStack_220 = uStack_280;
    uStack_210 = uStack_270;
    uStack_248 = uStack_2a8;
    uStack_250 = uStack_2b0;
    uStack_238 = uStack_298;
    uStack_240 = uStack_2a0;
code_r0x01478624:
    do {
      uVar14 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8(&uStack_250,uRam0000000003d33320);
      uVar9 = uStack_240;
      if ((uVar14 & 1) == 0) goto code_r0x01478690;
      uStack_2b0 = uStack_238;
      uVar10 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,&uStack_2b0);
      uVar14 = /*Atlas.StringID$$Equals*/ func_0x015057f8(lVar8 + 0xa8,uVar10,0);
      if ((uVar14 & 1) != 0) {
        if (*(long *)(lVar8 + 0x60) == 0) {
          func_0x00f78af4();
        }
        else {
          uVar14 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(lVar8 + 0x60),uVar9,&lStack_258,0);
          if ((uVar14 & 1) == 0) {
            iStack_268 = 0x86;
            goto code_r0x0147869c;
          }
          if (lStack_258 != 0) {
            Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RemoveBaseListener
                      (lVar8,*(undefined8 *)(lStack_258 + 0x18));
            goto code_r0x01478624;
          }
          func_0x00f78af4();
        }
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1478708);
        (*pcVar5)();
      }
    } while( true );
  }
  func_0x00f78af4();
  if (extraout_w1_00 == 1) {
    plVar12 = (long *)___cxa_begin_catch();
    lVar15 = *plVar12;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_250,*unaff_x23);
    if (lVar15 == 0) goto code_r0x014786b8;
    func_0x00f78ac0(lVar15,0);
  }
  lVar11 = __Unwind_Resume();
  puStack_2b8 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetActiveSection;
  lStack_2d0 = lVar15;
  lStack_2c8 = lVar8;
  ppppuStack_2c0 = &pppuStack_1d0;
  /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$GetSection*/ func_0x01478c3c(&uStack_330,lVar11,*(undefined8 *)(lVar11 + 0xa8));
  extraout_x8[5] = uStack_308;
  extraout_x8[4] = uStack_310;
  extraout_x8[7] = uStack_2f8;
  extraout_x8[6] = uStack_300;
  extraout_x8[9] = uStack_2e8;
  extraout_x8[8] = uStack_2f0;
  extraout_x8[0xb] = uStack_2d8;
  extraout_x8[10] = uStack_2e0;
  extraout_x8[1] = uStack_328;
  *extraout_x8 = uStack_330;
  extraout_x8[3] = uStack_318;
  extraout_x8[2] = uStack_320;
  return;
code_r0x015371d4:
  puVar18 = &UNK_015371e8;
code_r0x025e0480:
  lVar15 = lRam0000000003d3e190;
  *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar7 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar7 + -0x40) = unaff_x24;
  *(undefined8 **)(puVar7 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar7 + -0x30) = uVar9;
  *(long *)(puVar7 + -0x28) = lVar8;
  *(ulong *)(puVar7 + -0x20) = uVar14;
  *(long **)(puVar7 + -0x18) = plVar13;
  *(undefined1 **)(puVar7 + -0x10) = puVar17;
  *(undefined **)(puVar7 + -8) = puVar18;
  if ((bRam0000000003eb8330 & 1) == 0) {
    func_0x00f78a20(0x3d3b350);
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    func_0x00f78a20(0x3d6bd58);
    bRam0000000003eb8330 = 1;
  }
  if (lVar11 != 0) {
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar15 + 0x18) + 0xc0) + 8))
              (lVar11,/*STR('DismissAllQueuedAndShowing')*/ uRam0000000003d6bd58);
    if (*(long *)(lVar11 + 0x40) != 0) {
      lVar8 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar15 + 0x18) + 0xc0) + 0x10))
                        (lVar11);
      if ((lVar8 == 0) || (*(long *)(lVar8 + 0x68) == 0)) goto code_r0x025e05fc;
      /*ModalBehaviour$$Dismiss*/ func_0x01496e90(*(long *)(lVar8 + 0x68),1,0);
      *(undefined8 *)(lVar11 + 0x40) = 0;
    }
    lVar8 = *(long *)(lVar11 + 0x38);
    if (lVar8 != 0) {
      if (*(int *)(lVar8 + 0x18) + -1 < 0) {
        return;
      }
      iVar16 = *(int *)(lVar8 + 0x18) + -2;
      do {
        uVar2 = iVar16 + 1;
        if (uVar2 < *(uint *)(lVar8 + 0x18)) {
          lVar1 = *(long *)(lVar8 + 0x10) + (ulong)uVar2 * 8;
          lVar15 = lVar8;
        }
        else {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          lVar15 = *(long *)(lVar11 + 0x38);
          if (lVar15 == 0) break;
          lVar1 = *(long *)(lVar8 + 0x10) + (ulong)uVar2 * 8;
        }
        lVar8 = *(long *)(lVar1 + 0x20);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(lVar15,uVar2,uRam0000000003d3b350);
        if (lVar8 == 0) break;
        lVar8 = *(long *)(lVar8 + 0x18);
        if (lVar8 != 0) {
          if (lVar8 == 0) break;
          /*UnityEngine.Events.UnityAction$$Invoke*/ func_0x03277c60(lVar8,0);
        }
        if (iVar16 < 0) {
          return;
        }
        lVar8 = *(long *)(lVar11 + 0x38);
        iVar16 = iVar16 + -1;
      } while (lVar8 != 0);
    }
  }
code_r0x025e05fc:
  func_0x00f78af4();
  return;
code_r0x01478690:
  iStack_268 = 0x7b;
code_r0x0147869c:
  /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_250,uRam0000000003d33318);
  if (iStack_268 == 0x86) {
    return;
  }
code_r0x014786b8:
  lVar15 = *plVar13;
  if (((*(ushort *)(lVar15 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar15 + 0xe0) == 0)) {
    func_0x00f78ad0();
    lVar15 = *plVar13;
  }
  *(undefined8 *)(lVar8 + 0xa8) = **(undefined8 **)(lVar15 + 0xb8);
  return;
}



// ============================================================
// RVA: 0x147814c | Atlas.Gameplay.FTUE.BaseLayerFTUEManager.OnExitInProgressState
// ============================================================

/* WARNING: Possible PIC construction at 0x0153734c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015371e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01537350) */
/* WARNING: Removing unreachable block (ram,0x01537358) */
/* WARNING: Removing unreachable block (ram,0x01537364) */
/* WARNING: Removing unreachable block (ram,0x0153736c) */
/* WARNING: Removing unreachable block (ram,0x01537394) */
/* WARNING: Removing unreachable block (ram,0x015373a0) */
/* WARNING: Removing unreachable block (ram,0x025dfbac) */
/* WARNING: Removing unreachable block (ram,0x025dfbd4) */
/* WARNING: Removing unreachable block (ram,0x025dfc00) */
/* WARNING: Removing unreachable block (ram,0x025dfc04) */
/* WARNING: Removing unreachable block (ram,0x025dfc30) */
/* WARNING: Removing unreachable block (ram,0x025dfc54) */
/* WARNING: Removing unreachable block (ram,0x025dfc70) */
/* WARNING: Removing unreachable block (ram,0x025dfc80) */
/* WARNING: Removing unreachable block (ram,0x025dfcfc) */
/* WARNING: Removing unreachable block (ram,0x025dfd14) */
/* WARNING: Removing unreachable block (ram,0x025dfd88) */
/* WARNING: Removing unreachable block (ram,0x025dfdb8) */
/* WARNING: Removing unreachable block (ram,0x025dfdd8) */
/* WARNING: Removing unreachable block (ram,0x025dfde0) */
/* WARNING: Removing unreachable block (ram,0x025dfdec) */
/* WARNING: Removing unreachable block (ram,0x025dfdf8) */
/* WARNING: Removing unreachable block (ram,0x025dfe04) */
/* WARNING: Removing unreachable block (ram,0x025dfe0c) */
/* WARNING: Removing unreachable block (ram,0x025dfe1c) */
/* WARNING: Removing unreachable block (ram,0x025dfe24) */
/* WARNING: Removing unreachable block (ram,0x025dfe30) */
/* WARNING: Removing unreachable block (ram,0x025dfe34) */
/* WARNING: Removing unreachable block (ram,0x025dfe44) */
/* WARNING: Removing unreachable block (ram,0x025dfe48) */
/* WARNING: Removing unreachable block (ram,0x025dfe4c) */
/* WARNING: Removing unreachable block (ram,0x025dfd34) */
/* WARNING: Removing unreachable block (ram,0x025dfd58) */
/* WARNING: Removing unreachable block (ram,0x025dfd74) */
/* WARNING: Removing unreachable block (ram,0x025dfc88) */
/* WARNING: Removing unreachable block (ram,0x025dfcb4) */
/* WARNING: Removing unreachable block (ram,0x025dfce0) */
/* WARNING: Removing unreachable block (ram,0x025dfcd0) */
/* WARNING: Removing unreachable block (ram,0x015371e8) */
/* WARNING: Removing unreachable block (ram,0x015371f0) */

void Atlas_Gameplay_FTUE_BaseLayerFTUEManager__OnExitInProgressState(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  int extraout_w1;
  int extraout_w1_00;
  undefined8 *extraout_x8;
  long lVar12;
  long unaff_x19;
  ulong unaff_x20;
  long lVar13;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar14;
  long *plVar15;
  undefined8 *unaff_x23;
  int iVar16;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined *puVar17;
  ulong unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar18 [16];
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  long lStack_288;
  undefined1 ***pppuStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  int iStack_228;
  undefined4 uStack_220;
  long lStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 **ppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 auStack_a0 [2];
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  plVar15 = (long *)0x3d527a8;
  if ((bRam0000000003eb489d & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d527a8);
    bRam0000000003eb489d = 1;
  }
  lVar13 = *(long *)(param_1 + 0x18);
  uVar8 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
  /*System.Action$$.ctor*/ func_0x02924c80(uVar8,param_1,uRam0000000003d527a8,0);
  if (lVar13 != 0) {
    /*Core.StateManagement.State$$remove_OnPostExitCallback*/ func_0x02b94d48(lVar13,uVar8,0);
    if (*(long *)(param_1 + 0x70) != 0) {
      /*Atlas.Gameplay.FTUE.BaseLayerPauseManager$$OnExitInProgressState*/ func_0x015364e4(*(long *)(param_1 + 0x70),0);
      if (*(ulong *)(param_1 + 0x78) != 0) {
        auVar18._8_8_ = 0;
        auVar18._0_8_ = *(ulong *)(param_1 + 0x78);
        puVar6 = (undefined1 *)register0x00000008;
        do {
          lVar13 = auVar18._0_8_;
          *(ulong *)(puVar6 + -0x20) = unaff_x20;
          *(long *)(puVar6 + -0x18) = unaff_x19;
          *(undefined1 **)(puVar6 + -0x10) = unaff_x29;
          *(undefined **)(puVar6 + -8) = unaff_x30;
          if ((bRam0000000003eb4ed9 & 1) == 0) {
            func_0x00f78a20(0x3d3e190,auVar18._8_8_);
            func_0x00f78a20(0x3d75d18);
            bRam0000000003eb4ed9 = 1;
          }
          *(undefined8 *)(lVar13 + 0x28) = 0;
          *(undefined8 *)(lVar13 + 0x30) = 0xbf800000;
          *(undefined8 *)(lVar13 + 0x18) = 0;
          *(undefined8 *)(lVar13 + 0x20) = 0;
          lVar11 = *(long *)(lVar13 + 0x10);
          if (lVar11 != 0) {
            unaff_x29 = *(undefined1 **)(puVar6 + -0x10);
            puVar17 = *(undefined **)(puVar6 + -8);
            unaff_x20 = *(ulong *)(puVar6 + -0x20);
            puVar7 = puVar6;
            unaff_x19 = *(long *)(puVar6 + -0x18);
            goto code_r0x025e0480;
          }
          lVar12 = func_0x00f78af4();
          if (*(float *)(lVar12 + 0x30) <= 0.0) {
            return;
          }
          puVar7 = puVar6 + -0x50;
          *(undefined8 *)(puVar6 + -0x50) = unaff_x22;
          *(long *)(puVar6 + -0x48) = unaff_x21;
          *(undefined8 *)(puVar6 + -0x40) = 0x3eb4000;
          *(long *)(puVar6 + -0x38) = lVar13;
          *(undefined1 **)(puVar6 + -0x30) = puVar6 + -0x10;
          *(undefined **)(puVar6 + -0x28) =
               &Atlas_Gameplay_FTUE_BaseLayerToolTipManager__OnInputFamilyChanged;
          unaff_x29 = puVar6 + -0x30;
          if ((bRam0000000003eb4ed8 & 1) == 0) {
            func_0x00f78a20(0x3d3cd60);
            func_0x00f78a20(0x3d3cd68);
            func_0x00f78a20(0x3d3e188);
            func_0x00f78a20(0x3d3e190);
            func_0x00f78a20(0x3d6df50);
            bRam0000000003eb4ed8 = 1;
          }
          uVar2 = *(int *)(lVar12 + 0x34) - 1;
          unaff_x20 = (ulong)uVar2;
          if ((int)uVar2 < 0) {
            return;
          }
          if (*(long *)(lVar12 + 0x18) != 0) {
            if (*(int *)(*(long *)(lVar12 + 0x18) + 0x18) <= (int)uVar2) {
              return;
            }
            lVar11 = *(long *)(lVar12 + 0x10);
            if (lVar11 != 0) {
              puVar17 = &UNK_01537350;
              unaff_x19 = lVar12;
              goto code_r0x025e0480;
            }
          }
          auVar18 = func_0x00f78af4();
          lVar13 = auVar18._8_8_;
          unaff_x19 = auVar18._0_8_;
          *(undefined8 *)(puVar6 + -0x80) = unaff_x22;
          *(long *)(puVar6 + -0x78) = unaff_x21;
          *(ulong *)(puVar6 + -0x70) = unaff_x20;
          *(long *)(puVar6 + -0x68) = lVar12;
          *(undefined1 **)(puVar6 + -0x60) = unaff_x29;
          *(undefined **)(puVar6 + -0x58) =
               &Atlas_Gameplay_FTUE_BaseLayerToolTipManager__SetCurrentToolTipSequence;
          if ((bRam0000000003eb4ed5 & 1) == 0) {
            func_0x00f78a20(0x3d3cd60);
            bRam0000000003eb4ed5 = 1;
          }
          if ((lVar13 == 0) || (*(int *)(lVar13 + 0x18) == 0)) {
            return;
          }
          *(long *)(unaff_x19 + 0x18) = lVar13;
          *(undefined4 *)(unaff_x19 + 0x34) = 0;
          unaff_x22 = *(undefined8 *)(puVar6 + -0x80);
          unaff_x21 = *(long *)(puVar6 + -0x78);
          puVar7 = puVar6 + -0x90;
          *(undefined8 *)(puVar6 + -0x90) = unaff_d9;
          *(ulong *)(puVar6 + -0x88) = unaff_d8;
          *(undefined8 *)(puVar6 + -0x80) = unaff_x22;
          *(long *)(puVar6 + -0x78) = unaff_x21;
          *(undefined8 *)(puVar6 + -0x70) = *(undefined8 *)(puVar6 + -0x70);
          *(undefined8 *)(puVar6 + -0x68) = *(undefined8 *)(puVar6 + -0x68);
          *(undefined8 *)(puVar6 + -0x60) = *(undefined8 *)(puVar6 + -0x60);
          *(undefined8 *)(puVar6 + -0x58) = *(undefined8 *)(puVar6 + -0x58);
          unaff_x29 = puVar6 + -0x60;
          if ((bRam0000000003eb4ed6 & 1) == 0) {
            func_0x00f78a20(0x3d3cd60);
            func_0x00f78a20(0x3d3cd68);
            func_0x00f78a20(0x3d3e188);
            func_0x00f78a20(0x3d3e190);
            func_0x00f78a20(0x3d717f0);
            bRam0000000003eb4ed6 = 1;
          }
          unaff_x20 = *(ulong *)(unaff_x19 + 0x18);
          if (unaff_x20 != 0) {
            uVar2 = *(uint *)(unaff_x19 + 0x34);
            unaff_x21 = (long)(int)uVar2;
            if ((int)*(uint *)(unaff_x20 + 0x18) <= (int)uVar2) {
              return;
            }
            if (*(uint *)(unaff_x20 + 0x18) <= uVar2) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar11 = *(long *)(unaff_x20 + 0x10) + unaff_x21 * 0x18;
            lVar13 = *(long *)(lVar11 + 0x28);
            unaff_d8 = (ulong)*(uint *)(lVar11 + 0x30);
            *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(lVar11 + 0x20);
            if (lVar13 != 0) {
              *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(lVar13 + 0x28);
              unaff_x20 = /*Atlas.UI.ToolTipManager.ToolTipData$$Copy*/ func_0x0156b4ec(lVar13,0);
              uVar8 = /*Atlas.Gameplay.FTUE.BaseLayerToolTipManager$$GetCurrentToolTipLocalisationKey*/ func_0x0153744c(unaff_x19);
              if (unaff_x20 != 0) {
                *(undefined8 *)(unaff_x20 + 0x28) = uVar8;
                lVar11 = *(long *)(unaff_x19 + 0x10);
                if (lVar11 != 0) goto code_r0x015371d4;
              }
            }
          }
          unaff_x30 = &Atlas_Gameplay_FTUE_BaseLayerToolTipManager__HideCurrentModal;
          auVar18 = func_0x00f78af4();
          puVar6 = puVar6 + -0x90;
        } while( true );
      }
    }
  }
  auVar18 = func_0x00f78af4();
  uVar8 = auVar18._8_8_;
  lVar13 = auVar18._0_8_;
  puStack_38 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__StartSection;
  auStack_a0[0] = uVar8;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb48a2 & 1) == 0) {
    func_0x00f78a20(0x3d33318);
    func_0x00f78a20(0x3d33320);
    func_0x00f78a20(0x3d33328);
    func_0x00f78a20(0x3d278d8);
    func_0x00f78a20(0x3d3cd70);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d24e08);
    func_0x00f78a20(0x3d62270);
    func_0x00f78a20(0x3d26ac8);
    bRam0000000003eb48a2 = 1;
  }
  uStack_b0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_f8 = 0;
  *(undefined8 *)(lVar13 + 0xa8) = uVar8;
  if ((*(long *)(lVar13 + 0x40) != 0) &&
     (lVar11 = *(long *)(*(long *)(lVar13 + 0x40) + 0x30), lVar11 != 0)) {
    /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090(&uStack_140,lVar11,uRam0000000003d3cd70);
    uStack_c8 = uStack_118;
    uStack_d0 = uStack_120;
    uStack_b8 = uStack_108;
    uStack_c0 = uStack_110;
    uStack_b0 = uStack_100;
    uStack_e8 = uStack_138;
    uStack_f0 = uStack_140;
    uStack_d8 = uStack_128;
    uStack_e0 = uStack_130;
code_r0x01478328:
    do {
      uVar9 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8(&uStack_f0,uRam0000000003d33320);
      if ((uVar9 & 1) == 0) {
code_r0x01478494:
        /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_f0,uRam0000000003d33318);
        return;
      }
      lVar11 = func_0x00f78aec(/*Atlas.Gameplay.FTUE.BaseLayerFTUEManager.<>c__DisplayClass50_0_TypeInfo*/ uRam0000000003d26ac8);
      /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager.<>c__DisplayClass50_0$$.ctor*/ func_0x0154719c(lVar11,0);
      if (lVar11 == 0) {
        func_0x00f78af4();
        goto code_r0x014784dc;
      }
      *(long *)(lVar11 + 0x50) = lVar13;
      *(undefined8 *)(lVar11 + 0x40) = uStack_b0;
      *(undefined8 *)(lVar11 + 0x28) = uStack_c8;
      *(undefined8 *)(lVar11 + 0x20) = uStack_d0;
      *(undefined8 *)(lVar11 + 0x38) = uStack_b8;
      *(undefined8 *)(lVar11 + 0x30) = uStack_c0;
      *(undefined8 *)(lVar11 + 0x18) = uStack_d8;
      *(undefined8 *)(lVar11 + 0x10) = uStack_e0;
      uStack_140 = *(undefined8 *)(lVar11 + 0x18);
      uVar8 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,&uStack_140);
      uVar9 = /*Atlas.StringID$$Equals*/ func_0x015057f8(auStack_a0,uVar8,0);
    } while ((uVar9 & 1) == 0);
    if (*(long *)(lVar13 + 0x60) == 0) {
      func_0x00f78af4();
code_r0x014784dc:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x14784e0);
      (*pcVar5)();
    }
    puVar3 = (undefined8 *)(lVar11 + 0x10);
    puVar4 = (undefined8 *)(lVar11 + 0x48);
    uVar9 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(lVar13 + 0x60),*puVar3,puVar4,0);
    if ((uVar9 & 1) == 0) goto code_r0x01478494;
    uVar8 = *(undefined8 *)(lVar13 + 0xa0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar9 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar8,0,0);
    if ((uVar9 & 1) != 0) {
      if (*(long *)(lVar13 + 0xa0) == 0) {
        func_0x00f78af4();
        goto code_r0x014784dc;
      }
      uStack_f8 = *(undefined8 *)(*(long *)(lVar13 + 0xa0) + 0x18);
      uStack_140 = *puVar3;
      uVar8 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,&uStack_140);
      uVar9 = /*Atlas.StringID$$Equals*/ func_0x015057f8(&uStack_f8,uVar8,0);
      if ((uVar9 & 1) != 0) {
        uStack_178 = *(undefined8 *)(lVar11 + 0x18);
        uStack_180 = *puVar3;
        uStack_168 = *(undefined8 *)(lVar11 + 0x28);
        uStack_170 = *(undefined8 *)(lVar11 + 0x20);
        uStack_158 = *(undefined8 *)(lVar11 + 0x38);
        uStack_160 = *(undefined8 *)(lVar11 + 0x30);
        uStack_150 = *(undefined8 *)(lVar11 + 0x40);
        /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$CallReactions*/ func_0x01478e78(lVar13,*(undefined8 *)(lVar13 + 0x38),&uStack_180);
        goto code_r0x01478328;
      }
    }
    uVar14 = *puVar4;
    uVar8 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
    /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(uVar8,lVar11,uRam0000000003d62270,0);
    /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$AddBaseListener*/ func_0x01478f10(lVar13,uVar14,uVar8,*puVar4);
    goto code_r0x01478328;
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar10 = (long *)___cxa_begin_catch();
    lVar13 = *plVar10;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_f0,uRam0000000003d33318);
    if (lVar13 == 0) {
      return;
    }
    func_0x00f78ac0(lVar13,0);
  }
  lVar13 = __Unwind_Resume();
  puStack_188 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__EndSection;
  lVar11 = 0x3eb4000;
  ppuStack_190 = &puStack_40;
  if ((bRam0000000003eb48a3 & 1) == 0) {
    func_0x00f78a20(0x3d33318);
    func_0x00f78a20(0x3d33320);
    func_0x00f78a20(0x3d33328);
    func_0x00f78a20(0x3d3cd70);
    func_0x00f78a20(0x3d24e08);
    bRam0000000003eb48a3 = 1;
  }
  lStack_218 = 0;
  uStack_220 = 0;
  if ((*(long *)(lVar13 + 0x40) != 0) &&
     (lVar12 = *(long *)(*(long *)(lVar13 + 0x40) + 0x30), lVar12 != 0)) {
    plVar15 = (long *)0x3d24e08;
    /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090(&uStack_270,lVar12,uRam0000000003d3cd70);
    uStack_1e8 = uStack_248;
    uStack_1f0 = uStack_250;
    uStack_1d8 = uStack_238;
    uStack_1e0 = uStack_240;
    uStack_1d0 = uStack_230;
    uStack_208 = uStack_268;
    uStack_210 = uStack_270;
    uStack_1f8 = uStack_258;
    uStack_200 = uStack_260;
code_r0x01478624:
    do {
      uVar9 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8(&uStack_210,uRam0000000003d33320);
      uVar8 = uStack_200;
      if ((uVar9 & 1) == 0) goto code_r0x01478690;
      uStack_270 = uStack_1f8;
      uVar14 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,&uStack_270);
      uVar9 = /*Atlas.StringID$$Equals*/ func_0x015057f8(lVar13 + 0xa8,uVar14,0);
      if ((uVar9 & 1) != 0) {
        if (*(long *)(lVar13 + 0x60) == 0) {
          func_0x00f78af4();
        }
        else {
          uVar9 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(lVar13 + 0x60),uVar8,&lStack_218,0);
          if ((uVar9 & 1) == 0) {
            iStack_228 = 0x86;
            goto code_r0x0147869c;
          }
          if (lStack_218 != 0) {
            Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RemoveBaseListener
                      (lVar13,*(undefined8 *)(lStack_218 + 0x18));
            goto code_r0x01478624;
          }
          func_0x00f78af4();
        }
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1478708);
        (*pcVar5)();
      }
    } while( true );
  }
  func_0x00f78af4();
  if (extraout_w1_00 == 1) {
    plVar10 = (long *)___cxa_begin_catch();
    lVar11 = *plVar10;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_210,*unaff_x23);
    if (lVar11 == 0) goto code_r0x014786b8;
    func_0x00f78ac0(lVar11,0);
  }
  lVar12 = __Unwind_Resume();
  puStack_278 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetActiveSection;
  lStack_290 = lVar11;
  lStack_288 = lVar13;
  pppuStack_280 = &ppuStack_190;
  /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$GetSection*/ func_0x01478c3c(&uStack_2f0,lVar12,*(undefined8 *)(lVar12 + 0xa8));
  extraout_x8[5] = uStack_2c8;
  extraout_x8[4] = uStack_2d0;
  extraout_x8[7] = uStack_2b8;
  extraout_x8[6] = uStack_2c0;
  extraout_x8[9] = uStack_2a8;
  extraout_x8[8] = uStack_2b0;
  extraout_x8[0xb] = uStack_298;
  extraout_x8[10] = uStack_2a0;
  extraout_x8[1] = uStack_2e8;
  *extraout_x8 = uStack_2f0;
  extraout_x8[3] = uStack_2d8;
  extraout_x8[2] = uStack_2e0;
  return;
code_r0x015371d4:
  puVar17 = &UNK_015371e8;
code_r0x025e0480:
  lVar13 = lRam0000000003d3e190;
  *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar7 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar7 + -0x40) = unaff_x24;
  *(undefined8 **)(puVar7 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar7 + -0x30) = unaff_x22;
  *(long *)(puVar7 + -0x28) = unaff_x21;
  *(ulong *)(puVar7 + -0x20) = unaff_x20;
  *(long *)(puVar7 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar7 + -0x10) = unaff_x29;
  *(undefined **)(puVar7 + -8) = puVar17;
  if ((bRam0000000003eb8330 & 1) == 0) {
    func_0x00f78a20(0x3d3b350);
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    func_0x00f78a20(0x3d6bd58);
    bRam0000000003eb8330 = 1;
  }
  if (lVar11 != 0) {
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar13 + 0x18) + 0xc0) + 8))
              (lVar11,/*STR('DismissAllQueuedAndShowing')*/ uRam0000000003d6bd58);
    if (*(long *)(lVar11 + 0x40) != 0) {
      lVar13 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar13 + 0x18) + 0xc0) + 0x10))
                         (lVar11);
      if ((lVar13 == 0) || (*(long *)(lVar13 + 0x68) == 0)) goto code_r0x025e05fc;
      /*ModalBehaviour$$Dismiss*/ func_0x01496e90(*(long *)(lVar13 + 0x68),1,0);
      *(undefined8 *)(lVar11 + 0x40) = 0;
    }
    lVar13 = *(long *)(lVar11 + 0x38);
    if (lVar13 != 0) {
      if (*(int *)(lVar13 + 0x18) + -1 < 0) {
        return;
      }
      iVar16 = *(int *)(lVar13 + 0x18) + -2;
      do {
        uVar2 = iVar16 + 1;
        if (uVar2 < *(uint *)(lVar13 + 0x18)) {
          lVar1 = *(long *)(lVar13 + 0x10) + (ulong)uVar2 * 8;
          lVar12 = lVar13;
        }
        else {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          lVar12 = *(long *)(lVar11 + 0x38);
          if (lVar12 == 0) break;
          lVar1 = *(long *)(lVar13 + 0x10) + (ulong)uVar2 * 8;
        }
        lVar13 = *(long *)(lVar1 + 0x20);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(lVar12,uVar2,uRam0000000003d3b350);
        if (lVar13 == 0) break;
        lVar13 = *(long *)(lVar13 + 0x18);
        if (lVar13 != 0) {
          if (lVar13 == 0) break;
          /*UnityEngine.Events.UnityAction$$Invoke*/ func_0x03277c60(lVar13,0);
        }
        if (iVar16 < 0) {
          return;
        }
        lVar13 = *(long *)(lVar11 + 0x38);
        iVar16 = iVar16 + -1;
      } while (lVar13 != 0);
    }
  }
code_r0x025e05fc:
  func_0x00f78af4();
  return;
code_r0x01478690:
  iStack_228 = 0x7b;
code_r0x0147869c:
  /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_210,uRam0000000003d33318);
  if (iStack_228 == 0x86) {
    return;
  }
code_r0x014786b8:
  lVar11 = *plVar15;
  if (((*(ushort *)(lVar11 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar11 + 0xe0) == 0)) {
    func_0x00f78ad0();
    lVar11 = *plVar15;
  }
  *(undefined8 *)(lVar13 + 0xa8) = **(undefined8 **)(lVar11 + 0xb8);
  return;
}



// ============================================================
// RVA: 0x1478200 | Atlas.Gameplay.FTUE.BaseLayerFTUEManager.StartSection
// ============================================================

void Atlas_Gameplay_FTUE_BaseLayerFTUEManager__StartSection(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  int extraout_w1;
  int extraout_w1_00;
  undefined8 *extraout_x8;
  long lVar9;
  long *unaff_x22;
  undefined8 uVar10;
  undefined8 *unaff_x23;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long lStack_260;
  long lStack_258;
  undefined1 **ppuStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  int iStack_1f8;
  undefined4 uStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
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
  undefined8 uStack_80;
  undefined8 auStack_70 [2];
  
  auStack_70[0] = param_2;
  if ((bRam0000000003eb48a2 & 1) == 0) {
    func_0x00f78a20(0x3d33318);
    func_0x00f78a20(0x3d33320);
    func_0x00f78a20(0x3d33328);
    func_0x00f78a20(0x3d278d8);
    func_0x00f78a20(0x3d3cd70);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d24e08);
    func_0x00f78a20(0x3d62270);
    func_0x00f78a20(0x3d26ac8);
    bRam0000000003eb48a2 = 1;
  }
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  *(undefined8 *)(param_1 + 0xa8) = param_2;
  if ((*(long *)(param_1 + 0x40) != 0) &&
     (lVar4 = *(long *)(*(long *)(param_1 + 0x40) + 0x30), lVar4 != 0)) {
    /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090(&uStack_110,lVar4,uRam0000000003d3cd70);
    uStack_98 = uStack_e8;
    uStack_a0 = uStack_f0;
    uStack_88 = uStack_d8;
    uStack_90 = uStack_e0;
    uStack_80 = uStack_d0;
    uStack_b8 = uStack_108;
    uStack_c0 = uStack_110;
    uStack_a8 = uStack_f8;
    uStack_b0 = uStack_100;
LAB_01478328:
    do {
      uVar5 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8(&uStack_c0,uRam0000000003d33320);
      if ((uVar5 & 1) == 0) {
LAB_01478494:
        /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_c0,uRam0000000003d33318);
        return;
      }
      lVar4 = func_0x00f78aec(/*Atlas.Gameplay.FTUE.BaseLayerFTUEManager.<>c__DisplayClass50_0_TypeInfo*/ uRam0000000003d26ac8);
      /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager.<>c__DisplayClass50_0$$.ctor*/ func_0x0154719c(lVar4,0);
      if (lVar4 == 0) {
        func_0x00f78af4();
        goto code_r0x014784dc;
      }
      *(long *)(lVar4 + 0x50) = param_1;
      *(undefined8 *)(lVar4 + 0x40) = uStack_80;
      *(undefined8 *)(lVar4 + 0x28) = uStack_98;
      *(undefined8 *)(lVar4 + 0x20) = uStack_a0;
      *(undefined8 *)(lVar4 + 0x38) = uStack_88;
      *(undefined8 *)(lVar4 + 0x30) = uStack_90;
      *(undefined8 *)(lVar4 + 0x18) = uStack_a8;
      *(undefined8 *)(lVar4 + 0x10) = uStack_b0;
      uStack_110 = *(undefined8 *)(lVar4 + 0x18);
      uVar6 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,&uStack_110);
      uVar5 = /*Atlas.StringID$$Equals*/ func_0x015057f8(auStack_70,uVar6,0);
    } while ((uVar5 & 1) == 0);
    if (*(long *)(param_1 + 0x60) == 0) {
      func_0x00f78af4();
code_r0x014784dc:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x14784e0);
      (*pcVar3)();
    }
    puVar1 = (undefined8 *)(lVar4 + 0x10);
    puVar2 = (undefined8 *)(lVar4 + 0x48);
    uVar5 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(param_1 + 0x60),*puVar1,puVar2,0);
    if ((uVar5 & 1) == 0) goto LAB_01478494;
    uVar6 = *(undefined8 *)(param_1 + 0xa0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar6,0,0);
    if ((uVar5 & 1) != 0) {
      if (*(long *)(param_1 + 0xa0) == 0) {
        func_0x00f78af4();
        goto code_r0x014784dc;
      }
      uStack_c8 = *(undefined8 *)(*(long *)(param_1 + 0xa0) + 0x18);
      uStack_110 = *puVar1;
      uVar6 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,&uStack_110);
      uVar5 = /*Atlas.StringID$$Equals*/ func_0x015057f8(&uStack_c8,uVar6,0);
      if ((uVar5 & 1) != 0) {
        uStack_148 = *(undefined8 *)(lVar4 + 0x18);
        uStack_150 = *puVar1;
        uStack_138 = *(undefined8 *)(lVar4 + 0x28);
        uStack_140 = *(undefined8 *)(lVar4 + 0x20);
        uStack_128 = *(undefined8 *)(lVar4 + 0x38);
        uStack_130 = *(undefined8 *)(lVar4 + 0x30);
        uStack_120 = *(undefined8 *)(lVar4 + 0x40);
        /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$CallReactions*/ func_0x01478e78(param_1,*(undefined8 *)(param_1 + 0x38),&uStack_150);
        goto LAB_01478328;
      }
    }
    uVar10 = *puVar2;
    uVar6 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
    /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(uVar6,lVar4,uRam0000000003d62270,0);
    /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$AddBaseListener*/ func_0x01478f10(param_1,uVar10,uVar6,*puVar2);
    goto LAB_01478328;
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar7 = (long *)___cxa_begin_catch();
    lVar4 = *plVar7;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_c0,uRam0000000003d33318);
    if (lVar4 == 0) {
      return;
    }
    func_0x00f78ac0(lVar4,0);
  }
  lVar4 = __Unwind_Resume();
  puStack_158 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__EndSection;
  lVar9 = 0x3eb4000;
  puStack_160 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb48a3 & 1) == 0) {
    func_0x00f78a20(0x3d33318);
    func_0x00f78a20(0x3d33320);
    func_0x00f78a20(0x3d33328);
    func_0x00f78a20(0x3d3cd70);
    func_0x00f78a20(0x3d24e08);
    bRam0000000003eb48a3 = 1;
  }
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  if ((*(long *)(lVar4 + 0x40) != 0) &&
     (lVar8 = *(long *)(*(long *)(lVar4 + 0x40) + 0x30), lVar8 != 0)) {
    unaff_x22 = (long *)0x3d24e08;
    /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090(&uStack_240,lVar8,uRam0000000003d3cd70);
    uStack_1b8 = uStack_218;
    uStack_1c0 = uStack_220;
    uStack_1a8 = uStack_208;
    uStack_1b0 = uStack_210;
    uStack_1a0 = uStack_200;
    uStack_1d8 = uStack_238;
    uStack_1e0 = uStack_240;
    uStack_1c8 = uStack_228;
    uStack_1d0 = uStack_230;
code_r0x01478624:
    do {
      uVar5 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8(&uStack_1e0,uRam0000000003d33320);
      uVar6 = uStack_1d0;
      if ((uVar5 & 1) == 0) goto code_r0x01478690;
      uStack_240 = uStack_1c8;
      uVar10 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,&uStack_240);
      uVar5 = /*Atlas.StringID$$Equals*/ func_0x015057f8(lVar4 + 0xa8,uVar10,0);
      if ((uVar5 & 1) != 0) {
        if (*(long *)(lVar4 + 0x60) == 0) {
          func_0x00f78af4();
        }
        else {
          uVar5 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(lVar4 + 0x60),uVar6,&lStack_1e8,0);
          if ((uVar5 & 1) == 0) {
            iStack_1f8 = 0x86;
            goto code_r0x0147869c;
          }
          if (lStack_1e8 != 0) {
            Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RemoveBaseListener
                      (lVar4,*(undefined8 *)(lStack_1e8 + 0x18));
            goto code_r0x01478624;
          }
          func_0x00f78af4();
        }
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1478708);
        (*pcVar3)();
      }
    } while( true );
  }
  func_0x00f78af4();
  if (extraout_w1_00 == 1) {
    plVar7 = (long *)___cxa_begin_catch();
    lVar9 = *plVar7;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_1e0,*unaff_x23);
    if (lVar9 == 0) goto code_r0x014786b8;
    func_0x00f78ac0(lVar9,0);
  }
  lVar8 = __Unwind_Resume();
  puStack_248 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetActiveSection;
  lStack_260 = lVar9;
  lStack_258 = lVar4;
  ppuStack_250 = &puStack_160;
  /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$GetSection*/ func_0x01478c3c(&uStack_2c0,lVar8,*(undefined8 *)(lVar8 + 0xa8));
  extraout_x8[5] = uStack_298;
  extraout_x8[4] = uStack_2a0;
  extraout_x8[7] = uStack_288;
  extraout_x8[6] = uStack_290;
  extraout_x8[9] = uStack_278;
  extraout_x8[8] = uStack_280;
  extraout_x8[0xb] = uStack_268;
  extraout_x8[10] = uStack_270;
  extraout_x8[1] = uStack_2b8;
  *extraout_x8 = uStack_2c0;
  extraout_x8[3] = uStack_2a8;
  extraout_x8[2] = uStack_2b0;
  return;
code_r0x01478690:
  iStack_1f8 = 0x7b;
code_r0x0147869c:
  /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_1e0,uRam0000000003d33318);
  if (iStack_1f8 == 0x86) {
    return;
  }
code_r0x014786b8:
  lVar9 = *unaff_x22;
  if (((*(ushort *)(lVar9 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar9 + 0xe0) == 0)) {
    func_0x00f78ad0();
    lVar9 = *unaff_x22;
  }
  *(undefined8 *)(lVar4 + 0xa8) = **(undefined8 **)(lVar9 + 0xb8);
  return;
}



// ============================================================
// RVA: 0x1478558 | Atlas.Gameplay.FTUE.BaseLayerFTUEManager.EndSection
// ============================================================

void Atlas_Gameplay_FTUE_BaseLayerFTUEManager__EndSection(long param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  int extraout_w1;
  undefined8 *extraout_x8;
  long lVar7;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  undefined1 *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  int iStack_a8;
  undefined4 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lVar7 = 0x3eb4000;
  if ((bRam0000000003eb48a3 & 1) == 0) {
    func_0x00f78a20(0x3d33318);
    func_0x00f78a20(0x3d33320);
    func_0x00f78a20(0x3d33328);
    func_0x00f78a20(0x3d3cd70);
    func_0x00f78a20(0x3d24e08);
    bRam0000000003eb48a3 = 1;
  }
  lStack_98 = 0;
  uStack_a0 = 0;
  if ((*(long *)(param_1 + 0x40) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x40) + 0x30), lVar3 != 0)) {
    unaff_x22 = (long *)0x3d24e08;
    /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090(&uStack_f0,lVar3,uRam0000000003d3cd70);
    uStack_68 = uStack_c8;
    uStack_70 = uStack_d0;
    uStack_58 = uStack_b8;
    uStack_60 = uStack_c0;
    uStack_50 = uStack_b0;
    uStack_88 = uStack_e8;
    uStack_90 = uStack_f0;
    uStack_78 = uStack_d8;
    uStack_80 = uStack_e0;
LAB_01478624:
    do {
      uVar4 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8(&uStack_90,uRam0000000003d33320);
      uVar1 = uStack_80;
      if ((uVar4 & 1) == 0) goto LAB_01478690;
      uStack_f0 = uStack_78;
      uVar5 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,&uStack_f0);
      uVar4 = /*Atlas.StringID$$Equals*/ func_0x015057f8(param_1 + 0xa8,uVar5,0);
      if ((uVar4 & 1) != 0) {
        if (*(long *)(param_1 + 0x60) == 0) {
          func_0x00f78af4();
        }
        else {
          uVar4 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(param_1 + 0x60),uVar1,&lStack_98,0);
          if ((uVar4 & 1) == 0) {
            iStack_a8 = 0x86;
            goto code_r0x0147869c;
          }
          if (lStack_98 != 0) {
            Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RemoveBaseListener
                      (param_1,*(undefined8 *)(lStack_98 + 0x18));
            goto LAB_01478624;
          }
          func_0x00f78af4();
        }
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1478708);
        (*pcVar2)();
      }
    } while( true );
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar6 = (long *)___cxa_begin_catch();
    lVar7 = *plVar6;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_90,*unaff_x23);
    if (lVar7 == 0) goto code_r0x014786b8;
    func_0x00f78ac0(lVar7,0);
  }
  lVar3 = __Unwind_Resume();
  puStack_f8 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetActiveSection;
  lStack_110 = lVar7;
  lStack_108 = param_1;
  puStack_100 = &stack0xfffffffffffffff0;
  /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$GetSection*/ func_0x01478c3c(&uStack_170,lVar3,*(undefined8 *)(lVar3 + 0xa8));
  extraout_x8[5] = uStack_148;
  extraout_x8[4] = uStack_150;
  extraout_x8[7] = uStack_138;
  extraout_x8[6] = uStack_140;
  extraout_x8[9] = uStack_128;
  extraout_x8[8] = uStack_130;
  extraout_x8[0xb] = uStack_118;
  extraout_x8[10] = uStack_120;
  extraout_x8[1] = uStack_168;
  *extraout_x8 = uStack_170;
  extraout_x8[3] = uStack_158;
  extraout_x8[2] = uStack_160;
  return;
LAB_01478690:
  iStack_a8 = 0x7b;
code_r0x0147869c:
  /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_90,uRam0000000003d33318);
  if (iStack_a8 == 0x86) {
    return;
  }
code_r0x014786b8:
  lVar7 = *unaff_x22;
  if (((*(ushort *)(lVar7 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar7 + 0xe0) == 0)) {
    func_0x00f78ad0();
    lVar7 = *unaff_x22;
  }
  *(undefined8 *)(param_1 + 0xa8) = **(undefined8 **)(lVar7 + 0xb8);
  return;
}



// ============================================================
// RVA: 0x1478758 | Atlas.Gameplay.FTUE.BaseLayerFTUEManager.GetActiveSection
// ============================================================

void Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetActiveSection(undefined8 *param_1,long param_2)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$GetSection*/ func_0x01478c3c(&uStack_80,param_2,*(undefined8 *)(param_2 + 0xa8));
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[9] = uStack_38;
  param_1[8] = uStack_40;
  param_1[0xb] = uStack_28;
  param_1[10] = uStack_30;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



// ============================================================
// RVA: 0x14787a0 | Atlas.Gameplay.FTUE.BaseLayerFTUEManager.RespawnHumanPlayerAtLocator
// ============================================================

void Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RespawnHumanPlayerAtLocator
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auVar14 [16];
  long lStack_b8;
  long lStack_48;
  
  lStack_48 = 0;
  uVar10 = param_2;
  uVar12 = param_3;
  if (*(long *)(param_5 + 0x68) != 0) {
    iVar1 = /*Atlas.Gameplay.IdentifiableLocatorBehaviourRoot$$TryGetIdentifiableLocator*/ func_0x015b77c8(*(long *)(param_5 + 0x68),param_6,&lStack_48,0);
    if (iVar1 == 0) {
      return;
    }
    uVar10 = param_2;
    uVar12 = param_3;
    if ((lStack_48 != 0) &&
       (lVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lStack_48,0), uVar10 = param_2, uVar12 = param_3, lVar2 != 0)) {
      lVar5 = *(long *)(param_5 + 0x38);
      uVar8 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar2,0);
      uVar10 = param_2;
      uVar12 = param_3;
      uVar9 = /*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar2,0);
      if (lVar5 != 0) {
        Atlas_Gameplay_Kart_KartComposite__InvokeRespawn
                  (uVar8,param_2,param_3,uVar9,uVar10,uVar12,param_4,0xbf800000,lVar5,1,0);
        return;
      }
    }
  }
  auVar14 = func_0x00f78af4();
  lVar2 = auVar14._0_8_;
  if ((bRam0000000003eb48a8 & 1) == 0) {
    func_0x00f78a20(0x3d3aac0);
    func_0x00f78a20(0x3d3a680);
    func_0x00f78a20(0x3d3aac8);
    bRam0000000003eb48a8 = 1;
  }
  lStack_b8 = 0;
  if (*(long *)(lVar2 + 0x68) != 0) {
    iVar1 = /*Atlas.Gameplay.IdentifiableLocatorBehaviourRoot$$TryGetIdentifiableLocators*/ func_0x015b7974(*(long *)(lVar2 + 0x68),auVar14._8_8_,&lStack_b8,0);
    if (iVar1 == 0) {
      return;
    }
    if (lStack_b8 != 0) {
      uVar7 = 0;
      while( true ) {
        if (*(int *)(lStack_b8 + 0x18) <= (int)uVar7) {
          return;
        }
        if (((*(long *)(lVar2 + 0x10) == 0) ||
            (lVar5 = *(long *)(*(long *)(lVar2 + 0x10) + 0x40), lVar5 == 0)) ||
           (lVar5 = *(long *)(lVar5 + 0x40), lVar5 == 0)) break;
        uVar8 = param_4;
        if (*(uint *)(lVar5 + 0x18) <= uVar7) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          uVar8 = param_4;
        }
        lVar3 = lStack_b8;
        lVar5 = *(long *)(*(long *)(lVar5 + 0x10) + (long)(int)uVar7 * 8 + 0x20);
        if ((lVar5 == 0) || (lStack_b8 == 0)) break;
        lVar6 = *(long *)(lVar5 + 0x10);
        if (*(uint *)(lStack_b8 + 0x18) <= uVar7) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0x10) + (long)(int)uVar7 * 8 + 0x20);
        if (((lVar3 == 0) || (lVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar3,0), lVar3 == 0)) ||
           (uVar9 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar3,0), lVar3 = lStack_b8, lStack_b8 == 0)) break;
        uVar11 = uVar10;
        uVar13 = uVar12;
        if (*(uint *)(lStack_b8 + 0x18) <= uVar7) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0x10) + (long)(int)uVar7 * 8 + 0x20);
        if (((lVar3 == 0) || (lVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar3,0), lVar3 == 0)) ||
           (param_4 = /*UnityEngine.Transform$$get_localRotation*/ func_0x0327553c(lVar3,0), lVar6 == 0)) break;
        Atlas_Gameplay_Kart_KartComposite__InvokeRespawn
                  (uVar9,uVar10,uVar12,param_4,uVar11,uVar13,uVar8,0xbf800000,lVar6,1,0);
        if ((*(long *)(lVar5 + 0x10) == 0) ||
           (lVar3 = *(long *)(*(long *)(lVar5 + 0x10) + 0x10), lVar3 == 0)) break;
        lVar3 = *(long *)(lVar3 + 0x60);
        uVar4 = /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$GetAIRespawnDelegate*/ func_0x014790ec(lVar2,lVar5);
        if (lVar3 == 0) break;
        Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__add_OnStartTransitionEnd
                  (lVar3,uVar4,0);
        uVar7 = uVar7 + 1;
        if (lStack_b8 == 0) break;
      }
    }
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x1478874 | Atlas.Gameplay.FTUE.BaseLayerFTUEManager.RespawnAIsAtLocators
// ============================================================

void Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RespawnAIsAtLocators
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long lStack_68;
  
  if ((bRam0000000003eb48a8 & 1) == 0) {
    func_0x00f78a20(0x3d3aac0);
    func_0x00f78a20(0x3d3a680);
    func_0x00f78a20(0x3d3aac8);
    bRam0000000003eb48a8 = 1;
  }
  lStack_68 = 0;
  if (*(long *)(param_5 + 0x68) != 0) {
    iVar1 = /*Atlas.Gameplay.IdentifiableLocatorBehaviourRoot$$TryGetIdentifiableLocators*/ func_0x015b7974(*(long *)(param_5 + 0x68),param_6,&lStack_68,0);
    if (iVar1 == 0) {
      return;
    }
    if (lStack_68 != 0) {
      uVar6 = 0;
      while( true ) {
        if (*(int *)(lStack_68 + 0x18) <= (int)uVar6) {
          return;
        }
        if (((*(long *)(param_5 + 0x10) == 0) ||
            (lVar4 = *(long *)(*(long *)(param_5 + 0x10) + 0x40), lVar4 == 0)) ||
           (lVar4 = *(long *)(lVar4 + 0x40), lVar4 == 0)) break;
        uVar10 = param_4;
        if (*(uint *)(lVar4 + 0x18) <= uVar6) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          uVar10 = param_4;
        }
        lVar2 = lStack_68;
        lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + (long)(int)uVar6 * 8 + 0x20);
        if ((lVar4 == 0) || (lStack_68 == 0)) break;
        lVar5 = *(long *)(lVar4 + 0x10);
        if (*(uint *)(lStack_68 + 0x18) <= uVar6) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0x10) + (long)(int)uVar6 * 8 + 0x20);
        if (((lVar2 == 0) || (lVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar2,0), lVar2 == 0)) ||
           (uVar7 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar2,0), lVar2 = lStack_68, lStack_68 == 0)) break;
        uVar8 = param_2;
        uVar9 = param_3;
        if (*(uint *)(lStack_68 + 0x18) <= uVar6) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0x10) + (long)(int)uVar6 * 8 + 0x20);
        if (((lVar2 == 0) || (lVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar2,0), lVar2 == 0)) ||
           (param_4 = /*UnityEngine.Transform$$get_localRotation*/ func_0x0327553c(lVar2,0), lVar5 == 0)) break;
        Atlas_Gameplay_Kart_KartComposite__InvokeRespawn
                  (uVar7,param_2,param_3,param_4,uVar8,uVar9,uVar10,0xbf800000,lVar5,1,0);
        if ((*(long *)(lVar4 + 0x10) == 0) ||
           (lVar2 = *(long *)(*(long *)(lVar4 + 0x10) + 0x10), lVar2 == 0)) break;
        lVar2 = *(long *)(lVar2 + 0x60);
        uVar3 = /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$GetAIRespawnDelegate*/ func_0x014790ec(param_5,lVar4);
        if (lVar2 == 0) break;
        Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__add_OnStartTransitionEnd
                  (lVar2,uVar3,0);
        uVar6 = uVar6 + 1;
        if (lStack_68 == 0) break;
      }
    }
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x1478a84 | Atlas.Gameplay.FTUE.BaseLayerFTUEManager.ActivateChallengeTrackingLogic
// ============================================================

void Atlas_Gameplay_FTUE_BaseLayerFTUEManager__ActivateChallengeTrackingLogic(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  
  if (*(char *)(param_1 + 0x98) == '\0') {
    if (*(long *)(param_1 + 0x10) == 0) {
      auVar4 = func_0x00f78af4();
      if ((bRam0000000003eb48a7 & 1) == 0) {
        func_0x00f78a20(0x3d32560);
        func_0x00f78a20(0x3d32568);
        func_0x00f78a20(0x3d32570);
        func_0x00f78a20(0x3d3a780);
        bRam0000000003eb48a7 = 1;
      }
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
      if (auVar4._8_8_ != 0) {
        /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$GetEnumerator*/ func_0x023df1f8(&uStack_68,auVar4._8_8_,uRam0000000003d3a780);
        while (uVar2 = /*System.Collections.Generic.List.Enumerator<TopBarManager.TopBarButton>$$MoveNext*/ func_0x01f694e8(&uStack_68,uRam0000000003d32568), (uVar2 & 1) != 0) {
          lVar3 = *(long *)(auVar4._0_8_ + 0x58);
          if (lVar3 == 0) {
            func_0x00f78af4();
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1478bac);
            (*pcVar1)();
          }
          Atlas_UI_Screens_GameInProgressScreen__SetEnabledHUDElement
                    (lVar3,uStack_58 & 0xffffffff,1,0);
        }
        /*System.Collections.Generic.List.Enumerator<TopBarManager.TopBarButton>$$Dispose*/ func_0x01f694e4(&uStack_68,uRam0000000003d32560);
      }
      return;
    }
    Atlas_Contexts_GameContextBase__ResetChallenges(*(long *)(param_1 + 0x10),0);
    *(undefined1 *)(param_1 + 0x98) = 1;
  }
  return;
}



// ============================================================
// RVA: 0x1478ac4 | Atlas.Gameplay.FTUE.BaseLayerFTUEManager.EnableHudElements
// ============================================================

void Atlas_Gameplay_FTUE_BaseLayerFTUEManager__EnableHudElements(long param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  if ((bRam0000000003eb48a7 & 1) == 0) {
    func_0x00f78a20(0x3d32560);
    func_0x00f78a20(0x3d32568);
    func_0x00f78a20(0x3d32570);
    func_0x00f78a20(0x3d3a780);
    bRam0000000003eb48a7 = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  if (param_2 != 0) {
    /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$GetEnumerator*/ func_0x023df1f8(&uStack_48,param_2,uRam0000000003d3a780);
    while (uVar2 = /*System.Collections.Generic.List.Enumerator<TopBarManager.TopBarButton>$$MoveNext*/ func_0x01f694e8(&uStack_48,uRam0000000003d32568), (uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0x58) == 0) {
        func_0x00f78af4();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1478bac);
        (*pcVar1)();
      }
      Atlas_UI_Screens_GameInProgressScreen__SetEnabledHUDElement
                (*(long *)(param_1 + 0x58),uStack_38 & 0xffffffff,1,0);
    }
    /*System.Collections.Generic.List.Enumerator<TopBarManager.TopBarButton>$$Dispose*/ func_0x01f694e4(&uStack_48,uRam0000000003d32560);
  }
  return;
}



// ============================================================
// RVA: 0x1478be8 | Atlas.Gameplay.FTUE.BaseLayerFTUEManager.RegisterEnter
// ============================================================

void Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RegisterEnter
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsValidHumanCollision();
  if (iVar1 != 0) {
    *(undefined8 *)(param_1 + 0xa0) = param_3;
  }
  return;
}



// ============================================================
// RVA: 0x1478c14 | Atlas.Gameplay.FTUE.BaseLayerFTUEManager.RegisterExit
// ============================================================

void Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RegisterExit(long param_1)

{
  int iVar1;
  
  iVar1 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsValidHumanCollision();
  if (iVar1 != 0) {
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  return;
}



// ============================================================
// RVA: 0x1478c3c | Atlas.Gameplay.FTUE.BaseLayerFTUEManager.GetSection
// ============================================================

ulong Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetSection
                (undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  int extraout_w1;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d0;
  undefined8 *puStack_1c8;
  long lStack_1c0;
  undefined8 *puStack_1b8;
  undefined1 *puStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_198;
  int iStack_190;
  undefined4 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_58 = param_3;
  if ((bRam0000000003eb48a0 & 1) == 0) {
    func_0x00f78a20(0x3d332e8);
    func_0x00f78a20(0x3d332f0);
    func_0x00f78a20(0x3d332f8);
    func_0x00f78a20(0x3d3cd40);
    func_0x00f78a20(0x3d24e08);
    bRam0000000003eb48a0 = 1;
  }
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
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
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uVar1 = /*Atlas.StringID$$get_IsValid*/ func_0x01505738(&uStack_58,0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_2 + 0x50) == 0) {
      func_0x00f78af4();
      if (extraout_w1 == 1) {
        plVar3 = (long *)___cxa_begin_catch();
        param_2 = *plVar3;
        ___cxa_end_catch();
        uVar1 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.Section>$$Dispose*/ func_0x01f79784(&uStack_120,uRam0000000003d332e8);
        if (param_2 == 0) goto LAB_01478e3c;
      }
      else {
        __Unwind_Resume();
      }
      auVar5 = func_0x00f78ac0(param_2,0);
      uStack_1d0 = 0x3eb4000;
      puStack_1a8 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions;
      uStack_208 = param_4[1];
      uStack_210 = *param_4;
      uStack_1f8 = param_4[3];
      uStack_200 = param_4[2];
      uStack_1e8 = param_4[5];
      uStack_1f0 = param_4[4];
      uStack_1e0 = param_4[6];
      puStack_1c8 = &uStack_120;
      lStack_1c0 = param_2;
      puStack_1b8 = param_1;
      puStack_1b0 = &stack0xfffffffffffffff0;
      uVar1 = /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$CanTriggerReaction*/ func_0x01479074(auVar5._0_8_,&uStack_210,auVar5._8_8_);
      if ((int)uVar1 != 0) {
        uStack_280 = param_4[1];
        uStack_250 = *param_4;
        uStack_270 = param_4[3];
        uStack_278 = param_4[2];
        uStack_260 = param_4[5];
        uStack_268 = param_4[4];
        uStack_258 = param_4[6];
        uStack_248 = uStack_280;
        uStack_240 = uStack_278;
        uStack_238 = uStack_270;
        uStack_230 = uStack_268;
        uStack_228 = uStack_260;
        uStack_220 = uStack_258;
        Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions(auVar5._0_8_,&uStack_280);
      }
      return uVar1;
    }
    /*System.Collections.Generic.List<BaseLayerFTUEDefinition.Section>$$GetEnumerator*/ func_0x024bb9ac(&uStack_120,*(long *)(param_2 + 0x50),uRam0000000003d3cd40);
    do {
      uVar1 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.Section>$$MoveNext*/ func_0x01f79788(&uStack_120,uRam0000000003d332f0);
      uVar4 = uStack_110;
      if ((uVar1 & 1) == 0) {
        uVar4 = 0;
        iStack_190 = 0x60;
        goto LAB_01478da8;
      }
      uStack_158 = uStack_e0;
      uStack_160 = uStack_e8;
      uStack_148 = uStack_d0;
      uStack_150 = uStack_d8;
      uStack_138 = uStack_c0;
      uStack_140 = uStack_c8;
      uStack_130 = uStack_b8;
      uStack_178 = uStack_100;
      uStack_180 = uStack_108;
      uStack_168 = uStack_f0;
      uStack_170 = uStack_f8;
      uStack_198 = uStack_110;
      uVar2 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,&uStack_198);
      uVar1 = /*Atlas.StringID$$Equals*/ func_0x015057f8(&uStack_58,uVar2,0);
    } while ((uVar1 & 1) == 0);
    uStack_88 = uStack_158;
    uStack_90 = uStack_160;
    uStack_78 = uStack_148;
    uStack_80 = uStack_150;
    uStack_68 = uStack_138;
    uStack_70 = uStack_140;
    uStack_60 = uStack_130;
    uStack_a8 = uStack_178;
    uStack_b0 = uStack_180;
    uStack_98 = uStack_168;
    uStack_a0 = uStack_170;
    iStack_190 = 0x6a;
LAB_01478da8:
    uStack_188 = 1;
    uVar1 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.Section>$$Dispose*/ func_0x01f79784(&uStack_120,uRam0000000003d332e8);
    if (iStack_190 == 0x6a) {
      *param_1 = uVar4;
      param_1[6] = uStack_88;
      param_1[5] = uStack_90;
      param_1[8] = uStack_78;
      param_1[7] = uStack_80;
      param_1[10] = uStack_68;
      param_1[9] = uStack_70;
      param_1[0xb] = uStack_60;
      param_1[2] = uStack_a8;
      param_1[1] = uStack_b0;
      param_1[4] = uStack_98;
      param_1[3] = uStack_a0;
      return uVar1;
    }
  }
LAB_01478e3c:
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return uVar1;
}



// ============================================================
// RVA: 0x1478e78 | Atlas.Gameplay.FTUE.BaseLayerFTUEManager.CallReactions
// ============================================================

undefined8
Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_68 = param_3[1];
  uStack_70 = *param_3;
  uStack_58 = param_3[3];
  uStack_60 = param_3[2];
  uStack_48 = param_3[5];
  uStack_50 = param_3[4];
  uStack_40 = param_3[6];
  uVar1 = /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$CanTriggerReaction*/ func_0x01479074(param_1,&uStack_70,param_2);
  if ((int)uVar1 != 0) {
    uStack_e0 = param_3[1];
    uStack_b0 = *param_3;
    uStack_d0 = param_3[3];
    uStack_d8 = param_3[2];
    uStack_c0 = param_3[5];
    uStack_c8 = param_3[4];
    uStack_b8 = param_3[6];
    uStack_a8 = uStack_e0;
    uStack_a0 = uStack_d8;
    uStack_98 = uStack_d0;
    uStack_90 = uStack_c8;
    uStack_88 = uStack_c0;
    uStack_80 = uStack_b8;
    Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions(param_1,&uStack_e0);
  }
  return uVar1;
}



// ============================================================
// RVA: 0x1478f10 | Atlas.Gameplay.FTUE.BaseLayerFTUEManager.AddBaseListener
// ============================================================

/* WARNING: Possible PIC construction at 0x0147925c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01479260) */
/* WARNING: Removing unreachable block (ram,0x01479264) */
/* WARNING: Removing unreachable block (ram,0x015d9a00) */
/* WARNING: Removing unreachable block (ram,0x015d9a24) */
/* WARNING: Removing unreachable block (ram,0x015d9a38) */
/* WARNING: Removing unreachable block (ram,0x015d9a44) */
/* WARNING: Removing unreachable block (ram,0x015d9a5c) */
/* WARNING: Removing unreachable block (ram,0x015d9a98) */
/* WARNING: Removing unreachable block (ram,0x015d9ac4) */
/* WARNING: Removing unreachable block (ram,0x015d9ad8) */
/* WARNING: Removing unreachable block (ram,0x015d9ae4) */
/* WARNING: Removing unreachable block (ram,0x015d9afc) */
/* WARNING: Removing unreachable block (ram,0x015d9b38) */
/* WARNING: Removing unreachable block (ram,0x015d9b64) */
/* WARNING: Removing unreachable block (ram,0x015d9b78) */
/* WARNING: Removing unreachable block (ram,0x015d9b84) */
/* WARNING: Removing unreachable block (ram,0x015d9b9c) */
/* WARNING: Removing unreachable block (ram,0x015d9bd8) */
/* WARNING: Removing unreachable block (ram,0x015d9c04) */
/* WARNING: Removing unreachable block (ram,0x015d9c18) */
/* WARNING: Removing unreachable block (ram,0x015d9c24) */
/* WARNING: Removing unreachable block (ram,0x015d9c3c) */
/* WARNING: Removing unreachable block (ram,0x015d9c78) */
/* WARNING: Removing unreachable block (ram,0x015d9ca4) */
/* WARNING: Removing unreachable block (ram,0x015d9cb8) */
/* WARNING: Removing unreachable block (ram,0x015d9cc4) */
/* WARNING: Removing unreachable block (ram,0x015d9cdc) */
/* WARNING: Removing unreachable block (ram,0x015d9d18) */
/* WARNING: Removing unreachable block (ram,0x015d9d44) */
/* WARNING: Removing unreachable block (ram,0x015d9d58) */
/* WARNING: Removing unreachable block (ram,0x015d9d64) */
/* WARNING: Removing unreachable block (ram,0x015d9d7c) */
/* WARNING: Removing unreachable block (ram,0x015d9db8) */
/* WARNING: Removing unreachable block (ram,0x015d9de4) */
/* WARNING: Removing unreachable block (ram,0x015d9df8) */
/* WARNING: Removing unreachable block (ram,0x015d9e04) */
/* WARNING: Removing unreachable block (ram,0x015d9e1c) */
/* WARNING: Removing unreachable block (ram,0x015d9e58) */
/* WARNING: Removing unreachable block (ram,0x015d9e2c) */
/* WARNING: Removing unreachable block (ram,0x015d9e48) */
/* WARNING: Removing unreachable block (ram,0x015d9d8c) */
/* WARNING: Removing unreachable block (ram,0x015d9da8) */
/* WARNING: Removing unreachable block (ram,0x015d9cec) */
/* WARNING: Removing unreachable block (ram,0x015d9d08) */
/* WARNING: Removing unreachable block (ram,0x015d9c4c) */
/* WARNING: Removing unreachable block (ram,0x015d9c68) */
/* WARNING: Removing unreachable block (ram,0x015d9bac) */
/* WARNING: Removing unreachable block (ram,0x015d9bc8) */
/* WARNING: Removing unreachable block (ram,0x015d9b0c) */
/* WARNING: Removing unreachable block (ram,0x015d9b28) */
/* WARNING: Removing unreachable block (ram,0x015d9a6c) */
/* WARNING: Removing unreachable block (ram,0x015d9a88) */

ulong Atlas_Gameplay_FTUE_BaseLayerFTUEManager__AddBaseListener
                (long param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  undefined8 ****ppppuVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long extraout_x1;
  undefined8 *puVar10;
  undefined4 uVar11;
  uint extraout_w8;
  long lVar12;
  long extraout_x9;
  ulong unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  long lVar13;
  code *pcVar14;
  undefined8 ****ppppuVar15;
  undefined *puVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 ***pppuStack_f0;
  undefined *puStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  undefined8 **ppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_50;
  undefined *puStack_48;
  long *plVar9;
  
  puVar10 = param_3;
  lVar12 = param_4;
  if ((bRam0000000003eb48a4 & 1) == 0) {
    func_0x00f78a20(0x3d3cd98);
    bRam0000000003eb48a4 = 1;
  }
  if (param_4 == 0) {
LAB_01478f98:
    auVar19 = func_0x00f78af4();
    uVar7 = auVar19._8_8_;
    uVar5 = auVar19._0_8_;
    puVar8 = &uStack_c0;
    puStack_48 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__OnCollideWithHitTrigger;
    puStack_50 = (undefined8 *)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb48a6 & 1) == 0) {
      func_0x00f78a20(0x3d21b08);
      bRam0000000003eb48a6 = 1;
    }
    uStack_88 = 0;
    if (((*(ushort *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar6 = Atlas_Contexts_GameContextBase__TryGetLocalHumanPlayerFromCollider(uVar7,&uStack_88,0);
    if ((int)uVar6 != 0) {
      uStack_b8 = puVar10[1];
      uStack_c0 = *puVar10;
      uStack_a8 = puVar10[3];
      uStack_b0 = puVar10[2];
      uStack_98 = puVar10[5];
      uStack_a0 = puVar10[4];
      uStack_90 = puVar10[6];
      uVar6 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions(uVar5,uStack_88);
      if ((int)uVar6 != 0) {
        if (lVar12 == 0) {
          auVar19 = func_0x00f78af4();
          puStack_c8 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CanTriggerReaction;
          uStack_e0 = uVar5;
          lStack_d8 = lVar12;
          ppuStack_d0 = &puStack_50;
          if (puVar8 == (undefined8 *)0x0) {
            func_0x00f78af4();
            ppppuVar15 = &pppuStack_f0;
            puStack_e8 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsValidHumanCollision;
            pppuStack_f0 = &ppuStack_d0;
            if (extraout_x1 != 0) {
              uVar3 = Atlas_Gameplay_Kart_KartComposite__get_IsRespawning(extraout_x1,0);
              return (ulong)(uVar3 ^ 1);
            }
            puVar16 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetAIRespawnDelegate;
            auVar17 = func_0x00f78af4();
            auVar19._8_8_ = 0;
            auVar19._0_8_ = uVar5;
            ppppuVar1 = &pppuStack_f0;
            while( true ) {
              *(undefined8 *)((long)ppppuVar1 + -0x30) = uVar7;
              *(undefined8 **)((long)ppppuVar1 + -0x28) = puVar10;
              *(undefined1 (*) [16])((long)ppppuVar1 + -0x20) = auVar19;
              *(undefined8 *****)((long)ppppuVar1 + -0x10) = ppppuVar15;
              *(undefined **)((long)ppppuVar1 + -8) = puVar16;
              puVar10 = (undefined8 *)0x3eb4000;
              if ((bRam0000000003eb48a9 & 1) == 0) {
                func_0x00f78a20(0x3d33330);
                func_0x00f78a20(0x3d33338);
                func_0x00f78a20(0x3d33340);
                func_0x00f78a20(0x3d3cd88);
                bRam0000000003eb48a9 = 1;
              }
              *(undefined8 *)((long)ppppuVar1 + -0x48) = 0;
              *(undefined8 *)((long)ppppuVar1 + -0x50) = 0;
              *(undefined8 *)((long)ppppuVar1 + -0x38) = 0;
              *(undefined8 *)((long)ppppuVar1 + -0x40) = 0;
              lVar12 = *(long *)(auVar17._0_8_ + 0xb0);
              if (lVar12 != 0) {
                /*System.Collections.Generic.List<BaseLayerFTUEManager.AIDelegateRespawnPair>$$GetEnumerator*/ func_0x024c6cf0((undefined1 *)((long)ppppuVar1 + -0x50),lVar12,uRam0000000003d3cd88)
                ;
                goto code_r0x01479180;
              }
              auVar19 = func_0x00f78af4();
              if (auVar19._8_4_ == 1) {
                func_0x032fee1c(auVar19._0_8_,auVar19._8_8_,(undefined1 *)((long)ppppuVar1 + -0x50))
                ;
                return 0;
              }
              auVar19 = __Unwind_Resume();
              lVar12 = auVar19._8_8_;
              puVar2 = (undefined8 *)((long)ppppuVar1 + -0x90);
              *(undefined8 *)((long)ppppuVar1 + -0x90) = uVar7;
              *(undefined8 *)((long)ppppuVar1 + -0x88) = 0x3eb4000;
              *(undefined1 (*) [16])((long)ppppuVar1 + -0x80) = auVar17;
              *(undefined1 **)((long)ppppuVar1 + -0x70) = (undefined1 *)((long)ppppuVar1 + -0x10);
              *(undefined **)((long)ppppuVar1 + -0x68) =
                   &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__ResetKartRacePosition;
              ppppuVar15 = (undefined8 ****)((long)ppppuVar1 + -0x70);
              if (lVar12 == 0) break;
              if (*(char *)(lVar12 + 0x98) == '\0') {
                /*Atlas.Gameplay.Player.GameContextPlayer$$SetKartProgressToBeginningOfLap*/ func_0x015a56b0(lVar12,1,0,0);
              }
              auVar17 = auVar19;
              if ((*(long *)(lVar12 + 0x10) == 0) ||
                 (lVar12 = *(long *)(*(long *)(lVar12 + 0x10) + 0x10), lVar12 == 0)) break;
              puVar10 = *(undefined8 **)(lVar12 + 0x60);
              puVar16 = &UNK_01479260;
              ppppuVar1 = (undefined8 ****)((long)ppppuVar1 + -0x90);
            }
            puVar16 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__AreInTriggerSection;
            auVar18 = func_0x00f78af4();
          }
          else {
            uVar5 = Atlas_Gameplay_Kart_KartComposite__get_IsRespawning(puVar8,0);
            auVar17._8_8_ = lStack_d8;
            auVar17._0_8_ = uStack_e0;
            if ((uVar5 & 1) != 0) {
              return 0;
            }
            auVar18._8_8_ = *(undefined8 *)(auVar19._8_8_ + 8);
            auVar18._0_8_ = auVar19._0_8_;
            puVar2 = &uStack_c0;
            ppppuVar15 = (undefined8 ****)ppuStack_d0;
            puVar16 = puStack_c8;
          }
          *(undefined8 *)((long)puVar2 + -0x30) = uVar7;
          *(undefined8 **)((long)puVar2 + -0x28) = puVar10;
          *(undefined1 (*) [16])((long)puVar2 + -0x20) = auVar17;
          *(undefined8 *****)((long)puVar2 + -0x10) = ppppuVar15;
          *(undefined **)((long)puVar2 + -8) = puVar16;
          *(long *)((long)puVar2 + -0x38) = auVar18._8_8_;
          if ((bRam0000000003eb48aa & 1) == 0) {
            func_0x00f78a20(0x3d24e08);
            bRam0000000003eb48aa = 1;
          }
          *(undefined8 *)((long)puVar2 + -0x40) = *(undefined8 *)(auVar18._0_8_ + 0xa8);
          uVar7 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,(undefined1 *)((long)puVar2 + -0x40));
          uVar5 = /*Atlas.StringID$$Equals*/ func_0x015057f8((undefined1 *)((long)puVar2 + -0x38),uVar7,0);
          if ((uVar5 & 1) == 0) {
            uVar5 = /*Atlas.StringID$$get_IsValid*/ func_0x01505738((undefined1 *)((long)puVar2 + -0x38),0);
            if ((uVar5 & 1) == 0) {
              uVar3 = /*Atlas.StringID$$get_IsValid*/ func_0x01505738(auVar18._0_8_ + 0xa8,0);
              uVar5 = (ulong)(uVar3 ^ 1);
            }
            else {
              uVar5 = 0;
            }
          }
          else {
            uVar5 = 1;
          }
          return uVar5;
        }
        uVar6 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RemoveBaseListener
                          (uVar5,*(undefined8 *)(lVar12 + 0x18));
      }
    }
    return uVar6;
  }
  puVar10 = (undefined8 *)0x0;
  /*Atlas.Gameplay.HitVolumeBehaviour$$add_OnEnter*/ func_0x015b49e0(param_4,param_3);
  uVar5 = *(ulong *)(param_1 + 0x48);
  if (uVar5 == 0) goto LAB_01478f98;
  lVar12 = *(long *)(uVar5 + 0x10);
  puVar10 = param_3;
  if (lVar12 == 0) {
code_r0x024c8d20:
    param_2 = unaff_x21;
    param_3 = unaff_x20;
    uVar5 = unaff_x19;
    uVar6 = func_0x00f78af4();
    lVar12 = extraout_x9;
    uVar3 = extraout_w8;
code_r0x024c8d24:
    *(uint *)(uVar5 + 0x18) = uVar3 + 1;
  }
  else {
    uVar3 = *(uint *)(uVar5 + 0x18);
    uVar6 = uVar5;
    if (uVar3 != *(uint *)(lVar12 + 0x18)) goto code_r0x024c8d24;
    puVar10 = *(undefined8 **)(*(long *)(*(long *)(lRam0000000003d3cd98 + 0x18) + 0xc0) + 0x60);
    uVar6 = (*(code *)*puVar10)(uVar5,uVar3 + 1);
    lVar12 = *(long *)(uVar5 + 0x10);
    uVar3 = *(uint *)(uVar5 + 0x18);
    *(uint *)(uVar5 + 0x18) = uVar3 + 1;
    unaff_x19 = uVar5;
    unaff_x20 = param_3;
    unaff_x21 = param_2;
    if (lVar12 == 0) goto code_r0x024c8d20;
  }
  if (uVar3 < *(uint *)(lVar12 + 0x18)) {
    lVar12 = lVar12 + (long)(int)uVar3 * 0x10;
    *(undefined8 *)(lVar12 + 0x20) = param_2;
    *(undefined8 **)(lVar12 + 0x28) = param_3;
    *(int *)(uVar5 + 0x1c) = *(int *)(uVar5 + 0x1c) + 1;
    return uVar6;
  }
  uVar7 = func_0x00f78b24();
  auVar19 = func_0x00f78ac0(uVar7,0);
  plVar9 = auVar19._8_8_;
  lVar12 = auVar19._0_8_;
  puStack_50 = param_3;
  puStack_48 = (undefined *)uVar5;
  (*(code *)**(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 0x48))(plVar9,0x14);
  if (lVar12 != 0) {
    pcVar14 = (code *)**(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 0x28);
    lVar13 = *(long *)(*(long *)(puVar10[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar13);
    }
    if (plVar9 != (long *)0x0) {
      if (*(long *)(*plVar9 + 0x40) == *(long *)(lVar13 + 0x40)) {
        puVar8 = (undefined8 *)func_0x00f78ae4(plVar9);
        (*pcVar14)(lVar12,*puVar8,puVar8[1],*(undefined8 *)(*(long *)(puVar10[3] + 0xc0) + 0x28));
        iVar4 = (*(code *)**(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 0x68))(lVar12);
        return (ulong)(iVar4 - 1);
      }
      func_0x00f78e5c(plVar9,lVar13);
      goto code_r0x024c8f0c;
    }
  }
  func_0x00f78af4();
code_r0x024c8f0c:
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x24c8f10);
  (*pcVar14)();
  while (*(long *)((long)ppppuVar1 + -0x40) != auVar17._8_8_) {
code_r0x01479180:
    uVar5 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEManager.AIDelegateRespawnPair>$$MoveNext*/ func_0x01f7a160((undefined1 *)((long)ppppuVar1 + -0x50),uRam0000000003d33338);
    if ((uVar5 & 1) == 0) {
      uVar5 = 0;
      uVar11 = 0x41;
      goto code_r0x014791b0;
    }
  }
  uVar5 = *(ulong *)((long)ppppuVar1 + -0x38);
  uVar11 = 0x43;
code_r0x014791b0:
  *(undefined4 *)((long)ppppuVar1 + -0x60) = uVar11;
  /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEManager.AIDelegateRespawnPair>$$Dispose*/ func_0x01f7a15c((undefined1 *)((long)ppppuVar1 + -0x50),uRam0000000003d33330);
  if (*(int *)((long)ppppuVar1 + -0x60) != 0x43) {
    uVar5 = 0;
  }
  return uVar5;
}



// ============================================================
// RVA: 0x1478f9c | Atlas.Gameplay.FTUE.BaseLayerFTUEManager.OnCollideWithHitTrigger
// ============================================================

/* WARNING: Possible PIC construction at 0x0147925c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01479260) */
/* WARNING: Removing unreachable block (ram,0x01479264) */
/* WARNING: Removing unreachable block (ram,0x015d9a00) */
/* WARNING: Removing unreachable block (ram,0x015d9a24) */
/* WARNING: Removing unreachable block (ram,0x015d9a38) */
/* WARNING: Removing unreachable block (ram,0x015d9a44) */
/* WARNING: Removing unreachable block (ram,0x015d9a5c) */
/* WARNING: Removing unreachable block (ram,0x015d9a98) */
/* WARNING: Removing unreachable block (ram,0x015d9ac4) */
/* WARNING: Removing unreachable block (ram,0x015d9ad8) */
/* WARNING: Removing unreachable block (ram,0x015d9ae4) */
/* WARNING: Removing unreachable block (ram,0x015d9afc) */
/* WARNING: Removing unreachable block (ram,0x015d9b38) */
/* WARNING: Removing unreachable block (ram,0x015d9b64) */
/* WARNING: Removing unreachable block (ram,0x015d9b78) */
/* WARNING: Removing unreachable block (ram,0x015d9b84) */
/* WARNING: Removing unreachable block (ram,0x015d9b9c) */
/* WARNING: Removing unreachable block (ram,0x015d9bd8) */
/* WARNING: Removing unreachable block (ram,0x015d9c04) */
/* WARNING: Removing unreachable block (ram,0x015d9c18) */
/* WARNING: Removing unreachable block (ram,0x015d9c24) */
/* WARNING: Removing unreachable block (ram,0x015d9c3c) */
/* WARNING: Removing unreachable block (ram,0x015d9c78) */
/* WARNING: Removing unreachable block (ram,0x015d9ca4) */
/* WARNING: Removing unreachable block (ram,0x015d9cb8) */
/* WARNING: Removing unreachable block (ram,0x015d9cc4) */
/* WARNING: Removing unreachable block (ram,0x015d9cdc) */
/* WARNING: Removing unreachable block (ram,0x015d9d18) */
/* WARNING: Removing unreachable block (ram,0x015d9d44) */
/* WARNING: Removing unreachable block (ram,0x015d9d58) */
/* WARNING: Removing unreachable block (ram,0x015d9d64) */
/* WARNING: Removing unreachable block (ram,0x015d9d7c) */
/* WARNING: Removing unreachable block (ram,0x015d9db8) */
/* WARNING: Removing unreachable block (ram,0x015d9de4) */
/* WARNING: Removing unreachable block (ram,0x015d9df8) */
/* WARNING: Removing unreachable block (ram,0x015d9e04) */
/* WARNING: Removing unreachable block (ram,0x015d9e1c) */
/* WARNING: Removing unreachable block (ram,0x015d9e58) */
/* WARNING: Removing unreachable block (ram,0x015d9e2c) */
/* WARNING: Removing unreachable block (ram,0x015d9e48) */
/* WARNING: Removing unreachable block (ram,0x015d9d8c) */
/* WARNING: Removing unreachable block (ram,0x015d9da8) */
/* WARNING: Removing unreachable block (ram,0x015d9cec) */
/* WARNING: Removing unreachable block (ram,0x015d9d08) */
/* WARNING: Removing unreachable block (ram,0x015d9c4c) */
/* WARNING: Removing unreachable block (ram,0x015d9c68) */
/* WARNING: Removing unreachable block (ram,0x015d9bac) */
/* WARNING: Removing unreachable block (ram,0x015d9bc8) */
/* WARNING: Removing unreachable block (ram,0x015d9b0c) */
/* WARNING: Removing unreachable block (ram,0x015d9b28) */
/* WARNING: Removing unreachable block (ram,0x015d9a6c) */
/* WARNING: Removing unreachable block (ram,0x015d9a88) */

ulong Atlas_Gameplay_FTUE_BaseLayerFTUEManager__OnCollideWithHitTrigger
                (undefined8 param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  undefined1 ***pppuVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long extraout_x1;
  undefined8 *puVar7;
  undefined4 uVar8;
  long lVar9;
  undefined1 ***pppuVar10;
  undefined *puVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar7 = &uStack_80;
  puVar2 = &uStack_80;
  if ((bRam0000000003eb48a6 & 1) == 0) {
    func_0x00f78a20(0x3d21b08);
    bRam0000000003eb48a6 = 1;
  }
  uStack_48 = 0;
  if (((*(ushort *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar4 = Atlas_Contexts_GameContextBase__TryGetLocalHumanPlayerFromCollider(param_2,&uStack_48,0);
  if ((int)uVar4 != 0) {
    uStack_78 = param_3[1];
    uStack_80 = *param_3;
    uStack_68 = param_3[3];
    uStack_70 = param_3[2];
    uStack_58 = param_3[5];
    uStack_60 = param_3[4];
    uStack_50 = param_3[6];
    uVar4 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions(param_1,uStack_48);
    if ((int)uVar4 != 0) {
      if (param_4 == 0) {
        auVar12 = func_0x00f78af4();
        puStack_88 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CanTriggerReaction;
        uStack_a0 = param_1;
        lStack_98 = param_4;
        puStack_90 = &stack0xfffffffffffffff0;
        if (puVar7 == (undefined8 *)0x0) {
          func_0x00f78af4();
          pppuVar10 = &ppuStack_b0;
          puStack_a8 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsValidHumanCollision;
          ppuStack_b0 = &puStack_90;
          if (extraout_x1 != 0) {
            uVar3 = Atlas_Gameplay_Kart_KartComposite__get_IsRespawning(extraout_x1,0);
            return (ulong)(uVar3 ^ 1);
          }
          puVar11 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetAIRespawnDelegate;
          auVar13 = func_0x00f78af4();
          lVar5 = 0;
          pppuVar1 = &ppuStack_b0;
          while( true ) {
            *(undefined8 *)((long)pppuVar1 + -0x30) = param_2;
            *(undefined8 **)((long)pppuVar1 + -0x28) = param_3;
            *(undefined8 *)((long)pppuVar1 + -0x20) = param_1;
            *(long *)((long)pppuVar1 + -0x18) = lVar5;
            *(undefined1 ****)((long)pppuVar1 + -0x10) = pppuVar10;
            *(undefined **)((long)pppuVar1 + -8) = puVar11;
            param_3 = (undefined8 *)0x3eb4000;
            if ((bRam0000000003eb48a9 & 1) == 0) {
              func_0x00f78a20(0x3d33330);
              func_0x00f78a20(0x3d33338);
              func_0x00f78a20(0x3d33340);
              func_0x00f78a20(0x3d3cd88);
              bRam0000000003eb48a9 = 1;
            }
            *(undefined8 *)((long)pppuVar1 + -0x48) = 0;
            *(undefined8 *)((long)pppuVar1 + -0x50) = 0;
            *(undefined8 *)((long)pppuVar1 + -0x38) = 0;
            *(undefined8 *)((long)pppuVar1 + -0x40) = 0;
            lVar5 = *(long *)(auVar13._0_8_ + 0xb0);
            if (lVar5 != 0) {
              /*System.Collections.Generic.List<BaseLayerFTUEManager.AIDelegateRespawnPair>$$GetEnumerator*/ func_0x024c6cf0((undefined1 *)((long)pppuVar1 + -0x50),lVar5,uRam0000000003d3cd88);
              goto code_r0x01479180;
            }
            auVar12 = func_0x00f78af4();
            if (auVar12._8_4_ == 1) {
              func_0x032fee1c(auVar12._0_8_,auVar12._8_8_,(undefined1 *)((long)pppuVar1 + -0x50));
              return 0;
            }
            auVar12 = __Unwind_Resume();
            lVar5 = auVar12._8_8_;
            param_1 = auVar12._0_8_;
            puVar2 = (undefined8 *)((long)pppuVar1 + -0x90);
            *(undefined8 *)((long)pppuVar1 + -0x90) = param_2;
            *(undefined8 *)((long)pppuVar1 + -0x88) = 0x3eb4000;
            *(undefined1 (*) [16])((long)pppuVar1 + -0x80) = auVar13;
            *(undefined1 **)((long)pppuVar1 + -0x70) = (undefined1 *)((long)pppuVar1 + -0x10);
            *(undefined **)((long)pppuVar1 + -0x68) =
                 &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__ResetKartRacePosition;
            pppuVar10 = (undefined1 ***)((long)pppuVar1 + -0x70);
            if (lVar5 == 0) break;
            if (*(char *)(lVar5 + 0x98) == '\0') {
              /*Atlas.Gameplay.Player.GameContextPlayer$$SetKartProgressToBeginningOfLap*/ func_0x015a56b0(lVar5,1,0,0);
            }
            auVar13 = auVar12;
            if ((*(long *)(lVar5 + 0x10) == 0) ||
               (lVar9 = *(long *)(*(long *)(lVar5 + 0x10) + 0x10), lVar9 == 0)) break;
            param_3 = *(undefined8 **)(lVar9 + 0x60);
            puVar11 = &UNK_01479260;
            pppuVar1 = (undefined1 ***)((long)pppuVar1 + -0x90);
          }
          puVar11 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__AreInTriggerSection;
          auVar14 = func_0x00f78af4();
        }
        else {
          uVar4 = Atlas_Gameplay_Kart_KartComposite__get_IsRespawning(puVar7,0);
          auVar13._8_8_ = lStack_98;
          auVar13._0_8_ = uStack_a0;
          if ((uVar4 & 1) != 0) {
            return 0;
          }
          auVar14._8_8_ = *(undefined8 *)(auVar12._8_8_ + 8);
          auVar14._0_8_ = auVar12._0_8_;
          pppuVar10 = (undefined1 ***)puStack_90;
          puVar11 = puStack_88;
        }
        *(undefined8 *)((long)puVar2 + -0x30) = param_2;
        *(undefined8 **)((long)puVar2 + -0x28) = param_3;
        *(undefined1 (*) [16])((long)puVar2 + -0x20) = auVar13;
        *(undefined1 ****)((long)puVar2 + -0x10) = pppuVar10;
        *(undefined **)((long)puVar2 + -8) = puVar11;
        *(long *)((long)puVar2 + -0x38) = auVar14._8_8_;
        if ((bRam0000000003eb48aa & 1) == 0) {
          func_0x00f78a20(0x3d24e08);
          bRam0000000003eb48aa = 1;
        }
        *(undefined8 *)((long)puVar2 + -0x40) = *(undefined8 *)(auVar14._0_8_ + 0xa8);
        uVar6 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,(undefined1 *)((long)puVar2 + -0x40));
        uVar4 = /*Atlas.StringID$$Equals*/ func_0x015057f8((undefined1 *)((long)puVar2 + -0x38),uVar6,0);
        if ((uVar4 & 1) == 0) {
          uVar4 = /*Atlas.StringID$$get_IsValid*/ func_0x01505738((undefined1 *)((long)puVar2 + -0x38),0);
          if ((uVar4 & 1) == 0) {
            uVar3 = /*Atlas.StringID$$get_IsValid*/ func_0x01505738(auVar14._0_8_ + 0xa8,0);
            uVar4 = (ulong)(uVar3 ^ 1);
          }
          else {
            uVar4 = 0;
          }
        }
        else {
          uVar4 = 1;
        }
        return uVar4;
      }
      uVar4 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RemoveBaseListener
                        (param_1,*(undefined8 *)(param_4 + 0x18));
    }
  }
  return uVar4;
  while (*(long *)((long)pppuVar1 + -0x40) != auVar13._8_8_) {
code_r0x01479180:
    uVar4 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEManager.AIDelegateRespawnPair>$$MoveNext*/ func_0x01f7a160((undefined1 *)((long)pppuVar1 + -0x50),uRam0000000003d33338);
    if ((uVar4 & 1) == 0) {
      uVar4 = 0;
      uVar8 = 0x41;
      goto code_r0x014791b0;
    }
  }
  uVar4 = *(ulong *)((long)pppuVar1 + -0x38);
  uVar8 = 0x43;
code_r0x014791b0:
  *(undefined4 *)((long)pppuVar1 + -0x60) = uVar8;
  /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEManager.AIDelegateRespawnPair>$$Dispose*/ func_0x01f7a15c((undefined1 *)((long)pppuVar1 + -0x50),uRam0000000003d33330);
  if (*(int *)((long)pppuVar1 + -0x60) != 0x43) {
    uVar4 = 0;
  }
  return uVar4;
}



// ============================================================
// RVA: 0x1479074 | Atlas.Gameplay.FTUE.BaseLayerFTUEManager.CanTriggerReaction
// ============================================================

/* WARNING: Possible PIC construction at 0x0147925c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01479260) */
/* WARNING: Removing unreachable block (ram,0x01479264) */
/* WARNING: Removing unreachable block (ram,0x015d9a00) */
/* WARNING: Removing unreachable block (ram,0x015d9a24) */
/* WARNING: Removing unreachable block (ram,0x015d9a38) */
/* WARNING: Removing unreachable block (ram,0x015d9a44) */
/* WARNING: Removing unreachable block (ram,0x015d9a5c) */
/* WARNING: Removing unreachable block (ram,0x015d9a98) */
/* WARNING: Removing unreachable block (ram,0x015d9ac4) */
/* WARNING: Removing unreachable block (ram,0x015d9ad8) */
/* WARNING: Removing unreachable block (ram,0x015d9ae4) */
/* WARNING: Removing unreachable block (ram,0x015d9afc) */
/* WARNING: Removing unreachable block (ram,0x015d9b38) */
/* WARNING: Removing unreachable block (ram,0x015d9b64) */
/* WARNING: Removing unreachable block (ram,0x015d9b78) */
/* WARNING: Removing unreachable block (ram,0x015d9b84) */
/* WARNING: Removing unreachable block (ram,0x015d9b9c) */
/* WARNING: Removing unreachable block (ram,0x015d9bd8) */
/* WARNING: Removing unreachable block (ram,0x015d9c04) */
/* WARNING: Removing unreachable block (ram,0x015d9c18) */
/* WARNING: Removing unreachable block (ram,0x015d9c24) */
/* WARNING: Removing unreachable block (ram,0x015d9c3c) */
/* WARNING: Removing unreachable block (ram,0x015d9c78) */
/* WARNING: Removing unreachable block (ram,0x015d9ca4) */
/* WARNING: Removing unreachable block (ram,0x015d9cb8) */
/* WARNING: Removing unreachable block (ram,0x015d9cc4) */
/* WARNING: Removing unreachable block (ram,0x015d9cdc) */
/* WARNING: Removing unreachable block (ram,0x015d9d18) */
/* WARNING: Removing unreachable block (ram,0x015d9d44) */
/* WARNING: Removing unreachable block (ram,0x015d9d58) */
/* WARNING: Removing unreachable block (ram,0x015d9d64) */
/* WARNING: Removing unreachable block (ram,0x015d9d7c) */
/* WARNING: Removing unreachable block (ram,0x015d9db8) */
/* WARNING: Removing unreachable block (ram,0x015d9de4) */
/* WARNING: Removing unreachable block (ram,0x015d9df8) */
/* WARNING: Removing unreachable block (ram,0x015d9e04) */
/* WARNING: Removing unreachable block (ram,0x015d9e1c) */
/* WARNING: Removing unreachable block (ram,0x015d9e58) */
/* WARNING: Removing unreachable block (ram,0x015d9e2c) */
/* WARNING: Removing unreachable block (ram,0x015d9e48) */
/* WARNING: Removing unreachable block (ram,0x015d9d8c) */
/* WARNING: Removing unreachable block (ram,0x015d9da8) */
/* WARNING: Removing unreachable block (ram,0x015d9cec) */
/* WARNING: Removing unreachable block (ram,0x015d9d08) */
/* WARNING: Removing unreachable block (ram,0x015d9c4c) */
/* WARNING: Removing unreachable block (ram,0x015d9c68) */
/* WARNING: Removing unreachable block (ram,0x015d9bac) */
/* WARNING: Removing unreachable block (ram,0x015d9bc8) */
/* WARNING: Removing unreachable block (ram,0x015d9b0c) */
/* WARNING: Removing unreachable block (ram,0x015d9b28) */
/* WARNING: Removing unreachable block (ram,0x015d9a6c) */
/* WARNING: Removing unreachable block (ram,0x015d9a88) */

ulong Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CanTriggerReaction
                (long param_1,long param_2,long param_3)

{
  undefined1 **ppuVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x1;
  undefined4 uVar6;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 **unaff_x29;
  undefined *unaff_x30;
  undefined *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  auVar9._8_8_ = unaff_x19;
  auVar9._0_8_ = unaff_x20;
  if (param_3 == 0) {
    func_0x00f78af4();
    unaff_x29 = &puStack_30;
    puStack_28 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsValidHumanCollision;
    puStack_30 = &stack0xfffffffffffffff0;
    if (extraout_x1 != 0) {
      uVar2 = Atlas_Gameplay_Kart_KartComposite__get_IsRespawning(extraout_x1,0);
      return (ulong)(uVar2 ^ 1);
    }
    puVar7 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetAIRespawnDelegate;
    auVar8 = func_0x00f78af4();
    ppuVar1 = &puStack_30;
    while( true ) {
      *(undefined8 *)((long)ppuVar1 + -0x30) = unaff_x22;
      *(undefined8 *)((long)ppuVar1 + -0x28) = unaff_x21;
      *(undefined1 (*) [16])((long)ppuVar1 + -0x20) = auVar9;
      *(undefined1 ***)((long)ppuVar1 + -0x10) = unaff_x29;
      *(undefined **)((long)ppuVar1 + -8) = puVar7;
      unaff_x21 = 0x3eb4000;
      if ((bRam0000000003eb48a9 & 1) == 0) {
        func_0x00f78a20(0x3d33330);
        func_0x00f78a20(0x3d33338);
        func_0x00f78a20(0x3d33340);
        func_0x00f78a20(0x3d3cd88);
        bRam0000000003eb48a9 = 1;
      }
      *(undefined8 *)((long)ppuVar1 + -0x48) = 0;
      *(undefined8 *)((long)ppuVar1 + -0x50) = 0;
      *(undefined8 *)((long)ppuVar1 + -0x38) = 0;
      *(undefined8 *)((long)ppuVar1 + -0x40) = 0;
      lVar4 = *(long *)(auVar8._0_8_ + 0xb0);
      if (lVar4 != 0) {
        /*System.Collections.Generic.List<BaseLayerFTUEManager.AIDelegateRespawnPair>$$GetEnumerator*/ func_0x024c6cf0((undefined1 *)((long)ppuVar1 + -0x50),lVar4,uRam0000000003d3cd88);
        goto code_r0x01479180;
      }
      auVar9 = func_0x00f78af4();
      if (auVar9._8_4_ == 1) {
        func_0x032fee1c(auVar9._0_8_,auVar9._8_8_,(undefined1 *)((long)ppuVar1 + -0x50));
        return 0;
      }
      auVar9 = __Unwind_Resume();
      lVar4 = auVar9._8_8_;
      register0x00000008 = (BADSPACEBASE *)((long)ppuVar1 + -0x90);
      *(undefined8 *)((long)ppuVar1 + -0x90) = unaff_x22;
      *(undefined8 *)((long)ppuVar1 + -0x88) = 0x3eb4000;
      *(undefined1 (*) [16])((long)ppuVar1 + -0x80) = auVar8;
      *(undefined1 **)((long)ppuVar1 + -0x70) = (undefined1 *)((long)ppuVar1 + -0x10);
      *(undefined **)((long)ppuVar1 + -0x68) =
           &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__ResetKartRacePosition;
      unaff_x29 = (undefined1 **)((long)ppuVar1 + -0x70);
      if (lVar4 == 0) break;
      if (*(char *)(lVar4 + 0x98) == '\0') {
        /*Atlas.Gameplay.Player.GameContextPlayer$$SetKartProgressToBeginningOfLap*/ func_0x015a56b0(lVar4,1,0,0);
      }
      auVar8 = auVar9;
      if ((*(long *)(lVar4 + 0x10) == 0) ||
         (lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + 0x10), lVar4 == 0)) break;
      unaff_x21 = *(undefined8 *)(lVar4 + 0x60);
      puVar7 = &UNK_01479260;
      ppuVar1 = (undefined1 **)((long)ppuVar1 + -0x90);
    }
    unaff_x30 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__AreInTriggerSection;
    auVar9 = func_0x00f78af4();
    uVar5 = auVar9._8_8_;
    param_1 = auVar9._0_8_;
  }
  else {
    uVar3 = Atlas_Gameplay_Kart_KartComposite__get_IsRespawning(param_3,0);
    if ((uVar3 & 1) != 0) {
      return 0;
    }
    uVar5 = *(undefined8 *)(param_2 + 8);
    auVar8 = auVar9;
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined1 (*) [16])((long)register0x00000008 + -0x20) = auVar8;
  *(undefined1 ***)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x38) = uVar5;
  if ((bRam0000000003eb48aa & 1) == 0) {
    func_0x00f78a20(0x3d24e08);
    bRam0000000003eb48aa = 1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x40) = *(undefined8 *)(param_1 + 0xa8);
  uVar5 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,(undefined1 *)((long)register0x00000008 + -0x40));
  uVar3 = /*Atlas.StringID$$Equals*/ func_0x015057f8((undefined1 *)((long)register0x00000008 + -0x38),uVar5,0);
  if ((uVar3 & 1) == 0) {
    uVar3 = /*Atlas.StringID$$get_IsValid*/ func_0x01505738((undefined1 *)((long)register0x00000008 + -0x38),0);
    if ((uVar3 & 1) == 0) {
      uVar2 = /*Atlas.StringID$$get_IsValid*/ func_0x01505738(param_1 + 0xa8,0);
      uVar3 = (ulong)(uVar2 ^ 1);
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
  while (*(long *)((long)ppuVar1 + -0x40) != auVar8._8_8_) {
code_r0x01479180:
    uVar3 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEManager.AIDelegateRespawnPair>$$MoveNext*/ func_0x01f7a160((undefined1 *)((long)ppuVar1 + -0x50),uRam0000000003d33338);
    if ((uVar3 & 1) == 0) {
      uVar3 = 0;
      uVar6 = 0x41;
      goto code_r0x014791b0;
    }
  }
  uVar3 = *(ulong *)((long)ppuVar1 + -0x38);
  uVar6 = 0x43;
code_r0x014791b0:
  *(undefined4 *)((long)ppuVar1 + -0x60) = uVar6;
  /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEManager.AIDelegateRespawnPair>$$Dispose*/ func_0x01f7a15c((undefined1 *)((long)ppuVar1 + -0x50),uRam0000000003d33330);
  if (*(int *)((long)ppuVar1 + -0x60) != 0x43) {
    uVar3 = 0;
  }
  return uVar3;
}



// ============================================================
// RVA: 0x14790c4 | Atlas.Gameplay.FTUE.BaseLayerFTUEManager.IsValidHumanCollision
// ============================================================

/* WARNING: Possible PIC construction at 0x0147925c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01479260) */
/* WARNING: Removing unreachable block (ram,0x01479264) */
/* WARNING: Removing unreachable block (ram,0x015d9a00) */
/* WARNING: Removing unreachable block (ram,0x015d9a24) */
/* WARNING: Removing unreachable block (ram,0x015d9a38) */
/* WARNING: Removing unreachable block (ram,0x015d9a44) */
/* WARNING: Removing unreachable block (ram,0x015d9a5c) */
/* WARNING: Removing unreachable block (ram,0x015d9a98) */
/* WARNING: Removing unreachable block (ram,0x015d9ac4) */
/* WARNING: Removing unreachable block (ram,0x015d9ad8) */
/* WARNING: Removing unreachable block (ram,0x015d9ae4) */
/* WARNING: Removing unreachable block (ram,0x015d9afc) */
/* WARNING: Removing unreachable block (ram,0x015d9b38) */
/* WARNING: Removing unreachable block (ram,0x015d9b64) */
/* WARNING: Removing unreachable block (ram,0x015d9b78) */
/* WARNING: Removing unreachable block (ram,0x015d9b84) */
/* WARNING: Removing unreachable block (ram,0x015d9b9c) */
/* WARNING: Removing unreachable block (ram,0x015d9bd8) */
/* WARNING: Removing unreachable block (ram,0x015d9c04) */
/* WARNING: Removing unreachable block (ram,0x015d9c18) */
/* WARNING: Removing unreachable block (ram,0x015d9c24) */
/* WARNING: Removing unreachable block (ram,0x015d9c3c) */
/* WARNING: Removing unreachable block (ram,0x015d9c78) */
/* WARNING: Removing unreachable block (ram,0x015d9ca4) */
/* WARNING: Removing unreachable block (ram,0x015d9cb8) */
/* WARNING: Removing unreachable block (ram,0x015d9cc4) */
/* WARNING: Removing unreachable block (ram,0x015d9cdc) */
/* WARNING: Removing unreachable block (ram,0x015d9d18) */
/* WARNING: Removing unreachable block (ram,0x015d9d44) */
/* WARNING: Removing unreachable block (ram,0x015d9d58) */
/* WARNING: Removing unreachable block (ram,0x015d9d64) */
/* WARNING: Removing unreachable block (ram,0x015d9d7c) */
/* WARNING: Removing unreachable block (ram,0x015d9db8) */
/* WARNING: Removing unreachable block (ram,0x015d9de4) */
/* WARNING: Removing unreachable block (ram,0x015d9df8) */
/* WARNING: Removing unreachable block (ram,0x015d9e04) */
/* WARNING: Removing unreachable block (ram,0x015d9e1c) */
/* WARNING: Removing unreachable block (ram,0x015d9e58) */
/* WARNING: Removing unreachable block (ram,0x015d9e2c) */
/* WARNING: Removing unreachable block (ram,0x015d9e48) */
/* WARNING: Removing unreachable block (ram,0x015d9d8c) */
/* WARNING: Removing unreachable block (ram,0x015d9da8) */
/* WARNING: Removing unreachable block (ram,0x015d9cec) */
/* WARNING: Removing unreachable block (ram,0x015d9d08) */
/* WARNING: Removing unreachable block (ram,0x015d9c4c) */
/* WARNING: Removing unreachable block (ram,0x015d9c68) */
/* WARNING: Removing unreachable block (ram,0x015d9bac) */
/* WARNING: Removing unreachable block (ram,0x015d9bc8) */
/* WARNING: Removing unreachable block (ram,0x015d9b0c) */
/* WARNING: Removing unreachable block (ram,0x015d9b28) */
/* WARNING: Removing unreachable block (ram,0x015d9a6c) */
/* WARNING: Removing unreachable block (ram,0x015d9a88) */

ulong Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsValidHumanCollision
                (undefined8 param_1,long param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  auVar10._8_8_ = unaff_x19;
  auVar10._0_8_ = unaff_x20;
  puVar7 = &stack0xfffffffffffffff0;
  if (param_2 != 0) {
    uVar2 = Atlas_Gameplay_Kart_KartComposite__get_IsRespawning(param_2,0);
    return (ulong)(uVar2 ^ 1);
  }
  puVar8 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetAIRespawnDelegate;
  auVar9 = func_0x00f78af4();
  puVar1 = &stack0xfffffffffffffff0;
  while( true ) {
    *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
    *(undefined1 (*) [16])(puVar1 + -0x20) = auVar10;
    *(undefined1 **)(puVar1 + -0x10) = puVar7;
    *(undefined **)(puVar1 + -8) = puVar8;
    if ((bRam0000000003eb48a9 & 1) == 0) {
      func_0x00f78a20(0x3d33330);
      func_0x00f78a20(0x3d33338);
      func_0x00f78a20(0x3d33340);
      func_0x00f78a20(0x3d3cd88);
      bRam0000000003eb48a9 = 1;
    }
    *(undefined8 *)(puVar1 + -0x48) = 0;
    *(undefined8 *)(puVar1 + -0x50) = 0;
    *(undefined8 *)(puVar1 + -0x38) = 0;
    *(undefined8 *)(puVar1 + -0x40) = 0;
    lVar3 = *(long *)(auVar9._0_8_ + 0xb0);
    if (lVar3 != 0) {
      /*System.Collections.Generic.List<BaseLayerFTUEManager.AIDelegateRespawnPair>$$GetEnumerator*/ func_0x024c6cf0(puVar1 + -0x50,lVar3,uRam0000000003d3cd88);
      goto code_r0x01479180;
    }
    auVar10 = func_0x00f78af4();
    if (auVar10._8_4_ == 1) {
      func_0x032fee1c(auVar10._0_8_,auVar10._8_8_,puVar1 + -0x50);
      return 0;
    }
    auVar10 = __Unwind_Resume();
    lVar3 = auVar10._8_8_;
    *(undefined8 *)(puVar1 + -0x90) = unaff_x22;
    *(undefined8 *)(puVar1 + -0x88) = 0x3eb4000;
    *(undefined1 (*) [16])(puVar1 + -0x80) = auVar9;
    *(undefined1 **)(puVar1 + -0x70) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x68) =
         &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__ResetKartRacePosition;
    puVar7 = puVar1 + -0x70;
    if (lVar3 == 0) break;
    if (*(char *)(lVar3 + 0x98) == '\0') {
      /*Atlas.Gameplay.Player.GameContextPlayer$$SetKartProgressToBeginningOfLap*/ func_0x015a56b0(lVar3,1,0,0);
    }
    auVar9 = auVar10;
    if ((*(long *)(lVar3 + 0x10) == 0) ||
       (lVar3 = *(long *)(*(long *)(lVar3 + 0x10) + 0x10), lVar3 == 0)) break;
    unaff_x21 = *(undefined8 *)(lVar3 + 0x60);
    puVar8 = &UNK_01479260;
    puVar1 = puVar1 + -0x90;
  }
  auVar10 = func_0x00f78af4();
  *(undefined8 *)(puVar1 + -0xc0) = unaff_x22;
  *(undefined8 *)(puVar1 + -0xb8) = 0x3eb4000;
  *(undefined1 (*) [16])(puVar1 + -0xb0) = auVar9;
  *(undefined1 **)(puVar1 + -0xa0) = puVar7;
  *(undefined **)(puVar1 + -0x98) = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__AreInTriggerSection;
  *(long *)(puVar1 + -200) = auVar10._8_8_;
  if ((bRam0000000003eb48aa & 1) == 0) {
    func_0x00f78a20(0x3d24e08);
    bRam0000000003eb48aa = 1;
  }
  *(undefined8 *)(puVar1 + -0xd0) = *(undefined8 *)(auVar10._0_8_ + 0xa8);
  uVar5 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,puVar1 + -0xd0);
  uVar4 = /*Atlas.StringID$$Equals*/ func_0x015057f8(puVar1 + -200,uVar5,0);
  if ((uVar4 & 1) == 0) {
    uVar4 = /*Atlas.StringID$$get_IsValid*/ func_0x01505738(puVar1 + -200,0);
    if ((uVar4 & 1) == 0) {
      uVar2 = /*Atlas.StringID$$get_IsValid*/ func_0x01505738(auVar10._0_8_ + 0xa8,0);
      uVar4 = (ulong)(uVar2 ^ 1);
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
  while (*(long *)(puVar1 + -0x40) != auVar9._8_8_) {
code_r0x01479180:
    uVar4 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEManager.AIDelegateRespawnPair>$$MoveNext*/ func_0x01f7a160(puVar1 + -0x50,uRam0000000003d33338);
    if ((uVar4 & 1) == 0) {
      uVar4 = 0;
      uVar6 = 0x41;
      goto code_r0x014791b0;
    }
  }
  uVar4 = *(ulong *)(puVar1 + -0x38);
  uVar6 = 0x43;
code_r0x014791b0:
  *(undefined4 *)(puVar1 + -0x60) = uVar6;
  /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEManager.AIDelegateRespawnPair>$$Dispose*/ func_0x01f7a15c(puVar1 + -0x50,uRam0000000003d33330);
  if (*(int *)(puVar1 + -0x60) != 0x43) {
    uVar4 = 0;
  }
  return uVar4;
}



// ============================================================
// RVA: 0x14790ec | Atlas.Gameplay.FTUE.BaseLayerFTUEManager.GetAIRespawnDelegate
// ============================================================

ulong Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetAIRespawnDelegate(long param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong *puVar9;
  undefined1 auVar10 [16];
  undefined1 ***pppuStack_d0;
  code *pcStack_c8;
  undefined1 **ppuStack_a0;
  code *pcStack_98;
  undefined1 *puStack_70;
  undefined *puStack_68;
  int iStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  ulong uStack_38;
  
  if ((bRam0000000003eb48a9 & 1) == 0) {
    func_0x00f78a20(0x3d33330);
    func_0x00f78a20(0x3d33338);
    func_0x00f78a20(0x3d33340);
    func_0x00f78a20(0x3d3cd88);
    bRam0000000003eb48a9 = 1;
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  lStack_40 = 0;
  if (*(long *)(param_1 + 0xb0) == 0) {
    auVar10 = func_0x00f78af4();
    if (auVar10._8_4_ != 1) {
      auVar10 = __Unwind_Resume();
      lVar7 = auVar10._8_8_;
      puStack_68 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__ResetKartRacePosition;
      puStack_70 = &stack0xfffffffffffffff0;
      if (lVar7 != 0) {
        if (*(char *)(lVar7 + 0x98) == '\0') {
          /*Atlas.Gameplay.Player.GameContextPlayer$$SetKartProgressToBeginningOfLap*/ func_0x015a56b0(lVar7,1,0,0);
        }
        if ((*(long *)(lVar7 + 0x10) != 0) &&
           (lVar8 = *(long *)(*(long *)(lVar7 + 0x10) + 0x10), lVar8 != 0)) {
          lVar8 = *(long *)(lVar8 + 0x60);
          uVar4 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetAIRespawnDelegate
                            (auVar10._0_8_,lVar7);
          if (lVar8 != 0) {
            if ((bRam0000000003eb5390 & 1) == 0) {
              func_0x00f78a20(0x3d23a50,uVar4,0);
              bRam0000000003eb5390 = 1;
            }
            puVar9 = (ulong *)(lVar8 + 0xe0);
            uVar3 = *puVar9;
            while ((plVar5 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar3,uVar4,0), plVar5 == (long *)0x0 ||
                   (*plVar5 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
              uVar6 = func_0x00ff0f44(puVar9,plVar5,uVar3);
              bVar1 = uVar3 == uVar6;
              uVar3 = uVar6;
              if (bVar1) {
                return uVar6;
              }
            }
            auVar10 = func_0x00f78e5c(plVar5);
            pcStack_98 = 
            Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__add_OnKartPortalEntered;
            ppuStack_a0 = &puStack_70;
            if ((bRam0000000003eb5391 & 1) == 0) {
              func_0x00f78a20(0x3d23a50);
              bRam0000000003eb5391 = 1;
            }
            puVar9 = (ulong *)(auVar10._0_8_ + 0xe8);
            uVar3 = *puVar9;
            while ((plVar5 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar3,auVar10._8_8_,0), plVar5 == (long *)0x0
                   || (*plVar5 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
              uVar6 = func_0x00ff0f44(puVar9,plVar5,uVar3);
              bVar1 = uVar3 == uVar6;
              uVar3 = uVar6;
              if (bVar1) {
                return uVar6;
              }
            }
            auVar10 = func_0x00f78e5c(plVar5);
            pcStack_c8 = 
            Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__remove_OnKartPortalEntered;
            pppuStack_d0 = &ppuStack_a0;
            if ((bRam0000000003eb5392 & 1) == 0) {
              func_0x00f78a20(0x3d23a50);
              bRam0000000003eb5392 = 1;
            }
            puVar9 = (ulong *)(auVar10._0_8_ + 0xe8);
            uVar3 = *puVar9;
            while ((plVar5 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar3,auVar10._8_8_,0), plVar5 == (long *)0x0
                   || (*plVar5 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
              uVar6 = func_0x00ff0f44(puVar9,plVar5,uVar3);
              bVar1 = uVar3 == uVar6;
              uVar3 = uVar6;
              if (bVar1) {
                return uVar6;
              }
            }
            auVar10 = func_0x00f78e5c(plVar5);
            if ((bRam0000000003eb5393 & 1) == 0) {
              func_0x00f78a20(0x3d23a50);
              bRam0000000003eb5393 = 1;
            }
            puVar9 = (ulong *)(auVar10._0_8_ + 0xf0);
            uVar3 = *puVar9;
            while ((plVar5 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar3,auVar10._8_8_,0), plVar5 == (long *)0x0
                   || (*plVar5 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
              uVar6 = func_0x00ff0f44(puVar9,plVar5,uVar3);
              bVar1 = uVar3 == uVar6;
              uVar3 = uVar6;
              if (bVar1) {
                return uVar6;
              }
            }
            auVar10 = func_0x00f78e5c(plVar5);
            if ((bRam0000000003eb5394 & 1) == 0) {
              func_0x00f78a20(0x3d23a50);
              bRam0000000003eb5394 = 1;
            }
            puVar9 = (ulong *)(auVar10._0_8_ + 0xf0);
            uVar3 = *puVar9;
            while ((plVar5 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar3,auVar10._8_8_,0), plVar5 == (long *)0x0
                   || (*plVar5 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
              uVar6 = func_0x00ff0f44(puVar9,plVar5,uVar3);
              bVar1 = uVar3 == uVar6;
              uVar3 = uVar6;
              if (bVar1) {
                return uVar6;
              }
            }
            auVar10 = func_0x00f78e5c(plVar5);
            if ((bRam0000000003eb5395 & 1) == 0) {
              func_0x00f78a20(0x3d23a58);
              bRam0000000003eb5395 = 1;
            }
            puVar9 = (ulong *)(auVar10._0_8_ + 0xf8);
            uVar3 = *puVar9;
            while ((plVar5 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar3,auVar10._8_8_,0), plVar5 == (long *)0x0
                   || (*plVar5 == /*Atlas.Gameplay.Kart.OnKartSpinOutDelegate_TypeInfo*/ lRam0000000003d23a58))) {
              uVar6 = func_0x00ff0f44(puVar9,plVar5,uVar3);
              bVar1 = uVar3 == uVar6;
              uVar3 = uVar6;
              if (bVar1) {
                return uVar6;
              }
            }
            auVar10 = func_0x00f78e5c(plVar5);
            if ((bRam0000000003eb5396 & 1) == 0) {
              func_0x00f78a20(0x3d23a58);
              bRam0000000003eb5396 = 1;
            }
            puVar9 = (ulong *)(auVar10._0_8_ + 0xf8);
            uVar3 = *puVar9;
            while ((plVar5 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar3,auVar10._8_8_,0), plVar5 == (long *)0x0
                   || (*plVar5 == /*Atlas.Gameplay.Kart.OnKartSpinOutDelegate_TypeInfo*/ lRam0000000003d23a58))) {
              uVar6 = func_0x00ff0f44(puVar9,plVar5,uVar3);
              bVar1 = uVar3 == uVar6;
              uVar3 = uVar6;
              if (bVar1) {
                return uVar6;
              }
            }
            auVar10 = func_0x00f78e5c(plVar5);
            *(long *)(auVar10._0_8_ + 0x10) = auVar10._8_8_;
            return auVar10._0_8_;
          }
        }
      }
      auVar10 = func_0x00f78af4();
      pcStack_c8 = auVar10._8_8_;
      pcStack_98 = (code *)&Atlas_Gameplay_FTUE_BaseLayerFTUEManager__AreInTriggerSection;
      ppuStack_a0 = &puStack_70;
      if ((bRam0000000003eb48aa & 1) == 0) {
        func_0x00f78a20(0x3d24e08);
        bRam0000000003eb48aa = 1;
      }
      pppuStack_d0 = *(undefined1 ****)(auVar10._0_8_ + 0xa8);
      uVar4 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,&pppuStack_d0);
      uVar3 = /*Atlas.StringID$$Equals*/ func_0x015057f8(&pcStack_c8,uVar4,0);
      if ((uVar3 & 1) == 0) {
        uVar3 = /*Atlas.StringID$$get_IsValid*/ func_0x01505738(&pcStack_c8,0);
        if ((uVar3 & 1) == 0) {
          uVar2 = /*Atlas.StringID$$get_IsValid*/ func_0x01505738(auVar10._0_8_ + 0xa8,0);
          uVar3 = (ulong)(uVar2 ^ 1);
        }
        else {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 1;
      }
      return uVar3;
    }
    func_0x032fee1c(auVar10._0_8_,auVar10._8_8_,&uStack_50);
    uVar3 = 0;
  }
  else {
    /*System.Collections.Generic.List<BaseLayerFTUEManager.AIDelegateRespawnPair>$$GetEnumerator*/ func_0x024c6cf0(&uStack_50,*(long *)(param_1 + 0xb0),uRam0000000003d3cd88);
    do {
      uVar3 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEManager.AIDelegateRespawnPair>$$MoveNext*/ func_0x01f7a160(&uStack_50,uRam0000000003d33338);
      if ((uVar3 & 1) == 0) {
        uVar3 = 0;
        iStack_60 = 0x41;
        goto LAB_014791b0;
      }
    } while (lStack_40 != param_2);
    iStack_60 = 0x43;
    uVar3 = uStack_38;
LAB_014791b0:
    /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEManager.AIDelegateRespawnPair>$$Dispose*/ func_0x01f7a15c(&uStack_50,uRam0000000003d33330);
    if (iStack_60 != 0x43) {
      uVar3 = 0;
    }
  }
  return uVar3;
}



// ============================================================
// RVA: 0x1479208 | Atlas.Gameplay.FTUE.BaseLayerFTUEManager.ResetKartRacePosition
// ============================================================

ulong Atlas_Gameplay_FTUE_BaseLayerFTUEManager__ResetKartRacePosition
                (undefined8 param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong *puVar8;
  undefined1 auVar9 [16];
  undefined1 **ppuStack_70;
  code *pcStack_68;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  if (param_2 != 0) {
    if (*(char *)(param_2 + 0x98) == '\0') {
      /*Atlas.Gameplay.Player.GameContextPlayer$$SetKartProgressToBeginningOfLap*/ func_0x015a56b0(param_2,1,0,0);
    }
    if ((*(long *)(param_2 + 0x10) != 0) &&
       (lVar7 = *(long *)(*(long *)(param_2 + 0x10) + 0x10), lVar7 != 0)) {
      lVar7 = *(long *)(lVar7 + 0x60);
      uVar3 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetAIRespawnDelegate(param_1,param_2);
      if (lVar7 != 0) {
        if ((bRam0000000003eb5390 & 1) == 0) {
          func_0x00f78a20(0x3d23a50,uVar3,0);
          bRam0000000003eb5390 = 1;
        }
        puVar8 = (ulong *)(lVar7 + 0xe0);
        uVar4 = *puVar8;
        while ((plVar5 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar4,uVar3,0), plVar5 == (long *)0x0 ||
               (*plVar5 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
          uVar6 = func_0x00ff0f44(puVar8,plVar5,uVar4);
          bVar1 = uVar4 == uVar6;
          uVar4 = uVar6;
          if (bVar1) {
            return uVar6;
          }
        }
        auVar9 = func_0x00f78e5c(plVar5);
        pcStack_38 = 
        Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__add_OnKartPortalEntered;
        puStack_40 = &stack0xfffffffffffffff0;
        if ((bRam0000000003eb5391 & 1) == 0) {
          func_0x00f78a20(0x3d23a50);
          bRam0000000003eb5391 = 1;
        }
        puVar8 = (ulong *)(auVar9._0_8_ + 0xe8);
        uVar4 = *puVar8;
        while ((plVar5 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar4,auVar9._8_8_,0), plVar5 == (long *)0x0 ||
               (*plVar5 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
          uVar6 = func_0x00ff0f44(puVar8,plVar5,uVar4);
          bVar1 = uVar4 == uVar6;
          uVar4 = uVar6;
          if (bVar1) {
            return uVar6;
          }
        }
        auVar9 = func_0x00f78e5c(plVar5);
        pcStack_68 = 
        Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__remove_OnKartPortalEntered;
        ppuStack_70 = &puStack_40;
        if ((bRam0000000003eb5392 & 1) == 0) {
          func_0x00f78a20(0x3d23a50);
          bRam0000000003eb5392 = 1;
        }
        puVar8 = (ulong *)(auVar9._0_8_ + 0xe8);
        uVar4 = *puVar8;
        while ((plVar5 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar4,auVar9._8_8_,0), plVar5 == (long *)0x0 ||
               (*plVar5 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
          uVar6 = func_0x00ff0f44(puVar8,plVar5,uVar4);
          bVar1 = uVar4 == uVar6;
          uVar4 = uVar6;
          if (bVar1) {
            return uVar6;
          }
        }
        auVar9 = func_0x00f78e5c(plVar5);
        if ((bRam0000000003eb5393 & 1) == 0) {
          func_0x00f78a20(0x3d23a50);
          bRam0000000003eb5393 = 1;
        }
        puVar8 = (ulong *)(auVar9._0_8_ + 0xf0);
        uVar4 = *puVar8;
        while ((plVar5 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar4,auVar9._8_8_,0), plVar5 == (long *)0x0 ||
               (*plVar5 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
          uVar6 = func_0x00ff0f44(puVar8,plVar5,uVar4);
          bVar1 = uVar4 == uVar6;
          uVar4 = uVar6;
          if (bVar1) {
            return uVar6;
          }
        }
        auVar9 = func_0x00f78e5c(plVar5);
        if ((bRam0000000003eb5394 & 1) == 0) {
          func_0x00f78a20(0x3d23a50);
          bRam0000000003eb5394 = 1;
        }
        puVar8 = (ulong *)(auVar9._0_8_ + 0xf0);
        uVar4 = *puVar8;
        while ((plVar5 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar4,auVar9._8_8_,0), plVar5 == (long *)0x0 ||
               (*plVar5 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
          uVar6 = func_0x00ff0f44(puVar8,plVar5,uVar4);
          bVar1 = uVar4 == uVar6;
          uVar4 = uVar6;
          if (bVar1) {
            return uVar6;
          }
        }
        auVar9 = func_0x00f78e5c(plVar5);
        if ((bRam0000000003eb5395 & 1) == 0) {
          func_0x00f78a20(0x3d23a58);
          bRam0000000003eb5395 = 1;
        }
        puVar8 = (ulong *)(auVar9._0_8_ + 0xf8);
        uVar4 = *puVar8;
        while ((plVar5 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar4,auVar9._8_8_,0), plVar5 == (long *)0x0 ||
               (*plVar5 == /*Atlas.Gameplay.Kart.OnKartSpinOutDelegate_TypeInfo*/ lRam0000000003d23a58))) {
          uVar6 = func_0x00ff0f44(puVar8,plVar5,uVar4);
          bVar1 = uVar4 == uVar6;
          uVar4 = uVar6;
          if (bVar1) {
            return uVar6;
          }
        }
        auVar9 = func_0x00f78e5c(plVar5);
        if ((bRam0000000003eb5396 & 1) == 0) {
          func_0x00f78a20(0x3d23a58);
          bRam0000000003eb5396 = 1;
        }
        puVar8 = (ulong *)(auVar9._0_8_ + 0xf8);
        uVar4 = *puVar8;
        while ((plVar5 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar4,auVar9._8_8_,0), plVar5 == (long *)0x0 ||
               (*plVar5 == /*Atlas.Gameplay.Kart.OnKartSpinOutDelegate_TypeInfo*/ lRam0000000003d23a58))) {
          uVar6 = func_0x00ff0f44(puVar8,plVar5,uVar4);
          bVar1 = uVar4 == uVar6;
          uVar4 = uVar6;
          if (bVar1) {
            return uVar6;
          }
        }
        auVar9 = func_0x00f78e5c(plVar5);
        *(long *)(auVar9._0_8_ + 0x10) = auVar9._8_8_;
        return auVar9._0_8_;
      }
    }
  }
  auVar9 = func_0x00f78af4();
  pcStack_68 = auVar9._8_8_;
  pcStack_38 = (code *)&Atlas_Gameplay_FTUE_BaseLayerFTUEManager__AreInTriggerSection;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb48aa & 1) == 0) {
    func_0x00f78a20(0x3d24e08);
    bRam0000000003eb48aa = 1;
  }
  ppuStack_70 = *(undefined1 ***)(auVar9._0_8_ + 0xa8);
  uVar3 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,&ppuStack_70);
  uVar4 = /*Atlas.StringID$$Equals*/ func_0x015057f8(&pcStack_68,uVar3,0);
  if ((uVar4 & 1) == 0) {
    uVar4 = /*Atlas.StringID$$get_IsValid*/ func_0x01505738(&pcStack_68,0);
    if ((uVar4 & 1) == 0) {
      uVar2 = /*Atlas.StringID$$get_IsValid*/ func_0x01505738(auVar9._0_8_ + 0xa8,0);
      uVar4 = (ulong)(uVar2 ^ 1);
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}



// ============================================================
// RVA: 0x1479284 | Atlas.Gameplay.FTUE.BaseLayerFTUEManager.AreInTriggerSection
// ============================================================

uint Atlas_Gameplay_FTUE_BaseLayerFTUEManager__AreInTriggerSection(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = param_2;
  if ((bRam0000000003eb48aa & 1) == 0) {
    func_0x00f78a20(0x3d24e08);
    bRam0000000003eb48aa = 1;
  }
  uStack_40 = *(undefined8 *)(param_1 + 0xa8);
  uVar2 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,&uStack_40);
  uVar3 = /*Atlas.StringID$$Equals*/ func_0x015057f8(&uStack_38,uVar2,0);
  if ((uVar3 & 1) == 0) {
    uVar3 = /*Atlas.StringID$$get_IsValid*/ func_0x01505738(&uStack_38,0);
    if ((uVar3 & 1) == 0) {
      uVar1 = /*Atlas.StringID$$get_IsValid*/ func_0x01505738(param_1 + 0xa8,0);
      uVar1 = uVar1 ^ 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



