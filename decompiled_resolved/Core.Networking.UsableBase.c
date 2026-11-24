// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Networking.UsableBase

// ============================================================
// RVA: 0x16540a8 | Core.Networking.UsableBase.__assign
// ============================================================

undefined1  [16]
Core_Networking_UsableBase____assign(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)param_1 = param_2;
  param_1[1] = param_3;
  auVar1._0_8_ = *param_1;
  auVar1._8_8_ = param_3;
  return auVar1;
}



// ============================================================
// RVA: 0x1660094 | Core.Networking.UsableBase.get_Time
// ============================================================

long Core_Networking_UsableBase__get_Time
               (int *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 *extraout_x8;
  ulong uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 extraout_s0;
  ulong uStack_c8;
  long lStack_c0;
  undefined1 auStack_b8 [16];
  undefined4 uStack_a8;
  uint uStack_a4;
  undefined5 uStack_a0;
  undefined3 uStack_9b;
  undefined5 uStack_98;
  undefined8 uStack_93;
  long lStack_88;
  
  if (*(long *)(param_1 + 2) != 0) {
    lVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(param_1 + 2),*param_1 + 0x14,4);
    return lVar7;
  }
  auStack_b8 = func_0x00f78af4();
  lVar7 = auStack_b8._8_8_;
  uVar5 = auStack_b8._0_8_;
  lStack_88 = *(long *)PTR_03a5d648;
  uStack_a8 = 0;
  uStack_a4 = uStack_a4 & 0xffffff00;
  uVar3 = /*Core.Networking.UsableBase$$get_GroupId*/ func_0x0166154c(auStack_b8);
  uVar1 = /*Core.Networking.UsableBase$$get_ChargesRemaining*/ func_0x01661578(auStack_b8);
  uVar4 = /*Core.Networking.UsableBase$$get_UsableKey*/ func_0x016615a4(auStack_b8);
  uVar2 = /*Core.Networking.UsableBase$$get_Action*/ func_0x016615d0(auStack_b8);
  uStack_9b = (undefined3)param_3[1];
  uStack_98 = (undefined5)((ulong)param_3[1] >> 0x18);
  uStack_a4._1_3_ = (undefined3)*param_3;
  uStack_a0 = (undefined5)((ulong)*param_3 >> 0x18);
  uStack_93 = param_3[2];
  if (lVar7 == 0) {
    func_0x00f78af4();
  }
  else {
    uVar8 = uVar5 & 0xffffffff;
    uVar9 = /*FlatBuffers.ByteBuffer$$GetFloat*/ func_0x016cce2c(lVar7,uVar5,0);
    uStack_c8 = uVar8;
    lStack_c0 = lVar7;
    uVar10 = /*Core.Networking.Vec3$$get_Y*/ func_0x0165aa2c(&uStack_c8);
    uStack_c8 = uVar8;
    lStack_c0 = lVar7;
    lVar7 = /*Core.Networking.Vec3$$get_Z*/ func_0x0165aa58(&uStack_c8);
    *extraout_x8 = param_4;
    *(undefined2 *)(extraout_x8 + 1) = uVar3;
    *(undefined1 *)((long)extraout_x8 + 6) = uVar1;
    *(undefined1 *)((long)extraout_x8 + 7) = 0;
    *(undefined2 *)(extraout_x8 + 2) = uVar4;
    *(undefined1 *)((long)extraout_x8 + 10) = uVar2;
    *(ulong *)((long)extraout_x8 + 0x13) = CONCAT35(uStack_9b,uStack_a0);
    *(ulong *)((long)extraout_x8 + 0xb) = CONCAT44(uStack_a4,uStack_a8);
    *(undefined8 *)(extraout_x8 + 8) = uStack_93;
    *(ulong *)(extraout_x8 + 6) = CONCAT53(uStack_98,uStack_9b);
    extraout_x8[10] = uVar9;
    extraout_x8[0xb] = uVar10;
    extraout_x8[0xc] = extraout_s0;
    extraout_x8[0xd] = 0;
    if (*(long *)PTR_03a5d648 == lStack_88) {
      return lVar7;
    }
  }
  lVar7 = ___stack_chk_fail();
  if ((bRam0000000003eb5851 & 1) == 0) {
    func_0x00f78a20(0x3d3b3c0);
    func_0x00f78a20(0x3d3b500);
    func_0x00f78a20(0x3d3b420);
    func_0x00f78a20(0x3d3b5a0);
    func_0x00f78a20(0x3d3b628);
    func_0x00f78a20(0x3d3b5e8);
    func_0x00f78a20(0x3d3b658);
    func_0x00f78a20(0x3d1dc50);
    func_0x00f78a20(0x3d1dc60);
    func_0x00f78a20(0x3d1dc18);
    func_0x00f78a20(0x3d1dc58);
    func_0x00f78a20(0x3d1dc08);
    func_0x00f78a20(0x3d1dc48);
    func_0x00f78a20(0x3d1dc38);
    bRam0000000003eb5851 = 1;
  }
  uVar6 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkCar>_TypeInfo*/ uRam0000000003d1dc08);
  /*System.Collections.Generic.List<NetworkCar>$$.ctor*/ func_0x02401db8(uVar6,8,uRam0000000003d3b3c0);
  *(undefined8 *)(lVar7 + 0x38) = uVar6;
  uVar6 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkCar>_TypeInfo*/ uRam0000000003d1dc08);
  /*System.Collections.Generic.List<NetworkCar>$$.ctor*/ func_0x02401db8(uVar6,8,uRam0000000003d3b3c0);
  *(undefined8 *)(lVar7 + 0x40) = uVar6;
  uVar6 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkUsable>_TypeInfo*/ uRam0000000003d1dc58);
  /*System.Collections.Generic.List<NetworkUsable>$$.ctor*/ func_0x0241def8(uVar6,8,uRam0000000003d3b628);
  *(undefined8 *)(lVar7 + 0x48) = uVar6;
  uVar6 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkUsable>_TypeInfo*/ uRam0000000003d1dc58);
  /*System.Collections.Generic.List<NetworkUsable>$$.ctor*/ func_0x0241def8(uVar6,8,uRam0000000003d3b628);
  *(undefined8 *)(lVar7 + 0x50) = uVar6;
  uVar6 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkPlayer>_TypeInfo*/ uRam0000000003d1dc38);
  /*System.Collections.Generic.List<NetworkPlayer>$$.ctor*/ func_0x02412e80(uVar6,8,uRam0000000003d3b500);
  *(undefined8 *)(lVar7 + 0x58) = uVar6;
  uVar6 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkVote>_TypeInfo*/ uRam0000000003d1dc60);
  /*System.Collections.Generic.List<NetworkVote>$$.ctor*/ func_0x02420d24(uVar6,0xc,uRam0000000003d3b658);
  *(undefined8 *)(lVar7 + 0x60) = uVar6;
  uVar6 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkScore>_TypeInfo*/ uRam0000000003d1dc48);
  /*System.Collections.Generic.List<NetworkScore>$$.ctor*/ func_0x024188d0(uVar6,0xc,uRam0000000003d3b5a0);
  *(undefined8 *)(lVar7 + 0x68) = uVar6;
  uVar6 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkEventStanding>_TypeInfo*/ uRam0000000003d1dc18);
  /*System.Collections.Generic.List<NetworkEventStanding>$$.ctor*/ func_0x024076e8(uVar6,8,uRam0000000003d3b420);
  *(undefined8 *)(lVar7 + 0x70) = uVar6;
  uVar6 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkSpawnPosition>_TypeInfo*/ uRam0000000003d1dc50);
  /*System.Collections.Generic.List<NetworkSpawnPosition>$$.ctor*/ func_0x0241b480(uVar6,0xc,uRam0000000003d3b5e8);
  *(undefined8 *)(lVar7 + 0x78) = uVar6;
  uVar6 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkPlayer>_TypeInfo*/ uRam0000000003d1dc38);
  /*System.Collections.Generic.List<NetworkPlayer>$$.ctor*/ func_0x02412e80(uVar6,8,uRam0000000003d3b500);
  *(undefined8 *)(lVar7 + 400) = uVar6;
  *(undefined4 *)(lVar7 + 0x198) = 0xffffffff;
  *(undefined1 *)(lVar7 + 0x19c) = 1;
  return lVar7;
}



