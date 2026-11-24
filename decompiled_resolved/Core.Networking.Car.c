// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Networking.Car

// ============================================================
// RVA: 0x1653158 | Core.Networking.Car.get_ByteBuffer
// ============================================================

undefined8 Core_Networking_Car__get_ByteBuffer(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// ============================================================
// RVA: 0x1653160 | Core.Networking.Car.__init
// ============================================================

void Core_Networking_Car____init(undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  return;
}



// ============================================================
// RVA: 0x165316c | Core.Networking.Car.__assign
// ============================================================

undefined1  [16]
Core_Networking_Car____assign(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)param_1 = param_2;
  param_1[1] = param_3;
  auVar1._0_8_ = *param_1;
  auVar1._8_8_ = param_3;
  return auVar1;
}



// ============================================================
// RVA: 0x1653180 | Core.Networking.Car.get_SyncId
// ============================================================

ulong Core_Networking_Car__get_SyncId(undefined4 *param_1)

{
  int *piVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    uVar2 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(param_1 + 2),*param_1,4);
    return uVar2;
  }
  piVar1 = (int *)func_0x00f78af4();
  return (ulong)(*piVar1 + 4);
}



// ============================================================
// RVA: 0x16531a8 | Core.Networking.Car.get_Base
// ============================================================

int Core_Networking_Car__get_Base(int *param_1)

{
  return *param_1 + 4;
}



// ============================================================
// RVA: 0x16531cc | Core.Networking.Car.CreateCar
// ============================================================

ulong Core_Networking_Car__CreateCar
                (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  if ((bRam0000000003eb57de & 1) == 0) {
    func_0x00f78a20(0x3d3efe8);
    bRam0000000003eb57de = 1;
  }
  if (param_1 != 0) {
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,4,0xc,0);
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,4,8,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(param_1,param_4,0);
    /*FlatBuffers.FlatBufferBuilder$$Pad*/ func_0x016cda44(param_1,3,0);
    /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(param_1,param_3,0);
    /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(param_1,param_2,0);
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



