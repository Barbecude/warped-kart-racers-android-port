// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Geometry.TrackBehaviourImproved

// ============================================================
// RVA: 0x150fa38 | Atlas.Geometry.TrackBehaviourImproved.get_Track
// ============================================================

undefined8 Atlas_Geometry_TrackBehaviourImproved__get_Track(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x150fa40 | Atlas.Geometry.TrackBehaviourImproved.Awake
// ============================================================

void Atlas_Geometry_TrackBehaviourImproved__Awake(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  if ((bRam0000000003eb4d68 & 1) == 0) {
    func_0x00f78a20(0x3d6c080);
    bRam0000000003eb4d68 = 1;
  }
  uVar1 = /*STR('EditorOnly')*/ uRam0000000003d6c080;
  if (pcRam0000000003ebf190 == (code *)0x0) {
    pcRam0000000003ebf190 =
         (code *)func_0x00f789d4("UnityEngine.Component::get_gameObject()",/*STR('EditorOnly')*/ uRam0000000003d6c080,0);
  }
  lVar2 = (*pcRam0000000003ebf190)(param_1);
  if (lVar2 != 0) {
    if (pcRam0000000003ebf500 == (code *)0x0) {
      pcRam0000000003ebf500 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::set_tag(System.String)");
    }
                    /* WARNING: Could not recover jumptable at 0x03227e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ebf500)(lVar2,uVar1);
    return;
  }
  auVar3 = func_0x00f78af4();
  if (pcRam0000000003ebf500 == (code *)0x0) {
    pcRam0000000003ebf500 =
         (code *)func_0x00f789d4("UnityEngine.GameObject::set_tag(System.String)");
  }
                    /* WARNING: Could not recover jumptable at 0x03227ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ebf500)(auVar3._0_8_,auVar3._8_8_);
  return;
}



// ============================================================
// RVA: 0x150fa98 | Atlas.Geometry.TrackBehaviourImproved.GetPriority
// ============================================================

undefined8 Atlas_Geometry_TrackBehaviourImproved__GetPriority(void)

{
  return 0x5a;
}



// ============================================================
// RVA: 0x150faa0 | Atlas.Geometry.TrackBehaviourImproved.OnCalculate
// ============================================================

/* WARNING: Possible PIC construction at 0x0150fbb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0150fbb4) */
/* WARNING: Removing unreachable block (ram,0x0150fbc8) */
/* WARNING: Removing unreachable block (ram,0x0150fbd8) */
/* WARNING: Removing unreachable block (ram,0x0150fc14) */
/* WARNING: Removing unreachable block (ram,0x0150fc30) */
/* WARNING: Removing unreachable block (ram,0x0150fc40) */
/* WARNING: Removing unreachable block (ram,0x0150fc58) */
/* WARNING: Removing unreachable block (ram,0x0150fc60) */
/* WARNING: Removing unreachable block (ram,0x0150fc64) */
/* WARNING: Removing unreachable block (ram,0x0150fc88) */
/* WARNING: Removing unreachable block (ram,0x0150fc8c) */
/* WARNING: Removing unreachable block (ram,0x0150fc78) */
/* WARNING: Removing unreachable block (ram,0x0150fca8) */
/* WARNING: Removing unreachable block (ram,0x0150fcb8) */
/* WARNING: Removing unreachable block (ram,0x0150fc84) */
/* WARNING: Removing unreachable block (ram,0x0150fcbc) */
/* WARNING: Removing unreachable block (ram,0x0150fcc0) */
/* WARNING: Removing unreachable block (ram,0x0150fccc) */
/* WARNING: Removing unreachable block (ram,0x0150fd28) */
/* WARNING: Removing unreachable block (ram,0x0150fd3c) */
/* WARNING: Removing unreachable block (ram,0x0150fd6c) */
/* WARNING: Removing unreachable block (ram,0x0150fd80) */
/* WARNING: Removing unreachable block (ram,0x0150fd88) */
/* WARNING: Removing unreachable block (ram,0x0150fdfc) */
/* WARNING: Removing unreachable block (ram,0x0150fe20) */
/* WARNING: Removing unreachable block (ram,0x0150fe28) */
/* WARNING: Removing unreachable block (ram,0x0150fe38) */
/* WARNING: Removing unreachable block (ram,0x0150fe5c) */
/* WARNING: Removing unreachable block (ram,0x0150fe68) */
/* WARNING: Removing unreachable block (ram,0x0150fe74) */
/* WARNING: Removing unreachable block (ram,0x0150fe54) */
/* WARNING: Removing unreachable block (ram,0x0150fe78) */
/* WARNING: Removing unreachable block (ram,0x0150fe8c) */
/* WARNING: Removing unreachable block (ram,0x0150fe94) */
/* WARNING: Removing unreachable block (ram,0x0150fe98) */
/* WARNING: Removing unreachable block (ram,0x0150feb8) */
/* WARNING: Removing unreachable block (ram,0x0150fea8) */
/* WARNING: Removing unreachable block (ram,0x0150feb0) */
/* WARNING: Removing unreachable block (ram,0x0150fec0) */
/* WARNING: Removing unreachable block (ram,0x0150fec8) */
/* WARNING: Removing unreachable block (ram,0x0150fedc) */
/* WARNING: Removing unreachable block (ram,0x0150fee8) */
/* WARNING: Removing unreachable block (ram,0x0150fef0) */
/* WARNING: Removing unreachable block (ram,0x0150fef4) */
/* WARNING: Removing unreachable block (ram,0x0150ff00) */
/* WARNING: Removing unreachable block (ram,0x0150ff14) */
/* WARNING: Removing unreachable block (ram,0x0150ff20) */
/* WARNING: Removing unreachable block (ram,0x0150ff28) */
/* WARNING: Removing unreachable block (ram,0x0150ff2c) */
/* WARNING: Removing unreachable block (ram,0x0150ff38) */
/* WARNING: Removing unreachable block (ram,0x0150ff4c) */
/* WARNING: Removing unreachable block (ram,0x0150ff58) */
/* WARNING: Removing unreachable block (ram,0x0150ff60) */
/* WARNING: Removing unreachable block (ram,0x0150ff64) */
/* WARNING: Removing unreachable block (ram,0x0150ff94) */
/* WARNING: Removing unreachable block (ram,0x0150ffa8) */
/* WARNING: Removing unreachable block (ram,0x0150ffb4) */
/* WARNING: Removing unreachable block (ram,0x0150ffbc) */
/* WARNING: Removing unreachable block (ram,0x0150ffc0) */
/* WARNING: Removing unreachable block (ram,0x0150ffcc) */
/* WARNING: Removing unreachable block (ram,0x0150ffe0) */
/* WARNING: Removing unreachable block (ram,0x0150ffec) */
/* WARNING: Removing unreachable block (ram,0x0150fff4) */
/* WARNING: Removing unreachable block (ram,0x0150fff8) */
/* WARNING: Removing unreachable block (ram,0x01510020) */
/* WARNING: Removing unreachable block (ram,0x01510034) */
/* WARNING: Removing unreachable block (ram,0x01510040) */
/* WARNING: Removing unreachable block (ram,0x01510048) */
/* WARNING: Removing unreachable block (ram,0x0151004c) */
/* WARNING: Removing unreachable block (ram,0x01510150) */
/* WARNING: Removing unreachable block (ram,0x01510054) */
/* WARNING: Removing unreachable block (ram,0x01510058) */
/* WARNING: Removing unreachable block (ram,0x01510074) */
/* WARNING: Removing unreachable block (ram,0x015100a0) */
/* WARNING: Removing unreachable block (ram,0x015100d0) */
/* WARNING: Removing unreachable block (ram,0x015100e4) */
/* WARNING: Removing unreachable block (ram,0x015100f0) */
/* WARNING: Removing unreachable block (ram,0x015100f8) */
/* WARNING: Removing unreachable block (ram,0x015100fc) */
/* WARNING: Removing unreachable block (ram,0x01510314) */
/* WARNING: Removing unreachable block (ram,0x01510320) */
/* WARNING: Removing unreachable block (ram,0x01510380) */
/* WARNING: Removing unreachable block (ram,0x015103c8) */
/* WARNING: Removing unreachable block (ram,0x015103d0) */
/* WARNING: Removing unreachable block (ram,0x01510430) */
/* WARNING: Removing unreachable block (ram,0x01510460) */
/* WARNING: Removing unreachable block (ram,0x01510478) */
/* WARNING: Removing unreachable block (ram,0x0151048c) */
/* WARNING: Removing unreachable block (ram,0x015104a4) */
/* WARNING: Removing unreachable block (ram,0x015104b0) */
/* WARNING: Removing unreachable block (ram,0x015104b8) */
/* WARNING: Removing unreachable block (ram,0x015104c8) */
/* WARNING: Removing unreachable block (ram,0x015104cc) */
/* WARNING: Removing unreachable block (ram,0x015104d8) */
/* WARNING: Removing unreachable block (ram,0x015104f4) */
/* WARNING: Removing unreachable block (ram,0x01510500) */
/* WARNING: Removing unreachable block (ram,0x0151051c) */
/* WARNING: Removing unreachable block (ram,0x0151052c) */
/* WARNING: Removing unreachable block (ram,0x0151053c) */
/* WARNING: Removing unreachable block (ram,0x01510554) */
/* WARNING: Removing unreachable block (ram,0x01510734) */
/* WARNING: Removing unreachable block (ram,0x0151056c) */
/* WARNING: Removing unreachable block (ram,0x01510574) */
/* WARNING: Removing unreachable block (ram,0x01510598) */
/* WARNING: Removing unreachable block (ram,0x015105a8) */
/* WARNING: Removing unreachable block (ram,0x015105dc) */
/* WARNING: Removing unreachable block (ram,0x015105e8) */
/* WARNING: Removing unreachable block (ram,0x015105f0) */
/* WARNING: Removing unreachable block (ram,0x01510614) */
/* WARNING: Removing unreachable block (ram,0x01510620) */
/* WARNING: Removing unreachable block (ram,0x01510680) */
/* WARNING: Removing unreachable block (ram,0x015106cc) */
/* WARNING: Removing unreachable block (ram,0x01510700) */
/* WARNING: Removing unreachable block (ram,0x01510714) */
/* WARNING: Removing unreachable block (ram,0x01510738) */
/* WARNING: Removing unreachable block (ram,0x01510754) */
/* WARNING: Removing unreachable block (ram,0x01510760) */
/* WARNING: Removing unreachable block (ram,0x0151087c) */
/* WARNING: Removing unreachable block (ram,0x01510880) */
/* WARNING: Removing unreachable block (ram,0x01510788) */
/* WARNING: Removing unreachable block (ram,0x015107a4) */
/* WARNING: Removing unreachable block (ram,0x0151084c) */

void Atlas_Geometry_TrackBehaviourImproved__OnCalculate(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  if ((bRam0000000003eb4d69 & 1) == 0) {
    func_0x00f78a20(0x3d53580);
    func_0x00f78a20(0x3d1f8a0);
    func_0x00f78a20(0x3d3c450);
    func_0x00f78a20(0x3d3dcc8);
    func_0x00f78a20(0x3d3dcc0);
    func_0x00f78a20(0x3d3c448);
    func_0x00f78a20(0x3d3dcd8);
    func_0x00f78a20(0x3d3c458);
    func_0x00f78a20(0x3d3c460);
    func_0x00f78a20(0x3d1df00);
    func_0x00f78a20(0x3d1e390);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d1f2a0);
    func_0x00f78a20(0x3d1f3f8);
    func_0x00f78a20(0x3d25390);
    bRam0000000003eb4d69 = 1;
  }
  if ((bRam0000000003eb4d70 & 1) == 0) {
    func_0x00f78a20(0x3d3dd00);
    func_0x00f78a20(0x3d3dd08);
    func_0x00f78a20(0x3d3dd10);
    bRam0000000003eb4d70 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    iVar1 = *(int *)(lVar3 + 0x18);
    if (iVar1 < 1) goto code_r0x01510950;
    uVar2 = 0;
    do {
      if (*(uint *)(lVar3 + 0x18) <= uVar2) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0x10) + (long)(int)uVar2 * 0x10 + 0x20);
      if ((lVar3 == 0) || (*(long *)(param_1 + 0x28) == 0)) break;
      /*System.Collections.Generic.List<TrackEditorUpdatableBehaviour.Dependency>$$set_Item*/ func_0x025b57b8(*(long *)(param_1 + 0x28),uVar2,lVar3,*(undefined8 *)(lVar3 + 0x20),
                      uRam0000000003d3dd10);
      if (iVar1 - 1U == uVar2) goto code_r0x01510950;
      lVar3 = *(long *)(param_1 + 0x28);
      uVar2 = uVar2 + 1;
    } while (lVar3 != 0);
  }
  func_0x00f78af4();
code_r0x01510950:
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x18);
  return;
}



