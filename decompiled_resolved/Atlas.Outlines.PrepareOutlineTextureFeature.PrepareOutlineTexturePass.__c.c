// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Outlines.PrepareOutlineTextureFeature.PrepareOutlineTexturePass.<>c

// ============================================================
// RVA: 0x145e670 | Atlas.Outlines.PrepareOutlineTextureFeature.PrepareOutlineTexturePass.<>c..cctor
// ============================================================

void Atlas_Outlines_PrepareOutlineTextureFeature_PrepareOutlineTexturePass___c___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb47fc & 1) == 0) {
    func_0x00f78a20(0x3d29b70);
    bRam0000000003eb47fc = 1;
  }
  uVar1 = func_0x00f78aec(/*Atlas.Outlines.PrepareOutlineTextureFeature.PrepareOutlineTexturePass.<>c_TypeInfo*/ lRam0000000003d29b70);
  /*System.Object$$.ctor*/ func_0x0294d018(uVar1,0);
  **(undefined8 **)(/*Atlas.Outlines.PrepareOutlineTextureFeature.PrepareOutlineTexturePass.<>c_TypeInfo*/ lRam0000000003d29b70 + 0xb8) = uVar1;
  return;
}



// ============================================================
// RVA: 0x145e6d0 | Atlas.Outlines.PrepareOutlineTextureFeature.PrepareOutlineTexturePass.<>c..ctor
// ============================================================

void Atlas_Outlines_PrepareOutlineTextureFeature_PrepareOutlineTexturePass___c___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x145e6d8 | Atlas.Outlines.PrepareOutlineTextureFeature.PrepareOutlineTexturePass.<>c.<.ctor>b__13_0
// ============================================================

void Atlas_Outlines_PrepareOutlineTextureFeature_PrepareOutlineTexturePass___c____ctor_b__13_0
               (undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  if ((bRam0000000003eb47fd & 1) == 0) {
    func_0x00f78a20(0x3d3ec50);
    func_0x00f78a20(0x3d24390);
    bRam0000000003eb47fd = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Rendering.RenderQueueRange_TypeInfo*/ lRam0000000003d24390 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Rendering.RenderQueueRange_TypeInfo*/ lRam0000000003d24390 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*UnityEngine.Rendering.RenderQueueRange$$get_opaque*/ func_0x032577fc(0);
  uStack_38 = 0;
  uStack_40 = 0;
  /*System.Nullable<RenderQueueRange>$$.ctor*/ func_0x0265e884(&uStack_40,uVar1,uRam0000000003d3ec50);
  uVar1 = /*UnityEngine.LayerMask$$op_Implicit*/ func_0x032326f8(param_3,0);
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  /*UnityEngine.Rendering.FilteringSettings$$.ctor*/ func_0x0322dee4(&uStack_58,uStack_40,uStack_38,uVar1,0xffffffff,0,0);
  param_1[1] = uStack_50;
  *param_1 = uStack_58;
  param_1[2] = uStack_48;
  return;
}



