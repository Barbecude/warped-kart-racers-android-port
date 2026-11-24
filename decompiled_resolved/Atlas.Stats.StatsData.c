// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Stats.StatsData

// ============================================================
// RVA: 0x15047b8 | Atlas.Stats.StatsData.get_StatValues
// ============================================================

undefined8 Atlas_Stats_StatsData__get_StatValues(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



// ============================================================
// RVA: 0x15047c0 | Atlas.Stats.StatsData.Init
// ============================================================

void Atlas_Stats_StatsData__Init(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb4d03 & 1) == 0) {
    func_0x00f78a20(0x3d1f100);
    bRam0000000003eb4d03 = 1;
  }
  uVar1 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,param_2);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  return;
}



// ============================================================
// RVA: 0x1504820 | Atlas.Stats.StatsData.Init
// ============================================================

void Atlas_Stats_StatsData__Init(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x3eb4000;
  if ((bRam0000000003eb4d04 & 1) == 0) {
    func_0x00f78a20(0x3d1f100);
    bRam0000000003eb4d04 = 1;
  }
  if ((param_2 != 0) && (*(long *)(param_2 + 0x10) != 0)) {
    param_2 = /*System.Array$$Clone*/ func_0x0292031c(*(long *)(param_2 + 0x10),0);
    uVar2 = /*int[]_TypeInfo*/ uRam0000000003d1f100;
    lVar1 = 0;
    if (param_2 != 0) {
      lVar1 = func_0x00f78adc(param_2,/*int[]_TypeInfo*/ uRam0000000003d1f100);
      if (lVar1 == 0) goto LAB_015048a4;
    }
    *(long *)(param_1 + 0x10) = lVar1;
    return;
  }
  func_0x00f78af4();
LAB_015048a4:
  lVar1 = func_0x00f78e5c(param_2,uVar2);
  *(undefined8 *)(lVar1 + 0x10) = 0;
  return;
}



// ============================================================
// RVA: 0x15048b0 | Atlas.Stats.StatsData.DeInit
// ============================================================

