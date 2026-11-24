// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.SimpleDynamicAnimationBehaviour

// ============================================================
// RVA: 0x14f6ec0 | Atlas.Gameplay.SimpleDynamicAnimationBehaviour.LateUpdate
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_Gameplay_SimpleDynamicAnimationBehaviour__LateUpdate
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined8 uStack_40;
  float fStack_38;
  
  fVar2 = (float)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
  lVar1 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_4,0);
  if (lVar1 != 0) {
    fVar3 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar1,0);
    fStack_38 = param_3 - *(float *)(param_4 + 100);
    uStack_40 = CONCAT44(param_2 - (float)((ulong)*(undefined8 *)(param_4 + 0x5c) >> 0x20),
                         fVar3 - (float)*(undefined8 *)(param_4 + 0x5c));
    fVar4 = (float)/*UnityEngine.Vector3$$get_magnitude*/ func_0x0327bebc(&uStack_40,0);
    fVar4 = (float)/*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(fVar4 / *(float *)(param_4 + 0x48),0);
    fVar6 = *(float *)(param_4 + 0x58);
    if (fVar6 <= fVar4) {
      fVar6 = fVar6 + fVar2 * *(float *)(param_4 + 0x4c);
      *(float *)(param_4 + 0x58) = fVar6;
      if (fVar4 < fVar6) {
        fVar4 = fVar6;
      }
    }
    else {
      fVar6 = fVar6 - fVar2 * *(float *)(param_4 + 0x50);
      *(float *)(param_4 + 0x58) = fVar6;
      if (fVar6 < *(float *)(param_4 + 0x54)) {
        fVar4 = *(float *)(param_4 + 0x54);
      }
    }
    lVar1 = Atlas_Gameplay_SimpleAnimationBehaviour__Animate(fVar2 * fVar4,param_4);
    *(float *)(param_4 + 0x5c) = fVar3;
    *(float *)(param_4 + 0x60) = param_2;
    *(float *)(param_4 + 100) = param_3;
    return lVar1;
  }
  lVar1 = func_0x00f78af4();
  *(undefined8 *)(lVar1 + 0x48) = _UNK_033f85b8;
  *(undefined4 *)(lVar1 + 0x50) = 0x41200000;
  uVar5 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(lVar1 + 0x5c) = uVar5;
  *(float *)(lVar1 + 0x60) = param_2;
  *(float *)(lVar1 + 100) = param_3;
  uVar5 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(lVar1 + 0x24) = uVar5;
  *(float *)(lVar1 + 0x28) = param_2;
  *(float *)(lVar1 + 0x2c) = param_3;
  uVar5 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(lVar1 + 0x3c) = uVar5;
  *(float *)(lVar1 + 0x40) = param_2;
  *(float *)(lVar1 + 0x44) = param_3;
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
// RVA: 0x14f6fb8 | Atlas.Gameplay.SimpleDynamicAnimationBehaviour..ctor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
Atlas_Gameplay_SimpleDynamicAnimationBehaviour___ctor
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,ulong param_4)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  
  *(undefined8 *)(param_4 + 0x48) = _UNK_033f85b8;
  *(undefined4 *)(param_4 + 0x50) = 0x41200000;
  uVar1 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(param_4 + 0x5c) = uVar1;
  *(undefined4 *)(param_4 + 0x60) = param_2;
  *(undefined4 *)(param_4 + 100) = param_3;
  uVar1 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(param_4 + 0x24) = uVar1;
  *(undefined4 *)(param_4 + 0x28) = param_2;
  *(undefined4 *)(param_4 + 0x2c) = param_3;
  uVar1 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(param_4 + 0x3c) = uVar1;
  *(undefined4 *)(param_4 + 0x40) = param_2;
  *(undefined4 *)(param_4 + 0x44) = param_3;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_4;
  return auVar2;
}



