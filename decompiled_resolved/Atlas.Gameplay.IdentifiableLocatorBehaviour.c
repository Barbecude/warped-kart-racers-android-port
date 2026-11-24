// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.IdentifiableLocatorBehaviour

// ============================================================
// RVA: 0x15b770c | Atlas.Gameplay.IdentifiableLocatorBehaviour.get_ID
// ============================================================

undefined8 Atlas_Gameplay_IdentifiableLocatorBehaviour__get_ID(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x15b7714 | Atlas.Gameplay.IdentifiableLocatorBehaviour.OnDrawGizmos
// ============================================================

undefined8
Atlas_Gameplay_IdentifiableLocatorBehaviour__OnDrawGizmos
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  
  uVar1 = /*UnityEngine.Behaviour$$get_enabled*/ func_0x0321a8f0(param_5,0);
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  lVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_5,0);
  if (lVar2 != 0) {
    /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar2,0);
    uVar3 = /*UnityEngine.Color$$get_white*/ func_0x032235a8(0);
    /*UnityEngine.Gizmos$$set_color*/ func_0x0322fbcc(uVar3,param_2,param_3,param_4,0,0);
    if (pcRam0000000003ebf570 == (code *)0x0) {
      pcRam0000000003ebf570 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.Gizmos::DrawSphere_Injected(UnityEngine.Vector3&,System.Single)"
                                  );
    }
    uVar1 = (*pcRam0000000003ebf570)(0x3f000000,&stack0xffffffffffffffc0);
    return uVar1;
  }
  uVar1 = func_0x00f78af4();
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return uVar1;
}



// ============================================================
// RVA: 0x15b77b8 | Atlas.Gameplay.IdentifiableLocatorBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_Gameplay_IdentifiableLocatorBehaviour___ctor(ulong param_1)

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



