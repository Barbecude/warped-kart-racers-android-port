// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Geometry.SplineBehaviour

// ============================================================
// RVA: 0x15033dc | Atlas.Geometry.SplineBehaviour.get_SplinePolyLine
// ============================================================

void Atlas_Geometry_SplineBehaviour__get_SplinePolyLine(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  uVar3 = *(undefined8 *)(param_2 + 0x68);
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  param_1[5] = *(undefined8 *)(param_2 + 0x58);
  param_1[4] = uVar1;
  param_1[7] = uVar3;
  param_1[6] = uVar2;
  param_1[8] = *(undefined8 *)(param_2 + 0x70);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  param_1[1] = *(undefined8 *)(param_2 + 0x38);
  *param_1 = uVar3;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



// ============================================================
// RVA: 0x15033f8 | Atlas.Geometry.SplineBehaviour.GetPriority
// ============================================================

undefined8 Atlas_Geometry_SplineBehaviour__GetPriority(void)

{
  return 0x32;
}



// ============================================================
// RVA: 0x1503400 | Atlas.Geometry.SplineBehaviour.OnCalculate
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Geometry_SplineBehaviour__OnCalculate
               (undefined1 param_1 [16],ulong param_2,float param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  if ((bRam0000000003eb4cfc & 1) == 0) {
    func_0x00f78a20(0x3d3cb28);
    func_0x00f78a20(0x3d3cb20);
    func_0x00f78a20(0x3d3cb40);
    func_0x00f78a20(0x3d3cb48);
    func_0x00f78a20(0x3d1e030);
    bRam0000000003eb4cfc = 1;
  }
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  /*Atlas.Geometry.TrackEditorUpdatableBehaviour$$UpdatedToLatestAllRevision*/ func_0x0151088c(param_4,0);
  *(undefined8 *)(param_4 + 0x30) = 0;
  *(undefined4 *)(param_4 + 0x38) = 0;
  *(undefined1 *)(param_4 + 0x40) = 0;
  Atlas_Geometry_PolyLine__Reset(param_4 + 0x48,0);
  *(undefined8 *)(param_4 + 0x60) = 0;
  *(undefined8 *)(param_4 + 0x68) = 0;
  *(undefined4 *)(param_4 + 0x70) = 0;
  lVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_4,0);
  if (lVar2 != 0) {
    uVar3 = /*UnityEngine.Transform$$get_childCount*/ func_0x03276f9c(lVar2,0);
    if (1 < (int)uVar3) {
      lVar2 = func_0x00f78aec(/*System.Collections.Generic.List<float3>_TypeInfo*/ uRam0000000003d1e030);
      /*System.Collections.Generic.List<float3>$$.ctor*/ func_0x0249baa0(lVar2,uVar3,uRam0000000003d3cb20);
      iVar6 = 0;
      fVar10 = _UNK_033f83f8;
      fVar11 = _UNK_033f83f8;
      fVar12 = _UNK_033f83f8;
      do {
        fVar8 = (float)param_2;
        lVar4 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_4,0);
        if ((lVar4 == 0) || (lVar4 = /*UnityEngine.Transform$$GetChild*/ func_0x03277648(lVar4,iVar6,0), lVar4 == 0)) goto LAB_01503680;
        /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar4,0);
        fVar7 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
        fVar9 = param_3 - fVar10;
        param_2 = 1;
        if (1.4013e-45 <
            fVar9 * fVar9 +
            (fVar7 - fVar12) * (fVar7 - fVar12) + (fVar8 - fVar11) * (fVar8 - fVar11)) {
          if (lVar2 == 0) goto LAB_01503680;
          param_2 = (ulong)(uint)fVar8;
          fVar9 = param_3;
          /*System.Collections.Generic.List<float3>$$Add*/ func_0x0249c6b4(fVar7,lVar2,uRam0000000003d3cb28);
          fVar10 = param_3;
          fVar11 = fVar8;
          fVar12 = fVar7;
        }
        iVar6 = iVar6 + 1;
        param_3 = fVar9;
      } while ((int)uVar3 != iVar6);
      if (lVar2 == 0) goto LAB_01503680;
      iVar6 = *(int *)(lVar2 + 0x18);
      if (1 < iVar6) {
        bVar1 = *(char *)(param_4 + 0x80) != '\0';
        if (iVar6 != 2 && bVar1) {
          lVar4 = *(long *)(lVar2 + 0x10);
          /*System.Collections.Generic.List<float3>$$Add*/ func_0x0249c6b4(*(undefined4 *)(lVar4 + 0x20),*(undefined4 *)(lVar4 + 0x24),
                          *(undefined4 *)(lVar4 + 0x28),lVar2,uRam0000000003d3cb28);
        }
        Atlas_Geometry_Spline___ctor
                  (*(undefined4 *)(param_4 + 0x7c),&uStack_98,lVar2,iVar6 != 2 && bVar1);
        uStack_f8 = uStack_90;
        uStack_100 = uStack_98;
        uStack_f0 = uStack_88;
        uStack_a0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        /*Atlas.Geometry.SplinePolyLine$$.ctor*/ func_0x015036c0(*(undefined4 *)(param_4 + 0x78),_UNK_033f813c,&uStack_e0,&uStack_100);
        *(undefined8 *)(param_4 + 0x58) = uStack_b8;
        *(undefined8 *)(param_4 + 0x50) = uStack_c0;
        *(undefined8 *)(param_4 + 0x68) = uStack_a8;
        *(undefined8 *)(param_4 + 0x60) = uStack_b0;
        *(undefined8 *)(param_4 + 0x70) = uStack_a0;
        *(undefined8 *)(param_4 + 0x38) = uStack_d8;
        *(undefined8 *)(param_4 + 0x30) = uStack_e0;
        *(undefined8 *)(param_4 + 0x48) = uStack_c8;
        *(undefined8 *)(param_4 + 0x40) = uStack_d0;
      }
    }
    return;
  }
