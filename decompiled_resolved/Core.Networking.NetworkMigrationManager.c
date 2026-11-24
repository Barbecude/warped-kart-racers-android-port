// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Networking.NetworkMigrationManager

// ============================================================
// RVA: 0x1659eb4 | Core.Networking.NetworkMigrationManager.get_MigrationState
// ============================================================

void Core_Networking_NetworkMigrationManager__get_MigrationState(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  param_1[1] = *(undefined8 *)(param_2 + 0x18);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  param_1[4] = *(undefined8 *)(param_2 + 0x30);
  return;
}



// ============================================================
// RVA: 0x1659ec8 | Core.Networking.NetworkMigrationManager.set_MigrationState
// ============================================================

void Core_Networking_NetworkMigrationManager__set_MigrationState(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  *(undefined8 *)(param_1 + 0x30) = param_2[4];
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  return;
}



// ============================================================
// RVA: 0x1659edc | Core.Networking.NetworkMigrationManager.Init
// ============================================================

/* WARNING: Possible PIC construction at 0x0165a268: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165a378: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165a4c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0165a26c) */
/* WARNING: Removing unreachable block (ram,0x0165a284) */
/* WARNING: Removing unreachable block (ram,0x0165a290) */
/* WARNING: Removing unreachable block (ram,0x0165a2c0) */
/* WARNING: Removing unreachable block (ram,0x0165a2d0) */
/* WARNING: Removing unreachable block (ram,0x0165a304) */
/* WARNING: Removing unreachable block (ram,0x0165a344) */
/* WARNING: Removing unreachable block (ram,0x0165a350) */
/* WARNING: Removing unreachable block (ram,0x0165a37c) */
/* WARNING: Removing unreachable block (ram,0x0165a358) */
/* WARNING: Removing unreachable block (ram,0x0165a3a4) */
/* WARNING: Removing unreachable block (ram,0x0165a360) */
/* WARNING: Removing unreachable block (ram,0x0165a3a8) */
/* WARNING: Removing unreachable block (ram,0x0165a3ac) */
/* WARNING: Removing unreachable block (ram,0x0165a3c0) */
/* WARNING: Removing unreachable block (ram,0x0165a3ec) */
/* WARNING: Removing unreachable block (ram,0x0165a3c8) */
/* WARNING: Removing unreachable block (ram,0x0165a3e4) */
/* WARNING: Removing unreachable block (ram,0x0165a36c) */
/* WARNING: Removing unreachable block (ram,0x0165a314) */
/* WARNING: Removing unreachable block (ram,0x0165a398) */
/* WARNING: Removing unreachable block (ram,0x0165a31c) */
/* WARNING: Removing unreachable block (ram,0x0165a4c4) */
/* WARNING: Removing unreachable block (ram,0x0165a4d8) */
/* WARNING: Removing unreachable block (ram,0x0165a4e4) */
/* WARNING: Removing unreachable block (ram,0x0165a4f4) */
/* WARNING: Removing unreachable block (ram,0x0165a4fc) */

long Core_Networking_NetworkMigrationManager__Init
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,long param_8,
               undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
               long *param_13,undefined8 param_14,long param_15)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 extraout_x1;
  long lVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined1 **ppuVar10;
  undefined *puVar11;
  undefined4 extraout_s0;
  long lVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  undefined1 auVar18 [16];
  undefined1 auStack_180 [8];
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined2 uStack_158;
  undefined1 uStack_156;
  undefined1 uStack_155;
  long lStack_154;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  long lStack_140;
  undefined1 uStack_138;
  undefined2 uStack_137;
  undefined1 uStack_135;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined1 uStack_12c;
  undefined2 uStack_12b;
  undefined1 uStack_129;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  long lStack_110;
  long lStack_108;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  int *piVar3;
  
  uVar7 = 0x3eb5000;
  if ((bRam0000000003eb5822 & 1) == 0) {
    func_0x00f78a20(0x3d3b2e0);
    func_0x00f78a20(0x3d1dbd8);
    bRam0000000003eb5822 = 1;
  }
  lVar4 = *(long *)(param_8 + 0x50);
  if (lVar4 != 0) {
    lVar9 = 0;
    uVar8 = 0;
    do {
      iVar1 = *(int *)(lVar4 + 0x18);
      uVar7 = func_0x00f78aec(/*System.Collections.Generic.List<MigrationKartData>_TypeInfo*/ uRam0000000003d1dbd8);
      uVar14 = uRam0000000003d3b2e0;
      lVar4 = /*System.Collections.Generic.List<MigrationKartData>$$.ctor*/ func_0x023f95c0(uVar7,0xc);
      uVar13 = (undefined4)param_2;
      uVar17 = (undefined4)param_3;
      if ((long)iVar1 <= (long)uVar8) goto LAB_01659fa0;
      lVar4 = *(long *)(param_8 + 0x50);
      if (lVar4 == 0) break;
      if (*(uint *)(lVar4 + 0x18) <= uVar8) {
        uVar7 = func_0x00f78b24();
        auVar18 = func_0x00f78ac0(uVar7,0);
        piVar3 = auVar18._8_8_;
        lVar4 = auVar18._0_8_;
        puStack_58 = &Core_Networking_NetworkMigrationManager__SetNetworkState;
        lVar9 = *(long *)(lVar4 + 0x50);
        uStack_60 = &stack0xfffffffffffffff0;
        if (lVar9 == 0) {
          func_0x00f78af4();
        }
        else if (*(uint *)(lVar4 + 0x58) < *(uint *)(lVar9 + 0x18)) {
          lVar9 = lVar9 + (long)(int)*(uint *)(lVar4 + 0x58) * 0x28;
          uVar7 = *(undefined8 *)piVar3;
          uVar15 = *(undefined8 *)(piVar3 + 6);
          uVar14 = *(undefined8 *)(piVar3 + 4);
          *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)(piVar3 + 2);
          *(undefined8 *)(lVar9 + 0x20) = uVar7;
          *(undefined8 *)(lVar9 + 0x38) = uVar15;
          *(undefined8 *)(lVar9 + 0x30) = uVar14;
          iVar1 = *piVar3;
          if (iVar1 != 7) {
            *(undefined1 *)(lVar4 + 0x5c) = 0;
          }
          *(bool *)(lVar4 + 0x5d) = iVar1 == 7;
          return lVar4;
        }
        uVar7 = func_0x00f78b24();
        lVar4 = func_0x00f78ac0(uVar7,0);
        puStack_68 = &Core_Networking_NetworkMigrationManager__AddKartData;
        ppuVar10 = &puStack_70;
        lStack_108 = *(long *)PTR_03a5d648;
        puStack_70 = (undefined1 *)&uStack_60;
        if ((bRam0000000003eb5823 & 1) == 0) {
          puStack_70 = (undefined1 *)&uStack_60;
          func_0x00f78a20(0x3d3b2e8);
          bRam0000000003eb5823 = 1;
        }
        uStack_124 = 0;
        lVar12 = *param_13;
        uStack_118 = (undefined4)param_13[1];
        uStack_114 = (undefined4)((ulong)param_13[1] >> 0x20);
        uStack_120 = (undefined4)lVar12;
        uStack_11c = (undefined4)((ulong)lVar12 >> 0x20);
        lStack_110 = param_13[2];
        lVar9 = *(long *)(lVar4 + 0x50);
        if (lVar9 == 0) {
code_r0x0165a1bc:
          func_0x00f78af4();
code_r0x0165a1c0:
          uVar7 = func_0x00f78b24();
          func_0x00f78ac0(uVar7,0);
        }
        else {
          if (*(uint *)(lVar9 + 0x18) <= *(uint *)(lVar4 + 0x58)) goto code_r0x0165a1c0;
          lVar9 = *(long *)(lVar9 + (long)(int)*(uint *)(lVar4 + 0x58) * 0x28 + 0x40);
          if (lVar9 == 0) goto code_r0x0165a1bc;
          uStack_178 = (undefined4)extraout_x1;
          uStack_158 = (undefined2)uVar14;
          uStack_156 = (undefined1)param_11;
          uStack_155 = (undefined1)param_12;
          lStack_154 = lVar12 << 0x20;
          uStack_14c = uStack_11c;
          uStack_138 = (undefined1)param_14;
          uStack_137 = 0;
          uStack_135 = 0;
          uStack_134 = (undefined4)uStack_60;
          uStack_130 = uStack_60._4_4_;
          uStack_12c = (undefined1)param_15;
          uStack_129 = 0;
          uStack_12b = 0;
          uStack_174 = extraout_s0;
          uStack_170 = uVar13;
          uStack_16c = uVar17;
          uStack_168 = param_4;
          uStack_164 = param_5;
          uStack_160 = param_6;
          uStack_15c = param_7;
          uStack_148 = uStack_118;
          uStack_144 = uStack_114;
          lStack_140 = lStack_110;
          lVar9 = /*System.Collections.Generic.List<MigrationKartData>$$Add*/ func_0x023fa24c(lVar9,&uStack_178,uRam0000000003d3b2e8);
          if (*(long *)PTR_03a5d648 == lStack_108) {
            return lVar9;
          }
        }
        puVar11 = &Core_Networking_NetworkMigrationManager__SetMigrationState;
        auVar18 = ___stack_chk_fail();
        puVar2 = auStack_180;
        goto code_r0x0165a1d0;
      }
      lVar4 = lVar4 + lVar9;
      lVar9 = lVar9 + 0x28;
      uVar8 = uVar8 + 1;
      *(undefined8 *)(lVar4 + 0x28) = 0;
      *(undefined8 *)(lVar4 + 0x20) = 0;
      *(undefined8 *)(lVar4 + 0x38) = 0;
      *(undefined8 *)(lVar4 + 0x30) = 0;
      *(undefined8 *)(lVar4 + 0x40) = uVar7;
      lVar4 = *(long *)(param_8 + 0x50);
    } while (lVar4 != 0);
  }
  lVar4 = func_0x00f78af4();
