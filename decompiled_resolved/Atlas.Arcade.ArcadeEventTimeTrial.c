// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Arcade.ArcadeEventTimeTrial

// ============================================================
// RVA: 0x144e25c | Atlas.Arcade.ArcadeEventTimeTrial..ctor
// ============================================================

undefined1  [16] Atlas_Arcade_ArcadeEventTimeTrial___ctor(ulong param_1)

{
  undefined8 extraout_x1;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb476b & 1) == 0) {
    func_0x00f78a20(0x3d2a648);
    bRam0000000003eb476b = 1;
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
  func_0x00f78af4(0,uRam0000000003d2a648);
  auVar1._8_8_ = extraout_x1;
  auVar1._0_8_ = 0x8000;
  return auVar1;
}



// ============================================================
// RVA: 0x144fa3c | Atlas.Arcade.ArcadeEventTimeTrial.get_GameType
// ============================================================

undefined8 Atlas_Arcade_ArcadeEventTimeTrial__get_GameType(void)

{
  return 6;
}



// ============================================================
// RVA: 0x144fa44 | Atlas.Arcade.ArcadeEventTimeTrial.OnUpdate
// ============================================================

/* WARNING: Possible PIC construction at 0x01504cc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01504cc4) */
/* WARNING: Removing unreachable block (ram,0x01504ce8) */
/* WARNING: Removing unreachable block (ram,0x01504cc8) */
/* WARNING: Type propagation algorithm not settling */

char * Atlas_Arcade_ArcadeEventTimeTrial__OnUpdate(char *param_1)