void Atlas_Stats_StatsData__DeInit(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// ============================================================
// RVA: 0x15048b8 | Atlas.Stats.StatsData.Reset
// ============================================================

/* WARNING: Possible PIC construction at 0x029202dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01504948: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01504be4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01504cc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0292b50c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0292b43c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0292c6bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0292c6e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0292c6c0) */
/* WARNING: Removing unreachable block (ram,0x0292c6c8) */
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
/* WARNING: Removing unreachable block (ram,0x0292c6ec) */
/* WARNING: Removing unreachable block (ram,0x0292c6cc) */
/* WARNING: Removing unreachable block (ram,0x0292c6f4) */

long * Atlas_Stats_StatsData__Reset
                 (long param_1,undefined8 param_2,int param_3,undefined8 param_4,ulong param_5)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  code *pcVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long **pplVar8;
  int iVar9;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  int iVar10;
  undefined *puVar14;
  long *plVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  ulong uVar21;
  long lVar22;
  int *piVar23;
  ulong uVar24;
  uint uVar25;
  int *piVar26;
  long lVar27;
  ulong uVar28;
  undefined8 unaff_x19;
  undefined8 uVar29;
  long *unaff_x20;
  ulong unaff_x21;
  long lVar30;
  ulong unaff_x22;
  ulong unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 **ppuVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [12];
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  long *plStack_50;
  undefined *puStack_48;
  
  auVar33._8_8_ = unaff_x19;
  auVar33._0_8_ = unaff_x20;
  ppuVar31 = (undefined1 **)&stack0xfffffffffffffff0;
  plVar13 = *(long **)(param_1 + 0x10);
  if (plVar13 != (long *)0x0) {
    iVar10 = (int)plVar13[3];
    if (plVar13 == (long *)0x0) {
      func_0x00f78a24(0x3d1fcf0,0,iVar10,0);
      puVar14 = (undefined *)func_0x00f78aec();
      uVar11 = func_0x00f78a24(0x3d77d18);
      /*System.ArgumentNullException$$.ctor*/ func_0x02920400(puVar14,uVar11);
    }
    else {
      if (iVar10 < 0) {
        func_0x00f78a24(0x3d22738,0,iVar10,0);
        puVar14 = (undefined *)func_0x00f78aec();
        uVar11 = 0x3d7a288;
      }
      else {
        unaff_x21 = 0;
        iVar9 = func_0x00f807d0(plVar13,0);
        unaff_x20 = plVar13;
        if (iVar9 < 1) {
          uVar1 = -iVar9;
          unaff_x21 = (ulong)uVar1;
          iVar9 = /*System.Array$$get_Length*/ func_0x0292ae44(plVar13);
          if ((int)uVar1 <= iVar9 - iVar10) {
            uVar11 = func_0x00f76cf0(*plVar13);
            uVar12 = func_0x00faf4d8(plVar13,uVar11,(long)(int)uVar1);
            plVar13 = (long *)_bzero(uVar12,(long)((int)uVar11 * iVar10));
            return plVar13;
          }
          func_0x00f78a24(0x3d22738);
          puVar14 = (undefined *)func_0x00f78aec();
          uVar11 = 0x3d79a88;
        }
        else {
          func_0x00f78a24(0x3d22738);
          puVar14 = (undefined *)func_0x00f78aec();
          uVar11 = 0x3d79a90;
        }
      }
      uVar11 = func_0x00f78a24(uVar11);
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(puVar14,uVar11,0);
    }
    uVar11 = func_0x00f78a24(0x3d514d8);
    plVar15 = (long *)func_0x00f78ac0(puVar14,uVar11);
    pplVar8 = &plStack_50;
    plStack_50 = unaff_x20;
    puStack_48 = puVar14;
    plVar13 = (long *)&stack0xffffffffffffffc0;
    auVar32._8_8_ = 0x3eb8000;
    auVar32._0_8_ = plVar15;
    auVar4._8_8_ = 0x3eb8000;
    auVar4._0_8_ = plVar15;
    if ((bRam0000000003eb8e74 & 1) == 0) {
      func_0x00f78a20(0x3d1eda0);
      bRam0000000003eb8e74 = 1;
    }
    plVar16 = (long *)plVar15[4];
    uVar28 = unaff_x21;
    if (plVar16 == (long *)0x0) {
      (**(code **)(*plVar15 + 0x2b8))(plVar15,*(undefined8 *)(*plVar15 + 0x2c0));
      plVar16 = (long *)plVar15[4];
      if (plVar16 == (long *)0x0) {
        puVar14 = &System_Array__Clone;
        plVar16 = (long *)func_0x00f78af4();
        goto DAT_00f7ffc4;
      }
    }
    puVar14 = &UNK_029202e0;
    pplVar8 = &plStack_50;
    auVar32 = auVar4;
DAT_00f7ffc4:
    *(ulong *)((long)pplVar8 + -0x30) = unaff_x22;
    *(ulong *)((long)pplVar8 + -0x28) = uVar28;
    *(long *)((long)pplVar8 + -0x20) = auVar32._8_8_;
    *(long *)((long)pplVar8 + -0x18) = auVar32._0_8_;
    *(long **)((long)pplVar8 + -0x10) = plVar13;
    *(undefined **)((long)pplVar8 + -8) = puVar14;
    lVar30 = *plVar16;
    if (*(char *)(lVar30 + 0x12e) == '\0') {
      iVar10 = *(int *)(lVar30 + 0xf8);
      plVar13 = (long *)func_0x00f6e3b8((long)iVar10,0);
      *plVar13 = lVar30;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(0x3ff71e8,0x10);
        if (bVar3) {
          cVar2 = ExclusiveMonitorsStatus();
          lRam0000000003ff71e8 = lRam0000000003ff71e8 + 1;
        }
      } while (cVar2 != '\0');
      _memcpy(plVar13 + 2,plVar16 + 2,(long)iVar10 + -0x10);
      if ((*(byte *)(*plVar16 + 0x133) >> 1 & 1) != 0) {
        func_0x00f7a274(plVar13);
      }
      if (cRam0000000003ff7438 < '\0') {
        func_0x00fc51b8(plVar13,*plVar16);
      }
      return plVar13;
    }
    *(undefined8 *)((long)pplVar8 + -0x30) = *(undefined8 *)((long)pplVar8 + -0x30);
    *(undefined8 *)((long)pplVar8 + -0x28) = *(undefined8 *)((long)pplVar8 + -0x28);
    *(undefined8 *)((long)pplVar8 + -0x20) = *(undefined8 *)((long)pplVar8 + -0x20);
    *(undefined8 *)((long)pplVar8 + -0x18) = *(undefined8 *)((long)pplVar8 + -0x18);
    *(undefined8 *)((long)pplVar8 + -0x10) = *(undefined8 *)((long)pplVar8 + -0x10);
    *(undefined8 *)((long)pplVar8 + -8) = *(undefined8 *)((long)pplVar8 + -8);
    lVar30 = *plVar16;
    uVar28 = (ulong)*(uint *)(lVar30 + 0x100);
    if (plVar16[2] == 0) {
      uVar1 = *(uint *)(plVar16 + 3);
      *(ulong *)((long)pplVar8 + -0x48) = (ulong)uVar1;
      plVar13 = (long *)func_0x00faf0d0(lVar30,(undefined1 *)((long)pplVar8 + -0x48),0);
      _memcpy(plVar13 + 4,plVar16 + 4,uVar1 * uVar28);
    }
    else {
      func_0x00901764((undefined1 *)((long)pplVar8 + -0x48),*(undefined1 *)(lVar30 + 0x12e));
      func_0x00901764((undefined1 *)((long)pplVar8 + -0x60),*(undefined1 *)(lVar30 + 0x12e));
      if (*(char *)(lVar30 + 0x12e) != '\0') {
        lVar22 = 0;
        uVar24 = 0;
        do {
          *(undefined8 *)(*(long *)((long)pplVar8 + -0x48) + uVar24 * 8) =
               *(undefined8 *)(plVar16[2] + lVar22);
          uVar28 = *(long *)(plVar16[2] + lVar22) * uVar28;
          *(long *)(*(long *)((long)pplVar8 + -0x60) + uVar24 * 8) =
               (long)(int)((long *)(plVar16[2] + lVar22))[1];
          uVar24 = uVar24 + 1;
          lVar22 = lVar22 + 0x10;
        } while (uVar24 < *(byte *)(lVar30 + 0x12e));
      }
      plVar13 = (long *)func_0x00faf0d0(lVar30,*(undefined8 *)((long)pplVar8 + -0x48),
                                        *(undefined8 *)((long)pplVar8 + -0x60));
      _memcpy(plVar13 + 4,plVar16 + 4,uVar28);
      if (*(long *)((long)pplVar8 + -0x60) != 0) {
        *(long *)((long)pplVar8 + -0x58) = *(long *)((long)pplVar8 + -0x60);
        func_0x00523aec();
      }
      if (*(long *)((long)pplVar8 + -0x48) != 0) {
        *(long *)((long)pplVar8 + -0x40) = *(long *)((long)pplVar8 + -0x48);
        func_0x00523aec();
      }
    }
    return plVar13;
  }
  auVar32 = func_0x00f78af4();
  lVar30 = auVar32._8_8_;
  pplVar8 = (long **)&stack0xffffffffffffffc0;
  plVar13 = (long *)&stack0xffffffffffffffe0;
  uVar28 = 0x3eb4000;
  if ((bRam0000000003eb4d05 & 1) == 0) {
    func_0x00f78a20(0x3d1f100);
    bRam0000000003eb4d05 = 1;
  }
  plVar15 = (long *)Atlas_Stats_StatsData__Reset(auVar32._0_8_);
  if (lVar30 == 0) {
    return plVar15;
  }
  plVar16 = *(long **)(lVar30 + 0x10);
  if ((plVar16 == (long *)0x0) || (uVar24 = *(ulong *)(auVar32._0_8_ + 0x10), uVar24 == 0)) {
    func_0x00f78af4();
    auVar33 = func_0x00f78e5c(lVar30,0x3eb4000);
    puStack_48 = &Atlas_Stats_StatsData__Add;
    plStack_50 = plVar13;
    if ((auVar33._8_8_ != 0) &&
       ((lVar30 = *(long *)(auVar33._8_8_ + 0x10), lVar30 != 0 &&
        (lVar22 = auVar33._0_8_[2], lVar22 != 0)))) {
      uVar1 = *(uint *)(lVar30 + 0x18);
      uVar28 = (ulong)uVar1;
      uVar25 = (uint)*(ulong *)(lVar22 + 0x18);
      if ((int)uVar25 <= (int)uVar1) {
        uVar1 = uVar25;
      }
      uVar24 = (ulong)uVar1;
      if (0 < (int)uVar1) {
        uVar21 = *(ulong *)(lVar22 + 0x18) & 0xffffffff;
        piVar23 = (int *)(lVar22 + 0x20);
        piVar26 = (int *)(lVar30 + 0x20);
        do {
          if ((uVar21 == 0) || (uVar28 == 0)) {
            uVar11 = func_0x00f78b24();
            func_0x00f78ac0(uVar11,0);
            goto code_r0x01504a20;
          }
          *piVar23 = *piVar26 + *piVar23;
          uVar28 = uVar28 - 1;
          uVar21 = uVar21 - 1;
          uVar24 = uVar24 - 1;
          piVar23 = piVar23 + 1;
          piVar26 = piVar26 + 1;
        } while (uVar24 != 0);
      }
      return auVar33._0_8_;
    }
code_r0x01504a20:
    auVar35 = func_0x00f78af4();
    puStack_58 = &Atlas_Stats_StatsData__IncrementStat;
    lVar30 = auVar35._0_8_[2];
    if (lVar30 == 0) {
      puStack_60 = (undefined1 *)&plStack_50;
      func_0x00f78af4();
    }
    else {
      puStack_60 = (undefined1 *)&plStack_50;
      if (auVar35._8_4_ < *(uint *)(lVar30 + 0x18)) {
        piVar23 = (int *)(lVar30 + (long)(int)auVar35._8_4_ * 4 + 0x20);
        iVar10 = *piVar23;
        if (iVar10 < 0x3ffffffe) {
          *piVar23 = iVar10 + 1;
        }
        return auVar35._0_8_;
      }
    }
    uVar11 = func_0x00f78b24();
    auVar35 = func_0x00f78ac0(uVar11,0);
    puStack_68 = &Atlas_Stats_StatsData__DecrementStat;
    lVar30 = auVar35._0_8_[2];
    if (lVar30 == 0) {
      puStack_70 = (undefined1 *)&puStack_60;
      func_0x00f78af4();
    }
    else {
      puStack_70 = (undefined1 *)&puStack_60;
      if (auVar35._8_4_ < *(uint *)(lVar30 + 0x18)) {
        piVar23 = (int *)(lVar30 + (long)(int)auVar35._8_4_ * 4 + 0x20);
        iVar10 = *piVar23;
        if (-0x3fffffff < iVar10) {
          *piVar23 = iVar10 + -1;
        }
        return auVar35._0_8_;
      }
    }
    uVar11 = func_0x00f78b24();
    auVar35 = func_0x00f78ac0(uVar11,0);
    puStack_78 = &Atlas_Stats_StatsData__SetStat;
    lVar30 = auVar35._0_8_[2];
    if (lVar30 == 0) {
      puStack_80 = (undefined1 *)&puStack_70;
      func_0x00f78af4();
    }
    else {
      puStack_80 = (undefined1 *)&puStack_70;
      if (auVar35._8_4_ < *(uint *)(lVar30 + 0x18)) {
        if (param_3 < -0x3ffffffe) {
          param_3 = -0x3fffffff;
        }
        if (0x3ffffffd < param_3) {
          param_3 = 0x3ffffffe;
        }
        *(int *)(lVar30 + (long)(int)auVar35._8_4_ * 4 + 0x20) = param_3;
        return auVar35._0_8_;
      }
    }
    uVar11 = func_0x00f78b24();
    auVar35 = func_0x00f78ac0(uVar11,0);
    puStack_88 = &Atlas_Stats_StatsData__GetStat;
    lVar30 = *(long *)(auVar35._0_8_ + 0x10);
    if (lVar30 == 0) {
      puStack_90 = (undefined1 *)&puStack_80;
      func_0x00f78af4();
    }
    else {
      puStack_90 = (undefined1 *)&puStack_80;
      if (auVar35._8_4_ < *(uint *)(lVar30 + 0x18)) {
        return (long *)(ulong)*(uint *)(lVar30 + (long)(int)auVar35._8_4_ * 4 + 0x20);
      }
    }
    uVar11 = func_0x00f78b24();
    auVar33 = func_0x00f78ac0(uVar11,0);
    lVar30 = auVar33._8_8_;
    plVar15 = auVar33._0_8_;
    puVar6 = &stack0xffffffffffffff30;
    puStack_98 = &Atlas_Stats_StatsData__UpdateToLargestValues;
    ppuVar31 = &puStack_a0;
    plVar13 = plVar15;
    puStack_a0 = (undefined1 *)&puStack_90;
    if ((bRam0000000003eb4d06 & 1) == 0) {
      puStack_a0 = (undefined1 *)&puStack_90;
      plVar13 = (long *)func_0x00f78a20(0x3d1f100);
      bRam0000000003eb4d06 = 1;
    }
    lVar22 = plVar15[2];
    if (((lVar22 == 0) || (lVar30 == 0)) || (*(long *)(lVar30 + 0x10) == 0)) {
code_r0x01504c70:
      func_0x00f78af4();
      if ((bRam0000000003eb4d07 & 1) == 0) {
        func_0x00f78a20(0x3d24d50);
        bRam0000000003eb4d07 = 1;
      }
      plVar13 = (long *)func_0x00f78aec(/*Atlas.Stats.StatsData_TypeInfo*/ uRam0000000003d24d50);
      return plVar13;
    }
    uVar21 = (ulong)*(uint *)(lVar22 + 0x18);
    unaff_x22 = *(ulong *)(*(long *)(lVar30 + 0x10) + 0x18);
    if ((int)unaff_x22 <= (int)*(uint *)(lVar22 + 0x18)) {
      if (0 < (int)unaff_x22) {
        if (lVar22 == 0) goto code_r0x01504c70;
        uVar28 = 0;
        uVar1 = *(uint *)(lVar22 + 0x18);
        do {
          if (uVar1 == uVar28) {
code_r0x01504c64:
            uVar11 = func_0x00f78b24();
            func_0x00f78ac0(uVar11,0);
            goto code_r0x01504c70;
          }
          lVar27 = *(long *)(lVar30 + 0x10);
          if (lVar27 == 0) goto code_r0x01504c70;
          if ((*(uint *)(lVar27 + 0x18) <= uVar28) || (uVar1 <= uVar28)) goto code_r0x01504c64;
          iVar10 = *(int *)(lVar22 + 0x20 + uVar28 * 4);
          iVar9 = *(int *)(lVar27 + uVar28 * 4 + 0x20);
          if (iVar10 <= iVar9) {
            iVar10 = iVar9;
          }
          *(int *)(lVar22 + 0x20 + uVar28 * 4) = iVar10;
          uVar28 = uVar28 + 1;
        } while ((unaff_x22 & 0xffffffff) != uVar28);
      }
      return plVar13;
    }
    uVar24 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,unaff_x22);
    plVar16 = (long *)plVar15[2];
    puVar14 = &UNK_01504be8;
    unaff_x21 = uVar24;
    unaff_x23 = uVar21;
  }
  else {
    uVar21 = (ulong)*(uint *)(plVar16 + 3);
    if (*(int *)(uVar24 + 0x18) < (int)*(uint *)(plVar16 + 3)) {
      puVar14 = &UNK_0150494c;
      goto DAT_00f7ffc4;
    }
    puVar14 = &Atlas_Stats_StatsData__ResetAndSet;
    puVar6 = &stack0xfffffffffffffff0;
  }
  uVar11 = auVar33._0_8_;
  lVar30 = 0;
  *(ulong *)(puVar6 + -0x30) = unaff_x22;
  *(ulong *)(puVar6 + -0x28) = unaff_x21;
  *(undefined1 (*) [16])(puVar6 + -0x20) = auVar33;
  *(undefined1 ***)(puVar6 + -0x10) = ppuVar31;
  *(undefined **)(puVar6 + -8) = puVar14;
  if (plVar16 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar17 = func_0x00f78aec();
    uVar12 = 0x3d7b900;
    uVar24 = uVar21;
    uVar21 = param_5;
code_r0x0292c538:
    uVar12 = func_0x00f78a24(uVar12);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar17,uVar12);
    uVar12 = func_0x00f78a24(0x3d514e0);
    auVar34 = func_0x00f78ac0(uVar17,uVar12);
    *(undefined8 *)(puVar6 + -0x50) = uVar11;
    *(undefined8 *)(puVar6 + -0x48) = uVar17;
    *(undefined1 **)(puVar6 + -0x40) = puVar6 + -0x10;
    *(undefined **)(puVar6 + -0x38) = &System_Array__Copy;
    if (auVar34._8_8_ == (long)auVar34._8_4_) {
      if (lVar30 == (int)lVar30) {
        if (uVar21 == (long)(int)uVar21) {
          uVar11 = *(undefined8 *)(puVar6 + -0x40);
          uVar17 = *(undefined8 *)(puVar6 + -0x38);
          puVar7 = puVar6 + -0x30;
          uVar12 = *(undefined8 *)(puVar6 + -0x50);
          uVar29 = *(undefined8 *)(puVar6 + -0x48);
          goto System_Array__Copy;
        }
        func_0x00f78a24(0x3d1fcf8);
        uVar12 = func_0x00f78aec();
        uVar11 = 0x3d7a280;
      }
      else {
        func_0x00f78a24(0x3d1fcf8);
        uVar12 = func_0x00f78aec();
        uVar11 = 0x3d78af0;
      }
    }
    else {
      func_0x00f78a24(0x3d1fcf8);
      uVar12 = func_0x00f78aec();
      uVar11 = 0x3d7b910;
    }
    uVar11 = func_0x00f78a24(uVar11);
    lVar30 = func_0x00f78a24(0x3d69268);
    /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar12,uVar11);
    uVar17 = func_0x00f78a24(0x3d514f8);
    auVar33 = func_0x00f78ac0(uVar12,uVar17);
    plVar13 = auVar33._8_8_;
    uVar17 = auVar33._0_8_;
    if (lVar30 != (int)lVar30) {
      *(undefined8 *)(puVar6 + -0x70) = uVar11;
      *(undefined8 *)(puVar6 + -0x68) = uVar12;
      *(undefined1 **)(puVar6 + -0x60) = puVar6 + -0x40;
      *(undefined **)(puVar6 + -0x58) = &System_Array__CopyTo;
      func_0x00f78a24(0x3d1fcf8);
      uVar11 = func_0x00f78aec();
      uVar12 = func_0x00f78a24(0x3d79a60);
      uVar17 = func_0x00f78a24(0x3d69268);
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar11,uVar12,uVar17);
      uVar17 = func_0x00f78a24(0x3d51508);
      plVar13 = (long *)func_0x00f78ac0(uVar11,uVar17);
      *(ulong *)(puVar6 + -0xa0) = unaff_x22;
      *(ulong *)(puVar6 + -0x98) = unaff_x21;
      *(undefined8 *)(puVar6 + -0x90) = uVar12;
      *(undefined8 *)(puVar6 + -0x88) = uVar11;
      *(undefined1 **)(puVar6 + -0x80) = puVar6 + -0x60;
      *(undefined **)(puVar6 + -0x78) = &System_Array__get_LongLength;
      func_0x00f8078c(plVar13,0);
      goto code_r0x00f80814;
    }
    *(ulong *)(puVar6 + -0x80) = unaff_x22;
    *(ulong *)(puVar6 + -0x78) = unaff_x21;
    *(undefined8 *)(puVar6 + -0x70) = uVar11;
    *(undefined8 *)(puVar6 + -0x68) = uVar12;
    *(undefined1 **)(puVar6 + -0x60) = puVar6 + -0x40;
    *(undefined **)(puVar6 + -0x58) = &System_Array__CopyTo;
    if (plVar13 != (long *)0x0) goto code_r0x00f80814;
    uVar11 = func_0x00f807d0(uVar17,0);
    auVar34._8_8_ = uVar11;
    auVar34._0_8_ = uVar17;
    uVar21 = /*System.Array$$get_Length*/ func_0x0292ae44(uVar17);
    uVar11 = *(undefined8 *)(puVar6 + -0x60);
    uVar17 = *(undefined8 *)(puVar6 + -0x58);
    uVar12 = *(undefined8 *)(puVar6 + -0x70);
    uVar29 = *(undefined8 *)(puVar6 + -0x68);
    puVar7 = puVar6 + -0x50;
    unaff_x22 = *(ulong *)(puVar6 + -0x80);
    unaff_x21 = *(ulong *)(puVar6 + -0x78);
    uVar24 = 0;
  }
  else {
    if (uVar24 == 0) {
      func_0x00f78a24(0x3d1fcf0);
      uVar17 = func_0x00f78aec();
      uVar12 = 0x3d78ae8;
      uVar11 = 0;
      uVar24 = uVar21;
      uVar21 = param_5;
      goto code_r0x0292c538;
    }
    uVar11 = func_0x00f807d0(plVar16,0);
    auVar34._8_8_ = uVar11;
    auVar34._0_8_ = plVar16;
    func_0x00f807d0(uVar24,0);
    uVar11 = *(undefined8 *)(puVar6 + -0x10);
    uVar17 = *(undefined8 *)(puVar6 + -8);
    uVar12 = *(undefined8 *)(puVar6 + -0x20);
    uVar29 = *(undefined8 *)(puVar6 + -0x18);
    unaff_x22 = *(ulong *)(puVar6 + -0x30);
    unaff_x21 = *(ulong *)(puVar6 + -0x28);
    puVar7 = puVar6;
  }
