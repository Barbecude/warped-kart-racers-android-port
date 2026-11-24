// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Maths.Math3d

// ============================================================
// RVA: 0x14933ec | Atlas.Maths.Math3d.XY0
// ============================================================

void Atlas_Maths_Math3d__XY0(void)

{
  return;
}



// ============================================================
// RVA: 0x14933f4 | Atlas.Maths.Math3d.XY1
// ============================================================

void Atlas_Maths_Math3d__XY1(void)

{
  return;
}



// ============================================================
// RVA: 0x14933fc | Atlas.Maths.Math3d.PerpendicularXZ
// ============================================================

undefined4
Atlas_Maths_Math3d__PerpendicularXZ
          (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3)

{
  return param_3;
}



// ============================================================
// RVA: 0x149340c | Atlas.Maths.Math3d.Barycentric
// ============================================================

void Atlas_Maths_Math3d__Barycentric
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float *param_7,float *param_8,float *param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  
  fStack0000000000000000 = fStack0000000000000000 - param_4;
  fStack0000000000000004 = fStack0000000000000004 - param_5;
  fStack0000000000000008 = fStack0000000000000008 - param_6;
  fStack000000000000000c = fStack000000000000000c - param_4;
  fStack0000000000000010 = fStack0000000000000010 - param_5;
  fStack0000000000000014 = fStack0000000000000014 - param_6;
  fVar3 = fStack0000000000000008 * fStack0000000000000008 +
          fStack0000000000000000 * fStack0000000000000000 +
          fStack0000000000000004 * fStack0000000000000004;
  fVar4 = fStack0000000000000008 * fStack0000000000000014 +
          fStack0000000000000000 * fStack000000000000000c +
          fStack0000000000000004 * fStack0000000000000010;
  fVar5 = fStack0000000000000014 * fStack0000000000000014 +
          fStack000000000000000c * fStack000000000000000c +
          fStack0000000000000010 * fStack0000000000000010;
  fVar6 = (param_3 - param_6) * fStack0000000000000008 +
          (param_1 - param_4) * fStack0000000000000000 +
          (param_2 - param_5) * fStack0000000000000004;
  fVar1 = (param_3 - param_6) * fStack0000000000000014 +
          (param_1 - param_4) * fStack000000000000000c +
          (param_2 - param_5) * fStack0000000000000010;
  fVar2 = 1.0 / (fVar3 * fVar5 - fVar4 * fVar4);
  *param_8 = (fVar6 * fVar5 - fVar4 * fVar1) * fVar2;
  fVar2 = (fVar3 * fVar1 - fVar6 * fVar4) * fVar2;
  *param_9 = fVar2;
  *param_7 = (1.0 - *param_8) - fVar2;
  return;
}



// ============================================================
// RVA: 0x14934f0 | Atlas.Maths.Math3d.PointFromBarycentric
// ============================================================

float Atlas_Maths_Math3d__PointFromBarycentric
                (float param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4)

{
  float in_stack_00000000;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  
  return param_1 * in_stack_00000008._4_4_ + param_4 * fStack0000000000000010 +
         in_stack_00000000 * fStack0000000000000014;
}



// ============================================================
// RVA: 0x149353c | Atlas.Maths.Math3d.NearestPointOnLineSegment
// ============================================================

float Atlas_Maths_Math3d__NearestPointOnLineSegment
                (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6
                )

{
  float fVar1;
  float fVar2;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float in_stack_00000008;
  
  fVar2 = fStack0000000000000000 - param_4;
  fStack0000000000000004 = fStack0000000000000004 - param_5;
  in_stack_00000008 = in_stack_00000008 - param_6;
  fVar1 = ((param_3 - param_6) * in_stack_00000008 +
          (param_1 - param_4) * fVar2 + (param_2 - param_5) * fStack0000000000000004) /
          (in_stack_00000008 * in_stack_00000008 +
          fVar2 * fVar2 + fStack0000000000000004 * fStack0000000000000004);
  if (0.0 < fVar1) {
    if (fVar1 < 1.0) {
      fStack0000000000000000 = param_4 + fVar2 * fVar1;
    }
    return fStack0000000000000000;
  }
  return param_4;
}



