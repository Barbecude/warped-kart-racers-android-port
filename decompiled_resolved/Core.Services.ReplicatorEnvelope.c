// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Services.ReplicatorEnvelope

// ============================================================
// RVA: 0x168192c | Core.Services.ReplicatorEnvelope.get_ByteBuffer
// ============================================================

undefined8 Core_Services_ReplicatorEnvelope__get_ByteBuffer(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// ============================================================
// RVA: 0x1681934 | Core.Services.ReplicatorEnvelope.GetRootAsReplicatorEnvelope
// ============================================================

undefined1  [16] Core_Services_ReplicatorEnvelope__GetRootAsReplicatorEnvelope(long param_1)

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
// RVA: 0x1681940 | Core.Services.ReplicatorEnvelope.GetRootAsReplicatorEnvelope
// ============================================================

undefined1  [16]
Core_Services_ReplicatorEnvelope__GetRootAsReplicatorEnvelope
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
// RVA: 0x1681984 | Core.Services.ReplicatorEnvelope.__assign
// ============================================================

undefined1  [16]
Core_Services_ReplicatorEnvelope____assign
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
// RVA: 0x1681998 | Core.Services.ReplicatorEnvelope.__init
// ============================================================

void Core_Services_ReplicatorEnvelope____init
               (undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  return;
}



// ============================================================
// RVA: 0x16819a4 | Core.Services.ReplicatorEnvelope.get_Time
// ============================================================

void Core_Services_ReplicatorEnvelope__get_Time(int *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong *extraout_x8;
  undefined1 auVar5 [12];
  
  iVar1 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,4,0);
  if (iVar1 == 0) {
    return;
  }
  if (*(long *)(param_1 + 2) != 0) {
    /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(param_1 + 2),*param_1 + iVar1,4);
    return;
  }
  auVar5 = func_0x00f78af4();
  lVar2 = auVar5._0_8_;
  if ((bRam0000000003eb59f8 & 1) == 0) {
    func_0x00f78a20(0x3d3ec80);
    bRam0000000003eb59f8 = 1;
  }
  uVar3 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(lVar2,6,0);
  if ((int)uVar3 != 0) {
    iVar1 = /*FlatBuffers.Table$$__vector*/ func_0x016cf330(lVar2,uVar3,0);
    uVar4 = *(ulong *)(lVar2 + 8);
    extraout_x8[1] = 0;
    extraout_x8[2] = 0;
    *extraout_x8 = 0;
    *(undefined1 *)(extraout_x8 + 2) = 1;
    *extraout_x8 = (ulong)(uint)(iVar1 + auVar5._8_4_ * 0x20);
    extraout_x8[1] = uVar4;
    return;
  }
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  return;
}



// ============================================================
// RVA: 0x16819f8 | Core.Services.ReplicatorEnvelope.Streams
// ============================================================

void Core_Services_ReplicatorEnvelope__Streams(ulong *param_1,long param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if ((bRam0000000003eb59f8 & 1) == 0) {
    func_0x00f78a20(0x3d3ec80);
    bRam0000000003eb59f8 = 1;
  }
  uVar2 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_2,6,0);
  if ((int)uVar2 != 0) {
    iVar1 = /*FlatBuffers.Table$$__vector*/ func_0x016cf330(param_2,uVar2,0);
    uVar3 = *(ulong *)(param_2 + 8);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    *(undefined1 *)(param_1 + 2) = 1;
    *param_1 = (ulong)(uint)(iVar1 + param_3 * 0x20);
    param_1[1] = uVar3;
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// ============================================================
// RVA: 0x1681ab4 | Core.Services.ReplicatorEnvelope.get_StreamsLength
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

ulong Core_Services_ReplicatorEnvelope__get_StreamsLength(int *param_1)

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
// RVA: 0x1681af8 | Core.Services.ReplicatorEnvelope.CreateReplicatorEnvelope
// ============================================================

/* WARNING: Possible PIC construction at 0x01681b20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01681b38: Changing call to branch */
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
/* WARNING: Possible PIC construction at 0x016ce698: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x01681b3c) */
/* WARNING: Removing unreachable block (ram,0x01681b24) */
/* WARNING: Removing unreachable block (ram,0x016ce69c) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_ReplicatorEnvelope__CreateReplicatorEnvelope
                (undefined1 param_1 [16],float param_2,long param_3,undefined8 param_4,ulong param_5
                ,int param_6)

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
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  int iVar22;
  uint uVar23;
  ulong uVar24;
  long unaff_x19;
  long unaff_x20;
  ulong uVar25;
  long lVar26;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar27;
  undefined **ppuVar28;
  undefined1 *puVar29;
  undefined *puVar30;
  float fVar31;
  float fVar32;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [12];
  long alStack_100 [2];
  undefined *apuStack_f0 [2];
  undefined1 auStack_e0 [12];
  undefined4 uStack_d4;
  undefined *puStack_38;
  
  puVar12 = &stack0xffffffffffffffd0;
  puVar29 = &stack0xfffffffffffffff0;
  if (param_3 == 0) {
    auVar36 = func_0x00f78af4();
    uVar17 = auVar36._8_8_;
    uVar24 = auVar36._0_8_;
    if (uVar24 == 0) {
      auVar36 = func_0x00f78af4();
      uVar17 = auVar36._8_8_;
      uVar24 = auVar36._0_8_;
      if (uVar24 != 0) {
        puVar9 = &stack0xffffffffffffff90;
        puVar29 = &stack0xffffffffffffffb0;
        auVar35._8_8_ = 0;
        auVar35._0_8_ = uVar24;
        if ((auVar36._8_4_ == 0) && (*(char *)(uVar24 + 0x48) == '\0')) {
          return uVar24;
        }
        auVar36._8_8_ = 4;
        auVar36._0_8_ = uVar24;
        uVar24 = 0;
        puVar30 = &UNK_016ce69c;
        goto code_r0x016cdaac;
      }
      lVar20 = func_0x00f78af4();
      puVar12 = &stack0xffffffffffffff90;
      puVar29 = &stack0xffffffffffffffa0;
      param_4 = 0x3eb5000;
      if ((bRam0000000003eb59f9 & 1) == 0) {
        func_0x00f78a20(0x3d3f1e8);
        bRam0000000003eb59f9 = 1;
      }
      if (lVar20 != 0) {
        puVar29 = &stack0xffffffffffffffa0;
        auVar35._8_8_ = lVar20;
        auVar35._0_8_ = 0x3eb5000;
        if ((bRam0000000003eb5cd8 & 1) == 0) {
          func_0x00f78a20(0x3d1f100,0);
          bRam0000000003eb5cd8 = 1;
        }
        uVar17 = unaff_x21;
        if (*(int *)(lVar20 + 0x30) < 0) {
          func_0x00f78a24(0x3d22a38);
          uVar18 = func_0x00f78aec();
          uVar19 = func_0x00f78a24(0x3d6cea8);
          uStack_d4 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar18,uVar19);
          uVar19 = func_0x00f78a24(0x3d56a30);
          auVar37 = func_0x00f78ac0(uVar18,uVar19);
          puVar29 = &stack0xffffffffffffff50;
          lVar20 = *(long *)(auVar37._0_8_ + 0x18);
          if ((lVar20 != 0) && (*(long *)(lVar20 + 0x10) != 0)) {
            uVar23 = *(int *)(*(long *)(lVar20 + 0x10) + 0x18) - auVar37._8_4_;
            uVar24 = (ulong)uVar23;
            auVar33._8_4_ = uVar23;
            auVar33._0_8_ = lVar20;
            auVar33._12_4_ = 0;
            puVar8 = &stack0xfffffffffffffee0;
            apuStack_f0[1] = &UNK_016cee20;
            ppuVar28 = apuStack_f0;
            auVar7._8_8_ = 4;
            auVar7._0_8_ = lVar20;
            uVar27 = 0x3d201a0;
            apuStack_f0[0] = puVar29;
            if ((bRam0000000003eb5cd0 & 1) == 0) {
              func_0x00f78a20(0x3d201a0);
              bRam0000000003eb5cd0 = 1;
            }
            uVar25 = 4;
            puVar30 = &UNK_016cc68c;
code_r0x016cc7a4:
            do {
              puVar11 = puVar8 + -0x20;
              *(long *)(puVar8 + -0x20) = auVar7._8_8_;
              *(ulong *)(puVar8 + -0x18) = uVar24;
              *(undefined ***)(puVar8 + -0x10) = ppuVar28;
              *(undefined **)(puVar8 + -8) = puVar30;
              puVar29 = puVar8 + -0x10;
              if (auVar33._8_4_ < 0) {
code_r0x016cc7d8:
                func_0x00f78a24(0x3d1fcf8);
                uVar24 = func_0x00f78aec();
                /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a4d0(uVar24,0);
                uVar18 = func_0x00f78a24(0x3d52ce8);
                func_0x00f78ac0(uVar24,uVar18);
                uVar16 = uVar25;
              }
              else {
                lVar20 = *(long *)(auVar33._0_8_ + 0x10);
                uVar16 = uVar25;
                if (lVar20 != 0) {
                  if (auVar33._8_4_ <= *(int *)(lVar20 + 0x18) - (int)uVar25) {
                    return auVar33._0_8_;
                  }
                  goto code_r0x016cc7d8;
                }
              }
              puVar30 = &FlatBuffers_ByteBuffer__PutSbyte;
              auVar33 = func_0x00f78af4();
code_r0x016cc810:
              puVar8 = puVar11 + -0x30;
              *(ulong *)(puVar11 + -0x30) = uVar27;
              *(undefined1 (*) [16])(puVar11 + -0x28) = auVar7;
              *(ulong *)(puVar11 + -0x18) = uVar24;
              *(undefined1 **)(puVar11 + -0x10) = puVar29;
              *(undefined **)(puVar11 + -8) = puVar30;
              ppuVar28 = (undefined **)(puVar11 + -0x10);
              uVar25 = 1;
              puVar30 = &UNK_016cc834;
              uVar24 = uVar16;
              auVar7 = auVar33;
            } while( true );
          }
          func_0x00f78af4();
          uVar18 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_d4,0);
          uVar19 = func_0x00f78a24(0x3d6ce88);
          uVar21 = func_0x00f78a24(0x3d66338);
          lVar20 = /*System.String$$Concat*/ func_0x029be39c(uVar19,uVar18,uVar21,0);
          func_0x00f78a24(0x3d22a38);
          uVar18 = func_0x00f78aec();
          uVar21 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar18,lVar20);
          uVar19 = func_0x00f78a24(0x3d56a50);
          puVar30 = &FlatBuffers_FlatBufferBuilder__Finish;
          auVar36 = func_0x00f78ac0(uVar18,uVar19);
          puVar9 = auStack_e0;
          while( true ) {
            uVar19 = auVar36._8_8_;
            lVar26 = auVar36._0_8_;
            auVar35._8_8_ = lVar26;
            auVar35._0_8_ = uVar19;
            auVar6._8_8_ = lVar26;
            auVar6._0_8_ = uVar19;
            *(undefined8 *)(puVar9 + -0x20) = uVar18;
            *(long *)(puVar9 + -0x18) = lVar20;
            *(undefined1 **)(puVar9 + -0x10) = puVar29;
            *(undefined **)(puVar9 + -8) = puVar30;
            puVar29 = puVar9 + -0x10;
            uVar4 = *(undefined4 *)(lVar26 + 0x20);
            auVar36._8_4_ = uVar4;
            auVar36._0_8_ = lVar26;
            auVar36._12_4_ = 0;
            lVar20 = lVar26;
            if ((int)uVar21 == 0) {
              lVar20 = 0;
              uVar4 = 0;
            }
            auVar5._8_4_ = uVar4;
            auVar5._0_8_ = lVar20;
            auVar5._12_4_ = 0;
            if ((int)uVar21 == 0) {
              uVar24 = 4;
              puVar30 = &UNK_016cef64;
              puVar9 = puVar9 + -0x20;
              goto code_r0x016cdaac;
            }
            if (lVar20 != 0) break;
            puVar30 = &FlatBuffers_FlatBufferBuilder__Finish;
            auVar36 = func_0x00f78af4();
            uVar21 = 0;
            puVar9 = puVar9 + -0x20;
            lVar20 = lVar26;
            uVar18 = uVar19;
          }
          uVar24 = 8;
          puVar30 = &UNK_016cef10;
          puVar9 = puVar9 + -0x20;
          auVar36 = auVar5;
          auVar35 = auVar6;
        }
        else {
          auVar36._8_8_ = 4;
          auVar36._0_8_ = lVar20;
          uVar24 = 0;
          puVar30 = &UNK_016cea78;
          puVar9 = &stack0xffffffffffffff60;
        }
        goto code_r0x016cdaac;
      }
      puVar30 = &Core_Services_ReplicatorEnvelope__StartReplicatorEnvelope;
      param_3 = func_0x00f78af4();
      if (param_3 == 0) {
        auVar37 = func_0x00f78af4();
        unaff_x22 = auVar37._0_8_;
        if (unaff_x22 == 0) {
          fVar31 = (float)func_0x00f78af4();
          if (param_2 < 0.0) {
            uVar23 = 0;
          }
          else {
            fVar32 = param_2;
            if (fVar31 <= param_2) {
              fVar32 = fVar31;
            }
            fVar31 = -param_2;
            if (-param_2 <= fVar32) {
              fVar31 = fVar32;
            }
            uVar23 = (uint)((fVar31 + param_2) / ((param_2 + param_2) / 255.0));
          }
          return (ulong)(uVar23 & 0xff);
        }
        puVar29 = &stack0xffffffffffffff70;
        uVar17 = 0x20;
        /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4();
        *(int *)(unaff_x22 + 0x44) = auVar37._8_4_;
        uVar24 = CONCAT44(0,auVar37._8_4_ * 0x20);
        auVar35._8_8_ = 8;
        auVar35._0_8_ = uVar24;
        auVar36._8_8_ = 4;
        auVar36._0_8_ = unaff_x22;
        puVar30 = &UNK_016ce188;
        puVar9 = &stack0xffffffffffffff50;
        goto code_r0x016cdaac;
      }
      lVar20 = 0;
      goto code_r0x016ce2a4;
    }
    param_6 = 0;
    puStack_38 = &Core_Services_ReplicatorEnvelope__AddStreams;
    auVar34._8_8_ = 1;
    auVar34._0_8_ = uVar24;
    if ((auVar36._8_4_ == 0) && (*(char *)(uVar24 + 0x48) == '\0')) {
      return uVar24;
    }
    /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(uVar24,uVar17,uVar17,0,0);
    puVar13 = &stack0xffffffffffffffd0;
  }
  else {
    puVar30 = (undefined *)0x1681b24;
    lVar20 = param_3;
    unaff_x21 = param_5;
code_r0x016ce2a4:
    uVar17 = 0;
    puVar13 = puVar12 + -0x30;
    *(ulong *)(puVar12 + -0x30) = unaff_x22;
    *(ulong *)(puVar12 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar12 + -0x20) = param_4;
    *(long *)(puVar12 + -0x18) = lVar20;
    *(undefined1 **)(puVar12 + -0x10) = puVar29;
    *(undefined **)(puVar12 + -8) = puVar30;
    puVar29 = puVar12 + -0x10;
    unaff_x20 = 2;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(param_3);
    if (*(long *)(param_3 + 0x28) != 0) {
      if (*(int *)(*(long *)(param_3 + 0x28) + 0x18) < 2) {
        uVar18 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,2);
        *(undefined8 *)(param_3 + 0x28) = uVar18;
      }
      *(undefined4 *)(param_3 + 0x30) = 2;
      uVar17 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(param_3);
      *(int *)(param_3 + 0x34) = (int)uVar17;
      return uVar17;
    }
    puStack_38 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar34 = func_0x00f78af4();
    unaff_x19 = param_3;
  }
  uVar18 = auVar34._8_8_;
  *(long *)(puVar13 + -0x20) = unaff_x20;
  *(long *)(puVar13 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar13 + -0x10) = puVar29;
  *(undefined **)(puVar13 + -8) = puStack_38;
  uVar23 = auVar34._8_4_;
  if ((int)uVar23 < *(int *)(auVar34._0_8_ + 0x30)) {
    unaff_x20 = *(long *)(auVar34._0_8_ + 0x28);
    uVar24 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
    if (unaff_x20 == 0) goto code_r0x016ce410;
    if (uVar23 < *(uint *)(unaff_x20 + 0x18)) {
      *(int *)(unaff_x20 + (long)(int)uVar23 * 4 + 0x20) = (int)uVar24;
      return uVar24;
    }
  }
  else {
    func_0x00f78a24(0x3d22738);
    uVar18 = func_0x00f78aec();
    uVar19 = func_0x00f78a24(0x3d6ceb8);
    uVar17 = 0;
    /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar18,uVar19);
    uVar19 = func_0x00f78a24(0x3d56a58);
    func_0x00f78ac0(uVar18,uVar19);