System_Array__Copy:
  uVar20 = auVar34._8_8_;
  plVar13 = auVar34._0_8_;
  *(undefined8 *)(puVar7 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar7 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar7 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar7 + -0x40) = unaff_x24;
  *(ulong *)(puVar7 + -0x38) = unaff_x23;
  *(ulong *)(puVar7 + -0x30) = unaff_x22;
  *(ulong *)(puVar7 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar7 + -0x20) = uVar12;
  *(undefined8 *)(puVar7 + -0x18) = uVar29;
  *(undefined8 *)(puVar7 + -0x10) = uVar11;
  *(undefined8 *)(puVar7 + -8) = uVar17;
  if (plVar13 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0,uVar20);
    puVar18 = (undefined8 *)func_0x00f78aec();
    uVar11 = 0x3d7b900;
  }
  else {
    if (uVar24 != 0) {
      if (-1 < (int)uVar21) {
code_r0x00f80814:
        return (long *)(ulong)*(byte *)(*plVar13 + 0x12e);
      }
      uVar11 = func_0x00f78a24(0x3d75f70,uVar20);
      uVar11 = /*Locale$$GetText*/ func_0x02af42b4(uVar11,0);
      func_0x00f78a24(0x3d1fcf8);
      uVar12 = func_0x00f78aec();
      uVar17 = func_0x00f78a24(0x3d7a280);
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar12,uVar17,uVar11);
      uVar11 = func_0x00f78a24(0x3d514f0);
      func_0x00f78ac0(uVar12,uVar11);
      func_0x00f78af4();
      func_0x00f78a24(0x3d1fcf8);
      puVar18 = (undefined8 *)func_0x00f78aec();
      uVar12 = func_0x00f78a24(0x3d78af0);
      uVar11 = func_0x00f78a24(0x3d6de20);
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(puVar18,uVar12,uVar11);
      goto code_r0x0292b958;
    }
    func_0x00f78a24(0x3d1fcf0,uVar20);
    puVar18 = (undefined8 *)func_0x00f78aec();
    uVar11 = 0x3d78ae8;
  }
  uVar11 = func_0x00f78a24(uVar11);
  /*System.ArgumentNullException$$.ctor*/ func_0x02920400(puVar18,uVar11);
