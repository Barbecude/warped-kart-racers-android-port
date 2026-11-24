// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.MapSceneBehaviour

// ============================================================
// RVA: 0x148db18 | Atlas.Gameplay.MapSceneBehaviour.SwapMeshRendererMaterialTextures
// ============================================================

/* WARNING: Possible PIC construction at 0x0148dbb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0148dbb8) */

long Atlas_Gameplay_MapSceneBehaviour__SwapMeshRendererMaterialTextures
               (long param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  lVar1 = param_1;
  if ((bRam0000000003eb4981 & 1) == 0) {
    lVar1 = func_0x00f78a20(0x3d25318);
    bRam0000000003eb4981 = 1;
  }
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == 0) {
    return lVar1;
  }
  if (*(int *)(lVar4 + 0x18) < 1) {
    return lVar1;
  }
  if (*(int *)(lVar4 + 0x18) == 0) {
    uVar3 = func_0x00f78b24();
    func_0x00f78ac0(uVar3,0);
LAB_0148dbe8:
    param_2 = param_3;
    auVar5 = func_0x00f78af4();
  }
  else {
    lVar1 = *(long *)(lVar4 + 0x20);
    if (((*(ushort *)(/*Atlas.ToonShaderNames_TypeInfo*/ lRam0000000003d25318 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.ToonShaderNames_TypeInfo*/ lRam0000000003d25318 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar1 == 0) goto LAB_0148dbe8;
    auVar5._8_4_ = *(undefined4 *)(*(long *)(/*Atlas.ToonShaderNames_TypeInfo*/ lRam0000000003d25318 + 0xb8) + 4);
    auVar5._0_8_ = lVar1;
    auVar5._12_4_ = 0;
  }
  lVar1 = auVar5._0_8_;
  uVar2 = (uint)param_2;
  if ((int)uVar2 < 0) {
    return lVar1;
  }
  if (*(long *)(lVar1 + 0x20) != 0) {
    if (*(int *)(*(long *)(lVar1 + 0x20) + 0x18) <= (int)uVar2) {
      return lVar1;
    }
    lVar4 = /*Atlas.Rendering.MeshRendererMaterialTextureSwap$$GetMaterial*/ func_0x0149393c(lVar1);
    lVar1 = *(long *)(lVar1 + 0x20);
    if (lVar1 != 0) {
      if (*(uint *)(lVar1 + 0x18) <= uVar2) goto code_r0x0148dc74;
      if (lVar4 != 0) {
        uVar3 = *(undefined8 *)(lVar1 + (param_2 & 0xffffffff) * 8 + 0x20);
        if (pcRam0000000003ebfc58 == (code *)0x0) {
          pcRam0000000003ebfc58 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.Material::SetTextureImpl(System.Int32,UnityEngine.Texture)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03238228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar1 = (*pcRam0000000003ebfc58)(lVar4,auVar5._8_8_,uVar3);
        return lVar1;
      }
    }
  }
  func_0x00f78af4();
code_r0x0148dc74:
  uVar3 = func_0x00f78b24();
  lVar1 = func_0x00f78ac0(uVar3,0);
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return lVar1;
}



// ============================================================
// RVA: 0x148dc80 | Atlas.Gameplay.MapSceneBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_Gameplay_MapSceneBehaviour___ctor(ulong param_1)

{
  undefined1 auVar1 [16];
  
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1;
  return auVar1;
}



