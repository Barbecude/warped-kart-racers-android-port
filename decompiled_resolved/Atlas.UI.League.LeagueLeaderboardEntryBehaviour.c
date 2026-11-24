// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.League.LeagueLeaderboardEntryBehaviour

// ============================================================
// RVA: 0x15edd20 | Atlas.UI.League.LeagueLeaderboardEntryBehaviour.SetData
// ============================================================

/* WARNING: Possible PIC construction at 0x015ee03c: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_League_LeagueLeaderboardEntryBehaviour__SetData
                (ulong param_1,undefined4 param_2,long param_3,long param_4,long param_5,
                undefined8 param_6,undefined8 param_7,long *param_8,undefined8 param_9)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  bool bVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined *puVar13;
  int iStack_a8;
  int iStack_a4;
  long lStack_a0;
  long *plStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined4 uStack_54;
  
  uStack_54 = param_2;
  if ((bRam0000000003eb5415 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d22e58);
    func_0x00f78a20(0x3d69868);
    func_0x00f78a20(0x3d6f988);
    bRam0000000003eb5415 = 1;
  }
  plVar2 = *(long **)(param_1 + 0x18);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x188))(plVar2,param_4,*(undefined8 *)(*plVar2 + 400));
    plVar2 = *(long **)(param_1 + 0x48);
    uVar3 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_54,0);
    if ((plVar2 != (long *)0x0) &&
       ((**(code **)(*plVar2 + 0x558))(plVar2,uVar3,*(undefined8 *)(*plVar2 + 0x560)), param_3 != 0)
       ) {
      plVar2 = *(long **)(param_1 + 0x68);
      uVar3 = /*System.Int32$$ToString*/ func_0x02ae9b8c(param_3 + 0x1c,0);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x558))(plVar2,uVar3,*(undefined8 *)(*plVar2 + 0x560));
        if (((*(long *)(param_1 + 0x50) != 0) &&
            (lVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0x50),0), lVar4 != 0)) &&
           (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar4,1,0), param_5 != 0)) {
          iVar1 = *(int *)(param_5 + 0x28);
          uVar12 = *(uint *)(param_5 + 0x2c);
          if (iVar1 < 1) {
            iVar1 = 0;
          }
          if (0xb < uVar12) {
            uVar12 = 0xc;
          }
          *(int *)(param_1 + 0xac) = iVar1 + 1;
          *(uint *)(param_1 + 0xb0) = uVar12 + 1;
          *(long *)(param_1 + 0x98) = param_3;
          *(undefined8 *)(param_1 + 0xa0) = param_9;
          *(undefined4 *)(param_1 + 0xa8) = uStack_54;
          lVar4 = *(long *)(param_1 + 0x40);
          if (*(char *)(param_3 + 0x18) == '\0') {
            if (lVar4 != 0) {
              /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar4,0,0);
              if (*(long *)(param_1 + 0x30) != 0) {
                /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(param_1 + 0x30),
                                *(int *)(param_1 + 0xa8) <= *(int *)(param_1 + 0xac),0);
                if (*(int *)(param_1 + 0xac) < *(int *)(param_1 + 0xa8)) {
                  bVar7 = *(int *)(param_1 + 0xa8) < *(int *)(param_1 + 0xb0);
                }
                else {
                  bVar7 = false;
                }
                if (*(long *)(param_1 + 0x38) != 0) {
                  /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(param_1 + 0x38),bVar7,0);
                  if (*(long *)(param_1 + 0x28) != 0) {
                    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(param_1 + 0x28),
                                    *(int *)(param_1 + 0xb0) <= *(int *)(param_1 + 0xa8),0);
                    if ((*(long *)(param_1 + 0x18) != 0) && (param_4 != 0)) {
                      plVar2 = *(long **)(*(long *)(param_1 + 0x18) + 0x98);
                      /*Atlas.UI.LoadoutMetagameData$$get_BackingColour*/ func_0x0148826c(param_4,0);
                      if (plVar2 != (long *)0x0) {
                        (**(code **)(*plVar2 + 0x2a8))(plVar2,*(undefined8 *)(*plVar2 + 0x2b0));
                        if ((*(long *)(param_1 + 0x18) != 0) &&
                           (lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x50), lVar4 != 0)) {
                          uVar3 = 0;
                          goto LAB_015edfe0;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else if (lVar4 != 0) {
            /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar4,1,0);
            if (*(long *)(param_1 + 0x30) != 0) {
              /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(param_1 + 0x30),0,0);
              if (*(long *)(param_1 + 0x38) != 0) {
                /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(param_1 + 0x38),0,0);
                if (*(long *)(param_1 + 0x28) != 0) {
                  /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(param_1 + 0x28),0,0);
                  if (*(long *)(param_1 + 0x80) != 0) {
                    /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74),
                                    *(undefined4 *)(param_1 + 0x78),*(long *)(param_1 + 0x80),0);
                    if ((*(long *)(param_1 + 0x18) != 0) &&
                       (plVar2 = *(long **)(*(long *)(param_1 + 0x18) + 0x98), plVar2 != (long *)0x0
                       )) {
                      (**(code **)(*plVar2 + 0x2a8))
                                (*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c),
                                 *(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94),
                                 plVar2,*(undefined8 *)(*plVar2 + 0x2b0));
                      if ((*(long *)(param_1 + 0x18) != 0) &&
                         (lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x50), lVar4 != 0)) {
                        uVar3 = 1;
LAB_015edfe0:
                        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar4,uVar3,0);
                        if ((int)param_8 == 0) {
                          puVar13 = &UNK_015ee040;
                          uVar5 = param_1;
                          goto code_r0x015ee180;
                        }
                        if (*(long *)(param_1 + 0x60) != 0) {
                          /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(param_1 + 0x60),0,0);
                          if (*(long *)(param_1 + 0x58) != 0) {
                            /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(param_1 + 0x58),0,0);
                            if ((*(long *)(param_1 + 0x50) != 0) &&
                               (lVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0x50),0), lVar4 != 0)) {
                              /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar4,0,0);
                              param_4 = 0x3d21270;
                              param_8 = *(long **)(param_5 + 0x18);
                              if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                                 (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                                func_0x00f78ad0();
                              }
                              uVar3 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('MasterLeague')*/ uRam0000000003d6f988,0);
                              iVar1 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(param_8,uVar3,0);
                              if ((iVar1 == 0) || (3 < *(int *)(param_1 + 0xa8))) {
                                param_8 = *(long **)(param_5 + 0x18);
                                if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                                   (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                                  func_0x00f78ad0();
                                }
                                uVar3 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('BronzeLeague')*/ uRam0000000003d69868,0);
                                iVar1 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(param_8,uVar3,0);
                                if ((iVar1 == 0) || (*(int *)(param_1 + 0xa8) < 10)) {
                                  param_8 = *(long **)(param_1 + 0x20);
                                  param_4 = func_0x00f78aec(/*LeagueBadgeData_TypeInfo*/ uRam0000000003d22e58);
                                  /*LeagueBadgeData$$.ctor*/ func_0x015ed228(param_4,param_5,param_6,param_7,1);
                                  if (param_8 != (long *)0x0) {
                                    (**(code **)(*param_8 + 0x188))
                                              (param_8,param_4,*(undefined8 *)(*param_8 + 400));
                                    if (*(long *)(param_1 + 0x20) != 0) {
                                      uVar5 = /*LeagueBadgeRepresentationBehaviour$$SetupForLeaderboard*/ func_0x015ed8e0(*(long *)(param_1 + 0x20),
                                                              *(undefined4 *)(param_1 + 0xa8));
                                      return uVar5;
                                    }
                                  }
                                  goto LAB_015ee17c;
                                }
                              }
                              if ((*(long *)(param_1 + 0x20) != 0) &&
                                 (lVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0x20),0), lVar4 != 0))
                              {
                                uVar5 = /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar4,0,0);
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
            }
          }
        }
      }
    }
  }
