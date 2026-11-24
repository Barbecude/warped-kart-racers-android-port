// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Services.Replicator.<>c

// ============================================================
// RVA: 0x1689ba4 | Core.Services.Replicator.<>c..cctor
// ============================================================

void Core_Services_Replicator___c___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb5a44 & 1) == 0) {
    func_0x00f78a20(0x3d28928);
    bRam0000000003eb5a44 = 1;
  }
  uVar1 = func_0x00f78aec(/*Core.Services.Replicator.<>c_TypeInfo*/ lRam0000000003d28928);
  /*System.Object$$.ctor*/ func_0x0294d018(uVar1,0);
  **(undefined8 **)(/*Core.Services.Replicator.<>c_TypeInfo*/ lRam0000000003d28928 + 0xb8) = uVar1;
  return;
}



// ============================================================
// RVA: 0x1689c04 | Core.Services.Replicator.<>c..ctor
// ============================================================

void Core_Services_Replicator___c___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x1689c0c | Core.Services.Replicator.<>c.<Start>b__40_0
// ============================================================

bool Core_Services_Replicator___c___Start_b__40_0(void)

{
  if ((bRam0000000003eb5a45 & 1) == 0) {
    func_0x00f78a20(0x3d22970);
    bRam0000000003eb5a45 = 1;
  }
  if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (cRam0000000003cbe500 == '\0') {
    func_0x00f78a20(0x3d22970);
    cRam0000000003cbe500 = '\x01';
  }
  if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return *(long *)(*(long *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xb8) + 8) != 0;
}



