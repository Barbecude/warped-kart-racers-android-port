// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Save.SaveManager

// ============================================================
// RVA: 0x14e84e8 | Atlas.Save.SaveManager.SlotSaveData
// ============================================================

/* WARNING: Removing unreachable block (ram,0x014e8c44) */
/* WARNING: Removing unreachable block (ram,0x014e91c8) */

undefined8 Atlas_Save_SaveManager__SlotSaveData(long param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined4 *puVar15;
  ulong uVar16;
  undefined4 *puVar17;
  int *piVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  long *unaff_x22;
  int iVar21;
  long lVar22;
  undefined1 auVar23 [12];
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  int aiStack_d8 [4];
  int iStack_c8;
  undefined8 uStack_c0;
  int iStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  undefined8 uStack_80;
  long lStack_78;
  
  if (2 < param_2) {
    return 0;
  }
  lVar14 = *(long *)(param_1 + 0xf0);
  if (lVar14 == 0) {
    func_0x00f78af4();
  }
  else if (param_2 < *(uint *)(lVar14 + 0x18)) {
    return *(undefined8 *)(lVar14 + (ulong)param_2 * 8 + 0x20);
  }
  uVar5 = func_0x00f78b24();
  auVar23 = func_0x00f78ac0(uVar5,0);
  lVar14 = auVar23._0_8_;
  if ((bRam0000000003eb4c1f & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d1fc78);
    func_0x00f78a20(0x3d1fcc0);
    func_0x00f78a20(0x3d2c8f8);
    func_0x00f78a20(0x3d20618);
    func_0x00f78a20(0x3d57520);
    func_0x00f78a20(0x3d57528);
    func_0x00f78a20(0x3d57548);
    func_0x00f78a20(0x3d57550);
    func_0x00f78a20(0x3d57570);
    func_0x00f78a20(0x3d57588);
    func_0x00f78a20(0x3d575c0);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d3fe40);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d63be8);
    func_0x00f78a20(0x3d63bf0);
    func_0x00f78a20(0x3d63bf8);
    func_0x00f78a20(0x3d28a70);
    func_0x00f78a20(0x3d41298);
    func_0x00f78a20(0x3d412a8);
    func_0x00f78a20(0x3d257d8);
    func_0x00f78a20(0x3d7cca0);
    func_0x00f78a20(0x3d72130);
    func_0x00f78a20(0x3d673c0);
    bRam0000000003eb4c1f = 1;
  }
  uStack_80 = 0;
  lStack_78 = 0;
  iStack_88 = 0;
  iStack_84 = 0;
  iStack_8c = 0;
  iStack_90 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  iStack_b4 = 0;
  uStack_c0 = 0;
  iStack_c8 = 0;
  lVar6 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass13_0_TypeInfo*/ uRam0000000003d28a70);
  Atlas_UI_Screens_SaveGameScreen___c__DisplayClass13_0___ctor(lVar6,0);
  if (lVar6 != 0) {
    *(undefined1 (*) [12])(lVar6 + 0x10) = auVar23;
    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar14,uRam0000000003d41298);
    if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x68), lVar7 != 0)) {
      if (*(uint *)(lVar7 + 0x18) <= *(uint *)(lVar6 + 0x18)) {
        uVar5 = func_0x00f78b24();
        func_0x00f78ac0(uVar5,0);
LAB_014e91d4:
        func_0x00f78af4();
        goto code_r0x014e9384;
      }
      if (*(long *)(lVar14 + 0x70) != 0) {
        lVar22 = *(long *)(lVar7 + (ulong)*(uint *)(lVar6 + 0x18) * 8 + 0x20);
        lVar7 = Atlas_Save_SaveManager__SlotSaveData();
        if ((lVar22 != 0) && (*(long *)(lVar22 + 0x18) != 0)) {
          /*Atlas.UI.UIAtlasButton$$RemoveAllEventListeners*/ func_0x01514dc4(*(long *)(lVar22 + 0x18),0);
          if ((*(long *)(lVar22 + 0x20) != 0) &&
             (/*Atlas.UI.UIAtlasButton$$RemoveAllEventListeners*/ func_0x01514dc4(*(long *)(lVar22 + 0x20),0), lVar7 != 0)) {
            iVar3 = Atlas_Save_SaveData__get_IsValidSaveData(lVar7);
            lVar8 = *(long *)(lVar22 + 0x58);
            if (iVar3 == 0) {
              if (lVar8 != 0) {
                /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar8,0,0);
                if (*(long *)(lVar22 + 0x60) != 0) {
                  /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar22 + 0x60),1,0);
                  plVar9 = *(long **)(lVar22 + 0x68);
                  if (plVar9 != (long *)0x0) {
                    (**(code **)(*plVar9 + 0x2a8))
                              (*(undefined4 *)(lVar22 + 0x80),*(undefined4 *)(lVar22 + 0x84),
                               *(undefined4 *)(lVar22 + 0x88),*(undefined4 *)(lVar22 + 0x8c),plVar9,
                               *(undefined8 *)(*plVar9 + 0x2b0));
                    lVar7 = *(long *)(lVar22 + 0x20);
                    unaff_x22 = (long *)func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                    puVar10 = (undefined8 *)0x3d63be8;
                    goto code_r0x014e9154;
                  }
                }
              }
            }
            else if (lVar8 != 0) {
              /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar8,1,0);
              uStack_80 = *(undefined8 *)(lVar7 + 0x18);
              lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar14,uRam0000000003d412a8);
              if (lVar8 == 0) goto LAB_014e91d4;
              if (*(long *)(lVar8 + 0x88) == 0) {
                func_0x00f78af4();
                goto code_r0x014e9384;
              }
              /*Core.Localisation.LocalisationManager$$TryGetTimeFormatOverrideString*/ func_0x016504e8(*(long *)(lVar8 + 0x88),&uStack_a0,&uStack_a8,0);
              uStack_b0 = /*System.DateTime$$get_Date*/ func_0x02a8e25c(&uStack_80,0);
              unaff_x22 = (long *)/*System.DateTime$$ToString*/ func_0x02a8f2dc(&uStack_b0,uStack_a8,0);
              uVar5 = /*System.DateTime$$ToString*/ func_0x02a8f2dc(&uStack_80,uStack_a0,0);
              plVar9 = *(long **)(lVar22 + 0x28);
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 0x558))(plVar9,unaff_x22,*(undefined8 *)(*plVar9 + 0x560));
                plVar9 = *(long **)(lVar22 + 0x30);
                if (plVar9 != (long *)0x0) {
                  (**(code **)(*plVar9 + 0x558))(plVar9,uVar5,*(undefined8 *)(*plVar9 + 0x560));
                  iStack_84 = 0;
                  if ((*(long *)(lVar14 + 0x78) != 0) &&
                     (lVar8 = *(long *)(*(long *)(lVar14 + 0x78) + 0x10), lVar8 != 0)) {
                    uVar5 = /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(lVar8,&lStack_78,uRam0000000003d57550);
                    iVar3 = iStack_84;
                    iStack_84 = Atlas_UI_Screens_SaveGameScreen__GetUnlockedLoadoutAmount
                                          (uVar5,lStack_78,lVar7);
                    iStack_84 = iStack_84 + iVar3;
                    if ((*(long *)(lVar14 + 0x78) != 0) &&
                       (lVar8 = *(long *)(*(long *)(lVar14 + 0x78) + 0x10), lVar8 != 0)) {
                      uVar5 = /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(lVar8,&lStack_78,uRam0000000003d57588);
                      iVar3 = iStack_84;
                      iStack_84 = Atlas_UI_Screens_SaveGameScreen__GetUnlockedLoadoutAmount
                                            (uVar5,lStack_78,lVar7);
                      iStack_84 = iStack_84 + iVar3;
                      if ((*(long *)(lVar14 + 0x78) != 0) &&
                         (lVar8 = *(long *)(*(long *)(lVar14 + 0x78) + 0x10), lVar8 != 0)) {
                        uVar5 = /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(lVar8,&lStack_78,uRam0000000003d575c0);
                        iVar3 = iStack_84;
                        iStack_84 = Atlas_UI_Screens_SaveGameScreen__GetUnlockedLoadoutAmount
                                              (uVar5,lStack_78,lVar7);
                        iStack_84 = iStack_84 + iVar3;
                        if ((*(long *)(lVar14 + 0x78) != 0) &&
                           (lVar8 = *(long *)(*(long *)(lVar14 + 0x78) + 0x10), lVar8 != 0)) {
                          uVar5 = /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(lVar8,&lStack_78,uRam0000000003d57570);
                          iVar3 = iStack_84;
                          iStack_84 = Atlas_UI_Screens_SaveGameScreen__GetUnlockedLoadoutAmount
                                                (uVar5,lStack_78,lVar7);
                          iStack_84 = iStack_84 + iVar3;
                          if ((*(long *)(lVar14 + 0x78) != 0) &&
                             (lVar8 = *(long *)(*(long *)(lVar14 + 0x78) + 0x10), lVar8 != 0)) {
                            uVar5 = /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(lVar8,&lStack_78,uRam0000000003d57520);
                            iVar3 = iStack_84;
                            iStack_84 = Atlas_UI_Screens_SaveGameScreen__GetUnlockedLoadoutAmount
                                                  (uVar5,lStack_78,lVar7);
                            iStack_84 = iStack_84 + iVar3;
                            unaff_x22 = *(long **)(lVar22 + 0x38);
                            uVar5 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_84,0);
                            if (unaff_x22 != (long *)0x0) {
                              (**(code **)(*unaff_x22 + 0x558))
                                        (unaff_x22,uVar5,*(undefined8 *)(*unaff_x22 + 0x560));
                              iStack_88 = 0;
                              if (((*(long *)(lVar14 + 0x78) != 0) &&
                                  (lVar8 = *(long *)(*(long *)(lVar14 + 0x78) + 0x10), lVar8 != 0))
                                 && (/*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(lVar8,&lStack_78,uRam0000000003d57548),
                                    lStack_78 != 0)) {
                                unaff_x22 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(lStack_78,uRam0000000003d3fe40);
                                if (unaff_x22 != (long *)0x0) {
                                  iVar3 = 0;
                                  iVar21 = 0;
                                  do {
                                    lVar8 = *unaff_x22;
                                    uVar16 = (ulong)*(ushort *)(lVar8 + 0x12a);
                                    if (uVar16 != 0) {
                                      piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                                      do {
                                        if (*(long *)(piVar18 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                                          puVar10 = (undefined8 *)
                                                    (lVar8 + (long)*piVar18 * 0x10 + 0x138);
                                          goto LAB_014e8a74;
                                        }
                                        piVar18 = piVar18 + 4;
                                        uVar16 = uVar16 - 1;
                                      } while (uVar16 != 0);
                                    }
                                    puVar10 = (undefined8 *)
                                              func_0x00fac1f0(unaff_x22,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
LAB_014e8a74:
                                    uVar16 = (*(code *)*puVar10)(unaff_x22,puVar10[1]);
                                    if ((uVar16 & 1) == 0) {
                                      aiStack_d8[0] = 0x235;
                                      iStack_c8 = 1;
                                      if (unaff_x22 == (long *)0x0) goto code_r0x014e8c3c;
                                      lVar8 = *unaff_x22;
                                      uVar16 = (ulong)*(ushort *)(lVar8 + 0x12a);
                                      if (uVar16 == 0) goto code_r0x014e8c14;
                                      piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                                      goto code_r0x014e8bfc;
                                    }
                                    lVar8 = *unaff_x22;
                                    uVar16 = (ulong)*(ushort *)(lVar8 + 0x12a);
                                    if (uVar16 != 0) {
                                      piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                                      do {
                                        if (*(long *)(piVar18 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                                          puVar10 = (undefined8 *)
                                                    (lVar8 + (long)*piVar18 * 0x10 + 0x138);
                                          goto code_r0x014e8ad0;
                                        }
                                        piVar18 = piVar18 + 4;
                                        uVar16 = uVar16 - 1;
                                      } while (uVar16 != 0);
                                    }
                                    puVar10 = (undefined8 *)
                                              func_0x00fac1f0(unaff_x22,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x014e8ad0:
                                    plVar9 = (long *)(*(code *)*puVar10)(unaff_x22,puVar10[1]);
                                    if (plVar9 != (long *)0x0) {
                                      if ((*(byte *)(*plVar9 + 300) <
                                           *(byte *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 300)) ||
                                         (*(long *)(*(long *)(*plVar9 + 200) +
                                                    (ulong)*(byte *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 300) * 8
                                                   + -8) != /*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618))
                                      goto code_r0x014e91b4;
                                    }
                                    if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0)
                                       && (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
                                      func_0x00f78ad0();
                                    }
                                    iVar4 = /*Atlas.Stats.UnlockManager$$GetChallengesCompletedCountForChapter*/ func_0x01520940(plVar9,lVar7,0);
                                    iVar3 = iVar4 + iVar3;
                                    iStack_88 = iVar3;
                                    iVar4 = /*Atlas.Stats.UnlockManager$$GetChallengesNotCompletedCountForChapter*/ func_0x01520b7c(plVar9,lVar7,0);
                                    iVar21 = iVar4 + iVar21;
                                  } while( true );
                                }
                                func_0x00f78af4();
                                goto code_r0x014e9384;
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
  goto LAB_014e9360;
  while( true ) {
    piVar18 = piVar18 + 4;
    uVar16 = uVar16 - 1;
    if (uVar16 == 0) break;
code_r0x014e8bfc:
    if (*(long *)(piVar18 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
      puVar10 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
      goto code_r0x014e8c30;
    }
  }
code_r0x014e8c14:
  puVar10 = (undefined8 *)func_0x00fac1f0(unaff_x22,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x014e8c30:
  (*(code *)*puVar10)(unaff_x22,puVar10[1]);
code_r0x014e8c3c:
  bVar2 = aiStack_d8[0] == 0x235;
  if (bVar2) {
    iStack_c8 = 0;
  }
  iStack_8c = 0;
  iStack_90 = 0;
  if (((*(long *)(lVar14 + 0x78) != 0) &&
      (lVar8 = *(long *)(*(long *)(lVar14 + 0x78) + 0x10), lVar8 != 0)) &&
     (/*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(lVar8,&lStack_78,uRam0000000003d57528), lStack_78 != 0)) {
    plVar9 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(lStack_78,uRam0000000003d3fe40);
    if (plVar9 != (long *)0x0) {
      iVar4 = 0;
      iVar3 = 0;
      do {
        lVar8 = *plVar9;
        uVar16 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar10 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
              goto code_r0x014e8d30;
            }
            piVar18 = piVar18 + 4;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
        puVar10 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x014e8d30:
        uVar16 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        if ((uVar16 & 1) == 0) {
          aiStack_d8[(int)(uint)!bVar2] = 0x28f;
          iVar4 = iStack_c8;
          iVar3 = iStack_c8 + 1;
          iStack_c8 = iVar3;
          if (plVar9 == (long *)0x0) goto code_r0x014e8e9c;
          lVar8 = *plVar9;
          uVar16 = (ulong)*(ushort *)(lVar8 + 0x12a);
          if (uVar16 == 0) goto code_r0x014e8e74;
          piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          goto code_r0x014e8e5c;
        }
        lVar8 = *plVar9;
        uVar16 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
              puVar10 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
              goto code_r0x014e8d8c;
            }
            piVar18 = piVar18 + 4;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
        puVar10 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x014e8d8c:
        plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
        if (((*(ushort *)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (plVar11 != (long *)0x0) {
          if ((*(byte *)(*plVar11 + 300) < *(byte *)(/*Atlas.Definitions.ArcadeEventDefinition_TypeInfo*/ lRam0000000003d1fc78 + 300)) ||
             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.ArcadeEventDefinition_TypeInfo*/ lRam0000000003d1fc78 + 300) * 8
                       + -8) != /*Atlas.Definitions.ArcadeEventDefinition_TypeInfo*/ lRam0000000003d1fc78)) goto code_r0x014e91a8;
        }
        uVar16 = /*Atlas.Arcade.ArcadeSave$$HasGoldMedal*/ func_0x01454848(plVar11,lVar7,0);
        if ((uVar16 & 1) != 0) {
          iVar3 = iVar3 + 1;
          iStack_8c = iVar3;
        }
        iVar4 = iVar4 + 1;
        iStack_90 = iVar4;
      } while( true );
    }
    func_0x00f78af4();
    goto code_r0x014e9384;
  }
  goto LAB_014e9360;
code_r0x014e91a8:
  func_0x00f78e5c(plVar11);
  goto code_r0x014e9384;
code_r0x014e91b4:
  func_0x00f78e5c(plVar9);
  goto code_r0x014e9384;
  while( true ) {
    piVar18 = piVar18 + 4;
    uVar16 = uVar16 - 1;
    if (uVar16 == 0) break;
code_r0x014e8e5c:
    if (*(long *)(piVar18 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
      puVar10 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
      goto code_r0x014e8e90;
    }
  }
code_r0x014e8e74:
  puVar10 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x014e8e90:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
code_r0x014e8e9c:
  if ((iVar3 != 0) && (aiStack_d8[iVar4] == 0x28f)) {
    iStack_c8 = iVar4;
  }
  plVar9 = *(long **)(lVar22 + 0x40);
  uVar5 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_88,0);
  iStack_b4 = iStack_88 + iVar21;
  uVar12 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_b4,0);
  uVar5 = /*System.String$$Concat*/ func_0x029be39c(uVar5,/*STR('/')*/ uRam0000000003d673c0,uVar12,0);
  unaff_x22 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x558))(plVar9,uVar5,*(undefined8 *)(*plVar9 + 0x560));
    unaff_x22 = *(long **)(lVar22 + 0x48);
    uVar5 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_8c,0);
    uVar12 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_90,0);
    uVar5 = /*System.String$$Concat*/ func_0x029be39c(uVar5,/*STR('/')*/ uRam0000000003d673c0,uVar12,0);
    if (unaff_x22 != (long *)0x0) {
      (**(code **)(*unaff_x22 + 0x558))(unaff_x22,uVar5,*(undefined8 *)(*unaff_x22 + 0x560));
      Atlas_UI_Screens_AtlasScreen_ArcadeModeSelectScreenBehaviour__ArcadeModeSelectScreen_TransitionData___ReLayoutLayoutAndContentSizeFitters
                (lVar14,*(undefined8 *)(lVar22 + 0x90),uRam0000000003d2c8f8);
      Atlas_UI_Screens_AtlasScreen_ArcadeModeSelectScreenBehaviour__ArcadeModeSelectScreen_TransitionData___ReLayoutLayoutAndContentSizeFitters
                (lVar14,*(undefined8 *)(lVar22 + 0x98),uRam0000000003d2c8f8);
      lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar14,uRam0000000003d412a8);
      if ((lVar8 != 0) && (*(long *)(lVar8 + 0x88) != 0)) {
        /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(*(long *)(lVar8 + 0x88),/*STR('SETTINGS_SCREEN_PLAY_TIME_FORMAT')*/ uRam0000000003d72130,&uStack_98,0);
        uVar5 = uStack_98;
        plVar9 = *(long **)(lVar22 + 0x50);
        uStack_c0 = *(undefined8 *)(lVar7 + 0xd0);
        uStack_dc = /*System.TimeSpan$$get_Hours*/ func_0x029f0304(&uStack_c0,0);
        uVar12 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_dc);
        uVar12 = /*System.String$$Format*/ func_0x029bc688(/*STR('{0:D2}')*/ uRam0000000003d7cca0,uVar12,0);
        uStack_c0 = *(undefined8 *)(lVar7 + 0xd0);
        uStack_e0 = /*System.TimeSpan$$get_Minutes*/ func_0x029f0348(&uStack_c0,0);
        uVar13 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_e0);
        uVar13 = /*System.String$$Format*/ func_0x029bc688(/*STR('{0:D2}')*/ uRam0000000003d7cca0,uVar13,0);
        uVar5 = /*System.String$$Format*/ func_0x029bcac4(uVar5,uVar12,uVar13,0);
        unaff_x22 = (long *)0x0;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x558))(plVar9,uVar5,*(undefined8 *)(*plVar9 + 0x560));
          lVar7 = *(long *)(lVar22 + 0x18);
          unaff_x22 = (long *)func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
          /*System.Action$$.ctor*/ func_0x02924c80(unaff_x22,lVar6,uRam0000000003d63bf0,0);
          if (lVar7 != 0) {
            /*Atlas.UI.UIAtlasButton$$add_Pressed*/ func_0x01514430(lVar7,unaff_x22,0);
            if (*(long *)(lVar14 + 0x70) != 0) {
              plVar9 = *(long **)(lVar22 + 0x68);
              if (*(int *)(lVar6 + 0x18) == *(int *)(*(long *)(lVar14 + 0x70) + 0xf8)) {
                puVar15 = (undefined4 *)(lVar22 + 0x70);
                puVar17 = (undefined4 *)(lVar22 + 0x74);
                puVar19 = (undefined4 *)(lVar22 + 0x78);
                puVar20 = (undefined4 *)(lVar22 + 0x7c);
              }
              else {
                puVar15 = (undefined4 *)(lVar22 + 0x80);
                puVar17 = (undefined4 *)(lVar22 + 0x84);
                puVar19 = (undefined4 *)(lVar22 + 0x88);
                puVar20 = (undefined4 *)(lVar22 + 0x8c);
              }
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 0x2a8))
                          (*puVar15,*puVar17,*puVar19,*puVar20,plVar9,
                           *(undefined8 *)(*plVar9 + 0x2b0));
                if (*(long *)(lVar22 + 0x60) != 0) {
                  /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar22 + 0x60),0,0);
                  lVar7 = *(long *)(lVar22 + 0x20);
                  unaff_x22 = (long *)func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                  puVar10 = (undefined8 *)0x3d63bf8;
code_r0x014e9154:
                  /*System.Action$$.ctor*/ func_0x02924c80(unaff_x22,lVar6,*puVar10,0);
                  if (lVar7 != 0) {
                    /*Atlas.UI.UIAtlasButton$$add_Pressed*/ func_0x01514430(lVar7,unaff_x22,0);
                    uVar5 = Atlas_UI_Screens_AtlasScreen_ArcadeModeSelectScreenBehaviour__ArcadeModeSelectScreen_TransitionData___ReLayoutLayoutAndContentSizeFitters
                                      (lVar14,*(undefined8 *)(lVar22 + 0xa0),uRam0000000003d2c8f8);
                    return uVar5;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_014e9360:
  func_0x00f78af4();
  plVar9 = (long *)___cxa_allocate_exception(8);
  *plVar9 = *unaff_x22;
  ___cxa_throw(plVar9,&DAT_03a5ed38,0);
code_r0x014e9384:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x14e9388);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x14ea824 | Atlas.Save.SaveManager.get_IsReadingWriting
// ============================================================

undefined1 Atlas_Save_SaveManager__get_IsReadingWriting(long param_1)

{
  return *(undefined1 *)(param_1 + 0x50);
}



// ============================================================
// RVA: 0x14ea82c | Atlas.Save.SaveManager.get_SaveData
// ============================================================

ulong Atlas_Save_SaveManager__get_SaveData(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0xf0);
  if (lVar2 == 0) {
    func_0x00f78af4();
  }
  else if (*(uint *)(param_1 + 0xf8) < *(uint *)(lVar2 + 0x18)) {
    return *(ulong *)(lVar2 + (ulong)*(uint *)(param_1 + 0xf8) * 8 + 0x20);
  }
  uVar1 = func_0x00f78b24();
  lVar2 = func_0x00f78ac0(uVar1,0);
  return (ulong)*(uint *)(lVar2 + 0xf8);
}



// ============================================================
// RVA: 0x14ea86c | Atlas.Save.SaveManager.get_CurrentSlotIndex
// ============================================================

undefined4 Atlas_Save_SaveManager__get_CurrentSlotIndex(long param_1)

{
  return *(undefined4 *)(param_1 + 0xf8);
}



// ============================================================
// RVA: 0x14ea874 | Atlas.Save.SaveManager.get_IsSaveDirty
// ============================================================

undefined1 Atlas_Save_SaveManager__get_IsSaveDirty(long param_1)

{
  return *(undefined1 *)(param_1 + 0x110);
}



// ============================================================
// RVA: 0x14ea87c | Atlas.Save.SaveManager.get_IsInited
// ============================================================

undefined1 Atlas_Save_SaveManager__get_IsInited(long param_1)

{
  return *(undefined1 *)(param_1 + 0x111);
}



// ============================================================
// RVA: 0x14ea884 | Atlas.Save.SaveManager.Init
// ============================================================

/* WARNING: Possible PIC construction at 0x014ea9a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014ea9ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014ea9a4) */
/* WARNING: Removing unreachable block (ram,0x014ea9ac) */
/* WARNING: Removing unreachable block (ram,0x014ea9f0) */
/* WARNING: Removing unreachable block (ram,0x014ea9f4) */
/* WARNING: Removing unreachable block (ram,0x014ea9fc) */
/* WARNING: Removing unreachable block (ram,0x014eab54) */
/* WARNING: Removing unreachable block (ram,0x014eaa10) */
/* WARNING: Removing unreachable block (ram,0x014eaa1c) */
/* WARNING: Removing unreachable block (ram,0x014ea9e4) */
/* WARNING: Removing unreachable block (ram,0x014eaa30) */
/* WARNING: Removing unreachable block (ram,0x014eaa3c) */
/* WARNING: Removing unreachable block (ram,0x014eaa44) */
/* WARNING: Removing unreachable block (ram,0x014eaa48) */
/* WARNING: Removing unreachable block (ram,0x014eaa78) */
/* WARNING: Removing unreachable block (ram,0x014eaa80) */
/* WARNING: Removing unreachable block (ram,0x014eaab8) */
/* WARNING: Removing unreachable block (ram,0x014eaac4) */
/* WARNING: Removing unreachable block (ram,0x014eaad0) */
/* WARNING: Removing unreachable block (ram,0x014eaad8) */
/* WARNING: Removing unreachable block (ram,0x014eab0c) */
/* WARNING: Removing unreachable block (ram,0x014eab1c) */

long Atlas_Save_SaveManager__Init
               (long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
               undefined8 param_10)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  int extraout_w1;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  bool bVar13;
  int aiStack_130 [4];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  
  if ((bRam0000000003eb4c31 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d57360);
    func_0x00f78a20(0x3d1f390);
    func_0x00f78a20(0x3d5cb00);
    func_0x00f78a20(0x3d5cb08);
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c31 = 1;
  }
  *(long *)(param_1 + 0x60) = param_2;
  if (param_2 == 0) {
LAB_014eab48:
    func_0x00f78af4();
    uVar3 = func_0x00f78b24();
    func_0x00f78ac0(uVar3,0);
    param_4 = func_0x00f78e5c();
  }
  else {
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x68) = param_5;
    *(undefined8 *)(param_1 + 0x70) = param_3;
    *(long *)(param_1 + 0x78) = param_4;
    *(undefined8 *)(param_1 + 0x80) = param_6;
    *(undefined8 *)(param_1 + 0x88) = param_7;
    *(undefined8 *)(param_1 + 0x90) = param_8;
    *(undefined8 *)(param_1 + 0x98) = param_9;
    *(undefined8 *)(param_1 + 0xa0) = param_10;
    uVar3 = func_0x00f78a34(/*Atlas.Save.SaveData[]_TypeInfo*/ uRam0000000003d1f390,3);
    *(undefined8 *)(param_1 + 0xf0) = uVar3;
    if ((param_4 == 0) || (*(long *)(param_4 + 0x10) == 0)) goto LAB_014eab48;
    /*Core.Definitions.GameDefinitions$$GetFirstDefinition<object>*/ func_0x0185c7fc(*(long *)(param_4 + 0x10),uRam0000000003d57360);
    if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
  }
  if ((bRam0000000003eb4c3a & 1) == 0) {
    func_0x00f78a20(0x3d20618);
    func_0x00f78a20(0x3d32410);
    func_0x00f78a20(0x3d32418);
    func_0x00f78a20(0x3d32420);
    func_0x00f78a20(0x3d57548);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d3bfa8);
    func_0x00f78a20(0x3d3bfa0);
    func_0x00f78a20(0x3d3a4a8);
    func_0x00f78a20(0x3d3a4b8);
    func_0x00f78a20(0x3d3bf98);
    func_0x00f78a20(0x3d3a4c8);
    func_0x00f78a20(0x3d1de30);
    func_0x00f78a20(0x3d3fe40);
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c3a = 1;
  }
  uStack_110 = 0;
  lStack_108 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  aiStack_130[2] = 0;
  if (param_4 == 0) goto code_r0x014eaff4;
  lVar4 = /*Atlas.Definitions.AtlasDefinitions$$GenerateLoadoutUnlockedByDefaultList*/ func_0x01461fb0(param_4,0);
  if ((*(long *)(param_4 + 0x10) == 0) ||
     (/*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(*(long *)(param_4 + 0x10),&lStack_108,uRam0000000003d57548), lStack_108 == 0))
  goto code_r0x014eaff4;
  plVar5 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(lStack_108,uRam0000000003d3fe40);
  if (plVar5 != (long *)0x0) {
    do {
      lVar8 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto code_r0x014ead30;
          }
          piVar11 = piVar11 + 4;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar5,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x014ead30:
      uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if ((uVar10 & 1) == 0) {
        bVar13 = false;
        lVar8 = 0;
        lVar12 = 1;
        aiStack_130[0] = 0x55;
        aiStack_130[2] = 1;
        goto joined_r0x014eae00;
      }
      lVar8 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto code_r0x014ead8c;
          }
          piVar11 = piVar11 + 4;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar5,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x014ead8c:
      plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
      if (plVar7 == (long *)0x0) {
        func_0x00f78af4();
        goto code_r0x014eaffc;
      }
      if ((*(byte *)(*plVar7 + 300) < *(byte *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 300)) ||
         (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 300) * 8 + -8
                   ) != /*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618)) goto code_r0x014eafd4;
      if ((char)plVar7[0xe] != '\0') {
        if (lVar4 == 0) {
          func_0x00f78af4();
          goto code_r0x014eaffc;
        }
        /*System.Collections.Generic.List<DefinitionID>$$Add*/ func_0x023c5e00(lVar4,plVar7[3],uRam0000000003d3a4a8);
      }
    } while( true );
  }
  goto code_r0x014eaff8;
joined_r0x014eae00:
  if (plVar5 != (long *)0x0) {
    lVar9 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto code_r0x014eae58;
        }
        piVar11 = piVar11 + 4;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)func_0x00fac1f0(plVar5,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x014eae58:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  if (lVar8 == 0) {
    if (bVar13) {
      lVar12 = 0;
    }
    else {
      lVar8 = lVar12 + -1;
      if (aiStack_130[lVar8] == 0x55) {
        aiStack_130[2] = (int)lVar8;
        lVar12 = lVar8;
      }
    }
    if (lVar4 == 0) goto code_r0x014eaff4;
    iVar1 = *(int *)(lVar4 + 0x18);
    if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar8 = *(long *)(*(long *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xb8) + 8);
    if (lVar8 == 0) goto code_r0x014eaff4;
    lVar9 = func_0x00f78aec(/*System.Collections.Generic.List<string>_TypeInfo*/ uRam0000000003d1de30);
    /*System.Collections.Generic.List<StringHelper.ThreadSafeEncoding>$$.ctor*/ func_0x024265d8(lVar9,iVar1 + *(int *)(lVar8 + 0x18),uRam0000000003d3bf98);
    /*System.Collections.Generic.List<DefinitionID>$$GetEnumerator*/ func_0x023c68bc(&uStack_120,lVar4,uRam0000000003d3a4b8);
    goto code_r0x014eaf20;
  }
  func_0x00f78ac0(lVar8,0);
  if (extraout_w1 != 1) {
    uVar3 = __Unwind_Resume();
    if ((bRam0000000003eb4c43 & 1) == 0) {
      func_0x00f78a20(0x3d246d0);
      bRam0000000003eb4c43 = 1;
    }
    lVar4 = func_0x00f78aec(/*Atlas.Save.SaveData_TypeInfo*/ uRam0000000003d246d0);
    Atlas_Save_SaveData___ctor();
    /*Atlas.Save.SaveManager$$UpdateSaveDataToLatestVersion*/ func_0x014ebfec(uVar3,lVar4);
    return lVar4;
  }
  plVar7 = (long *)___cxa_begin_catch();
  lVar8 = *plVar7;
  ___cxa_end_catch();
  lVar12 = 0;
  bVar13 = true;
  goto joined_r0x014eae00;
code_r0x014eaf20:
  uVar10 = /*System.Collections.Generic.List.Enumerator<DefinitionID>$$MoveNext*/ func_0x01f66780(&uStack_120,uRam0000000003d32418);
  if ((uVar10 & 1) == 0) goto code_r0x014eaf48;
  if (lVar9 == 0) {
    func_0x00f78af4();
    goto code_r0x014eaffc;
  }
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar9,uStack_110,uRam0000000003d3bfa0);
  goto code_r0x014eaf20;
code_r0x014eafd4:
  func_0x00f78e5c();
  goto code_r0x014eaffc;
code_r0x014eaf48:
  aiStack_130[(int)lVar12] = 0xa2;
  aiStack_130[2] = aiStack_130[2] + 1;
  /*System.Collections.Generic.List.Enumerator<DefinitionID>$$Dispose*/ func_0x01f6677c(&uStack_120,uRam0000000003d32410);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar9 != 0) {
    /*System.Collections.Generic.List<TimeZoneInfo.AdjustmentRule>$$AddRange*/ func_0x02427364(lVar9,*(undefined8 *)(*(long *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xb8) + 8),
                    uRam0000000003d3bfa8);
    return lVar9;
  }
code_r0x014eaff4:
  func_0x00f78af4();
code_r0x014eaff8:
  func_0x00f78af4();
code_r0x014eaffc:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x14eb000);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x14eab64 | Atlas.Save.SaveManager.GenerateDefaultUnlockList
// ============================================================

long Atlas_Save_SaveManager__GenerateDefaultUnlockList(long param_1)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  int extraout_w1;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  bool bVar13;
  int aiStack_90 [4];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  if ((bRam0000000003eb4c3a & 1) == 0) {
    func_0x00f78a20(0x3d20618);
    func_0x00f78a20(0x3d32410);
    func_0x00f78a20(0x3d32418);
    func_0x00f78a20(0x3d32420);
    func_0x00f78a20(0x3d57548);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d3bfa8);
    func_0x00f78a20(0x3d3bfa0);
    func_0x00f78a20(0x3d3a4a8);
    func_0x00f78a20(0x3d3a4b8);
    func_0x00f78a20(0x3d3bf98);
    func_0x00f78a20(0x3d3a4c8);
    func_0x00f78a20(0x3d1de30);
    func_0x00f78a20(0x3d3fe40);
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c3a = 1;
  }
  uStack_70 = 0;
  lStack_68 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  aiStack_90[2] = 0;
  if (param_1 == 0) goto LAB_014eaff4;
  lVar3 = /*Atlas.Definitions.AtlasDefinitions$$GenerateLoadoutUnlockedByDefaultList*/ func_0x01461fb0(param_1,0);
  if ((*(long *)(param_1 + 0x10) == 0) ||
     (/*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(*(long *)(param_1 + 0x10),&lStack_68,uRam0000000003d57548), lStack_68 == 0))
  goto LAB_014eaff4;
  plVar4 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(lStack_68,uRam0000000003d3fe40);
  if (plVar4 != (long *)0x0) {
    do {
      lVar8 = *plVar4;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_014ead30;
          }
          piVar11 = piVar11 + 4;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)func_0x00fac1f0(plVar4,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
LAB_014ead30:
      uVar10 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      if ((uVar10 & 1) == 0) {
        bVar13 = false;
        lVar8 = 0;
        lVar12 = 1;
        aiStack_90[0] = 0x55;
        aiStack_90[2] = 1;
        goto joined_r0x014eae00;
      }
      lVar8 = *plVar4;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto code_r0x014ead8c;
          }
          piVar11 = piVar11 + 4;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)func_0x00fac1f0(plVar4,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x014ead8c:
      plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
      if (plVar6 == (long *)0x0) {
        func_0x00f78af4();
        goto code_r0x014eaffc;
      }
      if ((*(byte *)(*plVar6 + 300) < *(byte *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 300)) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 300) * 8 + -8
                   ) != /*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618)) goto code_r0x014eafd4;
      if ((char)plVar6[0xe] != '\0') {
        if (lVar3 == 0) {
          func_0x00f78af4();
          goto code_r0x014eaffc;
        }
        /*System.Collections.Generic.List<DefinitionID>$$Add*/ func_0x023c5e00(lVar3,plVar6[3],uRam0000000003d3a4a8);
      }
    } while( true );
  }
  goto LAB_014eaff8;
