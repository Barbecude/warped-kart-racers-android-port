// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.UIChallengeController

// ============================================================
// RVA: 0x1518838 | Atlas.UI.UIChallengeController.Init
// ============================================================

void Atlas_UI_UIChallengeController__Init
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined1 param_5)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 0x40) = param_2;
  *(undefined8 *)(param_1 + 0x10) = param_3;
  if (param_4 != 0) {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_4 + 0x88);
    if (*(long *)(param_4 + 0x60) != 0) {
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(*(long *)(param_4 + 0x60) + 0x10);
      if (*(long *)(param_4 + 0x20) != 0) {
        *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(*(long *)(param_4 + 0x20) + 0x10);
        *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_4 + 0x50);
        *(undefined1 *)(param_1 + 0x48) = param_5;
        return;
      }
    }
  }
  lVar1 = func_0x00f78af4();
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  return;
}



// ============================================================
// RVA: 0x151888c | Atlas.UI.UIChallengeController.DeInit
// ============================================================

void Atlas_UI_UIChallengeController__DeInit(long param_1)

{
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// ============================================================
// RVA: 0x15188a0 | Atlas.UI.UIChallengeController.SetUpChallenges
// ============================================================

/* WARNING: Possible PIC construction at 0x01518b08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151ffa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01520090: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0151ffa4) */
/* WARNING: Removing unreachable block (ram,0x0151ffac) */
/* WARNING: Removing unreachable block (ram,0x0151ffb0) */
/* WARNING: Removing unreachable block (ram,0x01520000) */
/* WARNING: Removing unreachable block (ram,0x01520028) */
/* WARNING: Removing unreachable block (ram,0x01520054) */
/* WARNING: Removing unreachable block (ram,0x0152005c) */
/* WARNING: Removing unreachable block (ram,0x0152007c) */
/* WARNING: Removing unreachable block (ram,0x01520084) */
/* WARNING: Removing unreachable block (ram,0x01520088) */
/* WARNING: Removing unreachable block (ram,0x0151ffb8) */
/* WARNING: Removing unreachable block (ram,0x0151ffe8) */
/* WARNING: Removing unreachable block (ram,0x0151ffc4) */
/* WARNING: Removing unreachable block (ram,0x0151ffd0) */
/* WARNING: Removing unreachable block (ram,0x0151ffd8) */
/* WARNING: Removing unreachable block (ram,0x0151ffec) */
/* WARNING: Removing unreachable block (ram,0x01518b0c) */
/* WARNING: Removing unreachable block (ram,0x01518b24) */
/* WARNING: Removing unreachable block (ram,0x01518b2c) */
/* WARNING: Removing unreachable block (ram,0x01518b30) */
/* WARNING: Removing unreachable block (ram,0x01518b50) */
/* WARNING: Removing unreachable block (ram,0x01518b68) */
/* WARNING: Removing unreachable block (ram,0x01518b7c) */
/* WARNING: Removing unreachable block (ram,0x01518b84) */
/* WARNING: Removing unreachable block (ram,0x01518b8c) */
/* WARNING: Removing unreachable block (ram,0x01518bbc) */
/* WARNING: Removing unreachable block (ram,0x01518bd4) */
/* WARNING: Removing unreachable block (ram,0x01518be8) */
/* WARNING: Removing unreachable block (ram,0x01518bf0) */
/* WARNING: Removing unreachable block (ram,0x01518bfc) */
/* WARNING: Removing unreachable block (ram,0x01518c2c) */
/* WARNING: Removing unreachable block (ram,0x01518c44) */
/* WARNING: Removing unreachable block (ram,0x01518c58) */
/* WARNING: Removing unreachable block (ram,0x01518c60) */
/* WARNING: Removing unreachable block (ram,0x01518c6c) */
/* WARNING: Removing unreachable block (ram,0x01520094) */
/* WARNING: Removing unreachable block (ram,0x0152009c) */
/* WARNING: Removing unreachable block (ram,0x015200a8) */
/* WARNING: Removing unreachable block (ram,0x015200b4) */
/* WARNING: Removing unreachable block (ram,0x015200bc) */
/* WARNING: Removing unreachable block (ram,0x01520108) */
/* WARNING: Removing unreachable block (ram,0x015200c8) */
/* WARNING: Removing unreachable block (ram,0x015200d0) */
/* WARNING: Removing unreachable block (ram,0x015200dc) */
/* WARNING: Removing unreachable block (ram,0x01520120) */
/* WARNING: Removing unreachable block (ram,0x015200e4) */
/* WARNING: Removing unreachable block (ram,0x015200f0) */
/* WARNING: Removing unreachable block (ram,0x015200f8) */
/* WARNING: Removing unreachable block (ram,0x0152010c) */

ulong Atlas_UI_UIChallengeController__SetUpChallenges(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint extraout_w1;
  long lVar8;
  undefined1 auVar9 [16];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000003eb4dca & 1) == 0) {
    func_0x00f78a20(0x3d57278);
    func_0x00f78a20(0x3d257d8);
    bRam0000000003eb4dca = 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_58 = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  iVar1 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(param_1 + 0x10,0);
  if (iVar1 == 0) {
LAB_01518ca8:
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (lVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0x40),0), lVar4 != 0)) {
      uVar5 = /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar4,*(undefined1 *)(param_1 + 0x49),0);
      return uVar5;
    }
  }
  else if (*(long *)(param_1 + 0x28) != 0) {
    lVar4 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x10),
                            uRam0000000003d57278);
    *(long *)(param_1 + 0x18) = lVar4;
    if (lVar4 != 0) {
      iVar1 = /*Atlas.Definitions.EventDefinition$$ChallengesExist*/ func_0x01583758(lVar4,0);
      if (iVar1 == 0) goto LAB_01518ca8;
      if (*(long *)(param_1 + 0x18) != 0) {
        lVar8 = *(long *)(param_1 + 0x20);
        lVar4 = /*Atlas.Definitions.EventDefinition$$get_Challenge1*/ func_0x015836d4(*(long *)(param_1 + 0x18),0);
        if (lVar8 != 0) {
          uVar2 = /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(lVar8,*(undefined8 *)(lVar4 + 0x20),&uStack_48,0);
          if (*(long *)(param_1 + 0x18) != 0) {
            lVar8 = *(long *)(param_1 + 0x20);
            lVar4 = /*Atlas.Definitions.EventDefinition$$get_Challenge2*/ func_0x015836dc(*(long *)(param_1 + 0x18),0);
            if (lVar8 != 0) {
              uVar3 = /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(lVar8,*(undefined8 *)(lVar4 + 0x20),&uStack_50,0);
              if (*(long *)(param_1 + 0x18) != 0) {
                lVar8 = *(long *)(param_1 + 0x20);
                lVar4 = /*Atlas.Definitions.EventDefinition$$get_Challenge3*/ func_0x015836e4(*(long *)(param_1 + 0x18),0);
                if (lVar8 != 0) {
                  iVar1 = /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(lVar8,*(undefined8 *)(lVar4 + 0x20),&uStack_58,0);
                  if (((uVar2 & uVar3) != 1) || (iVar1 == 0)) goto LAB_01518ca8;
                  *(undefined1 *)(param_1 + 0x4a) = 1;
                  if (*(long *)(param_1 + 0x18) != 0) {
                    lVar4 = /*Atlas.Definitions.EventDefinition$$get_Challenge1*/ func_0x015836d4(*(long *)(param_1 + 0x18),0);
                    if (*(long *)(lVar4 + 0x28) == 0) goto LAB_01518a3c;
                    if (*(long *)(param_1 + 0x18) != 0) {
                      lVar4 = /*Atlas.Definitions.EventDefinition$$get_Challenge1*/ func_0x015836d4(*(long *)(param_1 + 0x18),0);
                      uVar6 = uStack_48;
                      if (*(long *)(lVar4 + 0x28) != 0) {
                        if (*(long *)(*(long *)(lVar4 + 0x28) + 0x18) != 0) {
                          if (*(long *)(param_1 + 0x18) == 0) goto LAB_01518ce0;
                          lVar4 = /*Atlas.Definitions.EventDefinition$$get_Challenge1*/ func_0x015836d4(*(long *)(param_1 + 0x18),0);
                          uStack_48 = /*System.String$$Format*/ func_0x029cf564(uVar6,*(undefined8 *)(lVar4 + 0x28),0);
                        }
LAB_01518a3c:
                        if (*(long *)(param_1 + 0x18) != 0) {
                          lVar4 = /*Atlas.Definitions.EventDefinition$$get_Challenge2*/ func_0x015836dc(*(long *)(param_1 + 0x18),0);
                          if (*(long *)(lVar4 + 0x28) == 0) goto LAB_01518a9c;
                          if (*(long *)(param_1 + 0x18) != 0) {
                            lVar4 = /*Atlas.Definitions.EventDefinition$$get_Challenge2*/ func_0x015836dc(*(long *)(param_1 + 0x18),0);
                            uVar6 = uStack_50;
                            if (*(long *)(lVar4 + 0x28) != 0) {
                              if (*(long *)(*(long *)(lVar4 + 0x28) + 0x18) != 0) {
                                if (*(long *)(param_1 + 0x18) == 0) goto LAB_01518ce0;
                                lVar4 = /*Atlas.Definitions.EventDefinition$$get_Challenge2*/ func_0x015836dc(*(long *)(param_1 + 0x18),0);
                                uStack_50 = /*System.String$$Format*/ func_0x029cf564(uVar6,*(undefined8 *)(lVar4 + 0x28),0);
                              }
LAB_01518a9c:
                              if (*(long *)(param_1 + 0x18) != 0) {
                                lVar4 = /*Atlas.Definitions.EventDefinition$$get_Challenge3*/ func_0x015836e4(*(long *)(param_1 + 0x18),0);
                                if (*(long *)(lVar4 + 0x28) == 0) goto LAB_01518afc;
                                if (*(long *)(param_1 + 0x18) != 0) {
                                  lVar4 = /*Atlas.Definitions.EventDefinition$$get_Challenge3*/ func_0x015836e4(*(long *)(param_1 + 0x18),0);
                                  uVar6 = uStack_58;
                                  if (*(long *)(lVar4 + 0x28) != 0) {
                                    if (*(long *)(*(long *)(lVar4 + 0x28) + 0x18) != 0) {
                                      if (*(long *)(param_1 + 0x18) == 0) goto LAB_01518ce0;
                                      lVar4 = /*Atlas.Definitions.EventDefinition$$get_Challenge3*/ func_0x015836e4(*(long *)(param_1 + 0x18),0);
                                      uStack_58 = /*System.String$$Format*/ func_0x029cf564(uVar6,*(undefined8 *)
                                                                         (lVar4 + 0x28),0);
                                    }
LAB_01518afc:
                                    if (*(long *)(param_1 + 0x38) != 0) {
                                      auVar9._8_8_ = *(undefined8 *)(param_1 + 0x10);
                                      auVar9._0_8_ = *(long *)(param_1 + 0x38);
                                      goto code_r0x01518cf0;
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
LAB_01518ce0:
  func_0x00f78af4();
  uVar6 = func_0x00f78b24();
  auVar9 = func_0x00f78ac0(uVar6,0);
code_r0x01518cf0:
  if ((bRam0000000003eb4e0f & 1) == 0) {
    func_0x00f78a20(0x3d257d8);
    bRam0000000003eb4e0f = 1;
  }
  lVar4 = *(long *)(auVar9._0_8_ + 0x20);
  if (lVar4 == 0) {
    uVar2 = func_0x00f78af4();
    return (ulong)((extraout_w1 & (uVar2 ^ 0xffffffff)) == 0);
  }
  lVar4 = Atlas_Save_SaveManager__get_SaveData(lVar4,0);
  if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb4e11 & 1) == 0) {
    func_0x00f78a20(0x3d3d8d0);
    func_0x00f78a20(0x3d3d8d8);
    func_0x00f78a20(0x3d257d8);
    bRam0000000003eb4e11 = 1;
  }
  if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb4e46 & 1) == 0) {
    func_0x00f78a20(0x3d3d8d0);
    func_0x00f78a20(0x3d3d8d8);
    bRam0000000003eb4e46 = 1;
  }
  if ((lVar4 != 0) && (lVar8 = *(long *)(lVar4 + 0x58), lVar8 != 0)) {
    iVar1 = *(int *)(lVar8 + 0x18);
    if (iVar1 < 1) {
      return 0xffffffff;
    }
    uVar5 = 0;
    do {
      uVar2 = (uint)uVar5;
      if (*(uint *)(lVar8 + 0x18) <= uVar2) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0x10) + (long)(int)uVar2 * 0x10 + 0x20);
      if (lVar8 == 0) break;
      uVar7 = /*System.String$$Equals*/ func_0x029caa48(lVar8,auVar9._8_8_,4,0);
      if ((uVar7 & 1) != 0) {
        return uVar5;
      }
      if (iVar1 - 1U == uVar2) {
        return 0xffffffff;
      }
      lVar8 = *(long *)(lVar4 + 0x58);
      uVar5 = (ulong)(uVar2 + 1);
    } while (lVar8 != 0);
  }
  func_0x00f78af4();
  return 0xffffffff;
}



// ============================================================
// RVA: 0x1518d84 | Atlas.UI.UIChallengeController.SetUpChallengeProgress
// ============================================================

/* WARNING: Possible PIC construction at 0x01512468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015124bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01518ea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01518ee4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01519334: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151988c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015198d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01519910: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015198dc) */
/* WARNING: Removing unreachable block (ram,0x015198e4) */
/* WARNING: Removing unreachable block (ram,0x01519890) */
/* WARNING: Removing unreachable block (ram,0x015198a8) */
/* WARNING: Removing unreachable block (ram,0x01519338) */
/* WARNING: Removing unreachable block (ram,0x01519340) */
/* WARNING: Removing unreachable block (ram,0x01519348) */
/* WARNING: Removing unreachable block (ram,0x01519350) */
/* WARNING: Removing unreachable block (ram,0x01519354) */
/* WARNING: Removing unreachable block (ram,0x0151936c) */
/* WARNING: Removing unreachable block (ram,0x01519374) */
/* WARNING: Removing unreachable block (ram,0x01518ee8) */
/* WARNING: Removing unreachable block (ram,0x01518ef0) */
/* WARNING: Removing unreachable block (ram,0x01518f00) */
/* WARNING: Removing unreachable block (ram,0x01518f08) */
/* WARNING: Removing unreachable block (ram,0x01518f14) */
/* WARNING: Removing unreachable block (ram,0x01518ea8) */
/* WARNING: Removing unreachable block (ram,0x01518eb0) */
/* WARNING: Removing unreachable block (ram,0x01518ec0) */
/* WARNING: Removing unreachable block (ram,0x01518ec8) */
/* WARNING: Removing unreachable block (ram,0x01518ed4) */
/* WARNING: Removing unreachable block (ram,0x015124c0) */
/* WARNING: Removing unreachable block (ram,0x015124c8) */
/* WARNING: Removing unreachable block (ram,0x015124e0) */
/* WARNING: Removing unreachable block (ram,0x0151246c) */
/* WARNING: Removing unreachable block (ram,0x01512474) */
/* WARNING: Removing unreachable block (ram,0x0151248c) */
/* WARNING: Removing unreachable block (ram,0x015124a8) */
/* WARNING: Removing unreachable block (ram,0x015124b4) */
/* WARNING: Removing unreachable block (ram,0x01519914) */
/* WARNING: Removing unreachable block (ram,0x01519934) */
/* WARNING: Removing unreachable block (ram,0x015199c4) */
/* WARNING: Removing unreachable block (ram,0x01519a40) */
/* WARNING: Removing unreachable block (ram,0x01696338) */
/* WARNING: Removing unreachable block (ram,0x0169634c) */
/* WARNING: Removing unreachable block (ram,0x01696354) */
/* WARNING: Removing unreachable block (ram,0x01696358) */

ulong Atlas_UI_UIChallengeController__SetUpChallengeProgress
                (long param_1,undefined8 param_2,ulong param_3,ulong param_4,int param_5,
                ulong param_6,ulong param_7)

{
  undefined1 auVar1 [16];
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong extraout_x1;
  ulong uVar12;
  ulong uVar13;
  ulong unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x29;
  undefined1 *puVar14;
  undefined8 uVar15;
  code *pcVar16;
  undefined8 unaff_x30;
  undefined *puVar17;
  float fVar18;
  float extraout_s0;
  float extraout_s0_00;
  undefined4 uVar19;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar20 [16];
  
  puVar14 = &stack0xfffffffffffffff0;
  uVar10 = unaff_x19;
  uVar13 = unaff_x20;
  uVar9 = unaff_x21;
  uVar12 = unaff_x22;
  if (param_6 != 0) {
    /*Atlas.UI.UIChallengeProgressBehaviour$$SetVisible*/ func_0x015190fc(param_6,1);
    if (param_5 == 0) {
      /*Atlas.UI.UIChallengeProgressBehaviour$$Set*/ func_0x015191ec(0,param_6,param_2,*(undefined8 *)(param_1 + 0x20));
    }
    else {
      /*Atlas.UI.UIChallengeProgressBehaviour$$Set*/ func_0x01519130(param_6,param_2);
    }
    uVar10 = param_6;
    uVar13 = param_7;
    uVar9 = param_4;
    uVar12 = param_3;
    unaff_x23 = param_1;
    unaff_x24 = param_2;
    if (*(long *)(param_1 + 0x30) != 0) {
      uVar7 = /*Atlas.Stats.StatsManager$$GetSummedStats*/ func_0x015045f8(*(long *)(param_1 + 0x30),param_3,0);
      if (((int)uVar7 < (int)(param_4 >> 0x20)) && ((int)param_7 == 0)) {
        return uVar7;
      }
      uVar7 = *(ulong *)(param_6 + 0x50);
      if (uVar7 != 0) {
Atlas_UI_UIAnimatingFlagsBehaviour__SetCompleted:
        puVar3 = (undefined1 *)((long)register0x00000008 + -0x20);
        puVar4 = (undefined1 *)((long)register0x00000008 + -0x20);
        *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
        *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        puVar14 = (undefined1 *)((long)register0x00000008 + -0x10);
        if ((*(long *)(uVar7 + 0x20) != 0) &&
           (lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(uVar7 + 0x20),0), lVar6 != 0)) {
          uVar11 = 1;
          uVar15 = 0x151246c;
          uVar9 = unaff_x20;
code_r0x0322ef1c:
          *(ulong *)(puVar3 + -0x30) = unaff_x22;
          *(ulong *)(puVar3 + -0x28) = unaff_x21;
          *(ulong *)(puVar3 + -0x20) = uVar9;
          *(ulong *)(puVar3 + -0x18) = uVar7;
          *(undefined1 **)(puVar3 + -0x10) = puVar14;
          *(undefined8 *)(puVar3 + -8) = uVar15;
          if (pcRam0000000003ebf4c0 == (code *)0x0) {
            pcRam0000000003ebf4c0 =
                 (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
          }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar10 = (*pcRam0000000003ebf4c0)(lVar6,uVar11);
          return uVar10;
        }
        pcVar16 = Atlas_UI_UIAnimatingFlagsBehaviour__OnDestroy;
        lVar6 = func_0x00f78af4();
        uVar9 = uVar7;
DG_Tweening_ShortcutExtensions__DOKill:
        *(ulong *)(puVar4 + -0x30) = unaff_x22;
        *(ulong *)(puVar4 + -0x28) = unaff_x21;
        *(ulong *)(puVar4 + -0x20) = unaff_x20;
        *(ulong *)(puVar4 + -0x18) = uVar9;
        *(undefined1 **)(puVar4 + -0x10) = puVar14;
        *(code **)(puVar4 + -8) = pcVar16;
        if ((bRam0000000003eb5c29 & 1) == 0) {
          func_0x00f78a20(0x3d20bc0,0,0);
          bRam0000000003eb5c29 = 1;
        }
        if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        *(undefined8 *)(puVar4 + -0x30) = *(undefined8 *)(puVar4 + -0x30);
        *(undefined8 *)(puVar4 + -0x28) = *(undefined8 *)(puVar4 + -0x28);
        *(undefined8 *)(puVar4 + -0x20) = *(undefined8 *)(puVar4 + -0x20);
        *(undefined8 *)(puVar4 + -0x18) = *(undefined8 *)(puVar4 + -0x18);
        *(undefined8 *)(puVar4 + -0x10) = *(undefined8 *)(puVar4 + -0x10);
        *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
        if ((bRam0000000003eb5af0 & 1) == 0) {
          func_0x00f78a20(0x3d20bc0,0,0);
          func_0x00f78a20(0x3d25440);
          bRam0000000003eb5af0 = 1;
        }
        if (lVar6 == 0) {
          uVar10 = 0;
        }
        else {
          if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar5 = /*DG.Tweening.Core.TweenManager$$FilteredOperation*/ func_0x016c1874(0,1,1,lVar6,0,0,0,0);
          uVar10 = (ulong)uVar5;
        }
        return uVar10;
      }
    }
  }
  unaff_x22 = uVar12;
  unaff_x21 = uVar9;
  uVar7 = uVar10;
  puVar17 = &Atlas_UI_UIChallengeController__UpdateAllChallengeProgress;
  auVar20 = func_0x00f78af4();
  puVar2 = &stack0xffffffffffffffb0;
  do {
    uVar10 = auVar20._8_8_;
    uVar9 = auVar20._0_8_;
    *(ulong *)(puVar2 + -0x20) = uVar13;
    *(ulong *)(puVar2 + -0x18) = uVar7;
    *(undefined1 **)(puVar2 + -0x10) = puVar14;
    *(undefined **)(puVar2 + -8) = puVar17;
    if (*(char *)(uVar9 + 0x49) == '\0') {
      return uVar9;
    }
    if (*(long *)(uVar9 + 0x18) == 0) {
code_r0x01518f3c:
      func_0x00f78af4();
    }
    else {
      puVar8 = (undefined8 *)/*Atlas.Definitions.EventDefinition$$get_Challenge1*/ func_0x015836d4(*(long *)(uVar9 + 0x18),0);
      uVar7 = uVar10;
      if ((*(long *)(uVar9 + 0x40) == 0) ||
         (lVar6 = *(long *)(*(long *)(uVar9 + 0x40) + 0x20), lVar6 == 0)) goto code_r0x01518f3c;
      if (*(int *)(lVar6 + 0x18) != 0) {
        uVar15 = *puVar8;
        unaff_x20 = puVar8[1];
        uVar13 = *(ulong *)(lVar6 + 0x20);
        *(undefined8 *)(puVar2 + -0x60) = unaff_x24;
        *(long *)(puVar2 + -0x58) = unaff_x23;
        *(ulong *)(puVar2 + -0x50) = unaff_x22;
        *(ulong *)(puVar2 + -0x48) = unaff_x21;
        *(undefined1 (*) [16])(puVar2 + -0x40) = auVar20;
        *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
        *(undefined **)(puVar2 + -0x28) = &UNK_01518ea8;
        if (uVar13 == 0) {
code_r0x01519390:
          uVar12 = auVar20._8_8_;
          puVar17 = &Atlas_UI_UIChallengeProgressBehaviour__UpdateFillBar;
          uVar13 = func_0x00f78af4(auVar20._0_8_,uVar15);
          uVar10 = extraout_x1;
          fVar18 = extraout_s0;
        }
        else {
          if (*(char *)(uVar13 + 0x90) != '\0') {
            return uVar9;
          }
          auVar1._8_8_ = 0;
          auVar1._0_8_ = uVar13;
          auVar20 = auVar1 << 0x40;
          if (*(long *)(uVar9 + 0x30) == 0) goto code_r0x01519390;
          uVar12 = 0;
          unaff_x23 = /*Atlas.Stats.StatsManager$$GetSummedStats*/ func_0x015045f8();
          unaff_x22 = unaff_x20 >> 0x20;
          fVar18 = (float)(int)unaff_x23 / (float)(int)(unaff_x20 >> 0x20);
          puVar17 = &UNK_01519338;
          unaff_x20 = uVar12;
          uVar12 = uVar13;
          unaff_x21 = uVar10;
        }
        *(undefined8 *)(puVar2 + -0x90) = unaff_d9;
        *(undefined8 *)(puVar2 + -0x88) = unaff_d8;
        *(ulong *)(puVar2 + -0x80) = uVar9;
        *(ulong *)(puVar2 + -0x78) = uVar12;
        *(undefined1 **)(puVar2 + -0x70) = puVar2 + -0x30;
        *(undefined **)(puVar2 + -0x68) = puVar17;
        uVar9 = /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(fVar18,0);
        if (extraout_s0_00 == *(float *)(uVar13 + 0x8c)) {
          return uVar9;
        }
        lVar6 = *(long *)(uVar13 + 0x38);
        if ((int)uVar10 == 0) {
          if (lVar6 != 0) {
            uVar10 = Atlas_UI_SlantFillBar__SetProgress(extraout_s0_00,lVar6,0);
            goto code_r0x015193f4;
          }
        }
        else if (lVar6 != 0) {
          uVar10 = Atlas_UI_SlantFillBar__SetTargetProgress(extraout_s0_00,lVar6,0,0);
code_r0x015193f4:
          *(float *)(uVar13 + 0x8c) = extraout_s0_00;
          return uVar10;
        }
        auVar20 = func_0x00f78af4();
        uVar9 = auVar20._8_8_;
        *(undefined1 **)(puVar2 + -0xa0) = puVar2 + -0x70;
        *(undefined **)(puVar2 + -0x98) =
             &Atlas_UI_UIChallengeProgressBehaviourContainer__SetChallengeComplete;
        lVar6 = *(long *)(auVar20._0_8_ + 0x18);
        if ((lVar6 == 0) || (uVar9 == 0)) {
          uVar10 = func_0x00f78af4();
          return uVar10;
        }
        uVar19 = *(undefined4 *)(lVar6 + 0x58);
        puVar4 = puVar2 + -0xe0;
        *(undefined8 *)(puVar2 + -0xe0) = unaff_d9;
        *(ulong *)(puVar2 + -0xd8) = (ulong)(uint)extraout_s0_00;
        *(undefined8 *)(puVar2 + -0xd0) = unaff_x24;
        *(long *)(puVar2 + -200) = unaff_x23;
        *(ulong *)(puVar2 + -0xc0) = unaff_x22;
        *(ulong *)(puVar2 + -0xb8) = unaff_x21;
        *(ulong *)(puVar2 + -0xb0) = uVar10;
        *(ulong *)(puVar2 + -0xa8) = uVar13;
        *(undefined8 *)(puVar2 + -0xa0) = *(undefined8 *)(puVar2 + -0xa0);
        *(undefined8 *)(puVar2 + -0x98) = *(undefined8 *)(puVar2 + -0x98);
        puVar14 = puVar2 + -0xa0;
        unaff_x21 = 0x3eb4000;
        uVar10 = uVar9;
        if ((bRam0000000003eb4dd0 & 1) == 0) {
          func_0x00f78a20(uVar19,0x3d25428);
          func_0x00f78a20(0x3d5e6d8);
          func_0x00f78a20(0x3d5e710);
          func_0x00f78a20(0x3d5e7b0);
          func_0x00f78a20(0x3d5e7a0);
          func_0x00f78a20(0x3d5e7a8);
          func_0x00f78a20(0x3d5f6c8);
          func_0x00f78a20(0x3d5f6d0);
          func_0x00f78a20(0x3d790e0);
          uVar10 = func_0x00f78a20(0x3d65d08);
          bRam0000000003eb4dd0 = 1;
        }
        if (*(char *)(uVar9 + 0x90) != '\0') {
          return uVar10;
        }
        if ((unaff_x20 & 1) == 0) {
          uVar7 = *(ulong *)(uVar9 + 0x50);
          if (uVar7 != 0) {
            unaff_x29 = *(undefined8 *)(puVar2 + -0xa0);
            unaff_x30 = *(undefined8 *)(puVar2 + -0x98);
            unaff_x20 = *(ulong *)(puVar2 + -0xb0);
            unaff_x19 = *(ulong *)(puVar2 + -0xa8);
            unaff_x22 = *(ulong *)(puVar2 + -0xc0);
            unaff_x21 = *(ulong *)(puVar2 + -0xb8);
            register0x00000008 = (BADSPACEBASE *)(puVar2 + -0x90);
            goto Atlas_UI_UIAnimatingFlagsBehaviour__SetCompleted;
          }
        }
        else {
          *(undefined1 *)(uVar9 + 0x90) = 1;
          Atlas_Audio_UIAudio__Play(/*STR('event:/UI/HUD/ChallengeComplete')*/ uRam0000000003d790e0);
          if (*(long *)(uVar9 + 0x50) != 0) {
            uVar10 = Atlas_UI_UIAnimatingFlagsBehaviour__PlayCompleteAnimation
                               (0,*(long *)(uVar9 + 0x50),/*STR('')*/ uRam0000000003d65d08);
            *(ulong *)(uVar9 + 0x98) = uVar10;
            uVar15 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3d90(0,0x3f800000,0x3f800000,*(undefined4 *)(uVar9 + 0x58),
                                     *(undefined8 *)(uVar9 + 0x28),0);
            lVar6 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar15,*(undefined4 *)(uVar9 + 0x5c),uRam0000000003d5e7a8);
            *(ulong *)(puVar2 + -0x100) = uVar10;
            *(ulong *)(puVar2 + -0xf8) = uVar9;
            *(undefined1 **)(puVar2 + -0xf0) = puVar14;
            *(undefined **)(puVar2 + -0xe8) = &UNK_01519890;
            if (((((uVar10 != 0) && (*(char *)(uVar10 + 0xe8) != '\0')) && (lVar6 != 0)) &&
                ((*(char *)(uVar10 + 0x100) == '\0' && (*(char *)(lVar6 + 0xe8) != '\0')))) &&
               (*(char *)(lVar6 + 0xe9) == '\0')) {
              /*DG.Tweening.Sequence$$DoInsert*/ func_0x016a231c(*(undefined4 *)(uVar10 + 0xa0),uVar10,lVar6,0);
            }
            return uVar10;
          }
        }
        pcVar16 = (code *)&Atlas_UI_UIChallengeProgressBehaviour__OnDestroy;
        lVar6 = func_0x00f78af4();
        goto DG_Tweening_ShortcutExtensions__DOKill;
      }
    }
    uVar15 = func_0x00f78b24();
    lVar6 = func_0x00f78ac0(uVar15,0);
    puVar14 = puVar2 + -0x30;
    *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x28) = &Atlas_UI_UIChallengeController__TearDownChallenges;
    *(undefined1 *)(lVar6 + 0x49) = 0;
    *(undefined8 *)(lVar6 + 0x18) = 0;
    if ((*(long *)(lVar6 + 0x40) != 0) &&
       (lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar6 + 0x40),0), lVar6 != 0)) {
      uVar11 = 0;
      puVar3 = puVar2 + -0x20;
      puVar14 = *(undefined1 **)(puVar2 + -0x30);
      uVar15 = *(undefined8 *)(puVar2 + -0x28);
      goto code_r0x0322ef1c;
    }
    puVar17 = &Atlas_UI_UIChallengeController__OnUpdate;
    uVar15 = func_0x00f78af4();
    auVar20._8_8_ = 1;
    auVar20._0_8_ = uVar15;
    puVar2 = puVar2 + -0x30;
    uVar13 = uVar9;
  } while( true );
}



// ============================================================
// RVA: 0x1518e50 | Atlas.UI.UIChallengeController.UpdateAllChallengeProgress
// ============================================================

/* WARNING: Possible PIC construction at 0x01518ea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01518ee4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01519334: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151988c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015198d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01519910: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01512468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015124bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0151246c) */
/* WARNING: Removing unreachable block (ram,0x01512474) */
/* WARNING: Removing unreachable block (ram,0x0151248c) */
/* WARNING: Removing unreachable block (ram,0x015124a8) */
/* WARNING: Removing unreachable block (ram,0x015124b4) */
/* WARNING: Removing unreachable block (ram,0x01519914) */
/* WARNING: Removing unreachable block (ram,0x01519934) */
/* WARNING: Removing unreachable block (ram,0x015199c4) */
/* WARNING: Removing unreachable block (ram,0x01519a40) */
/* WARNING: Removing unreachable block (ram,0x015198dc) */
/* WARNING: Removing unreachable block (ram,0x015198e4) */
/* WARNING: Removing unreachable block (ram,0x01519890) */
/* WARNING: Removing unreachable block (ram,0x015198a8) */
/* WARNING: Removing unreachable block (ram,0x01519338) */
/* WARNING: Removing unreachable block (ram,0x01519340) */
/* WARNING: Removing unreachable block (ram,0x01519348) */
/* WARNING: Removing unreachable block (ram,0x01519350) */
/* WARNING: Removing unreachable block (ram,0x01519354) */
/* WARNING: Removing unreachable block (ram,0x0151936c) */
/* WARNING: Removing unreachable block (ram,0x01519374) */
/* WARNING: Removing unreachable block (ram,0x01518ee8) */
/* WARNING: Removing unreachable block (ram,0x01518ef0) */
/* WARNING: Removing unreachable block (ram,0x01518f00) */
/* WARNING: Removing unreachable block (ram,0x01518f08) */
/* WARNING: Removing unreachable block (ram,0x01518f14) */
/* WARNING: Removing unreachable block (ram,0x01518ea8) */
/* WARNING: Removing unreachable block (ram,0x01518eb0) */
/* WARNING: Removing unreachable block (ram,0x01518ec0) */
/* WARNING: Removing unreachable block (ram,0x01518ec8) */
/* WARNING: Removing unreachable block (ram,0x01518ed4) */
/* WARNING: Removing unreachable block (ram,0x015124c0) */
/* WARNING: Removing unreachable block (ram,0x015124c8) */
/* WARNING: Removing unreachable block (ram,0x015124e0) */
/* WARNING: Removing unreachable block (ram,0x01696338) */
/* WARNING: Removing unreachable block (ram,0x0169634c) */
/* WARNING: Removing unreachable block (ram,0x01696354) */
/* WARNING: Removing unreachable block (ram,0x01696358) */

ulong Atlas_UI_UIChallengeController__UpdateAllChallengeProgress(ulong param_1,ulong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong extraout_x1;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong unaff_x19;
  ulong uVar12;
  ulong unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined1 *puVar13;
  undefined *unaff_x30;
  undefined *puVar14;
  code *pcVar15;
  float fVar16;
  float extraout_s0;
  float extraout_s0_00;
  undefined4 uVar17;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar18 [16];
  
  do {
    uVar7 = param_1;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    if (*(char *)(uVar7 + 0x49) == '\0') {
      return uVar7;
    }
    if (*(long *)(uVar7 + 0x18) == 0) {
LAB_01518f3c:
      func_0x00f78af4();
    }
    else {
      puVar4 = (undefined8 *)/*Atlas.Definitions.EventDefinition$$get_Challenge1*/ func_0x015836d4(*(long *)(uVar7 + 0x18),0);
      unaff_x19 = param_2;
      if ((*(long *)(uVar7 + 0x40) == 0) ||
         (lVar11 = *(long *)(*(long *)(uVar7 + 0x40) + 0x20), lVar11 == 0)) goto LAB_01518f3c;
      if (*(int *)(lVar11 + 0x18) != 0) {
        uVar6 = *puVar4;
        uVar5 = puVar4[1];
        uVar10 = *(ulong *)(lVar11 + 0x20);
        *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x24;
        *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x23;
        *(ulong *)((long)register0x00000008 + -0x50) = unaff_x22;
        *(ulong *)((long)register0x00000008 + -0x48) = unaff_x21;
        *(ulong *)((long)register0x00000008 + -0x40) = uVar7;
        *(ulong *)((long)register0x00000008 + -0x38) = param_2;
        *(undefined1 **)((long)register0x00000008 + -0x30) =
             (undefined1 *)((long)register0x00000008 + -0x10);
        *(undefined8 *)((long)register0x00000008 + -0x28) = 0x1518ea8;
        uVar9 = uVar7;
        uVar12 = param_2;
        if (uVar10 == 0) {
code_r0x01519390:
          puVar14 = &Atlas_UI_UIChallengeProgressBehaviour__UpdateFillBar;
          uVar10 = func_0x00f78af4(uVar9,uVar6);
          param_2 = extraout_x1;
          fVar16 = extraout_s0;
        }
        else {
          if (*(char *)(uVar10 + 0x90) != '\0') {
            return uVar7;
          }
          uVar9 = 0;
          uVar12 = uVar10;
          if (*(long *)(uVar7 + 0x30) == 0) goto code_r0x01519390;
          uVar9 = 0;
          unaff_x23 = /*Atlas.Stats.StatsManager$$GetSummedStats*/ func_0x015045f8();
          unaff_x22 = uVar5 >> 0x20;
          fVar16 = (float)(int)unaff_x23 / (float)(int)(uVar5 >> 0x20);
          puVar14 = &UNK_01519338;
          uVar5 = uVar9;
          unaff_x21 = param_2;
        }
        *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_d9;
        *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_d8;
        *(ulong *)((long)register0x00000008 + -0x80) = uVar7;
        *(ulong *)((long)register0x00000008 + -0x78) = uVar12;
        *(undefined1 **)((long)register0x00000008 + -0x70) =
             (undefined1 *)((long)register0x00000008 + -0x30);
        *(undefined **)((long)register0x00000008 + -0x68) = puVar14;
        uVar7 = /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(fVar16,0);
        if (extraout_s0_00 == *(float *)(uVar10 + 0x8c)) {
          return uVar7;
        }
        lVar11 = *(long *)(uVar10 + 0x38);
        if ((int)param_2 == 0) {
          if (lVar11 != 0) {
            uVar7 = Atlas_UI_SlantFillBar__SetProgress(extraout_s0_00,lVar11,0);
            goto code_r0x015193f4;
          }
        }
        else if (lVar11 != 0) {
          uVar7 = Atlas_UI_SlantFillBar__SetTargetProgress(extraout_s0_00,lVar11,0,0);
code_r0x015193f4:
          *(float *)(uVar10 + 0x8c) = extraout_s0_00;
          return uVar7;
        }
        auVar18 = func_0x00f78af4();
        uVar7 = auVar18._8_8_;
        *(undefined1 **)((long)register0x00000008 + -0xa0) =
             (undefined1 *)((long)register0x00000008 + -0x70);
        *(undefined **)((long)register0x00000008 + -0x98) =
             &Atlas_UI_UIChallengeProgressBehaviourContainer__SetChallengeComplete;
        lVar11 = *(long *)(auVar18._0_8_ + 0x18);
        if ((lVar11 == 0) || (uVar7 == 0)) {
          uVar7 = func_0x00f78af4();
          return uVar7;
        }
        uVar17 = *(undefined4 *)(lVar11 + 0x58);
        puVar2 = (undefined1 *)((long)register0x00000008 + -0xe0);
        *(undefined8 *)((long)register0x00000008 + -0xe0) = unaff_d9;
        *(ulong *)((long)register0x00000008 + -0xd8) = (ulong)(uint)extraout_s0_00;
        *(undefined8 *)((long)register0x00000008 + -0xd0) = unaff_x24;
        *(undefined8 *)((long)register0x00000008 + -200) = unaff_x23;
        *(ulong *)((long)register0x00000008 + -0xc0) = unaff_x22;
        *(ulong *)((long)register0x00000008 + -0xb8) = unaff_x21;
        *(ulong *)((long)register0x00000008 + -0xb0) = param_2;
        *(ulong *)((long)register0x00000008 + -0xa8) = uVar10;
        *(undefined8 *)((long)register0x00000008 + -0xa0) =
             *(undefined8 *)((long)register0x00000008 + -0xa0);
        *(undefined8 *)((long)register0x00000008 + -0x98) =
             *(undefined8 *)((long)register0x00000008 + -0x98);
        unaff_x21 = 0x3eb4000;
        uVar9 = uVar7;
        if ((bRam0000000003eb4dd0 & 1) == 0) {
          func_0x00f78a20(uVar17,0x3d25428);
          func_0x00f78a20(0x3d5e6d8);
          func_0x00f78a20(0x3d5e710);
          func_0x00f78a20(0x3d5e7b0);
          func_0x00f78a20(0x3d5e7a0);
          func_0x00f78a20(0x3d5e7a8);
          func_0x00f78a20(0x3d5f6c8);
          func_0x00f78a20(0x3d5f6d0);
          func_0x00f78a20(0x3d790e0);
          uVar9 = func_0x00f78a20(0x3d65d08);
          bRam0000000003eb4dd0 = 1;
        }
        if (*(char *)(uVar7 + 0x90) != '\0') {
          return uVar9;
        }
        if ((uVar5 & 1) == 0) {
          unaff_x19 = *(ulong *)(uVar7 + 0x50);
          if (unaff_x19 != 0) {
            uVar7 = *(ulong *)((long)register0x00000008 + -0xb0);
            unaff_x22 = *(ulong *)((long)register0x00000008 + -0xc0);
            unaff_x21 = *(ulong *)((long)register0x00000008 + -0xb8);
            puVar1 = (undefined1 *)((long)register0x00000008 + -0xb0);
            puVar2 = (undefined1 *)((long)register0x00000008 + -0xb0);
            *(ulong *)((long)register0x00000008 + -0xb0) = uVar7;
            *(undefined8 *)((long)register0x00000008 + -0xa8) =
                 *(undefined8 *)((long)register0x00000008 + -0xa8);
            *(undefined8 *)((long)register0x00000008 + -0xa0) =
                 *(undefined8 *)((long)register0x00000008 + -0xa0);
            *(undefined8 *)((long)register0x00000008 + -0x98) =
                 *(undefined8 *)((long)register0x00000008 + -0x98);
            puVar13 = (undefined1 *)((long)register0x00000008 + -0xa0);
            if ((*(long *)(unaff_x19 + 0x20) == 0) ||
               (lVar11 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(unaff_x19 + 0x20),0), lVar11 == 0)) {
              pcVar15 = Atlas_UI_UIAnimatingFlagsBehaviour__OnDestroy;
              lVar11 = func_0x00f78af4();
              goto DG_Tweening_ShortcutExtensions__DOKill;
            }
            uVar8 = 1;
            uVar6 = 0x151246c;
            goto code_r0x0322ef1c;
          }
        }
        else {
          *(undefined1 *)(uVar7 + 0x90) = 1;
          Atlas_Audio_UIAudio__Play(/*STR('event:/UI/HUD/ChallengeComplete')*/ uRam0000000003d790e0);
          if (*(long *)(uVar7 + 0x50) != 0) {
            uVar5 = Atlas_UI_UIAnimatingFlagsBehaviour__PlayCompleteAnimation
                              (0,*(long *)(uVar7 + 0x50),/*STR('')*/ uRam0000000003d65d08);
            *(ulong *)(uVar7 + 0x98) = uVar5;
            uVar6 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3d90(0,0x3f800000,0x3f800000,*(undefined4 *)(uVar7 + 0x58),
                                    *(undefined8 *)(uVar7 + 0x28),0);
            lVar11 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar6,*(undefined4 *)(uVar7 + 0x5c),uRam0000000003d5e7a8);
            *(ulong *)((long)register0x00000008 + -0x100) = uVar5;
            *(ulong *)((long)register0x00000008 + -0xf8) = uVar7;
            *(undefined1 **)((long)register0x00000008 + -0xf0) =
                 (undefined1 *)((long)register0x00000008 + -0xa0);
            *(undefined **)((long)register0x00000008 + -0xe8) = &UNK_01519890;
            if (((((uVar5 != 0) && (*(char *)(uVar5 + 0xe8) != '\0')) && (lVar11 != 0)) &&
                ((*(char *)(uVar5 + 0x100) == '\0' && (*(char *)(lVar11 + 0xe8) != '\0')))) &&
               (*(char *)(lVar11 + 0xe9) == '\0')) {
              /*DG.Tweening.Sequence$$DoInsert*/ func_0x016a231c(*(undefined4 *)(uVar5 + 0xa0),uVar5,lVar11,0);
            }
            return uVar5;
          }
        }
        pcVar15 = (code *)&Atlas_UI_UIChallengeProgressBehaviour__OnDestroy;
        lVar11 = func_0x00f78af4();
        unaff_x19 = uVar7;
        uVar7 = uVar5;
DG_Tweening_ShortcutExtensions__DOKill:
        *(ulong *)(puVar2 + -0x30) = unaff_x22;
        *(ulong *)(puVar2 + -0x28) = unaff_x21;
        *(ulong *)(puVar2 + -0x20) = uVar7;
        *(ulong *)(puVar2 + -0x18) = unaff_x19;
        *(undefined1 **)(puVar2 + -0x10) = (undefined1 *)((long)register0x00000008 + -0xa0);
        *(code **)(puVar2 + -8) = pcVar15;
        if ((bRam0000000003eb5c29 & 1) == 0) {
          func_0x00f78a20(0x3d20bc0,0,0);
          bRam0000000003eb5c29 = 1;
        }
        if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        *(undefined8 *)(puVar2 + -0x30) = *(undefined8 *)(puVar2 + -0x30);
        *(undefined8 *)(puVar2 + -0x28) = *(undefined8 *)(puVar2 + -0x28);
        *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
        *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
        *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
        *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
        if ((bRam0000000003eb5af0 & 1) == 0) {
          func_0x00f78a20(0x3d20bc0,0,0);
          func_0x00f78a20(0x3d25440);
          bRam0000000003eb5af0 = 1;
        }
        if (lVar11 == 0) {
          uVar7 = 0;
        }
        else {
          if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar3 = /*DG.Tweening.Core.TweenManager$$FilteredOperation*/ func_0x016c1874(0,1,1,lVar11,0,0,0,0);
          uVar7 = (ulong)uVar3;
        }
        return uVar7;
      }
    }
    uVar6 = func_0x00f78b24();
    lVar11 = func_0x00f78ac0(uVar6,0);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x30);
    *(undefined1 **)((long)register0x00000008 + -0x30) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x28) =
         &Atlas_UI_UIChallengeController__TearDownChallenges;
    *(undefined1 *)(lVar11 + 0x49) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    if ((*(long *)(lVar11 + 0x40) != 0) &&
       (lVar11 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar11 + 0x40),0), lVar11 != 0)) {
      uVar8 = 0;
      puVar1 = (undefined1 *)((long)register0x00000008 + -0x20);
      puVar13 = *(undefined1 **)((long)register0x00000008 + -0x30);
      uVar6 = *(undefined8 *)((long)register0x00000008 + -0x28);
code_r0x0322ef1c:
      *(ulong *)(puVar1 + -0x30) = unaff_x22;
      *(ulong *)(puVar1 + -0x28) = unaff_x21;
      *(ulong *)(puVar1 + -0x20) = uVar7;
      *(ulong *)(puVar1 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar1 + -0x10) = puVar13;
      *(undefined8 *)(puVar1 + -8) = uVar6;
      if (pcRam0000000003ebf4c0 == (code *)0x0) {
        pcRam0000000003ebf4c0 =
             (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
      }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (*pcRam0000000003ebf4c0)(lVar11,uVar8);
      return uVar7;
    }
    unaff_x30 = &Atlas_UI_UIChallengeController__OnUpdate;
    param_1 = func_0x00f78af4();
    param_2 = 1;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
    unaff_x20 = uVar7;
  } while( true );
}



// ============================================================
// RVA: 0x1518f4c | Atlas.UI.UIChallengeController.TearDownChallenges
// ============================================================

/* WARNING: Possible PIC construction at 0x01518ea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01518ee4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01519334: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151988c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015198d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01519910: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01512468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015124bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0151246c) */
/* WARNING: Removing unreachable block (ram,0x01512474) */
/* WARNING: Removing unreachable block (ram,0x0151248c) */
/* WARNING: Removing unreachable block (ram,0x015124a8) */
/* WARNING: Removing unreachable block (ram,0x015124b4) */
/* WARNING: Removing unreachable block (ram,0x01519914) */
/* WARNING: Removing unreachable block (ram,0x01519934) */
/* WARNING: Removing unreachable block (ram,0x015199c4) */
/* WARNING: Removing unreachable block (ram,0x01519a40) */
/* WARNING: Removing unreachable block (ram,0x015198dc) */
/* WARNING: Removing unreachable block (ram,0x015198e4) */
/* WARNING: Removing unreachable block (ram,0x01519890) */
/* WARNING: Removing unreachable block (ram,0x015198a8) */
/* WARNING: Removing unreachable block (ram,0x01519338) */
/* WARNING: Removing unreachable block (ram,0x01519340) */
/* WARNING: Removing unreachable block (ram,0x01519348) */
/* WARNING: Removing unreachable block (ram,0x01519350) */
/* WARNING: Removing unreachable block (ram,0x01519354) */
/* WARNING: Removing unreachable block (ram,0x0151936c) */
/* WARNING: Removing unreachable block (ram,0x01519374) */
/* WARNING: Removing unreachable block (ram,0x01518ee8) */
/* WARNING: Removing unreachable block (ram,0x01518ef0) */
/* WARNING: Removing unreachable block (ram,0x01518f00) */
/* WARNING: Removing unreachable block (ram,0x01518f08) */
/* WARNING: Removing unreachable block (ram,0x01518f14) */
/* WARNING: Removing unreachable block (ram,0x01518ea8) */
/* WARNING: Removing unreachable block (ram,0x01518eb0) */
/* WARNING: Removing unreachable block (ram,0x01518ec0) */
/* WARNING: Removing unreachable block (ram,0x01518ec8) */
/* WARNING: Removing unreachable block (ram,0x01518ed4) */
/* WARNING: Removing unreachable block (ram,0x015124c0) */
/* WARNING: Removing unreachable block (ram,0x015124c8) */
/* WARNING: Removing unreachable block (ram,0x015124e0) */
/* WARNING: Removing unreachable block (ram,0x01696338) */
/* WARNING: Removing unreachable block (ram,0x0169634c) */
/* WARNING: Removing unreachable block (ram,0x01696354) */
/* WARNING: Removing unreachable block (ram,0x01696358) */

ulong Atlas_UI_UIChallengeController__TearDownChallenges(long param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 extraout_x1;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined1 *puVar11;
  code *unaff_x30;
  undefined *puVar12;
  code *pcVar13;
  float fVar14;
  float extraout_s0;
  float extraout_s0_00;
  undefined4 uVar15;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar16 [16];
  
  do {
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined1 *)(param_1 + 0x49) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0x40),0), lVar5 != 0)) {
      uVar7 = 0;
      puVar11 = *(undefined1 **)((long)register0x00000008 + -0x10);
      uVar8 = *(undefined8 *)((long)register0x00000008 + -8);
      puVar2 = (undefined1 *)register0x00000008;
      goto code_r0x0322ef1c;
    }
    uVar6 = func_0x00f78af4();
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x28) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x20) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x18) = &Atlas_UI_UIChallengeController__OnUpdate;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x20);
    if (*(char *)(uVar6 + 0x49) == '\0') {
      return uVar6;
    }
    if (*(long *)(uVar6 + 0x18) == 0) {
LAB_01518f3c:
      func_0x00f78af4();
    }
    else {
      unaff_x19 = 1;
      puVar4 = (undefined8 *)/*Atlas.Definitions.EventDefinition$$get_Challenge1*/ func_0x015836d4(*(long *)(uVar6 + 0x18),0);
      if ((*(long *)(uVar6 + 0x40) == 0) ||
         (lVar5 = *(long *)(*(long *)(uVar6 + 0x40) + 0x20), lVar5 == 0)) goto LAB_01518f3c;
      if (*(int *)(lVar5 + 0x18) != 0) break;
    }
    uVar8 = func_0x00f78b24();
    unaff_x30 = Atlas_UI_UIChallengeController__TearDownChallenges;
    param_1 = func_0x00f78ac0(uVar8,0);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
    unaff_x20 = uVar6;
  } while( true );
  uVar8 = *puVar4;
  unaff_x20 = puVar4[1];
  uVar10 = *(ulong *)(lVar5 + 0x20);
  *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_x23;
  *(ulong *)((long)register0x00000008 + -0x60) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x21;
  *(ulong *)((long)register0x00000008 + -0x50) = uVar6;
  *(undefined8 *)((long)register0x00000008 + -0x48) = 1;
  *(undefined1 **)((long)register0x00000008 + -0x40) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -0x38) = 0x1518ea8;
  uVar9 = uVar6;
  if (uVar10 == 0) {
code_r0x01519390:
    puVar12 = &Atlas_UI_UIChallengeProgressBehaviour__UpdateFillBar;
    uVar10 = func_0x00f78af4(uVar9,uVar8);
    uVar8 = extraout_x1;
    fVar14 = extraout_s0;
  }
  else {
    if (*(char *)(uVar10 + 0x90) != '\0') {
      return uVar6;
    }
    uVar9 = 0;
    unaff_x19 = uVar10;
    if (*(long *)(uVar6 + 0x30) == 0) goto code_r0x01519390;
    unaff_x21 = 1;
    uVar9 = 0;
    unaff_x23 = /*Atlas.Stats.StatsManager$$GetSummedStats*/ func_0x015045f8();
    unaff_x22 = unaff_x20 >> 0x20;
    fVar14 = (float)(int)unaff_x23 / (float)(int)(unaff_x20 >> 0x20);
    uVar8 = 1;
    puVar12 = &UNK_01519338;
    unaff_x20 = uVar9;
  }
  *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_d8;
  *(ulong *)((long)register0x00000008 + -0x90) = uVar6;
  *(ulong *)((long)register0x00000008 + -0x88) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x40);
  *(undefined **)((long)register0x00000008 + -0x78) = puVar12;
  uVar6 = /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(fVar14,0);
  if (extraout_s0_00 == *(float *)(uVar10 + 0x8c)) {
    return uVar6;
  }
  lVar5 = *(long *)(uVar10 + 0x38);
  if ((int)uVar8 == 0) {
    if (lVar5 != 0) {
      uVar6 = Atlas_UI_SlantFillBar__SetProgress(extraout_s0_00,lVar5,0);
      goto code_r0x015193f4;
    }
  }
  else if (lVar5 != 0) {
    uVar6 = Atlas_UI_SlantFillBar__SetTargetProgress(extraout_s0_00,lVar5,0,0);
code_r0x015193f4:
    *(float *)(uVar10 + 0x8c) = extraout_s0_00;
    return uVar6;
  }
  auVar16 = func_0x00f78af4();
  uVar6 = auVar16._8_8_;
  *(undefined1 **)((long)register0x00000008 + -0xb0) =
       (undefined1 *)((long)register0x00000008 + -0x80);
  *(undefined **)((long)register0x00000008 + -0xa8) =
       &Atlas_UI_UIChallengeProgressBehaviourContainer__SetChallengeComplete;
  lVar5 = *(long *)(auVar16._0_8_ + 0x18);
  if ((lVar5 == 0) || (uVar6 == 0)) {
    uVar6 = func_0x00f78af4();
    return uVar6;
  }
  uVar15 = *(undefined4 *)(lVar5 + 0x58);
  puVar1 = (undefined1 *)((long)register0x00000008 + -0xf0);
  *(undefined8 *)((long)register0x00000008 + -0xf0) = unaff_d9;
  *(ulong *)((long)register0x00000008 + -0xe8) = (ulong)(uint)extraout_s0_00;
  *(undefined8 *)((long)register0x00000008 + -0xe0) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0xd8) = unaff_x23;
  *(ulong *)((long)register0x00000008 + -0xd0) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -200) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar8;
  *(ulong *)((long)register0x00000008 + -0xb8) = uVar10;
  *(undefined8 *)((long)register0x00000008 + -0xb0) =
       *(undefined8 *)((long)register0x00000008 + -0xb0);
  *(undefined8 *)((long)register0x00000008 + -0xa8) =
       *(undefined8 *)((long)register0x00000008 + -0xa8);
  unaff_x21 = 0x3eb4000;
  uVar9 = uVar6;
  if ((bRam0000000003eb4dd0 & 1) == 0) {
    func_0x00f78a20(uVar15,0x3d25428);
    func_0x00f78a20(0x3d5e6d8);
    func_0x00f78a20(0x3d5e710);
    func_0x00f78a20(0x3d5e7b0);
    func_0x00f78a20(0x3d5e7a0);
    func_0x00f78a20(0x3d5e7a8);
    func_0x00f78a20(0x3d5f6c8);
    func_0x00f78a20(0x3d5f6d0);
    func_0x00f78a20(0x3d790e0);
    uVar9 = func_0x00f78a20(0x3d65d08);
    bRam0000000003eb4dd0 = 1;
  }
  if (*(char *)(uVar6 + 0x90) != '\0') {
    return uVar9;
  }
  if ((unaff_x20 & 1) == 0) {
    unaff_x19 = *(ulong *)(uVar6 + 0x50);
    if (unaff_x19 != 0) {
      unaff_x20 = *(ulong *)((long)register0x00000008 + -0xc0);
      unaff_x22 = *(ulong *)((long)register0x00000008 + -0xd0);
      unaff_x21 = *(undefined8 *)((long)register0x00000008 + -200);
      puVar2 = (undefined1 *)((long)register0x00000008 + -0xc0);
      puVar1 = (undefined1 *)((long)register0x00000008 + -0xc0);
      *(ulong *)((long)register0x00000008 + -0xc0) = unaff_x20;
      *(undefined8 *)((long)register0x00000008 + -0xb8) =
           *(undefined8 *)((long)register0x00000008 + -0xb8);
      *(undefined8 *)((long)register0x00000008 + -0xb0) =
           *(undefined8 *)((long)register0x00000008 + -0xb0);
      *(undefined8 *)((long)register0x00000008 + -0xa8) =
           *(undefined8 *)((long)register0x00000008 + -0xa8);
      puVar11 = (undefined1 *)((long)register0x00000008 + -0xb0);
      if ((*(long *)(unaff_x19 + 0x20) != 0) &&
         (lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(unaff_x19 + 0x20),0), lVar5 != 0)) {
        uVar7 = 1;
        uVar8 = 0x151246c;
code_r0x0322ef1c:
        *(ulong *)(puVar2 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
        *(ulong *)(puVar2 + -0x20) = unaff_x20;
        *(ulong *)(puVar2 + -0x18) = unaff_x19;
        *(undefined1 **)(puVar2 + -0x10) = puVar11;
        *(undefined8 *)(puVar2 + -8) = uVar8;
        if (pcRam0000000003ebf4c0 == (code *)0x0) {
          pcRam0000000003ebf4c0 =
               (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
        }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*pcRam0000000003ebf4c0)(lVar5,uVar7);
        return uVar6;
      }
      pcVar13 = Atlas_UI_UIAnimatingFlagsBehaviour__OnDestroy;
      lVar5 = func_0x00f78af4();
      goto DG_Tweening_ShortcutExtensions__DOKill;
    }
  }
  else {
    *(undefined1 *)(uVar6 + 0x90) = 1;
    Atlas_Audio_UIAudio__Play(/*STR('event:/UI/HUD/ChallengeComplete')*/ uRam0000000003d790e0);
    if (*(long *)(uVar6 + 0x50) != 0) {
      uVar9 = Atlas_UI_UIAnimatingFlagsBehaviour__PlayCompleteAnimation
                        (0,*(long *)(uVar6 + 0x50),/*STR('')*/ uRam0000000003d65d08);
      *(ulong *)(uVar6 + 0x98) = uVar9;
      uVar8 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3d90(0,0x3f800000,0x3f800000,*(undefined4 *)(uVar6 + 0x58),
                              *(undefined8 *)(uVar6 + 0x28),0);
      lVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar8,*(undefined4 *)(uVar6 + 0x5c),uRam0000000003d5e7a8);
      *(ulong *)((long)register0x00000008 + -0x110) = uVar9;
      *(ulong *)((long)register0x00000008 + -0x108) = uVar6;
      *(undefined1 **)((long)register0x00000008 + -0x100) =
           (undefined1 *)((long)register0x00000008 + -0xb0);
      *(undefined **)((long)register0x00000008 + -0xf8) = &UNK_01519890;
      if (((((uVar9 != 0) && (*(char *)(uVar9 + 0xe8) != '\0')) && (lVar5 != 0)) &&
          ((*(char *)(uVar9 + 0x100) == '\0' && (*(char *)(lVar5 + 0xe8) != '\0')))) &&
         (*(char *)(lVar5 + 0xe9) == '\0')) {
        /*DG.Tweening.Sequence$$DoInsert*/ func_0x016a231c(*(undefined4 *)(uVar9 + 0xa0),uVar9,lVar5,0);
      }
      return uVar9;
    }
  }
  pcVar13 = (code *)&Atlas_UI_UIChallengeProgressBehaviour__OnDestroy;
  lVar5 = func_0x00f78af4();
  unaff_x19 = uVar6;
