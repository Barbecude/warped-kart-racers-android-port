// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Networking.HostStanding

// ============================================================
// RVA: 0x1656800 | Core.Networking.HostStanding.get_ByteBuffer
// ============================================================

undefined8 Core_Networking_HostStanding__get_ByteBuffer(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// ============================================================
// RVA: 0x1656808 | Core.Networking.HostStanding.GetRootAsHostStanding
// ============================================================

undefined1  [16] Core_Networking_HostStanding__GetRootAsHostStanding(long param_1)

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
// RVA: 0x1656814 | Core.Networking.HostStanding.GetRootAsHostStanding
// ============================================================

undefined1  [16]
Core_Networking_HostStanding__GetRootAsHostStanding(long param_1,ulong param_2,undefined8 param_3)

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
// RVA: 0x1656858 | Core.Networking.HostStanding.__assign
// ============================================================

undefined1  [16]
Core_Networking_HostStanding____assign(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)param_1 = param_2;
  param_1[1] = param_3;
  auVar1._0_8_ = *param_1;
  auVar1._8_8_ = param_3;
  return auVar1;
}



// ============================================================
// RVA: 0x165686c | Core.Networking.HostStanding.__init
// ============================================================

void Core_Networking_HostStanding____init(undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  return;
}



// ============================================================
// RVA: 0x1656878 | Core.Networking.HostStanding.Standings
// ============================================================

void Core_Networking_HostStanding__Standings(ulong *param_1,long param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if ((bRam0000000003eb5806 & 1) == 0) {
    func_0x00f78a20(0x3d3e800);
    bRam0000000003eb5806 = 1;
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
// RVA: 0x1656930 | Core.Networking.HostStanding.get_StandingsLength
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

ulong Core_Networking_HostStanding__get_StandingsLength(int *param_1)

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
// RVA: 0x1656974 | Core.Networking.HostStanding.get_ForceEventEndTimeStamp
// ============================================================

/* WARNING: Possible PIC construction at 0x016ccdf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01656a00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01656a48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01656a60: Changing call to branch */
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
/* WARNING: Possible PIC construction at 0x01656b90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01656c54: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x01656c58) */
/* WARNING: Removing unreachable block (ram,0x016ce224) */
/* WARNING: Removing unreachable block (ram,0x01656b94) */
/* WARNING: Removing unreachable block (ram,0x01656ba0) */
/* WARNING: Removing unreachable block (ram,0x01656ba8) */
/* WARNING: Removing unreachable block (ram,0x01656bc4) */
/* WARNING: Removing unreachable block (ram,0x01656bd0) */
/* WARNING: Removing unreachable block (ram,0x01656bdc) */
/* WARNING: Removing unreachable block (ram,0x016ce20c) */
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
/* WARNING: Removing unreachable block (ram,0x01656a64) */
/* WARNING: Removing unreachable block (ram,0x01656a4c) */
/* WARNING: Removing unreachable block (ram,0x01656a04) */
/* WARNING: Removing unreachable block (ram,0x016ccdfc) */
/* WARNING: Removing unreachable block (ram,0x016ce69c) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

dword * Core_Networking_HostStanding__get_ForceEventEndTimeStamp
                  (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  dword dVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 ****ppppuVar15;
  undefined1 *puVar16;
  dword *pdVar17;
  int *piVar18;
  int *piVar19;
  long *plVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  int iVar25;
  ulong uVar26;
  dword *pdVar27;
  dword *pdVar28;
  dword *pdVar29;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 uVar30;
  dword *pdVar31;
  dword *unaff_x21;
  dword *pdVar32;
  ulong unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 ***pppuVar33;
  undefined1 *puVar34;
  undefined1 ****ppppuVar35;
  undefined8 ****ppppuVar36;
  undefined8 ***pppuVar37;
  undefined *puVar38;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [12];
  long alStack_150 [4];
  undefined8 ***pppuStack_110;
  undefined *puStack_108;
  undefined8 **ppuStack_b0;
  undefined *puStack_a8;
  undefined *puStack_88;
  undefined1 ***pppuStack_80;
  undefined *puStack_78;
  undefined1 **ppuStack_50;
  undefined *puStack_48;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  pdVar17 = (dword *)/*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,6,0);
  if ((int)pdVar17 == 0) {
    return pdVar17;
  }
  pdVar28 = *(dword **)(param_1 + 2);
  if (pdVar28 != (dword *)0x0) {
    pdVar17 = (dword *)(ulong)(uint)(*param_1 + (int)pdVar17);
    puVar8 = &stack0xfffffffffffffff0;
    ppppuVar35 = (undefined1 ****)&stack0xfffffffffffffff0;
    puVar38 = &UNK_016ccdfc;
code_r0x016cc634:
    auVar39._8_8_ = pdVar17;
    auVar39._0_8_ = pdVar28;
    puVar9 = puVar8 + -0x40;
    *(undefined8 *)(puVar8 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar8 + -0x38) = unaff_x23;
    *(ulong *)(puVar8 + -0x30) = unaff_x22;
    *(dword **)(puVar8 + -0x28) = unaff_x21;
    *(long *)(puVar8 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar8 + -0x18) = unaff_x19;
    *(undefined1 *****)(puVar8 + -0x10) = ppppuVar35;
    *(undefined **)(puVar8 + -8) = puVar38;
    pppuVar33 = (undefined1 ***)(puVar8 + -0x10);
    pdVar29 = &MACH_HEADER.cputype;
    unaff_x22 = 0x3d201a0;
    if ((bRam0000000003eb5cd0 & 1) == 0) {
      func_0x00f78a20(0x3d201a0);
      bRam0000000003eb5cd0 = 1;
    }
    pdVar31 = &MACH_HEADER.cputype;
    puVar38 = &UNK_016cc68c;
    unaff_x21 = pdVar28;
code_r0x016cc7a4:
    do {
      puVar13 = puVar9 + -0x20;
      *(dword **)(puVar9 + -0x20) = pdVar29;
      *(dword **)(puVar9 + -0x18) = pdVar17;
      *(undefined1 ****)(puVar9 + -0x10) = pppuVar33;
      *(undefined **)(puVar9 + -8) = puVar38;
      puVar34 = puVar9 + -0x10;
      if (auVar39._8_4_ < 0) {
code_r0x016cc7d8:
        func_0x00f78a24(0x3d1fcf8);
        pdVar28 = (dword *)func_0x00f78aec();
        /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a4d0(pdVar28,0);
        uVar30 = func_0x00f78a24(0x3d52ce8);
        func_0x00f78ac0(pdVar28,uVar30);
        pdVar27 = pdVar31;
      }
      else {
        lVar23 = *(long *)(auVar39._0_8_ + 4);
        pdVar27 = pdVar31;
        pdVar28 = pdVar17;
        if (lVar23 != 0) {
          if (auVar39._8_4_ <= *(int *)(lVar23 + 0x18) - (int)pdVar31) {
            return auVar39._0_8_;
          }
          goto code_r0x016cc7d8;
        }
      }
      puVar38 = &FlatBuffers_ByteBuffer__PutSbyte;
      auVar39 = func_0x00f78af4();
      pdVar31 = pdVar29;
code_r0x016cc810:
      pdVar29 = auVar39._8_8_;
      puVar9 = puVar13 + -0x30;
      *(ulong *)(puVar13 + -0x30) = unaff_x22;
      *(dword **)(puVar13 + -0x28) = unaff_x21;
      *(dword **)(puVar13 + -0x20) = pdVar31;
      *(dword **)(puVar13 + -0x18) = pdVar28;
      *(undefined1 **)(puVar13 + -0x10) = puVar34;
      *(undefined **)(puVar13 + -8) = puVar38;
      pppuVar33 = (undefined1 ***)(puVar13 + -0x10);
      pdVar31 = (dword *)((long)&MACH_HEADER.magic + 1);
      puVar38 = &UNK_016cc834;
      pdVar17 = pdVar27;
      unaff_x21 = auVar39._0_8_;
    } while( true );
  }
  piVar18 = (int *)func_0x00f78af4();
  puStack_28 = &Core_Networking_HostStanding__get_HasEventEndTimeStamp;
  uVar26 = 0;
  puStack_30 = &stack0xfffffffffffffff0;
  pdVar17 = (dword *)/*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar18,8);
  if ((int)pdVar17 == 0) {
    return pdVar17;
  }
  pdVar29 = *(dword **)(piVar18 + 2);
  ppuStack_50 = &puStack_30;
  if (pdVar29 != (dword *)0x0) {
    uVar1 = *piVar18 + (int)pdVar17;
    pdVar17 = (dword *)(ulong)uVar1;
    auVar39._8_4_ = uVar1;
    auVar39._0_8_ = pdVar29;
    auVar39._12_4_ = 0;
    puVar9 = &stack0xffffffffffffffa0;
    puStack_48 = &UNK_01656a04;
    pppuVar33 = &ppuStack_50;
    pdVar31 = (dword *)((long)&MACH_HEADER.magic + 1);
    puVar38 = &UNK_016ccd18;
    goto code_r0x016cc7a4;
  }
  auVar39 = func_0x00f78af4();
  piVar19 = auVar39._0_8_;
  puVar14 = &stack0xffffffffffffff90;
  puStack_48 = &Core_Networking_HostStanding__CreateHostStanding;
  pppuVar37 = (undefined8 ***)&ppuStack_50;
  if (piVar19 == (int *)0x0) {
    auVar39 = func_0x00f78af4();
    pdVar32 = auVar39._8_8_;
    pdVar17 = auVar39._0_8_;
    pppuStack_80 = (undefined1 ***)pppuVar37;
    if (pdVar17 != (dword *)0x0) {
      puVar11 = &stack0xffffffffffffff60;
      puStack_78 = &Core_Networking_HostStanding__AddForceEventEndTimeStamp;
      ppppuVar35 = &pppuStack_80;
      auVar43._8_8_ = (undefined1 *)((long)&MACH_HEADER.magic + 1);
      auVar43._0_8_ = pdVar17;
      if ((auVar39._8_4_ == 0) && (*(char *)(pdVar17 + 0x12) == '\0')) {
        return pdVar17;
      }
      auVar42._8_8_ = 4;
      auVar42._0_8_ = pdVar17;
      pdVar17 = (dword *)0x0;
      puVar38 = &UNK_016ce69c;
      goto code_r0x016cdaac;
    }
    ppppuVar35 = &pppuStack_80;
    puStack_78 = &Core_Networking_HostStanding__AddForceEventEndTimeStamp;
    auVar39 = func_0x00f78af4();
    pdVar17 = auVar39._0_8_;
    if (pdVar17 != (dword *)0x0) {
      iVar25 = 0;
      puStack_88 = &Core_Networking_HostStanding__AddStandings;
      auVar44._8_4_ = 0;
      auVar44._0_8_ = pdVar17;
      if ((auVar39._8_4_ == 0) && (*(char *)(pdVar17 + 0x12) == '\0')) {
        return pdVar17;
      }
      /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(pdVar17,auVar39._8_8_,auVar39._8_8_,0,0);
      ppppuVar15 = &pppuStack_80;
      goto code_r0x016ce380;
    }
    puVar16 = &stack0xffffffffffffff70;
    ppppuVar35 = (undefined1 ****)&stack0xffffffffffffff70;
    puVar38 = &Core_Networking_HostStanding__AddHasEventEndTimeStamp;
    auVar40 = func_0x00f78af4();
    if (auVar40._0_8_ == 0) {
      lVar23 = func_0x00f78af4();
      puVar14 = &stack0xffffffffffffff40;
      puStack_a8 = &Core_Networking_HostStanding__EndHostStanding;
      pppuVar37 = &ppuStack_b0;
      uVar30 = 0x3eb5000;
      ppuStack_b0 = (undefined8 **)&stack0xffffffffffffff60;
      if ((bRam0000000003eb5808 & 1) == 0) {
        ppuStack_b0 = (undefined8 **)&stack0xffffffffffffff60;
        func_0x00f78a20(0x3d3f110);
        bRam0000000003eb5808 = 1;
      }
      if (lVar23 != 0) {
        ppppuVar35 = (undefined1 ****)&ppuStack_b0;
        auVar43._8_8_ = lVar23;
        auVar43._0_8_ = 0x3eb5000;
        if ((bRam0000000003eb5cd8 & 1) == 0) {
          func_0x00f78a20(0x3d1f100,0);
          bRam0000000003eb5cd8 = 1;
        }
        pdVar32 = unaff_x21;
        if (-1 < *(int *)(lVar23 + 0x30)) {
          auVar42._8_8_ = 4;
          auVar42._0_8_ = lVar23;
          pdVar17 = (dword *)0x0;
          puVar38 = &UNK_016cea78;
          puVar11 = &stack0xffffffffffffff10;
          goto code_r0x016cdaac;
        }
        func_0x00f78a24(0x3d22a38);
        puVar38 = (undefined *)func_0x00f78aec();
        uVar30 = func_0x00f78a24(0x3d6cea8);
        unaff_x19 = 0;
        /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(puVar38,uVar30);
        uVar30 = func_0x00f78a24(0x3d56a30);
        auVar44 = func_0x00f78ac0(puVar38,uVar30);
        unaff_x20 = auVar44._0_8_;
        puVar8 = &stack0xfffffffffffffed0;
        pppuStack_110 = (undefined8 ****)0x3eb5000;
        ppppuVar35 = (undefined1 ****)&stack0xffffffffffffff00;
        pdVar28 = *(dword **)(unaff_x20 + 0x18);
        puStack_108 = puVar38;
        if ((pdVar28 == (dword *)0x0) || (*(long *)(pdVar28 + 4) == 0)) {
          func_0x00f78af4();
          uVar30 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&stack0xfffffffffffffedc,0);
          uVar21 = func_0x00f78a24(0x3d6ce88);
          uVar22 = func_0x00f78a24(0x3d66338);
          lVar23 = /*System.String$$Concat*/ func_0x029be39c(uVar21,uVar30,uVar22,0);
          func_0x00f78a24(0x3d22a38);
          uVar30 = func_0x00f78aec();
          uVar22 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar30,lVar23);
          uVar21 = func_0x00f78a24(0x3d56a50);
          puVar38 = &FlatBuffers_FlatBufferBuilder__Finish;
          auVar39 = func_0x00f78ac0(uVar30,uVar21);
          puVar11 = &stack0xfffffffffffffed0;
          while( true ) {
            uVar21 = auVar39._8_8_;
            lVar24 = auVar39._0_8_;
            auVar43._8_8_ = lVar24;
            auVar43._0_8_ = uVar21;
            auVar7._8_8_ = lVar24;
            auVar7._0_8_ = uVar21;
            *(undefined8 *)(puVar11 + -0x20) = uVar30;
            *(long *)(puVar11 + -0x18) = lVar23;
            *(undefined1 *****)(puVar11 + -0x10) = ppppuVar35;
            *(undefined **)(puVar11 + -8) = puVar38;
            ppppuVar35 = (undefined1 ****)(puVar11 + -0x10);
            uVar5 = *(undefined4 *)(lVar24 + 0x20);
            auVar42._8_4_ = uVar5;
            auVar42._0_8_ = lVar24;
            auVar42._12_4_ = 0;
            lVar23 = lVar24;
            if ((int)uVar22 == 0) {
              lVar23 = 0;
              uVar5 = 0;
            }
            auVar6._8_4_ = uVar5;
            auVar6._0_8_ = lVar23;
            auVar6._12_4_ = 0;
            if ((int)uVar22 == 0) {
              pdVar17 = &MACH_HEADER.cputype;
              puVar38 = &UNK_016cef64;
              puVar11 = puVar11 + -0x20;
              goto code_r0x016cdaac;
            }
            if (lVar23 != 0) break;
            puVar38 = &FlatBuffers_FlatBufferBuilder__Finish;
            auVar39 = func_0x00f78af4();
            uVar22 = 0;
            puVar11 = puVar11 + -0x20;
            lVar23 = lVar24;
            uVar30 = uVar21;
          }
          pdVar17 = &MACH_HEADER.cpusubtype;
          puVar38 = &UNK_016cef10;
          puVar11 = puVar11 + -0x20;
          auVar42 = auVar6;
          auVar43 = auVar7;
          goto code_r0x016cdaac;
        }
        pdVar17 = (dword *)(ulong)(uint)(*(int *)(*(long *)(pdVar28 + 4) + 0x18) - auVar44._8_4_);
        puVar38 = &UNK_016cee20;
        unaff_x21 = pdVar17;
        goto code_r0x016cc634;
      }
      puVar38 = &Core_Networking_HostStanding__StartHostStanding;
      piVar19 = (int *)func_0x00f78af4();
      if (piVar19 == (int *)0x0) {
        auVar41 = func_0x00f78af4();
        lVar23 = auVar41._0_8_;
        if ((auVar41._8_8_ == 0) || (lVar23 == 0)) {
          auVar41 = func_0x00f78af4();
          lVar24 = auVar41._8_8_;
          lVar23 = auVar41._0_8_;
          puVar11 = &stack0xfffffffffffffed0;
          puStack_108 = &Core_Networking_HostStanding__CreateStandingsVectorBlock;
          ppppuVar36 = &pppuStack_110;
          unaff_x21 = (dword *)0x3eb5000;
          pppuStack_110 = (undefined8 ***)&stack0xffffffffffffff20;
          if ((bRam0000000003eb5807 & 1) == 0) {
            func_0x00f78a20(0x3d569a8);
            bRam0000000003eb5807 = 1;
          }
          if ((lVar24 == 0) || (lVar23 == 0)) {
            puVar38 = &Core_Networking_HostStanding__StartStandingsVector;
            auVar44 = func_0x00f78af4();
            iVar25 = auVar44._8_4_;
            auVar41._8_8_ = lVar24;
            auVar41._0_8_ = auVar44._0_8_;
            if (auVar44._0_8_ == 0) {
              lVar23 = func_0x00f78af4();
              return *(dword **)(lVar23 + 8);
            }
          }
          else {
            unaff_x21 = (dword *)0x3d56000;
            iVar25 = *(int *)(lVar24 + 0x18);
            puVar38 = &UNK_01656c58;
            puVar11 = &stack0xfffffffffffffed0;
          }
        }
        else {
          iVar25 = *(int *)(auVar41._8_8_ + 0x18);
          puVar38 = &UNK_01656b94;
          puVar11 = &stack0xffffffffffffff00;
          ppppuVar36 = (undefined8 ****)&stack0xffffffffffffff20;
        }
        uVar26 = auVar41._0_8_;
        *(ulong *)(puVar11 + -0x30) = unaff_x22;
        *(dword **)(puVar11 + -0x28) = unaff_x21;
        *(long *)(puVar11 + -0x20) = auVar41._8_8_;
        *(long *)(puVar11 + -0x18) = lVar23;
        *(undefined8 *****)(puVar11 + -0x10) = ppppuVar36;
        *(undefined **)(puVar11 + -8) = puVar38;
        ppppuVar35 = (undefined1 ****)(puVar11 + -0x10);
        /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4();
        *(int *)(uVar26 + 0x44) = iVar25;
        pdVar17 = (dword *)CONCAT44(0,iVar25 * 4);
        auVar43._8_8_ = &MACH_HEADER.cputype;
        auVar43._0_8_ = pdVar17;
        auVar42._8_8_ = 4;
        auVar42._0_8_ = uVar26;
        puVar38 = &UNK_016ce188;
        puVar11 = puVar11 + -0x30;
        pdVar32 = &MACH_HEADER.cputype;
        unaff_x22 = uVar26;
        goto code_r0x016cdaac;
      }
      piVar18 = (int *)0x0;
      goto code_r0x016ce2a4;
    }
    puVar11 = (undefined1 *)((long)&MACH_HEADER.magic + 2);
    iVar25 = 0;
  }
  else {
    puVar38 = &UNK_01656a4c;
    piVar18 = piVar19;
    uVar30 = param_4;
    unaff_x21 = auVar39._8_8_;
    unaff_x22 = uVar26;
code_r0x016ce2a4:
    iVar25 = (int)param_4;
    puVar10 = puVar14 + -0x30;
    ppppuVar15 = (undefined1 ****)(puVar14 + -0x30);
    *(ulong *)(puVar14 + -0x30) = unaff_x22;
    *(dword **)(puVar14 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar14 + -0x20) = uVar30;
    *(int **)(puVar14 + -0x18) = piVar18;
    *(undefined8 ****)(puVar14 + -0x10) = pppuVar37;
    *(undefined **)(puVar14 + -8) = puVar38;
    ppppuVar35 = (undefined1 ****)(puVar14 + -0x10);
    unaff_x20 = 3;
    unaff_x21 = (dword *)0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100,3,0);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(piVar19);
    if (*(long *)(piVar19 + 10) != 0) {
      if (*(int *)(*(long *)(piVar19 + 10) + 0x18) < 3) {
        uVar30 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,3);
        *(undefined8 *)(piVar19 + 10) = uVar30;
      }
      piVar19[0xc] = 3;
      puVar38 = &UNK_016ce320;
      goto code_r0x016cda04;
    }
    puStack_88 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar44 = func_0x00f78af4();
    piVar18 = piVar19;
code_r0x016ce380:
    piVar19 = auVar44._0_8_;
    puVar16 = (undefined1 *)((long)ppppuVar15 + -0x20);
    puVar10 = (undefined1 *)((long)ppppuVar15 + -0x20);
    *(long *)((long)ppppuVar15 + -0x20) = unaff_x20;
    *(int **)((long)ppppuVar15 + -0x18) = piVar18;
    *(undefined1 *****)((long)ppppuVar15 + -0x10) = ppppuVar35;
    *(undefined **)((long)ppppuVar15 + -8) = puStack_88;
    ppppuVar35 = (undefined1 ****)((long)ppppuVar15 + -0x10);
    if (auVar44._8_4_ < piVar19[0xc]) {
      puVar38 = &UNK_016ce3a4;
code_r0x016cda04:
      *(undefined1 *****)(puVar10 + -0x10) = ppppuVar35;
      *(undefined **)(puVar10 + -8) = puVar38;
      if ((*(long *)(piVar19 + 6) != 0) &&
         (lVar23 = *(long *)(*(long *)(piVar19 + 6) + 0x10), lVar23 != 0)) {
        return (dword *)(ulong)(uint)(*(int *)(lVar23 + 0x18) - piVar19[4]);
      }
      lVar23 = func_0x00f78af4();
      return (dword *)(ulong)*(byte *)(lVar23 + 0x48);
    }
    func_0x00f78a24(0x3d22738);
    piVar18 = (int *)func_0x00f78aec();
    uVar30 = func_0x00f78a24(0x3d6ceb8);
    uVar21 = 0;
    /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(piVar18,uVar30);
    uVar30 = func_0x00f78a24(0x3d56a58);
    func_0x00f78ac0(piVar18,uVar30);
    func_0x00f78af4();
    uVar30 = func_0x00f78b24();
    puVar38 = &FlatBuffers_FlatBufferBuilder__AddBool;
    auVar39 = func_0x00f78ac0(uVar30,0);
    puVar11 = auVar39._8_8_;
    auVar40._8_8_ = uVar21;
    auVar40._0_8_ = auVar39._0_8_;
  }
  pdVar17 = auVar40._0_8_;
  auVar43._8_8_ = puVar11;
  auVar43._0_8_ = pdVar17;
  *(ulong *)(puVar16 + -0x30) = unaff_x22;
  *(dword **)(puVar16 + -0x28) = unaff_x21;
  *(long *)(puVar16 + -0x20) = unaff_x20;
  *(int **)(puVar16 + -0x18) = piVar18;
  *(undefined1 *****)(puVar16 + -0x10) = ppppuVar35;
  *(undefined **)(puVar16 + -8) = puVar38;
  ppppuVar35 = (undefined1 ****)(puVar16 + -0x10);
  if ((auVar40._8_4_ == iVar25) && (*(char *)(pdVar17 + 0x12) == '\0')) {
    return pdVar17;
  }
  auVar42._8_8_ = 1;
  auVar42._0_8_ = pdVar17;
  pdVar17 = (dword *)0x0;
  puVar38 = &UNK_016ce46c;
  puVar11 = puVar16 + -0x30;
  pdVar32 = auVar40._8_8_;
code_r0x016cdaac:
  do {
    pdVar31 = auVar43._0_8_;
    pdVar28 = auVar42._0_8_;
    puVar9 = puVar11 + -0x30;
    *(ulong *)(puVar11 + -0x30) = unaff_x22;
    *(dword **)(puVar11 + -0x28) = pdVar32;
    *(undefined1 (*) [16])(puVar11 + -0x20) = auVar43;
    *(undefined1 *****)(puVar11 + -0x10) = ppppuVar35;
    *(undefined **)(puVar11 + -8) = puVar38;
    iVar25 = auVar42._8_4_;
    if ((int)pdVar28[8] < iVar25) {
      pdVar28[8] = iVar25;
    }
    if ((*(long *)(pdVar28 + 6) != 0) &&
       (lVar23 = *(long *)(*(long *)(pdVar28 + 6) + 0x10), lVar23 != 0)) {
      uVar3 = *(uint *)(lVar23 + 0x18);
      dVar4 = pdVar28[4];
      uVar2 = dVar4 - (uVar3 + (int)pdVar17) & iVar25 - 1U;
      pdVar31 = (dword *)(ulong)uVar2;
      uVar1 = (int)pdVar17 + iVar25 + uVar2;
      unaff_x22 = (ulong)uVar1;
      pdVar29 = pdVar28;
      while (pdVar32 = (dword *)(ulong)uVar3, (int)dVar4 < (int)uVar1) {
        pdVar29 = (dword *)/*FlatBuffers.FlatBufferBuilder$$GrowBuffer*/ func_0x016cda78(pdVar28);
        if ((*(long *)(pdVar28 + 6) == 0) ||
           (lVar23 = *(long *)(*(long *)(pdVar28 + 6) + 0x10), lVar23 == 0)) goto code_r0x016cdb68;
        iVar25 = pdVar28[4] - uVar3;
        uVar3 = *(uint *)(lVar23 + 0x18);
        dVar4 = iVar25 + uVar3;
        pdVar28[4] = dVar4;
      }
      if ((int)uVar2 < 1) {
        return pdVar29;
      }
      uVar30 = *(undefined8 *)*(undefined1 (*) [16])(puVar11 + -0x20);
      uVar21 = *(undefined8 *)(puVar11 + -0x18);
      auVar43 = *(undefined1 (*) [16])(puVar11 + -0x20);
      unaff_x22 = *(ulong *)(puVar11 + -0x30);
      pdVar32 = *(dword **)(puVar11 + -0x28);
      *(undefined8 *)(puVar11 + -0x10) = *(undefined8 *)(puVar11 + -0x10);
      *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
      pdVar29 = *(dword **)(pdVar28 + 6);
      uVar2 = pdVar28[4] - uVar2;
      auVar39._8_4_ = uVar2;
      auVar39._0_8_ = pdVar29;
      auVar39._12_4_ = 0;
      pdVar28[4] = uVar2;
      if (pdVar29 != (dword *)0x0) {
        *(ulong *)(puVar11 + -0x30) = unaff_x22;
        *(dword **)(puVar11 + -0x28) = pdVar32;
        *(undefined8 *)(puVar11 + -0x20) = uVar30;
        *(undefined8 *)(puVar11 + -0x18) = uVar21;
        *(undefined8 *)(puVar11 + -0x10) = *(undefined8 *)(puVar11 + -0x10);
        *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
        pppuVar33 = (undefined1 ***)(puVar11 + -0x10);
        puVar38 = &UNK_016cc908;
        pdVar17 = (dword *)0x0;
        unaff_x21 = pdVar31;
        unaff_x22 = (ulong)uVar2;
        goto code_r0x016cc7a4;
      }
      lVar23 = func_0x00f78af4();
      ppppuVar35 = (undefined1 ****)(puVar11 + -0x20);
      *(undefined1 **)(puVar11 + -0x20) = puVar11 + -0x10;
      *(undefined **)(puVar11 + -0x18) = &FlatBuffers_FlatBufferBuilder__GrowBuffer;
      if ((*(long *)(lVar23 + 0x18) != 0) &&
         (plVar20 = *(long **)(*(long *)(lVar23 + 0x18) + 0x10), plVar20 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016cdaa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar17 = (dword *)(**(code **)(*plVar20 + 0x178))
                                     (plVar20,(int)plVar20[3] << 1,*(undefined8 *)(*plVar20 + 0x180)
                                     );
        return pdVar17;
      }
      puVar38 = &FlatBuffers_FlatBufferBuilder__Prep;
      auVar42 = func_0x00f78af4();
      puVar11 = puVar11 + -0x20;
      goto code_r0x016cdaac;
    }
code_r0x016cdb68:
    auVar39 = func_0x00f78af4();
    pdVar17 = auVar39._8_8_;
    lVar23 = auVar39._0_8_;
    *(undefined1 **)(puVar11 + -0x40) = puVar11 + -0x10;
    *(undefined **)(puVar11 + -0x38) = &FlatBuffers_FlatBufferBuilder__PutBool;
    unaff_x21 = *(dword **)(lVar23 + 0x18);
    uVar1 = *(int *)(lVar23 + 0x10) - 1;
    *(uint *)(lVar23 + 0x10) = uVar1;
    if (unaff_x21 != (dword *)0x0) {
      puVar12 = puVar11 + -0x30;
      uVar30 = *(undefined8 *)(puVar11 + -0x40);
      uVar21 = *(undefined8 *)(puVar11 + -0x38);
FlatBuffers_ByteBuffer__PutByte:
      pdVar29 = (dword *)(ulong)uVar1;
      auVar39._8_4_ = uVar1;
      auVar39._0_8_ = unaff_x21;
      auVar39._12_4_ = 0;
      puVar9 = puVar12 + -0x30;
      *(ulong *)(puVar12 + -0x30) = unaff_x22;
      *(dword **)(puVar12 + -0x28) = pdVar32;
      *(dword **)(puVar12 + -0x20) = pdVar31;
      *(dword **)(puVar12 + -0x18) = pdVar28;
      *(undefined8 *)(puVar12 + -0x10) = uVar30;
      *(undefined8 *)(puVar12 + -8) = uVar21;
      pppuVar33 = (undefined1 ***)(puVar12 + -0x10);
      pdVar31 = (dword *)((long)&MACH_HEADER.magic + 1);
      puVar38 = &UNK_016cc89c;
      goto code_r0x016cc7a4;
    }
    auVar39 = func_0x00f78af4();
    pdVar27 = auVar39._8_8_;
    lVar23 = auVar39._0_8_;
    *(undefined1 **)(puVar11 + -0x50) = puVar11 + -0x40;
    *(undefined **)(puVar11 + -0x48) = &FlatBuffers_FlatBufferBuilder__PutSbyte;
    iVar25 = *(int *)(lVar23 + 0x10) + -1;
    auVar39._8_4_ = iVar25;
    auVar39._0_8_ = *(long *)(lVar23 + 0x18);
    auVar39._12_4_ = 0;
    *(int *)(lVar23 + 0x10) = iVar25;
    if (*(long *)(lVar23 + 0x18) != 0) {
      puVar13 = puVar11 + -0x40;
      puVar34 = *(undefined1 **)(puVar11 + -0x50);
      puVar38 = *(undefined **)(puVar11 + -0x48);
      unaff_x21 = pdVar32;
      goto code_r0x016cc810;
    }
    auVar39 = func_0x00f78af4();
    pdVar17 = auVar39._8_8_;
    lVar23 = auVar39._0_8_;
    *(undefined1 **)(puVar11 + -0x60) = puVar11 + -0x50;
    *(undefined **)(puVar11 + -0x58) = &FlatBuffers_FlatBufferBuilder__PutByte;
    unaff_x21 = *(dword **)(lVar23 + 0x18);
    uVar1 = *(int *)(lVar23 + 0x10) - 1;
    *(uint *)(lVar23 + 0x10) = uVar1;
    if (unaff_x21 != (dword *)0x0) {
      puVar12 = puVar11 + -0x50;
      uVar30 = *(undefined8 *)(puVar11 + -0x60);
      uVar21 = *(undefined8 *)(puVar11 + -0x58);
      goto FlatBuffers_ByteBuffer__PutByte;
    }
    auVar39 = func_0x00f78af4();
    pdVar17 = auVar39._8_8_;
    lVar23 = auVar39._0_8_;
    puVar9 = puVar11 + -0x90;
    *(ulong *)(puVar11 + -0x90) = unaff_x22;
    *(dword **)(puVar11 + -0x88) = pdVar32;
    *(dword **)(puVar11 + -0x80) = pdVar31;
    *(dword **)(puVar11 + -0x78) = pdVar28;
    *(undefined1 **)(puVar11 + -0x70) = puVar11 + -0x60;
    *(undefined **)(puVar11 + -0x68) = &FlatBuffers_FlatBufferBuilder__PutShort;
    pppuVar33 = (undefined1 ***)(puVar11 + -0x70);
    pdVar29 = *(dword **)(lVar23 + 0x18);
    uVar1 = *(int *)(lVar23 + 0x10) - 2;
    auVar39._8_4_ = uVar1;
    auVar39._0_8_ = pdVar29;
    auVar39._12_4_ = 0;
    *(uint *)(lVar23 + 0x10) = uVar1;
    if (pdVar29 != (dword *)0x0) {
      pdVar31 = (dword *)((long)&MACH_HEADER.magic + 2);
      puVar38 = &UNK_016cdc34;
      unaff_x21 = (dword *)(ulong)uVar1;
      goto code_r0x016cc7a4;
    }
    auVar39 = func_0x00f78af4();
    pdVar17 = auVar39._8_8_;
    lVar23 = auVar39._0_8_;
    puVar9 = puVar11 + -0xc0;
    *(ulong *)(puVar11 + -0xc0) = unaff_x22;
    *(dword **)(puVar11 + -0xb8) = (dword *)(ulong)uVar1;
    *(undefined8 *)(puVar11 + -0xb0) = 0;
    *(dword **)(puVar11 + -0xa8) = pdVar28;
    *(undefined1 ****)(puVar11 + -0xa0) = pppuVar33;
    *(undefined **)(puVar11 + -0x98) = &FlatBuffers_FlatBufferBuilder__PutUshort;
    pppuVar33 = (undefined1 ***)(puVar11 + -0xa0);
    pdVar29 = *(dword **)(lVar23 + 0x18);
    uVar1 = *(int *)(lVar23 + 0x10) - 2;
    unaff_x21 = (dword *)(ulong)uVar1;
    auVar39._8_4_ = uVar1;
    auVar39._0_8_ = pdVar29;
    auVar39._12_4_ = 0;
    *(uint *)(lVar23 + 0x10) = uVar1;
    if (pdVar29 != (dword *)0x0) {
      pdVar31 = (dword *)((long)&MACH_HEADER.magic + 2);
      puVar38 = &UNK_016cdc90;
      goto code_r0x016cc7a4;
    }
    auVar39 = func_0x00f78af4();
    pdVar17 = auVar39._8_8_;
    lVar23 = auVar39._0_8_;
    puVar9 = puVar11 + -0xf0;
    *(ulong *)(puVar11 + -0xf0) = unaff_x22;
    *(dword **)(puVar11 + -0xe8) = unaff_x21;
    *(undefined8 *)(puVar11 + -0xe0) = 0;
    *(dword **)(puVar11 + -0xd8) = pdVar28;
    *(undefined1 ****)(puVar11 + -0xd0) = pppuVar33;
    *(undefined **)(puVar11 + -200) = &FlatBuffers_FlatBufferBuilder__PutInt;
    pppuVar33 = (undefined1 ***)(puVar11 + -0xd0);
    pdVar29 = *(dword **)(lVar23 + 0x18);
    uVar1 = *(int *)(lVar23 + 0x10) - 4;
    unaff_x21 = (dword *)(ulong)uVar1;
    auVar39._8_4_ = uVar1;
    auVar39._0_8_ = pdVar29;
    auVar39._12_4_ = 0;
    *(uint *)(lVar23 + 0x10) = uVar1;
    if (pdVar29 != (dword *)0x0) {
      pdVar31 = &MACH_HEADER.cputype;
      puVar38 = &UNK_016cdcec;
      goto code_r0x016cc7a4;
    }
    auVar39 = func_0x00f78af4();
    pdVar17 = auVar39._8_8_;
    lVar23 = auVar39._0_8_;
    puVar9 = puVar11 + -0x120;
    *(ulong *)(puVar11 + -0x120) = unaff_x22;
    *(dword **)(puVar11 + -0x118) = unaff_x21;
    *(undefined8 *)(puVar11 + -0x110) = 0;
    *(dword **)(puVar11 + -0x108) = pdVar28;
    *(undefined1 ****)(puVar11 + -0x100) = pppuVar33;
    *(undefined **)(puVar11 + -0xf8) = &FlatBuffers_FlatBufferBuilder__PutUint;
    pppuVar33 = (undefined1 ***)(puVar11 + -0x100);
    pdVar29 = *(dword **)(lVar23 + 0x18);
    uVar1 = *(int *)(lVar23 + 0x10) - 4;
    unaff_x21 = (dword *)(ulong)uVar1;
    auVar39._8_4_ = uVar1;
    auVar39._0_8_ = pdVar29;
    auVar39._12_4_ = 0;
    *(uint *)(lVar23 + 0x10) = uVar1;
    if (pdVar29 != (dword *)0x0) {
      pdVar31 = &MACH_HEADER.cputype;
      puVar38 = &UNK_016cdd48;
      goto code_r0x016cc7a4;
    }
    auVar39 = func_0x00f78af4();
    pdVar17 = auVar39._8_8_;
    lVar23 = auVar39._0_8_;
    puVar9 = puVar11 + -0x150;
    *(ulong *)(puVar11 + -0x150) = unaff_x22;
    *(dword **)(puVar11 + -0x148) = unaff_x21;
    *(undefined8 *)(puVar11 + -0x140) = 0;
    *(dword **)(puVar11 + -0x138) = pdVar28;
    *(undefined1 ****)(puVar11 + -0x130) = pppuVar33;
    *(undefined **)(puVar11 + -0x128) = &FlatBuffers_FlatBufferBuilder__PutLong;
    pppuVar33 = (undefined1 ***)(puVar11 + -0x130);
    pdVar29 = *(dword **)(lVar23 + 0x18);
    uVar1 = *(int *)(lVar23 + 0x10) - 8;
    unaff_x21 = (dword *)(ulong)uVar1;
    auVar39._8_4_ = uVar1;
    auVar39._0_8_ = pdVar29;
    auVar39._12_4_ = 0;
    *(uint *)(lVar23 + 0x10) = uVar1;
    if (pdVar29 != (dword *)0x0) {
      pdVar31 = &MACH_HEADER.cpusubtype;
      puVar38 = &UNK_016cdda4;
      goto code_r0x016cc7a4;
    }
    auVar39 = func_0x00f78af4();
    pdVar17 = auVar39._8_8_;
    lVar23 = auVar39._0_8_;
    puVar9 = puVar11 + -0x180;
    *(ulong *)(puVar11 + -0x180) = unaff_x22;
    *(dword **)(puVar11 + -0x178) = unaff_x21;
    *(undefined8 *)(puVar11 + -0x170) = 0;
    *(dword **)(puVar11 + -0x168) = pdVar28;
    *(undefined1 ****)(puVar11 + -0x160) = pppuVar33;
    *(undefined **)(puVar11 + -0x158) = &FlatBuffers_FlatBufferBuilder__PutUlong;
    pppuVar33 = (undefined1 ***)(puVar11 + -0x160);
    pdVar29 = *(dword **)(lVar23 + 0x18);
    uVar1 = *(int *)(lVar23 + 0x10) - 8;
    unaff_x21 = (dword *)(ulong)uVar1;
    auVar39._8_4_ = uVar1;
    auVar39._0_8_ = pdVar29;
    auVar39._12_4_ = 0;
    *(uint *)(lVar23 + 0x10) = uVar1;
    if (pdVar29 != (dword *)0x0) {
      pdVar31 = &MACH_HEADER.cpusubtype;
      puVar38 = &UNK_016cde00;
      goto code_r0x016cc7a4;
    }
    lVar23 = func_0x00f78af4();
    *(undefined1 ****)(puVar11 + -400) = pppuVar33;
    *(undefined **)(puVar11 + -0x188) = &FlatBuffers_FlatBufferBuilder__PutFloat;
    pdVar29 = *(dword **)(lVar23 + 0x18);
    uVar1 = *(int *)(lVar23 + 0x10) - 4;
    pdVar17 = (dword *)(ulong)uVar1;
    auVar39._8_4_ = uVar1;
    auVar39._0_8_ = pdVar29;
    auVar39._12_4_ = 0;
    *(uint *)(lVar23 + 0x10) = uVar1;
    if (pdVar29 != (dword *)0x0) {
      puVar9 = puVar11 + -0x1b0;
      *(undefined8 *)(puVar11 + -0x1b0) = unaff_d9;
      *(undefined8 *)(puVar11 + -0x1a8) = unaff_d8;
      *(undefined8 *)(puVar11 + -0x1a0) = 0;
      *(dword **)(puVar11 + -0x198) = pdVar28;
      *(undefined8 *)(puVar11 + -400) = *(undefined8 *)(puVar11 + -400);
      *(undefined8 *)(puVar11 + -0x188) = *(undefined8 *)(puVar11 + -0x188);
      pppuVar33 = (undefined1 ***)(puVar11 + -400);
      pdVar31 = &MACH_HEADER.cputype;
      puVar38 = &UNK_016ccba4;
      goto code_r0x016cc7a4;
    }
    lVar23 = func_0x00f78af4();
    *(undefined1 **)(puVar11 + -0x1a0) = puVar11 + -400;
    *(undefined **)(puVar11 + -0x198) = &FlatBuffers_FlatBufferBuilder__PutDouble;
    pdVar29 = *(dword **)(lVar23 + 0x18);
    uVar1 = *(int *)(lVar23 + 0x10) - 8;
    pdVar17 = (dword *)(ulong)uVar1;
    auVar39._8_4_ = uVar1;
    auVar39._0_8_ = pdVar29;
    auVar39._12_4_ = 0;
    *(uint *)(lVar23 + 0x10) = uVar1;
    if (pdVar29 != (dword *)0x0) break;
    auVar43 = func_0x00f78af4();
    *(undefined8 *)(puVar11 + -0x1c0) = 0;
    *(dword **)(puVar11 + -0x1b8) = pdVar28;
    *(undefined1 **)(puVar11 + -0x1b0) = puVar11 + -0x1a0;
    *(undefined **)(puVar11 + -0x1a8) = &FlatBuffers_FlatBufferBuilder__AddBool;
    ppppuVar35 = (undefined1 ****)(puVar11 + -0x1b0);
    auVar42._8_8_ = 1;
    auVar42._0_8_ = auVar43._0_8_;
    pdVar17 = (dword *)0x0;
    puVar38 = &UNK_016cde9c;
    puVar11 = puVar11 + -0x1c0;
    pdVar32 = unaff_x21;
  } while( true );
  puVar9 = puVar11 + -0x1c0;
  *(undefined8 *)(puVar11 + -0x1c0) = unaff_d9;
  *(undefined8 *)(puVar11 + -0x1b8) = unaff_d8;
  *(undefined8 *)(puVar11 + -0x1b0) = 0;
  *(dword **)(puVar11 + -0x1a8) = pdVar28;
  *(undefined8 *)(puVar11 + -0x1a0) = *(undefined8 *)(puVar11 + -0x1a0);
  *(undefined8 *)(puVar11 + -0x198) = *(undefined8 *)(puVar11 + -0x198);
  pppuVar33 = (undefined1 ***)(puVar11 + -0x1a0);
  pdVar31 = &MACH_HEADER.cpusubtype;
  puVar38 = &UNK_016ccc34;
  goto code_r0x016cc7a4;
}