joined_r0x014eae00:
  if (plVar4 != (long *)0x0) {
    lVar9 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto code_r0x014eae58;
        }
        piVar11 = piVar11 + 4;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)func_0x00fac1f0(plVar4,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x014eae58:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
  if (lVar8 == 0) {
    if (bVar13) {
      lVar12 = 0;
    }
    else {
      lVar8 = lVar12 + -1;
      if (aiStack_90[lVar8] == 0x55) {
        aiStack_90[2] = (int)lVar8;
        lVar12 = lVar8;
      }
    }
    if (lVar3 == 0) goto LAB_014eaff4;
    iVar1 = *(int *)(lVar3 + 0x18);
    if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar8 = *(long *)(*(long *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xb8) + 8);
    if (lVar8 == 0) goto LAB_014eaff4;
    lVar9 = func_0x00f78aec(/*System.Collections.Generic.List<string>_TypeInfo*/ uRam0000000003d1de30);
    /*System.Collections.Generic.List<StringHelper.ThreadSafeEncoding>$$.ctor*/ func_0x024265d8(lVar9,iVar1 + *(int *)(lVar8 + 0x18),uRam0000000003d3bf98);
    /*System.Collections.Generic.List<DefinitionID>$$GetEnumerator*/ func_0x023c68bc(&uStack_80,lVar3,uRam0000000003d3a4b8);
    goto code_r0x014eaf20;
  }
  func_0x00f78ac0(lVar8,0);
  if (extraout_w1 != 1) {
    uVar7 = __Unwind_Resume();
    if ((bRam0000000003eb4c43 & 1) == 0) {
      func_0x00f78a20(0x3d246d0);
      bRam0000000003eb4c43 = 1;
    }
    lVar3 = func_0x00f78aec(/*Atlas.Save.SaveData_TypeInfo*/ uRam0000000003d246d0);
    Atlas_Save_SaveData___ctor();
    /*Atlas.Save.SaveManager$$UpdateSaveDataToLatestVersion*/ func_0x014ebfec(uVar7,lVar3);
    return lVar3;
  }
  plVar6 = (long *)___cxa_begin_catch();
  lVar8 = *plVar6;
  ___cxa_end_catch();
  lVar12 = 0;
  bVar13 = true;
  goto joined_r0x014eae00;
code_r0x014eaf20:
  uVar10 = /*System.Collections.Generic.List.Enumerator<DefinitionID>$$MoveNext*/ func_0x01f66780(&uStack_80,uRam0000000003d32418);
  if ((uVar10 & 1) == 0) goto code_r0x014eaf48;
  if (lVar9 == 0) {
    func_0x00f78af4();
    goto code_r0x014eaffc;
  }
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar9,uStack_70,uRam0000000003d3bfa0);
  goto code_r0x014eaf20;
code_r0x014eafd4:
  func_0x00f78e5c();
  goto code_r0x014eaffc;
code_r0x014eaf48:
  aiStack_90[(int)lVar12] = 0xa2;
  aiStack_90[2] = aiStack_90[2] + 1;
  /*System.Collections.Generic.List.Enumerator<DefinitionID>$$Dispose*/ func_0x01f6677c(&uStack_80,uRam0000000003d32410);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar9 != 0) {
    /*System.Collections.Generic.List<TimeZoneInfo.AdjustmentRule>$$AddRange*/ func_0x02427364(lVar9,*(undefined8 *)(*(long *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xb8) + 8),
                    uRam0000000003d3bfa8);
    return lVar9;
  }
LAB_014eaff4:
  func_0x00f78af4();
LAB_014eaff8:
  func_0x00f78af4();
code_r0x014eaffc:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x14eb000);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x14eb088 | Atlas.Save.SaveManager.CreateNewSaveData
// ============================================================

undefined8 Atlas_Save_SaveManager__CreateNewSaveData(undefined8 param_1)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb4c43 & 1) == 0) {
    func_0x00f78a20(0x3d246d0);
    bRam0000000003eb4c43 = 1;
  }
  uVar1 = func_0x00f78aec(/*Atlas.Save.SaveData_TypeInfo*/ uRam0000000003d246d0);
  Atlas_Save_SaveData___ctor();
  /*Atlas.Save.SaveManager$$UpdateSaveDataToLatestVersion*/ func_0x014ebfec(param_1,uVar1);
  return uVar1;
}



// ============================================================
// RVA: 0x14eb0f4 | Atlas.Save.SaveManager.CreateSaveBuffer
// ============================================================

void Atlas_Save_SaveManager__CreateSaveBuffer(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_48;
  
  if ((bRam0000000003eb4c51 & 1) == 0) {
    func_0x00f78a20(0x3d1eda0);
    func_0x00f78a20(0x3d23370);
    bRam0000000003eb4c51 = 1;
  }
  uStack_48 = 0;
  uVar1 = func_0x00f78a34(/*byte[]_TypeInfo*/ uRam0000000003d1eda0,param_2);
  uVar2 = func_0x00f78aec(/*System.IO.MemoryStream_TypeInfo*/ uRam0000000003d23370);
  /*System.IO.MemoryStream$$.ctor*/ func_0x02b044fc(uVar2,uVar1,0);
  uVar3 = /*Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$PinGCArrayAndGetDataAddress*/ func_0x03279a6c(uVar1,&uStack_48,0);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uStack_48;
  param_1[2] = uVar3;
  return;
}



// ============================================================
// RVA: 0x14eb1bc | Atlas.Save.SaveManager.DeInit
// ============================================================

void Atlas_Save_SaveManager__DeInit(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((bRam0000000003eb4c32 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d5cb00);
    func_0x00f78a20(0x3d5cb08);
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c32 = 1;
  }
  *(undefined2 *)(param_1 + 0x111) = 0;
  if ((*(long *)(param_1 + 0x70) != 0) &&
     (lVar6 = *(long *)(*(long *)(param_1 + 0x70) + 0x30), lVar6 != 0)) {
    uVar5 = *(undefined8 *)(lVar6 + 0xc0);
    uVar2 = func_0x00f78aec(/*System.Action_TypeInfo*/ lRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(uVar2,param_1,uRam0000000003d5cb08,0);
    plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar5,uVar2,0);
    lVar1 = /*System.Action_TypeInfo*/ lRam0000000003d1fa78;
    if ((plVar3 != (long *)0x0) && (*plVar3 != /*System.Action_TypeInfo*/ lRam0000000003d1fa78)) goto LAB_014eb360;
    *(long **)(lVar6 + 0xc0) = plVar3;
    if ((*(long *)(param_1 + 0x70) != 0) &&
       (lVar6 = *(long *)(*(long *)(param_1 + 0x70) + 0x30), lVar6 != 0)) {
      uVar5 = *(undefined8 *)(lVar6 + 200);
      uVar2 = func_0x00f78aec(lVar1);
      /*System.Action$$.ctor*/ func_0x02924c80(uVar2,param_1,uRam0000000003d5cb00,0);
      plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar5,uVar2,0);
      if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78)) {
        *(long **)(lVar6 + 200) = plVar3;
        if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        /*Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$ReleaseGCObject*/ func_0x03279b0c(*(undefined8 *)(param_1 + 0x48),0);
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(undefined8 *)(param_1 + 0x30) = 0;
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(undefined8 *)(param_1 + 0x40) = 0;
        /*Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$ReleaseGCObject*/ func_0x03279b0c(*(undefined8 *)(param_1 + 0x28),0);
        *(undefined8 *)(param_1 + 0x18) = 0;
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined8 *)(param_1 + 0x28) = 0;
        *(undefined8 *)(param_1 + 0x20) = 0;
        *(undefined8 *)(param_1 + 0xf0) = 0;
        *(undefined8 *)(param_1 + 0x58) = 0;
        *(undefined8 *)(param_1 + 0xa0) = 0;
        *(undefined8 *)(param_1 + 0x70) = 0;
        *(undefined8 *)(param_1 + 0x68) = 0;
        *(undefined8 *)(param_1 + 0x80) = 0;
        *(undefined8 *)(param_1 + 0x78) = 0;
        *(undefined8 *)(param_1 + 0x88) = 0;
        return;
      }
      goto LAB_014eb360;
    }
  }
  func_0x00f78af4();
LAB_014eb360:
  puVar4 = (undefined8 *)func_0x00f78e5c();
  /*Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$ReleaseGCObject*/ func_0x03279b0c(puVar4[3],0);
  puVar4[1] = 0;
  *puVar4 = 0;
  puVar4[3] = 0;
  puVar4[2] = 0;
  return;
}



// ============================================================
// RVA: 0x14eb364 | Atlas.Save.SaveManager.DestroySaveBuffer
// ============================================================

void Atlas_Save_SaveManager__DestroySaveBuffer(undefined8 *param_1)

{
  /*Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$ReleaseGCObject*/ func_0x03279b0c(param_1[3],0);
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



// ============================================================
// RVA: 0x14eb394 | Atlas.Save.SaveManager.Update
// ============================================================

/* WARNING: Possible PIC construction at 0x014eb4c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014eb53c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014eb4c4) */
/* WARNING: Removing unreachable block (ram,0x014eb540) */

ulong Atlas_Save_SaveManager__Update(ulong param_1)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float extraout_s0;
  float extraout_s0_00;
  float fVar7;
  undefined1 auVar8 [16];
  
  uVar2 = param_1;
  if ((bRam0000000003eb4c33 & 1) == 0) {
    func_0x00f78a20(0x3d246e0);
    uVar2 = func_0x00f78a20(0x3d25238);
    bRam0000000003eb4c33 = 1;
  }
  if (*(char *)(param_1 + 0x111) == '\0') {
    return uVar2;
  }
  fVar7 = *(float *)(param_1 + 0x10c);
  uVar2 = /*UnityEngine.Time$$get_unscaledDeltaTime*/ func_0x03272c40(0);
  fVar7 = fVar7 + extraout_s0;
  *(float *)(param_1 + 0x10c) = fVar7;
  if (fVar7 <= 1.0) {
LAB_014eb484:
    if ((*(char *)(param_1 + 0x50) != '\0') &&
       (uVar2 = /*UniRx.Async.UniTask$$get_IsCompleted*/ func_0x02f9e410(param_1 + 0x100,0), (int)uVar2 != 0)) {
      *(undefined1 *)(param_1 + 0x50) = 0;
    }
    fVar7 = *(float *)(param_1 + 0x54);
    if ((fVar7 == 0.0) || (uVar2 = /*UnityEngine.Time$$get_time*/ func_0x03272b70(0), extraout_s0_00 < fVar7)) {
      return uVar2;
    }
  }
  else {
    lVar3 = Atlas_Save_SaveManager__get_SaveData(param_1);
    if (lVar3 != 0) {
      uVar5 = *(undefined8 *)(lVar3 + 0xd0);
      if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar6 = **(undefined8 **)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xb8);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar2 = /*System.TimeSpan$$op_Addition*/ func_0x029f11e0(uVar5,uVar6,0);
      *(ulong *)(lVar3 + 0xd0) = uVar2;
      *(float *)(param_1 + 0x10c) = *(float *)(param_1 + 0x10c) + -1.0;
      goto LAB_014eb484;
    }
    param_1 = func_0x00f78af4();
  }
  if (*(char *)(param_1 + 0x108) != '\0') {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0x110) = 0;
  lVar3 = Atlas_Save_SaveManager__get_SaveData();
  if (lVar3 != 0) {
    uVar2 = Atlas_Save_SaveData__get_IsValidSaveData();
    if ((uVar2 & 1) != 0) goto code_r0x014eb558;
    if ((*(long *)(param_1 + 0x98) != 0) &&
       (lVar3 = *(long *)(*(long *)(param_1 + 0x98) + 0x48), lVar3 != 0)) {
      /*Atlas.Analytics.AtlasAnalyticsEvents$$NewSaveGameEvent*/ func_0x01455860(lVar3,0);
      goto code_r0x014eb558;
    }
  }
  param_1 = func_0x00f78af4();
code_r0x014eb558:
  if ((bRam0000000003eb4c42 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    bRam0000000003eb4c42 = 1;
  }
  lVar3 = Atlas_Save_SaveManager__get_SaveData(param_1);
  if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar5 = /*System.DateTime$$get_Now*/ func_0x02a8e404(0);
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x18) = uVar5;
    lVar3 = Atlas_Save_SaveManager__get_SaveData(param_1);
    if (((*(long *)(param_1 + 0x58) != 0) &&
        (lVar4 = *(long *)(*(long *)(param_1 + 0x58) + 0x10), lVar4 != 0)) &&
       (uVar2 = /*Atlas.Stats.StatsData$$Clone*/ func_0x01504c74(lVar4,0), lVar3 != 0)) {
      *(ulong *)(lVar3 + 0x30) = uVar2;
      return uVar2;
    }
  }
  auVar8 = func_0x00f78af4();
  lVar3 = auVar8._0_8_;
  cVar1 = *(char *)(lVar3 + 0x50);
  if (cVar1 == '\0') {
    *(undefined1 *)(lVar3 + 0x50) = 1;
    /*Atlas.Save.SaveManager$$SerializeSaveDataToSaveBuffer*/ func_0x014eba0c();
    uVar5 = /*Atlas.Save.SaveManager$$AsyncSave*/ func_0x014ebb38(lVar3,auVar8._8_8_,0);
    *(undefined8 *)(lVar3 + 0x100) = uVar5;
    *(undefined4 *)(lVar3 + 0x54) = 0;
    *(undefined1 *)(lVar3 + 0x110) = 0;
  }
  return (ulong)(cVar1 == '\0');
}



// ============================================================
// RVA: 0x14eb4e0 | Atlas.Save.SaveManager.StartSave
// ============================================================

/* WARNING: Possible PIC construction at 0x014eb53c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014eb540) */

ulong Atlas_Save_SaveManager__StartSave(long param_1)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  if (*(char *)(param_1 + 0x108) != '\0') {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0x110) = 0;
  lVar2 = Atlas_Save_SaveManager__get_SaveData();
  if (lVar2 != 0) {
    uVar3 = Atlas_Save_SaveData__get_IsValidSaveData();
    if ((uVar3 & 1) != 0) goto code_r0x014eb558;
    if ((*(long *)(param_1 + 0x98) != 0) &&
       (lVar2 = *(long *)(*(long *)(param_1 + 0x98) + 0x48), lVar2 != 0)) {
      /*Atlas.Analytics.AtlasAnalyticsEvents$$NewSaveGameEvent*/ func_0x01455860(lVar2,0);
      goto code_r0x014eb558;
    }
  }
  param_1 = func_0x00f78af4();
code_r0x014eb558:
  if ((bRam0000000003eb4c42 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    bRam0000000003eb4c42 = 1;
  }
  lVar2 = Atlas_Save_SaveManager__get_SaveData(param_1);
  if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar5 = /*System.DateTime$$get_Now*/ func_0x02a8e404(0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x18) = uVar5;
    lVar2 = Atlas_Save_SaveManager__get_SaveData(param_1);
    if (((*(long *)(param_1 + 0x58) != 0) &&
        (lVar4 = *(long *)(*(long *)(param_1 + 0x58) + 0x10), lVar4 != 0)) &&
       (uVar3 = /*Atlas.Stats.StatsData$$Clone*/ func_0x01504c74(lVar4,0), lVar2 != 0)) {
      *(ulong *)(lVar2 + 0x30) = uVar3;
      return uVar3;
    }
  }
  auVar6 = func_0x00f78af4();
  lVar2 = auVar6._0_8_;
  cVar1 = *(char *)(lVar2 + 0x50);
  if (cVar1 == '\0') {
    *(undefined1 *)(lVar2 + 0x50) = 1;
    /*Atlas.Save.SaveManager$$SerializeSaveDataToSaveBuffer*/ func_0x014eba0c();
    uVar5 = /*Atlas.Save.SaveManager$$AsyncSave*/ func_0x014ebb38(lVar2,auVar6._8_8_,0);
    *(undefined8 *)(lVar2 + 0x100) = uVar5;
    *(undefined4 *)(lVar2 + 0x54) = 0;
    *(undefined1 *)(lVar2 + 0x110) = 0;
  }
  return (ulong)(cVar1 == '\0');
}



// ============================================================
// RVA: 0x14eb558 | Atlas.Save.SaveManager.UpdateDependantSaveDataFieldsPreSave
// ============================================================

ulong Atlas_Save_SaveManager__UpdateDependantSaveDataFieldsPreSave(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000003eb4c42 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    bRam0000000003eb4c42 = 1;
  }
  lVar2 = Atlas_Save_SaveManager__get_SaveData(param_1);
  if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = /*System.DateTime$$get_Now*/ func_0x02a8e404(0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x18) = uVar3;
    lVar2 = Atlas_Save_SaveManager__get_SaveData(param_1);
    if (((*(long *)(param_1 + 0x58) != 0) &&
        (lVar4 = *(long *)(*(long *)(param_1 + 0x58) + 0x10), lVar4 != 0)) &&
       (uVar5 = /*Atlas.Stats.StatsData$$Clone*/ func_0x01504c74(lVar4,0), lVar2 != 0)) {
      *(ulong *)(lVar2 + 0x30) = uVar5;
      return uVar5;
    }
  }
  auVar6 = func_0x00f78af4();
  lVar2 = auVar6._0_8_;
  cVar1 = *(char *)(lVar2 + 0x50);
  if (cVar1 == '\0') {
    *(undefined1 *)(lVar2 + 0x50) = 1;
    /*Atlas.Save.SaveManager$$SerializeSaveDataToSaveBuffer*/ func_0x014eba0c();
    uVar3 = /*Atlas.Save.SaveManager$$AsyncSave*/ func_0x014ebb38(lVar2,auVar6._8_8_,0);
    *(undefined8 *)(lVar2 + 0x100) = uVar3;
    *(undefined4 *)(lVar2 + 0x54) = 0;
    *(undefined1 *)(lVar2 + 0x110) = 0;
  }
  return (ulong)(cVar1 == '\0');
}



// ============================================================
// RVA: 0x14eb608 | Atlas.Save.SaveManager.StartSave
// ============================================================

bool Atlas_Save_SaveManager__StartSave(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + 0x50);
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0x50) = 1;
    /*Atlas.Save.SaveManager$$SerializeSaveDataToSaveBuffer*/ func_0x014eba0c();
    uVar2 = /*Atlas.Save.SaveManager$$AsyncSave*/ func_0x014ebb38(param_1,param_2,0);
    *(undefined8 *)(param_1 + 0x100) = uVar2;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined1 *)(param_1 + 0x110) = 0;
  }
  return cVar1 == '\0';
}



// ============================================================
// RVA: 0x14eb668 | Atlas.Save.SaveManager.ScheduleSave
// ============================================================

void Atlas_Save_SaveManager__ScheduleSave(long param_1)

{
  float fVar1;
  
  if (*(float *)(param_1 + 0x54) == 0.0) {
    fVar1 = (float)/*UnityEngine.Time$$get_time*/ func_0x03272b70(0);
    *(float *)(param_1 + 0x54) = fVar1 + 5.0;
  }
  return;
}



// ============================================================
// RVA: 0x14eb6a4 | Atlas.Save.SaveManager.StartSaveIfDirty
// ============================================================

ulong Atlas_Save_SaveManager__StartSaveIfDirty(long param_1)

{
  char cVar1;
  undefined1 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 **unaff_x29;
  code *unaff_x30;
  undefined1 auVar7 [16];
  undefined1 *puStack_30;
  code *pcStack_28;
  
  if (*(char *)(param_1 + 0x110) == '\0') {
    return 0;
  }
  if (*(char *)(param_1 + 0x108) != '\0') {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0x110) = 0;
  lVar3 = Atlas_Save_SaveManager__get_SaveData();
  if (lVar3 == 0) {
code_r0x014eb554:
    unaff_x19 = func_0x00f78af4();
    puVar2 = &stack0xffffffffffffffb0;
    pcStack_28 = Atlas_Save_SaveManager__UpdateDependantSaveDataFieldsPreSave;
    unaff_x29 = &puStack_30;
    unaff_x21 = 0x3d21070;
    puStack_30 = &stack0xfffffffffffffff0;
    if ((bRam0000000003eb4c42 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      bRam0000000003eb4c42 = 1;
    }
    unaff_x20 = Atlas_Save_SaveManager__get_SaveData(unaff_x19);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar6 = /*System.DateTime$$get_Now*/ func_0x02a8e404(0);
    if (unaff_x20 != 0) {
      *(undefined8 *)(unaff_x20 + 0x18) = uVar6;
      lVar3 = Atlas_Save_SaveManager__get_SaveData(unaff_x19);
      if (((*(long *)(unaff_x19 + 0x58) != 0) &&
          (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x58) + 0x10), unaff_x20 = lVar3, lVar5 != 0)) &&
         (uVar4 = /*Atlas.Stats.StatsData$$Clone*/ func_0x01504c74(lVar5,0), lVar3 != 0)) {
        *(ulong *)(lVar3 + 0x30) = uVar4;
        return uVar4;
      }
    }
    unaff_x30 = Atlas_Save_SaveManager__StartSave;
    auVar7 = func_0x00f78af4();
    uVar4 = auVar7._8_8_;
    param_1 = auVar7._0_8_;
  }
  else {
    uVar4 = Atlas_Save_SaveData__get_IsValidSaveData();
    if ((uVar4 & 1) == 0) {
      if ((*(long *)(param_1 + 0x98) == 0) ||
         (lVar3 = *(long *)(*(long *)(param_1 + 0x98) + 0x48), lVar3 == 0)) goto code_r0x014eb554;
      /*Atlas.Analytics.AtlasAnalyticsEvents$$NewSaveGameEvent*/ func_0x01455860(lVar3,0);
    }
    Atlas_Save_SaveManager__UpdateDependantSaveDataFieldsPreSave(param_1);
    uVar4 = (ulong)*(uint *)(param_1 + 0xf8);
    puVar2 = (undefined1 *)register0x00000008;
  }
  *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
  *(long *)(puVar2 + -0x20) = unaff_x20;
  *(long *)(puVar2 + -0x18) = unaff_x19;
  *(undefined1 ***)(puVar2 + -0x10) = unaff_x29;
  *(code **)(puVar2 + -8) = unaff_x30;
  cVar1 = *(char *)(param_1 + 0x50);
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0x50) = 1;
    /*Atlas.Save.SaveManager$$SerializeSaveDataToSaveBuffer*/ func_0x014eba0c();
    uVar6 = /*Atlas.Save.SaveManager$$AsyncSave*/ func_0x014ebb38(param_1,uVar4,0);
    *(undefined8 *)(param_1 + 0x100) = uVar6;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined1 *)(param_1 + 0x110) = 0;
  }
  return (ulong)(cVar1 == '\0');
}



// ============================================================
// RVA: 0x14eb6b8 | Atlas.Save.SaveManager.FlushScheduledSaveIfAnyAndWait
// ============================================================

long Atlas_Save_SaveManager__FlushScheduledSaveIfAnyAndWait(undefined8 param_1)

{
  long lVar1;
  
  if ((bRam0000000003eb4c34 & 1) == 0) {
    func_0x00f78a20(0x3d28b08);
    bRam0000000003eb4c34 = 1;
  }
  lVar1 = func_0x00f78aec(/*Atlas.Save.SaveManager.<FlushScheduledSaveIfAnyAndWait>d__46_TypeInfo*/ uRam0000000003d28b08);
  /*Atlas.Save.SaveManager.<FlushScheduledSaveIfAnyAndWait>d__46$$.ctor*/ func_0x015688a0(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    return lVar1;
  }
  lVar1 = func_0x00f78af4();
  *(undefined1 *)(lVar1 + 0x110) = 1;
  return lVar1;
}



// ============================================================
// RVA: 0x14eb72c | Atlas.Save.SaveManager.MarkSaveAsDirty
// ============================================================

void Atlas_Save_SaveManager__MarkSaveAsDirty(long param_1)

{
  *(undefined1 *)(param_1 + 0x110) = 1;
  return;
}



// ============================================================
// RVA: 0x14eb738 | Atlas.Save.SaveManager.Load
// ============================================================

