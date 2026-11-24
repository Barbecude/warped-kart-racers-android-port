// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.LeaguePromotionBehaviour

// ============================================================
// RVA: 0x1480430 | Atlas.UI.Screens.LeaguePromotionBehaviour.Setup
// ============================================================

/* WARNING: Possible PIC construction at 0x014806c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01480b04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014806e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0148070c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014808c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014806ec) */
/* WARNING: Removing unreachable block (ram,0x01480b08) */
/* WARNING: Removing unreachable block (ram,0x01480b10) */
/* WARNING: Removing unreachable block (ram,0x01480b1c) */
/* WARNING: Removing unreachable block (ram,0x014806c8) */
/* WARNING: Removing unreachable block (ram,0x014808c8) */
/* WARNING: Removing unreachable block (ram,0x01480710) */

void Atlas_UI_Screens_LeaguePromotionBehaviour__Setup
               (undefined1 param_1 [16],uint param_2,uint param_3,uint param_4,long param_5,
               long param_6,long param_7)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 *puVar5;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long extraout_x1;
  long extraout_x1_00;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long unaff_x23;
  long unaff_x24;
  long lVar15;
  undefined1 *puVar16;
  undefined *puVar17;
  uint uVar18;
  uint extraout_s0;
  ulong unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  ulong unaff_d11;
  undefined1 auVar19 [16];
  undefined1 auStack_70 [4];
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  undefined1 *puVar6;
  
  auVar4._8_8_ = param_5;
  auVar4._0_8_ = param_5;
  auVar3._8_8_ = param_5;
  auVar3._0_8_ = param_5;
  auVar19._8_8_ = param_7;
  auVar19._0_8_ = param_5;
  auVar2._8_8_ = param_7;
  auVar2._0_8_ = param_5;
  puVar6 = auStack_70;
  puVar5 = auStack_70;
  puVar16 = &stack0xfffffffffffffff0;
  uVar14 = 0x3eb4000;
  lVar11 = param_7;
  if ((bRam0000000003eb4906 & 1) == 0) {
    func_0x00f78a20(0x3d437d8);
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d22e58);
    func_0x00f78a20(0x3d684b0);
    func_0x00f78a20(0x3d6f150);
    func_0x00f78a20(0x3d6f140);
    func_0x00f78a20(0x3d6f138);
    func_0x00f78a20(0x3d6f168);
    func_0x00f78a20(0x3d6f160);
    func_0x00f78a20(0x3d684b8);
    bRam0000000003eb4906 = 1;
  }
  iStack_64 = 0;
  if ((param_7 == 0) || (*(long *)(param_7 + 0xe8) == 0)) {
LAB_01480980:
    func_0x00f78af4();
    lVar9 = unaff_x24;
  }
  else {
    lVar11 = 0;
    uVar8 = /*Atlas.League.LeagueManager$$GetNextLeague*/ func_0x015f44fc(*(long *)(param_7 + 0xe8),&iStack_64);
    if ((*(long *)(param_7 + 0xe8) == 0) ||
       ((lVar12 = *(long *)(*(long *)(param_7 + 0xe8) + 0x18), lVar12 == 0 ||
        (lVar12 = *(long *)(lVar12 + 0x30), lVar12 == 0)))) goto LAB_01480980;
    uVar18 = (uint)uVar8;
    uVar14 = uVar8;
    lVar9 = unaff_x24;
    if (uVar18 < *(uint *)(lVar12 + 0x18)) {
      lVar12 = *(long *)(lVar12 + (long)(int)uVar18 * 8 + 0x20);
      if ((lVar12 != 0) && (*(long *)(param_7 + 0x88) != 0)) {
        lVar11 = 0;
        unaff_x23 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(*(long *)(param_7 + 0x88),*(undefined8 *)(lVar12 + 0x38));
        if (*(long *)(param_7 + 0xe8) != 0) {
          iVar7 = /*Atlas.League.LeagueManager$$FirstInMaster*/ func_0x015f4228(*(long *)(param_7 + 0xe8),0);
          if (iVar7 == 0) {
            if (*(long *)(param_7 + 0xe8) != 0) {
              iVar7 = /*Atlas.League.LeagueManager$$TopOfMaster*/ func_0x015f4278(*(long *)(param_7 + 0xe8),0);
              lVar12 = param_7;
              if (iVar7 != 0) {
                puVar17 = &UNK_014806ec;
                puVar6 = auStack_70;
                auVar19 = auVar2;
                goto code_r0x01480a2c;
              }
              if (*(long *)(param_7 + 0xe8) != 0) {
                iVar7 = /*Atlas.League.LeagueManager$$BottomOfBronze*/ func_0x015f42cc(*(long *)(param_7 + 0xe8),0);
                if (iVar7 != 0) {
code_r0x01480704:
                  puVar17 = &UNK_01480710;
                  goto code_r0x01480a2c;
                }
                if (iStack_64 == 2) {
                  if (*(long *)(param_7 + 0x88) != 0) {
                    uVar10 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(*(long *)(param_7 + 0x88),/*STR('LEAGUE_DEMOTION_UNLUCKY_HEADER')*/ uRam0000000003d6f140,0);
                    lVar11 = lRam0000000003d437d8;
                    lVar12 = **(long **)(lRam0000000003d437d8 + 0x30);
                    uVar1 = *(ushort *)(lVar12 + 0x132);
                    if ((uVar1 & 1) == 0) {
                      func_0x00fac028(lVar12);
                      uVar1 = *(ushort *)(lVar12 + 0x132);
                    }
                    if ((uVar1 >> 10 & 1) != 0) {
                      lVar12 = **(long **)(lVar11 + 0x30);
                      if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
                        func_0x00fac028(lVar12);
                      }
                      if (*(int *)(lVar12 + 0xe0) == 0) {
                        lVar12 = **(long **)(lVar11 + 0x30);
                        if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
                          func_0x00fac028(lVar12);
                        }
                        func_0x00f78ad0(lVar12);
                      }
                    }
                    lVar12 = **(long **)(lVar11 + 0x30);
                    if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
                      func_0x00fac028(lVar12);
                    }
                    lVar11 = 0;
                    unaff_x24 = /*System.String$$Format*/ func_0x029cf564(uVar10,**(undefined8 **)(lVar12 + 0xb8));
                    if (*(long *)(param_7 + 0x88) != 0) {
                      uVar14 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(*(long *)(param_7 + 0x88),/*STR('LEAGUE_DEMOTION_HEADER')*/ uRam0000000003d6f138,0);
                      lVar11 = /*System.String$$Format*/ func_0x029bc688(uVar14,unaff_x23,0);
                      uVar18 = *(uint *)(param_5 + 0xac);
                      param_2 = *(uint *)(param_5 + 0xb0);
                      param_3 = *(uint *)(param_5 + 0xb4);
                      param_4 = *(uint *)(param_5 + 0xb8);
                      puVar17 = &UNK_014808c8;
                      lVar9 = unaff_x24;
                      goto code_r0x01480990;
                    }
                  }
                }
                else if (iStack_64 == 1) {
                  uStack_68 = *(undefined4 *)(param_5 + 0xc4);
                  param_6 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_68);
                  unaff_x24 = 0x3d22910;
                  if (*(long *)(param_7 + 0x88) != 0) {
                    lVar11 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(*(long *)(param_7 + 0x88),/*STR('LEAGUE_PROMOTION_PROMOTED_TO_HEADER')*/ uRam0000000003d6f168,0);
                    param_6 = /*System.String$$Format*/ func_0x029bcac4(/*STR('<size={0}>{1}</size>')*/ uRam0000000003d684b8,param_6,lVar11,0);
                    uStack_6c = *(undefined4 *)(param_5 + 200);
                    lVar12 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_6c);
                    unaff_x24 = lVar12;
                    if (*(long *)(param_7 + 0x88) != 0) {
                      uVar14 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(*(long *)(param_7 + 0x88),/*STR('LEAGUE_PROMOTION_HEADER')*/ uRam0000000003d6f160,0);
                      uVar14 = /*System.String$$Format*/ func_0x029bc688(uVar14,unaff_x23,0);
                      unaff_x24 = param_6;
                      lVar9 = lVar12;
                      goto code_r0x014806a8;
                    }
                  }
                }
                else {
                  if (iStack_64 == 0) goto code_r0x01480704;
                  param_6 = *(long *)(param_7 + 0xe8);
                  if (((param_6 != 0) && (*(long *)(param_6 + 0x18) != 0)) &&
                     (lVar12 = *(long *)(*(long *)(param_6 + 0x18) + 0x30), lVar12 != 0)) {
                    if (*(uint *)(lVar12 + 0x18) <= uVar18) goto LAB_01480984;
                    plVar13 = *(long **)(param_5 + 0xd0);
                    uVar14 = *(undefined8 *)(lVar12 + (long)(int)uVar18 * 8 + 0x20);
                    unaff_x23 = *(long *)(param_7 + 0x88);
                    param_7 = func_0x00f78aec(/*LeagueBadgeData_TypeInfo*/ uRam0000000003d22e58);
                    lVar11 = unaff_x23;
                    /*LeagueBadgeData$$.ctor*/ func_0x015ed228(param_7,uVar14,unaff_x23,param_6,1,0);
                    param_5 = 0;
                    if (plVar13 != (long *)0x0) {
                      (**(code **)(*plVar13 + 0x188))
                                (plVar13,param_7,*(undefined8 *)(*plVar13 + 400));
                      return;
                    }
                  }
                }
              }
            }
          }
          else {
            uStack_68 = *(undefined4 *)(param_5 + 0xc4);
            param_6 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_68);
            unaff_x23 = 0x3d22910;
            if (*(long *)(param_7 + 0x88) != 0) {
              lVar11 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(*(long *)(param_7 + 0x88),/*STR('LEAGUE_PROMOTION_PROMOTED_TO_HEADER')*/ uRam0000000003d6f168,0);
              param_6 = /*System.String$$Format*/ func_0x029bcac4(/*STR('<size={0}>{1}</size>')*/ uRam0000000003d684b8,param_6,lVar11,0);
              uStack_6c = *(undefined4 *)(param_5 + 200);
              lVar12 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_6c);
              unaff_x23 = lVar12;
              if (*(long *)(param_7 + 0x88) != 0) {
                lVar9 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(*(long *)(param_7 + 0x88),/*STR('LEAGUE_MASTER_WIN_HEADER')*/ uRam0000000003d6f150,0);
                lVar11 = lRam0000000003d437d8;
                lVar15 = **(long **)(lRam0000000003d437d8 + 0x30);
                uVar1 = *(ushort *)(lVar15 + 0x132);
                if ((uVar1 & 1) == 0) {
                  func_0x00fac028(lVar15);
                  uVar1 = *(ushort *)(lVar15 + 0x132);
                }
                if ((uVar1 >> 10 & 1) != 0) {
                  lVar15 = **(long **)(lVar11 + 0x30);
                  if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
                    func_0x00fac028(lVar15);
                  }
                  if (*(int *)(lVar15 + 0xe0) == 0) {
                    lVar15 = **(long **)(lVar11 + 0x30);
                    if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
                      func_0x00fac028(lVar15);
                    }
                    func_0x00f78ad0(lVar15);
                  }
                }
                lVar11 = **(long **)(lVar11 + 0x30);
                if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
                  func_0x00fac028(lVar11);
                }
                uVar14 = /*System.String$$Format*/ func_0x029cf564(lVar9,**(undefined8 **)(lVar11 + 0xb8),0);
                unaff_x24 = param_6;