code_r0x0292b958:
  while( true ) {
    uVar11 = func_0x00f78a24(0x3d514f0);
    func_0x00f78ac0(puVar18,uVar11);
    uVar11 = func_0x00f78a24(0x3d23988);
    uVar28 = func_0x00f78ed4(uVar11,*(undefined8 *)*puVar18);
    if ((uVar28 & 1) == 0) break;
    puVar18 = (undefined8 *)*puVar18;
    ___cxa_end_catch();
    iVar10 = /*System.Array$$CanAssignArrayElement*/ func_0x0292e90c(*(undefined8 *)(puVar7 + -0x68),uVar12);
    if (iVar10 == 0) {
      puVar18 = (undefined8 *)/*System.Array$$CreateArrayTypeMismatchException*/ func_0x0292e8b8();
    }
  }
  puVar19 = (undefined8 *)___cxa_allocate_exception(8);
  *puVar19 = *puVar18;
  ___cxa_throw(puVar19,&DAT_03a5ed38,0);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x292b9cc);
  (*pcVar5)();
}



// ============================================================
// RVA: 0x15048e0 | Atlas.Stats.StatsData.ResetAndSet
// ============================================================

/* WARNING: Possible PIC construction at 0x01504be4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01504cc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0292b50c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0292b43c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0292c6bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0292c6e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0292c6c0) */
/* WARNING: Removing unreachable block (ram,0x0292c6c8) */
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
/* WARNING: Removing unreachable block (ram,0x0292c6ec) */
/* WARNING: Removing unreachable block (ram,0x0292c6cc) */
/* WARNING: Removing unreachable block (ram,0x0292c6f4) */

ulong Atlas_Stats_StatsData__ResetAndSet
                (long param_1,long param_2,int param_3,undefined8 param_4,ulong param_5)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  undefined1 *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  ulong uVar14;
  int *piVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  int *piVar19;
  long lVar20;
  undefined8 unaff_x19;
  undefined8 uVar21;
  undefined8 unaff_x20;
  ulong unaff_x21;
  undefined8 uVar22;
  ulong unaff_x22;
  ulong unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 **unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [12];
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  auVar23._8_8_ = unaff_x19;
  auVar23._0_8_ = unaff_x20;
  uVar22 = 0x3eb4000;
  if ((bRam0000000003eb4d05 & 1) == 0) {
    func_0x00f78a20(0x3d1f100);
    bRam0000000003eb4d05 = 1;
  }
  uVar6 = Atlas_Stats_StatsData__Reset(param_1);
  if (param_2 == 0) {
    return uVar6;
  }
  lVar7 = *(long *)(param_2 + 0x10);
  if ((lVar7 == 0) || (uVar6 = *(ulong *)(param_1 + 0x10), uVar6 == 0)) {
    func_0x00f78af4();
LAB_01504998:
    auVar23 = func_0x00f78e5c(param_2,uVar22);
    puStack_38 = &Atlas_Stats_StatsData__Add;
    puStack_40 = &stack0xfffffffffffffff0;
    if (((auVar23._8_8_ != 0) && (lVar7 = *(long *)(auVar23._8_8_ + 0x10), lVar7 != 0)) &&
       (lVar18 = *(long *)(auVar23._0_8_ + 0x10), lVar18 != 0)) {
      uVar1 = *(uint *)(lVar7 + 0x18);
      uVar6 = (ulong)uVar1;
      uVar16 = (uint)*(ulong *)(lVar18 + 0x18);
      if ((int)uVar16 <= (int)uVar1) {
        uVar1 = uVar16;
      }
      uVar14 = (ulong)uVar1;
      if (0 < (int)uVar1) {
        uVar17 = *(ulong *)(lVar18 + 0x18) & 0xffffffff;
        piVar15 = (int *)(lVar18 + 0x20);
        piVar19 = (int *)(lVar7 + 0x20);
        do {
          if ((uVar17 == 0) || (uVar6 == 0)) {
            uVar22 = func_0x00f78b24();
            func_0x00f78ac0(uVar22,0);
            goto code_r0x01504a20;
          }
          *piVar15 = *piVar19 + *piVar15;
          uVar6 = uVar6 - 1;
          uVar17 = uVar17 - 1;
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 1;
          piVar19 = piVar19 + 1;
        } while (uVar14 != 0);
      }
      return auVar23._0_8_;
    }
code_r0x01504a20:
    auVar25 = func_0x00f78af4();
    puStack_48 = &Atlas_Stats_StatsData__IncrementStat;
    lVar7 = *(long *)(auVar25._0_8_ + 0x10);
    if (lVar7 == 0) {
      puStack_50 = (undefined1 *)&puStack_40;
      func_0x00f78af4();
    }
    else {
      puStack_50 = (undefined1 *)&puStack_40;
      if (auVar25._8_4_ < *(uint *)(lVar7 + 0x18)) {
        piVar15 = (int *)(lVar7 + (long)(int)auVar25._8_4_ * 4 + 0x20);
        iVar5 = *piVar15;
        if (iVar5 < 0x3ffffffe) {
          *piVar15 = iVar5 + 1;
        }
        return auVar25._0_8_;
      }
    }
    uVar22 = func_0x00f78b24();
    auVar25 = func_0x00f78ac0(uVar22,0);
    puStack_58 = &Atlas_Stats_StatsData__DecrementStat;
    lVar7 = *(long *)(auVar25._0_8_ + 0x10);
    if (lVar7 == 0) {
      puStack_60 = (undefined1 *)&puStack_50;
      func_0x00f78af4();
    }
    else {
      puStack_60 = (undefined1 *)&puStack_50;
      if (auVar25._8_4_ < *(uint *)(lVar7 + 0x18)) {
        piVar15 = (int *)(lVar7 + (long)(int)auVar25._8_4_ * 4 + 0x20);
        iVar5 = *piVar15;
        if (-0x3fffffff < iVar5) {
          *piVar15 = iVar5 + -1;
        }
        return auVar25._0_8_;
      }
    }
    uVar22 = func_0x00f78b24();
    auVar25 = func_0x00f78ac0(uVar22,0);
    puStack_68 = &Atlas_Stats_StatsData__SetStat;
    lVar7 = *(long *)(auVar25._0_8_ + 0x10);
    if (lVar7 == 0) {
      puStack_70 = (undefined1 *)&puStack_60;
      func_0x00f78af4();
    }
    else {
      puStack_70 = (undefined1 *)&puStack_60;
      if (auVar25._8_4_ < *(uint *)(lVar7 + 0x18)) {
        if (param_3 < -0x3ffffffe) {
          param_3 = -0x3fffffff;
        }
        if (0x3ffffffd < param_3) {
          param_3 = 0x3ffffffe;
        }
        *(int *)(lVar7 + (long)(int)auVar25._8_4_ * 4 + 0x20) = param_3;
        return auVar25._0_8_;
      }
    }
    uVar22 = func_0x00f78b24();
    auVar25 = func_0x00f78ac0(uVar22,0);
    puStack_78 = &Atlas_Stats_StatsData__GetStat;
    lVar7 = *(long *)(auVar25._0_8_ + 0x10);
    if (lVar7 == 0) {
      puStack_80 = (undefined1 *)&puStack_70;
      func_0x00f78af4();
    }
    else {
      puStack_80 = (undefined1 *)&puStack_70;
      if (auVar25._8_4_ < *(uint *)(lVar7 + 0x18)) {
        return (ulong)*(uint *)(lVar7 + (long)(int)auVar25._8_4_ * 4 + 0x20);
      }
    }
    uVar22 = func_0x00f78b24();
    auVar23 = func_0x00f78ac0(uVar22,0);
    lVar7 = auVar23._8_8_;
    uVar17 = auVar23._0_8_;
    puStack_88 = &Atlas_Stats_StatsData__UpdateToLargestValues;
    unaff_x29 = &puStack_90;
    uVar6 = uVar17;
    puStack_90 = (undefined1 *)&puStack_80;
    if ((bRam0000000003eb4d06 & 1) == 0) {
      puStack_90 = (undefined1 *)&puStack_80;
      uVar6 = func_0x00f78a20(0x3d1f100);
      bRam0000000003eb4d06 = 1;
    }
    lVar18 = *(long *)(uVar17 + 0x10);
    if (((lVar18 == 0) || (lVar7 == 0)) || (*(long *)(lVar7 + 0x10) == 0)) {
code_r0x01504c70:
      func_0x00f78af4();
      if ((bRam0000000003eb4d07 & 1) == 0) {
        func_0x00f78a20(0x3d24d50);
        bRam0000000003eb4d07 = 1;
      }
      uVar6 = func_0x00f78aec(/*Atlas.Stats.StatsData_TypeInfo*/ uRam0000000003d24d50);
      return uVar6;
    }
    uVar14 = (ulong)*(uint *)(lVar18 + 0x18);
    unaff_x22 = *(ulong *)(*(long *)(lVar7 + 0x10) + 0x18);
    if ((int)unaff_x22 <= (int)*(uint *)(lVar18 + 0x18)) {
      if (0 < (int)unaff_x22) {
        if (lVar18 == 0) goto code_r0x01504c70;
        uVar14 = 0;
        uVar1 = *(uint *)(lVar18 + 0x18);
        do {
          if (uVar1 == uVar14) {
code_r0x01504c64:
            uVar22 = func_0x00f78b24();
            func_0x00f78ac0(uVar22,0);
            goto code_r0x01504c70;
          }
          lVar20 = *(long *)(lVar7 + 0x10);
          if (lVar20 == 0) goto code_r0x01504c70;
          if ((*(uint *)(lVar20 + 0x18) <= uVar14) || (uVar1 <= uVar14)) goto code_r0x01504c64;
          iVar5 = *(int *)(lVar18 + 0x20 + uVar14 * 4);
          iVar2 = *(int *)(lVar20 + uVar14 * 4 + 0x20);
          if (iVar5 <= iVar2) {
            iVar5 = iVar2;
          }
          *(int *)(lVar18 + 0x20 + uVar14 * 4) = iVar5;
          uVar14 = uVar14 + 1;
        } while ((unaff_x22 & 0xffffffff) != uVar14);
      }
      return uVar6;
    }
    uVar6 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,unaff_x22);
    lVar7 = *(long *)(uVar17 + 0x10);
    unaff_x30 = &UNK_01504be8;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff40;
    unaff_x21 = uVar6;
    unaff_x23 = uVar14;
  }
  else {
    uVar14 = (ulong)*(uint *)(lVar7 + 0x18);
    if (*(int *)(uVar6 + 0x18) < (int)*(uint *)(lVar7 + 0x18)) {
      param_2 = /*System.Array$$Clone*/ func_0x0292031c(lVar7,0);
      uVar22 = /*int[]_TypeInfo*/ uRam0000000003d1f100;
      param_3 = (int)uVar14;
      uVar6 = 0;
      if ((param_2 == 0) || (uVar6 = func_0x00f78adc(param_2,/*int[]_TypeInfo*/ uRam0000000003d1f100), uVar6 != 0)) {
        *(ulong *)(param_1 + 0x10) = uVar6;
        return uVar6;
      }
      goto LAB_01504998;
    }
  }
  uVar22 = auVar23._0_8_;
  lVar18 = 0;
  *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined1 (*) [16])((long)register0x00000008 + -0x20) = auVar23;
  *(undefined1 ***)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if (lVar7 == 0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar8 = func_0x00f78aec();
    uVar10 = 0x3d7b900;
    uVar6 = uVar14;
    uVar14 = param_5;
code_r0x0292c538:
    uVar10 = func_0x00f78a24(uVar10);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar8,uVar10);
    uVar10 = func_0x00f78a24(0x3d514e0);
    auVar24 = func_0x00f78ac0(uVar8,uVar10);
    *(undefined8 *)((long)register0x00000008 + -0x50) = uVar22;
    *(undefined8 *)((long)register0x00000008 + -0x48) = uVar8;
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x38) = &System_Array__Copy;
    if (auVar24._8_8_ == (long)auVar24._8_4_) {
      if (lVar18 == (int)lVar18) {
        if (uVar14 == (long)(int)uVar14) {
          uVar22 = *(undefined8 *)((long)register0x00000008 + -0x40);
          uVar8 = *(undefined8 *)((long)register0x00000008 + -0x38);
          puVar4 = (undefined1 *)((long)register0x00000008 + -0x30);
          uVar10 = *(undefined8 *)((long)register0x00000008 + -0x50);
          uVar21 = *(undefined8 *)((long)register0x00000008 + -0x48);
          goto System_Array__Copy;
        }
        func_0x00f78a24(0x3d1fcf8);
        uVar10 = func_0x00f78aec();
        uVar22 = 0x3d7a280;
      }
      else {
        func_0x00f78a24(0x3d1fcf8);
        uVar10 = func_0x00f78aec();
        uVar22 = 0x3d78af0;
      }
    }
    else {
      func_0x00f78a24(0x3d1fcf8);
      uVar10 = func_0x00f78aec();
      uVar22 = 0x3d7b910;
    }
    uVar22 = func_0x00f78a24(uVar22);
    lVar7 = func_0x00f78a24(0x3d69268);
    /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar10,uVar22);
    uVar8 = func_0x00f78a24(0x3d514f8);
    auVar23 = func_0x00f78ac0(uVar10,uVar8);
    plVar12 = auVar23._8_8_;
    uVar8 = auVar23._0_8_;
    if (lVar7 != (int)lVar7) {
      *(undefined8 *)((long)register0x00000008 + -0x70) = uVar22;
      *(undefined8 *)((long)register0x00000008 + -0x68) = uVar10;
      *(undefined1 **)((long)register0x00000008 + -0x60) =
           (undefined1 *)((long)register0x00000008 + -0x40);
      *(undefined **)((long)register0x00000008 + -0x58) = &System_Array__CopyTo;
      func_0x00f78a24(0x3d1fcf8);
      uVar22 = func_0x00f78aec();
      uVar10 = func_0x00f78a24(0x3d79a60);
      uVar8 = func_0x00f78a24(0x3d69268);
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar22,uVar10,uVar8);
      uVar8 = func_0x00f78a24(0x3d51508);
      plVar12 = (long *)func_0x00f78ac0(uVar22,uVar8);
      *(ulong *)((long)register0x00000008 + -0xa0) = unaff_x22;
      *(ulong *)((long)register0x00000008 + -0x98) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x90) = uVar10;
      *(undefined8 *)((long)register0x00000008 + -0x88) = uVar22;
      *(undefined1 **)((long)register0x00000008 + -0x80) =
           (undefined1 *)((long)register0x00000008 + -0x60);
      *(undefined **)((long)register0x00000008 + -0x78) = &System_Array__get_LongLength;
      func_0x00f8078c(plVar12,0);
      goto code_r0x00f80814;
    }
    *(ulong *)((long)register0x00000008 + -0x80) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -0x78) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x70) = uVar22;
    *(undefined8 *)((long)register0x00000008 + -0x68) = uVar10;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x40);
    *(undefined **)((long)register0x00000008 + -0x58) = &System_Array__CopyTo;
    if (plVar12 != (long *)0x0) goto code_r0x00f80814;
    uVar22 = func_0x00f807d0(uVar8,0);
    auVar24._8_8_ = uVar22;
    auVar24._0_8_ = uVar8;
    uVar14 = /*System.Array$$get_Length*/ func_0x0292ae44(uVar8);
    uVar22 = *(undefined8 *)((long)register0x00000008 + -0x60);
    uVar8 = *(undefined8 *)((long)register0x00000008 + -0x58);
    uVar10 = *(undefined8 *)((long)register0x00000008 + -0x70);
    uVar21 = *(undefined8 *)((long)register0x00000008 + -0x68);
    puVar4 = (undefined1 *)((long)register0x00000008 + -0x50);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0x80);
    unaff_x21 = *(ulong *)((long)register0x00000008 + -0x78);
    uVar6 = 0;
  }
  else {
    if (uVar6 == 0) {
      func_0x00f78a24(0x3d1fcf0);
      uVar8 = func_0x00f78aec();
      uVar10 = 0x3d78ae8;
      uVar22 = 0;
      uVar6 = uVar14;
      uVar14 = param_5;
      goto code_r0x0292c538;
    }
    uVar22 = func_0x00f807d0(lVar7,0);
    auVar24._8_8_ = uVar22;
    auVar24._0_8_ = lVar7;
    func_0x00f807d0(uVar6,0);
    uVar22 = *(undefined8 *)((long)register0x00000008 + -0x10);
    uVar8 = *(undefined8 *)((long)register0x00000008 + -8);
    uVar10 = *(undefined8 *)((long)register0x00000008 + -0x20);
    uVar21 = *(undefined8 *)((long)register0x00000008 + -0x18);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0x30);
    unaff_x21 = *(ulong *)((long)register0x00000008 + -0x28);
    puVar4 = (undefined1 *)register0x00000008;
  }