DG_Tweening_ShortcutExtensions__DOKill:
  *(ulong *)(puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
  *(ulong *)(puVar1 + -0x20) = unaff_x20;
  *(ulong *)(puVar1 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar1 + -0x10) = (undefined1 *)((long)register0x00000008 + -0xb0);
  *(code **)(puVar1 + -8) = pcVar13;
  if ((bRam0000000003eb5c29 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0,0,0);
    bRam0000000003eb5c29 = 1;
  }
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)(puVar1 + -0x30) = *(undefined8 *)(puVar1 + -0x30);
  *(undefined8 *)(puVar1 + -0x28) = *(undefined8 *)(puVar1 + -0x28);
  *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
  *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
  *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
  *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
  if ((bRam0000000003eb5af0 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0,0,0);
    func_0x00f78a20(0x3d25440);
    bRam0000000003eb5af0 = 1;
  }
  if (lVar5 == 0) {
    uVar6 = 0;
  }
  else {
    if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar3 = /*DG.Tweening.Core.TweenManager$$FilteredOperation*/ func_0x016c1874(0,1,1,lVar5,0,0,0,0);
    uVar6 = (ulong)uVar3;
  }
  return uVar6;
}



// ============================================================
// RVA: 0x1518f84 | Atlas.UI.UIChallengeController.OnUpdate
// ============================================================