// ============================================================
// RVA: 0x166154c | Core.Networking.UsableBase.get_GroupId
// ============================================================

ulong Core_Networking_UsableBase__get_GroupId(int *param_1)

{
  undefined1 *puVar1;
  undefined1 **ppuVar2;
  short sVar3;
  long lVar4;
  int *piVar5;
  uint *puVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined1 **ppuVar12;
  undefined1 **ppuVar13;
  undefined *unaff_x30;
  undefined *puVar14;
  undefined1 auVar15 [16];
  undefined1 *puStack_30;
  undefined *puStack_28;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  puVar1 = &stack0xfffffffffffffff0;
  ppuVar12 = (undefined1 **)&stack0xfffffffffffffff0;
  lVar4 = *(long *)(param_1 + 2);
  if (lVar4 == 0) {
    piVar5 = (int *)func_0x00f78af4();
    ppuVar13 = &puStack_20;
    puStack_18 = &Core_Networking_UsableBase__get_ChargesRemaining;
    lVar4 = *(long *)(piVar5 + 2);
    if (lVar4 == 0) {
      puStack_20 = &stack0xfffffffffffffff0;
      piVar5 = (int *)func_0x00f78af4();
      ppuVar12 = &puStack_30;
      puStack_28 = &Core_Networking_UsableBase__get_UsableKey;
      if (*(long *)(piVar5 + 2) != 0) {
        auVar15._8_4_ = *piVar5 + 0xe;
        auVar15._0_8_ = *(long *)(piVar5 + 2);
        auVar15._12_4_ = 0;
        ppuVar2 = &puStack_20;
        puVar14 = &Core_Networking_UsableBase__get_UsableKey;
        puStack_30 = (undefined1 *)&puStack_20;
        goto code_r0x016ccdb4;
      }
      puStack_30 = (undefined1 *)&puStack_20;
      piVar5 = (int *)func_0x00f78af4();
      lVar4 = *(long *)(piVar5 + 2);
      if (lVar4 == 0) {
        puVar6 = (uint *)func_0x00f78af4();
        return (ulong)*puVar6;
      }
      uVar9 = (ulong)(*piVar5 + 0x10);
      register0x00000008 = (BADSPACEBASE *)&puStack_30;
      unaff_x30 = &Core_Networking_UsableBase__get_Action;
    }
    else {
      uVar9 = (ulong)(*piVar5 + 0xd);
      register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
      unaff_x30 = &Core_Networking_UsableBase__get_ChargesRemaining;
      puStack_20 = puVar1;
    }
  }
  else {
    uVar9 = (ulong)(*param_1 + 0xc);
    ppuVar12 = (undefined1 **)unaff_x29;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)register0x00000008 + -0x10) = ppuVar12;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  uVar10 = 1;
  /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar4,uVar9,1);
  if ((*(long *)(lVar4 + 0x10) == 0) ||
     (lVar11 = *(long *)(*(long *)(lVar4 + 0x10) + 0x10), lVar11 == 0)) {
    func_0x00f78af4();
  }
  else if ((uint)uVar9 < *(uint *)(lVar11 + 0x18)) {
    return (ulong)*(byte *)(lVar11 + (int)(uint)uVar9 + 0x20);
  }
  uVar7 = func_0x00f78b24();
  auVar15 = func_0x00f78ac0(uVar7,0);
  ppuVar2 = (undefined1 **)((long)register0x00000008 + -0x50);
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x40) = lVar4;
  *(ulong *)((long)register0x00000008 + -0x38) = uVar9;
  *(undefined1 **)((long)register0x00000008 + -0x30) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x28) = &FlatBuffers_ByteBuffer__GetStringUTF8;
  ppuVar13 = (undefined1 **)((long)register0x00000008 + -0x30);
  plVar8 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
  lVar4 = *(long *)(auVar15._0_8_ + 0x10);
  if ((lVar4 != 0) && (plVar8 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016ccdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar9 = (**(code **)(*plVar8 + 0x348))
                      (plVar8,*(undefined8 *)(lVar4 + 0x10),auVar15._8_8_,uVar10,
                       *(undefined8 *)(*plVar8 + 0x350));
    return uVar9;
  }
  puVar14 = &FlatBuffers_ByteBuffer__GetShort;
  auVar15 = func_0x00f78af4();
code_r0x016ccdb4:
  *(undefined1 ***)((long)ppuVar2 + -0x10) = ppuVar13;
  *(undefined **)((long)ppuVar2 + -8) = puVar14;
  sVar3 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(auVar15._0_8_,auVar15._8_8_,2);
  return (ulong)(uint)(int)sVar3;
}



