// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Lighting.LightWorldTransformSample

// ============================================================
// RVA: 0x1486a40 | Atlas.Lighting.LightWorldTransformSample..ctor
// ============================================================

void Atlas_Lighting_LightWorldTransformSample___ctor(long param_1,undefined8 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x1486a6c | Atlas.Lighting.LightWorldTransformSample.GetLightWorldPosition
// ============================================================

undefined8 Atlas_Lighting_LightWorldTransformSample__GetLightWorldPosition(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(param_1 + 0x10),0);
    uVar1 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
    return uVar1;
  }
  lVar2 = func_0x00f78af4();
  return *(undefined8 *)(lVar2 + 0x10);
}