/* WARNING: Possible PIC construction at 0x01518ea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01518ee4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01519334: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151988c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015198d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01519910: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01512468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015124bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0151246c) */
/* WARNING: Removing unreachable block (ram,0x01512474) */
/* WARNING: Removing unreachable block (ram,0x0151248c) */
/* WARNING: Removing unreachable block (ram,0x015124a8) */
/* WARNING: Removing unreachable block (ram,0x015124b4) */
/* WARNING: Removing unreachable block (ram,0x01519914) */
/* WARNING: Removing unreachable block (ram,0x01519934) */
/* WARNING: Removing unreachable block (ram,0x015199c4) */
/* WARNING: Removing unreachable block (ram,0x01519a40) */
/* WARNING: Removing unreachable block (ram,0x015198dc) */
/* WARNING: Removing unreachable block (ram,0x015198e4) */
/* WARNING: Removing unreachable block (ram,0x01519890) */
/* WARNING: Removing unreachable block (ram,0x015198a8) */
/* WARNING: Removing unreachable block (ram,0x01519338) */
/* WARNING: Removing unreachable block (ram,0x01519340) */
/* WARNING: Removing unreachable block (ram,0x01519348) */
/* WARNING: Removing unreachable block (ram,0x01519350) */
/* WARNING: Removing unreachable block (ram,0x01519354) */
/* WARNING: Removing unreachable block (ram,0x0151936c) */
/* WARNING: Removing unreachable block (ram,0x01519374) */
/* WARNING: Removing unreachable block (ram,0x01518ee8) */
/* WARNING: Removing unreachable block (ram,0x01518ef0) */
/* WARNING: Removing unreachable block (ram,0x01518f00) */
/* WARNING: Removing unreachable block (ram,0x01518f08) */
/* WARNING: Removing unreachable block (ram,0x01518f14) */
/* WARNING: Removing unreachable block (ram,0x01518ea8) */
/* WARNING: Removing unreachable block (ram,0x01518eb0) */
/* WARNING: Removing unreachable block (ram,0x01518ec0) */
/* WARNING: Removing unreachable block (ram,0x01518ec8) */
/* WARNING: Removing unreachable block (ram,0x01518ed4) */
/* WARNING: Removing unreachable block (ram,0x015124c0) */
/* WARNING: Removing unreachable block (ram,0x015124c8) */
/* WARNING: Removing unreachable block (ram,0x015124e0) */
/* WARNING: Removing unreachable block (ram,0x01696338) */
/* WARNING: Removing unreachable block (ram,0x0169634c) */
/* WARNING: Removing unreachable block (ram,0x01696354) */
/* WARNING: Removing unreachable block (ram,0x01696358) */