code_r0x016ce410:
    func_0x00f78af4();
  }
  uVar19 = func_0x00f78b24();
  auVar35 = func_0x00f78ac0(uVar19,0);
  uVar24 = auVar35._0_8_;
  *(ulong *)(puVar13 + -0x50) = unaff_x22;
  *(ulong *)(puVar13 + -0x48) = unaff_x21;
  *(long *)(puVar13 + -0x40) = unaff_x20;
  *(undefined8 *)(puVar13 + -0x38) = uVar18;
  *(undefined1 **)(puVar13 + -0x30) = puVar13 + -0x10;
  *(undefined **)(puVar13 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
  puVar29 = puVar13 + -0x30;
  if (((int)uVar17 == param_6) && (*(char *)(uVar24 + 0x48) == '\0')) {
    return uVar24;
  }
  auVar36._8_8_ = 1;
  auVar36._0_8_ = uVar24;
  uVar24 = 0;
  puVar30 = &UNK_016ce46c;
  puVar9 = puVar13 + -0x50;
code_r0x016cdaac:
  do {
    uVar25 = auVar35._0_8_;
    uVar15 = auVar36._0_8_;
    puVar8 = puVar9 + -0x30;
    *(ulong *)(puVar9 + -0x30) = unaff_x22;
    *(ulong *)(puVar9 + -0x28) = uVar17;
    *(undefined1 (*) [16])(puVar9 + -0x20) = auVar35;
    *(undefined1 **)(puVar9 + -0x10) = puVar29;
    *(undefined **)(puVar9 + -8) = puVar30;
    iVar22 = auVar36._8_4_;
    if (*(int *)(uVar15 + 0x20) < iVar22) {
      *(int *)(uVar15 + 0x20) = iVar22;
    }
    uVar27 = unaff_x22;
    if ((*(long *)(uVar15 + 0x18) == 0) ||
       (lVar20 = *(long *)(*(long *)(uVar15 + 0x18) + 0x10), lVar20 == 0)) {
code_r0x016cdb68:
      auVar7._8_8_ = uVar25;
      auVar7._0_8_ = uVar17;
      auVar36 = func_0x00f78af4();
      uVar24 = auVar36._8_8_;
      lVar26 = auVar36._0_8_;
      *(undefined1 **)(puVar9 + -0x40) = puVar9 + -0x10;
      *(undefined **)(puVar9 + -0x38) = &FlatBuffers_FlatBufferBuilder__PutBool;
      lVar20 = *(long *)(lVar26 + 0x18);
      iVar22 = *(int *)(lVar26 + 0x10) + -1;
      *(int *)(lVar26 + 0x10) = iVar22;
      if (lVar20 == 0) {
        auVar36 = func_0x00f78af4();
        uVar16 = auVar36._8_8_;
        lVar20 = auVar36._0_8_;
        *(undefined1 **)(puVar9 + -0x50) = puVar9 + -0x40;
        *(undefined **)(puVar9 + -0x48) = &FlatBuffers_FlatBufferBuilder__PutSbyte;
        iVar22 = *(int *)(lVar20 + 0x10) + -1;
        auVar33._8_4_ = iVar22;
        auVar33._0_8_ = *(long *)(lVar20 + 0x18);
        auVar33._12_4_ = 0;
        *(int *)(lVar20 + 0x10) = iVar22;
        if (*(long *)(lVar20 + 0x18) != 0) {
          puVar11 = puVar9 + -0x40;
          puVar29 = *(undefined1 **)(puVar9 + -0x50);
          puVar30 = *(undefined **)(puVar9 + -0x48);
          uVar24 = uVar15;
          goto code_r0x016cc810;
        }
        auVar36 = func_0x00f78af4();
        uVar24 = auVar36._8_8_;
        lVar26 = auVar36._0_8_;
        *(undefined1 **)(puVar9 + -0x60) = puVar9 + -0x50;
        *(undefined **)(puVar9 + -0x58) = &FlatBuffers_FlatBufferBuilder__PutByte;
        lVar20 = *(long *)(lVar26 + 0x18);
        iVar22 = *(int *)(lVar26 + 0x10) + -1;
        *(int *)(lVar26 + 0x10) = iVar22;
        if (lVar20 == 0) {
          auVar36 = func_0x00f78af4();
          uVar24 = auVar36._8_8_;
          lVar20 = auVar36._0_8_;
          puVar8 = puVar9 + -0x90;
          *(ulong *)(puVar9 + -0x90) = uVar27;
          *(ulong *)(puVar9 + -0x88) = uVar17;
          *(ulong *)(puVar9 + -0x80) = uVar25;
          *(ulong *)(puVar9 + -0x78) = uVar15;
          *(undefined1 **)(puVar9 + -0x70) = puVar9 + -0x60;
          *(undefined **)(puVar9 + -0x68) = &FlatBuffers_FlatBufferBuilder__PutShort;
          ppuVar28 = (undefined **)(puVar9 + -0x70);
          lVar26 = *(long *)(lVar20 + 0x18);
          uVar23 = *(int *)(lVar20 + 0x10) - 2;
          auVar7._8_8_ = lVar26;
          auVar7._0_8_ = CONCAT44(0,uVar23);
          auVar33._8_4_ = uVar23;
          auVar33._0_8_ = lVar26;
          auVar33._12_4_ = 0;
          *(uint *)(lVar20 + 0x10) = uVar23;
          if (lVar26 != 0) {
            uVar25 = 2;
            puVar30 = &UNK_016cdc34;
            goto code_r0x016cc7a4;
          }
          auVar36 = func_0x00f78af4();
          uVar24 = auVar36._8_8_;
          lVar20 = auVar36._0_8_;
          puVar8 = puVar9 + -0xc0;
          *(ulong *)(puVar9 + -0xc0) = uVar27;
          *(ulong *)(puVar9 + -0xb8) = CONCAT44(0,uVar23);
          *(undefined8 *)(puVar9 + -0xb0) = 0;
          *(ulong *)(puVar9 + -0xa8) = uVar15;
          *(undefined ***)(puVar9 + -0xa0) = ppuVar28;
          *(undefined **)(puVar9 + -0x98) = &FlatBuffers_FlatBufferBuilder__PutUshort;
          ppuVar28 = (undefined **)(puVar9 + -0xa0);
          lVar26 = *(long *)(lVar20 + 0x18);
          uVar23 = *(int *)(lVar20 + 0x10) - 2;
          auVar7._8_8_ = lVar26;
          auVar7._0_8_ = CONCAT44(0,uVar23);
          auVar33._8_4_ = uVar23;
          auVar33._0_8_ = lVar26;
          auVar33._12_4_ = 0;
          *(uint *)(lVar20 + 0x10) = uVar23;
          if (lVar26 != 0) {
            uVar25 = 2;
            puVar30 = &UNK_016cdc90;
            goto code_r0x016cc7a4;
          }
          auVar36 = func_0x00f78af4();
          uVar24 = auVar36._8_8_;
          lVar20 = auVar36._0_8_;
          puVar8 = puVar9 + -0xf0;
          *(ulong *)(puVar9 + -0xf0) = uVar27;
          *(ulong *)(puVar9 + -0xe8) = CONCAT44(0,uVar23);
          *(undefined8 *)(puVar9 + -0xe0) = 0;
          *(ulong *)(puVar9 + -0xd8) = uVar15;
          *(undefined ***)(puVar9 + -0xd0) = ppuVar28;
          *(undefined **)(puVar9 + -200) = &FlatBuffers_FlatBufferBuilder__PutInt;
          ppuVar28 = (undefined **)(puVar9 + -0xd0);
          lVar26 = *(long *)(lVar20 + 0x18);
          uVar23 = *(int *)(lVar20 + 0x10) - 4;
          auVar7._8_8_ = lVar26;
          auVar7._0_8_ = CONCAT44(0,uVar23);
          auVar33._8_4_ = uVar23;
          auVar33._0_8_ = lVar26;
          auVar33._12_4_ = 0;
          *(uint *)(lVar20 + 0x10) = uVar23;
          if (lVar26 != 0) {
            uVar25 = 4;
            puVar30 = &UNK_016cdcec;
            goto code_r0x016cc7a4;
          }
          auVar36 = func_0x00f78af4();
          uVar24 = auVar36._8_8_;
          lVar20 = auVar36._0_8_;
          puVar8 = puVar9 + -0x120;
          *(ulong *)(puVar9 + -0x120) = uVar27;
          *(ulong *)(puVar9 + -0x118) = CONCAT44(0,uVar23);
          *(undefined8 *)(puVar9 + -0x110) = 0;
          *(ulong *)(puVar9 + -0x108) = uVar15;
          *(undefined ***)(puVar9 + -0x100) = ppuVar28;
          *(undefined **)(puVar9 + -0xf8) = &FlatBuffers_FlatBufferBuilder__PutUint;
          ppuVar28 = (undefined **)(puVar9 + -0x100);
          lVar26 = *(long *)(lVar20 + 0x18);
          uVar23 = *(int *)(lVar20 + 0x10) - 4;
          auVar7._8_8_ = lVar26;
          auVar7._0_8_ = CONCAT44(0,uVar23);
          auVar33._8_4_ = uVar23;
          auVar33._0_8_ = lVar26;
          auVar33._12_4_ = 0;
          *(uint *)(lVar20 + 0x10) = uVar23;
          if (lVar26 != 0) {
            uVar25 = 4;
            puVar30 = &UNK_016cdd48;
            goto code_r0x016cc7a4;
          }
          auVar36 = func_0x00f78af4();
          uVar24 = auVar36._8_8_;
          lVar20 = auVar36._0_8_;
          puVar8 = puVar9 + -0x150;
          *(ulong *)(puVar9 + -0x150) = uVar27;
          *(ulong *)(puVar9 + -0x148) = CONCAT44(0,uVar23);
          *(undefined8 *)(puVar9 + -0x140) = 0;
          *(ulong *)(puVar9 + -0x138) = uVar15;
          *(undefined ***)(puVar9 + -0x130) = ppuVar28;
          *(undefined **)(puVar9 + -0x128) = &FlatBuffers_FlatBufferBuilder__PutLong;
          ppuVar28 = (undefined **)(puVar9 + -0x130);
          lVar26 = *(long *)(lVar20 + 0x18);
          uVar23 = *(int *)(lVar20 + 0x10) - 8;
          auVar7._8_8_ = lVar26;
          auVar7._0_8_ = CONCAT44(0,uVar23);
          auVar33._8_4_ = uVar23;
          auVar33._0_8_ = lVar26;
          auVar33._12_4_ = 0;
          *(uint *)(lVar20 + 0x10) = uVar23;
          if (lVar26 != 0) {
            uVar25 = 8;
            puVar30 = &UNK_016cdda4;
            goto code_r0x016cc7a4;
          }
          auVar36 = func_0x00f78af4();
          uVar24 = auVar36._8_8_;
          lVar20 = auVar36._0_8_;
          puVar8 = puVar9 + -0x180;
          *(ulong *)(puVar9 + -0x180) = uVar27;
          *(ulong *)(puVar9 + -0x178) = CONCAT44(0,uVar23);
          *(undefined8 *)(puVar9 + -0x170) = 0;
          *(ulong *)(puVar9 + -0x168) = uVar15;
          *(undefined ***)(puVar9 + -0x160) = ppuVar28;
          *(undefined **)(puVar9 + -0x158) = &FlatBuffers_FlatBufferBuilder__PutUlong;
          ppuVar28 = (undefined **)(puVar9 + -0x160);
          lVar26 = *(long *)(lVar20 + 0x18);
          uVar23 = *(int *)(lVar20 + 0x10) - 8;
          uVar17 = CONCAT44(0,uVar23);
          auVar7._8_8_ = lVar26;
          auVar7._0_8_ = uVar17;
          auVar33._8_4_ = uVar23;
          auVar33._0_8_ = lVar26;
          auVar33._12_4_ = 0;
          *(uint *)(lVar20 + 0x10) = uVar23;
          if (lVar26 != 0) {
            uVar25 = 8;
            puVar30 = &UNK_016cde00;
            goto code_r0x016cc7a4;
          }
          lVar20 = func_0x00f78af4();
          *(undefined ***)(puVar9 + -400) = ppuVar28;
          *(undefined **)(puVar9 + -0x188) = &FlatBuffers_FlatBufferBuilder__PutFloat;
          lVar26 = *(long *)(lVar20 + 0x18);
          auVar7._8_8_ = lVar26;
          uVar23 = *(int *)(lVar20 + 0x10) - 4;
          uVar24 = (ulong)uVar23;
          auVar33._8_4_ = uVar23;
          auVar33._0_8_ = lVar26;
          auVar33._12_4_ = 0;
          *(uint *)(lVar20 + 0x10) = uVar23;
          if (lVar26 != 0) {
            puVar8 = puVar9 + -0x1b0;
            *(undefined8 *)(puVar9 + -0x1b0) = unaff_d9;
            *(undefined8 *)(puVar9 + -0x1a8) = unaff_d8;
            *(undefined8 *)(puVar9 + -0x1a0) = 0;
            *(ulong *)(puVar9 + -0x198) = uVar15;
            *(undefined8 *)(puVar9 + -400) = *(undefined8 *)(puVar9 + -400);
            *(undefined8 *)(puVar9 + -0x188) = *(undefined8 *)(puVar9 + -0x188);
            ppuVar28 = (undefined **)(puVar9 + -400);
            uVar25 = 4;
            puVar30 = &UNK_016ccba4;
            goto code_r0x016cc7a4;
          }
          lVar20 = func_0x00f78af4();
          *(undefined1 **)(puVar9 + -0x1a0) = puVar9 + -400;
          *(undefined **)(puVar9 + -0x198) = &FlatBuffers_FlatBufferBuilder__PutDouble;
          lVar26 = *(long *)(lVar20 + 0x18);
          auVar7._8_8_ = lVar26;
          uVar23 = *(int *)(lVar20 + 0x10) - 8;
          uVar24 = (ulong)uVar23;
          auVar33._8_4_ = uVar23;
          auVar33._0_8_ = lVar26;
          auVar33._12_4_ = 0;
          *(uint *)(lVar20 + 0x10) = uVar23;
          if (lVar26 != 0) {
            puVar8 = puVar9 + -0x1c0;
            *(undefined8 *)(puVar9 + -0x1c0) = unaff_d9;
            *(undefined8 *)(puVar9 + -0x1b8) = unaff_d8;
            *(undefined8 *)(puVar9 + -0x1b0) = 0;
            *(ulong *)(puVar9 + -0x1a8) = uVar15;
            *(undefined8 *)(puVar9 + -0x1a0) = *(undefined8 *)(puVar9 + -0x1a0);
            *(undefined8 *)(puVar9 + -0x198) = *(undefined8 *)(puVar9 + -0x198);
            ppuVar28 = (undefined **)(puVar9 + -0x1a0);
            uVar25 = 8;
            puVar30 = &UNK_016ccc34;
            goto code_r0x016cc7a4;
          }
          auVar35 = func_0x00f78af4();
          *(undefined8 *)(puVar9 + -0x1c0) = 0;
          *(ulong *)(puVar9 + -0x1b8) = uVar15;
          *(undefined1 **)(puVar9 + -0x1b0) = puVar9 + -0x1a0;
          *(undefined **)(puVar9 + -0x1a8) = &FlatBuffers_FlatBufferBuilder__AddBool;
          puVar29 = puVar9 + -0x1b0;
          auVar36._8_8_ = 1;
          auVar36._0_8_ = auVar35._0_8_;
          uVar24 = 0;
          puVar30 = &UNK_016cde9c;
          puVar9 = puVar9 + -0x1c0;
          unaff_x22 = uVar27;
          goto code_r0x016cdaac;
        }
        puVar10 = puVar9 + -0x50;
        uVar18 = *(undefined8 *)(puVar9 + -0x60);
        uVar19 = *(undefined8 *)(puVar9 + -0x58);
      }
      else {
        puVar10 = puVar9 + -0x30;
        uVar18 = *(undefined8 *)(puVar9 + -0x40);
        uVar19 = *(undefined8 *)(puVar9 + -0x38);
      }
      auVar7._8_4_ = iVar22;
      auVar7._0_8_ = lVar20;
      auVar7._12_4_ = 0;
      auVar33._8_4_ = iVar22;
      auVar33._0_8_ = lVar20;
      auVar33._12_4_ = 0;
      puVar8 = puVar10 + -0x30;
      *(ulong *)(puVar10 + -0x30) = uVar27;
      *(ulong *)(puVar10 + -0x28) = uVar17;
      *(ulong *)(puVar10 + -0x20) = uVar25;
      *(ulong *)(puVar10 + -0x18) = uVar15;
      *(undefined8 *)(puVar10 + -0x10) = uVar18;
      *(undefined8 *)(puVar10 + -8) = uVar19;
      ppuVar28 = (undefined **)(puVar10 + -0x10);
      uVar25 = 1;
      puVar30 = &UNK_016cc89c;
      goto code_r0x016cc7a4;
    }
    uVar2 = *(uint *)(lVar20 + 0x18);
    iVar3 = *(int *)(uVar15 + 0x10);
    uVar1 = iVar3 - (uVar2 + (int)uVar24) & iVar22 - 1U;
    uVar25 = CONCAT44(0,uVar1);
    uVar23 = (int)uVar24 + iVar22 + uVar1;
    uVar27 = (ulong)uVar23;
    uVar16 = uVar15;
    while (uVar17 = (ulong)uVar2, iVar3 < (int)uVar23) {
      uVar16 = /*FlatBuffers.FlatBufferBuilder$$GrowBuffer*/ func_0x016cda78(uVar15);
      if ((*(long *)(uVar15 + 0x18) == 0) ||
         (lVar20 = *(long *)(*(long *)(uVar15 + 0x18) + 0x10), lVar20 == 0)) goto code_r0x016cdb68;
      iVar3 = *(int *)(uVar15 + 0x10) - uVar2;
      uVar2 = *(uint *)(lVar20 + 0x18);
      iVar3 = iVar3 + uVar2;
      *(int *)(uVar15 + 0x10) = iVar3;
    }
    if ((int)uVar1 < 1) {
      return uVar16;
    }
    uVar18 = *(undefined8 *)*(undefined1 (*) [16])(puVar9 + -0x20);
    uVar19 = *(undefined8 *)(puVar9 + -0x18);
    auVar35 = *(undefined1 (*) [16])(puVar9 + -0x20);
    unaff_x22 = *(ulong *)(puVar9 + -0x30);
    uVar17 = *(ulong *)(puVar9 + -0x28);
    *(undefined8 *)(puVar9 + -0x10) = *(undefined8 *)(puVar9 + -0x10);
    *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
    lVar20 = *(long *)(uVar15 + 0x18);
    auVar7._8_8_ = lVar20;
    auVar7._0_8_ = uVar25;
    uVar1 = *(int *)(uVar15 + 0x10) - uVar1;
    uVar27 = (ulong)uVar1;
    auVar33._8_4_ = uVar1;
    auVar33._0_8_ = lVar20;
    auVar33._12_4_ = 0;
    *(uint *)(uVar15 + 0x10) = uVar1;
    if (lVar20 != 0) {
      *(ulong *)(puVar9 + -0x30) = unaff_x22;
      *(ulong *)(puVar9 + -0x28) = uVar17;
      *(undefined8 *)(puVar9 + -0x20) = uVar18;
      *(undefined8 *)(puVar9 + -0x18) = uVar19;
      *(undefined8 *)(puVar9 + -0x10) = *(undefined8 *)(puVar9 + -0x10);
      *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
      ppuVar28 = (undefined **)(puVar9 + -0x10);
      puVar30 = &UNK_016cc908;
      uVar24 = 0;
      goto code_r0x016cc7a4;
    }
    lVar20 = func_0x00f78af4();
    puVar29 = puVar9 + -0x20;
    *(undefined1 **)(puVar9 + -0x20) = puVar9 + -0x10;
    *(undefined **)(puVar9 + -0x18) = &FlatBuffers_FlatBufferBuilder__GrowBuffer;
    if ((*(long *)(lVar20 + 0x18) != 0) &&
       (plVar14 = *(long **)(*(long *)(lVar20 + 0x18) + 0x10), plVar14 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016cdaa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar17 = (**(code **)(*plVar14 + 0x178))
                         (plVar14,(int)plVar14[3] << 1,*(undefined8 *)(*plVar14 + 0x180));
      return uVar17;
    }
    puVar30 = &FlatBuffers_FlatBufferBuilder__Prep;
    auVar36 = func_0x00f78af4();
    puVar9 = puVar9 + -0x20;
  } while( true );
}



// ============================================================
// RVA: 0x1681b54 | Core.Services.ReplicatorEnvelope.AddStreams
// ============================================================

/* WARNING: Possible PIC construction at 0x016ce468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce698: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x016ce69c) */
/* WARNING: Removing unreachable block (ram,0x016ce46c) */
/* WARNING: Removing unreachable block (ram,0x016cde9c) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_ReplicatorEnvelope__AddStreams
                (undefined1 param_1 [16],float param_2,ulong param_3,ulong param_4,
                undefined8 param_5,int param_6)

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
  long unaff_x19;
  undefined8 uVar21;
  long unaff_x20;
  ulong uVar22;
  long lVar23;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar24;
  undefined1 *unaff_x29;
  undefined **ppuVar25;
  undefined1 *puVar26;
  undefined *unaff_x30;
  undefined *puVar27;
  float fVar28;
  float fVar29;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [12];
  long alStack_d0 [2];
  undefined *apuStack_c0 [2];
  undefined1 auStack_b0 [12];
  undefined4 uStack_a4;
  
  if (param_3 == 0) {
    auVar30 = func_0x00f78af4();
    uVar16 = auVar30._0_8_;
    if (uVar16 != 0) {
      puVar26 = &stack0xffffffffffffffe0;
      auVar32._8_8_ = 0;
      auVar32._0_8_ = uVar16;
      if ((auVar30._8_4_ == 0) && (*(char *)(uVar16 + 0x48) == '\0')) {
        return uVar16;
      }
      auVar31._8_8_ = 4;
      auVar31._0_8_ = uVar16;
      uVar16 = 0;
      puVar27 = &UNK_016ce69c;
      puVar9 = &stack0xffffffffffffffc0;
      unaff_x21 = auVar30._8_8_;
      goto code_r0x016cdaac;
    }
    lVar12 = func_0x00f78af4();
    if ((bRam0000000003eb59f9 & 1) == 0) {
      func_0x00f78a20(0x3d3f1e8);
      bRam0000000003eb59f9 = 1;
    }
    if (lVar12 != 0) {
      puVar26 = &stack0xffffffffffffffd0;
      auVar32._8_8_ = lVar12;
      auVar32._0_8_ = 0x3eb5000;
      if ((bRam0000000003eb5cd8 & 1) == 0) {
        func_0x00f78a20(0x3d1f100,0);
        bRam0000000003eb5cd8 = 1;
      }
      if (*(int *)(lVar12 + 0x30) < 0) {
        func_0x00f78a24(0x3d22a38);
        uVar21 = func_0x00f78aec();
        uVar17 = func_0x00f78a24(0x3d6cea8);
        uStack_a4 = 0;
        /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar21,uVar17);
        uVar17 = func_0x00f78a24(0x3d56a30);
        auVar33 = func_0x00f78ac0(uVar21,uVar17);
        puVar26 = &stack0xffffffffffffff80;
        lVar12 = *(long *)(auVar33._0_8_ + 0x18);
        if ((lVar12 != 0) && (*(long *)(lVar12 + 0x10) != 0)) {
          uVar20 = *(int *)(*(long *)(lVar12 + 0x10) + 0x18) - auVar33._8_4_;
          uVar16 = (ulong)uVar20;
          auVar30._8_4_ = uVar20;
          auVar30._0_8_ = lVar12;
          auVar30._12_4_ = 0;
          puVar8 = &stack0xffffffffffffff10;
          apuStack_c0[1] = &UNK_016cee20;
          ppuVar25 = apuStack_c0;
          auVar7._8_8_ = 4;
          auVar7._0_8_ = lVar12;
          uVar24 = 0x3d201a0;
          apuStack_c0[0] = puVar26;
          if ((bRam0000000003eb5cd0 & 1) == 0) {
            func_0x00f78a20(0x3d201a0);
            bRam0000000003eb5cd0 = 1;
          }
          uVar22 = 4;
          puVar27 = &UNK_016cc68c;
code_r0x016cc7a4:
          do {
            puVar11 = puVar8 + -0x20;
            *(long *)(puVar8 + -0x20) = auVar7._8_8_;
            *(ulong *)(puVar8 + -0x18) = uVar16;
            *(undefined ***)(puVar8 + -0x10) = ppuVar25;
            *(undefined **)(puVar8 + -8) = puVar27;
            puVar26 = puVar8 + -0x10;
            if (auVar30._8_4_ < 0) {
code_r0x016cc7d8:
              func_0x00f78a24(0x3d1fcf8);
              uVar16 = func_0x00f78aec();
              /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a4d0(uVar16,0);
              uVar21 = func_0x00f78a24(0x3d52ce8);
              func_0x00f78ac0(uVar16,uVar21);
              uVar15 = uVar22;
            }
            else {
              lVar12 = *(long *)(auVar30._0_8_ + 0x10);
              uVar15 = uVar22;
              if (lVar12 != 0) {
                if (auVar30._8_4_ <= *(int *)(lVar12 + 0x18) - (int)uVar22) {
                  return auVar30._0_8_;
                }
                goto code_r0x016cc7d8;
              }
            }
            puVar27 = &FlatBuffers_ByteBuffer__PutSbyte;
            auVar30 = func_0x00f78af4();
code_r0x016cc810:
            puVar8 = puVar11 + -0x30;
            *(ulong *)(puVar11 + -0x30) = uVar24;
            *(undefined1 (*) [16])(puVar11 + -0x28) = auVar7;
            *(ulong *)(puVar11 + -0x18) = uVar16;
            *(undefined1 **)(puVar11 + -0x10) = puVar26;
            *(undefined **)(puVar11 + -8) = puVar27;
            ppuVar25 = (undefined **)(puVar11 + -0x10);
            uVar22 = 1;
            puVar27 = &UNK_016cc834;
            uVar16 = uVar15;
            auVar7 = auVar30;
          } while( true );
        }
        func_0x00f78af4();
        uVar21 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_a4,0);
        uVar17 = func_0x00f78a24(0x3d6ce88);
        uVar18 = func_0x00f78a24(0x3d66338);
        lVar12 = /*System.String$$Concat*/ func_0x029be39c(uVar17,uVar21,uVar18,0);
        func_0x00f78a24(0x3d22a38);
        uVar21 = func_0x00f78aec();
        uVar18 = 0;
        /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar21,lVar12);
        uVar17 = func_0x00f78a24(0x3d56a50);
        puVar27 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar30 = func_0x00f78ac0(uVar21,uVar17);
        puVar9 = auStack_b0;
        while( true ) {
          uVar17 = auVar30._8_8_;
          lVar23 = auVar30._0_8_;
          auVar32._8_8_ = lVar23;
          auVar32._0_8_ = uVar17;
          auVar6._8_8_ = lVar23;
          auVar6._0_8_ = uVar17;
          *(undefined8 *)(puVar9 + -0x20) = uVar21;
          *(long *)(puVar9 + -0x18) = lVar12;
          *(undefined1 **)(puVar9 + -0x10) = puVar26;
          *(undefined **)(puVar9 + -8) = puVar27;
          puVar26 = puVar9 + -0x10;
          uVar4 = *(undefined4 *)(lVar23 + 0x20);
          auVar31._8_4_ = uVar4;
          auVar31._0_8_ = lVar23;
          auVar31._12_4_ = 0;
          lVar12 = lVar23;
          if ((int)uVar18 == 0) {
            lVar12 = 0;
            uVar4 = 0;
          }
          auVar5._8_4_ = uVar4;
          auVar5._0_8_ = lVar12;
          auVar5._12_4_ = 0;
          if ((int)uVar18 == 0) {
            uVar16 = 4;
            puVar27 = &UNK_016cef64;
            puVar9 = puVar9 + -0x20;
            goto code_r0x016cdaac;
          }
          if (lVar12 != 0) break;
          puVar27 = &FlatBuffers_FlatBufferBuilder__Finish;
          auVar30 = func_0x00f78af4();
          uVar18 = 0;
          puVar9 = puVar9 + -0x20;
          lVar12 = lVar23;
          uVar21 = uVar17;
        }
        uVar16 = 8;
        puVar27 = &UNK_016cef10;
        puVar9 = puVar9 + -0x20;
        auVar31 = auVar5;
        auVar32 = auVar6;
      }
      else {
        auVar31._8_8_ = 4;
        auVar31._0_8_ = lVar12;
        uVar16 = 0;
        puVar27 = &UNK_016cea78;
        puVar9 = &stack0xffffffffffffff90;
      }
      goto code_r0x016cdaac;
    }
    unaff_x19 = func_0x00f78af4();
    if (unaff_x19 == 0) {
      auVar33 = func_0x00f78af4();
      unaff_x22 = auVar33._0_8_;
      if (unaff_x22 == 0) {
        fVar28 = (float)func_0x00f78af4();
        if (param_2 < 0.0) {
          uVar20 = 0;
        }
        else {
          fVar29 = param_2;
          if (fVar28 <= param_2) {
            fVar29 = fVar28;
          }
          fVar28 = -param_2;
          if (-param_2 <= fVar29) {
            fVar28 = fVar29;
          }
          uVar20 = (uint)((fVar28 + param_2) / ((param_2 + param_2) / 255.0));
        }
        return (ulong)(uVar20 & 0xff);
      }
      puVar26 = &stack0xffffffffffffffa0;
      unaff_x21 = 0x20;
      /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4();
      *(int *)(unaff_x22 + 0x44) = auVar33._8_4_;
      uVar16 = CONCAT44(0,auVar33._8_4_ * 0x20);
      auVar32._8_8_ = 8;
      auVar32._0_8_ = uVar16;
      auVar31._8_8_ = 4;
      auVar31._0_8_ = unaff_x22;
      puVar27 = &UNK_016ce188;
      puVar9 = &stack0xffffffffffffff80;
      goto code_r0x016cdaac;
    }
    param_4 = 0;
    puVar9 = &stack0xffffffffffffff90;
    unaff_x29 = &stack0xffffffffffffffb0;
    unaff_x20 = 2;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(unaff_x19);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      if (*(int *)(*(long *)(unaff_x19 + 0x28) + 0x18) < 2) {
        uVar21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,2);
        *(undefined8 *)(unaff_x19 + 0x28) = uVar21;
      }
      *(undefined4 *)(unaff_x19 + 0x30) = 2;
      uVar16 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(unaff_x19);
      *(int *)(unaff_x19 + 0x34) = (int)uVar16;
      return uVar16;
    }
    unaff_x30 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar30 = func_0x00f78af4();
    uVar21 = auVar30._8_8_;
    param_3 = auVar30._0_8_;
  }
  else {
    param_6 = 0;
    uVar21 = 1;
    if (((int)param_4 == 0) && (*(char *)(param_3 + 0x48) == '\0')) {
      return param_3;
    }
    /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(param_3,param_4,param_4,0,0);
    puVar9 = (undefined1 *)register0x00000008;
  }
  *(long *)(puVar9 + -0x20) = unaff_x20;
  *(long *)(puVar9 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar9 + -0x10) = unaff_x29;
  *(undefined **)(puVar9 + -8) = unaff_x30;
  uVar20 = (uint)uVar21;
  if ((int)uVar20 < *(int *)(param_3 + 0x30)) {
    unaff_x20 = *(long *)(param_3 + 0x28);
    uVar16 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
    if (unaff_x20 == 0) goto code_r0x016ce410;
    if (uVar20 < *(uint *)(unaff_x20 + 0x18)) {
      *(int *)(unaff_x20 + (long)(int)uVar20 * 4 + 0x20) = (int)uVar16;
      return uVar16;
    }
  }
  else {
    func_0x00f78a24(0x3d22738);
    uVar21 = func_0x00f78aec();
    uVar17 = func_0x00f78a24(0x3d6ceb8);
    param_4 = 0;
    /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar21,uVar17);
    uVar17 = func_0x00f78a24(0x3d56a58);
    func_0x00f78ac0(uVar21,uVar17);