// ============================================================
// RVA: 0x16569c8 | Core.Networking.HostStanding.get_HasEventEndTimeStamp
// ============================================================

/* WARNING: Possible PIC construction at 0x01656a00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01656a48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01656a60: Changing call to branch */
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
/* WARNING: Possible PIC construction at 0x01656b90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01656c54: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x01656c58) */
/* WARNING: Removing unreachable block (ram,0x016ce224) */
/* WARNING: Removing unreachable block (ram,0x01656b94) */
/* WARNING: Removing unreachable block (ram,0x01656ba0) */
/* WARNING: Removing unreachable block (ram,0x01656ba8) */
/* WARNING: Removing unreachable block (ram,0x01656bc4) */
/* WARNING: Removing unreachable block (ram,0x01656bd0) */
/* WARNING: Removing unreachable block (ram,0x01656bdc) */
/* WARNING: Removing unreachable block (ram,0x016ce20c) */
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
/* WARNING: Removing unreachable block (ram,0x01656a64) */
/* WARNING: Removing unreachable block (ram,0x01656a4c) */
/* WARNING: Removing unreachable block (ram,0x01656a04) */
/* WARNING: Removing unreachable block (ram,0x016ce69c) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

dword * Core_Networking_HostStanding__get_HasEventEndTimeStamp
                  (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  dword dVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined8 ***pppuVar14;
  undefined1 *puVar15;
  dword *pdVar16;
  int *piVar17;
  long *plVar18;
  dword *pdVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  int iVar24;
  ulong uVar25;
  dword *pdVar26;
  dword *pdVar27;
  int *piVar28;
  undefined8 unaff_x20;
  undefined8 uVar29;
  dword *pdVar30;
  dword *unaff_x21;
  dword *pdVar31;
  ulong unaff_x22;
  undefined8 ****ppppuVar32;
  undefined1 *puVar33;
  undefined8 ***pppuVar34;
  undefined *puVar35;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [12];
  long alStack_130 [2];
  undefined8 ***apppuStack_120 [2];
  undefined8 ***pppuStack_f0;
  undefined *puStack_e8;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  undefined *puStack_68;
  undefined8 **ppuStack_60;
  undefined *puStack_58;
  undefined8 **ppuStack_30;
  undefined *puStack_28;
  
  uVar25 = 0;
  pdVar16 = (dword *)/*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,8);
  if ((int)pdVar16 == 0) {
    return pdVar16;
  }
  pdVar27 = *(dword **)(param_1 + 2);
  ppuStack_30 = (undefined8 **)&stack0xfffffffffffffff0;
  if (pdVar27 != (dword *)0x0) {
    uVar1 = *param_1 + (int)pdVar16;
    pdVar16 = (dword *)(ulong)uVar1;
    auVar36._8_4_ = uVar1;
    auVar36._0_8_ = pdVar27;
    auVar36._12_4_ = 0;
    puVar8 = &stack0xffffffffffffffc0;
    puStack_28 = (undefined *)0x1656a04;
    ppppuVar32 = (undefined8 ****)&ppuStack_30;
    pdVar30 = (dword *)((long)&MACH_HEADER.magic + 1);
    puVar35 = &UNK_016ccd18;
    goto code_r0x016cc7a4;
  }
  auVar36 = func_0x00f78af4();
  piVar17 = auVar36._0_8_;
  puVar13 = &stack0xffffffffffffffb0;
  puStack_28 = &Core_Networking_HostStanding__CreateHostStanding;
  pppuVar34 = &ppuStack_30;
  if (piVar17 == (int *)0x0) {
    auVar36 = func_0x00f78af4();
    pdVar31 = auVar36._8_8_;
    pdVar16 = auVar36._0_8_;
    ppuStack_60 = pppuVar34;
    if (pdVar16 != (dword *)0x0) {
      puVar10 = &stack0xffffffffffffff80;
      puStack_58 = &Core_Networking_HostStanding__AddForceEventEndTimeStamp;
      pppuVar34 = &ppuStack_60;
      auVar40._8_8_ = (undefined1 *)((long)&MACH_HEADER.magic + 1);
      auVar40._0_8_ = pdVar16;
      if ((auVar36._8_4_ == 0) && (*(char *)(pdVar16 + 0x12) == '\0')) {
        return pdVar16;
      }
      auVar39._8_8_ = 4;
      auVar39._0_8_ = pdVar16;
      pdVar16 = (dword *)0x0;
      puVar35 = &UNK_016ce69c;
      goto code_r0x016cdaac;
    }
    pppuVar34 = &ppuStack_60;
    puStack_58 = &Core_Networking_HostStanding__AddForceEventEndTimeStamp;
    auVar36 = func_0x00f78af4();
    pdVar16 = auVar36._0_8_;
    if (pdVar16 != (dword *)0x0) {
      iVar24 = 0;
      puStack_68 = &Core_Networking_HostStanding__AddStandings;
      auVar41._8_4_ = 0;
      auVar41._0_8_ = pdVar16;
      if ((auVar36._8_4_ == 0) && (*(char *)(pdVar16 + 0x12) == '\0')) {
        return pdVar16;
      }
      /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(pdVar16,auVar36._8_8_,auVar36._8_8_,0,0);
      pppuVar14 = &ppuStack_60;
      goto code_r0x016ce380;
    }
    puVar15 = &stack0xffffffffffffff90;
    pppuVar34 = (undefined8 ***)&stack0xffffffffffffff90;
    puVar35 = &Core_Networking_HostStanding__AddHasEventEndTimeStamp;
    auVar37 = func_0x00f78af4();
    if (auVar37._0_8_ == 0) {
      lVar22 = func_0x00f78af4();
      puVar13 = &stack0xffffffffffffff60;
      puStack_88 = &Core_Networking_HostStanding__EndHostStanding;
      pppuVar34 = (undefined8 ***)&ppuStack_90;
      uVar29 = 0x3eb5000;
      ppuStack_90 = (undefined1 **)&stack0xffffffffffffff80;
      if ((bRam0000000003eb5808 & 1) == 0) {
        ppuStack_90 = (undefined1 **)&stack0xffffffffffffff80;
        func_0x00f78a20(0x3d3f110);
        bRam0000000003eb5808 = 1;
      }
      if (lVar22 != 0) {
        pppuVar34 = (undefined8 ***)&ppuStack_90;
        auVar40._8_8_ = lVar22;
        auVar40._0_8_ = 0x3eb5000;
        if ((bRam0000000003eb5cd8 & 1) == 0) {
          func_0x00f78a20(0x3d1f100,0);
          bRam0000000003eb5cd8 = 1;
        }
        pdVar31 = unaff_x21;
        if (*(int *)(lVar22 + 0x30) < 0) {
          func_0x00f78a24(0x3d22a38);
          puVar35 = (undefined *)func_0x00f78aec();
          uVar29 = func_0x00f78a24(0x3d6cea8);
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(puVar35,uVar29);
          uVar29 = func_0x00f78a24(0x3d56a30);
          auVar41 = func_0x00f78ac0(puVar35,uVar29);
          pppuStack_f0 = (undefined8 ****)0x3eb5000;
          pppuVar34 = (undefined8 ***)&stack0xffffffffffffff20;
          pdVar19 = *(dword **)(auVar41._0_8_ + 0x18);
          puStack_e8 = puVar35;
          if ((pdVar19 != (dword *)0x0) && (*(long *)(pdVar19 + 4) != 0)) {
            uVar1 = *(int *)(*(long *)(pdVar19 + 4) + 0x18) - auVar41._8_4_;
            pdVar16 = (dword *)(ulong)uVar1;
            auVar36._8_4_ = uVar1;
            auVar36._0_8_ = pdVar19;
            auVar36._12_4_ = 0;
            puVar8 = &stack0xfffffffffffffeb0;
            apppuStack_120[1] = (undefined8 ***)&UNK_016cee20;
            ppppuVar32 = apppuStack_120;
            pdVar27 = &MACH_HEADER.cputype;
            unaff_x22 = 0x3d201a0;
            apppuStack_120[0] = pppuVar34;
            if ((bRam0000000003eb5cd0 & 1) == 0) {
              func_0x00f78a20(0x3d201a0);
              bRam0000000003eb5cd0 = 1;
            }
            pdVar30 = &MACH_HEADER.cputype;
            puVar35 = &UNK_016cc68c;
            unaff_x21 = pdVar19;
            goto code_r0x016cc7a4;
          }
          func_0x00f78af4();
          uVar29 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&stack0xfffffffffffffefc,0);
          uVar20 = func_0x00f78a24(0x3d6ce88);
          uVar21 = func_0x00f78a24(0x3d66338);
          lVar22 = /*System.String$$Concat*/ func_0x029be39c(uVar20,uVar29,uVar21,0);
          func_0x00f78a24(0x3d22a38);
          uVar29 = func_0x00f78aec();
          uVar21 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar29,lVar22);
          uVar20 = func_0x00f78a24(0x3d56a50);
          puVar35 = &FlatBuffers_FlatBufferBuilder__Finish;
          auVar36 = func_0x00f78ac0(uVar29,uVar20);
          puVar10 = &stack0xfffffffffffffef0;
          while( true ) {
            uVar20 = auVar36._8_8_;
            lVar23 = auVar36._0_8_;
            auVar40._8_8_ = lVar23;
            auVar40._0_8_ = uVar20;
            auVar7._8_8_ = lVar23;
            auVar7._0_8_ = uVar20;
            *(undefined8 *)(puVar10 + -0x20) = uVar29;
            *(long *)(puVar10 + -0x18) = lVar22;
            *(undefined8 ****)(puVar10 + -0x10) = pppuVar34;
            *(undefined **)(puVar10 + -8) = puVar35;
            pppuVar34 = (undefined8 ***)(puVar10 + -0x10);
            uVar5 = *(undefined4 *)(lVar23 + 0x20);
            auVar39._8_4_ = uVar5;
            auVar39._0_8_ = lVar23;
            auVar39._12_4_ = 0;
            lVar22 = lVar23;
            if ((int)uVar21 == 0) {
              lVar22 = 0;
              uVar5 = 0;
            }
            auVar6._8_4_ = uVar5;
            auVar6._0_8_ = lVar22;
            auVar6._12_4_ = 0;
            if ((int)uVar21 == 0) {
              pdVar16 = &MACH_HEADER.cputype;
              puVar35 = &UNK_016cef64;
              puVar10 = puVar10 + -0x20;
              goto code_r0x016cdaac;
            }
            if (lVar22 != 0) break;
            puVar35 = &FlatBuffers_FlatBufferBuilder__Finish;
            auVar36 = func_0x00f78af4();
            uVar21 = 0;
            puVar10 = puVar10 + -0x20;
            lVar22 = lVar23;
            uVar29 = uVar20;
          }
          pdVar16 = &MACH_HEADER.cpusubtype;
          puVar35 = &UNK_016cef10;
          puVar10 = puVar10 + -0x20;
          auVar39 = auVar6;
          auVar40 = auVar7;
        }
        else {
          auVar39._8_8_ = 4;
          auVar39._0_8_ = lVar22;
          pdVar16 = (dword *)0x0;
          puVar35 = &UNK_016cea78;
          puVar10 = &stack0xffffffffffffff30;
        }
        goto code_r0x016cdaac;
      }
      puVar35 = &Core_Networking_HostStanding__StartHostStanding;
      piVar17 = (int *)func_0x00f78af4();
      if (piVar17 == (int *)0x0) {
        auVar38 = func_0x00f78af4();
        lVar22 = auVar38._0_8_;
        if ((auVar38._8_8_ == 0) || (lVar22 == 0)) {
          auVar38 = func_0x00f78af4();
          lVar23 = auVar38._8_8_;
          lVar22 = auVar38._0_8_;
          puVar10 = &stack0xfffffffffffffef0;
          puStack_e8 = &Core_Networking_HostStanding__CreateStandingsVectorBlock;
          ppppuVar32 = &pppuStack_f0;
          unaff_x21 = (dword *)0x3eb5000;
          pppuStack_f0 = (undefined8 ***)&stack0xffffffffffffff40;
          if ((bRam0000000003eb5807 & 1) == 0) {
            func_0x00f78a20(0x3d569a8);
            bRam0000000003eb5807 = 1;
          }
          if ((lVar23 == 0) || (lVar22 == 0)) {
            puVar35 = &Core_Networking_HostStanding__StartStandingsVector;
            auVar41 = func_0x00f78af4();
            iVar24 = auVar41._8_4_;
            auVar38._8_8_ = lVar23;
            auVar38._0_8_ = auVar41._0_8_;
            if (auVar41._0_8_ == 0) {
              apppuStack_120[1] =
                   (undefined8 ***)&Core_Networking_HostStanding__StartStandingsVector;
              apppuStack_120[0] = ppppuVar32;
              lVar22 = func_0x00f78af4();
              return *(dword **)(lVar22 + 8);
            }
          }
          else {
            unaff_x21 = (dword *)0x3d56000;
            iVar24 = *(int *)(lVar23 + 0x18);
            puVar35 = &UNK_01656c58;
            puVar10 = &stack0xfffffffffffffef0;
          }
        }
        else {
          iVar24 = *(int *)(auVar38._8_8_ + 0x18);
          puVar35 = &UNK_01656b94;
          puVar10 = &stack0xffffffffffffff20;
          ppppuVar32 = (undefined8 ****)&stack0xffffffffffffff40;
        }
        uVar25 = auVar38._0_8_;
        *(ulong *)(puVar10 + -0x30) = unaff_x22;
        *(dword **)(puVar10 + -0x28) = unaff_x21;
        *(long *)(puVar10 + -0x20) = auVar38._8_8_;
        *(long *)(puVar10 + -0x18) = lVar22;
        *(undefined8 *****)(puVar10 + -0x10) = ppppuVar32;
        *(undefined **)(puVar10 + -8) = puVar35;
        pppuVar34 = (undefined8 ***)(puVar10 + -0x10);
        /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4();
        *(int *)(uVar25 + 0x44) = iVar24;
        pdVar16 = (dword *)CONCAT44(0,iVar24 * 4);
        auVar40._8_8_ = &MACH_HEADER.cputype;
        auVar40._0_8_ = pdVar16;
        auVar39._8_8_ = 4;
        auVar39._0_8_ = uVar25;
        puVar35 = &UNK_016ce188;
        puVar10 = puVar10 + -0x30;
        pdVar31 = &MACH_HEADER.cputype;
        unaff_x22 = uVar25;
        goto code_r0x016cdaac;
      }
      piVar28 = (int *)0x0;
      goto code_r0x016ce2a4;
    }
    puVar10 = (undefined1 *)((long)&MACH_HEADER.magic + 2);
    iVar24 = 0;
  }
  else {
    puVar35 = &UNK_01656a4c;
    piVar28 = piVar17;
    uVar29 = param_4;
    unaff_x21 = auVar36._8_8_;
    unaff_x22 = uVar25;
code_r0x016ce2a4:
    iVar24 = (int)param_4;
    puVar9 = puVar13 + -0x30;
    pppuVar14 = (undefined8 ***)(puVar13 + -0x30);
    *(ulong *)(puVar13 + -0x30) = unaff_x22;
    *(dword **)(puVar13 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar13 + -0x20) = uVar29;
    *(int **)(puVar13 + -0x18) = piVar28;
    *(undefined8 ****)(puVar13 + -0x10) = pppuVar34;
    *(undefined **)(puVar13 + -8) = puVar35;
    pppuVar34 = (undefined8 ***)(puVar13 + -0x10);
    unaff_x20 = 3;
    unaff_x21 = (dword *)0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100,3,0);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(piVar17);
    if (*(long *)(piVar17 + 10) != 0) {
      if (*(int *)(*(long *)(piVar17 + 10) + 0x18) < 3) {
        uVar29 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,3);
        *(undefined8 *)(piVar17 + 10) = uVar29;
      }
      piVar17[0xc] = 3;
      puVar35 = &UNK_016ce320;
      goto code_r0x016cda04;
    }
    puStack_68 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar41 = func_0x00f78af4();
    param_1 = piVar17;
code_r0x016ce380:
    piVar17 = auVar41._0_8_;
    puVar15 = (undefined1 *)((long)pppuVar14 + -0x20);
    puVar9 = (undefined1 *)((long)pppuVar14 + -0x20);
    *(undefined8 *)((long)pppuVar14 + -0x20) = unaff_x20;
    *(int **)((long)pppuVar14 + -0x18) = param_1;
    *(undefined8 ****)((long)pppuVar14 + -0x10) = pppuVar34;
    *(undefined **)((long)pppuVar14 + -8) = puStack_68;
    pppuVar34 = (undefined8 ***)((long)pppuVar14 + -0x10);
    if (auVar41._8_4_ < piVar17[0xc]) {
      puVar35 = &UNK_016ce3a4;
code_r0x016cda04:
      *(undefined8 ****)(puVar9 + -0x10) = pppuVar34;
      *(undefined **)(puVar9 + -8) = puVar35;
      if ((*(long *)(piVar17 + 6) != 0) &&
         (lVar22 = *(long *)(*(long *)(piVar17 + 6) + 0x10), lVar22 != 0)) {
        return (dword *)(ulong)(uint)(*(int *)(lVar22 + 0x18) - piVar17[4]);
      }
      lVar22 = func_0x00f78af4();
      return (dword *)(ulong)*(byte *)(lVar22 + 0x48);
    }
    func_0x00f78a24(0x3d22738);
    param_1 = (int *)func_0x00f78aec();
    uVar29 = func_0x00f78a24(0x3d6ceb8);
    uVar20 = 0;
    /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(param_1,uVar29);
    uVar29 = func_0x00f78a24(0x3d56a58);
    func_0x00f78ac0(param_1,uVar29);
    func_0x00f78af4();
    uVar29 = func_0x00f78b24();
    puVar35 = &FlatBuffers_FlatBufferBuilder__AddBool;
    auVar36 = func_0x00f78ac0(uVar29,0);
    puVar10 = auVar36._8_8_;
    auVar37._8_8_ = uVar20;
    auVar37._0_8_ = auVar36._0_8_;
  }
  pdVar16 = auVar37._0_8_;
  auVar40._8_8_ = puVar10;
  auVar40._0_8_ = pdVar16;
  *(ulong *)(puVar15 + -0x30) = unaff_x22;
  *(dword **)(puVar15 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar15 + -0x20) = unaff_x20;
  *(int **)(puVar15 + -0x18) = param_1;
  *(undefined8 ****)(puVar15 + -0x10) = pppuVar34;
  *(undefined **)(puVar15 + -8) = puVar35;
  pppuVar34 = (undefined8 ***)(puVar15 + -0x10);
  if ((auVar37._8_4_ == iVar24) && (*(char *)(pdVar16 + 0x12) == '\0')) {
    return pdVar16;
  }
  auVar39._8_8_ = 1;
  auVar39._0_8_ = pdVar16;
  pdVar16 = (dword *)0x0;
  puVar35 = &UNK_016ce46c;
  puVar10 = puVar15 + -0x30;
  pdVar31 = auVar37._8_8_;
code_r0x016cdaac:
  do {
    pdVar30 = auVar40._0_8_;
    pdVar19 = auVar39._0_8_;
    puVar8 = puVar10 + -0x30;
    *(ulong *)(puVar10 + -0x30) = unaff_x22;
    *(dword **)(puVar10 + -0x28) = pdVar31;
    *(undefined1 (*) [16])(puVar10 + -0x20) = auVar40;
    *(undefined8 ****)(puVar10 + -0x10) = pppuVar34;
    *(undefined **)(puVar10 + -8) = puVar35;
    iVar24 = auVar39._8_4_;
    if ((int)pdVar19[8] < iVar24) {
      pdVar19[8] = iVar24;
    }
    if ((*(long *)(pdVar19 + 6) != 0) &&
       (lVar22 = *(long *)(*(long *)(pdVar19 + 6) + 0x10), lVar22 != 0)) {
      uVar3 = *(uint *)(lVar22 + 0x18);
      dVar4 = pdVar19[4];
      uVar2 = dVar4 - (uVar3 + (int)pdVar16) & iVar24 - 1U;
      pdVar30 = (dword *)(ulong)uVar2;
      uVar1 = (int)pdVar16 + iVar24 + uVar2;
      unaff_x22 = (ulong)uVar1;
      pdVar27 = pdVar19;
      while (pdVar31 = (dword *)(ulong)uVar3, (int)dVar4 < (int)uVar1) {
        pdVar27 = (dword *)/*FlatBuffers.FlatBufferBuilder$$GrowBuffer*/ func_0x016cda78(pdVar19);
        if ((*(long *)(pdVar19 + 6) == 0) ||
           (lVar22 = *(long *)(*(long *)(pdVar19 + 6) + 0x10), lVar22 == 0)) goto code_r0x016cdb68;
        iVar24 = pdVar19[4] - uVar3;
        uVar3 = *(uint *)(lVar22 + 0x18);
        dVar4 = iVar24 + uVar3;
        pdVar19[4] = dVar4;
      }
      if ((int)uVar2 < 1) {
        return pdVar27;
      }
      uVar29 = *(undefined8 *)*(undefined1 (*) [16])(puVar10 + -0x20);
      uVar20 = *(undefined8 *)(puVar10 + -0x18);
      auVar40 = *(undefined1 (*) [16])(puVar10 + -0x20);
      uVar25 = *(ulong *)(puVar10 + -0x30);
      pdVar31 = *(dword **)(puVar10 + -0x28);
      *(undefined8 *)(puVar10 + -0x10) = *(undefined8 *)(puVar10 + -0x10);
      *(undefined8 *)(puVar10 + -8) = *(undefined8 *)(puVar10 + -8);
      pdVar27 = *(dword **)(pdVar19 + 6);
      uVar2 = pdVar19[4] - uVar2;
      unaff_x22 = (ulong)uVar2;
      auVar36._8_4_ = uVar2;
      auVar36._0_8_ = pdVar27;
      auVar36._12_4_ = 0;
      pdVar19[4] = uVar2;
      if (pdVar27 != (dword *)0x0) {
        *(ulong *)(puVar10 + -0x30) = uVar25;
        *(dword **)(puVar10 + -0x28) = pdVar31;
        *(undefined8 *)(puVar10 + -0x20) = uVar29;
        *(undefined8 *)(puVar10 + -0x18) = uVar20;
        *(undefined8 *)(puVar10 + -0x10) = *(undefined8 *)(puVar10 + -0x10);
        *(undefined8 *)(puVar10 + -8) = *(undefined8 *)(puVar10 + -8);
        ppppuVar32 = (undefined8 ****)(puVar10 + -0x10);
        puVar35 = &UNK_016cc908;
        pdVar16 = (dword *)0x0;
        unaff_x21 = pdVar30;
        goto code_r0x016cc7a4;
      }
      lVar22 = func_0x00f78af4();
      pppuVar34 = (undefined8 ***)(puVar10 + -0x20);
      *(undefined1 **)(puVar10 + -0x20) = puVar10 + -0x10;
      *(undefined **)(puVar10 + -0x18) = &FlatBuffers_FlatBufferBuilder__GrowBuffer;
      if ((*(long *)(lVar22 + 0x18) != 0) &&
         (plVar18 = *(long **)(*(long *)(lVar22 + 0x18) + 0x10), plVar18 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016cdaa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar16 = (dword *)(**(code **)(*plVar18 + 0x178))
                                     (plVar18,(int)plVar18[3] << 1,*(undefined8 *)(*plVar18 + 0x180)
                                     );
        return pdVar16;
      }
      puVar35 = &FlatBuffers_FlatBufferBuilder__Prep;
      auVar39 = func_0x00f78af4();
      puVar10 = puVar10 + -0x20;
      unaff_x22 = uVar25;
      goto code_r0x016cdaac;
    }
code_r0x016cdb68:
    auVar36 = func_0x00f78af4();
    pdVar16 = auVar36._8_8_;
    lVar22 = auVar36._0_8_;
    *(undefined1 **)(puVar10 + -0x40) = puVar10 + -0x10;
    *(undefined **)(puVar10 + -0x38) = &FlatBuffers_FlatBufferBuilder__PutBool;
    unaff_x21 = *(dword **)(lVar22 + 0x18);
    uVar1 = *(int *)(lVar22 + 0x10) - 1;
    *(uint *)(lVar22 + 0x10) = uVar1;
    if (unaff_x21 != (dword *)0x0) {
      puVar11 = puVar10 + -0x30;
      uVar29 = *(undefined8 *)(puVar10 + -0x40);
      uVar20 = *(undefined8 *)(puVar10 + -0x38);
FlatBuffers_ByteBuffer__PutByte:
      pdVar27 = (dword *)(ulong)uVar1;
      auVar36._8_4_ = uVar1;
      auVar36._0_8_ = unaff_x21;
      auVar36._12_4_ = 0;
      puVar8 = puVar11 + -0x30;
      *(ulong *)(puVar11 + -0x30) = unaff_x22;
      *(dword **)(puVar11 + -0x28) = pdVar31;
      *(dword **)(puVar11 + -0x20) = pdVar30;
      *(dword **)(puVar11 + -0x18) = pdVar19;
      *(undefined8 *)(puVar11 + -0x10) = uVar29;
      *(undefined8 *)(puVar11 + -8) = uVar20;
      ppppuVar32 = (undefined8 ****)(puVar11 + -0x10);
      pdVar30 = (dword *)((long)&MACH_HEADER.magic + 1);
      puVar35 = &UNK_016cc89c;
      goto code_r0x016cc7a4;
    }
    auVar36 = func_0x00f78af4();
    pdVar26 = auVar36._8_8_;
    lVar22 = auVar36._0_8_;
    *(undefined1 **)(puVar10 + -0x50) = puVar10 + -0x40;
    *(undefined **)(puVar10 + -0x48) = &FlatBuffers_FlatBufferBuilder__PutSbyte;
    iVar24 = *(int *)(lVar22 + 0x10) + -1;
    auVar36._8_4_ = iVar24;
    auVar36._0_8_ = *(long *)(lVar22 + 0x18);
    auVar36._12_4_ = 0;
    *(int *)(lVar22 + 0x10) = iVar24;
    if (*(long *)(lVar22 + 0x18) != 0) {
      puVar12 = puVar10 + -0x40;
      puVar33 = *(undefined1 **)(puVar10 + -0x50);
      puVar35 = *(undefined **)(puVar10 + -0x48);
      unaff_x21 = pdVar31;
      goto code_r0x016cc810;
    }
    auVar36 = func_0x00f78af4();
    pdVar16 = auVar36._8_8_;
    lVar22 = auVar36._0_8_;
    *(undefined1 **)(puVar10 + -0x60) = puVar10 + -0x50;
    *(undefined **)(puVar10 + -0x58) = &FlatBuffers_FlatBufferBuilder__PutByte;
    unaff_x21 = *(dword **)(lVar22 + 0x18);
    uVar1 = *(int *)(lVar22 + 0x10) - 1;
    *(uint *)(lVar22 + 0x10) = uVar1;
    if (unaff_x21 != (dword *)0x0) {
      puVar11 = puVar10 + -0x50;
      uVar29 = *(undefined8 *)(puVar10 + -0x60);
      uVar20 = *(undefined8 *)(puVar10 + -0x58);
      goto FlatBuffers_ByteBuffer__PutByte;
    }
    auVar36 = func_0x00f78af4();
    pdVar16 = auVar36._8_8_;
    lVar22 = auVar36._0_8_;
    puVar8 = puVar10 + -0x90;
    *(ulong *)(puVar10 + -0x90) = unaff_x22;
    *(dword **)(puVar10 + -0x88) = pdVar31;
    *(dword **)(puVar10 + -0x80) = pdVar30;
    *(dword **)(puVar10 + -0x78) = pdVar19;
    *(undefined1 **)(puVar10 + -0x70) = puVar10 + -0x60;
    *(undefined **)(puVar10 + -0x68) = &FlatBuffers_FlatBufferBuilder__PutShort;
    ppppuVar32 = (undefined8 ****)(puVar10 + -0x70);
    pdVar27 = *(dword **)(lVar22 + 0x18);
    uVar1 = *(int *)(lVar22 + 0x10) - 2;
    auVar36._8_4_ = uVar1;
    auVar36._0_8_ = pdVar27;
    auVar36._12_4_ = 0;
    *(uint *)(lVar22 + 0x10) = uVar1;
    if (pdVar27 != (dword *)0x0) {
      pdVar30 = (dword *)((long)&MACH_HEADER.magic + 2);
      puVar35 = &UNK_016cdc34;
      unaff_x21 = (dword *)(ulong)uVar1;
      goto code_r0x016cc7a4;
    }
    auVar36 = func_0x00f78af4();
    pdVar16 = auVar36._8_8_;
    lVar22 = auVar36._0_8_;
    puVar8 = puVar10 + -0xc0;
    *(ulong *)(puVar10 + -0xc0) = unaff_x22;
    *(dword **)(puVar10 + -0xb8) = (dword *)(ulong)uVar1;
    *(undefined8 *)(puVar10 + -0xb0) = 0;
    *(dword **)(puVar10 + -0xa8) = pdVar19;
    *(undefined8 *****)(puVar10 + -0xa0) = ppppuVar32;
    *(undefined **)(puVar10 + -0x98) = &FlatBuffers_FlatBufferBuilder__PutUshort;
    ppppuVar32 = (undefined8 ****)(puVar10 + -0xa0);
    pdVar27 = *(dword **)(lVar22 + 0x18);
    uVar1 = *(int *)(lVar22 + 0x10) - 2;
    unaff_x21 = (dword *)(ulong)uVar1;
    auVar36._8_4_ = uVar1;
    auVar36._0_8_ = pdVar27;
    auVar36._12_4_ = 0;
    *(uint *)(lVar22 + 0x10) = uVar1;
    if (pdVar27 != (dword *)0x0) {
      pdVar30 = (dword *)((long)&MACH_HEADER.magic + 2);
      puVar35 = &UNK_016cdc90;
      goto code_r0x016cc7a4;
    }
    auVar36 = func_0x00f78af4();
    pdVar16 = auVar36._8_8_;
    lVar22 = auVar36._0_8_;
    puVar8 = puVar10 + -0xf0;
    *(ulong *)(puVar10 + -0xf0) = unaff_x22;
    *(dword **)(puVar10 + -0xe8) = unaff_x21;
    *(undefined8 *)(puVar10 + -0xe0) = 0;
    *(dword **)(puVar10 + -0xd8) = pdVar19;
    *(undefined8 *****)(puVar10 + -0xd0) = ppppuVar32;
    *(undefined **)(puVar10 + -200) = &FlatBuffers_FlatBufferBuilder__PutInt;
    ppppuVar32 = (undefined8 ****)(puVar10 + -0xd0);
    pdVar27 = *(dword **)(lVar22 + 0x18);
    uVar1 = *(int *)(lVar22 + 0x10) - 4;
    unaff_x21 = (dword *)(ulong)uVar1;
    auVar36._8_4_ = uVar1;
    auVar36._0_8_ = pdVar27;
    auVar36._12_4_ = 0;
    *(uint *)(lVar22 + 0x10) = uVar1;
    if (pdVar27 != (dword *)0x0) {
      pdVar30 = &MACH_HEADER.cputype;
      puVar35 = &UNK_016cdcec;
      goto code_r0x016cc7a4;
    }
    auVar36 = func_0x00f78af4();
    pdVar16 = auVar36._8_8_;
    lVar22 = auVar36._0_8_;
    puVar8 = puVar10 + -0x120;
    *(ulong *)(puVar10 + -0x120) = unaff_x22;
    *(dword **)(puVar10 + -0x118) = unaff_x21;
    *(undefined8 *)(puVar10 + -0x110) = 0;
    *(dword **)(puVar10 + -0x108) = pdVar19;
    *(undefined8 *****)(puVar10 + -0x100) = ppppuVar32;
    *(undefined **)(puVar10 + -0xf8) = &FlatBuffers_FlatBufferBuilder__PutUint;
    ppppuVar32 = (undefined8 ****)(puVar10 + -0x100);
    pdVar27 = *(dword **)(lVar22 + 0x18);
    uVar1 = *(int *)(lVar22 + 0x10) - 4;
    unaff_x21 = (dword *)(ulong)uVar1;
    auVar36._8_4_ = uVar1;
    auVar36._0_8_ = pdVar27;
    auVar36._12_4_ = 0;
    *(uint *)(lVar22 + 0x10) = uVar1;
    if (pdVar27 != (dword *)0x0) {
      pdVar30 = &MACH_HEADER.cputype;
      puVar35 = &UNK_016cdd48;
      goto code_r0x016cc7a4;
    }
    auVar36 = func_0x00f78af4();
    pdVar16 = auVar36._8_8_;
    lVar22 = auVar36._0_8_;
    puVar8 = puVar10 + -0x150;
    *(ulong *)(puVar10 + -0x150) = unaff_x22;
    *(dword **)(puVar10 + -0x148) = unaff_x21;
    *(undefined8 *)(puVar10 + -0x140) = 0;
    *(dword **)(puVar10 + -0x138) = pdVar19;
    *(undefined8 *****)(puVar10 + -0x130) = ppppuVar32;
    *(undefined **)(puVar10 + -0x128) = &FlatBuffers_FlatBufferBuilder__PutLong;
    ppppuVar32 = (undefined8 ****)(puVar10 + -0x130);
    pdVar27 = *(dword **)(lVar22 + 0x18);
    uVar1 = *(int *)(lVar22 + 0x10) - 8;
    unaff_x21 = (dword *)(ulong)uVar1;
    auVar36._8_4_ = uVar1;
    auVar36._0_8_ = pdVar27;
    auVar36._12_4_ = 0;
    *(uint *)(lVar22 + 0x10) = uVar1;
    if (pdVar27 != (dword *)0x0) {
      pdVar30 = &MACH_HEADER.cpusubtype;
      puVar35 = &UNK_016cdda4;
      goto code_r0x016cc7a4;
    }
    auVar36 = func_0x00f78af4();
    pdVar16 = auVar36._8_8_;
    lVar22 = auVar36._0_8_;
    puVar8 = puVar10 + -0x180;
    *(ulong *)(puVar10 + -0x180) = unaff_x22;
    *(dword **)(puVar10 + -0x178) = unaff_x21;
    *(undefined8 *)(puVar10 + -0x170) = 0;
    *(dword **)(puVar10 + -0x168) = pdVar19;
    *(undefined8 *****)(puVar10 + -0x160) = ppppuVar32;
    *(undefined **)(puVar10 + -0x158) = &FlatBuffers_FlatBufferBuilder__PutUlong;
    ppppuVar32 = (undefined8 ****)(puVar10 + -0x160);
    pdVar27 = *(dword **)(lVar22 + 0x18);
    uVar1 = *(int *)(lVar22 + 0x10) - 8;
    unaff_x21 = (dword *)(ulong)uVar1;
    auVar36._8_4_ = uVar1;
    auVar36._0_8_ = pdVar27;
    auVar36._12_4_ = 0;
    *(uint *)(lVar22 + 0x10) = uVar1;
    if (pdVar27 != (dword *)0x0) {
      pdVar30 = &MACH_HEADER.cpusubtype;
      puVar35 = &UNK_016cde00;
      goto code_r0x016cc7a4;
    }
    lVar22 = func_0x00f78af4();
    *(undefined8 *****)(puVar10 + -400) = ppppuVar32;
    *(undefined **)(puVar10 + -0x188) = &FlatBuffers_FlatBufferBuilder__PutFloat;
    pdVar27 = *(dword **)(lVar22 + 0x18);
    uVar1 = *(int *)(lVar22 + 0x10) - 4;
    pdVar16 = (dword *)(ulong)uVar1;
    auVar36._8_4_ = uVar1;
    auVar36._0_8_ = pdVar27;
    auVar36._12_4_ = 0;
    *(uint *)(lVar22 + 0x10) = uVar1;
    if (pdVar27 != (dword *)0x0) {
      puVar8 = puVar10 + -0x1b0;
      *(undefined8 *)(puVar10 + -0x1b0) = unaff_d9;
      *(undefined8 *)(puVar10 + -0x1a8) = unaff_d8;
      *(undefined8 *)(puVar10 + -0x1a0) = 0;
      *(dword **)(puVar10 + -0x198) = pdVar19;
      *(undefined8 *)(puVar10 + -400) = *(undefined8 *)(puVar10 + -400);
      *(undefined8 *)(puVar10 + -0x188) = *(undefined8 *)(puVar10 + -0x188);
      ppppuVar32 = (undefined8 ****)(puVar10 + -400);
      pdVar30 = &MACH_HEADER.cputype;
      puVar35 = &UNK_016ccba4;
      goto code_r0x016cc7a4;
    }
    lVar22 = func_0x00f78af4();
    *(undefined1 **)(puVar10 + -0x1a0) = puVar10 + -400;
    *(undefined **)(puVar10 + -0x198) = &FlatBuffers_FlatBufferBuilder__PutDouble;
    pdVar27 = *(dword **)(lVar22 + 0x18);
    uVar1 = *(int *)(lVar22 + 0x10) - 8;
    pdVar16 = (dword *)(ulong)uVar1;
    auVar36._8_4_ = uVar1;
    auVar36._0_8_ = pdVar27;
    auVar36._12_4_ = 0;
    *(uint *)(lVar22 + 0x10) = uVar1;
    if (pdVar27 != (dword *)0x0) break;
    auVar40 = func_0x00f78af4();
    *(undefined8 *)(puVar10 + -0x1c0) = 0;
    *(dword **)(puVar10 + -0x1b8) = pdVar19;
    *(undefined1 **)(puVar10 + -0x1b0) = puVar10 + -0x1a0;
    *(undefined **)(puVar10 + -0x1a8) = &FlatBuffers_FlatBufferBuilder__AddBool;
    pppuVar34 = (undefined8 ***)(puVar10 + -0x1b0);
    auVar39._8_8_ = 1;
    auVar39._0_8_ = auVar40._0_8_;
    pdVar16 = (dword *)0x0;
    puVar35 = &UNK_016cde9c;
    puVar10 = puVar10 + -0x1c0;
    pdVar31 = unaff_x21;
  } while( true );
  puVar8 = puVar10 + -0x1c0;
  *(undefined8 *)(puVar10 + -0x1c0) = unaff_d9;
  *(undefined8 *)(puVar10 + -0x1b8) = unaff_d8;
  *(undefined8 *)(puVar10 + -0x1b0) = 0;
  *(dword **)(puVar10 + -0x1a8) = pdVar19;
  *(undefined8 *)(puVar10 + -0x1a0) = *(undefined8 *)(puVar10 + -0x1a0);
  *(undefined8 *)(puVar10 + -0x198) = *(undefined8 *)(puVar10 + -0x198);
  ppppuVar32 = (undefined8 ****)(puVar10 + -0x1a0);
  pdVar30 = &MACH_HEADER.cpusubtype;
  puVar35 = &UNK_016ccc34;
code_r0x016cc7a4:
  do {
    puVar12 = puVar8 + -0x20;
    *(dword **)(puVar8 + -0x20) = pdVar27;
    *(dword **)(puVar8 + -0x18) = pdVar16;
    *(undefined8 *****)(puVar8 + -0x10) = ppppuVar32;
    *(undefined **)(puVar8 + -8) = puVar35;
    puVar33 = puVar8 + -0x10;
    if (auVar36._8_4_ < 0) {
code_r0x016cc7d8:
      func_0x00f78a24(0x3d1fcf8);
      pdVar19 = (dword *)func_0x00f78aec();
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a4d0(pdVar19,0);
      uVar29 = func_0x00f78a24(0x3d52ce8);
      func_0x00f78ac0(pdVar19,uVar29);
      pdVar26 = pdVar30;
    }
    else {
      lVar22 = *(long *)(auVar36._0_8_ + 4);
      pdVar26 = pdVar30;
      pdVar19 = pdVar16;
      if (lVar22 != 0) {
        if (auVar36._8_4_ <= *(int *)(lVar22 + 0x18) - (int)pdVar30) {
          return auVar36._0_8_;
        }
        goto code_r0x016cc7d8;
      }
    }
    puVar35 = &FlatBuffers_ByteBuffer__PutSbyte;
    auVar36 = func_0x00f78af4();
    pdVar30 = pdVar27;
code_r0x016cc810:
    pdVar27 = auVar36._8_8_;
    puVar8 = puVar12 + -0x30;
    *(ulong *)(puVar12 + -0x30) = unaff_x22;
    *(dword **)(puVar12 + -0x28) = unaff_x21;
    *(dword **)(puVar12 + -0x20) = pdVar30;
    *(dword **)(puVar12 + -0x18) = pdVar19;
    *(undefined1 **)(puVar12 + -0x10) = puVar33;
    *(undefined **)(puVar12 + -8) = puVar35;
    ppppuVar32 = (undefined8 ****)(puVar12 + -0x10);
    pdVar30 = (dword *)((long)&MACH_HEADER.magic + 1);
    puVar35 = &UNK_016cc834;
    pdVar16 = pdVar26;
    unaff_x21 = auVar36._0_8_;
  } while( true );
}



