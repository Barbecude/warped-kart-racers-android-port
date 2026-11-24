// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.UI2.UIManagerBehaviour

// ============================================================
// RVA: 0x2f89fd8 | Core.UI2.UIManagerBehaviour.get_Canvas
// ============================================================

undefined8 Core_UI2_UIManagerBehaviour__get_Canvas(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x2f89fe0 | Core.UI2.UIManagerBehaviour.get_CanvasScaler
// ============================================================

undefined8 Core_UI2_UIManagerBehaviour__get_CanvasScaler(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x2f89fe8 | Core.UI2.UIManagerBehaviour.get_GraphicRaycaster
// ============================================================

undefined8 Core_UI2_UIManagerBehaviour__get_GraphicRaycaster(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x2f89ff0 | Core.UI2.UIManagerBehaviour.get_EventSystem
// ============================================================

undefined8 Core_UI2_UIManagerBehaviour__get_EventSystem(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x2f89ff8 | Core.UI2.UIManagerBehaviour.get_InputSystemUIInputModule
// ============================================================

undefined8 Core_UI2_UIManagerBehaviour__get_InputSystemUIInputModule(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



// ============================================================
// RVA: 0x2f8a000 | Core.UI2.UIManagerBehaviour..ctor
// ============================================================

undefined1  [16] Core_UI2_UIManagerBehaviour___ctor(ulong param_1)

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



