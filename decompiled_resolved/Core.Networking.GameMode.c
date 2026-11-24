// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Networking.GameMode

// ============================================================
// RVA: 0x1653650 | Core.Networking.GameMode.__assign
// ============================================================

undefined1  [16]
Core_Networking_GameMode____assign(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)param_1 = param_2;
  param_1[1] = param_3;
  auVar1._0_8_ = *param_1;
  auVar1._8_8_ = param_3;
  return auVar1;
}



// ============================================================
// RVA: 0x1654c98 | Core.Networking.GameMode.get_ByteBuffer
// ============================================================

undefined8 Core_Networking_GameMode__get_ByteBuffer(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// ============================================================
// RVA: 0x1654ca0 | Core.Networking.GameMode.__init
// ============================================================

void Core_Networking_GameMode____init(undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  return;
}



// ============================================================
// RVA: 0x1654cac | Core.Networking.GameMode.get_State
// ============================================================

ulong Core_Networking_GameMode__get_State
                (uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5)

{
  uint uVar1;
  undefined1 **ppuVar2;
  short sVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  ulong unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 **ppuVar11;
  undefined *puVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  lVar4 = *(long *)(param_1 + 2);
  if (lVar4 == 0) {
    piVar5 = (int *)func_0x00f78af4();
    puStack_30 = &stack0xffffffffffffffe0;
    if (*(long *)(piVar5 + 2) != 0) {
      uVar9 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(piVar5 + 2),*piVar5 + 4,4);
      return uVar9;
    }
    piVar5 = (int *)func_0x00f78af4();
    ppuVar11 = &puStack_30;
    puStack_28 = &Core_Networking_GameMode__get_SyncId;
    if (*(long *)(piVar5 + 2) != 0) {
      puStack_28 = &Core_Networking_GameMode__get_SyncId;
      puStack_30 = &stack0xffffffffffffffe0;
      uVar9 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(piVar5 + 2),*piVar5 + 8,4);
      return uVar9;
    }
    piVar5 = (int *)func_0x00f78af4();
    if (*(long *)(piVar5 + 2) == 0) {
      auVar13 = func_0x00f78af4();
      lVar4 = auVar13._0_8_;
      if ((bRam0000000003eb57f2 & 1) == 0) {
        func_0x00f78a20(0x3d3f090);
        bRam0000000003eb57f2 = 1;
      }
      if (lVar4 != 0) {
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar4,4,0x10,0);
        /*FlatBuffers.FlatBufferBuilder$$Pad*/ func_0x016cda44(lVar4,3,0);
        /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(lVar4,param_5,0);
        /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(lVar4,param_4,0);
        /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar4,param_3,0);
        /*FlatBuffers.FlatBufferBuilder$$Pad*/ func_0x016cda44(lVar4,3,0);
        /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(lVar4,auVar13._8_8_,0);
        if ((*(long *)(lVar4 + 0x18) != 0) &&
           (lVar10 = *(long *)(*(long *)(lVar4 + 0x18) + 0x10), lVar10 != 0)) {
          return (ulong)(uint)(*(int *)(lVar10 + 0x18) - *(int *)(lVar4 + 0x10));
        }
        lVar4 = func_0x00f78af4(lVar4,0);
        return (ulong)*(byte *)(lVar4 + 0x48);
      }
      lVar4 = func_0x00f78af4();
      return *(ulong *)(lVar4 + 8);
    }
    auVar13._8_4_ = *piVar5 + 0xc;
    auVar13._0_8_ = *(long *)(piVar5 + 2);
    auVar13._12_4_ = 0;
    ppuVar2 = &puStack_30;
    puVar12 = &Core_Networking_GameMode__get_ExtraData;
  }
  else {
    uVar1 = *param_1;
    unaff_x19 = (ulong)uVar1;
    ppuVar2 = (undefined1 **)&stack0xffffffffffffffe0;
    ppuVar11 = (undefined1 **)&stack0xfffffffffffffff0;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar4,unaff_x19,1);
    if ((*(long *)(lVar4 + 0x10) == 0) ||
       (lVar10 = *(long *)(*(long *)(lVar4 + 0x10) + 0x10), lVar10 == 0)) {
      func_0x00f78af4();
    }
    else if (uVar1 < *(uint *)(lVar10 + 0x18)) {
      return (long)*(char *)(lVar10 + (int)uVar1 + 0x20);
    }
    uVar6 = func_0x00f78b24();
    puVar12 = &FlatBuffers_ByteBuffer__Get;
    auVar13 = func_0x00f78ac0(uVar6,0);
    unaff_x20 = lVar4;
  }
  *(long *)((long)ppuVar2 + -0x20) = unaff_x20;
  *(ulong *)((long)ppuVar2 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)ppuVar2 + -0x10) = ppuVar11;
  *(undefined **)((long)ppuVar2 + -8) = puVar12;
  uVar6 = 1;
  /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(auVar13._0_8_,auVar13._8_8_,1);
  lVar4 = *(long *)(auVar13._0_8_ + 0x10);
  if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x10), lVar4 == 0)) {
    func_0x00f78af4();
  }
  else if (auVar13._8_4_ < *(uint *)(lVar4 + 0x18)) {
    return (ulong)*(byte *)(lVar4 + (int)auVar13._8_4_ + 0x20);
  }
  uVar7 = func_0x00f78b24();
  auVar14 = func_0x00f78ac0(uVar7,0);
  *(undefined8 *)((long)ppuVar2 + -0x50) = unaff_x22;
  *(undefined8 *)((long)ppuVar2 + -0x48) = unaff_x21;
  *(undefined1 (*) [16])((long)ppuVar2 + -0x40) = auVar13;
  *(undefined1 **)((long)ppuVar2 + -0x30) = (undefined1 *)((long)ppuVar2 + -0x10);
  *(undefined **)((long)ppuVar2 + -0x28) = &FlatBuffers_ByteBuffer__GetStringUTF8;
  plVar8 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
  lVar4 = *(long *)(auVar14._0_8_ + 0x10);
  if ((lVar4 != 0) && (plVar8 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016ccdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar9 = (**(code **)(*plVar8 + 0x348))
                      (plVar8,*(undefined8 *)(lVar4 + 0x10),auVar14._8_8_,uVar6,
                       *(undefined8 *)(*plVar8 + 0x350));
    return uVar9;
  }
  auVar13 = func_0x00f78af4();
  *(undefined1 **)((long)ppuVar2 + -0x60) = (undefined1 *)((long)ppuVar2 + -0x30);
  *(undefined **)((long)ppuVar2 + -0x58) = &FlatBuffers_ByteBuffer__GetShort;
  sVar3 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(auVar13._0_8_,auVar13._8_8_,2);
  return (ulong)(uint)(int)sVar3;
}