// ============================================================
// RVA: 0x1656a1c | Core.Networking.HostStanding.CreateHostStanding
// ============================================================

/* WARNING: Possible PIC construction at 0x01656a48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01656a60: Changing call to branch */
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
/* WARNING: Possible PIC construction at 0x01656b90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01656c54: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x01656c58) */
/* WARNING: Removing unreachable block (ram,0x016ce224) */
/* WARNING: Removing unreachable block (ram,0x01656b94) */
/* WARNING: Removing unreachable block (ram,0x01656ba0) */
/* WARNING: Removing unreachable block (ram,0x01656ba8) */
/* WARNING: Removing unreachable block (ram,0x01656bc4) */
/* WARNING: Removing unreachable block (ram,0x01656bd0) */
/* WARNING: Removing unreachable block (ram,0x01656bdc) */
/* WARNING: Removing unreachable block (ram,0x016ce20c) */
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
/* WARNING: Removing unreachable block (ram,0x01656a64) */
/* WARNING: Removing unreachable block (ram,0x01656a4c) */
/* WARNING: Removing unreachable block (ram,0x016ce69c) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_HostStanding__CreateHostStanding
                (long param_1,ulong param_2,ulong param_3,undefined8 param_4)

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
  undefined1 *puVar14;
  undefined8 ***pppuVar15;
  undefined1 *puVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  int iVar23;
  ulong uVar24;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar25;
  ulong uVar26;
  long lVar27;
  ulong unaff_x21;
  ulong uVar28;
  ulong unaff_x22;
  ulong uVar29;
  undefined8 ****ppppuVar30;
  undefined1 *puVar31;
  undefined8 ***pppuVar32;
  undefined1 ***pppuVar33;
  undefined *puVar34;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [12];
  long alStack_110 [2];
  undefined8 ***apppuStack_100 [2];
  undefined8 ***pppuStack_d0;
  undefined *puStack_c8;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined8 **ppuStack_40;
  undefined *puStack_38;
  
  puVar14 = &stack0xffffffffffffffd0;
  pppuVar33 = (undefined1 ***)&stack0xfffffffffffffff0;
  if (param_1 == 0) {
    auVar39 = func_0x00f78af4();
    uVar28 = auVar39._8_8_;
    uVar24 = auVar39._0_8_;
    ppuStack_40 = pppuVar33;
    if (uVar24 != 0) {
      puVar11 = &stack0xffffffffffffffa0;
      puStack_38 = &Core_Networking_HostStanding__AddForceEventEndTimeStamp;
      pppuVar32 = &ppuStack_40;
      auVar38._8_8_ = 1;
      auVar38._0_8_ = uVar24;
      if ((auVar39._8_4_ == 0) && (*(char *)(uVar24 + 0x48) == '\0')) {
        return uVar24;
      }
      auVar39._8_8_ = 4;
      auVar39._0_8_ = uVar24;
      uVar24 = 0;
      puVar34 = &UNK_016ce69c;
      goto code_r0x016cdaac;
    }
    pppuVar32 = &ppuStack_40;
    puStack_38 = &Core_Networking_HostStanding__AddForceEventEndTimeStamp;
    auVar39 = func_0x00f78af4();
    uVar28 = auVar39._0_8_;
    if (uVar28 != 0) {
      iVar23 = 0;
      puVar34 = &Core_Networking_HostStanding__AddStandings;
      auVar40._8_4_ = 0;
      auVar40._0_8_ = uVar28;
      if ((auVar39._8_4_ == 0) && (*(char *)(uVar28 + 0x48) == '\0')) {
        return uVar28;
      }
      /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(uVar28,auVar39._8_8_,auVar39._8_8_,0,0);
      pppuVar15 = &ppuStack_40;
      goto code_r0x016ce380;
    }
    puVar16 = &stack0xffffffffffffffb0;
    pppuVar32 = (undefined8 ***)&stack0xffffffffffffffb0;
    puVar34 = &Core_Networking_HostStanding__AddHasEventEndTimeStamp;
    auVar35 = func_0x00f78af4();
    if (auVar35._0_8_ == 0) {
      lVar20 = func_0x00f78af4();
      puVar14 = &stack0xffffffffffffff80;
      puStack_68 = &Core_Networking_HostStanding__EndHostStanding;
      pppuVar33 = &ppuStack_70;
      uVar25 = 0x3eb5000;
      ppuStack_70 = (undefined1 **)&stack0xffffffffffffffa0;
      if ((bRam0000000003eb5808 & 1) == 0) {
        ppuStack_70 = (undefined1 **)&stack0xffffffffffffffa0;
        func_0x00f78a20(0x3d3f110);
        bRam0000000003eb5808 = 1;
      }
      if (lVar20 != 0) {
        pppuVar32 = (undefined8 ***)&ppuStack_70;
        auVar38._8_8_ = lVar20;
        auVar38._0_8_ = 0x3eb5000;
        if ((bRam0000000003eb5cd8 & 1) == 0) {
          func_0x00f78a20(0x3d1f100,0);
          bRam0000000003eb5cd8 = 1;
        }
        uVar28 = unaff_x21;
        if (*(int *)(lVar20 + 0x30) < 0) {
          func_0x00f78a24(0x3d22a38);
          puVar34 = (undefined *)func_0x00f78aec();
          uVar25 = func_0x00f78a24(0x3d6cea8);
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(puVar34,uVar25);
          uVar25 = func_0x00f78a24(0x3d56a30);
          auVar40 = func_0x00f78ac0(puVar34,uVar25);
          pppuStack_d0 = (undefined8 ****)0x3eb5000;
          pppuVar32 = (undefined8 ***)&stack0xffffffffffffff40;
          lVar20 = *(long *)(auVar40._0_8_ + 0x18);
          puStack_c8 = puVar34;
          if ((lVar20 != 0) && (*(long *)(lVar20 + 0x10) != 0)) {
            uVar5 = *(int *)(*(long *)(lVar20 + 0x10) + 0x18) - auVar40._8_4_;
            uVar24 = (ulong)uVar5;
            auVar37._8_4_ = uVar5;
            auVar37._0_8_ = lVar20;
            auVar37._12_4_ = 0;
            puVar9 = &stack0xfffffffffffffed0;
            apppuStack_100[1] = (undefined8 ***)&UNK_016cee20;
            ppppuVar30 = apppuStack_100;
            auVar8._8_8_ = 4;
            auVar8._0_8_ = lVar20;
            uVar29 = 0x3d201a0;
            apppuStack_100[0] = pppuVar32;
            if ((bRam0000000003eb5cd0 & 1) == 0) {
              func_0x00f78a20(0x3d201a0);
              bRam0000000003eb5cd0 = 1;
            }
            uVar26 = 4;
            puVar34 = &UNK_016cc68c;
            goto code_r0x016cc7a4;
          }
          func_0x00f78af4();
          uVar25 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&stack0xffffffffffffff1c,0);
          uVar21 = func_0x00f78a24(0x3d6ce88);
          uVar22 = func_0x00f78a24(0x3d66338);
          lVar20 = /*System.String$$Concat*/ func_0x029be39c(uVar21,uVar25,uVar22,0);
          func_0x00f78a24(0x3d22a38);
          uVar25 = func_0x00f78aec();
          uVar22 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar25,lVar20);
          uVar21 = func_0x00f78a24(0x3d56a50);
          puVar34 = &FlatBuffers_FlatBufferBuilder__Finish;
          auVar39 = func_0x00f78ac0(uVar25,uVar21);
          puVar11 = &stack0xffffffffffffff10;
          while( true ) {
            uVar21 = auVar39._8_8_;
            lVar27 = auVar39._0_8_;
            auVar38._8_8_ = lVar27;
            auVar38._0_8_ = uVar21;
            auVar7._8_8_ = lVar27;
            auVar7._0_8_ = uVar21;
            *(undefined8 *)(puVar11 + -0x20) = uVar25;
            *(long *)(puVar11 + -0x18) = lVar20;
            *(undefined8 ****)(puVar11 + -0x10) = pppuVar32;
            *(undefined **)(puVar11 + -8) = puVar34;
            pppuVar32 = (undefined8 ***)(puVar11 + -0x10);
            uVar4 = *(undefined4 *)(lVar27 + 0x20);
            auVar39._8_4_ = uVar4;
            auVar39._0_8_ = lVar27;
            auVar39._12_4_ = 0;
            lVar20 = lVar27;
            if ((int)uVar22 == 0) {
              lVar20 = 0;
              uVar4 = 0;
            }
            auVar6._8_4_ = uVar4;
            auVar6._0_8_ = lVar20;
            auVar6._12_4_ = 0;
            if ((int)uVar22 == 0) {
              uVar24 = 4;
              puVar34 = &UNK_016cef64;
              puVar11 = puVar11 + -0x20;
              goto code_r0x016cdaac;
            }
            if (lVar20 != 0) break;
            puVar34 = &FlatBuffers_FlatBufferBuilder__Finish;
            auVar39 = func_0x00f78af4();
            uVar22 = 0;
            puVar11 = puVar11 + -0x20;
            lVar20 = lVar27;
            uVar25 = uVar21;
          }
          uVar24 = 8;
          puVar34 = &UNK_016cef10;
          puVar11 = puVar11 + -0x20;
          auVar39 = auVar6;
          auVar38 = auVar7;
        }
        else {
          auVar39._8_8_ = 4;
          auVar39._0_8_ = lVar20;
          uVar24 = 0;
          puVar34 = &UNK_016cea78;
          puVar11 = &stack0xffffffffffffff50;
        }
        goto code_r0x016cdaac;
      }
      puVar34 = &Core_Networking_HostStanding__StartHostStanding;
      param_1 = func_0x00f78af4();
      if (param_1 == 0) {
        auVar36 = func_0x00f78af4();
        lVar20 = auVar36._0_8_;
        if ((auVar36._8_8_ == 0) || (lVar20 == 0)) {
          auVar36 = func_0x00f78af4();
          lVar27 = auVar36._8_8_;
          lVar20 = auVar36._0_8_;
          puVar11 = &stack0xffffffffffffff10;
          puStack_c8 = &Core_Networking_HostStanding__CreateStandingsVectorBlock;
          ppppuVar30 = &pppuStack_d0;
          unaff_x21 = 0x3eb5000;
          pppuStack_d0 = (undefined8 ***)&stack0xffffffffffffff60;
          if ((bRam0000000003eb5807 & 1) == 0) {
            func_0x00f78a20(0x3d569a8);
            bRam0000000003eb5807 = 1;
          }
          if ((lVar27 == 0) || (lVar20 == 0)) {
            puVar34 = &Core_Networking_HostStanding__StartStandingsVector;
            auVar40 = func_0x00f78af4();
            iVar23 = auVar40._8_4_;
            auVar36._8_8_ = lVar27;
            auVar36._0_8_ = auVar40._0_8_;
            if (auVar40._0_8_ == 0) {
              apppuStack_100[1] =
                   (undefined8 ***)&Core_Networking_HostStanding__StartStandingsVector;
              apppuStack_100[0] = ppppuVar30;
              lVar20 = func_0x00f78af4();
              return *(ulong *)(lVar20 + 8);
            }
          }
          else {
            unaff_x21 = 0x3d56000;
            iVar23 = *(int *)(lVar27 + 0x18);
            puVar34 = &UNK_01656c58;
            puVar11 = &stack0xffffffffffffff10;
          }
        }
        else {
          iVar23 = *(int *)(auVar36._8_8_ + 0x18);
          puVar34 = &UNK_01656b94;
          puVar11 = &stack0xffffffffffffff40;
          ppppuVar30 = (undefined8 ****)&stack0xffffffffffffff60;
        }
        uVar29 = auVar36._0_8_;
        *(ulong *)(puVar11 + -0x30) = unaff_x22;
        *(ulong *)(puVar11 + -0x28) = unaff_x21;
        *(long *)(puVar11 + -0x20) = auVar36._8_8_;
        *(long *)(puVar11 + -0x18) = lVar20;
        *(undefined8 *****)(puVar11 + -0x10) = ppppuVar30;
        *(undefined **)(puVar11 + -8) = puVar34;
        pppuVar32 = (undefined8 ***)(puVar11 + -0x10);
        uVar28 = 4;
        /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4();
        *(int *)(uVar29 + 0x44) = iVar23;
        uVar24 = CONCAT44(0,iVar23 * 4);
        auVar38._8_8_ = 4;
        auVar38._0_8_ = uVar24;
        auVar39._8_8_ = 4;
        auVar39._0_8_ = uVar29;
        puVar34 = &UNK_016ce188;
        puVar11 = puVar11 + -0x30;
        unaff_x22 = uVar29;
        goto code_r0x016cdaac;
      }
      lVar20 = 0;
      goto code_r0x016ce2a4;
    }
    uVar25 = 2;
    iVar23 = 0;
  }
  else {
    puVar34 = (undefined *)0x1656a4c;
    lVar20 = param_1;
    uVar25 = param_4;
    unaff_x21 = param_2;
    unaff_x22 = param_3;
code_r0x016ce2a4:
    iVar23 = (int)param_4;
    puVar10 = puVar14 + -0x30;
    pppuVar15 = (undefined8 ***)(puVar14 + -0x30);
    *(ulong *)(puVar14 + -0x30) = unaff_x22;
    *(ulong *)(puVar14 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar14 + -0x20) = uVar25;
    *(long *)(puVar14 + -0x18) = lVar20;
    *(undefined1 ****)(puVar14 + -0x10) = pppuVar33;
    *(undefined **)(puVar14 + -8) = puVar34;
    pppuVar32 = (undefined8 ***)(puVar14 + -0x10);
    unaff_x20 = 3;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100,3,0);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(param_1);
    if (*(long *)(param_1 + 0x28) != 0) {
      if (*(int *)(*(long *)(param_1 + 0x28) + 0x18) < 3) {
        uVar25 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,3);
        *(undefined8 *)(param_1 + 0x28) = uVar25;
      }
      *(undefined4 *)(param_1 + 0x30) = 3;
      puVar34 = &UNK_016ce320;
      goto code_r0x016cda04;
    }
    puVar34 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar40 = func_0x00f78af4();
    unaff_x19 = param_1;
code_r0x016ce380:
    param_1 = auVar40._0_8_;
    puVar16 = (undefined1 *)((long)pppuVar15 + -0x20);
    puVar10 = (undefined1 *)((long)pppuVar15 + -0x20);
    *(undefined8 *)((long)pppuVar15 + -0x20) = unaff_x20;
    *(long *)((long)pppuVar15 + -0x18) = unaff_x19;
    *(undefined8 ****)((long)pppuVar15 + -0x10) = pppuVar32;
    *(undefined **)((long)pppuVar15 + -8) = puVar34;
    pppuVar32 = (undefined8 ***)((long)pppuVar15 + -0x10);
    if (auVar40._8_4_ < *(int *)(param_1 + 0x30)) {
      puVar34 = &UNK_016ce3a4;
code_r0x016cda04:
      *(undefined8 ****)(puVar10 + -0x10) = pppuVar32;
      *(undefined **)(puVar10 + -8) = puVar34;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (lVar20 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar20 != 0)) {
        return (ulong)(uint)(*(int *)(lVar20 + 0x18) - *(int *)(param_1 + 0x10));
      }
      lVar20 = func_0x00f78af4();
      return (ulong)*(byte *)(lVar20 + 0x48);
    }
    func_0x00f78a24(0x3d22738);
    unaff_x19 = func_0x00f78aec();
    uVar25 = func_0x00f78a24(0x3d6ceb8);
    uVar21 = 0;
    /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(unaff_x19,uVar25);
    uVar25 = func_0x00f78a24(0x3d56a58);
    func_0x00f78ac0(unaff_x19,uVar25);
    func_0x00f78af4();
    uVar25 = func_0x00f78b24();
    puVar34 = &FlatBuffers_FlatBufferBuilder__AddBool;
    auVar39 = func_0x00f78ac0(uVar25,0);
    uVar25 = auVar39._8_8_;
    auVar35._8_8_ = uVar21;
    auVar35._0_8_ = auVar39._0_8_;
  }
  uVar28 = auVar35._8_8_;
  uVar24 = auVar35._0_8_;
  auVar38._8_8_ = uVar25;
  auVar38._0_8_ = uVar24;
  *(ulong *)(puVar16 + -0x30) = unaff_x22;
  *(ulong *)(puVar16 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar16 + -0x20) = unaff_x20;
  *(long *)(puVar16 + -0x18) = unaff_x19;
  *(undefined8 ****)(puVar16 + -0x10) = pppuVar32;
  *(undefined **)(puVar16 + -8) = puVar34;
  pppuVar32 = (undefined8 ***)(puVar16 + -0x10);
  if ((auVar35._8_4_ == iVar23) && (*(char *)(uVar24 + 0x48) == '\0')) {
    return uVar24;
  }
  auVar39._8_8_ = 1;
  auVar39._0_8_ = uVar24;
  uVar24 = 0;
  puVar34 = &UNK_016ce46c;
  puVar11 = puVar16 + -0x30;
