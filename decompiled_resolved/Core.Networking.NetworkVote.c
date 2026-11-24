// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Networking.NetworkVote

// ============================================================
// RVA: 0x165b750 | Core.Networking.NetworkVote.ToFlatBuffer
// ============================================================

/* WARNING: Possible PIC construction at 0x01661a58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661ac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661ae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661c34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01661ae4) */
/* WARNING: Removing unreachable block (ram,0x01661ae8) */
/* WARNING: Removing unreachable block (ram,0x01661acc) */
/* WARNING: Removing unreachable block (ram,0x01661a5c) */
/* WARNING: Removing unreachable block (ram,0x01661b18) */
/* WARNING: Removing unreachable block (ram,0x01661a6c) */
/* WARNING: Removing unreachable block (ram,0x01661a80) */
/* WARNING: Removing unreachable block (ram,0x01661b34) */
/* WARNING: Removing unreachable block (ram,0x01661b5c) */
/* WARNING: Removing unreachable block (ram,0x01661b88) */
/* WARNING: Removing unreachable block (ram,0x01661b8c) */
/* WARNING: Removing unreachable block (ram,0x01661bb4) */
/* WARNING: Removing unreachable block (ram,0x01661be4) */
/* WARNING: Removing unreachable block (ram,0x01661c28) */
/* WARNING: Removing unreachable block (ram,0x01661ba0) */
/* WARNING: Removing unreachable block (ram,0x016ccca0) */
/* WARNING: Removing unreachable block (ram,0x016cccc4) */
/* WARNING: Removing unreachable block (ram,0x016cccec) */
/* WARNING: Removing unreachable block (ram,0x016ccccc) */
/* WARNING: Removing unreachable block (ram,0x016cccf0) */
/* WARNING: Removing unreachable block (ram,0x016ccd20) */
/* WARNING: Removing unreachable block (ram,0x016ccd48) */
/* WARNING: Removing unreachable block (ram,0x016ccd28) */
/* WARNING: Removing unreachable block (ram,0x016ccd4c) */
/* WARNING: Removing unreachable block (ram,0x016ccd84) */
/* WARNING: Removing unreachable block (ram,0x016ccdb0) */
/* WARNING: Removing unreachable block (ram,0x016ccd88) */
/* WARNING: Removing unreachable block (ram,0x016ccd34) */
/* WARNING: Removing unreachable block (ram,0x016cccd8) */
/* WARNING: Removing unreachable block (ram,0x01661b74) */
/* WARNING: Removing unreachable block (ram,0x016ccdb4) */
/* WARNING: Removing unreachable block (ram,0x01661b4c) */
/* WARNING: Removing unreachable block (ram,0x01661ab4) */
/* WARNING: Removing unreachable block (ram,0x016cce04) */
/* WARNING: Removing unreachable block (ram,0x01661c38) */
/* WARNING: Removing unreachable block (ram,0x01661cc4) */
/* WARNING: Removing unreachable block (ram,0x01661cd0) */
/* WARNING: Removing unreachable block (ram,0x01661cd8) */
/* WARNING: Removing unreachable block (ram,0x01661cf4) */
/* WARNING: Removing unreachable block (ram,0x01661d00) */
/* WARNING: Removing unreachable block (ram,0x01661c3c) */
/* WARNING: Removing unreachable block (ram,0x01661c6c) */
/* WARNING: Removing unreachable block (ram,0x01661c98) */
/* WARNING: Removing unreachable block (ram,0x01661ca4) */
/* WARNING: Removing unreachable block (ram,0x01661c7c) */
/* WARNING: Removing unreachable block (ram,0x01661cbc) */
/* WARNING: Removing unreachable block (ram,0x01661c84) */

