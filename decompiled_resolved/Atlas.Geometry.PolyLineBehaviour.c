// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Geometry.PolyLineBehaviour

// ============================================================
// RVA: 0x14c2b00 | Atlas.Geometry.PolyLineBehaviour.get_PolyLine
// ============================================================

void Atlas_Geometry_PolyLineBehaviour__get_PolyLine(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  param_1[1] = *(undefined8 *)(param_2 + 0x40);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x48);
  return;
}



// ============================================================
// RVA: 0x14c2b14 | Atlas.Geometry.PolyLineBehaviour.GetPriority
// ============================================================

undefined8 Atlas_Geometry_PolyLineBehaviour__GetPriority(void)

{
  return 0x32;
}



// ============================================================
// RVA: 0x14c2b1c | Atlas.Geometry.PolyLineBehaviour.OnCalculate
// ============================================================

/* WARNING: Possible PIC construction at 0x014c2ca8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014c2cac) */
/* WARNING: Removing unreachable block (ram,0x014c2cc4) */
/* WARNING: Removing unreachable block (ram,0x014c2d04) */
/* WARNING: Removing unreachable block (ram,0x014c2ccc) */
/* WARNING: Removing unreachable block (ram,0x014c2cf8) */
/* WARNING: Removing unreachable block (ram,0x014c2d08) */
/* WARNING: Removing unreachable block (ram,0x014c2d34) */

long Atlas_Geometry_PolyLineBehaviour__OnCalculate
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,float param_5,
               float param_6,long param_7,undefined8 param_8,undefined4 *param_9)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long extraout_x1;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  long unaff_x21;
  undefined8 unaff_x22;
  float fVar8;
  float extraout_s0;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  ulong unaff_d11;
  ulong unaff_d12;
  ulong unaff_d13;
  ulong unaff_d14;
  ulong unaff_d15;
  undefined1 auVar14 [16];
  undefined1 auStack_134 [4];
  long lStack_130;
  long lStack_128;
  undefined1 **ppuStack_120;
  undefined *puStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  float fStack_9c;
  
  lVar7 = 0x3eb4000;
  if ((bRam0000000003eb4b20 & 1) == 0) {
    func_0x00f78a20(0x3d3cb28);
    func_0x00f78a20(0x3d3cb38);
    func_0x00f78a20(0x3d3cb20);
    func_0x00f78a20(0x3d3cb40);
    func_0x00f78a20(0x3d1e030);
    bRam0000000003eb4b20 = 1;
  }
  /*Atlas.Geometry.TrackEditorUpdatableBehaviour$$UpdatedToLatestAllRevision*/ func_0x0151088c(param_7,0);
  *(undefined8 *)(param_7 + 0x38) = 0;
  *(undefined4 *)(param_7 + 0x40) = 0;
  *(undefined1 *)(param_7 + 0x48) = 0;
  lVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_7,0);
  lStack_c0 = lVar7;
  fVar9 = param_3;
  fVar10 = param_2;
  if (lVar3 != 0) {
    unaff_x21 = /*UnityEngine.Transform$$get_childCount*/ func_0x03276f9c(lVar3,0);
    if ((int)unaff_x21 < 2) {
      return unaff_x21;
    }
    lVar7 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_7,0);
    fVar9 = param_3;
    fVar10 = param_2;
    if (lVar7 != 0) {
      param_9 = (undefined4 *)0x0;
      lVar7 = /*UnityEngine.Transform$$GetChild*/ func_0x03277648(lVar7,0);
      fVar9 = param_3;
      fVar10 = param_2;
      if (lVar7 != 0) {
        /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar7,0);
        fVar8 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
        unaff_d8 = (ulong)(uint)fVar8;
        unaff_d9 = (ulong)(uint)param_2;
        unaff_d10 = (ulong)(uint)param_3;
        fVar9 = param_3;
        fVar10 = param_2;
        lVar7 = func_0x00f78aec(/*System.Collections.Generic.List<float3>_TypeInfo*/ uRam0000000003d1e030);
        param_9 = puRam0000000003d3cb20;
        /*System.Collections.Generic.List<float3>$$.ctor*/ func_0x0249baa0(lVar7,unaff_x21);
        unaff_x22 = 1;
        unaff_d11 = (ulong)(uint)fVar8;
        unaff_d12 = (ulong)(uint)param_2;
        fStack_9c = param_3;
        lVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_7,0);
        lStack_c0 = lVar7;
        if (lVar3 != 0) {
          param_9 = (undefined4 *)0x0;
          lVar3 = /*UnityEngine.Transform$$GetChild*/ func_0x03277648(lVar3,1);
          if (lVar3 != 0) {
            param_5 = fVar10;
            param_6 = fVar9;
            /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar3,0);
            param_4 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
            unaff_d14 = (ulong)(uint)param_4;
            unaff_d15 = (ulong)(uint)param_5;
            unaff_d13 = (ulong)(uint)param_6;
            puStack_a8 = (undefined *)0x14c2cac;
            lVar3 = param_7;
            goto code_r0x014c2da0;
          }
        }
      }
    }
  }
  param_2 = fVar10;
  param_3 = fVar9;
  puStack_a8 = &Atlas_Geometry_PolyLineBehaviour__AddPointsForLine;
  lVar3 = func_0x00f78af4();
  lVar7 = extraout_x1;
  fVar8 = extraout_s0;