code_r0x016ce410:
    func_0x00f78af4();
  }
  uVar17 = func_0x00f78b24();
  auVar32 = func_0x00f78ac0(uVar17,0);
  uVar16 = auVar32._0_8_;
  *(ulong *)(puVar9 + -0x50) = unaff_x22;
  *(ulong *)(puVar9 + -0x48) = unaff_x21;
  *(long *)(puVar9 + -0x40) = unaff_x20;
  *(undefined8 *)(puVar9 + -0x38) = uVar21;
  *(undefined1 **)(puVar9 + -0x30) = puVar9 + -0x10;
  *(undefined **)(puVar9 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
  puVar26 = puVar9 + -0x30;
  if (((int)param_4 == param_6) && (*(char *)(uVar16 + 0x48) == '\0')) {
    return uVar16;
  }
  auVar31._8_8_ = 1;
  auVar31._0_8_ = uVar16;
  uVar16 = 0;
  puVar27 = &UNK_016ce46c;
  puVar9 = puVar9 + -0x50;
  unaff_x21 = param_4;
code_r0x016cdaac:
  do {
    uVar22 = auVar32._0_8_;
    uVar14 = auVar31._0_8_;
    puVar8 = puVar9 + -0x30;
    *(ulong *)(puVar9 + -0x30) = unaff_x22;
    *(ulong *)(puVar9 + -0x28) = unaff_x21;
    *(undefined1 (*) [16])(puVar9 + -0x20) = auVar32;
    *(undefined1 **)(puVar9 + -0x10) = puVar26;
    *(undefined **)(puVar9 + -8) = puVar27;
    iVar19 = auVar31._8_4_;
    if (*(int *)(uVar14 + 0x20) < iVar19) {
      *(int *)(uVar14 + 0x20) = iVar19;
    }
    uVar24 = unaff_x22;
    if ((*(long *)(uVar14 + 0x18) == 0) ||
       (lVar12 = *(long *)(*(long *)(uVar14 + 0x18) + 0x10), lVar12 == 0)) {
code_r0x016cdb68:
      auVar7._8_8_ = uVar22;
      auVar7._0_8_ = unaff_x21;
      auVar30 = func_0x00f78af4();
      uVar16 = auVar30._8_8_;
      lVar23 = auVar30._0_8_;
      *(undefined1 **)(puVar9 + -0x40) = puVar9 + -0x10;
      *(undefined **)(puVar9 + -0x38) = &FlatBuffers_FlatBufferBuilder__PutBool;
      lVar12 = *(long *)(lVar23 + 0x18);
      iVar19 = *(int *)(lVar23 + 0x10) + -1;
      *(int *)(lVar23 + 0x10) = iVar19;
      if (lVar12 == 0) {
        auVar30 = func_0x00f78af4();
        uVar15 = auVar30._8_8_;
        lVar12 = auVar30._0_8_;
        *(undefined1 **)(puVar9 + -0x50) = puVar9 + -0x40;
        *(undefined **)(puVar9 + -0x48) = &FlatBuffers_FlatBufferBuilder__PutSbyte;
        iVar19 = *(int *)(lVar12 + 0x10) + -1;
        auVar30._8_4_ = iVar19;
        auVar30._0_8_ = *(long *)(lVar12 + 0x18);
        auVar30._12_4_ = 0;
        *(int *)(lVar12 + 0x10) = iVar19;
        if (*(long *)(lVar12 + 0x18) != 0) {
          puVar11 = puVar9 + -0x40;
          puVar26 = *(undefined1 **)(puVar9 + -0x50);
          puVar27 = *(undefined **)(puVar9 + -0x48);
          uVar16 = uVar14;
          goto code_r0x016cc810;
        }
        auVar30 = func_0x00f78af4();
        uVar16 = auVar30._8_8_;
        lVar23 = auVar30._0_8_;
        *(undefined1 **)(puVar9 + -0x60) = puVar9 + -0x50;
        *(undefined **)(puVar9 + -0x58) = &FlatBuffers_FlatBufferBuilder__PutByte;
        lVar12 = *(long *)(lVar23 + 0x18);
        iVar19 = *(int *)(lVar23 + 0x10) + -1;
        *(int *)(lVar23 + 0x10) = iVar19;
        if (lVar12 == 0) {
          auVar30 = func_0x00f78af4();
          uVar16 = auVar30._8_8_;
          lVar12 = auVar30._0_8_;
          puVar8 = puVar9 + -0x90;
          *(ulong *)(puVar9 + -0x90) = uVar24;
          *(ulong *)(puVar9 + -0x88) = unaff_x21;
          *(ulong *)(puVar9 + -0x80) = uVar22;
          *(ulong *)(puVar9 + -0x78) = uVar14;
          *(undefined1 **)(puVar9 + -0x70) = puVar9 + -0x60;
          *(undefined **)(puVar9 + -0x68) = &FlatBuffers_FlatBufferBuilder__PutShort;
          ppuVar25 = (undefined **)(puVar9 + -0x70);
          lVar23 = *(long *)(lVar12 + 0x18);
          uVar20 = *(int *)(lVar12 + 0x10) - 2;
          auVar7._8_8_ = lVar23;
          auVar7._0_8_ = CONCAT44(0,uVar20);
          auVar30._8_4_ = uVar20;
          auVar30._0_8_ = lVar23;
          auVar30._12_4_ = 0;
          *(uint *)(lVar12 + 0x10) = uVar20;
          if (lVar23 != 0) {
            uVar22 = 2;
            puVar27 = &UNK_016cdc34;
            goto code_r0x016cc7a4;
          }
          auVar30 = func_0x00f78af4();
          uVar16 = auVar30._8_8_;
          lVar12 = auVar30._0_8_;
          puVar8 = puVar9 + -0xc0;
          *(ulong *)(puVar9 + -0xc0) = uVar24;
          *(ulong *)(puVar9 + -0xb8) = CONCAT44(0,uVar20);
          *(undefined8 *)(puVar9 + -0xb0) = 0;
          *(ulong *)(puVar9 + -0xa8) = uVar14;
          *(undefined ***)(puVar9 + -0xa0) = ppuVar25;
          *(undefined **)(puVar9 + -0x98) = &FlatBuffers_FlatBufferBuilder__PutUshort;
          ppuVar25 = (undefined **)(puVar9 + -0xa0);
          lVar23 = *(long *)(lVar12 + 0x18);
          uVar20 = *(int *)(lVar12 + 0x10) - 2;
          auVar7._8_8_ = lVar23;
          auVar7._0_8_ = CONCAT44(0,uVar20);
          auVar30._8_4_ = uVar20;
          auVar30._0_8_ = lVar23;
          auVar30._12_4_ = 0;
          *(uint *)(lVar12 + 0x10) = uVar20;
          if (lVar23 != 0) {
            uVar22 = 2;
            puVar27 = &UNK_016cdc90;
            goto code_r0x016cc7a4;
          }
          auVar30 = func_0x00f78af4();
          uVar16 = auVar30._8_8_;
          lVar12 = auVar30._0_8_;
          puVar8 = puVar9 + -0xf0;
          *(ulong *)(puVar9 + -0xf0) = uVar24;
          *(ulong *)(puVar9 + -0xe8) = CONCAT44(0,uVar20);
          *(undefined8 *)(puVar9 + -0xe0) = 0;
          *(ulong *)(puVar9 + -0xd8) = uVar14;
          *(undefined ***)(puVar9 + -0xd0) = ppuVar25;
          *(undefined **)(puVar9 + -200) = &FlatBuffers_FlatBufferBuilder__PutInt;
          ppuVar25 = (undefined **)(puVar9 + -0xd0);
          lVar23 = *(long *)(lVar12 + 0x18);
          uVar20 = *(int *)(lVar12 + 0x10) - 4;
          auVar7._8_8_ = lVar23;
          auVar7._0_8_ = CONCAT44(0,uVar20);
          auVar30._8_4_ = uVar20;
          auVar30._0_8_ = lVar23;
          auVar30._12_4_ = 0;
          *(uint *)(lVar12 + 0x10) = uVar20;
          if (lVar23 != 0) {
            uVar22 = 4;
            puVar27 = &UNK_016cdcec;
            goto code_r0x016cc7a4;
          }
          auVar30 = func_0x00f78af4();
          uVar16 = auVar30._8_8_;
          lVar12 = auVar30._0_8_;
          puVar8 = puVar9 + -0x120;
          *(ulong *)(puVar9 + -0x120) = uVar24;
          *(ulong *)(puVar9 + -0x118) = CONCAT44(0,uVar20);
          *(undefined8 *)(puVar9 + -0x110) = 0;
          *(ulong *)(puVar9 + -0x108) = uVar14;
          *(undefined ***)(puVar9 + -0x100) = ppuVar25;
          *(undefined **)(puVar9 + -0xf8) = &FlatBuffers_FlatBufferBuilder__PutUint;
          ppuVar25 = (undefined **)(puVar9 + -0x100);
          lVar23 = *(long *)(lVar12 + 0x18);
          uVar20 = *(int *)(lVar12 + 0x10) - 4;
          auVar7._8_8_ = lVar23;
          auVar7._0_8_ = CONCAT44(0,uVar20);
          auVar30._8_4_ = uVar20;
          auVar30._0_8_ = lVar23;
          auVar30._12_4_ = 0;
          *(uint *)(lVar12 + 0x10) = uVar20;
          if (lVar23 != 0) {
            uVar22 = 4;
            puVar27 = &UNK_016cdd48;
            goto code_r0x016cc7a4;
          }
          auVar30 = func_0x00f78af4();
          uVar16 = auVar30._8_8_;
          lVar12 = auVar30._0_8_;
          puVar8 = puVar9 + -0x150;
          *(ulong *)(puVar9 + -0x150) = uVar24;
          *(ulong *)(puVar9 + -0x148) = CONCAT44(0,uVar20);
          *(undefined8 *)(puVar9 + -0x140) = 0;
          *(ulong *)(puVar9 + -0x138) = uVar14;
          *(undefined ***)(puVar9 + -0x130) = ppuVar25;
          *(undefined **)(puVar9 + -0x128) = &FlatBuffers_FlatBufferBuilder__PutLong;
          ppuVar25 = (undefined **)(puVar9 + -0x130);
          lVar23 = *(long *)(lVar12 + 0x18);
          uVar20 = *(int *)(lVar12 + 0x10) - 8;
          auVar7._8_8_ = lVar23;
          auVar7._0_8_ = CONCAT44(0,uVar20);
          auVar30._8_4_ = uVar20;
          auVar30._0_8_ = lVar23;
          auVar30._12_4_ = 0;
          *(uint *)(lVar12 + 0x10) = uVar20;
          if (lVar23 != 0) {
            uVar22 = 8;
            puVar27 = &UNK_016cdda4;
            goto code_r0x016cc7a4;
          }
          auVar30 = func_0x00f78af4();
          uVar16 = auVar30._8_8_;
          lVar12 = auVar30._0_8_;
          puVar8 = puVar9 + -0x180;
          *(ulong *)(puVar9 + -0x180) = uVar24;
          *(ulong *)(puVar9 + -0x178) = CONCAT44(0,uVar20);
          *(undefined8 *)(puVar9 + -0x170) = 0;
          *(ulong *)(puVar9 + -0x168) = uVar14;
          *(undefined ***)(puVar9 + -0x160) = ppuVar25;
          *(undefined **)(puVar9 + -0x158) = &FlatBuffers_FlatBufferBuilder__PutUlong;
          ppuVar25 = (undefined **)(puVar9 + -0x160);
          lVar23 = *(long *)(lVar12 + 0x18);
          uVar20 = *(int *)(lVar12 + 0x10) - 8;
          unaff_x21 = CONCAT44(0,uVar20);
          auVar7._8_8_ = lVar23;
          auVar7._0_8_ = unaff_x21;
          auVar30._8_4_ = uVar20;
          auVar30._0_8_ = lVar23;
          auVar30._12_4_ = 0;
          *(uint *)(lVar12 + 0x10) = uVar20;
          if (lVar23 != 0) {
            uVar22 = 8;
            puVar27 = &UNK_016cde00;
            goto code_r0x016cc7a4;
          }
          lVar12 = func_0x00f78af4();
          *(undefined ***)(puVar9 + -400) = ppuVar25;
          *(undefined **)(puVar9 + -0x188) = &FlatBuffers_FlatBufferBuilder__PutFloat;
          lVar23 = *(long *)(lVar12 + 0x18);
          auVar7._8_8_ = lVar23;
          uVar20 = *(int *)(lVar12 + 0x10) - 4;
          uVar16 = (ulong)uVar20;
          auVar30._8_4_ = uVar20;
          auVar30._0_8_ = lVar23;
          auVar30._12_4_ = 0;
          *(uint *)(lVar12 + 0x10) = uVar20;
          if (lVar23 != 0) {
            puVar8 = puVar9 + -0x1b0;
            *(undefined8 *)(puVar9 + -0x1b0) = unaff_d9;
            *(undefined8 *)(puVar9 + -0x1a8) = unaff_d8;
            *(undefined8 *)(puVar9 + -0x1a0) = 0;
            *(ulong *)(puVar9 + -0x198) = uVar14;
            *(undefined8 *)(puVar9 + -400) = *(undefined8 *)(puVar9 + -400);
            *(undefined8 *)(puVar9 + -0x188) = *(undefined8 *)(puVar9 + -0x188);
            ppuVar25 = (undefined **)(puVar9 + -400);
            uVar22 = 4;
            puVar27 = &UNK_016ccba4;
            goto code_r0x016cc7a4;
          }
          lVar12 = func_0x00f78af4();
          *(undefined1 **)(puVar9 + -0x1a0) = puVar9 + -400;
          *(undefined **)(puVar9 + -0x198) = &FlatBuffers_FlatBufferBuilder__PutDouble;
          lVar23 = *(long *)(lVar12 + 0x18);
          auVar7._8_8_ = lVar23;
          uVar20 = *(int *)(lVar12 + 0x10) - 8;
          uVar16 = (ulong)uVar20;
          auVar30._8_4_ = uVar20;
          auVar30._0_8_ = lVar23;
          auVar30._12_4_ = 0;
          *(uint *)(lVar12 + 0x10) = uVar20;
          if (lVar23 != 0) {
            puVar8 = puVar9 + -0x1c0;
            *(undefined8 *)(puVar9 + -0x1c0) = unaff_d9;
            *(undefined8 *)(puVar9 + -0x1b8) = unaff_d8;
            *(undefined8 *)(puVar9 + -0x1b0) = 0;
            *(ulong *)(puVar9 + -0x1a8) = uVar14;
            *(undefined8 *)(puVar9 + -0x1a0) = *(undefined8 *)(puVar9 + -0x1a0);
            *(undefined8 *)(puVar9 + -0x198) = *(undefined8 *)(puVar9 + -0x198);
            ppuVar25 = (undefined **)(puVar9 + -0x1a0);
            uVar22 = 8;
            puVar27 = &UNK_016ccc34;
            goto code_r0x016cc7a4;
          }
          auVar32 = func_0x00f78af4();
          *(undefined8 *)(puVar9 + -0x1c0) = 0;
          *(ulong *)(puVar9 + -0x1b8) = uVar14;
          *(undefined1 **)(puVar9 + -0x1b0) = puVar9 + -0x1a0;
          *(undefined **)(puVar9 + -0x1a8) = &FlatBuffers_FlatBufferBuilder__AddBool;
          puVar26 = puVar9 + -0x1b0;
          auVar31._8_8_ = 1;
          auVar31._0_8_ = auVar32._0_8_;
          uVar16 = 0;
          puVar27 = &UNK_016cde9c;
          puVar9 = puVar9 + -0x1c0;
          unaff_x22 = uVar24;
          goto code_r0x016cdaac;
        }
        puVar10 = puVar9 + -0x50;
        uVar21 = *(undefined8 *)(puVar9 + -0x60);
        uVar17 = *(undefined8 *)(puVar9 + -0x58);
      }
      else {
        puVar10 = puVar9 + -0x30;
        uVar21 = *(undefined8 *)(puVar9 + -0x40);
        uVar17 = *(undefined8 *)(puVar9 + -0x38);
      }
      auVar7._8_4_ = iVar19;
      auVar7._0_8_ = lVar12;
      auVar7._12_4_ = 0;
      auVar30._8_4_ = iVar19;
      auVar30._0_8_ = lVar12;
      auVar30._12_4_ = 0;
      puVar8 = puVar10 + -0x30;
      *(ulong *)(puVar10 + -0x30) = uVar24;
      *(ulong *)(puVar10 + -0x28) = unaff_x21;
      *(ulong *)(puVar10 + -0x20) = uVar22;
      *(ulong *)(puVar10 + -0x18) = uVar14;
      *(undefined8 *)(puVar10 + -0x10) = uVar21;
      *(undefined8 *)(puVar10 + -8) = uVar17;
      ppuVar25 = (undefined **)(puVar10 + -0x10);
      uVar22 = 1;
      puVar27 = &UNK_016cc89c;
      goto code_r0x016cc7a4;
    }
    uVar2 = *(uint *)(lVar12 + 0x18);
    iVar3 = *(int *)(uVar14 + 0x10);
    uVar1 = iVar3 - (uVar2 + (int)uVar16) & iVar19 - 1U;
    uVar22 = CONCAT44(0,uVar1);
    uVar20 = (int)uVar16 + iVar19 + uVar1;
    uVar24 = (ulong)uVar20;
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
    uVar21 = *(undefined8 *)*(undefined1 (*) [16])(puVar9 + -0x20);
    uVar17 = *(undefined8 *)(puVar9 + -0x18);
    auVar32 = *(undefined1 (*) [16])(puVar9 + -0x20);
    unaff_x22 = *(ulong *)(puVar9 + -0x30);
    unaff_x21 = *(ulong *)(puVar9 + -0x28);
    *(undefined8 *)(puVar9 + -0x10) = *(undefined8 *)(puVar9 + -0x10);
    *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
    lVar12 = *(long *)(uVar14 + 0x18);
    auVar7._8_8_ = lVar12;
    auVar7._0_8_ = uVar22;
    uVar1 = *(int *)(uVar14 + 0x10) - uVar1;
    uVar24 = (ulong)uVar1;
    auVar30._8_4_ = uVar1;
    auVar30._0_8_ = lVar12;
    auVar30._12_4_ = 0;
    *(uint *)(uVar14 + 0x10) = uVar1;
    if (lVar12 != 0) {
      *(ulong *)(puVar9 + -0x30) = unaff_x22;
      *(ulong *)(puVar9 + -0x28) = unaff_x21;
      *(undefined8 *)(puVar9 + -0x20) = uVar21;
      *(undefined8 *)(puVar9 + -0x18) = uVar17;
      *(undefined8 *)(puVar9 + -0x10) = *(undefined8 *)(puVar9 + -0x10);
      *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
      ppuVar25 = (undefined **)(puVar9 + -0x10);
      puVar27 = &UNK_016cc908;
      uVar16 = 0;
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
    auVar31 = func_0x00f78af4();
    puVar9 = puVar9 + -0x20;
  } while( true );
}



// ============================================================
// RVA: 0x1681b78 | Core.Services.ReplicatorEnvelope.AddTime
// ============================================================

/* WARNING: Possible PIC construction at 0x016ce698: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x016ce69c) */
/* WARNING: Removing unreachable block (ram,0x016cde9c) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */
/* WARNING: Type propagation algorithm not settling */

ulong Core_Services_ReplicatorEnvelope__AddTime
                (undefined1 param_1 [16],float param_2,ulong param_3,ulong param_4,
                undefined8 param_5,int param_6)

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
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined4 uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar23;
  undefined1 *puVar24;
  undefined *puVar25;
  float fVar26;
  float fVar27;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar28 [16];
  undefined1 auVar29 [12];
  undefined8 auStack_c0 [2];
  long lStack_a0;
  undefined8 uStack_98;
  
  if (param_3 != 0) {
    uVar17 = 0;
    puVar24 = &stack0xfffffffffffffff0;
    if (((int)param_4 == 0) && (*(char *)(param_3 + 0x48) == '\0')) {
      return param_3;
    }
    uVar21 = 0;
    puVar25 = &UNK_016ce69c;
    puVar7 = &stack0xffffffffffffffd0;
    uVar18 = 4;
    uVar20 = param_3;
    unaff_x21 = param_4;
    goto code_r0x016cdaac;
  }
  uVar17 = func_0x00f78af4();
  if ((bRam0000000003eb59f9 & 1) == 0) {
    func_0x00f78a20(0x3d3f1e8);
    bRam0000000003eb59f9 = 1;
  }
  if (uVar17 != 0) {
    puVar24 = &stack0xffffffffffffffe0;
    if ((bRam0000000003eb5cd8 & 1) == 0) {
      func_0x00f78a20(0x3d1f100,0);
      bRam0000000003eb5cd8 = 1;
    }
    if (*(int *)(uVar17 + 0x30) < 0) {
      func_0x00f78a24(0x3d22a38);
      uVar11 = func_0x00f78aec();
      uVar12 = func_0x00f78a24(0x3d6cea8);
      uVar19 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar11,uVar12);
      uVar12 = func_0x00f78a24(0x3d56a30);
      auVar29 = func_0x00f78ac0(uVar11,uVar12);
      puVar24 = &stack0xffffffffffffff90;
      uStack_98 = CONCAT44(uVar19,(undefined4)uStack_98);
      lVar13 = *(long *)(auVar29._0_8_ + 0x18);
      if ((lVar13 != 0) && (*(long *)(lVar13 + 0x10) != 0)) {
        uVar16 = *(int *)(*(long *)(lVar13 + 0x10) + 0x18) - auVar29._8_4_;
        uVar17 = (ulong)uVar16;
        auVar28._8_4_ = uVar16;
        auVar28._0_8_ = lVar13;
        auVar28._12_4_ = 0;
        puVar6 = &stack0xffffffffffffff20;
        puVar24 = &stack0xffffffffffffff50;
        auVar5._8_8_ = 4;
        auVar5._0_8_ = lVar13;
        uVar23 = 0x3d201a0;
        if ((bRam0000000003eb5cd0 & 1) == 0) {
          func_0x00f78a20(0x3d201a0);
          bRam0000000003eb5cd0 = 1;
        }
        uVar18 = 4;
        puVar25 = &UNK_016cc68c;
code_r0x016cc7a4:
        do {
          puVar9 = puVar6 + -0x20;
          *(long *)(puVar6 + -0x20) = auVar5._8_8_;
          *(ulong *)(puVar6 + -0x18) = uVar17;
          *(undefined1 **)(puVar6 + -0x10) = puVar24;
          *(undefined **)(puVar6 + -8) = puVar25;
          puVar24 = puVar6 + -0x10;
          if (auVar28._8_4_ < 0) {
code_r0x016cc7d8:
            func_0x00f78a24(0x3d1fcf8);
            uVar17 = func_0x00f78aec();
            /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a4d0(uVar17,0);
            uVar11 = func_0x00f78a24(0x3d52ce8);
            func_0x00f78ac0(uVar17,uVar11);
            uVar20 = uVar18;
          }
          else {
            lVar13 = *(long *)(auVar28._0_8_ + 0x10);
            uVar20 = uVar18;
            if (lVar13 != 0) {
              if (auVar28._8_4_ <= *(int *)(lVar13 + 0x18) - (int)uVar18) {
                return auVar28._0_8_;
              }
              goto code_r0x016cc7d8;
            }
          }
          puVar25 = &FlatBuffers_ByteBuffer__PutSbyte;
          auVar28 = func_0x00f78af4();
code_r0x016cc810:
          puVar6 = puVar9 + -0x30;
          *(ulong *)(puVar9 + -0x30) = uVar23;
          *(undefined1 (*) [16])(puVar9 + -0x28) = auVar5;
          *(ulong *)(puVar9 + -0x18) = uVar17;
          *(undefined1 **)(puVar9 + -0x10) = puVar24;
          *(undefined **)(puVar9 + -8) = puVar25;
          puVar24 = puVar9 + -0x10;
          uVar18 = 1;
          puVar25 = &UNK_016cc834;
          uVar17 = uVar20;
          auVar5 = auVar28;
        } while( true );
      }
      func_0x00f78af4();
      uVar11 = /*System.Int32$$ToString*/ func_0x02ae9b8c((undefined1 *)((long)&uStack_98 + 4),0);
      uVar12 = func_0x00f78a24(0x3d6ce88);
      uVar14 = func_0x00f78a24(0x3d66338);
      uVar11 = /*System.String$$Concat*/ func_0x029be39c(uVar12,uVar11,uVar14,0);
      func_0x00f78a24(0x3d22a38);
      uVar12 = func_0x00f78aec();
      auVar4._8_8_ = uVar12;
      auVar4._0_8_ = uVar11;
      uVar14 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar12,uVar11);
      uVar11 = func_0x00f78a24(0x3d56a50);
      puVar25 = &FlatBuffers_FlatBufferBuilder__Finish;
      auVar28 = func_0x00f78ac0(uVar12,uVar11);
      puVar7 = (undefined1 *)&lStack_a0;
      while( true ) {
        auVar5 = auVar28;
        uVar17 = auVar5._0_8_;
        *(long *)(puVar7 + -0x20) = auVar4._8_8_;
        *(long *)(puVar7 + -0x18) = auVar4._0_8_;
        *(undefined1 **)(puVar7 + -0x10) = puVar24;
        *(undefined **)(puVar7 + -8) = puVar25;
        puVar24 = puVar7 + -0x10;
        uVar16 = *(uint *)(uVar17 + 0x20);
        uVar18 = (ulong)uVar16;
        param_3 = uVar17;
        if ((int)uVar14 == 0) {
          param_3 = 0;
          uVar16 = 0;
        }
        uVar20 = auVar5._8_8_;
        if ((int)uVar14 == 0) {
          uVar21 = 4;
          puVar25 = &UNK_016cef64;
          puVar7 = puVar7 + -0x20;
          param_3 = uVar17;
          goto code_r0x016cdaac;
        }
        if (param_3 != 0) break;
        puVar25 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar28 = func_0x00f78af4();
        uVar14 = 0;
        puVar7 = puVar7 + -0x20;
        auVar4 = auVar5;
      }
      uVar21 = 8;
      puVar25 = &UNK_016cef10;
      puVar7 = puVar7 + -0x20;
      uVar18 = (ulong)uVar16;
    }
    else {
      uVar21 = 0;
      puVar25 = &UNK_016cea78;
      puVar7 = &stack0xffffffffffffffa0;
      param_3 = uVar17;
      uVar18 = 4;
      uVar20 = 0x3eb5000;
    }
    goto code_r0x016cdaac;
  }
  lVar13 = func_0x00f78af4();
  if (lVar13 == 0) {
    auVar29 = func_0x00f78af4();
    param_3 = auVar29._0_8_;
    if (param_3 == 0) {
      fVar26 = (float)func_0x00f78af4();
      if (param_2 < 0.0) {
        uVar16 = 0;
      }
      else {
        fVar27 = param_2;
        if (fVar26 <= param_2) {
          fVar27 = fVar26;
        }
        fVar26 = -param_2;
        if (-param_2 <= fVar27) {
          fVar26 = fVar27;
        }
        uVar16 = (uint)((fVar26 + param_2) / ((param_2 + param_2) / 255.0));
      }
      return (ulong)(uVar16 & 0xff);
    }
    puVar24 = &stack0xffffffffffffffb0;
    uVar17 = 8;
    unaff_x21 = 0x20;
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4();
    *(int *)(param_3 + 0x44) = auVar29._8_4_;
    uVar21 = (ulong)(uint)(auVar29._8_4_ * 0x20);
    uVar18 = 4;
    puVar25 = &UNK_016ce188;
    puVar7 = &stack0xffffffffffffff90;
    uVar20 = uVar21;
    unaff_x22 = param_3;
    goto code_r0x016cdaac;
  }
  unaff_x21 = 0;
  lVar22 = 2;
  if ((bRam0000000003eb5cd7 & 1) == 0) {
    func_0x00f78a20(0x3d1f100);
    bRam0000000003eb5cd7 = 1;
  }
  /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar13);
  if (*(long *)(lVar13 + 0x28) != 0) {
    if (*(int *)(*(long *)(lVar13 + 0x28) + 0x18) < 2) {
      uVar11 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,2);
      *(undefined8 *)(lVar13 + 0x28) = uVar11;
    }
    *(undefined4 *)(lVar13 + 0x30) = 2;
    uVar17 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar13);
    *(int *)(lVar13 + 0x34) = (int)uVar17;
    return uVar17;
  }
  auVar28 = func_0x00f78af4();
  uVar11 = auVar28._8_8_;
  uVar16 = auVar28._8_4_;
  if ((int)uVar16 < *(int *)(auVar28._0_8_ + 0x30)) {
    lVar22 = *(long *)(auVar28._0_8_ + 0x28);
    uVar17 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
    if (lVar22 == 0) goto code_r0x016ce410;
    if (uVar16 < *(uint *)(lVar22 + 0x18)) {
      *(int *)(lVar22 + (long)(int)uVar16 * 4 + 0x20) = (int)uVar17;
      return uVar17;
    }
  }
  else {
    func_0x00f78a24(0x3d22738);
    uVar11 = func_0x00f78aec();
    uVar12 = func_0x00f78a24(0x3d6ceb8);
    unaff_x21 = 0;
    /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar11,uVar12);
    uVar12 = func_0x00f78a24(0x3d56a58);
    func_0x00f78ac0(uVar11,uVar12);
