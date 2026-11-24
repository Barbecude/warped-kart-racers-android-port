// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Networking.HostVoteUpdate

// ============================================================
// RVA: 0x1657884 | Core.Networking.HostVoteUpdate.get_ByteBuffer
// ============================================================

undefined8 Core_Networking_HostVoteUpdate__get_ByteBuffer(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// ============================================================
// RVA: 0x165788c | Core.Networking.HostVoteUpdate.GetRootAsHostVoteUpdate
// ============================================================

undefined1  [16] Core_Networking_HostVoteUpdate__GetRootAsHostVoteUpdate(long param_1)

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
// RVA: 0x1657898 | Core.Networking.HostVoteUpdate.GetRootAsHostVoteUpdate
// ============================================================

undefined1  [16]
Core_Networking_HostVoteUpdate__GetRootAsHostVoteUpdate
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
// RVA: 0x16578dc | Core.Networking.HostVoteUpdate.__assign
// ============================================================

undefined1  [16]
Core_Networking_HostVoteUpdate____assign(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)param_1 = param_2;
  param_1[1] = param_3;
  auVar1._0_8_ = *param_1;
  auVar1._8_8_ = param_3;
  return auVar1;
}



// ============================================================
// RVA: 0x16578f0 | Core.Networking.HostVoteUpdate.__init
// ============================================================

void Core_Networking_HostVoteUpdate____init
               (undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  return;
}



// ============================================================
// RVA: 0x16578fc | Core.Networking.HostVoteUpdate.Votes
// ============================================================

void Core_Networking_HostVoteUpdate__Votes(ulong *param_1,long param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if ((bRam0000000003eb580f & 1) == 0) {
    func_0x00f78a20(0x3d3ee78);
    bRam0000000003eb580f = 1;
  }
  uVar2 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_2,4,0);
  if ((int)uVar2 != 0) {
    iVar1 = /*FlatBuffers.Table$$__vector*/ func_0x016cf330(param_2,uVar2,0);
    uVar3 = *(ulong *)(param_2 + 8);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    *(undefined1 *)(param_1 + 2) = 1;
    *param_1 = (ulong)(uint)(iVar1 + param_3 * 8);
    param_1[1] = uVar3;
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// ============================================================
// RVA: 0x16579a4 | Core.Networking.HostVoteUpdate.get_VotesLength
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

ulong Core_Networking_HostVoteUpdate__get_VotesLength(int *param_1)

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
// RVA: 0x16579e8 | Core.Networking.HostVoteUpdate.CreateHostVoteUpdate
// ============================================================

/* WARNING: Possible PIC construction at 0x01657a08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cea74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ceaf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ceb44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ceb68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cebc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cec10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ced48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cee1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cef0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cef44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cef60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce468: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x016ce46c) */
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
/* WARNING: Removing unreachable block (ram,0x016ced4c) */
/* WARNING: Removing unreachable block (ram,0x016cec14) */
/* WARNING: Removing unreachable block (ram,0x016cec20) */
/* WARNING: Removing unreachable block (ram,0x016cec38) */
/* WARNING: Removing unreachable block (ram,0x016cec44) */
/* WARNING: Removing unreachable block (ram,0x016cebcc) */
/* WARNING: Removing unreachable block (ram,0x016cebd8) */
/* WARNING: Removing unreachable block (ram,0x016cec48) */
/* WARNING: Removing unreachable block (ram,0x016cebf0) */
/* WARNING: Removing unreachable block (ram,0x016cec64) */
/* WARNING: Removing unreachable block (ram,0x016cec6c) */
/* WARNING: Removing unreachable block (ram,0x016cec78) */
/* WARNING: Removing unreachable block (ram,0x016ceca8) */
/* WARNING: Removing unreachable block (ram,0x016cec84) */
/* WARNING: Removing unreachable block (ram,0x016cec8c) */
/* WARNING: Removing unreachable block (ram,0x016cec94) */
/* WARNING: Removing unreachable block (ram,0x016cebfc) */
/* WARNING: Removing unreachable block (ram,0x016cec00) */
/* WARNING: Removing unreachable block (ram,0x016cec08) */
/* WARNING: Removing unreachable block (ram,0x016ceb6c) */
/* WARNING: Removing unreachable block (ram,0x016cec58) */
/* WARNING: Removing unreachable block (ram,0x016cecac) */
/* WARNING: Removing unreachable block (ram,0x016cecb8) */
/* WARNING: Removing unreachable block (ram,0x016cecd8) */
/* WARNING: Removing unreachable block (ram,0x016cecf0) */
/* WARNING: Removing unreachable block (ram,0x016ced04) */
/* WARNING: Removing unreachable block (ram,0x016ced10) */
/* WARNING: Removing unreachable block (ram,0x016ced20) */
/* WARNING: Removing unreachable block (ram,0x016ced28) */
/* WARNING: Removing unreachable block (ram,0x016ced3c) */
/* WARNING: Removing unreachable block (ram,0x016cec60) */
/* WARNING: Removing unreachable block (ram,0x016ceb84) */
/* WARNING: Removing unreachable block (ram,0x016ceb88) */
/* WARNING: Removing unreachable block (ram,0x016ceb90) */
/* WARNING: Removing unreachable block (ram,0x016ceb98) */
/* WARNING: Removing unreachable block (ram,0x016ceba0) */
/* WARNING: Removing unreachable block (ram,0x016cebac) */
/* WARNING: Removing unreachable block (ram,0x016ceb48) */
/* WARNING: Removing unreachable block (ram,0x016ceafc) */
/* WARNING: Removing unreachable block (ram,0x016ceb10) */
/* WARNING: Removing unreachable block (ram,0x016ceb1c) */
/* WARNING: Removing unreachable block (ram,0x016ceb2c) */
/* WARNING: Removing unreachable block (ram,0x016cea78) */
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
/* WARNING: Removing unreachable block (ram,0x01657a0c) */
/* WARNING: Removing unreachable block (ram,0x016cde9c) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_HostVoteUpdate__CreateHostVoteUpdate
                (long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  int iVar23;
  uint uVar24;
  ulong uVar25;
  long unaff_x19;
  long unaff_x20;
  ulong uVar26;
  long lVar27;
  ulong unaff_x21;
  ulong unaff_x22;
  undefined **ppuVar28;
  undefined1 *puVar29;
  undefined *puVar30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [12];
  long alStack_e0 [2];
  undefined *apuStack_d0 [2];
  undefined1 auStack_c0 [12];
  undefined4 uStack_b4;
  undefined *puStack_28;
  
  puVar12 = &stack0xffffffffffffffe0;
  puVar29 = &stack0xfffffffffffffff0;
  if (param_1 == 0) {
    auVar34 = func_0x00f78af4();
    uVar17 = auVar34._8_8_;
    uVar18 = auVar34._0_8_;
    if (uVar18 == 0) {
      lVar21 = func_0x00f78af4();
      puVar12 = &stack0xffffffffffffffb0;
      puVar29 = &stack0xffffffffffffffc0;
      param_2 = 0x3eb5000;
      if ((bRam0000000003eb5810 & 1) == 0) {
        func_0x00f78a20(0x3d3f140);
        bRam0000000003eb5810 = 1;
      }
      if (lVar21 != 0) {
        puVar29 = &stack0xffffffffffffffc0;
        auVar34._8_8_ = lVar21;
        auVar34._0_8_ = 0x3eb5000;
        if ((bRam0000000003eb5cd8 & 1) == 0) {
          func_0x00f78a20(0x3d1f100,0);
          bRam0000000003eb5cd8 = 1;
        }
        uVar17 = unaff_x21;
        if (*(int *)(lVar21 + 0x30) < 0) {
          func_0x00f78a24(0x3d22a38);
          uVar19 = func_0x00f78aec();
          uVar20 = func_0x00f78a24(0x3d6cea8);
          uStack_b4 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar19,uVar20);
          uVar20 = func_0x00f78a24(0x3d56a30);
          auVar35 = func_0x00f78ac0(uVar19,uVar20);
          puVar29 = &stack0xffffffffffffff70;
          lVar21 = *(long *)(auVar35._0_8_ + 0x18);
          if ((lVar21 != 0) && (*(long *)(lVar21 + 0x10) != 0)) {
            uVar24 = *(int *)(*(long *)(lVar21 + 0x10) + 0x18) - auVar35._8_4_;
            uVar25 = (ulong)uVar24;
            auVar31._8_4_ = uVar24;
            auVar31._0_8_ = lVar21;
            auVar31._12_4_ = 0;
            puVar8 = &stack0xffffffffffffff00;
            apuStack_d0[1] = &UNK_016cee20;
            ppuVar28 = apuStack_d0;
            auVar7._8_8_ = 4;
            auVar7._0_8_ = lVar21;
            uVar18 = 0x3d201a0;
            apuStack_d0[0] = puVar29;
            if ((bRam0000000003eb5cd0 & 1) == 0) {
              func_0x00f78a20(0x3d201a0);
              bRam0000000003eb5cd0 = 1;
            }
            uVar26 = 4;
            puVar30 = &UNK_016cc68c;
code_r0x016cc7a4:
            do {
              puVar11 = puVar8 + -0x20;
              *(long *)(puVar8 + -0x20) = auVar7._8_8_;
              *(ulong *)(puVar8 + -0x18) = uVar25;
              *(undefined ***)(puVar8 + -0x10) = ppuVar28;
              *(undefined **)(puVar8 + -8) = puVar30;
              puVar29 = puVar8 + -0x10;
              if (auVar31._8_4_ < 0) {
code_r0x016cc7d8:
                func_0x00f78a24(0x3d1fcf8);
                uVar25 = func_0x00f78aec();
                /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a4d0(uVar25,0);
                uVar19 = func_0x00f78a24(0x3d52ce8);
                func_0x00f78ac0(uVar25,uVar19);
                uVar16 = uVar26;
              }
              else {
                lVar21 = *(long *)(auVar31._0_8_ + 0x10);
                uVar16 = uVar26;
                if (lVar21 != 0) {
                  if (auVar31._8_4_ <= *(int *)(lVar21 + 0x18) - (int)uVar26) {
                    return auVar31._0_8_;
                  }
                  goto code_r0x016cc7d8;
                }
              }
              puVar30 = &FlatBuffers_ByteBuffer__PutSbyte;
              auVar31 = func_0x00f78af4();
code_r0x016cc810:
              puVar8 = puVar11 + -0x30;
              *(ulong *)(puVar11 + -0x30) = uVar18;
              *(undefined1 (*) [16])(puVar11 + -0x28) = auVar7;
              *(ulong *)(puVar11 + -0x18) = uVar25;
              *(undefined1 **)(puVar11 + -0x10) = puVar29;
              *(undefined **)(puVar11 + -8) = puVar30;
              ppuVar28 = (undefined **)(puVar11 + -0x10);
              uVar26 = 1;
              puVar30 = &UNK_016cc834;
              uVar25 = uVar16;
              auVar7 = auVar31;
            } while( true );
          }
          func_0x00f78af4();
          uVar19 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_b4,0);
          uVar20 = func_0x00f78a24(0x3d6ce88);
          uVar22 = func_0x00f78a24(0x3d66338);
          lVar21 = /*System.String$$Concat*/ func_0x029be39c(uVar20,uVar19,uVar22,0);
          func_0x00f78a24(0x3d22a38);
          uVar19 = func_0x00f78aec();
          uVar22 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar19,lVar21);
          uVar20 = func_0x00f78a24(0x3d56a50);
          puVar30 = &FlatBuffers_FlatBufferBuilder__Finish;
          auVar34 = func_0x00f78ac0(uVar19,uVar20);
          puVar9 = auStack_c0;
          while( true ) {
            uVar20 = auVar34._8_8_;
            lVar27 = auVar34._0_8_;
            auVar34._8_8_ = lVar27;
            auVar34._0_8_ = uVar20;
            auVar6._8_8_ = lVar27;
            auVar6._0_8_ = uVar20;
            *(undefined8 *)(puVar9 + -0x20) = uVar19;
            *(long *)(puVar9 + -0x18) = lVar21;
            *(undefined1 **)(puVar9 + -0x10) = puVar29;
            *(undefined **)(puVar9 + -8) = puVar30;
            puVar29 = puVar9 + -0x10;
            uVar4 = *(undefined4 *)(lVar27 + 0x20);
            auVar32._8_4_ = uVar4;
            auVar32._0_8_ = lVar27;
            auVar32._12_4_ = 0;
            lVar21 = lVar27;
            if ((int)uVar22 == 0) {
              lVar21 = 0;
              uVar4 = 0;
            }
            auVar5._8_4_ = uVar4;
            auVar5._0_8_ = lVar21;
            auVar5._12_4_ = 0;
            if ((int)uVar22 == 0) {
              uVar25 = 4;
              puVar30 = &UNK_016cef64;
              puVar9 = puVar9 + -0x20;
              goto code_r0x016cdaac;
            }
            if (lVar21 != 0) break;
            puVar30 = &FlatBuffers_FlatBufferBuilder__Finish;
            auVar34 = func_0x00f78af4();
            uVar22 = 0;
            puVar9 = puVar9 + -0x20;
            lVar21 = lVar27;
            uVar19 = uVar20;
          }
          uVar25 = 8;
          puVar30 = &UNK_016cef10;
          puVar9 = puVar9 + -0x20;
          auVar32 = auVar5;
          auVar34 = auVar6;
        }
        else {
          auVar32._8_8_ = 4;
          auVar32._0_8_ = lVar21;
          uVar25 = 0;
          puVar30 = &UNK_016cea78;
          puVar9 = &stack0xffffffffffffff80;
        }
        goto code_r0x016cdaac;
      }
      puVar30 = &Core_Networking_HostVoteUpdate__StartHostVoteUpdate;
      param_1 = func_0x00f78af4();
      if (param_1 == 0) {
        auVar35 = func_0x00f78af4();
        unaff_x22 = auVar35._0_8_;
        if (unaff_x22 == 0) {
          lVar21 = func_0x00f78af4();
          return *(ulong *)(lVar21 + 8);
        }
        puVar29 = &stack0xffffffffffffff90;
        uVar17 = 8;
        /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4();
        *(int *)(unaff_x22 + 0x44) = auVar35._8_4_;
        uVar25 = CONCAT44(0,auVar35._8_4_ * 8);
        auVar34._8_8_ = 4;
        auVar34._0_8_ = uVar25;
        auVar32._8_8_ = 4;
        auVar32._0_8_ = unaff_x22;
        puVar30 = &UNK_016ce188;
        puVar9 = &stack0xffffffffffffff70;
        goto code_r0x016cdaac;
      }
      lVar21 = 0;
      goto code_r0x016ce2a4;
    }
    param_4 = 0;
    puStack_28 = &Core_Networking_HostVoteUpdate__AddVotes;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = uVar18;
    if ((auVar34._8_4_ == 0) && (*(char *)(uVar18 + 0x48) == '\0')) {
      return uVar18;
    }
    /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(uVar18,uVar17,uVar17,0,0);
    puVar13 = &stack0xffffffffffffffe0;
  }
  else {
    puVar30 = (undefined *)0x1657a0c;
    lVar21 = param_1;
code_r0x016ce2a4:
    uVar17 = 0;
    puVar13 = puVar12 + -0x30;
    *(ulong *)(puVar12 + -0x30) = unaff_x22;
    *(ulong *)(puVar12 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar12 + -0x20) = param_2;
    *(long *)(puVar12 + -0x18) = lVar21;
    *(undefined1 **)(puVar12 + -0x10) = puVar29;
    *(undefined **)(puVar12 + -8) = puVar30;
    puVar29 = puVar12 + -0x10;
    unaff_x20 = 1;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(param_1);
    if (*(long *)(param_1 + 0x28) != 0) {
      if (*(int *)(*(long *)(param_1 + 0x28) + 0x18) < 1) {
        uVar19 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,1);
        *(undefined8 *)(param_1 + 0x28) = uVar19;
      }
      *(undefined4 *)(param_1 + 0x30) = 1;
      uVar17 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(param_1);
      *(int *)(param_1 + 0x34) = (int)uVar17;
      return uVar17;
    }
    puStack_28 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar33 = func_0x00f78af4();
    unaff_x19 = param_1;
  }
  uVar19 = auVar33._8_8_;
  *(long *)(puVar13 + -0x20) = unaff_x20;
  *(long *)(puVar13 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar13 + -0x10) = puVar29;
  *(undefined **)(puVar13 + -8) = puStack_28;
  uVar24 = auVar33._8_4_;
  if ((int)uVar24 < *(int *)(auVar33._0_8_ + 0x30)) {
    unaff_x20 = *(long *)(auVar33._0_8_ + 0x28);
    uVar18 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
    if (unaff_x20 == 0) goto code_r0x016ce410;
    if (uVar24 < *(uint *)(unaff_x20 + 0x18)) {
      *(int *)(unaff_x20 + (long)(int)uVar24 * 4 + 0x20) = (int)uVar18;
      return uVar18;
    }
  }
  else {
    func_0x00f78a24(0x3d22738);
    uVar19 = func_0x00f78aec();
    uVar20 = func_0x00f78a24(0x3d6ceb8);
    uVar17 = 0;
    /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar19,uVar20);
    uVar20 = func_0x00f78a24(0x3d56a58);
    func_0x00f78ac0(uVar19,uVar20);
