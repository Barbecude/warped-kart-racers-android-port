// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Services.Internal.HTTP.Request

// ============================================================
// RVA: 0x168b110 | Core.Services.Internal.HTTP.Request..ctor
// ============================================================

void Core_Services_Internal_HTTP_Request___ctor(long param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb5a4b & 1) == 0) {
    func_0x00f78a20(0x3d2fe20);
    func_0x00f78a20(0x3d1c508);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb5a4b = 1;
  }
  uVar1 = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, string>_TypeInfo*/ uRam0000000003d1c508);
  /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar1,uRam0000000003d2fe20);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