code_r0x016cdaac:
  do {
    uVar26 = auVar38._0_8_;
    uVar18 = auVar39._0_8_;
    puVar9 = puVar11 + -0x30;
    *(ulong *)(puVar11 + -0x30) = unaff_x22;
    *(ulong *)(puVar11 + -0x28) = uVar28;
    *(undefined1 (*) [16])(puVar11 + -0x20) = auVar38;
    *(undefined8 ****)(puVar11 + -0x10) = pppuVar32;
    *(undefined **)(puVar11 + -8) = puVar34;
    iVar23 = auVar39._8_4_;
    if (*(int *)(uVar18 + 0x20) < iVar23) {
      *(int *)(uVar18 + 0x20) = iVar23;
    }
    uVar29 = unaff_x22;
    if ((*(long *)(uVar18 + 0x18) != 0) &&
       (lVar20 = *(long *)(*(long *)(uVar18 + 0x18) + 0x10), lVar20 != 0)) {
      uVar2 = *(uint *)(lVar20 + 0x18);
      iVar3 = *(int *)(uVar18 + 0x10);
      uVar1 = iVar3 - (uVar2 + (int)uVar24) & iVar23 - 1U;
      uVar26 = CONCAT44(0,uVar1);
      uVar5 = (int)uVar24 + iVar23 + uVar1;
      uVar29 = (ulong)uVar5;
      uVar19 = uVar18;
      while (uVar28 = (ulong)uVar2, iVar3 < (int)uVar5) {
        uVar19 = /*FlatBuffers.FlatBufferBuilder$$GrowBuffer*/ func_0x016cda78(uVar18);
        if ((*(long *)(uVar18 + 0x18) == 0) ||
           (lVar20 = *(long *)(*(long *)(uVar18 + 0x18) + 0x10), lVar20 == 0))
        goto code_r0x016cdb68;
        iVar3 = *(int *)(uVar18 + 0x10) - uVar2;
        uVar2 = *(uint *)(lVar20 + 0x18);
        iVar3 = iVar3 + uVar2;
        *(int *)(uVar18 + 0x10) = iVar3;
      }
      if ((int)uVar1 < 1) {
        return uVar19;
      }
      uVar25 = *(undefined8 *)*(undefined1 (*) [16])(puVar11 + -0x20);
      uVar21 = *(undefined8 *)(puVar11 + -0x18);
      auVar38 = *(undefined1 (*) [16])(puVar11 + -0x20);
      unaff_x22 = *(ulong *)(puVar11 + -0x30);
      uVar28 = *(ulong *)(puVar11 + -0x28);
      *(undefined8 *)(puVar11 + -0x10) = *(undefined8 *)(puVar11 + -0x10);
      *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
      lVar20 = *(long *)(uVar18 + 0x18);
      auVar8._8_8_ = lVar20;
      auVar8._0_8_ = uVar26;
      uVar1 = *(int *)(uVar18 + 0x10) - uVar1;
      uVar29 = (ulong)uVar1;
      auVar37._8_4_ = uVar1;
      auVar37._0_8_ = lVar20;
      auVar37._12_4_ = 0;
      *(uint *)(uVar18 + 0x10) = uVar1;
      if (lVar20 != 0) {
        *(ulong *)(puVar11 + -0x30) = unaff_x22;
        *(ulong *)(puVar11 + -0x28) = uVar28;
        *(undefined8 *)(puVar11 + -0x20) = uVar25;
        *(undefined8 *)(puVar11 + -0x18) = uVar21;
        *(undefined8 *)(puVar11 + -0x10) = *(undefined8 *)(puVar11 + -0x10);
        *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
        ppppuVar30 = (undefined8 ****)(puVar11 + -0x10);
        puVar34 = &UNK_016cc908;
        uVar24 = 0;
        goto code_r0x016cc7a4;
      }
      lVar20 = func_0x00f78af4();
      pppuVar32 = (undefined8 ***)(puVar11 + -0x20);
      *(undefined1 **)(puVar11 + -0x20) = puVar11 + -0x10;
      *(undefined **)(puVar11 + -0x18) = &FlatBuffers_FlatBufferBuilder__GrowBuffer;
      if ((*(long *)(lVar20 + 0x18) != 0) &&
         (plVar17 = *(long **)(*(long *)(lVar20 + 0x18) + 0x10), plVar17 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016cdaa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar28 = (**(code **)(*plVar17 + 0x178))
                           (plVar17,(int)plVar17[3] << 1,*(undefined8 *)(*plVar17 + 0x180));
        return uVar28;
      }
      puVar34 = &FlatBuffers_FlatBufferBuilder__Prep;
      auVar39 = func_0x00f78af4();
      puVar11 = puVar11 + -0x20;
      goto code_r0x016cdaac;
    }
code_r0x016cdb68:
    auVar8._8_8_ = uVar26;
    auVar8._0_8_ = uVar28;
    auVar39 = func_0x00f78af4();
    uVar24 = auVar39._8_8_;
    lVar27 = auVar39._0_8_;
    *(undefined1 **)(puVar11 + -0x40) = puVar11 + -0x10;
    *(undefined **)(puVar11 + -0x38) = &FlatBuffers_FlatBufferBuilder__PutBool;
    lVar20 = *(long *)(lVar27 + 0x18);
    iVar23 = *(int *)(lVar27 + 0x10) + -1;
    *(int *)(lVar27 + 0x10) = iVar23;
    if (lVar20 != 0) {
      puVar12 = puVar11 + -0x30;
      uVar25 = *(undefined8 *)(puVar11 + -0x40);
      uVar21 = *(undefined8 *)(puVar11 + -0x38);
FlatBuffers_ByteBuffer__PutByte:
      auVar8._8_4_ = iVar23;
      auVar8._0_8_ = lVar20;
      auVar8._12_4_ = 0;
      auVar37._8_4_ = iVar23;
      auVar37._0_8_ = lVar20;
      auVar37._12_4_ = 0;
      puVar9 = puVar12 + -0x30;
      *(ulong *)(puVar12 + -0x30) = uVar29;
      *(ulong *)(puVar12 + -0x28) = uVar28;
      *(ulong *)(puVar12 + -0x20) = uVar26;
      *(ulong *)(puVar12 + -0x18) = uVar18;
      *(undefined8 *)(puVar12 + -0x10) = uVar25;
      *(undefined8 *)(puVar12 + -8) = uVar21;
      ppppuVar30 = (undefined8 ****)(puVar12 + -0x10);
      uVar26 = 1;
      puVar34 = &UNK_016cc89c;
      goto code_r0x016cc7a4;
    }
    auVar39 = func_0x00f78af4();
    uVar19 = auVar39._8_8_;
    lVar20 = auVar39._0_8_;
    *(undefined1 **)(puVar11 + -0x50) = puVar11 + -0x40;
    *(undefined **)(puVar11 + -0x48) = &FlatBuffers_FlatBufferBuilder__PutSbyte;
    iVar23 = *(int *)(lVar20 + 0x10) + -1;
    auVar37._8_4_ = iVar23;
    auVar37._0_8_ = *(long *)(lVar20 + 0x18);
    auVar37._12_4_ = 0;
    *(int *)(lVar20 + 0x10) = iVar23;
    if (*(long *)(lVar20 + 0x18) != 0) {
      puVar13 = puVar11 + -0x40;
      puVar31 = *(undefined1 **)(puVar11 + -0x50);
      puVar34 = *(undefined **)(puVar11 + -0x48);
      uVar24 = uVar18;
      goto code_r0x016cc810;
    }
    auVar39 = func_0x00f78af4();
    uVar24 = auVar39._8_8_;
    lVar27 = auVar39._0_8_;
    *(undefined1 **)(puVar11 + -0x60) = puVar11 + -0x50;
    *(undefined **)(puVar11 + -0x58) = &FlatBuffers_FlatBufferBuilder__PutByte;
    lVar20 = *(long *)(lVar27 + 0x18);
    iVar23 = *(int *)(lVar27 + 0x10) + -1;
    *(int *)(lVar27 + 0x10) = iVar23;
    if (lVar20 != 0) {
      puVar12 = puVar11 + -0x50;
      uVar25 = *(undefined8 *)(puVar11 + -0x60);
      uVar21 = *(undefined8 *)(puVar11 + -0x58);
      goto FlatBuffers_ByteBuffer__PutByte;
    }
    auVar39 = func_0x00f78af4();
    uVar24 = auVar39._8_8_;
    lVar20 = auVar39._0_8_;
    puVar9 = puVar11 + -0x90;
    *(ulong *)(puVar11 + -0x90) = uVar29;
    *(ulong *)(puVar11 + -0x88) = uVar28;
    *(ulong *)(puVar11 + -0x80) = uVar26;
    *(ulong *)(puVar11 + -0x78) = uVar18;
    *(undefined1 **)(puVar11 + -0x70) = puVar11 + -0x60;
    *(undefined **)(puVar11 + -0x68) = &FlatBuffers_FlatBufferBuilder__PutShort;
    ppppuVar30 = (undefined8 ****)(puVar11 + -0x70);
    lVar27 = *(long *)(lVar20 + 0x18);
    uVar5 = *(int *)(lVar20 + 0x10) - 2;
    auVar8._8_8_ = lVar27;
    auVar8._0_8_ = CONCAT44(0,uVar5);
    auVar37._8_4_ = uVar5;
    auVar37._0_8_ = lVar27;
    auVar37._12_4_ = 0;
    *(uint *)(lVar20 + 0x10) = uVar5;
    if (lVar27 != 0) {
      uVar26 = 2;
      puVar34 = &UNK_016cdc34;
      goto code_r0x016cc7a4;
    }
    auVar39 = func_0x00f78af4();
    uVar24 = auVar39._8_8_;
    lVar20 = auVar39._0_8_;
    puVar9 = puVar11 + -0xc0;
    *(ulong *)(puVar11 + -0xc0) = uVar29;
    *(ulong *)(puVar11 + -0xb8) = CONCAT44(0,uVar5);
    *(undefined8 *)(puVar11 + -0xb0) = 0;
    *(ulong *)(puVar11 + -0xa8) = uVar18;
    *(undefined8 *****)(puVar11 + -0xa0) = ppppuVar30;
    *(undefined **)(puVar11 + -0x98) = &FlatBuffers_FlatBufferBuilder__PutUshort;
    ppppuVar30 = (undefined8 ****)(puVar11 + -0xa0);
    lVar27 = *(long *)(lVar20 + 0x18);
    uVar5 = *(int *)(lVar20 + 0x10) - 2;
    auVar8._8_8_ = lVar27;
    auVar8._0_8_ = CONCAT44(0,uVar5);
    auVar37._8_4_ = uVar5;
    auVar37._0_8_ = lVar27;
    auVar37._12_4_ = 0;
    *(uint *)(lVar20 + 0x10) = uVar5;
    if (lVar27 != 0) {
      uVar26 = 2;
      puVar34 = &UNK_016cdc90;
      goto code_r0x016cc7a4;
    }
    auVar39 = func_0x00f78af4();
    uVar24 = auVar39._8_8_;
    lVar20 = auVar39._0_8_;
    puVar9 = puVar11 + -0xf0;
    *(ulong *)(puVar11 + -0xf0) = uVar29;
    *(ulong *)(puVar11 + -0xe8) = CONCAT44(0,uVar5);
    *(undefined8 *)(puVar11 + -0xe0) = 0;
    *(ulong *)(puVar11 + -0xd8) = uVar18;
    *(undefined8 *****)(puVar11 + -0xd0) = ppppuVar30;
    *(undefined **)(puVar11 + -200) = &FlatBuffers_FlatBufferBuilder__PutInt;
    ppppuVar30 = (undefined8 ****)(puVar11 + -0xd0);
    lVar27 = *(long *)(lVar20 + 0x18);
    uVar5 = *(int *)(lVar20 + 0x10) - 4;
    auVar8._8_8_ = lVar27;
    auVar8._0_8_ = CONCAT44(0,uVar5);
    auVar37._8_4_ = uVar5;
    auVar37._0_8_ = lVar27;
    auVar37._12_4_ = 0;
    *(uint *)(lVar20 + 0x10) = uVar5;
    if (lVar27 != 0) {
      uVar26 = 4;
      puVar34 = &UNK_016cdcec;
      goto code_r0x016cc7a4;
    }
    auVar39 = func_0x00f78af4();
    uVar24 = auVar39._8_8_;
    lVar20 = auVar39._0_8_;
    puVar9 = puVar11 + -0x120;
    *(ulong *)(puVar11 + -0x120) = uVar29;
    *(ulong *)(puVar11 + -0x118) = CONCAT44(0,uVar5);
    *(undefined8 *)(puVar11 + -0x110) = 0;
    *(ulong *)(puVar11 + -0x108) = uVar18;
    *(undefined8 *****)(puVar11 + -0x100) = ppppuVar30;
    *(undefined **)(puVar11 + -0xf8) = &FlatBuffers_FlatBufferBuilder__PutUint;
    ppppuVar30 = (undefined8 ****)(puVar11 + -0x100);
    lVar27 = *(long *)(lVar20 + 0x18);
    uVar5 = *(int *)(lVar20 + 0x10) - 4;
    auVar8._8_8_ = lVar27;
    auVar8._0_8_ = CONCAT44(0,uVar5);
    auVar37._8_4_ = uVar5;
    auVar37._0_8_ = lVar27;
    auVar37._12_4_ = 0;
    *(uint *)(lVar20 + 0x10) = uVar5;
    if (lVar27 != 0) {
      uVar26 = 4;
      puVar34 = &UNK_016cdd48;
      goto code_r0x016cc7a4;
    }
    auVar39 = func_0x00f78af4();
    uVar24 = auVar39._8_8_;
    lVar20 = auVar39._0_8_;
    puVar9 = puVar11 + -0x150;
    *(ulong *)(puVar11 + -0x150) = uVar29;
    *(ulong *)(puVar11 + -0x148) = CONCAT44(0,uVar5);
    *(undefined8 *)(puVar11 + -0x140) = 0;
    *(ulong *)(puVar11 + -0x138) = uVar18;
    *(undefined8 *****)(puVar11 + -0x130) = ppppuVar30;
    *(undefined **)(puVar11 + -0x128) = &FlatBuffers_FlatBufferBuilder__PutLong;
    ppppuVar30 = (undefined8 ****)(puVar11 + -0x130);
    lVar27 = *(long *)(lVar20 + 0x18);
    uVar5 = *(int *)(lVar20 + 0x10) - 8;
    auVar8._8_8_ = lVar27;
    auVar8._0_8_ = CONCAT44(0,uVar5);
    auVar37._8_4_ = uVar5;
    auVar37._0_8_ = lVar27;
    auVar37._12_4_ = 0;
    *(uint *)(lVar20 + 0x10) = uVar5;
    if (lVar27 != 0) {
      uVar26 = 8;
      puVar34 = &UNK_016cdda4;
      goto code_r0x016cc7a4;
    }
    auVar39 = func_0x00f78af4();
    uVar24 = auVar39._8_8_;
    lVar20 = auVar39._0_8_;
    puVar9 = puVar11 + -0x180;
    *(ulong *)(puVar11 + -0x180) = uVar29;
    *(ulong *)(puVar11 + -0x178) = CONCAT44(0,uVar5);
    *(undefined8 *)(puVar11 + -0x170) = 0;
    *(ulong *)(puVar11 + -0x168) = uVar18;
    *(undefined8 *****)(puVar11 + -0x160) = ppppuVar30;
    *(undefined **)(puVar11 + -0x158) = &FlatBuffers_FlatBufferBuilder__PutUlong;
    ppppuVar30 = (undefined8 ****)(puVar11 + -0x160);
    lVar27 = *(long *)(lVar20 + 0x18);
    uVar5 = *(int *)(lVar20 + 0x10) - 8;
    uVar28 = CONCAT44(0,uVar5);
    auVar8._8_8_ = lVar27;
    auVar8._0_8_ = uVar28;
    auVar37._8_4_ = uVar5;
    auVar37._0_8_ = lVar27;
    auVar37._12_4_ = 0;
    *(uint *)(lVar20 + 0x10) = uVar5;
    if (lVar27 != 0) {
      uVar26 = 8;
      puVar34 = &UNK_016cde00;
      goto code_r0x016cc7a4;
    }
    lVar20 = func_0x00f78af4();
    *(undefined8 *****)(puVar11 + -400) = ppppuVar30;
    *(undefined **)(puVar11 + -0x188) = &FlatBuffers_FlatBufferBuilder__PutFloat;
    lVar27 = *(long *)(lVar20 + 0x18);
    auVar8._8_8_ = lVar27;
    uVar5 = *(int *)(lVar20 + 0x10) - 4;
    uVar24 = (ulong)uVar5;
    auVar37._8_4_ = uVar5;
    auVar37._0_8_ = lVar27;
    auVar37._12_4_ = 0;
    *(uint *)(lVar20 + 0x10) = uVar5;
    if (lVar27 != 0) {
      puVar9 = puVar11 + -0x1b0;
      *(undefined8 *)(puVar11 + -0x1b0) = unaff_d9;
      *(undefined8 *)(puVar11 + -0x1a8) = unaff_d8;
      *(undefined8 *)(puVar11 + -0x1a0) = 0;
      *(ulong *)(puVar11 + -0x198) = uVar18;
      *(undefined8 *)(puVar11 + -400) = *(undefined8 *)(puVar11 + -400);
      *(undefined8 *)(puVar11 + -0x188) = *(undefined8 *)(puVar11 + -0x188);
      ppppuVar30 = (undefined8 ****)(puVar11 + -400);
      uVar26 = 4;
      puVar34 = &UNK_016ccba4;
      goto code_r0x016cc7a4;
    }
    lVar20 = func_0x00f78af4();
    *(undefined1 **)(puVar11 + -0x1a0) = puVar11 + -400;
    *(undefined **)(puVar11 + -0x198) = &FlatBuffers_FlatBufferBuilder__PutDouble;
    lVar27 = *(long *)(lVar20 + 0x18);
    auVar8._8_8_ = lVar27;
    uVar5 = *(int *)(lVar20 + 0x10) - 8;
    uVar24 = (ulong)uVar5;
    auVar37._8_4_ = uVar5;
    auVar37._0_8_ = lVar27;
    auVar37._12_4_ = 0;
    *(uint *)(lVar20 + 0x10) = uVar5;
    if (lVar27 != 0) break;
    auVar38 = func_0x00f78af4();
    *(undefined8 *)(puVar11 + -0x1c0) = 0;
    *(ulong *)(puVar11 + -0x1b8) = uVar18;
    *(undefined1 **)(puVar11 + -0x1b0) = puVar11 + -0x1a0;
    *(undefined **)(puVar11 + -0x1a8) = &FlatBuffers_FlatBufferBuilder__AddBool;
    pppuVar32 = (undefined8 ***)(puVar11 + -0x1b0);
    auVar39._8_8_ = 1;
    auVar39._0_8_ = auVar38._0_8_;
    uVar24 = 0;
    puVar34 = &UNK_016cde9c;
    puVar11 = puVar11 + -0x1c0;
    unaff_x22 = uVar29;
  } while( true );
  puVar9 = puVar11 + -0x1c0;
  *(undefined8 *)(puVar11 + -0x1c0) = unaff_d9;
  *(undefined8 *)(puVar11 + -0x1b8) = unaff_d8;
  *(undefined8 *)(puVar11 + -0x1b0) = 0;
  *(ulong *)(puVar11 + -0x1a8) = uVar18;
  *(undefined8 *)(puVar11 + -0x1a0) = *(undefined8 *)(puVar11 + -0x1a0);
  *(undefined8 *)(puVar11 + -0x198) = *(undefined8 *)(puVar11 + -0x198);
  ppppuVar30 = (undefined8 ****)(puVar11 + -0x1a0);
  uVar26 = 8;
  puVar34 = &UNK_016ccc34;
code_r0x016cc7a4:
  do {
    puVar13 = puVar9 + -0x20;
    *(long *)(puVar9 + -0x20) = auVar8._8_8_;
    *(ulong *)(puVar9 + -0x18) = uVar24;
    *(undefined8 *****)(puVar9 + -0x10) = ppppuVar30;
    *(undefined **)(puVar9 + -8) = puVar34;
    puVar31 = puVar9 + -0x10;
    if (auVar37._8_4_ < 0) {
code_r0x016cc7d8:
      func_0x00f78a24(0x3d1fcf8);
      uVar24 = func_0x00f78aec();
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a4d0(uVar24,0);
      uVar25 = func_0x00f78a24(0x3d52ce8);
      func_0x00f78ac0(uVar24,uVar25);
      uVar19 = uVar26;
    }
    else {
      lVar20 = *(long *)(auVar37._0_8_ + 0x10);
      uVar19 = uVar26;
      if (lVar20 != 0) {
        if (auVar37._8_4_ <= *(int *)(lVar20 + 0x18) - (int)uVar26) {
          return auVar37._0_8_;
        }
        goto code_r0x016cc7d8;
      }
    }
    puVar34 = &FlatBuffers_ByteBuffer__PutSbyte;
    auVar37 = func_0x00f78af4();
code_r0x016cc810:
    puVar9 = puVar13 + -0x30;
    *(ulong *)(puVar13 + -0x30) = uVar29;
    *(undefined1 (*) [16])(puVar13 + -0x28) = auVar8;
    *(ulong *)(puVar13 + -0x18) = uVar24;
    *(undefined1 **)(puVar13 + -0x10) = puVar31;
    *(undefined **)(puVar13 + -8) = puVar34;
    ppppuVar30 = (undefined8 ****)(puVar13 + -0x10);
    uVar26 = 1;
    puVar34 = &UNK_016cc834;
    uVar24 = uVar19;
    auVar8 = auVar37;
  } while( true );
}



// ============================================================
// RVA: 0x1656a88 | Core.Networking.HostStanding.AddForceEventEndTimeStamp
// ============================================================

/* WARNING: Possible PIC construction at 0x016ce698: Changing call to branch */
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
/* WARNING: Possible PIC construction at 0x01656b90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01656c54: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x01656c58) */
/* WARNING: Removing unreachable block (ram,0x016ce224) */
/* WARNING: Removing unreachable block (ram,0x01656b94) */
/* WARNING: Removing unreachable block (ram,0x01656ba0) */
/* WARNING: Removing unreachable block (ram,0x01656ba8) */
/* WARNING: Removing unreachable block (ram,0x01656bc4) */
/* WARNING: Removing unreachable block (ram,0x01656bd0) */
/* WARNING: Removing unreachable block (ram,0x01656bdc) */
/* WARNING: Removing unreachable block (ram,0x016ce20c) */
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
/* WARNING: Removing unreachable block (ram,0x016ce69c) */
/* WARNING: Removing unreachable block (ram,0x016cde9c) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_HostStanding__AddForceEventEndTimeStamp
                (ulong param_1,ulong param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar19;
  int iVar18;
  ulong uVar20;
  ulong uVar21;
  undefined8 uVar22;
  ulong uVar23;
  long lVar24;
  long unaff_x19;
  undefined8 unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar25;
  undefined8 ******ppppppuVar26;
  undefined1 *puVar27;
  undefined1 **ppuVar28;
  undefined *puVar29;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [12];
  undefined8 *****apppppuStack_e0 [4];
  undefined8 *****pppppuStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if (param_1 != 0) {
    uVar19 = 1;
    ppuVar28 = (undefined1 **)&stack0xfffffffffffffff0;
    if (((int)param_2 == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    uVar23 = 0;
    puVar29 = &UNK_016ce69c;
    puVar9 = &stack0xffffffffffffffd0;
    uVar20 = 4;
    uVar21 = param_1;
    unaff_x21 = param_2;
    goto code_r0x016cdaac;
  }
  puVar9 = &stack0xfffffffffffffff0;
  auVar30 = func_0x00f78af4();
  uVar19 = auVar30._0_8_;
  if (uVar19 == 0) {
    puVar13 = &stack0xffffffffffffffe0;
    puVar9 = &stack0xffffffffffffffe0;
    puVar29 = &Core_Networking_HostStanding__AddHasEventEndTimeStamp;
    auVar30 = func_0x00f78af4();
    if (auVar30._0_8_ == 0) {
      uVar19 = func_0x00f78af4();
      puStack_38 = &Core_Networking_HostStanding__EndHostStanding;
      puStack_40 = &stack0xffffffffffffffd0;
      if ((bRam0000000003eb5808 & 1) == 0) {
        puStack_40 = &stack0xffffffffffffffd0;
        func_0x00f78a20(0x3d3f110);
        bRam0000000003eb5808 = 1;
      }
      if (uVar19 != 0) {
        ppuVar28 = &puStack_40;
        if ((bRam0000000003eb5cd8 & 1) == 0) {
          func_0x00f78a20(0x3d1f100,0);
          bRam0000000003eb5cd8 = 1;
        }
        if (*(int *)(uVar19 + 0x30) < 0) {
          func_0x00f78a24(0x3d22a38);
          puVar29 = (undefined *)func_0x00f78aec();
          uVar15 = func_0x00f78a24(0x3d6cea8);
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(puVar29,uVar15);
          uVar15 = func_0x00f78a24(0x3d56a30);
          auVar33 = func_0x00f78ac0(puVar29,uVar15);
          pppppuStack_a0 = (undefined8 ******)0x3eb5000;
          ppuVar28 = (undefined1 **)&stack0xffffffffffffff70;
          lVar16 = *(long *)(auVar33._0_8_ + 0x18);
          puStack_98 = puVar29;
          if ((lVar16 != 0) && (*(long *)(lVar16 + 0x10) != 0)) {
            uVar4 = *(int *)(*(long *)(lVar16 + 0x10) + 0x18) - auVar33._8_4_;
            uVar19 = (ulong)uVar4;
            auVar32._8_4_ = uVar4;
            auVar32._0_8_ = lVar16;
            auVar32._12_4_ = 0;
            puVar7 = &stack0xffffffffffffff00;
            apppppuStack_e0[3] = (undefined8 *****)&UNK_016cee20;
            ppppppuVar26 = apppppuStack_e0 + 2;
            auVar6._8_8_ = 4;
            auVar6._0_8_ = lVar16;
            uVar25 = 0x3d201a0;
            apppppuStack_e0[2] = (undefined8 *****)ppuVar28;
            if ((bRam0000000003eb5cd0 & 1) == 0) {
              func_0x00f78a20(0x3d201a0);
              bRam0000000003eb5cd0 = 1;
            }
            uVar20 = 4;
            puVar29 = &UNK_016cc68c;
            goto code_r0x016cc7a4;
          }
          func_0x00f78af4();
          uVar15 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&stack0xffffffffffffff4c,0);
          uVar22 = func_0x00f78a24(0x3d6ce88);
          uVar17 = func_0x00f78a24(0x3d66338);
          uVar15 = /*System.String$$Concat*/ func_0x029be39c(uVar22,uVar15,uVar17,0);
          func_0x00f78a24(0x3d22a38);
          uVar22 = func_0x00f78aec();
          auVar5._8_8_ = uVar22;
          auVar5._0_8_ = uVar15;
          uVar17 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar22,uVar15);
          uVar15 = func_0x00f78a24(0x3d56a50);
          puVar29 = &FlatBuffers_FlatBufferBuilder__Finish;
          auVar30 = func_0x00f78ac0(uVar22,uVar15);
          puVar9 = &stack0xffffffffffffff40;
          while( true ) {
            auVar32 = auVar30;
            uVar19 = auVar32._0_8_;
            *(long *)(puVar9 + -0x20) = auVar5._8_8_;
            *(long *)(puVar9 + -0x18) = auVar5._0_8_;
            *(undefined1 ***)(puVar9 + -0x10) = ppuVar28;
            *(undefined **)(puVar9 + -8) = puVar29;
            ppuVar28 = (undefined1 **)(puVar9 + -0x10);
            uVar4 = *(uint *)(uVar19 + 0x20);
            uVar20 = (ulong)uVar4;
            param_1 = uVar19;
            if ((int)uVar17 == 0) {
              param_1 = 0;
              uVar4 = 0;
            }
            uVar21 = auVar32._8_8_;
            if ((int)uVar17 == 0) {
              uVar23 = 4;
              puVar29 = &UNK_016cef64;
              puVar9 = puVar9 + -0x20;
              param_1 = uVar19;
              goto code_r0x016cdaac;
            }
            if (param_1 != 0) break;
            puVar29 = &FlatBuffers_FlatBufferBuilder__Finish;
            auVar30 = func_0x00f78af4();
            uVar17 = 0;
            puVar9 = puVar9 + -0x20;
            auVar5 = auVar32;
          }
          uVar23 = 8;
          puVar29 = &UNK_016cef10;
          puVar9 = puVar9 + -0x20;
          uVar20 = (ulong)uVar4;
        }
        else {
          uVar23 = 0;
          puVar29 = &UNK_016cea78;
          puVar9 = &stack0xffffffffffffff80;
          param_1 = uVar19;
          uVar20 = 4;
          uVar21 = 0x3eb5000;
        }
        goto code_r0x016cdaac;
      }
      lVar16 = func_0x00f78af4();
      if (lVar16 == 0) {
        auVar31 = func_0x00f78af4();
        lVar16 = auVar31._0_8_;
        if ((auVar31._8_8_ == 0) || (lVar16 == 0)) {
          auVar31 = func_0x00f78af4();
          lVar24 = auVar31._8_8_;
          lVar16 = auVar31._0_8_;
          puVar9 = &stack0xffffffffffffff40;
          puStack_98 = &Core_Networking_HostStanding__CreateStandingsVectorBlock;
          ppppppuVar26 = &pppppuStack_a0;
          unaff_x21 = 0x3eb5000;
          pppppuStack_a0 = (undefined8 *****)&stack0xffffffffffffff90;
          if ((bRam0000000003eb5807 & 1) == 0) {
            func_0x00f78a20(0x3d569a8);
            bRam0000000003eb5807 = 1;
          }
          if ((lVar24 == 0) || (lVar16 == 0)) {
            puVar29 = &Core_Networking_HostStanding__StartStandingsVector;
            auVar33 = func_0x00f78af4();
            iVar18 = auVar33._8_4_;
            auVar31._8_8_ = lVar24;
            auVar31._0_8_ = auVar33._0_8_;
            if (auVar33._0_8_ == 0) {
              apppppuStack_e0[3] =
                   (undefined8 *****)&Core_Networking_HostStanding__StartStandingsVector;
              apppppuStack_e0[2] = ppppppuVar26;
              lVar16 = func_0x00f78af4();
              return *(ulong *)(lVar16 + 8);
            }
          }
          else {
            unaff_x21 = 0x3d56000;
            iVar18 = *(int *)(lVar24 + 0x18);
            puVar29 = &UNK_01656c58;
            puVar9 = &stack0xffffffffffffff40;
          }
        }
        else {
          iVar18 = *(int *)(auVar31._8_8_ + 0x18);
          puVar29 = &UNK_01656b94;
          puVar9 = &stack0xffffffffffffff70;
          ppppppuVar26 = (undefined8 ******)&stack0xffffffffffffff90;
        }
        param_1 = auVar31._0_8_;
        *(ulong *)(puVar9 + -0x30) = unaff_x22;
        *(ulong *)(puVar9 + -0x28) = unaff_x21;
        *(long *)(puVar9 + -0x20) = auVar31._8_8_;
        *(long *)(puVar9 + -0x18) = lVar16;
        *(undefined8 *******)(puVar9 + -0x10) = ppppppuVar26;
        *(undefined **)(puVar9 + -8) = puVar29;
        ppuVar28 = (undefined1 **)(puVar9 + -0x10);
        uVar19 = 4;
        unaff_x21 = 4;
        /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4();
        *(int *)(param_1 + 0x44) = iVar18;
        uVar23 = (ulong)(uint)(iVar18 * 4);
        uVar20 = 4;
        puVar29 = &UNK_016ce188;
        puVar9 = puVar9 + -0x30;
        uVar21 = uVar23;
        unaff_x22 = param_1;
        goto code_r0x016cdaac;
      }
      puVar8 = &stack0xffffffffffffff80;
      puVar12 = &stack0xffffffffffffff80;
      puVar9 = &stack0xffffffffffffffa0;
      unaff_x20 = 3;
      unaff_x21 = 0x3eb5000;
      if ((bRam0000000003eb5cd7 & 1) == 0) {
        func_0x00f78a20(0x3d1f100,3,0);
        bRam0000000003eb5cd7 = 1;
      }
      /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar16);
      if (*(long *)(lVar16 + 0x28) != 0) {
        if (*(int *)(*(long *)(lVar16 + 0x28) + 0x18) < 3) {
          uVar15 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,3);
          *(undefined8 *)(lVar16 + 0x28) = uVar15;
        }
        *(undefined4 *)(lVar16 + 0x30) = 3;
        puVar29 = &UNK_016ce320;
        goto code_r0x016cda04;
      }
      puVar29 = &FlatBuffers_FlatBufferBuilder__Slot;
      auVar33 = func_0x00f78af4();
      unaff_x19 = lVar16;
      goto code_r0x016ce380;
    }
    uVar19 = 2;
    param_4 = 0;
    uVar21 = unaff_x21;
  }
  else {
    param_4 = 0;
    puVar29 = &Core_Networking_HostStanding__AddStandings;
    auVar33._8_4_ = 0;
    auVar33._0_8_ = uVar19;
    if ((auVar30._8_4_ == 0) && (*(char *)(uVar19 + 0x48) == '\0')) {
      return uVar19;
    }
    /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(uVar19,auVar30._8_8_,auVar30._8_8_,0,0);
    puVar12 = &stack0xfffffffffffffff0;
code_r0x016ce380:
    lVar16 = auVar33._0_8_;
    puVar13 = puVar12 + -0x20;
    puVar8 = puVar12 + -0x20;
    *(undefined8 *)(puVar12 + -0x20) = unaff_x20;
    *(long *)(puVar12 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar12 + -0x10) = puVar9;
    *(undefined **)(puVar12 + -8) = puVar29;
    puVar9 = puVar12 + -0x10;
    if (auVar33._8_4_ < *(int *)(lVar16 + 0x30)) {
      puVar29 = &UNK_016ce3a4;
code_r0x016cda04:
      *(undefined1 **)(puVar8 + -0x10) = puVar9;
      *(undefined **)(puVar8 + -8) = puVar29;
      if ((*(long *)(lVar16 + 0x18) != 0) &&
         (lVar24 = *(long *)(*(long *)(lVar16 + 0x18) + 0x10), lVar24 != 0)) {
        return (ulong)(uint)(*(int *)(lVar24 + 0x18) - *(int *)(lVar16 + 0x10));
      }
      lVar16 = func_0x00f78af4();
      return (ulong)*(byte *)(lVar16 + 0x48);
    }
    func_0x00f78a24(0x3d22738);
    unaff_x19 = func_0x00f78aec();
    uVar15 = func_0x00f78a24(0x3d6ceb8);
    uVar22 = 0;
    /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(unaff_x19,uVar15);
    uVar15 = func_0x00f78a24(0x3d56a58);
    func_0x00f78ac0(unaff_x19,uVar15);
    func_0x00f78af4();
    uVar15 = func_0x00f78b24();
    puVar29 = &FlatBuffers_FlatBufferBuilder__AddBool;
    auVar32 = func_0x00f78ac0(uVar15,0);
    uVar19 = auVar32._8_8_;
    auVar30._8_8_ = uVar22;
    auVar30._0_8_ = auVar32._0_8_;
    uVar21 = unaff_x21;
  }
  unaff_x21 = auVar30._8_8_;
  param_1 = auVar30._0_8_;
  *(ulong *)(puVar13 + -0x30) = unaff_x22;
  *(ulong *)(puVar13 + -0x28) = uVar21;
  *(undefined8 *)(puVar13 + -0x20) = unaff_x20;
  *(long *)(puVar13 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar13 + -0x10) = puVar9;
  *(undefined **)(puVar13 + -8) = puVar29;
  ppuVar28 = (undefined1 **)(puVar13 + -0x10);
  if ((auVar30._8_4_ == param_4) && (*(char *)(param_1 + 0x48) == '\0')) {
    return param_1;
  }
  uVar23 = 0;
  puVar29 = &UNK_016ce46c;
  puVar9 = puVar13 + -0x30;
  uVar20 = 1;
  uVar21 = param_1;