code_r0x016ce410:
    func_0x00f78af4();
  }
  uVar20 = func_0x00f78b24();
  auVar34 = func_0x00f78ac0(uVar20,0);
  uVar18 = auVar34._0_8_;
  *(ulong *)(puVar13 + -0x50) = unaff_x22;
  *(ulong *)(puVar13 + -0x48) = unaff_x21;
  *(long *)(puVar13 + -0x40) = unaff_x20;
  *(undefined8 *)(puVar13 + -0x38) = uVar19;
  *(undefined1 **)(puVar13 + -0x30) = puVar13 + -0x10;
  *(undefined **)(puVar13 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
  puVar29 = puVar13 + -0x30;
  if (((int)uVar17 == param_4) && (*(char *)(uVar18 + 0x48) == '\0')) {
    return uVar18;
  }
  auVar32._8_8_ = 1;
  auVar32._0_8_ = uVar18;
  uVar25 = 0;
  puVar30 = &UNK_016ce46c;
  puVar9 = puVar13 + -0x50;
code_r0x016cdaac:
  do {
    uVar26 = auVar34._0_8_;
    uVar15 = auVar32._0_8_;
    puVar8 = puVar9 + -0x30;
    *(ulong *)(puVar9 + -0x30) = unaff_x22;
    *(ulong *)(puVar9 + -0x28) = uVar17;
    *(undefined1 (*) [16])(puVar9 + -0x20) = auVar34;
    *(undefined1 **)(puVar9 + -0x10) = puVar29;
    *(undefined **)(puVar9 + -8) = puVar30;
    iVar23 = auVar32._8_4_;
    if (*(int *)(uVar15 + 0x20) < iVar23) {
      *(int *)(uVar15 + 0x20) = iVar23;
    }
    uVar18 = unaff_x22;
    if ((*(long *)(uVar15 + 0x18) == 0) ||
       (lVar21 = *(long *)(*(long *)(uVar15 + 0x18) + 0x10), lVar21 == 0)) {
code_r0x016cdb68:
      auVar7._8_8_ = uVar26;
      auVar7._0_8_ = uVar17;
      auVar34 = func_0x00f78af4();
      uVar25 = auVar34._8_8_;
      lVar27 = auVar34._0_8_;
      *(undefined1 **)(puVar9 + -0x40) = puVar9 + -0x10;
      *(undefined **)(puVar9 + -0x38) = &FlatBuffers_FlatBufferBuilder__PutBool;
      lVar21 = *(long *)(lVar27 + 0x18);
      iVar23 = *(int *)(lVar27 + 0x10) + -1;
      *(int *)(lVar27 + 0x10) = iVar23;
      if (lVar21 == 0) {
        auVar34 = func_0x00f78af4();
        uVar16 = auVar34._8_8_;
        lVar21 = auVar34._0_8_;
        *(undefined1 **)(puVar9 + -0x50) = puVar9 + -0x40;
        *(undefined **)(puVar9 + -0x48) = &FlatBuffers_FlatBufferBuilder__PutSbyte;
        iVar23 = *(int *)(lVar21 + 0x10) + -1;
        auVar31._8_4_ = iVar23;
        auVar31._0_8_ = *(long *)(lVar21 + 0x18);
        auVar31._12_4_ = 0;
        *(int *)(lVar21 + 0x10) = iVar23;
        if (*(long *)(lVar21 + 0x18) != 0) {
          puVar11 = puVar9 + -0x40;
          puVar29 = *(undefined1 **)(puVar9 + -0x50);
          puVar30 = *(undefined **)(puVar9 + -0x48);
          uVar25 = uVar15;
          goto code_r0x016cc810;
        }
        auVar34 = func_0x00f78af4();
        uVar25 = auVar34._8_8_;
        lVar27 = auVar34._0_8_;
        *(undefined1 **)(puVar9 + -0x60) = puVar9 + -0x50;
        *(undefined **)(puVar9 + -0x58) = &FlatBuffers_FlatBufferBuilder__PutByte;
        lVar21 = *(long *)(lVar27 + 0x18);
        iVar23 = *(int *)(lVar27 + 0x10) + -1;
        *(int *)(lVar27 + 0x10) = iVar23;
        if (lVar21 == 0) {
          auVar34 = func_0x00f78af4();
          uVar25 = auVar34._8_8_;
          lVar21 = auVar34._0_8_;
          puVar8 = puVar9 + -0x90;
          *(ulong *)(puVar9 + -0x90) = uVar18;
          *(ulong *)(puVar9 + -0x88) = uVar17;
          *(ulong *)(puVar9 + -0x80) = uVar26;
          *(ulong *)(puVar9 + -0x78) = uVar15;
          *(undefined1 **)(puVar9 + -0x70) = puVar9 + -0x60;
          *(undefined **)(puVar9 + -0x68) = &FlatBuffers_FlatBufferBuilder__PutShort;
          ppuVar28 = (undefined **)(puVar9 + -0x70);
          lVar27 = *(long *)(lVar21 + 0x18);
          uVar24 = *(int *)(lVar21 + 0x10) - 2;
          auVar7._8_8_ = lVar27;
          auVar7._0_8_ = CONCAT44(0,uVar24);
          auVar31._8_4_ = uVar24;
          auVar31._0_8_ = lVar27;
          auVar31._12_4_ = 0;
          *(uint *)(lVar21 + 0x10) = uVar24;
          if (lVar27 != 0) {
            uVar26 = 2;
            puVar30 = &UNK_016cdc34;
            goto code_r0x016cc7a4;
          }
          auVar34 = func_0x00f78af4();
          uVar25 = auVar34._8_8_;
          lVar21 = auVar34._0_8_;
          puVar8 = puVar9 + -0xc0;
          *(ulong *)(puVar9 + -0xc0) = uVar18;
          *(ulong *)(puVar9 + -0xb8) = CONCAT44(0,uVar24);
          *(undefined8 *)(puVar9 + -0xb0) = 0;
          *(ulong *)(puVar9 + -0xa8) = uVar15;
          *(undefined ***)(puVar9 + -0xa0) = ppuVar28;
          *(undefined **)(puVar9 + -0x98) = &FlatBuffers_FlatBufferBuilder__PutUshort;
          ppuVar28 = (undefined **)(puVar9 + -0xa0);
          lVar27 = *(long *)(lVar21 + 0x18);
          uVar24 = *(int *)(lVar21 + 0x10) - 2;
          auVar7._8_8_ = lVar27;
          auVar7._0_8_ = CONCAT44(0,uVar24);
          auVar31._8_4_ = uVar24;
          auVar31._0_8_ = lVar27;
          auVar31._12_4_ = 0;
          *(uint *)(lVar21 + 0x10) = uVar24;
          if (lVar27 != 0) {
            uVar26 = 2;
            puVar30 = &UNK_016cdc90;
            goto code_r0x016cc7a4;
          }
          auVar34 = func_0x00f78af4();
          uVar25 = auVar34._8_8_;
          lVar21 = auVar34._0_8_;
          puVar8 = puVar9 + -0xf0;
          *(ulong *)(puVar9 + -0xf0) = uVar18;
          *(ulong *)(puVar9 + -0xe8) = CONCAT44(0,uVar24);
          *(undefined8 *)(puVar9 + -0xe0) = 0;
          *(ulong *)(puVar9 + -0xd8) = uVar15;
          *(undefined ***)(puVar9 + -0xd0) = ppuVar28;
          *(undefined **)(puVar9 + -200) = &FlatBuffers_FlatBufferBuilder__PutInt;
          ppuVar28 = (undefined **)(puVar9 + -0xd0);
          lVar27 = *(long *)(lVar21 + 0x18);
          uVar24 = *(int *)(lVar21 + 0x10) - 4;
          auVar7._8_8_ = lVar27;
          auVar7._0_8_ = CONCAT44(0,uVar24);
          auVar31._8_4_ = uVar24;
          auVar31._0_8_ = lVar27;
          auVar31._12_4_ = 0;
          *(uint *)(lVar21 + 0x10) = uVar24;
          if (lVar27 != 0) {
            uVar26 = 4;
            puVar30 = &UNK_016cdcec;
            goto code_r0x016cc7a4;
          }
          auVar34 = func_0x00f78af4();
          uVar25 = auVar34._8_8_;
          lVar21 = auVar34._0_8_;
          puVar8 = puVar9 + -0x120;
          *(ulong *)(puVar9 + -0x120) = uVar18;
          *(ulong *)(puVar9 + -0x118) = CONCAT44(0,uVar24);
          *(undefined8 *)(puVar9 + -0x110) = 0;
          *(ulong *)(puVar9 + -0x108) = uVar15;
          *(undefined ***)(puVar9 + -0x100) = ppuVar28;
          *(undefined **)(puVar9 + -0xf8) = &FlatBuffers_FlatBufferBuilder__PutUint;
          ppuVar28 = (undefined **)(puVar9 + -0x100);
          lVar27 = *(long *)(lVar21 + 0x18);
          uVar24 = *(int *)(lVar21 + 0x10) - 4;
          auVar7._8_8_ = lVar27;
          auVar7._0_8_ = CONCAT44(0,uVar24);
          auVar31._8_4_ = uVar24;
          auVar31._0_8_ = lVar27;
          auVar31._12_4_ = 0;
          *(uint *)(lVar21 + 0x10) = uVar24;
          if (lVar27 != 0) {
            uVar26 = 4;
            puVar30 = &UNK_016cdd48;
            goto code_r0x016cc7a4;
          }
          auVar34 = func_0x00f78af4();
          uVar25 = auVar34._8_8_;
          lVar21 = auVar34._0_8_;
          puVar8 = puVar9 + -0x150;
          *(ulong *)(puVar9 + -0x150) = uVar18;
          *(ulong *)(puVar9 + -0x148) = CONCAT44(0,uVar24);
          *(undefined8 *)(puVar9 + -0x140) = 0;
          *(ulong *)(puVar9 + -0x138) = uVar15;
          *(undefined ***)(puVar9 + -0x130) = ppuVar28;
          *(undefined **)(puVar9 + -0x128) = &FlatBuffers_FlatBufferBuilder__PutLong;
          ppuVar28 = (undefined **)(puVar9 + -0x130);
          lVar27 = *(long *)(lVar21 + 0x18);
          uVar24 = *(int *)(lVar21 + 0x10) - 8;
          auVar7._8_8_ = lVar27;
          auVar7._0_8_ = CONCAT44(0,uVar24);
          auVar31._8_4_ = uVar24;
          auVar31._0_8_ = lVar27;
          auVar31._12_4_ = 0;
          *(uint *)(lVar21 + 0x10) = uVar24;
          if (lVar27 != 0) {
            uVar26 = 8;
            puVar30 = &UNK_016cdda4;
            goto code_r0x016cc7a4;
          }
          auVar34 = func_0x00f78af4();
          uVar25 = auVar34._8_8_;
          lVar21 = auVar34._0_8_;
          puVar8 = puVar9 + -0x180;
          *(ulong *)(puVar9 + -0x180) = uVar18;
          *(ulong *)(puVar9 + -0x178) = CONCAT44(0,uVar24);
          *(undefined8 *)(puVar9 + -0x170) = 0;
          *(ulong *)(puVar9 + -0x168) = uVar15;
          *(undefined ***)(puVar9 + -0x160) = ppuVar28;
          *(undefined **)(puVar9 + -0x158) = &FlatBuffers_FlatBufferBuilder__PutUlong;
          ppuVar28 = (undefined **)(puVar9 + -0x160);
          lVar27 = *(long *)(lVar21 + 0x18);
          uVar24 = *(int *)(lVar21 + 0x10) - 8;
          uVar17 = CONCAT44(0,uVar24);
          auVar7._8_8_ = lVar27;
          auVar7._0_8_ = uVar17;
          auVar31._8_4_ = uVar24;
          auVar31._0_8_ = lVar27;
          auVar31._12_4_ = 0;
          *(uint *)(lVar21 + 0x10) = uVar24;
          if (lVar27 != 0) {
            uVar26 = 8;
            puVar30 = &UNK_016cde00;
            goto code_r0x016cc7a4;
          }
          lVar21 = func_0x00f78af4();
          *(undefined ***)(puVar9 + -400) = ppuVar28;
          *(undefined **)(puVar9 + -0x188) = &FlatBuffers_FlatBufferBuilder__PutFloat;
          lVar27 = *(long *)(lVar21 + 0x18);
          auVar7._8_8_ = lVar27;
          uVar24 = *(int *)(lVar21 + 0x10) - 4;
          uVar25 = (ulong)uVar24;
          auVar31._8_4_ = uVar24;
          auVar31._0_8_ = lVar27;
          auVar31._12_4_ = 0;
          *(uint *)(lVar21 + 0x10) = uVar24;
          if (lVar27 != 0) {
            puVar8 = puVar9 + -0x1b0;
            *(undefined8 *)(puVar9 + -0x1b0) = unaff_d9;
            *(undefined8 *)(puVar9 + -0x1a8) = unaff_d8;
            *(undefined8 *)(puVar9 + -0x1a0) = 0;
            *(ulong *)(puVar9 + -0x198) = uVar15;
            *(undefined8 *)(puVar9 + -400) = *(undefined8 *)(puVar9 + -400);
            *(undefined8 *)(puVar9 + -0x188) = *(undefined8 *)(puVar9 + -0x188);
            ppuVar28 = (undefined **)(puVar9 + -400);
            uVar26 = 4;
            puVar30 = &UNK_016ccba4;
            goto code_r0x016cc7a4;
          }
          lVar21 = func_0x00f78af4();
          *(undefined1 **)(puVar9 + -0x1a0) = puVar9 + -400;
          *(undefined **)(puVar9 + -0x198) = &FlatBuffers_FlatBufferBuilder__PutDouble;
          lVar27 = *(long *)(lVar21 + 0x18);
          auVar7._8_8_ = lVar27;
          uVar24 = *(int *)(lVar21 + 0x10) - 8;
          uVar25 = (ulong)uVar24;
          auVar31._8_4_ = uVar24;
          auVar31._0_8_ = lVar27;
          auVar31._12_4_ = 0;
          *(uint *)(lVar21 + 0x10) = uVar24;
          if (lVar27 != 0) {
            puVar8 = puVar9 + -0x1c0;
            *(undefined8 *)(puVar9 + -0x1c0) = unaff_d9;
            *(undefined8 *)(puVar9 + -0x1b8) = unaff_d8;
            *(undefined8 *)(puVar9 + -0x1b0) = 0;
            *(ulong *)(puVar9 + -0x1a8) = uVar15;
            *(undefined8 *)(puVar9 + -0x1a0) = *(undefined8 *)(puVar9 + -0x1a0);
            *(undefined8 *)(puVar9 + -0x198) = *(undefined8 *)(puVar9 + -0x198);
            ppuVar28 = (undefined **)(puVar9 + -0x1a0);
            uVar26 = 8;
            puVar30 = &UNK_016ccc34;
            goto code_r0x016cc7a4;
          }
          auVar34 = func_0x00f78af4();
          *(undefined8 *)(puVar9 + -0x1c0) = 0;
          *(ulong *)(puVar9 + -0x1b8) = uVar15;
          *(undefined1 **)(puVar9 + -0x1b0) = puVar9 + -0x1a0;
          *(undefined **)(puVar9 + -0x1a8) = &FlatBuffers_FlatBufferBuilder__AddBool;
          puVar29 = puVar9 + -0x1b0;
          auVar32._8_8_ = 1;
          auVar32._0_8_ = auVar34._0_8_;
          uVar25 = 0;
          puVar30 = &UNK_016cde9c;
          puVar9 = puVar9 + -0x1c0;
          unaff_x22 = uVar18;
          goto code_r0x016cdaac;
        }
        puVar10 = puVar9 + -0x50;
        uVar19 = *(undefined8 *)(puVar9 + -0x60);
        uVar20 = *(undefined8 *)(puVar9 + -0x58);
      }
      else {
        puVar10 = puVar9 + -0x30;
        uVar19 = *(undefined8 *)(puVar9 + -0x40);
        uVar20 = *(undefined8 *)(puVar9 + -0x38);
      }
      auVar7._8_4_ = iVar23;
      auVar7._0_8_ = lVar21;
      auVar7._12_4_ = 0;
      auVar31._8_4_ = iVar23;
      auVar31._0_8_ = lVar21;
      auVar31._12_4_ = 0;
      puVar8 = puVar10 + -0x30;
      *(ulong *)(puVar10 + -0x30) = uVar18;
      *(ulong *)(puVar10 + -0x28) = uVar17;
      *(ulong *)(puVar10 + -0x20) = uVar26;
      *(ulong *)(puVar10 + -0x18) = uVar15;
      *(undefined8 *)(puVar10 + -0x10) = uVar19;
      *(undefined8 *)(puVar10 + -8) = uVar20;
      ppuVar28 = (undefined **)(puVar10 + -0x10);
      uVar26 = 1;
      puVar30 = &UNK_016cc89c;
      goto code_r0x016cc7a4;
    }
    uVar2 = *(uint *)(lVar21 + 0x18);
    iVar3 = *(int *)(uVar15 + 0x10);
    uVar1 = iVar3 - (uVar2 + (int)uVar25) & iVar23 - 1U;
    uVar26 = CONCAT44(0,uVar1);
    uVar24 = (int)uVar25 + iVar23 + uVar1;
    uVar18 = (ulong)uVar24;
    uVar16 = uVar15;
    while (uVar17 = (ulong)uVar2, iVar3 < (int)uVar24) {
      uVar16 = /*FlatBuffers.FlatBufferBuilder$$GrowBuffer*/ func_0x016cda78(uVar15);
      if ((*(long *)(uVar15 + 0x18) == 0) ||
         (lVar21 = *(long *)(*(long *)(uVar15 + 0x18) + 0x10), lVar21 == 0)) goto code_r0x016cdb68;
      iVar3 = *(int *)(uVar15 + 0x10) - uVar2;
      uVar2 = *(uint *)(lVar21 + 0x18);
      iVar3 = iVar3 + uVar2;
      *(int *)(uVar15 + 0x10) = iVar3;
    }
    if ((int)uVar1 < 1) {
      return uVar16;
    }
    uVar19 = *(undefined8 *)*(undefined1 (*) [16])(puVar9 + -0x20);
    uVar20 = *(undefined8 *)(puVar9 + -0x18);
    auVar34 = *(undefined1 (*) [16])(puVar9 + -0x20);
    unaff_x22 = *(ulong *)(puVar9 + -0x30);
    uVar17 = *(ulong *)(puVar9 + -0x28);
    *(undefined8 *)(puVar9 + -0x10) = *(undefined8 *)(puVar9 + -0x10);
    *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
    lVar21 = *(long *)(uVar15 + 0x18);
    auVar7._8_8_ = lVar21;
    auVar7._0_8_ = uVar26;
    uVar1 = *(int *)(uVar15 + 0x10) - uVar1;
    uVar18 = (ulong)uVar1;
    auVar31._8_4_ = uVar1;
    auVar31._0_8_ = lVar21;
    auVar31._12_4_ = 0;
    *(uint *)(uVar15 + 0x10) = uVar1;
    if (lVar21 != 0) {
      *(ulong *)(puVar9 + -0x30) = unaff_x22;
      *(ulong *)(puVar9 + -0x28) = uVar17;
      *(undefined8 *)(puVar9 + -0x20) = uVar19;
      *(undefined8 *)(puVar9 + -0x18) = uVar20;
      *(undefined8 *)(puVar9 + -0x10) = *(undefined8 *)(puVar9 + -0x10);
      *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
      ppuVar28 = (undefined **)(puVar9 + -0x10);
      puVar30 = &UNK_016cc908;
      uVar25 = 0;
      goto code_r0x016cc7a4;
    }
    lVar21 = func_0x00f78af4();
    puVar29 = puVar9 + -0x20;
    *(undefined1 **)(puVar9 + -0x20) = puVar9 + -0x10;
    *(undefined **)(puVar9 + -0x18) = &FlatBuffers_FlatBufferBuilder__GrowBuffer;
    if ((*(long *)(lVar21 + 0x18) != 0) &&
       (plVar14 = *(long **)(*(long *)(lVar21 + 0x18) + 0x10), plVar14 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016cdaa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar17 = (**(code **)(*plVar14 + 0x178))
                         (plVar14,(int)plVar14[3] << 1,*(undefined8 *)(*plVar14 + 0x180));
      return uVar17;
    }
    puVar30 = &FlatBuffers_FlatBufferBuilder__Prep;
    auVar32 = func_0x00f78af4();
    puVar9 = puVar9 + -0x20;
  } while( true );
}



// ============================================================
// RVA: 0x1657a2c | Core.Networking.HostVoteUpdate.AddVotes
// ============================================================

/* WARNING: Possible PIC construction at 0x016ce468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cea74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ceaf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ceb44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ceb68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cebc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cec10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ced48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cee1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cef0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cef44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cef60: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x016ced4c) */
/* WARNING: Removing unreachable block (ram,0x016cec14) */
/* WARNING: Removing unreachable block (ram,0x016cec20) */
/* WARNING: Removing unreachable block (ram,0x016cec38) */
/* WARNING: Removing unreachable block (ram,0x016cec44) */
/* WARNING: Removing unreachable block (ram,0x016cebcc) */
/* WARNING: Removing unreachable block (ram,0x016cebd8) */
/* WARNING: Removing unreachable block (ram,0x016cec48) */
/* WARNING: Removing unreachable block (ram,0x016cebf0) */
/* WARNING: Removing unreachable block (ram,0x016cec64) */
/* WARNING: Removing unreachable block (ram,0x016cec6c) */
/* WARNING: Removing unreachable block (ram,0x016cec78) */
/* WARNING: Removing unreachable block (ram,0x016ceca8) */
/* WARNING: Removing unreachable block (ram,0x016cec84) */
/* WARNING: Removing unreachable block (ram,0x016cec8c) */
/* WARNING: Removing unreachable block (ram,0x016cec94) */
/* WARNING: Removing unreachable block (ram,0x016cebfc) */
/* WARNING: Removing unreachable block (ram,0x016cec00) */
/* WARNING: Removing unreachable block (ram,0x016cec08) */
/* WARNING: Removing unreachable block (ram,0x016ceb6c) */
/* WARNING: Removing unreachable block (ram,0x016cec58) */
/* WARNING: Removing unreachable block (ram,0x016cecac) */
/* WARNING: Removing unreachable block (ram,0x016cecb8) */
/* WARNING: Removing unreachable block (ram,0x016cecd8) */
/* WARNING: Removing unreachable block (ram,0x016cecf0) */
/* WARNING: Removing unreachable block (ram,0x016ced04) */
/* WARNING: Removing unreachable block (ram,0x016ced10) */
/* WARNING: Removing unreachable block (ram,0x016ced20) */
/* WARNING: Removing unreachable block (ram,0x016ced28) */
/* WARNING: Removing unreachable block (ram,0x016ced3c) */
/* WARNING: Removing unreachable block (ram,0x016cec60) */
/* WARNING: Removing unreachable block (ram,0x016ceb84) */
/* WARNING: Removing unreachable block (ram,0x016ceb88) */
/* WARNING: Removing unreachable block (ram,0x016ceb90) */
/* WARNING: Removing unreachable block (ram,0x016ceb98) */
/* WARNING: Removing unreachable block (ram,0x016ceba0) */
/* WARNING: Removing unreachable block (ram,0x016cebac) */
/* WARNING: Removing unreachable block (ram,0x016ceb48) */
/* WARNING: Removing unreachable block (ram,0x016ceafc) */
/* WARNING: Removing unreachable block (ram,0x016ceb10) */
/* WARNING: Removing unreachable block (ram,0x016ceb1c) */
/* WARNING: Removing unreachable block (ram,0x016ceb2c) */
/* WARNING: Removing unreachable block (ram,0x016cea78) */
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
/* WARNING: Removing unreachable block (ram,0x016ce46c) */
/* WARNING: Removing unreachable block (ram,0x016cde9c) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_HostVoteUpdate__AddVotes
                (ulong param_1,ulong param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  int iVar19;
  uint uVar20;
  ulong uVar21;
  long unaff_x19;
  undefined8 uVar22;
  long unaff_x20;
  ulong uVar23;
  long lVar24;
  ulong unaff_x21;
  ulong unaff_x22;
  undefined1 *unaff_x29;
  undefined **ppuVar25;
  undefined1 *puVar26;
  undefined *unaff_x30;
  undefined *puVar27;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [12];
  long alStack_c0 [2];
  undefined *apuStack_b0 [2];
  undefined1 auStack_a0 [12];
  undefined4 uStack_94;
  
  if (param_1 == 0) {
    lVar12 = func_0x00f78af4();
    if ((bRam0000000003eb5810 & 1) == 0) {
      func_0x00f78a20(0x3d3f140);
      bRam0000000003eb5810 = 1;
    }
    if (lVar12 != 0) {
      puVar26 = &stack0xffffffffffffffe0;
      auVar30._8_8_ = lVar12;
      auVar30._0_8_ = 0x3eb5000;
      if ((bRam0000000003eb5cd8 & 1) == 0) {
        func_0x00f78a20(0x3d1f100,0);
        bRam0000000003eb5cd8 = 1;
      }
      if (*(int *)(lVar12 + 0x30) < 0) {
        func_0x00f78a24(0x3d22a38);
        uVar22 = func_0x00f78aec();
        uVar17 = func_0x00f78a24(0x3d6cea8);
        uStack_94 = 0;
        /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar22,uVar17);
        uVar17 = func_0x00f78a24(0x3d56a30);
        auVar31 = func_0x00f78ac0(uVar22,uVar17);
        puVar26 = &stack0xffffffffffffff90;
        lVar12 = *(long *)(auVar31._0_8_ + 0x18);
        if ((lVar12 != 0) && (*(long *)(lVar12 + 0x10) != 0)) {
          uVar20 = *(int *)(*(long *)(lVar12 + 0x10) + 0x18) - auVar31._8_4_;
          uVar21 = (ulong)uVar20;
          auVar28._8_4_ = uVar20;
          auVar28._0_8_ = lVar12;
          auVar28._12_4_ = 0;
          puVar8 = &stack0xffffffffffffff20;
          apuStack_b0[1] = &UNK_016cee20;
          ppuVar25 = apuStack_b0;
          auVar7._8_8_ = 4;
          auVar7._0_8_ = lVar12;
          uVar16 = 0x3d201a0;
          apuStack_b0[0] = puVar26;
          if ((bRam0000000003eb5cd0 & 1) == 0) {
            func_0x00f78a20(0x3d201a0);
            bRam0000000003eb5cd0 = 1;
          }
          uVar23 = 4;
          puVar27 = &UNK_016cc68c;
code_r0x016cc7a4:
          do {
            puVar11 = puVar8 + -0x20;
            *(long *)(puVar8 + -0x20) = auVar7._8_8_;
            *(ulong *)(puVar8 + -0x18) = uVar21;
            *(undefined ***)(puVar8 + -0x10) = ppuVar25;
            *(undefined **)(puVar8 + -8) = puVar27;
            puVar26 = puVar8 + -0x10;
            if (auVar28._8_4_ < 0) {
code_r0x016cc7d8:
              func_0x00f78a24(0x3d1fcf8);
              uVar21 = func_0x00f78aec();
              /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a4d0(uVar21,0);
              uVar22 = func_0x00f78a24(0x3d52ce8);
              func_0x00f78ac0(uVar21,uVar22);
              uVar15 = uVar23;
            }
            else {
              lVar12 = *(long *)(auVar28._0_8_ + 0x10);
              uVar15 = uVar23;
              if (lVar12 != 0) {
                if (auVar28._8_4_ <= *(int *)(lVar12 + 0x18) - (int)uVar23) {
                  return auVar28._0_8_;
                }
                goto code_r0x016cc7d8;
              }
            }
            puVar27 = &FlatBuffers_ByteBuffer__PutSbyte;
            auVar28 = func_0x00f78af4();
code_r0x016cc810:
            puVar8 = puVar11 + -0x30;
            *(ulong *)(puVar11 + -0x30) = uVar16;
            *(undefined1 (*) [16])(puVar11 + -0x28) = auVar7;
            *(ulong *)(puVar11 + -0x18) = uVar21;
            *(undefined1 **)(puVar11 + -0x10) = puVar26;
            *(undefined **)(puVar11 + -8) = puVar27;
            ppuVar25 = (undefined **)(puVar11 + -0x10);
            uVar23 = 1;
            puVar27 = &UNK_016cc834;
            uVar21 = uVar15;
            auVar7 = auVar28;
          } while( true );
        }
        func_0x00f78af4();
        uVar22 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_94,0);
        uVar17 = func_0x00f78a24(0x3d6ce88);
        uVar18 = func_0x00f78a24(0x3d66338);
        lVar12 = /*System.String$$Concat*/ func_0x029be39c(uVar17,uVar22,uVar18,0);
        func_0x00f78a24(0x3d22a38);
        uVar22 = func_0x00f78aec();
        uVar18 = 0;
        /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar22,lVar12);
        uVar17 = func_0x00f78a24(0x3d56a50);
        puVar27 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar30 = func_0x00f78ac0(uVar22,uVar17);
        puVar9 = auStack_a0;
        while( true ) {
          uVar17 = auVar30._8_8_;
          lVar24 = auVar30._0_8_;
          auVar30._8_8_ = lVar24;
          auVar30._0_8_ = uVar17;
          auVar6._8_8_ = lVar24;
          auVar6._0_8_ = uVar17;
          *(undefined8 *)(puVar9 + -0x20) = uVar22;
          *(long *)(puVar9 + -0x18) = lVar12;
          *(undefined1 **)(puVar9 + -0x10) = puVar26;
          *(undefined **)(puVar9 + -8) = puVar27;
          puVar26 = puVar9 + -0x10;
          uVar4 = *(undefined4 *)(lVar24 + 0x20);
          auVar29._8_4_ = uVar4;
          auVar29._0_8_ = lVar24;
          auVar29._12_4_ = 0;
          lVar12 = lVar24;
          if ((int)uVar18 == 0) {
            lVar12 = 0;
            uVar4 = 0;
          }
          auVar5._8_4_ = uVar4;
          auVar5._0_8_ = lVar12;
          auVar5._12_4_ = 0;
          if ((int)uVar18 == 0) {
            uVar21 = 4;
            puVar27 = &UNK_016cef64;
            puVar9 = puVar9 + -0x20;
            goto code_r0x016cdaac;
          }
          if (lVar12 != 0) break;
          puVar27 = &FlatBuffers_FlatBufferBuilder__Finish;
          auVar30 = func_0x00f78af4();
          uVar18 = 0;
          puVar9 = puVar9 + -0x20;
          lVar12 = lVar24;
          uVar22 = uVar17;
        }
        uVar21 = 8;
        puVar27 = &UNK_016cef10;
        puVar9 = puVar9 + -0x20;
        auVar29 = auVar5;
        auVar30 = auVar6;
      }
      else {
        auVar29._8_8_ = 4;
        auVar29._0_8_ = lVar12;
        uVar21 = 0;
        puVar27 = &UNK_016cea78;
        puVar9 = &stack0xffffffffffffffa0;
      }
      goto code_r0x016cdaac;
    }
    unaff_x19 = func_0x00f78af4();
    if (unaff_x19 == 0) {
      auVar31 = func_0x00f78af4();
      unaff_x22 = auVar31._0_8_;
      if (unaff_x22 == 0) {
        lVar12 = func_0x00f78af4();
        return *(ulong *)(lVar12 + 8);
      }
      puVar26 = &stack0xffffffffffffffb0;
      unaff_x21 = 8;
      /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4();
      *(int *)(unaff_x22 + 0x44) = auVar31._8_4_;
      uVar21 = CONCAT44(0,auVar31._8_4_ * 8);
      auVar30._8_8_ = 4;
      auVar30._0_8_ = uVar21;
      auVar29._8_8_ = 4;
      auVar29._0_8_ = unaff_x22;
      puVar27 = &UNK_016ce188;
      puVar9 = &stack0xffffffffffffff90;
      goto code_r0x016cdaac;
    }
    param_2 = 0;
    puVar9 = &stack0xffffffffffffffa0;
    unaff_x29 = &stack0xffffffffffffffc0;
    unaff_x20 = 1;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(unaff_x19);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      if (*(int *)(*(long *)(unaff_x19 + 0x28) + 0x18) < 1) {
        uVar22 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,1);
        *(undefined8 *)(unaff_x19 + 0x28) = uVar22;
      }
      *(undefined4 *)(unaff_x19 + 0x30) = 1;
      uVar16 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(unaff_x19);
      *(int *)(unaff_x19 + 0x34) = (int)uVar16;
      return uVar16;
    }
    unaff_x30 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar30 = func_0x00f78af4();
    uVar22 = auVar30._8_8_;
    param_1 = auVar30._0_8_;
  }
  else {
    param_4 = 0;
    uVar22 = 0;
    if (((int)param_2 == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(param_1,param_2,param_2,0,0);
    puVar9 = (undefined1 *)register0x00000008;
  }
  *(long *)(puVar9 + -0x20) = unaff_x20;
  *(long *)(puVar9 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar9 + -0x10) = unaff_x29;
  *(undefined **)(puVar9 + -8) = unaff_x30;
  uVar20 = (uint)uVar22;
  if ((int)uVar20 < *(int *)(param_1 + 0x30)) {
    unaff_x20 = *(long *)(param_1 + 0x28);
    uVar16 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
    if (unaff_x20 == 0) goto code_r0x016ce410;
    if (uVar20 < *(uint *)(unaff_x20 + 0x18)) {
      *(int *)(unaff_x20 + (long)(int)uVar20 * 4 + 0x20) = (int)uVar16;
      return uVar16;
    }
  }
  else {
    func_0x00f78a24(0x3d22738);
    uVar22 = func_0x00f78aec();
    uVar17 = func_0x00f78a24(0x3d6ceb8);
    param_2 = 0;
    /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar22,uVar17);
    uVar17 = func_0x00f78a24(0x3d56a58);
    func_0x00f78ac0(uVar22,uVar17);
code_r0x016ce410:
    func_0x00f78af4();
  }
  uVar17 = func_0x00f78b24();
  auVar30 = func_0x00f78ac0(uVar17,0);
  uVar16 = auVar30._0_8_;
  *(ulong *)(puVar9 + -0x50) = unaff_x22;
  *(ulong *)(puVar9 + -0x48) = unaff_x21;
  *(long *)(puVar9 + -0x40) = unaff_x20;
  *(undefined8 *)(puVar9 + -0x38) = uVar22;
  *(undefined1 **)(puVar9 + -0x30) = puVar9 + -0x10;
  *(undefined **)(puVar9 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
  puVar26 = puVar9 + -0x30;
  if (((int)param_2 == param_4) && (*(char *)(uVar16 + 0x48) == '\0')) {
    return uVar16;
  }
  auVar29._8_8_ = 1;
  auVar29._0_8_ = uVar16;
  uVar21 = 0;
  puVar27 = &UNK_016ce46c;
  puVar9 = puVar9 + -0x50;
  unaff_x21 = param_2;
code_r0x016cdaac:
  do {
    uVar23 = auVar30._0_8_;
    uVar14 = auVar29._0_8_;
    puVar8 = puVar9 + -0x30;
    *(ulong *)(puVar9 + -0x30) = unaff_x22;
    *(ulong *)(puVar9 + -0x28) = unaff_x21;
    *(undefined1 (*) [16])(puVar9 + -0x20) = auVar30;
    *(undefined1 **)(puVar9 + -0x10) = puVar26;
    *(undefined **)(puVar9 + -8) = puVar27;
    iVar19 = auVar29._8_4_;
    if (*(int *)(uVar14 + 0x20) < iVar19) {
      *(int *)(uVar14 + 0x20) = iVar19;
    }
    uVar16 = unaff_x22;
    if ((*(long *)(uVar14 + 0x18) == 0) ||
       (lVar12 = *(long *)(*(long *)(uVar14 + 0x18) + 0x10), lVar12 == 0)) {
code_r0x016cdb68:
      auVar7._8_8_ = uVar23;
      auVar7._0_8_ = unaff_x21;
      auVar30 = func_0x00f78af4();
      uVar21 = auVar30._8_8_;
      lVar24 = auVar30._0_8_;
      *(undefined1 **)(puVar9 + -0x40) = puVar9 + -0x10;
      *(undefined **)(puVar9 + -0x38) = &FlatBuffers_FlatBufferBuilder__PutBool;
      lVar12 = *(long *)(lVar24 + 0x18);
      iVar19 = *(int *)(lVar24 + 0x10) + -1;
      *(int *)(lVar24 + 0x10) = iVar19;
      if (lVar12 == 0) {
        auVar30 = func_0x00f78af4();
        uVar15 = auVar30._8_8_;
        lVar12 = auVar30._0_8_;
        *(undefined1 **)(puVar9 + -0x50) = puVar9 + -0x40;
        *(undefined **)(puVar9 + -0x48) = &FlatBuffers_FlatBufferBuilder__PutSbyte;
        iVar19 = *(int *)(lVar12 + 0x10) + -1;
        auVar28._8_4_ = iVar19;
        auVar28._0_8_ = *(long *)(lVar12 + 0x18);
        auVar28._12_4_ = 0;
        *(int *)(lVar12 + 0x10) = iVar19;
        if (*(long *)(lVar12 + 0x18) != 0) {
          puVar11 = puVar9 + -0x40;
          puVar26 = *(undefined1 **)(puVar9 + -0x50);
          puVar27 = *(undefined **)(puVar9 + -0x48);
          uVar21 = uVar14;
          goto code_r0x016cc810;
        }
        auVar30 = func_0x00f78af4();
        uVar21 = auVar30._8_8_;
        lVar24 = auVar30._0_8_;
        *(undefined1 **)(puVar9 + -0x60) = puVar9 + -0x50;
        *(undefined **)(puVar9 + -0x58) = &FlatBuffers_FlatBufferBuilder__PutByte;
        lVar12 = *(long *)(lVar24 + 0x18);
        iVar19 = *(int *)(lVar24 + 0x10) + -1;
        *(int *)(lVar24 + 0x10) = iVar19;
        if (lVar12 == 0) {
          auVar30 = func_0x00f78af4();
          uVar21 = auVar30._8_8_;
          lVar12 = auVar30._0_8_;
          puVar8 = puVar9 + -0x90;
          *(ulong *)(puVar9 + -0x90) = uVar16;
          *(ulong *)(puVar9 + -0x88) = unaff_x21;
          *(ulong *)(puVar9 + -0x80) = uVar23;
          *(ulong *)(puVar9 + -0x78) = uVar14;
          *(undefined1 **)(puVar9 + -0x70) = puVar9 + -0x60;
          *(undefined **)(puVar9 + -0x68) = &FlatBuffers_FlatBufferBuilder__PutShort;
          ppuVar25 = (undefined **)(puVar9 + -0x70);
          lVar24 = *(long *)(lVar12 + 0x18);
          uVar20 = *(int *)(lVar12 + 0x10) - 2;
          auVar7._8_8_ = lVar24;
          auVar7._0_8_ = CONCAT44(0,uVar20);
          auVar28._8_4_ = uVar20;
          auVar28._0_8_ = lVar24;
          auVar28._12_4_ = 0;
          *(uint *)(lVar12 + 0x10) = uVar20;
          if (lVar24 != 0) {
            uVar23 = 2;
            puVar27 = &UNK_016cdc34;
            goto code_r0x016cc7a4;
          }
          auVar30 = func_0x00f78af4();
          uVar21 = auVar30._8_8_;
          lVar12 = auVar30._0_8_;
          puVar8 = puVar9 + -0xc0;
          *(ulong *)(puVar9 + -0xc0) = uVar16;
          *(ulong *)(puVar9 + -0xb8) = CONCAT44(0,uVar20);
          *(undefined8 *)(puVar9 + -0xb0) = 0;
          *(ulong *)(puVar9 + -0xa8) = uVar14;
          *(undefined ***)(puVar9 + -0xa0) = ppuVar25;
          *(undefined **)(puVar9 + -0x98) = &FlatBuffers_FlatBufferBuilder__PutUshort;
          ppuVar25 = (undefined **)(puVar9 + -0xa0);
          lVar24 = *(long *)(lVar12 + 0x18);
          uVar20 = *(int *)(lVar12 + 0x10) - 2;
          auVar7._8_8_ = lVar24;
          auVar7._0_8_ = CONCAT44(0,uVar20);
          auVar28._8_4_ = uVar20;
          auVar28._0_8_ = lVar24;
          auVar28._12_4_ = 0;
          *(uint *)(lVar12 + 0x10) = uVar20;
          if (lVar24 != 0) {
            uVar23 = 2;
            puVar27 = &UNK_016cdc90;
            goto code_r0x016cc7a4;
          }
          auVar30 = func_0x00f78af4();
          uVar21 = auVar30._8_8_;
          lVar12 = auVar30._0_8_;
          puVar8 = puVar9 + -0xf0;
          *(ulong *)(puVar9 + -0xf0) = uVar16;
          *(ulong *)(puVar9 + -0xe8) = CONCAT44(0,uVar20);
          *(undefined8 *)(puVar9 + -0xe0) = 0;
          *(ulong *)(puVar9 + -0xd8) = uVar14;
          *(undefined ***)(puVar9 + -0xd0) = ppuVar25;
          *(undefined **)(puVar9 + -200) = &FlatBuffers_FlatBufferBuilder__PutInt;
          ppuVar25 = (undefined **)(puVar9 + -0xd0);
          lVar24 = *(long *)(lVar12 + 0x18);
          uVar20 = *(int *)(lVar12 + 0x10) - 4;
          auVar7._8_8_ = lVar24;
          auVar7._0_8_ = CONCAT44(0,uVar20);
          auVar28._8_4_ = uVar20;
          auVar28._0_8_ = lVar24;
          auVar28._12_4_ = 0;
          *(uint *)(lVar12 + 0x10) = uVar20;
          if (lVar24 != 0) {
            uVar23 = 4;
            puVar27 = &UNK_016cdcec;
            goto code_r0x016cc7a4;
          }
          auVar30 = func_0x00f78af4();
          uVar21 = auVar30._8_8_;
          lVar12 = auVar30._0_8_;
          puVar8 = puVar9 + -0x120;
          *(ulong *)(puVar9 + -0x120) = uVar16;
          *(ulong *)(puVar9 + -0x118) = CONCAT44(0,uVar20);
          *(undefined8 *)(puVar9 + -0x110) = 0;
          *(ulong *)(puVar9 + -0x108) = uVar14;
          *(undefined ***)(puVar9 + -0x100) = ppuVar25;
          *(undefined **)(puVar9 + -0xf8) = &FlatBuffers_FlatBufferBuilder__PutUint;
          ppuVar25 = (undefined **)(puVar9 + -0x100);
          lVar24 = *(long *)(lVar12 + 0x18);
          uVar20 = *(int *)(lVar12 + 0x10) - 4;
          auVar7._8_8_ = lVar24;
          auVar7._0_8_ = CONCAT44(0,uVar20);
          auVar28._8_4_ = uVar20;
          auVar28._0_8_ = lVar24;
          auVar28._12_4_ = 0;
          *(uint *)(lVar12 + 0x10) = uVar20;
          if (lVar24 != 0) {
            uVar23 = 4;
            puVar27 = &UNK_016cdd48;
            goto code_r0x016cc7a4;
          }
          auVar30 = func_0x00f78af4();
          uVar21 = auVar30._8_8_;
          lVar12 = auVar30._0_8_;
          puVar8 = puVar9 + -0x150;
          *(ulong *)(puVar9 + -0x150) = uVar16;
          *(ulong *)(puVar9 + -0x148) = CONCAT44(0,uVar20);
          *(undefined8 *)(puVar9 + -0x140) = 0;
          *(ulong *)(puVar9 + -0x138) = uVar14;
          *(undefined ***)(puVar9 + -0x130) = ppuVar25;
          *(undefined **)(puVar9 + -0x128) = &FlatBuffers_FlatBufferBuilder__PutLong;
          ppuVar25 = (undefined **)(puVar9 + -0x130);
          lVar24 = *(long *)(lVar12 + 0x18);
          uVar20 = *(int *)(lVar12 + 0x10) - 8;
          auVar7._8_8_ = lVar24;
          auVar7._0_8_ = CONCAT44(0,uVar20);
          auVar28._8_4_ = uVar20;
          auVar28._0_8_ = lVar24;
          auVar28._12_4_ = 0;
          *(uint *)(lVar12 + 0x10) = uVar20;
          if (lVar24 != 0) {
            uVar23 = 8;
            puVar27 = &UNK_016cdda4;
            goto code_r0x016cc7a4;
          }
          auVar30 = func_0x00f78af4();
          uVar21 = auVar30._8_8_;
          lVar12 = auVar30._0_8_;
          puVar8 = puVar9 + -0x180;
          *(ulong *)(puVar9 + -0x180) = uVar16;
          *(ulong *)(puVar9 + -0x178) = CONCAT44(0,uVar20);
          *(undefined8 *)(puVar9 + -0x170) = 0;
          *(ulong *)(puVar9 + -0x168) = uVar14;
          *(undefined ***)(puVar9 + -0x160) = ppuVar25;
          *(undefined **)(puVar9 + -0x158) = &FlatBuffers_FlatBufferBuilder__PutUlong;
          ppuVar25 = (undefined **)(puVar9 + -0x160);
          lVar24 = *(long *)(lVar12 + 0x18);
          uVar20 = *(int *)(lVar12 + 0x10) - 8;
          unaff_x21 = CONCAT44(0,uVar20);
          auVar7._8_8_ = lVar24;
          auVar7._0_8_ = unaff_x21;
          auVar28._8_4_ = uVar20;
          auVar28._0_8_ = lVar24;
          auVar28._12_4_ = 0;
          *(uint *)(lVar12 + 0x10) = uVar20;
          if (lVar24 != 0) {
            uVar23 = 8;
            puVar27 = &UNK_016cde00;
            goto code_r0x016cc7a4;
          }
          lVar12 = func_0x00f78af4();
          *(undefined ***)(puVar9 + -400) = ppuVar25;
          *(undefined **)(puVar9 + -0x188) = &FlatBuffers_FlatBufferBuilder__PutFloat;
          lVar24 = *(long *)(lVar12 + 0x18);
          auVar7._8_8_ = lVar24;
          uVar20 = *(int *)(lVar12 + 0x10) - 4;
          uVar21 = (ulong)uVar20;
          auVar28._8_4_ = uVar20;
          auVar28._0_8_ = lVar24;
          auVar28._12_4_ = 0;
          *(uint *)(lVar12 + 0x10) = uVar20;
          if (lVar24 != 0) {
            puVar8 = puVar9 + -0x1b0;
            *(undefined8 *)(puVar9 + -0x1b0) = unaff_d9;
            *(undefined8 *)(puVar9 + -0x1a8) = unaff_d8;
            *(undefined8 *)(puVar9 + -0x1a0) = 0;
            *(ulong *)(puVar9 + -0x198) = uVar14;
            *(undefined8 *)(puVar9 + -400) = *(undefined8 *)(puVar9 + -400);
            *(undefined8 *)(puVar9 + -0x188) = *(undefined8 *)(puVar9 + -0x188);
            ppuVar25 = (undefined **)(puVar9 + -400);
            uVar23 = 4;
            puVar27 = &UNK_016ccba4;
            goto code_r0x016cc7a4;
          }
          lVar12 = func_0x00f78af4();
          *(undefined1 **)(puVar9 + -0x1a0) = puVar9 + -400;
          *(undefined **)(puVar9 + -0x198) = &FlatBuffers_FlatBufferBuilder__PutDouble;
          lVar24 = *(long *)(lVar12 + 0x18);
          auVar7._8_8_ = lVar24;
          uVar20 = *(int *)(lVar12 + 0x10) - 8;
          uVar21 = (ulong)uVar20;
          auVar28._8_4_ = uVar20;
          auVar28._0_8_ = lVar24;
          auVar28._12_4_ = 0;
          *(uint *)(lVar12 + 0x10) = uVar20;
          if (lVar24 != 0) {
            puVar8 = puVar9 + -0x1c0;
            *(undefined8 *)(puVar9 + -0x1c0) = unaff_d9;
            *(undefined8 *)(puVar9 + -0x1b8) = unaff_d8;
            *(undefined8 *)(puVar9 + -0x1b0) = 0;
            *(ulong *)(puVar9 + -0x1a8) = uVar14;
            *(undefined8 *)(puVar9 + -0x1a0) = *(undefined8 *)(puVar9 + -0x1a0);
            *(undefined8 *)(puVar9 + -0x198) = *(undefined8 *)(puVar9 + -0x198);
            ppuVar25 = (undefined **)(puVar9 + -0x1a0);
            uVar23 = 8;
            puVar27 = &UNK_016ccc34;
            goto code_r0x016cc7a4;
          }
          auVar30 = func_0x00f78af4();
          *(undefined8 *)(puVar9 + -0x1c0) = 0;
          *(ulong *)(puVar9 + -0x1b8) = uVar14;
          *(undefined1 **)(puVar9 + -0x1b0) = puVar9 + -0x1a0;
          *(undefined **)(puVar9 + -0x1a8) = &FlatBuffers_FlatBufferBuilder__AddBool;
          puVar26 = puVar9 + -0x1b0;
          auVar29._8_8_ = 1;
          auVar29._0_8_ = auVar30._0_8_;
          uVar21 = 0;
          puVar27 = &UNK_016cde9c;
          puVar9 = puVar9 + -0x1c0;
          unaff_x22 = uVar16;
          goto code_r0x016cdaac;
        }
        puVar10 = puVar9 + -0x50;
        uVar22 = *(undefined8 *)(puVar9 + -0x60);
        uVar17 = *(undefined8 *)(puVar9 + -0x58);
      }
      else {
        puVar10 = puVar9 + -0x30;
        uVar22 = *(undefined8 *)(puVar9 + -0x40);
        uVar17 = *(undefined8 *)(puVar9 + -0x38);
      }
      auVar7._8_4_ = iVar19;
      auVar7._0_8_ = lVar12;
      auVar7._12_4_ = 0;
      auVar28._8_4_ = iVar19;
      auVar28._0_8_ = lVar12;
      auVar28._12_4_ = 0;
      puVar8 = puVar10 + -0x30;
      *(ulong *)(puVar10 + -0x30) = uVar16;
      *(ulong *)(puVar10 + -0x28) = unaff_x21;
      *(ulong *)(puVar10 + -0x20) = uVar23;
      *(ulong *)(puVar10 + -0x18) = uVar14;
      *(undefined8 *)(puVar10 + -0x10) = uVar22;
      *(undefined8 *)(puVar10 + -8) = uVar17;
      ppuVar25 = (undefined **)(puVar10 + -0x10);
      uVar23 = 1;
      puVar27 = &UNK_016cc89c;
      goto code_r0x016cc7a4;
    }
    uVar2 = *(uint *)(lVar12 + 0x18);
    iVar3 = *(int *)(uVar14 + 0x10);
    uVar1 = iVar3 - (uVar2 + (int)uVar21) & iVar19 - 1U;
    uVar23 = CONCAT44(0,uVar1);
    uVar20 = (int)uVar21 + iVar19 + uVar1;
    uVar16 = (ulong)uVar20;
    uVar15 = uVar14;
    while (unaff_x21 = (ulong)uVar2, iVar3 < (int)uVar20) {
      uVar15 = /*FlatBuffers.FlatBufferBuilder$$GrowBuffer*/ func_0x016cda78(uVar14);
      if ((*(long *)(uVar14 + 0x18) == 0) ||
         (lVar12 = *(long *)(*(long *)(uVar14 + 0x18) + 0x10), lVar12 == 0)) goto code_r0x016cdb68;
      iVar3 = *(int *)(uVar14 + 0x10) - uVar2;
      uVar2 = *(uint *)(lVar12 + 0x18);
      iVar3 = iVar3 + uVar2;
      *(int *)(uVar14 + 0x10) = iVar3;
    }
    if ((int)uVar1 < 1) {
      return uVar15;
    }
    uVar22 = *(undefined8 *)*(undefined1 (*) [16])(puVar9 + -0x20);
    uVar17 = *(undefined8 *)(puVar9 + -0x18);
    auVar30 = *(undefined1 (*) [16])(puVar9 + -0x20);
    unaff_x22 = *(ulong *)(puVar9 + -0x30);
    unaff_x21 = *(ulong *)(puVar9 + -0x28);
    *(undefined8 *)(puVar9 + -0x10) = *(undefined8 *)(puVar9 + -0x10);
    *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
    lVar12 = *(long *)(uVar14 + 0x18);
    auVar7._8_8_ = lVar12;
    auVar7._0_8_ = uVar23;
    uVar1 = *(int *)(uVar14 + 0x10) - uVar1;
    uVar16 = (ulong)uVar1;
    auVar28._8_4_ = uVar1;
    auVar28._0_8_ = lVar12;
    auVar28._12_4_ = 0;
    *(uint *)(uVar14 + 0x10) = uVar1;
    if (lVar12 != 0) {
      *(ulong *)(puVar9 + -0x30) = unaff_x22;
      *(ulong *)(puVar9 + -0x28) = unaff_x21;
      *(undefined8 *)(puVar9 + -0x20) = uVar22;
      *(undefined8 *)(puVar9 + -0x18) = uVar17;
      *(undefined8 *)(puVar9 + -0x10) = *(undefined8 *)(puVar9 + -0x10);
      *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
      ppuVar25 = (undefined **)(puVar9 + -0x10);
      puVar27 = &UNK_016cc908;
      uVar21 = 0;
      goto code_r0x016cc7a4;
    }
    lVar12 = func_0x00f78af4();
    puVar26 = puVar9 + -0x20;
    *(undefined1 **)(puVar9 + -0x20) = puVar9 + -0x10;
    *(undefined **)(puVar9 + -0x18) = &FlatBuffers_FlatBufferBuilder__GrowBuffer;
    if ((*(long *)(lVar12 + 0x18) != 0) &&
       (plVar13 = *(long **)(*(long *)(lVar12 + 0x18) + 0x10), plVar13 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016cdaa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar16 = (**(code **)(*plVar13 + 0x178))
                         (plVar13,(int)plVar13[3] << 1,*(undefined8 *)(*plVar13 + 0x180));
      return uVar16;
    }
    puVar27 = &FlatBuffers_FlatBufferBuilder__Prep;
    auVar29 = func_0x00f78af4();
    puVar9 = puVar9 + -0x20;
  } while( true );
}



// ============================================================
// RVA: 0x1657a50 | Core.Networking.HostVoteUpdate.EndHostVoteUpdate
// ============================================================

/* WARNING: Possible PIC construction at 0x016cea74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ceaf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ceb44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ceb68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cebc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cec10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ced48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cee1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cef0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cef44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cef60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce468: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x016ce46c) */
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
/* WARNING: Removing unreachable block (ram,0x016ced4c) */
/* WARNING: Removing unreachable block (ram,0x016cec14) */
/* WARNING: Removing unreachable block (ram,0x016cec20) */
/* WARNING: Removing unreachable block (ram,0x016cec38) */
/* WARNING: Removing unreachable block (ram,0x016cec44) */
/* WARNING: Removing unreachable block (ram,0x016cebcc) */
/* WARNING: Removing unreachable block (ram,0x016cebd8) */
/* WARNING: Removing unreachable block (ram,0x016cec48) */
/* WARNING: Removing unreachable block (ram,0x016cebf0) */
/* WARNING: Removing unreachable block (ram,0x016cec64) */
/* WARNING: Removing unreachable block (ram,0x016cec6c) */
/* WARNING: Removing unreachable block (ram,0x016cec78) */
/* WARNING: Removing unreachable block (ram,0x016ceca8) */
/* WARNING: Removing unreachable block (ram,0x016cec84) */
/* WARNING: Removing unreachable block (ram,0x016cec8c) */
/* WARNING: Removing unreachable block (ram,0x016cec94) */
/* WARNING: Removing unreachable block (ram,0x016cebfc) */
/* WARNING: Removing unreachable block (ram,0x016cec00) */
/* WARNING: Removing unreachable block (ram,0x016cec08) */
/* WARNING: Removing unreachable block (ram,0x016ceb6c) */
/* WARNING: Removing unreachable block (ram,0x016cec58) */
/* WARNING: Removing unreachable block (ram,0x016cecac) */
/* WARNING: Removing unreachable block (ram,0x016cecb8) */
/* WARNING: Removing unreachable block (ram,0x016cecd8) */
/* WARNING: Removing unreachable block (ram,0x016cecf0) */
/* WARNING: Removing unreachable block (ram,0x016ced04) */
/* WARNING: Removing unreachable block (ram,0x016ced10) */
/* WARNING: Removing unreachable block (ram,0x016ced20) */
/* WARNING: Removing unreachable block (ram,0x016ced28) */
/* WARNING: Removing unreachable block (ram,0x016ced3c) */
/* WARNING: Removing unreachable block (ram,0x016cec60) */
/* WARNING: Removing unreachable block (ram,0x016ceb84) */
/* WARNING: Removing unreachable block (ram,0x016ceb88) */
/* WARNING: Removing unreachable block (ram,0x016ceb90) */
/* WARNING: Removing unreachable block (ram,0x016ceb98) */
/* WARNING: Removing unreachable block (ram,0x016ceba0) */
/* WARNING: Removing unreachable block (ram,0x016cebac) */
/* WARNING: Removing unreachable block (ram,0x016ceb48) */
/* WARNING: Removing unreachable block (ram,0x016ceafc) */
/* WARNING: Removing unreachable block (ram,0x016ceb10) */
/* WARNING: Removing unreachable block (ram,0x016ceb1c) */
/* WARNING: Removing unreachable block (ram,0x016ceb2c) */
/* WARNING: Removing unreachable block (ram,0x016cea78) */
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
/* WARNING: Removing unreachable block (ram,0x016cde9c) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */
/* WARNING: Type propagation algorithm not settling */

ulong Core_Networking_HostVoteUpdate__EndHostVoteUpdate
                (long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  int iVar17;
  uint uVar18;
  ulong uVar19;
  undefined4 uVar20;
  ulong uVar21;
  long lVar22;
  ulong unaff_x21;
  ulong uVar23;
  ulong unaff_x22;
  undefined1 *puVar24;
  undefined *puVar25;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [12];
  ulong auStack_b0 [2];
  long lStack_90;
  undefined8 uStack_88;
  
  auVar27._8_8_ = param_1;
  auVar27._0_8_ = param_1;
  if ((bRam0000000003eb5810 & 1) == 0) {
    func_0x00f78a20(0x3d3f140);
    bRam0000000003eb5810 = 1;
  }
  if (param_1 != 0) {
    puVar24 = &stack0xfffffffffffffff0;
    if ((bRam0000000003eb5cd8 & 1) == 0) {
      func_0x00f78a20(0x3d1f100,0);
      bRam0000000003eb5cd8 = 1;
    }
    if (*(int *)(param_1 + 0x30) < 0) {
      func_0x00f78a24(0x3d22a38);
      uVar12 = func_0x00f78aec();
      uVar13 = func_0x00f78a24(0x3d6cea8);
      uVar20 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar12,uVar13);
      uVar13 = func_0x00f78a24(0x3d56a30);
      auVar28 = func_0x00f78ac0(uVar12,uVar13);
      puVar24 = &stack0xffffffffffffffa0;
      uStack_88 = CONCAT44(uVar20,(undefined4)uStack_88);
      lVar14 = *(long *)(auVar28._0_8_ + 0x18);
      if ((lVar14 != 0) && (*(long *)(lVar14 + 0x10) != 0)) {
        uVar18 = *(int *)(*(long *)(lVar14 + 0x10) + 0x18) - auVar28._8_4_;
        uVar23 = (ulong)uVar18;
        auVar26._8_4_ = uVar18;
        auVar26._0_8_ = lVar14;
        auVar26._12_4_ = 0;
        puVar6 = &stack0xffffffffffffff30;
        puVar24 = &stack0xffffffffffffff60;
        auVar5._8_8_ = 4;
        auVar5._0_8_ = lVar14;
        uVar16 = 0x3d201a0;
        if ((bRam0000000003eb5cd0 & 1) == 0) {
          func_0x00f78a20(0x3d201a0);
          bRam0000000003eb5cd0 = 1;
        }
        uVar19 = 4;
        puVar25 = &UNK_016cc68c;
code_r0x016cc7a4:
        do {
          puVar9 = puVar6 + -0x20;
          *(long *)(puVar6 + -0x20) = auVar5._8_8_;
          *(ulong *)(puVar6 + -0x18) = uVar23;
          *(undefined1 **)(puVar6 + -0x10) = puVar24;
          *(undefined **)(puVar6 + -8) = puVar25;
          puVar24 = puVar6 + -0x10;
          if (auVar26._8_4_ < 0) {
code_r0x016cc7d8:
            func_0x00f78a24(0x3d1fcf8);
            uVar23 = func_0x00f78aec();
            /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a4d0(uVar23,0);
            uVar12 = func_0x00f78a24(0x3d52ce8);
            func_0x00f78ac0(uVar23,uVar12);
            uVar21 = uVar19;
          }
          else {
            lVar14 = *(long *)(auVar26._0_8_ + 0x10);
            uVar21 = uVar19;
            if (lVar14 != 0) {
              if (auVar26._8_4_ <= *(int *)(lVar14 + 0x18) - (int)uVar19) {
                return auVar26._0_8_;
              }
              goto code_r0x016cc7d8;
            }
          }
          puVar25 = &FlatBuffers_ByteBuffer__PutSbyte;
          auVar26 = func_0x00f78af4();
code_r0x016cc810:
          puVar6 = puVar9 + -0x30;
          *(ulong *)(puVar9 + -0x30) = uVar16;
          *(undefined1 (*) [16])(puVar9 + -0x28) = auVar5;
          *(ulong *)(puVar9 + -0x18) = uVar23;
          *(undefined1 **)(puVar9 + -0x10) = puVar24;
          *(undefined **)(puVar9 + -8) = puVar25;
          puVar24 = puVar9 + -0x10;
          uVar19 = 1;
          puVar25 = &UNK_016cc834;
          uVar23 = uVar21;
          auVar5 = auVar26;
        } while( true );
      }
      func_0x00f78af4();
      uVar12 = /*System.Int32$$ToString*/ func_0x02ae9b8c((undefined1 *)((long)&uStack_88 + 4),0);
      uVar13 = func_0x00f78a24(0x3d6ce88);
      uVar15 = func_0x00f78a24(0x3d66338);
      lVar14 = /*System.String$$Concat*/ func_0x029be39c(uVar13,uVar12,uVar15,0);
      func_0x00f78a24(0x3d22a38);
      uVar16 = func_0x00f78aec();
      uVar13 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar16,lVar14);
      uVar12 = func_0x00f78a24(0x3d56a50);
      puVar25 = &FlatBuffers_FlatBufferBuilder__Finish;
      auVar27 = func_0x00f78ac0(uVar16,uVar12);
      puVar7 = (undefined1 *)&lStack_90;
      while( true ) {
        uVar23 = auVar27._8_8_;
        lVar22 = auVar27._0_8_;
        auVar27._8_8_ = lVar22;
        auVar27._0_8_ = lVar22;
        *(ulong *)(puVar7 + -0x20) = uVar16;
        *(long *)(puVar7 + -0x18) = lVar14;
        *(undefined1 **)(puVar7 + -0x10) = puVar24;
        *(undefined **)(puVar7 + -8) = puVar25;
        puVar24 = puVar7 + -0x10;
        uVar18 = *(uint *)(lVar22 + 0x20);
        uVar19 = (ulong)uVar18;
        lVar14 = lVar22;
        if ((int)uVar13 == 0) {
          lVar14 = 0;
          uVar18 = 0;
        }
        auVar4._8_8_ = lVar22;
        auVar4._0_8_ = lVar14;
        if ((int)uVar13 == 0) {
          uVar21 = 4;
          puVar25 = &UNK_016cef64;
          puVar7 = puVar7 + -0x20;
          goto code_r0x016cdaac;
        }
        if (lVar14 != 0) break;
        puVar25 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar27 = func_0x00f78af4();
        uVar13 = 0;
        puVar7 = puVar7 + -0x20;
        lVar14 = lVar22;
        uVar16 = uVar23;
      }
      uVar21 = 8;
      puVar25 = &UNK_016cef10;
      puVar7 = puVar7 + -0x20;
      uVar19 = (ulong)uVar18;
      auVar27 = auVar4;
    }
    else {
      uVar21 = 0;
      puVar25 = &UNK_016cea78;
      puVar7 = &stack0xffffffffffffffb0;
      uVar19 = 4;
      uVar23 = 0x3eb5000;
    }
    goto code_r0x016cdaac;
  }
  lVar14 = func_0x00f78af4();
  if (lVar14 == 0) {
    auVar28 = func_0x00f78af4();
    unaff_x22 = auVar28._0_8_;
    if (unaff_x22 == 0) {
      lVar14 = func_0x00f78af4();
      return *(ulong *)(lVar14 + 8);
    }
    puVar24 = &stack0xffffffffffffffc0;
    auVar27._8_8_ = 4;
    auVar27._0_8_ = unaff_x22;
    unaff_x21 = 8;
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4();
    *(int *)(unaff_x22 + 0x44) = auVar28._8_4_;
    uVar21 = (ulong)(uint)(auVar28._8_4_ * 8);
    uVar19 = 4;
    puVar25 = &UNK_016ce188;
    puVar7 = &stack0xffffffffffffffa0;
    uVar23 = uVar21;
    goto code_r0x016cdaac;
  }
  unaff_x21 = 0;
  lVar22 = 1;
  if ((bRam0000000003eb5cd7 & 1) == 0) {
    func_0x00f78a20(0x3d1f100);
    bRam0000000003eb5cd7 = 1;
  }
  /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar14);
  if (*(long *)(lVar14 + 0x28) != 0) {
    if (*(int *)(*(long *)(lVar14 + 0x28) + 0x18) < 1) {
      uVar12 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,1);
      *(undefined8 *)(lVar14 + 0x28) = uVar12;
    }
    *(undefined4 *)(lVar14 + 0x30) = 1;
    uVar16 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar14);
    *(int *)(lVar14 + 0x34) = (int)uVar16;
    return uVar16;
  }
  auVar27 = func_0x00f78af4();
  uVar12 = auVar27._8_8_;
  uVar18 = auVar27._8_4_;
  if ((int)uVar18 < *(int *)(auVar27._0_8_ + 0x30)) {
    lVar22 = *(long *)(auVar27._0_8_ + 0x28);
    uVar16 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
    if (lVar22 == 0) goto code_r0x016ce410;
    if (uVar18 < *(uint *)(lVar22 + 0x18)) {
      *(int *)(lVar22 + (long)(int)uVar18 * 4 + 0x20) = (int)uVar16;
      return uVar16;
    }
  }
  else {
    func_0x00f78a24(0x3d22738);
    uVar12 = func_0x00f78aec();
    uVar13 = func_0x00f78a24(0x3d6ceb8);
    unaff_x21 = 0;
    /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar12,uVar13);
    uVar13 = func_0x00f78a24(0x3d56a58);
    func_0x00f78ac0(uVar12,uVar13);
