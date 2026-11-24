// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Services.LeaderboardOccurrence

// ============================================================
// RVA: 0x166a5b8 | Core.Services.LeaderboardOccurrence.get_StartDate
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

long Core_Services_LeaderboardOccurrence__get_StartDate(int *param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  int *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined1 *puVar11;
  undefined *unaff_x30;
  undefined *puVar12;
  undefined1 auVar13 [16];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined1 auStack_80 [16];
  undefined *puStack_28;
  
  puVar11 = &stack0xfffffffffffffff0;
  iVar4 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,4,0);
  if (iVar4 == 0) {
    return 0;
  }
  lVar10 = *(long *)(param_1 + 2);
  if (lVar10 == 0) {
    piVar5 = (int *)func_0x00f78af4();
    puStack_28 = &Core_Services_LeaderboardOccurrence__get_NextStartDate;
    iVar4 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar5,6,0);
    if (iVar4 == 0) {
      return 0;
    }
    lVar10 = *(long *)(piVar5 + 2);
    if (lVar10 == 0) {
      auStack_80 = func_0x00f78af4();
      if ((bRam0000000003eb58b9 & 1) == 0) {
        func_0x00f78a20(0x3d3eab8);
        func_0x00f78a20(0x3d3eac0);
        func_0x00f78a20(0x3d66050);
        func_0x00f78a20(0x3d7d1e0);
        func_0x00f78a20(0x3d7d0b0);
        func_0x00f78a20(0x3d66110);
        func_0x00f78a20(0x3d66150);
        bRam0000000003eb58b9 = 1;
      }
      uStack_a0 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      uVar6 = Core_Services_Leaderboard__get_Id(auStack_80);
      uVar8 = Core_Services_Leaderboard__get_Title(auStack_80);
      uVar6 = /*System.String$$Concat*/ func_0x029be818(/*STR('{Id=')*/ uRam0000000003d7d0b0,uVar6,/*STR(' Title=')*/ uRam0000000003d66150,uVar8,0);
      Core_Services_Leaderboard__get_CurrentOccurrence(&uStack_a0,auStack_80);
      if ((char)uStack_90 != '\0') {
        Core_Services_Leaderboard__get_CurrentOccurrence(&uStack_b8,auStack_80);
        uStack_98 = uStack_b0;
        uStack_a0 = uStack_b8;
        uStack_90 = uStack_a8;
        /*System.Nullable<LeaderboardOccurrence>$$get_Value*/ func_0x0265a604(&uStack_a0,uRam0000000003d3eac0);
        uVar8 = Core_Services_Extensions__Print();
        uVar6 = /*System.String$$Concat*/ func_0x029be39c(uVar6,/*STR(' CurrentOccurrence=')*/ uRam0000000003d66050,uVar8,0);
      }
      Core_Services_Leaderboard__get_PreviousOccurrence(&uStack_b8,auStack_80);
      uStack_98 = uStack_b0;
      uStack_a0 = uStack_b8;
      uStack_90 = uStack_a8;
      if ((uStack_a8 & 0xff) != 0) {
        Core_Services_Leaderboard__get_PreviousOccurrence(&uStack_b8,auStack_80);
        uStack_98 = uStack_b0;
        uStack_a0 = uStack_b8;
        uStack_90 = uStack_a8;
        /*System.Nullable<LeaderboardOccurrence>$$get_Value*/ func_0x0265a604(&uStack_a0,uRam0000000003d3eac0);
        uVar8 = Core_Services_Extensions__Print();
        uVar6 = /*System.String$$Concat*/ func_0x029be39c(uVar6,/*STR(' PreviousOccurrence=')*/ uRam0000000003d66110,uVar8,0);
      }
      lVar10 = /*System.String$$Concat*/ func_0x029bdb88(uVar6,/*STR('}')*/ uRam0000000003d7d1e0,0);
      return lVar10;
    }
    uVar1 = *piVar5 + iVar4;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x30 = puStack_28;
  }
  else {
    uVar1 = *param_1 + iVar4;
    param_1 = unaff_x19;
    puVar11 = unaff_x29;
  }
  auVar13._8_4_ = uVar1;
  auVar13._0_8_ = lVar10;
  auVar13._12_4_ = 0;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(int **)((long)register0x00000008 + -0x18) = param_1;
  *(undefined1 **)((long)register0x00000008 + -0x10) = puVar11;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  puVar11 = (undefined1 *)((long)register0x00000008 + -0x10);
  if ((bRam0000000003eb5cd0 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    bRam0000000003eb5cd0 = 1;
  }
  puVar12 = &UNK_016cc68c;
  puVar3 = (undefined1 *)((long)register0x00000008 + -0x40);
  uVar2 = 8;
  uVar7 = (ulong)uVar1;
  uVar6 = 8;
  do {
    uVar9 = uVar2;
    lVar10 = auVar13._0_8_;
    *(undefined8 *)(puVar3 + -0x20) = uVar6;
    *(ulong *)(puVar3 + -0x18) = uVar7;
    *(undefined1 **)(puVar3 + -0x10) = puVar11;
    *(undefined **)(puVar3 + -8) = puVar12;
    if (auVar13._8_4_ < 0) {
code_r0x016cc7d8:
      func_0x00f78a24(0x3d1fcf8);
      uVar7 = func_0x00f78aec();
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a4d0(uVar7,0);
      uVar8 = func_0x00f78a24(0x3d52ce8);
      func_0x00f78ac0(uVar7,uVar8);
    }
    else if (*(long *)(lVar10 + 0x10) != 0) {
      if (auVar13._8_4_ <= *(int *)(*(long *)(lVar10 + 0x10) + 0x18) - (int)uVar9) {
        return lVar10;
      }
      goto code_r0x016cc7d8;
    }
    auVar13 = func_0x00f78af4();
    *(undefined8 *)(puVar3 + -0x50) = 0x3d201a0;
    *(long *)(puVar3 + -0x48) = lVar10;
    *(undefined8 *)(puVar3 + -0x40) = uVar6;
    *(ulong *)(puVar3 + -0x38) = uVar7;
    *(undefined1 **)(puVar3 + -0x30) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x28) = &FlatBuffers_ByteBuffer__PutSbyte;
    puVar11 = puVar3 + -0x30;
    puVar12 = &UNK_016cc834;
    puVar3 = puVar3 + -0x50;
    uVar2 = 1;
    uVar7 = uVar9;
    uVar6 = auVar13._8_8_;
  } while( true );
}