LAB_01659fa0:
  *(undefined8 *)(param_8 + 0x18) = 0;
  *(undefined8 *)(param_8 + 0x10) = 0;
  *(undefined8 *)(param_8 + 0x28) = 0;
  *(undefined8 *)(param_8 + 0x20) = 0;
  *(undefined8 *)(param_8 + 0x30) = uVar7;
  return lVar4;
code_r0x0165a1d0:
  lVar9 = auVar18._0_8_;
  *(long *)(puVar2 + -0x50) = lVar4;
  *(long **)(puVar2 + -0x48) = param_13;
  *(undefined8 *)(puVar2 + -0x40) = extraout_x1;
  *(undefined8 *)(puVar2 + -0x38) = uVar14;
  *(undefined8 *)(puVar2 + -0x30) = param_11;
  *(undefined8 *)(puVar2 + -0x28) = param_12;
  *(undefined8 *)(puVar2 + -0x20) = param_14;
  *(long *)(puVar2 + -0x18) = param_15;
  *(undefined1 ***)(puVar2 + -0x10) = ppuVar10;
  *(undefined **)(puVar2 + -8) = puVar11;
  param_12 = 0x3eb5000;
  if ((bRam0000000003eb5824 & 1) == 0) {
    func_0x00f78a20(0x3d32a58);
    func_0x00f78a20(0x3d32a60);
    func_0x00f78a20(0x3d32a68);
    func_0x00f78a20(0x3d3b2e8);
    func_0x00f78a20(0x3d3b2f8);
    bRam0000000003eb5824 = 1;
  }
  *(undefined8 *)(puVar2 + -0x118) = 0;
  *(undefined8 *)(puVar2 + -0x120) = 0;
  *(undefined8 *)(puVar2 + -0x108) = 0;
  *(undefined8 *)(puVar2 + -0x110) = 0;
  *(undefined8 *)(puVar2 + -0x138) = 0;
  *(undefined8 *)(puVar2 + -0x140) = 0;
  *(undefined8 *)(puVar2 + -0x128) = 0;
  *(undefined8 *)(puVar2 + -0x130) = 0;
  *(undefined8 *)(puVar2 + -0x158) = 0;
  *(undefined8 *)(puVar2 + -0x160) = 0;
  *(undefined8 *)(puVar2 + -0x148) = 0;
  *(undefined8 *)(puVar2 + -0x150) = 0;
  uVar7 = *(undefined8 *)(lVar9 + 0x10);
  uVar16 = *(undefined8 *)(lVar9 + 0x28);
  uVar15 = *(undefined8 *)(lVar9 + 0x20);
  *(undefined8 *)(puVar2 + -0xf8) = *(undefined8 *)(lVar9 + 0x18);
  *(undefined8 *)(puVar2 + -0x100) = uVar7;
  *(undefined8 *)(puVar2 + -0xe8) = uVar16;
  *(undefined8 *)(puVar2 + -0xf0) = uVar15;
  *(undefined8 *)(puVar2 + -0xe0) = *(undefined8 *)(lVar9 + 0x30);
  *(undefined1 (*) [16])(puVar2 + -0x180) = auVar18;
  *(undefined1 **)(puVar2 + -0x170) = puVar2 + -0x10;
  *(undefined **)(puVar2 + -0x168) = &UNK_0165a26c;
  param_14 = 0x3eb5000;
  if ((bRam0000000003eb5827 & 1) == 0) {
    func_0x00f78a20(0x3d3b2f0);
    bRam0000000003eb5827 = 1;
  }
  *(undefined8 *)(puVar2 + -0xf8) = 0;
  *(undefined8 *)(puVar2 + -0x100) = 0;
  *(undefined8 *)(puVar2 + -0xe8) = 0;
  *(undefined8 *)(puVar2 + -0xf0) = 0;
  lVar9 = *(long *)(puVar2 + -0xe0);
  if (lVar9 != 0) {
    *(undefined8 *)(puVar2 + -0x180) = *(undefined8 *)(puVar2 + -0x180);
    *(undefined8 *)(puVar2 + -0x178) = *(undefined8 *)(puVar2 + -0x178);
    *(undefined8 *)(puVar2 + -0x170) = *(undefined8 *)(puVar2 + -0x170);
    *(undefined8 *)(puVar2 + -0x168) = *(undefined8 *)(puVar2 + -0x168);
    lVar4 = lVar9;
    if (0 < *(int *)(lVar9 + 0x18)) {
      lVar4 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar9 + 0x10),0,*(int *)(lVar9 + 0x18),0);
      *(undefined4 *)(lVar9 + 0x18) = 0;
    }
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    return lVar4;
  }
  param_15 = func_0x00f78af4();
  *(undefined8 *)(puVar2 + -0x1a0) = 0x3eb5000;
  *(undefined1 **)(puVar2 + -0x198) = puVar2 + -0x100;
  *(undefined1 **)(puVar2 + -400) = puVar2 + -0x170;
  *(undefined **)(puVar2 + -0x188) = &Core_Networking_NetworkMigrationManager__CompleteFrame;
  ppuVar10 = (undefined1 **)(puVar2 + -400);
  if ((*(char *)(param_15 + 0x5c) == '\0') && (*(int *)(param_15 + 0x58) == 0)) {
    lVar9 = *(long *)(param_15 + 0x50);
    if (lVar9 == 0) goto code_r0x0165a534;
    uVar6 = 0;
    uVar5 = 0;
  }
  else {
    lVar9 = *(long *)(param_15 + 0x50);
    if (lVar9 == 0) goto code_r0x0165a534;
    uVar5 = *(uint *)(param_15 + 0x58);
    uVar6 = 0;
    if (uVar5 != *(int *)(lVar9 + 0x18) - 1U) {
      uVar6 = uVar5 + 1;
    }
  }
  if ((*(uint *)(lVar9 + 0x18) <= uVar6) || (*(uint *)(lVar9 + 0x18) <= uVar5)) {
    uVar7 = func_0x00f78b24();
    func_0x00f78ac0(uVar7,0);
code_r0x0165a534:
    lVar4 = func_0x00f78af4();
    *(undefined8 *)(puVar2 + -0x1d0) = param_11;
    *(undefined8 *)(puVar2 + -0x1c8) = 0x3eb5000;
    *(undefined8 *)(puVar2 + -0x1c0) = 0x3eb5000;
    *(long *)(puVar2 + -0x1b8) = param_15;
    *(undefined1 ***)(puVar2 + -0x1b0) = ppuVar10;
    *(undefined **)(puVar2 + -0x1a8) = &Core_Networking_NetworkMigrationManager___ctor;
    if ((bRam0000000003eb5825 & 1) == 0) {
      func_0x00f78a20(0x3d1f210);
      bRam0000000003eb5825 = 1;
    }
    uVar7 = func_0x00f78a34(/*Core.Networking.NetworkMigrationState[]_TypeInfo*/ uRam0000000003d1f210,200);
    *(undefined8 *)(lVar4 + 0x50) = uVar7;
    return lVar4;
  }
  if (*(int *)(lVar9 + 0x20 + (long)(int)uVar6 * 0x28) !=
      *(int *)(lVar9 + 0x20 + (long)(int)uVar5 * 0x28)) {
    uVar6 = uVar5;
  }
  auVar18._8_4_ = uVar6;
  auVar18._0_8_ = param_15;
  auVar18._12_4_ = 0;
  puVar11 = &UNK_0165a4c4;
  puVar2 = puVar2 + -0x1a0;
  goto code_r0x0165a1d0;
}



