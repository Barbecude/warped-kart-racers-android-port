// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Services.LeaderboardScore

// ============================================================
// RVA: 0x16695cc | Core.Services.LeaderboardScore.get_Rank
// ============================================================

/* WARNING: Possible PIC construction at 0x016cce10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc904: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016cc89c) */
/* WARNING: Removing unreachable block (ram,0x016cc8a4) */
/* WARNING: Removing unreachable block (ram,0x016cc8d0) */
/* WARNING: Removing unreachable block (ram,0x016cc8ac) */
/* WARNING: Removing unreachable block (ram,0x016cc8d4) */
/* WARNING: Removing unreachable block (ram,0x016cc8b8) */
/* WARNING: Removing unreachable block (ram,0x016cc834) */
/* WARNING: Removing unreachable block (ram,0x016cc83c) */
/* WARNING: Removing unreachable block (ram,0x016cc868) */
/* WARNING: Removing unreachable block (ram,0x016cc844) */
/* WARNING: Removing unreachable block (ram,0x016cc86c) */
/* WARNING: Removing unreachable block (ram,0x016cc850) */
/* WARNING: Removing unreachable block (ram,0x016cc68c) */
/* WARNING: Removing unreachable block (ram,0x016cc698) */
/* WARNING: Removing unreachable block (ram,0x016cc6a0) */
/* WARNING: Removing unreachable block (ram,0x016cc6a8) */
/* WARNING: Removing unreachable block (ram,0x016cc718) */
/* WARNING: Removing unreachable block (ram,0x016cc720) */
/* WARNING: Removing unreachable block (ram,0x016cc728) */
/* WARNING: Removing unreachable block (ram,0x016cc730) */
/* WARNING: Removing unreachable block (ram,0x016cc74c) */
/* WARNING: Removing unreachable block (ram,0x016cc754) */
/* WARNING: Removing unreachable block (ram,0x016cc778) */
/* WARNING: Removing unreachable block (ram,0x016cc6b4) */
/* WARNING: Removing unreachable block (ram,0x016cc77c) */
/* WARNING: Removing unreachable block (ram,0x016cc6bc) */
/* WARNING: Removing unreachable block (ram,0x016cc6c4) */
/* WARNING: Removing unreachable block (ram,0x016cc6cc) */
/* WARNING: Removing unreachable block (ram,0x016cc6e0) */
/* WARNING: Removing unreachable block (ram,0x016cc6e8) */
/* WARNING: Removing unreachable block (ram,0x016cc794) */
/* WARNING: Removing unreachable block (ram,0x016cc7a0) */
/* WARNING: Removing unreachable block (ram,0x016cc6f0) */
/* WARNING: Removing unreachable block (ram,0x016cc714) */
/* WARNING: Removing unreachable block (ram,0x016cc780) */
/* WARNING: Removing unreachable block (ram,0x016cce14) */
/* WARNING: Removing unreachable block (ram,0x016cc908) */
/* WARNING: Removing unreachable block (ram,0x016cc910) */
/* WARNING: Removing unreachable block (ram,0x016cc920) */
/* WARNING: Removing unreachable block (ram,0x016cc928) */
/* WARNING: Removing unreachable block (ram,0x016cc964) */
/* WARNING: Removing unreachable block (ram,0x016cc930) */
/* WARNING: Removing unreachable block (ram,0x016cc968) */
/* WARNING: Removing unreachable block (ram,0x016cc878) */
/* WARNING: Removing unreachable block (ram,0x016cc93c) */
/* WARNING: Removing unreachable block (ram,0x016cc954) */

long Core_Services_LeaderboardScore__get_Rank(int *param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *extraout_x8;
  int *unaff_x19;
  undefined8 unaff_x20;
  ulong uVar12;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar13;
  undefined *puVar14;
  undefined1 auVar15 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_28;
  
  lVar5 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,10,0);
  if ((int)lVar5 == 0) {
    return lVar5;
  }
  lVar11 = *(long *)(param_1 + 2);
  if (lVar11 == 0) {
    piVar6 = (int *)func_0x00f78af4();
    puStack_28 = &Core_Services_LeaderboardScore__get_Value;
    iVar4 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar6,0xc,0);
    if (iVar4 == 0) {
      return 0;
    }
    lVar11 = *(long *)(piVar6 + 2);
    if (lVar11 == 0) {
      piVar6 = (int *)func_0x00f78af4();
      if ((bRam0000000003eb59c8 & 1) == 0) {
        func_0x00f78a20(0x3d3ebe0);
        bRam0000000003eb59c8 = 1;
      }
      lVar5 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar6,8,0);
      if ((int)lVar5 == 0) {
        *extraout_x8 = 0;
        extraout_x8[1] = 0;
        extraout_x8[2] = 0;
      }
      else {
        uStack_80 = 0;
        uStack_78 = 0;
        uVar8 = /*FlatBuffers.Table$$__indirect*/ func_0x016cf210(piVar6,*piVar6 + (int)lVar5,0);
        auVar15 = /*Core.Services.Player$$__assign*/ func_0x0167d6bc(&uStack_80,uVar8,*(undefined8 *)(piVar6 + 2),0);
        extraout_x8[1] = 0;
        extraout_x8[2] = 0;
        *extraout_x8 = 0;
        lVar5 = /*System.Nullable<Player>$$.ctor*/ func_0x0265d8a4(extraout_x8,auVar15._0_8_,auVar15._8_8_,uRam0000000003d3ebe0);
      }
      return lVar5;
    }
    uVar1 = *piVar6 + iVar4;
    puVar2 = &stack0xffffffffffffffe0;
    uVar10 = 8;
  }
  else {
    uVar1 = *param_1 + (int)lVar5;
    puVar2 = &stack0xfffffffffffffff0;
    uVar10 = 4;
    puStack_28 = &UNK_016cce14;
    param_1 = unaff_x19;
  }
  auVar15._8_4_ = uVar1;
  auVar15._0_8_ = lVar11;
  auVar15._12_4_ = 0;
  *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
  *(int **)(puVar2 + -0x18) = param_1;
  *(undefined1 **)(puVar2 + -0x10) = &stack0xfffffffffffffff0;
  *(undefined **)(puVar2 + -8) = puStack_28;
  puVar13 = puVar2 + -0x10;
  if ((bRam0000000003eb5cd0 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    bRam0000000003eb5cd0 = 1;
  }
  puVar14 = &UNK_016cc68c;
  puVar3 = puVar2 + -0x40;
  uVar7 = (ulong)uVar1;
  uVar12 = uVar10;
  do {
    uVar9 = uVar10;
    lVar5 = auVar15._0_8_;
    *(ulong *)(puVar3 + -0x20) = uVar12;
    *(ulong *)(puVar3 + -0x18) = uVar7;
    *(undefined1 **)(puVar3 + -0x10) = puVar13;
    *(undefined **)(puVar3 + -8) = puVar14;
    if (auVar15._8_4_ < 0) {
code_r0x016cc7d8:
      func_0x00f78a24(0x3d1fcf8);
      uVar7 = func_0x00f78aec();
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a4d0(uVar7,0);
      uVar8 = func_0x00f78a24(0x3d52ce8);
      func_0x00f78ac0(uVar7,uVar8);
    }
    else if (*(long *)(lVar5 + 0x10) != 0) {
      if (auVar15._8_4_ <= *(int *)(*(long *)(lVar5 + 0x10) + 0x18) - (int)uVar9) {
        return lVar5;
      }
      goto code_r0x016cc7d8;
    }
    auVar15 = func_0x00f78af4();
    *(undefined8 *)(puVar3 + -0x50) = 0x3d201a0;
    *(long *)(puVar3 + -0x48) = lVar5;
    *(ulong *)(puVar3 + -0x40) = uVar12;
    *(ulong *)(puVar3 + -0x38) = uVar7;
    *(undefined1 **)(puVar3 + -0x30) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x28) = &FlatBuffers_ByteBuffer__PutSbyte;
    puVar13 = puVar3 + -0x30;
    puVar14 = &UNK_016cc834;
    puVar3 = puVar3 + -0x50;
    uVar10 = 1;
    uVar7 = uVar9;
    uVar12 = auVar15._8_8_;
  } while( true );
}



// ============================================================
// RVA: 0x1669620 | Core.Services.LeaderboardScore.get_Value
// ============================================================

/* WARNING: Possible PIC construction at 0x016cc688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc904: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016cc89c) */
/* WARNING: Removing unreachable block (ram,0x016cc8a4) */
/* WARNING: Removing unreachable block (ram,0x016cc8d0) */
/* WARNING: Removing unreachable block (ram,0x016cc8ac) */
/* WARNING: Removing unreachable block (ram,0x016cc8d4) */
/* WARNING: Removing unreachable block (ram,0x016cc8b8) */
/* WARNING: Removing unreachable block (ram,0x016cc834) */
/* WARNING: Removing unreachable block (ram,0x016cc83c) */
/* WARNING: Removing unreachable block (ram,0x016cc868) */
/* WARNING: Removing unreachable block (ram,0x016cc844) */
/* WARNING: Removing unreachable block (ram,0x016cc86c) */
/* WARNING: Removing unreachable block (ram,0x016cc850) */
/* WARNING: Removing unreachable block (ram,0x016cc68c) */
/* WARNING: Removing unreachable block (ram,0x016cc698) */
/* WARNING: Removing unreachable block (ram,0x016cc6a0) */
/* WARNING: Removing unreachable block (ram,0x016cc6a8) */
/* WARNING: Removing unreachable block (ram,0x016cc718) */
/* WARNING: Removing unreachable block (ram,0x016cc720) */
/* WARNING: Removing unreachable block (ram,0x016cc728) */
/* WARNING: Removing unreachable block (ram,0x016cc730) */
/* WARNING: Removing unreachable block (ram,0x016cc74c) */
/* WARNING: Removing unreachable block (ram,0x016cc754) */
/* WARNING: Removing unreachable block (ram,0x016cc778) */
/* WARNING: Removing unreachable block (ram,0x016cc6b4) */
/* WARNING: Removing unreachable block (ram,0x016cc77c) */
/* WARNING: Removing unreachable block (ram,0x016cc6bc) */
/* WARNING: Removing unreachable block (ram,0x016cc6c4) */
/* WARNING: Removing unreachable block (ram,0x016cc6cc) */
/* WARNING: Removing unreachable block (ram,0x016cc6e0) */
/* WARNING: Removing unreachable block (ram,0x016cc6e8) */
/* WARNING: Removing unreachable block (ram,0x016cc794) */
/* WARNING: Removing unreachable block (ram,0x016cc7a0) */
/* WARNING: Removing unreachable block (ram,0x016cc6f0) */
/* WARNING: Removing unreachable block (ram,0x016cc714) */
/* WARNING: Removing unreachable block (ram,0x016cc780) */
/* WARNING: Removing unreachable block (ram,0x016cc908) */
/* WARNING: Removing unreachable block (ram,0x016cc910) */
/* WARNING: Removing unreachable block (ram,0x016cc920) */
/* WARNING: Removing unreachable block (ram,0x016cc928) */
/* WARNING: Removing unreachable block (ram,0x016cc964) */
/* WARNING: Removing unreachable block (ram,0x016cc930) */
/* WARNING: Removing unreachable block (ram,0x016cc968) */
/* WARNING: Removing unreachable block (ram,0x016cc878) */
/* WARNING: Removing unreachable block (ram,0x016cc93c) */
/* WARNING: Removing unreachable block (ram,0x016cc954) */

long Core_Services_LeaderboardScore__get_Value(int *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined1 *puVar3;
  int iVar4;
  int *piVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *extraout_x8;
  undefined1 *puVar11;
  undefined *puVar12;
  undefined1 auVar13 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  iVar4 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,0xc,0);
  if (iVar4 == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 2) == 0) {
    piVar5 = (int *)func_0x00f78af4();
    if ((bRam0000000003eb59c8 & 1) == 0) {
      func_0x00f78a20(0x3d3ebe0);
      bRam0000000003eb59c8 = 1;
    }
    lVar6 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar5,8,0);
    if ((int)lVar6 == 0) {
      *extraout_x8 = 0;
      extraout_x8[1] = 0;
      extraout_x8[2] = 0;
    }
    else {
      uStack_60 = 0;
      uStack_58 = 0;
      uVar7 = /*FlatBuffers.Table$$__indirect*/ func_0x016cf210(piVar5,*piVar5 + (int)lVar6,0);
      auVar13 = /*Core.Services.Player$$__assign*/ func_0x0167d6bc(&uStack_60,uVar7,*(undefined8 *)(piVar5 + 2),0);
      extraout_x8[1] = 0;
      extraout_x8[2] = 0;
      *extraout_x8 = 0;
      lVar6 = /*System.Nullable<Player>$$.ctor*/ func_0x0265d8a4(extraout_x8,auVar13._0_8_,auVar13._8_8_,uRam0000000003d3ebe0);
    }
    return lVar6;
  }
  iVar1 = *param_1;
  auVar13._8_4_ = iVar1 + iVar4;
  auVar13._0_8_ = *(long *)(param_1 + 2);
  auVar13._12_4_ = 0;
  puVar11 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5cd0 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    bRam0000000003eb5cd0 = 1;
  }
  puVar12 = &UNK_016cc68c;
  puVar3 = &stack0xffffffffffffffc0;
  uVar2 = 8;
  uVar8 = (ulong)(uint)(iVar1 + iVar4);
  uVar7 = 8;
  do {
    uVar10 = uVar2;
    lVar6 = auVar13._0_8_;
    *(undefined8 *)(puVar3 + -0x20) = uVar7;
    *(ulong *)(puVar3 + -0x18) = uVar8;
    *(undefined1 **)(puVar3 + -0x10) = puVar11;
    *(undefined **)(puVar3 + -8) = puVar12;
    if (auVar13._8_4_ < 0) {
code_r0x016cc7d8:
      func_0x00f78a24(0x3d1fcf8);
      uVar8 = func_0x00f78aec();
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a4d0(uVar8,0);
      uVar9 = func_0x00f78a24(0x3d52ce8);
      func_0x00f78ac0(uVar8,uVar9);
    }
    else if (*(long *)(lVar6 + 0x10) != 0) {
      if (auVar13._8_4_ <= *(int *)(*(long *)(lVar6 + 0x10) + 0x18) - (int)uVar10) {
        return lVar6;
      }
      goto code_r0x016cc7d8;
    }
    auVar13 = func_0x00f78af4();
    *(undefined8 *)(puVar3 + -0x50) = 0x3d201a0;
    *(long *)(puVar3 + -0x48) = lVar6;
    *(undefined8 *)(puVar3 + -0x40) = uVar7;
    *(ulong *)(puVar3 + -0x38) = uVar8;
    *(undefined1 **)(puVar3 + -0x30) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x28) = &FlatBuffers_ByteBuffer__PutSbyte;
    puVar11 = puVar3 + -0x30;
    puVar12 = &UNK_016cc834;
    puVar3 = puVar3 + -0x50;
    uVar2 = 1;
    uVar8 = uVar10;
    uVar7 = auVar13._8_8_;
  } while( true );
}



// ============================================================
// RVA: 0x1669678 | Core.Services.LeaderboardScore.get_Player
// ============================================================

void Core_Services_LeaderboardScore__get_Player(undefined8 *param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb59c8 & 1) == 0) {
    func_0x00f78a20(0x3d3ebe0);
    bRam0000000003eb59c8 = 1;
  }
  iVar1 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_2,8,0);
  if (iVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    uStack_40 = 0;
    uStack_38 = 0;
    uVar2 = /*FlatBuffers.Table$$__indirect*/ func_0x016cf210(param_2,*param_2 + iVar1,0);
    auVar3 = /*Core.Services.Player$$__assign*/ func_0x0167d6bc(&uStack_40,uVar2,*(undefined8 *)(param_2 + 2),0);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    /*System.Nullable<Player>$$.ctor*/ func_0x0265d8a4(param_1,auVar3._0_8_,auVar3._8_8_,uRam0000000003d3ebe0);
  }
  return;
}



// ============================================================
// RVA: 0x1669740 | Core.Services.LeaderboardScore.get_Context
// ============================================================

/* WARNING: Possible PIC construction at 0x016cc688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc904: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cf29c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccdc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cf304: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cf358: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cf3cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cf5cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cf5fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cf704: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016cf600) */
/* WARNING: Removing unreachable block (ram,0x016cf624) */
/* WARNING: Removing unreachable block (ram,0x016cf62c) */
/* WARNING: Removing unreachable block (ram,0x016cf630) */
/* WARNING: Removing unreachable block (ram,0x016cf648) */
/* WARNING: Removing unreachable block (ram,0x016cf65c) */
/* WARNING: Removing unreachable block (ram,0x016cf680) */
/* WARNING: Removing unreachable block (ram,0x016cf690) */
/* WARNING: Removing unreachable block (ram,0x016cf694) */
/* WARNING: Removing unreachable block (ram,0x016cf5d0) */
/* WARNING: Removing unreachable block (ram,0x016cf3d0) */
/* WARNING: Removing unreachable block (ram,0x016cf444) */
/* WARNING: Removing unreachable block (ram,0x016cf464) */
/* WARNING: Removing unreachable block (ram,0x016cf474) */
/* WARNING: Removing unreachable block (ram,0x016cf480) */
/* WARNING: Removing unreachable block (ram,0x016cf4ec) */
/* WARNING: Removing unreachable block (ram,0x016cf4f0) */
/* WARNING: Removing unreachable block (ram,0x016cf5a0) */
/* WARNING: Removing unreachable block (ram,0x016cf5b4) */
/* WARNING: Removing unreachable block (ram,0x016cf6ac) */
/* WARNING: Removing unreachable block (ram,0x016cf6e0) */
/* WARNING: Removing unreachable block (ram,0x016cf6f4) */
/* WARNING: Removing unreachable block (ram,0x016cf6f8) */
/* WARNING: Removing unreachable block (ram,0x016cf5b8) */
/* WARNING: Removing unreachable block (ram,0x016cf494) */
/* WARNING: Removing unreachable block (ram,0x016cf4b4) */
/* WARNING: Removing unreachable block (ram,0x016cf4cc) */
/* WARNING: Removing unreachable block (ram,0x016cf3ec) */
/* WARNING: Removing unreachable block (ram,0x02616890) */
/* WARNING: Removing unreachable block (ram,0x016cf35c) */
/* WARNING: Removing unreachable block (ram,0x016cf308) */
/* WARNING: Removing unreachable block (ram,0x016cf314) */
/* WARNING: Removing unreachable block (ram,0x016ccdc4) */
/* WARNING: Removing unreachable block (ram,0x016cf2a0) */
/* WARNING: Removing unreachable block (ram,0x016cf2ac) */
/* WARNING: Removing unreachable block (ram,0x016cf2c8) */
/* WARNING: Removing unreachable block (ram,0x016ccd58) */
/* WARNING: Removing unreachable block (ram,0x016ccd84) */
/* WARNING: Removing unreachable block (ram,0x016ccdb0) */
/* WARNING: Removing unreachable block (ram,0x016ccd88) */
/* WARNING: Removing unreachable block (ram,0x016cc908) */
/* WARNING: Removing unreachable block (ram,0x016cc910) */
/* WARNING: Removing unreachable block (ram,0x016cc920) */
/* WARNING: Removing unreachable block (ram,0x016cc928) */
/* WARNING: Removing unreachable block (ram,0x016cc964) */
/* WARNING: Removing unreachable block (ram,0x016cc930) */
/* WARNING: Removing unreachable block (ram,0x016cc968) */
/* WARNING: Removing unreachable block (ram,0x016cc93c) */
/* WARNING: Removing unreachable block (ram,0x016cc954) */
/* WARNING: Removing unreachable block (ram,0x016cc89c) */
/* WARNING: Removing unreachable block (ram,0x016cc8a4) */
/* WARNING: Removing unreachable block (ram,0x016cc8d0) */
/* WARNING: Removing unreachable block (ram,0x016cc8ac) */
/* WARNING: Removing unreachable block (ram,0x016cc8d4) */
/* WARNING: Removing unreachable block (ram,0x016cc8b8) */
/* WARNING: Removing unreachable block (ram,0x016cc834) */
/* WARNING: Removing unreachable block (ram,0x016cc83c) */
/* WARNING: Removing unreachable block (ram,0x016cc868) */
/* WARNING: Removing unreachable block (ram,0x016cc844) */
/* WARNING: Removing unreachable block (ram,0x016cc86c) */
/* WARNING: Removing unreachable block (ram,0x016cc878) */
/* WARNING: Removing unreachable block (ram,0x016cc850) */
/* WARNING: Removing unreachable block (ram,0x016cc68c) */
/* WARNING: Removing unreachable block (ram,0x016cc698) */
/* WARNING: Removing unreachable block (ram,0x016cc6a0) */
/* WARNING: Removing unreachable block (ram,0x016cc6a8) */
/* WARNING: Removing unreachable block (ram,0x016cc718) */
/* WARNING: Removing unreachable block (ram,0x016cc720) */
/* WARNING: Removing unreachable block (ram,0x016cc728) */
/* WARNING: Removing unreachable block (ram,0x016cc730) */
/* WARNING: Removing unreachable block (ram,0x016cc74c) */
/* WARNING: Removing unreachable block (ram,0x016cc754) */
/* WARNING: Removing unreachable block (ram,0x016cc778) */
/* WARNING: Removing unreachable block (ram,0x016cc6b4) */
/* WARNING: Removing unreachable block (ram,0x016cc77c) */
/* WARNING: Removing unreachable block (ram,0x016cc6bc) */
/* WARNING: Removing unreachable block (ram,0x016cc6c4) */
/* WARNING: Removing unreachable block (ram,0x016cc6cc) */
/* WARNING: Removing unreachable block (ram,0x016cc6e0) */
/* WARNING: Removing unreachable block (ram,0x016cc6e8) */
/* WARNING: Removing unreachable block (ram,0x016cc794) */
/* WARNING: Removing unreachable block (ram,0x016cc7a0) */
/* WARNING: Removing unreachable block (ram,0x016cc6f0) */
/* WARNING: Removing unreachable block (ram,0x016cc714) */
/* WARNING: Removing unreachable block (ram,0x016cc780) */
/* WARNING: Removing unreachable block (ram,0x016cf708) */
/* WARNING: Removing unreachable block (ram,0x016cf720) */
/* WARNING: Removing unreachable block (ram,0x016cf73c) */
/* WARNING: Removing unreachable block (ram,0x016cf744) */
/* WARNING: Removing unreachable block (ram,0x016cf748) */
/* WARNING: Removing unreachable block (ram,0x016cf760) */
/* WARNING: Removing unreachable block (ram,0x016cf770) */
/* WARNING: Removing unreachable block (ram,0x016cf7bc) */
/* WARNING: Removing unreachable block (ram,0x016cf7c8) */
/* WARNING: Removing unreachable block (ram,0x016cf788) */
/* WARNING: Removing unreachable block (ram,0x016cf794) */
/* WARNING: Removing unreachable block (ram,0x016cf7a0) */
/* WARNING: Removing unreachable block (ram,0x016cf7a4) */