LAB_015ee17c:
  puVar13 = &Atlas_UI_League_LeagueLeaderboardEntryBehaviour__SetArrows;
  uVar5 = func_0x00f78af4();
code_r0x015ee180:
  uVar6 = uVar5;
  lStack_a0 = param_4;
  plStack_98 = param_8;
  lStack_90 = param_5;
  uStack_88 = param_6;
  uStack_80 = param_7;
  uStack_78 = param_1;
  puStack_70 = &stack0xfffffffffffffff0;
  puStack_68 = puVar13;
  if ((bRam0000000003eb5416 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d66fd0);
    func_0x00f78a20(0x3d68510);
    func_0x00f78a20(0x3d7ccf8);
    uVar6 = func_0x00f78a20(0x3d65d08);
    bRam0000000003eb5416 = 1;
  }
  lVar4 = *(long *)(uVar5 + 0xa0);
  if (lVar4 == 0) {
    return uVar6;
  }
  uVar12 = 0;
  do {
    if ((int)*(uint *)(lVar4 + 0x18) <= (int)uVar12) goto code_r0x015ee29c;
    if (*(uint *)(lVar4 + 0x18) <= uVar12) {
      uVar3 = func_0x00f78b24();
      lVar4 = func_0x00f78ac0(uVar3,0);
      if ((bRam0000000003eb5417 & 1) == 0) {
        func_0x00f78a20(0x3d65d08);
        bRam0000000003eb5417 = 1;
      }
      if (*(long *)(lVar4 + 0x58) != 0) {
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar4 + 0x58),0,0);
        if (*(long *)(lVar4 + 0x60) != 0) {
          /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar4 + 0x60),0,0);
          plVar2 = *(long **)(lVar4 + 0x50);
          if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x015ee4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar5 = (**(code **)(*plVar2 + 0x558))
                              (plVar2,/*STR('')*/ uRam0000000003d65d08,*(undefined8 *)(*plVar2 + 0x560));
            return uVar5;
          }
        }
      }
      uVar5 = func_0x00f78af4();
      *(undefined8 *)(uVar5 + 0xac) = _UNK_033f8d90;
      if ((bRam0000000003ebf1b8 & 1) == 0) {
        func_0x00f78a20(0x3d23990,0);
        bRam0000000003ebf1b8 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      return uVar5;
    }
    lVar9 = *(long *)(lVar4 + (long)(int)uVar12 * 8 + 0x20);
    if (lVar9 == 0) {
      return uVar6;
    }
    lVar10 = *(long *)(uVar5 + 0x98);
    if (*(char *)(lVar9 + 0x18) == '\0') {
      if (lVar10 == 0) break;
      if (*(char *)(lVar10 + 0x18) == '\0') {
        uVar3 = *(undefined8 *)(lVar9 + 0x10);
        uVar11 = *(undefined8 *)(lVar10 + 0x10);
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar6 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar3,uVar11,0);
        if ((uVar6 & 1) != 0) goto code_r0x015ee294;
        lVar4 = *(long *)(uVar5 + 0xa0);
      }
    }
    else {
      if (lVar10 == 0) break;
      if (*(char *)(lVar10 + 0x18) != '\0') goto code_r0x015ee294;
    }
    uVar12 = uVar12 + 1;
  } while (lVar4 != 0);