code_r0x016ce410:
    func_0x00f78af4();
  }
  uVar13 = func_0x00f78b24();
  auVar27 = func_0x00f78ac0(uVar13,0);
  uVar23 = auVar27._0_8_;
  lStack_90 = lVar22;
  uStack_88 = uVar12;
  puVar24 = &stack0xffffffffffffff80;
  if (((int)unaff_x21 == param_4) && (*(char *)(uVar23 + 0x48) == '\0')) {
    return uVar23;
  }
  uVar19 = 1;
  uVar21 = 0;
  puVar25 = &UNK_016ce46c;
  puVar7 = &stack0xffffffffffffff60;
code_r0x016cdaac:
  do {
    uVar11 = auVar27._0_8_;
    puVar6 = puVar7 + -0x30;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(ulong *)(puVar7 + -0x28) = unaff_x21;
    *(ulong *)(puVar7 + -0x20) = uVar23;
    *(long *)(puVar7 + -0x18) = auVar27._8_8_;
    *(undefined1 **)(puVar7 + -0x10) = puVar24;
    *(undefined **)(puVar7 + -8) = puVar25;
    iVar17 = (int)uVar19;
    if (*(int *)(uVar11 + 0x20) < iVar17) {
      *(int *)(uVar11 + 0x20) = iVar17;
    }
    uVar19 = uVar23;
    uVar16 = unaff_x22;
    if ((*(long *)(uVar11 + 0x18) == 0) ||
       (lVar14 = *(long *)(*(long *)(uVar11 + 0x18) + 0x10), lVar14 == 0)) {
code_r0x016cdb68:
      auVar5._8_8_ = uVar19;
      auVar5._0_8_ = unaff_x21;
      auVar27 = func_0x00f78af4();
      uVar23 = auVar27._8_8_;
      lVar22 = auVar27._0_8_;
      *(undefined1 **)(puVar7 + -0x40) = puVar7 + -0x10;
      *(undefined **)(puVar7 + -0x38) = &FlatBuffers_FlatBufferBuilder__PutBool;
      lVar14 = *(long *)(lVar22 + 0x18);
      iVar17 = *(int *)(lVar22 + 0x10) + -1;
      *(int *)(lVar22 + 0x10) = iVar17;
      if (lVar14 == 0) {
        auVar27 = func_0x00f78af4();
        uVar21 = auVar27._8_8_;
        lVar14 = auVar27._0_8_;
        *(undefined1 **)(puVar7 + -0x50) = puVar7 + -0x40;
        *(undefined **)(puVar7 + -0x48) = &FlatBuffers_FlatBufferBuilder__PutSbyte;
        iVar17 = *(int *)(lVar14 + 0x10) + -1;
        auVar26._8_4_ = iVar17;
        auVar26._0_8_ = *(long *)(lVar14 + 0x18);
        auVar26._12_4_ = 0;
        *(int *)(lVar14 + 0x10) = iVar17;
        if (*(long *)(lVar14 + 0x18) != 0) {
          puVar9 = puVar7 + -0x40;
          puVar24 = *(undefined1 **)(puVar7 + -0x50);
          puVar25 = *(undefined **)(puVar7 + -0x48);
          uVar23 = uVar11;
          goto code_r0x016cc810;
        }
        auVar27 = func_0x00f78af4();
        uVar23 = auVar27._8_8_;
        lVar22 = auVar27._0_8_;
        *(undefined1 **)(puVar7 + -0x60) = puVar7 + -0x50;
        *(undefined **)(puVar7 + -0x58) = &FlatBuffers_FlatBufferBuilder__PutByte;
        lVar14 = *(long *)(lVar22 + 0x18);
        iVar17 = *(int *)(lVar22 + 0x10) + -1;
        *(int *)(lVar22 + 0x10) = iVar17;
        if (lVar14 == 0) {
          auVar27 = func_0x00f78af4();
          uVar23 = auVar27._8_8_;
          lVar14 = auVar27._0_8_;
          puVar6 = puVar7 + -0x90;
          *(ulong *)(puVar7 + -0x90) = uVar16;
          *(ulong *)(puVar7 + -0x88) = unaff_x21;
          *(ulong *)(puVar7 + -0x80) = uVar19;
          *(ulong *)(puVar7 + -0x78) = uVar11;
          *(undefined1 **)(puVar7 + -0x70) = puVar7 + -0x60;
          *(undefined **)(puVar7 + -0x68) = &FlatBuffers_FlatBufferBuilder__PutShort;
          puVar24 = puVar7 + -0x70;
          lVar22 = *(long *)(lVar14 + 0x18);
          uVar18 = *(int *)(lVar14 + 0x10) - 2;
          auVar5._8_8_ = lVar22;
          auVar5._0_8_ = CONCAT44(0,uVar18);
          auVar26._8_4_ = uVar18;
          auVar26._0_8_ = lVar22;
          auVar26._12_4_ = 0;
          *(uint *)(lVar14 + 0x10) = uVar18;
          if (lVar22 != 0) {
            uVar19 = 2;
            puVar25 = &UNK_016cdc34;
            goto code_r0x016cc7a4;
          }
          auVar27 = func_0x00f78af4();
          uVar23 = auVar27._8_8_;
          lVar14 = auVar27._0_8_;
          puVar6 = puVar7 + -0xc0;
          *(ulong *)(puVar7 + -0xc0) = uVar16;
          *(ulong *)(puVar7 + -0xb8) = CONCAT44(0,uVar18);
          *(undefined8 *)(puVar7 + -0xb0) = 0;
          *(ulong *)(puVar7 + -0xa8) = uVar11;
          *(undefined1 **)(puVar7 + -0xa0) = puVar24;
          *(undefined **)(puVar7 + -0x98) = &FlatBuffers_FlatBufferBuilder__PutUshort;
          puVar24 = puVar7 + -0xa0;
          lVar22 = *(long *)(lVar14 + 0x18);
          uVar18 = *(int *)(lVar14 + 0x10) - 2;
          auVar5._8_8_ = lVar22;
          auVar5._0_8_ = CONCAT44(0,uVar18);
          auVar26._8_4_ = uVar18;
          auVar26._0_8_ = lVar22;
          auVar26._12_4_ = 0;
          *(uint *)(lVar14 + 0x10) = uVar18;
          if (lVar22 != 0) {
            uVar19 = 2;
            puVar25 = &UNK_016cdc90;
            goto code_r0x016cc7a4;
          }
          auVar27 = func_0x00f78af4();
          uVar23 = auVar27._8_8_;
          lVar14 = auVar27._0_8_;
          puVar6 = puVar7 + -0xf0;
          *(ulong *)(puVar7 + -0xf0) = uVar16;
          *(ulong *)(puVar7 + -0xe8) = CONCAT44(0,uVar18);
          *(undefined8 *)(puVar7 + -0xe0) = 0;
          *(ulong *)(puVar7 + -0xd8) = uVar11;
          *(undefined1 **)(puVar7 + -0xd0) = puVar24;
          *(undefined **)(puVar7 + -200) = &FlatBuffers_FlatBufferBuilder__PutInt;
          puVar24 = puVar7 + -0xd0;
          lVar22 = *(long *)(lVar14 + 0x18);
          uVar18 = *(int *)(lVar14 + 0x10) - 4;
          auVar5._8_8_ = lVar22;
          auVar5._0_8_ = CONCAT44(0,uVar18);
          auVar26._8_4_ = uVar18;
          auVar26._0_8_ = lVar22;
          auVar26._12_4_ = 0;
          *(uint *)(lVar14 + 0x10) = uVar18;
          if (lVar22 != 0) {
            uVar19 = 4;
            puVar25 = &UNK_016cdcec;
            goto code_r0x016cc7a4;
          }
          auVar27 = func_0x00f78af4();
          uVar23 = auVar27._8_8_;
          lVar14 = auVar27._0_8_;
          puVar6 = puVar7 + -0x120;
          *(ulong *)(puVar7 + -0x120) = uVar16;
          *(ulong *)(puVar7 + -0x118) = CONCAT44(0,uVar18);
          *(undefined8 *)(puVar7 + -0x110) = 0;
          *(ulong *)(puVar7 + -0x108) = uVar11;
          *(undefined1 **)(puVar7 + -0x100) = puVar24;
          *(undefined **)(puVar7 + -0xf8) = &FlatBuffers_FlatBufferBuilder__PutUint;
          puVar24 = puVar7 + -0x100;
          lVar22 = *(long *)(lVar14 + 0x18);
          uVar18 = *(int *)(lVar14 + 0x10) - 4;
          auVar5._8_8_ = lVar22;
          auVar5._0_8_ = CONCAT44(0,uVar18);
          auVar26._8_4_ = uVar18;
          auVar26._0_8_ = lVar22;
          auVar26._12_4_ = 0;
          *(uint *)(lVar14 + 0x10) = uVar18;
          if (lVar22 != 0) {
            uVar19 = 4;
            puVar25 = &UNK_016cdd48;
            goto code_r0x016cc7a4;
          }
          auVar27 = func_0x00f78af4();
          uVar23 = auVar27._8_8_;
          lVar14 = auVar27._0_8_;
          puVar6 = puVar7 + -0x150;
          *(ulong *)(puVar7 + -0x150) = uVar16;
          *(ulong *)(puVar7 + -0x148) = CONCAT44(0,uVar18);
          *(undefined8 *)(puVar7 + -0x140) = 0;
          *(ulong *)(puVar7 + -0x138) = uVar11;
          *(undefined1 **)(puVar7 + -0x130) = puVar24;
          *(undefined **)(puVar7 + -0x128) = &FlatBuffers_FlatBufferBuilder__PutLong;
          puVar24 = puVar7 + -0x130;
          lVar22 = *(long *)(lVar14 + 0x18);
          uVar18 = *(int *)(lVar14 + 0x10) - 8;
          auVar5._8_8_ = lVar22;
          auVar5._0_8_ = CONCAT44(0,uVar18);
          auVar26._8_4_ = uVar18;
          auVar26._0_8_ = lVar22;
          auVar26._12_4_ = 0;
          *(uint *)(lVar14 + 0x10) = uVar18;
          if (lVar22 != 0) {
            uVar19 = 8;
            puVar25 = &UNK_016cdda4;
            goto code_r0x016cc7a4;
          }
          auVar27 = func_0x00f78af4();
          uVar23 = auVar27._8_8_;
          lVar14 = auVar27._0_8_;
          puVar6 = puVar7 + -0x180;
          *(ulong *)(puVar7 + -0x180) = uVar16;
          *(ulong *)(puVar7 + -0x178) = CONCAT44(0,uVar18);
          *(undefined8 *)(puVar7 + -0x170) = 0;
          *(ulong *)(puVar7 + -0x168) = uVar11;
          *(undefined1 **)(puVar7 + -0x160) = puVar24;
          *(undefined **)(puVar7 + -0x158) = &FlatBuffers_FlatBufferBuilder__PutUlong;
          puVar24 = puVar7 + -0x160;
          lVar22 = *(long *)(lVar14 + 0x18);
          uVar18 = *(int *)(lVar14 + 0x10) - 8;
          unaff_x21 = CONCAT44(0,uVar18);
          auVar5._8_8_ = lVar22;
          auVar5._0_8_ = unaff_x21;
          auVar26._8_4_ = uVar18;
          auVar26._0_8_ = lVar22;
          auVar26._12_4_ = 0;
          *(uint *)(lVar14 + 0x10) = uVar18;
          if (lVar22 != 0) {
            uVar19 = 8;
            puVar25 = &UNK_016cde00;
            goto code_r0x016cc7a4;
          }
          lVar14 = func_0x00f78af4();
          *(undefined1 **)(puVar7 + -400) = puVar24;
          *(undefined **)(puVar7 + -0x188) = &FlatBuffers_FlatBufferBuilder__PutFloat;
          lVar22 = *(long *)(lVar14 + 0x18);
          auVar5._8_8_ = lVar22;
          uVar18 = *(int *)(lVar14 + 0x10) - 4;
          uVar23 = (ulong)uVar18;
          auVar26._8_4_ = uVar18;
          auVar26._0_8_ = lVar22;
          auVar26._12_4_ = 0;
          *(uint *)(lVar14 + 0x10) = uVar18;
          if (lVar22 != 0) {
            puVar6 = puVar7 + -0x1b0;
            *(undefined8 *)(puVar7 + -0x1b0) = unaff_d9;
            *(undefined8 *)(puVar7 + -0x1a8) = unaff_d8;
            *(undefined8 *)(puVar7 + -0x1a0) = 0;
            *(ulong *)(puVar7 + -0x198) = uVar11;
            *(undefined8 *)(puVar7 + -400) = *(undefined8 *)(puVar7 + -400);
            *(undefined8 *)(puVar7 + -0x188) = *(undefined8 *)(puVar7 + -0x188);
            puVar24 = puVar7 + -400;
            uVar19 = 4;
            puVar25 = &UNK_016ccba4;
            goto code_r0x016cc7a4;
          }
          lVar14 = func_0x00f78af4();
          *(undefined1 **)(puVar7 + -0x1a0) = puVar7 + -400;
          *(undefined **)(puVar7 + -0x198) = &FlatBuffers_FlatBufferBuilder__PutDouble;
          lVar22 = *(long *)(lVar14 + 0x18);
          auVar5._8_8_ = lVar22;
          uVar18 = *(int *)(lVar14 + 0x10) - 8;
          uVar23 = (ulong)uVar18;
          auVar26._8_4_ = uVar18;
          auVar26._0_8_ = lVar22;
          auVar26._12_4_ = 0;
          *(uint *)(lVar14 + 0x10) = uVar18;
          if (lVar22 != 0) {
            puVar6 = puVar7 + -0x1c0;
            *(undefined8 *)(puVar7 + -0x1c0) = unaff_d9;
            *(undefined8 *)(puVar7 + -0x1b8) = unaff_d8;
            *(undefined8 *)(puVar7 + -0x1b0) = 0;
            *(ulong *)(puVar7 + -0x1a8) = uVar11;
            *(undefined8 *)(puVar7 + -0x1a0) = *(undefined8 *)(puVar7 + -0x1a0);
            *(undefined8 *)(puVar7 + -0x198) = *(undefined8 *)(puVar7 + -0x198);
            puVar24 = puVar7 + -0x1a0;
            uVar19 = 8;
            puVar25 = &UNK_016ccc34;
            goto code_r0x016cc7a4;
          }
          auVar27 = func_0x00f78af4();
          uVar23 = auVar27._0_8_;
          *(undefined8 *)(puVar7 + -0x1c0) = 0;
          *(ulong *)(puVar7 + -0x1b8) = uVar11;
          *(undefined1 **)(puVar7 + -0x1b0) = puVar7 + -0x1a0;
          *(undefined **)(puVar7 + -0x1a8) = &FlatBuffers_FlatBufferBuilder__AddBool;
          puVar24 = puVar7 + -0x1b0;
          uVar19 = 1;
          uVar21 = 0;
          puVar25 = &UNK_016cde9c;
          puVar7 = puVar7 + -0x1c0;
          unaff_x22 = uVar16;
          goto code_r0x016cdaac;
        }
        puVar8 = puVar7 + -0x50;
        uVar12 = *(undefined8 *)(puVar7 + -0x60);
        uVar13 = *(undefined8 *)(puVar7 + -0x58);
      }
      else {
        puVar8 = puVar7 + -0x30;
        uVar12 = *(undefined8 *)(puVar7 + -0x40);
        uVar13 = *(undefined8 *)(puVar7 + -0x38);
      }
      auVar5._8_4_ = iVar17;
      auVar5._0_8_ = lVar14;
      auVar5._12_4_ = 0;
      auVar26._8_4_ = iVar17;
      auVar26._0_8_ = lVar14;
      auVar26._12_4_ = 0;
      puVar6 = puVar8 + -0x30;
      *(ulong *)(puVar8 + -0x30) = uVar16;
      *(ulong *)(puVar8 + -0x28) = unaff_x21;
      *(ulong *)(puVar8 + -0x20) = uVar19;
      *(ulong *)(puVar8 + -0x18) = uVar11;
      *(undefined8 *)(puVar8 + -0x10) = uVar12;
      *(undefined8 *)(puVar8 + -8) = uVar13;
      puVar24 = puVar8 + -0x10;
      uVar19 = 1;
      puVar25 = &UNK_016cc89c;
      goto code_r0x016cc7a4;
    }
    uVar2 = *(uint *)(lVar14 + 0x18);
    iVar3 = *(int *)(uVar11 + 0x10);
    uVar1 = iVar3 - (uVar2 + (int)uVar21) & iVar17 - 1U;
    uVar19 = CONCAT44(0,uVar1);
    uVar18 = (int)uVar21 + iVar17 + uVar1;
    uVar16 = (ulong)uVar18;
    uVar23 = uVar11;
    while (unaff_x21 = (ulong)uVar2, iVar3 < (int)uVar18) {
      uVar23 = /*FlatBuffers.FlatBufferBuilder$$GrowBuffer*/ func_0x016cda78(uVar11);
      if ((*(long *)(uVar11 + 0x18) == 0) ||
         (lVar14 = *(long *)(*(long *)(uVar11 + 0x18) + 0x10), lVar14 == 0)) goto code_r0x016cdb68;
      iVar3 = *(int *)(uVar11 + 0x10) - uVar2;
      uVar2 = *(uint *)(lVar14 + 0x18);
      iVar3 = iVar3 + uVar2;
      *(int *)(uVar11 + 0x10) = iVar3;
    }
    if ((int)uVar1 < 1) {
      return uVar23;
    }
    uVar23 = *(ulong *)(puVar7 + -0x20);
    uVar12 = *(undefined8 *)(puVar7 + -0x18);
    unaff_x22 = *(ulong *)(puVar7 + -0x30);
    unaff_x21 = *(ulong *)(puVar7 + -0x28);
    *(undefined8 *)(puVar7 + -0x10) = *(undefined8 *)(puVar7 + -0x10);
    *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
    lVar14 = *(long *)(uVar11 + 0x18);
    auVar5._8_8_ = lVar14;
    auVar5._0_8_ = uVar19;
    uVar1 = *(int *)(uVar11 + 0x10) - uVar1;
    uVar16 = (ulong)uVar1;
    auVar26._8_4_ = uVar1;
    auVar26._0_8_ = lVar14;
    auVar26._12_4_ = 0;
    *(uint *)(uVar11 + 0x10) = uVar1;
    if (lVar14 != 0) {
      *(ulong *)(puVar7 + -0x30) = unaff_x22;
      *(ulong *)(puVar7 + -0x28) = unaff_x21;
      *(ulong *)(puVar7 + -0x20) = uVar23;
      *(undefined8 *)(puVar7 + -0x18) = uVar12;
      *(undefined8 *)(puVar7 + -0x10) = *(undefined8 *)(puVar7 + -0x10);
      *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
      puVar24 = puVar7 + -0x10;
      puVar25 = &UNK_016cc908;
      uVar23 = 0;
      goto code_r0x016cc7a4;
    }
    lVar14 = func_0x00f78af4();
    puVar24 = puVar7 + -0x20;
    *(undefined1 **)(puVar7 + -0x20) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x18) = &FlatBuffers_FlatBufferBuilder__GrowBuffer;
    if ((*(long *)(lVar14 + 0x18) != 0) &&
       (plVar10 = *(long **)(*(long *)(lVar14 + 0x18) + 0x10), plVar10 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016cdaa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar16 = (**(code **)(*plVar10 + 0x178))
                         (plVar10,(int)plVar10[3] << 1,*(undefined8 *)(*plVar10 + 0x180));
      return uVar16;
    }
    puVar25 = &FlatBuffers_FlatBufferBuilder__Prep;
    auVar26 = func_0x00f78af4();
    uVar19 = auVar26._8_8_;
    auVar27._8_8_ = uVar12;
    auVar27._0_8_ = auVar26._0_8_;
    puVar7 = puVar7 + -0x20;
  } while( true );
}