code_r0x016ce410:
    func_0x00f78af4();
  }
  uVar12 = func_0x00f78b24();
  auVar28 = func_0x00f78ac0(uVar12,0);
  uVar17 = auVar28._8_8_;
  param_3 = auVar28._0_8_;
  puVar24 = &stack0xffffffffffffff70;
  if (((int)unaff_x21 == param_6) && (*(char *)(param_3 + 0x48) == '\0')) {
    return param_3;
  }
  uVar21 = 0;
  puVar25 = &UNK_016ce46c;
  puVar7 = &stack0xffffffffffffff50;
  uVar18 = 1;
  uVar20 = param_3;
  lStack_a0 = lVar22;
  uStack_98 = uVar11;
code_r0x016cdaac:
  do {
    puVar6 = puVar7 + -0x30;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(ulong *)(puVar7 + -0x28) = unaff_x21;
    *(ulong *)(puVar7 + -0x20) = uVar20;
    *(ulong *)(puVar7 + -0x18) = uVar17;
    *(undefined1 **)(puVar7 + -0x10) = puVar24;
    *(undefined **)(puVar7 + -8) = puVar25;
    iVar15 = (int)uVar18;
    if (*(int *)(param_3 + 0x20) < iVar15) {
      *(int *)(param_3 + 0x20) = iVar15;
    }
    uVar18 = uVar20;
    uVar23 = unaff_x22;
    if ((*(long *)(param_3 + 0x18) == 0) ||
       (lVar13 = *(long *)(*(long *)(param_3 + 0x18) + 0x10), lVar13 == 0)) {
code_r0x016cdb68:
      auVar5._8_8_ = uVar18;
      auVar5._0_8_ = unaff_x21;
      auVar28 = func_0x00f78af4();
      uVar17 = auVar28._8_8_;
      lVar22 = auVar28._0_8_;
      *(undefined1 **)(puVar7 + -0x40) = puVar7 + -0x10;
      *(undefined **)(puVar7 + -0x38) = &FlatBuffers_FlatBufferBuilder__PutBool;
      lVar13 = *(long *)(lVar22 + 0x18);
      iVar15 = *(int *)(lVar22 + 0x10) + -1;
      *(int *)(lVar22 + 0x10) = iVar15;
      if (lVar13 == 0) {
        auVar28 = func_0x00f78af4();
        uVar20 = auVar28._8_8_;
        lVar13 = auVar28._0_8_;
        *(undefined1 **)(puVar7 + -0x50) = puVar7 + -0x40;
        *(undefined **)(puVar7 + -0x48) = &FlatBuffers_FlatBufferBuilder__PutSbyte;
        iVar15 = *(int *)(lVar13 + 0x10) + -1;
        auVar28._8_4_ = iVar15;
        auVar28._0_8_ = *(long *)(lVar13 + 0x18);
        auVar28._12_4_ = 0;
        *(int *)(lVar13 + 0x10) = iVar15;
        if (*(long *)(lVar13 + 0x18) != 0) {
          puVar9 = puVar7 + -0x40;
          puVar24 = *(undefined1 **)(puVar7 + -0x50);
          puVar25 = *(undefined **)(puVar7 + -0x48);
          uVar17 = param_3;
          goto code_r0x016cc810;
        }
        auVar28 = func_0x00f78af4();
        uVar17 = auVar28._8_8_;
        lVar22 = auVar28._0_8_;
        *(undefined1 **)(puVar7 + -0x60) = puVar7 + -0x50;
        *(undefined **)(puVar7 + -0x58) = &FlatBuffers_FlatBufferBuilder__PutByte;
        lVar13 = *(long *)(lVar22 + 0x18);
        iVar15 = *(int *)(lVar22 + 0x10) + -1;
        *(int *)(lVar22 + 0x10) = iVar15;
        if (lVar13 == 0) {
          auVar28 = func_0x00f78af4();
          uVar17 = auVar28._8_8_;
          lVar13 = auVar28._0_8_;
          puVar6 = puVar7 + -0x90;
          *(ulong *)(puVar7 + -0x90) = uVar23;
          *(ulong *)(puVar7 + -0x88) = unaff_x21;
          *(ulong *)(puVar7 + -0x80) = uVar18;
          *(ulong *)(puVar7 + -0x78) = param_3;
          *(undefined1 **)(puVar7 + -0x70) = puVar7 + -0x60;
          *(undefined **)(puVar7 + -0x68) = &FlatBuffers_FlatBufferBuilder__PutShort;
          puVar24 = puVar7 + -0x70;
          lVar22 = *(long *)(lVar13 + 0x18);
          uVar16 = *(int *)(lVar13 + 0x10) - 2;
          auVar5._8_8_ = lVar22;
          auVar5._0_8_ = CONCAT44(0,uVar16);
          auVar28._8_4_ = uVar16;
          auVar28._0_8_ = lVar22;
          auVar28._12_4_ = 0;
          *(uint *)(lVar13 + 0x10) = uVar16;
          if (lVar22 != 0) {
            uVar18 = 2;
            puVar25 = &UNK_016cdc34;
            goto code_r0x016cc7a4;
          }
          auVar28 = func_0x00f78af4();
          uVar17 = auVar28._8_8_;
          lVar13 = auVar28._0_8_;
          puVar6 = puVar7 + -0xc0;
          *(ulong *)(puVar7 + -0xc0) = uVar23;
          *(ulong *)(puVar7 + -0xb8) = CONCAT44(0,uVar16);
          *(undefined8 *)(puVar7 + -0xb0) = 0;
          *(ulong *)(puVar7 + -0xa8) = param_3;
          *(undefined1 **)(puVar7 + -0xa0) = puVar24;
          *(undefined **)(puVar7 + -0x98) = &FlatBuffers_FlatBufferBuilder__PutUshort;
          puVar24 = puVar7 + -0xa0;
          lVar22 = *(long *)(lVar13 + 0x18);
          uVar16 = *(int *)(lVar13 + 0x10) - 2;
          auVar5._8_8_ = lVar22;
          auVar5._0_8_ = CONCAT44(0,uVar16);
          auVar28._8_4_ = uVar16;
          auVar28._0_8_ = lVar22;
          auVar28._12_4_ = 0;
          *(uint *)(lVar13 + 0x10) = uVar16;
          if (lVar22 != 0) {
            uVar18 = 2;
            puVar25 = &UNK_016cdc90;
            goto code_r0x016cc7a4;
          }
          auVar28 = func_0x00f78af4();
          uVar17 = auVar28._8_8_;
          lVar13 = auVar28._0_8_;
          puVar6 = puVar7 + -0xf0;
          *(ulong *)(puVar7 + -0xf0) = uVar23;
          *(ulong *)(puVar7 + -0xe8) = CONCAT44(0,uVar16);
          *(undefined8 *)(puVar7 + -0xe0) = 0;
          *(ulong *)(puVar7 + -0xd8) = param_3;
          *(undefined1 **)(puVar7 + -0xd0) = puVar24;
          *(undefined **)(puVar7 + -200) = &FlatBuffers_FlatBufferBuilder__PutInt;
          puVar24 = puVar7 + -0xd0;
          lVar22 = *(long *)(lVar13 + 0x18);
          uVar16 = *(int *)(lVar13 + 0x10) - 4;
          auVar5._8_8_ = lVar22;
          auVar5._0_8_ = CONCAT44(0,uVar16);
          auVar28._8_4_ = uVar16;
          auVar28._0_8_ = lVar22;
          auVar28._12_4_ = 0;
          *(uint *)(lVar13 + 0x10) = uVar16;
          if (lVar22 != 0) {
            uVar18 = 4;
            puVar25 = &UNK_016cdcec;
            goto code_r0x016cc7a4;
          }
          auVar28 = func_0x00f78af4();
          uVar17 = auVar28._8_8_;
          lVar13 = auVar28._0_8_;
          puVar6 = puVar7 + -0x120;
          *(ulong *)(puVar7 + -0x120) = uVar23;
          *(ulong *)(puVar7 + -0x118) = CONCAT44(0,uVar16);
          *(undefined8 *)(puVar7 + -0x110) = 0;
          *(ulong *)(puVar7 + -0x108) = param_3;
          *(undefined1 **)(puVar7 + -0x100) = puVar24;
          *(undefined **)(puVar7 + -0xf8) = &FlatBuffers_FlatBufferBuilder__PutUint;
          puVar24 = puVar7 + -0x100;
          lVar22 = *(long *)(lVar13 + 0x18);
          uVar16 = *(int *)(lVar13 + 0x10) - 4;
          auVar5._8_8_ = lVar22;
          auVar5._0_8_ = CONCAT44(0,uVar16);
          auVar28._8_4_ = uVar16;
          auVar28._0_8_ = lVar22;
          auVar28._12_4_ = 0;
          *(uint *)(lVar13 + 0x10) = uVar16;
          if (lVar22 != 0) {
            uVar18 = 4;
            puVar25 = &UNK_016cdd48;
            goto code_r0x016cc7a4;
          }
          auVar28 = func_0x00f78af4();
          uVar17 = auVar28._8_8_;
          lVar13 = auVar28._0_8_;
          puVar6 = puVar7 + -0x150;
          *(ulong *)(puVar7 + -0x150) = uVar23;
          *(ulong *)(puVar7 + -0x148) = CONCAT44(0,uVar16);
          *(undefined8 *)(puVar7 + -0x140) = 0;
          *(ulong *)(puVar7 + -0x138) = param_3;
          *(undefined1 **)(puVar7 + -0x130) = puVar24;
          *(undefined **)(puVar7 + -0x128) = &FlatBuffers_FlatBufferBuilder__PutLong;
          puVar24 = puVar7 + -0x130;
          lVar22 = *(long *)(lVar13 + 0x18);
          uVar16 = *(int *)(lVar13 + 0x10) - 8;
          auVar5._8_8_ = lVar22;
          auVar5._0_8_ = CONCAT44(0,uVar16);
          auVar28._8_4_ = uVar16;
          auVar28._0_8_ = lVar22;
          auVar28._12_4_ = 0;
          *(uint *)(lVar13 + 0x10) = uVar16;
          if (lVar22 != 0) {
            uVar18 = 8;
            puVar25 = &UNK_016cdda4;
            goto code_r0x016cc7a4;
          }
          auVar28 = func_0x00f78af4();
          uVar17 = auVar28._8_8_;
          lVar13 = auVar28._0_8_;
          puVar6 = puVar7 + -0x180;
          *(ulong *)(puVar7 + -0x180) = uVar23;
          *(ulong *)(puVar7 + -0x178) = CONCAT44(0,uVar16);
          *(undefined8 *)(puVar7 + -0x170) = 0;
          *(ulong *)(puVar7 + -0x168) = param_3;
          *(undefined1 **)(puVar7 + -0x160) = puVar24;
          *(undefined **)(puVar7 + -0x158) = &FlatBuffers_FlatBufferBuilder__PutUlong;
          puVar24 = puVar7 + -0x160;
          lVar22 = *(long *)(lVar13 + 0x18);
          uVar16 = *(int *)(lVar13 + 0x10) - 8;
          unaff_x21 = CONCAT44(0,uVar16);
          auVar5._8_8_ = lVar22;
          auVar5._0_8_ = unaff_x21;
          auVar28._8_4_ = uVar16;
          auVar28._0_8_ = lVar22;
          auVar28._12_4_ = 0;
          *(uint *)(lVar13 + 0x10) = uVar16;
          if (lVar22 != 0) {
            uVar18 = 8;
            puVar25 = &UNK_016cde00;
            goto code_r0x016cc7a4;
          }
          lVar13 = func_0x00f78af4();
          *(undefined1 **)(puVar7 + -400) = puVar24;
          *(undefined **)(puVar7 + -0x188) = &FlatBuffers_FlatBufferBuilder__PutFloat;
          lVar22 = *(long *)(lVar13 + 0x18);
          auVar5._8_8_ = lVar22;
          uVar16 = *(int *)(lVar13 + 0x10) - 4;
          uVar17 = (ulong)uVar16;
          auVar28._8_4_ = uVar16;
          auVar28._0_8_ = lVar22;
          auVar28._12_4_ = 0;
          *(uint *)(lVar13 + 0x10) = uVar16;
          if (lVar22 != 0) {
            puVar6 = puVar7 + -0x1b0;
            *(undefined8 *)(puVar7 + -0x1b0) = unaff_d9;
            *(undefined8 *)(puVar7 + -0x1a8) = unaff_d8;
            *(undefined8 *)(puVar7 + -0x1a0) = 0;
            *(ulong *)(puVar7 + -0x198) = param_3;
            *(undefined8 *)(puVar7 + -400) = *(undefined8 *)(puVar7 + -400);
            *(undefined8 *)(puVar7 + -0x188) = *(undefined8 *)(puVar7 + -0x188);
            puVar24 = puVar7 + -400;
            uVar18 = 4;
            puVar25 = &UNK_016ccba4;
            goto code_r0x016cc7a4;
          }
          lVar13 = func_0x00f78af4();
          *(undefined1 **)(puVar7 + -0x1a0) = puVar7 + -400;
          *(undefined **)(puVar7 + -0x198) = &FlatBuffers_FlatBufferBuilder__PutDouble;
          lVar22 = *(long *)(lVar13 + 0x18);
          auVar5._8_8_ = lVar22;
          uVar16 = *(int *)(lVar13 + 0x10) - 8;
          uVar17 = (ulong)uVar16;
          auVar28._8_4_ = uVar16;
          auVar28._0_8_ = lVar22;
          auVar28._12_4_ = 0;
          *(uint *)(lVar13 + 0x10) = uVar16;
          if (lVar22 != 0) {
            puVar6 = puVar7 + -0x1c0;
            *(undefined8 *)(puVar7 + -0x1c0) = unaff_d9;
            *(undefined8 *)(puVar7 + -0x1b8) = unaff_d8;
            *(undefined8 *)(puVar7 + -0x1b0) = 0;
            *(ulong *)(puVar7 + -0x1a8) = param_3;
            *(undefined8 *)(puVar7 + -0x1a0) = *(undefined8 *)(puVar7 + -0x1a0);
            *(undefined8 *)(puVar7 + -0x198) = *(undefined8 *)(puVar7 + -0x198);
            puVar24 = puVar7 + -0x1a0;
            uVar18 = 8;
            puVar25 = &UNK_016ccc34;
            goto code_r0x016cc7a4;
          }
          auVar28 = func_0x00f78af4();
          uVar17 = auVar28._8_8_;
          uVar20 = auVar28._0_8_;
          *(undefined8 *)(puVar7 + -0x1c0) = 0;
          *(ulong *)(puVar7 + -0x1b8) = param_3;
          *(undefined1 **)(puVar7 + -0x1b0) = puVar7 + -0x1a0;
          *(undefined **)(puVar7 + -0x1a8) = &FlatBuffers_FlatBufferBuilder__AddBool;
          puVar24 = puVar7 + -0x1b0;
          uVar18 = 1;
          uVar21 = 0;
          puVar25 = &UNK_016cde9c;
          puVar7 = puVar7 + -0x1c0;
          param_3 = uVar20;
          unaff_x22 = uVar23;
          goto code_r0x016cdaac;
        }
        puVar8 = puVar7 + -0x50;
        uVar11 = *(undefined8 *)(puVar7 + -0x60);
        uVar12 = *(undefined8 *)(puVar7 + -0x58);
      }
      else {
        puVar8 = puVar7 + -0x30;
        uVar11 = *(undefined8 *)(puVar7 + -0x40);
        uVar12 = *(undefined8 *)(puVar7 + -0x38);
      }
      auVar5._8_4_ = iVar15;
      auVar5._0_8_ = lVar13;
      auVar5._12_4_ = 0;
      auVar28._8_4_ = iVar15;
      auVar28._0_8_ = lVar13;
      auVar28._12_4_ = 0;
      puVar6 = puVar8 + -0x30;
      *(ulong *)(puVar8 + -0x30) = uVar23;
      *(ulong *)(puVar8 + -0x28) = unaff_x21;
      *(ulong *)(puVar8 + -0x20) = uVar18;
      *(ulong *)(puVar8 + -0x18) = param_3;
      *(undefined8 *)(puVar8 + -0x10) = uVar11;
      *(undefined8 *)(puVar8 + -8) = uVar12;
      puVar24 = puVar8 + -0x10;
      uVar18 = 1;
      puVar25 = &UNK_016cc89c;
      goto code_r0x016cc7a4;
    }
    uVar2 = *(uint *)(lVar13 + 0x18);
    iVar3 = *(int *)(param_3 + 0x10);
    uVar1 = iVar3 - (uVar2 + (int)uVar21) & iVar15 - 1U;
    uVar18 = CONCAT44(0,uVar1);
    uVar16 = (int)uVar21 + iVar15 + uVar1;
    uVar23 = (ulong)uVar16;
    uVar17 = param_3;
    while (unaff_x21 = (ulong)uVar2, iVar3 < (int)uVar16) {
      uVar17 = /*FlatBuffers.FlatBufferBuilder$$GrowBuffer*/ func_0x016cda78(param_3);
      if ((*(long *)(param_3 + 0x18) == 0) ||
         (lVar13 = *(long *)(*(long *)(param_3 + 0x18) + 0x10), lVar13 == 0)) goto code_r0x016cdb68;
      iVar3 = *(int *)(param_3 + 0x10) - uVar2;
      uVar2 = *(uint *)(lVar13 + 0x18);
      iVar3 = iVar3 + uVar2;
      *(int *)(param_3 + 0x10) = iVar3;
    }
    if ((int)uVar1 < 1) {
      return uVar17;
    }
    uVar20 = *(ulong *)(puVar7 + -0x20);
    uVar17 = *(ulong *)(puVar7 + -0x18);
    unaff_x22 = *(ulong *)(puVar7 + -0x30);
    unaff_x21 = *(ulong *)(puVar7 + -0x28);
    *(undefined8 *)(puVar7 + -0x10) = *(undefined8 *)(puVar7 + -0x10);
    *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
    lVar13 = *(long *)(param_3 + 0x18);
    auVar5._8_8_ = lVar13;
    auVar5._0_8_ = uVar18;
    uVar1 = *(int *)(param_3 + 0x10) - uVar1;
    uVar23 = (ulong)uVar1;
    auVar28._8_4_ = uVar1;
    auVar28._0_8_ = lVar13;
    auVar28._12_4_ = 0;
    *(uint *)(param_3 + 0x10) = uVar1;
    if (lVar13 != 0) {
      *(ulong *)(puVar7 + -0x30) = unaff_x22;
      *(ulong *)(puVar7 + -0x28) = unaff_x21;
      *(ulong *)(puVar7 + -0x20) = uVar20;
      *(ulong *)(puVar7 + -0x18) = uVar17;
      *(undefined8 *)(puVar7 + -0x10) = *(undefined8 *)(puVar7 + -0x10);
      *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
      puVar24 = puVar7 + -0x10;
      puVar25 = &UNK_016cc908;
      uVar17 = 0;
      goto code_r0x016cc7a4;
    }
    lVar13 = func_0x00f78af4();
    puVar24 = puVar7 + -0x20;
    *(undefined1 **)(puVar7 + -0x20) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x18) = &FlatBuffers_FlatBufferBuilder__GrowBuffer;
    if ((*(long *)(lVar13 + 0x18) != 0) &&
       (plVar10 = *(long **)(*(long *)(lVar13 + 0x18) + 0x10), plVar10 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016cdaa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar17 = (**(code **)(*plVar10 + 0x178))
                         (plVar10,(int)plVar10[3] << 1,*(undefined8 *)(*plVar10 + 0x180));
      return uVar17;
    }
    puVar25 = &FlatBuffers_FlatBufferBuilder__Prep;
    auVar28 = func_0x00f78af4();
    uVar18 = auVar28._8_8_;
    param_3 = auVar28._0_8_;
    puVar7 = puVar7 + -0x20;
  } while( true );
}