long Core_Services_LeaderboardScore__get_Context(int *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  dword *pdVar4;
  undefined8 uVar5;
  dword *pdVar6;
  dword *pdVar7;
  dword *pdVar8;
  long lVar9;
  dword *extraout_x8;
  dword *unaff_x19;
  dword *unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 ***unaff_x29;
  undefined *unaff_x30;
  undefined *puVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  undefined1 auStack_60 [8];
  dword *pdStack_58;
  undefined8 **ppuStack_50;
  undefined *puStack_48;
  undefined8 *puStack_30;
  undefined *puStack_28;
  
  auVar13._8_8_ = unaff_x21;
  auVar13._0_8_ = unaff_x20;
  iVar3 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,4,0);
  if (iVar3 == 0) {
    return 0;
  }
  lVar9 = *(long *)(param_1 + 2);
  if (lVar9 == 0) {
    pdVar4 = (dword *)func_0x00f78af4();
    puStack_28 = &Core_Services_LeaderboardScore__get_FormattedValue;
    puStack_30 = (undefined8 *)&stack0xfffffffffffffff0;
    iVar3 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(pdVar4,6,0);
    if (iVar3 == 0) {
      return 0;
    }
    pdVar6 = (dword *)(ulong)(*pdVar4 + iVar3);
    puVar1 = &stack0xffffffffffffffc0;
    lVar9 = *(long *)(pdVar4 + 2);
    if (lVar9 == 0) {
      auVar14 = func_0x00f78af4(0,pdVar6,0);
      unaff_x19 = auVar14._0_8_;
      puVar1 = auStack_60;
      puStack_48 = &FlatBuffers_Table____vector_len;
      unaff_x29 = &ppuStack_50;
      lVar9 = *(long *)(unaff_x19 + 2);
      pdStack_58 = pdVar4;
      ppuStack_50 = &puStack_30;
      if (lVar9 == 0) {
        puVar10 = &FlatBuffers_Table____vector;
        auVar12 = func_0x00f78af4();
        puVar2 = auStack_60;
        while( true ) {
          unaff_x21 = auVar13._8_8_;
          unaff_x20 = auVar13._0_8_;
          puVar1 = puVar2 + -0x20;
          *(dword **)(puVar2 + -0x20) = unaff_x20;
          *(dword **)(puVar2 + -0x18) = unaff_x19;
          *(undefined8 ****)(puVar2 + -0x10) = unaff_x29;
          *(undefined **)(puVar2 + -8) = puVar10;
          unaff_x29 = (undefined8 ***)(puVar2 + -0x10);
          lVar9 = *(long *)(auVar12._0_8_ + 2);
          if (lVar9 != 0) break;
          auVar13 = func_0x00f78af4();
          *(long *)(puVar2 + -0x50) = unaff_x22;
          *(undefined8 *)(puVar2 + -0x48) = unaff_x21;
          *(dword **)(puVar2 + -0x40) = unaff_x20;
          *(dword **)(puVar2 + -0x38) = unaff_x19;
          *(undefined8 ****)(puVar2 + -0x30) = unaff_x29;
          *(undefined **)(puVar2 + -0x28) = &FlatBuffers_Table____vector_as_arraysegment;
          unaff_x29 = (undefined8 ***)(puVar2 + -0x30);
          if ((bRam0000000003eb5cd9 & 1) == 0) {
            func_0x00f78a20(0x3d3e500);
            bRam0000000003eb5cd9 = 1;
          }
          unaff_x22 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(auVar13._0_8_,auVar13._8_8_);
          auVar12._8_8_ = unaff_x22;
          auVar12._0_8_ = auVar13._0_8_;
          if ((int)unaff_x22 == 0) {
            *(undefined8 *)extraout_x8 = 0;
            *(undefined8 *)(extraout_x8 + 2) = 0;
            *(undefined8 *)(extraout_x8 + 4) = 0;
            return unaff_x22;
          }
          puVar10 = &UNK_016cf3d0;
          puVar2 = puVar2 + -0x50;
          unaff_x19 = extraout_x8;
        }
        pdVar6 = (dword *)(ulong)(uint)(*auVar12._0_8_ + auVar12._8_4_);
        pdVar7 = &MACH_HEADER.cputype;
        unaff_x30 = &UNK_016cf35c;
        unaff_x19 = pdVar6;
      }
      else {
        pdVar6 = (dword *)(ulong)(*unaff_x19 + auVar14._8_4_);
        pdVar7 = &MACH_HEADER.cputype;
        unaff_x30 = &UNK_016cf308;
        unaff_x20 = pdVar6;
      }
    }
    else {
      pdVar7 = &MACH_HEADER.cputype;
      unaff_x30 = &UNK_016cf2a0;
      unaff_x19 = pdVar4;
      unaff_x20 = pdVar6;
      unaff_x29 = (undefined8 ***)&puStack_30;
    }
  }
  else {
    pdVar6 = (dword *)(ulong)(uint)(*param_1 + iVar3);
    pdVar7 = &MACH_HEADER.cpusubtype;
    puVar1 = (undefined1 *)register0x00000008;
  }
  auVar11._8_8_ = pdVar6;
  auVar11._0_8_ = lVar9;
  *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar1 + -0x38) = unaff_x23;
  *(long *)(puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
  *(dword **)(puVar1 + -0x20) = unaff_x20;
  *(dword **)(puVar1 + -0x18) = unaff_x19;
  *(undefined8 ****)(puVar1 + -0x10) = unaff_x29;
  *(undefined **)(puVar1 + -8) = unaff_x30;
  puVar2 = puVar1 + -0x10;
  if ((bRam0000000003eb5cd0 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    bRam0000000003eb5cd0 = 1;
  }
  puVar10 = &UNK_016cc68c;
  puVar1 = puVar1 + -0x40;
  pdVar4 = pdVar7;
  do {
    pdVar8 = pdVar7;
    lVar9 = auVar11._0_8_;
    *(dword **)(puVar1 + -0x20) = pdVar4;
    *(dword **)(puVar1 + -0x18) = pdVar6;
    *(undefined1 **)(puVar1 + -0x10) = puVar2;
    *(undefined **)(puVar1 + -8) = puVar10;
    if (auVar11._8_4_ < 0) {
code_r0x016cc7d8:
      func_0x00f78a24(0x3d1fcf8);
      pdVar6 = (dword *)func_0x00f78aec();
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a4d0(pdVar6,0);
      uVar5 = func_0x00f78a24(0x3d52ce8);
      func_0x00f78ac0(pdVar6,uVar5);
    }
    else if (*(long *)(lVar9 + 0x10) != 0) {
      if (auVar11._8_4_ <= *(int *)(*(long *)(lVar9 + 0x10) + 0x18) - (int)pdVar8) {
        return lVar9;
      }
      goto code_r0x016cc7d8;
    }
    auVar11 = func_0x00f78af4();
    *(undefined8 *)(puVar1 + -0x50) = 0x3d201a0;
    *(long *)(puVar1 + -0x48) = lVar9;
    *(dword **)(puVar1 + -0x40) = pdVar4;
    *(dword **)(puVar1 + -0x38) = pdVar6;
    *(undefined1 **)(puVar1 + -0x30) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x28) = &FlatBuffers_ByteBuffer__PutSbyte;
    puVar2 = puVar1 + -0x30;
    puVar10 = &UNK_016cc834;
    puVar1 = puVar1 + -0x50;
    pdVar7 = (dword *)((long)&MACH_HEADER.magic + 1);
    pdVar6 = pdVar8;
    pdVar4 = auVar11._8_8_;
  } while( true );
}



// ============================================================
// RVA: 0x1669798 | Core.Services.LeaderboardScore.get_FormattedValue
// ============================================================

/* WARNING: Possible PIC construction at 0x016cf3cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016cf3d0) */
/* WARNING: Removing unreachable block (ram,0x016cf444) */
/* WARNING: Removing unreachable block (ram,0x016cf464) */
/* WARNING: Removing unreachable block (ram,0x016cf474) */
/* WARNING: Removing unreachable block (ram,0x016cf480) */
/* WARNING: Removing unreachable block (ram,0x016cf4ec) */
/* WARNING: Removing unreachable block (ram,0x016cf4f0) */
/* WARNING: Removing unreachable block (ram,0x016cf5a0) */
/* WARNING: Removing unreachable block (ram,0x016cf5b4) */
/* WARNING: Removing unreachable block (ram,0x016cf6ac) */
/* WARNING: Removing unreachable block (ram,0x016cf6e0) */
/* WARNING: Removing unreachable block (ram,0x016cf6f4) */
/* WARNING: Removing unreachable block (ram,0x016cf6f8) */
/* WARNING: Removing unreachable block (ram,0x016cf720) */
/* WARNING: Removing unreachable block (ram,0x016cf73c) */
/* WARNING: Removing unreachable block (ram,0x016cf744) */
/* WARNING: Removing unreachable block (ram,0x016cf748) */
/* WARNING: Removing unreachable block (ram,0x016cf760) */
/* WARNING: Removing unreachable block (ram,0x016cf770) */
/* WARNING: Removing unreachable block (ram,0x016cf7bc) */
/* WARNING: Removing unreachable block (ram,0x016cf7c8) */
/* WARNING: Removing unreachable block (ram,0x016cf788) */
/* WARNING: Removing unreachable block (ram,0x016cf794) */
/* WARNING: Removing unreachable block (ram,0x016cf7a0) */
/* WARNING: Removing unreachable block (ram,0x016cf7a4) */
/* WARNING: Removing unreachable block (ram,0x016cf5b8) */
/* WARNING: Removing unreachable block (ram,0x016cf624) */
/* WARNING: Removing unreachable block (ram,0x016cf62c) */
/* WARNING: Removing unreachable block (ram,0x016cf630) */
/* WARNING: Removing unreachable block (ram,0x016cf648) */
/* WARNING: Removing unreachable block (ram,0x016cf65c) */
/* WARNING: Removing unreachable block (ram,0x016cf680) */
/* WARNING: Removing unreachable block (ram,0x016cf690) */
/* WARNING: Removing unreachable block (ram,0x016cf694) */
/* WARNING: Removing unreachable block (ram,0x016cf494) */
/* WARNING: Removing unreachable block (ram,0x016cf4b4) */
/* WARNING: Removing unreachable block (ram,0x016cf4cc) */
/* WARNING: Removing unreachable block (ram,0x016cf3ec) */
/* WARNING: Removing unreachable block (ram,0x02616890) */

ulong Core_Services_LeaderboardScore__get_FormattedValue(int *param_1)

{
  uint uVar1;
  int **ppiVar2;
  undefined1 *puVar3;
  short sVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  int *piVar12;
  int *extraout_x8;
  int *piVar13;
  int *unaff_x20;
  int *piVar14;
  undefined8 unaff_x21;
  ulong unaff_x22;
  undefined *puVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [12];
  int *piStack_40;
  int *piStack_38;
  undefined1 *puVar4;
  
  iVar6 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,6,0);
  if (iVar6 == 0) {
    return 0;
  }
  uVar1 = *param_1 + iVar6;
  if (*(long *)(param_1 + 2) != 0) {
    iVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(param_1 + 2),(int *)(ulong)uVar1,4);
    unaff_x20 = (int *)(ulong)uVar1;
    if (*(long *)(param_1 + 2) != 0) {
      unaff_x20 = (int *)(ulong)(iVar6 + uVar1);
      uVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(param_1 + 2),unaff_x20,4);
      lVar11 = *(long *)(param_1 + 2);
      if (lVar11 != 0) {
        plVar8 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
        lVar11 = *(long *)(lVar11 + 0x10);
        if ((lVar11 != 0) && (plVar8 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016ccdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar9 = (**(code **)(*plVar8 + 0x348))
                            (plVar8,*(undefined8 *)(lVar11 + 0x10),iVar6 + uVar1 + 4,uVar10,
                             *(undefined8 *)(*plVar8 + 0x350));
          return uVar9;
        }
        auVar16 = func_0x00f78af4();
        piStack_38 = (int *)&FlatBuffers_ByteBuffer__GetShort;
        piStack_40 = (int *)&stack0xfffffffffffffff0;
        sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(auVar16._0_8_,auVar16._8_8_,2);
        return (ulong)(uint)(int)sVar5;
      }
    }
  }
  auVar18 = func_0x00f78af4();
  piVar13 = auVar18._0_8_;
  piVar14 = unaff_x20;
  piStack_40 = unaff_x20;
  piStack_38 = param_1;
  if (*(long *)(piVar13 + 2) != 0) {
    uVar1 = *piVar13 + auVar18._8_4_;
    piVar14 = (int *)(ulong)uVar1;
    iVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(piVar13 + 2),piVar14,4);
    if (*(long *)(piVar13 + 2) != 0) {
      uVar9 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(piVar13 + 2),uVar1 + iVar6,4);
      return uVar9;
    }
  }
  puVar15 = &FlatBuffers_Table____vector;
  auVar16 = func_0x00f78af4();
  ppiVar2 = &piStack_40;
  puVar3 = (undefined1 *)register0x00000008;
  while( true ) {
    puVar4 = (undefined1 *)ppiVar2;
    *(int **)(puVar4 + -0x20) = piVar14;
    *(int **)(puVar4 + -0x18) = piVar13;
    *(undefined1 **)(puVar4 + -0x10) = puVar3 + -0x30;
    *(undefined **)(puVar4 + -8) = puVar15;
    lVar11 = *(long *)(auVar16._0_8_ + 2);
    if (lVar11 != 0) {
      iVar6 = *auVar16._0_8_ + auVar16._8_4_;
      iVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar11,iVar6,4);
      return (ulong)(iVar6 + iVar7 + 4);
    }
    auVar17 = func_0x00f78af4();
    piVar12 = auVar17._0_8_;
    *(ulong *)(puVar4 + -0x50) = unaff_x22;
    *(undefined8 *)(puVar4 + -0x48) = unaff_x21;
    *(int **)(puVar4 + -0x40) = piVar14;
    *(int **)(puVar4 + -0x38) = piVar13;
    *(undefined1 **)(puVar4 + -0x30) = puVar4 + -0x10;
    *(undefined **)(puVar4 + -0x28) = &FlatBuffers_Table____vector_as_arraysegment;
    if ((bRam0000000003eb5cd9 & 1) == 0) {
      func_0x00f78a20(0x3d3e500);
      bRam0000000003eb5cd9 = 1;
    }
    unaff_x22 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar12,auVar17._8_8_);
    auVar16._8_8_ = unaff_x22;
    auVar16._0_8_ = piVar12;
    if ((int)unaff_x22 == 0) break;
    puVar15 = &UNK_016cf3d0;
    ppiVar2 = (int **)(puVar4 + -0x50);
    piVar13 = extraout_x8;
    piVar14 = piVar12;
    unaff_x21 = auVar17._8_8_;
    puVar3 = puVar4;
  }
  extraout_x8[0] = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  extraout_x8[3] = 0;
  extraout_x8[4] = 0;
  extraout_x8[5] = 0;
  return unaff_x22;
}



// ============================================================
// RVA: 0x167c120 | Core.Services.LeaderboardScore.get_ByteBuffer
// ============================================================

undefined8 Core_Services_LeaderboardScore__get_ByteBuffer(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// ============================================================
// RVA: 0x167c128 | Core.Services.LeaderboardScore.GetRootAsLeaderboardScore
// ============================================================

undefined1  [16] Core_Services_LeaderboardScore__GetRootAsLeaderboardScore(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  
  uVar3 = 0;
  if (param_1 != 0) {
    iVar1 = /*FlatBuffers.ByteBuffer$$GetInt*/ func_0x016ccdec(param_1,*(undefined4 *)(param_1 + 0x18),0);
    auVar4._4_4_ = 0;
    auVar4._0_4_ = *(int *)(param_1 + 0x18) + iVar1;
    auVar4._8_8_ = param_1;
    return auVar4;
  }
  auVar6 = func_0x00f78af4();
  puVar2 = auVar6._0_8_;
  *(int *)puVar2 = auVar6._8_4_;
  puVar2[1] = uVar3;
  auVar5._0_8_ = *puVar2;
  auVar5._8_8_ = uVar3;
  return auVar5;
}



// ============================================================
// RVA: 0x167c134 | Core.Services.LeaderboardScore.GetRootAsLeaderboardScore
// ============================================================

undefined1  [16]
Core_Services_LeaderboardScore__GetRootAsLeaderboardScore
          (long param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [12];
  
  if (param_1 != 0) {
    iVar1 = /*FlatBuffers.ByteBuffer$$GetInt*/ func_0x016ccdec(param_1,*(undefined4 *)(param_1 + 0x18),0);
    auVar3._0_8_ = param_2 & 0xffffffff00000000 | (ulong)(uint)(*(int *)(param_1 + 0x18) + iVar1);
    auVar3._8_8_ = param_1;
    return auVar3;
  }
  auVar5 = func_0x00f78af4();
  puVar2 = auVar5._0_8_;
  *(int *)puVar2 = auVar5._8_4_;
  puVar2[1] = param_3;
  auVar4._0_8_ = *puVar2;
  auVar4._8_8_ = param_3;
  return auVar4;
}



// ============================================================
// RVA: 0x167c178 | Core.Services.LeaderboardScore.__assign
// ============================================================

undefined1  [16]
Core_Services_LeaderboardScore____assign(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)param_1 = param_2;
  param_1[1] = param_3;
  auVar1._0_8_ = *param_1;
  auVar1._8_8_ = param_3;
  return auVar1;
}



// ============================================================
// RVA: 0x167c18c | Core.Services.LeaderboardScore.__init
// ============================================================

void Core_Services_LeaderboardScore____init
               (undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  return;
}



// ============================================================
// RVA: 0x167c198 | Core.Services.LeaderboardScore.GetFormattedValueBytes
// ============================================================

void Core_Services_LeaderboardScore__GetFormattedValueBytes(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  /*FlatBuffers.Table$$__vector_as_arraysegment*/ func_0x016cf374(&uStack_38,param_2,6,0);
  param_1[1] = uStack_30;
  *param_1 = uStack_38;
  param_1[2] = uStack_28;
  return;
}



// ============================================================
// RVA: 0x167c1dc | Core.Services.LeaderboardScore.GetFormattedValueArray
// ============================================================