code_r0x014806a8:
                lVar11 = /*System.String$$Format*/ func_0x029bcac4(/*STR('<size={0}>{1} </size>')*/ uRam0000000003d684b0,lVar12,uVar14,0);
                uVar18 = *(uint *)(param_5 + 0x9c);
                param_2 = *(uint *)(param_5 + 0xa0);
                param_3 = *(uint *)(param_5 + 0xa4);
                param_4 = *(uint *)(param_5 + 0xa8);
                puVar17 = (undefined *)0x14806c8;
                puVar5 = auStack_70;
                param_6 = unaff_x24;
                auVar4 = auVar3;
                goto code_r0x01480990;
              }
            }
          }
        }
      }
      goto LAB_01480980;
    }
  }
LAB_01480984:
  uVar8 = func_0x00f78b24();
  puVar17 = &Atlas_UI_Screens_LeaguePromotionBehaviour__SetUIElements;
  uVar8 = func_0x00f78ac0(uVar8,0);
  auVar4._8_8_ = param_5;
  auVar4._0_8_ = uVar8;
  puVar5 = auStack_70;
  unaff_x24 = extraout_x1;
  uVar8 = uVar14;
  uVar18 = extraout_s0;
code_r0x01480990:
  while( true ) {
    lVar12 = auVar4._0_8_;
    *(ulong *)(puVar5 + -0x40) = unaff_d11;
    *(ulong *)(puVar5 + -0x38) = unaff_d10;
    *(ulong *)(puVar5 + -0x30) = unaff_d9;
    *(ulong *)(puVar5 + -0x28) = unaff_d8;
    *(long *)(puVar5 + -0x20) = auVar4._8_8_;
    *(long *)(puVar5 + -0x18) = param_7;
    *(undefined1 **)(puVar5 + -0x10) = puVar16;
    *(undefined **)(puVar5 + -8) = puVar17;
    puVar16 = puVar5 + -0x10;
    plVar13 = *(long **)(lVar12 + 0x68);
    param_5 = auVar4._8_8_;
    if (plVar13 != (long *)0x0) {
      unaff_d8 = (ulong)param_4;
      unaff_d9 = (ulong)param_3;
      unaff_d10 = (ulong)param_2;
      unaff_d11 = (ulong)uVar18;
      (**(code **)(*plVar13 + 0x558))(plVar13,unaff_x24,*(undefined8 *)(*plVar13 + 0x560));
      plVar13 = *(long **)(lVar12 + 0x70);
      param_5 = lVar11;
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x558))(plVar13,lVar11,*(undefined8 *)(*plVar13 + 0x560));
        plVar13 = *(long **)(lVar12 + 0x68);
        if (plVar13 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01480a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar13 + 0x2a8))
                    (uVar18,param_2,param_3,param_4,plVar13,*(undefined8 *)(*plVar13 + 0x2b0));
          return;
        }
      }
    }
    puVar17 = &Atlas_UI_Screens_LeaguePromotionBehaviour__SetTextToPosition;
    auVar19 = func_0x00f78af4();
    puVar6 = puVar5 + -0x40;
    unaff_x24 = lVar9;