long Atlas_Save_SaveManager__Load(undefined8 param_1,undefined4 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [16];
  
  if ((bRam0000000003eb4c35 & 1) == 0) {
    func_0x00f78a20(0x3d28b10);
    bRam0000000003eb4c35 = 1;
  }
  lVar2 = func_0x00f78aec(/*Atlas.Save.SaveManager.<Load>d__48_TypeInfo*/ uRam0000000003d28b10);
  /*Atlas.Save.SaveManager.<Load>d__48$$.ctor*/ func_0x015689a4(lVar2,0,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x20) = param_1;
    *(undefined4 *)(lVar2 + 0x28) = param_2;
    return lVar2;
  }
  uVar3 = func_0x00f78af4();
  if ((bRam0000000003eb4c36 & 1) == 0) {
    func_0x00f78a20(0x3d28b18);
    bRam0000000003eb4c36 = 1;
  }
  lVar2 = func_0x00f78aec(/*Atlas.Save.SaveManager.<LoadAll>d__49_TypeInfo*/ uRam0000000003d28b18);
  /*Atlas.Save.SaveManager.<LoadAll>d__49$$.ctor*/ func_0x01568ac0(lVar2,0,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    return lVar2;
  }
  auVar6 = func_0x00f78af4();
  if ((bRam0000000003eb4c37 & 1) == 0) {
    func_0x00f78a20(0x3d28b00);
    bRam0000000003eb4c37 = 1;
  }
  lVar2 = func_0x00f78aec(/*Atlas.Save.SaveManager.<Delete>d__50_TypeInfo*/ uRam0000000003d28b00);
  /*Atlas.Save.SaveManager.<Delete>d__50$$.ctor*/ func_0x01568738(lVar2,0,0);
  if (lVar2 != 0) {
    *(undefined1 (*) [12])(lVar2 + 0x20) = auVar6;
    return lVar2;
  }
  auVar6 = func_0x00f78af4();
  if ((bRam0000000003eb4c38 & 1) == 0) {
    func_0x00f78a20(0x3d28af8);
    bRam0000000003eb4c38 = 1;
  }
  lVar2 = func_0x00f78aec(/*Atlas.Save.SaveManager.<ChangeSaveSlot>d__51_TypeInfo*/ uRam0000000003d28af8);
  /*Atlas.Save.SaveManager.<ChangeSaveSlot>d__51$$.ctor*/ func_0x01568624(lVar2,0,0);
  if (lVar2 != 0) {
    *(undefined1 (*) [12])(lVar2 + 0x20) = auVar6;
    return lVar2;
  }
  uVar3 = func_0x00f78af4();
  if ((bRam0000000003eb4c39 & 1) == 0) {
    func_0x00f78a20(0x3d28b20);
    bRam0000000003eb4c39 = 1;
  }
  lVar2 = func_0x00f78aec(/*Atlas.Save.SaveManager.<ResetDependantSystems>d__52_TypeInfo*/ uRam0000000003d28b20);
  /*Atlas.Save.SaveManager.<ResetDependantSystems>d__52$$.ctor*/ func_0x01568c6c(lVar2,0,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    return lVar2;
  }
  auVar7 = func_0x00f78af4();
  plVar5 = *(long **)(auVar7._0_8_ + 0xf0);
  lVar2 = Atlas_Save_SaveManager__CreateNewSaveData();
  if (plVar5 == (long *)0x0) {
    func_0x00f78af4();
  }
  else {
    lVar4 = 0;
    if ((lVar2 != 0) && (lVar4 = func_0x00f78adc(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0)
       ) {
      uVar3 = func_0x00f78b14();
      goto code_r0x014eba04;
    }
    if (auVar7._8_4_ < *(uint *)(plVar5 + 3)) {
      plVar5[(auVar7._8_8_ & 0xffffffff) + 4] = lVar2;
      return lVar4;
    }
  }
  uVar3 = func_0x00f78b24();
code_r0x014eba04:
  auVar7 = func_0x00f78ac0(uVar3,0);
  if ((bRam0000000003eb4c41 & 1) == 0) {
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c41 = 1;
  }
  lVar2 = *(long *)(auVar7._0_8_ + 0xf0);
  if (lVar2 == 0) {
    func_0x00f78af4();
  }
  else {
    if (auVar7._8_4_ < *(uint *)(lVar2 + 0x18)) {
      uVar3 = *(undefined8 *)(lVar2 + (auVar7._8_8_ & 0xffffffff) * 8 + 0x20);
      if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar2 = /*Atlas.Save.SaveManager$$SerializeSaveData*/ func_0x014ebf64(uVar3,auVar7._0_8_ + 0x10);
      return lVar2;
    }
    uVar3 = func_0x00f78b24();
    func_0x00f78ac0(uVar3,0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x14ebb24);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x14eb7b4 | Atlas.Save.SaveManager.LoadAll
// ============================================================

long Atlas_Save_SaveManager__LoadAll(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [16];
  
  if ((bRam0000000003eb4c36 & 1) == 0) {
    func_0x00f78a20(0x3d28b18);
    bRam0000000003eb4c36 = 1;
  }
  lVar2 = func_0x00f78aec(/*Atlas.Save.SaveManager.<LoadAll>d__49_TypeInfo*/ uRam0000000003d28b18);
  /*Atlas.Save.SaveManager.<LoadAll>d__49$$.ctor*/ func_0x01568ac0(lVar2,0,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x20) = param_1;
    return lVar2;
  }
  auVar6 = func_0x00f78af4();
  if ((bRam0000000003eb4c37 & 1) == 0) {
    func_0x00f78a20(0x3d28b00);
    bRam0000000003eb4c37 = 1;
  }
  lVar2 = func_0x00f78aec(/*Atlas.Save.SaveManager.<Delete>d__50_TypeInfo*/ uRam0000000003d28b00);
  /*Atlas.Save.SaveManager.<Delete>d__50$$.ctor*/ func_0x01568738(lVar2,0,0);
  if (lVar2 != 0) {
    *(undefined1 (*) [12])(lVar2 + 0x20) = auVar6;
    return lVar2;
  }
  auVar6 = func_0x00f78af4();
  if ((bRam0000000003eb4c38 & 1) == 0) {
    func_0x00f78a20(0x3d28af8);
    bRam0000000003eb4c38 = 1;
  }
  lVar2 = func_0x00f78aec(/*Atlas.Save.SaveManager.<ChangeSaveSlot>d__51_TypeInfo*/ uRam0000000003d28af8);
  /*Atlas.Save.SaveManager.<ChangeSaveSlot>d__51$$.ctor*/ func_0x01568624(lVar2,0,0);
  if (lVar2 != 0) {
    *(undefined1 (*) [12])(lVar2 + 0x20) = auVar6;
    return lVar2;
  }
  uVar3 = func_0x00f78af4();
  if ((bRam0000000003eb4c39 & 1) == 0) {
    func_0x00f78a20(0x3d28b20);
    bRam0000000003eb4c39 = 1;
  }
  lVar2 = func_0x00f78aec(/*Atlas.Save.SaveManager.<ResetDependantSystems>d__52_TypeInfo*/ uRam0000000003d28b20);
  /*Atlas.Save.SaveManager.<ResetDependantSystems>d__52$$.ctor*/ func_0x01568c6c(lVar2,0,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    return lVar2;
  }
  auVar7 = func_0x00f78af4();
  plVar5 = *(long **)(auVar7._0_8_ + 0xf0);
  lVar2 = Atlas_Save_SaveManager__CreateNewSaveData();
  if (plVar5 == (long *)0x0) {
    func_0x00f78af4();
  }
  else {
    lVar4 = 0;
    if ((lVar2 != 0) && (lVar4 = func_0x00f78adc(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0)
       ) {
      uVar3 = func_0x00f78b14();
      goto code_r0x014eba04;
    }
    if (auVar7._8_4_ < *(uint *)(plVar5 + 3)) {
      plVar5[(auVar7._8_8_ & 0xffffffff) + 4] = lVar2;
      return lVar4;
    }
  }
  uVar3 = func_0x00f78b24();
code_r0x014eba04:
  auVar7 = func_0x00f78ac0(uVar3,0);
  if ((bRam0000000003eb4c41 & 1) == 0) {
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c41 = 1;
  }
  lVar2 = *(long *)(auVar7._0_8_ + 0xf0);
  if (lVar2 == 0) {
    func_0x00f78af4();
  }
  else {
    if (auVar7._8_4_ < *(uint *)(lVar2 + 0x18)) {
      uVar3 = *(undefined8 *)(lVar2 + (auVar7._8_8_ & 0xffffffff) * 8 + 0x20);
      if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar2 = /*Atlas.Save.SaveManager$$SerializeSaveData*/ func_0x014ebf64(uVar3,auVar7._0_8_ + 0x10);
      return lVar2;
    }
    uVar3 = func_0x00f78b24();
    func_0x00f78ac0(uVar3,0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x14ebb24);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x14eb828 | Atlas.Save.SaveManager.Delete
// ============================================================

long Atlas_Save_SaveManager__Delete(undefined8 param_1,undefined4 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [16];
  
  if ((bRam0000000003eb4c37 & 1) == 0) {
    func_0x00f78a20(0x3d28b00);
    bRam0000000003eb4c37 = 1;
  }
  lVar2 = func_0x00f78aec(/*Atlas.Save.SaveManager.<Delete>d__50_TypeInfo*/ uRam0000000003d28b00);
  /*Atlas.Save.SaveManager.<Delete>d__50$$.ctor*/ func_0x01568738(lVar2,0,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x20) = param_1;
    *(undefined4 *)(lVar2 + 0x28) = param_2;
    return lVar2;
  }
  auVar6 = func_0x00f78af4();
  if ((bRam0000000003eb4c38 & 1) == 0) {
    func_0x00f78a20(0x3d28af8);
    bRam0000000003eb4c38 = 1;
  }
  lVar2 = func_0x00f78aec(/*Atlas.Save.SaveManager.<ChangeSaveSlot>d__51_TypeInfo*/ uRam0000000003d28af8);
  /*Atlas.Save.SaveManager.<ChangeSaveSlot>d__51$$.ctor*/ func_0x01568624(lVar2,0,0);
  if (lVar2 != 0) {
    *(undefined1 (*) [12])(lVar2 + 0x20) = auVar6;
    return lVar2;
  }
  uVar3 = func_0x00f78af4();
  if ((bRam0000000003eb4c39 & 1) == 0) {
    func_0x00f78a20(0x3d28b20);
    bRam0000000003eb4c39 = 1;
  }
  lVar2 = func_0x00f78aec(/*Atlas.Save.SaveManager.<ResetDependantSystems>d__52_TypeInfo*/ uRam0000000003d28b20);
  /*Atlas.Save.SaveManager.<ResetDependantSystems>d__52$$.ctor*/ func_0x01568c6c(lVar2,0,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    return lVar2;
  }
  auVar7 = func_0x00f78af4();
  plVar5 = *(long **)(auVar7._0_8_ + 0xf0);
  lVar2 = Atlas_Save_SaveManager__CreateNewSaveData();
  if (plVar5 == (long *)0x0) {
    func_0x00f78af4();
  }
  else {
    lVar4 = 0;
    if ((lVar2 != 0) && (lVar4 = func_0x00f78adc(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0)
       ) {
      uVar3 = func_0x00f78b14();
      goto code_r0x014eba04;
    }
    if (auVar7._8_4_ < *(uint *)(plVar5 + 3)) {
      plVar5[(auVar7._8_8_ & 0xffffffff) + 4] = lVar2;
      return lVar4;
    }
  }
  uVar3 = func_0x00f78b24();
code_r0x014eba04:
  auVar7 = func_0x00f78ac0(uVar3,0);
  if ((bRam0000000003eb4c41 & 1) == 0) {
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c41 = 1;
  }
  lVar2 = *(long *)(auVar7._0_8_ + 0xf0);
  if (lVar2 == 0) {
    func_0x00f78af4();
  }
  else {
    if (auVar7._8_4_ < *(uint *)(lVar2 + 0x18)) {
      uVar3 = *(undefined8 *)(lVar2 + (auVar7._8_8_ & 0xffffffff) * 8 + 0x20);
      if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar2 = /*Atlas.Save.SaveManager$$SerializeSaveData*/ func_0x014ebf64(uVar3,auVar7._0_8_ + 0x10);
      return lVar2;
    }
    uVar3 = func_0x00f78b24();
    func_0x00f78ac0(uVar3,0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x14ebb24);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x14eb8a4 | Atlas.Save.SaveManager.ChangeSaveSlot
// ============================================================

long Atlas_Save_SaveManager__ChangeSaveSlot(undefined8 param_1,undefined4 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000003eb4c38 & 1) == 0) {
    func_0x00f78a20(0x3d28af8);
    bRam0000000003eb4c38 = 1;
  }
  lVar2 = func_0x00f78aec(/*Atlas.Save.SaveManager.<ChangeSaveSlot>d__51_TypeInfo*/ uRam0000000003d28af8);
  /*Atlas.Save.SaveManager.<ChangeSaveSlot>d__51$$.ctor*/ func_0x01568624(lVar2,0,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x20) = param_1;
    *(undefined4 *)(lVar2 + 0x28) = param_2;
    return lVar2;
  }
  uVar3 = func_0x00f78af4();
  if ((bRam0000000003eb4c39 & 1) == 0) {
    func_0x00f78a20(0x3d28b20);
    bRam0000000003eb4c39 = 1;
  }
  lVar2 = func_0x00f78aec(/*Atlas.Save.SaveManager.<ResetDependantSystems>d__52_TypeInfo*/ uRam0000000003d28b20);
  /*Atlas.Save.SaveManager.<ResetDependantSystems>d__52$$.ctor*/ func_0x01568c6c(lVar2,0,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    return lVar2;
  }
  auVar6 = func_0x00f78af4();
  plVar5 = *(long **)(auVar6._0_8_ + 0xf0);
  lVar2 = Atlas_Save_SaveManager__CreateNewSaveData();
  if (plVar5 == (long *)0x0) {
    func_0x00f78af4();
  }
  else {
    lVar4 = 0;
    if ((lVar2 != 0) && (lVar4 = func_0x00f78adc(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0)
       ) {
      uVar3 = func_0x00f78b14();
      goto code_r0x014eba04;
    }
    if (auVar6._8_4_ < *(uint *)(plVar5 + 3)) {
      plVar5[(auVar6._8_8_ & 0xffffffff) + 4] = lVar2;
      return lVar4;
    }
  }
  uVar3 = func_0x00f78b24();
code_r0x014eba04:
  auVar6 = func_0x00f78ac0(uVar3,0);
  if ((bRam0000000003eb4c41 & 1) == 0) {
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c41 = 1;
  }
  lVar2 = *(long *)(auVar6._0_8_ + 0xf0);
  if (lVar2 == 0) {
    func_0x00f78af4();
  }
  else {
    if (auVar6._8_4_ < *(uint *)(lVar2 + 0x18)) {
      uVar3 = *(undefined8 *)(lVar2 + (auVar6._8_8_ & 0xffffffff) * 8 + 0x20);
      if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar2 = /*Atlas.Save.SaveManager$$SerializeSaveData*/ func_0x014ebf64(uVar3,auVar6._0_8_ + 0x10);
      return lVar2;
    }
    uVar3 = func_0x00f78b24();
    func_0x00f78ac0(uVar3,0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x14ebb24);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x14eb920 | Atlas.Save.SaveManager.ResetDependantSystems
// ============================================================

long Atlas_Save_SaveManager__ResetDependantSystems(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000003eb4c39 & 1) == 0) {
    func_0x00f78a20(0x3d28b20);
    bRam0000000003eb4c39 = 1;
  }
  lVar2 = func_0x00f78aec(/*Atlas.Save.SaveManager.<ResetDependantSystems>d__52_TypeInfo*/ uRam0000000003d28b20);
  /*Atlas.Save.SaveManager.<ResetDependantSystems>d__52$$.ctor*/ func_0x01568c6c(lVar2,0,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x20) = param_1;
    return lVar2;
  }
  auVar6 = func_0x00f78af4();
  plVar5 = *(long **)(auVar6._0_8_ + 0xf0);
  lVar2 = Atlas_Save_SaveManager__CreateNewSaveData();
  if (plVar5 == (long *)0x0) {
    func_0x00f78af4();
  }
  else {
    lVar3 = 0;
    if ((lVar2 != 0) && (lVar3 = func_0x00f78adc(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0)
       ) {
      uVar4 = func_0x00f78b14();
      goto code_r0x014eba04;
    }
    if (auVar6._8_4_ < *(uint *)(plVar5 + 3)) {
      plVar5[(auVar6._8_8_ & 0xffffffff) + 4] = lVar2;
      return lVar3;
    }
  }
  uVar4 = func_0x00f78b24();
code_r0x014eba04:
  auVar6 = func_0x00f78ac0(uVar4,0);
  if ((bRam0000000003eb4c41 & 1) == 0) {
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c41 = 1;
  }
  lVar2 = *(long *)(auVar6._0_8_ + 0xf0);
  if (lVar2 == 0) {
    func_0x00f78af4();
  }
  else {
    if (auVar6._8_4_ < *(uint *)(lVar2 + 0x18)) {
      uVar4 = *(undefined8 *)(lVar2 + (auVar6._8_8_ & 0xffffffff) * 8 + 0x20);
      if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar2 = /*Atlas.Save.SaveManager$$SerializeSaveData*/ func_0x014ebf64(uVar4,auVar6._0_8_ + 0x10);
      return lVar2;
    }
    uVar4 = func_0x00f78b24();
    func_0x00f78ac0(uVar4,0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x14ebb24);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x14eb994 | Atlas.Save.SaveManager.ResetSave
// ============================================================

void Atlas_Save_SaveManager__ResetSave(long param_1,uint param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  
  plVar5 = *(long **)(param_1 + 0xf0);
  lVar2 = Atlas_Save_SaveManager__CreateNewSaveData();
  if (plVar5 == (long *)0x0) {
    func_0x00f78af4();
  }
  else {
    if ((lVar2 != 0) && (lVar3 = func_0x00f78adc(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0)
       ) {
      uVar4 = func_0x00f78b14();
      goto code_r0x014eba04;
    }
    if (param_2 < *(uint *)(plVar5 + 3)) {
      plVar5[(ulong)param_2 + 4] = lVar2;
      return;
    }
  }
  uVar4 = func_0x00f78b24();
code_r0x014eba04:
  auVar6 = func_0x00f78ac0(uVar4,0);
  if ((bRam0000000003eb4c41 & 1) == 0) {
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c41 = 1;
  }
  lVar2 = *(long *)(auVar6._0_8_ + 0xf0);
  if (lVar2 == 0) {
    func_0x00f78af4();
  }
  else {
    if (auVar6._8_4_ < *(uint *)(lVar2 + 0x18)) {
      uVar4 = *(undefined8 *)(lVar2 + (auVar6._8_8_ & 0xffffffff) * 8 + 0x20);
      if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*Atlas.Save.SaveManager$$SerializeSaveData*/ func_0x014ebf64(uVar4,auVar6._0_8_ + 0x10);
      return;
    }
    uVar4 = func_0x00f78b24();
    func_0x00f78ac0(uVar4,0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x14ebb24);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x14eba0c | Atlas.Save.SaveManager.SerializeSaveDataToSaveBuffer
// ============================================================

void Atlas_Save_SaveManager__SerializeSaveDataToSaveBuffer(long param_1,uint param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam0000000003eb4c41 & 1) == 0) {
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c41 = 1;
  }
  lVar2 = *(long *)(param_1 + 0xf0);
  if (lVar2 == 0) {
    func_0x00f78af4();
  }
  else {
    if (param_2 < *(uint *)(lVar2 + 0x18)) {
      uVar3 = *(undefined8 *)(lVar2 + (ulong)param_2 * 8 + 0x20);
      if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*Atlas.Save.SaveManager$$SerializeSaveData*/ func_0x014ebf64(uVar3,param_1 + 0x10);
      return;
    }
    uVar3 = func_0x00f78b24();
    func_0x00f78ac0(uVar3,0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x14ebb24);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x14ebb38 | Atlas.Save.SaveManager.AsyncSave
// ============================================================

void Atlas_Save_SaveManager__AsyncSave(undefined8 param_1,undefined4 param_2,undefined1 param_3)

{
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000003eb4c3c & 1) == 0) {
    func_0x00f78a20(0x3d520c8);
    bRam0000000003eb4c3c = 1;
  }
  uStack_58 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  auStack_78._0_8_ = 0;
  uStack_80 = 0;
  auStack_78._8_8_ = 0;
  uStack_60 = (ulong)CONCAT14(param_3,param_2);
  uStack_68 = param_1;
  auStack_90 = /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder$$Create*/ func_0x02f99564(0);
  uStack_80 = CONCAT44(uStack_80._4_4_,0xffffffff);
  auStack_78 = auStack_90;
  /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder$$Start<SaveManager.<AsyncSave>d__59>*/ func_0x0181e16c(auStack_90,&uStack_80,uRam0000000003d520c8);
  /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder$$get_Task*/ func_0x02f99570((ulong)&uStack_80 | 8,0);
  return;
}



// ============================================================
// RVA: 0x14ebbf0 | Atlas.Save.SaveManager.OnSaveAccountUnauthenticated
// ============================================================

void Atlas_Save_SaveManager__OnSaveAccountUnauthenticated(long param_1)

{
  *(undefined1 *)(param_1 + 0x108) = 1;
  return;
}



// ============================================================
// RVA: 0x14ebbfc | Atlas.Save.SaveManager.OnSaveAccountStorageFull
// ============================================================

void Atlas_Save_SaveManager__OnSaveAccountStorageFull(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auVar3 [12];
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a8 [16];
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000003eb4c3b & 1) == 0) {
    func_0x00f78a20(0x3d280d0);
    func_0x00f78a20(0x3d3e0e8);
    func_0x00f78a20(0x3d6d110);
    func_0x00f78a20(0x3d6f768);
    func_0x00f78a20(0x3d6f760);
    bRam0000000003eb4c3b = 1;
  }
  if (*(char *)(param_1 + 0x112) != '\0') {
    return;
  }
  lVar2 = func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
  /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(lVar2,0);
  uVar1 = /*STR('MESSAGE_ICLOUDWARNING_BODY')*/ uRam0000000003d6f760;
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x28) = /*STR('MESSAGE_ICLOUDWARNING_TITLE')*/ uRam0000000003d6f768;
    *(undefined8 *)(lVar2 + 0x30) = uVar1;
    *(undefined8 *)(lVar2 + 0x38) = /*STR('GENERIC_OK')*/ uRam0000000003d6d110;
    if (*(long *)(param_1 + 0xa0) != 0) {
      /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$QueueModal*/ func_0x025dfbac(*(long *)(param_1 + 0xa0),lVar2,uRam0000000003d3e0e8);
      *(undefined1 *)(param_1 + 0x112) = 1;
      return;
    }
  }
  auVar3 = func_0x00f78af4();
  uStack_98 = auVar3._0_8_;
  if ((bRam0000000003eb4c3d & 1) == 0) {
    func_0x00f78a20(0x3d520c0);
    bRam0000000003eb4c3d = 1;
  }
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  auStack_a8._0_8_ = 0;
  uStack_b0 = 0;
  auStack_a8._8_8_ = 0;
  uStack_90 = (ulong)auVar3._8_4_;
  auStack_c0 = /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder$$Create*/ func_0x02f99564(0);
  uStack_b0 = CONCAT44(uStack_b0._4_4_,0xffffffff);
  auStack_a8 = auStack_c0;
  /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder$$Start<SaveManager.<AsyncLoad>d__60>*/ func_0x0181e160(auStack_c0,&uStack_b0,uRam0000000003d520c0);
  /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder$$get_Task*/ func_0x02f99570((ulong)&uStack_b0 | 8,0);
  return;
}



// ============================================================
// RVA: 0x14ebce4 | Atlas.Save.SaveManager.AsyncLoad
// ============================================================

void Atlas_Save_SaveManager__AsyncLoad(undefined8 param_1,uint param_2)

{
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb4c3d & 1) == 0) {
    func_0x00f78a20(0x3d520c0);
    bRam0000000003eb4c3d = 1;
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  auStack_88._0_8_ = 0;
  uStack_90 = 0;
  auStack_88._8_8_ = 0;
  uStack_70 = (ulong)param_2;
  uStack_78 = param_1;
  auStack_a0 = /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder$$Create*/ func_0x02f99564(0);
  uStack_90 = CONCAT44(uStack_90._4_4_,0xffffffff);
  auStack_88 = auStack_a0;
  /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder$$Start<SaveManager.<AsyncLoad>d__60>*/ func_0x0181e160(auStack_a0,&uStack_90,uRam0000000003d520c0);
  /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder$$get_Task*/ func_0x02f99570((ulong)&uStack_90 | 8,0);
  return;
}



// ============================================================
// RVA: 0x14ebd90 | Atlas.Save.SaveManager.UpdateSaveSlotAndMergeIfRequired
// ============================================================

void Atlas_Save_SaveManager__UpdateSaveSlotAndMergeIfRequired
               (undefined8 param_1,uint param_2,undefined8 param_3)

{
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000003eb4c3e & 1) == 0) {
    func_0x00f78a20(0x3d520d0);
    bRam0000000003eb4c3e = 1;
  }
  uStack_48 = 0;
  uStack_50 = 0;
  auStack_78._0_8_ = 0;
  uStack_80 = 0;
  auStack_78._8_8_ = 0;
  uStack_60 = (ulong)param_2;
  uStack_68 = param_1;
  uStack_58 = param_3;
  auStack_90 = /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder$$Create*/ func_0x02f99564(0);
  uStack_80 = CONCAT44(uStack_80._4_4_,0xffffffff);
  auStack_78 = auStack_90;
  /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder$$Start<SaveManager.<UpdateSaveSlotAndMergeIfRequired>d__61>*/ func_0x0181e178(auStack_90,&uStack_80,uRam0000000003d520d0);
  /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder$$get_Task*/ func_0x02f99570((ulong)&uStack_80 | 8,0);
  return;
}



// ============================================================
// RVA: 0x14ebe48 | Atlas.Save.SaveManager.WaitForSavingFullyComplete
// ============================================================

long Atlas_Save_SaveManager__WaitForSavingFullyComplete(undefined8 param_1)

{
  long lVar1;
  undefined1 auVar2 [12];
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  undefined1 auStack_98 [16];
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000003eb4c3f & 1) == 0) {
    func_0x00f78a20(0x3d28b28);
    bRam0000000003eb4c3f = 1;
  }
  lVar1 = func_0x00f78aec(/*Atlas.Save.SaveManager.<WaitForSavingFullyComplete>d__62_TypeInfo*/ uRam0000000003d28b28);
  /*Atlas.Save.SaveManager.<WaitForSavingFullyComplete>d__62$$.ctor*/ func_0x01569488(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    return lVar1;
  }
  auVar2 = func_0x00f78af4();
  uStack_88 = auVar2._0_8_;
  if ((bRam0000000003eb4c40 & 1) == 0) {
    func_0x00f78a20(0x3d520b8);
    bRam0000000003eb4c40 = 1;
  }
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  auStack_98._0_8_ = 0;
  uStack_a0 = 0;
  auStack_98._8_8_ = 0;
  uStack_80 = (ulong)auVar2._8_4_;
  auStack_b0 = /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder$$Create*/ func_0x02f99564(0);
  uStack_a0 = CONCAT44(uStack_a0._4_4_,0xffffffff);
  auStack_98 = auStack_b0;
  /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder$$Start<SaveManager.<AsyncDelete>d__63>*/ func_0x0181e154(auStack_b0,&uStack_a0,uRam0000000003d520b8);
  lVar1 = /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder$$get_Task*/ func_0x02f99570((ulong)&uStack_a0 | 8,0);
  return lVar1;
}



// ============================================================
// RVA: 0x14ebebc | Atlas.Save.SaveManager.AsyncDelete
// ============================================================

void Atlas_Save_SaveManager__AsyncDelete(undefined8 param_1,uint param_2)

{
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb4c40 & 1) == 0) {
    func_0x00f78a20(0x3d520b8);
    bRam0000000003eb4c40 = 1;
  }
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  auStack_68._0_8_ = 0;
  uStack_70 = 0;
  auStack_68._8_8_ = 0;
  uStack_50 = (ulong)param_2;
  uStack_58 = param_1;
  auStack_80 = /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder$$Create*/ func_0x02f99564(0);
  uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
  auStack_68 = auStack_80;
  /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder$$Start<SaveManager.<AsyncDelete>d__63>*/ func_0x0181e154(auStack_80,&uStack_70,uRam0000000003d520b8);
  /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder$$get_Task*/ func_0x02f99570((ulong)&uStack_70 | 8,0);
  return;
}



// ============================================================
// RVA: 0x14ebf64 | Atlas.Save.SaveManager.SerializeSaveData
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0293b8ac) */