ulong Atlas_UI_UIChallengeController__OnUpdate(ulong param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 extraout_x1;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined1 *puVar12;
  code *unaff_x30;
  undefined *puVar13;
  code *pcVar14;
  float fVar15;
  float extraout_s0;
  float extraout_s0_00;
  undefined4 uVar16;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar17 [16];
  
  do {
    uVar6 = param_1;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    if (*(char *)(uVar6 + 0x49) == '\0') {
      return uVar6;
    }
    if (*(long *)(uVar6 + 0x18) == 0) {
LAB_01518f3c:
      func_0x00f78af4();
    }
    else {
      unaff_x19 = 1;
      puVar4 = (undefined8 *)/*Atlas.Definitions.EventDefinition$$get_Challenge1*/ func_0x015836d4(*(long *)(uVar6 + 0x18),0);
      if ((*(long *)(uVar6 + 0x40) == 0) ||
         (lVar11 = *(long *)(*(long *)(uVar6 + 0x40) + 0x20), lVar11 == 0)) goto LAB_01518f3c;
      if (*(int *)(lVar11 + 0x18) != 0) {
        uVar8 = *puVar4;
        uVar5 = puVar4[1];
        uVar10 = *(ulong *)(lVar11 + 0x20);
        *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x24;
        *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x23;
        *(ulong *)((long)register0x00000008 + -0x50) = unaff_x22;
        *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x21;
        *(ulong *)((long)register0x00000008 + -0x40) = uVar6;
        *(undefined8 *)((long)register0x00000008 + -0x38) = 1;
        *(undefined1 **)((long)register0x00000008 + -0x30) =
             (undefined1 *)((long)register0x00000008 + -0x10);
        *(undefined8 *)((long)register0x00000008 + -0x28) = 0x1518ea8;
        uVar9 = uVar6;
        if (uVar10 == 0) {
code_r0x01519390:
          puVar13 = &Atlas_UI_UIChallengeProgressBehaviour__UpdateFillBar;
          uVar10 = func_0x00f78af4(uVar9,uVar8);
          uVar8 = extraout_x1;
          fVar15 = extraout_s0;
        }
        else {
          if (*(char *)(uVar10 + 0x90) != '\0') {
            return uVar6;
          }
          uVar9 = 0;
          unaff_x19 = uVar10;
          if (*(long *)(uVar6 + 0x30) == 0) goto code_r0x01519390;
          unaff_x21 = 1;
          uVar9 = 0;
          unaff_x23 = /*Atlas.Stats.StatsManager$$GetSummedStats*/ func_0x015045f8();
          unaff_x22 = uVar5 >> 0x20;
          fVar15 = (float)(int)unaff_x23 / (float)(int)(uVar5 >> 0x20);
          uVar8 = 1;
          puVar13 = &UNK_01519338;
          uVar5 = uVar9;
        }
        *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_d9;
        *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_d8;
        *(ulong *)((long)register0x00000008 + -0x80) = uVar6;
        *(ulong *)((long)register0x00000008 + -0x78) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x70) =
             (undefined1 *)((long)register0x00000008 + -0x30);
        *(undefined **)((long)register0x00000008 + -0x68) = puVar13;
        uVar6 = /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(fVar15,0);
        if (extraout_s0_00 == *(float *)(uVar10 + 0x8c)) {
          return uVar6;
        }
        lVar11 = *(long *)(uVar10 + 0x38);
        if ((int)uVar8 == 0) {
          if (lVar11 != 0) {
            uVar6 = Atlas_UI_SlantFillBar__SetProgress(extraout_s0_00,lVar11,0);
            goto code_r0x015193f4;
          }
        }
        else if (lVar11 != 0) {
          uVar6 = Atlas_UI_SlantFillBar__SetTargetProgress(extraout_s0_00,lVar11,0,0);
code_r0x015193f4:
          *(float *)(uVar10 + 0x8c) = extraout_s0_00;
          return uVar6;
        }
        auVar17 = func_0x00f78af4();
        uVar6 = auVar17._8_8_;
        *(undefined1 **)((long)register0x00000008 + -0xa0) =
             (undefined1 *)((long)register0x00000008 + -0x70);
        *(undefined **)((long)register0x00000008 + -0x98) =
             &Atlas_UI_UIChallengeProgressBehaviourContainer__SetChallengeComplete;
        lVar11 = *(long *)(auVar17._0_8_ + 0x18);
        if ((lVar11 == 0) || (uVar6 == 0)) {
          uVar6 = func_0x00f78af4();
          return uVar6;
        }
        uVar16 = *(undefined4 *)(lVar11 + 0x58);
        puVar2 = (undefined1 *)((long)register0x00000008 + -0xe0);
        *(undefined8 *)((long)register0x00000008 + -0xe0) = unaff_d9;
        *(ulong *)((long)register0x00000008 + -0xd8) = (ulong)(uint)extraout_s0_00;
        *(undefined8 *)((long)register0x00000008 + -0xd0) = unaff_x24;
        *(undefined8 *)((long)register0x00000008 + -200) = unaff_x23;
        *(ulong *)((long)register0x00000008 + -0xc0) = unaff_x22;
        *(undefined8 *)((long)register0x00000008 + -0xb8) = unaff_x21;
        *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar8;
        *(ulong *)((long)register0x00000008 + -0xa8) = uVar10;
        *(undefined8 *)((long)register0x00000008 + -0xa0) =
             *(undefined8 *)((long)register0x00000008 + -0xa0);
        *(undefined8 *)((long)register0x00000008 + -0x98) =
             *(undefined8 *)((long)register0x00000008 + -0x98);
        unaff_x21 = 0x3eb4000;
        uVar9 = uVar6;
        if ((bRam0000000003eb4dd0 & 1) == 0) {
          func_0x00f78a20(uVar16,0x3d25428);
          func_0x00f78a20(0x3d5e6d8);
          func_0x00f78a20(0x3d5e710);
          func_0x00f78a20(0x3d5e7b0);
          func_0x00f78a20(0x3d5e7a0);
          func_0x00f78a20(0x3d5e7a8);
          func_0x00f78a20(0x3d5f6c8);
          func_0x00f78a20(0x3d5f6d0);
          func_0x00f78a20(0x3d790e0);
          uVar9 = func_0x00f78a20(0x3d65d08);
          bRam0000000003eb4dd0 = 1;
        }
        if (*(char *)(uVar6 + 0x90) != '\0') {
          return uVar9;
        }
        if ((uVar5 & 1) == 0) {
          unaff_x19 = *(ulong *)(uVar6 + 0x50);
          if (unaff_x19 != 0) {
            uVar6 = *(ulong *)((long)register0x00000008 + -0xb0);
            unaff_x22 = *(ulong *)((long)register0x00000008 + -0xc0);
            unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xb8);
            puVar1 = (undefined1 *)((long)register0x00000008 + -0xb0);
            puVar2 = (undefined1 *)((long)register0x00000008 + -0xb0);
            *(ulong *)((long)register0x00000008 + -0xb0) = uVar6;
            *(undefined8 *)((long)register0x00000008 + -0xa8) =
                 *(undefined8 *)((long)register0x00000008 + -0xa8);
            *(undefined8 *)((long)register0x00000008 + -0xa0) =
                 *(undefined8 *)((long)register0x00000008 + -0xa0);
            *(undefined8 *)((long)register0x00000008 + -0x98) =
                 *(undefined8 *)((long)register0x00000008 + -0x98);
            puVar12 = (undefined1 *)((long)register0x00000008 + -0xa0);
            if ((*(long *)(unaff_x19 + 0x20) == 0) ||
               (lVar11 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(unaff_x19 + 0x20),0), lVar11 == 0)) {
              pcVar14 = Atlas_UI_UIAnimatingFlagsBehaviour__OnDestroy;
              lVar11 = func_0x00f78af4();
              goto DG_Tweening_ShortcutExtensions__DOKill;
            }
            uVar7 = 1;
            uVar8 = 0x151246c;
            goto code_r0x0322ef1c;
          }
        }
        else {
          *(undefined1 *)(uVar6 + 0x90) = 1;
          Atlas_Audio_UIAudio__Play(/*STR('event:/UI/HUD/ChallengeComplete')*/ uRam0000000003d790e0);
          if (*(long *)(uVar6 + 0x50) != 0) {
            uVar5 = Atlas_UI_UIAnimatingFlagsBehaviour__PlayCompleteAnimation
                              (0,*(long *)(uVar6 + 0x50),/*STR('')*/ uRam0000000003d65d08);
            *(ulong *)(uVar6 + 0x98) = uVar5;
            uVar8 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3d90(0,0x3f800000,0x3f800000,*(undefined4 *)(uVar6 + 0x58),
                                    *(undefined8 *)(uVar6 + 0x28),0);
            lVar11 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar8,*(undefined4 *)(uVar6 + 0x5c),uRam0000000003d5e7a8);
            *(ulong *)((long)register0x00000008 + -0x100) = uVar5;
            *(ulong *)((long)register0x00000008 + -0xf8) = uVar6;
            *(undefined1 **)((long)register0x00000008 + -0xf0) =
                 (undefined1 *)((long)register0x00000008 + -0xa0);
            *(undefined **)((long)register0x00000008 + -0xe8) = &UNK_01519890;
            if (((((uVar5 != 0) && (*(char *)(uVar5 + 0xe8) != '\0')) && (lVar11 != 0)) &&
                ((*(char *)(uVar5 + 0x100) == '\0' && (*(char *)(lVar11 + 0xe8) != '\0')))) &&
               (*(char *)(lVar11 + 0xe9) == '\0')) {
              /*DG.Tweening.Sequence$$DoInsert*/ func_0x016a231c(*(undefined4 *)(uVar5 + 0xa0),uVar5,lVar11,0);
            }
            return uVar5;
          }
        }
        pcVar14 = (code *)&Atlas_UI_UIChallengeProgressBehaviour__OnDestroy;
        lVar11 = func_0x00f78af4();
        unaff_x19 = uVar6;
        uVar6 = uVar5;