code_r0x01480a2c:
    lVar11 = auVar19._8_8_;
    param_7 = auVar19._0_8_;
    puVar5 = puVar6 + -0x50;
    *(long *)(puVar6 + -0x40) = unaff_x24;
    *(long *)(puVar6 + -0x38) = unaff_x23;
    *(long *)(puVar6 + -0x30) = param_6;
    *(undefined8 *)(puVar6 + -0x28) = uVar8;
    *(long *)(puVar6 + -0x20) = param_5;
    *(long *)(puVar6 + -0x18) = lVar12;
    *(undefined1 **)(puVar6 + -0x10) = puVar16;
    *(undefined **)(puVar6 + -8) = puVar17;
    puVar16 = puVar6 + -0x10;
    if ((bRam0000000003eb4909 & 1) == 0) {
      func_0x00f78a20(0x3d22910);
      func_0x00f78a20(0x3d684b8);
      func_0x00f78a20(0x3d65d08);
      bRam0000000003eb4909 = 1;
    }
    if ((lVar11 == 0) || (*(long *)(lVar11 + 0xe8) == 0)) break;
    unaff_x23 = 0x3d68000;
    uVar8 = /*Atlas.League.LeagueManager$$GetPlayerLeaderboardPosition*/ func_0x015ed448(*(long *)(lVar11 + 0xe8),0);
    *(undefined4 *)(puVar6 + -0x44) = *(undefined4 *)(param_7 + 0xbc);
    param_6 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,puVar6 + -0x44);
    uVar14 = /*Atlas.UI.Screens.LeaguePromotionBehaviour$$GetPositionText*/ func_0x01480c54(param_7,uVar8,lVar11);
    unaff_x24 = /*System.String$$Format*/ func_0x029bcac4(/*STR('<size={0}>{1}</size>')*/ uRam0000000003d684b8,param_6,uVar14,0);
    uVar18 = *(uint *)(param_7 + 0x8c);
    param_2 = *(uint *)(param_7 + 0x90);
    param_3 = *(uint *)(param_7 + 0x94);
    param_4 = *(uint *)(param_7 + 0x98);
    puVar17 = &UNK_01480b08;
    lVar11 = /*STR('')*/ lRam0000000003d65d08;
    lVar9 = 0x3d65000;
    auVar4 = auVar19;
  }
  func_0x00f78af4();
  *(long *)(puVar6 + -0x80) = param_6;
  *(undefined8 *)(puVar6 + -0x78) = 0x3eb4000;
  *(long *)(puVar6 + -0x70) = lVar11;
  *(long *)(puVar6 + -0x68) = param_7;
  *(undefined1 **)(puVar6 + -0x60) = puVar16;
  *(undefined **)(puVar6 + -0x58) = &Atlas_UI_Screens_LeaguePromotionBehaviour__HidePromotionObjects
  ;
  if ((bRam0000000003eb4908 & 1) == 0) {
    func_0x00f78a20(0x3d3a6c8);
    func_0x00f78a20(0x3d3a6d0);
    bRam0000000003eb4908 = 1;
  }
  if ((extraout_x1_00 != 0) && (lVar11 = *(long *)(extraout_x1_00 + 0x48), lVar11 != 0)) {
    uVar18 = 0;
    do {
      if ((int)*(uint *)(lVar11 + 0x18) <= (int)uVar18) {
        return;
      }
      if (*(uint *)(lVar11 + 0x18) <= uVar18) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0x10) + (long)(int)uVar18 * 8 + 0x20);
      if (lVar11 == 0) break;
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar11,0,0);
      uVar18 = uVar18 + 1;
      lVar11 = *(long *)(extraout_x1_00 + 0x48);
    } while (lVar11 != 0);
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x1480990 | Atlas.UI.Screens.LeaguePromotionBehaviour.SetUIElements
// ============================================================