undefined8 Atlas_Save_SaveManager__SerializeSaveData(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 auVar15 [16];
  undefined7 uStack_d8;
  char cStack_d1;
  undefined8 uStack_d0;
  undefined7 uStack_c8;
  char cStack_c1;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  if ((bRam0000000003eb4c53 & 1) == 0) {
    func_0x00f78a20(0x3d20108);
    bRam0000000003eb4c53 = 1;
  }
  /*Atlas.Save.SaveManager.SaveBuffer$$ResetMemoryStream*/ func_0x0156802c(param_2,0);
  lVar5 = func_0x00f78aec(/*System.Runtime.Serialization.Formatters.Binary.BinaryFormatter_TypeInfo*/ lRam0000000003d20108);
  /*System.Runtime.Serialization.Formatters.Binary.BinaryFormatter$$.ctor*/ func_0x0293b1a8(lVar5,0);
  if (lVar5 != 0) {
    lVar14 = *(long *)(param_2 + 8);
    if ((bRam0000000003eb8f64 & 1) == 0) {
      func_0x00f78a20(0x3d229b0);
      func_0x00f78a20(0x3d23a08);
      func_0x00f78a20(0x3d265a8);
      bRam0000000003eb8f64 = 1;
    }
    uVar8 = param_1;
    if (lVar14 != 0) {
      lVar6 = func_0x00f78aec(/*System.Runtime.Serialization.Formatters.Binary.InternalFE_TypeInfo*/ uRam0000000003d229b0);
      /*System.Runtime.Serialization.Formatters.Binary.InternalFE$$.ctor*/ func_0x02aec464(lVar6,0);
      unaff_x25 = 0;
      if (lVar6 != 0) {
        *(undefined4 *)(lVar6 + 0x1c) = 2;
        *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(lVar5 + 0x30);
        unaff_x26 = *(undefined8 *)(lVar5 + 0x10);
        uVar9 = *(undefined8 *)(lVar5 + 0x18);
        uVar8 = *(undefined8 *)(lVar5 + 0x20);
        uVar10 = *(undefined8 *)(lVar5 + 0x28);
        lVar7 = func_0x00f78aec(/*System.Runtime.Serialization.Formatters.Binary.ObjectWriter_TypeInfo*/ uRam0000000003d23a08);
        /*System.Runtime.Serialization.Formatters.Binary.ObjectWriter$$.ctor*/ func_0x02961f38(lVar7,unaff_x26,uVar9,uVar8,lVar6,uVar10,0);
        uVar1 = *(undefined4 *)(lVar5 + 0x30);
        unaff_x25 = func_0x00f78aec(/*System.Runtime.Serialization.Formatters.Binary.__BinaryWriter_TypeInfo*/ uRam0000000003d265a8);
        /*System.Runtime.Serialization.Formatters.Binary.__BinaryWriter$$.ctor*/ func_0x02a50594(unaff_x25,lVar14,lVar7,uVar1,0);
        uVar8 = 0;
        if (lVar7 != 0) {
          uVar8 = /*System.Runtime.Serialization.Formatters.Binary.ObjectWriter$$Serialize*/ func_0x02962034(lVar7,param_1,0,unaff_x25,1,0);
          *(undefined8 *)(lVar5 + 0x40) = *(undefined8 *)(lVar7 + 0x88);
          return uVar8;
        }
      }
      func_0x00f78af4();
    }
    uVar9 = func_0x00f78a24(0x3d1f218);
    uVar9 = func_0x00f78a34(uVar9,1);
    func_0x00055e5c();
    func_0x0003dd20(uVar9,0);
    func_0x0005b9c0(uVar9,0,0);
    uVar10 = func_0x00f78a24(0x3d71048);
    uVar9 = /*System.Environment$$GetResourceString*/ func_0x02ac7ffc(uVar10,uVar9,0);
    func_0x00f78a24(0x3d1fcf0);
    uVar10 = func_0x00f78aec();
    uVar11 = func_0x00f78a24(0x3d7b6d8);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920d68(uVar10,uVar11,uVar9,0);
    uVar9 = func_0x00f78a24(0x3d52a08);
    uVar9 = func_0x00f78ac0(uVar10,uVar9);
    uStack_a0 = 1;
    uStack_98 = 0;
    uStack_c0 = unaff_x26;
    uStack_b8 = unaff_x25;
    uStack_b0 = uVar8;
    lStack_a8 = lVar14;
    if ((bRam0000000003eb8f65 & 1) == 0) {
      func_0x00f78a20(0x3d20108);
      func_0x00f78a20(0x3d30240);
      func_0x00f78a20(0x3d30248);
      func_0x00f78a20(0x3d219d8);
      func_0x00f78a20(0x3d25510);
      bRam0000000003eb8f65 = 1;
    }
    uStack_d0 = 0;
    cStack_d1 = '\0';
    if (((*(ushort *)(/*System.Runtime.Serialization.Formatters.Binary.BinaryFormatter_TypeInfo*/ lRam0000000003d20108 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Runtime.Serialization.Formatters.Binary.BinaryFormatter_TypeInfo*/ lRam0000000003d20108 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar8 = **(undefined8 **)(/*System.Runtime.Serialization.Formatters.Binary.BinaryFormatter_TypeInfo*/ lRam0000000003d20108 + 0xb8);
    cStack_c1 = '\0';
    /*System.Threading.Monitor$$Enter*/ func_0x02afeb1c(uVar8,&cStack_c1,0);
    uStack_d0 = 0;
    if (((*(ushort *)(/*System.Runtime.Serialization.Formatters.Binary.BinaryFormatter_TypeInfo*/ lRam0000000003d20108 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Runtime.Serialization.Formatters.Binary.BinaryFormatter_TypeInfo*/ lRam0000000003d20108 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(long **)(/*System.Runtime.Serialization.Formatters.Binary.BinaryFormatter_TypeInfo*/ lRam0000000003d20108 + 0xb8) != 0) {
      uVar12 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(**(long **)(/*System.Runtime.Serialization.Formatters.Binary.BinaryFormatter_TypeInfo*/ lRam0000000003d20108 + 0xb8),uVar9,&uStack_d0,
                               uRam0000000003d30248);
      if ((uVar12 & 1) == 0) {
        if (((*(ushort *)(/*System.Runtime.Serialization.FormatterServices_TypeInfo*/ lRam0000000003d219d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Runtime.Serialization.FormatterServices_TypeInfo*/ lRam0000000003d219d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar10 = /*System.Runtime.Serialization.FormatterServices$$GetClrAssemblyName*/ func_0x02ad8bf0(uVar9,&cStack_d1,0);
        uVar11 = /*System.Runtime.Serialization.FormatterServices$$GetClrTypeFullName*/ func_0x02ad8d74(uVar9,0);
        cVar2 = cStack_d1;
        uVar13 = func_0x00f78aec(/*System.Runtime.Serialization.Formatters.Binary.TypeInformation_TypeInfo*/ uRam0000000003d25510);
        /*System.Runtime.Serialization.Formatters.Binary.TypeInformation$$.ctor*/ func_0x02a0772c(uVar13,uVar11,uVar10,cVar2 != '\0',0);
        uStack_d0 = uVar13;
        if (((*(ushort *)(/*System.Runtime.Serialization.Formatters.Binary.BinaryFormatter_TypeInfo*/ lRam0000000003d20108 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Runtime.Serialization.Formatters.Binary.BinaryFormatter_TypeInfo*/ lRam0000000003d20108 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (**(long **)(/*System.Runtime.Serialization.Formatters.Binary.BinaryFormatter_TypeInfo*/ lRam0000000003d20108 + 0xb8) == 0) {
          func_0x00f78af4();
          goto code_r0x0293b8c4;
        }
        /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$Add*/ func_0x01ed77c0(**(long **)(/*System.Runtime.Serialization.Formatters.Binary.BinaryFormatter_TypeInfo*/ lRam0000000003d20108 + 0xb8),uVar9,uStack_d0,
                        uRam0000000003d30240);
      }
      uVar9 = uStack_d0;
      if (cStack_c1 != '\0') {
        /*System.Threading.Monitor$$Exit*/ func_0x02aff04c(uVar8,0);
      }
      return uVar9;
    }
    func_0x00f78af4();
code_r0x0293b8c4:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x293b8c8);
    (*pcVar3)();
  }
  auVar15 = func_0x00f78af4();
  lVar14 = auVar15._8_8_;
  lVar5 = auVar15._0_8_;
  if ((bRam0000000003eb4c4e & 1) == 0) {
    func_0x00f78a20(0x3d52308);
    func_0x00f78a20(0x3d52310);
    func_0x00f78a20(0x3d52318);
    func_0x00f78a20(0x3d52320);
    func_0x00f78a20(0x3d52328);
    func_0x00f78a20(0x3d52338);
    func_0x00f78a20(0x3d32f80);
    func_0x00f78a20(0x3d32f88);
    func_0x00f78a20(0x3d32f90);
    func_0x00f78a20(0x3d3d940);
    func_0x00f78a20(0x3d3bfc0);
    func_0x00f78a20(0x3d3d948);
    func_0x00f78a20(0x3d3bfd0);
    func_0x00f78a20(0x3d3bf88);
    func_0x00f78a20(0x3d3d938);
    func_0x00f78a20(0x3d3d910);
    func_0x00f78a20(0x3d3d8e8);
    func_0x00f78a20(0x3d3a498);
    func_0x00f78a20(0x3d3d8b8);
    func_0x00f78a20(0x3d3d880);
    func_0x00f78a20(0x3d3d850);
    func_0x00f78a20(0x3d1e2c8);
    func_0x00f78a20(0x3d1e2e8);
    func_0x00f78a20(0x3d1e2d8);
    func_0x00f78a20(0x3d1e2f0);
    func_0x00f78a20(0x3d1de30);
    func_0x00f78a20(0x3d1e2d0);
    func_0x00f78a20(0x3d1e2e0);
    func_0x00f78a20(0x3d1d930);
    func_0x00f78a20(0x3d3f500);
    func_0x00f78a20(0x3d1e668);
    func_0x00f78a20(0x3d24d50);
    func_0x00f78a20(0x3d24d58);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d63c70);
    func_0x00f78a20(0x3d28ae8);
    func_0x00f78a20(0x3d63c78);
    func_0x00f78a20(0x3d28af0);
    bRam0000000003eb4c4e = 1;
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_b0 = 0;
  lStack_a8 = 0;
  uStack_b8 = (ulong)uStack_b8._4_4_ << 0x20;
  if (lVar14 != 0) {
    if (*(long *)(lVar14 + 0x110) == 0) {
      uVar8 = func_0x00f78aec(/*System.Collections.Generic.List<SaveData.KeyValueInt>_TypeInfo*/ uRam0000000003d1e2e0);
      /*System.Collections.Generic.List<SaveData.KeyValueInt>$$.ctor*/ func_0x0258bc6c(uVar8,uRam0000000003d3d8e8);
      *(undefined8 *)(lVar14 + 0x110) = uVar8;
    }
    if (*(long *)(lVar14 + 0x118) == 0) {
      uVar8 = func_0x00f78aec(/*System.Collections.Generic.List<SaveData.KeyValueString>_TypeInfo*/ uRam0000000003d1e2e8);
      /*System.Collections.Generic.List<SaveData.KeyValueString>$$.ctor*/ func_0x0258e73c(uVar8,uRam0000000003d3d910);
      *(undefined8 *)(lVar14 + 0x118) = uVar8;
    }
    if (*(long *)(lVar14 + 0x38) == 0) {
      uVar8 = func_0x00f78aec(/*System.Collections.Generic.List<SaveData.UnlockedData>_TypeInfo*/ uRam0000000003d1e2f0);
      /*System.Collections.Generic.List<SaveData.UnlockedData>$$.ctor*/ func_0x0259120c(uVar8,uRam0000000003d3d938);
      *(undefined8 *)(lVar14 + 0x38) = uVar8;
    }
    if (*(long *)(lVar14 + 0x40) == 0) {
      uVar8 = func_0x00f78aec(/*System.Collections.Generic.List<string>_TypeInfo*/ uRam0000000003d1de30);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar8,uRam0000000003d3bf88);
      *(undefined8 *)(lVar14 + 0x40) = uVar8;
    }
    if (*(long *)(lVar14 + 0x48) == 0) {
      uVar8 = func_0x00f78aec(/*System.Collections.Generic.List<string>_TypeInfo*/ uRam0000000003d1de30);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar8,uRam0000000003d3bf88);
      *(undefined8 *)(lVar14 + 0x48) = uVar8;
    }
    if (*(long *)(lVar14 + 0x50) == 0) {
      uVar8 = func_0x00f78aec(/*System.Collections.Generic.List<SaveData.CharacterProgression>_TypeInfo*/ uRam0000000003d1e2c8);
      /*System.Collections.Generic.List<SaveData.CharacterProgression>$$.ctor*/ func_0x0258378c(uVar8,uRam0000000003d3d850);
      *(undefined8 *)(lVar14 + 0x50) = uVar8;
    }
    if (*(long *)(lVar14 + 0x58) == 0) {
      uVar8 = func_0x00f78aec(/*System.Collections.Generic.List<SaveData.EventProgression>_TypeInfo*/ uRam0000000003d1e2d8);
      /*System.Collections.Generic.List<SaveData.EventProgression>$$.ctor*/ func_0x0258919c(uVar8,uRam0000000003d3d8b8);
      *(undefined8 *)(lVar14 + 0x58) = uVar8;
    }
    if (*(long *)(lVar14 + 0x60) == 0) {
      uVar8 = func_0x00f78aec(/*System.Collections.Generic.List<DefinitionID>_TypeInfo*/ uRam0000000003d1d930);
      /*System.Collections.Generic.List<DefinitionID>$$.ctor*/ func_0x023c5148(uVar8,uRam0000000003d3a498);
      *(undefined8 *)(lVar14 + 0x60) = uVar8;
    }
    if (*(long *)(lVar14 + 0x68) == 0) {
      uVar8 = func_0x00f78aec(/*System.Collections.Generic.List<DefinitionID>_TypeInfo*/ uRam0000000003d1d930);
      /*System.Collections.Generic.List<DefinitionID>$$.ctor*/ func_0x023c5148(uVar8,uRam0000000003d3a498);
      *(undefined8 *)(lVar14 + 0x68) = uVar8;
    }
    if (*(long *)(lVar14 + 0x70) == 0) {
      uVar8 = func_0x00f78aec(/*System.Collections.Generic.List<DefinitionID>_TypeInfo*/ uRam0000000003d1d930);
      /*System.Collections.Generic.List<DefinitionID>$$.ctor*/ func_0x023c5148(uVar8,uRam0000000003d3a498);
      *(undefined8 *)(lVar14 + 0x70) = uVar8;
    }
    if (*(long *)(lVar14 + 0x78) == 0) {
      uVar8 = func_0x00f78aec(/*System.Collections.Generic.List<DefinitionID>_TypeInfo*/ uRam0000000003d1d930);
      /*System.Collections.Generic.List<DefinitionID>$$.ctor*/ func_0x023c5148(uVar8,uRam0000000003d3a498);
      *(undefined8 *)(lVar14 + 0x78) = uVar8;
    }
    uStack_98 = *(undefined8 *)(lVar14 + 0x80);
    iVar4 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_98,0);
    if (iVar4 == 0) {
code_r0x014ec448:
      *(undefined8 *)(lVar14 + 0x80) = *(undefined8 *)(lVar5 + 0xb0);
    }
    else {
      if (*(long *)(lVar5 + 0x78) == 0) goto code_r0x014ec930;
      uVar12 = /*Atlas.Definitions.AtlasDefinitions$$IsContentValid<WheelsDefinition>*/ func_0x0182e030(*(long *)(lVar5 + 0x78),*(undefined8 *)(lVar14 + 0x80),
                               uRam0000000003d52318);
      if ((uVar12 & 1) == 0) goto code_r0x014ec448;
    }
    uStack_98 = *(undefined8 *)(lVar14 + 0x88);
    iVar4 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_98,0);
    if (iVar4 == 0) {
code_r0x014ec488:
      *(undefined8 *)(lVar14 + 0x88) = *(undefined8 *)(lVar5 + 0xb8);
    }
    else {
      if (*(long *)(lVar5 + 0x78) == 0) goto code_r0x014ec930;
      uVar12 = /*Atlas.Definitions.AtlasDefinitions$$IsContentValid<WheelsDefinition>*/ func_0x0182e030(*(long *)(lVar5 + 0x78),*(undefined8 *)(lVar14 + 0x88),
                               uRam0000000003d52328);
      if ((uVar12 & 1) == 0) goto code_r0x014ec488;
    }
    uStack_98 = *(undefined8 *)(lVar14 + 0x90);
    iVar4 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_98,0);
    if (iVar4 == 0) {
code_r0x014ec4c8:
      *(undefined8 *)(lVar14 + 0x90) = *(undefined8 *)(lVar5 + 0xc0);
    }
    else {
      if (*(long *)(lVar5 + 0x78) == 0) goto code_r0x014ec930;
      uVar12 = /*Atlas.Definitions.AtlasDefinitions$$IsContentValid<WheelsDefinition>*/ func_0x0182e030(*(long *)(lVar5 + 0x78),*(undefined8 *)(lVar14 + 0x90),
                               uRam0000000003d52320);
      if ((uVar12 & 1) == 0) goto code_r0x014ec4c8;
    }
    uStack_98 = *(undefined8 *)(lVar14 + 0x98);
    iVar4 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_98,0);
    if (iVar4 == 0) {
code_r0x014ec508:
      *(undefined8 *)(lVar14 + 0x98) = *(undefined8 *)(lVar5 + 0xd0);
    }
    else {
      if (*(long *)(lVar5 + 0x78) == 0) goto code_r0x014ec930;
      uVar12 = /*Atlas.Definitions.AtlasDefinitions$$IsContentValid<WheelsDefinition>*/ func_0x0182e030(*(long *)(lVar5 + 0x78),*(undefined8 *)(lVar14 + 0x98),
                               uRam0000000003d52338);
      if ((uVar12 & 1) == 0) goto code_r0x014ec508;
    }
    uStack_98 = *(undefined8 *)(lVar14 + 0xa0);
    iVar4 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_98,0);
    if (iVar4 == 0) {
code_r0x014ec548:
      *(undefined8 *)(lVar14 + 0xa0) = *(undefined8 *)(lVar5 + 200);
    }
    else {
      if (*(long *)(lVar5 + 0x78) == 0) goto code_r0x014ec930;
      uVar12 = /*Atlas.Definitions.AtlasDefinitions$$IsContentValid<WheelsDefinition>*/ func_0x0182e030(*(long *)(lVar5 + 0x78),*(undefined8 *)(lVar14 + 0xa0),
                               uRam0000000003d52308);
      if ((uVar12 & 1) == 0) goto code_r0x014ec548;
    }
    uStack_98 = *(undefined8 *)(lVar14 + 0xa8);
    iVar4 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_98,0);
    if (iVar4 == 0) {
code_r0x014ec588:
      *(undefined8 *)(lVar14 + 0xa8) = *(undefined8 *)(lVar5 + 0xd8);
    }
    else {
      if (*(long *)(lVar5 + 0x78) == 0) goto code_r0x014ec930;
      uVar12 = /*Atlas.Definitions.AtlasDefinitions$$IsContentValid<WheelsDefinition>*/ func_0x0182e030(*(long *)(lVar5 + 0x78),*(undefined8 *)(lVar14 + 0xa8),
                               uRam0000000003d52310);
      if ((uVar12 & 1) == 0) goto code_r0x014ec588;
    }
    if (*(long *)(lVar14 + 0xe0) == 0) {
      *(undefined8 *)(lVar14 + 0xe0) = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    if (*(long *)(lVar14 + 0xf0) == 0) {
      uVar8 = func_0x00f78aec(/*System.Collections.Generic.List<SaveData.DailyChallenge>_TypeInfo*/ uRam0000000003d1e2d0);
      /*System.Collections.Generic.List<SaveData.DailyChallenge>$$.ctor*/ func_0x02586490(uVar8,uRam0000000003d3d880);
      *(undefined8 *)(lVar14 + 0xf0) = uVar8;
    }
    if (*(long *)(lVar14 + 0xf8) == 0) {
      uVar8 = func_0x00f78aec(/*System.Collections.Generic.List<string>_TypeInfo*/ uRam0000000003d1de30);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar8,uRam0000000003d3bf88);
      *(undefined8 *)(lVar14 + 0xf8) = uVar8;
    }
    if (*(long *)(lVar14 + 0x30) == 0) {
      lVar6 = func_0x00f78aec(/*Atlas.Stats.StatsData_TypeInfo*/ uRam0000000003d24d50);
      /*Atlas.Stats.StatsData$$.ctor*/ func_0x01504cec(lVar6,0);
      *(long *)(lVar14 + 0x30) = lVar6;
      if (((*(ushort *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar6 == 0) goto code_r0x014ec930;
      /*Atlas.Stats.StatsData$$Init*/ func_0x015047c0(lVar6,*(undefined4 *)(*(long *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0xb8) + 8),0);
    }
    if (*(int *)(lVar14 + 0x10) < 2) {
      *(undefined4 *)(lVar14 + 200) = 0x3f800000;
      uVar8 = NEON_fmov(0x3f800000,4);
      *(undefined8 *)(lVar14 + 0xc0) = uVar8;
code_r0x014ec6c4:
      if (*(long *)(lVar14 + 0x40) == 0) goto code_r0x014ec930;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_d8,*(long *)(lVar14 + 0x40),uRam0000000003d3bfd0);
      uStack_b0 = CONCAT17(cStack_d1,uStack_d8);
      lStack_a8 = uStack_d0;
      uStack_a0 = CONCAT17(cStack_c1,uStack_c8);
      while (uVar12 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_b0,uRam0000000003d32f88), (uVar12 & 1) != 0) {
        lVar6 = func_0x00f78aec(/*Atlas.Save.SaveManager.<>c__DisplayClass77_0_TypeInfo*/ uRam0000000003d28ae8);
        /*Atlas.Save.SaveManager.<>c__DisplayClass77_0$$.ctor*/ func_0x015670f0(lVar6,0);
        if (lVar6 == 0) {
          func_0x00f78af4();
          goto code_r0x014ec940;
        }
        *(undefined8 *)(lVar6 + 0x10) = uStack_a0;
        lVar7 = *(long *)(lVar14 + 0x38);
        uVar8 = func_0x00f78aec(/*System.Predicate<SaveData.UnlockedData>_TypeInfo*/ uRam0000000003d1e668);
        /*System.Predicate<SaveData.UnlockedData>$$.ctor*/ func_0x02725e48(uVar8,lVar6,uRam0000000003d63c70,uRam0000000003d3f500);
        if (lVar7 == 0) {
          func_0x00f78af4();
          goto code_r0x014ec940;
        }
        iVar4 = /*System.Collections.Generic.List<SaveData.UnlockedData>$$FindIndex*/ func_0x0259273c(lVar7,uVar8,uRam0000000003d3d948);
        if (iVar4 < 0) {
          if (*(long *)(lVar14 + 0x48) == 0) goto code_r0x014ec934;
          uVar8 = *(undefined8 *)(lVar6 + 0x10);
          iVar4 = /*System.Collections.Generic.List<XmlQualifiedName>$$Contains*/ func_0x02427438(*(long *)(lVar14 + 0x48),uVar8,uRam0000000003d3bfc0);
          if (*(long *)(lVar14 + 0x38) == 0) {
            func_0x00f78af4();
            goto code_r0x014ec940;
          }
          uVar9 = 3;
          if (iVar4 == 0) {
            uVar9 = 0;
          }
          /*System.Collections.Generic.List<SaveData.UnlockedData>$$Add*/ func_0x02591ed4(*(long *)(lVar14 + 0x38),uVar8,uVar9,uRam0000000003d3d940);
        }
      }
      uStack_c0 = CONCAT44(uStack_c0._4_4_,0x32b);
      uStack_b8._0_4_ = 1;
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_b0,uRam0000000003d32f80);
      uStack_b8 = (ulong)uStack_b8._4_4_ << 0x20;
    }
    else if (*(int *)(lVar14 + 0x10) == 2) goto code_r0x014ec6c4;
    if (*(long *)(lVar5 + 0xa8) != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_d8,*(long *)(lVar5 + 0xa8),uRam0000000003d3bfd0);
      uStack_b0 = CONCAT17(cStack_d1,uStack_d8);
      lStack_a8 = uStack_d0;
      uStack_a0 = CONCAT17(cStack_c1,uStack_c8);
      while( true ) {
        uVar12 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_b0,uRam0000000003d32f88);
        if ((uVar12 & 1) == 0) {
          uStack_c0 = CONCAT44(uStack_c0._4_4_,0x3a5);
          uStack_b8 = CONCAT44(uStack_b8._4_4_,(int)uStack_b8 + 1);
          uVar8 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_b0,uRam0000000003d32f80);
          *(undefined4 *)(lVar14 + 0x10) = 3;
          return uVar8;
        }
        lVar5 = func_0x00f78aec(/*Atlas.Save.SaveManager.<>c__DisplayClass77_1_TypeInfo*/ uRam0000000003d28af0);
        /*Atlas.Save.SaveManager.<>c__DisplayClass77_1$$.ctor*/ func_0x0156710c(lVar5,0);
        if (lVar5 == 0) break;
        *(undefined8 *)(lVar5 + 0x10) = uStack_a0;
        lVar6 = *(long *)(lVar14 + 0x38);
        uVar8 = func_0x00f78aec(/*System.Predicate<SaveData.UnlockedData>_TypeInfo*/ uRam0000000003d1e668);
        /*System.Predicate<SaveData.UnlockedData>$$.ctor*/ func_0x02725e48(uVar8,lVar5,uRam0000000003d63c78,uRam0000000003d3f500);
        if (lVar6 == 0) {
          func_0x00f78af4();
          goto code_r0x014ec940;
        }
        iVar4 = /*System.Collections.Generic.List<SaveData.UnlockedData>$$FindIndex*/ func_0x0259273c(lVar6,uVar8,uRam0000000003d3d948);
        if (iVar4 < 0) {
          if (*(long *)(lVar14 + 0x38) == 0) {
            func_0x00f78af4();
            goto code_r0x014ec940;
          }
          /*System.Collections.Generic.List<SaveData.UnlockedData>$$Add*/ func_0x02591ed4(*(long *)(lVar14 + 0x38),*(undefined8 *)(lVar5 + 0x10),0,
                          uRam0000000003d3d940);
        }
      }
      func_0x00f78af4();
      goto code_r0x014ec940;
    }
  }
code_r0x014ec930:
  func_0x00f78af4();
code_r0x014ec934:
  func_0x00f78af4();
code_r0x014ec940:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x14ec944);
  (*pcVar3)();
}



// ============================================================
// RVA: 0x14ebfec | Atlas.Save.SaveManager.UpdateSaveDataToLatestVersion
// ============================================================

void Atlas_Save_SaveManager__UpdateSaveDataToLatestVersion(long param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  int iStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000003eb4c4e & 1) == 0) {
    func_0x00f78a20(0x3d52308);
    func_0x00f78a20(0x3d52310);
    func_0x00f78a20(0x3d52318);
    func_0x00f78a20(0x3d52320);
    func_0x00f78a20(0x3d52328);
    func_0x00f78a20(0x3d52338);
    func_0x00f78a20(0x3d32f80);
    func_0x00f78a20(0x3d32f88);
    func_0x00f78a20(0x3d32f90);
    func_0x00f78a20(0x3d3d940);
    func_0x00f78a20(0x3d3bfc0);
    func_0x00f78a20(0x3d3d948);
    func_0x00f78a20(0x3d3bfd0);
    func_0x00f78a20(0x3d3bf88);
    func_0x00f78a20(0x3d3d938);
    func_0x00f78a20(0x3d3d910);
    func_0x00f78a20(0x3d3d8e8);
    func_0x00f78a20(0x3d3a498);
    func_0x00f78a20(0x3d3d8b8);
    func_0x00f78a20(0x3d3d880);
    func_0x00f78a20(0x3d3d850);
    func_0x00f78a20(0x3d1e2c8);
    func_0x00f78a20(0x3d1e2e8);
    func_0x00f78a20(0x3d1e2d8);
    func_0x00f78a20(0x3d1e2f0);
    func_0x00f78a20(0x3d1de30);
    func_0x00f78a20(0x3d1e2d0);
    func_0x00f78a20(0x3d1e2e0);
    func_0x00f78a20(0x3d1d930);
    func_0x00f78a20(0x3d3f500);
    func_0x00f78a20(0x3d1e668);
    func_0x00f78a20(0x3d24d50);
    func_0x00f78a20(0x3d24d58);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d63c70);
    func_0x00f78a20(0x3d28ae8);
    func_0x00f78a20(0x3d63c78);
    func_0x00f78a20(0x3d28af0);
    bRam0000000003eb4c4e = 1;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  iStack_88 = 0;
  if (param_2 != 0) {
    if (*(long *)(param_2 + 0x110) == 0) {
      uVar4 = func_0x00f78aec(/*System.Collections.Generic.List<SaveData.KeyValueInt>_TypeInfo*/ uRam0000000003d1e2e0);
      /*System.Collections.Generic.List<SaveData.KeyValueInt>$$.ctor*/ func_0x0258bc6c(uVar4,uRam0000000003d3d8e8);
      *(undefined8 *)(param_2 + 0x110) = uVar4;
    }
    if (*(long *)(param_2 + 0x118) == 0) {
      uVar4 = func_0x00f78aec(/*System.Collections.Generic.List<SaveData.KeyValueString>_TypeInfo*/ uRam0000000003d1e2e8);
      /*System.Collections.Generic.List<SaveData.KeyValueString>$$.ctor*/ func_0x0258e73c(uVar4,uRam0000000003d3d910);
      *(undefined8 *)(param_2 + 0x118) = uVar4;
    }
    if (*(long *)(param_2 + 0x38) == 0) {
      uVar4 = func_0x00f78aec(/*System.Collections.Generic.List<SaveData.UnlockedData>_TypeInfo*/ uRam0000000003d1e2f0);
      /*System.Collections.Generic.List<SaveData.UnlockedData>$$.ctor*/ func_0x0259120c(uVar4,uRam0000000003d3d938);
      *(undefined8 *)(param_2 + 0x38) = uVar4;
    }
    if (*(long *)(param_2 + 0x40) == 0) {
      uVar4 = func_0x00f78aec(/*System.Collections.Generic.List<string>_TypeInfo*/ uRam0000000003d1de30);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar4,uRam0000000003d3bf88);
      *(undefined8 *)(param_2 + 0x40) = uVar4;
    }
    if (*(long *)(param_2 + 0x48) == 0) {
      uVar4 = func_0x00f78aec(/*System.Collections.Generic.List<string>_TypeInfo*/ uRam0000000003d1de30);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar4,uRam0000000003d3bf88);
      *(undefined8 *)(param_2 + 0x48) = uVar4;
    }
    if (*(long *)(param_2 + 0x50) == 0) {
      uVar4 = func_0x00f78aec(/*System.Collections.Generic.List<SaveData.CharacterProgression>_TypeInfo*/ uRam0000000003d1e2c8);
      /*System.Collections.Generic.List<SaveData.CharacterProgression>$$.ctor*/ func_0x0258378c(uVar4,uRam0000000003d3d850);
      *(undefined8 *)(param_2 + 0x50) = uVar4;
    }
    if (*(long *)(param_2 + 0x58) == 0) {
      uVar4 = func_0x00f78aec(/*System.Collections.Generic.List<SaveData.EventProgression>_TypeInfo*/ uRam0000000003d1e2d8);
      /*System.Collections.Generic.List<SaveData.EventProgression>$$.ctor*/ func_0x0258919c(uVar4,uRam0000000003d3d8b8);
      *(undefined8 *)(param_2 + 0x58) = uVar4;
    }
    if (*(long *)(param_2 + 0x60) == 0) {
      uVar4 = func_0x00f78aec(/*System.Collections.Generic.List<DefinitionID>_TypeInfo*/ uRam0000000003d1d930);
      /*System.Collections.Generic.List<DefinitionID>$$.ctor*/ func_0x023c5148(uVar4,uRam0000000003d3a498);
      *(undefined8 *)(param_2 + 0x60) = uVar4;
    }
    if (*(long *)(param_2 + 0x68) == 0) {
      uVar4 = func_0x00f78aec(/*System.Collections.Generic.List<DefinitionID>_TypeInfo*/ uRam0000000003d1d930);
      /*System.Collections.Generic.List<DefinitionID>$$.ctor*/ func_0x023c5148(uVar4,uRam0000000003d3a498);
      *(undefined8 *)(param_2 + 0x68) = uVar4;
    }
    if (*(long *)(param_2 + 0x70) == 0) {
      uVar4 = func_0x00f78aec(/*System.Collections.Generic.List<DefinitionID>_TypeInfo*/ uRam0000000003d1d930);
      /*System.Collections.Generic.List<DefinitionID>$$.ctor*/ func_0x023c5148(uVar4,uRam0000000003d3a498);
      *(undefined8 *)(param_2 + 0x70) = uVar4;
    }
    if (*(long *)(param_2 + 0x78) == 0) {
      uVar4 = func_0x00f78aec(/*System.Collections.Generic.List<DefinitionID>_TypeInfo*/ uRam0000000003d1d930);
      /*System.Collections.Generic.List<DefinitionID>$$.ctor*/ func_0x023c5148(uVar4,uRam0000000003d3a498);
      *(undefined8 *)(param_2 + 0x78) = uVar4;
    }
    uStack_68 = *(undefined8 *)(param_2 + 0x80);
    iVar3 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_68,0);
    if (iVar3 == 0) {
LAB_014ec448:
      *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(param_1 + 0xb0);
    }
    else {
      if (*(long *)(param_1 + 0x78) == 0) goto LAB_014ec930;
      uVar5 = /*Atlas.Definitions.AtlasDefinitions$$IsContentValid<WheelsDefinition>*/ func_0x0182e030(*(long *)(param_1 + 0x78),*(undefined8 *)(param_2 + 0x80),
                              uRam0000000003d52318);
      if ((uVar5 & 1) == 0) goto LAB_014ec448;
    }
    uStack_68 = *(undefined8 *)(param_2 + 0x88);
    iVar3 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_68,0);
    if (iVar3 == 0) {
LAB_014ec488:
      *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(param_1 + 0xb8);
    }
    else {
      if (*(long *)(param_1 + 0x78) == 0) goto LAB_014ec930;
      uVar5 = /*Atlas.Definitions.AtlasDefinitions$$IsContentValid<WheelsDefinition>*/ func_0x0182e030(*(long *)(param_1 + 0x78),*(undefined8 *)(param_2 + 0x88),
                              uRam0000000003d52328);
      if ((uVar5 & 1) == 0) goto LAB_014ec488;
    }
    uStack_68 = *(undefined8 *)(param_2 + 0x90);
    iVar3 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_68,0);
    if (iVar3 == 0) {
LAB_014ec4c8:
      *(undefined8 *)(param_2 + 0x90) = *(undefined8 *)(param_1 + 0xc0);
    }
    else {
      if (*(long *)(param_1 + 0x78) == 0) goto LAB_014ec930;
      uVar5 = /*Atlas.Definitions.AtlasDefinitions$$IsContentValid<WheelsDefinition>*/ func_0x0182e030(*(long *)(param_1 + 0x78),*(undefined8 *)(param_2 + 0x90),
                              uRam0000000003d52320);
      if ((uVar5 & 1) == 0) goto LAB_014ec4c8;
    }
    uStack_68 = *(undefined8 *)(param_2 + 0x98);
    iVar3 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_68,0);
    if (iVar3 == 0) {
LAB_014ec508:
      *(undefined8 *)(param_2 + 0x98) = *(undefined8 *)(param_1 + 0xd0);
    }
    else {
      if (*(long *)(param_1 + 0x78) == 0) goto LAB_014ec930;
      uVar5 = /*Atlas.Definitions.AtlasDefinitions$$IsContentValid<WheelsDefinition>*/ func_0x0182e030(*(long *)(param_1 + 0x78),*(undefined8 *)(param_2 + 0x98),
                              uRam0000000003d52338);
      if ((uVar5 & 1) == 0) goto LAB_014ec508;
    }
    uStack_68 = *(undefined8 *)(param_2 + 0xa0);
    iVar3 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_68,0);
    if (iVar3 == 0) {
LAB_014ec548:
      *(undefined8 *)(param_2 + 0xa0) = *(undefined8 *)(param_1 + 200);
    }
    else {
      if (*(long *)(param_1 + 0x78) == 0) goto LAB_014ec930;
      uVar5 = /*Atlas.Definitions.AtlasDefinitions$$IsContentValid<WheelsDefinition>*/ func_0x0182e030(*(long *)(param_1 + 0x78),*(undefined8 *)(param_2 + 0xa0),
                              uRam0000000003d52308);
      if ((uVar5 & 1) == 0) goto LAB_014ec548;
    }
    uStack_68 = *(undefined8 *)(param_2 + 0xa8);
    iVar3 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_68,0);
    if (iVar3 == 0) {
LAB_014ec588:
      *(undefined8 *)(param_2 + 0xa8) = *(undefined8 *)(param_1 + 0xd8);
    }
    else {
      if (*(long *)(param_1 + 0x78) == 0) goto LAB_014ec930;
      uVar5 = /*Atlas.Definitions.AtlasDefinitions$$IsContentValid<WheelsDefinition>*/ func_0x0182e030(*(long *)(param_1 + 0x78),*(undefined8 *)(param_2 + 0xa8),
                              uRam0000000003d52310);
      if ((uVar5 & 1) == 0) goto LAB_014ec588;
    }
    if (*(long *)(param_2 + 0xe0) == 0) {
      *(undefined8 *)(param_2 + 0xe0) = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    if (*(long *)(param_2 + 0xf0) == 0) {
      uVar4 = func_0x00f78aec(/*System.Collections.Generic.List<SaveData.DailyChallenge>_TypeInfo*/ uRam0000000003d1e2d0);
      /*System.Collections.Generic.List<SaveData.DailyChallenge>$$.ctor*/ func_0x02586490(uVar4,uRam0000000003d3d880);
      *(undefined8 *)(param_2 + 0xf0) = uVar4;
    }
    if (*(long *)(param_2 + 0xf8) == 0) {
      uVar4 = func_0x00f78aec(/*System.Collections.Generic.List<string>_TypeInfo*/ uRam0000000003d1de30);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar4,uRam0000000003d3bf88);
      *(undefined8 *)(param_2 + 0xf8) = uVar4;
    }
    if (*(long *)(param_2 + 0x30) == 0) {
      lVar6 = func_0x00f78aec(/*Atlas.Stats.StatsData_TypeInfo*/ uRam0000000003d24d50);
      /*Atlas.Stats.StatsData$$.ctor*/ func_0x01504cec(lVar6,0);
      *(long *)(param_2 + 0x30) = lVar6;
      if (((*(ushort *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar6 == 0) goto LAB_014ec930;
      /*Atlas.Stats.StatsData$$Init*/ func_0x015047c0(lVar6,*(undefined4 *)(*(long *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0xb8) + 8),0);
    }
    if (*(int *)(param_2 + 0x10) < 2) {
      *(undefined4 *)(param_2 + 200) = 0x3f800000;
      uVar4 = NEON_fmov(0x3f800000,4);
      *(undefined8 *)(param_2 + 0xc0) = uVar4;
LAB_014ec6c4:
      if (*(long *)(param_2 + 0x40) == 0) goto LAB_014ec930;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_a8,*(long *)(param_2 + 0x40),uRam0000000003d3bfd0);
      uStack_78 = uStack_a0;
      uStack_80 = uStack_a8;
      uStack_70 = uStack_98;
      while (uVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_80,uRam0000000003d32f88), (uVar5 & 1) != 0) {
        lVar6 = func_0x00f78aec(/*Atlas.Save.SaveManager.<>c__DisplayClass77_0_TypeInfo*/ uRam0000000003d28ae8);
        /*Atlas.Save.SaveManager.<>c__DisplayClass77_0$$.ctor*/ func_0x015670f0(lVar6,0);
        if (lVar6 == 0) {
          func_0x00f78af4();
          goto code_r0x014ec940;
        }
        *(undefined8 *)(lVar6 + 0x10) = uStack_70;
        lVar7 = *(long *)(param_2 + 0x38);
        uVar4 = func_0x00f78aec(/*System.Predicate<SaveData.UnlockedData>_TypeInfo*/ uRam0000000003d1e668);
        /*System.Predicate<SaveData.UnlockedData>$$.ctor*/ func_0x02725e48(uVar4,lVar6,uRam0000000003d63c70,uRam0000000003d3f500);
        if (lVar7 == 0) {
          func_0x00f78af4();
          goto code_r0x014ec940;
        }
        iVar3 = /*System.Collections.Generic.List<SaveData.UnlockedData>$$FindIndex*/ func_0x0259273c(lVar7,uVar4,uRam0000000003d3d948);
        if (iVar3 < 0) {
          if (*(long *)(param_2 + 0x48) == 0) goto code_r0x014ec934;
          uVar4 = *(undefined8 *)(lVar6 + 0x10);
          iVar3 = /*System.Collections.Generic.List<XmlQualifiedName>$$Contains*/ func_0x02427438(*(long *)(param_2 + 0x48),uVar4,uRam0000000003d3bfc0);
          if (*(long *)(param_2 + 0x38) == 0) {
            func_0x00f78af4();
            goto code_r0x014ec940;
          }
          uVar1 = 3;
          if (iVar3 == 0) {
            uVar1 = 0;
          }
          /*System.Collections.Generic.List<SaveData.UnlockedData>$$Add*/ func_0x02591ed4(*(long *)(param_2 + 0x38),uVar4,uVar1,uRam0000000003d3d940);
        }
      }
      uStack_90 = 0x32b;
      iStack_88 = 1;
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_80,uRam0000000003d32f80);
      iStack_88 = 0;
    }
    else if (*(int *)(param_2 + 0x10) == 2) goto LAB_014ec6c4;
    if (*(long *)(param_1 + 0xa8) != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_a8,*(long *)(param_1 + 0xa8),uRam0000000003d3bfd0);
      uStack_78 = uStack_a0;
      uStack_80 = uStack_a8;
      uStack_70 = uStack_98;
      while( true ) {
        uVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_80,uRam0000000003d32f88);
        if ((uVar5 & 1) == 0) {
          iStack_88 = iStack_88 + 1;
          uStack_90 = 0x3a5;
          /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_80,uRam0000000003d32f80);
          *(undefined4 *)(param_2 + 0x10) = 3;
          return;
        }
        lVar6 = func_0x00f78aec(/*Atlas.Save.SaveManager.<>c__DisplayClass77_1_TypeInfo*/ uRam0000000003d28af0);
        /*Atlas.Save.SaveManager.<>c__DisplayClass77_1$$.ctor*/ func_0x0156710c(lVar6,0);
        if (lVar6 == 0) break;
        *(undefined8 *)(lVar6 + 0x10) = uStack_70;
        lVar7 = *(long *)(param_2 + 0x38);
        uVar4 = func_0x00f78aec(/*System.Predicate<SaveData.UnlockedData>_TypeInfo*/ uRam0000000003d1e668);
        /*System.Predicate<SaveData.UnlockedData>$$.ctor*/ func_0x02725e48(uVar4,lVar6,uRam0000000003d63c78,uRam0000000003d3f500);
        if (lVar7 == 0) {
          func_0x00f78af4();
          goto code_r0x014ec940;
        }
        iVar3 = /*System.Collections.Generic.List<SaveData.UnlockedData>$$FindIndex*/ func_0x0259273c(lVar7,uVar4,uRam0000000003d3d948);
        if (iVar3 < 0) {
          if (*(long *)(param_2 + 0x38) == 0) {
            func_0x00f78af4();
            goto code_r0x014ec940;
          }
          /*System.Collections.Generic.List<SaveData.UnlockedData>$$Add*/ func_0x02591ed4(*(long *)(param_2 + 0x38),*(undefined8 *)(lVar6 + 0x10),0,
                          uRam0000000003d3d940);
        }
      }
      func_0x00f78af4();
      goto code_r0x014ec940;
    }
  }
LAB_014ec930:
  func_0x00f78af4();
code_r0x014ec934:
  func_0x00f78af4();
code_r0x014ec940:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x14ec944);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x14eca00 | Atlas.Save.SaveManager.GetStringData
// ============================================================

/* WARNING: Possible PIC construction at 0x014ecb00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014ecd08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014ecb04) */
/* WARNING: Removing unreachable block (ram,0x014ecb08) */
/* WARNING: Removing unreachable block (ram,0x014ecb0c) */
/* WARNING: Removing unreachable block (ram,0x014ecb50) */
/* WARNING: Removing unreachable block (ram,0x014ecb88) */
/* WARNING: Removing unreachable block (ram,0x014ecb9c) */
/* WARNING: Removing unreachable block (ram,0x014ecbb4) */
/* WARNING: Removing unreachable block (ram,0x014ecbbc) */
/* WARNING: Removing unreachable block (ram,0x014ecbc0) */
/* WARNING: Removing unreachable block (ram,0x014ecbe0) */
/* WARNING: Removing unreachable block (ram,0x014ecc14) */
/* WARNING: Removing unreachable block (ram,0x014ecc34) */
/* WARNING: Removing unreachable block (ram,0x014ecc40) */
/* WARNING: Removing unreachable block (ram,0x014ecc48) */
/* WARNING: Removing unreachable block (ram,0x014ecc4c) */
/* WARNING: Removing unreachable block (ram,0x014ecc5c) */
/* WARNING: Removing unreachable block (ram,0x014ecc60) */
/* WARNING: Removing unreachable block (ram,0x014ecca4) */
/* WARNING: Removing unreachable block (ram,0x014eccd4) */
/* WARNING: Removing unreachable block (ram,0x014ecd00) */
/* WARNING: Removing unreachable block (ram,0x014ecc68) */
/* WARNING: Removing unreachable block (ram,0x014ecc78) */
/* WARNING: Removing unreachable block (ram,0x014ecc80) */
/* WARNING: Removing unreachable block (ram,0x014ecc8c) */
/* WARNING: Removing unreachable block (ram,0x014ecb14) */
/* WARNING: Removing unreachable block (ram,0x014ecb24) */
/* WARNING: Removing unreachable block (ram,0x014ecb2c) */
/* WARNING: Removing unreachable block (ram,0x014ecb38) */
/* WARNING: Removing unreachable block (ram,0x014ecd0c) */
/* WARNING: Removing unreachable block (ram,0x014ecd94) */
/* WARNING: Removing unreachable block (ram,0x014ecd98) */
/* WARNING: Removing unreachable block (ram,0x014ecda0) */
/* WARNING: Removing unreachable block (ram,0x014ecd1c) */
/* WARNING: Removing unreachable block (ram,0x014ecd20) */
/* WARNING: Removing unreachable block (ram,0x014ecd28) */
/* WARNING: Removing unreachable block (ram,0x014ecd34) */
/* WARNING: Removing unreachable block (ram,0x014ecd3c) */
/* WARNING: Removing unreachable block (ram,0x014ecd4c) */
/* WARNING: Removing unreachable block (ram,0x014ecd60) */
/* WARNING: Removing unreachable block (ram,0x014ecd6c) */
/* WARNING: Removing unreachable block (ram,0x014ecdd4) */
/* WARNING: Removing unreachable block (ram,0x014ecdd8) */
/* WARNING: Removing unreachable block (ram,0x014ece04) */
/* WARNING: Removing unreachable block (ram,0x014ece18) */
/* WARNING: Removing unreachable block (ram,0x014ece30) */
/* WARNING: Removing unreachable block (ram,0x014ece38) */
/* WARNING: Removing unreachable block (ram,0x014ece3c) */
/* WARNING: Removing unreachable block (ram,0x014ecd74) */
/* WARNING: Removing unreachable block (ram,0x014ecdb8) */
/* WARNING: Removing unreachable block (ram,0x014ecdc0) */

uint Atlas_Save_SaveManager__GetStringData(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  
  if ((bRam0000000003eb4c44 & 1) == 0) {
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c44 = 1;
  }
  lVar1 = Atlas_Save_SaveManager__get_SaveData(param_1);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb4c4a & 1) == 0) {
    func_0x00f78a20(0x3d3d928);
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c4a = 1;
  }
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb4c4c & 1) == 0) {
    func_0x00f78a20(0x3d3d920);
    func_0x00f78a20(0x3d3d928);
    bRam0000000003eb4c4c = 1;
  }
  if ((lVar1 != 0) && (lVar4 = *(long *)(lVar1 + 0x118), lVar4 != 0)) {
    uVar3 = 0;
    do {
      if ((int)*(uint *)(lVar4 + 0x18) <= (int)uVar3) {
        return 0xffffffff;
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar3) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + (long)(int)uVar3 * 0x10 + 0x20);
      if (lVar4 == 0) break;
      uVar2 = /*System.String$$Equals*/ func_0x029caa48(lVar4,param_2,5,0);
      if ((uVar2 & 1) != 0) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
      lVar4 = *(long *)(lVar1 + 0x118);
    } while (lVar4 != 0);
  }
  func_0x00f78af4();
  return 0xffffffff;
}



// ============================================================
// RVA: 0x14eca8c | Atlas.Save.SaveManager.GetStringData
// ============================================================

/* WARNING: Possible PIC construction at 0x014ecb00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014ecd08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014ecb04) */
/* WARNING: Removing unreachable block (ram,0x014ecb08) */
/* WARNING: Removing unreachable block (ram,0x014ecb0c) */
/* WARNING: Removing unreachable block (ram,0x014ecb50) */
/* WARNING: Removing unreachable block (ram,0x014ecb88) */
/* WARNING: Removing unreachable block (ram,0x014ecb9c) */
/* WARNING: Removing unreachable block (ram,0x014ecbb4) */
/* WARNING: Removing unreachable block (ram,0x014ecbbc) */
/* WARNING: Removing unreachable block (ram,0x014ecbc0) */
/* WARNING: Removing unreachable block (ram,0x014ecbe0) */
/* WARNING: Removing unreachable block (ram,0x014ecc14) */
/* WARNING: Removing unreachable block (ram,0x014ecc34) */
/* WARNING: Removing unreachable block (ram,0x014ecc40) */
/* WARNING: Removing unreachable block (ram,0x014ecc48) */
/* WARNING: Removing unreachable block (ram,0x014ecc4c) */
/* WARNING: Removing unreachable block (ram,0x014ecc5c) */
/* WARNING: Removing unreachable block (ram,0x014ecc60) */
/* WARNING: Removing unreachable block (ram,0x014ecca4) */
/* WARNING: Removing unreachable block (ram,0x014eccd4) */
/* WARNING: Removing unreachable block (ram,0x014ecd00) */
/* WARNING: Removing unreachable block (ram,0x014ecc68) */
/* WARNING: Removing unreachable block (ram,0x014ecc78) */
/* WARNING: Removing unreachable block (ram,0x014ecc80) */
/* WARNING: Removing unreachable block (ram,0x014ecc8c) */
/* WARNING: Removing unreachable block (ram,0x014ecb14) */
/* WARNING: Removing unreachable block (ram,0x014ecb24) */
/* WARNING: Removing unreachable block (ram,0x014ecb2c) */
/* WARNING: Removing unreachable block (ram,0x014ecb38) */
/* WARNING: Removing unreachable block (ram,0x014ecd0c) */
/* WARNING: Removing unreachable block (ram,0x014ecd94) */
/* WARNING: Removing unreachable block (ram,0x014ecd98) */
/* WARNING: Removing unreachable block (ram,0x014ecda0) */
/* WARNING: Removing unreachable block (ram,0x014ecd1c) */
/* WARNING: Removing unreachable block (ram,0x014ecd20) */
/* WARNING: Removing unreachable block (ram,0x014ecd28) */
/* WARNING: Removing unreachable block (ram,0x014ecd34) */
/* WARNING: Removing unreachable block (ram,0x014ecd3c) */
/* WARNING: Removing unreachable block (ram,0x014ecd4c) */
/* WARNING: Removing unreachable block (ram,0x014ecd60) */
/* WARNING: Removing unreachable block (ram,0x014ecd6c) */
/* WARNING: Removing unreachable block (ram,0x014ecdd4) */
/* WARNING: Removing unreachable block (ram,0x014ecdd8) */
/* WARNING: Removing unreachable block (ram,0x014ece04) */
/* WARNING: Removing unreachable block (ram,0x014ece18) */
/* WARNING: Removing unreachable block (ram,0x014ece30) */
/* WARNING: Removing unreachable block (ram,0x014ece38) */
/* WARNING: Removing unreachable block (ram,0x014ece3c) */
/* WARNING: Removing unreachable block (ram,0x014ecd74) */
/* WARNING: Removing unreachable block (ram,0x014ecdb8) */
/* WARNING: Removing unreachable block (ram,0x014ecdc0) */

uint Atlas_Save_SaveManager__GetStringData(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  
  if ((bRam0000000003eb4c4a & 1) == 0) {
    func_0x00f78a20(0x3d3d928);
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c4a = 1;
  }
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb4c4c & 1) == 0) {
    func_0x00f78a20(0x3d3d920);
    func_0x00f78a20(0x3d3d928);
    bRam0000000003eb4c4c = 1;
  }
  if ((param_3 != 0) && (lVar3 = *(long *)(param_3 + 0x118), lVar3 != 0)) {
    uVar2 = 0;
    do {
      if ((int)*(uint *)(lVar3 + 0x18) <= (int)uVar2) {
        return 0xffffffff;
      }
      if (*(uint *)(lVar3 + 0x18) <= uVar2) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0x10) + (long)(int)uVar2 * 0x10 + 0x20);
      if (lVar3 == 0) break;
      uVar1 = /*System.String$$Equals*/ func_0x029caa48(lVar3,param_1,5,0);
      if ((uVar1 & 1) != 0) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
      lVar3 = *(long *)(param_3 + 0x118);
    } while (lVar3 != 0);
  }
  func_0x00f78af4();
  return 0xffffffff;
}



// ============================================================
// RVA: 0x14ecb54 | Atlas.Save.SaveManager.GetIntData
// ============================================================

/* WARNING: Possible PIC construction at 0x014ecd08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014ecd0c) */
/* WARNING: Removing unreachable block (ram,0x014ecd94) */
/* WARNING: Removing unreachable block (ram,0x014ecd98) */
/* WARNING: Removing unreachable block (ram,0x014ecda0) */
/* WARNING: Removing unreachable block (ram,0x014ecd1c) */
/* WARNING: Removing unreachable block (ram,0x014ecd20) */
/* WARNING: Removing unreachable block (ram,0x014ecd28) */
/* WARNING: Removing unreachable block (ram,0x014ecd34) */
/* WARNING: Removing unreachable block (ram,0x014ecd3c) */
/* WARNING: Removing unreachable block (ram,0x014ecd4c) */
/* WARNING: Removing unreachable block (ram,0x014ecd60) */
/* WARNING: Removing unreachable block (ram,0x014ecd6c) */
/* WARNING: Removing unreachable block (ram,0x014ecdd4) */
/* WARNING: Removing unreachable block (ram,0x014ecd74) */
/* WARNING: Removing unreachable block (ram,0x014ecdb8) */
/* WARNING: Removing unreachable block (ram,0x014ecdc0) */

