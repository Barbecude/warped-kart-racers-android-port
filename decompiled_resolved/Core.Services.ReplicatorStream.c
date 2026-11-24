// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Services.ReplicatorStream

// ============================================================
// RVA: 0x1681328 | Core.Services.ReplicatorStream.get_Cookie
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

long Core_Services_ReplicatorStream__get_Cookie(uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined1 auVar11 [16];
  
  if (*(long *)(param_1 + 2) == 0) {
    lVar4 = func_0x00f78af4();
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return lVar4;
  }
  uVar1 = *param_1;
  auVar11._8_4_ = uVar1;
  auVar11._0_8_ = *(long *)(param_1 + 2);
  auVar11._12_4_ = 0;
  puVar9 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5cd0 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    bRam0000000003eb5cd0 = 1;
  }
  puVar10 = &UNK_016cc68c;
  puVar3 = &stack0xffffffffffffffc0;
  uVar2 = 8;
  uVar5 = (ulong)uVar1;
  uVar8 = 8;
  do {
    uVar7 = uVar2;
    lVar4 = auVar11._0_8_;
    *(undefined8 *)(puVar3 + -0x20) = uVar8;
    *(ulong *)(puVar3 + -0x18) = uVar5;
    *(undefined1 **)(puVar3 + -0x10) = puVar9;
    *(undefined **)(puVar3 + -8) = puVar10;
    if (auVar11._8_4_ < 0) {
code_r0x016cc7d8:
      func_0x00f78a24(0x3d1fcf8);
      uVar5 = func_0x00f78aec();
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a4d0(uVar5,0);
      uVar6 = func_0x00f78a24(0x3d52ce8);
      func_0x00f78ac0(uVar5,uVar6);
    }
    else if (*(long *)(lVar4 + 0x10) != 0) {
      if (auVar11._8_4_ <= *(int *)(*(long *)(lVar4 + 0x10) + 0x18) - (int)uVar7) {
        return lVar4;
      }
      goto code_r0x016cc7d8;
    }
    auVar11 = func_0x00f78af4();
    *(undefined8 *)(puVar3 + -0x50) = 0x3d201a0;
    *(long *)(puVar3 + -0x48) = lVar4;
    *(undefined8 *)(puVar3 + -0x40) = uVar8;
    *(ulong *)(puVar3 + -0x38) = uVar5;
    *(undefined1 **)(puVar3 + -0x30) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x28) = &FlatBuffers_ByteBuffer__PutSbyte;
    puVar9 = puVar3 + -0x30;
    puVar10 = &UNK_016cc834;
    puVar3 = puVar3 + -0x50;
    uVar2 = 1;
    uVar5 = uVar7;
    uVar8 = auVar11._8_8_;
  } while( true );
}



// ============================================================
// RVA: 0x1681aa0 | Core.Services.ReplicatorStream.__assign
// ============================================================

undefined1  [16]
Core_Services_ReplicatorStream____assign(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)param_1 = param_2;
  param_1[1] = param_3;
  auVar1._0_8_ = *param_1;
  auVar1._8_8_ = param_3;
  return auVar1;
}



// ============================================================
// RVA: 0x1682c7c | Core.Services.ReplicatorStream.CreateReplicatorStream
// ============================================================

uint Core_Services_ReplicatorStream__CreateReplicatorStream
               (long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined2 param_10)

{
  long lVar1;
  
  if ((bRam0000000003eb5a07 & 1) == 0) {
    func_0x00f78a20(0x3d3f1f8);
    bRam0000000003eb5a07 = 1;
  }
  if (param_1 != 0) {
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,8,0x20,0);
    /*FlatBuffers.FlatBufferBuilder$$Pad*/ func_0x016cda44(param_1,4,0);
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,2,6,0);
    /*FlatBuffers.FlatBufferBuilder$$PutUshort*/ func_0x016cdc58(param_1,param_10,0);
    /*FlatBuffers.FlatBufferBuilder$$PutUshort*/ func_0x016cdc58(param_1,param_9._6_2_,0);
    /*FlatBuffers.FlatBufferBuilder$$PutUshort*/ func_0x016cdc58(param_1,param_9._4_2_,0);
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,1,4,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_1,param_9._2_1_,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_1,param_9._1_1_,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_1,(undefined1)param_9,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_1,param_8,0);
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,2,6,0);
    /*FlatBuffers.FlatBufferBuilder$$PutUshort*/ func_0x016cdc58(param_1,param_7,0);
    /*FlatBuffers.FlatBufferBuilder$$PutUshort*/ func_0x016cdc58(param_1,param_6,0);
    /*FlatBuffers.FlatBufferBuilder$$PutUshort*/ func_0x016cdc58(param_1,param_5,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(param_1,param_4,0);
    /*FlatBuffers.FlatBufferBuilder$$Pad*/ func_0x016cda44(param_1,1,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_1,param_3,0);
    /*FlatBuffers.FlatBufferBuilder$$PutUlong*/ func_0x016cddc8(param_1,param_2,0);
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar1 != 0)) {
      return *(int *)(lVar1 + 0x18) - *(int *)(param_1 + 0x10);
    }
    lVar1 = func_0x00f78af4(param_1,0);
    return (uint)*(byte *)(lVar1 + 0x48);
  }
  lVar1 = func_0x00f78af4();
  return (uint)*(byte *)(lVar1 + 0x30);
}



