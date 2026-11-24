// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Networking.Usable

// ============================================================
// RVA: 0x1656fa4 | Core.Networking.Usable.__assign
// ============================================================

undefined1  [16]
Core_Networking_Usable____assign(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)param_1 = param_2;
  param_1[1] = param_3;
  auVar1._0_8_ = *param_1;
  auVar1._8_8_ = param_3;
  return auVar1;
}



// ============================================================
// RVA: 0x1661514 | Core.Networking.Usable.get_Base
// ============================================================

int Core_Networking_Usable__get_Base(int *param_1)

{
  return *param_1 + 4;
}



// ============================================================
// RVA: 0x1661524 | Core.Networking.Usable.get_SyncId
// ============================================================

ulong Core_Networking_Usable__get_SyncId(undefined4 *param_1)

{
  undefined1 *puVar1;
  undefined1 **ppuVar3;
  undefined1 **ppuVar4;
  short sVar5;
  int *piVar6;
  long lVar7;
  uint *puVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 **ppuVar14;
  undefined *puVar15;
  undefined1 auVar16 [16];
  undefined1 *puStack_40;
  undefined *puStack_38;
  undefined1 *puStack_30;
  undefined *puStack_28;
  undefined1 *puStack_20;
  undefined *puStack_18;
  undefined1 *puVar2;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar2 = &stack0xfffffffffffffff0;
  if (*(long *)(param_1 + 2) != 0) {
    uVar11 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(param_1 + 2),*param_1,4);
    return uVar11;
  }
  piVar6 = (int *)func_0x00f78af4();
  ppuVar3 = &puStack_20;
  ppuVar14 = &puStack_20;
  puStack_18 = &Core_Networking_UsableBase__get_GroupId;
  lVar7 = *(long *)(piVar6 + 2);
  if (lVar7 == 0) {
    puStack_20 = &stack0xfffffffffffffff0;
    piVar6 = (int *)func_0x00f78af4();
    puStack_28 = &Core_Networking_UsableBase__get_ChargesRemaining;
    lVar7 = *(long *)(piVar6 + 2);
    if (lVar7 == 0) {
      puStack_30 = (undefined1 *)&puStack_20;
      piVar6 = (int *)func_0x00f78af4();
      ppuVar14 = &puStack_40;
      puStack_38 = &Core_Networking_UsableBase__get_UsableKey;
      if (*(long *)(piVar6 + 2) != 0) {
        auVar16._8_4_ = *piVar6 + 0xe;
        auVar16._0_8_ = *(long *)(piVar6 + 2);
        auVar16._12_4_ = 0;
        ppuVar4 = &puStack_30;
        puVar15 = &Core_Networking_UsableBase__get_UsableKey;
        puStack_40 = (undefined1 *)&puStack_30;
        goto code_r0x016ccdb4;
      }
      puStack_40 = (undefined1 *)&puStack_30;
      piVar6 = (int *)func_0x00f78af4();
      lVar7 = *(long *)(piVar6 + 2);
      if (lVar7 == 0) {
        puVar8 = (uint *)func_0x00f78af4();
        return (ulong)*puVar8;
      }
      uVar11 = (ulong)(*piVar6 + 0x10);
      register0x00000008 = (BADSPACEBASE *)&puStack_40;
      puVar15 = &Core_Networking_UsableBase__get_Action;
    }
    else {
      uVar11 = (ulong)(*piVar6 + 0xd);
      register0x00000008 = (BADSPACEBASE *)&puStack_20;
      puVar15 = &Core_Networking_UsableBase__get_ChargesRemaining;
      puStack_30 = (undefined1 *)ppuVar3;
    }
  }
  else {
    uVar11 = (ulong)(*piVar6 + 0xc);
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    puVar15 = &Core_Networking_UsableBase__get_GroupId;
    ppuVar14 = (undefined1 **)puVar1;
    puStack_20 = puVar2;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)register0x00000008 + -0x10) = ppuVar14;
  *(undefined **)((long)register0x00000008 + -8) = puVar15;
  uVar12 = 1;
  /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar7,uVar11,1);
  if ((*(long *)(lVar7 + 0x10) == 0) ||
     (lVar13 = *(long *)(*(long *)(lVar7 + 0x10) + 0x10), lVar13 == 0)) {
    func_0x00f78af4();
  }
  else if ((uint)uVar11 < *(uint *)(lVar13 + 0x18)) {
    return (ulong)*(byte *)(lVar13 + (int)(uint)uVar11 + 0x20);
  }
  uVar9 = func_0x00f78b24();
  auVar16 = func_0x00f78ac0(uVar9,0);
  ppuVar4 = (undefined1 **)((long)register0x00000008 + -0x50);
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x40) = lVar7;
  *(ulong *)((long)register0x00000008 + -0x38) = uVar11;
  *(undefined1 **)((long)register0x00000008 + -0x30) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x28) = &FlatBuffers_ByteBuffer__GetStringUTF8;
  plVar10 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
  lVar7 = *(long *)(auVar16._0_8_ + 0x10);
  if ((lVar7 != 0) && (plVar10 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016ccdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar11 = (**(code **)(*plVar10 + 0x348))
                       (plVar10,*(undefined8 *)(lVar7 + 0x10),auVar16._8_8_,uVar12,
                        *(undefined8 *)(*plVar10 + 0x350));
    return uVar11;
  }
  puVar15 = &FlatBuffers_ByteBuffer__GetShort;
  auVar16 = func_0x00f78af4();
code_r0x016ccdb4:
  *(undefined1 **)((long)ppuVar4 + -0x10) = (undefined1 *)((long)register0x00000008 + -0x30);
  *(undefined **)((long)ppuVar4 + -8) = puVar15;
  sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(auVar16._0_8_,auVar16._8_8_,2);
  return (ulong)(uint)(int)sVar5;
}