ulong Atlas_Save_SaveManager__GetIntData(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000003eb4c45 & 1) == 0) {
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c45 = 1;
  }
  lVar2 = Atlas_Save_SaveManager__get_SaveData(param_1);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb4c4b & 1) == 0) {
    func_0x00f78a20(0x3d3d900);
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c4b = 1;
  }
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*Atlas.Save.SaveManager$$GetIntDataIndex*/ func_0x014ed0b0(param_2,lVar2);
  if (-1 < (int)uVar1) {
    if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x110), lVar2 == 0)) {
      auVar6 = func_0x00f78af4();
      if ((bRam0000000003eb4c46 & 1) == 0) {
        func_0x00f78a20(0x3d3d918);
        func_0x00f78a20(0x3d3d928);
        func_0x00f78a20(0x3d3d930);
        bRam0000000003eb4c46 = 1;
      }
      if ((bRam0000000003eb4c48 & 1) == 0) {
        func_0x00f78a20(0x3d246e0);
        bRam0000000003eb4c48 = 1;
      }
      lVar2 = Atlas_Save_SaveManager__get_SaveData(auVar6._0_8_);
      if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if ((bRam0000000003eb4c4c & 1) == 0) {
        func_0x00f78a20(0x3d3d920);
        func_0x00f78a20(0x3d3d928);
        bRam0000000003eb4c4c = 1;
      }
      if ((lVar2 != 0) && (lVar5 = *(long *)(lVar2 + 0x118), lVar5 != 0)) {
        uVar4 = 0;
        do {
          uVar1 = (uint)uVar4;
          if ((int)*(uint *)(lVar5 + 0x18) <= (int)uVar1) {
            return 0xffffffff;
          }
          if (*(uint *)(lVar5 + 0x18) <= uVar1) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0x10) + (long)(int)uVar1 * 0x10 + 0x20);
          if (lVar5 == 0) break;
          uVar3 = /*System.String$$Equals*/ func_0x029caa48(lVar5,auVar6._8_8_,5,0);
          if ((uVar3 & 1) != 0) {
            return uVar4;
          }
          uVar4 = (ulong)(uVar1 + 1);
          lVar5 = *(long *)(lVar2 + 0x118);
        } while (lVar5 != 0);
      }
      func_0x00f78af4();
      return 0xffffffff;
    }
    if (*(uint *)(lVar2 + 0x18) <= uVar1) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    param_3 = (ulong)*(uint *)(*(long *)(lVar2 + 0x10) + (ulong)uVar1 * 0x10 + 0x28);
  }
  return param_3;
}



// ============================================================
// RVA: 0x14ecbe0 | Atlas.Save.SaveManager.GetIntData
// ============================================================

/* WARNING: Possible PIC construction at 0x014ecd08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014ecd0c) */
/* WARNING: Removing unreachable block (ram,0x014ecd94) */
/* WARNING: Removing unreachable block (ram,0x014ecd98) */
/* WARNING: Removing unreachable block (ram,0x014ecda0) */
/* WARNING: Removing unreachable block (ram,0x014ecd1c) */
/* WARNING: Removing unreachable block (ram,0x014ecd20) */
/* WARNING: Removing unreachable block (ram,0x014ecd28) */
/* WARNING: Removing unreachable block (ram,0x014ecd34) */
/* WARNING: Removing unreachable block (ram,0x014ecd3c) */
/* WARNING: Removing unreachable block (ram,0x014ecd4c) */
/* WARNING: Removing unreachable block (ram,0x014ecd60) */
/* WARNING: Removing unreachable block (ram,0x014ecd6c) */
/* WARNING: Removing unreachable block (ram,0x014ecdd4) */
/* WARNING: Removing unreachable block (ram,0x014ecd74) */
/* WARNING: Removing unreachable block (ram,0x014ecdb8) */
/* WARNING: Removing unreachable block (ram,0x014ecdc0) */

ulong Atlas_Save_SaveManager__GetIntData(undefined8 param_1,ulong param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000003eb4c4b & 1) == 0) {
    func_0x00f78a20(0x3d3d900);
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c4b = 1;
  }
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*Atlas.Save.SaveManager$$GetIntDataIndex*/ func_0x014ed0b0(param_1,param_3);
  if (-1 < (int)uVar1) {
    if ((param_3 == 0) || (lVar3 = *(long *)(param_3 + 0x110), lVar3 == 0)) {
      auVar6 = func_0x00f78af4();
      if ((bRam0000000003eb4c46 & 1) == 0) {
        func_0x00f78a20(0x3d3d918);
        func_0x00f78a20(0x3d3d928);
        func_0x00f78a20(0x3d3d930);
        bRam0000000003eb4c46 = 1;
      }
      if ((bRam0000000003eb4c48 & 1) == 0) {
        func_0x00f78a20(0x3d246e0);
        bRam0000000003eb4c48 = 1;
      }
      lVar3 = Atlas_Save_SaveManager__get_SaveData(auVar6._0_8_);
      if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if ((bRam0000000003eb4c4c & 1) == 0) {
        func_0x00f78a20(0x3d3d920);
        func_0x00f78a20(0x3d3d928);
        bRam0000000003eb4c4c = 1;
      }
      if ((lVar3 != 0) && (lVar5 = *(long *)(lVar3 + 0x118), lVar5 != 0)) {
        uVar4 = 0;
        do {
          uVar1 = (uint)uVar4;
          if ((int)*(uint *)(lVar5 + 0x18) <= (int)uVar1) {
            return 0xffffffff;
          }
          if (*(uint *)(lVar5 + 0x18) <= uVar1) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0x10) + (long)(int)uVar1 * 0x10 + 0x20);
          if (lVar5 == 0) break;
          uVar2 = /*System.String$$Equals*/ func_0x029caa48(lVar5,auVar6._8_8_,5,0);
          if ((uVar2 & 1) != 0) {
            return uVar4;
          }
          uVar4 = (ulong)(uVar1 + 1);
          lVar5 = *(long *)(lVar3 + 0x118);
        } while (lVar5 != 0);
      }
      func_0x00f78af4();
      return 0xffffffff;
    }
    if (*(uint *)(lVar3 + 0x18) <= uVar1) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    param_2 = (ulong)*(uint *)(*(long *)(lVar3 + 0x10) + (ulong)uVar1 * 0x10 + 0x28);
  }
  return param_2;
}



// ============================================================
// RVA: 0x14ecca8 | Atlas.Save.SaveManager.SetStringData
// ============================================================

/* WARNING: Possible PIC construction at 0x014ecd08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014ecd0c) */
/* WARNING: Removing unreachable block (ram,0x014ecd94) */
/* WARNING: Removing unreachable block (ram,0x014ecd98) */
/* WARNING: Removing unreachable block (ram,0x014ecda0) */
/* WARNING: Removing unreachable block (ram,0x014ecd1c) */
/* WARNING: Removing unreachable block (ram,0x014ecd20) */
/* WARNING: Removing unreachable block (ram,0x014ecd28) */
/* WARNING: Removing unreachable block (ram,0x014ecd34) */
/* WARNING: Removing unreachable block (ram,0x014ecd3c) */
/* WARNING: Removing unreachable block (ram,0x014ecd4c) */
/* WARNING: Removing unreachable block (ram,0x014ecd60) */
/* WARNING: Removing unreachable block (ram,0x014ecd6c) */
/* WARNING: Removing unreachable block (ram,0x014ecdd4) */
/* WARNING: Removing unreachable block (ram,0x014ecd74) */
/* WARNING: Removing unreachable block (ram,0x014ecdb8) */
/* WARNING: Removing unreachable block (ram,0x014ecdc0) */

uint Atlas_Save_SaveManager__SetStringData(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  
  if ((bRam0000000003eb4c46 & 1) == 0) {
    func_0x00f78a20(0x3d3d918);
    func_0x00f78a20(0x3d3d928);
    func_0x00f78a20(0x3d3d930);
    bRam0000000003eb4c46 = 1;
  }
  if ((bRam0000000003eb4c48 & 1) == 0) {
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c48 = 1;
  }
  lVar1 = Atlas_Save_SaveManager__get_SaveData(param_1);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb4c4c & 1) == 0) {
    func_0x00f78a20(0x3d3d920);
    func_0x00f78a20(0x3d3d928);
    bRam0000000003eb4c4c = 1;
  }
  if ((lVar1 != 0) && (lVar4 = *(long *)(lVar1 + 0x118), lVar4 != 0)) {
    uVar3 = 0;
    do {
      if ((int)*(uint *)(lVar4 + 0x18) <= (int)uVar3) {
        return 0xffffffff;
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar3) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + (long)(int)uVar3 * 0x10 + 0x20);
      if (lVar4 == 0) break;
      uVar2 = /*System.String$$Equals*/ func_0x029caa48(lVar4,param_2,5,0);
      if ((uVar2 & 1) != 0) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
      lVar4 = *(long *)(lVar1 + 0x118);
    } while (lVar4 != 0);
  }
  func_0x00f78af4();
  return 0xffffffff;
}



// ============================================================
// RVA: 0x14ecdd8 | Atlas.Save.SaveManager.GetStringDataIndex
// ============================================================

uint Atlas_Save_SaveManager__GetStringDataIndex(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  
  if ((bRam0000000003eb4c48 & 1) == 0) {
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c48 = 1;
  }
  lVar1 = Atlas_Save_SaveManager__get_SaveData(param_1);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb4c4c & 1) == 0) {
    func_0x00f78a20(0x3d3d920);
    func_0x00f78a20(0x3d3d928);
    bRam0000000003eb4c4c = 1;
  }
  if ((lVar1 != 0) && (lVar4 = *(long *)(lVar1 + 0x118), lVar4 != 0)) {
    uVar3 = 0;
    do {
      if ((int)*(uint *)(lVar4 + 0x18) <= (int)uVar3) {
        return 0xffffffff;
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar3) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + (long)(int)uVar3 * 0x10 + 0x20);
      if (lVar4 == 0) break;
      uVar2 = /*System.String$$Equals*/ func_0x029caa48(lVar4,param_2,5,0);
      if ((uVar2 & 1) != 0) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
      lVar4 = *(long *)(lVar1 + 0x118);
    } while (lVar4 != 0);
  }
  func_0x00f78af4();
  return 0xffffffff;
}



// ============================================================
// RVA: 0x14ece54 | Atlas.Save.SaveManager.SetIntData
// ============================================================

/* WARNING: Possible PIC construction at 0x014eceb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014ecebc) */
/* WARNING: Removing unreachable block (ram,0x014ecf34) */
/* WARNING: Removing unreachable block (ram,0x014ecf38) */
/* WARNING: Removing unreachable block (ram,0x014ecf40) */
/* WARNING: Removing unreachable block (ram,0x014ececc) */
/* WARNING: Removing unreachable block (ram,0x014eced0) */
/* WARNING: Removing unreachable block (ram,0x014eced8) */
/* WARNING: Removing unreachable block (ram,0x014ecee4) */
/* WARNING: Removing unreachable block (ram,0x014eceec) */
/* WARNING: Removing unreachable block (ram,0x014ecf00) */
/* WARNING: Removing unreachable block (ram,0x014ecf0c) */
/* WARNING: Removing unreachable block (ram,0x014ecf74) */
/* WARNING: Removing unreachable block (ram,0x014ecf14) */
/* WARNING: Removing unreachable block (ram,0x014ecf58) */
/* WARNING: Removing unreachable block (ram,0x014ecf60) */

uint Atlas_Save_SaveManager__SetIntData(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  
  if ((bRam0000000003eb4c47 & 1) == 0) {
    func_0x00f78a20(0x3d3d8f0);
    func_0x00f78a20(0x3d3d900);
    func_0x00f78a20(0x3d3d908);
    bRam0000000003eb4c47 = 1;
  }
  if ((bRam0000000003eb4c49 & 1) == 0) {
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c49 = 1;
  }
  lVar1 = Atlas_Save_SaveManager__get_SaveData(param_1);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb4c4d & 1) == 0) {
    func_0x00f78a20(0x3d3d8f8);
    func_0x00f78a20(0x3d3d900);
    bRam0000000003eb4c4d = 1;
  }
  if ((lVar1 != 0) && (lVar4 = *(long *)(lVar1 + 0x110), lVar4 != 0)) {
    uVar3 = 0;
    do {
      if ((int)*(uint *)(lVar4 + 0x18) <= (int)uVar3) {
        return 0xffffffff;
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar3) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + (long)(int)uVar3 * 0x10 + 0x20);
      if (lVar4 == 0) break;
      uVar2 = /*System.String$$Equals*/ func_0x029caa48(lVar4,param_2,5,0);
      if ((uVar2 & 1) != 0) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
      lVar4 = *(long *)(lVar1 + 0x110);
    } while (lVar4 != 0);
  }
  func_0x00f78af4();
  return 0xffffffff;
}



// ============================================================
// RVA: 0x14ecf78 | Atlas.Save.SaveManager.GetIntDataIndex
// ============================================================

uint Atlas_Save_SaveManager__GetIntDataIndex(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  
  if ((bRam0000000003eb4c49 & 1) == 0) {
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c49 = 1;
  }
  lVar1 = Atlas_Save_SaveManager__get_SaveData(param_1);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb4c4d & 1) == 0) {
    func_0x00f78a20(0x3d3d8f8);
    func_0x00f78a20(0x3d3d900);
    bRam0000000003eb4c4d = 1;
  }
  if ((lVar1 != 0) && (lVar4 = *(long *)(lVar1 + 0x110), lVar4 != 0)) {
    uVar3 = 0;
    do {
      if ((int)*(uint *)(lVar4 + 0x18) <= (int)uVar3) {
        return 0xffffffff;
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar3) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + (long)(int)uVar3 * 0x10 + 0x20);
      if (lVar4 == 0) break;
      uVar2 = /*System.String$$Equals*/ func_0x029caa48(lVar4,param_2,5,0);
      if ((uVar2 & 1) != 0) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
      lVar4 = *(long *)(lVar1 + 0x110);
    } while (lVar4 != 0);
  }
  func_0x00f78af4();
  return 0xffffffff;
}



// ============================================================
// RVA: 0x14ecff4 | Atlas.Save.SaveManager.GetStringDataIndex
// ============================================================

uint Atlas_Save_SaveManager__GetStringDataIndex(undefined8 param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  
  if ((bRam0000000003eb4c4c & 1) == 0) {
    func_0x00f78a20(0x3d3d920);
    func_0x00f78a20(0x3d3d928);
    bRam0000000003eb4c4c = 1;
  }
  if ((param_2 != 0) && (lVar3 = *(long *)(param_2 + 0x118), lVar3 != 0)) {
    uVar2 = 0;
    do {
      if ((int)*(uint *)(lVar3 + 0x18) <= (int)uVar2) {
        return 0xffffffff;
      }
      if (*(uint *)(lVar3 + 0x18) <= uVar2) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0x10) + (long)(int)uVar2 * 0x10 + 0x20);
      if (lVar3 == 0) break;
      uVar1 = /*System.String$$Equals*/ func_0x029caa48(lVar3,param_1,5,0);
      if ((uVar1 & 1) != 0) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
      lVar3 = *(long *)(param_2 + 0x118);
    } while (lVar3 != 0);
  }
  func_0x00f78af4();
  return 0xffffffff;
}



// ============================================================
// RVA: 0x14ed0b0 | Atlas.Save.SaveManager.GetIntDataIndex
// ============================================================

uint Atlas_Save_SaveManager__GetIntDataIndex(undefined8 param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  
  if ((bRam0000000003eb4c4d & 1) == 0) {
    func_0x00f78a20(0x3d3d8f8);
    func_0x00f78a20(0x3d3d900);
    bRam0000000003eb4c4d = 1;
  }
  if ((param_2 != 0) && (lVar3 = *(long *)(param_2 + 0x110), lVar3 != 0)) {
    uVar2 = 0;
    do {
      if ((int)*(uint *)(lVar3 + 0x18) <= (int)uVar2) {
        return 0xffffffff;
      }
      if (*(uint *)(lVar3 + 0x18) <= uVar2) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0x10) + (long)(int)uVar2 * 0x10 + 0x20);
      if (lVar3 == 0) break;
      uVar1 = /*System.String$$Equals*/ func_0x029caa48(lVar3,param_1,5,0);
      if ((uVar1 & 1) != 0) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
      lVar3 = *(long *)(param_2 + 0x110);
    } while (lVar3 != 0);
  }
  func_0x00f78af4();
  return 0xffffffff;
}



// ============================================================
// RVA: 0x14ed16c | Atlas.Save.SaveManager.WorkOutCurrentSaveSlotFromLastSaved
// ============================================================

ulong Atlas_Save_SaveManager__WorkOutCurrentSaveSlotFromLastSaved
                (long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  int iVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  uint uVar22;
  ulong uVar23;
  long *plVar24;
  long lVar25;
  undefined8 uVar26;
  undefined1 auVar27 [16];
  int aiStack_f8 [4];
  int iStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  
  if ((bRam0000000003eb4c4f & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    bRam0000000003eb4c4f = 1;
  }
  if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar15 = 0;
  uVar16 = *(undefined8 *)(*(long *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xb8) + 0x10);
  lVar21 = 4;
  while( true ) {
    lVar13 = *(long *)(param_1 + 0xf0);
    if (lVar13 == 0) goto LAB_014ed29c;
    uVar23 = lVar21 - 4;
    if (*(uint *)(lVar13 + 0x18) <= uVar23) break;
    if (*(long *)(lVar13 + lVar21 * 8) == 0) goto LAB_014ed29c;
    iVar5 = Atlas_Save_SaveData__get_IsValidSaveData();
    if (iVar5 == 0) goto LAB_014ed274;
    lVar13 = *(long *)(param_1 + 0xf0);
    if (lVar13 == 0) goto LAB_014ed29c;
    if (*(uint *)(lVar13 + 0x18) <= uVar23) break;
    lVar13 = *(long *)(lVar13 + lVar21 * 8);
    if (lVar13 == 0) {
LAB_014ed29c:
      func_0x00f78af4();
      break;
    }
    uVar19 = *(undefined8 *)(lVar13 + 0x18);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    param_3 = 0;
    iVar5 = /*System.DateTime$$op_GreaterThan*/ func_0x02a8fb2c(uVar19,uVar16);
    if (iVar5 != 0) {
      lVar13 = *(long *)(param_1 + 0xf0);
      if (lVar13 != 0) {
        if (*(uint *)(lVar13 + 0x18) <= uVar23) break;
        lVar13 = *(long *)(lVar13 + lVar21 * 8);
        if (lVar13 != 0) {
          uVar16 = *(undefined8 *)(lVar13 + 0x18);
          uVar15 = (ulong)((int)lVar21 - 4);
          goto LAB_014ed274;
        }
      }
      goto LAB_014ed29c;
    }
LAB_014ed274:
    lVar21 = lVar21 + 1;
    if (lVar21 == 7) {
      return uVar15;
    }
  }
  uVar16 = func_0x00f78b24();
  auVar27 = func_0x00f78ac0(uVar16,0);
  lVar13 = auVar27._8_8_;
  lVar21 = auVar27._0_8_;
  if ((bRam0000000003eb4c50 & 1) == 0) {
    func_0x00f78a20(0x3d1fcc0);
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d2dc70);
    func_0x00f78a20(0x3d2fe48);
    func_0x00f78a20(0x3d2fe20);
    func_0x00f78a20(0x3d2fe80);
    func_0x00f78a20(0x3d1c508);
    func_0x00f78a20(0x3d32410);
    func_0x00f78a20(0x3d32418);
    func_0x00f78a20(0x3d32420);
    func_0x00f78a20(0x3d57328);
    func_0x00f78a20(0x3d3d918);
    func_0x00f78a20(0x3d3d8f0);
    func_0x00f78a20(0x3d3d858);
    func_0x00f78a20(0x3d3d8c0);
    func_0x00f78a20(0x3d3a4a8);
    func_0x00f78a20(0x3d3d940);
    func_0x00f78a20(0x3d3a4b0);
    func_0x00f78a20(0x3d3a4b8);
    func_0x00f78a20(0x3d39d00);
    func_0x00f78a20(0x3d3d920);
    func_0x00f78a20(0x3d3d960);
    func_0x00f78a20(0x3d3d8d0);
    func_0x00f78a20(0x3d3d868);
    func_0x00f78a20(0x3d3d8f8);
    func_0x00f78a20(0x3d3d968);
    func_0x00f78a20(0x3d39d08);
    func_0x00f78a20(0x3d3d900);
    func_0x00f78a20(0x3d3d870);
    func_0x00f78a20(0x3d3d8d8);
    func_0x00f78a20(0x3d3d928);
    func_0x00f78a20(0x3d3d970);
    func_0x00f78a20(0x3d3d8e0);
    func_0x00f78a20(0x3d3d908);
    func_0x00f78a20(0x3d3d930);
    func_0x00f78a20(0x3d3d878);
    func_0x00f78a20(0x3d232c0);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d25238);
    func_0x00f78a20(0x3d6f208);
    func_0x00f78a20(0x3d6f1f8);
    func_0x00f78a20(0x3d6f3b0);
    func_0x00f78a20(0x3d6f3b8);
    func_0x00f78a20(0x3d6f1f0);
    func_0x00f78a20(0x3d6f218);
    func_0x00f78a20(0x3d6f200);
    func_0x00f78a20(0x3d6f210);
    func_0x00f78a20(0x3d6f230);
    func_0x00f78a20(0x3d6f268);
    func_0x00f78a20(0x3d6f260);
    func_0x00f78a20(0x3d6f248);
    func_0x00f78a20(0x3d6f250);
    func_0x00f78a20(0x3d6f1e8);
    func_0x00f78a20(0x3d6f258);
    func_0x00f78a20(0x3d6f1e0);
    func_0x00f78a20(0x3d65d08);
    func_0x00f78a20(0x3d6f240);
    func_0x00f78a20(0x3d6f220);
    func_0x00f78a20(0x3d6f228);
    func_0x00f78a20(0x3d6f270);
    bRam0000000003eb4c50 = 1;
  }
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  iStack_e8 = 0;
  if ((lVar13 != 0) && (lVar21 != 0)) {
    uVar16 = *(undefined8 *)(lVar13 + 0x18);
    uVar19 = *(undefined8 *)(lVar21 + 0x18);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar6 = /*System.DateTime$$op_GreaterThan*/ func_0x02a8fb2c(uVar16,uVar19,0);
    iVar5 = /*System.DateTime$$op_GreaterThan*/ func_0x02a8fb2c(*(undefined8 *)(lVar13 + 0x18),*(undefined8 *)(lVar21 + 0x18),0);
    lVar9 = lVar13;
    if (iVar5 == 0) {
      lVar9 = lVar21;
    }
    *(undefined8 *)(lVar21 + 0x18) = *(undefined8 *)(lVar9 + 0x18);
    uVar16 = *(undefined8 *)(lVar13 + 0xd0);
    uVar19 = *(undefined8 *)(lVar21 + 0xd0);
    if (((*(byte *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar5 = /*System.TimeSpan$$op_GreaterThan*/ func_0x029f1234(uVar16,uVar19,0);
    puVar11 = (undefined8 *)(lVar13 + 0xd0);
    if (iVar5 == 0) {
      puVar11 = (undefined8 *)(lVar21 + 0xd0);
    }
    *(undefined8 *)(lVar21 + 0xd0) = *puVar11;
    if ((*(long *)(lVar21 + 0x30) != 0) &&
       (/*Atlas.Stats.StatsData$$UpdateToLargestValues*/ func_0x01504b5c(*(long *)(lVar21 + 0x30),*(undefined8 *)(lVar13 + 0x30),0), param_3 != 0)) {
      lVar9 = /*Core.Definitions.GameDefinitions$$GetDefinitionList<UsableDefinition>*/ func_0x0185c554(param_3,uRam0000000003d57328);
      lVar10 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, string>_TypeInfo*/ uRam0000000003d1c508);
      /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(lVar10,uRam0000000003d2fe20);
      if (lVar9 != 0) {
        uVar22 = *(uint *)(lVar9 + 0x18);
        if (0 < (int)uVar22) {
          uVar7 = 0;
          do {
            if (uVar22 <= uVar7) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            plVar24 = *(long **)(*(long *)(lVar9 + 0x10) + (long)(int)uVar7 * 8 + 0x20);
            if (plVar24 == (long *)0x0) goto code_r0x014ee0a8;
            uVar16 = (**(code **)(*plVar24 + 0x188))(plVar24,*(undefined8 *)(*plVar24 + 400));
            puVar11 = (undefined8 *)/*Atlas.Definitions.ArcadeEventDefinition$$get_MapDefinitionRef*/ func_0x01447e70(plVar24,0);
            uVar19 = *puVar11;
            if (((*(ushort *)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar16 = /*Atlas.Arcade.ArcadeSave$$GetKey*/ func_0x01454ad4(uVar16,uVar19,0);
            if (lVar10 == 0) goto code_r0x014ee0a8;
            /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$set_Item*/ func_0x01ed7794(lVar10,uVar16,/*STR('')*/ uRam0000000003d65d08,uRam0000000003d2fe80);
            uVar7 = uVar7 + 1;
            uVar22 = *(uint *)(lVar9 + 0x18);
          } while ((int)uVar7 < (int)uVar22);
        }
        lVar9 = *(long *)(lVar13 + 0x110);
        if (lVar9 != 0) {
          uVar15 = 0;
          while ((long)uVar15 < (long)(int)*(uint *)(lVar9 + 0x18)) {
            if (*(uint *)(lVar9 + 0x18) <= uVar15) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar25 = *(long *)(lVar21 + 0x110);
            if (lVar25 == 0) goto code_r0x014ee0a8;
            lVar17 = 0;
            uVar22 = 0;
            lVar9 = *(long *)(lVar9 + 0x10) + uVar15 * 0x10;
            uVar16 = *(undefined8 *)(lVar9 + 0x20);
            uVar19 = *(undefined8 *)(lVar9 + 0x28);
            while ((int)uVar22 < (int)*(uint *)(lVar25 + 0x18)) {
              if (*(uint *)(lVar25 + 0x18) <= uVar22) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              lVar9 = *(long *)(lVar25 + 0x10) + lVar17;
              lVar25 = *(long *)(lVar9 + 0x20);
              if (lVar25 == 0) goto code_r0x014ee0a8;
              uVar26 = *(undefined8 *)(lVar9 + 0x28);
              iVar5 = /*System.String$$Equals*/ func_0x029caa48(lVar25,uVar16,5,0);
              if (iVar5 != 0) {
                uVar23 = /*System.String$$Contains*/ func_0x029cd7a4(lVar25,/*STR('League_CDP')*/ uRam0000000003d6f3b0,0);
                if (((((((((uVar23 & 1) == 0) &&
                         (uVar23 = /*System.String$$Contains*/ func_0x029cd7a4(lVar25,/*STR('L_PDP')*/ uRam0000000003d6f208,0), (uVar23 & 1) == 0
                         )) && (uVar23 = /*System.String$$Contains*/ func_0x029cd7a4(lVar25,/*STR('L_SP')*/ uRam0000000003d6f230,0),
                               (uVar23 & 1) == 0)) &&
                       ((uVar23 = /*System.String$$Contains*/ func_0x029cd7a4(lVar25,/*STR('L_PL')*/ uRam0000000003d6f210,0), (uVar23 & 1) == 0
                        && (uVar23 = /*System.String$$Contains*/ func_0x029cd7a4(lVar25,/*STR('L_PDP')*/ uRam0000000003d6f208,0),
                           (uVar23 & 1) == 0)))) &&
                      (uVar23 = /*System.String$$Contains*/ func_0x029cd7a4(lVar25,/*STR('L_SAL')*/ uRam0000000003d6f228,0), (uVar23 & 1) == 0))
                     && (((uVar23 = /*System.String$$Contains*/ func_0x029cd7a4(lVar25,/*STR('L_WB')*/ uRam0000000003d6f240,0),
                          (uVar23 & 1) == 0 &&
                          (uVar23 = /*System.String$$Contains*/ func_0x029cd7a4(lVar25,/*STR('L_WS')*/ uRam0000000003d6f270,0),
                          (uVar23 & 1) == 0)) &&
                         ((uVar23 = /*System.String$$Contains*/ func_0x029cd7a4(lVar25,/*STR('L_WG')*/ uRam0000000003d6f250,0),
                          (uVar23 & 1) == 0 &&
                          (((uVar23 = /*System.String$$Contains*/ func_0x029cd7a4(lVar25,/*STR('L_WP')*/ uRam0000000003d6f268,0),
                            (uVar23 & 1) == 0 &&
                            (uVar23 = /*System.String$$Contains*/ func_0x029cd7a4(lVar25,/*STR('L_WD')*/ uRam0000000003d6f248,0),
                            (uVar23 & 1) == 0)) &&
                           (uVar23 = /*System.String$$Contains*/ func_0x029cd7a4(lVar25,/*STR('L_WM')*/ uRam0000000003d6f260,0),
                           (uVar23 & 1) == 0)))))))) &&
                    ((uVar23 = /*System.String$$Contains*/ func_0x029cd7a4(lVar25,/*STR('L_WGHR')*/ uRam0000000003d6f258,0), (uVar23 & 1) == 0 &&
                     (uVar23 = /*System.String$$Contains*/ func_0x029cd7a4(lVar25,/*STR('L_R_')*/ uRam0000000003d6f220,0), (uVar23 & 1) == 0))))
                   && ((uVar23 = /*System.String$$Contains*/ func_0x029cd7a4(lVar25,/*STR('L_RC_')*/ uRam0000000003d6f218,0), (uVar23 & 1) == 0
                       && ((uVar23 = /*System.String$$Contains*/ func_0x029cd7a4(lVar25,/*STR('L_LB_A_{0}')*/ uRam0000000003d6f1e8,0),
                           (uVar23 & 1) == 0 &&
                           (iVar5 = /*System.String$$Contains*/ func_0x029cd7a4(lVar25,/*STR('L_LB_P')*/ uRam0000000003d6f1f0,0), iVar5 == 0))))))
                {
                  if (lVar10 == 0) goto code_r0x014ee0a8;
                  iVar5 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar10,lVar25,uRam0000000003d2fe48);
                  if (iVar5 != 0) goto code_r0x014eda60;
                  if ((int)uVar19 <= (int)uVar26) goto code_r0x014eda8c;
                }
                else {
code_r0x014eda60:
                  if (uVar6 == 0) goto code_r0x014eda8c;
                }
                if (*(long *)(lVar21 + 0x110) == 0) goto code_r0x014ee0a8;
                /*System.Collections.Generic.List<SaveData.KeyValueInt>$$set_Item*/ func_0x0258c5d8(*(long *)(lVar21 + 0x110),uVar22,uVar16,uVar19,uRam0000000003d3d908)
                ;
                goto code_r0x014eda8c;
              }
              uVar22 = uVar22 + 1;
              lVar25 = *(long *)(lVar21 + 0x110);
              lVar17 = lVar17 + 0x10;
              if (lVar25 == 0) goto code_r0x014ee0a8;
            }
            /*System.Collections.Generic.List<SaveData.KeyValueInt>$$Add*/ func_0x0258c934(lVar25,uVar16,uVar19,uRam0000000003d3d8f0);
code_r0x014eda8c:
            uVar15 = uVar15 + 1;
            lVar9 = *(long *)(lVar13 + 0x110);
            if (lVar9 == 0) goto code_r0x014ee0a8;
          }
          lVar9 = *(long *)(lVar13 + 0x118);
          if (lVar9 != 0) {
            uVar15 = 0;
            goto code_r0x014edac4;
          }
        }
      }
    }
  }
code_r0x014ee0a8:
  do {
    do {
      do {
        do {
          func_0x00f78af4();
code_r0x014ee0ac:
        } while (*(long *)(lVar13 + 0x60) == 0);
        /*System.Collections.Generic.List<DefinitionID>$$GetEnumerator*/ func_0x023c68bc(&uStack_c8,*(long *)(lVar13 + 0x60),uRam0000000003d3a4b8);
        uStack_d8 = uStack_c0;
        uStack_e0 = uStack_c8;
        uStack_d0 = uStack_b8;
        while (uVar15 = /*System.Collections.Generic.List.Enumerator<DefinitionID>$$MoveNext*/ func_0x01f66780(&uStack_e0,uRam0000000003d32418), uVar16 = uStack_d0,
              (uVar15 & 1) != 0) {
          if (*(long *)(lVar21 + 0x60) == 0) {
            func_0x00f78af4();
            goto code_r0x014ee418;
          }
          uVar15 = /*System.Collections.Generic.List<DefinitionID>$$Contains*/ func_0x023c6130(*(long *)(lVar21 + 0x60),uStack_d0,uRam0000000003d3a4b0);
          if ((uVar15 & 1) == 0) {
            if (*(long *)(lVar21 + 0x60) == 0) {
              func_0x00f78af4();
              goto code_r0x014ee418;
            }
            /*System.Collections.Generic.List<DefinitionID>$$Add*/ func_0x023c5e00(*(long *)(lVar21 + 0x60),uVar16,uRam0000000003d3a4a8);
          }
        }
        aiStack_f8[0] = 0x6ea;
        iStack_e8 = 1;
        /*System.Collections.Generic.List.Enumerator<DefinitionID>$$Dispose*/ func_0x01f6677c(&uStack_e0,uRam0000000003d32410);
        iStack_e8 = 0;
      } while (*(long *)(lVar13 + 0x68) == 0);
      /*System.Collections.Generic.List<DefinitionID>$$GetEnumerator*/ func_0x023c68bc(&uStack_c8,*(long *)(lVar13 + 0x68),uRam0000000003d3a4b8);
      uStack_d8 = uStack_c0;
      uStack_e0 = uStack_c8;
      uStack_d0 = uStack_b8;
      while (uVar15 = /*System.Collections.Generic.List.Enumerator<DefinitionID>$$MoveNext*/ func_0x01f66780(&uStack_e0,uRam0000000003d32418), uVar16 = uStack_d0,
            iVar5 = iStack_e8, (uVar15 & 1) != 0) {
        if (*(long *)(lVar21 + 0x68) == 0) {
          func_0x00f78af4();
          goto code_r0x014ee418;
        }
        uVar15 = /*System.Collections.Generic.List<DefinitionID>$$Contains*/ func_0x023c6130(*(long *)(lVar21 + 0x68),uStack_d0,uRam0000000003d3a4b0);
        if ((uVar15 & 1) == 0) {
          if (*(long *)(lVar21 + 0x68) == 0) {
            func_0x00f78af4();
            goto code_r0x014ee418;
          }
          /*System.Collections.Generic.List<DefinitionID>$$Add*/ func_0x023c5e00(*(long *)(lVar21 + 0x68),uVar16,uRam0000000003d3a4a8);
        }
      }
      iVar18 = iStack_e8 + 1;
      aiStack_f8[0] = 0x737;
      iStack_e8 = iVar18;
      /*System.Collections.Generic.List.Enumerator<DefinitionID>$$Dispose*/ func_0x01f6677c(&uStack_e0,uRam0000000003d32410);
      if ((iVar18 != 0) && (aiStack_f8[iVar5] == 0x737)) {
        iVar18 = iVar5;
        iStack_e8 = iVar5;
      }
    } while (*(long *)(lVar13 + 0x70) == 0);
    /*System.Collections.Generic.List<DefinitionID>$$GetEnumerator*/ func_0x023c68bc(&uStack_c8,*(long *)(lVar13 + 0x70),uRam0000000003d3a4b8);
    uStack_d8 = uStack_c0;
    uStack_e0 = uStack_c8;
    uStack_d0 = uStack_b8;
    while (uVar15 = /*System.Collections.Generic.List.Enumerator<DefinitionID>$$MoveNext*/ func_0x01f66780(&uStack_e0,uRam0000000003d32418), uVar16 = uStack_d0,
          (uVar15 & 1) != 0) {
      if (*(long *)(lVar21 + 0x70) == 0) {
        func_0x00f78af4();
        goto code_r0x014ee418;
      }
      uVar15 = /*System.Collections.Generic.List<DefinitionID>$$Contains*/ func_0x023c6130(*(long *)(lVar21 + 0x70),uStack_d0,uRam0000000003d3a4b0);
      if ((uVar15 & 1) == 0) {
        if (*(long *)(lVar21 + 0x70) == 0) {
          func_0x00f78af4();
          goto code_r0x014ee418;
        }
        /*System.Collections.Generic.List<DefinitionID>$$Add*/ func_0x023c5e00(*(long *)(lVar21 + 0x70),uVar16,uRam0000000003d3a4a8);
      }
    }
    aiStack_f8[iVar18] = 0x784;
    iVar18 = iStack_e8;
    iVar5 = iStack_e8 + 1;
    iStack_e8 = iVar5;
    /*System.Collections.Generic.List.Enumerator<DefinitionID>$$Dispose*/ func_0x01f6677c(&uStack_e0,uRam0000000003d32410);
    if ((iVar5 != 0) && (aiStack_f8[iVar18] == 0x784)) {
      iVar5 = iVar18;
      iStack_e8 = iVar18;
    }
  } while (*(long *)(lVar13 + 0x78) == 0);
  /*System.Collections.Generic.List<DefinitionID>$$GetEnumerator*/ func_0x023c68bc(&uStack_c8,*(long *)(lVar13 + 0x78),uRam0000000003d3a4b8);
  uStack_d8 = uStack_c0;
  uStack_e0 = uStack_c8;
  uStack_d0 = uStack_b8;
  while( true ) {
    uVar15 = /*System.Collections.Generic.List.Enumerator<DefinitionID>$$MoveNext*/ func_0x01f66780(&uStack_e0,uRam0000000003d32418);
    uVar16 = uStack_d0;
    if ((uVar15 & 1) == 0) {
      aiStack_f8[iVar5] = 0x7d1;
      iStack_e8 = iStack_e8 + 1;
      /*System.Collections.Generic.List.Enumerator<DefinitionID>$$Dispose*/ func_0x01f6677c(&uStack_e0,uRam0000000003d32410);
      uVar15 = /*Atlas.Stats.DailyChallengeManager$$MergeDailyChallenges*/ func_0x015762c0(lVar21,lVar13,0);
      return uVar15;
    }
    if (*(long *)(lVar21 + 0x78) == 0) break;
    uVar15 = /*System.Collections.Generic.List<DefinitionID>$$Contains*/ func_0x023c6130(*(long *)(lVar21 + 0x78),uStack_d0,uRam0000000003d3a4b0);
    if ((uVar15 & 1) == 0) {
      if (*(long *)(lVar21 + 0x78) == 0) {
        func_0x00f78af4();
code_r0x014ee418:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x14ee41c);
        (*pcVar4)();
      }
      /*System.Collections.Generic.List<DefinitionID>$$Add*/ func_0x023c5e00(*(long *)(lVar21 + 0x78),uVar16,uRam0000000003d3a4a8);
    }
  }
  func_0x00f78af4();
  goto code_r0x014ee418;
code_r0x014edac4:
  if ((long)(int)*(uint *)(lVar9 + 0x18) <= (long)uVar15) {
    lVar9 = *(long *)(lVar13 + 0x38);
    if (lVar9 != 0) {
      uVar15 = 0;
      goto code_r0x014edc40;
    }
    goto code_r0x014ee0a8;
  }
  if (*(uint *)(lVar9 + 0x18) <= uVar15) {
    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
  }
  lVar10 = *(long *)(lVar21 + 0x118);
  if (lVar10 == 0) goto code_r0x014ee0a8;
  uVar22 = 0;
  lVar9 = *(long *)(lVar9 + 0x10) + uVar15 * 0x10;
  uVar16 = *(undefined8 *)(lVar9 + 0x20);
  uVar19 = *(undefined8 *)(lVar9 + 0x28);
  lVar9 = 0x20;
  while ((int)uVar22 < (int)*(uint *)(lVar10 + 0x18)) {
    if (*(uint *)(lVar10 + 0x18) <= uVar22) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0x10) + lVar9);
    if (lVar10 == 0) goto code_r0x014ee0a8;
    iVar5 = /*System.String$$Equals*/ func_0x029caa48(lVar10,uVar16,5,0);
    if (iVar5 != 0) {
      uVar23 = /*System.String$$Contains*/ func_0x029cd7a4(lVar10,/*STR('League_Character_')*/ uRam0000000003d6f3b8,0);
      uVar7 = uVar6;
      if ((((uVar23 & 1) == 0) &&
          (uVar23 = /*System.String$$Contains*/ func_0x029cd7a4(lVar10,/*STR('L_OD')*/ uRam0000000003d6f200,0), (uVar23 & 1) == 0)) &&
         (uVar23 = /*System.String$$Contains*/ func_0x029cd7a4(lVar10,/*STR('L_LPD')*/ uRam0000000003d6f1f8,0), (uVar23 & 1) == 0)) {
        uVar7 = /*System.String$$Contains*/ func_0x029cd7a4(lVar10,/*STR('L_CSD')*/ uRam0000000003d6f1e0,0);
        uVar7 = uVar7 & uVar6 & 1;
      }
      if (uVar7 == 0) goto code_r0x014edbf4;
      if (*(long *)(lVar21 + 0x118) == 0) goto code_r0x014ee0a8;
      /*System.Collections.Generic.List<SaveData.KeyValueString>$$set_Item*/ func_0x0258f0a8(*(long *)(lVar21 + 0x118),uVar22,uVar16,uVar19,uRam0000000003d3d930);
      goto code_r0x014edbf4;
    }
    uVar22 = uVar22 + 1;
    lVar10 = *(long *)(lVar21 + 0x118);
    lVar9 = lVar9 + 0x10;
    if (lVar10 == 0) goto code_r0x014ee0a8;
  }
  /*System.Collections.Generic.List<SaveData.KeyValueString>$$Add*/ func_0x0258f404(lVar10,uVar16,uVar19,uRam0000000003d3d918);
code_r0x014edbf4:
  uVar15 = uVar15 + 1;
  lVar9 = *(long *)(lVar13 + 0x118);
  if (lVar9 == 0) goto code_r0x014ee0a8;
  goto code_r0x014edac4;
code_r0x014edc40:
  if ((long)(int)*(uint *)(lVar9 + 0x18) <= (long)uVar15) {
    lVar9 = *(long *)(lVar13 + 0x50);
    if (lVar9 != 0) {
      uVar15 = 0;
      goto code_r0x014edd34;
    }
    goto code_r0x014ee0a8;
  }
  if (*(uint *)(lVar9 + 0x18) <= uVar15) {
    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
  }
  lVar10 = *(long *)(lVar21 + 0x38);
  if (lVar10 == 0) goto code_r0x014ee0a8;
  lVar25 = 0;
  uVar23 = 0;
  lVar9 = *(long *)(lVar9 + 0x10) + uVar15 * 0x10;
  uVar16 = *(undefined8 *)(lVar9 + 0x20);
  uVar12 = *(ulong *)(lVar9 + 0x28);
  while ((long)uVar23 < (long)(int)*(uint *)(lVar10 + 0x18)) {
    if (*(uint *)(lVar10 + 0x18) <= uVar23) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar9 = *(long *)(lVar10 + 0x10) + lVar25;
    uVar19 = *(undefined8 *)(lVar9 + 0x20);
    uVar1 = *(ulong *)(lVar9 + 0x28);
    iVar5 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar16,uVar19,0);
    if (iVar5 != 0) {
      if (*(long *)(lVar21 + 0x38) == 0) goto code_r0x014ee0a8;
      /*System.Collections.Generic.List<SaveData.UnlockedData>$$set_Item*/ func_0x02591b78(*(long *)(lVar21 + 0x38),uVar23,uVar19,uVar1 & (uVar12 | 0xffffffffffffff00),
                      uRam0000000003d3d970);
      goto code_r0x014edd10;
    }
    uVar23 = uVar23 + 1;
    lVar10 = *(long *)(lVar21 + 0x38);
    lVar25 = lVar25 + 0x10;
    if (lVar10 == 0) goto code_r0x014ee0a8;
  }
  /*System.Collections.Generic.List<SaveData.UnlockedData>$$Add*/ func_0x02591ed4(lVar10,uVar16,uVar12,uRam0000000003d3d940);
code_r0x014edd10:
  uVar15 = uVar15 + 1;
  lVar9 = *(long *)(lVar13 + 0x38);
  if (lVar9 == 0) goto code_r0x014ee0a8;
  goto code_r0x014edc40;
code_r0x014edd34:
  if ((long)(int)*(uint *)(lVar9 + 0x18) <= (long)uVar15) {
    lVar9 = *(long *)(lVar13 + 0x58);
    if (lVar9 != 0) {
      uVar15 = 0;
      goto code_r0x014edfb0;
    }
    goto code_r0x014ee0a8;
  }
  if (*(uint *)(lVar9 + 0x18) <= uVar15) {
    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
  }
  lVar10 = *(long *)(lVar21 + 0x50);
  if (lVar10 == 0) goto code_r0x014ee0a8;
  lVar25 = 0;
  uVar23 = 0;
  lVar9 = *(long *)(lVar9 + 0x10) + uVar15 * 0x18;
  uVar16 = *(undefined8 *)(lVar9 + 0x20);
  uVar19 = *(undefined8 *)(lVar9 + 0x28);
  uVar26 = *(undefined8 *)(lVar9 + 0x30);
  while ((long)uVar23 < (long)(int)*(uint *)(lVar10 + 0x18)) {
    if (*(uint *)(lVar10 + 0x18) <= uVar23) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar9 = *(long *)(lVar10 + 0x10) + lVar25;
    uVar20 = *(undefined8 *)(lVar9 + 0x20);
    uVar2 = *(undefined4 *)(lVar9 + 0x2c);
    uVar14 = *(undefined8 *)(lVar9 + 0x30);
    iVar5 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar16,uVar20,0);
    if (iVar5 != 0) {
      lVar9 = *(long *)(lVar21 + 0x50);
      if (lVar9 == 0) goto code_r0x014ee0a8;
      uVar6 = (uint)uVar23;
      if (*(uint *)(lVar9 + 0x18) <= uVar6) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar10 = *(long *)(lVar13 + 0x50);
      if (lVar10 == 0) goto code_r0x014ee0a8;
      uVar8 = *(undefined4 *)(*(long *)(lVar9 + 0x10) + lVar25 + 0x28);
      if (*(uint *)(lVar10 + 0x18) <= uVar15) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      uVar3 = *(undefined4 *)(*(long *)(lVar10 + 0x10) + uVar15 * 0x18 + 0x28);
      if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar8 = /*System.Math$$Max*/ func_0x02b01f4c(uVar8,uVar3,0);
      lVar9 = *(long *)(lVar21 + 0x50);
      if (lVar9 == 0) goto code_r0x014ee0a8;
      if (*(uint *)(lVar9 + 0x18) <= uVar6) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      iVar5 = /*System.String$$op_Inequality*/ func_0x029bd9d4(*(undefined8 *)(*(long *)(lVar9 + 0x10) + lVar25 + 0x30),
                              **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      if (iVar5 == 0) {
code_r0x014edf34:
        iVar5 = /*System.String$$op_Inequality*/ func_0x029bd9d4(uVar26,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
        uVar16 = uVar26;
        if (iVar5 == 0) {
          uVar16 = uVar14;
        }
      }
      else {
        lVar9 = *(long *)(lVar21 + 0x50);
        if (lVar9 == 0) goto code_r0x014ee0a8;
        lVar10 = lVar9;
        if (*(uint *)(lVar9 + 0x18) <= uVar6) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          lVar10 = *(long *)(lVar21 + 0x50);
          if (lVar10 == 0) goto code_r0x014ee0a8;
        }
        uVar16 = *(undefined8 *)(*(long *)(lVar9 + 0x10) + lVar25 + 0x30);
        if (*(uint *)(lVar10 + 0x18) <= uVar6) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        uVar12 = /*System.String$$op_Inequality*/ func_0x029bd9d4(uVar16,*(undefined8 *)(*(long *)(lVar10 + 0x10) + lVar25 + 0x20),0)
        ;
        uVar16 = uVar14;
        if ((uVar12 & 1) == 0) goto code_r0x014edf34;
      }
      if (*(long *)(lVar21 + 0x50) == 0) goto code_r0x014ee0a8;
      uStack_c0 = CONCAT44(uVar2,uVar8);
      uStack_c8 = uVar20;
      uStack_b8 = uVar16;
      /*System.Collections.Generic.List<SaveData.CharacterProgression>$$set_Item*/ func_0x02584130(*(long *)(lVar21 + 0x50),uVar23,&uStack_c8,uRam0000000003d3d878);
      goto code_r0x014edf8c;
    }
    uVar23 = uVar23 + 1;
    lVar10 = *(long *)(lVar21 + 0x50);
    lVar25 = lVar25 + 0x18;
    if (lVar10 == 0) goto code_r0x014ee0a8;
  }
  uStack_c8 = uVar16;
  uStack_c0 = uVar19;
  uStack_b8 = uVar26;
  /*System.Collections.Generic.List<SaveData.CharacterProgression>$$Add*/ func_0x025844b8(lVar10,&uStack_c8,uRam0000000003d3d858);
code_r0x014edf8c:
  uVar15 = uVar15 + 1;
  lVar9 = *(long *)(lVar13 + 0x50);
  if (lVar9 == 0) goto code_r0x014ee0a8;
  goto code_r0x014edd34;
code_r0x014edfb0:
  if ((long)(int)*(uint *)(lVar9 + 0x18) <= (long)uVar15) goto code_r0x014ee0ac;
  if (*(uint *)(lVar9 + 0x18) <= uVar15) {
    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
  }
  lVar10 = *(long *)(lVar21 + 0x58);
  if (lVar10 == 0) goto code_r0x014ee0a8;
  lVar25 = 0;
  uVar23 = 0;
  lVar9 = *(long *)(lVar9 + 0x10) + uVar15 * 0x10;
  uVar16 = *(undefined8 *)(lVar9 + 0x20);
  uVar12 = *(ulong *)(lVar9 + 0x28);
  while ((long)uVar23 < (long)(int)*(uint *)(lVar10 + 0x18)) {
    if (*(uint *)(lVar10 + 0x18) <= uVar23) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar9 = *(long *)(lVar10 + 0x10) + lVar25;
    uVar19 = *(undefined8 *)(lVar9 + 0x20);
    uVar1 = *(ulong *)(lVar9 + 0x28);
    iVar5 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar16,uVar19,0);
    if (iVar5 != 0) {
      if (*(long *)(lVar21 + 0x58) == 0) goto code_r0x014ee0a8;
      /*System.Collections.Generic.List<SaveData.EventProgression>$$set_Item*/ func_0x02589b08(*(long *)(lVar21 + 0x58),uVar23,uVar19,
                      uVar1 & 0xffffffffffff00ff | uVar12 & 0xff |
                      (ulong)((uint)uVar1 | (uint)uVar12) & 0xff00,uRam0000000003d3d8e0);
      goto code_r0x014ee098;
    }
    uVar23 = uVar23 + 1;
    lVar10 = *(long *)(lVar21 + 0x58);
    lVar25 = lVar25 + 0x10;
    if (lVar10 == 0) goto code_r0x014ee0a8;
  }
  /*System.Collections.Generic.List<SaveData.EventProgression>$$Add*/ func_0x02589e64(lVar10,uVar16,uVar12,uRam0000000003d3d8c0);