// ============================================================
// RVA: 0x1659fd0 | Core.Networking.NetworkMigrationManager.SetNetworkState
// ============================================================

/* WARNING: Possible PIC construction at 0x0165a268: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165a378: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165a4c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0165a26c) */
/* WARNING: Removing unreachable block (ram,0x0165a284) */
/* WARNING: Removing unreachable block (ram,0x0165a290) */
/* WARNING: Removing unreachable block (ram,0x0165a2c0) */
/* WARNING: Removing unreachable block (ram,0x0165a2d0) */
/* WARNING: Removing unreachable block (ram,0x0165a304) */
/* WARNING: Removing unreachable block (ram,0x0165a344) */
/* WARNING: Removing unreachable block (ram,0x0165a350) */
/* WARNING: Removing unreachable block (ram,0x0165a37c) */
/* WARNING: Removing unreachable block (ram,0x0165a358) */
/* WARNING: Removing unreachable block (ram,0x0165a3a4) */
/* WARNING: Removing unreachable block (ram,0x0165a360) */
/* WARNING: Removing unreachable block (ram,0x0165a3a8) */
/* WARNING: Removing unreachable block (ram,0x0165a3ac) */
/* WARNING: Removing unreachable block (ram,0x0165a3c0) */
/* WARNING: Removing unreachable block (ram,0x0165a3ec) */
/* WARNING: Removing unreachable block (ram,0x0165a3c8) */
/* WARNING: Removing unreachable block (ram,0x0165a3e4) */
/* WARNING: Removing unreachable block (ram,0x0165a36c) */
/* WARNING: Removing unreachable block (ram,0x0165a314) */
/* WARNING: Removing unreachable block (ram,0x0165a398) */
/* WARNING: Removing unreachable block (ram,0x0165a31c) */
/* WARNING: Removing unreachable block (ram,0x0165a4c4) */
/* WARNING: Removing unreachable block (ram,0x0165a4d8) */
/* WARNING: Removing unreachable block (ram,0x0165a4e4) */
/* WARNING: Removing unreachable block (ram,0x0165a4f4) */
/* WARNING: Removing unreachable block (ram,0x0165a4fc) */