void Atlas_UI_Screens_LeaguePromotionBehaviour__SetUIElements
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long extraout_x1;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined4 uStack_84;
  
  plVar1 = *(long **)(param_5 + 0x68);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x558))(plVar1,param_6,*(undefined8 *)(*plVar1 + 0x560));
    plVar1 = *(long **)(param_5 + 0x70);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x558))(plVar1,param_7,*(undefined8 *)(*plVar1 + 0x560));
      plVar1 = *(long **)(param_5 + 0x68);
      if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01480a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x2a8))
                  (param_1,param_2,param_3,param_4,plVar1,*(undefined8 *)(*plVar1 + 0x2b0));
        return;
      }
    }
  }
  auVar7 = func_0x00f78af4();
  lVar5 = auVar7._8_8_;
  lVar4 = auVar7._0_8_;
  if ((bRam0000000003eb4909 & 1) == 0) {
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d684b8);
    func_0x00f78a20(0x3d65d08);
    bRam0000000003eb4909 = 1;
  }
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0xe8) != 0)) {
    uVar2 = /*Atlas.League.LeagueManager$$GetPlayerLeaderboardPosition*/ func_0x015ed448(*(long *)(lVar5 + 0xe8),0);
    uStack_84 = *(undefined4 *)(lVar4 + 0xbc);
    uVar3 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_84);
    uVar2 = /*Atlas.UI.Screens.LeaguePromotionBehaviour$$GetPositionText*/ func_0x01480c54(lVar4,uVar2,lVar5);
    uVar2 = /*System.String$$Format*/ func_0x029bcac4(/*STR('<size={0}>{1}</size>')*/ uRam0000000003d684b8,uVar3,uVar2,0);
    Atlas_UI_Screens_LeaguePromotionBehaviour__SetUIElements
              (*(undefined4 *)(lVar4 + 0x8c),*(undefined4 *)(lVar4 + 0x90),
               *(undefined4 *)(lVar4 + 0x94),*(undefined4 *)(lVar4 + 0x98),lVar4,uVar2,
               /*STR('')*/ uRam0000000003d65d08);
    if ((*(long *)(lVar4 + 0x70) != 0) &&
       (lVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar4 + 0x70),0), lVar4 != 0)) {
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar4,0,0);
      return;
    }
  }
  func_0x00f78af4();
  if ((bRam0000000003eb4908 & 1) == 0) {
    func_0x00f78a20(0x3d3a6c8);
    func_0x00f78a20(0x3d3a6d0);
    bRam0000000003eb4908 = 1;
  }
  if ((extraout_x1 != 0) && (lVar4 = *(long *)(extraout_x1 + 0x48), lVar4 != 0)) {
    uVar6 = 0;
    do {
      if ((int)*(uint *)(lVar4 + 0x18) <= (int)uVar6) {
        return;
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar6) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + (long)(int)uVar6 * 8 + 0x20);
      if (lVar4 == 0) break;
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar4,0,0);
      uVar6 = uVar6 + 1;
      lVar4 = *(long *)(extraout_x1 + 0x48);
    } while (lVar4 != 0);
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x1480a2c | Atlas.UI.Screens.LeaguePromotionBehaviour.SetTextToPosition
// ============================================================