long Core_Services_LeaderboardScore__GetFormattedValueArray(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 **ppuStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 **ppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 **ppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  if ((bRam0000000003eb59c7 & 1) == 0) {
    func_0x00f78a20(0x3d5ded0);
    bRam0000000003eb59c7 = 1;
  }
  lVar3 = lRam0000000003d5ded0;
  uVar6 = 6;
  uVar1 = 0x3d201a0;
  if ((bRam0000000003eb6695 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    bRam0000000003eb6695 = 1;
  }
  if (((*(ushort *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (**(char **)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xb8) == '\0') {
    func_0x00f78a24(0x3d238d8);
    lVar3 = func_0x00f78aec();
    uVar2 = func_0x00f78a24(0x3d6d410);
    /*System.NotSupportedException$$.ctor*/ func_0x029503bc(lVar3,uVar2,0);
    uVar2 = func_0x00f78a24(0x3d5ded0);
    func_0x00f78ac0(lVar3,uVar2);
  }
  else {
    uVar1 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,6,0);
    if ((int)uVar1 == 0) {
      return 0;
    }
    uVar6 = /*FlatBuffers.Table$$__vector*/ func_0x016cf330(param_1,uVar1,0);
    uVar2 = /*FlatBuffers.Table$$__vector_len*/ func_0x016cf2dc(param_1,uVar1,0);
    if (*(long *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018e4728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar3 = (**(code **)**(undefined8 **)(lVar3 + 0x30))(*(long *)(param_1 + 8),uVar6,uVar2);
      return lVar3;
    }
  }
  auVar9 = func_0x00f78af4();
  uStack_78 = auVar9._0_8_;
  puStack_48 = &System_Threading_Tasks_Task__FromCancellation_bool_;
  uStack_70 = uVar1;
  uStack_68 = uVar6;
  lStack_60 = param_1;
  lStack_58 = lVar3;
  puStack_50 = &stack0xfffffffffffffff0;
  uVar4 = /*System.Threading.CancellationToken$$get_IsCancellationRequested*/ func_0x0294aac4(&uStack_78,0);
  uVar2 = uStack_78;
  if ((uVar4 & 1) != 0) {
    lVar3 = **(long **)(auVar9._8_8_ + 0x30);
    if ((*(ushort *)(lVar3 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar3);
    }
    lVar3 = func_0x00f78aec(lVar3);
    (*(code *)**(undefined8 **)(*(long *)(auVar9._8_8_ + 0x30) + 8))(lVar3,1,0,0,uVar2);
    return lVar3;
  }
  func_0x00f78a24(0x3d1fcf8);
  uVar2 = func_0x00f78aec();
  uVar5 = func_0x00f78a24(0x3d781b8);
  /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a524(uVar2,uVar5,0);
  uVar5 = func_0x00f78a24(0x3d5df30);
  auVar9 = func_0x00f78ac0(uVar2,uVar5);
  lVar8 = auVar9._8_8_;
  lVar3 = auVar9._0_8_;
  puStack_88 = &System_Threading_Tasks_Task__FromCancellation_int_;
  uStack_b0 = uVar1;
  uStack_a8 = uVar6;
  lStack_a0 = param_1;
  uStack_98 = uVar2;
  ppuStack_90 = &puStack_50;
  if (lVar3 == 0) {
    func_0x00f78a24(0x3d1fcf0);
    lVar3 = func_0x00f78aec();
    uVar2 = func_0x00f78a24(0x3d791a0);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(lVar3,uVar2,0);
    uVar2 = func_0x00f78a24(0x3d5df38);
    func_0x00f78ac0(lVar3,uVar2);
  }
  else {
    lVar7 = **(long **)(lVar8 + 0x30);
    if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar7);
    }
    lVar7 = func_0x00f78aec(lVar7);
    (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x30) + 8))();
    uVar6 = 0;
    param_1 = lVar8;
    if (lVar7 != 0) {
      (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x30) + 0x10))
                (lVar7,*(undefined8 *)(lVar3 + 0x88),lVar3);
      return lVar7;
    }
  }
  auVar9 = func_0x00f78af4();
  uStack_e8 = auVar9._0_8_;
  puStack_b8 = &System_Threading_Tasks_Task__FromCancellation_int_;
  uStack_e0 = uVar1;
  uStack_d8 = uVar6;
  lStack_d0 = param_1;
  lStack_c8 = lVar3;
  ppuStack_c0 = &ppuStack_90;
  uVar4 = /*System.Threading.CancellationToken$$get_IsCancellationRequested*/ func_0x0294aac4(&uStack_e8,0);
  uVar2 = uStack_e8;
  if ((uVar4 & 1) != 0) {
    lVar3 = **(long **)(auVar9._8_8_ + 0x30);
    if ((*(ushort *)(lVar3 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar3);
    }
    lVar3 = func_0x00f78aec(lVar3);
    (*(code *)**(undefined8 **)(*(long *)(auVar9._8_8_ + 0x30) + 8))(lVar3,1,0,0,uVar2);
    return lVar3;
  }
  func_0x00f78a24(0x3d1fcf8);
  uVar2 = func_0x00f78aec();
  uVar5 = func_0x00f78a24(0x3d781b8);
  /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a524(uVar2,uVar5,0);
  uVar5 = func_0x00f78a24(0x3d5df40);
  auVar9 = func_0x00f78ac0(uVar2,uVar5);
  lVar8 = auVar9._8_8_;
  lVar3 = auVar9._0_8_;
  puStack_f8 = &System_Threading_Tasks_Task__FromCancellation_object_;
  uStack_120 = uVar1;
  uStack_118 = uVar6;
  lStack_110 = param_1;
  uStack_108 = uVar2;
  ppuStack_100 = &ppuStack_c0;
  if (lVar3 == 0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar2 = func_0x00f78aec();
    auVar9._8_8_ = param_1;
    auVar9._0_8_ = uVar2;
    uVar5 = func_0x00f78a24(0x3d791a0);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar2,uVar5,0);
    uVar5 = func_0x00f78a24(0x3d5df48);
    func_0x00f78ac0(uVar2,uVar5);
  }
  else {
    lVar7 = **(long **)(lVar8 + 0x30);
    if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar7);
    }
    lVar7 = func_0x00f78aec(lVar7);
    (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x30) + 8))();
    uVar6 = 0;
    if (lVar7 != 0) {
      (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x30) + 0x10))
                (lVar7,*(undefined8 *)(lVar3 + 0x88),lVar3);
      return lVar7;
    }
  }
  auVar10 = func_0x00f78af4();
  uStack_158 = auVar10._0_8_;
  puStack_128 = &System_Threading_Tasks_Task__FromCancellation_object_;
  uStack_150 = uVar1;
  uStack_148 = uVar6;
  uStack_140 = auVar9._8_8_;
  uStack_138 = auVar9._0_8_;
  ppuStack_130 = &ppuStack_100;
  uVar4 = /*System.Threading.CancellationToken$$get_IsCancellationRequested*/ func_0x0294aac4(&uStack_158,0);
  uVar1 = uStack_158;
  if ((uVar4 & 1) != 0) {
    lVar3 = **(long **)(auVar10._8_8_ + 0x30);
    if ((*(ushort *)(lVar3 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar3);
    }
    lVar3 = func_0x00f78aec(lVar3);
    (*(code *)**(undefined8 **)(*(long *)(auVar10._8_8_ + 0x30) + 8))(lVar3,1,0,0,uVar1);
    return lVar3;
  }
  func_0x00f78a24(0x3d1fcf8);
  uVar1 = func_0x00f78aec();
  uVar6 = func_0x00f78a24(0x3d781b8);
  /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a524(uVar1,uVar6,0);
  uVar6 = func_0x00f78a24(0x3d5df50);
  auVar9 = func_0x00f78ac0(uVar1,uVar6);
  lVar8 = auVar9._8_8_;
  lVar3 = auVar9._0_8_;
  if (lVar3 == 0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar1 = func_0x00f78aec();
    uVar6 = func_0x00f78a24(0x3d791a0);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar1,uVar6,0);
    uVar6 = func_0x00f78a24(0x3d5df58);
    func_0x00f78ac0(uVar1,uVar6);
  }
  else {
    lVar7 = **(long **)(lVar8 + 0x30);
    if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar7);
    }
    lVar7 = func_0x00f78aec(lVar7);
    (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x30) + 8))();
    if (lVar7 != 0) {
      (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x30) + 0x10))
                (lVar7,*(undefined8 *)(lVar3 + 0x88),lVar3);
      return lVar7;
    }
  }
  auVar9 = func_0x00f78af4();
  lVar3 = auVar9._8_8_;
  if (auVar9._0_8_ == 0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar1 = func_0x00f78aec();
    uVar6 = func_0x00f78a24(0x3d791a0);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar1,uVar6,0);
    uVar6 = func_0x00f78a24(0x3d5df60);
    func_0x00f78ac0(uVar1,uVar6);
  }
  else {
    lVar8 = **(long **)(lVar3 + 0x30);
    if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar8);
    }
    lVar8 = func_0x00f78aec(lVar8);
    (*(code *)**(undefined8 **)(*(long *)(lVar3 + 0x30) + 8))();
    if (lVar8 != 0) {
      (*(code *)**(undefined8 **)(*(long *)(lVar3 + 0x30) + 0x10))(lVar8,auVar9._0_8_);
      return lVar8;
    }
  }
  auVar9 = func_0x00f78af4();
  lVar3 = auVar9._8_8_;
  if (auVar9._0_8_ == 0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar1 = func_0x00f78aec();
    uVar6 = func_0x00f78a24(0x3d791a0);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar1,uVar6,0);
    uVar6 = func_0x00f78a24(0x3d5df68);
    func_0x00f78ac0(uVar1,uVar6);
  }
  else {
    lVar8 = **(long **)(lVar3 + 0x30);
    if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar8);
    }
    lVar8 = func_0x00f78aec(lVar8);
    (*(code *)**(undefined8 **)(*(long *)(lVar3 + 0x30) + 8))();
    if (lVar8 != 0) {
      (*(code *)**(undefined8 **)(*(long *)(lVar3 + 0x30) + 0x10))(lVar8,auVar9._0_8_);
      return lVar8;
    }
  }
  auVar9 = func_0x00f78af4();
  lVar3 = auVar9._8_8_;
  if (auVar9._0_8_ == 0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar1 = func_0x00f78aec();
    uVar6 = func_0x00f78a24(0x3d791a0);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar1,uVar6,0);
    uVar6 = func_0x00f78a24(0x3d5df70);
    func_0x00f78ac0(uVar1,uVar6);
  }
  else {
    lVar8 = **(long **)(lVar3 + 0x30);
    if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar8);
    }
    lVar8 = func_0x00f78aec(lVar8);
    (*(code *)**(undefined8 **)(*(long *)(lVar3 + 0x30) + 8))();
    if (lVar8 != 0) {
      (*(code *)**(undefined8 **)(*(long *)(lVar3 + 0x30) + 0x10))(lVar8,auVar9._0_8_);
      return lVar8;
    }
  }
  auVar9 = func_0x00f78af4();
  lVar3 = **(long **)(auVar9._8_8_ + 0x30);
  if ((*(ushort *)(lVar3 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar3);
  }
  lVar3 = func_0x00f78aec(lVar3);
  (*(code *)**(undefined8 **)(*(long *)(auVar9._8_8_ + 0x30) + 8))(lVar3,auVar9._0_8_);
  return lVar3;
}



// ============================================================
// RVA: 0x167c234 | Core.Services.LeaderboardScore.CreateLeaderboardScore
// ============================================================

/* WARNING: Possible PIC construction at 0x0167c26c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0167c284: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0167c29c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0167c288) */
/* WARNING: Removing unreachable block (ram,0x0167c270) */
/* WARNING: Removing unreachable block (ram,0x0167c2a0) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_LeaderboardScore__CreateLeaderboardScore
                (long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 ***pppuVar5;
  undefined1 *puVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  long unaff_x19;
  int iVar20;
  long unaff_x20;
  ulong uVar21;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar22;
  undefined1 **ppuVar23;
  undefined1 ***pppuVar24;
  undefined *puVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [12];
  ulong auStack_140 [4];
  undefined1 auStack_120 [12];
  int iStack_114;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  undefined1 **ppuStack_f0;
  undefined *puStack_e8;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined1 **ppuStack_50;
  undefined *puStack_48;
  
  pppuVar5 = (undefined1 ***)&stack0xffffffffffffffc0;
  puVar4 = &stack0xffffffffffffffc0;
  ppuVar23 = (undefined1 **)&stack0xfffffffffffffff0;
  if (param_1 != 0) {
    puVar25 = (undefined *)0x167c270;
    lVar15 = param_1;
    unaff_x21 = param_4;
    unaff_x22 = param_5;
code_r0x016ce2a4:
    uVar13 = 0;
    *(ulong *)(puVar4 + -0x30) = unaff_x22;
    *(ulong *)(puVar4 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar4 + -0x20) = param_3;
    *(long *)(puVar4 + -0x18) = lVar15;
    *(undefined1 ***)(puVar4 + -0x10) = ppuVar23;
    *(undefined **)(puVar4 + -8) = puVar25;
    unaff_x20 = 5;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(param_1);
    if (*(long *)(param_1 + 0x28) != 0) {
      if (*(int *)(*(long *)(param_1 + 0x28) + 0x18) < 5) {
        uVar13 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,5);
        *(undefined8 *)(param_1 + 0x28) = uVar13;
      }
      *(undefined4 *)(param_1 + 0x30) = 5;
      uVar21 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(param_1);
      *(int *)(param_1 + 0x34) = (int)uVar21;
      return uVar21;
    }
    auVar26 = func_0x00f78af4();
    pppuVar5 = (undefined1 ***)(puVar4 + -0x30);
    unaff_x19 = param_1;
    puVar6 = puVar4 + -0x10;
    puVar25 = &FlatBuffers_FlatBufferBuilder__Slot;
    goto code_r0x016ce380;
  }
  puVar25 = &Core_Services_LeaderboardScore__AddValue;
  auVar27 = func_0x00f78af4();
  if (auVar27._0_8_ == 0) {
    pppuVar5 = &ppuStack_50;
    pppuVar24 = &ppuStack_50;
    puStack_48 = &Core_Services_LeaderboardScore__AddValue;
    puVar25 = &Core_Services_LeaderboardScore__AddContext;
    ppuStack_50 = ppuVar23;
    auVar27 = func_0x00f78af4();
    if (auVar27._0_8_ == 0) {
      puStack_58 = &Core_Services_LeaderboardScore__AddContext;
      puStack_60 = (undefined1 *)&ppuStack_50;
      auVar27 = func_0x00f78af4();
      uVar21 = auVar27._0_8_;
      if (uVar21 != 0) {
        param_4 = 0;
        puStack_68 = &Core_Services_LeaderboardScore__AddRank;
        if ((auVar27._8_4_ == 0) && (*(char *)(uVar21 + 0x48) == '\0')) {
          return uVar21;
        }
        uVar13 = 0;
        puStack_70 = (undefined1 *)&puStack_60;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar21,4,0,0,0);
        /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(uVar21,auVar27._8_8_);
        auVar26._8_8_ = 3;
        auVar26._0_8_ = uVar21;
        pppuVar5 = (undefined1 ***)&puStack_60;
        puVar6 = puStack_70;
        puVar25 = puStack_68;
        goto code_r0x016ce380;
      }
      pppuVar5 = (undefined1 ***)&puStack_70;
      puStack_68 = &Core_Services_LeaderboardScore__AddRank;
      puVar25 = &Core_Services_LeaderboardScore__AddPlayer;
      puStack_70 = (undefined1 *)&puStack_60;
      auVar27 = func_0x00f78af4();
      if (auVar27._0_8_ == 0) {
        pppuVar5 = (undefined1 ***)&stack0xffffffffffffff80;
        puVar25 = &Core_Services_LeaderboardScore__AddFormattedValue;
        auVar27 = func_0x00f78af4();
        if (auVar27._0_8_ == 0) {
          lVar15 = func_0x00f78af4();
          puVar4 = &stack0xffffffffffffff50;
          puStack_98 = &Core_Services_LeaderboardScore__EndLeaderboardScore;
          ppuVar23 = &puStack_a0;
          param_3 = 0x3eb5000;
          puStack_a0 = &stack0xffffffffffffff70;
          if ((bRam0000000003eb59c9 & 1) == 0) {
            puStack_a0 = &stack0xffffffffffffff70;
            func_0x00f78a20(0x3d3f160);
            bRam0000000003eb59c9 = 1;
          }
          if (lVar15 == 0) {
            puVar25 = &Core_Services_LeaderboardScore__StartLeaderboardScore;
            param_1 = func_0x00f78af4();
            if (param_1 == 0) {
              lVar15 = func_0x00f78af4();
              return *(ulong *)(lVar15 + 8);
            }
            lVar15 = 0;
            goto code_r0x016ce2a4;
          }
          uVar21 = 0x3eb5000;
          if ((bRam0000000003eb5cd8 & 1) == 0) {
            func_0x00f78a20(0x3d1f100,0);
            bRam0000000003eb5cd8 = 1;
          }
          if (-1 < *(int *)(lVar15 + 0x30)) {
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,4,0);
            /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar15,0);
            uVar21 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar15);
            unaff_x21 = (ulong)*(uint *)(lVar15 + 0x30);
            uVar17 = *(uint *)(lVar15 + 0x30) - 1;
            if (-2 < (int)uVar17) {
              uVar17 = 0xffffffff;
            }
            unaff_x22 = (ulong)uVar17;
            do {
              uVar3 = (int)unaff_x21 - 1;
              unaff_x21 = (ulong)uVar3;
              iVar20 = (int)uVar21;
              if ((int)uVar3 < 0) goto code_r0x016ceb30;
              lVar18 = *(long *)(lVar15 + 0x28);
              if (lVar18 == 0) goto code_r0x016ced84;
              if (*(uint *)(lVar18 + 0x18) <= uVar3) goto code_r0x016ced88;
            } while (*(int *)(lVar18 + (ulong)uVar3 * 4 + 0x20) == 0);
            unaff_x22 = unaff_x21 + 8;
            do {
              uVar22 = unaff_x22 - 8;
              if (*(uint *)(lVar18 + 0x18) <= uVar22) goto code_r0x016ced88;
              iVar11 = *(int *)(lVar18 + unaff_x22 * 4);
              sVar7 = 0;
              if (iVar11 != 0) {
                sVar7 = (short)uVar21 - (short)iVar11;
              }
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,2,0);
              /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar15,(int)sVar7);
              lVar18 = *(long *)(lVar15 + 0x28);
              if (lVar18 == 0) goto code_r0x016ced84;
              if (*(uint *)(lVar18 + 0x18) <= uVar22) goto code_r0x016ced88;
              *(undefined4 *)(lVar18 + unaff_x22 * 4) = 0;
              unaff_x22 = unaff_x22 - 1;
              uVar17 = uVar3;
            } while (0 < (long)uVar22);
code_r0x016ceb30:
            uVar10 = *(undefined4 *)(lVar15 + 0x34);
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,2,0);
            /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar15,(int)(short)((short)uVar21 - (short)uVar10));
            uVar17 = uVar17 * 2 + 6;
            unaff_x21 = (ulong)uVar17;
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,2,0);
            /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar15,(int)(short)uVar17);
            unaff_x22 = (ulong)*(uint *)(lVar15 + 0x40);
            if (0 < (int)*(uint *)(lVar15 + 0x40)) {
              uVar22 = 0;
              do {
                lVar18 = *(long *)(lVar15 + 0x18);
                if (((lVar18 == 0) || (*(long *)(lVar18 + 0x10) == 0)) ||
                   (lVar19 = *(long *)(lVar15 + 0x38), lVar19 == 0)) goto code_r0x016ced84;
                if (*(uint *)(lVar19 + 0x18) <= uVar22) goto code_r0x016ced88;
                uVar3 = *(int *)(*(long *)(lVar18 + 0x10) + 0x18) -
                        *(int *)(lVar19 + uVar22 * 4 + 0x20);
                unaff_x21 = (ulong)uVar3;
                uVar17 = *(uint *)(lVar15 + 0x10);
                unaff_x22 = (ulong)uVar17;
                sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar18,unaff_x21,2);
                if (*(long *)(lVar15 + 0x18) == 0) goto code_r0x016ced84;
                sVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar15 + 0x18),unaff_x22,2);
                if (sVar7 == sVar8) {
                  if (sVar7 < 3) {
code_r0x016cec64:
                    unaff_x21 = *(ulong *)(lVar15 + 0x38);
                    if (unaff_x21 == 0) goto code_r0x016ced84;
                    if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar22) goto code_r0x016ced88;
                    iVar11 = *(int *)(unaff_x21 + uVar22 * 4 + 0x20);
                    if (iVar11 == 0) {
                      unaff_x22 = (ulong)*(uint *)(lVar15 + 0x40);
                      goto code_r0x016cecac;
                    }
                    unaff_x21 = *(ulong *)(lVar15 + 0x18);
                    if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0))
                    goto code_r0x016ced84;
                    iVar12 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar20;
                    *(int *)(lVar15 + 0x10) = iVar12;
                    iVar11 = iVar11 - iVar20;
                    goto code_r0x016ced3c;
                  }
                  iVar11 = 2;
                  while( true ) {
                    if (*(long *)(lVar15 + 0x18) == 0) goto code_r0x016ced84;
                    sVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar15 + 0x18),uVar3 + iVar11,2);
                    if (*(long *)(lVar15 + 0x18) == 0) goto code_r0x016ced84;
                    sVar9 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar15 + 0x18),uVar17 + iVar11,2);
                    if (sVar8 != sVar9) break;
                    iVar11 = iVar11 + 2;
                    if (sVar7 <= iVar11) goto code_r0x016cec64;
                  }
                }
                uVar22 = uVar22 + 1;
                unaff_x22 = (ulong)*(int *)(lVar15 + 0x40);
              } while ((long)uVar22 < (long)unaff_x22);
            }
            unaff_x21 = *(ulong *)(lVar15 + 0x38);
            if (unaff_x21 == 0) {
code_r0x016ced84:
              func_0x00f78af4();
            }
            else {
code_r0x016cecac:
              if ((int)unaff_x22 == *(int *)(unaff_x21 + 0x18)) {
                unaff_x21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,(int)unaff_x22 << 1);
                lVar18 = *(long *)(lVar15 + 0x38);
                if (lVar18 == 0) goto code_r0x016ced84;
                /*System.Array$$Copy*/ func_0x0292c49c(lVar18,unaff_x21,*(undefined4 *)(lVar18 + 0x18),0);
                *(ulong *)(lVar15 + 0x38) = unaff_x21;
                unaff_x22 = (ulong)*(uint *)(lVar15 + 0x40);
              }
              uVar17 = (uint)unaff_x22;
              *(uint *)(lVar15 + 0x40) = uVar17 + 1;
              uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar15);
              if (unaff_x21 == 0) goto code_r0x016ced84;
              if (uVar17 < *(uint *)(unaff_x21 + 0x18)) {
                *(undefined4 *)(unaff_x21 + (long)(int)uVar17 * 4 + 0x20) = uVar10;
                unaff_x21 = *(ulong *)(lVar15 + 0x18);
                if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
                  iVar12 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
                  iVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar15);
                  iVar12 = iVar12 - iVar20;
                  iVar11 = iVar11 - iVar20;
code_r0x016ced3c:
                  /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar12,4);
                  /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar12,4,(long)iVar11);
                  *(undefined4 *)(lVar15 + 0x30) = 0xffffffff;
                  return uVar21;
                }
                goto code_r0x016ced84;
              }
            }
code_r0x016ced88:
            uVar13 = func_0x00f78b24();
            func_0x00f78ac0(uVar13,0);
          }
          func_0x00f78a24(0x3d22a38);
          uVar13 = func_0x00f78aec();
          uVar14 = func_0x00f78a24(0x3d6cea8);
          iVar20 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar13,uVar14);
          uVar14 = func_0x00f78a24(0x3d56a30);
          auVar28 = func_0x00f78ac0(uVar13,uVar14);
          puStack_e8 = &FlatBuffers_FlatBufferBuilder__Required;
          pppuVar5 = &ppuStack_f0;
          lVar15 = *(long *)(auVar28._0_8_ + 0x18);
          iStack_114 = iVar20;
          uStack_110 = unaff_x22;
          uStack_108 = unaff_x21;
          uStack_100 = uVar21;
          uStack_f8 = uVar13;
          ppuStack_f0 = &puStack_a0;
          if ((lVar15 != 0) && (*(long *)(lVar15 + 0x10) != 0)) {
            iVar11 = *(int *)(*(long *)(lVar15 + 0x10) + 0x18) - auVar28._8_4_;
            iVar12 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar15,iVar11,4);
            lVar15 = *(long *)(auVar28._0_8_ + 0x18);
            if (lVar15 != 0) {
              uVar21 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar15,(iVar11 - iVar12) + iVar20,2);
              if ((uVar21 & 0xffff) != 0) {
                return uVar21;
              }
              goto code_r0x016cee5c;
            }
          }
          func_0x00f78af4();