code_r0x014ee098:
  uVar15 = uVar15 + 1;
  lVar9 = *(long *)(lVar13 + 0x58);
  if (lVar9 == 0) goto code_r0x014ee0a8;
  goto code_r0x014edfb0;
}



// ============================================================
// RVA: 0x14ed2ac | Atlas.Save.SaveManager.MergeSaveData
// ============================================================

void Atlas_Save_SaveManager__MergeSaveData(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  int iVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  uint uVar20;
  long *plVar21;
  long lVar22;
  ulong uVar23;
  undefined8 uVar24;
  int aiStack_a8 [4];
  int iStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000003eb4c50 & 1) == 0) {
    func_0x00f78a20(0x3d1fcc0);
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d2dc70);
    func_0x00f78a20(0x3d2fe48);
    func_0x00f78a20(0x3d2fe20);
    func_0x00f78a20(0x3d2fe80);
    func_0x00f78a20(0x3d1c508);
    func_0x00f78a20(0x3d32410);
    func_0x00f78a20(0x3d32418);
    func_0x00f78a20(0x3d32420);
    func_0x00f78a20(0x3d57328);
    func_0x00f78a20(0x3d3d918);
    func_0x00f78a20(0x3d3d8f0);
    func_0x00f78a20(0x3d3d858);
    func_0x00f78a20(0x3d3d8c0);
    func_0x00f78a20(0x3d3a4a8);
    func_0x00f78a20(0x3d3d940);
    func_0x00f78a20(0x3d3a4b0);
    func_0x00f78a20(0x3d3a4b8);
    func_0x00f78a20(0x3d39d00);
    func_0x00f78a20(0x3d3d920);
    func_0x00f78a20(0x3d3d960);
    func_0x00f78a20(0x3d3d8d0);
    func_0x00f78a20(0x3d3d868);
    func_0x00f78a20(0x3d3d8f8);
    func_0x00f78a20(0x3d3d968);
    func_0x00f78a20(0x3d39d08);
    func_0x00f78a20(0x3d3d900);
    func_0x00f78a20(0x3d3d870);
    func_0x00f78a20(0x3d3d8d8);
    func_0x00f78a20(0x3d3d928);
    func_0x00f78a20(0x3d3d970);
    func_0x00f78a20(0x3d3d8e0);
    func_0x00f78a20(0x3d3d908);
    func_0x00f78a20(0x3d3d930);
    func_0x00f78a20(0x3d3d878);
    func_0x00f78a20(0x3d232c0);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d25238);
    func_0x00f78a20(0x3d6f208);
    func_0x00f78a20(0x3d6f1f8);
    func_0x00f78a20(0x3d6f3b0);
    func_0x00f78a20(0x3d6f3b8);
    func_0x00f78a20(0x3d6f1f0);
    func_0x00f78a20(0x3d6f218);
    func_0x00f78a20(0x3d6f200);
    func_0x00f78a20(0x3d6f210);
    func_0x00f78a20(0x3d6f230);
    func_0x00f78a20(0x3d6f268);
    func_0x00f78a20(0x3d6f260);
    func_0x00f78a20(0x3d6f248);
    func_0x00f78a20(0x3d6f250);
    func_0x00f78a20(0x3d6f1e8);
    func_0x00f78a20(0x3d6f258);
    func_0x00f78a20(0x3d6f1e0);
    func_0x00f78a20(0x3d65d08);
    func_0x00f78a20(0x3d6f240);
    func_0x00f78a20(0x3d6f220);
    func_0x00f78a20(0x3d6f228);
    func_0x00f78a20(0x3d6f270);
    bRam0000000003eb4c50 = 1;
  }
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  iStack_98 = 0;
  if ((param_2 != 0) && (param_1 != 0)) {
    uVar15 = *(undefined8 *)(param_2 + 0x18);
    uVar18 = *(undefined8 *)(param_1 + 0x18);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = /*System.DateTime$$op_GreaterThan*/ func_0x02a8fb2c(uVar15,uVar18,0);
    iVar6 = /*System.DateTime$$op_GreaterThan*/ func_0x02a8fb2c(*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_1 + 0x18),0);
    lVar9 = param_2;
    if (iVar6 == 0) {
      lVar9 = param_1;
    }
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar9 + 0x18);
    uVar15 = *(undefined8 *)(param_2 + 0xd0);
    uVar18 = *(undefined8 *)(param_1 + 0xd0);
    if (((*(byte *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar6 = /*System.TimeSpan$$op_GreaterThan*/ func_0x029f1234(uVar15,uVar18,0);
    puVar11 = (undefined8 *)(param_2 + 0xd0);
    if (iVar6 == 0) {
      puVar11 = (undefined8 *)(param_1 + 0xd0);
    }
    *(undefined8 *)(param_1 + 0xd0) = *puVar11;
    if ((*(long *)(param_1 + 0x30) != 0) &&
       (/*Atlas.Stats.StatsData$$UpdateToLargestValues*/ func_0x01504b5c(*(long *)(param_1 + 0x30),*(undefined8 *)(param_2 + 0x30),0), param_3 != 0))
    {
      lVar9 = /*Core.Definitions.GameDefinitions$$GetDefinitionList<UsableDefinition>*/ func_0x0185c554(param_3,uRam0000000003d57328);
      lVar10 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, string>_TypeInfo*/ uRam0000000003d1c508);
      /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(lVar10,uRam0000000003d2fe20);
      if (lVar9 != 0) {
        uVar20 = *(uint *)(lVar9 + 0x18);
        if (0 < (int)uVar20) {
          uVar7 = 0;
          do {
            if (uVar20 <= uVar7) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            plVar21 = *(long **)(*(long *)(lVar9 + 0x10) + (long)(int)uVar7 * 8 + 0x20);
            if (plVar21 == (long *)0x0) goto LAB_014ee0a8;
            uVar15 = (**(code **)(*plVar21 + 0x188))(plVar21,*(undefined8 *)(*plVar21 + 400));
            puVar11 = (undefined8 *)/*Atlas.Definitions.ArcadeEventDefinition$$get_MapDefinitionRef*/ func_0x01447e70(plVar21,0);
            uVar18 = *puVar11;
            if (((*(ushort *)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar15 = /*Atlas.Arcade.ArcadeSave$$GetKey*/ func_0x01454ad4(uVar15,uVar18,0);
            if (lVar10 == 0) goto LAB_014ee0a8;
            /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$set_Item*/ func_0x01ed7794(lVar10,uVar15,/*STR('')*/ uRam0000000003d65d08,uRam0000000003d2fe80);
            uVar7 = uVar7 + 1;
            uVar20 = *(uint *)(lVar9 + 0x18);
          } while ((int)uVar7 < (int)uVar20);
        }
        lVar9 = *(long *)(param_2 + 0x110);
        if (lVar9 != 0) {
          uVar23 = 0;
          while ((long)uVar23 < (long)(int)*(uint *)(lVar9 + 0x18)) {
            if (*(uint *)(lVar9 + 0x18) <= uVar23) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar22 = *(long *)(param_1 + 0x110);
            if (lVar22 == 0) goto LAB_014ee0a8;
            lVar16 = 0;
            uVar20 = 0;
            lVar9 = *(long *)(lVar9 + 0x10) + uVar23 * 0x10;
            uVar15 = *(undefined8 *)(lVar9 + 0x20);
            uVar18 = *(undefined8 *)(lVar9 + 0x28);
            while ((int)uVar20 < (int)*(uint *)(lVar22 + 0x18)) {
              if (*(uint *)(lVar22 + 0x18) <= uVar20) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              lVar9 = *(long *)(lVar22 + 0x10) + lVar16;
              lVar22 = *(long *)(lVar9 + 0x20);
              if (lVar22 == 0) goto LAB_014ee0a8;
              uVar24 = *(undefined8 *)(lVar9 + 0x28);
              iVar6 = /*System.String$$Equals*/ func_0x029caa48(lVar22,uVar15,5,0);
              if (iVar6 != 0) {
                uVar12 = /*System.String$$Contains*/ func_0x029cd7a4(lVar22,/*STR('League_CDP')*/ uRam0000000003d6f3b0,0);
                if (((((((((uVar12 & 1) == 0) &&
                         (uVar12 = /*System.String$$Contains*/ func_0x029cd7a4(lVar22,/*STR('L_PDP')*/ uRam0000000003d6f208,0), (uVar12 & 1) == 0
                         )) && (uVar12 = /*System.String$$Contains*/ func_0x029cd7a4(lVar22,/*STR('L_SP')*/ uRam0000000003d6f230,0),
                               (uVar12 & 1) == 0)) &&
                       ((uVar12 = /*System.String$$Contains*/ func_0x029cd7a4(lVar22,/*STR('L_PL')*/ uRam0000000003d6f210,0), (uVar12 & 1) == 0
                        && (uVar12 = /*System.String$$Contains*/ func_0x029cd7a4(lVar22,/*STR('L_PDP')*/ uRam0000000003d6f208,0),
                           (uVar12 & 1) == 0)))) &&
                      (uVar12 = /*System.String$$Contains*/ func_0x029cd7a4(lVar22,/*STR('L_SAL')*/ uRam0000000003d6f228,0), (uVar12 & 1) == 0))
                     && (((uVar12 = /*System.String$$Contains*/ func_0x029cd7a4(lVar22,/*STR('L_WB')*/ uRam0000000003d6f240,0),
                          (uVar12 & 1) == 0 &&
                          (uVar12 = /*System.String$$Contains*/ func_0x029cd7a4(lVar22,/*STR('L_WS')*/ uRam0000000003d6f270,0),
                          (uVar12 & 1) == 0)) &&
                         ((uVar12 = /*System.String$$Contains*/ func_0x029cd7a4(lVar22,/*STR('L_WG')*/ uRam0000000003d6f250,0),
                          (uVar12 & 1) == 0 &&
                          (((uVar12 = /*System.String$$Contains*/ func_0x029cd7a4(lVar22,/*STR('L_WP')*/ uRam0000000003d6f268,0),
                            (uVar12 & 1) == 0 &&
                            (uVar12 = /*System.String$$Contains*/ func_0x029cd7a4(lVar22,/*STR('L_WD')*/ uRam0000000003d6f248,0),
                            (uVar12 & 1) == 0)) &&
                           (uVar12 = /*System.String$$Contains*/ func_0x029cd7a4(lVar22,/*STR('L_WM')*/ uRam0000000003d6f260,0),
                           (uVar12 & 1) == 0)))))))) &&
                    ((uVar12 = /*System.String$$Contains*/ func_0x029cd7a4(lVar22,/*STR('L_WGHR')*/ uRam0000000003d6f258,0), (uVar12 & 1) == 0 &&
                     (uVar12 = /*System.String$$Contains*/ func_0x029cd7a4(lVar22,/*STR('L_R_')*/ uRam0000000003d6f220,0), (uVar12 & 1) == 0))))
                   && ((uVar12 = /*System.String$$Contains*/ func_0x029cd7a4(lVar22,/*STR('L_RC_')*/ uRam0000000003d6f218,0), (uVar12 & 1) == 0
                       && ((uVar12 = /*System.String$$Contains*/ func_0x029cd7a4(lVar22,/*STR('L_LB_A_{0}')*/ uRam0000000003d6f1e8,0),
                           (uVar12 & 1) == 0 &&
                           (iVar6 = /*System.String$$Contains*/ func_0x029cd7a4(lVar22,/*STR('L_LB_P')*/ uRam0000000003d6f1f0,0), iVar6 == 0))))))
                {
                  if (lVar10 == 0) goto LAB_014ee0a8;
                  iVar6 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar10,lVar22,uRam0000000003d2fe48);
                  if (iVar6 != 0) goto code_r0x014eda60;
                  if ((int)uVar18 <= (int)uVar24) goto code_r0x014eda8c;
                }
                else {
code_r0x014eda60:
                  if (uVar5 == 0) goto code_r0x014eda8c;
                }
                if (*(long *)(param_1 + 0x110) == 0) goto LAB_014ee0a8;
                /*System.Collections.Generic.List<SaveData.KeyValueInt>$$set_Item*/ func_0x0258c5d8(*(long *)(param_1 + 0x110),uVar20,uVar15,uVar18,uRam0000000003d3d908
                               );
                goto code_r0x014eda8c;
              }
              uVar20 = uVar20 + 1;
              lVar22 = *(long *)(param_1 + 0x110);
              lVar16 = lVar16 + 0x10;
              if (lVar22 == 0) goto LAB_014ee0a8;
            }
            /*System.Collections.Generic.List<SaveData.KeyValueInt>$$Add*/ func_0x0258c934(lVar22,uVar15,uVar18,uRam0000000003d3d8f0);
code_r0x014eda8c:
            uVar23 = uVar23 + 1;
            lVar9 = *(long *)(param_2 + 0x110);
            if (lVar9 == 0) goto LAB_014ee0a8;
          }
          lVar9 = *(long *)(param_2 + 0x118);
          if (lVar9 != 0) {
            uVar23 = 0;
            goto code_r0x014edac4;
          }
        }
      }
    }
  }
LAB_014ee0a8:
  do {
    do {
      do {
        do {
          func_0x00f78af4();
code_r0x014ee0ac:
        } while (*(long *)(param_2 + 0x60) == 0);
        /*System.Collections.Generic.List<DefinitionID>$$GetEnumerator*/ func_0x023c68bc(&uStack_78,*(long *)(param_2 + 0x60),uRam0000000003d3a4b8);
        uStack_88 = uStack_70;
        uStack_90 = uStack_78;
        uStack_80 = uStack_68;
        while (uVar23 = /*System.Collections.Generic.List.Enumerator<DefinitionID>$$MoveNext*/ func_0x01f66780(&uStack_90,uRam0000000003d32418), uVar15 = uStack_80,
              (uVar23 & 1) != 0) {
          if (*(long *)(param_1 + 0x60) == 0) {
            func_0x00f78af4();
            goto code_r0x014ee418;
          }
          uVar23 = /*System.Collections.Generic.List<DefinitionID>$$Contains*/ func_0x023c6130(*(long *)(param_1 + 0x60),uStack_80,uRam0000000003d3a4b0);
          if ((uVar23 & 1) == 0) {
            if (*(long *)(param_1 + 0x60) == 0) {
              func_0x00f78af4();
              goto code_r0x014ee418;
            }
            /*System.Collections.Generic.List<DefinitionID>$$Add*/ func_0x023c5e00(*(long *)(param_1 + 0x60),uVar15,uRam0000000003d3a4a8);
          }
        }
        aiStack_a8[0] = 0x6ea;
        iStack_98 = 1;
        /*System.Collections.Generic.List.Enumerator<DefinitionID>$$Dispose*/ func_0x01f6677c(&uStack_90,uRam0000000003d32410);
        iStack_98 = 0;
      } while (*(long *)(param_2 + 0x68) == 0);
      /*System.Collections.Generic.List<DefinitionID>$$GetEnumerator*/ func_0x023c68bc(&uStack_78,*(long *)(param_2 + 0x68),uRam0000000003d3a4b8);
      uStack_88 = uStack_70;
      uStack_90 = uStack_78;
      uStack_80 = uStack_68;
      while (uVar23 = /*System.Collections.Generic.List.Enumerator<DefinitionID>$$MoveNext*/ func_0x01f66780(&uStack_90,uRam0000000003d32418), uVar15 = uStack_80,
            iVar6 = iStack_98, (uVar23 & 1) != 0) {
        if (*(long *)(param_1 + 0x68) == 0) {
          func_0x00f78af4();
          goto code_r0x014ee418;
        }
        uVar23 = /*System.Collections.Generic.List<DefinitionID>$$Contains*/ func_0x023c6130(*(long *)(param_1 + 0x68),uStack_80,uRam0000000003d3a4b0);
        if ((uVar23 & 1) == 0) {
          if (*(long *)(param_1 + 0x68) == 0) {
            func_0x00f78af4();
            goto code_r0x014ee418;
          }
          /*System.Collections.Generic.List<DefinitionID>$$Add*/ func_0x023c5e00(*(long *)(param_1 + 0x68),uVar15,uRam0000000003d3a4a8);
        }
      }
      iVar17 = iStack_98 + 1;
      aiStack_a8[0] = 0x737;
      iStack_98 = iVar17;
      /*System.Collections.Generic.List.Enumerator<DefinitionID>$$Dispose*/ func_0x01f6677c(&uStack_90,uRam0000000003d32410);
      if ((iVar17 != 0) && (aiStack_a8[iVar6] == 0x737)) {
        iVar17 = iVar6;
        iStack_98 = iVar6;
      }
    } while (*(long *)(param_2 + 0x70) == 0);
    /*System.Collections.Generic.List<DefinitionID>$$GetEnumerator*/ func_0x023c68bc(&uStack_78,*(long *)(param_2 + 0x70),uRam0000000003d3a4b8);
    uStack_88 = uStack_70;
    uStack_90 = uStack_78;
    uStack_80 = uStack_68;
    while (uVar23 = /*System.Collections.Generic.List.Enumerator<DefinitionID>$$MoveNext*/ func_0x01f66780(&uStack_90,uRam0000000003d32418), uVar15 = uStack_80,
          (uVar23 & 1) != 0) {
      if (*(long *)(param_1 + 0x70) == 0) {
        func_0x00f78af4();
        goto code_r0x014ee418;
      }
      uVar23 = /*System.Collections.Generic.List<DefinitionID>$$Contains*/ func_0x023c6130(*(long *)(param_1 + 0x70),uStack_80,uRam0000000003d3a4b0);
      if ((uVar23 & 1) == 0) {
        if (*(long *)(param_1 + 0x70) == 0) {
          func_0x00f78af4();
          goto code_r0x014ee418;
        }
        /*System.Collections.Generic.List<DefinitionID>$$Add*/ func_0x023c5e00(*(long *)(param_1 + 0x70),uVar15,uRam0000000003d3a4a8);
      }
    }
    aiStack_a8[iVar17] = 0x784;
    iVar17 = iStack_98;
    iVar6 = iStack_98 + 1;
    iStack_98 = iVar6;
    /*System.Collections.Generic.List.Enumerator<DefinitionID>$$Dispose*/ func_0x01f6677c(&uStack_90,uRam0000000003d32410);
    if ((iVar6 != 0) && (aiStack_a8[iVar17] == 0x784)) {
      iVar6 = iVar17;
      iStack_98 = iVar17;
    }
  } while (*(long *)(param_2 + 0x78) == 0);
  /*System.Collections.Generic.List<DefinitionID>$$GetEnumerator*/ func_0x023c68bc(&uStack_78,*(long *)(param_2 + 0x78),uRam0000000003d3a4b8);
  uStack_88 = uStack_70;
  uStack_90 = uStack_78;
  uStack_80 = uStack_68;
  while( true ) {
    uVar23 = /*System.Collections.Generic.List.Enumerator<DefinitionID>$$MoveNext*/ func_0x01f66780(&uStack_90,uRam0000000003d32418);
    uVar15 = uStack_80;
    if ((uVar23 & 1) == 0) {
      aiStack_a8[iVar6] = 0x7d1;
      iStack_98 = iStack_98 + 1;
      /*System.Collections.Generic.List.Enumerator<DefinitionID>$$Dispose*/ func_0x01f6677c(&uStack_90,uRam0000000003d32410);
      /*Atlas.Stats.DailyChallengeManager$$MergeDailyChallenges*/ func_0x015762c0(param_1,param_2,0);
      return;
    }
    if (*(long *)(param_1 + 0x78) == 0) break;
    uVar23 = /*System.Collections.Generic.List<DefinitionID>$$Contains*/ func_0x023c6130(*(long *)(param_1 + 0x78),uStack_80,uRam0000000003d3a4b0);
    if ((uVar23 & 1) == 0) {
      if (*(long *)(param_1 + 0x78) == 0) {
        func_0x00f78af4();
code_r0x014ee418:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x14ee41c);
        (*pcVar4)();
      }
      /*System.Collections.Generic.List<DefinitionID>$$Add*/ func_0x023c5e00(*(long *)(param_1 + 0x78),uVar15,uRam0000000003d3a4a8);
    }
  }
  func_0x00f78af4();
  goto code_r0x014ee418;
code_r0x014edac4:
  if ((long)(int)*(uint *)(lVar9 + 0x18) <= (long)uVar23) {
    lVar9 = *(long *)(param_2 + 0x38);
    if (lVar9 != 0) {
      uVar23 = 0;
      goto code_r0x014edc40;
    }
    goto LAB_014ee0a8;
  }
  if (*(uint *)(lVar9 + 0x18) <= uVar23) {
    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
  }
  lVar10 = *(long *)(param_1 + 0x118);
  if (lVar10 == 0) goto LAB_014ee0a8;
  uVar20 = 0;
  lVar9 = *(long *)(lVar9 + 0x10) + uVar23 * 0x10;
  uVar15 = *(undefined8 *)(lVar9 + 0x20);
  uVar18 = *(undefined8 *)(lVar9 + 0x28);
  lVar9 = 0x20;
  while ((int)uVar20 < (int)*(uint *)(lVar10 + 0x18)) {
    if (*(uint *)(lVar10 + 0x18) <= uVar20) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0x10) + lVar9);
    if (lVar10 == 0) goto LAB_014ee0a8;
    iVar6 = /*System.String$$Equals*/ func_0x029caa48(lVar10,uVar15,5,0);
    if (iVar6 != 0) {
      uVar12 = /*System.String$$Contains*/ func_0x029cd7a4(lVar10,/*STR('League_Character_')*/ uRam0000000003d6f3b8,0);
      uVar7 = uVar5;
      if ((((uVar12 & 1) == 0) &&
          (uVar12 = /*System.String$$Contains*/ func_0x029cd7a4(lVar10,/*STR('L_OD')*/ uRam0000000003d6f200,0), (uVar12 & 1) == 0)) &&
         (uVar12 = /*System.String$$Contains*/ func_0x029cd7a4(lVar10,/*STR('L_LPD')*/ uRam0000000003d6f1f8,0), (uVar12 & 1) == 0)) {
        uVar7 = /*System.String$$Contains*/ func_0x029cd7a4(lVar10,/*STR('L_CSD')*/ uRam0000000003d6f1e0,0);
        uVar7 = uVar7 & uVar5 & 1;
      }
      if (uVar7 == 0) goto code_r0x014edbf4;
      if (*(long *)(param_1 + 0x118) == 0) goto LAB_014ee0a8;
      /*System.Collections.Generic.List<SaveData.KeyValueString>$$set_Item*/ func_0x0258f0a8(*(long *)(param_1 + 0x118),uVar20,uVar15,uVar18,uRam0000000003d3d930);
      goto code_r0x014edbf4;
    }
    uVar20 = uVar20 + 1;
    lVar10 = *(long *)(param_1 + 0x118);
    lVar9 = lVar9 + 0x10;
    if (lVar10 == 0) goto LAB_014ee0a8;
  }
  /*System.Collections.Generic.List<SaveData.KeyValueString>$$Add*/ func_0x0258f404(lVar10,uVar15,uVar18,uRam0000000003d3d918);
code_r0x014edbf4:
  uVar23 = uVar23 + 1;
  lVar9 = *(long *)(param_2 + 0x118);
  if (lVar9 == 0) goto LAB_014ee0a8;
  goto code_r0x014edac4;
code_r0x014edc40:
  if ((long)(int)*(uint *)(lVar9 + 0x18) <= (long)uVar23) {
    lVar9 = *(long *)(param_2 + 0x50);
    if (lVar9 != 0) {
      uVar23 = 0;
      goto code_r0x014edd34;
    }
    goto LAB_014ee0a8;
  }
  if (*(uint *)(lVar9 + 0x18) <= uVar23) {
    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
  }
  lVar10 = *(long *)(param_1 + 0x38);
  if (lVar10 == 0) goto LAB_014ee0a8;
  lVar22 = 0;
  uVar12 = 0;
  lVar9 = *(long *)(lVar9 + 0x10) + uVar23 * 0x10;
  uVar15 = *(undefined8 *)(lVar9 + 0x20);
  uVar13 = *(ulong *)(lVar9 + 0x28);
  while ((long)uVar12 < (long)(int)*(uint *)(lVar10 + 0x18)) {
    if (*(uint *)(lVar10 + 0x18) <= uVar12) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar9 = *(long *)(lVar10 + 0x10) + lVar22;
    uVar18 = *(undefined8 *)(lVar9 + 0x20);
    uVar1 = *(ulong *)(lVar9 + 0x28);
    iVar6 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar15,uVar18,0);
    if (iVar6 != 0) {
      if (*(long *)(param_1 + 0x38) == 0) goto LAB_014ee0a8;
      /*System.Collections.Generic.List<SaveData.UnlockedData>$$set_Item*/ func_0x02591b78(*(long *)(param_1 + 0x38),uVar12,uVar18,uVar1 & (uVar13 | 0xffffffffffffff00),
                      uRam0000000003d3d970);
      goto code_r0x014edd10;
    }
    uVar12 = uVar12 + 1;
    lVar10 = *(long *)(param_1 + 0x38);
    lVar22 = lVar22 + 0x10;
    if (lVar10 == 0) goto LAB_014ee0a8;
  }
  /*System.Collections.Generic.List<SaveData.UnlockedData>$$Add*/ func_0x02591ed4(lVar10,uVar15,uVar13,uRam0000000003d3d940);
