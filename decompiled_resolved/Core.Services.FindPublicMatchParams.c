// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Services.FindPublicMatchParams

// ============================================================
// RVA: 0x166b0d0 | Core.Services.FindPublicMatchParams..ctor
// ============================================================

undefined1  [16] Core_Services_FindPublicMatchParams___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb58bc & 1) == 0) {
    func_0x00f78a20(0x3d2fe20);
    func_0x00f78a20(0x3d1c508);
    func_0x00f78a20(0x3d25238);
    bRam0000000003eb58bc = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, string>_TypeInfo*/ uRam0000000003d1c508);
  /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar1,uRam0000000003d2fe20);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)(param_1 + 0x18) = **(undefined8 **)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xb8);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



