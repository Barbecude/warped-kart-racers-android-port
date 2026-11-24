// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Maths.Math2d

// ============================================================
// RVA: 0x1492c30 | Atlas.Maths.Math2d.Barycentric
// ============================================================

void Atlas_Maths_Math2d__Barycentric
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8,float *param_9,float *param_10,float *param_11)

{
  float fVar1;
  
  fVar1 = 1.0 / ((param_5 - param_3) * (param_8 - param_4) -
                (param_6 - param_4) * (param_7 - param_3));
  *param_10 = ((param_1 - param_3) * (param_8 - param_4) - (param_2 - param_4) * (param_7 - param_3)
              ) * fVar1;
  fVar1 = ((param_2 - param_4) * (param_5 - param_3) - (param_1 - param_3) * (param_6 - param_4)) *
          fVar1;
  *param_11 = fVar1;
  *param_9 = (1.0 - *param_10) - fVar1;
  return;
}



// ============================================================
// RVA: 0x1492c98 | Atlas.Maths.Math2d.PointFromBarycentric
// ============================================================

float Atlas_Maths_Math2d__PointFromBarycentric
                (float param_1,undefined1 param_2 [16],float param_3,undefined1 param_4 [16],
                float param_5,undefined1 param_6 [16],float param_7,float param_8)

{
  float in_stack_00000000;
  
  return param_1 * param_7 + param_3 * param_8 + param_5 * in_stack_00000000;
}



// ============================================================
// RVA: 0x1492cc8 | Atlas.Maths.Math2d.LineSegmentsIntersectionXZ
// ============================================================

bool Atlas_Maths_Math2d__LineSegmentsIntersectionXZ
               (float param_1,undefined1 param_2 [16],float param_3,float param_4,
               undefined1 param_5 [16],float param_6)

{
  float fVar1;
  float fVar2;
  float in_stack_00000000;
  float fStack0000000000000008;
  float fStack000000000000000c;
  undefined8 in_stack_00000010;
  
  fVar2 = (param_4 - param_1) * (in_stack_00000010._4_4_ - fStack0000000000000008) -
          (param_6 - param_3) * (fStack000000000000000c - in_stack_00000000);
  if (fVar2 != 0.0) {
    fVar2 = 1.0 / fVar2;
    fVar1 = ((in_stack_00000000 - param_1) * (in_stack_00000010._4_4_ - fStack0000000000000008) -
            (fStack0000000000000008 - param_3) * (fStack000000000000000c - in_stack_00000000)) *
            fVar2;
    fVar2 = ((param_6 - param_3) * (in_stack_00000000 - param_1) -
            (param_4 - param_1) * (fStack0000000000000008 - param_3)) * fVar2;
    return ((0.0 <= fVar1 && fVar1 <= 1.0) && 0.0 <= fVar2) && fVar2 <= 1.0;
  }
  return false;
}



// ============================================================
// RVA: 0x1492d60 | Atlas.Maths.Math2d.LineSegmentsIntersection
// ============================================================