System_Array__Copy:
  uVar13 = auVar24._8_8_;
  plVar12 = auVar24._0_8_;
  *(undefined8 *)(puVar4 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar4 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar4 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar4 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar4 + -0x40) = unaff_x24;
  *(ulong *)(puVar4 + -0x38) = unaff_x23;
  *(ulong *)(puVar4 + -0x30) = unaff_x22;
  *(ulong *)(puVar4 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar4 + -0x20) = uVar10;
  *(undefined8 *)(puVar4 + -0x18) = uVar21;
  *(undefined8 *)(puVar4 + -0x10) = uVar22;
  *(undefined8 *)(puVar4 + -8) = uVar8;
  if (plVar12 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0,uVar13);
    puVar9 = (undefined8 *)func_0x00f78aec();
    uVar22 = 0x3d7b900;
  }
  else {
    if (uVar6 != 0) {
      if (-1 < (int)uVar14) {
code_r0x00f80814:
        return (ulong)*(byte *)(*plVar12 + 0x12e);
      }
      uVar22 = func_0x00f78a24(0x3d75f70,uVar13);
      uVar22 = /*Locale$$GetText*/ func_0x02af42b4(uVar22,0);
      func_0x00f78a24(0x3d1fcf8);
      uVar10 = func_0x00f78aec();
      uVar8 = func_0x00f78a24(0x3d7a280);
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar10,uVar8,uVar22);
      uVar22 = func_0x00f78a24(0x3d514f0);
      func_0x00f78ac0(uVar10,uVar22);
      func_0x00f78af4();
      func_0x00f78a24(0x3d1fcf8);
      puVar9 = (undefined8 *)func_0x00f78aec();
      uVar10 = func_0x00f78a24(0x3d78af0);
      uVar22 = func_0x00f78a24(0x3d6de20);
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(puVar9,uVar10,uVar22);
      goto code_r0x0292b958;
    }
    func_0x00f78a24(0x3d1fcf0,uVar13);
    puVar9 = (undefined8 *)func_0x00f78aec();
    uVar22 = 0x3d78ae8;
  }
  uVar22 = func_0x00f78a24(uVar22);
  /*System.ArgumentNullException$$.ctor*/ func_0x02920400(puVar9,uVar22);