code_r0x016cdaac:
  do {
    puVar7 = puVar9 + -0x30;
    *(ulong *)(puVar9 + -0x30) = unaff_x22;
    *(ulong *)(puVar9 + -0x28) = unaff_x21;
    *(ulong *)(puVar9 + -0x20) = uVar21;
    *(ulong *)(puVar9 + -0x18) = uVar19;
    *(undefined1 ***)(puVar9 + -0x10) = ppuVar28;
    *(undefined **)(puVar9 + -8) = puVar29;
    iVar18 = (int)uVar20;
    if (*(int *)(param_1 + 0x20) < iVar18) {
      *(int *)(param_1 + 0x20) = iVar18;
    }
    uVar20 = uVar21;
    uVar25 = unaff_x22;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar16 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar16 != 0)) {
      uVar2 = *(uint *)(lVar16 + 0x18);
      iVar3 = *(int *)(param_1 + 0x10);
      uVar1 = iVar3 - (uVar2 + (int)uVar23) & iVar18 - 1U;
      uVar20 = CONCAT44(0,uVar1);
      uVar4 = (int)uVar23 + iVar18 + uVar1;
      uVar25 = (ulong)uVar4;
      uVar19 = param_1;
      while (unaff_x21 = (ulong)uVar2, iVar3 < (int)uVar4) {
        uVar19 = /*FlatBuffers.FlatBufferBuilder$$GrowBuffer*/ func_0x016cda78(param_1);
        if ((*(long *)(param_1 + 0x18) == 0) ||
           (lVar16 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar16 == 0))
        goto code_r0x016cdb68;
        iVar3 = *(int *)(param_1 + 0x10) - uVar2;
        uVar2 = *(uint *)(lVar16 + 0x18);
        iVar3 = iVar3 + uVar2;
        *(int *)(param_1 + 0x10) = iVar3;
      }
      if ((int)uVar1 < 1) {
        return uVar19;
      }
      uVar21 = *(ulong *)(puVar9 + -0x20);
      uVar19 = *(ulong *)(puVar9 + -0x18);
      unaff_x22 = *(ulong *)(puVar9 + -0x30);
      unaff_x21 = *(ulong *)(puVar9 + -0x28);
      *(undefined8 *)(puVar9 + -0x10) = *(undefined8 *)(puVar9 + -0x10);
      *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
      lVar16 = *(long *)(param_1 + 0x18);
      auVar6._8_8_ = lVar16;
      auVar6._0_8_ = uVar20;
      uVar1 = *(int *)(param_1 + 0x10) - uVar1;
      uVar25 = (ulong)uVar1;
      auVar32._8_4_ = uVar1;
      auVar32._0_8_ = lVar16;
      auVar32._12_4_ = 0;
      *(uint *)(param_1 + 0x10) = uVar1;
      if (lVar16 != 0) {
        *(ulong *)(puVar9 + -0x30) = unaff_x22;
        *(ulong *)(puVar9 + -0x28) = unaff_x21;
        *(ulong *)(puVar9 + -0x20) = uVar21;
        *(ulong *)(puVar9 + -0x18) = uVar19;
        *(undefined8 *)(puVar9 + -0x10) = *(undefined8 *)(puVar9 + -0x10);
        *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
        ppppppuVar26 = (undefined8 ******)(puVar9 + -0x10);
        puVar29 = &UNK_016cc908;
        uVar19 = 0;
        goto code_r0x016cc7a4;
      }
      lVar16 = func_0x00f78af4();
      ppuVar28 = (undefined1 **)(puVar9 + -0x20);
      *(undefined1 **)(puVar9 + -0x20) = puVar9 + -0x10;
      *(undefined **)(puVar9 + -0x18) = &FlatBuffers_FlatBufferBuilder__GrowBuffer;
      if ((*(long *)(lVar16 + 0x18) != 0) &&
         (plVar14 = *(long **)(*(long *)(lVar16 + 0x18) + 0x10), plVar14 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016cdaa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar19 = (**(code **)(*plVar14 + 0x178))
                           (plVar14,(int)plVar14[3] << 1,*(undefined8 *)(*plVar14 + 0x180));
        return uVar19;
      }
      puVar29 = &FlatBuffers_FlatBufferBuilder__Prep;
      auVar30 = func_0x00f78af4();
      uVar20 = auVar30._8_8_;
      param_1 = auVar30._0_8_;
      puVar9 = puVar9 + -0x20;
      goto code_r0x016cdaac;
    }
code_r0x016cdb68:
    auVar6._8_8_ = uVar20;
    auVar6._0_8_ = unaff_x21;
    auVar30 = func_0x00f78af4();
    uVar19 = auVar30._8_8_;
    lVar24 = auVar30._0_8_;
    *(undefined1 **)(puVar9 + -0x40) = puVar9 + -0x10;
    *(undefined **)(puVar9 + -0x38) = &FlatBuffers_FlatBufferBuilder__PutBool;
    lVar16 = *(long *)(lVar24 + 0x18);
    iVar18 = *(int *)(lVar24 + 0x10) + -1;
    *(int *)(lVar24 + 0x10) = iVar18;
    if (lVar16 != 0) {
      puVar10 = puVar9 + -0x30;
      uVar15 = *(undefined8 *)(puVar9 + -0x40);
      uVar22 = *(undefined8 *)(puVar9 + -0x38);
FlatBuffers_ByteBuffer__PutByte:
      auVar6._8_4_ = iVar18;
      auVar6._0_8_ = lVar16;
      auVar6._12_4_ = 0;
      auVar32._8_4_ = iVar18;
      auVar32._0_8_ = lVar16;
      auVar32._12_4_ = 0;
      puVar7 = puVar10 + -0x30;
      *(ulong *)(puVar10 + -0x30) = uVar25;
      *(ulong *)(puVar10 + -0x28) = unaff_x21;
      *(ulong *)(puVar10 + -0x20) = uVar20;
      *(ulong *)(puVar10 + -0x18) = param_1;
      *(undefined8 *)(puVar10 + -0x10) = uVar15;
      *(undefined8 *)(puVar10 + -8) = uVar22;
      ppppppuVar26 = (undefined8 ******)(puVar10 + -0x10);
      uVar20 = 1;
      puVar29 = &UNK_016cc89c;
      goto code_r0x016cc7a4;
    }
    auVar30 = func_0x00f78af4();
    uVar21 = auVar30._8_8_;
    lVar16 = auVar30._0_8_;
    *(undefined1 **)(puVar9 + -0x50) = puVar9 + -0x40;
    *(undefined **)(puVar9 + -0x48) = &FlatBuffers_FlatBufferBuilder__PutSbyte;
    iVar18 = *(int *)(lVar16 + 0x10) + -1;
    auVar32._8_4_ = iVar18;
    auVar32._0_8_ = *(long *)(lVar16 + 0x18);
    auVar32._12_4_ = 0;
    *(int *)(lVar16 + 0x10) = iVar18;
    if (*(long *)(lVar16 + 0x18) != 0) {
      puVar11 = puVar9 + -0x40;
      puVar27 = *(undefined1 **)(puVar9 + -0x50);
      puVar29 = *(undefined **)(puVar9 + -0x48);
      uVar19 = param_1;
      goto code_r0x016cc810;
    }
    auVar30 = func_0x00f78af4();
    uVar19 = auVar30._8_8_;
    lVar24 = auVar30._0_8_;
    *(undefined1 **)(puVar9 + -0x60) = puVar9 + -0x50;
    *(undefined **)(puVar9 + -0x58) = &FlatBuffers_FlatBufferBuilder__PutByte;
    lVar16 = *(long *)(lVar24 + 0x18);
    iVar18 = *(int *)(lVar24 + 0x10) + -1;
    *(int *)(lVar24 + 0x10) = iVar18;
    if (lVar16 != 0) {
      puVar10 = puVar9 + -0x50;
      uVar15 = *(undefined8 *)(puVar9 + -0x60);
      uVar22 = *(undefined8 *)(puVar9 + -0x58);
      goto FlatBuffers_ByteBuffer__PutByte;
    }
    auVar30 = func_0x00f78af4();
    uVar19 = auVar30._8_8_;
    lVar16 = auVar30._0_8_;
    puVar7 = puVar9 + -0x90;
    *(ulong *)(puVar9 + -0x90) = uVar25;
    *(ulong *)(puVar9 + -0x88) = unaff_x21;
    *(ulong *)(puVar9 + -0x80) = uVar20;
    *(ulong *)(puVar9 + -0x78) = param_1;
    *(undefined1 **)(puVar9 + -0x70) = puVar9 + -0x60;
    *(undefined **)(puVar9 + -0x68) = &FlatBuffers_FlatBufferBuilder__PutShort;
    ppppppuVar26 = (undefined8 ******)(puVar9 + -0x70);
    lVar24 = *(long *)(lVar16 + 0x18);
    uVar4 = *(int *)(lVar16 + 0x10) - 2;
    auVar6._8_8_ = lVar24;
    auVar6._0_8_ = CONCAT44(0,uVar4);
    auVar32._8_4_ = uVar4;
    auVar32._0_8_ = lVar24;
    auVar32._12_4_ = 0;
    *(uint *)(lVar16 + 0x10) = uVar4;
    if (lVar24 != 0) {
      uVar20 = 2;
      puVar29 = &UNK_016cdc34;
      goto code_r0x016cc7a4;
    }
    auVar30 = func_0x00f78af4();
    uVar19 = auVar30._8_8_;
    lVar16 = auVar30._0_8_;
    puVar7 = puVar9 + -0xc0;
    *(ulong *)(puVar9 + -0xc0) = uVar25;
    *(ulong *)(puVar9 + -0xb8) = CONCAT44(0,uVar4);
    *(undefined8 *)(puVar9 + -0xb0) = 0;
    *(ulong *)(puVar9 + -0xa8) = param_1;
    *(undefined8 *******)(puVar9 + -0xa0) = ppppppuVar26;
    *(undefined **)(puVar9 + -0x98) = &FlatBuffers_FlatBufferBuilder__PutUshort;
    ppppppuVar26 = (undefined8 ******)(puVar9 + -0xa0);
    lVar24 = *(long *)(lVar16 + 0x18);
    uVar4 = *(int *)(lVar16 + 0x10) - 2;
    auVar6._8_8_ = lVar24;
    auVar6._0_8_ = CONCAT44(0,uVar4);
    auVar32._8_4_ = uVar4;
    auVar32._0_8_ = lVar24;
    auVar32._12_4_ = 0;
    *(uint *)(lVar16 + 0x10) = uVar4;
    if (lVar24 != 0) {
      uVar20 = 2;
      puVar29 = &UNK_016cdc90;
      goto code_r0x016cc7a4;
    }
    auVar30 = func_0x00f78af4();
    uVar19 = auVar30._8_8_;
    lVar16 = auVar30._0_8_;
    puVar7 = puVar9 + -0xf0;
    *(ulong *)(puVar9 + -0xf0) = uVar25;
    *(ulong *)(puVar9 + -0xe8) = CONCAT44(0,uVar4);
    *(undefined8 *)(puVar9 + -0xe0) = 0;
    *(ulong *)(puVar9 + -0xd8) = param_1;
    *(undefined8 *******)(puVar9 + -0xd0) = ppppppuVar26;
    *(undefined **)(puVar9 + -200) = &FlatBuffers_FlatBufferBuilder__PutInt;
    ppppppuVar26 = (undefined8 ******)(puVar9 + -0xd0);
    lVar24 = *(long *)(lVar16 + 0x18);
    uVar4 = *(int *)(lVar16 + 0x10) - 4;
    auVar6._8_8_ = lVar24;
    auVar6._0_8_ = CONCAT44(0,uVar4);
    auVar32._8_4_ = uVar4;
    auVar32._0_8_ = lVar24;
    auVar32._12_4_ = 0;
    *(uint *)(lVar16 + 0x10) = uVar4;
    if (lVar24 != 0) {
      uVar20 = 4;
      puVar29 = &UNK_016cdcec;
      goto code_r0x016cc7a4;
    }
    auVar30 = func_0x00f78af4();
    uVar19 = auVar30._8_8_;
    lVar16 = auVar30._0_8_;
    puVar7 = puVar9 + -0x120;
    *(ulong *)(puVar9 + -0x120) = uVar25;
    *(ulong *)(puVar9 + -0x118) = CONCAT44(0,uVar4);
    *(undefined8 *)(puVar9 + -0x110) = 0;
    *(ulong *)(puVar9 + -0x108) = param_1;
    *(undefined8 *******)(puVar9 + -0x100) = ppppppuVar26;
    *(undefined **)(puVar9 + -0xf8) = &FlatBuffers_FlatBufferBuilder__PutUint;
    ppppppuVar26 = (undefined8 ******)(puVar9 + -0x100);
    lVar24 = *(long *)(lVar16 + 0x18);
    uVar4 = *(int *)(lVar16 + 0x10) - 4;
    auVar6._8_8_ = lVar24;
    auVar6._0_8_ = CONCAT44(0,uVar4);
    auVar32._8_4_ = uVar4;
    auVar32._0_8_ = lVar24;
    auVar32._12_4_ = 0;
    *(uint *)(lVar16 + 0x10) = uVar4;
    if (lVar24 != 0) {
      uVar20 = 4;
      puVar29 = &UNK_016cdd48;
      goto code_r0x016cc7a4;
    }
    auVar30 = func_0x00f78af4();
    uVar19 = auVar30._8_8_;
    lVar16 = auVar30._0_8_;
    puVar7 = puVar9 + -0x150;
    *(ulong *)(puVar9 + -0x150) = uVar25;
    *(ulong *)(puVar9 + -0x148) = CONCAT44(0,uVar4);
    *(undefined8 *)(puVar9 + -0x140) = 0;
    *(ulong *)(puVar9 + -0x138) = param_1;
    *(undefined8 *******)(puVar9 + -0x130) = ppppppuVar26;
    *(undefined **)(puVar9 + -0x128) = &FlatBuffers_FlatBufferBuilder__PutLong;
    ppppppuVar26 = (undefined8 ******)(puVar9 + -0x130);
    lVar24 = *(long *)(lVar16 + 0x18);
    uVar4 = *(int *)(lVar16 + 0x10) - 8;
    auVar6._8_8_ = lVar24;
    auVar6._0_8_ = CONCAT44(0,uVar4);
    auVar32._8_4_ = uVar4;
    auVar32._0_8_ = lVar24;
    auVar32._12_4_ = 0;
    *(uint *)(lVar16 + 0x10) = uVar4;
    if (lVar24 != 0) {
      uVar20 = 8;
      puVar29 = &UNK_016cdda4;
      goto code_r0x016cc7a4;
    }
    auVar30 = func_0x00f78af4();
    uVar19 = auVar30._8_8_;
    lVar16 = auVar30._0_8_;
    puVar7 = puVar9 + -0x180;
    *(ulong *)(puVar9 + -0x180) = uVar25;
    *(ulong *)(puVar9 + -0x178) = CONCAT44(0,uVar4);
    *(undefined8 *)(puVar9 + -0x170) = 0;
    *(ulong *)(puVar9 + -0x168) = param_1;
    *(undefined8 *******)(puVar9 + -0x160) = ppppppuVar26;
    *(undefined **)(puVar9 + -0x158) = &FlatBuffers_FlatBufferBuilder__PutUlong;
    ppppppuVar26 = (undefined8 ******)(puVar9 + -0x160);
    lVar24 = *(long *)(lVar16 + 0x18);
    uVar4 = *(int *)(lVar16 + 0x10) - 8;
    unaff_x21 = CONCAT44(0,uVar4);
    auVar6._8_8_ = lVar24;
    auVar6._0_8_ = unaff_x21;
    auVar32._8_4_ = uVar4;
    auVar32._0_8_ = lVar24;
    auVar32._12_4_ = 0;
    *(uint *)(lVar16 + 0x10) = uVar4;
    if (lVar24 != 0) {
      uVar20 = 8;
      puVar29 = &UNK_016cde00;
      goto code_r0x016cc7a4;
    }
    lVar16 = func_0x00f78af4();
    *(undefined8 *******)(puVar9 + -400) = ppppppuVar26;
    *(undefined **)(puVar9 + -0x188) = &FlatBuffers_FlatBufferBuilder__PutFloat;
    lVar24 = *(long *)(lVar16 + 0x18);
    auVar6._8_8_ = lVar24;
    uVar4 = *(int *)(lVar16 + 0x10) - 4;
    uVar19 = (ulong)uVar4;
    auVar32._8_4_ = uVar4;
    auVar32._0_8_ = lVar24;
    auVar32._12_4_ = 0;
    *(uint *)(lVar16 + 0x10) = uVar4;
    if (lVar24 != 0) {
      puVar7 = puVar9 + -0x1b0;
      *(undefined8 *)(puVar9 + -0x1b0) = unaff_d9;
      *(undefined8 *)(puVar9 + -0x1a8) = unaff_d8;
      *(undefined8 *)(puVar9 + -0x1a0) = 0;
      *(ulong *)(puVar9 + -0x198) = param_1;
      *(undefined8 *)(puVar9 + -400) = *(undefined8 *)(puVar9 + -400);
      *(undefined8 *)(puVar9 + -0x188) = *(undefined8 *)(puVar9 + -0x188);
      ppppppuVar26 = (undefined8 ******)(puVar9 + -400);
      uVar20 = 4;
      puVar29 = &UNK_016ccba4;
      goto code_r0x016cc7a4;
    }
    lVar16 = func_0x00f78af4();
    *(undefined1 **)(puVar9 + -0x1a0) = puVar9 + -400;
    *(undefined **)(puVar9 + -0x198) = &FlatBuffers_FlatBufferBuilder__PutDouble;
    lVar24 = *(long *)(lVar16 + 0x18);
    auVar6._8_8_ = lVar24;
    uVar4 = *(int *)(lVar16 + 0x10) - 8;
    uVar19 = (ulong)uVar4;
    auVar32._8_4_ = uVar4;
    auVar32._0_8_ = lVar24;
    auVar32._12_4_ = 0;
    *(uint *)(lVar16 + 0x10) = uVar4;
    if (lVar24 != 0) break;
    auVar30 = func_0x00f78af4();
    uVar19 = auVar30._8_8_;
    uVar21 = auVar30._0_8_;
    *(undefined8 *)(puVar9 + -0x1c0) = 0;
    *(ulong *)(puVar9 + -0x1b8) = param_1;
    *(undefined1 **)(puVar9 + -0x1b0) = puVar9 + -0x1a0;
    *(undefined **)(puVar9 + -0x1a8) = &FlatBuffers_FlatBufferBuilder__AddBool;
    ppuVar28 = (undefined1 **)(puVar9 + -0x1b0);
    uVar20 = 1;
    uVar23 = 0;
    puVar29 = &UNK_016cde9c;
    puVar9 = puVar9 + -0x1c0;
    param_1 = uVar21;
    unaff_x22 = uVar25;
  } while( true );
  puVar7 = puVar9 + -0x1c0;
  *(undefined8 *)(puVar9 + -0x1c0) = unaff_d9;
  *(undefined8 *)(puVar9 + -0x1b8) = unaff_d8;
  *(undefined8 *)(puVar9 + -0x1b0) = 0;
  *(ulong *)(puVar9 + -0x1a8) = param_1;
  *(undefined8 *)(puVar9 + -0x1a0) = *(undefined8 *)(puVar9 + -0x1a0);
  *(undefined8 *)(puVar9 + -0x198) = *(undefined8 *)(puVar9 + -0x198);
  ppppppuVar26 = (undefined8 ******)(puVar9 + -0x1a0);
  uVar20 = 8;
  puVar29 = &UNK_016ccc34;
code_r0x016cc7a4:
  do {
    puVar11 = puVar7 + -0x20;
    *(long *)(puVar7 + -0x20) = auVar6._8_8_;
    *(ulong *)(puVar7 + -0x18) = uVar19;
    *(undefined8 *******)(puVar7 + -0x10) = ppppppuVar26;
    *(undefined **)(puVar7 + -8) = puVar29;
    puVar27 = puVar7 + -0x10;
    if (auVar32._8_4_ < 0) {
code_r0x016cc7d8:
      func_0x00f78a24(0x3d1fcf8);
      uVar19 = func_0x00f78aec();
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a4d0(uVar19,0);
      uVar15 = func_0x00f78a24(0x3d52ce8);
      func_0x00f78ac0(uVar19,uVar15);
      uVar21 = uVar20;
    }
    else {
      lVar16 = *(long *)(auVar32._0_8_ + 0x10);
      uVar21 = uVar20;
      if (lVar16 != 0) {
        if (auVar32._8_4_ <= *(int *)(lVar16 + 0x18) - (int)uVar20) {
          return auVar32._0_8_;
        }
        goto code_r0x016cc7d8;
      }
    }
    puVar29 = &FlatBuffers_ByteBuffer__PutSbyte;
    auVar32 = func_0x00f78af4();
code_r0x016cc810:
    puVar7 = puVar11 + -0x30;
    *(ulong *)(puVar11 + -0x30) = uVar25;
    *(undefined1 (*) [16])(puVar11 + -0x28) = auVar6;
    *(ulong *)(puVar11 + -0x18) = uVar19;
    *(undefined1 **)(puVar11 + -0x10) = puVar27;
    *(undefined **)(puVar11 + -8) = puVar29;
    ppppppuVar26 = (undefined8 ******)(puVar11 + -0x10);
    uVar20 = 1;
    puVar29 = &UNK_016cc834;
    uVar19 = uVar21;
    auVar6 = auVar32;
  } while( true );
}



// ============================================================
// RVA: 0x1656aac | Core.Networking.HostStanding.AddStandings
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
/* WARNING: Possible PIC construction at 0x01656b90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01656c54: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x01656c58) */
/* WARNING: Removing unreachable block (ram,0x016ce224) */
/* WARNING: Removing unreachable block (ram,0x01656b94) */
/* WARNING: Removing unreachable block (ram,0x01656ba0) */
/* WARNING: Removing unreachable block (ram,0x01656ba8) */
/* WARNING: Removing unreachable block (ram,0x01656bc4) */
/* WARNING: Removing unreachable block (ram,0x01656bd0) */
/* WARNING: Removing unreachable block (ram,0x01656bdc) */
/* WARNING: Removing unreachable block (ram,0x016ce20c) */
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
/* WARNING: Removing unreachable block (ram,0x016cde9c) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_HostStanding__AddStandings
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
  undefined1 *puVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  int iVar22;
  undefined8 uVar23;
  ulong uVar24;
  ulong unaff_x19;
  undefined8 unaff_x20;
  ulong uVar25;
  long lVar26;
  ulong unaff_x21;
  ulong unaff_x22;
  undefined1 *unaff_x29;
  undefined8 ****ppppuVar27;
  undefined1 *puVar28;
  undefined8 ***pppuVar29;
  undefined *unaff_x30;
  undefined *puVar30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [12];
  long alStack_d0 [2];
  undefined8 ***apppuStack_c0 [2];
  undefined8 ***pppuStack_90;
  undefined *puStack_88;
  undefined8 *puStack_30;
  undefined *puStack_28;
  
  if (param_1 == 0) {
    puVar14 = &stack0xfffffffffffffff0;
    unaff_x29 = &stack0xfffffffffffffff0;
    puVar30 = &Core_Networking_HostStanding__AddHasEventEndTimeStamp;
    auVar31 = func_0x00f78af4();
    if (auVar31._0_8_ == 0) {
      lVar15 = func_0x00f78af4();
      puStack_28 = &Core_Networking_HostStanding__EndHostStanding;
      puStack_30 = (undefined8 *)&stack0xffffffffffffffe0;
      if ((bRam0000000003eb5808 & 1) == 0) {
        puStack_30 = (undefined8 *)&stack0xffffffffffffffe0;
        func_0x00f78a20(0x3d3f110);
        bRam0000000003eb5808 = 1;
      }
      if (lVar15 != 0) {
        pppuVar29 = (undefined8 ***)&puStack_30;
        auVar35._8_8_ = lVar15;
        auVar35._0_8_ = 0x3eb5000;
        if ((bRam0000000003eb5cd8 & 1) == 0) {
          func_0x00f78a20(0x3d1f100,0);
          bRam0000000003eb5cd8 = 1;
        }
        if (*(int *)(lVar15 + 0x30) < 0) {
          func_0x00f78a24(0x3d22a38);
          puVar30 = (undefined *)func_0x00f78aec();
          uVar20 = func_0x00f78a24(0x3d6cea8);
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(puVar30,uVar20);
          uVar20 = func_0x00f78a24(0x3d56a30);
          auVar36 = func_0x00f78ac0(puVar30,uVar20);
          pppuStack_90 = (undefined8 ****)0x3eb5000;
          pppuVar29 = (undefined8 ***)&stack0xffffffffffffff80;
          lVar15 = *(long *)(auVar36._0_8_ + 0x18);
          puStack_88 = puVar30;
          if ((lVar15 != 0) && (*(long *)(lVar15 + 0x10) != 0)) {
            uVar5 = *(int *)(*(long *)(lVar15 + 0x10) + 0x18) - auVar36._8_4_;
            uVar24 = (ulong)uVar5;
            auVar33._8_4_ = uVar5;
            auVar33._0_8_ = lVar15;
            auVar33._12_4_ = 0;
            puVar9 = &stack0xffffffffffffff10;
            apppuStack_c0[1] = (undefined8 ***)&UNK_016cee20;
            ppppuVar27 = apppuStack_c0;
            auVar8._8_8_ = 4;
            auVar8._0_8_ = lVar15;
            uVar16 = 0x3d201a0;
            apppuStack_c0[0] = pppuVar29;
            if ((bRam0000000003eb5cd0 & 1) == 0) {
              func_0x00f78a20(0x3d201a0);
              bRam0000000003eb5cd0 = 1;
            }
            uVar25 = 4;
            puVar30 = &UNK_016cc68c;
            goto code_r0x016cc7a4;
          }
          func_0x00f78af4();
          uVar20 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&stack0xffffffffffffff5c,0);
          uVar23 = func_0x00f78a24(0x3d6ce88);
          uVar21 = func_0x00f78a24(0x3d66338);
          lVar15 = /*System.String$$Concat*/ func_0x029be39c(uVar23,uVar20,uVar21,0);
          func_0x00f78a24(0x3d22a38);
          uVar20 = func_0x00f78aec();
          uVar21 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar20,lVar15);
          uVar23 = func_0x00f78a24(0x3d56a50);
          puVar30 = &FlatBuffers_FlatBufferBuilder__Finish;
          auVar31 = func_0x00f78ac0(uVar20,uVar23);
          puVar11 = &stack0xffffffffffffff50;
          while( true ) {
            uVar23 = auVar31._8_8_;
            lVar26 = auVar31._0_8_;
            auVar35._8_8_ = lVar26;
            auVar35._0_8_ = uVar23;
            auVar7._8_8_ = lVar26;
            auVar7._0_8_ = uVar23;
            *(undefined8 *)(puVar11 + -0x20) = uVar20;
            *(long *)(puVar11 + -0x18) = lVar15;
            *(undefined8 ****)(puVar11 + -0x10) = pppuVar29;
            *(undefined **)(puVar11 + -8) = puVar30;
            pppuVar29 = (undefined8 ***)(puVar11 + -0x10);
            uVar4 = *(undefined4 *)(lVar26 + 0x20);
            auVar34._8_4_ = uVar4;
            auVar34._0_8_ = lVar26;
            auVar34._12_4_ = 0;
            lVar15 = lVar26;
            if ((int)uVar21 == 0) {
              lVar15 = 0;
              uVar4 = 0;
            }
            auVar6._8_4_ = uVar4;
            auVar6._0_8_ = lVar15;
            auVar6._12_4_ = 0;
            if ((int)uVar21 == 0) {
              uVar24 = 4;
              puVar30 = &UNK_016cef64;
              puVar11 = puVar11 + -0x20;
              goto code_r0x016cdaac;
            }
            if (lVar15 != 0) break;
            puVar30 = &FlatBuffers_FlatBufferBuilder__Finish;
            auVar31 = func_0x00f78af4();
            uVar21 = 0;
            puVar11 = puVar11 + -0x20;
            lVar15 = lVar26;
            uVar20 = uVar23;
          }
          uVar24 = 8;
          puVar30 = &UNK_016cef10;
          puVar11 = puVar11 + -0x20;
          auVar34 = auVar6;
          auVar35 = auVar7;
        }
        else {
          auVar34._8_8_ = 4;
          auVar34._0_8_ = lVar15;
          uVar24 = 0;
          puVar30 = &UNK_016cea78;
          puVar11 = &stack0xffffffffffffff90;
        }
        goto code_r0x016cdaac;
      }
      uVar16 = func_0x00f78af4();
      if (uVar16 == 0) {
        auVar32 = func_0x00f78af4();
        lVar15 = auVar32._0_8_;
        if ((auVar32._8_8_ == 0) || (lVar15 == 0)) {
          auVar32 = func_0x00f78af4();
          lVar26 = auVar32._8_8_;
          lVar15 = auVar32._0_8_;
          puVar11 = &stack0xffffffffffffff50;
          puStack_88 = &Core_Networking_HostStanding__CreateStandingsVectorBlock;
          ppppuVar27 = &pppuStack_90;
          unaff_x21 = 0x3eb5000;
          pppuStack_90 = (undefined8 ***)&stack0xffffffffffffffa0;
          if ((bRam0000000003eb5807 & 1) == 0) {
            func_0x00f78a20(0x3d569a8);
            bRam0000000003eb5807 = 1;
          }
          if ((lVar26 == 0) || (lVar15 == 0)) {
            puVar30 = &Core_Networking_HostStanding__StartStandingsVector;
            auVar36 = func_0x00f78af4();
            iVar22 = auVar36._8_4_;
            auVar32._8_8_ = lVar26;
            auVar32._0_8_ = auVar36._0_8_;
            if (auVar36._0_8_ == 0) {
              apppuStack_c0[1] = (undefined8 ***)&Core_Networking_HostStanding__StartStandingsVector
              ;
              apppuStack_c0[0] = ppppuVar27;
              lVar15 = func_0x00f78af4();
              return *(ulong *)(lVar15 + 8);
            }
          }
          else {
            unaff_x21 = 0x3d56000;
            iVar22 = *(int *)(lVar26 + 0x18);
            puVar30 = &UNK_01656c58;
            puVar11 = &stack0xffffffffffffff50;
          }
        }
        else {
          iVar22 = *(int *)(auVar32._8_8_ + 0x18);
          puVar30 = &UNK_01656b94;
          puVar11 = &stack0xffffffffffffff80;
          ppppuVar27 = (undefined8 ****)&stack0xffffffffffffffa0;
        }
        uVar16 = auVar32._0_8_;
        *(ulong *)(puVar11 + -0x30) = unaff_x22;
        *(ulong *)(puVar11 + -0x28) = unaff_x21;
        *(long *)(puVar11 + -0x20) = auVar32._8_8_;
        *(long *)(puVar11 + -0x18) = lVar15;
        *(undefined8 *****)(puVar11 + -0x10) = ppppuVar27;
        *(undefined **)(puVar11 + -8) = puVar30;
        pppuVar29 = (undefined8 ***)(puVar11 + -0x10);
        unaff_x21 = 4;
        /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4();
        *(int *)(uVar16 + 0x44) = iVar22;
        uVar24 = CONCAT44(0,iVar22 * 4);
        auVar35._8_8_ = 4;
        auVar35._0_8_ = uVar24;
        auVar34._8_8_ = 4;
        auVar34._0_8_ = uVar16;
        puVar30 = &UNK_016ce188;
        puVar11 = puVar11 + -0x30;
        unaff_x22 = uVar16;
        goto code_r0x016cdaac;
      }
      puVar10 = &stack0xffffffffffffff90;
      puVar11 = &stack0xffffffffffffff90;
      unaff_x29 = &stack0xffffffffffffffb0;
      unaff_x20 = 3;
      unaff_x21 = 0x3eb5000;
      if ((bRam0000000003eb5cd7 & 1) == 0) {
        func_0x00f78a20(0x3d1f100,3,0);
        bRam0000000003eb5cd7 = 1;
      }
      /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(uVar16);
      if (*(long *)(uVar16 + 0x28) != 0) {
        if (*(int *)(*(long *)(uVar16 + 0x28) + 0x18) < 3) {
          uVar20 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,3);
          *(undefined8 *)(uVar16 + 0x28) = uVar20;
        }
        *(undefined4 *)(uVar16 + 0x30) = 3;
        puVar30 = &UNK_016ce320;
        goto code_r0x016cda04;
      }
      unaff_x30 = &FlatBuffers_FlatBufferBuilder__Slot;
      auVar36 = func_0x00f78af4();
      iVar22 = auVar36._8_4_;
      param_1 = auVar36._0_8_;
      unaff_x19 = uVar16;
      goto code_r0x016ce380;
    }
    uVar20 = 2;
    param_4 = 0;
    uVar16 = unaff_x21;
  }
  else {
    param_4 = 0;
    iVar22 = 0;
    if (((int)param_2 == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(param_1,param_2,param_2,0,0);
    puVar11 = (undefined1 *)register0x00000008;
code_r0x016ce380:
    uVar16 = param_1;
    puVar14 = puVar11 + -0x20;
    puVar10 = puVar11 + -0x20;
    *(undefined8 *)(puVar11 + -0x20) = unaff_x20;
    *(ulong *)(puVar11 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar11 + -0x10) = unaff_x29;
    *(undefined **)(puVar11 + -8) = unaff_x30;
    unaff_x29 = puVar11 + -0x10;
    if (iVar22 < *(int *)(uVar16 + 0x30)) {
      puVar30 = &UNK_016ce3a4;
code_r0x016cda04:
      *(undefined1 **)(puVar10 + -0x10) = unaff_x29;
      *(undefined **)(puVar10 + -8) = puVar30;
      if ((*(long *)(uVar16 + 0x18) != 0) &&
         (lVar15 = *(long *)(*(long *)(uVar16 + 0x18) + 0x10), lVar15 != 0)) {
        return (ulong)(uint)(*(int *)(lVar15 + 0x18) - *(int *)(uVar16 + 0x10));
      }
      lVar15 = func_0x00f78af4();
      return (ulong)*(byte *)(lVar15 + 0x48);
    }
    func_0x00f78a24(0x3d22738);
    unaff_x19 = func_0x00f78aec();
    uVar20 = func_0x00f78a24(0x3d6ceb8);
    uVar23 = 0;
    /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(unaff_x19,uVar20);
    uVar20 = func_0x00f78a24(0x3d56a58);
    func_0x00f78ac0(unaff_x19,uVar20);
    func_0x00f78af4();
    uVar20 = func_0x00f78b24();
    puVar30 = &FlatBuffers_FlatBufferBuilder__AddBool;
    auVar35 = func_0x00f78ac0(uVar20,0);
    uVar20 = auVar35._8_8_;
    auVar31._8_8_ = uVar23;
    auVar31._0_8_ = auVar35._0_8_;
    uVar16 = unaff_x21;
  }
  unaff_x21 = auVar31._8_8_;
  uVar24 = auVar31._0_8_;
  auVar35._8_8_ = uVar20;
  auVar35._0_8_ = uVar24;
  *(ulong *)(puVar14 + -0x30) = unaff_x22;
  *(ulong *)(puVar14 + -0x28) = uVar16;
  *(undefined8 *)(puVar14 + -0x20) = unaff_x20;
  *(ulong *)(puVar14 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar14 + -0x10) = unaff_x29;
  *(undefined **)(puVar14 + -8) = puVar30;
  pppuVar29 = (undefined8 ***)(puVar14 + -0x10);
  if ((auVar31._8_4_ == param_4) && (*(char *)(uVar24 + 0x48) == '\0')) {
    return uVar24;
  }
  auVar34._8_8_ = 1;
  auVar34._0_8_ = uVar24;
  uVar24 = 0;
  puVar30 = &UNK_016ce46c;
  puVar11 = puVar14 + -0x30;
code_r0x016cdaac:
  do {
    uVar25 = auVar35._0_8_;
    uVar18 = auVar34._0_8_;
    puVar9 = puVar11 + -0x30;
    *(ulong *)(puVar11 + -0x30) = unaff_x22;
    *(ulong *)(puVar11 + -0x28) = unaff_x21;
    *(undefined1 (*) [16])(puVar11 + -0x20) = auVar35;
    *(undefined8 ****)(puVar11 + -0x10) = pppuVar29;
    *(undefined **)(puVar11 + -8) = puVar30;
    iVar22 = auVar34._8_4_;
    if (*(int *)(uVar18 + 0x20) < iVar22) {
      *(int *)(uVar18 + 0x20) = iVar22;
    }
    uVar16 = unaff_x22;
    if ((*(long *)(uVar18 + 0x18) != 0) &&
       (lVar15 = *(long *)(*(long *)(uVar18 + 0x18) + 0x10), lVar15 != 0)) {
      uVar2 = *(uint *)(lVar15 + 0x18);
      iVar3 = *(int *)(uVar18 + 0x10);
      uVar1 = iVar3 - (uVar2 + (int)uVar24) & iVar22 - 1U;
      uVar25 = CONCAT44(0,uVar1);
      uVar5 = (int)uVar24 + iVar22 + uVar1;
      uVar16 = (ulong)uVar5;
      uVar19 = uVar18;
      while (unaff_x21 = (ulong)uVar2, iVar3 < (int)uVar5) {
        uVar19 = /*FlatBuffers.FlatBufferBuilder$$GrowBuffer*/ func_0x016cda78(uVar18);
        if ((*(long *)(uVar18 + 0x18) == 0) ||
           (lVar15 = *(long *)(*(long *)(uVar18 + 0x18) + 0x10), lVar15 == 0))
        goto code_r0x016cdb68;
        iVar3 = *(int *)(uVar18 + 0x10) - uVar2;
        uVar2 = *(uint *)(lVar15 + 0x18);
        iVar3 = iVar3 + uVar2;
        *(int *)(uVar18 + 0x10) = iVar3;
      }
      if ((int)uVar1 < 1) {
        return uVar19;
      }
      uVar20 = *(undefined8 *)*(undefined1 (*) [16])(puVar11 + -0x20);
      uVar23 = *(undefined8 *)(puVar11 + -0x18);
      auVar35 = *(undefined1 (*) [16])(puVar11 + -0x20);
      unaff_x22 = *(ulong *)(puVar11 + -0x30);
      unaff_x21 = *(ulong *)(puVar11 + -0x28);
      *(undefined8 *)(puVar11 + -0x10) = *(undefined8 *)(puVar11 + -0x10);
      *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
      lVar15 = *(long *)(uVar18 + 0x18);
      auVar8._8_8_ = lVar15;
      auVar8._0_8_ = uVar25;
      uVar1 = *(int *)(uVar18 + 0x10) - uVar1;
      uVar16 = (ulong)uVar1;
      auVar33._8_4_ = uVar1;
      auVar33._0_8_ = lVar15;
      auVar33._12_4_ = 0;
      *(uint *)(uVar18 + 0x10) = uVar1;
      if (lVar15 != 0) {
        *(ulong *)(puVar11 + -0x30) = unaff_x22;
        *(ulong *)(puVar11 + -0x28) = unaff_x21;
        *(undefined8 *)(puVar11 + -0x20) = uVar20;
        *(undefined8 *)(puVar11 + -0x18) = uVar23;
        *(undefined8 *)(puVar11 + -0x10) = *(undefined8 *)(puVar11 + -0x10);
        *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
        ppppuVar27 = (undefined8 ****)(puVar11 + -0x10);
        puVar30 = &UNK_016cc908;
        uVar24 = 0;
        goto code_r0x016cc7a4;
      }
      lVar15 = func_0x00f78af4();
      pppuVar29 = (undefined8 ***)(puVar11 + -0x20);
      *(undefined1 **)(puVar11 + -0x20) = puVar11 + -0x10;
      *(undefined **)(puVar11 + -0x18) = &FlatBuffers_FlatBufferBuilder__GrowBuffer;
      if ((*(long *)(lVar15 + 0x18) != 0) &&
         (plVar17 = *(long **)(*(long *)(lVar15 + 0x18) + 0x10), plVar17 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016cdaa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar16 = (**(code **)(*plVar17 + 0x178))
                           (plVar17,(int)plVar17[3] << 1,*(undefined8 *)(*plVar17 + 0x180));
        return uVar16;
      }
      puVar30 = &FlatBuffers_FlatBufferBuilder__Prep;
      auVar34 = func_0x00f78af4();
      puVar11 = puVar11 + -0x20;
      goto code_r0x016cdaac;
    }
code_r0x016cdb68:
    auVar8._8_8_ = uVar25;
    auVar8._0_8_ = unaff_x21;
    auVar31 = func_0x00f78af4();
    uVar24 = auVar31._8_8_;
    lVar26 = auVar31._0_8_;
    *(undefined1 **)(puVar11 + -0x40) = puVar11 + -0x10;
    *(undefined **)(puVar11 + -0x38) = &FlatBuffers_FlatBufferBuilder__PutBool;
    lVar15 = *(long *)(lVar26 + 0x18);
    iVar22 = *(int *)(lVar26 + 0x10) + -1;
    *(int *)(lVar26 + 0x10) = iVar22;
    if (lVar15 != 0) {
      puVar12 = puVar11 + -0x30;
      uVar20 = *(undefined8 *)(puVar11 + -0x40);
      uVar23 = *(undefined8 *)(puVar11 + -0x38);
FlatBuffers_ByteBuffer__PutByte:
      auVar8._8_4_ = iVar22;
      auVar8._0_8_ = lVar15;
      auVar8._12_4_ = 0;
      auVar33._8_4_ = iVar22;
      auVar33._0_8_ = lVar15;
      auVar33._12_4_ = 0;
      puVar9 = puVar12 + -0x30;
      *(ulong *)(puVar12 + -0x30) = uVar16;
      *(ulong *)(puVar12 + -0x28) = unaff_x21;
      *(ulong *)(puVar12 + -0x20) = uVar25;
      *(ulong *)(puVar12 + -0x18) = uVar18;
      *(undefined8 *)(puVar12 + -0x10) = uVar20;
      *(undefined8 *)(puVar12 + -8) = uVar23;
      ppppuVar27 = (undefined8 ****)(puVar12 + -0x10);
      uVar25 = 1;
      puVar30 = &UNK_016cc89c;
      goto code_r0x016cc7a4;
    }
    auVar31 = func_0x00f78af4();
    uVar19 = auVar31._8_8_;
    lVar15 = auVar31._0_8_;
    *(undefined1 **)(puVar11 + -0x50) = puVar11 + -0x40;
    *(undefined **)(puVar11 + -0x48) = &FlatBuffers_FlatBufferBuilder__PutSbyte;
    iVar22 = *(int *)(lVar15 + 0x10) + -1;
    auVar33._8_4_ = iVar22;
    auVar33._0_8_ = *(long *)(lVar15 + 0x18);
    auVar33._12_4_ = 0;
    *(int *)(lVar15 + 0x10) = iVar22;
    if (*(long *)(lVar15 + 0x18) != 0) {
      puVar13 = puVar11 + -0x40;
      puVar28 = *(undefined1 **)(puVar11 + -0x50);
      puVar30 = *(undefined **)(puVar11 + -0x48);
      uVar24 = uVar18;
      goto code_r0x016cc810;
    }
    auVar31 = func_0x00f78af4();
    uVar24 = auVar31._8_8_;
    lVar26 = auVar31._0_8_;
    *(undefined1 **)(puVar11 + -0x60) = puVar11 + -0x50;
    *(undefined **)(puVar11 + -0x58) = &FlatBuffers_FlatBufferBuilder__PutByte;
    lVar15 = *(long *)(lVar26 + 0x18);
    iVar22 = *(int *)(lVar26 + 0x10) + -1;
    *(int *)(lVar26 + 0x10) = iVar22;
    if (lVar15 != 0) {
      puVar12 = puVar11 + -0x50;
      uVar20 = *(undefined8 *)(puVar11 + -0x60);
      uVar23 = *(undefined8 *)(puVar11 + -0x58);
      goto FlatBuffers_ByteBuffer__PutByte;
    }
    auVar31 = func_0x00f78af4();
    uVar24 = auVar31._8_8_;
    lVar15 = auVar31._0_8_;
    puVar9 = puVar11 + -0x90;
    *(ulong *)(puVar11 + -0x90) = uVar16;
    *(ulong *)(puVar11 + -0x88) = unaff_x21;
    *(ulong *)(puVar11 + -0x80) = uVar25;
    *(ulong *)(puVar11 + -0x78) = uVar18;
    *(undefined1 **)(puVar11 + -0x70) = puVar11 + -0x60;
    *(undefined **)(puVar11 + -0x68) = &FlatBuffers_FlatBufferBuilder__PutShort;
    ppppuVar27 = (undefined8 ****)(puVar11 + -0x70);
    lVar26 = *(long *)(lVar15 + 0x18);
    uVar5 = *(int *)(lVar15 + 0x10) - 2;
    auVar8._8_8_ = lVar26;
    auVar8._0_8_ = CONCAT44(0,uVar5);
    auVar33._8_4_ = uVar5;
    auVar33._0_8_ = lVar26;
    auVar33._12_4_ = 0;
    *(uint *)(lVar15 + 0x10) = uVar5;
    if (lVar26 != 0) {
      uVar25 = 2;
      puVar30 = &UNK_016cdc34;
      goto code_r0x016cc7a4;
    }
    auVar31 = func_0x00f78af4();
    uVar24 = auVar31._8_8_;
    lVar15 = auVar31._0_8_;
    puVar9 = puVar11 + -0xc0;
    *(ulong *)(puVar11 + -0xc0) = uVar16;
    *(ulong *)(puVar11 + -0xb8) = CONCAT44(0,uVar5);
    *(undefined8 *)(puVar11 + -0xb0) = 0;
    *(ulong *)(puVar11 + -0xa8) = uVar18;
    *(undefined8 *****)(puVar11 + -0xa0) = ppppuVar27;
    *(undefined **)(puVar11 + -0x98) = &FlatBuffers_FlatBufferBuilder__PutUshort;
    ppppuVar27 = (undefined8 ****)(puVar11 + -0xa0);
    lVar26 = *(long *)(lVar15 + 0x18);
    uVar5 = *(int *)(lVar15 + 0x10) - 2;
    auVar8._8_8_ = lVar26;
    auVar8._0_8_ = CONCAT44(0,uVar5);
    auVar33._8_4_ = uVar5;
    auVar33._0_8_ = lVar26;
    auVar33._12_4_ = 0;
    *(uint *)(lVar15 + 0x10) = uVar5;
    if (lVar26 != 0) {
      uVar25 = 2;
      puVar30 = &UNK_016cdc90;
      goto code_r0x016cc7a4;
    }
    auVar31 = func_0x00f78af4();
    uVar24 = auVar31._8_8_;
    lVar15 = auVar31._0_8_;
    puVar9 = puVar11 + -0xf0;
    *(ulong *)(puVar11 + -0xf0) = uVar16;
    *(ulong *)(puVar11 + -0xe8) = CONCAT44(0,uVar5);
    *(undefined8 *)(puVar11 + -0xe0) = 0;
    *(ulong *)(puVar11 + -0xd8) = uVar18;
    *(undefined8 *****)(puVar11 + -0xd0) = ppppuVar27;
    *(undefined **)(puVar11 + -200) = &FlatBuffers_FlatBufferBuilder__PutInt;
    ppppuVar27 = (undefined8 ****)(puVar11 + -0xd0);
    lVar26 = *(long *)(lVar15 + 0x18);
    uVar5 = *(int *)(lVar15 + 0x10) - 4;
    auVar8._8_8_ = lVar26;
    auVar8._0_8_ = CONCAT44(0,uVar5);
    auVar33._8_4_ = uVar5;
    auVar33._0_8_ = lVar26;
    auVar33._12_4_ = 0;
    *(uint *)(lVar15 + 0x10) = uVar5;
    if (lVar26 != 0) {
      uVar25 = 4;
      puVar30 = &UNK_016cdcec;
      goto code_r0x016cc7a4;
    }
    auVar31 = func_0x00f78af4();
    uVar24 = auVar31._8_8_;
    lVar15 = auVar31._0_8_;
    puVar9 = puVar11 + -0x120;
    *(ulong *)(puVar11 + -0x120) = uVar16;
    *(ulong *)(puVar11 + -0x118) = CONCAT44(0,uVar5);
    *(undefined8 *)(puVar11 + -0x110) = 0;
    *(ulong *)(puVar11 + -0x108) = uVar18;
    *(undefined8 *****)(puVar11 + -0x100) = ppppuVar27;
    *(undefined **)(puVar11 + -0xf8) = &FlatBuffers_FlatBufferBuilder__PutUint;
    ppppuVar27 = (undefined8 ****)(puVar11 + -0x100);
    lVar26 = *(long *)(lVar15 + 0x18);
    uVar5 = *(int *)(lVar15 + 0x10) - 4;
    auVar8._8_8_ = lVar26;
    auVar8._0_8_ = CONCAT44(0,uVar5);
    auVar33._8_4_ = uVar5;
    auVar33._0_8_ = lVar26;
    auVar33._12_4_ = 0;
    *(uint *)(lVar15 + 0x10) = uVar5;
    if (lVar26 != 0) {
      uVar25 = 4;
      puVar30 = &UNK_016cdd48;
      goto code_r0x016cc7a4;
    }
    auVar31 = func_0x00f78af4();
    uVar24 = auVar31._8_8_;
    lVar15 = auVar31._0_8_;
    puVar9 = puVar11 + -0x150;
    *(ulong *)(puVar11 + -0x150) = uVar16;
    *(ulong *)(puVar11 + -0x148) = CONCAT44(0,uVar5);
    *(undefined8 *)(puVar11 + -0x140) = 0;
    *(ulong *)(puVar11 + -0x138) = uVar18;
    *(undefined8 *****)(puVar11 + -0x130) = ppppuVar27;
    *(undefined **)(puVar11 + -0x128) = &FlatBuffers_FlatBufferBuilder__PutLong;
    ppppuVar27 = (undefined8 ****)(puVar11 + -0x130);
    lVar26 = *(long *)(lVar15 + 0x18);
    uVar5 = *(int *)(lVar15 + 0x10) - 8;
    auVar8._8_8_ = lVar26;
    auVar8._0_8_ = CONCAT44(0,uVar5);
    auVar33._8_4_ = uVar5;
    auVar33._0_8_ = lVar26;
    auVar33._12_4_ = 0;
    *(uint *)(lVar15 + 0x10) = uVar5;
    if (lVar26 != 0) {
      uVar25 = 8;
      puVar30 = &UNK_016cdda4;
      goto code_r0x016cc7a4;
    }
    auVar31 = func_0x00f78af4();
    uVar24 = auVar31._8_8_;
    lVar15 = auVar31._0_8_;
    puVar9 = puVar11 + -0x180;
    *(ulong *)(puVar11 + -0x180) = uVar16;
    *(ulong *)(puVar11 + -0x178) = CONCAT44(0,uVar5);
    *(undefined8 *)(puVar11 + -0x170) = 0;
    *(ulong *)(puVar11 + -0x168) = uVar18;
    *(undefined8 *****)(puVar11 + -0x160) = ppppuVar27;
    *(undefined **)(puVar11 + -0x158) = &FlatBuffers_FlatBufferBuilder__PutUlong;
    ppppuVar27 = (undefined8 ****)(puVar11 + -0x160);
    lVar26 = *(long *)(lVar15 + 0x18);
    uVar5 = *(int *)(lVar15 + 0x10) - 8;
    unaff_x21 = CONCAT44(0,uVar5);
    auVar8._8_8_ = lVar26;
    auVar8._0_8_ = unaff_x21;
    auVar33._8_4_ = uVar5;
    auVar33._0_8_ = lVar26;
    auVar33._12_4_ = 0;
    *(uint *)(lVar15 + 0x10) = uVar5;
    if (lVar26 != 0) {
      uVar25 = 8;
      puVar30 = &UNK_016cde00;
      goto code_r0x016cc7a4;
    }
    lVar15 = func_0x00f78af4();
    *(undefined8 *****)(puVar11 + -400) = ppppuVar27;
    *(undefined **)(puVar11 + -0x188) = &FlatBuffers_FlatBufferBuilder__PutFloat;
    lVar26 = *(long *)(lVar15 + 0x18);
    auVar8._8_8_ = lVar26;
    uVar5 = *(int *)(lVar15 + 0x10) - 4;
    uVar24 = (ulong)uVar5;
    auVar33._8_4_ = uVar5;
    auVar33._0_8_ = lVar26;
    auVar33._12_4_ = 0;
    *(uint *)(lVar15 + 0x10) = uVar5;
    if (lVar26 != 0) {
      puVar9 = puVar11 + -0x1b0;
      *(undefined8 *)(puVar11 + -0x1b0) = unaff_d9;
      *(undefined8 *)(puVar11 + -0x1a8) = unaff_d8;
      *(undefined8 *)(puVar11 + -0x1a0) = 0;
      *(ulong *)(puVar11 + -0x198) = uVar18;
      *(undefined8 *)(puVar11 + -400) = *(undefined8 *)(puVar11 + -400);
      *(undefined8 *)(puVar11 + -0x188) = *(undefined8 *)(puVar11 + -0x188);
      ppppuVar27 = (undefined8 ****)(puVar11 + -400);
      uVar25 = 4;
      puVar30 = &UNK_016ccba4;
      goto code_r0x016cc7a4;
    }
    lVar15 = func_0x00f78af4();
    *(undefined1 **)(puVar11 + -0x1a0) = puVar11 + -400;
    *(undefined **)(puVar11 + -0x198) = &FlatBuffers_FlatBufferBuilder__PutDouble;
    lVar26 = *(long *)(lVar15 + 0x18);
    auVar8._8_8_ = lVar26;
    uVar5 = *(int *)(lVar15 + 0x10) - 8;
    uVar24 = (ulong)uVar5;
    auVar33._8_4_ = uVar5;
    auVar33._0_8_ = lVar26;
    auVar33._12_4_ = 0;
    *(uint *)(lVar15 + 0x10) = uVar5;
    if (lVar26 != 0) break;
    auVar35 = func_0x00f78af4();
    *(undefined8 *)(puVar11 + -0x1c0) = 0;
    *(ulong *)(puVar11 + -0x1b8) = uVar18;
    *(undefined1 **)(puVar11 + -0x1b0) = puVar11 + -0x1a0;
    *(undefined **)(puVar11 + -0x1a8) = &FlatBuffers_FlatBufferBuilder__AddBool;
    pppuVar29 = (undefined8 ***)(puVar11 + -0x1b0);
    auVar34._8_8_ = 1;
    auVar34._0_8_ = auVar35._0_8_;
    uVar24 = 0;
    puVar30 = &UNK_016cde9c;
    puVar11 = puVar11 + -0x1c0;
    unaff_x22 = uVar16;
  } while( true );
  puVar9 = puVar11 + -0x1c0;
  *(undefined8 *)(puVar11 + -0x1c0) = unaff_d9;
  *(undefined8 *)(puVar11 + -0x1b8) = unaff_d8;
  *(undefined8 *)(puVar11 + -0x1b0) = 0;
  *(ulong *)(puVar11 + -0x1a8) = uVar18;
  *(undefined8 *)(puVar11 + -0x1a0) = *(undefined8 *)(puVar11 + -0x1a0);
  *(undefined8 *)(puVar11 + -0x198) = *(undefined8 *)(puVar11 + -0x198);
  ppppuVar27 = (undefined8 ****)(puVar11 + -0x1a0);
  uVar25 = 8;
  puVar30 = &UNK_016ccc34;
code_r0x016cc7a4:
  do {
    puVar13 = puVar9 + -0x20;
    *(long *)(puVar9 + -0x20) = auVar8._8_8_;
    *(ulong *)(puVar9 + -0x18) = uVar24;
    *(undefined8 *****)(puVar9 + -0x10) = ppppuVar27;
    *(undefined **)(puVar9 + -8) = puVar30;
    puVar28 = puVar9 + -0x10;
    if (auVar33._8_4_ < 0) {
code_r0x016cc7d8:
      func_0x00f78a24(0x3d1fcf8);
      uVar24 = func_0x00f78aec();
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a4d0(uVar24,0);
      uVar20 = func_0x00f78a24(0x3d52ce8);
      func_0x00f78ac0(uVar24,uVar20);
      uVar19 = uVar25;
    }
    else {
      lVar15 = *(long *)(auVar33._0_8_ + 0x10);
      uVar19 = uVar25;
      if (lVar15 != 0) {
        if (auVar33._8_4_ <= *(int *)(lVar15 + 0x18) - (int)uVar25) {
          return auVar33._0_8_;
        }
        goto code_r0x016cc7d8;
      }
    }
    puVar30 = &FlatBuffers_ByteBuffer__PutSbyte;
    auVar33 = func_0x00f78af4();
code_r0x016cc810:
    puVar9 = puVar13 + -0x30;
    *(ulong *)(puVar13 + -0x30) = uVar16;
    *(undefined1 (*) [16])(puVar13 + -0x28) = auVar8;
    *(ulong *)(puVar13 + -0x18) = uVar24;
    *(undefined1 **)(puVar13 + -0x10) = puVar28;
    *(undefined **)(puVar13 + -8) = puVar30;
    ppppuVar27 = (undefined8 ****)(puVar13 + -0x10);
    uVar25 = 1;
    puVar30 = &UNK_016cc834;
    uVar24 = uVar19;
    auVar8 = auVar33;
  } while( true );
}



// ============================================================
// RVA: 0x1656ad0 | Core.Networking.HostStanding.AddHasEventEndTimeStamp
// ============================================================

/* WARNING: Possible PIC construction at 0x016ce468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce3a0: Changing call to branch */
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
/* WARNING: Possible PIC construction at 0x01656b90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01656c54: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x01656c58) */
/* WARNING: Removing unreachable block (ram,0x016ce224) */
/* WARNING: Removing unreachable block (ram,0x01656b94) */
/* WARNING: Removing unreachable block (ram,0x01656ba0) */
/* WARNING: Removing unreachable block (ram,0x01656ba8) */
/* WARNING: Removing unreachable block (ram,0x01656bc4) */
/* WARNING: Removing unreachable block (ram,0x01656bd0) */
/* WARNING: Removing unreachable block (ram,0x01656bdc) */
/* WARNING: Removing unreachable block (ram,0x016ce20c) */
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
/* WARNING: Removing unreachable block (ram,0x016ce3a4) */
/* WARNING: Removing unreachable block (ram,0x016ce3a8) */
/* WARNING: Removing unreachable block (ram,0x016ce3b4) */
/* WARNING: Removing unreachable block (ram,0x016ce46c) */
/* WARNING: Removing unreachable block (ram,0x016cde9c) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_HostStanding__AddHasEventEndTimeStamp
                (ulong param_1,ulong param_2,undefined8 param_3,int param_4)

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
  undefined8 ****ppppuVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined8 ****ppppuVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  int iVar21;
  undefined8 uVar22;
  ulong uVar23;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  ulong uVar24;
  long lVar25;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar26;
  undefined1 *unaff_x29;
  undefined1 *puVar27;
  undefined8 ***pppuVar28;
  undefined *unaff_x30;
  undefined *puVar29;
  undefined *puVar30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [12];
  long alStack_c0 [2];
  undefined8 ***apppuStack_b0 [2];
  undefined8 ***pppuStack_80;
  undefined *puStack_78;
  undefined8 *puStack_20;
  undefined *puStack_18;
  
  if (param_1 == 0) {
    lVar15 = func_0x00f78af4();
    puStack_18 = &Core_Networking_HostStanding__EndHostStanding;
    puStack_20 = (undefined8 *)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb5808 & 1) == 0) {
      puStack_20 = (undefined8 *)&stack0xfffffffffffffff0;
      func_0x00f78a20(0x3d3f110);
      bRam0000000003eb5808 = 1;
    }
    if (lVar15 != 0) {
      pppuVar28 = (undefined8 ***)&puStack_20;
      auVar34._8_8_ = lVar15;
      auVar34._0_8_ = 0x3eb5000;
      if ((bRam0000000003eb5cd8 & 1) == 0) {
        func_0x00f78a20(0x3d1f100,0);
        bRam0000000003eb5cd8 = 1;
      }
      if (*(int *)(lVar15 + 0x30) < 0) {
        func_0x00f78a24(0x3d22a38);
        puVar30 = (undefined *)func_0x00f78aec();
        uVar22 = func_0x00f78a24(0x3d6cea8);
        /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(puVar30,uVar22);
        uVar22 = func_0x00f78a24(0x3d56a30);
        auVar35 = func_0x00f78ac0(puVar30,uVar22);
        pppuStack_80 = (undefined8 ****)0x3eb5000;
        pppuVar28 = (undefined8 ***)&stack0xffffffffffffff90;
        lVar15 = *(long *)(auVar35._0_8_ + 0x18);
        puStack_78 = puVar30;
        if ((lVar15 != 0) && (*(long *)(lVar15 + 0x10) != 0)) {
          uVar5 = *(int *)(*(long *)(lVar15 + 0x10) + 0x18) - auVar35._8_4_;
          uVar23 = (ulong)uVar5;
          auVar32._8_4_ = uVar5;
          auVar32._0_8_ = lVar15;
          auVar32._12_4_ = 0;
          puVar9 = &stack0xffffffffffffff20;
          apppuStack_b0[1] = (undefined8 ***)&UNK_016cee20;
          ppppuVar14 = apppuStack_b0;
          auVar8._8_8_ = 4;
          auVar8._0_8_ = lVar15;
          uVar26 = 0x3d201a0;
          apppuStack_b0[0] = pppuVar28;
          if ((bRam0000000003eb5cd0 & 1) == 0) {
            func_0x00f78a20(0x3d201a0);
            bRam0000000003eb5cd0 = 1;
          }
          uVar24 = 4;
          puVar30 = &UNK_016cc68c;
          goto code_r0x016cc7a4;
        }
        func_0x00f78af4();
        uVar22 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&stack0xffffffffffffff6c,0);
        uVar19 = func_0x00f78a24(0x3d6ce88);
        uVar20 = func_0x00f78a24(0x3d66338);
        lVar15 = /*System.String$$Concat*/ func_0x029be39c(uVar19,uVar22,uVar20,0);
        func_0x00f78a24(0x3d22a38);
        uVar22 = func_0x00f78aec();
        uVar20 = 0;
        /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar22,lVar15);
        uVar19 = func_0x00f78a24(0x3d56a50);
        puVar30 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar34 = func_0x00f78ac0(uVar22,uVar19);
        puVar11 = &stack0xffffffffffffff60;
        while( true ) {
          uVar19 = auVar34._8_8_;
          lVar25 = auVar34._0_8_;
          auVar34._8_8_ = lVar25;
          auVar34._0_8_ = uVar19;
          auVar7._8_8_ = lVar25;
          auVar7._0_8_ = uVar19;
          *(undefined8 *)(puVar11 + -0x20) = uVar22;
          *(long *)(puVar11 + -0x18) = lVar15;
          *(undefined8 ****)(puVar11 + -0x10) = pppuVar28;
          *(undefined **)(puVar11 + -8) = puVar30;
          pppuVar28 = (undefined8 ***)(puVar11 + -0x10);
          uVar4 = *(undefined4 *)(lVar25 + 0x20);
          auVar33._8_4_ = uVar4;
          auVar33._0_8_ = lVar25;
          auVar33._12_4_ = 0;
          lVar15 = lVar25;
          if ((int)uVar20 == 0) {
            lVar15 = 0;
            uVar4 = 0;
          }
          auVar6._8_4_ = uVar4;
          auVar6._0_8_ = lVar15;
          auVar6._12_4_ = 0;
          if ((int)uVar20 == 0) {
            uVar23 = 4;
            puVar30 = &UNK_016cef64;
            puVar11 = puVar11 + -0x20;
            goto code_r0x016cdaac;
          }
          if (lVar15 != 0) break;
          puVar30 = &FlatBuffers_FlatBufferBuilder__Finish;
          auVar34 = func_0x00f78af4();
          uVar20 = 0;
          puVar11 = puVar11 + -0x20;
          lVar15 = lVar25;
          uVar22 = uVar19;
        }
        uVar23 = 8;
        puVar30 = &UNK_016cef10;
        puVar11 = puVar11 + -0x20;
        auVar33 = auVar6;
        auVar34 = auVar7;
      }
      else {
        auVar33._8_8_ = 4;
        auVar33._0_8_ = lVar15;
        uVar23 = 0;
        puVar30 = &UNK_016cea78;
        puVar11 = &stack0xffffffffffffffa0;
      }
      goto code_r0x016cdaac;
    }
    puVar30 = (undefined *)func_0x00f78af4();
    if (puVar30 == (undefined *)0x0) {
      auVar31 = func_0x00f78af4();
      lVar15 = auVar31._0_8_;
      if ((auVar31._8_8_ == 0) || (lVar15 == 0)) {
        auVar31 = func_0x00f78af4();
        lVar25 = auVar31._8_8_;
        lVar15 = auVar31._0_8_;
        puVar11 = &stack0xffffffffffffff60;
        puStack_78 = &Core_Networking_HostStanding__CreateStandingsVectorBlock;
        ppppuVar14 = &pppuStack_80;
        unaff_x21 = 0x3eb5000;
        pppuStack_80 = (undefined8 ***)&stack0xffffffffffffffb0;
        if ((bRam0000000003eb5807 & 1) == 0) {
          func_0x00f78a20(0x3d569a8);
          bRam0000000003eb5807 = 1;
        }
        if ((lVar25 == 0) || (lVar15 == 0)) {
          puVar30 = &Core_Networking_HostStanding__StartStandingsVector;
          auVar35 = func_0x00f78af4();
          iVar21 = auVar35._8_4_;
          auVar31._8_8_ = lVar25;
          auVar31._0_8_ = auVar35._0_8_;
          if (auVar35._0_8_ == 0) {
            apppuStack_b0[1] = (undefined8 ***)&Core_Networking_HostStanding__StartStandingsVector;
            apppuStack_b0[0] = ppppuVar14;
            lVar15 = func_0x00f78af4();
            return *(ulong *)(lVar15 + 8);
          }
        }
        else {
          unaff_x21 = 0x3d56000;
          iVar21 = *(int *)(lVar25 + 0x18);
          puVar30 = &UNK_01656c58;
          puVar11 = &stack0xffffffffffffff60;
        }
      }
      else {
        iVar21 = *(int *)(auVar31._8_8_ + 0x18);
        puVar30 = &UNK_01656b94;
        puVar11 = &stack0xffffffffffffff90;
        ppppuVar14 = (undefined8 ****)&stack0xffffffffffffffb0;
      }
      uVar26 = auVar31._0_8_;
      *(ulong *)(puVar11 + -0x30) = unaff_x22;
      *(ulong *)(puVar11 + -0x28) = unaff_x21;
      *(long *)(puVar11 + -0x20) = auVar31._8_8_;
      *(long *)(puVar11 + -0x18) = lVar15;
      *(undefined8 *****)(puVar11 + -0x10) = ppppuVar14;
      *(undefined **)(puVar11 + -8) = puVar30;
      pppuVar28 = (undefined8 ***)(puVar11 + -0x10);
      unaff_x21 = 4;
      /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4();
      *(int *)(uVar26 + 0x44) = iVar21;
      uVar23 = CONCAT44(0,iVar21 * 4);
      auVar34._8_8_ = 4;
      auVar34._0_8_ = uVar23;
      auVar33._8_8_ = 4;
      auVar33._0_8_ = uVar26;
      puVar30 = &UNK_016ce188;
      puVar11 = puVar11 + -0x30;
      unaff_x22 = uVar26;
      goto code_r0x016cdaac;
    }
    ppppuVar10 = (undefined8 ****)&stack0xffffffffffffffa0;
    unaff_x29 = &stack0xffffffffffffffc0;
    unaff_x20 = 3;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100,3,0);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(puVar30);
    if (*(long *)(puVar30 + 0x28) != 0) {
      if (*(int *)(*(long *)(puVar30 + 0x28) + 0x18) < 3) {
        uVar22 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,3);
        *(undefined8 *)(puVar30 + 0x28) = uVar22;
      }
      *(undefined4 *)(puVar30 + 0x30) = 3;
      puVar29 = &UNK_016ce320;
