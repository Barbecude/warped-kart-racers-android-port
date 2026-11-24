// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Arcade.ArcadeEventShooter

// ============================================================
// RVA: 0x144e208 | Atlas.Arcade.ArcadeEventShooter..ctor
// ============================================================

undefined1  [16] Atlas_Arcade_ArcadeEventShooter___ctor(ulong param_1)

{
  undefined8 extraout_x1;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb4769 & 1) == 0) {
    func_0x00f78a20(0x3d2a638);
    bRam0000000003eb4769 = 1;
  }
  if (param_1 != 0) {
    if ((bRam0000000003eb474f & 1) == 0) {
      func_0x00f78a20(0x3d24dd0,0);
      bRam0000000003eb474f = 1;
    }
    *(undefined8 *)(param_1 + 0x78) = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    *(undefined4 *)(param_1 + 0x88) = 3;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_1;
    return auVar2;
  }
  func_0x00f78af4(0,uRam0000000003d2a638);
  auVar1._8_8_ = extraout_x1;
  auVar1._0_8_ = 0x8000;
  return auVar1;
}



// ============================================================
// RVA: 0x144f3e0 | Atlas.Arcade.ArcadeEventShooter.get_UsableCount
// ============================================================

undefined4 Atlas_Arcade_ArcadeEventShooter__get_UsableCount(long param_1)

{
  return *(undefined4 *)(param_1 + 0x98);
}



// ============================================================
// RVA: 0x144f3e8 | Atlas.Arcade.ArcadeEventShooter.set_UsableCount
// ============================================================

void Atlas_Arcade_ArcadeEventShooter__set_UsableCount(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x98) = param_2;
  return;
}



// ============================================================
// RVA: 0x144f3f0 | Atlas.Arcade.ArcadeEventShooter.get_GameType
// ============================================================

undefined8 Atlas_Arcade_ArcadeEventShooter__get_GameType(void)

{
  return 8;
}



// ============================================================
// RVA: 0x144f3f8 | Atlas.Arcade.ArcadeEventShooter.OnInit
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x144f55c | Atlas.Arcade.ArcadeEventShooter.OnUpdate
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x144f694 | Atlas.Arcade.ArcadeEventShooter.OnInProgressStateStartFirstUpdate
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x144f788 | Atlas.Arcade.ArcadeEventShooter.OnUsableUsed
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x144f840 | Atlas.Arcade.ArcadeEventShooter.OnUsableHitPlayer
// ============================================================

/* WARNING: Possible PIC construction at 0x01504cc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01504cc4) */
/* WARNING: Removing unreachable block (ram,0x01504ce8) */
/* WARNING: Removing unreachable block (ram,0x01504cc8) */

char * Atlas_Arcade_ArcadeEventShooter__OnUsableHitPlayer
                 (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 char *param_5,long param_6,long param_7)