{
  long *plVar1;
  ushort uVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  long lVar7;
  char *pcVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  char *unaff_x21;
  ulong unaff_x22;
  code *pcVar17;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long lVar18;
  undefined1 **ppuVar19;
  undefined1 auVar20 [12];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  uint uStack_1a4;
  ulong uStack_1a0;
  char *pcStack_198;
  undefined1 auStack_190 [16];
  char *****pppppcStack_180;
  code *pcStack_178;
  char ****ppppcStack_140;
  code *pcStack_138;
  char ***pppcStack_100;
  code *pcStack_f8;
  long alStack_d0 [2];
  char **ppcStack_c0;
  code *pcStack_b8;
  ulong uStack_b0;
  char *pcStack_a8;
  long lStack_a0;
  char *apcStack_98 [2];
  code *pcStack_88;
  undefined1 *puStack_80;
  char *pcStack_78;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  if (param_1[0x8d] != '\0') {
    return param_1;
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    iVar4 = Atlas_Gameplay_Player_GameContextPlayer__get_CurrentLap(*(long *)(param_1 + 0x58),0);
    iVar4 = iVar4 + -1;
    if (iVar4 < 1) {
      iVar4 = 0;
    }
    pcVar6 = param_1;
    if (param_1[0x8d] == '\0') {
      *(int *)(param_1 + 0x70) = iVar4;
      pcVar6 = (char *)(**(code **)(*(long *)param_1 + 0x238))
                                 (param_1,*(undefined8 *)(*(long *)param_1 + 0x240));
      if ((int)pcVar6 < iVar4) {
        pcVar6 = (char *)(**(code **)(*(long *)param_1 + 0x238))
                                   (param_1,*(undefined8 *)(*(long *)param_1 + 0x240));
        *(int *)(param_1 + 0x70) = (int)pcVar6;
      }
    }
    return pcVar6;
  }
  lVar7 = func_0x00f78af4();
  puStack_28 = &Atlas_Arcade_ArcadeEventTimeTrial__RecordStats;
  puStack_30 = &stack0xfffffffffffffff0;
  if (*(long *)(lVar7 + 0x58) == 0) {
code_r0x0144faec:
    lVar7 = func_0x00f78af4();
    if ((*(long *)(lVar7 + 0x10) != 0) &&
       (lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + 0x1c0), lVar7 != 0)) {
      return (char *)(ulong)*(uint *)(lVar7 + 0xcc);
    }
    lVar7 = func_0x00f78af4();
    return (char *)(ulong)(*(int *)(lVar7 + 0x70) + 1);
  }
  iVar4 = Atlas_Gameplay_Player_GameContextPlayer__get_CurrentLap(*(long *)(lVar7 + 0x58),0);
  if ((*(long *)(lVar7 + 0x38) == 0) ||
     (lVar7 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10), lVar7 == 0)) goto code_r0x0144faec;
  uVar10 = iVar4 - 1;
  if ((int)uVar10 < 1) {
    uVar10 = 0;
  }
  uVar12 = (ulong)uVar10;
  if (*(long *)(lVar7 + 0x20) == 0) {
LAB_01505234:
    func_0x00f78af4();
  }
  else {
    param_1 = section_00000068.segname + 3;
    unaff_x21 = (char *)Atlas_Stats_StatsData__GetStat();
    unaff_x22 = uVar12;
    if (*(long *)(lVar7 + 0x20) == 0) goto LAB_01505234;
    Atlas_Stats_StatsData__SetStat(*(long *)(lVar7 + 0x20),0x7b,uVar12);
    if (*(long *)(lVar7 + 0x20) == 0) goto LAB_01505234;
    pcVar6 = (char *)Atlas_Stats_StatsData__GetStat(*(long *)(lVar7 + 0x20),0x7b);
    if ((int)pcVar6 == (int)unaff_x21) {
      return pcVar6;
    }
    lVar13 = *(long *)(lVar7 + 0x28);
    if (lVar13 == 0) goto LAB_01505234;
    if (0x7b < *(uint *)(lVar13 + 0x18)) {
      pcVar6 = *(char **)(lVar13 + 0x3f8);
      if (pcVar6 == (char *)0x0) {
        return (char *)0x0;
      }
      uVar11 = 0;
      pcStack_78 = pcVar6;
      lVar7 = *(long *)(pcVar6 + 0x68);
      if (lVar7 == 0) {
        lVar7 = (long)&pcStack_78;
        lVar13 = 1;
      }
      else {
        lVar13 = *(long *)(lVar7 + 0x18);
        if (lVar13 == 0) {
          return pcVar6;
        }
        lVar7 = lVar7 + 0x20;
      }
      lVar18 = 0;
      do {
        lVar14 = *(long *)(lVar7 + lVar18 * 8);
        pcVar17 = *(code **)(lVar14 + 0x10);
        plVar1 = *(long **)(lVar14 + 0x20);
        lVar14 = *(long *)(lVar14 + 0x28);
        if (*(short *)(lVar14 + 0x48) == -1) {
          func_0x00f78ad8(lVar14,uVar11);
        }
        iVar4 = func_0x00f78a4c(lVar14);
        if (iVar4 == 0) {
          if ((((plVar1 == (long *)0x0) || (*(short *)(lVar14 + 0x48) == -1)) ||
              ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(pcVar6 + 0x18) == 0))
          goto code_r0x02924d98;
          iVar4 = func_0x00f78a44(lVar14);
          iVar5 = func_0x00f78ec0(lVar14);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar14 + 0x48);
            if (iVar5 == 0) {
              lVar14 = *plVar1 + (ulong)uVar2 * 0x10;
              auVar22 = (**(code **)(lVar14 + 0x138))(plVar1,*(undefined8 *)(lVar14 + 0x140));
              goto code_r0x02924da4;
            }
            lVar14 = func_0x00f78a48(lVar14);
            lVar15 = *plVar1;
            uVar12 = (ulong)*(ushort *)(lVar15 + 0x12a);
            if (uVar12 != 0) {
              piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == lVar14) {
                  puVar9 = (undefined8 *)
                           (lVar15 + (long)(int)(*piVar16 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x02924e68;
                }
                piVar16 = piVar16 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            puVar9 = (undefined8 *)func_0x00fac1f0(plVar1,lVar14,(ulong)uVar2);
code_r0x02924e68:
            pcVar17 = (code *)*puVar9;
            puVar9 = (undefined8 *)puVar9[1];
          }
          else {
            if (iVar5 == 0) {
              uVar11 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar14 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar15 = *plVar1;
              uVar12 = (ulong)*(ushort *)(lVar15 + 0x12a);
              if (uVar12 != 0) {
                piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)(lVar14 + 0x18)) {
                    lVar15 = lVar15 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar14 + 0x48)) *
                                      0x10 + 0x138;
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
            puVar9 = (undefined8 *)func_0x00f78acc(uVar11,lVar14);
            pcVar17 = (code *)*puVar9;
          }
          auVar22 = (*pcVar17)(plVar1,puVar9);
        }
        else if (*(char *)(lVar14 + 0x4a) == '\0') {
          auVar22 = (*pcVar17)(lVar14);
        }
        else {
code_r0x02924d98:
          auVar22 = (*pcVar17)(plVar1,lVar14);
        }
code_r0x02924da4:
        uVar11 = auVar22._8_8_;
        lVar18 = lVar18 + 1;
        if (lVar18 == lVar13) {
          return auVar22._0_8_;
        }
      } while( true );
    }
  }
  uVar11 = func_0x00f78b24();
  auVar20 = func_0x00f78ac0(uVar11,0);
  uVar10 = auVar20._8_4_;
  pcVar17 = Atlas_Stats_StatsManager__GetStat;
  lVar13 = *(long *)(auVar20._0_8_ + 0x20);
  if (lVar13 == 0) {
    auVar20 = func_0x00f78af4();
    uVar10 = auVar20._8_4_;
    ppuVar19 = (undefined1 **)&stack0xffffffffffffff90;
    lVar13 = *(long *)(auVar20._0_8_ + 0x18);
    if (lVar13 == 0) {
      auVar20 = func_0x00f78af4();
      uVar10 = auVar20._8_4_;
      apcStack_98[1] = (char *)&puStack_80;
      pcStack_78 = (char *)Atlas_Stats_StatsManager__GetCommittedStat;
      lVar13 = *(long *)(auVar20._0_8_ + 0x10);
      if (lVar13 == 0) {
        puStack_80 = &stack0xffffffffffffff90;
        auVar22 = func_0x00f78af4();
        lVar13 = auVar22._0_8_;
        pcStack_88 = Atlas_Stats_StatsManager__GetGlobalStat;
        uStack_b0 = unaff_x22;
        pcStack_a8 = unaff_x21;
        lStack_a0 = lVar7;
        apcStack_98[0] = param_1;
        pcVar6 = (char *)&puStack_80;
        if (*(long *)(lVar13 + 0x10) != 0) {
          unaff_x21 = (char *)Atlas_Stats_StatsData__GetStat();
          param_1 = auVar22._8_8_;
          pcVar6 = apcStack_98[1];
          if (*(long *)(lVar13 + 0x18) != 0) {
            iVar4 = Atlas_Stats_StatsData__GetStat(*(long *)(lVar13 + 0x18),auVar22._8_8_);
            return (char *)(ulong)(uint)(iVar4 + (int)unaff_x21);
          }
        }
        apcStack_98[1] = pcVar6;
        auVar22._8_8_ = param_1;
        auVar22._0_8_ = lVar13;
        auVar21 = func_0x00f78af4();
        lVar7 = auVar21._8_8_;
        pcStack_b8 = Atlas_Stats_StatsManager__GetSummedCommittedStats;
        ppcStack_c0 = apcStack_98 + 1;
        if (lVar7 != 0) {
          if ((int)*(ulong *)(lVar7 + 0x18) < 1) {
            unaff_x21 = (char *)0x0;
          }
          else {
            unaff_x21 = (char *)0x0;
            unaff_x22 = 0;
            uVar12 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
            do {
              auVar22 = auVar21;
              if (uVar12 <= unaff_x22) goto LAB_01505374;
              lVar13 = *(long *)(auVar21._0_8_ + 0x10);
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
        auVar21 = func_0x00f78ac0(uVar11,0);
        lVar7 = auVar21._8_8_;
        pcStack_f8 = Atlas_Stats_StatsManager__GetSummedTransactionStats;
        pppcStack_100 = &ppcStack_c0;
        if (lVar7 != 0) {
          if ((int)*(ulong *)(lVar7 + 0x18) < 1) {
            unaff_x21 = (char *)0x0;
          }
          else {
            unaff_x21 = (char *)0x0;
            unaff_x22 = 0;
            uVar12 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
            do {
              auVar22 = auVar21;
              if (uVar12 <= unaff_x22) goto LAB_0150540c;
              lVar13 = *(long *)(auVar21._0_8_ + 0x18);
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
        auVar21 = func_0x00f78ac0(uVar11,0);
        lVar7 = auVar21._8_8_;
        pcStack_138 = Atlas_Stats_StatsManager__GetSummedGlobalStats;
        ppppcStack_140 = &pppcStack_100;
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
                auVar22 = auVar21;
                goto LAB_015054a8;
              }
              iVar4 = Atlas_Stats_StatsManager__GetGlobalStat
                                (auVar21._0_8_,*(undefined4 *)(lVar7 + unaff_x22 * 4 + 0x20));
              unaff_x21 = (char *)(ulong)(uint)(iVar4 + (int)unaff_x21);
              unaff_x22 = unaff_x22 + 1;
              uVar12 = (ulong)*(uint *)(lVar7 + 0x18);
            } while ((long)unaff_x22 < (long)(int)*(uint *)(lVar7 + 0x18));
          }
          return unaff_x21;
        }
LAB_015054a8:
        uVar11 = func_0x00f78af4();
        pcStack_178 = Atlas_Stats_StatsManager__GetStatFromString;
        uStack_1a0 = unaff_x22;
        pcStack_198 = unaff_x21;
        pppppcStack_180 = &ppppcStack_140;
        auStack_190 = auVar22;
        if ((bRam0000000003eb4d0b & 1) == 0) {
          func_0x00f78a20(0x3d24d58);
          bRam0000000003eb4d0b = 1;
        }
        uStack_1a4 = 0;
        if (((*(ushort *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        Atlas_Stats_StatsManager__TryGetStatFromString(uVar11,&uStack_1a4);
        return (char *)(ulong)uStack_1a4;
      }
      puVar3 = &stack0xffffffffffffff90;
      pcVar17 = Atlas_Stats_StatsManager__GetCommittedStat;
      puStack_80 = &stack0xffffffffffffff90;
    }
    else {
      puVar3 = &stack0xffffffffffffffa0;
      pcVar17 = Atlas_Stats_StatsManager__GetTransactionStat;
      ppuVar19 = (undefined1 **)&stack0xffffffffffffffa0;
    }
  }
  else {
    puVar3 = &stack0xffffffffffffffb0;
    ppuVar19 = &puStack_30;
  }
  *(undefined1 ***)(puVar3 + -0x10) = ppuVar19;
  *(code **)(puVar3 + -8) = pcVar17;
  lVar13 = *(long *)(lVar13 + 0x10);
  if (lVar13 == 0) {
    func_0x00f78af4();
  }
  else if (uVar10 < *(uint *)(lVar13 + 0x18)) {
    return (char *)(ulong)*(uint *)(lVar13 + (long)(int)uVar10 * 4 + 0x20);
  }
  uVar11 = func_0x00f78b24();
  auVar22 = func_0x00f78ac0(uVar11,0);
  lVar13 = auVar22._8_8_;
  pcVar8 = auVar22._0_8_;
  *(undefined8 *)(puVar3 + -0x50) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x48) = unaff_x23;
  *(ulong *)(puVar3 + -0x40) = unaff_x22;
  *(char **)(puVar3 + -0x38) = unaff_x21;
  *(long *)(puVar3 + -0x30) = lVar7;
  *(char **)(puVar3 + -0x28) = param_1;
  *(undefined1 **)(puVar3 + -0x20) = puVar3 + -0x10;
  *(code **)(puVar3 + -0x18) = Atlas_Stats_StatsData__UpdateToLargestValues;
  pcVar6 = pcVar8;
  if ((bRam0000000003eb4d06 & 1) == 0) {
    pcVar6 = (char *)func_0x00f78a20(0x3d1f100);
    bRam0000000003eb4d06 = 1;
  }
  lVar7 = *(long *)(pcVar8 + 0x10);
  if (((lVar7 != 0) && (lVar13 != 0)) && (*(long *)(lVar13 + 0x10) != 0)) {
    iVar4 = *(int *)(lVar7 + 0x18);
    unaff_x22 = *(ulong *)(*(long *)(lVar13 + 0x10) + 0x18);
    if (iVar4 < (int)unaff_x22) {
      lVar7 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,unaff_x22);
      pcVar6 = (char *)/*System.Array$$Copy*/ func_0x0292c49c(*(undefined8 *)(pcVar8 + 0x10),lVar7,iVar4,0);
      *(long *)(pcVar8 + 0x10) = lVar7;
    }
    if (0 < (int)unaff_x22) {
      if (lVar7 == 0) goto LAB_01504c70;
      uVar12 = 0;
      uVar10 = *(uint *)(lVar7 + 0x18);
      do {
        if (uVar10 == uVar12) {
LAB_01504c64:
          uVar11 = func_0x00f78b24();
          func_0x00f78ac0(uVar11,0);
          goto LAB_01504c70;
        }
        lVar18 = *(long *)(lVar13 + 0x10);
        if (lVar18 == 0) goto LAB_01504c70;
        if ((*(uint *)(lVar18 + 0x18) <= uVar12) || (uVar10 <= uVar12)) goto LAB_01504c64;
        iVar4 = *(int *)(lVar7 + 0x20 + uVar12 * 4);
        iVar5 = *(int *)(lVar18 + uVar12 * 4 + 0x20);
        if (iVar4 <= iVar5) {
          iVar4 = iVar5;
        }
        *(int *)(lVar7 + 0x20 + uVar12 * 4) = iVar4;
        uVar12 = uVar12 + 1;
      } while ((unaff_x22 & 0xffffffff) != uVar12);
    }
    return pcVar6;
  }
LAB_01504c70:
  func_0x00f78af4();
  *(ulong *)(puVar3 + -0x80) = unaff_x22;
  *(long *)(puVar3 + -0x78) = lVar7;
  *(undefined1 (*) [16])(puVar3 + -0x70) = auVar22;
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
// RVA: 0x144fa98 | Atlas.Arcade.ArcadeEventTimeTrial.RecordStats
// ============================================================

/* WARNING: Possible PIC construction at 0x01504cc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01504cc4) */
/* WARNING: Removing unreachable block (ram,0x01504ce8) */
/* WARNING: Removing unreachable block (ram,0x01504cc8) */

ulong Atlas_Arcade_ArcadeEventTimeTrial__RecordStats(long param_1)

{
  long *plVar1;
  ushort uVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  undefined8 unaff_x19;
  ulong unaff_x21;
  ulong unaff_x22;
  code *pcVar17;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  code **ppcVar18;
  undefined1 *puVar19;
  undefined1 auVar20 [12];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  uint uStack_184;
  ulong uStack_180;
  ulong uStack_178;
  undefined1 auStack_170 [16];
  code *****pppppcStack_160;
  code *pcStack_158;
  code ****ppppcStack_120;
  code *pcStack_118;
  code ***pppcStack_e0;
  code *pcStack_d8;
  long alStack_b0 [2];
  code **ppcStack_a0;
  code *pcStack_98;
  ulong auStack_90 [4];
  code *apcStack_70 [4];
  
  if (*(long *)(param_1 + 0x58) == 0) {
LAB_0144faec:
    lVar11 = func_0x00f78af4();
    if ((*(long *)(lVar11 + 0x10) != 0) &&
       (lVar11 = *(long *)(*(long *)(lVar11 + 0x10) + 0x1c0), lVar11 != 0)) {
      return (ulong)*(uint *)(lVar11 + 0xcc);
    }
    lVar11 = func_0x00f78af4();
    return (ulong)(*(int *)(lVar11 + 0x70) + 1);
  }
  iVar4 = Atlas_Gameplay_Player_GameContextPlayer__get_CurrentLap(*(long *)(param_1 + 0x58),0);
  if ((*(long *)(param_1 + 0x38) == 0) ||
     (lVar11 = *(long *)(*(long *)(param_1 + 0x38) + 0x10), lVar11 == 0)) goto LAB_0144faec;
  uVar8 = iVar4 - 1;
  if ((int)uVar8 < 1) {
    uVar8 = 0;
  }
  uVar10 = (ulong)uVar8;
  if (*(long *)(lVar11 + 0x20) == 0) {
LAB_01505234:
    func_0x00f78af4();
  }
  else {
    unaff_x19 = 0x7b;
    unaff_x21 = Atlas_Stats_StatsData__GetStat();
    unaff_x22 = uVar10;
    if (*(long *)(lVar11 + 0x20) == 0) goto LAB_01505234;
    Atlas_Stats_StatsData__SetStat(*(long *)(lVar11 + 0x20),0x7b,uVar10);
    if (*(long *)(lVar11 + 0x20) == 0) goto LAB_01505234;
    uVar10 = Atlas_Stats_StatsData__GetStat(*(long *)(lVar11 + 0x20),0x7b);
    if ((int)uVar10 == (int)unaff_x21) {
      return uVar10;
    }
    lVar12 = *(long *)(lVar11 + 0x28);
    if (lVar12 == 0) goto LAB_01505234;
    if (0x7b < *(uint *)(lVar12 + 0x18)) {
      uVar10 = *(ulong *)(lVar12 + 0x3f8);
      if (uVar10 == 0) {
        return 0;
      }
      uVar9 = 0;
      apcStack_70[3] = (code *)uVar10;
      lVar11 = *(long *)(uVar10 + 0x68);
      if (lVar11 == 0) {
        ppcVar18 = apcStack_70 + 3;
        lVar12 = 1;
      }
      else {
        lVar12 = *(long *)(lVar11 + 0x18);
        if (lVar12 == 0) {
          return uVar10;
        }
        ppcVar18 = (code **)(lVar11 + 0x20);
      }
      lVar11 = 0;
      do {
        pcVar13 = ppcVar18[lVar11];
        pcVar17 = *(code **)(pcVar13 + 0x10);
        plVar1 = *(long **)(pcVar13 + 0x20);
        lVar6 = *(long *)(pcVar13 + 0x28);
        if (*(short *)(lVar6 + 0x48) == -1) {
          func_0x00f78ad8(lVar6,uVar9);
        }
        iVar4 = func_0x00f78a4c(lVar6);
        if (iVar4 == 0) {
          if ((((plVar1 == (long *)0x0) || (*(short *)(lVar6 + 0x48) == -1)) ||
              ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(uVar10 + 0x18) == 0))
          goto code_r0x02924d98;
          iVar4 = func_0x00f78a44(lVar6);
          iVar5 = func_0x00f78ec0(lVar6);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar6 + 0x48);
            if (iVar5 == 0) {
              lVar6 = *plVar1 + (ulong)uVar2 * 0x10;
              auVar22 = (**(code **)(lVar6 + 0x138))(plVar1,*(undefined8 *)(lVar6 + 0x140));
              goto code_r0x02924da4;
            }
            lVar6 = func_0x00f78a48(lVar6);
            lVar14 = *plVar1;
            uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == lVar6) {
                  puVar7 = (undefined8 *)
                           (lVar14 + (long)(int)(*piVar16 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x02924e68;
                }
                piVar16 = piVar16 + 4;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar6,(ulong)uVar2);
code_r0x02924e68:
            pcVar13 = (code *)*puVar7;
            puVar7 = (undefined8 *)puVar7[1];
          }
          else {
            if (iVar5 == 0) {
              uVar9 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar6 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar14 = *plVar1;
              uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)(lVar6 + 0x18)) {
                    lVar14 = lVar14 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar6 + 0x48)) * 0x10
                             + 0x138;
                    goto code_r0x02924e40;
                  }
                  piVar16 = piVar16 + 4;
                  uVar15 = uVar15 - 1;
                } while (uVar15 != 0);
              }
              lVar14 = func_0x00fac1f0(plVar1);
code_r0x02924e40:
              uVar9 = *(undefined8 *)(lVar14 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar9,lVar6);
            pcVar13 = (code *)*puVar7;
          }
          auVar22 = (*pcVar13)(plVar1,puVar7);
        }
        else if (*(char *)(lVar6 + 0x4a) == '\0') {
          auVar22 = (*pcVar17)(lVar6);
        }
        else {
code_r0x02924d98:
          auVar22 = (*pcVar17)(plVar1,lVar6);
        }
code_r0x02924da4:
        uVar9 = auVar22._8_8_;
        lVar11 = lVar11 + 1;
        if (lVar11 == lVar12) {
          return auVar22._0_8_;
        }
      } while( true );
    }
  }
  uVar9 = func_0x00f78b24();
  auVar20 = func_0x00f78ac0(uVar9,0);
  uVar8 = auVar20._8_4_;
  pcVar13 = Atlas_Stats_StatsManager__GetStat;
  lVar12 = *(long *)(auVar20._0_8_ + 0x20);
  if (lVar12 == 0) {
    auVar20 = func_0x00f78af4();
    uVar8 = auVar20._8_4_;
    puVar19 = &stack0xffffffffffffffb0;
    lVar12 = *(long *)(auVar20._0_8_ + 0x18);
    if (lVar12 == 0) {
      auVar20 = func_0x00f78af4();
      uVar8 = auVar20._8_4_;
      apcStack_70[0] = (code *)(apcStack_70 + 2);
      apcStack_70[3] = Atlas_Stats_StatsManager__GetCommittedStat;
      lVar12 = *(long *)(auVar20._0_8_ + 0x10);
      if (lVar12 == 0) {
        apcStack_70[2] = (code *)&stack0xffffffffffffffb0;
        auVar22 = func_0x00f78af4();
        lVar12 = auVar22._0_8_;
        apcStack_70[1] = Atlas_Stats_StatsManager__GetGlobalStat;
        auStack_90[0] = unaff_x22;
        auStack_90[1] = unaff_x21;
        auStack_90[2] = lVar11;
        auStack_90[3] = unaff_x19;
        ppcVar18 = apcStack_70 + 2;
        if (*(long *)(lVar12 + 0x10) != 0) {
          unaff_x21 = Atlas_Stats_StatsData__GetStat();
          unaff_x19 = auVar22._8_8_;
          ppcVar18 = (code **)apcStack_70[0];
          if (*(long *)(lVar12 + 0x18) != 0) {
            iVar4 = Atlas_Stats_StatsData__GetStat(*(long *)(lVar12 + 0x18),auVar22._8_8_);
            return (ulong)(uint)(iVar4 + (int)unaff_x21);
          }
        }
        apcStack_70[0] = (code *)ppcVar18;
        auVar22._8_8_ = unaff_x19;
        auVar22._0_8_ = lVar12;
        auVar21 = func_0x00f78af4();
        lVar11 = auVar21._8_8_;
        pcStack_98 = Atlas_Stats_StatsManager__GetSummedCommittedStats;
        ppcStack_a0 = apcStack_70;
        if (lVar11 != 0) {
          if ((int)*(ulong *)(lVar11 + 0x18) < 1) {
            unaff_x21 = 0;
          }
          else {
            unaff_x21 = 0;
            unaff_x22 = 0;
            uVar10 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
            do {
              auVar22 = auVar21;
              if (uVar10 <= unaff_x22) goto LAB_01505374;
              lVar12 = *(long *)(auVar21._0_8_ + 0x10);
              if (lVar12 == 0) goto LAB_01505370;
              iVar4 = Atlas_Stats_StatsData__GetStat
                                (lVar12,*(undefined4 *)(lVar11 + 0x20 + unaff_x22 * 4));
              unaff_x21 = (ulong)(uint)(iVar4 + (int)unaff_x21);
              unaff_x22 = unaff_x22 + 1;
              uVar10 = (ulong)*(uint *)(lVar11 + 0x18);
            } while ((long)unaff_x22 < (long)(int)*(uint *)(lVar11 + 0x18));
          }
          return unaff_x21;
        }
LAB_01505370:
        func_0x00f78af4();
LAB_01505374:
        uVar9 = func_0x00f78b24();
        auVar21 = func_0x00f78ac0(uVar9,0);
        lVar11 = auVar21._8_8_;
        pcStack_d8 = Atlas_Stats_StatsManager__GetSummedTransactionStats;
        pppcStack_e0 = &ppcStack_a0;
        if (lVar11 != 0) {
          if ((int)*(ulong *)(lVar11 + 0x18) < 1) {
            unaff_x21 = 0;
          }
          else {
            unaff_x21 = 0;
            unaff_x22 = 0;
            uVar10 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
            do {
              auVar22 = auVar21;
              if (uVar10 <= unaff_x22) goto LAB_0150540c;
              lVar12 = *(long *)(auVar21._0_8_ + 0x18);
              if (lVar12 == 0) goto LAB_01505408;
              iVar4 = Atlas_Stats_StatsData__GetStat
                                (lVar12,*(undefined4 *)(lVar11 + 0x20 + unaff_x22 * 4));
              unaff_x21 = (ulong)(uint)(iVar4 + (int)unaff_x21);
              unaff_x22 = unaff_x22 + 1;
              uVar10 = (ulong)*(uint *)(lVar11 + 0x18);
            } while ((long)unaff_x22 < (long)(int)*(uint *)(lVar11 + 0x18));
          }
          return unaff_x21;
        }
LAB_01505408:
        func_0x00f78af4();
LAB_0150540c:
        uVar9 = func_0x00f78b24();
        auVar21 = func_0x00f78ac0(uVar9,0);
        lVar11 = auVar21._8_8_;
        pcStack_118 = Atlas_Stats_StatsManager__GetSummedGlobalStats;
        ppppcStack_120 = &pppcStack_e0;
        if (lVar11 != 0) {
          if ((int)*(ulong *)(lVar11 + 0x18) < 1) {
            unaff_x21 = 0;
          }
          else {
            unaff_x21 = 0;
            unaff_x22 = 0;
            uVar10 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
            do {
              if (uVar10 <= unaff_x22) {
                uVar9 = func_0x00f78b24();
                func_0x00f78ac0(uVar9,0);
                auVar22 = auVar21;
                goto LAB_015054a8;
              }
              iVar4 = Atlas_Stats_StatsManager__GetGlobalStat
                                (auVar21._0_8_,*(undefined4 *)(lVar11 + 0x20 + unaff_x22 * 4));
              unaff_x21 = (ulong)(uint)(iVar4 + (int)unaff_x21);
              unaff_x22 = unaff_x22 + 1;
              uVar10 = (ulong)*(uint *)(lVar11 + 0x18);
            } while ((long)unaff_x22 < (long)(int)*(uint *)(lVar11 + 0x18));
          }
          return unaff_x21;
        }
LAB_015054a8:
        uVar9 = func_0x00f78af4();
        pcStack_158 = Atlas_Stats_StatsManager__GetStatFromString;
        uStack_180 = unaff_x22;
        uStack_178 = unaff_x21;
        pppppcStack_160 = &ppppcStack_120;
        auStack_170 = auVar22;
        if ((bRam0000000003eb4d0b & 1) == 0) {
          func_0x00f78a20(0x3d24d58);
          bRam0000000003eb4d0b = 1;
        }
        uStack_184 = 0;
        if (((*(ushort *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        Atlas_Stats_StatsManager__TryGetStatFromString(uVar9,&uStack_184);
        return (ulong)uStack_184;
      }
      puVar3 = &stack0xffffffffffffffb0;
      pcVar13 = Atlas_Stats_StatsManager__GetCommittedStat;
      apcStack_70[2] = (code *)&stack0xffffffffffffffb0;
    }
    else {
      puVar3 = &stack0xffffffffffffffc0;
      pcVar13 = Atlas_Stats_StatsManager__GetTransactionStat;
      puVar19 = &stack0xffffffffffffffc0;
    }
  }
  else {
    puVar3 = &stack0xffffffffffffffd0;
    puVar19 = &stack0xfffffffffffffff0;
  }
  *(undefined1 **)(puVar3 + -0x10) = puVar19;
  *(code **)(puVar3 + -8) = pcVar13;
  lVar12 = *(long *)(lVar12 + 0x10);
  if (lVar12 == 0) {
    func_0x00f78af4();
  }
  else if (uVar8 < *(uint *)(lVar12 + 0x18)) {
    return (ulong)*(uint *)(lVar12 + (long)(int)uVar8 * 4 + 0x20);
  }
  uVar9 = func_0x00f78b24();
  auVar22 = func_0x00f78ac0(uVar9,0);
  lVar12 = auVar22._8_8_;
  uVar15 = auVar22._0_8_;
  *(undefined8 *)(puVar3 + -0x50) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x48) = unaff_x23;
  *(ulong *)(puVar3 + -0x40) = unaff_x22;
  *(ulong *)(puVar3 + -0x38) = unaff_x21;
  *(long *)(puVar3 + -0x30) = lVar11;
  *(undefined8 *)(puVar3 + -0x28) = unaff_x19;
  *(undefined1 **)(puVar3 + -0x20) = puVar3 + -0x10;
  *(code **)(puVar3 + -0x18) = Atlas_Stats_StatsData__UpdateToLargestValues;
  uVar10 = uVar15;
  if ((bRam0000000003eb4d06 & 1) == 0) {
    uVar10 = func_0x00f78a20(0x3d1f100);
    bRam0000000003eb4d06 = 1;
  }
  lVar11 = *(long *)(uVar15 + 0x10);
  if (((lVar11 != 0) && (lVar12 != 0)) && (*(long *)(lVar12 + 0x10) != 0)) {
    iVar4 = *(int *)(lVar11 + 0x18);
    unaff_x22 = *(ulong *)(*(long *)(lVar12 + 0x10) + 0x18);
    if (iVar4 < (int)unaff_x22) {
      lVar11 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,unaff_x22);
      uVar10 = /*System.Array$$Copy*/ func_0x0292c49c(*(undefined8 *)(uVar15 + 0x10),lVar11,iVar4,0);
      *(long *)(uVar15 + 0x10) = lVar11;
    }
    if (0 < (int)unaff_x22) {
      if (lVar11 == 0) goto LAB_01504c70;
      uVar15 = 0;
      uVar8 = *(uint *)(lVar11 + 0x18);
      do {
        if (uVar8 == uVar15) {
LAB_01504c64:
          uVar9 = func_0x00f78b24();
          func_0x00f78ac0(uVar9,0);
          goto LAB_01504c70;
        }
        lVar6 = *(long *)(lVar12 + 0x10);
        if (lVar6 == 0) goto LAB_01504c70;
        if ((*(uint *)(lVar6 + 0x18) <= uVar15) || (uVar8 <= uVar15)) goto LAB_01504c64;
        iVar4 = *(int *)(lVar11 + 0x20 + uVar15 * 4);
        iVar5 = *(int *)(lVar6 + uVar15 * 4 + 0x20);
        if (iVar4 <= iVar5) {
          iVar4 = iVar5;
        }
        *(int *)(lVar11 + 0x20 + uVar15 * 4) = iVar4;
        uVar15 = uVar15 + 1;
      } while ((unaff_x22 & 0xffffffff) != uVar15);
    }
    return uVar10;
  }
LAB_01504c70:
  func_0x00f78af4();
  *(ulong *)(puVar3 + -0x80) = unaff_x22;
  *(long *)(puVar3 + -0x78) = lVar11;
  *(undefined1 (*) [16])(puVar3 + -0x70) = auVar22;
  *(undefined1 **)(puVar3 + -0x60) = puVar3 + -0x20;
  *(code **)(puVar3 + -0x58) = Atlas_Stats_StatsData__Clone;
  if ((bRam0000000003eb4d07 & 1) == 0) {
    func_0x00f78a20(0x3d24d50);
    bRam0000000003eb4d07 = 1;
  }
  uVar10 = func_0x00f78aec(/*Atlas.Stats.StatsData_TypeInfo*/ uRam0000000003d24d50);
  return uVar10;
}



// ============================================================
// RVA: 0x144faf0 | Atlas.Arcade.ArcadeEventTimeTrial.GetMaxScore
// ============================================================

int Atlas_Arcade_ArcadeEventTimeTrial__GetMaxScore(long param_1)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x1c0), lVar1 != 0)) {
    return *(int *)(lVar1 + 0xcc);
  }
  lVar1 = func_0x00f78af4();
  return *(int *)(lVar1 + 0x70) + 1;
}



// ============================================================
// RVA: 0x144fb18 | Atlas.Arcade.ArcadeEventTimeTrial.GetVisualScore
// ============================================================

int Atlas_Arcade_ArcadeEventTimeTrial__GetVisualScore(long param_1)

{
  return *(int *)(param_1 + 0x70) + 1;
}