code_r0x016cda04:
      *(undefined1 **)((long)ppppuVar10 + -0x10) = unaff_x29;
      *(undefined **)((long)ppppuVar10 + -8) = puVar29;
      if ((*(long *)(puVar30 + 0x18) != 0) &&
         (lVar15 = *(long *)(*(long *)(puVar30 + 0x18) + 0x10), lVar15 != 0)) {
        return (ulong)(uint)(*(int *)(lVar15 + 0x18) - *(int *)(puVar30 + 0x10));
      }
      lVar15 = func_0x00f78af4();
      return (ulong)*(byte *)(lVar15 + 0x48);
    }
    auVar35 = func_0x00f78af4();
    ppppuVar14 = &pppuStack_80;
    ppppuVar10 = &pppuStack_80;
    pppuStack_80 = (undefined8 ***)((long)&MACH_HEADER.magic + 3);
    unaff_x29 = &stack0xffffffffffffff90;
    puStack_78 = puVar30;
    if (auVar35._8_4_ < *(int *)(auVar35._0_8_ + 0x30)) {
      puVar29 = &UNK_016ce3a4;
      puVar30 = auVar35._0_8_;
      goto code_r0x016cda04;
    }
    func_0x00f78a24(0x3d22738);
    unaff_x19 = func_0x00f78aec();
    uVar22 = func_0x00f78a24(0x3d6ceb8);
    param_2 = 0;
    /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(unaff_x19,uVar22);
    uVar22 = func_0x00f78a24(0x3d56a58);
    func_0x00f78ac0(unaff_x19,uVar22);
    func_0x00f78af4();
    uVar22 = func_0x00f78b24();
    unaff_x30 = &FlatBuffers_FlatBufferBuilder__AddBool;
    auVar34 = func_0x00f78ac0(uVar22,0);
    uVar22 = auVar34._8_8_;
    param_1 = auVar34._0_8_;
  }
  else {
    uVar22 = 2;
    param_4 = 0;
    ppppuVar14 = (undefined8 ****)register0x00000008;
  }
  auVar34._8_8_ = uVar22;
  auVar34._0_8_ = param_1;
  *(ulong *)((long)ppppuVar14 + -0x30) = unaff_x22;
  *(ulong *)((long)ppppuVar14 + -0x28) = unaff_x21;
  *(undefined8 *)((long)ppppuVar14 + -0x20) = unaff_x20;
  *(undefined8 *)((long)ppppuVar14 + -0x18) = unaff_x19;
  *(undefined1 **)((long)ppppuVar14 + -0x10) = unaff_x29;
  *(undefined **)((long)ppppuVar14 + -8) = unaff_x30;
  pppuVar28 = (undefined8 ***)((long)ppppuVar14 + -0x10);
  if (((int)param_2 == param_4) && (*(char *)(param_1 + 0x48) == '\0')) {
    return param_1;
  }
  auVar33._8_8_ = 1;
  auVar33._0_8_ = param_1;
  uVar23 = 0;
  puVar30 = &UNK_016ce46c;
  puVar11 = (undefined1 *)((long)ppppuVar14 + -0x30);
  unaff_x21 = param_2;
code_r0x016cdaac:
  do {
    uVar24 = auVar34._0_8_;
    uVar17 = auVar33._0_8_;
    puVar9 = puVar11 + -0x30;
    *(ulong *)(puVar11 + -0x30) = unaff_x22;
    *(ulong *)(puVar11 + -0x28) = unaff_x21;
    *(undefined1 (*) [16])(puVar11 + -0x20) = auVar34;
    *(undefined8 ****)(puVar11 + -0x10) = pppuVar28;
    *(undefined **)(puVar11 + -8) = puVar30;
    iVar21 = auVar33._8_4_;
    if (*(int *)(uVar17 + 0x20) < iVar21) {
      *(int *)(uVar17 + 0x20) = iVar21;
    }
    uVar26 = unaff_x22;
    if ((*(long *)(uVar17 + 0x18) != 0) &&
       (lVar15 = *(long *)(*(long *)(uVar17 + 0x18) + 0x10), lVar15 != 0)) {
      uVar2 = *(uint *)(lVar15 + 0x18);
      iVar3 = *(int *)(uVar17 + 0x10);
      uVar1 = iVar3 - (uVar2 + (int)uVar23) & iVar21 - 1U;
      uVar24 = CONCAT44(0,uVar1);
      uVar5 = (int)uVar23 + iVar21 + uVar1;
      uVar26 = (ulong)uVar5;
      uVar18 = uVar17;
      while (unaff_x21 = (ulong)uVar2, iVar3 < (int)uVar5) {
        uVar18 = /*FlatBuffers.FlatBufferBuilder$$GrowBuffer*/ func_0x016cda78(uVar17);
        if ((*(long *)(uVar17 + 0x18) == 0) ||
           (lVar15 = *(long *)(*(long *)(uVar17 + 0x18) + 0x10), lVar15 == 0))
        goto code_r0x016cdb68;
        iVar3 = *(int *)(uVar17 + 0x10) - uVar2;
        uVar2 = *(uint *)(lVar15 + 0x18);
        iVar3 = iVar3 + uVar2;
        *(int *)(uVar17 + 0x10) = iVar3;
      }
      if ((int)uVar1 < 1) {
        return uVar18;
      }
      uVar22 = *(undefined8 *)*(undefined1 (*) [16])(puVar11 + -0x20);
      uVar19 = *(undefined8 *)(puVar11 + -0x18);
      auVar34 = *(undefined1 (*) [16])(puVar11 + -0x20);
      unaff_x22 = *(ulong *)(puVar11 + -0x30);
      unaff_x21 = *(ulong *)(puVar11 + -0x28);
      *(undefined8 *)(puVar11 + -0x10) = *(undefined8 *)(puVar11 + -0x10);
      *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
      lVar15 = *(long *)(uVar17 + 0x18);
      auVar8._8_8_ = lVar15;
      auVar8._0_8_ = uVar24;
      uVar1 = *(int *)(uVar17 + 0x10) - uVar1;
      uVar26 = (ulong)uVar1;
      auVar32._8_4_ = uVar1;
      auVar32._0_8_ = lVar15;
      auVar32._12_4_ = 0;
      *(uint *)(uVar17 + 0x10) = uVar1;
      if (lVar15 != 0) {
        *(ulong *)(puVar11 + -0x30) = unaff_x22;
        *(ulong *)(puVar11 + -0x28) = unaff_x21;
        *(undefined8 *)(puVar11 + -0x20) = uVar22;
        *(undefined8 *)(puVar11 + -0x18) = uVar19;
        *(undefined8 *)(puVar11 + -0x10) = *(undefined8 *)(puVar11 + -0x10);
        *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
        ppppuVar14 = (undefined8 ****)(puVar11 + -0x10);
        puVar30 = &UNK_016cc908;
        uVar23 = 0;
        goto code_r0x016cc7a4;
      }
      lVar15 = func_0x00f78af4();
      pppuVar28 = (undefined8 ***)(puVar11 + -0x20);
      *(undefined1 **)(puVar11 + -0x20) = puVar11 + -0x10;
      *(undefined **)(puVar11 + -0x18) = &FlatBuffers_FlatBufferBuilder__GrowBuffer;
      if ((*(long *)(lVar15 + 0x18) != 0) &&
         (plVar16 = *(long **)(*(long *)(lVar15 + 0x18) + 0x10), plVar16 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016cdaa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar26 = (**(code **)(*plVar16 + 0x178))
                           (plVar16,(int)plVar16[3] << 1,*(undefined8 *)(*plVar16 + 0x180));
        return uVar26;
      }
      puVar30 = &FlatBuffers_FlatBufferBuilder__Prep;
      auVar33 = func_0x00f78af4();
      puVar11 = puVar11 + -0x20;
      goto code_r0x016cdaac;
    }
code_r0x016cdb68:
    auVar8._8_8_ = uVar24;
    auVar8._0_8_ = unaff_x21;
    auVar34 = func_0x00f78af4();
    uVar23 = auVar34._8_8_;
    lVar25 = auVar34._0_8_;
    *(undefined1 **)(puVar11 + -0x40) = puVar11 + -0x10;
    *(undefined **)(puVar11 + -0x38) = &FlatBuffers_FlatBufferBuilder__PutBool;
    lVar15 = *(long *)(lVar25 + 0x18);
    iVar21 = *(int *)(lVar25 + 0x10) + -1;
    *(int *)(lVar25 + 0x10) = iVar21;
    if (lVar15 != 0) {
      puVar12 = puVar11 + -0x30;
      uVar22 = *(undefined8 *)(puVar11 + -0x40);
      uVar19 = *(undefined8 *)(puVar11 + -0x38);
FlatBuffers_ByteBuffer__PutByte:
      auVar8._8_4_ = iVar21;
      auVar8._0_8_ = lVar15;
      auVar8._12_4_ = 0;
      auVar32._8_4_ = iVar21;
      auVar32._0_8_ = lVar15;
      auVar32._12_4_ = 0;
      puVar9 = puVar12 + -0x30;
      *(ulong *)(puVar12 + -0x30) = uVar26;
      *(ulong *)(puVar12 + -0x28) = unaff_x21;
      *(ulong *)(puVar12 + -0x20) = uVar24;
      *(ulong *)(puVar12 + -0x18) = uVar17;
      *(undefined8 *)(puVar12 + -0x10) = uVar22;
      *(undefined8 *)(puVar12 + -8) = uVar19;
      ppppuVar14 = (undefined8 ****)(puVar12 + -0x10);
      uVar24 = 1;
      puVar30 = &UNK_016cc89c;
      goto code_r0x016cc7a4;
    }
    auVar34 = func_0x00f78af4();
    uVar18 = auVar34._8_8_;
    lVar15 = auVar34._0_8_;
    *(undefined1 **)(puVar11 + -0x50) = puVar11 + -0x40;
    *(undefined **)(puVar11 + -0x48) = &FlatBuffers_FlatBufferBuilder__PutSbyte;
    iVar21 = *(int *)(lVar15 + 0x10) + -1;
    auVar32._8_4_ = iVar21;
    auVar32._0_8_ = *(long *)(lVar15 + 0x18);
    auVar32._12_4_ = 0;
    *(int *)(lVar15 + 0x10) = iVar21;
    if (*(long *)(lVar15 + 0x18) != 0) {
      puVar13 = puVar11 + -0x40;
      puVar27 = *(undefined1 **)(puVar11 + -0x50);
      puVar30 = *(undefined **)(puVar11 + -0x48);
      uVar23 = uVar17;
      goto code_r0x016cc810;
    }
    auVar34 = func_0x00f78af4();
    uVar23 = auVar34._8_8_;
    lVar25 = auVar34._0_8_;
    *(undefined1 **)(puVar11 + -0x60) = puVar11 + -0x50;
    *(undefined **)(puVar11 + -0x58) = &FlatBuffers_FlatBufferBuilder__PutByte;
    lVar15 = *(long *)(lVar25 + 0x18);
    iVar21 = *(int *)(lVar25 + 0x10) + -1;
    *(int *)(lVar25 + 0x10) = iVar21;
    if (lVar15 != 0) {
      puVar12 = puVar11 + -0x50;
      uVar22 = *(undefined8 *)(puVar11 + -0x60);
      uVar19 = *(undefined8 *)(puVar11 + -0x58);
      goto FlatBuffers_ByteBuffer__PutByte;
    }
    auVar34 = func_0x00f78af4();
    uVar23 = auVar34._8_8_;
    lVar15 = auVar34._0_8_;
    puVar9 = puVar11 + -0x90;
    *(ulong *)(puVar11 + -0x90) = uVar26;
    *(ulong *)(puVar11 + -0x88) = unaff_x21;
    *(ulong *)(puVar11 + -0x80) = uVar24;
    *(ulong *)(puVar11 + -0x78) = uVar17;
    *(undefined1 **)(puVar11 + -0x70) = puVar11 + -0x60;
    *(undefined **)(puVar11 + -0x68) = &FlatBuffers_FlatBufferBuilder__PutShort;
    ppppuVar14 = (undefined8 ****)(puVar11 + -0x70);
    lVar25 = *(long *)(lVar15 + 0x18);
    uVar5 = *(int *)(lVar15 + 0x10) - 2;
    auVar8._8_8_ = lVar25;
    auVar8._0_8_ = CONCAT44(0,uVar5);
    auVar32._8_4_ = uVar5;
    auVar32._0_8_ = lVar25;
    auVar32._12_4_ = 0;
    *(uint *)(lVar15 + 0x10) = uVar5;
    if (lVar25 != 0) {
      uVar24 = 2;
      puVar30 = &UNK_016cdc34;
      goto code_r0x016cc7a4;
    }
    auVar34 = func_0x00f78af4();
    uVar23 = auVar34._8_8_;
    lVar15 = auVar34._0_8_;
    puVar9 = puVar11 + -0xc0;
    *(ulong *)(puVar11 + -0xc0) = uVar26;
    *(ulong *)(puVar11 + -0xb8) = CONCAT44(0,uVar5);
    *(undefined8 *)(puVar11 + -0xb0) = 0;
    *(ulong *)(puVar11 + -0xa8) = uVar17;
    *(undefined8 *****)(puVar11 + -0xa0) = ppppuVar14;
    *(undefined **)(puVar11 + -0x98) = &FlatBuffers_FlatBufferBuilder__PutUshort;
    ppppuVar14 = (undefined8 ****)(puVar11 + -0xa0);
    lVar25 = *(long *)(lVar15 + 0x18);
    uVar5 = *(int *)(lVar15 + 0x10) - 2;
    auVar8._8_8_ = lVar25;
    auVar8._0_8_ = CONCAT44(0,uVar5);
    auVar32._8_4_ = uVar5;
    auVar32._0_8_ = lVar25;
    auVar32._12_4_ = 0;
    *(uint *)(lVar15 + 0x10) = uVar5;
    if (lVar25 != 0) {
      uVar24 = 2;
      puVar30 = &UNK_016cdc90;
      goto code_r0x016cc7a4;
    }
    auVar34 = func_0x00f78af4();
    uVar23 = auVar34._8_8_;
    lVar15 = auVar34._0_8_;
    puVar9 = puVar11 + -0xf0;
    *(ulong *)(puVar11 + -0xf0) = uVar26;
    *(ulong *)(puVar11 + -0xe8) = CONCAT44(0,uVar5);
    *(undefined8 *)(puVar11 + -0xe0) = 0;
    *(ulong *)(puVar11 + -0xd8) = uVar17;
    *(undefined8 *****)(puVar11 + -0xd0) = ppppuVar14;
    *(undefined **)(puVar11 + -200) = &FlatBuffers_FlatBufferBuilder__PutInt;
    ppppuVar14 = (undefined8 ****)(puVar11 + -0xd0);
    lVar25 = *(long *)(lVar15 + 0x18);
    uVar5 = *(int *)(lVar15 + 0x10) - 4;
    auVar8._8_8_ = lVar25;
    auVar8._0_8_ = CONCAT44(0,uVar5);
    auVar32._8_4_ = uVar5;
    auVar32._0_8_ = lVar25;
    auVar32._12_4_ = 0;
    *(uint *)(lVar15 + 0x10) = uVar5;
    if (lVar25 != 0) {
      uVar24 = 4;
      puVar30 = &UNK_016cdcec;
      goto code_r0x016cc7a4;
    }
    auVar34 = func_0x00f78af4();
    uVar23 = auVar34._8_8_;
    lVar15 = auVar34._0_8_;
    puVar9 = puVar11 + -0x120;
    *(ulong *)(puVar11 + -0x120) = uVar26;
    *(ulong *)(puVar11 + -0x118) = CONCAT44(0,uVar5);
    *(undefined8 *)(puVar11 + -0x110) = 0;
    *(ulong *)(puVar11 + -0x108) = uVar17;
    *(undefined8 *****)(puVar11 + -0x100) = ppppuVar14;
    *(undefined **)(puVar11 + -0xf8) = &FlatBuffers_FlatBufferBuilder__PutUint;
    ppppuVar14 = (undefined8 ****)(puVar11 + -0x100);
    lVar25 = *(long *)(lVar15 + 0x18);
    uVar5 = *(int *)(lVar15 + 0x10) - 4;
    auVar8._8_8_ = lVar25;
    auVar8._0_8_ = CONCAT44(0,uVar5);
    auVar32._8_4_ = uVar5;
    auVar32._0_8_ = lVar25;
    auVar32._12_4_ = 0;
    *(uint *)(lVar15 + 0x10) = uVar5;
    if (lVar25 != 0) {
      uVar24 = 4;
      puVar30 = &UNK_016cdd48;
      goto code_r0x016cc7a4;
    }
    auVar34 = func_0x00f78af4();
    uVar23 = auVar34._8_8_;
    lVar15 = auVar34._0_8_;
    puVar9 = puVar11 + -0x150;
    *(ulong *)(puVar11 + -0x150) = uVar26;
    *(ulong *)(puVar11 + -0x148) = CONCAT44(0,uVar5);
    *(undefined8 *)(puVar11 + -0x140) = 0;
    *(ulong *)(puVar11 + -0x138) = uVar17;
    *(undefined8 *****)(puVar11 + -0x130) = ppppuVar14;
    *(undefined **)(puVar11 + -0x128) = &FlatBuffers_FlatBufferBuilder__PutLong;
    ppppuVar14 = (undefined8 ****)(puVar11 + -0x130);
    lVar25 = *(long *)(lVar15 + 0x18);
    uVar5 = *(int *)(lVar15 + 0x10) - 8;
    auVar8._8_8_ = lVar25;
    auVar8._0_8_ = CONCAT44(0,uVar5);
    auVar32._8_4_ = uVar5;
    auVar32._0_8_ = lVar25;
    auVar32._12_4_ = 0;
    *(uint *)(lVar15 + 0x10) = uVar5;
    if (lVar25 != 0) {
      uVar24 = 8;
      puVar30 = &UNK_016cdda4;
      goto code_r0x016cc7a4;
    }
    auVar34 = func_0x00f78af4();
    uVar23 = auVar34._8_8_;
    lVar15 = auVar34._0_8_;
    puVar9 = puVar11 + -0x180;
    *(ulong *)(puVar11 + -0x180) = uVar26;
    *(ulong *)(puVar11 + -0x178) = CONCAT44(0,uVar5);
    *(undefined8 *)(puVar11 + -0x170) = 0;
    *(ulong *)(puVar11 + -0x168) = uVar17;
    *(undefined8 *****)(puVar11 + -0x160) = ppppuVar14;
    *(undefined **)(puVar11 + -0x158) = &FlatBuffers_FlatBufferBuilder__PutUlong;
    ppppuVar14 = (undefined8 ****)(puVar11 + -0x160);
    lVar25 = *(long *)(lVar15 + 0x18);
    uVar5 = *(int *)(lVar15 + 0x10) - 8;
    unaff_x21 = CONCAT44(0,uVar5);
    auVar8._8_8_ = lVar25;
    auVar8._0_8_ = unaff_x21;
    auVar32._8_4_ = uVar5;
    auVar32._0_8_ = lVar25;
    auVar32._12_4_ = 0;
    *(uint *)(lVar15 + 0x10) = uVar5;
    if (lVar25 != 0) {
      uVar24 = 8;
      puVar30 = &UNK_016cde00;
      goto code_r0x016cc7a4;
    }
    lVar15 = func_0x00f78af4();
    *(undefined8 *****)(puVar11 + -400) = ppppuVar14;
    *(undefined **)(puVar11 + -0x188) = &FlatBuffers_FlatBufferBuilder__PutFloat;
    lVar25 = *(long *)(lVar15 + 0x18);
    auVar8._8_8_ = lVar25;
    uVar5 = *(int *)(lVar15 + 0x10) - 4;
    uVar23 = (ulong)uVar5;
    auVar32._8_4_ = uVar5;
    auVar32._0_8_ = lVar25;
    auVar32._12_4_ = 0;
    *(uint *)(lVar15 + 0x10) = uVar5;
    if (lVar25 != 0) {
      puVar9 = puVar11 + -0x1b0;
      *(undefined8 *)(puVar11 + -0x1b0) = unaff_d9;
      *(undefined8 *)(puVar11 + -0x1a8) = unaff_d8;
      *(undefined8 *)(puVar11 + -0x1a0) = 0;
      *(ulong *)(puVar11 + -0x198) = uVar17;
      *(undefined8 *)(puVar11 + -400) = *(undefined8 *)(puVar11 + -400);
      *(undefined8 *)(puVar11 + -0x188) = *(undefined8 *)(puVar11 + -0x188);
      ppppuVar14 = (undefined8 ****)(puVar11 + -400);
      uVar24 = 4;
      puVar30 = &UNK_016ccba4;
      goto code_r0x016cc7a4;
    }
    lVar15 = func_0x00f78af4();
    *(undefined1 **)(puVar11 + -0x1a0) = puVar11 + -400;
    *(undefined **)(puVar11 + -0x198) = &FlatBuffers_FlatBufferBuilder__PutDouble;
    lVar25 = *(long *)(lVar15 + 0x18);
    auVar8._8_8_ = lVar25;
    uVar5 = *(int *)(lVar15 + 0x10) - 8;
    uVar23 = (ulong)uVar5;
    auVar32._8_4_ = uVar5;
    auVar32._0_8_ = lVar25;
    auVar32._12_4_ = 0;
    *(uint *)(lVar15 + 0x10) = uVar5;
    if (lVar25 != 0) break;
    auVar34 = func_0x00f78af4();
    *(undefined8 *)(puVar11 + -0x1c0) = 0;
    *(ulong *)(puVar11 + -0x1b8) = uVar17;
    *(undefined1 **)(puVar11 + -0x1b0) = puVar11 + -0x1a0;
    *(undefined **)(puVar11 + -0x1a8) = &FlatBuffers_FlatBufferBuilder__AddBool;
    pppuVar28 = (undefined8 ***)(puVar11 + -0x1b0);
    auVar33._8_8_ = 1;
    auVar33._0_8_ = auVar34._0_8_;
    uVar23 = 0;
    puVar30 = &UNK_016cde9c;
    puVar11 = puVar11 + -0x1c0;
    unaff_x22 = uVar26;
  } while( true );
  puVar9 = puVar11 + -0x1c0;
  *(undefined8 *)(puVar11 + -0x1c0) = unaff_d9;
  *(undefined8 *)(puVar11 + -0x1b8) = unaff_d8;
  *(undefined8 *)(puVar11 + -0x1b0) = 0;
  *(ulong *)(puVar11 + -0x1a8) = uVar17;
  *(undefined8 *)(puVar11 + -0x1a0) = *(undefined8 *)(puVar11 + -0x1a0);
  *(undefined8 *)(puVar11 + -0x198) = *(undefined8 *)(puVar11 + -0x198);
  ppppuVar14 = (undefined8 ****)(puVar11 + -0x1a0);
  uVar24 = 8;
  puVar30 = &UNK_016ccc34;
code_r0x016cc7a4:
  do {
    puVar13 = puVar9 + -0x20;
    *(long *)(puVar9 + -0x20) = auVar8._8_8_;
    *(ulong *)(puVar9 + -0x18) = uVar23;
    *(undefined8 *****)(puVar9 + -0x10) = ppppuVar14;
    *(undefined **)(puVar9 + -8) = puVar30;
    puVar27 = puVar9 + -0x10;
    if (auVar32._8_4_ < 0) {
code_r0x016cc7d8:
      func_0x00f78a24(0x3d1fcf8);
      uVar23 = func_0x00f78aec();
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a4d0(uVar23,0);
      uVar22 = func_0x00f78a24(0x3d52ce8);
      func_0x00f78ac0(uVar23,uVar22);
      uVar18 = uVar24;
    }
    else {
      lVar15 = *(long *)(auVar32._0_8_ + 0x10);
      uVar18 = uVar24;
      if (lVar15 != 0) {
        if (auVar32._8_4_ <= *(int *)(lVar15 + 0x18) - (int)uVar24) {
          return auVar32._0_8_;
        }
        goto code_r0x016cc7d8;
      }
    }
    puVar30 = &FlatBuffers_ByteBuffer__PutSbyte;
    auVar32 = func_0x00f78af4();
code_r0x016cc810:
    puVar9 = puVar13 + -0x30;
    *(ulong *)(puVar13 + -0x30) = uVar26;
    *(undefined1 (*) [16])(puVar13 + -0x28) = auVar8;
    *(ulong *)(puVar13 + -0x18) = uVar23;
    *(undefined1 **)(puVar13 + -0x10) = puVar27;
    *(undefined **)(puVar13 + -8) = puVar30;
    ppppuVar14 = (undefined8 ****)(puVar13 + -0x10);
    uVar24 = 1;
    puVar30 = &UNK_016cc834;
    uVar23 = uVar18;
    auVar8 = auVar32;
  } while( true );
}