undefined8
Atlas_Maths_Math2d__LineSegmentsIntersection
          (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
          float param_7,float param_8,float *param_9)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = param_2;
  fVar5 = (float)/*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
  *param_9 = fVar5;
  param_9[1] = fVar6;
  param_3 = param_3 - param_1;
  param_4 = param_4 - param_2;
  fVar6 = param_3 * (param_8 - param_6) - param_4 * (param_7 - param_5);
  uVar4 = 0;
  if (fVar6 != 0.0) {
    fVar5 = ((param_5 - param_1) * (param_8 - param_6) - (param_6 - param_2) * (param_7 - param_5))
            / fVar6;
    bVar1 = false;
    bVar2 = false;
    bVar3 = false;
    if (0.0 <= fVar5) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar5)) {
        bVar1 = fVar5 < 1.0;
        bVar2 = fVar5 == 1.0;
        bVar3 = false;
      }
    }
    if (bVar2 || bVar1 != bVar3) {
      fVar6 = (param_4 * (param_5 - param_1) - param_3 * (param_6 - param_2)) / fVar6;
      bVar1 = false;
      bVar2 = false;
      bVar3 = false;
      if (0.0 <= fVar6) {
        bVar1 = false;
        bVar2 = false;
        bVar3 = true;
        if (!NAN(fVar6)) {
          bVar1 = fVar6 < 1.0;
          bVar2 = fVar6 == 1.0;
          bVar3 = false;
        }
      }
      if (bVar2 || bVar1 != bVar3) {
        *param_9 = param_1 + param_3 * fVar5;
        param_9[1] = param_2 + param_4 * fVar5;
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}



// ============================================================
// RVA: 0x1492e4c | Atlas.Maths.Math2d.Float2XY
// ============================================================

void Atlas_Maths_Math2d__Float2XY(void)

{
  return;
}



// ============================================================
// RVA: 0x1492e50 | Atlas.Maths.Math2d.Vector3XY
// ============================================================

undefined8 Atlas_Maths_Math2d__Vector3XY(void)

{
  return 0;
}



// ============================================================
// RVA: 0x1492e58 | Atlas.Maths.Math2d.Float2ListToVector2Array
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_Maths_Math2d__Float2ListToVector2Array(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  if ((bRam0000000003eb49a9 & 1) == 0) {
    func_0x00f78a20(0x3d3cb08);
    func_0x00f78a20(0x3d3cb10);
    func_0x00f78a20(0x3d1f5d8);
    bRam0000000003eb49a9 = 1;
  }
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    lVar2 = func_0x00f78a34(/*UnityEngine.Vector2[]_TypeInfo*/ uRam0000000003d1f5d8,(ulong)uVar1);
    if (0 < (int)uVar1) {
      uVar4 = 0;
      lVar6 = 0x20;
      do {
        if (*(uint *)(param_1 + 0x18) <= uVar4) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        puVar8 = (undefined4 *)(*(long *)(param_1 + 0x10) + lVar6);
        uVar12 = puVar8[1];
        uVar11 = /*Unity.Mathematics.float2$$op_Implicit*/ func_0x030c22c8(*puVar8,0);
        if (lVar2 == 0) goto LAB_01492f40;
        if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_01492f44;
        *(undefined4 *)(lVar2 + lVar6) = uVar11;
        ((undefined4 *)(lVar2 + lVar6))[1] = uVar12;
        uVar4 = uVar4 + 1;
        lVar6 = lVar6 + 8;
      } while (uVar1 != uVar4);
    }
    return lVar2;
  }
LAB_01492f40:
  func_0x00f78af4();
LAB_01492f44:
  uVar3 = func_0x00f78b24();
  lVar2 = func_0x00f78ac0(uVar3,0);
  if ((bRam0000000003eb49aa & 1) == 0) {
    func_0x00f78a20(0x3d3c7a0);
    func_0x00f78a20(0x3d3c7a8);
    func_0x00f78a20(0x3d1f690);
    bRam0000000003eb49aa = 1;
  }
  if (lVar2 != 0) {
    uVar1 = *(uint *)(lVar2 + 0x18);
    lVar6 = func_0x00f78a34(/*Unity.Mathematics.float2[]_TypeInfo*/ uRam0000000003d1f690,(ulong)uVar1);
    if (0 < (int)uVar1) {
      uVar4 = 0;
      lVar7 = 0x20;
      do {
        if (*(uint *)(lVar2 + 0x18) <= uVar4) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        puVar8 = (undefined4 *)(*(long *)(lVar2 + 0x10) + lVar7);
        uVar12 = puVar8[1];
        uVar11 = /*Unity.Mathematics.float2$$op_Implicit*/ func_0x030c22cc(*puVar8,0);
        if (lVar6 == 0) goto code_r0x01493038;
        if (*(uint *)(lVar6 + 0x18) <= uVar4) goto code_r0x0149303c;
        *(undefined4 *)(lVar6 + lVar7) = uVar11;
        ((undefined4 *)(lVar6 + lVar7))[1] = uVar12;
        uVar4 = uVar4 + 1;
        lVar7 = lVar7 + 8;
      } while (uVar1 != uVar4);
    }
    return lVar6;
  }
code_r0x01493038:
  func_0x00f78af4();