// ============================================================
// RVA: 0x1654cd4 | Core.Networking.GameMode.get_StateTime
// ============================================================

ulong Core_Networking_GameMode__get_StateTime
                (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5)

{
  uint uVar1;
  short sVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  
  if (*(long *)(param_1 + 2) != 0) {
    uVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(param_1 + 2),*param_1 + 4,4);
    return uVar7;
  }
  piVar3 = (int *)func_0x00f78af4();
  if (*(long *)(piVar3 + 2) != 0) {
    uVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(piVar3 + 2),*piVar3 + 8,4);
    return uVar7;
  }
  piVar3 = (int *)func_0x00f78af4();
  lVar4 = *(long *)(piVar3 + 2);
  if (lVar4 == 0) {
    auVar10 = func_0x00f78af4();
    lVar4 = auVar10._0_8_;
    if ((bRam0000000003eb57f2 & 1) == 0) {
      func_0x00f78a20(0x3d3f090);
      bRam0000000003eb57f2 = 1;
    }
    if (lVar4 != 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar4,4,0x10,0);
      /*FlatBuffers.FlatBufferBuilder$$Pad*/ func_0x016cda44(lVar4,3,0);
      /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(lVar4,param_5,0);
      /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(lVar4,param_4,0);
      /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar4,param_3,0);
      /*FlatBuffers.FlatBufferBuilder$$Pad*/ func_0x016cda44(lVar4,3,0);
      /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(lVar4,auVar10._8_8_,0);
      if ((*(long *)(lVar4 + 0x18) != 0) &&
         (lVar9 = *(long *)(*(long *)(lVar4 + 0x18) + 0x10), lVar9 != 0)) {
        return (ulong)(uint)(*(int *)(lVar9 + 0x18) - *(int *)(lVar4 + 0x10));
      }
      lVar4 = func_0x00f78af4(lVar4,0);
      return (ulong)*(byte *)(lVar4 + 0x48);
    }
    lVar4 = func_0x00f78af4();
    return *(ulong *)(lVar4 + 8);
  }
  uVar1 = *piVar3 + 0xc;
  uVar8 = 1;
  /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar4,uVar1,1);
  if ((*(long *)(lVar4 + 0x10) == 0) ||
     (lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + 0x10), lVar4 == 0)) {
    func_0x00f78af4();
  }
  else if (uVar1 < *(uint *)(lVar4 + 0x18)) {
    return (ulong)*(byte *)(lVar4 + (int)uVar1 + 0x20);
  }
  uVar5 = func_0x00f78b24();
  auVar10 = func_0x00f78ac0(uVar5,0);
  plVar6 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
  lVar4 = *(long *)(auVar10._0_8_ + 0x10);
  if ((lVar4 != 0) && (plVar6 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016ccdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (**(code **)(*plVar6 + 0x348))
                      (plVar6,*(undefined8 *)(lVar4 + 0x10),auVar10._8_8_,uVar8,
                       *(undefined8 *)(*plVar6 + 0x350));
    return uVar7;
  }
  auVar10 = func_0x00f78af4();
  sVar2 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(auVar10._0_8_,auVar10._8_8_,2);
  return (ulong)(uint)(int)sVar2;
}