// ============================================================
// RVA: 0x166a610 | Core.Services.LeaderboardOccurrence.get_NextStartDate
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

long Core_Services_LeaderboardOccurrence__get_NextStartDate(int *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  undefined1 auVar12 [16];
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined1 auStack_60 [16];
  
  iVar4 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,6,0);
  if (iVar4 == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 2) == 0) {
    auStack_60 = func_0x00f78af4();
    if ((bRam0000000003eb58b9 & 1) == 0) {
      func_0x00f78a20(0x3d3eab8);
      func_0x00f78a20(0x3d3eac0);
      func_0x00f78a20(0x3d66050);
      func_0x00f78a20(0x3d7d1e0);
      func_0x00f78a20(0x3d7d0b0);
      func_0x00f78a20(0x3d66110);
      func_0x00f78a20(0x3d66150);
      bRam0000000003eb58b9 = 1;
    }
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar5 = Core_Services_Leaderboard__get_Id(auStack_60);
    uVar8 = Core_Services_Leaderboard__get_Title(auStack_60);
    uVar5 = /*System.String$$Concat*/ func_0x029be818(/*STR('{Id=')*/ uRam0000000003d7d0b0,uVar5,/*STR(' Title=')*/ uRam0000000003d66150,uVar8,0);
    Core_Services_Leaderboard__get_CurrentOccurrence(&uStack_80,auStack_60);
    if ((char)uStack_70 != '\0') {
      Core_Services_Leaderboard__get_CurrentOccurrence(&uStack_98,auStack_60);
      uStack_78 = uStack_90;
      uStack_80 = uStack_98;
      uStack_70 = uStack_88;
      /*System.Nullable<LeaderboardOccurrence>$$get_Value*/ func_0x0265a604(&uStack_80,uRam0000000003d3eac0);
      uVar8 = Core_Services_Extensions__Print();
      uVar5 = /*System.String$$Concat*/ func_0x029be39c(uVar5,/*STR(' CurrentOccurrence=')*/ uRam0000000003d66050,uVar8,0);
    }
    Core_Services_Leaderboard__get_PreviousOccurrence(&uStack_98,auStack_60);
    uStack_78 = uStack_90;
    uStack_80 = uStack_98;
    uStack_70 = uStack_88;
    if ((uStack_88 & 0xff) != 0) {
      Core_Services_Leaderboard__get_PreviousOccurrence(&uStack_98,auStack_60);
      uStack_78 = uStack_90;
      uStack_80 = uStack_98;
      uStack_70 = uStack_88;
      /*System.Nullable<LeaderboardOccurrence>$$get_Value*/ func_0x0265a604(&uStack_80,uRam0000000003d3eac0);
      uVar8 = Core_Services_Extensions__Print();
      uVar5 = /*System.String$$Concat*/ func_0x029be39c(uVar5,/*STR(' PreviousOccurrence=')*/ uRam0000000003d66110,uVar8,0);
    }
    lVar6 = /*System.String$$Concat*/ func_0x029bdb88(uVar5,/*STR('}')*/ uRam0000000003d7d1e0,0);
    return lVar6;
  }
  iVar1 = *param_1;
  auVar12._8_4_ = iVar1 + iVar4;
  auVar12._0_8_ = *(long *)(param_1 + 2);
  auVar12._12_4_ = 0;
  puVar10 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5cd0 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    bRam0000000003eb5cd0 = 1;
  }
  puVar11 = &UNK_016cc68c;
  puVar3 = &stack0xffffffffffffffc0;
  uVar2 = 8;
  uVar7 = (ulong)(uint)(iVar1 + iVar4);
  uVar5 = 8;
  do {
    uVar9 = uVar2;
    lVar6 = auVar12._0_8_;
    *(undefined8 *)(puVar3 + -0x20) = uVar5;
    *(ulong *)(puVar3 + -0x18) = uVar7;
    *(undefined1 **)(puVar3 + -0x10) = puVar10;
    *(undefined **)(puVar3 + -8) = puVar11;
    if (auVar12._8_4_ < 0) {
code_r0x016cc7d8:
      func_0x00f78a24(0x3d1fcf8);
      uVar7 = func_0x00f78aec();
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a4d0(uVar7,0);
      uVar8 = func_0x00f78a24(0x3d52ce8);
      func_0x00f78ac0(uVar7,uVar8);
    }
    else if (*(long *)(lVar6 + 0x10) != 0) {
      if (auVar12._8_4_ <= *(int *)(*(long *)(lVar6 + 0x10) + 0x18) - (int)uVar9) {
        return lVar6;
      }
      goto code_r0x016cc7d8;
    }
    auVar12 = func_0x00f78af4();
    *(undefined8 *)(puVar3 + -0x50) = 0x3d201a0;
    *(long *)(puVar3 + -0x48) = lVar6;
    *(undefined8 *)(puVar3 + -0x40) = uVar5;
    *(ulong *)(puVar3 + -0x38) = uVar7;
    *(undefined1 **)(puVar3 + -0x30) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x28) = &FlatBuffers_ByteBuffer__PutSbyte;
    puVar10 = puVar3 + -0x30;
    puVar11 = &UNK_016cc834;
    puVar3 = puVar3 + -0x50;
    uVar2 = 1;
    uVar7 = uVar9;
    uVar5 = auVar12._8_8_;
  } while( true );
}



// ============================================================
// RVA: 0x167be20 | Core.Services.LeaderboardOccurrence.__assign
// ============================================================

undefined1  [16]
Core_Services_LeaderboardOccurrence____assign
          (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)param_1 = param_2;
  param_1[1] = param_3;
  auVar1._0_8_ = *param_1;
  auVar1._8_8_ = param_3;
  return auVar1;
}



// ============================================================
// RVA: 0x167bfb0 | Core.Services.LeaderboardOccurrence.get_ByteBuffer
// ============================================================