code_r0x0149303c:
  uVar3 = func_0x00f78b24();
  lVar2 = func_0x00f78ac0(uVar3,0);
  if ((bRam0000000003eb49ab & 1) == 0) {
    func_0x00f78a20(0x3d232c8);
    func_0x00f78a20(0x3d1f5d8);
    bRam0000000003eb49ab = 1;
  }
  if (lVar2 != 0) {
    uVar4 = *(ulong *)(lVar2 + 0x18);
    lVar6 = func_0x00f78a34(/*UnityEngine.Vector2[]_TypeInfo*/ uRam0000000003d1f5d8,uVar4);
    if (0 < (int)uVar4) {
      uVar5 = 0;
      puVar8 = (undefined4 *)(lVar2 + 0x24);
      puVar10 = (undefined4 *)(lVar6 + 0x24);
      do {
        if (*(uint *)(lVar2 + 0x18) <= uVar5) {
code_r0x01493154:
          uVar3 = func_0x00f78b24();
          func_0x00f78ac0(uVar3,0);
          goto code_r0x01493160;
        }
        uVar12 = puVar8[-1];
        uVar11 = *puVar8;
        if (((*(ushort *)(/*Atlas.Maths.Math2d_TypeInfo*/ lRam0000000003d232c8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Maths.Math2d_TypeInfo*/ lRam0000000003d232c8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar12 = /*Unity.Mathematics.float2$$op_Implicit*/ func_0x030c22c8(uVar12,0);
        if (lVar6 == 0) goto code_r0x01493160;
        if (*(uint *)(lVar6 + 0x18) <= uVar5) goto code_r0x01493154;
        puVar10[-1] = uVar12;
        *puVar10 = uVar11;
        uVar5 = uVar5 + 1;
        puVar8 = puVar8 + 3;
        puVar10 = puVar10 + 2;
      } while ((uVar4 & 0xffffffff) != uVar5);
    }
    return lVar6;
  }
code_r0x01493160:
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb49ac & 1) == 0) {
    func_0x00f78a20(0x3d232c8);
    func_0x00f78a20(0x3d1f690);
    bRam0000000003eb49ac = 1;
  }
  if (lVar2 != 0) {
    uVar4 = *(ulong *)(lVar2 + 0x18);
    lVar6 = func_0x00f78a34(/*Unity.Mathematics.float2[]_TypeInfo*/ uRam0000000003d1f690,uVar4);
    if (0 < (int)uVar4) {
      uVar5 = 0;
      puVar9 = (undefined8 *)(lVar2 + 0x20);
      do {
        if (*(uint *)(lVar2 + 0x18) <= uVar5) {
code_r0x0149325c:
          uVar3 = func_0x00f78b24();
          func_0x00f78ac0(uVar3,0);
          goto code_r0x01493268;
        }
        uVar3 = *puVar9;
        if (((*(ushort *)(/*Atlas.Maths.Math2d_TypeInfo*/ lRam0000000003d232c8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Maths.Math2d_TypeInfo*/ lRam0000000003d232c8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (lVar6 == 0) goto code_r0x01493268;
        if (*(uint *)(lVar6 + 0x18) <= uVar5) goto code_r0x0149325c;
        *(undefined8 *)(lVar6 + 0x20 + uVar5 * 8) = uVar3;
        uVar5 = uVar5 + 1;
        puVar9 = (undefined8 *)((long)puVar9 + 0xc);
      } while ((uVar4 & 0xffffffff) != uVar5);
    }
    return lVar6;
  }
code_r0x01493268:
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb49ad & 1) == 0) {
    func_0x00f78a20(0x3d1f690);
    bRam0000000003eb49ad = 1;
  }
  if (lVar2 != 0) {
    uVar4 = *(ulong *)(lVar2 + 0x18);
    lVar6 = func_0x00f78a34(/*Unity.Mathematics.float2[]_TypeInfo*/ uRam0000000003d1f690,uVar4);
    if (0 < (int)uVar4) {
      uVar5 = 0;
      puVar8 = (undefined4 *)(lVar2 + 0x24);
      puVar10 = (undefined4 *)(lVar6 + 0x24);
      do {
        if (*(uint *)(lVar2 + 0x18) <= uVar5) {
code_r0x01493334:
          uVar3 = func_0x00f78b24();
          func_0x00f78ac0(uVar3,0);
          goto code_r0x01493340;
        }
        uVar12 = *puVar8;
        uVar11 = /*Unity.Mathematics.float2$$op_Implicit*/ func_0x030c22cc(puVar8[-1],0);
        if (lVar6 == 0) goto code_r0x01493340;
        if (*(uint *)(lVar6 + 0x18) <= uVar5) goto code_r0x01493334;
        puVar10[-1] = uVar11;
        *puVar10 = uVar12;
        uVar5 = uVar5 + 1;
        puVar8 = puVar8 + 2;
        puVar10 = puVar10 + 2;
      } while ((uVar4 & 0xffffffff) != uVar5);
    }
    return lVar6;
  }
code_r0x01493340:
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb49ae & 1) == 0) {
    lVar2 = func_0x00f78a20(0x3d232c8);
    bRam0000000003eb49ae = 1;
  }
  **(undefined8 **)(/*Atlas.Maths.Math2d_TypeInfo*/ lRam0000000003d232c8 + 0xb8) = _UNK_033f8418;
  lVar6 = /*Atlas.Maths.Math2d_TypeInfo*/ lRam0000000003d232c8;
  *(undefined8 *)(*(long *)(/*Atlas.Maths.Math2d_TypeInfo*/ lRam0000000003d232c8 + 0xb8) + 8) = _UNK_033f83a8;
  *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10) = _UNK_033f8420;
  *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x18) = 0x3f0000003f000000;
  *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x20) = 0xff7fffffff7fffff;
  *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x28) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x30) = 0x3f0000003f000000;
  return lVar2;
}



