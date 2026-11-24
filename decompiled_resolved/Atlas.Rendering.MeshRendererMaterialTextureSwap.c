// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Rendering.MeshRendererMaterialTextureSwap

// ============================================================
// RVA: 0x148dbec | Atlas.Rendering.MeshRendererMaterialTextureSwap.SwapTexture
// ============================================================

undefined1  [16]
Atlas_Rendering_MeshRendererMaterialTextureSwap__SwapTexture
          (long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if ((int)param_3 < 0) {
LAB_0148dc60:
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = param_1;
    return auVar5;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x20) + 0x18) <= (int)param_3) goto LAB_0148dc60;
    lVar1 = /*Atlas.Rendering.MeshRendererMaterialTextureSwap$$GetMaterial*/ func_0x0149393c(param_1);
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 != 0) {
      if (*(uint *)(lVar3 + 0x18) <= param_3) goto LAB_0148dc74;
      if (lVar1 != 0) {
        uVar2 = *(undefined8 *)(lVar3 + (ulong)param_3 * 8 + 0x20);
        if (pcRam0000000003ebfc58 == (code *)0x0) {
          pcRam0000000003ebfc58 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.Material::SetTextureImpl(System.Int32,UnityEngine.Texture)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03238228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        auVar5 = (*pcRam0000000003ebfc58)(lVar1,param_2,uVar2);
        return auVar5;
      }
    }
  }
  func_0x00f78af4();
LAB_0148dc74:
  uVar2 = func_0x00f78b24();
  auVar4._0_8_ = func_0x00f78ac0(uVar2,0);
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar4._8_8_ = 0;
  return auVar4;
}



// ============================================================
// RVA: 0x149393c | Atlas.Rendering.MeshRendererMaterialTextureSwap.GetMaterial
// ============================================================

undefined8 Atlas_Rendering_MeshRendererMaterialTextureSwap__GetMaterial(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = /*UnityEngine.Renderer$$get_sharedMaterial*/ func_0x0325bea4(*(long *)(param_1 + 0x10),0);
    if (*(int *)(param_1 + 0x18) < 1) {
      return uVar1;
    }
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (lVar2 = /*UnityEngine.Renderer$$get_sharedMaterials*/ func_0x0325bf34(*(long *)(param_1 + 0x10),0), lVar2 != 0)) {
      if (*(uint *)(param_1 + 0x18) < *(uint *)(lVar2 + 0x18)) {
        return *(undefined8 *)(lVar2 + (long)(int)*(uint *)(param_1 + 0x18) * 8 + 0x20);
      }
      goto LAB_014939a4;
    }
  }
  func_0x00f78af4();
LAB_014939a4:
  uVar1 = func_0x00f78b24();
  uVar1 = func_0x00f78ac0(uVar1,0);
  return uVar1;
}



// ============================================================
// RVA: 0x14939b0 | Atlas.Rendering.MeshRendererMaterialTextureSwap..ctor
// ============================================================

void Atlas_Rendering_MeshRendererMaterialTextureSwap___ctor(void)

{
  return;
}



