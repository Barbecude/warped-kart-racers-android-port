// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Geometry.Track

// ============================================================
// RVA: 0x150e470 | Atlas.Geometry.Track.get_SplinePolyLine
// ============================================================

void Atlas_Geometry_Track__get_SplinePolyLine(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  param_1[5] = *(undefined8 *)(param_2 + 0x38);
  param_1[4] = uVar1;
  param_1[7] = uVar3;
  param_1[6] = uVar2;
  param_1[8] = *(undefined8 *)(param_2 + 0x50);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  param_1[1] = *(undefined8 *)(param_2 + 0x18);
  *param_1 = uVar3;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



// ============================================================
// RVA: 0x150e48c | Atlas.Geometry.Track.get_PolyLineResolution
// ============================================================

undefined4 Atlas_Geometry_Track__get_PolyLineResolution(long param_1)

{
  return *(undefined4 *)(param_1 + 0x70);
}



// ============================================================
// RVA: 0x150e494 | Atlas.Geometry.Track.get_Loop
// ============================================================

undefined1 Atlas_Geometry_Track__get_Loop(long param_1)

{
  return *(undefined1 *)(param_1 + 0x74);
}



// ============================================================
// RVA: 0x150e49c | Atlas.Geometry.Track.get_AuthoredIndices
// ============================================================

undefined8 Atlas_Geometry_Track__get_AuthoredIndices(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



// ============================================================
// RVA: 0x150e4a4 | Atlas.Geometry.Track.get_StartCapPolyLine
// ============================================================

void Atlas_Geometry_Track__get_StartCapPolyLine(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x80);
  param_1[1] = *(undefined8 *)(param_2 + 0x88);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x90);
  return;
}



// ============================================================
// RVA: 0x150e4b8 | Atlas.Geometry.Track.get_LeftPolyLines
// ============================================================

undefined8 Atlas_Geometry_Track__get_LeftPolyLines(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



// ============================================================
// RVA: 0x150e4c0 | Atlas.Geometry.Track.get_LeftUVOffsets
// ============================================================

undefined8 Atlas_Geometry_Track__get_LeftUVOffsets(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



// ============================================================
// RVA: 0x150e4c8 | Atlas.Geometry.Track.get_LeftOutermostPolyLine
// ============================================================

void Atlas_Geometry_Track__get_LeftOutermostPolyLine(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0xa8);
  param_1[1] = *(undefined8 *)(param_2 + 0xb0);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0xb8);
  return;
}



// ============================================================
// RVA: 0x150e4dc | Atlas.Geometry.Track.get_CentrePolyLine
// ============================================================

void Atlas_Geometry_Track__get_CentrePolyLine(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0xc0);
  param_1[1] = *(undefined8 *)(param_2 + 200);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0xd0);
  return;
}



// ============================================================
// RVA: 0x150e4f0 | Atlas.Geometry.Track.get_RightPolyLines
// ============================================================

undefined8 Atlas_Geometry_Track__get_RightPolyLines(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



// ============================================================
// RVA: 0x150e4f8 | Atlas.Geometry.Track.get_RightUVOffsets
// ============================================================

undefined8 Atlas_Geometry_Track__get_RightUVOffsets(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



// ============================================================
// RVA: 0x150e500 | Atlas.Geometry.Track.get_RightOutermostPolyLine
// ============================================================

void Atlas_Geometry_Track__get_RightOutermostPolyLine(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0xe8);
  param_1[1] = *(undefined8 *)(param_2 + 0xf0);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0xf8);
  return;
}



// ============================================================
// RVA: 0x150e514 | Atlas.Geometry.Track.get_EndCapPolyLine
// ============================================================

void Atlas_Geometry_Track__get_EndCapPolyLine(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x100);
  param_1[1] = *(undefined8 *)(param_2 + 0x108);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x110);
  return;
}



// ============================================================
// RVA: 0x150e528 | Atlas.Geometry.Track.get_PolyLineSamples
// ============================================================

undefined8 Atlas_Geometry_Track__get_PolyLineSamples(long param_1)

{
  return *(undefined8 *)(param_1 + 0x118);
}