code_r0x014edd10:
  uVar23 = uVar23 + 1;
  lVar9 = *(long *)(param_2 + 0x38);
  if (lVar9 == 0) goto LAB_014ee0a8;
  goto code_r0x014edc40;
code_r0x014edd34:
  if ((long)(int)*(uint *)(lVar9 + 0x18) <= (long)uVar23) {
    lVar9 = *(long *)(param_2 + 0x58);
    if (lVar9 != 0) {
      uVar23 = 0;
      goto code_r0x014edfb0;
    }
    goto LAB_014ee0a8;
  }
  if (*(uint *)(lVar9 + 0x18) <= uVar23) {
    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
  }
  lVar10 = *(long *)(param_1 + 0x50);
  if (lVar10 == 0) goto LAB_014ee0a8;
  lVar22 = 0;
  uVar12 = 0;
  lVar9 = *(long *)(lVar9 + 0x10) + uVar23 * 0x18;
  uVar15 = *(undefined8 *)(lVar9 + 0x20);
  uVar18 = *(undefined8 *)(lVar9 + 0x28);
  uVar24 = *(undefined8 *)(lVar9 + 0x30);
  while ((long)uVar12 < (long)(int)*(uint *)(lVar10 + 0x18)) {
    if (*(uint *)(lVar10 + 0x18) <= uVar12) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar9 = *(long *)(lVar10 + 0x10) + lVar22;
    uVar19 = *(undefined8 *)(lVar9 + 0x20);
    uVar2 = *(undefined4 *)(lVar9 + 0x2c);
    uVar14 = *(undefined8 *)(lVar9 + 0x30);
    iVar6 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar15,uVar19,0);
    if (iVar6 != 0) {
      lVar9 = *(long *)(param_1 + 0x50);
      if (lVar9 == 0) goto LAB_014ee0a8;
      uVar5 = (uint)uVar12;
      if (*(uint *)(lVar9 + 0x18) <= uVar5) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar10 = *(long *)(param_2 + 0x50);
      if (lVar10 == 0) goto LAB_014ee0a8;
      uVar8 = *(undefined4 *)(*(long *)(lVar9 + 0x10) + lVar22 + 0x28);
      if (*(uint *)(lVar10 + 0x18) <= uVar23) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      uVar3 = *(undefined4 *)(*(long *)(lVar10 + 0x10) + uVar23 * 0x18 + 0x28);
      if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar8 = /*System.Math$$Max*/ func_0x02b01f4c(uVar8,uVar3,0);
      lVar9 = *(long *)(param_1 + 0x50);
      if (lVar9 == 0) goto LAB_014ee0a8;
      if (*(uint *)(lVar9 + 0x18) <= uVar5) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      iVar6 = /*System.String$$op_Inequality*/ func_0x029bd9d4(*(undefined8 *)(*(long *)(lVar9 + 0x10) + lVar22 + 0x30),
                              **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      if (iVar6 == 0) {
code_r0x014edf34:
        iVar6 = /*System.String$$op_Inequality*/ func_0x029bd9d4(uVar24,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
        uVar15 = uVar24;
        if (iVar6 == 0) {
          uVar15 = uVar14;
        }
      }
      else {
        lVar9 = *(long *)(param_1 + 0x50);
        if (lVar9 == 0) goto LAB_014ee0a8;
        lVar10 = lVar9;
        if (*(uint *)(lVar9 + 0x18) <= uVar5) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          lVar10 = *(long *)(param_1 + 0x50);
          if (lVar10 == 0) goto LAB_014ee0a8;
        }
        uVar15 = *(undefined8 *)(*(long *)(lVar9 + 0x10) + lVar22 + 0x30);
        if (*(uint *)(lVar10 + 0x18) <= uVar5) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        uVar13 = /*System.String$$op_Inequality*/ func_0x029bd9d4(uVar15,*(undefined8 *)(*(long *)(lVar10 + 0x10) + lVar22 + 0x20),0)
        ;
        uVar15 = uVar14;
        if ((uVar13 & 1) == 0) goto code_r0x014edf34;
      }
      if (*(long *)(param_1 + 0x50) == 0) goto LAB_014ee0a8;
      uStack_70 = CONCAT44(uVar2,uVar8);
      uStack_78 = uVar19;
      uStack_68 = uVar15;
      /*System.Collections.Generic.List<SaveData.CharacterProgression>$$set_Item*/ func_0x02584130(*(long *)(param_1 + 0x50),uVar12,&uStack_78,uRam0000000003d3d878);
      goto code_r0x014edf8c;
    }
    uVar12 = uVar12 + 1;
    lVar10 = *(long *)(param_1 + 0x50);
    lVar22 = lVar22 + 0x18;
    if (lVar10 == 0) goto LAB_014ee0a8;
  }
  uStack_78 = uVar15;
  uStack_70 = uVar18;
  uStack_68 = uVar24;
  /*System.Collections.Generic.List<SaveData.CharacterProgression>$$Add*/ func_0x025844b8(lVar10,&uStack_78,uRam0000000003d3d858);
code_r0x014edf8c:
  uVar23 = uVar23 + 1;
  lVar9 = *(long *)(param_2 + 0x50);
  if (lVar9 == 0) goto LAB_014ee0a8;
  goto code_r0x014edd34;
code_r0x014edfb0:
  if ((long)(int)*(uint *)(lVar9 + 0x18) <= (long)uVar23) goto code_r0x014ee0ac;
  if (*(uint *)(lVar9 + 0x18) <= uVar23) {
    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
  }
  lVar10 = *(long *)(param_1 + 0x58);
  if (lVar10 == 0) goto LAB_014ee0a8;
  lVar22 = 0;
  uVar12 = 0;
  lVar9 = *(long *)(lVar9 + 0x10) + uVar23 * 0x10;
  uVar15 = *(undefined8 *)(lVar9 + 0x20);
  uVar13 = *(ulong *)(lVar9 + 0x28);
  while ((long)uVar12 < (long)(int)*(uint *)(lVar10 + 0x18)) {
    if (*(uint *)(lVar10 + 0x18) <= uVar12) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar9 = *(long *)(lVar10 + 0x10) + lVar22;
    uVar18 = *(undefined8 *)(lVar9 + 0x20);
    uVar1 = *(ulong *)(lVar9 + 0x28);
    iVar6 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar15,uVar18,0);
    if (iVar6 != 0) {
      if (*(long *)(param_1 + 0x58) == 0) goto LAB_014ee0a8;
      /*System.Collections.Generic.List<SaveData.EventProgression>$$set_Item*/ func_0x02589b08(*(long *)(param_1 + 0x58),uVar12,uVar18,
                      uVar1 & 0xffffffffffff00ff | uVar13 & 0xff |
                      (ulong)((uint)uVar1 | (uint)uVar13) & 0xff00,uRam0000000003d3d8e0);
      goto code_r0x014ee098;
    }
    uVar12 = uVar12 + 1;
    lVar10 = *(long *)(param_1 + 0x58);
    lVar22 = lVar22 + 0x10;
    if (lVar10 == 0) goto LAB_014ee0a8;
  }
  /*System.Collections.Generic.List<SaveData.EventProgression>$$Add*/ func_0x02589e64(lVar10,uVar15,uVar13,uRam0000000003d3d8c0);
code_r0x014ee098:
  uVar23 = uVar23 + 1;
  lVar9 = *(long *)(param_2 + 0x58);
  if (lVar9 == 0) goto LAB_014ee0a8;
  goto code_r0x014edfb0;
}



// ============================================================
// RVA: 0x14ee530 | Atlas.Save.SaveManager.DeserializeSaveBuffer
// ============================================================

long * Atlas_Save_SaveManager__DeserializeSaveBuffer(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  
  if ((bRam0000000003eb4c52 & 1) == 0) {
    func_0x00f78a20(0x3d20108);
    func_0x00f78a20(0x3d246d0);
    bRam0000000003eb4c52 = 1;
  }
  plVar2 = *(long **)(param_2 + 8);
  if (plVar2 == (long *)0x0) {
    func_0x00f78af4();
  }
  else {
    lVar3 = (**(code **)(*plVar2 + 0x1d8))(plVar2,*(undefined8 *)(*plVar2 + 0x1e0));
    if (lVar3 < 1) {
      if ((bRam0000000003eb4c43 & 1) == 0) {
        func_0x00f78a20(0x3d246d0);
        bRam0000000003eb4c43 = 1;
      }
      plVar2 = (long *)func_0x00f78aec(/*Atlas.Save.SaveData_TypeInfo*/ lRam0000000003d246d0);
      Atlas_Save_SaveData___ctor();
      Atlas_Save_SaveManager__UpdateSaveDataToLatestVersion(param_1,plVar2);
      return plVar2;
    }
    plVar2 = *(long **)(param_2 + 8);
    if (plVar2 == (long *)0x0) {
      func_0x00f78af4();
      goto code_r0x014ee6b4;
    }
    (**(code **)(*plVar2 + 0x1f8))(plVar2,0,*(undefined8 *)(*plVar2 + 0x200));
    lVar3 = func_0x00f78aec(/*System.Runtime.Serialization.Formatters.Binary.BinaryFormatter_TypeInfo*/ uRam0000000003d20108);
    /*System.Runtime.Serialization.Formatters.Binary.BinaryFormatter$$.ctor*/ func_0x0293b1a8(lVar3,0);
    if (lVar3 == 0) {
      func_0x00f78af4();
      goto code_r0x014ee6b4;
    }
    plVar2 = (long *)/*System.Runtime.Serialization.Formatters.Binary.BinaryFormatter$$Deserialize*/ func_0x0293b254(lVar3,*(undefined8 *)(param_2 + 8),0);
    if (plVar2 == (long *)0x0) {
      return (long *)0x0;
    }
    if ((*(byte *)(/*Atlas.Save.SaveData_TypeInfo*/ lRam0000000003d246d0 + 300) <= *(byte *)(*plVar2 + 300)) &&
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(/*Atlas.Save.SaveData_TypeInfo*/ lRam0000000003d246d0 + 300) * 8 + -8)
        == /*Atlas.Save.SaveData_TypeInfo*/ lRam0000000003d246d0)) {
      return plVar2;
    }
  }
  func_0x00f78e5c();
code_r0x014ee6b4:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x14ee6b8);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x14ee6cc | Atlas.Save.SaveManager.RegisterMapPlayed
// ============================================================

/* WARNING: Possible PIC construction at 0x01447978: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01447bfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0144797c) */
/* WARNING: Removing unreachable block (ram,0x01447b34) */
/* WARNING: Removing unreachable block (ram,0x01447b7c) */
/* WARNING: Removing unreachable block (ram,0x01447ba8) */
/* WARNING: Removing unreachable block (ram,0x01447c00) */
/* WARNING: Type propagation algorithm not settling */

ulong Atlas_Save_SaveManager__RegisterMapPlayed(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  code *pcVar3;
  undefined1 *puVar4;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  ulong uVar10;
  int iVar9;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long extraout_x1;
  long lVar14;
  long lVar15;
  long lVar16;
  long unaff_x22;
  float fVar17;
  ulong unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar18 [16];
  long alStack_110 [4];
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  undefined1 *puVar5;
  
  lVar16 = 0x3eb4000;
  if ((bRam0000000003eb4c54 & 1) == 0) {
    func_0x00f78a20(0x3d572d8);
    func_0x00f78a20(0x3d3a4a8);
    func_0x00f78a20(0x3d3a4b0);
    func_0x00f78a20(0x3d3a4c8);
    bRam0000000003eb4c54 = 1;
  }
  lVar15 = *(long *)(param_1 + 0xf0);
  if (lVar15 == 0) {
LAB_014ee804:
    func_0x00f78af4();
  }
  else if (*(uint *)(param_1 + 0xf8) < *(uint *)(lVar15 + 0x18)) {
    lVar15 = *(long *)(lVar15 + (ulong)*(uint *)(param_1 + 0xf8) * 8 + 0x20);
    if (((lVar15 != 0) && (*(long *)(param_1 + 0x78) != 0)) &&
       (lVar11 = *(long *)(*(long *)(param_1 + 0x78) + 0x10), lVar11 != 0)) {
      lVar16 = *(long *)(lVar15 + 0x60);
      lVar15 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar11,param_2,uRam0000000003d572d8);
      if (lVar15 != 0) {
        uStack_38 = *(undefined8 *)(lVar15 + 0x50);
        iVar9 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_38,0);
        if (iVar9 != 0) {
          param_2 = *(long *)(lVar15 + 0x50);
        }
        unaff_x22 = lVar15;
        if (lVar16 != 0) {
          uVar12 = /*System.Collections.Generic.List<DefinitionID>$$Contains*/ func_0x023c6130(lVar16,param_2,uRam0000000003d3a4b0);
          if ((uVar12 & 1) != 0) {
            return uVar12;
          }
          /*System.Collections.Generic.List<DefinitionID>$$Add*/ func_0x023c5e00(lVar16,param_2,uRam0000000003d3a4a8);
          *(undefined1 *)(param_1 + 0x110) = 1;
          if (*(long *)(param_1 + 0x88) != 0) {
            uVar12 = /*Atlas.Stats.AchievementManager$$OnMapPlayed*/ func_0x014475d4(*(long *)(param_1 + 0x88),*(undefined4 *)(lVar16 + 0x18),0);
            return uVar12;
          }
        }
      }
    }
    goto LAB_014ee804;
  }
  uVar13 = func_0x00f78b24();
  auVar18 = func_0x00f78ac0(uVar13,0);
  lVar15 = auVar18._0_8_;
  puStack_48 = &Atlas_Save_SaveManager__RegisterLoadoutPlayed;
  /*Atlas.Save.SaveManager$$RegisterCharacterPlayed*/ func_0x014ee844(lVar15,*auVar18._8_8_);
  uVar13 = auVar18._8_8_[1];
  if ((bRam0000000003eb4c56 & 1) == 0) {
    func_0x00f78a20(0x3d3a4a8);
    func_0x00f78a20(0x3d3a4b0);
    func_0x00f78a20(0x3d3a4c8);
    bRam0000000003eb4c56 = 1;
  }
  lVar11 = *(long *)(lVar15 + 0xf0);
  if (lVar11 == 0) {
code_r0x014eea24:
    func_0x00f78af4();
  }
  else if (*(uint *)(lVar15 + 0xf8) < *(uint *)(lVar11 + 0x18)) {
    lVar11 = *(long *)(lVar11 + (ulong)*(uint *)(lVar15 + 0xf8) * 8 + 0x20);
    if ((lVar11 != 0) && (lVar11 = *(long *)(lVar11 + 0x70), lVar11 != 0)) {
      uVar12 = /*System.Collections.Generic.List<DefinitionID>$$Contains*/ func_0x023c6130(lVar11,uVar13,uRam0000000003d3a4b0);
      if ((uVar12 & 1) != 0) {
        return uVar12;
      }
      /*System.Collections.Generic.List<DefinitionID>$$Add*/ func_0x023c5e00(lVar11,uVar13,uRam0000000003d3a4a8);
      *(undefined1 *)(lVar15 + 0x110) = 1;
      lVar15 = *(long *)(lVar15 + 0x88);
      if (lVar15 != 0) {
        uVar1 = *(undefined4 *)(lVar11 + 0x18);
        if ((bRam0000000003eb471a & 1) == 0) {
          func_0x00f78a20(0x3d68a98,uVar1,0);
          bRam0000000003eb471a = 1;
        }
        fVar17 = (float)/*Atlas.Stats.StatCondition$$GetPercentageComplete*/ func_0x0150471c(uVar1,0xc,3,0);
        auVar18._8_8_ = /*STR('Achievement_42')*/ uRam0000000003d68a98;
        auVar18._0_8_ = lVar15;
        puVar2 = auStack_40;
        puVar4 = (undefined1 *)register0x00000008;
        do {
          puVar5 = puVar2;
          lVar11 = auVar18._8_8_;
          lVar15 = auVar18._0_8_;
          *(undefined8 *)(puVar5 + -0x40) = unaff_d9;
          *(ulong *)(puVar5 + -0x38) = unaff_d8;
          *(long *)(puVar5 + -0x30) = unaff_x22;
          *(long *)(puVar5 + -0x28) = lVar16;
          *(long *)(puVar5 + -0x20) = param_2;
          *(long *)(puVar5 + -0x18) = param_1;
          *(undefined1 **)(puVar5 + -0x10) = puVar4 + -0x10;
          *(undefined **)(puVar5 + -8) = puStack_48;
          unaff_d8 = (ulong)(uint)fVar17;
          lVar16 = 0x3eb4000;
          if ((bRam0000000003eb4717 & 1) == 0) {
            func_0x00f78a20(0x3d2fe08);
            func_0x00f78a20(0x3d2fe18);
            bRam0000000003eb4717 = 1;
          }
          *(undefined4 *)(puVar5 + -0x44) = 0;
          if (*(long *)(lVar15 + 0x60) != 0) {
            uVar12 = /*System.Collections.Generic.Dictionary<string, float>$$TryGetValue*/ func_0x01ee246c(*(long *)(lVar15 + 0x60),lVar11,puVar5 + -0x44,
                                     uRam0000000003d2fe08);
            bVar6 = true;
            bVar7 = false;
            if ((int)uVar12 != 0) {
              bVar6 = false;
              bVar7 = true;
              if (!NAN(*(float *)(puVar5 + -0x44)) && !NAN(fVar17)) {
                bVar6 = *(float *)(puVar5 + -0x44) < fVar17;
                bVar7 = false;
              }
            }
            if (bVar6 == bVar7) {
              return uVar12;
            }
            if (*(long *)(lVar15 + 0x60) != 0) {
              lVar16 = 0x3d2fe18;
              /*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(fVar17,*(long *)(lVar15 + 0x60),lVar11,uRam0000000003d2fe18);
              if (*(long *)(lVar15 + 0x58) != 0) {
                uVar12 = /*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(fVar17,*(long *)(lVar15 + 0x58),lVar11,uRam0000000003d2fe18
                                        );
                return uVar12;
              }
            }
          }
          puStack_48 = &Atlas_Stats_AchievementManager__UnlockAchievement;
          auVar18 = func_0x00f78af4();
          fVar17 = 100.0;
          puVar2 = puVar5 + -0x50;
          param_1 = lVar11;
          param_2 = lVar15;
          puVar4 = puVar5;
        } while( true );
      }
    }
    goto code_r0x014eea24;
  }
  uVar13 = func_0x00f78b24();
  auVar18 = func_0x00f78ac0(uVar13,0);
  lVar15 = auVar18._8_8_;
  lVar16 = auVar18._0_8_;
  if ((bRam0000000003eb4c55 & 1) == 0) {
    func_0x00f78a20(0x3d3a4a8);
    func_0x00f78a20(0x3d3a4b0);
    bRam0000000003eb4c55 = 1;
  }
  lVar11 = *(long *)(lVar16 + 0xf0);
  if (lVar11 != 0) {
    if (*(uint *)(lVar11 + 0x18) <= *(uint *)(lVar16 + 0xf8)) goto code_r0x014eeb24;
    lVar11 = *(long *)(lVar11 + (ulong)*(uint *)(lVar16 + 0xf8) * 8 + 0x20);
    if ((lVar11 != 0) && (lVar11 = *(long *)(lVar11 + 0x78), lVar11 != 0)) {
      uVar12 = /*System.Collections.Generic.List<DefinitionID>$$Contains*/ func_0x023c6130(lVar11,lVar15,uRam0000000003d3a4b0);
      if ((uVar12 & 1) != 0) {
        return uVar12;
      }
      /*System.Collections.Generic.List<DefinitionID>$$Add*/ func_0x023c5e00(lVar11,lVar15,uRam0000000003d3a4a8);
      *(undefined1 *)(lVar16 + 0x110) = 1;
      if ((*(long *)(lVar16 + 0x78) != 0) && (*(long *)(lVar16 + 0x88) != 0)) {
        lVar14 = *(long *)(*(long *)(lVar16 + 0x78) + 0x10);
        lVar16 = lVar15;
        if ((bRam0000000003eb471c & 1) == 0) {
          func_0x00f78a20(0x3d57270);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb471c = 1;
        }
        if (lVar14 != 0) {
          lVar15 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar14,lVar15,uRam0000000003d57270);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar16 = 0;
          uVar12 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar15,0);
          if ((int)uVar12 == 0) {
            return uVar12;
          }
          if (lVar15 != 0) {
            uVar12 = /*Atlas.Definitions.CharacterDefinition$$IsSkin*/ func_0x0154112c(lVar15,0);
            if ((int)uVar12 == 0) {
              return uVar12;
            }
            goto code_r0x014479b0;
          }
        }
        lVar14 = lVar16;
        func_0x00f78af4();
        lVar11 = extraout_x1;
code_r0x014479b0:
        if ((bRam0000000003eb4727 & 1) == 0) {
          func_0x00f78a20(0x3d32410);
          func_0x00f78a20(0x3d32418);
          func_0x00f78a20(0x3d32420);
          func_0x00f78a20(0x3d574f0);
          func_0x00f78a20(0x3d3a4b8);
          bRam0000000003eb4727 = 1;
        }
        alStack_110[1] = 0;
        alStack_110[2] = 0;
        alStack_110[3] = 0;
        alStack_110[0] = 0;
        if (lVar11 == 0) {
          func_0x00f78af4();
code_r0x01447ae4:
          func_0x00f78af4();
        }
        else {
          /*System.Collections.Generic.List<DefinitionID>$$GetEnumerator*/ func_0x023c68bc(alStack_110 + 1,lVar11,uRam0000000003d3a4b8);
          uVar12 = 0;
          while( true ) {
            uVar10 = /*System.Collections.Generic.List.Enumerator<DefinitionID>$$MoveNext*/ func_0x01f66780(alStack_110 + 1,uRam0000000003d32418);
            if ((uVar10 & 1) == 0) {
              /*System.Collections.Generic.List.Enumerator<DefinitionID>$$Dispose*/ func_0x01f6677c(alStack_110 + 1,uRam0000000003d32410);
              return uVar12;
            }
            if (lVar14 == 0) break;
            uVar10 = /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar14,alStack_110[3],alStack_110,uRam0000000003d574f0);
            if ((uVar10 & 1) != 0) {
              if (alStack_110[0] == 0) goto code_r0x01447ae4;
              uVar8 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(alStack_110[0] + 0x70),0);
              uVar12 = (ulong)((int)uVar12 + (uVar8 ^ 1));
            }
          }
          func_0x00f78af4();
        }
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1447aec);
        (*pcVar3)();
      }
    }
  }
  func_0x00f78af4();
code_r0x014eeb24:
  uVar13 = func_0x00f78b24();
  uVar12 = func_0x00f78ac0(uVar13,0);
  return uVar12;
}



// ============================================================
// RVA: 0x14ee814 | Atlas.Save.SaveManager.RegisterLoadoutPlayed
// ============================================================

/* WARNING: Possible PIC construction at 0x01447978: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01447bfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0144797c) */
/* WARNING: Removing unreachable block (ram,0x01447b34) */
/* WARNING: Removing unreachable block (ram,0x01447b7c) */
/* WARNING: Removing unreachable block (ram,0x01447ba8) */
/* WARNING: Removing unreachable block (ram,0x01447c00) */
/* WARNING: Type propagation algorithm not settling */

ulong Atlas_Save_SaveManager__RegisterLoadoutPlayed(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  undefined1 *puVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long extraout_x1;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  float fVar15;
  ulong unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  long alStack_d0 [4];
  
  auVar17._8_8_ = unaff_x19;
  auVar17._0_8_ = unaff_x20;
  /*Atlas.Save.SaveManager$$RegisterCharacterPlayed*/ func_0x014ee844(param_1,*param_2);
  uVar11 = param_2[1];
  if ((bRam0000000003eb4c56 & 1) == 0) {
    func_0x00f78a20(0x3d3a4a8);
    func_0x00f78a20(0x3d3a4b0);
    func_0x00f78a20(0x3d3a4c8);
    bRam0000000003eb4c56 = 1;
  }
  lVar13 = *(long *)(param_1 + 0xf0);
  if (lVar13 == 0) {
code_r0x014eea24:
    func_0x00f78af4();
  }
  else if (*(uint *)(param_1 + 0xf8) < *(uint *)(lVar13 + 0x18)) {
    lVar13 = *(long *)(lVar13 + (ulong)*(uint *)(param_1 + 0xf8) * 8 + 0x20);
    if ((lVar13 != 0) && (lVar13 = *(long *)(lVar13 + 0x70), lVar13 != 0)) {
      uVar9 = /*System.Collections.Generic.List<DefinitionID>$$Contains*/ func_0x023c6130(lVar13,uVar11,uRam0000000003d3a4b0);
      if ((uVar9 & 1) != 0) {
        return uVar9;
      }
      /*System.Collections.Generic.List<DefinitionID>$$Add*/ func_0x023c5e00(lVar13,uVar11,uRam0000000003d3a4a8);
      *(undefined1 *)(param_1 + 0x110) = 1;
      lVar10 = *(long *)(param_1 + 0x88);
      if (lVar10 != 0) {
        uVar1 = *(undefined4 *)(lVar13 + 0x18);
        if ((bRam0000000003eb471a & 1) == 0) {
          func_0x00f78a20(0x3d68a98,uVar1,0);
          bRam0000000003eb471a = 1;
        }
        fVar15 = (float)/*Atlas.Stats.StatCondition$$GetPercentageComplete*/ func_0x0150471c(uVar1,0xc,3,0);
        auVar16._8_8_ = /*STR('Achievement_42')*/ uRam0000000003d68a98;
        auVar16._0_8_ = lVar10;
        puVar4 = (undefined1 *)register0x00000008;
        do {
          auVar2 = auVar16;
          uVar11 = auVar2._8_8_;
          lVar13 = auVar2._0_8_;
          *(undefined8 *)(puVar4 + -0x40) = unaff_d9;
          *(ulong *)(puVar4 + -0x38) = unaff_d8;
          *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
          *(undefined8 *)(puVar4 + -0x28) = unaff_x21;
          *(undefined1 (*) [16])(puVar4 + -0x20) = auVar17;
          *(undefined1 **)(puVar4 + -0x10) = unaff_x29;
          *(undefined **)(puVar4 + -8) = unaff_x30;
          unaff_x29 = puVar4 + -0x10;
          unaff_d8 = (ulong)(uint)fVar15;
          unaff_x21 = 0x3eb4000;
          if ((bRam0000000003eb4717 & 1) == 0) {
            func_0x00f78a20(0x3d2fe08);
            func_0x00f78a20(0x3d2fe18);
            bRam0000000003eb4717 = 1;
          }
          *(undefined4 *)(puVar4 + -0x44) = 0;
          if (*(long *)(lVar13 + 0x60) != 0) {
            uVar9 = /*System.Collections.Generic.Dictionary<string, float>$$TryGetValue*/ func_0x01ee246c(*(long *)(lVar13 + 0x60),uVar11,puVar4 + -0x44,
                                    uRam0000000003d2fe08);
            bVar5 = true;
            bVar6 = false;
            if ((int)uVar9 != 0) {
              bVar5 = false;
              bVar6 = true;
              if (!NAN(*(float *)(puVar4 + -0x44)) && !NAN(fVar15)) {
                bVar5 = *(float *)(puVar4 + -0x44) < fVar15;
                bVar6 = false;
              }
            }
            if (bVar5 == bVar6) {
              return uVar9;
            }
            if (*(long *)(lVar13 + 0x60) != 0) {
              unaff_x21 = 0x3d2fe18;
              /*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(fVar15,*(long *)(lVar13 + 0x60),uVar11,uRam0000000003d2fe18);
              if (*(long *)(lVar13 + 0x58) != 0) {
                uVar9 = /*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(fVar15,*(long *)(lVar13 + 0x58),uVar11,uRam0000000003d2fe18)
                ;
                return uVar9;
              }
            }
          }
          unaff_x30 = &Atlas_Stats_AchievementManager__UnlockAchievement;
          auVar16 = func_0x00f78af4();
          fVar15 = 100.0;
          puVar4 = puVar4 + -0x50;
          auVar17 = auVar2;
        } while( true );
      }
    }
    goto code_r0x014eea24;
  }
  uVar11 = func_0x00f78b24();
  auVar17 = func_0x00f78ac0(uVar11,0);
  lVar10 = auVar17._8_8_;
  lVar13 = auVar17._0_8_;
  if ((bRam0000000003eb4c55 & 1) == 0) {
    func_0x00f78a20(0x3d3a4a8);
    func_0x00f78a20(0x3d3a4b0);
    bRam0000000003eb4c55 = 1;
  }
  lVar14 = *(long *)(lVar13 + 0xf0);
  if (lVar14 != 0) {
    if (*(uint *)(lVar14 + 0x18) <= *(uint *)(lVar13 + 0xf8)) goto code_r0x014eeb24;
    lVar14 = *(long *)(lVar14 + (ulong)*(uint *)(lVar13 + 0xf8) * 8 + 0x20);
    if ((lVar14 != 0) && (lVar14 = *(long *)(lVar14 + 0x78), lVar14 != 0)) {
      uVar9 = /*System.Collections.Generic.List<DefinitionID>$$Contains*/ func_0x023c6130(lVar14,lVar10,uRam0000000003d3a4b0);
      if ((uVar9 & 1) != 0) {
        return uVar9;
      }
      /*System.Collections.Generic.List<DefinitionID>$$Add*/ func_0x023c5e00(lVar14,lVar10,uRam0000000003d3a4a8);
      *(undefined1 *)(lVar13 + 0x110) = 1;
      if ((*(long *)(lVar13 + 0x78) != 0) && (*(long *)(lVar13 + 0x88) != 0)) {
        lVar12 = *(long *)(*(long *)(lVar13 + 0x78) + 0x10);
        lVar13 = lVar10;
        if ((bRam0000000003eb471c & 1) == 0) {
          func_0x00f78a20(0x3d57270);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb471c = 1;
        }
        if (lVar12 != 0) {
          lVar10 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar12,lVar10,uRam0000000003d57270);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar13 = 0;
          uVar9 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar10,0);
          if ((int)uVar9 == 0) {
            return uVar9;
          }
          if (lVar10 != 0) {
            uVar9 = /*Atlas.Definitions.CharacterDefinition$$IsSkin*/ func_0x0154112c(lVar10,0);
            if ((int)uVar9 == 0) {
              return uVar9;
            }
            goto code_r0x014479b0;
          }
        }
        lVar12 = lVar13;
        func_0x00f78af4();
        lVar14 = extraout_x1;
code_r0x014479b0:
        if ((bRam0000000003eb4727 & 1) == 0) {
          func_0x00f78a20(0x3d32410);
          func_0x00f78a20(0x3d32418);
          func_0x00f78a20(0x3d32420);
          func_0x00f78a20(0x3d574f0);
          func_0x00f78a20(0x3d3a4b8);
          bRam0000000003eb4727 = 1;
        }
        alStack_d0[1] = 0;
        alStack_d0[2] = 0;
        alStack_d0[3] = 0;
        alStack_d0[0] = 0;
        if (lVar14 == 0) {
          func_0x00f78af4();
code_r0x01447ae4:
          func_0x00f78af4();
        }
        else {
          /*System.Collections.Generic.List<DefinitionID>$$GetEnumerator*/ func_0x023c68bc(alStack_d0 + 1,lVar14,uRam0000000003d3a4b8);
          uVar9 = 0;
          while( true ) {
            uVar8 = /*System.Collections.Generic.List.Enumerator<DefinitionID>$$MoveNext*/ func_0x01f66780(alStack_d0 + 1,uRam0000000003d32418);
            if ((uVar8 & 1) == 0) {
              /*System.Collections.Generic.List.Enumerator<DefinitionID>$$Dispose*/ func_0x01f6677c(alStack_d0 + 1,uRam0000000003d32410);
              return uVar9;
            }
            if (lVar12 == 0) break;
            uVar8 = /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar12,alStack_d0[3],alStack_d0,uRam0000000003d574f0);
            if ((uVar8 & 1) != 0) {
              if (alStack_d0[0] == 0) goto code_r0x01447ae4;
              uVar7 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(alStack_d0[0] + 0x70),0);
              uVar9 = (ulong)((int)uVar9 + (uVar7 ^ 1));
            }
          }
          func_0x00f78af4();
        }
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1447aec);
        (*pcVar3)();
      }
    }
  }
  func_0x00f78af4();
