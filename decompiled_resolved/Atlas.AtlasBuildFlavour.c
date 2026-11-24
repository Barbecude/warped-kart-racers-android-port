// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.AtlasBuildFlavour

// ============================================================
// RVA: 0x1446654 | Atlas.AtlasBuildFlavour.IsValid
// ============================================================

undefined8 Atlas_AtlasBuildFlavour__IsValid(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((bRam0000000003eb4711 & 1) == 0) {
    func_0x00f78a20(0x3d711f0);
    bRam0000000003eb4711 = 1;
  }
  uVar1 = /*ElectricSquare.Build.BuildFlavour$$IsValid*/ func_0x016cb488(param_1,0);
  if (((uVar1 & 1) == 0) &&
     ((param_1 == 0 || (uVar1 = /*System.String$$op_Equality*/ func_0x029bdf2c(param_1,/*STR('Performance')*/ uRam0000000003d711f0,0), (uVar1 & 1) == 0)))
     ) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



