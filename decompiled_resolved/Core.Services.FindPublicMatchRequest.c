// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Services.FindPublicMatchRequest

// ============================================================
// RVA: 0x166b194 | Core.Services.FindPublicMatchRequest.get_ByteBuffer
// ============================================================

undefined8 Core_Services_FindPublicMatchRequest__get_ByteBuffer(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// ============================================================
// RVA: 0x166b19c | Core.Services.FindPublicMatchRequest.GetRootAsFindPublicMatchRequest
// ============================================================

undefined1  [16] Core_Services_FindPublicMatchRequest__GetRootAsFindPublicMatchRequest(long param_1)

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
// RVA: 0x166b1a8 | Core.Services.FindPublicMatchRequest.GetRootAsFindPublicMatchRequest
// ============================================================

undefined1  [16]
Core_Services_FindPublicMatchRequest__GetRootAsFindPublicMatchRequest
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
// RVA: 0x166b1ec | Core.Services.FindPublicMatchRequest.__assign
// ============================================================

undefined1  [16]
Core_Services_FindPublicMatchRequest____assign
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
// RVA: 0x166b200 | Core.Services.FindPublicMatchRequest.__init
// ============================================================

void Core_Services_FindPublicMatchRequest____init
               (undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  return;
}



// ============================================================
// RVA: 0x166b20c | Core.Services.FindPublicMatchRequest.Properties
// ============================================================

void Core_Services_FindPublicMatchRequest__Properties(undefined8 *param_1,long param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb58bd & 1) == 0) {
    func_0x00f78a20(0x3d3eb40);
    bRam0000000003eb58bd = 1;
  }
  uVar2 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_2,4,0);
  if ((int)uVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    uStack_40 = 0;
    uStack_38 = 0;
    iVar1 = /*FlatBuffers.Table$$__vector*/ func_0x016cf330(param_2,uVar2,0);
    uVar2 = /*FlatBuffers.Table$$__indirect*/ func_0x016cf210(param_2,iVar1 + param_3 * 4,0);
    auVar3 = /*Core.Services.MatchmakingProperty$$__assign*/ func_0x0167dfa8(&uStack_40,uVar2,*(undefined8 *)(param_2 + 8),0);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    /*System.Nullable<MatchmakingProperty>$$.ctor*/ func_0x0265c764(param_1,auVar3._0_8_,auVar3._8_8_,uRam0000000003d3eb40);
  }
  return;
}



// ============================================================
// RVA: 0x166b2e4 | Core.Services.FindPublicMatchRequest.get_PropertiesLength
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

ulong Core_Services_FindPublicMatchRequest__get_PropertiesLength(int *param_1)

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
// RVA: 0x166b328 | Core.Services.FindPublicMatchRequest.get_MatchStartTimeout
// ============================================================