code_r0x016cee5c:
          uVar13 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_114,0);
          uVar14 = func_0x00f78a24(0x3d6ce88);
          uVar16 = func_0x00f78a24(0x3d66338);
          lVar15 = /*System.String$$Concat*/ func_0x029be39c(uVar14,uVar13,uVar16,0);
          func_0x00f78a24(0x3d22a38);
          uVar21 = func_0x00f78aec();
          uVar14 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar21,lVar15);
          uVar13 = func_0x00f78a24(0x3d56a50);
          puVar25 = &FlatBuffers_FlatBufferBuilder__Finish;
          auVar27 = func_0x00f78ac0(uVar21,uVar13);
          puVar6 = auStack_120;
          do {
            uVar22 = auVar27._8_8_;
            lVar18 = auVar27._0_8_;
            *(ulong *)(puVar6 + -0x20) = uVar21;
            *(long *)(puVar6 + -0x18) = lVar15;
            *(undefined1 ****)(puVar6 + -0x10) = pppuVar5;
            *(undefined **)(puVar6 + -8) = puVar25;
            pppuVar5 = (undefined1 ***)(puVar6 + -0x10);
            if ((int)uVar14 == 0) {
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar18,*(undefined4 *)(lVar18 + 0x20),4);
              uVar21 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar18,uVar22);
code_r0x016cef70:
              if (*(long *)(lVar18 + 0x18) != 0) {
                *(undefined4 *)(*(long *)(lVar18 + 0x18) + 0x18) = *(undefined4 *)(lVar18 + 0x10);
                return uVar21;
              }
            }
            else if (lVar18 != 0) {
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar18,*(undefined4 *)(lVar18 + 0x20),8);
              /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar18,uVar22);
              if ((*(long *)(lVar18 + 0x18) != 0) &&
                 (lVar15 = *(long *)(*(long *)(lVar18 + 0x18) + 0x10), lVar15 != 0)) {
                uVar22 = (ulong)(uint)(*(int *)(lVar15 + 0x18) - *(int *)(lVar18 + 0x10));
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar18,4,0);
                uVar21 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar18,uVar22);
                goto code_r0x016cef70;
              }
            }
            puVar25 = &FlatBuffers_FlatBufferBuilder__Finish;
            auVar27 = func_0x00f78af4();
            uVar14 = 0;
            puVar6 = puVar6 + -0x20;
            lVar15 = lVar18;
            uVar21 = uVar22;
          } while( true );
        }
        uVar14 = 1;
      }
      else {
        uVar14 = 2;
      }
      uVar13 = auVar27._8_8_;
      uVar21 = auVar27._0_8_;
      auVar26._8_8_ = uVar14;
      auVar26._0_8_ = uVar21;
      param_4 = 0;
      *(long *)((long)pppuVar5 + -0x20) = unaff_x20;
      *(long *)((long)pppuVar5 + -0x18) = unaff_x19;
      *(undefined1 ****)((long)pppuVar5 + -0x10) = pppuVar5;
      *(undefined **)((long)pppuVar5 + -8) = puVar25;
      if ((auVar27._8_4_ == 0) && (*(char *)(uVar21 + 0x48) == '\0')) {
        return uVar21;
      }
      /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(uVar21,uVar13,uVar13,0,0);
      puVar6 = *(undefined1 **)((long)pppuVar5 + -0x10);
      puVar25 = *(undefined **)((long)pppuVar5 + -8);
      unaff_x20 = *(long *)((long)pppuVar5 + -0x20);
      unaff_x19 = *(long *)((long)pppuVar5 + -0x18);
      goto code_r0x016ce380;
    }
    uVar13 = 0;
  }
  else {
    uVar13 = 4;
    pppuVar24 = (undefined1 ***)ppuVar23;
  }
  uVar21 = auVar27._0_8_;
  auVar26._8_8_ = uVar13;
  auVar26._0_8_ = uVar21;
  param_4 = 0;
  *(ulong *)((long)pppuVar5 + -0x30) = unaff_x22;
  *(ulong *)((long)pppuVar5 + -0x28) = unaff_x21;
  *(long *)((long)pppuVar5 + -0x20) = unaff_x20;
  *(long *)((long)pppuVar5 + -0x18) = unaff_x19;
  *(undefined1 ****)((long)pppuVar5 + -0x10) = pppuVar24;
  *(undefined **)((long)pppuVar5 + -8) = puVar25;
  if ((auVar27._8_8_ == 0) && (*(char *)(uVar21 + 0x48) == '\0')) {
    return uVar21;
  }
  uVar13 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar21,8,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutUlong*/ func_0x016cddc8(uVar21,auVar27._8_8_);
  unaff_x20 = *(long *)((long)pppuVar5 + -0x20);
  unaff_x19 = *(long *)((long)pppuVar5 + -0x18);
  unaff_x22 = *(ulong *)((long)pppuVar5 + -0x30);
  unaff_x21 = *(ulong *)((long)pppuVar5 + -0x28);
  puVar6 = *(undefined1 **)((long)pppuVar5 + -0x10);
  puVar25 = *(undefined **)((long)pppuVar5 + -8);
code_r0x016ce380:
  do {
    uVar14 = auVar26._8_8_;
    *(long *)((long)pppuVar5 + -0x20) = unaff_x20;
    *(long *)((long)pppuVar5 + -0x18) = unaff_x19;
    *(undefined1 **)((long)pppuVar5 + -0x10) = puVar6;
    *(undefined **)((long)pppuVar5 + -8) = puVar25;
    uVar17 = auVar26._8_4_;
    if ((int)uVar17 < *(int *)(auVar26._0_8_ + 0x30)) {
      unaff_x20 = *(long *)(auVar26._0_8_ + 0x28);
      uVar21 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      uVar16 = uVar13;
      if (unaff_x20 == 0) goto code_r0x016ce410;
      if (uVar17 < *(uint *)(unaff_x20 + 0x18)) {
        *(int *)(unaff_x20 + (long)(int)uVar17 * 4 + 0x20) = (int)uVar21;
        return uVar21;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      uVar14 = func_0x00f78aec();
      uVar13 = func_0x00f78a24(0x3d6ceb8);
      uVar16 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar14,uVar13);
      uVar13 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar14,uVar13);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar13 = func_0x00f78b24();
    auVar26 = func_0x00f78ac0(uVar13,0);
    uVar21 = auVar26._0_8_;
    *(ulong *)((long)pppuVar5 + -0x50) = unaff_x22;
    *(ulong *)((long)pppuVar5 + -0x48) = unaff_x21;
    *(long *)((long)pppuVar5 + -0x40) = unaff_x20;
    *(undefined8 *)((long)pppuVar5 + -0x38) = uVar14;
    *(undefined1 **)((long)pppuVar5 + -0x30) = (undefined1 *)((long)pppuVar5 + -0x10);
    *(undefined **)((long)pppuVar5 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    if (((int)uVar16 == (int)param_4) && (*(char *)(uVar21 + 0x48) == '\0')) {
      return uVar21;
    }
    uVar13 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar21,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar21,uVar16);
    plVar1 = (long *)((long)pppuVar5 + -0x30);
    puVar2 = (undefined8 *)((long)pppuVar5 + -0x28);
    unaff_x20 = *(long *)((long)pppuVar5 + -0x40);
    unaff_x19 = *(long *)((long)pppuVar5 + -0x38);
    unaff_x22 = *(ulong *)((long)pppuVar5 + -0x50);
    unaff_x21 = *(ulong *)((long)pppuVar5 + -0x48);
    pppuVar5 = (undefined1 ***)((long)pppuVar5 + -0x20);
    puVar6 = (undefined1 *)*plVar1;
    puVar25 = (undefined *)*puVar2;
  } while( true );
}



// ============================================================
// RVA: 0x167c2c8 | Core.Services.LeaderboardScore.AddValue
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_LeaderboardScore__AddValue
                (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined1 **ppuVar4;
  undefined1 *puVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long unaff_x19;
  int iVar20;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar21;
  undefined1 *unaff_x29;
  undefined1 *puVar22;
  undefined1 ***pppuVar23;
  undefined *unaff_x30;
  undefined *puVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [12];
  ulong auStack_100 [4];
  undefined1 auStack_e0 [12];
  int iStack_d4;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_30;
  undefined *puStack_28;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  auVar25._8_8_ = param_2;
  auVar25._0_8_ = param_1;
  if (param_1 == 0) {
    puVar5 = &stack0xfffffffffffffff0;
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x30 = &Core_Services_LeaderboardScore__AddContext;
    auVar25 = func_0x00f78af4();
    if (auVar25._0_8_ == 0) {
      puStack_18 = &Core_Services_LeaderboardScore__AddContext;
      puStack_20 = &stack0xfffffffffffffff0;
      auVar25 = func_0x00f78af4();
      uVar13 = auVar25._0_8_;
      if (uVar13 != 0) {
        param_4 = 0;
        puStack_28 = &Core_Services_LeaderboardScore__AddRank;
        if ((auVar25._8_4_ == 0) && (*(char *)(uVar13 + 0x48) == '\0')) {
          return uVar13;
        }
        uVar16 = 0;
        puStack_30 = (undefined1 *)&puStack_20;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,4,0,0,0);
        /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(uVar13,auVar25._8_8_);
        auVar26._8_8_ = 3;
        auVar26._0_8_ = uVar13;
        ppuVar4 = &puStack_20;
        puVar22 = puStack_30;
        puVar24 = puStack_28;
        goto code_r0x016ce380;
      }
      ppuVar4 = &puStack_30;
      puStack_28 = &Core_Services_LeaderboardScore__AddRank;
      puVar24 = &Core_Services_LeaderboardScore__AddPlayer;
      puStack_30 = (undefined1 *)&puStack_20;
      auVar25 = func_0x00f78af4();
      if (auVar25._0_8_ == 0) {
        ppuVar4 = (undefined1 **)&stack0xffffffffffffffc0;
        puVar24 = &Core_Services_LeaderboardScore__AddFormattedValue;
        auVar25 = func_0x00f78af4();
        if (auVar25._0_8_ == 0) {
          lVar12 = func_0x00f78af4();
          puStack_58 = &Core_Services_LeaderboardScore__EndLeaderboardScore;
          puStack_60 = &stack0xffffffffffffffb0;
          if ((bRam0000000003eb59c9 & 1) == 0) {
            puStack_60 = &stack0xffffffffffffffb0;
            func_0x00f78a20(0x3d3f160);
            bRam0000000003eb59c9 = 1;
          }
          if (lVar12 == 0) {
            unaff_x19 = func_0x00f78af4();
            if (unaff_x19 == 0) {
              lVar12 = func_0x00f78af4();
              return *(ulong *)(lVar12 + 8);
            }
            uVar16 = 0;
            ppuVar4 = (undefined1 **)&stack0xffffffffffffff60;
            puVar22 = &stack0xffffffffffffff80;
            unaff_x20 = 5;
            unaff_x21 = 0x3eb5000;
            if ((bRam0000000003eb5cd7 & 1) == 0) {
              func_0x00f78a20(0x3d1f100);
              bRam0000000003eb5cd7 = 1;
            }
            /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(unaff_x19);
            if (*(long *)(unaff_x19 + 0x28) != 0) {
              if (*(int *)(*(long *)(unaff_x19 + 0x28) + 0x18) < 5) {
                uVar16 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,5);
                *(undefined8 *)(unaff_x19 + 0x28) = uVar16;
              }
              *(undefined4 *)(unaff_x19 + 0x30) = 5;
              uVar13 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(unaff_x19);
              *(int *)(unaff_x19 + 0x34) = (int)uVar13;
              return uVar13;
            }
            puVar24 = &FlatBuffers_FlatBufferBuilder__Slot;
            auVar26 = func_0x00f78af4();
            goto code_r0x016ce380;
          }
          uVar13 = 0x3eb5000;
          if ((bRam0000000003eb5cd8 & 1) == 0) {
            func_0x00f78a20(0x3d1f100,0);
            bRam0000000003eb5cd8 = 1;
          }
          if (-1 < *(int *)(lVar12 + 0x30)) {
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar12,4,0);
            /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar12,0);
            uVar13 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar12);
            unaff_x21 = (ulong)*(uint *)(lVar12 + 0x30);
            uVar15 = *(uint *)(lVar12 + 0x30) - 1;
            if (-2 < (int)uVar15) {
              uVar15 = 0xffffffff;
            }
            unaff_x22 = (ulong)uVar15;
            do {
              uVar3 = (int)unaff_x21 - 1;
              unaff_x21 = (ulong)uVar3;
              iVar20 = (int)uVar13;
              if ((int)uVar3 < 0) goto code_r0x016ceb30;
              lVar18 = *(long *)(lVar12 + 0x28);
              if (lVar18 == 0) goto code_r0x016ced84;
              if (*(uint *)(lVar18 + 0x18) <= uVar3) goto code_r0x016ced88;
            } while (*(int *)(lVar18 + (ulong)uVar3 * 4 + 0x20) == 0);
            unaff_x22 = unaff_x21 + 8;
            do {
              uVar21 = unaff_x22 - 8;
              if (*(uint *)(lVar18 + 0x18) <= uVar21) goto code_r0x016ced88;
              iVar10 = *(int *)(lVar18 + unaff_x22 * 4);
              sVar6 = 0;
              if (iVar10 != 0) {
                sVar6 = (short)uVar13 - (short)iVar10;
              }
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar12,2,0);
              /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar12,(int)sVar6);
              lVar18 = *(long *)(lVar12 + 0x28);
              if (lVar18 == 0) goto code_r0x016ced84;
              if (*(uint *)(lVar18 + 0x18) <= uVar21) goto code_r0x016ced88;
              *(undefined4 *)(lVar18 + unaff_x22 * 4) = 0;
              unaff_x22 = unaff_x22 - 1;
              uVar15 = uVar3;
            } while (0 < (long)uVar21);
code_r0x016ceb30:
            uVar9 = *(undefined4 *)(lVar12 + 0x34);
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar12,2,0);
            /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar12,(int)(short)((short)uVar13 - (short)uVar9));
            uVar15 = uVar15 * 2 + 6;
            unaff_x21 = (ulong)uVar15;
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar12,2,0);
            /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar12,(int)(short)uVar15);
            unaff_x22 = (ulong)*(uint *)(lVar12 + 0x40);
            if (0 < (int)*(uint *)(lVar12 + 0x40)) {
              uVar21 = 0;
              do {
                lVar18 = *(long *)(lVar12 + 0x18);
                if (((lVar18 == 0) || (*(long *)(lVar18 + 0x10) == 0)) ||
                   (lVar19 = *(long *)(lVar12 + 0x38), lVar19 == 0)) goto code_r0x016ced84;
                if (*(uint *)(lVar19 + 0x18) <= uVar21) goto code_r0x016ced88;
                uVar3 = *(int *)(*(long *)(lVar18 + 0x10) + 0x18) -
                        *(int *)(lVar19 + uVar21 * 4 + 0x20);
                unaff_x21 = (ulong)uVar3;
                uVar15 = *(uint *)(lVar12 + 0x10);
                unaff_x22 = (ulong)uVar15;
                sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar18,unaff_x21,2);
                if (*(long *)(lVar12 + 0x18) == 0) goto code_r0x016ced84;
                sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar12 + 0x18),unaff_x22,2);
                if (sVar6 == sVar7) {
                  if (sVar6 < 3) {
code_r0x016cec64:
                    unaff_x21 = *(ulong *)(lVar12 + 0x38);
                    if (unaff_x21 == 0) goto code_r0x016ced84;
                    if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar21) goto code_r0x016ced88;
                    iVar10 = *(int *)(unaff_x21 + uVar21 * 4 + 0x20);
                    if (iVar10 == 0) {
                      unaff_x22 = (ulong)*(uint *)(lVar12 + 0x40);
                      goto code_r0x016cecac;
                    }
                    unaff_x21 = *(ulong *)(lVar12 + 0x18);
                    if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0))
                    goto code_r0x016ced84;
                    iVar11 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar20;
                    *(int *)(lVar12 + 0x10) = iVar11;
                    iVar10 = iVar10 - iVar20;
                    goto code_r0x016ced3c;
                  }
                  iVar10 = 2;
                  while( true ) {
                    if (*(long *)(lVar12 + 0x18) == 0) goto code_r0x016ced84;
                    sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar12 + 0x18),uVar3 + iVar10,2);
                    if (*(long *)(lVar12 + 0x18) == 0) goto code_r0x016ced84;
                    sVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar12 + 0x18),uVar15 + iVar10,2);
                    if (sVar7 != sVar8) break;
                    iVar10 = iVar10 + 2;
                    if (sVar6 <= iVar10) goto code_r0x016cec64;
                  }
                }
                uVar21 = uVar21 + 1;
                unaff_x22 = (ulong)*(int *)(lVar12 + 0x40);
              } while ((long)uVar21 < (long)unaff_x22);
            }
            unaff_x21 = *(ulong *)(lVar12 + 0x38);
            if (unaff_x21 == 0) {
code_r0x016ced84:
              func_0x00f78af4();
            }
            else {
code_r0x016cecac:
              if ((int)unaff_x22 == *(int *)(unaff_x21 + 0x18)) {
                unaff_x21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,(int)unaff_x22 << 1);
                lVar18 = *(long *)(lVar12 + 0x38);
                if (lVar18 == 0) goto code_r0x016ced84;
                /*System.Array$$Copy*/ func_0x0292c49c(lVar18,unaff_x21,*(undefined4 *)(lVar18 + 0x18),0);
                *(ulong *)(lVar12 + 0x38) = unaff_x21;
                unaff_x22 = (ulong)*(uint *)(lVar12 + 0x40);
              }
              uVar15 = (uint)unaff_x22;
              *(uint *)(lVar12 + 0x40) = uVar15 + 1;
              uVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar12);
              if (unaff_x21 == 0) goto code_r0x016ced84;
              if (uVar15 < *(uint *)(unaff_x21 + 0x18)) {
                *(undefined4 *)(unaff_x21 + (long)(int)uVar15 * 4 + 0x20) = uVar9;
                unaff_x21 = *(ulong *)(lVar12 + 0x18);
                if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
                  iVar11 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
                  iVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar12);
                  iVar11 = iVar11 - iVar20;
                  iVar10 = iVar10 - iVar20;
code_r0x016ced3c:
                  /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar11,4);
                  /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar11,4,(long)iVar10);
                  *(undefined4 *)(lVar12 + 0x30) = 0xffffffff;
                  return uVar13;
                }
                goto code_r0x016ced84;
              }
            }
code_r0x016ced88:
            uVar16 = func_0x00f78b24();
            func_0x00f78ac0(uVar16,0);
          }
          func_0x00f78a24(0x3d22a38);
          uVar16 = func_0x00f78aec();
          uVar14 = func_0x00f78a24(0x3d6cea8);
          iVar20 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar16,uVar14);
          uVar14 = func_0x00f78a24(0x3d56a30);
          auVar27 = func_0x00f78ac0(uVar16,uVar14);
          puStack_a8 = &FlatBuffers_FlatBufferBuilder__Required;
          pppuVar23 = &ppuStack_b0;
          lVar12 = *(long *)(auVar27._0_8_ + 0x18);
          iStack_d4 = iVar20;
          uStack_d0 = unaff_x22;
          uStack_c8 = unaff_x21;
          uStack_c0 = uVar13;
          uStack_b8 = uVar16;
          ppuStack_b0 = &puStack_60;
          if ((lVar12 != 0) && (*(long *)(lVar12 + 0x10) != 0)) {
            iVar10 = *(int *)(*(long *)(lVar12 + 0x10) + 0x18) - auVar27._8_4_;
            iVar11 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar12,iVar10,4);
            lVar12 = *(long *)(auVar27._0_8_ + 0x18);
            if (lVar12 != 0) {
              uVar13 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar12,(iVar10 - iVar11) + iVar20,2);
              if ((uVar13 & 0xffff) != 0) {
                return uVar13;
              }
              goto code_r0x016cee5c;
            }
          }
          func_0x00f78af4();
code_r0x016cee5c:
          uVar16 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_d4,0);
          uVar14 = func_0x00f78a24(0x3d6ce88);
          uVar17 = func_0x00f78a24(0x3d66338);
          lVar12 = /*System.String$$Concat*/ func_0x029be39c(uVar14,uVar16,uVar17,0);
          func_0x00f78a24(0x3d22a38);
          uVar13 = func_0x00f78aec();
          uVar14 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar13,lVar12);
          uVar16 = func_0x00f78a24(0x3d56a50);
          puVar24 = &FlatBuffers_FlatBufferBuilder__Finish;
          auVar25 = func_0x00f78ac0(uVar13,uVar16);
          puVar5 = auStack_e0;
          do {
            uVar21 = auVar25._8_8_;
            lVar18 = auVar25._0_8_;
            *(ulong *)(puVar5 + -0x20) = uVar13;
            *(long *)(puVar5 + -0x18) = lVar12;
            *(undefined1 ****)(puVar5 + -0x10) = pppuVar23;
            *(undefined **)(puVar5 + -8) = puVar24;
            pppuVar23 = (undefined1 ***)(puVar5 + -0x10);
            if ((int)uVar14 == 0) {
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar18,*(undefined4 *)(lVar18 + 0x20),4);
              uVar13 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar18,uVar21);