// ============================================================
// RVA: 0x1661578 | Core.Networking.UsableBase.get_ChargesRemaining
// ============================================================

ulong Core_Networking_UsableBase__get_ChargesRemaining(int *param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  short sVar3;
  long lVar4;
  int *piVar5;
  uint *puVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 **unaff_x29;
  undefined1 *puVar12;
  undefined *unaff_x30;
  undefined *puVar13;
  undefined1 auVar14 [16];
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  puVar12 = &stack0xfffffffffffffff0;
  lVar4 = *(long *)(param_1 + 2);
  if (lVar4 == 0) {
    piVar5 = (int *)func_0x00f78af4();
    unaff_x29 = &puStack_20;
    puStack_18 = &Core_Networking_UsableBase__get_UsableKey;
    if (*(long *)(piVar5 + 2) != 0) {
      auVar14._8_4_ = *piVar5 + 0xe;
      auVar14._0_8_ = *(long *)(piVar5 + 2);
      auVar14._12_4_ = 0;
      puVar2 = &stack0xfffffffffffffff0;
      puVar13 = &Core_Networking_UsableBase__get_UsableKey;
      puStack_20 = &stack0xfffffffffffffff0;
      goto code_r0x016ccdb4;
    }
    puStack_20 = &stack0xfffffffffffffff0;
    piVar5 = (int *)func_0x00f78af4();
    lVar4 = *(long *)(piVar5 + 2);
    if (lVar4 == 0) {
      puVar6 = (uint *)func_0x00f78af4();
      return (ulong)*puVar6;
    }
    uVar1 = *piVar5 + 0x10;
    register0x00000008 = (BADSPACEBASE *)&puStack_20;
    unaff_x30 = &Core_Networking_UsableBase__get_Action;
  }
  else {
    uVar1 = *param_1 + 0xd;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  uVar10 = 1;
  /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar4,(ulong)uVar1,1);
  if ((*(long *)(lVar4 + 0x10) == 0) ||
     (lVar11 = *(long *)(*(long *)(lVar4 + 0x10) + 0x10), lVar11 == 0)) {
    func_0x00f78af4();
  }
  else if (uVar1 < *(uint *)(lVar11 + 0x18)) {
    return (ulong)*(byte *)(lVar11 + (int)uVar1 + 0x20);
  }
  uVar7 = func_0x00f78b24();
  auVar14 = func_0x00f78ac0(uVar7,0);
  puVar2 = (undefined1 *)((long)register0x00000008 + -0x50);
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x40) = lVar4;
  *(ulong *)((long)register0x00000008 + -0x38) = (ulong)uVar1;
  *(undefined1 **)((long)register0x00000008 + -0x30) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x28) = &FlatBuffers_ByteBuffer__GetStringUTF8;
  puVar12 = (undefined1 *)((long)register0x00000008 + -0x30);
  plVar8 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
  lVar4 = *(long *)(auVar14._0_8_ + 0x10);
  if ((lVar4 != 0) && (plVar8 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016ccdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar9 = (**(code **)(*plVar8 + 0x348))
                      (plVar8,*(undefined8 *)(lVar4 + 0x10),auVar14._8_8_,uVar10,
                       *(undefined8 *)(*plVar8 + 0x350));
    return uVar9;
  }
  puVar13 = &FlatBuffers_ByteBuffer__GetShort;
  auVar14 = func_0x00f78af4();
code_r0x016ccdb4:
  *(undefined1 **)(puVar2 + -0x10) = puVar12;
  *(undefined **)(puVar2 + -8) = puVar13;
  sVar3 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(auVar14._0_8_,auVar14._8_8_,2);
  return (ulong)(uint)(int)sVar3;
}



