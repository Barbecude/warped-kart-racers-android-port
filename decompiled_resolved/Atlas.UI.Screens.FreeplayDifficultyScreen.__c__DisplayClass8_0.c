// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.FreeplayDifficultyScreen.<>c__DisplayClass8_0

// ============================================================
// RVA: 0x154bfe4 | Atlas.UI.Screens.FreeplayDifficultyScreen.<>c__DisplayClass8_0..ctor
// ============================================================

void Atlas_UI_Screens_FreeplayDifficultyScreen___c__DisplayClass8_0___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x154bfec | Atlas.UI.Screens.FreeplayDifficultyScreen.<>c__DisplayClass8_0.<OnBeforeEnter>b__0
// ============================================================

undefined8 *
Atlas_UI_Screens_FreeplayDifficultyScreen___c__DisplayClass8_0___OnBeforeEnter_b__0
          (long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  code *pcVar15;
  long lVar16;
  undefined8 **ppuVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  ulong uStack_68;
  undefined8 *puStack_60;
  ulong *puStack_58;
  
  puVar6 = *(undefined8 **)(param_1 + 0x20);
  if (puVar6 == (undefined8 *)0x0) {
    auVar19 = func_0x00f78af4();
    puVar6 = auVar19._0_8_;
    puVar6[2] = *param_3;
    puVar6[4] = auVar19._8_8_;
    puVar6[5] = param_3;
    return puVar6;
  }
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar11 = (ulong)uVar2;
  puVar10 = *(ulong **)(param_1 + 0x10);
  if ((bRam0000000003eb50dd & 1) == 0) {
    func_0x00f78a20(0x3d41040,puVar10,uVar11,0);
    func_0x00f78a20(0x3d41048);
    bRam0000000003eb50dd = 1;
  }
  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar6,uRam0000000003d41048);
  if (((lVar9 != 0) && (*(long *)(lVar9 + 0x48) != 0)) &&
     (lVar9 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(lVar9 + 0x48),0), lVar9 != 0)) {
    if (*(uint *)(lVar9 + 0xd8) == uVar2) {
LAB_01586d04:
      lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(puVar6,uRam0000000003d41040);
      if (lVar9 != 0) {
        puVar6 = *(undefined8 **)(lVar9 + 0x18);
        if (puVar6 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        ppuVar17 = &puStack_60;
        puStack_60 = puVar6;
        puStack_58 = puVar10;
        lVar9 = puVar6[0xd];
        if (lVar9 == 0) {
          lVar16 = 1;
        }
        else {
          lVar16 = *(long *)(lVar9 + 0x18);
          if (lVar16 == 0) {
            return puVar6;
          }
          ppuVar17 = (undefined8 **)(lVar9 + 0x20);
        }
        lVar9 = 0;
        do {
          lVar12 = *(long *)((long)ppuVar17 + lVar9 * 8);
          pcVar15 = *(code **)(lVar12 + 0x10);
          plVar1 = *(long **)(lVar12 + 0x20);
          lVar12 = *(long *)(lVar12 + 0x28);
          if (*(short *)(lVar12 + 0x48) == -1) {
            func_0x00f78ad8(lVar12);
          }
          iVar4 = func_0x00f78a4c(lVar12);
          if (iVar4 == 0) {
            puVar10 = &uStack_68;
            if (plVar1 == (long *)0x0) goto code_r0x0154c3cc;
            if (((*(short *)(lVar12 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
               (puVar6[3] == 0)) goto code_r0x0154c3b4;
            iVar4 = func_0x00f78a44(lVar12);
            iVar5 = func_0x00f78ec0(lVar12);
            puVar10 = puStack_58;
            if (iVar4 == 0) {
              uVar3 = *(ushort *)(lVar12 + 0x48);
              if (iVar5 == 0) {
                lVar12 = *plVar1 + (ulong)uVar3 * 0x10;
                puVar7 = (undefined8 *)
                         (**(code **)(lVar12 + 0x138))
                                   (plVar1,puStack_58,*(undefined8 *)(lVar12 + 0x140));
                goto code_r0x0154c3d4;
              }
              lVar12 = func_0x00f78a48(lVar12);
              puVar10 = puStack_58;
              lVar13 = *plVar1;
              uVar11 = (ulong)*(ushort *)(lVar13 + 0x12a);
              if (uVar11 != 0) {
                piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == lVar12) {
                    puVar7 = (undefined8 *)
                             (lVar13 + (long)(int)(*piVar14 + (uint)uVar3) * 0x10 + 0x138);
                    goto code_r0x0154c4a8;
                  }
                  piVar14 = piVar14 + 4;
                  uVar11 = uVar11 - 1;
                } while (uVar11 != 0);
              }
              puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar12,(ulong)uVar3);
code_r0x0154c4a8:
              pcVar15 = (code *)*puVar7;
              puVar7 = (undefined8 *)puVar7[1];
            }
            else {
              if (iVar5 == 0) {
                uVar8 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
              }
              else {
                lVar13 = *plVar1;
                uVar11 = (ulong)*(ushort *)(lVar13 + 0x12a);
                if (uVar11 != 0) {
                  piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == *(long *)(lVar12 + 0x18)) {
                      lVar13 = lVar13 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar12 + 0x48)) *
                                        0x10 + 0x138;
                      goto code_r0x0154c478;
                    }
                    piVar14 = piVar14 + 4;
                    uVar11 = uVar11 - 1;
                  } while (uVar11 != 0);
                }
                lVar13 = func_0x00fac1f0(plVar1);
code_r0x0154c478:
                uVar8 = *(undefined8 *)(lVar13 + 8);
              }
              puVar7 = (undefined8 *)func_0x00f78acc(uVar8,lVar12);
              pcVar15 = (code *)*puVar7;
            }
            puVar7 = (undefined8 *)(*pcVar15)(plVar1,puVar10,puVar7);
          }
          else {
            puVar10 = puStack_58;
            if (*(char *)(lVar12 + 0x4a) == '\x01') {
code_r0x0154c3cc:
              puVar7 = (undefined8 *)(*pcVar15)(puVar10,lVar12);
            }
            else {
code_r0x0154c3b4:
              puVar7 = (undefined8 *)(*pcVar15)(plVar1,puStack_58,lVar12);
            }
          }
code_r0x0154c3d4:
          lVar9 = lVar9 + 1;
          if (lVar9 == lVar16) {
            return puVar7;
          }
        } while( true );
      }
    }
    else {
      lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar6,uRam0000000003d41048);
      if (((lVar9 != 0) && (*(long *)(lVar9 + 0x48) != 0)) &&
         (lVar9 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(lVar9 + 0x48),0), lVar9 != 0)) {
        *(uint *)(lVar9 + 0xd8) = uVar2;
        lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar6,uRam0000000003d41048);
        if ((lVar9 != 0) && (*(long *)(lVar9 + 0x48) != 0)) {
          /*Atlas.Save.SaveManager$$MarkSaveAsDirty*/ func_0x014eb72c(*(long *)(lVar9 + 0x48),0);
          goto LAB_01586d04;
        }
      }
    }
  }
  lVar9 = func_0x00f78af4();
  uStack_68 = uVar11;
  puStack_60 = puVar6;
  puStack_58 = puVar10;
  if ((bRam0000000003eb50de & 1) == 0) {
    func_0x00f78a20(0x3d2c6f0);
    func_0x00f78a20(0x3d1ef00);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d6c680);
    func_0x00f78a20(0x3d69c00);
    func_0x00f78a20(0x3d69c10);
    func_0x00f78a20(0x3d6c678);
    func_0x00f78a20(0x3d6c658);
    func_0x00f78a20(0x3d71920);
    func_0x00f78a20(0x3d6c648);
    func_0x00f78a20(0x3d69c28);
    func_0x00f78a20(0x3d6c660);
    func_0x00f78a20(0x3d69c20);
    func_0x00f78a20(0x3d6c670);
    func_0x00f78a20(0x3d6c668);
    func_0x00f78a20(0x3d6c650);
    bRam0000000003eb50de = 1;
  }
  lVar16 = func_0x00f78a34(/*Core.Definitions.DefinitionID[]_TypeInfo*/ uRam0000000003d1ef00,4);
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar8 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Event_Freeplay_1_1')*/ uRam0000000003d6c648,0);
  if (lVar16 != 0) {
    if (*(int *)(lVar16 + 0x18) != 0) {
      *(undefined8 *)(lVar16 + 0x20) = uVar8;
      uVar8 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Event_Freeplay_1_2')*/ uRam0000000003d6c650,0);
      if ((*(uint *)(lVar16 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar16 + 0x28) = uVar8;
        uVar8 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Event_Freeplay_1_3')*/ uRam0000000003d6c658,0);
        if (2 < *(uint *)(lVar16 + 0x18)) {
          *(undefined8 *)(lVar16 + 0x30) = uVar8;
          uVar8 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Event_Freeplay_1_4')*/ uRam0000000003d6c660,0);
          if ((*(uint *)(lVar16 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar16 + 0x38) = uVar8;
            *(long *)(lVar9 + 0x78) = lVar16;
            lVar16 = func_0x00f78a34(/*Core.Definitions.DefinitionID[]_TypeInfo*/ uRam0000000003d1ef00,4);
            uVar8 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Event_Freeplay_2_1')*/ uRam0000000003d6c668,0);
            if (lVar16 == 0) goto LAB_01587094;
            if (*(int *)(lVar16 + 0x18) != 0) {
              *(undefined8 *)(lVar16 + 0x20) = uVar8;
              uVar8 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Event_Freeplay_2_2')*/ uRam0000000003d6c670,0);
              if ((*(uint *)(lVar16 + 0x18) & 0xfffffffe) != 0) {
                *(undefined8 *)(lVar16 + 0x28) = uVar8;
                uVar8 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Event_Freeplay_2_3')*/ uRam0000000003d6c678,0);
                if (2 < *(uint *)(lVar16 + 0x18)) {
                  *(undefined8 *)(lVar16 + 0x30) = uVar8;
                  uVar8 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Event_Freeplay_2_4')*/ uRam0000000003d6c680,0);
                  if ((*(uint *)(lVar16 + 0x18) & 0xfffffffc) != 0) {
                    *(undefined8 *)(lVar16 + 0x38) = uVar8;
                    *(long *)(lVar9 + 0x80) = lVar16;
                    lVar16 = func_0x00f78a34(/*Core.Definitions.DefinitionID[]_TypeInfo*/ uRam0000000003d1ef00,4);
                    uVar8 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_Easy')*/ uRam0000000003d69c00,0);
                    if (lVar16 == 0) goto LAB_01587094;
                    if (*(int *)(lVar16 + 0x18) != 0) {
                      *(undefined8 *)(lVar16 + 0x20) = uVar8;
                      uVar8 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_Medium')*/ uRam0000000003d69c28,0);
                      if ((*(uint *)(lVar16 + 0x18) & 0xfffffffe) != 0) {
                        *(undefined8 *)(lVar16 + 0x28) = uVar8;
                        uVar8 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_Hard')*/ uRam0000000003d69c10,0);
                        if (2 < *(uint *)(lVar16 + 0x18)) {
                          *(undefined8 *)(lVar16 + 0x30) = uVar8;
                          uVar8 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_Legend')*/ uRam0000000003d69c20,0);
                          if ((*(uint *)(lVar16 + 0x18) & 0xfffffffc) != 0) {
                            *(undefined8 *)(lVar16 + 0x38) = uVar8;
                            uVar8 = /*STR('RaceGameContext')*/ uRam0000000003d71920;
                            *(long *)(lVar9 + 0x88) = lVar16;
                            *(undefined8 *)(lVar9 + 0x90) = uVar8;
                            if (lVar9 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                              puVar6 = (undefined8 *)
                                       (*(code *)**(undefined8 **)
                                                   (*(long *)(*(long *)(lRam0000000003d2c6f0 + 0x18)
                                                             + 0xc0) + 0x38))();
                              return puVar6;
                            }
                            auVar19 = func_0x00f78af4();
                            puVar7 = auVar19._8_8_;
                            puVar6 = auVar19._0_8_;
                            uVar18 = puVar7[1];
                            uVar8 = *puVar7;
                            puVar6[2] = puVar7[2];
                            puVar6[1] = uVar18;
                            *puVar6 = uVar8;
                            return puVar6;
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
    uVar8 = func_0x00f78b24();
    func_0x00f78ac0(uVar8,0);
  }
LAB_01587094:
  lVar9 = func_0x00f78af4();
  return *(undefined8 **)(lVar9 + 0x68);
}



