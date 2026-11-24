// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Services.ReplicatorQuaternion

// ============================================================
// RVA: 0x168357c | Core.Services.ReplicatorQuaternion.get_X
// ============================================================

ulong Core_Services_ReplicatorQuaternion__get_X(uint *param_1)

{
  undefined1 *puVar1;
  undefined1 **ppuVar3;
  short sVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 **unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar13 [16];
  undefined1 *puStack_30;
  undefined *puStack_28;
  undefined1 *puStack_20;
  undefined *puStack_18;
  undefined1 *puVar2;
  undefined1 **ppuVar4;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar2 = &stack0xfffffffffffffff0;
  lVar6 = *(long *)(param_1 + 2);
  if (lVar6 == 0) {
    piVar7 = (int *)func_0x00f78af4();
    ppuVar3 = &puStack_20;
    ppuVar4 = &puStack_20;
    puStack_18 = &Core_Services_ReplicatorQuaternion__get_Y;
    lVar6 = *(long *)(piVar7 + 2);
    if (lVar6 == 0) {
      puStack_20 = &stack0xfffffffffffffff0;
      piVar7 = (int *)func_0x00f78af4();
      unaff_x29 = &puStack_30;
      puStack_28 = &Core_Services_ReplicatorQuaternion__get_Z;
      lVar6 = *(long *)(piVar7 + 2);
      if (lVar6 == 0) {
        puStack_30 = (undefined1 *)&puStack_20;
        piVar7 = (int *)func_0x00f78af4();
        lVar6 = *(long *)(piVar7 + 2);
        if (lVar6 == 0) {
          lVar6 = func_0x00f78af4();
          return *(ulong *)(lVar6 + 8);
        }
        uVar10 = (ulong)(*piVar7 + 3);
        register0x00000008 = (BADSPACEBASE *)&puStack_30;
        unaff_x30 = &Core_Services_ReplicatorQuaternion__get_W;
      }
      else {
        uVar10 = (ulong)(*piVar7 + 2);
        register0x00000008 = (BADSPACEBASE *)&puStack_20;
        unaff_x30 = &Core_Services_ReplicatorQuaternion__get_Z;
        unaff_x29 = ppuVar4;
        puStack_30 = (undefined1 *)ppuVar3;
      }
    }
    else {
      uVar10 = (ulong)(*piVar7 + 1);
      register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
      unaff_x30 = &Core_Services_ReplicatorQuaternion__get_Y;
      unaff_x29 = (undefined1 **)puVar2;
      puStack_20 = puVar1;
    }
  }
  else {
    uVar10 = (ulong)*param_1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  uVar11 = 1;
  /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar6,uVar10,1);
  if ((*(long *)(lVar6 + 0x10) == 0) ||
     (lVar12 = *(long *)(*(long *)(lVar6 + 0x10) + 0x10), lVar12 == 0)) {
    func_0x00f78af4();
  }
  else if ((uint)uVar10 < *(uint *)(lVar12 + 0x18)) {
    return (ulong)*(byte *)(lVar12 + (int)(uint)uVar10 + 0x20);
  }
  uVar8 = func_0x00f78b24();
  auVar13 = func_0x00f78ac0(uVar8,0);
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x40) = lVar6;
  *(ulong *)((long)register0x00000008 + -0x38) = uVar10;
  *(undefined1 **)((long)register0x00000008 + -0x30) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x28) = &FlatBuffers_ByteBuffer__GetStringUTF8;
  plVar9 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
  lVar6 = *(long *)(auVar13._0_8_ + 0x10);
  if ((lVar6 != 0) && (plVar9 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016ccdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar10 = (**(code **)(*plVar9 + 0x348))
                       (plVar9,*(undefined8 *)(lVar6 + 0x10),auVar13._8_8_,uVar11,
                        *(undefined8 *)(*plVar9 + 0x350));
    return uVar10;
  }
  auVar13 = func_0x00f78af4();
  *(undefined1 **)((long)register0x00000008 + -0x60) =
       (undefined1 *)((long)register0x00000008 + -0x30);
  *(undefined **)((long)register0x00000008 + -0x58) = &FlatBuffers_ByteBuffer__GetShort;
  sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(auVar13._0_8_,auVar13._8_8_,2);
  return (ulong)(uint)(int)sVar5;
}



