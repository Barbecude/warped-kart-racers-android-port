// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Networking.NetworkUsable

// ============================================================
// RVA: 0x165bc04 | Core.Networking.NetworkUsable.ToUsableBaseFlatBuffer
// ============================================================

uint Core_Networking_NetworkUsable__ToUsableBaseFlatBuffer(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  short sVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auVar10 [12];
  
  uVar7 = *(undefined4 *)(param_1 + 0x28);
  uVar8 = *(undefined4 *)(param_1 + 0x2c);
  uVar9 = *(undefined4 *)(param_1 + 0x30);
  uVar2 = *(undefined1 *)(param_1 + 4);
  uVar3 = *(undefined1 *)(param_1 + 6);
  sVar5 = *(short *)(param_1 + 8);
  uVar4 = *(undefined1 *)(param_1 + 10);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  if ((bRam0000000003eb586e & 1) == 0) {
    func_0x00f78a20(0x3d3f280);
    bRam0000000003eb586e = 1;
  }
  if (param_2 != 0) {
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_2,4,0x18,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(param_2,uVar1,0);
    /*FlatBuffers.FlatBufferBuilder$$Pad*/ func_0x016cda44(param_2,3,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_2,uVar4,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(param_2,(long)sVar5,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_2,uVar3,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_2,uVar2,0);
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_2,4,0xc,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(uVar9,param_2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(uVar8,param_2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(uVar7,param_2,0);
    if ((*(long *)(param_2 + 0x18) != 0) &&
       (lVar6 = *(long *)(*(long *)(param_2 + 0x18) + 0x10), lVar6 != 0)) {
      return *(int *)(lVar6 + 0x18) - *(int *)(param_2 + 0x10);
    }
    lVar6 = func_0x00f78af4(param_2,0);
    return (uint)*(byte *)(lVar6 + 0x48);
  }
  auVar10 = func_0x00f78af4();
  return (uint)(((uint)*auVar10._0_8_ & auVar10._8_4_) != 0);
}



// ============================================================
// RVA: 0x165be08 | Core.Networking.NetworkUsable.ToUsableFlatBuffer
// ============================================================

uint Core_Networking_NetworkUsable__ToUsableFlatBuffer(undefined4 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 extraout_x1;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined1 *unaff_x29;
  undefined1 *puVar11;
  undefined *unaff_x30;
  undefined4 uVar12;
  undefined4 extraout_s0;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auVar17 [12];
  
  uVar1 = *param_1;
  uVar12 = param_1[10];
  uVar13 = param_1[0xb];
  uVar15 = param_1[0xc];
  uVar3 = (ulong)*(byte *)(param_1 + 1);
  uVar5 = (ulong)*(byte *)((long)param_1 + 6);
  lVar7 = (long)*(short *)(param_1 + 2);
  uVar8 = (ulong)*(byte *)((long)param_1 + 10);
  uVar2 = param_1[4];
  puVar11 = &stack0xfffffffffffffff0;
  uVar4 = uVar3;
  uVar6 = uVar5;
  lVar10 = lVar7;
  uVar9 = uVar8;
  uVar14 = uVar13;
  uVar16 = uVar15;
  if ((bRam0000000003eb586d & 1) == 0) {
    func_0x00f78a20(0x3d3f278);
    bRam0000000003eb586d = 1;
  }
  if (param_2 == 0) {
    param_2 = func_0x00f78af4();
    if ((bRam0000000003eb586e & 1) == 0) {
      func_0x00f78a20(0x3d3f280);
      bRam0000000003eb586e = 1;
    }
    if (param_2 == 0) {
      auVar17 = func_0x00f78af4();
      return (uint)(((uint)*auVar17._0_8_ & auVar17._8_4_) != 0);
    }
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_2,4,0x18,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(param_2,uVar9,0);
    /*FlatBuffers.FlatBufferBuilder$$Pad*/ func_0x016cda44(param_2,3,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_2,lVar10,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(param_2,uVar6,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_2,uVar4,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_2,extraout_x1,0);
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_2,4,0xc,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(uVar16,param_2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(uVar14,param_2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(extraout_s0,param_2,0);
    unaff_x30 = &Core_Networking_UsableBase__CreateUsableBase;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff90;
  }
  else {
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_2,4,0x1c,0);
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_2,4,0x18,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(param_2,uVar2,0);
    /*FlatBuffers.FlatBufferBuilder$$Pad*/ func_0x016cda44(param_2,3,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_2,uVar8,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(param_2,lVar7,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_2,uVar5,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_2,uVar3,0);
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_2,4,0xc,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(uVar15,param_2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(uVar13,param_2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(uVar12,param_2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(param_2,uVar1,0);
    puVar11 = unaff_x29;
  }
  *(undefined1 **)((long)register0x00000008 + -0x10) = puVar11;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if ((*(long *)(param_2 + 0x18) != 0) &&
     (lVar10 = *(long *)(*(long *)(param_2 + 0x18) + 0x10), lVar10 != 0)) {
    return *(int *)(lVar10 + 0x18) - *(int *)(param_2 + 0x10);
  }
  lVar10 = func_0x00f78af4(param_2,0);
  return (uint)*(byte *)(lVar10 + 0x48);
}



// ============================================================
// RVA: 0x16600c0 | Core.Networking.NetworkUsable.FlatBufferToNetworkUsable
// ============================================================

long Core_Networking_NetworkUsable__FlatBufferToNetworkUsable
               (undefined4 *param_1,ulong param_2,long param_3,undefined8 *param_4,
               undefined4 param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 extraout_s0;
  ulong uStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  undefined4 uStack_98;
  uint uStack_94;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 uStack_88;
  undefined8 uStack_83;
  long lStack_78;
  
  lStack_78 = *(long *)PTR_03a5d648;
  uStack_98 = 0;
  uStack_94 = uStack_94 & 0xffffff00;
  uStack_a8 = param_2;
  lStack_a0 = param_3;
  uVar3 = /*Core.Networking.UsableBase$$get_GroupId*/ func_0x0166154c(&uStack_a8);
  uVar1 = /*Core.Networking.UsableBase$$get_ChargesRemaining*/ func_0x01661578(&uStack_a8);
  uVar4 = /*Core.Networking.UsableBase$$get_UsableKey*/ func_0x016615a4(&uStack_a8);
  uVar2 = /*Core.Networking.UsableBase$$get_Action*/ func_0x016615d0(&uStack_a8);
  uStack_8b = (undefined3)param_4[1];
  uStack_88 = (undefined5)((ulong)param_4[1] >> 0x18);
  uStack_94._1_3_ = (undefined3)*param_4;
  uStack_90 = (undefined5)((ulong)*param_4 >> 0x18);
  uStack_83 = param_4[2];
  if (param_3 == 0) {
    func_0x00f78af4();
  }
  else {
    uVar7 = /*FlatBuffers.ByteBuffer$$GetFloat*/ func_0x016cce2c(param_3,param_2,0);
    uStack_b8 = param_2 & 0xffffffff;
    lStack_b0 = param_3;
    uVar8 = /*Core.Networking.Vec3$$get_Y*/ func_0x0165aa2c(&uStack_b8);
    uStack_b8 = param_2 & 0xffffffff;
    lStack_b0 = param_3;
    lVar5 = /*Core.Networking.Vec3$$get_Z*/ func_0x0165aa58(&uStack_b8);
    *param_1 = param_5;
    *(undefined2 *)(param_1 + 1) = uVar3;
    *(undefined1 *)((long)param_1 + 6) = uVar1;
    *(undefined1 *)((long)param_1 + 7) = 0;
    *(undefined2 *)(param_1 + 2) = uVar4;
    *(undefined1 *)((long)param_1 + 10) = uVar2;
    *(ulong *)((long)param_1 + 0x13) = CONCAT35(uStack_8b,uStack_90);
    *(ulong *)((long)param_1 + 0xb) = CONCAT44(uStack_94,uStack_98);
    *(undefined8 *)(param_1 + 8) = uStack_83;
    *(ulong *)(param_1 + 6) = CONCAT53(uStack_88,uStack_8b);
    param_1[10] = uVar7;
    param_1[0xb] = uVar8;
    param_1[0xc] = extraout_s0;
    param_1[0xd] = 0;
    if (*(long *)PTR_03a5d648 == lStack_78) {
      return lVar5;
    }
  }
  lVar5 = ___stack_chk_fail();
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
  *(undefined8 *)(lVar5 + 0x38) = uVar6;
  uVar6 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkCar>_TypeInfo*/ uRam0000000003d1dc08);
  /*System.Collections.Generic.List<NetworkCar>$$.ctor*/ func_0x02401db8(uVar6,8,uRam0000000003d3b3c0);
  *(undefined8 *)(lVar5 + 0x40) = uVar6;
  uVar6 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkUsable>_TypeInfo*/ uRam0000000003d1dc58);
  /*System.Collections.Generic.List<NetworkUsable>$$.ctor*/ func_0x0241def8(uVar6,8,uRam0000000003d3b628);
  *(undefined8 *)(lVar5 + 0x48) = uVar6;
  uVar6 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkUsable>_TypeInfo*/ uRam0000000003d1dc58);
  /*System.Collections.Generic.List<NetworkUsable>$$.ctor*/ func_0x0241def8(uVar6,8,uRam0000000003d3b628);
  *(undefined8 *)(lVar5 + 0x50) = uVar6;
  uVar6 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkPlayer>_TypeInfo*/ uRam0000000003d1dc38);
  /*System.Collections.Generic.List<NetworkPlayer>$$.ctor*/ func_0x02412e80(uVar6,8,uRam0000000003d3b500);
  *(undefined8 *)(lVar5 + 0x58) = uVar6;
  uVar6 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkVote>_TypeInfo*/ uRam0000000003d1dc60);
  /*System.Collections.Generic.List<NetworkVote>$$.ctor*/ func_0x02420d24(uVar6,0xc,uRam0000000003d3b658);
  *(undefined8 *)(lVar5 + 0x60) = uVar6;
  uVar6 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkScore>_TypeInfo*/ uRam0000000003d1dc48);
  /*System.Collections.Generic.List<NetworkScore>$$.ctor*/ func_0x024188d0(uVar6,0xc,uRam0000000003d3b5a0);
  *(undefined8 *)(lVar5 + 0x68) = uVar6;
  uVar6 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkEventStanding>_TypeInfo*/ uRam0000000003d1dc18);
  /*System.Collections.Generic.List<NetworkEventStanding>$$.ctor*/ func_0x024076e8(uVar6,8,uRam0000000003d3b420);
  *(undefined8 *)(lVar5 + 0x70) = uVar6;
  uVar6 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkSpawnPosition>_TypeInfo*/ uRam0000000003d1dc50);
  /*System.Collections.Generic.List<NetworkSpawnPosition>$$.ctor*/ func_0x0241b480(uVar6,0xc,uRam0000000003d3b5e8);
  *(undefined8 *)(lVar5 + 0x78) = uVar6;
  uVar6 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkPlayer>_TypeInfo*/ uRam0000000003d1dc38);
  /*System.Collections.Generic.List<NetworkPlayer>$$.ctor*/ func_0x02412e80(uVar6,8,uRam0000000003d3b500);
  *(undefined8 *)(lVar5 + 400) = uVar6;
  *(undefined4 *)(lVar5 + 0x198) = 0xffffffff;
  *(undefined1 *)(lVar5 + 0x19c) = 1;
  return lVar5;
}