code_r0x016cef70:
              if (*(long *)(lVar18 + 0x18) != 0) {
                *(undefined4 *)(*(long *)(lVar18 + 0x18) + 0x18) = *(undefined4 *)(lVar18 + 0x10);
                return uVar13;
              }
            }
            else if (lVar18 != 0) {
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar18,*(undefined4 *)(lVar18 + 0x20),8);
              /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar18,uVar21);
              if ((*(long *)(lVar18 + 0x18) != 0) &&
                 (lVar12 = *(long *)(*(long *)(lVar18 + 0x18) + 0x10), lVar12 != 0)) {
                uVar21 = (ulong)(uint)(*(int *)(lVar12 + 0x18) - *(int *)(lVar18 + 0x10));
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar18,4,0);
                uVar13 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar18,uVar21);
                goto code_r0x016cef70;
              }
            }
            puVar24 = &FlatBuffers_FlatBufferBuilder__Finish;
            auVar25 = func_0x00f78af4();
            uVar14 = 0;
            puVar5 = puVar5 + -0x20;
            lVar12 = lVar18;
            uVar13 = uVar21;
          } while( true );
        }
        uVar14 = 1;
      }
      else {
        uVar14 = 2;
      }
      uVar16 = auVar25._8_8_;
      uVar13 = auVar25._0_8_;
      auVar26._8_8_ = uVar14;
      auVar26._0_8_ = uVar13;
      param_4 = 0;
      *(long *)((long)ppuVar4 + -0x20) = unaff_x20;
      *(long *)((long)ppuVar4 + -0x18) = unaff_x19;
      *(undefined1 ***)((long)ppuVar4 + -0x10) = ppuVar4;
      *(undefined **)((long)ppuVar4 + -8) = puVar24;
      if ((auVar25._8_4_ == 0) && (*(char *)(uVar13 + 0x48) == '\0')) {
        return uVar13;
      }
      /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(uVar13,uVar16,uVar16,0,0);
      puVar22 = *(undefined1 **)((long)ppuVar4 + -0x10);
      puVar24 = *(undefined **)((long)ppuVar4 + -8);
      unaff_x20 = *(long *)((long)ppuVar4 + -0x20);
      unaff_x19 = *(long *)((long)ppuVar4 + -0x18);
      goto code_r0x016ce380;
    }
    uVar16 = 0;
  }
  else {
    uVar16 = 4;
    puVar5 = (undefined1 *)register0x00000008;
  }
  uVar13 = auVar25._0_8_;
  auVar26._8_8_ = uVar16;
  auVar26._0_8_ = uVar13;
  param_4 = 0;
  *(ulong *)(puVar5 + -0x30) = unaff_x22;
  *(ulong *)(puVar5 + -0x28) = unaff_x21;
  *(long *)(puVar5 + -0x20) = unaff_x20;
  *(long *)(puVar5 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar5 + -0x10) = unaff_x29;
  *(undefined **)(puVar5 + -8) = unaff_x30;
  if ((auVar25._8_8_ == 0) && (*(char *)(uVar13 + 0x48) == '\0')) {
    return uVar13;
  }
  uVar16 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,8,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutUlong*/ func_0x016cddc8(uVar13,auVar25._8_8_);
  unaff_x20 = *(long *)(puVar5 + -0x20);
  unaff_x19 = *(long *)(puVar5 + -0x18);
  unaff_x22 = *(ulong *)(puVar5 + -0x30);
  unaff_x21 = *(ulong *)(puVar5 + -0x28);
  ppuVar4 = (undefined1 **)puVar5;
  puVar22 = *(undefined1 **)(puVar5 + -0x10);
  puVar24 = *(undefined **)(puVar5 + -8);
code_r0x016ce380:
  do {
    uVar14 = auVar26._8_8_;
    *(long *)((long)ppuVar4 + -0x20) = unaff_x20;
    *(long *)((long)ppuVar4 + -0x18) = unaff_x19;
    *(undefined1 **)((long)ppuVar4 + -0x10) = puVar22;
    *(undefined **)((long)ppuVar4 + -8) = puVar24;
    uVar15 = auVar26._8_4_;
    if ((int)uVar15 < *(int *)(auVar26._0_8_ + 0x30)) {
      unaff_x20 = *(long *)(auVar26._0_8_ + 0x28);
      uVar13 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      uVar17 = uVar16;
      if (unaff_x20 == 0) goto code_r0x016ce410;
      if (uVar15 < *(uint *)(unaff_x20 + 0x18)) {
        *(int *)(unaff_x20 + (long)(int)uVar15 * 4 + 0x20) = (int)uVar13;
        return uVar13;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      uVar14 = func_0x00f78aec();
      uVar16 = func_0x00f78a24(0x3d6ceb8);
      uVar17 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar14,uVar16);
      uVar16 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar14,uVar16);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar16 = func_0x00f78b24();
    auVar26 = func_0x00f78ac0(uVar16,0);
    uVar13 = auVar26._0_8_;
    *(ulong *)((long)ppuVar4 + -0x50) = unaff_x22;
    *(ulong *)((long)ppuVar4 + -0x48) = unaff_x21;
    *(long *)((long)ppuVar4 + -0x40) = unaff_x20;
    *(undefined8 *)((long)ppuVar4 + -0x38) = uVar14;
    *(undefined1 **)((long)ppuVar4 + -0x30) = (undefined1 *)((long)ppuVar4 + -0x10);
    *(undefined **)((long)ppuVar4 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    if (((int)uVar17 == (int)param_4) && (*(char *)(uVar13 + 0x48) == '\0')) {
      return uVar13;
    }
    uVar16 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar13,uVar17);
    plVar1 = (long *)((long)ppuVar4 + -0x30);
    puVar2 = (undefined8 *)((long)ppuVar4 + -0x28);
    unaff_x20 = *(long *)((long)ppuVar4 + -0x40);
    unaff_x19 = *(long *)((long)ppuVar4 + -0x38);
    unaff_x22 = *(ulong *)((long)ppuVar4 + -0x50);
    unaff_x21 = *(ulong *)((long)ppuVar4 + -0x48);
    ppuVar4 = (undefined1 **)((long)ppuVar4 + -0x20);
    puVar22 = (undefined1 *)*plVar1;
    puVar24 = (undefined *)*puVar2;
  } while( true );
}



// ============================================================
// RVA: 0x167c2ec | Core.Services.LeaderboardScore.AddContext
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_LeaderboardScore__AddContext
                (ulong param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long unaff_x19;
  undefined8 uVar16;
  int iVar17;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar18;
  undefined1 *unaff_x29;
  undefined1 ***pppuVar19;
  undefined *unaff_x30;
  undefined *puVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  ulong auStack_f0 [4];
  undefined1 auStack_d0 [12];
  int iStack_c4;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  if (param_1 != 0) {
    param_4 = 0;
    uVar16 = 0;
    if ((param_2 == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    uVar13 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,8,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutUlong*/ func_0x016cddc8(param_1,param_2);
    puVar2 = (undefined1 *)register0x00000008;
    goto code_r0x016ce380;
  }
  unaff_x29 = &stack0xfffffffffffffff0;
  auVar21 = func_0x00f78af4();
  param_1 = auVar21._0_8_;
  if (param_1 != 0) {
    param_4 = 0;
    if ((auVar21._8_4_ == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    uVar13 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,4,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(param_1,auVar21._8_8_);
    uVar16 = 3;
    unaff_x30 = &Core_Services_LeaderboardScore__AddRank;
    puVar2 = &stack0xfffffffffffffff0;
    goto code_r0x016ce380;
  }
  puVar2 = &stack0xffffffffffffffe0;
  puVar20 = &Core_Services_LeaderboardScore__AddPlayer;
  auVar21 = func_0x00f78af4();
  if (auVar21._0_8_ == 0) {
    puVar2 = &stack0xffffffffffffffd0;
    puVar20 = &Core_Services_LeaderboardScore__AddFormattedValue;
    auVar21 = func_0x00f78af4();
    if (auVar21._0_8_ == 0) {
      lVar9 = func_0x00f78af4();
      puStack_48 = &Core_Services_LeaderboardScore__EndLeaderboardScore;
      puStack_50 = &stack0xffffffffffffffc0;
      if ((bRam0000000003eb59c9 & 1) == 0) {
        puStack_50 = &stack0xffffffffffffffc0;
        func_0x00f78a20(0x3d3f160);
        bRam0000000003eb59c9 = 1;
      }
      if (lVar9 == 0) {
        unaff_x19 = func_0x00f78af4();
        if (unaff_x19 == 0) {
          lVar9 = func_0x00f78af4();
          return *(ulong *)(lVar9 + 8);
        }
        uVar13 = 0;
        puVar2 = &stack0xffffffffffffff70;
        unaff_x29 = &stack0xffffffffffffff90;
        unaff_x20 = 5;
        unaff_x21 = 0x3eb5000;
        if ((bRam0000000003eb5cd7 & 1) == 0) {
          func_0x00f78a20(0x3d1f100);
          bRam0000000003eb5cd7 = 1;
        }
        /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(unaff_x19);
        if (*(long *)(unaff_x19 + 0x28) != 0) {
          if (*(int *)(*(long *)(unaff_x19 + 0x28) + 0x18) < 5) {
            uVar16 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,5);
            *(undefined8 *)(unaff_x19 + 0x28) = uVar16;
          }
          *(undefined4 *)(unaff_x19 + 0x30) = 5;
          uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(unaff_x19);
          *(int *)(unaff_x19 + 0x34) = (int)uVar10;
          return uVar10;
        }
        unaff_x30 = &FlatBuffers_FlatBufferBuilder__Slot;
        auVar21 = func_0x00f78af4();
        uVar16 = auVar21._8_8_;
        param_1 = auVar21._0_8_;
        goto code_r0x016ce380;
      }
      uVar10 = 0x3eb5000;
      if ((bRam0000000003eb5cd8 & 1) == 0) {
        func_0x00f78a20(0x3d1f100,0);
        bRam0000000003eb5cd8 = 1;
      }
      if (-1 < *(int *)(lVar9 + 0x30)) {
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar9,4,0);
        /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar9,0);
        uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar9);
        unaff_x21 = (ulong)*(uint *)(lVar9 + 0x30);
        uVar11 = *(uint *)(lVar9 + 0x30) - 1;
        if (-2 < (int)uVar11) {
          uVar11 = 0xffffffff;
        }
        unaff_x22 = (ulong)uVar11;
        do {
          uVar1 = (int)unaff_x21 - 1;
          unaff_x21 = (ulong)uVar1;
          iVar17 = (int)uVar10;
          if ((int)uVar1 < 0) goto code_r0x016ceb30;
          lVar14 = *(long *)(lVar9 + 0x28);
          if (lVar14 == 0) goto code_r0x016ced84;
          if (*(uint *)(lVar14 + 0x18) <= uVar1) goto code_r0x016ced88;
        } while (*(int *)(lVar14 + (ulong)uVar1 * 4 + 0x20) == 0);
        unaff_x22 = unaff_x21 + 8;
        do {
          uVar18 = unaff_x22 - 8;
          if (*(uint *)(lVar14 + 0x18) <= uVar18) goto code_r0x016ced88;
          iVar7 = *(int *)(lVar14 + unaff_x22 * 4);
          sVar3 = 0;
          if (iVar7 != 0) {
            sVar3 = (short)uVar10 - (short)iVar7;
          }
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar9,2,0);
          /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar9,(int)sVar3);
          lVar14 = *(long *)(lVar9 + 0x28);
          if (lVar14 == 0) goto code_r0x016ced84;
          if (*(uint *)(lVar14 + 0x18) <= uVar18) goto code_r0x016ced88;
          *(undefined4 *)(lVar14 + unaff_x22 * 4) = 0;
          unaff_x22 = unaff_x22 - 1;
          uVar11 = uVar1;
        } while (0 < (long)uVar18);
code_r0x016ceb30:
        uVar6 = *(undefined4 *)(lVar9 + 0x34);
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar9,2,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar9,(int)(short)((short)uVar10 - (short)uVar6));
        uVar11 = uVar11 * 2 + 6;
        unaff_x21 = (ulong)uVar11;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar9,2,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar9,(int)(short)uVar11);
        unaff_x22 = (ulong)*(uint *)(lVar9 + 0x40);
        if (0 < (int)*(uint *)(lVar9 + 0x40)) {
          uVar18 = 0;
          do {
            lVar14 = *(long *)(lVar9 + 0x18);
            if (((lVar14 == 0) || (*(long *)(lVar14 + 0x10) == 0)) ||
               (lVar15 = *(long *)(lVar9 + 0x38), lVar15 == 0)) goto code_r0x016ced84;
            if (*(uint *)(lVar15 + 0x18) <= uVar18) goto code_r0x016ced88;
            uVar1 = *(int *)(*(long *)(lVar14 + 0x10) + 0x18) - *(int *)(lVar15 + uVar18 * 4 + 0x20)
            ;
            unaff_x21 = (ulong)uVar1;
            uVar11 = *(uint *)(lVar9 + 0x10);
            unaff_x22 = (ulong)uVar11;
            sVar3 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar14,unaff_x21,2);
            if (*(long *)(lVar9 + 0x18) == 0) goto code_r0x016ced84;
            sVar4 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar9 + 0x18),unaff_x22,2);
            if (sVar3 == sVar4) {
              if (sVar3 < 3) {
code_r0x016cec64:
                unaff_x21 = *(ulong *)(lVar9 + 0x38);
                if (unaff_x21 == 0) goto code_r0x016ced84;
                if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar18) goto code_r0x016ced88;
                iVar7 = *(int *)(unaff_x21 + uVar18 * 4 + 0x20);
                if (iVar7 == 0) {
                  unaff_x22 = (ulong)*(uint *)(lVar9 + 0x40);
                  goto code_r0x016cecac;
                }
                unaff_x21 = *(ulong *)(lVar9 + 0x18);
                if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
                iVar8 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar17;
                *(int *)(lVar9 + 0x10) = iVar8;
                iVar7 = iVar7 - iVar17;
                goto code_r0x016ced3c;
              }
              iVar7 = 2;
              while( true ) {
                if (*(long *)(lVar9 + 0x18) == 0) goto code_r0x016ced84;
                sVar4 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar9 + 0x18),uVar1 + iVar7,2);
                if (*(long *)(lVar9 + 0x18) == 0) goto code_r0x016ced84;
                sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar9 + 0x18),uVar11 + iVar7,2);
                if (sVar4 != sVar5) break;
                iVar7 = iVar7 + 2;
                if (sVar3 <= iVar7) goto code_r0x016cec64;
              }
            }
            uVar18 = uVar18 + 1;
            unaff_x22 = (ulong)*(int *)(lVar9 + 0x40);
          } while ((long)uVar18 < (long)unaff_x22);
        }
        unaff_x21 = *(ulong *)(lVar9 + 0x38);
        if (unaff_x21 == 0) {
code_r0x016ced84:
          func_0x00f78af4();
        }
        else {
code_r0x016cecac:
          if ((int)unaff_x22 == *(int *)(unaff_x21 + 0x18)) {
            unaff_x21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,(int)unaff_x22 << 1);
            lVar14 = *(long *)(lVar9 + 0x38);
            if (lVar14 == 0) goto code_r0x016ced84;
            /*System.Array$$Copy*/ func_0x0292c49c(lVar14,unaff_x21,*(undefined4 *)(lVar14 + 0x18),0);
            *(ulong *)(lVar9 + 0x38) = unaff_x21;
            unaff_x22 = (ulong)*(uint *)(lVar9 + 0x40);
          }
          uVar11 = (uint)unaff_x22;
          *(uint *)(lVar9 + 0x40) = uVar11 + 1;
          uVar6 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar9);
          if (unaff_x21 == 0) goto code_r0x016ced84;
          if (uVar11 < *(uint *)(unaff_x21 + 0x18)) {
            *(undefined4 *)(unaff_x21 + (long)(int)uVar11 * 4 + 0x20) = uVar6;
            unaff_x21 = *(ulong *)(lVar9 + 0x18);
            if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
              iVar8 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
              iVar7 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar9);
              iVar8 = iVar8 - iVar17;
              iVar7 = iVar7 - iVar17;
code_r0x016ced3c:
              /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar8,4);
              /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar8,4,(long)iVar7);
              *(undefined4 *)(lVar9 + 0x30) = 0xffffffff;
              return uVar10;
            }
            goto code_r0x016ced84;
          }
        }
code_r0x016ced88:
        uVar16 = func_0x00f78b24();
        func_0x00f78ac0(uVar16,0);
      }
      func_0x00f78a24(0x3d22a38);
      uVar16 = func_0x00f78aec();
      uVar13 = func_0x00f78a24(0x3d6cea8);
      iVar17 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar16,uVar13);
      uVar13 = func_0x00f78a24(0x3d56a30);
      auVar22 = func_0x00f78ac0(uVar16,uVar13);
      puStack_98 = &FlatBuffers_FlatBufferBuilder__Required;
      pppuVar19 = &ppuStack_a0;
      lVar9 = *(long *)(auVar22._0_8_ + 0x18);
      iStack_c4 = iVar17;
      uStack_c0 = unaff_x22;
      uStack_b8 = unaff_x21;
      uStack_b0 = uVar10;
      uStack_a8 = uVar16;
      ppuStack_a0 = &puStack_50;
      if ((lVar9 != 0) && (*(long *)(lVar9 + 0x10) != 0)) {
        iVar7 = *(int *)(*(long *)(lVar9 + 0x10) + 0x18) - auVar22._8_4_;
        iVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar9,iVar7,4);
        lVar9 = *(long *)(auVar22._0_8_ + 0x18);
        if (lVar9 != 0) {
          uVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar9,(iVar7 - iVar8) + iVar17,2);
          if ((uVar10 & 0xffff) != 0) {
            return uVar10;
          }
          goto code_r0x016cee5c;
        }
      }
      func_0x00f78af4();
code_r0x016cee5c:
      uVar16 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_c4,0);
      uVar13 = func_0x00f78a24(0x3d6ce88);
      uVar12 = func_0x00f78a24(0x3d66338);
      lVar9 = /*System.String$$Concat*/ func_0x029be39c(uVar13,uVar16,uVar12,0);
      func_0x00f78a24(0x3d22a38);
      uVar10 = func_0x00f78aec();
      uVar13 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar10,lVar9);
      uVar16 = func_0x00f78a24(0x3d56a50);
      puVar20 = &FlatBuffers_FlatBufferBuilder__Finish;
      auVar21 = func_0x00f78ac0(uVar10,uVar16);
      puVar2 = auStack_d0;
      do {
        uVar18 = auVar21._8_8_;
        lVar14 = auVar21._0_8_;
        *(ulong *)(puVar2 + -0x20) = uVar10;
        *(long *)(puVar2 + -0x18) = lVar9;
        *(undefined1 ****)(puVar2 + -0x10) = pppuVar19;
        *(undefined **)(puVar2 + -8) = puVar20;
        pppuVar19 = (undefined1 ***)(puVar2 + -0x10);
        if ((int)uVar13 == 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar14,*(undefined4 *)(lVar14 + 0x20),4);
          uVar10 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar14,uVar18);
code_r0x016cef70:
          if (*(long *)(lVar14 + 0x18) != 0) {
            *(undefined4 *)(*(long *)(lVar14 + 0x18) + 0x18) = *(undefined4 *)(lVar14 + 0x10);
            return uVar10;
          }
        }
        else if (lVar14 != 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar14,*(undefined4 *)(lVar14 + 0x20),8);
          /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar14,uVar18);
          if ((*(long *)(lVar14 + 0x18) != 0) &&
             (lVar9 = *(long *)(*(long *)(lVar14 + 0x18) + 0x10), lVar9 != 0)) {
            uVar18 = (ulong)(uint)(*(int *)(lVar9 + 0x18) - *(int *)(lVar14 + 0x10));
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar14,4,0);
            uVar10 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar14,uVar18);
            goto code_r0x016cef70;
          }
        }
        puVar20 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar21 = func_0x00f78af4();
        uVar13 = 0;
        puVar2 = puVar2 + -0x20;
        lVar9 = lVar14;
        uVar10 = uVar18;
      } while( true );
    }
    uVar16 = 1;
  }
  else {
    uVar16 = 2;
  }
  uVar13 = auVar21._8_8_;
  param_1 = auVar21._0_8_;
  param_4 = 0;
  *(long *)(puVar2 + -0x20) = unaff_x20;
  *(long *)(puVar2 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar2 + -0x10) = puVar2;
  *(undefined **)(puVar2 + -8) = puVar20;
  if ((auVar21._8_4_ == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
    return param_1;
  }
  /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(param_1,uVar13,uVar13,0,0);
  unaff_x29 = *(undefined1 **)(puVar2 + -0x10);
  unaff_x30 = *(undefined **)(puVar2 + -8);
  unaff_x20 = *(long *)(puVar2 + -0x20);
  unaff_x19 = *(long *)(puVar2 + -0x18);
code_r0x016ce380:
  do {
    *(long *)(puVar2 + -0x20) = unaff_x20;
    *(long *)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined **)(puVar2 + -8) = unaff_x30;
    uVar11 = (uint)uVar16;
    if ((int)uVar11 < *(int *)(param_1 + 0x30)) {
      unaff_x20 = *(long *)(param_1 + 0x28);
      uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      uVar12 = uVar13;
      if (unaff_x20 == 0) goto code_r0x016ce410;
      uVar13 = uVar16;
      if (uVar11 < *(uint *)(unaff_x20 + 0x18)) {
        *(int *)(unaff_x20 + (long)(int)uVar11 * 4 + 0x20) = (int)uVar10;
        return uVar10;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      uVar16 = func_0x00f78aec();
      uVar13 = func_0x00f78a24(0x3d6ceb8);
      uVar12 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar16,uVar13);
      uVar13 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar16,uVar13);
code_r0x016ce410:
      func_0x00f78af4();
      uVar13 = uVar16;
    }
    uVar16 = func_0x00f78b24();
    auVar21 = func_0x00f78ac0(uVar16,0);
    uVar16 = auVar21._8_8_;
    param_1 = auVar21._0_8_;
    *(ulong *)(puVar2 + -0x50) = unaff_x22;
    *(ulong *)(puVar2 + -0x48) = unaff_x21;
    *(long *)(puVar2 + -0x40) = unaff_x20;
    *(undefined8 *)(puVar2 + -0x38) = uVar13;
    *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    if (((int)uVar12 == (int)param_4) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    uVar13 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(param_1,uVar12);
    unaff_x29 = *(undefined1 **)(puVar2 + -0x30);
    unaff_x30 = *(undefined **)(puVar2 + -0x28);
    unaff_x20 = *(long *)(puVar2 + -0x40);
    unaff_x19 = *(long *)(puVar2 + -0x38);
    unaff_x22 = *(ulong *)(puVar2 + -0x50);
    unaff_x21 = *(ulong *)(puVar2 + -0x48);
    puVar2 = puVar2 + -0x20;
  } while( true );
}



