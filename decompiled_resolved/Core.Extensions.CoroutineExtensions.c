// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Extensions.CoroutineExtensions

// ============================================================
// RVA: 0x16466ec | Core.Extensions.CoroutineExtensions.WaitFor
// ============================================================

long Core_Extensions_CoroutineExtensions__WaitFor(undefined8 param_1)

{
  long lVar1;
  
  if ((bRam0000000003eb575c & 1) == 0) {
    func_0x00f78a20(0x3d26da8);
    bRam0000000003eb575c = 1;
  }
  lVar1 = func_0x00f78aec(/*Core.Extensions.CoroutineExtensions.<WaitFor>d__0_TypeInfo*/ uRam0000000003d26da8);
  /*System.Object$$.ctor*/ func_0x0294d018(lVar1,0);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  return lVar1;
}