// ============================================================
// RVA: 0x166160c | Core.Networking.Usable.CreateUsable
// ============================================================

uint Core_Networking_Usable__CreateUsable
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10)

{
  undefined8 extraout_x1;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 *unaff_x29;
  undefined1 *puVar6;
  undefined *unaff_x30;
  undefined4 extraout_s0;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auVar9 [12];
  
  puVar6 = &stack0xfffffffffffffff0;
  uVar1 = param_6;
  uVar2 = param_7;
  uVar3 = param_8;
  uVar4 = param_9;
  uVar7 = param_2;
  uVar8 = param_3;
  if ((bRam0000000003eb586d & 1) == 0) {
    func_0x00f78a20(0x3d3f278);
    bRam0000000003eb586d = 1;
  }
  if (param_4 == 0) {
    param_4 = func_0x00f78af4();
    if ((bRam0000000003eb586e & 1) == 0) {
      func_0x00f78a20(0x3d3f280);
      bRam0000000003eb586e = 1;
    }
    if (param_4 == 0) {
      auVar9 = func_0x00f78af4();
      return (uint)(((uint)*auVar9._0_8_ & auVar9._8_4_) != 0);
    }
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_4,4,0x18,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(param_4,uVar4,0);
    /*FlatBuffers.FlatBufferBuilder$$Pad*/ func_0x016cda44(param_4,3,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_4,uVar3,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(param_4,uVar2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_4,uVar1,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_4,extraout_x1,0);
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_4,4,0xc,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(uVar8,param_4,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(uVar7,param_4,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(extraout_s0,param_4,0);
    unaff_x30 = &Core_Networking_UsableBase__CreateUsableBase;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff90;
  }
  else {
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_4,4,0x1c,0);
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_4,4,0x18,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(param_4,param_10,0);
    /*FlatBuffers.FlatBufferBuilder$$Pad*/ func_0x016cda44(param_4,3,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_4,param_9,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(param_4,param_8,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_4,param_7,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_4,param_6,0);
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_4,4,0xc,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(param_3,param_4,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(param_2,param_4,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(param_1,param_4,0);
    /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(param_4,param_5,0);
    puVar6 = unaff_x29;
  }
  *(undefined1 **)((long)register0x00000008 + -0x10) = puVar6;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if ((*(long *)(param_4 + 0x18) != 0) &&
     (lVar5 = *(long *)(*(long *)(param_4 + 0x18) + 0x10), lVar5 != 0)) {
    return *(int *)(lVar5 + 0x18) - *(int *)(param_4 + 0x10);
  }
  lVar5 = func_0x00f78af4(param_4,0);
  return (uint)*(byte *)(lVar5 + 0x48);
}



// ============================================================
// RVA: 0x1662838 | Core.Networking.Usable.get_ByteBuffer
// ============================================================

undefined8 Core_Networking_Usable__get_ByteBuffer(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// ============================================================
// RVA: 0x1662840 | Core.Networking.Usable.__init
// ============================================================

void Core_Networking_Usable____init(undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  return;
}