long Core_Networking_NetworkMigrationManager__SetNetworkState
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,long param_8,int *param_9,
               undefined8 param_10,undefined8 param_11,undefined8 param_12,long *param_13,
               undefined8 param_14,long param_15)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  undefined8 unaff_x29;
  undefined1 **ppuVar8;
  undefined *puVar9;
  undefined4 extraout_s0;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_130 [8];
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined2 uStack_108;
  undefined1 uStack_106;
  undefined1 uStack_105;
  long lStack_104;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  long lStack_f0;
  undefined1 uStack_e8;
  undefined2 uStack_e7;
  undefined1 uStack_e5;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined1 uStack_dc;
  undefined2 uStack_db;
  undefined1 uStack_d9;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  long lStack_c0;
  long lStack_b8;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  lVar4 = *(long *)(param_8 + 0x50);
  if (lVar4 == 0) {
    func_0x00f78af4();
  }
  else if (*(uint *)(param_8 + 0x58) < *(uint *)(lVar4 + 0x18)) {
    lVar4 = lVar4 + (long)(int)*(uint *)(param_8 + 0x58) * 0x28;
    uVar3 = *(undefined8 *)param_9;
    uVar12 = *(undefined8 *)(param_9 + 6);
    uVar11 = *(undefined8 *)(param_9 + 4);
    *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(param_9 + 2);
    *(undefined8 *)(lVar4 + 0x20) = uVar3;
    *(undefined8 *)(lVar4 + 0x38) = uVar12;
    *(undefined8 *)(lVar4 + 0x30) = uVar11;
    iVar1 = *param_9;
    if (iVar1 != 7) {
      *(undefined1 *)(param_8 + 0x5c) = 0;
    }
    *(bool *)(param_8 + 0x5d) = iVar1 == 7;
    return param_8;
  }
  uVar3 = func_0x00f78b24();
  lVar4 = func_0x00f78ac0(uVar3,0);
  puStack_18 = &Core_Networking_NetworkMigrationManager__AddKartData;
  ppuVar8 = &puStack_20;
  lStack_b8 = *(long *)PTR_03a5d648;
  puStack_20 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5823 & 1) == 0) {
    puStack_20 = &stack0xfffffffffffffff0;
    func_0x00f78a20(0x3d3b2e8);
    bRam0000000003eb5823 = 1;
  }
  uStack_d4 = 0;
  lVar10 = *param_13;
  uStack_c8 = (undefined4)param_13[1];
  uStack_c4 = (undefined4)((ulong)param_13[1] >> 0x20);
  uStack_d0 = (undefined4)lVar10;
  uStack_cc = (undefined4)((ulong)lVar10 >> 0x20);
  lStack_c0 = param_13[2];
  lVar5 = *(long *)(lVar4 + 0x50);
  if (lVar5 == 0) {
code_r0x0165a1bc:
    func_0x00f78af4();
  }
  else if (*(uint *)(lVar4 + 0x58) < *(uint *)(lVar5 + 0x18)) {
    lVar5 = *(long *)(lVar5 + (long)(int)*(uint *)(lVar4 + 0x58) * 0x28 + 0x40);
    if (lVar5 != 0) {
      uStack_e4 = (undefined4)unaff_x29;
      uStack_e0 = (undefined4)((ulong)unaff_x29 >> 0x20);
      uStack_128 = (undefined4)extraout_x1;
      uStack_108 = (undefined2)param_10;
      uStack_106 = (undefined1)param_11;
      uStack_105 = (undefined1)param_12;
      lStack_104 = lVar10 << 0x20;
      uStack_fc = uStack_cc;
      uStack_e8 = (undefined1)param_14;
      uStack_e7 = 0;
      uStack_e5 = 0;
      uStack_dc = (undefined1)param_15;
      uStack_d9 = 0;
      uStack_db = 0;
      uStack_124 = extraout_s0;
      uStack_120 = param_2;
      uStack_11c = param_3;
      uStack_118 = param_4;
      uStack_114 = param_5;
      uStack_110 = param_6;
      uStack_10c = param_7;
      uStack_f8 = uStack_c8;
      uStack_f4 = uStack_c4;
      lStack_f0 = lStack_c0;
      lVar5 = /*System.Collections.Generic.List<MigrationKartData>$$Add*/ func_0x023fa24c(lVar5,&uStack_128,uRam0000000003d3b2e8);
      if (*(long *)PTR_03a5d648 == lStack_b8) {
        return lVar5;
      }
      goto code_r0x0165a1cc;
    }
    goto code_r0x0165a1bc;
  }
  uVar3 = func_0x00f78b24();
  func_0x00f78ac0(uVar3,0);
code_r0x0165a1cc:
  puVar9 = &Core_Networking_NetworkMigrationManager__SetMigrationState;
  auVar13 = ___stack_chk_fail();
  puVar2 = auStack_130;
  while( true ) {
    lVar5 = auVar13._0_8_;
    *(long *)(puVar2 + -0x50) = lVar4;
    *(long **)(puVar2 + -0x48) = param_13;
    *(undefined8 *)(puVar2 + -0x40) = extraout_x1;
    *(undefined8 *)(puVar2 + -0x38) = param_10;
    *(undefined8 *)(puVar2 + -0x30) = param_11;
    *(undefined8 *)(puVar2 + -0x28) = param_12;
    *(undefined8 *)(puVar2 + -0x20) = param_14;
    *(long *)(puVar2 + -0x18) = param_15;
    *(undefined1 ***)(puVar2 + -0x10) = ppuVar8;
    *(undefined **)(puVar2 + -8) = puVar9;
    param_12 = 0x3eb5000;
    if ((bRam0000000003eb5824 & 1) == 0) {
      func_0x00f78a20(0x3d32a58);
      func_0x00f78a20(0x3d32a60);
      func_0x00f78a20(0x3d32a68);
      func_0x00f78a20(0x3d3b2e8);
      func_0x00f78a20(0x3d3b2f8);
      bRam0000000003eb5824 = 1;
    }
    *(undefined8 *)(puVar2 + -0x118) = 0;
    *(undefined8 *)(puVar2 + -0x120) = 0;
    *(undefined8 *)(puVar2 + -0x108) = 0;
    *(undefined8 *)(puVar2 + -0x110) = 0;
    *(undefined8 *)(puVar2 + -0x138) = 0;
    *(undefined8 *)(puVar2 + -0x140) = 0;
    *(undefined8 *)(puVar2 + -0x128) = 0;
    *(undefined8 *)(puVar2 + -0x130) = 0;
    *(undefined8 *)(puVar2 + -0x158) = 0;
    *(undefined8 *)(puVar2 + -0x160) = 0;
    *(undefined8 *)(puVar2 + -0x148) = 0;
    *(undefined8 *)(puVar2 + -0x150) = 0;
    uVar3 = *(undefined8 *)(lVar5 + 0x10);
    uVar12 = *(undefined8 *)(lVar5 + 0x28);
    uVar11 = *(undefined8 *)(lVar5 + 0x20);
    *(undefined8 *)(puVar2 + -0xf8) = *(undefined8 *)(lVar5 + 0x18);
    *(undefined8 *)(puVar2 + -0x100) = uVar3;
    *(undefined8 *)(puVar2 + -0xe8) = uVar12;
    *(undefined8 *)(puVar2 + -0xf0) = uVar11;
    *(undefined8 *)(puVar2 + -0xe0) = *(undefined8 *)(lVar5 + 0x30);
    *(undefined1 (*) [16])(puVar2 + -0x180) = auVar13;
    *(undefined1 **)(puVar2 + -0x170) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x168) = &UNK_0165a26c;
    param_14 = 0x3eb5000;
    if ((bRam0000000003eb5827 & 1) == 0) {
      func_0x00f78a20(0x3d3b2f0);
      bRam0000000003eb5827 = 1;
    }
    *(undefined8 *)(puVar2 + -0xf8) = 0;
    *(undefined8 *)(puVar2 + -0x100) = 0;
    *(undefined8 *)(puVar2 + -0xe8) = 0;
    *(undefined8 *)(puVar2 + -0xf0) = 0;
    lVar5 = *(long *)(puVar2 + -0xe0);
    if (lVar5 != 0) {
      *(undefined8 *)(puVar2 + -0x180) = *(undefined8 *)(puVar2 + -0x180);
      *(undefined8 *)(puVar2 + -0x178) = *(undefined8 *)(puVar2 + -0x178);
      *(undefined8 *)(puVar2 + -0x170) = *(undefined8 *)(puVar2 + -0x170);
      *(undefined8 *)(puVar2 + -0x168) = *(undefined8 *)(puVar2 + -0x168);
      lVar4 = lVar5;
      if (0 < *(int *)(lVar5 + 0x18)) {
        lVar4 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar5 + 0x10),0,*(int *)(lVar5 + 0x18),0);
        *(undefined4 *)(lVar5 + 0x18) = 0;
      }
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      return lVar4;
    }
    param_15 = func_0x00f78af4();
    *(undefined8 *)(puVar2 + -0x1a0) = 0x3eb5000;
    *(undefined1 **)(puVar2 + -0x198) = puVar2 + -0x100;
    *(undefined1 **)(puVar2 + -400) = puVar2 + -0x170;
    *(undefined **)(puVar2 + -0x188) = &Core_Networking_NetworkMigrationManager__CompleteFrame;
    ppuVar8 = (undefined1 **)(puVar2 + -400);
    if ((*(char *)(param_15 + 0x5c) == '\0') && (*(int *)(param_15 + 0x58) == 0)) {
      lVar5 = *(long *)(param_15 + 0x50);
      if (lVar5 == 0) goto code_r0x0165a534;
      uVar7 = 0;
      uVar6 = 0;
    }
    else {
      lVar5 = *(long *)(param_15 + 0x50);
      if (lVar5 == 0) goto code_r0x0165a534;
      uVar6 = *(uint *)(param_15 + 0x58);
      uVar7 = 0;
      if (uVar6 != *(int *)(lVar5 + 0x18) - 1U) {
        uVar7 = uVar6 + 1;
      }
    }
    if ((*(uint *)(lVar5 + 0x18) <= uVar7) || (*(uint *)(lVar5 + 0x18) <= uVar6)) break;
    if (*(int *)(lVar5 + 0x20 + (long)(int)uVar7 * 0x28) !=
        *(int *)(lVar5 + 0x20 + (long)(int)uVar6 * 0x28)) {
      uVar7 = uVar6;
    }
    auVar13._8_4_ = uVar7;
    auVar13._0_8_ = param_15;
    auVar13._12_4_ = 0;
    puVar9 = &UNK_0165a4c4;
    puVar2 = puVar2 + -0x1a0;
  }
  uVar3 = func_0x00f78b24();
  func_0x00f78ac0(uVar3,0);