undefined8 Core_Services_LeaderboardOccurrence__get_ByteBuffer(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// ============================================================
// RVA: 0x167bfb8 | Core.Services.LeaderboardOccurrence.GetRootAsLeaderboardOccurrence
// ============================================================

undefined1  [16] Core_Services_LeaderboardOccurrence__GetRootAsLeaderboardOccurrence(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = 0;
  if (param_1 != 0) {
    iVar1 = /*FlatBuffers.ByteBuffer$$GetInt*/ func_0x016ccdec(param_1,*(undefined4 *)(param_1 + 0x18),0);
    auVar3._4_4_ = 0;
    auVar3._0_4_ = *(int *)(param_1 + 0x18) + iVar1;
    auVar3._8_8_ = param_1;
    return auVar3;
  }
  auVar3 = func_0x00f78af4();
  *auVar3._0_8_ = auVar3._8_4_;
  *(undefined8 *)(auVar3._0_8_ + 2) = uVar2;
  return auVar3;
}



// ============================================================
// RVA: 0x167bfc4 | Core.Services.LeaderboardOccurrence.GetRootAsLeaderboardOccurrence
// ============================================================

undefined1  [16]
Core_Services_LeaderboardOccurrence__GetRootAsLeaderboardOccurrence
          (long param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  
  if (param_1 != 0) {
    iVar1 = /*FlatBuffers.ByteBuffer$$GetInt*/ func_0x016ccdec(param_1,*(undefined4 *)(param_1 + 0x18),0);
    auVar2._0_8_ = param_2 & 0xffffffff00000000 | (ulong)(uint)(*(int *)(param_1 + 0x18) + iVar1);
    auVar2._8_8_ = param_1;
    return auVar2;
  }
  auVar2 = func_0x00f78af4();
  *auVar2._0_8_ = auVar2._8_4_;
  *(undefined8 *)(auVar2._0_8_ + 2) = param_3;
  return auVar2;
}



// ============================================================
// RVA: 0x167c008 | Core.Services.LeaderboardOccurrence.__init
// ============================================================

void Core_Services_LeaderboardOccurrence____init
               (undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  return;
}



// ============================================================
// RVA: 0x167c014 | Core.Services.LeaderboardOccurrence.CreateLeaderboardOccurrence
// ============================================================

/* WARNING: Possible PIC construction at 0x0167c03c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0167c054: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0167c040) */
/* WARNING: Removing unreachable block (ram,0x0167c058) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_LeaderboardOccurrence__CreateLeaderboardOccurrence
                (long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 ***pppuVar3;
  undefined1 *puVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  uint uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined8 unaff_x19;
  int iVar19;
  undefined8 unaff_x20;
  ulong uVar20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar21;
  undefined1 **ppuVar22;
  undefined1 ***pppuVar23;
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
  undefined1 *puStack_50;
  undefined *puStack_48;
  undefined1 **ppuStack_40;
  undefined *puStack_38;
  
  pppuVar3 = (undefined1 ***)&stack0xffffffffffffffd0;
  puVar2 = &stack0xffffffffffffffd0;
  ppuVar22 = (undefined1 **)&stack0xfffffffffffffff0;
  if (param_1 != 0) {
    puVar24 = (undefined *)0x167c040;
    lVar13 = param_1;
    unaff_x21 = param_3;
code_r0x016ce2a4:
    uVar12 = 0;
    *(ulong *)(puVar2 + -0x30) = unaff_x22;
    *(ulong *)(puVar2 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar2 + -0x20) = param_2;
    *(long *)(puVar2 + -0x18) = lVar13;
    *(undefined1 ***)(puVar2 + -0x10) = ppuVar22;
    *(undefined **)(puVar2 + -8) = puVar24;
    puVar4 = puVar2 + -0x10;
    lVar13 = 2;
    uVar11 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(param_1);
    if (*(long *)(param_1 + 0x28) != 0) {
      if (*(int *)(*(long *)(param_1 + 0x28) + 0x18) < 2) {
        uVar11 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,2);
        *(undefined8 *)(param_1 + 0x28) = uVar11;
      }
      *(undefined4 *)(param_1 + 0x30) = 2;
      uVar20 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(param_1);
      *(int *)(param_1 + 0x34) = (int)uVar20;
      return uVar20;
    }
    puVar24 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar25 = func_0x00f78af4();
    pppuVar3 = (undefined1 ***)(puVar2 + -0x30);
    goto code_r0x016ce380;
  }
  puVar24 = &Core_Services_LeaderboardOccurrence__AddNextStartDate;
  auVar26 = func_0x00f78af4();
  if (auVar26._0_8_ == 0) {
    pppuVar3 = &ppuStack_40;
    pppuVar23 = &ppuStack_40;
    puStack_38 = &Core_Services_LeaderboardOccurrence__AddNextStartDate;
    puVar24 = &Core_Services_LeaderboardOccurrence__AddStartDate;
    ppuStack_40 = ppuVar22;
    auVar26 = func_0x00f78af4();
    if (auVar26._0_8_ == 0) {
      puStack_48 = &Core_Services_LeaderboardOccurrence__AddStartDate;
      puStack_50 = (undefined1 *)&ppuStack_40;
      lVar13 = func_0x00f78af4();
      puVar2 = &stack0xffffffffffffff90;
      puStack_58 = &Core_Services_LeaderboardOccurrence__EndLeaderboardOccurrence;
      ppuVar22 = &puStack_60;
      param_2 = 0x3eb5000;
      puStack_60 = (undefined1 *)&puStack_50;
      if ((bRam0000000003eb59c6 & 1) == 0) {
        puStack_60 = (undefined1 *)&puStack_50;
        func_0x00f78a20(0x3d3f158);
        bRam0000000003eb59c6 = 1;
      }
      if (lVar13 == 0) {
        puVar24 = &Core_Services_LeaderboardOccurrence__StartLeaderboardOccurrence;
        param_1 = func_0x00f78af4();
        if (param_1 == 0) {
          lVar13 = func_0x00f78af4();
          return *(ulong *)(lVar13 + 8);
        }
        lVar13 = 0;
        goto code_r0x016ce2a4;
      }
      uVar20 = 0x3eb5000;
      if ((bRam0000000003eb5cd8 & 1) == 0) {
        func_0x00f78a20(0x3d1f100,0);
        bRam0000000003eb5cd8 = 1;
      }
      if (-1 < *(int *)(lVar13 + 0x30)) {
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar13,4,0);
        /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar13,0);
        uVar20 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar13);
        unaff_x21 = (ulong)*(uint *)(lVar13 + 0x30);
        uVar15 = *(uint *)(lVar13 + 0x30) - 1;
        if (-2 < (int)uVar15) {
          uVar15 = 0xffffffff;
        }
        unaff_x22 = (ulong)uVar15;
        do {
          uVar1 = (int)unaff_x21 - 1;
          unaff_x21 = (ulong)uVar1;
          iVar19 = (int)uVar20;
          if ((int)uVar1 < 0) goto code_r0x016ceb30;
          lVar17 = *(long *)(lVar13 + 0x28);
          if (lVar17 == 0) goto code_r0x016ced84;
          if (*(uint *)(lVar17 + 0x18) <= uVar1) goto code_r0x016ced88;
        } while (*(int *)(lVar17 + (ulong)uVar1 * 4 + 0x20) == 0);
        unaff_x22 = unaff_x21 + 8;
        do {
          uVar21 = unaff_x22 - 8;
          if (*(uint *)(lVar17 + 0x18) <= uVar21) goto code_r0x016ced88;
          iVar9 = *(int *)(lVar17 + unaff_x22 * 4);
          sVar5 = 0;
          if (iVar9 != 0) {
            sVar5 = (short)uVar20 - (short)iVar9;
          }
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar13,2,0);
          /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar13,(int)sVar5);
          lVar17 = *(long *)(lVar13 + 0x28);
          if (lVar17 == 0) goto code_r0x016ced84;
          if (*(uint *)(lVar17 + 0x18) <= uVar21) goto code_r0x016ced88;
          *(undefined4 *)(lVar17 + unaff_x22 * 4) = 0;
          unaff_x22 = unaff_x22 - 1;
          uVar15 = uVar1;
        } while (0 < (long)uVar21);
code_r0x016ceb30:
        uVar8 = *(undefined4 *)(lVar13 + 0x34);
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar13,2,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar13,(int)(short)((short)uVar20 - (short)uVar8));
        uVar15 = uVar15 * 2 + 6;
        unaff_x21 = (ulong)uVar15;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar13,2,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar13,(int)(short)uVar15);
        unaff_x22 = (ulong)*(uint *)(lVar13 + 0x40);
        if (0 < (int)*(uint *)(lVar13 + 0x40)) {
          uVar21 = 0;
          do {
            lVar17 = *(long *)(lVar13 + 0x18);
            if (((lVar17 == 0) || (*(long *)(lVar17 + 0x10) == 0)) ||
               (lVar18 = *(long *)(lVar13 + 0x38), lVar18 == 0)) goto code_r0x016ced84;
            if (*(uint *)(lVar18 + 0x18) <= uVar21) goto code_r0x016ced88;
            uVar1 = *(int *)(*(long *)(lVar17 + 0x10) + 0x18) - *(int *)(lVar18 + uVar21 * 4 + 0x20)
            ;
            unaff_x21 = (ulong)uVar1;
            uVar15 = *(uint *)(lVar13 + 0x10);
            unaff_x22 = (ulong)uVar15;
            sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar17,unaff_x21,2);
            if (*(long *)(lVar13 + 0x18) == 0) goto code_r0x016ced84;
            sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar13 + 0x18),unaff_x22,2);
            if (sVar5 == sVar6) {
              if (sVar5 < 3) {
code_r0x016cec64:
                unaff_x21 = *(ulong *)(lVar13 + 0x38);
                if (unaff_x21 == 0) goto code_r0x016ced84;
                if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar21) goto code_r0x016ced88;
                iVar9 = *(int *)(unaff_x21 + uVar21 * 4 + 0x20);
                if (iVar9 == 0) {
                  unaff_x22 = (ulong)*(uint *)(lVar13 + 0x40);
                  goto code_r0x016cecac;
                }
                unaff_x21 = *(ulong *)(lVar13 + 0x18);
                if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
                iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar19;
                *(int *)(lVar13 + 0x10) = iVar10;
                iVar9 = iVar9 - iVar19;
                goto code_r0x016ced3c;
              }
              iVar9 = 2;
              while( true ) {
                if (*(long *)(lVar13 + 0x18) == 0) goto code_r0x016ced84;
                sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar13 + 0x18),uVar1 + iVar9,2);
                if (*(long *)(lVar13 + 0x18) == 0) goto code_r0x016ced84;
                sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar13 + 0x18),uVar15 + iVar9,2);
                if (sVar6 != sVar7) break;
                iVar9 = iVar9 + 2;
                if (sVar5 <= iVar9) goto code_r0x016cec64;
              }
            }
            uVar21 = uVar21 + 1;
            unaff_x22 = (ulong)*(int *)(lVar13 + 0x40);
          } while ((long)uVar21 < (long)unaff_x22);
        }
        unaff_x21 = *(ulong *)(lVar13 + 0x38);
        if (unaff_x21 == 0) {
code_r0x016ced84:
          func_0x00f78af4();
        }
        else {
code_r0x016cecac:
          if ((int)unaff_x22 == *(int *)(unaff_x21 + 0x18)) {
            unaff_x21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,(int)unaff_x22 << 1);
            lVar17 = *(long *)(lVar13 + 0x38);
            if (lVar17 == 0) goto code_r0x016ced84;
            /*System.Array$$Copy*/ func_0x0292c49c(lVar17,unaff_x21,*(undefined4 *)(lVar17 + 0x18),0);
            *(ulong *)(lVar13 + 0x38) = unaff_x21;
            unaff_x22 = (ulong)*(uint *)(lVar13 + 0x40);
          }
          uVar15 = (uint)unaff_x22;
          *(uint *)(lVar13 + 0x40) = uVar15 + 1;
          uVar8 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar13);
          if (unaff_x21 == 0) goto code_r0x016ced84;
          if (uVar15 < *(uint *)(unaff_x21 + 0x18)) {
            *(undefined4 *)(unaff_x21 + (long)(int)uVar15 * 4 + 0x20) = uVar8;
            unaff_x21 = *(ulong *)(lVar13 + 0x18);
            if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
              iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
              iVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar13);
              iVar10 = iVar10 - iVar19;
              iVar9 = iVar9 - iVar19;
