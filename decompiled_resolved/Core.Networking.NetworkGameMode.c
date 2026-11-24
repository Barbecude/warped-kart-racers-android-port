// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Networking.NetworkGameMode

// ============================================================
// RVA: 0x16599bc | Core.Networking.NetworkGameMode.FlatBufferToNetworkGameMode
// ============================================================

ulong Core_Networking_NetworkGameMode__FlatBufferToNetworkGameMode
                (undefined4 *param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined8 uStack_50;
  long lStack_48;
  
  uStack_50 = param_2;
  lStack_48 = param_3;
  uVar4 = Core_Networking_GameMode__get_SyncId(&uStack_50);
  if (param_3 != 0) {
    uVar5 = /*FlatBuffers.ByteBuffer$$GetSbyte*/ func_0x016ccca0(param_3,param_2,0);
    *param_1 = uVar4;
    param_1[1] = (int)uVar5;
    uVar9 = *param_4;
    *(undefined8 *)(param_1 + 4) = param_4[1];
    *(undefined8 *)(param_1 + 2) = uVar9;
    *(undefined8 *)(param_1 + 6) = param_4[2];
    *(undefined8 *)(param_1 + 8) = 0;
    return uVar5;
  }
  auVar10 = func_0x00f78af4();
  lVar7 = auVar10._8_8_;
  puVar6 = auVar10._0_8_;
  cVar3 = *(char *)(puVar6 + 1);
  uVar4 = puVar6[2];
  uVar1 = *puVar6;
  uVar2 = *(undefined1 *)(puVar6 + 8);
  if ((bRam0000000003eb57f2 & 1) == 0) {
    func_0x00f78a20(0x3d3f090);
    bRam0000000003eb57f2 = 1;
  }
  if (lVar7 != 0) {
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar7,4,0x10,0);
    /*FlatBuffers.FlatBufferBuilder$$Pad*/ func_0x016cda44(lVar7,3,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(lVar7,uVar2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(lVar7,uVar1,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar7,uVar4,0);
    /*FlatBuffers.FlatBufferBuilder$$Pad*/ func_0x016cda44(lVar7,3,0);
    /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(lVar7,(long)cVar3,0);
    if ((*(long *)(lVar7 + 0x18) != 0) &&
       (lVar8 = *(long *)(*(long *)(lVar7 + 0x18) + 0x10), lVar8 != 0)) {
      return (ulong)(uint)(*(int *)(lVar8 + 0x18) - *(int *)(lVar7 + 0x10));
    }
    lVar7 = func_0x00f78af4(lVar7,0);
    return (ulong)*(byte *)(lVar7 + 0x48);
  }
  lVar7 = func_0x00f78af4();
  return *(ulong *)(lVar7 + 8);
}



// ============================================================
// RVA: 0x1659a38 | Core.Networking.NetworkGameMode.ToFlatBuffer
// ============================================================

ulong Core_Networking_NetworkGameMode__ToFlatBuffer(undefined4 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  char cVar4;
  long lVar5;
  
  cVar4 = *(char *)(param_1 + 1);
  uVar1 = param_1[2];
  uVar2 = *param_1;
  uVar3 = *(undefined1 *)(param_1 + 8);
  if ((bRam0000000003eb57f2 & 1) == 0) {
    func_0x00f78a20(0x3d3f090);
    bRam0000000003eb57f2 = 1;
  }
  if (param_2 != 0) {
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_2,4,0x10,0);
    /*FlatBuffers.FlatBufferBuilder$$Pad*/ func_0x016cda44(param_2,3,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_2,uVar3,0);
    /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(param_2,uVar2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(param_2,uVar1,0);
    /*FlatBuffers.FlatBufferBuilder$$Pad*/ func_0x016cda44(param_2,3,0);
    /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(param_2,(long)cVar4,0);
    if ((*(long *)(param_2 + 0x18) != 0) &&
       (lVar5 = *(long *)(*(long *)(param_2 + 0x18) + 0x10), lVar5 != 0)) {
      return (ulong)(uint)(*(int *)(lVar5 + 0x18) - *(int *)(param_2 + 0x10));
    }
    lVar5 = func_0x00f78af4(param_2,0);
    return (ulong)*(byte *)(lVar5 + 0x48);
  }
  lVar5 = func_0x00f78af4();
  return *(ulong *)(lVar5 + 8);
}



