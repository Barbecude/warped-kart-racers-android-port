// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.FrontEnd.Synced3DElementBehaviour

// ============================================================
// RVA: 0x1507de8 | Atlas.FrontEnd.Synced3DElementBehaviour.get_WorldSpaceSize
// ============================================================

undefined4 Atlas_FrontEnd_Synced3DElementBehaviour__get_WorldSpaceSize(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1507df0 | Atlas.FrontEnd.Synced3DElementBehaviour.get_WorldSpaceOffset
// ============================================================

undefined4 Atlas_FrontEnd_Synced3DElementBehaviour__get_WorldSpaceOffset(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x1507dfc | Atlas.FrontEnd.Synced3DElementBehaviour.get_WorldSpaceRotation
// ============================================================

undefined4 Atlas_FrontEnd_Synced3DElementBehaviour__get_WorldSpaceRotation(long param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}



// ============================================================
// RVA: 0x1507e08 | Atlas.FrontEnd.Synced3DElementBehaviour.get_LerpFactor
// ============================================================

undefined4 Atlas_FrontEnd_Synced3DElementBehaviour__get_LerpFactor(long param_1)

{
  return *(undefined4 *)(param_1 + 0x3c);
}



// ============================================================
// RVA: 0x1507e10 | Atlas.FrontEnd.Synced3DElementBehaviour.get_PositioningMode
// ============================================================

undefined4 Atlas_FrontEnd_Synced3DElementBehaviour__get_PositioningMode(long param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}



// ============================================================
// RVA: 0x1507e18 | Atlas.FrontEnd.Synced3DElementBehaviour.get_FitBy
// ============================================================

undefined4 Atlas_FrontEnd_Synced3DElementBehaviour__get_FitBy(long param_1)

{
  return *(undefined4 *)(param_1 + 0x44);
}



// ============================================================
// RVA: 0x1507e20 | Atlas.FrontEnd.Synced3DElementBehaviour.get_RectTransform
// ============================================================

undefined8 Atlas_FrontEnd_Synced3DElementBehaviour__get_RectTransform(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



// ============================================================
// RVA: 0x1507e28 | Atlas.FrontEnd.Synced3DElementBehaviour.Start
// ============================================================

void Atlas_FrontEnd_Synced3DElementBehaviour__Start(long param_1)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb4d26 & 1) == 0) {
    func_0x00f78a20(0x3d53528);
    bRam0000000003eb4d26 = 1;
  }
  uVar1 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(param_1,uRam0000000003d53528);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  return;
}



// ============================================================
// RVA: 0x1507e84 | Atlas.FrontEnd.Synced3DElementBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_FrontEnd_Synced3DElementBehaviour___ctor(ulong param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)(param_1 + 0x44) = 2;
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