{
  long *plVar1;
  ushort uVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  char *pcVar14;
  long lVar15;
  int *piVar16;
  char *unaff_x19;
  char *unaff_x21;
  ulong unaff_x22;
  code *pcVar17;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  char **ppcVar18;
  undefined1 **ppuVar19;
  undefined4 uVar20;
  undefined1 auVar21 [12];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  uint uStack_1b4;
  ulong uStack_1b0;
  char *pcStack_1a8;
  undefined1 auStack_1a0 [16];
  code ****ppppcStack_190;
  code *pcStack_188;
  code ***pppcStack_150;
  code *pcStack_148;
  code **ppcStack_110;
  code *pcStack_108;
  long alStack_e0 [2];
  code *apcStack_d0 [2];
  ulong uStack_c0;
  char *pcStack_b8;
  long lStack_b0;
  char *pcStack_a8;
  long lStack_90;
  char *pcStack_88;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if (param_7 == param_6) {
    return param_5;
  }
  if (param_6 != 0) {
    unaff_x21 = *(char **)(param_6 + 0x10);
    uVar20 = /*UnityEngine.Quaternion$$get_identity*/ func_0x03251e08(0);
    unaff_x19 = param_5;
    if (unaff_x21 != (char *)0x0) {
      Atlas_Gameplay_Kart_KartComposite__InvokeRespawn
                (0,0x43480000,0,uVar20,param_2,param_3,param_4,0x7f7fffff,unaff_x21,4,0);
      if ((*(long *)(param_6 + 0x10) != 0) &&
         (lVar7 = *(long *)(*(long *)(param_6 + 0x10) + 0x10), lVar7 != 0)) {
        Atlas_Gameplay_Kart_KartPhysics__DisableCollisions(lVar7,0);
        iVar4 = *(int *)(param_5 + 0x70);
        pcVar6 = param_5;
        if (param_5[0x8d] == '\0') {
          *(int *)(param_5 + 0x70) = iVar4 + 1;
          pcVar6 = (char *)(**(code **)(*(long *)param_5 + 0x238))
                                     (param_5,*(undefined8 *)(*(long *)param_5 + 0x240));
          if ((int)pcVar6 < iVar4 + 1) {
            pcVar6 = (char *)(**(code **)(*(long *)param_5 + 0x238))
                                       (param_5,*(undefined8 *)(*(long *)param_5 + 0x240));
            *(int *)(param_5 + 0x70) = (int)pcVar6;
          }
        }
        return pcVar6;
      }
    }
  }
  lVar7 = func_0x00f78af4();
  puStack_38 = &Atlas_Arcade_ArcadeEventShooter__RecordStats;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((*(long *)(lVar7 + 0x38) == 0) ||
     (lVar13 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10), lVar13 == 0)) {
    pcVar6 = (char *)func_0x00f78af4();
    if ((bRam0000000003eb4768 & 1) == 0) {
      func_0x00f78a20(0x3d2a640);
      bRam0000000003eb4768 = 1;
    }
    lVar7 = Atlas_Arcade_ArcadeEvent_ArcadeCollectorEventDefinition___get_EventDefinition
                      (pcVar6,uRam0000000003d2a640);
    if (lVar7 != 0) {
      return (char *)(ulong)*(uint *)(lVar7 + 0x54);
    }
    func_0x00f78af4();
    pcStack_88 = pcVar6;
    if ((bRam0000000003eb476a & 1) == 0) {
      func_0x00f78a20(0x3d1fc88);
      func_0x00f78a20(0x3d21270);
      func_0x00f78a20(0x3d75da0);
      bRam0000000003eb476a = 1;
    }
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    pcVar6 = (char *)/*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Usable_Battle_Clam_X3')*/ uRam0000000003d75da0,0);
    **(undefined8 **)(/*Atlas.Arcade.ArcadeEventShooter_TypeInfo*/ lRam0000000003d1fc88 + 0xb8) = pcVar6;
    return pcVar6;
  }
  uVar12 = (ulong)*(uint *)(lVar7 + 0x70);
  puStack_38 = &Atlas_Arcade_ArcadeEventShooter__RecordStats;
  if (*(long *)(lVar13 + 0x20) == 0) {
LAB_01505234:
    func_0x00f78af4();
  }
  else {
    unaff_x19 = section_00000068.segname + 5;
    unaff_x21 = (char *)Atlas_Stats_StatsData__GetStat();
    unaff_x22 = uVar12;
    if (*(long *)(lVar13 + 0x20) == 0) goto LAB_01505234;
    Atlas_Stats_StatsData__SetStat(*(long *)(lVar13 + 0x20),0x7d,uVar12);
    if (*(long *)(lVar13 + 0x20) == 0) goto LAB_01505234;
    pcVar6 = (char *)Atlas_Stats_StatsData__GetStat(*(long *)(lVar13 + 0x20),0x7d);
    if ((int)pcVar6 == (int)unaff_x21) {
      return pcVar6;
    }
    lVar7 = *(long *)(lVar13 + 0x28);
    if (lVar7 == 0) goto LAB_01505234;
    if (0x7d < *(uint *)(lVar7 + 0x18)) {
      pcVar6 = *(char **)(lVar7 + 0x408);
      if (pcVar6 == (char *)0x0) {
        return (char *)0x0;
      }
      uVar11 = 0;
      pcStack_88 = pcVar6;
      lVar7 = *(long *)(pcVar6 + 0x68);
      if (lVar7 == 0) {
        ppcVar18 = &pcStack_88;
        lVar13 = 1;
      }
      else {
        lVar13 = *(long *)(lVar7 + 0x18);
        if (lVar13 == 0) {
          return pcVar6;
        }
        ppcVar18 = (char **)(lVar7 + 0x20);
      }
      lVar7 = 0;
      do {
        pcVar14 = ppcVar18[lVar7];
        pcVar17 = *(code **)(pcVar14 + 0x10);
        plVar1 = *(long **)(pcVar14 + 0x20);
        lVar8 = *(long *)(pcVar14 + 0x28);
        if (*(short *)(lVar8 + 0x48) == -1) {
          func_0x00f78ad8(lVar8,uVar11);
        }
        iVar4 = func_0x00f78a4c(lVar8);
        if (iVar4 == 0) {
          if ((((plVar1 == (long *)0x0) || (*(short *)(lVar8 + 0x48) == -1)) ||
              ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(pcVar6 + 0x18) == 0))
          goto code_r0x02924d98;
          iVar4 = func_0x00f78a44(lVar8);
          iVar5 = func_0x00f78ec0(lVar8);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar8 + 0x48);
            if (iVar5 == 0) {
              lVar8 = *plVar1 + (ulong)uVar2 * 0x10;
              auVar23 = (**(code **)(lVar8 + 0x138))(plVar1,*(undefined8 *)(lVar8 + 0x140));
              goto code_r0x02924da4;
            }
            lVar8 = func_0x00f78a48(lVar8);
            lVar15 = *plVar1;
            uVar12 = (ulong)*(ushort *)(lVar15 + 0x12a);
            if (uVar12 != 0) {
              piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == lVar8) {
                  puVar9 = (undefined8 *)
                           (lVar15 + (long)(int)(*piVar16 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x02924e68;
                }
                piVar16 = piVar16 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            puVar9 = (undefined8 *)func_0x00fac1f0(plVar1,lVar8,(ulong)uVar2);
code_r0x02924e68:
            pcVar17 = (code *)*puVar9;
            puVar9 = (undefined8 *)puVar9[1];
          }
          else {
            if (iVar5 == 0) {
              uVar11 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar8 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar15 = *plVar1;
              uVar12 = (ulong)*(ushort *)(lVar15 + 0x12a);
              if (uVar12 != 0) {
                piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)(lVar8 + 0x18)) {
                    lVar15 = lVar15 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar8 + 0x48)) * 0x10
                             + 0x138;
                    goto code_r0x02924e40;
                  }
                  piVar16 = piVar16 + 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              lVar15 = func_0x00fac1f0(plVar1);
code_r0x02924e40:
              uVar11 = *(undefined8 *)(lVar15 + 8);
            }
            puVar9 = (undefined8 *)func_0x00f78acc(uVar11,lVar8);
            pcVar17 = (code *)*puVar9;
          }
          auVar23 = (*pcVar17)(plVar1,puVar9);
        }
        else if (*(char *)(lVar8 + 0x4a) == '\0') {
          auVar23 = (*pcVar17)(lVar8);
        }
        else {
code_r0x02924d98:
          auVar23 = (*pcVar17)(plVar1,lVar8);
        }
