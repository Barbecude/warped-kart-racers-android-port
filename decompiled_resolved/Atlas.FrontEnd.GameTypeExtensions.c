// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.FrontEnd.GameTypeExtensions

// ============================================================
// RVA: 0x15b2f7c | Atlas.FrontEnd.GameTypeExtensions.IsMultiplayer
// ============================================================

bool Atlas_FrontEnd_GameTypeExtensions__IsMultiplayer(int param_1)

{
  return param_1 == 5 || param_1 - 1U < 2;
}



// ============================================================
// RVA: 0x15b2f90 | Atlas.FrontEnd.GameTypeExtensions..cctor
// ============================================================

void Atlas_FrontEnd_GameTypeExtensions___cctor(void)

{
  if ((bRam0000000003eb5266 & 1) == 0) {
    func_0x00f78a20(0x3d21b70);
    bRam0000000003eb5266 = 1;
  }
  **(undefined4 **)(/*Atlas.FrontEnd.GameTypeExtensions_TypeInfo*/ lRam0000000003d21b70 + 0xb8) = 2;
  return;
}