// ============================================================
// RVA: 0x16835a4 | Core.Services.ReplicatorQuaternion.get_Y
// ============================================================

ulong Core_Services_ReplicatorQuaternion__get_Y(int *param_1)

{
  undefined1 *puVar1;
  short sVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 **unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar11 [16];
  undefined1 *puStack_20;
  undefined *puStack_18;
  undefined1 *puVar2;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar2 = &stack0xfffffffffffffff0;
  lVar4 = *(long *)(param_1 + 2);
  if (lVar4 == 0) {
    piVar5 = (int *)func_0x00f78af4();
    unaff_x29 = &puStack_20;
    puStack_18 = &Core_Services_ReplicatorQuaternion__get_Z;
    lVar4 = *(long *)(piVar5 + 2);
    if (lVar4 == 0) {
      puStack_20 = &stack0xfffffffffffffff0;
      piVar5 = (int *)func_0x00f78af4();
      lVar4 = *(long *)(piVar5 + 2);
      if (lVar4 == 0) {
        lVar4 = func_0x00f78af4();
        return *(ulong *)(lVar4 + 8);
      }
      uVar8 = (ulong)(*piVar5 + 3);
      register0x00000008 = (BADSPACEBASE *)&puStack_20;
      unaff_x30 = &Core_Services_ReplicatorQuaternion__get_W;
    }
    else {
      uVar8 = (ulong)(*piVar5 + 2);
      register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
      unaff_x30 = &Core_Services_ReplicatorQuaternion__get_Z;
      unaff_x29 = (undefined1 **)puVar2;
      puStack_20 = puVar1;
    }
  }
  else {
    uVar8 = (ulong)(*param_1 + 1);
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  uVar9 = 1;
  /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar4,uVar8,1);
  if ((*(long *)(lVar4 + 0x10) == 0) ||
     (lVar10 = *(long *)(*(long *)(lVar4 + 0x10) + 0x10), lVar10 == 0)) {
    func_0x00f78af4();
  }
  else if ((uint)uVar8 < *(uint *)(lVar10 + 0x18)) {
    return (ulong)*(byte *)(lVar10 + (int)(uint)uVar8 + 0x20);
  }
  uVar6 = func_0x00f78b24();
  auVar11 = func_0x00f78ac0(uVar6,0);
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x40) = lVar4;
  *(ulong *)((long)register0x00000008 + -0x38) = uVar8;
  *(undefined1 **)((long)register0x00000008 + -0x30) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x28) = &FlatBuffers_ByteBuffer__GetStringUTF8;
  plVar7 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
  lVar4 = *(long *)(auVar11._0_8_ + 0x10);
  if ((lVar4 != 0) && (plVar7 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016ccdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)(*plVar7 + 0x348))
                      (plVar7,*(undefined8 *)(lVar4 + 0x10),auVar11._8_8_,uVar9,
                       *(undefined8 *)(*plVar7 + 0x350));
    return uVar8;
  }
  auVar11 = func_0x00f78af4();
  *(undefined1 **)((long)register0x00000008 + -0x60) =
       (undefined1 *)((long)register0x00000008 + -0x30);
  *(undefined **)((long)register0x00000008 + -0x58) = &FlatBuffers_ByteBuffer__GetShort;
  sVar3 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(auVar11._0_8_,auVar11._8_8_,2);
  return (ulong)(uint)(int)sVar3;
}



// ============================================================
// RVA: 0x16835d0 | Core.Services.ReplicatorQuaternion.get_Z
// ============================================================

ulong Core_Services_ReplicatorQuaternion__get_Z(int *param_1)