code_r0x014c2da0:
  uStack_110 = unaff_d15;
  uStack_108 = unaff_d14;
  uStack_100 = unaff_d13;
  uStack_f8 = unaff_d12;
  uStack_f0 = unaff_d11;
  uStack_e8 = unaff_d10;
  uStack_e0 = unaff_d9;
  uStack_d8 = unaff_d8;
  uStack_d0 = unaff_x22;
  lStack_c8 = unaff_x21;
  lStack_b8 = param_7;
  puStack_b0 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4b21 & 1) == 0) {
    func_0x00f78a20(0x3d3cb28);
    bRam0000000003eb4b21 = 1;
  }
  if (cRam0000000003ca34fc == '\0') {
    func_0x00f78a20(0x3d232c0);
    cRam0000000003ca34fc = '\x01';
  }
  param_4 = param_4 - fVar8;
  param_5 = param_5 - param_2;
  param_6 = param_6 - param_3;
  lVar4 = /*System.Math_TypeInfo*/ lRam0000000003d232c0;
  if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
    lVar4 = func_0x00f78ad0();
  }
  fVar9 = SQRT(param_6 * param_6 + param_4 * param_4 + param_5 * param_5);
  if (1.4013e-45 < fVar9) {
    fVar11 = fVar9 / *(float *)(lVar3 + 0x30);
    fVar10 = -fVar11;
    if (fVar11 != INFINITY) {
      fVar10 = fVar11;
    }
    if ((uint)(int)fVar10 < 0x7fffffff) {
      if (lVar7 == 0) {
        auVar14 = func_0x00f78af4();
        puVar5 = auVar14._8_8_;
        lVar4 = auVar14._0_8_;
        puStack_118 = &Atlas_Geometry_PolyLineBehaviour__TryGetClosestPoint;
        uVar13 = *(undefined8 *)(lVar4 + 0x40);
        uVar12 = *(undefined8 *)(lVar4 + 0x38);
        puVar5[2] = *(undefined8 *)(lVar4 + 0x48);
        puVar5[1] = uVar13;
        *puVar5 = uVar12;
        lStack_130 = lVar3;
        lStack_128 = lVar7;
        ppuStack_120 = &puStack_b0;
        uVar2 = Atlas_Geometry_PolyLine__GetClosestPointIndex(lVar4 + 0x38,auStack_134);
        *param_9 = uVar2;
        return 1;
      }
      iVar6 = 0;
      iVar1 = (int)fVar10 + 1;
      do {
        fVar10 = (fVar9 / (float)iVar1) * (float)iVar6;
        lVar4 = /*System.Collections.Generic.List<float3>$$Add*/ func_0x0249c6b4(fVar8 + (param_4 / fVar9) * fVar10,
                                param_2 + (param_5 / fVar9) * fVar10,
                                param_3 + (param_6 / fVar9) * fVar10,lVar7,uRam0000000003d3cb28);
        iVar6 = iVar6 + 1;
      } while (iVar1 != iVar6);
    }
  }
  return lVar4;
}