void Atlas_UI_Screens_LeaguePromotionBehaviour__SetTextToPosition(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x1;
  uint uVar4;
  undefined4 uStack_44;
  
  if ((bRam0000000003eb4909 & 1) == 0) {
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d684b8);
    func_0x00f78a20(0x3d65d08);
    bRam0000000003eb4909 = 1;
  }
  if ((param_2 != 0) && (*(long *)(param_2 + 0xe8) != 0)) {
    uVar1 = /*Atlas.League.LeagueManager$$GetPlayerLeaderboardPosition*/ func_0x015ed448(*(long *)(param_2 + 0xe8),0);
    uStack_44 = *(undefined4 *)(param_1 + 0xbc);
    uVar2 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_44);
    uVar1 = /*Atlas.UI.Screens.LeaguePromotionBehaviour$$GetPositionText*/ func_0x01480c54(param_1,uVar1,param_2);
    uVar1 = /*System.String$$Format*/ func_0x029bcac4(/*STR('<size={0}>{1}</size>')*/ uRam0000000003d684b8,uVar2,uVar1,0);
    Atlas_UI_Screens_LeaguePromotionBehaviour__SetUIElements
              (*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x90),
               *(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x98),param_1,uVar1,
               /*STR('')*/ uRam0000000003d65d08);
    if ((*(long *)(param_1 + 0x70) != 0) &&
       (lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0x70),0), lVar3 != 0)) {
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar3,0,0);
      return;
    }
  }
  func_0x00f78af4();
  if ((bRam0000000003eb4908 & 1) == 0) {
    func_0x00f78a20(0x3d3a6c8);
    func_0x00f78a20(0x3d3a6d0);
    bRam0000000003eb4908 = 1;
  }
  if ((extraout_x1 != 0) && (lVar3 = *(long *)(extraout_x1 + 0x48), lVar3 != 0)) {
    uVar4 = 0;
    do {
      if ((int)*(uint *)(lVar3 + 0x18) <= (int)uVar4) {
        return;
      }
      if (*(uint *)(lVar3 + 0x18) <= uVar4) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0x10) + (long)(int)uVar4 * 8 + 0x20);
      if (lVar3 == 0) break;
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar3,0,0);
      uVar4 = uVar4 + 1;
      lVar3 = *(long *)(extraout_x1 + 0x48);
    } while (lVar3 != 0);
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x1480b44 | Atlas.UI.Screens.LeaguePromotionBehaviour.HidePromotionObjects
// ============================================================

