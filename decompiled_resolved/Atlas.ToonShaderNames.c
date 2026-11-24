// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.ToonShaderNames

// ============================================================
// RVA: 0x150ab74 | Atlas.ToonShaderNames..ctor
// ============================================================

void Atlas_ToonShaderNames___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x150ab7c | Atlas.ToonShaderNames..cctor
// ============================================================

void Atlas_ToonShaderNames___cctor(void)

{
  undefined4 uVar1;
  
  if ((bRam0000000003eb4d4a & 1) == 0) {
    func_0x00f78a20(0x3d25318);
    func_0x00f78a20(0x3d777d8);
    func_0x00f78a20(0x3d77400);
    func_0x00f78a20(0x3d77408);
    bRam0000000003eb4d4a = 1;
  }
  uVar1 = /*UnityEngine.Shader$$PropertyToID*/ func_0x03261878(/*STR('_RegionMap')*/ uRam0000000003d77408,0);
  **(undefined4 **)(/*Atlas.ToonShaderNames_TypeInfo*/ lRam0000000003d25318 + 0xb8) = uVar1;
  uVar1 = /*UnityEngine.Shader$$PropertyToID*/ func_0x03261878(/*STR('_ToonMap')*/ uRam0000000003d777d8,0);
  *(undefined4 *)(*(long *)(/*Atlas.ToonShaderNames_TypeInfo*/ lRam0000000003d25318 + 0xb8) + 4) = uVar1;
  uVar1 = /*UnityEngine.Shader$$PropertyToID*/ func_0x03261878(/*STR('_RegionId')*/ uRam0000000003d77400,0);
  *(undefined4 *)(*(long *)(/*Atlas.ToonShaderNames_TypeInfo*/ lRam0000000003d25318 + 0xb8) + 8) = uVar1;
  return;
}