// ============================================================
// RVA: 0x167c310 | Core.Services.LeaderboardScore.AddRank
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_LeaderboardScore__AddRank
                (ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long unaff_x19;
  undefined8 uVar16;
  int iVar17;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar18;
  undefined1 *unaff_x29;
  undefined1 ***pppuVar19;
  undefined *unaff_x30;
  undefined *puVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  ulong auStack_e0 [4];
  undefined1 auStack_c0 [12];
  int iStack_b4;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if (param_1 != 0) {
    param_4 = 0;
    uVar16 = 3;
    if (((int)param_2 == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    uVar13 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,4,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(param_1,param_2);
    puVar2 = (undefined1 *)register0x00000008;
    goto code_r0x016ce380;
  }
  puVar2 = &stack0xfffffffffffffff0;
  puVar20 = &Core_Services_LeaderboardScore__AddPlayer;
  auVar21 = func_0x00f78af4();
  if (auVar21._0_8_ == 0) {
    puVar2 = &stack0xffffffffffffffe0;
    puVar20 = &Core_Services_LeaderboardScore__AddFormattedValue;
    auVar21 = func_0x00f78af4();
    if (auVar21._0_8_ == 0) {
      lVar9 = func_0x00f78af4();
      puStack_38 = &Core_Services_LeaderboardScore__EndLeaderboardScore;
      puStack_40 = &stack0xffffffffffffffd0;
      if ((bRam0000000003eb59c9 & 1) == 0) {
        puStack_40 = &stack0xffffffffffffffd0;
        func_0x00f78a20(0x3d3f160);
        bRam0000000003eb59c9 = 1;
      }
      if (lVar9 == 0) {
        unaff_x19 = func_0x00f78af4();
        if (unaff_x19 == 0) {
          lVar9 = func_0x00f78af4();
          return *(ulong *)(lVar9 + 8);
        }
        uVar13 = 0;
        puVar2 = &stack0xffffffffffffff80;
        unaff_x29 = &stack0xffffffffffffffa0;
        unaff_x20 = 5;
        unaff_x21 = 0x3eb5000;
        if ((bRam0000000003eb5cd7 & 1) == 0) {
          func_0x00f78a20(0x3d1f100);
          bRam0000000003eb5cd7 = 1;
        }
        /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(unaff_x19);
        if (*(long *)(unaff_x19 + 0x28) != 0) {
          if (*(int *)(*(long *)(unaff_x19 + 0x28) + 0x18) < 5) {
            uVar16 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,5);
            *(undefined8 *)(unaff_x19 + 0x28) = uVar16;
          }
          *(undefined4 *)(unaff_x19 + 0x30) = 5;
          uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(unaff_x19);
          *(int *)(unaff_x19 + 0x34) = (int)uVar10;
          return uVar10;
        }
        unaff_x30 = &FlatBuffers_FlatBufferBuilder__Slot;
        auVar21 = func_0x00f78af4();
        uVar16 = auVar21._8_8_;
        param_1 = auVar21._0_8_;
        goto code_r0x016ce380;
      }
      uVar10 = 0x3eb5000;
      if ((bRam0000000003eb5cd8 & 1) == 0) {
        func_0x00f78a20(0x3d1f100,0);
        bRam0000000003eb5cd8 = 1;
      }
      if (-1 < *(int *)(lVar9 + 0x30)) {
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar9,4,0);
        /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar9,0);
        uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar9);
        unaff_x21 = (ulong)*(uint *)(lVar9 + 0x30);
        uVar11 = *(uint *)(lVar9 + 0x30) - 1;
        if (-2 < (int)uVar11) {
          uVar11 = 0xffffffff;
        }
        unaff_x22 = (ulong)uVar11;
        do {
          uVar1 = (int)unaff_x21 - 1;
          unaff_x21 = (ulong)uVar1;
          iVar17 = (int)uVar10;
          if ((int)uVar1 < 0) goto code_r0x016ceb30;
          lVar14 = *(long *)(lVar9 + 0x28);
          if (lVar14 == 0) goto code_r0x016ced84;
          if (*(uint *)(lVar14 + 0x18) <= uVar1) goto code_r0x016ced88;
        } while (*(int *)(lVar14 + (ulong)uVar1 * 4 + 0x20) == 0);
        unaff_x22 = unaff_x21 + 8;
        do {
          uVar18 = unaff_x22 - 8;
          if (*(uint *)(lVar14 + 0x18) <= uVar18) goto code_r0x016ced88;
          iVar7 = *(int *)(lVar14 + unaff_x22 * 4);
          sVar3 = 0;
          if (iVar7 != 0) {
            sVar3 = (short)uVar10 - (short)iVar7;
          }
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar9,2,0);
          /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar9,(int)sVar3);
          lVar14 = *(long *)(lVar9 + 0x28);
          if (lVar14 == 0) goto code_r0x016ced84;
          if (*(uint *)(lVar14 + 0x18) <= uVar18) goto code_r0x016ced88;
          *(undefined4 *)(lVar14 + unaff_x22 * 4) = 0;
          unaff_x22 = unaff_x22 - 1;
          uVar11 = uVar1;
        } while (0 < (long)uVar18);
code_r0x016ceb30:
        uVar6 = *(undefined4 *)(lVar9 + 0x34);
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar9,2,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar9,(int)(short)((short)uVar10 - (short)uVar6));
        uVar11 = uVar11 * 2 + 6;
        unaff_x21 = (ulong)uVar11;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar9,2,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar9,(int)(short)uVar11);
        unaff_x22 = (ulong)*(uint *)(lVar9 + 0x40);
        if (0 < (int)*(uint *)(lVar9 + 0x40)) {
          uVar18 = 0;
          do {
            lVar14 = *(long *)(lVar9 + 0x18);
            if (((lVar14 == 0) || (*(long *)(lVar14 + 0x10) == 0)) ||
               (lVar15 = *(long *)(lVar9 + 0x38), lVar15 == 0)) goto code_r0x016ced84;
            if (*(uint *)(lVar15 + 0x18) <= uVar18) goto code_r0x016ced88;
            uVar1 = *(int *)(*(long *)(lVar14 + 0x10) + 0x18) - *(int *)(lVar15 + uVar18 * 4 + 0x20)
            ;
            unaff_x21 = (ulong)uVar1;
            uVar11 = *(uint *)(lVar9 + 0x10);
            unaff_x22 = (ulong)uVar11;
            sVar3 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar14,unaff_x21,2);
            if (*(long *)(lVar9 + 0x18) == 0) goto code_r0x016ced84;
            sVar4 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar9 + 0x18),unaff_x22,2);
            if (sVar3 == sVar4) {
              if (sVar3 < 3) {
code_r0x016cec64:
                unaff_x21 = *(ulong *)(lVar9 + 0x38);
                if (unaff_x21 == 0) goto code_r0x016ced84;
                if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar18) goto code_r0x016ced88;
                iVar7 = *(int *)(unaff_x21 + uVar18 * 4 + 0x20);
                if (iVar7 == 0) {
                  unaff_x22 = (ulong)*(uint *)(lVar9 + 0x40);
                  goto code_r0x016cecac;
                }
                unaff_x21 = *(ulong *)(lVar9 + 0x18);
                if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
                iVar8 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar17;
                *(int *)(lVar9 + 0x10) = iVar8;
                iVar7 = iVar7 - iVar17;
                goto code_r0x016ced3c;
              }
              iVar7 = 2;
              while( true ) {
                if (*(long *)(lVar9 + 0x18) == 0) goto code_r0x016ced84;
                sVar4 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar9 + 0x18),uVar1 + iVar7,2);
                if (*(long *)(lVar9 + 0x18) == 0) goto code_r0x016ced84;
                sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar9 + 0x18),uVar11 + iVar7,2);
                if (sVar4 != sVar5) break;
                iVar7 = iVar7 + 2;
                if (sVar3 <= iVar7) goto code_r0x016cec64;
              }
            }
            uVar18 = uVar18 + 1;
            unaff_x22 = (ulong)*(int *)(lVar9 + 0x40);
          } while ((long)uVar18 < (long)unaff_x22);
        }
        unaff_x21 = *(ulong *)(lVar9 + 0x38);
        if (unaff_x21 == 0) {
code_r0x016ced84:
          func_0x00f78af4();
        }
        else {
code_r0x016cecac:
          if ((int)unaff_x22 == *(int *)(unaff_x21 + 0x18)) {
            unaff_x21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,(int)unaff_x22 << 1);
            lVar14 = *(long *)(lVar9 + 0x38);
            if (lVar14 == 0) goto code_r0x016ced84;
            /*System.Array$$Copy*/ func_0x0292c49c(lVar14,unaff_x21,*(undefined4 *)(lVar14 + 0x18),0);
            *(ulong *)(lVar9 + 0x38) = unaff_x21;
            unaff_x22 = (ulong)*(uint *)(lVar9 + 0x40);
          }
          uVar11 = (uint)unaff_x22;
          *(uint *)(lVar9 + 0x40) = uVar11 + 1;
          uVar6 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar9);
          if (unaff_x21 == 0) goto code_r0x016ced84;
          if (uVar11 < *(uint *)(unaff_x21 + 0x18)) {
            *(undefined4 *)(unaff_x21 + (long)(int)uVar11 * 4 + 0x20) = uVar6;
            unaff_x21 = *(ulong *)(lVar9 + 0x18);
            if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
              iVar8 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
              iVar7 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar9);
              iVar8 = iVar8 - iVar17;
              iVar7 = iVar7 - iVar17;
code_r0x016ced3c:
              /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar8,4);
              /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar8,4,(long)iVar7);
              *(undefined4 *)(lVar9 + 0x30) = 0xffffffff;
              return uVar10;
            }
            goto code_r0x016ced84;
          }
        }
code_r0x016ced88:
        uVar16 = func_0x00f78b24();
        func_0x00f78ac0(uVar16,0);
      }
      func_0x00f78a24(0x3d22a38);
      uVar16 = func_0x00f78aec();
      uVar13 = func_0x00f78a24(0x3d6cea8);
      iVar17 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar16,uVar13);
      uVar13 = func_0x00f78a24(0x3d56a30);
      auVar22 = func_0x00f78ac0(uVar16,uVar13);
      puStack_88 = &FlatBuffers_FlatBufferBuilder__Required;
      pppuVar19 = &ppuStack_90;
      lVar9 = *(long *)(auVar22._0_8_ + 0x18);
      iStack_b4 = iVar17;
      uStack_b0 = unaff_x22;
      uStack_a8 = unaff_x21;
      uStack_a0 = uVar10;
      uStack_98 = uVar16;
      ppuStack_90 = &puStack_40;
      if ((lVar9 != 0) && (*(long *)(lVar9 + 0x10) != 0)) {
        iVar7 = *(int *)(*(long *)(lVar9 + 0x10) + 0x18) - auVar22._8_4_;
        iVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar9,iVar7,4);
        lVar9 = *(long *)(auVar22._0_8_ + 0x18);
        if (lVar9 != 0) {
          uVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar9,(iVar7 - iVar8) + iVar17,2);
          if ((uVar10 & 0xffff) != 0) {
            return uVar10;
          }
          goto code_r0x016cee5c;
        }
      }
      func_0x00f78af4();
code_r0x016cee5c:
      uVar16 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_b4,0);
      uVar13 = func_0x00f78a24(0x3d6ce88);
      uVar12 = func_0x00f78a24(0x3d66338);
      lVar9 = /*System.String$$Concat*/ func_0x029be39c(uVar13,uVar16,uVar12,0);
      func_0x00f78a24(0x3d22a38);
      uVar10 = func_0x00f78aec();
      uVar13 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar10,lVar9);
      uVar16 = func_0x00f78a24(0x3d56a50);
      puVar20 = &FlatBuffers_FlatBufferBuilder__Finish;
      auVar21 = func_0x00f78ac0(uVar10,uVar16);
      puVar2 = auStack_c0;
      do {
        uVar18 = auVar21._8_8_;
        lVar14 = auVar21._0_8_;
        *(ulong *)(puVar2 + -0x20) = uVar10;
        *(long *)(puVar2 + -0x18) = lVar9;
        *(undefined1 ****)(puVar2 + -0x10) = pppuVar19;
        *(undefined **)(puVar2 + -8) = puVar20;
        pppuVar19 = (undefined1 ***)(puVar2 + -0x10);
        if ((int)uVar13 == 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar14,*(undefined4 *)(lVar14 + 0x20),4);
          uVar10 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar14,uVar18);
code_r0x016cef70:
          if (*(long *)(lVar14 + 0x18) != 0) {
            *(undefined4 *)(*(long *)(lVar14 + 0x18) + 0x18) = *(undefined4 *)(lVar14 + 0x10);
            return uVar10;
          }
        }
        else if (lVar14 != 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar14,*(undefined4 *)(lVar14 + 0x20),8);
          /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar14,uVar18);
          if ((*(long *)(lVar14 + 0x18) != 0) &&
             (lVar9 = *(long *)(*(long *)(lVar14 + 0x18) + 0x10), lVar9 != 0)) {
            uVar18 = (ulong)(uint)(*(int *)(lVar9 + 0x18) - *(int *)(lVar14 + 0x10));
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar14,4,0);
            uVar10 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar14,uVar18);
            goto code_r0x016cef70;
          }
        }
        puVar20 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar21 = func_0x00f78af4();
        uVar13 = 0;
        puVar2 = puVar2 + -0x20;
        lVar9 = lVar14;
        uVar10 = uVar18;
      } while( true );
    }
    uVar16 = 1;
  }
  else {
    uVar16 = 2;
  }
  uVar13 = auVar21._8_8_;
  param_1 = auVar21._0_8_;
  param_4 = 0;
  *(long *)(puVar2 + -0x20) = unaff_x20;
  *(long *)(puVar2 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar2 + -0x10) = puVar2;
  *(undefined **)(puVar2 + -8) = puVar20;
  if ((auVar21._8_4_ == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
    return param_1;
  }
  /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(param_1,uVar13,uVar13,0,0);
  unaff_x29 = *(undefined1 **)(puVar2 + -0x10);
  unaff_x30 = *(undefined **)(puVar2 + -8);
  unaff_x20 = *(long *)(puVar2 + -0x20);
  unaff_x19 = *(long *)(puVar2 + -0x18);
code_r0x016ce380:
  do {
    *(long *)(puVar2 + -0x20) = unaff_x20;
    *(long *)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined **)(puVar2 + -8) = unaff_x30;
    uVar11 = (uint)uVar16;
    if ((int)uVar11 < *(int *)(param_1 + 0x30)) {
      unaff_x20 = *(long *)(param_1 + 0x28);
      uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      uVar12 = uVar13;
      if (unaff_x20 == 0) goto code_r0x016ce410;
      uVar13 = uVar16;
      if (uVar11 < *(uint *)(unaff_x20 + 0x18)) {
        *(int *)(unaff_x20 + (long)(int)uVar11 * 4 + 0x20) = (int)uVar10;
        return uVar10;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      uVar16 = func_0x00f78aec();
      uVar13 = func_0x00f78a24(0x3d6ceb8);
      uVar12 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar16,uVar13);
      uVar13 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar16,uVar13);
code_r0x016ce410:
      func_0x00f78af4();
      uVar13 = uVar16;
    }
    uVar16 = func_0x00f78b24();
    auVar21 = func_0x00f78ac0(uVar16,0);
    uVar16 = auVar21._8_8_;
    param_1 = auVar21._0_8_;
    *(ulong *)(puVar2 + -0x50) = unaff_x22;
    *(ulong *)(puVar2 + -0x48) = unaff_x21;
    *(long *)(puVar2 + -0x40) = unaff_x20;
    *(undefined8 *)(puVar2 + -0x38) = uVar13;
    *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    if (((int)uVar12 == (int)param_4) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    uVar13 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(param_1,uVar12);
    unaff_x29 = *(undefined1 **)(puVar2 + -0x30);
    unaff_x30 = *(undefined **)(puVar2 + -0x28);
    unaff_x20 = *(long *)(puVar2 + -0x40);
    unaff_x19 = *(long *)(puVar2 + -0x38);
    unaff_x22 = *(ulong *)(puVar2 + -0x50);
    unaff_x21 = *(ulong *)(puVar2 + -0x48);
    puVar2 = puVar2 + -0x20;
  } while( true );
}



// ============================================================
// RVA: 0x167c334 | Core.Services.LeaderboardScore.AddPlayer
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_LeaderboardScore__AddPlayer
                (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 unaff_x19;
  int iVar16;
  undefined8 unaff_x20;
  long lVar17;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar18;
  undefined1 *unaff_x29;
  undefined1 *puVar19;
  undefined1 ***pppuVar20;
  undefined *unaff_x30;
  undefined *puVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [12];
  ulong auStack_d0 [4];
  undefined1 auStack_b0 [12];
  int iStack_a4;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined1 **ppuStack_80;
  undefined *puStack_78;
  undefined1 *puStack_30;
  undefined *puStack_28;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  auVar22._8_8_ = param_2;
  auVar22._0_8_ = param_1;
  if (param_1 == 0) {
    puVar2 = &stack0xfffffffffffffff0;
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x30 = &Core_Services_LeaderboardScore__AddFormattedValue;
    auVar22 = func_0x00f78af4();
    if (auVar22._0_8_ == 0) {
      puStack_18 = &Core_Services_LeaderboardScore__AddFormattedValue;
      puStack_20 = &stack0xfffffffffffffff0;
      lVar9 = func_0x00f78af4();
      puStack_28 = &Core_Services_LeaderboardScore__EndLeaderboardScore;
      puStack_30 = (undefined1 *)&puStack_20;
      if ((bRam0000000003eb59c9 & 1) == 0) {
        puStack_30 = (undefined1 *)&puStack_20;
        func_0x00f78a20(0x3d3f160);
        bRam0000000003eb59c9 = 1;
      }
      if (lVar9 == 0) {
        lVar9 = func_0x00f78af4();
        if (lVar9 == 0) {
          lVar9 = func_0x00f78af4();
          return *(ulong *)(lVar9 + 8);
        }
        uVar11 = 0;
        puVar2 = &stack0xffffffffffffff90;
        puVar19 = &stack0xffffffffffffffb0;
        lVar17 = 5;
        unaff_x21 = 0x3eb5000;
        if ((bRam0000000003eb5cd7 & 1) == 0) {
          func_0x00f78a20(0x3d1f100);
          bRam0000000003eb5cd7 = 1;
        }
        /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar9);
        if (*(long *)(lVar9 + 0x28) != 0) {
          if (*(int *)(*(long *)(lVar9 + 0x28) + 0x18) < 5) {
            uVar11 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,5);
            *(undefined8 *)(lVar9 + 0x28) = uVar11;
          }
          *(undefined4 *)(lVar9 + 0x30) = 5;
          uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar9);
          *(int *)(lVar9 + 0x34) = (int)uVar10;
          return uVar10;
        }
        puVar21 = &FlatBuffers_FlatBufferBuilder__Slot;
        auVar23 = func_0x00f78af4();
        goto code_r0x016ce380;
      }
      uVar10 = 0x3eb5000;
      if ((bRam0000000003eb5cd8 & 1) == 0) {
        func_0x00f78a20(0x3d1f100,0);
        bRam0000000003eb5cd8 = 1;
      }
      if (-1 < *(int *)(lVar9 + 0x30)) {
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar9,4,0);
        /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar9,0);
        uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar9);
        unaff_x21 = (ulong)*(uint *)(lVar9 + 0x30);
        uVar12 = *(uint *)(lVar9 + 0x30) - 1;
        if (-2 < (int)uVar12) {
          uVar12 = 0xffffffff;
        }
        unaff_x22 = (ulong)uVar12;
        do {
          uVar1 = (int)unaff_x21 - 1;
          unaff_x21 = (ulong)uVar1;
          iVar16 = (int)uVar10;
          if ((int)uVar1 < 0) goto code_r0x016ceb30;
          lVar17 = *(long *)(lVar9 + 0x28);
          if (lVar17 == 0) goto code_r0x016ced84;
          if (*(uint *)(lVar17 + 0x18) <= uVar1) goto code_r0x016ced88;
        } while (*(int *)(lVar17 + (ulong)uVar1 * 4 + 0x20) == 0);
        unaff_x22 = unaff_x21 + 8;
        do {
          uVar18 = unaff_x22 - 8;
          if (*(uint *)(lVar17 + 0x18) <= uVar18) goto code_r0x016ced88;
          iVar7 = *(int *)(lVar17 + unaff_x22 * 4);
          sVar3 = 0;
          if (iVar7 != 0) {
            sVar3 = (short)uVar10 - (short)iVar7;
          }
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar9,2,0);
          /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar9,(int)sVar3);
          lVar17 = *(long *)(lVar9 + 0x28);
          if (lVar17 == 0) goto code_r0x016ced84;
          if (*(uint *)(lVar17 + 0x18) <= uVar18) goto code_r0x016ced88;
          *(undefined4 *)(lVar17 + unaff_x22 * 4) = 0;
          unaff_x22 = unaff_x22 - 1;
          uVar12 = uVar1;
        } while (0 < (long)uVar18);