/* WARNING: Possible PIC construction at 0x016cc688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc904: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0166b3a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0166b3c0: Changing call to branch */
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
/* WARNING: Possible PIC construction at 0x0166b4c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0166b584: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce184: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdc30: Changing call to branch */
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
/* WARNING: Possible PIC construction at 0x016ce778: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x016cdc34) */
/* WARNING: Removing unreachable block (ram,0x016ce188) */
/* WARNING: Removing unreachable block (ram,0x0166b588) */
/* WARNING: Removing unreachable block (ram,0x016ce224) */
/* WARNING: Removing unreachable block (ram,0x0166b4c4) */
/* WARNING: Removing unreachable block (ram,0x0166b4d0) */
/* WARNING: Removing unreachable block (ram,0x0166b4d8) */
/* WARNING: Removing unreachable block (ram,0x0166b4f4) */
/* WARNING: Removing unreachable block (ram,0x0166b500) */
/* WARNING: Removing unreachable block (ram,0x0166b50c) */
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
/* WARNING: Removing unreachable block (ram,0x0166b3c4) */
/* WARNING: Removing unreachable block (ram,0x0166b3ac) */
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
/* WARNING: Removing unreachable block (ram,0x016ce77c) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

dword * Core_Services_FindPublicMatchRequest__get_MatchStartTimeout
                  (int *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  dword dVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 ***pppuVar15;
  int iVar16;
  dword *pdVar17;
  undefined8 uVar18;
  long *plVar19;
  dword *pdVar20;
  int *piVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  dword *pdVar24;
  dword *pdVar25;
  long lVar26;
  undefined8 unaff_x19;
  long unaff_x20;
  dword *pdVar27;
  long lVar28;
  dword *unaff_x21;
  ulong unaff_x22;
  ulong uVar29;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 ***unaff_x29;
  undefined1 *puVar30;
  undefined8 ****ppppuVar31;
  undefined1 **ppuVar32;
  undefined1 ***pppuVar33;
  undefined *unaff_x30;
  undefined *puVar34;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [12];
  long alStack_120 [4];
  undefined8 ***pppuStack_e0;
  undefined *puStack_d8;
  undefined *puStack_68;
  undefined1 **ppuStack_60;
  undefined *puStack_58;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  pdVar24 = (dword *)0x0;
  iVar16 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,6);
  if (iVar16 == 0) {
    return (dword *)0x0;
  }
  lVar26 = *(long *)(param_1 + 2);
  if (lVar26 != 0) {
    pdVar24 = (dword *)(ulong)(uint)(*param_1 + iVar16);
    pdVar27 = &MACH_HEADER.cpusubtype;
    puVar11 = (undefined1 *)register0x00000008;
code_r0x016cc634:
    auVar8._8_8_ = pdVar27;
    auVar8._0_8_ = lVar26;
    auVar37._8_8_ = pdVar24;
    auVar37._0_8_ = lVar26;
    puVar9 = puVar11 + -0x40;
    *(undefined8 *)(puVar11 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar11 + -0x38) = unaff_x23;
    *(ulong *)(puVar11 + -0x30) = unaff_x22;
    *(dword **)(puVar11 + -0x28) = unaff_x21;
    *(long *)(puVar11 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar11 + -0x18) = unaff_x19;
    *(undefined1 ****)(puVar11 + -0x10) = unaff_x29;
    *(undefined **)(puVar11 + -8) = unaff_x30;
    puVar30 = puVar11 + -0x10;
    uVar29 = 0x3d201a0;
    if ((bRam0000000003eb5cd0 & 1) == 0) {
      func_0x00f78a20(0x3d201a0);
      bRam0000000003eb5cd0 = 1;
    }
    puVar34 = &UNK_016cc68c;
code_r0x016cc7a4:
    do {
      puVar13 = puVar9 + -0x20;
      *(long *)(puVar9 + -0x20) = auVar8._8_8_;
      *(dword **)(puVar9 + -0x18) = pdVar24;
      *(undefined1 **)(puVar9 + -0x10) = puVar30;
      *(undefined **)(puVar9 + -8) = puVar34;
      puVar30 = puVar9 + -0x10;
      if (auVar37._8_4_ < 0) {
code_r0x016cc7d8:
        func_0x00f78a24(0x3d1fcf8);
        pdVar17 = (dword *)func_0x00f78aec();
        /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a4d0(pdVar17,0);
        uVar18 = func_0x00f78a24(0x3d52ce8);
        func_0x00f78ac0(pdVar17,uVar18);
        pdVar20 = pdVar27;
      }
      else {
        lVar26 = *(long *)(auVar37._0_8_ + 4);
        pdVar20 = pdVar27;
        pdVar17 = pdVar24;
        if (lVar26 != 0) {
          if (auVar37._8_4_ <= *(int *)(lVar26 + 0x18) - (int)pdVar27) {
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
      *(dword **)(puVar13 + -0x18) = pdVar17;
      *(undefined1 **)(puVar13 + -0x10) = puVar30;
      *(undefined **)(puVar13 + -8) = puVar34;
      puVar30 = puVar13 + -0x10;
      pdVar27 = (dword *)((long)&MACH_HEADER.magic + 1);
      puVar34 = &UNK_016cc834;
      pdVar24 = pdVar20;
      auVar8 = auVar37;
    } while( true );
  }
  auVar35 = func_0x00f78af4();
  lVar26 = auVar35._0_8_;
  puVar14 = &stack0xffffffffffffffb0;
  puStack_28 = &Core_Services_FindPublicMatchRequest__CreateFindPublicMatchRequest;
  ppuVar32 = &puStack_30;
  puStack_30 = &stack0xfffffffffffffff0;
  if (lVar26 == 0) {
    auVar35 = func_0x00f78af4();
    pdVar25 = auVar35._8_8_;
    pdVar24 = auVar35._0_8_;
    ppuStack_60 = ppuVar32;
    if (pdVar24 != (dword *)0x0) {
      puVar11 = &stack0xffffffffffffff80;
      puStack_58 = &Core_Services_FindPublicMatchRequest__AddMatchStartTimeout;
      unaff_x29 = &ppuStack_60;
      auVar39._8_8_ = (undefined1 *)((long)&MACH_HEADER.magic + 1);
      auVar39._0_8_ = pdVar24;
      if ((pdVar25 == (dword *)0x0) && (*(char *)(pdVar24 + 0x12) == '\0')) {
        return pdVar24;
      }
      auVar38._8_8_ = 8;
      auVar38._0_8_ = pdVar24;
      pdVar24 = (dword *)0x0;
      puVar34 = &UNK_016ce77c;
      goto code_r0x016cdaac;
    }
    pppuVar33 = &ppuStack_60;
    puStack_58 = &Core_Services_FindPublicMatchRequest__AddMatchStartTimeout;
    auVar35 = func_0x00f78af4();
    pdVar24 = auVar35._0_8_;
    if (pdVar24 == (dword *)0x0) {
      lVar26 = func_0x00f78af4();
      puVar14 = &stack0xffffffffffffff70;
      ppuVar32 = (undefined1 **)&stack0xffffffffffffff80;
      if ((bRam0000000003eb58bf & 1) == 0) {
        func_0x00f78a20(0x3d3f088);
        bRam0000000003eb58bf = 1;
      }
      if (lVar26 != 0) {
        unaff_x29 = (undefined1 ***)&stack0xffffffffffffff80;
        auVar39._8_8_ = lVar26;
        auVar39._0_8_ = 0x3eb5000;
        if ((bRam0000000003eb5cd8 & 1) == 0) {
          func_0x00f78a20(0x3d1f100,0);
          bRam0000000003eb5cd8 = 1;
        }
        pdVar25 = unaff_x21;
        if (-1 < *(int *)(lVar26 + 0x30)) {
          auVar38._8_8_ = 4;
          auVar38._0_8_ = lVar26;
          pdVar24 = (dword *)0x0;
          puVar34 = &UNK_016cea78;
          puVar11 = &stack0xffffffffffffff40;
          goto code_r0x016cdaac;
        }
        func_0x00f78a24(0x3d22a38);
        puVar34 = (undefined *)func_0x00f78aec();
        uVar18 = func_0x00f78a24(0x3d6cea8);
        unaff_x19 = 0;
        /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(puVar34,uVar18);
        uVar18 = func_0x00f78a24(0x3d56a30);
        auVar40 = func_0x00f78ac0(puVar34,uVar18);
        unaff_x20 = auVar40._0_8_;
        puVar11 = &stack0xffffffffffffff00;
        pppuStack_e0 = (undefined8 ****)0x3eb5000;
        unaff_x29 = (undefined1 ***)&stack0xffffffffffffff30;
        lVar26 = *(long *)(unaff_x20 + 0x18);
        puStack_d8 = puVar34;
        if ((lVar26 == 0) || (*(long *)(lVar26 + 0x10) == 0)) {
          func_0x00f78af4();
          uVar18 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&stack0xffffffffffffff0c,0);
          uVar22 = func_0x00f78a24(0x3d6ce88);
          uVar23 = func_0x00f78a24(0x3d66338);
          lVar26 = /*System.String$$Concat*/ func_0x029be39c(uVar22,uVar18,uVar23,0);
          func_0x00f78a24(0x3d22a38);
          uVar18 = func_0x00f78aec();
          uVar23 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar18,lVar26);
          uVar22 = func_0x00f78a24(0x3d56a50);
          puVar34 = &FlatBuffers_FlatBufferBuilder__Finish;
          auVar35 = func_0x00f78ac0(uVar18,uVar22);
          puVar11 = &stack0xffffffffffffff00;
          while( true ) {
            uVar22 = auVar35._8_8_;
            lVar28 = auVar35._0_8_;
            auVar39._8_8_ = lVar28;
            auVar39._0_8_ = uVar22;
            auVar7._8_8_ = lVar28;
            auVar7._0_8_ = uVar22;
            *(undefined8 *)(puVar11 + -0x20) = uVar18;
            *(long *)(puVar11 + -0x18) = lVar26;
            *(undefined1 ****)(puVar11 + -0x10) = unaff_x29;
            *(undefined **)(puVar11 + -8) = puVar34;
            unaff_x29 = (undefined1 ***)(puVar11 + -0x10);
            uVar5 = *(undefined4 *)(lVar28 + 0x20);
            auVar38._8_4_ = uVar5;
            auVar38._0_8_ = lVar28;
            auVar38._12_4_ = 0;
            lVar26 = lVar28;
            if ((int)uVar23 == 0) {
              lVar26 = 0;
              uVar5 = 0;
            }
            auVar6._8_4_ = uVar5;
            auVar6._0_8_ = lVar26;
            auVar6._12_4_ = 0;
            if ((int)uVar23 == 0) {
              pdVar24 = &MACH_HEADER.cputype;
              puVar34 = &UNK_016cef64;
              puVar11 = puVar11 + -0x20;
              goto code_r0x016cdaac;
            }
            if (lVar26 != 0) break;
            puVar34 = &FlatBuffers_FlatBufferBuilder__Finish;
            auVar35 = func_0x00f78af4();
            uVar23 = 0;
            puVar11 = puVar11 + -0x20;
            lVar26 = lVar28;
            uVar18 = uVar22;
          }
          pdVar24 = &MACH_HEADER.cpusubtype;
          puVar34 = &UNK_016cef10;
          puVar11 = puVar11 + -0x20;
          auVar38 = auVar6;
          auVar39 = auVar7;
          goto code_r0x016cdaac;
        }
        pdVar24 = (dword *)(ulong)(uint)(*(int *)(*(long *)(lVar26 + 0x10) + 0x18) - auVar40._8_4_);
        pdVar27 = &MACH_HEADER.cputype;
        unaff_x30 = &UNK_016cee20;
        unaff_x21 = pdVar24;
        goto code_r0x016cc634;
      }
      puVar34 = &Core_Services_FindPublicMatchRequest__StartFindPublicMatchRequest;
      lVar26 = func_0x00f78af4();
      auVar35._8_8_ = 0x3eb5000;
      auVar35._0_8_ = lVar26;
      if (lVar26 == 0) {
        auVar36 = func_0x00f78af4();
        lVar26 = auVar36._0_8_;
        if ((auVar36._8_8_ == 0) || (lVar26 == 0)) {
          auVar36 = func_0x00f78af4();
          lVar28 = auVar36._8_8_;
          lVar26 = auVar36._0_8_;
          puVar11 = &stack0xffffffffffffff00;
          puStack_d8 = &Core_Services_FindPublicMatchRequest__CreatePropertiesVectorBlock;
          ppppuVar31 = &pppuStack_e0;
          unaff_x21 = (dword *)0x3eb5000;
          pppuStack_e0 = (undefined8 ***)&stack0xffffffffffffff50;
          if ((bRam0000000003eb58be & 1) == 0) {
            func_0x00f78a20(0x3d569c8);
            bRam0000000003eb58be = 1;
          }
          if ((lVar28 == 0) || (lVar26 == 0)) {
            puVar34 = &Core_Services_FindPublicMatchRequest__StartPropertiesVector;
            auVar40 = func_0x00f78af4();
            iVar16 = auVar40._8_4_;
            auVar36._8_8_ = lVar28;
            auVar36._0_8_ = auVar40._0_8_;
            if (auVar40._0_8_ == 0) {
              lVar26 = func_0x00f78af4();
              return *(dword **)(lVar26 + 8);
            }
          }
          else {
            unaff_x21 = (dword *)0x3d56000;
            iVar16 = *(int *)(lVar28 + 0x18);
            puVar34 = &UNK_0166b588;
            puVar11 = &stack0xffffffffffffff00;
          }
        }
        else {
          iVar16 = *(int *)(auVar36._8_8_ + 0x18);
          puVar34 = &UNK_0166b4c4;
          puVar11 = &stack0xffffffffffffff30;
          ppppuVar31 = (undefined8 ****)&stack0xffffffffffffff50;
        }
        uVar29 = auVar36._0_8_;
        *(ulong *)(puVar11 + -0x30) = unaff_x22;
        *(dword **)(puVar11 + -0x28) = unaff_x21;
        *(long *)(puVar11 + -0x20) = auVar36._8_8_;
        *(long *)(puVar11 + -0x18) = lVar26;
        *(undefined8 *****)(puVar11 + -0x10) = ppppuVar31;
        *(undefined **)(puVar11 + -8) = puVar34;
        unaff_x29 = (undefined1 ***)(puVar11 + -0x10);
        pdVar25 = &MACH_HEADER.cputype;
        /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4();
        *(int *)(uVar29 + 0x44) = iVar16;
        pdVar24 = (dword *)CONCAT44(0,iVar16 * 4);
        auVar39._8_8_ = &MACH_HEADER.cputype;
        auVar39._0_8_ = pdVar24;
        auVar38._8_8_ = 4;
        auVar38._0_8_ = uVar29;
        puVar34 = &UNK_016ce188;
        puVar11 = puVar11 + -0x30;
        unaff_x22 = uVar29;
        goto code_r0x016cdaac;
      }
      lVar26 = 0;
      goto code_r0x016ce2a4;
    }
    param_4 = 0;
    puStack_68 = &Core_Services_FindPublicMatchRequest__AddProperties;
    auVar40._8_4_ = 0;
    auVar40._0_8_ = pdVar24;
    if ((auVar35._8_4_ == 0) && (*(char *)(pdVar24 + 0x12) == '\0')) {
      return pdVar24;
    }
    /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(pdVar24,auVar35._8_8_,auVar35._8_8_,0,0);
    pppuVar15 = &ppuStack_60;
  }
  else {
    puVar34 = &UNK_0166b3ac;
    unaff_x21 = pdVar24;
code_r0x016ce2a4:
    piVar21 = auVar35._0_8_;
    puVar10 = puVar14 + -0x30;
    pppuVar15 = (undefined1 ***)(puVar14 + -0x30);
    *(ulong *)(puVar14 + -0x30) = unaff_x22;
    *(dword **)(puVar14 + -0x28) = unaff_x21;
    *(long *)(puVar14 + -0x20) = auVar35._8_8_;
    *(long *)(puVar14 + -0x18) = lVar26;
    *(undefined1 ***)(puVar14 + -0x10) = ppuVar32;
    *(undefined **)(puVar14 + -8) = puVar34;
    pppuVar33 = (undefined1 ***)(puVar14 + -0x10);
    unaff_x20 = 2;
    unaff_x21 = (dword *)0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100,2,0);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(piVar21);
    if (*(long *)(piVar21 + 10) != 0) {
      if (*(int *)(*(long *)(piVar21 + 10) + 0x18) < 2) {
        uVar18 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,2);
        *(undefined8 *)(piVar21 + 10) = uVar18;
      }
      piVar21[0xc] = 2;
      puVar34 = &UNK_016ce320;
      goto code_r0x016cda04;
    }
    puStack_68 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar40 = func_0x00f78af4();
    param_1 = piVar21;
  }
  piVar21 = auVar40._0_8_;
  puVar10 = (undefined1 *)((long)pppuVar15 + -0x20);
  *(long *)((long)pppuVar15 + -0x20) = unaff_x20;
  *(int **)((long)pppuVar15 + -0x18) = param_1;
  *(undefined1 ****)((long)pppuVar15 + -0x10) = pppuVar33;
  *(undefined **)((long)pppuVar15 + -8) = puStack_68;
  pppuVar33 = (undefined1 ***)((long)pppuVar15 + -0x10);
  if (piVar21[0xc] <= auVar40._8_4_) {
    func_0x00f78a24(0x3d22738);
    uVar18 = func_0x00f78aec();
    uVar22 = func_0x00f78a24(0x3d6ceb8);
    pdVar25 = (dword *)0x0;
    /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar18,uVar22);
    uVar22 = func_0x00f78a24(0x3d56a58);
    func_0x00f78ac0(uVar18,uVar22);
    func_0x00f78af4();
    uVar22 = func_0x00f78b24();
    auVar39 = func_0x00f78ac0(uVar22,0);
    pdVar24 = auVar39._0_8_;
    *(ulong *)((long)pppuVar15 + -0x50) = unaff_x22;
    *(dword **)((long)pppuVar15 + -0x48) = unaff_x21;
    *(long *)((long)pppuVar15 + -0x40) = unaff_x20;
    *(undefined8 *)((long)pppuVar15 + -0x38) = uVar18;
    *(undefined1 ****)((long)pppuVar15 + -0x30) = pppuVar33;
    *(undefined **)((long)pppuVar15 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    unaff_x29 = (undefined1 ***)((long)pppuVar15 + -0x30);
    if (((int)pdVar25 == param_4) && (*(char *)(pdVar24 + 0x12) == '\0')) {
      return pdVar24;
    }
    auVar38._8_8_ = 1;
    auVar38._0_8_ = pdVar24;
    pdVar24 = (dword *)0x0;
    puVar34 = &UNK_016ce46c;
    puVar11 = (undefined1 *)((long)pppuVar15 + -0x50);
code_r0x016cdaac:
    do {
      pdVar27 = auVar39._0_8_;
      pdVar17 = auVar38._0_8_;
      puVar9 = puVar11 + -0x30;
      *(ulong *)(puVar11 + -0x30) = unaff_x22;
      *(dword **)(puVar11 + -0x28) = pdVar25;
      *(undefined1 (*) [16])(puVar11 + -0x20) = auVar39;
      *(undefined1 ****)(puVar11 + -0x10) = unaff_x29;
      *(undefined **)(puVar11 + -8) = puVar34;
      iVar16 = auVar38._8_4_;
      if ((int)pdVar17[8] < iVar16) {
        pdVar17[8] = iVar16;
      }
      uVar29 = unaff_x22;
      if ((*(long *)(pdVar17 + 6) != 0) &&
         (lVar26 = *(long *)(*(long *)(pdVar17 + 6) + 0x10), lVar26 != 0)) {
        uVar3 = *(uint *)(lVar26 + 0x18);
        dVar4 = pdVar17[4];
        uVar2 = dVar4 - (uVar3 + (int)pdVar24) & iVar16 - 1U;
        pdVar27 = (dword *)CONCAT44(0,uVar2);
        uVar1 = (int)pdVar24 + iVar16 + uVar2;
        uVar29 = (ulong)uVar1;
        pdVar20 = pdVar17;
        while (pdVar25 = (dword *)(ulong)uVar3, (int)dVar4 < (int)uVar1) {
          pdVar20 = (dword *)/*FlatBuffers.FlatBufferBuilder$$GrowBuffer*/ func_0x016cda78(pdVar17);
          if ((*(long *)(pdVar17 + 6) == 0) ||
             (lVar26 = *(long *)(*(long *)(pdVar17 + 6) + 0x10), lVar26 == 0))
          goto code_r0x016cdb68;
          iVar16 = pdVar17[4] - uVar3;
          uVar3 = *(uint *)(lVar26 + 0x18);
          dVar4 = iVar16 + uVar3;
          pdVar17[4] = dVar4;
        }
        if ((int)uVar2 < 1) {
          return pdVar20;
        }
        uVar18 = *(undefined8 *)*(undefined1 (*) [16])(puVar11 + -0x20);
        uVar22 = *(undefined8 *)(puVar11 + -0x18);
        auVar39 = *(undefined1 (*) [16])(puVar11 + -0x20);
        unaff_x22 = *(ulong *)(puVar11 + -0x30);
        pdVar25 = *(dword **)(puVar11 + -0x28);
        *(undefined8 *)(puVar11 + -0x10) = *(undefined8 *)(puVar11 + -0x10);
        *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
        lVar26 = *(long *)(pdVar17 + 6);
        auVar8._8_8_ = lVar26;
        auVar8._0_8_ = pdVar27;
        uVar2 = pdVar17[4] - uVar2;
        uVar29 = (ulong)uVar2;
        auVar37._8_4_ = uVar2;
        auVar37._0_8_ = lVar26;
        auVar37._12_4_ = 0;
        pdVar17[4] = uVar2;
        if (lVar26 != 0) {
          *(ulong *)(puVar11 + -0x30) = unaff_x22;
          *(dword **)(puVar11 + -0x28) = pdVar25;
          *(undefined8 *)(puVar11 + -0x20) = uVar18;
          *(undefined8 *)(puVar11 + -0x18) = uVar22;
          *(undefined8 *)(puVar11 + -0x10) = *(undefined8 *)(puVar11 + -0x10);
          *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
          puVar30 = puVar11 + -0x10;
          pdVar24 = (dword *)0x0;
          puVar34 = &UNK_016cc908;
          goto code_r0x016cc7a4;
        }
        lVar26 = func_0x00f78af4();
        unaff_x29 = (undefined1 ***)(puVar11 + -0x20);
        *(undefined1 **)(puVar11 + -0x20) = puVar11 + -0x10;
        *(undefined **)(puVar11 + -0x18) = &FlatBuffers_FlatBufferBuilder__GrowBuffer;
        if ((*(long *)(lVar26 + 0x18) != 0) &&
           (plVar19 = *(long **)(*(long *)(lVar26 + 0x18) + 0x10), plVar19 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016cdaa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pdVar24 = (dword *)(**(code **)(*plVar19 + 0x178))
                                       (plVar19,(int)plVar19[3] << 1,
                                        *(undefined8 *)(*plVar19 + 0x180));
          return pdVar24;
        }
        puVar34 = &FlatBuffers_FlatBufferBuilder__Prep;
        auVar38 = func_0x00f78af4();
        puVar11 = puVar11 + -0x20;
        goto code_r0x016cdaac;
      }
code_r0x016cdb68:
      auVar8._8_8_ = pdVar27;
      auVar8._0_8_ = pdVar25;
      auVar35 = func_0x00f78af4();
      pdVar24 = auVar35._8_8_;
      lVar28 = auVar35._0_8_;
      *(undefined1 **)(puVar11 + -0x40) = puVar11 + -0x10;
      *(undefined **)(puVar11 + -0x38) = &FlatBuffers_FlatBufferBuilder__PutBool;
      lVar26 = *(long *)(lVar28 + 0x18);
      iVar16 = *(int *)(lVar28 + 0x10) + -1;
      *(int *)(lVar28 + 0x10) = iVar16;
      if (lVar26 != 0) {
        puVar12 = puVar11 + -0x30;
        uVar18 = *(undefined8 *)(puVar11 + -0x40);
        uVar22 = *(undefined8 *)(puVar11 + -0x38);
FlatBuffers_ByteBuffer__PutByte:
        auVar8._8_4_ = iVar16;
        auVar8._0_8_ = lVar26;
        auVar8._12_4_ = 0;
        auVar37._8_4_ = iVar16;
        auVar37._0_8_ = lVar26;
        auVar37._12_4_ = 0;
        puVar9 = puVar12 + -0x30;
        *(ulong *)(puVar12 + -0x30) = uVar29;
        *(dword **)(puVar12 + -0x28) = pdVar25;
        *(dword **)(puVar12 + -0x20) = pdVar27;
        *(dword **)(puVar12 + -0x18) = pdVar17;
        *(undefined8 *)(puVar12 + -0x10) = uVar18;
        *(undefined8 *)(puVar12 + -8) = uVar22;
        puVar30 = puVar12 + -0x10;
        pdVar27 = (dword *)((long)&MACH_HEADER.magic + 1);
        puVar34 = &UNK_016cc89c;
        goto code_r0x016cc7a4;
      }
      auVar35 = func_0x00f78af4();
      pdVar20 = auVar35._8_8_;
      lVar26 = auVar35._0_8_;
      *(undefined1 **)(puVar11 + -0x50) = puVar11 + -0x40;
      *(undefined **)(puVar11 + -0x48) = &FlatBuffers_FlatBufferBuilder__PutSbyte;
      iVar16 = *(int *)(lVar26 + 0x10) + -1;
      auVar37._8_4_ = iVar16;
      auVar37._0_8_ = *(long *)(lVar26 + 0x18);
      auVar37._12_4_ = 0;
      *(int *)(lVar26 + 0x10) = iVar16;
      if (*(long *)(lVar26 + 0x18) != 0) {
        puVar13 = puVar11 + -0x40;
        puVar30 = *(undefined1 **)(puVar11 + -0x50);
        puVar34 = *(undefined **)(puVar11 + -0x48);
        goto code_r0x016cc810;
      }
      auVar35 = func_0x00f78af4();
      pdVar24 = auVar35._8_8_;
      lVar28 = auVar35._0_8_;
      *(undefined1 **)(puVar11 + -0x60) = puVar11 + -0x50;
      *(undefined **)(puVar11 + -0x58) = &FlatBuffers_FlatBufferBuilder__PutByte;
      lVar26 = *(long *)(lVar28 + 0x18);
      iVar16 = *(int *)(lVar28 + 0x10) + -1;
      *(int *)(lVar28 + 0x10) = iVar16;
      if (lVar26 != 0) {
        puVar12 = puVar11 + -0x50;
        uVar18 = *(undefined8 *)(puVar11 + -0x60);
        uVar22 = *(undefined8 *)(puVar11 + -0x58);
        goto FlatBuffers_ByteBuffer__PutByte;
      }
      auVar35 = func_0x00f78af4();
      pdVar24 = auVar35._8_8_;
      lVar26 = auVar35._0_8_;
      puVar9 = puVar11 + -0x90;
      *(ulong *)(puVar11 + -0x90) = uVar29;
      *(dword **)(puVar11 + -0x88) = pdVar25;
      *(dword **)(puVar11 + -0x80) = pdVar27;
      *(dword **)(puVar11 + -0x78) = pdVar17;
      *(undefined1 **)(puVar11 + -0x70) = puVar11 + -0x60;
      *(undefined **)(puVar11 + -0x68) = &FlatBuffers_FlatBufferBuilder__PutShort;
      puVar30 = puVar11 + -0x70;
      lVar28 = *(long *)(lVar26 + 0x18);
      uVar1 = *(int *)(lVar26 + 0x10) - 2;
      auVar8._8_8_ = lVar28;
      auVar8._0_8_ = CONCAT44(0,uVar1);
      auVar37._8_4_ = uVar1;
      auVar37._0_8_ = lVar28;
      auVar37._12_4_ = 0;
      *(uint *)(lVar26 + 0x10) = uVar1;
      if (lVar28 != 0) {
        pdVar27 = (dword *)((long)&MACH_HEADER.magic + 2);
        puVar34 = &UNK_016cdc34;
        goto code_r0x016cc7a4;
      }
      auVar35 = func_0x00f78af4();
      pdVar24 = auVar35._8_8_;
      lVar26 = auVar35._0_8_;
      puVar9 = puVar11 + -0xc0;
      *(ulong *)(puVar11 + -0xc0) = uVar29;
      *(ulong *)(puVar11 + -0xb8) = CONCAT44(0,uVar1);
      *(undefined8 *)(puVar11 + -0xb0) = 0;
      *(dword **)(puVar11 + -0xa8) = pdVar17;
      *(undefined1 **)(puVar11 + -0xa0) = puVar30;
      *(undefined **)(puVar11 + -0x98) = &FlatBuffers_FlatBufferBuilder__PutUshort;
      puVar30 = puVar11 + -0xa0;
      lVar28 = *(long *)(lVar26 + 0x18);
      uVar1 = *(int *)(lVar26 + 0x10) - 2;
      auVar8._8_8_ = lVar28;
      auVar8._0_8_ = CONCAT44(0,uVar1);
      auVar37._8_4_ = uVar1;
      auVar37._0_8_ = lVar28;
      auVar37._12_4_ = 0;
      *(uint *)(lVar26 + 0x10) = uVar1;
      if (lVar28 != 0) {
        pdVar27 = (dword *)((long)&MACH_HEADER.magic + 2);
        puVar34 = &UNK_016cdc90;
        goto code_r0x016cc7a4;
      }
      auVar35 = func_0x00f78af4();
      pdVar24 = auVar35._8_8_;
      lVar26 = auVar35._0_8_;
      puVar9 = puVar11 + -0xf0;
      *(ulong *)(puVar11 + -0xf0) = uVar29;
      *(ulong *)(puVar11 + -0xe8) = CONCAT44(0,uVar1);
      *(undefined8 *)(puVar11 + -0xe0) = 0;
      *(dword **)(puVar11 + -0xd8) = pdVar17;
      *(undefined1 **)(puVar11 + -0xd0) = puVar30;
      *(undefined **)(puVar11 + -200) = &FlatBuffers_FlatBufferBuilder__PutInt;
      puVar30 = puVar11 + -0xd0;
      lVar28 = *(long *)(lVar26 + 0x18);
      uVar1 = *(int *)(lVar26 + 0x10) - 4;
      auVar8._8_8_ = lVar28;
      auVar8._0_8_ = CONCAT44(0,uVar1);
      auVar37._8_4_ = uVar1;
      auVar37._0_8_ = lVar28;
      auVar37._12_4_ = 0;
      *(uint *)(lVar26 + 0x10) = uVar1;
      if (lVar28 != 0) {
        pdVar27 = &MACH_HEADER.cputype;
        puVar34 = &UNK_016cdcec;
        goto code_r0x016cc7a4;
      }
      auVar35 = func_0x00f78af4();
      pdVar24 = auVar35._8_8_;
      lVar26 = auVar35._0_8_;
      puVar9 = puVar11 + -0x120;
      *(ulong *)(puVar11 + -0x120) = uVar29;
      *(ulong *)(puVar11 + -0x118) = CONCAT44(0,uVar1);
      *(undefined8 *)(puVar11 + -0x110) = 0;
      *(dword **)(puVar11 + -0x108) = pdVar17;
      *(undefined1 **)(puVar11 + -0x100) = puVar30;
      *(undefined **)(puVar11 + -0xf8) = &FlatBuffers_FlatBufferBuilder__PutUint;
      puVar30 = puVar11 + -0x100;
      lVar28 = *(long *)(lVar26 + 0x18);
      uVar1 = *(int *)(lVar26 + 0x10) - 4;
      auVar8._8_8_ = lVar28;
      auVar8._0_8_ = CONCAT44(0,uVar1);
      auVar37._8_4_ = uVar1;
      auVar37._0_8_ = lVar28;
      auVar37._12_4_ = 0;
      *(uint *)(lVar26 + 0x10) = uVar1;
      if (lVar28 != 0) {
        pdVar27 = &MACH_HEADER.cputype;
        puVar34 = &UNK_016cdd48;
        goto code_r0x016cc7a4;
      }
      auVar35 = func_0x00f78af4();
      pdVar24 = auVar35._8_8_;
      lVar26 = auVar35._0_8_;
      puVar9 = puVar11 + -0x150;
      *(ulong *)(puVar11 + -0x150) = uVar29;
      *(ulong *)(puVar11 + -0x148) = CONCAT44(0,uVar1);
      *(undefined8 *)(puVar11 + -0x140) = 0;
      *(dword **)(puVar11 + -0x138) = pdVar17;
      *(undefined1 **)(puVar11 + -0x130) = puVar30;
      *(undefined **)(puVar11 + -0x128) = &FlatBuffers_FlatBufferBuilder__PutLong;
      puVar30 = puVar11 + -0x130;
      lVar28 = *(long *)(lVar26 + 0x18);
      uVar1 = *(int *)(lVar26 + 0x10) - 8;
      auVar8._8_8_ = lVar28;
      auVar8._0_8_ = CONCAT44(0,uVar1);
      auVar37._8_4_ = uVar1;
      auVar37._0_8_ = lVar28;
      auVar37._12_4_ = 0;
      *(uint *)(lVar26 + 0x10) = uVar1;
      if (lVar28 != 0) {
        pdVar27 = &MACH_HEADER.cpusubtype;
        puVar34 = &UNK_016cdda4;
        goto code_r0x016cc7a4;
      }
      auVar35 = func_0x00f78af4();
      pdVar24 = auVar35._8_8_;
      lVar26 = auVar35._0_8_;
      puVar9 = puVar11 + -0x180;
      *(ulong *)(puVar11 + -0x180) = uVar29;
      *(ulong *)(puVar11 + -0x178) = CONCAT44(0,uVar1);
      *(undefined8 *)(puVar11 + -0x170) = 0;
      *(dword **)(puVar11 + -0x168) = pdVar17;
      *(undefined1 **)(puVar11 + -0x160) = puVar30;
      *(undefined **)(puVar11 + -0x158) = &FlatBuffers_FlatBufferBuilder__PutUlong;
      puVar30 = puVar11 + -0x160;
      lVar28 = *(long *)(lVar26 + 0x18);
      uVar1 = *(int *)(lVar26 + 0x10) - 8;
      pdVar25 = (dword *)CONCAT44(0,uVar1);
      auVar8._8_8_ = lVar28;
      auVar8._0_8_ = pdVar25;
      auVar37._8_4_ = uVar1;
      auVar37._0_8_ = lVar28;
      auVar37._12_4_ = 0;
      *(uint *)(lVar26 + 0x10) = uVar1;
      if (lVar28 != 0) {
        pdVar27 = &MACH_HEADER.cpusubtype;
        puVar34 = &UNK_016cde00;
        goto code_r0x016cc7a4;
      }
      lVar26 = func_0x00f78af4();
      *(undefined1 **)(puVar11 + -400) = puVar30;
      *(undefined **)(puVar11 + -0x188) = &FlatBuffers_FlatBufferBuilder__PutFloat;
      lVar28 = *(long *)(lVar26 + 0x18);
      auVar8._8_8_ = lVar28;
      uVar1 = *(int *)(lVar26 + 0x10) - 4;
      pdVar24 = (dword *)(ulong)uVar1;
      auVar37._8_4_ = uVar1;
      auVar37._0_8_ = lVar28;
      auVar37._12_4_ = 0;
      *(uint *)(lVar26 + 0x10) = uVar1;
      if (lVar28 != 0) {
        puVar9 = puVar11 + -0x1b0;
        *(undefined8 *)(puVar11 + -0x1b0) = unaff_d9;
        *(undefined8 *)(puVar11 + -0x1a8) = unaff_d8;
        *(undefined8 *)(puVar11 + -0x1a0) = 0;
        *(dword **)(puVar11 + -0x198) = pdVar17;
        *(undefined8 *)(puVar11 + -400) = *(undefined8 *)(puVar11 + -400);
        *(undefined8 *)(puVar11 + -0x188) = *(undefined8 *)(puVar11 + -0x188);
        puVar30 = puVar11 + -400;
        pdVar27 = &MACH_HEADER.cputype;
        puVar34 = &UNK_016ccba4;
        goto code_r0x016cc7a4;
      }
      lVar26 = func_0x00f78af4();
      *(undefined1 **)(puVar11 + -0x1a0) = puVar11 + -400;
      *(undefined **)(puVar11 + -0x198) = &FlatBuffers_FlatBufferBuilder__PutDouble;
      lVar28 = *(long *)(lVar26 + 0x18);
      auVar8._8_8_ = lVar28;
      uVar1 = *(int *)(lVar26 + 0x10) - 8;
      pdVar24 = (dword *)(ulong)uVar1;
      auVar37._8_4_ = uVar1;
      auVar37._0_8_ = lVar28;
      auVar37._12_4_ = 0;
      *(uint *)(lVar26 + 0x10) = uVar1;
      if (lVar28 != 0) goto code_r0x016cde70;
      auVar39 = func_0x00f78af4();
      *(undefined8 *)(puVar11 + -0x1c0) = 0;
      *(dword **)(puVar11 + -0x1b8) = pdVar17;
      *(undefined1 **)(puVar11 + -0x1b0) = puVar11 + -0x1a0;
      *(undefined **)(puVar11 + -0x1a8) = &FlatBuffers_FlatBufferBuilder__AddBool;
      unaff_x29 = (undefined1 ***)(puVar11 + -0x1b0);
      auVar38._8_8_ = 1;
      auVar38._0_8_ = auVar39._0_8_;
      pdVar24 = (dword *)0x0;
      puVar34 = &UNK_016cde9c;
      puVar11 = puVar11 + -0x1c0;
      unaff_x22 = uVar29;
    } while( true );
  }
  puVar34 = &UNK_016ce3a4;
code_r0x016cda04:
  *(undefined1 ****)(puVar10 + -0x10) = pppuVar33;
  *(undefined **)(puVar10 + -8) = puVar34;
  if ((*(long *)(piVar21 + 6) != 0) &&
     (lVar26 = *(long *)(*(long *)(piVar21 + 6) + 0x10), lVar26 != 0)) {
    return (dword *)(ulong)(uint)(*(int *)(lVar26 + 0x18) - piVar21[4]);
  }
  lVar26 = func_0x00f78af4();
  return (dword *)(ulong)*(byte *)(lVar26 + 0x48);
code_r0x016cde70:
  puVar9 = puVar11 + -0x1c0;
  *(undefined8 *)(puVar11 + -0x1c0) = unaff_d9;
  *(undefined8 *)(puVar11 + -0x1b8) = unaff_d8;
  *(undefined8 *)(puVar11 + -0x1b0) = 0;
  *(dword **)(puVar11 + -0x1a8) = pdVar17;
  *(undefined8 *)(puVar11 + -0x1a0) = *(undefined8 *)(puVar11 + -0x1a0);
  *(undefined8 *)(puVar11 + -0x198) = *(undefined8 *)(puVar11 + -0x198);
  puVar30 = puVar11 + -0x1a0;
  pdVar27 = &MACH_HEADER.cpusubtype;
  puVar34 = &UNK_016ccc34;
  goto code_r0x016cc7a4;
}