{
  uint uVar1;
  short sVar2;
  long lVar3;
  int *piVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar10;
  undefined *unaff_x30;
  undefined1 auVar11 [16];
  
  puVar10 = &stack0xfffffffffffffff0;
  lVar3 = *(long *)(param_1 + 2);
  if (lVar3 == 0) {
    piVar4 = (int *)func_0x00f78af4();
    lVar3 = *(long *)(piVar4 + 2);
    if (lVar3 == 0) {
      lVar3 = func_0x00f78af4();
      return *(ulong *)(lVar3 + 8);
    }
    uVar1 = *piVar4 + 3;
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x30 = &Core_Services_ReplicatorQuaternion__get_W;
  }
  else {
    uVar1 = *param_1 + 2;
    puVar10 = unaff_x29;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = puVar10;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  uVar8 = 1;
  /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar3,(ulong)uVar1,1);
  if ((*(long *)(lVar3 + 0x10) == 0) ||
     (lVar9 = *(long *)(*(long *)(lVar3 + 0x10) + 0x10), lVar9 == 0)) {
    func_0x00f78af4();
  }
  else if (uVar1 < *(uint *)(lVar9 + 0x18)) {
    return (ulong)*(byte *)(lVar9 + (int)uVar1 + 0x20);
  }
  uVar5 = func_0x00f78b24();
  auVar11 = func_0x00f78ac0(uVar5,0);
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x40) = lVar3;
  *(ulong *)((long)register0x00000008 + -0x38) = (ulong)uVar1;
  *(undefined1 **)((long)register0x00000008 + -0x30) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x28) = &FlatBuffers_ByteBuffer__GetStringUTF8;
  plVar6 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
  lVar3 = *(long *)(auVar11._0_8_ + 0x10);
  if ((lVar3 != 0) && (plVar6 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016ccdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (**(code **)(*plVar6 + 0x348))
                      (plVar6,*(undefined8 *)(lVar3 + 0x10),auVar11._8_8_,uVar8,
                       *(undefined8 *)(*plVar6 + 0x350));
    return uVar7;
  }
  auVar11 = func_0x00f78af4();
  *(undefined1 **)((long)register0x00000008 + -0x60) =
       (undefined1 *)((long)register0x00000008 + -0x30);
  *(undefined **)((long)register0x00000008 + -0x58) = &FlatBuffers_ByteBuffer__GetShort;
  sVar2 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(auVar11._0_8_,auVar11._8_8_,2);
  return (ulong)(uint)(int)sVar2;
}



// ============================================================
// RVA: 0x16835fc | Core.Services.ReplicatorQuaternion.get_W
// ============================================================

ulong Core_Services_ReplicatorQuaternion__get_W(int *param_1)

{
  uint uVar1;
  short sVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  lVar3 = *(long *)(param_1 + 2);
  if (lVar3 == 0) {
    lVar3 = func_0x00f78af4();
    return *(ulong *)(lVar3 + 8);
  }
  uVar1 = *param_1 + 3;
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
  auVar8 = func_0x00f78ac0(uVar4,0);
  plVar5 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
  lVar3 = *(long *)(auVar8._0_8_ + 0x10);
  if ((lVar3 != 0) && (plVar5 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016ccdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)(*plVar5 + 0x348))
                      (plVar5,*(undefined8 *)(lVar3 + 0x10),auVar8._8_8_,uVar7,
                       *(undefined8 *)(*plVar5 + 0x350));
    return uVar6;
  }
  auVar8 = func_0x00f78af4();
  sVar2 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(auVar8._0_8_,auVar8._8_8_,2);
  return (ulong)(uint)(int)sVar2;
}



// ============================================================
// RVA: 0x1683628 | Core.Services.ReplicatorQuaternion.get_ByteBuffer
// ============================================================

undefined8 Core_Services_ReplicatorQuaternion__get_ByteBuffer(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// ============================================================
// RVA: 0x1683630 | Core.Services.ReplicatorQuaternion.__init
// ============================================================

void Core_Services_ReplicatorQuaternion____init
               (undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  return;
}



// ============================================================
// RVA: 0x168363c | Core.Services.ReplicatorQuaternion.__assign
// ============================================================

undefined1  [16]
Core_Services_ReplicatorQuaternion____assign
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
// RVA: 0x1683650 | Core.Services.ReplicatorQuaternion.CreateReplicatorQuaternion
// ============================================================

ulong Core_Services_ReplicatorQuaternion__CreateReplicatorQuaternion
                (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5)

{
  long lVar1;
  
  if ((bRam0000000003eb5a06 & 1) == 0) {
    func_0x00f78a20(0x3d3f1f0);
    bRam0000000003eb5a06 = 1;
  }
  if (param_1 != 0) {
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,1,4,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_1,param_5,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_1,param_4,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_1,param_3,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_1,param_2,0);
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