// ============================================================
// RVA: 0x1657a9c | Core.Networking.HostVoteUpdate.StartHostVoteUpdate
// ============================================================

/* WARNING: Possible PIC construction at 0x016ce468: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x016ce46c) */
/* WARNING: Removing unreachable block (ram,0x016cde9c) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_HostVoteUpdate__StartHostVoteUpdate
                (long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ulong unaff_x22;
  ulong uVar21;
  undefined1 *puVar22;
  undefined1 **ppuVar23;
  undefined *puVar24;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [12];
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  if (param_1 == 0) {
    auVar28 = func_0x00f78af4();
    unaff_x22 = auVar28._0_8_;
    if (unaff_x22 == 0) {
      lVar20 = func_0x00f78af4();
      return *(ulong *)(lVar20 + 8);
    }
    ppuVar23 = (undefined1 **)&stack0xffffffffffffffe0;
    uVar17 = 8;
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4();
    *(int *)(unaff_x22 + 0x44) = auVar28._8_4_;
    uVar13 = CONCAT44(0,auVar28._8_4_ * 8);
    auVar27._8_8_ = 4;
    auVar27._0_8_ = uVar13;
    auVar26._8_8_ = 4;
    auVar26._0_8_ = unaff_x22;
    puVar24 = &UNK_016ce188;
    puVar6 = &stack0xffffffffffffffc0;
    goto code_r0x016cdaac;
  }
  uVar17 = 0;
  if ((bRam0000000003eb5cd7 & 1) == 0) {
    func_0x00f78a20(0x3d1f100);
    bRam0000000003eb5cd7 = 1;
  }
  /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(param_1);
  if (*(long *)(param_1 + 0x28) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x28) + 0x18) < 1) {
      uVar12 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,1);
      *(undefined8 *)(param_1 + 0x28) = uVar12;
    }
    *(undefined4 *)(param_1 + 0x30) = 1;
    uVar17 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(param_1);
    *(int *)(param_1 + 0x34) = (int)uVar17;
    return uVar17;
  }
  auVar28 = func_0x00f78af4();
  uVar16 = auVar28._8_4_;
  uStack_50 = 1;
  lStack_48 = param_1;
  if ((int)uVar16 < *(int *)(auVar28._0_8_ + 0x30)) {
    lVar20 = *(long *)(auVar28._0_8_ + 0x28);
    uVar13 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
    if (lVar20 == 0) goto code_r0x016ce410;
    if (uVar16 < *(uint *)(lVar20 + 0x18)) {
      *(int *)(lVar20 + (long)(int)uVar16 * 4 + 0x20) = (int)uVar13;
      return uVar13;
    }
  }
  else {
    func_0x00f78a24(0x3d22738);
    uVar12 = func_0x00f78aec();
    uVar14 = func_0x00f78a24(0x3d6ceb8);
    uVar17 = 0;
    /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar12,uVar14);
    uVar14 = func_0x00f78a24(0x3d56a58);
    func_0x00f78ac0(uVar12,uVar14);
code_r0x016ce410:
    func_0x00f78af4();
  }
  uVar12 = func_0x00f78b24();
  auVar27 = func_0x00f78ac0(uVar12,0);
  uVar13 = auVar27._0_8_;
  puStack_60 = &stack0xffffffffffffffc0;
  puStack_58 = &FlatBuffers_FlatBufferBuilder__AddBool;
  ppuVar23 = &puStack_60;
  if (((int)uVar17 == param_4) && (*(char *)(uVar13 + 0x48) == '\0')) {
    return uVar13;
  }
  auVar26._8_8_ = 1;
  auVar26._0_8_ = uVar13;
  uVar13 = 0;
  puVar24 = &UNK_016ce46c;
  puVar6 = &stack0xffffffffffffff80;
code_r0x016cdaac:
  while( true ) {
    uVar18 = auVar27._0_8_;
    uVar10 = auVar26._0_8_;
    puVar5 = puVar6 + -0x30;
    *(ulong *)(puVar6 + -0x30) = unaff_x22;
    *(ulong *)(puVar6 + -0x28) = uVar17;
    *(undefined1 (*) [16])(puVar6 + -0x20) = auVar27;
    *(undefined1 ***)(puVar6 + -0x10) = ppuVar23;
    *(undefined **)(puVar6 + -8) = puVar24;
    iVar15 = auVar26._8_4_;
    if (*(int *)(uVar10 + 0x20) < iVar15) {
      *(int *)(uVar10 + 0x20) = iVar15;
    }
    uVar21 = unaff_x22;
    if ((*(long *)(uVar10 + 0x18) == 0) ||
       (lVar20 = *(long *)(*(long *)(uVar10 + 0x18) + 0x10), lVar20 == 0)) break;
    uVar2 = *(uint *)(lVar20 + 0x18);
    iVar3 = *(int *)(uVar10 + 0x10);
    uVar1 = iVar3 - (uVar2 + (int)uVar13) & iVar15 - 1U;
    uVar18 = CONCAT44(0,uVar1);
    uVar16 = (int)uVar13 + iVar15 + uVar1;
    uVar21 = (ulong)uVar16;
    uVar11 = uVar10;
    while (uVar17 = (ulong)uVar2, iVar3 < (int)uVar16) {
      uVar11 = /*FlatBuffers.FlatBufferBuilder$$GrowBuffer*/ func_0x016cda78(uVar10);
      if ((*(long *)(uVar10 + 0x18) == 0) ||
         (lVar20 = *(long *)(*(long *)(uVar10 + 0x18) + 0x10), lVar20 == 0)) goto code_r0x016cdb68;
      iVar3 = *(int *)(uVar10 + 0x10) - uVar2;
      uVar2 = *(uint *)(lVar20 + 0x18);
      iVar3 = iVar3 + uVar2;
      *(int *)(uVar10 + 0x10) = iVar3;
    }
    if ((int)uVar1 < 1) {
      return uVar11;
    }
    uVar12 = *(undefined8 *)*(undefined1 (*) [16])(puVar6 + -0x20);
    uVar14 = *(undefined8 *)(puVar6 + -0x18);
    auVar27 = *(undefined1 (*) [16])(puVar6 + -0x20);
    unaff_x22 = *(ulong *)(puVar6 + -0x30);
    uVar17 = *(ulong *)(puVar6 + -0x28);
    *(undefined8 *)(puVar6 + -0x10) = *(undefined8 *)(puVar6 + -0x10);
    *(undefined8 *)(puVar6 + -8) = *(undefined8 *)(puVar6 + -8);
    lVar20 = *(long *)(uVar10 + 0x18);
    auVar4._8_8_ = lVar20;
    auVar4._0_8_ = uVar18;
    uVar1 = *(int *)(uVar10 + 0x10) - uVar1;
    uVar21 = (ulong)uVar1;
    auVar25._8_4_ = uVar1;
    auVar25._0_8_ = lVar20;
    auVar25._12_4_ = 0;
    *(uint *)(uVar10 + 0x10) = uVar1;
    if (lVar20 != 0) {
      *(ulong *)(puVar6 + -0x30) = unaff_x22;
      *(ulong *)(puVar6 + -0x28) = uVar17;
      *(undefined8 *)(puVar6 + -0x20) = uVar12;
      *(undefined8 *)(puVar6 + -0x18) = uVar14;
      *(undefined8 *)(puVar6 + -0x10) = *(undefined8 *)(puVar6 + -0x10);
      *(undefined8 *)(puVar6 + -8) = *(undefined8 *)(puVar6 + -8);
      puVar22 = puVar6 + -0x10;
      puVar24 = &UNK_016cc908;
      uVar13 = 0;
      goto code_r0x016cc7a4;
    }
    lVar20 = func_0x00f78af4();
    ppuVar23 = (undefined1 **)(puVar6 + -0x20);
    *(undefined1 **)(puVar6 + -0x20) = puVar6 + -0x10;
    *(undefined **)(puVar6 + -0x18) = &FlatBuffers_FlatBufferBuilder__GrowBuffer;
    if ((*(long *)(lVar20 + 0x18) != 0) &&
       (plVar9 = *(long **)(*(long *)(lVar20 + 0x18) + 0x10), plVar9 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016cdaa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar17 = (**(code **)(*plVar9 + 0x178))
                         (plVar9,(int)plVar9[3] << 1,*(undefined8 *)(*plVar9 + 0x180));
      return uVar17;
    }
    puVar24 = &FlatBuffers_FlatBufferBuilder__Prep;
    auVar26 = func_0x00f78af4();
    puVar6 = puVar6 + -0x20;
  }
