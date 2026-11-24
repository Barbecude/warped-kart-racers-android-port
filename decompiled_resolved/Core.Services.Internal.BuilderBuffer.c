// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Services.Internal.BuilderBuffer

// ============================================================
// RVA: 0x16885c8 | Core.Services.Internal.BuilderBuffer..ctor
// ============================================================

void Core_Services_Internal_BuilderBuffer___ctor(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb5a38 & 1) == 0) {
    func_0x00f78a20(0x3d1eda0);
    bRam0000000003eb5a38 = 1;
  }
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  uVar1 = func_0x00f78a34(/*byte[]_TypeInfo*/ uRam0000000003d1eda0,param_2);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  return;
}



// ============================================================
// RVA: 0x1688634 | Core.Services.Internal.BuilderBuffer.AllocateArray
// ============================================================

undefined8 Core_Services_Internal_BuilderBuffer__AllocateArray(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



