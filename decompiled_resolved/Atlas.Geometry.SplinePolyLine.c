// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Geometry.SplinePolyLine

// ============================================================
// RVA: 0x1503684 | Atlas.Geometry.SplinePolyLine.Reset
// ============================================================

void Atlas_Geometry_SplinePolyLine__Reset(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  Atlas_Geometry_PolyLine__Reset(param_1 + 3,0);
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



// ============================================================
// RVA: 0x15036c0 | Atlas.Geometry.SplinePolyLine..ctor
// ============================================================

void Atlas_Geometry_SplinePolyLine___ctor
               (undefined4 param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = param_4[1];
  uVar1 = *param_4;
  param_3[2] = param_4[2];
  param_3[1] = uVar2;
  *param_3 = uVar1;
  auVar3 = Atlas_Geometry_Spline__CreateDistanceLookup(param_2,param_4);
  *(undefined1 (*) [16])(param_3 + 7) = auVar3;
  Atlas_Geometry_Spline__CreatePolyLine
            (&uStack_48,param_1,param_4,auVar3._0_8_,auVar3._8_8_,param_3 + 6);
  param_3[4] = uStack_40;
  param_3[3] = uStack_48;
  param_3[5] = uStack_38;
  return;
}



// ============================================================
// RVA: 0x1503784 | Atlas.Geometry.SplinePolyLine.TryGetClosestPoint
// ============================================================

undefined8
Atlas_Geometry_SplinePolyLine__TryGetClosestPoint
          (long param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = *(undefined8 *)(param_1 + 0x28);
  param_2[1] = uVar3;
  *param_2 = uVar2;
  uVar1 = Atlas_Geometry_PolyLine__GetClosestPointIndex(param_1 + 0x18,0);
  *param_3 = uVar1;
  return 1;
}



// ============================================================
// RVA: 0x1503804 | Atlas.Geometry.SplinePolyLine.TryGetClosestEndPoint
// ============================================================

undefined8
Atlas_Geometry_SplinePolyLine__TryGetClosestEndPoint
          (long param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = *(undefined8 *)(param_1 + 0x28);
  param_2[1] = uVar3;
  *param_2 = uVar2;
  uVar1 = Atlas_Geometry_PolyLine__GetClosestEndPointIndex(param_1 + 0x18,0);
  *param_3 = uVar1;
  return 1;
}



// ============================================================
// RVA: 0x1503954 | Atlas.Geometry.SplinePolyLine.DrawGizmosLines
// ============================================================

void Atlas_Geometry_SplinePolyLine__DrawGizmosLines(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *extraout_x8;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  plVar1 = (long *)(param_1 + 0x18);
  if (*plVar1 != 0) {
    /*UnityEngine.Gizmos$$set_color*/ func_0x0322fbcc(0,0);
    lVar3 = *plVar1;
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x18) == 0) {
LAB_014c2af4:
        uVar2 = func_0x00f78b24();
        lVar3 = func_0x00f78ac0(uVar2,0);
        uVar2 = *(undefined8 *)(lVar3 + 0x38);
        extraout_x8[1] = *(undefined8 *)(lVar3 + 0x40);
        *extraout_x8 = uVar2;
        extraout_x8[2] = *(undefined8 *)(lVar3 + 0x48);
        return;
      }
      if (*(int *)(param_1 + 0x20) < 2) {
        return;
      }
      lVar4 = 0;
      uVar5 = 1;
      uVar8 = *(undefined4 *)(lVar3 + 0x24);
      uVar10 = *(undefined4 *)(lVar3 + 0x28);
      uVar9 = *(undefined4 *)(lVar3 + 0x20);
      do {
        if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_014c2af4;
        lVar3 = lVar3 + lVar4;
        uVar12 = *(undefined4 *)(lVar3 + 0x2c);
        uVar13 = *(undefined4 *)(lVar3 + 0x30);
        uVar14 = *(undefined4 *)(lVar3 + 0x34);
        uVar6 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(uVar9,uVar8,uVar10,0);
        uVar9 = uVar13;
        uVar11 = uVar14;
        uVar7 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(uVar12,uVar13,uVar14,0);
        /*UnityEngine.Gizmos$$DrawLine*/ func_0x0322f78c(uVar6,uVar8,uVar10,uVar7,uVar9,uVar11,0);
        uVar5 = uVar5 + 1;
        if ((long)*(int *)(param_1 + 0x20) <= (long)uVar5) {
          return;
        }
        lVar4 = lVar4 + 0xc;
        lVar3 = *plVar1;
        uVar8 = uVar13;
        uVar10 = uVar14;
        uVar9 = uVar12;
      } while (lVar3 != 0);
    }
    func_0x00f78af4();
  }
  return;
}



// ============================================================
// RVA: 0x1503960 | Atlas.Geometry.SplinePolyLine.DrawGizmosPoints
// ============================================================

void Atlas_Geometry_SplinePolyLine__DrawGizmosPoints(long param_1)

{
  Atlas_Geometry_PolyLine__DrawGizmosPoints(param_1 + 0x18,0x7fffffff,0x7fffffff,0);
  return;
}