code_r0x015ee290:
  do {
    func_0x00f78af4();
code_r0x015ee294:
    if (uVar12 != 0xfffffffe) {
      if (*(int *)(uVar5 + 0xa8) < (int)(uVar12 + 1)) {
        if (*(long *)(uVar5 + 0x58) == 0) goto code_r0x015ee290;
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(uVar5 + 0x58),1,0);
        if (*(long *)(uVar5 + 0x60) == 0) goto code_r0x015ee290;
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(uVar5 + 0x60),0,0);
        plVar2 = *(long **)(uVar5 + 0x50);
        iStack_a4 = (uVar12 - *(int *)(uVar5 + 0xa8)) + 1;
        uVar3 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&iStack_a4);
        puVar8 = (undefined8 *)0x3d66fd0;
      }
      else {
        lVar4 = *(long *)(uVar5 + 0x58);
        if (*(int *)(uVar5 + 0xa8) <= (int)(uVar12 + 1)) {
          if (lVar4 != 0) {
            /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar4,0,0);
            if (*(long *)(uVar5 + 0x60) != 0) {
              /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(uVar5 + 0x60),0,0);
              plVar2 = *(long **)(uVar5 + 0x50);
              if (plVar2 != (long *)0x0) {
                puVar8 = (undefined8 *)0x3d68510;
                goto code_r0x015ee2d4;
              }
            }
          }
          goto code_r0x015ee290;
        }
        if (lVar4 == 0) goto code_r0x015ee290;
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar4,0,0);
        if (*(long *)(uVar5 + 0x60) == 0) goto code_r0x015ee290;
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(uVar5 + 0x60),1,0);
        plVar2 = *(long **)(uVar5 + 0x50);
        iStack_a8 = (uVar12 - *(int *)(uVar5 + 0xa8)) + 1;
        uVar3 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&iStack_a8);
        puVar8 = (undefined8 *)0x3d7ccf8;
      }
      uVar3 = /*System.String$$Format*/ func_0x029bc688(*puVar8,uVar3,0);
      if (plVar2 != (long *)0x0) {
        uVar5 = (**(code **)(*plVar2 + 0x558))(plVar2,uVar3,*(undefined8 *)(*plVar2 + 0x560));
        return uVar5;
      }
      goto code_r0x015ee290;
    }