// ============================================================
// RVA: 0x150e530 | Atlas.Geometry.Track.get_RenderableSections
// ============================================================

undefined8 Atlas_Geometry_Track__get_RenderableSections(long param_1)

{
  return *(undefined8 *)(param_1 + 0x128);
}



// ============================================================
// RVA: 0x150e538 | Atlas.Geometry.Track.get_MarginWdith
// ============================================================

undefined4 Atlas_Geometry_Track__get_MarginWdith(long param_1)

{
  return *(undefined4 *)(param_1 + 0x120);
}



// ============================================================
// RVA: 0x150e540 | Atlas.Geometry.Track..ctor
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x150f278 | Atlas.Geometry.Track.Reset
// ============================================================

undefined8
Atlas_Geometry_Track__Reset
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
          undefined8 param_5,undefined4 *param_6)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *extraout_x1;
  undefined4 extraout_s0;
  undefined8 uVar6;
  undefined8 uStack_88;
  
  Atlas_Geometry_SplinePolyLine__Reset(param_4 + 0x10,0);
  /*SplineDistanceLookup$$Reset*/ func_0x01504320(param_4 + 0x58,0);
  if (*(long *)(param_4 + 0x68) == 0) {
    lVar5 = func_0x00f78af4();
    uStack_88 = 0;
    uVar2 = Atlas_Geometry_PolyLine__GetClosestPointIndex
                      ((undefined8 *)(lVar5 + 0xa8),(long)&uStack_88 + 4,0);
    uVar3 = Atlas_Geometry_PolyLine__GetClosestPointIndex
                      (extraout_s0,param_2,param_3,(undefined8 *)(lVar5 + 0xe8),&uStack_88,0);
    puVar1 = (undefined8 *)(lVar5 + 0xa8);
    if ((float)uStack_88 <= uStack_88._4_4_) {
      uVar2 = uVar3;
      puVar1 = (undefined8 *)(lVar5 + 0xe8);
    }
    uVar4 = puVar1[2];
    uVar6 = *puVar1;
    extraout_x1[1] = puVar1[1];
    *extraout_x1 = uVar6;
    extraout_x1[2] = uVar4;
    *param_6 = uVar2;
    return 1;
  }
  /*ProjectionParameterSampler$$Reset*/ func_0x014cfdb4(*(long *)(param_4 + 0x68),0);
  *(undefined8 *)(param_4 + 0x78) = 0;
  *(undefined8 *)(param_4 + 0x98) = 0;
  *(undefined8 *)(param_4 + 0xd8) = 0;
  Atlas_Geometry_PolyLine__Reset(param_4 + 0xa8,0);
  Atlas_Geometry_PolyLine__Reset(param_4 + 0xe8,0);
  uVar4 = Atlas_Geometry_PolyLine__Reset(param_4 + 0xc0,0);
  *(undefined1 *)(param_4 + 0x74) = 0;
  return uVar4;
}



// ============================================================
// RVA: 0x150f2f4 | Atlas.Geometry.Track.TryGetClosestPoint
// ============================================================

undefined8
Atlas_Geometry_Track__TryGetClosestPoint
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,undefined8 *param_5
          ,undefined4 *param_6)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_68;
  
  uStack_68 = 0;
  uVar2 = Atlas_Geometry_PolyLine__GetClosestPointIndex
                    ((undefined8 *)(param_4 + 0xa8),(long)&uStack_68 + 4,0);
  uVar3 = Atlas_Geometry_PolyLine__GetClosestPointIndex
                    (param_1,param_2,param_3,(undefined8 *)(param_4 + 0xe8),&uStack_68,0);
  puVar1 = (undefined8 *)(param_4 + 0xa8);
  if ((float)uStack_68 <= uStack_68._4_4_) {
    uVar2 = uVar3;
    puVar1 = (undefined8 *)(param_4 + 0xe8);
  }
  uVar4 = puVar1[2];
  uVar5 = *puVar1;
  param_5[1] = puVar1[1];
  *param_5 = uVar5;
  param_5[2] = uVar4;
  *param_6 = uVar2;
  return 1;
}



// ============================================================
// RVA: 0x150f3b0 | Atlas.Geometry.Track.TryGetClosestEndPoint
// ============================================================

