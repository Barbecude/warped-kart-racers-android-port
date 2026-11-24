// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Kart.KartPhysicsSetup

// ============================================================
// RVA: 0x15dbd5c | Atlas.Gameplay.Kart.KartPhysicsSetup.get_Offset
// ============================================================

undefined4 Atlas_Gameplay_Kart_KartPhysicsSetup__get_Offset(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



// ============================================================
// RVA: 0x15dbd68 | Atlas.Gameplay.Kart.KartPhysicsSetup.get_AngularInertia
// ============================================================

undefined4 Atlas_Gameplay_Kart_KartPhysicsSetup__get_AngularInertia(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



// ============================================================
// RVA: 0x15dbd74 | Atlas.Gameplay.Kart.KartPhysicsSetup.get_Width
// ============================================================

undefined4 Atlas_Gameplay_Kart_KartPhysicsSetup__get_Width(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x15dbd7c | Atlas.Gameplay.Kart.KartPhysicsSetup.get_Length
// ============================================================

undefined4 Atlas_Gameplay_Kart_KartPhysicsSetup__get_Length(long param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}



// ============================================================
// RVA: 0x15dbd84 | Atlas.Gameplay.Kart.KartPhysicsSetup.get_Height
// ============================================================

undefined4 Atlas_Gameplay_Kart_KartPhysicsSetup__get_Height(long param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x15dbd8c | Atlas.Gameplay.Kart.KartPhysicsSetup.get_TrackWidth
// ============================================================

undefined4 Atlas_Gameplay_Kart_KartPhysicsSetup__get_TrackWidth(long param_1)

{
  return *(undefined4 *)(param_1 + 0x34);
}



// ============================================================
// RVA: 0x15dbd94 | Atlas.Gameplay.Kart.KartPhysicsSetup.get_OverHang
// ============================================================

undefined4 Atlas_Gameplay_Kart_KartPhysicsSetup__get_OverHang(long param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}



// ============================================================
// RVA: 0x15dbd9c | Atlas.Gameplay.Kart.KartPhysicsSetup.get_WheelBase
// ============================================================

undefined4 Atlas_Gameplay_Kart_KartPhysicsSetup__get_WheelBase(long param_1)

{
  return *(undefined4 *)(param_1 + 0x3c);
}



// ============================================================
// RVA: 0x15dbda4 | Atlas.Gameplay.Kart.KartPhysicsSetup.get_RideHeight
// ============================================================

undefined4 Atlas_Gameplay_Kart_KartPhysicsSetup__get_RideHeight(long param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}



// ============================================================
// RVA: 0x15dbdac | Atlas.Gameplay.Kart.KartPhysicsSetup.get_DampingRatio
// ============================================================

undefined4 Atlas_Gameplay_Kart_KartPhysicsSetup__get_DampingRatio(long param_1)

{
  return *(undefined4 *)(param_1 + 0x44);
}



// ============================================================
// RVA: 0x15dbdb4 | Atlas.Gameplay.Kart.KartPhysicsSetup.get_BottomingDampingRatio
// ============================================================

undefined4 Atlas_Gameplay_Kart_KartPhysicsSetup__get_BottomingDampingRatio(long param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}



// ============================================================
// RVA: 0x15dbdbc | Atlas.Gameplay.Kart.KartPhysicsSetup.get_RemoteKartMassScale
// ============================================================

undefined4 Atlas_Gameplay_Kart_KartPhysicsSetup__get_RemoteKartMassScale(long param_1)

{
  return *(undefined4 *)(param_1 + 0x4c);
}



// ============================================================
// RVA: 0x15dbdc4 | Atlas.Gameplay.Kart.KartPhysicsSetup..ctor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_Gameplay_Kart_KartPhysicsSetup___ctor
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(param_4 + 0x10) = uVar2;
  *(undefined4 *)(param_4 + 0x14) = param_2;
  *(undefined4 *)(param_4 + 0x18) = param_3;
  uVar2 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(param_4 + 0x1c) = uVar2;
  *(undefined4 *)(param_4 + 0x20) = param_2;
  *(undefined4 *)(param_4 + 0x24) = param_3;
  uVar1 = _UNK_033f8cc0;
  *(undefined8 *)(param_4 + 0x30) = _UNK_033f8cc8;
  *(undefined8 *)(param_4 + 0x28) = uVar1;
  uVar1 = _UNK_033f8cd0;
  *(undefined8 *)(param_4 + 0x40) = _UNK_033f8cd8;
  *(undefined8 *)(param_4 + 0x38) = uVar1;
  *(undefined8 *)(param_4 + 0x48) = _UNK_033f8d20;
  return param_4;
}