// ============================================================
// RVA: 0x1492f50 | Atlas.Maths.Math2d.Vector2ListToFloat2Array
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_Maths_Math2d__Vector2ListToFloat2Array(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  if ((bRam0000000003eb49aa & 1) == 0) {
    func_0x00f78a20(0x3d3c7a0);
    func_0x00f78a20(0x3d3c7a8);
    func_0x00f78a20(0x3d1f690);
    bRam0000000003eb49aa = 1;
  }
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    lVar2 = func_0x00f78a34(/*Unity.Mathematics.float2[]_TypeInfo*/ uRam0000000003d1f690,(ulong)uVar1);
    if (0 < (int)uVar1) {
      uVar4 = 0;
      lVar6 = 0x20;
      do {
        if (*(uint *)(param_1 + 0x18) <= uVar4) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        puVar7 = (undefined4 *)(*(long *)(param_1 + 0x10) + lVar6);
        uVar11 = puVar7[1];
        uVar10 = /*Unity.Mathematics.float2$$op_Implicit*/ func_0x030c22cc(*puVar7,0);
        if (lVar2 == 0) goto LAB_01493038;
        if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_0149303c;
        *(undefined4 *)(lVar2 + lVar6) = uVar10;
        ((undefined4 *)(lVar2 + lVar6))[1] = uVar11;
        uVar4 = uVar4 + 1;
        lVar6 = lVar6 + 8;
      } while (uVar1 != uVar4);
    }
    return lVar2;
  }
LAB_01493038:
  func_0x00f78af4();
