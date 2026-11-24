// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Kart.KartPhysicsBodyState

// ============================================================
// RVA: 0x15d5120 | Atlas.Gameplay.Kart.KartPhysicsBodyState.Initialize
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Kart_KartPhysicsBodyState__Initialize(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  if ((bRam0000000003eb5382 & 1) == 0) {
    func_0x00f78a20(0x3d265d8);
    func_0x00f78a20(0x3d26618);
    bRam0000000003eb5382 = 1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined1 *)((long)param_1 + 0x34) = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  *(undefined1 *)((long)param_1 + 0x54) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)((long)param_1 + 100) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 0x25) = 0;
  param_1[7] = 0;
  lVar2 = /*Unity.Mathematics.float3_TypeInfo*/ lRam0000000003d265d8;
  uVar3 = *(undefined4 *)(*(undefined8 **)(/*Unity.Mathematics.float3_TypeInfo*/ lRam0000000003d265d8 + 0xb8) + 1);
  param_1[0x11] = **(undefined8 **)(/*Unity.Mathematics.float3_TypeInfo*/ lRam0000000003d265d8 + 0xb8);
  *(undefined4 *)(param_1 + 0x12) = uVar3;
  uVar3 = *(undefined4 *)(*(undefined8 **)(lVar2 + 0xb8) + 1);
  *(undefined8 *)((long)param_1 + 0x94) = **(undefined8 **)(lVar2 + 0xb8);
  *(undefined4 *)((long)param_1 + 0x9c) = uVar3;
  uVar3 = *(undefined4 *)(*(undefined8 **)(lVar2 + 0xb8) + 1);
  param_1[0x14] = **(undefined8 **)(lVar2 + 0xb8);
  *(undefined4 *)(param_1 + 0x15) = uVar3;
  uVar1 = _UNK_033f8448;
  uVar4 = _UNK_033f8440;
  *(undefined8 *)((long)param_1 + 0xb4) = _UNK_033f8448;
  *(undefined8 *)((long)param_1 + 0xac) = uVar4;
  *(undefined8 *)((long)param_1 + 0xbc) = _UNK_033f8418;
  uVar3 = *(undefined4 *)(*(undefined8 **)(lVar2 + 0xb8) + 1);
  param_1[0x1a] = **(undefined8 **)(lVar2 + 0xb8);
  *(undefined4 *)(param_1 + 0x1b) = uVar3;
  *(undefined8 *)((long)param_1 + 0xc4) = _UNK_033f83a8;
  *(undefined4 *)((long)param_1 + 0xcc) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = uVar1;
  *(undefined8 *)((long)param_1 + 0xdc) = uVar4;
  uVar4 = _UNK_033f8b70;
  *(undefined8 *)((long)param_1 + 0xf4) = _UNK_033f8b78;
  *(undefined8 *)((long)param_1 + 0xec) = uVar4;
  *(undefined4 *)((long)param_1 + 0xfc) = 0;
  uVar4 = _UNK_033f8b80;
  param_1[0x24] = _UNK_033f8b88;
  param_1[0x23] = uVar4;
  uVar4 = _UNK_033f8b90;
  param_1[0x26] = _UNK_033f8b98;
  param_1[0x25] = uVar4;
  *(undefined4 *)(param_1 + 0x27) = 0;
  uVar3 = *(undefined4 *)(*(undefined8 **)(lVar2 + 0xb8) + 1);
  *(undefined8 *)((long)param_1 + 0x13c) = **(undefined8 **)(lVar2 + 0xb8);
  *(undefined4 *)((long)param_1 + 0x144) = uVar3;
  uVar4 = **(undefined8 **)(/*Unity.Mathematics.quaternion_TypeInfo*/ lRam0000000003d26618 + 0xb8);
  param_1[0x2a] = (*(undefined8 **)(/*Unity.Mathematics.quaternion_TypeInfo*/ lRam0000000003d26618 + 0xb8))[1];
  param_1[0x29] = uVar4;
  uVar3 = *(undefined4 *)(*(undefined8 **)(lVar2 + 0xb8) + 1);
  param_1[0x20] = **(undefined8 **)(lVar2 + 0xb8);
  *(undefined4 *)(param_1 + 0x21) = uVar3;
  uVar3 = *(undefined4 *)(*(undefined8 **)(lVar2 + 0xb8) + 1);
  *(undefined8 *)((long)param_1 + 0x10c) = **(undefined8 **)(lVar2 + 0xb8);
  *(undefined4 *)((long)param_1 + 0x114) = uVar3;
  return;
}



// ============================================================
// RVA: 0x15d52b4 | Atlas.Gameplay.Kart.KartPhysicsBodyState.ResetStates
// ============================================================

void Atlas_Gameplay_Kart_KartPhysicsBodyState__ResetStates(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((bRam0000000003eb5383 & 1) == 0) {
    func_0x00f78a20(0x3d21468);
    bRam0000000003eb5383 = 1;
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined2 *)(param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0x56) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.DriftBoostLevel_TypeInfo*/ lRam0000000003d21468 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.DriftBoostLevel_TypeInfo*/ lRam0000000003d21468 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar1 = *(undefined8 **)(/*Atlas.Gameplay.Kart.DriftBoostLevel_TypeInfo*/ lRam0000000003d21468 + 0xb8);
  uVar4 = puVar1[1];
  uVar3 = *puVar1;
  uVar2 = puVar1[2];
  *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(puVar1 + 3);
  *(undefined8 *)(param_1 + 400) = uVar2;
  *(undefined8 *)(param_1 + 0x188) = uVar4;
  *(undefined8 *)(param_1 + 0x180) = uVar3;
  return;
}