void Atlas_UI_Screens_LeaguePromotionBehaviour__HidePromotionObjects
               (undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  
  if ((bRam0000000003eb4908 & 1) == 0) {
    func_0x00f78a20(0x3d3a6c8);
    func_0x00f78a20(0x3d3a6d0);
    bRam0000000003eb4908 = 1;
  }
  if ((param_2 != 0) && (lVar2 = *(long *)(param_2 + 0x48), lVar2 != 0)) {
    uVar1 = 0;
    do {
      if ((int)*(uint *)(lVar2 + 0x18) <= (int)uVar1) {
        return;
      }
      if (*(uint *)(lVar2 + 0x18) <= uVar1) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0x10) + (long)(int)uVar1 * 8 + 0x20);
      if (lVar2 == 0) break;
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar2,0,0);
      uVar1 = uVar1 + 1;
      lVar2 = *(long *)(param_2 + 0x48);
    } while (lVar2 != 0);
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x1480bec | Atlas.UI.Screens.LeaguePromotionBehaviour.AnimateHeader
// ============================================================

long Atlas_UI_Screens_LeaguePromotionBehaviour__AnimateHeader(long param_1)

{
  undefined4 uVar1;
  float fVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  float fVar6;
  
  if ((bRam0000000003eb4907 & 1) == 0) {
    func_0x00f78a20(0x3d5e7a0);
    bRam0000000003eb4907 = 1;
  }
  lVar5 = /*DG.Tweening.DOTweenModuleUI$$DOAnchorPosY*/ func_0x016a724c(*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x80),
                          *(undefined8 *)(param_1 + 0x78),0,0);
  uVar3 = uRam0000000003d5e7a0;
  uVar1 = *(undefined4 *)(param_1 + 0x88);
  if ((lVar5 != 0) && (*(char *)(lVar5 + 0xe8) != '\0')) {
    *(undefined4 *)(lVar5 + 0xb4) = uVar1;
    iVar4 = /*DG.Tweening.Core.Easing.EaseManager$$IsFlashEase*/ func_0x0169bba8(uVar1,0,uVar3);
    if (iVar4 != 0) {
      fVar6 = *(float *)(lVar5 + 0xc0);
      fVar2 = -fVar6;
      if (fVar6 != INFINITY) {
        fVar2 = fVar6;
      }
      *(float *)(lVar5 + 0xc0) = (float)(int)fVar2;
    }
    *(undefined8 *)(lVar5 + 0xb8) = 0;
  }
  return lVar5;
}