code_r0x0292b958:
  while( true ) {
    uVar22 = func_0x00f78a24(0x3d514f0);
    func_0x00f78ac0(puVar9,uVar22);
    uVar22 = func_0x00f78a24(0x3d23988);
    uVar6 = func_0x00f78ed4(uVar22,*(undefined8 *)*puVar9);
    if ((uVar6 & 1) == 0) break;
    puVar9 = (undefined8 *)*puVar9;
    ___cxa_end_catch();
    iVar5 = /*System.Array$$CanAssignArrayElement*/ func_0x0292e90c(*(undefined8 *)(puVar4 + -0x68),uVar10);
    if (iVar5 == 0) {
      puVar9 = (undefined8 *)/*System.Array$$CreateArrayTypeMismatchException*/ func_0x0292e8b8();
    }
  }
  puVar11 = (undefined8 *)___cxa_allocate_exception(8);
  *puVar11 = *puVar9;
  ___cxa_throw(puVar11,&DAT_03a5ed38,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x292b9cc);
  (*pcVar3)();
}



// ============================================================
// RVA: 0x15049a4 | Atlas.Stats.StatsData.Add
// ============================================================

/* WARNING: Possible PIC construction at 0x01504cc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01504cc4) */
/* WARNING: Removing unreachable block (ram,0x01504ce8) */
/* WARNING: Removing unreachable block (ram,0x01504cc8) */

ulong Atlas_Stats_StatsData__Add(ulong param_1,long param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  int *piVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [12];
  
  if (((param_2 != 0) && (lVar11 = *(long *)(param_2 + 0x10), lVar11 != 0)) &&
     (lVar10 = *(long *)(param_1 + 0x10), lVar10 != 0)) {
    uVar1 = *(uint *)(lVar11 + 0x18);
    uVar5 = (ulong)uVar1;
    uVar8 = (uint)*(ulong *)(lVar10 + 0x18);
    if ((int)uVar8 <= (int)uVar1) {
      uVar1 = uVar8;
    }
    uVar7 = (ulong)uVar1;
    if (0 < (int)uVar1) {
      uVar9 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
      piVar6 = (int *)(lVar10 + 0x20);
      piVar12 = (int *)(lVar11 + 0x20);
      do {
        if ((uVar9 == 0) || (uVar5 == 0)) {
          uVar4 = func_0x00f78b24();
          func_0x00f78ac0(uVar4,0);
          goto LAB_01504a20;
        }
        *piVar6 = *piVar12 + *piVar6;
        uVar5 = uVar5 - 1;
        uVar9 = uVar9 - 1;
        uVar7 = uVar7 - 1;
        piVar6 = piVar6 + 1;
        piVar12 = piVar12 + 1;
      } while (uVar7 != 0);
    }
    return param_1;
  }
LAB_01504a20:
  auVar15 = func_0x00f78af4();
  lVar11 = *(long *)(auVar15._0_8_ + 0x10);
  if (lVar11 == 0) {
    func_0x00f78af4();
  }
  else if (auVar15._8_4_ < *(uint *)(lVar11 + 0x18)) {
    piVar6 = (int *)(lVar11 + (long)(int)auVar15._8_4_ * 4 + 0x20);
    iVar3 = *piVar6;
    if (iVar3 < 0x3ffffffe) {
      *piVar6 = iVar3 + 1;
    }
    return auVar15._0_8_;
  }
  uVar4 = func_0x00f78b24();
  auVar15 = func_0x00f78ac0(uVar4,0);
  lVar11 = *(long *)(auVar15._0_8_ + 0x10);
  if (lVar11 == 0) {
    func_0x00f78af4();
  }
  else if (auVar15._8_4_ < *(uint *)(lVar11 + 0x18)) {
    piVar6 = (int *)(lVar11 + (long)(int)auVar15._8_4_ * 4 + 0x20);
    iVar3 = *piVar6;
    if (-0x3fffffff < iVar3) {
      *piVar6 = iVar3 + -1;
    }
    return auVar15._0_8_;
  }
  uVar4 = func_0x00f78b24();
  auVar15 = func_0x00f78ac0(uVar4,0);
  lVar11 = *(long *)(auVar15._0_8_ + 0x10);
  if (lVar11 == 0) {
    func_0x00f78af4();
  }
  else if (auVar15._8_4_ < *(uint *)(lVar11 + 0x18)) {
    if (param_3 < -0x3ffffffe) {
      param_3 = -0x3fffffff;
    }
    if (0x3ffffffd < param_3) {
      param_3 = 0x3ffffffe;
    }
    *(int *)(lVar11 + (long)(int)auVar15._8_4_ * 4 + 0x20) = param_3;
    return auVar15._0_8_;
  }
  uVar4 = func_0x00f78b24();
  auVar15 = func_0x00f78ac0(uVar4,0);
  lVar11 = *(long *)(auVar15._0_8_ + 0x10);
  if (lVar11 == 0) {
    func_0x00f78af4();
  }
  else if (auVar15._8_4_ < *(uint *)(lVar11 + 0x18)) {
    return (ulong)*(uint *)(lVar11 + (long)(int)auVar15._8_4_ * 4 + 0x20);
  }
  uVar4 = func_0x00f78b24();
  auVar14 = func_0x00f78ac0(uVar4,0);
  lVar11 = auVar14._8_8_;
  uVar7 = auVar14._0_8_;
  uVar5 = uVar7;
  if ((bRam0000000003eb4d06 & 1) == 0) {
    uVar5 = func_0x00f78a20(0x3d1f100);
    bRam0000000003eb4d06 = 1;
  }
  lVar10 = *(long *)(uVar7 + 0x10);
  if (((lVar10 != 0) && (lVar11 != 0)) && (*(long *)(lVar11 + 0x10) != 0)) {
    iVar3 = *(int *)(lVar10 + 0x18);
    uVar9 = *(ulong *)(*(long *)(lVar11 + 0x10) + 0x18);
    if (iVar3 < (int)uVar9) {
      lVar10 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,uVar9);
      uVar5 = /*System.Array$$Copy*/ func_0x0292c49c(*(undefined8 *)(uVar7 + 0x10),lVar10,iVar3,0);
      *(long *)(uVar7 + 0x10) = lVar10;
    }
    if (0 < (int)uVar9) {
      if (lVar10 == 0) goto code_r0x01504c70;
      uVar7 = 0;
      uVar1 = *(uint *)(lVar10 + 0x18);
      do {
        if (uVar1 == uVar7) {
code_r0x01504c64:
          uVar4 = func_0x00f78b24();
          func_0x00f78ac0(uVar4,0);
          goto code_r0x01504c70;
        }
        lVar13 = *(long *)(lVar11 + 0x10);
        if (lVar13 == 0) goto code_r0x01504c70;
        if ((*(uint *)(lVar13 + 0x18) <= uVar7) || (uVar1 <= uVar7)) goto code_r0x01504c64;
        iVar3 = *(int *)(lVar10 + 0x20 + uVar7 * 4);
        iVar2 = *(int *)(lVar13 + uVar7 * 4 + 0x20);
        if (iVar3 <= iVar2) {
          iVar3 = iVar2;
        }
        *(int *)(lVar10 + 0x20 + uVar7 * 4) = iVar3;
        uVar7 = uVar7 + 1;
      } while ((uVar9 & 0xffffffff) != uVar7);
    }
    return uVar5;
  }
code_r0x01504c70:
  func_0x00f78af4();
  if ((bRam0000000003eb4d07 & 1) == 0) {
    func_0x00f78a20(0x3d24d50);
    bRam0000000003eb4d07 = 1;
  }
  uVar5 = func_0x00f78aec(/*Atlas.Stats.StatsData_TypeInfo*/ uRam0000000003d24d50);
  return uVar5;
}



// ============================================================
// RVA: 0x1504a24 | Atlas.Stats.StatsData.IncrementStat
// ============================================================

/* WARNING: Possible PIC construction at 0x01504cc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01504cc4) */
/* WARNING: Removing unreachable block (ram,0x01504ce8) */
/* WARNING: Removing unreachable block (ram,0x01504cc8) */