code_r0x0165a534:
  lVar4 = func_0x00f78af4();
  *(undefined8 *)(puVar2 + -0x1d0) = param_11;
  *(undefined8 *)(puVar2 + -0x1c8) = 0x3eb5000;
  *(undefined8 *)(puVar2 + -0x1c0) = 0x3eb5000;
  *(long *)(puVar2 + -0x1b8) = param_15;
  *(undefined1 ***)(puVar2 + -0x1b0) = ppuVar8;
  *(undefined **)(puVar2 + -0x1a8) = &Core_Networking_NetworkMigrationManager___ctor;
  if ((bRam0000000003eb5825 & 1) == 0) {
    func_0x00f78a20(0x3d1f210);
    bRam0000000003eb5825 = 1;
  }
  uVar3 = func_0x00f78a34(/*Core.Networking.NetworkMigrationState[]_TypeInfo*/ uRam0000000003d1f210,200);
  *(undefined8 *)(lVar4 + 0x50) = uVar3;
  return lVar4;
}



// ============================================================
// RVA: 0x165a038 | Core.Networking.NetworkMigrationManager.AddKartData
// ============================================================

/* WARNING: Possible PIC construction at 0x0165a268: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165a378: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165a4c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0165a26c) */
/* WARNING: Removing unreachable block (ram,0x0165a284) */
/* WARNING: Removing unreachable block (ram,0x0165a290) */
/* WARNING: Removing unreachable block (ram,0x0165a2c0) */
/* WARNING: Removing unreachable block (ram,0x0165a2d0) */
/* WARNING: Removing unreachable block (ram,0x0165a304) */
/* WARNING: Removing unreachable block (ram,0x0165a344) */
/* WARNING: Removing unreachable block (ram,0x0165a350) */
/* WARNING: Removing unreachable block (ram,0x0165a37c) */
/* WARNING: Removing unreachable block (ram,0x0165a358) */
/* WARNING: Removing unreachable block (ram,0x0165a3a4) */
/* WARNING: Removing unreachable block (ram,0x0165a360) */
/* WARNING: Removing unreachable block (ram,0x0165a3a8) */
/* WARNING: Removing unreachable block (ram,0x0165a3ac) */
/* WARNING: Removing unreachable block (ram,0x0165a3c0) */
/* WARNING: Removing unreachable block (ram,0x0165a3ec) */
/* WARNING: Removing unreachable block (ram,0x0165a3c8) */
/* WARNING: Removing unreachable block (ram,0x0165a3e4) */
/* WARNING: Removing unreachable block (ram,0x0165a36c) */
/* WARNING: Removing unreachable block (ram,0x0165a314) */
/* WARNING: Removing unreachable block (ram,0x0165a398) */
/* WARNING: Removing unreachable block (ram,0x0165a31c) */
/* WARNING: Removing unreachable block (ram,0x0165a4c4) */
/* WARNING: Removing unreachable block (ram,0x0165a4d8) */
/* WARNING: Removing unreachable block (ram,0x0165a4e4) */
/* WARNING: Removing unreachable block (ram,0x0165a4f4) */
/* WARNING: Removing unreachable block (ram,0x0165a4fc) */

long Core_Networking_NetworkMigrationManager__AddKartData
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,long param_8,
               undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
               long *param_13,undefined8 param_14,long param_15,undefined4 param_16)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_120 [8];
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined2 uStack_f8;
  undefined1 uStack_f6;
  undefined1 uStack_f5;
  long lStack_f4;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  long lStack_e0;
  undefined1 uStack_d8;
  undefined2 uStack_d7;
  undefined1 uStack_d5;
  undefined4 uStack_d4;
  undefined1 uStack_cc;
  undefined2 uStack_cb;
  undefined1 uStack_c9;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  long lStack_b0;
  long lStack_a8;
  
  puVar7 = &stack0xfffffffffffffff0;
  lStack_a8 = *(long *)PTR_03a5d648;
  if ((bRam0000000003eb5823 & 1) == 0) {
    func_0x00f78a20(0x3d3b2e8);
    bRam0000000003eb5823 = 1;
  }
  uStack_c4 = 0;
  lVar3 = *param_13;
  uStack_b8 = (undefined4)param_13[1];
  uStack_b4 = (undefined4)((ulong)param_13[1] >> 0x20);
  uStack_c0 = (undefined4)lVar3;
  uStack_bc = (undefined4)((ulong)lVar3 >> 0x20);
  lStack_b0 = param_13[2];
  lVar4 = *(long *)(param_8 + 0x50);
  if (lVar4 == 0) {
LAB_0165a1bc:
    func_0x00f78af4();
  }
  else if (*(uint *)(param_8 + 0x58) < *(uint *)(lVar4 + 0x18)) {
    lVar4 = *(long *)(lVar4 + (long)(int)*(uint *)(param_8 + 0x58) * 0x28 + 0x40);
    if (lVar4 != 0) {
      uStack_118 = (undefined4)param_9;
      uStack_f8 = (undefined2)param_10;
      uStack_f6 = (undefined1)param_11;
      uStack_f5 = (undefined1)param_12;
      lStack_f4 = lVar3 << 0x20;
      uStack_ec = uStack_bc;
      uStack_d8 = (undefined1)param_14;
      uStack_d7 = 0;
      uStack_d5 = 0;
      uStack_d4 = param_16;
      uStack_cc = (undefined1)param_15;
      uStack_c9 = 0;
      uStack_cb = 0;
      uStack_114 = param_1;
      uStack_110 = param_2;
      uStack_10c = param_3;
      uStack_108 = param_4;
      uStack_104 = param_5;
      uStack_100 = param_6;
      uStack_fc = param_7;
      uStack_e8 = uStack_b8;
      uStack_e4 = uStack_b4;
      lStack_e0 = lStack_b0;
      lVar4 = /*System.Collections.Generic.List<MigrationKartData>$$Add*/ func_0x023fa24c(lVar4,&uStack_118,uRam0000000003d3b2e8);
      if (*(long *)PTR_03a5d648 == lStack_a8) {
        return lVar4;
      }
      goto LAB_0165a1cc;
    }
    goto LAB_0165a1bc;
  }
  uVar2 = func_0x00f78b24();
  func_0x00f78ac0(uVar2,0);
