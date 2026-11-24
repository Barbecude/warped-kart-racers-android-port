// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Networking.NetworkCar

// ============================================================
// RVA: 0x1658108 | Core.Networking.NetworkCar.FlatBufferToNetworkCar
// ============================================================

/* WARNING: Possible PIC construction at 0x01658154: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01658158) */

void Core_Networking_NetworkCar__FlatBufferToNetworkCar
               (undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 *extraout_x8;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 *extraout_x8_00;
  undefined8 unaff_x19;
  long unaff_x20;
  ulong unaff_x22;
  undefined *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [12];
  ulong uStack_90;
  long lStack_88;
  ulong uStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined4 auStack_50 [8];
  
  puVar4 = auStack_50;
  if (param_3 == 0) {
    puVar6 = &Core_Networking_NetworkCar__FlatBufferToNetworkCar;
    auVar7 = func_0x00f78af4();
    lStack_88 = auVar7._8_8_;
    uStack_90 = auVar7._0_8_;
    puVar4 = extraout_x8;
  }
  else {
    uStack_90 = (ulong)((int)param_2 + 4);
    param_5 = /*FlatBuffers.ByteBuffer$$GetUint*/ func_0x016cce04(param_3,param_2,0);
    puVar6 = (undefined *)0x1658158;
    lStack_88 = param_3;
    unaff_x19 = param_1;
    unaff_x20 = param_4;
    unaff_x22 = uStack_90;
  }
  uStack_80 = unaff_x22;
  lStack_78 = param_3;
  lStack_70 = unaff_x20;
  uStack_68 = unaff_x19;
  puStack_60 = &stack0xfffffffffffffff0;
  puStack_58 = puVar6;
  if (lStack_88 != 0) {
    uVar2 = /*FlatBuffers.ByteBuffer$$GetSbyte*/ func_0x016ccca0(lStack_88,uStack_90,0);
    uVar3 = Core_Networking_CarBase__get_LastHitTime(&uStack_90);
    if (param_4 != 0) {
      uVar5 = *(undefined8 *)(param_4 + 0x1b0);
      uVar1 = *(undefined4 *)(param_4 + 0x1a0);
      *puVar4 = param_5;
      *(undefined1 *)(puVar4 + 1) = 0;
      *(undefined1 *)((long)puVar4 + 5) = uVar2;
      *(undefined2 *)((long)puVar4 + 6) = 0;
      puVar4[2] = uVar3;
      *(undefined1 *)(puVar4 + 3) = 1;
      *(undefined2 *)((long)puVar4 + 0xd) = 0;
      *(undefined1 *)((long)puVar4 + 0xf) = 0;
      puVar4[4] = uVar1;
      puVar4[5] = 0;
      *(undefined8 *)(puVar4 + 6) = uVar5;
      return;
    }
  }
  auVar8 = func_0x00f78af4();
  uVar5 = *(undefined8 *)(auVar8._0_8_ + 0x1b0);
  uVar3 = *(undefined4 *)(auVar8._0_8_ + 0x1a0);
  *extraout_x8_00 = 0;
  extraout_x8_00[1] = 0;
  *(int *)extraout_x8_00 = auVar8._8_4_;
  *(undefined1 *)((long)extraout_x8_00 + 4) = 1;
  *(undefined4 *)(extraout_x8_00 + 1) = uVar3;
  extraout_x8_00[2] = uVar5;
  return;
}



// ============================================================
// RVA: 0x1658178 | Core.Networking.NetworkCar.FlatBufferToNetworkCar
// ============================================================

