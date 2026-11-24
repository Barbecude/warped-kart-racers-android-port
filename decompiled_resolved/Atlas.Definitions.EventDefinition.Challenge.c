// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Definitions.EventDefinition.Challenge

// ============================================================
// RVA: 0x154bee4 | Atlas.Definitions.EventDefinition.Challenge.get_Exists
// ============================================================

ulong Atlas_Definitions_EventDefinition_Challenge__get_Exists(long *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(param_1[3],0);
  if (((uVar1 & 1) == 0) && (uVar1 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(param_1[4],0), (uVar1 & 1) == 0)) {
    if (*param_1 == 0) {
      func_0x00f78af4();
      if ((bRam0000000003eb4f79 & 1) == 0) {
        func_0x00f78a20(0x3d27520);
        bRam0000000003eb4f79 = 1;
      }
      uVar2 = func_0x00f78aec(/*Atlas.FrontEnd.FTUEManager.<>c_TypeInfo*/ lRam0000000003d27520);
      uVar1 = /*System.Object$$.ctor*/ func_0x0294d018(uVar2,0);
      **(undefined8 **)(/*Atlas.FrontEnd.FTUEManager.<>c_TypeInfo*/ lRam0000000003d27520 + 0xb8) = uVar2;
      return uVar1;
    }
    uVar1 = (ulong)(*(int *)(*param_1 + 0x18) != 0);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