// ============================================================
// RVA: 0x166b380 | Core.Services.FindPublicMatchRequest.CreateFindPublicMatchRequest
// ============================================================

/* WARNING: Possible PIC construction at 0x0166b3a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0166b3c0: Changing call to branch */
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
/* WARNING: Possible PIC construction at 0x0166b4c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0166b584: Changing call to branch */
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
/* WARNING: Possible PIC construction at 0x016ce778: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x0166b588) */
/* WARNING: Removing unreachable block (ram,0x016ce224) */
/* WARNING: Removing unreachable block (ram,0x0166b4c4) */
/* WARNING: Removing unreachable block (ram,0x0166b4d0) */
/* WARNING: Removing unreachable block (ram,0x0166b4d8) */
/* WARNING: Removing unreachable block (ram,0x0166b4f4) */
/* WARNING: Removing unreachable block (ram,0x0166b500) */
/* WARNING: Removing unreachable block (ram,0x0166b50c) */
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
/* WARNING: Removing unreachable block (ram,0x0166b3c4) */
/* WARNING: Removing unreachable block (ram,0x0166b3ac) */
/* WARNING: Removing unreachable block (ram,0x016ce77c) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_FindPublicMatchRequest__CreateFindPublicMatchRequest
                (long param_1,undefined8 param_2,ulong param_3,int param_4)

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
  undefined8 **ppuVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  int iVar23;
  ulong uVar24;
  ulong uVar25;
  long unaff_x19;
  undefined8 unaff_x20;
  ulong uVar26;
  long lVar27;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar28;
  undefined8 ****ppppuVar29;
  undefined1 *puVar30;
  undefined8 ***pppuVar31;
  undefined8 **ppuVar32;
  undefined *puVar33;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [12];
  long alStack_100 [2];
  undefined8 ***apppuStack_f0 [2];
  undefined8 ***pppuStack_c0;
  undefined *puStack_b8;
  undefined8 *puStack_40;
  undefined *puStack_38;
  
  puVar14 = &stack0xffffffffffffffd0;
  ppuVar32 = (undefined8 **)&stack0xfffffffffffffff0;
  if (param_1 == 0) {
    auVar37 = func_0x00f78af4();
    uVar24 = auVar37._8_8_;
    uVar25 = auVar37._0_8_;
    puStack_40 = ppuVar32;
    if (uVar25 != 0) {
      puVar11 = &stack0xffffffffffffffa0;
      puStack_38 = &Core_Services_FindPublicMatchRequest__AddMatchStartTimeout;
      pppuVar31 = (undefined8 ***)&puStack_40;
      auVar37._8_8_ = 1;
      auVar37._0_8_ = uVar25;
      if ((uVar24 == 0) && (*(char *)(uVar25 + 0x48) == '\0')) {
        return uVar25;
      }
      auVar36._8_8_ = 8;
      auVar36._0_8_ = uVar25;
      uVar25 = 0;
      puVar33 = &UNK_016ce77c;
      goto code_r0x016cdaac;
    }
    ppuVar32 = &puStack_40;
    puStack_38 = &Core_Services_FindPublicMatchRequest__AddMatchStartTimeout;
    auVar37 = func_0x00f78af4();
    uVar24 = auVar37._0_8_;
    if (uVar24 == 0) {
      lVar20 = func_0x00f78af4();
      puVar14 = &stack0xffffffffffffff90;
      ppuVar32 = (undefined8 **)&stack0xffffffffffffffa0;
      param_2 = 0x3eb5000;
      if ((bRam0000000003eb58bf & 1) == 0) {
        func_0x00f78a20(0x3d3f088);
        bRam0000000003eb58bf = 1;
      }
      if (lVar20 != 0) {
        pppuVar31 = (undefined8 ***)&stack0xffffffffffffffa0;
        auVar37._8_8_ = lVar20;
        auVar37._0_8_ = 0x3eb5000;
        if ((bRam0000000003eb5cd8 & 1) == 0) {
          func_0x00f78a20(0x3d1f100,0);
          bRam0000000003eb5cd8 = 1;
        }
        uVar24 = unaff_x21;
        if (*(int *)(lVar20 + 0x30) < 0) {
          func_0x00f78a24(0x3d22a38);
          puVar33 = (undefined *)func_0x00f78aec();
          uVar19 = func_0x00f78a24(0x3d6cea8);
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(puVar33,uVar19);
          uVar19 = func_0x00f78a24(0x3d56a30);
          auVar38 = func_0x00f78ac0(puVar33,uVar19);
          pppuStack_c0 = (undefined8 ****)0x3eb5000;
          pppuVar31 = (undefined8 ***)&stack0xffffffffffffff50;
          lVar20 = *(long *)(auVar38._0_8_ + 0x18);
          puStack_b8 = puVar33;
          if ((lVar20 != 0) && (*(long *)(lVar20 + 0x10) != 0)) {
            uVar5 = *(int *)(*(long *)(lVar20 + 0x10) + 0x18) - auVar38._8_4_;
            uVar25 = (ulong)uVar5;
            auVar35._8_4_ = uVar5;
            auVar35._0_8_ = lVar20;
            auVar35._12_4_ = 0;
            puVar9 = &stack0xfffffffffffffee0;
            apppuStack_f0[1] = (undefined8 ***)&UNK_016cee20;
            ppppuVar29 = apppuStack_f0;
            auVar8._8_8_ = 4;
            auVar8._0_8_ = lVar20;
            uVar28 = 0x3d201a0;
            apppuStack_f0[0] = pppuVar31;
            if ((bRam0000000003eb5cd0 & 1) == 0) {
              func_0x00f78a20(0x3d201a0);
              bRam0000000003eb5cd0 = 1;
            }
            uVar26 = 4;
            puVar33 = &UNK_016cc68c;
            goto code_r0x016cc7a4;
          }
          func_0x00f78af4();
          uVar19 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&stack0xffffffffffffff2c,0);
          uVar21 = func_0x00f78a24(0x3d6ce88);
          uVar22 = func_0x00f78a24(0x3d66338);
          lVar20 = /*System.String$$Concat*/ func_0x029be39c(uVar21,uVar19,uVar22,0);
          func_0x00f78a24(0x3d22a38);
          uVar19 = func_0x00f78aec();
          uVar22 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar19,lVar20);
          uVar21 = func_0x00f78a24(0x3d56a50);
          puVar33 = &FlatBuffers_FlatBufferBuilder__Finish;
          auVar37 = func_0x00f78ac0(uVar19,uVar21);
          puVar11 = &stack0xffffffffffffff20;
          while( true ) {
            uVar21 = auVar37._8_8_;
            lVar27 = auVar37._0_8_;
            auVar37._8_8_ = lVar27;
            auVar37._0_8_ = uVar21;
            auVar7._8_8_ = lVar27;
            auVar7._0_8_ = uVar21;
            *(undefined8 *)(puVar11 + -0x20) = uVar19;
            *(long *)(puVar11 + -0x18) = lVar20;
            *(undefined8 ****)(puVar11 + -0x10) = pppuVar31;
            *(undefined **)(puVar11 + -8) = puVar33;
            pppuVar31 = (undefined8 ***)(puVar11 + -0x10);
            uVar4 = *(undefined4 *)(lVar27 + 0x20);
            auVar36._8_4_ = uVar4;
            auVar36._0_8_ = lVar27;
            auVar36._12_4_ = 0;
            lVar20 = lVar27;
            if ((int)uVar22 == 0) {
              lVar20 = 0;
              uVar4 = 0;
            }
            auVar6._8_4_ = uVar4;
            auVar6._0_8_ = lVar20;
            auVar6._12_4_ = 0;
            if ((int)uVar22 == 0) {
              uVar25 = 4;
              puVar33 = &UNK_016cef64;
              puVar11 = puVar11 + -0x20;
              goto code_r0x016cdaac;
            }
            if (lVar20 != 0) break;
            puVar33 = &FlatBuffers_FlatBufferBuilder__Finish;
            auVar37 = func_0x00f78af4();
            uVar22 = 0;
            puVar11 = puVar11 + -0x20;
            lVar20 = lVar27;
            uVar19 = uVar21;
          }
          uVar25 = 8;
          puVar33 = &UNK_016cef10;
          puVar11 = puVar11 + -0x20;
          auVar36 = auVar6;
          auVar37 = auVar7;
        }
        else {
          auVar36._8_8_ = 4;
          auVar36._0_8_ = lVar20;
          uVar25 = 0;
          puVar33 = &UNK_016cea78;
          puVar11 = &stack0xffffffffffffff60;
        }
        goto code_r0x016cdaac;
      }
      puVar33 = &Core_Services_FindPublicMatchRequest__StartFindPublicMatchRequest;
      param_1 = func_0x00f78af4();
      if (param_1 == 0) {
        auVar34 = func_0x00f78af4();
        lVar20 = auVar34._0_8_;
        if ((auVar34._8_8_ == 0) || (lVar20 == 0)) {
          auVar34 = func_0x00f78af4();
          lVar27 = auVar34._8_8_;
          lVar20 = auVar34._0_8_;
          puVar11 = &stack0xffffffffffffff20;
          puStack_b8 = &Core_Services_FindPublicMatchRequest__CreatePropertiesVectorBlock;
          ppppuVar29 = &pppuStack_c0;
          unaff_x21 = 0x3eb5000;
          pppuStack_c0 = (undefined8 ***)&stack0xffffffffffffff70;
          if ((bRam0000000003eb58be & 1) == 0) {
            func_0x00f78a20(0x3d569c8);
            bRam0000000003eb58be = 1;
          }
          if ((lVar27 == 0) || (lVar20 == 0)) {
            puVar33 = &Core_Services_FindPublicMatchRequest__StartPropertiesVector;
            auVar38 = func_0x00f78af4();
            iVar23 = auVar38._8_4_;
            auVar34._8_8_ = lVar27;
            auVar34._0_8_ = auVar38._0_8_;
            if (auVar38._0_8_ == 0) {
              apppuStack_f0[1] =
                   (undefined8 ***)&Core_Services_FindPublicMatchRequest__StartPropertiesVector;
              apppuStack_f0[0] = ppppuVar29;
              lVar20 = func_0x00f78af4();
              return *(ulong *)(lVar20 + 8);
            }
          }
          else {
            unaff_x21 = 0x3d56000;
            iVar23 = *(int *)(lVar27 + 0x18);
            puVar33 = &UNK_0166b588;
            puVar11 = &stack0xffffffffffffff20;
          }
        }
        else {
          iVar23 = *(int *)(auVar34._8_8_ + 0x18);
          puVar33 = &UNK_0166b4c4;
          puVar11 = &stack0xffffffffffffff50;
          ppppuVar29 = (undefined8 ****)&stack0xffffffffffffff70;
        }
        uVar28 = auVar34._0_8_;
        *(ulong *)(puVar11 + -0x30) = unaff_x22;
        *(ulong *)(puVar11 + -0x28) = unaff_x21;
        *(long *)(puVar11 + -0x20) = auVar34._8_8_;
        *(long *)(puVar11 + -0x18) = lVar20;
        *(undefined8 *****)(puVar11 + -0x10) = ppppuVar29;
        *(undefined **)(puVar11 + -8) = puVar33;
        pppuVar31 = (undefined8 ***)(puVar11 + -0x10);
        uVar24 = 4;
        /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4();
        *(int *)(uVar28 + 0x44) = iVar23;
        uVar25 = CONCAT44(0,iVar23 * 4);
        auVar37._8_8_ = 4;
        auVar37._0_8_ = uVar25;
        auVar36._8_8_ = 4;
        auVar36._0_8_ = uVar28;
        puVar33 = &UNK_016ce188;
        puVar11 = puVar11 + -0x30;
        unaff_x22 = uVar28;
        goto code_r0x016cdaac;
      }
      lVar20 = 0;
      goto code_r0x016ce2a4;
    }
    param_4 = 0;
    puVar33 = &Core_Services_FindPublicMatchRequest__AddProperties;
    auVar38._8_4_ = 0;
    auVar38._0_8_ = uVar24;
    if ((auVar37._8_4_ == 0) && (*(char *)(uVar24 + 0x48) == '\0')) {
      return uVar24;
    }
    /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(uVar24,auVar37._8_8_,auVar37._8_8_,0,0);
    ppuVar15 = &puStack_40;
  }
  else {
    puVar33 = (undefined *)0x166b3ac;
    lVar20 = param_1;
    unaff_x21 = param_3;
code_r0x016ce2a4:
    puVar10 = puVar14 + -0x30;
    ppuVar15 = (undefined8 **)(puVar14 + -0x30);
    *(ulong *)(puVar14 + -0x30) = unaff_x22;
    *(ulong *)(puVar14 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar14 + -0x20) = param_2;
    *(long *)(puVar14 + -0x18) = lVar20;
    *(undefined8 ***)(puVar14 + -0x10) = ppuVar32;
    *(undefined **)(puVar14 + -8) = puVar33;
    ppuVar32 = (undefined8 **)(puVar14 + -0x10);
    unaff_x20 = 2;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100,2,0);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(param_1);
    if (*(long *)(param_1 + 0x28) != 0) {
      if (*(int *)(*(long *)(param_1 + 0x28) + 0x18) < 2) {
        uVar19 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,2);
        *(undefined8 *)(param_1 + 0x28) = uVar19;
      }
      *(undefined4 *)(param_1 + 0x30) = 2;
      puVar33 = &UNK_016ce320;
      goto code_r0x016cda04;
    }
    puVar33 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar38 = func_0x00f78af4();
    unaff_x19 = param_1;
  }
  param_1 = auVar38._0_8_;
  puVar10 = (undefined1 *)((long)ppuVar15 + -0x20);
  *(undefined8 *)((long)ppuVar15 + -0x20) = unaff_x20;
  *(long *)((long)ppuVar15 + -0x18) = unaff_x19;
  *(undefined8 ***)((long)ppuVar15 + -0x10) = ppuVar32;
  *(undefined **)((long)ppuVar15 + -8) = puVar33;
  ppuVar32 = (undefined8 **)((long)ppuVar15 + -0x10);
  if (*(int *)(param_1 + 0x30) <= auVar38._8_4_) {
    func_0x00f78a24(0x3d22738);
    uVar19 = func_0x00f78aec();
    uVar21 = func_0x00f78a24(0x3d6ceb8);
    uVar24 = 0;
    /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar19,uVar21);
    uVar21 = func_0x00f78a24(0x3d56a58);
    func_0x00f78ac0(uVar19,uVar21);
    func_0x00f78af4();
    uVar21 = func_0x00f78b24();
    auVar37 = func_0x00f78ac0(uVar21,0);
    uVar25 = auVar37._0_8_;
    *(ulong *)((long)ppuVar15 + -0x50) = unaff_x22;
    *(ulong *)((long)ppuVar15 + -0x48) = unaff_x21;
    *(undefined8 *)((long)ppuVar15 + -0x40) = unaff_x20;
    *(undefined8 *)((long)ppuVar15 + -0x38) = uVar19;
    *(undefined8 ***)((long)ppuVar15 + -0x30) = ppuVar32;
    *(undefined **)((long)ppuVar15 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    pppuVar31 = (undefined8 ***)((long)ppuVar15 + -0x30);
    if (((int)uVar24 == param_4) && (*(char *)(uVar25 + 0x48) == '\0')) {
      return uVar25;
    }
    auVar36._8_8_ = 1;
    auVar36._0_8_ = uVar25;
    uVar25 = 0;
    puVar33 = &UNK_016ce46c;
    puVar11 = (undefined1 *)((long)ppuVar15 + -0x50);
code_r0x016cdaac:
    do {
      uVar26 = auVar37._0_8_;
      uVar17 = auVar36._0_8_;
      puVar9 = puVar11 + -0x30;
      *(ulong *)(puVar11 + -0x30) = unaff_x22;
      *(ulong *)(puVar11 + -0x28) = uVar24;
      *(undefined1 (*) [16])(puVar11 + -0x20) = auVar37;
      *(undefined8 ****)(puVar11 + -0x10) = pppuVar31;
      *(undefined **)(puVar11 + -8) = puVar33;
      iVar23 = auVar36._8_4_;
      if (*(int *)(uVar17 + 0x20) < iVar23) {
        *(int *)(uVar17 + 0x20) = iVar23;
      }
      uVar28 = unaff_x22;
      if ((*(long *)(uVar17 + 0x18) != 0) &&
         (lVar20 = *(long *)(*(long *)(uVar17 + 0x18) + 0x10), lVar20 != 0)) {
        uVar2 = *(uint *)(lVar20 + 0x18);
        iVar3 = *(int *)(uVar17 + 0x10);
        uVar1 = iVar3 - (uVar2 + (int)uVar25) & iVar23 - 1U;
        uVar26 = CONCAT44(0,uVar1);
        uVar5 = (int)uVar25 + iVar23 + uVar1;
        uVar28 = (ulong)uVar5;
        uVar18 = uVar17;
        while (uVar24 = (ulong)uVar2, iVar3 < (int)uVar5) {
          uVar18 = /*FlatBuffers.FlatBufferBuilder$$GrowBuffer*/ func_0x016cda78(uVar17);
          if ((*(long *)(uVar17 + 0x18) == 0) ||
             (lVar20 = *(long *)(*(long *)(uVar17 + 0x18) + 0x10), lVar20 == 0))
          goto code_r0x016cdb68;
          iVar3 = *(int *)(uVar17 + 0x10) - uVar2;
          uVar2 = *(uint *)(lVar20 + 0x18);
          iVar3 = iVar3 + uVar2;
          *(int *)(uVar17 + 0x10) = iVar3;
        }
        if ((int)uVar1 < 1) {
          return uVar18;
        }
        uVar19 = *(undefined8 *)*(undefined1 (*) [16])(puVar11 + -0x20);
        uVar21 = *(undefined8 *)(puVar11 + -0x18);
        auVar37 = *(undefined1 (*) [16])(puVar11 + -0x20);
        unaff_x22 = *(ulong *)(puVar11 + -0x30);
        uVar24 = *(ulong *)(puVar11 + -0x28);
        *(undefined8 *)(puVar11 + -0x10) = *(undefined8 *)(puVar11 + -0x10);
        *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
        lVar20 = *(long *)(uVar17 + 0x18);
        auVar8._8_8_ = lVar20;
        auVar8._0_8_ = uVar26;
        uVar1 = *(int *)(uVar17 + 0x10) - uVar1;
        uVar28 = (ulong)uVar1;
        auVar35._8_4_ = uVar1;
        auVar35._0_8_ = lVar20;
        auVar35._12_4_ = 0;
        *(uint *)(uVar17 + 0x10) = uVar1;
        if (lVar20 != 0) {
          *(ulong *)(puVar11 + -0x30) = unaff_x22;
          *(ulong *)(puVar11 + -0x28) = uVar24;
          *(undefined8 *)(puVar11 + -0x20) = uVar19;
          *(undefined8 *)(puVar11 + -0x18) = uVar21;
          *(undefined8 *)(puVar11 + -0x10) = *(undefined8 *)(puVar11 + -0x10);
          *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
          ppppuVar29 = (undefined8 ****)(puVar11 + -0x10);
          puVar33 = &UNK_016cc908;
          uVar25 = 0;
          goto code_r0x016cc7a4;
        }
        lVar20 = func_0x00f78af4();
        pppuVar31 = (undefined8 ***)(puVar11 + -0x20);
        *(undefined1 **)(puVar11 + -0x20) = puVar11 + -0x10;
        *(undefined **)(puVar11 + -0x18) = &FlatBuffers_FlatBufferBuilder__GrowBuffer;
        if ((*(long *)(lVar20 + 0x18) != 0) &&
           (plVar16 = *(long **)(*(long *)(lVar20 + 0x18) + 0x10), plVar16 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016cdaa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar24 = (**(code **)(*plVar16 + 0x178))
                             (plVar16,(int)plVar16[3] << 1,*(undefined8 *)(*plVar16 + 0x180));
          return uVar24;
        }
        puVar33 = &FlatBuffers_FlatBufferBuilder__Prep;
        auVar36 = func_0x00f78af4();
        puVar11 = puVar11 + -0x20;
        goto code_r0x016cdaac;
      }
code_r0x016cdb68:
      auVar8._8_8_ = uVar26;
      auVar8._0_8_ = uVar24;
      auVar37 = func_0x00f78af4();
      uVar25 = auVar37._8_8_;
      lVar27 = auVar37._0_8_;
      *(undefined1 **)(puVar11 + -0x40) = puVar11 + -0x10;
      *(undefined **)(puVar11 + -0x38) = &FlatBuffers_FlatBufferBuilder__PutBool;
      lVar20 = *(long *)(lVar27 + 0x18);
      iVar23 = *(int *)(lVar27 + 0x10) + -1;
      *(int *)(lVar27 + 0x10) = iVar23;
      if (lVar20 != 0) {
        puVar12 = puVar11 + -0x30;
        uVar19 = *(undefined8 *)(puVar11 + -0x40);
        uVar21 = *(undefined8 *)(puVar11 + -0x38);
FlatBuffers_ByteBuffer__PutByte:
        auVar8._8_4_ = iVar23;
        auVar8._0_8_ = lVar20;
        auVar8._12_4_ = 0;
        auVar35._8_4_ = iVar23;
        auVar35._0_8_ = lVar20;
        auVar35._12_4_ = 0;
        puVar9 = puVar12 + -0x30;
        *(ulong *)(puVar12 + -0x30) = uVar28;
        *(ulong *)(puVar12 + -0x28) = uVar24;
        *(ulong *)(puVar12 + -0x20) = uVar26;
        *(ulong *)(puVar12 + -0x18) = uVar17;
        *(undefined8 *)(puVar12 + -0x10) = uVar19;
        *(undefined8 *)(puVar12 + -8) = uVar21;
        ppppuVar29 = (undefined8 ****)(puVar12 + -0x10);
        uVar26 = 1;
        puVar33 = &UNK_016cc89c;
        goto code_r0x016cc7a4;
      }
      auVar37 = func_0x00f78af4();
      uVar18 = auVar37._8_8_;
      lVar20 = auVar37._0_8_;
      *(undefined1 **)(puVar11 + -0x50) = puVar11 + -0x40;
      *(undefined **)(puVar11 + -0x48) = &FlatBuffers_FlatBufferBuilder__PutSbyte;
      iVar23 = *(int *)(lVar20 + 0x10) + -1;
      auVar35._8_4_ = iVar23;
      auVar35._0_8_ = *(long *)(lVar20 + 0x18);
      auVar35._12_4_ = 0;
      *(int *)(lVar20 + 0x10) = iVar23;
      if (*(long *)(lVar20 + 0x18) != 0) {
        puVar13 = puVar11 + -0x40;
        puVar30 = *(undefined1 **)(puVar11 + -0x50);
        puVar33 = *(undefined **)(puVar11 + -0x48);
        uVar25 = uVar17;
        goto code_r0x016cc810;
      }
      auVar37 = func_0x00f78af4();
      uVar25 = auVar37._8_8_;
      lVar27 = auVar37._0_8_;
      *(undefined1 **)(puVar11 + -0x60) = puVar11 + -0x50;
      *(undefined **)(puVar11 + -0x58) = &FlatBuffers_FlatBufferBuilder__PutByte;
      lVar20 = *(long *)(lVar27 + 0x18);
      iVar23 = *(int *)(lVar27 + 0x10) + -1;
      *(int *)(lVar27 + 0x10) = iVar23;
      if (lVar20 != 0) {
        puVar12 = puVar11 + -0x50;
        uVar19 = *(undefined8 *)(puVar11 + -0x60);
        uVar21 = *(undefined8 *)(puVar11 + -0x58);
        goto FlatBuffers_ByteBuffer__PutByte;
      }
      auVar37 = func_0x00f78af4();
      uVar25 = auVar37._8_8_;
      lVar20 = auVar37._0_8_;
      puVar9 = puVar11 + -0x90;
      *(ulong *)(puVar11 + -0x90) = uVar28;
      *(ulong *)(puVar11 + -0x88) = uVar24;
      *(ulong *)(puVar11 + -0x80) = uVar26;
      *(ulong *)(puVar11 + -0x78) = uVar17;
      *(undefined1 **)(puVar11 + -0x70) = puVar11 + -0x60;
      *(undefined **)(puVar11 + -0x68) = &FlatBuffers_FlatBufferBuilder__PutShort;
      ppppuVar29 = (undefined8 ****)(puVar11 + -0x70);
      lVar27 = *(long *)(lVar20 + 0x18);
      uVar5 = *(int *)(lVar20 + 0x10) - 2;
      auVar8._8_8_ = lVar27;
      auVar8._0_8_ = CONCAT44(0,uVar5);
      auVar35._8_4_ = uVar5;
      auVar35._0_8_ = lVar27;
      auVar35._12_4_ = 0;
      *(uint *)(lVar20 + 0x10) = uVar5;
      if (lVar27 != 0) {
        uVar26 = 2;
        puVar33 = &UNK_016cdc34;
        goto code_r0x016cc7a4;
      }
      auVar37 = func_0x00f78af4();
      uVar25 = auVar37._8_8_;
      lVar20 = auVar37._0_8_;
      puVar9 = puVar11 + -0xc0;
      *(ulong *)(puVar11 + -0xc0) = uVar28;
      *(ulong *)(puVar11 + -0xb8) = CONCAT44(0,uVar5);
      *(undefined8 *)(puVar11 + -0xb0) = 0;
      *(ulong *)(puVar11 + -0xa8) = uVar17;
      *(undefined8 *****)(puVar11 + -0xa0) = ppppuVar29;
      *(undefined **)(puVar11 + -0x98) = &FlatBuffers_FlatBufferBuilder__PutUshort;
      ppppuVar29 = (undefined8 ****)(puVar11 + -0xa0);
      lVar27 = *(long *)(lVar20 + 0x18);
      uVar5 = *(int *)(lVar20 + 0x10) - 2;
      auVar8._8_8_ = lVar27;
      auVar8._0_8_ = CONCAT44(0,uVar5);
      auVar35._8_4_ = uVar5;
      auVar35._0_8_ = lVar27;
      auVar35._12_4_ = 0;
      *(uint *)(lVar20 + 0x10) = uVar5;
      if (lVar27 != 0) {
        uVar26 = 2;
        puVar33 = &UNK_016cdc90;
        goto code_r0x016cc7a4;
      }
      auVar37 = func_0x00f78af4();
      uVar25 = auVar37._8_8_;
      lVar20 = auVar37._0_8_;
      puVar9 = puVar11 + -0xf0;
      *(ulong *)(puVar11 + -0xf0) = uVar28;
      *(ulong *)(puVar11 + -0xe8) = CONCAT44(0,uVar5);
      *(undefined8 *)(puVar11 + -0xe0) = 0;
      *(ulong *)(puVar11 + -0xd8) = uVar17;
      *(undefined8 *****)(puVar11 + -0xd0) = ppppuVar29;
      *(undefined **)(puVar11 + -200) = &FlatBuffers_FlatBufferBuilder__PutInt;
      ppppuVar29 = (undefined8 ****)(puVar11 + -0xd0);
      lVar27 = *(long *)(lVar20 + 0x18);
      uVar5 = *(int *)(lVar20 + 0x10) - 4;
      auVar8._8_8_ = lVar27;
      auVar8._0_8_ = CONCAT44(0,uVar5);
      auVar35._8_4_ = uVar5;
      auVar35._0_8_ = lVar27;
      auVar35._12_4_ = 0;
      *(uint *)(lVar20 + 0x10) = uVar5;
      if (lVar27 != 0) {
        uVar26 = 4;
        puVar33 = &UNK_016cdcec;
        goto code_r0x016cc7a4;
      }
      auVar37 = func_0x00f78af4();
      uVar25 = auVar37._8_8_;
      lVar20 = auVar37._0_8_;
      puVar9 = puVar11 + -0x120;
      *(ulong *)(puVar11 + -0x120) = uVar28;
      *(ulong *)(puVar11 + -0x118) = CONCAT44(0,uVar5);
      *(undefined8 *)(puVar11 + -0x110) = 0;
      *(ulong *)(puVar11 + -0x108) = uVar17;
      *(undefined8 *****)(puVar11 + -0x100) = ppppuVar29;
      *(undefined **)(puVar11 + -0xf8) = &FlatBuffers_FlatBufferBuilder__PutUint;
      ppppuVar29 = (undefined8 ****)(puVar11 + -0x100);
      lVar27 = *(long *)(lVar20 + 0x18);
      uVar5 = *(int *)(lVar20 + 0x10) - 4;
      auVar8._8_8_ = lVar27;
      auVar8._0_8_ = CONCAT44(0,uVar5);
      auVar35._8_4_ = uVar5;
      auVar35._0_8_ = lVar27;
      auVar35._12_4_ = 0;
      *(uint *)(lVar20 + 0x10) = uVar5;
      if (lVar27 != 0) {
        uVar26 = 4;
        puVar33 = &UNK_016cdd48;
        goto code_r0x016cc7a4;
      }
      auVar37 = func_0x00f78af4();
      uVar25 = auVar37._8_8_;
      lVar20 = auVar37._0_8_;
      puVar9 = puVar11 + -0x150;
      *(ulong *)(puVar11 + -0x150) = uVar28;
      *(ulong *)(puVar11 + -0x148) = CONCAT44(0,uVar5);
      *(undefined8 *)(puVar11 + -0x140) = 0;
      *(ulong *)(puVar11 + -0x138) = uVar17;
      *(undefined8 *****)(puVar11 + -0x130) = ppppuVar29;
      *(undefined **)(puVar11 + -0x128) = &FlatBuffers_FlatBufferBuilder__PutLong;
      ppppuVar29 = (undefined8 ****)(puVar11 + -0x130);
      lVar27 = *(long *)(lVar20 + 0x18);
      uVar5 = *(int *)(lVar20 + 0x10) - 8;
      auVar8._8_8_ = lVar27;
      auVar8._0_8_ = CONCAT44(0,uVar5);
      auVar35._8_4_ = uVar5;
      auVar35._0_8_ = lVar27;
      auVar35._12_4_ = 0;
      *(uint *)(lVar20 + 0x10) = uVar5;
      if (lVar27 != 0) {
        uVar26 = 8;
        puVar33 = &UNK_016cdda4;
        goto code_r0x016cc7a4;
      }
      auVar37 = func_0x00f78af4();
      uVar25 = auVar37._8_8_;
      lVar20 = auVar37._0_8_;
      puVar9 = puVar11 + -0x180;
      *(ulong *)(puVar11 + -0x180) = uVar28;
      *(ulong *)(puVar11 + -0x178) = CONCAT44(0,uVar5);
      *(undefined8 *)(puVar11 + -0x170) = 0;
      *(ulong *)(puVar11 + -0x168) = uVar17;
      *(undefined8 *****)(puVar11 + -0x160) = ppppuVar29;
      *(undefined **)(puVar11 + -0x158) = &FlatBuffers_FlatBufferBuilder__PutUlong;
      ppppuVar29 = (undefined8 ****)(puVar11 + -0x160);
      lVar27 = *(long *)(lVar20 + 0x18);
      uVar5 = *(int *)(lVar20 + 0x10) - 8;
      uVar24 = CONCAT44(0,uVar5);
      auVar8._8_8_ = lVar27;
      auVar8._0_8_ = uVar24;
      auVar35._8_4_ = uVar5;
      auVar35._0_8_ = lVar27;
      auVar35._12_4_ = 0;
      *(uint *)(lVar20 + 0x10) = uVar5;
      if (lVar27 != 0) {
        uVar26 = 8;
        puVar33 = &UNK_016cde00;
        goto code_r0x016cc7a4;
      }
      lVar20 = func_0x00f78af4();
      *(undefined8 *****)(puVar11 + -400) = ppppuVar29;
      *(undefined **)(puVar11 + -0x188) = &FlatBuffers_FlatBufferBuilder__PutFloat;
      lVar27 = *(long *)(lVar20 + 0x18);
      auVar8._8_8_ = lVar27;
      uVar5 = *(int *)(lVar20 + 0x10) - 4;
      uVar25 = (ulong)uVar5;
      auVar35._8_4_ = uVar5;
      auVar35._0_8_ = lVar27;
      auVar35._12_4_ = 0;
      *(uint *)(lVar20 + 0x10) = uVar5;
      if (lVar27 != 0) {
        puVar9 = puVar11 + -0x1b0;
        *(undefined8 *)(puVar11 + -0x1b0) = unaff_d9;
        *(undefined8 *)(puVar11 + -0x1a8) = unaff_d8;
        *(undefined8 *)(puVar11 + -0x1a0) = 0;
        *(ulong *)(puVar11 + -0x198) = uVar17;
        *(undefined8 *)(puVar11 + -400) = *(undefined8 *)(puVar11 + -400);
        *(undefined8 *)(puVar11 + -0x188) = *(undefined8 *)(puVar11 + -0x188);
        ppppuVar29 = (undefined8 ****)(puVar11 + -400);
        uVar26 = 4;
        puVar33 = &UNK_016ccba4;
        goto code_r0x016cc7a4;
      }
      lVar20 = func_0x00f78af4();
      *(undefined1 **)(puVar11 + -0x1a0) = puVar11 + -400;
      *(undefined **)(puVar11 + -0x198) = &FlatBuffers_FlatBufferBuilder__PutDouble;
      lVar27 = *(long *)(lVar20 + 0x18);
      auVar8._8_8_ = lVar27;
      uVar5 = *(int *)(lVar20 + 0x10) - 8;
      uVar25 = (ulong)uVar5;
      auVar35._8_4_ = uVar5;
      auVar35._0_8_ = lVar27;
      auVar35._12_4_ = 0;
      *(uint *)(lVar20 + 0x10) = uVar5;
      if (lVar27 != 0) goto code_r0x016cde70;
      auVar37 = func_0x00f78af4();
      *(undefined8 *)(puVar11 + -0x1c0) = 0;
      *(ulong *)(puVar11 + -0x1b8) = uVar17;
      *(undefined1 **)(puVar11 + -0x1b0) = puVar11 + -0x1a0;
      *(undefined **)(puVar11 + -0x1a8) = &FlatBuffers_FlatBufferBuilder__AddBool;
      pppuVar31 = (undefined8 ***)(puVar11 + -0x1b0);
      auVar36._8_8_ = 1;
      auVar36._0_8_ = auVar37._0_8_;
      uVar25 = 0;
      puVar33 = &UNK_016cde9c;
      puVar11 = puVar11 + -0x1c0;
      unaff_x22 = uVar28;
    } while( true );
  }
  puVar33 = &UNK_016ce3a4;
code_r0x016cda04:
  *(undefined8 ***)(puVar10 + -0x10) = ppuVar32;
  *(undefined **)(puVar10 + -8) = puVar33;
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar20 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar20 != 0)) {
    return (ulong)(uint)(*(int *)(lVar20 + 0x18) - *(int *)(param_1 + 0x10));
  }
  lVar20 = func_0x00f78af4();
  return (ulong)*(byte *)(lVar20 + 0x48);