code_r0x016ced3c:
              /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar10,4);
              /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar10,4,(long)iVar9);
              *(undefined4 *)(lVar13 + 0x30) = 0xffffffff;
              return uVar20;
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
      uVar12 = func_0x00f78a24(0x3d6cea8);
      iVar19 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar11,uVar12);
      uVar12 = func_0x00f78a24(0x3d56a30);
      auVar27 = func_0x00f78ac0(uVar11,uVar12);
      puStack_a8 = &FlatBuffers_FlatBufferBuilder__Required;
      pppuVar3 = &ppuStack_b0;
      lVar13 = *(long *)(auVar27._0_8_ + 0x18);
      iStack_d4 = iVar19;
      uStack_d0 = unaff_x22;
      uStack_c8 = unaff_x21;
      uStack_c0 = uVar20;
      uStack_b8 = uVar11;
      ppuStack_b0 = &puStack_60;
      if ((lVar13 != 0) && (*(long *)(lVar13 + 0x10) != 0)) {
        iVar9 = *(int *)(*(long *)(lVar13 + 0x10) + 0x18) - auVar27._8_4_;
        iVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar13,iVar9,4);
        lVar13 = *(long *)(auVar27._0_8_ + 0x18);
        if (lVar13 != 0) {
          uVar20 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar13,(iVar9 - iVar10) + iVar19,2);
          if ((uVar20 & 0xffff) != 0) {
            return uVar20;
          }
          goto code_r0x016cee5c;
        }
      }
      func_0x00f78af4();