undefined8
Atlas_Geometry_Track__TryGetClosestEndPoint
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,undefined8 *param_5
          ,undefined4 *param_6)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_68;
  
  uStack_68 = 0;
  uVar2 = Atlas_Geometry_PolyLine__GetClosestEndPointIndex
                    ((undefined8 *)(param_4 + 0xa8),(long)&uStack_68 + 4,0);
  uVar3 = Atlas_Geometry_PolyLine__GetClosestEndPointIndex
                    (param_1,param_2,param_3,(undefined8 *)(param_4 + 0xe8),&uStack_68,0);
  puVar1 = (undefined8 *)(param_4 + 0xa8);
  if ((float)uStack_68 <= uStack_68._4_4_) {
    uVar2 = uVar3;
    puVar1 = (undefined8 *)(param_4 + 0xe8);
  }
  uVar4 = puVar1[2];
  uVar5 = *puVar1;
  param_5[1] = puVar1[1];
  *param_5 = uVar5;
  param_5[2] = uVar4;
  *param_6 = uVar2;
  return 1;
}



// ============================================================
// RVA: 0x150f46c | Atlas.Geometry.Track.DrawGizmos
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
Atlas_Geometry_Track__DrawGizmos
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,uint param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auVar14 [16];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  if (((int)param_5 < 0) || (*(int *)(param_4 + 0x18) <= (int)param_5)) {
    uVar2 = 0xffffffff;
    uVar1 = 0xffffffff;
LAB_0150f544:
    uVar8 = /*UnityEngine.Color$$get_cyan*/ func_0x032235ec(0);
    uStack_88 = *(undefined8 *)(param_4 + 0x30);
    uStack_90 = *(undefined8 *)(param_4 + 0x28);
    uStack_80 = *(undefined8 *)(param_4 + 0x38);
    uVar10 = 0x3f000000;
    uVar12 = param_2;
    uVar13 = param_3;
    Atlas_Geometry_PolyLine__DrawGizmosLines(uVar8,&uStack_90,0);
    uStack_88 = *(undefined8 *)(param_4 + 0x30);
    uStack_90 = *(undefined8 *)(param_4 + 0x28);
    uStack_80 = *(undefined8 *)(param_4 + 0x38);
    uVar9 = /*UnityEngine.Color$$get_cyan*/ func_0x032235ec(0);
    /*UnityEngine.Color$$get_green*/ func_0x03223580(0);
    uVar11 = _UNK_033f83fc;
    Atlas_Geometry_PolyLine__DrawGizmosPoints
              (_UNK_033f83fc,uVar9,uVar12,uVar13,uVar10,&uStack_90,uVar2,uVar1,0);
    Atlas_Geometry_PolyLine__DrawGizmosLines(uVar8,param_2,param_3,0x3f000000,param_4 + 0x80,0);
    uVar12 = uVar8;
    uVar13 = param_2;
    uVar9 = param_3;
    Atlas_Geometry_PolyLine__DrawGizmosPoints
              (uVar11,uVar8,param_2,param_3,0x3f000000,param_4 + 0x80,0);
    /*UnityEngine.Color$$get_cyan*/ func_0x032235ec(0);
    Atlas_Geometry_PolyLine__DrawGizmosLines(param_4 + 0xa8,0);
    uVar10 = /*UnityEngine.Color$$get_cyan*/ func_0x032235ec(0);
    Atlas_Geometry_PolyLine__DrawGizmosPoints(uVar11,uVar10,uVar12,uVar13,uVar9,param_4 + 0xa8,0);
    /*UnityEngine.Color$$get_cyan*/ func_0x032235ec(0);
    Atlas_Geometry_PolyLine__DrawGizmosLines(param_4 + 0xe8,0);
    uVar9 = /*UnityEngine.Color$$get_cyan*/ func_0x032235ec(0);
    Atlas_Geometry_PolyLine__DrawGizmosPoints(uVar11,uVar9,uVar10,uVar12,uVar13,param_4 + 0xe8,0);
    /*UnityEngine.Color$$get_cyan*/ func_0x032235ec(0);
    Atlas_Geometry_PolyLine__DrawGizmosLines(param_4 + 0x100,0);
    uVar1 = Atlas_Geometry_PolyLine__DrawGizmosPoints
                      (uVar11,uVar8,param_2,param_3,0x3f000000,param_4 + 0x100,0);
    return uVar1;
  }
  lVar4 = *(long *)(param_4 + 0x10);
  if (lVar4 != 0) {
    if ((param_5 < *(uint *)(lVar4 + 0x18)) && (param_5 - 1 < *(uint *)(lVar4 + 0x18))) {
      puVar7 = (undefined4 *)(lVar4 + 0x20 + (ulong)param_5 * 0x24);
      puVar5 = (undefined4 *)(lVar4 + 0x20 + (ulong)(param_5 - 1) * 0x24);
      uVar11 = *puVar5;
      param_2 = puVar5[1];
      param_3 = puVar5[2];
      uStack_88 = *(undefined8 *)(param_4 + 0x30);
      uStack_90 = *(undefined8 *)(param_4 + 0x28);
      uStack_80 = *(undefined8 *)(param_4 + 0x38);
      uVar1 = Atlas_Geometry_PolyLine__GetClosestPointIndex
                        (*puVar7,puVar7[1],puVar7[2],&uStack_90,0);
      uStack_88 = *(undefined8 *)(param_4 + 0x30);
      uStack_90 = *(undefined8 *)(param_4 + 0x28);
      uStack_80 = *(undefined8 *)(param_4 + 0x38);
      uVar2 = Atlas_Geometry_PolyLine__GetClosestPointIndex(uVar11,&uStack_90,0);
      goto LAB_0150f544;
    }
    uVar1 = func_0x00f78b24();
    func_0x00f78ac0(uVar1,0);
  }
  auVar14 = func_0x00f78af4();
  lVar4 = auVar14._0_8_;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  uVar3 = auVar14._8_4_;
  if ((-1 < (int)uVar3) && ((int)uVar3 < *(int *)(lVar4 + 0x18) + -1)) {
    lVar6 = *(long *)(lVar4 + 0x10);
    if (lVar6 != 0) {
      if ((uVar3 < *(uint *)(lVar6 + 0x18)) && (uVar3 + 1 < *(uint *)(lVar6 + 0x18))) {
        puVar5 = (undefined4 *)(lVar6 + 0x20 + (auVar14._8_8_ & 0xffffffff) * 0x24);
        param_2 = puVar5[1];
        param_3 = puVar5[2];
        uVar11 = *puVar5;
        puVar5 = (undefined4 *)(lVar6 + 0x20 + (ulong)(uVar3 + 1) * 0x24);
        uVar12 = *puVar5;
        uVar13 = puVar5[1];
        uVar9 = puVar5[2];
        uStack_128 = *(undefined8 *)(lVar4 + 0x30);
        uStack_130 = *(undefined8 *)(lVar4 + 0x28);
        uStack_120 = *(undefined8 *)(lVar4 + 0x38);
        uVar1 = Atlas_Geometry_PolyLine__GetClosestPointIndex(uVar11,param_2,param_3,&uStack_130,0);
        uStack_128 = *(undefined8 *)(lVar4 + 0x30);
        uStack_130 = *(undefined8 *)(lVar4 + 0x28);
        uStack_120 = *(undefined8 *)(lVar4 + 0x38);
        uVar2 = Atlas_Geometry_PolyLine__GetClosestPointIndex(uVar12,uVar13,uVar9,&uStack_130,0);
        /*UnityEngine.Color$$get_green*/ func_0x03223580(0);
        /*UnityEngine.Gizmos$$set_color*/ func_0x0322fbcc(0);
        /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(uVar11,0);
        /*UnityEngine.Gizmos$$DrawSphere*/ func_0x0322f8e8(0);
        goto code_r0x0150f84c;
      }
      uVar1 = func_0x00f78b24();
      func_0x00f78ac0(uVar1,0);
    }
    lVar4 = func_0x00f78af4();
    return *(undefined8 *)(lVar4 + 0x30);
  }
  uVar2 = 0xffffffff;
  uVar1 = 0xffffffff;