// ============================================================
// RVA: 0x1681b9c | Core.Services.ReplicatorEnvelope.EndReplicatorEnvelope
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

ulong Core_Services_ReplicatorEnvelope__EndReplicatorEnvelope
                (undefined1 param_1 [16],float param_2,long param_3,undefined8 param_4,
                undefined8 param_5,int param_6)

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
  float fVar26;
  float fVar27;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [12];
  ulong auStack_b0 [2];
  long lStack_90;
  undefined8 uStack_88;
  
  auVar29._8_8_ = param_3;
  auVar29._0_8_ = param_3;
  if ((bRam0000000003eb59f9 & 1) == 0) {
    func_0x00f78a20(0x3d3f1e8);
    bRam0000000003eb59f9 = 1;
  }
  if (param_3 != 0) {
    puVar24 = &stack0xfffffffffffffff0;
    if ((bRam0000000003eb5cd8 & 1) == 0) {
      func_0x00f78a20(0x3d1f100,0);
      bRam0000000003eb5cd8 = 1;
    }
    if (*(int *)(param_3 + 0x30) < 0) {
      func_0x00f78a24(0x3d22a38);
      uVar12 = func_0x00f78aec();
      uVar13 = func_0x00f78a24(0x3d6cea8);
      uVar20 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar12,uVar13);
      uVar13 = func_0x00f78a24(0x3d56a30);
      auVar30 = func_0x00f78ac0(uVar12,uVar13);
      puVar24 = &stack0xffffffffffffffa0;
      uStack_88 = CONCAT44(uVar20,(undefined4)uStack_88);
      lVar14 = *(long *)(auVar30._0_8_ + 0x18);
      if ((lVar14 != 0) && (*(long *)(lVar14 + 0x10) != 0)) {
        uVar18 = *(int *)(*(long *)(lVar14 + 0x10) + 0x18) - auVar30._8_4_;
        uVar23 = (ulong)uVar18;
        auVar28._8_4_ = uVar18;
        auVar28._0_8_ = lVar14;
        auVar28._12_4_ = 0;
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
          if (auVar28._8_4_ < 0) {
code_r0x016cc7d8:
            func_0x00f78a24(0x3d1fcf8);
            uVar23 = func_0x00f78aec();
            /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a4d0(uVar23,0);
            uVar12 = func_0x00f78a24(0x3d52ce8);
            func_0x00f78ac0(uVar23,uVar12);
            uVar21 = uVar19;
          }
          else {
            lVar14 = *(long *)(auVar28._0_8_ + 0x10);
            uVar21 = uVar19;
            if (lVar14 != 0) {
              if (auVar28._8_4_ <= *(int *)(lVar14 + 0x18) - (int)uVar19) {
                return auVar28._0_8_;
              }
              goto code_r0x016cc7d8;
            }
          }
          puVar25 = &FlatBuffers_ByteBuffer__PutSbyte;
          auVar28 = func_0x00f78af4();
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
          auVar5 = auVar28;
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
      auVar29 = func_0x00f78ac0(uVar16,uVar12);
      puVar7 = (undefined1 *)&lStack_90;
      while( true ) {
        uVar23 = auVar29._8_8_;
        lVar22 = auVar29._0_8_;
        auVar29._8_8_ = lVar22;
        auVar29._0_8_ = lVar22;
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
        auVar29 = func_0x00f78af4();
        uVar13 = 0;
        puVar7 = puVar7 + -0x20;
        lVar14 = lVar22;
        uVar16 = uVar23;
      }
      uVar21 = 8;
      puVar25 = &UNK_016cef10;
      puVar7 = puVar7 + -0x20;
      uVar19 = (ulong)uVar18;
      auVar29 = auVar4;
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
    auVar30 = func_0x00f78af4();
    unaff_x22 = auVar30._0_8_;
    if (unaff_x22 == 0) {
      fVar26 = (float)func_0x00f78af4();
      if (param_2 < 0.0) {
        uVar18 = 0;
      }
      else {
        fVar27 = param_2;
        if (fVar26 <= param_2) {
          fVar27 = fVar26;
        }
        fVar26 = -param_2;
        if (-param_2 <= fVar27) {
          fVar26 = fVar27;
        }
        uVar18 = (uint)((fVar26 + param_2) / ((param_2 + param_2) / 255.0));
      }
      return (ulong)(uVar18 & 0xff);
    }
    puVar24 = &stack0xffffffffffffffc0;
    auVar29._8_8_ = 8;
    auVar29._0_8_ = unaff_x22;
    unaff_x21 = 0x20;
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4();
    *(int *)(unaff_x22 + 0x44) = auVar30._8_4_;
    uVar21 = (ulong)(uint)(auVar30._8_4_ * 0x20);
    uVar19 = 4;
    puVar25 = &UNK_016ce188;
    puVar7 = &stack0xffffffffffffffa0;
    uVar23 = uVar21;
    goto code_r0x016cdaac;
  }
  unaff_x21 = 0;
  lVar22 = 2;
  if ((bRam0000000003eb5cd7 & 1) == 0) {
    func_0x00f78a20(0x3d1f100);
    bRam0000000003eb5cd7 = 1;
  }
  /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar14);
  if (*(long *)(lVar14 + 0x28) != 0) {
    if (*(int *)(*(long *)(lVar14 + 0x28) + 0x18) < 2) {
      uVar12 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,2);
      *(undefined8 *)(lVar14 + 0x28) = uVar12;
    }
    *(undefined4 *)(lVar14 + 0x30) = 2;
    uVar16 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar14);
    *(int *)(lVar14 + 0x34) = (int)uVar16;
    return uVar16;
  }
  auVar29 = func_0x00f78af4();
  uVar12 = auVar29._8_8_;
  uVar18 = auVar29._8_4_;
  if ((int)uVar18 < *(int *)(auVar29._0_8_ + 0x30)) {
    lVar22 = *(long *)(auVar29._0_8_ + 0x28);
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
  auVar29 = func_0x00f78ac0(uVar13,0);
  uVar23 = auVar29._0_8_;
  lStack_90 = lVar22;
  uStack_88 = uVar12;
  puVar24 = &stack0xffffffffffffff80;
  if (((int)unaff_x21 == param_6) && (*(char *)(uVar23 + 0x48) == '\0')) {
    return uVar23;
  }
  uVar19 = 1;
  uVar21 = 0;
  puVar25 = &UNK_016ce46c;
  puVar7 = &stack0xffffffffffffff60;
code_r0x016cdaac:
  do {
    uVar11 = auVar29._0_8_;
    puVar6 = puVar7 + -0x30;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(ulong *)(puVar7 + -0x28) = unaff_x21;
    *(ulong *)(puVar7 + -0x20) = uVar23;
    *(long *)(puVar7 + -0x18) = auVar29._8_8_;
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
      auVar29 = func_0x00f78af4();
      uVar23 = auVar29._8_8_;
      lVar22 = auVar29._0_8_;
      *(undefined1 **)(puVar7 + -0x40) = puVar7 + -0x10;
      *(undefined **)(puVar7 + -0x38) = &FlatBuffers_FlatBufferBuilder__PutBool;
      lVar14 = *(long *)(lVar22 + 0x18);
      iVar17 = *(int *)(lVar22 + 0x10) + -1;
      *(int *)(lVar22 + 0x10) = iVar17;
      if (lVar14 == 0) {
        auVar29 = func_0x00f78af4();
        uVar21 = auVar29._8_8_;
        lVar14 = auVar29._0_8_;
        *(undefined1 **)(puVar7 + -0x50) = puVar7 + -0x40;
        *(undefined **)(puVar7 + -0x48) = &FlatBuffers_FlatBufferBuilder__PutSbyte;
        iVar17 = *(int *)(lVar14 + 0x10) + -1;
        auVar28._8_4_ = iVar17;
        auVar28._0_8_ = *(long *)(lVar14 + 0x18);
        auVar28._12_4_ = 0;
        *(int *)(lVar14 + 0x10) = iVar17;
        if (*(long *)(lVar14 + 0x18) != 0) {
          puVar9 = puVar7 + -0x40;
          puVar24 = *(undefined1 **)(puVar7 + -0x50);
          puVar25 = *(undefined **)(puVar7 + -0x48);
          uVar23 = uVar11;
          goto code_r0x016cc810;
        }
        auVar29 = func_0x00f78af4();
        uVar23 = auVar29._8_8_;
        lVar22 = auVar29._0_8_;
        *(undefined1 **)(puVar7 + -0x60) = puVar7 + -0x50;
        *(undefined **)(puVar7 + -0x58) = &FlatBuffers_FlatBufferBuilder__PutByte;
        lVar14 = *(long *)(lVar22 + 0x18);
        iVar17 = *(int *)(lVar22 + 0x10) + -1;
        *(int *)(lVar22 + 0x10) = iVar17;
        if (lVar14 == 0) {
          auVar29 = func_0x00f78af4();
          uVar23 = auVar29._8_8_;
          lVar14 = auVar29._0_8_;
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
          auVar28._8_4_ = uVar18;
          auVar28._0_8_ = lVar22;
          auVar28._12_4_ = 0;
          *(uint *)(lVar14 + 0x10) = uVar18;
          if (lVar22 != 0) {
            uVar19 = 2;
            puVar25 = &UNK_016cdc34;
            goto code_r0x016cc7a4;
          }
          auVar29 = func_0x00f78af4();
          uVar23 = auVar29._8_8_;
          lVar14 = auVar29._0_8_;
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
          auVar28._8_4_ = uVar18;
          auVar28._0_8_ = lVar22;
          auVar28._12_4_ = 0;
          *(uint *)(lVar14 + 0x10) = uVar18;
          if (lVar22 != 0) {
            uVar19 = 2;
            puVar25 = &UNK_016cdc90;
            goto code_r0x016cc7a4;
          }
          auVar29 = func_0x00f78af4();
          uVar23 = auVar29._8_8_;
          lVar14 = auVar29._0_8_;
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
          auVar28._8_4_ = uVar18;
          auVar28._0_8_ = lVar22;
          auVar28._12_4_ = 0;
          *(uint *)(lVar14 + 0x10) = uVar18;
          if (lVar22 != 0) {
            uVar19 = 4;
            puVar25 = &UNK_016cdcec;
            goto code_r0x016cc7a4;
          }
          auVar29 = func_0x00f78af4();
          uVar23 = auVar29._8_8_;
          lVar14 = auVar29._0_8_;
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
          auVar28._8_4_ = uVar18;
          auVar28._0_8_ = lVar22;
          auVar28._12_4_ = 0;
          *(uint *)(lVar14 + 0x10) = uVar18;
          if (lVar22 != 0) {
            uVar19 = 4;
            puVar25 = &UNK_016cdd48;
            goto code_r0x016cc7a4;
          }
          auVar29 = func_0x00f78af4();
          uVar23 = auVar29._8_8_;
          lVar14 = auVar29._0_8_;
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
          auVar28._8_4_ = uVar18;
          auVar28._0_8_ = lVar22;
          auVar28._12_4_ = 0;
          *(uint *)(lVar14 + 0x10) = uVar18;
          if (lVar22 != 0) {
            uVar19 = 8;
            puVar25 = &UNK_016cdda4;
            goto code_r0x016cc7a4;
          }
          auVar29 = func_0x00f78af4();
          uVar23 = auVar29._8_8_;
          lVar14 = auVar29._0_8_;
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
          auVar28._8_4_ = uVar18;
          auVar28._0_8_ = lVar22;
          auVar28._12_4_ = 0;
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
          auVar28._8_4_ = uVar18;
          auVar28._0_8_ = lVar22;
          auVar28._12_4_ = 0;
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
          auVar28._8_4_ = uVar18;
          auVar28._0_8_ = lVar22;
          auVar28._12_4_ = 0;
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
          auVar29 = func_0x00f78af4();
          uVar23 = auVar29._0_8_;
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
      auVar28._8_4_ = iVar17;
      auVar28._0_8_ = lVar14;
      auVar28._12_4_ = 0;
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
    auVar28._8_4_ = uVar1;
    auVar28._0_8_ = lVar14;
    auVar28._12_4_ = 0;
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
    auVar28 = func_0x00f78af4();
    uVar19 = auVar28._8_8_;
    auVar29._8_8_ = uVar12;
    auVar29._0_8_ = auVar28._0_8_;
    puVar7 = puVar7 + -0x20;
  } while( true );
}



// ============================================================
// RVA: 0x1681be8 | Core.Services.ReplicatorEnvelope.StartReplicatorEnvelope
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

ulong Core_Services_ReplicatorEnvelope__StartReplicatorEnvelope
                (undefined1 param_1 [16],float param_2,long param_3,undefined8 param_4,
                undefined8 param_5,int param_6)

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
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ulong unaff_x22;
  ulong uVar21;
  undefined1 *puVar22;
  undefined1 **ppuVar23;
  undefined *puVar24;
  float fVar25;
  float fVar26;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [12];
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  if (param_3 == 0) {
    auVar30 = func_0x00f78af4();
    unaff_x22 = auVar30._0_8_;
    if (unaff_x22 == 0) {
      fVar25 = (float)func_0x00f78af4();
      if (param_2 < 0.0) {
        uVar17 = 0;
      }
      else {
        fVar26 = param_2;
        if (fVar25 <= param_2) {
          fVar26 = fVar25;
        }
        fVar25 = -param_2;
        if (-param_2 <= fVar26) {
          fVar25 = fVar26;
        }
        uVar17 = (uint)((fVar25 + param_2) / ((param_2 + param_2) / 255.0));
      }
      return (ulong)(uVar17 & 0xff);
    }
    ppuVar23 = (undefined1 **)&stack0xffffffffffffffe0;
    uVar16 = 0x20;
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4();
    *(int *)(unaff_x22 + 0x44) = auVar30._8_4_;
    uVar13 = CONCAT44(0,auVar30._8_4_ * 0x20);
    auVar29._8_8_ = 8;
    auVar29._0_8_ = uVar13;
    auVar28._8_8_ = 4;
    auVar28._0_8_ = unaff_x22;
    puVar24 = &UNK_016ce188;
    puVar6 = &stack0xffffffffffffffc0;
    goto code_r0x016cdaac;
  }
  uVar16 = 0;
  if ((bRam0000000003eb5cd7 & 1) == 0) {
    func_0x00f78a20(0x3d1f100);
    bRam0000000003eb5cd7 = 1;
  }
  /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(param_3);
  if (*(long *)(param_3 + 0x28) != 0) {
    if (*(int *)(*(long *)(param_3 + 0x28) + 0x18) < 2) {
      uVar12 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,2);
      *(undefined8 *)(param_3 + 0x28) = uVar12;
    }
    *(undefined4 *)(param_3 + 0x30) = 2;
    uVar16 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(param_3);
    *(int *)(param_3 + 0x34) = (int)uVar16;
    return uVar16;
  }
  auVar30 = func_0x00f78af4();
  uVar17 = auVar30._8_4_;
  uStack_50 = 2;
  lStack_48 = param_3;
  if ((int)uVar17 < *(int *)(auVar30._0_8_ + 0x30)) {
    lVar20 = *(long *)(auVar30._0_8_ + 0x28);
    uVar13 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
    if (lVar20 == 0) goto code_r0x016ce410;
    if (uVar17 < *(uint *)(lVar20 + 0x18)) {
      *(int *)(lVar20 + (long)(int)uVar17 * 4 + 0x20) = (int)uVar13;
      return uVar13;
    }
  }
  else {
    func_0x00f78a24(0x3d22738);
    uVar12 = func_0x00f78aec();
    uVar14 = func_0x00f78a24(0x3d6ceb8);
    uVar16 = 0;
    /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar12,uVar14);
    uVar14 = func_0x00f78a24(0x3d56a58);
    func_0x00f78ac0(uVar12,uVar14);
code_r0x016ce410:
    func_0x00f78af4();
  }
  uVar12 = func_0x00f78b24();
  auVar29 = func_0x00f78ac0(uVar12,0);
  uVar13 = auVar29._0_8_;
  puStack_60 = &stack0xffffffffffffffc0;
  puStack_58 = &FlatBuffers_FlatBufferBuilder__AddBool;
  ppuVar23 = &puStack_60;
  if (((int)uVar16 == param_6) && (*(char *)(uVar13 + 0x48) == '\0')) {
    return uVar13;
  }
  auVar28._8_8_ = 1;
  auVar28._0_8_ = uVar13;
  uVar13 = 0;
  puVar24 = &UNK_016ce46c;
  puVar6 = &stack0xffffffffffffff80;