// ============================================================
// RVA: 0x1654d00 | Core.Networking.GameMode.get_SyncId
// ============================================================

ulong Core_Networking_GameMode__get_SyncId
                (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5)

{
  uint uVar1;
  short sVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  
  if (*(long *)(param_1 + 2) != 0) {
    uVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(param_1 + 2),*param_1 + 8,4);
    return uVar7;
  }
  piVar3 = (int *)func_0x00f78af4();
  lVar4 = *(long *)(piVar3 + 2);
  if (lVar4 == 0) {
    auVar10 = func_0x00f78af4();
    lVar4 = auVar10._0_8_;
    if ((bRam0000000003eb57f2 & 1) == 0) {
      func_0x00f78a20(0x3d3f090);
      bRam0000000003eb57f2 = 1;
    }
    if (lVar4 != 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar4,4,0x10,0);
      /*FlatBuffers.FlatBufferBuilder$$Pad*/ func_0x016cda44(lVar4,3,0);
      /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(lVar4,param_5,0);
      /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(lVar4,param_4,0);
      /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar4,param_3,0);
      /*FlatBuffers.FlatBufferBuilder$$Pad*/ func_0x016cda44(lVar4,3,0);
      /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(lVar4,auVar10._8_8_,0);
      if ((*(long *)(lVar4 + 0x18) != 0) &&
         (lVar9 = *(long *)(*(long *)(lVar4 + 0x18) + 0x10), lVar9 != 0)) {
        return (ulong)(uint)(*(int *)(lVar9 + 0x18) - *(int *)(lVar4 + 0x10));
      }
      lVar4 = func_0x00f78af4(lVar4,0);
      return (ulong)*(byte *)(lVar4 + 0x48);
    }
    lVar4 = func_0x00f78af4();
    return *(ulong *)(lVar4 + 8);
  }
  uVar1 = *piVar3 + 0xc;
  uVar8 = 1;
  /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar4,uVar1,1);
  if ((*(long *)(lVar4 + 0x10) == 0) ||
     (lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + 0x10), lVar4 == 0)) {
    func_0x00f78af4();
  }
  else if (uVar1 < *(uint *)(lVar4 + 0x18)) {
    return (ulong)*(byte *)(lVar4 + (int)uVar1 + 0x20);
  }
  uVar5 = func_0x00f78b24();
  auVar10 = func_0x00f78ac0(uVar5,0);
  plVar6 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
  lVar4 = *(long *)(auVar10._0_8_ + 0x10);
  if ((lVar4 != 0) && (plVar6 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016ccdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (**(code **)(*plVar6 + 0x348))
                      (plVar6,*(undefined8 *)(lVar4 + 0x10),auVar10._8_8_,uVar8,
                       *(undefined8 *)(*plVar6 + 0x350));
    return uVar7;
  }
  auVar10 = func_0x00f78af4();
  sVar2 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(auVar10._0_8_,auVar10._8_8_,2);
  return (ulong)(uint)(int)sVar2;
}