// ============================================================
// RVA: 0x14935d4 | Atlas.Maths.Math3d.Float3ListToVector3Array
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_Maths_Math3d__Float3ListToVector3Array(long param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  if ((bRam0000000003eb49af & 1) == 0) {
    func_0x00f78a20(0x3d3cb40);
    func_0x00f78a20(0x3d3cb48);
    func_0x00f78a20(0x3d1f5e0);
    bRam0000000003eb49af = 1;
  }
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    lVar3 = func_0x00f78a34(/*UnityEngine.Vector3[]_TypeInfo*/ uRam0000000003d1f5e0,(ulong)uVar2);
    if (0 < (int)uVar2) {
      uVar7 = 0;
      lVar8 = 0x20;
      do {
        if (*(uint *)(param_1 + 0x18) <= uVar7) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        puVar1 = (undefined4 *)(*(long *)(param_1 + 0x10) + lVar8);
        uVar10 = puVar1[1];
        uVar11 = puVar1[2];
        uVar9 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*puVar1,0);
        if (lVar3 == 0) goto LAB_014936c4;
        if (*(uint *)(lVar3 + 0x18) <= uVar7) goto LAB_014936c8;
        puVar1 = (undefined4 *)(lVar3 + lVar8);
        *puVar1 = uVar9;
        puVar1[1] = uVar10;
        puVar1[2] = uVar11;
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 0xc;
      } while (uVar2 != uVar7);
    }
    return lVar3;
  }
LAB_014936c4:
  func_0x00f78af4();
LAB_014936c8:
  uVar4 = func_0x00f78b24();
  lVar3 = func_0x00f78ac0(uVar4,0);
  if ((bRam0000000003eb49b0 & 1) == 0) {
    lVar3 = func_0x00f78a20(0x3d232d0);
    bRam0000000003eb49b0 = 1;
  }
  puVar5 = *(undefined8 **)(/*Atlas.Maths.Math3d_TypeInfo*/ lRam0000000003d232d0 + 0xb8);
  *puVar5 = _UNK_033f8418;
  *(undefined4 *)(puVar5 + 1) = 0;
  lVar8 = /*Atlas.Maths.Math3d_TypeInfo*/ lRam0000000003d232d0;
  lVar6 = *(long *)(/*Atlas.Maths.Math3d_TypeInfo*/ lRam0000000003d232d0 + 0xb8);
  *(undefined8 *)(lVar6 + 0xc) = _UNK_033f83a8;
  *(undefined4 *)(lVar6 + 0x14) = 0;
  lVar6 = *(long *)(lVar8 + 0xb8);
  *(undefined8 *)(lVar6 + 0x18) = 0;
  *(undefined4 *)(lVar6 + 0x20) = 0x3f800000;
  lVar8 = *(long *)(lVar8 + 0xb8);
  *(undefined8 *)(lVar8 + 0x24) = _UNK_033f8420;
  *(undefined4 *)(lVar8 + 0x2c) = 0;
  return lVar3;
}



// ============================================================
// RVA: 0x14936d4 | Atlas.Maths.Math3d..cctor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Maths_Math3d___cctor(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  if ((bRam0000000003eb49b0 & 1) == 0) {
    func_0x00f78a20(0x3d232d0);
    bRam0000000003eb49b0 = 1;
  }
  puVar1 = *(undefined8 **)(/*Atlas.Maths.Math3d_TypeInfo*/ lRam0000000003d232d0 + 0xb8);
  *puVar1 = _UNK_033f8418;
  *(undefined4 *)(puVar1 + 1) = 0;
  lVar2 = /*Atlas.Maths.Math3d_TypeInfo*/ lRam0000000003d232d0;
  lVar3 = *(long *)(/*Atlas.Maths.Math3d_TypeInfo*/ lRam0000000003d232d0 + 0xb8);
  *(undefined8 *)(lVar3 + 0xc) = _UNK_033f83a8;
  *(undefined4 *)(lVar3 + 0x14) = 0;
  lVar3 = *(long *)(lVar2 + 0xb8);
  *(undefined8 *)(lVar3 + 0x18) = 0;
  *(undefined4 *)(lVar3 + 0x20) = 0x3f800000;
  lVar2 = *(long *)(lVar2 + 0xb8);
  *(undefined8 *)(lVar2 + 0x24) = _UNK_033f8420;
  *(undefined4 *)(lVar2 + 0x2c) = 0;
  return;
}