// ============================================================
// RVA: 0x151096c | Atlas.Geometry.TrackBehaviourImproved.TryGetClosestPoint
// ============================================================

bool Atlas_Geometry_TrackBehaviourImproved__TryGetClosestPoint
               (long param_1,undefined8 *param_2,undefined4 *param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_3 = 0;
  }
  else {
    Atlas_Geometry_Track__TryGetClosestPoint(lVar1);
  }
  return lVar1 != 0;
}



// ============================================================
// RVA: 0x15109ac | Atlas.Geometry.TrackBehaviourImproved.TryGetClosestEndPoint
// ============================================================

bool Atlas_Geometry_TrackBehaviourImproved__TryGetClosestEndPoint
               (long param_1,undefined8 *param_2,undefined4 *param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_3 = 0;
  }
  else {
    Atlas_Geometry_Track__TryGetClosestEndPoint(lVar1);
  }
  return lVar1 != 0;
}



// ============================================================
// RVA: 0x15109ec | Atlas.Geometry.TrackBehaviourImproved.GetPolyLineCount
// ============================================================

undefined4 Atlas_Geometry_TrackBehaviourImproved__GetPolyLineCount(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar1 = 3;
  }
  return uVar1;
}



// ============================================================
// RVA: 0x1510a00 | Atlas.Geometry.TrackBehaviourImproved.TryGetPolyLine
// ============================================================