code_r0x016cde70:
  puVar9 = puVar11 + -0x1c0;
  *(undefined8 *)(puVar11 + -0x1c0) = unaff_d9;
  *(undefined8 *)(puVar11 + -0x1b8) = unaff_d8;
  *(undefined8 *)(puVar11 + -0x1b0) = 0;
  *(ulong *)(puVar11 + -0x1a8) = uVar17;
  *(undefined8 *)(puVar11 + -0x1a0) = *(undefined8 *)(puVar11 + -0x1a0);
  *(undefined8 *)(puVar11 + -0x198) = *(undefined8 *)(puVar11 + -0x198);
  ppppuVar29 = (undefined8 ****)(puVar11 + -0x1a0);
  uVar26 = 8;
  puVar33 = &UNK_016ccc34;
code_r0x016cc7a4:
  do {
    puVar13 = puVar9 + -0x20;
    *(long *)(puVar9 + -0x20) = auVar8._8_8_;
    *(ulong *)(puVar9 + -0x18) = uVar25;
    *(undefined8 *****)(puVar9 + -0x10) = ppppuVar29;
    *(undefined **)(puVar9 + -8) = puVar33;
    puVar30 = puVar9 + -0x10;
    if (auVar35._8_4_ < 0) {
code_r0x016cc7d8:
      func_0x00f78a24(0x3d1fcf8);
      uVar25 = func_0x00f78aec();
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a4d0(uVar25,0);
      uVar19 = func_0x00f78a24(0x3d52ce8);
      func_0x00f78ac0(uVar25,uVar19);
      uVar18 = uVar26;
    }
    else {
      lVar20 = *(long *)(auVar35._0_8_ + 0x10);
      uVar18 = uVar26;
      if (lVar20 != 0) {
        if (auVar35._8_4_ <= *(int *)(lVar20 + 0x18) - (int)uVar26) {
          return auVar35._0_8_;
        }
        goto code_r0x016cc7d8;
      }
    }
    puVar33 = &FlatBuffers_ByteBuffer__PutSbyte;
    auVar35 = func_0x00f78af4();
code_r0x016cc810:
    puVar9 = puVar13 + -0x30;
    *(ulong *)(puVar13 + -0x30) = uVar28;
    *(undefined1 (*) [16])(puVar13 + -0x28) = auVar8;
    *(ulong *)(puVar13 + -0x18) = uVar25;
    *(undefined1 **)(puVar13 + -0x10) = puVar30;
    *(undefined **)(puVar13 + -8) = puVar33;
    ppppuVar29 = (undefined8 ****)(puVar13 + -0x10);
    uVar26 = 1;
    puVar33 = &UNK_016cc834;
    uVar25 = uVar18;
    auVar8 = auVar35;
  } while( true );
}