LAB_0149303c:
  uVar3 = func_0x00f78b24();
  lVar2 = func_0x00f78ac0(uVar3,0);
  if ((bRam0000000003eb49ab & 1) == 0) {
    func_0x00f78a20(0x3d232c8);
    func_0x00f78a20(0x3d1f5d8);
    bRam0000000003eb49ab = 1;
  }
  if (lVar2 != 0) {
    uVar4 = *(ulong *)(lVar2 + 0x18);
    lVar6 = func_0x00f78a34(/*UnityEngine.Vector2[]_TypeInfo*/ uRam0000000003d1f5d8,uVar4);
    if (0 < (int)uVar4) {
      uVar5 = 0;
      puVar7 = (undefined4 *)(lVar2 + 0x24);
      puVar9 = (undefined4 *)(lVar6 + 0x24);
      do {
        if (*(uint *)(lVar2 + 0x18) <= uVar5) {
code_r0x01493154:
          uVar3 = func_0x00f78b24();
          func_0x00f78ac0(uVar3,0);
          goto code_r0x01493160;
        }
        uVar11 = puVar7[-1];
        uVar10 = *puVar7;
        if (((*(ushort *)(/*Atlas.Maths.Math2d_TypeInfo*/ lRam0000000003d232c8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Maths.Math2d_TypeInfo*/ lRam0000000003d232c8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar11 = /*Unity.Mathematics.float2$$op_Implicit*/ func_0x030c22c8(uVar11,0);
        if (lVar6 == 0) goto code_r0x01493160;
        if (*(uint *)(lVar6 + 0x18) <= uVar5) goto code_r0x01493154;
        puVar9[-1] = uVar11;
        *puVar9 = uVar10;
        uVar5 = uVar5 + 1;
        puVar7 = puVar7 + 3;
        puVar9 = puVar9 + 2;
      } while ((uVar4 & 0xffffffff) != uVar5);
    }
    return lVar6;
  }
code_r0x01493160:
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb49ac & 1) == 0) {
    func_0x00f78a20(0x3d232c8);
    func_0x00f78a20(0x3d1f690);
    bRam0000000003eb49ac = 1;
  }
  if (lVar2 != 0) {
    uVar4 = *(ulong *)(lVar2 + 0x18);
    lVar6 = func_0x00f78a34(/*Unity.Mathematics.float2[]_TypeInfo*/ uRam0000000003d1f690,uVar4);
    if (0 < (int)uVar4) {
      uVar5 = 0;
      puVar8 = (undefined8 *)(lVar2 + 0x20);
      do {
        if (*(uint *)(lVar2 + 0x18) <= uVar5) {
code_r0x0149325c:
          uVar3 = func_0x00f78b24();
          func_0x00f78ac0(uVar3,0);
          goto code_r0x01493268;
        }
        uVar3 = *puVar8;
        if (((*(ushort *)(/*Atlas.Maths.Math2d_TypeInfo*/ lRam0000000003d232c8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Maths.Math2d_TypeInfo*/ lRam0000000003d232c8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (lVar6 == 0) goto code_r0x01493268;
        if (*(uint *)(lVar6 + 0x18) <= uVar5) goto code_r0x0149325c;
        *(undefined8 *)(lVar6 + 0x20 + uVar5 * 8) = uVar3;
        uVar5 = uVar5 + 1;
        puVar8 = (undefined8 *)((long)puVar8 + 0xc);
      } while ((uVar4 & 0xffffffff) != uVar5);
    }
    return lVar6;
  }
code_r0x01493268:
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb49ad & 1) == 0) {
    func_0x00f78a20(0x3d1f690);
    bRam0000000003eb49ad = 1;
  }
  if (lVar2 != 0) {
    uVar4 = *(ulong *)(lVar2 + 0x18);
    lVar6 = func_0x00f78a34(/*Unity.Mathematics.float2[]_TypeInfo*/ uRam0000000003d1f690,uVar4);
    if (0 < (int)uVar4) {
      uVar5 = 0;
      puVar7 = (undefined4 *)(lVar2 + 0x24);
      puVar9 = (undefined4 *)(lVar6 + 0x24);
      do {
        if (*(uint *)(lVar2 + 0x18) <= uVar5) {
code_r0x01493334:
          uVar3 = func_0x00f78b24();
          func_0x00f78ac0(uVar3,0);
          goto code_r0x01493340;
        }
        uVar11 = *puVar7;
        uVar10 = /*Unity.Mathematics.float2$$op_Implicit*/ func_0x030c22cc(puVar7[-1],0);
        if (lVar6 == 0) goto code_r0x01493340;
        if (*(uint *)(lVar6 + 0x18) <= uVar5) goto code_r0x01493334;
        puVar9[-1] = uVar10;
        *puVar9 = uVar11;
        uVar5 = uVar5 + 1;
        puVar7 = puVar7 + 2;
        puVar9 = puVar9 + 2;
      } while ((uVar4 & 0xffffffff) != uVar5);
    }
    return lVar6;
  }
code_r0x01493340:
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb49ae & 1) == 0) {
    lVar2 = func_0x00f78a20(0x3d232c8);
    bRam0000000003eb49ae = 1;
  }
  **(undefined8 **)(/*Atlas.Maths.Math2d_TypeInfo*/ lRam0000000003d232c8 + 0xb8) = _UNK_033f8418;
  lVar6 = /*Atlas.Maths.Math2d_TypeInfo*/ lRam0000000003d232c8;
  *(undefined8 *)(*(long *)(/*Atlas.Maths.Math2d_TypeInfo*/ lRam0000000003d232c8 + 0xb8) + 8) = _UNK_033f83a8;
  *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10) = _UNK_033f8420;
  *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x18) = 0x3f0000003f000000;
  *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x20) = 0xff7fffffff7fffff;
  *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x28) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x30) = 0x3f0000003f000000;
  return lVar2;
}