// ============================================================
// RVA: 0x16615a4 | Core.Networking.UsableBase.get_UsableKey
// ============================================================

ulong Core_Networking_UsableBase__get_UsableKey(int *param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  short sVar3;
  int *piVar4;
  long lVar5;
  uint *puVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined1 ***unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar11 [16];
  undefined1 **ppuStack_40;
  undefined *puStack_38;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  if (*(long *)(param_1 + 2) == 0) {
    piVar4 = (int *)func_0x00f78af4();
    puStack_18 = &Core_Networking_UsableBase__get_Action;
    lVar5 = *(long *)(piVar4 + 2);
    if (lVar5 == 0) {
      puStack_20 = &stack0xfffffffffffffff0;
      puVar6 = (uint *)func_0x00f78af4();
      return (ulong)*puVar6;
    }
    uVar1 = *piVar4 + 0x10;
    puStack_18 = &Core_Networking_UsableBase__get_Action;
    uVar10 = 1;
    puStack_20 = &stack0xfffffffffffffff0;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar5,uVar1,1);
    if ((*(long *)(lVar5 + 0x10) == 0) ||
       (lVar5 = *(long *)(*(long *)(lVar5 + 0x10) + 0x10), lVar5 == 0)) {
      func_0x00f78af4();
    }
    else if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      return (ulong)*(byte *)(lVar5 + (int)uVar1 + 0x20);
    }
    uVar7 = func_0x00f78b24();
    auVar11 = func_0x00f78ac0(uVar7,0);
    puVar2 = &stack0xffffffffffffffa0;
    puStack_38 = &FlatBuffers_ByteBuffer__GetStringUTF8;
    unaff_x29 = &ppuStack_40;
    ppuStack_40 = &puStack_20;
    plVar8 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
    lVar5 = *(long *)(auVar11._0_8_ + 0x10);
    if ((lVar5 != 0) && (plVar8 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016ccdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar9 = (**(code **)(*plVar8 + 0x348))
                        (plVar8,*(undefined8 *)(lVar5 + 0x10),auVar11._8_8_,uVar10,
                         *(undefined8 *)(*plVar8 + 0x350));
      return uVar9;
    }
    unaff_x30 = &FlatBuffers_ByteBuffer__GetShort;
    auVar11 = func_0x00f78af4();
  }
  else {
    auVar11._8_4_ = *param_1 + 0xe;
    auVar11._0_8_ = *(long *)(param_1 + 2);
    auVar11._12_4_ = 0;
    puVar2 = (undefined1 *)register0x00000008;
  }
  *(undefined1 ****)(puVar2 + -0x10) = unaff_x29;
  *(undefined **)(puVar2 + -8) = unaff_x30;
  sVar3 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(auVar11._0_8_,auVar11._8_8_,2);
  return (ulong)(uint)(int)sVar3;
}