code_r0x016cee5c:
      uVar11 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_d4,0);
      uVar12 = func_0x00f78a24(0x3d6ce88);
      uVar14 = func_0x00f78a24(0x3d66338);
      lVar13 = /*System.String$$Concat*/ func_0x029be39c(uVar12,uVar11,uVar14,0);
      func_0x00f78a24(0x3d22a38);
      uVar20 = func_0x00f78aec();
      uVar12 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar20,lVar13);
      uVar11 = func_0x00f78a24(0x3d56a50);
      puVar24 = &FlatBuffers_FlatBufferBuilder__Finish;
      auVar26 = func_0x00f78ac0(uVar20,uVar11);
      puVar4 = auStack_e0;
      do {
        uVar21 = auVar26._8_8_;
        lVar17 = auVar26._0_8_;
        *(ulong *)(puVar4 + -0x20) = uVar20;
        *(long *)(puVar4 + -0x18) = lVar13;
        *(undefined1 ****)(puVar4 + -0x10) = pppuVar3;
        *(undefined **)(puVar4 + -8) = puVar24;
        pppuVar3 = (undefined1 ***)(puVar4 + -0x10);
        if ((int)uVar12 == 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar17,*(undefined4 *)(lVar17 + 0x20),4);
          uVar20 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar17,uVar21);
code_r0x016cef70:
          if (*(long *)(lVar17 + 0x18) != 0) {
            *(undefined4 *)(*(long *)(lVar17 + 0x18) + 0x18) = *(undefined4 *)(lVar17 + 0x10);
            return uVar20;
          }
        }
        else if (lVar17 != 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar17,*(undefined4 *)(lVar17 + 0x20),8);
          /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar17,uVar21);
          if ((*(long *)(lVar17 + 0x18) != 0) &&
             (lVar13 = *(long *)(*(long *)(lVar17 + 0x18) + 0x10), lVar13 != 0)) {
            uVar21 = (ulong)(uint)(*(int *)(lVar13 + 0x18) - *(int *)(lVar17 + 0x10));
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar17,4,0);
            uVar20 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar17,uVar21);
            goto code_r0x016cef70;
          }
        }
        puVar24 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar26 = func_0x00f78af4();
        uVar12 = 0;
        puVar4 = puVar4 + -0x20;
        lVar13 = lVar17;
        uVar20 = uVar21;
      } while( true );
    }
    uVar11 = 0;
  }
  else {
    uVar11 = 1;
    pppuVar23 = (undefined1 ***)ppuVar22;
  }
  uVar20 = auVar26._0_8_;
  auVar25._8_8_ = uVar11;
  auVar25._0_8_ = uVar20;
  param_4 = 0;
  *(ulong *)((long)pppuVar3 + -0x30) = unaff_x22;
  *(ulong *)((long)pppuVar3 + -0x28) = unaff_x21;
  *(undefined8 *)((long)pppuVar3 + -0x20) = unaff_x20;
  *(undefined8 *)((long)pppuVar3 + -0x18) = unaff_x19;
  *(undefined1 ****)((long)pppuVar3 + -0x10) = pppuVar23;
  *(undefined **)((long)pppuVar3 + -8) = puVar24;
  if ((auVar26._8_8_ == 0) && (*(char *)(uVar20 + 0x48) == '\0')) {
    return uVar20;
  }
  uVar12 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar20,8,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutLong*/ func_0x016cdd6c(uVar20,auVar26._8_8_);
  puVar4 = *(undefined1 **)((long)pppuVar3 + -0x10);
  puVar24 = *(undefined **)((long)pppuVar3 + -8);
  lVar13 = *(long *)((long)pppuVar3 + -0x20);
  param_1 = *(long *)((long)pppuVar3 + -0x18);
  unaff_x22 = *(ulong *)((long)pppuVar3 + -0x30);
  uVar11 = *(undefined8 *)((long)pppuVar3 + -0x28);