code_r0x015ee29c:
    if (*(long *)(uVar5 + 0x58) != 0) {
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(uVar5 + 0x58),0,0);
      if (*(long *)(uVar5 + 0x60) != 0) {
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(uVar5 + 0x60),0,0);
        plVar2 = *(long **)(uVar5 + 0x50);
        if (plVar2 != (long *)0x0) {
          puVar8 = (undefined8 *)0x3d65d08;
code_r0x015ee2d4:
                    /* WARNING: Could not recover jumptable at 0x015ee2f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (**(code **)(*plVar2 + 0x558))(plVar2,*puVar8,*(undefined8 *)(*plVar2 + 0x560));
          return uVar5;
        }
      }
    }
  } while( true );
}



// ============================================================
// RVA: 0x15ee180 | Atlas.UI.League.LeagueLeaderboardEntryBehaviour.SetArrows
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_League_LeagueLeaderboardEntryBehaviour__SetArrows(ulong param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  int iStack_48;
  int iStack_44;
  
  uVar1 = param_1;
  if ((bRam0000000003eb5416 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d66fd0);
    func_0x00f78a20(0x3d68510);
    func_0x00f78a20(0x3d7ccf8);
    uVar1 = func_0x00f78a20(0x3d65d08);
    bRam0000000003eb5416 = 1;
  }
  lVar4 = *(long *)(param_1 + 0xa0);
  if (lVar4 == 0) {
    return uVar1;
  }
  uVar9 = 0;
  do {
    if ((int)*(uint *)(lVar4 + 0x18) <= (int)uVar9) goto LAB_015ee29c;
    if (*(uint *)(lVar4 + 0x18) <= uVar9) {
      uVar3 = func_0x00f78b24();
      lVar4 = func_0x00f78ac0(uVar3,0);
      if ((bRam0000000003eb5417 & 1) == 0) {
        func_0x00f78a20(0x3d65d08);
        bRam0000000003eb5417 = 1;
      }
      if (*(long *)(lVar4 + 0x58) != 0) {
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar4 + 0x58),0,0);
        if (*(long *)(lVar4 + 0x60) != 0) {
          /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar4 + 0x60),0,0);
          plVar2 = *(long **)(lVar4 + 0x50);
          if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x015ee4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar1 = (**(code **)(*plVar2 + 0x558))
                              (plVar2,/*STR('')*/ uRam0000000003d65d08,*(undefined8 *)(*plVar2 + 0x560));
            return uVar1;
          }
        }
      }
      uVar1 = func_0x00f78af4();
      *(undefined8 *)(uVar1 + 0xac) = _UNK_033f8d90;
      if ((bRam0000000003ebf1b8 & 1) == 0) {
        func_0x00f78a20(0x3d23990,0);
        bRam0000000003ebf1b8 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      return uVar1;
    }
    lVar6 = *(long *)(lVar4 + (long)(int)uVar9 * 8 + 0x20);
    if (lVar6 == 0) {
      return uVar1;
    }
    lVar7 = *(long *)(param_1 + 0x98);
    if (*(char *)(lVar6 + 0x18) == '\0') {
      if (lVar7 == 0) break;
      if (*(char *)(lVar7 + 0x18) == '\0') {
        uVar3 = *(undefined8 *)(lVar6 + 0x10);
        uVar8 = *(undefined8 *)(lVar7 + 0x10);
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar1 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar3,uVar8,0);
        if ((uVar1 & 1) != 0) goto LAB_015ee294;
        lVar4 = *(long *)(param_1 + 0xa0);
      }
    }
    else {
      if (lVar7 == 0) break;
      if (*(char *)(lVar7 + 0x18) != '\0') goto LAB_015ee294;
    }
    uVar9 = uVar9 + 1;
  } while (lVar4 != 0);
