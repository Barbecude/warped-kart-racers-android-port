// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.LocatorBehaviour

// ============================================================
// RVA: 0x148a4b8 | Atlas.Gameplay.LocatorBehaviour.DrawGizmosLocator
// ============================================================

void Atlas_Gameplay_LocatorBehaviour__DrawGizmosLocator
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  /*UnityEngine.Gizmos$$set_color*/ func_0x0322fbcc(param_5,param_6,param_7,param_8,0);
  uStack_40 = param_1;
  uStack_3c = param_2;
  uStack_38 = param_3;
  if (pcRam0000000003ebf570 == (code *)0x0) {
    pcRam0000000003ebf570 =
         (code *)func_0x00f789d4(
                                "UnityEngine.Gizmos::DrawSphere_Injected(UnityEngine.Vector3&,System.Single)"
                                );
  }
  (*pcRam0000000003ebf570)(param_4,&uStack_40);
  return;
}



// ============================================================
// RVA: 0x148a514 | Atlas.Gameplay.LocatorBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_Gameplay_LocatorBehaviour___ctor(ulong param_1)

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



