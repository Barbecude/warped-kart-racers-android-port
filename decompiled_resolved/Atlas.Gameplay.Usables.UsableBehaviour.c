// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Usables.UsableBehaviour

// ============================================================
// RVA: 0x1524250 | Atlas.Gameplay.Usables.UsableBehaviour.get_VisualRoot
// ============================================================

undefined8 Atlas_Gameplay_Usables_UsableBehaviour__get_VisualRoot(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x1524258 | Atlas.Gameplay.Usables.UsableBehaviour.get_EventOnDrawGizmos
// ============================================================

undefined8 Atlas_Gameplay_Usables_UsableBehaviour__get_EventOnDrawGizmos(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



// ============================================================
// RVA: 0x1524260 | Atlas.Gameplay.Usables.UsableBehaviour.get_Replicator
// ============================================================

undefined8 Atlas_Gameplay_Usables_UsableBehaviour__get_Replicator(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x1524268 | Atlas.Gameplay.Usables.UsableBehaviour.get_LightWorld
// ============================================================

undefined8 Atlas_Gameplay_Usables_UsableBehaviour__get_LightWorld(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



// ============================================================
// RVA: 0x1524270 | Atlas.Gameplay.Usables.UsableBehaviour.set_LightWorld
// ============================================================

void Atlas_Gameplay_Usables_UsableBehaviour__set_LightWorld(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x48) = param_2;
  return;
}



// ============================================================
// RVA: 0x1524278 | Atlas.Gameplay.Usables.UsableBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_Gameplay_Usables_UsableBehaviour___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb4e52 & 1) == 0) {
    func_0x00f78a20(0x3d25750);
    bRam0000000003eb4e52 = 1;
  }
  uVar1 = func_0x00f78aec(/*UnityEngine.Events.UnityEvent_TypeInfo*/ uRam0000000003d25750);
  /*UnityEngine.Events.UnityEvent$$.ctor*/ func_0x03277ec8(uVar1,0);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