// ============================================================
// RVA: 0x1656af4 | Core.Networking.HostStanding.EndHostStanding
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
/* WARNING: Possible PIC construction at 0x01656b90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01656c54: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x01656c58) */
/* WARNING: Removing unreachable block (ram,0x016ce224) */
/* WARNING: Removing unreachable block (ram,0x01656b94) */
/* WARNING: Removing unreachable block (ram,0x01656ba0) */
/* WARNING: Removing unreachable block (ram,0x01656ba8) */
/* WARNING: Removing unreachable block (ram,0x01656bc4) */
/* WARNING: Removing unreachable block (ram,0x01656bd0) */
/* WARNING: Removing unreachable block (ram,0x01656bdc) */
/* WARNING: Removing unreachable block (ram,0x016ce20c) */
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
/* WARNING: Removing unreachable block (ram,0x016cde9c) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_HostStanding__EndHostStanding
                (long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 *puVar7;
  undefined8 ****ppppuVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong uVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  ulong unaff_x21;
  ulong uVar23;
  ulong unaff_x22;
  ulong uVar24;
  undefined1 *puVar25;
  undefined8 ****ppppuVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [12];
  ulong auStack_b0 [2];
  undefined8 ***pppuStack_70;
  undefined *puStack_68;
  
  auVar31._8_8_ = param_1;
  auVar31._0_8_ = param_1;
  if ((bRam0000000003eb5808 & 1) == 0) {
    func_0x00f78a20(0x3d3f110);
    bRam0000000003eb5808 = 1;
  }
  if (param_1 == 0) {
    puVar28 = (undefined *)func_0x00f78af4();
    if (puVar28 != (undefined *)0x0) {
      ppppuVar8 = (undefined8 ****)&stack0xffffffffffffffb0;
      puVar25 = &stack0xffffffffffffffd0;
      if ((bRam0000000003eb5cd7 & 1) == 0) {
        func_0x00f78a20(0x3d1f100,3,0);
        bRam0000000003eb5cd7 = 1;
      }
      /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(puVar28);
      if (*(long *)(puVar28 + 0x28) == 0) {
        auVar32 = func_0x00f78af4();
        puVar12 = auVar32._0_8_;
        ppppuVar8 = &pppuStack_70;
        pppuStack_70 = (undefined8 ***)((long)&MACH_HEADER.magic + 3);
        puVar25 = &stack0xffffffffffffffa0;
        puStack_68 = puVar28;
        if (*(int *)(puVar12 + 0x30) <= auVar32._8_4_) {
          func_0x00f78a24(0x3d22738);
          uVar15 = func_0x00f78aec();
          uVar17 = func_0x00f78a24(0x3d6ceb8);
          unaff_x21 = 0;
          /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar15,uVar17);
          uVar17 = func_0x00f78a24(0x3d56a58);
          func_0x00f78ac0(uVar15,uVar17);
          func_0x00f78af4();
          uVar15 = func_0x00f78b24();
          auVar31 = func_0x00f78ac0(uVar15,0);
          uVar23 = auVar31._0_8_;
          puVar25 = &stack0xffffffffffffff80;
          if (((int)unaff_x21 == param_4) && (*(char *)(uVar23 + 0x48) == '\0')) {
            return uVar23;
          }
          uVar19 = 1;
          uVar21 = 0;
          puVar28 = &UNK_016ce46c;
          puVar9 = &stack0xffffffffffffff60;
          goto code_r0x016cdaac;
        }
        puVar27 = &UNK_016ce3a4;
      }
      else {
        if (*(int *)(*(long *)(puVar28 + 0x28) + 0x18) < 3) {
          uVar15 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,3);
          *(undefined8 *)(puVar28 + 0x28) = uVar15;
        }
        *(undefined4 *)(puVar28 + 0x30) = 3;
        puVar27 = &UNK_016ce320;
        puVar12 = puVar28;
      }
      *(undefined1 **)((long)ppppuVar8 + -0x10) = puVar25;
      *(undefined **)((long)ppppuVar8 + -8) = puVar27;
      if ((*(long *)(puVar12 + 0x18) != 0) &&
         (lVar16 = *(long *)(*(long *)(puVar12 + 0x18) + 0x10), lVar16 != 0)) {
        return (ulong)(uint)(*(int *)(lVar16 + 0x18) - *(int *)(puVar12 + 0x10));
      }
      lVar16 = func_0x00f78af4();
      return (ulong)*(byte *)(lVar16 + 0x48);
    }
    auVar29 = func_0x00f78af4();
    lVar16 = auVar29._0_8_;
    if ((auVar29._8_8_ == 0) || (lVar16 == 0)) {
      auVar29 = func_0x00f78af4();
      lVar22 = auVar29._8_8_;
      lVar16 = auVar29._0_8_;
      puVar9 = &stack0xffffffffffffff70;
      puStack_68 = &Core_Networking_HostStanding__CreateStandingsVectorBlock;
      ppppuVar26 = &pppuStack_70;
      unaff_x21 = 0x3eb5000;
      pppuStack_70 = (undefined8 ***)&stack0xffffffffffffffc0;
      if ((bRam0000000003eb5807 & 1) == 0) {
        func_0x00f78a20(0x3d569a8);
        bRam0000000003eb5807 = 1;
      }
      if ((lVar22 == 0) || (lVar16 == 0)) {
        puVar28 = &Core_Networking_HostStanding__StartStandingsVector;
        auVar32 = func_0x00f78af4();
        iVar20 = auVar32._8_4_;
        auVar29._8_8_ = lVar22;
        auVar29._0_8_ = auVar32._0_8_;
        if (auVar32._0_8_ == 0) {
          lVar16 = func_0x00f78af4();
          return *(ulong *)(lVar16 + 8);
        }
      }
      else {
        unaff_x21 = 0x3d56000;
        iVar20 = *(int *)(lVar22 + 0x18);
        puVar28 = &UNK_01656c58;
        puVar9 = &stack0xffffffffffffff70;
      }
    }
    else {
      iVar20 = *(int *)(auVar29._8_8_ + 0x18);
      puVar28 = &UNK_01656b94;
      puVar9 = &stack0xffffffffffffffa0;
      ppppuVar26 = (undefined8 ****)&stack0xffffffffffffffc0;
    }
    uVar24 = auVar29._0_8_;
    *(ulong *)(puVar9 + -0x30) = unaff_x22;
    *(ulong *)(puVar9 + -0x28) = unaff_x21;
    *(long *)(puVar9 + -0x20) = auVar29._8_8_;
    *(long *)(puVar9 + -0x18) = lVar16;
    *(undefined8 *****)(puVar9 + -0x10) = ppppuVar26;
    *(undefined **)(puVar9 + -8) = puVar28;
    puVar25 = puVar9 + -0x10;
    auVar31._8_8_ = 4;
    auVar31._0_8_ = uVar24;
    unaff_x21 = 4;
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4();
    *(int *)(uVar24 + 0x44) = iVar20;
    uVar21 = (ulong)(uint)(iVar20 * 4);
    uVar19 = 4;
    puVar28 = &UNK_016ce188;
    puVar9 = puVar9 + -0x30;
    uVar23 = uVar21;
    unaff_x22 = uVar24;
  }
  else {
    puVar25 = &stack0xfffffffffffffff0;
    if ((bRam0000000003eb5cd8 & 1) == 0) {
      func_0x00f78a20(0x3d1f100,0);
      bRam0000000003eb5cd8 = 1;
    }
    if (*(int *)(param_1 + 0x30) < 0) {
      func_0x00f78a24(0x3d22a38);
      puVar28 = (undefined *)func_0x00f78aec();
      uVar15 = func_0x00f78a24(0x3d6cea8);
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(puVar28,uVar15);
      uVar15 = func_0x00f78a24(0x3d56a30);
      auVar32 = func_0x00f78ac0(puVar28,uVar15);
      pppuStack_70 = (undefined8 ****)0x3eb5000;
      puVar25 = &stack0xffffffffffffffa0;
      lVar16 = *(long *)(auVar32._0_8_ + 0x18);
      puStack_68 = puVar28;
      if ((lVar16 != 0) && (*(long *)(lVar16 + 0x10) != 0)) {
        uVar4 = *(int *)(*(long *)(lVar16 + 0x10) + 0x18) - auVar32._8_4_;
        uVar23 = (ulong)uVar4;
        auVar30._8_4_ = uVar4;
        auVar30._0_8_ = lVar16;
        auVar30._12_4_ = 0;
        puVar7 = &stack0xffffffffffffff30;
        puVar25 = &stack0xffffffffffffff60;
        auVar6._8_8_ = 4;
        auVar6._0_8_ = lVar16;
        uVar24 = 0x3d201a0;
        if ((bRam0000000003eb5cd0 & 1) == 0) {
          func_0x00f78a20(0x3d201a0);
          bRam0000000003eb5cd0 = 1;
        }
        uVar19 = 4;
        puVar28 = &UNK_016cc68c;
        goto code_r0x016cc7a4;
      }
      func_0x00f78af4();
      uVar15 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&stack0xffffffffffffff7c,0);
      uVar17 = func_0x00f78a24(0x3d6ce88);
      uVar18 = func_0x00f78a24(0x3d66338);
      lVar16 = /*System.String$$Concat*/ func_0x029be39c(uVar17,uVar15,uVar18,0);
      func_0x00f78a24(0x3d22a38);
      uVar19 = func_0x00f78aec();
      uVar17 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar19,lVar16);
      uVar15 = func_0x00f78a24(0x3d56a50);
      puVar28 = &FlatBuffers_FlatBufferBuilder__Finish;
      auVar31 = func_0x00f78ac0(uVar19,uVar15);
      puVar9 = &stack0xffffffffffffff70;
      while( true ) {
        uVar23 = auVar31._8_8_;
        lVar22 = auVar31._0_8_;
        auVar31._8_8_ = lVar22;
        auVar31._0_8_ = lVar22;
        *(ulong *)(puVar9 + -0x20) = uVar19;
        *(long *)(puVar9 + -0x18) = lVar16;
        *(undefined1 **)(puVar9 + -0x10) = puVar25;
        *(undefined **)(puVar9 + -8) = puVar28;
        puVar25 = puVar9 + -0x10;
        uVar4 = *(uint *)(lVar22 + 0x20);
        uVar19 = (ulong)uVar4;
        lVar16 = lVar22;
        if ((int)uVar17 == 0) {
          lVar16 = 0;
          uVar4 = 0;
        }
        auVar5._8_8_ = lVar22;
        auVar5._0_8_ = lVar16;
        if ((int)uVar17 == 0) {
          uVar21 = 4;
          puVar28 = &UNK_016cef64;
          puVar9 = puVar9 + -0x20;
          goto code_r0x016cdaac;
        }
        if (lVar16 != 0) break;
        puVar28 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar31 = func_0x00f78af4();
        uVar17 = 0;
        puVar9 = puVar9 + -0x20;
        lVar16 = lVar22;
        uVar19 = uVar23;
      }
      uVar21 = 8;
      puVar28 = &UNK_016cef10;
      puVar9 = puVar9 + -0x20;
      uVar19 = (ulong)uVar4;
      auVar31 = auVar5;
    }
    else {
      uVar21 = 0;
      puVar28 = &UNK_016cea78;
      puVar9 = &stack0xffffffffffffffb0;
      uVar19 = 4;
      uVar23 = 0x3eb5000;
    }
  }
code_r0x016cdaac:
  do {
    uVar14 = auVar31._0_8_;
    puVar7 = puVar9 + -0x30;
    *(ulong *)(puVar9 + -0x30) = unaff_x22;
    *(ulong *)(puVar9 + -0x28) = unaff_x21;
    *(ulong *)(puVar9 + -0x20) = uVar23;
    *(long *)(puVar9 + -0x18) = auVar31._8_8_;
    *(undefined1 **)(puVar9 + -0x10) = puVar25;
    *(undefined **)(puVar9 + -8) = puVar28;
    iVar20 = (int)uVar19;
    if (*(int *)(uVar14 + 0x20) < iVar20) {
      *(int *)(uVar14 + 0x20) = iVar20;
    }
    uVar19 = uVar23;
    uVar24 = unaff_x22;
    if ((*(long *)(uVar14 + 0x18) != 0) &&
       (lVar16 = *(long *)(*(long *)(uVar14 + 0x18) + 0x10), lVar16 != 0)) {
      uVar2 = *(uint *)(lVar16 + 0x18);
      iVar3 = *(int *)(uVar14 + 0x10);
      uVar1 = iVar3 - (uVar2 + (int)uVar21) & iVar20 - 1U;
      uVar19 = CONCAT44(0,uVar1);
      uVar4 = (int)uVar21 + iVar20 + uVar1;
      uVar24 = (ulong)uVar4;
      uVar23 = uVar14;
      while (unaff_x21 = (ulong)uVar2, iVar3 < (int)uVar4) {
        uVar23 = /*FlatBuffers.FlatBufferBuilder$$GrowBuffer*/ func_0x016cda78(uVar14);
        if ((*(long *)(uVar14 + 0x18) == 0) ||
           (lVar16 = *(long *)(*(long *)(uVar14 + 0x18) + 0x10), lVar16 == 0))
        goto code_r0x016cdb68;
        iVar3 = *(int *)(uVar14 + 0x10) - uVar2;
        uVar2 = *(uint *)(lVar16 + 0x18);
        iVar3 = iVar3 + uVar2;
        *(int *)(uVar14 + 0x10) = iVar3;
      }
      if ((int)uVar1 < 1) {
        return uVar23;
      }
      uVar23 = *(ulong *)(puVar9 + -0x20);
      uVar15 = *(undefined8 *)(puVar9 + -0x18);
      unaff_x22 = *(ulong *)(puVar9 + -0x30);
      unaff_x21 = *(ulong *)(puVar9 + -0x28);
      *(undefined8 *)(puVar9 + -0x10) = *(undefined8 *)(puVar9 + -0x10);
      *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
      lVar16 = *(long *)(uVar14 + 0x18);
      auVar6._8_8_ = lVar16;
      auVar6._0_8_ = uVar19;
      uVar1 = *(int *)(uVar14 + 0x10) - uVar1;
      uVar24 = (ulong)uVar1;
      auVar30._8_4_ = uVar1;
      auVar30._0_8_ = lVar16;
      auVar30._12_4_ = 0;
      *(uint *)(uVar14 + 0x10) = uVar1;
      if (lVar16 != 0) {
        *(ulong *)(puVar9 + -0x30) = unaff_x22;
        *(ulong *)(puVar9 + -0x28) = unaff_x21;
        *(ulong *)(puVar9 + -0x20) = uVar23;
        *(undefined8 *)(puVar9 + -0x18) = uVar15;
        *(undefined8 *)(puVar9 + -0x10) = *(undefined8 *)(puVar9 + -0x10);
        *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
        puVar25 = puVar9 + -0x10;
        puVar28 = &UNK_016cc908;
        uVar23 = 0;
        goto code_r0x016cc7a4;
      }
      lVar16 = func_0x00f78af4();
      puVar25 = puVar9 + -0x20;
      *(undefined1 **)(puVar9 + -0x20) = puVar9 + -0x10;
      *(undefined **)(puVar9 + -0x18) = &FlatBuffers_FlatBufferBuilder__GrowBuffer;
      if ((*(long *)(lVar16 + 0x18) != 0) &&
         (plVar13 = *(long **)(*(long *)(lVar16 + 0x18) + 0x10), plVar13 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016cdaa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar23 = (**(code **)(*plVar13 + 0x178))
                           (plVar13,(int)plVar13[3] << 1,*(undefined8 *)(*plVar13 + 0x180));
        return uVar23;
      }
      puVar28 = &FlatBuffers_FlatBufferBuilder__Prep;
      auVar29 = func_0x00f78af4();
      uVar19 = auVar29._8_8_;
      auVar31._8_8_ = uVar15;
      auVar31._0_8_ = auVar29._0_8_;
      puVar9 = puVar9 + -0x20;
      goto code_r0x016cdaac;
    }
code_r0x016cdb68:
    auVar6._8_8_ = uVar19;
    auVar6._0_8_ = unaff_x21;
    auVar31 = func_0x00f78af4();
    uVar23 = auVar31._8_8_;
    lVar22 = auVar31._0_8_;
    *(undefined1 **)(puVar9 + -0x40) = puVar9 + -0x10;
    *(undefined **)(puVar9 + -0x38) = &FlatBuffers_FlatBufferBuilder__PutBool;
    lVar16 = *(long *)(lVar22 + 0x18);
    iVar20 = *(int *)(lVar22 + 0x10) + -1;
    *(int *)(lVar22 + 0x10) = iVar20;
    if (lVar16 != 0) {
      puVar10 = puVar9 + -0x30;
      uVar15 = *(undefined8 *)(puVar9 + -0x40);
      uVar17 = *(undefined8 *)(puVar9 + -0x38);
FlatBuffers_ByteBuffer__PutByte:
      auVar6._8_4_ = iVar20;
      auVar6._0_8_ = lVar16;
      auVar6._12_4_ = 0;
      auVar30._8_4_ = iVar20;
      auVar30._0_8_ = lVar16;
      auVar30._12_4_ = 0;
      puVar7 = puVar10 + -0x30;
      *(ulong *)(puVar10 + -0x30) = uVar24;
      *(ulong *)(puVar10 + -0x28) = unaff_x21;
      *(ulong *)(puVar10 + -0x20) = uVar19;
      *(ulong *)(puVar10 + -0x18) = uVar14;
      *(undefined8 *)(puVar10 + -0x10) = uVar15;
      *(undefined8 *)(puVar10 + -8) = uVar17;
      puVar25 = puVar10 + -0x10;
      uVar19 = 1;
      puVar28 = &UNK_016cc89c;
      goto code_r0x016cc7a4;
    }
    auVar31 = func_0x00f78af4();
    uVar21 = auVar31._8_8_;
    lVar16 = auVar31._0_8_;
    *(undefined1 **)(puVar9 + -0x50) = puVar9 + -0x40;
    *(undefined **)(puVar9 + -0x48) = &FlatBuffers_FlatBufferBuilder__PutSbyte;
    iVar20 = *(int *)(lVar16 + 0x10) + -1;
    auVar30._8_4_ = iVar20;
    auVar30._0_8_ = *(long *)(lVar16 + 0x18);
    auVar30._12_4_ = 0;
    *(int *)(lVar16 + 0x10) = iVar20;
    if (*(long *)(lVar16 + 0x18) != 0) {
      puVar11 = puVar9 + -0x40;
      puVar25 = *(undefined1 **)(puVar9 + -0x50);
      puVar28 = *(undefined **)(puVar9 + -0x48);
      uVar23 = uVar14;
      goto code_r0x016cc810;
    }
    auVar31 = func_0x00f78af4();
    uVar23 = auVar31._8_8_;
    lVar22 = auVar31._0_8_;
    *(undefined1 **)(puVar9 + -0x60) = puVar9 + -0x50;
    *(undefined **)(puVar9 + -0x58) = &FlatBuffers_FlatBufferBuilder__PutByte;
    lVar16 = *(long *)(lVar22 + 0x18);
    iVar20 = *(int *)(lVar22 + 0x10) + -1;
    *(int *)(lVar22 + 0x10) = iVar20;
    if (lVar16 != 0) {
      puVar10 = puVar9 + -0x50;
      uVar15 = *(undefined8 *)(puVar9 + -0x60);
      uVar17 = *(undefined8 *)(puVar9 + -0x58);
      goto FlatBuffers_ByteBuffer__PutByte;
    }
    auVar31 = func_0x00f78af4();
    uVar23 = auVar31._8_8_;
    lVar16 = auVar31._0_8_;
    puVar7 = puVar9 + -0x90;
    *(ulong *)(puVar9 + -0x90) = uVar24;
    *(ulong *)(puVar9 + -0x88) = unaff_x21;
    *(ulong *)(puVar9 + -0x80) = uVar19;
    *(ulong *)(puVar9 + -0x78) = uVar14;
    *(undefined1 **)(puVar9 + -0x70) = puVar9 + -0x60;
    *(undefined **)(puVar9 + -0x68) = &FlatBuffers_FlatBufferBuilder__PutShort;
    puVar25 = puVar9 + -0x70;
    lVar22 = *(long *)(lVar16 + 0x18);
    uVar4 = *(int *)(lVar16 + 0x10) - 2;
    auVar6._8_8_ = lVar22;
    auVar6._0_8_ = CONCAT44(0,uVar4);
    auVar30._8_4_ = uVar4;
    auVar30._0_8_ = lVar22;
    auVar30._12_4_ = 0;
    *(uint *)(lVar16 + 0x10) = uVar4;
    if (lVar22 != 0) {
      uVar19 = 2;
      puVar28 = &UNK_016cdc34;
      goto code_r0x016cc7a4;
    }
    auVar31 = func_0x00f78af4();
    uVar23 = auVar31._8_8_;
    lVar16 = auVar31._0_8_;
    puVar7 = puVar9 + -0xc0;
    *(ulong *)(puVar9 + -0xc0) = uVar24;
    *(ulong *)(puVar9 + -0xb8) = CONCAT44(0,uVar4);
    *(undefined8 *)(puVar9 + -0xb0) = 0;
    *(ulong *)(puVar9 + -0xa8) = uVar14;
    *(undefined1 **)(puVar9 + -0xa0) = puVar25;
    *(undefined **)(puVar9 + -0x98) = &FlatBuffers_FlatBufferBuilder__PutUshort;
    puVar25 = puVar9 + -0xa0;
    lVar22 = *(long *)(lVar16 + 0x18);
    uVar4 = *(int *)(lVar16 + 0x10) - 2;
    auVar6._8_8_ = lVar22;
    auVar6._0_8_ = CONCAT44(0,uVar4);
    auVar30._8_4_ = uVar4;
    auVar30._0_8_ = lVar22;
    auVar30._12_4_ = 0;
    *(uint *)(lVar16 + 0x10) = uVar4;
    if (lVar22 != 0) {
      uVar19 = 2;
      puVar28 = &UNK_016cdc90;
      goto code_r0x016cc7a4;
    }
    auVar31 = func_0x00f78af4();
    uVar23 = auVar31._8_8_;
    lVar16 = auVar31._0_8_;
    puVar7 = puVar9 + -0xf0;
    *(ulong *)(puVar9 + -0xf0) = uVar24;
    *(ulong *)(puVar9 + -0xe8) = CONCAT44(0,uVar4);
    *(undefined8 *)(puVar9 + -0xe0) = 0;
    *(ulong *)(puVar9 + -0xd8) = uVar14;
    *(undefined1 **)(puVar9 + -0xd0) = puVar25;
    *(undefined **)(puVar9 + -200) = &FlatBuffers_FlatBufferBuilder__PutInt;
    puVar25 = puVar9 + -0xd0;
    lVar22 = *(long *)(lVar16 + 0x18);
    uVar4 = *(int *)(lVar16 + 0x10) - 4;
    auVar6._8_8_ = lVar22;
    auVar6._0_8_ = CONCAT44(0,uVar4);
    auVar30._8_4_ = uVar4;
    auVar30._0_8_ = lVar22;
    auVar30._12_4_ = 0;
    *(uint *)(lVar16 + 0x10) = uVar4;
    if (lVar22 != 0) {
      uVar19 = 4;
      puVar28 = &UNK_016cdcec;
      goto code_r0x016cc7a4;
    }
    auVar31 = func_0x00f78af4();
    uVar23 = auVar31._8_8_;
    lVar16 = auVar31._0_8_;
    puVar7 = puVar9 + -0x120;
    *(ulong *)(puVar9 + -0x120) = uVar24;
    *(ulong *)(puVar9 + -0x118) = CONCAT44(0,uVar4);
    *(undefined8 *)(puVar9 + -0x110) = 0;
    *(ulong *)(puVar9 + -0x108) = uVar14;
    *(undefined1 **)(puVar9 + -0x100) = puVar25;
    *(undefined **)(puVar9 + -0xf8) = &FlatBuffers_FlatBufferBuilder__PutUint;
    puVar25 = puVar9 + -0x100;
    lVar22 = *(long *)(lVar16 + 0x18);
    uVar4 = *(int *)(lVar16 + 0x10) - 4;
    auVar6._8_8_ = lVar22;
    auVar6._0_8_ = CONCAT44(0,uVar4);
    auVar30._8_4_ = uVar4;
    auVar30._0_8_ = lVar22;
    auVar30._12_4_ = 0;
    *(uint *)(lVar16 + 0x10) = uVar4;
    if (lVar22 != 0) {
      uVar19 = 4;
      puVar28 = &UNK_016cdd48;
      goto code_r0x016cc7a4;
    }
    auVar31 = func_0x00f78af4();
    uVar23 = auVar31._8_8_;
    lVar16 = auVar31._0_8_;
    puVar7 = puVar9 + -0x150;
    *(ulong *)(puVar9 + -0x150) = uVar24;
    *(ulong *)(puVar9 + -0x148) = CONCAT44(0,uVar4);
    *(undefined8 *)(puVar9 + -0x140) = 0;
    *(ulong *)(puVar9 + -0x138) = uVar14;
    *(undefined1 **)(puVar9 + -0x130) = puVar25;
    *(undefined **)(puVar9 + -0x128) = &FlatBuffers_FlatBufferBuilder__PutLong;
    puVar25 = puVar9 + -0x130;
    lVar22 = *(long *)(lVar16 + 0x18);
    uVar4 = *(int *)(lVar16 + 0x10) - 8;
    auVar6._8_8_ = lVar22;
    auVar6._0_8_ = CONCAT44(0,uVar4);
    auVar30._8_4_ = uVar4;
    auVar30._0_8_ = lVar22;
    auVar30._12_4_ = 0;
    *(uint *)(lVar16 + 0x10) = uVar4;
    if (lVar22 != 0) {
      uVar19 = 8;
      puVar28 = &UNK_016cdda4;
      goto code_r0x016cc7a4;
    }
    auVar31 = func_0x00f78af4();
    uVar23 = auVar31._8_8_;
    lVar16 = auVar31._0_8_;
    puVar7 = puVar9 + -0x180;
    *(ulong *)(puVar9 + -0x180) = uVar24;
    *(ulong *)(puVar9 + -0x178) = CONCAT44(0,uVar4);
    *(undefined8 *)(puVar9 + -0x170) = 0;
    *(ulong *)(puVar9 + -0x168) = uVar14;
    *(undefined1 **)(puVar9 + -0x160) = puVar25;
    *(undefined **)(puVar9 + -0x158) = &FlatBuffers_FlatBufferBuilder__PutUlong;
    puVar25 = puVar9 + -0x160;
    lVar22 = *(long *)(lVar16 + 0x18);
    uVar4 = *(int *)(lVar16 + 0x10) - 8;
    unaff_x21 = CONCAT44(0,uVar4);
    auVar6._8_8_ = lVar22;
    auVar6._0_8_ = unaff_x21;
    auVar30._8_4_ = uVar4;
    auVar30._0_8_ = lVar22;
    auVar30._12_4_ = 0;
    *(uint *)(lVar16 + 0x10) = uVar4;
    if (lVar22 != 0) {
      uVar19 = 8;
      puVar28 = &UNK_016cde00;
      goto code_r0x016cc7a4;
    }
    lVar16 = func_0x00f78af4();
    *(undefined1 **)(puVar9 + -400) = puVar25;
    *(undefined **)(puVar9 + -0x188) = &FlatBuffers_FlatBufferBuilder__PutFloat;
    lVar22 = *(long *)(lVar16 + 0x18);
    auVar6._8_8_ = lVar22;
    uVar4 = *(int *)(lVar16 + 0x10) - 4;
    uVar23 = (ulong)uVar4;
    auVar30._8_4_ = uVar4;
    auVar30._0_8_ = lVar22;
    auVar30._12_4_ = 0;
    *(uint *)(lVar16 + 0x10) = uVar4;
    if (lVar22 != 0) {
      puVar7 = puVar9 + -0x1b0;
      *(undefined8 *)(puVar9 + -0x1b0) = unaff_d9;
      *(undefined8 *)(puVar9 + -0x1a8) = unaff_d8;
      *(undefined8 *)(puVar9 + -0x1a0) = 0;
      *(ulong *)(puVar9 + -0x198) = uVar14;
      *(undefined8 *)(puVar9 + -400) = *(undefined8 *)(puVar9 + -400);
      *(undefined8 *)(puVar9 + -0x188) = *(undefined8 *)(puVar9 + -0x188);
      puVar25 = puVar9 + -400;
      uVar19 = 4;
      puVar28 = &UNK_016ccba4;
      goto code_r0x016cc7a4;
    }
    lVar16 = func_0x00f78af4();
    *(undefined1 **)(puVar9 + -0x1a0) = puVar9 + -400;
    *(undefined **)(puVar9 + -0x198) = &FlatBuffers_FlatBufferBuilder__PutDouble;
    lVar22 = *(long *)(lVar16 + 0x18);
    auVar6._8_8_ = lVar22;
    uVar4 = *(int *)(lVar16 + 0x10) - 8;
    uVar23 = (ulong)uVar4;
    auVar30._8_4_ = uVar4;
    auVar30._0_8_ = lVar22;
    auVar30._12_4_ = 0;
    *(uint *)(lVar16 + 0x10) = uVar4;
    if (lVar22 != 0) break;
    auVar31 = func_0x00f78af4();
    uVar23 = auVar31._0_8_;
    *(undefined8 *)(puVar9 + -0x1c0) = 0;
    *(ulong *)(puVar9 + -0x1b8) = uVar14;
    *(undefined1 **)(puVar9 + -0x1b0) = puVar9 + -0x1a0;
    *(undefined **)(puVar9 + -0x1a8) = &FlatBuffers_FlatBufferBuilder__AddBool;
    puVar25 = puVar9 + -0x1b0;
    uVar19 = 1;
    uVar21 = 0;
    puVar28 = &UNK_016cde9c;
    puVar9 = puVar9 + -0x1c0;
    unaff_x22 = uVar24;
  } while( true );
  puVar7 = puVar9 + -0x1c0;
  *(undefined8 *)(puVar9 + -0x1c0) = unaff_d9;
  *(undefined8 *)(puVar9 + -0x1b8) = unaff_d8;
  *(undefined8 *)(puVar9 + -0x1b0) = 0;
  *(ulong *)(puVar9 + -0x1a8) = uVar14;
  *(undefined8 *)(puVar9 + -0x1a0) = *(undefined8 *)(puVar9 + -0x1a0);
  *(undefined8 *)(puVar9 + -0x198) = *(undefined8 *)(puVar9 + -0x198);
  puVar25 = puVar9 + -0x1a0;
  uVar19 = 8;
  puVar28 = &UNK_016ccc34;
code_r0x016cc7a4:
  do {
    puVar11 = puVar7 + -0x20;
    *(long *)(puVar7 + -0x20) = auVar6._8_8_;
    *(ulong *)(puVar7 + -0x18) = uVar23;
    *(undefined1 **)(puVar7 + -0x10) = puVar25;
    *(undefined **)(puVar7 + -8) = puVar28;
    puVar25 = puVar7 + -0x10;
    if (auVar30._8_4_ < 0) {
code_r0x016cc7d8:
      func_0x00f78a24(0x3d1fcf8);
      uVar23 = func_0x00f78aec();
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a4d0(uVar23,0);
      uVar15 = func_0x00f78a24(0x3d52ce8);
      func_0x00f78ac0(uVar23,uVar15);
      uVar21 = uVar19;
    }
    else {
      lVar16 = *(long *)(auVar30._0_8_ + 0x10);
      uVar21 = uVar19;
      if (lVar16 != 0) {
        if (auVar30._8_4_ <= *(int *)(lVar16 + 0x18) - (int)uVar19) {
          return auVar30._0_8_;
        }
        goto code_r0x016cc7d8;
      }
    }
    puVar28 = &FlatBuffers_ByteBuffer__PutSbyte;
    auVar30 = func_0x00f78af4();
code_r0x016cc810:
    puVar7 = puVar11 + -0x30;
    *(ulong *)(puVar11 + -0x30) = uVar24;
    *(undefined1 (*) [16])(puVar11 + -0x28) = auVar6;
    *(ulong *)(puVar11 + -0x18) = uVar23;
    *(undefined1 **)(puVar11 + -0x10) = puVar25;
    *(undefined **)(puVar11 + -8) = puVar28;
    puVar25 = puVar11 + -0x10;
    uVar19 = 1;
    puVar28 = &UNK_016cc834;
    uVar23 = uVar21;
    auVar6 = auVar30;
  } while( true );
}