code_r0x016cdb68:
  auVar4._8_8_ = uVar18;
  auVar4._0_8_ = uVar17;
  auVar26 = func_0x00f78af4();
  uVar13 = auVar26._8_8_;
  lVar19 = auVar26._0_8_;
  *(undefined1 **)(puVar6 + -0x40) = puVar6 + -0x10;
  *(undefined **)(puVar6 + -0x38) = &FlatBuffers_FlatBufferBuilder__PutBool;
  lVar20 = *(long *)(lVar19 + 0x18);
  iVar15 = *(int *)(lVar19 + 0x10) + -1;
  *(int *)(lVar19 + 0x10) = iVar15;
  if (lVar20 == 0) {
    auVar26 = func_0x00f78af4();
    uVar11 = auVar26._8_8_;
    lVar20 = auVar26._0_8_;
    *(undefined1 **)(puVar6 + -0x50) = puVar6 + -0x40;
    *(undefined **)(puVar6 + -0x48) = &FlatBuffers_FlatBufferBuilder__PutSbyte;
    iVar15 = *(int *)(lVar20 + 0x10) + -1;
    auVar25._8_4_ = iVar15;
    auVar25._0_8_ = *(long *)(lVar20 + 0x18);
    auVar25._12_4_ = 0;
    *(int *)(lVar20 + 0x10) = iVar15;
    if (*(long *)(lVar20 + 0x18) != 0) {
      puVar8 = puVar6 + -0x40;
      puVar22 = *(undefined1 **)(puVar6 + -0x50);
      puVar24 = *(undefined **)(puVar6 + -0x48);
      uVar13 = uVar10;
      goto code_r0x016cc810;
    }
    auVar26 = func_0x00f78af4();
    uVar13 = auVar26._8_8_;
    lVar19 = auVar26._0_8_;
    *(undefined1 **)(puVar6 + -0x60) = puVar6 + -0x50;
    *(undefined **)(puVar6 + -0x58) = &FlatBuffers_FlatBufferBuilder__PutByte;
    lVar20 = *(long *)(lVar19 + 0x18);
    iVar15 = *(int *)(lVar19 + 0x10) + -1;
    *(int *)(lVar19 + 0x10) = iVar15;
    if (lVar20 == 0) {
      auVar26 = func_0x00f78af4();
      uVar13 = auVar26._8_8_;
      lVar20 = auVar26._0_8_;
      puVar5 = puVar6 + -0x90;
      *(ulong *)(puVar6 + -0x90) = uVar21;
      *(ulong *)(puVar6 + -0x88) = uVar17;
      *(ulong *)(puVar6 + -0x80) = uVar18;
      *(ulong *)(puVar6 + -0x78) = uVar10;
      *(undefined1 **)(puVar6 + -0x70) = puVar6 + -0x60;
      *(undefined **)(puVar6 + -0x68) = &FlatBuffers_FlatBufferBuilder__PutShort;
      puVar22 = puVar6 + -0x70;
      lVar19 = *(long *)(lVar20 + 0x18);
      uVar16 = *(int *)(lVar20 + 0x10) - 2;
      auVar4._8_8_ = lVar19;
      auVar4._0_8_ = CONCAT44(0,uVar16);
      auVar25._8_4_ = uVar16;
      auVar25._0_8_ = lVar19;
      auVar25._12_4_ = 0;
      *(uint *)(lVar20 + 0x10) = uVar16;
      if (lVar19 != 0) {
        uVar18 = 2;
        puVar24 = &UNK_016cdc34;
        goto code_r0x016cc7a4;
      }
      auVar26 = func_0x00f78af4();
      uVar13 = auVar26._8_8_;
      lVar20 = auVar26._0_8_;
      puVar5 = puVar6 + -0xc0;
      *(ulong *)(puVar6 + -0xc0) = uVar21;
      *(ulong *)(puVar6 + -0xb8) = CONCAT44(0,uVar16);
      *(undefined8 *)(puVar6 + -0xb0) = 0;
      *(ulong *)(puVar6 + -0xa8) = uVar10;
      *(undefined1 **)(puVar6 + -0xa0) = puVar22;
      *(undefined **)(puVar6 + -0x98) = &FlatBuffers_FlatBufferBuilder__PutUshort;
      puVar22 = puVar6 + -0xa0;
      lVar19 = *(long *)(lVar20 + 0x18);
      uVar16 = *(int *)(lVar20 + 0x10) - 2;
      auVar4._8_8_ = lVar19;
      auVar4._0_8_ = CONCAT44(0,uVar16);
      auVar25._8_4_ = uVar16;
      auVar25._0_8_ = lVar19;
      auVar25._12_4_ = 0;
      *(uint *)(lVar20 + 0x10) = uVar16;
      if (lVar19 != 0) {
        uVar18 = 2;
        puVar24 = &UNK_016cdc90;
        goto code_r0x016cc7a4;
      }
      auVar26 = func_0x00f78af4();
      uVar13 = auVar26._8_8_;
      lVar20 = auVar26._0_8_;
      puVar5 = puVar6 + -0xf0;
      *(ulong *)(puVar6 + -0xf0) = uVar21;
      *(ulong *)(puVar6 + -0xe8) = CONCAT44(0,uVar16);
      *(undefined8 *)(puVar6 + -0xe0) = 0;
      *(ulong *)(puVar6 + -0xd8) = uVar10;
      *(undefined1 **)(puVar6 + -0xd0) = puVar22;
      *(undefined **)(puVar6 + -200) = &FlatBuffers_FlatBufferBuilder__PutInt;
      puVar22 = puVar6 + -0xd0;
      lVar19 = *(long *)(lVar20 + 0x18);
      uVar16 = *(int *)(lVar20 + 0x10) - 4;
      auVar4._8_8_ = lVar19;
      auVar4._0_8_ = CONCAT44(0,uVar16);
      auVar25._8_4_ = uVar16;
      auVar25._0_8_ = lVar19;
      auVar25._12_4_ = 0;
      *(uint *)(lVar20 + 0x10) = uVar16;
      if (lVar19 != 0) {
        uVar18 = 4;
        puVar24 = &UNK_016cdcec;
        goto code_r0x016cc7a4;
      }
      auVar26 = func_0x00f78af4();
      uVar13 = auVar26._8_8_;
      lVar20 = auVar26._0_8_;
      puVar5 = puVar6 + -0x120;
      *(ulong *)(puVar6 + -0x120) = uVar21;
      *(ulong *)(puVar6 + -0x118) = CONCAT44(0,uVar16);
      *(undefined8 *)(puVar6 + -0x110) = 0;
      *(ulong *)(puVar6 + -0x108) = uVar10;
      *(undefined1 **)(puVar6 + -0x100) = puVar22;
      *(undefined **)(puVar6 + -0xf8) = &FlatBuffers_FlatBufferBuilder__PutUint;
      puVar22 = puVar6 + -0x100;
      lVar19 = *(long *)(lVar20 + 0x18);
      uVar16 = *(int *)(lVar20 + 0x10) - 4;
      auVar4._8_8_ = lVar19;
      auVar4._0_8_ = CONCAT44(0,uVar16);
      auVar25._8_4_ = uVar16;
      auVar25._0_8_ = lVar19;
      auVar25._12_4_ = 0;
      *(uint *)(lVar20 + 0x10) = uVar16;
      if (lVar19 != 0) {
        uVar18 = 4;
        puVar24 = &UNK_016cdd48;
        goto code_r0x016cc7a4;
      }
      auVar26 = func_0x00f78af4();
      uVar13 = auVar26._8_8_;
      lVar20 = auVar26._0_8_;
      puVar5 = puVar6 + -0x150;
      *(ulong *)(puVar6 + -0x150) = uVar21;
      *(ulong *)(puVar6 + -0x148) = CONCAT44(0,uVar16);
      *(undefined8 *)(puVar6 + -0x140) = 0;
      *(ulong *)(puVar6 + -0x138) = uVar10;
      *(undefined1 **)(puVar6 + -0x130) = puVar22;
      *(undefined **)(puVar6 + -0x128) = &FlatBuffers_FlatBufferBuilder__PutLong;
      puVar22 = puVar6 + -0x130;
      lVar19 = *(long *)(lVar20 + 0x18);
      uVar16 = *(int *)(lVar20 + 0x10) - 8;
      auVar4._8_8_ = lVar19;
      auVar4._0_8_ = CONCAT44(0,uVar16);
      auVar25._8_4_ = uVar16;
      auVar25._0_8_ = lVar19;
      auVar25._12_4_ = 0;
      *(uint *)(lVar20 + 0x10) = uVar16;
      if (lVar19 != 0) {
        uVar18 = 8;
        puVar24 = &UNK_016cdda4;
        goto code_r0x016cc7a4;
      }
      auVar26 = func_0x00f78af4();
      uVar13 = auVar26._8_8_;
      lVar20 = auVar26._0_8_;
      puVar5 = puVar6 + -0x180;
      *(ulong *)(puVar6 + -0x180) = uVar21;
      *(ulong *)(puVar6 + -0x178) = CONCAT44(0,uVar16);
      *(undefined8 *)(puVar6 + -0x170) = 0;
      *(ulong *)(puVar6 + -0x168) = uVar10;
      *(undefined1 **)(puVar6 + -0x160) = puVar22;
      *(undefined **)(puVar6 + -0x158) = &FlatBuffers_FlatBufferBuilder__PutUlong;
      puVar22 = puVar6 + -0x160;
      lVar19 = *(long *)(lVar20 + 0x18);
      uVar16 = *(int *)(lVar20 + 0x10) - 8;
      uVar17 = CONCAT44(0,uVar16);
      auVar4._8_8_ = lVar19;
      auVar4._0_8_ = uVar17;
      auVar25._8_4_ = uVar16;
      auVar25._0_8_ = lVar19;
      auVar25._12_4_ = 0;
      *(uint *)(lVar20 + 0x10) = uVar16;
      if (lVar19 != 0) {
        uVar18 = 8;
        puVar24 = &UNK_016cde00;
        goto code_r0x016cc7a4;
      }
      lVar20 = func_0x00f78af4();
      *(undefined1 **)(puVar6 + -400) = puVar22;
      *(undefined **)(puVar6 + -0x188) = &FlatBuffers_FlatBufferBuilder__PutFloat;
      lVar19 = *(long *)(lVar20 + 0x18);
      auVar4._8_8_ = lVar19;
      uVar16 = *(int *)(lVar20 + 0x10) - 4;
      uVar13 = (ulong)uVar16;
      auVar25._8_4_ = uVar16;
      auVar25._0_8_ = lVar19;
      auVar25._12_4_ = 0;
      *(uint *)(lVar20 + 0x10) = uVar16;
      if (lVar19 != 0) {
        puVar5 = puVar6 + -0x1b0;
        *(undefined8 *)(puVar6 + -0x1b0) = unaff_d9;
        *(undefined8 *)(puVar6 + -0x1a8) = unaff_d8;
        *(undefined8 *)(puVar6 + -0x1a0) = 0;
        *(ulong *)(puVar6 + -0x198) = uVar10;
        *(undefined8 *)(puVar6 + -400) = *(undefined8 *)(puVar6 + -400);
        *(undefined8 *)(puVar6 + -0x188) = *(undefined8 *)(puVar6 + -0x188);
        puVar22 = puVar6 + -400;
        uVar18 = 4;
        puVar24 = &UNK_016ccba4;
        goto code_r0x016cc7a4;
      }
      lVar20 = func_0x00f78af4();
      *(undefined1 **)(puVar6 + -0x1a0) = puVar6 + -400;
      *(undefined **)(puVar6 + -0x198) = &FlatBuffers_FlatBufferBuilder__PutDouble;
      lVar19 = *(long *)(lVar20 + 0x18);
      auVar4._8_8_ = lVar19;
      uVar16 = *(int *)(lVar20 + 0x10) - 8;
      uVar13 = (ulong)uVar16;
      auVar25._8_4_ = uVar16;
      auVar25._0_8_ = lVar19;
      auVar25._12_4_ = 0;
      *(uint *)(lVar20 + 0x10) = uVar16;
      if (lVar19 != 0) {
        puVar5 = puVar6 + -0x1c0;
        *(undefined8 *)(puVar6 + -0x1c0) = unaff_d9;
        *(undefined8 *)(puVar6 + -0x1b8) = unaff_d8;
        *(undefined8 *)(puVar6 + -0x1b0) = 0;
        *(ulong *)(puVar6 + -0x1a8) = uVar10;
        *(undefined8 *)(puVar6 + -0x1a0) = *(undefined8 *)(puVar6 + -0x1a0);
        *(undefined8 *)(puVar6 + -0x198) = *(undefined8 *)(puVar6 + -0x198);
        puVar22 = puVar6 + -0x1a0;
        uVar18 = 8;
        puVar24 = &UNK_016ccc34;
        goto code_r0x016cc7a4;
      }
      auVar27 = func_0x00f78af4();
      *(undefined8 *)(puVar6 + -0x1c0) = 0;
      *(ulong *)(puVar6 + -0x1b8) = uVar10;
      *(undefined1 **)(puVar6 + -0x1b0) = puVar6 + -0x1a0;
      *(undefined **)(puVar6 + -0x1a8) = &FlatBuffers_FlatBufferBuilder__AddBool;
      ppuVar23 = (undefined1 **)(puVar6 + -0x1b0);
      auVar26._8_8_ = 1;
      auVar26._0_8_ = auVar27._0_8_;
      uVar13 = 0;
      puVar24 = &UNK_016cde9c;
      puVar6 = puVar6 + -0x1c0;
      unaff_x22 = uVar21;
      goto code_r0x016cdaac;
    }
    puVar7 = puVar6 + -0x50;
    uVar12 = *(undefined8 *)(puVar6 + -0x60);
    uVar14 = *(undefined8 *)(puVar6 + -0x58);
  }
  else {
    puVar7 = puVar6 + -0x30;
    uVar12 = *(undefined8 *)(puVar6 + -0x40);
    uVar14 = *(undefined8 *)(puVar6 + -0x38);
  }
  auVar4._8_4_ = iVar15;
  auVar4._0_8_ = lVar20;
  auVar4._12_4_ = 0;
  auVar25._8_4_ = iVar15;
  auVar25._0_8_ = lVar20;
  auVar25._12_4_ = 0;
  puVar5 = puVar7 + -0x30;
  *(ulong *)(puVar7 + -0x30) = uVar21;
  *(ulong *)(puVar7 + -0x28) = uVar17;
  *(ulong *)(puVar7 + -0x20) = uVar18;
  *(ulong *)(puVar7 + -0x18) = uVar10;
  *(undefined8 *)(puVar7 + -0x10) = uVar12;
  *(undefined8 *)(puVar7 + -8) = uVar14;
  puVar22 = puVar7 + -0x10;
  uVar18 = 1;
  puVar24 = &UNK_016cc89c;