// ============================================================
// RVA: 0x16615d0 | Core.Networking.UsableBase.get_Action
// ============================================================

ulong Core_Networking_UsableBase__get_Action(int *param_1)

{
  uint uVar1;
  short sVar2;
  long lVar3;
  uint *puVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  
  lVar3 = *(long *)(param_1 + 2);
  if (lVar3 == 0) {
    puVar4 = (uint *)func_0x00f78af4();
    return (ulong)*puVar4;
  }
  uVar1 = *param_1 + 0x10;
  uVar8 = 1;
  /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar3,uVar1,1);
  if ((*(long *)(lVar3 + 0x10) == 0) ||
     (lVar3 = *(long *)(*(long *)(lVar3 + 0x10) + 0x10), lVar3 == 0)) {
    func_0x00f78af4();
  }
  else if (uVar1 < *(uint *)(lVar3 + 0x18)) {
    return (ulong)*(byte *)(lVar3 + (int)uVar1 + 0x20);
  }
  uVar5 = func_0x00f78b24();
  auVar9 = func_0x00f78ac0(uVar5,0);
  plVar6 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
  lVar3 = *(long *)(auVar9._0_8_ + 0x10);
  if ((lVar3 != 0) && (plVar6 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016ccdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (**(code **)(*plVar6 + 0x348))
                      (plVar6,*(undefined8 *)(lVar3 + 0x10),auVar9._8_8_,uVar8,
                       *(undefined8 *)(*plVar6 + 0x350));
    return uVar7;
  }
  auVar9 = func_0x00f78af4();
  sVar2 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(auVar9._0_8_,auVar9._8_8_,2);
  return (ulong)(uint)(int)sVar2;
}



