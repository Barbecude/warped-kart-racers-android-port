// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Stats.StatsManager

// ============================================================
// RVA: 0x15045f8 | Atlas.Stats.StatsManager.GetSummedStats
// ============================================================

uint Atlas_Stats_StatsManager__GetSummedStats(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  undefined1 auVar7 [12];
  
  if (param_2 == 0) {
LAB_01504680:
    func_0x00f78af4();
LAB_01504684:
    uVar2 = func_0x00f78b24();
    auVar7 = func_0x00f78ac0(uVar2,0);
    iVar1 = auVar7._8_4_;
    lVar3 = auVar7._0_8_;
    switch(*(undefined4 *)(lVar3 + 8)) {
    case 0:
      return (uint)(*(int *)(lVar3 + 0xc) == iVar1);
    case 1:
      return (uint)(*(int *)(lVar3 + 0xc) != iVar1);
    case 2:
      return (uint)(*(int *)(lVar3 + 0xc) < iVar1);
    case 3:
      return (uint)(*(int *)(lVar3 + 0xc) <= iVar1);
    case 4:
      return (uint)(iVar1 < *(int *)(lVar3 + 0xc));
    case 5:
      return (uint)(iVar1 <= *(int *)(lVar3 + 0xc));
    default:
      return 0;
    }
  }
  if ((int)*(ulong *)(param_2 + 0x18) < 1) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    uVar6 = 0;
    uVar4 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
    do {
      if (uVar4 <= uVar6) goto LAB_01504684;
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_01504680;
      iVar1 = Atlas_Stats_StatsData__GetStat
                        (*(long *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x20 + uVar6 * 4));
      uVar5 = iVar1 + uVar5;
      uVar6 = uVar6 + 1;
      uVar4 = (ulong)*(uint *)(param_2 + 0x18);
    } while ((long)uVar6 < (long)(int)*(uint *)(param_2 + 0x18));
  }
  return uVar5;
}



// ============================================================
// RVA: 0x1504cf8 | Atlas.Stats.StatsManager.get_CommittedData
// ============================================================

undefined8 Atlas_Stats_StatsManager__get_CommittedData(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



// ============================================================
// RVA: 0x1504d00 | Atlas.Stats.StatsManager.Init
// ============================================================

void Atlas_Stats_StatsManager__Init(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  if ((bRam0000000003eb4d08 & 1) == 0) {
    func_0x00f78a20(0x3d1ecf8);
    func_0x00f78a20(0x3d24d50);
    func_0x00f78a20(0x3d24d58);
    bRam0000000003eb4d08 = 1;
  }
  uVar1 = func_0x00f78aec(/*Atlas.Stats.StatsData_TypeInfo*/ uRam0000000003d24d50);
  /*System.Object$$.ctor*/ func_0x0294d018(uVar1,0);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar1 = func_0x00f78aec(/*Atlas.Stats.StatsData_TypeInfo*/ uRam0000000003d24d50);
  /*System.Object$$.ctor*/ func_0x0294d018(uVar1,0);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  lVar3 = *(long *)(param_1 + 0x10);
  if (((*(ushort *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar3 != 0) {
    Atlas_Stats_StatsData__Init(lVar3,*(undefined4 *)(*(long *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0xb8) + 8));
    if (*(long *)(param_1 + 0x18) != 0) {
      Atlas_Stats_StatsData__Init
                (*(long *)(param_1 + 0x18),
                 *(undefined4 *)(*(long *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0xb8) + 8));
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x10);
      if (**(long **)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0xb8) != 0) {
        uVar1 = func_0x00f78a34(/*System.Action[]_TypeInfo*/ uRam0000000003d1ecf8,
                                *(undefined4 *)(**(long **)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0xb8) + 0x18));
        *(undefined8 *)(param_1 + 0x28) = uVar1;
        return;
      }
    }
  }
  lVar3 = func_0x00f78af4();
  *(undefined8 *)(lVar3 + 0x28) = 0;
  if (*(long *)(lVar3 + 0x18) != 0) {
    *(undefined8 *)(*(long *)(lVar3 + 0x18) + 0x10) = 0;
    lVar2 = *(long *)(lVar3 + 0x10);
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x10) = 0;
      *(long *)(lVar3 + 0x10) = 0;
      *(undefined8 *)(lVar3 + 0x18) = 0;
      *(undefined8 *)(lVar3 + 0x20) = 0;
      return;
    }
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x1504e1c | Atlas.Stats.StatsManager.DeInit
// ============================================================

void Atlas_Stats_StatsManager__DeInit(long param_1)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10) = 0;
    lVar1 = *(long *)(param_1 + 0x10);
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 0x10) = 0;
      *(long *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      return;
    }
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x1504e54 | Atlas.Stats.StatsManager.Update
// ============================================================

void Atlas_Stats_StatsManager__Update(void)

{
  return;
}



// ============================================================
// RVA: 0x1504e58 | Atlas.Stats.StatsManager.CommitAnyCurrentAndStartTransaction
// ============================================================

void Atlas_Stats_StatsManager__CommitAnyCurrentAndStartTransaction(long param_1)

{
  /*Atlas.Stats.StatsManager$$CommitTransaction*/ func_0x01504e80();
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x18);
  return;
}



// ============================================================
// RVA: 0x1504e80 | Atlas.Stats.StatsManager.CommitTransaction
// ============================================================

/* WARNING: Possible PIC construction at 0x029202dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01504948: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01504be4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01504cc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0292b50c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0292b43c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0292c6bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0292c6e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01505464: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0292c6ec) */
/* WARNING: Removing unreachable block (ram,0x0292c6c0) */
/* WARNING: Removing unreachable block (ram,0x0292c6f4) */
/* WARNING: Removing unreachable block (ram,0x0292c6c8) */
/* WARNING: Removing unreachable block (ram,0x0292c6cc) */
/* WARNING: Removing unreachable block (ram,0x0292b440) */
/* WARNING: Removing unreachable block (ram,0x0292b484) */
/* WARNING: Removing unreachable block (ram,0x0292b510) */
/* WARNING: Removing unreachable block (ram,0x0292b70c) */
/* WARNING: Removing unreachable block (ram,0x0292b524) */
/* WARNING: Removing unreachable block (ram,0x0292b740) */
/* WARNING: Removing unreachable block (ram,0x0292b528) */
/* WARNING: Removing unreachable block (ram,0x0292b778) */
/* WARNING: Removing unreachable block (ram,0x0292b52c) */
/* WARNING: Removing unreachable block (ram,0x0292b548) */
/* WARNING: Removing unreachable block (ram,0x0292b56c) */
/* WARNING: Removing unreachable block (ram,0x0292b820) */
/* WARNING: Removing unreachable block (ram,0x0292b588) */
/* WARNING: Removing unreachable block (ram,0x0292b850) */
/* WARNING: Removing unreachable block (ram,0x0292b59c) */
/* WARNING: Removing unreachable block (ram,0x0292b5ac) */
/* WARNING: Removing unreachable block (ram,0x0292b5d0) */
/* WARNING: Removing unreachable block (ram,0x0292b5ec) */
/* WARNING: Removing unreachable block (ram,0x0292b634) */
/* WARNING: Removing unreachable block (ram,0x0292b638) */
/* WARNING: Removing unreachable block (ram,0x0292b5f4) */
/* WARNING: Removing unreachable block (ram,0x0292b604) */
/* WARNING: Removing unreachable block (ram,0x0292b664) */
/* WARNING: Removing unreachable block (ram,0x0292b60c) */
/* WARNING: Removing unreachable block (ram,0x01504cc4) */
/* WARNING: Removing unreachable block (ram,0x01504ce8) */
/* WARNING: Removing unreachable block (ram,0x01504cc8) */
/* WARNING: Removing unreachable block (ram,0x01504be8) */
/* WARNING: Removing unreachable block (ram,0x0150494c) */
/* WARNING: Removing unreachable block (ram,0x01504950) */
/* WARNING: Removing unreachable block (ram,0x0150496c) */
/* WARNING: Removing unreachable block (ram,0x029202e0) */
/* WARNING: Removing unreachable block (ram,0x029202e4) */
/* WARNING: Removing unreachable block (ram,0x0292030c) */
/* WARNING: Removing unreachable block (ram,0x02920300) */
/* WARNING: Removing unreachable block (ram,0x01505468) */
/* WARNING: Removing unreachable block (ram,0x0150547c) */
/* WARNING: Type propagation algorithm not settling */

undefined1 ****
Atlas_Stats_StatsManager__CommitTransaction
          (undefined1 ****param_1,undefined8 param_2,undefined1 ******param_3,undefined8 param_4,
          undefined4 *param_5)

{
  uint uVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  code *pcVar10;
  undefined1 *puVar11;
  uint **ppuVar12;
  undefined1 ******ppppppuVar13;
  undefined1 *puVar14;
  int iVar15;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined1 ****ppppuVar19;
  long lVar20;
  undefined1 ****ppppuVar21;
  undefined8 uVar22;
  undefined1 ******ppppppuVar23;
  int iVar16;
  undefined1 ******ppppppuVar24;
  undefined8 uVar25;
  undefined8 *puVar26;
  undefined4 *puVar27;
  undefined8 uVar28;
  undefined4 *puVar29;
  undefined1 ******ppppppuVar30;
  int *piVar31;
  undefined1 ***pppuVar32;
  undefined1 *****pppppuVar33;
  undefined1 **ppuVar34;
  ulong uVar35;
  uint uVar36;
  ulong uVar37;
  long lVar38;
  ulong uVar39;
  undefined1 auVar40 [8];
  undefined8 uVar41;
  long *plVar42;
  undefined1 **ppuVar43;
  undefined1 ******ppppppuVar44;
  undefined1 ***pppuVar45;
  undefined1 ******ppppppuVar46;
  undefined4 *unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined1 **ppuVar47;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  uint **ppuVar48;
  undefined1 ******ppppppuVar49;
  undefined *puVar50;
  undefined1 auVar51 [8];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [12];
  long alStack_1d0 [14];
  uint *apuStack_160 [2];
  undefined *apuStack_150 [2];
  code *apcStack_140 [2];
  undefined1 ******appppppuStack_130 [2];
  undefined1 ******appppppuStack_120 [2];
  undefined1 ******appppppuStack_110 [2];
  undefined1 ******ppppppuStack_100;
  undefined1 ******ppppppuStack_f8;
  undefined1 ******ppppppuStack_f0;
  undefined1 ******ppppppuStack_e8;
  undefined1 ******ppppppuStack_e0;
  undefined1 auStack_d8 [8];
  undefined1 *****pppppuStack_d0;
  undefined1 auStack_c8 [8];
  undefined1 *****pppppuStack_c0;
  undefined1 ******ppppppuStack_b8;
  undefined1 *****pppppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [16];
  undefined1 ******ppppppuStack_88;
  undefined1 ****ppppuStack_80;
  undefined *puStack_78;
  undefined1 ***pppuStack_50;
  undefined *puStack_48;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  if (param_1[4] != param_1[3]) {
    return param_1;
  }
  if ((param_1[2] != (undefined1 ***)0x0) &&
     (Atlas_Stats_StatsData__Add(), param_1[3] != (undefined1 ***)0x0)) {
    ppppuVar19 = (undefined1 ****)Atlas_Stats_StatsData__Reset();
    param_1[4] = param_1[2];
    return ppppuVar19;
  }
  lVar20 = func_0x00f78af4();
  puStack_28 = &Atlas_Stats_StatsManager__EndAndResetTransaction;
  ppppuVar19 = *(undefined1 *****)(lVar20 + 0x20);
  if (ppppuVar19 != *(undefined1 *****)(lVar20 + 0x18)) {
    return ppppuVar19;
  }
  puStack_30 = &stack0xfffffffffffffff0;
  if (ppppuVar19 != (undefined1 ****)0x0) {
    ppppuVar19 = (undefined1 ****)Atlas_Stats_StatsData__Reset();
    *(undefined8 *)(lVar20 + 0x20) = *(undefined8 *)(lVar20 + 0x10);
    return ppppuVar19;
  }
  auVar53 = func_0x00f78af4();
  puStack_48 = &Atlas_Stats_StatsManager__RegisterOnStatChange;
  ppppppuVar24 = param_3;
  pppuStack_50 = (undefined1 ***)&puStack_30;
  if ((bRam0000000003eb4d09 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eb4d09 = 1;
  }
  lVar20 = *(long *)(auVar53._0_8_ + 0x28);
  if (lVar20 == 0) {
    func_0x00f78af4();
  }
  else if (auVar53._8_4_ < *(uint *)(lVar20 + 0x18)) {
    plVar42 = (long *)(lVar20 + (long)(int)auVar53._8_4_ * 8 + 0x20);
    ppppuVar21 = (undefined1 ****)/*System.Delegate$$Combine*/ func_0x02ab18f0(*plVar42,param_3,0);
    ppppuVar19 = (undefined1 ****)0x0;
    if (ppppuVar21 != (undefined1 ****)0x0) {
      if ((*ppppuVar21 == /*System.Action_TypeInfo*/ pppuRam0000000003d1fa78) &&
         (*plVar42 = (long)ppppuVar21, *ppppuVar21 == /*System.Action_TypeInfo*/ pppuRam0000000003d1fa78)) {
        return ppppuVar21;
      }
      ppppuVar19 = (undefined1 ****)func_0x00f78e5c();
    }
    *plVar42 = (long)ppppuVar19;
    return ppppuVar19;
  }
  uVar22 = func_0x00f78b24();
  auVar54 = func_0x00f78ac0(uVar22,0);
  ppppppuVar44 = auVar54._0_8_;
  uStack_a0 = 0x3eb4000;
  puStack_78 = &Atlas_Stats_StatsManager__UnRegisterOnStatChange;
  ppppppuVar46 = (undefined1 ******)0x3eb4000;
  ppppppuVar30 = ppppppuVar24;
  ppppppuStack_88 = param_3;
  ppppuStack_80 = &pppuStack_50;
  auStack_98 = auVar53;
  if ((bRam0000000003eb4d0a & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eb4d0a = 1;
  }
  pppuVar32 = (undefined1 ***)ppppppuVar44[5];
  if (pppuVar32 == (undefined1 ***)0x0) {
    func_0x00f78af4();
  }
  else if (auVar54._8_4_ < *(uint *)(pppuVar32 + 3)) {
    pppuVar32 = pppuVar32 + (long)(int)auVar54._8_4_ + 4;
    ppppuVar21 = (undefined1 ****)/*System.Delegate$$Remove*/ func_0x02ab1bac(*pppuVar32,ppppppuVar24,0);
    ppppuVar19 = (undefined1 ****)0x0;
    if (ppppuVar21 != (undefined1 ****)0x0) {
      if ((*ppppuVar21 == /*System.Action_TypeInfo*/ pppuRam0000000003d1fa78) &&
         (*pppuVar32 = (undefined1 **)ppppuVar21, *ppppuVar21 == /*System.Action_TypeInfo*/ pppuRam0000000003d1fa78)) {
        return ppppuVar21;
      }
      ppppuVar19 = (undefined1 ****)func_0x00f78e5c();
    }
    *pppuVar32 = (undefined1 **)ppppuVar19;
    return ppppuVar19;
  }
  uVar22 = func_0x00f78b24();
  lVar20 = func_0x00f78ac0(uVar22,0);
  pppppuStack_c0 = (undefined1 *****)&pppppuStack_b0;
  puStack_a8 = &Atlas_Stats_StatsManager__ResetStats;
  pppppuStack_b0 = &ppppuStack_80;
  if (*(long *)(lVar20 + 0x20) == 0) {
    auVar53 = func_0x00f78af4();
    pppppuStack_d0 = (undefined1 *****)&pppppuStack_c0;
    ppppppuStack_b8 = (undefined1 ******)&Atlas_Stats_StatsManager__ResetAndSet;
    lVar20 = *(long *)(auVar53._0_8_ + 0x20);
    auVar53._8_8_ = auVar53._8_8_;
    auVar53._0_8_ = lVar20;
    if (lVar20 != 0) goto code_r0x015048e0;
    auVar53 = func_0x00f78af4();
    ppppppuVar23 = auVar53._0_8_;
    auStack_c8 = (undefined1  [8])&Atlas_Stats_StatsManager__IncrementStat;
    ppppppuStack_e0 = auVar54._8_8_;
    auStack_d8 = (undefined1  [8])ppppppuVar24;
    ppppppuVar49 = &pppppuStack_c0;
    if (ppppppuVar23[4] == (undefined1 *****)0x0) {
code_r0x01505118:
      pppppuStack_d0 = (undefined1 *****)ppppppuVar49;
      func_0x00f78af4();
    }
    else {
      Atlas_Stats_StatsData__IncrementStat();
      pppppuVar33 = ppppppuVar23[5];
      ppppppuVar24 = auVar53._8_8_;
      ppppppuVar49 = (undefined1 ******)pppppuStack_d0;
      if (pppppuVar33 == (undefined1 *****)0x0) goto code_r0x01505118;
      if (auVar53._8_4_ < *(uint *)(pppppuVar33 + 3)) {
        ppppuVar19 = pppppuVar33[(long)(int)auVar53._8_4_ + 4];
        if (ppppuVar19 == (undefined1 ****)0x0) {
          return (undefined1 ****)0x0;
        }
        ppppppuVar24 = &pppppuStack_c0;
        auVar40 = auStack_d8;
        ppppppuVar30 = ppppppuStack_e0;
        auVar51 = auStack_c8;
        goto System_Action__Invoke;
      }
    }
    uVar22 = func_0x00f78b24();
    auVar53 = func_0x00f78ac0(uVar22,0);
    ppppppuVar49 = auVar53._0_8_;
    ppppppuStack_e8 = (undefined1 ******)&Atlas_Stats_StatsManager__DecrementStat;
    ppppppuStack_100 = ppppppuVar23;
    ppppppuStack_f8 = ppppppuVar24;
    ppppppuStack_f0 = &pppppuStack_d0;
    if (ppppppuVar49[4] == (undefined1 *****)0x0) {
code_r0x01505184:
      func_0x00f78af4();
    }
    else {
      Atlas_Stats_StatsData__DecrementStat();
      pppppuVar33 = ppppppuVar49[5];
      ppppppuVar24 = auVar53._8_8_;
      if (pppppuVar33 == (undefined1 *****)0x0) goto code_r0x01505184;
      if (auVar53._8_4_ < *(uint *)(pppppuVar33 + 3)) {
        ppppuVar19 = pppppuVar33[(long)(int)auVar53._8_4_ + 4];
        if (ppppuVar19 == (undefined1 ****)0x0) {
          return (undefined1 ****)0x0;
        }
        ppppppuVar24 = (undefined1 ******)&ppppppuStack_e0;
        auVar40 = (undefined1  [8])ppppppuStack_f8;
        ppppppuVar30 = ppppppuStack_100;
        ppppppuVar49 = ppppppuStack_f0;
        auVar51 = (undefined1  [8])ppppppuStack_e8;
        goto System_Action__Invoke;
      }
    }
    uVar22 = func_0x00f78b24();
    auVar53 = func_0x00f78ac0(uVar22,0);
    ppppppuVar23 = auVar53._8_8_;
    lVar20 = auVar53._0_8_;
    appppppuStack_130[0] = (undefined1 ******)0x3eb4000;
    appppppuStack_110[1] = (undefined1 ******)&Atlas_Stats_StatsManager__SetStat;
    appppppuStack_130[1] = ppppppuVar44;
    appppppuStack_120[0] = ppppppuVar49;
    appppppuStack_120[1] = ppppppuVar24;
    appppppuStack_110[0] = (undefined1 ******)&ppppppuStack_f0;
    if (*(long *)(lVar20 + 0x20) == 0) {
code_r0x01505234:
      func_0x00f78af4();
    }
    else {
      ppppppuVar44 = (undefined1 ******)Atlas_Stats_StatsData__GetStat();
      ppppppuVar24 = ppppppuVar23;
      ppppppuVar46 = ppppppuVar30;
      if (*(long *)(lVar20 + 0x20) == 0) goto code_r0x01505234;
      Atlas_Stats_StatsData__SetStat(*(long *)(lVar20 + 0x20),ppppppuVar23,ppppppuVar30);
      if (*(long *)(lVar20 + 0x20) == 0) goto code_r0x01505234;
      ppppuVar19 = (undefined1 ****)
                   Atlas_Stats_StatsData__GetStat(*(long *)(lVar20 + 0x20),ppppppuVar23);
      if ((int)ppppuVar19 == (int)ppppppuVar44) {
        return ppppuVar19;
      }
      lVar38 = *(long *)(lVar20 + 0x28);
      if (lVar38 == 0) goto code_r0x01505234;
      if (auVar53._8_4_ < *(uint *)(lVar38 + 0x18)) {
        ppppuVar19 = *(undefined1 *****)(lVar38 + (long)(int)auVar53._8_4_ * 8 + 0x20);
        if (ppppuVar19 == (undefined1 ****)0x0) {
          return (undefined1 ****)0x0;
        }
        ppppppuVar24 = (undefined1 ******)&ppppppuStack_100;
        auVar40 = (undefined1  [8])appppppuStack_120[1];
        ppppppuVar30 = appppppuStack_120[0];
        ppppppuVar44 = appppppuStack_130[1];
        ppppppuVar46 = appppppuStack_130[0];
        ppppppuVar49 = appppppuStack_110[0];
        auVar51 = (undefined1  [8])appppppuStack_110[1];
System_Action__Invoke:
        uVar22 = 0;
        *(undefined8 *)((long)ppppppuVar24 + 0xffffffffffffffb0) = unaff_x26;
        *(undefined8 *)((long)ppppppuVar24 + 0xffffffffffffffb8) = unaff_x25;
        *(undefined8 *)((long)ppppppuVar24 + 0xffffffffffffffc0) = unaff_x24;
        *(undefined4 **)((long)ppppppuVar24 + 0xffffffffffffffc8) = unaff_x23;
        *(undefined1 *******)((long)ppppppuVar24 + 0xffffffffffffffd0) = ppppppuVar46;
        *(undefined1 *******)((long)ppppppuVar24 + 0xffffffffffffffd8) = ppppppuVar44;
        *(undefined1 *******)((long)ppppppuVar24 + 0xffffffffffffffe0) = ppppppuVar30;
        *(undefined1 (*) [8])((long)ppppppuVar24 + 0xffffffffffffffe8) = auVar40;
        *(undefined1 *******)((long)ppppppuVar24 + 0xfffffffffffffff0) = ppppppuVar49;
        *(undefined1 (*) [8])((long)ppppppuVar24 + 0xfffffffffffffff8) = auVar51;
        *(undefined1 *****)((long)ppppppuVar24 + 0xffffffffffffffa8) = ppppuVar19;
        pppuVar32 = ppppuVar19[0xd];
        if (pppuVar32 == (undefined1 ***)0x0) {
          pppuVar32 = (undefined1 ***)((long)ppppppuVar24 + 0xffffffffffffffa8);
          ppuVar43 = (undefined1 **)0x1;
        }
        else {
          ppuVar43 = pppuVar32[3];
          if (ppuVar43 == (undefined1 **)0x0) {
            return ppppuVar19;
          }
          pppuVar32 = pppuVar32 + 4;
        }
        ppuVar47 = (undefined1 **)0x0;
        do {
          ppuVar34 = pppuVar32[(long)ppuVar47];
          pcVar10 = (code *)ppuVar34[2];
          plVar42 = (long *)ppuVar34[4];
          puVar14 = ppuVar34[5];
          if (*(short *)(puVar14 + 0x48) == -1) {
            func_0x00f78ad8(puVar14,uVar22);
          }
          iVar16 = func_0x00f78a4c(puVar14);
          if (iVar16 == 0) {
            if ((((plVar42 == (long *)0x0) || (*(short *)(puVar14 + 0x48) == -1)) ||
                ((*(byte *)(*plVar42 + 0x115) & 1) != 0)) || (ppppuVar19[3] == (undefined1 ***)0x0))
            goto code_r0x02924d98;
            iVar16 = func_0x00f78a44(puVar14);
            iVar15 = func_0x00f78ec0(puVar14);
            if (iVar16 == 0) {
              uVar2 = *(ushort *)(puVar14 + 0x48);
              uVar39 = (ulong)uVar2;
              if (iVar15 == 0) {
                auVar53 = (**(code **)(*plVar42 + (uVar39 * 2 + 0x27) * 8))
                                    (plVar42,*(undefined8 *)(*plVar42 + (uVar39 * 2 + 0x28) * 8));
                goto code_r0x02924da4;
              }
              lVar20 = func_0x00f78a48(puVar14);
              lVar38 = *plVar42;
              uVar35 = (ulong)*(ushort *)(lVar38 + 0x12a);
              if (uVar35 != 0) {
                piVar31 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar31 + 0xfffffffffffffffe) == lVar20) {
                    puVar18 = (undefined8 *)
                              (lVar38 + ((long)(int)(*piVar31 + (uint)uVar2) * 2 + 0x27) * 8);
                    goto code_r0x02924e68;
                  }
                  piVar31 = piVar31 + 4;
                  uVar35 = uVar35 - 1;
                } while (uVar35 != 0);
              }
              puVar18 = (undefined8 *)func_0x00fac1f0(plVar42,lVar20,uVar39);
code_r0x02924e68:
              pcVar10 = (code *)*puVar18;
              puVar18 = (undefined8 *)puVar18[1];
            }
            else {
              if (iVar15 == 0) {
                uVar22 = *(undefined8 *)
                          (*plVar42 + ((ulong)*(ushort *)(puVar14 + 0x48) * 2 + 0x28) * 8);
              }
              else {
                lVar20 = *plVar42;
                uVar39 = (ulong)*(ushort *)(lVar20 + 0x12a);
                if (uVar39 != 0) {
                  piVar31 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar31 + 0xfffffffffffffffe) == *(long *)(puVar14 + 0x18)) {
                      lVar20 = lVar20 + ((long)(int)(*piVar31 + (uint)*(ushort *)(puVar14 + 0x48)) *
                                         2 + 0x27) * 8;
                      goto code_r0x02924e40;
                    }
                    piVar31 = piVar31 + 4;
                    uVar39 = uVar39 - 1;
                  } while (uVar39 != 0);
                }
                lVar20 = func_0x00fac1f0(plVar42);
code_r0x02924e40:
                uVar22 = *(undefined8 *)(lVar20 + 8);
              }
              puVar18 = (undefined8 *)func_0x00f78acc(uVar22,puVar14);
              pcVar10 = (code *)*puVar18;
            }
            auVar53 = (*pcVar10)(plVar42,puVar18);
          }
          else if (puVar14[0x4a] == '\0') {
            auVar53 = (*pcVar10)(puVar14);
          }
          else {
code_r0x02924d98:
            auVar53 = (*pcVar10)(plVar42,puVar14);
          }
code_r0x02924da4:
          uVar22 = auVar53._8_8_;
          ppuVar47 = (undefined1 **)((long)ppuVar47 + 1);
          if (ppuVar47 == ppuVar43) {
            return auVar53._0_8_;
          }
        } while( true );
      }
    }
    auVar56._8_8_ = ppppppuVar24;
    auVar56._0_8_ = lVar20;
    auVar53._8_8_ = lVar20;
    auVar53._0_8_ = ppppppuVar24;
    auVar6._8_8_ = lVar20;
    auVar6._0_8_ = ppppppuVar24;
    auVar5._8_8_ = lVar20;
    auVar5._0_8_ = ppppppuVar24;
    uVar22 = func_0x00f78b24();
    auVar58 = func_0x00f78ac0(uVar22,0);
    apcStack_140[1] = (code *)&Atlas_Stats_StatsManager__GetStat;
    lVar20 = *(long *)(auVar58._0_8_ + 0x20);
    auVar58._8_4_ = auVar58._8_4_;
    auVar58._0_8_ = lVar20;
    apcStack_140[0] = (code *)appppppuStack_110;
    if (lVar20 == 0) {
      auVar58 = func_0x00f78af4();
      puVar14 = (undefined1 *)(apuStack_160 + 2);
      apuStack_150[1] = &Atlas_Stats_StatsManager__GetTransactionStat;
      lVar20 = *(long *)(auVar58._0_8_ + 0x18);
      auVar58._8_4_ = auVar58._8_4_;
      auVar58._0_8_ = lVar20;
      if (lVar20 == 0) {
        apuStack_150[0] = (undefined *)(apuStack_160 + 4);
        auVar58 = func_0x00f78af4();
        ppuVar48 = apuStack_160;
        apuStack_160[1] = (uint *)&Atlas_Stats_StatsManager__GetCommittedStat;
        lVar20 = *(long *)(auVar58._0_8_ + 0x10);
        auVar58._8_4_ = auVar58._8_4_;
        auVar58._0_8_ = lVar20;
        if (lVar20 == 0) {
          puVar50 = &Atlas_Stats_StatsManager__GetGlobalStat;
          apuStack_160[0] = (uint *)(apuStack_160 + 2);
          auVar55 = func_0x00f78af4();
          ppuVar12 = apuStack_160;
          do {
            lVar20 = auVar55._0_8_;
            *(undefined1 *******)((long)ppuVar12 + -0x30) = ppppppuVar46;
            *(undefined1 *******)((long)ppuVar12 + -0x28) = ppppppuVar44;
            *(undefined1 (*) [16])((long)ppuVar12 + -0x20) = auVar56;
            *(uint ***)((long)ppuVar12 + -0x10) = ppuVar48;
            *(undefined **)((long)ppuVar12 + -8) = puVar50;
            uVar22 = auVar56._8_8_;
            if (*(long *)(lVar20 + 0x10) != 0) {
              ppppppuVar44 = (undefined1 ******)Atlas_Stats_StatsData__GetStat();
              uVar22 = auVar55._8_8_;
              if (*(long *)(lVar20 + 0x18) != 0) {
                iVar16 = Atlas_Stats_StatsData__GetStat(*(long *)(lVar20 + 0x18),auVar55._8_8_);
                return (undefined1 ****)(ulong)(uint)(iVar16 + (int)ppppppuVar44);
              }
            }
            auVar7._8_8_ = uVar22;
            auVar7._0_8_ = lVar20;
            auVar53 = func_0x00f78af4();
            lVar38 = auVar53._8_8_;
            *(undefined8 *)((long)ppuVar12 + -0x70) = unaff_x24;
            *(undefined4 **)((long)ppuVar12 + -0x68) = unaff_x23;
            *(undefined1 *******)((long)ppuVar12 + -0x60) = ppppppuVar46;
            *(undefined1 *******)((long)ppuVar12 + -0x58) = ppppppuVar44;
            *(long *)((long)ppuVar12 + -0x50) = lVar20;
            *(undefined8 *)((long)ppuVar12 + -0x48) = uVar22;
            *(undefined1 **)((long)ppuVar12 + -0x40) = (undefined1 *)((long)ppuVar12 + -0x10);
            *(undefined **)((long)ppuVar12 + -0x38) =
                 &Atlas_Stats_StatsManager__GetSummedCommittedStats;
            if (lVar38 == 0) {
code_r0x01505370:
              func_0x00f78af4();
            }
            else {
              if ((int)*(ulong *)(lVar38 + 0x18) < 1) {
                return (undefined1 ****)0x0;
              }
              ppppppuVar44 = (undefined1 ******)0x0;
              ppppppuVar46 = (undefined1 ******)0x0;
              ppppppuVar24 = (undefined1 ******)(*(ulong *)(lVar38 + 0x18) & 0xffffffff);
              unaff_x23 = (undefined4 *)(lVar38 + 0x20);
              while (auVar7 = auVar53, ppppppuVar46 < ppppppuVar24) {
                lVar20 = *(long *)(auVar53._0_8_ + 0x10);
                if (lVar20 == 0) goto code_r0x01505370;
                iVar16 = Atlas_Stats_StatsData__GetStat(lVar20,unaff_x23[(long)ppppppuVar46]);
                ppppppuVar44 = (undefined1 ******)(ulong)(uint)(iVar16 + (int)ppppppuVar44);
                ppppppuVar46 = (undefined1 ******)((long)ppppppuVar46 + 1);
                ppppppuVar24 = (undefined1 ******)(ulong)*(uint *)(lVar38 + 0x18);
                if ((long)(int)*(uint *)(lVar38 + 0x18) <= (long)ppppppuVar46) {
                  return (undefined1 ****)ppppppuVar44;
                }
              }
            }
            uVar22 = func_0x00f78b24();
            auVar53 = func_0x00f78ac0(uVar22,0);
            lVar20 = auVar53._8_8_;
            *(undefined8 *)((long)ppuVar12 + -0xb0) = unaff_x24;
            *(undefined4 **)((long)ppuVar12 + -0xa8) = unaff_x23;
            *(undefined1 *******)((long)ppuVar12 + -0xa0) = ppppppuVar46;
            *(undefined1 *******)((long)ppuVar12 + -0x98) = ppppppuVar44;
            *(undefined1 (*) [16])((long)ppuVar12 + -0x90) = auVar7;
            *(undefined1 **)((long)ppuVar12 + -0x80) = (undefined1 *)((long)ppuVar12 + -0x40);
            *(undefined **)((long)ppuVar12 + -0x78) =
                 &Atlas_Stats_StatsManager__GetSummedTransactionStats;
            if (lVar20 == 0) {
code_r0x01505408:
              func_0x00f78af4();
            }
            else {
              if ((int)*(ulong *)(lVar20 + 0x18) < 1) {
                return (undefined1 ****)0x0;
              }
              ppppppuVar44 = (undefined1 ******)0x0;
              ppppppuVar46 = (undefined1 ******)0x0;
              ppppppuVar24 = (undefined1 ******)(*(ulong *)(lVar20 + 0x18) & 0xffffffff);
              unaff_x23 = (undefined4 *)(lVar20 + 0x20);
              while (auVar7 = auVar53, ppppppuVar46 < ppppppuVar24) {
                lVar38 = *(long *)(auVar53._0_8_ + 0x18);
                if (lVar38 == 0) goto code_r0x01505408;
                iVar16 = Atlas_Stats_StatsData__GetStat(lVar38,unaff_x23[(long)ppppppuVar46]);
                ppppppuVar44 = (undefined1 ******)(ulong)(uint)(iVar16 + (int)ppppppuVar44);
                ppppppuVar46 = (undefined1 ******)((long)ppppppuVar46 + 1);
                ppppppuVar24 = (undefined1 ******)(ulong)*(uint *)(lVar20 + 0x18);
                if ((long)(int)*(uint *)(lVar20 + 0x18) <= (long)ppppppuVar46) {
                  return (undefined1 ****)ppppppuVar44;
                }
              }
            }
            uVar22 = func_0x00f78b24();
            auVar56 = func_0x00f78ac0(uVar22,0);
            lVar20 = auVar56._8_8_;
            *(undefined8 *)((long)ppuVar12 + -0xf0) = unaff_x24;
            *(undefined4 **)((long)ppuVar12 + -0xe8) = unaff_x23;
            *(undefined1 *******)((long)ppuVar12 + -0xe0) = ppppppuVar46;
            *(undefined1 *******)((long)ppuVar12 + -0xd8) = ppppppuVar44;
            *(undefined1 (*) [16])((long)ppuVar12 + -0xd0) = auVar7;
            *(undefined1 **)((long)ppuVar12 + -0xc0) = (undefined1 *)((long)ppuVar12 + -0x80);
            *(undefined **)((long)ppuVar12 + -0xb8) =
                 &Atlas_Stats_StatsManager__GetSummedGlobalStats;
            ppuVar48 = (uint **)((long)ppuVar12 + -0xc0);
            if (lVar20 == 0) goto code_r0x015054a8;
            if ((int)*(ulong *)(lVar20 + 0x18) < 1) {
              return (undefined1 ****)0x0;
            }
            ppppppuVar44 = (undefined1 ******)0x0;
            ppppppuVar46 = (undefined1 ******)0x0;
            unaff_x23 = (undefined4 *)(lVar20 + 0x20);
            if ((*(ulong *)(lVar20 + 0x18) & 0xffffffff) == 0) {
              uVar22 = func_0x00f78b24();
              func_0x00f78ac0(uVar22,0);
              auVar7 = auVar56;
code_r0x015054a8:
              uVar22 = func_0x00f78af4();
              *(undefined1 *******)((long)ppuVar12 + -0x120) = ppppppuVar46;
              *(undefined1 *******)((long)ppuVar12 + -0x118) = ppppppuVar44;
              *(undefined1 (*) [16])((long)ppuVar12 + -0x110) = auVar7;
              *(uint ***)((long)ppuVar12 + -0x100) = ppuVar48;
              *(undefined **)((long)ppuVar12 + -0xf8) = &Atlas_Stats_StatsManager__GetStatFromString
              ;
              if ((bRam0000000003eb4d0b & 1) == 0) {
                func_0x00f78a20(0x3d24d58);
                bRam0000000003eb4d0b = 1;
              }
              *(undefined4 *)((long)ppuVar12 + -0x124) = 0;
              if (((*(ushort *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              /*Atlas.Stats.StatsManager$$TryGetStatFromString*/ func_0x0150552c(uVar22,(undefined1 *)((long)ppuVar12 + -0x124));
              return (undefined1 ****)(ulong)*(uint *)((long)ppuVar12 + -0x124);
            }
            auVar55._8_4_ = *unaff_x23;
            auVar55._0_8_ = auVar56._0_8_;
            auVar55._12_4_ = 0;
            puVar50 = &UNK_01505468;
            ppuVar12 = (uint **)((long)ppuVar12 + -0xf0);
          } while( true );
        }
        puVar11 = (undefined1 *)(apuStack_160 + 2);
        pcVar10 = (code *)&Atlas_Stats_StatsManager__GetCommittedStat;
        apuStack_160[0] = (uint *)(apuStack_160 + 2);
      }
      else {
        puVar11 = (undefined1 *)(apuStack_160 + 4);
        pcVar10 = (code *)&Atlas_Stats_StatsManager__GetTransactionStat;
        puVar14 = (undefined1 *)(apuStack_160 + 4);
        apuStack_150[0] = (undefined *)(apuStack_160 + 4);
        auVar53 = auVar6;
      }
    }
    else {
      puVar11 = (undefined1 *)appppppuStack_130;
      puVar14 = (undefined1 *)appppppuStack_110;
      pcVar10 = apcStack_140[1];
      auVar53 = auVar5;
    }
code_r0x01504b20:
    *(undefined1 **)(puVar11 + -0x10) = puVar14;
    *(code **)(puVar11 + -8) = pcVar10;
    lVar20 = *(long *)(auVar58._0_8_ + 0x10);
    if (lVar20 == 0) {
      func_0x00f78af4();
    }
    else if (auVar58._8_4_ < *(uint *)(lVar20 + 0x18)) {
      return (undefined1 ****)(ulong)*(uint *)(lVar20 + (long)(int)auVar58._8_4_ * 4 + 0x20);
    }
    uVar22 = func_0x00f78b24();
    auVar52 = func_0x00f78ac0(uVar22,0);
    lVar20 = auVar52._8_8_;
    ppppuVar21 = auVar52._0_8_;
    ppppppuVar13 = (undefined1 ******)(puVar11 + -0x50);
    *(undefined8 *)(puVar11 + -0x50) = unaff_x24;
    *(undefined4 **)(puVar11 + -0x48) = unaff_x23;
    *(undefined1 *******)(puVar11 + -0x40) = ppppppuVar46;
    *(undefined1 *******)(puVar11 + -0x38) = ppppppuVar44;
    *(long *)(puVar11 + -0x30) = auVar53._8_8_;
    *(long *)(puVar11 + -0x28) = auVar53._0_8_;
    *(undefined1 **)(puVar11 + -0x20) = puVar11 + -0x10;
    *(code **)(puVar11 + -0x18) = Atlas_Stats_StatsData__UpdateToLargestValues;
    ppppuVar19 = ppppuVar21;
    if ((bRam0000000003eb4d06 & 1) == 0) {
      ppppuVar19 = (undefined1 ****)func_0x00f78a20(0x3d1f100);
      bRam0000000003eb4d06 = 1;
    }
    pppuVar32 = ppppuVar21[2];
    if (((pppuVar32 == (undefined1 ***)0x0) || (lVar20 == 0)) || (*(long *)(lVar20 + 0x10) == 0)) {
LAB_01504c70:
      func_0x00f78af4();
      *(undefined1 *******)(puVar11 + -0x80) = ppppppuVar46;
      *(undefined1 ****)(puVar11 + -0x78) = pppuVar32;
      *(undefined1 (*) [16])(puVar11 + -0x70) = auVar52;
      *(undefined1 **)(puVar11 + -0x60) = puVar11 + -0x20;
      *(code **)(puVar11 + -0x58) = Atlas_Stats_StatsData__Clone;
      if ((bRam0000000003eb4d07 & 1) == 0) {
        func_0x00f78a20(0x3d24d50);
        bRam0000000003eb4d07 = 1;
      }
      ppppuVar19 = (undefined1 ****)func_0x00f78aec(/*Atlas.Stats.StatsData_TypeInfo*/ uRam0000000003d24d50);
      return ppppuVar19;
    }
    puVar29 = (undefined4 *)(ulong)*(uint *)(pppuVar32 + 3);
    ppppppuVar46 = *(undefined1 *******)(*(long *)(lVar20 + 0x10) + 0x18);
    if ((int)ppppppuVar46 <= (int)*(uint *)(pppuVar32 + 3)) {
      if (0 < (int)ppppppuVar46) {
        if (pppuVar32 == (undefined1 ***)0x0) goto LAB_01504c70;
        uVar39 = 0;
        uVar1 = *(uint *)(pppuVar32 + 3);
        do {
          if (uVar1 == uVar39) {
LAB_01504c64:
            uVar22 = func_0x00f78b24();
            func_0x00f78ac0(uVar22,0);
            goto LAB_01504c70;
          }
          lVar38 = *(long *)(lVar20 + 0x10);
          if (lVar38 == 0) goto LAB_01504c70;
          if ((*(uint *)(lVar38 + 0x18) <= uVar39) || (uVar1 <= uVar39)) goto LAB_01504c64;
          iVar16 = *(int *)((long)pppuVar32 + uVar39 * 4 + 0x20);
          iVar15 = *(int *)(lVar38 + uVar39 * 4 + 0x20);
          if (iVar16 <= iVar15) {
            iVar16 = iVar15;
          }
          *(int *)((long)pppuVar32 + uVar39 * 4 + 0x20) = iVar16;
          uVar39 = uVar39 + 1;
        } while (((ulong)ppppppuVar46 & 0xffffffff) != uVar39);
      }
      return ppppuVar19;
    }
    puVar27 = (undefined4 *)func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,ppppppuVar46);
    pppuVar32 = ppppuVar21[2];
    auVar40 = (undefined1  [8])puVar27;
    unaff_x23 = puVar29;
    pppppuVar33 = (undefined1 *****)(puVar11 + -0x20);
    ppppppuVar24 = (undefined1 ******)0x1504be8;
  }
  else {
    puVar18 = *(undefined8 **)(*(long *)(lVar20 + 0x20) + 0x10);
    if (puVar18 != (undefined8 *)0x0) {
      iVar16 = *(int *)(puVar18 + 3);
      pppppuStack_d0 = (undefined1 *****)0x3eb4000;
      ppppppuStack_b8 = ppppppuVar24;
      _auStack_c8 = auVar54;
      if (puVar18 == (undefined8 *)0x0) {
        func_0x00f78a24(0x3d1fcf0,0,iVar16,0);
        ppppppuVar24 = (undefined1 ******)func_0x00f78aec();
        uVar22 = func_0x00f78a24(0x3d77d18);
        /*System.ArgumentNullException$$.ctor*/ func_0x02920400(ppppppuVar24,uVar22);
      }
      else {
        if (iVar16 < 0) {
          func_0x00f78a24(0x3d22738,0,iVar16,0);
          ppppppuVar24 = (undefined1 ******)func_0x00f78aec();
          uVar22 = 0x3d7a288;
        }
        else {
          auVar9._8_8_ = 0;
          auVar9._0_8_ = puVar18;
          iVar15 = func_0x00f807d0(puVar18,0);
          if (iVar15 < 1) {
            uVar1 = -iVar15;
            auVar54._4_4_ = 0;
            auVar54._0_4_ = uVar1;
            auVar54._8_8_ = puVar18;
            iVar15 = /*System.Array$$get_Length*/ func_0x0292ae44(puVar18);
            if ((int)uVar1 <= iVar15 - iVar16) {
              uVar22 = func_0x00f76cf0(*puVar18);
              uVar17 = func_0x00faf4d8(puVar18,uVar22,(long)(int)uVar1);
              ppppuVar19 = (undefined1 ****)_bzero(uVar17,(long)((int)uVar22 * iVar16));
              return ppppuVar19;
            }
            func_0x00f78a24(0x3d22738);
            ppppppuVar24 = (undefined1 ******)func_0x00f78aec();
            uVar22 = 0x3d79a88;
          }
          else {
            func_0x00f78a24(0x3d22738);
            ppppppuVar24 = (undefined1 ******)func_0x00f78aec();
            uVar22 = 0x3d79a90;
            auVar54 = auVar9 << 0x40;
          }
        }
        uVar22 = func_0x00f78a24(uVar22);
        /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(ppppppuVar24,uVar22,0);
      }
      ppppppuVar44 = auVar54._0_8_;
      uVar22 = func_0x00f78a24(0x3d514d8);
      plVar42 = (long *)func_0x00f78ac0(ppppppuVar24,uVar22);
      puVar14 = (undefined1 *)&ppppppuStack_f0;
      ppppppuStack_f0 = auVar54._8_8_;
      ppppppuStack_e8 = ppppppuVar24;
      ppppppuStack_e0 = &pppppuStack_b0;
      auStack_d8 = (undefined1  [8])&Mono_Security_Cryptography_ARC4Managed__get_Key;
      ppppppuVar30 = (undefined1 ******)&ppppppuStack_e0;
      auVar53._8_8_ = 0x3eb8000;
      auVar53._0_8_ = plVar42;
      auVar8._8_8_ = 0x3eb8000;
      auVar8._0_8_ = plVar42;
      if ((bRam0000000003eb8e74 & 1) == 0) {
        func_0x00f78a20(0x3d1eda0);
        bRam0000000003eb8e74 = 1;
      }
      pppuVar32 = (undefined1 ***)plVar42[4];
      if (pppuVar32 == (undefined1 ***)0x0) {
        (**(code **)(*plVar42 + 0x2b8))(plVar42,*(undefined8 *)(*plVar42 + 0x2c0));
        pppuVar32 = (undefined1 ***)plVar42[4];
        if (pppuVar32 == (undefined1 ***)0x0) {
          puVar50 = &System_Array__Clone;
          pppuVar32 = (undefined1 ***)func_0x00f78af4();
          goto DAT_00f7ffc4;
        }
      }
      puVar50 = &UNK_029202e0;
      puVar14 = (undefined1 *)&ppppppuStack_f0;
      auVar53 = auVar8;
      goto DAT_00f7ffc4;
    }
    auVar53 = func_0x00f78af4();
    ppppppuStack_b8 = (undefined1 ******)Atlas_Stats_StatsData__ResetAndSet;
code_r0x015048e0:
    lVar20 = auVar53._8_8_;
    iVar16 = (int)ppppppuVar30;
    ppppppuVar13 = &pppppuStack_b0;
    pppppuStack_c0 = (undefined1 *****)&pppppuStack_b0;
    puVar14 = (undefined1 *)&ppppppuStack_e0;
    ppppppuStack_e0 = (undefined1 ******)0x3eb4000;
    ppppppuVar30 = &pppppuStack_c0;
    ppppppuVar44 = (undefined1 ******)0x3eb4000;
    auStack_c8 = (undefined1  [8])ppppppuVar24;
    ppppppuVar24 = &pppppuStack_b0;
    _auStack_d8 = auVar54;
    if ((bRam0000000003eb4d05 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb4d05 = 1;
      ppppppuVar24 = (undefined1 ******)pppppuStack_c0;
    }
    pppppuStack_c0 = (undefined1 *****)ppppppuVar24;
    ppppuVar19 = (undefined1 ****)Atlas_Stats_StatsData__Reset(auVar53._0_8_);
    auVar52._8_8_ = auStack_c8;
    auVar52._0_8_ = pppppuStack_d0;
    if (lVar20 == 0) {
      return ppppuVar19;
    }
    pppuVar32 = *(undefined1 ****)(lVar20 + 0x10);
    if ((pppuVar32 == (undefined1 ***)0x0) ||
       (puVar27 = *(undefined4 **)(auVar53._0_8_ + 0x10), puVar27 == (undefined4 *)0x0)) {
      func_0x00f78af4();
      auVar54 = func_0x00f78e5c(lVar20,0x3eb4000);
      ppppppuStack_e8 = (undefined1 ******)Atlas_Stats_StatsData__Add;
      ppppppuStack_f0 = ppppppuVar30;
      if ((auVar54._8_8_ != 0) &&
         ((lVar20 = *(long *)(auVar54._8_8_ + 0x10), lVar20 != 0 &&
          (pppuVar32 = auVar54._0_8_[2], pppuVar32 != (undefined1 ***)0x0)))) {
        uVar1 = *(uint *)(lVar20 + 0x18);
        uVar39 = (ulong)uVar1;
        uVar36 = (uint)pppuVar32[3];
        if ((int)uVar36 <= (int)uVar1) {
          uVar1 = uVar36;
        }
        uVar35 = (ulong)uVar1;
        if (0 < (int)uVar1) {
          uVar37 = (ulong)pppuVar32[3] & 0xffffffff;
          pppuVar32 = pppuVar32 + 4;
          piVar31 = (int *)(lVar20 + 0x20);
          do {
            if ((uVar37 == 0) || (uVar39 == 0)) {
              uVar22 = func_0x00f78b24();
              func_0x00f78ac0(uVar22,0);
              goto LAB_01504a20;
            }
            *(int *)pppuVar32 = *piVar31 + *(int *)pppuVar32;
            uVar39 = uVar39 - 1;
            uVar37 = uVar37 - 1;
            uVar35 = uVar35 - 1;
            pppuVar32 = (undefined1 ***)((long)pppuVar32 + 4);
            piVar31 = piVar31 + 1;
          } while (uVar35 != 0);
        }
        return auVar54._0_8_;
      }
LAB_01504a20:
      auVar58 = func_0x00f78af4();
      ppppppuStack_f8 = (undefined1 ******)Atlas_Stats_StatsData__IncrementStat;
      pppuVar32 = auVar58._0_8_[2];
      if (pppuVar32 == (undefined1 ***)0x0) {
        ppppppuStack_100 = (undefined1 ******)&ppppppuStack_f0;
        func_0x00f78af4();
      }
      else {
        ppppppuStack_100 = (undefined1 ******)&ppppppuStack_f0;
        if (auVar58._8_4_ < *(uint *)(pppuVar32 + 3)) {
          piVar31 = (int *)((long)pppuVar32 + (long)(int)auVar58._8_4_ * 4 + 0x20);
          iVar16 = *piVar31;
          if (iVar16 < 0x3ffffffe) {
            *piVar31 = iVar16 + 1;
          }
          return auVar58._0_8_;
        }
      }
      uVar22 = func_0x00f78b24();
      auVar58 = func_0x00f78ac0(uVar22,0);
      appppppuStack_110[1] = (undefined1 ******)Atlas_Stats_StatsData__DecrementStat;
      pppuVar32 = auVar58._0_8_[2];
      if (pppuVar32 == (undefined1 ***)0x0) {
        appppppuStack_110[0] = (undefined1 ******)&ppppppuStack_100;
        func_0x00f78af4();
      }
      else {
        appppppuStack_110[0] = (undefined1 ******)&ppppppuStack_100;
        if (auVar58._8_4_ < *(uint *)(pppuVar32 + 3)) {
          piVar31 = (int *)((long)pppuVar32 + (long)(int)auVar58._8_4_ * 4 + 0x20);
          iVar16 = *piVar31;
          if (-0x3fffffff < iVar16) {
            *piVar31 = iVar16 + -1;
          }
          return auVar58._0_8_;
        }
      }
      uVar22 = func_0x00f78b24();
      auVar58 = func_0x00f78ac0(uVar22,0);
      puVar11 = (undefined1 *)(appppppuStack_130 + 2);
      appppppuStack_120[1] = (undefined1 ******)Atlas_Stats_StatsData__SetStat;
      pppuVar32 = auVar58._0_8_[2];
      if (pppuVar32 == (undefined1 ***)0x0) {
        appppppuStack_120[0] = (undefined1 ******)appppppuStack_110;
        func_0x00f78af4();
      }
      else {
        appppppuStack_120[0] = (undefined1 ******)appppppuStack_110;
        if (auVar58._8_4_ < *(uint *)(pppuVar32 + 3)) {
          if (iVar16 < -0x3ffffffe) {
            iVar16 = -0x3fffffff;
          }
          if (0x3ffffffd < iVar16) {
            iVar16 = 0x3ffffffe;
          }
          *(int *)((long)pppuVar32 + (long)(int)auVar58._8_4_ * 4 + 0x20) = iVar16;
          return auVar58._0_8_;
        }
      }
      uVar22 = func_0x00f78b24();
      auVar58 = func_0x00f78ac0(uVar22,0);
      puVar14 = (undefined1 *)(appppppuStack_130 + 2);
      pcVar10 = Atlas_Stats_StatsData__GetStat;
      goto code_r0x01504b20;
    }
    puVar29 = (undefined4 *)(ulong)*(uint *)(pppuVar32 + 3);
    auVar40 = auStack_d8;
    ppppppuVar46 = ppppppuStack_e0;
    pppppuVar33 = pppppuStack_c0;
    ppppppuVar24 = ppppppuStack_b8;
    if ((int)puVar27[6] < (int)*(uint *)(pppuVar32 + 3)) {
      puVar50 = (undefined *)0x150494c;
DAT_00f7ffc4:
      *(undefined8 *)(puVar14 + 0xffffffffffffffd0) = 0x3eb4000;
      *(undefined1 *******)(puVar14 + 0xffffffffffffffd8) = ppppppuVar44;
      *(long *)(puVar14 + 0xffffffffffffffe0) = auVar53._8_8_;
      *(long *)(puVar14 + 0xffffffffffffffe8) = auVar53._0_8_;
      *(undefined1 *******)(puVar14 + 0xfffffffffffffff0) = ppppppuVar30;
      *(undefined **)(puVar14 + 0xfffffffffffffff8) = puVar50;
      pppuVar45 = (undefined1 ***)*pppuVar32;
      if (*(char *)((long)pppuVar45 + 0x12e) != '\0') {
        *(undefined8 *)(puVar14 + 0xffffffffffffffd0) =
             *(undefined8 *)(puVar14 + 0xffffffffffffffd0);
        *(undefined8 *)(puVar14 + 0xffffffffffffffd8) =
             *(undefined8 *)(puVar14 + 0xffffffffffffffd8);
        *(undefined8 *)(puVar14 + 0xffffffffffffffe0) =
             *(undefined8 *)(puVar14 + 0xffffffffffffffe0);
        *(undefined8 *)(puVar14 + 0xffffffffffffffe8) =
             *(undefined8 *)(puVar14 + 0xffffffffffffffe8);
        *(undefined8 *)(puVar14 + 0xfffffffffffffff0) =
             *(undefined8 *)(puVar14 + 0xfffffffffffffff0);
        *(undefined8 *)(puVar14 + 0xfffffffffffffff8) =
             *(undefined8 *)(puVar14 + 0xfffffffffffffff8);
        ppuVar43 = *pppuVar32;
        uVar39 = (ulong)*(uint *)(ppuVar43 + 0x20);
        if (pppuVar32[2] == (undefined1 **)0x0) {
          uVar1 = *(uint *)(pppuVar32 + 3);
          *(ulong *)(puVar14 + 0xffffffffffffffb8) = (ulong)uVar1;
          ppppuVar19 = (undefined1 ****)func_0x00faf0d0(ppuVar43,puVar14 + 0xffffffffffffffb8,0);
          _memcpy(ppppuVar19 + 4,pppuVar32 + 4,uVar1 * uVar39);
        }
        else {
          func_0x00901764(puVar14 + 0xffffffffffffffb8,*(undefined1 *)((long)ppuVar43 + 0x12e));
          func_0x00901764(puVar14 + 0xffffffffffffffa0,*(undefined1 *)((long)ppuVar43 + 0x12e));
          if (*(char *)((long)ppuVar43 + 0x12e) != '\0') {
            lVar20 = 0;
            uVar35 = 0;
            do {
              *(undefined8 *)(*(long *)(puVar14 + 0xffffffffffffffb8) + uVar35 * 8) =
                   *(undefined8 *)((long)pppuVar32[2] + lVar20);
              uVar39 = *(long *)((long)pppuVar32[2] + lVar20) * uVar39;
              *(long *)(*(long *)(puVar14 + 0xffffffffffffffa0) + uVar35 * 8) =
                   (long)(int)((long *)((long)pppuVar32[2] + lVar20))[1];
              uVar35 = uVar35 + 1;
              lVar20 = lVar20 + 0x10;
            } while (uVar35 < *(byte *)((long)ppuVar43 + 0x12e));
          }
          ppppuVar19 = (undefined1 ****)
                       func_0x00faf0d0(ppuVar43,*(undefined8 *)(puVar14 + 0xffffffffffffffb8),
                                       *(undefined8 *)(puVar14 + 0xffffffffffffffa0));
          _memcpy(ppppuVar19 + 4,pppuVar32 + 4,uVar39);
          if (*(long *)(puVar14 + 0xffffffffffffffa0) != 0) {
            *(long *)(puVar14 + 0xffffffffffffffa8) = *(long *)(puVar14 + 0xffffffffffffffa0);
            func_0x00523aec();
          }
          if (*(long *)(puVar14 + 0xffffffffffffffb8) != 0) {
            *(long *)(puVar14 + 0xffffffffffffffc0) = *(long *)(puVar14 + 0xffffffffffffffb8);
            func_0x00523aec();
          }
        }
        return ppppuVar19;
      }
      iVar16 = *(int *)(pppuVar45 + 0x1f);
      ppppuVar19 = (undefined1 ****)func_0x00f6e3b8((long)iVar16,0);
      *ppppuVar19 = pppuVar45;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(0x3ff71e8,0x10);
        if (bVar4) {
          cVar3 = ExclusiveMonitorsStatus();
          lRam0000000003ff71e8 = lRam0000000003ff71e8 + 1;
        }
      } while (cVar3 != '\0');
      _memcpy(ppppuVar19 + 2,pppuVar32 + 2,(long)iVar16 + -0x10);
      if ((*(byte *)((long)*pppuVar32 + 0x133) >> 1 & 1) != 0) {
        func_0x00f7a274(ppppuVar19);
      }
      if (cRam0000000003ff7438 < '\0') {
        func_0x00fc51b8(ppppuVar19,*pppuVar32);
      }
      return ppppuVar19;
    }
  }
  uVar22 = auVar52._0_8_;
  lVar20 = 0;
  *(undefined1 *******)((long)ppppppuVar13 + -0x30) = ppppppuVar46;
  *(undefined1 (*) [8])((long)ppppppuVar13 + -0x28) = auVar40;
  *(undefined1 (*) [16])((long)ppppppuVar13 + -0x20) = auVar52;
  *(undefined1 ******)((long)ppppppuVar13 + -0x10) = pppppuVar33;
  *(undefined1 *******)((long)ppppppuVar13 + -8) = ppppppuVar24;
  if (pppuVar32 == (undefined1 ***)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar25 = func_0x00f78aec();
    uVar17 = 0x3d7b900;
    puVar27 = puVar29;
    puVar29 = param_5;
code_r0x0292c538:
    uVar17 = func_0x00f78a24(uVar17);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar25,uVar17);
    uVar17 = func_0x00f78a24(0x3d514e0);
    auVar57 = func_0x00f78ac0(uVar25,uVar17);
    *(undefined8 *)((long)ppppppuVar13 + -0x50) = uVar22;
    *(undefined8 *)((long)ppppppuVar13 + -0x48) = uVar25;
    *(undefined1 **)((long)ppppppuVar13 + -0x40) = (undefined1 *)((long)ppppppuVar13 + -0x10);
    *(undefined **)((long)ppppppuVar13 + -0x38) = &System_Array__Copy;
    if (auVar57._8_8_ == (long)auVar57._8_4_) {
      if (lVar20 == (int)lVar20) {
        if (puVar29 == (undefined4 *)(long)(int)puVar29) {
          uVar22 = *(undefined8 *)((long)ppppppuVar13 + -0x40);
          uVar25 = *(undefined8 *)((long)ppppppuVar13 + -0x38);
          puVar14 = (undefined1 *)((long)ppppppuVar13 + -0x30);
          uVar17 = *(undefined8 *)((long)ppppppuVar13 + -0x50);
          uVar41 = *(undefined8 *)((long)ppppppuVar13 + -0x48);
          goto System_Array__Copy;
        }
        func_0x00f78a24(0x3d1fcf8);
        uVar17 = func_0x00f78aec();
        uVar22 = 0x3d7a280;
      }
      else {
        func_0x00f78a24(0x3d1fcf8);
        uVar17 = func_0x00f78aec();
        uVar22 = 0x3d78af0;
      }
    }
    else {
      func_0x00f78a24(0x3d1fcf8);
      uVar17 = func_0x00f78aec();
      uVar22 = 0x3d7b910;
    }
    uVar22 = func_0x00f78a24(uVar22);
    lVar20 = func_0x00f78a24(0x3d69268);
    /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar17,uVar22);
    uVar25 = func_0x00f78a24(0x3d514f8);
    auVar53 = func_0x00f78ac0(uVar17,uVar25);
    plVar42 = auVar53._8_8_;
    uVar25 = auVar53._0_8_;
    if (lVar20 != (int)lVar20) {
      *(undefined8 *)((long)ppppppuVar13 + -0x70) = uVar22;
      *(undefined8 *)((long)ppppppuVar13 + -0x68) = uVar17;
      *(undefined1 **)((long)ppppppuVar13 + -0x60) = (undefined1 *)((long)ppppppuVar13 + -0x40);
      *(undefined **)((long)ppppppuVar13 + -0x58) = &System_Array__CopyTo;
      func_0x00f78a24(0x3d1fcf8);
      uVar22 = func_0x00f78aec();
      uVar17 = func_0x00f78a24(0x3d79a60);
      uVar25 = func_0x00f78a24(0x3d69268);
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar22,uVar17,uVar25);
      uVar25 = func_0x00f78a24(0x3d51508);
      plVar42 = (long *)func_0x00f78ac0(uVar22,uVar25);
      *(undefined1 *******)((long)ppppppuVar13 + -0xa0) = ppppppuVar46;
      *(undefined1 (*) [8])((long)ppppppuVar13 + -0x98) = auVar40;
      *(undefined8 *)((long)ppppppuVar13 + -0x90) = uVar17;
      *(undefined8 *)((long)ppppppuVar13 + -0x88) = uVar22;
      *(undefined1 **)((long)ppppppuVar13 + -0x80) = (undefined1 *)((long)ppppppuVar13 + -0x60);
      *(undefined **)((long)ppppppuVar13 + -0x78) = &System_Array__get_LongLength;
      func_0x00f8078c(plVar42,0);
      goto code_r0x00f80814;
    }
    *(undefined1 *******)((long)ppppppuVar13 + -0x80) = ppppppuVar46;
    *(undefined1 (*) [8])((long)ppppppuVar13 + -0x78) = auVar40;
    *(undefined8 *)((long)ppppppuVar13 + -0x70) = uVar22;
    *(undefined8 *)((long)ppppppuVar13 + -0x68) = uVar17;
    *(undefined1 **)((long)ppppppuVar13 + -0x60) = (undefined1 *)((long)ppppppuVar13 + -0x40);
    *(undefined **)((long)ppppppuVar13 + -0x58) = &System_Array__CopyTo;
    if (plVar42 != (long *)0x0) goto code_r0x00f80814;
    uVar22 = func_0x00f807d0(uVar25,0);
    auVar57._8_8_ = uVar22;
    auVar57._0_8_ = uVar25;
    puVar29 = (undefined4 *)/*System.Array$$get_Length*/ func_0x0292ae44(uVar25);
    uVar22 = *(undefined8 *)((long)ppppppuVar13 + -0x60);
    uVar25 = *(undefined8 *)((long)ppppppuVar13 + -0x58);
    uVar17 = *(undefined8 *)((long)ppppppuVar13 + -0x70);
    uVar41 = *(undefined8 *)((long)ppppppuVar13 + -0x68);
    puVar14 = (undefined1 *)((long)ppppppuVar13 + -0x50);
    ppppppuVar46 = *(undefined1 *******)((long)ppppppuVar13 + -0x80);
    auVar40 = *(undefined1 (*) [8])((long)ppppppuVar13 + -0x78);
    puVar27 = (undefined4 *)0x0;
  }
  else {
    if (puVar27 == (undefined4 *)0x0) {
      func_0x00f78a24(0x3d1fcf0);
      uVar25 = func_0x00f78aec();
      uVar17 = 0x3d78ae8;
      uVar22 = 0;
      puVar27 = puVar29;
      puVar29 = param_5;
      goto code_r0x0292c538;
    }
    uVar22 = func_0x00f807d0(pppuVar32,0);
    auVar57._8_8_ = uVar22;
    auVar57._0_8_ = pppuVar32;
    func_0x00f807d0(puVar27,0);
    uVar22 = *(undefined8 *)((long)ppppppuVar13 + -0x10);
    uVar25 = *(undefined8 *)((long)ppppppuVar13 + -8);
    uVar17 = *(undefined8 *)((long)ppppppuVar13 + -0x20);
    uVar41 = *(undefined8 *)((long)ppppppuVar13 + -0x18);
    ppppppuVar46 = *(undefined1 *******)((long)ppppppuVar13 + -0x30);
    auVar40 = *(undefined1 (*) [8])((long)ppppppuVar13 + -0x28);
    puVar14 = (undefined1 *)ppppppuVar13;
  }
System_Array__Copy:
  uVar28 = auVar57._8_8_;
  plVar42 = auVar57._0_8_;
  *(undefined8 *)(puVar14 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar14 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar14 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar14 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar14 + -0x40) = unaff_x24;
  *(undefined4 **)(puVar14 + -0x38) = unaff_x23;
  *(undefined1 *******)(puVar14 + -0x30) = ppppppuVar46;
  *(undefined1 (*) [8])(puVar14 + -0x28) = auVar40;
  *(undefined8 *)(puVar14 + -0x20) = uVar17;
  *(undefined8 *)(puVar14 + -0x18) = uVar41;
  *(undefined8 *)(puVar14 + -0x10) = uVar22;
  *(undefined8 *)(puVar14 + -8) = uVar25;
  if (plVar42 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0,uVar28);
    puVar18 = (undefined8 *)func_0x00f78aec();
    uVar22 = 0x3d7b900;
  }
  else {
    if (puVar27 != (undefined4 *)0x0) {
      if (-1 < (int)puVar29) {
code_r0x00f80814:
        return (undefined1 ****)(ulong)*(byte *)(*plVar42 + 0x12e);
      }
      uVar22 = func_0x00f78a24(0x3d75f70,uVar28);
      uVar22 = /*Locale$$GetText*/ func_0x02af42b4(uVar22,0);
      func_0x00f78a24(0x3d1fcf8);
      uVar17 = func_0x00f78aec();
      uVar25 = func_0x00f78a24(0x3d7a280);
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar17,uVar25,uVar22);
      uVar22 = func_0x00f78a24(0x3d514f0);
      func_0x00f78ac0(uVar17,uVar22);
      func_0x00f78af4();
      func_0x00f78a24(0x3d1fcf8);
      puVar18 = (undefined8 *)func_0x00f78aec();
      uVar17 = func_0x00f78a24(0x3d78af0);
      uVar22 = func_0x00f78a24(0x3d6de20);
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(puVar18,uVar17,uVar22);
      goto code_r0x0292b958;
    }
    func_0x00f78a24(0x3d1fcf0,uVar28);
    puVar18 = (undefined8 *)func_0x00f78aec();
    uVar22 = 0x3d78ae8;
  }
  uVar22 = func_0x00f78a24(uVar22);
  /*System.ArgumentNullException$$.ctor*/ func_0x02920400(puVar18,uVar22);
code_r0x0292b958:
  while( true ) {
    uVar22 = func_0x00f78a24(0x3d514f0);
    func_0x00f78ac0(puVar18,uVar22);
    uVar22 = func_0x00f78a24(0x3d23988);
    uVar39 = func_0x00f78ed4(uVar22,*(undefined8 *)*puVar18);
    if ((uVar39 & 1) == 0) break;
    puVar18 = (undefined8 *)*puVar18;
    ___cxa_end_catch();
    iVar16 = /*System.Array$$CanAssignArrayElement*/ func_0x0292e90c(*(undefined8 *)(puVar14 + -0x68),uVar17);
    if (iVar16 == 0) {
      puVar18 = (undefined8 *)/*System.Array$$CreateArrayTypeMismatchException*/ func_0x0292e8b8();
    }
  }
  puVar26 = (undefined8 *)___cxa_allocate_exception(8);
  *puVar26 = *puVar18;
  ___cxa_throw(puVar26,&DAT_03a5ed38,0);
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x292b9cc);
  (*pcVar10)();
}



// ============================================================
// RVA: 0x1504ecc | Atlas.Stats.StatsManager.EndAndResetTransaction
// ============================================================

/* WARNING: Possible PIC construction at 0x029202dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01504948: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01504be4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01504cc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0292b50c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0292b43c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0292c6bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0292c6e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01505464: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0292c6ec) */
/* WARNING: Removing unreachable block (ram,0x0292c6c0) */
/* WARNING: Removing unreachable block (ram,0x0292c6f4) */
/* WARNING: Removing unreachable block (ram,0x0292c6c8) */
/* WARNING: Removing unreachable block (ram,0x0292c6cc) */
/* WARNING: Removing unreachable block (ram,0x0292b440) */
/* WARNING: Removing unreachable block (ram,0x0292b484) */
/* WARNING: Removing unreachable block (ram,0x0292b510) */
/* WARNING: Removing unreachable block (ram,0x0292b70c) */
/* WARNING: Removing unreachable block (ram,0x0292b524) */
/* WARNING: Removing unreachable block (ram,0x0292b740) */
/* WARNING: Removing unreachable block (ram,0x0292b528) */
/* WARNING: Removing unreachable block (ram,0x0292b778) */
/* WARNING: Removing unreachable block (ram,0x0292b52c) */
/* WARNING: Removing unreachable block (ram,0x0292b548) */
/* WARNING: Removing unreachable block (ram,0x0292b56c) */
/* WARNING: Removing unreachable block (ram,0x0292b820) */
/* WARNING: Removing unreachable block (ram,0x0292b588) */
/* WARNING: Removing unreachable block (ram,0x0292b850) */
/* WARNING: Removing unreachable block (ram,0x0292b59c) */
/* WARNING: Removing unreachable block (ram,0x0292b5ac) */
/* WARNING: Removing unreachable block (ram,0x0292b5d0) */
/* WARNING: Removing unreachable block (ram,0x0292b5ec) */
/* WARNING: Removing unreachable block (ram,0x0292b634) */
/* WARNING: Removing unreachable block (ram,0x0292b638) */
/* WARNING: Removing unreachable block (ram,0x0292b5f4) */
/* WARNING: Removing unreachable block (ram,0x0292b604) */
/* WARNING: Removing unreachable block (ram,0x0292b664) */
/* WARNING: Removing unreachable block (ram,0x0292b60c) */
/* WARNING: Removing unreachable block (ram,0x01504cc4) */
/* WARNING: Removing unreachable block (ram,0x01504ce8) */
/* WARNING: Removing unreachable block (ram,0x01504cc8) */
/* WARNING: Removing unreachable block (ram,0x01504be8) */
/* WARNING: Removing unreachable block (ram,0x0150494c) */
/* WARNING: Removing unreachable block (ram,0x01504950) */
/* WARNING: Removing unreachable block (ram,0x0150496c) */
/* WARNING: Removing unreachable block (ram,0x029202e0) */
/* WARNING: Removing unreachable block (ram,0x029202e4) */
/* WARNING: Removing unreachable block (ram,0x0292030c) */
/* WARNING: Removing unreachable block (ram,0x02920300) */
/* WARNING: Removing unreachable block (ram,0x01505468) */
/* WARNING: Removing unreachable block (ram,0x0150547c) */
/* WARNING: Type propagation algorithm not settling */

undefined1 ***
Atlas_Stats_StatsManager__EndAndResetTransaction
          (long param_1,undefined8 param_2,undefined1 *****param_3,undefined8 param_4,
          undefined4 *param_5)

{
  uint uVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  code *pcVar10;
  uint **ppuVar11;
  undefined1 *****pppppuVar12;
  undefined1 *puVar13;
  int iVar14;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined1 ***pppuVar18;
  undefined1 ***pppuVar19;
  undefined8 uVar20;
  undefined1 *****pppppuVar21;
  int iVar15;
  undefined1 *****pppppuVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  undefined4 *puVar25;
  undefined8 uVar26;
  undefined4 *puVar27;
  undefined1 *****pppppuVar28;
  int *piVar29;
  long lVar30;
  undefined1 **ppuVar31;
  undefined1 ****ppppuVar32;
  undefined1 *puVar33;
  ulong uVar34;
  uint uVar35;
  ulong uVar36;
  long lVar37;
  ulong uVar38;
  undefined1 auVar39 [8];
  undefined8 uVar40;
  long *plVar41;
  undefined1 *puVar42;
  undefined1 *****pppppuVar43;
  undefined1 **ppuVar44;
  undefined1 *****pppppuVar45;
  undefined4 *unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  uint **ppuVar46;
  undefined1 *****pppppuVar47;
  undefined *puVar48;
  undefined1 auVar49 [8];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [12];
  long alStack_1b0 [14];
  uint *apuStack_140 [2];
  undefined *apuStack_130 [2];
  code *apcStack_120 [2];
  undefined1 *****apppppuStack_110 [2];
  undefined1 *****apppppuStack_100 [2];
  undefined1 *****apppppuStack_f0 [2];
  undefined1 *****pppppuStack_e0;
  undefined1 *****pppppuStack_d8;
  undefined1 *****pppppuStack_d0;
  undefined1 *****pppppuStack_c8;
  undefined1 *****pppppuStack_c0;
  undefined1 auStack_b8 [8];
  undefined1 ****ppppuStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 ****ppppuStack_a0;
  undefined1 *****pppppuStack_98;
  undefined1 ****ppppuStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined1 *****pppppuStack_68;
  undefined1 ***pppuStack_60;
  undefined *puStack_58;
  undefined1 **ppuStack_30;
  undefined *puStack_28;
  
  pppuVar18 = *(undefined1 ****)(param_1 + 0x20);
  if (pppuVar18 != *(undefined1 ****)(param_1 + 0x18)) {
    return pppuVar18;
  }
  if (pppuVar18 != (undefined1 ***)0x0) {
    pppuVar18 = (undefined1 ***)Atlas_Stats_StatsData__Reset();
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x10);
    return pppuVar18;
  }
  auVar51 = func_0x00f78af4();
  puStack_28 = &Atlas_Stats_StatsManager__RegisterOnStatChange;
  pppppuVar22 = param_3;
  ppuStack_30 = (undefined1 **)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4d09 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eb4d09 = 1;
  }
  lVar30 = *(long *)(auVar51._0_8_ + 0x28);
  if (lVar30 == 0) {
    func_0x00f78af4();
  }
  else if (auVar51._8_4_ < *(uint *)(lVar30 + 0x18)) {
    plVar41 = (long *)(lVar30 + (long)(int)auVar51._8_4_ * 8 + 0x20);
    pppuVar19 = (undefined1 ***)/*System.Delegate$$Combine*/ func_0x02ab18f0(*plVar41,param_3,0);
    pppuVar18 = (undefined1 ***)0x0;
    if (pppuVar19 != (undefined1 ***)0x0) {
      if ((*pppuVar19 == /*System.Action_TypeInfo*/ ppuRam0000000003d1fa78) &&
         (*plVar41 = (long)pppuVar19, *pppuVar19 == /*System.Action_TypeInfo*/ ppuRam0000000003d1fa78)) {
        return pppuVar19;
      }
      pppuVar18 = (undefined1 ***)func_0x00f78e5c();
    }
    *plVar41 = (long)pppuVar18;
    return pppuVar18;
  }
  uVar20 = func_0x00f78b24();
  auVar52 = func_0x00f78ac0(uVar20,0);
  pppppuVar43 = auVar52._0_8_;
  uStack_80 = 0x3eb4000;
  puStack_58 = &Atlas_Stats_StatsManager__UnRegisterOnStatChange;
  pppppuVar45 = (undefined1 *****)0x3eb4000;
  pppppuVar28 = pppppuVar22;
  pppppuStack_68 = param_3;
  pppuStack_60 = &ppuStack_30;
  auStack_78 = auVar51;
  if ((bRam0000000003eb4d0a & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eb4d0a = 1;
  }
  ppuVar31 = (undefined1 **)pppppuVar43[5];
  if (ppuVar31 == (undefined1 **)0x0) {
    func_0x00f78af4();
  }
  else if (auVar52._8_4_ < *(uint *)(ppuVar31 + 3)) {
    ppuVar31 = ppuVar31 + (long)(int)auVar52._8_4_ + 4;
    pppuVar19 = (undefined1 ***)/*System.Delegate$$Remove*/ func_0x02ab1bac(*ppuVar31,pppppuVar22,0);
    pppuVar18 = (undefined1 ***)0x0;
    if (pppuVar19 != (undefined1 ***)0x0) {
      if ((*pppuVar19 == /*System.Action_TypeInfo*/ ppuRam0000000003d1fa78) &&
         (*ppuVar31 = (undefined1 *)pppuVar19, *pppuVar19 == /*System.Action_TypeInfo*/ ppuRam0000000003d1fa78)) {
        return pppuVar19;
      }
      pppuVar18 = (undefined1 ***)func_0x00f78e5c();
    }
    *ppuVar31 = (undefined1 *)pppuVar18;
    return pppuVar18;
  }
  uVar20 = func_0x00f78b24();
  lVar30 = func_0x00f78ac0(uVar20,0);
  ppppuStack_a0 = (undefined1 ****)&ppppuStack_90;
  puStack_88 = &Atlas_Stats_StatsManager__ResetStats;
  ppppuStack_90 = &pppuStack_60;
  if (*(long *)(lVar30 + 0x20) == 0) {
    auVar51 = func_0x00f78af4();
    ppppuStack_b0 = (undefined1 ****)&ppppuStack_a0;
    pppppuStack_98 = (undefined1 *****)&Atlas_Stats_StatsManager__ResetAndSet;
    lVar30 = *(long *)(auVar51._0_8_ + 0x20);
    auVar51._8_8_ = auVar51._8_8_;
    auVar51._0_8_ = lVar30;
    if (lVar30 != 0) goto code_r0x015048e0;
    auVar51 = func_0x00f78af4();
    pppppuVar21 = auVar51._0_8_;
    auStack_a8 = (undefined1  [8])&Atlas_Stats_StatsManager__IncrementStat;
    pppppuStack_c0 = auVar52._8_8_;
    auStack_b8 = (undefined1  [8])pppppuVar22;
    pppppuVar47 = &ppppuStack_a0;
    if (pppppuVar21[4] == (undefined1 ****)0x0) {
code_r0x01505118:
      ppppuStack_b0 = (undefined1 ****)pppppuVar47;
      func_0x00f78af4();
    }
    else {
      Atlas_Stats_StatsData__IncrementStat();
      ppppuVar32 = pppppuVar21[5];
      pppppuVar22 = auVar51._8_8_;
      pppppuVar47 = (undefined1 *****)ppppuStack_b0;
      if (ppppuVar32 == (undefined1 ****)0x0) goto code_r0x01505118;
      if (auVar51._8_4_ < *(uint *)(ppppuVar32 + 3)) {
        pppuVar18 = ppppuVar32[(long)(int)auVar51._8_4_ + 4];
        if (pppuVar18 == (undefined1 ***)0x0) {
          return (undefined1 ***)0x0;
        }
        pppppuVar22 = &ppppuStack_a0;
        auVar39 = auStack_b8;
        pppppuVar28 = pppppuStack_c0;
        auVar49 = auStack_a8;
        goto System_Action__Invoke;
      }
    }
    uVar20 = func_0x00f78b24();
    auVar51 = func_0x00f78ac0(uVar20,0);
    pppppuVar47 = auVar51._0_8_;
    pppppuStack_c8 = (undefined1 *****)&Atlas_Stats_StatsManager__DecrementStat;
    pppppuStack_e0 = pppppuVar21;
    pppppuStack_d8 = pppppuVar22;
    pppppuStack_d0 = &ppppuStack_b0;
    if (pppppuVar47[4] == (undefined1 ****)0x0) {
code_r0x01505184:
      func_0x00f78af4();
    }
    else {
      Atlas_Stats_StatsData__DecrementStat();
      ppppuVar32 = pppppuVar47[5];
      pppppuVar22 = auVar51._8_8_;
      if (ppppuVar32 == (undefined1 ****)0x0) goto code_r0x01505184;
      if (auVar51._8_4_ < *(uint *)(ppppuVar32 + 3)) {
        pppuVar18 = ppppuVar32[(long)(int)auVar51._8_4_ + 4];
        if (pppuVar18 == (undefined1 ***)0x0) {
          return (undefined1 ***)0x0;
        }
        pppppuVar22 = (undefined1 *****)&pppppuStack_c0;
        auVar39 = (undefined1  [8])pppppuStack_d8;
        pppppuVar28 = pppppuStack_e0;
        pppppuVar47 = pppppuStack_d0;
        auVar49 = (undefined1  [8])pppppuStack_c8;
        goto System_Action__Invoke;
      }
    }
    uVar20 = func_0x00f78b24();
    auVar51 = func_0x00f78ac0(uVar20,0);
    pppppuVar21 = auVar51._8_8_;
    lVar30 = auVar51._0_8_;
    apppppuStack_110[0] = (undefined1 *****)0x3eb4000;
    apppppuStack_f0[1] = (undefined1 *****)&Atlas_Stats_StatsManager__SetStat;
    apppppuStack_110[1] = pppppuVar43;
    apppppuStack_100[0] = pppppuVar47;
    apppppuStack_100[1] = pppppuVar22;
    apppppuStack_f0[0] = (undefined1 *****)&pppppuStack_d0;
    if (*(long *)(lVar30 + 0x20) == 0) {
code_r0x01505234:
      func_0x00f78af4();
    }
    else {
      pppppuVar43 = (undefined1 *****)Atlas_Stats_StatsData__GetStat();
      pppppuVar22 = pppppuVar21;
      pppppuVar45 = pppppuVar28;
      if (*(long *)(lVar30 + 0x20) == 0) goto code_r0x01505234;
      Atlas_Stats_StatsData__SetStat(*(long *)(lVar30 + 0x20),pppppuVar21,pppppuVar28);
      if (*(long *)(lVar30 + 0x20) == 0) goto code_r0x01505234;
      pppuVar18 = (undefined1 ***)
                  Atlas_Stats_StatsData__GetStat(*(long *)(lVar30 + 0x20),pppppuVar21);
      if ((int)pppuVar18 == (int)pppppuVar43) {
        return pppuVar18;
      }
      lVar37 = *(long *)(lVar30 + 0x28);
      if (lVar37 == 0) goto code_r0x01505234;
      if (auVar51._8_4_ < *(uint *)(lVar37 + 0x18)) {
        pppuVar18 = *(undefined1 ****)(lVar37 + (long)(int)auVar51._8_4_ * 8 + 0x20);
        if (pppuVar18 == (undefined1 ***)0x0) {
          return (undefined1 ***)0x0;
        }
        pppppuVar22 = (undefined1 *****)&pppppuStack_e0;
        auVar39 = (undefined1  [8])apppppuStack_100[1];
        pppppuVar28 = apppppuStack_100[0];
        pppppuVar43 = apppppuStack_110[1];
        pppppuVar45 = apppppuStack_110[0];
        pppppuVar47 = apppppuStack_f0[0];
        auVar49 = (undefined1  [8])apppppuStack_f0[1];
System_Action__Invoke:
        uVar20 = 0;
        *(undefined8 *)((long)pppppuVar22 + 0xffffffffffffffb0) = unaff_x26;
        *(undefined8 *)((long)pppppuVar22 + 0xffffffffffffffb8) = unaff_x25;
        *(undefined8 *)((long)pppppuVar22 + 0xffffffffffffffc0) = unaff_x24;
        *(undefined4 **)((long)pppppuVar22 + 0xffffffffffffffc8) = unaff_x23;
        *(undefined1 ******)((long)pppppuVar22 + 0xffffffffffffffd0) = pppppuVar45;
        *(undefined1 ******)((long)pppppuVar22 + 0xffffffffffffffd8) = pppppuVar43;
        *(undefined1 ******)((long)pppppuVar22 + 0xffffffffffffffe0) = pppppuVar28;
        *(undefined1 (*) [8])((long)pppppuVar22 + 0xffffffffffffffe8) = auVar39;
        *(undefined1 ******)((long)pppppuVar22 + 0xfffffffffffffff0) = pppppuVar47;
        *(undefined1 (*) [8])((long)pppppuVar22 + 0xfffffffffffffff8) = auVar49;
        *(undefined1 ****)((long)pppppuVar22 + 0xffffffffffffffa8) = pppuVar18;
        ppuVar31 = pppuVar18[0xd];
        if (ppuVar31 == (undefined1 **)0x0) {
          ppuVar31 = (undefined1 **)((long)pppppuVar22 + 0xffffffffffffffa8);
          puVar13 = (undefined1 *)0x1;
        }
        else {
          puVar13 = ppuVar31[3];
          if (puVar13 == (undefined1 *)0x0) {
            return pppuVar18;
          }
          ppuVar31 = ppuVar31 + 4;
        }
        puVar42 = (undefined1 *)0x0;
        do {
          puVar33 = ppuVar31[(long)puVar42];
          pcVar10 = *(code **)(puVar33 + 0x10);
          plVar41 = *(long **)(puVar33 + 0x20);
          lVar30 = *(long *)(puVar33 + 0x28);
          if (*(short *)(lVar30 + 0x48) == -1) {
            func_0x00f78ad8(lVar30,uVar20);
          }
          iVar15 = func_0x00f78a4c(lVar30);
          if (iVar15 == 0) {
            if ((((plVar41 == (long *)0x0) || (*(short *)(lVar30 + 0x48) == -1)) ||
                ((*(byte *)(*plVar41 + 0x115) & 1) != 0)) || (pppuVar18[3] == (undefined1 **)0x0))
            goto code_r0x02924d98;
            iVar15 = func_0x00f78a44(lVar30);
            iVar14 = func_0x00f78ec0(lVar30);
            if (iVar15 == 0) {
              uVar2 = *(ushort *)(lVar30 + 0x48);
              if (iVar14 == 0) {
                lVar30 = *plVar41 + (ulong)uVar2 * 0x10;
                auVar51 = (**(code **)(lVar30 + 0x138))(plVar41,*(undefined8 *)(lVar30 + 0x140));
                goto code_r0x02924da4;
              }
              lVar30 = func_0x00f78a48(lVar30);
              lVar37 = *plVar41;
              uVar38 = (ulong)*(ushort *)(lVar37 + 0x12a);
              if (uVar38 != 0) {
                piVar29 = (int *)(*(long *)(lVar37 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar29 + -2) == lVar30) {
                    puVar17 = (undefined8 *)
                              (lVar37 + (long)(int)(*piVar29 + (uint)uVar2) * 0x10 + 0x138);
                    goto code_r0x02924e68;
                  }
                  piVar29 = piVar29 + 4;
                  uVar38 = uVar38 - 1;
                } while (uVar38 != 0);
              }
              puVar17 = (undefined8 *)func_0x00fac1f0(plVar41,lVar30,(ulong)uVar2);
code_r0x02924e68:
              pcVar10 = (code *)*puVar17;
              puVar17 = (undefined8 *)puVar17[1];
            }
            else {
              if (iVar14 == 0) {
                uVar20 = *(undefined8 *)
                          (*plVar41 + (ulong)*(ushort *)(lVar30 + 0x48) * 0x10 + 0x140);
              }
              else {
                lVar37 = *plVar41;
                uVar38 = (ulong)*(ushort *)(lVar37 + 0x12a);
                if (uVar38 != 0) {
                  piVar29 = (int *)(*(long *)(lVar37 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar29 + -2) == *(long *)(lVar30 + 0x18)) {
                      lVar37 = lVar37 + (long)(int)(*piVar29 + (uint)*(ushort *)(lVar30 + 0x48)) *
                                        0x10 + 0x138;
                      goto code_r0x02924e40;
                    }
                    piVar29 = piVar29 + 4;
                    uVar38 = uVar38 - 1;
                  } while (uVar38 != 0);
                }
                lVar37 = func_0x00fac1f0(plVar41);
code_r0x02924e40:
                uVar20 = *(undefined8 *)(lVar37 + 8);
              }
              puVar17 = (undefined8 *)func_0x00f78acc(uVar20,lVar30);
              pcVar10 = (code *)*puVar17;
            }
            auVar51 = (*pcVar10)(plVar41,puVar17);
          }
          else if (*(char *)(lVar30 + 0x4a) == '\0') {
            auVar51 = (*pcVar10)(lVar30);
          }
          else {
code_r0x02924d98:
            auVar51 = (*pcVar10)(plVar41,lVar30);
          }
code_r0x02924da4:
          uVar20 = auVar51._8_8_;
          puVar42 = puVar42 + 1;
          if (puVar42 == puVar13) {
            return auVar51._0_8_;
          }
        } while( true );
      }
    }
    auVar54._8_8_ = pppppuVar22;
    auVar54._0_8_ = lVar30;
    auVar51._8_8_ = lVar30;
    auVar51._0_8_ = pppppuVar22;
    auVar6._8_8_ = lVar30;
    auVar6._0_8_ = pppppuVar22;
    auVar5._8_8_ = lVar30;
    auVar5._0_8_ = pppppuVar22;
    uVar20 = func_0x00f78b24();
    auVar56 = func_0x00f78ac0(uVar20,0);
    apcStack_120[1] = (code *)&Atlas_Stats_StatsManager__GetStat;
    lVar30 = *(long *)(auVar56._0_8_ + 0x20);
    auVar56._8_4_ = auVar56._8_4_;
    auVar56._0_8_ = lVar30;
    apcStack_120[0] = (code *)apppppuStack_f0;
    if (lVar30 == 0) {
      auVar56 = func_0x00f78af4();
      puVar13 = (undefined1 *)(apuStack_140 + 2);
      apuStack_130[1] = &Atlas_Stats_StatsManager__GetTransactionStat;
      lVar30 = *(long *)(auVar56._0_8_ + 0x18);
      auVar56._8_4_ = auVar56._8_4_;
      auVar56._0_8_ = lVar30;
      if (lVar30 == 0) {
        apuStack_130[0] = (undefined *)(apuStack_140 + 4);
        auVar56 = func_0x00f78af4();
        ppuVar46 = apuStack_140;
        apuStack_140[1] = (uint *)&Atlas_Stats_StatsManager__GetCommittedStat;
        lVar30 = *(long *)(auVar56._0_8_ + 0x10);
        auVar56._8_4_ = auVar56._8_4_;
        auVar56._0_8_ = lVar30;
        if (lVar30 == 0) {
          puVar48 = &Atlas_Stats_StatsManager__GetGlobalStat;
          apuStack_140[0] = (uint *)(apuStack_140 + 2);
          auVar53 = func_0x00f78af4();
          ppuVar11 = apuStack_140;
          do {
            lVar30 = auVar53._0_8_;
            *(undefined1 ******)((long)ppuVar11 + -0x30) = pppppuVar45;
            *(undefined1 ******)((long)ppuVar11 + -0x28) = pppppuVar43;
            *(undefined1 (*) [16])((long)ppuVar11 + -0x20) = auVar54;
            *(uint ***)((long)ppuVar11 + -0x10) = ppuVar46;
            *(undefined **)((long)ppuVar11 + -8) = puVar48;
            uVar20 = auVar54._8_8_;
            if (*(long *)(lVar30 + 0x10) != 0) {
              pppppuVar43 = (undefined1 *****)Atlas_Stats_StatsData__GetStat();
              uVar20 = auVar53._8_8_;
              if (*(long *)(lVar30 + 0x18) != 0) {
                iVar15 = Atlas_Stats_StatsData__GetStat(*(long *)(lVar30 + 0x18),auVar53._8_8_);
                return (undefined1 ***)(ulong)(uint)(iVar15 + (int)pppppuVar43);
              }
            }
            auVar7._8_8_ = uVar20;
            auVar7._0_8_ = lVar30;
            auVar51 = func_0x00f78af4();
            lVar37 = auVar51._8_8_;
            *(undefined8 *)((long)ppuVar11 + -0x70) = unaff_x24;
            *(undefined4 **)((long)ppuVar11 + -0x68) = unaff_x23;
            *(undefined1 ******)((long)ppuVar11 + -0x60) = pppppuVar45;
            *(undefined1 ******)((long)ppuVar11 + -0x58) = pppppuVar43;
            *(long *)((long)ppuVar11 + -0x50) = lVar30;
            *(undefined8 *)((long)ppuVar11 + -0x48) = uVar20;
            *(undefined1 **)((long)ppuVar11 + -0x40) = (undefined1 *)((long)ppuVar11 + -0x10);
            *(undefined **)((long)ppuVar11 + -0x38) =
                 &Atlas_Stats_StatsManager__GetSummedCommittedStats;
            if (lVar37 == 0) {
code_r0x01505370:
              func_0x00f78af4();
            }
            else {
              if ((int)*(ulong *)(lVar37 + 0x18) < 1) {
                return (undefined1 ***)0x0;
              }
              pppppuVar43 = (undefined1 *****)0x0;
              pppppuVar45 = (undefined1 *****)0x0;
              pppppuVar22 = (undefined1 *****)(*(ulong *)(lVar37 + 0x18) & 0xffffffff);
              unaff_x23 = (undefined4 *)(lVar37 + 0x20);
              while (auVar7 = auVar51, pppppuVar45 < pppppuVar22) {
                lVar30 = *(long *)(auVar51._0_8_ + 0x10);
                if (lVar30 == 0) goto code_r0x01505370;
                iVar15 = Atlas_Stats_StatsData__GetStat(lVar30,unaff_x23[(long)pppppuVar45]);
                pppppuVar43 = (undefined1 *****)(ulong)(uint)(iVar15 + (int)pppppuVar43);
                pppppuVar45 = (undefined1 *****)((long)pppppuVar45 + 1);
                pppppuVar22 = (undefined1 *****)(ulong)*(uint *)(lVar37 + 0x18);
                if ((long)(int)*(uint *)(lVar37 + 0x18) <= (long)pppppuVar45) {
                  return (undefined1 ***)pppppuVar43;
                }
              }
            }
            uVar20 = func_0x00f78b24();
            auVar51 = func_0x00f78ac0(uVar20,0);
            lVar30 = auVar51._8_8_;
            *(undefined8 *)((long)ppuVar11 + -0xb0) = unaff_x24;
            *(undefined4 **)((long)ppuVar11 + -0xa8) = unaff_x23;
            *(undefined1 ******)((long)ppuVar11 + -0xa0) = pppppuVar45;
            *(undefined1 ******)((long)ppuVar11 + -0x98) = pppppuVar43;
            *(undefined1 (*) [16])((long)ppuVar11 + -0x90) = auVar7;
            *(undefined1 **)((long)ppuVar11 + -0x80) = (undefined1 *)((long)ppuVar11 + -0x40);
            *(undefined **)((long)ppuVar11 + -0x78) =
                 &Atlas_Stats_StatsManager__GetSummedTransactionStats;
            if (lVar30 == 0) {
code_r0x01505408:
              func_0x00f78af4();
            }
            else {
              if ((int)*(ulong *)(lVar30 + 0x18) < 1) {
                return (undefined1 ***)0x0;
              }
              pppppuVar43 = (undefined1 *****)0x0;
              pppppuVar45 = (undefined1 *****)0x0;
              pppppuVar22 = (undefined1 *****)(*(ulong *)(lVar30 + 0x18) & 0xffffffff);
              unaff_x23 = (undefined4 *)(lVar30 + 0x20);
              while (auVar7 = auVar51, pppppuVar45 < pppppuVar22) {
                lVar37 = *(long *)(auVar51._0_8_ + 0x18);
                if (lVar37 == 0) goto code_r0x01505408;
                iVar15 = Atlas_Stats_StatsData__GetStat(lVar37,unaff_x23[(long)pppppuVar45]);
                pppppuVar43 = (undefined1 *****)(ulong)(uint)(iVar15 + (int)pppppuVar43);
                pppppuVar45 = (undefined1 *****)((long)pppppuVar45 + 1);
                pppppuVar22 = (undefined1 *****)(ulong)*(uint *)(lVar30 + 0x18);
                if ((long)(int)*(uint *)(lVar30 + 0x18) <= (long)pppppuVar45) {
                  return (undefined1 ***)pppppuVar43;
                }
              }
            }
            uVar20 = func_0x00f78b24();
            auVar54 = func_0x00f78ac0(uVar20,0);
            lVar30 = auVar54._8_8_;
            *(undefined8 *)((long)ppuVar11 + -0xf0) = unaff_x24;
            *(undefined4 **)((long)ppuVar11 + -0xe8) = unaff_x23;
            *(undefined1 ******)((long)ppuVar11 + -0xe0) = pppppuVar45;
            *(undefined1 ******)((long)ppuVar11 + -0xd8) = pppppuVar43;
            *(undefined1 (*) [16])((long)ppuVar11 + -0xd0) = auVar7;
            *(undefined1 **)((long)ppuVar11 + -0xc0) = (undefined1 *)((long)ppuVar11 + -0x80);
            *(undefined **)((long)ppuVar11 + -0xb8) =
                 &Atlas_Stats_StatsManager__GetSummedGlobalStats;
            ppuVar46 = (uint **)((long)ppuVar11 + -0xc0);
            if (lVar30 == 0) goto code_r0x015054a8;
            if ((int)*(ulong *)(lVar30 + 0x18) < 1) {
              return (undefined1 ***)0x0;
            }
            pppppuVar43 = (undefined1 *****)0x0;
            pppppuVar45 = (undefined1 *****)0x0;
            unaff_x23 = (undefined4 *)(lVar30 + 0x20);
            if ((*(ulong *)(lVar30 + 0x18) & 0xffffffff) == 0) {
              uVar20 = func_0x00f78b24();
              func_0x00f78ac0(uVar20,0);
              auVar7 = auVar54;
code_r0x015054a8:
              uVar20 = func_0x00f78af4();
              *(undefined1 ******)((long)ppuVar11 + -0x120) = pppppuVar45;
              *(undefined1 ******)((long)ppuVar11 + -0x118) = pppppuVar43;
              *(undefined1 (*) [16])((long)ppuVar11 + -0x110) = auVar7;
              *(uint ***)((long)ppuVar11 + -0x100) = ppuVar46;
              *(undefined **)((long)ppuVar11 + -0xf8) = &Atlas_Stats_StatsManager__GetStatFromString
              ;
              if ((bRam0000000003eb4d0b & 1) == 0) {
                func_0x00f78a20(0x3d24d58);
                bRam0000000003eb4d0b = 1;
              }
              *(undefined4 *)((long)ppuVar11 + -0x124) = 0;
              if (((*(ushort *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              /*Atlas.Stats.StatsManager$$TryGetStatFromString*/ func_0x0150552c(uVar20,(undefined1 *)((long)ppuVar11 + -0x124));
              return (undefined1 ***)(ulong)*(uint *)((long)ppuVar11 + -0x124);
            }
            auVar53._8_4_ = *unaff_x23;
            auVar53._0_8_ = auVar54._0_8_;
            auVar53._12_4_ = 0;
            puVar48 = &UNK_01505468;
            ppuVar11 = (uint **)((long)ppuVar11 + -0xf0);
          } while( true );
        }
        puVar42 = (undefined1 *)(apuStack_140 + 2);
        pcVar10 = (code *)&Atlas_Stats_StatsManager__GetCommittedStat;
        apuStack_140[0] = (uint *)(apuStack_140 + 2);
      }
      else {
        puVar42 = (undefined1 *)(apuStack_140 + 4);
        pcVar10 = (code *)&Atlas_Stats_StatsManager__GetTransactionStat;
        puVar13 = (undefined1 *)(apuStack_140 + 4);
        apuStack_130[0] = (undefined *)(apuStack_140 + 4);
        auVar51 = auVar6;
      }
    }
    else {
      puVar42 = (undefined1 *)apppppuStack_110;
      puVar13 = (undefined1 *)apppppuStack_f0;
      pcVar10 = apcStack_120[1];
      auVar51 = auVar5;
    }
code_r0x01504b20:
    *(undefined1 **)(puVar42 + -0x10) = puVar13;
    *(code **)(puVar42 + -8) = pcVar10;
    lVar30 = *(long *)(auVar56._0_8_ + 0x10);
    if (lVar30 == 0) {
      func_0x00f78af4();
    }
    else if (auVar56._8_4_ < *(uint *)(lVar30 + 0x18)) {
      return (undefined1 ***)(ulong)*(uint *)(lVar30 + (long)(int)auVar56._8_4_ * 4 + 0x20);
    }
    uVar20 = func_0x00f78b24();
    auVar50 = func_0x00f78ac0(uVar20,0);
    lVar30 = auVar50._8_8_;
    pppuVar19 = auVar50._0_8_;
    pppppuVar12 = (undefined1 *****)(puVar42 + -0x50);
    *(undefined8 *)(puVar42 + -0x50) = unaff_x24;
    *(undefined4 **)(puVar42 + -0x48) = unaff_x23;
    *(undefined1 ******)(puVar42 + -0x40) = pppppuVar45;
    *(undefined1 ******)(puVar42 + -0x38) = pppppuVar43;
    *(long *)(puVar42 + -0x30) = auVar51._8_8_;
    *(long *)(puVar42 + -0x28) = auVar51._0_8_;
    *(undefined1 **)(puVar42 + -0x20) = puVar42 + -0x10;
    *(code **)(puVar42 + -0x18) = Atlas_Stats_StatsData__UpdateToLargestValues;
    pppuVar18 = pppuVar19;
    if ((bRam0000000003eb4d06 & 1) == 0) {
      pppuVar18 = (undefined1 ***)func_0x00f78a20(0x3d1f100);
      bRam0000000003eb4d06 = 1;
    }
    ppuVar31 = pppuVar19[2];
    if (((ppuVar31 == (undefined1 **)0x0) || (lVar30 == 0)) || (*(long *)(lVar30 + 0x10) == 0)) {
LAB_01504c70:
      func_0x00f78af4();
      *(undefined1 ******)(puVar42 + -0x80) = pppppuVar45;
      *(undefined1 ***)(puVar42 + -0x78) = ppuVar31;
      *(undefined1 (*) [16])(puVar42 + -0x70) = auVar50;
      *(undefined1 **)(puVar42 + -0x60) = puVar42 + -0x20;
      *(code **)(puVar42 + -0x58) = Atlas_Stats_StatsData__Clone;
      if ((bRam0000000003eb4d07 & 1) == 0) {
        func_0x00f78a20(0x3d24d50);
        bRam0000000003eb4d07 = 1;
      }
      pppuVar18 = (undefined1 ***)func_0x00f78aec(/*Atlas.Stats.StatsData_TypeInfo*/ uRam0000000003d24d50);
      return pppuVar18;
    }
    puVar27 = (undefined4 *)(ulong)*(uint *)(ppuVar31 + 3);
    pppppuVar45 = *(undefined1 ******)(*(long *)(lVar30 + 0x10) + 0x18);
    if ((int)pppppuVar45 <= (int)*(uint *)(ppuVar31 + 3)) {
      if (0 < (int)pppppuVar45) {
        if (ppuVar31 == (undefined1 **)0x0) goto LAB_01504c70;
        uVar38 = 0;
        uVar1 = *(uint *)(ppuVar31 + 3);
        do {
          if (uVar1 == uVar38) {
LAB_01504c64:
            uVar20 = func_0x00f78b24();
            func_0x00f78ac0(uVar20,0);
            goto LAB_01504c70;
          }
          lVar37 = *(long *)(lVar30 + 0x10);
          if (lVar37 == 0) goto LAB_01504c70;
          if ((*(uint *)(lVar37 + 0x18) <= uVar38) || (uVar1 <= uVar38)) goto LAB_01504c64;
          iVar15 = *(int *)((long)ppuVar31 + uVar38 * 4 + 0x20);
          iVar14 = *(int *)(lVar37 + uVar38 * 4 + 0x20);
          if (iVar15 <= iVar14) {
            iVar15 = iVar14;
          }
          *(int *)((long)ppuVar31 + uVar38 * 4 + 0x20) = iVar15;
          uVar38 = uVar38 + 1;
        } while (((ulong)pppppuVar45 & 0xffffffff) != uVar38);
      }
      return pppuVar18;
    }
    puVar25 = (undefined4 *)func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,pppppuVar45);
    ppuVar31 = pppuVar19[2];
    auVar39 = (undefined1  [8])puVar25;
    unaff_x23 = puVar27;
    ppppuVar32 = (undefined1 ****)(puVar42 + -0x20);
    pppppuVar22 = (undefined1 *****)0x1504be8;
  }
  else {
    puVar17 = *(undefined8 **)(*(long *)(lVar30 + 0x20) + 0x10);
    if (puVar17 != (undefined8 *)0x0) {
      iVar15 = *(int *)(puVar17 + 3);
      ppppuStack_b0 = (undefined1 ****)0x3eb4000;
      pppppuStack_98 = pppppuVar22;
      _auStack_a8 = auVar52;
      if (puVar17 == (undefined8 *)0x0) {
        func_0x00f78a24(0x3d1fcf0,0,iVar15,0);
        pppppuVar22 = (undefined1 *****)func_0x00f78aec();
        uVar20 = func_0x00f78a24(0x3d77d18);
        /*System.ArgumentNullException$$.ctor*/ func_0x02920400(pppppuVar22,uVar20);
      }
      else {
        if (iVar15 < 0) {
          func_0x00f78a24(0x3d22738,0,iVar15,0);
          pppppuVar22 = (undefined1 *****)func_0x00f78aec();
          uVar20 = 0x3d7a288;
        }
        else {
          auVar9._8_8_ = 0;
          auVar9._0_8_ = puVar17;
          iVar14 = func_0x00f807d0(puVar17,0);
          if (iVar14 < 1) {
            uVar1 = -iVar14;
            auVar52._4_4_ = 0;
            auVar52._0_4_ = uVar1;
            auVar52._8_8_ = puVar17;
            iVar14 = /*System.Array$$get_Length*/ func_0x0292ae44(puVar17);
            if ((int)uVar1 <= iVar14 - iVar15) {
              uVar20 = func_0x00f76cf0(*puVar17);
              uVar16 = func_0x00faf4d8(puVar17,uVar20,(long)(int)uVar1);
              pppuVar18 = (undefined1 ***)_bzero(uVar16,(long)((int)uVar20 * iVar15));
              return pppuVar18;
            }
            func_0x00f78a24(0x3d22738);
            pppppuVar22 = (undefined1 *****)func_0x00f78aec();
            uVar20 = 0x3d79a88;
          }
          else {
            func_0x00f78a24(0x3d22738);
            pppppuVar22 = (undefined1 *****)func_0x00f78aec();
            uVar20 = 0x3d79a90;
            auVar52 = auVar9 << 0x40;
          }
        }
        uVar20 = func_0x00f78a24(uVar20);
        /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(pppppuVar22,uVar20,0);
      }
      pppppuVar43 = auVar52._0_8_;
      uVar20 = func_0x00f78a24(0x3d514d8);
      plVar41 = (long *)func_0x00f78ac0(pppppuVar22,uVar20);
      puVar13 = (undefined1 *)&pppppuStack_d0;
      pppppuStack_d0 = auVar52._8_8_;
      pppppuStack_c8 = pppppuVar22;
      pppppuStack_c0 = &ppppuStack_90;
      auStack_b8 = (undefined1  [8])&Mono_Security_Cryptography_ARC4Managed__get_Key;
      pppppuVar28 = (undefined1 *****)&pppppuStack_c0;
      auVar51._8_8_ = 0x3eb8000;
      auVar51._0_8_ = plVar41;
      auVar8._8_8_ = 0x3eb8000;
      auVar8._0_8_ = plVar41;
      if ((bRam0000000003eb8e74 & 1) == 0) {
        func_0x00f78a20(0x3d1eda0);
        bRam0000000003eb8e74 = 1;
      }
      ppuVar31 = (undefined1 **)plVar41[4];
      if (ppuVar31 == (undefined1 **)0x0) {
        (**(code **)(*plVar41 + 0x2b8))(plVar41,*(undefined8 *)(*plVar41 + 0x2c0));
        ppuVar31 = (undefined1 **)plVar41[4];
        if (ppuVar31 == (undefined1 **)0x0) {
          puVar48 = &System_Array__Clone;
          ppuVar31 = (undefined1 **)func_0x00f78af4();
          goto DAT_00f7ffc4;
        }
      }
      puVar48 = &UNK_029202e0;
      puVar13 = (undefined1 *)&pppppuStack_d0;
      auVar51 = auVar8;
      goto DAT_00f7ffc4;
    }
    auVar51 = func_0x00f78af4();
    pppppuStack_98 = (undefined1 *****)Atlas_Stats_StatsData__ResetAndSet;
code_r0x015048e0:
    lVar30 = auVar51._8_8_;
    iVar15 = (int)pppppuVar28;
    pppppuVar12 = &ppppuStack_90;
    ppppuStack_a0 = (undefined1 ****)&ppppuStack_90;
    puVar13 = (undefined1 *)&pppppuStack_c0;
    pppppuStack_c0 = (undefined1 *****)0x3eb4000;
    pppppuVar28 = &ppppuStack_a0;
    pppppuVar43 = (undefined1 *****)0x3eb4000;
    auStack_a8 = (undefined1  [8])pppppuVar22;
    pppppuVar22 = &ppppuStack_90;
    _auStack_b8 = auVar52;
    if ((bRam0000000003eb4d05 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb4d05 = 1;
      pppppuVar22 = (undefined1 *****)ppppuStack_a0;
    }
    ppppuStack_a0 = (undefined1 ****)pppppuVar22;
    pppuVar18 = (undefined1 ***)Atlas_Stats_StatsData__Reset(auVar51._0_8_);
    auVar50._8_8_ = auStack_a8;
    auVar50._0_8_ = ppppuStack_b0;
    if (lVar30 == 0) {
      return pppuVar18;
    }
    ppuVar31 = *(undefined1 ***)(lVar30 + 0x10);
    if ((ppuVar31 == (undefined1 **)0x0) ||
       (puVar25 = *(undefined4 **)(auVar51._0_8_ + 0x10), puVar25 == (undefined4 *)0x0)) {
      func_0x00f78af4();
      auVar52 = func_0x00f78e5c(lVar30,0x3eb4000);
      pppppuStack_c8 = (undefined1 *****)Atlas_Stats_StatsData__Add;
      pppppuStack_d0 = pppppuVar28;
      if ((auVar52._8_8_ != 0) &&
         ((lVar30 = *(long *)(auVar52._8_8_ + 0x10), lVar30 != 0 &&
          (ppuVar31 = auVar52._0_8_[2], ppuVar31 != (undefined1 **)0x0)))) {
        uVar1 = *(uint *)(lVar30 + 0x18);
        uVar38 = (ulong)uVar1;
        uVar35 = (uint)ppuVar31[3];
        if ((int)uVar35 <= (int)uVar1) {
          uVar1 = uVar35;
        }
        uVar34 = (ulong)uVar1;
        if (0 < (int)uVar1) {
          uVar36 = (ulong)ppuVar31[3] & 0xffffffff;
          ppuVar31 = ppuVar31 + 4;
          piVar29 = (int *)(lVar30 + 0x20);
          do {
            if ((uVar36 == 0) || (uVar38 == 0)) {
              uVar20 = func_0x00f78b24();
              func_0x00f78ac0(uVar20,0);
              goto LAB_01504a20;
            }
            *(int *)ppuVar31 = *piVar29 + *(int *)ppuVar31;
            uVar38 = uVar38 - 1;
            uVar36 = uVar36 - 1;
            uVar34 = uVar34 - 1;
            ppuVar31 = (undefined1 **)((long)ppuVar31 + 4);
            piVar29 = piVar29 + 1;
          } while (uVar34 != 0);
        }
        return auVar52._0_8_;
      }
LAB_01504a20:
      auVar56 = func_0x00f78af4();
      pppppuStack_d8 = (undefined1 *****)Atlas_Stats_StatsData__IncrementStat;
      ppuVar31 = auVar56._0_8_[2];
      if (ppuVar31 == (undefined1 **)0x0) {
        pppppuStack_e0 = (undefined1 *****)&pppppuStack_d0;
        func_0x00f78af4();
      }
      else {
        pppppuStack_e0 = (undefined1 *****)&pppppuStack_d0;
        if (auVar56._8_4_ < *(uint *)(ppuVar31 + 3)) {
          piVar29 = (int *)((long)ppuVar31 + (long)(int)auVar56._8_4_ * 4 + 0x20);
          iVar15 = *piVar29;
          if (iVar15 < 0x3ffffffe) {
            *piVar29 = iVar15 + 1;
          }
          return auVar56._0_8_;
        }
      }
      uVar20 = func_0x00f78b24();
      auVar56 = func_0x00f78ac0(uVar20,0);
      apppppuStack_f0[1] = (undefined1 *****)Atlas_Stats_StatsData__DecrementStat;
      ppuVar31 = auVar56._0_8_[2];
      if (ppuVar31 == (undefined1 **)0x0) {
        apppppuStack_f0[0] = (undefined1 *****)&pppppuStack_e0;
        func_0x00f78af4();
      }
      else {
        apppppuStack_f0[0] = (undefined1 *****)&pppppuStack_e0;
        if (auVar56._8_4_ < *(uint *)(ppuVar31 + 3)) {
          piVar29 = (int *)((long)ppuVar31 + (long)(int)auVar56._8_4_ * 4 + 0x20);
          iVar15 = *piVar29;
          if (-0x3fffffff < iVar15) {
            *piVar29 = iVar15 + -1;
          }
          return auVar56._0_8_;
        }
      }
      uVar20 = func_0x00f78b24();
      auVar56 = func_0x00f78ac0(uVar20,0);
      puVar42 = (undefined1 *)(apppppuStack_110 + 2);
      apppppuStack_100[1] = (undefined1 *****)Atlas_Stats_StatsData__SetStat;
      ppuVar31 = auVar56._0_8_[2];
      if (ppuVar31 == (undefined1 **)0x0) {
        apppppuStack_100[0] = (undefined1 *****)apppppuStack_f0;
        func_0x00f78af4();
      }
      else {
        apppppuStack_100[0] = (undefined1 *****)apppppuStack_f0;
        if (auVar56._8_4_ < *(uint *)(ppuVar31 + 3)) {
          if (iVar15 < -0x3ffffffe) {
            iVar15 = -0x3fffffff;
          }
          if (0x3ffffffd < iVar15) {
            iVar15 = 0x3ffffffe;
          }
          *(int *)((long)ppuVar31 + (long)(int)auVar56._8_4_ * 4 + 0x20) = iVar15;
          return auVar56._0_8_;
        }
      }
      uVar20 = func_0x00f78b24();
      auVar56 = func_0x00f78ac0(uVar20,0);
      puVar13 = (undefined1 *)(apppppuStack_110 + 2);
      pcVar10 = Atlas_Stats_StatsData__GetStat;
      goto code_r0x01504b20;
    }
    puVar27 = (undefined4 *)(ulong)*(uint *)(ppuVar31 + 3);
    auVar39 = auStack_b8;
    pppppuVar45 = pppppuStack_c0;
    ppppuVar32 = ppppuStack_a0;
    pppppuVar22 = pppppuStack_98;
    if ((int)puVar25[6] < (int)*(uint *)(ppuVar31 + 3)) {
      puVar48 = (undefined *)0x150494c;
DAT_00f7ffc4:
      *(undefined8 *)(puVar13 + 0xffffffffffffffd0) = 0x3eb4000;
      *(undefined1 ******)(puVar13 + 0xffffffffffffffd8) = pppppuVar43;
      *(long *)(puVar13 + 0xffffffffffffffe0) = auVar51._8_8_;
      *(long *)(puVar13 + 0xffffffffffffffe8) = auVar51._0_8_;
      *(undefined1 ******)(puVar13 + 0xfffffffffffffff0) = pppppuVar28;
      *(undefined **)(puVar13 + 0xfffffffffffffff8) = puVar48;
      ppuVar44 = (undefined1 **)*ppuVar31;
      if (*(char *)((long)ppuVar44 + 0x12e) != '\0') {
        *(undefined8 *)(puVar13 + 0xffffffffffffffd0) =
             *(undefined8 *)(puVar13 + 0xffffffffffffffd0);
        *(undefined8 *)(puVar13 + 0xffffffffffffffd8) =
             *(undefined8 *)(puVar13 + 0xffffffffffffffd8);
        *(undefined8 *)(puVar13 + 0xffffffffffffffe0) =
             *(undefined8 *)(puVar13 + 0xffffffffffffffe0);
        *(undefined8 *)(puVar13 + 0xffffffffffffffe8) =
             *(undefined8 *)(puVar13 + 0xffffffffffffffe8);
        *(undefined8 *)(puVar13 + 0xfffffffffffffff0) =
             *(undefined8 *)(puVar13 + 0xfffffffffffffff0);
        *(undefined8 *)(puVar13 + 0xfffffffffffffff8) =
             *(undefined8 *)(puVar13 + 0xfffffffffffffff8);
        puVar42 = *ppuVar31;
        uVar38 = (ulong)*(uint *)(puVar42 + 0x100);
        if (ppuVar31[2] == (undefined1 *)0x0) {
          uVar1 = *(uint *)(ppuVar31 + 3);
          *(ulong *)(puVar13 + 0xffffffffffffffb8) = (ulong)uVar1;
          pppuVar18 = (undefined1 ***)func_0x00faf0d0(puVar42,puVar13 + 0xffffffffffffffb8,0);
          _memcpy(pppuVar18 + 4,ppuVar31 + 4,uVar1 * uVar38);
        }
        else {
          func_0x00901764(puVar13 + 0xffffffffffffffb8,puVar42[0x12e]);
          func_0x00901764(puVar13 + 0xffffffffffffffa0,puVar42[0x12e]);
          if (puVar42[0x12e] != '\0') {
            lVar30 = 0;
            uVar34 = 0;
            do {
              *(undefined8 *)(*(long *)(puVar13 + 0xffffffffffffffb8) + uVar34 * 8) =
                   *(undefined8 *)(ppuVar31[2] + lVar30);
              uVar38 = *(long *)(ppuVar31[2] + lVar30) * uVar38;
              *(long *)(*(long *)(puVar13 + 0xffffffffffffffa0) + uVar34 * 8) =
                   (long)(int)*(long *)((long)(ppuVar31[2] + lVar30) + 8);
              uVar34 = uVar34 + 1;
              lVar30 = lVar30 + 0x10;
            } while (uVar34 < (byte)puVar42[0x12e]);
          }
          pppuVar18 = (undefined1 ***)
                      func_0x00faf0d0(puVar42,*(undefined8 *)(puVar13 + 0xffffffffffffffb8),
                                      *(undefined8 *)(puVar13 + 0xffffffffffffffa0));
          _memcpy(pppuVar18 + 4,ppuVar31 + 4,uVar38);
          if (*(long *)(puVar13 + 0xffffffffffffffa0) != 0) {
            *(long *)(puVar13 + 0xffffffffffffffa8) = *(long *)(puVar13 + 0xffffffffffffffa0);
            func_0x00523aec();
          }
          if (*(long *)(puVar13 + 0xffffffffffffffb8) != 0) {
            *(long *)(puVar13 + 0xffffffffffffffc0) = *(long *)(puVar13 + 0xffffffffffffffb8);
            func_0x00523aec();
          }
        }
        return pppuVar18;
      }
      iVar15 = *(int *)(ppuVar44 + 0x1f);
      pppuVar18 = (undefined1 ***)func_0x00f6e3b8((long)iVar15,0);
      *pppuVar18 = ppuVar44;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(0x3ff71e8,0x10);
        if (bVar4) {
          cVar3 = ExclusiveMonitorsStatus();
          lRam0000000003ff71e8 = lRam0000000003ff71e8 + 1;
        }
      } while (cVar3 != '\0');
      _memcpy(pppuVar18 + 2,ppuVar31 + 2,(long)iVar15 + -0x10);
      if (((byte)(*ppuVar31)[0x133] >> 1 & 1) != 0) {
        func_0x00f7a274(pppuVar18);
      }
      if (cRam0000000003ff7438 < '\0') {
        func_0x00fc51b8(pppuVar18,*ppuVar31);
      }
      return pppuVar18;
    }
  }
  uVar20 = auVar50._0_8_;
  lVar30 = 0;
  *(undefined1 ******)((long)pppppuVar12 + -0x30) = pppppuVar45;
  *(undefined1 (*) [8])((long)pppppuVar12 + -0x28) = auVar39;
  *(undefined1 (*) [16])((long)pppppuVar12 + -0x20) = auVar50;
  *(undefined1 *****)((long)pppppuVar12 + -0x10) = ppppuVar32;
  *(undefined1 ******)((long)pppppuVar12 + -8) = pppppuVar22;
  if (ppuVar31 == (undefined1 **)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar23 = func_0x00f78aec();
    uVar16 = 0x3d7b900;
    puVar25 = puVar27;
    puVar27 = param_5;
code_r0x0292c538:
    uVar16 = func_0x00f78a24(uVar16);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar23,uVar16);
    uVar16 = func_0x00f78a24(0x3d514e0);
    auVar55 = func_0x00f78ac0(uVar23,uVar16);
    *(undefined8 *)((long)pppppuVar12 + -0x50) = uVar20;
    *(undefined8 *)((long)pppppuVar12 + -0x48) = uVar23;
    *(undefined1 **)((long)pppppuVar12 + -0x40) = (undefined1 *)((long)pppppuVar12 + -0x10);
    *(undefined **)((long)pppppuVar12 + -0x38) = &System_Array__Copy;
    if (auVar55._8_8_ == (long)auVar55._8_4_) {
      if (lVar30 == (int)lVar30) {
        if (puVar27 == (undefined4 *)(long)(int)puVar27) {
          uVar20 = *(undefined8 *)((long)pppppuVar12 + -0x40);
          uVar23 = *(undefined8 *)((long)pppppuVar12 + -0x38);
          puVar13 = (undefined1 *)((long)pppppuVar12 + -0x30);
          uVar16 = *(undefined8 *)((long)pppppuVar12 + -0x50);
          uVar40 = *(undefined8 *)((long)pppppuVar12 + -0x48);
          goto System_Array__Copy;
        }
        func_0x00f78a24(0x3d1fcf8);
        uVar16 = func_0x00f78aec();
        uVar20 = 0x3d7a280;
      }
      else {
        func_0x00f78a24(0x3d1fcf8);
        uVar16 = func_0x00f78aec();
        uVar20 = 0x3d78af0;
      }
    }
    else {
      func_0x00f78a24(0x3d1fcf8);
      uVar16 = func_0x00f78aec();
      uVar20 = 0x3d7b910;
    }
    uVar20 = func_0x00f78a24(uVar20);
    lVar30 = func_0x00f78a24(0x3d69268);
    /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar16,uVar20);
    uVar23 = func_0x00f78a24(0x3d514f8);
    auVar51 = func_0x00f78ac0(uVar16,uVar23);
    plVar41 = auVar51._8_8_;
    uVar23 = auVar51._0_8_;
    if (lVar30 != (int)lVar30) {
      *(undefined8 *)((long)pppppuVar12 + -0x70) = uVar20;
      *(undefined8 *)((long)pppppuVar12 + -0x68) = uVar16;
      *(undefined1 **)((long)pppppuVar12 + -0x60) = (undefined1 *)((long)pppppuVar12 + -0x40);
      *(undefined **)((long)pppppuVar12 + -0x58) = &System_Array__CopyTo;
      func_0x00f78a24(0x3d1fcf8);
      uVar20 = func_0x00f78aec();
      uVar16 = func_0x00f78a24(0x3d79a60);
      uVar23 = func_0x00f78a24(0x3d69268);
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar20,uVar16,uVar23);
      uVar23 = func_0x00f78a24(0x3d51508);
      plVar41 = (long *)func_0x00f78ac0(uVar20,uVar23);
      *(undefined1 ******)((long)pppppuVar12 + -0xa0) = pppppuVar45;
      *(undefined1 (*) [8])((long)pppppuVar12 + -0x98) = auVar39;
      *(undefined8 *)((long)pppppuVar12 + -0x90) = uVar16;
      *(undefined8 *)((long)pppppuVar12 + -0x88) = uVar20;
      *(undefined1 **)((long)pppppuVar12 + -0x80) = (undefined1 *)((long)pppppuVar12 + -0x60);
      *(undefined **)((long)pppppuVar12 + -0x78) = &System_Array__get_LongLength;
      func_0x00f8078c(plVar41,0);
      goto code_r0x00f80814;
    }
    *(undefined1 ******)((long)pppppuVar12 + -0x80) = pppppuVar45;
    *(undefined1 (*) [8])((long)pppppuVar12 + -0x78) = auVar39;
    *(undefined8 *)((long)pppppuVar12 + -0x70) = uVar20;
    *(undefined8 *)((long)pppppuVar12 + -0x68) = uVar16;
    *(undefined1 **)((long)pppppuVar12 + -0x60) = (undefined1 *)((long)pppppuVar12 + -0x40);
    *(undefined **)((long)pppppuVar12 + -0x58) = &System_Array__CopyTo;
    if (plVar41 != (long *)0x0) goto code_r0x00f80814;
    uVar20 = func_0x00f807d0(uVar23,0);
    auVar55._8_8_ = uVar20;
    auVar55._0_8_ = uVar23;
    puVar27 = (undefined4 *)/*System.Array$$get_Length*/ func_0x0292ae44(uVar23);
    uVar20 = *(undefined8 *)((long)pppppuVar12 + -0x60);
    uVar23 = *(undefined8 *)((long)pppppuVar12 + -0x58);
    uVar16 = *(undefined8 *)((long)pppppuVar12 + -0x70);
    uVar40 = *(undefined8 *)((long)pppppuVar12 + -0x68);
    puVar13 = (undefined1 *)((long)pppppuVar12 + -0x50);
    pppppuVar45 = *(undefined1 ******)((long)pppppuVar12 + -0x80);
    auVar39 = *(undefined1 (*) [8])((long)pppppuVar12 + -0x78);
    puVar25 = (undefined4 *)0x0;
  }
  else {
    if (puVar25 == (undefined4 *)0x0) {
      func_0x00f78a24(0x3d1fcf0);
      uVar23 = func_0x00f78aec();
      uVar16 = 0x3d78ae8;
      uVar20 = 0;
      puVar25 = puVar27;
      puVar27 = param_5;
      goto code_r0x0292c538;
    }
    uVar20 = func_0x00f807d0(ppuVar31,0);
    auVar55._8_8_ = uVar20;
    auVar55._0_8_ = ppuVar31;
    func_0x00f807d0(puVar25,0);
    uVar20 = *(undefined8 *)((long)pppppuVar12 + -0x10);
    uVar23 = *(undefined8 *)((long)pppppuVar12 + -8);
    uVar16 = *(undefined8 *)((long)pppppuVar12 + -0x20);
    uVar40 = *(undefined8 *)((long)pppppuVar12 + -0x18);
    pppppuVar45 = *(undefined1 ******)((long)pppppuVar12 + -0x30);
    auVar39 = *(undefined1 (*) [8])((long)pppppuVar12 + -0x28);
    puVar13 = (undefined1 *)pppppuVar12;
  }
System_Array__Copy:
  uVar26 = auVar55._8_8_;
  plVar41 = auVar55._0_8_;
  *(undefined8 *)(puVar13 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar13 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar13 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar13 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar13 + -0x40) = unaff_x24;
  *(undefined4 **)(puVar13 + -0x38) = unaff_x23;
  *(undefined1 ******)(puVar13 + -0x30) = pppppuVar45;
  *(undefined1 (*) [8])(puVar13 + -0x28) = auVar39;
  *(undefined8 *)(puVar13 + -0x20) = uVar16;
  *(undefined8 *)(puVar13 + -0x18) = uVar40;
  *(undefined8 *)(puVar13 + -0x10) = uVar20;
  *(undefined8 *)(puVar13 + -8) = uVar23;
  if (plVar41 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0,uVar26);
    puVar17 = (undefined8 *)func_0x00f78aec();
    uVar20 = 0x3d7b900;
  }
  else {
    if (puVar25 != (undefined4 *)0x0) {
      if (-1 < (int)puVar27) {
code_r0x00f80814:
        return (undefined1 ***)(ulong)*(byte *)(*plVar41 + 0x12e);
      }
      uVar20 = func_0x00f78a24(0x3d75f70,uVar26);
      uVar20 = /*Locale$$GetText*/ func_0x02af42b4(uVar20,0);
      func_0x00f78a24(0x3d1fcf8);
      uVar16 = func_0x00f78aec();
      uVar23 = func_0x00f78a24(0x3d7a280);
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar16,uVar23,uVar20);
      uVar20 = func_0x00f78a24(0x3d514f0);
      func_0x00f78ac0(uVar16,uVar20);
      func_0x00f78af4();
      func_0x00f78a24(0x3d1fcf8);
      puVar17 = (undefined8 *)func_0x00f78aec();
      uVar16 = func_0x00f78a24(0x3d78af0);
      uVar20 = func_0x00f78a24(0x3d6de20);
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(puVar17,uVar16,uVar20);
      goto code_r0x0292b958;
    }
    func_0x00f78a24(0x3d1fcf0,uVar26);
    puVar17 = (undefined8 *)func_0x00f78aec();
    uVar20 = 0x3d78ae8;
  }
  uVar20 = func_0x00f78a24(uVar20);
  /*System.ArgumentNullException$$.ctor*/ func_0x02920400(puVar17,uVar20);
code_r0x0292b958:
  while( true ) {
    uVar20 = func_0x00f78a24(0x3d514f0);
    func_0x00f78ac0(puVar17,uVar20);
    uVar20 = func_0x00f78a24(0x3d23988);
    uVar38 = func_0x00f78ed4(uVar20,*(undefined8 *)*puVar17);
    if ((uVar38 & 1) == 0) break;
    puVar17 = (undefined8 *)*puVar17;
    ___cxa_end_catch();
    iVar15 = /*System.Array$$CanAssignArrayElement*/ func_0x0292e90c(*(undefined8 *)(puVar13 + -0x68),uVar16);
    if (iVar15 == 0) {
      puVar17 = (undefined8 *)/*System.Array$$CreateArrayTypeMismatchException*/ func_0x0292e8b8();
    }
  }
  puVar24 = (undefined8 *)___cxa_allocate_exception(8);
  *puVar24 = *puVar17;
  ___cxa_throw(puVar24,&DAT_03a5ed38,0);
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x292b9cc);
  (*pcVar10)();
}



// ============================================================
// RVA: 0x1504f0c | Atlas.Stats.StatsManager.RegisterOnStatChange
// ============================================================

/* WARNING: Possible PIC construction at 0x029202dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01504948: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01504be4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01504cc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0292b50c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0292b43c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0292c6bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0292c6e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01505464: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0292c6ec) */
/* WARNING: Removing unreachable block (ram,0x0292c6c0) */
/* WARNING: Removing unreachable block (ram,0x0292c6f4) */
/* WARNING: Removing unreachable block (ram,0x0292c6c8) */
/* WARNING: Removing unreachable block (ram,0x0292c6cc) */
/* WARNING: Removing unreachable block (ram,0x0292b440) */
/* WARNING: Removing unreachable block (ram,0x0292b484) */
/* WARNING: Removing unreachable block (ram,0x0292b510) */
/* WARNING: Removing unreachable block (ram,0x0292b70c) */
/* WARNING: Removing unreachable block (ram,0x0292b524) */
/* WARNING: Removing unreachable block (ram,0x0292b740) */
/* WARNING: Removing unreachable block (ram,0x0292b528) */
/* WARNING: Removing unreachable block (ram,0x0292b778) */
/* WARNING: Removing unreachable block (ram,0x0292b52c) */
/* WARNING: Removing unreachable block (ram,0x0292b548) */
/* WARNING: Removing unreachable block (ram,0x0292b56c) */
/* WARNING: Removing unreachable block (ram,0x0292b820) */
/* WARNING: Removing unreachable block (ram,0x0292b588) */
/* WARNING: Removing unreachable block (ram,0x0292b850) */
/* WARNING: Removing unreachable block (ram,0x0292b59c) */
/* WARNING: Removing unreachable block (ram,0x0292b5ac) */
/* WARNING: Removing unreachable block (ram,0x0292b5d0) */
/* WARNING: Removing unreachable block (ram,0x0292b5ec) */
/* WARNING: Removing unreachable block (ram,0x0292b634) */
/* WARNING: Removing unreachable block (ram,0x0292b638) */
/* WARNING: Removing unreachable block (ram,0x0292b5f4) */
/* WARNING: Removing unreachable block (ram,0x0292b604) */
/* WARNING: Removing unreachable block (ram,0x0292b664) */
/* WARNING: Removing unreachable block (ram,0x0292b60c) */
/* WARNING: Removing unreachable block (ram,0x01504cc4) */
/* WARNING: Removing unreachable block (ram,0x01504ce8) */
/* WARNING: Removing unreachable block (ram,0x01504cc8) */
/* WARNING: Removing unreachable block (ram,0x01504be8) */
/* WARNING: Removing unreachable block (ram,0x0150494c) */
/* WARNING: Removing unreachable block (ram,0x01504950) */
/* WARNING: Removing unreachable block (ram,0x0150496c) */
/* WARNING: Removing unreachable block (ram,0x029202e0) */
/* WARNING: Removing unreachable block (ram,0x029202e4) */
/* WARNING: Removing unreachable block (ram,0x0292030c) */
/* WARNING: Removing unreachable block (ram,0x02920300) */
/* WARNING: Removing unreachable block (ram,0x01505468) */
/* WARNING: Removing unreachable block (ram,0x0150547c) */
/* WARNING: Type propagation algorithm not settling */

undefined1 ***
Atlas_Stats_StatsManager__RegisterOnStatChange
          (long param_1,undefined8 param_2,undefined1 *****param_3,undefined8 param_4,
          undefined4 *param_5)

{
  uint uVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  code *pcVar10;
  uint **ppuVar11;
  uint **ppuVar12;
  undefined1 ******ppppppuVar13;
  undefined1 *****pppppuVar14;
  undefined1 *puVar15;
  int iVar16;
  undefined8 uVar18;
  undefined8 *puVar19;
  undefined1 ***pppuVar20;
  undefined1 ***pppuVar21;
  undefined8 uVar22;
  undefined1 *****pppppuVar23;
  undefined1 *****pppppuVar24;
  int iVar17;
  undefined1 *****pppppuVar25;
  undefined8 uVar26;
  undefined8 *puVar27;
  undefined4 *puVar28;
  undefined8 uVar29;
  undefined4 *puVar30;
  undefined1 *****pppppuVar31;
  int *piVar32;
  long lVar33;
  undefined1 **ppuVar34;
  undefined1 ****ppppuVar35;
  undefined1 *puVar36;
  ulong uVar37;
  uint uVar38;
  ulong uVar39;
  long lVar40;
  ulong uVar41;
  undefined1 auVar42 [8];
  undefined8 uVar43;
  long *plVar44;
  undefined1 *puVar45;
  undefined1 *****pppppuVar46;
  undefined1 **ppuVar47;
  undefined1 *****pppppuVar48;
  undefined4 *unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  uint **ppuVar49;
  undefined1 ******ppppppuVar50;
  undefined *puVar51;
  undefined1 auVar52 [8];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [12];
  long alStack_190 [14];
  uint *apuStack_120 [5];
  code *pcStack_f8;
  undefined1 *****apppppuStack_f0 [4];
  undefined1 ******appppppuStack_d0 [2];
  undefined1 *****pppppuStack_c0;
  undefined1 *****pppppuStack_b8;
  undefined1 ******ppppppuStack_b0;
  undefined1 *****pppppuStack_a8;
  undefined1 *****pppppuStack_a0;
  undefined1 auStack_98 [8];
  undefined1 *****pppppuStack_90;
  undefined1 auStack_88 [8];
  undefined1 *****pppppuStack_80;
  undefined1 *****pppppuStack_78;
  undefined1 ****ppppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined1 *****pppppuStack_48;
  undefined1 ***pppuStack_40;
  undefined *puStack_38;
  
  pppppuVar25 = param_3;
  if ((bRam0000000003eb4d09 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eb4d09 = 1;
  }
  lVar33 = *(long *)(param_1 + 0x28);
  if (lVar33 == 0) {
    func_0x00f78af4();
  }
  else if ((uint)param_2 < *(uint *)(lVar33 + 0x18)) {
    plVar44 = (long *)(lVar33 + (long)(int)(uint)param_2 * 8 + 0x20);
    pppuVar20 = (undefined1 ***)/*System.Delegate$$Combine*/ func_0x02ab18f0(*plVar44,param_3,0);
    pppuVar21 = (undefined1 ***)0x0;
    if (pppuVar20 != (undefined1 ***)0x0) {
      if ((*pppuVar20 == /*System.Action_TypeInfo*/ ppuRam0000000003d1fa78) &&
         (*plVar44 = (long)pppuVar20, *pppuVar20 == /*System.Action_TypeInfo*/ ppuRam0000000003d1fa78)) {
        return pppuVar20;
      }
      pppuVar21 = (undefined1 ***)func_0x00f78e5c();
    }
    *plVar44 = (long)pppuVar21;
    return pppuVar21;
  }
  uVar22 = func_0x00f78b24();
  auVar55 = func_0x00f78ac0(uVar22,0);
  pppppuVar46 = auVar55._0_8_;
  uStack_60 = 0x3eb4000;
  puStack_38 = &Atlas_Stats_StatsManager__UnRegisterOnStatChange;
  pppppuVar48 = (undefined1 *****)0x3eb4000;
  pppppuVar31 = pppppuVar25;
  lStack_58 = param_1;
  uStack_50 = param_2;
  pppppuStack_48 = param_3;
  pppuStack_40 = (undefined1 ***)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4d0a & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eb4d0a = 1;
  }
  ppuVar34 = (undefined1 **)pppppuVar46[5];
  if (ppuVar34 == (undefined1 **)0x0) {
    func_0x00f78af4();
  }
  else if (auVar55._8_4_ < *(uint *)(ppuVar34 + 3)) {
    plVar44 = (long *)(ppuVar34 + (long)(int)auVar55._8_4_ + 4);
    pppuVar20 = (undefined1 ***)/*System.Delegate$$Remove*/ func_0x02ab1bac(*plVar44,pppppuVar25,0);
    pppuVar21 = (undefined1 ***)0x0;
    if (pppuVar20 != (undefined1 ***)0x0) {
      if ((*pppuVar20 == /*System.Action_TypeInfo*/ ppuRam0000000003d1fa78) &&
         (*plVar44 = (long)pppuVar20, *pppuVar20 == /*System.Action_TypeInfo*/ ppuRam0000000003d1fa78)) {
        return pppuVar20;
      }
      pppuVar21 = (undefined1 ***)func_0x00f78e5c();
    }
    *plVar44 = (long)pppuVar21;
    return pppuVar21;
  }
  uVar22 = func_0x00f78b24();
  lVar33 = func_0x00f78ac0(uVar22,0);
  pppppuStack_80 = &ppppuStack_70;
  puStack_68 = &Atlas_Stats_StatsManager__ResetStats;
  ppppuStack_70 = &pppuStack_40;
  if (*(long *)(lVar33 + 0x20) == 0) {
    auVar53 = func_0x00f78af4();
    pppppuStack_90 = (undefined1 *****)&pppppuStack_80;
    pppppuStack_78 = (undefined1 *****)&Atlas_Stats_StatsManager__ResetAndSet;
    lVar33 = *(long *)(auVar53._0_8_ + 0x20);
    auVar53._8_8_ = auVar53._8_8_;
    auVar53._0_8_ = lVar33;
    if (lVar33 != 0) goto code_r0x015048e0;
    auVar53 = func_0x00f78af4();
    pppppuVar23 = auVar53._0_8_;
    auStack_88 = (undefined1  [8])&Atlas_Stats_StatsManager__IncrementStat;
    pppppuStack_a0 = auVar55._8_8_;
    auStack_98 = (undefined1  [8])pppppuVar25;
    ppppppuVar13 = &pppppuStack_80;
    if (pppppuVar23[4] == (undefined1 ****)0x0) {
code_r0x01505118:
      pppppuStack_90 = (undefined1 *****)ppppppuVar13;
      func_0x00f78af4();
    }
    else {
      Atlas_Stats_StatsData__IncrementStat();
      ppppuVar35 = pppppuVar23[5];
      pppppuVar25 = auVar53._8_8_;
      ppppppuVar13 = (undefined1 ******)pppppuStack_90;
      if (ppppuVar35 == (undefined1 ****)0x0) goto code_r0x01505118;
      if (auVar53._8_4_ < *(uint *)(ppppuVar35 + 3)) {
        pppuVar21 = ppppuVar35[(long)(int)auVar53._8_4_ + 4];
        if (pppuVar21 == (undefined1 ***)0x0) {
          return (undefined1 ***)0x0;
        }
        ppppppuVar13 = &pppppuStack_80;
        auVar42 = auStack_98;
        pppppuVar25 = pppppuStack_a0;
        ppppppuVar50 = (undefined1 ******)pppppuStack_90;
        auVar52 = auStack_88;
        goto System_Action__Invoke;
      }
    }
    uVar22 = func_0x00f78b24();
    auVar55 = func_0x00f78ac0(uVar22,0);
    pppppuVar24 = auVar55._0_8_;
    pppppuStack_a8 = (undefined1 *****)&Atlas_Stats_StatsManager__DecrementStat;
    pppppuStack_c0 = pppppuVar23;
    pppppuStack_b8 = pppppuVar25;
    ppppppuStack_b0 = &pppppuStack_90;
    if (pppppuVar24[4] == (undefined1 ****)0x0) {
code_r0x01505184:
      func_0x00f78af4();
    }
    else {
      Atlas_Stats_StatsData__DecrementStat();
      ppppuVar35 = pppppuVar24[5];
      pppppuVar25 = auVar55._8_8_;
      if (ppppuVar35 == (undefined1 ****)0x0) goto code_r0x01505184;
      if (auVar55._8_4_ < *(uint *)(ppppuVar35 + 3)) {
        pppuVar21 = ppppuVar35[(long)(int)auVar55._8_4_ + 4];
        if (pppuVar21 == (undefined1 ***)0x0) {
          return (undefined1 ***)0x0;
        }
        ppppppuVar13 = (undefined1 ******)((long)apppppuStack_f0 + 0x50);
        auVar42 = (undefined1  [8])pppppuStack_b8;
        pppppuVar25 = pppppuStack_c0;
        ppppppuVar50 = ppppppuStack_b0;
        auVar52 = (undefined1  [8])pppppuStack_a8;
        goto System_Action__Invoke;
      }
    }
    uVar22 = func_0x00f78b24();
    auVar55 = func_0x00f78ac0(uVar22,0);
    pppppuVar23 = auVar55._8_8_;
    lVar33 = auVar55._0_8_;
    apppppuStack_f0[0] = (undefined1 *****)0x3eb4000;
    appppppuStack_d0[1] = (undefined1 ******)&Atlas_Stats_StatsManager__SetStat;
    ppuVar12 = (uint **)((long)apppppuStack_f0 + 0x20);
    apppppuStack_f0[1] = pppppuVar46;
    apppppuStack_f0[2] = pppppuVar24;
    apppppuStack_f0[3] = pppppuVar25;
    appppppuStack_d0[0] = (undefined1 ******)((long)apppppuStack_f0 + 0x40);
    if (*(long *)(lVar33 + 0x20) == 0) {
code_r0x01505234:
      func_0x00f78af4();
    }
    else {
      pppppuVar46 = (undefined1 *****)Atlas_Stats_StatsData__GetStat();
      pppppuVar25 = pppppuVar23;
      pppppuVar48 = pppppuVar31;
      if (*(long *)(lVar33 + 0x20) == 0) goto code_r0x01505234;
      Atlas_Stats_StatsData__SetStat(*(long *)(lVar33 + 0x20),pppppuVar23,pppppuVar31);
      if (*(long *)(lVar33 + 0x20) == 0) goto code_r0x01505234;
      pppuVar21 = (undefined1 ***)
                  Atlas_Stats_StatsData__GetStat(*(long *)(lVar33 + 0x20),pppppuVar23);
      if ((int)pppuVar21 == (int)pppppuVar46) {
        return pppuVar21;
      }
      lVar40 = *(long *)(lVar33 + 0x28);
      if (lVar40 == 0) goto code_r0x01505234;
      if (auVar55._8_4_ < *(uint *)(lVar40 + 0x18)) {
        pppuVar21 = *(undefined1 ****)(lVar40 + (long)(int)auVar55._8_4_ * 8 + 0x20);
        if (pppuVar21 == (undefined1 ***)0x0) {
          return (undefined1 ***)0x0;
        }
        ppppppuVar13 = (undefined1 ******)((long)apppppuStack_f0 + 0x30);
        auVar42 = (undefined1  [8])apppppuStack_f0[3];
        pppppuVar25 = apppppuStack_f0[2];
        pppppuVar46 = apppppuStack_f0[1];
        pppppuVar48 = apppppuStack_f0[0];
        ppppppuVar50 = appppppuStack_d0[0];
        auVar52 = (undefined1  [8])appppppuStack_d0[1];
System_Action__Invoke:
        uVar22 = 0;
        *(undefined8 *)((long)ppppppuVar13 + -0x50) = unaff_x26;
        *(undefined8 *)((long)ppppppuVar13 + -0x48) = unaff_x25;
        *(undefined8 *)((long)ppppppuVar13 + -0x40) = unaff_x24;
        *(undefined4 **)((long)ppppppuVar13 + -0x38) = unaff_x23;
        *(undefined1 ******)((long)ppppppuVar13 + -0x30) = pppppuVar48;
        *(undefined1 ******)((long)ppppppuVar13 + -0x28) = pppppuVar46;
        *(undefined1 ******)((long)ppppppuVar13 + -0x20) = pppppuVar25;
        *(undefined1 (*) [8])((long)ppppppuVar13 + -0x18) = auVar42;
        *(undefined1 *******)((long)ppppppuVar13 + -0x10) = ppppppuVar50;
        *(undefined1 (*) [8])((long)ppppppuVar13 + -8) = auVar52;
        *(undefined1 ****)((long)ppppppuVar13 + -0x58) = pppuVar21;
        ppuVar34 = pppuVar21[0xd];
        if (ppuVar34 == (undefined1 **)0x0) {
          ppuVar34 = (undefined1 **)((long)ppppppuVar13 + -0x58);
          puVar15 = (undefined1 *)0x1;
        }
        else {
          puVar15 = ppuVar34[3];
          if (puVar15 == (undefined1 *)0x0) {
            return pppuVar21;
          }
          ppuVar34 = ppuVar34 + 4;
        }
        puVar45 = (undefined1 *)0x0;
        do {
          puVar36 = ppuVar34[(long)puVar45];
          pcVar10 = *(code **)(puVar36 + 0x10);
          plVar44 = *(long **)(puVar36 + 0x20);
          lVar33 = *(long *)(puVar36 + 0x28);
          if (*(short *)(lVar33 + 0x48) == -1) {
            func_0x00f78ad8(lVar33,uVar22);
          }
          iVar17 = func_0x00f78a4c(lVar33);
          if (iVar17 == 0) {
            if ((((plVar44 == (long *)0x0) || (*(short *)(lVar33 + 0x48) == -1)) ||
                ((*(byte *)(*plVar44 + 0x115) & 1) != 0)) || (pppuVar21[3] == (undefined1 **)0x0))
            goto code_r0x02924d98;
            iVar17 = func_0x00f78a44(lVar33);
            iVar16 = func_0x00f78ec0(lVar33);
            if (iVar17 == 0) {
              uVar2 = *(ushort *)(lVar33 + 0x48);
              if (iVar16 == 0) {
                lVar33 = *plVar44 + (ulong)uVar2 * 0x10;
                auVar55 = (**(code **)(lVar33 + 0x138))(plVar44,*(undefined8 *)(lVar33 + 0x140));
                goto code_r0x02924da4;
              }
              lVar33 = func_0x00f78a48(lVar33);
              lVar40 = *plVar44;
              uVar41 = (ulong)*(ushort *)(lVar40 + 0x12a);
              if (uVar41 != 0) {
                piVar32 = (int *)(*(long *)(lVar40 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar32 + -2) == lVar33) {
                    puVar19 = (undefined8 *)
                              (lVar40 + (long)(int)(*piVar32 + (uint)uVar2) * 0x10 + 0x138);
                    goto code_r0x02924e68;
                  }
                  piVar32 = piVar32 + 4;
                  uVar41 = uVar41 - 1;
                } while (uVar41 != 0);
              }
              puVar19 = (undefined8 *)func_0x00fac1f0(plVar44,lVar33,(ulong)uVar2);
code_r0x02924e68:
              pcVar10 = (code *)*puVar19;
              puVar19 = (undefined8 *)puVar19[1];
            }
            else {
              if (iVar16 == 0) {
                uVar22 = *(undefined8 *)
                          (*plVar44 + (ulong)*(ushort *)(lVar33 + 0x48) * 0x10 + 0x140);
              }
              else {
                lVar40 = *plVar44;
                uVar41 = (ulong)*(ushort *)(lVar40 + 0x12a);
                if (uVar41 != 0) {
                  piVar32 = (int *)(*(long *)(lVar40 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar32 + -2) == *(long *)(lVar33 + 0x18)) {
                      lVar40 = lVar40 + (long)(int)(*piVar32 + (uint)*(ushort *)(lVar33 + 0x48)) *
                                        0x10 + 0x138;
                      goto code_r0x02924e40;
                    }
                    piVar32 = piVar32 + 4;
                    uVar41 = uVar41 - 1;
                  } while (uVar41 != 0);
                }
                lVar40 = func_0x00fac1f0(plVar44);
code_r0x02924e40:
                uVar22 = *(undefined8 *)(lVar40 + 8);
              }
              puVar19 = (undefined8 *)func_0x00f78acc(uVar22,lVar33);
              pcVar10 = (code *)*puVar19;
            }
            auVar55 = (*pcVar10)(plVar44,puVar19);
          }
          else if (*(char *)(lVar33 + 0x4a) == '\0') {
            auVar55 = (*pcVar10)(lVar33);
          }
          else {
code_r0x02924d98:
            auVar55 = (*pcVar10)(plVar44,lVar33);
          }
code_r0x02924da4:
          uVar22 = auVar55._8_8_;
          puVar45 = puVar45 + 1;
          if (puVar45 == puVar15) {
            return auVar55._0_8_;
          }
        } while( true );
      }
    }
    auVar57._8_8_ = pppppuVar25;
    auVar57._0_8_ = lVar33;
    auVar53._8_8_ = lVar33;
    auVar53._0_8_ = pppppuVar25;
    auVar6._8_8_ = lVar33;
    auVar6._0_8_ = pppppuVar25;
    auVar5._8_8_ = lVar33;
    auVar5._0_8_ = pppppuVar25;
    uVar22 = func_0x00f78b24();
    auVar59 = func_0x00f78ac0(uVar22,0);
    pcStack_f8 = (code *)&Atlas_Stats_StatsManager__GetStat;
    lVar33 = *(long *)(auVar59._0_8_ + 0x20);
    auVar59._8_4_ = auVar59._8_4_;
    auVar59._0_8_ = lVar33;
    apuStack_120[4] = (uint *)ppuVar12;
    if (lVar33 == 0) {
      auVar59 = func_0x00f78af4();
      ppuVar12 = apuStack_120 + 2;
      apuStack_120[3] = (uint *)&Atlas_Stats_StatsManager__GetTransactionStat;
      lVar33 = *(long *)(auVar59._0_8_ + 0x18);
      auVar59._8_4_ = auVar59._8_4_;
      auVar59._0_8_ = lVar33;
      if (lVar33 == 0) {
        apuStack_120[2] = (uint *)(apuStack_120 + 4);
        auVar59 = func_0x00f78af4();
        ppuVar49 = apuStack_120;
        apuStack_120[1] = (uint *)&Atlas_Stats_StatsManager__GetCommittedStat;
        lVar33 = *(long *)(auVar59._0_8_ + 0x10);
        auVar59._8_4_ = auVar59._8_4_;
        auVar59._0_8_ = lVar33;
        if (lVar33 == 0) {
          puVar51 = &Atlas_Stats_StatsManager__GetGlobalStat;
          apuStack_120[0] = (uint *)(apuStack_120 + 2);
          auVar56 = func_0x00f78af4();
          ppuVar12 = apuStack_120;
          do {
            lVar33 = auVar56._0_8_;
            *(undefined1 ******)((long)ppuVar12 + -0x30) = pppppuVar48;
            *(undefined1 ******)((long)ppuVar12 + -0x28) = pppppuVar46;
            *(undefined1 (*) [16])((long)ppuVar12 + -0x20) = auVar57;
            *(uint ***)((long)ppuVar12 + -0x10) = ppuVar49;
            *(undefined **)((long)ppuVar12 + -8) = puVar51;
            uVar22 = auVar57._8_8_;
            if (*(long *)(lVar33 + 0x10) != 0) {
              pppppuVar46 = (undefined1 *****)Atlas_Stats_StatsData__GetStat();
              uVar22 = auVar56._8_8_;
              if (*(long *)(lVar33 + 0x18) != 0) {
                iVar17 = Atlas_Stats_StatsData__GetStat(*(long *)(lVar33 + 0x18),auVar56._8_8_);
                return (undefined1 ***)(ulong)(uint)(iVar17 + (int)pppppuVar46);
              }
            }
            auVar7._8_8_ = uVar22;
            auVar7._0_8_ = lVar33;
            auVar55 = func_0x00f78af4();
            lVar40 = auVar55._8_8_;
            *(undefined8 *)((long)ppuVar12 + -0x70) = unaff_x24;
            *(undefined4 **)((long)ppuVar12 + -0x68) = unaff_x23;
            *(undefined1 ******)((long)ppuVar12 + -0x60) = pppppuVar48;
            *(undefined1 ******)((long)ppuVar12 + -0x58) = pppppuVar46;
            *(long *)((long)ppuVar12 + -0x50) = lVar33;
            *(undefined8 *)((long)ppuVar12 + -0x48) = uVar22;
            *(undefined1 **)((long)ppuVar12 + -0x40) = (undefined1 *)((long)ppuVar12 + -0x10);
            *(undefined **)((long)ppuVar12 + -0x38) =
                 &Atlas_Stats_StatsManager__GetSummedCommittedStats;
            if (lVar40 == 0) {
code_r0x01505370:
              func_0x00f78af4();
            }
            else {
              if ((int)*(ulong *)(lVar40 + 0x18) < 1) {
                return (undefined1 ***)0x0;
              }
              pppppuVar46 = (undefined1 *****)0x0;
              pppppuVar48 = (undefined1 *****)0x0;
              pppppuVar25 = (undefined1 *****)(*(ulong *)(lVar40 + 0x18) & 0xffffffff);
              unaff_x23 = (undefined4 *)(lVar40 + 0x20);
              while (auVar7 = auVar55, pppppuVar48 < pppppuVar25) {
                lVar33 = *(long *)(auVar55._0_8_ + 0x10);
                if (lVar33 == 0) goto code_r0x01505370;
                iVar17 = Atlas_Stats_StatsData__GetStat(lVar33,unaff_x23[(long)pppppuVar48]);
                pppppuVar46 = (undefined1 *****)(ulong)(uint)(iVar17 + (int)pppppuVar46);
                pppppuVar48 = (undefined1 *****)((long)pppppuVar48 + 1);
                pppppuVar25 = (undefined1 *****)(ulong)*(uint *)(lVar40 + 0x18);
                if ((long)(int)*(uint *)(lVar40 + 0x18) <= (long)pppppuVar48) {
                  return (undefined1 ***)pppppuVar46;
                }
              }
            }
            uVar22 = func_0x00f78b24();
            auVar55 = func_0x00f78ac0(uVar22,0);
            lVar33 = auVar55._8_8_;
            *(undefined8 *)((long)ppuVar12 + -0xb0) = unaff_x24;
            *(undefined4 **)((long)ppuVar12 + -0xa8) = unaff_x23;
            *(undefined1 ******)((long)ppuVar12 + -0xa0) = pppppuVar48;
            *(undefined1 ******)((long)ppuVar12 + -0x98) = pppppuVar46;
            *(undefined1 (*) [16])((long)ppuVar12 + -0x90) = auVar7;
            *(undefined1 **)((long)ppuVar12 + -0x80) = (undefined1 *)((long)ppuVar12 + -0x40);
            *(undefined **)((long)ppuVar12 + -0x78) =
                 &Atlas_Stats_StatsManager__GetSummedTransactionStats;
            if (lVar33 == 0) {
code_r0x01505408:
              func_0x00f78af4();
            }
            else {
              if ((int)*(ulong *)(lVar33 + 0x18) < 1) {
                return (undefined1 ***)0x0;
              }
              pppppuVar46 = (undefined1 *****)0x0;
              pppppuVar48 = (undefined1 *****)0x0;
              pppppuVar25 = (undefined1 *****)(*(ulong *)(lVar33 + 0x18) & 0xffffffff);
              unaff_x23 = (undefined4 *)(lVar33 + 0x20);
              while (auVar7 = auVar55, pppppuVar48 < pppppuVar25) {
                lVar40 = *(long *)(auVar55._0_8_ + 0x18);
                if (lVar40 == 0) goto code_r0x01505408;
                iVar17 = Atlas_Stats_StatsData__GetStat(lVar40,unaff_x23[(long)pppppuVar48]);
                pppppuVar46 = (undefined1 *****)(ulong)(uint)(iVar17 + (int)pppppuVar46);
                pppppuVar48 = (undefined1 *****)((long)pppppuVar48 + 1);
                pppppuVar25 = (undefined1 *****)(ulong)*(uint *)(lVar33 + 0x18);
                if ((long)(int)*(uint *)(lVar33 + 0x18) <= (long)pppppuVar48) {
                  return (undefined1 ***)pppppuVar46;
                }
              }
            }
            uVar22 = func_0x00f78b24();
            auVar57 = func_0x00f78ac0(uVar22,0);
            lVar33 = auVar57._8_8_;
            *(undefined8 *)((long)ppuVar12 + -0xf0) = unaff_x24;
            *(undefined4 **)((long)ppuVar12 + -0xe8) = unaff_x23;
            *(undefined1 ******)((long)ppuVar12 + -0xe0) = pppppuVar48;
            *(undefined1 ******)((long)ppuVar12 + -0xd8) = pppppuVar46;
            *(undefined1 (*) [16])((long)ppuVar12 + -0xd0) = auVar7;
            *(undefined1 **)((long)ppuVar12 + -0xc0) = (undefined1 *)((long)ppuVar12 + -0x80);
            *(undefined **)((long)ppuVar12 + -0xb8) =
                 &Atlas_Stats_StatsManager__GetSummedGlobalStats;
            ppuVar49 = (uint **)((long)ppuVar12 + -0xc0);
            if (lVar33 == 0) goto code_r0x015054a8;
            if ((int)*(ulong *)(lVar33 + 0x18) < 1) {
              return (undefined1 ***)0x0;
            }
            pppppuVar46 = (undefined1 *****)0x0;
            pppppuVar48 = (undefined1 *****)0x0;
            unaff_x23 = (undefined4 *)(lVar33 + 0x20);
            if ((*(ulong *)(lVar33 + 0x18) & 0xffffffff) == 0) {
              uVar22 = func_0x00f78b24();
              func_0x00f78ac0(uVar22,0);
              auVar7 = auVar57;
code_r0x015054a8:
              uVar22 = func_0x00f78af4();
              *(undefined1 ******)((long)ppuVar12 + -0x120) = pppppuVar48;
              *(undefined1 ******)((long)ppuVar12 + -0x118) = pppppuVar46;
              *(undefined1 (*) [16])((long)ppuVar12 + -0x110) = auVar7;
              *(uint ***)((long)ppuVar12 + -0x100) = ppuVar49;
              *(undefined **)((long)ppuVar12 + -0xf8) = &Atlas_Stats_StatsManager__GetStatFromString
              ;
              if ((bRam0000000003eb4d0b & 1) == 0) {
                func_0x00f78a20(0x3d24d58);
                bRam0000000003eb4d0b = 1;
              }
              *(undefined4 *)((long)ppuVar12 + -0x124) = 0;
              if (((*(ushort *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              /*Atlas.Stats.StatsManager$$TryGetStatFromString*/ func_0x0150552c(uVar22,(undefined1 *)((long)ppuVar12 + -0x124));
              return (undefined1 ***)(ulong)*(uint *)((long)ppuVar12 + -0x124);
            }
            auVar56._8_4_ = *unaff_x23;
            auVar56._0_8_ = auVar57._0_8_;
            auVar56._12_4_ = 0;
            puVar51 = &UNK_01505468;
            ppuVar12 = (uint **)((long)ppuVar12 + -0xf0);
          } while( true );
        }
        ppuVar11 = apuStack_120 + 2;
        pcVar10 = (code *)&Atlas_Stats_StatsManager__GetCommittedStat;
        apuStack_120[0] = (uint *)(apuStack_120 + 2);
      }
      else {
        ppuVar11 = apuStack_120 + 4;
        pcVar10 = (code *)&Atlas_Stats_StatsManager__GetTransactionStat;
        ppuVar12 = apuStack_120 + 4;
        apuStack_120[2] = (uint *)(apuStack_120 + 4);
        auVar53 = auVar6;
      }
    }
    else {
      ppuVar11 = apuStack_120 + 6;
      pcVar10 = pcStack_f8;
      auVar53 = auVar5;
    }
code_r0x01504b20:
    *(uint ***)((long)ppuVar11 + -0x10) = ppuVar12;
    *(code **)((long)ppuVar11 + -8) = pcVar10;
    lVar33 = *(long *)(auVar59._0_8_ + 0x10);
    if (lVar33 == 0) {
      func_0x00f78af4();
    }
    else if (auVar59._8_4_ < *(uint *)(lVar33 + 0x18)) {
      return (undefined1 ***)(ulong)*(uint *)(lVar33 + (long)(int)auVar59._8_4_ * 4 + 0x20);
    }
    uVar22 = func_0x00f78b24();
    auVar54 = func_0x00f78ac0(uVar22,0);
    lVar33 = auVar54._8_8_;
    pppuVar20 = auVar54._0_8_;
    pppppuVar14 = (undefined1 *****)((long)ppuVar11 + -0x50);
    *(undefined8 *)((long)ppuVar11 + -0x50) = unaff_x24;
    *(undefined4 **)((long)ppuVar11 + -0x48) = unaff_x23;
    *(undefined1 ******)((long)ppuVar11 + -0x40) = pppppuVar48;
    *(undefined1 ******)((long)ppuVar11 + -0x38) = pppppuVar46;
    *(long *)((long)ppuVar11 + -0x30) = auVar53._8_8_;
    *(long *)((long)ppuVar11 + -0x28) = auVar53._0_8_;
    *(undefined1 **)((long)ppuVar11 + -0x20) = (undefined1 *)((long)ppuVar11 + -0x10);
    *(code **)((long)ppuVar11 + -0x18) = Atlas_Stats_StatsData__UpdateToLargestValues;
    pppuVar21 = pppuVar20;
    if ((bRam0000000003eb4d06 & 1) == 0) {
      pppuVar21 = (undefined1 ***)func_0x00f78a20(0x3d1f100);
      bRam0000000003eb4d06 = 1;
    }
    ppuVar34 = pppuVar20[2];
    if (((ppuVar34 == (undefined1 **)0x0) || (lVar33 == 0)) || (*(long *)(lVar33 + 0x10) == 0)) {
LAB_01504c70:
      func_0x00f78af4();
      *(undefined1 ******)((long)ppuVar11 + -0x80) = pppppuVar48;
      *(undefined1 ***)((long)ppuVar11 + -0x78) = ppuVar34;
      *(undefined1 (*) [16])((long)ppuVar11 + -0x70) = auVar54;
      *(undefined1 ******)((long)ppuVar11 + -0x60) = (undefined1 *****)((long)ppuVar11 + -0x20);
      *(code **)((long)ppuVar11 + -0x58) = Atlas_Stats_StatsData__Clone;
      if ((bRam0000000003eb4d07 & 1) == 0) {
        func_0x00f78a20(0x3d24d50);
        bRam0000000003eb4d07 = 1;
      }
      pppuVar21 = (undefined1 ***)func_0x00f78aec(/*Atlas.Stats.StatsData_TypeInfo*/ uRam0000000003d24d50);
      return pppuVar21;
    }
    puVar30 = (undefined4 *)(ulong)*(uint *)(ppuVar34 + 3);
    pppppuVar48 = *(undefined1 ******)(*(long *)(lVar33 + 0x10) + 0x18);
    if ((int)pppppuVar48 <= (int)*(uint *)(ppuVar34 + 3)) {
      if (0 < (int)pppppuVar48) {
        if (ppuVar34 == (undefined1 **)0x0) goto LAB_01504c70;
        uVar41 = 0;
        uVar1 = *(uint *)(ppuVar34 + 3);
        do {
          if (uVar1 == uVar41) {
LAB_01504c64:
            uVar22 = func_0x00f78b24();
            func_0x00f78ac0(uVar22,0);
            goto LAB_01504c70;
          }
          lVar40 = *(long *)(lVar33 + 0x10);
          if (lVar40 == 0) goto LAB_01504c70;
          if ((*(uint *)(lVar40 + 0x18) <= uVar41) || (uVar1 <= uVar41)) goto LAB_01504c64;
          iVar17 = *(int *)((long)ppuVar34 + uVar41 * 4 + 0x20);
          iVar16 = *(int *)(lVar40 + uVar41 * 4 + 0x20);
          if (iVar17 <= iVar16) {
            iVar17 = iVar16;
          }
          *(int *)((long)ppuVar34 + uVar41 * 4 + 0x20) = iVar17;
          uVar41 = uVar41 + 1;
        } while (((ulong)pppppuVar48 & 0xffffffff) != uVar41);
      }
      return pppuVar21;
    }
    puVar28 = (undefined4 *)func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,pppppuVar48);
    ppuVar34 = pppuVar20[2];
    auVar42 = (undefined1  [8])puVar28;
    unaff_x23 = puVar30;
    pppppuVar25 = (undefined1 *****)((long)ppuVar11 + -0x20);
    pppppuVar31 = (undefined1 *****)0x1504be8;
  }
  else {
    puVar19 = *(undefined8 **)(*(long *)(lVar33 + 0x20) + 0x10);
    if (puVar19 != (undefined8 *)0x0) {
      iVar17 = *(int *)(puVar19 + 3);
      pppppuStack_90 = (undefined1 *****)0x3eb4000;
      pppppuStack_78 = pppppuVar25;
      _auStack_88 = auVar55;
      if (puVar19 == (undefined8 *)0x0) {
        func_0x00f78a24(0x3d1fcf0,0,iVar17,0);
        pppppuVar25 = (undefined1 *****)func_0x00f78aec();
        uVar22 = func_0x00f78a24(0x3d77d18);
        /*System.ArgumentNullException$$.ctor*/ func_0x02920400(pppppuVar25,uVar22);
      }
      else {
        if (iVar17 < 0) {
          func_0x00f78a24(0x3d22738,0,iVar17,0);
          pppppuVar25 = (undefined1 *****)func_0x00f78aec();
          uVar22 = 0x3d7a288;
        }
        else {
          auVar9._8_8_ = 0;
          auVar9._0_8_ = puVar19;
          iVar16 = func_0x00f807d0(puVar19,0);
          if (iVar16 < 1) {
            uVar1 = -iVar16;
            auVar55._4_4_ = 0;
            auVar55._0_4_ = uVar1;
            auVar55._8_8_ = puVar19;
            iVar16 = /*System.Array$$get_Length*/ func_0x0292ae44(puVar19);
            if ((int)uVar1 <= iVar16 - iVar17) {
              uVar22 = func_0x00f76cf0(*puVar19);
              uVar18 = func_0x00faf4d8(puVar19,uVar22,(long)(int)uVar1);
              pppuVar21 = (undefined1 ***)_bzero(uVar18,(long)((int)uVar22 * iVar17));
              return pppuVar21;
            }
            func_0x00f78a24(0x3d22738);
            pppppuVar25 = (undefined1 *****)func_0x00f78aec();
            uVar22 = 0x3d79a88;
          }
          else {
            func_0x00f78a24(0x3d22738);
            pppppuVar25 = (undefined1 *****)func_0x00f78aec();
            uVar22 = 0x3d79a90;
            auVar55 = auVar9 << 0x40;
          }
        }
        uVar22 = func_0x00f78a24(uVar22);
        /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(pppppuVar25,uVar22,0);
      }
      pppppuVar46 = auVar55._0_8_;
      uVar22 = func_0x00f78a24(0x3d514d8);
      plVar44 = (long *)func_0x00f78ac0(pppppuVar25,uVar22);
      puVar15 = (undefined1 *)((long)apppppuStack_f0 + 0x40);
      ppppppuStack_b0 = auVar55._8_8_;
      pppppuStack_a8 = pppppuVar25;
      pppppuStack_a0 = &ppppuStack_70;
      auStack_98 = (undefined1  [8])&Mono_Security_Cryptography_ARC4Managed__get_Key;
      ppppppuVar13 = (undefined1 ******)((long)apppppuStack_f0 + 0x50);
      auVar53._8_8_ = 0x3eb8000;
      auVar53._0_8_ = plVar44;
      auVar8._8_8_ = 0x3eb8000;
      auVar8._0_8_ = plVar44;
      if ((bRam0000000003eb8e74 & 1) == 0) {
        func_0x00f78a20(0x3d1eda0);
        bRam0000000003eb8e74 = 1;
      }
      ppuVar34 = (undefined1 **)plVar44[4];
      if (ppuVar34 == (undefined1 **)0x0) {
        (**(code **)(*plVar44 + 0x2b8))(plVar44,*(undefined8 *)(*plVar44 + 0x2c0));
        ppuVar34 = (undefined1 **)plVar44[4];
        if (ppuVar34 == (undefined1 **)0x0) {
          puVar51 = &System_Array__Clone;
          ppuVar34 = (undefined1 **)func_0x00f78af4();
          goto DAT_00f7ffc4;
        }
      }
      puVar51 = &UNK_029202e0;
      puVar15 = (undefined1 *)((long)apppppuStack_f0 + 0x40);
      auVar53 = auVar8;
      goto DAT_00f7ffc4;
    }
    auVar53 = func_0x00f78af4();
    pppppuStack_78 = (undefined1 *****)Atlas_Stats_StatsData__ResetAndSet;
code_r0x015048e0:
    lVar33 = auVar53._8_8_;
    iVar17 = (int)pppppuVar31;
    pppppuVar14 = &ppppuStack_70;
    pppppuStack_80 = &ppppuStack_70;
    puVar15 = (undefined1 *)((long)apppppuStack_f0 + 0x50);
    pppppuStack_a0 = (undefined1 *****)0x3eb4000;
    ppppppuVar13 = &pppppuStack_80;
    pppppuVar46 = (undefined1 *****)0x3eb4000;
    auStack_88 = (undefined1  [8])pppppuVar25;
    pppppuVar25 = &ppppuStack_70;
    _auStack_98 = auVar55;
    if ((bRam0000000003eb4d05 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb4d05 = 1;
      pppppuVar25 = pppppuStack_80;
    }
    pppppuStack_80 = pppppuVar25;
    pppuVar21 = (undefined1 ***)Atlas_Stats_StatsData__Reset(auVar53._0_8_);
    auVar54._8_8_ = auStack_88;
    auVar54._0_8_ = pppppuStack_90;
    if (lVar33 == 0) {
      return pppuVar21;
    }
    ppuVar34 = *(undefined1 ***)(lVar33 + 0x10);
    if ((ppuVar34 == (undefined1 **)0x0) ||
       (puVar28 = *(undefined4 **)(auVar53._0_8_ + 0x10), puVar28 == (undefined4 *)0x0)) {
      func_0x00f78af4();
      auVar55 = func_0x00f78e5c(lVar33,0x3eb4000);
      pppppuStack_a8 = (undefined1 *****)Atlas_Stats_StatsData__Add;
      ppppppuStack_b0 = ppppppuVar13;
      if ((auVar55._8_8_ != 0) &&
         ((lVar33 = *(long *)(auVar55._8_8_ + 0x10), lVar33 != 0 &&
          (ppuVar34 = auVar55._0_8_[2], ppuVar34 != (undefined1 **)0x0)))) {
        uVar1 = *(uint *)(lVar33 + 0x18);
        uVar41 = (ulong)uVar1;
        uVar38 = (uint)ppuVar34[3];
        if ((int)uVar38 <= (int)uVar1) {
          uVar1 = uVar38;
        }
        uVar37 = (ulong)uVar1;
        if (0 < (int)uVar1) {
          uVar39 = (ulong)ppuVar34[3] & 0xffffffff;
          ppuVar34 = ppuVar34 + 4;
          piVar32 = (int *)(lVar33 + 0x20);
          do {
            if ((uVar39 == 0) || (uVar41 == 0)) {
              uVar22 = func_0x00f78b24();
              func_0x00f78ac0(uVar22,0);
              goto LAB_01504a20;
            }
            *(int *)ppuVar34 = *piVar32 + *(int *)ppuVar34;
            uVar41 = uVar41 - 1;
            uVar39 = uVar39 - 1;
            uVar37 = uVar37 - 1;
            ppuVar34 = (undefined1 **)((long)ppuVar34 + 4);
            piVar32 = piVar32 + 1;
          } while (uVar37 != 0);
        }
        return auVar55._0_8_;
      }
LAB_01504a20:
      auVar59 = func_0x00f78af4();
      pppppuStack_b8 = (undefined1 *****)Atlas_Stats_StatsData__IncrementStat;
      ppuVar34 = auVar59._0_8_[2];
      if (ppuVar34 == (undefined1 **)0x0) {
        pppppuStack_c0 = (undefined1 *****)((long)apppppuStack_f0 + 0x40);
        func_0x00f78af4();
      }
      else {
        pppppuStack_c0 = (undefined1 *****)((long)apppppuStack_f0 + 0x40);
        if (auVar59._8_4_ < *(uint *)(ppuVar34 + 3)) {
          piVar32 = (int *)((long)ppuVar34 + (long)(int)auVar59._8_4_ * 4 + 0x20);
          iVar17 = *piVar32;
          if (iVar17 < 0x3ffffffe) {
            *piVar32 = iVar17 + 1;
          }
          return auVar59._0_8_;
        }
      }
      uVar22 = func_0x00f78b24();
      auVar59 = func_0x00f78ac0(uVar22,0);
      appppppuStack_d0[1] = (undefined1 ******)Atlas_Stats_StatsData__DecrementStat;
      ppuVar34 = auVar59._0_8_[2];
      if (ppuVar34 == (undefined1 **)0x0) {
        appppppuStack_d0[0] = (undefined1 ******)((long)apppppuStack_f0 + 0x30);
        func_0x00f78af4();
      }
      else {
        appppppuStack_d0[0] = (undefined1 ******)((long)apppppuStack_f0 + 0x30);
        if (auVar59._8_4_ < *(uint *)(ppuVar34 + 3)) {
          piVar32 = (int *)((long)ppuVar34 + (long)(int)auVar59._8_4_ * 4 + 0x20);
          iVar17 = *piVar32;
          if (-0x3fffffff < iVar17) {
            *piVar32 = iVar17 + -1;
          }
          return auVar59._0_8_;
        }
      }
      uVar22 = func_0x00f78b24();
      auVar59 = func_0x00f78ac0(uVar22,0);
      ppuVar11 = apuStack_120 + 8;
      apppppuStack_f0[3] = (undefined1 *****)Atlas_Stats_StatsData__SetStat;
      ppuVar34 = auVar59._0_8_[2];
      if (ppuVar34 == (undefined1 **)0x0) {
        apppppuStack_f0[2] = (undefined1 *****)((long)apppppuStack_f0 + 0x20);
        func_0x00f78af4();
      }
      else {
        apppppuStack_f0[2] = (undefined1 *****)((long)apppppuStack_f0 + 0x20);
        if (auVar59._8_4_ < *(uint *)(ppuVar34 + 3)) {
          if (iVar17 < -0x3ffffffe) {
            iVar17 = -0x3fffffff;
          }
          if (0x3ffffffd < iVar17) {
            iVar17 = 0x3ffffffe;
          }
          *(int *)((long)ppuVar34 + (long)(int)auVar59._8_4_ * 4 + 0x20) = iVar17;
          return auVar59._0_8_;
        }
      }
      uVar22 = func_0x00f78b24();
      auVar59 = func_0x00f78ac0(uVar22,0);
      ppuVar12 = apuStack_120 + 8;
      pcVar10 = Atlas_Stats_StatsData__GetStat;
      goto code_r0x01504b20;
    }
    puVar30 = (undefined4 *)(ulong)*(uint *)(ppuVar34 + 3);
    auVar42 = auStack_98;
    pppppuVar48 = pppppuStack_a0;
    pppppuVar25 = pppppuStack_80;
    pppppuVar31 = pppppuStack_78;
    if ((int)puVar28[6] < (int)*(uint *)(ppuVar34 + 3)) {
      puVar51 = (undefined *)0x150494c;
DAT_00f7ffc4:
      *(undefined8 *)(puVar15 + -0x30) = 0x3eb4000;
      *(undefined1 ******)(puVar15 + -0x28) = pppppuVar46;
      *(long *)(puVar15 + -0x20) = auVar53._8_8_;
      *(long *)(puVar15 + -0x18) = auVar53._0_8_;
      *(undefined1 *******)(puVar15 + -0x10) = ppppppuVar13;
      *(undefined **)(puVar15 + -8) = puVar51;
      ppuVar47 = (undefined1 **)*ppuVar34;
      if (*(char *)((long)ppuVar47 + 0x12e) != '\0') {
        *(undefined8 *)(puVar15 + -0x30) = *(undefined8 *)(puVar15 + -0x30);
        *(undefined8 *)(puVar15 + -0x28) = *(undefined8 *)(puVar15 + -0x28);
        *(undefined8 *)(puVar15 + -0x20) = *(undefined8 *)(puVar15 + -0x20);
        *(undefined8 *)(puVar15 + -0x18) = *(undefined8 *)(puVar15 + -0x18);
        *(undefined8 *)(puVar15 + -0x10) = *(undefined8 *)(puVar15 + -0x10);
        *(undefined8 *)(puVar15 + -8) = *(undefined8 *)(puVar15 + -8);
        puVar45 = *ppuVar34;
        uVar41 = (ulong)*(uint *)(puVar45 + 0x100);
        if (ppuVar34[2] == (undefined1 *)0x0) {
          uVar1 = *(uint *)(ppuVar34 + 3);
          *(ulong *)(puVar15 + -0x48) = (ulong)uVar1;
          pppuVar21 = (undefined1 ***)func_0x00faf0d0(puVar45,puVar15 + -0x48,0);
          _memcpy(pppuVar21 + 4,ppuVar34 + 4,uVar1 * uVar41);
        }
        else {
          func_0x00901764(puVar15 + -0x48,puVar45[0x12e]);
          func_0x00901764(puVar15 + -0x60,puVar45[0x12e]);
          if (puVar45[0x12e] != '\0') {
            lVar33 = 0;
            uVar37 = 0;
            do {
              *(undefined8 *)(*(long *)(puVar15 + -0x48) + uVar37 * 8) =
                   *(undefined8 *)(ppuVar34[2] + lVar33);
              uVar41 = *(long *)(ppuVar34[2] + lVar33) * uVar41;
              *(long *)(*(long *)(puVar15 + -0x60) + uVar37 * 8) =
                   (long)(int)*(long *)((long)(ppuVar34[2] + lVar33) + 8);
              uVar37 = uVar37 + 1;
              lVar33 = lVar33 + 0x10;
            } while (uVar37 < (byte)puVar45[0x12e]);
          }
          pppuVar21 = (undefined1 ***)
                      func_0x00faf0d0(puVar45,*(undefined8 *)(puVar15 + -0x48),
                                      *(undefined8 *)(puVar15 + -0x60));
          _memcpy(pppuVar21 + 4,ppuVar34 + 4,uVar41);
          if (*(long *)(puVar15 + -0x60) != 0) {
            *(long *)(puVar15 + -0x58) = *(long *)(puVar15 + -0x60);
            func_0x00523aec();
          }
          if (*(long *)(puVar15 + -0x48) != 0) {
            *(long *)(puVar15 + -0x40) = *(long *)(puVar15 + -0x48);
            func_0x00523aec();
          }
        }
        return pppuVar21;
      }
      iVar17 = *(int *)(ppuVar47 + 0x1f);
      pppuVar21 = (undefined1 ***)func_0x00f6e3b8((long)iVar17,0);
      *pppuVar21 = ppuVar47;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(0x3ff71e8,0x10);
        if (bVar4) {
          cVar3 = ExclusiveMonitorsStatus();
          lRam0000000003ff71e8 = lRam0000000003ff71e8 + 1;
        }
      } while (cVar3 != '\0');
      _memcpy(pppuVar21 + 2,ppuVar34 + 2,(long)iVar17 + -0x10);
      if (((byte)(*ppuVar34)[0x133] >> 1 & 1) != 0) {
        func_0x00f7a274(pppuVar21);
      }
      if (cRam0000000003ff7438 < '\0') {
        func_0x00fc51b8(pppuVar21,*ppuVar34);
      }
      return pppuVar21;
    }
  }
  uVar22 = auVar54._0_8_;
  lVar33 = 0;
  *(undefined1 ******)((long)pppppuVar14 + -0x30) = pppppuVar48;
  *(undefined1 (*) [8])((long)pppppuVar14 + -0x28) = auVar42;
  *(undefined1 (*) [16])((long)pppppuVar14 + -0x20) = auVar54;
  *(undefined1 ******)((long)pppppuVar14 + -0x10) = pppppuVar25;
  *(undefined1 ******)((long)pppppuVar14 + -8) = pppppuVar31;
  if (ppuVar34 == (undefined1 **)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar26 = func_0x00f78aec();
    uVar18 = 0x3d7b900;
    puVar28 = puVar30;
    puVar30 = param_5;
code_r0x0292c538:
    uVar18 = func_0x00f78a24(uVar18);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar26,uVar18);
    uVar18 = func_0x00f78a24(0x3d514e0);
    auVar58 = func_0x00f78ac0(uVar26,uVar18);
    *(undefined8 *)((long)pppppuVar14 + -0x50) = uVar22;
    *(undefined8 *)((long)pppppuVar14 + -0x48) = uVar26;
    *(undefined1 **)((long)pppppuVar14 + -0x40) = (undefined1 *)((long)pppppuVar14 + -0x10);
    *(undefined **)((long)pppppuVar14 + -0x38) = &System_Array__Copy;
    if (auVar58._8_8_ == (long)auVar58._8_4_) {
      if (lVar33 == (int)lVar33) {
        if (puVar30 == (undefined4 *)(long)(int)puVar30) {
          uVar22 = *(undefined8 *)((long)pppppuVar14 + -0x40);
          uVar26 = *(undefined8 *)((long)pppppuVar14 + -0x38);
          puVar15 = (undefined1 *)((long)pppppuVar14 + -0x30);
          uVar18 = *(undefined8 *)((long)pppppuVar14 + -0x50);
          uVar43 = *(undefined8 *)((long)pppppuVar14 + -0x48);
          goto System_Array__Copy;
        }
        func_0x00f78a24(0x3d1fcf8);
        uVar18 = func_0x00f78aec();
        uVar22 = 0x3d7a280;
      }
      else {
        func_0x00f78a24(0x3d1fcf8);
        uVar18 = func_0x00f78aec();
        uVar22 = 0x3d78af0;
      }
    }
    else {
      func_0x00f78a24(0x3d1fcf8);
      uVar18 = func_0x00f78aec();
      uVar22 = 0x3d7b910;
    }
    uVar22 = func_0x00f78a24(uVar22);
    lVar33 = func_0x00f78a24(0x3d69268);
    /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar18,uVar22);
    uVar26 = func_0x00f78a24(0x3d514f8);
    auVar55 = func_0x00f78ac0(uVar18,uVar26);
    plVar44 = auVar55._8_8_;
    uVar26 = auVar55._0_8_;
    if (lVar33 != (int)lVar33) {
      *(undefined8 *)((long)pppppuVar14 + -0x70) = uVar22;
      *(undefined8 *)((long)pppppuVar14 + -0x68) = uVar18;
      *(undefined1 **)((long)pppppuVar14 + -0x60) = (undefined1 *)((long)pppppuVar14 + -0x40);
      *(undefined **)((long)pppppuVar14 + -0x58) = &System_Array__CopyTo;
      func_0x00f78a24(0x3d1fcf8);
      uVar22 = func_0x00f78aec();
      uVar18 = func_0x00f78a24(0x3d79a60);
      uVar26 = func_0x00f78a24(0x3d69268);
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar22,uVar18,uVar26);
      uVar26 = func_0x00f78a24(0x3d51508);
      plVar44 = (long *)func_0x00f78ac0(uVar22,uVar26);
      *(undefined1 ******)((long)pppppuVar14 + -0xa0) = pppppuVar48;
      *(undefined1 (*) [8])((long)pppppuVar14 + -0x98) = auVar42;
      *(undefined8 *)((long)pppppuVar14 + -0x90) = uVar18;
      *(undefined8 *)((long)pppppuVar14 + -0x88) = uVar22;
      *(undefined1 **)((long)pppppuVar14 + -0x80) = (undefined1 *)((long)pppppuVar14 + -0x60);
      *(undefined **)((long)pppppuVar14 + -0x78) = &System_Array__get_LongLength;
      func_0x00f8078c(plVar44,0);
      goto code_r0x00f80814;
    }
    *(undefined1 ******)((long)pppppuVar14 + -0x80) = pppppuVar48;
    *(undefined1 (*) [8])((long)pppppuVar14 + -0x78) = auVar42;
    *(undefined8 *)((long)pppppuVar14 + -0x70) = uVar22;
    *(undefined8 *)((long)pppppuVar14 + -0x68) = uVar18;
    *(undefined1 **)((long)pppppuVar14 + -0x60) = (undefined1 *)((long)pppppuVar14 + -0x40);
    *(undefined **)((long)pppppuVar14 + -0x58) = &System_Array__CopyTo;
    if (plVar44 != (long *)0x0) goto code_r0x00f80814;
    uVar22 = func_0x00f807d0(uVar26,0);
    auVar58._8_8_ = uVar22;
    auVar58._0_8_ = uVar26;
    puVar30 = (undefined4 *)/*System.Array$$get_Length*/ func_0x0292ae44(uVar26);
    uVar22 = *(undefined8 *)((long)pppppuVar14 + -0x60);
    uVar26 = *(undefined8 *)((long)pppppuVar14 + -0x58);
    uVar18 = *(undefined8 *)((long)pppppuVar14 + -0x70);
    uVar43 = *(undefined8 *)((long)pppppuVar14 + -0x68);
    puVar15 = (undefined1 *)((long)pppppuVar14 + -0x50);
    pppppuVar48 = *(undefined1 ******)((long)pppppuVar14 + -0x80);
    auVar42 = *(undefined1 (*) [8])((long)pppppuVar14 + -0x78);
    puVar28 = (undefined4 *)0x0;
  }
  else {
    if (puVar28 == (undefined4 *)0x0) {
      func_0x00f78a24(0x3d1fcf0);
      uVar26 = func_0x00f78aec();
      uVar18 = 0x3d78ae8;
      uVar22 = 0;
      puVar28 = puVar30;
      puVar30 = param_5;
      goto code_r0x0292c538;
    }
    uVar22 = func_0x00f807d0(ppuVar34,0);
    auVar58._8_8_ = uVar22;
    auVar58._0_8_ = ppuVar34;
    func_0x00f807d0(puVar28,0);
    uVar22 = *(undefined8 *)((long)pppppuVar14 + -0x10);
    uVar26 = *(undefined8 *)((long)pppppuVar14 + -8);
    uVar18 = *(undefined8 *)((long)pppppuVar14 + -0x20);
    uVar43 = *(undefined8 *)((long)pppppuVar14 + -0x18);
    pppppuVar48 = *(undefined1 ******)((long)pppppuVar14 + -0x30);
    auVar42 = *(undefined1 (*) [8])((long)pppppuVar14 + -0x28);
    puVar15 = (undefined1 *)pppppuVar14;
  }
System_Array__Copy:
  uVar29 = auVar58._8_8_;
  plVar44 = auVar58._0_8_;
  *(undefined8 *)(puVar15 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar15 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar15 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar15 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar15 + -0x40) = unaff_x24;
  *(undefined4 **)(puVar15 + -0x38) = unaff_x23;
  *(undefined1 ******)(puVar15 + -0x30) = pppppuVar48;
  *(undefined1 (*) [8])(puVar15 + -0x28) = auVar42;
  *(undefined8 *)(puVar15 + -0x20) = uVar18;
  *(undefined8 *)(puVar15 + -0x18) = uVar43;
  *(undefined8 *)(puVar15 + -0x10) = uVar22;
  *(undefined8 *)(puVar15 + -8) = uVar26;
  if (plVar44 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0,uVar29);
    puVar19 = (undefined8 *)func_0x00f78aec();
    uVar22 = 0x3d7b900;
  }
  else {
    if (puVar28 != (undefined4 *)0x0) {
      if (-1 < (int)puVar30) {
code_r0x00f80814:
        return (undefined1 ***)(ulong)*(byte *)(*plVar44 + 0x12e);
      }
      uVar22 = func_0x00f78a24(0x3d75f70,uVar29);
      uVar22 = /*Locale$$GetText*/ func_0x02af42b4(uVar22,0);
      func_0x00f78a24(0x3d1fcf8);
      uVar18 = func_0x00f78aec();
      uVar26 = func_0x00f78a24(0x3d7a280);
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar18,uVar26,uVar22);
      uVar22 = func_0x00f78a24(0x3d514f0);
      func_0x00f78ac0(uVar18,uVar22);
      func_0x00f78af4();
      func_0x00f78a24(0x3d1fcf8);
      puVar19 = (undefined8 *)func_0x00f78aec();
      uVar18 = func_0x00f78a24(0x3d78af0);
      uVar22 = func_0x00f78a24(0x3d6de20);
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(puVar19,uVar18,uVar22);
      goto code_r0x0292b958;
    }
    func_0x00f78a24(0x3d1fcf0,uVar29);
    puVar19 = (undefined8 *)func_0x00f78aec();
    uVar22 = 0x3d78ae8;
  }
  uVar22 = func_0x00f78a24(uVar22);
  /*System.ArgumentNullException$$.ctor*/ func_0x02920400(puVar19,uVar22);
code_r0x0292b958:
  while( true ) {
    uVar22 = func_0x00f78a24(0x3d514f0);
    func_0x00f78ac0(puVar19,uVar22);
    uVar22 = func_0x00f78a24(0x3d23988);
    uVar41 = func_0x00f78ed4(uVar22,*(undefined8 *)*puVar19);
    if ((uVar41 & 1) == 0) break;
    puVar19 = (undefined8 *)*puVar19;
    ___cxa_end_catch();
    iVar17 = /*System.Array$$CanAssignArrayElement*/ func_0x0292e90c(*(undefined8 *)(puVar15 + -0x68),uVar18);
    if (iVar17 == 0) {
      puVar19 = (undefined8 *)/*System.Array$$CreateArrayTypeMismatchException*/ func_0x0292e8b8();
    }
  }
  puVar27 = (undefined8 *)___cxa_allocate_exception(8);
  *puVar27 = *puVar19;
  ___cxa_throw(puVar27,&DAT_03a5ed38,0);
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x292b9cc);
  (*pcVar10)();
}



// ============================================================
// RVA: 0x1504fc8 | Atlas.Stats.StatsManager.UnRegisterOnStatChange
// ============================================================

/* WARNING: Possible PIC construction at 0x029202dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01504948: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01504be4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01504cc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0292b50c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0292b43c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0292c6bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0292c6e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01505464: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0292c6ec) */
/* WARNING: Removing unreachable block (ram,0x0292c6c0) */
/* WARNING: Removing unreachable block (ram,0x0292c6f4) */
/* WARNING: Removing unreachable block (ram,0x0292c6c8) */
/* WARNING: Removing unreachable block (ram,0x0292c6cc) */
/* WARNING: Removing unreachable block (ram,0x0292b440) */
/* WARNING: Removing unreachable block (ram,0x0292b484) */
/* WARNING: Removing unreachable block (ram,0x0292b510) */
/* WARNING: Removing unreachable block (ram,0x0292b70c) */
/* WARNING: Removing unreachable block (ram,0x0292b524) */
/* WARNING: Removing unreachable block (ram,0x0292b740) */
/* WARNING: Removing unreachable block (ram,0x0292b528) */
/* WARNING: Removing unreachable block (ram,0x0292b778) */
/* WARNING: Removing unreachable block (ram,0x0292b52c) */
/* WARNING: Removing unreachable block (ram,0x0292b548) */
/* WARNING: Removing unreachable block (ram,0x0292b56c) */
/* WARNING: Removing unreachable block (ram,0x0292b820) */
/* WARNING: Removing unreachable block (ram,0x0292b588) */
/* WARNING: Removing unreachable block (ram,0x0292b850) */
/* WARNING: Removing unreachable block (ram,0x0292b59c) */
/* WARNING: Removing unreachable block (ram,0x0292b5ac) */
/* WARNING: Removing unreachable block (ram,0x0292b5d0) */
/* WARNING: Removing unreachable block (ram,0x0292b5ec) */
/* WARNING: Removing unreachable block (ram,0x0292b634) */
/* WARNING: Removing unreachable block (ram,0x0292b638) */
/* WARNING: Removing unreachable block (ram,0x0292b5f4) */
/* WARNING: Removing unreachable block (ram,0x0292b604) */
/* WARNING: Removing unreachable block (ram,0x0292b664) */
/* WARNING: Removing unreachable block (ram,0x0292b60c) */
/* WARNING: Removing unreachable block (ram,0x01504cc4) */
/* WARNING: Removing unreachable block (ram,0x01504ce8) */
/* WARNING: Removing unreachable block (ram,0x01504cc8) */
/* WARNING: Removing unreachable block (ram,0x01504be8) */
/* WARNING: Removing unreachable block (ram,0x0150494c) */
/* WARNING: Removing unreachable block (ram,0x01504950) */
/* WARNING: Removing unreachable block (ram,0x0150496c) */
/* WARNING: Removing unreachable block (ram,0x029202e0) */
/* WARNING: Removing unreachable block (ram,0x029202e4) */
/* WARNING: Removing unreachable block (ram,0x0292030c) */
/* WARNING: Removing unreachable block (ram,0x02920300) */
/* WARNING: Removing unreachable block (ram,0x01505468) */
/* WARNING: Removing unreachable block (ram,0x0150547c) */
/* WARNING: Type propagation algorithm not settling */

uint *******
Atlas_Stats_StatsManager__UnRegisterOnStatChange
          (uint *******param_1,uint *******param_2,uint *******param_3,undefined8 param_4,
          uint *******param_5)

{
  uint *****pppppuVar1;
  uint *****pppppuVar2;
  uint uVar3;
  ushort uVar4;
  char cVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  code *pcVar10;
  uint *******pppppppuVar11;
  undefined1 *puVar12;
  int iVar13;
  undefined8 uVar15;
  uint *******pppppppuVar16;
  uint *******pppppppuVar17;
  uint *******pppppppuVar18;
  undefined8 uVar19;
  long lVar20;
  int iVar14;
  long *plVar21;
  uint **ppuVar22;
  uint ***pppuVar23;
  uint ***pppuVar24;
  undefined8 uVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 uVar28;
  uint *******pppppppuVar29;
  uint ******ppppppuVar30;
  uint ****ppppuVar31;
  ulong uVar32;
  uint uVar33;
  ulong uVar34;
  int *piVar35;
  long lVar36;
  ulong uVar37;
  undefined8 uVar38;
  uint *****pppppuVar39;
  uint *******pppppppuVar40;
  uint *******pppppppuVar41;
  uint *******pppppppuVar42;
  uint *****pppppuVar43;
  uint *******unaff_x23;
  uint ******unaff_x24;
  uint ******unaff_x25;
  uint *****pppppuVar44;
  uint ******unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  uint *******pppppppuVar45;
  undefined *puVar46;
  uint ******ppppppuVar47;
  uint *******pppppppuVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [12];
  uint ******appppppuStack_160 [16];
  uint ******appppppuStack_e0 [2];
  uint *******pppppppuStack_d0;
  uint ******ppppppuStack_c8;
  uint *******apppppppuStack_c0 [10];
  uint ******ppppppuStack_70;
  uint *******pppppppuStack_68;
  uint *******pppppppuStack_60;
  uint *******pppppppuStack_58;
  uint *******pppppppuStack_50;
  uint *******pppppppuStack_48;
  uint ******ppppppuStack_40;
  undefined *puStack_38;
  
  pppppppuVar42 = (uint *******)0x3eb4000;
  pppppppuVar18 = param_3;
  if ((bRam0000000003eb4d0a & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eb4d0a = 1;
  }
  ppppppuVar30 = param_1[5];
  if (ppppppuVar30 == (uint ******)0x0) {
    func_0x00f78af4();
  }
  else if ((uint)param_2 < *(uint *)(ppppppuVar30 + 3)) {
    ppppppuVar30 = ppppppuVar30 + (long)(int)(uint)param_2 + 4;
    pppppppuVar18 = (uint *******)/*System.Delegate$$Remove*/ func_0x02ab1bac(*ppppppuVar30,param_3,0);
    pppppppuVar42 = (uint *******)0x0;
    if (pppppppuVar18 != (uint *******)0x0) {
      if ((*pppppppuVar18 == /*System.Action_TypeInfo*/ ppppppuRam0000000003d1fa78) &&
         (*ppppppuVar30 = (uint *****)pppppppuVar18, *pppppppuVar18 == /*System.Action_TypeInfo*/ ppppppuRam0000000003d1fa78))
      {
        return pppppppuVar18;
      }
      pppppppuVar42 = (uint *******)func_0x00f78e5c();
    }
    *ppppppuVar30 = (uint *****)pppppppuVar42;
    return pppppppuVar42;
  }
  uVar19 = func_0x00f78b24();
  lVar20 = func_0x00f78ac0(uVar19,0);
  pppppppuStack_50 = &ppppppuStack_40;
  puStack_38 = &Atlas_Stats_StatsManager__ResetStats;
  ppppppuStack_40 = (uint ******)&stack0xfffffffffffffff0;
  if (*(long *)(lVar20 + 0x20) == 0) {
    auVar49 = func_0x00f78af4();
    pppppppuStack_60 = (uint *******)&pppppppuStack_50;
    pppppppuStack_48 = (uint *******)&Atlas_Stats_StatsManager__ResetAndSet;
    lVar20 = *(long *)(auVar49._0_8_ + 0x20);
    auVar49._8_8_ = auVar49._8_8_;
    auVar49._0_8_ = lVar20;
    if (lVar20 != 0) goto code_r0x015048e0;
    auVar49 = func_0x00f78af4();
    pppppppuVar40 = auVar49._0_8_;
    pppppppuStack_58 = (uint *******)&Atlas_Stats_StatsManager__IncrementStat;
    ppppppuStack_70 = (uint ******)param_2;
    pppppppuStack_68 = param_3;
    pppppppuVar16 = (uint *******)&pppppppuStack_50;
    if (pppppppuVar40[4] == (uint ******)0x0) {
code_r0x01505118:
      pppppppuStack_60 = pppppppuVar16;
      func_0x00f78af4();
    }
    else {
      Atlas_Stats_StatsData__IncrementStat();
      ppppppuVar30 = pppppppuVar40[5];
      param_3 = auVar49._8_8_;
      pppppppuVar16 = pppppppuStack_60;
      if (ppppppuVar30 == (uint ******)0x0) goto code_r0x01505118;
      if (auVar49._8_4_ < *(uint *)(ppppppuVar30 + 3)) {
        pppppppuVar18 = (uint *******)ppppppuVar30[(long)(int)auVar49._8_4_ + 4];
        if (pppppppuVar18 == (uint *******)0x0) {
          return (uint *******)0x0;
        }
        pppppppuVar16 = (uint *******)&pppppppuStack_50;
        pppppppuVar40 = pppppppuStack_68;
        pppppppuVar17 = (uint *******)ppppppuStack_70;
        pppppppuVar29 = pppppppuStack_60;
        pppppppuVar41 = pppppppuStack_58;
        goto System_Action__Invoke;
      }
    }
    uVar19 = func_0x00f78b24();
    auVar49 = func_0x00f78ac0(uVar19,0);
    pppppppuVar16 = auVar49._0_8_;
    apppppppuStack_c0[9] = (uint *******)&Atlas_Stats_StatsManager__DecrementStat;
    apppppppuStack_c0[6] = pppppppuVar40;
    apppppppuStack_c0[7] = param_3;
    apppppppuStack_c0[8] = (uint *******)&pppppppuStack_60;
    if (pppppppuVar16[4] == (uint ******)0x0) {
code_r0x01505184:
      func_0x00f78af4();
    }
    else {
      Atlas_Stats_StatsData__DecrementStat();
      ppppppuVar30 = pppppppuVar16[5];
      param_3 = auVar49._8_8_;
      if (ppppppuVar30 == (uint ******)0x0) goto code_r0x01505184;
      if (auVar49._8_4_ < *(uint *)(ppppppuVar30 + 3)) {
        pppppppuVar18 = (uint *******)ppppppuVar30[(long)(int)auVar49._8_4_ + 4];
        if (pppppppuVar18 == (uint *******)0x0) {
          return (uint *******)0x0;
        }
        pppppppuVar16 = &ppppppuStack_70;
        pppppppuVar40 = apppppppuStack_c0[7];
        pppppppuVar17 = apppppppuStack_c0[6];
        pppppppuVar29 = apppppppuStack_c0[8];
        pppppppuVar41 = apppppppuStack_c0[9];
        goto System_Action__Invoke;
      }
    }
    uVar19 = func_0x00f78b24();
    auVar49 = func_0x00f78ac0(uVar19,0);
    pppppppuVar17 = auVar49._8_8_;
    lVar20 = auVar49._0_8_;
    apppppppuStack_c0[0] = (uint *******)0x3eb4000;
    apppppppuStack_c0[5] = (uint *******)&Atlas_Stats_StatsManager__SetStat;
    pppppppuVar40 = (uint *******)(apppppppuStack_c0 + 4);
    apppppppuStack_c0[1] = param_1;
    apppppppuStack_c0[2] = pppppppuVar16;
    apppppppuStack_c0[3] = param_3;
    apppppppuStack_c0[4] = (uint *******)(apppppppuStack_c0 + 8);
    if (*(long *)(lVar20 + 0x20) == 0) {
code_r0x01505234:
      func_0x00f78af4();
    }
    else {
      param_1 = (uint *******)Atlas_Stats_StatsData__GetStat();
      param_3 = pppppppuVar17;
      pppppppuVar42 = pppppppuVar18;
      if (*(long *)(lVar20 + 0x20) == 0) goto code_r0x01505234;
      Atlas_Stats_StatsData__SetStat(*(long *)(lVar20 + 0x20),pppppppuVar17,pppppppuVar18);
      if (*(long *)(lVar20 + 0x20) == 0) goto code_r0x01505234;
      pppppppuVar18 =
           (uint *******)Atlas_Stats_StatsData__GetStat(*(long *)(lVar20 + 0x20),pppppppuVar17);
      if ((int)pppppppuVar18 == (int)param_1) {
        return pppppppuVar18;
      }
      lVar36 = *(long *)(lVar20 + 0x28);
      if (lVar36 == 0) goto code_r0x01505234;
      if (auVar49._8_4_ < *(uint *)(lVar36 + 0x18)) {
        pppppppuVar18 = *(uint ********)(lVar36 + (long)(int)auVar49._8_4_ * 8 + 0x20);
        if (pppppppuVar18 == (uint *******)0x0) {
          return (uint *******)0x0;
        }
        pppppppuVar16 = (uint *******)(apppppppuStack_c0 + 6);
        pppppppuVar40 = apppppppuStack_c0[3];
        pppppppuVar17 = apppppppuStack_c0[2];
        param_1 = apppppppuStack_c0[1];
        pppppppuVar42 = apppppppuStack_c0[0];
        pppppppuVar29 = apppppppuStack_c0[4];
        pppppppuVar41 = apppppppuStack_c0[5];
System_Action__Invoke:
        uVar19 = 0;
        pppppppuVar16[0xfffffffffffffff6] = unaff_x26;
        pppppppuVar16[0xfffffffffffffff7] = unaff_x25;
        pppppppuVar16[0xfffffffffffffff8] = unaff_x24;
        pppppppuVar16[0xfffffffffffffff9] = (uint ******)unaff_x23;
        pppppppuVar16[0xfffffffffffffffa] = (uint ******)pppppppuVar42;
        pppppppuVar16[0xfffffffffffffffb] = (uint ******)param_1;
        pppppppuVar16[0xfffffffffffffffc] = (uint ******)pppppppuVar17;
        pppppppuVar16[0xfffffffffffffffd] = (uint ******)pppppppuVar40;
        pppppppuVar16[0xfffffffffffffffe] = (uint ******)pppppppuVar29;
        pppppppuVar16[0xffffffffffffffff] = (uint ******)pppppppuVar41;
        pppppppuVar16[0xfffffffffffffff5] = (uint ******)pppppppuVar18;
        ppppppuVar30 = pppppppuVar18[0xd];
        if (ppppppuVar30 == (uint ******)0x0) {
          pppppppuVar42 = pppppppuVar16 + 0xfffffffffffffff5;
          pppppuVar39 = (uint *****)0x1;
        }
        else {
          pppppuVar39 = ppppppuVar30[3];
          if (pppppuVar39 == (uint *****)0x0) {
            return pppppppuVar18;
          }
          pppppppuVar42 = (uint *******)(ppppppuVar30 + 4);
        }
        pppppuVar44 = (uint *****)0x0;
        do {
          ppppppuVar30 = pppppppuVar42[(long)pppppuVar44];
          pppppuVar43 = ppppppuVar30[2];
          pppppuVar1 = ppppppuVar30[4];
          pppppuVar2 = ppppppuVar30[5];
          if (*(short *)(pppppuVar2 + 9) == -1) {
            func_0x00f78ad8(pppppuVar2,uVar19);
          }
          iVar14 = func_0x00f78a4c(pppppuVar2);
          if (iVar14 == 0) {
            if ((((pppppuVar1 == (uint *****)0x0) || (*(short *)(pppppuVar2 + 9) == -1)) ||
                ((*(byte *)((long)*pppppuVar1 + 0x115) & 1) != 0)) ||
               (pppppppuVar18[3] == (uint ******)0x0)) goto code_r0x02924d98;
            iVar14 = func_0x00f78a44(pppppuVar2);
            iVar13 = func_0x00f78ec0(pppppuVar2);
            if (iVar14 == 0) {
              uVar4 = *(ushort *)(pppppuVar2 + 9);
              uVar37 = (ulong)uVar4;
              if (iVar13 == 0) {
                auVar49 = (*(code *)(*pppppuVar1)[uVar37 * 2 + 0x27])
                                    (pppppuVar1,(*pppppuVar1)[uVar37 * 2 + 0x28]);
                goto code_r0x02924da4;
              }
              ppuVar22 = (uint **)func_0x00f78a48(pppppuVar2);
              ppppuVar31 = *pppppuVar1;
              uVar32 = (ulong)*(ushort *)((long)ppppuVar31 + 0x12a);
              if (uVar32 != 0) {
                pppuVar23 = ppppuVar31[0x16] + 1;
                do {
                  if (pppuVar23[0xffffffffffffffff] == ppuVar22) {
                    ppppuVar31 = ppppuVar31 +
                                 (long)(int)(*(uint *)pppuVar23 + (uint)uVar4) * 2 + 0x27;
                    goto code_r0x02924e68;
                  }
                  pppuVar23 = pppuVar23 + 2;
                  uVar32 = uVar32 - 1;
                } while (uVar32 != 0);
              }
              ppppuVar31 = (uint ****)func_0x00fac1f0(pppppuVar1,ppuVar22,uVar37);
code_r0x02924e68:
              pppuVar23 = *ppppuVar31;
              pppuVar24 = ppppuVar31[1];
            }
            else {
              if (iVar13 == 0) {
                pppuVar23 = (*pppppuVar1)[(ulong)*(ushort *)(pppppuVar2 + 9) * 2 + 0x28];
              }
              else {
                ppppuVar31 = *pppppuVar1;
                uVar37 = (ulong)*(ushort *)((long)ppppuVar31 + 0x12a);
                if (uVar37 != 0) {
                  pppuVar23 = ppppuVar31[0x16] + 1;
                  do {
                    if ((uint ****)pppuVar23[0xffffffffffffffff] == pppppuVar2[3]) {
                      ppppuVar31 = ppppuVar31 +
                                   (long)(int)(*(uint *)pppuVar23 +
                                              (uint)*(ushort *)(pppppuVar2 + 9)) * 2 + 0x27;
                      goto code_r0x02924e40;
                    }
                    pppuVar23 = pppuVar23 + 2;
                    uVar37 = uVar37 - 1;
                  } while (uVar37 != 0);
                }
                ppppuVar31 = (uint ****)func_0x00fac1f0(pppppuVar1);
code_r0x02924e40:
                pppuVar23 = ppppuVar31[1];
              }
              pppuVar24 = (uint ***)func_0x00f78acc(pppuVar23,pppppuVar2);
              pppuVar23 = (uint ***)*pppuVar24;
            }
            auVar49 = (*(code *)pppuVar23)(pppppuVar1,pppuVar24);
          }
          else if (*(char *)((long)pppppuVar2 + 0x4a) == '\0') {
            auVar49 = (*(code *)pppppuVar43)(pppppuVar2);
          }
          else {
code_r0x02924d98:
            auVar49 = (*(code *)pppppuVar43)(pppppuVar1,pppppuVar2);
          }
code_r0x02924da4:
          uVar19 = auVar49._8_8_;
          pppppuVar44 = (uint *****)((long)pppppuVar44 + 1);
          if (pppppuVar44 == pppppuVar39) {
            return auVar49._0_8_;
          }
        } while( true );
      }
    }
    auVar53._8_8_ = param_3;
    auVar53._0_8_ = lVar20;
    auVar49._8_8_ = lVar20;
    auVar49._0_8_ = param_3;
    auVar7._8_8_ = lVar20;
    auVar7._0_8_ = param_3;
    auVar50._8_8_ = lVar20;
    auVar50._0_8_ = param_3;
    uVar19 = func_0x00f78b24();
    auVar55 = func_0x00f78ac0(uVar19,0);
    ppppppuStack_c8 = (uint ******)&Atlas_Stats_StatsManager__GetStat;
    lVar20 = *(long *)(auVar55._0_8_ + 0x20);
    auVar55._8_4_ = auVar55._8_4_;
    auVar55._0_8_ = lVar20;
    pppppppuStack_d0 = pppppppuVar40;
    if (lVar20 == 0) {
      auVar55 = func_0x00f78af4();
      pppppppuVar40 = appppppuStack_e0;
      appppppuStack_e0[1] = (uint ******)&Atlas_Stats_StatsManager__GetTransactionStat;
      lVar20 = *(long *)(auVar55._0_8_ + 0x18);
      auVar55._8_4_ = auVar55._8_4_;
      auVar55._0_8_ = lVar20;
      if (lVar20 == 0) {
        appppppuStack_e0[0] = (uint ******)&pppppppuStack_d0;
        auVar55 = func_0x00f78af4();
        ppuVar22 = (uint **)(appppppuStack_160 + 0xe);
        appppppuStack_160[0xf] = (uint ******)&Atlas_Stats_StatsManager__GetCommittedStat;
        lVar20 = *(long *)(auVar55._0_8_ + 0x10);
        auVar55._8_4_ = auVar55._8_4_;
        auVar55._0_8_ = lVar20;
        if (lVar20 == 0) {
          puVar46 = &Atlas_Stats_StatsManager__GetGlobalStat;
          appppppuStack_160[0xe] = (uint ******)appppppuStack_e0;
          auVar52 = func_0x00f78af4();
          puVar12 = (undefined1 *)register0x00000008;
          do {
            lVar20 = auVar52._0_8_;
            *(uint ********)(puVar12 + -0x120) = pppppppuVar42;
            *(uint ********)(puVar12 + -0x118) = param_1;
            *(undefined1 (*) [16])(puVar12 + -0x110) = auVar53;
            *(uint ***)(puVar12 + -0x100) = ppuVar22;
            *(undefined **)(puVar12 + -0xf8) = puVar46;
            uVar19 = auVar53._8_8_;
            if (*(long *)(lVar20 + 0x10) != 0) {
              param_1 = (uint *******)Atlas_Stats_StatsData__GetStat();
              uVar19 = auVar52._8_8_;
              if (*(long *)(lVar20 + 0x18) != 0) {
                iVar14 = Atlas_Stats_StatsData__GetStat(*(long *)(lVar20 + 0x18),auVar52._8_8_);
                return (uint *******)(ulong)(uint)(iVar14 + (int)param_1);
              }
            }
            auVar8._8_8_ = uVar19;
            auVar8._0_8_ = lVar20;
            auVar49 = func_0x00f78af4();
            lVar36 = auVar49._8_8_;
            *(uint *******)(puVar12 + -0x160) = unaff_x24;
            *(uint ********)(puVar12 + -0x158) = unaff_x23;
            *(uint ********)(puVar12 + -0x150) = pppppppuVar42;
            *(uint ********)(puVar12 + -0x148) = param_1;
            *(long *)(puVar12 + -0x140) = lVar20;
            *(undefined8 *)(puVar12 + -0x138) = uVar19;
            *(undefined1 **)(puVar12 + -0x130) = puVar12 + -0x100;
            *(undefined **)(puVar12 + -0x128) = &Atlas_Stats_StatsManager__GetSummedCommittedStats;
            if (lVar36 == 0) {
code_r0x01505370:
              func_0x00f78af4();
            }
            else {
              if ((int)*(ulong *)(lVar36 + 0x18) < 1) {
                return (uint *******)0x0;
              }
              param_1 = (uint *******)0x0;
              pppppppuVar42 = (uint *******)0x0;
              pppppppuVar18 = (uint *******)(*(ulong *)(lVar36 + 0x18) & 0xffffffff);
              unaff_x23 = (uint *******)(lVar36 + 0x20);
              while (auVar8 = auVar49, pppppppuVar42 < pppppppuVar18) {
                lVar20 = *(long *)(auVar49._0_8_ + 0x10);
                if (lVar20 == 0) goto code_r0x01505370;
                iVar14 = Atlas_Stats_StatsData__GetStat
                                   (lVar20,*(undefined4 *)
                                            ((long)unaff_x23 + (long)pppppppuVar42 * 4));
                param_1 = (uint *******)(ulong)(uint)(iVar14 + (int)param_1);
                pppppppuVar42 = (uint *******)((long)pppppppuVar42 + 1);
                pppppppuVar18 = (uint *******)(ulong)*(uint *)(lVar36 + 0x18);
                if ((long)(int)*(uint *)(lVar36 + 0x18) <= (long)pppppppuVar42) {
                  return param_1;
                }
              }
            }
            uVar19 = func_0x00f78b24();
            auVar49 = func_0x00f78ac0(uVar19,0);
            lVar20 = auVar49._8_8_;
            *(uint *******)(puVar12 + -0x1a0) = unaff_x24;
            *(uint ********)(puVar12 + -0x198) = unaff_x23;
            *(uint ********)(puVar12 + -400) = pppppppuVar42;
            *(uint ********)(puVar12 + -0x188) = param_1;
            *(undefined1 (*) [16])(puVar12 + -0x180) = auVar8;
            *(undefined1 **)(puVar12 + -0x170) = puVar12 + -0x130;
            *(undefined **)(puVar12 + -0x168) = &Atlas_Stats_StatsManager__GetSummedTransactionStats
            ;
            if (lVar20 == 0) {
code_r0x01505408:
              func_0x00f78af4();
            }
            else {
              if ((int)*(ulong *)(lVar20 + 0x18) < 1) {
                return (uint *******)0x0;
              }
              param_1 = (uint *******)0x0;
              pppppppuVar42 = (uint *******)0x0;
              pppppppuVar18 = (uint *******)(*(ulong *)(lVar20 + 0x18) & 0xffffffff);
              unaff_x23 = (uint *******)(lVar20 + 0x20);
              while (auVar8 = auVar49, pppppppuVar42 < pppppppuVar18) {
                lVar36 = *(long *)(auVar49._0_8_ + 0x18);
                if (lVar36 == 0) goto code_r0x01505408;
                iVar14 = Atlas_Stats_StatsData__GetStat
                                   (lVar36,*(undefined4 *)
                                            ((long)unaff_x23 + (long)pppppppuVar42 * 4));
                param_1 = (uint *******)(ulong)(uint)(iVar14 + (int)param_1);
                pppppppuVar42 = (uint *******)((long)pppppppuVar42 + 1);
                pppppppuVar18 = (uint *******)(ulong)*(uint *)(lVar20 + 0x18);
                if ((long)(int)*(uint *)(lVar20 + 0x18) <= (long)pppppppuVar42) {
                  return param_1;
                }
              }
            }
            uVar19 = func_0x00f78b24();
            auVar53 = func_0x00f78ac0(uVar19,0);
            lVar20 = auVar53._8_8_;
            *(uint *******)(puVar12 + -0x1e0) = unaff_x24;
            *(uint ********)(puVar12 + -0x1d8) = unaff_x23;
            *(uint ********)(puVar12 + -0x1d0) = pppppppuVar42;
            *(uint ********)(puVar12 + -0x1c8) = param_1;
            *(undefined1 (*) [16])(puVar12 + -0x1c0) = auVar8;
            *(undefined1 **)(puVar12 + -0x1b0) = puVar12 + -0x170;
            *(undefined **)(puVar12 + -0x1a8) = &Atlas_Stats_StatsManager__GetSummedGlobalStats;
            ppuVar22 = (uint **)(puVar12 + -0x1b0);
            if (lVar20 == 0) goto code_r0x015054a8;
            if ((int)*(ulong *)(lVar20 + 0x18) < 1) {
              return (uint *******)0x0;
            }
            param_1 = (uint *******)0x0;
            pppppppuVar42 = (uint *******)0x0;
            unaff_x23 = (uint *******)(lVar20 + 0x20);
            if ((*(ulong *)(lVar20 + 0x18) & 0xffffffff) == 0) {
              uVar19 = func_0x00f78b24();
              func_0x00f78ac0(uVar19,0);
              auVar8 = auVar53;
code_r0x015054a8:
              uVar19 = func_0x00f78af4();
              *(uint ********)(puVar12 + -0x210) = pppppppuVar42;
              *(uint ********)(puVar12 + -0x208) = param_1;
              *(undefined1 (*) [16])(puVar12 + -0x200) = auVar8;
              *(uint ***)(puVar12 + -0x1f0) = ppuVar22;
              *(undefined **)(puVar12 + -0x1e8) = &Atlas_Stats_StatsManager__GetStatFromString;
              if ((bRam0000000003eb4d0b & 1) == 0) {
                func_0x00f78a20(0x3d24d58);
                bRam0000000003eb4d0b = 1;
              }
              *(undefined4 *)(puVar12 + -0x214) = 0;
              if (((*(ushort *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              /*Atlas.Stats.StatsManager$$TryGetStatFromString*/ func_0x0150552c(uVar19,puVar12 + -0x214);
              return (uint *******)(ulong)*(uint *)(puVar12 + -0x214);
            }
            auVar52._8_4_ = *(undefined4 *)unaff_x23;
            auVar52._0_8_ = auVar53._0_8_;
            auVar52._12_4_ = 0;
            puVar46 = &UNK_01505468;
            puVar12 = puVar12 + -0xf0;
          } while( true );
        }
        pppppppuVar18 = appppppuStack_e0;
        ppppppuVar30 = (uint ******)&Atlas_Stats_StatsManager__GetCommittedStat;
        appppppuStack_160[0xe] = (uint ******)appppppuStack_e0;
      }
      else {
        pppppppuVar18 = (uint *******)&pppppppuStack_d0;
        ppppppuVar30 = (uint ******)&Atlas_Stats_StatsManager__GetTransactionStat;
        pppppppuVar40 = (uint *******)&pppppppuStack_d0;
        appppppuStack_e0[0] = (uint ******)&pppppppuStack_d0;
        auVar49 = auVar7;
      }
    }
    else {
      pppppppuVar18 = (uint *******)apppppppuStack_c0;
      ppppppuVar30 = ppppppuStack_c8;
      auVar49 = auVar50;
    }
code_r0x01504b20:
    pppppppuVar18[0xfffffffffffffffe] = (uint ******)pppppppuVar40;
    pppppppuVar18[0xffffffffffffffff] = ppppppuVar30;
    lVar20 = *(long *)(auVar55._0_8_ + 0x10);
    if (lVar20 == 0) {
      func_0x00f78af4();
    }
    else if (auVar55._8_4_ < *(uint *)(lVar20 + 0x18)) {
      return (uint *******)(ulong)*(uint *)(lVar20 + (long)(int)auVar55._8_4_ * 4 + 0x20);
    }
    uVar19 = func_0x00f78b24();
    auVar51 = func_0x00f78ac0(uVar19,0);
    lVar20 = auVar51._8_8_;
    pppppppuVar40 = auVar51._0_8_;
    pppppppuVar11 = pppppppuVar18 + 0xfffffffffffffff6;
    pppppppuVar18[0xfffffffffffffff6] = unaff_x24;
    pppppppuVar18[0xfffffffffffffff7] = (uint ******)unaff_x23;
    pppppppuVar18[0xfffffffffffffff8] = (uint ******)pppppppuVar42;
    pppppppuVar18[0xfffffffffffffff9] = (uint ******)param_1;
    pppppppuVar18[0xfffffffffffffffa] = auVar49._8_8_;
    pppppppuVar18[0xfffffffffffffffb] = auVar49._0_8_;
    pppppppuVar18[0xfffffffffffffffc] = (uint ******)(pppppppuVar18 + 0xfffffffffffffffe);
    pppppppuVar18[0xfffffffffffffffd] = (uint ******)Atlas_Stats_StatsData__UpdateToLargestValues;
    pppppppuVar16 = pppppppuVar40;
    if ((bRam0000000003eb4d06 & 1) == 0) {
      pppppppuVar16 = (uint *******)func_0x00f78a20(0x3d1f100);
      bRam0000000003eb4d06 = 1;
    }
    ppppppuVar30 = pppppppuVar40[2];
    if (((ppppppuVar30 == (uint ******)0x0) || (lVar20 == 0)) || (*(long *)(lVar20 + 0x10) == 0)) {
LAB_01504c70:
      func_0x00f78af4();
      pppppppuVar18[0xfffffffffffffff0] = (uint ******)pppppppuVar42;
      pppppppuVar18[0xfffffffffffffff1] = ppppppuVar30;
      *(undefined1 (*) [16])(pppppppuVar18 + 0xfffffffffffffff2) = auVar51;
      pppppppuVar18[0xfffffffffffffff4] = (uint ******)(pppppppuVar18 + 0xfffffffffffffffc);
      pppppppuVar18[0xfffffffffffffff5] = (uint ******)Atlas_Stats_StatsData__Clone;
      if ((bRam0000000003eb4d07 & 1) == 0) {
        func_0x00f78a20(0x3d24d50);
        bRam0000000003eb4d07 = 1;
      }
      pppppppuVar42 = (uint *******)func_0x00f78aec(/*Atlas.Stats.StatsData_TypeInfo*/ uRam0000000003d24d50);
      return pppppppuVar42;
    }
    pppppppuVar29 = (uint *******)(ulong)*(uint *)(ppppppuVar30 + 3);
    pppppppuVar42 = *(uint ********)(*(long *)(lVar20 + 0x10) + 0x18);
    if ((int)pppppppuVar42 <= (int)*(uint *)(ppppppuVar30 + 3)) {
      if (0 < (int)pppppppuVar42) {
        if (ppppppuVar30 == (uint ******)0x0) goto LAB_01504c70;
        uVar37 = 0;
        uVar3 = *(uint *)(ppppppuVar30 + 3);
        do {
          if (uVar3 == uVar37) {
LAB_01504c64:
            uVar19 = func_0x00f78b24();
            func_0x00f78ac0(uVar19,0);
            goto LAB_01504c70;
          }
          lVar36 = *(long *)(lVar20 + 0x10);
          if (lVar36 == 0) goto LAB_01504c70;
          if ((*(uint *)(lVar36 + 0x18) <= uVar37) || (uVar3 <= uVar37)) goto LAB_01504c64;
          iVar14 = *(int *)((long)ppppppuVar30 + (uVar37 + 8) * 4);
          iVar13 = *(int *)(lVar36 + uVar37 * 4 + 0x20);
          if (iVar14 <= iVar13) {
            iVar14 = iVar13;
          }
          *(int *)((long)ppppppuVar30 + (uVar37 + 8) * 4) = iVar14;
          uVar37 = uVar37 + 1;
        } while (((ulong)pppppppuVar42 & 0xffffffff) != uVar37);
      }
      return pppppppuVar16;
    }
    pppppppuVar17 = (uint *******)func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,pppppppuVar42);
    ppppppuVar30 = pppppppuVar40[2];
    pppppppuVar41 = pppppppuVar17;
    unaff_x23 = pppppppuVar29;
    pppppppuVar45 = pppppppuVar18 + 0xfffffffffffffffc;
    pppppppuVar48 = (uint *******)0x1504be8;
  }
  else {
    pppppppuVar16 = *(uint ********)(*(long *)(lVar20 + 0x20) + 0x10);
    if (pppppppuVar16 != (uint *******)0x0) {
      iVar14 = *(int *)(pppppppuVar16 + 3);
      pppppppuStack_60 = (uint *******)0x3eb4000;
      pppppppuStack_48 = param_3;
      pppppppuStack_58 = param_1;
      pppppppuStack_50 = param_2;
      if (pppppppuVar16 == (uint *******)0x0) {
        func_0x00f78a24(0x3d1fcf0,0,iVar14,0);
        pppppppuVar42 = (uint *******)func_0x00f78aec();
        uVar19 = func_0x00f78a24(0x3d77d18);
        /*System.ArgumentNullException$$.ctor*/ func_0x02920400(pppppppuVar42,uVar19);
      }
      else {
        if (iVar14 < 0) {
          func_0x00f78a24(0x3d22738,0,iVar14,0);
          pppppppuVar42 = (uint *******)func_0x00f78aec();
          uVar19 = 0x3d7a288;
        }
        else {
          iVar13 = func_0x00f807d0(pppppppuVar16,0);
          param_2 = pppppppuVar16;
          if (iVar13 < 1) {
            uVar3 = -iVar13;
            iVar13 = /*System.Array$$get_Length*/ func_0x0292ae44(pppppppuVar16);
            if ((int)uVar3 <= iVar13 - iVar14) {
              uVar19 = func_0x00f76cf0(*pppppppuVar16);
              uVar15 = func_0x00faf4d8(pppppppuVar16,uVar19,(long)(int)uVar3);
              pppppppuVar42 = (uint *******)_bzero(uVar15,(long)((int)uVar19 * iVar14));
              return pppppppuVar42;
            }
            func_0x00f78a24(0x3d22738);
            pppppppuVar42 = (uint *******)func_0x00f78aec();
            uVar19 = 0x3d79a88;
            param_1 = (uint *******)(ulong)uVar3;
          }
          else {
            func_0x00f78a24(0x3d22738);
            pppppppuVar42 = (uint *******)func_0x00f78aec();
            uVar19 = 0x3d79a90;
            param_1 = (uint *******)0x0;
          }
        }
        uVar19 = func_0x00f78a24(uVar19);
        /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(pppppppuVar42,uVar19,0);
      }
      uVar19 = func_0x00f78a24(0x3d514d8);
      plVar21 = (long *)func_0x00f78ac0(pppppppuVar42,uVar19);
      pppppppuVar16 = (uint *******)(apppppppuStack_c0 + 8);
      apppppppuStack_c0[8] = param_2;
      apppppppuStack_c0[9] = pppppppuVar42;
      ppppppuStack_70 = (uint ******)&ppppppuStack_40;
      pppppppuStack_68 = (uint *******)&Mono_Security_Cryptography_ARC4Managed__get_Key;
      pppppppuVar18 = &ppppppuStack_70;
      auVar49._8_8_ = 0x3eb8000;
      auVar49._0_8_ = plVar21;
      auVar9._8_8_ = 0x3eb8000;
      auVar9._0_8_ = plVar21;
      if ((bRam0000000003eb8e74 & 1) == 0) {
        func_0x00f78a20(0x3d1eda0);
        bRam0000000003eb8e74 = 1;
      }
      ppppppuVar30 = (uint ******)plVar21[4];
      pppppppuVar40 = param_1;
      if (ppppppuVar30 == (uint ******)0x0) {
        (**(code **)(*plVar21 + 0x2b8))(plVar21,*(undefined8 *)(*plVar21 + 0x2c0));
        ppppppuVar30 = (uint ******)plVar21[4];
        if (ppppppuVar30 == (uint ******)0x0) {
          ppppppuVar47 = (uint ******)&System_Array__Clone;
          ppppppuVar30 = (uint ******)func_0x00f78af4();
          goto DAT_00f7ffc4;
        }
      }
      ppppppuVar47 = (uint ******)&UNK_029202e0;
      pppppppuVar16 = (uint *******)(apppppppuStack_c0 + 8);
      auVar49 = auVar9;
      goto DAT_00f7ffc4;
    }
    auVar49 = func_0x00f78af4();
    pppppppuStack_48 = (uint *******)Atlas_Stats_StatsData__ResetAndSet;
code_r0x015048e0:
    lVar20 = auVar49._8_8_;
    iVar14 = (int)pppppppuVar18;
    pppppppuVar11 = &ppppppuStack_40;
    pppppppuStack_50 = &ppppppuStack_40;
    pppppppuVar16 = &ppppppuStack_70;
    ppppppuStack_70 = (uint ******)0x3eb4000;
    pppppppuVar18 = (uint *******)&pppppppuStack_50;
    pppppppuVar40 = (uint *******)0x3eb4000;
    pppppppuStack_68 = param_1;
    pppppppuStack_60 = param_2;
    pppppppuStack_58 = param_3;
    pppppppuVar17 = &ppppppuStack_40;
    if ((bRam0000000003eb4d05 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb4d05 = 1;
      pppppppuVar17 = pppppppuStack_50;
    }
    pppppppuStack_50 = pppppppuVar17;
    pppppppuVar17 = (uint *******)Atlas_Stats_StatsData__Reset(auVar49._0_8_);
    auVar51._8_8_ = pppppppuStack_58;
    auVar51._0_8_ = pppppppuStack_60;
    if (lVar20 == 0) {
      return pppppppuVar17;
    }
    ppppppuVar30 = *(uint *******)(lVar20 + 0x10);
    if ((ppppppuVar30 == (uint ******)0x0) ||
       (pppppppuVar17 = *(uint ********)(auVar49._0_8_ + 0x10), pppppppuVar17 == (uint *******)0x0))
    {
      func_0x00f78af4();
      auVar50 = func_0x00f78e5c(lVar20,0x3eb4000);
      apppppppuStack_c0[9] = (uint *******)Atlas_Stats_StatsData__Add;
      apppppppuStack_c0[8] = pppppppuVar18;
      if ((auVar50._8_8_ != 0) &&
         ((lVar20 = *(long *)(auVar50._8_8_ + 0x10), lVar20 != 0 &&
          (ppppppuVar30 = auVar50._0_8_[2], ppppppuVar30 != (uint ******)0x0)))) {
        uVar3 = *(uint *)(lVar20 + 0x18);
        uVar37 = (ulong)uVar3;
        uVar33 = (uint)ppppppuVar30[3];
        if ((int)uVar33 <= (int)uVar3) {
          uVar3 = uVar33;
        }
        uVar32 = (ulong)uVar3;
        if (0 < (int)uVar3) {
          uVar34 = (ulong)ppppppuVar30[3] & 0xffffffff;
          ppppppuVar30 = ppppppuVar30 + 4;
          piVar35 = (int *)(lVar20 + 0x20);
          do {
            if ((uVar34 == 0) || (uVar37 == 0)) {
              uVar19 = func_0x00f78b24();
              func_0x00f78ac0(uVar19,0);
              goto LAB_01504a20;
            }
            *(int *)ppppppuVar30 = *piVar35 + *(int *)ppppppuVar30;
            uVar37 = uVar37 - 1;
            uVar34 = uVar34 - 1;
            uVar32 = uVar32 - 1;
            ppppppuVar30 = (uint ******)((long)ppppppuVar30 + 4);
            piVar35 = piVar35 + 1;
          } while (uVar32 != 0);
        }
        return auVar50._0_8_;
      }
LAB_01504a20:
      auVar55 = func_0x00f78af4();
      apppppppuStack_c0[7] = (uint *******)Atlas_Stats_StatsData__IncrementStat;
      ppppppuVar30 = auVar55._0_8_[2];
      if (ppppppuVar30 == (uint ******)0x0) {
        apppppppuStack_c0[6] = (uint *******)(apppppppuStack_c0 + 8);
        func_0x00f78af4();
      }
      else {
        apppppppuStack_c0[6] = (uint *******)(apppppppuStack_c0 + 8);
        if (auVar55._8_4_ < *(uint *)(ppppppuVar30 + 3)) {
          piVar35 = (int *)((long)ppppppuVar30 + ((long)(int)auVar55._8_4_ + 8) * 4);
          iVar14 = *piVar35;
          if (iVar14 < 0x3ffffffe) {
            *piVar35 = iVar14 + 1;
          }
          return auVar55._0_8_;
        }
      }
      uVar19 = func_0x00f78b24();
      auVar55 = func_0x00f78ac0(uVar19,0);
      apppppppuStack_c0[5] = (uint *******)Atlas_Stats_StatsData__DecrementStat;
      ppppppuVar30 = auVar55._0_8_[2];
      if (ppppppuVar30 == (uint ******)0x0) {
        apppppppuStack_c0[4] = (uint *******)(apppppppuStack_c0 + 6);
        func_0x00f78af4();
      }
      else {
        apppppppuStack_c0[4] = (uint *******)(apppppppuStack_c0 + 6);
        if (auVar55._8_4_ < *(uint *)(ppppppuVar30 + 3)) {
          piVar35 = (int *)((long)ppppppuVar30 + ((long)(int)auVar55._8_4_ + 8) * 4);
          iVar14 = *piVar35;
          if (-0x3fffffff < iVar14) {
            *piVar35 = iVar14 + -1;
          }
          return auVar55._0_8_;
        }
      }
      uVar19 = func_0x00f78b24();
      auVar55 = func_0x00f78ac0(uVar19,0);
      pppppppuVar18 = (uint *******)(apppppppuStack_c0 + 2);
      apppppppuStack_c0[3] = (uint *******)Atlas_Stats_StatsData__SetStat;
      ppppppuVar30 = auVar55._0_8_[2];
      if (ppppppuVar30 == (uint ******)0x0) {
        apppppppuStack_c0[2] = (uint *******)(apppppppuStack_c0 + 4);
        func_0x00f78af4();
      }
      else {
        apppppppuStack_c0[2] = (uint *******)(apppppppuStack_c0 + 4);
        if (auVar55._8_4_ < *(uint *)(ppppppuVar30 + 3)) {
          if (iVar14 < -0x3ffffffe) {
            iVar14 = -0x3fffffff;
          }
          if (0x3ffffffd < iVar14) {
            iVar14 = 0x3ffffffe;
          }
          *(int *)((long)ppppppuVar30 + ((long)(int)auVar55._8_4_ + 8) * 4) = iVar14;
          return auVar55._0_8_;
        }
      }
      uVar19 = func_0x00f78b24();
      auVar55 = func_0x00f78ac0(uVar19,0);
      param_1 = pppppppuVar40;
      pppppppuVar40 = (uint *******)(apppppppuStack_c0 + 2);
      ppppppuVar30 = (uint ******)Atlas_Stats_StatsData__GetStat;
      goto code_r0x01504b20;
    }
    pppppppuVar29 = (uint *******)(ulong)*(uint *)(ppppppuVar30 + 3);
    pppppppuVar41 = pppppppuStack_68;
    pppppppuVar42 = (uint *******)ppppppuStack_70;
    pppppppuVar45 = pppppppuStack_50;
    pppppppuVar48 = pppppppuStack_48;
    if (*(int *)(pppppppuVar17 + 3) < (int)*(uint *)(ppppppuVar30 + 3)) {
      ppppppuVar47 = (uint ******)0x150494c;
DAT_00f7ffc4:
      pppppppuVar16[0xfffffffffffffffa] = (uint ******)0x3eb4000;
      pppppppuVar16[0xfffffffffffffffb] = (uint ******)pppppppuVar40;
      pppppppuVar16[0xfffffffffffffffc] = auVar49._8_8_;
      pppppppuVar16[0xfffffffffffffffd] = auVar49._0_8_;
      pppppppuVar16[0xfffffffffffffffe] = (uint ******)pppppppuVar18;
      pppppppuVar16[0xffffffffffffffff] = ppppppuVar47;
      ppppppuVar47 = (uint ******)*ppppppuVar30;
      if (*(char *)((long)ppppppuVar47 + 0x12e) != '\0') {
        pppppppuVar16[0xfffffffffffffffa] = pppppppuVar16[0xfffffffffffffffa];
        pppppppuVar16[0xfffffffffffffffb] = pppppppuVar16[0xfffffffffffffffb];
        pppppppuVar16[0xfffffffffffffffc] = pppppppuVar16[0xfffffffffffffffc];
        pppppppuVar16[0xfffffffffffffffd] = pppppppuVar16[0xfffffffffffffffd];
        pppppppuVar16[0xfffffffffffffffe] = pppppppuVar16[0xfffffffffffffffe];
        pppppppuVar16[0xffffffffffffffff] = pppppppuVar16[0xffffffffffffffff];
        pppppuVar39 = *ppppppuVar30;
        uVar37 = (ulong)*(uint *)(pppppuVar39 + 0x20);
        if (ppppppuVar30[2] == (uint *****)0x0) {
          uVar3 = *(uint *)(ppppppuVar30 + 3);
          pppppppuVar16[0xfffffffffffffff7] = (uint ******)(ulong)uVar3;
          pppppppuVar42 =
               (uint *******)func_0x00faf0d0(pppppuVar39,pppppppuVar16 + 0xfffffffffffffff7,0);
          _memcpy(pppppppuVar42 + 4,ppppppuVar30 + 4,(long)(ulong)uVar3 * uVar37);
        }
        else {
          func_0x00901764(pppppppuVar16 + 0xfffffffffffffff7,
                          *(undefined1 *)((long)pppppuVar39 + 0x12e));
          func_0x00901764(pppppppuVar16 + 0xfffffffffffffff4,
                          *(undefined1 *)((long)pppppuVar39 + 0x12e));
          if (*(char *)((long)pppppuVar39 + 0x12e) != '\0') {
            lVar20 = 0;
            uVar32 = 0;
            do {
              pppppppuVar16[0xfffffffffffffff7][uVar32] =
                   *(uint ******)((long)ppppppuVar30[2] + lVar20);
              uVar37 = *(long *)((long)ppppppuVar30[2] + lVar20) * uVar37;
              *(long *)((long)pppppppuVar16[0xfffffffffffffff4] + uVar32 * 8) =
                   (long)(int)((long *)((long)ppppppuVar30[2] + lVar20))[1];
              uVar32 = uVar32 + 1;
              lVar20 = lVar20 + 0x10;
            } while (uVar32 < *(byte *)((long)pppppuVar39 + 0x12e));
          }
          pppppppuVar42 =
               (uint *******)
               func_0x00faf0d0(pppppuVar39,pppppppuVar16[0xfffffffffffffff7],
                               pppppppuVar16[0xfffffffffffffff4]);
          _memcpy(pppppppuVar42 + 4,ppppppuVar30 + 4,uVar37);
          if (pppppppuVar16[0xfffffffffffffff4] != (uint ******)0x0) {
            pppppppuVar16[0xfffffffffffffff5] = pppppppuVar16[0xfffffffffffffff4];
            func_0x00523aec();
          }
          if (pppppppuVar16[0xfffffffffffffff7] != (uint ******)0x0) {
            pppppppuVar16[0xfffffffffffffff8] = pppppppuVar16[0xfffffffffffffff7];
            func_0x00523aec();
          }
        }
        return pppppppuVar42;
      }
      iVar14 = *(int *)(ppppppuVar47 + 0x1f);
      pppppppuVar42 = (uint *******)func_0x00f6e3b8((long)iVar14,0);
      *pppppppuVar42 = ppppppuVar47;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(0x3ff71e8,0x10);
        if (bVar6) {
          cVar5 = ExclusiveMonitorsStatus();
          lRam0000000003ff71e8 = lRam0000000003ff71e8 + 1;
        }
      } while (cVar5 != '\0');
      _memcpy(pppppppuVar42 + 2,ppppppuVar30 + 2,(long)iVar14 + -0x10);
      if ((*(byte *)((long)*ppppppuVar30 + 0x133) >> 1 & 1) != 0) {
        func_0x00f7a274(pppppppuVar42);
      }
      if (cRam0000000003ff7438 < '\0') {
        func_0x00fc51b8(pppppppuVar42,*ppppppuVar30);
      }
      return pppppppuVar42;
    }
  }
  uVar19 = auVar51._0_8_;
  lVar20 = 0;
  *(uint ********)((long)pppppppuVar11 + -0x30) = pppppppuVar42;
  *(uint ********)((long)pppppppuVar11 + -0x28) = pppppppuVar41;
  *(undefined1 (*) [16])((long)pppppppuVar11 + -0x20) = auVar51;
  *(uint ********)((long)pppppppuVar11 + -0x10) = pppppppuVar45;
  *(uint ********)((long)pppppppuVar11 + -8) = pppppppuVar48;
  if (ppppppuVar30 == (uint ******)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar25 = func_0x00f78aec();
    uVar15 = 0x3d7b900;
    pppppppuVar17 = pppppppuVar29;
    pppppppuVar29 = param_5;
code_r0x0292c538:
    uVar15 = func_0x00f78a24(uVar15);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar25,uVar15);
    uVar15 = func_0x00f78a24(0x3d514e0);
    auVar54 = func_0x00f78ac0(uVar25,uVar15);
    *(undefined8 *)((long)pppppppuVar11 + -0x50) = uVar19;
    *(undefined8 *)((long)pppppppuVar11 + -0x48) = uVar25;
    *(undefined1 **)((long)pppppppuVar11 + -0x40) = (undefined1 *)((long)pppppppuVar11 + -0x10);
    *(undefined **)((long)pppppppuVar11 + -0x38) = &System_Array__Copy;
    if (auVar54._8_8_ == (long)auVar54._8_4_) {
      if (lVar20 == (int)lVar20) {
        if (pppppppuVar29 == (uint *******)(long)(int)pppppppuVar29) {
          uVar19 = *(undefined8 *)((long)pppppppuVar11 + -0x40);
          uVar25 = *(undefined8 *)((long)pppppppuVar11 + -0x38);
          puVar12 = (undefined1 *)((long)pppppppuVar11 + -0x30);
          uVar15 = *(undefined8 *)((long)pppppppuVar11 + -0x50);
          uVar38 = *(undefined8 *)((long)pppppppuVar11 + -0x48);
          goto System_Array__Copy;
        }
        func_0x00f78a24(0x3d1fcf8);
        uVar15 = func_0x00f78aec();
        uVar19 = 0x3d7a280;
      }
      else {
        func_0x00f78a24(0x3d1fcf8);
        uVar15 = func_0x00f78aec();
        uVar19 = 0x3d78af0;
      }
    }
    else {
      func_0x00f78a24(0x3d1fcf8);
      uVar15 = func_0x00f78aec();
      uVar19 = 0x3d7b910;
    }
    uVar19 = func_0x00f78a24(uVar19);
    lVar20 = func_0x00f78a24(0x3d69268);
    /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar15,uVar19);
    uVar25 = func_0x00f78a24(0x3d514f8);
    auVar49 = func_0x00f78ac0(uVar15,uVar25);
    plVar21 = auVar49._8_8_;
    uVar25 = auVar49._0_8_;
    if (lVar20 != (int)lVar20) {
      *(undefined8 *)((long)pppppppuVar11 + -0x70) = uVar19;
      *(undefined8 *)((long)pppppppuVar11 + -0x68) = uVar15;
      *(undefined1 **)((long)pppppppuVar11 + -0x60) = (undefined1 *)((long)pppppppuVar11 + -0x40);
      *(undefined **)((long)pppppppuVar11 + -0x58) = &System_Array__CopyTo;
      func_0x00f78a24(0x3d1fcf8);
      uVar19 = func_0x00f78aec();
      uVar15 = func_0x00f78a24(0x3d79a60);
      uVar25 = func_0x00f78a24(0x3d69268);
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar19,uVar15,uVar25);
      uVar25 = func_0x00f78a24(0x3d51508);
      plVar21 = (long *)func_0x00f78ac0(uVar19,uVar25);
      *(uint ********)((long)pppppppuVar11 + -0xa0) = pppppppuVar42;
      *(uint ********)((long)pppppppuVar11 + -0x98) = pppppppuVar41;
      *(undefined8 *)((long)pppppppuVar11 + -0x90) = uVar15;
      *(undefined8 *)((long)pppppppuVar11 + -0x88) = uVar19;
      *(undefined1 **)((long)pppppppuVar11 + -0x80) = (undefined1 *)((long)pppppppuVar11 + -0x60);
      *(undefined **)((long)pppppppuVar11 + -0x78) = &System_Array__get_LongLength;
      func_0x00f8078c(plVar21,0);
      goto code_r0x00f80814;
    }
    *(uint ********)((long)pppppppuVar11 + -0x80) = pppppppuVar42;
    *(uint ********)((long)pppppppuVar11 + -0x78) = pppppppuVar41;
    *(undefined8 *)((long)pppppppuVar11 + -0x70) = uVar19;
    *(undefined8 *)((long)pppppppuVar11 + -0x68) = uVar15;
    *(undefined1 **)((long)pppppppuVar11 + -0x60) = (undefined1 *)((long)pppppppuVar11 + -0x40);
    *(undefined **)((long)pppppppuVar11 + -0x58) = &System_Array__CopyTo;
    if (plVar21 != (long *)0x0) goto code_r0x00f80814;
    uVar19 = func_0x00f807d0(uVar25,0);
    auVar54._8_8_ = uVar19;
    auVar54._0_8_ = uVar25;
    pppppppuVar29 = (uint *******)/*System.Array$$get_Length*/ func_0x0292ae44(uVar25);
    uVar19 = *(undefined8 *)((long)pppppppuVar11 + -0x60);
    uVar25 = *(undefined8 *)((long)pppppppuVar11 + -0x58);
    uVar15 = *(undefined8 *)((long)pppppppuVar11 + -0x70);
    uVar38 = *(undefined8 *)((long)pppppppuVar11 + -0x68);
    puVar12 = (undefined1 *)((long)pppppppuVar11 + -0x50);
    pppppppuVar42 = *(uint ********)((long)pppppppuVar11 + -0x80);
    pppppppuVar41 = *(uint ********)((long)pppppppuVar11 + -0x78);
    pppppppuVar17 = (uint *******)0x0;
  }
  else {
    if (pppppppuVar17 == (uint *******)0x0) {
      func_0x00f78a24(0x3d1fcf0);
      uVar25 = func_0x00f78aec();
      uVar15 = 0x3d78ae8;
      uVar19 = 0;
      pppppppuVar17 = pppppppuVar29;
      pppppppuVar29 = param_5;
      goto code_r0x0292c538;
    }
    uVar19 = func_0x00f807d0(ppppppuVar30,0);
    auVar54._8_8_ = uVar19;
    auVar54._0_8_ = ppppppuVar30;
    func_0x00f807d0(pppppppuVar17,0);
    uVar19 = *(undefined8 *)((long)pppppppuVar11 + -0x10);
    uVar25 = *(undefined8 *)((long)pppppppuVar11 + -8);
    uVar15 = *(undefined8 *)((long)pppppppuVar11 + -0x20);
    uVar38 = *(undefined8 *)((long)pppppppuVar11 + -0x18);
    pppppppuVar42 = *(uint ********)((long)pppppppuVar11 + -0x30);
    pppppppuVar41 = *(uint ********)((long)pppppppuVar11 + -0x28);
    puVar12 = (undefined1 *)pppppppuVar11;
  }
System_Array__Copy:
  uVar28 = auVar54._8_8_;
  plVar21 = auVar54._0_8_;
  *(undefined8 *)(puVar12 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar12 + -0x58) = unaff_x27;
  *(uint *******)(puVar12 + -0x50) = unaff_x26;
  *(uint *******)(puVar12 + -0x48) = unaff_x25;
  *(uint *******)(puVar12 + -0x40) = unaff_x24;
  *(uint ********)(puVar12 + -0x38) = unaff_x23;
  *(uint ********)(puVar12 + -0x30) = pppppppuVar42;
  *(uint ********)(puVar12 + -0x28) = pppppppuVar41;
  *(undefined8 *)(puVar12 + -0x20) = uVar15;
  *(undefined8 *)(puVar12 + -0x18) = uVar38;
  *(undefined8 *)(puVar12 + -0x10) = uVar19;
  *(undefined8 *)(puVar12 + -8) = uVar25;
  if (plVar21 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0,uVar28);
    puVar26 = (undefined8 *)func_0x00f78aec();
    uVar19 = 0x3d7b900;
  }
  else {
    if (pppppppuVar17 != (uint *******)0x0) {
      if (-1 < (int)pppppppuVar29) {
code_r0x00f80814:
        return (uint *******)(ulong)*(byte *)(*plVar21 + 0x12e);
      }
      uVar19 = func_0x00f78a24(0x3d75f70,uVar28);
      uVar19 = /*Locale$$GetText*/ func_0x02af42b4(uVar19,0);
      func_0x00f78a24(0x3d1fcf8);
      uVar15 = func_0x00f78aec();
      uVar25 = func_0x00f78a24(0x3d7a280);
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar15,uVar25,uVar19);
      uVar19 = func_0x00f78a24(0x3d514f0);
      func_0x00f78ac0(uVar15,uVar19);
      func_0x00f78af4();
      func_0x00f78a24(0x3d1fcf8);
      puVar26 = (undefined8 *)func_0x00f78aec();
      uVar15 = func_0x00f78a24(0x3d78af0);
      uVar19 = func_0x00f78a24(0x3d6de20);
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(puVar26,uVar15,uVar19);
      goto code_r0x0292b958;
    }
    func_0x00f78a24(0x3d1fcf0,uVar28);
    puVar26 = (undefined8 *)func_0x00f78aec();
    uVar19 = 0x3d78ae8;
  }
  uVar19 = func_0x00f78a24(uVar19);
  /*System.ArgumentNullException$$.ctor*/ func_0x02920400(puVar26,uVar19);
code_r0x0292b958:
  while( true ) {
    uVar19 = func_0x00f78a24(0x3d514f0);
    func_0x00f78ac0(puVar26,uVar19);
    uVar19 = func_0x00f78a24(0x3d23988);
    uVar37 = func_0x00f78ed4(uVar19,*(undefined8 *)*puVar26);
    if ((uVar37 & 1) == 0) break;
    puVar26 = (undefined8 *)*puVar26;
    ___cxa_end_catch();
    iVar14 = /*System.Array$$CanAssignArrayElement*/ func_0x0292e90c(*(undefined8 *)(puVar12 + -0x68),uVar15);
    if (iVar14 == 0) {
      puVar26 = (undefined8 *)/*System.Array$$CreateArrayTypeMismatchException*/ func_0x0292e8b8();
    }
  }
  puVar27 = (undefined8 *)___cxa_allocate_exception(8);
  *puVar27 = *puVar26;
  ___cxa_throw(puVar27,&DAT_03a5ed38,0);
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x292b9cc);
  (*pcVar10)();
}



// ============================================================
// RVA: 0x1505084 | Atlas.Stats.StatsManager.ResetStats
// ============================================================

/* WARNING: Possible PIC construction at 0x029202dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01504948: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01504be4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01504cc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0292b50c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0292b43c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0292c6bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0292c6e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01505464: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0292c6ec) */
/* WARNING: Removing unreachable block (ram,0x0292c6c0) */
/* WARNING: Removing unreachable block (ram,0x0292c6f4) */
/* WARNING: Removing unreachable block (ram,0x0292c6c8) */
/* WARNING: Removing unreachable block (ram,0x0292c6cc) */
/* WARNING: Removing unreachable block (ram,0x0292b440) */
/* WARNING: Removing unreachable block (ram,0x0292b484) */
/* WARNING: Removing unreachable block (ram,0x0292b510) */
/* WARNING: Removing unreachable block (ram,0x0292b70c) */
/* WARNING: Removing unreachable block (ram,0x0292b524) */
/* WARNING: Removing unreachable block (ram,0x0292b740) */
/* WARNING: Removing unreachable block (ram,0x0292b528) */
/* WARNING: Removing unreachable block (ram,0x0292b778) */
/* WARNING: Removing unreachable block (ram,0x0292b52c) */
/* WARNING: Removing unreachable block (ram,0x0292b548) */
/* WARNING: Removing unreachable block (ram,0x0292b56c) */
/* WARNING: Removing unreachable block (ram,0x0292b820) */
/* WARNING: Removing unreachable block (ram,0x0292b588) */
/* WARNING: Removing unreachable block (ram,0x0292b850) */
/* WARNING: Removing unreachable block (ram,0x0292b59c) */
/* WARNING: Removing unreachable block (ram,0x0292b5ac) */
/* WARNING: Removing unreachable block (ram,0x0292b5d0) */
/* WARNING: Removing unreachable block (ram,0x0292b5ec) */
/* WARNING: Removing unreachable block (ram,0x0292b634) */
/* WARNING: Removing unreachable block (ram,0x0292b638) */
/* WARNING: Removing unreachable block (ram,0x0292b5f4) */
/* WARNING: Removing unreachable block (ram,0x0292b604) */
/* WARNING: Removing unreachable block (ram,0x0292b664) */
/* WARNING: Removing unreachable block (ram,0x0292b60c) */
/* WARNING: Removing unreachable block (ram,0x01504cc4) */
/* WARNING: Removing unreachable block (ram,0x01504ce8) */
/* WARNING: Removing unreachable block (ram,0x01504cc8) */
/* WARNING: Removing unreachable block (ram,0x01504be8) */
/* WARNING: Removing unreachable block (ram,0x0150494c) */
/* WARNING: Removing unreachable block (ram,0x01504950) */
/* WARNING: Removing unreachable block (ram,0x0150496c) */
/* WARNING: Removing unreachable block (ram,0x029202e0) */
/* WARNING: Removing unreachable block (ram,0x029202e4) */
/* WARNING: Removing unreachable block (ram,0x0292030c) */
/* WARNING: Removing unreachable block (ram,0x02920300) */
/* WARNING: Removing unreachable block (ram,0x01505468) */
/* WARNING: Removing unreachable block (ram,0x0150547c) */
/* WARNING: Type propagation algorithm not settling */

uint *****
Atlas_Stats_StatsManager__ResetStats
          (long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,uint *****param_5)

{
  uint uVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint *******pppppppuVar9;
  uint **ppuVar10;
  uint *******pppppppuVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  uint *******pppppppuVar14;
  int iVar15;
  undefined8 uVar17;
  undefined8 uVar18;
  uint *****pppppuVar19;
  uint *******pppppppuVar20;
  uint *****pppppuVar21;
  uint *****pppppuVar22;
  int iVar16;
  code *pcVar23;
  long *plVar24;
  uint ****ppppuVar25;
  undefined8 uVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  code *pcVar29;
  undefined8 uVar30;
  uint *****pppppuVar31;
  long lVar32;
  uint ******ppppppuVar33;
  uint ***pppuVar34;
  uint *puVar35;
  ulong uVar36;
  ulong uVar37;
  uint uVar38;
  ulong uVar39;
  int *piVar40;
  long lVar41;
  ulong uVar42;
  code *unaff_x19;
  undefined8 uVar43;
  uint *******unaff_x20;
  uint ***pppuVar44;
  uint *****unaff_x21;
  uint ****ppppuVar45;
  ulong unaff_x22;
  uint **ppuVar46;
  uint *****unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  uint ***pppuVar47;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  uint **ppuVar48;
  undefined *puVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [12];
  ulong auStack_130 [14];
  uint *apuStack_c0 [2];
  uint ******appppppuStack_b0 [2];
  uint *******pppppppuStack_a0;
  code *pcStack_98;
  uint *******pppppppuStack_80;
  code *pcStack_78;
  uint *******pppppppuStack_70;
  code *pcStack_68;
  uint *******pppppppuStack_60;
  code *pcStack_58;
  uint *******pppppppuStack_50;
  code *pcStack_48;
  
  auVar51._8_8_ = unaff_x19;
  auVar51._0_8_ = unaff_x20;
  uVar42 = unaff_x22;
  if (*(long *)(param_1 + 0x20) == 0) {
    auVar50 = func_0x00f78af4();
    pcVar23 = (code *)&Atlas_Stats_StatsManager__ResetAndSet;
    lVar32 = *(long *)(auVar50._0_8_ + 0x20);
    auVar50._8_8_ = auVar50._8_8_;
    auVar50._0_8_ = lVar32;
    if (lVar32 != 0) goto code_r0x015048e0;
    auVar51 = func_0x00f78af4();
    pppppppuVar20 = auVar51._0_8_;
    pcVar23 = unaff_x19;
    if (pppppppuVar20[4] == (uint ******)0x0) {
code_r0x01505118:
      func_0x00f78af4();
    }
    else {
      Atlas_Stats_StatsData__IncrementStat();
      ppppppuVar33 = pppppppuVar20[5];
      pcVar23 = auVar51._8_8_;
      if (ppppppuVar33 == (uint ******)0x0) goto code_r0x01505118;
      if (auVar51._8_4_ < *(uint *)(ppppppuVar33 + 3)) {
        pppppuVar19 = ppppppuVar33[(long)(int)auVar51._8_4_ + 4];
        if (pppppuVar19 == (uint *****)0x0) {
          return (uint *****)0x0;
        }
        pppppppuVar11 = (uint *******)&stack0xffffffffffffffe0;
        pppppppuVar20 = (uint *******)&stack0xffffffffffffffe0;
        pcVar23 = (code *)&Atlas_Stats_StatsManager__IncrementStat;
        goto System_Action__Invoke;
      }
    }
    uVar17 = func_0x00f78b24();
    auVar51 = func_0x00f78ac0(uVar17,0);
    pppppppuVar14 = auVar51._0_8_;
    pcStack_48 = (code *)&Atlas_Stats_StatsManager__DecrementStat;
    pppppppuStack_60 = pppppppuVar20;
    pcStack_58 = pcVar23;
    pppppppuStack_50 = (uint *******)&stack0xffffffffffffffd0;
    if (pppppppuVar14[4] == (uint ******)0x0) {
code_r0x01505184:
      func_0x00f78af4();
    }
    else {
      Atlas_Stats_StatsData__DecrementStat();
      ppppppuVar33 = pppppppuVar14[5];
      pcVar23 = auVar51._8_8_;
      if (ppppppuVar33 == (uint ******)0x0) goto code_r0x01505184;
      if (auVar51._8_4_ < *(uint *)(ppppppuVar33 + 3)) {
        pppppuVar19 = ppppppuVar33[(long)(int)auVar51._8_4_ + 4];
        if (pppppuVar19 == (uint *****)0x0) {
          return (uint *****)0x0;
        }
        pppppppuVar11 = (uint *******)&stack0xffffffffffffffc0;
        unaff_x19 = pcStack_58;
        unaff_x20 = pppppppuStack_60;
        pppppppuVar20 = pppppppuStack_50;
        pcVar23 = pcStack_48;
        goto System_Action__Invoke;
      }
    }
    uVar17 = func_0x00f78b24();
    auVar51 = func_0x00f78ac0(uVar17,0);
    pcVar29 = auVar51._8_8_;
    lVar32 = auVar51._0_8_;
    pcStack_68 = (code *)&Atlas_Stats_StatsManager__SetStat;
    pppppuVar19 = unaff_x21;
    pppppppuStack_80 = pppppppuVar14;
    pcStack_78 = pcVar23;
    pppppppuStack_70 = (uint *******)&pppppppuStack_50;
    if (*(long *)(lVar32 + 0x20) == 0) {
code_r0x01505234:
      func_0x00f78af4();
    }
    else {
      pppppuVar19 = (uint *****)Atlas_Stats_StatsData__GetStat();
      pcVar23 = pcVar29;
      uVar42 = param_3;
      if (*(long *)(lVar32 + 0x20) == 0) goto code_r0x01505234;
      Atlas_Stats_StatsData__SetStat(*(long *)(lVar32 + 0x20),pcVar29,param_3);
      if (*(long *)(lVar32 + 0x20) == 0) goto code_r0x01505234;
      pppppuVar21 = (uint *****)Atlas_Stats_StatsData__GetStat(*(long *)(lVar32 + 0x20),pcVar29);
      if ((int)pppppuVar21 == (int)pppppuVar19) {
        return pppppuVar21;
      }
      lVar41 = *(long *)(lVar32 + 0x28);
      if (lVar41 == 0) goto code_r0x01505234;
      if (auVar51._8_4_ < *(uint *)(lVar41 + 0x18)) {
        pppppuVar19 = *(uint ******)(lVar41 + (long)(int)auVar51._8_4_ * 8 + 0x20);
        if (pppppuVar19 == (uint *****)0x0) {
          return (uint *****)0x0;
        }
        pppppppuVar11 = (uint *******)&pppppppuStack_60;
        unaff_x19 = pcStack_78;
        unaff_x20 = pppppppuStack_80;
        pppppppuVar20 = pppppppuStack_70;
        pcVar23 = pcStack_68;
System_Action__Invoke:
        uVar17 = 0;
        *(undefined8 *)((long)pppppppuVar11 + -0x50) = unaff_x26;
        *(undefined8 *)((long)pppppppuVar11 + -0x48) = unaff_x25;
        *(undefined8 *)((long)pppppppuVar11 + -0x40) = unaff_x24;
        *(uint ******)((long)pppppppuVar11 + -0x38) = unaff_x23;
        *(ulong *)((long)pppppppuVar11 + -0x30) = unaff_x22;
        *(uint ******)((long)pppppppuVar11 + -0x28) = unaff_x21;
        *(uint ********)((long)pppppppuVar11 + -0x20) = unaff_x20;
        *(code **)((long)pppppppuVar11 + -0x18) = unaff_x19;
        *(uint ********)((long)pppppppuVar11 + -0x10) = pppppppuVar20;
        *(code **)((long)pppppppuVar11 + -8) = pcVar23;
        *(uint ******)((long)pppppppuVar11 + -0x58) = pppppuVar19;
        ppppuVar25 = pppppuVar19[0xd];
        if (ppppuVar25 == (uint ****)0x0) {
          ppppuVar25 = (uint ****)((long)pppppppuVar11 + -0x58);
          pppuVar44 = (uint ***)0x1;
        }
        else {
          pppuVar44 = ppppuVar25[3];
          if (pppuVar44 == (uint ***)0x0) {
            return pppppuVar19;
          }
          ppppuVar25 = ppppuVar25 + 4;
        }
        pppuVar47 = (uint ***)0x0;
        do {
          pppuVar34 = ppppuVar25[(long)pppuVar47];
          ppuVar46 = pppuVar34[2];
          ppuVar48 = pppuVar34[4];
          ppuVar10 = pppuVar34[5];
          if (*(short *)(ppuVar10 + 9) == -1) {
            func_0x00f78ad8(ppuVar10,uVar17);
          }
          iVar16 = func_0x00f78a4c(ppuVar10);
          if (iVar16 == 0) {
            if ((((ppuVar48 == (uint **)0x0) || (*(short *)(ppuVar10 + 9) == -1)) ||
                ((*(byte *)((long)*ppuVar48 + 0x115) & 1) != 0)) ||
               (pppppuVar19[3] == (uint ****)0x0)) goto code_r0x02924d98;
            iVar16 = func_0x00f78a44(ppuVar10);
            iVar15 = func_0x00f78ec0(ppuVar10);
            if (iVar16 == 0) {
              uVar2 = *(ushort *)(ppuVar10 + 9);
              uVar42 = (ulong)uVar2;
              if (iVar15 == 0) {
                auVar51 = (**(code **)(*ppuVar48 + uVar42 * 4 + 0x4e))
                                    (ppuVar48,*(undefined8 *)(*ppuVar48 + uVar42 * 4 + 0x50));
                goto code_r0x02924da4;
              }
              lVar32 = func_0x00f78a48(ppuVar10);
              puVar35 = *ppuVar48;
              uVar36 = (ulong)*(ushort *)((long)puVar35 + 0x12a);
              if (uVar36 != 0) {
                piVar40 = (int *)(*(long *)(puVar35 + 0x2c) + 8);
                do {
                  if (*(long *)(piVar40 + -2) == lVar32) {
                    puVar35 = puVar35 + (long)(int)(*piVar40 + (uint)uVar2) * 4U + 0x4e;
                    goto code_r0x02924e68;
                  }
                  piVar40 = piVar40 + 4;
                  uVar36 = uVar36 - 1;
                } while (uVar36 != 0);
              }
              puVar35 = (uint *)func_0x00fac1f0(ppuVar48,lVar32,uVar42);
code_r0x02924e68:
              pcVar23 = *(code **)puVar35;
              puVar27 = *(undefined8 **)(puVar35 + 2);
            }
            else {
              if (iVar15 == 0) {
                uVar17 = *(undefined8 *)(*ppuVar48 + (ulong)*(ushort *)(ppuVar10 + 9) * 4 + 0x50);
              }
              else {
                puVar35 = *ppuVar48;
                uVar42 = (ulong)*(ushort *)((long)puVar35 + 0x12a);
                if (uVar42 != 0) {
                  piVar40 = (int *)(*(long *)(puVar35 + 0x2c) + 8);
                  do {
                    if (*(uint **)(piVar40 + -2) == ppuVar10[3]) {
                      puVar35 = puVar35 + (long)(int)(*piVar40 + (uint)*(ushort *)(ppuVar10 + 9)) *
                                          4U + 0x4e;
                      goto code_r0x02924e40;
                    }
                    piVar40 = piVar40 + 4;
                    uVar42 = uVar42 - 1;
                  } while (uVar42 != 0);
                }
                puVar35 = (uint *)func_0x00fac1f0(ppuVar48);
code_r0x02924e40:
                uVar17 = *(undefined8 *)(puVar35 + 2);
              }
              puVar27 = (undefined8 *)func_0x00f78acc(uVar17,ppuVar10);
              pcVar23 = (code *)*puVar27;
            }
            auVar51 = (*pcVar23)(ppuVar48,puVar27);
          }
          else if (*(char *)((long)ppuVar10 + 0x4a) == '\0') {
            auVar51 = (*(code *)ppuVar46)(ppuVar10);
          }
          else {
code_r0x02924d98:
            auVar51 = (*(code *)ppuVar46)(ppuVar48,ppuVar10);
          }
code_r0x02924da4:
          uVar17 = auVar51._8_8_;
          pppuVar47 = (uint ***)((long)pppuVar47 + 1);
          if (pppuVar47 == pppuVar44) {
            return auVar51._0_8_;
          }
        } while( true );
      }
    }
    auVar53._8_8_ = pcVar23;
    auVar53._0_8_ = lVar32;
    auVar50._8_8_ = lVar32;
    auVar50._0_8_ = pcVar23;
    auVar6._8_8_ = lVar32;
    auVar6._0_8_ = pcVar23;
    auVar5._8_8_ = lVar32;
    auVar5._0_8_ = pcVar23;
    uVar17 = func_0x00f78b24();
    auVar55 = func_0x00f78ac0(uVar17,0);
    pcStack_98 = (code *)&Atlas_Stats_StatsManager__GetStat;
    lVar32 = *(long *)(auVar55._0_8_ + 0x20);
    auVar55._8_4_ = auVar55._8_4_;
    auVar55._0_8_ = lVar32;
    pppppppuStack_a0 = (uint *******)&pppppppuStack_70;
    if (lVar32 == 0) {
      auVar55 = func_0x00f78af4();
      pppppppuVar20 = (uint *******)(apuStack_c0 + 2);
      appppppuStack_b0[1] = (uint ******)&Atlas_Stats_StatsManager__GetTransactionStat;
      lVar32 = *(long *)(auVar55._0_8_ + 0x18);
      auVar55._8_4_ = auVar55._8_4_;
      auVar55._0_8_ = lVar32;
      if (lVar32 == 0) {
        appppppuStack_b0[0] = (uint ******)(apuStack_c0 + 4);
        auVar55 = func_0x00f78af4();
        ppuVar48 = apuStack_c0;
        apuStack_c0[1] = (uint *)&Atlas_Stats_StatsManager__GetCommittedStat;
        lVar32 = *(long *)(auVar55._0_8_ + 0x10);
        auVar55._8_4_ = auVar55._8_4_;
        auVar55._0_8_ = lVar32;
        if (lVar32 == 0) {
          puVar49 = &Atlas_Stats_StatsManager__GetGlobalStat;
          apuStack_c0[0] = (uint *)(apuStack_c0 + 2);
          auVar52 = func_0x00f78af4();
          ppuVar10 = apuStack_c0;
          do {
            lVar32 = auVar52._0_8_;
            *(ulong *)((long)ppuVar10 + -0x30) = uVar42;
            *(uint ******)((long)ppuVar10 + -0x28) = pppppuVar19;
            *(undefined1 (*) [16])((long)ppuVar10 + -0x20) = auVar53;
            *(uint ***)((long)ppuVar10 + -0x10) = ppuVar48;
            *(undefined **)((long)ppuVar10 + -8) = puVar49;
            uVar17 = auVar53._8_8_;
            if (*(long *)(lVar32 + 0x10) != 0) {
              pppppuVar19 = (uint *****)Atlas_Stats_StatsData__GetStat();
              uVar17 = auVar52._8_8_;
              if (*(long *)(lVar32 + 0x18) != 0) {
                iVar16 = Atlas_Stats_StatsData__GetStat(*(long *)(lVar32 + 0x18),auVar52._8_8_);
                return (uint *****)(ulong)(uint)(iVar16 + (int)pppppuVar19);
              }
            }
            auVar7._8_8_ = uVar17;
            auVar7._0_8_ = lVar32;
            auVar51 = func_0x00f78af4();
            lVar41 = auVar51._8_8_;
            *(undefined8 *)((long)ppuVar10 + -0x70) = unaff_x24;
            *(uint ******)((long)ppuVar10 + -0x68) = unaff_x23;
            *(ulong *)((long)ppuVar10 + -0x60) = uVar42;
            *(uint ******)((long)ppuVar10 + -0x58) = pppppuVar19;
            *(long *)((long)ppuVar10 + -0x50) = lVar32;
            *(undefined8 *)((long)ppuVar10 + -0x48) = uVar17;
            *(undefined1 **)((long)ppuVar10 + -0x40) = (undefined1 *)((long)ppuVar10 + -0x10);
            *(undefined **)((long)ppuVar10 + -0x38) =
                 &Atlas_Stats_StatsManager__GetSummedCommittedStats;
            if (lVar41 == 0) {
code_r0x01505370:
              func_0x00f78af4();
            }
            else {
              if ((int)*(ulong *)(lVar41 + 0x18) < 1) {
                return (uint *****)0x0;
              }
              pppppuVar19 = (uint *****)0x0;
              uVar42 = 0;
              uVar36 = *(ulong *)(lVar41 + 0x18) & 0xffffffff;
              unaff_x23 = (uint *****)(lVar41 + 0x20);
              while (auVar7 = auVar51, uVar42 < uVar36) {
                lVar32 = *(long *)(auVar51._0_8_ + 0x10);
                if (lVar32 == 0) goto code_r0x01505370;
                iVar16 = Atlas_Stats_StatsData__GetStat
                                   (lVar32,*(undefined4 *)((long)unaff_x23 + uVar42 * 4));
                pppppuVar19 = (uint *****)(ulong)(uint)(iVar16 + (int)pppppuVar19);
                uVar42 = uVar42 + 1;
                uVar36 = (ulong)*(uint *)(lVar41 + 0x18);
                if ((long)(int)*(uint *)(lVar41 + 0x18) <= (long)uVar42) {
                  return pppppuVar19;
                }
              }
            }
            uVar17 = func_0x00f78b24();
            auVar51 = func_0x00f78ac0(uVar17,0);
            lVar32 = auVar51._8_8_;
            *(undefined8 *)((long)ppuVar10 + -0xb0) = unaff_x24;
            *(uint ******)((long)ppuVar10 + -0xa8) = unaff_x23;
            *(ulong *)((long)ppuVar10 + -0xa0) = uVar42;
            *(uint ******)((long)ppuVar10 + -0x98) = pppppuVar19;
            *(undefined1 (*) [16])((long)ppuVar10 + -0x90) = auVar7;
            *(undefined1 **)((long)ppuVar10 + -0x80) = (undefined1 *)((long)ppuVar10 + -0x40);
            *(undefined **)((long)ppuVar10 + -0x78) =
                 &Atlas_Stats_StatsManager__GetSummedTransactionStats;
            if (lVar32 == 0) {
code_r0x01505408:
              func_0x00f78af4();
            }
            else {
              if ((int)*(ulong *)(lVar32 + 0x18) < 1) {
                return (uint *****)0x0;
              }
              pppppuVar19 = (uint *****)0x0;
              uVar42 = 0;
              uVar36 = *(ulong *)(lVar32 + 0x18) & 0xffffffff;
              unaff_x23 = (uint *****)(lVar32 + 0x20);
              while (auVar7 = auVar51, uVar42 < uVar36) {
                lVar41 = *(long *)(auVar51._0_8_ + 0x18);
                if (lVar41 == 0) goto code_r0x01505408;
                iVar16 = Atlas_Stats_StatsData__GetStat
                                   (lVar41,*(undefined4 *)((long)unaff_x23 + uVar42 * 4));
                pppppuVar19 = (uint *****)(ulong)(uint)(iVar16 + (int)pppppuVar19);
                uVar42 = uVar42 + 1;
                uVar36 = (ulong)*(uint *)(lVar32 + 0x18);
                if ((long)(int)*(uint *)(lVar32 + 0x18) <= (long)uVar42) {
                  return pppppuVar19;
                }
              }
            }
            uVar17 = func_0x00f78b24();
            auVar53 = func_0x00f78ac0(uVar17,0);
            lVar32 = auVar53._8_8_;
            *(undefined8 *)((long)ppuVar10 + -0xf0) = unaff_x24;
            *(uint ******)((long)ppuVar10 + -0xe8) = unaff_x23;
            *(ulong *)((long)ppuVar10 + -0xe0) = uVar42;
            *(uint ******)((long)ppuVar10 + -0xd8) = pppppuVar19;
            *(undefined1 (*) [16])((long)ppuVar10 + -0xd0) = auVar7;
            *(undefined1 **)((long)ppuVar10 + -0xc0) = (undefined1 *)((long)ppuVar10 + -0x80);
            *(undefined **)((long)ppuVar10 + -0xb8) =
                 &Atlas_Stats_StatsManager__GetSummedGlobalStats;
            ppuVar48 = (uint **)((long)ppuVar10 + -0xc0);
            if (lVar32 == 0) goto code_r0x015054a8;
            if ((int)*(ulong *)(lVar32 + 0x18) < 1) {
              return (uint *****)0x0;
            }
            pppppuVar19 = (uint *****)0x0;
            uVar42 = 0;
            unaff_x23 = (uint *****)(lVar32 + 0x20);
            if ((*(ulong *)(lVar32 + 0x18) & 0xffffffff) == 0) {
              uVar17 = func_0x00f78b24();
              func_0x00f78ac0(uVar17,0);
              auVar7 = auVar53;
code_r0x015054a8:
              uVar17 = func_0x00f78af4();
              *(ulong *)((long)ppuVar10 + -0x120) = uVar42;
              *(uint ******)((long)ppuVar10 + -0x118) = pppppuVar19;
              *(undefined1 (*) [16])((long)ppuVar10 + -0x110) = auVar7;
              *(uint ***)((long)ppuVar10 + -0x100) = ppuVar48;
              *(undefined **)((long)ppuVar10 + -0xf8) = &Atlas_Stats_StatsManager__GetStatFromString
              ;
              if ((bRam0000000003eb4d0b & 1) == 0) {
                func_0x00f78a20(0x3d24d58);
                bRam0000000003eb4d0b = 1;
              }
              *(undefined4 *)((long)ppuVar10 + -0x124) = 0;
              if (((*(ushort *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              /*Atlas.Stats.StatsManager$$TryGetStatFromString*/ func_0x0150552c(uVar17,(undefined1 *)((long)ppuVar10 + -0x124));
              return (uint *****)(ulong)*(uint *)((long)ppuVar10 + -0x124);
            }
            auVar52._8_4_ = *(undefined4 *)unaff_x23;
            auVar52._0_8_ = auVar53._0_8_;
            auVar52._12_4_ = 0;
            puVar49 = &UNK_01505468;
            ppuVar10 = (uint **)((long)ppuVar10 + -0xf0);
          } while( true );
        }
        pppppppuVar9 = (uint *******)(apuStack_c0 + 2);
        pcVar23 = (code *)&Atlas_Stats_StatsManager__GetCommittedStat;
        apuStack_c0[0] = (uint *)(apuStack_c0 + 2);
      }
      else {
        pppppppuVar9 = (uint *******)(apuStack_c0 + 4);
        pcVar23 = (code *)&Atlas_Stats_StatsManager__GetTransactionStat;
        pppppppuVar20 = (uint *******)(apuStack_c0 + 4);
        appppppuStack_b0[0] = (uint ******)(apuStack_c0 + 4);
        auVar50 = auVar6;
      }
    }
    else {
      pppppppuVar9 = (uint *******)&stack0xffffffffffffff70;
      pppppppuVar20 = (uint *******)&pppppppuStack_70;
      pcVar23 = pcStack_98;
      auVar50 = auVar5;
    }
code_r0x01504b20:
    *(uint ********)((long)pppppppuVar9 + -0x10) = pppppppuVar20;
    *(code **)((long)pppppppuVar9 + -8) = pcVar23;
    lVar32 = *(long *)(auVar55._0_8_ + 0x10);
    if (lVar32 == 0) {
      func_0x00f78af4();
    }
    else if (auVar55._8_4_ < *(uint *)(lVar32 + 0x18)) {
      return (uint *****)(ulong)*(uint *)(lVar32 + (long)(int)auVar55._8_4_ * 4 + 0x20);
    }
    uVar17 = func_0x00f78b24();
    auVar51 = func_0x00f78ac0(uVar17,0);
    lVar32 = auVar51._8_8_;
    pppppuVar22 = auVar51._0_8_;
    puVar12 = (undefined1 *)((long)pppppppuVar9 + -0x50);
    *(undefined8 *)((long)pppppppuVar9 + -0x50) = unaff_x24;
    *(uint ******)((long)pppppppuVar9 + -0x48) = unaff_x23;
    *(ulong *)((long)pppppppuVar9 + -0x40) = uVar42;
    *(uint ******)((long)pppppppuVar9 + -0x38) = pppppuVar19;
    *(long *)((long)pppppppuVar9 + -0x30) = auVar50._8_8_;
    *(long *)((long)pppppppuVar9 + -0x28) = auVar50._0_8_;
    *(undefined1 **)((long)pppppppuVar9 + -0x20) = (undefined1 *)((long)pppppppuVar9 + -0x10);
    *(code **)((long)pppppppuVar9 + -0x18) = Atlas_Stats_StatsData__UpdateToLargestValues;
    puVar13 = (undefined1 *)((long)pppppppuVar9 + -0x20);
    pppppuVar19 = pppppuVar22;
    if ((bRam0000000003eb4d06 & 1) == 0) {
      pppppuVar19 = (uint *****)func_0x00f78a20(0x3d1f100);
      bRam0000000003eb4d06 = 1;
    }
    ppppuVar25 = pppppuVar22[2];
    if (((ppppuVar25 == (uint ****)0x0) || (lVar32 == 0)) || (*(long *)(lVar32 + 0x10) == 0)) {
LAB_01504c70:
      func_0x00f78af4();
      *(ulong *)((long)pppppppuVar9 + -0x80) = uVar42;
      *(uint *****)((long)pppppppuVar9 + -0x78) = ppppuVar25;
      *(undefined1 (*) [16])((long)pppppppuVar9 + -0x70) = auVar51;
      *(undefined1 **)((long)pppppppuVar9 + -0x60) = puVar13;
      *(code **)((long)pppppppuVar9 + -0x58) = Atlas_Stats_StatsData__Clone;
      if ((bRam0000000003eb4d07 & 1) == 0) {
        func_0x00f78a20(0x3d24d50);
        bRam0000000003eb4d07 = 1;
      }
      pppppuVar19 = (uint *****)func_0x00f78aec(/*Atlas.Stats.StatsData_TypeInfo*/ uRam0000000003d24d50);
      return pppppuVar19;
    }
    pppppuVar31 = (uint *****)(ulong)*(uint *)(ppppuVar25 + 3);
    uVar42 = *(ulong *)(*(long *)(lVar32 + 0x10) + 0x18);
    if ((int)uVar42 <= (int)*(uint *)(ppppuVar25 + 3)) {
      if (0 < (int)uVar42) {
        if (ppppuVar25 == (uint ****)0x0) goto LAB_01504c70;
        uVar36 = 0;
        uVar1 = *(uint *)(ppppuVar25 + 3);
        do {
          if (uVar1 == uVar36) {
LAB_01504c64:
            uVar17 = func_0x00f78b24();
            func_0x00f78ac0(uVar17,0);
            goto LAB_01504c70;
          }
          lVar41 = *(long *)(lVar32 + 0x10);
          if (lVar41 == 0) goto LAB_01504c70;
          if ((*(uint *)(lVar41 + 0x18) <= uVar36) || (uVar1 <= uVar36)) goto LAB_01504c64;
          iVar16 = *(int *)((long)ppppuVar25 + (uVar36 + 8) * 4);
          iVar15 = *(int *)(lVar41 + uVar36 * 4 + 0x20);
          if (iVar16 <= iVar15) {
            iVar16 = iVar15;
          }
          *(int *)((long)ppppuVar25 + (uVar36 + 8) * 4) = iVar16;
          uVar36 = uVar36 + 1;
        } while ((uVar42 & 0xffffffff) != uVar36);
      }
      return pppppuVar19;
    }
    pppppuVar21 = (uint *****)func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,uVar42);
    ppppuVar25 = pppppuVar22[2];
    pcVar23 = (code *)0x1504be8;
    unaff_x21 = pppppuVar21;
    unaff_x22 = uVar42;
    unaff_x23 = pppppuVar31;
  }
  else {
    pppppppuVar20 = *(uint ********)(*(long *)(param_1 + 0x20) + 0x10);
    if (pppppppuVar20 != (uint *******)0x0) {
      iVar16 = *(int *)(pppppppuVar20 + 3);
      if (pppppppuVar20 == (uint *******)0x0) {
        func_0x00f78a24(0x3d1fcf0,0,iVar16,0);
        pcVar23 = (code *)func_0x00f78aec();
        uVar17 = func_0x00f78a24(0x3d77d18);
        /*System.ArgumentNullException$$.ctor*/ func_0x02920400(pcVar23,uVar17);
      }
      else {
        if (iVar16 < 0) {
          func_0x00f78a24(0x3d22738,0,iVar16,0);
          pcVar23 = (code *)func_0x00f78aec();
          uVar17 = 0x3d7a288;
        }
        else {
          unaff_x21 = (uint *****)0x0;
          iVar15 = func_0x00f807d0(pppppppuVar20,0);
          unaff_x20 = pppppppuVar20;
          if (iVar15 < 1) {
            uVar1 = -iVar15;
            unaff_x21 = (uint *****)(ulong)uVar1;
            iVar15 = /*System.Array$$get_Length*/ func_0x0292ae44(pppppppuVar20);
            if ((int)uVar1 <= iVar15 - iVar16) {
              uVar17 = func_0x00f76cf0(*pppppppuVar20);
              uVar18 = func_0x00faf4d8(pppppppuVar20,uVar17,(long)(int)uVar1);
              pppppuVar19 = (uint *****)_bzero(uVar18,(long)((int)uVar17 * iVar16));
              return pppppuVar19;
            }
            func_0x00f78a24(0x3d22738);
            pcVar23 = (code *)func_0x00f78aec();
            uVar17 = 0x3d79a88;
          }
          else {
            func_0x00f78a24(0x3d22738);
            pcVar23 = (code *)func_0x00f78aec();
            uVar17 = 0x3d79a90;
          }
        }
        uVar17 = func_0x00f78a24(uVar17);
        /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(pcVar23,uVar17,0);
      }
      uVar17 = func_0x00f78a24(0x3d514d8);
      plVar24 = (long *)func_0x00f78ac0(pcVar23,uVar17);
      pppppppuVar14 = (uint *******)&pppppppuStack_50;
      pppppppuStack_50 = unaff_x20;
      pcStack_48 = pcVar23;
      pppppppuVar20 = (uint *******)&stack0xffffffffffffffc0;
      auVar50._8_8_ = 0x3eb8000;
      auVar50._0_8_ = plVar24;
      auVar8._8_8_ = 0x3eb8000;
      auVar8._0_8_ = plVar24;
      if ((bRam0000000003eb8e74 & 1) == 0) {
        func_0x00f78a20(0x3d1eda0);
        bRam0000000003eb8e74 = 1;
      }
      ppppuVar25 = (uint ****)plVar24[4];
      pppppuVar19 = unaff_x21;
      if (ppppuVar25 == (uint ****)0x0) {
        (**(code **)(*plVar24 + 0x2b8))(plVar24,*(undefined8 *)(*plVar24 + 0x2c0));
        ppppuVar25 = (uint ****)plVar24[4];
        if (ppppuVar25 == (uint ****)0x0) {
          puVar49 = &System_Array__Clone;
          ppppuVar25 = (uint ****)func_0x00f78af4();
          goto DAT_00f7ffc4;
        }
      }
      puVar49 = &UNK_029202e0;
      pppppppuVar14 = (uint *******)&pppppppuStack_50;
      auVar50 = auVar8;
      goto DAT_00f7ffc4;
    }
    pcVar23 = Atlas_Stats_StatsData__ResetAndSet;
    auVar50 = func_0x00f78af4();
code_r0x015048e0:
    lVar32 = auVar50._8_8_;
    iVar16 = (int)param_3;
    puVar12 = &stack0xfffffffffffffff0;
    puVar13 = &stack0xfffffffffffffff0;
    pppppppuVar14 = (uint *******)&stack0xffffffffffffffc0;
    pppppppuVar20 = (uint *******)&stack0xffffffffffffffe0;
    pppppuVar19 = (uint *****)0x3eb4000;
    if ((bRam0000000003eb4d05 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb4d05 = 1;
    }
    pppppuVar21 = (uint *****)Atlas_Stats_StatsData__Reset(auVar50._0_8_);
    if (lVar32 == 0) {
      return pppppuVar21;
    }
    ppppuVar25 = *(uint *****)(lVar32 + 0x10);
    if ((ppppuVar25 == (uint ****)0x0) ||
       (pppppuVar21 = *(uint ******)(auVar50._0_8_ + 0x10), pppppuVar21 == (uint *****)0x0)) {
      func_0x00f78af4();
      auVar51 = func_0x00f78e5c(lVar32,0x3eb4000);
      pcStack_48 = Atlas_Stats_StatsData__Add;
      pppppppuStack_50 = pppppppuVar20;
      if ((auVar51._8_8_ != 0) &&
         ((lVar32 = *(long *)(auVar51._8_8_ + 0x10), lVar32 != 0 &&
          (ppppuVar25 = auVar51._0_8_[2], ppppuVar25 != (uint ****)0x0)))) {
        uVar1 = *(uint *)(lVar32 + 0x18);
        uVar36 = (ulong)uVar1;
        uVar38 = (uint)ppppuVar25[3];
        if ((int)uVar38 <= (int)uVar1) {
          uVar1 = uVar38;
        }
        uVar37 = (ulong)uVar1;
        if (0 < (int)uVar1) {
          uVar39 = (ulong)ppppuVar25[3] & 0xffffffff;
          ppppuVar25 = ppppuVar25 + 4;
          piVar40 = (int *)(lVar32 + 0x20);
          do {
            if ((uVar39 == 0) || (uVar36 == 0)) {
              uVar17 = func_0x00f78b24();
              func_0x00f78ac0(uVar17,0);
              goto LAB_01504a20;
            }
            *(int *)ppppuVar25 = *piVar40 + *(int *)ppppuVar25;
            uVar36 = uVar36 - 1;
            uVar39 = uVar39 - 1;
            uVar37 = uVar37 - 1;
            ppppuVar25 = (uint ****)((long)ppppuVar25 + 4);
            piVar40 = piVar40 + 1;
          } while (uVar37 != 0);
        }
        return auVar51._0_8_;
      }
LAB_01504a20:
      auVar55 = func_0x00f78af4();
      pcStack_58 = Atlas_Stats_StatsData__IncrementStat;
      ppppuVar25 = auVar55._0_8_[2];
      if (ppppuVar25 == (uint ****)0x0) {
        pppppppuStack_60 = (uint *******)&pppppppuStack_50;
        func_0x00f78af4();
      }
      else {
        pppppppuStack_60 = (uint *******)&pppppppuStack_50;
        if (auVar55._8_4_ < *(uint *)(ppppuVar25 + 3)) {
          piVar40 = (int *)((long)ppppuVar25 + ((long)(int)auVar55._8_4_ + 8) * 4);
          iVar16 = *piVar40;
          if (iVar16 < 0x3ffffffe) {
            *piVar40 = iVar16 + 1;
          }
          return auVar55._0_8_;
        }
      }
      uVar17 = func_0x00f78b24();
      auVar55 = func_0x00f78ac0(uVar17,0);
      pcStack_68 = Atlas_Stats_StatsData__DecrementStat;
      ppppuVar25 = auVar55._0_8_[2];
      if (ppppuVar25 == (uint ****)0x0) {
        pppppppuStack_70 = (uint *******)&pppppppuStack_60;
        func_0x00f78af4();
      }
      else {
        pppppppuStack_70 = (uint *******)&pppppppuStack_60;
        if (auVar55._8_4_ < *(uint *)(ppppuVar25 + 3)) {
          piVar40 = (int *)((long)ppppuVar25 + ((long)(int)auVar55._8_4_ + 8) * 4);
          iVar16 = *piVar40;
          if (-0x3fffffff < iVar16) {
            *piVar40 = iVar16 + -1;
          }
          return auVar55._0_8_;
        }
      }
      uVar17 = func_0x00f78b24();
      auVar55 = func_0x00f78ac0(uVar17,0);
      pppppppuVar9 = (uint *******)&pppppppuStack_80;
      pcStack_78 = Atlas_Stats_StatsData__SetStat;
      ppppuVar25 = auVar55._0_8_[2];
      if (ppppuVar25 == (uint ****)0x0) {
        pppppppuStack_80 = (uint *******)&pppppppuStack_70;
        func_0x00f78af4();
      }
      else {
        pppppppuStack_80 = (uint *******)&pppppppuStack_70;
        if (auVar55._8_4_ < *(uint *)(ppppuVar25 + 3)) {
          if (iVar16 < -0x3ffffffe) {
            iVar16 = -0x3fffffff;
          }
          if (0x3ffffffd < iVar16) {
            iVar16 = 0x3ffffffe;
          }
          *(int *)((long)ppppuVar25 + ((long)(int)auVar55._8_4_ + 8) * 4) = iVar16;
          return auVar55._0_8_;
        }
      }
      uVar17 = func_0x00f78b24();
      auVar55 = func_0x00f78ac0(uVar17,0);
      pppppppuVar20 = (uint *******)&pppppppuStack_80;
      pcVar23 = Atlas_Stats_StatsData__GetStat;
      goto code_r0x01504b20;
    }
    pppppuVar31 = (uint *****)(ulong)*(uint *)(ppppuVar25 + 3);
    if (*(int *)(pppppuVar21 + 3) < (int)*(uint *)(ppppuVar25 + 3)) {
      puVar49 = (undefined *)0x150494c;
DAT_00f7ffc4:
      *(ulong *)((long)pppppppuVar14 + -0x30) = unaff_x22;
      *(uint ******)((long)pppppppuVar14 + -0x28) = pppppuVar19;
      *(long *)((long)pppppppuVar14 + -0x20) = auVar50._8_8_;
      *(long *)((long)pppppppuVar14 + -0x18) = auVar50._0_8_;
      *(uint ********)((long)pppppppuVar14 + -0x10) = pppppppuVar20;
      *(undefined **)((long)pppppppuVar14 + -8) = puVar49;
      ppppuVar45 = (uint ****)*ppppuVar25;
      if (*(char *)((long)ppppuVar45 + 0x12e) != '\0') {
        *(undefined8 *)((long)pppppppuVar14 + -0x30) = *(undefined8 *)((long)pppppppuVar14 + -0x30);
        *(undefined8 *)((long)pppppppuVar14 + -0x28) = *(undefined8 *)((long)pppppppuVar14 + -0x28);
        *(undefined8 *)((long)pppppppuVar14 + -0x20) = *(undefined8 *)((long)pppppppuVar14 + -0x20);
        *(undefined8 *)((long)pppppppuVar14 + -0x18) = *(undefined8 *)((long)pppppppuVar14 + -0x18);
        *(undefined8 *)((long)pppppppuVar14 + -0x10) = *(undefined8 *)((long)pppppppuVar14 + -0x10);
        *(undefined8 *)((long)pppppppuVar14 + -8) = *(undefined8 *)((long)pppppppuVar14 + -8);
        pppuVar44 = *ppppuVar25;
        uVar42 = (ulong)*(uint *)(pppuVar44 + 0x20);
        if (ppppuVar25[2] == (uint ***)0x0) {
          uVar1 = *(uint *)(ppppuVar25 + 3);
          *(ulong *)((long)pppppppuVar14 + -0x48) = (ulong)uVar1;
          pppppuVar19 = (uint *****)
                        func_0x00faf0d0(pppuVar44,(undefined1 *)((long)pppppppuVar14 + -0x48),0);
          _memcpy(pppppuVar19 + 4,ppppuVar25 + 4,uVar1 * uVar42);
        }
        else {
          func_0x00901764((undefined1 *)((long)pppppppuVar14 + -0x48),
                          *(undefined1 *)((long)pppuVar44 + 0x12e));
          func_0x00901764((undefined1 *)((long)pppppppuVar14 + -0x60),
                          *(undefined1 *)((long)pppuVar44 + 0x12e));
          if (*(char *)((long)pppuVar44 + 0x12e) != '\0') {
            lVar32 = 0;
            uVar36 = 0;
            do {
              *(undefined8 *)(*(long *)((long)pppppppuVar14 + -0x48) + uVar36 * 8) =
                   *(undefined8 *)((long)ppppuVar25[2] + lVar32);
              uVar42 = *(long *)((long)ppppuVar25[2] + lVar32) * uVar42;
              *(long *)(*(long *)((long)pppppppuVar14 + -0x60) + uVar36 * 8) =
                   (long)(int)((long *)((long)ppppuVar25[2] + lVar32))[1];
              uVar36 = uVar36 + 1;
              lVar32 = lVar32 + 0x10;
            } while (uVar36 < *(byte *)((long)pppuVar44 + 0x12e));
          }
          pppppuVar19 = (uint *****)
                        func_0x00faf0d0(pppuVar44,*(undefined8 *)((long)pppppppuVar14 + -0x48),
                                        *(undefined8 *)((long)pppppppuVar14 + -0x60));
          _memcpy(pppppuVar19 + 4,ppppuVar25 + 4,uVar42);
          if (*(long *)((long)pppppppuVar14 + -0x60) != 0) {
            *(long *)((long)pppppppuVar14 + -0x58) = *(long *)((long)pppppppuVar14 + -0x60);
            func_0x00523aec();
          }
          if (*(long *)((long)pppppppuVar14 + -0x48) != 0) {
            *(long *)((long)pppppppuVar14 + -0x40) = *(long *)((long)pppppppuVar14 + -0x48);
            func_0x00523aec();
          }
        }
        return pppppuVar19;
      }
      iVar16 = *(int *)(ppppuVar45 + 0x1f);
      pppppuVar19 = (uint *****)func_0x00f6e3b8((long)iVar16,0);
      *pppppuVar19 = ppppuVar45;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(0x3ff71e8,0x10);
        if (bVar4) {
          cVar3 = ExclusiveMonitorsStatus();
          lRam0000000003ff71e8 = lRam0000000003ff71e8 + 1;
        }
      } while (cVar3 != '\0');
      _memcpy(pppppuVar19 + 2,ppppuVar25 + 2,(long)iVar16 + -0x10);
      if ((*(byte *)((long)*ppppuVar25 + 0x133) >> 1 & 1) != 0) {
        func_0x00f7a274(pppppuVar19);
      }
      if (cRam0000000003ff7438 < '\0') {
        func_0x00fc51b8(pppppuVar19,*ppppuVar25);
      }
      return pppppuVar19;
    }
  }
  uVar17 = auVar51._0_8_;
  lVar32 = 0;
  *(ulong *)(puVar12 + -0x30) = unaff_x22;
  *(uint ******)(puVar12 + -0x28) = unaff_x21;
  *(undefined1 (*) [16])(puVar12 + -0x20) = auVar51;
  *(undefined1 **)(puVar12 + -0x10) = puVar13;
  *(code **)(puVar12 + -8) = pcVar23;
  if (ppppuVar25 == (uint ****)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar26 = func_0x00f78aec();
    uVar18 = 0x3d7b900;
    pppppuVar21 = pppppuVar31;
    pppppuVar31 = param_5;
code_r0x0292c538:
    uVar18 = func_0x00f78a24(uVar18);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar26,uVar18);
    uVar18 = func_0x00f78a24(0x3d514e0);
    auVar54 = func_0x00f78ac0(uVar26,uVar18);
    *(undefined8 *)(puVar12 + -0x50) = uVar17;
    *(undefined8 *)(puVar12 + -0x48) = uVar26;
    *(undefined1 **)(puVar12 + -0x40) = puVar12 + -0x10;
    *(undefined **)(puVar12 + -0x38) = &System_Array__Copy;
    if (auVar54._8_8_ == (long)auVar54._8_4_) {
      if (lVar32 == (int)lVar32) {
        if (pppppuVar31 == (uint *****)(long)(int)pppppuVar31) {
          uVar17 = *(undefined8 *)(puVar12 + -0x40);
          uVar26 = *(undefined8 *)(puVar12 + -0x38);
          puVar13 = puVar12 + -0x30;
          uVar18 = *(undefined8 *)(puVar12 + -0x50);
          uVar43 = *(undefined8 *)(puVar12 + -0x48);
          goto System_Array__Copy;
        }
        func_0x00f78a24(0x3d1fcf8);
        uVar18 = func_0x00f78aec();
        uVar17 = 0x3d7a280;
      }
      else {
        func_0x00f78a24(0x3d1fcf8);
        uVar18 = func_0x00f78aec();
        uVar17 = 0x3d78af0;
      }
    }
    else {
      func_0x00f78a24(0x3d1fcf8);
      uVar18 = func_0x00f78aec();
      uVar17 = 0x3d7b910;
    }
    uVar17 = func_0x00f78a24(uVar17);
    lVar32 = func_0x00f78a24(0x3d69268);
    /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar18,uVar17);
    uVar26 = func_0x00f78a24(0x3d514f8);
    auVar51 = func_0x00f78ac0(uVar18,uVar26);
    plVar24 = auVar51._8_8_;
    uVar26 = auVar51._0_8_;
    if (lVar32 != (int)lVar32) {
      *(undefined8 *)(puVar12 + -0x70) = uVar17;
      *(undefined8 *)(puVar12 + -0x68) = uVar18;
      *(undefined1 **)(puVar12 + -0x60) = puVar12 + -0x40;
      *(undefined **)(puVar12 + -0x58) = &System_Array__CopyTo;
      func_0x00f78a24(0x3d1fcf8);
      uVar17 = func_0x00f78aec();
      uVar18 = func_0x00f78a24(0x3d79a60);
      uVar26 = func_0x00f78a24(0x3d69268);
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar17,uVar18,uVar26);
      uVar26 = func_0x00f78a24(0x3d51508);
      plVar24 = (long *)func_0x00f78ac0(uVar17,uVar26);
      *(ulong *)(puVar12 + -0xa0) = unaff_x22;
      *(uint ******)(puVar12 + -0x98) = unaff_x21;
      *(undefined8 *)(puVar12 + -0x90) = uVar18;
      *(undefined8 *)(puVar12 + -0x88) = uVar17;
      *(undefined1 **)(puVar12 + -0x80) = puVar12 + -0x60;
      *(undefined **)(puVar12 + -0x78) = &System_Array__get_LongLength;
      func_0x00f8078c(plVar24,0);
      goto code_r0x00f80814;
    }
    *(ulong *)(puVar12 + -0x80) = unaff_x22;
    *(uint ******)(puVar12 + -0x78) = unaff_x21;
    *(undefined8 *)(puVar12 + -0x70) = uVar17;
    *(undefined8 *)(puVar12 + -0x68) = uVar18;
    *(undefined1 **)(puVar12 + -0x60) = puVar12 + -0x40;
    *(undefined **)(puVar12 + -0x58) = &System_Array__CopyTo;
    if (plVar24 != (long *)0x0) goto code_r0x00f80814;
    uVar17 = func_0x00f807d0(uVar26,0);
    auVar54._8_8_ = uVar17;
    auVar54._0_8_ = uVar26;
    pppppuVar31 = (uint *****)/*System.Array$$get_Length*/ func_0x0292ae44(uVar26);
    uVar17 = *(undefined8 *)(puVar12 + -0x60);
    uVar26 = *(undefined8 *)(puVar12 + -0x58);
    uVar18 = *(undefined8 *)(puVar12 + -0x70);
    uVar43 = *(undefined8 *)(puVar12 + -0x68);
    puVar13 = puVar12 + -0x50;
    unaff_x22 = *(ulong *)(puVar12 + -0x80);
    unaff_x21 = *(uint ******)(puVar12 + -0x78);
    pppppuVar21 = (uint *****)0x0;
  }
  else {
    if (pppppuVar21 == (uint *****)0x0) {
      func_0x00f78a24(0x3d1fcf0);
      uVar26 = func_0x00f78aec();
      uVar18 = 0x3d78ae8;
      uVar17 = 0;
      pppppuVar21 = pppppuVar31;
      pppppuVar31 = param_5;
      goto code_r0x0292c538;
    }
    uVar17 = func_0x00f807d0(ppppuVar25,0);
    auVar54._8_8_ = uVar17;
    auVar54._0_8_ = ppppuVar25;
    func_0x00f807d0(pppppuVar21,0);
    uVar17 = *(undefined8 *)(puVar12 + -0x10);
    uVar26 = *(undefined8 *)(puVar12 + -8);
    uVar18 = *(undefined8 *)(puVar12 + -0x20);
    uVar43 = *(undefined8 *)(puVar12 + -0x18);
    unaff_x22 = *(ulong *)(puVar12 + -0x30);
    unaff_x21 = *(uint ******)(puVar12 + -0x28);
    puVar13 = puVar12;
  }
System_Array__Copy:
  uVar30 = auVar54._8_8_;
  plVar24 = auVar54._0_8_;
  *(undefined8 *)(puVar13 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar13 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar13 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar13 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar13 + -0x40) = unaff_x24;
  *(uint ******)(puVar13 + -0x38) = unaff_x23;
  *(ulong *)(puVar13 + -0x30) = unaff_x22;
  *(uint ******)(puVar13 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar13 + -0x20) = uVar18;
  *(undefined8 *)(puVar13 + -0x18) = uVar43;
  *(undefined8 *)(puVar13 + -0x10) = uVar17;
  *(undefined8 *)(puVar13 + -8) = uVar26;
  if (plVar24 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0,uVar30);
    puVar27 = (undefined8 *)func_0x00f78aec();
    uVar17 = 0x3d7b900;
  }
  else {
    if (pppppuVar21 != (uint *****)0x0) {
      if (-1 < (int)pppppuVar31) {
code_r0x00f80814:
        return (uint *****)(ulong)*(byte *)(*plVar24 + 0x12e);
      }
      uVar17 = func_0x00f78a24(0x3d75f70,uVar30);
      uVar17 = /*Locale$$GetText*/ func_0x02af42b4(uVar17,0);
      func_0x00f78a24(0x3d1fcf8);
      uVar18 = func_0x00f78aec();
      uVar26 = func_0x00f78a24(0x3d7a280);
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar18,uVar26,uVar17);
      uVar17 = func_0x00f78a24(0x3d514f0);
      func_0x00f78ac0(uVar18,uVar17);
      func_0x00f78af4();
      func_0x00f78a24(0x3d1fcf8);
      puVar27 = (undefined8 *)func_0x00f78aec();
      uVar18 = func_0x00f78a24(0x3d78af0);
      uVar17 = func_0x00f78a24(0x3d6de20);
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(puVar27,uVar18,uVar17);
      goto code_r0x0292b958;
    }
    func_0x00f78a24(0x3d1fcf0,uVar30);
    puVar27 = (undefined8 *)func_0x00f78aec();
    uVar17 = 0x3d78ae8;
  }
  uVar17 = func_0x00f78a24(uVar17);
  /*System.ArgumentNullException$$.ctor*/ func_0x02920400(puVar27,uVar17);
code_r0x0292b958:
  while( true ) {
    uVar17 = func_0x00f78a24(0x3d514f0);
    func_0x00f78ac0(puVar27,uVar17);
    uVar17 = func_0x00f78a24(0x3d23988);
    uVar42 = func_0x00f78ed4(uVar17,*(undefined8 *)*puVar27);
    if ((uVar42 & 1) == 0) break;
    puVar27 = (undefined8 *)*puVar27;
    ___cxa_end_catch();
    iVar16 = /*System.Array$$CanAssignArrayElement*/ func_0x0292e90c(*(undefined8 *)(puVar13 + -0x68),uVar18);
    if (iVar16 == 0) {
      puVar27 = (undefined8 *)/*System.Array$$CreateArrayTypeMismatchException*/ func_0x0292e8b8();
    }
  }
  puVar28 = (undefined8 *)___cxa_allocate_exception(8);
  *puVar28 = *puVar27;
  ___cxa_throw(puVar28,&DAT_03a5ed38,0);
                    /* WARNING: Does not return */
  pcVar23 = (code *)SoftwareBreakpoint(1,0x292b9cc);
  (*pcVar23)();
}



// ============================================================
// RVA: 0x15050a0 | Atlas.Stats.StatsManager.ResetAndSet
// ============================================================

/* WARNING: Possible PIC construction at 0x01504be4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01504cc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0292b50c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0292b43c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0292c6bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0292c6e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01505464: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0292c6ec) */
/* WARNING: Removing unreachable block (ram,0x0292c6c0) */
/* WARNING: Removing unreachable block (ram,0x0292c6f4) */
/* WARNING: Removing unreachable block (ram,0x0292c6c8) */
/* WARNING: Removing unreachable block (ram,0x0292c6cc) */
/* WARNING: Removing unreachable block (ram,0x0292b440) */
/* WARNING: Removing unreachable block (ram,0x0292b484) */
/* WARNING: Removing unreachable block (ram,0x0292b510) */
/* WARNING: Removing unreachable block (ram,0x0292b70c) */
/* WARNING: Removing unreachable block (ram,0x0292b524) */
/* WARNING: Removing unreachable block (ram,0x0292b740) */
/* WARNING: Removing unreachable block (ram,0x0292b528) */
/* WARNING: Removing unreachable block (ram,0x0292b778) */
/* WARNING: Removing unreachable block (ram,0x0292b52c) */
/* WARNING: Removing unreachable block (ram,0x0292b548) */
/* WARNING: Removing unreachable block (ram,0x0292b56c) */
/* WARNING: Removing unreachable block (ram,0x0292b820) */
/* WARNING: Removing unreachable block (ram,0x0292b588) */
/* WARNING: Removing unreachable block (ram,0x0292b850) */
/* WARNING: Removing unreachable block (ram,0x0292b59c) */
/* WARNING: Removing unreachable block (ram,0x0292b5ac) */
/* WARNING: Removing unreachable block (ram,0x0292b5d0) */
/* WARNING: Removing unreachable block (ram,0x0292b5ec) */
/* WARNING: Removing unreachable block (ram,0x0292b634) */
/* WARNING: Removing unreachable block (ram,0x0292b638) */
/* WARNING: Removing unreachable block (ram,0x0292b5f4) */
/* WARNING: Removing unreachable block (ram,0x0292b604) */
/* WARNING: Removing unreachable block (ram,0x0292b664) */
/* WARNING: Removing unreachable block (ram,0x0292b60c) */
/* WARNING: Removing unreachable block (ram,0x01504cc4) */
/* WARNING: Removing unreachable block (ram,0x01504ce8) */
/* WARNING: Removing unreachable block (ram,0x01504cc8) */
/* WARNING: Removing unreachable block (ram,0x01504be8) */
/* WARNING: Removing unreachable block (ram,0x01505468) */
/* WARNING: Removing unreachable block (ram,0x0150547c) */
/* WARNING: Type propagation algorithm not settling */

undefined4 *
Atlas_Stats_StatsManager__ResetAndSet
          (long param_1,long param_2,undefined1 *param_3,undefined8 param_4,undefined4 *param_5)

{
  uint uVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  code **ppcVar4;
  uint **ppuVar5;
  undefined1 **ppuVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined4 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  code *pcVar14;
  code *pcVar15;
  int iVar9;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  long *plVar20;
  undefined8 uVar21;
  undefined4 *puVar22;
  ulong uVar23;
  int *piVar24;
  undefined1 *puVar25;
  long lVar26;
  ulong uVar27;
  uint uVar28;
  ulong uVar29;
  long lVar30;
  int *piVar31;
  long lVar32;
  code *unaff_x19;
  undefined8 uVar33;
  code *unaff_x20;
  undefined4 *puVar34;
  undefined4 *unaff_x21;
  undefined1 *unaff_x22;
  undefined4 *unaff_x23;
  undefined1 *unaff_x24;
  undefined1 *unaff_x25;
  undefined1 *unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  code **ppcVar35;
  undefined1 *unaff_x29;
  uint **ppuVar36;
  undefined1 **ppuVar37;
  code *pcVar38;
  undefined8 unaff_x30;
  undefined *puVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [12];
  long alStack_120 [14];
  uint *apuStack_b0 [2];
  undefined *apuStack_a0 [2];
  code **ppcStack_90;
  code *pcStack_88;
  code **ppcStack_70;
  code *pcStack_68;
  undefined1 **ppuStack_60;
  code *apcStack_58 [3];
  undefined1 **ppuStack_40;
  code *pcStack_38;
  
  auVar40._8_8_ = unaff_x19;
  auVar40._0_8_ = unaff_x20;
  pcVar14 = *(code **)(param_1 + 0x20);
  if (pcVar14 == (code *)0x0) {
    auVar40 = func_0x00f78af4();
    pcVar38 = auVar40._0_8_;
    pcVar14 = unaff_x19;
    if (*(long *)(pcVar38 + 0x20) == 0) {
code_r0x01505118:
      func_0x00f78af4();
    }
    else {
      Atlas_Stats_StatsData__IncrementStat();
      lVar11 = *(long *)(pcVar38 + 0x28);
      pcVar14 = auVar40._8_8_;
      if (lVar11 == 0) goto code_r0x01505118;
      if (auVar40._8_4_ < *(uint *)(lVar11 + 0x18)) {
        puVar34 = *(undefined4 **)(lVar11 + ((long)(int)auVar40._8_4_ + 4) * 8);
        if (puVar34 == (undefined4 *)0x0) {
          return (undefined4 *)0x0;
        }
        ppuVar6 = (undefined1 **)&stack0xfffffffffffffff0;
        ppuVar37 = (undefined1 **)&stack0xfffffffffffffff0;
        pcVar14 = (code *)&Atlas_Stats_StatsManager__IncrementStat;
        goto System_Action__Invoke;
      }
    }
    uVar12 = func_0x00f78b24();
    auVar40 = func_0x00f78ac0(uVar12,0);
    pcVar15 = auVar40._0_8_;
    pcStack_38 = (code *)&Atlas_Stats_StatsManager__DecrementStat;
    apcStack_58[1] = pcVar38;
    apcStack_58[2] = pcVar14;
    ppuStack_40 = (undefined1 **)&stack0xffffffffffffffe0;
    if (*(long *)(pcVar15 + 0x20) == 0) {
code_r0x01505184:
      func_0x00f78af4();
    }
    else {
      Atlas_Stats_StatsData__DecrementStat();
      lVar11 = *(long *)(pcVar15 + 0x28);
      pcVar14 = auVar40._8_8_;
      if (lVar11 == 0) goto code_r0x01505184;
      if (auVar40._8_4_ < *(uint *)(lVar11 + 0x18)) {
        puVar34 = *(undefined4 **)(lVar11 + ((long)(int)auVar40._8_4_ + 4) * 8);
        if (puVar34 == (undefined4 *)0x0) {
          return (undefined4 *)0x0;
        }
        ppuVar6 = (undefined1 **)&stack0xffffffffffffffd0;
        unaff_x19 = apcStack_58[2];
        unaff_x20 = apcStack_58[1];
        ppuVar37 = ppuStack_40;
        pcVar14 = pcStack_38;
        goto System_Action__Invoke;
      }
    }
    uVar12 = func_0x00f78b24();
    auVar40 = func_0x00f78ac0(uVar12,0);
    pcVar38 = auVar40._8_8_;
    param_2 = auVar40._0_8_;
    apcStack_58[0] = (code *)&Atlas_Stats_StatsManager__SetStat;
    puVar34 = unaff_x21;
    puVar7 = unaff_x22;
    ppcStack_70 = (code **)pcVar15;
    pcStack_68 = pcVar14;
    ppuStack_60 = (undefined1 **)&ppuStack_40;
    if (*(long *)(param_2 + 0x20) == 0) {
code_r0x01505234:
      func_0x00f78af4();
    }
    else {
      puVar34 = (undefined4 *)Atlas_Stats_StatsData__GetStat();
      pcVar14 = pcVar38;
      puVar7 = param_3;
      if (*(long *)(param_2 + 0x20) == 0) goto code_r0x01505234;
      Atlas_Stats_StatsData__SetStat(*(long *)(param_2 + 0x20),pcVar38,param_3);
      if (*(long *)(param_2 + 0x20) == 0) goto code_r0x01505234;
      puVar10 = (undefined4 *)Atlas_Stats_StatsData__GetStat(*(long *)(param_2 + 0x20),pcVar38);
      if ((int)puVar10 == (int)puVar34) {
        return puVar10;
      }
      lVar11 = *(long *)(param_2 + 0x28);
      if (lVar11 == 0) goto code_r0x01505234;
      if (auVar40._8_4_ < *(uint *)(lVar11 + 0x18)) {
        puVar34 = *(undefined4 **)(lVar11 + (long)(int)auVar40._8_4_ * 8 + 0x20);
        if (puVar34 == (undefined4 *)0x0) {
          return (undefined4 *)0x0;
        }
        ppuVar6 = apcStack_58 + 1;
        unaff_x19 = pcStack_68;
        unaff_x20 = (code *)ppcStack_70;
        ppuVar37 = ppuStack_60;
        pcVar14 = apcStack_58[0];
System_Action__Invoke:
        uVar12 = 0;
        ppuVar6[0xfffffffffffffff6] = unaff_x26;
        ppuVar6[0xfffffffffffffff7] = unaff_x25;
        ppuVar6[0xfffffffffffffff8] = unaff_x24;
        ppuVar6[0xfffffffffffffff9] = (undefined1 *)unaff_x23;
        ppuVar6[0xfffffffffffffffa] = unaff_x22;
        ppuVar6[0xfffffffffffffffb] = (undefined1 *)unaff_x21;
        ppuVar6[0xfffffffffffffffc] = unaff_x20;
        ppuVar6[0xfffffffffffffffd] = unaff_x19;
        ppuVar6[0xfffffffffffffffe] = (undefined1 *)ppuVar37;
        ppuVar6[0xffffffffffffffff] = pcVar14;
        ppuVar6[0xfffffffffffffff5] = (undefined1 *)puVar34;
        lVar11 = *(long *)(puVar34 + 0x1a);
        if (lVar11 == 0) {
          ppuVar6 = ppuVar6 + 0xfffffffffffffff5;
          lVar30 = 1;
        }
        else {
          lVar30 = *(long *)(lVar11 + 0x18);
          if (lVar30 == 0) {
            return puVar34;
          }
          ppuVar6 = (undefined1 **)(lVar11 + 0x20);
        }
        lVar11 = 0;
        do {
          lVar32 = (long)ppuVar6[lVar11];
          pcVar14 = *(code **)(lVar32 + 0x10);
          plVar20 = *(long **)(lVar32 + 0x20);
          lVar32 = *(long *)(lVar32 + 0x28);
          if (*(short *)(lVar32 + 0x48) == -1) {
            func_0x00f78ad8(lVar32,uVar12);
          }
          iVar9 = func_0x00f78a4c(lVar32);
          if (iVar9 == 0) {
            if ((((plVar20 == (long *)0x0) || (*(short *)(lVar32 + 0x48) == -1)) ||
                ((*(byte *)(*plVar20 + 0x115) & 1) != 0)) || (*(long *)(puVar34 + 6) == 0))
            goto code_r0x02924d98;
            iVar9 = func_0x00f78a44(lVar32);
            iVar8 = func_0x00f78ec0(lVar32);
            if (iVar9 == 0) {
              uVar2 = *(ushort *)(lVar32 + 0x48);
              if (iVar8 == 0) {
                lVar32 = *plVar20 + (ulong)uVar2 * 0x10;
                auVar40 = (**(code **)(lVar32 + 0x138))(plVar20,*(undefined8 *)(lVar32 + 0x140));
                goto code_r0x02924da4;
              }
              lVar32 = func_0x00f78a48(lVar32);
              lVar26 = *plVar20;
              uVar23 = (ulong)*(ushort *)(lVar26 + 0x12a);
              if (uVar23 != 0) {
                piVar24 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar24 + -2) == lVar32) {
                    puVar17 = (undefined8 *)
                              (lVar26 + (long)(int)(*piVar24 + (uint)uVar2) * 0x10 + 0x138);
                    goto code_r0x02924e68;
                  }
                  piVar24 = piVar24 + 4;
                  uVar23 = uVar23 - 1;
                } while (uVar23 != 0);
              }
              puVar17 = (undefined8 *)func_0x00fac1f0(plVar20,lVar32,(ulong)uVar2);
code_r0x02924e68:
              pcVar14 = (code *)*puVar17;
              puVar17 = (undefined8 *)puVar17[1];
            }
            else {
              if (iVar8 == 0) {
                uVar12 = *(undefined8 *)
                          (*plVar20 + (ulong)*(ushort *)(lVar32 + 0x48) * 0x10 + 0x140);
              }
              else {
                lVar26 = *plVar20;
                uVar23 = (ulong)*(ushort *)(lVar26 + 0x12a);
                if (uVar23 != 0) {
                  piVar24 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar24 + -2) == *(long *)(lVar32 + 0x18)) {
                      lVar26 = lVar26 + (long)(int)(*piVar24 + (uint)*(ushort *)(lVar32 + 0x48)) *
                                        0x10 + 0x138;
                      goto code_r0x02924e40;
                    }
                    piVar24 = piVar24 + 4;
                    uVar23 = uVar23 - 1;
                  } while (uVar23 != 0);
                }
                lVar26 = func_0x00fac1f0(plVar20);
code_r0x02924e40:
                uVar12 = *(undefined8 *)(lVar26 + 8);
              }
              puVar17 = (undefined8 *)func_0x00f78acc(uVar12,lVar32);
              pcVar14 = (code *)*puVar17;
            }
            auVar40 = (*pcVar14)(plVar20,puVar17);
          }
          else if (*(char *)(lVar32 + 0x4a) == '\0') {
            auVar40 = (*pcVar14)(lVar32);
          }
          else {
code_r0x02924d98:
            auVar40 = (*pcVar14)(plVar20,lVar32);
          }
code_r0x02924da4:
          uVar12 = auVar40._8_8_;
          lVar11 = lVar11 + 1;
          if (lVar11 == lVar30) {
            return auVar40._0_8_;
          }
        } while( true );
      }
    }
    auVar42._8_8_ = pcVar14;
    auVar42._0_8_ = param_2;
    uVar12 = func_0x00f78b24();
    auVar44 = func_0x00f78ac0(uVar12,0);
    pcStack_88 = (code *)&Atlas_Stats_StatsManager__GetStat;
    lVar11 = *(long *)(auVar44._0_8_ + 0x20);
    auVar44._8_4_ = auVar44._8_4_;
    auVar44._0_8_ = lVar11;
    unaff_x22 = puVar7;
    ppcStack_90 = (code **)&ppuStack_60;
    if (lVar11 == 0) {
      auVar44 = func_0x00f78af4();
      ppcVar35 = (code **)((long)apuStack_b0 + 0x10);
      apuStack_a0[1] = &Atlas_Stats_StatsManager__GetTransactionStat;
      lVar11 = *(long *)(auVar44._0_8_ + 0x18);
      auVar44._8_4_ = auVar44._8_4_;
      auVar44._0_8_ = lVar11;
      if (lVar11 == 0) {
        apuStack_a0[0] = (undefined *)((long)apuStack_b0 + 0x20);
        auVar44 = func_0x00f78af4();
        ppuVar36 = apuStack_b0;
        apuStack_b0[1] = (uint *)&Atlas_Stats_StatsManager__GetCommittedStat;
        lVar11 = *(long *)(auVar44._0_8_ + 0x10);
        auVar44._8_4_ = auVar44._8_4_;
        auVar44._0_8_ = lVar11;
        if (lVar11 == 0) {
          puVar39 = &Atlas_Stats_StatsManager__GetGlobalStat;
          apuStack_b0[0] = (uint *)((long)apuStack_b0 + 0x10);
          auVar41 = func_0x00f78af4();
          ppuVar5 = apuStack_b0;
          do {
            lVar11 = auVar41._0_8_;
            *(undefined1 **)((long)ppuVar5 + -0x30) = puVar7;
            *(undefined4 **)((long)ppuVar5 + -0x28) = puVar34;
            *(undefined1 (*) [16])((long)ppuVar5 + -0x20) = auVar42;
            *(uint ***)((long)ppuVar5 + -0x10) = ppuVar36;
            *(undefined **)((long)ppuVar5 + -8) = puVar39;
            uVar12 = auVar42._8_8_;
            if (*(long *)(lVar11 + 0x10) != 0) {
              puVar34 = (undefined4 *)Atlas_Stats_StatsData__GetStat();
              uVar12 = auVar41._8_8_;
              if (*(long *)(lVar11 + 0x18) != 0) {
                iVar9 = Atlas_Stats_StatsData__GetStat(*(long *)(lVar11 + 0x18),auVar41._8_8_);
                return (undefined4 *)(ulong)(uint)(iVar9 + (int)puVar34);
              }
            }
            auVar3._8_8_ = uVar12;
            auVar3._0_8_ = lVar11;
            auVar40 = func_0x00f78af4();
            lVar30 = auVar40._8_8_;
            *(undefined1 **)((long)ppuVar5 + -0x70) = unaff_x24;
            *(undefined4 **)((long)ppuVar5 + -0x68) = unaff_x23;
            *(undefined1 **)((long)ppuVar5 + -0x60) = puVar7;
            *(undefined4 **)((long)ppuVar5 + -0x58) = puVar34;
            *(long *)((long)ppuVar5 + -0x50) = lVar11;
            *(undefined8 *)((long)ppuVar5 + -0x48) = uVar12;
            *(undefined1 **)((long)ppuVar5 + -0x40) = (undefined1 *)((long)ppuVar5 + -0x10);
            *(undefined **)((long)ppuVar5 + -0x38) =
                 &Atlas_Stats_StatsManager__GetSummedCommittedStats;
            if (lVar30 == 0) {
code_r0x01505370:
              func_0x00f78af4();
            }
            else {
              if ((int)*(ulong *)(lVar30 + 0x18) < 1) {
                return (undefined4 *)0x0;
              }
              puVar34 = (undefined4 *)0x0;
              puVar7 = (undefined1 *)0x0;
              puVar25 = (undefined1 *)(*(ulong *)(lVar30 + 0x18) & 0xffffffff);
              unaff_x23 = (undefined4 *)(lVar30 + 0x20);
              while (auVar3 = auVar40, puVar7 < puVar25) {
                lVar11 = *(long *)(auVar40._0_8_ + 0x10);
                if (lVar11 == 0) goto code_r0x01505370;
                iVar9 = Atlas_Stats_StatsData__GetStat(lVar11,unaff_x23[(long)puVar7]);
                puVar34 = (undefined4 *)(ulong)(uint)(iVar9 + (int)puVar34);
                puVar7 = puVar7 + 1;
                puVar25 = (undefined1 *)(ulong)*(uint *)(lVar30 + 0x18);
                if ((long)(int)*(uint *)(lVar30 + 0x18) <= (long)puVar7) {
                  return puVar34;
                }
              }
            }
            uVar12 = func_0x00f78b24();
            auVar40 = func_0x00f78ac0(uVar12,0);
            lVar11 = auVar40._8_8_;
            *(undefined1 **)((long)ppuVar5 + -0xb0) = unaff_x24;
            *(undefined4 **)((long)ppuVar5 + -0xa8) = unaff_x23;
            *(undefined1 **)((long)ppuVar5 + -0xa0) = puVar7;
            *(undefined4 **)((long)ppuVar5 + -0x98) = puVar34;
            *(undefined1 (*) [16])((long)ppuVar5 + -0x90) = auVar3;
            *(undefined1 **)((long)ppuVar5 + -0x80) = (undefined1 *)((long)ppuVar5 + -0x40);
            *(undefined **)((long)ppuVar5 + -0x78) =
                 &Atlas_Stats_StatsManager__GetSummedTransactionStats;
            if (lVar11 == 0) {
code_r0x01505408:
              func_0x00f78af4();
            }
            else {
              if ((int)*(ulong *)(lVar11 + 0x18) < 1) {
                return (undefined4 *)0x0;
              }
              puVar34 = (undefined4 *)0x0;
              puVar7 = (undefined1 *)0x0;
              puVar25 = (undefined1 *)(*(ulong *)(lVar11 + 0x18) & 0xffffffff);
              unaff_x23 = (undefined4 *)(lVar11 + 0x20);
              while (auVar3 = auVar40, puVar7 < puVar25) {
                lVar30 = *(long *)(auVar40._0_8_ + 0x18);
                if (lVar30 == 0) goto code_r0x01505408;
                iVar9 = Atlas_Stats_StatsData__GetStat(lVar30,unaff_x23[(long)puVar7]);
                puVar34 = (undefined4 *)(ulong)(uint)(iVar9 + (int)puVar34);
                puVar7 = puVar7 + 1;
                puVar25 = (undefined1 *)(ulong)*(uint *)(lVar11 + 0x18);
                if ((long)(int)*(uint *)(lVar11 + 0x18) <= (long)puVar7) {
                  return puVar34;
                }
              }
            }
            uVar12 = func_0x00f78b24();
            auVar42 = func_0x00f78ac0(uVar12,0);
            lVar11 = auVar42._8_8_;
            *(undefined1 **)((long)ppuVar5 + -0xf0) = unaff_x24;
            *(undefined4 **)((long)ppuVar5 + -0xe8) = unaff_x23;
            *(undefined1 **)((long)ppuVar5 + -0xe0) = puVar7;
            *(undefined4 **)((long)ppuVar5 + -0xd8) = puVar34;
            *(undefined1 (*) [16])((long)ppuVar5 + -0xd0) = auVar3;
            *(undefined1 **)((long)ppuVar5 + -0xc0) = (undefined1 *)((long)ppuVar5 + -0x80);
            *(undefined **)((long)ppuVar5 + -0xb8) = &Atlas_Stats_StatsManager__GetSummedGlobalStats
            ;
            ppuVar36 = (uint **)((long)ppuVar5 + -0xc0);
            if (lVar11 == 0) goto code_r0x015054a8;
            if ((int)*(ulong *)(lVar11 + 0x18) < 1) {
              return (undefined4 *)0x0;
            }
            puVar34 = (undefined4 *)0x0;
            puVar7 = (undefined1 *)0x0;
            unaff_x23 = (undefined4 *)(lVar11 + 0x20);
            if ((*(ulong *)(lVar11 + 0x18) & 0xffffffff) == 0) {
              uVar12 = func_0x00f78b24();
              func_0x00f78ac0(uVar12,0);
              auVar3 = auVar42;
code_r0x015054a8:
              uVar12 = func_0x00f78af4();
              *(undefined1 **)((long)ppuVar5 + -0x120) = puVar7;
              *(undefined4 **)((long)ppuVar5 + -0x118) = puVar34;
              *(undefined1 (*) [16])((long)ppuVar5 + -0x110) = auVar3;
              *(uint ***)((long)ppuVar5 + -0x100) = ppuVar36;
              *(undefined **)((long)ppuVar5 + -0xf8) = &Atlas_Stats_StatsManager__GetStatFromString;
              if ((bRam0000000003eb4d0b & 1) == 0) {
                func_0x00f78a20(0x3d24d58);
                bRam0000000003eb4d0b = 1;
              }
              *(undefined4 *)((long)ppuVar5 + -0x124) = 0;
              if (((*(ushort *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              /*Atlas.Stats.StatsManager$$TryGetStatFromString*/ func_0x0150552c(uVar12,(undefined1 *)((long)ppuVar5 + -0x124));
              return (undefined4 *)(ulong)*(uint *)((long)ppuVar5 + -0x124);
            }
            auVar41._8_4_ = *unaff_x23;
            auVar41._0_8_ = auVar42._0_8_;
            auVar41._12_4_ = 0;
            puVar39 = &UNK_01505468;
            ppuVar5 = (uint **)((long)ppuVar5 + -0xf0);
          } while( true );
        }
        ppcVar4 = (code **)((long)apuStack_b0 + 0x10);
        pcVar38 = (code *)&Atlas_Stats_StatsManager__GetCommittedStat;
        apuStack_b0[0] = (uint *)((long)apuStack_b0 + 0x10);
      }
      else {
        ppcVar4 = (code **)((long)apuStack_b0 + 0x20);
        pcVar38 = (code *)&Atlas_Stats_StatsManager__GetTransactionStat;
        ppcVar35 = (code **)((long)apuStack_b0 + 0x20);
        apuStack_a0[0] = (undefined *)((long)apuStack_b0 + 0x20);
      }
    }
    else {
      ppcVar4 = (code **)&stack0xffffffffffffff80;
      ppcVar35 = (code **)&ppuStack_60;
      pcVar38 = pcStack_88;
    }
code_r0x01504b20:
    *(code ***)((long)ppcVar4 + -0x10) = ppcVar35;
    *(code **)((long)ppcVar4 + -8) = pcVar38;
    lVar11 = *(long *)(auVar44._0_8_ + 0x10);
    if (lVar11 == 0) {
      func_0x00f78af4();
    }
    else if (auVar44._8_4_ < *(uint *)(lVar11 + 0x18)) {
      return (undefined4 *)(ulong)*(uint *)(lVar11 + (long)(int)auVar44._8_4_ * 4 + 0x20);
    }
    uVar12 = func_0x00f78b24();
    auVar40 = func_0x00f78ac0(uVar12,0);
    lVar11 = auVar40._8_8_;
    puVar13 = auVar40._0_8_;
    register0x00000008 = (BADSPACEBASE *)((long)ppcVar4 + -0x50);
    *(undefined1 **)((long)ppcVar4 + -0x50) = unaff_x24;
    *(undefined4 **)((long)ppcVar4 + -0x48) = unaff_x23;
    *(undefined1 **)((long)ppcVar4 + -0x40) = unaff_x22;
    *(undefined4 **)((long)ppcVar4 + -0x38) = puVar34;
    *(long *)((long)ppcVar4 + -0x30) = param_2;
    *(code **)((long)ppcVar4 + -0x28) = pcVar14;
    *(undefined1 **)((long)ppcVar4 + -0x20) = (undefined1 *)((long)ppcVar4 + -0x10);
    *(code **)((long)ppcVar4 + -0x18) = Atlas_Stats_StatsData__UpdateToLargestValues;
    unaff_x29 = (undefined1 *)((long)ppcVar4 + -0x20);
    puVar34 = puVar13;
    if ((bRam0000000003eb4d06 & 1) == 0) {
      puVar34 = (undefined4 *)func_0x00f78a20(0x3d1f100);
      bRam0000000003eb4d06 = 1;
    }
    lVar30 = *(long *)(puVar13 + 4);
    if (((lVar30 == 0) || (lVar11 == 0)) || (*(long *)(lVar11 + 0x10) == 0)) {
LAB_01504c70:
      func_0x00f78af4();
      *(undefined1 **)((long)ppcVar4 + -0x80) = unaff_x22;
      *(long *)((long)ppcVar4 + -0x78) = lVar30;
      *(undefined1 (*) [16])((long)ppcVar4 + -0x70) = auVar40;
      *(undefined1 **)((long)ppcVar4 + -0x60) = unaff_x29;
      *(code **)((long)ppcVar4 + -0x58) = Atlas_Stats_StatsData__Clone;
      if ((bRam0000000003eb4d07 & 1) == 0) {
        func_0x00f78a20(0x3d24d50);
        bRam0000000003eb4d07 = 1;
      }
      puVar34 = (undefined4 *)func_0x00f78aec(/*Atlas.Stats.StatsData_TypeInfo*/ uRam0000000003d24d50);
      return puVar34;
    }
    puVar22 = (undefined4 *)(ulong)*(uint *)(lVar30 + 0x18);
    unaff_x22 = *(undefined1 **)(*(long *)(lVar11 + 0x10) + 0x18);
    if ((int)unaff_x22 <= (int)*(uint *)(lVar30 + 0x18)) {
      if (0 < (int)unaff_x22) {
        if (lVar30 == 0) goto LAB_01504c70;
        uVar23 = 0;
        uVar1 = *(uint *)(lVar30 + 0x18);
        do {
          if (uVar1 == uVar23) {
LAB_01504c64:
            uVar12 = func_0x00f78b24();
            func_0x00f78ac0(uVar12,0);
            goto LAB_01504c70;
          }
          lVar32 = *(long *)(lVar11 + 0x10);
          if (lVar32 == 0) goto LAB_01504c70;
          if ((*(uint *)(lVar32 + 0x18) <= uVar23) || (uVar1 <= uVar23)) goto LAB_01504c64;
          iVar9 = *(int *)(lVar30 + uVar23 * 4 + 0x20);
          iVar8 = *(int *)(lVar32 + uVar23 * 4 + 0x20);
          if (iVar9 <= iVar8) {
            iVar9 = iVar8;
          }
          *(int *)(lVar30 + uVar23 * 4 + 0x20) = iVar9;
          uVar23 = uVar23 + 1;
        } while (((ulong)unaff_x22 & 0xffffffff) != uVar23);
      }
      return puVar34;
    }
    puVar10 = (undefined4 *)func_0x00f78a34(/*int[]_TypeInfo*/ puRam0000000003d1f100,unaff_x22);
    lVar11 = *(long *)(puVar13 + 4);
    unaff_x30 = 0x1504be8;
    unaff_x21 = puVar10;
    unaff_x23 = puVar22;
  }
  else {
    puVar34 = (undefined4 *)0x3eb4000;
    if ((bRam0000000003eb4d05 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb4d05 = 1;
    }
    iVar9 = (int)param_3;
    puVar10 = (undefined4 *)Atlas_Stats_StatsData__Reset(pcVar14);
    if (param_2 == 0) {
      return puVar10;
    }
    lVar11 = *(long *)(param_2 + 0x10);
    if ((lVar11 == 0) || (puVar10 = *(undefined4 **)(pcVar14 + 0x10), puVar10 == (undefined4 *)0x0))
    {
      func_0x00f78af4();
LAB_01504998:
      auVar40 = func_0x00f78e5c(param_2,puVar34);
      pcStack_38 = Atlas_Stats_StatsData__Add;
      ppuStack_40 = (undefined1 **)&stack0xfffffffffffffff0;
      if (((auVar40._8_8_ != 0) && (lVar11 = *(long *)(auVar40._8_8_ + 0x10), lVar11 != 0)) &&
         (lVar30 = *(long *)(auVar40._0_8_ + 4), lVar30 != 0)) {
        uVar1 = *(uint *)(lVar11 + 0x18);
        uVar23 = (ulong)uVar1;
        uVar28 = (uint)*(ulong *)(lVar30 + 0x18);
        if ((int)uVar28 <= (int)uVar1) {
          uVar1 = uVar28;
        }
        uVar27 = (ulong)uVar1;
        if (0 < (int)uVar1) {
          uVar29 = *(ulong *)(lVar30 + 0x18) & 0xffffffff;
          piVar24 = (int *)(lVar30 + 0x20);
          piVar31 = (int *)(lVar11 + 0x20);
          do {
            if ((uVar29 == 0) || (uVar23 == 0)) {
              uVar12 = func_0x00f78b24();
              func_0x00f78ac0(uVar12,0);
              goto LAB_01504a20;
            }
            *piVar24 = *piVar31 + *piVar24;
            uVar23 = uVar23 - 1;
            uVar29 = uVar29 - 1;
            uVar27 = uVar27 - 1;
            piVar24 = piVar24 + 1;
            piVar31 = piVar31 + 1;
          } while (uVar27 != 0);
        }
        return auVar40._0_8_;
      }
LAB_01504a20:
      auVar44 = func_0x00f78af4();
      apcStack_58[2] = Atlas_Stats_StatsData__IncrementStat;
      lVar11 = *(long *)(auVar44._0_8_ + 4);
      if (lVar11 == 0) {
        apcStack_58[1] = (code *)&ppuStack_40;
        func_0x00f78af4();
      }
      else {
        apcStack_58[1] = (code *)&ppuStack_40;
        if (auVar44._8_4_ < *(uint *)(lVar11 + 0x18)) {
          piVar24 = (int *)(lVar11 + (long)(int)auVar44._8_4_ * 4 + 0x20);
          iVar9 = *piVar24;
          if (iVar9 < 0x3ffffffe) {
            *piVar24 = iVar9 + 1;
          }
          return auVar44._0_8_;
        }
      }
      uVar12 = func_0x00f78b24();
      auVar44 = func_0x00f78ac0(uVar12,0);
      apcStack_58[0] = Atlas_Stats_StatsData__DecrementStat;
      lVar11 = *(long *)(auVar44._0_8_ + 4);
      if (lVar11 == 0) {
        ppuStack_60 = apcStack_58 + 1;
        func_0x00f78af4();
      }
      else {
        ppuStack_60 = apcStack_58 + 1;
        if (auVar44._8_4_ < *(uint *)(lVar11 + 0x18)) {
          piVar24 = (int *)(lVar11 + (long)(int)auVar44._8_4_ * 4 + 0x20);
          iVar9 = *piVar24;
          if (-0x3fffffff < iVar9) {
            *piVar24 = iVar9 + -1;
          }
          return auVar44._0_8_;
        }
      }
      uVar12 = func_0x00f78b24();
      auVar44 = func_0x00f78ac0(uVar12,0);
      ppcVar4 = (code **)&stack0xffffffffffffff90;
      pcStack_68 = Atlas_Stats_StatsData__SetStat;
      lVar11 = *(long *)(auVar44._0_8_ + 4);
      if (lVar11 == 0) {
        ppcStack_70 = (code **)&ppuStack_60;
        func_0x00f78af4();
      }
      else {
        ppcStack_70 = (code **)&ppuStack_60;
        if (auVar44._8_4_ < *(uint *)(lVar11 + 0x18)) {
          if (iVar9 < -0x3ffffffe) {
            iVar9 = -0x3fffffff;
          }
          if (0x3ffffffd < iVar9) {
            iVar9 = 0x3ffffffe;
          }
          *(int *)(lVar11 + (long)(int)auVar44._8_4_ * 4 + 0x20) = iVar9;
          return auVar44._0_8_;
        }
      }
      uVar12 = func_0x00f78b24();
      auVar44 = func_0x00f78ac0(uVar12,0);
      ppcVar35 = (code **)&stack0xffffffffffffff90;
      pcVar38 = Atlas_Stats_StatsData__GetStat;
      goto code_r0x01504b20;
    }
    puVar22 = (undefined4 *)(ulong)*(uint *)(lVar11 + 0x18);
    if ((int)puVar10[6] < (int)*(uint *)(lVar11 + 0x18)) {
      param_2 = /*System.Array$$Clone*/ func_0x0292031c(lVar11,0);
      puVar34 = /*int[]_TypeInfo*/ puRam0000000003d1f100;
      iVar9 = (int)puVar22;
      puVar10 = (undefined4 *)0x0;
      if ((param_2 == 0) ||
         (puVar10 = (undefined4 *)func_0x00f78adc(param_2,/*int[]_TypeInfo*/ puRam0000000003d1f100),
         puVar10 != (undefined4 *)0x0)) {
        *(undefined4 **)(pcVar14 + 0x10) = puVar10;
        return puVar10;
      }
      goto LAB_01504998;
    }
  }
  uVar12 = auVar40._0_8_;
  lVar30 = 0;
  *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined4 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined1 (*) [16])((long)register0x00000008 + -0x20) = auVar40;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (lVar11 == 0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar16 = func_0x00f78aec();
    uVar18 = 0x3d7b900;
    puVar10 = puVar22;
    puVar22 = param_5;
code_r0x0292c538:
    uVar18 = func_0x00f78a24(uVar18);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar16,uVar18);
    uVar18 = func_0x00f78a24(0x3d514e0);
    auVar43 = func_0x00f78ac0(uVar16,uVar18);
    *(undefined8 *)((long)register0x00000008 + -0x50) = uVar12;
    *(undefined8 *)((long)register0x00000008 + -0x48) = uVar16;
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x38) = &System_Array__Copy;
    if (auVar43._8_8_ == (long)auVar43._8_4_) {
      if (lVar30 == (int)lVar30) {
        if (puVar22 == (undefined4 *)(long)(int)puVar22) {
          uVar12 = *(undefined8 *)((long)register0x00000008 + -0x40);
          uVar16 = *(undefined8 *)((long)register0x00000008 + -0x38);
          puVar7 = (undefined1 *)((long)register0x00000008 + -0x30);
          uVar18 = *(undefined8 *)((long)register0x00000008 + -0x50);
          uVar33 = *(undefined8 *)((long)register0x00000008 + -0x48);
          goto System_Array__Copy;
        }
        func_0x00f78a24(0x3d1fcf8);
        uVar18 = func_0x00f78aec();
        uVar12 = 0x3d7a280;
      }
      else {
        func_0x00f78a24(0x3d1fcf8);
        uVar18 = func_0x00f78aec();
        uVar12 = 0x3d78af0;
      }
    }
    else {
      func_0x00f78a24(0x3d1fcf8);
      uVar18 = func_0x00f78aec();
      uVar12 = 0x3d7b910;
    }
    uVar12 = func_0x00f78a24(uVar12);
    lVar11 = func_0x00f78a24(0x3d69268);
    /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar18,uVar12);
    uVar16 = func_0x00f78a24(0x3d514f8);
    auVar40 = func_0x00f78ac0(uVar18,uVar16);
    plVar20 = auVar40._8_8_;
    uVar16 = auVar40._0_8_;
    if (lVar11 != (int)lVar11) {
      *(undefined8 *)((long)register0x00000008 + -0x70) = uVar12;
      *(undefined8 *)((long)register0x00000008 + -0x68) = uVar18;
      *(undefined1 **)((long)register0x00000008 + -0x60) =
           (undefined1 *)((long)register0x00000008 + -0x40);
      *(undefined **)((long)register0x00000008 + -0x58) = &System_Array__CopyTo;
      func_0x00f78a24(0x3d1fcf8);
      uVar12 = func_0x00f78aec();
      uVar18 = func_0x00f78a24(0x3d79a60);
      uVar16 = func_0x00f78a24(0x3d69268);
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar12,uVar18,uVar16);
      uVar16 = func_0x00f78a24(0x3d51508);
      plVar20 = (long *)func_0x00f78ac0(uVar12,uVar16);
      *(undefined1 **)((long)register0x00000008 + -0xa0) = unaff_x22;
      *(undefined4 **)((long)register0x00000008 + -0x98) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x90) = uVar18;
      *(undefined8 *)((long)register0x00000008 + -0x88) = uVar12;
      *(undefined1 **)((long)register0x00000008 + -0x80) =
           (undefined1 *)((long)register0x00000008 + -0x60);
      *(undefined **)((long)register0x00000008 + -0x78) = &System_Array__get_LongLength;
      func_0x00f8078c(plVar20,0);
      goto code_r0x00f80814;
    }
    *(undefined1 **)((long)register0x00000008 + -0x80) = unaff_x22;
    *(undefined4 **)((long)register0x00000008 + -0x78) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x70) = uVar12;
    *(undefined8 *)((long)register0x00000008 + -0x68) = uVar18;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x40);
    *(undefined **)((long)register0x00000008 + -0x58) = &System_Array__CopyTo;
    if (plVar20 != (long *)0x0) goto code_r0x00f80814;
    uVar12 = func_0x00f807d0(uVar16,0);
    auVar43._8_8_ = uVar12;
    auVar43._0_8_ = uVar16;
    puVar22 = (undefined4 *)/*System.Array$$get_Length*/ func_0x0292ae44(uVar16);
    uVar12 = *(undefined8 *)((long)register0x00000008 + -0x60);
    uVar16 = *(undefined8 *)((long)register0x00000008 + -0x58);
    uVar18 = *(undefined8 *)((long)register0x00000008 + -0x70);
    uVar33 = *(undefined8 *)((long)register0x00000008 + -0x68);
    puVar7 = (undefined1 *)((long)register0x00000008 + -0x50);
    unaff_x22 = *(undefined1 **)((long)register0x00000008 + -0x80);
    unaff_x21 = *(undefined4 **)((long)register0x00000008 + -0x78);
    puVar10 = (undefined4 *)0x0;
  }
  else {
    if (puVar10 == (undefined4 *)0x0) {
      func_0x00f78a24(0x3d1fcf0);
      uVar16 = func_0x00f78aec();
      uVar18 = 0x3d78ae8;
      uVar12 = 0;
      puVar10 = puVar22;
      puVar22 = param_5;
      goto code_r0x0292c538;
    }
    uVar12 = func_0x00f807d0(lVar11,0);
    auVar43._8_8_ = uVar12;
    auVar43._0_8_ = lVar11;
    func_0x00f807d0(puVar10,0);
    uVar12 = *(undefined8 *)((long)register0x00000008 + -0x10);
    uVar16 = *(undefined8 *)((long)register0x00000008 + -8);
    uVar18 = *(undefined8 *)((long)register0x00000008 + -0x20);
    uVar33 = *(undefined8 *)((long)register0x00000008 + -0x18);
    unaff_x22 = *(undefined1 **)((long)register0x00000008 + -0x30);
    unaff_x21 = *(undefined4 **)((long)register0x00000008 + -0x28);
    puVar7 = (undefined1 *)register0x00000008;
  }
System_Array__Copy:
  uVar21 = auVar43._8_8_;
  plVar20 = auVar43._0_8_;
  *(undefined8 *)(puVar7 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar7 + -0x58) = unaff_x27;
  *(undefined1 **)(puVar7 + -0x50) = unaff_x26;
  *(undefined1 **)(puVar7 + -0x48) = unaff_x25;
  *(undefined1 **)(puVar7 + -0x40) = unaff_x24;
  *(undefined4 **)(puVar7 + -0x38) = unaff_x23;
  *(undefined1 **)(puVar7 + -0x30) = unaff_x22;
  *(undefined4 **)(puVar7 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar7 + -0x20) = uVar18;
  *(undefined8 *)(puVar7 + -0x18) = uVar33;
  *(undefined8 *)(puVar7 + -0x10) = uVar12;
  *(undefined8 *)(puVar7 + -8) = uVar16;
  if (plVar20 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0,uVar21);
    puVar17 = (undefined8 *)func_0x00f78aec();
    uVar12 = 0x3d7b900;
  }
  else {
    if (puVar10 != (undefined4 *)0x0) {
      if (-1 < (int)puVar22) {
code_r0x00f80814:
        return (undefined4 *)(ulong)*(byte *)(*plVar20 + 0x12e);
      }
      uVar12 = func_0x00f78a24(0x3d75f70,uVar21);
      uVar12 = /*Locale$$GetText*/ func_0x02af42b4(uVar12,0);
      func_0x00f78a24(0x3d1fcf8);
      uVar18 = func_0x00f78aec();
      uVar16 = func_0x00f78a24(0x3d7a280);
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar18,uVar16,uVar12);
      uVar12 = func_0x00f78a24(0x3d514f0);
      func_0x00f78ac0(uVar18,uVar12);
      func_0x00f78af4();
      func_0x00f78a24(0x3d1fcf8);
      puVar17 = (undefined8 *)func_0x00f78aec();
      uVar18 = func_0x00f78a24(0x3d78af0);
      uVar12 = func_0x00f78a24(0x3d6de20);
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(puVar17,uVar18,uVar12);
      goto code_r0x0292b958;
    }
    func_0x00f78a24(0x3d1fcf0,uVar21);
    puVar17 = (undefined8 *)func_0x00f78aec();
    uVar12 = 0x3d78ae8;
  }
  uVar12 = func_0x00f78a24(uVar12);
  /*System.ArgumentNullException$$.ctor*/ func_0x02920400(puVar17,uVar12);
code_r0x0292b958:
  while( true ) {
    uVar12 = func_0x00f78a24(0x3d514f0);
    func_0x00f78ac0(puVar17,uVar12);
    uVar12 = func_0x00f78a24(0x3d23988);
    uVar23 = func_0x00f78ed4(uVar12,*(undefined8 *)*puVar17);
    if ((uVar23 & 1) == 0) break;
    puVar17 = (undefined8 *)*puVar17;
    ___cxa_end_catch();
    iVar9 = /*System.Array$$CanAssignArrayElement*/ func_0x0292e90c(*(undefined8 *)(puVar7 + -0x68),uVar18);
    if (iVar9 == 0) {
      puVar17 = (undefined8 *)/*System.Array$$CreateArrayTypeMismatchException*/ func_0x0292e8b8();
    }
  }
  puVar19 = (undefined8 *)___cxa_allocate_exception(8);
  *puVar19 = *puVar17;
  ___cxa_throw(puVar19,&DAT_03a5ed38,0);
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x292b9cc);
  (*pcVar14)();
}



// ============================================================
// RVA: 0x15050bc | Atlas.Stats.StatsManager.IncrementStat
// ============================================================

/* WARNING: Possible PIC construction at 0x01504cc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01505464: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01504cc4) */
/* WARNING: Removing unreachable block (ram,0x01504ce8) */
/* WARNING: Removing unreachable block (ram,0x01504cc8) */
/* WARNING: Removing unreachable block (ram,0x01505468) */
/* WARNING: Removing unreachable block (ram,0x0150547c) */
/* WARNING: Type propagation algorithm not settling */

ulong Atlas_Stats_StatsManager__IncrementStat(long param_1,undefined8 param_2,ulong param_3)

{
  long *plVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined8 *******pppppppuVar4;
  undefined8 *******pppppppuVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  undefined8 unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  code *pcVar19;
  undefined4 *unaff_x23;
  long lVar20;
  undefined8 unaff_x24;
  undefined1 *puVar21;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 *******unaff_x29;
  undefined8 *******pppppppuVar22;
  undefined *unaff_x30;
  undefined *puVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [12];
  ulong auStack_110 [14];
  undefined8 *******apppppppuStack_a0 [6];
  undefined8 *******pppppppuStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 *******pppppppuStack_30;
  undefined *puStack_28;
  
  uVar11 = unaff_x19;
  if (*(long *)(param_1 + 0x20) == 0) {
LAB_01505118:
    func_0x00f78af4();
  }
  else {
    Atlas_Stats_StatsData__IncrementStat();
    lVar14 = *(long *)(param_1 + 0x28);
    uVar11 = param_2;
    if (lVar14 == 0) goto LAB_01505118;
    if ((uint)param_2 < *(uint *)(lVar14 + 0x18)) {
      uVar8 = *(ulong *)(lVar14 + (long)(int)(uint)param_2 * 8 + 0x20);
      if (uVar8 == 0) {
        return 0;
      }
      goto System_Action__Invoke;
    }
  }
  uVar9 = func_0x00f78b24();
  auVar25 = func_0x00f78ac0(uVar9,0);
  unaff_x20 = auVar25._0_8_;
  puStack_28 = &Atlas_Stats_StatsManager__DecrementStat;
  unaff_x19 = uVar11;
  lStack_40 = param_1;
  uStack_38 = uVar11;
  pppppppuStack_30 = (undefined8 *******)&stack0xfffffffffffffff0;
  if (*(long *)(unaff_x20 + 0x20) == 0) {
code_r0x01505184:
    func_0x00f78af4();
  }
  else {
    Atlas_Stats_StatsData__DecrementStat();
    lVar14 = *(long *)(unaff_x20 + 0x28);
    unaff_x19 = auVar25._8_8_;
    if (lVar14 == 0) goto code_r0x01505184;
    if (auVar25._8_4_ < *(uint *)(lVar14 + 0x18)) {
      uVar8 = *(ulong *)(lVar14 + (long)(int)auVar25._8_4_ * 8 + 0x20);
      if (uVar8 == 0) {
        return 0;
      }
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
      unaff_x19 = uStack_38;
      unaff_x20 = lStack_40;
      unaff_x29 = pppppppuStack_30;
      unaff_x30 = puStack_28;
      goto System_Action__Invoke;
    }
  }
  uVar11 = func_0x00f78b24();
  auVar25 = func_0x00f78ac0(uVar11,0);
  uVar9 = auVar25._8_8_;
  lVar14 = auVar25._0_8_;
  puStack_48 = &Atlas_Stats_StatsManager__SetStat;
  uVar11 = unaff_x19;
  uVar17 = unaff_x21;
  uVar8 = unaff_x22;
  pppppppuStack_50 = &pppppppuStack_30;
  if (*(long *)(lVar14 + 0x20) == 0) {
code_r0x01505234:
    func_0x00f78af4();
  }
  else {
    uVar17 = Atlas_Stats_StatsData__GetStat();
    uVar11 = uVar9;
    uVar8 = param_3;
    if (*(long *)(lVar14 + 0x20) == 0) goto code_r0x01505234;
    Atlas_Stats_StatsData__SetStat(*(long *)(lVar14 + 0x20),uVar9,param_3);
    if (*(long *)(lVar14 + 0x20) == 0) goto code_r0x01505234;
    uVar10 = Atlas_Stats_StatsData__GetStat(*(long *)(lVar14 + 0x20),uVar9);
    if ((int)uVar10 == (int)uVar17) {
      return uVar10;
    }
    lVar20 = *(long *)(lVar14 + 0x28);
    if (lVar20 == 0) goto code_r0x01505234;
    if (auVar25._8_4_ < *(uint *)(lVar20 + 0x18)) {
      uVar8 = *(ulong *)(lVar20 + (long)(int)auVar25._8_4_ * 8 + 0x20);
      if (uVar8 == 0) {
        return 0;
      }
      register0x00000008 = (BADSPACEBASE *)&lStack_40;
      unaff_x29 = pppppppuStack_50;
      unaff_x30 = puStack_48;
System_Action__Invoke:
      uVar11 = 0;
      *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
      *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
      *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(undefined4 **)((long)register0x00000008 + -0x38) = unaff_x23;
      *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
      *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined8 ********)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
      *(ulong *)((long)register0x00000008 + -0x58) = uVar8;
      lVar14 = *(long *)(uVar8 + 0x68);
      if (lVar14 == 0) {
        puVar21 = (undefined1 *)((long)register0x00000008 + -0x58);
        lVar20 = 1;
      }
      else {
        lVar20 = *(long *)(lVar14 + 0x18);
        if (lVar20 == 0) {
          return uVar8;
        }
        puVar21 = (undefined1 *)(lVar14 + 0x20);
      }
      lVar14 = 0;
      do {
        lVar15 = *(long *)(puVar21 + lVar14 * 8);
        pcVar19 = *(code **)(lVar15 + 0x10);
        plVar1 = *(long **)(lVar15 + 0x20);
        lVar15 = *(long *)(lVar15 + 0x28);
        if (*(short *)(lVar15 + 0x48) == -1) {
          func_0x00f78ad8(lVar15,uVar11);
        }
        iVar6 = func_0x00f78a4c(lVar15);
        if (iVar6 == 0) {
          if ((((plVar1 == (long *)0x0) || (*(short *)(lVar15 + 0x48) == -1)) ||
              ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(uVar8 + 0x18) == 0))
          goto code_r0x02924d98;
          iVar6 = func_0x00f78a44(lVar15);
          iVar7 = func_0x00f78ec0(lVar15);
          if (iVar6 == 0) {
            uVar2 = *(ushort *)(lVar15 + 0x48);
            if (iVar7 == 0) {
              lVar15 = *plVar1 + (ulong)uVar2 * 0x10;
              auVar25 = (**(code **)(lVar15 + 0x138))(plVar1,*(undefined8 *)(lVar15 + 0x140));
              goto code_r0x02924da4;
            }
            lVar15 = func_0x00f78a48(lVar15);
            lVar16 = *plVar1;
            uVar17 = (ulong)*(ushort *)(lVar16 + 0x12a);
            if (uVar17 != 0) {
              piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == lVar15) {
                  puVar12 = (undefined8 *)
                            (lVar16 + (long)(int)(*piVar18 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x02924e68;
                }
                piVar18 = piVar18 + 4;
                uVar17 = uVar17 - 1;
              } while (uVar17 != 0);
            }
            puVar12 = (undefined8 *)func_0x00fac1f0(plVar1,lVar15,(ulong)uVar2);
code_r0x02924e68:
            pcVar19 = (code *)*puVar12;
            puVar12 = (undefined8 *)puVar12[1];
          }
          else {
            if (iVar7 == 0) {
              uVar11 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar15 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar16 = *plVar1;
              uVar17 = (ulong)*(ushort *)(lVar16 + 0x12a);
              if (uVar17 != 0) {
                piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == *(long *)(lVar15 + 0x18)) {
                    lVar16 = lVar16 + (long)(int)(*piVar18 + (uint)*(ushort *)(lVar15 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x02924e40;
                  }
                  piVar18 = piVar18 + 4;
                  uVar17 = uVar17 - 1;
                } while (uVar17 != 0);
              }
              lVar16 = func_0x00fac1f0(plVar1);
code_r0x02924e40:
              uVar11 = *(undefined8 *)(lVar16 + 8);
            }
            puVar12 = (undefined8 *)func_0x00f78acc(uVar11,lVar15);
            pcVar19 = (code *)*puVar12;
          }
          auVar25 = (*pcVar19)(plVar1,puVar12);
        }
        else if (*(char *)(lVar15 + 0x4a) == '\0') {
          auVar25 = (*pcVar19)(lVar15);
        }
        else {
code_r0x02924d98:
          auVar25 = (*pcVar19)(plVar1,lVar15);
        }
code_r0x02924da4:
        uVar11 = auVar25._8_8_;
        lVar14 = lVar14 + 1;
        if (lVar14 == lVar20) {
          return auVar25._0_8_;
        }
      } while( true );
    }
  }
  auVar25._8_8_ = uVar11;
  auVar25._0_8_ = lVar14;
  uVar9 = func_0x00f78b24();
  auVar26 = func_0x00f78ac0(uVar9,0);
  uVar13 = auVar26._8_4_;
  apppppppuStack_a0[5] = (undefined8 *******)&Atlas_Stats_StatsManager__GetStat;
  lVar20 = *(long *)(auVar26._0_8_ + 0x20);
  apppppppuStack_a0[4] = &pppppppuStack_50;
  if (lVar20 == 0) {
    auVar26 = func_0x00f78af4();
    uVar13 = auVar26._8_4_;
    pppppppuVar5 = apppppppuStack_a0 + 2;
    apppppppuStack_a0[3] = (undefined8 *******)&Atlas_Stats_StatsManager__GetTransactionStat;
    lVar20 = *(long *)(auVar26._0_8_ + 0x18);
    if (lVar20 == 0) {
      apppppppuStack_a0[2] = apppppppuStack_a0 + 4;
      auVar26 = func_0x00f78af4();
      uVar13 = auVar26._8_4_;
      pppppppuVar22 = apppppppuStack_a0;
      apppppppuStack_a0[1] = (undefined8 *******)&Atlas_Stats_StatsManager__GetCommittedStat;
      lVar20 = *(long *)(auVar26._0_8_ + 0x10);
      if (lVar20 == 0) {
        puVar23 = &Atlas_Stats_StatsManager__GetGlobalStat;
        apppppppuStack_a0[0] = apppppppuStack_a0 + 2;
        auVar24 = func_0x00f78af4();
        pppppppuVar5 = apppppppuStack_a0;
        do {
          lVar14 = auVar24._0_8_;
          *(ulong *)((long)pppppppuVar5 + -0x30) = uVar8;
          *(ulong *)((long)pppppppuVar5 + -0x28) = uVar17;
          *(undefined1 (*) [16])((long)pppppppuVar5 + -0x20) = auVar25;
          *(undefined8 ********)((long)pppppppuVar5 + -0x10) = pppppppuVar22;
          *(undefined **)((long)pppppppuVar5 + -8) = puVar23;
          uVar11 = auVar25._8_8_;
          if (*(long *)(lVar14 + 0x10) != 0) {
            uVar17 = Atlas_Stats_StatsData__GetStat();
            uVar11 = auVar24._8_8_;
            if (*(long *)(lVar14 + 0x18) != 0) {
              iVar6 = Atlas_Stats_StatsData__GetStat(*(long *)(lVar14 + 0x18),auVar24._8_8_);
              return (ulong)(uint)(iVar6 + (int)uVar17);
            }
          }
          auVar3._8_8_ = uVar11;
          auVar3._0_8_ = lVar14;
          auVar25 = func_0x00f78af4();
          lVar20 = auVar25._8_8_;
          *(undefined8 *)((long)pppppppuVar5 + -0x70) = unaff_x24;
          *(undefined4 **)((long)pppppppuVar5 + -0x68) = unaff_x23;
          *(ulong *)((long)pppppppuVar5 + -0x60) = uVar8;
          *(ulong *)((long)pppppppuVar5 + -0x58) = uVar17;
          *(long *)((long)pppppppuVar5 + -0x50) = lVar14;
          *(undefined8 *)((long)pppppppuVar5 + -0x48) = uVar11;
          *(undefined1 **)((long)pppppppuVar5 + -0x40) = (undefined1 *)((long)pppppppuVar5 + -0x10);
          *(undefined **)((long)pppppppuVar5 + -0x38) =
               &Atlas_Stats_StatsManager__GetSummedCommittedStats;
          if (lVar20 == 0) {
code_r0x01505370:
            func_0x00f78af4();
          }
          else {
            if ((int)*(ulong *)(lVar20 + 0x18) < 1) {
              return 0;
            }
            uVar17 = 0;
            uVar8 = 0;
            uVar10 = *(ulong *)(lVar20 + 0x18) & 0xffffffff;
            unaff_x23 = (undefined4 *)(lVar20 + 0x20);
            while (auVar3 = auVar25, uVar8 < uVar10) {
              lVar14 = *(long *)(auVar25._0_8_ + 0x10);
              if (lVar14 == 0) goto code_r0x01505370;
              iVar6 = Atlas_Stats_StatsData__GetStat(lVar14,unaff_x23[uVar8]);
              uVar17 = (ulong)(uint)(iVar6 + (int)uVar17);
              uVar8 = uVar8 + 1;
              uVar10 = (ulong)*(uint *)(lVar20 + 0x18);
              if ((long)(int)*(uint *)(lVar20 + 0x18) <= (long)uVar8) {
                return uVar17;
              }
            }
          }
          uVar11 = func_0x00f78b24();
          auVar25 = func_0x00f78ac0(uVar11,0);
          lVar14 = auVar25._8_8_;
          *(undefined8 *)((long)pppppppuVar5 + -0xb0) = unaff_x24;
          *(undefined4 **)((long)pppppppuVar5 + -0xa8) = unaff_x23;
          *(ulong *)((long)pppppppuVar5 + -0xa0) = uVar8;
          *(ulong *)((long)pppppppuVar5 + -0x98) = uVar17;
          *(undefined1 (*) [16])((long)pppppppuVar5 + -0x90) = auVar3;
          *(undefined1 **)((long)pppppppuVar5 + -0x80) = (undefined1 *)((long)pppppppuVar5 + -0x40);
          *(undefined **)((long)pppppppuVar5 + -0x78) =
               &Atlas_Stats_StatsManager__GetSummedTransactionStats;
          if (lVar14 == 0) {
code_r0x01505408:
            func_0x00f78af4();
          }
          else {
            if ((int)*(ulong *)(lVar14 + 0x18) < 1) {
              return 0;
            }
            uVar17 = 0;
            uVar8 = 0;
            uVar10 = *(ulong *)(lVar14 + 0x18) & 0xffffffff;
            unaff_x23 = (undefined4 *)(lVar14 + 0x20);
            while (auVar3 = auVar25, uVar8 < uVar10) {
              lVar20 = *(long *)(auVar25._0_8_ + 0x18);
              if (lVar20 == 0) goto code_r0x01505408;
              iVar6 = Atlas_Stats_StatsData__GetStat(lVar20,unaff_x23[uVar8]);
              uVar17 = (ulong)(uint)(iVar6 + (int)uVar17);
              uVar8 = uVar8 + 1;
              uVar10 = (ulong)*(uint *)(lVar14 + 0x18);
              if ((long)(int)*(uint *)(lVar14 + 0x18) <= (long)uVar8) {
                return uVar17;
              }
            }
          }
          uVar11 = func_0x00f78b24();
          auVar25 = func_0x00f78ac0(uVar11,0);
          lVar14 = auVar25._8_8_;
          *(undefined8 *)((long)pppppppuVar5 + -0xf0) = unaff_x24;
          *(undefined4 **)((long)pppppppuVar5 + -0xe8) = unaff_x23;
          *(ulong *)((long)pppppppuVar5 + -0xe0) = uVar8;
          *(ulong *)((long)pppppppuVar5 + -0xd8) = uVar17;
          *(undefined1 (*) [16])((long)pppppppuVar5 + -0xd0) = auVar3;
          *(undefined1 **)((long)pppppppuVar5 + -0xc0) = (undefined1 *)((long)pppppppuVar5 + -0x80);
          *(undefined **)((long)pppppppuVar5 + -0xb8) =
               &Atlas_Stats_StatsManager__GetSummedGlobalStats;
          pppppppuVar22 = (undefined8 *******)((long)pppppppuVar5 + -0xc0);
          if (lVar14 == 0) goto code_r0x015054a8;
          if ((int)*(ulong *)(lVar14 + 0x18) < 1) {
            return 0;
          }
          uVar17 = 0;
          uVar8 = 0;
          unaff_x23 = (undefined4 *)(lVar14 + 0x20);
          if ((*(ulong *)(lVar14 + 0x18) & 0xffffffff) == 0) {
            uVar11 = func_0x00f78b24();
            func_0x00f78ac0(uVar11,0);
            auVar3 = auVar25;
code_r0x015054a8:
            uVar11 = func_0x00f78af4();
            *(ulong *)((long)pppppppuVar5 + -0x120) = uVar8;
            *(ulong *)((long)pppppppuVar5 + -0x118) = uVar17;
            *(undefined1 (*) [16])((long)pppppppuVar5 + -0x110) = auVar3;
            *(undefined8 ********)((long)pppppppuVar5 + -0x100) = pppppppuVar22;
            *(undefined **)((long)pppppppuVar5 + -0xf8) =
                 &Atlas_Stats_StatsManager__GetStatFromString;
            if ((bRam0000000003eb4d0b & 1) == 0) {
              func_0x00f78a20(0x3d24d58);
              bRam0000000003eb4d0b = 1;
            }
            *(undefined4 *)((long)pppppppuVar5 + -0x124) = 0;
            if (((*(ushort *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*Atlas.Stats.StatsManager$$TryGetStatFromString*/ func_0x0150552c(uVar11,(undefined1 *)((long)pppppppuVar5 + -0x124));
            return (ulong)*(uint *)((long)pppppppuVar5 + -0x124);
          }
          auVar24._8_4_ = *unaff_x23;
          auVar24._0_8_ = auVar25._0_8_;
          auVar24._12_4_ = 0;
          puVar23 = &UNK_01505468;
          pppppppuVar5 = (undefined8 *******)((long)pppppppuVar5 + -0xf0);
        } while( true );
      }
      pppppppuVar4 = apppppppuStack_a0 + 2;
      pppppppuVar22 = (undefined8 *******)&Atlas_Stats_StatsManager__GetCommittedStat;
      apppppppuStack_a0[0] = apppppppuStack_a0 + 2;
    }
    else {
      pppppppuVar4 = apppppppuStack_a0 + 4;
      pppppppuVar22 = (undefined8 *******)&Atlas_Stats_StatsManager__GetTransactionStat;
      pppppppuVar5 = apppppppuStack_a0 + 4;
      apppppppuStack_a0[2] = apppppppuStack_a0 + 4;
    }
  }
  else {
    pppppppuVar4 = (undefined8 *******)&stack0xffffffffffffff90;
    pppppppuVar5 = &pppppppuStack_50;
    pppppppuVar22 = apppppppuStack_a0[5];
  }
  *(undefined8 ********)((long)pppppppuVar4 + -0x10) = pppppppuVar5;
  *(undefined8 ********)((long)pppppppuVar4 + -8) = pppppppuVar22;
  lVar20 = *(long *)(lVar20 + 0x10);
  if (lVar20 == 0) {
    func_0x00f78af4();
  }
  else if (uVar13 < *(uint *)(lVar20 + 0x18)) {
    return (ulong)*(uint *)(lVar20 + (long)(int)uVar13 * 4 + 0x20);
  }
  uVar9 = func_0x00f78b24();
  auVar25 = func_0x00f78ac0(uVar9,0);
  lVar20 = auVar25._8_8_;
  uVar10 = auVar25._0_8_;
  *(undefined8 *)((long)pppppppuVar4 + -0x50) = unaff_x24;
  *(undefined4 **)((long)pppppppuVar4 + -0x48) = unaff_x23;
  *(ulong *)((long)pppppppuVar4 + -0x40) = uVar8;
  *(ulong *)((long)pppppppuVar4 + -0x38) = uVar17;
  *(long *)((long)pppppppuVar4 + -0x30) = lVar14;
  *(undefined8 *)((long)pppppppuVar4 + -0x28) = uVar11;
  *(undefined1 **)((long)pppppppuVar4 + -0x20) = (undefined1 *)((long)pppppppuVar4 + -0x10);
  *(code **)((long)pppppppuVar4 + -0x18) = Atlas_Stats_StatsData__UpdateToLargestValues;
  uVar17 = uVar10;
  if ((bRam0000000003eb4d06 & 1) == 0) {
    uVar17 = func_0x00f78a20(0x3d1f100);
    bRam0000000003eb4d06 = 1;
  }
  lVar14 = *(long *)(uVar10 + 0x10);
  if (((lVar14 != 0) && (lVar20 != 0)) && (*(long *)(lVar20 + 0x10) != 0)) {
    iVar6 = *(int *)(lVar14 + 0x18);
    uVar8 = *(ulong *)(*(long *)(lVar20 + 0x10) + 0x18);
    if (iVar6 < (int)uVar8) {
      lVar14 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,uVar8);
      uVar17 = /*System.Array$$Copy*/ func_0x0292c49c(*(undefined8 *)(uVar10 + 0x10),lVar14,iVar6,0);
      *(long *)(uVar10 + 0x10) = lVar14;
    }
    if (0 < (int)uVar8) {
      if (lVar14 == 0) goto LAB_01504c70;
      uVar10 = 0;
      uVar13 = *(uint *)(lVar14 + 0x18);
      do {
        if (uVar13 == uVar10) {
LAB_01504c64:
          uVar11 = func_0x00f78b24();
          func_0x00f78ac0(uVar11,0);
          goto LAB_01504c70;
        }
        lVar15 = *(long *)(lVar20 + 0x10);
        if (lVar15 == 0) goto LAB_01504c70;
        if ((*(uint *)(lVar15 + 0x18) <= uVar10) || (uVar13 <= uVar10)) goto LAB_01504c64;
        iVar6 = *(int *)(lVar14 + 0x20 + uVar10 * 4);
        iVar7 = *(int *)(lVar15 + uVar10 * 4 + 0x20);
        if (iVar6 <= iVar7) {
          iVar6 = iVar7;
        }
        *(int *)(lVar14 + 0x20 + uVar10 * 4) = iVar6;
        uVar10 = uVar10 + 1;
      } while ((uVar8 & 0xffffffff) != uVar10);
    }
    return uVar17;
  }
LAB_01504c70:
  func_0x00f78af4();
  *(ulong *)((long)pppppppuVar4 + -0x80) = uVar8;
  *(long *)((long)pppppppuVar4 + -0x78) = lVar14;
  *(undefined1 (*) [16])((long)pppppppuVar4 + -0x70) = auVar25;
  *(undefined1 **)((long)pppppppuVar4 + -0x60) = (undefined1 *)((long)pppppppuVar4 + -0x20);
  *(code **)((long)pppppppuVar4 + -0x58) = Atlas_Stats_StatsData__Clone;
  if ((bRam0000000003eb4d07 & 1) == 0) {
    func_0x00f78a20(0x3d24d50);
    bRam0000000003eb4d07 = 1;
  }
  uVar8 = func_0x00f78aec(/*Atlas.Stats.StatsData_TypeInfo*/ uRam0000000003d24d50);
  return uVar8;
}



// ============================================================
// RVA: 0x1505128 | Atlas.Stats.StatsManager.DecrementStat
// ============================================================

/* WARNING: Possible PIC construction at 0x01504cc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01505464: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01504cc4) */
/* WARNING: Removing unreachable block (ram,0x01504ce8) */
/* WARNING: Removing unreachable block (ram,0x01504cc8) */
/* WARNING: Removing unreachable block (ram,0x01505468) */
/* WARNING: Removing unreachable block (ram,0x0150547c) */

ulong Atlas_Stats_StatsManager__DecrementStat(long param_1,undefined8 param_2,ulong param_3)

{
  long *plVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined1 ***pppuVar4;
  undefined1 ***pppuVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  undefined8 unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  code *pcVar19;
  undefined4 *unaff_x23;
  long lVar20;
  undefined8 unaff_x24;
  undefined1 *puVar21;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined1 ***pppuVar22;
  undefined1 **ppuVar23;
  undefined *unaff_x30;
  undefined *puVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [12];
  ulong auStack_f0 [14];
  undefined1 **appuStack_80 [6];
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  uVar11 = unaff_x19;
  if (*(long *)(param_1 + 0x20) == 0) {
LAB_01505184:
    func_0x00f78af4();
    param_2 = uVar11;
  }
  else {
    Atlas_Stats_StatsData__DecrementStat();
    lVar14 = *(long *)(param_1 + 0x28);
    uVar11 = param_2;
    if (lVar14 == 0) goto LAB_01505184;
    if ((uint)param_2 < *(uint *)(lVar14 + 0x18)) {
      uVar8 = *(ulong *)(lVar14 + (long)(int)(uint)param_2 * 8 + 0x20);
      if (uVar8 == 0) {
        return 0;
      }
      goto System_Action__Invoke;
    }
  }
  unaff_x19 = param_2;
  uVar11 = func_0x00f78b24();
  auVar26 = func_0x00f78ac0(uVar11,0);
  uVar10 = auVar26._8_8_;
  lVar14 = auVar26._0_8_;
  puStack_28 = &Atlas_Stats_StatsManager__SetStat;
  uVar11 = unaff_x19;
  uVar17 = unaff_x21;
  uVar8 = unaff_x22;
  puStack_30 = &stack0xfffffffffffffff0;
  if (*(long *)(lVar14 + 0x20) == 0) {
code_r0x01505234:
    func_0x00f78af4();
  }
  else {
    uVar17 = Atlas_Stats_StatsData__GetStat();
    uVar11 = uVar10;
    uVar8 = param_3;
    if (*(long *)(lVar14 + 0x20) == 0) goto code_r0x01505234;
    Atlas_Stats_StatsData__SetStat(*(long *)(lVar14 + 0x20),uVar10,param_3);
    if (*(long *)(lVar14 + 0x20) == 0) goto code_r0x01505234;
    uVar9 = Atlas_Stats_StatsData__GetStat(*(long *)(lVar14 + 0x20),uVar10);
    if ((int)uVar9 == (int)uVar17) {
      return uVar9;
    }
    lVar20 = *(long *)(lVar14 + 0x28);
    if (lVar20 == 0) goto code_r0x01505234;
    if (auVar26._8_4_ < *(uint *)(lVar20 + 0x18)) {
      uVar8 = *(ulong *)(lVar20 + (long)(int)auVar26._8_4_ * 8 + 0x20);
      if (uVar8 == 0) {
        return 0;
      }
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
      unaff_x20 = param_1;
      unaff_x29 = puStack_30;
      unaff_x30 = puStack_28;
System_Action__Invoke:
      uVar11 = 0;
      *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
      *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
      *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(undefined4 **)((long)register0x00000008 + -0x38) = unaff_x23;
      *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
      *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
      *(ulong *)((long)register0x00000008 + -0x58) = uVar8;
      lVar14 = *(long *)(uVar8 + 0x68);
      if (lVar14 == 0) {
        puVar21 = (undefined1 *)((long)register0x00000008 + -0x58);
        lVar20 = 1;
      }
      else {
        lVar20 = *(long *)(lVar14 + 0x18);
        if (lVar20 == 0) {
          return uVar8;
        }
        puVar21 = (undefined1 *)(lVar14 + 0x20);
      }
      lVar14 = 0;
      do {
        lVar15 = *(long *)(puVar21 + lVar14 * 8);
        pcVar19 = *(code **)(lVar15 + 0x10);
        plVar1 = *(long **)(lVar15 + 0x20);
        lVar15 = *(long *)(lVar15 + 0x28);
        if (*(short *)(lVar15 + 0x48) == -1) {
          func_0x00f78ad8(lVar15,uVar11);
        }
        iVar6 = func_0x00f78a4c(lVar15);
        if (iVar6 == 0) {
          if ((((plVar1 == (long *)0x0) || (*(short *)(lVar15 + 0x48) == -1)) ||
              ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(uVar8 + 0x18) == 0))
          goto code_r0x02924d98;
          iVar6 = func_0x00f78a44(lVar15);
          iVar7 = func_0x00f78ec0(lVar15);
          if (iVar6 == 0) {
            uVar2 = *(ushort *)(lVar15 + 0x48);
            if (iVar7 == 0) {
              lVar15 = *plVar1 + (ulong)uVar2 * 0x10;
              auVar26 = (**(code **)(lVar15 + 0x138))(plVar1,*(undefined8 *)(lVar15 + 0x140));
              goto code_r0x02924da4;
            }
            lVar15 = func_0x00f78a48(lVar15);
            lVar16 = *plVar1;
            uVar17 = (ulong)*(ushort *)(lVar16 + 0x12a);
            if (uVar17 != 0) {
              piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == lVar15) {
                  puVar12 = (undefined8 *)
                            (lVar16 + (long)(int)(*piVar18 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x02924e68;
                }
                piVar18 = piVar18 + 4;
                uVar17 = uVar17 - 1;
              } while (uVar17 != 0);
            }
            puVar12 = (undefined8 *)func_0x00fac1f0(plVar1,lVar15,(ulong)uVar2);
code_r0x02924e68:
            pcVar19 = (code *)*puVar12;
            puVar12 = (undefined8 *)puVar12[1];
          }
          else {
            if (iVar7 == 0) {
              uVar11 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar15 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar16 = *plVar1;
              uVar17 = (ulong)*(ushort *)(lVar16 + 0x12a);
              if (uVar17 != 0) {
                piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == *(long *)(lVar15 + 0x18)) {
                    lVar16 = lVar16 + (long)(int)(*piVar18 + (uint)*(ushort *)(lVar15 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x02924e40;
                  }
                  piVar18 = piVar18 + 4;
                  uVar17 = uVar17 - 1;
                } while (uVar17 != 0);
              }
              lVar16 = func_0x00fac1f0(plVar1);
code_r0x02924e40:
              uVar11 = *(undefined8 *)(lVar16 + 8);
            }
            puVar12 = (undefined8 *)func_0x00f78acc(uVar11,lVar15);
            pcVar19 = (code *)*puVar12;
          }
          auVar26 = (*pcVar19)(plVar1,puVar12);
        }
        else if (*(char *)(lVar15 + 0x4a) == '\0') {
          auVar26 = (*pcVar19)(lVar15);
        }
        else {
code_r0x02924d98:
          auVar26 = (*pcVar19)(plVar1,lVar15);
        }
code_r0x02924da4:
        uVar11 = auVar26._8_8_;
        lVar14 = lVar14 + 1;
        if (lVar14 == lVar20) {
          return auVar26._0_8_;
        }
      } while( true );
    }
  }
  auVar26._8_8_ = uVar11;
  auVar26._0_8_ = lVar14;
  uVar10 = func_0x00f78b24();
  auVar27 = func_0x00f78ac0(uVar10,0);
  uVar13 = auVar27._8_4_;
  appuStack_80[5] = (undefined1 **)&Atlas_Stats_StatsManager__GetStat;
  lVar20 = *(long *)(auVar27._0_8_ + 0x20);
  appuStack_80[4] = &puStack_30;
  if (lVar20 == 0) {
    auVar27 = func_0x00f78af4();
    uVar13 = auVar27._8_4_;
    pppuVar5 = appuStack_80 + 2;
    appuStack_80[3] = (undefined1 **)&Atlas_Stats_StatsManager__GetTransactionStat;
    lVar20 = *(long *)(auVar27._0_8_ + 0x18);
    if (lVar20 == 0) {
      appuStack_80[2] = (undefined1 **)(appuStack_80 + 4);
      auVar27 = func_0x00f78af4();
      uVar13 = auVar27._8_4_;
      pppuVar22 = appuStack_80;
      appuStack_80[1] = (undefined1 **)&Atlas_Stats_StatsManager__GetCommittedStat;
      lVar20 = *(long *)(auVar27._0_8_ + 0x10);
      if (lVar20 == 0) {
        puVar24 = &Atlas_Stats_StatsManager__GetGlobalStat;
        appuStack_80[0] = (undefined1 **)(appuStack_80 + 2);
        auVar25 = func_0x00f78af4();
        pppuVar5 = appuStack_80;
        do {
          lVar14 = auVar25._0_8_;
          *(ulong *)((long)pppuVar5 + -0x30) = uVar8;
          *(ulong *)((long)pppuVar5 + -0x28) = uVar17;
          *(undefined1 (*) [16])((long)pppuVar5 + -0x20) = auVar26;
          *(undefined1 ****)((long)pppuVar5 + -0x10) = pppuVar22;
          *(undefined **)((long)pppuVar5 + -8) = puVar24;
          uVar11 = auVar26._8_8_;
          if (*(long *)(lVar14 + 0x10) != 0) {
            uVar17 = Atlas_Stats_StatsData__GetStat();
            uVar11 = auVar25._8_8_;
            if (*(long *)(lVar14 + 0x18) != 0) {
              iVar6 = Atlas_Stats_StatsData__GetStat(*(long *)(lVar14 + 0x18),auVar25._8_8_);
              return (ulong)(uint)(iVar6 + (int)uVar17);
            }
          }
          auVar3._8_8_ = uVar11;
          auVar3._0_8_ = lVar14;
          auVar26 = func_0x00f78af4();
          lVar20 = auVar26._8_8_;
          *(undefined8 *)((long)pppuVar5 + -0x70) = unaff_x24;
          *(undefined4 **)((long)pppuVar5 + -0x68) = unaff_x23;
          *(ulong *)((long)pppuVar5 + -0x60) = uVar8;
          *(ulong *)((long)pppuVar5 + -0x58) = uVar17;
          *(long *)((long)pppuVar5 + -0x50) = lVar14;
          *(undefined8 *)((long)pppuVar5 + -0x48) = uVar11;
          *(undefined1 **)((long)pppuVar5 + -0x40) = (undefined1 *)((long)pppuVar5 + -0x10);
          *(undefined **)((long)pppuVar5 + -0x38) =
               &Atlas_Stats_StatsManager__GetSummedCommittedStats;
          if (lVar20 == 0) {
code_r0x01505370:
            func_0x00f78af4();
          }
          else {
            if ((int)*(ulong *)(lVar20 + 0x18) < 1) {
              return 0;
            }
            uVar17 = 0;
            uVar8 = 0;
            uVar9 = *(ulong *)(lVar20 + 0x18) & 0xffffffff;
            unaff_x23 = (undefined4 *)(lVar20 + 0x20);
            while (auVar3 = auVar26, uVar8 < uVar9) {
              lVar14 = *(long *)(auVar26._0_8_ + 0x10);
              if (lVar14 == 0) goto code_r0x01505370;
              iVar6 = Atlas_Stats_StatsData__GetStat(lVar14,unaff_x23[uVar8]);
              uVar17 = (ulong)(uint)(iVar6 + (int)uVar17);
              uVar8 = uVar8 + 1;
              uVar9 = (ulong)*(uint *)(lVar20 + 0x18);
              if ((long)(int)*(uint *)(lVar20 + 0x18) <= (long)uVar8) {
                return uVar17;
              }
            }
          }
          uVar11 = func_0x00f78b24();
          auVar26 = func_0x00f78ac0(uVar11,0);
          lVar14 = auVar26._8_8_;
          *(undefined8 *)((long)pppuVar5 + -0xb0) = unaff_x24;
          *(undefined4 **)((long)pppuVar5 + -0xa8) = unaff_x23;
          *(ulong *)((long)pppuVar5 + -0xa0) = uVar8;
          *(ulong *)((long)pppuVar5 + -0x98) = uVar17;
          *(undefined1 (*) [16])((long)pppuVar5 + -0x90) = auVar3;
          *(undefined1 **)((long)pppuVar5 + -0x80) = (undefined1 *)((long)pppuVar5 + -0x40);
          *(undefined **)((long)pppuVar5 + -0x78) =
               &Atlas_Stats_StatsManager__GetSummedTransactionStats;
          if (lVar14 == 0) {
code_r0x01505408:
            func_0x00f78af4();
          }
          else {
            if ((int)*(ulong *)(lVar14 + 0x18) < 1) {
              return 0;
            }
            uVar17 = 0;
            uVar8 = 0;
            uVar9 = *(ulong *)(lVar14 + 0x18) & 0xffffffff;
            unaff_x23 = (undefined4 *)(lVar14 + 0x20);
            while (auVar3 = auVar26, uVar8 < uVar9) {
              lVar20 = *(long *)(auVar26._0_8_ + 0x18);
              if (lVar20 == 0) goto code_r0x01505408;
              iVar6 = Atlas_Stats_StatsData__GetStat(lVar20,unaff_x23[uVar8]);
              uVar17 = (ulong)(uint)(iVar6 + (int)uVar17);
              uVar8 = uVar8 + 1;
              uVar9 = (ulong)*(uint *)(lVar14 + 0x18);
              if ((long)(int)*(uint *)(lVar14 + 0x18) <= (long)uVar8) {
                return uVar17;
              }
            }
          }
          uVar11 = func_0x00f78b24();
          auVar26 = func_0x00f78ac0(uVar11,0);
          lVar14 = auVar26._8_8_;
          *(undefined8 *)((long)pppuVar5 + -0xf0) = unaff_x24;
          *(undefined4 **)((long)pppuVar5 + -0xe8) = unaff_x23;
          *(ulong *)((long)pppuVar5 + -0xe0) = uVar8;
          *(ulong *)((long)pppuVar5 + -0xd8) = uVar17;
          *(undefined1 (*) [16])((long)pppuVar5 + -0xd0) = auVar3;
          *(undefined1 **)((long)pppuVar5 + -0xc0) = (undefined1 *)((long)pppuVar5 + -0x80);
          *(undefined **)((long)pppuVar5 + -0xb8) = &Atlas_Stats_StatsManager__GetSummedGlobalStats;
          pppuVar22 = (undefined1 ***)((long)pppuVar5 + -0xc0);
          if (lVar14 == 0) goto code_r0x015054a8;
          if ((int)*(ulong *)(lVar14 + 0x18) < 1) {
            return 0;
          }
          uVar17 = 0;
          uVar8 = 0;
          unaff_x23 = (undefined4 *)(lVar14 + 0x20);
          if ((*(ulong *)(lVar14 + 0x18) & 0xffffffff) == 0) {
            uVar11 = func_0x00f78b24();
            func_0x00f78ac0(uVar11,0);
            auVar3 = auVar26;
code_r0x015054a8:
            uVar11 = func_0x00f78af4();
            *(ulong *)((long)pppuVar5 + -0x120) = uVar8;
            *(ulong *)((long)pppuVar5 + -0x118) = uVar17;
            *(undefined1 (*) [16])((long)pppuVar5 + -0x110) = auVar3;
            *(undefined1 ****)((long)pppuVar5 + -0x100) = pppuVar22;
            *(undefined **)((long)pppuVar5 + -0xf8) = &Atlas_Stats_StatsManager__GetStatFromString;
            if ((bRam0000000003eb4d0b & 1) == 0) {
              func_0x00f78a20(0x3d24d58);
              bRam0000000003eb4d0b = 1;
            }
            *(undefined4 *)((long)pppuVar5 + -0x124) = 0;
            if (((*(ushort *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*Atlas.Stats.StatsManager$$TryGetStatFromString*/ func_0x0150552c(uVar11,(undefined1 *)((long)pppuVar5 + -0x124));
            return (ulong)*(uint *)((long)pppuVar5 + -0x124);
          }
          auVar25._8_4_ = *unaff_x23;
          auVar25._0_8_ = auVar26._0_8_;
          auVar25._12_4_ = 0;
          puVar24 = &UNK_01505468;
          pppuVar5 = (undefined1 ***)((long)pppuVar5 + -0xf0);
        } while( true );
      }
      pppuVar4 = appuStack_80 + 2;
      ppuVar23 = (undefined1 **)&Atlas_Stats_StatsManager__GetCommittedStat;
      appuStack_80[0] = (undefined1 **)(appuStack_80 + 2);
    }
    else {
      pppuVar4 = appuStack_80 + 4;
      ppuVar23 = (undefined1 **)&Atlas_Stats_StatsManager__GetTransactionStat;
      pppuVar5 = appuStack_80 + 4;
      appuStack_80[2] = (undefined1 **)(appuStack_80 + 4);
    }
  }
  else {
    pppuVar4 = (undefined1 ***)&stack0xffffffffffffffb0;
    pppuVar5 = (undefined1 ***)&puStack_30;
    ppuVar23 = appuStack_80[5];
  }
  *(undefined1 ****)((long)pppuVar4 + -0x10) = pppuVar5;
  *(undefined1 ***)((long)pppuVar4 + -8) = ppuVar23;
  lVar20 = *(long *)(lVar20 + 0x10);
  if (lVar20 == 0) {
    func_0x00f78af4();
  }
  else if (uVar13 < *(uint *)(lVar20 + 0x18)) {
    return (ulong)*(uint *)(lVar20 + (long)(int)uVar13 * 4 + 0x20);
  }
  uVar10 = func_0x00f78b24();
  auVar26 = func_0x00f78ac0(uVar10,0);
  lVar20 = auVar26._8_8_;
  uVar9 = auVar26._0_8_;
  *(undefined8 *)((long)pppuVar4 + -0x50) = unaff_x24;
  *(undefined4 **)((long)pppuVar4 + -0x48) = unaff_x23;
  *(ulong *)((long)pppuVar4 + -0x40) = uVar8;
  *(ulong *)((long)pppuVar4 + -0x38) = uVar17;
  *(long *)((long)pppuVar4 + -0x30) = lVar14;
  *(undefined8 *)((long)pppuVar4 + -0x28) = uVar11;
  *(undefined1 **)((long)pppuVar4 + -0x20) = (undefined1 *)((long)pppuVar4 + -0x10);
  *(code **)((long)pppuVar4 + -0x18) = Atlas_Stats_StatsData__UpdateToLargestValues;
  uVar17 = uVar9;
  if ((bRam0000000003eb4d06 & 1) == 0) {
    uVar17 = func_0x00f78a20(0x3d1f100);
    bRam0000000003eb4d06 = 1;
  }
  lVar14 = *(long *)(uVar9 + 0x10);
  if (((lVar14 != 0) && (lVar20 != 0)) && (*(long *)(lVar20 + 0x10) != 0)) {
    iVar6 = *(int *)(lVar14 + 0x18);
    uVar8 = *(ulong *)(*(long *)(lVar20 + 0x10) + 0x18);
    if (iVar6 < (int)uVar8) {
      lVar14 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,uVar8);
      uVar17 = /*System.Array$$Copy*/ func_0x0292c49c(*(undefined8 *)(uVar9 + 0x10),lVar14,iVar6,0);
      *(long *)(uVar9 + 0x10) = lVar14;
    }
    if (0 < (int)uVar8) {
      if (lVar14 == 0) goto LAB_01504c70;
      uVar9 = 0;
      uVar13 = *(uint *)(lVar14 + 0x18);
      do {
        if (uVar13 == uVar9) {
LAB_01504c64:
          uVar11 = func_0x00f78b24();
          func_0x00f78ac0(uVar11,0);
          goto LAB_01504c70;
        }
        lVar15 = *(long *)(lVar20 + 0x10);
        if (lVar15 == 0) goto LAB_01504c70;
        if ((*(uint *)(lVar15 + 0x18) <= uVar9) || (uVar13 <= uVar9)) goto LAB_01504c64;
        iVar6 = *(int *)(lVar14 + 0x20 + uVar9 * 4);
        iVar7 = *(int *)(lVar15 + uVar9 * 4 + 0x20);
        if (iVar6 <= iVar7) {
          iVar6 = iVar7;
        }
        *(int *)(lVar14 + 0x20 + uVar9 * 4) = iVar6;
        uVar9 = uVar9 + 1;
      } while ((uVar8 & 0xffffffff) != uVar9);
    }
    return uVar17;
  }
LAB_01504c70:
  func_0x00f78af4();
  *(ulong *)((long)pppuVar4 + -0x80) = uVar8;
  *(long *)((long)pppuVar4 + -0x78) = lVar14;
  *(undefined1 (*) [16])((long)pppuVar4 + -0x70) = auVar26;
  *(undefined1 **)((long)pppuVar4 + -0x60) = (undefined1 *)((long)pppuVar4 + -0x20);
  *(code **)((long)pppuVar4 + -0x58) = Atlas_Stats_StatsData__Clone;
  if ((bRam0000000003eb4d07 & 1) == 0) {
    func_0x00f78a20(0x3d24d50);
    bRam0000000003eb4d07 = 1;
  }
  uVar8 = func_0x00f78aec(/*Atlas.Stats.StatsData_TypeInfo*/ uRam0000000003d24d50);
  return uVar8;
}



// ============================================================
// RVA: 0x1505194 | Atlas.Stats.StatsManager.SetStat
// ============================================================

/* WARNING: Possible PIC construction at 0x01504cc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01505464: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01504cc4) */
/* WARNING: Removing unreachable block (ram,0x01504ce8) */
/* WARNING: Removing unreachable block (ram,0x01504cc8) */
/* WARNING: Removing unreachable block (ram,0x01505468) */
/* WARNING: Removing unreachable block (ram,0x0150547c) */
/* WARNING: Type propagation algorithm not settling */

ulong Atlas_Stats_StatsManager__SetStat(long param_1,long param_2,ulong param_3)

{
  long *plVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined1 *puVar4;
  undefined1 **ppuVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 *puVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long unaff_x19;
  ulong unaff_x21;
  ulong unaff_x22;
  code *pcVar18;
  undefined4 *unaff_x23;
  long lVar19;
  undefined8 unaff_x24;
  undefined1 **ppuVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  ulong auStack_d0 [14];
  undefined *apuStack_60 [2];
  undefined *puVar23;
  
  if (*(long *)(param_1 + 0x20) == 0) {
code_r0x01505234:
    func_0x00f78af4();
  }
  else {
    unaff_x21 = Atlas_Stats_StatsData__GetStat();
    unaff_x19 = param_2;
    unaff_x22 = param_3;
    if (*(long *)(param_1 + 0x20) == 0) goto code_r0x01505234;
    Atlas_Stats_StatsData__SetStat(*(long *)(param_1 + 0x20),param_2,param_3);
    if (*(long *)(param_1 + 0x20) == 0) goto code_r0x01505234;
    uVar8 = Atlas_Stats_StatsData__GetStat(*(long *)(param_1 + 0x20),param_2);
    if ((int)uVar8 == (int)unaff_x21) {
      return uVar8;
    }
    lVar13 = *(long *)(param_1 + 0x28);
    if (lVar13 == 0) goto code_r0x01505234;
    if ((uint)param_2 < *(uint *)(lVar13 + 0x18)) {
      uVar8 = *(ulong *)(lVar13 + (long)(int)(uint)param_2 * 8 + 0x20);
      if (uVar8 == 0) {
        return 0;
      }
      uVar12 = 0;
      apuStack_60[1] = (undefined *)uVar8;
      lVar13 = *(long *)(uVar8 + 0x68);
      if (lVar13 == 0) {
        ppuVar20 = apuStack_60 + 1;
        lVar19 = 1;
      }
      else {
        lVar19 = *(long *)(lVar13 + 0x18);
        if (lVar19 == 0) {
          return uVar8;
        }
        ppuVar20 = (undefined1 **)(lVar13 + 0x20);
      }
      lVar13 = 0;
      do {
        puVar14 = ppuVar20[lVar13];
        pcVar18 = *(code **)(puVar14 + 0x10);
        plVar1 = *(long **)(puVar14 + 0x20);
        lVar9 = *(long *)(puVar14 + 0x28);
        if (*(short *)(lVar9 + 0x48) == -1) {
          func_0x00f78ad8(lVar9,uVar12);
        }
        iVar6 = func_0x00f78a4c(lVar9);
        if (iVar6 == 0) {
          if ((((plVar1 == (long *)0x0) || (*(short *)(lVar9 + 0x48) == -1)) ||
              ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(uVar8 + 0x18) == 0))
          goto code_r0x02924d98;
          iVar6 = func_0x00f78a44(lVar9);
          iVar7 = func_0x00f78ec0(lVar9);
          if (iVar6 == 0) {
            uVar2 = *(ushort *)(lVar9 + 0x48);
            if (iVar7 == 0) {
              lVar9 = *plVar1 + (ulong)uVar2 * 0x10;
              auVar21 = (**(code **)(lVar9 + 0x138))(plVar1,*(undefined8 *)(lVar9 + 0x140));
              goto code_r0x02924da4;
            }
            lVar9 = func_0x00f78a48(lVar9);
            lVar15 = *plVar1;
            uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
            if (uVar16 != 0) {
              piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == lVar9) {
                  puVar10 = (undefined8 *)
                            (lVar15 + (long)(int)(*piVar17 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x02924e68;
                }
                piVar17 = piVar17 + 4;
                uVar16 = uVar16 - 1;
              } while (uVar16 != 0);
            }
            puVar10 = (undefined8 *)func_0x00fac1f0(plVar1,lVar9,(ulong)uVar2);
code_r0x02924e68:
            pcVar18 = (code *)*puVar10;
            puVar10 = (undefined8 *)puVar10[1];
          }
          else {
            if (iVar7 == 0) {
              uVar12 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar9 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar15 = *plVar1;
              uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
              if (uVar16 != 0) {
                piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == *(long *)(lVar9 + 0x18)) {
                    lVar15 = lVar15 + (long)(int)(*piVar17 + (uint)*(ushort *)(lVar9 + 0x48)) * 0x10
                             + 0x138;
                    goto code_r0x02924e40;
                  }
                  piVar17 = piVar17 + 4;
                  uVar16 = uVar16 - 1;
                } while (uVar16 != 0);
              }
              lVar15 = func_0x00fac1f0(plVar1);
code_r0x02924e40:
              uVar12 = *(undefined8 *)(lVar15 + 8);
            }
            puVar10 = (undefined8 *)func_0x00f78acc(uVar12,lVar9);
            pcVar18 = (code *)*puVar10;
          }
          auVar21 = (*pcVar18)(plVar1,puVar10);
        }
        else if (*(char *)(lVar9 + 0x4a) == '\0') {
          auVar21 = (*pcVar18)(lVar9);
        }
        else {
code_r0x02924d98:
          auVar21 = (*pcVar18)(plVar1,lVar9);
        }
code_r0x02924da4:
        uVar12 = auVar21._8_8_;
        lVar13 = lVar13 + 1;
        if (lVar13 == lVar19) {
          return auVar21._0_8_;
        }
      } while( true );
    }
  }
  uVar12 = func_0x00f78b24();
  auVar22 = func_0x00f78ac0(uVar12,0);
  uVar11 = auVar22._8_4_;
  puVar23 = &Atlas_Stats_StatsManager__GetStat;
  lVar13 = *(long *)(auVar22._0_8_ + 0x20);
  if (lVar13 == 0) {
    auVar22 = func_0x00f78af4();
    uVar11 = auVar22._8_4_;
    puVar14 = &stack0xffffffffffffffb0;
    lVar13 = *(long *)(auVar22._0_8_ + 0x18);
    if (lVar13 == 0) {
      auVar22 = func_0x00f78af4();
      uVar11 = auVar22._8_4_;
      ppuVar20 = apuStack_60;
      apuStack_60[1] = &Atlas_Stats_StatsManager__GetCommittedStat;
      lVar13 = *(long *)(auVar22._0_8_ + 0x10);
      if (lVar13 == 0) {
        puVar23 = &Atlas_Stats_StatsManager__GetGlobalStat;
        apuStack_60[0] = &stack0xffffffffffffffb0;
        auVar21 = func_0x00f78af4();
        ppuVar5 = apuStack_60;
        do {
          lVar13 = auVar21._0_8_;
          *(ulong *)((long)ppuVar5 + -0x30) = unaff_x22;
          *(ulong *)((long)ppuVar5 + -0x28) = unaff_x21;
          *(long *)((long)ppuVar5 + -0x20) = param_1;
          *(long *)((long)ppuVar5 + -0x18) = unaff_x19;
          *(undefined1 ***)((long)ppuVar5 + -0x10) = ppuVar20;
          *(undefined **)((long)ppuVar5 + -8) = puVar23;
          if (*(long *)(lVar13 + 0x10) != 0) {
            unaff_x21 = Atlas_Stats_StatsData__GetStat();
            unaff_x19 = auVar21._8_8_;
            if (*(long *)(lVar13 + 0x18) != 0) {
              iVar6 = Atlas_Stats_StatsData__GetStat(*(long *)(lVar13 + 0x18),auVar21._8_8_);
              return (ulong)(uint)(iVar6 + (int)unaff_x21);
            }
          }
          auVar3._8_8_ = unaff_x19;
          auVar3._0_8_ = lVar13;
          auVar21 = func_0x00f78af4();
          lVar19 = auVar21._8_8_;
          *(undefined8 *)((long)ppuVar5 + -0x70) = unaff_x24;
          *(undefined4 **)((long)ppuVar5 + -0x68) = unaff_x23;
          *(ulong *)((long)ppuVar5 + -0x60) = unaff_x22;
          *(ulong *)((long)ppuVar5 + -0x58) = unaff_x21;
          *(long *)((long)ppuVar5 + -0x50) = lVar13;
          *(long *)((long)ppuVar5 + -0x48) = unaff_x19;
          *(undefined1 **)((long)ppuVar5 + -0x40) = (undefined1 *)((long)ppuVar5 + -0x10);
          *(undefined **)((long)ppuVar5 + -0x38) =
               &Atlas_Stats_StatsManager__GetSummedCommittedStats;
          if (lVar19 == 0) {
code_r0x01505370:
            func_0x00f78af4();
          }
          else {
            if ((int)*(ulong *)(lVar19 + 0x18) < 1) {
              return 0;
            }
            unaff_x21 = 0;
            unaff_x22 = 0;
            uVar8 = *(ulong *)(lVar19 + 0x18) & 0xffffffff;
            unaff_x23 = (undefined4 *)(lVar19 + 0x20);
            while (auVar3 = auVar21, unaff_x22 < uVar8) {
              lVar13 = *(long *)(auVar21._0_8_ + 0x10);
              if (lVar13 == 0) goto code_r0x01505370;
              iVar6 = Atlas_Stats_StatsData__GetStat(lVar13,unaff_x23[unaff_x22]);
              unaff_x21 = (ulong)(uint)(iVar6 + (int)unaff_x21);
              unaff_x22 = unaff_x22 + 1;
              uVar8 = (ulong)*(uint *)(lVar19 + 0x18);
              if ((long)(int)*(uint *)(lVar19 + 0x18) <= (long)unaff_x22) {
                return unaff_x21;
              }
            }
          }
          uVar12 = func_0x00f78b24();
          auVar21 = func_0x00f78ac0(uVar12,0);
          lVar13 = auVar21._8_8_;
          *(undefined8 *)((long)ppuVar5 + -0xb0) = unaff_x24;
          *(undefined4 **)((long)ppuVar5 + -0xa8) = unaff_x23;
          *(ulong *)((long)ppuVar5 + -0xa0) = unaff_x22;
          *(ulong *)((long)ppuVar5 + -0x98) = unaff_x21;
          *(undefined1 (*) [16])((long)ppuVar5 + -0x90) = auVar3;
          *(undefined1 **)((long)ppuVar5 + -0x80) = (undefined1 *)((long)ppuVar5 + -0x40);
          *(undefined **)((long)ppuVar5 + -0x78) =
               &Atlas_Stats_StatsManager__GetSummedTransactionStats;
          if (lVar13 == 0) {
code_r0x01505408:
            func_0x00f78af4();
          }
          else {
            if ((int)*(ulong *)(lVar13 + 0x18) < 1) {
              return 0;
            }
            unaff_x21 = 0;
            unaff_x22 = 0;
            uVar8 = *(ulong *)(lVar13 + 0x18) & 0xffffffff;
            unaff_x23 = (undefined4 *)(lVar13 + 0x20);
            while (auVar3 = auVar21, unaff_x22 < uVar8) {
              lVar19 = *(long *)(auVar21._0_8_ + 0x18);
              if (lVar19 == 0) goto code_r0x01505408;
              iVar6 = Atlas_Stats_StatsData__GetStat(lVar19,unaff_x23[unaff_x22]);
              unaff_x21 = (ulong)(uint)(iVar6 + (int)unaff_x21);
              unaff_x22 = unaff_x22 + 1;
              uVar8 = (ulong)*(uint *)(lVar13 + 0x18);
              if ((long)(int)*(uint *)(lVar13 + 0x18) <= (long)unaff_x22) {
                return unaff_x21;
              }
            }
          }
          uVar12 = func_0x00f78b24();
          auVar21 = func_0x00f78ac0(uVar12,0);
          unaff_x19 = auVar21._8_8_;
          param_1 = auVar21._0_8_;
          *(undefined8 *)((long)ppuVar5 + -0xf0) = unaff_x24;
          *(undefined4 **)((long)ppuVar5 + -0xe8) = unaff_x23;
          *(ulong *)((long)ppuVar5 + -0xe0) = unaff_x22;
          *(ulong *)((long)ppuVar5 + -0xd8) = unaff_x21;
          *(undefined1 (*) [16])((long)ppuVar5 + -0xd0) = auVar3;
          *(undefined1 **)((long)ppuVar5 + -0xc0) = (undefined1 *)((long)ppuVar5 + -0x80);
          *(undefined **)((long)ppuVar5 + -0xb8) = &Atlas_Stats_StatsManager__GetSummedGlobalStats;
          ppuVar20 = (undefined1 **)((long)ppuVar5 + -0xc0);
          if (unaff_x19 == 0) goto code_r0x015054a8;
          if ((int)*(ulong *)(unaff_x19 + 0x18) < 1) {
            return 0;
          }
          unaff_x21 = 0;
          unaff_x22 = 0;
          unaff_x23 = (undefined4 *)(unaff_x19 + 0x20);
          if ((*(ulong *)(unaff_x19 + 0x18) & 0xffffffff) == 0) {
            uVar12 = func_0x00f78b24();
            func_0x00f78ac0(uVar12,0);
            auVar3 = auVar21;
code_r0x015054a8:
            uVar12 = func_0x00f78af4();
            *(ulong *)((long)ppuVar5 + -0x120) = unaff_x22;
            *(ulong *)((long)ppuVar5 + -0x118) = unaff_x21;
            *(undefined1 (*) [16])((long)ppuVar5 + -0x110) = auVar3;
            *(undefined1 ***)((long)ppuVar5 + -0x100) = ppuVar20;
            *(undefined **)((long)ppuVar5 + -0xf8) = &Atlas_Stats_StatsManager__GetStatFromString;
            if ((bRam0000000003eb4d0b & 1) == 0) {
              func_0x00f78a20(0x3d24d58);
              bRam0000000003eb4d0b = 1;
            }
            *(undefined4 *)((long)ppuVar5 + -0x124) = 0;
            if (((*(ushort *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*Atlas.Stats.StatsManager$$TryGetStatFromString*/ func_0x0150552c(uVar12,(undefined1 *)((long)ppuVar5 + -0x124));
            return (ulong)*(uint *)((long)ppuVar5 + -0x124);
          }
          auVar21._8_4_ = *unaff_x23;
          auVar21._0_8_ = param_1;
          auVar21._12_4_ = 0;
          puVar23 = &UNK_01505468;
          ppuVar5 = (undefined1 **)((long)ppuVar5 + -0xf0);
        } while( true );
      }
      puVar4 = &stack0xffffffffffffffb0;
      puVar23 = &Atlas_Stats_StatsManager__GetCommittedStat;
      apuStack_60[0] = &stack0xffffffffffffffb0;
    }
    else {
      puVar4 = &stack0xffffffffffffffc0;
      puVar23 = &Atlas_Stats_StatsManager__GetTransactionStat;
      puVar14 = &stack0xffffffffffffffc0;
    }
  }
  else {
    puVar4 = &stack0xffffffffffffffd0;
    puVar14 = &stack0xfffffffffffffff0;
  }
  *(undefined1 **)(puVar4 + -0x10) = puVar14;
  *(undefined **)(puVar4 + -8) = puVar23;
  lVar13 = *(long *)(lVar13 + 0x10);
  if (lVar13 == 0) {
    func_0x00f78af4();
  }
  else if (uVar11 < *(uint *)(lVar13 + 0x18)) {
    return (ulong)*(uint *)(lVar13 + (long)(int)uVar11 * 4 + 0x20);
  }
  uVar12 = func_0x00f78b24();
  auVar21 = func_0x00f78ac0(uVar12,0);
  lVar13 = auVar21._8_8_;
  uVar16 = auVar21._0_8_;
  *(undefined8 *)(puVar4 + -0x50) = unaff_x24;
  *(undefined4 **)(puVar4 + -0x48) = unaff_x23;
  *(ulong *)(puVar4 + -0x40) = unaff_x22;
  *(ulong *)(puVar4 + -0x38) = unaff_x21;
  *(long *)(puVar4 + -0x30) = param_1;
  *(long *)(puVar4 + -0x28) = unaff_x19;
  *(undefined1 **)(puVar4 + -0x20) = puVar4 + -0x10;
  *(code **)(puVar4 + -0x18) = Atlas_Stats_StatsData__UpdateToLargestValues;
  uVar8 = uVar16;
  if ((bRam0000000003eb4d06 & 1) == 0) {
    uVar8 = func_0x00f78a20(0x3d1f100);
    bRam0000000003eb4d06 = 1;
  }
  lVar19 = *(long *)(uVar16 + 0x10);
  if (((lVar19 != 0) && (lVar13 != 0)) && (*(long *)(lVar13 + 0x10) != 0)) {
    iVar6 = *(int *)(lVar19 + 0x18);
    unaff_x22 = *(ulong *)(*(long *)(lVar13 + 0x10) + 0x18);
    if (iVar6 < (int)unaff_x22) {
      lVar19 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,unaff_x22);
      uVar8 = /*System.Array$$Copy*/ func_0x0292c49c(*(undefined8 *)(uVar16 + 0x10),lVar19,iVar6,0);
      *(long *)(uVar16 + 0x10) = lVar19;
    }
    if (0 < (int)unaff_x22) {
      if (lVar19 == 0) goto LAB_01504c70;
      uVar16 = 0;
      uVar11 = *(uint *)(lVar19 + 0x18);
      do {
        if (uVar11 == uVar16) {
LAB_01504c64:
          uVar12 = func_0x00f78b24();
          func_0x00f78ac0(uVar12,0);
          goto LAB_01504c70;
        }
        lVar9 = *(long *)(lVar13 + 0x10);
        if (lVar9 == 0) goto LAB_01504c70;
        if ((*(uint *)(lVar9 + 0x18) <= uVar16) || (uVar11 <= uVar16)) goto LAB_01504c64;
        iVar6 = *(int *)(lVar19 + 0x20 + uVar16 * 4);
        iVar7 = *(int *)(lVar9 + uVar16 * 4 + 0x20);
        if (iVar6 <= iVar7) {
          iVar6 = iVar7;
        }
        *(int *)(lVar19 + 0x20 + uVar16 * 4) = iVar6;
        uVar16 = uVar16 + 1;
      } while ((unaff_x22 & 0xffffffff) != uVar16);
    }
    return uVar8;
  }
LAB_01504c70:
  func_0x00f78af4();
  *(ulong *)(puVar4 + -0x80) = unaff_x22;
  *(long *)(puVar4 + -0x78) = lVar19;
  *(undefined1 (*) [16])(puVar4 + -0x70) = auVar21;
  *(undefined1 **)(puVar4 + -0x60) = puVar4 + -0x20;
  *(code **)(puVar4 + -0x58) = Atlas_Stats_StatsData__Clone;
  if ((bRam0000000003eb4d07 & 1) == 0) {
    func_0x00f78a20(0x3d24d50);
    bRam0000000003eb4d07 = 1;
  }
  uVar8 = func_0x00f78aec(/*Atlas.Stats.StatsData_TypeInfo*/ uRam0000000003d24d50);
  return uVar8;
}



// ============================================================
// RVA: 0x1505198 | Atlas.Stats.StatsManager.InternalSetStat
// ============================================================

/* WARNING: Possible PIC construction at 0x01504cc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01505464: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01504cc4) */
/* WARNING: Removing unreachable block (ram,0x01504ce8) */
/* WARNING: Removing unreachable block (ram,0x01504cc8) */
/* WARNING: Removing unreachable block (ram,0x01505468) */
/* WARNING: Removing unreachable block (ram,0x0150547c) */
/* WARNING: Type propagation algorithm not settling */

ulong Atlas_Stats_StatsManager__InternalSetStat(long param_1,long param_2,ulong param_3)

{
  long *plVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined1 *puVar4;
  undefined1 **ppuVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 *puVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long unaff_x19;
  ulong unaff_x21;
  ulong unaff_x22;
  code *pcVar18;
  undefined4 *unaff_x23;
  long lVar19;
  undefined8 unaff_x24;
  undefined1 **ppuVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  ulong auStack_d0 [14];
  undefined *apuStack_60 [2];
  undefined *puVar23;
  
  if (*(long *)(param_1 + 0x20) == 0) {
LAB_01505234:
    func_0x00f78af4();
  }
  else {
    unaff_x21 = Atlas_Stats_StatsData__GetStat();
    unaff_x19 = param_2;
    unaff_x22 = param_3;
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_01505234;
    Atlas_Stats_StatsData__SetStat(*(long *)(param_1 + 0x20),param_2,param_3);
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_01505234;
    uVar8 = Atlas_Stats_StatsData__GetStat(*(long *)(param_1 + 0x20),param_2);
    if ((int)uVar8 == (int)unaff_x21) {
      return uVar8;
    }
    lVar13 = *(long *)(param_1 + 0x28);
    if (lVar13 == 0) goto LAB_01505234;
    if ((uint)param_2 < *(uint *)(lVar13 + 0x18)) {
      uVar8 = *(ulong *)(lVar13 + (long)(int)(uint)param_2 * 8 + 0x20);
      if (uVar8 == 0) {
        return 0;
      }
      uVar12 = 0;
      apuStack_60[1] = (undefined *)uVar8;
      lVar13 = *(long *)(uVar8 + 0x68);
      if (lVar13 == 0) {
        ppuVar20 = apuStack_60 + 1;
        lVar19 = 1;
      }
      else {
        lVar19 = *(long *)(lVar13 + 0x18);
        if (lVar19 == 0) {
          return uVar8;
        }
        ppuVar20 = (undefined1 **)(lVar13 + 0x20);
      }
      lVar13 = 0;
      do {
        puVar14 = ppuVar20[lVar13];
        pcVar18 = *(code **)(puVar14 + 0x10);
        plVar1 = *(long **)(puVar14 + 0x20);
        lVar9 = *(long *)(puVar14 + 0x28);
        if (*(short *)(lVar9 + 0x48) == -1) {
          func_0x00f78ad8(lVar9,uVar12);
        }
        iVar6 = func_0x00f78a4c(lVar9);
        if (iVar6 == 0) {
          if ((((plVar1 == (long *)0x0) || (*(short *)(lVar9 + 0x48) == -1)) ||
              ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(uVar8 + 0x18) == 0))
          goto code_r0x02924d98;
          iVar6 = func_0x00f78a44(lVar9);
          iVar7 = func_0x00f78ec0(lVar9);
          if (iVar6 == 0) {
            uVar2 = *(ushort *)(lVar9 + 0x48);
            if (iVar7 == 0) {
              lVar9 = *plVar1 + (ulong)uVar2 * 0x10;
              auVar21 = (**(code **)(lVar9 + 0x138))(plVar1,*(undefined8 *)(lVar9 + 0x140));
              goto code_r0x02924da4;
            }
            lVar9 = func_0x00f78a48(lVar9);
            lVar15 = *plVar1;
            uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
            if (uVar16 != 0) {
              piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == lVar9) {
                  puVar10 = (undefined8 *)
                            (lVar15 + (long)(int)(*piVar17 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x02924e68;
                }
                piVar17 = piVar17 + 4;
                uVar16 = uVar16 - 1;
              } while (uVar16 != 0);
            }
            puVar10 = (undefined8 *)func_0x00fac1f0(plVar1,lVar9,(ulong)uVar2);
code_r0x02924e68:
            pcVar18 = (code *)*puVar10;
            puVar10 = (undefined8 *)puVar10[1];
          }
          else {
            if (iVar7 == 0) {
              uVar12 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar9 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar15 = *plVar1;
              uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
              if (uVar16 != 0) {
                piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == *(long *)(lVar9 + 0x18)) {
                    lVar15 = lVar15 + (long)(int)(*piVar17 + (uint)*(ushort *)(lVar9 + 0x48)) * 0x10
                             + 0x138;
                    goto code_r0x02924e40;
                  }
                  piVar17 = piVar17 + 4;
                  uVar16 = uVar16 - 1;
                } while (uVar16 != 0);
              }
              lVar15 = func_0x00fac1f0(plVar1);
code_r0x02924e40:
              uVar12 = *(undefined8 *)(lVar15 + 8);
            }
            puVar10 = (undefined8 *)func_0x00f78acc(uVar12,lVar9);
            pcVar18 = (code *)*puVar10;
          }
          auVar21 = (*pcVar18)(plVar1,puVar10);
        }
        else if (*(char *)(lVar9 + 0x4a) == '\0') {
          auVar21 = (*pcVar18)(lVar9);
        }
        else {
code_r0x02924d98:
          auVar21 = (*pcVar18)(plVar1,lVar9);
        }
code_r0x02924da4:
        uVar12 = auVar21._8_8_;
        lVar13 = lVar13 + 1;
        if (lVar13 == lVar19) {
          return auVar21._0_8_;
        }
      } while( true );
    }
  }
  uVar12 = func_0x00f78b24();
  auVar22 = func_0x00f78ac0(uVar12,0);
  uVar11 = auVar22._8_4_;
  puVar23 = &Atlas_Stats_StatsManager__GetStat;
  lVar13 = *(long *)(auVar22._0_8_ + 0x20);
  if (lVar13 == 0) {
    auVar22 = func_0x00f78af4();
    uVar11 = auVar22._8_4_;
    puVar14 = &stack0xffffffffffffffb0;
    lVar13 = *(long *)(auVar22._0_8_ + 0x18);
    if (lVar13 == 0) {
      auVar22 = func_0x00f78af4();
      uVar11 = auVar22._8_4_;
      ppuVar20 = apuStack_60;
      apuStack_60[1] = &Atlas_Stats_StatsManager__GetCommittedStat;
      lVar13 = *(long *)(auVar22._0_8_ + 0x10);
      if (lVar13 == 0) {
        puVar23 = &Atlas_Stats_StatsManager__GetGlobalStat;
        apuStack_60[0] = &stack0xffffffffffffffb0;
        auVar21 = func_0x00f78af4();
        ppuVar5 = apuStack_60;
        do {
          lVar13 = auVar21._0_8_;
          *(ulong *)((long)ppuVar5 + -0x30) = unaff_x22;
          *(ulong *)((long)ppuVar5 + -0x28) = unaff_x21;
          *(long *)((long)ppuVar5 + -0x20) = param_1;
          *(long *)((long)ppuVar5 + -0x18) = unaff_x19;
          *(undefined1 ***)((long)ppuVar5 + -0x10) = ppuVar20;
          *(undefined **)((long)ppuVar5 + -8) = puVar23;
          if (*(long *)(lVar13 + 0x10) != 0) {
            unaff_x21 = Atlas_Stats_StatsData__GetStat();
            unaff_x19 = auVar21._8_8_;
            if (*(long *)(lVar13 + 0x18) != 0) {
              iVar6 = Atlas_Stats_StatsData__GetStat(*(long *)(lVar13 + 0x18),auVar21._8_8_);
              return (ulong)(uint)(iVar6 + (int)unaff_x21);
            }
          }
          auVar3._8_8_ = unaff_x19;
          auVar3._0_8_ = lVar13;
          auVar21 = func_0x00f78af4();
          lVar19 = auVar21._8_8_;
          *(undefined8 *)((long)ppuVar5 + -0x70) = unaff_x24;
          *(undefined4 **)((long)ppuVar5 + -0x68) = unaff_x23;
          *(ulong *)((long)ppuVar5 + -0x60) = unaff_x22;
          *(ulong *)((long)ppuVar5 + -0x58) = unaff_x21;
          *(long *)((long)ppuVar5 + -0x50) = lVar13;
          *(long *)((long)ppuVar5 + -0x48) = unaff_x19;
          *(undefined1 **)((long)ppuVar5 + -0x40) = (undefined1 *)((long)ppuVar5 + -0x10);
          *(undefined **)((long)ppuVar5 + -0x38) =
               &Atlas_Stats_StatsManager__GetSummedCommittedStats;
          if (lVar19 == 0) {
code_r0x01505370:
            func_0x00f78af4();
          }
          else {
            if ((int)*(ulong *)(lVar19 + 0x18) < 1) {
              return 0;
            }
            unaff_x21 = 0;
            unaff_x22 = 0;
            uVar8 = *(ulong *)(lVar19 + 0x18) & 0xffffffff;
            unaff_x23 = (undefined4 *)(lVar19 + 0x20);
            while (auVar3 = auVar21, unaff_x22 < uVar8) {
              lVar13 = *(long *)(auVar21._0_8_ + 0x10);
              if (lVar13 == 0) goto code_r0x01505370;
              iVar6 = Atlas_Stats_StatsData__GetStat(lVar13,unaff_x23[unaff_x22]);
              unaff_x21 = (ulong)(uint)(iVar6 + (int)unaff_x21);
              unaff_x22 = unaff_x22 + 1;
              uVar8 = (ulong)*(uint *)(lVar19 + 0x18);
              if ((long)(int)*(uint *)(lVar19 + 0x18) <= (long)unaff_x22) {
                return unaff_x21;
              }
            }
          }
          uVar12 = func_0x00f78b24();
          auVar21 = func_0x00f78ac0(uVar12,0);
          lVar13 = auVar21._8_8_;
          *(undefined8 *)((long)ppuVar5 + -0xb0) = unaff_x24;
          *(undefined4 **)((long)ppuVar5 + -0xa8) = unaff_x23;
          *(ulong *)((long)ppuVar5 + -0xa0) = unaff_x22;
          *(ulong *)((long)ppuVar5 + -0x98) = unaff_x21;
          *(undefined1 (*) [16])((long)ppuVar5 + -0x90) = auVar3;
          *(undefined1 **)((long)ppuVar5 + -0x80) = (undefined1 *)((long)ppuVar5 + -0x40);
          *(undefined **)((long)ppuVar5 + -0x78) =
               &Atlas_Stats_StatsManager__GetSummedTransactionStats;
          if (lVar13 == 0) {
code_r0x01505408:
            func_0x00f78af4();
          }
          else {
            if ((int)*(ulong *)(lVar13 + 0x18) < 1) {
              return 0;
            }
            unaff_x21 = 0;
            unaff_x22 = 0;
            uVar8 = *(ulong *)(lVar13 + 0x18) & 0xffffffff;
            unaff_x23 = (undefined4 *)(lVar13 + 0x20);
            while (auVar3 = auVar21, unaff_x22 < uVar8) {
              lVar19 = *(long *)(auVar21._0_8_ + 0x18);
              if (lVar19 == 0) goto code_r0x01505408;
              iVar6 = Atlas_Stats_StatsData__GetStat(lVar19,unaff_x23[unaff_x22]);
              unaff_x21 = (ulong)(uint)(iVar6 + (int)unaff_x21);
              unaff_x22 = unaff_x22 + 1;
              uVar8 = (ulong)*(uint *)(lVar13 + 0x18);
              if ((long)(int)*(uint *)(lVar13 + 0x18) <= (long)unaff_x22) {
                return unaff_x21;
              }
            }
          }
          uVar12 = func_0x00f78b24();
          auVar21 = func_0x00f78ac0(uVar12,0);
          unaff_x19 = auVar21._8_8_;
          param_1 = auVar21._0_8_;
          *(undefined8 *)((long)ppuVar5 + -0xf0) = unaff_x24;
          *(undefined4 **)((long)ppuVar5 + -0xe8) = unaff_x23;
          *(ulong *)((long)ppuVar5 + -0xe0) = unaff_x22;
          *(ulong *)((long)ppuVar5 + -0xd8) = unaff_x21;
          *(undefined1 (*) [16])((long)ppuVar5 + -0xd0) = auVar3;
          *(undefined1 **)((long)ppuVar5 + -0xc0) = (undefined1 *)((long)ppuVar5 + -0x80);
          *(undefined **)((long)ppuVar5 + -0xb8) = &Atlas_Stats_StatsManager__GetSummedGlobalStats;
          ppuVar20 = (undefined1 **)((long)ppuVar5 + -0xc0);
          if (unaff_x19 == 0) goto code_r0x015054a8;
          if ((int)*(ulong *)(unaff_x19 + 0x18) < 1) {
            return 0;
          }
          unaff_x21 = 0;
          unaff_x22 = 0;
          unaff_x23 = (undefined4 *)(unaff_x19 + 0x20);
          if ((*(ulong *)(unaff_x19 + 0x18) & 0xffffffff) == 0) {
            uVar12 = func_0x00f78b24();
            func_0x00f78ac0(uVar12,0);
            auVar3 = auVar21;
code_r0x015054a8:
            uVar12 = func_0x00f78af4();
            *(ulong *)((long)ppuVar5 + -0x120) = unaff_x22;
            *(ulong *)((long)ppuVar5 + -0x118) = unaff_x21;
            *(undefined1 (*) [16])((long)ppuVar5 + -0x110) = auVar3;
            *(undefined1 ***)((long)ppuVar5 + -0x100) = ppuVar20;
            *(undefined **)((long)ppuVar5 + -0xf8) = &Atlas_Stats_StatsManager__GetStatFromString;
            if ((bRam0000000003eb4d0b & 1) == 0) {
              func_0x00f78a20(0x3d24d58);
              bRam0000000003eb4d0b = 1;
            }
            *(undefined4 *)((long)ppuVar5 + -0x124) = 0;
            if (((*(ushort *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*Atlas.Stats.StatsManager$$TryGetStatFromString*/ func_0x0150552c(uVar12,(undefined1 *)((long)ppuVar5 + -0x124));
            return (ulong)*(uint *)((long)ppuVar5 + -0x124);
          }
          auVar21._8_4_ = *unaff_x23;
          auVar21._0_8_ = param_1;
          auVar21._12_4_ = 0;
          puVar23 = &UNK_01505468;
          ppuVar5 = (undefined1 **)((long)ppuVar5 + -0xf0);
        } while( true );
      }
      puVar4 = &stack0xffffffffffffffb0;
      puVar23 = &Atlas_Stats_StatsManager__GetCommittedStat;
      apuStack_60[0] = &stack0xffffffffffffffb0;
    }
    else {
      puVar4 = &stack0xffffffffffffffc0;
      puVar23 = &Atlas_Stats_StatsManager__GetTransactionStat;
      puVar14 = &stack0xffffffffffffffc0;
    }
  }
  else {
    puVar4 = &stack0xffffffffffffffd0;
    puVar14 = &stack0xfffffffffffffff0;
  }
  *(undefined1 **)(puVar4 + -0x10) = puVar14;
  *(undefined **)(puVar4 + -8) = puVar23;
  lVar13 = *(long *)(lVar13 + 0x10);
  if (lVar13 == 0) {
    func_0x00f78af4();
  }
  else if (uVar11 < *(uint *)(lVar13 + 0x18)) {
    return (ulong)*(uint *)(lVar13 + (long)(int)uVar11 * 4 + 0x20);
  }
  uVar12 = func_0x00f78b24();
  auVar21 = func_0x00f78ac0(uVar12,0);
  lVar13 = auVar21._8_8_;
  uVar16 = auVar21._0_8_;
  *(undefined8 *)(puVar4 + -0x50) = unaff_x24;
  *(undefined4 **)(puVar4 + -0x48) = unaff_x23;
  *(ulong *)(puVar4 + -0x40) = unaff_x22;
  *(ulong *)(puVar4 + -0x38) = unaff_x21;
  *(long *)(puVar4 + -0x30) = param_1;
  *(long *)(puVar4 + -0x28) = unaff_x19;
  *(undefined1 **)(puVar4 + -0x20) = puVar4 + -0x10;
  *(code **)(puVar4 + -0x18) = Atlas_Stats_StatsData__UpdateToLargestValues;
  uVar8 = uVar16;
  if ((bRam0000000003eb4d06 & 1) == 0) {
    uVar8 = func_0x00f78a20(0x3d1f100);
    bRam0000000003eb4d06 = 1;
  }
  lVar19 = *(long *)(uVar16 + 0x10);
  if (((lVar19 != 0) && (lVar13 != 0)) && (*(long *)(lVar13 + 0x10) != 0)) {
    iVar6 = *(int *)(lVar19 + 0x18);
    unaff_x22 = *(ulong *)(*(long *)(lVar13 + 0x10) + 0x18);
    if (iVar6 < (int)unaff_x22) {
      lVar19 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,unaff_x22);
      uVar8 = /*System.Array$$Copy*/ func_0x0292c49c(*(undefined8 *)(uVar16 + 0x10),lVar19,iVar6,0);
      *(long *)(uVar16 + 0x10) = lVar19;
    }
    if (0 < (int)unaff_x22) {
      if (lVar19 == 0) goto LAB_01504c70;
      uVar16 = 0;
      uVar11 = *(uint *)(lVar19 + 0x18);
      do {
        if (uVar11 == uVar16) {
LAB_01504c64:
          uVar12 = func_0x00f78b24();
          func_0x00f78ac0(uVar12,0);
          goto LAB_01504c70;
        }
        lVar9 = *(long *)(lVar13 + 0x10);
        if (lVar9 == 0) goto LAB_01504c70;
        if ((*(uint *)(lVar9 + 0x18) <= uVar16) || (uVar11 <= uVar16)) goto LAB_01504c64;
        iVar6 = *(int *)(lVar19 + 0x20 + uVar16 * 4);
        iVar7 = *(int *)(lVar9 + uVar16 * 4 + 0x20);
        if (iVar6 <= iVar7) {
          iVar6 = iVar7;
        }
        *(int *)(lVar19 + 0x20 + uVar16 * 4) = iVar6;
        uVar16 = uVar16 + 1;
      } while ((unaff_x22 & 0xffffffff) != uVar16);
    }
    return uVar8;
  }
LAB_01504c70:
  func_0x00f78af4();
  *(ulong *)(puVar4 + -0x80) = unaff_x22;
  *(long *)(puVar4 + -0x78) = lVar19;
  *(undefined1 (*) [16])(puVar4 + -0x70) = auVar21;
  *(undefined1 **)(puVar4 + -0x60) = puVar4 + -0x20;
  *(code **)(puVar4 + -0x58) = Atlas_Stats_StatsData__Clone;
  if ((bRam0000000003eb4d07 & 1) == 0) {
    func_0x00f78a20(0x3d24d50);
    bRam0000000003eb4d07 = 1;
  }
  uVar8 = func_0x00f78aec(/*Atlas.Stats.StatsData_TypeInfo*/ uRam0000000003d24d50);
  return uVar8;
}



// ============================================================
// RVA: 0x1505244 | Atlas.Stats.StatsManager.GetStat
// ============================================================

/* WARNING: Possible PIC construction at 0x01504cc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01505464: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01504cc4) */
/* WARNING: Removing unreachable block (ram,0x01504ce8) */
/* WARNING: Removing unreachable block (ram,0x01504cc8) */
/* WARNING: Removing unreachable block (ram,0x01505468) */
/* WARNING: Removing unreachable block (ram,0x0150547c) */

ulong Atlas_Stats_StatsManager__GetStat(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 *puVar4;
  undefined1 **ppuVar6;
  undefined1 **ppuVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long lVar14;
  ulong unaff_x21;
  ulong unaff_x22;
  undefined4 *unaff_x23;
  undefined8 unaff_x24;
  undefined1 **unaff_x29;
  undefined1 **ppuVar15;
  undefined *unaff_x30;
  undefined *puVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [12];
  undefined1 *puStack_30;
  undefined *puStack_28;
  undefined1 *puStack_20;
  undefined *puStack_18;
  undefined1 *puVar5;
  
  auVar17._8_8_ = unaff_x19;
  auVar17._0_8_ = unaff_x20;
  puVar4 = &stack0xfffffffffffffff0;
  puVar5 = &stack0xfffffffffffffff0;
  lVar11 = *(long *)(param_1 + 0x20);
  if (lVar11 == 0) {
    auVar19 = func_0x00f78af4();
    param_2 = auVar19._8_4_;
    ppuVar6 = &puStack_20;
    unaff_x29 = &puStack_20;
    puStack_18 = &Atlas_Stats_StatsManager__GetTransactionStat;
    lVar11 = *(long *)(auVar19._0_8_ + 0x18);
    if (lVar11 == 0) {
      puStack_20 = &stack0xfffffffffffffff0;
      auVar19 = func_0x00f78af4();
      param_2 = auVar19._8_4_;
      ppuVar15 = &puStack_30;
      puStack_28 = &Atlas_Stats_StatsManager__GetCommittedStat;
      lVar11 = *(long *)(auVar19._0_8_ + 0x10);
      if (lVar11 == 0) {
        puVar16 = &Atlas_Stats_StatsManager__GetGlobalStat;
        puStack_30 = (undefined1 *)&puStack_20;
        auVar18 = func_0x00f78af4();
        ppuVar7 = &puStack_30;
        do {
          lVar11 = auVar18._0_8_;
          *(ulong *)((long)ppuVar7 + -0x30) = unaff_x22;
          *(ulong *)((long)ppuVar7 + -0x28) = unaff_x21;
          *(undefined1 (*) [16])((long)ppuVar7 + -0x20) = auVar17;
          *(undefined1 ***)((long)ppuVar7 + -0x10) = ppuVar15;
          *(undefined **)((long)ppuVar7 + -8) = puVar16;
          uVar9 = auVar17._8_8_;
          if (*(long *)(lVar11 + 0x10) != 0) {
            unaff_x21 = Atlas_Stats_StatsData__GetStat();
            uVar9 = auVar18._8_8_;
            if (*(long *)(lVar11 + 0x18) != 0) {
              iVar8 = Atlas_Stats_StatsData__GetStat(*(long *)(lVar11 + 0x18),auVar18._8_8_);
              return (ulong)(uint)(iVar8 + (int)unaff_x21);
            }
          }
          auVar3._8_8_ = uVar9;
          auVar3._0_8_ = lVar11;
          auVar17 = func_0x00f78af4();
          lVar14 = auVar17._8_8_;
          *(undefined8 *)((long)ppuVar7 + -0x70) = unaff_x24;
          *(undefined4 **)((long)ppuVar7 + -0x68) = unaff_x23;
          *(ulong *)((long)ppuVar7 + -0x60) = unaff_x22;
          *(ulong *)((long)ppuVar7 + -0x58) = unaff_x21;
          *(long *)((long)ppuVar7 + -0x50) = lVar11;
          *(undefined8 *)((long)ppuVar7 + -0x48) = uVar9;
          *(undefined1 **)((long)ppuVar7 + -0x40) = (undefined1 *)((long)ppuVar7 + -0x10);
          *(undefined **)((long)ppuVar7 + -0x38) =
               &Atlas_Stats_StatsManager__GetSummedCommittedStats;
          if (lVar14 == 0) {
code_r0x01505370:
            func_0x00f78af4();
          }
          else {
            if ((int)*(ulong *)(lVar14 + 0x18) < 1) {
              return 0;
            }
            unaff_x21 = 0;
            unaff_x22 = 0;
            uVar10 = *(ulong *)(lVar14 + 0x18) & 0xffffffff;
            unaff_x23 = (undefined4 *)(lVar14 + 0x20);
            while (auVar3 = auVar17, unaff_x22 < uVar10) {
              lVar11 = *(long *)(auVar17._0_8_ + 0x10);
              if (lVar11 == 0) goto code_r0x01505370;
              iVar8 = Atlas_Stats_StatsData__GetStat(lVar11,unaff_x23[unaff_x22]);
              unaff_x21 = (ulong)(uint)(iVar8 + (int)unaff_x21);
              unaff_x22 = unaff_x22 + 1;
              uVar10 = (ulong)*(uint *)(lVar14 + 0x18);
              if ((long)(int)*(uint *)(lVar14 + 0x18) <= (long)unaff_x22) {
                return unaff_x21;
              }
            }
          }
          uVar9 = func_0x00f78b24();
          auVar17 = func_0x00f78ac0(uVar9,0);
          lVar11 = auVar17._8_8_;
          *(undefined8 *)((long)ppuVar7 + -0xb0) = unaff_x24;
          *(undefined4 **)((long)ppuVar7 + -0xa8) = unaff_x23;
          *(ulong *)((long)ppuVar7 + -0xa0) = unaff_x22;
          *(ulong *)((long)ppuVar7 + -0x98) = unaff_x21;
          *(undefined1 (*) [16])((long)ppuVar7 + -0x90) = auVar3;
          *(undefined1 **)((long)ppuVar7 + -0x80) = (undefined1 *)((long)ppuVar7 + -0x40);
          *(undefined **)((long)ppuVar7 + -0x78) =
               &Atlas_Stats_StatsManager__GetSummedTransactionStats;
          if (lVar11 == 0) {
code_r0x01505408:
            func_0x00f78af4();
          }
          else {
            if ((int)*(ulong *)(lVar11 + 0x18) < 1) {
              return 0;
            }
            unaff_x21 = 0;
            unaff_x22 = 0;
            uVar10 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
            unaff_x23 = (undefined4 *)(lVar11 + 0x20);
            while (auVar3 = auVar17, unaff_x22 < uVar10) {
              lVar14 = *(long *)(auVar17._0_8_ + 0x18);
              if (lVar14 == 0) goto code_r0x01505408;
              iVar8 = Atlas_Stats_StatsData__GetStat(lVar14,unaff_x23[unaff_x22]);
              unaff_x21 = (ulong)(uint)(iVar8 + (int)unaff_x21);
              unaff_x22 = unaff_x22 + 1;
              uVar10 = (ulong)*(uint *)(lVar11 + 0x18);
              if ((long)(int)*(uint *)(lVar11 + 0x18) <= (long)unaff_x22) {
                return unaff_x21;
              }
            }
          }
          uVar9 = func_0x00f78b24();
          auVar17 = func_0x00f78ac0(uVar9,0);
          lVar11 = auVar17._8_8_;
          *(undefined8 *)((long)ppuVar7 + -0xf0) = unaff_x24;
          *(undefined4 **)((long)ppuVar7 + -0xe8) = unaff_x23;
          *(ulong *)((long)ppuVar7 + -0xe0) = unaff_x22;
          *(ulong *)((long)ppuVar7 + -0xd8) = unaff_x21;
          *(undefined1 (*) [16])((long)ppuVar7 + -0xd0) = auVar3;
          *(undefined1 **)((long)ppuVar7 + -0xc0) = (undefined1 *)((long)ppuVar7 + -0x80);
          *(undefined **)((long)ppuVar7 + -0xb8) = &Atlas_Stats_StatsManager__GetSummedGlobalStats;
          ppuVar15 = (undefined1 **)((long)ppuVar7 + -0xc0);
          if (lVar11 == 0) goto code_r0x015054a8;
          if ((int)*(ulong *)(lVar11 + 0x18) < 1) {
            return 0;
          }
          unaff_x21 = 0;
          unaff_x22 = 0;
          unaff_x23 = (undefined4 *)(lVar11 + 0x20);
          if ((*(ulong *)(lVar11 + 0x18) & 0xffffffff) == 0) {
            uVar9 = func_0x00f78b24();
            func_0x00f78ac0(uVar9,0);
            auVar3 = auVar17;
code_r0x015054a8:
            uVar9 = func_0x00f78af4();
            *(ulong *)((long)ppuVar7 + -0x120) = unaff_x22;
            *(ulong *)((long)ppuVar7 + -0x118) = unaff_x21;
            *(undefined1 (*) [16])((long)ppuVar7 + -0x110) = auVar3;
            *(undefined1 ***)((long)ppuVar7 + -0x100) = ppuVar15;
            *(undefined **)((long)ppuVar7 + -0xf8) = &Atlas_Stats_StatsManager__GetStatFromString;
            if ((bRam0000000003eb4d0b & 1) == 0) {
              func_0x00f78a20(0x3d24d58);
              bRam0000000003eb4d0b = 1;
            }
            *(undefined4 *)((long)ppuVar7 + -0x124) = 0;
            if (((*(ushort *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*Atlas.Stats.StatsManager$$TryGetStatFromString*/ func_0x0150552c(uVar9,(undefined1 *)((long)ppuVar7 + -0x124));
            return (ulong)*(uint *)((long)ppuVar7 + -0x124);
          }
          auVar18._8_4_ = *unaff_x23;
          auVar18._0_8_ = auVar17._0_8_;
          auVar18._12_4_ = 0;
          puVar16 = &UNK_01505468;
          ppuVar7 = (undefined1 **)((long)ppuVar7 + -0xf0);
        } while( true );
      }
      register0x00000008 = (BADSPACEBASE *)&puStack_20;
      unaff_x30 = &Atlas_Stats_StatsManager__GetCommittedStat;
      puStack_30 = (undefined1 *)ppuVar6;
    }
    else {
      register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
      unaff_x30 = &Atlas_Stats_StatsManager__GetTransactionStat;
      unaff_x29 = (undefined1 **)puVar5;
      puStack_20 = puVar4;
    }
  }
  *(undefined1 ***)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  lVar11 = *(long *)(lVar11 + 0x10);
  if (lVar11 == 0) {
    func_0x00f78af4();
  }
  else if (param_2 < *(uint *)(lVar11 + 0x18)) {
    return (ulong)*(uint *)(lVar11 + (long)(int)param_2 * 4 + 0x20);
  }
  uVar9 = func_0x00f78b24();
  auVar17 = func_0x00f78ac0(uVar9,0);
  lVar11 = auVar17._8_8_;
  uVar12 = auVar17._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x24;
  *(undefined4 **)((long)register0x00000008 + -0x48) = unaff_x23;
  *(ulong *)((long)register0x00000008 + -0x40) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x38) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x20) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x18) = Atlas_Stats_StatsData__UpdateToLargestValues;
  uVar10 = uVar12;
  if ((bRam0000000003eb4d06 & 1) == 0) {
    uVar10 = func_0x00f78a20(0x3d1f100);
    bRam0000000003eb4d06 = 1;
  }
  lVar14 = *(long *)(uVar12 + 0x10);
  if (((lVar14 != 0) && (lVar11 != 0)) && (*(long *)(lVar11 + 0x10) != 0)) {
    iVar8 = *(int *)(lVar14 + 0x18);
    unaff_x22 = *(ulong *)(*(long *)(lVar11 + 0x10) + 0x18);
    if (iVar8 < (int)unaff_x22) {
      lVar14 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,unaff_x22);
      uVar10 = /*System.Array$$Copy*/ func_0x0292c49c(*(undefined8 *)(uVar12 + 0x10),lVar14,iVar8,0);
      *(long *)(uVar12 + 0x10) = lVar14;
    }
    if (0 < (int)unaff_x22) {
      if (lVar14 == 0) goto LAB_01504c70;
      uVar12 = 0;
      uVar1 = *(uint *)(lVar14 + 0x18);
      do {
        if (uVar1 == uVar12) {
LAB_01504c64:
          uVar9 = func_0x00f78b24();
          func_0x00f78ac0(uVar9,0);
          goto LAB_01504c70;
        }
        lVar13 = *(long *)(lVar11 + 0x10);
        if (lVar13 == 0) goto LAB_01504c70;
        if ((*(uint *)(lVar13 + 0x18) <= uVar12) || (uVar1 <= uVar12)) goto LAB_01504c64;
        iVar8 = *(int *)(lVar14 + 0x20 + uVar12 * 4);
        iVar2 = *(int *)(lVar13 + uVar12 * 4 + 0x20);
        if (iVar8 <= iVar2) {
          iVar8 = iVar2;
        }
        *(int *)(lVar14 + 0x20 + uVar12 * 4) = iVar8;
        uVar12 = uVar12 + 1;
      } while ((unaff_x22 & 0xffffffff) != uVar12);
    }
    return uVar10;
  }
LAB_01504c70:
  func_0x00f78af4();
  *(ulong *)((long)register0x00000008 + -0x80) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x78) = lVar14;
  *(undefined1 (*) [16])((long)register0x00000008 + -0x70) = auVar17;
  *(undefined1 **)((long)register0x00000008 + -0x60) =
       (undefined1 *)((long)register0x00000008 + -0x20);
  *(code **)((long)register0x00000008 + -0x58) = Atlas_Stats_StatsData__Clone;
  if ((bRam0000000003eb4d07 & 1) == 0) {
    func_0x00f78a20(0x3d24d50);
    bRam0000000003eb4d07 = 1;
  }
  uVar10 = func_0x00f78aec(/*Atlas.Stats.StatsData_TypeInfo*/ uRam0000000003d24d50);
  return uVar10;
}



// ============================================================
// RVA: 0x1505260 | Atlas.Stats.StatsManager.GetTransactionStat
// ============================================================

/* WARNING: Possible PIC construction at 0x01504cc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01505464: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01504cc4) */
/* WARNING: Removing unreachable block (ram,0x01504ce8) */
/* WARNING: Removing unreachable block (ram,0x01504cc8) */
/* WARNING: Removing unreachable block (ram,0x01505468) */
/* WARNING: Removing unreachable block (ram,0x0150547c) */

ulong Atlas_Stats_StatsManager__GetTransactionStat(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 *puVar4;
  undefined1 **ppuVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long lVar13;
  ulong unaff_x21;
  ulong unaff_x22;
  undefined4 *unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined1 **ppuVar14;
  undefined *unaff_x30;
  undefined *puVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [12];
  undefined1 *puStack_20;
  undefined *puStack_18;
  undefined1 *puVar5;
  
  auVar16._8_8_ = unaff_x19;
  auVar16._0_8_ = unaff_x20;
  puVar4 = &stack0xfffffffffffffff0;
  puVar5 = &stack0xfffffffffffffff0;
  lVar10 = *(long *)(param_1 + 0x18);
  if (lVar10 == 0) {
    auVar18 = func_0x00f78af4();
    param_2 = auVar18._8_4_;
    ppuVar14 = &puStack_20;
    puStack_18 = &Atlas_Stats_StatsManager__GetCommittedStat;
    lVar10 = *(long *)(auVar18._0_8_ + 0x10);
    if (lVar10 == 0) {
      puVar15 = &Atlas_Stats_StatsManager__GetGlobalStat;
      puStack_20 = &stack0xfffffffffffffff0;
      auVar17 = func_0x00f78af4();
      ppuVar6 = &puStack_20;
      do {
        lVar10 = auVar17._0_8_;
        *(ulong *)((long)ppuVar6 + -0x30) = unaff_x22;
        *(ulong *)((long)ppuVar6 + -0x28) = unaff_x21;
        *(undefined1 (*) [16])((long)ppuVar6 + -0x20) = auVar16;
        *(undefined1 ***)((long)ppuVar6 + -0x10) = ppuVar14;
        *(undefined **)((long)ppuVar6 + -8) = puVar15;
        uVar8 = auVar16._8_8_;
        if (*(long *)(lVar10 + 0x10) != 0) {
          unaff_x21 = Atlas_Stats_StatsData__GetStat();
          uVar8 = auVar17._8_8_;
          if (*(long *)(lVar10 + 0x18) != 0) {
            iVar7 = Atlas_Stats_StatsData__GetStat(*(long *)(lVar10 + 0x18),auVar17._8_8_);
            return (ulong)(uint)(iVar7 + (int)unaff_x21);
          }
        }
        auVar3._8_8_ = uVar8;
        auVar3._0_8_ = lVar10;
        auVar16 = func_0x00f78af4();
        lVar13 = auVar16._8_8_;
        *(undefined8 *)((long)ppuVar6 + -0x70) = unaff_x24;
        *(undefined4 **)((long)ppuVar6 + -0x68) = unaff_x23;
        *(ulong *)((long)ppuVar6 + -0x60) = unaff_x22;
        *(ulong *)((long)ppuVar6 + -0x58) = unaff_x21;
        *(long *)((long)ppuVar6 + -0x50) = lVar10;
        *(undefined8 *)((long)ppuVar6 + -0x48) = uVar8;
        *(undefined1 **)((long)ppuVar6 + -0x40) = (undefined1 *)((long)ppuVar6 + -0x10);
        *(undefined **)((long)ppuVar6 + -0x38) = &Atlas_Stats_StatsManager__GetSummedCommittedStats;
        if (lVar13 == 0) {
code_r0x01505370:
          func_0x00f78af4();
        }
        else {
          if ((int)*(ulong *)(lVar13 + 0x18) < 1) {
            return 0;
          }
          unaff_x21 = 0;
          unaff_x22 = 0;
          uVar9 = *(ulong *)(lVar13 + 0x18) & 0xffffffff;
          unaff_x23 = (undefined4 *)(lVar13 + 0x20);
          while (auVar3 = auVar16, unaff_x22 < uVar9) {
            lVar10 = *(long *)(auVar16._0_8_ + 0x10);
            if (lVar10 == 0) goto code_r0x01505370;
            iVar7 = Atlas_Stats_StatsData__GetStat(lVar10,unaff_x23[unaff_x22]);
            unaff_x21 = (ulong)(uint)(iVar7 + (int)unaff_x21);
            unaff_x22 = unaff_x22 + 1;
            uVar9 = (ulong)*(uint *)(lVar13 + 0x18);
            if ((long)(int)*(uint *)(lVar13 + 0x18) <= (long)unaff_x22) {
              return unaff_x21;
            }
          }
        }
        uVar8 = func_0x00f78b24();
        auVar16 = func_0x00f78ac0(uVar8,0);
        lVar10 = auVar16._8_8_;
        *(undefined8 *)((long)ppuVar6 + -0xb0) = unaff_x24;
        *(undefined4 **)((long)ppuVar6 + -0xa8) = unaff_x23;
        *(ulong *)((long)ppuVar6 + -0xa0) = unaff_x22;
        *(ulong *)((long)ppuVar6 + -0x98) = unaff_x21;
        *(undefined1 (*) [16])((long)ppuVar6 + -0x90) = auVar3;
        *(undefined1 **)((long)ppuVar6 + -0x80) = (undefined1 *)((long)ppuVar6 + -0x40);
        *(undefined **)((long)ppuVar6 + -0x78) =
             &Atlas_Stats_StatsManager__GetSummedTransactionStats;
        if (lVar10 == 0) {
code_r0x01505408:
          func_0x00f78af4();
        }
        else {
          if ((int)*(ulong *)(lVar10 + 0x18) < 1) {
            return 0;
          }
          unaff_x21 = 0;
          unaff_x22 = 0;
          uVar9 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
          unaff_x23 = (undefined4 *)(lVar10 + 0x20);
          while (auVar3 = auVar16, unaff_x22 < uVar9) {
            lVar13 = *(long *)(auVar16._0_8_ + 0x18);
            if (lVar13 == 0) goto code_r0x01505408;
            iVar7 = Atlas_Stats_StatsData__GetStat(lVar13,unaff_x23[unaff_x22]);
            unaff_x21 = (ulong)(uint)(iVar7 + (int)unaff_x21);
            unaff_x22 = unaff_x22 + 1;
            uVar9 = (ulong)*(uint *)(lVar10 + 0x18);
            if ((long)(int)*(uint *)(lVar10 + 0x18) <= (long)unaff_x22) {
              return unaff_x21;
            }
          }
        }
        uVar8 = func_0x00f78b24();
        auVar16 = func_0x00f78ac0(uVar8,0);
        lVar10 = auVar16._8_8_;
        *(undefined8 *)((long)ppuVar6 + -0xf0) = unaff_x24;
        *(undefined4 **)((long)ppuVar6 + -0xe8) = unaff_x23;
        *(ulong *)((long)ppuVar6 + -0xe0) = unaff_x22;
        *(ulong *)((long)ppuVar6 + -0xd8) = unaff_x21;
        *(undefined1 (*) [16])((long)ppuVar6 + -0xd0) = auVar3;
        *(undefined1 **)((long)ppuVar6 + -0xc0) = (undefined1 *)((long)ppuVar6 + -0x80);
        *(undefined **)((long)ppuVar6 + -0xb8) = &Atlas_Stats_StatsManager__GetSummedGlobalStats;
        ppuVar14 = (undefined1 **)((long)ppuVar6 + -0xc0);
        if (lVar10 == 0) goto code_r0x015054a8;
        if ((int)*(ulong *)(lVar10 + 0x18) < 1) {
          return 0;
        }
        unaff_x21 = 0;
        unaff_x22 = 0;
        unaff_x23 = (undefined4 *)(lVar10 + 0x20);
        if ((*(ulong *)(lVar10 + 0x18) & 0xffffffff) == 0) {
          uVar8 = func_0x00f78b24();
          func_0x00f78ac0(uVar8,0);
          auVar3 = auVar16;
code_r0x015054a8:
          uVar8 = func_0x00f78af4();
          *(ulong *)((long)ppuVar6 + -0x120) = unaff_x22;
          *(ulong *)((long)ppuVar6 + -0x118) = unaff_x21;
          *(undefined1 (*) [16])((long)ppuVar6 + -0x110) = auVar3;
          *(undefined1 ***)((long)ppuVar6 + -0x100) = ppuVar14;
          *(undefined **)((long)ppuVar6 + -0xf8) = &Atlas_Stats_StatsManager__GetStatFromString;
          if ((bRam0000000003eb4d0b & 1) == 0) {
            func_0x00f78a20(0x3d24d58);
            bRam0000000003eb4d0b = 1;
          }
          *(undefined4 *)((long)ppuVar6 + -0x124) = 0;
          if (((*(ushort *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          /*Atlas.Stats.StatsManager$$TryGetStatFromString*/ func_0x0150552c(uVar8,(undefined1 *)((long)ppuVar6 + -0x124));
          return (ulong)*(uint *)((long)ppuVar6 + -0x124);
        }
        auVar17._8_4_ = *unaff_x23;
        auVar17._0_8_ = auVar16._0_8_;
        auVar17._12_4_ = 0;
        puVar15 = &UNK_01505468;
        ppuVar6 = (undefined1 **)((long)ppuVar6 + -0xf0);
      } while( true );
    }
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x30 = &Atlas_Stats_StatsManager__GetCommittedStat;
    unaff_x29 = puVar5;
    puStack_20 = puVar4;
  }
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  lVar10 = *(long *)(lVar10 + 0x10);
  if (lVar10 == 0) {
    func_0x00f78af4();
  }
  else if (param_2 < *(uint *)(lVar10 + 0x18)) {
    return (ulong)*(uint *)(lVar10 + (long)(int)param_2 * 4 + 0x20);
  }
  uVar8 = func_0x00f78b24();
  auVar16 = func_0x00f78ac0(uVar8,0);
  lVar10 = auVar16._8_8_;
  uVar11 = auVar16._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x24;
  *(undefined4 **)((long)register0x00000008 + -0x48) = unaff_x23;
  *(ulong *)((long)register0x00000008 + -0x40) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x38) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x20) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x18) = Atlas_Stats_StatsData__UpdateToLargestValues;
  uVar9 = uVar11;
  if ((bRam0000000003eb4d06 & 1) == 0) {
    uVar9 = func_0x00f78a20(0x3d1f100);
    bRam0000000003eb4d06 = 1;
  }
  lVar13 = *(long *)(uVar11 + 0x10);
  if (((lVar13 != 0) && (lVar10 != 0)) && (*(long *)(lVar10 + 0x10) != 0)) {
    iVar7 = *(int *)(lVar13 + 0x18);
    unaff_x22 = *(ulong *)(*(long *)(lVar10 + 0x10) + 0x18);
    if (iVar7 < (int)unaff_x22) {
      lVar13 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,unaff_x22);
      uVar9 = /*System.Array$$Copy*/ func_0x0292c49c(*(undefined8 *)(uVar11 + 0x10),lVar13,iVar7,0);
      *(long *)(uVar11 + 0x10) = lVar13;
    }
    if (0 < (int)unaff_x22) {
      if (lVar13 == 0) goto LAB_01504c70;
      uVar11 = 0;
      uVar1 = *(uint *)(lVar13 + 0x18);
      do {
        if (uVar1 == uVar11) {
LAB_01504c64:
          uVar8 = func_0x00f78b24();
          func_0x00f78ac0(uVar8,0);
          goto LAB_01504c70;
        }
        lVar12 = *(long *)(lVar10 + 0x10);
        if (lVar12 == 0) goto LAB_01504c70;
        if ((*(uint *)(lVar12 + 0x18) <= uVar11) || (uVar1 <= uVar11)) goto LAB_01504c64;
        iVar7 = *(int *)(lVar13 + 0x20 + uVar11 * 4);
        iVar2 = *(int *)(lVar12 + uVar11 * 4 + 0x20);
        if (iVar7 <= iVar2) {
          iVar7 = iVar2;
        }
        *(int *)(lVar13 + 0x20 + uVar11 * 4) = iVar7;
        uVar11 = uVar11 + 1;
      } while ((unaff_x22 & 0xffffffff) != uVar11);
    }
    return uVar9;
  }
LAB_01504c70:
  func_0x00f78af4();
  *(ulong *)((long)register0x00000008 + -0x80) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x78) = lVar13;
  *(undefined1 (*) [16])((long)register0x00000008 + -0x70) = auVar16;
  *(undefined1 **)((long)register0x00000008 + -0x60) =
       (undefined1 *)((long)register0x00000008 + -0x20);
  *(code **)((long)register0x00000008 + -0x58) = Atlas_Stats_StatsData__Clone;
  if ((bRam0000000003eb4d07 & 1) == 0) {
    func_0x00f78a20(0x3d24d50);
    bRam0000000003eb4d07 = 1;
  }
  uVar9 = func_0x00f78aec(/*Atlas.Stats.StatsData_TypeInfo*/ uRam0000000003d24d50);
  return uVar9;
}



// ============================================================
// RVA: 0x150527c | Atlas.Stats.StatsManager.GetCommittedStat
// ============================================================

/* WARNING: Possible PIC construction at 0x01504cc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01505464: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01504cc4) */
/* WARNING: Removing unreachable block (ram,0x01504ce8) */
/* WARNING: Removing unreachable block (ram,0x01504cc8) */
/* WARNING: Removing unreachable block (ram,0x01505468) */
/* WARNING: Removing unreachable block (ram,0x0150547c) */

ulong Atlas_Stats_StatsManager__GetCommittedStat(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 *puVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long lVar11;
  ulong unaff_x21;
  ulong uVar12;
  ulong unaff_x22;
  undefined4 *unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar13;
  undefined *puVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  auVar15._8_8_ = unaff_x19;
  auVar15._0_8_ = unaff_x20;
  puVar13 = &stack0xfffffffffffffff0;
  if (*(long *)(param_1 + 0x10) == 0) {
    puVar14 = &Atlas_Stats_StatsManager__GetGlobalStat;
    auVar16 = func_0x00f78af4();
    puVar4 = &stack0xfffffffffffffff0;
    do {
      lVar8 = auVar16._0_8_;
      *(ulong *)(puVar4 + -0x30) = unaff_x22;
      *(ulong *)(puVar4 + -0x28) = unaff_x21;
      *(undefined1 (*) [16])(puVar4 + -0x20) = auVar15;
      *(undefined1 **)(puVar4 + -0x10) = puVar13;
      *(undefined **)(puVar4 + -8) = puVar14;
      uVar6 = auVar15._8_8_;
      if (*(long *)(lVar8 + 0x10) != 0) {
        unaff_x21 = Atlas_Stats_StatsData__GetStat();
        uVar6 = auVar16._8_8_;
        if (*(long *)(lVar8 + 0x18) != 0) {
          iVar5 = Atlas_Stats_StatsData__GetStat(*(long *)(lVar8 + 0x18),auVar16._8_8_);
          return (ulong)(uint)(iVar5 + (int)unaff_x21);
        }
      }
      auVar3._8_8_ = uVar6;
      auVar3._0_8_ = lVar8;
      auVar15 = func_0x00f78af4();
      lVar11 = auVar15._8_8_;
      *(undefined8 *)(puVar4 + -0x70) = unaff_x24;
      *(undefined4 **)(puVar4 + -0x68) = unaff_x23;
      *(ulong *)(puVar4 + -0x60) = unaff_x22;
      *(ulong *)(puVar4 + -0x58) = unaff_x21;
      *(long *)(puVar4 + -0x50) = lVar8;
      *(undefined8 *)(puVar4 + -0x48) = uVar6;
      *(undefined1 **)(puVar4 + -0x40) = puVar4 + -0x10;
      *(undefined **)(puVar4 + -0x38) = &Atlas_Stats_StatsManager__GetSummedCommittedStats;
      if (lVar11 == 0) {
code_r0x01505370:
        func_0x00f78af4();
      }
      else {
        if ((int)*(ulong *)(lVar11 + 0x18) < 1) {
          return 0;
        }
        unaff_x21 = 0;
        unaff_x22 = 0;
        uVar7 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
        unaff_x23 = (undefined4 *)(lVar11 + 0x20);
        while (auVar3 = auVar15, unaff_x22 < uVar7) {
          lVar8 = *(long *)(auVar15._0_8_ + 0x10);
          if (lVar8 == 0) goto code_r0x01505370;
          iVar5 = Atlas_Stats_StatsData__GetStat(lVar8,unaff_x23[unaff_x22]);
          unaff_x21 = (ulong)(uint)(iVar5 + (int)unaff_x21);
          unaff_x22 = unaff_x22 + 1;
          uVar7 = (ulong)*(uint *)(lVar11 + 0x18);
          if ((long)(int)*(uint *)(lVar11 + 0x18) <= (long)unaff_x22) {
            return unaff_x21;
          }
        }
      }
      uVar6 = func_0x00f78b24();
      auVar15 = func_0x00f78ac0(uVar6,0);
      lVar8 = auVar15._8_8_;
      *(undefined8 *)(puVar4 + -0xb0) = unaff_x24;
      *(undefined4 **)(puVar4 + -0xa8) = unaff_x23;
      *(ulong *)(puVar4 + -0xa0) = unaff_x22;
      *(ulong *)(puVar4 + -0x98) = unaff_x21;
      *(undefined1 (*) [16])(puVar4 + -0x90) = auVar3;
      *(undefined1 **)(puVar4 + -0x80) = puVar4 + -0x40;
      *(undefined **)(puVar4 + -0x78) = &Atlas_Stats_StatsManager__GetSummedTransactionStats;
      if (lVar8 == 0) {
code_r0x01505408:
        func_0x00f78af4();
      }
      else {
        if ((int)*(ulong *)(lVar8 + 0x18) < 1) {
          return 0;
        }
        unaff_x21 = 0;
        unaff_x22 = 0;
        uVar7 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
        unaff_x23 = (undefined4 *)(lVar8 + 0x20);
        while (auVar3 = auVar15, unaff_x22 < uVar7) {
          lVar11 = *(long *)(auVar15._0_8_ + 0x18);
          if (lVar11 == 0) goto code_r0x01505408;
          iVar5 = Atlas_Stats_StatsData__GetStat(lVar11,unaff_x23[unaff_x22]);
          unaff_x21 = (ulong)(uint)(iVar5 + (int)unaff_x21);
          unaff_x22 = unaff_x22 + 1;
          uVar7 = (ulong)*(uint *)(lVar8 + 0x18);
          if ((long)(int)*(uint *)(lVar8 + 0x18) <= (long)unaff_x22) {
            return unaff_x21;
          }
        }
      }
      uVar6 = func_0x00f78b24();
      auVar15 = func_0x00f78ac0(uVar6,0);
      lVar8 = auVar15._8_8_;
      *(undefined8 *)(puVar4 + -0xf0) = unaff_x24;
      *(undefined4 **)(puVar4 + -0xe8) = unaff_x23;
      *(ulong *)(puVar4 + -0xe0) = unaff_x22;
      *(ulong *)(puVar4 + -0xd8) = unaff_x21;
      *(undefined1 (*) [16])(puVar4 + -0xd0) = auVar3;
      *(undefined1 **)(puVar4 + -0xc0) = puVar4 + -0x80;
      *(undefined **)(puVar4 + -0xb8) = &Atlas_Stats_StatsManager__GetSummedGlobalStats;
      puVar13 = puVar4 + -0xc0;
      if (lVar8 == 0) goto code_r0x015054a8;
      if ((int)*(ulong *)(lVar8 + 0x18) < 1) {
        return 0;
      }
      unaff_x21 = 0;
      unaff_x22 = 0;
      unaff_x23 = (undefined4 *)(lVar8 + 0x20);
      if ((*(ulong *)(lVar8 + 0x18) & 0xffffffff) == 0) {
        uVar6 = func_0x00f78b24();
        func_0x00f78ac0(uVar6,0);
        auVar3 = auVar15;
code_r0x015054a8:
        uVar6 = func_0x00f78af4();
        *(ulong *)(puVar4 + -0x120) = unaff_x22;
        *(ulong *)(puVar4 + -0x118) = unaff_x21;
        *(undefined1 (*) [16])(puVar4 + -0x110) = auVar3;
        *(undefined1 **)(puVar4 + -0x100) = puVar13;
        *(undefined **)(puVar4 + -0xf8) = &Atlas_Stats_StatsManager__GetStatFromString;
        if ((bRam0000000003eb4d0b & 1) == 0) {
          func_0x00f78a20(0x3d24d58);
          bRam0000000003eb4d0b = 1;
        }
        *(undefined4 *)(puVar4 + -0x124) = 0;
        if (((*(ushort *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        /*Atlas.Stats.StatsManager$$TryGetStatFromString*/ func_0x0150552c(uVar6,puVar4 + -0x124);
        return (ulong)*(uint *)(puVar4 + -0x124);
      }
      auVar16._8_4_ = *unaff_x23;
      auVar16._0_8_ = auVar15._0_8_;
      auVar16._12_4_ = 0;
      puVar14 = &UNK_01505468;
      puVar4 = puVar4 + -0xf0;
    } while( true );
  }
  lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  if (lVar8 == 0) {
    func_0x00f78af4();
  }
  else if (param_2 < *(uint *)(lVar8 + 0x18)) {
    return (ulong)*(uint *)(lVar8 + (long)(int)param_2 * 4 + 0x20);
  }
  uVar6 = func_0x00f78b24();
  auVar15 = func_0x00f78ac0(uVar6,0);
  lVar8 = auVar15._8_8_;
  uVar9 = auVar15._0_8_;
  uVar7 = uVar9;
  if ((bRam0000000003eb4d06 & 1) == 0) {
    uVar7 = func_0x00f78a20(0x3d1f100);
    bRam0000000003eb4d06 = 1;
  }
  lVar11 = *(long *)(uVar9 + 0x10);
  if (((lVar11 != 0) && (lVar8 != 0)) && (*(long *)(lVar8 + 0x10) != 0)) {
    iVar5 = *(int *)(lVar11 + 0x18);
    uVar12 = *(ulong *)(*(long *)(lVar8 + 0x10) + 0x18);
    if (iVar5 < (int)uVar12) {
      lVar11 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,uVar12);
      uVar7 = /*System.Array$$Copy*/ func_0x0292c49c(*(undefined8 *)(uVar9 + 0x10),lVar11,iVar5,0);
      *(long *)(uVar9 + 0x10) = lVar11;
    }
    if (0 < (int)uVar12) {
      if (lVar11 == 0) goto LAB_01504c70;
      uVar9 = 0;
      uVar1 = *(uint *)(lVar11 + 0x18);
      do {
        if (uVar1 == uVar9) {
LAB_01504c64:
          uVar6 = func_0x00f78b24();
          func_0x00f78ac0(uVar6,0);
          goto LAB_01504c70;
        }
        lVar10 = *(long *)(lVar8 + 0x10);
        if (lVar10 == 0) goto LAB_01504c70;
        if ((*(uint *)(lVar10 + 0x18) <= uVar9) || (uVar1 <= uVar9)) goto LAB_01504c64;
        iVar5 = *(int *)(lVar11 + 0x20 + uVar9 * 4);
        iVar2 = *(int *)(lVar10 + uVar9 * 4 + 0x20);
        if (iVar5 <= iVar2) {
          iVar5 = iVar2;
        }
        *(int *)(lVar11 + 0x20 + uVar9 * 4) = iVar5;
        uVar9 = uVar9 + 1;
      } while ((uVar12 & 0xffffffff) != uVar9);
    }
    return uVar7;
  }
LAB_01504c70:
  func_0x00f78af4();
  if ((bRam0000000003eb4d07 & 1) == 0) {
    func_0x00f78a20(0x3d24d50);
    bRam0000000003eb4d07 = 1;
  }
  uVar7 = func_0x00f78aec(/*Atlas.Stats.StatsData_TypeInfo*/ uRam0000000003d24d50);
  return uVar7;
}



// ============================================================
// RVA: 0x1505298 | Atlas.Stats.StatsManager.GetGlobalStat
// ============================================================

ulong Atlas_Stats_StatsManager__GetGlobalStat(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar5;
  long unaff_x19;
  ulong unaff_x21;
  ulong unaff_x22;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  uint uStack_124;
  ulong uStack_120;
  ulong uStack_118;
  undefined1 auStack_110 [16];
  undefined8 ***pppuStack_100;
  undefined *puStack_f8;
  undefined1 ***pppuStack_c0;
  undefined *puStack_b8;
  undefined1 **ppuStack_80;
  undefined *puStack_78;
  undefined1 *puStack_40;
  undefined *puStack_38;
  long lVar4;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    unaff_x21 = Atlas_Stats_StatsData__GetStat();
    unaff_x19 = param_2;
    if (*(long *)(param_1 + 0x18) != 0) {
      iVar1 = Atlas_Stats_StatsData__GetStat(*(long *)(param_1 + 0x18),param_2);
      return (ulong)(uint)(iVar1 + (int)unaff_x21);
    }
  }
  auVar6 = func_0x00f78af4();
  lVar4 = auVar6._8_8_;
  puStack_38 = &Atlas_Stats_StatsManager__GetSummedCommittedStats;
  puStack_40 = &stack0xfffffffffffffff0;
  if (lVar4 != 0) {
    if ((int)*(ulong *)(lVar4 + 0x18) < 1) {
      unaff_x21 = 0;
    }
    else {
      unaff_x21 = 0;
      unaff_x22 = 0;
      uVar5 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
      do {
        if (uVar5 <= unaff_x22) goto code_r0x01505374;
        lVar2 = *(long *)(auVar6._0_8_ + 0x10);
        unaff_x19 = lVar4;
        param_1 = auVar6._0_8_;
        if (lVar2 == 0) goto code_r0x01505370;
        iVar1 = Atlas_Stats_StatsData__GetStat(lVar2,*(undefined4 *)(lVar4 + 0x20 + unaff_x22 * 4));
        unaff_x21 = (ulong)(uint)(iVar1 + (int)unaff_x21);
        unaff_x22 = unaff_x22 + 1;
        uVar5 = (ulong)*(uint *)(lVar4 + 0x18);
      } while ((long)unaff_x22 < (long)(int)*(uint *)(lVar4 + 0x18));
    }
    return unaff_x21;
  }
code_r0x01505370:
  auVar6._8_8_ = unaff_x19;
  auVar6._0_8_ = param_1;
  func_0x00f78af4();
code_r0x01505374:
  uVar3 = func_0x00f78b24();
  auVar7 = func_0x00f78ac0(uVar3,0);
  lVar4 = auVar7._8_8_;
  puStack_78 = &Atlas_Stats_StatsManager__GetSummedTransactionStats;
  ppuStack_80 = &puStack_40;
  if (lVar4 != 0) {
    if ((int)*(ulong *)(lVar4 + 0x18) < 1) {
      unaff_x21 = 0;
    }
    else {
      unaff_x21 = 0;
      unaff_x22 = 0;
      uVar5 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
      do {
        auVar6 = auVar7;
        if (uVar5 <= unaff_x22) goto code_r0x0150540c;
        lVar2 = *(long *)(auVar7._0_8_ + 0x18);
        if (lVar2 == 0) goto code_r0x01505408;
        iVar1 = Atlas_Stats_StatsData__GetStat(lVar2,*(undefined4 *)(lVar4 + 0x20 + unaff_x22 * 4));
        unaff_x21 = (ulong)(uint)(iVar1 + (int)unaff_x21);
        unaff_x22 = unaff_x22 + 1;
        uVar5 = (ulong)*(uint *)(lVar4 + 0x18);
      } while ((long)unaff_x22 < (long)(int)*(uint *)(lVar4 + 0x18));
    }
    return unaff_x21;
  }
code_r0x01505408:
  func_0x00f78af4();
code_r0x0150540c:
  uVar3 = func_0x00f78b24();
  auVar7 = func_0x00f78ac0(uVar3,0);
  lVar4 = auVar7._8_8_;
  puStack_b8 = &Atlas_Stats_StatsManager__GetSummedGlobalStats;
  pppuStack_c0 = &ppuStack_80;
  if (lVar4 == 0) {
code_r0x015054a8:
    uVar3 = func_0x00f78af4();
    puStack_f8 = &Atlas_Stats_StatsManager__GetStatFromString;
    uStack_120 = unaff_x22;
    uStack_118 = unaff_x21;
    pppuStack_100 = &pppuStack_c0;
    auStack_110 = auVar6;
    if ((bRam0000000003eb4d0b & 1) == 0) {
      func_0x00f78a20(0x3d24d58);
      bRam0000000003eb4d0b = 1;
    }
    uStack_124 = 0;
    if (((*(ushort *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*Atlas.Stats.StatsManager$$TryGetStatFromString*/ func_0x0150552c(uVar3,&uStack_124);
    return (ulong)uStack_124;
  }
  if ((int)*(ulong *)(lVar4 + 0x18) < 1) {
    unaff_x21 = 0;
  }
  else {
    unaff_x21 = 0;
    unaff_x22 = 0;
    uVar5 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
    do {
      if (uVar5 <= unaff_x22) {
        uVar3 = func_0x00f78b24();
        func_0x00f78ac0(uVar3,0);
        auVar6 = auVar7;
        goto code_r0x015054a8;
      }
      iVar1 = Atlas_Stats_StatsManager__GetGlobalStat
                        (auVar7._0_8_,*(undefined4 *)(lVar4 + 0x20 + unaff_x22 * 4));
      unaff_x21 = (ulong)(uint)(iVar1 + (int)unaff_x21);
      unaff_x22 = unaff_x22 + 1;
      uVar5 = (ulong)*(uint *)(lVar4 + 0x18);
    } while ((long)unaff_x22 < (long)(int)*(uint *)(lVar4 + 0x18));
  }
  return unaff_x21;
}



// ============================================================
// RVA: 0x15052e8 | Atlas.Stats.StatsManager.GetSummedCommittedStats
// ============================================================

ulong Atlas_Stats_StatsManager__GetSummedCommittedStats(long param_1,long param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  undefined1 auVar7 [16];
  uint uStack_f4;
  ulong uStack_f0;
  ulong uStack_e8;
  undefined1 auStack_e0 [16];
  undefined1 ***pppuStack_d0;
  undefined *puStack_c8;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  if (param_2 != 0) {
    if ((int)*(ulong *)(param_2 + 0x18) < 1) {
      unaff_x21 = 0;
    }
    else {
      unaff_x21 = 0;
      unaff_x22 = 0;
      uVar6 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
      do {
        unaff_x19 = param_2;
        unaff_x20 = param_1;
        if (uVar6 <= unaff_x22) goto LAB_01505374;
        if (*(long *)(param_1 + 0x10) == 0) goto LAB_01505370;
        iVar2 = Atlas_Stats_StatsData__GetStat
                          (*(long *)(param_1 + 0x10),*(undefined4 *)(param_2 + 0x20 + unaff_x22 * 4)
                          );
        unaff_x21 = (ulong)(uint)(iVar2 + (int)unaff_x21);
        unaff_x22 = unaff_x22 + 1;
        uVar6 = (ulong)*(uint *)(param_2 + 0x18);
      } while ((long)unaff_x22 < (long)(int)*(uint *)(param_2 + 0x18));
    }
    return unaff_x21;
  }
LAB_01505370:
  func_0x00f78af4();
LAB_01505374:
  auVar1._8_8_ = unaff_x19;
  auVar1._0_8_ = unaff_x20;
  uVar3 = func_0x00f78b24();
  auVar7 = func_0x00f78ac0(uVar3,0);
  lVar5 = auVar7._8_8_;
  puStack_48 = &Atlas_Stats_StatsManager__GetSummedTransactionStats;
  puStack_50 = &stack0xfffffffffffffff0;
  if (lVar5 != 0) {
    if ((int)*(ulong *)(lVar5 + 0x18) < 1) {
      unaff_x21 = 0;
    }
    else {
      unaff_x21 = 0;
      unaff_x22 = 0;
      uVar6 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
      do {
        auVar1 = auVar7;
        if (uVar6 <= unaff_x22) goto code_r0x0150540c;
        lVar4 = *(long *)(auVar7._0_8_ + 0x18);
        if (lVar4 == 0) goto code_r0x01505408;
        iVar2 = Atlas_Stats_StatsData__GetStat(lVar4,*(undefined4 *)(lVar5 + 0x20 + unaff_x22 * 4));
        unaff_x21 = (ulong)(uint)(iVar2 + (int)unaff_x21);
        unaff_x22 = unaff_x22 + 1;
        uVar6 = (ulong)*(uint *)(lVar5 + 0x18);
      } while ((long)unaff_x22 < (long)(int)*(uint *)(lVar5 + 0x18));
    }
    return unaff_x21;
  }
code_r0x01505408:
  func_0x00f78af4();
code_r0x0150540c:
  uVar3 = func_0x00f78b24();
  auVar7 = func_0x00f78ac0(uVar3,0);
  lVar5 = auVar7._8_8_;
  puStack_88 = &Atlas_Stats_StatsManager__GetSummedGlobalStats;
  ppuStack_90 = &puStack_50;
  if (lVar5 == 0) {
code_r0x015054a8:
    uVar3 = func_0x00f78af4();
    puStack_c8 = &Atlas_Stats_StatsManager__GetStatFromString;
    uStack_f0 = unaff_x22;
    uStack_e8 = unaff_x21;
    pppuStack_d0 = &ppuStack_90;
    auStack_e0 = auVar1;
    if ((bRam0000000003eb4d0b & 1) == 0) {
      func_0x00f78a20(0x3d24d58);
      bRam0000000003eb4d0b = 1;
    }
    uStack_f4 = 0;
    if (((*(ushort *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*Atlas.Stats.StatsManager$$TryGetStatFromString*/ func_0x0150552c(uVar3,&uStack_f4);
    return (ulong)uStack_f4;
  }
  if ((int)*(ulong *)(lVar5 + 0x18) < 1) {
    unaff_x21 = 0;
  }
  else {
    unaff_x21 = 0;
    unaff_x22 = 0;
    uVar6 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
    do {
      if (uVar6 <= unaff_x22) {
        uVar3 = func_0x00f78b24();
        func_0x00f78ac0(uVar3,0);
        auVar1 = auVar7;
        goto code_r0x015054a8;
      }
      iVar2 = Atlas_Stats_StatsManager__GetGlobalStat
                        (auVar7._0_8_,*(undefined4 *)(lVar5 + 0x20 + unaff_x22 * 4));
      unaff_x21 = (ulong)(uint)(iVar2 + (int)unaff_x21);
      unaff_x22 = unaff_x22 + 1;
      uVar6 = (ulong)*(uint *)(lVar5 + 0x18);
    } while ((long)unaff_x22 < (long)(int)*(uint *)(lVar5 + 0x18));
  }
  return unaff_x21;
}



// ============================================================
// RVA: 0x1505380 | Atlas.Stats.StatsManager.GetSummedTransactionStats
// ============================================================

ulong Atlas_Stats_StatsManager__GetSummedTransactionStats(long param_1,long param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  undefined1 auVar6 [16];
  uint uStack_b4;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined1 auStack_a0 [16];
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  if (param_2 != 0) {
    if ((int)*(ulong *)(param_2 + 0x18) < 1) {
      unaff_x21 = 0;
    }
    else {
      unaff_x21 = 0;
      unaff_x22 = 0;
      uVar5 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
      do {
        unaff_x19 = param_2;
        unaff_x20 = param_1;
        if (uVar5 <= unaff_x22) goto LAB_0150540c;
        if (*(long *)(param_1 + 0x18) == 0) goto LAB_01505408;
        iVar2 = Atlas_Stats_StatsData__GetStat
                          (*(long *)(param_1 + 0x18),*(undefined4 *)(param_2 + 0x20 + unaff_x22 * 4)
                          );
        unaff_x21 = (ulong)(uint)(iVar2 + (int)unaff_x21);
        unaff_x22 = unaff_x22 + 1;
        uVar5 = (ulong)*(uint *)(param_2 + 0x18);
      } while ((long)unaff_x22 < (long)(int)*(uint *)(param_2 + 0x18));
    }
    return unaff_x21;
  }
LAB_01505408:
  func_0x00f78af4();
LAB_0150540c:
  auVar1._8_8_ = unaff_x19;
  auVar1._0_8_ = unaff_x20;
  uVar3 = func_0x00f78b24();
  auVar6 = func_0x00f78ac0(uVar3,0);
  lVar4 = auVar6._8_8_;
  puStack_48 = &Atlas_Stats_StatsManager__GetSummedGlobalStats;
  puStack_50 = &stack0xfffffffffffffff0;
  if (lVar4 == 0) {
code_r0x015054a8:
    uVar3 = func_0x00f78af4();
    puStack_88 = &Atlas_Stats_StatsManager__GetStatFromString;
    uStack_b0 = unaff_x22;
    uStack_a8 = unaff_x21;
    ppuStack_90 = &puStack_50;
    auStack_a0 = auVar1;
    if ((bRam0000000003eb4d0b & 1) == 0) {
      func_0x00f78a20(0x3d24d58);
      bRam0000000003eb4d0b = 1;
    }
    uStack_b4 = 0;
    if (((*(ushort *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*Atlas.Stats.StatsManager$$TryGetStatFromString*/ func_0x0150552c(uVar3,&uStack_b4);
    return (ulong)uStack_b4;
  }
  if ((int)*(ulong *)(lVar4 + 0x18) < 1) {
    unaff_x21 = 0;
  }
  else {
    unaff_x21 = 0;
    unaff_x22 = 0;
    uVar5 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
    do {
      if (uVar5 <= unaff_x22) {
        uVar3 = func_0x00f78b24();
        func_0x00f78ac0(uVar3,0);
        auVar1 = auVar6;
        goto code_r0x015054a8;
      }
      iVar2 = Atlas_Stats_StatsManager__GetGlobalStat
                        (auVar6._0_8_,*(undefined4 *)(lVar4 + 0x20 + unaff_x22 * 4));
      unaff_x21 = (ulong)(uint)(iVar2 + (int)unaff_x21);
      unaff_x22 = unaff_x22 + 1;
      uVar5 = (ulong)*(uint *)(lVar4 + 0x18);
    } while ((long)unaff_x22 < (long)(int)*(uint *)(lVar4 + 0x18));
  }
  return unaff_x21;
}



// ============================================================
// RVA: 0x1505418 | Atlas.Stats.StatsManager.GetSummedGlobalStats
// ============================================================

ulong Atlas_Stats_StatsManager__GetSummedGlobalStats(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x19;
  undefined8 unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  uint uStack_74;
  ulong uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  lStack_58 = unaff_x19;
  uStack_60 = unaff_x20;
  if (param_2 == 0) {
LAB_015054a8:
    uVar2 = func_0x00f78af4();
    puStack_48 = &Atlas_Stats_StatsManager__GetStatFromString;
    uStack_70 = unaff_x22;
    uStack_68 = unaff_x21;
    puStack_50 = &stack0xfffffffffffffff0;
    if ((bRam0000000003eb4d0b & 1) == 0) {
      func_0x00f78a20(0x3d24d58);
      bRam0000000003eb4d0b = 1;
    }
    uStack_74 = 0;
    if (((*(ushort *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*Atlas.Stats.StatsManager$$TryGetStatFromString*/ func_0x0150552c(uVar2,&uStack_74);
    return (ulong)uStack_74;
  }
  if ((int)*(ulong *)(param_2 + 0x18) < 1) {
    unaff_x21 = 0;
  }
  else {
    unaff_x21 = 0;
    unaff_x22 = 0;
    uVar3 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
    do {
      if (uVar3 <= unaff_x22) {
        uVar2 = func_0x00f78b24();
        func_0x00f78ac0(uVar2,0);
        lStack_58 = param_2;
        uStack_60 = param_1;
        goto LAB_015054a8;
      }
      iVar1 = Atlas_Stats_StatsManager__GetGlobalStat
                        (param_1,*(undefined4 *)(param_2 + 0x20 + unaff_x22 * 4));
      unaff_x21 = (ulong)(uint)(iVar1 + (int)unaff_x21);
      unaff_x22 = unaff_x22 + 1;
      uVar3 = (ulong)*(uint *)(param_2 + 0x18);
    } while ((long)unaff_x22 < (long)(int)*(uint *)(param_2 + 0x18));
  }
  return unaff_x21;
}



// ============================================================
// RVA: 0x15054ac | Atlas.Stats.StatsManager.GetStatFromString
// ============================================================

undefined4 Atlas_Stats_StatsManager__GetStatFromString(undefined8 param_1)

{
  undefined4 uStack_34;
  
  if ((bRam0000000003eb4d0b & 1) == 0) {
    func_0x00f78a20(0x3d24d58);
    bRam0000000003eb4d0b = 1;
  }
  uStack_34 = 0;
  if (((*(ushort *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*Atlas.Stats.StatsManager$$TryGetStatFromString*/ func_0x0150552c(param_1,&uStack_34);
  return uStack_34;
}



// ============================================================
// RVA: 0x150552c | Atlas.Stats.StatsManager.TryGetStatFromString
// ============================================================

ulong Atlas_Stats_StatsManager__TryGetStatFromString(undefined8 param_1,uint *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  
  if ((bRam0000000003eb4d0c & 1) == 0) {
    func_0x00f78a20(0x3d24d58);
    bRam0000000003eb4d0c = 1;
  }
  uVar7 = 0;
  while( true ) {
    if (((*(ushort *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar5 = *(long **)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0xb8);
    lVar1 = plVar5[1];
    if ((int)lVar1 <= (int)uVar7) break;
    if (((*(ushort *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0xe0) == 0)) {
      func_0x00f78ad0();
      plVar5 = *(long **)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0xb8);
    }
    lVar6 = *plVar5;
    if (lVar6 == 0) {
LAB_01505624:
      func_0x00f78af4();
LAB_01505628:
      uVar3 = func_0x00f78b24();
      uVar2 = func_0x00f78ac0(uVar3,0);
      return uVar2;
    }
    if (*(uint *)(lVar6 + 0x18) <= uVar7) goto LAB_01505628;
    lVar6 = *(long *)(lVar6 + (long)(int)uVar7 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_01505624;
    uVar2 = /*System.String$$Equals*/ func_0x029caa48(lVar6,param_1,4,0);
    uVar4 = uVar7;
    if ((uVar2 & 1) != 0) goto code_r0x01505604;
    uVar7 = uVar7 + 1;
  }
  uVar4 = 0;
code_r0x01505604:
  *param_2 = uVar4;
  return (ulong)((int)uVar7 < (int)lVar1);
}



// ============================================================
// RVA: 0x1505634 | Atlas.Stats.StatsManager..ctor
// ============================================================

void Atlas_Stats_StatsManager___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x150563c | Atlas.Stats.StatsManager..cctor
// ============================================================

ulong Atlas_Stats_StatsManager___cctor(void)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if ((bRam0000000003eb4d0d & 1) == 0) {
    func_0x00f78a20(0x3d215e0);
    func_0x00f78a20(0x3d19f00);
    func_0x00f78a20(0x3d24d58);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb4d0d = 1;
  }
  uVar2 = /*Atlas.Stats.Stat_var*/ uRam0000000003d19f00;
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar2,0);
  if (((*(ushort *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = /*System.Enum$$GetNames*/ func_0x02ac6658(uVar2,0);
  **(ulong **)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0xb8) = uVar3;
  lVar5 = **(long **)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0xb8);
  if (lVar5 != 0) {
    *(int *)(*(long **)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0xb8) + 1) = (int)*(undefined8 *)(lVar5 + 0x18);
    return uVar3;
  }
  puVar4 = (undefined8 *)func_0x00f78af4();
  uVar1 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*puVar4,0);
  return (ulong)(uVar1 ^ 1);
}