DG_Tweening_ShortcutExtensions__DOKill:
        *(ulong *)(puVar2 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
        *(ulong *)(puVar2 + -0x20) = uVar6;
        *(ulong *)(puVar2 + -0x18) = unaff_x19;
        *(undefined1 **)(puVar2 + -0x10) = (undefined1 *)((long)register0x00000008 + -0xa0);
        *(code **)(puVar2 + -8) = pcVar14;
        if ((bRam0000000003eb5c29 & 1) == 0) {
          func_0x00f78a20(0x3d20bc0,0,0);
          bRam0000000003eb5c29 = 1;
        }
        if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        *(undefined8 *)(puVar2 + -0x30) = *(undefined8 *)(puVar2 + -0x30);
        *(undefined8 *)(puVar2 + -0x28) = *(undefined8 *)(puVar2 + -0x28);
        *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
        *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
        *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
        *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
        if ((bRam0000000003eb5af0 & 1) == 0) {
          func_0x00f78a20(0x3d20bc0,0,0);
          func_0x00f78a20(0x3d25440);
          bRam0000000003eb5af0 = 1;
        }
        if (lVar11 == 0) {
          uVar6 = 0;
        }
        else {
          if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar3 = /*DG.Tweening.Core.TweenManager$$FilteredOperation*/ func_0x016c1874(0,1,1,lVar11,0,0,0,0);
          uVar6 = (ulong)uVar3;
        }
        return uVar6;
      }
    }
    uVar8 = func_0x00f78b24();
    lVar11 = func_0x00f78ac0(uVar8,0);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x30);
    *(undefined1 **)((long)register0x00000008 + -0x30) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x28) =
         Atlas_UI_UIChallengeController__TearDownChallenges;
    *(undefined1 *)(lVar11 + 0x49) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    if ((*(long *)(lVar11 + 0x40) != 0) &&
       (lVar11 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar11 + 0x40),0), lVar11 != 0)) {
      uVar7 = 0;
      puVar1 = (undefined1 *)((long)register0x00000008 + -0x20);
      puVar12 = *(undefined1 **)((long)register0x00000008 + -0x30);
      uVar8 = *(undefined8 *)((long)register0x00000008 + -0x28);
code_r0x0322ef1c:
      *(ulong *)(puVar1 + -0x30) = unaff_x22;
      *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
      *(ulong *)(puVar1 + -0x20) = uVar6;
      *(ulong *)(puVar1 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar1 + -0x10) = puVar12;
      *(undefined8 *)(puVar1 + -8) = uVar8;
      if (pcRam0000000003ebf4c0 == (code *)0x0) {
        pcRam0000000003ebf4c0 =
             (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
      }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*pcRam0000000003ebf4c0)(lVar11,uVar7);
      return uVar6;
    }
    unaff_x30 = Atlas_UI_UIChallengeController__OnUpdate;
    param_1 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
    unaff_x20 = uVar6;
  } while( true );
}



// ============================================================
// RVA: 0x1518f8c | Atlas.UI.UIChallengeController.ResetSetAllChallengeVisuals
// ============================================================