// ============================================================
// RVA: 0x14c2da0 | Atlas.Geometry.PolyLineBehaviour.AddPointsForLine
// ============================================================

long Atlas_Geometry_PolyLineBehaviour__AddPointsForLine
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               long param_7,long param_8,undefined4 *param_9)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_94 [4];
  long lStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  undefined *puStack_78;
  
  if ((bRam0000000003eb4b21 & 1) == 0) {
    func_0x00f78a20(0x3d3cb28);
    bRam0000000003eb4b21 = 1;
  }
  if (cRam0000000003ca34fc == '\0') {
    func_0x00f78a20(0x3d232c0);
    cRam0000000003ca34fc = '\x01';
  }
  param_4 = param_4 - param_1;
  param_5 = param_5 - param_2;
  param_6 = param_6 - param_3;
  lVar3 = /*System.Math_TypeInfo*/ lRam0000000003d232c0;
  if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
    lVar3 = func_0x00f78ad0();
  }
  fVar6 = SQRT(param_6 * param_6 + param_4 * param_4 + param_5 * param_5);
  if (1.4013e-45 < fVar6) {
    fVar8 = fVar6 / *(float *)(param_7 + 0x30);
    fVar7 = -fVar8;
    if (fVar8 != INFINITY) {
      fVar7 = fVar8;
    }
    if ((uint)(int)fVar7 < 0x7fffffff) {
      if (param_8 == 0) {
        auVar11 = func_0x00f78af4();
        puVar4 = auVar11._8_8_;
        lVar3 = auVar11._0_8_;
        puStack_78 = &Atlas_Geometry_PolyLineBehaviour__TryGetClosestPoint;
        uVar10 = *(undefined8 *)(lVar3 + 0x40);
        uVar9 = *(undefined8 *)(lVar3 + 0x38);
        puVar4[2] = *(undefined8 *)(lVar3 + 0x48);
        puVar4[1] = uVar10;
        *puVar4 = uVar9;
        lStack_90 = param_7;
        lStack_88 = param_8;
        puStack_80 = &stack0xfffffffffffffff0;
        uVar2 = Atlas_Geometry_PolyLine__GetClosestPointIndex(lVar3 + 0x38,auStack_94);
        *param_9 = uVar2;
        return 1;
      }
      iVar5 = 0;
      iVar1 = (int)fVar7 + 1;
      do {
        fVar7 = (fVar6 / (float)iVar1) * (float)iVar5;
        lVar3 = /*System.Collections.Generic.List<float3>$$Add*/ func_0x0249c6b4(param_1 + (param_4 / fVar6) * fVar7,
                                param_2 + (param_5 / fVar6) * fVar7,
                                param_3 + (param_6 / fVar6) * fVar7,param_8,uRam0000000003d3cb28);
        iVar5 = iVar5 + 1;
      } while (iVar1 != iVar5);
    }
  }
  return lVar3;
}



// ============================================================
// RVA: 0x14c2f28 | Atlas.Geometry.PolyLineBehaviour.TryGetClosestPoint
// ============================================================