// ============================================================
// RVA: 0x1504404 | Atlas.Geometry.SplinePolyLine.get_Spline
// ============================================================

void Atlas_Geometry_SplinePolyLine__get_Spline(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  return;
}



// ============================================================
// RVA: 0x1504418 | Atlas.Geometry.SplinePolyLine.get_PolyLine
// ============================================================

void Atlas_Geometry_SplinePolyLine__get_PolyLine(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  param_1[1] = *(undefined8 *)(param_2 + 0x20);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x28);
  return;
}



// ============================================================
// RVA: 0x150442c | Atlas.Geometry.SplinePolyLine.get_PolyLineSplineLocations
// ============================================================

undefined8 Atlas_Geometry_SplinePolyLine__get_PolyLineSplineLocations(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x1504434 | Atlas.Geometry.SplinePolyLine.get_DistanceLookup
// ============================================================

undefined1  [16] Atlas_Geometry_SplinePolyLine__get_DistanceLookup(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x38);
}



// ============================================================
// RVA: 0x1504440 | Atlas.Geometry.SplinePolyLine.DrawGizmosPoints
// ============================================================

void Atlas_Geometry_SplinePolyLine__DrawGizmosPoints
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,long param_6,int param_7,int param_8)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *extraout_x8;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  lVar3 = *(long *)(param_6 + 0x18);
  if ((lVar3 != 0) && (0 < *(int *)(param_6 + 0x24))) {
    lVar5 = 0;
    lVar6 = 1;
    do {
      uVar4 = lVar6 - 1;
      if (*(uint *)(lVar3 + 0x18) <= uVar4) {
        uVar1 = func_0x00f78b24();
        plVar2 = (long *)func_0x00f78ac0(uVar1,0);
        if (*plVar2 == 0) {
          return;
        }
        /*UnityEngine.Gizmos$$set_color*/ func_0x0322fbcc(0);
        lVar3 = *plVar2;
        if (lVar3 == 0) goto LAB_014c2ad4;
        if (*(int *)(lVar3 + 0x18) != 0) {
          if ((int)plVar2[1] < 2) {
            return;
          }
          lVar6 = 0;
          uVar4 = 1;
          uVar7 = *(undefined4 *)(lVar3 + 0x24);
          uVar9 = *(undefined4 *)(lVar3 + 0x28);
          uVar8 = *(undefined4 *)(lVar3 + 0x20);
          while (uVar4 < *(uint *)(lVar3 + 0x18)) {
            lVar3 = lVar3 + lVar6;
            uVar15 = *(undefined4 *)(lVar3 + 0x2c);
            uVar11 = *(undefined4 *)(lVar3 + 0x30);
            uVar12 = *(undefined4 *)(lVar3 + 0x34);
            uVar13 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(uVar8,uVar7,uVar9,0);
            uVar8 = uVar11;
            uVar10 = uVar12;
            uVar14 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(uVar15,uVar11,uVar12,0);
            /*UnityEngine.Gizmos$$DrawLine*/ func_0x0322f78c(uVar13,uVar7,uVar9,uVar14,uVar8,uVar10,0);
            uVar4 = uVar4 + 1;
            if ((long)(int)plVar2[1] <= (long)uVar4) {
              return;
            }
            lVar6 = lVar6 + 0xc;
            lVar3 = *plVar2;
            uVar7 = uVar11;
            uVar9 = uVar12;
            uVar8 = uVar15;
            if (lVar3 == 0) {
LAB_014c2ad4:
              func_0x00f78af4();
              return;
            }
          }
        }
        uVar1 = func_0x00f78b24();
        lVar3 = func_0x00f78ac0(uVar1,0);
        uVar1 = *(undefined8 *)(lVar3 + 0x38);
        extraout_x8[1] = *(undefined8 *)(lVar3 + 0x40);
        *extraout_x8 = uVar1;
        extraout_x8[2] = *(undefined8 *)(lVar3 + 0x48);
        return;
      }
      lVar3 = lVar3 + lVar5;
      uVar13 = *(undefined4 *)(lVar3 + 0x20);
      uVar14 = *(undefined4 *)(lVar3 + 0x24);
      uVar15 = *(undefined4 *)(lVar3 + 0x28);
      uVar7 = uStack000000000000000c;
      uVar9 = uStack0000000000000008;
      uVar8 = uStack0000000000000004;
      uVar10 = uStack0000000000000000;
      if ((long)uVar4 < (long)param_7 || param_7 <= param_8 && (long)param_8 < (long)uVar4) {
        uVar7 = param_5;
        uVar9 = param_4;
        uVar8 = param_3;
        uVar10 = param_2;
      }
      /*UnityEngine.Gizmos$$set_color*/ func_0x0322fbcc(uVar10,uVar8,uVar9,uVar7,0);
      /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(uVar13,uVar14,uVar15,0);
      /*UnityEngine.Gizmos$$DrawSphere*/ func_0x0322f8e8(0);
      if (*(int *)(param_6 + 0x24) <= lVar6) {
        return;
      }
      lVar3 = *(long *)(param_6 + 0x18);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0xc;
    } while (lVar3 != 0);
    func_0x00f78af4();
  }
  return;
}