code_r0x016ce380:
  do {
    uVar14 = auVar25._8_8_;
    *(long *)((long)pppuVar3 + -0x20) = lVar13;
    *(long *)((long)pppuVar3 + -0x18) = param_1;
    *(undefined1 **)((long)pppuVar3 + -0x10) = puVar4;
    *(undefined **)((long)pppuVar3 + -8) = puVar24;
    uVar15 = auVar25._8_4_;
    if ((int)uVar15 < *(int *)(auVar25._0_8_ + 0x30)) {
      lVar13 = *(long *)(auVar25._0_8_ + 0x28);
      uVar20 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      uVar16 = uVar12;
      if (lVar13 == 0) goto code_r0x016ce410;
      if (uVar15 < *(uint *)(lVar13 + 0x18)) {
        *(int *)(lVar13 + (long)(int)uVar15 * 4 + 0x20) = (int)uVar20;
        return uVar20;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      uVar14 = func_0x00f78aec();
      uVar12 = func_0x00f78a24(0x3d6ceb8);
      uVar16 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar14,uVar12);
      uVar12 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar14,uVar12);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar12 = func_0x00f78b24();
    auVar25 = func_0x00f78ac0(uVar12,0);
    uVar20 = auVar25._0_8_;
    *(ulong *)((long)pppuVar3 + -0x50) = unaff_x22;
    *(undefined8 *)((long)pppuVar3 + -0x48) = uVar11;
    *(long *)((long)pppuVar3 + -0x40) = lVar13;
    *(undefined8 *)((long)pppuVar3 + -0x38) = uVar14;
    *(undefined1 **)((long)pppuVar3 + -0x30) = (undefined1 *)((long)pppuVar3 + -0x10);
    *(undefined **)((long)pppuVar3 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    if (((int)uVar16 == (int)param_4) && (*(char *)(uVar20 + 0x48) == '\0')) {
      return uVar20;
    }
    uVar12 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar20,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar20,uVar16);
    puVar4 = *(undefined1 **)((long)pppuVar3 + -0x30);
    puVar24 = *(undefined **)((long)pppuVar3 + -0x28);
    lVar13 = *(long *)((long)pppuVar3 + -0x40);
    param_1 = *(long *)((long)pppuVar3 + -0x38);
    unaff_x22 = *(ulong *)((long)pppuVar3 + -0x50);
    uVar11 = *(undefined8 *)((long)pppuVar3 + -0x48);
    pppuVar3 = (undefined1 ***)((long)pppuVar3 + -0x20);
  } while( true );
}