// ============================================================
// RVA: 0x1661458 | Core.Networking.NetworkUsable.get_HasPosition
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool Core_Networking_NetworkUsable__get_HasPosition(long param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)(param_1 + 0x28) - 0.0;
  fVar2 = *(float *)(param_1 + 0x2c) - 0.0;
  fVar3 = *(float *)(param_1 + 0x30) - 0.0;
  return _UNK_033f8490 <= fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2;
}



// ============================================================
// RVA: 0x1661474 | Core.Networking.NetworkUsable.FlatBufferToNetworkUsable
// ============================================================

ulong Core_Networking_NetworkUsable__FlatBufferToNetworkUsable
                (undefined8 *param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  int *piVar3;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_48 = param_4[1];
  uStack_50 = *param_4;
  uStack_40 = param_4[2];
  if (param_3 != 0) {
    uVar1 = /*FlatBuffers.ByteBuffer$$GetUint*/ func_0x016cce04(param_3,param_2,0);
    uStack_98 = uStack_48;
    uStack_a0 = uStack_50;
    uStack_90 = uStack_40;
    uVar2 = Core_Networking_NetworkUsable__FlatBufferToNetworkUsable
                      (&uStack_88,(int)param_2 + 4,param_3,&uStack_a0,uVar1);
    param_1[1] = uStack_80;
    *param_1 = uStack_88;
    param_1[3] = uStack_70;
    param_1[2] = uStack_78;
    param_1[5] = uStack_60;
    param_1[4] = uStack_68;
    param_1[6] = uStack_58;
    return uVar2;
  }
  piVar3 = (int *)func_0x00f78af4();
  return (ulong)(*piVar3 + 4);
}