// ============================================================
// RVA: 0x16615fc | Core.Networking.UsableBase.get_Position
// ============================================================

undefined4 Core_Networking_UsableBase__get_Position(undefined4 *param_1)

{
  return *param_1;
}



// ============================================================
// RVA: 0x1661780 | Core.Networking.UsableBase.CreateUsableBase
// ============================================================

uint Core_Networking_UsableBase__CreateUsableBase
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9)

{
  long lVar1;
  undefined1 auVar2 [12];
  
  if ((bRam0000000003eb586e & 1) == 0) {
    func_0x00f78a20(0x3d3f280);
    bRam0000000003eb586e = 1;
  }
  if (param_4 != 0) {
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_4,4,0x18,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(param_4,param_9,0);
    /*FlatBuffers.FlatBufferBuilder$$Pad*/ func_0x016cda44(param_4,3,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_4,param_8,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(param_4,param_7,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_4,param_6,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_4,param_5,0);
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_4,4,0xc,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(param_3,param_4,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(param_2,param_4,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(param_1,param_4,0);
    if ((*(long *)(param_4 + 0x18) != 0) &&
       (lVar1 = *(long *)(*(long *)(param_4 + 0x18) + 0x10), lVar1 != 0)) {
      return *(int *)(lVar1 + 0x18) - *(int *)(param_4 + 0x10);
    }
    lVar1 = func_0x00f78af4(param_4,0);
    return (uint)*(byte *)(lVar1 + 0x48);
  }
  auVar2 = func_0x00f78af4();
  return (uint)(((uint)*auVar2._0_8_ & auVar2._8_4_) != 0);
}



// ============================================================
// RVA: 0x166284c | Core.Networking.UsableBase.get_ByteBuffer
// ============================================================

undefined8 Core_Networking_UsableBase__get_ByteBuffer(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// ============================================================
// RVA: 0x1662854 | Core.Networking.UsableBase.__init
// ============================================================

void Core_Networking_UsableBase____init(undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  return;
}