// ============================================================
// RVA: 0x166b3dc | Core.Services.FindPublicMatchRequest.AddMatchStartTimeout
// ============================================================

/* WARNING: Possible PIC construction at 0x016ce778: Changing call to branch */
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
/* WARNING: Possible PIC construction at 0x0166b4c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0166b584: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x0166b588) */
/* WARNING: Removing unreachable block (ram,0x016ce224) */
/* WARNING: Removing unreachable block (ram,0x0166b4c4) */
/* WARNING: Removing unreachable block (ram,0x0166b4d0) */
/* WARNING: Removing unreachable block (ram,0x0166b4d8) */
/* WARNING: Removing unreachable block (ram,0x0166b4f4) */
/* WARNING: Removing unreachable block (ram,0x0166b500) */
/* WARNING: Removing unreachable block (ram,0x0166b50c) */
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
/* WARNING: Removing unreachable block (ram,0x016ce77c) */
/* WARNING: Removing unreachable block (ram,0x016cde9c) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_FindPublicMatchRequest__AddMatchStartTimeout
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
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar19;
  int iVar18;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  long unaff_x19;
  undefined8 unaff_x20;
  ulong unaff_x21;
  ulong uVar23;
  ulong unaff_x22;
  ulong uVar24;
  undefined8 ******ppppppuVar25;
  undefined1 *puVar26;
  undefined *puVar27;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [12];
  undefined8 *****apppppuStack_d0 [4];
  undefined8 *****pppppuStack_90;
  undefined *puStack_88;
  
  if (param_1 != 0) {
    uVar19 = 1;
    puVar26 = &stack0xfffffffffffffff0;
    if ((param_2 == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    uVar21 = 0;
    puVar27 = &UNK_016ce77c;
    puVar9 = &stack0xffffffffffffffd0;
    uVar20 = 8;
    uVar23 = param_1;
    unaff_x21 = param_2;
    goto code_r0x016cdaac;
  }
  puVar26 = &stack0xfffffffffffffff0;
  auVar29 = func_0x00f78af4();
  uVar19 = auVar29._0_8_;
  if (uVar19 == 0) {
    uVar19 = func_0x00f78af4();
    if ((bRam0000000003eb58bf & 1) == 0) {
      func_0x00f78a20(0x3d3f088);
      bRam0000000003eb58bf = 1;
    }
    if (uVar19 != 0) {
      puVar26 = &stack0xffffffffffffffd0;
      if ((bRam0000000003eb5cd8 & 1) == 0) {
        func_0x00f78a20(0x3d1f100,0);
        bRam0000000003eb5cd8 = 1;
      }
      if (*(int *)(uVar19 + 0x30) < 0) {
        func_0x00f78a24(0x3d22a38);
        puVar27 = (undefined *)func_0x00f78aec();
        uVar14 = func_0x00f78a24(0x3d6cea8);
        /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(puVar27,uVar14);
        uVar14 = func_0x00f78a24(0x3d56a30);
        auVar30 = func_0x00f78ac0(puVar27,uVar14);
        pppppuStack_90 = (undefined8 ******)0x3eb5000;
        puVar26 = &stack0xffffffffffffff80;
        lVar16 = *(long *)(auVar30._0_8_ + 0x18);
        puStack_88 = puVar27;
        if ((lVar16 != 0) && (*(long *)(lVar16 + 0x10) != 0)) {
          uVar4 = *(int *)(*(long *)(lVar16 + 0x10) + 0x18) - auVar30._8_4_;
          uVar19 = (ulong)uVar4;
          auVar29._8_4_ = uVar4;
          auVar29._0_8_ = lVar16;
          auVar29._12_4_ = 0;
          puVar7 = &stack0xffffffffffffff10;
          apppppuStack_d0[3] = (undefined8 *****)&UNK_016cee20;
          ppppppuVar25 = apppppuStack_d0 + 2;
          auVar6._8_8_ = 4;
          auVar6._0_8_ = lVar16;
          uVar24 = 0x3d201a0;
          apppppuStack_d0[2] = (undefined8 *****)puVar26;
          if ((bRam0000000003eb5cd0 & 1) == 0) {
            func_0x00f78a20(0x3d201a0);
            bRam0000000003eb5cd0 = 1;
          }
          uVar20 = 4;
          puVar27 = &UNK_016cc68c;
          goto code_r0x016cc7a4;
        }
        func_0x00f78af4();
        uVar14 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&stack0xffffffffffffff5c,0);
        uVar15 = func_0x00f78a24(0x3d6ce88);
        uVar17 = func_0x00f78a24(0x3d66338);
        uVar14 = /*System.String$$Concat*/ func_0x029be39c(uVar15,uVar14,uVar17,0);
        func_0x00f78a24(0x3d22a38);
        uVar15 = func_0x00f78aec();
        auVar5._8_8_ = uVar15;
        auVar5._0_8_ = uVar14;
        uVar17 = 0;
        /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar15,uVar14);
        uVar14 = func_0x00f78a24(0x3d56a50);
        puVar27 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar29 = func_0x00f78ac0(uVar15,uVar14);
        puVar9 = &stack0xffffffffffffff50;
        while( true ) {
          auVar6 = auVar29;
          uVar19 = auVar6._0_8_;
          *(long *)(puVar9 + -0x20) = auVar5._8_8_;
          *(long *)(puVar9 + -0x18) = auVar5._0_8_;
          *(undefined1 **)(puVar9 + -0x10) = puVar26;
          *(undefined **)(puVar9 + -8) = puVar27;
          puVar26 = puVar9 + -0x10;
          uVar4 = *(uint *)(uVar19 + 0x20);
          uVar20 = (ulong)uVar4;
          param_1 = uVar19;
          if ((int)uVar17 == 0) {
            param_1 = 0;
            uVar4 = 0;
          }
          uVar23 = auVar6._8_8_;
          if ((int)uVar17 == 0) {
            uVar21 = 4;
            puVar27 = &UNK_016cef64;
            puVar9 = puVar9 + -0x20;
            param_1 = uVar19;
            goto code_r0x016cdaac;
          }
          if (param_1 != 0) break;
          puVar27 = &FlatBuffers_FlatBufferBuilder__Finish;
          auVar29 = func_0x00f78af4();
          uVar17 = 0;
          puVar9 = puVar9 + -0x20;
          auVar5 = auVar6;
        }
        uVar21 = 8;
        puVar27 = &UNK_016cef10;
        puVar9 = puVar9 + -0x20;
        uVar20 = (ulong)uVar4;
      }
      else {
        uVar21 = 0;
        puVar27 = &UNK_016cea78;
        puVar9 = &stack0xffffffffffffff90;
        param_1 = uVar19;
        uVar20 = 4;
        uVar23 = 0x3eb5000;
      }
      goto code_r0x016cdaac;
    }
    lVar16 = func_0x00f78af4();
    if (lVar16 == 0) {
      auVar28 = func_0x00f78af4();
      lVar16 = auVar28._0_8_;
      if ((auVar28._8_8_ == 0) || (lVar16 == 0)) {
        auVar28 = func_0x00f78af4();
        lVar22 = auVar28._8_8_;
        lVar16 = auVar28._0_8_;
        puVar9 = &stack0xffffffffffffff50;
        puStack_88 = &Core_Services_FindPublicMatchRequest__CreatePropertiesVectorBlock;
        ppppppuVar25 = &pppppuStack_90;
        unaff_x21 = 0x3eb5000;
        pppppuStack_90 = (undefined8 *****)&stack0xffffffffffffffa0;
        if ((bRam0000000003eb58be & 1) == 0) {
          func_0x00f78a20(0x3d569c8);
          bRam0000000003eb58be = 1;
        }
        if ((lVar22 == 0) || (lVar16 == 0)) {
          puVar27 = &Core_Services_FindPublicMatchRequest__StartPropertiesVector;
          auVar30 = func_0x00f78af4();
          iVar18 = auVar30._8_4_;
          auVar28._8_8_ = lVar22;
          auVar28._0_8_ = auVar30._0_8_;
          if (auVar30._0_8_ == 0) {
            apppppuStack_d0[3] =
                 (undefined8 *****)&Core_Services_FindPublicMatchRequest__StartPropertiesVector;
            apppppuStack_d0[2] = ppppppuVar25;
            lVar16 = func_0x00f78af4();
            return *(ulong *)(lVar16 + 8);
          }
        }
        else {
          unaff_x21 = 0x3d56000;
          iVar18 = *(int *)(lVar22 + 0x18);
          puVar27 = &UNK_0166b588;
          puVar9 = &stack0xffffffffffffff50;
        }
      }
      else {
        iVar18 = *(int *)(auVar28._8_8_ + 0x18);
        puVar27 = &UNK_0166b4c4;
        puVar9 = &stack0xffffffffffffff80;
        ppppppuVar25 = (undefined8 ******)&stack0xffffffffffffffa0;
      }
      param_1 = auVar28._0_8_;
      *(ulong *)(puVar9 + -0x30) = unaff_x22;
      *(ulong *)(puVar9 + -0x28) = unaff_x21;
      *(long *)(puVar9 + -0x20) = auVar28._8_8_;
      *(long *)(puVar9 + -0x18) = lVar16;
      *(undefined8 *******)(puVar9 + -0x10) = ppppppuVar25;
      *(undefined **)(puVar9 + -8) = puVar27;
      puVar26 = puVar9 + -0x10;
      uVar19 = 4;
      unaff_x21 = 4;
      /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4();
      *(int *)(param_1 + 0x44) = iVar18;
      uVar21 = (ulong)(uint)(iVar18 * 4);
      uVar20 = 4;
      puVar27 = &UNK_016ce188;
      puVar9 = puVar9 + -0x30;
      uVar23 = uVar21;
      unaff_x22 = param_1;
      goto code_r0x016cdaac;
    }
    puVar8 = &stack0xffffffffffffff90;
    puVar12 = &stack0xffffffffffffff90;
    puVar26 = &stack0xffffffffffffffb0;
    unaff_x20 = 2;
    uVar23 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100,2,0);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar16);
    if (*(long *)(lVar16 + 0x28) != 0) {
      if (*(int *)(*(long *)(lVar16 + 0x28) + 0x18) < 2) {
        uVar14 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,2);
        *(undefined8 *)(lVar16 + 0x28) = uVar14;
      }
      *(undefined4 *)(lVar16 + 0x30) = 2;
      puVar27 = &UNK_016ce320;
      goto code_r0x016cda04;
    }
    puVar27 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar30 = func_0x00f78af4();
    unaff_x19 = lVar16;
  }
  else {
    param_4 = 0;
    puVar27 = &Core_Services_FindPublicMatchRequest__AddProperties;
    auVar30._8_4_ = 0;
    auVar30._0_8_ = uVar19;
    if ((auVar29._8_4_ == 0) && (*(char *)(uVar19 + 0x48) == '\0')) {
      return uVar19;
    }
    /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(uVar19,auVar29._8_8_,auVar29._8_8_,0,0);
    puVar12 = &stack0xfffffffffffffff0;
    uVar23 = unaff_x21;
  }
  lVar16 = auVar30._0_8_;
  puVar8 = puVar12 + -0x20;
  *(undefined8 *)(puVar12 + -0x20) = unaff_x20;
  *(long *)(puVar12 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar12 + -0x10) = puVar26;
  *(undefined **)(puVar12 + -8) = puVar27;
  puVar26 = puVar12 + -0x10;
  if (auVar30._8_4_ < *(int *)(lVar16 + 0x30)) {
    puVar27 = &UNK_016ce3a4;
code_r0x016cda04:
    *(undefined1 **)(puVar8 + -0x10) = puVar26;
    *(undefined **)(puVar8 + -8) = puVar27;
    if ((*(long *)(lVar16 + 0x18) != 0) &&
       (lVar22 = *(long *)(*(long *)(lVar16 + 0x18) + 0x10), lVar22 != 0)) {
      return (ulong)(uint)(*(int *)(lVar22 + 0x18) - *(int *)(lVar16 + 0x10));
    }
    lVar16 = func_0x00f78af4();
    return (ulong)*(byte *)(lVar16 + 0x48);
  }
  func_0x00f78a24(0x3d22738);
  uVar14 = func_0x00f78aec();
  uVar15 = func_0x00f78a24(0x3d6ceb8);
  unaff_x21 = 0;
  /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar14,uVar15);
  uVar15 = func_0x00f78a24(0x3d56a58);
  func_0x00f78ac0(uVar14,uVar15);
  func_0x00f78af4();
  uVar15 = func_0x00f78b24();
  auVar29 = func_0x00f78ac0(uVar15,0);
  uVar19 = auVar29._8_8_;
  param_1 = auVar29._0_8_;
  *(ulong *)(puVar12 + -0x50) = unaff_x22;
  *(ulong *)(puVar12 + -0x48) = uVar23;
  *(undefined8 *)(puVar12 + -0x40) = unaff_x20;
  *(undefined8 *)(puVar12 + -0x38) = uVar14;
  *(undefined1 **)(puVar12 + -0x30) = puVar26;
  *(undefined **)(puVar12 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
  puVar26 = puVar12 + -0x30;
  if (((int)unaff_x21 == param_4) && (*(char *)(param_1 + 0x48) == '\0')) {
    return param_1;
  }
  uVar21 = 0;
  puVar27 = &UNK_016ce46c;
  puVar9 = puVar12 + -0x50;
  uVar20 = 1;
  uVar23 = param_1;
code_r0x016cdaac:
  do {
    puVar7 = puVar9 + -0x30;
    *(ulong *)(puVar9 + -0x30) = unaff_x22;
    *(ulong *)(puVar9 + -0x28) = unaff_x21;
    *(ulong *)(puVar9 + -0x20) = uVar23;
    *(ulong *)(puVar9 + -0x18) = uVar19;
    *(undefined1 **)(puVar9 + -0x10) = puVar26;
    *(undefined **)(puVar9 + -8) = puVar27;
    iVar18 = (int)uVar20;
    if (*(int *)(param_1 + 0x20) < iVar18) {
      *(int *)(param_1 + 0x20) = iVar18;
    }
    uVar20 = uVar23;
    uVar24 = unaff_x22;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar16 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar16 != 0)) {
      uVar2 = *(uint *)(lVar16 + 0x18);
      iVar3 = *(int *)(param_1 + 0x10);
      uVar1 = iVar3 - (uVar2 + (int)uVar21) & iVar18 - 1U;
      uVar20 = CONCAT44(0,uVar1);
      uVar4 = (int)uVar21 + iVar18 + uVar1;
      uVar24 = (ulong)uVar4;
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
      uVar23 = *(ulong *)(puVar9 + -0x20);
      uVar19 = *(ulong *)(puVar9 + -0x18);
      unaff_x22 = *(ulong *)(puVar9 + -0x30);
      unaff_x21 = *(ulong *)(puVar9 + -0x28);
      *(undefined8 *)(puVar9 + -0x10) = *(undefined8 *)(puVar9 + -0x10);
      *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
      lVar16 = *(long *)(param_1 + 0x18);
      auVar6._8_8_ = lVar16;
      auVar6._0_8_ = uVar20;
      uVar1 = *(int *)(param_1 + 0x10) - uVar1;
      uVar24 = (ulong)uVar1;
      auVar29._8_4_ = uVar1;
      auVar29._0_8_ = lVar16;
      auVar29._12_4_ = 0;
      *(uint *)(param_1 + 0x10) = uVar1;
      if (lVar16 != 0) {
        *(ulong *)(puVar9 + -0x30) = unaff_x22;
        *(ulong *)(puVar9 + -0x28) = unaff_x21;
        *(ulong *)(puVar9 + -0x20) = uVar23;
        *(ulong *)(puVar9 + -0x18) = uVar19;
        *(undefined8 *)(puVar9 + -0x10) = *(undefined8 *)(puVar9 + -0x10);
        *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
        ppppppuVar25 = (undefined8 ******)(puVar9 + -0x10);
        puVar27 = &UNK_016cc908;
        uVar19 = 0;
        goto code_r0x016cc7a4;
      }
      lVar16 = func_0x00f78af4();
      puVar26 = puVar9 + -0x20;
      *(undefined1 **)(puVar9 + -0x20) = puVar9 + -0x10;
      *(undefined **)(puVar9 + -0x18) = &FlatBuffers_FlatBufferBuilder__GrowBuffer;
      if ((*(long *)(lVar16 + 0x18) != 0) &&
         (plVar13 = *(long **)(*(long *)(lVar16 + 0x18) + 0x10), plVar13 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016cdaa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar19 = (**(code **)(*plVar13 + 0x178))
                           (plVar13,(int)plVar13[3] << 1,*(undefined8 *)(*plVar13 + 0x180));
        return uVar19;
      }
      puVar27 = &FlatBuffers_FlatBufferBuilder__Prep;
      auVar29 = func_0x00f78af4();
      uVar20 = auVar29._8_8_;
      param_1 = auVar29._0_8_;
      puVar9 = puVar9 + -0x20;
      goto code_r0x016cdaac;
    }
code_r0x016cdb68:
    auVar6._8_8_ = uVar20;
    auVar6._0_8_ = unaff_x21;
    auVar29 = func_0x00f78af4();
    uVar19 = auVar29._8_8_;
    lVar22 = auVar29._0_8_;
    *(undefined1 **)(puVar9 + -0x40) = puVar9 + -0x10;
    *(undefined **)(puVar9 + -0x38) = &FlatBuffers_FlatBufferBuilder__PutBool;
    lVar16 = *(long *)(lVar22 + 0x18);
    iVar18 = *(int *)(lVar22 + 0x10) + -1;
    *(int *)(lVar22 + 0x10) = iVar18;
    if (lVar16 != 0) {
      puVar10 = puVar9 + -0x30;
      uVar14 = *(undefined8 *)(puVar9 + -0x40);
      uVar15 = *(undefined8 *)(puVar9 + -0x38);
FlatBuffers_ByteBuffer__PutByte:
      auVar6._8_4_ = iVar18;
      auVar6._0_8_ = lVar16;
      auVar6._12_4_ = 0;
      auVar29._8_4_ = iVar18;
      auVar29._0_8_ = lVar16;
      auVar29._12_4_ = 0;
      puVar7 = puVar10 + -0x30;
      *(ulong *)(puVar10 + -0x30) = uVar24;
      *(ulong *)(puVar10 + -0x28) = unaff_x21;
      *(ulong *)(puVar10 + -0x20) = uVar20;
      *(ulong *)(puVar10 + -0x18) = param_1;
      *(undefined8 *)(puVar10 + -0x10) = uVar14;
      *(undefined8 *)(puVar10 + -8) = uVar15;
      ppppppuVar25 = (undefined8 ******)(puVar10 + -0x10);
      uVar20 = 1;
      puVar27 = &UNK_016cc89c;
      goto code_r0x016cc7a4;
    }
    auVar29 = func_0x00f78af4();
    uVar23 = auVar29._8_8_;
    lVar16 = auVar29._0_8_;
    *(undefined1 **)(puVar9 + -0x50) = puVar9 + -0x40;
    *(undefined **)(puVar9 + -0x48) = &FlatBuffers_FlatBufferBuilder__PutSbyte;
    iVar18 = *(int *)(lVar16 + 0x10) + -1;
    auVar29._8_4_ = iVar18;
    auVar29._0_8_ = *(long *)(lVar16 + 0x18);
    auVar29._12_4_ = 0;
    *(int *)(lVar16 + 0x10) = iVar18;
    if (*(long *)(lVar16 + 0x18) != 0) {
      puVar11 = puVar9 + -0x40;
      puVar26 = *(undefined1 **)(puVar9 + -0x50);
      puVar27 = *(undefined **)(puVar9 + -0x48);
      uVar19 = param_1;
      goto code_r0x016cc810;
    }
    auVar29 = func_0x00f78af4();
    uVar19 = auVar29._8_8_;
    lVar22 = auVar29._0_8_;
    *(undefined1 **)(puVar9 + -0x60) = puVar9 + -0x50;
    *(undefined **)(puVar9 + -0x58) = &FlatBuffers_FlatBufferBuilder__PutByte;
    lVar16 = *(long *)(lVar22 + 0x18);
    iVar18 = *(int *)(lVar22 + 0x10) + -1;
    *(int *)(lVar22 + 0x10) = iVar18;
    if (lVar16 != 0) {
      puVar10 = puVar9 + -0x50;
      uVar14 = *(undefined8 *)(puVar9 + -0x60);
      uVar15 = *(undefined8 *)(puVar9 + -0x58);
      goto FlatBuffers_ByteBuffer__PutByte;
    }
    auVar29 = func_0x00f78af4();
    uVar19 = auVar29._8_8_;
    lVar16 = auVar29._0_8_;
    puVar7 = puVar9 + -0x90;
    *(ulong *)(puVar9 + -0x90) = uVar24;
    *(ulong *)(puVar9 + -0x88) = unaff_x21;
    *(ulong *)(puVar9 + -0x80) = uVar20;
    *(ulong *)(puVar9 + -0x78) = param_1;
    *(undefined1 **)(puVar9 + -0x70) = puVar9 + -0x60;
    *(undefined **)(puVar9 + -0x68) = &FlatBuffers_FlatBufferBuilder__PutShort;
    ppppppuVar25 = (undefined8 ******)(puVar9 + -0x70);
    lVar22 = *(long *)(lVar16 + 0x18);
    uVar4 = *(int *)(lVar16 + 0x10) - 2;
    auVar6._8_8_ = lVar22;
    auVar6._0_8_ = CONCAT44(0,uVar4);
    auVar29._8_4_ = uVar4;
    auVar29._0_8_ = lVar22;
    auVar29._12_4_ = 0;
    *(uint *)(lVar16 + 0x10) = uVar4;
    if (lVar22 != 0) {
      uVar20 = 2;
      puVar27 = &UNK_016cdc34;
      goto code_r0x016cc7a4;
    }
    auVar29 = func_0x00f78af4();
    uVar19 = auVar29._8_8_;
    lVar16 = auVar29._0_8_;
    puVar7 = puVar9 + -0xc0;
    *(ulong *)(puVar9 + -0xc0) = uVar24;
    *(ulong *)(puVar9 + -0xb8) = CONCAT44(0,uVar4);
    *(undefined8 *)(puVar9 + -0xb0) = 0;
    *(ulong *)(puVar9 + -0xa8) = param_1;
    *(undefined8 *******)(puVar9 + -0xa0) = ppppppuVar25;
    *(undefined **)(puVar9 + -0x98) = &FlatBuffers_FlatBufferBuilder__PutUshort;
    ppppppuVar25 = (undefined8 ******)(puVar9 + -0xa0);
    lVar22 = *(long *)(lVar16 + 0x18);
    uVar4 = *(int *)(lVar16 + 0x10) - 2;
    auVar6._8_8_ = lVar22;
    auVar6._0_8_ = CONCAT44(0,uVar4);
    auVar29._8_4_ = uVar4;
    auVar29._0_8_ = lVar22;
    auVar29._12_4_ = 0;
    *(uint *)(lVar16 + 0x10) = uVar4;
    if (lVar22 != 0) {
      uVar20 = 2;
      puVar27 = &UNK_016cdc90;
      goto code_r0x016cc7a4;
    }
    auVar29 = func_0x00f78af4();
    uVar19 = auVar29._8_8_;
    lVar16 = auVar29._0_8_;
    puVar7 = puVar9 + -0xf0;
    *(ulong *)(puVar9 + -0xf0) = uVar24;
    *(ulong *)(puVar9 + -0xe8) = CONCAT44(0,uVar4);
    *(undefined8 *)(puVar9 + -0xe0) = 0;
    *(ulong *)(puVar9 + -0xd8) = param_1;
    *(undefined8 *******)(puVar9 + -0xd0) = ppppppuVar25;
    *(undefined **)(puVar9 + -200) = &FlatBuffers_FlatBufferBuilder__PutInt;
    ppppppuVar25 = (undefined8 ******)(puVar9 + -0xd0);
    lVar22 = *(long *)(lVar16 + 0x18);
    uVar4 = *(int *)(lVar16 + 0x10) - 4;
    auVar6._8_8_ = lVar22;
    auVar6._0_8_ = CONCAT44(0,uVar4);
    auVar29._8_4_ = uVar4;
    auVar29._0_8_ = lVar22;
    auVar29._12_4_ = 0;
    *(uint *)(lVar16 + 0x10) = uVar4;
    if (lVar22 != 0) {
      uVar20 = 4;
      puVar27 = &UNK_016cdcec;
      goto code_r0x016cc7a4;
    }
    auVar29 = func_0x00f78af4();
    uVar19 = auVar29._8_8_;
    lVar16 = auVar29._0_8_;
    puVar7 = puVar9 + -0x120;
    *(ulong *)(puVar9 + -0x120) = uVar24;
    *(ulong *)(puVar9 + -0x118) = CONCAT44(0,uVar4);
    *(undefined8 *)(puVar9 + -0x110) = 0;
    *(ulong *)(puVar9 + -0x108) = param_1;
    *(undefined8 *******)(puVar9 + -0x100) = ppppppuVar25;
    *(undefined **)(puVar9 + -0xf8) = &FlatBuffers_FlatBufferBuilder__PutUint;
    ppppppuVar25 = (undefined8 ******)(puVar9 + -0x100);
    lVar22 = *(long *)(lVar16 + 0x18);
    uVar4 = *(int *)(lVar16 + 0x10) - 4;
    auVar6._8_8_ = lVar22;
    auVar6._0_8_ = CONCAT44(0,uVar4);
    auVar29._8_4_ = uVar4;
    auVar29._0_8_ = lVar22;
    auVar29._12_4_ = 0;
    *(uint *)(lVar16 + 0x10) = uVar4;
    if (lVar22 != 0) {
      uVar20 = 4;
      puVar27 = &UNK_016cdd48;
      goto code_r0x016cc7a4;
    }
    auVar29 = func_0x00f78af4();
    uVar19 = auVar29._8_8_;
    lVar16 = auVar29._0_8_;
    puVar7 = puVar9 + -0x150;
    *(ulong *)(puVar9 + -0x150) = uVar24;
    *(ulong *)(puVar9 + -0x148) = CONCAT44(0,uVar4);
    *(undefined8 *)(puVar9 + -0x140) = 0;
    *(ulong *)(puVar9 + -0x138) = param_1;
    *(undefined8 *******)(puVar9 + -0x130) = ppppppuVar25;
    *(undefined **)(puVar9 + -0x128) = &FlatBuffers_FlatBufferBuilder__PutLong;
    ppppppuVar25 = (undefined8 ******)(puVar9 + -0x130);
    lVar22 = *(long *)(lVar16 + 0x18);
    uVar4 = *(int *)(lVar16 + 0x10) - 8;
    auVar6._8_8_ = lVar22;
    auVar6._0_8_ = CONCAT44(0,uVar4);
    auVar29._8_4_ = uVar4;
    auVar29._0_8_ = lVar22;
    auVar29._12_4_ = 0;
    *(uint *)(lVar16 + 0x10) = uVar4;
    if (lVar22 != 0) {
      uVar20 = 8;
      puVar27 = &UNK_016cdda4;
      goto code_r0x016cc7a4;
    }
    auVar29 = func_0x00f78af4();
    uVar19 = auVar29._8_8_;
    lVar16 = auVar29._0_8_;
    puVar7 = puVar9 + -0x180;
    *(ulong *)(puVar9 + -0x180) = uVar24;
    *(ulong *)(puVar9 + -0x178) = CONCAT44(0,uVar4);
    *(undefined8 *)(puVar9 + -0x170) = 0;
    *(ulong *)(puVar9 + -0x168) = param_1;
    *(undefined8 *******)(puVar9 + -0x160) = ppppppuVar25;
    *(undefined **)(puVar9 + -0x158) = &FlatBuffers_FlatBufferBuilder__PutUlong;
    ppppppuVar25 = (undefined8 ******)(puVar9 + -0x160);
    lVar22 = *(long *)(lVar16 + 0x18);
    uVar4 = *(int *)(lVar16 + 0x10) - 8;
    unaff_x21 = CONCAT44(0,uVar4);
    auVar6._8_8_ = lVar22;
    auVar6._0_8_ = unaff_x21;
    auVar29._8_4_ = uVar4;
    auVar29._0_8_ = lVar22;
    auVar29._12_4_ = 0;
    *(uint *)(lVar16 + 0x10) = uVar4;
    if (lVar22 != 0) {
      uVar20 = 8;
      puVar27 = &UNK_016cde00;
      goto code_r0x016cc7a4;
    }
    lVar16 = func_0x00f78af4();
    *(undefined8 *******)(puVar9 + -400) = ppppppuVar25;
    *(undefined **)(puVar9 + -0x188) = &FlatBuffers_FlatBufferBuilder__PutFloat;
    lVar22 = *(long *)(lVar16 + 0x18);
    auVar6._8_8_ = lVar22;
    uVar4 = *(int *)(lVar16 + 0x10) - 4;
    uVar19 = (ulong)uVar4;
    auVar29._8_4_ = uVar4;
    auVar29._0_8_ = lVar22;
    auVar29._12_4_ = 0;
    *(uint *)(lVar16 + 0x10) = uVar4;
    if (lVar22 != 0) {
      puVar7 = puVar9 + -0x1b0;
      *(undefined8 *)(puVar9 + -0x1b0) = unaff_d9;
      *(undefined8 *)(puVar9 + -0x1a8) = unaff_d8;
      *(undefined8 *)(puVar9 + -0x1a0) = 0;
      *(ulong *)(puVar9 + -0x198) = param_1;
      *(undefined8 *)(puVar9 + -400) = *(undefined8 *)(puVar9 + -400);
      *(undefined8 *)(puVar9 + -0x188) = *(undefined8 *)(puVar9 + -0x188);
      ppppppuVar25 = (undefined8 ******)(puVar9 + -400);
      uVar20 = 4;
      puVar27 = &UNK_016ccba4;
      goto code_r0x016cc7a4;
    }
    lVar16 = func_0x00f78af4();
    *(undefined1 **)(puVar9 + -0x1a0) = puVar9 + -400;
    *(undefined **)(puVar9 + -0x198) = &FlatBuffers_FlatBufferBuilder__PutDouble;
    lVar22 = *(long *)(lVar16 + 0x18);
    auVar6._8_8_ = lVar22;
    uVar4 = *(int *)(lVar16 + 0x10) - 8;
    uVar19 = (ulong)uVar4;
    auVar29._8_4_ = uVar4;
    auVar29._0_8_ = lVar22;
    auVar29._12_4_ = 0;
    *(uint *)(lVar16 + 0x10) = uVar4;
    if (lVar22 != 0) break;
    auVar29 = func_0x00f78af4();
    uVar19 = auVar29._8_8_;
    uVar23 = auVar29._0_8_;
    *(undefined8 *)(puVar9 + -0x1c0) = 0;
    *(ulong *)(puVar9 + -0x1b8) = param_1;
    *(undefined1 **)(puVar9 + -0x1b0) = puVar9 + -0x1a0;
    *(undefined **)(puVar9 + -0x1a8) = &FlatBuffers_FlatBufferBuilder__AddBool;
    puVar26 = puVar9 + -0x1b0;
    uVar20 = 1;
    uVar21 = 0;
    puVar27 = &UNK_016cde9c;
    puVar9 = puVar9 + -0x1c0;
    param_1 = uVar23;
    unaff_x22 = uVar24;
  } while( true );
  puVar7 = puVar9 + -0x1c0;
  *(undefined8 *)(puVar9 + -0x1c0) = unaff_d9;
  *(undefined8 *)(puVar9 + -0x1b8) = unaff_d8;
  *(undefined8 *)(puVar9 + -0x1b0) = 0;
  *(ulong *)(puVar9 + -0x1a8) = param_1;
  *(undefined8 *)(puVar9 + -0x1a0) = *(undefined8 *)(puVar9 + -0x1a0);
  *(undefined8 *)(puVar9 + -0x198) = *(undefined8 *)(puVar9 + -0x198);
  ppppppuVar25 = (undefined8 ******)(puVar9 + -0x1a0);
  uVar20 = 8;
  puVar27 = &UNK_016ccc34;