// ============================================================
// RVA: 0x1654d2c | Core.Networking.GameMode.get_ExtraData
// ============================================================

ulong Core_Networking_GameMode__get_ExtraData
                (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5)

{
  uint uVar1;
  short sVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  
  lVar3 = *(long *)(param_1 + 2);
  if (lVar3 == 0) {
    auVar9 = func_0x00f78af4();
    lVar3 = auVar9._0_8_;
    if ((bRam0000000003eb57f2 & 1) == 0) {
      func_0x00f78a20(0x3d3f090);
      bRam0000000003eb57f2 = 1;
    }
    if (lVar3 != 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar3,4,0x10,0);
      /*FlatBuffers.FlatBufferBuilder$$Pad*/ func_0x016cda44(lVar3,3,0);
      /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(lVar3,param_5,0);
      /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(lVar3,param_4,0);
      /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar3,param_3,0);
      /*FlatBuffers.FlatBufferBuilder$$Pad*/ func_0x016cda44(lVar3,3,0);
      /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(lVar3,auVar9._8_8_,0);
      if ((*(long *)(lVar3 + 0x18) != 0) &&
         (lVar8 = *(long *)(*(long *)(lVar3 + 0x18) + 0x10), lVar8 != 0)) {
        return (ulong)(uint)(*(int *)(lVar8 + 0x18) - *(int *)(lVar3 + 0x10));
      }
      lVar3 = func_0x00f78af4(lVar3,0);
      return (ulong)*(byte *)(lVar3 + 0x48);
    }
    lVar3 = func_0x00f78af4();
    return *(ulong *)(lVar3 + 8);
  }
  uVar1 = *param_1 + 0xc;
  uVar7 = 1;
  /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar3,uVar1,1);
  if ((*(long *)(lVar3 + 0x10) == 0) ||
     (lVar3 = *(long *)(*(long *)(lVar3 + 0x10) + 0x10), lVar3 == 0)) {
    func_0x00f78af4();
  }
  else if (uVar1 < *(uint *)(lVar3 + 0x18)) {
    return (ulong)*(byte *)(lVar3 + (int)uVar1 + 0x20);
  }
  uVar4 = func_0x00f78b24();
  auVar9 = func_0x00f78ac0(uVar4,0);
  plVar5 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
  lVar3 = *(long *)(auVar9._0_8_ + 0x10);
  if ((lVar3 != 0) && (plVar5 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016ccdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)(*plVar5 + 0x348))
                      (plVar5,*(undefined8 *)(lVar3 + 0x10),auVar9._8_8_,uVar7,
                       *(undefined8 *)(*plVar5 + 0x350));
    return uVar6;
  }
  auVar9 = func_0x00f78af4();
  sVar2 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(auVar9._0_8_,auVar9._8_8_,2);
  return (ulong)(uint)(int)sVar2;
}



// ============================================================
// RVA: 0x1654d58 | Core.Networking.GameMode.CreateGameMode
// ============================================================

ulong Core_Networking_GameMode__CreateGameMode
                (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5)

{
  long lVar1;
  
  if ((bRam0000000003eb57f2 & 1) == 0) {
    func_0x00f78a20(0x3d3f090);
    bRam0000000003eb57f2 = 1;
  }
  if (param_1 != 0) {
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,4,0x10,0);
    /*FlatBuffers.FlatBufferBuilder$$Pad*/ func_0x016cda44(param_1,3,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_1,param_5,0);
    /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(param_1,param_4,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(param_1,param_3,0);
    /*FlatBuffers.FlatBufferBuilder$$Pad*/ func_0x016cda44(param_1,3,0);
    /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(param_1,param_2,0);
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar1 != 0)) {
      return (ulong)(uint)(*(int *)(lVar1 + 0x18) - *(int *)(param_1 + 0x10));
    }
    lVar1 = func_0x00f78af4(param_1,0);
    return (ulong)*(byte *)(lVar1 + 0x48);
  }
  lVar1 = func_0x00f78af4();
  return *(ulong *)(lVar1 + 8);
}