undefined8
Atlas_Geometry_TrackBehaviourImproved__TryGetPolyLine(long param_1,uint param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x30) != 0 && param_2 < 5) {
                    /* WARNING: Could not recover jumptable at 0x01510a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&UNK_01510a30 + (ulong)(byte)(&UNK_033f86d0)[param_2] * 4))();
    return uVar1;
  }
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  return 0;
}



// ============================================================
// RVA: 0x1510aac | Atlas.Geometry.TrackBehaviourImproved.OnDrawGizmos
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_Geometry_TrackBehaviourImproved__OnDrawGizmos
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  undefined4 *puVar8;
  ulong uVar9;
  undefined8 unaff_x21;
  ulong unaff_x22;
  ulong uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  
  lVar2 = param_4;
  if ((bRam0000000003eb4d6a & 1) == 0) {
    func_0x00f78a20(0x3d53580);
    lVar2 = func_0x00f78a20(0x3d23990);
    bRam0000000003eb4d6a = 1;
  }
  if (*(long *)(param_4 + 0x30) == 0) {
    return lVar2;
  }
  lVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_4,0);
  uVar3 = unaff_x21;
  if (lVar2 != 0) {
    uVar3 = /*UnityEngine.Transform$$get_childCount*/ func_0x03276f9c(lVar2,0);
    if ((int)(uint)uVar3 < 1) {
LAB_01510c14:
      uVar9 = 0xffffffff;
      uVar3 = unaff_x21;
    }
    else {
      uVar10 = 0;
      unaff_x22 = 0;
      uVar9 = 0xffffffff;
      do {
        lVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_4,0);
        if ((lVar2 == 0) || (lVar2 = /*UnityEngine.Transform$$GetChild*/ func_0x03277648(lVar2,unaff_x22,0), lVar2 == 0))
        goto LAB_01510c3c;
        lVar2 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar2,uRam0000000003d53580);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar2,0,0);
        if ((uVar4 & 1) == 0) {
          if (lVar2 == 0) goto LAB_01510c3c;
          uVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar2,0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar1 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar5,0,0);
          if ((iVar1 != 0) && (iVar1 = (int)uVar9, uVar9 = uVar10, unaff_x21 = uVar3, -1 < iVar1))
          goto LAB_01510c14;
          uVar10 = (ulong)((int)uVar10 + 1);
        }
        uVar6 = (int)unaff_x22 + 1;
        unaff_x22 = (ulong)uVar6;
      } while ((uint)uVar3 != uVar6);
    }
    lVar2 = *(long *)(param_4 + 0x30);
    if (lVar2 != 0) {
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      uVar6 = (uint)uVar9;
      if (((int)uVar6 < 0) || (*(int *)(lVar2 + 0x18) + -1 <= (int)uVar6)) {
        uVar5 = 0xffffffff;
        uVar3 = 0xffffffff;
LAB_0150f84c:
        uVar11 = /*UnityEngine.Color$$get_cyan*/ func_0x032235ec(0);
        uStack_88 = *(undefined8 *)(lVar2 + 0x30);
        uStack_90 = *(undefined8 *)(lVar2 + 0x28);
        uStack_80 = *(undefined8 *)(lVar2 + 0x38);
        uVar12 = 0x3f000000;
        uVar14 = param_2;
        uVar15 = param_3;
        Atlas_Geometry_PolyLine__DrawGizmosLines(uVar11,&uStack_90,0);
        uStack_88 = *(undefined8 *)(lVar2 + 0x30);
        uStack_90 = *(undefined8 *)(lVar2 + 0x28);
        uStack_80 = *(undefined8 *)(lVar2 + 0x38);
        uVar16 = /*UnityEngine.Color$$get_cyan*/ func_0x032235ec(0);
        /*UnityEngine.Color$$get_green*/ func_0x03223580(0);
        uVar13 = _UNK_033f83fc;
        Atlas_Geometry_PolyLine__DrawGizmosPoints
                  (_UNK_033f83fc,uVar16,uVar14,uVar15,uVar12,&uStack_90,uVar3,uVar5,0);
        Atlas_Geometry_PolyLine__DrawGizmosLines(uVar11,param_2,param_3,0x3f000000,lVar2 + 0x80,0);
        uVar14 = uVar11;
        uVar15 = param_2;
        uVar16 = param_3;
        Atlas_Geometry_PolyLine__DrawGizmosPoints
                  (uVar13,uVar11,param_2,param_3,0x3f000000,lVar2 + 0x80,0);
        /*UnityEngine.Color$$get_cyan*/ func_0x032235ec(0);
        Atlas_Geometry_PolyLine__DrawGizmosLines(lVar2 + 0xa8,0);
        uVar12 = /*UnityEngine.Color$$get_cyan*/ func_0x032235ec(0);
        Atlas_Geometry_PolyLine__DrawGizmosPoints(uVar13,uVar12,uVar14,uVar15,uVar16,lVar2 + 0xa8,0)
        ;
        /*UnityEngine.Color$$get_cyan*/ func_0x032235ec(0);
        Atlas_Geometry_PolyLine__DrawGizmosLines(lVar2 + 0xe8,0);
        uVar16 = /*UnityEngine.Color$$get_cyan*/ func_0x032235ec(0);
        Atlas_Geometry_PolyLine__DrawGizmosPoints(uVar13,uVar16,uVar12,uVar14,uVar15,lVar2 + 0xe8,0)
        ;
        /*UnityEngine.Color$$get_cyan*/ func_0x032235ec(0);
        Atlas_Geometry_PolyLine__DrawGizmosLines(lVar2 + 0x100,0);
        lVar2 = Atlas_Geometry_PolyLine__DrawGizmosPoints
                          (uVar13,uVar11,param_2,param_3,0x3f000000,lVar2 + 0x100,0);
        return lVar2;
      }
      lVar7 = *(long *)(lVar2 + 0x10);
      if (lVar7 != 0) {
        if ((uVar6 < *(uint *)(lVar7 + 0x18)) && (uVar6 + 1 < *(uint *)(lVar7 + 0x18))) {
          puVar8 = (undefined4 *)(lVar7 + 0x20 + uVar9 * 0x24);
          param_2 = puVar8[1];
          param_3 = puVar8[2];
          uVar13 = *puVar8;
          puVar8 = (undefined4 *)(lVar7 + 0x20 + (ulong)(uVar6 + 1) * 0x24);
          uVar14 = *puVar8;
          uVar15 = puVar8[1];
          uVar16 = puVar8[2];
          uStack_88 = *(undefined8 *)(lVar2 + 0x30);
          uStack_90 = *(undefined8 *)(lVar2 + 0x28);
          uStack_80 = *(undefined8 *)(lVar2 + 0x38);
          uVar3 = Atlas_Geometry_PolyLine__GetClosestPointIndex(uVar13,param_2,param_3,&uStack_90,0)
          ;
          uStack_88 = *(undefined8 *)(lVar2 + 0x30);
          uStack_90 = *(undefined8 *)(lVar2 + 0x28);
          uStack_80 = *(undefined8 *)(lVar2 + 0x38);
          uVar5 = Atlas_Geometry_PolyLine__GetClosestPointIndex(uVar14,uVar15,uVar16,&uStack_90,0);
          /*UnityEngine.Color$$get_green*/ func_0x03223580(0);
          /*UnityEngine.Gizmos$$set_color*/ func_0x0322fbcc(0);
          /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(uVar13,0);
          /*UnityEngine.Gizmos$$DrawSphere*/ func_0x0322f8e8(0);
          goto LAB_0150f84c;
        }
        uVar3 = func_0x00f78b24();
        func_0x00f78ac0(uVar3,0);
      }
      lVar2 = func_0x00f78af4();
      return *(long *)(lVar2 + 0x30);
    }
  }