code_r0x016cc7a4:
  puVar8 = puVar5 + -0x20;
  *(long *)(puVar5 + -0x20) = auVar4._8_8_;
  *(ulong *)(puVar5 + -0x18) = uVar13;
  *(undefined1 **)(puVar5 + -0x10) = puVar22;
  *(undefined **)(puVar5 + -8) = puVar24;
  puVar22 = puVar5 + -0x10;
  if (auVar25._8_4_ < 0) {
code_r0x016cc7d8:
    func_0x00f78a24(0x3d1fcf8);
    uVar13 = func_0x00f78aec();
    /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a4d0(uVar13,0);
    uVar12 = func_0x00f78a24(0x3d52ce8);
    func_0x00f78ac0(uVar13,uVar12);
    uVar11 = uVar18;
  }
  else {
    lVar20 = *(long *)(auVar25._0_8_ + 0x10);
    uVar11 = uVar18;
    if (lVar20 != 0) {
      if (auVar25._8_4_ <= *(int *)(lVar20 + 0x18) - (int)uVar18) {
        return auVar25._0_8_;
      }
      goto code_r0x016cc7d8;
    }
  }
  puVar24 = &FlatBuffers_ByteBuffer__PutSbyte;
  auVar25 = func_0x00f78af4();
code_r0x016cc810:
  puVar5 = puVar8 + -0x30;
  *(ulong *)(puVar8 + -0x30) = uVar21;
  *(undefined1 (*) [16])(puVar8 + -0x28) = auVar4;
  *(ulong *)(puVar8 + -0x18) = uVar13;
  *(undefined1 **)(puVar8 + -0x10) = puVar22;
  *(undefined **)(puVar8 + -8) = puVar24;
  puVar22 = puVar8 + -0x10;
  uVar18 = 1;
  puVar24 = &UNK_016cc834;
  uVar13 = uVar11;
  auVar4 = auVar25;
  goto code_r0x016cc7a4;
}



// ============================================================
// RVA: 0x1657ab8 | Core.Networking.HostVoteUpdate.StartVotesVector
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

ulong Core_Networking_HostVoteUpdate__StartVotesVector(ulong param_1,int param_2)

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
  uVar13 = 8;
  uVar16 = 4;
  puVar22 = &stack0xfffffffffffffff0;
  /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4();
  *(int *)(param_1 + 0x44) = param_2;
  uVar20 = (ulong)(uint)(param_2 * 8);
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



