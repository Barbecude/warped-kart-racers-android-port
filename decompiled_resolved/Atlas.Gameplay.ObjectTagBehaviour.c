// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.ObjectTagBehaviour

// ============================================================
// RVA: 0x14b2fdc | Atlas.Gameplay.ObjectTagBehaviour.get_FloorSurfaceType
// ============================================================

undefined4 Atlas_Gameplay_ObjectTagBehaviour__get_FloorSurfaceType(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x14b2fe4 | Atlas.Gameplay.ObjectTagBehaviour.get_AestheticSurfaceType
// ============================================================

undefined4 Atlas_Gameplay_ObjectTagBehaviour__get_AestheticSurfaceType(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



// ============================================================
// RVA: 0x14b2fec | Atlas.Gameplay.ObjectTagBehaviour.get_CanHopOver
// ============================================================

undefined1 Atlas_Gameplay_ObjectTagBehaviour__get_CanHopOver(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x14b2ff4 | Atlas.Gameplay.ObjectTagBehaviour.get_IsGlideTrigger
// ============================================================

undefined1 Atlas_Gameplay_ObjectTagBehaviour__get_IsGlideTrigger(long param_1)

{
  return *(undefined1 *)(param_1 + 0x21);
}



// ============================================================
// RVA: 0x14b2ffc | Atlas.Gameplay.ObjectTagBehaviour.get_IsBoostTrigger
// ============================================================

undefined1 Atlas_Gameplay_ObjectTagBehaviour__get_IsBoostTrigger(long param_1)

{
  return *(undefined1 *)(param_1 + 0x22);
}



// ============================================================
// RVA: 0x14b3004 | Atlas.Gameplay.ObjectTagBehaviour.get_IsHopBoostTrigger
// ============================================================

undefined1 Atlas_Gameplay_ObjectTagBehaviour__get_IsHopBoostTrigger(long param_1)

{
  return *(undefined1 *)(param_1 + 0x23);
}



// ============================================================
// RVA: 0x14b300c | Atlas.Gameplay.ObjectTagBehaviour.get_IsHopGravityTrigger
// ============================================================

undefined1 Atlas_Gameplay_ObjectTagBehaviour__get_IsHopGravityTrigger(long param_1)

{
  return *(undefined1 *)(param_1 + 0x24);
}



// ============================================================
// RVA: 0x14b3014 | Atlas.Gameplay.ObjectTagBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_Gameplay_ObjectTagBehaviour___ctor(ulong param_1)

{
  undefined1 auVar1 [16];
  
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1;
  return auVar1;
}



