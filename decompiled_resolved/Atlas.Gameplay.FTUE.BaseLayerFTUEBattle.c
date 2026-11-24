// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.FTUE.BaseLayerFTUEBattle

// ============================================================
// RVA: 0x14751c4 | Atlas.Gameplay.FTUE.BaseLayerFTUEBattle.get_FtueBattleDefinition
// ============================================================

/* WARNING: Possible PIC construction at 0x014752ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014752b0) */
/* WARNING: Removing unreachable block (ram,0x014752c0) */
/* WARNING: Removing unreachable block (ram,0x01475310) */
/* WARNING: Removing unreachable block (ram,0x014752c4) */

void Atlas_Gameplay_FTUE_BaseLayerFTUEBattle__get_FtueBattleDefinition
               (long param_1,undefined8 param_2,long param_3,long param_4,long param_5,long param_6)

{
  undefined4 uVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined4 uStack_178;
  int iStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  
  if ((bRam0000000003eb4886 & 1) == 0) {
    func_0x00f78a20(0x3d21818);
    bRam0000000003eb4886 = 1;
  }
  if (*(long **)(param_1 + 0x40) != (long *)0x0) {
    lVar9 = **(long **)(param_1 + 0x40);
    if ((*(byte *)(lVar9 + 300) < *(byte *)(/*Atlas.Definitions.FTUEBattleDefinition_TypeInfo*/ lRam0000000003d21818 + 300)) ||
       (*(long *)(*(long *)(lVar9 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.FTUEBattleDefinition_TypeInfo*/ lRam0000000003d21818 + 300) * 8 + -8) !=
        /*Atlas.Definitions.FTUEBattleDefinition_TypeInfo*/ lRam0000000003d21818)) {
      auVar11 = func_0x00f78e5c();
      plVar5 = auVar11._0_8_;
      if ((bRam0000000003eb4887 & 1) == 0) {
        func_0x00f78a20(0x3d3cd38);
        bRam0000000003eb4887 = 1;
      }
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
      uStack_150 = 0;
      uStack_148 = 0;
      lStack_140 = 0;
      uStack_168 = 0;
      uStack_160 = 0;
      uStack_158 = 0;
      iStack_170 = 0;
      if ((param_3 != 0) && (*(long *)(param_3 + 0x58) != 0)) {
        lVar9 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(*(long *)(param_3 + 0x58),uRam0000000003d55068);
        plVar5[4] = lVar9;
        if (*(long *)(param_3 + 0x58) != 0) {
          lVar9 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(*(long *)(param_3 + 0x58),uRam0000000003d550b0);
          plVar5[8] = auVar11._8_8_;
          plVar5[5] = param_5;
          plVar5[6] = lVar9;
          plVar5[2] = param_3;
          plVar5[3] = param_4;
          if (param_6 != 0) {
            plVar5[0xc] = *(long *)(param_6 + 0x58);
            plVar5[0xd] = *(long *)(param_6 + 0x60);
            *(undefined4 *)((long)plVar5 + 0x94) = 0xffffffff;
            uVar6 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
            /*System.Action$$.ctor*/ func_0x02924c80(uVar6,plVar5,uRam0000000003d527a8,0);
            if (param_4 != 0) {
              /*Core.StateManagement.State$$add_OnPostExitCallback*/ func_0x02b94ca8(param_4,uVar6,0);
              if (*(long *)(param_3 + 0x58) != 0) {
                uVar6 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(*(long *)(param_3 + 0x58),uRam0000000003d55168);
                uVar10 = *(undefined8 *)(param_3 + 0x150);
                lVar9 = func_0x00f78aec(/*Atlas.Gameplay.FTUE.BaseLayerPauseManager_TypeInfo*/ uRam0000000003d20000);
                /*Atlas.Gameplay.FTUE.BaseLayerPauseManager$$.ctor*/ func_0x015364f4(lVar9,0);
                plVar5[0xe] = lVar9;
                if (lVar9 != 0) {
                  /*Atlas.Gameplay.FTUE.BaseLayerPauseManager$$Init*/ func_0x015361b4(lVar9,uVar6,uVar10,0,0);
                  if (*(long *)(param_3 + 0x58) != 0) {
                    uVar6 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(*(long *)(param_3 + 0x58),uRam0000000003d551a8);
                    lVar9 = func_0x00f78aec(/*Atlas.Gameplay.FTUE.BaseLayerToolTipManager_TypeInfo*/ uRam0000000003d20010);
                    /*Atlas.Gameplay.FTUE.BaseLayerToolTipManager$$.ctor*/ func_0x01537638(lVar9,0);
                    plVar5[0xf] = lVar9;
                    if (lVar9 != 0) {
                      /*Atlas.Gameplay.FTUE.BaseLayerToolTipManager$$Init*/ func_0x01536fe0(lVar9,uVar6,0);
                      lVar9 = func_0x00f78aec(/*Atlas.Gameplay.FTUE.BaseLayerSequenceManager_TypeInfo*/ uRam0000000003d20008);
                      /*Atlas.Gameplay.FTUE.BaseLayerSequenceManager$$.ctor*/ func_0x01536fd8(lVar9,0);
                      plVar5[0x10] = lVar9;
                      if (lVar9 != 0) {
                        *(undefined1 *)(lVar9 + 0x39) = 0;
                        if ((*(long *)(param_3 + 0x40) != 0) &&
                           (lVar9 = /*Atlas.Gameplay.Player.GameContextPlayerManager$$GetLocalHumanPlayer*/ func_0x0159aaf0(*(long *)(param_3 + 0x40),0), lVar9 != 0)) {
                          plVar5[7] = *(long *)(lVar9 + 0x10);
                          lVar9 = func_0x00f78aec(/*System.Collections.Generic.List<BaseLayerFTUEDefinition.Section>_TypeInfo*/ uRam0000000003d1e080);
                          /*System.Collections.Generic.List<BaseLayerFTUEDefinition.Section>$$.ctor*/ func_0x024ba0fc(lVar9,3,uRam0000000003d3cd30);
                          plVar5[10] = lVar9;
                          if (plVar5[8] != 0) {
                            cVar2 = *(char *)(plVar5[8] + 0x20);
                            *(char *)(plVar5 + 0x13) = cVar2;
                            if (cVar2 != '\0') {
                              if (plVar5[2] == 0) goto code_r0x01475a68;
                              Atlas_Contexts_GameContextBase__StartTrackingChallenges(plVar5[2],0);
                            }
                            lVar9 = plVar5[3];
                            uVar6 = func_0x00f78aec(/*System.Action<GameInProgressScreen>_TypeInfo*/ uRam0000000003d1b438);
                            /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar6,plVar5,*(undefined8 *)(*plVar5 + 0x1b0),
                                            uRam0000000003d2a068);
                            if (lVar9 != 0) {
                              Atlas_Contexts_GameContextBaseInProgressState__add_OnInProgressScreenEntered
                                        (lVar9,uVar6,0);
                              lVar9 = plVar5[3];
                              uVar6 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                              /*System.Action$$.ctor*/ func_0x02924c80(uVar6,plVar5,*(undefined8 *)(*plVar5 + 0x1c0),0);
                              if (lVar9 != 0) {
                                Atlas_Contexts_GameContextBaseInProgressState__add_OnInProgressScreenExited
                                          (lVar9,uVar6,0);
                                lVar9 = plVar5[5];
                                uVar6 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                                /*System.Action$$.ctor*/ func_0x02924c80(uVar6,plVar5,uRam0000000003d527c8,0);
                                if (lVar9 != 0) {
                                  /*Core.StateManagement.State$$add_OnPreEnterCallback*/ func_0x02b94168(lVar9,uVar6,0);
                                  lVar9 = plVar5[0xc];
                                  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0)
                                     && (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                                    func_0x00f78ad0();
                                  }
                                  iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar9,0,0);
                                  if (iVar4 != 0) {
                                    if ((plVar5[0xc] == 0) ||
                                       (lVar9 = *(long *)(plVar5[0xc] + 0x30), lVar9 == 0))
                                    goto code_r0x01475a68;
                                    uVar1 = *(undefined4 *)(lVar9 + 0x18);
                                    lVar9 = func_0x00f78aec(/*System.Collections.Generic.List<BaseLayerFTUEManager.BaseListenerVolumePair>_TypeInfo*/ uRam0000000003d1e090);
                                    /*System.Collections.Generic.List<BaseLayerFTUEManager.BaseListenerVolumePair>$$.ctor*/ func_0x024c80c0(lVar9,uVar1,uRam0000000003d3cd90);
                                    plVar5[9] = lVar9;
                                    if ((plVar5[0xc] == 0) ||
                                       (lVar9 = *(long *)(plVar5[0xc] + 0x30), lVar9 == 0))
                                    goto code_r0x01475a68;
                                    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_190,lVar9,uRam0000000003d3a798);
                                    uStack_148 = uStack_188;
                                    uStack_150 = uStack_190;
                                    lStack_140 = lStack_180;
                                    while (uVar7 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_150,uRam0000000003d32580)
                                          , lVar9 = lStack_140, (uVar7 & 1) != 0) {
                                      uVar6 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
                                      /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(uVar6,plVar5,uRam0000000003d527b0,0);
                                      if (lVar9 == 0) goto code_r0x01475a6c;
                                      /*Atlas.Gameplay.HitVolumeBehaviour$$add_OnEnter*/ func_0x015b49e0(lVar9,uVar6,0);
                                      uVar6 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
                                      /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(uVar6,plVar5,uRam0000000003d527b8,0);
                                      /*Atlas.Gameplay.HitVolumeBehaviour$$add_OnExit*/ func_0x015b4c60(lVar9,uVar6,0);
                                    }
                                    uStack_178 = 0x1e5;
                                    iStack_170 = 1;
                                    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_150,uRam0000000003d32578);
                                    iStack_170 = 0;
                                  }
                                  if ((plVar5[2] != 0) &&
                                     (lVar9 = *(long *)(plVar5[2] + 0x40), lVar9 != 0)) {
                                    lVar9 = *(long *)(lVar9 + 0x40);
                                    if ((lVar9 != 0) && (iVar4 = *(int *)(lVar9 + 0x18), 0 < iVar4))
                                    {
                                      lVar8 = func_0x00f78aec(/*System.Collections.Generic.List<BaseLayerFTUEManager.AIDelegateRespawnPair>_TypeInfo*/ uRam0000000003d1e088);
                                      /*System.Collections.Generic.List<BaseLayerFTUEManager.AIDelegateRespawnPair>$$.ctor*/ func_0x024c55f0(lVar8,iVar4,uRam0000000003d3cd78);
                                      plVar5[0x16] = lVar8;
                                      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_168,lVar9,uRam0000000003d3a670);
                                      while (uVar7 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_168,
                                                                     uRam0000000003d324f0),
                                            (uVar7 & 1) != 0) {
                                        lVar9 = func_0x00f78aec(/*Atlas.Gameplay.FTUE.BaseLayerFTUEManager.<>c__DisplayClass30_0_TypeInfo*/ uRam0000000003d26ac0);
                                        /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager.<>c__DisplayClass30_0$$.ctor*/ func_0x0154716c(lVar9,0);
                                        uVar6 = uStack_158;
                                        if (lVar9 == 0) {
                                          func_0x00f78af4();
                                          goto code_r0x01475a80;
                                        }
                                        *(undefined8 *)(lVar9 + 0x10) = uStack_158;
                                        *(long **)(lVar9 + 0x18) = plVar5;
                                        uVar10 = func_0x00f78aec(/*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ uRam0000000003d23a50);
                                        Atlas_Gameplay_Kart_OnKartRespawnDelegate___ctor
                                                  (uVar10,lVar9,uRam0000000003d62268,0);
                                        if (plVar5[0x16] == 0) {
                                          func_0x00f78af4();
                                          goto code_r0x01475a80;
                                        }
                                        /*System.Collections.Generic.List<BaseLayerFTUEManager.AIDelegateRespawnPair>$$Add*/ func_0x024c61ec(plVar5[0x16],uVar6,uVar10,
                                                        uRam0000000003d3cd80);
                                      }
                                      iStack_170 = iStack_170 + 1;
                                      uStack_178 = 0x288;
                                      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_168,uRam0000000003d324e8);
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
code_r0x01475a68:
      func_0x00f78af4();
code_r0x01475a6c:
      func_0x00f78af4();
code_r0x01475a80:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1475a84);
      (*pcVar3)();
    }
  }
  return;
}



// ============================================================
// RVA: 0x1475240 | Atlas.Gameplay.FTUE.BaseLayerFTUEBattle.Init
// ============================================================

/* WARNING: Possible PIC construction at 0x014752ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014752b0) */
/* WARNING: Removing unreachable block (ram,0x014752c0) */
/* WARNING: Removing unreachable block (ram,0x01475310) */
/* WARNING: Removing unreachable block (ram,0x014752c4) */

void Atlas_Gameplay_FTUE_BaseLayerFTUEBattle__Init
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
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined4 uStack_158;
  int iStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  
  if ((bRam0000000003eb4887 & 1) == 0) {
    func_0x00f78a20(0x3d3cd38);
    bRam0000000003eb4887 = 1;
  }
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
  uStack_130 = 0;
  uStack_128 = 0;
  lStack_120 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  iStack_150 = 0;
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
                          if (param_1[2] == 0) goto code_r0x01475a68;
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
                                goto code_r0x01475a68;
                                uVar1 = *(undefined4 *)(lVar5 + 0x18);
                                lVar5 = func_0x00f78aec(/*System.Collections.Generic.List<BaseLayerFTUEManager.BaseListenerVolumePair>_TypeInfo*/ uRam0000000003d1e090);
                                /*System.Collections.Generic.List<BaseLayerFTUEManager.BaseListenerVolumePair>$$.ctor*/ func_0x024c80c0(lVar5,uVar1,uRam0000000003d3cd90);
                                param_1[9] = lVar5;
                                if ((param_1[0xc] == 0) ||
                                   (lVar5 = *(long *)(param_1[0xc] + 0x30), lVar5 == 0))
                                goto code_r0x01475a68;
                                /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_170,lVar5,uRam0000000003d3a798);
                                uStack_128 = uStack_168;
                                uStack_130 = uStack_170;
                                lStack_120 = lStack_160;
                                while (uVar7 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_130,uRam0000000003d32580),
                                      lVar5 = lStack_120, (uVar7 & 1) != 0) {
                                  uVar6 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
                                  /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(uVar6,param_1,uRam0000000003d527b0,0);
                                  if (lVar5 == 0) goto code_r0x01475a6c;
                                  /*Atlas.Gameplay.HitVolumeBehaviour$$add_OnEnter*/ func_0x015b49e0(lVar5,uVar6,0);
                                  uVar6 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
                                  /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(uVar6,param_1,uRam0000000003d527b8,0);
                                  /*Atlas.Gameplay.HitVolumeBehaviour$$add_OnExit*/ func_0x015b4c60(lVar5,uVar6,0);
                                }
                                uStack_158 = 0x1e5;
                                iStack_150 = 1;
                                /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_130,uRam0000000003d32578);
                                iStack_150 = 0;
                              }
                              if ((param_1[2] != 0) &&
                                 (lVar5 = *(long *)(param_1[2] + 0x40), lVar5 != 0)) {
                                lVar5 = *(long *)(lVar5 + 0x40);
                                if ((lVar5 != 0) && (iVar4 = *(int *)(lVar5 + 0x18), 0 < iVar4)) {
                                  lVar8 = func_0x00f78aec(/*System.Collections.Generic.List<BaseLayerFTUEManager.AIDelegateRespawnPair>_TypeInfo*/ uRam0000000003d1e088);
                                  /*System.Collections.Generic.List<BaseLayerFTUEManager.AIDelegateRespawnPair>$$.ctor*/ func_0x024c55f0(lVar8,iVar4,uRam0000000003d3cd78);
                                  param_1[0x16] = lVar8;
                                  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_148,lVar5,uRam0000000003d3a670);
                                  while (uVar7 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_148,uRam0000000003d324f0),
                                        (uVar7 & 1) != 0) {
                                    lVar5 = func_0x00f78aec(/*Atlas.Gameplay.FTUE.BaseLayerFTUEManager.<>c__DisplayClass30_0_TypeInfo*/ uRam0000000003d26ac0);
                                    /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager.<>c__DisplayClass30_0$$.ctor*/ func_0x0154716c(lVar5,0);
                                    uVar6 = uStack_138;
                                    if (lVar5 == 0) {
                                      func_0x00f78af4();
                                      goto code_r0x01475a80;
                                    }
                                    *(undefined8 *)(lVar5 + 0x10) = uStack_138;
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
                                  iStack_150 = iStack_150 + 1;
                                  uStack_158 = 0x288;
                                  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_148,uRam0000000003d324e8);
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
code_r0x01475a68:
  func_0x00f78af4();
code_r0x01475a6c:
  func_0x00f78af4();
code_r0x01475a80:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1475a84);
  (*pcVar3)();
}



// ============================================================
// RVA: 0x1475b14 | Atlas.Gameplay.FTUE.BaseLayerFTUEBattle.OnEnterInProgressScreen
// ============================================================

/* WARNING: Possible PIC construction at 0x01475b28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01475b50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01475b2c) */
/* WARNING: Removing unreachable block (ram,0x01475b64) */
/* WARNING: Removing unreachable block (ram,0x01475b38) */
/* WARNING: Removing unreachable block (ram,0x01475b54) */

void Atlas_Gameplay_FTUE_BaseLayerFTUEBattle__OnEnterInProgressScreen(long *param_1,long param_2)

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
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  long lStack_d0;
  long *plStack_c8;
  undefined1 **ppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  
  puStack_60 = &stack0xfffffffffffffff0;
  uStack_58 = 0x1475b2c;
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
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  puVar7 = (undefined8 *)param_1[3];
  puVar2 = (undefined8 *)func_0x00f78aec(/*System.Action<GameInProgressScreen>_TypeInfo*/ uRam0000000003d1b438);
  /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(puVar2,param_1,*(undefined8 *)(*param_1 + 0x1b0),uRam0000000003d2a068);
  puVar9 = (undefined8 *)0x3d2a068;
  if (puVar7 == (undefined8 *)0x0) goto code_r0x01475de4;
  Atlas_Contexts_GameContextBaseInProgressState__remove_OnInProgressScreenEntered(puVar7,puVar2,0);
  param_1[0xb] = param_2;
  if (param_1[0xe] == 0) goto code_r0x01475de4;
  /*Atlas.Gameplay.FTUE.BaseLayerPauseManager$$OnInProgressScreenEntered*/ func_0x01536390(param_1[0xe],param_2,0);
  puVar9 = puVar8;
  if (param_1[0x10] == 0) goto code_r0x01475de4;
  *(long *)(param_1[0x10] + 0x30) = param_2;
  if (param_1[8] == 0) goto code_r0x01475de4;
  lVar3 = *(long *)(param_1[8] + 0x28);
  if (lVar3 == 0) goto code_r0x01475de4;
  puVar9 = (undefined8 *)0x3d1fa78;
  puVar2 = (undefined8 *)0x3d527c0;
  /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$GetEnumerator*/ func_0x023df1f8(&uStack_a8,lVar3,uRam0000000003d3a780);
  while (uVar4 = /*System.Collections.Generic.List.Enumerator<TopBarManager.TopBarButton>$$MoveNext*/ func_0x01f694e8(&uStack_a8,uRam0000000003d32568), (uVar4 & 1) != 0) {
    if (param_1[0xb] == 0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1475de4);
      (*pcVar1)();
    }
    Atlas_UI_Screens_GameInProgressScreen__SetEnabledHUDElement
              (param_1[0xb],uStack_98 & 0xffffffff,0,0);
  }
  /*System.Collections.Generic.List.Enumerator<TopBarManager.TopBarButton>$$Dispose*/ func_0x01f694e4(&uStack_a8,uRam0000000003d32560);
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
code_r0x01475de4:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x01475e20;
    plVar5 = (long *)___cxa_begin_catch();
    param_2 = *plVar5;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<TopBarManager.TopBarButton>$$Dispose*/ func_0x01f694e4(&uStack_a8,*puVar7);
  } while (param_2 == 0);
  func_0x00f78ac0(param_2,0);
