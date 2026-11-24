// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.SimpleAnimationBehaviour

// ============================================================
// RVA: 0x14f6d0c | Atlas.Gameplay.SimpleAnimationBehaviour.Start
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_Gameplay_SimpleAnimationBehaviour__Start
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined4 extraout_s0;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  lVar1 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_4,0);
  if (lVar1 != 0) {
    lVar1 = /*UnityEngine.Transform$$get_localPosition*/ func_0x03275078(lVar1,0);
    *(undefined4 *)(param_4 + 0x3c) = extraout_s0;
    *(undefined4 *)(param_4 + 0x40) = param_2;
    *(undefined4 *)(param_4 + 0x44) = param_3;
    return lVar1;
  }
  lVar1 = func_0x00f78af4();
  fVar5 = *(float *)(lVar1 + 0x38);
  fVar3 = (float)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
  fVar5 = fVar5 + fVar3;
  *(float *)(lVar1 + 0x38) = fVar5;
  fVar3 = *(float *)(lVar1 + 0x18);
  fVar6 = *(float *)(lVar1 + 0x1c) * fVar5;
  fVar7 = *(float *)(lVar1 + 0x20) * fVar5;
  lVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar1,0);
  /*UnityEngine.Quaternion$$Euler*/ func_0x03252154(fVar3 * fVar5,0);
  if (lVar2 != 0) {
    lVar2 = /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(lVar2,0);
    fVar3 = *(float *)(lVar1 + 0x30);
    if (fVar3 == 0.0) {
      return lVar2;
    }
    lVar1 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar1,0);
    if (lVar1 != 0) {
      _sinf(fVar5 * _UNK_033f84b4 * fVar3);
      if (pcRam0000000003ec1960 == (code *)0x0) {
        pcRam0000000003ec1960 =
             (code *)func_0x00f789d4("UnityEngine.Transform::set_localPosition_Injected(UnityEngine.Vector3&)"
                                     ,0);
      }
      lVar1 = (*pcRam0000000003ec1960)(lVar1,&stack0xffffffffffffffb0);
      return lVar1;
    }
  }
  lVar1 = func_0x00f78af4();
  uVar4 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(lVar1 + 0x24) = uVar4;
  *(float *)(lVar1 + 0x28) = fVar6;
  *(float *)(lVar1 + 0x2c) = fVar7;
  uVar4 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(lVar1 + 0x3c) = uVar4;
  *(float *)(lVar1 + 0x40) = fVar6;
  *(float *)(lVar1 + 0x44) = fVar7;
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
// RVA: 0x14f6d48 | Atlas.Gameplay.SimpleAnimationBehaviour.LateUpdate
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_Gameplay_SimpleAnimationBehaviour__LateUpdate(long param_1)

{
  long lVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = *(float *)(param_1 + 0x38);
  fVar2 = (float)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
  fVar4 = fVar4 + fVar2;
  *(float *)(param_1 + 0x38) = fVar4;
  fVar2 = *(float *)(param_1 + 0x18);
  fVar5 = *(float *)(param_1 + 0x1c) * fVar4;
  fVar6 = *(float *)(param_1 + 0x20) * fVar4;
  lVar1 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_1,0);
  /*UnityEngine.Quaternion$$Euler*/ func_0x03252154(fVar2 * fVar4,0);
  if (lVar1 != 0) {
    lVar1 = /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(lVar1,0);
    fVar2 = *(float *)(param_1 + 0x30);
    if (fVar2 == 0.0) {
      return lVar1;
    }
    lVar1 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_1,0);
    if (lVar1 != 0) {
      _sinf(fVar4 * _UNK_033f84b4 * fVar2);
      if (pcRam0000000003ec1960 == (code *)0x0) {
        pcRam0000000003ec1960 =
             (code *)func_0x00f789d4("UnityEngine.Transform::set_localPosition_Injected(UnityEngine.Vector3&)"
                                     ,0);
      }
      lVar1 = (*pcRam0000000003ec1960)(lVar1,&stack0xffffffffffffffd0);
      return lVar1;
    }
  }
  lVar1 = func_0x00f78af4();
  uVar3 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(lVar1 + 0x24) = uVar3;
  *(float *)(lVar1 + 0x28) = fVar5;
  *(float *)(lVar1 + 0x2c) = fVar6;
  uVar3 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(lVar1 + 0x3c) = uVar3;
  *(float *)(lVar1 + 0x40) = fVar5;
  *(float *)(lVar1 + 0x44) = fVar6;
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
// RVA: 0x14f6d84 | Atlas.Gameplay.SimpleAnimationBehaviour.Animate
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_Gameplay_SimpleAnimationBehaviour__Animate(float param_1,long param_2)

{
  long lVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = *(float *)(param_2 + 0x18);
  fVar4 = *(float *)(param_2 + 0x1c) * param_1;
  fVar5 = *(float *)(param_2 + 0x20) * param_1;
  lVar1 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_2,0);
  /*UnityEngine.Quaternion$$Euler*/ func_0x03252154(fVar2 * param_1,0);
  if (lVar1 != 0) {
    lVar1 = /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(lVar1,0);
    fVar2 = *(float *)(param_2 + 0x30);
    if (fVar2 == 0.0) {
      return lVar1;
    }
    lVar1 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_2,0);
    if (lVar1 != 0) {
      _sinf(param_1 * _UNK_033f84b4 * fVar2);
      if (pcRam0000000003ec1960 == (code *)0x0) {
        pcRam0000000003ec1960 =
             (code *)func_0x00f789d4("UnityEngine.Transform::set_localPosition_Injected(UnityEngine.Vector3&)"
                                     ,0);
      }
      lVar1 = (*pcRam0000000003ec1960)(lVar1,&stack0xffffffffffffffd0);
      return lVar1;
    }
  }
  lVar1 = func_0x00f78af4();
  uVar3 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(lVar1 + 0x24) = uVar3;
  *(float *)(lVar1 + 0x28) = fVar4;
  *(float *)(lVar1 + 0x2c) = fVar5;
  uVar3 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(lVar1 + 0x3c) = uVar3;
  *(float *)(lVar1 + 0x40) = fVar4;
  *(float *)(lVar1 + 0x44) = fVar5;
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
// RVA: 0x14f6e7c | Atlas.Gameplay.SimpleAnimationBehaviour..ctor
// ============================================================

undefined1  [16]
Atlas_Gameplay_SimpleAnimationBehaviour___ctor
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,ulong param_4)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  
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