LAB_0165a1cc:
  puVar8 = &Core_Networking_NetworkMigrationManager__SetMigrationState;
  auVar11 = ___stack_chk_fail();
  puVar1 = auStack_120;
  while( true ) {
    lVar4 = auVar11._0_8_;
    *(long *)(puVar1 + -0x50) = param_8;
    *(long **)(puVar1 + -0x48) = param_13;
    *(undefined8 *)(puVar1 + -0x40) = param_9;
    *(undefined8 *)(puVar1 + -0x38) = param_10;
    *(undefined8 *)(puVar1 + -0x30) = param_11;
    *(undefined8 *)(puVar1 + -0x28) = param_12;
    *(undefined8 *)(puVar1 + -0x20) = param_14;
    *(long *)(puVar1 + -0x18) = param_15;
    *(undefined1 **)(puVar1 + -0x10) = puVar7;
    *(undefined **)(puVar1 + -8) = puVar8;
    param_12 = 0x3eb5000;
    if ((bRam0000000003eb5824 & 1) == 0) {
      func_0x00f78a20(0x3d32a58);
      func_0x00f78a20(0x3d32a60);
      func_0x00f78a20(0x3d32a68);
      func_0x00f78a20(0x3d3b2e8);
      func_0x00f78a20(0x3d3b2f8);
      bRam0000000003eb5824 = 1;
    }
    *(undefined8 *)(puVar1 + -0x118) = 0;
    *(undefined8 *)(puVar1 + -0x120) = 0;
    *(undefined8 *)(puVar1 + -0x108) = 0;
    *(undefined8 *)(puVar1 + -0x110) = 0;
    *(undefined8 *)(puVar1 + -0x138) = 0;
    *(undefined8 *)(puVar1 + -0x140) = 0;
    *(undefined8 *)(puVar1 + -0x128) = 0;
    *(undefined8 *)(puVar1 + -0x130) = 0;
    *(undefined8 *)(puVar1 + -0x158) = 0;
    *(undefined8 *)(puVar1 + -0x160) = 0;
    *(undefined8 *)(puVar1 + -0x148) = 0;
    *(undefined8 *)(puVar1 + -0x150) = 0;
    uVar2 = *(undefined8 *)(lVar4 + 0x10);
    uVar10 = *(undefined8 *)(lVar4 + 0x28);
    uVar9 = *(undefined8 *)(lVar4 + 0x20);
    *(undefined8 *)(puVar1 + -0xf8) = *(undefined8 *)(lVar4 + 0x18);
    *(undefined8 *)(puVar1 + -0x100) = uVar2;
    *(undefined8 *)(puVar1 + -0xe8) = uVar10;
    *(undefined8 *)(puVar1 + -0xf0) = uVar9;
    *(undefined8 *)(puVar1 + -0xe0) = *(undefined8 *)(lVar4 + 0x30);
    *(undefined1 (*) [16])(puVar1 + -0x180) = auVar11;
    *(undefined1 **)(puVar1 + -0x170) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x168) = &UNK_0165a26c;
    param_14 = 0x3eb5000;
    if ((bRam0000000003eb5827 & 1) == 0) {
      func_0x00f78a20(0x3d3b2f0);
      bRam0000000003eb5827 = 1;
    }
    *(undefined8 *)(puVar1 + -0xf8) = 0;
    *(undefined8 *)(puVar1 + -0x100) = 0;
    *(undefined8 *)(puVar1 + -0xe8) = 0;
    *(undefined8 *)(puVar1 + -0xf0) = 0;
    lVar4 = *(long *)(puVar1 + -0xe0);
    if (lVar4 != 0) {
      *(undefined8 *)(puVar1 + -0x180) = *(undefined8 *)(puVar1 + -0x180);
      *(undefined8 *)(puVar1 + -0x178) = *(undefined8 *)(puVar1 + -0x178);
      *(undefined8 *)(puVar1 + -0x170) = *(undefined8 *)(puVar1 + -0x170);
      *(undefined8 *)(puVar1 + -0x168) = *(undefined8 *)(puVar1 + -0x168);
      lVar3 = lVar4;
      if (0 < *(int *)(lVar4 + 0x18)) {
        lVar3 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar4 + 0x10),0,*(int *)(lVar4 + 0x18),0);
        *(undefined4 *)(lVar4 + 0x18) = 0;
      }
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      return lVar3;
    }
    param_15 = func_0x00f78af4();
    *(undefined8 *)(puVar1 + -0x1a0) = 0x3eb5000;
    *(undefined1 **)(puVar1 + -0x198) = puVar1 + -0x100;
    *(undefined1 **)(puVar1 + -400) = puVar1 + -0x170;
    *(undefined **)(puVar1 + -0x188) = &Core_Networking_NetworkMigrationManager__CompleteFrame;
    puVar7 = puVar1 + -400;
    if ((*(char *)(param_15 + 0x5c) == '\0') && (*(int *)(param_15 + 0x58) == 0)) {
      lVar4 = *(long *)(param_15 + 0x50);
      if (lVar4 == 0) goto code_r0x0165a534;
      uVar6 = 0;
      uVar5 = 0;
    }
    else {
      lVar4 = *(long *)(param_15 + 0x50);
      if (lVar4 == 0) goto code_r0x0165a534;
      uVar5 = *(uint *)(param_15 + 0x58);
      uVar6 = 0;
      if (uVar5 != *(int *)(lVar4 + 0x18) - 1U) {
        uVar6 = uVar5 + 1;
      }
    }
    if ((*(uint *)(lVar4 + 0x18) <= uVar6) || (*(uint *)(lVar4 + 0x18) <= uVar5)) break;
    if (*(int *)(lVar4 + 0x20 + (long)(int)uVar6 * 0x28) !=
        *(int *)(lVar4 + 0x20 + (long)(int)uVar5 * 0x28)) {
      uVar6 = uVar5;
    }
    auVar11._8_4_ = uVar6;
    auVar11._0_8_ = param_15;
    auVar11._12_4_ = 0;
    puVar8 = &UNK_0165a4c4;
    puVar1 = puVar1 + -0x1a0;
  }
  uVar2 = func_0x00f78b24();
  func_0x00f78ac0(uVar2,0);