code_r0x02924da4:
        uVar11 = auVar23._8_8_;
        lVar7 = lVar7 + 1;
        if (lVar7 == lVar13) {
          return auVar23._0_8_;
        }
      } while( true );
    }
  }
  uVar11 = func_0x00f78b24();
  auVar21 = func_0x00f78ac0(uVar11,0);
  uVar10 = auVar21._8_4_;
  pcVar17 = Atlas_Stats_StatsManager__GetStat;
  lVar7 = *(long *)(auVar21._0_8_ + 0x20);
  if (lVar7 == 0) {
    auVar21 = func_0x00f78af4();
    uVar10 = auVar21._8_4_;
    ppuVar19 = (undefined1 **)&stack0xffffffffffffff80;
    lVar7 = *(long *)(auVar21._0_8_ + 0x18);
    if (lVar7 == 0) {
      auVar21 = func_0x00f78af4();
      uVar10 = auVar21._8_4_;
      pcStack_88 = (char *)Atlas_Stats_StatsManager__GetCommittedStat;
      lVar7 = *(long *)(auVar21._0_8_ + 0x10);
      if (lVar7 == 0) {
        auVar23 = func_0x00f78af4();
        lVar7 = auVar23._0_8_;
        uStack_c0 = unaff_x22;
        pcStack_b8 = unaff_x21;
        lStack_b0 = lVar13;
        pcStack_a8 = unaff_x19;
        if (*(long *)(lVar7 + 0x10) != 0) {
          unaff_x21 = (char *)Atlas_Stats_StatsData__GetStat();
          unaff_x19 = auVar23._8_8_;
          if (*(long *)(lVar7 + 0x18) != 0) {
            iVar4 = Atlas_Stats_StatsData__GetStat(*(long *)(lVar7 + 0x18),auVar23._8_8_);
            return (char *)(ulong)(uint)(iVar4 + (int)unaff_x21);
          }
        }
        auVar23._8_8_ = unaff_x19;
        auVar23._0_8_ = lVar7;
        auVar22 = func_0x00f78af4();
        lVar7 = auVar22._8_8_;
        apcStack_d0[1] = Atlas_Stats_StatsManager__GetSummedCommittedStats;
        apcStack_d0[0] = (code *)&stack0xffffffffffffff60;
        if (lVar7 != 0) {
          if ((int)*(ulong *)(lVar7 + 0x18) < 1) {
            unaff_x21 = (char *)0x0;
          }
          else {
            unaff_x21 = (char *)0x0;
            unaff_x22 = 0;
            uVar12 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
            do {
              auVar23 = auVar22;
              if (uVar12 <= unaff_x22) goto LAB_01505374;
              lVar13 = *(long *)(auVar22._0_8_ + 0x10);
              if (lVar13 == 0) goto LAB_01505370;
              iVar4 = Atlas_Stats_StatsData__GetStat
                                (lVar13,*(undefined4 *)(lVar7 + unaff_x22 * 4 + 0x20));
              unaff_x21 = (char *)(ulong)(uint)(iVar4 + (int)unaff_x21);
              unaff_x22 = unaff_x22 + 1;
              uVar12 = (ulong)*(uint *)(lVar7 + 0x18);
            } while ((long)unaff_x22 < (long)(int)*(uint *)(lVar7 + 0x18));
          }
          return unaff_x21;
        }
LAB_01505370:
        func_0x00f78af4();
LAB_01505374:
        uVar11 = func_0x00f78b24();
        auVar22 = func_0x00f78ac0(uVar11,0);
        lVar7 = auVar22._8_8_;
        pcStack_108 = Atlas_Stats_StatsManager__GetSummedTransactionStats;
        ppcStack_110 = apcStack_d0;
        if (lVar7 != 0) {
          if ((int)*(ulong *)(lVar7 + 0x18) < 1) {
            unaff_x21 = (char *)0x0;
          }
          else {
            unaff_x21 = (char *)0x0;
            unaff_x22 = 0;
            uVar12 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
            do {
              auVar23 = auVar22;
              if (uVar12 <= unaff_x22) goto LAB_0150540c;
              lVar13 = *(long *)(auVar22._0_8_ + 0x18);
              if (lVar13 == 0) goto LAB_01505408;
              iVar4 = Atlas_Stats_StatsData__GetStat
                                (lVar13,*(undefined4 *)(lVar7 + unaff_x22 * 4 + 0x20));
              unaff_x21 = (char *)(ulong)(uint)(iVar4 + (int)unaff_x21);
              unaff_x22 = unaff_x22 + 1;
              uVar12 = (ulong)*(uint *)(lVar7 + 0x18);
            } while ((long)unaff_x22 < (long)(int)*(uint *)(lVar7 + 0x18));
          }
          return unaff_x21;
        }
LAB_01505408:
        func_0x00f78af4();
LAB_0150540c:
        uVar11 = func_0x00f78b24();
        auVar22 = func_0x00f78ac0(uVar11,0);
        lVar7 = auVar22._8_8_;
        pcStack_148 = Atlas_Stats_StatsManager__GetSummedGlobalStats;
        pppcStack_150 = &ppcStack_110;
        if (lVar7 != 0) {
          if ((int)*(ulong *)(lVar7 + 0x18) < 1) {
            unaff_x21 = (char *)0x0;
          }
          else {
            unaff_x21 = (char *)0x0;
            unaff_x22 = 0;
            uVar12 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
            do {
              if (uVar12 <= unaff_x22) {
                uVar11 = func_0x00f78b24();
                func_0x00f78ac0(uVar11,0);
                auVar23 = auVar22;
                goto LAB_015054a8;
              }
              iVar4 = Atlas_Stats_StatsManager__GetGlobalStat
                                (auVar22._0_8_,*(undefined4 *)(lVar7 + unaff_x22 * 4 + 0x20));
              unaff_x21 = (char *)(ulong)(uint)(iVar4 + (int)unaff_x21);
              unaff_x22 = unaff_x22 + 1;
              uVar12 = (ulong)*(uint *)(lVar7 + 0x18);
            } while ((long)unaff_x22 < (long)(int)*(uint *)(lVar7 + 0x18));
          }
          return unaff_x21;
        }
LAB_015054a8:
        uVar11 = func_0x00f78af4();
        pcStack_188 = Atlas_Stats_StatsManager__GetStatFromString;
        uStack_1b0 = unaff_x22;
        pcStack_1a8 = unaff_x21;
        ppppcStack_190 = &pppcStack_150;
        auStack_1a0 = auVar23;
        if ((bRam0000000003eb4d0b & 1) == 0) {
          func_0x00f78a20(0x3d24d58);
          bRam0000000003eb4d0b = 1;
        }
        uStack_1b4 = 0;
        if (((*(ushort *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        Atlas_Stats_StatsManager__TryGetStatFromString(uVar11,&uStack_1b4);
        return (char *)(ulong)uStack_1b4;
      }
      puVar3 = &stack0xffffffffffffff80;
      pcVar17 = Atlas_Stats_StatsManager__GetCommittedStat;
    }
    else {
      puVar3 = &stack0xffffffffffffff90;
      pcVar17 = Atlas_Stats_StatsManager__GetTransactionStat;
      ppuVar19 = (undefined1 **)&stack0xffffffffffffff90;
    }
  }
  else {
    puVar3 = &stack0xffffffffffffffa0;
    ppuVar19 = &puStack_40;
  }
  *(undefined1 ***)(puVar3 + -0x10) = ppuVar19;
  *(code **)(puVar3 + -8) = pcVar17;
  lVar7 = *(long *)(lVar7 + 0x10);
  if (lVar7 == 0) {
    func_0x00f78af4();
  }
  else if (uVar10 < *(uint *)(lVar7 + 0x18)) {
    return (char *)(ulong)*(uint *)(lVar7 + (long)(int)uVar10 * 4 + 0x20);
  }
  uVar11 = func_0x00f78b24();
  auVar23 = func_0x00f78ac0(uVar11,0);
  lVar7 = auVar23._8_8_;
  pcVar14 = auVar23._0_8_;
  *(undefined8 *)(puVar3 + -0x50) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x48) = unaff_x23;
  *(ulong *)(puVar3 + -0x40) = unaff_x22;
  *(char **)(puVar3 + -0x38) = unaff_x21;
  *(long *)(puVar3 + -0x30) = lVar13;
  *(char **)(puVar3 + -0x28) = unaff_x19;
  *(undefined1 **)(puVar3 + -0x20) = puVar3 + -0x10;
  *(code **)(puVar3 + -0x18) = Atlas_Stats_StatsData__UpdateToLargestValues;
  pcVar6 = pcVar14;
  if ((bRam0000000003eb4d06 & 1) == 0) {
    pcVar6 = (char *)func_0x00f78a20(0x3d1f100);
    bRam0000000003eb4d06 = 1;
  }
  lVar13 = *(long *)(pcVar14 + 0x10);
  if (((lVar13 != 0) && (lVar7 != 0)) && (*(long *)(lVar7 + 0x10) != 0)) {
    iVar4 = *(int *)(lVar13 + 0x18);
    unaff_x22 = *(ulong *)(*(long *)(lVar7 + 0x10) + 0x18);
    if (iVar4 < (int)unaff_x22) {
      lVar13 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,unaff_x22);
      pcVar6 = (char *)/*System.Array$$Copy*/ func_0x0292c49c(*(undefined8 *)(pcVar14 + 0x10),lVar13,iVar4,0);
      *(long *)(pcVar14 + 0x10) = lVar13;
    }
    if (0 < (int)unaff_x22) {
      if (lVar13 == 0) goto LAB_01504c70;
      uVar12 = 0;
      uVar10 = *(uint *)(lVar13 + 0x18);
      do {
        if (uVar10 == uVar12) {
LAB_01504c64:
          uVar11 = func_0x00f78b24();
          func_0x00f78ac0(uVar11,0);
          goto LAB_01504c70;
        }
        lVar8 = *(long *)(lVar7 + 0x10);
        if (lVar8 == 0) goto LAB_01504c70;
        if ((*(uint *)(lVar8 + 0x18) <= uVar12) || (uVar10 <= uVar12)) goto LAB_01504c64;
        iVar4 = *(int *)(lVar13 + 0x20 + uVar12 * 4);
        iVar5 = *(int *)(lVar8 + uVar12 * 4 + 0x20);
        if (iVar4 <= iVar5) {
          iVar4 = iVar5;
        }
        *(int *)(lVar13 + 0x20 + uVar12 * 4) = iVar4;
        uVar12 = uVar12 + 1;
      } while ((unaff_x22 & 0xffffffff) != uVar12);
    }
    return pcVar6;
  }
LAB_01504c70:
  func_0x00f78af4();
  *(ulong *)(puVar3 + -0x80) = unaff_x22;
  *(long *)(puVar3 + -0x78) = lVar13;
  *(undefined1 (*) [16])(puVar3 + -0x70) = auVar23;
  *(undefined1 **)(puVar3 + -0x60) = puVar3 + -0x20;
  *(code **)(puVar3 + -0x58) = Atlas_Stats_StatsData__Clone;
  if ((bRam0000000003eb4d07 & 1) == 0) {
    func_0x00f78a20(0x3d24d50);
    bRam0000000003eb4d07 = 1;
  }
  pcVar6 = (char *)func_0x00f78aec(/*Atlas.Stats.StatsData_TypeInfo*/ uRam0000000003d24d50);
  return pcVar6;
}



// ============================================================
// RVA: 0x144f904 | Atlas.Arcade.ArcadeEventShooter.RecordStats
// ============================================================

/* WARNING: Possible PIC construction at 0x01504cc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01504cc4) */
/* WARNING: Removing unreachable block (ram,0x01504ce8) */
/* WARNING: Removing unreachable block (ram,0x01504cc8) */

ulong Atlas_Arcade_ArcadeEventShooter__RecordStats(long param_1)

{
  long *plVar1;
  ushort uVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  int *piVar17;
  undefined8 unaff_x19;
  ulong unaff_x21;
  ulong unaff_x22;
  code *pcVar18;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  code **ppcVar19;
  undefined1 *puVar20;
  undefined1 auVar21 [12];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  uint uStack_184;
  ulong uStack_180;
  ulong uStack_178;
  undefined1 auStack_170 [16];
  code ****ppppcStack_160;
  code *pcStack_158;
  code ***pppcStack_120;
  code *pcStack_118;
  code **ppcStack_e0;
  code *pcStack_d8;
  long alStack_b0 [2];
  code *apcStack_a0 [2];
  ulong auStack_90 [4];
  code *pcStack_58;
  
  if ((*(long *)(param_1 + 0x38) == 0) ||
     (lVar12 = *(long *)(*(long *)(param_1 + 0x38) + 0x10), lVar12 == 0)) {
    pcVar6 = (code *)func_0x00f78af4();
    if ((bRam0000000003eb4768 & 1) == 0) {
      func_0x00f78a20(0x3d2a640);
      bRam0000000003eb4768 = 1;
    }
    lVar12 = Atlas_Arcade_ArcadeEvent_ArcadeCollectorEventDefinition___get_EventDefinition
                       (pcVar6,uRam0000000003d2a640);
    if (lVar12 != 0) {
      return (ulong)*(uint *)(lVar12 + 0x54);
    }
    func_0x00f78af4();
    pcStack_58 = pcVar6;
    if ((bRam0000000003eb476a & 1) == 0) {
      func_0x00f78a20(0x3d1fc88);
      func_0x00f78a20(0x3d21270);
      func_0x00f78a20(0x3d75da0);
      bRam0000000003eb476a = 1;
    }
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar11 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Usable_Battle_Clam_X3')*/ uRam0000000003d75da0,0);
    **(ulong **)(/*Atlas.Arcade.ArcadeEventShooter_TypeInfo*/ lRam0000000003d1fc88 + 0xb8) = uVar11;
    return uVar11;
  }
  uVar11 = (ulong)*(uint *)(param_1 + 0x70);
  if (*(long *)(lVar12 + 0x20) == 0) {
LAB_01505234:
    func_0x00f78af4();
  }
  else {
    unaff_x19 = 0x7d;
    unaff_x21 = Atlas_Stats_StatsData__GetStat();
    unaff_x22 = uVar11;
    if (*(long *)(lVar12 + 0x20) == 0) goto LAB_01505234;
    Atlas_Stats_StatsData__SetStat(*(long *)(lVar12 + 0x20),0x7d,uVar11);
    if (*(long *)(lVar12 + 0x20) == 0) goto LAB_01505234;
    uVar11 = Atlas_Stats_StatsData__GetStat(*(long *)(lVar12 + 0x20),0x7d);
    if ((int)uVar11 == (int)unaff_x21) {
      return uVar11;
    }
    lVar14 = *(long *)(lVar12 + 0x28);
    if (lVar14 == 0) goto LAB_01505234;
    if (0x7d < *(uint *)(lVar14 + 0x18)) {
      pcVar6 = *(code **)(lVar14 + 0x408);
      if (pcVar6 == (code *)0x0) {
        return 0;
      }
      uVar10 = 0;
      pcStack_58 = pcVar6;
      lVar12 = *(long *)(pcVar6 + 0x68);
      if (lVar12 == 0) {
        ppcVar19 = &pcStack_58;
        lVar14 = 1;
      }
      else {
        lVar14 = *(long *)(lVar12 + 0x18);
        if (lVar14 == 0) {
          return (ulong)pcVar6;
        }
        ppcVar19 = (code **)(lVar12 + 0x20);
      }
      lVar12 = 0;
      do {
        pcVar15 = ppcVar19[lVar12];
        pcVar18 = *(code **)(pcVar15 + 0x10);
        plVar1 = *(long **)(pcVar15 + 0x20);
        lVar7 = *(long *)(pcVar15 + 0x28);
        if (*(short *)(lVar7 + 0x48) == -1) {
          func_0x00f78ad8(lVar7,uVar10);
        }
        iVar4 = func_0x00f78a4c(lVar7);
        if (iVar4 == 0) {
          if ((((plVar1 == (long *)0x0) || (*(short *)(lVar7 + 0x48) == -1)) ||
              ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(pcVar6 + 0x18) == 0))
          goto code_r0x02924d98;
          iVar4 = func_0x00f78a44(lVar7);
          iVar5 = func_0x00f78ec0(lVar7);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar7 + 0x48);
            if (iVar5 == 0) {
              lVar7 = *plVar1 + (ulong)uVar2 * 0x10;
              auVar23 = (**(code **)(lVar7 + 0x138))(plVar1,*(undefined8 *)(lVar7 + 0x140));
              goto code_r0x02924da4;
            }
            lVar7 = func_0x00f78a48(lVar7);
            lVar16 = *plVar1;
            uVar11 = (ulong)*(ushort *)(lVar16 + 0x12a);
            if (uVar11 != 0) {
              piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == lVar7) {
                  puVar8 = (undefined8 *)
                           (lVar16 + (long)(int)(*piVar17 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x02924e68;
                }
                piVar17 = piVar17 + 4;
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
            puVar8 = (undefined8 *)func_0x00fac1f0(plVar1,lVar7,(ulong)uVar2);
code_r0x02924e68:
            pcVar15 = (code *)*puVar8;
            puVar8 = (undefined8 *)puVar8[1];
          }
          else {
            if (iVar5 == 0) {
              uVar10 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar7 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar16 = *plVar1;
              uVar11 = (ulong)*(ushort *)(lVar16 + 0x12a);
              if (uVar11 != 0) {
                piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == *(long *)(lVar7 + 0x18)) {
                    lVar16 = lVar16 + (long)(int)(*piVar17 + (uint)*(ushort *)(lVar7 + 0x48)) * 0x10
                             + 0x138;
                    goto code_r0x02924e40;
                  }
                  piVar17 = piVar17 + 4;
                  uVar11 = uVar11 - 1;
                } while (uVar11 != 0);
              }
              lVar16 = func_0x00fac1f0(plVar1);
code_r0x02924e40:
              uVar10 = *(undefined8 *)(lVar16 + 8);
            }
            puVar8 = (undefined8 *)func_0x00f78acc(uVar10,lVar7);
            pcVar15 = (code *)*puVar8;
          }
          auVar23 = (*pcVar15)(plVar1,puVar8);
        }
        else if (*(char *)(lVar7 + 0x4a) == '\0') {
          auVar23 = (*pcVar18)(lVar7);
        }
        else {
code_r0x02924d98:
          auVar23 = (*pcVar18)(plVar1,lVar7);
        }
code_r0x02924da4:
        uVar10 = auVar23._8_8_;
        lVar12 = lVar12 + 1;
        if (lVar12 == lVar14) {
          return auVar23._0_8_;
        }
      } while( true );
    }
  }
  uVar10 = func_0x00f78b24();
  auVar21 = func_0x00f78ac0(uVar10,0);
  uVar9 = auVar21._8_4_;
  pcVar6 = Atlas_Stats_StatsManager__GetStat;
  lVar14 = *(long *)(auVar21._0_8_ + 0x20);
  if (lVar14 == 0) {
    auVar21 = func_0x00f78af4();
    uVar9 = auVar21._8_4_;
    puVar20 = &stack0xffffffffffffffb0;
    lVar14 = *(long *)(auVar21._0_8_ + 0x18);
    if (lVar14 == 0) {
      auVar21 = func_0x00f78af4();
      uVar9 = auVar21._8_4_;
      pcStack_58 = Atlas_Stats_StatsManager__GetCommittedStat;
      lVar14 = *(long *)(auVar21._0_8_ + 0x10);
      if (lVar14 == 0) {
        auVar23 = func_0x00f78af4();
        lVar14 = auVar23._0_8_;
        auStack_90[0] = unaff_x22;
        auStack_90[1] = unaff_x21;
        auStack_90[2] = lVar12;
        auStack_90[3] = unaff_x19;
        if (*(long *)(lVar14 + 0x10) != 0) {
          unaff_x21 = Atlas_Stats_StatsData__GetStat();
          unaff_x19 = auVar23._8_8_;
          if (*(long *)(lVar14 + 0x18) != 0) {
            iVar4 = Atlas_Stats_StatsData__GetStat(*(long *)(lVar14 + 0x18),auVar23._8_8_);
            return (ulong)(uint)(iVar4 + (int)unaff_x21);
          }
        }
        auVar23._8_8_ = unaff_x19;
        auVar23._0_8_ = lVar14;
        auVar22 = func_0x00f78af4();
        lVar12 = auVar22._8_8_;
        apcStack_a0[1] = Atlas_Stats_StatsManager__GetSummedCommittedStats;
        apcStack_a0[0] = (code *)&stack0xffffffffffffff90;
        if (lVar12 != 0) {
          if ((int)*(ulong *)(lVar12 + 0x18) < 1) {
            unaff_x21 = 0;
          }
          else {
            unaff_x21 = 0;
            unaff_x22 = 0;
            uVar11 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
            do {
              auVar23 = auVar22;
              if (uVar11 <= unaff_x22) goto LAB_01505374;
              lVar14 = *(long *)(auVar22._0_8_ + 0x10);
              if (lVar14 == 0) goto LAB_01505370;
              iVar4 = Atlas_Stats_StatsData__GetStat
                                (lVar14,*(undefined4 *)(lVar12 + 0x20 + unaff_x22 * 4));
              unaff_x21 = (ulong)(uint)(iVar4 + (int)unaff_x21);
              unaff_x22 = unaff_x22 + 1;
              uVar11 = (ulong)*(uint *)(lVar12 + 0x18);
            } while ((long)unaff_x22 < (long)(int)*(uint *)(lVar12 + 0x18));
          }
          return unaff_x21;
        }
LAB_01505370:
        func_0x00f78af4();
LAB_01505374:
        uVar10 = func_0x00f78b24();
        auVar22 = func_0x00f78ac0(uVar10,0);
        lVar12 = auVar22._8_8_;
        pcStack_d8 = Atlas_Stats_StatsManager__GetSummedTransactionStats;
        ppcStack_e0 = apcStack_a0;
        if (lVar12 != 0) {
          if ((int)*(ulong *)(lVar12 + 0x18) < 1) {
            unaff_x21 = 0;
          }
          else {
            unaff_x21 = 0;
            unaff_x22 = 0;
            uVar11 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
            do {
              auVar23 = auVar22;
              if (uVar11 <= unaff_x22) goto LAB_0150540c;
              lVar14 = *(long *)(auVar22._0_8_ + 0x18);
              if (lVar14 == 0) goto LAB_01505408;
              iVar4 = Atlas_Stats_StatsData__GetStat
                                (lVar14,*(undefined4 *)(lVar12 + 0x20 + unaff_x22 * 4));
              unaff_x21 = (ulong)(uint)(iVar4 + (int)unaff_x21);
              unaff_x22 = unaff_x22 + 1;
              uVar11 = (ulong)*(uint *)(lVar12 + 0x18);
            } while ((long)unaff_x22 < (long)(int)*(uint *)(lVar12 + 0x18));
          }
          return unaff_x21;
        }
LAB_01505408:
        func_0x00f78af4();
LAB_0150540c:
        uVar10 = func_0x00f78b24();
        auVar22 = func_0x00f78ac0(uVar10,0);
        lVar12 = auVar22._8_8_;
        pcStack_118 = Atlas_Stats_StatsManager__GetSummedGlobalStats;
        pppcStack_120 = &ppcStack_e0;
        if (lVar12 != 0) {
          if ((int)*(ulong *)(lVar12 + 0x18) < 1) {
            unaff_x21 = 0;
          }
          else {
            unaff_x21 = 0;
            unaff_x22 = 0;
            uVar11 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
            do {
              if (uVar11 <= unaff_x22) {
                uVar10 = func_0x00f78b24();
                func_0x00f78ac0(uVar10,0);
                auVar23 = auVar22;
                goto LAB_015054a8;
              }
              iVar4 = Atlas_Stats_StatsManager__GetGlobalStat
                                (auVar22._0_8_,*(undefined4 *)(lVar12 + 0x20 + unaff_x22 * 4));
              unaff_x21 = (ulong)(uint)(iVar4 + (int)unaff_x21);
              unaff_x22 = unaff_x22 + 1;
              uVar11 = (ulong)*(uint *)(lVar12 + 0x18);
            } while ((long)unaff_x22 < (long)(int)*(uint *)(lVar12 + 0x18));
          }
          return unaff_x21;
        }
LAB_015054a8:
        uVar10 = func_0x00f78af4();
        pcStack_158 = Atlas_Stats_StatsManager__GetStatFromString;
        uStack_180 = unaff_x22;
        uStack_178 = unaff_x21;
        ppppcStack_160 = &pppcStack_120;
        auStack_170 = auVar23;
        if ((bRam0000000003eb4d0b & 1) == 0) {
          func_0x00f78a20(0x3d24d58);
          bRam0000000003eb4d0b = 1;
        }
        uStack_184 = 0;
        if (((*(ushort *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        Atlas_Stats_StatsManager__TryGetStatFromString(uVar10,&uStack_184);
        return (ulong)uStack_184;
      }
      puVar3 = &stack0xffffffffffffffb0;
      pcVar6 = Atlas_Stats_StatsManager__GetCommittedStat;
    }
    else {
      puVar3 = &stack0xffffffffffffffc0;
      pcVar6 = Atlas_Stats_StatsManager__GetTransactionStat;
      puVar20 = &stack0xffffffffffffffc0;
    }
  }
  else {
    puVar3 = &stack0xffffffffffffffd0;
    puVar20 = &stack0xfffffffffffffff0;
  }
  *(undefined1 **)(puVar3 + -0x10) = puVar20;
  *(code **)(puVar3 + -8) = pcVar6;
  lVar14 = *(long *)(lVar14 + 0x10);
  if (lVar14 == 0) {
    func_0x00f78af4();
  }
  else if (uVar9 < *(uint *)(lVar14 + 0x18)) {
    return (ulong)*(uint *)(lVar14 + (long)(int)uVar9 * 4 + 0x20);
  }
  uVar10 = func_0x00f78b24();
  auVar23 = func_0x00f78ac0(uVar10,0);
  lVar14 = auVar23._8_8_;
  uVar13 = auVar23._0_8_;
  *(undefined8 *)(puVar3 + -0x50) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x48) = unaff_x23;
  *(ulong *)(puVar3 + -0x40) = unaff_x22;
  *(ulong *)(puVar3 + -0x38) = unaff_x21;
  *(long *)(puVar3 + -0x30) = lVar12;
  *(undefined8 *)(puVar3 + -0x28) = unaff_x19;
  *(undefined1 **)(puVar3 + -0x20) = puVar3 + -0x10;
  *(code **)(puVar3 + -0x18) = Atlas_Stats_StatsData__UpdateToLargestValues;
  uVar11 = uVar13;
  if ((bRam0000000003eb4d06 & 1) == 0) {
    uVar11 = func_0x00f78a20(0x3d1f100);
    bRam0000000003eb4d06 = 1;
  }
  lVar12 = *(long *)(uVar13 + 0x10);
  if (((lVar12 != 0) && (lVar14 != 0)) && (*(long *)(lVar14 + 0x10) != 0)) {
    iVar4 = *(int *)(lVar12 + 0x18);
    unaff_x22 = *(ulong *)(*(long *)(lVar14 + 0x10) + 0x18);
    if (iVar4 < (int)unaff_x22) {
      lVar12 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,unaff_x22);
      uVar11 = /*System.Array$$Copy*/ func_0x0292c49c(*(undefined8 *)(uVar13 + 0x10),lVar12,iVar4,0);
      *(long *)(uVar13 + 0x10) = lVar12;
    }
    if (0 < (int)unaff_x22) {
      if (lVar12 == 0) goto LAB_01504c70;
      uVar13 = 0;
      uVar9 = *(uint *)(lVar12 + 0x18);
      do {
        if (uVar9 == uVar13) {
LAB_01504c64:
          uVar10 = func_0x00f78b24();
          func_0x00f78ac0(uVar10,0);
          goto LAB_01504c70;
        }
        lVar7 = *(long *)(lVar14 + 0x10);
        if (lVar7 == 0) goto LAB_01504c70;
        if ((*(uint *)(lVar7 + 0x18) <= uVar13) || (uVar9 <= uVar13)) goto LAB_01504c64;
        iVar4 = *(int *)(lVar12 + 0x20 + uVar13 * 4);
        iVar5 = *(int *)(lVar7 + uVar13 * 4 + 0x20);
        if (iVar4 <= iVar5) {
          iVar4 = iVar5;
        }
        *(int *)(lVar12 + 0x20 + uVar13 * 4) = iVar4;
        uVar13 = uVar13 + 1;
      } while ((unaff_x22 & 0xffffffff) != uVar13);
    }
    return uVar11;
  }
LAB_01504c70:
  func_0x00f78af4();
  *(ulong *)(puVar3 + -0x80) = unaff_x22;
  *(long *)(puVar3 + -0x78) = lVar12;
  *(undefined1 (*) [16])(puVar3 + -0x70) = auVar23;
  *(undefined1 **)(puVar3 + -0x60) = puVar3 + -0x20;
  *(code **)(puVar3 + -0x58) = Atlas_Stats_StatsData__Clone;
  if ((bRam0000000003eb4d07 & 1) == 0) {
    func_0x00f78a20(0x3d24d50);
    bRam0000000003eb4d07 = 1;
  }
  uVar11 = func_0x00f78aec(/*Atlas.Stats.StatsData_TypeInfo*/ uRam0000000003d24d50);
  return uVar11;
}



// ============================================================
// RVA: 0x144f938 | Atlas.Arcade.ArcadeEventShooter.GetMaxScore
// ============================================================

ulong Atlas_Arcade_ArcadeEventShooter__GetMaxScore(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  
  if ((bRam0000000003eb4768 & 1) == 0) {
    func_0x00f78a20(0x3d2a640);
    bRam0000000003eb4768 = 1;
  }
  lVar1 = Atlas_Arcade_ArcadeEvent_ArcadeCollectorEventDefinition___get_EventDefinition
                    (param_1,uRam0000000003d2a640);
  if (lVar1 != 0) {
    return (ulong)*(uint *)(lVar1 + 0x54);
  }
  func_0x00f78af4();
  if ((bRam0000000003eb476a & 1) == 0) {
    func_0x00f78a20(0x3d1fc88);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d75da0);
    bRam0000000003eb476a = 1;
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Usable_Battle_Clam_X3')*/ uRam0000000003d75da0,0);
  **(ulong **)(/*Atlas.Arcade.ArcadeEventShooter_TypeInfo*/ lRam0000000003d1fc88 + 0xb8) = uVar2;
  return uVar2;
}



// ============================================================
// RVA: 0x144f99c | Atlas.Arcade.ArcadeEventShooter..cctor
// ============================================================

void Atlas_Arcade_ArcadeEventShooter___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb476a & 1) == 0) {
    func_0x00f78a20(0x3d1fc88);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d75da0);
    bRam0000000003eb476a = 1;
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Usable_Battle_Clam_X3')*/ uRam0000000003d75da0,0);
  **(undefined8 **)(/*Atlas.Arcade.ArcadeEventShooter_TypeInfo*/ lRam0000000003d1fc88 + 0xb8) = uVar1;
  return;
}