LAB_015ee290:
  do {
    func_0x00f78af4();
LAB_015ee294:
    if (uVar9 != 0xfffffffe) {
      if (*(int *)(param_1 + 0xa8) < (int)(uVar9 + 1)) {
        if (*(long *)(param_1 + 0x58) == 0) goto LAB_015ee290;
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(param_1 + 0x58),1,0);
        if (*(long *)(param_1 + 0x60) == 0) goto LAB_015ee290;
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(param_1 + 0x60),0,0);
        plVar2 = *(long **)(param_1 + 0x50);
        iStack_44 = (uVar9 - *(int *)(param_1 + 0xa8)) + 1;
        uVar3 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&iStack_44);
        puVar5 = (undefined8 *)0x3d66fd0;
      }
      else {
        lVar4 = *(long *)(param_1 + 0x58);
        if (*(int *)(param_1 + 0xa8) <= (int)(uVar9 + 1)) {
          if (lVar4 != 0) {
            /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar4,0,0);
            if (*(long *)(param_1 + 0x60) != 0) {
              /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(param_1 + 0x60),0,0);
              plVar2 = *(long **)(param_1 + 0x50);
              if (plVar2 != (long *)0x0) {
                puVar5 = (undefined8 *)0x3d68510;
                goto code_r0x015ee2d4;
              }
            }
          }
          goto LAB_015ee290;
        }
        if (lVar4 == 0) goto LAB_015ee290;
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar4,0,0);
        if (*(long *)(param_1 + 0x60) == 0) goto LAB_015ee290;
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(param_1 + 0x60),1,0);
        plVar2 = *(long **)(param_1 + 0x50);
        iStack_48 = (uVar9 - *(int *)(param_1 + 0xa8)) + 1;
        uVar3 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&iStack_48);
        puVar5 = (undefined8 *)0x3d7ccf8;
      }
      uVar3 = /*System.String$$Format*/ func_0x029bc688(*puVar5,uVar3,0);
      if (plVar2 != (long *)0x0) {
        uVar1 = (**(code **)(*plVar2 + 0x558))(plVar2,uVar3,*(undefined8 *)(*plVar2 + 0x560));
        return uVar1;
      }
      goto LAB_015ee290;
    }
LAB_015ee29c:
    if (*(long *)(param_1 + 0x58) != 0) {
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(param_1 + 0x58),0,0);
      if (*(long *)(param_1 + 0x60) != 0) {
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(param_1 + 0x60),0,0);
        plVar2 = *(long **)(param_1 + 0x50);
        if (plVar2 != (long *)0x0) {
          puVar5 = (undefined8 *)0x3d65d08;
code_r0x015ee2d4:
                    /* WARNING: Could not recover jumptable at 0x015ee2f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar1 = (**(code **)(*plVar2 + 0x558))(plVar2,*puVar5,*(undefined8 *)(*plVar2 + 0x560));
          return uVar1;
        }
      }
    }
  } while( true );
}



// ============================================================
// RVA: 0x15ee450 | Atlas.UI.League.LeagueLeaderboardEntryBehaviour.HideAllRankChangeIndicators
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_UI_League_LeagueLeaderboardEntryBehaviour__HideAllRankChangeIndicators(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if ((bRam0000000003eb5417 & 1) == 0) {
    func_0x00f78a20(0x3d65d08);
    bRam0000000003eb5417 = 1;
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(param_1 + 0x58),0,0);
    if (*(long *)(param_1 + 0x60) != 0) {
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(param_1 + 0x60),0,0);
      plVar1 = *(long **)(param_1 + 0x50);
      if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x015ee4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar2 = (**(code **)(*plVar1 + 0x558))
                          (plVar1,/*STR('')*/ uRam0000000003d65d08,*(undefined8 *)(*plVar1 + 0x560));
        return lVar2;
      }
    }
  }
  lVar2 = func_0x00f78af4();
  *(undefined8 *)(lVar2 + 0xac) = _UNK_033f8d90;
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
// RVA: 0x15ee4d8 | Atlas.UI.League.LeagueLeaderboardEntryBehaviour..ctor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_UI_League_LeagueLeaderboardEntryBehaviour___ctor(long param_1)

{
  *(undefined8 *)(param_1 + 0xac) = _UNK_033f8d90;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return param_1;
}



