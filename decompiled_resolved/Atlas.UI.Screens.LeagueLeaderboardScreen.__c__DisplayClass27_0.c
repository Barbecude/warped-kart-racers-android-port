// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.LeagueLeaderboardScreen.<>c__DisplayClass27_0

// ============================================================
// RVA: 0x155ac18 | Atlas.UI.Screens.LeagueLeaderboardScreen.<>c__DisplayClass27_0..ctor
// ============================================================

void Atlas_UI_Screens_LeagueLeaderboardScreen___c__DisplayClass27_0___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x155ac20 | Atlas.UI.Screens.LeagueLeaderboardScreen.<>c__DisplayClass27_0.<OnRewardPanelClicked>b__0
// ============================================================

ulong Atlas_UI_Screens_LeagueLeaderboardScreen___c__DisplayClass27_0___OnRewardPanelClicked_b__0
                (ulong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [12];
  
  uVar4 = param_1;
  if ((bRam0000000003eb4fa7 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d572d0);
    func_0x00f78a20(0x3d3e188);
    func_0x00f78a20(0x3d410f0);
    uVar4 = func_0x00f78a20(0x3d6f370);
    bRam0000000003eb4fa7 = 1;
  }
  if (*(char *)(param_1 + 0x10) != '\0') {
    return uVar4;
  }
  if (((*(long *)(param_1 + 0x18) != 0) &&
      (lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(*(long *)(param_1 + 0x18),uRam0000000003d410f0), lVar5 != 0)) &&
     (*(long *)(lVar5 + 0x20) != 0)) {
    lVar5 = *(long *)(*(long *)(lVar5 + 0x20) + 0x10);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar6 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('LeagueMode')*/ uRam0000000003d6f370,0);
    if (lVar5 != 0) {
      lVar5 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar5,uVar6,uRam0000000003d572d0);
      if (((*(long *)(param_1 + 0x18) != 0) &&
          (lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(*(long *)(param_1 + 0x18),uRam0000000003d410f0), lVar7 != 0)) &&
         ((lVar5 != 0 && (lVar5 = *(long *)(lVar5 + 0x30), lVar5 != 0)))) {
        if (*(uint *)(lVar5 + 0x18) <= *(uint *)(param_1 + 0x20)) goto code_r0x0155ae60;
        lVar5 = *(long *)(lVar5 + (long)(int)*(uint *)(param_1 + 0x20) * 8 + 0x20);
        if ((lVar5 != 0) && (*(long *)(lVar7 + 0x88) != 0)) {
          uVar6 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(*(long *)(lVar7 + 0x88),*(undefined8 *)(lVar5 + 0x38),0);
          lVar5 = *(long *)(param_1 + 0x28);
          if (lVar5 != 0) {
            if (*(uint *)(lVar5 + 0x18) <= *(uint *)(param_1 + 0x20)) goto code_r0x0155ae60;
            lVar5 = *(long *)(lVar5 + (long)(int)*(uint *)(param_1 + 0x20) * 8 + 0x20);
            if ((lVar5 != 0) && (*(long *)(param_1 + 0x18) != 0)) {
              lVar7 = *(long *)(lVar5 + 0x50);
              lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(*(long *)(param_1 + 0x18),uRam0000000003d410f0);
              if ((lVar5 != 0) && (lVar12 = *(long *)(param_1 + 0x28), lVar12 != 0)) {
                if (*(uint *)(lVar12 + 0x18) <= *(uint *)(param_1 + 0x20)) goto code_r0x0155ae60;
                lVar12 = *(long *)(lVar12 + (long)(int)*(uint *)(param_1 + 0x20) * 8 + 0x20);
                if (((lVar12 != 0) && (lVar12 = *(long *)(lVar12 + 0x50), lVar12 != 0)) &&
                   (*(long *)(lVar5 + 0x88) != 0)) {
                  uVar8 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(*(long *)(lVar5 + 0x88),*(undefined8 *)(lVar12 + 0x28),0);
                  uVar6 = /*System.String$$Format*/ func_0x029bc688(uVar8,uVar6,0);
                  if (lVar7 != 0) {
                    *(undefined8 *)(lVar7 + 0x30) = uVar6;
                    if (((*(long *)(param_1 + 0x18) != 0) &&
                        (lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(*(long *)(param_1 + 0x18),uRam0000000003d410f0),
                        puVar2 = puRam0000000003d3e188, lVar5 != 0)) &&
                       (lVar7 = *(long *)(param_1 + 0x28), lVar7 != 0)) {
                      if (*(uint *)(lVar7 + 0x18) <= *(uint *)(param_1 + 0x20))
                      goto code_r0x0155ae60;
                      lVar7 = *(long *)(lVar7 + (long)(int)*(uint *)(param_1 + 0x20) * 8 + 0x20);
                      if ((lVar7 != 0) && (plVar9 = *(long **)(lVar5 + 0x98), plVar9 != (long *)0x0)
                         ) {
                        plVar10 = *(long **)(lVar7 + 0x50);
                        puVar11 = puRam0000000003d3e188;
                        if ((bRam0000000003eb832a & 1) == 0) {
                          func_0x00f78a20(0x3d3b330);
                          func_0x00f78a20(0x3d3b348);
                          func_0x00f78a20(0x3d717e8);
                          bRam0000000003eb832a = 1;
                        }
                        if (plVar10 != (long *)0x0) {
                          uVar6 = (**(code **)(*plVar10 + 0x178))
                                            (plVar10,*(undefined8 *)(*plVar10 + 0x180));
                          puVar11 = (undefined8 *)0x0;
                          uVar6 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('QueueModal ')*/ uRam0000000003d717e8,uVar6);
                          if (plVar9 != (long *)0x0) {
                            puVar11 = *(undefined8 **)(*(long *)(puVar2[3] + 0xc0) + 8);
                            (*(code *)*puVar11)(plVar9,uVar6);
                            if (plVar9[7] != 0) {
                              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(plVar9[7],plVar10,uRam0000000003d3b330);
                              puVar11 = (undefined8 *)plVar9[8];
                              if ((puVar11 == (undefined8 *)0x0) ||
                                 ((int)plVar10[2] <= *(int *)(puVar11 + 2))) {
code_r0x025dfcb4:
                                uVar4 = (*(code *)**(undefined8 **)
                                                    (*(long *)(puVar2[3] + 0xc0) + 0x30))(plVar9);
                                if ((uVar4 & 1) != 0) {
                                  return uVar4;
                                }
                    /* WARNING: Could not recover jumptable at 0x025dfcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                uVar4 = (**(code **)(*plVar9 + 0x1a8))
                                                  (plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
                                return uVar4;
                              }
                              if (plVar9[7] != 0) {
                                /*System.Collections.Generic.List<SpeechManager.SpeechEvent>$$Insert*/ func_0x02427ebc(plVar9[7],0,puVar11,uRam0000000003d3b348);
                                (*(code *)**(undefined8 **)(*(long *)(puVar2[3] + 0xc0) + 0x60))
                                          (plVar9);
                                goto code_r0x025dfcb4;
                              }
                            }
                          }
                        }
                        auVar17 = func_0x00f78af4();
                        plVar9 = auVar17._8_8_;
                        lVar5 = auVar17._0_8_;
                        if (plVar9 != (long *)0x0) {
                          uVar6 = (**(code **)(*plVar9 + 0x178))
                                            (plVar9,*(undefined8 *)(*plVar9 + 0x180));
                          if (lVar5 != 0) {
                            uVar3 = (*(code *)**(undefined8 **)(*(long *)(puVar11[3] + 0xc0) + 0x70)
                                    )(lVar5,uVar6);
                            if ((uVar3 & 1) == 0) {
                              (*(code *)**(undefined8 **)(*(long *)(puVar11[3] + 0xc0) + 0x78))
                                        (lVar5,plVar9);
                            }
                            return (ulong)(uVar3 ^ 1);
                          }
                        }
                        auVar17 = func_0x00f78af4();
                        iVar13 = 0x3eb8000;
                        if ((bRam0000000003eb832b & 1) == 0) {
                          func_0x00f78a20(0x3d3b358);
                          func_0x00f78a20(0x3d3b360);
                          bRam0000000003eb832b = 1;
                        }
                        lVar5 = *(long *)(auVar17._0_8_ + 0x38);
                        if (lVar5 != 0) {
                          iVar13 = *(int *)(lVar5 + 0x18);
                          if (iVar13 < 1) goto code_r0x025dfe48;
                          uVar3 = 0;
                          iVar16 = -0x80000000;
                          uVar14 = 0;
                          do {
                            if (*(uint *)(lVar5 + 0x18) <= uVar3) {
                              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                            }
                            lVar5 = *(long *)(*(long *)(lVar5 + 0x10) + (long)(int)uVar3 * 8 + 0x20)
                            ;
                            if (lVar5 == 0) break;
                            iVar1 = *(int *)(lVar5 + 0x10);
                            uVar15 = uVar3;
                            if (iVar1 <= iVar16) {
                              uVar15 = uVar14;
                            }
                            if (iVar13 - 1U == uVar3) goto code_r0x025dfe4c;
                            if (iVar1 <= iVar16) {
                              iVar1 = iVar16;
                            }
                            lVar5 = *(long *)(auVar17._0_8_ + 0x38);
                            uVar3 = uVar3 + 1;
                            iVar16 = iVar1;
                            uVar14 = uVar15;
                          } while (lVar5 != 0);
                        }
                        func_0x00f78af4();
code_r0x025dfe48:
                        uVar15 = 0;
code_r0x025dfe4c:
                        *auVar17._8_8_ = uVar15;
                        return (ulong)(0 < iVar13);
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
  func_0x00f78af4();
code_r0x0155ae60:
  uVar6 = func_0x00f78b24();
  auVar18 = func_0x00f78ac0(uVar6,0);
  uVar4 = /*System.Object$$.ctor*/ func_0x0294d018(auVar18._0_8_,0);
  *(int *)(auVar18._0_8_ + 0x10) = auVar18._8_4_;
  return uVar4;
}