// ============================================================
// RVA: 0x1656b40 | Core.Networking.HostStanding.StartHostStanding
// ============================================================

/* WARNING: Possible PIC construction at 0x016ce31c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce3a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01656b90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01656c54: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x01656c58) */
/* WARNING: Removing unreachable block (ram,0x016ce224) */
/* WARNING: Removing unreachable block (ram,0x01656b94) */
/* WARNING: Removing unreachable block (ram,0x01656ba0) */
/* WARNING: Removing unreachable block (ram,0x01656ba8) */
/* WARNING: Removing unreachable block (ram,0x01656bc4) */
/* WARNING: Removing unreachable block (ram,0x01656bd0) */
/* WARNING: Removing unreachable block (ram,0x01656bdc) */
/* WARNING: Removing unreachable block (ram,0x016ce20c) */
/* WARNING: Removing unreachable block (ram,0x016ce46c) */
/* WARNING: Removing unreachable block (ram,0x016ce3a4) */
/* WARNING: Removing unreachable block (ram,0x016ce3a8) */
/* WARNING: Removing unreachable block (ram,0x016ce3b4) */
/* WARNING: Removing unreachable block (ram,0x016ce320) */
/* WARNING: Removing unreachable block (ram,0x016cde9c) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_HostStanding__StartHostStanding
                (undefined *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 *puVar6;
  undefined8 ****ppppuVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  undefined8 unaff_x21;
  ulong unaff_x22;
  ulong uVar22;
  undefined1 *puVar23;
  undefined8 ****ppppuVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [12];
  undefined8 ***pppuStack_50;
  undefined *puStack_48;
  
  if (param_1 == (undefined *)0x0) {
    auVar27 = func_0x00f78af4();
    lVar19 = auVar27._0_8_;
    if ((auVar27._8_8_ == 0) || (lVar19 == 0)) {
      auVar27 = func_0x00f78af4();
      lVar21 = auVar27._8_8_;
      lVar19 = auVar27._0_8_;
      puVar8 = &stack0xffffffffffffff90;
      puStack_48 = &Core_Networking_HostStanding__CreateStandingsVectorBlock;
      ppppuVar24 = &pppuStack_50;
      unaff_x21 = 0x3eb5000;
      pppuStack_50 = (undefined8 ***)&stack0xffffffffffffffe0;
      if ((bRam0000000003eb5807 & 1) == 0) {
        func_0x00f78a20(0x3d569a8);
        bRam0000000003eb5807 = 1;
      }
      if ((lVar21 == 0) || (lVar19 == 0)) {
        puVar26 = &Core_Networking_HostStanding__StartStandingsVector;
        auVar31 = func_0x00f78af4();
        iVar16 = auVar31._8_4_;
        auVar27._8_8_ = lVar21;
        auVar27._0_8_ = auVar31._0_8_;
        if (auVar31._0_8_ == 0) {
          lVar19 = func_0x00f78af4();
          return *(ulong *)(lVar19 + 8);
        }
      }
      else {
        unaff_x21 = 0x3d56000;
        iVar16 = *(int *)(lVar21 + 0x18);
        puVar26 = &UNK_01656c58;
        puVar8 = &stack0xffffffffffffff90;
      }
    }
    else {
      iVar16 = *(int *)(auVar27._8_8_ + 0x18);
      puVar26 = &UNK_01656b94;
      puVar8 = &stack0xffffffffffffffc0;
      ppppuVar24 = (undefined8 ****)&stack0xffffffffffffffe0;
    }
    uVar13 = auVar27._0_8_;
    *(ulong *)(puVar8 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar8 + -0x28) = unaff_x21;
    *(long *)(puVar8 + -0x20) = auVar27._8_8_;
    *(long *)(puVar8 + -0x18) = lVar19;
    *(undefined8 *****)(puVar8 + -0x10) = ppppuVar24;
    *(undefined **)(puVar8 + -8) = puVar26;
    puVar23 = puVar8 + -0x10;
    uVar17 = 4;
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4();
    *(int *)(uVar13 + 0x44) = iVar16;
    uVar18 = CONCAT44(0,iVar16 * 4);
    auVar30._8_8_ = 4;
    auVar30._0_8_ = uVar18;
    auVar29._8_8_ = 4;
    auVar29._0_8_ = uVar13;
    puVar26 = &UNK_016ce188;
    puVar8 = puVar8 + -0x30;
code_r0x016cdaac:
    do {
      while( true ) {
        uVar20 = auVar30._0_8_;
        uVar12 = auVar29._0_8_;
        puVar6 = puVar8 + -0x30;
        *(ulong *)(puVar8 + -0x30) = uVar13;
        *(ulong *)(puVar8 + -0x28) = uVar17;
        *(undefined1 (*) [16])(puVar8 + -0x20) = auVar30;
        *(undefined1 **)(puVar8 + -0x10) = puVar23;
        *(undefined **)(puVar8 + -8) = puVar26;
        iVar16 = auVar29._8_4_;
        if (*(int *)(uVar12 + 0x20) < iVar16) {
          *(int *)(uVar12 + 0x20) = iVar16;
        }
        uVar22 = uVar13;
        if ((*(long *)(uVar12 + 0x18) == 0) ||
           (lVar19 = *(long *)(*(long *)(uVar12 + 0x18) + 0x10), lVar19 == 0)) break;
        uVar3 = *(uint *)(lVar19 + 0x18);
        iVar4 = *(int *)(uVar12 + 0x10);
        uVar2 = iVar4 - (uVar3 + (int)uVar18) & iVar16 - 1U;
        uVar20 = CONCAT44(0,uVar2);
        uVar1 = (int)uVar18 + iVar16 + uVar2;
        uVar22 = (ulong)uVar1;
        uVar13 = uVar12;
        while (uVar17 = (ulong)uVar3, iVar4 < (int)uVar1) {
          uVar13 = /*FlatBuffers.FlatBufferBuilder$$GrowBuffer*/ func_0x016cda78(uVar12);
          if ((*(long *)(uVar12 + 0x18) == 0) ||
             (lVar19 = *(long *)(*(long *)(uVar12 + 0x18) + 0x10), lVar19 == 0))
          goto code_r0x016cdb68;
          iVar4 = *(int *)(uVar12 + 0x10) - uVar3;
          uVar3 = *(uint *)(lVar19 + 0x18);
          iVar4 = iVar4 + uVar3;
          *(int *)(uVar12 + 0x10) = iVar4;
        }
        if ((int)uVar2 < 1) {
          return uVar13;
        }
        uVar14 = *(undefined8 *)*(undefined1 (*) [16])(puVar8 + -0x20);
        uVar15 = *(undefined8 *)(puVar8 + -0x18);
        auVar30 = *(undefined1 (*) [16])(puVar8 + -0x20);
        uVar13 = *(ulong *)(puVar8 + -0x30);
        uVar17 = *(ulong *)(puVar8 + -0x28);
        *(undefined8 *)(puVar8 + -0x10) = *(undefined8 *)(puVar8 + -0x10);
        *(undefined8 *)(puVar8 + -8) = *(undefined8 *)(puVar8 + -8);
        lVar19 = *(long *)(uVar12 + 0x18);
        auVar5._8_8_ = lVar19;
        auVar5._0_8_ = uVar20;
        uVar2 = *(int *)(uVar12 + 0x10) - uVar2;
        uVar22 = (ulong)uVar2;
        auVar28._8_4_ = uVar2;
        auVar28._0_8_ = lVar19;
        auVar28._12_4_ = 0;
        *(uint *)(uVar12 + 0x10) = uVar2;
        if (lVar19 != 0) {
          *(ulong *)(puVar8 + -0x30) = uVar13;
          *(ulong *)(puVar8 + -0x28) = uVar17;
          *(undefined8 *)(puVar8 + -0x20) = uVar14;
          *(undefined8 *)(puVar8 + -0x18) = uVar15;
          *(undefined8 *)(puVar8 + -0x10) = *(undefined8 *)(puVar8 + -0x10);
          *(undefined8 *)(puVar8 + -8) = *(undefined8 *)(puVar8 + -8);
          puVar23 = puVar8 + -0x10;
          puVar26 = &UNK_016cc908;
          uVar13 = 0;
          goto code_r0x016cc7a4;
        }
        lVar19 = func_0x00f78af4();
        puVar23 = puVar8 + -0x20;
        *(undefined1 **)(puVar8 + -0x20) = puVar8 + -0x10;
        *(undefined **)(puVar8 + -0x18) = &FlatBuffers_FlatBufferBuilder__GrowBuffer;
        if ((*(long *)(lVar19 + 0x18) != 0) &&
           (plVar11 = *(long **)(*(long *)(lVar19 + 0x18) + 0x10), plVar11 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016cdaa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar13 = (**(code **)(*plVar11 + 0x178))
                             (plVar11,(int)plVar11[3] << 1,*(undefined8 *)(*plVar11 + 0x180));
          return uVar13;
        }
        puVar26 = &FlatBuffers_FlatBufferBuilder__Prep;
        auVar29 = func_0x00f78af4();
        puVar8 = puVar8 + -0x20;
      }
code_r0x016cdb68:
      auVar5._8_8_ = uVar20;
      auVar5._0_8_ = uVar17;
      auVar27 = func_0x00f78af4();
      uVar13 = auVar27._8_8_;
      lVar21 = auVar27._0_8_;
      *(undefined1 **)(puVar8 + -0x40) = puVar8 + -0x10;
      *(undefined **)(puVar8 + -0x38) = &FlatBuffers_FlatBufferBuilder__PutBool;
      lVar19 = *(long *)(lVar21 + 0x18);
      iVar16 = *(int *)(lVar21 + 0x10) + -1;
      *(int *)(lVar21 + 0x10) = iVar16;
      if (lVar19 != 0) {
        puVar9 = puVar8 + -0x30;
        uVar14 = *(undefined8 *)(puVar8 + -0x40);
        uVar15 = *(undefined8 *)(puVar8 + -0x38);
FlatBuffers_ByteBuffer__PutByte:
        auVar5._8_4_ = iVar16;
        auVar5._0_8_ = lVar19;
        auVar5._12_4_ = 0;
        auVar28._8_4_ = iVar16;
        auVar28._0_8_ = lVar19;
        auVar28._12_4_ = 0;
        puVar6 = puVar9 + -0x30;
        *(ulong *)(puVar9 + -0x30) = uVar22;
        *(ulong *)(puVar9 + -0x28) = uVar17;
        *(ulong *)(puVar9 + -0x20) = uVar20;
        *(ulong *)(puVar9 + -0x18) = uVar12;
        *(undefined8 *)(puVar9 + -0x10) = uVar14;
        *(undefined8 *)(puVar9 + -8) = uVar15;
        puVar23 = puVar9 + -0x10;
        uVar20 = 1;
        puVar26 = &UNK_016cc89c;
        goto code_r0x016cc7a4;
      }
      auVar27 = func_0x00f78af4();
      uVar18 = auVar27._8_8_;
      lVar19 = auVar27._0_8_;
      *(undefined1 **)(puVar8 + -0x50) = puVar8 + -0x40;
      *(undefined **)(puVar8 + -0x48) = &FlatBuffers_FlatBufferBuilder__PutSbyte;
      iVar16 = *(int *)(lVar19 + 0x10) + -1;
      auVar28._8_4_ = iVar16;
      auVar28._0_8_ = *(long *)(lVar19 + 0x18);
      auVar28._12_4_ = 0;
      *(int *)(lVar19 + 0x10) = iVar16;
      if (*(long *)(lVar19 + 0x18) != 0) {
        puVar10 = puVar8 + -0x40;
        puVar23 = *(undefined1 **)(puVar8 + -0x50);
        puVar26 = *(undefined **)(puVar8 + -0x48);
        uVar13 = uVar12;
        goto code_r0x016cc810;
      }
      auVar27 = func_0x00f78af4();
      uVar13 = auVar27._8_8_;
      lVar21 = auVar27._0_8_;
      *(undefined1 **)(puVar8 + -0x60) = puVar8 + -0x50;
      *(undefined **)(puVar8 + -0x58) = &FlatBuffers_FlatBufferBuilder__PutByte;
      lVar19 = *(long *)(lVar21 + 0x18);
      iVar16 = *(int *)(lVar21 + 0x10) + -1;
      *(int *)(lVar21 + 0x10) = iVar16;
      if (lVar19 != 0) {
        puVar9 = puVar8 + -0x50;
        uVar14 = *(undefined8 *)(puVar8 + -0x60);
        uVar15 = *(undefined8 *)(puVar8 + -0x58);
        goto FlatBuffers_ByteBuffer__PutByte;
      }
      auVar27 = func_0x00f78af4();
      uVar13 = auVar27._8_8_;
      lVar19 = auVar27._0_8_;
      puVar6 = puVar8 + -0x90;
      *(ulong *)(puVar8 + -0x90) = uVar22;
      *(ulong *)(puVar8 + -0x88) = uVar17;
      *(ulong *)(puVar8 + -0x80) = uVar20;
      *(ulong *)(puVar8 + -0x78) = uVar12;
      *(undefined1 **)(puVar8 + -0x70) = puVar8 + -0x60;
      *(undefined **)(puVar8 + -0x68) = &FlatBuffers_FlatBufferBuilder__PutShort;
      puVar23 = puVar8 + -0x70;
      lVar21 = *(long *)(lVar19 + 0x18);
      uVar1 = *(int *)(lVar19 + 0x10) - 2;
      auVar5._8_8_ = lVar21;
      auVar5._0_8_ = CONCAT44(0,uVar1);
      auVar28._8_4_ = uVar1;
      auVar28._0_8_ = lVar21;
      auVar28._12_4_ = 0;
      *(uint *)(lVar19 + 0x10) = uVar1;
      if (lVar21 != 0) {
        uVar20 = 2;
        puVar26 = &UNK_016cdc34;
        goto code_r0x016cc7a4;
      }
      auVar27 = func_0x00f78af4();
      uVar13 = auVar27._8_8_;
      lVar19 = auVar27._0_8_;
      puVar6 = puVar8 + -0xc0;
      *(ulong *)(puVar8 + -0xc0) = uVar22;
      *(ulong *)(puVar8 + -0xb8) = CONCAT44(0,uVar1);
      *(undefined8 *)(puVar8 + -0xb0) = 0;
      *(ulong *)(puVar8 + -0xa8) = uVar12;
      *(undefined1 **)(puVar8 + -0xa0) = puVar23;
      *(undefined **)(puVar8 + -0x98) = &FlatBuffers_FlatBufferBuilder__PutUshort;
      puVar23 = puVar8 + -0xa0;
      lVar21 = *(long *)(lVar19 + 0x18);
      uVar1 = *(int *)(lVar19 + 0x10) - 2;
      auVar5._8_8_ = lVar21;
      auVar5._0_8_ = CONCAT44(0,uVar1);
      auVar28._8_4_ = uVar1;
      auVar28._0_8_ = lVar21;
      auVar28._12_4_ = 0;
      *(uint *)(lVar19 + 0x10) = uVar1;
      if (lVar21 != 0) {
        uVar20 = 2;
        puVar26 = &UNK_016cdc90;
        goto code_r0x016cc7a4;
      }
      auVar27 = func_0x00f78af4();
      uVar13 = auVar27._8_8_;
      lVar19 = auVar27._0_8_;
      puVar6 = puVar8 + -0xf0;
      *(ulong *)(puVar8 + -0xf0) = uVar22;
      *(ulong *)(puVar8 + -0xe8) = CONCAT44(0,uVar1);
      *(undefined8 *)(puVar8 + -0xe0) = 0;
      *(ulong *)(puVar8 + -0xd8) = uVar12;
      *(undefined1 **)(puVar8 + -0xd0) = puVar23;
      *(undefined **)(puVar8 + -200) = &FlatBuffers_FlatBufferBuilder__PutInt;
      puVar23 = puVar8 + -0xd0;
      lVar21 = *(long *)(lVar19 + 0x18);
      uVar1 = *(int *)(lVar19 + 0x10) - 4;
      auVar5._8_8_ = lVar21;
      auVar5._0_8_ = CONCAT44(0,uVar1);
      auVar28._8_4_ = uVar1;
      auVar28._0_8_ = lVar21;
      auVar28._12_4_ = 0;
      *(uint *)(lVar19 + 0x10) = uVar1;
      if (lVar21 != 0) {
        uVar20 = 4;
        puVar26 = &UNK_016cdcec;
        goto code_r0x016cc7a4;
      }
      auVar27 = func_0x00f78af4();
      uVar13 = auVar27._8_8_;
      lVar19 = auVar27._0_8_;
      puVar6 = puVar8 + -0x120;
      *(ulong *)(puVar8 + -0x120) = uVar22;
      *(ulong *)(puVar8 + -0x118) = CONCAT44(0,uVar1);
      *(undefined8 *)(puVar8 + -0x110) = 0;
      *(ulong *)(puVar8 + -0x108) = uVar12;
      *(undefined1 **)(puVar8 + -0x100) = puVar23;
      *(undefined **)(puVar8 + -0xf8) = &FlatBuffers_FlatBufferBuilder__PutUint;
      puVar23 = puVar8 + -0x100;
      lVar21 = *(long *)(lVar19 + 0x18);
      uVar1 = *(int *)(lVar19 + 0x10) - 4;
      auVar5._8_8_ = lVar21;
      auVar5._0_8_ = CONCAT44(0,uVar1);
      auVar28._8_4_ = uVar1;
      auVar28._0_8_ = lVar21;
      auVar28._12_4_ = 0;
      *(uint *)(lVar19 + 0x10) = uVar1;
      if (lVar21 != 0) {
        uVar20 = 4;
        puVar26 = &UNK_016cdd48;
        goto code_r0x016cc7a4;
      }
      auVar27 = func_0x00f78af4();
      uVar13 = auVar27._8_8_;
      lVar19 = auVar27._0_8_;
      puVar6 = puVar8 + -0x150;
      *(ulong *)(puVar8 + -0x150) = uVar22;
      *(ulong *)(puVar8 + -0x148) = CONCAT44(0,uVar1);
      *(undefined8 *)(puVar8 + -0x140) = 0;
      *(ulong *)(puVar8 + -0x138) = uVar12;
      *(undefined1 **)(puVar8 + -0x130) = puVar23;
      *(undefined **)(puVar8 + -0x128) = &FlatBuffers_FlatBufferBuilder__PutLong;
      puVar23 = puVar8 + -0x130;
      lVar21 = *(long *)(lVar19 + 0x18);
      uVar1 = *(int *)(lVar19 + 0x10) - 8;
      auVar5._8_8_ = lVar21;
      auVar5._0_8_ = CONCAT44(0,uVar1);
      auVar28._8_4_ = uVar1;
      auVar28._0_8_ = lVar21;
      auVar28._12_4_ = 0;
      *(uint *)(lVar19 + 0x10) = uVar1;
      if (lVar21 != 0) {
        uVar20 = 8;
        puVar26 = &UNK_016cdda4;
        goto code_r0x016cc7a4;
      }
      auVar27 = func_0x00f78af4();
      uVar13 = auVar27._8_8_;
      lVar19 = auVar27._0_8_;
      puVar6 = puVar8 + -0x180;
      *(ulong *)(puVar8 + -0x180) = uVar22;
      *(ulong *)(puVar8 + -0x178) = CONCAT44(0,uVar1);
      *(undefined8 *)(puVar8 + -0x170) = 0;
      *(ulong *)(puVar8 + -0x168) = uVar12;
      *(undefined1 **)(puVar8 + -0x160) = puVar23;
      *(undefined **)(puVar8 + -0x158) = &FlatBuffers_FlatBufferBuilder__PutUlong;
      puVar23 = puVar8 + -0x160;
      lVar21 = *(long *)(lVar19 + 0x18);
      uVar1 = *(int *)(lVar19 + 0x10) - 8;
      uVar17 = CONCAT44(0,uVar1);
      auVar5._8_8_ = lVar21;
      auVar5._0_8_ = uVar17;
      auVar28._8_4_ = uVar1;
      auVar28._0_8_ = lVar21;
      auVar28._12_4_ = 0;
      *(uint *)(lVar19 + 0x10) = uVar1;
      if (lVar21 != 0) {
        uVar20 = 8;
        puVar26 = &UNK_016cde00;
        goto code_r0x016cc7a4;
      }
      lVar19 = func_0x00f78af4();
      *(undefined1 **)(puVar8 + -400) = puVar23;
      *(undefined **)(puVar8 + -0x188) = &FlatBuffers_FlatBufferBuilder__PutFloat;
      lVar21 = *(long *)(lVar19 + 0x18);
      auVar5._8_8_ = lVar21;
      uVar1 = *(int *)(lVar19 + 0x10) - 4;
      uVar13 = (ulong)uVar1;
      auVar28._8_4_ = uVar1;
      auVar28._0_8_ = lVar21;
      auVar28._12_4_ = 0;
      *(uint *)(lVar19 + 0x10) = uVar1;
      if (lVar21 != 0) {
        puVar6 = puVar8 + -0x1b0;
        *(undefined8 *)(puVar8 + -0x1b0) = unaff_d9;
        *(undefined8 *)(puVar8 + -0x1a8) = unaff_d8;
        *(undefined8 *)(puVar8 + -0x1a0) = 0;
        *(ulong *)(puVar8 + -0x198) = uVar12;
        *(undefined8 *)(puVar8 + -400) = *(undefined8 *)(puVar8 + -400);
        *(undefined8 *)(puVar8 + -0x188) = *(undefined8 *)(puVar8 + -0x188);
        puVar23 = puVar8 + -400;
        uVar20 = 4;
        puVar26 = &UNK_016ccba4;
        goto code_r0x016cc7a4;
      }
      lVar19 = func_0x00f78af4();
      *(undefined1 **)(puVar8 + -0x1a0) = puVar8 + -400;
      *(undefined **)(puVar8 + -0x198) = &FlatBuffers_FlatBufferBuilder__PutDouble;
      lVar21 = *(long *)(lVar19 + 0x18);
      auVar5._8_8_ = lVar21;
      uVar1 = *(int *)(lVar19 + 0x10) - 8;
      uVar13 = (ulong)uVar1;
      auVar28._8_4_ = uVar1;
      auVar28._0_8_ = lVar21;
      auVar28._12_4_ = 0;
      *(uint *)(lVar19 + 0x10) = uVar1;
      if (lVar21 != 0) goto code_r0x016cde70;
      auVar30 = func_0x00f78af4();
      *(undefined8 *)(puVar8 + -0x1c0) = 0;
      *(ulong *)(puVar8 + -0x1b8) = uVar12;
      *(undefined1 **)(puVar8 + -0x1b0) = puVar8 + -0x1a0;
      *(undefined **)(puVar8 + -0x1a8) = &FlatBuffers_FlatBufferBuilder__AddBool;
      puVar23 = puVar8 + -0x1b0;
      auVar29._8_8_ = 1;
      auVar29._0_8_ = auVar30._0_8_;
      uVar18 = 0;
      puVar26 = &UNK_016cde9c;
      puVar8 = puVar8 + -0x1c0;
      uVar13 = uVar22;
    } while( true );
  }
  ppppuVar7 = (undefined8 ****)&stack0xffffffffffffffd0;
  puVar8 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5cd7 & 1) == 0) {
    func_0x00f78a20(0x3d1f100,3,0);
    bRam0000000003eb5cd7 = 1;
  }
  /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(param_1);
  if (*(long *)(param_1 + 0x28) == 0) {
    auVar31 = func_0x00f78af4();
    puVar26 = auVar31._0_8_;
    ppppuVar7 = &pppuStack_50;
    pppuStack_50 = (undefined8 ***)((long)&MACH_HEADER.magic + 3);
    puVar8 = &stack0xffffffffffffffc0;
    puStack_48 = param_1;
    if (*(int *)(puVar26 + 0x30) <= auVar31._8_4_) {
      func_0x00f78a24(0x3d22738);
      uVar14 = func_0x00f78aec();
      uVar15 = func_0x00f78a24(0x3d6ceb8);
      uVar17 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar14,uVar15);
      uVar15 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar14,uVar15);
      func_0x00f78af4();
      uVar14 = func_0x00f78b24();
      auVar30 = func_0x00f78ac0(uVar14,0);
      uVar13 = auVar30._0_8_;
      puVar23 = &stack0xffffffffffffffa0;
      if (((int)uVar17 == param_4) && (*(char *)(uVar13 + 0x48) == '\0')) {
        return uVar13;
      }
      auVar29._8_8_ = 1;
      auVar29._0_8_ = uVar13;
      uVar18 = 0;
      puVar26 = &UNK_016ce46c;
      puVar8 = &stack0xffffffffffffff80;
      uVar13 = unaff_x22;
      goto code_r0x016cdaac;
    }
    puVar25 = &UNK_016ce3a4;
  }
  else {
    if (*(int *)(*(long *)(param_1 + 0x28) + 0x18) < 3) {
      uVar14 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,3);
      *(undefined8 *)(param_1 + 0x28) = uVar14;
    }
    *(undefined4 *)(param_1 + 0x30) = 3;
    puVar25 = &UNK_016ce320;
    puVar26 = param_1;
  }
  *(undefined1 **)((long)ppppuVar7 + -0x10) = puVar8;
  *(undefined **)((long)ppppuVar7 + -8) = puVar25;
  if ((*(long *)(puVar26 + 0x18) != 0) &&
     (lVar19 = *(long *)(*(long *)(puVar26 + 0x18) + 0x10), lVar19 != 0)) {
    return (ulong)(uint)(*(int *)(lVar19 + 0x18) - *(int *)(puVar26 + 0x10));
  }
  lVar19 = func_0x00f78af4();
  return (ulong)*(byte *)(lVar19 + 0x48);
code_r0x016cde70:
  puVar6 = puVar8 + -0x1c0;
  *(undefined8 *)(puVar8 + -0x1c0) = unaff_d9;
  *(undefined8 *)(puVar8 + -0x1b8) = unaff_d8;
  *(undefined8 *)(puVar8 + -0x1b0) = 0;
  *(ulong *)(puVar8 + -0x1a8) = uVar12;
  *(undefined8 *)(puVar8 + -0x1a0) = *(undefined8 *)(puVar8 + -0x1a0);
  *(undefined8 *)(puVar8 + -0x198) = *(undefined8 *)(puVar8 + -0x198);
  puVar23 = puVar8 + -0x1a0;
  uVar20 = 8;
  puVar26 = &UNK_016ccc34;
code_r0x016cc7a4:
  do {
    puVar10 = puVar6 + -0x20;
    *(long *)(puVar6 + -0x20) = auVar5._8_8_;
    *(ulong *)(puVar6 + -0x18) = uVar13;
    *(undefined1 **)(puVar6 + -0x10) = puVar23;
    *(undefined **)(puVar6 + -8) = puVar26;
    puVar23 = puVar6 + -0x10;
    if (auVar28._8_4_ < 0) {
code_r0x016cc7d8:
      func_0x00f78a24(0x3d1fcf8);
      uVar13 = func_0x00f78aec();
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a4d0(uVar13,0);
      uVar14 = func_0x00f78a24(0x3d52ce8);
      func_0x00f78ac0(uVar13,uVar14);
      uVar18 = uVar20;
    }
    else {
      lVar19 = *(long *)(auVar28._0_8_ + 0x10);
      uVar18 = uVar20;
      if (lVar19 != 0) {
        if (auVar28._8_4_ <= *(int *)(lVar19 + 0x18) - (int)uVar20) {
          return auVar28._0_8_;
        }
        goto code_r0x016cc7d8;
      }
    }
    puVar26 = &FlatBuffers_ByteBuffer__PutSbyte;
    auVar28 = func_0x00f78af4();
code_r0x016cc810:
    puVar6 = puVar10 + -0x30;
    *(ulong *)(puVar10 + -0x30) = uVar22;
    *(undefined1 (*) [16])(puVar10 + -0x28) = auVar5;
    *(ulong *)(puVar10 + -0x18) = uVar13;
    *(undefined1 **)(puVar10 + -0x10) = puVar23;
    *(undefined **)(puVar10 + -8) = puVar26;
    puVar23 = puVar10 + -0x10;
    uVar20 = 1;
    puVar26 = &UNK_016cc834;
    uVar13 = uVar18;
    auVar5 = auVar28;
  } while( true );
}



// ============================================================
// RVA: 0x1656b5c | Core.Networking.HostStanding.CreateStandingsVector
// ============================================================

/* WARNING: Possible PIC construction at 0x01656b90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01656c54: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x01656c58) */
/* WARNING: Removing unreachable block (ram,0x016ce224) */
/* WARNING: Removing unreachable block (ram,0x016cda04) */
/* WARNING: Removing unreachable block (ram,0x016cda14) */
/* WARNING: Removing unreachable block (ram,0x016cda30) */
/* WARNING: Removing unreachable block (ram,0x016cda1c) */
/* WARNING: Removing unreachable block (ram,0x01656b94) */
/* WARNING: Removing unreachable block (ram,0x01656ba0) */
/* WARNING: Removing unreachable block (ram,0x01656ba8) */
/* WARNING: Removing unreachable block (ram,0x01656bc4) */
/* WARNING: Removing unreachable block (ram,0x01656bd0) */
/* WARNING: Removing unreachable block (ram,0x01656bdc) */
/* WARNING: Removing unreachable block (ram,0x016ce20c) */
/* WARNING: Removing unreachable block (ram,0x016cde9c) */

ulong Core_Networking_HostStanding__CreateStandingsVector(long param_1,long param_2)

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
    puStack_38 = &Core_Networking_HostStanding__CreateStandingsVectorBlock;
    ppppuVar22 = &pppuStack_40;
    unaff_x21 = 0x3eb5000;
    pppuStack_40 = (undefined8 ***)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb5807 & 1) == 0) {
      func_0x00f78a20(0x3d569a8);
      bRam0000000003eb5807 = 1;
    }
    if ((lVar15 == 0) || (param_1 == 0)) {
      puVar23 = &Core_Networking_HostStanding__StartStandingsVector;
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
      puVar23 = &UNK_01656c58;
      puVar7 = &stack0xffffffffffffffa0;
    }
  }
  else {
    iVar14 = *(int *)(param_2 + 0x18);
    puVar23 = (undefined *)0x1656b94;
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
// RVA: 0x1656bf8 | Core.Networking.HostStanding.CreateStandingsVectorBlock
// ============================================================

/* WARNING: Possible PIC construction at 0x01656c54: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x01656c58) */
/* WARNING: Removing unreachable block (ram,0x016ce20c) */
/* WARNING: Removing unreachable block (ram,0x016cde9c) */

ulong Core_Networking_HostStanding__CreateStandingsVectorBlock(ulong param_1,long param_2)

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
  
  if ((bRam0000000003eb5807 & 1) == 0) {
    func_0x00f78a20(0x3d569a8);
    bRam0000000003eb5807 = 1;
  }
  puStack_40 = &stack0xfffffffffffffff0;
  if ((param_2 == 0) || (param_1 == 0)) {
    puVar23 = &Core_Networking_HostStanding__StartStandingsVector;
    auVar28 = func_0x00f78af4();
    iVar14 = auVar28._8_4_;
    param_1 = auVar28._0_8_;
    if (param_1 == 0) {
      puStack_38 = &Core_Networking_HostStanding__StartStandingsVector;
      lVar15 = func_0x00f78af4();
      return *(ulong *)(lVar15 + 8);
    }
  }
  else {
    iVar14 = *(int *)(param_2 + 0x18);
    puVar23 = (undefined *)0x1656c58;
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
// RVA: 0x1656c84 | Core.Networking.HostStanding.StartStandingsVector
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

ulong Core_Networking_HostStanding__StartStandingsVector(ulong param_1,int param_2)

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



