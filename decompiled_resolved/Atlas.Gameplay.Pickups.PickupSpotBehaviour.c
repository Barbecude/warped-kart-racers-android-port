// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Pickups.PickupSpotBehaviour

// ============================================================
// RVA: 0x14bb2c4 | Atlas.Gameplay.Pickups.PickupSpotBehaviour.get_BoxRespawnTime
// ============================================================

undefined4 Atlas_Gameplay_Pickups_PickupSpotBehaviour__get_BoxRespawnTime(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x14bb2cc | Atlas.Gameplay.Pickups.PickupSpotBehaviour.get_SpawnHeight
// ============================================================

undefined4 Atlas_Gameplay_Pickups_PickupSpotBehaviour__get_SpawnHeight(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



// ============================================================
// RVA: 0x14bb2d4 | Atlas.Gameplay.Pickups.PickupSpotBehaviour.get_PickupBoxDefinition
// ============================================================

undefined8 Atlas_Gameplay_Pickups_PickupSpotBehaviour__get_PickupBoxDefinition(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x14bb2dc | Atlas.Gameplay.Pickups.PickupSpotBehaviour.OnDrawGizmos
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_Gameplay_Pickups_PickupSpotBehaviour__OnDrawGizmos
               (undefined1 param_1 [16],float param_2,float param_3,undefined4 param_4,long param_5)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = /*UnityEngine.Behaviour$$get_enabled*/ func_0x0321a8f0(param_5,0);
  if ((int)lVar1 == 0) {
    return lVar1;
  }
  lVar1 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_5,0);
  if (lVar1 != 0) {
    uVar2 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar1,0);
    fVar5 = param_2;
    fVar4 = param_3;
    uVar3 = /*UnityEngine.Color$$get_green*/ func_0x03223580(0);
    Atlas_Gameplay_LocatorBehaviour__DrawGizmosLocator
              (uVar2,param_2,param_3,0x3f000000,uVar3,fVar5,fVar4,param_4,param_5,0);
    /*UnityEngine.Color$$get_magenta*/ func_0x03223600(0);
    /*UnityEngine.Gizmos$$set_color*/ func_0x0322fbcc(0);
    fVar5 = *(float *)(param_5 + 0x1c);
    lVar1 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_5,0);
    if (lVar1 != 0) {
      fVar4 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar1,0);
      /*UnityEngine.Gizmos$$DrawWireCube*/ func_0x0322f998(fVar4 + 0.0,fVar5 + param_2,param_3 + 0.0,0x40280000,0x40280000,0x40280000,0);
      lVar1 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_5,0);
      if (lVar1 != 0) {
        /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar1,0);
        lVar1 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_5,0);
        if (lVar1 != 0) {
          /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar1,0);
          if (pcRam0000000003ebf560 == (code *)0x0) {
            pcRam0000000003ebf560 =
                 (code *)func_0x00f789d4(
                                        "UnityEngine.Gizmos::DrawLine_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)"
                                        );
          }
          lVar1 = (*pcRam0000000003ebf560)(&stack0xffffffffffffffd0,&stack0xffffffffffffffc0);
          return lVar1;
        }
      }
    }
  }
  lVar1 = func_0x00f78af4();
  *(undefined8 *)(lVar1 + 0x18) = _UNK_033f84e0;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return lVar1;
}



// ============================================================
// RVA: 0x14bb43c | Atlas.Gameplay.Pickups.PickupSpotBehaviour..ctor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_Gameplay_Pickups_PickupSpotBehaviour___ctor(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = _UNK_033f84e0;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return param_1;
}



