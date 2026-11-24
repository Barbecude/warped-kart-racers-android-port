// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Networking.NetworkMigrationState

// ============================================================
// RVA: 0x165a3f0 | Core.Networking.NetworkMigrationState.Clear
// ============================================================

long Core_Networking_NetworkMigrationState__Clear(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if ((bRam0000000003eb5827 & 1) == 0) {
      func_0x00f78a20(0x3d3b2f0);
      bRam0000000003eb5827 = 1;
    }
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    lVar1 = param_1[4];
    if (lVar1 != 0) {
      *(undefined8 *)((long)register0x00000008 + -0x20) =
           *(undefined8 *)((long)register0x00000008 + -0x20);
      *(undefined8 *)((long)register0x00000008 + -0x18) =
           *(undefined8 *)((long)register0x00000008 + -0x18);
      *(undefined8 *)((long)register0x00000008 + -0x10) =
           *(undefined8 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -8) =
           *(undefined8 *)((long)register0x00000008 + -8);
      lVar3 = lVar1;
      if (0 < *(int *)(lVar1 + 0x18)) {
        lVar3 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar1 + 0x10),0,*(int *)(lVar1 + 0x18),0);
        *(undefined4 *)(lVar1 + 0x18) = 0;
      }
      *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
      return lVar3;
    }
    lVar1 = func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0x40) = 0x3eb5000;
    *(undefined8 **)((long)register0x00000008 + -0x38) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x30) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x28) =
         Core_Networking_NetworkMigrationManager__CompleteFrame;
    if ((*(char *)(lVar1 + 0x5c) == '\0') && (*(int *)(lVar1 + 0x58) == 0)) {
      lVar3 = *(long *)(lVar1 + 0x50);
      if (lVar3 == 0) goto LAB_0165a534;
      uVar5 = 0;
      uVar4 = 0;
    }
    else {
      lVar3 = *(long *)(lVar1 + 0x50);
      if (lVar3 == 0) goto LAB_0165a534;
      uVar4 = *(uint *)(lVar1 + 0x58);
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
    Core_Networking_NetworkMigrationManager__SetMigrationState(lVar1,uVar5);
    uVar5 = *(int *)(lVar1 + 0x58) + 1;
    *(uint *)(lVar1 + 0x58) = uVar5;
    lVar3 = *(long *)(lVar1 + 0x50);
    if (lVar3 == 0) goto LAB_0165a534;
    uVar4 = *(uint *)(lVar3 + 0x18);
    if (uVar5 == uVar4) {
      uVar5 = 0;
      *(undefined4 *)(lVar1 + 0x58) = 0;
      *(undefined1 *)(lVar1 + 0x5c) = *(undefined1 *)(lVar1 + 0x5d);
    }
    if (uVar4 <= uVar5) break;
    param_1 = (undefined8 *)(lVar3 + (long)(int)uVar5 * 0x28 + 0x20);
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x30);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x28);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x40);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x38);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x20);
  }
  uVar2 = func_0x00f78b24();
  func_0x00f78ac0(uVar2,0);
LAB_0165a534:
  lVar3 = func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x60) = 0x3eb5000;
  *(long *)((long)register0x00000008 + -0x58) = lVar1;
  *(undefined1 **)((long)register0x00000008 + -0x50) =
       (undefined1 *)((long)register0x00000008 + -0x30);
  *(code **)((long)register0x00000008 + -0x48) = Core_Networking_NetworkMigrationManager___ctor;
  if ((bRam0000000003eb5825 & 1) == 0) {
    func_0x00f78a20(0x3d1f210);
    bRam0000000003eb5825 = 1;
  }
  uVar2 = func_0x00f78a34(/*Core.Networking.NetworkMigrationState[]_TypeInfo*/ uRam0000000003d1f210,200);
  *(undefined8 *)(lVar3 + 0x50) = uVar2;
  return lVar3;
}



// ============================================================
// RVA: 0x165a59c | Core.Networking.NetworkMigrationState.Set
// ============================================================

/* WARNING: Possible PIC construction at 0x0165a75c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165a794: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165a7d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165a814: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165a84c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165a884: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165a8c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cce70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccee8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0293870c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016cceec) */
/* WARNING: Removing unreachable block (ram,0x016ccef4) */
/* WARNING: Removing unreachable block (ram,0x016ccefc) */
/* WARNING: Removing unreachable block (ram,0x016cce74) */
/* WARNING: Removing unreachable block (ram,0x016cce7c) */
/* WARNING: Removing unreachable block (ram,0x016cce84) */
/* WARNING: Removing unreachable block (ram,0x0165a8c4) */
/* WARNING: Removing unreachable block (ram,0x0165a94c) */
/* WARNING: Removing unreachable block (ram,0x0165a888) */
/* WARNING: Removing unreachable block (ram,0x0165a850) */
/* WARNING: Removing unreachable block (ram,0x0165a818) */
/* WARNING: Removing unreachable block (ram,0x0165a7d4) */
/* WARNING: Removing unreachable block (ram,0x0165a804) */
/* WARNING: Removing unreachable block (ram,0x0165a798) */
/* WARNING: Removing unreachable block (ram,0x0165a760) */
/* WARNING: Removing unreachable block (ram,0x02938710) */
/* WARNING: Removing unreachable block (ram,0x0293875c) */
/* WARNING: Removing unreachable block (ram,0x02938764) */
/* WARNING: Removing unreachable block (ram,0x02938778) */
/* WARNING: Removing unreachable block (ram,0x02938714) */
/* WARNING: Removing unreachable block (ram,0x0293871c) */
/* WARNING: Removing unreachable block (ram,0x02938730) */
/* WARNING: Removing unreachable block (ram,0x02938784) */