// ============================================================
// RVA: 0x1480c54 | Atlas.UI.Screens.LeaguePromotionBehaviour.GetPositionText
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_UI_Screens_LeaguePromotionBehaviour__GetPositionText
               (long param_1,undefined4 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined4 uStack_34;
  
  if ((bRam0000000003eb490a & 1) == 0) {
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d6f120);
    func_0x00f78a20(0x3d6f0e8);
    func_0x00f78a20(0x3d6f128);
    func_0x00f78a20(0x3d6f0e0);
    func_0x00f78a20(0x3d6f110);
    func_0x00f78a20(0x3d6f0f0);
    func_0x00f78a20(0x3d6f130);
    func_0x00f78a20(0x3d68490);
    func_0x00f78a20(0x3d6f0f8);
    func_0x00f78a20(0x3d6f0d8);
    func_0x00f78a20(0x3d6f100);
    func_0x00f78a20(0x3d6f118);
    func_0x00f78a20(0x3d6f108);
    func_0x00f78a20(0x3d684a8);
    func_0x00f78a20(0x3d65d08);
    bRam0000000003eb490a = 1;
  }
  lVar2 = /*STR('')*/ lRam0000000003d65d08;
  switch(param_2) {
  case 0:
    if ((param_3 == 0) || (lVar2 = *(long *)(param_3 + 0x88), lVar2 == 0))
    goto Atlas_UI_Screens_AtlasUIScreenBehaviour___ctor;
    puVar3 = (undefined8 *)0x3d6f0f0;
    break;
  case 1:
    if ((param_3 == 0) || (lVar2 = *(long *)(param_3 + 0x88), lVar2 == 0))
    goto Atlas_UI_Screens_AtlasUIScreenBehaviour___ctor;
    puVar3 = (undefined8 *)0x3d6f108;
    break;
  case 2:
    if ((param_3 == 0) || (lVar2 = *(long *)(param_3 + 0x88), lVar2 == 0))
    goto Atlas_UI_Screens_AtlasUIScreenBehaviour___ctor;
    puVar3 = (undefined8 *)0x3d6f128;
    break;
  case 3:
    if ((param_3 == 0) || (lVar2 = *(long *)(param_3 + 0x88), lVar2 == 0))
    goto Atlas_UI_Screens_AtlasUIScreenBehaviour___ctor;
    puVar3 = (undefined8 *)0x3d6f0f8;
    break;
  case 4:
    if ((param_3 == 0) || (lVar2 = *(long *)(param_3 + 0x88), lVar2 == 0))
    goto Atlas_UI_Screens_AtlasUIScreenBehaviour___ctor;
    puVar3 = (undefined8 *)0x3d6f0e8;
    break;
  case 5:
    if ((param_3 == 0) || (lVar2 = *(long *)(param_3 + 0x88), lVar2 == 0))
    goto Atlas_UI_Screens_AtlasUIScreenBehaviour___ctor;
    puVar3 = (undefined8 *)0x3d6f118;
    break;
  case 6:
    if ((param_3 == 0) || (lVar2 = *(long *)(param_3 + 0x88), lVar2 == 0))
    goto Atlas_UI_Screens_AtlasUIScreenBehaviour___ctor;
    puVar3 = (undefined8 *)0x3d6f110;
    break;
  case 7:
    if ((param_3 == 0) || (lVar2 = *(long *)(param_3 + 0x88), lVar2 == 0))
    goto Atlas_UI_Screens_AtlasUIScreenBehaviour___ctor;
    puVar3 = (undefined8 *)0x3d6f0d8;
    break;
  case 8:
    if ((param_3 == 0) || (lVar2 = *(long *)(param_3 + 0x88), lVar2 == 0))
    goto Atlas_UI_Screens_AtlasUIScreenBehaviour___ctor;
    puVar3 = (undefined8 *)0x3d6f100;
    break;
  case 9:
    if ((param_3 == 0) || (lVar2 = *(long *)(param_3 + 0x88), lVar2 == 0))
    goto Atlas_UI_Screens_AtlasUIScreenBehaviour___ctor;
    puVar3 = (undefined8 *)0x3d6f120;
    break;
  case 10:
    if ((param_3 == 0) || (lVar2 = *(long *)(param_3 + 0x88), lVar2 == 0))
    goto Atlas_UI_Screens_AtlasUIScreenBehaviour___ctor;
    puVar3 = (undefined8 *)0x3d6f0e0;
    break;
  case 0xb:
    if ((param_3 == 0) || (lVar2 = *(long *)(param_3 + 0x88), lVar2 == 0))
    goto Atlas_UI_Screens_AtlasUIScreenBehaviour___ctor;
    puVar3 = (undefined8 *)0x3d6f130;
    break;
  default:
    goto code_r0x01480ea8;
  }
  lVar2 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(lVar2,*puVar3,0);