/* WARNING: Possible PIC construction at 0x01518fa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01512468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015124bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01519168: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01519188: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015191a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165026c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151923c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151925c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151927c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01519334: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151988c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015198d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01519910: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015198dc) */
/* WARNING: Removing unreachable block (ram,0x015198e4) */
/* WARNING: Removing unreachable block (ram,0x01519890) */
/* WARNING: Removing unreachable block (ram,0x015198a8) */
/* WARNING: Removing unreachable block (ram,0x01519338) */
/* WARNING: Removing unreachable block (ram,0x01519340) */
/* WARNING: Removing unreachable block (ram,0x01519348) */
/* WARNING: Removing unreachable block (ram,0x01519350) */
/* WARNING: Removing unreachable block (ram,0x01519354) */
/* WARNING: Removing unreachable block (ram,0x0151936c) */
/* WARNING: Removing unreachable block (ram,0x01519374) */
/* WARNING: Removing unreachable block (ram,0x01519280) */
/* WARNING: Removing unreachable block (ram,0x01519288) */
/* WARNING: Removing unreachable block (ram,0x015192a4) */
/* WARNING: Removing unreachable block (ram,0x015192b4) */
/* WARNING: Removing unreachable block (ram,0x01519260) */
/* WARNING: Removing unreachable block (ram,0x01519268) */
/* WARNING: Removing unreachable block (ram,0x01519274) */
/* WARNING: Removing unreachable block (ram,0x01519240) */
/* WARNING: Removing unreachable block (ram,0x01519248) */
/* WARNING: Removing unreachable block (ram,0x01519254) */
/* WARNING: Removing unreachable block (ram,0x01650270) */
/* WARNING: Removing unreachable block (ram,0x01650280) */
/* WARNING: Removing unreachable block (ram,0x015191ac) */
/* WARNING: Removing unreachable block (ram,0x015191b4) */
/* WARNING: Removing unreachable block (ram,0x015191cc) */
/* WARNING: Removing unreachable block (ram,0x0164ff98) */
/* WARNING: Removing unreachable block (ram,0x0164ffc4) */
/* WARNING: Removing unreachable block (ram,0x0164ffd8) */
/* WARNING: Removing unreachable block (ram,0x0164ffe0) */
/* WARNING: Removing unreachable block (ram,0x0164ffe4) */
/* WARNING: Removing unreachable block (ram,0x01650008) */
/* WARNING: Removing unreachable block (ram,0x01650014) */
/* WARNING: Removing unreachable block (ram,0x01650030) */
/* WARNING: Removing unreachable block (ram,0x0165003c) */
/* WARNING: Removing unreachable block (ram,0x01650050) */
/* WARNING: Removing unreachable block (ram,0x01650058) */
/* WARNING: Removing unreachable block (ram,0x01650194) */
/* WARNING: Removing unreachable block (ram,0x016501c8) */
/* WARNING: Removing unreachable block (ram,0x016501e8) */
/* WARNING: Removing unreachable block (ram,0x016501f4) */
/* WARNING: Removing unreachable block (ram,0x016501fc) */
/* WARNING: Removing unreachable block (ram,0x01650200) */
/* WARNING: Removing unreachable block (ram,0x01650298) */
/* WARNING: Removing unreachable block (ram,0x0165020c) */
/* WARNING: Removing unreachable block (ram,0x01650218) */
/* WARNING: Removing unreachable block (ram,0x01650220) */
/* WARNING: Removing unreachable block (ram,0x01650228) */
/* WARNING: Removing unreachable block (ram,0x016502ac) */
/* WARNING: Removing unreachable block (ram,0x01650234) */
/* WARNING: Removing unreachable block (ram,0x0165024c) */
/* WARNING: Removing unreachable block (ram,0x01650254) */
/* WARNING: Removing unreachable block (ram,0x01650258) */
/* WARNING: Removing unreachable block (ram,0x016502b0) */
/* WARNING: Removing unreachable block (ram,0x016502f4) */
/* WARNING: Removing unreachable block (ram,0x0165032c) */
/* WARNING: Removing unreachable block (ram,0x01650338) */
/* WARNING: Removing unreachable block (ram,0x01650340) */
/* WARNING: Removing unreachable block (ram,0x01650348) */
/* WARNING: Removing unreachable block (ram,0x01650354) */
/* WARNING: Removing unreachable block (ram,0x01650384) */
/* WARNING: Removing unreachable block (ram,0x0165038c) */
/* WARNING: Removing unreachable block (ram,0x01650390) */
/* WARNING: Removing unreachable block (ram,0x016503b8) */
/* WARNING: Removing unreachable block (ram,0x016503c0) */
/* WARNING: Removing unreachable block (ram,0x016503c4) */
/* WARNING: Removing unreachable block (ram,0x01650414) */
/* WARNING: Removing unreachable block (ram,0x0165041c) */
/* WARNING: Removing unreachable block (ram,0x01650420) */
/* WARNING: Removing unreachable block (ram,0x0165043c) */
/* WARNING: Removing unreachable block (ram,0x01650444) */
/* WARNING: Removing unreachable block (ram,0x01650450) */
/* WARNING: Removing unreachable block (ram,0x01650458) */
/* WARNING: Removing unreachable block (ram,0x01650460) */
/* WARNING: Removing unreachable block (ram,0x0165048c) */
/* WARNING: Removing unreachable block (ram,0x016504e4) */
/* WARNING: Removing unreachable block (ram,0x01650514) */
/* WARNING: Removing unreachable block (ram,0x01650540) */
/* WARNING: Removing unreachable block (ram,0x01650548) */
/* WARNING: Removing unreachable block (ram,0x0165055c) */
/* WARNING: Removing unreachable block (ram,0x01650570) */
/* WARNING: Removing unreachable block (ram,0x01650584) */
/* WARNING: Removing unreachable block (ram,0x01650598) */
/* WARNING: Removing unreachable block (ram,0x016505c4) */
/* WARNING: Removing unreachable block (ram,0x01650614) */
/* WARNING: Removing unreachable block (ram,0x0165064c) */
/* WARNING: Removing unreachable block (ram,0x01650678) */
/* WARNING: Removing unreachable block (ram,0x01650694) */
/* WARNING: Removing unreachable block (ram,0x016506a0) */
/* WARNING: Removing unreachable block (ram,0x016506b4) */
/* WARNING: Removing unreachable block (ram,0x016506f8) */
/* WARNING: Removing unreachable block (ram,0x016506bc) */
/* WARNING: Removing unreachable block (ram,0x01650704) */
/* WARNING: Removing unreachable block (ram,0x01650738) */
/* WARNING: Removing unreachable block (ram,0x01650794) */
/* WARNING: Removing unreachable block (ram,0x0165079c) */
/* WARNING: Removing unreachable block (ram,0x016507b0) */
/* WARNING: Removing unreachable block (ram,0x016507bc) */
/* WARNING: Removing unreachable block (ram,0x016507cc) */
/* WARNING: Removing unreachable block (ram,0x016507d4) */
/* WARNING: Removing unreachable block (ram,0x016507dc) */
/* WARNING: Removing unreachable block (ram,0x016507e4) */
/* WARNING: Removing unreachable block (ram,0x016507fc) */
/* WARNING: Removing unreachable block (ram,0x01650804) */
/* WARNING: Removing unreachable block (ram,0x0165080c) */
/* WARNING: Removing unreachable block (ram,0x01650838) */
/* WARNING: Removing unreachable block (ram,0x016508d8) */
/* WARNING: Removing unreachable block (ram,0x0165090c) */
/* WARNING: Removing unreachable block (ram,0x0165092c) */
/* WARNING: Removing unreachable block (ram,0x01650934) */
/* WARNING: Removing unreachable block (ram,0x0165093c) */
/* WARNING: Removing unreachable block (ram,0x01650948) */
/* WARNING: Removing unreachable block (ram,0x0165094c) */
/* WARNING: Removing unreachable block (ram,0x01650954) */
/* WARNING: Removing unreachable block (ram,0x0165095c) */
/* WARNING: Removing unreachable block (ram,0x01650968) */
/* WARNING: Removing unreachable block (ram,0x0165097c) */
/* WARNING: Removing unreachable block (ram,0x01650988) */
/* WARNING: Removing unreachable block (ram,0x01650998) */
/* WARNING: Removing unreachable block (ram,0x016509a4) */
/* WARNING: Removing unreachable block (ram,0x016509a8) */
/* WARNING: Removing unreachable block (ram,0x016509b0) */
/* WARNING: Removing unreachable block (ram,0x016509bc) */
/* WARNING: Removing unreachable block (ram,0x016509d4) */
/* WARNING: Removing unreachable block (ram,0x016509d8) */
/* WARNING: Removing unreachable block (ram,0x016509e0) */
/* WARNING: Removing unreachable block (ram,0x016509f8) */
/* WARNING: Removing unreachable block (ram,0x01650a14) */
/* WARNING: Removing unreachable block (ram,0x01650a28) */
/* WARNING: Removing unreachable block (ram,0x01650a34) */
/* WARNING: Removing unreachable block (ram,0x01650a3c) */
/* WARNING: Removing unreachable block (ram,0x01650a4c) */
/* WARNING: Removing unreachable block (ram,0x01650a5c) */
/* WARNING: Removing unreachable block (ram,0x01650a64) */
/* WARNING: Removing unreachable block (ram,0x01650a6c) */
/* WARNING: Removing unreachable block (ram,0x01650a78) */
/* WARNING: Removing unreachable block (ram,0x01650a7c) */
/* WARNING: Removing unreachable block (ram,0x01650a84) */
/* WARNING: Removing unreachable block (ram,0x01650a8c) */
/* WARNING: Removing unreachable block (ram,0x01650a98) */
/* WARNING: Removing unreachable block (ram,0x01650aac) */
/* WARNING: Removing unreachable block (ram,0x01650ab8) */
/* WARNING: Removing unreachable block (ram,0x01650ac8) */
/* WARNING: Removing unreachable block (ram,0x01650ad4) */
/* WARNING: Removing unreachable block (ram,0x01650ad8) */
/* WARNING: Removing unreachable block (ram,0x01650ae0) */
/* WARNING: Removing unreachable block (ram,0x01650aec) */
/* WARNING: Removing unreachable block (ram,0x01650b04) */
/* WARNING: Removing unreachable block (ram,0x01650b74) */
/* WARNING: Removing unreachable block (ram,0x01650b0c) */
/* WARNING: Removing unreachable block (ram,0x01650b10) */
/* WARNING: Removing unreachable block (ram,0x01650b80) */
/* WARNING: Removing unreachable block (ram,0x01650b24) */
/* WARNING: Removing unreachable block (ram,0x01650b78) */
/* WARNING: Removing unreachable block (ram,0x01650b84) */
/* WARNING: Removing unreachable block (ram,0x01650b30) */
/* WARNING: Removing unreachable block (ram,0x01650b38) */
/* WARNING: Removing unreachable block (ram,0x01650b48) */
/* WARNING: Removing unreachable block (ram,0x01650b58) */
/* WARNING: Removing unreachable block (ram,0x01650848) */
/* WARNING: Removing unreachable block (ram,0x016508c0) */
/* WARNING: Removing unreachable block (ram,0x01650898) */
/* WARNING: Removing unreachable block (ram,0x01e47f3c) */
/* WARNING: Removing unreachable block (ram,0x01e47f7c) */
/* WARNING: Removing unreachable block (ram,0x01e47f6c) */
/* WARNING: Removing unreachable block (ram,0x01e47f74) */
/* WARNING: Removing unreachable block (ram,0x01e47f84) */
/* WARNING: Removing unreachable block (ram,0x01e47f88) */
/* WARNING: Removing unreachable block (ram,0x01e47fa0) */
/* WARNING: Removing unreachable block (ram,0x01e47fa8) */
/* WARNING: Removing unreachable block (ram,0x01e47fd4) */
/* WARNING: Removing unreachable block (ram,0x01e48058) */
/* WARNING: Removing unreachable block (ram,0x01e48064) */
/* WARNING: Removing unreachable block (ram,0x01e4806c) */
/* WARNING: Removing unreachable block (ram,0x01e480e4) */
/* WARNING: Removing unreachable block (ram,0x01e48148) */
/* WARNING: Removing unreachable block (ram,0x01e480ec) */
/* WARNING: Removing unreachable block (ram,0x01e48104) */
/* WARNING: Removing unreachable block (ram,0x01e4810c) */
/* WARNING: Removing unreachable block (ram,0x01e481ec) */
/* WARNING: Removing unreachable block (ram,0x01e48118) */
/* WARNING: Removing unreachable block (ram,0x01e48124) */
/* WARNING: Removing unreachable block (ram,0x01e481fc) */
/* WARNING: Removing unreachable block (ram,0x01e48084) */
/* WARNING: Removing unreachable block (ram,0x01e48134) */
/* WARNING: Removing unreachable block (ram,0x01e48088) */
/* WARNING: Removing unreachable block (ram,0x01e4809c) */
/* WARNING: Removing unreachable block (ram,0x01e480a4) */
/* WARNING: Removing unreachable block (ram,0x01e481c4) */
/* WARNING: Removing unreachable block (ram,0x01e480b0) */
/* WARNING: Removing unreachable block (ram,0x01e480bc) */
/* WARNING: Removing unreachable block (ram,0x01e481d4) */
/* WARNING: Removing unreachable block (ram,0x01e481d8) */
/* WARNING: Removing unreachable block (ram,0x01e48200) */
/* WARNING: Removing unreachable block (ram,0x01e47fd8) */
/* WARNING: Removing unreachable block (ram,0x01e47fdc) */
/* WARNING: Removing unreachable block (ram,0x01e47fe8) */
/* WARNING: Removing unreachable block (ram,0x01e47ff4) */
/* WARNING: Removing unreachable block (ram,0x01e47ffc) */
/* WARNING: Removing unreachable block (ram,0x01e48160) */
/* WARNING: Removing unreachable block (ram,0x01e4820c) */
/* WARNING: Removing unreachable block (ram,0x01e48168) */
/* WARNING: Removing unreachable block (ram,0x01e48180) */
/* WARNING: Removing unreachable block (ram,0x01e48188) */
/* WARNING: Removing unreachable block (ram,0x01e48250) */
/* WARNING: Removing unreachable block (ram,0x01e48194) */
/* WARNING: Removing unreachable block (ram,0x01e481a0) */
/* WARNING: Removing unreachable block (ram,0x01e48260) */
/* WARNING: Removing unreachable block (ram,0x01e48014) */
/* WARNING: Removing unreachable block (ram,0x01e481b0) */
/* WARNING: Removing unreachable block (ram,0x01e48018) */
/* WARNING: Removing unreachable block (ram,0x01e4802c) */
/* WARNING: Removing unreachable block (ram,0x01e48034) */
/* WARNING: Removing unreachable block (ram,0x01e48228) */
/* WARNING: Removing unreachable block (ram,0x01e48040) */
/* WARNING: Removing unreachable block (ram,0x01e4804c) */
/* WARNING: Removing unreachable block (ram,0x01e48238) */
/* WARNING: Removing unreachable block (ram,0x01e4823c) */
/* WARNING: Removing unreachable block (ram,0x01e48264) */
/* WARNING: Removing unreachable block (ram,0x01e47fbc) */
/* WARNING: Removing unreachable block (ram,0x01e480c8) */
/* WARNING: Removing unreachable block (ram,0x01e47fc0) */
/* WARNING: Removing unreachable block (ram,0x01e480d4) */
/* WARNING: Removing unreachable block (ram,0x01e480e0) */
/* WARNING: Removing unreachable block (ram,0x01e48274) */
/* WARNING: Removing unreachable block (ram,0x0165082c) */
/* WARNING: Removing unreachable block (ram,0x016506c0) */
/* WARNING: Removing unreachable block (ram,0x016506e0) */
/* WARNING: Removing unreachable block (ram,0x016505cc) */
/* WARNING: Removing unreachable block (ram,0x016505f4) */
/* WARNING: Removing unreachable block (ram,0x016505b4) */
/* WARNING: Removing unreachable block (ram,0x016505f8) */
/* WARNING: Removing unreachable block (ram,0x016504a0) */
/* WARNING: Removing unreachable block (ram,0x016504d4) */
/* WARNING: Removing unreachable block (ram,0x016504b8) */
/* WARNING: Removing unreachable block (ram,0x029cbbf0) */
/* WARNING: Removing unreachable block (ram,0x029cbc18) */
/* WARNING: Removing unreachable block (ram,0x029cbc2c) */
/* WARNING: Removing unreachable block (ram,0x029cbca0) */
/* WARNING: Removing unreachable block (ram,0x029cbc30) */
/* WARNING: Removing unreachable block (ram,0x029cbcac) */
/* WARNING: Removing unreachable block (ram,0x029cbcb4) */
/* WARNING: Removing unreachable block (ram,0x029cbc3c) */
/* WARNING: Removing unreachable block (ram,0x029cbce4) */
/* WARNING: Removing unreachable block (ram,0x029cbc40) */
/* WARNING: Removing unreachable block (ram,0x029cbcf0) */
/* WARNING: Removing unreachable block (ram,0x029cbcf8) */
/* WARNING: Removing unreachable block (ram,0x029cbd24) */
/* WARNING: Removing unreachable block (ram,0x029cbc4c) */
/* WARNING: Removing unreachable block (ram,0x029cbc78) */
/* WARNING: Removing unreachable block (ram,0x029cbc50) */
/* WARNING: Removing unreachable block (ram,0x029cbc54) */
/* WARNING: Removing unreachable block (ram,0x029cbc8c) */
/* WARNING: Removing unreachable block (ram,0x029cbc5c) */
/* WARNING: Removing unreachable block (ram,0x029cbd60) */
/* WARNING: Removing unreachable block (ram,0x029cbdb8) */
/* WARNING: Removing unreachable block (ram,0x029cbdc0) */
/* WARNING: Removing unreachable block (ram,0x029cbdd0) */
/* WARNING: Removing unreachable block (ram,0x029cbdc8) */
/* WARNING: Removing unreachable block (ram,0x029cbf24) */
/* WARNING: Removing unreachable block (ram,0x029cbf54) */
/* WARNING: Removing unreachable block (ram,0x029cc044) */
/* WARNING: Removing unreachable block (ram,0x029cbf60) */
/* WARNING: Removing unreachable block (ram,0x029cbf64) */
/* WARNING: Removing unreachable block (ram,0x029cbf74) */
/* WARNING: Removing unreachable block (ram,0x029cbf7c) */
/* WARNING: Removing unreachable block (ram,0x029cbf88) */
/* WARNING: Removing unreachable block (ram,0x029cbf8c) */
/* WARNING: Removing unreachable block (ram,0x029cbf94) */
/* WARNING: Removing unreachable block (ram,0x029cbfb4) */
/* WARNING: Removing unreachable block (ram,0x029cbfa4) */
/* WARNING: Removing unreachable block (ram,0x029cbfb0) */
/* WARNING: Removing unreachable block (ram,0x029cbfb8) */
/* WARNING: Removing unreachable block (ram,0x029cbfc0) */
/* WARNING: Removing unreachable block (ram,0x029cbfd0) */
/* WARNING: Removing unreachable block (ram,0x029cc04c) */
/* WARNING: Removing unreachable block (ram,0x029cbfd4) */
/* WARNING: Removing unreachable block (ram,0x029cbf4c) */
/* WARNING: Removing unreachable block (ram,0x029cbfd8) */
/* WARNING: Removing unreachable block (ram,0x029cbfe4) */
/* WARNING: Removing unreachable block (ram,0x029cbff4) */
/* WARNING: Removing unreachable block (ram,0x029cbffc) */
/* WARNING: Removing unreachable block (ram,0x029cc008) */
/* WARNING: Removing unreachable block (ram,0x029cc00c) */
/* WARNING: Removing unreachable block (ram,0x029cc070) */
/* WARNING: Removing unreachable block (ram,0x029cc07c) */
/* WARNING: Removing unreachable block (ram,0x029cc084) */
/* WARNING: Removing unreachable block (ram,0x029cc094) */
/* WARNING: Removing unreachable block (ram,0x029cbdd8) */
/* WARNING: Removing unreachable block (ram,0x029cbe00) */
/* WARNING: Removing unreachable block (ram,0x029cbe14) */
/* WARNING: Removing unreachable block (ram,0x029cbe30) */
/* WARNING: Removing unreachable block (ram,0x029cbe88) */
/* WARNING: Removing unreachable block (ram,0x029cbe38) */
/* WARNING: Removing unreachable block (ram,0x029cbe3c) */
/* WARNING: Removing unreachable block (ram,0x029cbe58) */
/* WARNING: Removing unreachable block (ram,0x029cbe60) */
/* WARNING: Removing unreachable block (ram,0x029cbe64) */
/* WARNING: Removing unreachable block (ram,0x029cbef0) */
/* WARNING: Removing unreachable block (ram,0x029cbe74) */
/* WARNING: Removing unreachable block (ram,0x029cbe84) */
/* WARNING: Removing unreachable block (ram,0x029cbe8c) */
/* WARNING: Removing unreachable block (ram,0x029cbf00) */
/* WARNING: Removing unreachable block (ram,0x029cbe90) */
/* WARNING: Removing unreachable block (ram,0x029cbe28) */
/* WARNING: Removing unreachable block (ram,0x029cbe94) */
/* WARNING: Removing unreachable block (ram,0x029cbe98) */
/* WARNING: Removing unreachable block (ram,0x029cbea4) */
/* WARNING: Removing unreachable block (ram,0x029cbec0) */
/* WARNING: Removing unreachable block (ram,0x029cbec8) */
/* WARNING: Removing unreachable block (ram,0x029cbecc) */
/* WARNING: Removing unreachable block (ram,0x029cbee0) */
/* WARNING: Removing unreachable block (ram,0x029cbf04) */
/* WARNING: Removing unreachable block (ram,0x029cc08c) */
/* WARNING: Removing unreachable block (ram,0x029cc014) */
/* WARNING: Removing unreachable block (ram,0x029cc034) */
/* WARNING: Removing unreachable block (ram,0x029cc024) */
/* WARNING: Removing unreachable block (ram,0x029cc030) */
/* WARNING: Removing unreachable block (ram,0x029cc038) */
/* WARNING: Removing unreachable block (ram,0x029cc040) */
/* WARNING: Removing unreachable block (ram,0x029cc050) */
/* WARNING: Removing unreachable block (ram,0x029cef10) */
/* WARNING: Removing unreachable block (ram,0x029cef38) */
/* WARNING: Removing unreachable block (ram,0x029cef4c) */
/* WARNING: Removing unreachable block (ram,0x029cef60) */
/* WARNING: Removing unreachable block (ram,0x029cef7c) */
/* WARNING: Removing unreachable block (ram,0x029cef90) */
/* WARNING: Removing unreachable block (ram,0x029cef64) */
/* WARNING: Removing unreachable block (ram,0x029cbd88) */
/* WARNING: Removing unreachable block (ram,0x0165046c) */
/* WARNING: Removing unreachable block (ram,0x01650064) */
/* WARNING: Removing unreachable block (ram,0x0165007c) */
/* WARNING: Removing unreachable block (ram,0x01650084) */
/* WARNING: Removing unreachable block (ram,0x0165008c) */
/* WARNING: Removing unreachable block (ram,0x01650098) */
/* WARNING: Removing unreachable block (ram,0x016500b4) */
/* WARNING: Removing unreachable block (ram,0x016500c0) */
/* WARNING: Removing unreachable block (ram,0x016500c8) */
/* WARNING: Removing unreachable block (ram,0x016500d0) */
/* WARNING: Removing unreachable block (ram,0x016500dc) */
/* WARNING: Removing unreachable block (ram,0x01650114) */
/* WARNING: Removing unreachable block (ram,0x01650128) */
/* WARNING: Removing unreachable block (ram,0x01650130) */
/* WARNING: Removing unreachable block (ram,0x01650138) */
/* WARNING: Removing unreachable block (ram,0x01650144) */
/* WARNING: Removing unreachable block (ram,0x01650178) */
/* WARNING: Removing unreachable block (ram,0x029d2384) */
/* WARNING: Removing unreachable block (ram,0x016500ec) */
/* WARNING: Removing unreachable block (ram,0x016500f8) */
/* WARNING: Removing unreachable block (ram,0x016500fc) */
/* WARNING: Removing unreachable block (ram,0x0151918c) */
/* WARNING: Removing unreachable block (ram,0x01519194) */
/* WARNING: Removing unreachable block (ram,0x015191a0) */
/* WARNING: Removing unreachable block (ram,0x0151916c) */
/* WARNING: Removing unreachable block (ram,0x01519174) */
/* WARNING: Removing unreachable block (ram,0x01519180) */
/* WARNING: Removing unreachable block (ram,0x015124c0) */
/* WARNING: Removing unreachable block (ram,0x015124c8) */
/* WARNING: Removing unreachable block (ram,0x015124e0) */
/* WARNING: Removing unreachable block (ram,0x0151246c) */
/* WARNING: Removing unreachable block (ram,0x01512474) */
/* WARNING: Removing unreachable block (ram,0x0151248c) */
/* WARNING: Removing unreachable block (ram,0x015124a8) */
/* WARNING: Removing unreachable block (ram,0x015124b4) */
/* WARNING: Removing unreachable block (ram,0x01518fa8) */
/* WARNING: Removing unreachable block (ram,0x01518fb0) */
/* WARNING: Removing unreachable block (ram,0x01518fb8) */
/* WARNING: Removing unreachable block (ram,0x01518fc0) */
/* WARNING: Removing unreachable block (ram,0x01518fc8) */
/* WARNING: Removing unreachable block (ram,0x01518fd0) */
/* WARNING: Removing unreachable block (ram,0x01518fd8) */
/* WARNING: Removing unreachable block (ram,0x01518fe0) */
/* WARNING: Removing unreachable block (ram,0x01518fe4) */
/* WARNING: Removing unreachable block (ram,0x01518fec) */
/* WARNING: Removing unreachable block (ram,0x01518ff4) */
/* WARNING: Removing unreachable block (ram,0x01518ffc) */
/* WARNING: Removing unreachable block (ram,0x01519008) */
/* WARNING: Removing unreachable block (ram,0x01519010) */
/* WARNING: Removing unreachable block (ram,0x01519018) */
/* WARNING: Removing unreachable block (ram,0x0151901c) */
/* WARNING: Removing unreachable block (ram,0x0151905c) */
/* WARNING: Removing unreachable block (ram,0x01519024) */
/* WARNING: Removing unreachable block (ram,0x0151902c) */
/* WARNING: Removing unreachable block (ram,0x01519034) */
/* WARNING: Removing unreachable block (ram,0x01519040) */
/* WARNING: Removing unreachable block (ram,0x01519048) */
/* WARNING: Removing unreachable block (ram,0x01519050) */
/* WARNING: Removing unreachable block (ram,0x01519914) */
/* WARNING: Removing unreachable block (ram,0x01519934) */
/* WARNING: Removing unreachable block (ram,0x015199c4) */
/* WARNING: Removing unreachable block (ram,0x01519a40) */
/* WARNING: Removing unreachable block (ram,0x01696338) */
/* WARNING: Removing unreachable block (ram,0x0169634c) */
/* WARNING: Removing unreachable block (ram,0x01696354) */
/* WARNING: Removing unreachable block (ram,0x01696358) */
/* WARNING: Type propagation algorithm not settling */