// ============================================================
// RVA: 0x1493048 | Atlas.Maths.Math2d.Vector3ArrayToVector2Array
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_Maths_Math2d__Vector3ArrayToVector2Array(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if ((bRam0000000003eb49ab & 1) == 0) {
    func_0x00f78a20(0x3d232c8);
    func_0x00f78a20(0x3d1f5d8);
    bRam0000000003eb49ab = 1;
  }
  if (param_1 != 0) {
    uVar4 = *(ulong *)(param_1 + 0x18);
    lVar1 = func_0x00f78a34(/*UnityEngine.Vector2[]_TypeInfo*/ uRam0000000003d1f5d8,uVar4);
    if (0 < (int)uVar4) {
      uVar5 = 0;
      puVar6 = (undefined4 *)(param_1 + 0x24);
      puVar8 = (undefined4 *)(lVar1 + 0x24);
      do {
        if (*(uint *)(param_1 + 0x18) <= uVar5) {
LAB_01493154:
          uVar2 = func_0x00f78b24();
          func_0x00f78ac0(uVar2,0);
          goto LAB_01493160;
        }
        uVar9 = puVar6[-1];
        uVar10 = *puVar6;
        if (((*(ushort *)(/*Atlas.Maths.Math2d_TypeInfo*/ lRam0000000003d232c8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Maths.Math2d_TypeInfo*/ lRam0000000003d232c8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar9 = /*Unity.Mathematics.float2$$op_Implicit*/ func_0x030c22c8(uVar9,0);
        if (lVar1 == 0) goto LAB_01493160;
        if (*(uint *)(lVar1 + 0x18) <= uVar5) goto LAB_01493154;
        puVar8[-1] = uVar9;
        *puVar8 = uVar10;
        uVar5 = uVar5 + 1;
        puVar6 = puVar6 + 3;
        puVar8 = puVar8 + 2;
      } while ((uVar4 & 0xffffffff) != uVar5);
    }
    return lVar1;
  }
LAB_01493160:
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003eb49ac & 1) == 0) {
    func_0x00f78a20(0x3d232c8);
    func_0x00f78a20(0x3d1f690);
    bRam0000000003eb49ac = 1;
  }
  if (lVar1 != 0) {
    uVar4 = *(ulong *)(lVar1 + 0x18);
    lVar3 = func_0x00f78a34(/*Unity.Mathematics.float2[]_TypeInfo*/ uRam0000000003d1f690,uVar4);
    if (0 < (int)uVar4) {
      uVar5 = 0;
      puVar7 = (undefined8 *)(lVar1 + 0x20);
      do {
        if (*(uint *)(lVar1 + 0x18) <= uVar5) {
code_r0x0149325c:
          uVar2 = func_0x00f78b24();
          func_0x00f78ac0(uVar2,0);
          goto code_r0x01493268;
        }
        uVar2 = *puVar7;
        if (((*(ushort *)(/*Atlas.Maths.Math2d_TypeInfo*/ lRam0000000003d232c8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Maths.Math2d_TypeInfo*/ lRam0000000003d232c8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (lVar3 == 0) goto code_r0x01493268;
        if (*(uint *)(lVar3 + 0x18) <= uVar5) goto code_r0x0149325c;
        *(undefined8 *)(lVar3 + 0x20 + uVar5 * 8) = uVar2;
        uVar5 = uVar5 + 1;
        puVar7 = (undefined8 *)((long)puVar7 + 0xc);
      } while ((uVar4 & 0xffffffff) != uVar5);
    }
    return lVar3;
  }
code_r0x01493268:
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003eb49ad & 1) == 0) {
    func_0x00f78a20(0x3d1f690);
    bRam0000000003eb49ad = 1;
  }
  if (lVar1 != 0) {
    uVar4 = *(ulong *)(lVar1 + 0x18);
    lVar3 = func_0x00f78a34(/*Unity.Mathematics.float2[]_TypeInfo*/ uRam0000000003d1f690,uVar4);
    if (0 < (int)uVar4) {
      uVar5 = 0;
      puVar6 = (undefined4 *)(lVar1 + 0x24);
      puVar8 = (undefined4 *)(lVar3 + 0x24);
      do {
        if (*(uint *)(lVar1 + 0x18) <= uVar5) {
code_r0x01493334:
          uVar2 = func_0x00f78b24();
          func_0x00f78ac0(uVar2,0);
          goto code_r0x01493340;
        }
        uVar9 = *puVar6;
        uVar10 = /*Unity.Mathematics.float2$$op_Implicit*/ func_0x030c22cc(puVar6[-1],0);
        if (lVar3 == 0) goto code_r0x01493340;
        if (*(uint *)(lVar3 + 0x18) <= uVar5) goto code_r0x01493334;
        puVar8[-1] = uVar10;
        *puVar8 = uVar9;
        uVar5 = uVar5 + 1;
        puVar6 = puVar6 + 2;
        puVar8 = puVar8 + 2;
      } while ((uVar4 & 0xffffffff) != uVar5);
    }
    return lVar3;
  }
code_r0x01493340:
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003eb49ae & 1) == 0) {
    lVar1 = func_0x00f78a20(0x3d232c8);
    bRam0000000003eb49ae = 1;
  }
  **(undefined8 **)(/*Atlas.Maths.Math2d_TypeInfo*/ lRam0000000003d232c8 + 0xb8) = _UNK_033f8418;
  lVar3 = /*Atlas.Maths.Math2d_TypeInfo*/ lRam0000000003d232c8;
  *(undefined8 *)(*(long *)(/*Atlas.Maths.Math2d_TypeInfo*/ lRam0000000003d232c8 + 0xb8) + 8) = _UNK_033f83a8;
  *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x10) = _UNK_033f8420;
  *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x18) = 0x3f0000003f000000;
  *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x20) = 0xff7fffffff7fffff;
  *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x28) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x30) = 0x3f0000003f000000;
  return lVar1;
}