code_r0x01480ea8:
  uStack_34 = *(undefined4 *)(param_1 + 0xc0);
  uVar1 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_34);
  uVar1 = /*System.String$$Format*/ func_0x029bc688(/*STR('<size={0}>')*/ uRam0000000003d684a8,uVar1,0);
  if (lVar2 != 0) {
    lVar2 = /*System.String$$Replace*/ func_0x029bf62c(lVar2,/*STR('<size=70%>')*/ uRam0000000003d68490,uVar1,0);
    return lVar2;
  }
Atlas_UI_Screens_AtlasUIScreenBehaviour___ctor:
  lVar2 = func_0x00f78af4();
  uVar1 = _UNK_033f8380;
  *(undefined8 *)(lVar2 + 0xc4) = _UNK_033f8388;
  *(undefined8 *)(lVar2 + 0xbc) = uVar1;
  if ((bRam0000000003eb4872 & 1) == 0) {
    func_0x00f78a20(0x3d3dc88,0);
    func_0x00f78a20(0x3d1e380);
    func_0x00f78a20(0x3d255d8);
    bRam0000000003eb4872 = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<TopBarManager.TopBarButton>_TypeInfo*/ uRam0000000003d1e380);
  /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$.ctor*/ func_0x023dda88(uVar1,uRam0000000003d3dc88);
  *(undefined8 *)(lVar2 + 0x40) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<TopBarManager.TopBarButton>_TypeInfo*/ uRam0000000003d1e380);
  /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$.ctor*/ func_0x023dda88(uVar1,uRam0000000003d3dc88);
  *(undefined8 *)(lVar2 + 0x48) = uVar1;
  *(undefined4 *)(lVar2 + 100) = 1;
  if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return lVar2;
}



// ============================================================
// RVA: 0x1480f14 | Atlas.UI.Screens.LeaguePromotionBehaviour..ctor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] Atlas_UI_Screens_LeaguePromotionBehaviour___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = _UNK_033f8380;
  *(undefined8 *)(param_1 + 0xc4) = _UNK_033f8388;
  *(undefined8 *)(param_1 + 0xbc) = uVar1;
  if ((bRam0000000003eb4872 & 1) == 0) {
    func_0x00f78a20(0x3d3dc88,0);
    func_0x00f78a20(0x3d1e380);
    func_0x00f78a20(0x3d255d8);
    bRam0000000003eb4872 = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<TopBarManager.TopBarButton>_TypeInfo*/ uRam0000000003d1e380);
  /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$.ctor*/ func_0x023dda88(uVar1,uRam0000000003d3dc88);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<TopBarManager.TopBarButton>_TypeInfo*/ uRam0000000003d1e380);
  /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$.ctor*/ func_0x023dda88(uVar1,uRam0000000003d3dc88);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined4 *)(param_1 + 100) = 1;
  if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