code_r0x016cc7a4:
  do {
    puVar11 = puVar7 + -0x20;
    *(long *)(puVar7 + -0x20) = auVar6._8_8_;
    *(ulong *)(puVar7 + -0x18) = uVar19;
    *(undefined8 *******)(puVar7 + -0x10) = ppppppuVar25;
    *(undefined **)(puVar7 + -8) = puVar27;
    puVar26 = puVar7 + -0x10;
    if (auVar29._8_4_ < 0) {
code_r0x016cc7d8:
      func_0x00f78a24(0x3d1fcf8);
      uVar19 = func_0x00f78aec();
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a4d0(uVar19,0);
      uVar14 = func_0x00f78a24(0x3d52ce8);
      func_0x00f78ac0(uVar19,uVar14);
      uVar23 = uVar20;
    }
    else {
      lVar16 = *(long *)(auVar29._0_8_ + 0x10);
      uVar23 = uVar20;
      if (lVar16 != 0) {
        if (auVar29._8_4_ <= *(int *)(lVar16 + 0x18) - (int)uVar20) {
          return auVar29._0_8_;
        }
        goto code_r0x016cc7d8;
      }
    }
    puVar27 = &FlatBuffers_ByteBuffer__PutSbyte;
    auVar29 = func_0x00f78af4();
code_r0x016cc810:
    puVar7 = puVar11 + -0x30;
    *(ulong *)(puVar11 + -0x30) = uVar24;
    *(undefined1 (*) [16])(puVar11 + -0x28) = auVar6;
    *(ulong *)(puVar11 + -0x18) = uVar19;
    *(undefined1 **)(puVar11 + -0x10) = puVar26;
    *(undefined **)(puVar11 + -8) = puVar27;
    ppppppuVar25 = (undefined8 ******)(puVar11 + -0x10);
    uVar20 = 1;
    puVar27 = &UNK_016cc834;
    uVar19 = uVar23;
    auVar6 = auVar29;
  } while( true );
}



// ============================================================
// RVA: 0x166b400 | Core.Services.FindPublicMatchRequest.AddProperties
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
/* WARNING: Possible PIC construction at 0x0166b4c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0166b584: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x0166b588) */
/* WARNING: Removing unreachable block (ram,0x016ce224) */
/* WARNING: Removing unreachable block (ram,0x0166b4c4) */
/* WARNING: Removing unreachable block (ram,0x0166b4d0) */
/* WARNING: Removing unreachable block (ram,0x0166b4d8) */
/* WARNING: Removing unreachable block (ram,0x0166b4f4) */
/* WARNING: Removing unreachable block (ram,0x0166b500) */
/* WARNING: Removing unreachable block (ram,0x0166b50c) */
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