ulong Atlas_UI_UIChallengeController__ResetSetAllChallengeVisuals
                (long param_1,undefined8 param_2,ulong param_3,ulong param_4,ulong param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *******pppppppuVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong extraout_x1;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  ulong unaff_x20;
  ulong unaff_x21;
  ulong uVar12;
  ulong unaff_x22;
  undefined8 *******pppppppuVar13;
  code *pcVar14;
  undefined *puVar15;
  float fVar16;
  float extraout_s0;
  float extraout_s0_00;
  undefined1 auVar17 [16];
  undefined8 *******pppppppuStack_160;
  undefined *puStack_158;
  undefined8 *******pppppppuStack_130;
  undefined *puStack_128;
  undefined8 *******pppppppuStack_f0;
  undefined *puStack_e8;
  undefined8 *******pppppppuStack_b0;
  undefined *puStack_a8;
  undefined8 *******pppppppuStack_80;
  undefined *puStack_78;
  ulong uStack_70;
  ulong uStack_68;
  undefined8 *******pppppppuStack_60;
  undefined *puStack_58;
  undefined8 *******pppppppuStack_50;
  undefined *puStack_48;
  undefined8 ******ppppppuStack_30;
  undefined *puStack_28;
  
  uVar7 = *(ulong *)(param_1 + 0x40);
  if (uVar7 == 0) {
    func_0x00f78af4();
    uVar8 = func_0x00f78b24();
    puVar15 = &Atlas_UI_UIChallengeProgressBehaviourContainer__ResetAllChallenges;
    uVar7 = func_0x00f78ac0(uVar8,0);
  }
  else {
    puVar15 = (undefined *)0x1518fa8;
  }
  uVar10 = *(ulong *)(uVar7 + 0x20);
  ppppppuStack_30 = (undefined8 ******)&stack0xfffffffffffffff0;
  puStack_28 = puVar15;
  if (uVar10 != 0) {
    uVar5 = *(uint *)(uVar10 + 0x18);
    if (0 < (int)uVar5) {
      unaff_x20 = 0;
      do {
        uVar11 = (uint)unaff_x20;
        if (uVar5 <= uVar11) {
          uVar8 = func_0x00f78b24();
          func_0x00f78ac0(uVar8,0);
          goto code_r0x015190dc;
        }
        if (*(long *)(uVar10 + (long)(int)uVar11 * 8 + 0x20) == 0) goto code_r0x015190dc;
        uVar7 = /*Atlas.UI.UIChallengeProgressBehaviour$$ResetValues*/ func_0x01519a9c();
        unaff_x20 = (ulong)(uVar11 + 1);
        uVar5 = *(uint *)(uVar10 + 0x18);
      } while ((int)(uVar11 + 1) < (int)uVar5);
    }
    return uVar7;
  }
code_r0x015190dc:
  lVar6 = func_0x00f78af4();
  puStack_48 = &Atlas_UI_UIChallengeProgressBehaviour__ShowCompletedFlag;
  uVar7 = *(ulong *)(lVar6 + 0x50);
  pppppppuStack_50 = &ppppppuStack_30;
  if (uVar7 == 0) {
    auVar17 = func_0x00f78af4();
    uVar8 = auVar17._8_8_;
    puStack_58 = &Atlas_UI_UIChallengeProgressBehaviour__SetVisible;
    uStack_70 = unaff_x20;
    uStack_68 = uVar10;
    pppppppuStack_60 = &pppppppuStack_50;
    lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(auVar17._0_8_,0);
    if (lVar6 != 0) {
      pppppppuVar3 = &pppppppuStack_50;
      uVar7 = uStack_68;
      uVar10 = uStack_70;
      uVar12 = unaff_x21;
      pppppppuVar13 = pppppppuStack_60;
      puVar15 = puStack_58;
      goto code_r0x0322ef1c;
    }
    auVar17 = func_0x00f78af4();
    uVar12 = auVar17._8_8_;
    uVar10 = auVar17._0_8_;
    pppppppuVar3 = (undefined8 *******)&stack0xffffffffffffff60;
    puStack_78 = &Atlas_UI_UIChallengeProgressBehaviour__Set;
    uVar7 = param_3;
    pppppppuStack_80 = &pppppppuStack_60;
    if ((*(long *)(uVar10 + 0x40) != 0) &&
       (lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(uVar10 + 0x40),0), unaff_x21 = uVar12, lVar6 != 0)) {
      uVar8 = 0;
      puVar15 = &UNK_0151916c;
      uVar7 = param_3;
      pppppppuVar13 = &pppppppuStack_80;
      goto code_r0x0322ef1c;
    }
    auVar17 = func_0x00f78af4();
    uVar12 = auVar17._8_8_;
    uVar10 = auVar17._0_8_;
    pppppppuVar3 = (undefined8 *******)&stack0xffffffffffffff20;
    puStack_a8 = &Atlas_UI_UIChallengeProgressBehaviour__Set;
    pppppppuVar13 = &pppppppuStack_b0;
    uVar9 = uVar7;
    pppppppuStack_b0 = &pppppppuStack_80;
    if (*(long *)(uVar10 + 0x38) != 0) {
      Atlas_UI_SlantFillBar__Init(*(long *)(uVar10 + 0x38),0);
      unaff_x21 = uVar12;
      if ((*(long *)(uVar10 + 0x40) != 0) &&
         (lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(uVar10 + 0x40),0), lVar6 != 0)) {
        uVar8 = 1;
        puVar15 = &UNK_01519240;
        goto code_r0x0322ef1c;
      }
    }
    uVar7 = func_0x00f78af4();
    puStack_e8 = &Atlas_UI_UIChallengeController__UpdateChallengeProgress;
    pppppppuStack_f0 = pppppppuVar13;
    if (param_4 == 0) {
code_r0x01519390:
      puVar15 = &Atlas_UI_UIChallengeProgressBehaviour__UpdateFillBar;
      param_4 = func_0x00f78af4();
      param_5 = extraout_x1;
      fVar16 = extraout_s0;
    }
    else {
      if (*(char *)(param_4 + 0x90) != '\0') {
        return uVar7;
      }
      if (*(long *)(uVar7 + 0x30) == 0) goto code_r0x01519390;
      uVar7 = 0;
      iVar4 = /*Atlas.Stats.StatsManager$$GetSummedStats*/ func_0x015045f8();
      unaff_x22 = uVar9 >> 0x20;
      fVar16 = (float)iVar4 / (float)(int)(uVar9 >> 0x20);
      puVar15 = &UNK_01519338;
      uVar9 = uVar7;
      unaff_x21 = param_5;
    }
    pppppppuStack_130 = &pppppppuStack_f0;
    puStack_128 = puVar15;
    uVar7 = /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(fVar16,0);
    if (extraout_s0_00 == *(float *)(param_4 + 0x8c)) {
      return uVar7;
    }
    lVar6 = *(long *)(param_4 + 0x38);
    if ((int)param_5 == 0) {
      if (lVar6 != 0) {
        uVar7 = Atlas_UI_SlantFillBar__SetProgress(extraout_s0_00,lVar6,0);
        goto code_r0x015193f4;
      }
    }
    else if (lVar6 != 0) {
      uVar7 = Atlas_UI_SlantFillBar__SetTargetProgress(extraout_s0_00,lVar6,0,0);
code_r0x015193f4:
      *(float *)(param_4 + 0x8c) = extraout_s0_00;
      return uVar7;
    }
    auVar17 = func_0x00f78af4();
    uVar10 = auVar17._8_8_;
    puStack_158 = &Atlas_UI_UIChallengeProgressBehaviourContainer__SetChallengeComplete;
    lVar6 = *(long *)(auVar17._0_8_ + 0x18);
    pppppppuStack_160 = &pppppppuStack_130;
    if ((lVar6 == 0) || (uVar10 == 0)) {
      uVar7 = func_0x00f78af4();
      return uVar7;
    }
    puVar2 = &stack0xfffffffffffffe60;
    puStack_158 = &Atlas_UI_UIChallengeProgressBehaviourContainer__SetChallengeComplete;
    pppppppuVar13 = &pppppppuStack_160;
    uVar12 = 0x3eb4000;
    uVar7 = uVar10;
    if ((bRam0000000003eb4dd0 & 1) == 0) {
      func_0x00f78a20(*(undefined4 *)(lVar6 + 0x58),0x3d25428);
      func_0x00f78a20(0x3d5e6d8);
      func_0x00f78a20(0x3d5e710);
      func_0x00f78a20(0x3d5e7b0);
      func_0x00f78a20(0x3d5e7a0);
      func_0x00f78a20(0x3d5e7a8);
      func_0x00f78a20(0x3d5f6c8);
      func_0x00f78a20(0x3d5f6d0);
      func_0x00f78a20(0x3d790e0);
      uVar7 = func_0x00f78a20(0x3d65d08);
      bRam0000000003eb4dd0 = 1;
    }
    if (*(char *)(uVar10 + 0x90) != '\0') {
      return uVar7;
    }
    if ((uVar9 & 1) == 0) {
      uVar7 = *(ulong *)(uVar10 + 0x50);
      if (uVar7 != 0) {
        puVar1 = &stack0xfffffffffffffeb0;
        pppppppuVar13 = pppppppuStack_160;
        puVar15 = puStack_158;
        goto code_r0x0151243c;
      }
    }
    else {
      *(undefined1 *)(uVar10 + 0x90) = 1;
      Atlas_Audio_UIAudio__Play(/*STR('event:/UI/HUD/ChallengeComplete')*/ uRam0000000003d790e0);
      if (*(long *)(uVar10 + 0x50) != 0) {
        uVar7 = Atlas_UI_UIAnimatingFlagsBehaviour__PlayCompleteAnimation
                          (0,*(long *)(uVar10 + 0x50),/*STR('')*/ uRam0000000003d65d08);
        *(ulong *)(uVar10 + 0x98) = uVar7;
        uVar8 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3d90(0,0x3f800000,0x3f800000,*(undefined4 *)(uVar10 + 0x58),
                                *(undefined8 *)(uVar10 + 0x28),0);
        lVar6 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar8,*(undefined4 *)(uVar10 + 0x5c),uRam0000000003d5e7a8);
        if (((((uVar7 != 0) && (*(char *)(uVar7 + 0xe8) != '\0')) && (lVar6 != 0)) &&
            ((*(char *)(uVar7 + 0x100) == '\0' && (*(char *)(lVar6 + 0xe8) != '\0')))) &&
           (*(char *)(lVar6 + 0xe9) == '\0')) {
          /*DG.Tweening.Sequence$$DoInsert*/ func_0x016a231c(*(undefined4 *)(uVar7 + 0xa0),uVar7,lVar6,0);
        }
        return uVar7;
      }
    }
    pcVar14 = (code *)&Atlas_UI_UIChallengeProgressBehaviour__OnDestroy;
    lVar6 = func_0x00f78af4();
  }
  else {
    puVar1 = &stack0xffffffffffffffc0;
    param_4 = uVar10;
    param_5 = unaff_x20;
    pppppppuVar13 = &ppppppuStack_30;
    puVar15 = puStack_48;
code_r0x0151243c:
    pppppppuVar3 = (undefined8 *******)(puVar1 + -0x20);
    puVar2 = puVar1 + -0x20;
    *(ulong *)(puVar1 + -0x20) = param_5;
    *(ulong *)(puVar1 + -0x18) = param_4;
    *(undefined8 ********)(puVar1 + -0x10) = pppppppuVar13;
    *(undefined **)(puVar1 + -8) = puVar15;
    pppppppuVar13 = (undefined8 *******)(puVar1 + -0x10);
    if ((*(long *)(uVar7 + 0x20) != 0) &&
       (lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(uVar7 + 0x20),0), lVar6 != 0)) {
      uVar8 = 1;
      uVar10 = param_5;
      uVar12 = unaff_x21;
      puVar15 = (undefined *)0x151246c;
code_r0x0322ef1c:
      *(ulong *)((long)pppppppuVar3 + -0x30) = unaff_x22;
      *(ulong *)((long)pppppppuVar3 + -0x28) = uVar12;
      *(ulong *)((long)pppppppuVar3 + -0x20) = uVar10;
      *(ulong *)((long)pppppppuVar3 + -0x18) = uVar7;
      *(undefined8 ********)((long)pppppppuVar3 + -0x10) = pppppppuVar13;
      *(undefined **)((long)pppppppuVar3 + -8) = puVar15;
      if (pcRam0000000003ebf4c0 == (code *)0x0) {
        pcRam0000000003ebf4c0 =
             (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
      }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (*pcRam0000000003ebf4c0)(lVar6,uVar8);
      return uVar7;
    }
    pcVar14 = Atlas_UI_UIAnimatingFlagsBehaviour__OnDestroy;
    lVar6 = func_0x00f78af4();
    uVar10 = uVar7;
    uVar9 = param_5;
    uVar12 = unaff_x21;
  }
  *(ulong *)(puVar2 + -0x30) = unaff_x22;
  *(ulong *)(puVar2 + -0x28) = uVar12;
  *(ulong *)(puVar2 + -0x20) = uVar9;
  *(ulong *)(puVar2 + -0x18) = uVar10;
  *(undefined8 ********)(puVar2 + -0x10) = pppppppuVar13;
  *(code **)(puVar2 + -8) = pcVar14;
  if ((bRam0000000003eb5c29 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0,0,0);
    bRam0000000003eb5c29 = 1;
  }
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)(puVar2 + -0x30) = *(undefined8 *)(puVar2 + -0x30);
  *(undefined8 *)(puVar2 + -0x28) = *(undefined8 *)(puVar2 + -0x28);
  *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
  *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
  *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
  *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
  if ((bRam0000000003eb5af0 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0,0,0);
    func_0x00f78a20(0x3d25440);
    bRam0000000003eb5af0 = 1;
  }
  if (lVar6 == 0) {
    uVar7 = 0;
  }
  else {
    if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = /*DG.Tweening.Core.TweenManager$$FilteredOperation*/ func_0x016c1874(0,1,1,lVar6,0,0,0,0);
    uVar7 = (ulong)uVar5;
  }
  return uVar7;
}



