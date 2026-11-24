// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.VFXBehaviour

// ============================================================
// RVA: 0x1526f60 | Atlas.Gameplay.VFXBehaviour.OnLeavePool
// ============================================================

void Atlas_Gameplay_VFXBehaviour__OnLeavePool(void)

{
  return;
}



// ============================================================
// RVA: 0x1526f64 | Atlas.Gameplay.VFXBehaviour.OnEnterPool
// ============================================================

void Atlas_Gameplay_VFXBehaviour__OnEnterPool
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(param_4 + 0x18) = uVar1;
  *(undefined4 *)(param_4 + 0x1c) = param_2;
  *(undefined4 *)(param_4 + 0x20) = param_3;
  uVar2 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(param_4 + 0x24) = uVar2;
  return;
}



// ============================================================
// RVA: 0x1526f98 | Atlas.Gameplay.VFXBehaviour.SetVelocity
// ============================================================

long Atlas_Gameplay_VFXBehaviour__SetVelocity
               (undefined4 param_1,uint param_2,float param_3,undefined4 param_4,long param_5)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int *piVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  
  *(undefined4 *)(param_5 + 0x18) = param_1;
  *(uint *)(param_5 + 0x1c) = param_2;
  *(float *)(param_5 + 0x20) = param_3;
  lVar1 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_5,0);
  uVar6 = (ulong)param_2;
  /*UnityEngine.Quaternion$$LookRotation*/ func_0x03251db0(param_1,0);
  if (lVar1 != 0) {
    lVar1 = /*UnityEngine.Transform$$set_rotation*/ func_0x032754b4(lVar1,0);
    *(undefined4 *)(param_5 + 0x24) = param_4;
    *(undefined4 *)(param_5 + 0x28) = param_4;
    return lVar1;
  }
  auVar15 = func_0x00f78af4();
  plVar3 = auVar15._8_8_;
  lVar1 = auVar15._0_8_;
  if ((bRam0000000003eb4e64 & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    bRam0000000003eb4e64 = 1;
  }
  uVar12 = (undefined4)uVar6;
  fVar13 = *(float *)(lVar1 + 0x24);
  if (0.0 < fVar13) {
    if (plVar3 == (long *)0x0) goto code_r0x0152720c;
    lVar4 = *plVar3;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto code_r0x015270c0;
        }
        piVar7 = piVar7 + 4;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)func_0x00fac1f0(plVar3,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x015270c0:
    fVar8 = (float)(*(code *)*puVar2)(plVar3,puVar2[1]);
    fVar13 = fVar13 - fVar8;
    *(float *)(lVar1 + 0x24) = fVar13;
    fVar8 = (float)/*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    fVar11 = (float)uVar6;
    if (fVar13 <= 0.0) {
      *(float *)(lVar1 + 0x18) = fVar8;
      *(float *)(lVar1 + 0x1c) = fVar11;
      *(float *)(lVar1 + 0x20) = param_3;
    }
    else {
      fVar13 = *(float *)(lVar1 + 0x20);
      uVar14 = *(undefined8 *)(lVar1 + 0x18);
      /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(*(float *)(lVar1 + 0x24) / *(float *)(lVar1 + 0x28),0);
      fVar9 = (float)/*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(0);
      uVar6 = CONCAT44(fVar11 + ((float)((ulong)uVar14 >> 0x20) - fVar11) * fVar9,
                       fVar8 + ((float)uVar14 - fVar8) * fVar9);
      *(ulong *)(lVar1 + 0x18) = uVar6;
      *(float *)(lVar1 + 0x20) = param_3 + (fVar13 - param_3) * fVar9;
      param_3 = fVar8;
    }
  }
  uVar12 = (undefined4)uVar6;
  lVar1 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar1,0);
  if ((lVar1 != 0) && (/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar1,0), plVar3 != (long *)0x0)) {
    lVar4 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto code_r0x015271c0;
        }
        piVar7 = piVar7 + 4;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)func_0x00fac1f0(plVar3,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x015271c0:
    (*(code *)*puVar2)(plVar3,puVar2[1]);
    if (pcRam0000000003ec1950 == (code *)0x0) {
      pcRam0000000003ec1950 =
           (code *)func_0x00f789d4("UnityEngine.Transform::set_position_Injected(UnityEngine.Vector3&)"
                                   ,0);
    }
    lVar1 = (*pcRam0000000003ec1950)(lVar1,&stack0xffffffffffffff90);
    return lVar1;
  }
code_r0x0152720c:
  lVar1 = func_0x00f78af4();
  uVar10 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(lVar1 + 0x18) = uVar10;
  *(undefined4 *)(lVar1 + 0x1c) = uVar12;
  *(float *)(lVar1 + 0x20) = param_3;
  uVar14 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(lVar1 + 0x24) = uVar14;
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
// RVA: 0x1527014 | Atlas.Gameplay.VFXBehaviour.OnUpdate
// ============================================================

long Atlas_Gameplay_VFXBehaviour__OnUpdate
               (undefined1 param_1 [16],undefined8 param_2,float param_3,long param_4,long *param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined8 uVar12;
  
  if ((bRam0000000003eb4e64 & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    bRam0000000003eb4e64 = 1;
  }
  uVar10 = (undefined4)param_2;
  fVar11 = *(float *)(param_4 + 0x24);
  if (0.0 < fVar11) {
    if (param_5 == (long *)0x0) goto LAB_0152720c;
    lVar2 = *param_5;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12a);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_015270c0;
        }
        piVar5 = piVar5 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)func_0x00fac1f0(param_5,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
LAB_015270c0:
    fVar6 = (float)(*(code *)*puVar1)(param_5,puVar1[1]);
    fVar11 = fVar11 - fVar6;
    *(float *)(param_4 + 0x24) = fVar11;
    fVar6 = (float)/*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    fVar9 = (float)param_2;
    if (fVar11 <= 0.0) {
      *(float *)(param_4 + 0x18) = fVar6;
      *(float *)(param_4 + 0x1c) = fVar9;
      *(float *)(param_4 + 0x20) = param_3;
    }
    else {
      fVar11 = *(float *)(param_4 + 0x20);
      uVar12 = *(undefined8 *)(param_4 + 0x18);
      /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(*(float *)(param_4 + 0x24) / *(float *)(param_4 + 0x28),0);
      fVar7 = (float)/*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(0);
      param_2 = CONCAT44(fVar9 + ((float)((ulong)uVar12 >> 0x20) - fVar9) * fVar7,
                         fVar6 + ((float)uVar12 - fVar6) * fVar7);
      *(undefined8 *)(param_4 + 0x18) = param_2;
      *(float *)(param_4 + 0x20) = param_3 + (fVar11 - param_3) * fVar7;
      param_3 = fVar6;
    }
  }
  uVar10 = (undefined4)param_2;
  lVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_4,0);
  if ((lVar2 != 0) && (/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar2,0), param_5 != (long *)0x0)) {
    lVar3 = *param_5;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto code_r0x015271c0;
        }
        piVar5 = piVar5 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)func_0x00fac1f0(param_5,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x015271c0:
    (*(code *)*puVar1)(param_5,puVar1[1]);
    if (pcRam0000000003ec1950 == (code *)0x0) {
      pcRam0000000003ec1950 =
           (code *)func_0x00f789d4("UnityEngine.Transform::set_position_Injected(UnityEngine.Vector3&)"
                                   ,0);
    }
    lVar2 = (*pcRam0000000003ec1950)(lVar2,&stack0xffffffffffffffd0);
    return lVar2;
  }
LAB_0152720c:
  lVar2 = func_0x00f78af4();
  uVar8 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(lVar2 + 0x18) = uVar8;
  *(undefined4 *)(lVar2 + 0x1c) = uVar10;
  *(float *)(lVar2 + 0x20) = param_3;
  uVar12 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(lVar2 + 0x24) = uVar12;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return lVar2;
}



// ============================================================
// RVA: 0x1527210 | Atlas.Gameplay.VFXBehaviour..ctor
// ============================================================

undefined1  [16]
Atlas_Gameplay_VFXBehaviour___ctor
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,ulong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  uVar1 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(param_4 + 0x18) = uVar1;
  *(undefined4 *)(param_4 + 0x1c) = param_2;
  *(undefined4 *)(param_4 + 0x20) = param_3;
  uVar2 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(param_4 + 0x24) = uVar2;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_4;
  return auVar3;
}