code_r0x01475e20:
  auVar10 = __Unwind_Resume();
  lVar6 = auVar10._8_8_;
  lVar3 = auVar10._0_8_;
  puStack_b8 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions;
  lStack_d0 = param_2;
  plStack_c8 = param_1;
  ppuStack_c0 = &puStack_60;
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
        puStack_e0 = puVar2;
        puStack_d8 = puVar7;
        if ((bRam0000000003eb48a7 & 1) == 0) {
          func_0x00f78a20(0x3d32560);
          func_0x00f78a20(0x3d32568);
          func_0x00f78a20(0x3d32570);
          func_0x00f78a20(0x3d3a780);
          bRam0000000003eb48a7 = 1;
        }
        uStack_f8 = 0;
        uStack_f0 = 0;
        uStack_e8 = 0;
        if (lVar6 != 0) {
          /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$GetEnumerator*/ func_0x023df1f8(&uStack_f8,lVar6,uRam0000000003d3a780);
          while (uVar4 = /*System.Collections.Generic.List.Enumerator<TopBarManager.TopBarButton>$$MoveNext*/ func_0x01f694e8(&uStack_f8,uRam0000000003d32568), (uVar4 & 1) != 0) {
            if (*(long *)(lVar3 + 0x58) == 0) {
              func_0x00f78af4();
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1478bac);
              (*pcVar1)();
            }
            Atlas_UI_Screens_GameInProgressScreen__SetEnabledHUDElement
                      (*(long *)(lVar3 + 0x58),uStack_e8 & 0xffffffff,1,0);
          }
          /*System.Collections.Generic.List.Enumerator<TopBarManager.TopBarButton>$$Dispose*/ func_0x01f694e4(&uStack_f8,uRam0000000003d32560);
        }
        return;
      }
    }
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x1475e9c | Atlas.Gameplay.FTUE.BaseLayerFTUEBattle..ctor
// ============================================================

void Atlas_Gameplay_FTUE_BaseLayerFTUEBattle___ctor(void)

{
  return;
}