// ============================================================
// RVA: 0x15192d8 | Atlas.UI.UIChallengeController.UpdateChallengeProgress
// ============================================================

/* WARNING: Possible PIC construction at 0x01519334: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151988c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015198d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01519910: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015198dc) */
/* WARNING: Removing unreachable block (ram,0x015198e4) */
/* WARNING: Removing unreachable block (ram,0x01519890) */
/* WARNING: Removing unreachable block (ram,0x015198a8) */
/* WARNING: Removing unreachable block (ram,0x01519338) */
/* WARNING: Removing unreachable block (ram,0x01519340) */
/* WARNING: Removing unreachable block (ram,0x01519348) */
/* WARNING: Removing unreachable block (ram,0x01519350) */
/* WARNING: Removing unreachable block (ram,0x01519354) */
/* WARNING: Removing unreachable block (ram,0x0151936c) */
/* WARNING: Removing unreachable block (ram,0x01519374) */
/* WARNING: Removing unreachable block (ram,0x01519914) */
/* WARNING: Removing unreachable block (ram,0x01519934) */
/* WARNING: Removing unreachable block (ram,0x015199c4) */
/* WARNING: Removing unreachable block (ram,0x01519a40) */
/* WARNING: Removing unreachable block (ram,0x01696338) */
/* WARNING: Removing unreachable block (ram,0x0169634c) */
/* WARNING: Removing unreachable block (ram,0x01696354) */
/* WARNING: Removing unreachable block (ram,0x01696358) */

ulong Atlas_UI_UIChallengeController__UpdateChallengeProgress
                (ulong param_1,undefined8 param_2,ulong param_3,long param_4,ulong param_5)

{
  ulong *puVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong extraout_x1;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong unaff_x21;
  ulong unaff_x22;
  undefined *puVar10;
  code *pcVar11;
  float fVar12;
  float extraout_s0;
  float extraout_s0_00;
  undefined1 auVar13 [16];
  ulong uStack_90;
  long lStack_88;
  undefined1 **ppuStack_80;
  undefined *puStack_78;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  if (param_4 == 0) {
LAB_01519390:
    puVar10 = &Atlas_UI_UIChallengeProgressBehaviour__UpdateFillBar;
    param_4 = func_0x00f78af4();
    param_5 = extraout_x1;
    fVar12 = extraout_s0;
  }
  else {
    if (*(char *)(param_4 + 0x90) != '\0') {
      return param_1;
    }
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_01519390;
    uVar7 = 0;
    iVar2 = /*Atlas.Stats.StatsManager$$GetSummedStats*/ func_0x015045f8();
    unaff_x22 = param_3 >> 0x20;
    fVar12 = (float)iVar2 / (float)(int)(param_3 >> 0x20);
    puVar10 = (undefined *)0x1519338;
    param_3 = uVar7;
    unaff_x21 = param_5;
  }
  puStack_50 = &stack0xfffffffffffffff0;
  puStack_48 = puVar10;
  uVar7 = /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(fVar12,0);
  if (extraout_s0_00 == *(float *)(param_4 + 0x8c)) {
    return uVar7;
  }
  lVar8 = *(long *)(param_4 + 0x38);
  if ((int)param_5 == 0) {
    if (lVar8 != 0) {
      uVar7 = Atlas_UI_SlantFillBar__SetProgress(extraout_s0_00,lVar8,0);
      goto code_r0x015193f4;
    }
  }
  else if (lVar8 != 0) {
    uVar7 = Atlas_UI_SlantFillBar__SetTargetProgress(extraout_s0_00,lVar8,0,0);
code_r0x015193f4:
    *(float *)(param_4 + 0x8c) = extraout_s0_00;
    return uVar7;
  }
  auVar13 = func_0x00f78af4();
  uVar7 = auVar13._8_8_;
  puStack_78 = &Atlas_UI_UIChallengeProgressBehaviourContainer__SetChallengeComplete;
  lVar8 = *(long *)(auVar13._0_8_ + 0x18);
  ppuStack_80 = &puStack_50;
  if ((lVar8 == 0) || (uVar7 == 0)) {
    uVar7 = func_0x00f78af4();
    return uVar7;
  }
  puVar1 = (ulong *)&stack0xffffffffffffff40;
  puStack_78 = &Atlas_UI_UIChallengeProgressBehaviourContainer__SetChallengeComplete;
  uVar5 = uVar7;
  uStack_90 = param_5;
  lStack_88 = param_4;
  if ((bRam0000000003eb4dd0 & 1) == 0) {
    func_0x00f78a20(*(undefined4 *)(lVar8 + 0x58),0x3d25428);
    func_0x00f78a20(0x3d5e6d8);
    func_0x00f78a20(0x3d5e710);
    func_0x00f78a20(0x3d5e7b0);
    func_0x00f78a20(0x3d5e7a0);
    func_0x00f78a20(0x3d5e7a8);
    func_0x00f78a20(0x3d5f6c8);
    func_0x00f78a20(0x3d5f6d0);
    func_0x00f78a20(0x3d790e0);
    uVar5 = func_0x00f78a20(0x3d65d08);
    bRam0000000003eb4dd0 = 1;
  }
  uVar9 = uStack_90;
  if (*(char *)(uVar7 + 0x90) != '\0') {
    return uVar5;
  }
  if ((param_3 & 1) == 0) {
    uVar5 = *(ulong *)(uVar7 + 0x50);
    if (uVar5 != 0) {
      puVar1 = &uStack_90;
      if ((*(long *)(uVar5 + 0x20) != 0) &&
         (lVar8 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(uVar5 + 0x20),0), lVar8 != 0)) {
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar8,1,0);
        plVar4 = *(long **)(uVar5 + 0x20);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x298))(plVar4,*(undefined8 *)(*plVar4 + 0x2a0));
          plVar4 = *(long **)(uVar5 + 0x20);
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x2a8))(plVar4,*(undefined8 *)(*plVar4 + 0x2b0));
            if ((*(long *)(uVar5 + 0x28) != 0) &&
               (lVar8 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(uVar5 + 0x28),0), lVar8 != 0)) {
              /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar8,1,0);
              plVar4 = *(long **)(uVar5 + 0x20);
              if (plVar4 != (long *)0x0) {
                (**(code **)(*plVar4 + 0x298))(plVar4,*(undefined8 *)(*plVar4 + 0x2a0));
                plVar4 = *(long **)(uVar5 + 0x28);
                if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x015124f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  uVar7 = (**(code **)(*plVar4 + 0x2a8))(plVar4,*(undefined8 *)(*plVar4 + 0x2b0));
                  return uVar7;
                }
              }
            }
          }
        }
      }
      pcVar11 = Atlas_UI_UIAnimatingFlagsBehaviour__OnDestroy;
      lVar8 = func_0x00f78af4();
      goto DG_Tweening_ShortcutExtensions__DOKill;
    }
  }
  else {
    *(undefined1 *)(uVar7 + 0x90) = 1;
    Atlas_Audio_UIAudio__Play(/*STR('event:/UI/HUD/ChallengeComplete')*/ uRam0000000003d790e0);
    if (*(long *)(uVar7 + 0x50) != 0) {
      uVar5 = Atlas_UI_UIAnimatingFlagsBehaviour__PlayCompleteAnimation
                        (0,*(long *)(uVar7 + 0x50),/*STR('')*/ uRam0000000003d65d08);
      *(ulong *)(uVar7 + 0x98) = uVar5;
      uVar6 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3d90(0,0x3f800000,0x3f800000,*(undefined4 *)(uVar7 + 0x58),
                              *(undefined8 *)(uVar7 + 0x28),0);
      lVar8 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar6,*(undefined4 *)(uVar7 + 0x5c),uRam0000000003d5e7a8);
      if (((((uVar5 != 0) && (*(char *)(uVar5 + 0xe8) != '\0')) && (lVar8 != 0)) &&
          ((*(char *)(uVar5 + 0x100) == '\0' && (*(char *)(lVar8 + 0xe8) != '\0')))) &&
         (*(char *)(lVar8 + 0xe9) == '\0')) {
        /*DG.Tweening.Sequence$$DoInsert*/ func_0x016a231c(*(undefined4 *)(uVar5 + 0xa0),uVar5,lVar8,0);
      }
      return uVar5;
    }
  }
  pcVar11 = (code *)&Atlas_UI_UIChallengeProgressBehaviour__OnDestroy;
  lVar8 = func_0x00f78af4();
  uVar5 = uVar7;
  uVar9 = param_3;
  unaff_x21 = 0x3eb4000;
DG_Tweening_ShortcutExtensions__DOKill:
  *(ulong *)((long)puVar1 + -0x30) = unaff_x22;
  *(ulong *)((long)puVar1 + -0x28) = unaff_x21;
  *(ulong *)((long)puVar1 + -0x20) = uVar9;
  *(ulong *)((long)puVar1 + -0x18) = uVar5;
  *(undefined1 ****)((long)puVar1 + -0x10) = &ppuStack_80;
  *(code **)((long)puVar1 + -8) = pcVar11;
  if ((bRam0000000003eb5c29 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0,0,0);
    bRam0000000003eb5c29 = 1;
  }
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)((long)puVar1 + -0x30) = *(undefined8 *)((long)puVar1 + -0x30);
  *(undefined8 *)((long)puVar1 + -0x28) = *(undefined8 *)((long)puVar1 + -0x28);
  *(undefined8 *)((long)puVar1 + -0x20) = *(undefined8 *)((long)puVar1 + -0x20);
  *(undefined8 *)((long)puVar1 + -0x18) = *(undefined8 *)((long)puVar1 + -0x18);
  *(undefined8 *)((long)puVar1 + -0x10) = *(undefined8 *)((long)puVar1 + -0x10);
  *(undefined8 *)((long)puVar1 + -8) = *(undefined8 *)((long)puVar1 + -8);
  if ((bRam0000000003eb5af0 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0,0,0);
    func_0x00f78a20(0x3d25440);
    bRam0000000003eb5af0 = 1;
  }
  if (lVar8 == 0) {
    uVar7 = 0;
  }
  else {
    if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar3 = /*DG.Tweening.Core.TweenManager$$FilteredOperation*/ func_0x016c1874(0,1,1,lVar8,0,0,0,0);
    uVar7 = (ulong)uVar3;
  }
  return uVar7;
}



// ============================================================
// RVA: 0x1519438 | Atlas.UI.UIChallengeController..ctor
// ============================================================

void Atlas_UI_UIChallengeController___ctor(void)

{
  return;
}