// ============================================================
// RVA: 0x167c070 | Core.Services.LeaderboardOccurrence.AddNextStartDate
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_LeaderboardOccurrence__AddNextStartDate
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
  undefined8 uVar15;
  long lVar16;
  undefined8 unaff_x19;
  int iVar17;
  undefined8 unaff_x20;
  long lVar18;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar19;
  undefined1 *unaff_x29;
  undefined1 *puVar20;
  undefined1 ***pppuVar21;
  undefined *unaff_x30;
  undefined *puVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [12];
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
  
  auVar23._8_8_ = param_2;
  auVar23._0_8_ = param_1;
  if (param_1 == 0) {
    puVar2 = &stack0xfffffffffffffff0;
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x30 = &Core_Services_LeaderboardOccurrence__AddStartDate;
    auVar23 = func_0x00f78af4();
    if (auVar23._0_8_ == 0) {
      puStack_18 = &Core_Services_LeaderboardOccurrence__AddStartDate;
      puStack_20 = &stack0xfffffffffffffff0;
      lVar9 = func_0x00f78af4();
      puStack_28 = &Core_Services_LeaderboardOccurrence__EndLeaderboardOccurrence;
      puStack_30 = (undefined1 *)&puStack_20;
      if ((bRam0000000003eb59c6 & 1) == 0) {
        puStack_30 = (undefined1 *)&puStack_20;
        func_0x00f78a20(0x3d3f158);
        bRam0000000003eb59c6 = 1;
      }
      if (lVar9 == 0) {
        lVar9 = func_0x00f78af4();
        if (lVar9 == 0) {
          lVar9 = func_0x00f78af4();
          return *(ulong *)(lVar9 + 8);
        }
        uVar15 = 0;
        puVar2 = &stack0xffffffffffffff90;
        puVar20 = &stack0xffffffffffffffb0;
        lVar18 = 2;
        uVar13 = 0x3eb5000;
        if ((bRam0000000003eb5cd7 & 1) == 0) {
          func_0x00f78a20(0x3d1f100);
          bRam0000000003eb5cd7 = 1;
        }
        /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar9);
        if (*(long *)(lVar9 + 0x28) != 0) {
          if (*(int *)(*(long *)(lVar9 + 0x28) + 0x18) < 2) {
            uVar13 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,2);
            *(undefined8 *)(lVar9 + 0x28) = uVar13;
          }
          *(undefined4 *)(lVar9 + 0x30) = 2;
          uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar9);
          *(int *)(lVar9 + 0x34) = (int)uVar10;
          return uVar10;
        }
        puVar22 = &FlatBuffers_FlatBufferBuilder__Slot;
        auVar24 = func_0x00f78af4();
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
          lVar18 = *(long *)(lVar9 + 0x28);
          if (lVar18 == 0) goto code_r0x016ced84;
          if (*(uint *)(lVar18 + 0x18) <= uVar1) goto code_r0x016ced88;
        } while (*(int *)(lVar18 + (ulong)uVar1 * 4 + 0x20) == 0);
        unaff_x22 = unaff_x21 + 8;
        do {
          uVar19 = unaff_x22 - 8;
          if (*(uint *)(lVar18 + 0x18) <= uVar19) goto code_r0x016ced88;
          iVar7 = *(int *)(lVar18 + unaff_x22 * 4);
          sVar3 = 0;
          if (iVar7 != 0) {
            sVar3 = (short)uVar10 - (short)iVar7;
          }
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar9,2,0);
          /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar9,(int)sVar3);
          lVar18 = *(long *)(lVar9 + 0x28);
          if (lVar18 == 0) goto code_r0x016ced84;
          if (*(uint *)(lVar18 + 0x18) <= uVar19) goto code_r0x016ced88;
          *(undefined4 *)(lVar18 + unaff_x22 * 4) = 0;
          unaff_x22 = unaff_x22 - 1;
          uVar12 = uVar1;
        } while (0 < (long)uVar19);
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
          uVar19 = 0;
          do {
            lVar18 = *(long *)(lVar9 + 0x18);
            if (((lVar18 == 0) || (*(long *)(lVar18 + 0x10) == 0)) ||
               (lVar16 = *(long *)(lVar9 + 0x38), lVar16 == 0)) goto code_r0x016ced84;
            if (*(uint *)(lVar16 + 0x18) <= uVar19) goto code_r0x016ced88;
            uVar1 = *(int *)(*(long *)(lVar18 + 0x10) + 0x18) - *(int *)(lVar16 + uVar19 * 4 + 0x20)
            ;
            unaff_x21 = (ulong)uVar1;
            uVar12 = *(uint *)(lVar9 + 0x10);
            unaff_x22 = (ulong)uVar12;
            sVar3 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar18,unaff_x21,2);
            if (*(long *)(lVar9 + 0x18) == 0) goto code_r0x016ced84;
            sVar4 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar9 + 0x18),unaff_x22,2);
            if (sVar3 == sVar4) {
              if (sVar3 < 3) {
code_r0x016cec64:
                unaff_x21 = *(ulong *)(lVar9 + 0x38);
                if (unaff_x21 == 0) goto code_r0x016ced84;
                if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar19) goto code_r0x016ced88;
                iVar7 = *(int *)(unaff_x21 + uVar19 * 4 + 0x20);
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
            uVar19 = uVar19 + 1;
            unaff_x22 = (ulong)*(int *)(lVar9 + 0x40);
          } while ((long)uVar19 < (long)unaff_x22);
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
            lVar18 = *(long *)(lVar9 + 0x38);
            if (lVar18 == 0) goto code_r0x016ced84;
            /*System.Array$$Copy*/ func_0x0292c49c(lVar18,unaff_x21,*(undefined4 *)(lVar18 + 0x18),0);
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
        uVar13 = func_0x00f78b24();
        func_0x00f78ac0(uVar13,0);
      }
      func_0x00f78a24(0x3d22a38);
      uVar13 = func_0x00f78aec();
      uVar15 = func_0x00f78a24(0x3d6cea8);
      iVar17 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar13,uVar15);
      uVar15 = func_0x00f78a24(0x3d56a30);
      auVar25 = func_0x00f78ac0(uVar13,uVar15);
      puStack_78 = &FlatBuffers_FlatBufferBuilder__Required;
      pppuVar21 = &ppuStack_80;
      lVar9 = *(long *)(auVar25._0_8_ + 0x18);
      iStack_a4 = iVar17;
      uStack_a0 = unaff_x22;
      uStack_98 = unaff_x21;
      uStack_90 = uVar10;
      uStack_88 = uVar13;
      ppuStack_80 = &puStack_30;
      if ((lVar9 != 0) && (*(long *)(lVar9 + 0x10) != 0)) {
        iVar7 = *(int *)(*(long *)(lVar9 + 0x10) + 0x18) - auVar25._8_4_;
        iVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar9,iVar7,4);
        lVar9 = *(long *)(auVar25._0_8_ + 0x18);
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
      uVar13 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_a4,0);
      uVar15 = func_0x00f78a24(0x3d6ce88);
      uVar11 = func_0x00f78a24(0x3d66338);
      lVar9 = /*System.String$$Concat*/ func_0x029be39c(uVar15,uVar13,uVar11,0);
      func_0x00f78a24(0x3d22a38);
      uVar10 = func_0x00f78aec();
      uVar15 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar10,lVar9);
      uVar13 = func_0x00f78a24(0x3d56a50);
      puVar22 = &FlatBuffers_FlatBufferBuilder__Finish;
      auVar23 = func_0x00f78ac0(uVar10,uVar13);
      puVar2 = auStack_b0;
      do {
        uVar19 = auVar23._8_8_;
        lVar18 = auVar23._0_8_;
        *(ulong *)(puVar2 + -0x20) = uVar10;
        *(long *)(puVar2 + -0x18) = lVar9;
        *(undefined1 ****)(puVar2 + -0x10) = pppuVar21;
        *(undefined **)(puVar2 + -8) = puVar22;
        pppuVar21 = (undefined1 ***)(puVar2 + -0x10);
        if ((int)uVar15 == 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar18,*(undefined4 *)(lVar18 + 0x20),4);
          uVar10 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar18,uVar19);