code_r0x0150f84c:
  uVar8 = /*UnityEngine.Color$$get_cyan*/ func_0x032235ec(0);
  uStack_128 = *(undefined8 *)(lVar4 + 0x30);
  uStack_130 = *(undefined8 *)(lVar4 + 0x28);
  uStack_120 = *(undefined8 *)(lVar4 + 0x38);
  uVar10 = 0x3f000000;
  uVar12 = param_2;
  uVar13 = param_3;
  Atlas_Geometry_PolyLine__DrawGizmosLines(uVar8,&uStack_130,0);
  uStack_128 = *(undefined8 *)(lVar4 + 0x30);
  uStack_130 = *(undefined8 *)(lVar4 + 0x28);
  uStack_120 = *(undefined8 *)(lVar4 + 0x38);
  uVar9 = /*UnityEngine.Color$$get_cyan*/ func_0x032235ec(0);
  /*UnityEngine.Color$$get_green*/ func_0x03223580(0);
  uVar11 = _UNK_033f83fc;
  Atlas_Geometry_PolyLine__DrawGizmosPoints
            (_UNK_033f83fc,uVar9,uVar12,uVar13,uVar10,&uStack_130,uVar1,uVar2,0);
  Atlas_Geometry_PolyLine__DrawGizmosLines(uVar8,param_2,param_3,0x3f000000,lVar4 + 0x80,0);
  uVar12 = uVar8;
  uVar13 = param_2;
  uVar9 = param_3;
  Atlas_Geometry_PolyLine__DrawGizmosPoints(uVar11,uVar8,param_2,param_3,0x3f000000,lVar4 + 0x80,0);
  /*UnityEngine.Color$$get_cyan*/ func_0x032235ec(0);
  Atlas_Geometry_PolyLine__DrawGizmosLines(lVar4 + 0xa8,0);
  uVar10 = /*UnityEngine.Color$$get_cyan*/ func_0x032235ec(0);
  Atlas_Geometry_PolyLine__DrawGizmosPoints(uVar11,uVar10,uVar12,uVar13,uVar9,lVar4 + 0xa8,0);
  /*UnityEngine.Color$$get_cyan*/ func_0x032235ec(0);
  Atlas_Geometry_PolyLine__DrawGizmosLines(lVar4 + 0xe8,0);
  uVar9 = /*UnityEngine.Color$$get_cyan*/ func_0x032235ec(0);
  Atlas_Geometry_PolyLine__DrawGizmosPoints(uVar11,uVar9,uVar10,uVar12,uVar13,lVar4 + 0xe8,0);
  /*UnityEngine.Color$$get_cyan*/ func_0x032235ec(0);
  Atlas_Geometry_PolyLine__DrawGizmosLines(lVar4 + 0x100,0);
  uVar1 = Atlas_Geometry_PolyLine__DrawGizmosPoints
                    (uVar11,uVar8,param_2,param_3,0x3f000000,lVar4 + 0x100,0);
  return uVar1;
}



