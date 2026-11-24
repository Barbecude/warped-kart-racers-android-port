// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Networking.HostEventResults

// ============================================================
// RVA: 0x16554f4 | Core.Networking.HostEventResults.get_ByteBuffer
// ============================================================

undefined8 Core_Networking_HostEventResults__get_ByteBuffer(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// ============================================================
// RVA: 0x16554fc | Core.Networking.HostEventResults.GetRootAsHostEventResults
// ============================================================

undefined1  [16] Core_Networking_HostEventResults__GetRootAsHostEventResults(long param_1)

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
// RVA: 0x1655508 | Core.Networking.HostEventResults.GetRootAsHostEventResults
// ============================================================

undefined1  [16]
Core_Networking_HostEventResults__GetRootAsHostEventResults
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
// RVA: 0x165554c | Core.Networking.HostEventResults.__assign
// ============================================================

undefined1  [16]
Core_Networking_HostEventResults____assign
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
// RVA: 0x1655560 | Core.Networking.HostEventResults.__init
// ============================================================

void Core_Networking_HostEventResults____init
               (undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  return;
}



// ============================================================
// RVA: 0x165556c | Core.Networking.HostEventResults.RoundScores
// ============================================================

void Core_Networking_HostEventResults__RoundScores(ulong *param_1,long param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if ((bRam0000000003eb57f7 & 1) == 0) {
    func_0x00f78a20(0x3d3e7f0);
    bRam0000000003eb57f7 = 1;
  }
  uVar2 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_2,4,0);
  if ((int)uVar2 != 0) {
    iVar1 = /*FlatBuffers.Table$$__vector*/ func_0x016cf330(param_2,uVar2,0);
    uVar3 = /*FlatBuffers.Table$$__indirect*/ func_0x016cf210(param_2,iVar1 + param_3 * 4,0);
    uVar4 = *(ulong *)(param_2 + 8);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    *(undefined1 *)(param_1 + 2) = 1;
    *param_1 = uVar3 & 0xffffffff;
    param_1[1] = uVar4;
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// ============================================================
// RVA: 0x1655624 | Core.Networking.HostEventResults.get_RoundScoresLength
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

ulong Core_Networking_HostEventResults__get_RoundScoresLength(int *param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  int *extraout_x8;
  ulong unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  uVar5 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,4,0);
  if ((int)uVar5 == 0) {
    return uVar5;
  }
  puVar7 = &stack0xfffffffffffffff0;
  if (*(long *)(param_1 + 2) != 0) {
    uVar1 = *param_1 + (int)uVar5;
    unaff_x20 = (ulong)uVar1;
    iVar3 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(param_1 + 2),unaff_x20,4);
    if (*(long *)(param_1 + 2) != 0) {
      uVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(param_1 + 2),uVar1 + iVar3,4);
      return uVar5;
    }
  }
  puVar8 = &FlatBuffers_Table____vector;
  auVar9 = func_0x00f78af4();
  puVar2 = &stack0xffffffffffffffe0;
  while( true ) {
    *(ulong *)(puVar2 + -0x20) = unaff_x20;
    *(int **)(puVar2 + -0x18) = param_1;
    *(undefined1 **)(puVar2 + -0x10) = puVar7;
    *(undefined **)(puVar2 + -8) = puVar8;
    lVar6 = *(long *)(auVar9._0_8_ + 2);
    if (lVar6 != 0) {
      iVar3 = *auVar9._0_8_ + auVar9._8_4_;
      iVar4 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar6,iVar3,4);
      return (ulong)(iVar3 + iVar4 + 4);
    }
    auVar10 = func_0x00f78af4();
    uVar5 = auVar10._0_8_;
    *(ulong *)(puVar2 + -0x50) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x48) = unaff_x21;
    *(ulong *)(puVar2 + -0x40) = unaff_x20;
    *(int **)(puVar2 + -0x38) = param_1;
    *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x28) = &FlatBuffers_Table____vector_as_arraysegment;
    puVar7 = puVar2 + -0x30;
    if ((bRam0000000003eb5cd9 & 1) == 0) {
      func_0x00f78a20(0x3d3e500);
      bRam0000000003eb5cd9 = 1;
    }
    unaff_x22 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(uVar5,auVar10._8_8_);
    auVar9._8_8_ = unaff_x22;
    auVar9._0_8_ = uVar5;
    if ((int)unaff_x22 == 0) break;
    puVar8 = &UNK_016cf3d0;
    puVar2 = puVar2 + -0x50;
    param_1 = extraout_x8;
    unaff_x20 = uVar5;
    unaff_x21 = auVar10._8_8_;
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
// RVA: 0x1655668 | Core.Networking.HostEventResults.Standings
// ============================================================

void Core_Networking_HostEventResults__Standings(ulong *param_1,long param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if ((bRam0000000003eb57f8 & 1) == 0) {
    func_0x00f78a20(0x3d3e7e0);
    bRam0000000003eb57f8 = 1;
  }
  uVar2 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_2,6,0);
  if ((int)uVar2 != 0) {
    iVar1 = /*FlatBuffers.Table$$__vector*/ func_0x016cf330(param_2,uVar2,0);
    uVar3 = /*FlatBuffers.Table$$__indirect*/ func_0x016cf210(param_2,iVar1 + param_3 * 4,0);
    uVar4 = *(ulong *)(param_2 + 8);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    *(undefined1 *)(param_1 + 2) = 1;
    *param_1 = uVar3 & 0xffffffff;
    param_1[1] = uVar4;
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// ============================================================
// RVA: 0x1655720 | Core.Networking.HostEventResults.get_StandingsLength
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

ulong Core_Networking_HostEventResults__get_StandingsLength(int *param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  int *extraout_x8;
  ulong unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  uVar5 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,6,0);
  if ((int)uVar5 == 0) {
    return uVar5;
  }
  puVar7 = &stack0xfffffffffffffff0;
  if (*(long *)(param_1 + 2) != 0) {
    uVar1 = *param_1 + (int)uVar5;
    unaff_x20 = (ulong)uVar1;
    iVar3 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(param_1 + 2),unaff_x20,4);
    if (*(long *)(param_1 + 2) != 0) {
      uVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(param_1 + 2),uVar1 + iVar3,4);
      return uVar5;
    }
  }
  puVar8 = &FlatBuffers_Table____vector;
  auVar9 = func_0x00f78af4();
  puVar2 = &stack0xffffffffffffffe0;
  while( true ) {
    *(ulong *)(puVar2 + -0x20) = unaff_x20;
    *(int **)(puVar2 + -0x18) = param_1;
    *(undefined1 **)(puVar2 + -0x10) = puVar7;
    *(undefined **)(puVar2 + -8) = puVar8;
    lVar6 = *(long *)(auVar9._0_8_ + 2);
    if (lVar6 != 0) {
      iVar3 = *auVar9._0_8_ + auVar9._8_4_;
      iVar4 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar6,iVar3,4);
      return (ulong)(iVar3 + iVar4 + 4);
    }
    auVar10 = func_0x00f78af4();
    uVar5 = auVar10._0_8_;
    *(ulong *)(puVar2 + -0x50) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x48) = unaff_x21;
    *(ulong *)(puVar2 + -0x40) = unaff_x20;
    *(int **)(puVar2 + -0x38) = param_1;
    *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x28) = &FlatBuffers_Table____vector_as_arraysegment;
    puVar7 = puVar2 + -0x30;
    if ((bRam0000000003eb5cd9 & 1) == 0) {
      func_0x00f78a20(0x3d3e500);
      bRam0000000003eb5cd9 = 1;
    }
    unaff_x22 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(uVar5,auVar10._8_8_);
    auVar9._8_8_ = unaff_x22;
    auVar9._0_8_ = uVar5;
    if ((int)unaff_x22 == 0) break;
    puVar8 = &UNK_016cf3d0;
    puVar2 = puVar2 + -0x50;
    param_1 = extraout_x8;
    unaff_x20 = uVar5;
    unaff_x21 = auVar10._8_8_;
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
// RVA: 0x1655764 | Core.Networking.HostEventResults.CreateHostEventResults
// ============================================================

/* WARNING: Possible PIC construction at 0x0165578c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016557a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cea74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cea88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ceb04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ceb50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ceb74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cebe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cec2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ced5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cee1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cef0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cef44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cef60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cecfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce31c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce3a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016558a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01655968: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce184: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc904: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdc30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdc8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdce8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdd44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdda0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cddfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccc30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cccb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccd14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccdc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cde98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016559f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01655ab4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016559f4) */
/* WARNING: Removing unreachable block (ram,0x01655a00) */
/* WARNING: Removing unreachable block (ram,0x01655a08) */
/* WARNING: Removing unreachable block (ram,0x01655a24) */
/* WARNING: Removing unreachable block (ram,0x01655a30) */
/* WARNING: Removing unreachable block (ram,0x01655a3c) */
/* WARNING: Removing unreachable block (ram,0x016cde9c) */
/* WARNING: Removing unreachable block (ram,0x016ccdc4) */
/* WARNING: Removing unreachable block (ram,0x016ccd18) */
/* WARNING: Removing unreachable block (ram,0x016ccd20) */
/* WARNING: Removing unreachable block (ram,0x016ccd48) */
/* WARNING: Removing unreachable block (ram,0x016ccd28) */
/* WARNING: Removing unreachable block (ram,0x016ccd4c) */
/* WARNING: Removing unreachable block (ram,0x016ccd84) */
/* WARNING: Removing unreachable block (ram,0x016ccdb0) */
/* WARNING: Removing unreachable block (ram,0x016ccd88) */
/* WARNING: Removing unreachable block (ram,0x016ccd34) */
/* WARNING: Removing unreachable block (ram,0x016cccbc) */
/* WARNING: Removing unreachable block (ram,0x016cccc4) */
/* WARNING: Removing unreachable block (ram,0x016cccec) */
/* WARNING: Removing unreachable block (ram,0x016ccccc) */
/* WARNING: Removing unreachable block (ram,0x016cccf0) */
/* WARNING: Removing unreachable block (ram,0x016cccd8) */
/* WARNING: Removing unreachable block (ram,0x016ccc34) */
/* WARNING: Removing unreachable block (ram,0x016ccc3c) */
/* WARNING: Removing unreachable block (ram,0x016ccc44) */
/* WARNING: Removing unreachable block (ram,0x016ccc90) */
/* WARNING: Removing unreachable block (ram,0x016ccc68) */
/* WARNING: Removing unreachable block (ram,0x016ccc94) */
/* WARNING: Removing unreachable block (ram,0x016ccc70) */
/* WARNING: Removing unreachable block (ram,0x016ccba4) */
/* WARNING: Removing unreachable block (ram,0x016ccbac) */
/* WARNING: Removing unreachable block (ram,0x016ccbb4) */
/* WARNING: Removing unreachable block (ram,0x016ccc00) */
/* WARNING: Removing unreachable block (ram,0x016ccbd8) */
/* WARNING: Removing unreachable block (ram,0x016ccc04) */
/* WARNING: Removing unreachable block (ram,0x016ccbe0) */
/* WARNING: Removing unreachable block (ram,0x016cde00) */
/* WARNING: Removing unreachable block (ram,0x016cdda4) */
/* WARNING: Removing unreachable block (ram,0x016cdd48) */
/* WARNING: Removing unreachable block (ram,0x016cdcec) */
/* WARNING: Removing unreachable block (ram,0x016cdc90) */
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
/* WARNING: Removing unreachable block (ram,0x016cdc34) */
/* WARNING: Removing unreachable block (ram,0x016cc834) */
/* WARNING: Removing unreachable block (ram,0x016cc83c) */
/* WARNING: Removing unreachable block (ram,0x016cc868) */
/* WARNING: Removing unreachable block (ram,0x016cc844) */
/* WARNING: Removing unreachable block (ram,0x016cc86c) */
/* WARNING: Removing unreachable block (ram,0x016cc850) */
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
/* WARNING: Removing unreachable block (ram,0x016ce188) */
/* WARNING: Removing unreachable block (ram,0x0165596c) */
/* WARNING: Removing unreachable block (ram,0x016ce224) */
/* WARNING: Removing unreachable block (ram,0x016558a8) */
/* WARNING: Removing unreachable block (ram,0x016558b4) */
/* WARNING: Removing unreachable block (ram,0x016558bc) */
/* WARNING: Removing unreachable block (ram,0x016558d8) */
/* WARNING: Removing unreachable block (ram,0x016558e4) */
/* WARNING: Removing unreachable block (ram,0x016558f0) */
/* WARNING: Removing unreachable block (ram,0x016ce46c) */
/* WARNING: Removing unreachable block (ram,0x016ce3a4) */
/* WARNING: Removing unreachable block (ram,0x016ce3a8) */
/* WARNING: Removing unreachable block (ram,0x016ce3b4) */
/* WARNING: Removing unreachable block (ram,0x016ce320) */
/* WARNING: Removing unreachable block (ram,0x016ced00) */
/* WARNING: Removing unreachable block (ram,0x016ced04) */
/* WARNING: Removing unreachable block (ram,0x016ced10) */
/* WARNING: Removing unreachable block (ram,0x016ced20) */
/* WARNING: Removing unreachable block (ram,0x016ced28) */
/* WARNING: Removing unreachable block (ram,0x016cef64) */
/* WARNING: Removing unreachable block (ram,0x016cef48) */
/* WARNING: Removing unreachable block (ram,0x016cef70) */
/* WARNING: Removing unreachable block (ram,0x016cef78) */
/* WARNING: Removing unreachable block (ram,0x016cef10) */
/* WARNING: Removing unreachable block (ram,0x016cef24) */
/* WARNING: Removing unreachable block (ram,0x016cef2c) */
/* WARNING: Removing unreachable block (ram,0x016cee20) */
/* WARNING: Removing unreachable block (ram,0x016cee2c) */
/* WARNING: Removing unreachable block (ram,0x016cee44) */
/* WARNING: Removing unreachable block (ram,0x016ced60) */
/* WARNING: Removing unreachable block (ram,0x016cec30) */
/* WARNING: Removing unreachable block (ram,0x016cec38) */
/* WARNING: Removing unreachable block (ram,0x016cec44) */
/* WARNING: Removing unreachable block (ram,0x016cebe8) */
/* WARNING: Removing unreachable block (ram,0x016cec48) */
/* WARNING: Removing unreachable block (ram,0x016cebf0) */
/* WARNING: Removing unreachable block (ram,0x016cec64) */
/* WARNING: Removing unreachable block (ram,0x016cec6c) */
/* WARNING: Removing unreachable block (ram,0x016cec78) */
/* WARNING: Removing unreachable block (ram,0x016ceca8) */
/* WARNING: Removing unreachable block (ram,0x016cec84) */
/* WARNING: Removing unreachable block (ram,0x016cec8c) */
/* WARNING: Removing unreachable block (ram,0x016cec94) */
/* WARNING: Removing unreachable block (ram,0x016ced3c) */
/* WARNING: Removing unreachable block (ram,0x016cc4e0) */
/* WARNING: Removing unreachable block (ram,0x016cc518) */
/* WARNING: Removing unreachable block (ram,0x016cc52c) */
/* WARNING: Removing unreachable block (ram,0x016cc538) */
/* WARNING: Removing unreachable block (ram,0x016cc540) */
/* WARNING: Removing unreachable block (ram,0x016cc548) */
/* WARNING: Removing unreachable block (ram,0x016cc5b8) */
/* WARNING: Removing unreachable block (ram,0x016cc5c0) */
/* WARNING: Removing unreachable block (ram,0x016cc5d4) */
/* WARNING: Removing unreachable block (ram,0x016cc5dc) */
/* WARNING: Removing unreachable block (ram,0x016cc5e4) */
/* WARNING: Removing unreachable block (ram,0x016cc5f0) */
/* WARNING: Removing unreachable block (ram,0x016cc554) */
/* WARNING: Removing unreachable block (ram,0x016cc55c) */
/* WARNING: Removing unreachable block (ram,0x016cc574) */
/* WARNING: Removing unreachable block (ram,0x016cc57c) */
/* WARNING: Removing unreachable block (ram,0x016cc624) */
/* WARNING: Removing unreachable block (ram,0x016cc584) */
/* WARNING: Removing unreachable block (ram,0x016cc628) */
/* WARNING: Removing unreachable block (ram,0x016cc590) */
/* WARNING: Removing unreachable block (ram,0x016cc5b4) */
/* WARNING: Removing unreachable block (ram,0x016cc610) */
/* WARNING: Removing unreachable block (ram,0x016cebfc) */
/* WARNING: Removing unreachable block (ram,0x016cec00) */
/* WARNING: Removing unreachable block (ram,0x016cec08) */
/* WARNING: Removing unreachable block (ram,0x016cec20) */
/* WARNING: Removing unreachable block (ram,0x016ceb78) */
/* WARNING: Removing unreachable block (ram,0x016cec58) */
/* WARNING: Removing unreachable block (ram,0x016cecac) */
/* WARNING: Removing unreachable block (ram,0x016cecb8) */
/* WARNING: Removing unreachable block (ram,0x016cecd8) */
/* WARNING: Removing unreachable block (ram,0x016cecf0) */
/* WARNING: Removing unreachable block (ram,0x016cec60) */
/* WARNING: Removing unreachable block (ram,0x016ceb84) */
/* WARNING: Removing unreachable block (ram,0x016ceb88) */
/* WARNING: Removing unreachable block (ram,0x016ceb90) */
/* WARNING: Removing unreachable block (ram,0x016ceb98) */
/* WARNING: Removing unreachable block (ram,0x016ceba0) */
/* WARNING: Removing unreachable block (ram,0x016cebac) */
/* WARNING: Removing unreachable block (ram,0x016cebd8) */
/* WARNING: Removing unreachable block (ram,0x016ceb54) */
/* WARNING: Removing unreachable block (ram,0x016ceb08) */
/* WARNING: Removing unreachable block (ram,0x016ceb10) */
/* WARNING: Removing unreachable block (ram,0x016ceb1c) */
/* WARNING: Removing unreachable block (ram,0x016ceb2c) */
/* WARNING: Removing unreachable block (ram,0x016cea8c) */
/* WARNING: Removing unreachable block (ram,0x016cea9c) */
/* WARNING: Removing unreachable block (ram,0x016ceaa0) */
/* WARNING: Removing unreachable block (ram,0x016ceb30) */
/* WARNING: Removing unreachable block (ram,0x016ceaa8) */
/* WARNING: Removing unreachable block (ram,0x016ced84) */
/* WARNING: Removing unreachable block (ram,0x016ceab0) */
/* WARNING: Removing unreachable block (ram,0x016ceabc) */
/* WARNING: Removing unreachable block (ram,0x016ceac8) */
/* WARNING: Removing unreachable block (ram,0x016ceacc) */
/* WARNING: Removing unreachable block (ram,0x016ced88) */
/* WARNING: Removing unreachable block (ram,0x016ceadc) */
/* WARNING: Removing unreachable block (ram,0x016ceae8) */
/* WARNING: Removing unreachable block (ram,0x016cea78) */
/* WARNING: Removing unreachable block (ram,0x016557a8) */
/* WARNING: Removing unreachable block (ram,0x01655790) */
/* WARNING: Removing unreachable block (ram,0x01655ab8) */
/* WARNING: Removing unreachable block (ram,0x016ce20c) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_HostEventResults__CreateHostEventResults
                (long param_1,undefined8 param_2,ulong param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined8 *****pppppuVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 ****ppppuVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  int iVar24;
  undefined4 uVar23;
  ulong uVar25;
  undefined *puVar26;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  ulong uVar27;
  long lVar28;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar29;
  undefined8 ******ppppppuVar30;
  undefined1 *puVar31;
  undefined8 ******ppppppuVar32;
  undefined8 *****pppppuVar33;
  undefined8 *****pppppuVar34;
  undefined *puVar35;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [12];
  undefined8 *****pppppuStack_130;
  undefined *puStack_128;
  undefined8 *****apppppuStack_100 [4];
  undefined8 *****pppppuStack_c0;
  undefined *puStack_b8;
  undefined8 ****ppppuStack_60;
  undefined *puStack_58;
  undefined8 ***pppuStack_50;
  undefined *puStack_48;
  undefined8 ****ppppuStack_40;
  undefined *puStack_38;
  
  pppppuVar14 = (undefined8 *****)&stack0xffffffffffffffd0;
  puVar13 = &stack0xffffffffffffffd0;
  pppppuVar33 = (undefined8 *****)&stack0xfffffffffffffff0;
  if (param_1 == 0) {
    puVar35 = &Core_Networking_HostEventResults__AddStandings;
    auVar39 = func_0x00f78af4();
    if (auVar39._0_8_ == 0) {
      pppppuVar14 = &ppppuStack_40;
      pppppuVar34 = &ppppuStack_40;
      puStack_38 = &Core_Networking_HostEventResults__AddStandings;
      puVar35 = &Core_Networking_HostEventResults__AddRoundScores;
      ppppuStack_40 = pppppuVar33;
      auVar39 = func_0x00f78af4();
      if (auVar39._0_8_ == 0) {
        puStack_48 = &Core_Networking_HostEventResults__AddRoundScores;
        pppuStack_50 = &ppppuStack_40;
        lVar22 = func_0x00f78af4();
        puVar13 = &stack0xffffffffffffff90;
        puStack_58 = &Core_Networking_HostEventResults__EndHostEventResults;
        pppppuVar33 = &ppppuStack_60;
        param_2 = 0x3eb5000;
        ppppuStack_60 = &pppuStack_50;
        if ((bRam0000000003eb57fb & 1) == 0) {
          ppppuStack_60 = &pppuStack_50;
          func_0x00f78a20(0x3d3f0e8);
          bRam0000000003eb57fb = 1;
        }
        if (lVar22 != 0) {
          ppppppuVar32 = (undefined8 ******)&ppppuStack_60;
          auVar39._8_8_ = lVar22;
          auVar39._0_8_ = 0x3eb5000;
          if ((bRam0000000003eb5cd8 & 1) == 0) {
            func_0x00f78a20(0x3d1f100,0);
            bRam0000000003eb5cd8 = 1;
          }
          if (*(int *)(lVar22 + 0x30) < 0) {
            func_0x00f78a24(0x3d22a38);
            puVar35 = (undefined *)func_0x00f78aec();
            uVar18 = func_0x00f78a24(0x3d6cea8);
            puVar26 = (undefined *)0x0;
            /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(puVar35,uVar18);
            uVar18 = func_0x00f78a24(0x3d56a30);
            auVar40 = func_0x00f78ac0(puVar35,uVar18);
            pppppuVar33 = auVar40._0_8_;
            pppppuStack_c0 = (undefined8 ******)0x3eb5000;
            ppppppuVar32 = (undefined8 ******)&stack0xffffffffffffff50;
            ppppuVar19 = pppppuVar33[3];
            puStack_b8 = puVar35;
            if ((ppppuVar19 != (undefined8 ****)0x0) && (ppppuVar19[2] != (undefined8 ***)0x0)) {
              uVar4 = *(int *)(ppppuVar19[2] + 3) - auVar40._8_4_;
              uVar25 = (ulong)uVar4;
              auVar37._8_4_ = uVar4;
              auVar37._0_8_ = ppppuVar19;
              auVar37._12_4_ = 0;
              puVar8 = &stack0xfffffffffffffee0;
              apppppuStack_100[3] = (undefined8 *****)&UNK_016cee20;
              ppppppuVar30 = apppppuStack_100 + 2;
              auVar7._8_8_ = 4;
              auVar7._0_8_ = ppppuVar19;
              uVar29 = 0x3d201a0;
              apppppuStack_100[0] = pppppuVar33;
              apppppuStack_100[1] = (undefined8 *****)puVar26;
              apppppuStack_100[2] = ppppppuVar32;
              if ((bRam0000000003eb5cd0 & 1) == 0) {
                func_0x00f78a20(0x3d201a0);
                bRam0000000003eb5cd0 = 1;
              }
              uVar27 = 4;
              puVar35 = &UNK_016cc68c;
              goto code_r0x016cc7a4;
            }
            func_0x00f78af4();
            uVar18 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&stack0xffffffffffffff2c,0);
            uVar20 = func_0x00f78a24(0x3d6ce88);
            uVar21 = func_0x00f78a24(0x3d66338);
            lVar22 = /*System.String$$Concat*/ func_0x029be39c(uVar20,uVar18,uVar21,0);
            func_0x00f78a24(0x3d22a38);
            uVar18 = func_0x00f78aec();
            uVar21 = 0;
            /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar18,lVar22);
            uVar20 = func_0x00f78a24(0x3d56a50);
            puVar35 = &FlatBuffers_FlatBufferBuilder__Finish;
            auVar39 = func_0x00f78ac0(uVar18,uVar20);
            puVar10 = &stack0xffffffffffffff20;
            while( true ) {
              uVar20 = auVar39._8_8_;
              lVar28 = auVar39._0_8_;
              auVar39._8_8_ = lVar28;
              auVar39._0_8_ = uVar20;
              auVar6._8_8_ = lVar28;
              auVar6._0_8_ = uVar20;
              *(undefined8 *)(puVar10 + -0x20) = uVar18;
              *(long *)(puVar10 + -0x18) = lVar22;
              *(undefined8 *******)(puVar10 + -0x10) = ppppppuVar32;
              *(undefined **)(puVar10 + -8) = puVar35;
              ppppppuVar32 = (undefined8 ******)(puVar10 + -0x10);
              uVar23 = *(undefined4 *)(lVar28 + 0x20);
              auVar38._8_4_ = uVar23;
              auVar38._0_8_ = lVar28;
              auVar38._12_4_ = 0;
              lVar22 = lVar28;
              if ((int)uVar21 == 0) {
                lVar22 = 0;
                uVar23 = 0;
              }
              auVar5._8_4_ = uVar23;
              auVar5._0_8_ = lVar22;
              auVar5._12_4_ = 0;
              if ((int)uVar21 == 0) {
                uVar25 = 4;
                puVar35 = &UNK_016cef64;
                puVar10 = puVar10 + -0x20;
                goto code_r0x016cdaac;
              }
              if (lVar22 != 0) break;
              puVar35 = &FlatBuffers_FlatBufferBuilder__Finish;
              auVar39 = func_0x00f78af4();
              uVar21 = 0;
              puVar10 = puVar10 + -0x20;
              lVar22 = lVar28;
              uVar18 = uVar20;
            }
            uVar25 = 8;
            puVar35 = &UNK_016cef10;
            puVar10 = puVar10 + -0x20;
            auVar38 = auVar5;
            auVar39 = auVar6;
          }
          else {
            auVar38._8_8_ = 4;
            auVar38._0_8_ = lVar22;
            uVar25 = 0;
            puVar35 = &UNK_016cea78;
            puVar10 = &stack0xffffffffffffff60;
          }
          goto code_r0x016cdaac;
        }
        puVar35 = &Core_Networking_HostEventResults__StartHostEventResults;
        param_1 = func_0x00f78af4();
        if (param_1 == 0) {
          auVar36 = func_0x00f78af4();
          lVar22 = auVar36._0_8_;
          if ((auVar36._8_8_ == 0) || (lVar22 == 0)) {
            auVar36 = func_0x00f78af4();
            lVar28 = auVar36._8_8_;
            lVar22 = auVar36._0_8_;
            puVar10 = &stack0xffffffffffffff20;
            puStack_b8 = &Core_Networking_HostEventResults__CreateRoundScoresVectorBlock;
            ppppppuVar32 = &pppppuStack_c0;
            unaff_x21 = 0x3eb5000;
            pppppuStack_c0 = (undefined8 *****)&stack0xffffffffffffff70;
            if ((bRam0000000003eb57f9 & 1) == 0) {
              func_0x00f78a20(0x3d569a0);
              bRam0000000003eb57f9 = 1;
            }
            if ((lVar28 == 0) || (lVar22 == 0)) {
              puVar35 = &Core_Networking_HostEventResults__StartRoundScoresVector;
              auVar40 = func_0x00f78af4();
              iVar24 = auVar40._8_4_;
              auVar36._8_8_ = lVar28;
              auVar36._0_8_ = auVar40._0_8_;
              if (auVar40._0_8_ == 0) {
                apppppuStack_100[3] =
                     (undefined8 *****)&Core_Networking_HostEventResults__StartRoundScoresVector;
                apppppuStack_100[2] = ppppppuVar32;
                auVar36 = func_0x00f78af4();
                lVar22 = auVar36._0_8_;
                apppppuStack_100[1] =
                     (undefined8 *****)&Core_Networking_HostEventResults__CreateStandingsVector;
                if ((auVar36._8_8_ == 0) || (lVar22 == 0)) {
                  apppppuStack_100[0] = apppppuStack_100 + 2;
                  auVar36 = func_0x00f78af4();
                  lVar28 = auVar36._8_8_;
                  lVar22 = auVar36._0_8_;
                  puVar10 = &stack0xfffffffffffffeb0;
                  puStack_128 = &Core_Networking_HostEventResults__CreateStandingsVectorBlock;
                  ppppppuVar32 = &pppppuStack_130;
                  unaff_x21 = 0x3eb5000;
                  pppppuStack_130 = apppppuStack_100;
                  if ((bRam0000000003eb57fa & 1) == 0) {
                    func_0x00f78a20(0x3d56998);
                    bRam0000000003eb57fa = 1;
                  }
                  if ((lVar28 == 0) || (lVar22 == 0)) {
                    puVar35 = &Core_Networking_HostEventResults__StartStandingsVector;
                    auVar40 = func_0x00f78af4();
                    iVar24 = auVar40._8_4_;
                    auVar36._8_8_ = lVar28;
                    auVar36._0_8_ = auVar40._0_8_;
                    if (auVar40._0_8_ == 0) {
                      lVar22 = func_0x00f78af4();
                      return *(ulong *)(lVar22 + 8);
                    }
                  }
                  else {
                    unaff_x21 = 0x3d56000;
                    iVar24 = *(int *)(lVar28 + 0x18);
                    puVar35 = &UNK_01655ab8;
                    puVar10 = &stack0xfffffffffffffeb0;
                  }
                }
                else {
                  iVar24 = *(int *)(auVar36._8_8_ + 0x18);
                  puVar35 = &UNK_016559f4;
                  puVar10 = &stack0xfffffffffffffee0;
                  ppppppuVar32 = apppppuStack_100;
                  apppppuStack_100[0] = apppppuStack_100 + 2;
                }
              }
            }
            else {
              unaff_x21 = 0x3d56000;
              iVar24 = *(int *)(lVar28 + 0x18);
              puVar35 = &UNK_0165596c;
              puVar10 = &stack0xffffffffffffff20;
            }
          }
          else {
            iVar24 = *(int *)(auVar36._8_8_ + 0x18);
            puVar35 = &UNK_016558a8;
            puVar10 = &stack0xffffffffffffff50;
            ppppppuVar32 = (undefined8 ******)&stack0xffffffffffffff70;
          }
          uVar29 = auVar36._0_8_;
          *(ulong *)(puVar10 + -0x30) = unaff_x22;
          *(ulong *)(puVar10 + -0x28) = unaff_x21;
          *(long *)(puVar10 + -0x20) = auVar36._8_8_;
          *(long *)(puVar10 + -0x18) = lVar22;
          *(undefined8 *******)(puVar10 + -0x10) = ppppppuVar32;
          *(undefined **)(puVar10 + -8) = puVar35;
          ppppppuVar32 = (undefined8 ******)(puVar10 + -0x10);
          unaff_x21 = 4;
          /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4();
          *(int *)(uVar29 + 0x44) = iVar24;
          uVar25 = CONCAT44(0,iVar24 * 4);
          auVar39._8_8_ = 4;
          auVar39._0_8_ = uVar25;
          auVar38._8_8_ = 4;
          auVar38._0_8_ = uVar29;
          puVar35 = &UNK_016ce188;
          puVar10 = puVar10 + -0x30;
          unaff_x22 = uVar29;
          goto code_r0x016cdaac;
        }
        lVar22 = 0;
        goto code_r0x016ce2a4;
      }
      uVar23 = 0;
    }
    else {
      uVar23 = 1;
      pppppuVar34 = pppppuVar33;
    }
    uVar29 = auVar39._0_8_;
    auVar40._8_4_ = uVar23;
    auVar40._0_8_ = uVar29;
    param_4 = 0;
    *(undefined8 *)((long)pppppuVar14 + -0x20) = unaff_x20;
    *(undefined8 *)((long)pppppuVar14 + -0x18) = unaff_x19;
    *(undefined8 ******)((long)pppppuVar14 + -0x10) = pppppuVar34;
    *(undefined **)((long)pppppuVar14 + -8) = puVar35;
    if ((auVar39._8_4_ == 0) && (*(char *)(uVar29 + 0x48) == '\0')) {
      return uVar29;
    }
    /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(uVar29,auVar39._8_8_,auVar39._8_8_,0,0);
    puVar10 = *(undefined1 **)((long)pppppuVar14 + -0x10);
    puVar35 = *(undefined **)((long)pppppuVar14 + -8);
    uVar18 = *(undefined8 *)((long)pppppuVar14 + -0x20);
    lVar22 = *(long *)((long)pppppuVar14 + -0x18);
    uVar29 = unaff_x21;
  }
  else {
    puVar35 = (undefined *)0x1655790;
    lVar22 = param_1;
    unaff_x21 = param_3;
code_r0x016ce2a4:
    puVar9 = puVar13 + -0x30;
    pppppuVar14 = (undefined8 *****)(puVar13 + -0x30);
    *(ulong *)(puVar13 + -0x30) = unaff_x22;
    *(ulong *)(puVar13 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar13 + -0x20) = param_2;
    *(long *)(puVar13 + -0x18) = lVar22;
    *(undefined8 ******)(puVar13 + -0x10) = pppppuVar33;
    *(undefined **)(puVar13 + -8) = puVar35;
    puVar10 = puVar13 + -0x10;
    uVar18 = 2;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100,2,0);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(param_1);
    if (*(long *)(param_1 + 0x28) != 0) {
      if (*(int *)(*(long *)(param_1 + 0x28) + 0x18) < 2) {
        uVar18 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,2);
        *(undefined8 *)(param_1 + 0x28) = uVar18;
      }
      *(undefined4 *)(param_1 + 0x30) = 2;
      puVar35 = &UNK_016ce320;
      goto code_r0x016cda04;
    }
    puVar35 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar40 = func_0x00f78af4();
    lVar22 = param_1;
    uVar29 = 0x3eb5000;
  }
  param_1 = auVar40._0_8_;
  puVar9 = (undefined1 *)((long)pppppuVar14 + -0x20);
  *(undefined8 *)((long)pppppuVar14 + -0x20) = uVar18;
  *(long *)((long)pppppuVar14 + -0x18) = lVar22;
  *(undefined1 **)((long)pppppuVar14 + -0x10) = puVar10;
  *(undefined **)((long)pppppuVar14 + -8) = puVar35;
  puVar10 = (undefined1 *)((long)pppppuVar14 + -0x10);
  if (*(int *)(param_1 + 0x30) <= auVar40._8_4_) {
    func_0x00f78a24(0x3d22738);
    uVar20 = func_0x00f78aec();
    uVar21 = func_0x00f78a24(0x3d6ceb8);
    unaff_x21 = 0;
    /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar20,uVar21);
    uVar21 = func_0x00f78a24(0x3d56a58);
    func_0x00f78ac0(uVar20,uVar21);
    func_0x00f78af4();
    uVar21 = func_0x00f78b24();
    auVar39 = func_0x00f78ac0(uVar21,0);
    uVar25 = auVar39._0_8_;
    *(ulong *)((long)pppppuVar14 + -0x50) = unaff_x22;
    *(ulong *)((long)pppppuVar14 + -0x48) = uVar29;
    *(undefined8 *)((long)pppppuVar14 + -0x40) = uVar18;
    *(undefined8 *)((long)pppppuVar14 + -0x38) = uVar20;
    *(undefined1 **)((long)pppppuVar14 + -0x30) = puVar10;
    *(undefined **)((long)pppppuVar14 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    ppppppuVar32 = (undefined8 ******)((long)pppppuVar14 + -0x30);
    if (((int)unaff_x21 == param_4) && (*(char *)(uVar25 + 0x48) == '\0')) {
      return uVar25;
    }
    auVar38._8_8_ = 1;
    auVar38._0_8_ = uVar25;
    uVar25 = 0;
    puVar35 = &UNK_016ce46c;
    puVar10 = (undefined1 *)((long)pppppuVar14 + -0x50);
code_r0x016cdaac:
    do {
      uVar27 = auVar39._0_8_;
      uVar16 = auVar38._0_8_;
      puVar8 = puVar10 + -0x30;
      *(ulong *)(puVar10 + -0x30) = unaff_x22;
      *(ulong *)(puVar10 + -0x28) = unaff_x21;
      *(undefined1 (*) [16])(puVar10 + -0x20) = auVar39;
      *(undefined8 *******)(puVar10 + -0x10) = ppppppuVar32;
      *(undefined **)(puVar10 + -8) = puVar35;
      iVar24 = auVar38._8_4_;
      if (*(int *)(uVar16 + 0x20) < iVar24) {
        *(int *)(uVar16 + 0x20) = iVar24;
      }
      uVar29 = unaff_x22;
      if ((*(long *)(uVar16 + 0x18) != 0) &&
         (lVar22 = *(long *)(*(long *)(uVar16 + 0x18) + 0x10), lVar22 != 0)) {
        uVar2 = *(uint *)(lVar22 + 0x18);
        iVar3 = *(int *)(uVar16 + 0x10);
        uVar1 = iVar3 - (uVar2 + (int)uVar25) & iVar24 - 1U;
        uVar27 = CONCAT44(0,uVar1);
        uVar4 = (int)uVar25 + iVar24 + uVar1;
        uVar29 = (ulong)uVar4;
        uVar17 = uVar16;
        while (unaff_x21 = (ulong)uVar2, iVar3 < (int)uVar4) {
          uVar17 = /*FlatBuffers.FlatBufferBuilder$$GrowBuffer*/ func_0x016cda78(uVar16);
          if ((*(long *)(uVar16 + 0x18) == 0) ||
             (lVar22 = *(long *)(*(long *)(uVar16 + 0x18) + 0x10), lVar22 == 0))
          goto code_r0x016cdb68;
          iVar3 = *(int *)(uVar16 + 0x10) - uVar2;
          uVar2 = *(uint *)(lVar22 + 0x18);
          iVar3 = iVar3 + uVar2;
          *(int *)(uVar16 + 0x10) = iVar3;
        }
        if ((int)uVar1 < 1) {
          return uVar17;
        }
        uVar18 = *(undefined8 *)*(undefined1 (*) [16])(puVar10 + -0x20);
        uVar20 = *(undefined8 *)(puVar10 + -0x18);
        auVar39 = *(undefined1 (*) [16])(puVar10 + -0x20);
        unaff_x22 = *(ulong *)(puVar10 + -0x30);
        unaff_x21 = *(ulong *)(puVar10 + -0x28);
        *(undefined8 *)(puVar10 + -0x10) = *(undefined8 *)(puVar10 + -0x10);
        *(undefined8 *)(puVar10 + -8) = *(undefined8 *)(puVar10 + -8);
        lVar22 = *(long *)(uVar16 + 0x18);
        auVar7._8_8_ = lVar22;
        auVar7._0_8_ = uVar27;
        uVar1 = *(int *)(uVar16 + 0x10) - uVar1;
        uVar29 = (ulong)uVar1;
        auVar37._8_4_ = uVar1;
        auVar37._0_8_ = lVar22;
        auVar37._12_4_ = 0;
        *(uint *)(uVar16 + 0x10) = uVar1;
        if (lVar22 != 0) {
          *(ulong *)(puVar10 + -0x30) = unaff_x22;
          *(ulong *)(puVar10 + -0x28) = unaff_x21;
          *(undefined8 *)(puVar10 + -0x20) = uVar18;
          *(undefined8 *)(puVar10 + -0x18) = uVar20;
          *(undefined8 *)(puVar10 + -0x10) = *(undefined8 *)(puVar10 + -0x10);
          *(undefined8 *)(puVar10 + -8) = *(undefined8 *)(puVar10 + -8);
          ppppppuVar30 = (undefined8 ******)(puVar10 + -0x10);
          puVar35 = &UNK_016cc908;
          uVar25 = 0;
          goto code_r0x016cc7a4;
        }
        lVar22 = func_0x00f78af4();
        ppppppuVar32 = (undefined8 ******)(puVar10 + -0x20);
        *(undefined1 **)(puVar10 + -0x20) = puVar10 + -0x10;
        *(undefined **)(puVar10 + -0x18) = &FlatBuffers_FlatBufferBuilder__GrowBuffer;
        if ((*(long *)(lVar22 + 0x18) != 0) &&
           (plVar15 = *(long **)(*(long *)(lVar22 + 0x18) + 0x10), plVar15 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016cdaa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar29 = (**(code **)(*plVar15 + 0x178))
                             (plVar15,(int)plVar15[3] << 1,*(undefined8 *)(*plVar15 + 0x180));
          return uVar29;
        }
        puVar35 = &FlatBuffers_FlatBufferBuilder__Prep;
        auVar38 = func_0x00f78af4();
        puVar10 = puVar10 + -0x20;
        goto code_r0x016cdaac;
      }
code_r0x016cdb68:
      auVar7._8_8_ = uVar27;
      auVar7._0_8_ = unaff_x21;
      auVar39 = func_0x00f78af4();
      uVar25 = auVar39._8_8_;
      lVar28 = auVar39._0_8_;
      *(undefined1 **)(puVar10 + -0x40) = puVar10 + -0x10;
      *(undefined **)(puVar10 + -0x38) = &FlatBuffers_FlatBufferBuilder__PutBool;
      lVar22 = *(long *)(lVar28 + 0x18);
      iVar24 = *(int *)(lVar28 + 0x10) + -1;
      *(int *)(lVar28 + 0x10) = iVar24;
      if (lVar22 != 0) {
        puVar11 = puVar10 + -0x30;
        uVar18 = *(undefined8 *)(puVar10 + -0x40);
        uVar20 = *(undefined8 *)(puVar10 + -0x38);
FlatBuffers_ByteBuffer__PutByte:
        auVar7._8_4_ = iVar24;
        auVar7._0_8_ = lVar22;
        auVar7._12_4_ = 0;
        auVar37._8_4_ = iVar24;
        auVar37._0_8_ = lVar22;
        auVar37._12_4_ = 0;
        puVar8 = puVar11 + -0x30;
        *(ulong *)(puVar11 + -0x30) = uVar29;
        *(ulong *)(puVar11 + -0x28) = unaff_x21;
        *(ulong *)(puVar11 + -0x20) = uVar27;
        *(ulong *)(puVar11 + -0x18) = uVar16;
        *(undefined8 *)(puVar11 + -0x10) = uVar18;
        *(undefined8 *)(puVar11 + -8) = uVar20;
        ppppppuVar30 = (undefined8 ******)(puVar11 + -0x10);
        uVar27 = 1;
        puVar35 = &UNK_016cc89c;
        goto code_r0x016cc7a4;
      }
      auVar39 = func_0x00f78af4();
      uVar17 = auVar39._8_8_;
      lVar22 = auVar39._0_8_;
      *(undefined1 **)(puVar10 + -0x50) = puVar10 + -0x40;
      *(undefined **)(puVar10 + -0x48) = &FlatBuffers_FlatBufferBuilder__PutSbyte;
      iVar24 = *(int *)(lVar22 + 0x10) + -1;
      auVar37._8_4_ = iVar24;
      auVar37._0_8_ = *(long *)(lVar22 + 0x18);
      auVar37._12_4_ = 0;
      *(int *)(lVar22 + 0x10) = iVar24;
      if (*(long *)(lVar22 + 0x18) != 0) {
        puVar12 = puVar10 + -0x40;
        puVar31 = *(undefined1 **)(puVar10 + -0x50);
        puVar35 = *(undefined **)(puVar10 + -0x48);
        uVar25 = uVar16;
        goto code_r0x016cc810;
      }
      auVar39 = func_0x00f78af4();
      uVar25 = auVar39._8_8_;
      lVar28 = auVar39._0_8_;
      *(undefined1 **)(puVar10 + -0x60) = puVar10 + -0x50;
      *(undefined **)(puVar10 + -0x58) = &FlatBuffers_FlatBufferBuilder__PutByte;
      lVar22 = *(long *)(lVar28 + 0x18);
      iVar24 = *(int *)(lVar28 + 0x10) + -1;
      *(int *)(lVar28 + 0x10) = iVar24;
      if (lVar22 != 0) {
        puVar11 = puVar10 + -0x50;
        uVar18 = *(undefined8 *)(puVar10 + -0x60);
        uVar20 = *(undefined8 *)(puVar10 + -0x58);
        goto FlatBuffers_ByteBuffer__PutByte;
      }
      auVar39 = func_0x00f78af4();
      uVar25 = auVar39._8_8_;
      lVar22 = auVar39._0_8_;
      puVar8 = puVar10 + -0x90;
      *(ulong *)(puVar10 + -0x90) = uVar29;
      *(ulong *)(puVar10 + -0x88) = unaff_x21;
      *(ulong *)(puVar10 + -0x80) = uVar27;
      *(ulong *)(puVar10 + -0x78) = uVar16;
      *(undefined1 **)(puVar10 + -0x70) = puVar10 + -0x60;
      *(undefined **)(puVar10 + -0x68) = &FlatBuffers_FlatBufferBuilder__PutShort;
      ppppppuVar30 = (undefined8 ******)(puVar10 + -0x70);
      lVar28 = *(long *)(lVar22 + 0x18);
      uVar4 = *(int *)(lVar22 + 0x10) - 2;
      auVar7._8_8_ = lVar28;
      auVar7._0_8_ = CONCAT44(0,uVar4);
      auVar37._8_4_ = uVar4;
      auVar37._0_8_ = lVar28;
      auVar37._12_4_ = 0;
      *(uint *)(lVar22 + 0x10) = uVar4;
      if (lVar28 != 0) {
        uVar27 = 2;
        puVar35 = &UNK_016cdc34;
        goto code_r0x016cc7a4;
      }
      auVar39 = func_0x00f78af4();
      uVar25 = auVar39._8_8_;
      lVar22 = auVar39._0_8_;
      puVar8 = puVar10 + -0xc0;
      *(ulong *)(puVar10 + -0xc0) = uVar29;
      *(ulong *)(puVar10 + -0xb8) = CONCAT44(0,uVar4);
      *(undefined8 *)(puVar10 + -0xb0) = 0;
      *(ulong *)(puVar10 + -0xa8) = uVar16;
      *(undefined8 *******)(puVar10 + -0xa0) = ppppppuVar30;
      *(undefined **)(puVar10 + -0x98) = &FlatBuffers_FlatBufferBuilder__PutUshort;
      ppppppuVar30 = (undefined8 ******)(puVar10 + -0xa0);
      lVar28 = *(long *)(lVar22 + 0x18);
      uVar4 = *(int *)(lVar22 + 0x10) - 2;
      auVar7._8_8_ = lVar28;
      auVar7._0_8_ = CONCAT44(0,uVar4);
      auVar37._8_4_ = uVar4;
      auVar37._0_8_ = lVar28;
      auVar37._12_4_ = 0;
      *(uint *)(lVar22 + 0x10) = uVar4;
      if (lVar28 != 0) {
        uVar27 = 2;
        puVar35 = &UNK_016cdc90;
        goto code_r0x016cc7a4;
      }
      auVar39 = func_0x00f78af4();
      uVar25 = auVar39._8_8_;
      lVar22 = auVar39._0_8_;
      puVar8 = puVar10 + -0xf0;
      *(ulong *)(puVar10 + -0xf0) = uVar29;
      *(ulong *)(puVar10 + -0xe8) = CONCAT44(0,uVar4);
      *(undefined8 *)(puVar10 + -0xe0) = 0;
      *(ulong *)(puVar10 + -0xd8) = uVar16;
      *(undefined8 *******)(puVar10 + -0xd0) = ppppppuVar30;
      *(undefined **)(puVar10 + -200) = &FlatBuffers_FlatBufferBuilder__PutInt;
      ppppppuVar30 = (undefined8 ******)(puVar10 + -0xd0);
      lVar28 = *(long *)(lVar22 + 0x18);
      uVar4 = *(int *)(lVar22 + 0x10) - 4;
      auVar7._8_8_ = lVar28;
      auVar7._0_8_ = CONCAT44(0,uVar4);
      auVar37._8_4_ = uVar4;
      auVar37._0_8_ = lVar28;
      auVar37._12_4_ = 0;
      *(uint *)(lVar22 + 0x10) = uVar4;
      if (lVar28 != 0) {
        uVar27 = 4;
        puVar35 = &UNK_016cdcec;
        goto code_r0x016cc7a4;
      }
      auVar39 = func_0x00f78af4();
      uVar25 = auVar39._8_8_;
      lVar22 = auVar39._0_8_;
      puVar8 = puVar10 + -0x120;
      *(ulong *)(puVar10 + -0x120) = uVar29;
      *(ulong *)(puVar10 + -0x118) = CONCAT44(0,uVar4);
      *(undefined8 *)(puVar10 + -0x110) = 0;
      *(ulong *)(puVar10 + -0x108) = uVar16;
      *(undefined8 *******)(puVar10 + -0x100) = ppppppuVar30;
      *(undefined **)(puVar10 + -0xf8) = &FlatBuffers_FlatBufferBuilder__PutUint;
      ppppppuVar30 = (undefined8 ******)(puVar10 + -0x100);
      lVar28 = *(long *)(lVar22 + 0x18);
      uVar4 = *(int *)(lVar22 + 0x10) - 4;
      auVar7._8_8_ = lVar28;
      auVar7._0_8_ = CONCAT44(0,uVar4);
      auVar37._8_4_ = uVar4;
      auVar37._0_8_ = lVar28;
      auVar37._12_4_ = 0;
      *(uint *)(lVar22 + 0x10) = uVar4;
      if (lVar28 != 0) {
        uVar27 = 4;
        puVar35 = &UNK_016cdd48;
        goto code_r0x016cc7a4;
      }
      auVar39 = func_0x00f78af4();
      uVar25 = auVar39._8_8_;
      lVar22 = auVar39._0_8_;
      puVar8 = puVar10 + -0x150;
      *(ulong *)(puVar10 + -0x150) = uVar29;
      *(ulong *)(puVar10 + -0x148) = CONCAT44(0,uVar4);
      *(undefined8 *)(puVar10 + -0x140) = 0;
      *(ulong *)(puVar10 + -0x138) = uVar16;
      *(undefined8 *******)(puVar10 + -0x130) = ppppppuVar30;
      *(undefined **)(puVar10 + -0x128) = &FlatBuffers_FlatBufferBuilder__PutLong;
      ppppppuVar30 = (undefined8 ******)(puVar10 + -0x130);
      lVar28 = *(long *)(lVar22 + 0x18);
      uVar4 = *(int *)(lVar22 + 0x10) - 8;
      auVar7._8_8_ = lVar28;
      auVar7._0_8_ = CONCAT44(0,uVar4);
      auVar37._8_4_ = uVar4;
      auVar37._0_8_ = lVar28;
      auVar37._12_4_ = 0;
      *(uint *)(lVar22 + 0x10) = uVar4;
      if (lVar28 != 0) {
        uVar27 = 8;
        puVar35 = &UNK_016cdda4;
        goto code_r0x016cc7a4;
      }
      auVar39 = func_0x00f78af4();
      uVar25 = auVar39._8_8_;
      lVar22 = auVar39._0_8_;
      puVar8 = puVar10 + -0x180;
      *(ulong *)(puVar10 + -0x180) = uVar29;
      *(ulong *)(puVar10 + -0x178) = CONCAT44(0,uVar4);
      *(undefined8 *)(puVar10 + -0x170) = 0;
      *(ulong *)(puVar10 + -0x168) = uVar16;
      *(undefined8 *******)(puVar10 + -0x160) = ppppppuVar30;
      *(undefined **)(puVar10 + -0x158) = &FlatBuffers_FlatBufferBuilder__PutUlong;
      ppppppuVar30 = (undefined8 ******)(puVar10 + -0x160);
      lVar28 = *(long *)(lVar22 + 0x18);
      uVar4 = *(int *)(lVar22 + 0x10) - 8;
      unaff_x21 = CONCAT44(0,uVar4);
      auVar7._8_8_ = lVar28;
      auVar7._0_8_ = unaff_x21;
      auVar37._8_4_ = uVar4;
      auVar37._0_8_ = lVar28;
      auVar37._12_4_ = 0;
      *(uint *)(lVar22 + 0x10) = uVar4;
      if (lVar28 != 0) {
        uVar27 = 8;
        puVar35 = &UNK_016cde00;
        goto code_r0x016cc7a4;
      }
      lVar22 = func_0x00f78af4();
      *(undefined8 *******)(puVar10 + -400) = ppppppuVar30;
      *(undefined **)(puVar10 + -0x188) = &FlatBuffers_FlatBufferBuilder__PutFloat;
      lVar28 = *(long *)(lVar22 + 0x18);
      auVar7._8_8_ = lVar28;
      uVar4 = *(int *)(lVar22 + 0x10) - 4;
      uVar25 = (ulong)uVar4;
      auVar37._8_4_ = uVar4;
      auVar37._0_8_ = lVar28;
      auVar37._12_4_ = 0;
      *(uint *)(lVar22 + 0x10) = uVar4;
      if (lVar28 != 0) {
        puVar8 = puVar10 + -0x1b0;
        *(undefined8 *)(puVar10 + -0x1b0) = unaff_d9;
        *(undefined8 *)(puVar10 + -0x1a8) = unaff_d8;
        *(undefined8 *)(puVar10 + -0x1a0) = 0;
        *(ulong *)(puVar10 + -0x198) = uVar16;
        *(undefined8 *)(puVar10 + -400) = *(undefined8 *)(puVar10 + -400);
        *(undefined8 *)(puVar10 + -0x188) = *(undefined8 *)(puVar10 + -0x188);
        ppppppuVar30 = (undefined8 ******)(puVar10 + -400);
        uVar27 = 4;
        puVar35 = &UNK_016ccba4;
        goto code_r0x016cc7a4;
      }
      lVar22 = func_0x00f78af4();
      *(undefined1 **)(puVar10 + -0x1a0) = puVar10 + -400;
      *(undefined **)(puVar10 + -0x198) = &FlatBuffers_FlatBufferBuilder__PutDouble;
      lVar28 = *(long *)(lVar22 + 0x18);
      auVar7._8_8_ = lVar28;
      uVar4 = *(int *)(lVar22 + 0x10) - 8;
      uVar25 = (ulong)uVar4;
      auVar37._8_4_ = uVar4;
      auVar37._0_8_ = lVar28;
      auVar37._12_4_ = 0;
      *(uint *)(lVar22 + 0x10) = uVar4;
      if (lVar28 != 0) goto code_r0x016cde70;
      auVar39 = func_0x00f78af4();
      *(undefined8 *)(puVar10 + -0x1c0) = 0;
      *(ulong *)(puVar10 + -0x1b8) = uVar16;
      *(undefined1 **)(puVar10 + -0x1b0) = puVar10 + -0x1a0;
      *(undefined **)(puVar10 + -0x1a8) = &FlatBuffers_FlatBufferBuilder__AddBool;
      ppppppuVar32 = (undefined8 ******)(puVar10 + -0x1b0);
      auVar38._8_8_ = 1;
      auVar38._0_8_ = auVar39._0_8_;
      uVar25 = 0;
      puVar35 = &UNK_016cde9c;
      puVar10 = puVar10 + -0x1c0;
      unaff_x22 = uVar29;
    } while( true );
  }
  puVar35 = &UNK_016ce3a4;
code_r0x016cda04:
  *(undefined1 **)(puVar9 + -0x10) = puVar10;
  *(undefined **)(puVar9 + -8) = puVar35;
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar22 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar22 != 0)) {
    return (ulong)(uint)(*(int *)(lVar22 + 0x18) - *(int *)(param_1 + 0x10));
  }
  lVar22 = func_0x00f78af4();
  return (ulong)*(byte *)(lVar22 + 0x48);
code_r0x016cde70:
  puVar8 = puVar10 + -0x1c0;
  *(undefined8 *)(puVar10 + -0x1c0) = unaff_d9;
  *(undefined8 *)(puVar10 + -0x1b8) = unaff_d8;
  *(undefined8 *)(puVar10 + -0x1b0) = 0;
  *(ulong *)(puVar10 + -0x1a8) = uVar16;
  *(undefined8 *)(puVar10 + -0x1a0) = *(undefined8 *)(puVar10 + -0x1a0);
  *(undefined8 *)(puVar10 + -0x198) = *(undefined8 *)(puVar10 + -0x198);
  ppppppuVar30 = (undefined8 ******)(puVar10 + -0x1a0);
  uVar27 = 8;
  puVar35 = &UNK_016ccc34;
code_r0x016cc7a4:
  do {
    puVar12 = puVar8 + -0x20;
    *(long *)(puVar8 + -0x20) = auVar7._8_8_;
    *(ulong *)(puVar8 + -0x18) = uVar25;
    *(undefined8 *******)(puVar8 + -0x10) = ppppppuVar30;
    *(undefined **)(puVar8 + -8) = puVar35;
    puVar31 = puVar8 + -0x10;
    if (auVar37._8_4_ < 0) {
code_r0x016cc7d8:
      func_0x00f78a24(0x3d1fcf8);
      uVar25 = func_0x00f78aec();
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a4d0(uVar25,0);
      uVar18 = func_0x00f78a24(0x3d52ce8);
      func_0x00f78ac0(uVar25,uVar18);
      uVar17 = uVar27;
    }
    else {
      lVar22 = *(long *)(auVar37._0_8_ + 0x10);
      uVar17 = uVar27;
      if (lVar22 != 0) {
        if (auVar37._8_4_ <= *(int *)(lVar22 + 0x18) - (int)uVar27) {
          return auVar37._0_8_;
        }
        goto code_r0x016cc7d8;
      }
    }
    puVar35 = &FlatBuffers_ByteBuffer__PutSbyte;
    auVar37 = func_0x00f78af4();
code_r0x016cc810:
    puVar8 = puVar12 + -0x30;
    *(ulong *)(puVar12 + -0x30) = uVar29;
    *(undefined1 (*) [16])(puVar12 + -0x28) = auVar7;
    *(ulong *)(puVar12 + -0x18) = uVar25;
    *(undefined1 **)(puVar12 + -0x10) = puVar31;
    *(undefined **)(puVar12 + -8) = puVar35;
    ppppppuVar30 = (undefined8 ******)(puVar12 + -0x10);
    uVar27 = 1;
    puVar35 = &UNK_016cc834;
    uVar25 = uVar17;
    auVar7 = auVar37;
  } while( true );
}



// ============================================================
// RVA: 0x16557c0 | Core.Networking.HostEventResults.AddStandings
// ============================================================

/* WARNING: Possible PIC construction at 0x016ce3a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cea74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cea88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ceb04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ceb50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ceb74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cebe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cec2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ced5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cee1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cef0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cef44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cef60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cecfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce31c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016558a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01655968: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce184: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc904: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdc30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdc8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdce8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdd44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdda0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cddfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccc30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cccb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccd14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccdc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cde98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016559f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01655ab4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016559f4) */
/* WARNING: Removing unreachable block (ram,0x01655a00) */
/* WARNING: Removing unreachable block (ram,0x01655a08) */
/* WARNING: Removing unreachable block (ram,0x01655a24) */
/* WARNING: Removing unreachable block (ram,0x01655a30) */
/* WARNING: Removing unreachable block (ram,0x01655a3c) */
/* WARNING: Removing unreachable block (ram,0x016cde9c) */
/* WARNING: Removing unreachable block (ram,0x016ccdc4) */
/* WARNING: Removing unreachable block (ram,0x016ccd18) */
/* WARNING: Removing unreachable block (ram,0x016ccd20) */
/* WARNING: Removing unreachable block (ram,0x016ccd48) */
/* WARNING: Removing unreachable block (ram,0x016ccd28) */
/* WARNING: Removing unreachable block (ram,0x016ccd4c) */
/* WARNING: Removing unreachable block (ram,0x016ccd84) */
/* WARNING: Removing unreachable block (ram,0x016ccdb0) */
/* WARNING: Removing unreachable block (ram,0x016ccd88) */
/* WARNING: Removing unreachable block (ram,0x016ccd34) */
/* WARNING: Removing unreachable block (ram,0x016cccbc) */
/* WARNING: Removing unreachable block (ram,0x016cccc4) */
/* WARNING: Removing unreachable block (ram,0x016cccec) */
/* WARNING: Removing unreachable block (ram,0x016ccccc) */
/* WARNING: Removing unreachable block (ram,0x016cccf0) */
/* WARNING: Removing unreachable block (ram,0x016cccd8) */
/* WARNING: Removing unreachable block (ram,0x016ccc34) */
/* WARNING: Removing unreachable block (ram,0x016ccc3c) */
/* WARNING: Removing unreachable block (ram,0x016ccc44) */
/* WARNING: Removing unreachable block (ram,0x016ccc90) */
/* WARNING: Removing unreachable block (ram,0x016ccc68) */
/* WARNING: Removing unreachable block (ram,0x016ccc94) */
/* WARNING: Removing unreachable block (ram,0x016ccc70) */
/* WARNING: Removing unreachable block (ram,0x016ccba4) */
/* WARNING: Removing unreachable block (ram,0x016ccbac) */
/* WARNING: Removing unreachable block (ram,0x016ccbb4) */
/* WARNING: Removing unreachable block (ram,0x016ccc00) */
/* WARNING: Removing unreachable block (ram,0x016ccbd8) */
/* WARNING: Removing unreachable block (ram,0x016ccc04) */
/* WARNING: Removing unreachable block (ram,0x016ccbe0) */
/* WARNING: Removing unreachable block (ram,0x016cde00) */
/* WARNING: Removing unreachable block (ram,0x016cdda4) */
/* WARNING: Removing unreachable block (ram,0x016cdd48) */
/* WARNING: Removing unreachable block (ram,0x016cdcec) */
/* WARNING: Removing unreachable block (ram,0x016cdc90) */
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
/* WARNING: Removing unreachable block (ram,0x016cdc34) */
/* WARNING: Removing unreachable block (ram,0x016cc834) */
/* WARNING: Removing unreachable block (ram,0x016cc83c) */
/* WARNING: Removing unreachable block (ram,0x016cc868) */
/* WARNING: Removing unreachable block (ram,0x016cc844) */
/* WARNING: Removing unreachable block (ram,0x016cc86c) */
/* WARNING: Removing unreachable block (ram,0x016cc850) */
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
/* WARNING: Removing unreachable block (ram,0x016ce188) */
/* WARNING: Removing unreachable block (ram,0x0165596c) */
/* WARNING: Removing unreachable block (ram,0x016ce224) */
/* WARNING: Removing unreachable block (ram,0x016558a8) */
/* WARNING: Removing unreachable block (ram,0x016558b4) */
/* WARNING: Removing unreachable block (ram,0x016558bc) */
/* WARNING: Removing unreachable block (ram,0x016558d8) */
/* WARNING: Removing unreachable block (ram,0x016558e4) */
/* WARNING: Removing unreachable block (ram,0x016558f0) */
/* WARNING: Removing unreachable block (ram,0x016ce320) */
/* WARNING: Removing unreachable block (ram,0x016ced00) */
/* WARNING: Removing unreachable block (ram,0x016ced04) */
/* WARNING: Removing unreachable block (ram,0x016ced10) */
/* WARNING: Removing unreachable block (ram,0x016ced20) */
/* WARNING: Removing unreachable block (ram,0x016ced28) */
/* WARNING: Removing unreachable block (ram,0x016cef64) */
/* WARNING: Removing unreachable block (ram,0x016cef48) */
/* WARNING: Removing unreachable block (ram,0x016cef70) */
/* WARNING: Removing unreachable block (ram,0x016cef78) */
/* WARNING: Removing unreachable block (ram,0x016cef10) */
/* WARNING: Removing unreachable block (ram,0x016cef24) */
/* WARNING: Removing unreachable block (ram,0x016cef2c) */
/* WARNING: Removing unreachable block (ram,0x016cee20) */
/* WARNING: Removing unreachable block (ram,0x016cee2c) */
/* WARNING: Removing unreachable block (ram,0x016cee44) */
/* WARNING: Removing unreachable block (ram,0x016ced60) */
/* WARNING: Removing unreachable block (ram,0x016cec30) */
/* WARNING: Removing unreachable block (ram,0x016cec38) */
/* WARNING: Removing unreachable block (ram,0x016cec44) */
/* WARNING: Removing unreachable block (ram,0x016cebe8) */
/* WARNING: Removing unreachable block (ram,0x016cec48) */
/* WARNING: Removing unreachable block (ram,0x016cebf0) */
/* WARNING: Removing unreachable block (ram,0x016cec64) */
/* WARNING: Removing unreachable block (ram,0x016cec6c) */
/* WARNING: Removing unreachable block (ram,0x016cec78) */
/* WARNING: Removing unreachable block (ram,0x016ceca8) */
/* WARNING: Removing unreachable block (ram,0x016cec84) */
/* WARNING: Removing unreachable block (ram,0x016cec8c) */
/* WARNING: Removing unreachable block (ram,0x016cec94) */
/* WARNING: Removing unreachable block (ram,0x016ced3c) */
/* WARNING: Removing unreachable block (ram,0x016cc4e0) */
/* WARNING: Removing unreachable block (ram,0x016cc518) */
/* WARNING: Removing unreachable block (ram,0x016cc52c) */
/* WARNING: Removing unreachable block (ram,0x016cc538) */
/* WARNING: Removing unreachable block (ram,0x016cc540) */
/* WARNING: Removing unreachable block (ram,0x016cc548) */
/* WARNING: Removing unreachable block (ram,0x016cc5b8) */
/* WARNING: Removing unreachable block (ram,0x016cc5c0) */
/* WARNING: Removing unreachable block (ram,0x016cc5d4) */
/* WARNING: Removing unreachable block (ram,0x016cc5dc) */
/* WARNING: Removing unreachable block (ram,0x016cc5e4) */
/* WARNING: Removing unreachable block (ram,0x016cc5f0) */
/* WARNING: Removing unreachable block (ram,0x016cc554) */
/* WARNING: Removing unreachable block (ram,0x016cc55c) */
/* WARNING: Removing unreachable block (ram,0x016cc574) */
/* WARNING: Removing unreachable block (ram,0x016cc57c) */
/* WARNING: Removing unreachable block (ram,0x016cc624) */
/* WARNING: Removing unreachable block (ram,0x016cc584) */
/* WARNING: Removing unreachable block (ram,0x016cc628) */
/* WARNING: Removing unreachable block (ram,0x016cc590) */
/* WARNING: Removing unreachable block (ram,0x016cc5b4) */
/* WARNING: Removing unreachable block (ram,0x016cc610) */
/* WARNING: Removing unreachable block (ram,0x016cebfc) */
/* WARNING: Removing unreachable block (ram,0x016cec00) */
/* WARNING: Removing unreachable block (ram,0x016cec08) */
/* WARNING: Removing unreachable block (ram,0x016cec20) */
/* WARNING: Removing unreachable block (ram,0x016ceb78) */
/* WARNING: Removing unreachable block (ram,0x016cec58) */
/* WARNING: Removing unreachable block (ram,0x016cecac) */
/* WARNING: Removing unreachable block (ram,0x016cecb8) */
/* WARNING: Removing unreachable block (ram,0x016cecd8) */
/* WARNING: Removing unreachable block (ram,0x016cecf0) */
/* WARNING: Removing unreachable block (ram,0x016cec60) */
/* WARNING: Removing unreachable block (ram,0x016ceb84) */
/* WARNING: Removing unreachable block (ram,0x016ceb88) */
/* WARNING: Removing unreachable block (ram,0x016ceb90) */
/* WARNING: Removing unreachable block (ram,0x016ceb98) */
/* WARNING: Removing unreachable block (ram,0x016ceba0) */
/* WARNING: Removing unreachable block (ram,0x016cebac) */
/* WARNING: Removing unreachable block (ram,0x016cebd8) */
/* WARNING: Removing unreachable block (ram,0x016ceb54) */
/* WARNING: Removing unreachable block (ram,0x016ceb08) */
/* WARNING: Removing unreachable block (ram,0x016ceb10) */
/* WARNING: Removing unreachable block (ram,0x016ceb1c) */
/* WARNING: Removing unreachable block (ram,0x016ceb2c) */
/* WARNING: Removing unreachable block (ram,0x016cea8c) */
/* WARNING: Removing unreachable block (ram,0x016cea9c) */
/* WARNING: Removing unreachable block (ram,0x016ceaa0) */
/* WARNING: Removing unreachable block (ram,0x016ceb30) */
/* WARNING: Removing unreachable block (ram,0x016ceaa8) */
/* WARNING: Removing unreachable block (ram,0x016ced84) */
/* WARNING: Removing unreachable block (ram,0x016ceab0) */
/* WARNING: Removing unreachable block (ram,0x016ceabc) */
/* WARNING: Removing unreachable block (ram,0x016ceac8) */
/* WARNING: Removing unreachable block (ram,0x016ceacc) */
/* WARNING: Removing unreachable block (ram,0x016ced88) */
/* WARNING: Removing unreachable block (ram,0x016ceadc) */
/* WARNING: Removing unreachable block (ram,0x016ceae8) */
/* WARNING: Removing unreachable block (ram,0x016cea78) */
/* WARNING: Removing unreachable block (ram,0x016ce46c) */
/* WARNING: Removing unreachable block (ram,0x016ce3a4) */
/* WARNING: Removing unreachable block (ram,0x016ce3a8) */
/* WARNING: Removing unreachable block (ram,0x016ce3b4) */
/* WARNING: Removing unreachable block (ram,0x01655ab8) */
/* WARNING: Removing unreachable block (ram,0x016ce20c) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_HostEventResults__AddStandings
                (long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 ****ppppuVar21;
  undefined4 uVar22;
  int iVar23;
  ulong uVar24;
  undefined *puVar25;
  long lVar26;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  ulong uVar27;
  ulong unaff_x21;
  ulong uVar28;
  ulong unaff_x22;
  undefined1 *unaff_x29;
  undefined8 ******ppppppuVar29;
  undefined8 ******ppppppuVar30;
  undefined1 *puVar31;
  undefined *unaff_x30;
  undefined *puVar32;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [12];
  undefined8 *****pppppuStack_100;
  undefined *puStack_f8;
  undefined8 *****apppppuStack_d0 [4];
  undefined8 *****pppppuStack_90;
  undefined *puStack_88;
  undefined8 ****ppppuStack_30;
  undefined *puStack_28;
  undefined8 ***pppuStack_20;
  undefined *puStack_18;
  undefined8 *****pppppuVar20;
  
  auVar33._8_8_ = param_2;
  auVar33._0_8_ = param_1;
  if (param_1 == 0) {
    puVar10 = &stack0xfffffffffffffff0;
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x30 = &Core_Networking_HostEventResults__AddRoundScores;
    auVar33 = func_0x00f78af4();
    if (auVar33._0_8_ != 0) {
      uVar22 = 0;
      goto FlatBuffers_FlatBufferBuilder__AddOffset;
    }
    puStack_18 = &Core_Networking_HostEventResults__AddRoundScores;
    pppuStack_20 = (undefined8 ***)&stack0xfffffffffffffff0;
    lVar13 = func_0x00f78af4();
    puStack_28 = &Core_Networking_HostEventResults__EndHostEventResults;
    ppppuStack_30 = &pppuStack_20;
    if ((bRam0000000003eb57fb & 1) == 0) {
      ppppuStack_30 = &pppuStack_20;
      func_0x00f78a20(0x3d3f0e8);
      bRam0000000003eb57fb = 1;
    }
    if (lVar13 != 0) {
      ppppppuVar30 = (undefined8 ******)&ppppuStack_30;
      auVar37._8_8_ = lVar13;
      auVar37._0_8_ = 0x3eb5000;
      if ((bRam0000000003eb5cd8 & 1) == 0) {
        func_0x00f78a20(0x3d1f100,0);
        bRam0000000003eb5cd8 = 1;
      }
      if (*(int *)(lVar13 + 0x30) < 0) {
        func_0x00f78a24(0x3d22a38);
        puVar32 = (undefined *)func_0x00f78aec();
        uVar19 = func_0x00f78a24(0x3d6cea8);
        puVar25 = (undefined *)0x0;
        /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(puVar32,uVar19);
        uVar19 = func_0x00f78a24(0x3d56a30);
        auVar38 = func_0x00f78ac0(puVar32,uVar19);
        pppppuVar20 = auVar38._0_8_;
        pppppuStack_90 = (undefined8 ******)0x3eb5000;
        ppppppuVar30 = (undefined8 ******)&stack0xffffffffffffff80;
        ppppuVar21 = pppppuVar20[3];
        puStack_88 = puVar32;
        if ((ppppuVar21 != (undefined8 ****)0x0) && (ppppuVar21[2] != (undefined8 ***)0x0)) {
          uVar4 = *(int *)(ppppuVar21[2] + 3) - auVar38._8_4_;
          uVar24 = (ulong)uVar4;
          auVar35._8_4_ = uVar4;
          auVar35._0_8_ = ppppuVar21;
          auVar35._12_4_ = 0;
          puVar8 = &stack0xffffffffffffff10;
          apppppuStack_d0[3] = (undefined8 *****)&UNK_016cee20;
          ppppppuVar29 = apppppuStack_d0 + 2;
          auVar7._8_8_ = 4;
          auVar7._0_8_ = ppppuVar21;
          uVar28 = 0x3d201a0;
          apppppuStack_d0[0] = pppppuVar20;
          apppppuStack_d0[1] = (undefined8 *****)puVar25;
          apppppuStack_d0[2] = ppppppuVar30;
          if ((bRam0000000003eb5cd0 & 1) == 0) {
            func_0x00f78a20(0x3d201a0);
            bRam0000000003eb5cd0 = 1;
          }
          uVar27 = 4;
          puVar32 = &UNK_016cc68c;
          goto code_r0x016cc7a4;
        }
        func_0x00f78af4();
        uVar19 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&stack0xffffffffffffff5c,0);
        uVar17 = func_0x00f78a24(0x3d6ce88);
        uVar18 = func_0x00f78a24(0x3d66338);
        lVar13 = /*System.String$$Concat*/ func_0x029be39c(uVar17,uVar19,uVar18,0);
        func_0x00f78a24(0x3d22a38);
        uVar19 = func_0x00f78aec();
        uVar18 = 0;
        /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar19,lVar13);
        uVar17 = func_0x00f78a24(0x3d56a50);
        puVar32 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar33 = func_0x00f78ac0(uVar19,uVar17);
        puVar10 = &stack0xffffffffffffff50;
        while( true ) {
          uVar17 = auVar33._8_8_;
          lVar26 = auVar33._0_8_;
          auVar37._8_8_ = lVar26;
          auVar37._0_8_ = uVar17;
          auVar6._8_8_ = lVar26;
          auVar6._0_8_ = uVar17;
          *(undefined8 *)(puVar10 + -0x20) = uVar19;
          *(long *)(puVar10 + -0x18) = lVar13;
          *(undefined8 *******)(puVar10 + -0x10) = ppppppuVar30;
          *(undefined **)(puVar10 + -8) = puVar32;
          ppppppuVar30 = (undefined8 ******)(puVar10 + -0x10);
          uVar22 = *(undefined4 *)(lVar26 + 0x20);
          auVar36._8_4_ = uVar22;
          auVar36._0_8_ = lVar26;
          auVar36._12_4_ = 0;
          lVar13 = lVar26;
          if ((int)uVar18 == 0) {
            lVar13 = 0;
            uVar22 = 0;
          }
          auVar5._8_4_ = uVar22;
          auVar5._0_8_ = lVar13;
          auVar5._12_4_ = 0;
          if ((int)uVar18 == 0) {
            uVar24 = 4;
            puVar32 = &UNK_016cef64;
            puVar10 = puVar10 + -0x20;
            goto code_r0x016cdaac;
          }
          if (lVar13 != 0) break;
          puVar32 = &FlatBuffers_FlatBufferBuilder__Finish;
          auVar33 = func_0x00f78af4();
          uVar18 = 0;
          puVar10 = puVar10 + -0x20;
          lVar13 = lVar26;
          uVar19 = uVar17;
        }
        uVar24 = 8;
        puVar32 = &UNK_016cef10;
        puVar10 = puVar10 + -0x20;
        auVar36 = auVar5;
        auVar37 = auVar6;
      }
      else {
        auVar36._8_8_ = 4;
        auVar36._0_8_ = lVar13;
        uVar24 = 0;
        puVar32 = &UNK_016cea78;
        puVar10 = &stack0xffffffffffffff90;
      }
      goto code_r0x016cdaac;
    }
    lVar13 = func_0x00f78af4();
    if (lVar13 == 0) {
      auVar34 = func_0x00f78af4();
      lVar13 = auVar34._0_8_;
      if ((auVar34._8_8_ == 0) || (lVar13 == 0)) {
        auVar34 = func_0x00f78af4();
        lVar26 = auVar34._8_8_;
        lVar13 = auVar34._0_8_;
        puVar10 = &stack0xffffffffffffff50;
        puStack_88 = &Core_Networking_HostEventResults__CreateRoundScoresVectorBlock;
        ppppppuVar30 = &pppppuStack_90;
        unaff_x21 = 0x3eb5000;
        pppppuStack_90 = (undefined8 *****)&stack0xffffffffffffffa0;
        if ((bRam0000000003eb57f9 & 1) == 0) {
          func_0x00f78a20(0x3d569a0);
          bRam0000000003eb57f9 = 1;
        }
        if ((lVar26 == 0) || (lVar13 == 0)) {
          puVar32 = &Core_Networking_HostEventResults__StartRoundScoresVector;
          auVar38 = func_0x00f78af4();
          iVar23 = auVar38._8_4_;
          auVar34._8_8_ = lVar26;
          auVar34._0_8_ = auVar38._0_8_;
          if (auVar38._0_8_ == 0) {
            apppppuStack_d0[3] =
                 (undefined8 *****)&Core_Networking_HostEventResults__StartRoundScoresVector;
            apppppuStack_d0[2] = ppppppuVar30;
            auVar34 = func_0x00f78af4();
            lVar13 = auVar34._0_8_;
            apppppuStack_d0[1] =
                 (undefined8 *****)&Core_Networking_HostEventResults__CreateStandingsVector;
            if ((auVar34._8_8_ == 0) || (lVar13 == 0)) {
              apppppuStack_d0[0] = apppppuStack_d0 + 2;
              auVar34 = func_0x00f78af4();
              lVar26 = auVar34._8_8_;
              lVar13 = auVar34._0_8_;
              puVar10 = &stack0xfffffffffffffee0;
              puStack_f8 = &Core_Networking_HostEventResults__CreateStandingsVectorBlock;
              ppppppuVar30 = &pppppuStack_100;
              unaff_x21 = 0x3eb5000;
              pppppuStack_100 = apppppuStack_d0;
              if ((bRam0000000003eb57fa & 1) == 0) {
                func_0x00f78a20(0x3d56998);
                bRam0000000003eb57fa = 1;
              }
              if ((lVar26 == 0) || (lVar13 == 0)) {
                puVar32 = &Core_Networking_HostEventResults__StartStandingsVector;
                auVar38 = func_0x00f78af4();
                iVar23 = auVar38._8_4_;
                auVar34._8_8_ = lVar26;
                auVar34._0_8_ = auVar38._0_8_;
                if (auVar38._0_8_ == 0) {
                  lVar13 = func_0x00f78af4();
                  return *(ulong *)(lVar13 + 8);
                }
              }
              else {
                unaff_x21 = 0x3d56000;
                iVar23 = *(int *)(lVar26 + 0x18);
                puVar32 = &UNK_01655ab8;
                puVar10 = &stack0xfffffffffffffee0;
              }
            }
            else {
              iVar23 = *(int *)(auVar34._8_8_ + 0x18);
              puVar32 = &UNK_016559f4;
              puVar10 = &stack0xffffffffffffff10;
              ppppppuVar30 = apppppuStack_d0;
              apppppuStack_d0[0] = apppppuStack_d0 + 2;
            }
          }
        }
        else {
          unaff_x21 = 0x3d56000;
          iVar23 = *(int *)(lVar26 + 0x18);
          puVar32 = &UNK_0165596c;
          puVar10 = &stack0xffffffffffffff50;
        }
      }
      else {
        iVar23 = *(int *)(auVar34._8_8_ + 0x18);
        puVar32 = &UNK_016558a8;
        puVar10 = &stack0xffffffffffffff80;
        ppppppuVar30 = (undefined8 ******)&stack0xffffffffffffffa0;
      }
      uVar28 = auVar34._0_8_;
      *(ulong *)(puVar10 + -0x30) = unaff_x22;
      *(ulong *)(puVar10 + -0x28) = unaff_x21;
      *(long *)(puVar10 + -0x20) = auVar34._8_8_;
      *(long *)(puVar10 + -0x18) = lVar13;
      *(undefined8 *******)(puVar10 + -0x10) = ppppppuVar30;
      *(undefined **)(puVar10 + -8) = puVar32;
      ppppppuVar30 = (undefined8 ******)(puVar10 + -0x10);
      unaff_x21 = 4;
      /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4();
      *(int *)(uVar28 + 0x44) = iVar23;
      uVar24 = CONCAT44(0,iVar23 * 4);
      auVar37._8_8_ = 4;
      auVar37._0_8_ = uVar24;
      auVar36._8_8_ = 4;
      auVar36._0_8_ = uVar28;
      puVar32 = &UNK_016ce188;
      puVar10 = puVar10 + -0x30;
      unaff_x22 = uVar28;
      goto code_r0x016cdaac;
    }
    puVar9 = &stack0xffffffffffffff90;
    puVar10 = &stack0xffffffffffffff90;
    puVar31 = &stack0xffffffffffffffb0;
    uVar19 = 2;
    uVar28 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100,2,0);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar13);
    if (*(long *)(lVar13 + 0x28) != 0) {
      if (*(int *)(*(long *)(lVar13 + 0x28) + 0x18) < 2) {
        uVar19 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,2);
        *(undefined8 *)(lVar13 + 0x28) = uVar19;
      }
      *(undefined4 *)(lVar13 + 0x30) = 2;
      puVar32 = &UNK_016ce320;
      goto code_r0x016cda04;
    }
    puVar32 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar38 = func_0x00f78af4();
    lVar26 = lVar13;
  }
  else {
    uVar22 = 1;
    puVar10 = (undefined1 *)register0x00000008;
FlatBuffers_FlatBufferBuilder__AddOffset:
    uVar28 = auVar33._0_8_;
    auVar38._8_4_ = uVar22;
    auVar38._0_8_ = uVar28;
    param_4 = 0;
    *(undefined8 *)(puVar10 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar10 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar10 + -0x10) = unaff_x29;
    *(undefined **)(puVar10 + -8) = unaff_x30;
    if ((auVar33._8_4_ == 0) && (*(char *)(uVar28 + 0x48) == '\0')) {
      return uVar28;
    }
    /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(uVar28,auVar33._8_8_,auVar33._8_8_,0,0);
    puVar31 = *(undefined1 **)(puVar10 + -0x10);
    puVar32 = *(undefined **)(puVar10 + -8);
    uVar19 = *(undefined8 *)(puVar10 + -0x20);
    lVar26 = *(long *)(puVar10 + -0x18);
    uVar28 = unaff_x21;
  }
  lVar13 = auVar38._0_8_;
  puVar9 = puVar10 + -0x20;
  *(undefined8 *)(puVar10 + -0x20) = uVar19;
  *(long *)(puVar10 + -0x18) = lVar26;
  *(undefined1 **)(puVar10 + -0x10) = puVar31;
  *(undefined **)(puVar10 + -8) = puVar32;
  puVar31 = puVar10 + -0x10;
  if (auVar38._8_4_ < *(int *)(lVar13 + 0x30)) {
    puVar32 = &UNK_016ce3a4;
code_r0x016cda04:
    *(undefined1 **)(puVar9 + -0x10) = puVar31;
    *(undefined **)(puVar9 + -8) = puVar32;
    if ((*(long *)(lVar13 + 0x18) != 0) &&
       (lVar26 = *(long *)(*(long *)(lVar13 + 0x18) + 0x10), lVar26 != 0)) {
      return (ulong)(uint)(*(int *)(lVar26 + 0x18) - *(int *)(lVar13 + 0x10));
    }
    lVar13 = func_0x00f78af4();
    return (ulong)*(byte *)(lVar13 + 0x48);
  }
  func_0x00f78a24(0x3d22738);
  uVar17 = func_0x00f78aec();
  uVar18 = func_0x00f78a24(0x3d6ceb8);
  unaff_x21 = 0;
  /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar17,uVar18);
  uVar18 = func_0x00f78a24(0x3d56a58);
  func_0x00f78ac0(uVar17,uVar18);
  func_0x00f78af4();
  uVar18 = func_0x00f78b24();
  auVar37 = func_0x00f78ac0(uVar18,0);
  uVar24 = auVar37._0_8_;
  *(ulong *)(puVar10 + -0x50) = unaff_x22;
  *(ulong *)(puVar10 + -0x48) = uVar28;
  *(undefined8 *)(puVar10 + -0x40) = uVar19;
  *(undefined8 *)(puVar10 + -0x38) = uVar17;
  *(undefined1 **)(puVar10 + -0x30) = puVar31;
  *(undefined **)(puVar10 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
  ppppppuVar30 = (undefined8 ******)(puVar10 + -0x30);
  if (((int)unaff_x21 == param_4) && (*(char *)(uVar24 + 0x48) == '\0')) {
    return uVar24;
  }
  auVar36._8_8_ = 1;
  auVar36._0_8_ = uVar24;
  uVar24 = 0;
  puVar32 = &UNK_016ce46c;
  puVar10 = puVar10 + -0x50;
code_r0x016cdaac:
  do {
    uVar27 = auVar37._0_8_;
    uVar15 = auVar36._0_8_;
    puVar8 = puVar10 + -0x30;
    *(ulong *)(puVar10 + -0x30) = unaff_x22;
    *(ulong *)(puVar10 + -0x28) = unaff_x21;
    *(undefined1 (*) [16])(puVar10 + -0x20) = auVar37;
    *(undefined8 *******)(puVar10 + -0x10) = ppppppuVar30;
    *(undefined **)(puVar10 + -8) = puVar32;
    iVar23 = auVar36._8_4_;
    if (*(int *)(uVar15 + 0x20) < iVar23) {
      *(int *)(uVar15 + 0x20) = iVar23;
    }
    uVar28 = unaff_x22;
    if ((*(long *)(uVar15 + 0x18) != 0) &&
       (lVar13 = *(long *)(*(long *)(uVar15 + 0x18) + 0x10), lVar13 != 0)) {
      uVar2 = *(uint *)(lVar13 + 0x18);
      iVar3 = *(int *)(uVar15 + 0x10);
      uVar1 = iVar3 - (uVar2 + (int)uVar24) & iVar23 - 1U;
      uVar27 = CONCAT44(0,uVar1);
      uVar4 = (int)uVar24 + iVar23 + uVar1;
      uVar28 = (ulong)uVar4;
      uVar16 = uVar15;
      while (unaff_x21 = (ulong)uVar2, iVar3 < (int)uVar4) {
        uVar16 = /*FlatBuffers.FlatBufferBuilder$$GrowBuffer*/ func_0x016cda78(uVar15);
        if ((*(long *)(uVar15 + 0x18) == 0) ||
           (lVar13 = *(long *)(*(long *)(uVar15 + 0x18) + 0x10), lVar13 == 0))
        goto code_r0x016cdb68;
        iVar3 = *(int *)(uVar15 + 0x10) - uVar2;
        uVar2 = *(uint *)(lVar13 + 0x18);
        iVar3 = iVar3 + uVar2;
        *(int *)(uVar15 + 0x10) = iVar3;
      }
      if ((int)uVar1 < 1) {
        return uVar16;
      }
      uVar19 = *(undefined8 *)*(undefined1 (*) [16])(puVar10 + -0x20);
      uVar17 = *(undefined8 *)(puVar10 + -0x18);
      auVar37 = *(undefined1 (*) [16])(puVar10 + -0x20);
      unaff_x22 = *(ulong *)(puVar10 + -0x30);
      unaff_x21 = *(ulong *)(puVar10 + -0x28);
      *(undefined8 *)(puVar10 + -0x10) = *(undefined8 *)(puVar10 + -0x10);
      *(undefined8 *)(puVar10 + -8) = *(undefined8 *)(puVar10 + -8);
      lVar13 = *(long *)(uVar15 + 0x18);
      auVar7._8_8_ = lVar13;
      auVar7._0_8_ = uVar27;
      uVar1 = *(int *)(uVar15 + 0x10) - uVar1;
      uVar28 = (ulong)uVar1;
      auVar35._8_4_ = uVar1;
      auVar35._0_8_ = lVar13;
      auVar35._12_4_ = 0;
      *(uint *)(uVar15 + 0x10) = uVar1;
      if (lVar13 != 0) {
        *(ulong *)(puVar10 + -0x30) = unaff_x22;
        *(ulong *)(puVar10 + -0x28) = unaff_x21;
        *(undefined8 *)(puVar10 + -0x20) = uVar19;
        *(undefined8 *)(puVar10 + -0x18) = uVar17;
        *(undefined8 *)(puVar10 + -0x10) = *(undefined8 *)(puVar10 + -0x10);
        *(undefined8 *)(puVar10 + -8) = *(undefined8 *)(puVar10 + -8);
        ppppppuVar29 = (undefined8 ******)(puVar10 + -0x10);
        puVar32 = &UNK_016cc908;
        uVar24 = 0;
        goto code_r0x016cc7a4;
      }
      lVar13 = func_0x00f78af4();
      ppppppuVar30 = (undefined8 ******)(puVar10 + -0x20);
      *(undefined1 **)(puVar10 + -0x20) = puVar10 + -0x10;
      *(undefined **)(puVar10 + -0x18) = &FlatBuffers_FlatBufferBuilder__GrowBuffer;
      if ((*(long *)(lVar13 + 0x18) != 0) &&
         (plVar14 = *(long **)(*(long *)(lVar13 + 0x18) + 0x10), plVar14 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016cdaa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar28 = (**(code **)(*plVar14 + 0x178))
                           (plVar14,(int)plVar14[3] << 1,*(undefined8 *)(*plVar14 + 0x180));
        return uVar28;
      }
      puVar32 = &FlatBuffers_FlatBufferBuilder__Prep;
      auVar36 = func_0x00f78af4();
      puVar10 = puVar10 + -0x20;
      goto code_r0x016cdaac;
    }
code_r0x016cdb68:
    auVar7._8_8_ = uVar27;
    auVar7._0_8_ = unaff_x21;
    auVar33 = func_0x00f78af4();
    uVar24 = auVar33._8_8_;
    lVar26 = auVar33._0_8_;
    *(undefined1 **)(puVar10 + -0x40) = puVar10 + -0x10;
    *(undefined **)(puVar10 + -0x38) = &FlatBuffers_FlatBufferBuilder__PutBool;
    lVar13 = *(long *)(lVar26 + 0x18);
    iVar23 = *(int *)(lVar26 + 0x10) + -1;
    *(int *)(lVar26 + 0x10) = iVar23;
    if (lVar13 != 0) {
      puVar11 = puVar10 + -0x30;
      uVar19 = *(undefined8 *)(puVar10 + -0x40);
      uVar17 = *(undefined8 *)(puVar10 + -0x38);
FlatBuffers_ByteBuffer__PutByte:
      auVar7._8_4_ = iVar23;
      auVar7._0_8_ = lVar13;
      auVar7._12_4_ = 0;
      auVar35._8_4_ = iVar23;
      auVar35._0_8_ = lVar13;
      auVar35._12_4_ = 0;
      puVar8 = puVar11 + -0x30;
      *(ulong *)(puVar11 + -0x30) = uVar28;
      *(ulong *)(puVar11 + -0x28) = unaff_x21;
      *(ulong *)(puVar11 + -0x20) = uVar27;
      *(ulong *)(puVar11 + -0x18) = uVar15;
      *(undefined8 *)(puVar11 + -0x10) = uVar19;
      *(undefined8 *)(puVar11 + -8) = uVar17;
      ppppppuVar29 = (undefined8 ******)(puVar11 + -0x10);
      uVar27 = 1;
      puVar32 = &UNK_016cc89c;
      goto code_r0x016cc7a4;
    }
    auVar33 = func_0x00f78af4();
    uVar16 = auVar33._8_8_;
    lVar13 = auVar33._0_8_;
    *(undefined1 **)(puVar10 + -0x50) = puVar10 + -0x40;
    *(undefined **)(puVar10 + -0x48) = &FlatBuffers_FlatBufferBuilder__PutSbyte;
    iVar23 = *(int *)(lVar13 + 0x10) + -1;
    auVar35._8_4_ = iVar23;
    auVar35._0_8_ = *(long *)(lVar13 + 0x18);
    auVar35._12_4_ = 0;
    *(int *)(lVar13 + 0x10) = iVar23;
    if (*(long *)(lVar13 + 0x18) != 0) {
      puVar12 = puVar10 + -0x40;
      puVar31 = *(undefined1 **)(puVar10 + -0x50);
      puVar32 = *(undefined **)(puVar10 + -0x48);
      uVar24 = uVar15;
      goto code_r0x016cc810;
    }
    auVar33 = func_0x00f78af4();
    uVar24 = auVar33._8_8_;
    lVar26 = auVar33._0_8_;
    *(undefined1 **)(puVar10 + -0x60) = puVar10 + -0x50;
    *(undefined **)(puVar10 + -0x58) = &FlatBuffers_FlatBufferBuilder__PutByte;
    lVar13 = *(long *)(lVar26 + 0x18);
    iVar23 = *(int *)(lVar26 + 0x10) + -1;
    *(int *)(lVar26 + 0x10) = iVar23;
    if (lVar13 != 0) {
      puVar11 = puVar10 + -0x50;
      uVar19 = *(undefined8 *)(puVar10 + -0x60);
      uVar17 = *(undefined8 *)(puVar10 + -0x58);
      goto FlatBuffers_ByteBuffer__PutByte;
    }
    auVar33 = func_0x00f78af4();
    uVar24 = auVar33._8_8_;
    lVar13 = auVar33._0_8_;
    puVar8 = puVar10 + -0x90;
    *(ulong *)(puVar10 + -0x90) = uVar28;
    *(ulong *)(puVar10 + -0x88) = unaff_x21;
    *(ulong *)(puVar10 + -0x80) = uVar27;
    *(ulong *)(puVar10 + -0x78) = uVar15;
    *(undefined1 **)(puVar10 + -0x70) = puVar10 + -0x60;
    *(undefined **)(puVar10 + -0x68) = &FlatBuffers_FlatBufferBuilder__PutShort;
    ppppppuVar29 = (undefined8 ******)(puVar10 + -0x70);
    lVar26 = *(long *)(lVar13 + 0x18);
    uVar4 = *(int *)(lVar13 + 0x10) - 2;
    auVar7._8_8_ = lVar26;
    auVar7._0_8_ = CONCAT44(0,uVar4);
    auVar35._8_4_ = uVar4;
    auVar35._0_8_ = lVar26;
    auVar35._12_4_ = 0;
    *(uint *)(lVar13 + 0x10) = uVar4;
    if (lVar26 != 0) {
      uVar27 = 2;
      puVar32 = &UNK_016cdc34;
      goto code_r0x016cc7a4;
    }
    auVar33 = func_0x00f78af4();
    uVar24 = auVar33._8_8_;
    lVar13 = auVar33._0_8_;
    puVar8 = puVar10 + -0xc0;
    *(ulong *)(puVar10 + -0xc0) = uVar28;
    *(ulong *)(puVar10 + -0xb8) = CONCAT44(0,uVar4);
    *(undefined8 *)(puVar10 + -0xb0) = 0;
    *(ulong *)(puVar10 + -0xa8) = uVar15;
    *(undefined8 *******)(puVar10 + -0xa0) = ppppppuVar29;
    *(undefined **)(puVar10 + -0x98) = &FlatBuffers_FlatBufferBuilder__PutUshort;
    ppppppuVar29 = (undefined8 ******)(puVar10 + -0xa0);
    lVar26 = *(long *)(lVar13 + 0x18);
    uVar4 = *(int *)(lVar13 + 0x10) - 2;
    auVar7._8_8_ = lVar26;
    auVar7._0_8_ = CONCAT44(0,uVar4);
    auVar35._8_4_ = uVar4;
    auVar35._0_8_ = lVar26;
    auVar35._12_4_ = 0;
    *(uint *)(lVar13 + 0x10) = uVar4;
    if (lVar26 != 0) {
      uVar27 = 2;
      puVar32 = &UNK_016cdc90;
      goto code_r0x016cc7a4;
    }
    auVar33 = func_0x00f78af4();
    uVar24 = auVar33._8_8_;
    lVar13 = auVar33._0_8_;
    puVar8 = puVar10 + -0xf0;
    *(ulong *)(puVar10 + -0xf0) = uVar28;
    *(ulong *)(puVar10 + -0xe8) = CONCAT44(0,uVar4);
    *(undefined8 *)(puVar10 + -0xe0) = 0;
    *(ulong *)(puVar10 + -0xd8) = uVar15;
    *(undefined8 *******)(puVar10 + -0xd0) = ppppppuVar29;
    *(undefined **)(puVar10 + -200) = &FlatBuffers_FlatBufferBuilder__PutInt;
    ppppppuVar29 = (undefined8 ******)(puVar10 + -0xd0);
    lVar26 = *(long *)(lVar13 + 0x18);
    uVar4 = *(int *)(lVar13 + 0x10) - 4;
    auVar7._8_8_ = lVar26;
    auVar7._0_8_ = CONCAT44(0,uVar4);
    auVar35._8_4_ = uVar4;
    auVar35._0_8_ = lVar26;
    auVar35._12_4_ = 0;
    *(uint *)(lVar13 + 0x10) = uVar4;
    if (lVar26 != 0) {
      uVar27 = 4;
      puVar32 = &UNK_016cdcec;
      goto code_r0x016cc7a4;
    }
    auVar33 = func_0x00f78af4();
    uVar24 = auVar33._8_8_;
    lVar13 = auVar33._0_8_;
    puVar8 = puVar10 + -0x120;
    *(ulong *)(puVar10 + -0x120) = uVar28;
    *(ulong *)(puVar10 + -0x118) = CONCAT44(0,uVar4);
    *(undefined8 *)(puVar10 + -0x110) = 0;
    *(ulong *)(puVar10 + -0x108) = uVar15;
    *(undefined8 *******)(puVar10 + -0x100) = ppppppuVar29;
    *(undefined **)(puVar10 + -0xf8) = &FlatBuffers_FlatBufferBuilder__PutUint;
    ppppppuVar29 = (undefined8 ******)(puVar10 + -0x100);
    lVar26 = *(long *)(lVar13 + 0x18);
    uVar4 = *(int *)(lVar13 + 0x10) - 4;
    auVar7._8_8_ = lVar26;
    auVar7._0_8_ = CONCAT44(0,uVar4);
    auVar35._8_4_ = uVar4;
    auVar35._0_8_ = lVar26;
    auVar35._12_4_ = 0;
    *(uint *)(lVar13 + 0x10) = uVar4;
    if (lVar26 != 0) {
      uVar27 = 4;
      puVar32 = &UNK_016cdd48;
      goto code_r0x016cc7a4;
    }
    auVar33 = func_0x00f78af4();
    uVar24 = auVar33._8_8_;
    lVar13 = auVar33._0_8_;
    puVar8 = puVar10 + -0x150;
    *(ulong *)(puVar10 + -0x150) = uVar28;
    *(ulong *)(puVar10 + -0x148) = CONCAT44(0,uVar4);
    *(undefined8 *)(puVar10 + -0x140) = 0;
    *(ulong *)(puVar10 + -0x138) = uVar15;
    *(undefined8 *******)(puVar10 + -0x130) = ppppppuVar29;
    *(undefined **)(puVar10 + -0x128) = &FlatBuffers_FlatBufferBuilder__PutLong;
    ppppppuVar29 = (undefined8 ******)(puVar10 + -0x130);
    lVar26 = *(long *)(lVar13 + 0x18);
    uVar4 = *(int *)(lVar13 + 0x10) - 8;
    auVar7._8_8_ = lVar26;
    auVar7._0_8_ = CONCAT44(0,uVar4);
    auVar35._8_4_ = uVar4;
    auVar35._0_8_ = lVar26;
    auVar35._12_4_ = 0;
    *(uint *)(lVar13 + 0x10) = uVar4;
    if (lVar26 != 0) {
      uVar27 = 8;
      puVar32 = &UNK_016cdda4;
      goto code_r0x016cc7a4;
    }
    auVar33 = func_0x00f78af4();
    uVar24 = auVar33._8_8_;
    lVar13 = auVar33._0_8_;
    puVar8 = puVar10 + -0x180;
    *(ulong *)(puVar10 + -0x180) = uVar28;
    *(ulong *)(puVar10 + -0x178) = CONCAT44(0,uVar4);
    *(undefined8 *)(puVar10 + -0x170) = 0;
    *(ulong *)(puVar10 + -0x168) = uVar15;
    *(undefined8 *******)(puVar10 + -0x160) = ppppppuVar29;
    *(undefined **)(puVar10 + -0x158) = &FlatBuffers_FlatBufferBuilder__PutUlong;
    ppppppuVar29 = (undefined8 ******)(puVar10 + -0x160);
    lVar26 = *(long *)(lVar13 + 0x18);
    uVar4 = *(int *)(lVar13 + 0x10) - 8;
    unaff_x21 = CONCAT44(0,uVar4);
    auVar7._8_8_ = lVar26;
    auVar7._0_8_ = unaff_x21;
    auVar35._8_4_ = uVar4;
    auVar35._0_8_ = lVar26;
    auVar35._12_4_ = 0;
    *(uint *)(lVar13 + 0x10) = uVar4;
    if (lVar26 != 0) {
      uVar27 = 8;
      puVar32 = &UNK_016cde00;
      goto code_r0x016cc7a4;
    }
    lVar13 = func_0x00f78af4();
    *(undefined8 *******)(puVar10 + -400) = ppppppuVar29;
    *(undefined **)(puVar10 + -0x188) = &FlatBuffers_FlatBufferBuilder__PutFloat;
    lVar26 = *(long *)(lVar13 + 0x18);
    auVar7._8_8_ = lVar26;
    uVar4 = *(int *)(lVar13 + 0x10) - 4;
    uVar24 = (ulong)uVar4;
    auVar35._8_4_ = uVar4;
    auVar35._0_8_ = lVar26;
    auVar35._12_4_ = 0;
    *(uint *)(lVar13 + 0x10) = uVar4;
    if (lVar26 != 0) {
      puVar8 = puVar10 + -0x1b0;
      *(undefined8 *)(puVar10 + -0x1b0) = unaff_d9;
      *(undefined8 *)(puVar10 + -0x1a8) = unaff_d8;
      *(undefined8 *)(puVar10 + -0x1a0) = 0;
      *(ulong *)(puVar10 + -0x198) = uVar15;
      *(undefined8 *)(puVar10 + -400) = *(undefined8 *)(puVar10 + -400);
      *(undefined8 *)(puVar10 + -0x188) = *(undefined8 *)(puVar10 + -0x188);
      ppppppuVar29 = (undefined8 ******)(puVar10 + -400);
      uVar27 = 4;
      puVar32 = &UNK_016ccba4;
      goto code_r0x016cc7a4;
    }
    lVar13 = func_0x00f78af4();
    *(undefined1 **)(puVar10 + -0x1a0) = puVar10 + -400;
    *(undefined **)(puVar10 + -0x198) = &FlatBuffers_FlatBufferBuilder__PutDouble;
    lVar26 = *(long *)(lVar13 + 0x18);
    auVar7._8_8_ = lVar26;
    uVar4 = *(int *)(lVar13 + 0x10) - 8;
    uVar24 = (ulong)uVar4;
    auVar35._8_4_ = uVar4;
    auVar35._0_8_ = lVar26;
    auVar35._12_4_ = 0;
    *(uint *)(lVar13 + 0x10) = uVar4;
    if (lVar26 != 0) break;
    auVar37 = func_0x00f78af4();
    *(undefined8 *)(puVar10 + -0x1c0) = 0;
    *(ulong *)(puVar10 + -0x1b8) = uVar15;
    *(undefined1 **)(puVar10 + -0x1b0) = puVar10 + -0x1a0;
    *(undefined **)(puVar10 + -0x1a8) = &FlatBuffers_FlatBufferBuilder__AddBool;
    ppppppuVar30 = (undefined8 ******)(puVar10 + -0x1b0);
    auVar36._8_8_ = 1;
    auVar36._0_8_ = auVar37._0_8_;
    uVar24 = 0;
    puVar32 = &UNK_016cde9c;
    puVar10 = puVar10 + -0x1c0;
    unaff_x22 = uVar28;
  } while( true );
  puVar8 = puVar10 + -0x1c0;
  *(undefined8 *)(puVar10 + -0x1c0) = unaff_d9;
  *(undefined8 *)(puVar10 + -0x1b8) = unaff_d8;
  *(undefined8 *)(puVar10 + -0x1b0) = 0;
  *(ulong *)(puVar10 + -0x1a8) = uVar15;
  *(undefined8 *)(puVar10 + -0x1a0) = *(undefined8 *)(puVar10 + -0x1a0);
  *(undefined8 *)(puVar10 + -0x198) = *(undefined8 *)(puVar10 + -0x198);
  ppppppuVar29 = (undefined8 ******)(puVar10 + -0x1a0);
  uVar27 = 8;
  puVar32 = &UNK_016ccc34;
code_r0x016cc7a4:
  do {
    puVar12 = puVar8 + -0x20;
    *(long *)(puVar8 + -0x20) = auVar7._8_8_;
    *(ulong *)(puVar8 + -0x18) = uVar24;
    *(undefined8 *******)(puVar8 + -0x10) = ppppppuVar29;
    *(undefined **)(puVar8 + -8) = puVar32;
    puVar31 = puVar8 + -0x10;
    if (auVar35._8_4_ < 0) {
code_r0x016cc7d8:
      func_0x00f78a24(0x3d1fcf8);
      uVar24 = func_0x00f78aec();
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a4d0(uVar24,0);
      uVar19 = func_0x00f78a24(0x3d52ce8);
      func_0x00f78ac0(uVar24,uVar19);
      uVar16 = uVar27;
    }
    else {
      lVar13 = *(long *)(auVar35._0_8_ + 0x10);
      uVar16 = uVar27;
      if (lVar13 != 0) {
        if (auVar35._8_4_ <= *(int *)(lVar13 + 0x18) - (int)uVar27) {
          return auVar35._0_8_;
        }
        goto code_r0x016cc7d8;
      }
    }
    puVar32 = &FlatBuffers_ByteBuffer__PutSbyte;
    auVar35 = func_0x00f78af4();
code_r0x016cc810:
    puVar8 = puVar12 + -0x30;
    *(ulong *)(puVar12 + -0x30) = uVar28;
    *(undefined1 (*) [16])(puVar12 + -0x28) = auVar7;
    *(ulong *)(puVar12 + -0x18) = uVar24;
    *(undefined1 **)(puVar12 + -0x10) = puVar31;
    *(undefined **)(puVar12 + -8) = puVar32;
    ppppppuVar29 = (undefined8 ******)(puVar12 + -0x10);
    uVar27 = 1;
    puVar32 = &UNK_016cc834;
    uVar24 = uVar16;
    auVar7 = auVar35;
  } while( true );
}



// ============================================================
// RVA: 0x16557e4 | Core.Networking.HostEventResults.AddRoundScores
// ============================================================

/* WARNING: Possible PIC construction at 0x016ce3a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cea74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cea88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ceb04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ceb50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ceb74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cebe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cec2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ced5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cee1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cef0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cef44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cef60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cecfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce31c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016558a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01655968: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce184: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc904: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdc30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdc8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdce8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdd44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdda0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cddfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccc30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cccb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccd14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccdc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cde98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016559f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01655ab4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016559f4) */
/* WARNING: Removing unreachable block (ram,0x01655a00) */
/* WARNING: Removing unreachable block (ram,0x01655a08) */
/* WARNING: Removing unreachable block (ram,0x01655a24) */
/* WARNING: Removing unreachable block (ram,0x01655a30) */
/* WARNING: Removing unreachable block (ram,0x01655a3c) */
/* WARNING: Removing unreachable block (ram,0x016cde9c) */
/* WARNING: Removing unreachable block (ram,0x016ccdc4) */
/* WARNING: Removing unreachable block (ram,0x016ccd18) */
/* WARNING: Removing unreachable block (ram,0x016ccd20) */
/* WARNING: Removing unreachable block (ram,0x016ccd48) */
/* WARNING: Removing unreachable block (ram,0x016ccd28) */
/* WARNING: Removing unreachable block (ram,0x016ccd4c) */
/* WARNING: Removing unreachable block (ram,0x016ccd84) */
/* WARNING: Removing unreachable block (ram,0x016ccdb0) */
/* WARNING: Removing unreachable block (ram,0x016ccd88) */
/* WARNING: Removing unreachable block (ram,0x016ccd34) */
/* WARNING: Removing unreachable block (ram,0x016cccbc) */
/* WARNING: Removing unreachable block (ram,0x016cccc4) */
/* WARNING: Removing unreachable block (ram,0x016cccec) */
/* WARNING: Removing unreachable block (ram,0x016ccccc) */
/* WARNING: Removing unreachable block (ram,0x016cccf0) */
/* WARNING: Removing unreachable block (ram,0x016cccd8) */
/* WARNING: Removing unreachable block (ram,0x016ccc34) */
/* WARNING: Removing unreachable block (ram,0x016ccc3c) */
/* WARNING: Removing unreachable block (ram,0x016ccc44) */
/* WARNING: Removing unreachable block (ram,0x016ccc90) */
/* WARNING: Removing unreachable block (ram,0x016ccc68) */
/* WARNING: Removing unreachable block (ram,0x016ccc94) */
/* WARNING: Removing unreachable block (ram,0x016ccc70) */
/* WARNING: Removing unreachable block (ram,0x016ccba4) */
/* WARNING: Removing unreachable block (ram,0x016ccbac) */
/* WARNING: Removing unreachable block (ram,0x016ccbb4) */
/* WARNING: Removing unreachable block (ram,0x016ccc00) */
/* WARNING: Removing unreachable block (ram,0x016ccbd8) */
/* WARNING: Removing unreachable block (ram,0x016ccc04) */
/* WARNING: Removing unreachable block (ram,0x016ccbe0) */
/* WARNING: Removing unreachable block (ram,0x016cde00) */
/* WARNING: Removing unreachable block (ram,0x016cdda4) */
/* WARNING: Removing unreachable block (ram,0x016cdd48) */
/* WARNING: Removing unreachable block (ram,0x016cdcec) */
/* WARNING: Removing unreachable block (ram,0x016cdc90) */
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
/* WARNING: Removing unreachable block (ram,0x016cdc34) */
/* WARNING: Removing unreachable block (ram,0x016cc834) */
/* WARNING: Removing unreachable block (ram,0x016cc83c) */
/* WARNING: Removing unreachable block (ram,0x016cc868) */
/* WARNING: Removing unreachable block (ram,0x016cc844) */
/* WARNING: Removing unreachable block (ram,0x016cc86c) */
/* WARNING: Removing unreachable block (ram,0x016cc850) */
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
/* WARNING: Removing unreachable block (ram,0x016ce188) */
/* WARNING: Removing unreachable block (ram,0x0165596c) */
/* WARNING: Removing unreachable block (ram,0x016ce224) */
/* WARNING: Removing unreachable block (ram,0x016558a8) */
/* WARNING: Removing unreachable block (ram,0x016558b4) */
/* WARNING: Removing unreachable block (ram,0x016558bc) */
/* WARNING: Removing unreachable block (ram,0x016558d8) */
/* WARNING: Removing unreachable block (ram,0x016558e4) */
/* WARNING: Removing unreachable block (ram,0x016558f0) */
/* WARNING: Removing unreachable block (ram,0x016ce320) */
/* WARNING: Removing unreachable block (ram,0x016ced00) */
/* WARNING: Removing unreachable block (ram,0x016ced04) */
/* WARNING: Removing unreachable block (ram,0x016ced10) */
/* WARNING: Removing unreachable block (ram,0x016ced20) */
/* WARNING: Removing unreachable block (ram,0x016ced28) */
/* WARNING: Removing unreachable block (ram,0x016cef64) */
/* WARNING: Removing unreachable block (ram,0x016cef48) */
/* WARNING: Removing unreachable block (ram,0x016cef70) */
/* WARNING: Removing unreachable block (ram,0x016cef78) */
/* WARNING: Removing unreachable block (ram,0x016cef10) */
/* WARNING: Removing unreachable block (ram,0x016cef24) */
/* WARNING: Removing unreachable block (ram,0x016cef2c) */
/* WARNING: Removing unreachable block (ram,0x016cee20) */
/* WARNING: Removing unreachable block (ram,0x016cee2c) */
/* WARNING: Removing unreachable block (ram,0x016cee44) */
/* WARNING: Removing unreachable block (ram,0x016ced60) */
/* WARNING: Removing unreachable block (ram,0x016cec30) */
/* WARNING: Removing unreachable block (ram,0x016cec38) */
/* WARNING: Removing unreachable block (ram,0x016cec44) */
/* WARNING: Removing unreachable block (ram,0x016cebe8) */
/* WARNING: Removing unreachable block (ram,0x016cec48) */
/* WARNING: Removing unreachable block (ram,0x016cebf0) */
/* WARNING: Removing unreachable block (ram,0x016cec64) */
/* WARNING: Removing unreachable block (ram,0x016cec6c) */
/* WARNING: Removing unreachable block (ram,0x016cec78) */
/* WARNING: Removing unreachable block (ram,0x016ceca8) */
/* WARNING: Removing unreachable block (ram,0x016cec84) */
/* WARNING: Removing unreachable block (ram,0x016cec8c) */
/* WARNING: Removing unreachable block (ram,0x016cec94) */
/* WARNING: Removing unreachable block (ram,0x016ced3c) */
/* WARNING: Removing unreachable block (ram,0x016cc4e0) */
/* WARNING: Removing unreachable block (ram,0x016cc518) */
/* WARNING: Removing unreachable block (ram,0x016cc52c) */
/* WARNING: Removing unreachable block (ram,0x016cc538) */
/* WARNING: Removing unreachable block (ram,0x016cc540) */
/* WARNING: Removing unreachable block (ram,0x016cc548) */
/* WARNING: Removing unreachable block (ram,0x016cc5b8) */
/* WARNING: Removing unreachable block (ram,0x016cc5c0) */
/* WARNING: Removing unreachable block (ram,0x016cc5d4) */
/* WARNING: Removing unreachable block (ram,0x016cc5dc) */
/* WARNING: Removing unreachable block (ram,0x016cc5e4) */
/* WARNING: Removing unreachable block (ram,0x016cc5f0) */
/* WARNING: Removing unreachable block (ram,0x016cc554) */
/* WARNING: Removing unreachable block (ram,0x016cc55c) */
/* WARNING: Removing unreachable block (ram,0x016cc574) */
/* WARNING: Removing unreachable block (ram,0x016cc57c) */
/* WARNING: Removing unreachable block (ram,0x016cc624) */
/* WARNING: Removing unreachable block (ram,0x016cc584) */
/* WARNING: Removing unreachable block (ram,0x016cc628) */
/* WARNING: Removing unreachable block (ram,0x016cc590) */
/* WARNING: Removing unreachable block (ram,0x016cc5b4) */
/* WARNING: Removing unreachable block (ram,0x016cc610) */
/* WARNING: Removing unreachable block (ram,0x016cebfc) */
/* WARNING: Removing unreachable block (ram,0x016cec00) */
/* WARNING: Removing unreachable block (ram,0x016cec08) */
/* WARNING: Removing unreachable block (ram,0x016cec20) */
/* WARNING: Removing unreachable block (ram,0x016ceb78) */
/* WARNING: Removing unreachable block (ram,0x016cec58) */
/* WARNING: Removing unreachable block (ram,0x016cecac) */
/* WARNING: Removing unreachable block (ram,0x016cecb8) */
/* WARNING: Removing unreachable block (ram,0x016cecd8) */
/* WARNING: Removing unreachable block (ram,0x016cecf0) */
/* WARNING: Removing unreachable block (ram,0x016cec60) */
/* WARNING: Removing unreachable block (ram,0x016ceb84) */
/* WARNING: Removing unreachable block (ram,0x016ceb88) */
/* WARNING: Removing unreachable block (ram,0x016ceb90) */
/* WARNING: Removing unreachable block (ram,0x016ceb98) */
/* WARNING: Removing unreachable block (ram,0x016ceba0) */
/* WARNING: Removing unreachable block (ram,0x016cebac) */
/* WARNING: Removing unreachable block (ram,0x016cebd8) */
/* WARNING: Removing unreachable block (ram,0x016ceb54) */
/* WARNING: Removing unreachable block (ram,0x016ceb08) */
/* WARNING: Removing unreachable block (ram,0x016ceb10) */
/* WARNING: Removing unreachable block (ram,0x016ceb1c) */
/* WARNING: Removing unreachable block (ram,0x016ceb2c) */
/* WARNING: Removing unreachable block (ram,0x016cea8c) */
/* WARNING: Removing unreachable block (ram,0x016cea9c) */
/* WARNING: Removing unreachable block (ram,0x016ceaa0) */
/* WARNING: Removing unreachable block (ram,0x016ceb30) */
/* WARNING: Removing unreachable block (ram,0x016ceaa8) */
/* WARNING: Removing unreachable block (ram,0x016ced84) */
/* WARNING: Removing unreachable block (ram,0x016ceab0) */
/* WARNING: Removing unreachable block (ram,0x016ceabc) */
/* WARNING: Removing unreachable block (ram,0x016ceac8) */
/* WARNING: Removing unreachable block (ram,0x016ceacc) */
/* WARNING: Removing unreachable block (ram,0x016ced88) */
/* WARNING: Removing unreachable block (ram,0x016ceadc) */
/* WARNING: Removing unreachable block (ram,0x016ceae8) */
/* WARNING: Removing unreachable block (ram,0x016cea78) */
/* WARNING: Removing unreachable block (ram,0x016ce46c) */
/* WARNING: Removing unreachable block (ram,0x016ce3a4) */
/* WARNING: Removing unreachable block (ram,0x016ce3a8) */
/* WARNING: Removing unreachable block (ram,0x016ce3b4) */
/* WARNING: Removing unreachable block (ram,0x01655ab8) */
/* WARNING: Removing unreachable block (ram,0x016ce20c) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_HostEventResults__AddRoundScores
                (ulong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 *****pppppuVar21;
  undefined8 ****ppppuVar22;
  undefined8 uVar23;
  int iVar24;
  ulong uVar25;
  undefined *puVar26;
  ulong unaff_x19;
  undefined8 unaff_x20;
  ulong uVar27;
  long lVar28;
  ulong unaff_x21;
  ulong unaff_x22;
  undefined1 *unaff_x29;
  undefined8 ******ppppppuVar29;
  undefined1 *puVar30;
  undefined8 ******ppppppuVar31;
  undefined *unaff_x30;
  undefined *puVar32;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [12];
  undefined8 *****pppppuStack_f0;
  undefined *puStack_e8;
  undefined8 *****apppppuStack_c0 [4];
  undefined8 *****pppppuStack_80;
  undefined *puStack_78;
  
  if (param_1 == 0) {
    lVar14 = func_0x00f78af4();
    if ((bRam0000000003eb57fb & 1) == 0) {
      func_0x00f78a20(0x3d3f0e8);
      bRam0000000003eb57fb = 1;
    }
    if (lVar14 != 0) {
      ppppppuVar31 = (undefined8 ******)&stack0xffffffffffffffe0;
      auVar36._8_8_ = lVar14;
      auVar36._0_8_ = 0x3eb5000;
      if ((bRam0000000003eb5cd8 & 1) == 0) {
        func_0x00f78a20(0x3d1f100,0);
        bRam0000000003eb5cd8 = 1;
      }
      if (*(int *)(lVar14 + 0x30) < 0) {
        func_0x00f78a24(0x3d22a38);
        puVar32 = (undefined *)func_0x00f78aec();
        uVar19 = func_0x00f78a24(0x3d6cea8);
        puVar26 = (undefined *)0x0;
        /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(puVar32,uVar19);
        uVar19 = func_0x00f78a24(0x3d56a30);
        auVar37 = func_0x00f78ac0(puVar32,uVar19);
        pppppuVar21 = auVar37._0_8_;
        pppppuStack_80 = (undefined8 ******)0x3eb5000;
        ppppppuVar31 = (undefined8 ******)&stack0xffffffffffffff90;
        ppppuVar22 = pppppuVar21[3];
        puStack_78 = puVar32;
        if ((ppppuVar22 != (undefined8 ****)0x0) && (ppppuVar22[2] != (undefined8 ***)0x0)) {
          uVar5 = *(int *)(ppppuVar22[2] + 3) - auVar37._8_4_;
          uVar25 = (ulong)uVar5;
          auVar34._8_4_ = uVar5;
          auVar34._0_8_ = ppppuVar22;
          auVar34._12_4_ = 0;
          puVar9 = &stack0xffffffffffffff20;
          apppppuStack_c0[3] = (undefined8 *****)&UNK_016cee20;
          ppppppuVar29 = apppppuStack_c0 + 2;
          auVar8._8_8_ = 4;
          auVar8._0_8_ = ppppuVar22;
          uVar15 = 0x3d201a0;
          apppppuStack_c0[0] = pppppuVar21;
          apppppuStack_c0[1] = (undefined8 *****)puVar26;
          apppppuStack_c0[2] = ppppppuVar31;
          if ((bRam0000000003eb5cd0 & 1) == 0) {
            func_0x00f78a20(0x3d201a0);
            bRam0000000003eb5cd0 = 1;
          }
          uVar27 = 4;
          puVar32 = &UNK_016cc68c;
          goto code_r0x016cc7a4;
        }
        func_0x00f78af4();
        uVar19 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&stack0xffffffffffffff6c,0);
        uVar20 = func_0x00f78a24(0x3d6ce88);
        uVar23 = func_0x00f78a24(0x3d66338);
        lVar14 = /*System.String$$Concat*/ func_0x029be39c(uVar20,uVar19,uVar23,0);
        func_0x00f78a24(0x3d22a38);
        uVar19 = func_0x00f78aec();
        uVar23 = 0;
        /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar19,lVar14);
        uVar20 = func_0x00f78a24(0x3d56a50);
        puVar32 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar36 = func_0x00f78ac0(uVar19,uVar20);
        puVar11 = &stack0xffffffffffffff60;
        while( true ) {
          uVar20 = auVar36._8_8_;
          lVar28 = auVar36._0_8_;
          auVar36._8_8_ = lVar28;
          auVar36._0_8_ = uVar20;
          auVar7._8_8_ = lVar28;
          auVar7._0_8_ = uVar20;
          *(undefined8 *)(puVar11 + -0x20) = uVar19;
          *(long *)(puVar11 + -0x18) = lVar14;
          *(undefined8 *******)(puVar11 + -0x10) = ppppppuVar31;
          *(undefined **)(puVar11 + -8) = puVar32;
          ppppppuVar31 = (undefined8 ******)(puVar11 + -0x10);
          uVar4 = *(undefined4 *)(lVar28 + 0x20);
          auVar35._8_4_ = uVar4;
          auVar35._0_8_ = lVar28;
          auVar35._12_4_ = 0;
          lVar14 = lVar28;
          if ((int)uVar23 == 0) {
            lVar14 = 0;
            uVar4 = 0;
          }
          auVar6._8_4_ = uVar4;
          auVar6._0_8_ = lVar14;
          auVar6._12_4_ = 0;
          if ((int)uVar23 == 0) {
            uVar25 = 4;
            puVar32 = &UNK_016cef64;
            puVar11 = puVar11 + -0x20;
            goto code_r0x016cdaac;
          }
          if (lVar14 != 0) break;
          puVar32 = &FlatBuffers_FlatBufferBuilder__Finish;
          auVar36 = func_0x00f78af4();
          uVar23 = 0;
          puVar11 = puVar11 + -0x20;
          lVar14 = lVar28;
          uVar19 = uVar20;
        }
        uVar25 = 8;
        puVar32 = &UNK_016cef10;
        puVar11 = puVar11 + -0x20;
        auVar35 = auVar6;
        auVar36 = auVar7;
      }
      else {
        auVar35._8_8_ = 4;
        auVar35._0_8_ = lVar14;
        uVar25 = 0;
        puVar32 = &UNK_016cea78;
        puVar11 = &stack0xffffffffffffffa0;
      }
      goto code_r0x016cdaac;
    }
    uVar15 = func_0x00f78af4();
    if (uVar15 == 0) {
      auVar33 = func_0x00f78af4();
      lVar14 = auVar33._0_8_;
      if ((auVar33._8_8_ == 0) || (lVar14 == 0)) {
        auVar33 = func_0x00f78af4();
        lVar28 = auVar33._8_8_;
        lVar14 = auVar33._0_8_;
        puVar11 = &stack0xffffffffffffff60;
        puStack_78 = &Core_Networking_HostEventResults__CreateRoundScoresVectorBlock;
        ppppppuVar31 = &pppppuStack_80;
        unaff_x21 = 0x3eb5000;
        pppppuStack_80 = (undefined8 *****)&stack0xffffffffffffffb0;
        if ((bRam0000000003eb57f9 & 1) == 0) {
          func_0x00f78a20(0x3d569a0);
          bRam0000000003eb57f9 = 1;
        }
        if ((lVar28 == 0) || (lVar14 == 0)) {
          puVar32 = &Core_Networking_HostEventResults__StartRoundScoresVector;
          auVar37 = func_0x00f78af4();
          iVar24 = auVar37._8_4_;
          auVar33._8_8_ = lVar28;
          auVar33._0_8_ = auVar37._0_8_;
          if (auVar37._0_8_ == 0) {
            apppppuStack_c0[3] =
                 (undefined8 *****)&Core_Networking_HostEventResults__StartRoundScoresVector;
            apppppuStack_c0[2] = ppppppuVar31;
            auVar33 = func_0x00f78af4();
            lVar14 = auVar33._0_8_;
            apppppuStack_c0[1] =
                 (undefined8 *****)&Core_Networking_HostEventResults__CreateStandingsVector;
            if ((auVar33._8_8_ == 0) || (lVar14 == 0)) {
              apppppuStack_c0[0] = apppppuStack_c0 + 2;
              auVar33 = func_0x00f78af4();
              lVar28 = auVar33._8_8_;
              lVar14 = auVar33._0_8_;
              puVar11 = &stack0xfffffffffffffef0;
              puStack_e8 = &Core_Networking_HostEventResults__CreateStandingsVectorBlock;
              ppppppuVar31 = &pppppuStack_f0;
              unaff_x21 = 0x3eb5000;
              pppppuStack_f0 = apppppuStack_c0;
              if ((bRam0000000003eb57fa & 1) == 0) {
                func_0x00f78a20(0x3d56998);
                bRam0000000003eb57fa = 1;
              }
              if ((lVar28 == 0) || (lVar14 == 0)) {
                puVar32 = &Core_Networking_HostEventResults__StartStandingsVector;
                auVar37 = func_0x00f78af4();
                iVar24 = auVar37._8_4_;
                auVar33._8_8_ = lVar28;
                auVar33._0_8_ = auVar37._0_8_;
                if (auVar37._0_8_ == 0) {
                  lVar14 = func_0x00f78af4();
                  return *(ulong *)(lVar14 + 8);
                }
              }
              else {
                unaff_x21 = 0x3d56000;
                iVar24 = *(int *)(lVar28 + 0x18);
                puVar32 = &UNK_01655ab8;
                puVar11 = &stack0xfffffffffffffef0;
              }
            }
            else {
              iVar24 = *(int *)(auVar33._8_8_ + 0x18);
              puVar32 = &UNK_016559f4;
              puVar11 = &stack0xffffffffffffff20;
              ppppppuVar31 = apppppuStack_c0;
              apppppuStack_c0[0] = apppppuStack_c0 + 2;
            }
          }
        }
        else {
          unaff_x21 = 0x3d56000;
          iVar24 = *(int *)(lVar28 + 0x18);
          puVar32 = &UNK_0165596c;
          puVar11 = &stack0xffffffffffffff60;
        }
      }
      else {
        iVar24 = *(int *)(auVar33._8_8_ + 0x18);
        puVar32 = &UNK_016558a8;
        puVar11 = &stack0xffffffffffffff90;
        ppppppuVar31 = (undefined8 ******)&stack0xffffffffffffffb0;
      }
      uVar15 = auVar33._0_8_;
      *(ulong *)(puVar11 + -0x30) = unaff_x22;
      *(ulong *)(puVar11 + -0x28) = unaff_x21;
      *(long *)(puVar11 + -0x20) = auVar33._8_8_;
      *(long *)(puVar11 + -0x18) = lVar14;
      *(undefined8 *******)(puVar11 + -0x10) = ppppppuVar31;
      *(undefined **)(puVar11 + -8) = puVar32;
      ppppppuVar31 = (undefined8 ******)(puVar11 + -0x10);
      unaff_x21 = 4;
      /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4();
      *(int *)(uVar15 + 0x44) = iVar24;
      uVar25 = CONCAT44(0,iVar24 * 4);
      auVar36._8_8_ = 4;
      auVar36._0_8_ = uVar25;
      auVar35._8_8_ = 4;
      auVar35._0_8_ = uVar15;
      puVar32 = &UNK_016ce188;
      puVar11 = puVar11 + -0x30;
      unaff_x22 = uVar15;
      goto code_r0x016cdaac;
    }
    puVar10 = &stack0xffffffffffffffa0;
    puVar11 = &stack0xffffffffffffffa0;
    unaff_x29 = &stack0xffffffffffffffc0;
    unaff_x20 = 2;
    uVar25 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100,2,0);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(uVar15);
    if (*(long *)(uVar15 + 0x28) != 0) {
      if (*(int *)(*(long *)(uVar15 + 0x28) + 0x18) < 2) {
        uVar19 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,2);
        *(undefined8 *)(uVar15 + 0x28) = uVar19;
      }
      *(undefined4 *)(uVar15 + 0x30) = 2;
      puVar32 = &UNK_016ce320;
      goto code_r0x016cda04;
    }
    unaff_x30 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar37 = func_0x00f78af4();
    iVar24 = auVar37._8_4_;
    param_1 = auVar37._0_8_;
    unaff_x19 = uVar15;
  }
  else {
    param_4 = 0;
    iVar24 = 0;
    if (((int)param_2 == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(param_1,param_2,param_2,0,0);
    puVar11 = (undefined1 *)register0x00000008;
    uVar25 = unaff_x21;
  }
  uVar15 = param_1;
  puVar10 = puVar11 + -0x20;
  *(undefined8 *)(puVar11 + -0x20) = unaff_x20;
  *(ulong *)(puVar11 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar11 + -0x10) = unaff_x29;
  *(undefined **)(puVar11 + -8) = unaff_x30;
  unaff_x29 = puVar11 + -0x10;
  if (iVar24 < *(int *)(uVar15 + 0x30)) {
    puVar32 = &UNK_016ce3a4;
code_r0x016cda04:
    *(undefined1 **)(puVar10 + -0x10) = unaff_x29;
    *(undefined **)(puVar10 + -8) = puVar32;
    if ((*(long *)(uVar15 + 0x18) != 0) &&
       (lVar14 = *(long *)(*(long *)(uVar15 + 0x18) + 0x10), lVar14 != 0)) {
      return (ulong)(uint)(*(int *)(lVar14 + 0x18) - *(int *)(uVar15 + 0x10));
    }
    lVar14 = func_0x00f78af4();
    return (ulong)*(byte *)(lVar14 + 0x48);
  }
  func_0x00f78a24(0x3d22738);
  uVar19 = func_0x00f78aec();
  uVar20 = func_0x00f78a24(0x3d6ceb8);
  unaff_x21 = 0;
  /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar19,uVar20);
  uVar20 = func_0x00f78a24(0x3d56a58);
  func_0x00f78ac0(uVar19,uVar20);
  func_0x00f78af4();
  uVar20 = func_0x00f78b24();
  auVar36 = func_0x00f78ac0(uVar20,0);
  uVar15 = auVar36._0_8_;
  *(ulong *)(puVar11 + -0x50) = unaff_x22;
  *(ulong *)(puVar11 + -0x48) = uVar25;
  *(undefined8 *)(puVar11 + -0x40) = unaff_x20;
  *(undefined8 *)(puVar11 + -0x38) = uVar19;
  *(undefined1 **)(puVar11 + -0x30) = unaff_x29;
  *(undefined **)(puVar11 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
  ppppppuVar31 = (undefined8 ******)(puVar11 + -0x30);
  if (((int)unaff_x21 == param_4) && (*(char *)(uVar15 + 0x48) == '\0')) {
    return uVar15;
  }
  auVar35._8_8_ = 1;
  auVar35._0_8_ = uVar15;
  uVar25 = 0;
  puVar32 = &UNK_016ce46c;
  puVar11 = puVar11 + -0x50;
code_r0x016cdaac:
  do {
    uVar27 = auVar36._0_8_;
    uVar17 = auVar35._0_8_;
    puVar9 = puVar11 + -0x30;
    *(ulong *)(puVar11 + -0x30) = unaff_x22;
    *(ulong *)(puVar11 + -0x28) = unaff_x21;
    *(undefined1 (*) [16])(puVar11 + -0x20) = auVar36;
    *(undefined8 *******)(puVar11 + -0x10) = ppppppuVar31;
    *(undefined **)(puVar11 + -8) = puVar32;
    iVar24 = auVar35._8_4_;
    if (*(int *)(uVar17 + 0x20) < iVar24) {
      *(int *)(uVar17 + 0x20) = iVar24;
    }
    uVar15 = unaff_x22;
    if ((*(long *)(uVar17 + 0x18) != 0) &&
       (lVar14 = *(long *)(*(long *)(uVar17 + 0x18) + 0x10), lVar14 != 0)) {
      uVar2 = *(uint *)(lVar14 + 0x18);
      iVar3 = *(int *)(uVar17 + 0x10);
      uVar1 = iVar3 - (uVar2 + (int)uVar25) & iVar24 - 1U;
      uVar27 = CONCAT44(0,uVar1);
      uVar5 = (int)uVar25 + iVar24 + uVar1;
      uVar15 = (ulong)uVar5;
      uVar18 = uVar17;
      while (unaff_x21 = (ulong)uVar2, iVar3 < (int)uVar5) {
        uVar18 = /*FlatBuffers.FlatBufferBuilder$$GrowBuffer*/ func_0x016cda78(uVar17);
        if ((*(long *)(uVar17 + 0x18) == 0) ||
           (lVar14 = *(long *)(*(long *)(uVar17 + 0x18) + 0x10), lVar14 == 0))
        goto code_r0x016cdb68;
        iVar3 = *(int *)(uVar17 + 0x10) - uVar2;
        uVar2 = *(uint *)(lVar14 + 0x18);
        iVar3 = iVar3 + uVar2;
        *(int *)(uVar17 + 0x10) = iVar3;
      }
      if ((int)uVar1 < 1) {
        return uVar18;
      }
      uVar19 = *(undefined8 *)*(undefined1 (*) [16])(puVar11 + -0x20);
      uVar20 = *(undefined8 *)(puVar11 + -0x18);
      auVar36 = *(undefined1 (*) [16])(puVar11 + -0x20);
      unaff_x22 = *(ulong *)(puVar11 + -0x30);
      unaff_x21 = *(ulong *)(puVar11 + -0x28);
      *(undefined8 *)(puVar11 + -0x10) = *(undefined8 *)(puVar11 + -0x10);
      *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
      lVar14 = *(long *)(uVar17 + 0x18);
      auVar8._8_8_ = lVar14;
      auVar8._0_8_ = uVar27;
      uVar1 = *(int *)(uVar17 + 0x10) - uVar1;
      uVar15 = (ulong)uVar1;
      auVar34._8_4_ = uVar1;
      auVar34._0_8_ = lVar14;
      auVar34._12_4_ = 0;
      *(uint *)(uVar17 + 0x10) = uVar1;
      if (lVar14 != 0) {
        *(ulong *)(puVar11 + -0x30) = unaff_x22;
        *(ulong *)(puVar11 + -0x28) = unaff_x21;
        *(undefined8 *)(puVar11 + -0x20) = uVar19;
        *(undefined8 *)(puVar11 + -0x18) = uVar20;
        *(undefined8 *)(puVar11 + -0x10) = *(undefined8 *)(puVar11 + -0x10);
        *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
        ppppppuVar29 = (undefined8 ******)(puVar11 + -0x10);
        puVar32 = &UNK_016cc908;
        uVar25 = 0;
        goto code_r0x016cc7a4;
      }
      lVar14 = func_0x00f78af4();
      ppppppuVar31 = (undefined8 ******)(puVar11 + -0x20);
      *(undefined1 **)(puVar11 + -0x20) = puVar11 + -0x10;
      *(undefined **)(puVar11 + -0x18) = &FlatBuffers_FlatBufferBuilder__GrowBuffer;
      if ((*(long *)(lVar14 + 0x18) != 0) &&
         (plVar16 = *(long **)(*(long *)(lVar14 + 0x18) + 0x10), plVar16 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016cdaa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar15 = (**(code **)(*plVar16 + 0x178))
                           (plVar16,(int)plVar16[3] << 1,*(undefined8 *)(*plVar16 + 0x180));
        return uVar15;
      }
      puVar32 = &FlatBuffers_FlatBufferBuilder__Prep;
      auVar35 = func_0x00f78af4();
      puVar11 = puVar11 + -0x20;
      goto code_r0x016cdaac;
    }
code_r0x016cdb68:
    auVar8._8_8_ = uVar27;
    auVar8._0_8_ = unaff_x21;
    auVar36 = func_0x00f78af4();
    uVar25 = auVar36._8_8_;
    lVar28 = auVar36._0_8_;
    *(undefined1 **)(puVar11 + -0x40) = puVar11 + -0x10;
    *(undefined **)(puVar11 + -0x38) = &FlatBuffers_FlatBufferBuilder__PutBool;
    lVar14 = *(long *)(lVar28 + 0x18);
    iVar24 = *(int *)(lVar28 + 0x10) + -1;
    *(int *)(lVar28 + 0x10) = iVar24;
    if (lVar14 != 0) {
      puVar12 = puVar11 + -0x30;
      uVar19 = *(undefined8 *)(puVar11 + -0x40);
      uVar20 = *(undefined8 *)(puVar11 + -0x38);
FlatBuffers_ByteBuffer__PutByte:
      auVar8._8_4_ = iVar24;
      auVar8._0_8_ = lVar14;
      auVar8._12_4_ = 0;
      auVar34._8_4_ = iVar24;
      auVar34._0_8_ = lVar14;
      auVar34._12_4_ = 0;
      puVar9 = puVar12 + -0x30;
      *(ulong *)(puVar12 + -0x30) = uVar15;
      *(ulong *)(puVar12 + -0x28) = unaff_x21;
      *(ulong *)(puVar12 + -0x20) = uVar27;
      *(ulong *)(puVar12 + -0x18) = uVar17;
      *(undefined8 *)(puVar12 + -0x10) = uVar19;
      *(undefined8 *)(puVar12 + -8) = uVar20;
      ppppppuVar29 = (undefined8 ******)(puVar12 + -0x10);
      uVar27 = 1;
      puVar32 = &UNK_016cc89c;
      goto code_r0x016cc7a4;
    }
    auVar36 = func_0x00f78af4();
    uVar18 = auVar36._8_8_;
    lVar14 = auVar36._0_8_;
    *(undefined1 **)(puVar11 + -0x50) = puVar11 + -0x40;
    *(undefined **)(puVar11 + -0x48) = &FlatBuffers_FlatBufferBuilder__PutSbyte;
    iVar24 = *(int *)(lVar14 + 0x10) + -1;
    auVar34._8_4_ = iVar24;
    auVar34._0_8_ = *(long *)(lVar14 + 0x18);
    auVar34._12_4_ = 0;
    *(int *)(lVar14 + 0x10) = iVar24;
    if (*(long *)(lVar14 + 0x18) != 0) {
      puVar13 = puVar11 + -0x40;
      puVar30 = *(undefined1 **)(puVar11 + -0x50);
      puVar32 = *(undefined **)(puVar11 + -0x48);
      uVar25 = uVar17;
      goto code_r0x016cc810;
    }
    auVar36 = func_0x00f78af4();
    uVar25 = auVar36._8_8_;
    lVar28 = auVar36._0_8_;
    *(undefined1 **)(puVar11 + -0x60) = puVar11 + -0x50;
    *(undefined **)(puVar11 + -0x58) = &FlatBuffers_FlatBufferBuilder__PutByte;
    lVar14 = *(long *)(lVar28 + 0x18);
    iVar24 = *(int *)(lVar28 + 0x10) + -1;
    *(int *)(lVar28 + 0x10) = iVar24;
    if (lVar14 != 0) {
      puVar12 = puVar11 + -0x50;
      uVar19 = *(undefined8 *)(puVar11 + -0x60);
      uVar20 = *(undefined8 *)(puVar11 + -0x58);
      goto FlatBuffers_ByteBuffer__PutByte;
    }
    auVar36 = func_0x00f78af4();
    uVar25 = auVar36._8_8_;
    lVar14 = auVar36._0_8_;
    puVar9 = puVar11 + -0x90;
    *(ulong *)(puVar11 + -0x90) = uVar15;
    *(ulong *)(puVar11 + -0x88) = unaff_x21;
    *(ulong *)(puVar11 + -0x80) = uVar27;
    *(ulong *)(puVar11 + -0x78) = uVar17;
    *(undefined1 **)(puVar11 + -0x70) = puVar11 + -0x60;
    *(undefined **)(puVar11 + -0x68) = &FlatBuffers_FlatBufferBuilder__PutShort;
    ppppppuVar29 = (undefined8 ******)(puVar11 + -0x70);
    lVar28 = *(long *)(lVar14 + 0x18);
    uVar5 = *(int *)(lVar14 + 0x10) - 2;
    auVar8._8_8_ = lVar28;
    auVar8._0_8_ = CONCAT44(0,uVar5);
    auVar34._8_4_ = uVar5;
    auVar34._0_8_ = lVar28;
    auVar34._12_4_ = 0;
    *(uint *)(lVar14 + 0x10) = uVar5;
    if (lVar28 != 0) {
      uVar27 = 2;
      puVar32 = &UNK_016cdc34;
      goto code_r0x016cc7a4;
    }
    auVar36 = func_0x00f78af4();
    uVar25 = auVar36._8_8_;
    lVar14 = auVar36._0_8_;
    puVar9 = puVar11 + -0xc0;
    *(ulong *)(puVar11 + -0xc0) = uVar15;
    *(ulong *)(puVar11 + -0xb8) = CONCAT44(0,uVar5);
    *(undefined8 *)(puVar11 + -0xb0) = 0;
    *(ulong *)(puVar11 + -0xa8) = uVar17;
    *(undefined8 *******)(puVar11 + -0xa0) = ppppppuVar29;
    *(undefined **)(puVar11 + -0x98) = &FlatBuffers_FlatBufferBuilder__PutUshort;
    ppppppuVar29 = (undefined8 ******)(puVar11 + -0xa0);
    lVar28 = *(long *)(lVar14 + 0x18);
    uVar5 = *(int *)(lVar14 + 0x10) - 2;
    auVar8._8_8_ = lVar28;
    auVar8._0_8_ = CONCAT44(0,uVar5);
    auVar34._8_4_ = uVar5;
    auVar34._0_8_ = lVar28;
    auVar34._12_4_ = 0;
    *(uint *)(lVar14 + 0x10) = uVar5;
    if (lVar28 != 0) {
      uVar27 = 2;
      puVar32 = &UNK_016cdc90;
      goto code_r0x016cc7a4;
    }
    auVar36 = func_0x00f78af4();
    uVar25 = auVar36._8_8_;
    lVar14 = auVar36._0_8_;
    puVar9 = puVar11 + -0xf0;
    *(ulong *)(puVar11 + -0xf0) = uVar15;
    *(ulong *)(puVar11 + -0xe8) = CONCAT44(0,uVar5);
    *(undefined8 *)(puVar11 + -0xe0) = 0;
    *(ulong *)(puVar11 + -0xd8) = uVar17;
    *(undefined8 *******)(puVar11 + -0xd0) = ppppppuVar29;
    *(undefined **)(puVar11 + -200) = &FlatBuffers_FlatBufferBuilder__PutInt;
    ppppppuVar29 = (undefined8 ******)(puVar11 + -0xd0);
    lVar28 = *(long *)(lVar14 + 0x18);
    uVar5 = *(int *)(lVar14 + 0x10) - 4;
    auVar8._8_8_ = lVar28;
    auVar8._0_8_ = CONCAT44(0,uVar5);
    auVar34._8_4_ = uVar5;
    auVar34._0_8_ = lVar28;
    auVar34._12_4_ = 0;
    *(uint *)(lVar14 + 0x10) = uVar5;
    if (lVar28 != 0) {
      uVar27 = 4;
      puVar32 = &UNK_016cdcec;
      goto code_r0x016cc7a4;
    }
    auVar36 = func_0x00f78af4();
    uVar25 = auVar36._8_8_;
    lVar14 = auVar36._0_8_;
    puVar9 = puVar11 + -0x120;
    *(ulong *)(puVar11 + -0x120) = uVar15;
    *(ulong *)(puVar11 + -0x118) = CONCAT44(0,uVar5);
    *(undefined8 *)(puVar11 + -0x110) = 0;
    *(ulong *)(puVar11 + -0x108) = uVar17;
    *(undefined8 *******)(puVar11 + -0x100) = ppppppuVar29;
    *(undefined **)(puVar11 + -0xf8) = &FlatBuffers_FlatBufferBuilder__PutUint;
    ppppppuVar29 = (undefined8 ******)(puVar11 + -0x100);
    lVar28 = *(long *)(lVar14 + 0x18);
    uVar5 = *(int *)(lVar14 + 0x10) - 4;
    auVar8._8_8_ = lVar28;
    auVar8._0_8_ = CONCAT44(0,uVar5);
    auVar34._8_4_ = uVar5;
    auVar34._0_8_ = lVar28;
    auVar34._12_4_ = 0;
    *(uint *)(lVar14 + 0x10) = uVar5;
    if (lVar28 != 0) {
      uVar27 = 4;
      puVar32 = &UNK_016cdd48;
      goto code_r0x016cc7a4;
    }
    auVar36 = func_0x00f78af4();
    uVar25 = auVar36._8_8_;
    lVar14 = auVar36._0_8_;
    puVar9 = puVar11 + -0x150;
    *(ulong *)(puVar11 + -0x150) = uVar15;
    *(ulong *)(puVar11 + -0x148) = CONCAT44(0,uVar5);
    *(undefined8 *)(puVar11 + -0x140) = 0;
    *(ulong *)(puVar11 + -0x138) = uVar17;
    *(undefined8 *******)(puVar11 + -0x130) = ppppppuVar29;
    *(undefined **)(puVar11 + -0x128) = &FlatBuffers_FlatBufferBuilder__PutLong;
    ppppppuVar29 = (undefined8 ******)(puVar11 + -0x130);
    lVar28 = *(long *)(lVar14 + 0x18);
    uVar5 = *(int *)(lVar14 + 0x10) - 8;
    auVar8._8_8_ = lVar28;
    auVar8._0_8_ = CONCAT44(0,uVar5);
    auVar34._8_4_ = uVar5;
    auVar34._0_8_ = lVar28;
    auVar34._12_4_ = 0;
    *(uint *)(lVar14 + 0x10) = uVar5;
    if (lVar28 != 0) {
      uVar27 = 8;
      puVar32 = &UNK_016cdda4;
      goto code_r0x016cc7a4;
    }
    auVar36 = func_0x00f78af4();
    uVar25 = auVar36._8_8_;
    lVar14 = auVar36._0_8_;
    puVar9 = puVar11 + -0x180;
    *(ulong *)(puVar11 + -0x180) = uVar15;
    *(ulong *)(puVar11 + -0x178) = CONCAT44(0,uVar5);
    *(undefined8 *)(puVar11 + -0x170) = 0;
    *(ulong *)(puVar11 + -0x168) = uVar17;
    *(undefined8 *******)(puVar11 + -0x160) = ppppppuVar29;
    *(undefined **)(puVar11 + -0x158) = &FlatBuffers_FlatBufferBuilder__PutUlong;
    ppppppuVar29 = (undefined8 ******)(puVar11 + -0x160);
    lVar28 = *(long *)(lVar14 + 0x18);
    uVar5 = *(int *)(lVar14 + 0x10) - 8;
    unaff_x21 = CONCAT44(0,uVar5);
    auVar8._8_8_ = lVar28;
    auVar8._0_8_ = unaff_x21;
    auVar34._8_4_ = uVar5;
    auVar34._0_8_ = lVar28;
    auVar34._12_4_ = 0;
    *(uint *)(lVar14 + 0x10) = uVar5;
    if (lVar28 != 0) {
      uVar27 = 8;
      puVar32 = &UNK_016cde00;
      goto code_r0x016cc7a4;
    }
    lVar14 = func_0x00f78af4();
    *(undefined8 *******)(puVar11 + -400) = ppppppuVar29;
    *(undefined **)(puVar11 + -0x188) = &FlatBuffers_FlatBufferBuilder__PutFloat;
    lVar28 = *(long *)(lVar14 + 0x18);
    auVar8._8_8_ = lVar28;
    uVar5 = *(int *)(lVar14 + 0x10) - 4;
    uVar25 = (ulong)uVar5;
    auVar34._8_4_ = uVar5;
    auVar34._0_8_ = lVar28;
    auVar34._12_4_ = 0;
    *(uint *)(lVar14 + 0x10) = uVar5;
    if (lVar28 != 0) {
      puVar9 = puVar11 + -0x1b0;
      *(undefined8 *)(puVar11 + -0x1b0) = unaff_d9;
      *(undefined8 *)(puVar11 + -0x1a8) = unaff_d8;
      *(undefined8 *)(puVar11 + -0x1a0) = 0;
      *(ulong *)(puVar11 + -0x198) = uVar17;
      *(undefined8 *)(puVar11 + -400) = *(undefined8 *)(puVar11 + -400);
      *(undefined8 *)(puVar11 + -0x188) = *(undefined8 *)(puVar11 + -0x188);
      ppppppuVar29 = (undefined8 ******)(puVar11 + -400);
      uVar27 = 4;
      puVar32 = &UNK_016ccba4;
      goto code_r0x016cc7a4;
    }
    lVar14 = func_0x00f78af4();
    *(undefined1 **)(puVar11 + -0x1a0) = puVar11 + -400;
    *(undefined **)(puVar11 + -0x198) = &FlatBuffers_FlatBufferBuilder__PutDouble;
    lVar28 = *(long *)(lVar14 + 0x18);
    auVar8._8_8_ = lVar28;
    uVar5 = *(int *)(lVar14 + 0x10) - 8;
    uVar25 = (ulong)uVar5;
    auVar34._8_4_ = uVar5;
    auVar34._0_8_ = lVar28;
    auVar34._12_4_ = 0;
    *(uint *)(lVar14 + 0x10) = uVar5;
    if (lVar28 != 0) break;
    auVar36 = func_0x00f78af4();
    *(undefined8 *)(puVar11 + -0x1c0) = 0;
    *(ulong *)(puVar11 + -0x1b8) = uVar17;
    *(undefined1 **)(puVar11 + -0x1b0) = puVar11 + -0x1a0;
    *(undefined **)(puVar11 + -0x1a8) = &FlatBuffers_FlatBufferBuilder__AddBool;
    ppppppuVar31 = (undefined8 ******)(puVar11 + -0x1b0);
    auVar35._8_8_ = 1;
    auVar35._0_8_ = auVar36._0_8_;
    uVar25 = 0;
    puVar32 = &UNK_016cde9c;
    puVar11 = puVar11 + -0x1c0;
    unaff_x22 = uVar15;
  } while( true );
  puVar9 = puVar11 + -0x1c0;
  *(undefined8 *)(puVar11 + -0x1c0) = unaff_d9;
  *(undefined8 *)(puVar11 + -0x1b8) = unaff_d8;
  *(undefined8 *)(puVar11 + -0x1b0) = 0;
  *(ulong *)(puVar11 + -0x1a8) = uVar17;
  *(undefined8 *)(puVar11 + -0x1a0) = *(undefined8 *)(puVar11 + -0x1a0);
  *(undefined8 *)(puVar11 + -0x198) = *(undefined8 *)(puVar11 + -0x198);
  ppppppuVar29 = (undefined8 ******)(puVar11 + -0x1a0);
  uVar27 = 8;
  puVar32 = &UNK_016ccc34;
code_r0x016cc7a4:
  do {
    puVar13 = puVar9 + -0x20;
    *(long *)(puVar9 + -0x20) = auVar8._8_8_;
    *(ulong *)(puVar9 + -0x18) = uVar25;
    *(undefined8 *******)(puVar9 + -0x10) = ppppppuVar29;
    *(undefined **)(puVar9 + -8) = puVar32;
    puVar30 = puVar9 + -0x10;
    if (auVar34._8_4_ < 0) {
code_r0x016cc7d8:
      func_0x00f78a24(0x3d1fcf8);
      uVar25 = func_0x00f78aec();
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a4d0(uVar25,0);
      uVar19 = func_0x00f78a24(0x3d52ce8);
      func_0x00f78ac0(uVar25,uVar19);
      uVar18 = uVar27;
    }
    else {
      lVar14 = *(long *)(auVar34._0_8_ + 0x10);
      uVar18 = uVar27;
      if (lVar14 != 0) {
        if (auVar34._8_4_ <= *(int *)(lVar14 + 0x18) - (int)uVar27) {
          return auVar34._0_8_;
        }
        goto code_r0x016cc7d8;
      }
    }
    puVar32 = &FlatBuffers_ByteBuffer__PutSbyte;
    auVar34 = func_0x00f78af4();
code_r0x016cc810:
    puVar9 = puVar13 + -0x30;
    *(ulong *)(puVar13 + -0x30) = uVar15;
    *(undefined1 (*) [16])(puVar13 + -0x28) = auVar8;
    *(ulong *)(puVar13 + -0x18) = uVar25;
    *(undefined1 **)(puVar13 + -0x10) = puVar30;
    *(undefined **)(puVar13 + -8) = puVar32;
    ppppppuVar29 = (undefined8 ******)(puVar13 + -0x10);
    uVar27 = 1;
    puVar32 = &UNK_016cc834;
    uVar25 = uVar18;
    auVar8 = auVar34;
  } while( true );
}



// ============================================================
// RVA: 0x1655808 | Core.Networking.HostEventResults.EndHostEventResults
// ============================================================

/* WARNING: Possible PIC construction at 0x016cea74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cea88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ceb04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ceb50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ceb74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cebe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cec2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ced5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cee1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cef0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cef44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cef60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cecfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce31c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce3a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016558a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01655968: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce184: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc904: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdc30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdc8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdce8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdd44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdda0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cddfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccc30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cccb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccd14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccdc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cde98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016559f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01655ab4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016559f4) */
/* WARNING: Removing unreachable block (ram,0x01655a00) */
/* WARNING: Removing unreachable block (ram,0x01655a08) */
/* WARNING: Removing unreachable block (ram,0x01655a24) */
/* WARNING: Removing unreachable block (ram,0x01655a30) */
/* WARNING: Removing unreachable block (ram,0x01655a3c) */
/* WARNING: Removing unreachable block (ram,0x016cde9c) */
/* WARNING: Removing unreachable block (ram,0x016ccdc4) */
/* WARNING: Removing unreachable block (ram,0x016ccd18) */
/* WARNING: Removing unreachable block (ram,0x016ccd20) */
/* WARNING: Removing unreachable block (ram,0x016ccd48) */
/* WARNING: Removing unreachable block (ram,0x016ccd28) */
/* WARNING: Removing unreachable block (ram,0x016ccd4c) */
/* WARNING: Removing unreachable block (ram,0x016ccd84) */
/* WARNING: Removing unreachable block (ram,0x016ccdb0) */
/* WARNING: Removing unreachable block (ram,0x016ccd88) */
/* WARNING: Removing unreachable block (ram,0x016ccd34) */
/* WARNING: Removing unreachable block (ram,0x016cccbc) */
/* WARNING: Removing unreachable block (ram,0x016cccc4) */
/* WARNING: Removing unreachable block (ram,0x016cccec) */
/* WARNING: Removing unreachable block (ram,0x016ccccc) */
/* WARNING: Removing unreachable block (ram,0x016cccf0) */
/* WARNING: Removing unreachable block (ram,0x016cccd8) */
/* WARNING: Removing unreachable block (ram,0x016ccc34) */
/* WARNING: Removing unreachable block (ram,0x016ccc3c) */
/* WARNING: Removing unreachable block (ram,0x016ccc44) */
/* WARNING: Removing unreachable block (ram,0x016ccc90) */
/* WARNING: Removing unreachable block (ram,0x016ccc68) */
/* WARNING: Removing unreachable block (ram,0x016ccc94) */
/* WARNING: Removing unreachable block (ram,0x016ccc70) */
/* WARNING: Removing unreachable block (ram,0x016ccba4) */
/* WARNING: Removing unreachable block (ram,0x016ccbac) */
/* WARNING: Removing unreachable block (ram,0x016ccbb4) */
/* WARNING: Removing unreachable block (ram,0x016ccc00) */
/* WARNING: Removing unreachable block (ram,0x016ccbd8) */
/* WARNING: Removing unreachable block (ram,0x016ccc04) */
/* WARNING: Removing unreachable block (ram,0x016ccbe0) */
/* WARNING: Removing unreachable block (ram,0x016cde00) */
/* WARNING: Removing unreachable block (ram,0x016cdda4) */
/* WARNING: Removing unreachable block (ram,0x016cdd48) */
/* WARNING: Removing unreachable block (ram,0x016cdcec) */
/* WARNING: Removing unreachable block (ram,0x016cdc90) */
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
/* WARNING: Removing unreachable block (ram,0x016cdc34) */
/* WARNING: Removing unreachable block (ram,0x016cc834) */
/* WARNING: Removing unreachable block (ram,0x016cc83c) */
/* WARNING: Removing unreachable block (ram,0x016cc868) */
/* WARNING: Removing unreachable block (ram,0x016cc844) */
/* WARNING: Removing unreachable block (ram,0x016cc86c) */
/* WARNING: Removing unreachable block (ram,0x016cc850) */
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
/* WARNING: Removing unreachable block (ram,0x016ce188) */
/* WARNING: Removing unreachable block (ram,0x0165596c) */
/* WARNING: Removing unreachable block (ram,0x016ce224) */
/* WARNING: Removing unreachable block (ram,0x016558a8) */
/* WARNING: Removing unreachable block (ram,0x016558b4) */
/* WARNING: Removing unreachable block (ram,0x016558bc) */
/* WARNING: Removing unreachable block (ram,0x016558d8) */
/* WARNING: Removing unreachable block (ram,0x016558e4) */
/* WARNING: Removing unreachable block (ram,0x016558f0) */
/* WARNING: Removing unreachable block (ram,0x016ce46c) */
/* WARNING: Removing unreachable block (ram,0x016ce3a4) */
/* WARNING: Removing unreachable block (ram,0x016ce3a8) */
/* WARNING: Removing unreachable block (ram,0x016ce3b4) */
/* WARNING: Removing unreachable block (ram,0x016ce320) */
/* WARNING: Removing unreachable block (ram,0x016ced00) */
/* WARNING: Removing unreachable block (ram,0x016ced04) */
/* WARNING: Removing unreachable block (ram,0x016ced10) */
/* WARNING: Removing unreachable block (ram,0x016ced20) */
/* WARNING: Removing unreachable block (ram,0x016ced28) */
/* WARNING: Removing unreachable block (ram,0x016cef64) */
/* WARNING: Removing unreachable block (ram,0x016cef48) */
/* WARNING: Removing unreachable block (ram,0x016cef70) */
/* WARNING: Removing unreachable block (ram,0x016cef78) */
/* WARNING: Removing unreachable block (ram,0x016cef10) */
/* WARNING: Removing unreachable block (ram,0x016cef24) */
/* WARNING: Removing unreachable block (ram,0x016cef2c) */
/* WARNING: Removing unreachable block (ram,0x016cee20) */
/* WARNING: Removing unreachable block (ram,0x016cee2c) */
/* WARNING: Removing unreachable block (ram,0x016cee44) */
/* WARNING: Removing unreachable block (ram,0x016ced60) */
/* WARNING: Removing unreachable block (ram,0x016cec30) */
/* WARNING: Removing unreachable block (ram,0x016cec38) */
/* WARNING: Removing unreachable block (ram,0x016cec44) */
/* WARNING: Removing unreachable block (ram,0x016cebe8) */
/* WARNING: Removing unreachable block (ram,0x016cec48) */
/* WARNING: Removing unreachable block (ram,0x016cebf0) */
/* WARNING: Removing unreachable block (ram,0x016cec64) */
/* WARNING: Removing unreachable block (ram,0x016cec6c) */
/* WARNING: Removing unreachable block (ram,0x016cec78) */
/* WARNING: Removing unreachable block (ram,0x016ceca8) */
/* WARNING: Removing unreachable block (ram,0x016cec84) */
/* WARNING: Removing unreachable block (ram,0x016cec8c) */
/* WARNING: Removing unreachable block (ram,0x016cec94) */
/* WARNING: Removing unreachable block (ram,0x016ced3c) */
/* WARNING: Removing unreachable block (ram,0x016cc4e0) */
/* WARNING: Removing unreachable block (ram,0x016cc518) */
/* WARNING: Removing unreachable block (ram,0x016cc52c) */
/* WARNING: Removing unreachable block (ram,0x016cc538) */
/* WARNING: Removing unreachable block (ram,0x016cc540) */
/* WARNING: Removing unreachable block (ram,0x016cc548) */
/* WARNING: Removing unreachable block (ram,0x016cc5b8) */
/* WARNING: Removing unreachable block (ram,0x016cc5c0) */
/* WARNING: Removing unreachable block (ram,0x016cc5d4) */
/* WARNING: Removing unreachable block (ram,0x016cc5dc) */
/* WARNING: Removing unreachable block (ram,0x016cc5e4) */
/* WARNING: Removing unreachable block (ram,0x016cc5f0) */
/* WARNING: Removing unreachable block (ram,0x016cc554) */
/* WARNING: Removing unreachable block (ram,0x016cc55c) */
/* WARNING: Removing unreachable block (ram,0x016cc574) */
/* WARNING: Removing unreachable block (ram,0x016cc57c) */
/* WARNING: Removing unreachable block (ram,0x016cc624) */
/* WARNING: Removing unreachable block (ram,0x016cc584) */
/* WARNING: Removing unreachable block (ram,0x016cc628) */
/* WARNING: Removing unreachable block (ram,0x016cc590) */
/* WARNING: Removing unreachable block (ram,0x016cc5b4) */
/* WARNING: Removing unreachable block (ram,0x016cc610) */
/* WARNING: Removing unreachable block (ram,0x016cebfc) */
/* WARNING: Removing unreachable block (ram,0x016cec00) */
/* WARNING: Removing unreachable block (ram,0x016cec08) */
/* WARNING: Removing unreachable block (ram,0x016cec20) */
/* WARNING: Removing unreachable block (ram,0x016ceb78) */
/* WARNING: Removing unreachable block (ram,0x016cec58) */
/* WARNING: Removing unreachable block (ram,0x016cecac) */
/* WARNING: Removing unreachable block (ram,0x016cecb8) */
/* WARNING: Removing unreachable block (ram,0x016cecd8) */
/* WARNING: Removing unreachable block (ram,0x016cecf0) */
/* WARNING: Removing unreachable block (ram,0x016cec60) */
/* WARNING: Removing unreachable block (ram,0x016ceb84) */
/* WARNING: Removing unreachable block (ram,0x016ceb88) */
/* WARNING: Removing unreachable block (ram,0x016ceb90) */
/* WARNING: Removing unreachable block (ram,0x016ceb98) */
/* WARNING: Removing unreachable block (ram,0x016ceba0) */
/* WARNING: Removing unreachable block (ram,0x016cebac) */
/* WARNING: Removing unreachable block (ram,0x016cebd8) */
/* WARNING: Removing unreachable block (ram,0x016ceb54) */
/* WARNING: Removing unreachable block (ram,0x016ceb08) */
/* WARNING: Removing unreachable block (ram,0x016ceb10) */
/* WARNING: Removing unreachable block (ram,0x016ceb1c) */
/* WARNING: Removing unreachable block (ram,0x016ceb2c) */
/* WARNING: Removing unreachable block (ram,0x016cea8c) */
/* WARNING: Removing unreachable block (ram,0x016cea9c) */
/* WARNING: Removing unreachable block (ram,0x016ceaa0) */
/* WARNING: Removing unreachable block (ram,0x016ceb30) */
/* WARNING: Removing unreachable block (ram,0x016ceaa8) */
/* WARNING: Removing unreachable block (ram,0x016ced84) */
/* WARNING: Removing unreachable block (ram,0x016ceab0) */
/* WARNING: Removing unreachable block (ram,0x016ceabc) */
/* WARNING: Removing unreachable block (ram,0x016ceac8) */
/* WARNING: Removing unreachable block (ram,0x016ceacc) */
/* WARNING: Removing unreachable block (ram,0x016ced88) */
/* WARNING: Removing unreachable block (ram,0x016ceadc) */
/* WARNING: Removing unreachable block (ram,0x016ceae8) */
/* WARNING: Removing unreachable block (ram,0x016cea78) */
/* WARNING: Removing unreachable block (ram,0x01655ab8) */
/* WARNING: Removing unreachable block (ram,0x016ce20c) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_HostEventResults__EndHostEventResults
                (long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 *puVar7;
  undefined8 ******ppppppuVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 *****pppppuVar15;
  undefined8 ****ppppuVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  ulong uVar20;
  int iVar21;
  ulong uVar22;
  undefined *puVar23;
  long lVar24;
  ulong unaff_x21;
  ulong uVar25;
  ulong unaff_x22;
  ulong uVar26;
  undefined1 *puVar27;
  undefined8 ******ppppppuVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [12];
  undefined8 *****pppppuStack_e0;
  undefined *puStack_d8;
  undefined8 ****appppuStack_b0 [2];
  undefined *puStack_98;
  undefined8 *****pppppuStack_70;
  undefined *puStack_68;
  
  auVar33._8_8_ = param_1;
  auVar33._0_8_ = param_1;
  if ((bRam0000000003eb57fb & 1) == 0) {
    func_0x00f78a20(0x3d3f0e8);
    bRam0000000003eb57fb = 1;
  }
  if (param_1 == 0) {
    puVar30 = (undefined *)func_0x00f78af4();
    if (puVar30 != (undefined *)0x0) {
      ppppppuVar8 = (undefined8 ******)&stack0xffffffffffffffb0;
      puVar27 = &stack0xffffffffffffffd0;
      if ((bRam0000000003eb5cd7 & 1) == 0) {
        func_0x00f78a20(0x3d1f100,2,0);
        bRam0000000003eb5cd7 = 1;
      }
      /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(puVar30);
      if (*(long *)(puVar30 + 0x28) == 0) {
        auVar34 = func_0x00f78af4();
        puVar23 = auVar34._0_8_;
        ppppppuVar8 = &pppppuStack_70;
        pppppuStack_70 = (undefined8 *****)((long)&MACH_HEADER.magic + 2);
        puVar27 = &stack0xffffffffffffffa0;
        puStack_68 = puVar30;
        if (*(int *)(puVar23 + 0x30) <= auVar34._8_4_) {
          func_0x00f78a24(0x3d22738);
          uVar14 = func_0x00f78aec();
          uVar17 = func_0x00f78a24(0x3d6ceb8);
          unaff_x21 = 0;
          /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar14,uVar17);
          uVar17 = func_0x00f78a24(0x3d56a58);
          func_0x00f78ac0(uVar14,uVar17);
          func_0x00f78af4();
          uVar14 = func_0x00f78b24();
          auVar33 = func_0x00f78ac0(uVar14,0);
          uVar25 = auVar33._0_8_;
          puStack_98 = (undefined *)0x3eb5000;
          puVar27 = &stack0xffffffffffffff80;
          if (((int)unaff_x21 == param_4) && (*(char *)(uVar25 + 0x48) == '\0')) {
            return uVar25;
          }
          uVar20 = 1;
          uVar22 = 0;
          puVar30 = &UNK_016ce46c;
          puVar9 = &stack0xffffffffffffff60;
          goto code_r0x016cdaac;
        }
        puVar29 = &UNK_016ce3a4;
      }
      else {
        if (*(int *)(*(long *)(puVar30 + 0x28) + 0x18) < 2) {
          uVar14 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,2);
          *(undefined8 *)(puVar30 + 0x28) = uVar14;
        }
        *(undefined4 *)(puVar30 + 0x30) = 2;
        puVar29 = &UNK_016ce320;
        puVar23 = puVar30;
      }
      *(undefined1 **)((long)ppppppuVar8 + -0x10) = puVar27;
      *(undefined **)((long)ppppppuVar8 + -8) = puVar29;
      if ((*(long *)(puVar23 + 0x18) != 0) &&
         (lVar19 = *(long *)(*(long *)(puVar23 + 0x18) + 0x10), lVar19 != 0)) {
        return (ulong)(uint)(*(int *)(lVar19 + 0x18) - *(int *)(puVar23 + 0x10));
      }
      lVar19 = func_0x00f78af4();
      return (ulong)*(byte *)(lVar19 + 0x48);
    }
    auVar31 = func_0x00f78af4();
    lVar19 = auVar31._0_8_;
    if ((auVar31._8_8_ == 0) || (lVar19 == 0)) {
      auVar31 = func_0x00f78af4();
      lVar24 = auVar31._8_8_;
      lVar19 = auVar31._0_8_;
      puVar9 = &stack0xffffffffffffff70;
      puStack_68 = &Core_Networking_HostEventResults__CreateRoundScoresVectorBlock;
      ppppppuVar28 = &pppppuStack_70;
      unaff_x21 = 0x3eb5000;
      pppppuStack_70 = (undefined8 *****)&stack0xffffffffffffffc0;
      if ((bRam0000000003eb57f9 & 1) == 0) {
        func_0x00f78a20(0x3d569a0);
        bRam0000000003eb57f9 = 1;
      }
      if ((lVar24 == 0) || (lVar19 == 0)) {
        puVar30 = &Core_Networking_HostEventResults__StartRoundScoresVector;
        auVar34 = func_0x00f78af4();
        iVar21 = auVar34._8_4_;
        auVar31._8_8_ = lVar24;
        auVar31._0_8_ = auVar34._0_8_;
        if (auVar34._0_8_ == 0) {
          puStack_98 = &Core_Networking_HostEventResults__StartRoundScoresVector;
          auVar31 = func_0x00f78af4();
          lVar19 = auVar31._0_8_;
          appppuStack_b0[1] =
               (undefined8 ****)&Core_Networking_HostEventResults__CreateStandingsVector;
          if ((auVar31._8_8_ == 0) || (lVar19 == 0)) {
            appppuStack_b0[0] = (undefined8 ****)&stack0xffffffffffffff60;
            auVar31 = func_0x00f78af4();
            lVar24 = auVar31._8_8_;
            lVar19 = auVar31._0_8_;
            puVar9 = &stack0xffffffffffffff00;
            puStack_d8 = &Core_Networking_HostEventResults__CreateStandingsVectorBlock;
            ppppppuVar28 = &pppppuStack_e0;
            unaff_x21 = 0x3eb5000;
            pppppuStack_e0 = appppuStack_b0;
            if ((bRam0000000003eb57fa & 1) == 0) {
              func_0x00f78a20(0x3d56998);
              bRam0000000003eb57fa = 1;
            }
            if ((lVar24 == 0) || (lVar19 == 0)) {
              puVar30 = &Core_Networking_HostEventResults__StartStandingsVector;
              auVar34 = func_0x00f78af4();
              iVar21 = auVar34._8_4_;
              auVar31._8_8_ = lVar24;
              auVar31._0_8_ = auVar34._0_8_;
              if (auVar34._0_8_ == 0) {
                lVar19 = func_0x00f78af4();
                return *(ulong *)(lVar19 + 8);
              }
            }
            else {
              unaff_x21 = 0x3d56000;
              iVar21 = *(int *)(lVar24 + 0x18);
              puVar30 = &UNK_01655ab8;
              puVar9 = &stack0xffffffffffffff00;
            }
          }
          else {
            iVar21 = *(int *)(auVar31._8_8_ + 0x18);
            puVar30 = &UNK_016559f4;
            puVar9 = &stack0xffffffffffffff30;
            ppppppuVar28 = (undefined8 ******)appppuStack_b0;
            appppuStack_b0[0] = (undefined8 ****)&stack0xffffffffffffff60;
          }
        }
      }
      else {
        unaff_x21 = 0x3d56000;
        iVar21 = *(int *)(lVar24 + 0x18);
        puVar30 = &UNK_0165596c;
        puVar9 = &stack0xffffffffffffff70;
      }
    }
    else {
      iVar21 = *(int *)(auVar31._8_8_ + 0x18);
      puVar30 = &UNK_016558a8;
      puVar9 = &stack0xffffffffffffffa0;
      ppppppuVar28 = (undefined8 ******)&stack0xffffffffffffffc0;
    }
    uVar26 = auVar31._0_8_;
    *(ulong *)(puVar9 + -0x30) = unaff_x22;
    *(ulong *)(puVar9 + -0x28) = unaff_x21;
    *(long *)(puVar9 + -0x20) = auVar31._8_8_;
    *(long *)(puVar9 + -0x18) = lVar19;
    *(undefined8 *******)(puVar9 + -0x10) = ppppppuVar28;
    *(undefined **)(puVar9 + -8) = puVar30;
    puVar27 = puVar9 + -0x10;
    auVar33._8_8_ = 4;
    auVar33._0_8_ = uVar26;
    unaff_x21 = 4;
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4();
    *(int *)(uVar26 + 0x44) = iVar21;
    uVar22 = (ulong)(uint)(iVar21 * 4);
    uVar20 = 4;
    puVar30 = &UNK_016ce188;
    puVar9 = puVar9 + -0x30;
    uVar25 = uVar22;
    unaff_x22 = uVar26;
  }
  else {
    puVar27 = &stack0xfffffffffffffff0;
    if ((bRam0000000003eb5cd8 & 1) == 0) {
      func_0x00f78a20(0x3d1f100,0);
      bRam0000000003eb5cd8 = 1;
    }
    if (*(int *)(param_1 + 0x30) < 0) {
      func_0x00f78a24(0x3d22a38);
      puVar30 = (undefined *)func_0x00f78aec();
      uVar14 = func_0x00f78a24(0x3d6cea8);
      puVar23 = (undefined *)0x0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(puVar30,uVar14);
      uVar14 = func_0x00f78a24(0x3d56a30);
      auVar34 = func_0x00f78ac0(puVar30,uVar14);
      pppppuVar15 = auVar34._0_8_;
      pppppuStack_70 = (undefined8 ******)0x3eb5000;
      puVar27 = &stack0xffffffffffffffa0;
      ppppuVar16 = pppppuVar15[3];
      puStack_68 = puVar30;
      if ((ppppuVar16 != (undefined8 ****)0x0) && (ppppuVar16[2] != (undefined8 ***)0x0)) {
        uVar4 = *(int *)(ppppuVar16[2] + 3) - auVar34._8_4_;
        uVar25 = (ulong)uVar4;
        auVar32._8_4_ = uVar4;
        auVar32._0_8_ = ppppuVar16;
        auVar32._12_4_ = 0;
        puVar7 = &stack0xffffffffffffff30;
        puStack_98 = &UNK_016cee20;
        puVar27 = &stack0xffffffffffffff60;
        auVar6._8_8_ = 4;
        auVar6._0_8_ = ppppuVar16;
        uVar26 = 0x3d201a0;
        appppuStack_b0[0] = pppppuVar15;
        appppuStack_b0[1] = (undefined8 ****)puVar23;
        if ((bRam0000000003eb5cd0 & 1) == 0) {
          func_0x00f78a20(0x3d201a0);
          bRam0000000003eb5cd0 = 1;
        }
        uVar20 = 4;
        puVar30 = &UNK_016cc68c;
        goto code_r0x016cc7a4;
      }
      func_0x00f78af4();
      uVar14 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&stack0xffffffffffffff7c,0);
      uVar17 = func_0x00f78a24(0x3d6ce88);
      uVar18 = func_0x00f78a24(0x3d66338);
      lVar19 = /*System.String$$Concat*/ func_0x029be39c(uVar17,uVar14,uVar18,0);
      func_0x00f78a24(0x3d22a38);
      uVar20 = func_0x00f78aec();
      uVar17 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar20,lVar19);
      uVar14 = func_0x00f78a24(0x3d56a50);
      puVar30 = &FlatBuffers_FlatBufferBuilder__Finish;
      auVar33 = func_0x00f78ac0(uVar20,uVar14);
      puVar9 = &stack0xffffffffffffff70;
      while( true ) {
        uVar25 = auVar33._8_8_;
        lVar24 = auVar33._0_8_;
        auVar33._8_8_ = lVar24;
        auVar33._0_8_ = lVar24;
        *(ulong *)(puVar9 + -0x20) = uVar20;
        *(long *)(puVar9 + -0x18) = lVar19;
        *(undefined1 **)(puVar9 + -0x10) = puVar27;
        *(undefined **)(puVar9 + -8) = puVar30;
        puVar27 = puVar9 + -0x10;
        uVar4 = *(uint *)(lVar24 + 0x20);
        uVar20 = (ulong)uVar4;
        lVar19 = lVar24;
        if ((int)uVar17 == 0) {
          lVar19 = 0;
          uVar4 = 0;
        }
        auVar5._8_8_ = lVar24;
        auVar5._0_8_ = lVar19;
        if ((int)uVar17 == 0) {
          uVar22 = 4;
          puVar30 = &UNK_016cef64;
          puVar9 = puVar9 + -0x20;
          goto code_r0x016cdaac;
        }
        if (lVar19 != 0) break;
        puVar30 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar33 = func_0x00f78af4();
        uVar17 = 0;
        puVar9 = puVar9 + -0x20;
        lVar19 = lVar24;
        uVar20 = uVar25;
      }
      uVar22 = 8;
      puVar30 = &UNK_016cef10;
      puVar9 = puVar9 + -0x20;
      uVar20 = (ulong)uVar4;
      auVar33 = auVar5;
    }
    else {
      uVar22 = 0;
      puVar30 = &UNK_016cea78;
      puVar9 = &stack0xffffffffffffffb0;
      uVar20 = 4;
      uVar25 = 0x3eb5000;
    }
  }
code_r0x016cdaac:
  do {
    uVar13 = auVar33._0_8_;
    puVar7 = puVar9 + -0x30;
    *(ulong *)(puVar9 + -0x30) = unaff_x22;
    *(ulong *)(puVar9 + -0x28) = unaff_x21;
    *(ulong *)(puVar9 + -0x20) = uVar25;
    *(long *)(puVar9 + -0x18) = auVar33._8_8_;
    *(undefined1 **)(puVar9 + -0x10) = puVar27;
    *(undefined **)(puVar9 + -8) = puVar30;
    iVar21 = (int)uVar20;
    if (*(int *)(uVar13 + 0x20) < iVar21) {
      *(int *)(uVar13 + 0x20) = iVar21;
    }
    uVar20 = uVar25;
    uVar26 = unaff_x22;
    if ((*(long *)(uVar13 + 0x18) != 0) &&
       (lVar19 = *(long *)(*(long *)(uVar13 + 0x18) + 0x10), lVar19 != 0)) {
      uVar2 = *(uint *)(lVar19 + 0x18);
      iVar3 = *(int *)(uVar13 + 0x10);
      uVar1 = iVar3 - (uVar2 + (int)uVar22) & iVar21 - 1U;
      uVar20 = CONCAT44(0,uVar1);
      uVar4 = (int)uVar22 + iVar21 + uVar1;
      uVar26 = (ulong)uVar4;
      uVar25 = uVar13;
      while (unaff_x21 = (ulong)uVar2, iVar3 < (int)uVar4) {
        uVar25 = /*FlatBuffers.FlatBufferBuilder$$GrowBuffer*/ func_0x016cda78(uVar13);
        if ((*(long *)(uVar13 + 0x18) == 0) ||
           (lVar19 = *(long *)(*(long *)(uVar13 + 0x18) + 0x10), lVar19 == 0))
        goto code_r0x016cdb68;
        iVar3 = *(int *)(uVar13 + 0x10) - uVar2;
        uVar2 = *(uint *)(lVar19 + 0x18);
        iVar3 = iVar3 + uVar2;
        *(int *)(uVar13 + 0x10) = iVar3;
      }
      if ((int)uVar1 < 1) {
        return uVar25;
      }
      uVar25 = *(ulong *)(puVar9 + -0x20);
      uVar14 = *(undefined8 *)(puVar9 + -0x18);
      unaff_x22 = *(ulong *)(puVar9 + -0x30);
      unaff_x21 = *(ulong *)(puVar9 + -0x28);
      *(undefined8 *)(puVar9 + -0x10) = *(undefined8 *)(puVar9 + -0x10);
      *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
      lVar19 = *(long *)(uVar13 + 0x18);
      auVar6._8_8_ = lVar19;
      auVar6._0_8_ = uVar20;
      uVar1 = *(int *)(uVar13 + 0x10) - uVar1;
      uVar26 = (ulong)uVar1;
      auVar32._8_4_ = uVar1;
      auVar32._0_8_ = lVar19;
      auVar32._12_4_ = 0;
      *(uint *)(uVar13 + 0x10) = uVar1;
      if (lVar19 != 0) {
        *(ulong *)(puVar9 + -0x30) = unaff_x22;
        *(ulong *)(puVar9 + -0x28) = unaff_x21;
        *(ulong *)(puVar9 + -0x20) = uVar25;
        *(undefined8 *)(puVar9 + -0x18) = uVar14;
        *(undefined8 *)(puVar9 + -0x10) = *(undefined8 *)(puVar9 + -0x10);
        *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
        puVar27 = puVar9 + -0x10;
        puVar30 = &UNK_016cc908;
        uVar25 = 0;
        goto code_r0x016cc7a4;
      }
      lVar19 = func_0x00f78af4();
      puVar27 = puVar9 + -0x20;
      *(undefined1 **)(puVar9 + -0x20) = puVar9 + -0x10;
      *(undefined **)(puVar9 + -0x18) = &FlatBuffers_FlatBufferBuilder__GrowBuffer;
      if ((*(long *)(lVar19 + 0x18) != 0) &&
         (plVar12 = *(long **)(*(long *)(lVar19 + 0x18) + 0x10), plVar12 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016cdaa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar25 = (**(code **)(*plVar12 + 0x178))
                           (plVar12,(int)plVar12[3] << 1,*(undefined8 *)(*plVar12 + 0x180));
        return uVar25;
      }
      puVar30 = &FlatBuffers_FlatBufferBuilder__Prep;
      auVar31 = func_0x00f78af4();
      uVar20 = auVar31._8_8_;
      auVar33._8_8_ = uVar14;
      auVar33._0_8_ = auVar31._0_8_;
      puVar9 = puVar9 + -0x20;
      goto code_r0x016cdaac;
    }
code_r0x016cdb68:
    auVar6._8_8_ = uVar20;
    auVar6._0_8_ = unaff_x21;
    auVar33 = func_0x00f78af4();
    uVar25 = auVar33._8_8_;
    lVar24 = auVar33._0_8_;
    *(undefined1 **)(puVar9 + -0x40) = puVar9 + -0x10;
    *(undefined **)(puVar9 + -0x38) = &FlatBuffers_FlatBufferBuilder__PutBool;
    lVar19 = *(long *)(lVar24 + 0x18);
    iVar21 = *(int *)(lVar24 + 0x10) + -1;
    *(int *)(lVar24 + 0x10) = iVar21;
    if (lVar19 != 0) {
      puVar10 = puVar9 + -0x30;
      uVar14 = *(undefined8 *)(puVar9 + -0x40);
      uVar17 = *(undefined8 *)(puVar9 + -0x38);
FlatBuffers_ByteBuffer__PutByte:
      auVar6._8_4_ = iVar21;
      auVar6._0_8_ = lVar19;
      auVar6._12_4_ = 0;
      auVar32._8_4_ = iVar21;
      auVar32._0_8_ = lVar19;
      auVar32._12_4_ = 0;
      puVar7 = puVar10 + -0x30;
      *(ulong *)(puVar10 + -0x30) = uVar26;
      *(ulong *)(puVar10 + -0x28) = unaff_x21;
      *(ulong *)(puVar10 + -0x20) = uVar20;
      *(ulong *)(puVar10 + -0x18) = uVar13;
      *(undefined8 *)(puVar10 + -0x10) = uVar14;
      *(undefined8 *)(puVar10 + -8) = uVar17;
      puVar27 = puVar10 + -0x10;
      uVar20 = 1;
      puVar30 = &UNK_016cc89c;
      goto code_r0x016cc7a4;
    }
    auVar33 = func_0x00f78af4();
    uVar22 = auVar33._8_8_;
    lVar19 = auVar33._0_8_;
    *(undefined1 **)(puVar9 + -0x50) = puVar9 + -0x40;
    *(undefined **)(puVar9 + -0x48) = &FlatBuffers_FlatBufferBuilder__PutSbyte;
    iVar21 = *(int *)(lVar19 + 0x10) + -1;
    auVar32._8_4_ = iVar21;
    auVar32._0_8_ = *(long *)(lVar19 + 0x18);
    auVar32._12_4_ = 0;
    *(int *)(lVar19 + 0x10) = iVar21;
    if (*(long *)(lVar19 + 0x18) != 0) {
      puVar11 = puVar9 + -0x40;
      puVar27 = *(undefined1 **)(puVar9 + -0x50);
      puVar30 = *(undefined **)(puVar9 + -0x48);
      uVar25 = uVar13;
      goto code_r0x016cc810;
    }
    auVar33 = func_0x00f78af4();
    uVar25 = auVar33._8_8_;
    lVar24 = auVar33._0_8_;
    *(undefined1 **)(puVar9 + -0x60) = puVar9 + -0x50;
    *(undefined **)(puVar9 + -0x58) = &FlatBuffers_FlatBufferBuilder__PutByte;
    lVar19 = *(long *)(lVar24 + 0x18);
    iVar21 = *(int *)(lVar24 + 0x10) + -1;
    *(int *)(lVar24 + 0x10) = iVar21;
    if (lVar19 != 0) {
      puVar10 = puVar9 + -0x50;
      uVar14 = *(undefined8 *)(puVar9 + -0x60);
      uVar17 = *(undefined8 *)(puVar9 + -0x58);
      goto FlatBuffers_ByteBuffer__PutByte;
    }
    auVar33 = func_0x00f78af4();
    uVar25 = auVar33._8_8_;
    lVar19 = auVar33._0_8_;
    puVar7 = puVar9 + -0x90;
    *(ulong *)(puVar9 + -0x90) = uVar26;
    *(ulong *)(puVar9 + -0x88) = unaff_x21;
    *(ulong *)(puVar9 + -0x80) = uVar20;
    *(ulong *)(puVar9 + -0x78) = uVar13;
    *(undefined1 **)(puVar9 + -0x70) = puVar9 + -0x60;
    *(undefined **)(puVar9 + -0x68) = &FlatBuffers_FlatBufferBuilder__PutShort;
    puVar27 = puVar9 + -0x70;
    lVar24 = *(long *)(lVar19 + 0x18);
    uVar4 = *(int *)(lVar19 + 0x10) - 2;
    auVar6._8_8_ = lVar24;
    auVar6._0_8_ = CONCAT44(0,uVar4);
    auVar32._8_4_ = uVar4;
    auVar32._0_8_ = lVar24;
    auVar32._12_4_ = 0;
    *(uint *)(lVar19 + 0x10) = uVar4;
    if (lVar24 != 0) {
      uVar20 = 2;
      puVar30 = &UNK_016cdc34;
      goto code_r0x016cc7a4;
    }
    auVar33 = func_0x00f78af4();
    uVar25 = auVar33._8_8_;
    lVar19 = auVar33._0_8_;
    puVar7 = puVar9 + -0xc0;
    *(ulong *)(puVar9 + -0xc0) = uVar26;
    *(ulong *)(puVar9 + -0xb8) = CONCAT44(0,uVar4);
    *(undefined8 *)(puVar9 + -0xb0) = 0;
    *(ulong *)(puVar9 + -0xa8) = uVar13;
    *(undefined1 **)(puVar9 + -0xa0) = puVar27;
    *(undefined **)(puVar9 + -0x98) = &FlatBuffers_FlatBufferBuilder__PutUshort;
    puVar27 = puVar9 + -0xa0;
    lVar24 = *(long *)(lVar19 + 0x18);
    uVar4 = *(int *)(lVar19 + 0x10) - 2;
    auVar6._8_8_ = lVar24;
    auVar6._0_8_ = CONCAT44(0,uVar4);
    auVar32._8_4_ = uVar4;
    auVar32._0_8_ = lVar24;
    auVar32._12_4_ = 0;
    *(uint *)(lVar19 + 0x10) = uVar4;
    if (lVar24 != 0) {
      uVar20 = 2;
      puVar30 = &UNK_016cdc90;
      goto code_r0x016cc7a4;
    }
    auVar33 = func_0x00f78af4();
    uVar25 = auVar33._8_8_;
    lVar19 = auVar33._0_8_;
    puVar7 = puVar9 + -0xf0;
    *(ulong *)(puVar9 + -0xf0) = uVar26;
    *(ulong *)(puVar9 + -0xe8) = CONCAT44(0,uVar4);
    *(undefined8 *)(puVar9 + -0xe0) = 0;
    *(ulong *)(puVar9 + -0xd8) = uVar13;
    *(undefined1 **)(puVar9 + -0xd0) = puVar27;
    *(undefined **)(puVar9 + -200) = &FlatBuffers_FlatBufferBuilder__PutInt;
    puVar27 = puVar9 + -0xd0;
    lVar24 = *(long *)(lVar19 + 0x18);
    uVar4 = *(int *)(lVar19 + 0x10) - 4;
    auVar6._8_8_ = lVar24;
    auVar6._0_8_ = CONCAT44(0,uVar4);
    auVar32._8_4_ = uVar4;
    auVar32._0_8_ = lVar24;
    auVar32._12_4_ = 0;
    *(uint *)(lVar19 + 0x10) = uVar4;
    if (lVar24 != 0) {
      uVar20 = 4;
      puVar30 = &UNK_016cdcec;
      goto code_r0x016cc7a4;
    }
    auVar33 = func_0x00f78af4();
    uVar25 = auVar33._8_8_;
    lVar19 = auVar33._0_8_;
    puVar7 = puVar9 + -0x120;
    *(ulong *)(puVar9 + -0x120) = uVar26;
    *(ulong *)(puVar9 + -0x118) = CONCAT44(0,uVar4);
    *(undefined8 *)(puVar9 + -0x110) = 0;
    *(ulong *)(puVar9 + -0x108) = uVar13;
    *(undefined1 **)(puVar9 + -0x100) = puVar27;
    *(undefined **)(puVar9 + -0xf8) = &FlatBuffers_FlatBufferBuilder__PutUint;
    puVar27 = puVar9 + -0x100;
    lVar24 = *(long *)(lVar19 + 0x18);
    uVar4 = *(int *)(lVar19 + 0x10) - 4;
    auVar6._8_8_ = lVar24;
    auVar6._0_8_ = CONCAT44(0,uVar4);
    auVar32._8_4_ = uVar4;
    auVar32._0_8_ = lVar24;
    auVar32._12_4_ = 0;
    *(uint *)(lVar19 + 0x10) = uVar4;
    if (lVar24 != 0) {
      uVar20 = 4;
      puVar30 = &UNK_016cdd48;
      goto code_r0x016cc7a4;
    }
    auVar33 = func_0x00f78af4();
    uVar25 = auVar33._8_8_;
    lVar19 = auVar33._0_8_;
    puVar7 = puVar9 + -0x150;
    *(ulong *)(puVar9 + -0x150) = uVar26;
    *(ulong *)(puVar9 + -0x148) = CONCAT44(0,uVar4);
    *(undefined8 *)(puVar9 + -0x140) = 0;
    *(ulong *)(puVar9 + -0x138) = uVar13;
    *(undefined1 **)(puVar9 + -0x130) = puVar27;
    *(undefined **)(puVar9 + -0x128) = &FlatBuffers_FlatBufferBuilder__PutLong;
    puVar27 = puVar9 + -0x130;
    lVar24 = *(long *)(lVar19 + 0x18);
    uVar4 = *(int *)(lVar19 + 0x10) - 8;
    auVar6._8_8_ = lVar24;
    auVar6._0_8_ = CONCAT44(0,uVar4);
    auVar32._8_4_ = uVar4;
    auVar32._0_8_ = lVar24;
    auVar32._12_4_ = 0;
    *(uint *)(lVar19 + 0x10) = uVar4;
    if (lVar24 != 0) {
      uVar20 = 8;
      puVar30 = &UNK_016cdda4;
      goto code_r0x016cc7a4;
    }
    auVar33 = func_0x00f78af4();
    uVar25 = auVar33._8_8_;
    lVar19 = auVar33._0_8_;
    puVar7 = puVar9 + -0x180;
    *(ulong *)(puVar9 + -0x180) = uVar26;
    *(ulong *)(puVar9 + -0x178) = CONCAT44(0,uVar4);
    *(undefined8 *)(puVar9 + -0x170) = 0;
    *(ulong *)(puVar9 + -0x168) = uVar13;
    *(undefined1 **)(puVar9 + -0x160) = puVar27;
    *(undefined **)(puVar9 + -0x158) = &FlatBuffers_FlatBufferBuilder__PutUlong;
    puVar27 = puVar9 + -0x160;
    lVar24 = *(long *)(lVar19 + 0x18);
    uVar4 = *(int *)(lVar19 + 0x10) - 8;
    unaff_x21 = CONCAT44(0,uVar4);
    auVar6._8_8_ = lVar24;
    auVar6._0_8_ = unaff_x21;
    auVar32._8_4_ = uVar4;
    auVar32._0_8_ = lVar24;
    auVar32._12_4_ = 0;
    *(uint *)(lVar19 + 0x10) = uVar4;
    if (lVar24 != 0) {
      uVar20 = 8;
      puVar30 = &UNK_016cde00;
      goto code_r0x016cc7a4;
    }
    lVar19 = func_0x00f78af4();
    *(undefined1 **)(puVar9 + -400) = puVar27;
    *(undefined **)(puVar9 + -0x188) = &FlatBuffers_FlatBufferBuilder__PutFloat;
    lVar24 = *(long *)(lVar19 + 0x18);
    auVar6._8_8_ = lVar24;
    uVar4 = *(int *)(lVar19 + 0x10) - 4;
    uVar25 = (ulong)uVar4;
    auVar32._8_4_ = uVar4;
    auVar32._0_8_ = lVar24;
    auVar32._12_4_ = 0;
    *(uint *)(lVar19 + 0x10) = uVar4;
    if (lVar24 != 0) {
      puVar7 = puVar9 + -0x1b0;
      *(undefined8 *)(puVar9 + -0x1b0) = unaff_d9;
      *(undefined8 *)(puVar9 + -0x1a8) = unaff_d8;
      *(undefined8 *)(puVar9 + -0x1a0) = 0;
      *(ulong *)(puVar9 + -0x198) = uVar13;
      *(undefined8 *)(puVar9 + -400) = *(undefined8 *)(puVar9 + -400);
      *(undefined8 *)(puVar9 + -0x188) = *(undefined8 *)(puVar9 + -0x188);
      puVar27 = puVar9 + -400;
      uVar20 = 4;
      puVar30 = &UNK_016ccba4;
      goto code_r0x016cc7a4;
    }
    lVar19 = func_0x00f78af4();
    *(undefined1 **)(puVar9 + -0x1a0) = puVar9 + -400;
    *(undefined **)(puVar9 + -0x198) = &FlatBuffers_FlatBufferBuilder__PutDouble;
    lVar24 = *(long *)(lVar19 + 0x18);
    auVar6._8_8_ = lVar24;
    uVar4 = *(int *)(lVar19 + 0x10) - 8;
    uVar25 = (ulong)uVar4;
    auVar32._8_4_ = uVar4;
    auVar32._0_8_ = lVar24;
    auVar32._12_4_ = 0;
    *(uint *)(lVar19 + 0x10) = uVar4;
    if (lVar24 != 0) break;
    auVar33 = func_0x00f78af4();
    uVar25 = auVar33._0_8_;
    *(undefined8 *)(puVar9 + -0x1c0) = 0;
    *(ulong *)(puVar9 + -0x1b8) = uVar13;
    *(undefined1 **)(puVar9 + -0x1b0) = puVar9 + -0x1a0;
    *(undefined **)(puVar9 + -0x1a8) = &FlatBuffers_FlatBufferBuilder__AddBool;
    puVar27 = puVar9 + -0x1b0;
    uVar20 = 1;
    uVar22 = 0;
    puVar30 = &UNK_016cde9c;
    puVar9 = puVar9 + -0x1c0;
    unaff_x22 = uVar26;
  } while( true );
  puVar7 = puVar9 + -0x1c0;
  *(undefined8 *)(puVar9 + -0x1c0) = unaff_d9;
  *(undefined8 *)(puVar9 + -0x1b8) = unaff_d8;
  *(undefined8 *)(puVar9 + -0x1b0) = 0;
  *(ulong *)(puVar9 + -0x1a8) = uVar13;
  *(undefined8 *)(puVar9 + -0x1a0) = *(undefined8 *)(puVar9 + -0x1a0);
  *(undefined8 *)(puVar9 + -0x198) = *(undefined8 *)(puVar9 + -0x198);
  puVar27 = puVar9 + -0x1a0;
  uVar20 = 8;
  puVar30 = &UNK_016ccc34;
code_r0x016cc7a4:
  do {
    puVar11 = puVar7 + -0x20;
    *(long *)(puVar7 + -0x20) = auVar6._8_8_;
    *(ulong *)(puVar7 + -0x18) = uVar25;
    *(undefined1 **)(puVar7 + -0x10) = puVar27;
    *(undefined **)(puVar7 + -8) = puVar30;
    puVar27 = puVar7 + -0x10;
    if (auVar32._8_4_ < 0) {
code_r0x016cc7d8:
      func_0x00f78a24(0x3d1fcf8);
      uVar25 = func_0x00f78aec();
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a4d0(uVar25,0);
      uVar14 = func_0x00f78a24(0x3d52ce8);
      func_0x00f78ac0(uVar25,uVar14);
      uVar22 = uVar20;
    }
    else {
      lVar19 = *(long *)(auVar32._0_8_ + 0x10);
      uVar22 = uVar20;
      if (lVar19 != 0) {
        if (auVar32._8_4_ <= *(int *)(lVar19 + 0x18) - (int)uVar20) {
          return auVar32._0_8_;
        }
        goto code_r0x016cc7d8;
      }
    }
    puVar30 = &FlatBuffers_ByteBuffer__PutSbyte;
    auVar32 = func_0x00f78af4();
code_r0x016cc810:
    puVar7 = puVar11 + -0x30;
    *(ulong *)(puVar11 + -0x30) = uVar26;
    *(undefined1 (*) [16])(puVar11 + -0x28) = auVar6;
    *(ulong *)(puVar11 + -0x18) = uVar25;
    *(undefined1 **)(puVar11 + -0x10) = puVar27;
    *(undefined **)(puVar11 + -8) = puVar30;
    puVar27 = puVar11 + -0x10;
    uVar20 = 1;
    puVar30 = &UNK_016cc834;
    uVar25 = uVar22;
    auVar6 = auVar32;
  } while( true );
}



// ============================================================
// RVA: 0x1655854 | Core.Networking.HostEventResults.StartHostEventResults
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1655870 | Core.Networking.HostEventResults.CreateRoundScoresVector
// ============================================================

/* WARNING: Possible PIC construction at 0x016558a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01655968: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce184: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc904: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdc30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdc8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdce8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdd44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdda0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cddfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccc30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cccb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccd14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccdc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cde98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016559f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01655ab4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016559f4) */
/* WARNING: Removing unreachable block (ram,0x01655a00) */
/* WARNING: Removing unreachable block (ram,0x01655a08) */
/* WARNING: Removing unreachable block (ram,0x01655a24) */
/* WARNING: Removing unreachable block (ram,0x01655a30) */
/* WARNING: Removing unreachable block (ram,0x01655a3c) */
/* WARNING: Removing unreachable block (ram,0x016cde9c) */
/* WARNING: Removing unreachable block (ram,0x016ccdc4) */
/* WARNING: Removing unreachable block (ram,0x016ccd18) */
/* WARNING: Removing unreachable block (ram,0x016ccd20) */
/* WARNING: Removing unreachable block (ram,0x016ccd48) */
/* WARNING: Removing unreachable block (ram,0x016ccd28) */
/* WARNING: Removing unreachable block (ram,0x016ccd4c) */
/* WARNING: Removing unreachable block (ram,0x016ccd84) */
/* WARNING: Removing unreachable block (ram,0x016ccdb0) */
/* WARNING: Removing unreachable block (ram,0x016ccd88) */
/* WARNING: Removing unreachable block (ram,0x016ccd34) */
/* WARNING: Removing unreachable block (ram,0x016cccbc) */
/* WARNING: Removing unreachable block (ram,0x016cccc4) */
/* WARNING: Removing unreachable block (ram,0x016cccec) */
/* WARNING: Removing unreachable block (ram,0x016ccccc) */
/* WARNING: Removing unreachable block (ram,0x016cccf0) */
/* WARNING: Removing unreachable block (ram,0x016cccd8) */
/* WARNING: Removing unreachable block (ram,0x016ccc34) */
/* WARNING: Removing unreachable block (ram,0x016ccc3c) */
/* WARNING: Removing unreachable block (ram,0x016ccc44) */
/* WARNING: Removing unreachable block (ram,0x016ccc90) */
/* WARNING: Removing unreachable block (ram,0x016ccc68) */
/* WARNING: Removing unreachable block (ram,0x016ccc94) */
/* WARNING: Removing unreachable block (ram,0x016ccc70) */
/* WARNING: Removing unreachable block (ram,0x016ccba4) */
/* WARNING: Removing unreachable block (ram,0x016ccbac) */
/* WARNING: Removing unreachable block (ram,0x016ccbb4) */
/* WARNING: Removing unreachable block (ram,0x016ccc00) */
/* WARNING: Removing unreachable block (ram,0x016ccbd8) */
/* WARNING: Removing unreachable block (ram,0x016ccc04) */
/* WARNING: Removing unreachable block (ram,0x016ccbe0) */
/* WARNING: Removing unreachable block (ram,0x016cde00) */
/* WARNING: Removing unreachable block (ram,0x016cdda4) */
/* WARNING: Removing unreachable block (ram,0x016cdd48) */
/* WARNING: Removing unreachable block (ram,0x016cdcec) */
/* WARNING: Removing unreachable block (ram,0x016cdc90) */
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
/* WARNING: Removing unreachable block (ram,0x016cdc34) */
/* WARNING: Removing unreachable block (ram,0x016cc4e0) */
/* WARNING: Removing unreachable block (ram,0x016cc518) */
/* WARNING: Removing unreachable block (ram,0x016cc52c) */
/* WARNING: Removing unreachable block (ram,0x016cc538) */
/* WARNING: Removing unreachable block (ram,0x016cc540) */
/* WARNING: Removing unreachable block (ram,0x016cc548) */
/* WARNING: Removing unreachable block (ram,0x016cc5b8) */
/* WARNING: Removing unreachable block (ram,0x016cc5c0) */
/* WARNING: Removing unreachable block (ram,0x016cc5d4) */
/* WARNING: Removing unreachable block (ram,0x016cc5dc) */
/* WARNING: Removing unreachable block (ram,0x016cc5e4) */
/* WARNING: Removing unreachable block (ram,0x016cc5f0) */
/* WARNING: Removing unreachable block (ram,0x016cc554) */
/* WARNING: Removing unreachable block (ram,0x016cc55c) */
/* WARNING: Removing unreachable block (ram,0x016cc574) */
/* WARNING: Removing unreachable block (ram,0x016cc57c) */
/* WARNING: Removing unreachable block (ram,0x016cc624) */
/* WARNING: Removing unreachable block (ram,0x016cc584) */
/* WARNING: Removing unreachable block (ram,0x016cc628) */
/* WARNING: Removing unreachable block (ram,0x016cc634) */
/* WARNING: Removing unreachable block (ram,0x016cc668) */
/* WARNING: Removing unreachable block (ram,0x016cc67c) */
/* WARNING: Removing unreachable block (ram,0x016cc590) */
/* WARNING: Removing unreachable block (ram,0x016cc5b4) */
/* WARNING: Removing unreachable block (ram,0x016cc610) */
/* WARNING: Removing unreachable block (ram,0x016cc834) */
/* WARNING: Removing unreachable block (ram,0x016cc83c) */
/* WARNING: Removing unreachable block (ram,0x016cc868) */
/* WARNING: Removing unreachable block (ram,0x016cc844) */
/* WARNING: Removing unreachable block (ram,0x016cc86c) */
/* WARNING: Removing unreachable block (ram,0x016cc850) */
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
/* WARNING: Removing unreachable block (ram,0x016ce188) */
/* WARNING: Removing unreachable block (ram,0x0165596c) */
/* WARNING: Removing unreachable block (ram,0x016ce224) */
/* WARNING: Removing unreachable block (ram,0x016cda04) */
/* WARNING: Removing unreachable block (ram,0x016cda14) */
/* WARNING: Removing unreachable block (ram,0x016cda30) */
/* WARNING: Removing unreachable block (ram,0x016cda1c) */
/* WARNING: Removing unreachable block (ram,0x016558a8) */
/* WARNING: Removing unreachable block (ram,0x016558b4) */
/* WARNING: Removing unreachable block (ram,0x016558bc) */
/* WARNING: Removing unreachable block (ram,0x016558d8) */
/* WARNING: Removing unreachable block (ram,0x016558e4) */
/* WARNING: Removing unreachable block (ram,0x016558f0) */
/* WARNING: Removing unreachable block (ram,0x01655ab8) */
/* WARNING: Removing unreachable block (ram,0x016ce20c) */

ulong Core_Networking_HostEventResults__CreateRoundScoresVector(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  undefined8 unaff_x21;
  ulong uVar19;
  undefined8 unaff_x22;
  ulong uVar20;
  undefined1 *puVar21;
  undefined8 ****ppppuVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [12];
  undefined8 ***pppuStack_b0;
  undefined *puStack_a8;
  undefined8 **ppuStack_80;
  undefined *puStack_78;
  undefined8 ***pppuStack_70;
  undefined *puStack_68;
  undefined8 ***pppuStack_40;
  undefined *puStack_38;
  
  auVar25._8_8_ = param_2;
  auVar25._0_8_ = param_1;
  if ((param_2 == 0) || (param_1 == 0)) {
    auVar25 = func_0x00f78af4();
    lVar15 = auVar25._8_8_;
    param_1 = auVar25._0_8_;
    puVar7 = &stack0xffffffffffffffa0;
    puStack_38 = &Core_Networking_HostEventResults__CreateRoundScoresVectorBlock;
    ppppuVar22 = &pppuStack_40;
    unaff_x21 = 0x3eb5000;
    pppuStack_40 = (undefined8 ***)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb57f9 & 1) == 0) {
      func_0x00f78a20(0x3d569a0);
      bRam0000000003eb57f9 = 1;
    }
    if ((lVar15 == 0) || (param_1 == 0)) {
      puVar23 = &Core_Networking_HostEventResults__StartRoundScoresVector;
      auVar29 = func_0x00f78af4();
      iVar14 = auVar29._8_4_;
      auVar25._8_8_ = lVar15;
      auVar25._0_8_ = auVar29._0_8_;
      if (auVar29._0_8_ == 0) {
        puStack_68 = &Core_Networking_HostEventResults__StartRoundScoresVector;
        pppuStack_70 = ppppuVar22;
        auVar25 = func_0x00f78af4();
        param_1 = auVar25._0_8_;
        puStack_78 = &Core_Networking_HostEventResults__CreateStandingsVector;
        if ((auVar25._8_8_ == 0) || (param_1 == 0)) {
          ppuStack_80 = &pppuStack_70;
          auVar25 = func_0x00f78af4();
          lVar15 = auVar25._8_8_;
          param_1 = auVar25._0_8_;
          puVar7 = &stack0xffffffffffffff30;
          puStack_a8 = &Core_Networking_HostEventResults__CreateStandingsVectorBlock;
          ppppuVar22 = &pppuStack_b0;
          unaff_x21 = 0x3eb5000;
          pppuStack_b0 = &ppuStack_80;
          if ((bRam0000000003eb57fa & 1) == 0) {
            func_0x00f78a20(0x3d56998);
            bRam0000000003eb57fa = 1;
          }
          if ((lVar15 == 0) || (param_1 == 0)) {
            puVar23 = &Core_Networking_HostEventResults__StartStandingsVector;
            auVar29 = func_0x00f78af4();
            iVar14 = auVar29._8_4_;
            auVar25._8_8_ = lVar15;
            auVar25._0_8_ = auVar29._0_8_;
            if (auVar29._0_8_ == 0) {
              lVar15 = func_0x00f78af4();
              return *(ulong *)(lVar15 + 8);
            }
          }
          else {
            unaff_x21 = 0x3d56000;
            iVar14 = *(int *)(lVar15 + 0x18);
            puVar23 = &UNK_01655ab8;
            puVar7 = &stack0xffffffffffffff30;
          }
        }
        else {
          iVar14 = *(int *)(auVar25._8_8_ + 0x18);
          puVar23 = &UNK_016559f4;
          puVar7 = &stack0xffffffffffffff60;
          ppppuVar22 = (undefined8 ****)&ppuStack_80;
          ppuStack_80 = &pppuStack_70;
        }
      }
    }
    else {
      unaff_x21 = 0x3d56000;
      iVar14 = *(int *)(lVar15 + 0x18);
      puVar23 = &UNK_0165596c;
      puVar7 = &stack0xffffffffffffffa0;
    }
  }
  else {
    iVar14 = *(int *)(param_2 + 0x18);
    puVar23 = (undefined *)0x16558a8;
    puVar7 = &stack0xffffffffffffffd0;
    ppppuVar22 = (undefined8 ****)&stack0xfffffffffffffff0;
  }
  uVar13 = auVar25._0_8_;
  uVar19 = 4;
  *(undefined8 *)(puVar7 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
  *(long *)(puVar7 + -0x20) = auVar25._8_8_;
  *(long *)(puVar7 + -0x18) = param_1;
  *(undefined8 *****)(puVar7 + -0x10) = ppppuVar22;
  *(undefined **)(puVar7 + -8) = puVar23;
  puVar21 = puVar7 + -0x10;
  /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4();
  *(int *)(uVar13 + 0x44) = iVar14;
  uVar18 = CONCAT44(0,iVar14 * 4);
  auVar28._8_8_ = 4;
  auVar28._0_8_ = uVar18;
  auVar27._8_8_ = 4;
  auVar27._0_8_ = uVar13;
  puVar23 = &UNK_016ce188;
  puVar7 = puVar7 + -0x30;
code_r0x016cdaac:
  while( true ) {
    uVar16 = auVar28._0_8_;
    uVar12 = auVar27._0_8_;
    puVar6 = puVar7 + -0x30;
    *(ulong *)(puVar7 + -0x30) = uVar13;
    *(ulong *)(puVar7 + -0x28) = uVar19;
    *(undefined1 (*) [16])(puVar7 + -0x20) = auVar28;
    *(undefined1 **)(puVar7 + -0x10) = puVar21;
    *(undefined **)(puVar7 + -8) = puVar23;
    iVar14 = auVar27._8_4_;
    if (*(int *)(uVar12 + 0x20) < iVar14) {
      *(int *)(uVar12 + 0x20) = iVar14;
    }
    uVar20 = uVar13;
    if ((*(long *)(uVar12 + 0x18) == 0) ||
       (lVar15 = *(long *)(*(long *)(uVar12 + 0x18) + 0x10), lVar15 == 0)) break;
    uVar3 = *(uint *)(lVar15 + 0x18);
    iVar4 = *(int *)(uVar12 + 0x10);
    uVar2 = iVar4 - (uVar3 + (int)uVar18) & iVar14 - 1U;
    uVar16 = CONCAT44(0,uVar2);
    uVar1 = (int)uVar18 + iVar14 + uVar2;
    uVar20 = (ulong)uVar1;
    uVar13 = uVar12;
    while (uVar19 = (ulong)uVar3, iVar4 < (int)uVar1) {
      uVar13 = /*FlatBuffers.FlatBufferBuilder$$GrowBuffer*/ func_0x016cda78(uVar12);
      if ((*(long *)(uVar12 + 0x18) == 0) ||
         (lVar15 = *(long *)(*(long *)(uVar12 + 0x18) + 0x10), lVar15 == 0)) goto code_r0x016cdb68;
      iVar4 = *(int *)(uVar12 + 0x10) - uVar3;
      uVar3 = *(uint *)(lVar15 + 0x18);
      iVar4 = iVar4 + uVar3;
      *(int *)(uVar12 + 0x10) = iVar4;
    }
    if ((int)uVar2 < 1) {
      return uVar13;
    }
    uVar10 = *(undefined8 *)*(undefined1 (*) [16])(puVar7 + -0x20);
    uVar24 = *(undefined8 *)(puVar7 + -0x18);
    auVar28 = *(undefined1 (*) [16])(puVar7 + -0x20);
    uVar13 = *(ulong *)(puVar7 + -0x30);
    uVar19 = *(ulong *)(puVar7 + -0x28);
    *(undefined8 *)(puVar7 + -0x10) = *(undefined8 *)(puVar7 + -0x10);
    *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
    lVar15 = *(long *)(uVar12 + 0x18);
    auVar5._8_8_ = lVar15;
    auVar5._0_8_ = uVar16;
    uVar2 = *(int *)(uVar12 + 0x10) - uVar2;
    uVar20 = (ulong)uVar2;
    auVar26._8_4_ = uVar2;
    auVar26._0_8_ = lVar15;
    auVar26._12_4_ = 0;
    *(uint *)(uVar12 + 0x10) = uVar2;
    if (lVar15 != 0) {
      *(ulong *)(puVar7 + -0x30) = uVar13;
      *(ulong *)(puVar7 + -0x28) = uVar19;
      *(undefined8 *)(puVar7 + -0x20) = uVar10;
      *(undefined8 *)(puVar7 + -0x18) = uVar24;
      *(undefined8 *)(puVar7 + -0x10) = *(undefined8 *)(puVar7 + -0x10);
      *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
      puVar21 = puVar7 + -0x10;
      puVar23 = &UNK_016cc908;
      uVar13 = 0;
      goto code_r0x016cc7a4;
    }
    lVar15 = func_0x00f78af4();
    puVar21 = puVar7 + -0x20;
    *(undefined1 **)(puVar7 + -0x20) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x18) = &FlatBuffers_FlatBufferBuilder__GrowBuffer;
    if ((*(long *)(lVar15 + 0x18) != 0) &&
       (plVar11 = *(long **)(*(long *)(lVar15 + 0x18) + 0x10), plVar11 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016cdaa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (**(code **)(*plVar11 + 0x178))
                         (plVar11,(int)plVar11[3] << 1,*(undefined8 *)(*plVar11 + 0x180));
      return uVar13;
    }
    puVar23 = &FlatBuffers_FlatBufferBuilder__Prep;
    auVar27 = func_0x00f78af4();
    puVar7 = puVar7 + -0x20;
  }
code_r0x016cdb68:
  auVar5._8_8_ = uVar16;
  auVar5._0_8_ = uVar19;
  auVar25 = func_0x00f78af4();
  uVar13 = auVar25._8_8_;
  lVar17 = auVar25._0_8_;
  *(undefined1 **)(puVar7 + -0x40) = puVar7 + -0x10;
  *(undefined **)(puVar7 + -0x38) = &FlatBuffers_FlatBufferBuilder__PutBool;
  lVar15 = *(long *)(lVar17 + 0x18);
  iVar14 = *(int *)(lVar17 + 0x10) + -1;
  *(int *)(lVar17 + 0x10) = iVar14;
  if (lVar15 == 0) {
    auVar25 = func_0x00f78af4();
    uVar18 = auVar25._8_8_;
    lVar15 = auVar25._0_8_;
    *(undefined1 **)(puVar7 + -0x50) = puVar7 + -0x40;
    *(undefined **)(puVar7 + -0x48) = &FlatBuffers_FlatBufferBuilder__PutSbyte;
    iVar14 = *(int *)(lVar15 + 0x10) + -1;
    auVar26._8_4_ = iVar14;
    auVar26._0_8_ = *(long *)(lVar15 + 0x18);
    auVar26._12_4_ = 0;
    *(int *)(lVar15 + 0x10) = iVar14;
    if (*(long *)(lVar15 + 0x18) != 0) {
      puVar9 = puVar7 + -0x40;
      puVar21 = *(undefined1 **)(puVar7 + -0x50);
      puVar23 = *(undefined **)(puVar7 + -0x48);
      uVar13 = uVar12;
      goto code_r0x016cc810;
    }
    auVar25 = func_0x00f78af4();
    uVar13 = auVar25._8_8_;
    lVar17 = auVar25._0_8_;
    *(undefined1 **)(puVar7 + -0x60) = puVar7 + -0x50;
    *(undefined **)(puVar7 + -0x58) = &FlatBuffers_FlatBufferBuilder__PutByte;
    lVar15 = *(long *)(lVar17 + 0x18);
    iVar14 = *(int *)(lVar17 + 0x10) + -1;
    *(int *)(lVar17 + 0x10) = iVar14;
    if (lVar15 == 0) {
      auVar25 = func_0x00f78af4();
      uVar13 = auVar25._8_8_;
      lVar15 = auVar25._0_8_;
      puVar6 = puVar7 + -0x90;
      *(ulong *)(puVar7 + -0x90) = uVar20;
      *(ulong *)(puVar7 + -0x88) = uVar19;
      *(ulong *)(puVar7 + -0x80) = uVar16;
      *(ulong *)(puVar7 + -0x78) = uVar12;
      *(undefined1 **)(puVar7 + -0x70) = puVar7 + -0x60;
      *(undefined **)(puVar7 + -0x68) = &FlatBuffers_FlatBufferBuilder__PutShort;
      puVar21 = puVar7 + -0x70;
      lVar17 = *(long *)(lVar15 + 0x18);
      uVar1 = *(int *)(lVar15 + 0x10) - 2;
      auVar5._8_8_ = lVar17;
      auVar5._0_8_ = CONCAT44(0,uVar1);
      auVar26._8_4_ = uVar1;
      auVar26._0_8_ = lVar17;
      auVar26._12_4_ = 0;
      *(uint *)(lVar15 + 0x10) = uVar1;
      if (lVar17 != 0) {
        uVar16 = 2;
        puVar23 = &UNK_016cdc34;
        goto code_r0x016cc7a4;
      }
      auVar25 = func_0x00f78af4();
      uVar13 = auVar25._8_8_;
      lVar15 = auVar25._0_8_;
      puVar6 = puVar7 + -0xc0;
      *(ulong *)(puVar7 + -0xc0) = uVar20;
      *(ulong *)(puVar7 + -0xb8) = CONCAT44(0,uVar1);
      *(undefined8 *)(puVar7 + -0xb0) = 0;
      *(ulong *)(puVar7 + -0xa8) = uVar12;
      *(undefined1 **)(puVar7 + -0xa0) = puVar21;
      *(undefined **)(puVar7 + -0x98) = &FlatBuffers_FlatBufferBuilder__PutUshort;
      puVar21 = puVar7 + -0xa0;
      lVar17 = *(long *)(lVar15 + 0x18);
      uVar1 = *(int *)(lVar15 + 0x10) - 2;
      auVar5._8_8_ = lVar17;
      auVar5._0_8_ = CONCAT44(0,uVar1);
      auVar26._8_4_ = uVar1;
      auVar26._0_8_ = lVar17;
      auVar26._12_4_ = 0;
      *(uint *)(lVar15 + 0x10) = uVar1;
      if (lVar17 != 0) {
        uVar16 = 2;
        puVar23 = &UNK_016cdc90;
        goto code_r0x016cc7a4;
      }
      auVar25 = func_0x00f78af4();
      uVar13 = auVar25._8_8_;
      lVar15 = auVar25._0_8_;
      puVar6 = puVar7 + -0xf0;
      *(ulong *)(puVar7 + -0xf0) = uVar20;
      *(ulong *)(puVar7 + -0xe8) = CONCAT44(0,uVar1);
      *(undefined8 *)(puVar7 + -0xe0) = 0;
      *(ulong *)(puVar7 + -0xd8) = uVar12;
      *(undefined1 **)(puVar7 + -0xd0) = puVar21;
      *(undefined **)(puVar7 + -200) = &FlatBuffers_FlatBufferBuilder__PutInt;
      puVar21 = puVar7 + -0xd0;
      lVar17 = *(long *)(lVar15 + 0x18);
      uVar1 = *(int *)(lVar15 + 0x10) - 4;
      auVar5._8_8_ = lVar17;
      auVar5._0_8_ = CONCAT44(0,uVar1);
      auVar26._8_4_ = uVar1;
      auVar26._0_8_ = lVar17;
      auVar26._12_4_ = 0;
      *(uint *)(lVar15 + 0x10) = uVar1;
      if (lVar17 != 0) {
        uVar16 = 4;
        puVar23 = &UNK_016cdcec;
        goto code_r0x016cc7a4;
      }
      auVar25 = func_0x00f78af4();
      uVar13 = auVar25._8_8_;
      lVar15 = auVar25._0_8_;
      puVar6 = puVar7 + -0x120;
      *(ulong *)(puVar7 + -0x120) = uVar20;
      *(ulong *)(puVar7 + -0x118) = CONCAT44(0,uVar1);
      *(undefined8 *)(puVar7 + -0x110) = 0;
      *(ulong *)(puVar7 + -0x108) = uVar12;
      *(undefined1 **)(puVar7 + -0x100) = puVar21;
      *(undefined **)(puVar7 + -0xf8) = &FlatBuffers_FlatBufferBuilder__PutUint;
      puVar21 = puVar7 + -0x100;
      lVar17 = *(long *)(lVar15 + 0x18);
      uVar1 = *(int *)(lVar15 + 0x10) - 4;
      auVar5._8_8_ = lVar17;
      auVar5._0_8_ = CONCAT44(0,uVar1);
      auVar26._8_4_ = uVar1;
      auVar26._0_8_ = lVar17;
      auVar26._12_4_ = 0;
      *(uint *)(lVar15 + 0x10) = uVar1;
      if (lVar17 != 0) {
        uVar16 = 4;
        puVar23 = &UNK_016cdd48;
        goto code_r0x016cc7a4;
      }
      auVar25 = func_0x00f78af4();
      uVar13 = auVar25._8_8_;
      lVar15 = auVar25._0_8_;
      puVar6 = puVar7 + -0x150;
      *(ulong *)(puVar7 + -0x150) = uVar20;
      *(ulong *)(puVar7 + -0x148) = CONCAT44(0,uVar1);
      *(undefined8 *)(puVar7 + -0x140) = 0;
      *(ulong *)(puVar7 + -0x138) = uVar12;
      *(undefined1 **)(puVar7 + -0x130) = puVar21;
      *(undefined **)(puVar7 + -0x128) = &FlatBuffers_FlatBufferBuilder__PutLong;
      puVar21 = puVar7 + -0x130;
      lVar17 = *(long *)(lVar15 + 0x18);
      uVar1 = *(int *)(lVar15 + 0x10) - 8;
      auVar5._8_8_ = lVar17;
      auVar5._0_8_ = CONCAT44(0,uVar1);
      auVar26._8_4_ = uVar1;
      auVar26._0_8_ = lVar17;
      auVar26._12_4_ = 0;
      *(uint *)(lVar15 + 0x10) = uVar1;
      if (lVar17 != 0) {
        uVar16 = 8;
        puVar23 = &UNK_016cdda4;
        goto code_r0x016cc7a4;
      }
      auVar25 = func_0x00f78af4();
      uVar13 = auVar25._8_8_;
      lVar15 = auVar25._0_8_;
      puVar6 = puVar7 + -0x180;
      *(ulong *)(puVar7 + -0x180) = uVar20;
      *(ulong *)(puVar7 + -0x178) = CONCAT44(0,uVar1);
      *(undefined8 *)(puVar7 + -0x170) = 0;
      *(ulong *)(puVar7 + -0x168) = uVar12;
      *(undefined1 **)(puVar7 + -0x160) = puVar21;
      *(undefined **)(puVar7 + -0x158) = &FlatBuffers_FlatBufferBuilder__PutUlong;
      puVar21 = puVar7 + -0x160;
      lVar17 = *(long *)(lVar15 + 0x18);
      uVar1 = *(int *)(lVar15 + 0x10) - 8;
      uVar19 = CONCAT44(0,uVar1);
      auVar5._8_8_ = lVar17;
      auVar5._0_8_ = uVar19;
      auVar26._8_4_ = uVar1;
      auVar26._0_8_ = lVar17;
      auVar26._12_4_ = 0;
      *(uint *)(lVar15 + 0x10) = uVar1;
      if (lVar17 != 0) {
        uVar16 = 8;
        puVar23 = &UNK_016cde00;
        goto code_r0x016cc7a4;
      }
      lVar15 = func_0x00f78af4();
      *(undefined1 **)(puVar7 + -400) = puVar21;
      *(undefined **)(puVar7 + -0x188) = &FlatBuffers_FlatBufferBuilder__PutFloat;
      lVar17 = *(long *)(lVar15 + 0x18);
      auVar5._8_8_ = lVar17;
      uVar1 = *(int *)(lVar15 + 0x10) - 4;
      uVar13 = (ulong)uVar1;
      auVar26._8_4_ = uVar1;
      auVar26._0_8_ = lVar17;
      auVar26._12_4_ = 0;
      *(uint *)(lVar15 + 0x10) = uVar1;
      if (lVar17 != 0) {
        puVar6 = puVar7 + -0x1b0;
        *(undefined8 *)(puVar7 + -0x1b0) = unaff_d9;
        *(undefined8 *)(puVar7 + -0x1a8) = unaff_d8;
        *(undefined8 *)(puVar7 + -0x1a0) = 0;
        *(ulong *)(puVar7 + -0x198) = uVar12;
        *(undefined8 *)(puVar7 + -400) = *(undefined8 *)(puVar7 + -400);
        *(undefined8 *)(puVar7 + -0x188) = *(undefined8 *)(puVar7 + -0x188);
        puVar21 = puVar7 + -400;
        uVar16 = 4;
        puVar23 = &UNK_016ccba4;
        goto code_r0x016cc7a4;
      }
      lVar15 = func_0x00f78af4();
      *(undefined1 **)(puVar7 + -0x1a0) = puVar7 + -400;
      *(undefined **)(puVar7 + -0x198) = &FlatBuffers_FlatBufferBuilder__PutDouble;
      lVar17 = *(long *)(lVar15 + 0x18);
      auVar5._8_8_ = lVar17;
      uVar1 = *(int *)(lVar15 + 0x10) - 8;
      uVar13 = (ulong)uVar1;
      auVar26._8_4_ = uVar1;
      auVar26._0_8_ = lVar17;
      auVar26._12_4_ = 0;
      *(uint *)(lVar15 + 0x10) = uVar1;
      if (lVar17 != 0) {
        puVar6 = puVar7 + -0x1c0;
        *(undefined8 *)(puVar7 + -0x1c0) = unaff_d9;
        *(undefined8 *)(puVar7 + -0x1b8) = unaff_d8;
        *(undefined8 *)(puVar7 + -0x1b0) = 0;
        *(ulong *)(puVar7 + -0x1a8) = uVar12;
        *(undefined8 *)(puVar7 + -0x1a0) = *(undefined8 *)(puVar7 + -0x1a0);
        *(undefined8 *)(puVar7 + -0x198) = *(undefined8 *)(puVar7 + -0x198);
        puVar21 = puVar7 + -0x1a0;
        uVar16 = 8;
        puVar23 = &UNK_016ccc34;
        goto code_r0x016cc7a4;
      }
      auVar28 = func_0x00f78af4();
      *(undefined8 *)(puVar7 + -0x1c0) = 0;
      *(ulong *)(puVar7 + -0x1b8) = uVar12;
      *(undefined1 **)(puVar7 + -0x1b0) = puVar7 + -0x1a0;
      *(undefined **)(puVar7 + -0x1a8) = &FlatBuffers_FlatBufferBuilder__AddBool;
      puVar21 = puVar7 + -0x1b0;
      auVar27._8_8_ = 1;
      auVar27._0_8_ = auVar28._0_8_;
      uVar18 = 0;
      puVar23 = &UNK_016cde9c;
      puVar7 = puVar7 + -0x1c0;
      uVar13 = uVar20;
      goto code_r0x016cdaac;
    }
    puVar8 = puVar7 + -0x50;
    uVar10 = *(undefined8 *)(puVar7 + -0x60);
    uVar24 = *(undefined8 *)(puVar7 + -0x58);
  }
  else {
    puVar8 = puVar7 + -0x30;
    uVar10 = *(undefined8 *)(puVar7 + -0x40);
    uVar24 = *(undefined8 *)(puVar7 + -0x38);
  }
  auVar5._8_4_ = iVar14;
  auVar5._0_8_ = lVar15;
  auVar5._12_4_ = 0;
  auVar26._8_4_ = iVar14;
  auVar26._0_8_ = lVar15;
  auVar26._12_4_ = 0;
  puVar6 = puVar8 + -0x30;
  *(ulong *)(puVar8 + -0x30) = uVar20;
  *(ulong *)(puVar8 + -0x28) = uVar19;
  *(ulong *)(puVar8 + -0x20) = uVar16;
  *(ulong *)(puVar8 + -0x18) = uVar12;
  *(undefined8 *)(puVar8 + -0x10) = uVar10;
  *(undefined8 *)(puVar8 + -8) = uVar24;
  puVar21 = puVar8 + -0x10;
  uVar16 = 1;
  puVar23 = &UNK_016cc89c;
code_r0x016cc7a4:
  puVar9 = puVar6 + -0x20;
  *(long *)(puVar6 + -0x20) = auVar5._8_8_;
  *(ulong *)(puVar6 + -0x18) = uVar13;
  *(undefined1 **)(puVar6 + -0x10) = puVar21;
  *(undefined **)(puVar6 + -8) = puVar23;
  puVar21 = puVar6 + -0x10;
  if (auVar26._8_4_ < 0) {
code_r0x016cc7d8:
    func_0x00f78a24(0x3d1fcf8);
    uVar13 = func_0x00f78aec();
    /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a4d0(uVar13,0);
    uVar10 = func_0x00f78a24(0x3d52ce8);
    func_0x00f78ac0(uVar13,uVar10);
    uVar18 = uVar16;
  }
  else {
    lVar15 = *(long *)(auVar26._0_8_ + 0x10);
    uVar18 = uVar16;
    if (lVar15 != 0) {
      if (auVar26._8_4_ <= *(int *)(lVar15 + 0x18) - (int)uVar16) {
        return auVar26._0_8_;
      }
      goto code_r0x016cc7d8;
    }
  }
  puVar23 = &FlatBuffers_ByteBuffer__PutSbyte;
  auVar26 = func_0x00f78af4();
code_r0x016cc810:
  puVar6 = puVar9 + -0x30;
  *(ulong *)(puVar9 + -0x30) = uVar20;
  *(undefined1 (*) [16])(puVar9 + -0x28) = auVar5;
  *(ulong *)(puVar9 + -0x18) = uVar13;
  *(undefined1 **)(puVar9 + -0x10) = puVar21;
  *(undefined **)(puVar9 + -8) = puVar23;
  puVar21 = puVar9 + -0x10;
  uVar16 = 1;
  puVar23 = &UNK_016cc834;
  uVar13 = uVar18;
  auVar5 = auVar26;
  goto code_r0x016cc7a4;
}



// ============================================================
// RVA: 0x165590c | Core.Networking.HostEventResults.CreateRoundScoresVectorBlock
// ============================================================

/* WARNING: Possible PIC construction at 0x01655968: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce184: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc904: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdc30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdc8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdce8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdd44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdda0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cddfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccc30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cccb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccd14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccdc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cde98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016559f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01655ab4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016559f4) */
/* WARNING: Removing unreachable block (ram,0x01655a00) */
/* WARNING: Removing unreachable block (ram,0x01655a08) */
/* WARNING: Removing unreachable block (ram,0x01655a24) */
/* WARNING: Removing unreachable block (ram,0x01655a30) */
/* WARNING: Removing unreachable block (ram,0x01655a3c) */
/* WARNING: Removing unreachable block (ram,0x016cde9c) */
/* WARNING: Removing unreachable block (ram,0x016ccdc4) */
/* WARNING: Removing unreachable block (ram,0x016ccd18) */
/* WARNING: Removing unreachable block (ram,0x016ccd20) */
/* WARNING: Removing unreachable block (ram,0x016ccd48) */
/* WARNING: Removing unreachable block (ram,0x016ccd28) */
/* WARNING: Removing unreachable block (ram,0x016ccd4c) */
/* WARNING: Removing unreachable block (ram,0x016ccd84) */
/* WARNING: Removing unreachable block (ram,0x016ccdb0) */
/* WARNING: Removing unreachable block (ram,0x016ccd88) */
/* WARNING: Removing unreachable block (ram,0x016ccd34) */
/* WARNING: Removing unreachable block (ram,0x016cccbc) */
/* WARNING: Removing unreachable block (ram,0x016cccc4) */
/* WARNING: Removing unreachable block (ram,0x016cccec) */
/* WARNING: Removing unreachable block (ram,0x016ccccc) */
/* WARNING: Removing unreachable block (ram,0x016cccf0) */
/* WARNING: Removing unreachable block (ram,0x016cccd8) */
/* WARNING: Removing unreachable block (ram,0x016ccc34) */
/* WARNING: Removing unreachable block (ram,0x016ccc3c) */
/* WARNING: Removing unreachable block (ram,0x016ccc44) */
/* WARNING: Removing unreachable block (ram,0x016ccc90) */
/* WARNING: Removing unreachable block (ram,0x016ccc68) */
/* WARNING: Removing unreachable block (ram,0x016ccc94) */
/* WARNING: Removing unreachable block (ram,0x016ccc70) */
/* WARNING: Removing unreachable block (ram,0x016ccba4) */
/* WARNING: Removing unreachable block (ram,0x016ccbac) */
/* WARNING: Removing unreachable block (ram,0x016ccbb4) */
/* WARNING: Removing unreachable block (ram,0x016ccc00) */
/* WARNING: Removing unreachable block (ram,0x016ccbd8) */
/* WARNING: Removing unreachable block (ram,0x016ccc04) */
/* WARNING: Removing unreachable block (ram,0x016ccbe0) */
/* WARNING: Removing unreachable block (ram,0x016cde00) */
/* WARNING: Removing unreachable block (ram,0x016cdda4) */
/* WARNING: Removing unreachable block (ram,0x016cdd48) */
/* WARNING: Removing unreachable block (ram,0x016cdcec) */
/* WARNING: Removing unreachable block (ram,0x016cdc90) */
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
/* WARNING: Removing unreachable block (ram,0x016cdc34) */
/* WARNING: Removing unreachable block (ram,0x016cc4e0) */
/* WARNING: Removing unreachable block (ram,0x016cc518) */
/* WARNING: Removing unreachable block (ram,0x016cc52c) */
/* WARNING: Removing unreachable block (ram,0x016cc538) */
/* WARNING: Removing unreachable block (ram,0x016cc540) */
/* WARNING: Removing unreachable block (ram,0x016cc548) */
/* WARNING: Removing unreachable block (ram,0x016cc5b8) */
/* WARNING: Removing unreachable block (ram,0x016cc5c0) */
/* WARNING: Removing unreachable block (ram,0x016cc5d4) */
/* WARNING: Removing unreachable block (ram,0x016cc5dc) */
/* WARNING: Removing unreachable block (ram,0x016cc5e4) */
/* WARNING: Removing unreachable block (ram,0x016cc5f0) */
/* WARNING: Removing unreachable block (ram,0x016cc554) */
/* WARNING: Removing unreachable block (ram,0x016cc55c) */
/* WARNING: Removing unreachable block (ram,0x016cc574) */
/* WARNING: Removing unreachable block (ram,0x016cc57c) */
/* WARNING: Removing unreachable block (ram,0x016cc624) */
/* WARNING: Removing unreachable block (ram,0x016cc584) */
/* WARNING: Removing unreachable block (ram,0x016cc628) */
/* WARNING: Removing unreachable block (ram,0x016cc634) */
/* WARNING: Removing unreachable block (ram,0x016cc668) */
/* WARNING: Removing unreachable block (ram,0x016cc67c) */
/* WARNING: Removing unreachable block (ram,0x016cc590) */
/* WARNING: Removing unreachable block (ram,0x016cc5b4) */
/* WARNING: Removing unreachable block (ram,0x016cc610) */
/* WARNING: Removing unreachable block (ram,0x016cc834) */
/* WARNING: Removing unreachable block (ram,0x016cc83c) */
/* WARNING: Removing unreachable block (ram,0x016cc868) */
/* WARNING: Removing unreachable block (ram,0x016cc844) */
/* WARNING: Removing unreachable block (ram,0x016cc86c) */
/* WARNING: Removing unreachable block (ram,0x016cc850) */
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
/* WARNING: Removing unreachable block (ram,0x016ce188) */
/* WARNING: Removing unreachable block (ram,0x016ce224) */
/* WARNING: Removing unreachable block (ram,0x016cda04) */
/* WARNING: Removing unreachable block (ram,0x016cda14) */
/* WARNING: Removing unreachable block (ram,0x016cda30) */
/* WARNING: Removing unreachable block (ram,0x016cda1c) */
/* WARNING: Removing unreachable block (ram,0x0165596c) */
/* WARNING: Removing unreachable block (ram,0x01655ab8) */
/* WARNING: Removing unreachable block (ram,0x016ce20c) */

ulong Core_Networking_HostEventResults__CreateRoundScoresVectorBlock(ulong param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined8 unaff_x22;
  ulong uVar20;
  undefined1 *puVar21;
  undefined8 ****ppppuVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [12];
  undefined8 ***pppuStack_80;
  undefined *puStack_78;
  undefined8 **ppuStack_50;
  undefined *puStack_48;
  undefined8 ***pppuStack_40;
  undefined *puStack_38;
  
  puVar7 = &stack0xffffffffffffffd0;
  ppppuVar22 = (undefined8 ****)&stack0xfffffffffffffff0;
  uVar18 = 0x3eb5000;
  if ((bRam0000000003eb57f9 & 1) == 0) {
    func_0x00f78a20(0x3d569a0);
    bRam0000000003eb57f9 = 1;
  }
  if ((param_2 == 0) || (param_1 == 0)) {
    puVar23 = &Core_Networking_HostEventResults__StartRoundScoresVector;
    auVar28 = func_0x00f78af4();
    iVar13 = auVar28._8_4_;
    uVar12 = auVar28._0_8_;
    if (uVar12 == 0) {
      puStack_38 = &Core_Networking_HostEventResults__StartRoundScoresVector;
      pppuStack_40 = ppppuVar22;
      auVar26 = func_0x00f78af4();
      param_2 = auVar26._8_8_;
      param_1 = auVar26._0_8_;
      puStack_48 = &Core_Networking_HostEventResults__CreateStandingsVector;
      if ((param_2 == 0) || (param_1 == 0)) {
        ppuStack_50 = &pppuStack_40;
        auVar26 = func_0x00f78af4();
        param_2 = auVar26._8_8_;
        param_1 = auVar26._0_8_;
        puVar7 = &stack0xffffffffffffff60;
        puStack_78 = &Core_Networking_HostEventResults__CreateStandingsVectorBlock;
        ppppuVar22 = &pppuStack_80;
        uVar18 = 0x3eb5000;
        pppuStack_80 = &ppuStack_50;
        if ((bRam0000000003eb57fa & 1) == 0) {
          func_0x00f78a20(0x3d56998);
          bRam0000000003eb57fa = 1;
        }
        if ((param_2 == 0) || (param_1 == 0)) {
          puVar23 = &Core_Networking_HostEventResults__StartStandingsVector;
          auVar28 = func_0x00f78af4();
          iVar13 = auVar28._8_4_;
          uVar12 = auVar28._0_8_;
          if (uVar12 == 0) {
            lVar14 = func_0x00f78af4();
            return *(ulong *)(lVar14 + 8);
          }
        }
        else {
          uVar18 = 0x3d56000;
          iVar13 = *(int *)(param_2 + 0x18);
          puVar23 = &UNK_01655ab8;
          puVar7 = &stack0xffffffffffffff60;
          uVar12 = param_1;
        }
      }
      else {
        iVar13 = *(int *)(param_2 + 0x18);
        puVar23 = &UNK_016559f4;
        puVar7 = &stack0xffffffffffffff90;
        uVar12 = param_1;
        ppppuVar22 = (undefined8 ****)&ppuStack_50;
        ppuStack_50 = &pppuStack_40;
      }
    }
  }
  else {
    uVar18 = 0x3d56000;
    iVar13 = *(int *)(param_2 + 0x18);
    puVar23 = (undefined *)0x165596c;
    puVar7 = &stack0xffffffffffffffd0;
    uVar12 = param_1;
  }
  uVar19 = 4;
  *(undefined8 *)(puVar7 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar7 + -0x28) = uVar18;
  *(long *)(puVar7 + -0x20) = param_2;
  *(ulong *)(puVar7 + -0x18) = param_1;
  *(undefined8 *****)(puVar7 + -0x10) = ppppuVar22;
  *(undefined **)(puVar7 + -8) = puVar23;
  puVar21 = puVar7 + -0x10;
  /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4();
  *(int *)(uVar12 + 0x44) = iVar13;
  uVar17 = CONCAT44(0,iVar13 * 4);
  auVar27._8_8_ = 4;
  auVar27._0_8_ = uVar17;
  auVar26._8_8_ = 4;
  auVar26._0_8_ = uVar12;
  puVar23 = &UNK_016ce188;
  puVar7 = puVar7 + -0x30;
code_r0x016cdaac:
  while( true ) {
    uVar15 = auVar27._0_8_;
    uVar11 = auVar26._0_8_;
    puVar6 = puVar7 + -0x30;
    *(ulong *)(puVar7 + -0x30) = uVar12;
    *(ulong *)(puVar7 + -0x28) = uVar19;
    *(undefined1 (*) [16])(puVar7 + -0x20) = auVar27;
    *(undefined1 **)(puVar7 + -0x10) = puVar21;
    *(undefined **)(puVar7 + -8) = puVar23;
    iVar13 = auVar26._8_4_;
    if (*(int *)(uVar11 + 0x20) < iVar13) {
      *(int *)(uVar11 + 0x20) = iVar13;
    }
    uVar20 = uVar12;
    if ((*(long *)(uVar11 + 0x18) == 0) ||
       (lVar14 = *(long *)(*(long *)(uVar11 + 0x18) + 0x10), lVar14 == 0)) break;
    uVar3 = *(uint *)(lVar14 + 0x18);
    iVar4 = *(int *)(uVar11 + 0x10);
    uVar2 = iVar4 - (uVar3 + (int)uVar17) & iVar13 - 1U;
    uVar15 = CONCAT44(0,uVar2);
    uVar1 = (int)uVar17 + iVar13 + uVar2;
    uVar20 = (ulong)uVar1;
    uVar12 = uVar11;
    while (uVar19 = (ulong)uVar3, iVar4 < (int)uVar1) {
      uVar12 = /*FlatBuffers.FlatBufferBuilder$$GrowBuffer*/ func_0x016cda78(uVar11);
      if ((*(long *)(uVar11 + 0x18) == 0) ||
         (lVar14 = *(long *)(*(long *)(uVar11 + 0x18) + 0x10), lVar14 == 0)) goto code_r0x016cdb68;
      iVar4 = *(int *)(uVar11 + 0x10) - uVar3;
      uVar3 = *(uint *)(lVar14 + 0x18);
      iVar4 = iVar4 + uVar3;
      *(int *)(uVar11 + 0x10) = iVar4;
    }
    if ((int)uVar2 < 1) {
      return uVar12;
    }
    uVar18 = *(undefined8 *)*(undefined1 (*) [16])(puVar7 + -0x20);
    uVar24 = *(undefined8 *)(puVar7 + -0x18);
    auVar27 = *(undefined1 (*) [16])(puVar7 + -0x20);
    uVar12 = *(ulong *)(puVar7 + -0x30);
    uVar19 = *(ulong *)(puVar7 + -0x28);
    *(undefined8 *)(puVar7 + -0x10) = *(undefined8 *)(puVar7 + -0x10);
    *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
    lVar14 = *(long *)(uVar11 + 0x18);
    auVar5._8_8_ = lVar14;
    auVar5._0_8_ = uVar15;
    uVar2 = *(int *)(uVar11 + 0x10) - uVar2;
    uVar20 = (ulong)uVar2;
    auVar25._8_4_ = uVar2;
    auVar25._0_8_ = lVar14;
    auVar25._12_4_ = 0;
    *(uint *)(uVar11 + 0x10) = uVar2;
    if (lVar14 != 0) {
      *(ulong *)(puVar7 + -0x30) = uVar12;
      *(ulong *)(puVar7 + -0x28) = uVar19;
      *(undefined8 *)(puVar7 + -0x20) = uVar18;
      *(undefined8 *)(puVar7 + -0x18) = uVar24;
      *(undefined8 *)(puVar7 + -0x10) = *(undefined8 *)(puVar7 + -0x10);
      *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
      puVar21 = puVar7 + -0x10;
      puVar23 = &UNK_016cc908;
      uVar12 = 0;
      goto code_r0x016cc7a4;
    }
    lVar14 = func_0x00f78af4();
    puVar21 = puVar7 + -0x20;
    *(undefined1 **)(puVar7 + -0x20) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x18) = &FlatBuffers_FlatBufferBuilder__GrowBuffer;
    if ((*(long *)(lVar14 + 0x18) != 0) &&
       (plVar10 = *(long **)(*(long *)(lVar14 + 0x18) + 0x10), plVar10 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016cdaa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar12 = (**(code **)(*plVar10 + 0x178))
                         (plVar10,(int)plVar10[3] << 1,*(undefined8 *)(*plVar10 + 0x180));
      return uVar12;
    }
    puVar23 = &FlatBuffers_FlatBufferBuilder__Prep;
    auVar26 = func_0x00f78af4();
    puVar7 = puVar7 + -0x20;
  }
code_r0x016cdb68:
  auVar5._8_8_ = uVar15;
  auVar5._0_8_ = uVar19;
  auVar26 = func_0x00f78af4();
  uVar12 = auVar26._8_8_;
  lVar16 = auVar26._0_8_;
  *(undefined1 **)(puVar7 + -0x40) = puVar7 + -0x10;
  *(undefined **)(puVar7 + -0x38) = &FlatBuffers_FlatBufferBuilder__PutBool;
  lVar14 = *(long *)(lVar16 + 0x18);
  iVar13 = *(int *)(lVar16 + 0x10) + -1;
  *(int *)(lVar16 + 0x10) = iVar13;
  if (lVar14 == 0) {
    auVar26 = func_0x00f78af4();
    uVar17 = auVar26._8_8_;
    lVar14 = auVar26._0_8_;
    *(undefined1 **)(puVar7 + -0x50) = puVar7 + -0x40;
    *(undefined **)(puVar7 + -0x48) = &FlatBuffers_FlatBufferBuilder__PutSbyte;
    iVar13 = *(int *)(lVar14 + 0x10) + -1;
    auVar25._8_4_ = iVar13;
    auVar25._0_8_ = *(long *)(lVar14 + 0x18);
    auVar25._12_4_ = 0;
    *(int *)(lVar14 + 0x10) = iVar13;
    if (*(long *)(lVar14 + 0x18) != 0) {
      puVar9 = puVar7 + -0x40;
      puVar21 = *(undefined1 **)(puVar7 + -0x50);
      puVar23 = *(undefined **)(puVar7 + -0x48);
      uVar12 = uVar11;
      goto code_r0x016cc810;
    }
    auVar26 = func_0x00f78af4();
    uVar12 = auVar26._8_8_;
    lVar16 = auVar26._0_8_;
    *(undefined1 **)(puVar7 + -0x60) = puVar7 + -0x50;
    *(undefined **)(puVar7 + -0x58) = &FlatBuffers_FlatBufferBuilder__PutByte;
    lVar14 = *(long *)(lVar16 + 0x18);
    iVar13 = *(int *)(lVar16 + 0x10) + -1;
    *(int *)(lVar16 + 0x10) = iVar13;
    if (lVar14 == 0) {
      auVar26 = func_0x00f78af4();
      uVar12 = auVar26._8_8_;
      lVar14 = auVar26._0_8_;
      puVar6 = puVar7 + -0x90;
      *(ulong *)(puVar7 + -0x90) = uVar20;
      *(ulong *)(puVar7 + -0x88) = uVar19;
      *(ulong *)(puVar7 + -0x80) = uVar15;
      *(ulong *)(puVar7 + -0x78) = uVar11;
      *(undefined1 **)(puVar7 + -0x70) = puVar7 + -0x60;
      *(undefined **)(puVar7 + -0x68) = &FlatBuffers_FlatBufferBuilder__PutShort;
      puVar21 = puVar7 + -0x70;
      lVar16 = *(long *)(lVar14 + 0x18);
      uVar1 = *(int *)(lVar14 + 0x10) - 2;
      auVar5._8_8_ = lVar16;
      auVar5._0_8_ = CONCAT44(0,uVar1);
      auVar25._8_4_ = uVar1;
      auVar25._0_8_ = lVar16;
      auVar25._12_4_ = 0;
      *(uint *)(lVar14 + 0x10) = uVar1;
      if (lVar16 != 0) {
        uVar15 = 2;
        puVar23 = &UNK_016cdc34;
        goto code_r0x016cc7a4;
      }
      auVar26 = func_0x00f78af4();
      uVar12 = auVar26._8_8_;
      lVar14 = auVar26._0_8_;
      puVar6 = puVar7 + -0xc0;
      *(ulong *)(puVar7 + -0xc0) = uVar20;
      *(ulong *)(puVar7 + -0xb8) = CONCAT44(0,uVar1);
      *(undefined8 *)(puVar7 + -0xb0) = 0;
      *(ulong *)(puVar7 + -0xa8) = uVar11;
      *(undefined1 **)(puVar7 + -0xa0) = puVar21;
      *(undefined **)(puVar7 + -0x98) = &FlatBuffers_FlatBufferBuilder__PutUshort;
      puVar21 = puVar7 + -0xa0;
      lVar16 = *(long *)(lVar14 + 0x18);
      uVar1 = *(int *)(lVar14 + 0x10) - 2;
      auVar5._8_8_ = lVar16;
      auVar5._0_8_ = CONCAT44(0,uVar1);
      auVar25._8_4_ = uVar1;
      auVar25._0_8_ = lVar16;
      auVar25._12_4_ = 0;
      *(uint *)(lVar14 + 0x10) = uVar1;
      if (lVar16 != 0) {
        uVar15 = 2;
        puVar23 = &UNK_016cdc90;
        goto code_r0x016cc7a4;
      }
      auVar26 = func_0x00f78af4();
      uVar12 = auVar26._8_8_;
      lVar14 = auVar26._0_8_;
      puVar6 = puVar7 + -0xf0;
      *(ulong *)(puVar7 + -0xf0) = uVar20;
      *(ulong *)(puVar7 + -0xe8) = CONCAT44(0,uVar1);
      *(undefined8 *)(puVar7 + -0xe0) = 0;
      *(ulong *)(puVar7 + -0xd8) = uVar11;
      *(undefined1 **)(puVar7 + -0xd0) = puVar21;
      *(undefined **)(puVar7 + -200) = &FlatBuffers_FlatBufferBuilder__PutInt;
      puVar21 = puVar7 + -0xd0;
      lVar16 = *(long *)(lVar14 + 0x18);
      uVar1 = *(int *)(lVar14 + 0x10) - 4;
      auVar5._8_8_ = lVar16;
      auVar5._0_8_ = CONCAT44(0,uVar1);
      auVar25._8_4_ = uVar1;
      auVar25._0_8_ = lVar16;
      auVar25._12_4_ = 0;
      *(uint *)(lVar14 + 0x10) = uVar1;
      if (lVar16 != 0) {
        uVar15 = 4;
        puVar23 = &UNK_016cdcec;
        goto code_r0x016cc7a4;
      }
      auVar26 = func_0x00f78af4();
      uVar12 = auVar26._8_8_;
      lVar14 = auVar26._0_8_;
      puVar6 = puVar7 + -0x120;
      *(ulong *)(puVar7 + -0x120) = uVar20;
      *(ulong *)(puVar7 + -0x118) = CONCAT44(0,uVar1);
      *(undefined8 *)(puVar7 + -0x110) = 0;
      *(ulong *)(puVar7 + -0x108) = uVar11;
      *(undefined1 **)(puVar7 + -0x100) = puVar21;
      *(undefined **)(puVar7 + -0xf8) = &FlatBuffers_FlatBufferBuilder__PutUint;
      puVar21 = puVar7 + -0x100;
      lVar16 = *(long *)(lVar14 + 0x18);
      uVar1 = *(int *)(lVar14 + 0x10) - 4;
      auVar5._8_8_ = lVar16;
      auVar5._0_8_ = CONCAT44(0,uVar1);
      auVar25._8_4_ = uVar1;
      auVar25._0_8_ = lVar16;
      auVar25._12_4_ = 0;
      *(uint *)(lVar14 + 0x10) = uVar1;
      if (lVar16 != 0) {
        uVar15 = 4;
        puVar23 = &UNK_016cdd48;
        goto code_r0x016cc7a4;
      }
      auVar26 = func_0x00f78af4();
      uVar12 = auVar26._8_8_;
      lVar14 = auVar26._0_8_;
      puVar6 = puVar7 + -0x150;
      *(ulong *)(puVar7 + -0x150) = uVar20;
      *(ulong *)(puVar7 + -0x148) = CONCAT44(0,uVar1);
      *(undefined8 *)(puVar7 + -0x140) = 0;
      *(ulong *)(puVar7 + -0x138) = uVar11;
      *(undefined1 **)(puVar7 + -0x130) = puVar21;
      *(undefined **)(puVar7 + -0x128) = &FlatBuffers_FlatBufferBuilder__PutLong;
      puVar21 = puVar7 + -0x130;
      lVar16 = *(long *)(lVar14 + 0x18);
      uVar1 = *(int *)(lVar14 + 0x10) - 8;
      auVar5._8_8_ = lVar16;
      auVar5._0_8_ = CONCAT44(0,uVar1);
      auVar25._8_4_ = uVar1;
      auVar25._0_8_ = lVar16;
      auVar25._12_4_ = 0;
      *(uint *)(lVar14 + 0x10) = uVar1;
      if (lVar16 != 0) {
        uVar15 = 8;
        puVar23 = &UNK_016cdda4;
        goto code_r0x016cc7a4;
      }
      auVar26 = func_0x00f78af4();
      uVar12 = auVar26._8_8_;
      lVar14 = auVar26._0_8_;
      puVar6 = puVar7 + -0x180;
      *(ulong *)(puVar7 + -0x180) = uVar20;
      *(ulong *)(puVar7 + -0x178) = CONCAT44(0,uVar1);
      *(undefined8 *)(puVar7 + -0x170) = 0;
      *(ulong *)(puVar7 + -0x168) = uVar11;
      *(undefined1 **)(puVar7 + -0x160) = puVar21;
      *(undefined **)(puVar7 + -0x158) = &FlatBuffers_FlatBufferBuilder__PutUlong;
      puVar21 = puVar7 + -0x160;
      lVar16 = *(long *)(lVar14 + 0x18);
      uVar1 = *(int *)(lVar14 + 0x10) - 8;
      uVar19 = CONCAT44(0,uVar1);
      auVar5._8_8_ = lVar16;
      auVar5._0_8_ = uVar19;
      auVar25._8_4_ = uVar1;
      auVar25._0_8_ = lVar16;
      auVar25._12_4_ = 0;
      *(uint *)(lVar14 + 0x10) = uVar1;
      if (lVar16 != 0) {
        uVar15 = 8;
        puVar23 = &UNK_016cde00;
        goto code_r0x016cc7a4;
      }
      lVar14 = func_0x00f78af4();
      *(undefined1 **)(puVar7 + -400) = puVar21;
      *(undefined **)(puVar7 + -0x188) = &FlatBuffers_FlatBufferBuilder__PutFloat;
      lVar16 = *(long *)(lVar14 + 0x18);
      auVar5._8_8_ = lVar16;
      uVar1 = *(int *)(lVar14 + 0x10) - 4;
      uVar12 = (ulong)uVar1;
      auVar25._8_4_ = uVar1;
      auVar25._0_8_ = lVar16;
      auVar25._12_4_ = 0;
      *(uint *)(lVar14 + 0x10) = uVar1;
      if (lVar16 != 0) {
        puVar6 = puVar7 + -0x1b0;
        *(undefined8 *)(puVar7 + -0x1b0) = unaff_d9;
        *(undefined8 *)(puVar7 + -0x1a8) = unaff_d8;
        *(undefined8 *)(puVar7 + -0x1a0) = 0;
        *(ulong *)(puVar7 + -0x198) = uVar11;
        *(undefined8 *)(puVar7 + -400) = *(undefined8 *)(puVar7 + -400);
        *(undefined8 *)(puVar7 + -0x188) = *(undefined8 *)(puVar7 + -0x188);
        puVar21 = puVar7 + -400;
        uVar15 = 4;
        puVar23 = &UNK_016ccba4;
        goto code_r0x016cc7a4;
      }
      lVar14 = func_0x00f78af4();
      *(undefined1 **)(puVar7 + -0x1a0) = puVar7 + -400;
      *(undefined **)(puVar7 + -0x198) = &FlatBuffers_FlatBufferBuilder__PutDouble;
      lVar16 = *(long *)(lVar14 + 0x18);
      auVar5._8_8_ = lVar16;
      uVar1 = *(int *)(lVar14 + 0x10) - 8;
      uVar12 = (ulong)uVar1;
      auVar25._8_4_ = uVar1;
      auVar25._0_8_ = lVar16;
      auVar25._12_4_ = 0;
      *(uint *)(lVar14 + 0x10) = uVar1;
      if (lVar16 != 0) {
        puVar6 = puVar7 + -0x1c0;
        *(undefined8 *)(puVar7 + -0x1c0) = unaff_d9;
        *(undefined8 *)(puVar7 + -0x1b8) = unaff_d8;
        *(undefined8 *)(puVar7 + -0x1b0) = 0;
        *(ulong *)(puVar7 + -0x1a8) = uVar11;
        *(undefined8 *)(puVar7 + -0x1a0) = *(undefined8 *)(puVar7 + -0x1a0);
        *(undefined8 *)(puVar7 + -0x198) = *(undefined8 *)(puVar7 + -0x198);
        puVar21 = puVar7 + -0x1a0;
        uVar15 = 8;
        puVar23 = &UNK_016ccc34;
        goto code_r0x016cc7a4;
      }
      auVar27 = func_0x00f78af4();
      *(undefined8 *)(puVar7 + -0x1c0) = 0;
      *(ulong *)(puVar7 + -0x1b8) = uVar11;
      *(undefined1 **)(puVar7 + -0x1b0) = puVar7 + -0x1a0;
      *(undefined **)(puVar7 + -0x1a8) = &FlatBuffers_FlatBufferBuilder__AddBool;
      puVar21 = puVar7 + -0x1b0;
      auVar26._8_8_ = 1;
      auVar26._0_8_ = auVar27._0_8_;
      uVar17 = 0;
      puVar23 = &UNK_016cde9c;
      puVar7 = puVar7 + -0x1c0;
      uVar12 = uVar20;
      goto code_r0x016cdaac;
    }
    puVar8 = puVar7 + -0x50;
    uVar18 = *(undefined8 *)(puVar7 + -0x60);
    uVar24 = *(undefined8 *)(puVar7 + -0x58);
  }
  else {
    puVar8 = puVar7 + -0x30;
    uVar18 = *(undefined8 *)(puVar7 + -0x40);
    uVar24 = *(undefined8 *)(puVar7 + -0x38);
  }
  auVar5._8_4_ = iVar13;
  auVar5._0_8_ = lVar14;
  auVar5._12_4_ = 0;
  auVar25._8_4_ = iVar13;
  auVar25._0_8_ = lVar14;
  auVar25._12_4_ = 0;
  puVar6 = puVar8 + -0x30;
  *(ulong *)(puVar8 + -0x30) = uVar20;
  *(ulong *)(puVar8 + -0x28) = uVar19;
  *(ulong *)(puVar8 + -0x20) = uVar15;
  *(ulong *)(puVar8 + -0x18) = uVar11;
  *(undefined8 *)(puVar8 + -0x10) = uVar18;
  *(undefined8 *)(puVar8 + -8) = uVar24;
  puVar21 = puVar8 + -0x10;
  uVar15 = 1;
  puVar23 = &UNK_016cc89c;
code_r0x016cc7a4:
  puVar9 = puVar6 + -0x20;
  *(long *)(puVar6 + -0x20) = auVar5._8_8_;
  *(ulong *)(puVar6 + -0x18) = uVar12;
  *(undefined1 **)(puVar6 + -0x10) = puVar21;
  *(undefined **)(puVar6 + -8) = puVar23;
  puVar21 = puVar6 + -0x10;
  if (auVar25._8_4_ < 0) {
code_r0x016cc7d8:
    func_0x00f78a24(0x3d1fcf8);
    uVar12 = func_0x00f78aec();
    /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a4d0(uVar12,0);
    uVar18 = func_0x00f78a24(0x3d52ce8);
    func_0x00f78ac0(uVar12,uVar18);
    uVar17 = uVar15;
  }
  else {
    lVar14 = *(long *)(auVar25._0_8_ + 0x10);
    uVar17 = uVar15;
    if (lVar14 != 0) {
      if (auVar25._8_4_ <= *(int *)(lVar14 + 0x18) - (int)uVar15) {
        return auVar25._0_8_;
      }
      goto code_r0x016cc7d8;
    }
  }
  puVar23 = &FlatBuffers_ByteBuffer__PutSbyte;
  auVar25 = func_0x00f78af4();
code_r0x016cc810:
  puVar6 = puVar9 + -0x30;
  *(ulong *)(puVar9 + -0x30) = uVar20;
  *(undefined1 (*) [16])(puVar9 + -0x28) = auVar5;
  *(ulong *)(puVar9 + -0x18) = uVar12;
  *(undefined1 **)(puVar9 + -0x10) = puVar21;
  *(undefined **)(puVar9 + -8) = puVar23;
  puVar21 = puVar9 + -0x10;
  uVar15 = 1;
  puVar23 = &UNK_016cc834;
  uVar12 = uVar17;
  auVar5 = auVar25;
  goto code_r0x016cc7a4;
}



// ============================================================
// RVA: 0x1655998 | Core.Networking.HostEventResults.StartRoundScoresVector
// ============================================================

/* WARNING: Possible PIC construction at 0x016ce184: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc904: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdc30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdc8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdce8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdd44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdda0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cddfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccc30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cccb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccd14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccdc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cde98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016559f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01655ab4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016ce224) */
/* WARNING: Removing unreachable block (ram,0x016cda04) */
/* WARNING: Removing unreachable block (ram,0x016cda14) */
/* WARNING: Removing unreachable block (ram,0x016cda30) */
/* WARNING: Removing unreachable block (ram,0x016cda1c) */
/* WARNING: Removing unreachable block (ram,0x016559f4) */
/* WARNING: Removing unreachable block (ram,0x01655a00) */
/* WARNING: Removing unreachable block (ram,0x01655a08) */
/* WARNING: Removing unreachable block (ram,0x01655a24) */
/* WARNING: Removing unreachable block (ram,0x01655a30) */
/* WARNING: Removing unreachable block (ram,0x01655a3c) */
/* WARNING: Removing unreachable block (ram,0x016cde9c) */
/* WARNING: Removing unreachable block (ram,0x016ccdc4) */
/* WARNING: Removing unreachable block (ram,0x016ccd18) */
/* WARNING: Removing unreachable block (ram,0x016ccd20) */
/* WARNING: Removing unreachable block (ram,0x016ccd48) */
/* WARNING: Removing unreachable block (ram,0x016ccd28) */
/* WARNING: Removing unreachable block (ram,0x016ccd4c) */
/* WARNING: Removing unreachable block (ram,0x016ccd84) */
/* WARNING: Removing unreachable block (ram,0x016ccdb0) */
/* WARNING: Removing unreachable block (ram,0x016ccd88) */
/* WARNING: Removing unreachable block (ram,0x016ccd34) */
/* WARNING: Removing unreachable block (ram,0x016cccbc) */
/* WARNING: Removing unreachable block (ram,0x016cccc4) */
/* WARNING: Removing unreachable block (ram,0x016cccec) */
/* WARNING: Removing unreachable block (ram,0x016ccccc) */
/* WARNING: Removing unreachable block (ram,0x016cccf0) */
/* WARNING: Removing unreachable block (ram,0x016cccd8) */
/* WARNING: Removing unreachable block (ram,0x016ccc34) */
/* WARNING: Removing unreachable block (ram,0x016ccc3c) */
/* WARNING: Removing unreachable block (ram,0x016ccc44) */
/* WARNING: Removing unreachable block (ram,0x016ccc90) */
/* WARNING: Removing unreachable block (ram,0x016ccc68) */
/* WARNING: Removing unreachable block (ram,0x016ccc94) */
/* WARNING: Removing unreachable block (ram,0x016ccc70) */
/* WARNING: Removing unreachable block (ram,0x016ccba4) */
/* WARNING: Removing unreachable block (ram,0x016ccbac) */
/* WARNING: Removing unreachable block (ram,0x016ccbb4) */
/* WARNING: Removing unreachable block (ram,0x016ccc00) */
/* WARNING: Removing unreachable block (ram,0x016ccbd8) */
/* WARNING: Removing unreachable block (ram,0x016ccc04) */
/* WARNING: Removing unreachable block (ram,0x016ccbe0) */
/* WARNING: Removing unreachable block (ram,0x016cde00) */
/* WARNING: Removing unreachable block (ram,0x016cdda4) */
/* WARNING: Removing unreachable block (ram,0x016cdd48) */
/* WARNING: Removing unreachable block (ram,0x016cdcec) */
/* WARNING: Removing unreachable block (ram,0x016cdc90) */
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
/* WARNING: Removing unreachable block (ram,0x016cdc34) */
/* WARNING: Removing unreachable block (ram,0x016cc4e0) */
/* WARNING: Removing unreachable block (ram,0x016cc518) */
/* WARNING: Removing unreachable block (ram,0x016cc52c) */
/* WARNING: Removing unreachable block (ram,0x016cc538) */
/* WARNING: Removing unreachable block (ram,0x016cc540) */
/* WARNING: Removing unreachable block (ram,0x016cc548) */
/* WARNING: Removing unreachable block (ram,0x016cc5b8) */
/* WARNING: Removing unreachable block (ram,0x016cc5c0) */
/* WARNING: Removing unreachable block (ram,0x016cc5d4) */
/* WARNING: Removing unreachable block (ram,0x016cc5dc) */
/* WARNING: Removing unreachable block (ram,0x016cc5e4) */
/* WARNING: Removing unreachable block (ram,0x016cc5f0) */
/* WARNING: Removing unreachable block (ram,0x016cc554) */
/* WARNING: Removing unreachable block (ram,0x016cc55c) */
/* WARNING: Removing unreachable block (ram,0x016cc574) */
/* WARNING: Removing unreachable block (ram,0x016cc57c) */
/* WARNING: Removing unreachable block (ram,0x016cc624) */
/* WARNING: Removing unreachable block (ram,0x016cc584) */
/* WARNING: Removing unreachable block (ram,0x016cc628) */
/* WARNING: Removing unreachable block (ram,0x016cc634) */
/* WARNING: Removing unreachable block (ram,0x016cc668) */
/* WARNING: Removing unreachable block (ram,0x016cc67c) */
/* WARNING: Removing unreachable block (ram,0x016cc590) */
/* WARNING: Removing unreachable block (ram,0x016cc5b4) */
/* WARNING: Removing unreachable block (ram,0x016cc610) */
/* WARNING: Removing unreachable block (ram,0x016cc834) */
/* WARNING: Removing unreachable block (ram,0x016cc83c) */
/* WARNING: Removing unreachable block (ram,0x016cc868) */
/* WARNING: Removing unreachable block (ram,0x016cc844) */
/* WARNING: Removing unreachable block (ram,0x016cc86c) */
/* WARNING: Removing unreachable block (ram,0x016cc850) */
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
/* WARNING: Removing unreachable block (ram,0x016ce188) */
/* WARNING: Removing unreachable block (ram,0x01655ab8) */
/* WARNING: Removing unreachable block (ram,0x016ce20c) */

ulong Core_Networking_HostEventResults__StartRoundScoresVector(long param_1,int param_2)

{
  undefined8 ****ppppuVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined8 ***pppuVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  int iVar16;
  long lVar17;
  long unaff_x19;
  undefined8 unaff_x20;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  undefined8 unaff_x21;
  ulong uVar21;
  undefined8 unaff_x22;
  ulong uVar22;
  undefined8 ****unaff_x29;
  undefined1 *puVar23;
  undefined *unaff_x30;
  undefined8 uVar24;
  undefined *puVar25;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [12];
  undefined8 ***pppuStack_50;
  undefined *puStack_48;
  undefined8 **ppuStack_20;
  undefined *puStack_18;
  
  auVar28._8_8_ = unaff_x20;
  auVar28._0_8_ = param_1;
  if (param_1 == 0) {
    pppuVar7 = (undefined8 ***)&stack0xfffffffffffffff0;
    auVar28 = func_0x00f78af4();
    unaff_x19 = auVar28._0_8_;
    puStack_18 = &Core_Networking_HostEventResults__CreateStandingsVector;
    ppppuVar1 = (undefined8 ****)&ppuStack_20;
    if ((auVar28._8_8_ == 0) || (unaff_x19 == 0)) {
      ppuStack_20 = (undefined8 **)&stack0xfffffffffffffff0;
      auVar28 = func_0x00f78af4();
      lVar17 = auVar28._8_8_;
      unaff_x19 = auVar28._0_8_;
      puStack_48 = &Core_Networking_HostEventResults__CreateStandingsVectorBlock;
      unaff_x29 = &pppuStack_50;
      unaff_x21 = 0x3eb5000;
      pppuStack_50 = ppppuVar1;
      if ((bRam0000000003eb57fa & 1) == 0) {
        func_0x00f78a20(0x3d56998);
        bRam0000000003eb57fa = 1;
      }
      if ((lVar17 == 0) || (unaff_x19 == 0)) {
        unaff_x30 = &Core_Networking_HostEventResults__StartStandingsVector;
        auVar30 = func_0x00f78af4();
        param_2 = auVar30._8_4_;
        auVar28._8_8_ = lVar17;
        auVar28._0_8_ = auVar30._0_8_;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff90;
        if (auVar30._0_8_ == 0) {
          lVar17 = func_0x00f78af4();
          return *(ulong *)(lVar17 + 8);
        }
      }
      else {
        unaff_x21 = 0x3d56000;
        param_2 = *(int *)(lVar17 + 0x18);
        unaff_x30 = &UNK_01655ab8;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff90;
      }
    }
    else {
      param_2 = *(int *)(auVar28._8_8_ + 0x18);
      unaff_x30 = &UNK_016559f4;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
      unaff_x29 = ppppuVar1;
      ppuStack_20 = pppuVar7;
    }
  }
  uVar15 = auVar28._0_8_;
  uVar21 = 4;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = auVar28._8_8_;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 *****)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  puVar23 = (undefined1 *)((long)register0x00000008 + -0x10);
  /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4();
  *(int *)(uVar15 + 0x44) = param_2;
  uVar20 = CONCAT44(0,param_2 * 4);
  auVar29._8_8_ = 4;
  auVar29._0_8_ = uVar20;
  auVar27._8_8_ = 4;
  auVar27._0_8_ = uVar15;
  puVar25 = &UNK_016ce188;
  puVar9 = (undefined1 *)((long)register0x00000008 + -0x30);
code_r0x016cdaac:
  while( true ) {
    uVar18 = auVar29._0_8_;
    uVar14 = auVar27._0_8_;
    puVar8 = puVar9 + -0x30;
    *(ulong *)(puVar9 + -0x30) = uVar15;
    *(ulong *)(puVar9 + -0x28) = uVar21;
    *(undefined1 (*) [16])(puVar9 + -0x20) = auVar29;
    *(undefined1 **)(puVar9 + -0x10) = puVar23;
    *(undefined **)(puVar9 + -8) = puVar25;
    iVar16 = auVar27._8_4_;
    if (*(int *)(uVar14 + 0x20) < iVar16) {
      *(int *)(uVar14 + 0x20) = iVar16;
    }
    uVar22 = uVar15;
    if ((*(long *)(uVar14 + 0x18) == 0) ||
       (lVar17 = *(long *)(*(long *)(uVar14 + 0x18) + 0x10), lVar17 == 0)) break;
    uVar4 = *(uint *)(lVar17 + 0x18);
    iVar5 = *(int *)(uVar14 + 0x10);
    uVar3 = iVar5 - (uVar4 + (int)uVar20) & iVar16 - 1U;
    uVar18 = CONCAT44(0,uVar3);
    uVar2 = (int)uVar20 + iVar16 + uVar3;
    uVar22 = (ulong)uVar2;
    uVar15 = uVar14;
    while (uVar21 = (ulong)uVar4, iVar5 < (int)uVar2) {
      uVar15 = /*FlatBuffers.FlatBufferBuilder$$GrowBuffer*/ func_0x016cda78(uVar14);
      if ((*(long *)(uVar14 + 0x18) == 0) ||
         (lVar17 = *(long *)(*(long *)(uVar14 + 0x18) + 0x10), lVar17 == 0)) goto code_r0x016cdb68;
      iVar5 = *(int *)(uVar14 + 0x10) - uVar4;
      uVar4 = *(uint *)(lVar17 + 0x18);
      iVar5 = iVar5 + uVar4;
      *(int *)(uVar14 + 0x10) = iVar5;
    }
    if ((int)uVar3 < 1) {
      return uVar15;
    }
    uVar12 = *(undefined8 *)*(undefined1 (*) [16])(puVar9 + -0x20);
    uVar24 = *(undefined8 *)(puVar9 + -0x18);
    auVar29 = *(undefined1 (*) [16])(puVar9 + -0x20);
    uVar15 = *(ulong *)(puVar9 + -0x30);
    uVar21 = *(ulong *)(puVar9 + -0x28);
    *(undefined8 *)(puVar9 + -0x10) = *(undefined8 *)(puVar9 + -0x10);
    *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
    lVar17 = *(long *)(uVar14 + 0x18);
    auVar6._8_8_ = lVar17;
    auVar6._0_8_ = uVar18;
    uVar3 = *(int *)(uVar14 + 0x10) - uVar3;
    uVar22 = (ulong)uVar3;
    auVar26._8_4_ = uVar3;
    auVar26._0_8_ = lVar17;
    auVar26._12_4_ = 0;
    *(uint *)(uVar14 + 0x10) = uVar3;
    if (lVar17 != 0) {
      *(ulong *)(puVar9 + -0x30) = uVar15;
      *(ulong *)(puVar9 + -0x28) = uVar21;
      *(undefined8 *)(puVar9 + -0x20) = uVar12;
      *(undefined8 *)(puVar9 + -0x18) = uVar24;
      *(undefined8 *)(puVar9 + -0x10) = *(undefined8 *)(puVar9 + -0x10);
      *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
      puVar23 = puVar9 + -0x10;
      puVar25 = &UNK_016cc908;
      uVar15 = 0;
      goto code_r0x016cc7a4;
    }
    lVar17 = func_0x00f78af4();
    puVar23 = puVar9 + -0x20;
    *(undefined1 **)(puVar9 + -0x20) = puVar9 + -0x10;
    *(undefined **)(puVar9 + -0x18) = &FlatBuffers_FlatBufferBuilder__GrowBuffer;
    if ((*(long *)(lVar17 + 0x18) != 0) &&
       (plVar13 = *(long **)(*(long *)(lVar17 + 0x18) + 0x10), plVar13 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016cdaa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar15 = (**(code **)(*plVar13 + 0x178))
                         (plVar13,(int)plVar13[3] << 1,*(undefined8 *)(*plVar13 + 0x180));
      return uVar15;
    }
    puVar25 = &FlatBuffers_FlatBufferBuilder__Prep;
    auVar27 = func_0x00f78af4();
    puVar9 = puVar9 + -0x20;
  }
code_r0x016cdb68:
  auVar6._8_8_ = uVar18;
  auVar6._0_8_ = uVar21;
  auVar28 = func_0x00f78af4();
  uVar15 = auVar28._8_8_;
  lVar19 = auVar28._0_8_;
  *(undefined1 **)(puVar9 + -0x40) = puVar9 + -0x10;
  *(undefined **)(puVar9 + -0x38) = &FlatBuffers_FlatBufferBuilder__PutBool;
  lVar17 = *(long *)(lVar19 + 0x18);
  iVar16 = *(int *)(lVar19 + 0x10) + -1;
  *(int *)(lVar19 + 0x10) = iVar16;
  if (lVar17 == 0) {
    auVar28 = func_0x00f78af4();
    uVar20 = auVar28._8_8_;
    lVar17 = auVar28._0_8_;
    *(undefined1 **)(puVar9 + -0x50) = puVar9 + -0x40;
    *(undefined **)(puVar9 + -0x48) = &FlatBuffers_FlatBufferBuilder__PutSbyte;
    iVar16 = *(int *)(lVar17 + 0x10) + -1;
    auVar26._8_4_ = iVar16;
    auVar26._0_8_ = *(long *)(lVar17 + 0x18);
    auVar26._12_4_ = 0;
    *(int *)(lVar17 + 0x10) = iVar16;
    if (*(long *)(lVar17 + 0x18) != 0) {
      puVar11 = puVar9 + -0x40;
      puVar23 = *(undefined1 **)(puVar9 + -0x50);
      puVar25 = *(undefined **)(puVar9 + -0x48);
      uVar15 = uVar14;
      goto code_r0x016cc810;
    }
    auVar28 = func_0x00f78af4();
    uVar15 = auVar28._8_8_;
    lVar19 = auVar28._0_8_;
    *(undefined1 **)(puVar9 + -0x60) = puVar9 + -0x50;
    *(undefined **)(puVar9 + -0x58) = &FlatBuffers_FlatBufferBuilder__PutByte;
    lVar17 = *(long *)(lVar19 + 0x18);
    iVar16 = *(int *)(lVar19 + 0x10) + -1;
    *(int *)(lVar19 + 0x10) = iVar16;
    if (lVar17 == 0) {
      auVar28 = func_0x00f78af4();
      uVar15 = auVar28._8_8_;
      lVar17 = auVar28._0_8_;
      puVar8 = puVar9 + -0x90;
      *(ulong *)(puVar9 + -0x90) = uVar22;
      *(ulong *)(puVar9 + -0x88) = uVar21;
      *(ulong *)(puVar9 + -0x80) = uVar18;
      *(ulong *)(puVar9 + -0x78) = uVar14;
      *(undefined1 **)(puVar9 + -0x70) = puVar9 + -0x60;
      *(undefined **)(puVar9 + -0x68) = &FlatBuffers_FlatBufferBuilder__PutShort;
      puVar23 = puVar9 + -0x70;
      lVar19 = *(long *)(lVar17 + 0x18);
      uVar2 = *(int *)(lVar17 + 0x10) - 2;
      auVar6._8_8_ = lVar19;
      auVar6._0_8_ = CONCAT44(0,uVar2);
      auVar26._8_4_ = uVar2;
      auVar26._0_8_ = lVar19;
      auVar26._12_4_ = 0;
      *(uint *)(lVar17 + 0x10) = uVar2;
      if (lVar19 != 0) {
        uVar18 = 2;
        puVar25 = &UNK_016cdc34;
        goto code_r0x016cc7a4;
      }
      auVar28 = func_0x00f78af4();
      uVar15 = auVar28._8_8_;
      lVar17 = auVar28._0_8_;
      puVar8 = puVar9 + -0xc0;
      *(ulong *)(puVar9 + -0xc0) = uVar22;
      *(ulong *)(puVar9 + -0xb8) = CONCAT44(0,uVar2);
      *(undefined8 *)(puVar9 + -0xb0) = 0;
      *(ulong *)(puVar9 + -0xa8) = uVar14;
      *(undefined1 **)(puVar9 + -0xa0) = puVar23;
      *(undefined **)(puVar9 + -0x98) = &FlatBuffers_FlatBufferBuilder__PutUshort;
      puVar23 = puVar9 + -0xa0;
      lVar19 = *(long *)(lVar17 + 0x18);
      uVar2 = *(int *)(lVar17 + 0x10) - 2;
      auVar6._8_8_ = lVar19;
      auVar6._0_8_ = CONCAT44(0,uVar2);
      auVar26._8_4_ = uVar2;
      auVar26._0_8_ = lVar19;
      auVar26._12_4_ = 0;
      *(uint *)(lVar17 + 0x10) = uVar2;
      if (lVar19 != 0) {
        uVar18 = 2;
        puVar25 = &UNK_016cdc90;
        goto code_r0x016cc7a4;
      }
      auVar28 = func_0x00f78af4();
      uVar15 = auVar28._8_8_;
      lVar17 = auVar28._0_8_;
      puVar8 = puVar9 + -0xf0;
      *(ulong *)(puVar9 + -0xf0) = uVar22;
      *(ulong *)(puVar9 + -0xe8) = CONCAT44(0,uVar2);
      *(undefined8 *)(puVar9 + -0xe0) = 0;
      *(ulong *)(puVar9 + -0xd8) = uVar14;
      *(undefined1 **)(puVar9 + -0xd0) = puVar23;
      *(undefined **)(puVar9 + -200) = &FlatBuffers_FlatBufferBuilder__PutInt;
      puVar23 = puVar9 + -0xd0;
      lVar19 = *(long *)(lVar17 + 0x18);
      uVar2 = *(int *)(lVar17 + 0x10) - 4;
      auVar6._8_8_ = lVar19;
      auVar6._0_8_ = CONCAT44(0,uVar2);
      auVar26._8_4_ = uVar2;
      auVar26._0_8_ = lVar19;
      auVar26._12_4_ = 0;
      *(uint *)(lVar17 + 0x10) = uVar2;
      if (lVar19 != 0) {
        uVar18 = 4;
        puVar25 = &UNK_016cdcec;
        goto code_r0x016cc7a4;
      }
      auVar28 = func_0x00f78af4();
      uVar15 = auVar28._8_8_;
      lVar17 = auVar28._0_8_;
      puVar8 = puVar9 + -0x120;
      *(ulong *)(puVar9 + -0x120) = uVar22;
      *(ulong *)(puVar9 + -0x118) = CONCAT44(0,uVar2);
      *(undefined8 *)(puVar9 + -0x110) = 0;
      *(ulong *)(puVar9 + -0x108) = uVar14;
      *(undefined1 **)(puVar9 + -0x100) = puVar23;
      *(undefined **)(puVar9 + -0xf8) = &FlatBuffers_FlatBufferBuilder__PutUint;
      puVar23 = puVar9 + -0x100;
      lVar19 = *(long *)(lVar17 + 0x18);
      uVar2 = *(int *)(lVar17 + 0x10) - 4;
      auVar6._8_8_ = lVar19;
      auVar6._0_8_ = CONCAT44(0,uVar2);
      auVar26._8_4_ = uVar2;
      auVar26._0_8_ = lVar19;
      auVar26._12_4_ = 0;
      *(uint *)(lVar17 + 0x10) = uVar2;
      if (lVar19 != 0) {
        uVar18 = 4;
        puVar25 = &UNK_016cdd48;
        goto code_r0x016cc7a4;
      }
      auVar28 = func_0x00f78af4();
      uVar15 = auVar28._8_8_;
      lVar17 = auVar28._0_8_;
      puVar8 = puVar9 + -0x150;
      *(ulong *)(puVar9 + -0x150) = uVar22;
      *(ulong *)(puVar9 + -0x148) = CONCAT44(0,uVar2);
      *(undefined8 *)(puVar9 + -0x140) = 0;
      *(ulong *)(puVar9 + -0x138) = uVar14;
      *(undefined1 **)(puVar9 + -0x130) = puVar23;
      *(undefined **)(puVar9 + -0x128) = &FlatBuffers_FlatBufferBuilder__PutLong;
      puVar23 = puVar9 + -0x130;
      lVar19 = *(long *)(lVar17 + 0x18);
      uVar2 = *(int *)(lVar17 + 0x10) - 8;
      auVar6._8_8_ = lVar19;
      auVar6._0_8_ = CONCAT44(0,uVar2);
      auVar26._8_4_ = uVar2;
      auVar26._0_8_ = lVar19;
      auVar26._12_4_ = 0;
      *(uint *)(lVar17 + 0x10) = uVar2;
      if (lVar19 != 0) {
        uVar18 = 8;
        puVar25 = &UNK_016cdda4;
        goto code_r0x016cc7a4;
      }
      auVar28 = func_0x00f78af4();
      uVar15 = auVar28._8_8_;
      lVar17 = auVar28._0_8_;
      puVar8 = puVar9 + -0x180;
      *(ulong *)(puVar9 + -0x180) = uVar22;
      *(ulong *)(puVar9 + -0x178) = CONCAT44(0,uVar2);
      *(undefined8 *)(puVar9 + -0x170) = 0;
      *(ulong *)(puVar9 + -0x168) = uVar14;
      *(undefined1 **)(puVar9 + -0x160) = puVar23;
      *(undefined **)(puVar9 + -0x158) = &FlatBuffers_FlatBufferBuilder__PutUlong;
      puVar23 = puVar9 + -0x160;
      lVar19 = *(long *)(lVar17 + 0x18);
      uVar2 = *(int *)(lVar17 + 0x10) - 8;
      uVar21 = CONCAT44(0,uVar2);
      auVar6._8_8_ = lVar19;
      auVar6._0_8_ = uVar21;
      auVar26._8_4_ = uVar2;
      auVar26._0_8_ = lVar19;
      auVar26._12_4_ = 0;
      *(uint *)(lVar17 + 0x10) = uVar2;
      if (lVar19 != 0) {
        uVar18 = 8;
        puVar25 = &UNK_016cde00;
        goto code_r0x016cc7a4;
      }
      lVar17 = func_0x00f78af4();
      *(undefined1 **)(puVar9 + -400) = puVar23;
      *(undefined **)(puVar9 + -0x188) = &FlatBuffers_FlatBufferBuilder__PutFloat;
      lVar19 = *(long *)(lVar17 + 0x18);
      auVar6._8_8_ = lVar19;
      uVar2 = *(int *)(lVar17 + 0x10) - 4;
      uVar15 = (ulong)uVar2;
      auVar26._8_4_ = uVar2;
      auVar26._0_8_ = lVar19;
      auVar26._12_4_ = 0;
      *(uint *)(lVar17 + 0x10) = uVar2;
      if (lVar19 != 0) {
        puVar8 = puVar9 + -0x1b0;
        *(undefined8 *)(puVar9 + -0x1b0) = unaff_d9;
        *(undefined8 *)(puVar9 + -0x1a8) = unaff_d8;
        *(undefined8 *)(puVar9 + -0x1a0) = 0;
        *(ulong *)(puVar9 + -0x198) = uVar14;
        *(undefined8 *)(puVar9 + -400) = *(undefined8 *)(puVar9 + -400);
        *(undefined8 *)(puVar9 + -0x188) = *(undefined8 *)(puVar9 + -0x188);
        puVar23 = puVar9 + -400;
        uVar18 = 4;
        puVar25 = &UNK_016ccba4;
        goto code_r0x016cc7a4;
      }
      lVar17 = func_0x00f78af4();
      *(undefined1 **)(puVar9 + -0x1a0) = puVar9 + -400;
      *(undefined **)(puVar9 + -0x198) = &FlatBuffers_FlatBufferBuilder__PutDouble;
      lVar19 = *(long *)(lVar17 + 0x18);
      auVar6._8_8_ = lVar19;
      uVar2 = *(int *)(lVar17 + 0x10) - 8;
      uVar15 = (ulong)uVar2;
      auVar26._8_4_ = uVar2;
      auVar26._0_8_ = lVar19;
      auVar26._12_4_ = 0;
      *(uint *)(lVar17 + 0x10) = uVar2;
      if (lVar19 != 0) {
        puVar8 = puVar9 + -0x1c0;
        *(undefined8 *)(puVar9 + -0x1c0) = unaff_d9;
        *(undefined8 *)(puVar9 + -0x1b8) = unaff_d8;
        *(undefined8 *)(puVar9 + -0x1b0) = 0;
        *(ulong *)(puVar9 + -0x1a8) = uVar14;
        *(undefined8 *)(puVar9 + -0x1a0) = *(undefined8 *)(puVar9 + -0x1a0);
        *(undefined8 *)(puVar9 + -0x198) = *(undefined8 *)(puVar9 + -0x198);
        puVar23 = puVar9 + -0x1a0;
        uVar18 = 8;
        puVar25 = &UNK_016ccc34;
        goto code_r0x016cc7a4;
      }
      auVar29 = func_0x00f78af4();
      *(undefined8 *)(puVar9 + -0x1c0) = 0;
      *(ulong *)(puVar9 + -0x1b8) = uVar14;
      *(undefined1 **)(puVar9 + -0x1b0) = puVar9 + -0x1a0;
      *(undefined **)(puVar9 + -0x1a8) = &FlatBuffers_FlatBufferBuilder__AddBool;
      puVar23 = puVar9 + -0x1b0;
      auVar27._8_8_ = 1;
      auVar27._0_8_ = auVar29._0_8_;
      uVar20 = 0;
      puVar25 = &UNK_016cde9c;
      puVar9 = puVar9 + -0x1c0;
      uVar15 = uVar22;
      goto code_r0x016cdaac;
    }
    puVar10 = puVar9 + -0x50;
    uVar12 = *(undefined8 *)(puVar9 + -0x60);
    uVar24 = *(undefined8 *)(puVar9 + -0x58);
  }
  else {
    puVar10 = puVar9 + -0x30;
    uVar12 = *(undefined8 *)(puVar9 + -0x40);
    uVar24 = *(undefined8 *)(puVar9 + -0x38);
  }
  auVar6._8_4_ = iVar16;
  auVar6._0_8_ = lVar17;
  auVar6._12_4_ = 0;
  auVar26._8_4_ = iVar16;
  auVar26._0_8_ = lVar17;
  auVar26._12_4_ = 0;
  puVar8 = puVar10 + -0x30;
  *(ulong *)(puVar10 + -0x30) = uVar22;
  *(ulong *)(puVar10 + -0x28) = uVar21;
  *(ulong *)(puVar10 + -0x20) = uVar18;
  *(ulong *)(puVar10 + -0x18) = uVar14;
  *(undefined8 *)(puVar10 + -0x10) = uVar12;
  *(undefined8 *)(puVar10 + -8) = uVar24;
  puVar23 = puVar10 + -0x10;
  uVar18 = 1;
  puVar25 = &UNK_016cc89c;
code_r0x016cc7a4:
  puVar11 = puVar8 + -0x20;
  *(long *)(puVar8 + -0x20) = auVar6._8_8_;
  *(ulong *)(puVar8 + -0x18) = uVar15;
  *(undefined1 **)(puVar8 + -0x10) = puVar23;
  *(undefined **)(puVar8 + -8) = puVar25;
  puVar23 = puVar8 + -0x10;
  if (auVar26._8_4_ < 0) {
code_r0x016cc7d8:
    func_0x00f78a24(0x3d1fcf8);
    uVar15 = func_0x00f78aec();
    /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a4d0(uVar15,0);
    uVar12 = func_0x00f78a24(0x3d52ce8);
    func_0x00f78ac0(uVar15,uVar12);
    uVar20 = uVar18;
  }
  else {
    lVar17 = *(long *)(auVar26._0_8_ + 0x10);
    uVar20 = uVar18;
    if (lVar17 != 0) {
      if (auVar26._8_4_ <= *(int *)(lVar17 + 0x18) - (int)uVar18) {
        return auVar26._0_8_;
      }
      goto code_r0x016cc7d8;
    }
  }
  puVar25 = &FlatBuffers_ByteBuffer__PutSbyte;
  auVar26 = func_0x00f78af4();
code_r0x016cc810:
  puVar8 = puVar11 + -0x30;
  *(ulong *)(puVar11 + -0x30) = uVar22;
  *(undefined1 (*) [16])(puVar11 + -0x28) = auVar6;
  *(ulong *)(puVar11 + -0x18) = uVar15;
  *(undefined1 **)(puVar11 + -0x10) = puVar23;
  *(undefined **)(puVar11 + -8) = puVar25;
  puVar23 = puVar11 + -0x10;
  uVar18 = 1;
  puVar25 = &UNK_016cc834;
  uVar15 = uVar20;
  auVar6 = auVar26;
  goto code_r0x016cc7a4;
}



// ============================================================
// RVA: 0x16559bc | Core.Networking.HostEventResults.CreateStandingsVector
// ============================================================

/* WARNING: Possible PIC construction at 0x016559f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01655ab4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce184: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc904: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdc30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdc8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdce8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdd44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdda0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cddfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccc30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cccb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccd14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccdc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cde98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016ccdc4) */
/* WARNING: Removing unreachable block (ram,0x016ccd18) */
/* WARNING: Removing unreachable block (ram,0x016ccd20) */
/* WARNING: Removing unreachable block (ram,0x016ccd48) */
/* WARNING: Removing unreachable block (ram,0x016ccd28) */
/* WARNING: Removing unreachable block (ram,0x016ccd4c) */
/* WARNING: Removing unreachable block (ram,0x016ccd84) */
/* WARNING: Removing unreachable block (ram,0x016ccdb0) */
/* WARNING: Removing unreachable block (ram,0x016ccd88) */
/* WARNING: Removing unreachable block (ram,0x016ccd34) */
/* WARNING: Removing unreachable block (ram,0x016cccbc) */
/* WARNING: Removing unreachable block (ram,0x016cccc4) */
/* WARNING: Removing unreachable block (ram,0x016cccec) */
/* WARNING: Removing unreachable block (ram,0x016ccccc) */
/* WARNING: Removing unreachable block (ram,0x016cccf0) */
/* WARNING: Removing unreachable block (ram,0x016cccd8) */
/* WARNING: Removing unreachable block (ram,0x016ccc34) */
/* WARNING: Removing unreachable block (ram,0x016ccc3c) */
/* WARNING: Removing unreachable block (ram,0x016ccc44) */
/* WARNING: Removing unreachable block (ram,0x016ccc90) */
/* WARNING: Removing unreachable block (ram,0x016ccc68) */
/* WARNING: Removing unreachable block (ram,0x016ccc94) */
/* WARNING: Removing unreachable block (ram,0x016ccc70) */
/* WARNING: Removing unreachable block (ram,0x016ccba4) */
/* WARNING: Removing unreachable block (ram,0x016ccbac) */
/* WARNING: Removing unreachable block (ram,0x016ccbb4) */
/* WARNING: Removing unreachable block (ram,0x016ccc00) */
/* WARNING: Removing unreachable block (ram,0x016ccbd8) */
/* WARNING: Removing unreachable block (ram,0x016ccc04) */
/* WARNING: Removing unreachable block (ram,0x016ccbe0) */
/* WARNING: Removing unreachable block (ram,0x016cde00) */
/* WARNING: Removing unreachable block (ram,0x016cdda4) */
/* WARNING: Removing unreachable block (ram,0x016cdd48) */
/* WARNING: Removing unreachable block (ram,0x016cdcec) */
/* WARNING: Removing unreachable block (ram,0x016cdc90) */
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
/* WARNING: Removing unreachable block (ram,0x016cdc34) */
/* WARNING: Removing unreachable block (ram,0x016cc4e0) */
/* WARNING: Removing unreachable block (ram,0x016cc518) */
/* WARNING: Removing unreachable block (ram,0x016cc52c) */
/* WARNING: Removing unreachable block (ram,0x016cc538) */
/* WARNING: Removing unreachable block (ram,0x016cc540) */
/* WARNING: Removing unreachable block (ram,0x016cc548) */
/* WARNING: Removing unreachable block (ram,0x016cc5b8) */
/* WARNING: Removing unreachable block (ram,0x016cc5c0) */
/* WARNING: Removing unreachable block (ram,0x016cc5d4) */
/* WARNING: Removing unreachable block (ram,0x016cc5dc) */
/* WARNING: Removing unreachable block (ram,0x016cc5e4) */
/* WARNING: Removing unreachable block (ram,0x016cc5f0) */
/* WARNING: Removing unreachable block (ram,0x016cc554) */
/* WARNING: Removing unreachable block (ram,0x016cc55c) */
/* WARNING: Removing unreachable block (ram,0x016cc574) */
/* WARNING: Removing unreachable block (ram,0x016cc57c) */
/* WARNING: Removing unreachable block (ram,0x016cc624) */
/* WARNING: Removing unreachable block (ram,0x016cc584) */
/* WARNING: Removing unreachable block (ram,0x016cc628) */
/* WARNING: Removing unreachable block (ram,0x016cc634) */
/* WARNING: Removing unreachable block (ram,0x016cc668) */
/* WARNING: Removing unreachable block (ram,0x016cc67c) */
/* WARNING: Removing unreachable block (ram,0x016cc590) */
/* WARNING: Removing unreachable block (ram,0x016cc5b4) */
/* WARNING: Removing unreachable block (ram,0x016cc610) */
/* WARNING: Removing unreachable block (ram,0x016cc834) */
/* WARNING: Removing unreachable block (ram,0x016cc83c) */
/* WARNING: Removing unreachable block (ram,0x016cc868) */
/* WARNING: Removing unreachable block (ram,0x016cc844) */
/* WARNING: Removing unreachable block (ram,0x016cc86c) */
/* WARNING: Removing unreachable block (ram,0x016cc850) */
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
/* WARNING: Removing unreachable block (ram,0x016ce188) */
/* WARNING: Removing unreachable block (ram,0x01655ab8) */
/* WARNING: Removing unreachable block (ram,0x016ce224) */
/* WARNING: Removing unreachable block (ram,0x016cda04) */
/* WARNING: Removing unreachable block (ram,0x016cda14) */
/* WARNING: Removing unreachable block (ram,0x016cda30) */
/* WARNING: Removing unreachable block (ram,0x016cda1c) */
/* WARNING: Removing unreachable block (ram,0x016559f4) */
/* WARNING: Removing unreachable block (ram,0x01655a00) */
/* WARNING: Removing unreachable block (ram,0x01655a08) */
/* WARNING: Removing unreachable block (ram,0x01655a24) */
/* WARNING: Removing unreachable block (ram,0x01655a30) */
/* WARNING: Removing unreachable block (ram,0x01655a3c) */
/* WARNING: Removing unreachable block (ram,0x016ce20c) */
/* WARNING: Removing unreachable block (ram,0x016cde9c) */

ulong Core_Networking_HostEventResults__CreateStandingsVector(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  undefined8 unaff_x21;
  ulong uVar19;
  undefined8 unaff_x22;
  ulong uVar20;
  undefined1 *puVar21;
  undefined8 ****ppppuVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [12];
  undefined8 ***pppuStack_40;
  undefined *puStack_38;
  
  auVar25._8_8_ = param_2;
  auVar25._0_8_ = param_1;
  if ((param_2 == 0) || (param_1 == 0)) {
    auVar25 = func_0x00f78af4();
    lVar15 = auVar25._8_8_;
    param_1 = auVar25._0_8_;
    puVar7 = &stack0xffffffffffffffa0;
    puStack_38 = &Core_Networking_HostEventResults__CreateStandingsVectorBlock;
    ppppuVar22 = &pppuStack_40;
    unaff_x21 = 0x3eb5000;
    pppuStack_40 = (undefined8 ***)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb57fa & 1) == 0) {
      func_0x00f78a20(0x3d56998);
      bRam0000000003eb57fa = 1;
    }
    if ((lVar15 == 0) || (param_1 == 0)) {
      puVar23 = &Core_Networking_HostEventResults__StartStandingsVector;
      auVar29 = func_0x00f78af4();
      iVar14 = auVar29._8_4_;
      auVar25._8_8_ = lVar15;
      auVar25._0_8_ = auVar29._0_8_;
      if (auVar29._0_8_ == 0) {
        lVar15 = func_0x00f78af4();
        return *(ulong *)(lVar15 + 8);
      }
    }
    else {
      unaff_x21 = 0x3d56000;
      iVar14 = *(int *)(lVar15 + 0x18);
      puVar23 = &UNK_01655ab8;
      puVar7 = &stack0xffffffffffffffa0;
    }
  }
  else {
    iVar14 = *(int *)(param_2 + 0x18);
    puVar23 = (undefined *)0x16559f4;
    puVar7 = &stack0xffffffffffffffd0;
    ppppuVar22 = (undefined8 ****)&stack0xfffffffffffffff0;
  }
  uVar13 = auVar25._0_8_;
  uVar19 = 4;
  *(undefined8 *)(puVar7 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
  *(long *)(puVar7 + -0x20) = auVar25._8_8_;
  *(long *)(puVar7 + -0x18) = param_1;
  *(undefined8 *****)(puVar7 + -0x10) = ppppuVar22;
  *(undefined **)(puVar7 + -8) = puVar23;
  puVar21 = puVar7 + -0x10;
  /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4();
  *(int *)(uVar13 + 0x44) = iVar14;
  uVar18 = CONCAT44(0,iVar14 * 4);
  auVar28._8_8_ = 4;
  auVar28._0_8_ = uVar18;
  auVar27._8_8_ = 4;
  auVar27._0_8_ = uVar13;
  puVar23 = &UNK_016ce188;
  puVar7 = puVar7 + -0x30;
code_r0x016cdaac:
  while( true ) {
    uVar16 = auVar28._0_8_;
    uVar12 = auVar27._0_8_;
    puVar6 = puVar7 + -0x30;
    *(ulong *)(puVar7 + -0x30) = uVar13;
    *(ulong *)(puVar7 + -0x28) = uVar19;
    *(undefined1 (*) [16])(puVar7 + -0x20) = auVar28;
    *(undefined1 **)(puVar7 + -0x10) = puVar21;
    *(undefined **)(puVar7 + -8) = puVar23;
    iVar14 = auVar27._8_4_;
    if (*(int *)(uVar12 + 0x20) < iVar14) {
      *(int *)(uVar12 + 0x20) = iVar14;
    }
    uVar20 = uVar13;
    if ((*(long *)(uVar12 + 0x18) == 0) ||
       (lVar15 = *(long *)(*(long *)(uVar12 + 0x18) + 0x10), lVar15 == 0)) break;
    uVar3 = *(uint *)(lVar15 + 0x18);
    iVar4 = *(int *)(uVar12 + 0x10);
    uVar2 = iVar4 - (uVar3 + (int)uVar18) & iVar14 - 1U;
    uVar16 = CONCAT44(0,uVar2);
    uVar1 = (int)uVar18 + iVar14 + uVar2;
    uVar20 = (ulong)uVar1;
    uVar13 = uVar12;
    while (uVar19 = (ulong)uVar3, iVar4 < (int)uVar1) {
      uVar13 = /*FlatBuffers.FlatBufferBuilder$$GrowBuffer*/ func_0x016cda78(uVar12);
      if ((*(long *)(uVar12 + 0x18) == 0) ||
         (lVar15 = *(long *)(*(long *)(uVar12 + 0x18) + 0x10), lVar15 == 0)) goto code_r0x016cdb68;
      iVar4 = *(int *)(uVar12 + 0x10) - uVar3;
      uVar3 = *(uint *)(lVar15 + 0x18);
      iVar4 = iVar4 + uVar3;
      *(int *)(uVar12 + 0x10) = iVar4;
    }
    if ((int)uVar2 < 1) {
      return uVar13;
    }
    uVar10 = *(undefined8 *)*(undefined1 (*) [16])(puVar7 + -0x20);
    uVar24 = *(undefined8 *)(puVar7 + -0x18);
    auVar28 = *(undefined1 (*) [16])(puVar7 + -0x20);
    uVar13 = *(ulong *)(puVar7 + -0x30);
    uVar19 = *(ulong *)(puVar7 + -0x28);
    *(undefined8 *)(puVar7 + -0x10) = *(undefined8 *)(puVar7 + -0x10);
    *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
    lVar15 = *(long *)(uVar12 + 0x18);
    auVar5._8_8_ = lVar15;
    auVar5._0_8_ = uVar16;
    uVar2 = *(int *)(uVar12 + 0x10) - uVar2;
    uVar20 = (ulong)uVar2;
    auVar26._8_4_ = uVar2;
    auVar26._0_8_ = lVar15;
    auVar26._12_4_ = 0;
    *(uint *)(uVar12 + 0x10) = uVar2;
    if (lVar15 != 0) {
      *(ulong *)(puVar7 + -0x30) = uVar13;
      *(ulong *)(puVar7 + -0x28) = uVar19;
      *(undefined8 *)(puVar7 + -0x20) = uVar10;
      *(undefined8 *)(puVar7 + -0x18) = uVar24;
      *(undefined8 *)(puVar7 + -0x10) = *(undefined8 *)(puVar7 + -0x10);
      *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
      puVar21 = puVar7 + -0x10;
      puVar23 = &UNK_016cc908;
      uVar13 = 0;
      goto code_r0x016cc7a4;
    }
    lVar15 = func_0x00f78af4();
    puVar21 = puVar7 + -0x20;
    *(undefined1 **)(puVar7 + -0x20) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x18) = &FlatBuffers_FlatBufferBuilder__GrowBuffer;
    if ((*(long *)(lVar15 + 0x18) != 0) &&
       (plVar11 = *(long **)(*(long *)(lVar15 + 0x18) + 0x10), plVar11 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016cdaa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (**(code **)(*plVar11 + 0x178))
                         (plVar11,(int)plVar11[3] << 1,*(undefined8 *)(*plVar11 + 0x180));
      return uVar13;
    }
    puVar23 = &FlatBuffers_FlatBufferBuilder__Prep;
    auVar27 = func_0x00f78af4();
    puVar7 = puVar7 + -0x20;
  }
code_r0x016cdb68:
  auVar5._8_8_ = uVar16;
  auVar5._0_8_ = uVar19;
  auVar25 = func_0x00f78af4();
  uVar13 = auVar25._8_8_;
  lVar17 = auVar25._0_8_;
  *(undefined1 **)(puVar7 + -0x40) = puVar7 + -0x10;
  *(undefined **)(puVar7 + -0x38) = &FlatBuffers_FlatBufferBuilder__PutBool;
  lVar15 = *(long *)(lVar17 + 0x18);
  iVar14 = *(int *)(lVar17 + 0x10) + -1;
  *(int *)(lVar17 + 0x10) = iVar14;
  if (lVar15 == 0) {
    auVar25 = func_0x00f78af4();
    uVar18 = auVar25._8_8_;
    lVar15 = auVar25._0_8_;
    *(undefined1 **)(puVar7 + -0x50) = puVar7 + -0x40;
    *(undefined **)(puVar7 + -0x48) = &FlatBuffers_FlatBufferBuilder__PutSbyte;
    iVar14 = *(int *)(lVar15 + 0x10) + -1;
    auVar26._8_4_ = iVar14;
    auVar26._0_8_ = *(long *)(lVar15 + 0x18);
    auVar26._12_4_ = 0;
    *(int *)(lVar15 + 0x10) = iVar14;
    if (*(long *)(lVar15 + 0x18) != 0) {
      puVar9 = puVar7 + -0x40;
      puVar21 = *(undefined1 **)(puVar7 + -0x50);
      puVar23 = *(undefined **)(puVar7 + -0x48);
      uVar13 = uVar12;
      goto code_r0x016cc810;
    }
    auVar25 = func_0x00f78af4();
    uVar13 = auVar25._8_8_;
    lVar17 = auVar25._0_8_;
    *(undefined1 **)(puVar7 + -0x60) = puVar7 + -0x50;
    *(undefined **)(puVar7 + -0x58) = &FlatBuffers_FlatBufferBuilder__PutByte;
    lVar15 = *(long *)(lVar17 + 0x18);
    iVar14 = *(int *)(lVar17 + 0x10) + -1;
    *(int *)(lVar17 + 0x10) = iVar14;
    if (lVar15 == 0) {
      auVar25 = func_0x00f78af4();
      uVar13 = auVar25._8_8_;
      lVar15 = auVar25._0_8_;
      puVar6 = puVar7 + -0x90;
      *(ulong *)(puVar7 + -0x90) = uVar20;
      *(ulong *)(puVar7 + -0x88) = uVar19;
      *(ulong *)(puVar7 + -0x80) = uVar16;
      *(ulong *)(puVar7 + -0x78) = uVar12;
      *(undefined1 **)(puVar7 + -0x70) = puVar7 + -0x60;
      *(undefined **)(puVar7 + -0x68) = &FlatBuffers_FlatBufferBuilder__PutShort;
      puVar21 = puVar7 + -0x70;
      lVar17 = *(long *)(lVar15 + 0x18);
      uVar1 = *(int *)(lVar15 + 0x10) - 2;
      auVar5._8_8_ = lVar17;
      auVar5._0_8_ = CONCAT44(0,uVar1);
      auVar26._8_4_ = uVar1;
      auVar26._0_8_ = lVar17;
      auVar26._12_4_ = 0;
      *(uint *)(lVar15 + 0x10) = uVar1;
      if (lVar17 != 0) {
        uVar16 = 2;
        puVar23 = &UNK_016cdc34;
        goto code_r0x016cc7a4;
      }
      auVar25 = func_0x00f78af4();
      uVar13 = auVar25._8_8_;
      lVar15 = auVar25._0_8_;
      puVar6 = puVar7 + -0xc0;
      *(ulong *)(puVar7 + -0xc0) = uVar20;
      *(ulong *)(puVar7 + -0xb8) = CONCAT44(0,uVar1);
      *(undefined8 *)(puVar7 + -0xb0) = 0;
      *(ulong *)(puVar7 + -0xa8) = uVar12;
      *(undefined1 **)(puVar7 + -0xa0) = puVar21;
      *(undefined **)(puVar7 + -0x98) = &FlatBuffers_FlatBufferBuilder__PutUshort;
      puVar21 = puVar7 + -0xa0;
      lVar17 = *(long *)(lVar15 + 0x18);
      uVar1 = *(int *)(lVar15 + 0x10) - 2;
      auVar5._8_8_ = lVar17;
      auVar5._0_8_ = CONCAT44(0,uVar1);
      auVar26._8_4_ = uVar1;
      auVar26._0_8_ = lVar17;
      auVar26._12_4_ = 0;
      *(uint *)(lVar15 + 0x10) = uVar1;
      if (lVar17 != 0) {
        uVar16 = 2;
        puVar23 = &UNK_016cdc90;
        goto code_r0x016cc7a4;
      }
      auVar25 = func_0x00f78af4();
      uVar13 = auVar25._8_8_;
      lVar15 = auVar25._0_8_;
      puVar6 = puVar7 + -0xf0;
      *(ulong *)(puVar7 + -0xf0) = uVar20;
      *(ulong *)(puVar7 + -0xe8) = CONCAT44(0,uVar1);
      *(undefined8 *)(puVar7 + -0xe0) = 0;
      *(ulong *)(puVar7 + -0xd8) = uVar12;
      *(undefined1 **)(puVar7 + -0xd0) = puVar21;
      *(undefined **)(puVar7 + -200) = &FlatBuffers_FlatBufferBuilder__PutInt;
      puVar21 = puVar7 + -0xd0;
      lVar17 = *(long *)(lVar15 + 0x18);
      uVar1 = *(int *)(lVar15 + 0x10) - 4;
      auVar5._8_8_ = lVar17;
      auVar5._0_8_ = CONCAT44(0,uVar1);
      auVar26._8_4_ = uVar1;
      auVar26._0_8_ = lVar17;
      auVar26._12_4_ = 0;
      *(uint *)(lVar15 + 0x10) = uVar1;
      if (lVar17 != 0) {
        uVar16 = 4;
        puVar23 = &UNK_016cdcec;
        goto code_r0x016cc7a4;
      }
      auVar25 = func_0x00f78af4();
      uVar13 = auVar25._8_8_;
      lVar15 = auVar25._0_8_;
      puVar6 = puVar7 + -0x120;
      *(ulong *)(puVar7 + -0x120) = uVar20;
      *(ulong *)(puVar7 + -0x118) = CONCAT44(0,uVar1);
      *(undefined8 *)(puVar7 + -0x110) = 0;
      *(ulong *)(puVar7 + -0x108) = uVar12;
      *(undefined1 **)(puVar7 + -0x100) = puVar21;
      *(undefined **)(puVar7 + -0xf8) = &FlatBuffers_FlatBufferBuilder__PutUint;
      puVar21 = puVar7 + -0x100;
      lVar17 = *(long *)(lVar15 + 0x18);
      uVar1 = *(int *)(lVar15 + 0x10) - 4;
      auVar5._8_8_ = lVar17;
      auVar5._0_8_ = CONCAT44(0,uVar1);
      auVar26._8_4_ = uVar1;
      auVar26._0_8_ = lVar17;
      auVar26._12_4_ = 0;
      *(uint *)(lVar15 + 0x10) = uVar1;
      if (lVar17 != 0) {
        uVar16 = 4;
        puVar23 = &UNK_016cdd48;
        goto code_r0x016cc7a4;
      }
      auVar25 = func_0x00f78af4();
      uVar13 = auVar25._8_8_;
      lVar15 = auVar25._0_8_;
      puVar6 = puVar7 + -0x150;
      *(ulong *)(puVar7 + -0x150) = uVar20;
      *(ulong *)(puVar7 + -0x148) = CONCAT44(0,uVar1);
      *(undefined8 *)(puVar7 + -0x140) = 0;
      *(ulong *)(puVar7 + -0x138) = uVar12;
      *(undefined1 **)(puVar7 + -0x130) = puVar21;
      *(undefined **)(puVar7 + -0x128) = &FlatBuffers_FlatBufferBuilder__PutLong;
      puVar21 = puVar7 + -0x130;
      lVar17 = *(long *)(lVar15 + 0x18);
      uVar1 = *(int *)(lVar15 + 0x10) - 8;
      auVar5._8_8_ = lVar17;
      auVar5._0_8_ = CONCAT44(0,uVar1);
      auVar26._8_4_ = uVar1;
      auVar26._0_8_ = lVar17;
      auVar26._12_4_ = 0;
      *(uint *)(lVar15 + 0x10) = uVar1;
      if (lVar17 != 0) {
        uVar16 = 8;
        puVar23 = &UNK_016cdda4;
        goto code_r0x016cc7a4;
      }
      auVar25 = func_0x00f78af4();
      uVar13 = auVar25._8_8_;
      lVar15 = auVar25._0_8_;
      puVar6 = puVar7 + -0x180;
      *(ulong *)(puVar7 + -0x180) = uVar20;
      *(ulong *)(puVar7 + -0x178) = CONCAT44(0,uVar1);
      *(undefined8 *)(puVar7 + -0x170) = 0;
      *(ulong *)(puVar7 + -0x168) = uVar12;
      *(undefined1 **)(puVar7 + -0x160) = puVar21;
      *(undefined **)(puVar7 + -0x158) = &FlatBuffers_FlatBufferBuilder__PutUlong;
      puVar21 = puVar7 + -0x160;
      lVar17 = *(long *)(lVar15 + 0x18);
      uVar1 = *(int *)(lVar15 + 0x10) - 8;
      uVar19 = CONCAT44(0,uVar1);
      auVar5._8_8_ = lVar17;
      auVar5._0_8_ = uVar19;
      auVar26._8_4_ = uVar1;
      auVar26._0_8_ = lVar17;
      auVar26._12_4_ = 0;
      *(uint *)(lVar15 + 0x10) = uVar1;
      if (lVar17 != 0) {
        uVar16 = 8;
        puVar23 = &UNK_016cde00;
        goto code_r0x016cc7a4;
      }
      lVar15 = func_0x00f78af4();
      *(undefined1 **)(puVar7 + -400) = puVar21;
      *(undefined **)(puVar7 + -0x188) = &FlatBuffers_FlatBufferBuilder__PutFloat;
      lVar17 = *(long *)(lVar15 + 0x18);
      auVar5._8_8_ = lVar17;
      uVar1 = *(int *)(lVar15 + 0x10) - 4;
      uVar13 = (ulong)uVar1;
      auVar26._8_4_ = uVar1;
      auVar26._0_8_ = lVar17;
      auVar26._12_4_ = 0;
      *(uint *)(lVar15 + 0x10) = uVar1;
      if (lVar17 != 0) {
        puVar6 = puVar7 + -0x1b0;
        *(undefined8 *)(puVar7 + -0x1b0) = unaff_d9;
        *(undefined8 *)(puVar7 + -0x1a8) = unaff_d8;
        *(undefined8 *)(puVar7 + -0x1a0) = 0;
        *(ulong *)(puVar7 + -0x198) = uVar12;
        *(undefined8 *)(puVar7 + -400) = *(undefined8 *)(puVar7 + -400);
        *(undefined8 *)(puVar7 + -0x188) = *(undefined8 *)(puVar7 + -0x188);
        puVar21 = puVar7 + -400;
        uVar16 = 4;
        puVar23 = &UNK_016ccba4;
        goto code_r0x016cc7a4;
      }
      lVar15 = func_0x00f78af4();
      *(undefined1 **)(puVar7 + -0x1a0) = puVar7 + -400;
      *(undefined **)(puVar7 + -0x198) = &FlatBuffers_FlatBufferBuilder__PutDouble;
      lVar17 = *(long *)(lVar15 + 0x18);
      auVar5._8_8_ = lVar17;
      uVar1 = *(int *)(lVar15 + 0x10) - 8;
      uVar13 = (ulong)uVar1;
      auVar26._8_4_ = uVar1;
      auVar26._0_8_ = lVar17;
      auVar26._12_4_ = 0;
      *(uint *)(lVar15 + 0x10) = uVar1;
      if (lVar17 != 0) {
        puVar6 = puVar7 + -0x1c0;
        *(undefined8 *)(puVar7 + -0x1c0) = unaff_d9;
        *(undefined8 *)(puVar7 + -0x1b8) = unaff_d8;
        *(undefined8 *)(puVar7 + -0x1b0) = 0;
        *(ulong *)(puVar7 + -0x1a8) = uVar12;
        *(undefined8 *)(puVar7 + -0x1a0) = *(undefined8 *)(puVar7 + -0x1a0);
        *(undefined8 *)(puVar7 + -0x198) = *(undefined8 *)(puVar7 + -0x198);
        puVar21 = puVar7 + -0x1a0;
        uVar16 = 8;
        puVar23 = &UNK_016ccc34;
        goto code_r0x016cc7a4;
      }
      auVar28 = func_0x00f78af4();
      *(undefined8 *)(puVar7 + -0x1c0) = 0;
      *(ulong *)(puVar7 + -0x1b8) = uVar12;
      *(undefined1 **)(puVar7 + -0x1b0) = puVar7 + -0x1a0;
      *(undefined **)(puVar7 + -0x1a8) = &FlatBuffers_FlatBufferBuilder__AddBool;
      puVar21 = puVar7 + -0x1b0;
      auVar27._8_8_ = 1;
      auVar27._0_8_ = auVar28._0_8_;
      uVar18 = 0;
      puVar23 = &UNK_016cde9c;
      puVar7 = puVar7 + -0x1c0;
      uVar13 = uVar20;
      goto code_r0x016cdaac;
    }
    puVar8 = puVar7 + -0x50;
    uVar10 = *(undefined8 *)(puVar7 + -0x60);
    uVar24 = *(undefined8 *)(puVar7 + -0x58);
  }
  else {
    puVar8 = puVar7 + -0x30;
    uVar10 = *(undefined8 *)(puVar7 + -0x40);
    uVar24 = *(undefined8 *)(puVar7 + -0x38);
  }
  auVar5._8_4_ = iVar14;
  auVar5._0_8_ = lVar15;
  auVar5._12_4_ = 0;
  auVar26._8_4_ = iVar14;
  auVar26._0_8_ = lVar15;
  auVar26._12_4_ = 0;
  puVar6 = puVar8 + -0x30;
  *(ulong *)(puVar8 + -0x30) = uVar20;
  *(ulong *)(puVar8 + -0x28) = uVar19;
  *(ulong *)(puVar8 + -0x20) = uVar16;
  *(ulong *)(puVar8 + -0x18) = uVar12;
  *(undefined8 *)(puVar8 + -0x10) = uVar10;
  *(undefined8 *)(puVar8 + -8) = uVar24;
  puVar21 = puVar8 + -0x10;
  uVar16 = 1;
  puVar23 = &UNK_016cc89c;
code_r0x016cc7a4:
  puVar9 = puVar6 + -0x20;
  *(long *)(puVar6 + -0x20) = auVar5._8_8_;
  *(ulong *)(puVar6 + -0x18) = uVar13;
  *(undefined1 **)(puVar6 + -0x10) = puVar21;
  *(undefined **)(puVar6 + -8) = puVar23;
  puVar21 = puVar6 + -0x10;
  if (auVar26._8_4_ < 0) {
code_r0x016cc7d8:
    func_0x00f78a24(0x3d1fcf8);
    uVar13 = func_0x00f78aec();
    /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a4d0(uVar13,0);
    uVar10 = func_0x00f78a24(0x3d52ce8);
    func_0x00f78ac0(uVar13,uVar10);
    uVar18 = uVar16;
  }
  else {
    lVar15 = *(long *)(auVar26._0_8_ + 0x10);
    uVar18 = uVar16;
    if (lVar15 != 0) {
      if (auVar26._8_4_ <= *(int *)(lVar15 + 0x18) - (int)uVar16) {
        return auVar26._0_8_;
      }
      goto code_r0x016cc7d8;
    }
  }
  puVar23 = &FlatBuffers_ByteBuffer__PutSbyte;
  auVar26 = func_0x00f78af4();
code_r0x016cc810:
  puVar6 = puVar9 + -0x30;
  *(ulong *)(puVar9 + -0x30) = uVar20;
  *(undefined1 (*) [16])(puVar9 + -0x28) = auVar5;
  *(ulong *)(puVar9 + -0x18) = uVar13;
  *(undefined1 **)(puVar9 + -0x10) = puVar21;
  *(undefined **)(puVar9 + -8) = puVar23;
  puVar21 = puVar9 + -0x10;
  uVar16 = 1;
  puVar23 = &UNK_016cc834;
  uVar13 = uVar18;
  auVar5 = auVar26;
  goto code_r0x016cc7a4;
}



// ============================================================
// RVA: 0x1655a58 | Core.Networking.HostEventResults.CreateStandingsVectorBlock
// ============================================================

/* WARNING: Possible PIC construction at 0x01655ab4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce184: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc904: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdc30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdc8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdce8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdd44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdda0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cddfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccc30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cccb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccd14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccdc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cde98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016ccdc4) */
/* WARNING: Removing unreachable block (ram,0x016ccd18) */
/* WARNING: Removing unreachable block (ram,0x016ccd20) */
/* WARNING: Removing unreachable block (ram,0x016ccd48) */
/* WARNING: Removing unreachable block (ram,0x016ccd28) */
/* WARNING: Removing unreachable block (ram,0x016ccd4c) */
/* WARNING: Removing unreachable block (ram,0x016ccd84) */
/* WARNING: Removing unreachable block (ram,0x016ccdb0) */
/* WARNING: Removing unreachable block (ram,0x016ccd88) */
/* WARNING: Removing unreachable block (ram,0x016ccd34) */
/* WARNING: Removing unreachable block (ram,0x016cccbc) */
/* WARNING: Removing unreachable block (ram,0x016cccc4) */
/* WARNING: Removing unreachable block (ram,0x016cccec) */
/* WARNING: Removing unreachable block (ram,0x016ccccc) */
/* WARNING: Removing unreachable block (ram,0x016cccf0) */
/* WARNING: Removing unreachable block (ram,0x016cccd8) */
/* WARNING: Removing unreachable block (ram,0x016ccc34) */
/* WARNING: Removing unreachable block (ram,0x016ccc3c) */
/* WARNING: Removing unreachable block (ram,0x016ccc44) */
/* WARNING: Removing unreachable block (ram,0x016ccc90) */
/* WARNING: Removing unreachable block (ram,0x016ccc68) */
/* WARNING: Removing unreachable block (ram,0x016ccc94) */
/* WARNING: Removing unreachable block (ram,0x016ccc70) */
/* WARNING: Removing unreachable block (ram,0x016ccba4) */
/* WARNING: Removing unreachable block (ram,0x016ccbac) */
/* WARNING: Removing unreachable block (ram,0x016ccbb4) */
/* WARNING: Removing unreachable block (ram,0x016ccc00) */
/* WARNING: Removing unreachable block (ram,0x016ccbd8) */
/* WARNING: Removing unreachable block (ram,0x016ccc04) */
/* WARNING: Removing unreachable block (ram,0x016ccbe0) */
/* WARNING: Removing unreachable block (ram,0x016cde00) */
/* WARNING: Removing unreachable block (ram,0x016cdda4) */
/* WARNING: Removing unreachable block (ram,0x016cdd48) */
/* WARNING: Removing unreachable block (ram,0x016cdcec) */
/* WARNING: Removing unreachable block (ram,0x016cdc90) */
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
/* WARNING: Removing unreachable block (ram,0x016cdc34) */
/* WARNING: Removing unreachable block (ram,0x016cc4e0) */
/* WARNING: Removing unreachable block (ram,0x016cc518) */
/* WARNING: Removing unreachable block (ram,0x016cc52c) */
/* WARNING: Removing unreachable block (ram,0x016cc538) */
/* WARNING: Removing unreachable block (ram,0x016cc540) */
/* WARNING: Removing unreachable block (ram,0x016cc548) */
/* WARNING: Removing unreachable block (ram,0x016cc5b8) */
/* WARNING: Removing unreachable block (ram,0x016cc5c0) */
/* WARNING: Removing unreachable block (ram,0x016cc5d4) */
/* WARNING: Removing unreachable block (ram,0x016cc5dc) */
/* WARNING: Removing unreachable block (ram,0x016cc5e4) */
/* WARNING: Removing unreachable block (ram,0x016cc5f0) */
/* WARNING: Removing unreachable block (ram,0x016cc554) */
/* WARNING: Removing unreachable block (ram,0x016cc55c) */
/* WARNING: Removing unreachable block (ram,0x016cc574) */
/* WARNING: Removing unreachable block (ram,0x016cc57c) */
/* WARNING: Removing unreachable block (ram,0x016cc624) */
/* WARNING: Removing unreachable block (ram,0x016cc584) */
/* WARNING: Removing unreachable block (ram,0x016cc628) */
/* WARNING: Removing unreachable block (ram,0x016cc634) */
/* WARNING: Removing unreachable block (ram,0x016cc668) */
/* WARNING: Removing unreachable block (ram,0x016cc67c) */
/* WARNING: Removing unreachable block (ram,0x016cc590) */
/* WARNING: Removing unreachable block (ram,0x016cc5b4) */
/* WARNING: Removing unreachable block (ram,0x016cc610) */
/* WARNING: Removing unreachable block (ram,0x016cc834) */
/* WARNING: Removing unreachable block (ram,0x016cc83c) */
/* WARNING: Removing unreachable block (ram,0x016cc868) */
/* WARNING: Removing unreachable block (ram,0x016cc844) */
/* WARNING: Removing unreachable block (ram,0x016cc86c) */
/* WARNING: Removing unreachable block (ram,0x016cc850) */
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
/* WARNING: Removing unreachable block (ram,0x016ce188) */
/* WARNING: Removing unreachable block (ram,0x016ce224) */
/* WARNING: Removing unreachable block (ram,0x016cda04) */
/* WARNING: Removing unreachable block (ram,0x016cda14) */
/* WARNING: Removing unreachable block (ram,0x016cda30) */
/* WARNING: Removing unreachable block (ram,0x016cda1c) */
/* WARNING: Removing unreachable block (ram,0x01655ab8) */
/* WARNING: Removing unreachable block (ram,0x016ce20c) */
/* WARNING: Removing unreachable block (ram,0x016cde9c) */

ulong Core_Networking_HostEventResults__CreateStandingsVectorBlock(ulong param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined1 *puVar21;
  undefined1 **ppuVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [12];
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb57fa & 1) == 0) {
    func_0x00f78a20(0x3d56998);
    bRam0000000003eb57fa = 1;
  }
  puStack_40 = &stack0xfffffffffffffff0;
  if ((param_2 == 0) || (param_1 == 0)) {
    puVar23 = &Core_Networking_HostEventResults__StartStandingsVector;
    auVar28 = func_0x00f78af4();
    iVar14 = auVar28._8_4_;
    param_1 = auVar28._0_8_;
    if (param_1 == 0) {
      puStack_38 = &Core_Networking_HostEventResults__StartStandingsVector;
      lVar15 = func_0x00f78af4();
      return *(ulong *)(lVar15 + 8);
    }
  }
  else {
    iVar14 = *(int *)(param_2 + 0x18);
    puVar23 = (undefined *)0x1655ab8;
  }
  uVar19 = 4;
  ppuVar22 = &puStack_40;
  puStack_38 = puVar23;
  /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4();
  *(int *)(param_1 + 0x44) = iVar14;
  uVar18 = CONCAT44(0,iVar14 * 4);
  auVar27._8_8_ = 4;
  auVar27._0_8_ = uVar18;
  auVar26._8_8_ = 4;
  auVar26._0_8_ = param_1;
  puVar23 = &UNK_016ce188;
  puVar7 = &stack0xffffffffffffffa0;
code_r0x016cdaac:
  while( true ) {
    uVar16 = auVar27._0_8_;
    uVar12 = auVar26._0_8_;
    puVar6 = puVar7 + -0x30;
    *(ulong *)(puVar7 + -0x30) = param_1;
    *(ulong *)(puVar7 + -0x28) = uVar19;
    *(undefined1 (*) [16])(puVar7 + -0x20) = auVar27;
    *(undefined1 ***)(puVar7 + -0x10) = ppuVar22;
    *(undefined **)(puVar7 + -8) = puVar23;
    iVar14 = auVar26._8_4_;
    if (*(int *)(uVar12 + 0x20) < iVar14) {
      *(int *)(uVar12 + 0x20) = iVar14;
    }
    uVar20 = param_1;
    if ((*(long *)(uVar12 + 0x18) == 0) ||
       (lVar15 = *(long *)(*(long *)(uVar12 + 0x18) + 0x10), lVar15 == 0)) break;
    uVar3 = *(uint *)(lVar15 + 0x18);
    iVar4 = *(int *)(uVar12 + 0x10);
    uVar2 = iVar4 - (uVar3 + (int)uVar18) & iVar14 - 1U;
    uVar16 = CONCAT44(0,uVar2);
    uVar1 = (int)uVar18 + iVar14 + uVar2;
    uVar20 = (ulong)uVar1;
    uVar13 = uVar12;
    while (uVar19 = (ulong)uVar3, iVar4 < (int)uVar1) {
      uVar13 = /*FlatBuffers.FlatBufferBuilder$$GrowBuffer*/ func_0x016cda78(uVar12);
      if ((*(long *)(uVar12 + 0x18) == 0) ||
         (lVar15 = *(long *)(*(long *)(uVar12 + 0x18) + 0x10), lVar15 == 0)) goto code_r0x016cdb68;
      iVar4 = *(int *)(uVar12 + 0x10) - uVar3;
      uVar3 = *(uint *)(lVar15 + 0x18);
      iVar4 = iVar4 + uVar3;
      *(int *)(uVar12 + 0x10) = iVar4;
    }
    if ((int)uVar2 < 1) {
      return uVar13;
    }
    uVar10 = *(undefined8 *)*(undefined1 (*) [16])(puVar7 + -0x20);
    uVar24 = *(undefined8 *)(puVar7 + -0x18);
    auVar27 = *(undefined1 (*) [16])(puVar7 + -0x20);
    param_1 = *(ulong *)(puVar7 + -0x30);
    uVar19 = *(ulong *)(puVar7 + -0x28);
    *(undefined8 *)(puVar7 + -0x10) = *(undefined8 *)(puVar7 + -0x10);
    *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
    lVar15 = *(long *)(uVar12 + 0x18);
    auVar5._8_8_ = lVar15;
    auVar5._0_8_ = uVar16;
    uVar2 = *(int *)(uVar12 + 0x10) - uVar2;
    uVar20 = (ulong)uVar2;
    auVar25._8_4_ = uVar2;
    auVar25._0_8_ = lVar15;
    auVar25._12_4_ = 0;
    *(uint *)(uVar12 + 0x10) = uVar2;
    if (lVar15 != 0) {
      *(ulong *)(puVar7 + -0x30) = param_1;
      *(ulong *)(puVar7 + -0x28) = uVar19;
      *(undefined8 *)(puVar7 + -0x20) = uVar10;
      *(undefined8 *)(puVar7 + -0x18) = uVar24;
      *(undefined8 *)(puVar7 + -0x10) = *(undefined8 *)(puVar7 + -0x10);
      *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
      puVar21 = puVar7 + -0x10;
      puVar23 = &UNK_016cc908;
      uVar18 = 0;
      goto code_r0x016cc7a4;
    }
    lVar15 = func_0x00f78af4();
    ppuVar22 = (undefined1 **)(puVar7 + -0x20);
    *(undefined1 **)(puVar7 + -0x20) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x18) = &FlatBuffers_FlatBufferBuilder__GrowBuffer;
    if ((*(long *)(lVar15 + 0x18) != 0) &&
       (plVar11 = *(long **)(*(long *)(lVar15 + 0x18) + 0x10), plVar11 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016cdaa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar19 = (**(code **)(*plVar11 + 0x178))
                         (plVar11,(int)plVar11[3] << 1,*(undefined8 *)(*plVar11 + 0x180));
      return uVar19;
    }
    puVar23 = &FlatBuffers_FlatBufferBuilder__Prep;
    auVar26 = func_0x00f78af4();
    puVar7 = puVar7 + -0x20;
  }
code_r0x016cdb68:
  auVar5._8_8_ = uVar16;
  auVar5._0_8_ = uVar19;
  auVar26 = func_0x00f78af4();
  uVar18 = auVar26._8_8_;
  lVar17 = auVar26._0_8_;
  *(undefined1 **)(puVar7 + -0x40) = puVar7 + -0x10;
  *(undefined **)(puVar7 + -0x38) = &FlatBuffers_FlatBufferBuilder__PutBool;
  lVar15 = *(long *)(lVar17 + 0x18);
  iVar14 = *(int *)(lVar17 + 0x10) + -1;
  *(int *)(lVar17 + 0x10) = iVar14;
  if (lVar15 == 0) {
    auVar26 = func_0x00f78af4();
    uVar13 = auVar26._8_8_;
    lVar15 = auVar26._0_8_;
    *(undefined1 **)(puVar7 + -0x50) = puVar7 + -0x40;
    *(undefined **)(puVar7 + -0x48) = &FlatBuffers_FlatBufferBuilder__PutSbyte;
    iVar14 = *(int *)(lVar15 + 0x10) + -1;
    auVar25._8_4_ = iVar14;
    auVar25._0_8_ = *(long *)(lVar15 + 0x18);
    auVar25._12_4_ = 0;
    *(int *)(lVar15 + 0x10) = iVar14;
    if (*(long *)(lVar15 + 0x18) != 0) {
      puVar9 = puVar7 + -0x40;
      puVar21 = *(undefined1 **)(puVar7 + -0x50);
      puVar23 = *(undefined **)(puVar7 + -0x48);
      uVar18 = uVar12;
      goto code_r0x016cc810;
    }
    auVar26 = func_0x00f78af4();
    uVar18 = auVar26._8_8_;
    lVar17 = auVar26._0_8_;
    *(undefined1 **)(puVar7 + -0x60) = puVar7 + -0x50;
    *(undefined **)(puVar7 + -0x58) = &FlatBuffers_FlatBufferBuilder__PutByte;
    lVar15 = *(long *)(lVar17 + 0x18);
    iVar14 = *(int *)(lVar17 + 0x10) + -1;
    *(int *)(lVar17 + 0x10) = iVar14;
    if (lVar15 == 0) {
      auVar26 = func_0x00f78af4();
      uVar18 = auVar26._8_8_;
      lVar15 = auVar26._0_8_;
      puVar6 = puVar7 + -0x90;
      *(ulong *)(puVar7 + -0x90) = uVar20;
      *(ulong *)(puVar7 + -0x88) = uVar19;
      *(ulong *)(puVar7 + -0x80) = uVar16;
      *(ulong *)(puVar7 + -0x78) = uVar12;
      *(undefined1 **)(puVar7 + -0x70) = puVar7 + -0x60;
      *(undefined **)(puVar7 + -0x68) = &FlatBuffers_FlatBufferBuilder__PutShort;
      puVar21 = puVar7 + -0x70;
      lVar17 = *(long *)(lVar15 + 0x18);
      uVar1 = *(int *)(lVar15 + 0x10) - 2;
      auVar5._8_8_ = lVar17;
      auVar5._0_8_ = CONCAT44(0,uVar1);
      auVar25._8_4_ = uVar1;
      auVar25._0_8_ = lVar17;
      auVar25._12_4_ = 0;
      *(uint *)(lVar15 + 0x10) = uVar1;
      if (lVar17 != 0) {
        uVar16 = 2;
        puVar23 = &UNK_016cdc34;
        goto code_r0x016cc7a4;
      }
      auVar26 = func_0x00f78af4();
      uVar18 = auVar26._8_8_;
      lVar15 = auVar26._0_8_;
      puVar6 = puVar7 + -0xc0;
      *(ulong *)(puVar7 + -0xc0) = uVar20;
      *(ulong *)(puVar7 + -0xb8) = CONCAT44(0,uVar1);
      *(undefined8 *)(puVar7 + -0xb0) = 0;
      *(ulong *)(puVar7 + -0xa8) = uVar12;
      *(undefined1 **)(puVar7 + -0xa0) = puVar21;
      *(undefined **)(puVar7 + -0x98) = &FlatBuffers_FlatBufferBuilder__PutUshort;
      puVar21 = puVar7 + -0xa0;
      lVar17 = *(long *)(lVar15 + 0x18);
      uVar1 = *(int *)(lVar15 + 0x10) - 2;
      auVar5._8_8_ = lVar17;
      auVar5._0_8_ = CONCAT44(0,uVar1);
      auVar25._8_4_ = uVar1;
      auVar25._0_8_ = lVar17;
      auVar25._12_4_ = 0;
      *(uint *)(lVar15 + 0x10) = uVar1;
      if (lVar17 != 0) {
        uVar16 = 2;
        puVar23 = &UNK_016cdc90;
        goto code_r0x016cc7a4;
      }
      auVar26 = func_0x00f78af4();
      uVar18 = auVar26._8_8_;
      lVar15 = auVar26._0_8_;
      puVar6 = puVar7 + -0xf0;
      *(ulong *)(puVar7 + -0xf0) = uVar20;
      *(ulong *)(puVar7 + -0xe8) = CONCAT44(0,uVar1);
      *(undefined8 *)(puVar7 + -0xe0) = 0;
      *(ulong *)(puVar7 + -0xd8) = uVar12;
      *(undefined1 **)(puVar7 + -0xd0) = puVar21;
      *(undefined **)(puVar7 + -200) = &FlatBuffers_FlatBufferBuilder__PutInt;
      puVar21 = puVar7 + -0xd0;
      lVar17 = *(long *)(lVar15 + 0x18);
      uVar1 = *(int *)(lVar15 + 0x10) - 4;
      auVar5._8_8_ = lVar17;
      auVar5._0_8_ = CONCAT44(0,uVar1);
      auVar25._8_4_ = uVar1;
      auVar25._0_8_ = lVar17;
      auVar25._12_4_ = 0;
      *(uint *)(lVar15 + 0x10) = uVar1;
      if (lVar17 != 0) {
        uVar16 = 4;
        puVar23 = &UNK_016cdcec;
        goto code_r0x016cc7a4;
      }
      auVar26 = func_0x00f78af4();
      uVar18 = auVar26._8_8_;
      lVar15 = auVar26._0_8_;
      puVar6 = puVar7 + -0x120;
      *(ulong *)(puVar7 + -0x120) = uVar20;
      *(ulong *)(puVar7 + -0x118) = CONCAT44(0,uVar1);
      *(undefined8 *)(puVar7 + -0x110) = 0;
      *(ulong *)(puVar7 + -0x108) = uVar12;
      *(undefined1 **)(puVar7 + -0x100) = puVar21;
      *(undefined **)(puVar7 + -0xf8) = &FlatBuffers_FlatBufferBuilder__PutUint;
      puVar21 = puVar7 + -0x100;
      lVar17 = *(long *)(lVar15 + 0x18);
      uVar1 = *(int *)(lVar15 + 0x10) - 4;
      auVar5._8_8_ = lVar17;
      auVar5._0_8_ = CONCAT44(0,uVar1);
      auVar25._8_4_ = uVar1;
      auVar25._0_8_ = lVar17;
      auVar25._12_4_ = 0;
      *(uint *)(lVar15 + 0x10) = uVar1;
      if (lVar17 != 0) {
        uVar16 = 4;
        puVar23 = &UNK_016cdd48;
        goto code_r0x016cc7a4;
      }
      auVar26 = func_0x00f78af4();
      uVar18 = auVar26._8_8_;
      lVar15 = auVar26._0_8_;
      puVar6 = puVar7 + -0x150;
      *(ulong *)(puVar7 + -0x150) = uVar20;
      *(ulong *)(puVar7 + -0x148) = CONCAT44(0,uVar1);
      *(undefined8 *)(puVar7 + -0x140) = 0;
      *(ulong *)(puVar7 + -0x138) = uVar12;
      *(undefined1 **)(puVar7 + -0x130) = puVar21;
      *(undefined **)(puVar7 + -0x128) = &FlatBuffers_FlatBufferBuilder__PutLong;
      puVar21 = puVar7 + -0x130;
      lVar17 = *(long *)(lVar15 + 0x18);
      uVar1 = *(int *)(lVar15 + 0x10) - 8;
      auVar5._8_8_ = lVar17;
      auVar5._0_8_ = CONCAT44(0,uVar1);
      auVar25._8_4_ = uVar1;
      auVar25._0_8_ = lVar17;
      auVar25._12_4_ = 0;
      *(uint *)(lVar15 + 0x10) = uVar1;
      if (lVar17 != 0) {
        uVar16 = 8;
        puVar23 = &UNK_016cdda4;
        goto code_r0x016cc7a4;
      }
      auVar26 = func_0x00f78af4();
      uVar18 = auVar26._8_8_;
      lVar15 = auVar26._0_8_;
      puVar6 = puVar7 + -0x180;
      *(ulong *)(puVar7 + -0x180) = uVar20;
      *(ulong *)(puVar7 + -0x178) = CONCAT44(0,uVar1);
      *(undefined8 *)(puVar7 + -0x170) = 0;
      *(ulong *)(puVar7 + -0x168) = uVar12;
      *(undefined1 **)(puVar7 + -0x160) = puVar21;
      *(undefined **)(puVar7 + -0x158) = &FlatBuffers_FlatBufferBuilder__PutUlong;
      puVar21 = puVar7 + -0x160;
      lVar17 = *(long *)(lVar15 + 0x18);
      uVar1 = *(int *)(lVar15 + 0x10) - 8;
      uVar19 = CONCAT44(0,uVar1);
      auVar5._8_8_ = lVar17;
      auVar5._0_8_ = uVar19;
      auVar25._8_4_ = uVar1;
      auVar25._0_8_ = lVar17;
      auVar25._12_4_ = 0;
      *(uint *)(lVar15 + 0x10) = uVar1;
      if (lVar17 != 0) {
        uVar16 = 8;
        puVar23 = &UNK_016cde00;
        goto code_r0x016cc7a4;
      }
      lVar15 = func_0x00f78af4();
      *(undefined1 **)(puVar7 + -400) = puVar21;
      *(undefined **)(puVar7 + -0x188) = &FlatBuffers_FlatBufferBuilder__PutFloat;
      lVar17 = *(long *)(lVar15 + 0x18);
      auVar5._8_8_ = lVar17;
      uVar1 = *(int *)(lVar15 + 0x10) - 4;
      uVar18 = (ulong)uVar1;
      auVar25._8_4_ = uVar1;
      auVar25._0_8_ = lVar17;
      auVar25._12_4_ = 0;
      *(uint *)(lVar15 + 0x10) = uVar1;
      if (lVar17 != 0) {
        puVar6 = puVar7 + -0x1b0;
        *(undefined8 *)(puVar7 + -0x1b0) = unaff_d9;
        *(undefined8 *)(puVar7 + -0x1a8) = unaff_d8;
        *(undefined8 *)(puVar7 + -0x1a0) = 0;
        *(ulong *)(puVar7 + -0x198) = uVar12;
        *(undefined8 *)(puVar7 + -400) = *(undefined8 *)(puVar7 + -400);
        *(undefined8 *)(puVar7 + -0x188) = *(undefined8 *)(puVar7 + -0x188);
        puVar21 = puVar7 + -400;
        uVar16 = 4;
        puVar23 = &UNK_016ccba4;
        goto code_r0x016cc7a4;
      }
      lVar15 = func_0x00f78af4();
      *(undefined1 **)(puVar7 + -0x1a0) = puVar7 + -400;
      *(undefined **)(puVar7 + -0x198) = &FlatBuffers_FlatBufferBuilder__PutDouble;
      lVar17 = *(long *)(lVar15 + 0x18);
      auVar5._8_8_ = lVar17;
      uVar1 = *(int *)(lVar15 + 0x10) - 8;
      uVar18 = (ulong)uVar1;
      auVar25._8_4_ = uVar1;
      auVar25._0_8_ = lVar17;
      auVar25._12_4_ = 0;
      *(uint *)(lVar15 + 0x10) = uVar1;
      if (lVar17 != 0) {
        puVar6 = puVar7 + -0x1c0;
        *(undefined8 *)(puVar7 + -0x1c0) = unaff_d9;
        *(undefined8 *)(puVar7 + -0x1b8) = unaff_d8;
        *(undefined8 *)(puVar7 + -0x1b0) = 0;
        *(ulong *)(puVar7 + -0x1a8) = uVar12;
        *(undefined8 *)(puVar7 + -0x1a0) = *(undefined8 *)(puVar7 + -0x1a0);
        *(undefined8 *)(puVar7 + -0x198) = *(undefined8 *)(puVar7 + -0x198);
        puVar21 = puVar7 + -0x1a0;
        uVar16 = 8;
        puVar23 = &UNK_016ccc34;
        goto code_r0x016cc7a4;
      }
      auVar27 = func_0x00f78af4();
      *(undefined8 *)(puVar7 + -0x1c0) = 0;
      *(ulong *)(puVar7 + -0x1b8) = uVar12;
      *(undefined1 **)(puVar7 + -0x1b0) = puVar7 + -0x1a0;
      *(undefined **)(puVar7 + -0x1a8) = &FlatBuffers_FlatBufferBuilder__AddBool;
      ppuVar22 = (undefined1 **)(puVar7 + -0x1b0);
      auVar26._8_8_ = 1;
      auVar26._0_8_ = auVar27._0_8_;
      uVar18 = 0;
      puVar23 = &UNK_016cde9c;
      puVar7 = puVar7 + -0x1c0;
      param_1 = uVar20;
      goto code_r0x016cdaac;
    }
    puVar8 = puVar7 + -0x50;
    uVar10 = *(undefined8 *)(puVar7 + -0x60);
    uVar24 = *(undefined8 *)(puVar7 + -0x58);
  }
  else {
    puVar8 = puVar7 + -0x30;
    uVar10 = *(undefined8 *)(puVar7 + -0x40);
    uVar24 = *(undefined8 *)(puVar7 + -0x38);
  }
  auVar5._8_4_ = iVar14;
  auVar5._0_8_ = lVar15;
  auVar5._12_4_ = 0;
  auVar25._8_4_ = iVar14;
  auVar25._0_8_ = lVar15;
  auVar25._12_4_ = 0;
  puVar6 = puVar8 + -0x30;
  *(ulong *)(puVar8 + -0x30) = uVar20;
  *(ulong *)(puVar8 + -0x28) = uVar19;
  *(ulong *)(puVar8 + -0x20) = uVar16;
  *(ulong *)(puVar8 + -0x18) = uVar12;
  *(undefined8 *)(puVar8 + -0x10) = uVar10;
  *(undefined8 *)(puVar8 + -8) = uVar24;
  puVar21 = puVar8 + -0x10;
  uVar16 = 1;
  puVar23 = &UNK_016cc89c;
code_r0x016cc7a4:
  puVar9 = puVar6 + -0x20;
  *(long *)(puVar6 + -0x20) = auVar5._8_8_;
  *(ulong *)(puVar6 + -0x18) = uVar18;
  *(undefined1 **)(puVar6 + -0x10) = puVar21;
  *(undefined **)(puVar6 + -8) = puVar23;
  puVar21 = puVar6 + -0x10;
  if (auVar25._8_4_ < 0) {
code_r0x016cc7d8:
    func_0x00f78a24(0x3d1fcf8);
    uVar18 = func_0x00f78aec();
    /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a4d0(uVar18,0);
    uVar10 = func_0x00f78a24(0x3d52ce8);
    func_0x00f78ac0(uVar18,uVar10);
    uVar13 = uVar16;
  }
  else {
    lVar15 = *(long *)(auVar25._0_8_ + 0x10);
    uVar13 = uVar16;
    if (lVar15 != 0) {
      if (auVar25._8_4_ <= *(int *)(lVar15 + 0x18) - (int)uVar16) {
        return auVar25._0_8_;
      }
      goto code_r0x016cc7d8;
    }
  }
  puVar23 = &FlatBuffers_ByteBuffer__PutSbyte;
  auVar25 = func_0x00f78af4();
code_r0x016cc810:
  puVar6 = puVar9 + -0x30;
  *(ulong *)(puVar9 + -0x30) = uVar20;
  *(undefined1 (*) [16])(puVar9 + -0x28) = auVar5;
  *(ulong *)(puVar9 + -0x18) = uVar18;
  *(undefined1 **)(puVar9 + -0x10) = puVar21;
  *(undefined **)(puVar9 + -8) = puVar23;
  puVar21 = puVar9 + -0x10;
  uVar16 = 1;
  puVar23 = &UNK_016cc834;
  uVar18 = uVar13;
  auVar5 = auVar25;
  goto code_r0x016cc7a4;
}



// ============================================================
// RVA: 0x1655ae4 | Core.Networking.HostEventResults.StartStandingsVector
// ============================================================

/* WARNING: Possible PIC construction at 0x016ce184: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc904: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdc30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdc8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdce8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdd44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdda0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cddfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccc30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cccb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccd14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccdc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cde98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016ccdc4) */
/* WARNING: Removing unreachable block (ram,0x016ccd18) */
/* WARNING: Removing unreachable block (ram,0x016ccd20) */
/* WARNING: Removing unreachable block (ram,0x016ccd48) */
/* WARNING: Removing unreachable block (ram,0x016ccd28) */
/* WARNING: Removing unreachable block (ram,0x016ccd4c) */
/* WARNING: Removing unreachable block (ram,0x016ccd84) */
/* WARNING: Removing unreachable block (ram,0x016ccdb0) */
/* WARNING: Removing unreachable block (ram,0x016ccd88) */
/* WARNING: Removing unreachable block (ram,0x016ccd34) */
/* WARNING: Removing unreachable block (ram,0x016cccbc) */
/* WARNING: Removing unreachable block (ram,0x016cccc4) */
/* WARNING: Removing unreachable block (ram,0x016cccec) */
/* WARNING: Removing unreachable block (ram,0x016ccccc) */
/* WARNING: Removing unreachable block (ram,0x016cccf0) */
/* WARNING: Removing unreachable block (ram,0x016cccd8) */
/* WARNING: Removing unreachable block (ram,0x016ccc34) */
/* WARNING: Removing unreachable block (ram,0x016ccc3c) */
/* WARNING: Removing unreachable block (ram,0x016ccc44) */
/* WARNING: Removing unreachable block (ram,0x016ccc90) */
/* WARNING: Removing unreachable block (ram,0x016ccc68) */
/* WARNING: Removing unreachable block (ram,0x016ccc94) */
/* WARNING: Removing unreachable block (ram,0x016ccc70) */
/* WARNING: Removing unreachable block (ram,0x016ccba4) */
/* WARNING: Removing unreachable block (ram,0x016ccbac) */
/* WARNING: Removing unreachable block (ram,0x016ccbb4) */
/* WARNING: Removing unreachable block (ram,0x016ccc00) */
/* WARNING: Removing unreachable block (ram,0x016ccbd8) */
/* WARNING: Removing unreachable block (ram,0x016ccc04) */
/* WARNING: Removing unreachable block (ram,0x016ccbe0) */
/* WARNING: Removing unreachable block (ram,0x016cde00) */
/* WARNING: Removing unreachable block (ram,0x016cdda4) */
/* WARNING: Removing unreachable block (ram,0x016cdd48) */
/* WARNING: Removing unreachable block (ram,0x016cdcec) */
/* WARNING: Removing unreachable block (ram,0x016cdc90) */
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
/* WARNING: Removing unreachable block (ram,0x016cdc34) */
/* WARNING: Removing unreachable block (ram,0x016cc4e0) */
/* WARNING: Removing unreachable block (ram,0x016cc518) */
/* WARNING: Removing unreachable block (ram,0x016cc52c) */
/* WARNING: Removing unreachable block (ram,0x016cc538) */
/* WARNING: Removing unreachable block (ram,0x016cc540) */
/* WARNING: Removing unreachable block (ram,0x016cc548) */
/* WARNING: Removing unreachable block (ram,0x016cc5b8) */
/* WARNING: Removing unreachable block (ram,0x016cc5c0) */
/* WARNING: Removing unreachable block (ram,0x016cc5d4) */
/* WARNING: Removing unreachable block (ram,0x016cc5dc) */
/* WARNING: Removing unreachable block (ram,0x016cc5e4) */
/* WARNING: Removing unreachable block (ram,0x016cc5f0) */
/* WARNING: Removing unreachable block (ram,0x016cc554) */
/* WARNING: Removing unreachable block (ram,0x016cc55c) */
/* WARNING: Removing unreachable block (ram,0x016cc574) */
/* WARNING: Removing unreachable block (ram,0x016cc57c) */
/* WARNING: Removing unreachable block (ram,0x016cc624) */
/* WARNING: Removing unreachable block (ram,0x016cc584) */
/* WARNING: Removing unreachable block (ram,0x016cc628) */
/* WARNING: Removing unreachable block (ram,0x016cc634) */
/* WARNING: Removing unreachable block (ram,0x016cc668) */
/* WARNING: Removing unreachable block (ram,0x016cc67c) */
/* WARNING: Removing unreachable block (ram,0x016cc590) */
/* WARNING: Removing unreachable block (ram,0x016cc5b4) */
/* WARNING: Removing unreachable block (ram,0x016cc610) */
/* WARNING: Removing unreachable block (ram,0x016cc834) */
/* WARNING: Removing unreachable block (ram,0x016cc83c) */
/* WARNING: Removing unreachable block (ram,0x016cc868) */
/* WARNING: Removing unreachable block (ram,0x016cc844) */
/* WARNING: Removing unreachable block (ram,0x016cc86c) */
/* WARNING: Removing unreachable block (ram,0x016cc850) */
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
/* WARNING: Removing unreachable block (ram,0x016ce188) */
/* WARNING: Removing unreachable block (ram,0x016cde9c) */

ulong Core_Networking_HostEventResults__StartStandingsVector(ulong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long *plVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  undefined1 *puVar22;
  undefined *puVar23;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar24 [16];
  
  if (param_1 == 0) {
    lVar17 = func_0x00f78af4();
    return *(ulong *)(lVar17 + 8);
  }
  uVar13 = 4;
  uVar16 = 4;
  puVar22 = &stack0xfffffffffffffff0;
  /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4();
  *(int *)(param_1 + 0x44) = param_2;
  uVar20 = (ulong)(uint)(param_2 * 4);
  uVar14 = 4;
  puVar23 = &UNK_016ce188;
  puVar7 = &stack0xffffffffffffffd0;
  uVar11 = uVar20;
  uVar15 = param_1;
code_r0x016cdaac:
  while( true ) {
    puVar6 = puVar7 + -0x30;
    *(ulong *)(puVar7 + -0x30) = uVar15;
    *(ulong *)(puVar7 + -0x28) = uVar13;
    *(ulong *)(puVar7 + -0x20) = uVar11;
    *(undefined8 *)(puVar7 + -0x18) = uVar16;
    *(undefined1 **)(puVar7 + -0x10) = puVar22;
    *(undefined **)(puVar7 + -8) = puVar23;
    iVar12 = (int)uVar14;
    if (*(int *)(param_1 + 0x20) < iVar12) {
      *(int *)(param_1 + 0x20) = iVar12;
    }
    uVar18 = uVar11;
    uVar21 = uVar15;
    if ((*(long *)(param_1 + 0x18) == 0) ||
       (lVar17 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar17 == 0)) break;
    uVar3 = *(uint *)(lVar17 + 0x18);
    iVar4 = *(int *)(param_1 + 0x10);
    uVar2 = iVar4 - (uVar3 + (int)uVar20) & iVar12 - 1U;
    uVar18 = CONCAT44(0,uVar2);
    uVar1 = (int)uVar20 + iVar12 + uVar2;
    uVar21 = (ulong)uVar1;
    uVar11 = param_1;
    while( true ) {
      uVar13 = (ulong)uVar3;
      if ((int)uVar1 <= iVar4) break;
      uVar11 = /*FlatBuffers.FlatBufferBuilder$$GrowBuffer*/ func_0x016cda78(param_1);
      if ((*(long *)(param_1 + 0x18) == 0) ||
         (lVar17 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar17 == 0)) goto code_r0x016cdb68;
      iVar4 = *(int *)(param_1 + 0x10) - uVar3;
      uVar3 = *(uint *)(lVar17 + 0x18);
      iVar4 = iVar4 + uVar3;
      *(int *)(param_1 + 0x10) = iVar4;
    }
    if ((int)uVar2 < 1) {
      return uVar11;
    }
    uVar11 = *(ulong *)(puVar7 + -0x20);
    uVar16 = *(undefined8 *)(puVar7 + -0x18);
    uVar15 = *(ulong *)(puVar7 + -0x30);
    uVar13 = *(ulong *)(puVar7 + -0x28);
    *(undefined8 *)(puVar7 + -0x10) = *(undefined8 *)(puVar7 + -0x10);
    *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
    lVar17 = *(long *)(param_1 + 0x18);
    auVar5._8_8_ = lVar17;
    auVar5._0_8_ = uVar18;
    uVar2 = *(int *)(param_1 + 0x10) - uVar2;
    uVar21 = (ulong)uVar2;
    auVar24._8_4_ = uVar2;
    auVar24._0_8_ = lVar17;
    auVar24._12_4_ = 0;
    *(uint *)(param_1 + 0x10) = uVar2;
    if (lVar17 != 0) {
      *(ulong *)(puVar7 + -0x30) = uVar15;
      *(ulong *)(puVar7 + -0x28) = uVar13;
      *(ulong *)(puVar7 + -0x20) = uVar11;
      *(undefined8 *)(puVar7 + -0x18) = uVar16;
      *(undefined8 *)(puVar7 + -0x10) = *(undefined8 *)(puVar7 + -0x10);
      *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
      puVar22 = puVar7 + -0x10;
      puVar23 = &UNK_016cc908;
      uVar11 = 0;
      goto code_r0x016cc7a4;
    }
    lVar17 = func_0x00f78af4();
    puVar22 = puVar7 + -0x20;
    *(undefined1 **)(puVar7 + -0x20) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x18) = &FlatBuffers_FlatBufferBuilder__GrowBuffer;
    if ((*(long *)(lVar17 + 0x18) != 0) &&
       (plVar10 = *(long **)(*(long *)(lVar17 + 0x18) + 0x10), plVar10 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016cdaa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar11 = (**(code **)(*plVar10 + 0x178))
                         (plVar10,(int)plVar10[3] << 1,*(undefined8 *)(*plVar10 + 0x180));
      return uVar11;
    }
    puVar23 = &FlatBuffers_FlatBufferBuilder__Prep;
    auVar24 = func_0x00f78af4();
    uVar14 = auVar24._8_8_;
    param_1 = auVar24._0_8_;
    puVar7 = puVar7 + -0x20;
  }
code_r0x016cdb68:
  auVar5._8_8_ = uVar18;
  auVar5._0_8_ = uVar13;
  auVar24 = func_0x00f78af4();
  uVar11 = auVar24._8_8_;
  lVar19 = auVar24._0_8_;
  *(undefined1 **)(puVar7 + -0x40) = puVar7 + -0x10;
  *(undefined **)(puVar7 + -0x38) = &FlatBuffers_FlatBufferBuilder__PutBool;
  lVar17 = *(long *)(lVar19 + 0x18);
  iVar12 = *(int *)(lVar19 + 0x10) + -1;
  *(int *)(lVar19 + 0x10) = iVar12;
  if (lVar17 == 0) {
    auVar24 = func_0x00f78af4();
    uVar15 = auVar24._8_8_;
    lVar17 = auVar24._0_8_;
    *(undefined1 **)(puVar7 + -0x50) = puVar7 + -0x40;
    *(undefined **)(puVar7 + -0x48) = &FlatBuffers_FlatBufferBuilder__PutSbyte;
    iVar12 = *(int *)(lVar17 + 0x10) + -1;
    auVar24._8_4_ = iVar12;
    auVar24._0_8_ = *(long *)(lVar17 + 0x18);
    auVar24._12_4_ = 0;
    *(int *)(lVar17 + 0x10) = iVar12;
    if (*(long *)(lVar17 + 0x18) != 0) {
      puVar9 = puVar7 + -0x40;
      puVar22 = *(undefined1 **)(puVar7 + -0x50);
      puVar23 = *(undefined **)(puVar7 + -0x48);
      uVar11 = param_1;
      goto code_r0x016cc810;
    }
    auVar24 = func_0x00f78af4();
    uVar11 = auVar24._8_8_;
    lVar19 = auVar24._0_8_;
    *(undefined1 **)(puVar7 + -0x60) = puVar7 + -0x50;
    *(undefined **)(puVar7 + -0x58) = &FlatBuffers_FlatBufferBuilder__PutByte;
    lVar17 = *(long *)(lVar19 + 0x18);
    iVar12 = *(int *)(lVar19 + 0x10) + -1;
    *(int *)(lVar19 + 0x10) = iVar12;
    if (lVar17 == 0) {
      auVar24 = func_0x00f78af4();
      uVar11 = auVar24._8_8_;
      lVar17 = auVar24._0_8_;
      puVar6 = puVar7 + -0x90;
      *(ulong *)(puVar7 + -0x90) = uVar21;
      *(ulong *)(puVar7 + -0x88) = uVar13;
      *(ulong *)(puVar7 + -0x80) = uVar18;
      *(ulong *)(puVar7 + -0x78) = param_1;
      *(undefined1 **)(puVar7 + -0x70) = puVar7 + -0x60;
      *(undefined **)(puVar7 + -0x68) = &FlatBuffers_FlatBufferBuilder__PutShort;
      puVar22 = puVar7 + -0x70;
      lVar19 = *(long *)(lVar17 + 0x18);
      uVar1 = *(int *)(lVar17 + 0x10) - 2;
      auVar5._8_8_ = lVar19;
      auVar5._0_8_ = CONCAT44(0,uVar1);
      auVar24._8_4_ = uVar1;
      auVar24._0_8_ = lVar19;
      auVar24._12_4_ = 0;
      *(uint *)(lVar17 + 0x10) = uVar1;
      if (lVar19 != 0) {
        uVar18 = 2;
        puVar23 = &UNK_016cdc34;
        goto code_r0x016cc7a4;
      }
      auVar24 = func_0x00f78af4();
      uVar11 = auVar24._8_8_;
      lVar17 = auVar24._0_8_;
      puVar6 = puVar7 + -0xc0;
      *(ulong *)(puVar7 + -0xc0) = uVar21;
      *(ulong *)(puVar7 + -0xb8) = CONCAT44(0,uVar1);
      *(undefined8 *)(puVar7 + -0xb0) = 0;
      *(ulong *)(puVar7 + -0xa8) = param_1;
      *(undefined1 **)(puVar7 + -0xa0) = puVar22;
      *(undefined **)(puVar7 + -0x98) = &FlatBuffers_FlatBufferBuilder__PutUshort;
      puVar22 = puVar7 + -0xa0;
      lVar19 = *(long *)(lVar17 + 0x18);
      uVar1 = *(int *)(lVar17 + 0x10) - 2;
      auVar5._8_8_ = lVar19;
      auVar5._0_8_ = CONCAT44(0,uVar1);
      auVar24._8_4_ = uVar1;
      auVar24._0_8_ = lVar19;
      auVar24._12_4_ = 0;
      *(uint *)(lVar17 + 0x10) = uVar1;
      if (lVar19 != 0) {
        uVar18 = 2;
        puVar23 = &UNK_016cdc90;
        goto code_r0x016cc7a4;
      }
      auVar24 = func_0x00f78af4();
      uVar11 = auVar24._8_8_;
      lVar17 = auVar24._0_8_;
      puVar6 = puVar7 + -0xf0;
      *(ulong *)(puVar7 + -0xf0) = uVar21;
      *(ulong *)(puVar7 + -0xe8) = CONCAT44(0,uVar1);
      *(undefined8 *)(puVar7 + -0xe0) = 0;
      *(ulong *)(puVar7 + -0xd8) = param_1;
      *(undefined1 **)(puVar7 + -0xd0) = puVar22;
      *(undefined **)(puVar7 + -200) = &FlatBuffers_FlatBufferBuilder__PutInt;
      puVar22 = puVar7 + -0xd0;
      lVar19 = *(long *)(lVar17 + 0x18);
      uVar1 = *(int *)(lVar17 + 0x10) - 4;
      auVar5._8_8_ = lVar19;
      auVar5._0_8_ = CONCAT44(0,uVar1);
      auVar24._8_4_ = uVar1;
      auVar24._0_8_ = lVar19;
      auVar24._12_4_ = 0;
      *(uint *)(lVar17 + 0x10) = uVar1;
      if (lVar19 != 0) {
        uVar18 = 4;
        puVar23 = &UNK_016cdcec;
        goto code_r0x016cc7a4;
      }
      auVar24 = func_0x00f78af4();
      uVar11 = auVar24._8_8_;
      lVar17 = auVar24._0_8_;
      puVar6 = puVar7 + -0x120;
      *(ulong *)(puVar7 + -0x120) = uVar21;
      *(ulong *)(puVar7 + -0x118) = CONCAT44(0,uVar1);
      *(undefined8 *)(puVar7 + -0x110) = 0;
      *(ulong *)(puVar7 + -0x108) = param_1;
      *(undefined1 **)(puVar7 + -0x100) = puVar22;
      *(undefined **)(puVar7 + -0xf8) = &FlatBuffers_FlatBufferBuilder__PutUint;
      puVar22 = puVar7 + -0x100;
      lVar19 = *(long *)(lVar17 + 0x18);
      uVar1 = *(int *)(lVar17 + 0x10) - 4;
      auVar5._8_8_ = lVar19;
      auVar5._0_8_ = CONCAT44(0,uVar1);
      auVar24._8_4_ = uVar1;
      auVar24._0_8_ = lVar19;
      auVar24._12_4_ = 0;
      *(uint *)(lVar17 + 0x10) = uVar1;
      if (lVar19 != 0) {
        uVar18 = 4;
        puVar23 = &UNK_016cdd48;
        goto code_r0x016cc7a4;
      }
      auVar24 = func_0x00f78af4();
      uVar11 = auVar24._8_8_;
      lVar17 = auVar24._0_8_;
      puVar6 = puVar7 + -0x150;
      *(ulong *)(puVar7 + -0x150) = uVar21;
      *(ulong *)(puVar7 + -0x148) = CONCAT44(0,uVar1);
      *(undefined8 *)(puVar7 + -0x140) = 0;
      *(ulong *)(puVar7 + -0x138) = param_1;
      *(undefined1 **)(puVar7 + -0x130) = puVar22;
      *(undefined **)(puVar7 + -0x128) = &FlatBuffers_FlatBufferBuilder__PutLong;
      puVar22 = puVar7 + -0x130;
      lVar19 = *(long *)(lVar17 + 0x18);
      uVar1 = *(int *)(lVar17 + 0x10) - 8;
      auVar5._8_8_ = lVar19;
      auVar5._0_8_ = CONCAT44(0,uVar1);
      auVar24._8_4_ = uVar1;
      auVar24._0_8_ = lVar19;
      auVar24._12_4_ = 0;
      *(uint *)(lVar17 + 0x10) = uVar1;
      if (lVar19 != 0) {
        uVar18 = 8;
        puVar23 = &UNK_016cdda4;
        goto code_r0x016cc7a4;
      }
      auVar24 = func_0x00f78af4();
      uVar11 = auVar24._8_8_;
      lVar17 = auVar24._0_8_;
      puVar6 = puVar7 + -0x180;
      *(ulong *)(puVar7 + -0x180) = uVar21;
      *(ulong *)(puVar7 + -0x178) = CONCAT44(0,uVar1);
      *(undefined8 *)(puVar7 + -0x170) = 0;
      *(ulong *)(puVar7 + -0x168) = param_1;
      *(undefined1 **)(puVar7 + -0x160) = puVar22;
      *(undefined **)(puVar7 + -0x158) = &FlatBuffers_FlatBufferBuilder__PutUlong;
      puVar22 = puVar7 + -0x160;
      lVar19 = *(long *)(lVar17 + 0x18);
      uVar1 = *(int *)(lVar17 + 0x10) - 8;
      uVar13 = CONCAT44(0,uVar1);
      auVar5._8_8_ = lVar19;
      auVar5._0_8_ = uVar13;
      auVar24._8_4_ = uVar1;
      auVar24._0_8_ = lVar19;
      auVar24._12_4_ = 0;
      *(uint *)(lVar17 + 0x10) = uVar1;
      if (lVar19 != 0) {
        uVar18 = 8;
        puVar23 = &UNK_016cde00;
        goto code_r0x016cc7a4;
      }
      lVar17 = func_0x00f78af4();
      *(undefined1 **)(puVar7 + -400) = puVar22;
      *(undefined **)(puVar7 + -0x188) = &FlatBuffers_FlatBufferBuilder__PutFloat;
      lVar19 = *(long *)(lVar17 + 0x18);
      auVar5._8_8_ = lVar19;
      uVar1 = *(int *)(lVar17 + 0x10) - 4;
      uVar11 = (ulong)uVar1;
      auVar24._8_4_ = uVar1;
      auVar24._0_8_ = lVar19;
      auVar24._12_4_ = 0;
      *(uint *)(lVar17 + 0x10) = uVar1;
      if (lVar19 != 0) {
        puVar6 = puVar7 + -0x1b0;
        *(undefined8 *)(puVar7 + -0x1b0) = unaff_d9;
        *(undefined8 *)(puVar7 + -0x1a8) = unaff_d8;
        *(undefined8 *)(puVar7 + -0x1a0) = 0;
        *(ulong *)(puVar7 + -0x198) = param_1;
        *(undefined8 *)(puVar7 + -400) = *(undefined8 *)(puVar7 + -400);
        *(undefined8 *)(puVar7 + -0x188) = *(undefined8 *)(puVar7 + -0x188);
        puVar22 = puVar7 + -400;
        uVar18 = 4;
        puVar23 = &UNK_016ccba4;
        goto code_r0x016cc7a4;
      }
      lVar17 = func_0x00f78af4();
      *(undefined1 **)(puVar7 + -0x1a0) = puVar7 + -400;
      *(undefined **)(puVar7 + -0x198) = &FlatBuffers_FlatBufferBuilder__PutDouble;
      lVar19 = *(long *)(lVar17 + 0x18);
      auVar5._8_8_ = lVar19;
      uVar1 = *(int *)(lVar17 + 0x10) - 8;
      uVar11 = (ulong)uVar1;
      auVar24._8_4_ = uVar1;
      auVar24._0_8_ = lVar19;
      auVar24._12_4_ = 0;
      *(uint *)(lVar17 + 0x10) = uVar1;
      if (lVar19 != 0) {
        puVar6 = puVar7 + -0x1c0;
        *(undefined8 *)(puVar7 + -0x1c0) = unaff_d9;
        *(undefined8 *)(puVar7 + -0x1b8) = unaff_d8;
        *(undefined8 *)(puVar7 + -0x1b0) = 0;
        *(ulong *)(puVar7 + -0x1a8) = param_1;
        *(undefined8 *)(puVar7 + -0x1a0) = *(undefined8 *)(puVar7 + -0x1a0);
        *(undefined8 *)(puVar7 + -0x198) = *(undefined8 *)(puVar7 + -0x198);
        puVar22 = puVar7 + -0x1a0;
        uVar18 = 8;
        puVar23 = &UNK_016ccc34;
        goto code_r0x016cc7a4;
      }
      auVar24 = func_0x00f78af4();
      uVar16 = auVar24._8_8_;
      uVar11 = auVar24._0_8_;
      *(undefined8 *)(puVar7 + -0x1c0) = 0;
      *(ulong *)(puVar7 + -0x1b8) = param_1;
      *(undefined1 **)(puVar7 + -0x1b0) = puVar7 + -0x1a0;
      *(undefined **)(puVar7 + -0x1a8) = &FlatBuffers_FlatBufferBuilder__AddBool;
      puVar22 = puVar7 + -0x1b0;
      uVar14 = 1;
      uVar20 = 0;
      puVar23 = &UNK_016cde9c;
      puVar7 = puVar7 + -0x1c0;
      param_1 = uVar11;
      uVar15 = uVar21;
      goto code_r0x016cdaac;
    }
    puVar8 = puVar7 + -0x50;
    uVar16 = *(undefined8 *)(puVar7 + -0x60);
    uVar14 = *(undefined8 *)(puVar7 + -0x58);
  }
  else {
    puVar8 = puVar7 + -0x30;
    uVar16 = *(undefined8 *)(puVar7 + -0x40);
    uVar14 = *(undefined8 *)(puVar7 + -0x38);
  }
  auVar5._8_4_ = iVar12;
  auVar5._0_8_ = lVar17;
  auVar5._12_4_ = 0;
  auVar24._8_4_ = iVar12;
  auVar24._0_8_ = lVar17;
  auVar24._12_4_ = 0;
  puVar6 = puVar8 + -0x30;
  *(ulong *)(puVar8 + -0x30) = uVar21;
  *(ulong *)(puVar8 + -0x28) = uVar13;
  *(ulong *)(puVar8 + -0x20) = uVar18;
  *(ulong *)(puVar8 + -0x18) = param_1;
  *(undefined8 *)(puVar8 + -0x10) = uVar16;
  *(undefined8 *)(puVar8 + -8) = uVar14;
  puVar22 = puVar8 + -0x10;
  uVar18 = 1;
  puVar23 = &UNK_016cc89c;
code_r0x016cc7a4:
  puVar9 = puVar6 + -0x20;
  *(long *)(puVar6 + -0x20) = auVar5._8_8_;
  *(ulong *)(puVar6 + -0x18) = uVar11;
  *(undefined1 **)(puVar6 + -0x10) = puVar22;
  *(undefined **)(puVar6 + -8) = puVar23;
  puVar22 = puVar6 + -0x10;
  if (auVar24._8_4_ < 0) {
code_r0x016cc7d8:
    func_0x00f78a24(0x3d1fcf8);
    uVar11 = func_0x00f78aec();
    /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a4d0(uVar11,0);
    uVar16 = func_0x00f78a24(0x3d52ce8);
    func_0x00f78ac0(uVar11,uVar16);
    uVar15 = uVar18;
  }
  else {
    lVar17 = *(long *)(auVar24._0_8_ + 0x10);
    uVar15 = uVar18;
    if (lVar17 != 0) {
      if (auVar24._8_4_ <= *(int *)(lVar17 + 0x18) - (int)uVar18) {
        return auVar24._0_8_;
      }
      goto code_r0x016cc7d8;
    }
  }
  puVar23 = &FlatBuffers_ByteBuffer__PutSbyte;
  auVar24 = func_0x00f78af4();
code_r0x016cc810:
  puVar6 = puVar9 + -0x30;
  *(ulong *)(puVar9 + -0x30) = uVar21;
  *(undefined1 (*) [16])(puVar9 + -0x28) = auVar5;
  *(ulong *)(puVar9 + -0x18) = uVar11;
  *(undefined1 **)(puVar9 + -0x10) = puVar22;
  *(undefined **)(puVar9 + -8) = puVar23;
  puVar22 = puVar9 + -0x10;
  uVar18 = 1;
  puVar23 = &UNK_016cc834;
  uVar11 = uVar15;
  auVar5 = auVar24;
  goto code_r0x016cc7a4;
}