LAB_01503680:
  puVar5 = (undefined8 *)func_0x00f78af4();
  *puVar5 = 0;
  *(undefined4 *)(puVar5 + 1) = 0;
  *(undefined1 *)(puVar5 + 2) = 0;
  Atlas_Geometry_PolyLine__Reset(puVar5 + 3,0);
  puVar5[6] = 0;
  puVar5[7] = 0;
  *(undefined4 *)(puVar5 + 8) = 0;
  return;
}



// ============================================================
// RVA: 0x1503744 | Atlas.Geometry.SplineBehaviour.TryGetClosestPoint
// ============================================================

undefined8
Atlas_Geometry_SplineBehaviour__TryGetClosestPoint
          (long param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  param_2[2] = *(undefined8 *)(param_1 + 0x58);
  param_2[1] = uVar3;
  *param_2 = uVar2;
  uVar1 = Atlas_Geometry_PolyLine__GetClosestPointIndex(param_1 + 0x48,0);
  *param_3 = uVar1;
  return 1;
}



// ============================================================
// RVA: 0x15037c4 | Atlas.Geometry.SplineBehaviour.TryGetClosestEndPoint
// ============================================================

undefined8
Atlas_Geometry_SplineBehaviour__TryGetClosestEndPoint
          (long param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  param_2[2] = *(undefined8 *)(param_1 + 0x58);
  param_2[1] = uVar3;
  *param_2 = uVar2;
  uVar1 = Atlas_Geometry_PolyLine__GetClosestEndPointIndex(param_1 + 0x48,0);
  *param_3 = uVar1;
  return 1;
}



// ============================================================
// RVA: 0x1503844 | Atlas.Geometry.SplineBehaviour.GetPolyLineCount
// ============================================================

undefined8 Atlas_Geometry_SplineBehaviour__GetPolyLineCount(void)

{
  return 1;
}



// ============================================================
// RVA: 0x150384c | Atlas.Geometry.SplineBehaviour.TryGetPolyLine
// ============================================================

bool Atlas_Geometry_SplineBehaviour__TryGetPolyLine(long param_1,int param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    param_3[2] = *(undefined8 *)(param_1 + 0x58);
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
// RVA: 0x1503878 | Atlas.Geometry.SplineBehaviour.OnDrawGizmosSelected
// ============================================================

void Atlas_Geometry_SplineBehaviour__OnDrawGizmosSelected
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar1 = /*UnityEngine.Color$$get_green*/ func_0x03223580(0);
  Atlas_Geometry_PolyLine__DrawGizmosLines(param_4 + 0x48,0);
  Atlas_Geometry_PolyLine__DrawGizmosPoints
            (0x3f000000,uVar1,param_2,param_3,0x3f000000,param_4 + 0x48,0x7fffffff,0x7fffffff,0);
  uStack_58 = *(undefined8 *)(param_4 + 0x38);
  uStack_60 = *(undefined8 *)(param_4 + 0x30);
  uStack_50 = *(undefined8 *)(param_4 + 0x40);
  uVar2 = /*UnityEngine.Color$$get_yellow*/ func_0x032235d0(0);
  Atlas_Geometry_Spline__DrawGizmos(0x3f000000,uVar2,uVar1,param_2,param_3,&uStack_60,1);
  return;
}



// ============================================================
// RVA: 0x1503994 | Atlas.Geometry.SplineBehaviour.OnDrawGizmos
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Geometry_SplineBehaviour__OnDrawGizmos
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined4 uVar1;
  
  uVar1 = /*UnityEngine.Color$$get_cyan*/ func_0x032235ec(0);
  Atlas_Geometry_PolyLine__DrawGizmosLines(param_4 + 0x48,0);
  Atlas_Geometry_PolyLine__DrawGizmosPoints
            (_UNK_033f83fc,uVar1,param_2,param_3,0x3f000000,param_4 + 0x48,0x7fffffff,0x7fffffff,0);
  return;
}



// ============================================================
// RVA: 0x1503a2c | Atlas.Geometry.SplineBehaviour..ctor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] Atlas_Geometry_SplineBehaviour___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  *(undefined8 *)(param_1 + 0x78) = _UNK_033f83b0;
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