// ============================================================
// RVA: 0x150f730 | Atlas.Geometry.Track.DrawGizmosImproved
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
Atlas_Geometry_Track__DrawGizmosImproved
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,uint param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  if (((int)param_5 < 0) || (*(int *)(param_4 + 0x18) + -1 <= (int)param_5)) {
    uVar2 = 0xffffffff;
    uVar1 = 0xffffffff;
LAB_0150f84c:
    uVar5 = /*UnityEngine.Color$$get_cyan*/ func_0x032235ec(0);
    uStack_88 = *(undefined8 *)(param_4 + 0x30);
    uStack_90 = *(undefined8 *)(param_4 + 0x28);
    uStack_80 = *(undefined8 *)(param_4 + 0x38);
    uVar6 = 0x3f000000;
    uVar8 = param_2;
    uVar9 = param_3;
    Atlas_Geometry_PolyLine__DrawGizmosLines(uVar5,&uStack_90,0);
    uStack_88 = *(undefined8 *)(param_4 + 0x30);
    uStack_90 = *(undefined8 *)(param_4 + 0x28);
    uStack_80 = *(undefined8 *)(param_4 + 0x38);
    uVar10 = /*UnityEngine.Color$$get_cyan*/ func_0x032235ec(0);
    /*UnityEngine.Color$$get_green*/ func_0x03223580(0);
    uVar7 = _UNK_033f83fc;
    Atlas_Geometry_PolyLine__DrawGizmosPoints
              (_UNK_033f83fc,uVar10,uVar8,uVar9,uVar6,&uStack_90,uVar1,uVar2,0);
    Atlas_Geometry_PolyLine__DrawGizmosLines(uVar5,param_2,param_3,0x3f000000,param_4 + 0x80,0);
    uVar8 = uVar5;
    uVar9 = param_2;
    uVar10 = param_3;
    Atlas_Geometry_PolyLine__DrawGizmosPoints
              (uVar7,uVar5,param_2,param_3,0x3f000000,param_4 + 0x80,0);
    /*UnityEngine.Color$$get_cyan*/ func_0x032235ec(0);
    Atlas_Geometry_PolyLine__DrawGizmosLines(param_4 + 0xa8,0);
    uVar6 = /*UnityEngine.Color$$get_cyan*/ func_0x032235ec(0);
    Atlas_Geometry_PolyLine__DrawGizmosPoints(uVar7,uVar6,uVar8,uVar9,uVar10,param_4 + 0xa8,0);
    /*UnityEngine.Color$$get_cyan*/ func_0x032235ec(0);
    Atlas_Geometry_PolyLine__DrawGizmosLines(param_4 + 0xe8,0);
    uVar10 = /*UnityEngine.Color$$get_cyan*/ func_0x032235ec(0);
    Atlas_Geometry_PolyLine__DrawGizmosPoints(uVar7,uVar10,uVar6,uVar8,uVar9,param_4 + 0xe8,0);
    /*UnityEngine.Color$$get_cyan*/ func_0x032235ec(0);
    Atlas_Geometry_PolyLine__DrawGizmosLines(param_4 + 0x100,0);
    uVar1 = Atlas_Geometry_PolyLine__DrawGizmosPoints
                      (uVar7,uVar5,param_2,param_3,0x3f000000,param_4 + 0x100,0);
    return uVar1;
  }
  lVar3 = *(long *)(param_4 + 0x10);
  if (lVar3 != 0) {
    if ((param_5 < *(uint *)(lVar3 + 0x18)) && (param_5 + 1 < *(uint *)(lVar3 + 0x18))) {
      puVar4 = (undefined4 *)(lVar3 + 0x20 + (ulong)param_5 * 0x24);
      param_2 = puVar4[1];
      param_3 = puVar4[2];
      uVar7 = *puVar4;
      puVar4 = (undefined4 *)(lVar3 + 0x20 + (ulong)(param_5 + 1) * 0x24);
      uVar8 = *puVar4;
      uVar9 = puVar4[1];
      uVar10 = puVar4[2];
      uStack_88 = *(undefined8 *)(param_4 + 0x30);
      uStack_90 = *(undefined8 *)(param_4 + 0x28);
      uStack_80 = *(undefined8 *)(param_4 + 0x38);
      uVar1 = Atlas_Geometry_PolyLine__GetClosestPointIndex(uVar7,param_2,param_3,&uStack_90,0);
      uStack_88 = *(undefined8 *)(param_4 + 0x30);
      uStack_90 = *(undefined8 *)(param_4 + 0x28);
      uStack_80 = *(undefined8 *)(param_4 + 0x38);
      uVar2 = Atlas_Geometry_PolyLine__GetClosestPointIndex(uVar8,uVar9,uVar10,&uStack_90,0);
      /*UnityEngine.Color$$get_green*/ func_0x03223580(0);
      /*UnityEngine.Gizmos$$set_color*/ func_0x0322fbcc(0);
      /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(uVar7,0);
      /*UnityEngine.Gizmos$$DrawSphere*/ func_0x0322f8e8(0);
      goto LAB_0150f84c;
    }
    uVar1 = func_0x00f78b24();
    func_0x00f78ac0(uVar1,0);
  }
  lVar3 = func_0x00f78af4();
  return *(undefined8 *)(lVar3 + 0x30);
}