code_r0x016cef70:
          if (*(long *)(lVar18 + 0x18) != 0) {
            *(undefined4 *)(*(long *)(lVar18 + 0x18) + 0x18) = *(undefined4 *)(lVar18 + 0x10);
            return uVar10;
          }
        }
        else if (lVar18 != 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar18,*(undefined4 *)(lVar18 + 0x20),8);
          /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar18,uVar19);
          if ((*(long *)(lVar18 + 0x18) != 0) &&
             (lVar9 = *(long *)(*(long *)(lVar18 + 0x18) + 0x10), lVar9 != 0)) {
            uVar19 = (ulong)(uint)(*(int *)(lVar9 + 0x18) - *(int *)(lVar18 + 0x10));
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar18,4,0);
            uVar10 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar18,uVar19);
            goto code_r0x016cef70;
          }
        }
        puVar22 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar23 = func_0x00f78af4();
        uVar15 = 0;
        puVar2 = puVar2 + -0x20;
        lVar9 = lVar18;
        uVar10 = uVar19;
      } while( true );
    }
    uVar13 = 0;
  }
  else {
    uVar13 = 1;
    puVar2 = (undefined1 *)register0x00000008;
  }
  uVar10 = auVar23._0_8_;
  auVar24._8_8_ = uVar13;
  auVar24._0_8_ = uVar10;
  param_4 = 0;
  *(ulong *)(puVar2 + -0x30) = unaff_x22;
  *(ulong *)(puVar2 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
  *(undefined8 *)(puVar2 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
  *(undefined **)(puVar2 + -8) = unaff_x30;
  if ((auVar23._8_8_ == 0) && (*(char *)(uVar10 + 0x48) == '\0')) {
    return uVar10;
  }
  uVar15 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar10,8,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutLong*/ func_0x016cdd6c(uVar10,auVar23._8_8_);
  puVar20 = *(undefined1 **)(puVar2 + -0x10);
  puVar22 = *(undefined **)(puVar2 + -8);
  lVar18 = *(long *)(puVar2 + -0x20);
  lVar9 = *(long *)(puVar2 + -0x18);
  unaff_x22 = *(ulong *)(puVar2 + -0x30);
  uVar13 = *(undefined8 *)(puVar2 + -0x28);
code_r0x016ce380:
  do {
    uVar11 = auVar24._8_8_;
    *(long *)(puVar2 + -0x20) = lVar18;
    *(long *)(puVar2 + -0x18) = lVar9;
    *(undefined1 **)(puVar2 + -0x10) = puVar20;
    *(undefined **)(puVar2 + -8) = puVar22;
    uVar12 = auVar24._8_4_;
    if ((int)uVar12 < *(int *)(auVar24._0_8_ + 0x30)) {
      lVar18 = *(long *)(auVar24._0_8_ + 0x28);
      uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      uVar14 = uVar15;
      if (lVar18 == 0) goto code_r0x016ce410;
      if (uVar12 < *(uint *)(lVar18 + 0x18)) {
        *(int *)(lVar18 + (long)(int)uVar12 * 4 + 0x20) = (int)uVar10;
        return uVar10;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      uVar11 = func_0x00f78aec();
      uVar15 = func_0x00f78a24(0x3d6ceb8);
      uVar14 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar11,uVar15);
      uVar15 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar11,uVar15);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar15 = func_0x00f78b24();
    auVar24 = func_0x00f78ac0(uVar15,0);
    uVar10 = auVar24._0_8_;
    *(ulong *)(puVar2 + -0x50) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x48) = uVar13;
    *(long *)(puVar2 + -0x40) = lVar18;
    *(undefined8 *)(puVar2 + -0x38) = uVar11;
    *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    if (((int)uVar14 == (int)param_4) && (*(char *)(uVar10 + 0x48) == '\0')) {
      return uVar10;
    }
    uVar15 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar10,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar10,uVar14);
    puVar20 = *(undefined1 **)(puVar2 + -0x30);
    puVar22 = *(undefined **)(puVar2 + -0x28);
    lVar18 = *(long *)(puVar2 + -0x40);
    lVar9 = *(long *)(puVar2 + -0x38);
    unaff_x22 = *(ulong *)(puVar2 + -0x50);
    uVar13 = *(undefined8 *)(puVar2 + -0x48);
    puVar2 = puVar2 + -0x20;
  } while( true );
}



// ============================================================
// RVA: 0x167c094 | Core.Services.LeaderboardOccurrence.AddStartDate
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_LeaderboardOccurrence__AddStartDate
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
    uVar16 = 0;
    if ((param_2 == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    uVar13 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,8,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutLong*/ func_0x016cdd6c(param_1,param_2);
    puVar2 = (undefined1 *)register0x00000008;
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
  lVar9 = func_0x00f78af4();
  if ((bRam0000000003eb59c6 & 1) == 0) {
    func_0x00f78a20(0x3d3f158);
    bRam0000000003eb59c6 = 1;
  }
  if (lVar9 == 0) {
    unaff_x19 = func_0x00f78af4();
    if (unaff_x19 == 0) {
      lVar9 = func_0x00f78af4();
      return *(ulong *)(lVar9 + 8);
    }
    uVar13 = 0;
    puVar2 = &stack0xffffffffffffffa0;
    unaff_x29 = &stack0xffffffffffffffc0;
    unaff_x20 = 2;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(unaff_x19);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      if (*(int *)(*(long *)(unaff_x19 + 0x28) + 0x18) < 2) {
        uVar16 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,2);
        *(undefined8 *)(unaff_x19 + 0x28) = uVar16;
      }
      *(undefined4 *)(unaff_x19 + 0x30) = 2;
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
        uVar1 = *(int *)(*(long *)(lVar14 + 0x10) + 0x18) - *(int *)(lVar15 + uVar18 * 4 + 0x20);
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
  uVar12 = func_0x00f78a24(0x3d66338);
  lVar9 = /*System.String$$Concat*/ func_0x029be39c(uVar13,uVar16,uVar12,0);
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
// RVA: 0x167c0b8 | Core.Services.LeaderboardOccurrence.EndLeaderboardOccurrence
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_LeaderboardOccurrence__EndLeaderboardOccurrence
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
  
  if ((bRam0000000003eb59c6 & 1) == 0) {
    func_0x00f78a20(0x3d3f158);
    bRam0000000003eb59c6 = 1;
  }
  if (param_1 == 0) {
    lVar15 = func_0x00f78af4();
    if (lVar15 == 0) {
      lVar15 = func_0x00f78af4();
      return *(ulong *)(lVar15 + 8);
    }
    uVar11 = 0;
    puVar20 = &stack0xffffffffffffffd0;
    lVar16 = 2;
    uVar10 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar15);
    if (*(long *)(lVar15 + 0x28) != 0) {
      if (*(int *)(*(long *)(lVar15 + 0x28) + 0x18) < 2) {
        uVar10 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,2);
        *(undefined8 *)(lVar15 + 0x28) = uVar10;
      }
      *(undefined4 *)(lVar15 + 0x30) = 2;
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
// RVA: 0x167c104 | Core.Services.LeaderboardOccurrence.StartLeaderboardOccurrence
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

long Core_Services_LeaderboardOccurrence__StartLeaderboardOccurrence
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
  lVar7 = 2;
  uVar8 = 0x3eb5000;
  if ((bRam0000000003eb5cd7 & 1) == 0) {
    func_0x00f78a20(0x3d1f100);
    bRam0000000003eb5cd7 = 1;
  }
  /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(param_1);
  if (*(long *)(param_1 + 0x28) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x28) + 0x18) < 2) {
      uVar8 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,2);
      *(undefined8 *)(param_1 + 0x28) = uVar8;
    }
    *(undefined4 *)(param_1 + 0x30) = 2;
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