code_r0x016ceb30:
        uVar6 = *(undefined4 *)(lVar9 + 0x34);
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar9,2,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar9,(int)(short)((short)uVar10 - (short)uVar6));
        uVar12 = uVar12 * 2 + 6;
        unaff_x21 = (ulong)uVar12;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar9,2,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar9,(int)(short)uVar12);
        unaff_x22 = (ulong)*(uint *)(lVar9 + 0x40);
        if (0 < (int)*(uint *)(lVar9 + 0x40)) {
          uVar18 = 0;
          do {
            lVar17 = *(long *)(lVar9 + 0x18);
            if (((lVar17 == 0) || (*(long *)(lVar17 + 0x10) == 0)) ||
               (lVar15 = *(long *)(lVar9 + 0x38), lVar15 == 0)) goto code_r0x016ced84;
            if (*(uint *)(lVar15 + 0x18) <= uVar18) goto code_r0x016ced88;
            uVar1 = *(int *)(*(long *)(lVar17 + 0x10) + 0x18) - *(int *)(lVar15 + uVar18 * 4 + 0x20)
            ;
            unaff_x21 = (ulong)uVar1;
            uVar12 = *(uint *)(lVar9 + 0x10);
            unaff_x22 = (ulong)uVar12;
            sVar3 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar17,unaff_x21,2);
            if (*(long *)(lVar9 + 0x18) == 0) goto code_r0x016ced84;
            sVar4 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar9 + 0x18),unaff_x22,2);
            if (sVar3 == sVar4) {
              if (sVar3 < 3) {
code_r0x016cec64:
                unaff_x21 = *(ulong *)(lVar9 + 0x38);
                if (unaff_x21 == 0) goto code_r0x016ced84;
                if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar18) goto code_r0x016ced88;
                iVar7 = *(int *)(unaff_x21 + uVar18 * 4 + 0x20);
                if (iVar7 == 0) {
                  unaff_x22 = (ulong)*(uint *)(lVar9 + 0x40);
                  goto code_r0x016cecac;
                }
                unaff_x21 = *(ulong *)(lVar9 + 0x18);
                if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
                iVar8 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar16;
                *(int *)(lVar9 + 0x10) = iVar8;
                iVar7 = iVar7 - iVar16;
                goto code_r0x016ced3c;
              }
              iVar7 = 2;
              while( true ) {
                if (*(long *)(lVar9 + 0x18) == 0) goto code_r0x016ced84;
                sVar4 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar9 + 0x18),uVar1 + iVar7,2);
                if (*(long *)(lVar9 + 0x18) == 0) goto code_r0x016ced84;
                sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar9 + 0x18),uVar12 + iVar7,2);
                if (sVar4 != sVar5) break;
                iVar7 = iVar7 + 2;
                if (sVar3 <= iVar7) goto code_r0x016cec64;
              }
            }
            uVar18 = uVar18 + 1;
            unaff_x22 = (ulong)*(int *)(lVar9 + 0x40);
          } while ((long)uVar18 < (long)unaff_x22);
        }
        unaff_x21 = *(ulong *)(lVar9 + 0x38);
        if (unaff_x21 == 0) {
code_r0x016ced84:
          func_0x00f78af4();
        }
        else {
code_r0x016cecac:
          if ((int)unaff_x22 == *(int *)(unaff_x21 + 0x18)) {
            unaff_x21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,(int)unaff_x22 << 1);
            lVar17 = *(long *)(lVar9 + 0x38);
            if (lVar17 == 0) goto code_r0x016ced84;
            /*System.Array$$Copy*/ func_0x0292c49c(lVar17,unaff_x21,*(undefined4 *)(lVar17 + 0x18),0);
            *(ulong *)(lVar9 + 0x38) = unaff_x21;
            unaff_x22 = (ulong)*(uint *)(lVar9 + 0x40);
          }
          uVar12 = (uint)unaff_x22;
          *(uint *)(lVar9 + 0x40) = uVar12 + 1;
          uVar6 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar9);
          if (unaff_x21 == 0) goto code_r0x016ced84;
          if (uVar12 < *(uint *)(unaff_x21 + 0x18)) {
            *(undefined4 *)(unaff_x21 + (long)(int)uVar12 * 4 + 0x20) = uVar6;
            unaff_x21 = *(ulong *)(lVar9 + 0x18);
            if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
              iVar8 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
              iVar7 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar9);
              iVar8 = iVar8 - iVar16;
              iVar7 = iVar7 - iVar16;
code_r0x016ced3c:
              /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar8,4);
              /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar8,4,(long)iVar7);
              *(undefined4 *)(lVar9 + 0x30) = 0xffffffff;
              return uVar10;
            }
            goto code_r0x016ced84;
          }
        }
code_r0x016ced88:
        uVar11 = func_0x00f78b24();
        func_0x00f78ac0(uVar11,0);
      }
      func_0x00f78a24(0x3d22a38);
      uVar11 = func_0x00f78aec();
      uVar13 = func_0x00f78a24(0x3d6cea8);
      iVar16 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar11,uVar13);
      uVar13 = func_0x00f78a24(0x3d56a30);
      auVar24 = func_0x00f78ac0(uVar11,uVar13);
      puStack_78 = &FlatBuffers_FlatBufferBuilder__Required;
      pppuVar20 = &ppuStack_80;
      lVar9 = *(long *)(auVar24._0_8_ + 0x18);
      iStack_a4 = iVar16;
      uStack_a0 = unaff_x22;
      uStack_98 = unaff_x21;
      uStack_90 = uVar10;
      uStack_88 = uVar11;
      ppuStack_80 = &puStack_30;
      if ((lVar9 != 0) && (*(long *)(lVar9 + 0x10) != 0)) {
        iVar7 = *(int *)(*(long *)(lVar9 + 0x10) + 0x18) - auVar24._8_4_;
        iVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar9,iVar7,4);
        lVar9 = *(long *)(auVar24._0_8_ + 0x18);
        if (lVar9 != 0) {
          uVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar9,(iVar7 - iVar8) + iVar16,2);
          if ((uVar10 & 0xffff) != 0) {
            return uVar10;
          }
          goto code_r0x016cee5c;
        }
      }
      func_0x00f78af4();
code_r0x016cee5c:
      uVar11 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_a4,0);
      uVar13 = func_0x00f78a24(0x3d6ce88);
      uVar14 = func_0x00f78a24(0x3d66338);
      lVar9 = /*System.String$$Concat*/ func_0x029be39c(uVar13,uVar11,uVar14,0);
      func_0x00f78a24(0x3d22a38);
      uVar10 = func_0x00f78aec();
      uVar13 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar10,lVar9);
      uVar11 = func_0x00f78a24(0x3d56a50);
      puVar21 = &FlatBuffers_FlatBufferBuilder__Finish;
      auVar22 = func_0x00f78ac0(uVar10,uVar11);
      puVar2 = auStack_b0;
      do {
        uVar18 = auVar22._8_8_;
        lVar17 = auVar22._0_8_;
        *(ulong *)(puVar2 + -0x20) = uVar10;
        *(long *)(puVar2 + -0x18) = lVar9;
        *(undefined1 ****)(puVar2 + -0x10) = pppuVar20;
        *(undefined **)(puVar2 + -8) = puVar21;
        pppuVar20 = (undefined1 ***)(puVar2 + -0x10);
        if ((int)uVar13 == 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar17,*(undefined4 *)(lVar17 + 0x20),4);
          uVar10 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar17,uVar18);
code_r0x016cef70:
          if (*(long *)(lVar17 + 0x18) != 0) {
            *(undefined4 *)(*(long *)(lVar17 + 0x18) + 0x18) = *(undefined4 *)(lVar17 + 0x10);
            return uVar10;
          }
        }
        else if (lVar17 != 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar17,*(undefined4 *)(lVar17 + 0x20),8);
          /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar17,uVar18);
          if ((*(long *)(lVar17 + 0x18) != 0) &&
             (lVar9 = *(long *)(*(long *)(lVar17 + 0x18) + 0x10), lVar9 != 0)) {
            uVar18 = (ulong)(uint)(*(int *)(lVar9 + 0x18) - *(int *)(lVar17 + 0x10));
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar17,4,0);
            uVar10 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar17,uVar18);
            goto code_r0x016cef70;
          }
        }
        puVar21 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar22 = func_0x00f78af4();
        uVar13 = 0;
        puVar2 = puVar2 + -0x20;
        lVar9 = lVar17;
        uVar10 = uVar18;
      } while( true );
    }
    uVar13 = 1;
  }
  else {
    uVar13 = 2;
    puVar2 = (undefined1 *)register0x00000008;
  }
  uVar11 = auVar22._8_8_;
  uVar10 = auVar22._0_8_;
  auVar23._8_8_ = uVar13;
  auVar23._0_8_ = uVar10;
  param_4 = 0;
  *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
  *(undefined8 *)(puVar2 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
  *(undefined **)(puVar2 + -8) = unaff_x30;
  if ((auVar22._8_4_ == 0) && (*(char *)(uVar10 + 0x48) == '\0')) {
    return uVar10;
  }
  /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(uVar10,uVar11,uVar11,0,0);
  puVar19 = *(undefined1 **)(puVar2 + -0x10);
  puVar21 = *(undefined **)(puVar2 + -8);
  lVar17 = *(long *)(puVar2 + -0x20);
  lVar9 = *(long *)(puVar2 + -0x18);
code_r0x016ce380:
  do {
    uVar13 = auVar23._8_8_;
    *(long *)(puVar2 + -0x20) = lVar17;
    *(long *)(puVar2 + -0x18) = lVar9;
    *(undefined1 **)(puVar2 + -0x10) = puVar19;
    *(undefined **)(puVar2 + -8) = puVar21;
    uVar12 = auVar23._8_4_;
    if ((int)uVar12 < *(int *)(auVar23._0_8_ + 0x30)) {
      lVar17 = *(long *)(auVar23._0_8_ + 0x28);
      uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      uVar14 = uVar11;
      if (lVar17 == 0) goto code_r0x016ce410;
      if (uVar12 < *(uint *)(lVar17 + 0x18)) {
        *(int *)(lVar17 + (long)(int)uVar12 * 4 + 0x20) = (int)uVar10;
        return uVar10;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      uVar13 = func_0x00f78aec();
      uVar11 = func_0x00f78a24(0x3d6ceb8);
      uVar14 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar13,uVar11);
      uVar11 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar13,uVar11);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar11 = func_0x00f78b24();
    auVar23 = func_0x00f78ac0(uVar11,0);
    uVar10 = auVar23._0_8_;
    *(ulong *)(puVar2 + -0x50) = unaff_x22;
    *(ulong *)(puVar2 + -0x48) = unaff_x21;
    *(long *)(puVar2 + -0x40) = lVar17;
    *(undefined8 *)(puVar2 + -0x38) = uVar13;
    *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    if (((int)uVar14 == (int)param_4) && (*(char *)(uVar10 + 0x48) == '\0')) {
      return uVar10;
    }
    uVar11 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar10,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar10,uVar14);
    puVar19 = *(undefined1 **)(puVar2 + -0x30);
    puVar21 = *(undefined **)(puVar2 + -0x28);
    lVar17 = *(long *)(puVar2 + -0x40);
    lVar9 = *(long *)(puVar2 + -0x38);
    unaff_x22 = *(ulong *)(puVar2 + -0x50);
    unaff_x21 = *(ulong *)(puVar2 + -0x48);
    puVar2 = puVar2 + -0x20;
  } while( true );
}



// ============================================================
// RVA: 0x167c358 | Core.Services.LeaderboardScore.AddFormattedValue
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_LeaderboardScore__AddFormattedValue
                (ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long unaff_x19;
  undefined8 uVar16;
  int iVar17;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar18;
  undefined1 *unaff_x29;
  undefined1 **ppuVar19;
  undefined *unaff_x30;
  undefined *puVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  ulong auStack_c0 [4];
  undefined1 auStack_a0 [12];
  int iStack_94;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  
  if (param_1 != 0) {
    param_4 = 0;
    uVar16 = 1;
    if (((int)param_2 == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(param_1,param_2,param_2,0,0);
    puVar2 = (undefined1 *)register0x00000008;
code_r0x016ce380:
    do {
      *(long *)(puVar2 + -0x20) = unaff_x20;
      *(long *)(puVar2 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
      *(undefined **)(puVar2 + -8) = unaff_x30;
      uVar12 = (uint)uVar16;
      if ((int)uVar12 < *(int *)(param_1 + 0x30)) {
        unaff_x20 = *(long *)(param_1 + 0x28);
        uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
        uVar13 = param_2;
        if (unaff_x20 == 0) goto code_r0x016ce410;
        uVar11 = uVar16;
        if (uVar12 < *(uint *)(unaff_x20 + 0x18)) {
          *(int *)(unaff_x20 + (long)(int)uVar12 * 4 + 0x20) = (int)uVar10;
          return uVar10;
        }
      }
      else {
        func_0x00f78a24(0x3d22738);
        uVar16 = func_0x00f78aec();
        uVar11 = func_0x00f78a24(0x3d6ceb8);
        uVar13 = 0;
        /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar16,uVar11);
        uVar11 = func_0x00f78a24(0x3d56a58);
        func_0x00f78ac0(uVar16,uVar11);
code_r0x016ce410:
        func_0x00f78af4();
        uVar11 = uVar16;
      }
      uVar16 = func_0x00f78b24();
      auVar21 = func_0x00f78ac0(uVar16,0);
      uVar16 = auVar21._8_8_;
      param_1 = auVar21._0_8_;
      *(ulong *)(puVar2 + -0x50) = unaff_x22;
      *(ulong *)(puVar2 + -0x48) = unaff_x21;
      *(long *)(puVar2 + -0x40) = unaff_x20;
      *(undefined8 *)(puVar2 + -0x38) = uVar11;
      *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
      *(undefined **)(puVar2 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
      if (((int)uVar13 == (int)param_4) && (*(char *)(param_1 + 0x48) == '\0')) {
        return param_1;
      }
      param_2 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,1);
      /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(param_1,uVar13);
      unaff_x29 = *(undefined1 **)(puVar2 + -0x30);
      unaff_x30 = *(undefined **)(puVar2 + -0x28);
      unaff_x20 = *(long *)(puVar2 + -0x40);
      unaff_x19 = *(long *)(puVar2 + -0x38);
      unaff_x22 = *(ulong *)(puVar2 + -0x50);
      unaff_x21 = *(ulong *)(puVar2 + -0x48);
      puVar2 = puVar2 + -0x20;
    } while( true );
  }
  lVar9 = func_0x00f78af4();
  if ((bRam0000000003eb59c9 & 1) == 0) {
    func_0x00f78a20(0x3d3f160);
    bRam0000000003eb59c9 = 1;
  }
  if (lVar9 == 0) {
    unaff_x19 = func_0x00f78af4();
    if (unaff_x19 == 0) {
      lVar9 = func_0x00f78af4();
      return *(ulong *)(lVar9 + 8);
    }
    param_2 = 0;
    puVar2 = &stack0xffffffffffffffa0;
    unaff_x29 = &stack0xffffffffffffffc0;
    unaff_x20 = 5;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(unaff_x19);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      if (*(int *)(*(long *)(unaff_x19 + 0x28) + 0x18) < 5) {
        uVar16 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,5);
        *(undefined8 *)(unaff_x19 + 0x28) = uVar16;
      }
      *(undefined4 *)(unaff_x19 + 0x30) = 5;
      uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(unaff_x19);
      *(int *)(unaff_x19 + 0x34) = (int)uVar10;
      return uVar10;
    }
    unaff_x30 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar21 = func_0x00f78af4();
    uVar16 = auVar21._8_8_;
    param_1 = auVar21._0_8_;
    goto code_r0x016ce380;
  }
  uVar10 = 0x3eb5000;
  if ((bRam0000000003eb5cd8 & 1) == 0) {
    func_0x00f78a20(0x3d1f100,0);
    bRam0000000003eb5cd8 = 1;
  }
  if (-1 < *(int *)(lVar9 + 0x30)) {
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar9,4,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar9,0);
    uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar9);
    unaff_x21 = (ulong)*(uint *)(lVar9 + 0x30);
    uVar12 = *(uint *)(lVar9 + 0x30) - 1;
    if (-2 < (int)uVar12) {
      uVar12 = 0xffffffff;
    }
    unaff_x22 = (ulong)uVar12;
    do {
      uVar1 = (int)unaff_x21 - 1;
      unaff_x21 = (ulong)uVar1;
      iVar17 = (int)uVar10;
      if ((int)uVar1 < 0) goto code_r0x016ceb30;
      lVar14 = *(long *)(lVar9 + 0x28);
      if (lVar14 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar14 + 0x18) <= uVar1) goto code_r0x016ced88;
    } while (*(int *)(lVar14 + (ulong)uVar1 * 4 + 0x20) == 0);
    unaff_x22 = unaff_x21 + 8;
    do {
      uVar18 = unaff_x22 - 8;
      if (*(uint *)(lVar14 + 0x18) <= uVar18) goto code_r0x016ced88;
      iVar7 = *(int *)(lVar14 + unaff_x22 * 4);
      sVar3 = 0;
      if (iVar7 != 0) {
        sVar3 = (short)uVar10 - (short)iVar7;
      }
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar9,2,0);
      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar9,(int)sVar3);
      lVar14 = *(long *)(lVar9 + 0x28);
      if (lVar14 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar14 + 0x18) <= uVar18) goto code_r0x016ced88;
      *(undefined4 *)(lVar14 + unaff_x22 * 4) = 0;
      unaff_x22 = unaff_x22 - 1;
      uVar12 = uVar1;
    } while (0 < (long)uVar18);
code_r0x016ceb30:
    uVar6 = *(undefined4 *)(lVar9 + 0x34);
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar9,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar9,(int)(short)((short)uVar10 - (short)uVar6));
    uVar12 = uVar12 * 2 + 6;
    unaff_x21 = (ulong)uVar12;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar9,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar9,(int)(short)uVar12);
    unaff_x22 = (ulong)*(uint *)(lVar9 + 0x40);
    if (0 < (int)*(uint *)(lVar9 + 0x40)) {
      uVar18 = 0;
      do {
        lVar14 = *(long *)(lVar9 + 0x18);
        if (((lVar14 == 0) || (*(long *)(lVar14 + 0x10) == 0)) ||
           (lVar15 = *(long *)(lVar9 + 0x38), lVar15 == 0)) goto code_r0x016ced84;
        if (*(uint *)(lVar15 + 0x18) <= uVar18) goto code_r0x016ced88;
        uVar1 = *(int *)(*(long *)(lVar14 + 0x10) + 0x18) - *(int *)(lVar15 + uVar18 * 4 + 0x20);
        unaff_x21 = (ulong)uVar1;
        uVar12 = *(uint *)(lVar9 + 0x10);
        unaff_x22 = (ulong)uVar12;
        sVar3 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar14,unaff_x21,2);
        if (*(long *)(lVar9 + 0x18) == 0) goto code_r0x016ced84;
        sVar4 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar9 + 0x18),unaff_x22,2);
        if (sVar3 == sVar4) {
          if (sVar3 < 3) {
code_r0x016cec64:
            unaff_x21 = *(ulong *)(lVar9 + 0x38);
            if (unaff_x21 == 0) goto code_r0x016ced84;
            if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar18) goto code_r0x016ced88;
            iVar7 = *(int *)(unaff_x21 + uVar18 * 4 + 0x20);
            if (iVar7 == 0) {
              unaff_x22 = (ulong)*(uint *)(lVar9 + 0x40);
              goto code_r0x016cecac;
            }
            unaff_x21 = *(ulong *)(lVar9 + 0x18);
            if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
            iVar8 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar17;
            *(int *)(lVar9 + 0x10) = iVar8;
            iVar7 = iVar7 - iVar17;
            goto code_r0x016ced3c;
          }
          iVar7 = 2;
          while( true ) {
            if (*(long *)(lVar9 + 0x18) == 0) goto code_r0x016ced84;
            sVar4 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar9 + 0x18),uVar1 + iVar7,2);
            if (*(long *)(lVar9 + 0x18) == 0) goto code_r0x016ced84;
            sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar9 + 0x18),uVar12 + iVar7,2);
            if (sVar4 != sVar5) break;
            iVar7 = iVar7 + 2;
            if (sVar3 <= iVar7) goto code_r0x016cec64;
          }
        }
        uVar18 = uVar18 + 1;
        unaff_x22 = (ulong)*(int *)(lVar9 + 0x40);
      } while ((long)uVar18 < (long)unaff_x22);
    }
    unaff_x21 = *(ulong *)(lVar9 + 0x38);
    if (unaff_x21 == 0) {
code_r0x016ced84:
      func_0x00f78af4();
    }
    else {
code_r0x016cecac:
      if ((int)unaff_x22 == *(int *)(unaff_x21 + 0x18)) {
        unaff_x21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,(int)unaff_x22 << 1);
        lVar14 = *(long *)(lVar9 + 0x38);
        if (lVar14 == 0) goto code_r0x016ced84;
        /*System.Array$$Copy*/ func_0x0292c49c(lVar14,unaff_x21,*(undefined4 *)(lVar14 + 0x18),0);
        *(ulong *)(lVar9 + 0x38) = unaff_x21;
        unaff_x22 = (ulong)*(uint *)(lVar9 + 0x40);
      }
      uVar12 = (uint)unaff_x22;
      *(uint *)(lVar9 + 0x40) = uVar12 + 1;
      uVar6 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar9);
      if (unaff_x21 == 0) goto code_r0x016ced84;
      if (uVar12 < *(uint *)(unaff_x21 + 0x18)) {
        *(undefined4 *)(unaff_x21 + (long)(int)uVar12 * 4 + 0x20) = uVar6;
        unaff_x21 = *(ulong *)(lVar9 + 0x18);
        if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
          iVar8 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
          iVar7 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar9);
          iVar8 = iVar8 - iVar17;
          iVar7 = iVar7 - iVar17;