// ============================================================
// RVA: 0x16830f4 | Core.Services.ReplicatorStream.get_Velocity
// ============================================================

int Core_Services_ReplicatorStream__get_Velocity(int *param_1)

{
  return *param_1 + 0x16;
}



// ============================================================
// RVA: 0x16831d4 | Core.Services.ReplicatorStream.get_Position
// ============================================================

int Core_Services_ReplicatorStream__get_Position(int *param_1)

{
  return *param_1 + 0xc;
}



// ============================================================
// RVA: 0x16831e4 | Core.Services.ReplicatorStream.get_Rotation
// ============================================================

int Core_Services_ReplicatorStream__get_Rotation(int *param_1)

{
  return *param_1 + 0x12;
}



// ============================================================
// RVA: 0x1683710 | Core.Services.ReplicatorStream.get_ByteBuffer
// ============================================================

undefined8 Core_Services_ReplicatorStream__get_ByteBuffer(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// ============================================================
// RVA: 0x1683718 | Core.Services.ReplicatorStream.__init
// ============================================================

void Core_Services_ReplicatorStream____init
               (undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  return;
}



// ============================================================
// RVA: 0x1683724 | Core.Services.ReplicatorStream.get_SyncIdAndCategory
// ============================================================

ulong Core_Services_ReplicatorStream__get_SyncIdAndCategory
                (int *param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  short sVar3;
  long lVar4;
  int *piVar5;
  ulong *puVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined1 **ppuVar11;
  undefined *puVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  ppuVar11 = (undefined1 **)&stack0xfffffffffffffff0;
  lVar4 = *(long *)(param_1 + 2);
  if (lVar4 == 0) {
    piVar5 = (int *)func_0x00f78af4();
    if (*(long *)(piVar5 + 2) == 0) {
      auVar14 = func_0x00f78af4();
      puVar6 = auVar14._0_8_;
      *(int *)puVar6 = auVar14._8_4_;
      puVar6[1] = param_3;
      return *puVar6;
    }
    auVar13._8_4_ = *piVar5 + 10;
    auVar13._0_8_ = *(long *)(piVar5 + 2);
    auVar13._12_4_ = 0;
    puVar2 = &stack0xfffffffffffffff0;
    puVar12 = &Core_Services_ReplicatorStream__get_SyncInstanceId;
  }
  else {
    uVar1 = *param_1 + 8;
    uVar10 = 1;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar4,uVar1,1);
    if ((*(long *)(lVar4 + 0x10) == 0) ||
       (lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + 0x10), lVar4 == 0)) {
      func_0x00f78af4();
    }
    else if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      return (ulong)*(byte *)(lVar4 + (int)uVar1 + 0x20);
    }
    uVar7 = func_0x00f78b24();
    auVar13 = func_0x00f78ac0(uVar7,0);
    puVar2 = &stack0xffffffffffffffb0;
    puStack_28 = &FlatBuffers_ByteBuffer__GetStringUTF8;
    ppuVar11 = &puStack_30;
    puStack_30 = &stack0xfffffffffffffff0;
    plVar8 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
    lVar4 = *(long *)(auVar13._0_8_ + 0x10);
    if ((lVar4 != 0) && (plVar8 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016ccdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar9 = (**(code **)(*plVar8 + 0x348))
                        (plVar8,*(undefined8 *)(lVar4 + 0x10),auVar13._8_8_,uVar10,
                         *(undefined8 *)(*plVar8 + 0x350));
      return uVar9;
    }
    puVar12 = &FlatBuffers_ByteBuffer__GetShort;
    auVar13 = func_0x00f78af4();
  }
  *(undefined1 ***)(puVar2 + -0x10) = ppuVar11;
  *(undefined **)(puVar2 + -8) = puVar12;
  sVar3 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(auVar13._0_8_,auVar13._8_8_,2);
  return (ulong)(uint)(int)sVar3;
}



// ============================================================
// RVA: 0x1683750 | Core.Services.ReplicatorStream.get_SyncInstanceId
// ============================================================

ulong Core_Services_ReplicatorStream__get_SyncInstanceId
                (int *param_1,undefined8 param_2,ulong param_3)

{
  short sVar1;
  ulong *puVar2;
  undefined1 auVar3 [12];
  
  if (*(long *)(param_1 + 2) != 0) {
    sVar1 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(param_1 + 2),*param_1 + 10,2);
    return (ulong)(uint)(int)sVar1;
  }
  auVar3 = func_0x00f78af4();
  puVar2 = auVar3._0_8_;
  *(int *)puVar2 = auVar3._8_4_;
  puVar2[1] = param_3;
  return *puVar2;
}