ulong Atlas_Stats_StatsData__IncrementStat(ulong param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [12];
  
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) {
    func_0x00f78af4();
  }
  else if (param_2 < *(uint *)(lVar6 + 0x18)) {
    piVar7 = (int *)(lVar6 + (long)(int)param_2 * 4 + 0x20);
    iVar3 = *piVar7;
    if (iVar3 < 0x3ffffffe) {
      *piVar7 = iVar3 + 1;
    }
    return param_1;
  }
  uVar4 = func_0x00f78b24();
  auVar13 = func_0x00f78ac0(uVar4,0);
  lVar6 = *(long *)(auVar13._0_8_ + 0x10);
  if (lVar6 == 0) {
    func_0x00f78af4();
  }
  else if (auVar13._8_4_ < *(uint *)(lVar6 + 0x18)) {
    piVar7 = (int *)(lVar6 + (long)(int)auVar13._8_4_ * 4 + 0x20);
    iVar3 = *piVar7;
    if (-0x3fffffff < iVar3) {
      *piVar7 = iVar3 + -1;
    }
    return auVar13._0_8_;
  }
  uVar4 = func_0x00f78b24();
  auVar13 = func_0x00f78ac0(uVar4,0);
  lVar6 = *(long *)(auVar13._0_8_ + 0x10);
  if (lVar6 == 0) {
    func_0x00f78af4();
  }
  else if (auVar13._8_4_ < *(uint *)(lVar6 + 0x18)) {
    if (param_3 < -0x3ffffffe) {
      param_3 = -0x3fffffff;
    }
    if (0x3ffffffd < param_3) {
      param_3 = 0x3ffffffe;
    }
    *(int *)(lVar6 + (long)(int)auVar13._8_4_ * 4 + 0x20) = param_3;
    return auVar13._0_8_;
  }
  uVar4 = func_0x00f78b24();
  auVar13 = func_0x00f78ac0(uVar4,0);
  lVar6 = *(long *)(auVar13._0_8_ + 0x10);
  if (lVar6 == 0) {
    func_0x00f78af4();
  }
  else if (auVar13._8_4_ < *(uint *)(lVar6 + 0x18)) {
    return (ulong)*(uint *)(lVar6 + (long)(int)auVar13._8_4_ * 4 + 0x20);
  }
  uVar4 = func_0x00f78b24();
  auVar12 = func_0x00f78ac0(uVar4,0);
  lVar6 = auVar12._8_8_;
  uVar8 = auVar12._0_8_;
  uVar5 = uVar8;
  if ((bRam0000000003eb4d06 & 1) == 0) {
    uVar5 = func_0x00f78a20(0x3d1f100);
    bRam0000000003eb4d06 = 1;
  }
  lVar10 = *(long *)(uVar8 + 0x10);
  if (((lVar10 != 0) && (lVar6 != 0)) && (*(long *)(lVar6 + 0x10) != 0)) {
    iVar3 = *(int *)(lVar10 + 0x18);
    uVar11 = *(ulong *)(*(long *)(lVar6 + 0x10) + 0x18);
    if (iVar3 < (int)uVar11) {
      lVar10 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,uVar11);
      uVar5 = /*System.Array$$Copy*/ func_0x0292c49c(*(undefined8 *)(uVar8 + 0x10),lVar10,iVar3,0);
      *(long *)(uVar8 + 0x10) = lVar10;
    }
    if (0 < (int)uVar11) {
      if (lVar10 == 0) goto code_r0x01504c70;
      uVar8 = 0;
      uVar1 = *(uint *)(lVar10 + 0x18);
      do {
        if (uVar1 == uVar8) {
code_r0x01504c64:
          uVar4 = func_0x00f78b24();
          func_0x00f78ac0(uVar4,0);
          goto code_r0x01504c70;
        }
        lVar9 = *(long *)(lVar6 + 0x10);
        if (lVar9 == 0) goto code_r0x01504c70;
        if ((*(uint *)(lVar9 + 0x18) <= uVar8) || (uVar1 <= uVar8)) goto code_r0x01504c64;
        iVar3 = *(int *)(lVar10 + 0x20 + uVar8 * 4);
        iVar2 = *(int *)(lVar9 + uVar8 * 4 + 0x20);
        if (iVar3 <= iVar2) {
          iVar3 = iVar2;
        }
        *(int *)(lVar10 + 0x20 + uVar8 * 4) = iVar3;
        uVar8 = uVar8 + 1;
      } while ((uVar11 & 0xffffffff) != uVar8);
    }
    return uVar5;
  }
code_r0x01504c70:
  func_0x00f78af4();
  if ((bRam0000000003eb4d07 & 1) == 0) {
    func_0x00f78a20(0x3d24d50);
    bRam0000000003eb4d07 = 1;
  }
  uVar5 = func_0x00f78aec(/*Atlas.Stats.StatsData_TypeInfo*/ uRam0000000003d24d50);
  return uVar5;
}



// ============================================================
// RVA: 0x1504a78 | Atlas.Stats.StatsData.DecrementStat
// ============================================================

/* WARNING: Possible PIC construction at 0x01504cc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01504cc4) */
/* WARNING: Removing unreachable block (ram,0x01504ce8) */
/* WARNING: Removing unreachable block (ram,0x01504cc8) */

ulong Atlas_Stats_StatsData__DecrementStat(ulong param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [12];
  
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) {
    func_0x00f78af4();
  }
  else if (param_2 < *(uint *)(lVar6 + 0x18)) {
    piVar7 = (int *)(lVar6 + (long)(int)param_2 * 4 + 0x20);
    iVar3 = *piVar7;
    if (-0x3fffffff < iVar3) {
      *piVar7 = iVar3 + -1;
    }
    return param_1;
  }
  uVar4 = func_0x00f78b24();
  auVar13 = func_0x00f78ac0(uVar4,0);
  lVar6 = *(long *)(auVar13._0_8_ + 0x10);
  if (lVar6 == 0) {
    func_0x00f78af4();
  }
  else if (auVar13._8_4_ < *(uint *)(lVar6 + 0x18)) {
    if (param_3 < -0x3ffffffe) {
      param_3 = -0x3fffffff;
    }
    if (0x3ffffffd < param_3) {
      param_3 = 0x3ffffffe;
    }
    *(int *)(lVar6 + (long)(int)auVar13._8_4_ * 4 + 0x20) = param_3;
    return auVar13._0_8_;
  }
  uVar4 = func_0x00f78b24();
  auVar13 = func_0x00f78ac0(uVar4,0);
  lVar6 = *(long *)(auVar13._0_8_ + 0x10);
  if (lVar6 == 0) {
    func_0x00f78af4();
  }
  else if (auVar13._8_4_ < *(uint *)(lVar6 + 0x18)) {
    return (ulong)*(uint *)(lVar6 + (long)(int)auVar13._8_4_ * 4 + 0x20);
  }
  uVar4 = func_0x00f78b24();
  auVar12 = func_0x00f78ac0(uVar4,0);
  lVar6 = auVar12._8_8_;
  uVar8 = auVar12._0_8_;
  uVar5 = uVar8;
  if ((bRam0000000003eb4d06 & 1) == 0) {
    uVar5 = func_0x00f78a20(0x3d1f100);
    bRam0000000003eb4d06 = 1;
  }
  lVar10 = *(long *)(uVar8 + 0x10);
  if (((lVar10 != 0) && (lVar6 != 0)) && (*(long *)(lVar6 + 0x10) != 0)) {
    iVar3 = *(int *)(lVar10 + 0x18);
    uVar11 = *(ulong *)(*(long *)(lVar6 + 0x10) + 0x18);
    if (iVar3 < (int)uVar11) {
      lVar10 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,uVar11);
      uVar5 = /*System.Array$$Copy*/ func_0x0292c49c(*(undefined8 *)(uVar8 + 0x10),lVar10,iVar3,0);
      *(long *)(uVar8 + 0x10) = lVar10;
    }
    if (0 < (int)uVar11) {
      if (lVar10 == 0) goto code_r0x01504c70;
      uVar8 = 0;
      uVar1 = *(uint *)(lVar10 + 0x18);
      do {
        if (uVar1 == uVar8) {
code_r0x01504c64:
          uVar4 = func_0x00f78b24();
          func_0x00f78ac0(uVar4,0);
          goto code_r0x01504c70;
        }
        lVar9 = *(long *)(lVar6 + 0x10);
        if (lVar9 == 0) goto code_r0x01504c70;
        if ((*(uint *)(lVar9 + 0x18) <= uVar8) || (uVar1 <= uVar8)) goto code_r0x01504c64;
        iVar3 = *(int *)(lVar10 + 0x20 + uVar8 * 4);
        iVar2 = *(int *)(lVar9 + uVar8 * 4 + 0x20);
        if (iVar3 <= iVar2) {
          iVar3 = iVar2;
        }
        *(int *)(lVar10 + 0x20 + uVar8 * 4) = iVar3;
        uVar8 = uVar8 + 1;
      } while ((uVar11 & 0xffffffff) != uVar8);
    }
    return uVar5;
  }
code_r0x01504c70:
  func_0x00f78af4();
  if ((bRam0000000003eb4d07 & 1) == 0) {
    func_0x00f78a20(0x3d24d50);
    bRam0000000003eb4d07 = 1;
  }
  uVar5 = func_0x00f78aec(/*Atlas.Stats.StatsData_TypeInfo*/ uRam0000000003d24d50);
  return uVar5;
}



// ============================================================
// RVA: 0x1504acc | Atlas.Stats.StatsData.SetStat
// ============================================================

/* WARNING: Possible PIC construction at 0x01504cc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01504cc4) */
/* WARNING: Removing unreachable block (ram,0x01504ce8) */
/* WARNING: Removing unreachable block (ram,0x01504cc8) */