ulong Core_Networking_NetworkVote__ToFlatBuffer(uint *param_1,long param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined1 auVar11 [16];
  
  uVar5 = (ulong)*param_1;
  lVar6 = (long)(short)param_1[1];
  uVar1 = param_1[2];
  lVar7 = lVar6;
  if ((bRam0000000003eb5873 & 1) == 0) {
    func_0x00f78a20(0x3d3f298);
    bRam0000000003eb5873 = 1;
  }
  if (param_2 != 0) {
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_2,4,8,0);
    /*FlatBuffers.FlatBufferBuilder$$Pad*/ func_0x016cda44(param_2,1,0);
    /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(param_2,(long)(char)uVar1,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(param_2,lVar6,0);
    /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(param_2,uVar5,0);
    if ((*(long *)(param_2 + 0x18) != 0) &&
       (lVar7 = *(long *)(*(long *)(param_2 + 0x18) + 0x10), lVar7 != 0)) {
      return (ulong)(uint)(*(int *)(lVar7 + 0x18) - *(int *)(param_2 + 0x10));
    }
    lVar7 = func_0x00f78af4(param_2,0);
    return (ulong)*(byte *)(lVar7 + 0x48);
  }
  puVar10 = &Core_Networking_NetworkVoteUpdate__Clear;
  lVar3 = func_0x00f78af4();
  lVar8 = 0;
  puVar2 = &stack0xffffffffffffffc0;
  while( true ) {
    puVar9 = (undefined1 *)((long)register0x00000008 + -0x10);
    register0x00000008 = (BADSPACEBASE *)(puVar2 + -0x20);
    *(ulong *)(puVar2 + -0x20) = uVar5;
    *(long *)(puVar2 + -0x18) = lVar8;
    *(undefined1 **)(puVar2 + -0x10) = puVar9;
    *(undefined **)(puVar2 + -8) = puVar10;
    if ((bRam0000000003eb5862 & 1) == 0) {
      func_0x00f78a20(0x3d3b670);
      bRam0000000003eb5862 = 1;
    }
    uVar5 = *(ulong *)(lVar3 + 0x10);
    if (uVar5 != 0) break;
    auVar11 = func_0x00f78af4();
    lVar8 = auVar11._0_8_;
    *(undefined8 *)(puVar2 + -0x70) = unaff_x26;
    *(undefined8 *)(puVar2 + -0x68) = unaff_x25;
    *(undefined8 *)(puVar2 + -0x60) = unaff_x24;
    *(undefined8 *)(puVar2 + -0x58) = 0x3eb5000;
    *(long *)(puVar2 + -0x50) = (long)(char)uVar1;
    *(long *)(puVar2 + -0x48) = lVar6;
    *(undefined8 *)(puVar2 + -0x40) = 0x3eb5000;
    *(long *)(puVar2 + -0x38) = lVar3;
    *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x28) = &Core_Networking_NetworkVoteUpdate__Set;
    *(long *)(puVar2 + -0x80) = auVar11._8_8_;
    *(long *)(puVar2 + -0x78) = lVar7;
    uVar5 = 0x3eb5000;
    if ((bRam0000000003eb5863 & 1) == 0) {
      func_0x00f78a20(0x3d3b660);
      func_0x00f78a20(0x3d3ee80);
      bRam0000000003eb5863 = 1;
    }
    *(undefined8 *)(puVar2 + -0xb0) = 0;
    *(undefined8 *)(puVar2 + -0xa8) = 0;
    *(undefined8 *)(puVar2 + -0xa0) = 0;
    puVar10 = &UNK_01661a5c;
    puVar2 = puVar2 + -0xd0;
    lVar3 = lVar8;
  }
  *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
  *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
  *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
  *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
  uVar4 = uVar5;
  if (0 < *(int *)(uVar5 + 0x18)) {
    uVar4 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar5 + 0x10),0,*(int *)(uVar5 + 0x18),0);
    *(undefined4 *)(uVar5 + 0x18) = 0;
  }
  *(int *)(uVar5 + 0x1c) = *(int *)(uVar5 + 0x1c) + 1;
  return uVar4;
}