// ============================================================
// RVA: 0x1493164 | Atlas.Maths.Math2d.Vector3ArrayToFloat2Array
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_Maths_Math2d__Vector3ArrayToFloat2Array(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  
  if ((bRam0000000003eb49ac & 1) == 0) {
    func_0x00f78a20(0x3d232c8);
    func_0x00f78a20(0x3d1f690);
    bRam0000000003eb49ac = 1;
  }
  if (param_1 != 0) {
    uVar3 = *(ulong *)(param_1 + 0x18);
    lVar1 = func_0x00f78a34(/*Unity.Mathematics.float2[]_TypeInfo*/ uRam0000000003d1f690,uVar3);
    if (0 < (int)uVar3) {
      uVar4 = 0;
      puVar6 = (undefined8 *)(param_1 + 0x20);
      do {
        if (*(uint *)(param_1 + 0x18) <= uVar4) {
LAB_0149325c:
          uVar10 = func_0x00f78b24();
          func_0x00f78ac0(uVar10,0);
          goto LAB_01493268;
        }
        uVar10 = *puVar6;
        if (((*(ushort *)(/*Atlas.Maths.Math2d_TypeInfo*/ lRam0000000003d232c8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Maths.Math2d_TypeInfo*/ lRam0000000003d232c8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (lVar1 == 0) goto LAB_01493268;
        if (*(uint *)(lVar1 + 0x18) <= uVar4) goto LAB_0149325c;
        *(undefined8 *)(lVar1 + 0x20 + uVar4 * 8) = uVar10;
        uVar4 = uVar4 + 1;
        puVar6 = (undefined8 *)((long)puVar6 + 0xc);
      } while ((uVar3 & 0xffffffff) != uVar4);
    }
    return lVar1;
  }
LAB_01493268:
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003eb49ad & 1) == 0) {
    func_0x00f78a20(0x3d1f690);
    bRam0000000003eb49ad = 1;
  }
  if (lVar1 != 0) {
    uVar3 = *(ulong *)(lVar1 + 0x18);
    lVar2 = func_0x00f78a34(/*Unity.Mathematics.float2[]_TypeInfo*/ uRam0000000003d1f690,uVar3);
    if (0 < (int)uVar3) {
      uVar4 = 0;
      puVar5 = (undefined4 *)(lVar1 + 0x24);
      puVar7 = (undefined4 *)(lVar2 + 0x24);
      do {
        if (*(uint *)(lVar1 + 0x18) <= uVar4) {
code_r0x01493334:
          uVar10 = func_0x00f78b24();
          func_0x00f78ac0(uVar10,0);
          goto code_r0x01493340;
        }
        uVar9 = *puVar5;
        uVar8 = /*Unity.Mathematics.float2$$op_Implicit*/ func_0x030c22cc(puVar5[-1],0);
        if (lVar2 == 0) goto code_r0x01493340;
        if (*(uint *)(lVar2 + 0x18) <= uVar4) goto code_r0x01493334;
        puVar7[-1] = uVar8;
        *puVar7 = uVar9;
        uVar4 = uVar4 + 1;
        puVar5 = puVar5 + 2;
        puVar7 = puVar7 + 2;
      } while ((uVar3 & 0xffffffff) != uVar4);
    }
    return lVar2;
  }
code_r0x01493340:
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003eb49ae & 1) == 0) {
    lVar1 = func_0x00f78a20(0x3d232c8);
    bRam0000000003eb49ae = 1;
  }
  **(undefined8 **)(/*Atlas.Maths.Math2d_TypeInfo*/ lRam0000000003d232c8 + 0xb8) = _UNK_033f8418;
  lVar2 = /*Atlas.Maths.Math2d_TypeInfo*/ lRam0000000003d232c8;
  *(undefined8 *)(*(long *)(/*Atlas.Maths.Math2d_TypeInfo*/ lRam0000000003d232c8 + 0xb8) + 8) = _UNK_033f83a8;
  *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x10) = _UNK_033f8420;
  *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x18) = 0x3f0000003f000000;
  *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x20) = 0xff7fffffff7fffff;
  *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x28) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x30) = 0x3f0000003f000000;
  return lVar1;
}