ulong Atlas_Stats_StatsData__SetStat(ulong param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) {
    func_0x00f78af4();
  }
  else if (param_2 < *(uint *)(lVar6 + 0x18)) {
    if (param_3 < -0x3ffffffe) {
      param_3 = -0x3fffffff;
    }
    if (0x3ffffffd < param_3) {
      param_3 = 0x3ffffffe;
    }
    *(int *)(lVar6 + (long)(int)param_2 * 4 + 0x20) = param_3;
    return param_1;
  }
  uVar4 = func_0x00f78b24();
  auVar12 = func_0x00f78ac0(uVar4,0);
  lVar6 = *(long *)(auVar12._0_8_ + 0x10);
  if (lVar6 == 0) {
    func_0x00f78af4();
  }
  else if (auVar12._8_4_ < *(uint *)(lVar6 + 0x18)) {
    return (ulong)*(uint *)(lVar6 + (long)(int)auVar12._8_4_ * 4 + 0x20);
  }
  uVar4 = func_0x00f78b24();
  auVar11 = func_0x00f78ac0(uVar4,0);
  lVar6 = auVar11._8_8_;
  uVar7 = auVar11._0_8_;
  uVar5 = uVar7;
  if ((bRam0000000003eb4d06 & 1) == 0) {
    uVar5 = func_0x00f78a20(0x3d1f100);
    bRam0000000003eb4d06 = 1;
  }
  lVar9 = *(long *)(uVar7 + 0x10);
  if (((lVar9 != 0) && (lVar6 != 0)) && (*(long *)(lVar6 + 0x10) != 0)) {
    iVar1 = *(int *)(lVar9 + 0x18);
    uVar10 = *(ulong *)(*(long *)(lVar6 + 0x10) + 0x18);
    if (iVar1 < (int)uVar10) {
      lVar9 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,uVar10);
      uVar5 = /*System.Array$$Copy*/ func_0x0292c49c(*(undefined8 *)(uVar7 + 0x10),lVar9,iVar1,0);
      *(long *)(uVar7 + 0x10) = lVar9;
    }
    if (0 < (int)uVar10) {
      if (lVar9 == 0) goto code_r0x01504c70;
      uVar7 = 0;
      uVar2 = *(uint *)(lVar9 + 0x18);
      do {
        if (uVar2 == uVar7) {
code_r0x01504c64:
          uVar4 = func_0x00f78b24();
          func_0x00f78ac0(uVar4,0);
          goto code_r0x01504c70;
        }
        lVar8 = *(long *)(lVar6 + 0x10);
        if (lVar8 == 0) goto code_r0x01504c70;
        if ((*(uint *)(lVar8 + 0x18) <= uVar7) || (uVar2 <= uVar7)) goto code_r0x01504c64;
        iVar1 = *(int *)(lVar9 + 0x20 + uVar7 * 4);
        iVar3 = *(int *)(lVar8 + uVar7 * 4 + 0x20);
        if (iVar1 <= iVar3) {
          iVar1 = iVar3;
        }
        *(int *)(lVar9 + 0x20 + uVar7 * 4) = iVar1;
        uVar7 = uVar7 + 1;
      } while ((uVar10 & 0xffffffff) != uVar7);
    }
    return uVar5;
  }
code_r0x01504c70:
  func_0x00f78af4();
  if ((bRam0000000003eb4d07 & 1) == 0) {
    func_0x00f78a20(0x3d24d50);
    bRam0000000003eb4d07 = 1;
  }
  uVar5 = func_0x00f78aec(/*Atlas.Stats.StatsData_TypeInfo*/ uRam0000000003d24d50);
  return uVar5;
}



// ============================================================
// RVA: 0x1504b20 | Atlas.Stats.StatsData.GetStat
// ============================================================

/* WARNING: Possible PIC construction at 0x01504cc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01504cc4) */
/* WARNING: Removing unreachable block (ram,0x01504ce8) */
/* WARNING: Removing unreachable block (ram,0x01504cc8) */

ulong Atlas_Stats_StatsData__GetStat(long param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) {
    func_0x00f78af4();
  }
  else if (param_2 < *(uint *)(lVar6 + 0x18)) {
    return (ulong)*(uint *)(lVar6 + (long)(int)param_2 * 4 + 0x20);
  }
  uVar4 = func_0x00f78b24();
  auVar11 = func_0x00f78ac0(uVar4,0);
  lVar6 = auVar11._8_8_;
  uVar7 = auVar11._0_8_;
  uVar5 = uVar7;
  if ((bRam0000000003eb4d06 & 1) == 0) {
    uVar5 = func_0x00f78a20(0x3d1f100);
    bRam0000000003eb4d06 = 1;
  }
  lVar9 = *(long *)(uVar7 + 0x10);
  if (((lVar9 != 0) && (lVar6 != 0)) && (*(long *)(lVar6 + 0x10) != 0)) {
    iVar1 = *(int *)(lVar9 + 0x18);
    uVar10 = *(ulong *)(*(long *)(lVar6 + 0x10) + 0x18);
    if (iVar1 < (int)uVar10) {
      lVar9 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,uVar10);
      uVar5 = /*System.Array$$Copy*/ func_0x0292c49c(*(undefined8 *)(uVar7 + 0x10),lVar9,iVar1,0);
      *(long *)(uVar7 + 0x10) = lVar9;
    }
    if (0 < (int)uVar10) {
      if (lVar9 == 0) goto code_r0x01504c70;
      uVar7 = 0;
      uVar2 = *(uint *)(lVar9 + 0x18);
      do {
        if (uVar2 == uVar7) {
code_r0x01504c64:
          uVar4 = func_0x00f78b24();
          func_0x00f78ac0(uVar4,0);
          goto code_r0x01504c70;
        }
        lVar8 = *(long *)(lVar6 + 0x10);
        if (lVar8 == 0) goto code_r0x01504c70;
        if ((*(uint *)(lVar8 + 0x18) <= uVar7) || (uVar2 <= uVar7)) goto code_r0x01504c64;
        iVar1 = *(int *)(lVar9 + 0x20 + uVar7 * 4);
        iVar3 = *(int *)(lVar8 + uVar7 * 4 + 0x20);
        if (iVar1 <= iVar3) {
          iVar1 = iVar3;
        }
        *(int *)(lVar9 + 0x20 + uVar7 * 4) = iVar1;
        uVar7 = uVar7 + 1;
      } while ((uVar10 & 0xffffffff) != uVar7);
    }
    return uVar5;
  }
code_r0x01504c70:
  func_0x00f78af4();
  if ((bRam0000000003eb4d07 & 1) == 0) {
    func_0x00f78a20(0x3d24d50);
    bRam0000000003eb4d07 = 1;
  }
  uVar5 = func_0x00f78aec(/*Atlas.Stats.StatsData_TypeInfo*/ uRam0000000003d24d50);
  return uVar5;
}



// ============================================================
// RVA: 0x1504b5c | Atlas.Stats.StatsData.UpdateToLargestValues
// ============================================================

/* WARNING: Possible PIC construction at 0x01504cc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01504cc4) */
/* WARNING: Removing unreachable block (ram,0x01504ce8) */
/* WARNING: Removing unreachable block (ram,0x01504cc8) */

void Atlas_Stats_StatsData__UpdateToLargestValues(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  if ((bRam0000000003eb4d06 & 1) == 0) {
    func_0x00f78a20(0x3d1f100);
    bRam0000000003eb4d06 = 1;
  }
  lVar7 = *(long *)(param_1 + 0x10);
  if (((lVar7 != 0) && (param_2 != 0)) && (*(long *)(param_2 + 0x10) != 0)) {
    iVar1 = *(int *)(lVar7 + 0x18);
    uVar8 = *(ulong *)(*(long *)(param_2 + 0x10) + 0x18);
    if (iVar1 < (int)uVar8) {
      lVar7 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,uVar8);
      /*System.Array$$Copy*/ func_0x0292c49c(*(undefined8 *)(param_1 + 0x10),lVar7,iVar1,0);
      *(long *)(param_1 + 0x10) = lVar7;
    }
    if (0 < (int)uVar8) {
      if (lVar7 == 0) goto LAB_01504c70;
      uVar5 = 0;
      uVar2 = *(uint *)(lVar7 + 0x18);
      do {
        if (uVar2 == uVar5) {
LAB_01504c64:
          uVar4 = func_0x00f78b24();
          func_0x00f78ac0(uVar4,0);
          goto LAB_01504c70;
        }
        lVar6 = *(long *)(param_2 + 0x10);
        if (lVar6 == 0) goto LAB_01504c70;
        if ((*(uint *)(lVar6 + 0x18) <= uVar5) || (uVar2 <= uVar5)) goto LAB_01504c64;
        iVar1 = *(int *)(lVar7 + 0x20 + uVar5 * 4);
        iVar3 = *(int *)(lVar6 + uVar5 * 4 + 0x20);
        if (iVar1 <= iVar3) {
          iVar1 = iVar3;
        }
        *(int *)(lVar7 + 0x20 + uVar5 * 4) = iVar1;
        uVar5 = uVar5 + 1;
      } while ((uVar8 & 0xffffffff) != uVar5);
    }
    return;
  }
LAB_01504c70:
  func_0x00f78af4();
  if ((bRam0000000003eb4d07 & 1) == 0) {
    func_0x00f78a20(0x3d24d50);
    bRam0000000003eb4d07 = 1;
  }
  func_0x00f78aec(/*Atlas.Stats.StatsData_TypeInfo*/ uRam0000000003d24d50);
  return;
}



// ============================================================
// RVA: 0x1504c74 | Atlas.Stats.StatsData.Clone
// ============================================================

/* WARNING: Possible PIC construction at 0x01504cc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01504cc4) */
/* WARNING: Removing unreachable block (ram,0x01504ce8) */
/* WARNING: Removing unreachable block (ram,0x01504cc8) */

void Atlas_Stats_StatsData__Clone(void)

{
  if ((bRam0000000003eb4d07 & 1) == 0) {
    func_0x00f78a20(0x3d24d50);
    bRam0000000003eb4d07 = 1;
  }
  func_0x00f78aec(/*Atlas.Stats.StatsData_TypeInfo*/ uRam0000000003d24d50);
  return;
}



// ============================================================
// RVA: 0x1504cec | Atlas.Stats.StatsData..ctor
// ============================================================

void Atlas_Stats_StatsData___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x1504cf4 | Atlas.Stats.StatsData.ValidateStat
// ============================================================

void Atlas_Stats_StatsData__ValidateStat(void)

{
  return;
}