code_r0x016cdaac:
  do {
    while( true ) {
      uVar18 = auVar29._0_8_;
      uVar10 = auVar28._0_8_;
      puVar5 = puVar6 + -0x30;
      *(ulong *)(puVar6 + -0x30) = unaff_x22;
      *(ulong *)(puVar6 + -0x28) = uVar16;
      *(undefined1 (*) [16])(puVar6 + -0x20) = auVar29;
      *(undefined1 ***)(puVar6 + -0x10) = ppuVar23;
      *(undefined **)(puVar6 + -8) = puVar24;
      iVar15 = auVar28._8_4_;
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
      uVar17 = (int)uVar13 + iVar15 + uVar1;
      uVar21 = (ulong)uVar17;
      uVar11 = uVar10;
      while (uVar16 = (ulong)uVar2, iVar3 < (int)uVar17) {
        uVar11 = /*FlatBuffers.FlatBufferBuilder$$GrowBuffer*/ func_0x016cda78(uVar10);
        if ((*(long *)(uVar10 + 0x18) == 0) ||
           (lVar20 = *(long *)(*(long *)(uVar10 + 0x18) + 0x10), lVar20 == 0))
        goto code_r0x016cdb68;
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
      auVar29 = *(undefined1 (*) [16])(puVar6 + -0x20);
      unaff_x22 = *(ulong *)(puVar6 + -0x30);
      uVar16 = *(ulong *)(puVar6 + -0x28);
      *(undefined8 *)(puVar6 + -0x10) = *(undefined8 *)(puVar6 + -0x10);
      *(undefined8 *)(puVar6 + -8) = *(undefined8 *)(puVar6 + -8);
      lVar20 = *(long *)(uVar10 + 0x18);
      auVar4._8_8_ = lVar20;
      auVar4._0_8_ = uVar18;
      uVar1 = *(int *)(uVar10 + 0x10) - uVar1;
      uVar21 = (ulong)uVar1;
      auVar27._8_4_ = uVar1;
      auVar27._0_8_ = lVar20;
      auVar27._12_4_ = 0;
      *(uint *)(uVar10 + 0x10) = uVar1;
      if (lVar20 != 0) {
        *(ulong *)(puVar6 + -0x30) = unaff_x22;
        *(ulong *)(puVar6 + -0x28) = uVar16;
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
        uVar16 = (**(code **)(*plVar9 + 0x178))
                           (plVar9,(int)plVar9[3] << 1,*(undefined8 *)(*plVar9 + 0x180));
        return uVar16;
      }
      puVar24 = &FlatBuffers_FlatBufferBuilder__Prep;
      auVar28 = func_0x00f78af4();
      puVar6 = puVar6 + -0x20;
    }
code_r0x016cdb68:
    auVar4._8_8_ = uVar18;
    auVar4._0_8_ = uVar16;
    auVar28 = func_0x00f78af4();
    uVar13 = auVar28._8_8_;
    lVar19 = auVar28._0_8_;
    *(undefined1 **)(puVar6 + -0x40) = puVar6 + -0x10;
    *(undefined **)(puVar6 + -0x38) = &FlatBuffers_FlatBufferBuilder__PutBool;
    lVar20 = *(long *)(lVar19 + 0x18);
    iVar15 = *(int *)(lVar19 + 0x10) + -1;
    *(int *)(lVar19 + 0x10) = iVar15;
    if (lVar20 != 0) {
      puVar7 = puVar6 + -0x30;
      uVar12 = *(undefined8 *)(puVar6 + -0x40);
      uVar14 = *(undefined8 *)(puVar6 + -0x38);
FlatBuffers_ByteBuffer__PutByte:
      auVar4._8_4_ = iVar15;
      auVar4._0_8_ = lVar20;
      auVar4._12_4_ = 0;
      auVar27._8_4_ = iVar15;
      auVar27._0_8_ = lVar20;
      auVar27._12_4_ = 0;
      puVar5 = puVar7 + -0x30;
      *(ulong *)(puVar7 + -0x30) = uVar21;
      *(ulong *)(puVar7 + -0x28) = uVar16;
      *(ulong *)(puVar7 + -0x20) = uVar18;
      *(ulong *)(puVar7 + -0x18) = uVar10;
      *(undefined8 *)(puVar7 + -0x10) = uVar12;
      *(undefined8 *)(puVar7 + -8) = uVar14;
      puVar22 = puVar7 + -0x10;
      uVar18 = 1;
      puVar24 = &UNK_016cc89c;
      goto code_r0x016cc7a4;
    }
    auVar28 = func_0x00f78af4();
    uVar11 = auVar28._8_8_;
    lVar20 = auVar28._0_8_;
    *(undefined1 **)(puVar6 + -0x50) = puVar6 + -0x40;
    *(undefined **)(puVar6 + -0x48) = &FlatBuffers_FlatBufferBuilder__PutSbyte;
    iVar15 = *(int *)(lVar20 + 0x10) + -1;
    auVar27._8_4_ = iVar15;
    auVar27._0_8_ = *(long *)(lVar20 + 0x18);
    auVar27._12_4_ = 0;
    *(int *)(lVar20 + 0x10) = iVar15;
    if (*(long *)(lVar20 + 0x18) != 0) {
      puVar8 = puVar6 + -0x40;
      puVar22 = *(undefined1 **)(puVar6 + -0x50);
      puVar24 = *(undefined **)(puVar6 + -0x48);
      uVar13 = uVar10;
      goto code_r0x016cc810;
    }
    auVar28 = func_0x00f78af4();
    uVar13 = auVar28._8_8_;
    lVar19 = auVar28._0_8_;
    *(undefined1 **)(puVar6 + -0x60) = puVar6 + -0x50;
    *(undefined **)(puVar6 + -0x58) = &FlatBuffers_FlatBufferBuilder__PutByte;
    lVar20 = *(long *)(lVar19 + 0x18);
    iVar15 = *(int *)(lVar19 + 0x10) + -1;
    *(int *)(lVar19 + 0x10) = iVar15;
    if (lVar20 != 0) {
      puVar7 = puVar6 + -0x50;
      uVar12 = *(undefined8 *)(puVar6 + -0x60);
      uVar14 = *(undefined8 *)(puVar6 + -0x58);
      goto FlatBuffers_ByteBuffer__PutByte;
    }
    auVar28 = func_0x00f78af4();
    uVar13 = auVar28._8_8_;
    lVar20 = auVar28._0_8_;
    puVar5 = puVar6 + -0x90;
    *(ulong *)(puVar6 + -0x90) = uVar21;
    *(ulong *)(puVar6 + -0x88) = uVar16;
    *(ulong *)(puVar6 + -0x80) = uVar18;
    *(ulong *)(puVar6 + -0x78) = uVar10;
    *(undefined1 **)(puVar6 + -0x70) = puVar6 + -0x60;
    *(undefined **)(puVar6 + -0x68) = &FlatBuffers_FlatBufferBuilder__PutShort;
    puVar22 = puVar6 + -0x70;
    lVar19 = *(long *)(lVar20 + 0x18);
    uVar17 = *(int *)(lVar20 + 0x10) - 2;
    auVar4._8_8_ = lVar19;
    auVar4._0_8_ = CONCAT44(0,uVar17);
    auVar27._8_4_ = uVar17;
    auVar27._0_8_ = lVar19;
    auVar27._12_4_ = 0;
    *(uint *)(lVar20 + 0x10) = uVar17;
    if (lVar19 != 0) {
      uVar18 = 2;
      puVar24 = &UNK_016cdc34;
      goto code_r0x016cc7a4;
    }
    auVar28 = func_0x00f78af4();
    uVar13 = auVar28._8_8_;
    lVar20 = auVar28._0_8_;
    puVar5 = puVar6 + -0xc0;
    *(ulong *)(puVar6 + -0xc0) = uVar21;
    *(ulong *)(puVar6 + -0xb8) = CONCAT44(0,uVar17);
    *(undefined8 *)(puVar6 + -0xb0) = 0;
    *(ulong *)(puVar6 + -0xa8) = uVar10;
    *(undefined1 **)(puVar6 + -0xa0) = puVar22;
    *(undefined **)(puVar6 + -0x98) = &FlatBuffers_FlatBufferBuilder__PutUshort;
    puVar22 = puVar6 + -0xa0;
    lVar19 = *(long *)(lVar20 + 0x18);
    uVar17 = *(int *)(lVar20 + 0x10) - 2;
    auVar4._8_8_ = lVar19;
    auVar4._0_8_ = CONCAT44(0,uVar17);
    auVar27._8_4_ = uVar17;
    auVar27._0_8_ = lVar19;
    auVar27._12_4_ = 0;
    *(uint *)(lVar20 + 0x10) = uVar17;
    if (lVar19 != 0) {
      uVar18 = 2;
      puVar24 = &UNK_016cdc90;
      goto code_r0x016cc7a4;
    }
    auVar28 = func_0x00f78af4();
    uVar13 = auVar28._8_8_;
    lVar20 = auVar28._0_8_;
    puVar5 = puVar6 + -0xf0;
    *(ulong *)(puVar6 + -0xf0) = uVar21;
    *(ulong *)(puVar6 + -0xe8) = CONCAT44(0,uVar17);
    *(undefined8 *)(puVar6 + -0xe0) = 0;
    *(ulong *)(puVar6 + -0xd8) = uVar10;
    *(undefined1 **)(puVar6 + -0xd0) = puVar22;
    *(undefined **)(puVar6 + -200) = &FlatBuffers_FlatBufferBuilder__PutInt;
    puVar22 = puVar6 + -0xd0;
    lVar19 = *(long *)(lVar20 + 0x18);
    uVar17 = *(int *)(lVar20 + 0x10) - 4;
    auVar4._8_8_ = lVar19;
    auVar4._0_8_ = CONCAT44(0,uVar17);
    auVar27._8_4_ = uVar17;
    auVar27._0_8_ = lVar19;
    auVar27._12_4_ = 0;
    *(uint *)(lVar20 + 0x10) = uVar17;
    if (lVar19 != 0) {
      uVar18 = 4;
      puVar24 = &UNK_016cdcec;
      goto code_r0x016cc7a4;
    }
    auVar28 = func_0x00f78af4();
    uVar13 = auVar28._8_8_;
    lVar20 = auVar28._0_8_;
    puVar5 = puVar6 + -0x120;
    *(ulong *)(puVar6 + -0x120) = uVar21;
    *(ulong *)(puVar6 + -0x118) = CONCAT44(0,uVar17);
    *(undefined8 *)(puVar6 + -0x110) = 0;
    *(ulong *)(puVar6 + -0x108) = uVar10;
    *(undefined1 **)(puVar6 + -0x100) = puVar22;
    *(undefined **)(puVar6 + -0xf8) = &FlatBuffers_FlatBufferBuilder__PutUint;
    puVar22 = puVar6 + -0x100;
    lVar19 = *(long *)(lVar20 + 0x18);
    uVar17 = *(int *)(lVar20 + 0x10) - 4;
    auVar4._8_8_ = lVar19;
    auVar4._0_8_ = CONCAT44(0,uVar17);
    auVar27._8_4_ = uVar17;
    auVar27._0_8_ = lVar19;
    auVar27._12_4_ = 0;
    *(uint *)(lVar20 + 0x10) = uVar17;
    if (lVar19 != 0) {
      uVar18 = 4;
      puVar24 = &UNK_016cdd48;
      goto code_r0x016cc7a4;
    }
    auVar28 = func_0x00f78af4();
    uVar13 = auVar28._8_8_;
    lVar20 = auVar28._0_8_;
    puVar5 = puVar6 + -0x150;
    *(ulong *)(puVar6 + -0x150) = uVar21;
    *(ulong *)(puVar6 + -0x148) = CONCAT44(0,uVar17);
    *(undefined8 *)(puVar6 + -0x140) = 0;
    *(ulong *)(puVar6 + -0x138) = uVar10;
    *(undefined1 **)(puVar6 + -0x130) = puVar22;
    *(undefined **)(puVar6 + -0x128) = &FlatBuffers_FlatBufferBuilder__PutLong;
    puVar22 = puVar6 + -0x130;
    lVar19 = *(long *)(lVar20 + 0x18);
    uVar17 = *(int *)(lVar20 + 0x10) - 8;
    auVar4._8_8_ = lVar19;
    auVar4._0_8_ = CONCAT44(0,uVar17);
    auVar27._8_4_ = uVar17;
    auVar27._0_8_ = lVar19;
    auVar27._12_4_ = 0;
    *(uint *)(lVar20 + 0x10) = uVar17;
    if (lVar19 != 0) {
      uVar18 = 8;
      puVar24 = &UNK_016cdda4;
      goto code_r0x016cc7a4;
    }
    auVar28 = func_0x00f78af4();
    uVar13 = auVar28._8_8_;
    lVar20 = auVar28._0_8_;
    puVar5 = puVar6 + -0x180;
    *(ulong *)(puVar6 + -0x180) = uVar21;
    *(ulong *)(puVar6 + -0x178) = CONCAT44(0,uVar17);
    *(undefined8 *)(puVar6 + -0x170) = 0;
    *(ulong *)(puVar6 + -0x168) = uVar10;
    *(undefined1 **)(puVar6 + -0x160) = puVar22;
    *(undefined **)(puVar6 + -0x158) = &FlatBuffers_FlatBufferBuilder__PutUlong;
    puVar22 = puVar6 + -0x160;
    lVar19 = *(long *)(lVar20 + 0x18);
    uVar17 = *(int *)(lVar20 + 0x10) - 8;
    uVar16 = CONCAT44(0,uVar17);
    auVar4._8_8_ = lVar19;
    auVar4._0_8_ = uVar16;
    auVar27._8_4_ = uVar17;
    auVar27._0_8_ = lVar19;
    auVar27._12_4_ = 0;
    *(uint *)(lVar20 + 0x10) = uVar17;
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
    uVar17 = *(int *)(lVar20 + 0x10) - 4;
    uVar13 = (ulong)uVar17;
    auVar27._8_4_ = uVar17;
    auVar27._0_8_ = lVar19;
    auVar27._12_4_ = 0;
    *(uint *)(lVar20 + 0x10) = uVar17;
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
    uVar17 = *(int *)(lVar20 + 0x10) - 8;
    uVar13 = (ulong)uVar17;
    auVar27._8_4_ = uVar17;
    auVar27._0_8_ = lVar19;
    auVar27._12_4_ = 0;
    *(uint *)(lVar20 + 0x10) = uVar17;
    if (lVar19 != 0) break;
    auVar29 = func_0x00f78af4();
    *(undefined8 *)(puVar6 + -0x1c0) = 0;
    *(ulong *)(puVar6 + -0x1b8) = uVar10;
    *(undefined1 **)(puVar6 + -0x1b0) = puVar6 + -0x1a0;
    *(undefined **)(puVar6 + -0x1a8) = &FlatBuffers_FlatBufferBuilder__AddBool;
    ppuVar23 = (undefined1 **)(puVar6 + -0x1b0);
    auVar28._8_8_ = 1;
    auVar28._0_8_ = auVar29._0_8_;
    uVar13 = 0;
    puVar24 = &UNK_016cde9c;
    puVar6 = puVar6 + -0x1c0;
    unaff_x22 = uVar21;
  } while( true );
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
code_r0x016cc7a4:
  do {
    puVar8 = puVar5 + -0x20;
    *(long *)(puVar5 + -0x20) = auVar4._8_8_;
    *(ulong *)(puVar5 + -0x18) = uVar13;
    *(undefined1 **)(puVar5 + -0x10) = puVar22;
    *(undefined **)(puVar5 + -8) = puVar24;
    puVar22 = puVar5 + -0x10;
    if (auVar27._8_4_ < 0) {
code_r0x016cc7d8:
      func_0x00f78a24(0x3d1fcf8);
      uVar13 = func_0x00f78aec();
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a4d0(uVar13,0);
      uVar12 = func_0x00f78a24(0x3d52ce8);
      func_0x00f78ac0(uVar13,uVar12);
      uVar11 = uVar18;
    }
    else {
      lVar20 = *(long *)(auVar27._0_8_ + 0x10);
      uVar11 = uVar18;
      if (lVar20 != 0) {
        if (auVar27._8_4_ <= *(int *)(lVar20 + 0x18) - (int)uVar18) {
          return auVar27._0_8_;
        }
        goto code_r0x016cc7d8;
      }
    }
    puVar24 = &FlatBuffers_ByteBuffer__PutSbyte;
    auVar27 = func_0x00f78af4();
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
    auVar4 = auVar27;
  } while( true );
}