undefined8
Atlas_Geometry_PolyLineBehaviour__TryGetClosestPoint
          (long param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_24 [4];
  
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  param_2[2] = *(undefined8 *)(param_1 + 0x48);
  param_2[1] = uVar3;
  *param_2 = uVar2;
  uVar1 = Atlas_Geometry_PolyLine__GetClosestPointIndex(param_1 + 0x38,auStack_24);
  *param_3 = uVar1;
  return 1;
}



// ============================================================
// RVA: 0x14c2f70 | Atlas.Geometry.PolyLineBehaviour.TryGetClosestEndPoint
// ============================================================

undefined8
Atlas_Geometry_PolyLineBehaviour__TryGetClosestEndPoint
          (long param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_24 [4];
  
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  param_2[2] = *(undefined8 *)(param_1 + 0x48);
  param_2[1] = uVar3;
  *param_2 = uVar2;
  uVar1 = Atlas_Geometry_PolyLine__GetClosestEndPointIndex(param_1 + 0x38,auStack_24);
  *param_3 = uVar1;
  return 1;
}



// ============================================================
// RVA: 0x14c2fb8 | Atlas.Geometry.PolyLineBehaviour.GetPolyLineCount
// ============================================================

undefined8 Atlas_Geometry_PolyLineBehaviour__GetPolyLineCount(void)

{
  return 1;
}



// ============================================================
// RVA: 0x14c2fc0 | Atlas.Geometry.PolyLineBehaviour.TryGetPolyLine
// ============================================================

bool Atlas_Geometry_PolyLineBehaviour__TryGetPolyLine(long param_1,int param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    param_3[2] = *(undefined8 *)(param_1 + 0x48);
    param_3[1] = uVar2;
    *param_3 = uVar1;
  }
  else {
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
  }
  return param_2 == 0;
}



// ============================================================
// RVA: 0x14c2fec | Atlas.Geometry.PolyLineBehaviour.OnDrawGizmosSelected
// ============================================================

void Atlas_Geometry_PolyLineBehaviour__OnDrawGizmosSelected
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  undefined4 uVar1;
  
  /*UnityEngine.Color$$get_green*/ func_0x03223580(0);
  Atlas_Geometry_PolyLine__DrawGizmosLines(param_5 + 0x38);
  uVar1 = /*UnityEngine.Color$$get_green*/ func_0x03223580(0);
  Atlas_Geometry_PolyLine__DrawGizmosPoints
            (0x3f000000,uVar1,param_2,param_3,param_4,param_5 + 0x38,0x7fffffff,0x7fffffff);
  return;
}



// ============================================================
// RVA: 0x14c3064 | Atlas.Geometry.PolyLineBehaviour.OnDrawGizmos
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Geometry_PolyLineBehaviour__OnDrawGizmos
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  undefined4 uVar1;
  
  /*UnityEngine.Color$$get_cyan*/ func_0x032235ec(0);
  Atlas_Geometry_PolyLine__DrawGizmosLines(param_5 + 0x38);
  uVar1 = /*UnityEngine.Color$$get_cyan*/ func_0x032235ec(0);
  Atlas_Geometry_PolyLine__DrawGizmosPoints
            (_UNK_033f83fc,uVar1,param_2,param_3,param_4,param_5 + 0x38,0x7fffffff,0x7fffffff);
  return;
}



// ============================================================
// RVA: 0x14c30e0 | Atlas.Geometry.PolyLineBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_Geometry_PolyLineBehaviour___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  *(undefined4 *)(param_1 + 0x30) = 0x40a00000;
  if ((bRam0000000003eb4d72 & 1) == 0) {
    func_0x00f78a20(0x3d3dce0,0);
    func_0x00f78a20(0x3d1e398);
    bRam0000000003eb4d72 = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<TrackEditorUpdatableBehaviour.Dependency>_TypeInfo*/ uRam0000000003d1e398);
  /*System.Collections.Generic.List<TrackEditorUpdatableBehaviour.Dependency>$$.ctor*/ func_0x025b4e4c(uVar1,uRam0000000003d3dce0);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