code_r0x0165a534:
  lVar4 = func_0x00f78af4();
  *(undefined8 *)(puVar1 + -0x1d0) = param_11;
  *(undefined8 *)(puVar1 + -0x1c8) = 0x3eb5000;
  *(undefined8 *)(puVar1 + -0x1c0) = 0x3eb5000;
  *(long *)(puVar1 + -0x1b8) = param_15;
  *(undefined1 **)(puVar1 + -0x1b0) = puVar7;
  *(undefined **)(puVar1 + -0x1a8) = &Core_Networking_NetworkMigrationManager___ctor;
  if ((bRam0000000003eb5825 & 1) == 0) {
    func_0x00f78a20(0x3d1f210);
    bRam0000000003eb5825 = 1;
  }
  uVar2 = func_0x00f78a34(/*Core.Networking.NetworkMigrationState[]_TypeInfo*/ uRam0000000003d1f210,200);
  *(undefined8 *)(lVar4 + 0x50) = uVar2;
  return lVar4;
}



// ============================================================
// RVA: 0x165a1d0 | Core.Networking.NetworkMigrationManager.SetMigrationState
// ============================================================

/* WARNING: Possible PIC construction at 0x0165a268: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165a378: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0165a26c) */
/* WARNING: Removing unreachable block (ram,0x0165a284) */
/* WARNING: Removing unreachable block (ram,0x0165a290) */
/* WARNING: Removing unreachable block (ram,0x0165a2c0) */
/* WARNING: Removing unreachable block (ram,0x0165a2d0) */
/* WARNING: Removing unreachable block (ram,0x0165a304) */
/* WARNING: Removing unreachable block (ram,0x0165a344) */
/* WARNING: Removing unreachable block (ram,0x0165a350) */
/* WARNING: Removing unreachable block (ram,0x0165a37c) */
/* WARNING: Removing unreachable block (ram,0x0165a358) */
/* WARNING: Removing unreachable block (ram,0x0165a3a4) */
/* WARNING: Removing unreachable block (ram,0x0165a360) */
/* WARNING: Removing unreachable block (ram,0x0165a3a8) */
/* WARNING: Removing unreachable block (ram,0x0165a3ac) */
/* WARNING: Removing unreachable block (ram,0x0165a3c0) */
/* WARNING: Removing unreachable block (ram,0x0165a3ec) */
/* WARNING: Removing unreachable block (ram,0x0165a3c8) */
/* WARNING: Removing unreachable block (ram,0x0165a3e4) */
/* WARNING: Removing unreachable block (ram,0x0165a36c) */
/* WARNING: Removing unreachable block (ram,0x0165a314) */
/* WARNING: Removing unreachable block (ram,0x0165a398) */
/* WARNING: Removing unreachable block (ram,0x0165a31c) */

long Core_Networking_NetworkMigrationManager__SetMigrationState(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  undefined8 unaff_x22;
  undefined1 *puVar7;
  undefined8 uVar8;
  long alStack_1d0 [27];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  
  puVar7 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5824 & 1) == 0) {
    func_0x00f78a20(0x3d32a58);
    func_0x00f78a20(0x3d32a60);
    func_0x00f78a20(0x3d32a68);
    func_0x00f78a20(0x3d3b2e8);
    func_0x00f78a20(0x3d3b2f8);
    bRam0000000003eb5824 = 1;
  }
  alStack_1d0[0x17] = 0;
  alStack_1d0[0x16] = 0;
  alStack_1d0[0x19] = 0;
  alStack_1d0[0x18] = 0;
  alStack_1d0[0x13] = 0;
  alStack_1d0[0x12] = 0;
  alStack_1d0[0x15] = 0;
  alStack_1d0[0x14] = 0;
  alStack_1d0[0xf] = 0;
  alStack_1d0[0xe] = 0;
  alStack_1d0[0x11] = 0;
  alStack_1d0[0x10] = 0;
  uStack_f8 = *(undefined8 *)(param_1 + 0x18);
  alStack_1d0[0x1a] = *(undefined8 *)(param_1 + 0x10);
  uStack_e8 = *(undefined8 *)(param_1 + 0x28);
  uStack_f0 = *(undefined8 *)(param_1 + 0x20);
  uStack_e0 = *(undefined8 *)(param_1 + 0x30);
  plVar2 = alStack_1d0 + 0x1a;
  uVar8 = 0x165a26c;
  plVar1 = alStack_1d0 + 0xe;
  while( true ) {
    *(long *)((long)plVar1 + -0x20) = param_1;
    *(undefined8 *)((long)plVar1 + -0x18) = param_2;
    *(undefined1 **)((long)plVar1 + -0x10) = puVar7;
    *(undefined8 *)((long)plVar1 + -8) = uVar8;
    if ((bRam0000000003eb5827 & 1) == 0) {
      func_0x00f78a20(0x3d3b2f0);
      bRam0000000003eb5827 = 1;
    }
    plVar2[1] = 0;
    *plVar2 = 0;
    plVar2[3] = 0;
    plVar2[2] = 0;
    lVar3 = plVar2[4];
    if (lVar3 != 0) {
      *(undefined8 *)((long)plVar1 + -0x20) = *(undefined8 *)((long)plVar1 + -0x20);
      *(undefined8 *)((long)plVar1 + -0x18) = *(undefined8 *)((long)plVar1 + -0x18);
      *(undefined8 *)((long)plVar1 + -0x10) = *(undefined8 *)((long)plVar1 + -0x10);
      *(undefined8 *)((long)plVar1 + -8) = *(undefined8 *)((long)plVar1 + -8);
      lVar4 = lVar3;
      if (0 < *(int *)(lVar3 + 0x18)) {
        lVar4 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar3 + 0x10),0,*(int *)(lVar3 + 0x18),0);
        *(undefined4 *)(lVar3 + 0x18) = 0;
      }
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      return lVar4;
    }
    lVar3 = func_0x00f78af4();
    *(undefined8 *)((long)plVar1 + -0x40) = 0x3eb5000;
    *(long **)((long)plVar1 + -0x38) = plVar2;
    *(undefined1 **)((long)plVar1 + -0x30) = (undefined1 *)((long)plVar1 + -0x10);
    *(undefined **)((long)plVar1 + -0x28) = &Core_Networking_NetworkMigrationManager__CompleteFrame;
    if ((*(char *)(lVar3 + 0x5c) == '\0') && (*(int *)(lVar3 + 0x58) == 0)) {
      lVar4 = *(long *)(lVar3 + 0x50);
      if (lVar4 == 0) goto code_r0x0165a534;
      uVar6 = 0;
      uVar5 = 0;
    }
    else {
      lVar4 = *(long *)(lVar3 + 0x50);
      if (lVar4 == 0) goto code_r0x0165a534;
      uVar5 = *(uint *)(lVar3 + 0x58);
      uVar6 = 0;
      if (uVar5 != *(int *)(lVar4 + 0x18) - 1U) {
        uVar6 = uVar5 + 1;
      }
    }
    if ((*(uint *)(lVar4 + 0x18) <= uVar6) || (*(uint *)(lVar4 + 0x18) <= uVar5)) break;
    if (*(int *)(lVar4 + 0x20 + (long)(int)uVar6 * 0x28) !=
        *(int *)(lVar4 + 0x20 + (long)(int)uVar5 * 0x28)) {
      uVar6 = uVar5;
    }
    Core_Networking_NetworkMigrationManager__SetMigrationState(lVar3,uVar6);
    uVar6 = *(int *)(lVar3 + 0x58) + 1;
    *(uint *)(lVar3 + 0x58) = uVar6;
    lVar4 = *(long *)(lVar3 + 0x50);
    if (lVar4 == 0) goto code_r0x0165a534;
    uVar5 = *(uint *)(lVar4 + 0x18);
    if (uVar6 == uVar5) {
      uVar6 = 0;
      *(undefined4 *)(lVar3 + 0x58) = 0;
      *(undefined1 *)(lVar3 + 0x5c) = *(undefined1 *)(lVar3 + 0x5d);
    }
    if (uVar5 <= uVar6) break;
    plVar2 = (long *)(lVar4 + (long)(int)uVar6 * 0x28 + 0x20);
    puVar7 = *(undefined1 **)((long)plVar1 + -0x30);
    uVar8 = *(undefined8 *)((long)plVar1 + -0x28);
    param_1 = *(long *)((long)plVar1 + -0x40);
    param_2 = *(undefined8 *)((long)plVar1 + -0x38);
    plVar1 = (long *)((long)plVar1 + -0x20);
  }
  uVar8 = func_0x00f78b24();
  func_0x00f78ac0(uVar8,0);
