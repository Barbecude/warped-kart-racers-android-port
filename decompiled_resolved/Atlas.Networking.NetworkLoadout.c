// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Networking.NetworkLoadout

// ============================================================
// RVA: 0x14a7870 | Atlas.Networking.NetworkLoadout.Default
// ============================================================

void Atlas_Networking_NetworkLoadout__Default(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb4a5e & 1) == 0) {
    func_0x00f78a20(0x3d65d08);
    bRam0000000003eb4a5e = 1;
  }
  uVar1 = /*STR('')*/ uRam0000000003d65d08;
  *param_1 = /*STR('')*/ uRam0000000003d65d08;
  param_1[1] = uVar1;
  param_1[2] = uVar1;
  param_1[3] = uVar1;
  param_1[4] = uVar1;
  param_1[5] = uVar1;
  param_1[6] = uVar1;
  param_1[7] = uVar1;
  return;
}



// ============================================================
// RVA: 0x14a78d0 | Atlas.Networking.NetworkLoadout.IsFullySet
// ============================================================

uint Atlas_Networking_NetworkLoadout__IsFullySet(undefined8 *param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*param_1,0);
  if (((((uVar2 & 1) == 0) && (uVar2 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(param_1[1],0), (uVar2 & 1) == 0)) &&
      (uVar2 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(param_1[2],0), (uVar2 & 1) == 0)) &&
     (uVar2 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(param_1[3],0), (uVar2 & 1) == 0)) {
    uVar1 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(param_1[4],0);
    uVar1 = uVar1 ^ 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// ============================================================
// RVA: 0x14a7944 | Atlas.Networking.NetworkLoadout..ctor
// ============================================================

void Atlas_Networking_NetworkLoadout___ctor(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[4];
  param_1[7] = param_2[4];
  return;
}