void Core_Networking_NetworkCar__FlatBufferToNetworkCar
               (undefined4 *param_1,undefined8 param_2,long param_3,long param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *extraout_x8;
  undefined1 auVar5 [12];
  undefined8 uStack_40;
  long lStack_38;
  
  uStack_40 = param_2;
  lStack_38 = param_3;
  if (param_3 != 0) {
    uVar2 = /*FlatBuffers.ByteBuffer$$GetSbyte*/ func_0x016ccca0(param_3,param_2,0);
    uVar3 = Core_Networking_CarBase__get_LastHitTime(&uStack_40);
    if (param_4 != 0) {
      uVar4 = *(undefined8 *)(param_4 + 0x1b0);
      uVar1 = *(undefined4 *)(param_4 + 0x1a0);
      *param_1 = param_5;
      *(undefined1 *)(param_1 + 1) = 0;
      *(undefined1 *)((long)param_1 + 5) = uVar2;
      *(undefined2 *)((long)param_1 + 6) = 0;
      param_1[2] = uVar3;
      *(undefined1 *)(param_1 + 3) = 1;
      *(undefined2 *)((long)param_1 + 0xd) = 0;
      *(undefined1 *)((long)param_1 + 0xf) = 0;
      param_1[4] = uVar1;
      param_1[5] = 0;
      *(undefined8 *)(param_1 + 6) = uVar4;
      return;
    }
  }
  auVar5 = func_0x00f78af4();
  uVar4 = *(undefined8 *)(auVar5._0_8_ + 0x1b0);
  uVar3 = *(undefined4 *)(auVar5._0_8_ + 0x1a0);
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  *(int *)extraout_x8 = auVar5._8_4_;
  *(undefined1 *)((long)extraout_x8 + 4) = 1;
  *(undefined4 *)(extraout_x8 + 1) = uVar3;
  extraout_x8[2] = uVar4;
  return;
}



// ============================================================
// RVA: 0x1658234 | Core.Networking.NetworkCar.ToCarFlatBuffer
// ============================================================

ulong Core_Networking_NetworkCar__ToCarFlatBuffer(undefined4 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  long lVar4;
  
  uVar1 = *param_1;
  cVar3 = *(char *)((long)param_1 + 5);
  uVar2 = param_1[2];
  if ((bRam0000000003eb57de & 1) == 0) {
    func_0x00f78a20(0x3d3efe8);
    bRam0000000003eb57de = 1;
  }
  if (param_2 != 0) {
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_2,4,0xc,0);
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_2,4,8,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(param_2,uVar2,0);
    /*FlatBuffers.FlatBufferBuilder$$Pad*/ func_0x016cda44(param_2,3,0);
    /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(param_2,(long)cVar3,0);
    /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(param_2,uVar1,0);
    if ((*(long *)(param_2 + 0x18) != 0) &&
       (lVar4 = *(long *)(*(long *)(param_2 + 0x18) + 0x10), lVar4 != 0)) {
      return (ulong)(uint)(*(int *)(lVar4 + 0x18) - *(int *)(param_2 + 0x10));
    }
    lVar4 = func_0x00f78af4(param_2,0);
    return (ulong)*(byte *)(lVar4 + 0x48);
  }
  lVar4 = func_0x00f78af4();
  return *(ulong *)(lVar4 + 8);
}



// ============================================================
// RVA: 0x165824c | Core.Networking.NetworkCar.ToCarBaseFlatBuffer
// ============================================================

ulong Core_Networking_NetworkCar__ToCarBaseFlatBuffer(long param_1,long param_2)

{
  undefined4 uVar1;
  char cVar2;
  long lVar3;
  
  cVar2 = *(char *)(param_1 + 5);
  uVar1 = *(undefined4 *)(param_1 + 8);
  if ((bRam0000000003eb57df & 1) == 0) {
    func_0x00f78a20(0x3d3eff0);
    bRam0000000003eb57df = 1;
  }
  if (param_2 != 0) {
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_2,4,8,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(param_2,uVar1,0);
    /*FlatBuffers.FlatBufferBuilder$$Pad*/ func_0x016cda44(param_2,3,0);
    /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(param_2,(long)cVar2,0);
    if ((*(long *)(param_2 + 0x18) != 0) &&
       (lVar3 = *(long *)(*(long *)(param_2 + 0x18) + 0x10), lVar3 != 0)) {
      return (ulong)(uint)(*(int *)(lVar3 + 0x18) - *(int *)(param_2 + 0x10));
    }
    lVar3 = func_0x00f78af4(param_2,0);
    return (ulong)*(byte *)(lVar3 + 0x48);
  }
  lVar3 = func_0x00f78af4();
  return *(ulong *)(lVar3 + 8);
}



