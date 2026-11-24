// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.FrontEnd.FrontEndContextInfo

// ============================================================
// RVA: 0x158b6fc | Atlas.FrontEnd.FrontEndContextInfo..ctor
// ============================================================

undefined1  [16] Atlas_FrontEnd_FrontEndContextInfo___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb50f3 & 1) == 0) {
    func_0x00f78a20(0x3d21688);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb50f3 = 1;
  }
  uVar1 = func_0x00f78aec(/*Atlas.FrontEnd.EventInfo_TypeInfo*/ uRam0000000003d21688);
  Atlas_FrontEnd_EventInfo___ctor();
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