ulong Core_Services_FindPublicMatchRequest__AddProperties
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
  undefined8 uVar21;
  int iVar22;
  ulong uVar23;
  ulong unaff_x19;
  undefined8 unaff_x20;
  ulong uVar24;
  long lVar25;
  ulong unaff_x21;
  ulong unaff_x22;
  undefined1 *unaff_x29;
  undefined8 ****ppppuVar26;
  undefined1 *puVar27;
  undefined8 ***pppuVar28;
  undefined *unaff_x30;
  undefined *puVar29;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [12];
  long alStack_c0 [2];
  undefined8 ***apppuStack_b0 [2];
  undefined8 ***pppuStack_80;
  undefined *puStack_78;
  
  if (param_1 == 0) {
    lVar14 = func_0x00f78af4();
    if ((bRam0000000003eb58bf & 1) == 0) {
      func_0x00f78a20(0x3d3f088);
      bRam0000000003eb58bf = 1;
    }
    if (lVar14 != 0) {
      pppuVar28 = (undefined8 ***)&stack0xffffffffffffffe0;
      auVar33._8_8_ = lVar14;
      auVar33._0_8_ = 0x3eb5000;
      if ((bRam0000000003eb5cd8 & 1) == 0) {
        func_0x00f78a20(0x3d1f100,0);
        bRam0000000003eb5cd8 = 1;
      }
      if (*(int *)(lVar14 + 0x30) < 0) {
        func_0x00f78a24(0x3d22a38);
        puVar29 = (undefined *)func_0x00f78aec();
        uVar19 = func_0x00f78a24(0x3d6cea8);
        /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(puVar29,uVar19);
        uVar19 = func_0x00f78a24(0x3d56a30);
        auVar34 = func_0x00f78ac0(puVar29,uVar19);
        pppuStack_80 = (undefined8 ****)0x3eb5000;
        pppuVar28 = (undefined8 ***)&stack0xffffffffffffff90;
        lVar14 = *(long *)(auVar34._0_8_ + 0x18);
        puStack_78 = puVar29;
        if ((lVar14 != 0) && (*(long *)(lVar14 + 0x10) != 0)) {
          uVar5 = *(int *)(*(long *)(lVar14 + 0x10) + 0x18) - auVar34._8_4_;
          uVar23 = (ulong)uVar5;
          auVar31._8_4_ = uVar5;
          auVar31._0_8_ = lVar14;
          auVar31._12_4_ = 0;
          puVar9 = &stack0xffffffffffffff20;
          apppuStack_b0[1] = (undefined8 ***)&UNK_016cee20;
          ppppuVar26 = apppuStack_b0;
          auVar8._8_8_ = 4;
          auVar8._0_8_ = lVar14;
          uVar15 = 0x3d201a0;
          apppuStack_b0[0] = pppuVar28;
          if ((bRam0000000003eb5cd0 & 1) == 0) {
            func_0x00f78a20(0x3d201a0);
            bRam0000000003eb5cd0 = 1;
          }
          uVar24 = 4;
          puVar29 = &UNK_016cc68c;
          goto code_r0x016cc7a4;
        }
        func_0x00f78af4();
        uVar19 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&stack0xffffffffffffff6c,0);
        uVar20 = func_0x00f78a24(0x3d6ce88);
        uVar21 = func_0x00f78a24(0x3d66338);
        lVar14 = /*System.String$$Concat*/ func_0x029be39c(uVar20,uVar19,uVar21,0);
        func_0x00f78a24(0x3d22a38);
        uVar19 = func_0x00f78aec();
        uVar21 = 0;
        /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar19,lVar14);
        uVar20 = func_0x00f78a24(0x3d56a50);
        puVar29 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar33 = func_0x00f78ac0(uVar19,uVar20);
        puVar11 = &stack0xffffffffffffff60;
        while( true ) {
          uVar20 = auVar33._8_8_;
          lVar25 = auVar33._0_8_;
          auVar33._8_8_ = lVar25;
          auVar33._0_8_ = uVar20;
          auVar7._8_8_ = lVar25;
          auVar7._0_8_ = uVar20;
          *(undefined8 *)(puVar11 + -0x20) = uVar19;
          *(long *)(puVar11 + -0x18) = lVar14;
          *(undefined8 ****)(puVar11 + -0x10) = pppuVar28;
          *(undefined **)(puVar11 + -8) = puVar29;
          pppuVar28 = (undefined8 ***)(puVar11 + -0x10);
          uVar4 = *(undefined4 *)(lVar25 + 0x20);
          auVar32._8_4_ = uVar4;
          auVar32._0_8_ = lVar25;
          auVar32._12_4_ = 0;
          lVar14 = lVar25;
          if ((int)uVar21 == 0) {
            lVar14 = 0;
            uVar4 = 0;
          }
          auVar6._8_4_ = uVar4;
          auVar6._0_8_ = lVar14;
          auVar6._12_4_ = 0;
          if ((int)uVar21 == 0) {
            uVar23 = 4;
            puVar29 = &UNK_016cef64;
            puVar11 = puVar11 + -0x20;
            goto code_r0x016cdaac;
          }
          if (lVar14 != 0) break;
          puVar29 = &FlatBuffers_FlatBufferBuilder__Finish;
          auVar33 = func_0x00f78af4();
          uVar21 = 0;
          puVar11 = puVar11 + -0x20;
          lVar14 = lVar25;
          uVar19 = uVar20;
        }
        uVar23 = 8;
        puVar29 = &UNK_016cef10;
        puVar11 = puVar11 + -0x20;
        auVar32 = auVar6;
        auVar33 = auVar7;
      }
      else {
        auVar32._8_8_ = 4;
        auVar32._0_8_ = lVar14;
        uVar23 = 0;
        puVar29 = &UNK_016cea78;
        puVar11 = &stack0xffffffffffffffa0;
      }
      goto code_r0x016cdaac;
    }
    uVar15 = func_0x00f78af4();
    if (uVar15 == 0) {
      auVar30 = func_0x00f78af4();
      lVar14 = auVar30._0_8_;
      if ((auVar30._8_8_ == 0) || (lVar14 == 0)) {
        auVar30 = func_0x00f78af4();
        lVar25 = auVar30._8_8_;
        lVar14 = auVar30._0_8_;
        puVar11 = &stack0xffffffffffffff60;
        puStack_78 = &Core_Services_FindPublicMatchRequest__CreatePropertiesVectorBlock;
        ppppuVar26 = &pppuStack_80;
        unaff_x21 = 0x3eb5000;
        pppuStack_80 = (undefined8 ***)&stack0xffffffffffffffb0;
        if ((bRam0000000003eb58be & 1) == 0) {
          func_0x00f78a20(0x3d569c8);
          bRam0000000003eb58be = 1;
        }
        if ((lVar25 == 0) || (lVar14 == 0)) {
          puVar29 = &Core_Services_FindPublicMatchRequest__StartPropertiesVector;
          auVar34 = func_0x00f78af4();
          iVar22 = auVar34._8_4_;
          auVar30._8_8_ = lVar25;
          auVar30._0_8_ = auVar34._0_8_;
          if (auVar34._0_8_ == 0) {
            apppuStack_b0[1] =
                 (undefined8 ***)&Core_Services_FindPublicMatchRequest__StartPropertiesVector;
            apppuStack_b0[0] = ppppuVar26;
            lVar14 = func_0x00f78af4();
            return *(ulong *)(lVar14 + 8);
          }
        }
        else {
          unaff_x21 = 0x3d56000;
          iVar22 = *(int *)(lVar25 + 0x18);
          puVar29 = &UNK_0166b588;
          puVar11 = &stack0xffffffffffffff60;
        }
      }
      else {
        iVar22 = *(int *)(auVar30._8_8_ + 0x18);
        puVar29 = &UNK_0166b4c4;
        puVar11 = &stack0xffffffffffffff90;
        ppppuVar26 = (undefined8 ****)&stack0xffffffffffffffb0;
      }
      uVar15 = auVar30._0_8_;
      *(ulong *)(puVar11 + -0x30) = unaff_x22;
      *(ulong *)(puVar11 + -0x28) = unaff_x21;
      *(long *)(puVar11 + -0x20) = auVar30._8_8_;
      *(long *)(puVar11 + -0x18) = lVar14;
      *(undefined8 *****)(puVar11 + -0x10) = ppppuVar26;
      *(undefined **)(puVar11 + -8) = puVar29;
      pppuVar28 = (undefined8 ***)(puVar11 + -0x10);
      unaff_x21 = 4;
      /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4();
      *(int *)(uVar15 + 0x44) = iVar22;
      uVar23 = CONCAT44(0,iVar22 * 4);
      auVar33._8_8_ = 4;
      auVar33._0_8_ = uVar23;
      auVar32._8_8_ = 4;
      auVar32._0_8_ = uVar15;
      puVar29 = &UNK_016ce188;
      puVar11 = puVar11 + -0x30;
      unaff_x22 = uVar15;
      goto code_r0x016cdaac;
    }
    puVar10 = &stack0xffffffffffffffa0;
    puVar11 = &stack0xffffffffffffffa0;
    unaff_x29 = &stack0xffffffffffffffc0;
    unaff_x20 = 2;
    uVar23 = 0x3eb5000;
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
      puVar29 = &UNK_016ce320;
      goto code_r0x016cda04;
    }
    unaff_x30 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar34 = func_0x00f78af4();
    iVar22 = auVar34._8_4_;
    param_1 = auVar34._0_8_;
    unaff_x19 = uVar15;
  }
  else {
    param_4 = 0;
    iVar22 = 0;
    if (((int)param_2 == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(param_1,param_2,param_2,0,0);
    puVar11 = (undefined1 *)register0x00000008;
    uVar23 = unaff_x21;
  }
  uVar15 = param_1;
  puVar10 = puVar11 + -0x20;
  *(undefined8 *)(puVar11 + -0x20) = unaff_x20;
  *(ulong *)(puVar11 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar11 + -0x10) = unaff_x29;
  *(undefined **)(puVar11 + -8) = unaff_x30;
  unaff_x29 = puVar11 + -0x10;
  if (iVar22 < *(int *)(uVar15 + 0x30)) {
    puVar29 = &UNK_016ce3a4;
code_r0x016cda04:
    *(undefined1 **)(puVar10 + -0x10) = unaff_x29;
    *(undefined **)(puVar10 + -8) = puVar29;
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
  auVar33 = func_0x00f78ac0(uVar20,0);
  uVar15 = auVar33._0_8_;
  *(ulong *)(puVar11 + -0x50) = unaff_x22;
  *(ulong *)(puVar11 + -0x48) = uVar23;
  *(undefined8 *)(puVar11 + -0x40) = unaff_x20;
  *(undefined8 *)(puVar11 + -0x38) = uVar19;
  *(undefined1 **)(puVar11 + -0x30) = unaff_x29;
  *(undefined **)(puVar11 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
  pppuVar28 = (undefined8 ***)(puVar11 + -0x30);
  if (((int)unaff_x21 == param_4) && (*(char *)(uVar15 + 0x48) == '\0')) {
    return uVar15;
  }
  auVar32._8_8_ = 1;
  auVar32._0_8_ = uVar15;
  uVar23 = 0;
  puVar29 = &UNK_016ce46c;
  puVar11 = puVar11 + -0x50;
code_r0x016cdaac:
  do {
    uVar24 = auVar33._0_8_;
    uVar17 = auVar32._0_8_;
    puVar9 = puVar11 + -0x30;
    *(ulong *)(puVar11 + -0x30) = unaff_x22;
    *(ulong *)(puVar11 + -0x28) = unaff_x21;
    *(undefined1 (*) [16])(puVar11 + -0x20) = auVar33;
    *(undefined8 ****)(puVar11 + -0x10) = pppuVar28;
    *(undefined **)(puVar11 + -8) = puVar29;
    iVar22 = auVar32._8_4_;
    if (*(int *)(uVar17 + 0x20) < iVar22) {
      *(int *)(uVar17 + 0x20) = iVar22;
    }
    uVar15 = unaff_x22;
    if ((*(long *)(uVar17 + 0x18) != 0) &&
       (lVar14 = *(long *)(*(long *)(uVar17 + 0x18) + 0x10), lVar14 != 0)) {
      uVar2 = *(uint *)(lVar14 + 0x18);
      iVar3 = *(int *)(uVar17 + 0x10);
      uVar1 = iVar3 - (uVar2 + (int)uVar23) & iVar22 - 1U;
      uVar24 = CONCAT44(0,uVar1);
      uVar5 = (int)uVar23 + iVar22 + uVar1;
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
      auVar33 = *(undefined1 (*) [16])(puVar11 + -0x20);
      unaff_x22 = *(ulong *)(puVar11 + -0x30);
      unaff_x21 = *(ulong *)(puVar11 + -0x28);
      *(undefined8 *)(puVar11 + -0x10) = *(undefined8 *)(puVar11 + -0x10);
      *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
      lVar14 = *(long *)(uVar17 + 0x18);
      auVar8._8_8_ = lVar14;
      auVar8._0_8_ = uVar24;
      uVar1 = *(int *)(uVar17 + 0x10) - uVar1;
      uVar15 = (ulong)uVar1;
      auVar31._8_4_ = uVar1;
      auVar31._0_8_ = lVar14;
      auVar31._12_4_ = 0;
      *(uint *)(uVar17 + 0x10) = uVar1;
      if (lVar14 != 0) {
        *(ulong *)(puVar11 + -0x30) = unaff_x22;
        *(ulong *)(puVar11 + -0x28) = unaff_x21;
        *(undefined8 *)(puVar11 + -0x20) = uVar19;
        *(undefined8 *)(puVar11 + -0x18) = uVar20;
        *(undefined8 *)(puVar11 + -0x10) = *(undefined8 *)(puVar11 + -0x10);
        *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
        ppppuVar26 = (undefined8 ****)(puVar11 + -0x10);
        puVar29 = &UNK_016cc908;
        uVar23 = 0;
        goto code_r0x016cc7a4;
      }
      lVar14 = func_0x00f78af4();
      pppuVar28 = (undefined8 ***)(puVar11 + -0x20);
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
      puVar29 = &FlatBuffers_FlatBufferBuilder__Prep;
      auVar32 = func_0x00f78af4();
      puVar11 = puVar11 + -0x20;
      goto code_r0x016cdaac;
    }
code_r0x016cdb68:
    auVar8._8_8_ = uVar24;
    auVar8._0_8_ = unaff_x21;
    auVar33 = func_0x00f78af4();
    uVar23 = auVar33._8_8_;
    lVar25 = auVar33._0_8_;
    *(undefined1 **)(puVar11 + -0x40) = puVar11 + -0x10;
    *(undefined **)(puVar11 + -0x38) = &FlatBuffers_FlatBufferBuilder__PutBool;
    lVar14 = *(long *)(lVar25 + 0x18);
    iVar22 = *(int *)(lVar25 + 0x10) + -1;
    *(int *)(lVar25 + 0x10) = iVar22;
    if (lVar14 != 0) {
      puVar12 = puVar11 + -0x30;
      uVar19 = *(undefined8 *)(puVar11 + -0x40);
      uVar20 = *(undefined8 *)(puVar11 + -0x38);
FlatBuffers_ByteBuffer__PutByte:
      auVar8._8_4_ = iVar22;
      auVar8._0_8_ = lVar14;
      auVar8._12_4_ = 0;
      auVar31._8_4_ = iVar22;
      auVar31._0_8_ = lVar14;
      auVar31._12_4_ = 0;
      puVar9 = puVar12 + -0x30;
      *(ulong *)(puVar12 + -0x30) = uVar15;
      *(ulong *)(puVar12 + -0x28) = unaff_x21;
      *(ulong *)(puVar12 + -0x20) = uVar24;
      *(ulong *)(puVar12 + -0x18) = uVar17;
      *(undefined8 *)(puVar12 + -0x10) = uVar19;
      *(undefined8 *)(puVar12 + -8) = uVar20;
      ppppuVar26 = (undefined8 ****)(puVar12 + -0x10);
      uVar24 = 1;
      puVar29 = &UNK_016cc89c;
      goto code_r0x016cc7a4;
    }
    auVar33 = func_0x00f78af4();
    uVar18 = auVar33._8_8_;
    lVar14 = auVar33._0_8_;
    *(undefined1 **)(puVar11 + -0x50) = puVar11 + -0x40;
    *(undefined **)(puVar11 + -0x48) = &FlatBuffers_FlatBufferBuilder__PutSbyte;
    iVar22 = *(int *)(lVar14 + 0x10) + -1;
    auVar31._8_4_ = iVar22;
    auVar31._0_8_ = *(long *)(lVar14 + 0x18);
    auVar31._12_4_ = 0;
    *(int *)(lVar14 + 0x10) = iVar22;
    if (*(long *)(lVar14 + 0x18) != 0) {
      puVar13 = puVar11 + -0x40;
      puVar27 = *(undefined1 **)(puVar11 + -0x50);
      puVar29 = *(undefined **)(puVar11 + -0x48);
      uVar23 = uVar17;
      goto code_r0x016cc810;
    }
    auVar33 = func_0x00f78af4();
    uVar23 = auVar33._8_8_;
    lVar25 = auVar33._0_8_;
    *(undefined1 **)(puVar11 + -0x60) = puVar11 + -0x50;
    *(undefined **)(puVar11 + -0x58) = &FlatBuffers_FlatBufferBuilder__PutByte;
    lVar14 = *(long *)(lVar25 + 0x18);
    iVar22 = *(int *)(lVar25 + 0x10) + -1;
    *(int *)(lVar25 + 0x10) = iVar22;
    if (lVar14 != 0) {
      puVar12 = puVar11 + -0x50;
      uVar19 = *(undefined8 *)(puVar11 + -0x60);
      uVar20 = *(undefined8 *)(puVar11 + -0x58);
      goto FlatBuffers_ByteBuffer__PutByte;
    }
    auVar33 = func_0x00f78af4();
    uVar23 = auVar33._8_8_;
    lVar14 = auVar33._0_8_;
    puVar9 = puVar11 + -0x90;
    *(ulong *)(puVar11 + -0x90) = uVar15;
    *(ulong *)(puVar11 + -0x88) = unaff_x21;
    *(ulong *)(puVar11 + -0x80) = uVar24;
    *(ulong *)(puVar11 + -0x78) = uVar17;
    *(undefined1 **)(puVar11 + -0x70) = puVar11 + -0x60;
    *(undefined **)(puVar11 + -0x68) = &FlatBuffers_FlatBufferBuilder__PutShort;
    ppppuVar26 = (undefined8 ****)(puVar11 + -0x70);
    lVar25 = *(long *)(lVar14 + 0x18);
    uVar5 = *(int *)(lVar14 + 0x10) - 2;
    auVar8._8_8_ = lVar25;
    auVar8._0_8_ = CONCAT44(0,uVar5);
    auVar31._8_4_ = uVar5;
    auVar31._0_8_ = lVar25;
    auVar31._12_4_ = 0;
    *(uint *)(lVar14 + 0x10) = uVar5;
    if (lVar25 != 0) {
      uVar24 = 2;
      puVar29 = &UNK_016cdc34;
      goto code_r0x016cc7a4;
    }
    auVar33 = func_0x00f78af4();
    uVar23 = auVar33._8_8_;
    lVar14 = auVar33._0_8_;
    puVar9 = puVar11 + -0xc0;
    *(ulong *)(puVar11 + -0xc0) = uVar15;
    *(ulong *)(puVar11 + -0xb8) = CONCAT44(0,uVar5);
    *(undefined8 *)(puVar11 + -0xb0) = 0;
    *(ulong *)(puVar11 + -0xa8) = uVar17;
    *(undefined8 *****)(puVar11 + -0xa0) = ppppuVar26;
    *(undefined **)(puVar11 + -0x98) = &FlatBuffers_FlatBufferBuilder__PutUshort;
    ppppuVar26 = (undefined8 ****)(puVar11 + -0xa0);
    lVar25 = *(long *)(lVar14 + 0x18);
    uVar5 = *(int *)(lVar14 + 0x10) - 2;
    auVar8._8_8_ = lVar25;
    auVar8._0_8_ = CONCAT44(0,uVar5);
    auVar31._8_4_ = uVar5;
    auVar31._0_8_ = lVar25;
    auVar31._12_4_ = 0;
    *(uint *)(lVar14 + 0x10) = uVar5;
    if (lVar25 != 0) {
      uVar24 = 2;
      puVar29 = &UNK_016cdc90;
      goto code_r0x016cc7a4;
    }
    auVar33 = func_0x00f78af4();
    uVar23 = auVar33._8_8_;
    lVar14 = auVar33._0_8_;
    puVar9 = puVar11 + -0xf0;
    *(ulong *)(puVar11 + -0xf0) = uVar15;
    *(ulong *)(puVar11 + -0xe8) = CONCAT44(0,uVar5);
    *(undefined8 *)(puVar11 + -0xe0) = 0;
    *(ulong *)(puVar11 + -0xd8) = uVar17;
    *(undefined8 *****)(puVar11 + -0xd0) = ppppuVar26;
    *(undefined **)(puVar11 + -200) = &FlatBuffers_FlatBufferBuilder__PutInt;
    ppppuVar26 = (undefined8 ****)(puVar11 + -0xd0);
    lVar25 = *(long *)(lVar14 + 0x18);
    uVar5 = *(int *)(lVar14 + 0x10) - 4;
    auVar8._8_8_ = lVar25;
    auVar8._0_8_ = CONCAT44(0,uVar5);
    auVar31._8_4_ = uVar5;
    auVar31._0_8_ = lVar25;
    auVar31._12_4_ = 0;
    *(uint *)(lVar14 + 0x10) = uVar5;
    if (lVar25 != 0) {
      uVar24 = 4;
      puVar29 = &UNK_016cdcec;
      goto code_r0x016cc7a4;
    }
    auVar33 = func_0x00f78af4();
    uVar23 = auVar33._8_8_;
    lVar14 = auVar33._0_8_;
    puVar9 = puVar11 + -0x120;
    *(ulong *)(puVar11 + -0x120) = uVar15;
    *(ulong *)(puVar11 + -0x118) = CONCAT44(0,uVar5);
    *(undefined8 *)(puVar11 + -0x110) = 0;
    *(ulong *)(puVar11 + -0x108) = uVar17;
    *(undefined8 *****)(puVar11 + -0x100) = ppppuVar26;
    *(undefined **)(puVar11 + -0xf8) = &FlatBuffers_FlatBufferBuilder__PutUint;
    ppppuVar26 = (undefined8 ****)(puVar11 + -0x100);
    lVar25 = *(long *)(lVar14 + 0x18);
    uVar5 = *(int *)(lVar14 + 0x10) - 4;
    auVar8._8_8_ = lVar25;
    auVar8._0_8_ = CONCAT44(0,uVar5);
    auVar31._8_4_ = uVar5;
    auVar31._0_8_ = lVar25;
    auVar31._12_4_ = 0;
    *(uint *)(lVar14 + 0x10) = uVar5;
    if (lVar25 != 0) {
      uVar24 = 4;
      puVar29 = &UNK_016cdd48;
      goto code_r0x016cc7a4;
    }
    auVar33 = func_0x00f78af4();
    uVar23 = auVar33._8_8_;
    lVar14 = auVar33._0_8_;
    puVar9 = puVar11 + -0x150;
    *(ulong *)(puVar11 + -0x150) = uVar15;
    *(ulong *)(puVar11 + -0x148) = CONCAT44(0,uVar5);
    *(undefined8 *)(puVar11 + -0x140) = 0;
    *(ulong *)(puVar11 + -0x138) = uVar17;
    *(undefined8 *****)(puVar11 + -0x130) = ppppuVar26;
    *(undefined **)(puVar11 + -0x128) = &FlatBuffers_FlatBufferBuilder__PutLong;
    ppppuVar26 = (undefined8 ****)(puVar11 + -0x130);
    lVar25 = *(long *)(lVar14 + 0x18);
    uVar5 = *(int *)(lVar14 + 0x10) - 8;
    auVar8._8_8_ = lVar25;
    auVar8._0_8_ = CONCAT44(0,uVar5);
    auVar31._8_4_ = uVar5;
    auVar31._0_8_ = lVar25;
    auVar31._12_4_ = 0;
    *(uint *)(lVar14 + 0x10) = uVar5;
    if (lVar25 != 0) {
      uVar24 = 8;
      puVar29 = &UNK_016cdda4;
      goto code_r0x016cc7a4;
    }
    auVar33 = func_0x00f78af4();
    uVar23 = auVar33._8_8_;
    lVar14 = auVar33._0_8_;
    puVar9 = puVar11 + -0x180;
    *(ulong *)(puVar11 + -0x180) = uVar15;
    *(ulong *)(puVar11 + -0x178) = CONCAT44(0,uVar5);
    *(undefined8 *)(puVar11 + -0x170) = 0;
    *(ulong *)(puVar11 + -0x168) = uVar17;
    *(undefined8 *****)(puVar11 + -0x160) = ppppuVar26;
    *(undefined **)(puVar11 + -0x158) = &FlatBuffers_FlatBufferBuilder__PutUlong;
    ppppuVar26 = (undefined8 ****)(puVar11 + -0x160);
    lVar25 = *(long *)(lVar14 + 0x18);
    uVar5 = *(int *)(lVar14 + 0x10) - 8;
    unaff_x21 = CONCAT44(0,uVar5);
    auVar8._8_8_ = lVar25;
    auVar8._0_8_ = unaff_x21;
    auVar31._8_4_ = uVar5;
    auVar31._0_8_ = lVar25;
    auVar31._12_4_ = 0;
    *(uint *)(lVar14 + 0x10) = uVar5;
    if (lVar25 != 0) {
      uVar24 = 8;
      puVar29 = &UNK_016cde00;
      goto code_r0x016cc7a4;
    }
    lVar14 = func_0x00f78af4();
    *(undefined8 *****)(puVar11 + -400) = ppppuVar26;
    *(undefined **)(puVar11 + -0x188) = &FlatBuffers_FlatBufferBuilder__PutFloat;
    lVar25 = *(long *)(lVar14 + 0x18);
    auVar8._8_8_ = lVar25;
    uVar5 = *(int *)(lVar14 + 0x10) - 4;
    uVar23 = (ulong)uVar5;
    auVar31._8_4_ = uVar5;
    auVar31._0_8_ = lVar25;
    auVar31._12_4_ = 0;
    *(uint *)(lVar14 + 0x10) = uVar5;
    if (lVar25 != 0) {
      puVar9 = puVar11 + -0x1b0;
      *(undefined8 *)(puVar11 + -0x1b0) = unaff_d9;
      *(undefined8 *)(puVar11 + -0x1a8) = unaff_d8;
      *(undefined8 *)(puVar11 + -0x1a0) = 0;
      *(ulong *)(puVar11 + -0x198) = uVar17;
      *(undefined8 *)(puVar11 + -400) = *(undefined8 *)(puVar11 + -400);
      *(undefined8 *)(puVar11 + -0x188) = *(undefined8 *)(puVar11 + -0x188);
      ppppuVar26 = (undefined8 ****)(puVar11 + -400);
      uVar24 = 4;
      puVar29 = &UNK_016ccba4;
      goto code_r0x016cc7a4;
    }
    lVar14 = func_0x00f78af4();
    *(undefined1 **)(puVar11 + -0x1a0) = puVar11 + -400;
    *(undefined **)(puVar11 + -0x198) = &FlatBuffers_FlatBufferBuilder__PutDouble;
    lVar25 = *(long *)(lVar14 + 0x18);
    auVar8._8_8_ = lVar25;
    uVar5 = *(int *)(lVar14 + 0x10) - 8;
    uVar23 = (ulong)uVar5;
    auVar31._8_4_ = uVar5;
    auVar31._0_8_ = lVar25;
    auVar31._12_4_ = 0;
    *(uint *)(lVar14 + 0x10) = uVar5;
    if (lVar25 != 0) break;
    auVar33 = func_0x00f78af4();
    *(undefined8 *)(puVar11 + -0x1c0) = 0;
    *(ulong *)(puVar11 + -0x1b8) = uVar17;
    *(undefined1 **)(puVar11 + -0x1b0) = puVar11 + -0x1a0;
    *(undefined **)(puVar11 + -0x1a8) = &FlatBuffers_FlatBufferBuilder__AddBool;
    pppuVar28 = (undefined8 ***)(puVar11 + -0x1b0);
    auVar32._8_8_ = 1;
    auVar32._0_8_ = auVar33._0_8_;
    uVar23 = 0;
    puVar29 = &UNK_016cde9c;
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
  ppppuVar26 = (undefined8 ****)(puVar11 + -0x1a0);
  uVar24 = 8;
  puVar29 = &UNK_016ccc34;
code_r0x016cc7a4:
  do {
    puVar13 = puVar9 + -0x20;
    *(long *)(puVar9 + -0x20) = auVar8._8_8_;
    *(ulong *)(puVar9 + -0x18) = uVar23;
    *(undefined8 *****)(puVar9 + -0x10) = ppppuVar26;
    *(undefined **)(puVar9 + -8) = puVar29;
    puVar27 = puVar9 + -0x10;
    if (auVar31._8_4_ < 0) {
code_r0x016cc7d8:
      func_0x00f78a24(0x3d1fcf8);
      uVar23 = func_0x00f78aec();
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a4d0(uVar23,0);
      uVar19 = func_0x00f78a24(0x3d52ce8);
      func_0x00f78ac0(uVar23,uVar19);
      uVar18 = uVar24;
    }
    else {
      lVar14 = *(long *)(auVar31._0_8_ + 0x10);
      uVar18 = uVar24;
      if (lVar14 != 0) {
        if (auVar31._8_4_ <= *(int *)(lVar14 + 0x18) - (int)uVar24) {
          return auVar31._0_8_;
        }
        goto code_r0x016cc7d8;
      }
    }
    puVar29 = &FlatBuffers_ByteBuffer__PutSbyte;
    auVar31 = func_0x00f78af4();
code_r0x016cc810:
    puVar9 = puVar13 + -0x30;
    *(ulong *)(puVar13 + -0x30) = uVar15;
    *(undefined1 (*) [16])(puVar13 + -0x28) = auVar8;
    *(ulong *)(puVar13 + -0x18) = uVar23;
    *(undefined1 **)(puVar13 + -0x10) = puVar27;
    *(undefined **)(puVar13 + -8) = puVar29;
    ppppuVar26 = (undefined8 ****)(puVar13 + -0x10);
    uVar24 = 1;
    puVar29 = &UNK_016cc834;
    uVar23 = uVar18;
    auVar8 = auVar31;
  } while( true );
}



// ============================================================
// RVA: 0x166b424 | Core.Services.FindPublicMatchRequest.EndFindPublicMatchRequest
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
/* WARNING: Possible PIC construction at 0x0166b4c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0166b584: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x0166b588) */
/* WARNING: Removing unreachable block (ram,0x016ce224) */
/* WARNING: Removing unreachable block (ram,0x0166b4c4) */
/* WARNING: Removing unreachable block (ram,0x0166b4d0) */
/* WARNING: Removing unreachable block (ram,0x0166b4d8) */
/* WARNING: Removing unreachable block (ram,0x0166b4f4) */
/* WARNING: Removing unreachable block (ram,0x0166b500) */
/* WARNING: Removing unreachable block (ram,0x0166b50c) */
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

ulong Core_Services_FindPublicMatchRequest__EndFindPublicMatchRequest
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
  if ((bRam0000000003eb58bf & 1) == 0) {
    func_0x00f78a20(0x3d3f088);
    bRam0000000003eb58bf = 1;
  }
  if (param_1 == 0) {
    puVar28 = (undefined *)func_0x00f78af4();
    if (puVar28 != (undefined *)0x0) {
      ppppuVar8 = (undefined8 ****)&stack0xffffffffffffffb0;
      puVar25 = &stack0xffffffffffffffd0;
      if ((bRam0000000003eb5cd7 & 1) == 0) {
        func_0x00f78a20(0x3d1f100,2,0);
        bRam0000000003eb5cd7 = 1;
      }
      /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(puVar28);
      if (*(long *)(puVar28 + 0x28) == 0) {
        auVar32 = func_0x00f78af4();
        puVar12 = auVar32._0_8_;
        ppppuVar8 = &pppuStack_70;
        pppuStack_70 = (undefined8 ***)((long)&MACH_HEADER.magic + 2);
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
        if (*(int *)(*(long *)(puVar28 + 0x28) + 0x18) < 2) {
          uVar15 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,2);
          *(undefined8 *)(puVar28 + 0x28) = uVar15;
        }
        *(undefined4 *)(puVar28 + 0x30) = 2;
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
      puStack_68 = &Core_Services_FindPublicMatchRequest__CreatePropertiesVectorBlock;
      ppppuVar26 = &pppuStack_70;
      unaff_x21 = 0x3eb5000;
      pppuStack_70 = (undefined8 ***)&stack0xffffffffffffffc0;
      if ((bRam0000000003eb58be & 1) == 0) {
        func_0x00f78a20(0x3d569c8);
        bRam0000000003eb58be = 1;
      }
      if ((lVar22 == 0) || (lVar16 == 0)) {
        puVar28 = &Core_Services_FindPublicMatchRequest__StartPropertiesVector;
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
        puVar28 = &UNK_0166b588;
        puVar9 = &stack0xffffffffffffff70;
      }
    }
    else {
      iVar20 = *(int *)(auVar29._8_8_ + 0x18);
      puVar28 = &UNK_0166b4c4;
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
// RVA: 0x166b470 | Core.Services.FindPublicMatchRequest.StartFindPublicMatchRequest
// ============================================================

/* WARNING: Possible PIC construction at 0x016ce31c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce3a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0166b4c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0166b584: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x0166b588) */
/* WARNING: Removing unreachable block (ram,0x016ce224) */
/* WARNING: Removing unreachable block (ram,0x0166b4c4) */
/* WARNING: Removing unreachable block (ram,0x0166b4d0) */
/* WARNING: Removing unreachable block (ram,0x0166b4d8) */
/* WARNING: Removing unreachable block (ram,0x0166b4f4) */
/* WARNING: Removing unreachable block (ram,0x0166b500) */
/* WARNING: Removing unreachable block (ram,0x0166b50c) */
/* WARNING: Removing unreachable block (ram,0x016ce20c) */
/* WARNING: Removing unreachable block (ram,0x016ce46c) */
/* WARNING: Removing unreachable block (ram,0x016ce3a4) */
/* WARNING: Removing unreachable block (ram,0x016ce3a8) */
/* WARNING: Removing unreachable block (ram,0x016ce3b4) */
/* WARNING: Removing unreachable block (ram,0x016ce320) */
/* WARNING: Removing unreachable block (ram,0x016cde9c) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_FindPublicMatchRequest__StartFindPublicMatchRequest
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
      puStack_48 = &Core_Services_FindPublicMatchRequest__CreatePropertiesVectorBlock;
      ppppuVar24 = &pppuStack_50;
      unaff_x21 = 0x3eb5000;
      pppuStack_50 = (undefined8 ***)&stack0xffffffffffffffe0;
      if ((bRam0000000003eb58be & 1) == 0) {
        func_0x00f78a20(0x3d569c8);
        bRam0000000003eb58be = 1;
      }
      if ((lVar21 == 0) || (lVar19 == 0)) {
        puVar26 = &Core_Services_FindPublicMatchRequest__StartPropertiesVector;
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
        puVar26 = &UNK_0166b588;
        puVar8 = &stack0xffffffffffffff90;
      }
    }
    else {
      iVar16 = *(int *)(auVar27._8_8_ + 0x18);
      puVar26 = &UNK_0166b4c4;
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
    func_0x00f78a20(0x3d1f100,2,0);
    bRam0000000003eb5cd7 = 1;
  }
  /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(param_1);
  if (*(long *)(param_1 + 0x28) == 0) {
    auVar31 = func_0x00f78af4();
    puVar26 = auVar31._0_8_;
    ppppuVar7 = &pppuStack_50;
    pppuStack_50 = (undefined8 ***)((long)&MACH_HEADER.magic + 2);
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
    if (*(int *)(*(long *)(param_1 + 0x28) + 0x18) < 2) {
      uVar14 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,2);
      *(undefined8 *)(param_1 + 0x28) = uVar14;
    }
    *(undefined4 *)(param_1 + 0x30) = 2;
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
// RVA: 0x166b48c | Core.Services.FindPublicMatchRequest.CreatePropertiesVector
// ============================================================

/* WARNING: Possible PIC construction at 0x0166b4c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0166b584: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x0166b588) */
/* WARNING: Removing unreachable block (ram,0x016ce224) */
/* WARNING: Removing unreachable block (ram,0x016cda04) */
/* WARNING: Removing unreachable block (ram,0x016cda14) */
/* WARNING: Removing unreachable block (ram,0x016cda30) */
/* WARNING: Removing unreachable block (ram,0x016cda1c) */
/* WARNING: Removing unreachable block (ram,0x0166b4c4) */
/* WARNING: Removing unreachable block (ram,0x0166b4d0) */
/* WARNING: Removing unreachable block (ram,0x0166b4d8) */
/* WARNING: Removing unreachable block (ram,0x0166b4f4) */
/* WARNING: Removing unreachable block (ram,0x0166b500) */
/* WARNING: Removing unreachable block (ram,0x0166b50c) */
/* WARNING: Removing unreachable block (ram,0x016ce20c) */
/* WARNING: Removing unreachable block (ram,0x016cde9c) */

ulong Core_Services_FindPublicMatchRequest__CreatePropertiesVector(long param_1,long param_2)

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
    puStack_38 = &Core_Services_FindPublicMatchRequest__CreatePropertiesVectorBlock;
    ppppuVar22 = &pppuStack_40;
    unaff_x21 = 0x3eb5000;
    pppuStack_40 = (undefined8 ***)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb58be & 1) == 0) {
      func_0x00f78a20(0x3d569c8);
      bRam0000000003eb58be = 1;
    }
    if ((lVar15 == 0) || (param_1 == 0)) {
      puVar23 = &Core_Services_FindPublicMatchRequest__StartPropertiesVector;
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
      puVar23 = &UNK_0166b588;
      puVar7 = &stack0xffffffffffffffa0;
    }
  }
  else {
    iVar14 = *(int *)(param_2 + 0x18);
    puVar23 = (undefined *)0x166b4c4;
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
// RVA: 0x166b528 | Core.Services.FindPublicMatchRequest.CreatePropertiesVectorBlock
// ============================================================

/* WARNING: Possible PIC construction at 0x0166b584: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x0166b588) */
/* WARNING: Removing unreachable block (ram,0x016ce20c) */
/* WARNING: Removing unreachable block (ram,0x016cde9c) */

ulong Core_Services_FindPublicMatchRequest__CreatePropertiesVectorBlock(ulong param_1,long param_2)

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
  
  if ((bRam0000000003eb58be & 1) == 0) {
    func_0x00f78a20(0x3d569c8);
    bRam0000000003eb58be = 1;
  }
  puStack_40 = &stack0xfffffffffffffff0;
  if ((param_2 == 0) || (param_1 == 0)) {
    puVar23 = &Core_Services_FindPublicMatchRequest__StartPropertiesVector;
    auVar28 = func_0x00f78af4();
    iVar14 = auVar28._8_4_;
    param_1 = auVar28._0_8_;
    if (param_1 == 0) {
      puStack_38 = &Core_Services_FindPublicMatchRequest__StartPropertiesVector;
      lVar15 = func_0x00f78af4();
      return *(ulong *)(lVar15 + 8);
    }
  }
  else {
    iVar14 = *(int *)(param_2 + 0x18);
    puVar23 = (undefined *)0x166b588;
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
// RVA: 0x166b5b4 | Core.Services.FindPublicMatchRequest.StartPropertiesVector
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

ulong Core_Services_FindPublicMatchRequest__StartPropertiesVector(ulong param_1,int param_2)

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