// ============================================================
// RVA: 0x149326c | Atlas.Maths.Math2d.Vector2ArrayToFloat2Array
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_Maths_Math2d__Vector2ArrayToFloat2Array(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if ((bRam0000000003eb49ad & 1) == 0) {
    func_0x00f78a20(0x3d1f690);
    bRam0000000003eb49ad = 1;
  }
  if (param_1 != 0) {
    uVar4 = *(ulong *)(param_1 + 0x18);
    lVar2 = func_0x00f78a34(/*Unity.Mathematics.float2[]_TypeInfo*/ uRam0000000003d1f690,uVar4);
    if (0 < (int)uVar4) {
      uVar5 = 0;
      puVar6 = (undefined4 *)(param_1 + 0x24);
      puVar7 = (undefined4 *)(lVar2 + 0x24);
      do {
        if (*(uint *)(param_1 + 0x18) <= uVar5) {
LAB_01493334:
          uVar3 = func_0x00f78b24();
          func_0x00f78ac0(uVar3,0);
          goto LAB_01493340;
        }
        uVar9 = *puVar6;
        uVar8 = /*Unity.Mathematics.float2$$op_Implicit*/ func_0x030c22cc(puVar6[-1],0);
        if (lVar2 == 0) goto LAB_01493340;
        if (*(uint *)(lVar2 + 0x18) <= uVar5) goto LAB_01493334;
        puVar7[-1] = uVar8;
        *puVar7 = uVar9;
        uVar5 = uVar5 + 1;
        puVar6 = puVar6 + 2;
        puVar7 = puVar7 + 2;
      } while ((uVar4 & 0xffffffff) != uVar5);
    }
    return lVar2;
  }
LAB_01493340:
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb49ae & 1) == 0) {
    lVar2 = func_0x00f78a20(0x3d232c8);
    bRam0000000003eb49ae = 1;
  }
  **(undefined8 **)(/*Atlas.Maths.Math2d_TypeInfo*/ lRam0000000003d232c8 + 0xb8) = _UNK_033f8418;
  lVar1 = /*Atlas.Maths.Math2d_TypeInfo*/ lRam0000000003d232c8;
  *(undefined8 *)(*(long *)(/*Atlas.Maths.Math2d_TypeInfo*/ lRam0000000003d232c8 + 0xb8) + 8) = _UNK_033f83a8;
  *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x10) = _UNK_033f8420;
  *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x18) = 0x3f0000003f000000;
  *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x20) = 0xff7fffffff7fffff;
  *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x28) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x30) = 0x3f0000003f000000;
  return lVar2;
}



// ============================================================
// RVA: 0x1493344 | Atlas.Maths.Math2d..cctor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Maths_Math2d___cctor(void)

{
  long lVar1;
  
  if ((bRam0000000003eb49ae & 1) == 0) {
    func_0x00f78a20(0x3d232c8);
    bRam0000000003eb49ae = 1;
  }
  **(undefined8 **)(/*Atlas.Maths.Math2d_TypeInfo*/ lRam0000000003d232c8 + 0xb8) = _UNK_033f8418;
  lVar1 = /*Atlas.Maths.Math2d_TypeInfo*/ lRam0000000003d232c8;
  *(undefined8 *)(*(long *)(/*Atlas.Maths.Math2d_TypeInfo*/ lRam0000000003d232c8 + 0xb8) + 8) = _UNK_033f83a8;
  *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x10) = _UNK_033f8420;
  *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x18) = 0x3f0000003f000000;
  *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x20) = 0xff7fffffff7fffff;
  *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x28) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x30) = 0x3f0000003f000000;
  return;
}