undefined8 *
Core_Networking_NetworkMigrationState__Set
          (undefined4 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  undefined1 **ppuVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  uint *puVar9;
  int *piVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  ulong uVar18;
  dword *pdVar19;
  int iVar20;
  undefined8 uVar21;
  int iVar22;
  long lVar23;
  undefined1 *puVar24;
  undefined1 *unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 **ppuVar25;
  undefined *puVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  ulong auStack_430 [13];
  int aiStack_3c8 [2];
  long alStack_3c0 [26];
  undefined1 *puStack_2f0;
  undefined *puStack_2e8;
  undefined1 *puStack_2e0;
  undefined *puStack_2d8;
  undefined1 *puStack_2d0;
  undefined *puStack_2c8;
  undefined1 *puStack_2c0;
  undefined *puStack_2b8;
  undefined1 *puStack_2b0;
  undefined *puStack_2a8;
  undefined1 *puStack_2a0;
  undefined *puStack_298;
  undefined1 auStack_290 [8];
  undefined1 *puStack_288;
  undefined1 *puStack_280;
  undefined4 *puStack_278;
  undefined1 auStack_1d8 [24];
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 auStack_110 [16];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_cc [29];
  undefined1 auStack_af [12];
  undefined1 auStack_a3 [19];
  
  ppuVar2 = (undefined1 **)auStack_290;
  puVar24 = (undefined1 *)0x3eb5000;
  puStack_278 = param_1;
  uStack_100 = param_2;
  uStack_f8 = param_3;
  if ((bRam0000000003eb5826 & 1) == 0) {
    func_0x00f78a20(0x3d3b2e8);
    func_0x00f78a20(0x3d3b2f0);
    func_0x00f78a20(0x3d3ee50);
    func_0x00f78a20(0x3d3eb68);
    func_0x00f78a20(0x3d3ee40);
    bRam0000000003eb5826 = 1;
  }
  auStack_110._0_8_ = 0;
  auStack_110._8_8_ = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_160 = 0;
  uStack_158 = 0;
  uStack_180 = 0;
  uStack_178 = 0;
  uStack_170 = 0;
  uStack_190 = 0;
  uStack_188 = 0;
  uVar7 = Core_Networking_HostMigration__get_State(&uStack_100);
  uVar4 = Core_Networking_HostMigration__get_TimeStamp(&uStack_100);
  auVar28._8_8_ = auStack_110._8_8_;
  auVar28._0_8_ = auStack_110._0_8_;
  ppuVar25 = (undefined1 **)&stack0xfffffffffffffff0;
  if (param_4 == (long *)0x0) {
LAB_0165aa00:
    puVar9 = (uint *)func_0x00f78af4();
    puStack_298 = &Core_Networking_Vec3__get_X;
    puStack_2a0 = &stack0xfffffffffffffff0;
    if (*(long *)(puVar9 + 2) == 0) {
      piVar10 = (int *)func_0x00f78af4();
      puStack_2a8 = &Core_Networking_Vec3__get_Y;
      if (*(long *)(piVar10 + 2) == 0) {
        puStack_2b0 = (undefined1 *)&puStack_2a0;
        piVar10 = (int *)func_0x00f78af4();
        puStack_2b8 = &Core_Networking_Vec3__get_Z;
        if (*(long *)(piVar10 + 2) == 0) {
          puStack_2c0 = (undefined1 *)&puStack_2b0;
          puVar9 = (uint *)func_0x00f78af4();
          puStack_2c8 = &Core_Networking_Vec4__get_X;
          if (*(long *)(puVar9 + 2) == 0) {
            puStack_2d0 = (undefined1 *)&puStack_2c0;
            piVar10 = (int *)func_0x00f78af4();
            puStack_2d8 = &Core_Networking_Vec4__get_Y;
            if (*(long *)(piVar10 + 2) == 0) {
              puStack_2e0 = (undefined1 *)&puStack_2d0;
              piVar10 = (int *)func_0x00f78af4();
              ppuVar25 = &puStack_2f0;
              puStack_2e8 = &Core_Networking_Vec4__get_Z;
              if (*(long *)(piVar10 + 2) == 0) {
                puStack_2f0 = (undefined1 *)&puStack_2e0;
                piVar10 = (int *)func_0x00f78af4();
                if (*(long *)(piVar10 + 2) == 0) {
                  auVar28 = func_0x00f78af4();
                  puVar16 = auVar28._8_8_;
                  puVar8 = auVar28._0_8_;
                  uVar21 = *puVar16;
                  uVar14 = puVar16[3];
                  uVar13 = puVar16[2];
                  puVar8[1] = puVar16[1];
                  *puVar8 = uVar21;
                  puVar8[3] = uVar14;
                  puVar8[2] = uVar13;
                  return puVar8;
                }
                auVar27._4_4_ = 0;
                auVar27._0_4_ = *piVar10 + 0xc;
                auVar27._8_8_ = *(long *)(piVar10 + 2);
                ppuVar2 = &puStack_2f0;
                puVar26 = &Core_Networking_Vec4__get_W;
              }
              else {
                auVar27._4_4_ = 0;
                auVar27._0_4_ = *piVar10 + 8;
                auVar27._8_8_ = *(long *)(piVar10 + 2);
                ppuVar2 = &puStack_2e0;
                puVar26 = &Core_Networking_Vec4__get_Z;
                ppuVar25 = &puStack_2e0;
                puStack_2f0 = (undefined1 *)&puStack_2e0;
              }
            }
            else {
              auVar27._4_4_ = 0;
              auVar27._0_4_ = *piVar10 + 4;
              auVar27._8_8_ = *(long *)(piVar10 + 2);
              ppuVar2 = &puStack_2d0;
              puVar26 = &Core_Networking_Vec4__get_Y;
              ppuVar25 = &puStack_2d0;
              puStack_2e0 = (undefined1 *)&puStack_2d0;
            }
          }
          else {
            auVar27._4_4_ = 0;
            auVar27._0_4_ = *puVar9;
            auVar27._8_8_ = *(long *)(puVar9 + 2);
            ppuVar2 = &puStack_2c0;
            puVar26 = &Core_Networking_Vec4__get_X;
            ppuVar25 = &puStack_2c0;
            puStack_2d0 = (undefined1 *)&puStack_2c0;
          }
        }
        else {
          auVar27._4_4_ = 0;
          auVar27._0_4_ = *piVar10 + 8;
          auVar27._8_8_ = *(long *)(piVar10 + 2);
          ppuVar2 = &puStack_2b0;
          puVar26 = &Core_Networking_Vec3__get_Z;
          ppuVar25 = &puStack_2b0;
          puStack_2c0 = (undefined1 *)&puStack_2b0;
        }
      }
      else {
        auVar27._4_4_ = 0;
        auVar27._0_4_ = *piVar10 + 4;
        auVar27._8_8_ = *(long *)(piVar10 + 2);
        ppuVar2 = &puStack_2a0;
        puVar26 = &Core_Networking_Vec3__get_Y;
        ppuVar25 = &puStack_2a0;
        puStack_2b0 = (undefined1 *)&puStack_2a0;
      }
    }
    else {
      auVar27._4_4_ = 0;
      auVar27._0_4_ = *puVar9;
      auVar27._8_8_ = *(long *)(puVar9 + 2);
      ppuVar2 = (undefined1 **)auStack_290;
      puVar26 = &Core_Networking_Vec3__get_X;
    }
  }
  else {
    lVar23 = param_4[0x36];
    lVar12 = param_4[0x34];
    *puStack_278 = (int)uVar7;
    puStack_278[1] = 0;
    puStack_278[2] = uVar4;
    *(undefined1 *)(puStack_278 + 3) = 1;
    *(undefined2 *)((long)puStack_278 + 0xd) = 0;
    *(undefined1 *)((long)puStack_278 + 0xf) = 0;
    puStack_278[4] = (int)lVar12;
    puStack_278[5] = 0;
    *(long *)(puStack_278 + 6) = lVar23;
    auStack_110 = auVar28;
    if (*(long *)(puStack_278 + 8) == 0) goto LAB_0165aa00;
    /*System.Collections.Generic.List<MigrationKartData>$$Clear*/ func_0x023fa5a4(*(long *)(puStack_278 + 8),uRam0000000003d3b2f0);
    puVar8 = (undefined8 *)Core_Networking_HostMigration__get_CarsLength(&uStack_100);
    if ((int)puVar8 < 1) {
      return puVar8;
    }
    param_4 = (long *)0x0;
    unaff_x22 = auStack_1d8;
    unaff_x23 = 0x3d3ee40;
    unaff_x24 = 0x3d3ee50;
    puVar24 = auStack_cc;
    puStack_280 = auStack_af;
    puStack_288 = auStack_a3;
    Core_Networking_HostMigration__Cars(&uStack_1a8,&uStack_100,0);
    uStack_128 = uStack_1a0;
    uStack_130 = uStack_1a8;
    uStack_120 = uStack_198;
    auStack_110 = /*System.Nullable<MigrationCar>$$get_Value*/ func_0x0265cd38(&uStack_130,uRam0000000003d3eb68);
    uVar7 = *(ulong *)(puStack_278 + 8);
    Core_Networking_MigrationCar__get_Position(&uStack_1c0,auStack_110);
    uStack_148 = uStack_1b8;
    uStack_150 = uStack_1c0;
    uStack_140 = uStack_1b0;
    auVar27 = /*System.Nullable<Vec3>$$get_Value*/ func_0x0266411c(&uStack_150,uRam0000000003d3ee40);
    if (auVar27._8_8_ == 0) goto LAB_0165aa00;
    puVar26 = (undefined *)0x165a760;
  }
  lVar12 = auVar27._8_8_;
  *(long **)((long)ppuVar2 + -0x20) = param_4;
  *(undefined1 **)((long)ppuVar2 + -0x18) = puVar24;
  *(undefined1 ***)((long)ppuVar2 + -0x10) = ppuVar25;
  *(undefined **)((long)ppuVar2 + -8) = puVar26;
  puVar24 = (undefined1 *)((long)ppuVar2 + -0x10);
  uVar4 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar12,auVar27._0_8_,4);
  uVar11 = *(ulong *)(lVar12 + 0x30);
  if (uVar11 == 0) {
    func_0x00f78af4();
  }
  else if (*(int *)(uVar11 + 0x18) != 0) {
    *(undefined4 *)(uVar11 + 0x20) = uVar4;
    uVar18 = *(ulong *)(lVar12 + 0x28);
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar11;
    uVar21 = 0;
    puVar26 = &UNK_016cce74;
    puVar3 = (undefined1 *)((long)ppuVar2 + -0x20);
    uVar11 = 4;
    lVar23 = lVar12;
    goto code_r0x029387b8;
  }
  uVar21 = func_0x00f78b24();
  lVar23 = func_0x00f78ac0(uVar21,0);
  *(long **)((long)ppuVar2 + -0x40) = param_4;
  *(long *)((long)ppuVar2 + -0x38) = lVar12;
  *(undefined1 **)((long)ppuVar2 + -0x30) = puVar24;
  *(undefined **)((long)ppuVar2 + -0x28) = &FlatBuffers_ByteBuffer__GetDouble;
  puVar24 = (undefined1 *)((long)ppuVar2 + -0x30);
  pdVar19 = &MACH_HEADER.cpusubtype;
  uVar21 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634();
  uVar11 = *(ulong *)(lVar23 + 0x40);
  if (uVar11 == 0) {
    func_0x00f78af4();
  }
  else if (*(int *)(uVar11 + 0x18) != 0) {
    *(undefined8 *)(uVar11 + 0x20) = uVar21;
    uVar18 = *(ulong *)(lVar23 + 0x38);
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar11;
    uVar21 = 0;
    puVar26 = &UNK_016cceec;
    puVar3 = (undefined1 *)((long)ppuVar2 + -0x40);
    uVar11 = 8;
    goto code_r0x029387b8;
  }
  uVar21 = func_0x00f78b24();
  auVar28 = func_0x00f78ac0(uVar21,0);
  lVar12 = auVar28._0_8_;
  *(undefined1 **)((long)ppuVar2 + -0x70) = unaff_x22;
  *(ulong *)((long)ppuVar2 + -0x68) = uVar7;
  *(long **)((long)ppuVar2 + -0x60) = param_4;
  *(long *)((long)ppuVar2 + -0x58) = lVar23;
  *(undefined1 **)((long)ppuVar2 + -0x50) = puVar24;
  *(undefined **)((long)ppuVar2 + -0x48) = &FlatBuffers_ByteBuffer__PutByteArray;
  uVar21 = 0x3eb5000;
  if ((bRam0000000003eb5cd1 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    bRam0000000003eb5cd1 = 1;
  }
  if (pdVar19 == (dword *)0x0) {
code_r0x016ccfdc:
    func_0x00f78af4();
code_r0x016ccfe0:
    func_0x00f78a24(0x3d1fce8);
    uVar14 = func_0x00f78aec();
    uVar13 = 0x3d6a458;
code_r0x016cd01c:
    uVar13 = func_0x00f78a24(uVar13);
    uVar15 = 0;
    /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar14,uVar13);
  }
  else {
    if (*(long *)(pdVar19 + 6) == 0) goto code_r0x016ccfe0;
    if ((int)*(long *)(pdVar19 + 6) < auVar28._8_4_) {
      func_0x00f78a24(0x3d1fce8);
      uVar14 = func_0x00f78aec();
      uVar13 = 0x3d72a70;
      goto code_r0x016cd01c;
    }
    uVar21 = 0x3d201a0;
    if (((*(ushort *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(char **)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xb8) != '\0') {
      /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar12,0,auVar28._8_8_);
      if (*(long *)(lVar12 + 0x10) != 0) {
        uVar18 = *(ulong *)(*(long *)(lVar12 + 0x10) + 0x10);
        auVar29._8_8_ = 0;
        auVar29._0_8_ = pdVar19;
        uVar21 = 0;
        puVar24 = *(undefined1 **)((long)ppuVar2 + -0x50);
        puVar26 = *(undefined **)((long)ppuVar2 + -0x48);
        param_4 = *(long **)((long)ppuVar2 + -0x60);
        lVar23 = *(long *)((long)ppuVar2 + -0x58);
        unaff_x22 = *(undefined1 **)((long)ppuVar2 + -0x70);
        uVar7 = *(ulong *)((long)ppuVar2 + -0x68);
        puVar3 = (undefined1 *)((long)ppuVar2 + -0x40);
        uVar11 = auVar28._8_8_;
        goto code_r0x029387b8;
      }
      goto code_r0x016ccfdc;
    }
    func_0x00f78a24(0x3d238c8);
    uVar14 = func_0x00f78aec();
    uVar13 = func_0x00f78a24(0x3d69698);
    uVar15 = 0;
    /*System.NotImplementedException$$.ctor*/ func_0x02950308(uVar14,uVar13);
  }
  uVar13 = func_0x00f78a24(0x3d52cf8);
  auVar28 = func_0x00f78ac0(uVar14,uVar13);
  uVar7 = auVar28._8_8_;
  lVar23 = auVar28._0_8_;
  puVar3 = (undefined1 *)((long)ppuVar2 + -0xa0);
  *(undefined8 *)((long)ppuVar2 + -0xa0) = uVar21;
  *(long *)((long)ppuVar2 + -0x98) = lVar12;
  *(dword **)((long)ppuVar2 + -0x90) = pdVar19;
  *(undefined8 *)((long)ppuVar2 + -0x88) = uVar14;
  *(undefined1 **)((long)ppuVar2 + -0x80) = (undefined1 *)((long)ppuVar2 + -0x50);
  *(undefined **)((long)ppuVar2 + -0x78) = &FlatBuffers_ByteBuffer__PutIntPtr;
  uVar21 = 0x3eb5000;
  if ((bRam0000000003eb5cd2 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    func_0x00f78a20(0x3d23210);
    bRam0000000003eb5cd2 = 1;
  }
  if (auVar28._8_4_ == 0) {
    func_0x00f78a24(0x3d1fce8);
    uVar7 = func_0x00f78aec();
    uVar13 = func_0x00f78a24(0x3d6a458);
    uVar11 = 0;
    /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar7,uVar13);
code_r0x016cd1bc:
    uVar13 = func_0x00f78a24(0x3d52d00);
    func_0x00f78ac0(uVar7,uVar13);
  }
  else {
    uVar21 = 0x3d201a0;
    if (((*(ushort *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(char **)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xb8) == '\0') {
      func_0x00f78a24(0x3d238c8);
      uVar7 = func_0x00f78aec();
      uVar13 = func_0x00f78a24(0x3d69698);
      uVar11 = 0;
      /*System.NotImplementedException$$.ctor*/ func_0x02950308(uVar7,uVar13);
      goto code_r0x016cd1bc;
    }
    uVar11 = uVar7;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar23,0);
    if (*(long *)(lVar23 + 0x10) != 0) {
      puVar8 = *(undefined8 **)(*(long *)(lVar23 + 0x10) + 0x10);
      if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      *(ulong *)((long)ppuVar2 + -0xb0) = unaff_x24;
      *(ulong *)((long)ppuVar2 + -0xa8) = unaff_x23;
      *(undefined8 *)((long)ppuVar2 + -0xa0) = *(undefined8 *)((long)ppuVar2 + -0xa0);
      *(undefined8 *)((long)ppuVar2 + -0x98) = *(undefined8 *)((long)ppuVar2 + -0x98);
      *(undefined8 *)((long)ppuVar2 + -0x90) = *(undefined8 *)((long)ppuVar2 + -0x90);
      *(undefined8 *)((long)ppuVar2 + -0x88) = *(undefined8 *)((long)ppuVar2 + -0x88);
      *(undefined8 *)((long)ppuVar2 + -0x80) = *(undefined8 *)((long)ppuVar2 + -0x80);
      *(undefined8 *)((long)ppuVar2 + -0x78) = *(undefined8 *)((long)ppuVar2 + -0x78);
      if ((bRam0000000003eb9f54 & 1) == 0) {
        func_0x00f78a20(0x3d23210);
        bRam0000000003eb9f54 = 1;
      }
      if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      *(undefined8 *)((long)ppuVar2 + -0xb0) = *(undefined8 *)((long)ppuVar2 + -0xb0);
      *(undefined8 *)((long)ppuVar2 + -0xa8) = *(undefined8 *)((long)ppuVar2 + -0xa8);
      *(undefined8 *)((long)ppuVar2 + -0xa0) = *(undefined8 *)((long)ppuVar2 + -0xa0);
      *(undefined8 *)((long)ppuVar2 + -0x98) = *(undefined8 *)((long)ppuVar2 + -0x98);
      *(undefined8 *)((long)ppuVar2 + -0x90) = *(undefined8 *)((long)ppuVar2 + -0x90);
      *(undefined8 *)((long)ppuVar2 + -0x88) = *(undefined8 *)((long)ppuVar2 + -0x88);
      *(undefined8 *)((long)ppuVar2 + -0x80) = *(undefined8 *)((long)ppuVar2 + -0x80);
      *(undefined8 *)((long)ppuVar2 + -0x78) = *(undefined8 *)((long)ppuVar2 + -0x78);
      uVar21 = func_0x00f76cf0(*puVar8);
      uVar13 = func_0x00faf4d8(puVar8,uVar21,0);
                    /* WARNING: Could not recover jumptable at 0x033034a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar8 = (undefined8 *)(*(code *)PTR_DAT_03c8cea0)(uVar13,uVar15,(int)uVar21 * auVar28._8_4_);
      return puVar8;
    }
  }
  auVar28 = func_0x00f78af4();
  uVar18 = auVar28._8_8_;
  lVar12 = auVar28._0_8_;
  *(undefined8 *)((long)ppuVar2 + -0xd0) = uVar21;
  *(long *)((long)ppuVar2 + -200) = lVar23;
  *(undefined8 *)((long)ppuVar2 + -0xc0) = uVar15;
  *(ulong *)((long)ppuVar2 + -0xb8) = uVar7;
  *(undefined1 **)((long)ppuVar2 + -0xb0) = (undefined1 *)((long)ppuVar2 + -0x80);
  *(undefined **)((long)ppuVar2 + -0xa8) = &FlatBuffers_ByteBuffer__CopyByteArray;
  uVar21 = 0x3eb5000;
  if ((bRam0000000003eb5cd3 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    bRam0000000003eb5cd3 = 1;
  }
  if (uVar18 == 0) {
code_r0x016cd29c:
    func_0x00f78af4();
  }
  else if ((int)uVar11 <= *(int *)(uVar18 + 0x18)) {
    uVar21 = 0x3d201a0;
    if (((*(ushort *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(char **)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xb8) == '\0') goto code_r0x016cd33c;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar12,0,uVar11);
    if (*(long *)(lVar12 + 0x10) != 0) {
      auVar29._8_4_ = *(undefined4 *)(lVar12 + 0x18);
      auVar29._0_8_ = *(undefined8 *)(*(long *)(lVar12 + 0x10) + 0x10);
      auVar29._12_4_ = 0;
      uVar21 = 0;
      puVar24 = *(undefined1 **)((long)ppuVar2 + -0xb0);
      puVar26 = *(undefined **)((long)ppuVar2 + -0xa8);
      param_4 = *(long **)((long)ppuVar2 + -0xc0);
      lVar23 = *(long *)((long)ppuVar2 + -0xb8);
      unaff_x22 = *(undefined1 **)((long)ppuVar2 + -0xd0);
      uVar7 = *(ulong *)((long)ppuVar2 + -200);
code_r0x029387b8:
      do {
        puVar17 = auVar29._8_8_;
        lVar12 = auVar29._0_8_;
        *(ulong *)(puVar3 + -0x40) = unaff_x24;
        *(ulong *)(puVar3 + -0x38) = unaff_x23;
        *(undefined1 **)(puVar3 + -0x30) = unaff_x22;
        *(ulong *)(puVar3 + -0x28) = uVar7;
        *(long **)(puVar3 + -0x20) = param_4;
        *(long *)(puVar3 + -0x18) = lVar23;
        *(undefined1 **)(puVar3 + -0x10) = puVar24;
        *(undefined **)(puVar3 + -8) = puVar26;
        if (lVar12 == 0) {
          func_0x00f78a24(0x3d1fcf0);
          uVar13 = func_0x00f78aec();
          uVar21 = 0x3d7b990;
code_r0x02938884:
          uVar21 = func_0x00f78a24(uVar21);
          /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar13,uVar21,0);
          uVar21 = func_0x00f78a24(0x3d52be0);
          func_0x00f78ac0(uVar13,uVar21);
code_r0x029388b0:
          uVar21 = func_0x00f78a24(0x3d70548);
          uVar13 = /*Locale$$GetText*/ func_0x02af42b4(uVar21,0);
          func_0x00f78a24(0x3d1fcf8);
          uVar14 = func_0x00f78aec();
          uVar21 = 0x3d7b998;
code_r0x02938954:
          auVar29._8_8_ = unaff_x22;
          auVar29._0_8_ = unaff_x23;
          uVar15 = func_0x00f78a24(uVar21);
          uVar21 = 0;
          /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar14,uVar15,uVar13);
        }
        else {
          uVar7 = uVar18;
          if (uVar18 == 0) {
            func_0x00f78a24(0x3d1fcf0);
            uVar13 = func_0x00f78aec();
            uVar21 = 0x3d78c30;
            goto code_r0x02938884;
          }
          unaff_x22 = puVar17;
          if (auVar29._8_4_ < 0) goto code_r0x029388b0;
          iVar20 = (int)uVar21;
          if (iVar20 < 0) {
            uVar21 = func_0x00f78a24(0x3d70548);
            uVar13 = /*Locale$$GetText*/ func_0x02af42b4(uVar21,0);
            func_0x00f78a24(0x3d1fcf8);
            uVar14 = func_0x00f78aec();
            uVar21 = 0x3d78c38;
            goto code_r0x02938954;
          }
          iVar22 = (int)uVar11;
          if (iVar22 < 0) {
            uVar21 = func_0x00f78a24(0x3d70548);
            uVar13 = /*Locale$$GetText*/ func_0x02af42b4(uVar21,0);
            func_0x00f78a24(0x3d1fcf8);
            uVar14 = func_0x00f78aec();
            uVar21 = 0x3d78638;
            goto code_r0x02938954;
          }
          puVar8 = (undefined8 *)func_0x00f836d8(lVar12,puVar17,uVar18);
          if (((ulong)puVar8 & 1) != 0) {
            return puVar8;
          }
          iVar5 = /*System.Buffer$$ByteLength*/ func_0x0294274c(lVar12);
          if (auVar29._8_4_ <= iVar5 - iVar22) {
            puVar8 = (undefined8 *)/*System.Buffer$$ByteLength*/ func_0x0294274c(uVar18);
            if (iVar20 <= (int)puVar8 - iVar22) {
              return puVar8;
            }
          }
          uVar13 = func_0x00f78a24(0x3d70ad8);
          uVar13 = /*Locale$$GetText*/ func_0x02af42b4(uVar13,0);
          func_0x00f78a24(0x3d1fce8);
          uVar14 = func_0x00f78aec();
          /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar14,uVar13,0);
        }
        uVar15 = func_0x00f78a24(0x3d52be0);
        uVar6 = func_0x00f78ac0(uVar14,uVar15);
        *(long *)(puVar3 + -0x70) = auVar29._8_8_;
        *(ulong *)(puVar3 + -0x68) = uVar7;
        *(undefined8 *)(puVar3 + -0x60) = uVar14;
        *(undefined8 *)(puVar3 + -0x58) = uVar13;
        *(undefined1 **)(puVar3 + -0x50) = puVar3 + -0x10;
        *(undefined **)(puVar3 + -0x48) = &Mono_Math_BigInteger__GenerateRandom;
        if ((bRam0000000003eb8f4c & 1) == 0) {
          func_0x00f78a20(0x3d20078);
          bRam0000000003eb8f4c = 1;
        }
        if (((*(ushort *)(/*Mono.Math.BigInteger_TypeInfo*/ lRam0000000003d20078 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Mono.Math.BigInteger_TypeInfo*/ lRam0000000003d20078 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        param_4 = (long *)/*Mono.Math.BigInteger$$get_Rng*/ func_0x02938598();
        *(ulong *)(puVar3 + -0x80) = unaff_x24;
        *(long *)(puVar3 + -0x78) = auVar29._0_8_;
        *(undefined8 *)(puVar3 + -0x70) = *(undefined8 *)(puVar3 + -0x70);
        *(undefined8 *)(puVar3 + -0x68) = *(undefined8 *)(puVar3 + -0x68);
        *(undefined8 *)(puVar3 + -0x60) = *(undefined8 *)(puVar3 + -0x60);
        *(undefined8 *)(puVar3 + -0x58) = *(undefined8 *)(puVar3 + -0x58);
        *(undefined8 *)(puVar3 + -0x50) = *(undefined8 *)(puVar3 + -0x50);
        *(undefined8 *)(puVar3 + -0x48) = *(undefined8 *)(puVar3 + -0x48);
        puVar24 = puVar3 + -0x50;
        if ((bRam0000000003eb8f4b & 1) == 0) {
          func_0x00f78a20(0x3d20078);
          func_0x00f78a20(0x3d1eda0);
          bRam0000000003eb8f4b = 1;
        }
        uVar1 = (int)uVar6 >> 5;
        unaff_x23 = (ulong)(uVar6 & 0x1f);
        if ((uVar6 & 0x1f) != 0) {
          uVar1 = uVar1 + 1;
        }
        unaff_x24 = (ulong)uVar1;
        lVar23 = func_0x00f78aec(/*Mono.Math.BigInteger_TypeInfo*/ lRam0000000003d20078);
        uVar18 = (ulong)(uVar1 + 1);
        /*Mono.Math.BigInteger$$.ctor*/ func_0x029379ec();
        uVar7 = (ulong)(uVar1 << 2);
        unaff_x22 = (undefined1 *)func_0x00f78a34(/*byte[]_TypeInfo*/ uRam0000000003d1eda0,uVar7);
        puVar17 = (undefined1 *)0x3d20078;
        if (param_4 == (long *)0x0) {
code_r0x029387a8:
          unaff_x22 = puVar17;
          func_0x00f78af4();
          uVar13 = func_0x00f78b24();
          puVar26 = &System_Buffer__BlockCopy;
          auVar29 = func_0x00f78ac0(uVar13,0);
          puVar3 = puVar3 + -0x80;
          goto code_r0x029387b8;
        }
        uVar18 = *(ulong *)(*param_4 + 0x1a0);
        (**(code **)(*param_4 + 0x198))(param_4,unaff_x22);
        puVar17 = unaff_x22;
        if (lVar23 == 0) goto code_r0x029387a8;
        uVar18 = *(ulong *)(lVar23 + 0x18);
        auVar29._8_8_ = 0;
        auVar29._0_8_ = unaff_x22;
        uVar21 = 0;
        puVar26 = &UNK_02938710;
        puVar3 = puVar3 + -0x80;
        uVar11 = uVar7;
      } while( true );
    }
    goto code_r0x016cd29c;
  }
  *(int *)((long)ppuVar2 + -0xd4) = (int)uVar11;
  uVar13 = func_0x00f78a24(0x3d22910);
  lVar12 = func_0x00f78ae0(uVar13,(undefined1 *)((long)ppuVar2 + -0xd4));
  func_0x00055e5c(uVar18);
  *(int *)((long)ppuVar2 + -0xd8) = (int)*(undefined8 *)(uVar18 + 0x18);
  uVar13 = func_0x00f78a24(0x3d22910);
  uVar13 = func_0x00f78ae0(uVar13,(undefined1 *)((long)ppuVar2 + -0xd8));
  uVar14 = func_0x00f78a24(0x3d72a68);
  uVar13 = /*System.String$$Format*/ func_0x029bcac4(uVar14,lVar12,uVar13,0);
  func_0x00f78a24(0x3d1fce8);
  uVar11 = func_0x00f78aec();
  /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar11,uVar13,0);
  uVar13 = func_0x00f78a24(0x3d52cf0);
  func_0x00f78ac0(uVar11,uVar13);
code_r0x016cd33c:
  func_0x00f78a24(0x3d238c8);
  uVar13 = func_0x00f78aec();
  uVar14 = func_0x00f78a24(0x3d69698);
  /*System.NotImplementedException$$.ctor*/ func_0x02950308(uVar13,uVar14,0);
  uVar14 = func_0x00f78a24(0x3d52cf0);
  func_0x00f78ac0(uVar13,uVar14);
  *(undefined8 *)((long)ppuVar2 + -0x140) = unaff_x28;
  *(undefined8 *)((long)ppuVar2 + -0x138) = unaff_x27;
  *(undefined8 *)((long)ppuVar2 + -0x130) = unaff_x26;
  *(undefined8 *)((long)ppuVar2 + -0x128) = unaff_x25;
  *(ulong *)((long)ppuVar2 + -0x120) = unaff_x24;
  *(ulong *)((long)ppuVar2 + -0x118) = unaff_x23;
  *(undefined8 *)((long)ppuVar2 + -0x110) = uVar21;
  *(long *)((long)ppuVar2 + -0x108) = lVar12;
  *(ulong *)((long)ppuVar2 + -0x100) = uVar11;
  *(undefined8 *)((long)ppuVar2 + -0xf8) = uVar13;
  *(undefined1 **)((long)ppuVar2 + -0xf0) = (undefined1 *)((long)ppuVar2 + -0xb0);
  *(undefined **)((long)ppuVar2 + -0xe8) = &FlatBuffers_ByteBuffer___cctor;
  if ((bRam0000000003eb5cd4 & 1) == 0) {
    func_0x00f78a20(0x3d19080);
    func_0x00f78a20(0x3d203b0);
    func_0x00f78a20(0x3d190e0);
    func_0x00f78a20(0x3d30168);
    func_0x00f78a20(0x3d30160);
    func_0x00f78a20(0x3d1c590);
    func_0x00f78a20(0x3d19388);
    func_0x00f78a20(0x3d198b0);
    func_0x00f78a20(0x3d198c0);
    func_0x00f78a20(0x3d198d0);
    func_0x00f78a20(0x3d19d88);
    func_0x00f78a20(0x3d19e28);
    func_0x00f78a20(0x3d25458);
    func_0x00f78a20(0x3d1a0a8);
    func_0x00f78a20(0x3d1a0b8);
    func_0x00f78a20(0x3d1a0c8);
    bRam0000000003eb5cd4 = 1;
  }
  lVar12 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<Type, int>_TypeInfo*/ uRam0000000003d1c590);
  /*System.Collections.Generic.Dictionary<XmlQualifiedName, int>$$.ctor*/ func_0x01ece19c(lVar12,uRam0000000003d30160);
  uVar21 = /*bool_var*/ uRam0000000003d19080;
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar21,0);
  if (lVar12 == 0) {
    lVar12 = func_0x00f78af4();
    return *(undefined8 **)(lVar12 + 0x10);
  }
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar12,uVar21,1,uRam0000000003d30168);
  uVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*float_var*/ uRam0000000003d19e28,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar12,uVar21,4,uRam0000000003d30168);
  uVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*double_var*/ uRam0000000003d19388,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar12,uVar21,8,uRam0000000003d30168);
  uVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*sbyte_var*/ uRam0000000003d19d88,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar12,uVar21,1,uRam0000000003d30168);
  uVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*byte_var*/ uRam0000000003d190e0,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar12,uVar21,1,uRam0000000003d30168);
  uVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*short_var*/ uRam0000000003d198b0,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar12,uVar21,2,uRam0000000003d30168);
  uVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*ushort_var*/ uRam0000000003d1a0a8,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar12,uVar21,2,uRam0000000003d30168);
  uVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*int_var*/ uRam0000000003d198c0,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar12,uVar21,4,uRam0000000003d30168);
  uVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*uint_var*/ uRam0000000003d1a0b8,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar12,uVar21,4,uRam0000000003d30168);
  uVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*ulong_var*/ uRam0000000003d1a0c8,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar12,uVar21,8,uRam0000000003d30168);
  uVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*long_var*/ uRam0000000003d198d0,0);
  puVar8 = (undefined8 *)/*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar12,uVar21,8,uRam0000000003d30168);
  **(long **)(/*FlatBuffers.ByteBuffer_TypeInfo*/ lRam0000000003d203b0 + 0xb8) = lVar12;
  return puVar8;
}



// ============================================================
// RVA: 0x165ab30 | Core.Networking.NetworkMigrationState.SetState
// ============================================================

void Core_Networking_NetworkMigrationState__SetState(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  return;
}



// ============================================================
// RVA: 0x165ab3c | Core.Networking.NetworkMigrationState.HasKartData
// ============================================================

bool Core_Networking_NetworkMigrationState__HasKartData(long param_1)

{
  long lVar1;
  
  if ((bRam0000000003eb5828 & 1) == 0) {
    func_0x00f78a20(0x3d3b300);
    bRam0000000003eb5828 = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    return 0 < *(int *)(*(long *)(param_1 + 0x20) + 0x18);
  }
  lVar1 = func_0x00f78af4();
  return (*(uint *)(lVar1 + 8) & 0xfffffffd) == 0;
}