code_r0x016ced3c:
          /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar8,4);
          /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar8,4,(long)iVar7);
          *(undefined4 *)(lVar9 + 0x30) = 0xffffffff;
          return uVar10;
        }
        goto code_r0x016ced84;
      }
    }
code_r0x016ced88:
    uVar16 = func_0x00f78b24();
    func_0x00f78ac0(uVar16,0);
  }
  func_0x00f78a24(0x3d22a38);
  uVar16 = func_0x00f78aec();
  uVar13 = func_0x00f78a24(0x3d6cea8);
  iVar17 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar16,uVar13);
  uVar13 = func_0x00f78a24(0x3d56a30);
  auVar22 = func_0x00f78ac0(uVar16,uVar13);
  puStack_68 = &FlatBuffers_FlatBufferBuilder__Required;
  ppuVar19 = &puStack_70;
  lVar9 = *(long *)(auVar22._0_8_ + 0x18);
  iStack_94 = iVar17;
  uStack_90 = unaff_x22;
  uStack_88 = unaff_x21;
  uStack_80 = uVar10;
  uStack_78 = uVar16;
  puStack_70 = &stack0xffffffffffffffe0;
  if ((lVar9 != 0) && (*(long *)(lVar9 + 0x10) != 0)) {
    iVar7 = *(int *)(*(long *)(lVar9 + 0x10) + 0x18) - auVar22._8_4_;
    iVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar9,iVar7,4);
    lVar9 = *(long *)(auVar22._0_8_ + 0x18);
    if (lVar9 != 0) {
      uVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar9,(iVar7 - iVar8) + iVar17,2);
      if ((uVar10 & 0xffff) != 0) {
        return uVar10;
      }
      goto code_r0x016cee5c;
    }
  }
  func_0x00f78af4();
code_r0x016cee5c:
  uVar16 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_94,0);
  uVar13 = func_0x00f78a24(0x3d6ce88);
  uVar11 = func_0x00f78a24(0x3d66338);
  lVar9 = /*System.String$$Concat*/ func_0x029be39c(uVar13,uVar16,uVar11,0);
  func_0x00f78a24(0x3d22a38);
  uVar10 = func_0x00f78aec();
  uVar13 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar10,lVar9);
  uVar16 = func_0x00f78a24(0x3d56a50);
  puVar20 = &FlatBuffers_FlatBufferBuilder__Finish;
  auVar21 = func_0x00f78ac0(uVar10,uVar16);
  puVar2 = auStack_a0;
  do {
    uVar18 = auVar21._8_8_;
    lVar14 = auVar21._0_8_;
    *(ulong *)(puVar2 + -0x20) = uVar10;
    *(long *)(puVar2 + -0x18) = lVar9;
    *(undefined1 ***)(puVar2 + -0x10) = ppuVar19;
    *(undefined **)(puVar2 + -8) = puVar20;
    ppuVar19 = (undefined1 **)(puVar2 + -0x10);
    if ((int)uVar13 == 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar14,*(undefined4 *)(lVar14 + 0x20),4);
      uVar10 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar14,uVar18);
code_r0x016cef70:
      if (*(long *)(lVar14 + 0x18) != 0) {
        *(undefined4 *)(*(long *)(lVar14 + 0x18) + 0x18) = *(undefined4 *)(lVar14 + 0x10);
        return uVar10;
      }
    }
    else if (lVar14 != 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar14,*(undefined4 *)(lVar14 + 0x20),8);
      /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar14,uVar18);
      if ((*(long *)(lVar14 + 0x18) != 0) &&
         (lVar9 = *(long *)(*(long *)(lVar14 + 0x18) + 0x10), lVar9 != 0)) {
        uVar18 = (ulong)(uint)(*(int *)(lVar9 + 0x18) - *(int *)(lVar14 + 0x10));
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar14,4,0);
        uVar10 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar14,uVar18);
        goto code_r0x016cef70;
      }
    }
    puVar20 = &FlatBuffers_FlatBufferBuilder__Finish;
    auVar21 = func_0x00f78af4();
    uVar13 = 0;
    puVar2 = puVar2 + -0x20;
    lVar9 = lVar14;
    uVar10 = uVar18;
  } while( true );
}



// ============================================================
// RVA: 0x167c37c | Core.Services.LeaderboardScore.EndLeaderboardScore
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_LeaderboardScore__EndLeaderboardScore
                (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  ulong *puVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  ulong uVar18;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar19;
  undefined1 *puVar20;
  undefined **ppuVar21;
  undefined *puVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [12];
  ulong auStack_b0 [5];
  int iStack_84;
  ulong auStack_80 [4];
  undefined *apuStack_60 [2];
  
  if ((bRam0000000003eb59c9 & 1) == 0) {
    func_0x00f78a20(0x3d3f160);
    bRam0000000003eb59c9 = 1;
  }
  if (param_1 == 0) {
    lVar15 = func_0x00f78af4();
    if (lVar15 == 0) {
      lVar15 = func_0x00f78af4();
      return *(ulong *)(lVar15 + 8);
    }
    uVar11 = 0;
    puVar20 = &stack0xffffffffffffffd0;
    lVar16 = 5;
    uVar10 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar15);
    if (*(long *)(lVar15 + 0x28) != 0) {
      if (*(int *)(*(long *)(lVar15 + 0x28) + 0x18) < 5) {
        uVar10 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,5);
        *(undefined8 *)(lVar15 + 0x28) = uVar10;
      }
      *(undefined4 *)(lVar15 + 0x30) = 5;
      uVar18 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar15);
      *(int *)(lVar15 + 0x34) = (int)uVar18;
      return uVar18;
    }
    puVar22 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar23 = func_0x00f78af4();
    puVar2 = &stack0xffffffffffffffb0;
    do {
      uVar12 = auVar23._8_8_;
      *(long *)(puVar2 + -0x20) = lVar16;
      *(long *)(puVar2 + -0x18) = lVar15;
      *(undefined1 **)(puVar2 + -0x10) = puVar20;
      *(undefined **)(puVar2 + -8) = puVar22;
      uVar13 = auVar23._8_4_;
      if ((int)uVar13 < *(int *)(auVar23._0_8_ + 0x30)) {
        lVar16 = *(long *)(auVar23._0_8_ + 0x28);
        uVar18 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
        uVar14 = uVar11;
        if (lVar16 == 0) goto code_r0x016ce410;
        if (uVar13 < *(uint *)(lVar16 + 0x18)) {
          *(int *)(lVar16 + (long)(int)uVar13 * 4 + 0x20) = (int)uVar18;
          return uVar18;
        }
      }
      else {
        func_0x00f78a24(0x3d22738);
        uVar12 = func_0x00f78aec();
        uVar11 = func_0x00f78a24(0x3d6ceb8);
        uVar14 = 0;
        /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar12,uVar11);
        uVar11 = func_0x00f78a24(0x3d56a58);
        func_0x00f78ac0(uVar12,uVar11);
code_r0x016ce410:
        func_0x00f78af4();
      }
      uVar11 = func_0x00f78b24();
      auVar23 = func_0x00f78ac0(uVar11,0);
      uVar18 = auVar23._0_8_;
      *(ulong *)(puVar2 + -0x50) = unaff_x22;
      *(undefined8 *)(puVar2 + -0x48) = uVar10;
      *(long *)(puVar2 + -0x40) = lVar16;
      *(undefined8 *)(puVar2 + -0x38) = uVar12;
      *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
      *(undefined **)(puVar2 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
      if (((int)uVar14 == (int)param_4) && (*(char *)(uVar18 + 0x48) == '\0')) {
        return uVar18;
      }
      uVar11 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar18,1);
      /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar18,uVar14);
      puVar20 = *(undefined1 **)(puVar2 + -0x30);
      puVar22 = *(undefined **)(puVar2 + -0x28);
      lVar16 = *(long *)(puVar2 + -0x40);
      lVar15 = *(long *)(puVar2 + -0x38);
      unaff_x22 = *(ulong *)(puVar2 + -0x50);
      uVar10 = *(undefined8 *)(puVar2 + -0x48);
      puVar2 = puVar2 + -0x20;
    } while( true );
  }
  uVar18 = 0x3eb5000;
  if ((bRam0000000003eb5cd8 & 1) == 0) {
    func_0x00f78a20(0x3d1f100,0);
    bRam0000000003eb5cd8 = 1;
  }
  if (-1 < *(int *)(param_1 + 0x30)) {
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,4,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(param_1,0);
    uVar18 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(param_1);
    unaff_x21 = (ulong)*(uint *)(param_1 + 0x30);
    uVar13 = *(uint *)(param_1 + 0x30) - 1;
    if (-2 < (int)uVar13) {
      uVar13 = 0xffffffff;
    }
    unaff_x22 = (ulong)uVar13;
    do {
      uVar1 = (int)unaff_x21 - 1;
      unaff_x21 = (ulong)uVar1;
      iVar17 = (int)uVar18;
      if ((int)uVar1 < 0) goto code_r0x016ceb30;
      lVar15 = *(long *)(param_1 + 0x28);
      if (lVar15 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar15 + 0x18) <= uVar1) goto code_r0x016ced88;
    } while (*(int *)(lVar15 + (ulong)uVar1 * 4 + 0x20) == 0);
    unaff_x22 = unaff_x21 + 8;
    do {
      uVar19 = unaff_x22 - 8;
      if (*(uint *)(lVar15 + 0x18) <= uVar19) goto code_r0x016ced88;
      iVar8 = *(int *)(lVar15 + unaff_x22 * 4);
      sVar4 = 0;
      if (iVar8 != 0) {
        sVar4 = (short)uVar18 - (short)iVar8;
      }
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,2,0);
      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(param_1,(int)sVar4);
      lVar15 = *(long *)(param_1 + 0x28);
      if (lVar15 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar15 + 0x18) <= uVar19) goto code_r0x016ced88;
      *(undefined4 *)(lVar15 + unaff_x22 * 4) = 0;
      unaff_x22 = unaff_x22 - 1;
      uVar13 = uVar1;
    } while (0 < (long)uVar19);
code_r0x016ceb30:
    uVar7 = *(undefined4 *)(param_1 + 0x34);
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(param_1,(int)(short)((short)uVar18 - (short)uVar7));
    uVar13 = uVar13 * 2 + 6;
    unaff_x21 = (ulong)uVar13;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(param_1,(int)(short)uVar13);
    unaff_x22 = (ulong)*(uint *)(param_1 + 0x40);
    if (0 < (int)*(uint *)(param_1 + 0x40)) {
      uVar19 = 0;
      do {
        lVar15 = *(long *)(param_1 + 0x18);
        if (((lVar15 == 0) || (*(long *)(lVar15 + 0x10) == 0)) ||
           (lVar16 = *(long *)(param_1 + 0x38), lVar16 == 0)) goto code_r0x016ced84;
        if (*(uint *)(lVar16 + 0x18) <= uVar19) goto code_r0x016ced88;
        uVar1 = *(int *)(*(long *)(lVar15 + 0x10) + 0x18) - *(int *)(lVar16 + uVar19 * 4 + 0x20);
        unaff_x21 = (ulong)uVar1;
        uVar13 = *(uint *)(param_1 + 0x10);
        unaff_x22 = (ulong)uVar13;
        sVar4 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar15,unaff_x21,2);
        if (*(long *)(param_1 + 0x18) == 0) goto code_r0x016ced84;
        sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(param_1 + 0x18),unaff_x22,2);
        if (sVar4 == sVar5) {
          if (sVar4 < 3) {
code_r0x016cec64:
            unaff_x21 = *(ulong *)(param_1 + 0x38);
            if (unaff_x21 == 0) goto code_r0x016ced84;
            if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar19) goto code_r0x016ced88;
            iVar8 = *(int *)(unaff_x21 + uVar19 * 4 + 0x20);
            if (iVar8 == 0) {
              unaff_x22 = (ulong)*(uint *)(param_1 + 0x40);
              goto code_r0x016cecac;
            }
            unaff_x21 = *(ulong *)(param_1 + 0x18);
            if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
            iVar9 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar17;
            *(int *)(param_1 + 0x10) = iVar9;
            iVar8 = iVar8 - iVar17;
            goto code_r0x016ced3c;
          }
          iVar8 = 2;
          while( true ) {
            if (*(long *)(param_1 + 0x18) == 0) goto code_r0x016ced84;
            sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(param_1 + 0x18),uVar1 + iVar8,2);
            if (*(long *)(param_1 + 0x18) == 0) goto code_r0x016ced84;
            sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(param_1 + 0x18),uVar13 + iVar8,2);
            if (sVar5 != sVar6) break;
            iVar8 = iVar8 + 2;
            if (sVar4 <= iVar8) goto code_r0x016cec64;
          }
        }
        uVar19 = uVar19 + 1;
        unaff_x22 = (ulong)*(int *)(param_1 + 0x40);
      } while ((long)uVar19 < (long)unaff_x22);
    }
    unaff_x21 = *(ulong *)(param_1 + 0x38);
    if (unaff_x21 == 0) {
code_r0x016ced84:
      func_0x00f78af4();
    }
    else {
code_r0x016cecac:
      if ((int)unaff_x22 == *(int *)(unaff_x21 + 0x18)) {
        unaff_x21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,(int)unaff_x22 << 1);
        lVar15 = *(long *)(param_1 + 0x38);
        if (lVar15 == 0) goto code_r0x016ced84;
        /*System.Array$$Copy*/ func_0x0292c49c(lVar15,unaff_x21,*(undefined4 *)(lVar15 + 0x18),0);
        *(ulong *)(param_1 + 0x38) = unaff_x21;
        unaff_x22 = (ulong)*(uint *)(param_1 + 0x40);
      }
      uVar13 = (uint)unaff_x22;
      *(uint *)(param_1 + 0x40) = uVar13 + 1;
      uVar7 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(param_1);
      if (unaff_x21 == 0) goto code_r0x016ced84;
      if (uVar13 < *(uint *)(unaff_x21 + 0x18)) {
        *(undefined4 *)(unaff_x21 + (long)(int)uVar13 * 4 + 0x20) = uVar7;
        unaff_x21 = *(ulong *)(param_1 + 0x18);
        if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
          iVar9 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
          iVar8 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(param_1);
          iVar9 = iVar9 - iVar17;
          iVar8 = iVar8 - iVar17;
code_r0x016ced3c:
          /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar9,4);
          /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar9,4,(long)iVar8);
          *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
          return uVar18;
        }
        goto code_r0x016ced84;
      }
    }
code_r0x016ced88:
    uVar10 = func_0x00f78b24();
    func_0x00f78ac0(uVar10,0);
  }
  func_0x00f78a24(0x3d22a38);
  uVar10 = func_0x00f78aec();
  uVar11 = func_0x00f78a24(0x3d6cea8);
  iVar17 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar10,uVar11);
  uVar11 = func_0x00f78a24(0x3d56a30);
  auVar24 = func_0x00f78ac0(uVar10,uVar11);
  apuStack_60[1] = &FlatBuffers_FlatBufferBuilder__Required;
  ppuVar21 = apuStack_60;
  lVar15 = *(long *)(auVar24._0_8_ + 0x18);
  iStack_84 = iVar17;
  auStack_80[0] = unaff_x22;
  auStack_80[1] = unaff_x21;
  auStack_80[2] = uVar18;
  auStack_80[3] = uVar10;
  apuStack_60[0] = &stack0xfffffffffffffff0;
  if ((lVar15 != 0) && (*(long *)(lVar15 + 0x10) != 0)) {
    iVar8 = *(int *)(*(long *)(lVar15 + 0x10) + 0x18) - auVar24._8_4_;
    iVar9 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar15,iVar8,4);
    lVar15 = *(long *)(auVar24._0_8_ + 0x18);
    if (lVar15 != 0) {
      uVar18 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar15,(iVar8 - iVar9) + iVar17,2);
      if ((uVar18 & 0xffff) != 0) {
        return uVar18;
      }
      goto code_r0x016cee5c;
    }
  }
  func_0x00f78af4();
code_r0x016cee5c:
  uVar10 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_84,0);
  uVar11 = func_0x00f78a24(0x3d6ce88);
  uVar12 = func_0x00f78a24(0x3d66338);
  lVar15 = /*System.String$$Concat*/ func_0x029be39c(uVar11,uVar10,uVar12,0);
  func_0x00f78a24(0x3d22a38);
  uVar18 = func_0x00f78aec();
  uVar11 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar18,lVar15);
  uVar10 = func_0x00f78a24(0x3d56a50);
  puVar22 = &FlatBuffers_FlatBufferBuilder__Finish;
  auVar23 = func_0x00f78ac0(uVar18,uVar10);
  puVar3 = auStack_b0 + 4;
  do {
    uVar19 = auVar23._8_8_;
    lVar16 = auVar23._0_8_;
    *(ulong *)((long)puVar3 + -0x20) = uVar18;
    *(long *)((long)puVar3 + -0x18) = lVar15;
    *(undefined ***)((long)puVar3 + -0x10) = ppuVar21;
    *(undefined **)((long)puVar3 + -8) = puVar22;
    ppuVar21 = (undefined **)((long)puVar3 + -0x10);
    if ((int)uVar11 == 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,*(undefined4 *)(lVar16 + 0x20),4);
      uVar18 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar16,uVar19);
code_r0x016cef70:
      if (*(long *)(lVar16 + 0x18) != 0) {
        *(undefined4 *)(*(long *)(lVar16 + 0x18) + 0x18) = *(undefined4 *)(lVar16 + 0x10);
        return uVar18;
      }
    }
    else if (lVar16 != 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,*(undefined4 *)(lVar16 + 0x20),8);
      /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar16,uVar19);
      if ((*(long *)(lVar16 + 0x18) != 0) &&
         (lVar15 = *(long *)(*(long *)(lVar16 + 0x18) + 0x10), lVar15 != 0)) {
        uVar19 = (ulong)(uint)(*(int *)(lVar15 + 0x18) - *(int *)(lVar16 + 0x10));
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,4,0);
        uVar18 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar16,uVar19);
        goto code_r0x016cef70;
      }
    }
    puVar22 = &FlatBuffers_FlatBufferBuilder__Finish;
    auVar23 = func_0x00f78af4();
    uVar11 = 0;
    puVar3 = (ulong *)((long)puVar3 + -0x20);
    lVar15 = lVar16;
    uVar18 = uVar19;
  } while( true );
}



// ============================================================
// RVA: 0x167c3c8 | Core.Services.LeaderboardScore.StartLeaderboardScore
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

long Core_Services_LeaderboardScore__StartLeaderboardScore
               (long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 unaff_x22;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined1 auVar11 [16];
  long alStack_80 [10];
  
  if (param_1 == 0) {
    lVar7 = func_0x00f78af4();
    return *(long *)(lVar7 + 8);
  }
  uVar5 = 0;
  puVar9 = &stack0xfffffffffffffff0;
  lVar7 = 5;
  uVar8 = 0x3eb5000;
  if ((bRam0000000003eb5cd7 & 1) == 0) {
    func_0x00f78a20(0x3d1f100);
    bRam0000000003eb5cd7 = 1;
  }
  /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(param_1);
  if (*(long *)(param_1 + 0x28) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x28) + 0x18) < 5) {
      uVar8 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,5);
      *(undefined8 *)(param_1 + 0x28) = uVar8;
    }
    *(undefined4 *)(param_1 + 0x30) = 5;
    lVar7 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(param_1);
    *(int *)(param_1 + 0x34) = (int)lVar7;
    return lVar7;
  }
  puVar10 = &FlatBuffers_FlatBufferBuilder__Slot;
  auVar11 = func_0x00f78af4();
  puVar1 = &stack0xffffffffffffffd0;
  do {
    uVar3 = auVar11._8_8_;
    *(long *)(puVar1 + -0x20) = lVar7;
    *(long *)(puVar1 + -0x18) = param_1;
    *(undefined1 **)(puVar1 + -0x10) = puVar9;
    *(undefined **)(puVar1 + -8) = puVar10;
    uVar4 = auVar11._8_4_;
    if ((int)uVar4 < *(int *)(auVar11._0_8_ + 0x30)) {
      lVar7 = *(long *)(auVar11._0_8_ + 0x28);
      lVar2 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      uVar6 = uVar5;
      if (lVar7 == 0) goto code_r0x016ce410;
      if (uVar4 < *(uint *)(lVar7 + 0x18)) {
        *(int *)(lVar7 + (long)(int)uVar4 * 4 + 0x20) = (int)lVar2;
        return lVar2;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      uVar3 = func_0x00f78aec();
      uVar5 = func_0x00f78a24(0x3d6ceb8);
      uVar6 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar3,uVar5);
      uVar5 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar3,uVar5);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar5 = func_0x00f78b24();
    auVar11 = func_0x00f78ac0(uVar5,0);
    lVar2 = auVar11._0_8_;
    *(undefined8 *)(puVar1 + -0x50) = unaff_x22;
    *(undefined8 *)(puVar1 + -0x48) = uVar8;
    *(long *)(puVar1 + -0x40) = lVar7;
    *(undefined8 *)(puVar1 + -0x38) = uVar3;
    *(undefined1 **)(puVar1 + -0x30) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    if (((int)uVar6 == param_4) && (*(char *)(lVar2 + 0x48) == '\0')) {
      return lVar2;
    }
    uVar5 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar2,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(lVar2,uVar6);
    puVar9 = *(undefined1 **)(puVar1 + -0x30);
    puVar10 = *(undefined **)(puVar1 + -0x28);
    lVar7 = *(long *)(puVar1 + -0x40);
    param_1 = *(long *)(puVar1 + -0x38);
    unaff_x22 = *(undefined8 *)(puVar1 + -0x50);
    uVar8 = *(undefined8 *)(puVar1 + -0x48);
    puVar1 = puVar1 + -0x20;
  } while( true );
}