// ============================================================
// RVA: 0x1681c04 | Core.Services.ReplicatorEnvelope.StartStreamsVector
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

ulong Core_Services_ReplicatorEnvelope__StartStreamsVector
                (undefined1 param_1 [16],float param_2,ulong param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long *plVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  undefined1 *puVar21;
  undefined *puVar22;
  float fVar23;
  float fVar24;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  
  if (param_3 == 0) {
    fVar23 = (float)func_0x00f78af4();
    if (param_2 < 0.0) {
      uVar15 = 0;
    }
    else {
      fVar24 = param_2;
      if (fVar23 <= param_2) {
        fVar24 = fVar23;
      }
      fVar23 = -param_2;
      if (-param_2 <= fVar24) {
        fVar23 = fVar24;
      }
      uVar15 = (uint)((fVar23 + param_2) / ((param_2 + param_2) / 255.0));
    }
    return (ulong)(uVar15 & 0xff);
  }
  uVar11 = 0x20;
  uVar14 = 8;
  puVar21 = &stack0xfffffffffffffff0;
  /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4();
  *(int *)(param_3 + 0x44) = param_4;
  uVar19 = (ulong)(uint)(param_4 * 0x20);
  uVar12 = 4;
  puVar22 = &UNK_016ce188;
  puVar5 = &stack0xffffffffffffffd0;
  uVar9 = uVar19;
  uVar13 = param_3;
  do {
    while( true ) {
      puVar4 = puVar5 + -0x30;
      *(ulong *)(puVar5 + -0x30) = uVar13;
      *(ulong *)(puVar5 + -0x28) = uVar11;
      *(ulong *)(puVar5 + -0x20) = uVar9;
      *(undefined8 *)(puVar5 + -0x18) = uVar14;
      *(undefined1 **)(puVar5 + -0x10) = puVar21;
      *(undefined **)(puVar5 + -8) = puVar22;
      iVar10 = (int)uVar12;
      if (*(int *)(param_3 + 0x20) < iVar10) {
        *(int *)(param_3 + 0x20) = iVar10;
      }
      uVar17 = uVar9;
      uVar20 = uVar13;
      if ((*(long *)(param_3 + 0x18) == 0) ||
         (lVar16 = *(long *)(*(long *)(param_3 + 0x18) + 0x10), lVar16 == 0)) break;
      uVar2 = *(uint *)(lVar16 + 0x18);
      iVar3 = *(int *)(param_3 + 0x10);
      uVar1 = iVar3 - (uVar2 + (int)uVar19) & iVar10 - 1U;
      uVar17 = CONCAT44(0,uVar1);
      uVar15 = (int)uVar19 + iVar10 + uVar1;
      uVar20 = (ulong)uVar15;
      uVar9 = param_3;
      while (uVar11 = (ulong)uVar2, iVar3 < (int)uVar15) {
        uVar9 = /*FlatBuffers.FlatBufferBuilder$$GrowBuffer*/ func_0x016cda78(param_3);
        if ((*(long *)(param_3 + 0x18) == 0) ||
           (lVar16 = *(long *)(*(long *)(param_3 + 0x18) + 0x10), lVar16 == 0))
        goto code_r0x016cdb68;
        iVar3 = *(int *)(param_3 + 0x10) - uVar2;
        uVar2 = *(uint *)(lVar16 + 0x18);
        iVar3 = iVar3 + uVar2;
        *(int *)(param_3 + 0x10) = iVar3;
      }
      if ((int)uVar1 < 1) {
        return uVar9;
      }
      uVar9 = *(ulong *)(puVar5 + -0x20);
      uVar14 = *(undefined8 *)(puVar5 + -0x18);
      uVar13 = *(ulong *)(puVar5 + -0x30);
      uVar11 = *(ulong *)(puVar5 + -0x28);
      *(undefined8 *)(puVar5 + -0x10) = *(undefined8 *)(puVar5 + -0x10);
      *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
      lVar16 = *(long *)(param_3 + 0x18);
      auVar26._8_8_ = lVar16;
      auVar26._0_8_ = uVar17;
      uVar1 = *(int *)(param_3 + 0x10) - uVar1;
      uVar20 = (ulong)uVar1;
      auVar25._8_4_ = uVar1;
      auVar25._0_8_ = lVar16;
      auVar25._12_4_ = 0;
      *(uint *)(param_3 + 0x10) = uVar1;
      if (lVar16 != 0) {
        *(ulong *)(puVar5 + -0x30) = uVar13;
        *(ulong *)(puVar5 + -0x28) = uVar11;
        *(ulong *)(puVar5 + -0x20) = uVar9;
        *(undefined8 *)(puVar5 + -0x18) = uVar14;
        *(undefined8 *)(puVar5 + -0x10) = *(undefined8 *)(puVar5 + -0x10);
        *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
        puVar21 = puVar5 + -0x10;
        puVar22 = &UNK_016cc908;
        uVar9 = 0;
        goto code_r0x016cc7a4;
      }
      lVar16 = func_0x00f78af4();
      puVar21 = puVar5 + -0x20;
      *(undefined1 **)(puVar5 + -0x20) = puVar5 + -0x10;
      *(undefined **)(puVar5 + -0x18) = &FlatBuffers_FlatBufferBuilder__GrowBuffer;
      if ((*(long *)(lVar16 + 0x18) != 0) &&
         (plVar8 = *(long **)(*(long *)(lVar16 + 0x18) + 0x10), plVar8 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016cdaa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar9 = (**(code **)(*plVar8 + 0x178))
                          (plVar8,(int)plVar8[3] << 1,*(undefined8 *)(*plVar8 + 0x180));
        return uVar9;
      }
      puVar22 = &FlatBuffers_FlatBufferBuilder__Prep;
      auVar26 = func_0x00f78af4();
      uVar12 = auVar26._8_8_;
      param_3 = auVar26._0_8_;
      puVar5 = puVar5 + -0x20;
    }
code_r0x016cdb68:
    auVar26._8_8_ = uVar17;
    auVar26._0_8_ = uVar11;
    auVar25 = func_0x00f78af4();
    uVar9 = auVar25._8_8_;
    lVar18 = auVar25._0_8_;
    *(undefined1 **)(puVar5 + -0x40) = puVar5 + -0x10;
    *(undefined **)(puVar5 + -0x38) = &FlatBuffers_FlatBufferBuilder__PutBool;
    lVar16 = *(long *)(lVar18 + 0x18);
    iVar10 = *(int *)(lVar18 + 0x10) + -1;
    *(int *)(lVar18 + 0x10) = iVar10;
    if (lVar16 != 0) {
      puVar6 = puVar5 + -0x30;
      uVar14 = *(undefined8 *)(puVar5 + -0x40);
      uVar12 = *(undefined8 *)(puVar5 + -0x38);
FlatBuffers_ByteBuffer__PutByte:
      auVar26._8_4_ = iVar10;
      auVar26._0_8_ = lVar16;
      auVar26._12_4_ = 0;
      auVar25._8_4_ = iVar10;
      auVar25._0_8_ = lVar16;
      auVar25._12_4_ = 0;
      puVar4 = puVar6 + -0x30;
      *(ulong *)(puVar6 + -0x30) = uVar20;
      *(ulong *)(puVar6 + -0x28) = uVar11;
      *(ulong *)(puVar6 + -0x20) = uVar17;
      *(ulong *)(puVar6 + -0x18) = param_3;
      *(undefined8 *)(puVar6 + -0x10) = uVar14;
      *(undefined8 *)(puVar6 + -8) = uVar12;
      puVar21 = puVar6 + -0x10;
      uVar17 = 1;
      puVar22 = &UNK_016cc89c;
      goto code_r0x016cc7a4;
    }
    auVar25 = func_0x00f78af4();
    uVar13 = auVar25._8_8_;
    lVar16 = auVar25._0_8_;
    *(undefined1 **)(puVar5 + -0x50) = puVar5 + -0x40;
    *(undefined **)(puVar5 + -0x48) = &FlatBuffers_FlatBufferBuilder__PutSbyte;
    iVar10 = *(int *)(lVar16 + 0x10) + -1;
    auVar25._8_4_ = iVar10;
    auVar25._0_8_ = *(long *)(lVar16 + 0x18);
    auVar25._12_4_ = 0;
    *(int *)(lVar16 + 0x10) = iVar10;
    if (*(long *)(lVar16 + 0x18) != 0) {
      puVar7 = puVar5 + -0x40;
      puVar21 = *(undefined1 **)(puVar5 + -0x50);
      puVar22 = *(undefined **)(puVar5 + -0x48);
      uVar9 = param_3;
      goto code_r0x016cc810;
    }
    auVar26 = func_0x00f78af4();
    uVar9 = auVar26._8_8_;
    lVar18 = auVar26._0_8_;
    *(undefined1 **)(puVar5 + -0x60) = puVar5 + -0x50;
    *(undefined **)(puVar5 + -0x58) = &FlatBuffers_FlatBufferBuilder__PutByte;
    lVar16 = *(long *)(lVar18 + 0x18);
    iVar10 = *(int *)(lVar18 + 0x10) + -1;
    *(int *)(lVar18 + 0x10) = iVar10;
    if (lVar16 != 0) {
      puVar6 = puVar5 + -0x50;
      uVar14 = *(undefined8 *)(puVar5 + -0x60);
      uVar12 = *(undefined8 *)(puVar5 + -0x58);
      goto FlatBuffers_ByteBuffer__PutByte;
    }
    auVar26 = func_0x00f78af4();
    uVar9 = auVar26._8_8_;
    lVar16 = auVar26._0_8_;
    puVar4 = puVar5 + -0x90;
    *(ulong *)(puVar5 + -0x90) = uVar20;
    *(ulong *)(puVar5 + -0x88) = uVar11;
    *(ulong *)(puVar5 + -0x80) = uVar17;
    *(ulong *)(puVar5 + -0x78) = param_3;
    *(undefined1 **)(puVar5 + -0x70) = puVar5 + -0x60;
    *(undefined **)(puVar5 + -0x68) = &FlatBuffers_FlatBufferBuilder__PutShort;
    puVar21 = puVar5 + -0x70;
    lVar18 = *(long *)(lVar16 + 0x18);
    uVar15 = *(int *)(lVar16 + 0x10) - 2;
    auVar26._8_8_ = lVar18;
    auVar26._0_8_ = CONCAT44(0,uVar15);
    auVar25._8_4_ = uVar15;
    auVar25._0_8_ = lVar18;
    auVar25._12_4_ = 0;
    *(uint *)(lVar16 + 0x10) = uVar15;
    if (lVar18 != 0) {
      uVar17 = 2;
      puVar22 = &UNK_016cdc34;
      goto code_r0x016cc7a4;
    }
    auVar26 = func_0x00f78af4();
    uVar9 = auVar26._8_8_;
    lVar16 = auVar26._0_8_;
    puVar4 = puVar5 + -0xc0;
    *(ulong *)(puVar5 + -0xc0) = uVar20;
    *(ulong *)(puVar5 + -0xb8) = CONCAT44(0,uVar15);
    *(undefined8 *)(puVar5 + -0xb0) = 0;
    *(ulong *)(puVar5 + -0xa8) = param_3;
    *(undefined1 **)(puVar5 + -0xa0) = puVar21;
    *(undefined **)(puVar5 + -0x98) = &FlatBuffers_FlatBufferBuilder__PutUshort;
    puVar21 = puVar5 + -0xa0;
    lVar18 = *(long *)(lVar16 + 0x18);
    uVar15 = *(int *)(lVar16 + 0x10) - 2;
    auVar26._8_8_ = lVar18;
    auVar26._0_8_ = CONCAT44(0,uVar15);
    auVar25._8_4_ = uVar15;
    auVar25._0_8_ = lVar18;
    auVar25._12_4_ = 0;
    *(uint *)(lVar16 + 0x10) = uVar15;
    if (lVar18 != 0) {
      uVar17 = 2;
      puVar22 = &UNK_016cdc90;
      goto code_r0x016cc7a4;
    }
    auVar26 = func_0x00f78af4();
    uVar9 = auVar26._8_8_;
    lVar16 = auVar26._0_8_;
    puVar4 = puVar5 + -0xf0;
    *(ulong *)(puVar5 + -0xf0) = uVar20;
    *(ulong *)(puVar5 + -0xe8) = CONCAT44(0,uVar15);
    *(undefined8 *)(puVar5 + -0xe0) = 0;
    *(ulong *)(puVar5 + -0xd8) = param_3;
    *(undefined1 **)(puVar5 + -0xd0) = puVar21;
    *(undefined **)(puVar5 + -200) = &FlatBuffers_FlatBufferBuilder__PutInt;
    puVar21 = puVar5 + -0xd0;
    lVar18 = *(long *)(lVar16 + 0x18);
    uVar15 = *(int *)(lVar16 + 0x10) - 4;
    auVar26._8_8_ = lVar18;
    auVar26._0_8_ = CONCAT44(0,uVar15);
    auVar25._8_4_ = uVar15;
    auVar25._0_8_ = lVar18;
    auVar25._12_4_ = 0;
    *(uint *)(lVar16 + 0x10) = uVar15;
    if (lVar18 != 0) {
      uVar17 = 4;
      puVar22 = &UNK_016cdcec;
      goto code_r0x016cc7a4;
    }
    auVar26 = func_0x00f78af4();
    uVar9 = auVar26._8_8_;
    lVar16 = auVar26._0_8_;
    puVar4 = puVar5 + -0x120;
    *(ulong *)(puVar5 + -0x120) = uVar20;
    *(ulong *)(puVar5 + -0x118) = CONCAT44(0,uVar15);
    *(undefined8 *)(puVar5 + -0x110) = 0;
    *(ulong *)(puVar5 + -0x108) = param_3;
    *(undefined1 **)(puVar5 + -0x100) = puVar21;
    *(undefined **)(puVar5 + -0xf8) = &FlatBuffers_FlatBufferBuilder__PutUint;
    puVar21 = puVar5 + -0x100;
    lVar18 = *(long *)(lVar16 + 0x18);
    uVar15 = *(int *)(lVar16 + 0x10) - 4;
    auVar26._8_8_ = lVar18;
    auVar26._0_8_ = CONCAT44(0,uVar15);
    auVar25._8_4_ = uVar15;
    auVar25._0_8_ = lVar18;
    auVar25._12_4_ = 0;
    *(uint *)(lVar16 + 0x10) = uVar15;
    if (lVar18 != 0) {
      uVar17 = 4;
      puVar22 = &UNK_016cdd48;
      goto code_r0x016cc7a4;
    }
    auVar26 = func_0x00f78af4();
    uVar9 = auVar26._8_8_;
    lVar16 = auVar26._0_8_;
    puVar4 = puVar5 + -0x150;
    *(ulong *)(puVar5 + -0x150) = uVar20;
    *(ulong *)(puVar5 + -0x148) = CONCAT44(0,uVar15);
    *(undefined8 *)(puVar5 + -0x140) = 0;
    *(ulong *)(puVar5 + -0x138) = param_3;
    *(undefined1 **)(puVar5 + -0x130) = puVar21;
    *(undefined **)(puVar5 + -0x128) = &FlatBuffers_FlatBufferBuilder__PutLong;
    puVar21 = puVar5 + -0x130;
    lVar18 = *(long *)(lVar16 + 0x18);
    uVar15 = *(int *)(lVar16 + 0x10) - 8;
    auVar26._8_8_ = lVar18;
    auVar26._0_8_ = CONCAT44(0,uVar15);
    auVar25._8_4_ = uVar15;
    auVar25._0_8_ = lVar18;
    auVar25._12_4_ = 0;
    *(uint *)(lVar16 + 0x10) = uVar15;
    if (lVar18 != 0) {
      uVar17 = 8;
      puVar22 = &UNK_016cdda4;
      goto code_r0x016cc7a4;
    }
    auVar26 = func_0x00f78af4();
    uVar9 = auVar26._8_8_;
    lVar16 = auVar26._0_8_;
    puVar4 = puVar5 + -0x180;
    *(ulong *)(puVar5 + -0x180) = uVar20;
    *(ulong *)(puVar5 + -0x178) = CONCAT44(0,uVar15);
    *(undefined8 *)(puVar5 + -0x170) = 0;
    *(ulong *)(puVar5 + -0x168) = param_3;
    *(undefined1 **)(puVar5 + -0x160) = puVar21;
    *(undefined **)(puVar5 + -0x158) = &FlatBuffers_FlatBufferBuilder__PutUlong;
    puVar21 = puVar5 + -0x160;
    lVar18 = *(long *)(lVar16 + 0x18);
    uVar15 = *(int *)(lVar16 + 0x10) - 8;
    uVar11 = CONCAT44(0,uVar15);
    auVar26._8_8_ = lVar18;
    auVar26._0_8_ = uVar11;
    auVar25._8_4_ = uVar15;
    auVar25._0_8_ = lVar18;
    auVar25._12_4_ = 0;
    *(uint *)(lVar16 + 0x10) = uVar15;
    if (lVar18 != 0) {
      uVar17 = 8;
      puVar22 = &UNK_016cde00;
      goto code_r0x016cc7a4;
    }
    lVar16 = func_0x00f78af4();
    *(undefined1 **)(puVar5 + -400) = puVar21;
    *(undefined **)(puVar5 + -0x188) = &FlatBuffers_FlatBufferBuilder__PutFloat;
    lVar18 = *(long *)(lVar16 + 0x18);
    auVar26._8_8_ = lVar18;
    uVar15 = *(int *)(lVar16 + 0x10) - 4;
    uVar9 = (ulong)uVar15;
    auVar25._8_4_ = uVar15;
    auVar25._0_8_ = lVar18;
    auVar25._12_4_ = 0;
    *(uint *)(lVar16 + 0x10) = uVar15;
    if (lVar18 != 0) {
      puVar4 = puVar5 + -0x1b0;
      *(undefined8 *)(puVar5 + -0x1b0) = unaff_d9;
      *(undefined8 *)(puVar5 + -0x1a8) = unaff_d8;
      *(undefined8 *)(puVar5 + -0x1a0) = 0;
      *(ulong *)(puVar5 + -0x198) = param_3;
      *(undefined8 *)(puVar5 + -400) = *(undefined8 *)(puVar5 + -400);
      *(undefined8 *)(puVar5 + -0x188) = *(undefined8 *)(puVar5 + -0x188);
      puVar21 = puVar5 + -400;
      uVar17 = 4;
      puVar22 = &UNK_016ccba4;
      goto code_r0x016cc7a4;
    }
    lVar16 = func_0x00f78af4();
    *(undefined1 **)(puVar5 + -0x1a0) = puVar5 + -400;
    *(undefined **)(puVar5 + -0x198) = &FlatBuffers_FlatBufferBuilder__PutDouble;
    lVar18 = *(long *)(lVar16 + 0x18);
    auVar26._8_8_ = lVar18;
    uVar15 = *(int *)(lVar16 + 0x10) - 8;
    uVar9 = (ulong)uVar15;
    auVar25._8_4_ = uVar15;
    auVar25._0_8_ = lVar18;
    auVar25._12_4_ = 0;
    *(uint *)(lVar16 + 0x10) = uVar15;
    if (lVar18 != 0) break;
    auVar26 = func_0x00f78af4();
    uVar14 = auVar26._8_8_;
    uVar9 = auVar26._0_8_;
    *(undefined8 *)(puVar5 + -0x1c0) = 0;
    *(ulong *)(puVar5 + -0x1b8) = param_3;
    *(undefined1 **)(puVar5 + -0x1b0) = puVar5 + -0x1a0;
    *(undefined **)(puVar5 + -0x1a8) = &FlatBuffers_FlatBufferBuilder__AddBool;
    puVar21 = puVar5 + -0x1b0;
    uVar12 = 1;
    uVar19 = 0;
    puVar22 = &UNK_016cde9c;
    puVar5 = puVar5 + -0x1c0;
    param_3 = uVar9;
    uVar13 = uVar20;
  } while( true );
  puVar4 = puVar5 + -0x1c0;
  *(undefined8 *)(puVar5 + -0x1c0) = unaff_d9;
  *(undefined8 *)(puVar5 + -0x1b8) = unaff_d8;
  *(undefined8 *)(puVar5 + -0x1b0) = 0;
  *(ulong *)(puVar5 + -0x1a8) = param_3;
  *(undefined8 *)(puVar5 + -0x1a0) = *(undefined8 *)(puVar5 + -0x1a0);
  *(undefined8 *)(puVar5 + -0x198) = *(undefined8 *)(puVar5 + -0x198);
  puVar21 = puVar5 + -0x1a0;
  uVar17 = 8;
  puVar22 = &UNK_016ccc34;
code_r0x016cc7a4:
  do {
    puVar7 = puVar4 + -0x20;
    *(long *)(puVar4 + -0x20) = auVar26._8_8_;
    *(ulong *)(puVar4 + -0x18) = uVar9;
    *(undefined1 **)(puVar4 + -0x10) = puVar21;
    *(undefined **)(puVar4 + -8) = puVar22;
    puVar21 = puVar4 + -0x10;
    if (auVar25._8_4_ < 0) {
code_r0x016cc7d8:
      func_0x00f78a24(0x3d1fcf8);
      uVar9 = func_0x00f78aec();
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a4d0(uVar9,0);
      uVar14 = func_0x00f78a24(0x3d52ce8);
      func_0x00f78ac0(uVar9,uVar14);
      uVar13 = uVar17;
    }
    else {
      lVar16 = *(long *)(auVar25._0_8_ + 0x10);
      uVar13 = uVar17;
      if (lVar16 != 0) {
        if (auVar25._8_4_ <= *(int *)(lVar16 + 0x18) - (int)uVar17) {
          return auVar25._0_8_;
        }
        goto code_r0x016cc7d8;
      }
    }
    puVar22 = &FlatBuffers_ByteBuffer__PutSbyte;
    auVar25 = func_0x00f78af4();
code_r0x016cc810:
    puVar4 = puVar7 + -0x30;
    *(ulong *)(puVar7 + -0x30) = uVar20;
    *(undefined1 (*) [16])(puVar7 + -0x28) = auVar26;
    *(ulong *)(puVar7 + -0x18) = uVar9;
    *(undefined1 **)(puVar7 + -0x10) = puVar21;
    *(undefined **)(puVar7 + -8) = puVar22;
    puVar21 = puVar7 + -0x10;
    uVar17 = 1;
    puVar22 = &UNK_016cc834;
    uVar9 = uVar13;
    auVar26 = auVar25;
  } while( true );
}