code_r0x014eeb24:
  uVar11 = func_0x00f78b24();
  uVar9 = func_0x00f78ac0(uVar11,0);
  return uVar9;
}



// ============================================================
// RVA: 0x14ee844 | Atlas.Save.SaveManager.RegisterCharacterPlayed
// ============================================================

/* WARNING: Possible PIC construction at 0x01447828: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01447978: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01447bfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0144797c) */
/* WARNING: Removing unreachable block (ram,0x01447b34) */
/* WARNING: Removing unreachable block (ram,0x01447b7c) */
/* WARNING: Removing unreachable block (ram,0x01447ba8) */
/* WARNING: Removing unreachable block (ram,0x0144782c) */
/* WARNING: Removing unreachable block (ram,0x01447c00) */

ulong Atlas_Save_SaveManager__RegisterCharacterPlayed(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  ulong *puVar4;
  ulong *puVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  int extraout_w1;
  long extraout_x1;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long unaff_x22;
  undefined8 uVar18;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined1 *puVar19;
  undefined *puVar20;
  float fVar21;
  ulong unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  ulong uStack_a0;
  long lStack_98;
  undefined8 in_stack_ffffffffffffff70;
  long lStack_88;
  ulong uStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  
  auVar25._8_8_ = param_1;
  auVar25._0_8_ = param_2;
  puVar19 = &stack0xfffffffffffffff0;
  lVar17 = 0x3eb4000;
  if ((bRam0000000003eb4c57 & 1) == 0) {
    func_0x00f78a20(0x3d3a4a8);
    func_0x00f78a20(0x3d3a4b0);
    bRam0000000003eb4c57 = 1;
  }
  lVar15 = *(long *)(param_1 + 0xf0);
  if (lVar15 == 0) goto LAB_014ee92c;
  lVar13 = lVar17;
  if (*(uint *)(lVar15 + 0x18) <= *(uint *)(param_1 + 0xf8)) {
LAB_014ee930:
    uVar18 = func_0x00f78b24();
    auVar24 = func_0x00f78ac0(uVar18,0);
    uVar12 = auVar24._8_8_;
    lVar17 = auVar24._0_8_;
    puVar20 = &Atlas_Save_SaveManager__RegisterKartPlayed;
    lVar15 = 0x3eb4000;
    if ((bRam0000000003eb4c56 & 1) == 0) {
      func_0x00f78a20(0x3d3a4a8);
      func_0x00f78a20(0x3d3a4b0);
      func_0x00f78a20(0x3d3a4c8);
      bRam0000000003eb4c56 = 1;
    }
    lVar11 = *(long *)(lVar17 + 0xf0);
    if (lVar11 == 0) {
code_r0x014eea24:
      func_0x00f78af4();
    }
    else if (*(uint *)(lVar17 + 0xf8) < *(uint *)(lVar11 + 0x18)) {
      lVar11 = *(long *)(lVar11 + (ulong)*(uint *)(lVar17 + 0xf8) * 8 + 0x20);
      if ((lVar11 != 0) && (lVar15 = *(long *)(lVar11 + 0x70), lVar15 != 0)) {
        uVar9 = /*System.Collections.Generic.List<DefinitionID>$$Contains*/ func_0x023c6130(lVar15,uVar12,uRam0000000003d3a4b0);
        if ((uVar9 & 1) != 0) {
          return uVar9;
        }
        /*System.Collections.Generic.List<DefinitionID>$$Add*/ func_0x023c5e00(lVar15,uVar12,uRam0000000003d3a4a8);
        *(undefined1 *)(lVar17 + 0x110) = 1;
        lVar11 = *(long *)(lVar17 + 0x88);
        if (lVar11 != 0) {
          uVar1 = *(undefined4 *)(lVar15 + 0x18);
          if ((bRam0000000003eb471a & 1) == 0) {
            func_0x00f78a20(0x3d68a98,uVar1,0);
            bRam0000000003eb471a = 1;
          }
          fVar21 = (float)/*Atlas.Stats.StatCondition$$GetPercentageComplete*/ func_0x0150471c(uVar1,0xc,3,0);
          auVar22._8_8_ = /*STR('Achievement_42')*/ uRam0000000003d68a98;
          auVar22._0_8_ = lVar11;
          puVar4 = (ulong *)&stack0xffffffffffffffd0;
code_r0x014473ec:
          do {
            auVar24 = auVar22;
            uVar18 = auVar24._8_8_;
            lVar17 = auVar24._0_8_;
            *(undefined8 *)((long)puVar4 + -0x40) = unaff_d9;
            *(ulong *)((long)puVar4 + -0x38) = unaff_d8;
            *(long *)((long)puVar4 + -0x30) = unaff_x22;
            *(long *)((long)puVar4 + -0x28) = lVar13;
            *(undefined1 (*) [16])((long)puVar4 + -0x20) = auVar25;
            *(undefined1 **)((long)puVar4 + -0x10) = puVar19;
            *(undefined **)((long)puVar4 + -8) = puVar20;
            puVar19 = (undefined1 *)((long)puVar4 + -0x10);
            unaff_d8 = (ulong)(uint)fVar21;
            lVar13 = 0x3eb4000;
            if ((bRam0000000003eb4717 & 1) == 0) {
              func_0x00f78a20(0x3d2fe08);
              func_0x00f78a20(0x3d2fe18);
              bRam0000000003eb4717 = 1;
            }
            *(undefined4 *)((long)puVar4 + -0x44) = 0;
            if (*(long *)(lVar17 + 0x60) != 0) {
              uVar12 = /*System.Collections.Generic.Dictionary<string, float>$$TryGetValue*/ func_0x01ee246c(*(long *)(lVar17 + 0x60),uVar18,
                                       (undefined1 *)((long)puVar4 + -0x44),uRam0000000003d2fe08);
              bVar6 = true;
              bVar7 = false;
              if ((int)uVar12 != 0) {
                bVar6 = false;
                bVar7 = true;
                if (!NAN(*(float *)((long)puVar4 + -0x44)) && !NAN(fVar21)) {
                  bVar6 = *(float *)((long)puVar4 + -0x44) < fVar21;
                  bVar7 = false;
                }
              }
              if (bVar6 == bVar7) {
                return uVar12;
              }
              if (*(long *)(lVar17 + 0x60) != 0) {
                lVar13 = 0x3d2fe18;
                /*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(fVar21,*(long *)(lVar17 + 0x60),uVar18,uRam0000000003d2fe18);
                if (*(long *)(lVar17 + 0x58) != 0) {
                  uVar12 = /*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(fVar21,*(long *)(lVar17 + 0x58),uVar18,
                                           uRam0000000003d2fe18);
                  return uVar12;
                }
              }
            }
            puVar20 = &Atlas_Stats_AchievementManager__UnlockAchievement;
            auVar22 = func_0x00f78af4();
            fVar21 = 100.0;
            puVar4 = (ulong *)((long)puVar4 + -0x50);
            auVar25 = auVar24;
          } while( true );
        }
      }
      goto code_r0x014eea24;
    }
    uVar18 = func_0x00f78b24();
    auVar25 = func_0x00f78ac0(uVar18,0);
    lVar11 = auVar25._8_8_;
    lVar13 = auVar25._0_8_;
    puStack_68 = &Atlas_Save_SaveManager__RegisterPlayerCharacterWin;
    lStack_88 = lVar15;
    puStack_70 = &stack0xffffffffffffffc0;
    if ((bRam0000000003eb4c55 & 1) == 0) {
      uStack_80 = uVar12;
      lStack_78 = lVar17;
      func_0x00f78a20(0x3d3a4a8);
      func_0x00f78a20(0x3d3a4b0);
      auVar24._8_8_ = uStack_80;
      auVar24._0_8_ = lStack_78;
      bRam0000000003eb4c55 = 1;
    }
    uStack_80 = auVar24._8_8_;
    lStack_78 = auVar24._0_8_;
    lVar17 = *(long *)(lVar13 + 0xf0);
    if (lVar17 != 0) {
      if (*(uint *)(lVar17 + 0x18) <= *(uint *)(lVar13 + 0xf8)) goto code_r0x014eeb24;
      lVar17 = *(long *)(lVar17 + (ulong)*(uint *)(lVar13 + 0xf8) * 8 + 0x20);
      if ((lVar17 != 0) && (lVar17 = *(long *)(lVar17 + 0x78), lVar17 != 0)) {
        uVar12 = /*System.Collections.Generic.List<DefinitionID>$$Contains*/ func_0x023c6130(lVar17,lVar11,uRam0000000003d3a4b0);
        if ((uVar12 & 1) != 0) {
          return uVar12;
        }
        /*System.Collections.Generic.List<DefinitionID>$$Add*/ func_0x023c5e00(lVar17,lVar11,uRam0000000003d3a4a8);
        auVar2._8_8_ = uStack_80;
        auVar2._0_8_ = lStack_78;
        auVar24._8_8_ = uStack_80;
        auVar24._0_8_ = lStack_78;
        *(undefined1 *)(lVar13 + 0x110) = 1;
        if ((*(long *)(lVar13 + 0x78) != 0) &&
           (auVar23._8_8_ = lVar17, auVar23._0_8_ = *(long *)(lVar13 + 0x88), auVar24 = auVar2,
           *(long *)(lVar13 + 0x88) != 0)) {
          lVar14 = *(long *)(*(long *)(lVar13 + 0x78) + 0x10);
          puVar5 = (ulong *)&stack0xffffffffffffffa0;
          lVar15 = lStack_78;
          uVar12 = uStack_80;
          lVar16 = lStack_88;
          puVar19 = puStack_70;
          puVar20 = puStack_68;
          goto code_r0x014478b8;
        }
      }
    }
    uStack_80 = auVar24._8_8_;
    lStack_78 = auVar24._0_8_;
    func_0x00f78af4();
    auVar24._8_8_ = uStack_80;
    auVar24._0_8_ = lStack_78;
code_r0x014eeb24:
    uStack_80 = auVar24._8_8_;
    lStack_78 = auVar24._0_8_;
    uVar18 = func_0x00f78b24();
    uVar12 = func_0x00f78ac0(uVar18,0);
    return uVar12;
  }
  lVar15 = *(long *)(lVar15 + (ulong)*(uint *)(param_1 + 0xf8) * 8 + 0x20);
  if ((lVar15 == 0) || (lVar17 = *(long *)(lVar15 + 0x68), lVar17 == 0)) {
LAB_014ee92c:
    func_0x00f78af4();
    lVar13 = lVar17;
    goto LAB_014ee930;
  }
  uVar12 = /*System.Collections.Generic.List<DefinitionID>$$Contains*/ func_0x023c6130(lVar17,param_2,uRam0000000003d3a4b0);
  if ((uVar12 & 1) != 0) {
    return uVar12;
  }
  /*System.Collections.Generic.List<DefinitionID>$$Add*/ func_0x023c5e00(lVar17,param_2,uRam0000000003d3a4a8);
  *(undefined1 *)(param_1 + 0x110) = 1;
  if ((*(long *)(param_1 + 0x78) == 0) || (lVar15 = *(long *)(param_1 + 0x88), lVar15 == 0))
  goto LAB_014ee92c;
  lVar13 = *(long *)(*(long *)(param_1 + 0x78) + 0x10);
  lVar14 = 0;
  puVar5 = &uStack_a0;
  puVar19 = &stack0xfffffffffffffff0;
  uVar12 = 0x3eb4000;
  lVar11 = lVar13;
  if ((bRam0000000003eb471b & 1) == 0) {
    func_0x00f78a20(0x3d32410);
    func_0x00f78a20(0x3d32418);
    func_0x00f78a20(0x3d32420);
    func_0x00f78a20(0x3d574f0);
    func_0x00f78a20(0x3d3a4b0);
    func_0x00f78a20(0x3d3a4b8);
    func_0x00f78a20(0x3d68a90);
    bRam0000000003eb471b = 1;
  }
  lStack_88 = 0;
  if (lVar17 != 0) {
    unaff_x23 = (undefined8 *)0x3d68a90;
    /*System.Collections.Generic.List<DefinitionID>$$GetEnumerator*/ func_0x023c68bc(&uStack_a0,lVar17,uRam0000000003d3a4b8);
    uVar12 = 0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    puStack_70 = (undefined1 *)in_stack_ffffffffffffff70;
code_r0x0144779c:
    do {
      uVar9 = /*System.Collections.Generic.List.Enumerator<DefinitionID>$$MoveNext*/ func_0x01f66780(&uStack_80,uRam0000000003d32418);
      if ((uVar9 & 1) == 0) goto code_r0x01447800;
      if (lVar13 == 0) {
        func_0x00f78af4();
        goto code_r0x01447860;
      }
      uVar9 = /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar13,puStack_70,&lStack_88,uRam0000000003d574f0);
      if ((uVar9 & 1) != 0) {
        if (lStack_88 == 0) {
          func_0x00f78af4();
code_r0x01447860:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1447864);
          (*pcVar3)();
        }
        uVar9 = /*Atlas.Definitions.CharacterDefinition$$IsSkin*/ func_0x0154112c(lStack_88,0);
        if ((uVar9 & 1) != 0) {
          if (lStack_88 == 0) {
            func_0x00f78af4();
            goto code_r0x01447860;
          }
          uVar9 = /*System.Collections.Generic.List<DefinitionID>$$Contains*/ func_0x023c6130(lVar17,*(undefined8 *)(lStack_88 + 0x70),uRam0000000003d3a4b0);
          if ((uVar9 & 1) != 0) goto code_r0x0144779c;
        }
        uVar12 = (ulong)((int)uVar12 + 1);
      }
    } while( true );
  }
  func_0x00f78af4();
  lVar16 = lVar13;
  if (extraout_w1 == 1) {
    plVar10 = (long *)___cxa_begin_catch();
    lVar16 = *plVar10;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<DefinitionID>$$Dispose*/ func_0x01f6677c(&uStack_80,*unaff_x24);
    lVar13 = 0;
    if (lVar16 == 0) goto code_r0x0144780c;
    func_0x00f78ac0(lVar16,0);
  }
  auVar23 = __Unwind_Resume();
  unaff_x22 = 0;
  puVar20 = &Atlas_Stats_AchievementManager__OnPlayerCharacterWinRegistered;
code_r0x014478b8:
  *(undefined8 **)((long)puVar5 + -0x40) = unaff_x24;
  *(undefined8 **)((long)puVar5 + -0x38) = unaff_x23;
  *(long *)((long)puVar5 + -0x30) = unaff_x22;
  *(long *)((long)puVar5 + -0x28) = lVar16;
  *(ulong *)((long)puVar5 + -0x20) = uVar12;
  *(long *)((long)puVar5 + -0x18) = lVar15;
  *(undefined1 **)((long)puVar5 + -0x10) = puVar19;
  *(undefined **)((long)puVar5 + -8) = puVar20;
  uVar18 = 0x3eb4000;
  lVar17 = lVar11;
  if ((bRam0000000003eb471c & 1) == 0) {
    func_0x00f78a20(0x3d57270);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb471c = 1;
  }
  if (lVar14 != 0) {
    uVar18 = 0x3d23000;
    lVar11 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar14,lVar11,uRam0000000003d57270);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar17 = 0;
    uVar12 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar11,0);
    if ((int)uVar12 == 0) {
      return uVar12;
    }
    if (lVar11 != 0) {
      uVar12 = /*Atlas.Definitions.CharacterDefinition$$IsSkin*/ func_0x0154112c(lVar11,0);
      if ((int)uVar12 == 0) {
        return uVar12;
      }
      puVar20 = &UNK_0144797c;
      lVar15 = auVar23._8_8_;
      lVar17 = lVar14;
      goto code_r0x014479b0;
    }
  }
  puVar20 = &Atlas_Stats_AchievementManager__GetNumberOfSkinWins;
  func_0x00f78af4();
  lVar15 = extraout_x1;
code_r0x014479b0:
  *(undefined8 **)((long)puVar5 + -0x80) = unaff_x24;
  *(undefined8 *)((long)puVar5 + -0x78) = uVar18;
  *(long *)((long)puVar5 + -0x70) = lVar11;
  *(long *)((long)puVar5 + -0x68) = auVar23._8_8_;
  *(long *)((long)puVar5 + -0x60) = lVar14;
  *(long *)((long)puVar5 + -0x58) = auVar23._0_8_;
  *(undefined1 **)((long)puVar5 + -0x50) = (undefined1 *)((long)puVar5 + -0x10);
  *(undefined **)((long)puVar5 + -0x48) = puVar20;
  if ((bRam0000000003eb4727 & 1) == 0) {
    func_0x00f78a20(0x3d32410);
    func_0x00f78a20(0x3d32418);
    func_0x00f78a20(0x3d32420);
    func_0x00f78a20(0x3d574f0);
    func_0x00f78a20(0x3d3a4b8);
    bRam0000000003eb4727 = 1;
  }
  *(undefined8 *)((long)puVar5 + -0x98) = 0;
  *(undefined8 *)((long)puVar5 + -0x90) = 0;
  *(undefined8 *)((long)puVar5 + -0x88) = 0;
  *(undefined8 *)((long)puVar5 + -0xa0) = 0;
  if (lVar15 == 0) {
    func_0x00f78af4();
code_r0x01447ae4:
    func_0x00f78af4();
  }
  else {
    /*System.Collections.Generic.List<DefinitionID>$$GetEnumerator*/ func_0x023c68bc((undefined1 *)((long)puVar5 + -0x98),lVar15,uRam0000000003d3a4b8);
    uVar12 = 0;
    while( true ) {
      uVar9 = /*System.Collections.Generic.List.Enumerator<DefinitionID>$$MoveNext*/ func_0x01f66780((undefined1 *)((long)puVar5 + -0x98),uRam0000000003d32418);
      if ((uVar9 & 1) == 0) {
        /*System.Collections.Generic.List.Enumerator<DefinitionID>$$Dispose*/ func_0x01f6677c((undefined1 *)((long)puVar5 + -0x98),uRam0000000003d32410);
        return uVar12;
      }
      if (lVar17 == 0) break;
      uVar9 = /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar17,*(undefined8 *)((long)puVar5 + -0x88),
                              (undefined1 *)((long)puVar5 + -0xa0),uRam0000000003d574f0);
      if ((uVar9 & 1) != 0) {
        if (*(long *)((long)puVar5 + -0xa0) == 0) goto code_r0x01447ae4;
        uVar8 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(*(long *)((long)puVar5 + -0xa0) + 0x70),0);
        uVar12 = (ulong)((int)uVar12 + (uVar8 ^ 1));
      }
    }
    func_0x00f78af4();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1447aec);
  (*pcVar3)();
code_r0x01447800:
  /*System.Collections.Generic.List.Enumerator<DefinitionID>$$Dispose*/ func_0x01f6677c(&uStack_80,uRam0000000003d32410);
code_r0x0144780c:
  auVar25._8_8_ = lVar15;
  auVar25._0_8_ = uVar12;
  fVar21 = (float)/*Atlas.Stats.StatCondition$$GetPercentageComplete*/ func_0x0150471c(uVar12,0x14,3,0);
  auVar22._8_8_ = *unaff_x23;
  auVar22._0_8_ = lVar15;
  puVar20 = &UNK_0144782c;
  puVar4 = &uStack_a0;
  unaff_x22 = lVar17;
  goto code_r0x014473ec;
}



// ============================================================
// RVA: 0x14ee93c | Atlas.Save.SaveManager.RegisterKartPlayed
// ============================================================

/* WARNING: Possible PIC construction at 0x01447978: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01447bfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0144797c) */
/* WARNING: Removing unreachable block (ram,0x01447b34) */
/* WARNING: Removing unreachable block (ram,0x01447b7c) */
/* WARNING: Removing unreachable block (ram,0x01447ba8) */
/* WARNING: Removing unreachable block (ram,0x01447c00) */
/* WARNING: Type propagation algorithm not settling */

ulong Atlas_Save_SaveManager__RegisterKartPlayed(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  undefined1 *puVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long extraout_x1;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  float fVar15;
  ulong unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  long alStack_d0 [4];
  
  auVar17._8_8_ = unaff_x19;
  auVar17._0_8_ = unaff_x20;
  if ((bRam0000000003eb4c56 & 1) == 0) {
    func_0x00f78a20(0x3d3a4a8);
    func_0x00f78a20(0x3d3a4b0);
    func_0x00f78a20(0x3d3a4c8);
    bRam0000000003eb4c56 = 1;
  }
  lVar13 = *(long *)(param_1 + 0xf0);
  if (lVar13 == 0) {
LAB_014eea24:
    func_0x00f78af4();
  }
  else if (*(uint *)(param_1 + 0xf8) < *(uint *)(lVar13 + 0x18)) {
    lVar13 = *(long *)(lVar13 + (ulong)*(uint *)(param_1 + 0xf8) * 8 + 0x20);
    if ((lVar13 != 0) && (lVar13 = *(long *)(lVar13 + 0x70), lVar13 != 0)) {
      uVar9 = /*System.Collections.Generic.List<DefinitionID>$$Contains*/ func_0x023c6130(lVar13,param_2,uRam0000000003d3a4b0);
      if ((uVar9 & 1) != 0) {
        return uVar9;
      }
      /*System.Collections.Generic.List<DefinitionID>$$Add*/ func_0x023c5e00(lVar13,param_2,uRam0000000003d3a4a8);
      *(undefined1 *)(param_1 + 0x110) = 1;
      lVar10 = *(long *)(param_1 + 0x88);
      if (lVar10 != 0) {
        uVar1 = *(undefined4 *)(lVar13 + 0x18);
        if ((bRam0000000003eb471a & 1) == 0) {
          func_0x00f78a20(0x3d68a98,uVar1,0);
          bRam0000000003eb471a = 1;
        }
        fVar15 = (float)/*Atlas.Stats.StatCondition$$GetPercentageComplete*/ func_0x0150471c(uVar1,0xc,3,0);
        auVar16._8_8_ = /*STR('Achievement_42')*/ uRam0000000003d68a98;
        auVar16._0_8_ = lVar10;
        puVar4 = (undefined1 *)register0x00000008;
        do {
          auVar2 = auVar16;
          uVar11 = auVar2._8_8_;
          lVar13 = auVar2._0_8_;
          *(undefined8 *)(puVar4 + -0x40) = unaff_d9;
          *(ulong *)(puVar4 + -0x38) = unaff_d8;
          *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
          *(undefined8 *)(puVar4 + -0x28) = unaff_x21;
          *(undefined1 (*) [16])(puVar4 + -0x20) = auVar17;
          *(undefined1 **)(puVar4 + -0x10) = unaff_x29;
          *(undefined **)(puVar4 + -8) = unaff_x30;
          unaff_x29 = puVar4 + -0x10;
          unaff_d8 = (ulong)(uint)fVar15;
          unaff_x21 = 0x3eb4000;
          if ((bRam0000000003eb4717 & 1) == 0) {
            func_0x00f78a20(0x3d2fe08);
            func_0x00f78a20(0x3d2fe18);
            bRam0000000003eb4717 = 1;
          }
          *(undefined4 *)(puVar4 + -0x44) = 0;
          if (*(long *)(lVar13 + 0x60) != 0) {
            uVar9 = /*System.Collections.Generic.Dictionary<string, float>$$TryGetValue*/ func_0x01ee246c(*(long *)(lVar13 + 0x60),uVar11,puVar4 + -0x44,
                                    uRam0000000003d2fe08);
            bVar5 = true;
            bVar6 = false;
            if ((int)uVar9 != 0) {
              bVar5 = false;
              bVar6 = true;
              if (!NAN(*(float *)(puVar4 + -0x44)) && !NAN(fVar15)) {
                bVar5 = *(float *)(puVar4 + -0x44) < fVar15;
                bVar6 = false;
              }
            }
            if (bVar5 == bVar6) {
              return uVar9;
            }
            if (*(long *)(lVar13 + 0x60) != 0) {
              unaff_x21 = 0x3d2fe18;
              /*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(fVar15,*(long *)(lVar13 + 0x60),uVar11,uRam0000000003d2fe18);
              if (*(long *)(lVar13 + 0x58) != 0) {
                uVar9 = /*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(fVar15,*(long *)(lVar13 + 0x58),uVar11,uRam0000000003d2fe18)
                ;
                return uVar9;
              }
            }
          }
          unaff_x30 = &Atlas_Stats_AchievementManager__UnlockAchievement;
          auVar16 = func_0x00f78af4();
          fVar15 = 100.0;
          puVar4 = puVar4 + -0x50;
          auVar17 = auVar2;
        } while( true );
      }
    }
    goto LAB_014eea24;
  }
  uVar11 = func_0x00f78b24();
  auVar17 = func_0x00f78ac0(uVar11,0);
  lVar10 = auVar17._8_8_;
  lVar13 = auVar17._0_8_;
  if ((bRam0000000003eb4c55 & 1) == 0) {
    func_0x00f78a20(0x3d3a4a8);
    func_0x00f78a20(0x3d3a4b0);
    bRam0000000003eb4c55 = 1;
  }
  lVar14 = *(long *)(lVar13 + 0xf0);
  if (lVar14 != 0) {
    if (*(uint *)(lVar14 + 0x18) <= *(uint *)(lVar13 + 0xf8)) goto code_r0x014eeb24;
    lVar14 = *(long *)(lVar14 + (ulong)*(uint *)(lVar13 + 0xf8) * 8 + 0x20);
    if ((lVar14 != 0) && (lVar14 = *(long *)(lVar14 + 0x78), lVar14 != 0)) {
      uVar9 = /*System.Collections.Generic.List<DefinitionID>$$Contains*/ func_0x023c6130(lVar14,lVar10,uRam0000000003d3a4b0);
      if ((uVar9 & 1) != 0) {
        return uVar9;
      }
      /*System.Collections.Generic.List<DefinitionID>$$Add*/ func_0x023c5e00(lVar14,lVar10,uRam0000000003d3a4a8);
      *(undefined1 *)(lVar13 + 0x110) = 1;
      if ((*(long *)(lVar13 + 0x78) != 0) && (*(long *)(lVar13 + 0x88) != 0)) {
        lVar12 = *(long *)(*(long *)(lVar13 + 0x78) + 0x10);
        lVar13 = lVar10;
        if ((bRam0000000003eb471c & 1) == 0) {
          func_0x00f78a20(0x3d57270);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb471c = 1;
        }
        if (lVar12 != 0) {
          lVar10 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar12,lVar10,uRam0000000003d57270);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar13 = 0;
          uVar9 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar10,0);
          if ((int)uVar9 == 0) {
            return uVar9;
          }
          if (lVar10 != 0) {
            uVar9 = /*Atlas.Definitions.CharacterDefinition$$IsSkin*/ func_0x0154112c(lVar10,0);
            if ((int)uVar9 == 0) {
              return uVar9;
            }
            goto code_r0x014479b0;
          }
        }
        lVar12 = lVar13;
        func_0x00f78af4();
        lVar14 = extraout_x1;
code_r0x014479b0:
        if ((bRam0000000003eb4727 & 1) == 0) {
          func_0x00f78a20(0x3d32410);
          func_0x00f78a20(0x3d32418);
          func_0x00f78a20(0x3d32420);
          func_0x00f78a20(0x3d574f0);
          func_0x00f78a20(0x3d3a4b8);
          bRam0000000003eb4727 = 1;
        }
        alStack_d0[1] = 0;
        alStack_d0[2] = 0;
        alStack_d0[3] = 0;
        alStack_d0[0] = 0;
        if (lVar14 == 0) {
          func_0x00f78af4();
code_r0x01447ae4:
          func_0x00f78af4();
        }
        else {
          /*System.Collections.Generic.List<DefinitionID>$$GetEnumerator*/ func_0x023c68bc(alStack_d0 + 1,lVar14,uRam0000000003d3a4b8);
          uVar9 = 0;
          while( true ) {
            uVar8 = /*System.Collections.Generic.List.Enumerator<DefinitionID>$$MoveNext*/ func_0x01f66780(alStack_d0 + 1,uRam0000000003d32418);
            if ((uVar8 & 1) == 0) {
              /*System.Collections.Generic.List.Enumerator<DefinitionID>$$Dispose*/ func_0x01f6677c(alStack_d0 + 1,uRam0000000003d32410);
              return uVar9;
            }
            if (lVar12 == 0) break;
            uVar8 = /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar12,alStack_d0[3],alStack_d0,uRam0000000003d574f0);
            if ((uVar8 & 1) != 0) {
              if (alStack_d0[0] == 0) goto code_r0x01447ae4;
              uVar7 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(alStack_d0[0] + 0x70),0);
              uVar9 = (ulong)((int)uVar9 + (uVar7 ^ 1));
            }
          }
          func_0x00f78af4();
        }
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1447aec);
        (*pcVar3)();
      }
    }
  }
  func_0x00f78af4();
code_r0x014eeb24:
  uVar11 = func_0x00f78b24();
  uVar9 = func_0x00f78ac0(uVar11,0);
  return uVar9;
}



// ============================================================
// RVA: 0x14eea34 | Atlas.Save.SaveManager.RegisterPlayerCharacterWin
// ============================================================

/* WARNING: Possible PIC construction at 0x01447978: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01447bfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0144797c) */
/* WARNING: Removing unreachable block (ram,0x01447b34) */
/* WARNING: Removing unreachable block (ram,0x01447b7c) */
/* WARNING: Removing unreachable block (ram,0x01447ba8) */
/* WARNING: Removing unreachable block (ram,0x01447c00) */
/* WARNING: Removing unreachable block (ram,0x014473ec) */
/* WARNING: Removing unreachable block (ram,0x0144741c) */
/* WARNING: Removing unreachable block (ram,0x0144743c) */
/* WARNING: Removing unreachable block (ram,0x01447448) */
/* WARNING: Removing unreachable block (ram,0x01447468) */
/* WARNING: Removing unreachable block (ram,0x0144746c) */
/* WARNING: Removing unreachable block (ram,0x01447470) */
/* WARNING: Removing unreachable block (ram,0x01447478) */
/* WARNING: Removing unreachable block (ram,0x014474c0) */
/* WARNING: Removing unreachable block (ram,0x01447498) */
/* WARNING: Removing unreachable block (ram,0x014474a8) */
/* WARNING: Type propagation algorithm not settling */

ulong Atlas_Save_SaveManager__RegisterPlayerCharacterWin(long param_1,long param_2)

{
  code *pcVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long extraout_x1;
  long lVar7;
  long lVar8;
  long lVar9;
  long alStack_a0 [4];
  
  if ((bRam0000000003eb4c55 & 1) == 0) {
    func_0x00f78a20(0x3d3a4a8);
    func_0x00f78a20(0x3d3a4b0);
    bRam0000000003eb4c55 = 1;
  }
  lVar9 = *(long *)(param_1 + 0xf0);
  if (lVar9 != 0) {
    if (*(uint *)(lVar9 + 0x18) <= *(uint *)(param_1 + 0xf8)) goto LAB_014eeb24;
    lVar9 = *(long *)(lVar9 + (ulong)*(uint *)(param_1 + 0xf8) * 8 + 0x20);
    if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x78), lVar9 != 0)) {
      uVar5 = /*System.Collections.Generic.List<DefinitionID>$$Contains*/ func_0x023c6130(lVar9,param_2,uRam0000000003d3a4b0);
      if ((uVar5 & 1) != 0) {
        return uVar5;
      }
      /*System.Collections.Generic.List<DefinitionID>$$Add*/ func_0x023c5e00(lVar9,param_2,uRam0000000003d3a4a8);
      *(undefined1 *)(param_1 + 0x110) = 1;
      if ((*(long *)(param_1 + 0x78) != 0) && (*(long *)(param_1 + 0x88) != 0)) {
        lVar8 = *(long *)(*(long *)(param_1 + 0x78) + 0x10);
        lVar7 = param_2;
        if ((bRam0000000003eb471c & 1) == 0) {
          func_0x00f78a20(0x3d57270);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb471c = 1;
        }
        if (lVar8 != 0) {
          lVar3 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar8,param_2,uRam0000000003d57270);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar7 = 0;
          uVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar3,0);
          if ((int)uVar5 == 0) {
            return uVar5;
          }
          if (lVar3 != 0) {
            uVar5 = /*Atlas.Definitions.CharacterDefinition$$IsSkin*/ func_0x0154112c(lVar3,0);
            if ((int)uVar5 == 0) {
              return uVar5;
            }
            goto code_r0x014479b0;
          }
        }
        lVar8 = lVar7;
        func_0x00f78af4();
        lVar9 = extraout_x1;
code_r0x014479b0:
        if ((bRam0000000003eb4727 & 1) == 0) {
          func_0x00f78a20(0x3d32410);
          func_0x00f78a20(0x3d32418);
          func_0x00f78a20(0x3d32420);
          func_0x00f78a20(0x3d574f0);
          func_0x00f78a20(0x3d3a4b8);
          bRam0000000003eb4727 = 1;
        }
        alStack_a0[1] = 0;
        alStack_a0[2] = 0;
        alStack_a0[3] = 0;
        alStack_a0[0] = 0;
        if (lVar9 == 0) {
          func_0x00f78af4();
code_r0x01447ae4:
          func_0x00f78af4();
        }
        else {
          /*System.Collections.Generic.List<DefinitionID>$$GetEnumerator*/ func_0x023c68bc(alStack_a0 + 1,lVar9,uRam0000000003d3a4b8);
          uVar5 = 0;
          while( true ) {
            uVar4 = /*System.Collections.Generic.List.Enumerator<DefinitionID>$$MoveNext*/ func_0x01f66780(alStack_a0 + 1,uRam0000000003d32418);
            if ((uVar4 & 1) == 0) {
              /*System.Collections.Generic.List.Enumerator<DefinitionID>$$Dispose*/ func_0x01f6677c(alStack_a0 + 1,uRam0000000003d32410);
              return uVar5;
            }
            if (lVar8 == 0) break;
            uVar4 = /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar8,alStack_a0[3],alStack_a0,uRam0000000003d574f0);
            if ((uVar4 & 1) != 0) {
              if (alStack_a0[0] == 0) goto code_r0x01447ae4;
              uVar2 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(alStack_a0[0] + 0x70),0);
              uVar5 = (ulong)((int)uVar5 + (uVar2 ^ 1));
            }
          }
          func_0x00f78af4();
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1447aec);
        (*pcVar1)();
      }
    }
  }
  func_0x00f78af4();
LAB_014eeb24:
  uVar6 = func_0x00f78b24();
  uVar5 = func_0x00f78ac0(uVar6,0);
  return uVar5;
}



// ============================================================
// RVA: 0x14eeb30 | Atlas.Save.SaveManager..ctor
// ============================================================

void Atlas_Save_SaveManager___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x14eeb38 | Atlas.Save.SaveManager..cctor
// ============================================================

long Atlas_Save_SaveManager___cctor(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  
  if ((bRam0000000003eb4c58 & 1) == 0) {
    func_0x00f78a20(0x3d246e0);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d25238);
    func_0x00f78a20(0x3d69c30);
    bRam0000000003eb4c58 = 1;
  }
  if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*System.TimeSpan$$FromSeconds*/ func_0x029f0a04(0x3ff0000000000000,0);
  **(undefined8 **)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xb8) = uVar1;
  plVar2 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,1);
  if (plVar2 == (long *)0x0) {
    func_0x00f78af4();
  }
  else {
    lVar3 = 0;
    if ((/*STR('Campaign_Prologue')*/ lRam0000000003d69c30 != 0) &&
       (lVar3 = func_0x00f78adc(/*STR('Campaign_Prologue')*/ lRam0000000003d69c30,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
    {
      uVar1 = func_0x00f78b14();
      goto code_r0x014eec44;
    }
    if ((int)plVar2[3] != 0) {
      plVar2[4] = /*STR('Campaign_Prologue')*/ lRam0000000003d69c30;
      *(long **)(*(long *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xb8) + 8) = plVar2;
      return lVar3;
    }
  }
  uVar1 = func_0x00f78b24();
code_r0x014eec44:
  lVar3 = func_0x00f78ac0(uVar1,0);
  return *(long *)(lVar3 + 0x18);
}