code_r0x0165a534:
  lVar4 = func_0x00f78af4();
  *(undefined8 *)((long)plVar1 + -0x70) = unaff_x22;
  *(undefined8 *)((long)plVar1 + -0x68) = 0x3eb5000;
  *(undefined8 *)((long)plVar1 + -0x60) = 0x3eb5000;
  *(long *)((long)plVar1 + -0x58) = lVar3;
  *(undefined1 **)((long)plVar1 + -0x50) = (undefined1 *)((long)plVar1 + -0x30);
  *(undefined **)((long)plVar1 + -0x48) = &Core_Networking_NetworkMigrationManager___ctor;
  if ((bRam0000000003eb5825 & 1) == 0) {
    func_0x00f78a20(0x3d1f210);
    bRam0000000003eb5825 = 1;
  }
  uVar8 = func_0x00f78a34(/*Core.Networking.NetworkMigrationState[]_TypeInfo*/ uRam0000000003d1f210,200);
  *(undefined8 *)(lVar4 + 0x50) = uVar8;
  return lVar4;
}



// ============================================================
// RVA: 0x165a44c | Core.Networking.NetworkMigrationManager.CompleteFrame
// ============================================================

long Core_Networking_NetworkMigrationManager__CompleteFrame(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    if ((*(char *)(param_1 + 0x5c) == '\0') && (*(int *)(param_1 + 0x58) == 0)) {
      lVar3 = *(long *)(param_1 + 0x50);
      if (lVar3 == 0) goto LAB_0165a534;
      uVar5 = 0;
      uVar4 = 0;
    }
    else {
      lVar3 = *(long *)(param_1 + 0x50);
      if (lVar3 == 0) goto LAB_0165a534;
      uVar4 = *(uint *)(param_1 + 0x58);
      uVar5 = 0;
      if (uVar4 != *(int *)(lVar3 + 0x18) - 1U) {
        uVar5 = uVar4 + 1;
      }
    }
    if ((*(uint *)(lVar3 + 0x18) <= uVar5) || (*(uint *)(lVar3 + 0x18) <= uVar4)) break;
    if (*(int *)(lVar3 + 0x20 + (long)(int)uVar5 * 0x28) !=
        *(int *)(lVar3 + 0x20 + (long)(int)uVar4 * 0x28)) {
      uVar5 = uVar4;
    }
    Core_Networking_NetworkMigrationManager__SetMigrationState(param_1,uVar5);
    uVar5 = *(int *)(param_1 + 0x58) + 1;
    *(uint *)(param_1 + 0x58) = uVar5;
    lVar3 = *(long *)(param_1 + 0x50);
    if (lVar3 == 0) goto LAB_0165a534;
    uVar4 = *(uint *)(lVar3 + 0x18);
    if (uVar5 == uVar4) {
      uVar5 = 0;
      *(undefined4 *)(param_1 + 0x58) = 0;
      *(undefined1 *)(param_1 + 0x5c) = *(undefined1 *)(param_1 + 0x5d);
    }
    if (uVar4 <= uVar5) break;
    lVar3 = lVar3 + (long)(int)uVar5 * 0x28;
    unaff_x19 = (undefined8 *)(lVar3 + 0x20);
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x20 = 0x3eb5000;
    if ((bRam0000000003eb5827 & 1) == 0) {
      func_0x00f78a20(0x3d3b2f0);
      bRam0000000003eb5827 = 1;
    }
    *(undefined8 *)(lVar3 + 0x28) = 0;
    *unaff_x19 = 0;
    *(undefined8 *)(lVar3 + 0x38) = 0;
    *(undefined8 *)(lVar3 + 0x30) = 0;
    lVar3 = *(long *)(lVar3 + 0x40);
    if (lVar3 != 0) {
      *(undefined8 *)((long)register0x00000008 + -0x20) =
           *(undefined8 *)((long)register0x00000008 + -0x20);
      *(undefined8 *)((long)register0x00000008 + -0x18) =
           *(undefined8 *)((long)register0x00000008 + -0x18);
      *(undefined8 *)((long)register0x00000008 + -0x10) =
           *(undefined8 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -8) =
           *(undefined8 *)((long)register0x00000008 + -8);
      lVar2 = lVar3;
      if (0 < *(int *)(lVar3 + 0x18)) {
        lVar2 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar3 + 0x10),0,*(int *)(lVar3 + 0x18),0);
        *(undefined4 *)(lVar3 + 0x18) = 0;
      }
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      return lVar2;
    }
    unaff_x30 = Core_Networking_NetworkMigrationManager__CompleteFrame;
    param_1 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x20);
  }
  uVar1 = func_0x00f78b24();
  func_0x00f78ac0(uVar1,0);
LAB_0165a534:
  lVar3 = func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x38) = param_1;
  *(undefined1 **)((long)register0x00000008 + -0x30) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x28) =
       &Core_Networking_NetworkMigrationManager___ctor;
  if ((bRam0000000003eb5825 & 1) == 0) {
    func_0x00f78a20(0x3d1f210);
    bRam0000000003eb5825 = 1;
  }
  uVar1 = func_0x00f78a34(/*Core.Networking.NetworkMigrationState[]_TypeInfo*/ uRam0000000003d1f210,200);
  *(undefined8 *)(lVar3 + 0x50) = uVar1;
  return lVar3;
}



// ============================================================
// RVA: 0x165a538 | Core.Networking.NetworkMigrationManager..ctor
// ============================================================

undefined1  [16] Core_Networking_NetworkMigrationManager___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb5825 & 1) == 0) {
    func_0x00f78a20(0x3d1f210);
    bRam0000000003eb5825 = 1;
  }
  uVar1 = func_0x00f78a34(/*Core.Networking.NetworkMigrationState[]_TypeInfo*/ uRam0000000003d1f210,200);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