LAB_01510c3c:
  lVar2 = func_0x00f78af4();
  *(undefined8 *)(lVar2 + 0x38) = _UNK_033f86f8;
  *(undefined4 *)(lVar2 + 0x40) = 0x41b80000;
  *(undefined4 *)(lVar2 + 0x48) = 0x3f1eb852;
  *(undefined8 *)(lVar2 + 0x58) = 0x3f4ccccd3f4ccccd;
  *(undefined4 *)(lVar2 + 0x60) = 10;
  *(undefined8 *)(lVar2 + 0x68) = 0x27113f939581;
  uStack_80 = unaff_x22;
  uStack_78 = uVar3;
  if ((bRam0000000003eb4d72 & 1) == 0) {
    func_0x00f78a20(0x3d3dce0,0);
    func_0x00f78a20(0x3d1e398);
    bRam0000000003eb4d72 = 1;
  }
  uVar3 = func_0x00f78aec(/*System.Collections.Generic.List<TrackEditorUpdatableBehaviour.Dependency>_TypeInfo*/ uRam0000000003d1e398);
  /*System.Collections.Generic.List<TrackEditorUpdatableBehaviour.Dependency>$$.ctor*/ func_0x025b4e4c(uVar3,uRam0000000003d3dce0);
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
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
// RVA: 0x1510c40 | Atlas.Geometry.TrackBehaviourImproved..ctor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] Atlas_Geometry_TrackBehaviourImproved___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  *(undefined8 *)(param_1 + 0x38) = _UNK_033f86f8;
  *(undefined4 *)(param_1 + 0x40) = 0x41b80000;
  *(undefined4 *)(param_1 + 0x48) = 0x3f1eb852;
  *(undefined8 *)(param_1 + 0x58) = 0x3f4ccccd3f4ccccd;
  *(undefined4 *)(param_1 + 0x60) = 10;
  *(undefined8 *)(param_1 + 0x68) = 0x27113f939581;
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



