// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Geometry.BarrierBehaviour

// ============================================================
// RVA: 0x14727c8 | Atlas.Geometry.BarrierBehaviour.OnCalculate
// ============================================================

/* WARNING: Possible PIC construction at 0x01472ab8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01472ae8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01472abc) */
/* WARNING: Removing unreachable block (ram,0x01472aec) */
/* WARNING: Removing unreachable block (ram,0x01472b0c) */
/* WARNING: Removing unreachable block (ram,0x01472b18) */
/* WARNING: Removing unreachable block (ram,0x01472b5c) */
/* WARNING: Removing unreachable block (ram,0x01472b68) */
/* WARNING: Removing unreachable block (ram,0x01472b7c) */
/* WARNING: Removing unreachable block (ram,0x01472b80) */
/* WARNING: Removing unreachable block (ram,0x01472b8c) */
/* WARNING: Removing unreachable block (ram,0x01472b90) */
/* WARNING: Removing unreachable block (ram,0x01472bb0) */
/* WARNING: Removing unreachable block (ram,0x01472c78) */
/* WARNING: Removing unreachable block (ram,0x01472c84) */
/* WARNING: Removing unreachable block (ram,0x01472c6c) */
/* WARNING: Removing unreachable block (ram,0x01472c90) */
/* WARNING: Removing unreachable block (ram,0x01472ca4) */
/* WARNING: Removing unreachable block (ram,0x01472ccc) */
/* WARNING: Removing unreachable block (ram,0x01472cd4) */
/* WARNING: Removing unreachable block (ram,0x01472cdc) */
/* WARNING: Removing unreachable block (ram,0x01472cfc) */
/* WARNING: Removing unreachable block (ram,0x01472d10) */
/* WARNING: Removing unreachable block (ram,0x01472d1c) */
/* WARNING: Removing unreachable block (ram,0x01472d24) */
/* WARNING: Removing unreachable block (ram,0x01472d28) */
/* WARNING: Removing unreachable block (ram,0x01472d50) */
/* WARNING: Removing unreachable block (ram,0x01472d54) */
/* WARNING: Removing unreachable block (ram,0x01472d60) */
/* WARNING: Removing unreachable block (ram,0x01472d6c) */
/* WARNING: Removing unreachable block (ram,0x01472d80) */
/* WARNING: Removing unreachable block (ram,0x01472d8c) */
/* WARNING: Removing unreachable block (ram,0x01472f58) */
/* WARNING: Removing unreachable block (ram,0x01472f68) */
/* WARNING: Removing unreachable block (ram,0x01472d94) */
/* WARNING: Removing unreachable block (ram,0x01472d9c) */
/* WARNING: Removing unreachable block (ram,0x01472db0) */
/* WARNING: Removing unreachable block (ram,0x01472dbc) */
/* WARNING: Removing unreachable block (ram,0x01472dc4) */
/* WARNING: Removing unreachable block (ram,0x01472dc8) */
/* WARNING: Removing unreachable block (ram,0x01472e9c) */
/* WARNING: Removing unreachable block (ram,0x01472ea4) */
/* WARNING: Removing unreachable block (ram,0x01472ef8) */
/* WARNING: Removing unreachable block (ram,0x01472efc) */
/* WARNING: Removing unreachable block (ram,0x01472ee8) */
/* WARNING: Removing unreachable block (ram,0x01472f0c) */
/* WARNING: Removing unreachable block (ram,0x01472f1c) */
/* WARNING: Removing unreachable block (ram,0x01472f20) */
/* WARNING: Removing unreachable block (ram,0x01472e78) */
/* WARNING: Removing unreachable block (ram,0x01472e80) */
/* WARNING: Removing unreachable block (ram,0x01472e84) */
/* WARNING: Removing unreachable block (ram,0x01472f24) */
/* WARNING: Removing unreachable block (ram,0x01472e88) */
/* WARNING: Removing unreachable block (ram,0x01472e8c) */
/* WARNING: Removing unreachable block (ram,0x01472f28) */
/* WARNING: Removing unreachable block (ram,0x01472d58) */
/* WARNING: Removing unreachable block (ram,0x01472f34) */
/* WARNING: Removing unreachable block (ram,0x01472f54) */
/* WARNING: Removing unreachable block (ram,0x01472f6c) */
/* WARNING: Removing unreachable block (ram,0x01472f74) */
/* WARNING: Removing unreachable block (ram,0x01472f80) */
/* WARNING: Removing unreachable block (ram,0x01472fb0) */
/* WARNING: Removing unreachable block (ram,0x01472fd0) */
/* WARNING: Removing unreachable block (ram,0x01472fe4) */
/* WARNING: Removing unreachable block (ram,0x01472fec) */
/* WARNING: Removing unreachable block (ram,0x014730f4) */
/* WARNING: Removing unreachable block (ram,0x01473008) */
/* WARNING: Removing unreachable block (ram,0x01473014) */
/* WARNING: Removing unreachable block (ram,0x0147302c) */
/* WARNING: Removing unreachable block (ram,0x01473040) */
/* WARNING: Removing unreachable block (ram,0x01473048) */
/* WARNING: Removing unreachable block (ram,0x0147304c) */
/* WARNING: Removing unreachable block (ram,0x01473058) */
/* WARNING: Removing unreachable block (ram,0x01473070) */
/* WARNING: Removing unreachable block (ram,0x01473084) */
/* WARNING: Removing unreachable block (ram,0x0147308c) */
/* WARNING: Removing unreachable block (ram,0x01473090) */
/* WARNING: Removing unreachable block (ram,0x014730fc) */
/* WARNING: Removing unreachable block (ram,0x014738a4) */
/* WARNING: Removing unreachable block (ram,0x014738a8) */
/* WARNING: Removing unreachable block (ram,0x014738d0) */
/* WARNING: Removing unreachable block (ram,0x01473908) */
/* WARNING: Removing unreachable block (ram,0x014738d8) */
/* WARNING: Removing unreachable block (ram,0x01473900) */
/* WARNING: Removing unreachable block (ram,0x01473108) */
/* WARNING: Removing unreachable block (ram,0x01473128) */
/* WARNING: Removing unreachable block (ram,0x01473180) */
/* WARNING: Removing unreachable block (ram,0x014732d8) */
/* WARNING: Removing unreachable block (ram,0x014732ec) */
/* WARNING: Removing unreachable block (ram,0x01473318) */
/* WARNING: Removing unreachable block (ram,0x01473368) */
/* WARNING: Removing unreachable block (ram,0x01473390) */
/* WARNING: Removing unreachable block (ram,0x014733a8) */
/* WARNING: Removing unreachable block (ram,0x0147371c) */
/* WARNING: Removing unreachable block (ram,0x014733b0) */
/* WARNING: Removing unreachable block (ram,0x01473400) */
/* WARNING: Removing unreachable block (ram,0x01473408) */
/* WARNING: Removing unreachable block (ram,0x01473434) */
/* WARNING: Removing unreachable block (ram,0x0147343c) */
/* WARNING: Removing unreachable block (ram,0x01473440) */
/* WARNING: Removing unreachable block (ram,0x01473458) */
/* WARNING: Removing unreachable block (ram,0x01473724) */
/* WARNING: Removing unreachable block (ram,0x014734b0) */
/* WARNING: Removing unreachable block (ram,0x014734c0) */
/* WARNING: Removing unreachable block (ram,0x014734cc) */
/* WARNING: Removing unreachable block (ram,0x014734d4) */
/* WARNING: Removing unreachable block (ram,0x014734e4) */
/* WARNING: Removing unreachable block (ram,0x01473544) */
/* WARNING: Removing unreachable block (ram,0x01473554) */
/* WARNING: Removing unreachable block (ram,0x01473560) */
/* WARNING: Removing unreachable block (ram,0x0147356c) */
/* WARNING: Removing unreachable block (ram,0x01473578) */
/* WARNING: Removing unreachable block (ram,0x01473590) */
/* WARNING: Removing unreachable block (ram,0x01473598) */
/* WARNING: Removing unreachable block (ram,0x0147359c) */
/* WARNING: Removing unreachable block (ram,0x014735c8) */
/* WARNING: Removing unreachable block (ram,0x014735e0) */
/* WARNING: Removing unreachable block (ram,0x014735f4) */
/* WARNING: Removing unreachable block (ram,0x014735fc) */
/* WARNING: Removing unreachable block (ram,0x01473600) */
/* WARNING: Removing unreachable block (ram,0x01473718) */
/* WARNING: Removing unreachable block (ram,0x01473728) */
/* WARNING: Removing unreachable block (ram,0x0147376c) */
/* WARNING: Removing unreachable block (ram,0x0147378c) */
/* WARNING: Removing unreachable block (ram,0x014737a8) */
/* WARNING: Removing unreachable block (ram,0x014737b4) */
/* WARNING: Removing unreachable block (ram,0x014737bc) */
/* WARNING: Removing unreachable block (ram,0x014737c0) */
/* WARNING: Removing unreachable block (ram,0x014737d4) */
/* WARNING: Removing unreachable block (ram,0x014737d8) */
/* WARNING: Removing unreachable block (ram,0x014737e8) */
/* WARNING: Removing unreachable block (ram,0x014737f4) */
/* WARNING: Removing unreachable block (ram,0x014737fc) */
/* WARNING: Removing unreachable block (ram,0x01473800) */
/* WARNING: Removing unreachable block (ram,0x01473814) */
/* WARNING: Removing unreachable block (ram,0x01473818) */
/* WARNING: Removing unreachable block (ram,0x01473828) */
/* WARNING: Removing unreachable block (ram,0x01473194) */
/* WARNING: Removing unreachable block (ram,0x01473884) */
/* WARNING: Removing unreachable block (ram,0x01473198) */
/* WARNING: Removing unreachable block (ram,0x01473894) */
/* WARNING: Removing unreachable block (ram,0x014731a8) */
/* WARNING: Removing unreachable block (ram,0x01473874) */
/* WARNING: Removing unreachable block (ram,0x014731b0) */
/* WARNING: Removing unreachable block (ram,0x0147388c) */
/* WARNING: Removing unreachable block (ram,0x014731b4) */
/* WARNING: Removing unreachable block (ram,0x0147322c) */
/* WARNING: Removing unreachable block (ram,0x0147323c) */
/* WARNING: Removing unreachable block (ram,0x01473248) */
/* WARNING: Removing unreachable block (ram,0x01473250) */
/* WARNING: Removing unreachable block (ram,0x01473258) */
/* WARNING: Removing unreachable block (ram,0x01473268) */
/* WARNING: Removing unreachable block (ram,0x0147326c) */
/* WARNING: Removing unreachable block (ram,0x01473274) */
/* WARNING: Removing unreachable block (ram,0x01473278) */
/* WARNING: Removing unreachable block (ram,0x0147327c) */
/* WARNING: Removing unreachable block (ram,0x014732cc) */
/* WARNING: Removing unreachable block (ram,0x014730f0) */

ulong Atlas_Geometry_BarrierBehaviour__OnCalculate(long param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  
  if ((bRam0000000003eb487d & 1) == 0) {
    func_0x00f78a20(0x3d534f8);
    func_0x00f78a20(0x3d53500);
    func_0x00f78a20(0x3d332b8);
    func_0x00f78a20(0x3d332c0);
    func_0x00f78a20(0x3d332c8);
    func_0x00f78a20(0x3d3cd08);
    func_0x00f78a20(0x3d3cd10);
    func_0x00f78a20(0x3d3acc8);
    func_0x00f78a20(0x3d3cae0);
    func_0x00f78a20(0x3d3cd00);
    func_0x00f78a20(0x3d3ac78);
    func_0x00f78a20(0x3d3cb18);
    func_0x00f78a20(0x3d3cb40);
    func_0x00f78a20(0x3d3cd18);
    func_0x00f78a20(0x3d3cd20);
    func_0x00f78a20(0x3d3cb48);
    func_0x00f78a20(0x3d1e030);
    func_0x00f78a20(0x3d1daa8);
    func_0x00f78a20(0x3d1e028);
    func_0x00f78a20(0x3d1e078);
    func_0x00f78a20(0x3d232d0);
    func_0x00f78a20(0x3d23388);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d1f3d8);
    bRam0000000003eb487d = 1;
  }
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  /*Atlas.Geometry.TrackEditorUpdatableBehaviour$$UpdatedToLatestAllRevision*/ func_0x0151088c(param_1,0);
  /*Atlas.Geometry.TrackEditorUpdatableBehaviour$$ResetTransform*/ func_0x01510fac(param_1,0);
  uVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_1,0);
  /*Atlas.Geometry.TrackEditorUtils$$UpdateRenderable*/ func_0x015115c4(uVar3,0,0,1,1,0);
  lVar4 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(param_1,uRam0000000003d53500);
  lVar5 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(param_1,uRam0000000003d534f8);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar4,0,0);
  if (iVar2 != 0) {
    if (lVar4 == 0) goto LAB_01473868;
    /*UnityEngine.MeshFilter$$set_mesh*/ func_0x032476ec(lVar4,0,0);
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar5,0,0);
  if (iVar2 != 0) {
    if (lVar5 == 0) goto LAB_01473868;
    /*UnityEngine.MeshCollider$$set_sharedMesh*/ func_0x0329f108(lVar5,0,0);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar6 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar3,0,0);
  if ((uVar6 & 1) == 0) {
    plVar7 = *(long **)(param_1 + 0x50);
    if (plVar7 == (long *)0x0) {
LAB_01473868:
      func_0x00f78af4();
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x14738a4);
      (*pcVar1)();
    }
    uVar6 = (**(code **)(*plVar7 + 0x218))
                      (plVar7,*(undefined4 *)(param_1 + 0x58),&uStack_c0,
                       *(undefined8 *)(*plVar7 + 0x220));
    if (((int)uVar6 != 0) && (0 < *(int *)(param_1 + 0x60))) {
      lVar4 = *(long *)(param_1 + 0x30);
      if ((bRam0000000003eb4884 & 1) == 0) {
        func_0x00f78a20(0x3d26a88);
        func_0x00f78a20(0x3d1f6b0);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4884 = 1;
      }
      if (lVar4 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (ulong)*(uint *)(lVar4 + 0x18);
      }
      uVar8 = func_0x00f78aec(/*Atlas.Geometry.BarrierBehaviour.BarrierSectionMeshes_TypeInfo*/ uRam0000000003d26a88);
      /*Atlas.Geometry.BarrierBehaviour.BarrierSectionMeshes$$.ctor*/ func_0x0154714c(uVar8,0);
      uVar3 = func_0x00f78a34(/*Atlas.Geometry.BarrierBehaviour.MeshData[]_TypeInfo*/ uRam0000000003d1f6b0,uVar6);
      if (uVar8 == 0) goto code_r0x01473ae8;
      *(undefined8 *)(uVar8 + 0x20) = uVar3;
      if ((int)uVar6 < 1) {
        uVar11 = 0;
      }
      else {
        if (lVar4 == 0) goto code_r0x01473ae8;
        uVar12 = 0;
        uVar11 = 0;
        do {
          if (*(uint *)(lVar4 + 0x18) <= uVar12) {
code_r0x01473adc:
            uVar3 = func_0x00f78b24();
            do {
              func_0x00f78ac0(uVar3,0);
code_r0x01473ae8:
              func_0x00f78af4();
code_r0x01473aec:
              uVar3 = func_0x00f78b14();
            } while( true );
          }
          uVar3 = *(undefined8 *)(lVar4 + 0x20 + uVar12 * 8);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar9 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar3,0,0);
          if ((uVar9 & 1) == 0) {
            plVar7 = *(long **)(uVar8 + 0x20);
            lVar5 = /*Atlas.Geometry.BarrierBehaviour$$CreateMeshData*/ func_0x01474a68(param_1,uVar3,1);
            if (plVar7 == (long *)0x0) goto code_r0x01473ae8;
            if ((lVar5 != 0) &&
               (lVar10 = func_0x00f78adc(lVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0))
            goto code_r0x01473aec;
            if (*(uint *)(plVar7 + 3) <= uVar11) goto code_r0x01473adc;
            plVar7[(long)(int)uVar11 + 4] = lVar5;
            uVar11 = uVar11 + 1;
          }
          uVar12 = uVar12 + 1;
        } while (uVar6 != uVar12);
      }
      *(uint *)(uVar8 + 0x14) = uVar11;
      *(undefined4 *)(uVar8 + 0x18) = 0;
      *(undefined1 *)(uVar8 + 0x10) = 1;
      uStack_248 = 0;
      uStack_240 = 0;
      uStack_238 = 0;
      /*Atlas.Maths.NiceRandomSelection$$Init*/ func_0x014b0d28(&uStack_248,uVar11 - 1,*(undefined4 *)(param_1 + 0x90),0);
      *(undefined8 *)(uVar8 + 0x30) = uStack_240;
      *(undefined8 *)(uVar8 + 0x28) = uStack_248;
      *(undefined8 *)(uVar8 + 0x38) = uStack_238;
      return uVar8;
    }
  }
  return uVar6;
}



// ============================================================
// RVA: 0x147390c | Atlas.Geometry.BarrierBehaviour.CreateMeshSection
// ============================================================

long Atlas_Geometry_BarrierBehaviour__CreateMeshSection
               (long param_1,long param_2,undefined4 param_3,undefined1 param_4)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000003eb4884 & 1) == 0) {
    func_0x00f78a20(0x3d26a88);
    func_0x00f78a20(0x3d1f6b0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4884 = 1;
  }
  if (param_2 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (ulong)*(uint *)(param_2 + 0x18);
  }
  lVar1 = func_0x00f78aec(/*Atlas.Geometry.BarrierBehaviour.BarrierSectionMeshes_TypeInfo*/ uRam0000000003d26a88);
  /*Atlas.Geometry.BarrierBehaviour.BarrierSectionMeshes$$.ctor*/ func_0x0154714c(lVar1,0);
  uVar2 = func_0x00f78a34(/*Atlas.Geometry.BarrierBehaviour.MeshData[]_TypeInfo*/ uRam0000000003d1f6b0,uVar7);
  if (lVar1 == 0) goto code_r0x01473ae8;
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  if ((int)uVar7 < 1) {
    uVar8 = 0;
  }
  else {
    if (param_2 == 0) goto code_r0x01473ae8;
    uVar9 = 0;
    uVar8 = 0;
    do {
      if (*(uint *)(param_2 + 0x18) <= uVar9) {
code_r0x01473adc:
        uVar2 = func_0x00f78b24();
        do {
          func_0x00f78ac0(uVar2,0);
code_r0x01473ae8:
          func_0x00f78af4();
code_r0x01473aec:
          uVar2 = func_0x00f78b14();
        } while( true );
      }
      uVar2 = *(undefined8 *)(param_2 + 0x20 + uVar9 * 8);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar2,0,0);
      if ((uVar3 & 1) == 0) {
        plVar6 = *(long **)(lVar1 + 0x20);
        lVar4 = /*Atlas.Geometry.BarrierBehaviour$$CreateMeshData*/ func_0x01474a68(param_1,uVar2,param_3);
        if (plVar6 == (long *)0x0) goto code_r0x01473ae8;
        if ((lVar4 != 0) &&
           (lVar5 = func_0x00f78adc(lVar4,*(undefined8 *)(*plVar6 + 0x40)), lVar5 == 0))
        goto code_r0x01473aec;
        if (*(uint *)(plVar6 + 3) <= uVar8) goto code_r0x01473adc;
        plVar6[(long)(int)uVar8 + 4] = lVar4;
        uVar8 = uVar8 + 1;
      }
      uVar9 = uVar9 + 1;
    } while (uVar7 != uVar9);
  }
  *(uint *)(lVar1 + 0x14) = uVar8;
  *(undefined4 *)(lVar1 + 0x18) = 0;
  *(undefined1 *)(lVar1 + 0x10) = param_4;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  /*Atlas.Maths.NiceRandomSelection$$Init*/ func_0x014b0d28(&uStack_78,uVar8 - 1,*(undefined4 *)(param_1 + 0x90),0);
  *(undefined8 *)(lVar1 + 0x30) = uStack_70;
  *(undefined8 *)(lVar1 + 0x28) = uStack_78;
  *(undefined8 *)(lVar1 + 0x38) = uStack_68;
  return lVar1;
}



// ============================================================
// RVA: 0x1473af4 | Atlas.Geometry.BarrierBehaviour.GetNextMeshData
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1473b8c | Atlas.Geometry.BarrierBehaviour.AddInstance
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1474670 | Atlas.Geometry.BarrierBehaviour.ToVectorArray
// ============================================================

/* WARNING: Possible PIC construction at 0x01474938: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01474968: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01474a00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01474a20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01474a40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01474efc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01474a24) */
/* WARNING: Removing unreachable block (ram,0x01474a04) */
/* WARNING: Removing unreachable block (ram,0x0147496c) */
/* WARNING: Removing unreachable block (ram,0x0147493c) */
/* WARNING: Removing unreachable block (ram,0x01474a44) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
Atlas_Geometry_BarrierBehaviour__ToVectorArray
          (undefined1 param_1 [16],float param_2,float param_3,float param_4,float param_5,
          float param_6,float param_7,float param_8,undefined8 param_9,long param_10,
          undefined8 *param_11,undefined8 *param_12,undefined8 *param_13)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  long extraout_x1;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  float *pfVar15;
  float *pfVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  code *pcVar22;
  float unaff_w24;
  long lVar23;
  undefined8 *******pppppppuVar24;
  undefined *puVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  ulong extraout_d0;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  undefined4 uVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auStack_230 [8];
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  long lStack_218;
  long lStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  undefined8 ******ppppppuStack_140;
  undefined *puStack_138;
  undefined8 *****pppppuStack_100;
  undefined *puStack_f8;
  float fStack_e8;
  float fStack_e4;
  undefined8 ****ppppuStack_90;
  undefined *puStack_88;
  undefined8 **ppuStack_50;
  undefined *puStack_48;
  
  if ((bRam0000000003eb4880 & 1) == 0) {
    func_0x00f78a20(0x3d3cb40);
    func_0x00f78a20(0x3d3cb48);
    func_0x00f78a20(0x3d1f5e0);
    bRam0000000003eb4880 = 1;
  }
  if (param_10 != 0) {
    uVar17 = *(uint *)(param_10 + 0x18);
    puVar4 = (undefined8 *)func_0x00f78a34(/*UnityEngine.Vector3[]_TypeInfo*/ uRam0000000003d1f5e0,(ulong)uVar17);
    if (0 < (int)uVar17) {
      uVar18 = 0;
      lVar20 = 0x20;
      do {
        if (*(uint *)(param_10 + 0x18) <= uVar18) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        puVar8 = (undefined4 *)(*(long *)(param_10 + 0x10) + lVar20);
        param_2 = (float)puVar8[1];
        param_3 = (float)puVar8[2];
        uVar26 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*puVar8,0);
        if (puVar4 == (undefined8 *)0x0) goto LAB_01474760;
        if (*(uint *)(puVar4 + 3) <= uVar18) goto LAB_01474764;
        puVar8 = (undefined4 *)((long)puVar4 + lVar20);
        *puVar8 = uVar26;
        puVar8[1] = param_2;
        puVar8[2] = param_3;
        uVar18 = uVar18 + 1;
        lVar20 = lVar20 + 0xc;
      } while (uVar17 != uVar18);
    }
    return puVar4;
  }
LAB_01474760:
  func_0x00f78af4();
LAB_01474764:
  uVar5 = func_0x00f78b24();
  func_0x00f78ac0(uVar5,0);
  puStack_48 = &Atlas_Geometry_BarrierBehaviour__ToVectorArray;
  ppuStack_50 = (undefined8 **)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4881 & 1) == 0) {
    func_0x00f78a20(0x3d3cb08);
    func_0x00f78a20(0x3d3cb10);
    func_0x00f78a20(0x3d1f5d8);
    bRam0000000003eb4881 = 1;
  }
  if (extraout_x1 != 0) {
    uVar17 = *(uint *)(extraout_x1 + 0x18);
    puVar4 = (undefined8 *)func_0x00f78a34(/*UnityEngine.Vector2[]_TypeInfo*/ uRam0000000003d1f5d8,(ulong)uVar17);
    if (0 < (int)uVar17) {
      uVar18 = 0;
      lVar20 = 0x20;
      do {
        if (*(uint *)(extraout_x1 + 0x18) <= uVar18) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        puVar8 = (undefined4 *)(*(long *)(extraout_x1 + 0x10) + lVar20);
        param_2 = (float)puVar8[1];
        uVar26 = /*Unity.Mathematics.float2$$op_Implicit*/ func_0x030c22c8(*puVar8,0);
        if (puVar4 == (undefined8 *)0x0) goto code_r0x01474858;
        if (*(uint *)(puVar4 + 3) <= uVar18) goto code_r0x0147485c;
        *(undefined4 *)((long)puVar4 + lVar20) = uVar26;
        ((undefined4 *)((long)puVar4 + lVar20))[1] = param_2;
        uVar18 = uVar18 + 1;
        lVar20 = lVar20 + 8;
      } while (uVar17 != uVar18);
    }
    return puVar4;
  }
code_r0x01474858:
  func_0x00f78af4();
code_r0x0147485c:
  uVar5 = func_0x00f78b24();
  puVar4 = (undefined8 *)func_0x00f78ac0(uVar5,0);
  puStack_88 = &Atlas_Geometry_BarrierBehaviour__AddCrossSectionVerts;
  fVar30 = (float)extraout_d0;
  fVar35 = param_2;
  fVar34 = param_3;
  ppppuStack_90 = (undefined8 ****)&ppuStack_50;
  if ((bRam0000000003eb487e & 1) == 0) {
    fStack_e4 = param_4;
    func_0x00f78a20(0x3d3cb28);
    bRam0000000003eb487e = 1;
    param_4 = fStack_e4;
  }
  pppppuStack_100 = &ppppuStack_90;
  if (puVar4 == (undefined8 *)0x0) {
    auVar37 = func_0x00f78af4();
    lVar20 = auVar37._0_8_;
    puVar2 = &stack0xfffffffffffffed0;
    puStack_f8 = &Atlas_Geometry_BarrierBehaviour__AddQuad;
    puVar4 = param_11;
    if ((bRam0000000003eb487f & 1) == 0) {
      func_0x00f78a20(0x3d3ac90);
      bRam0000000003eb487f = 1;
    }
    if (param_13 == (undefined8 *)0x0) {
      auVar37 = func_0x00f78af4();
      lVar19 = auVar37._8_8_;
      lStack_218 = auVar37._0_8_;
      puVar2 = auStack_230;
      puStack_138 = &Atlas_Geometry_BarrierBehaviour__CreateMeshData;
      pppppppuVar24 = &ppppppuStack_140;
      param_11 = (undefined8 *)0x3eb4000;
      uStack_1d0 = (ulong)(uint)param_7;
      uStack_1c8 = (ulong)(uint)param_3;
      uStack_1c0 = (ulong)(uint)param_6;
      uStack_1b8 = (ulong)(uint)param_2;
      uStack_1b0 = (ulong)(uint)param_5;
      uStack_1a8 = extraout_d0 & 0xffffffff;
      uStack_1a0 = (ulong)(uint)unaff_w24;
      uStack_198 = (ulong)(uint)param_8;
      ppppppuStack_140 = &pppppuStack_100;
      if ((bRam0000000003eb4883 & 1) == 0) {
        func_0x00f78a20(0x3d3ac90);
        func_0x00f78a20(0x3d3acc8);
        func_0x00f78a20(0x3d3ac78);
        func_0x00f78a20(0x3d1daa8);
        func_0x00f78a20(0x3d26a90);
        func_0x00f78a20(0x3d23990);
        func_0x00f78a20(0x3d1f3d8);
        func_0x00f78a20(0x3d1f690);
        func_0x00f78a20(0x3d1f698);
        bRam0000000003eb4883 = 1;
      }
      uStack_1f0 = 0;
      uStack_1e8 = 0;
      uStack_1e0 = 0;
      if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      puVar7 = (undefined8 *)0x3d26a90;
      puVar11 = (undefined8 *)0x3d26a90;
      iVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar19,0,0);
      if (iVar3 != 0) {
code_r0x01474b68:
        puVar4 = (undefined8 *)func_0x00f78aec(/*Atlas.Geometry.BarrierBehaviour.MeshData_TypeInfo*/ uRam0000000003d26a90);
        /*Atlas.Geometry.BarrierBehaviour.MeshData$$.ctor*/ func_0x01547154(puVar4,0);
        return puVar4;
      }
      if (*(char *)(lStack_218 + 0x8c) == '\0') {
        param_12 = puVar11;
        if (lVar19 != 0) goto code_r0x01474bac;
      }
      else {
        param_12 = puVar7;
        if (lVar19 != 0) {
          lVar20 = /*UnityEngine.Mesh$$get_uv2*/ func_0x03241fcc(lVar19,0);
          if (lVar20 == 0) goto code_r0x01474b68;
code_r0x01474bac:
          /*UnityEngine.Mesh$$get_bounds*/ func_0x03241090(&uStack_208,lVar19,0);
          uStack_1e8 = uStack_200;
          uStack_1f0 = uStack_208;
          uStack_1e0 = uStack_1f8;
          if (*(char *)(lStack_218 + 0x6c) != '\0') {
            fVar28 = (float)/*UnityEngine.Bounds$$get_min*/ func_0x0321b548(&uStack_1f0,0);
            fVar30 = fVar35;
            fVar27 = fVar34;
            fVar29 = (float)/*UnityEngine.Bounds$$get_max*/ func_0x0321b5b8(&uStack_1f0,0);
            /*UnityEngine.Bounds$$SetMinMax*/ func_0x0321b5d8(-fVar29,fVar35,fVar34,-fVar28,fVar30,fVar27,&uStack_1f0,0);
          }
          /*UnityEngine.Bounds$$get_extents*/ func_0x0321b3e4(&uStack_1f0,0);
          fVar35 = 0.0;
          fVar30 = fVar34;
          if ((int)puVar4 != 0) {
            /*UnityEngine.Bounds$$get_min*/ func_0x0321b548(&uStack_1f0,0);
            fVar35 = -fVar30;
          }
          puVar4 = (undefined8 *)/*UnityEngine.Mesh$$get_vertices*/ func_0x03241cdc(lVar19,0);
          param_11 = (undefined8 *)/*UnityEngine.Mesh$$get_normals*/ func_0x03241d98(lVar19,0);
          lVar20 = /*UnityEngine.Mesh$$get_uv*/ func_0x03241f10(lVar19,0);
          lStack_210 = /*UnityEngine.Mesh$$get_uv2*/ func_0x03241fcc(lVar19,0);
          lVar19 = /*UnityEngine.Mesh$$get_triangles*/ func_0x032447ec(lVar19,0);
          if (*(char *)(lStack_218 + 0x6c) == '\0') {
code_r0x01474d44:
            param_12 = puVar11;
            if (puVar4 != (undefined8 *)0x0) {
code_r0x01474d48:
              uVar18 = puVar4[3];
              puStack_220 = puVar4;
              puVar7 = (undefined8 *)func_0x00f78aec(/*Atlas.Geometry.BarrierBehaviour.MeshData_TypeInfo*/ uRam0000000003d26a90);
              /*Atlas.Geometry.BarrierBehaviour.MeshData$$.ctor*/ func_0x01547154(puVar7,0);
              uVar5 = func_0x00f78a34(/*Unity.Mathematics.float3[]_TypeInfo*/ uRam0000000003d1f698,uVar18);
              param_12 = (undefined8 *)0x3d1f698;
              if (puVar7 != (undefined8 *)0x0) {
                puVar7[2] = uVar5;
                uVar5 = func_0x00f78a34(/*Unity.Mathematics.float3[]_TypeInfo*/ uRam0000000003d1f698,uVar18);
                puVar7[3] = uVar5;
                uVar5 = func_0x00f78a34(/*Unity.Mathematics.float2[]_TypeInfo*/ uRam0000000003d1f690,uVar18);
                puVar7[4] = uVar5;
                uVar5 = func_0x00f78a34(/*float[]_TypeInfo*/ uRam0000000003d1f3d8,uVar18);
                puVar7[6] = uVar5;
                puVar7[7] = lVar19;
                *(float *)(puVar7 + 10) = fVar34 + fVar34;
                fVar27 = (float)/*UnityEngine.Bounds$$get_min*/ func_0x0321b548(&uStack_1f0,0);
                lVar19 = lStack_218;
                *(float *)((long)puVar7 + 0x54) = fVar27 - *(float *)(lStack_218 + 0x80);
                fVar27 = (float)/*UnityEngine.Bounds$$get_max*/ func_0x0321b5b8(&uStack_1f0,0);
                *(float *)(puVar7 + 0xb) = fVar27 + *(float *)(lVar19 + 0x84);
                if (*(char *)(lVar19 + 0x8c) != '\0') {
                  uVar5 = func_0x00f78a34(/*Unity.Mathematics.float2[]_TypeInfo*/ uRam0000000003d1f690,uVar18);
                  puVar7[5] = uVar5;
                }
                /*UnityEngine.Bounds$$get_min*/ func_0x0321b548(&uStack_1f0,0);
                fVar28 = fVar30;
                /*UnityEngine.Bounds$$get_max*/ func_0x0321b5b8(&uStack_1f0,0);
                param_12 = (undefined8 *)0x3d1daa8;
                param_13 = (undefined8 *)func_0x00f78aec(/*System.Collections.Generic.List<int>_TypeInfo*/ uRam0000000003d1daa8);
                puVar4 = (undefined8 *)0x3d3ac78;
                /*System.Collections.Generic.List<int>$$.ctor*/ func_0x023db018(param_13,uRam0000000003d3ac78);
                lVar19 = func_0x00f78aec(/*System.Collections.Generic.List<int>_TypeInfo*/ uRam0000000003d1daa8);
                /*System.Collections.Generic.List<int>$$.ctor*/ func_0x023db018(lVar19,uRam0000000003d3ac78);
                fVar27 = _UNK_033f8148;
                if (0 < (int)uVar18) {
                  param_12 = (undefined8 *)0x0;
                  uVar12 = 0;
                  puStack_228 = (undefined8 *)((uVar18 & 0xffffffff) * 0xc);
                  puVar4 = puStack_220 + 5;
                  lVar21 = 0x24;
                  do {
                    auVar37._8_8_ = lVar21;
                    auVar37._0_8_ = uVar12;
                    if (*(uint *)(puStack_220 + 3) <= uVar12) goto code_r0x014750c4;
                    pfVar15 = (float *)((long)puVar4 + (long)param_12);
                    fVar29 = pfVar15[-1];
                    fVar32 = *pfVar15;
                    uVar26 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(pfVar15[-2],0);
                    if (fVar32 - fVar30 <= fVar27) {
                      if (param_13 == (undefined8 *)0x0) goto code_r0x014750d0;
                      puVar25 = &UNK_01474f00;
                      goto code_r0x023dbccc;
                    }
                    if (fVar28 - fVar32 <= fVar27) {
                      if (lVar19 == 0) goto code_r0x014750d0;
                      /*System.Collections.Generic.List<int>$$Add*/ func_0x023dbccc(lVar19,uVar12,puRam0000000003d3ac90);
                    }
                    lVar13 = puVar7[2];
                    if (lVar13 == 0) goto code_r0x014750d0;
                    if (*(uint *)(lVar13 + 0x18) <= uVar12) goto code_r0x014750c4;
                    *(undefined4 *)((long)param_12 + lVar13 + 0x20) = uVar26;
                    *(float *)((long)param_12 + lVar13 + 0x24) = fVar29;
                    *(float *)((long)param_12 + lVar13 + 0x28) = fVar35 + fVar32;
                    if (param_11 == (undefined8 *)0x0) goto code_r0x014750d0;
                    if (*(uint *)(param_11 + 3) <= uVar12) goto code_r0x014750c4;
                    lVar23 = puVar7[3];
                    lVar13 = (long)param_11 + (long)param_12;
                    uVar31 = *(undefined4 *)(lVar13 + 0x24);
                    uVar33 = *(undefined4 *)(lVar13 + 0x28);
                    uVar26 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(*(undefined4 *)(lVar13 + 0x20),0);
                    if (lVar23 == 0) goto code_r0x014750d0;
                    if (*(uint *)(lVar23 + 0x18) <= uVar12) goto code_r0x014750c4;
                    *(undefined4 *)((long)param_12 + lVar23 + 0x20) = uVar26;
                    *(undefined4 *)((long)param_12 + lVar23 + 0x24) = uVar31;
                    *(undefined4 *)((long)param_12 + lVar23 + 0x28) = uVar33;
                    if (lVar20 == 0) goto code_r0x014750d0;
                    if (*(uint *)(lVar20 + 0x18) <= uVar12) goto code_r0x014750c4;
                    lVar13 = puVar7[4];
                    uVar31 = *(undefined4 *)(lVar20 + lVar21);
                    uVar26 = /*Unity.Mathematics.float2$$op_Implicit*/ func_0x030c22cc(((undefined4 *)(lVar20 + lVar21))[-1],0);
                    if (lVar13 == 0) goto code_r0x014750d0;
                    if (*(uint *)(lVar13 + 0x18) <= uVar12) goto code_r0x014750c4;
                    ((undefined4 *)(lVar13 + lVar21))[-1] = uVar26;
                    *(undefined4 *)(lVar13 + lVar21) = uVar31;
                    lVar13 = puVar7[6];
                    if (lVar13 == 0) goto code_r0x014750d0;
                    if (*(uint *)(lVar13 + 0x18) <= uVar12) goto code_r0x014750c4;
                    *(float *)(lVar13 + uVar12 * 4 + 0x20) =
                         (1.0 / (fVar34 + fVar34)) * (fVar35 + fVar32);
                    if (((*(char *)(lStack_218 + 0x8c) != '\0') && (lStack_210 != 0)) &&
                       ((long)uVar12 < (long)(int)*(uint *)(lStack_210 + 0x18))) {
                      if (*(uint *)(lStack_210 + 0x18) <= uVar12) goto code_r0x014750c4;
                      lVar13 = puVar7[5];
                      uVar31 = *(undefined4 *)(lStack_210 + lVar21);
                      uVar26 = /*Unity.Mathematics.float2$$op_Implicit*/ func_0x030c22cc(((undefined4 *)(lStack_210 + lVar21))[-1],0);
                      if (lVar13 == 0) goto code_r0x014750d0;
                      if (*(uint *)(lVar13 + 0x18) <= uVar12) goto code_r0x014750c4;
                      ((undefined4 *)(lVar13 + lVar21))[-1] = uVar26;
                      *(undefined4 *)(lVar13 + lVar21) = uVar31;
                    }
                    uVar12 = uVar12 + 1;
                    param_12 = (undefined8 *)((long)param_12 + 0xc);
                    lVar21 = lVar21 + 8;
                  } while (puStack_228 != param_12);
                }
                if (param_13 != (undefined8 *)0x0) {
                  uVar5 = /*System.Collections.Generic.List<int>$$ToArray*/ func_0x023dd918(param_13,uRam0000000003d3acc8);
                  puVar7[8] = uVar5;
                  param_12 = (undefined8 *)0x3d3acc8;
                  if (lVar19 != 0) {
                    uVar5 = /*System.Collections.Generic.List<int>$$ToArray*/ func_0x023dd918(lVar19,uRam0000000003d3acc8);
                    puVar7[9] = uVar5;
                    return puVar7;
                  }
                }
              }
            }
          }
          else {
            param_12 = puVar7;
            if (puVar4 != (undefined8 *)0x0) {
              uVar18 = puVar4[3];
              if (0 < (int)uVar18) {
                uVar12 = 0;
                pfVar15 = (float *)(puVar4 + 4);
                pfVar16 = (float *)(param_11 + 4);
                do {
                  *pfVar15 = -*pfVar15;
                  param_12 = puVar11;
                  if (param_11 == (undefined8 *)0x0) goto code_r0x014750d0;
                  param_12 = puVar7;
                  if (*(uint *)(param_11 + 3) <= uVar12) goto code_r0x014750c4;
                  *pfVar16 = -*pfVar16;
                  uVar12 = uVar12 + 1;
                  pfVar15 = pfVar15 + 3;
                  pfVar16 = pfVar16 + 3;
                } while ((uVar18 & 0xffffffff) != uVar12);
              }
              param_12 = puVar11;
              if (lVar19 != 0) {
                uVar17 = *(uint *)(lVar19 + 0x18);
                if (0 < (int)uVar17) {
                  uVar14 = 0;
                  do {
                    param_12 = puVar7;
                    if ((uVar17 <= uVar14) ||
                       (uVar1 = uVar14 + 2, param_12 = puVar11, uVar17 <= uVar1))
                    goto code_r0x014750c4;
                    lVar21 = lVar19 + 0x20;
                    uVar26 = *(undefined4 *)(lVar21 + (long)(int)uVar14 * 4);
                    *(undefined4 *)(lVar21 + (long)(int)uVar14 * 4) =
                         *(undefined4 *)(lVar21 + (long)(int)uVar1 * 4);
                    *(undefined4 *)(lVar21 + (long)(int)uVar1 * 4) = uVar26;
                    uVar14 = uVar14 + 3;
                  } while ((int)uVar14 < (int)uVar17);
                  goto code_r0x01474d44;
                }
                goto code_r0x01474d48;
              }
            }
          }
        }
      }
code_r0x014750d0:
      lVar20 = func_0x00f78af4();
      /*Atlas.Geometry.TrackEditorUpdatableBehaviour$$ClearDependencies*/ func_0x0151103c(lVar20,0);
      puVar7 = *(undefined8 **)(lVar20 + 0x50);
      if ((bRam0000000003eb4d6f & 1) == 0) {
        func_0x00f78a20(0x3d3dce8,puVar7,0);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4d6f = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      puVar11 = (undefined8 *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(puVar7,0,0);
      if (((ulong)puVar11 & 1) != 0) {
        return puVar11;
      }
      puVar11 = *(undefined8 **)(lVar20 + 0x28);
      if (puVar11 == (undefined8 *)0x0) {
        puVar7 = (undefined8 *)func_0x00f78af4();
        puVar4 = puVar7;
        if ((bRam0000000003eb4d70 & 1) == 0) {
          func_0x00f78a20(0x3d3dd00);
          func_0x00f78a20(0x3d3dd08);
          puVar4 = (undefined8 *)func_0x00f78a20(0x3d3dd10);
          bRam0000000003eb4d70 = 1;
        }
        lVar20 = puVar7[5];
        if (lVar20 != 0) {
          iVar3 = *(int *)(lVar20 + 0x18);
          if (iVar3 < 1) goto code_r0x01510950;
          uVar17 = 0;
          do {
            if (*(uint *)(lVar20 + 0x18) <= uVar17) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar20 = *(long *)(*(long *)(lVar20 + 0x10) + (long)(int)uVar17 * 0x10 + 0x20);
            if ((lVar20 == 0) || (puVar7[5] == 0)) break;
            puVar4 = (undefined8 *)
                     /*System.Collections.Generic.List<TrackEditorUpdatableBehaviour.Dependency>$$set_Item*/ func_0x025b57b8(puVar7[5],uVar17,lVar20,*(undefined8 *)(lVar20 + 0x20),
                                     uRam0000000003d3dd10);
            if (iVar3 - 1U == uVar17) goto code_r0x01510950;
            lVar20 = puVar7[5];
            uVar17 = uVar17 + 1;
          } while (lVar20 != 0);
        }
        puVar4 = (undefined8 *)func_0x00f78af4();
code_r0x01510950:
        puVar7[4] = puVar7[3];
        return puVar4;
      }
      puVar10 = (undefined8 *)0xffffffffffffffff;
      lVar20 = puVar11[2];
      if (lVar20 == 0) {
code_r0x025b5b78:
        puVar7 = param_11;
        puVar11 = param_12;
        puVar6 = (undefined8 *)func_0x00f78af4();
        lVar20 = extraout_x9_01;
        uVar17 = extraout_w8_01;
code_r0x025b5b7c:
        *(uint *)(puVar11 + 3) = uVar17 + 1;
      }
      else {
        puVar4 = (undefined8 *)0xffffffffffffffff;
        uVar17 = *(uint *)(puVar11 + 3);
        puVar6 = puVar11;
        if (uVar17 != *(uint *)(lVar20 + 0x18)) goto code_r0x025b5b7c;
        puVar10 = *(undefined8 **)(*(long *)(*(long *)(lRam0000000003d3dce8 + 0x18) + 0xc0) + 0x60);
        puVar6 = (undefined8 *)(*(code *)*puVar10)(puVar11,uVar17 + 1);
        lVar20 = puVar11[2];
        uVar17 = *(uint *)(puVar11 + 3);
        *(uint *)(puVar11 + 3) = uVar17 + 1;
        param_12 = puVar11;
        param_11 = puVar7;
        if (lVar20 == 0) goto code_r0x025b5b78;
      }
      if (uVar17 < *(uint *)(lVar20 + 0x18)) {
        lVar20 = lVar20 + (long)(int)uVar17 * 0x10;
        *(undefined8 **)(lVar20 + 0x20) = puVar7;
        *(undefined8 **)(lVar20 + 0x28) = puVar4;
        *(int *)((long)puVar11 + 0x1c) = *(int *)((long)puVar11 + 0x1c) + 1;
        return puVar6;
      }
      uVar5 = func_0x00f78b24();
      auVar37 = func_0x00f78ac0(uVar5,0);
      plVar9 = auVar37._8_8_;
      lVar20 = auVar37._0_8_;
      (*(code *)**(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 0x48))(plVar9,0x14);
      if (lVar20 != 0) {
        pcVar22 = (code *)**(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 0x28);
        lVar19 = *(long *)(*(long *)(puVar10[3] + 0xc0) + 0x38);
        if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar19);
        }
        if (plVar9 != (long *)0x0) {
          if (*(long *)(*plVar9 + 0x40) == *(long *)(lVar19 + 0x40)) {
            puVar4 = (undefined8 *)func_0x00f78ae4(plVar9);
            (*pcVar22)(lVar20,*puVar4,puVar4[1],*(undefined8 *)(*(long *)(puVar10[3] + 0xc0) + 0x28)
                      );
            iVar3 = (*(code *)**(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 0x68))(lVar20);
            return (undefined8 *)(ulong)(iVar3 - 1);
          }
          func_0x00f78e5c(plVar9,lVar19);
          goto code_r0x025b5d64;
        }
      }
      func_0x00f78af4();
code_r0x025b5d64:
                    /* WARNING: Does not return */
      pcVar22 = (code *)SoftwareBreakpoint(1,0x25b5d68);
      (*pcVar22)();
    }
    puVar7 = (undefined8 *)0x3d3ac90;
    puVar25 = &UNK_01474a04;
    puVar4 = param_13;
    pppppppuVar24 = (undefined8 *******)&pppppuStack_100;
code_r0x023dbccc:
    puVar10 = auVar37._0_8_;
    *(undefined8 **)(puVar2 + -0x20) = puVar4;
    *(undefined8 **)(puVar2 + -0x18) = param_12;
    *(undefined8 ********)(puVar2 + -0x10) = pppppppuVar24;
    *(undefined **)(puVar2 + -8) = puVar25;
    lVar19 = param_13[2];
    puVar11 = puRam0000000003d3ac90;
    if (lVar19 == 0) {
code_r0x023dbd28:
      puVar10 = puVar4;
      param_13 = param_12;
      puVar6 = (undefined8 *)func_0x00f78af4();
      lVar19 = extraout_x9;
      uVar17 = extraout_w8;
code_r0x023dbd2c:
      *(uint *)(param_13 + 3) = uVar17 + 1;
    }
    else {
      uVar17 = *(uint *)(param_13 + 3);
      puVar6 = param_13;
      if (uVar17 != *(uint *)(lVar19 + 0x18)) goto code_r0x023dbd2c;
      puVar11 = *(undefined8 **)(*(long *)(puRam0000000003d3ac90[3] + 0xc0) + 0x60);
      puVar6 = (undefined8 *)(*(code *)*puVar11)(param_13,uVar17 + 1);
      lVar19 = param_13[2];
      uVar17 = *(uint *)(param_13 + 3);
      *(uint *)(param_13 + 3) = uVar17 + 1;
      param_12 = param_13;
      puVar4 = puVar10;
      if (lVar19 == 0) goto code_r0x023dbd28;
    }
    if (uVar17 < *(uint *)(lVar19 + 0x18)) {
      *(int *)(lVar19 + (long)(int)uVar17 * 4 + 0x20) = (int)puVar10;
      *(int *)((long)param_13 + 0x1c) = *(int *)((long)param_13 + 0x1c) + 1;
      return puVar6;
    }
    uVar5 = func_0x00f78b24();
    auVar36 = func_0x00f78ac0(uVar5,0);
    plVar9 = auVar36._8_8_;
    lVar19 = auVar36._0_8_;
    *(undefined8 **)(puVar2 + -0x60) = puVar7;
    *(long *)(puVar2 + -0x58) = auVar37._8_8_;
    *(long *)(puVar2 + -0x50) = lVar20;
    *(undefined8 **)(puVar2 + -0x48) = param_11;
    *(undefined8 **)(puVar2 + -0x40) = puVar10;
    *(undefined8 **)(puVar2 + -0x38) = param_13;
    *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x28) =
         &System_Collections_Generic_List_int___System_Collections_IList_Add;
    (*(code *)**(undefined8 **)(*(long *)(puVar11[3] + 0xc0) + 0x48))(plVar9,0x14);
    if (lVar19 != 0) {
      pcVar22 = (code *)**(undefined8 **)(*(long *)(puVar11[3] + 0xc0) + 0x28);
      lVar20 = *(long *)(*(long *)(puVar11[3] + 0xc0) + 0x38);
      if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar20);
      }
      if (plVar9 != (long *)0x0) {
        if (*(long *)(*plVar9 + 0x40) == *(long *)(lVar20 + 0x40)) {
          puVar8 = (undefined4 *)func_0x00f78ae4(plVar9);
          (*pcVar22)(lVar19,*puVar8,*(undefined8 *)(*(long *)(puVar11[3] + 0xc0) + 0x28));
          iVar3 = (*(code *)**(undefined8 **)(*(long *)(puVar11[3] + 0xc0) + 0x68))(lVar19);
          return (undefined8 *)(ulong)(iVar3 - 1);
        }
        func_0x00f78e5c(plVar9,lVar20);
        goto code_r0x023dbf10;
      }
    }
    func_0x00f78af4();
code_r0x023dbf10:
                    /* WARNING: Does not return */
    pcVar22 = (code *)SoftwareBreakpoint(1,0x23dbf14);
    (*pcVar22)();
  }
  param_3 = param_3 + param_6 * param_7;
  fStack_e4 = param_3 + 0.0;
  param_2 = param_2 + param_5 * param_7;
  fStack_e8 = param_2 + unaff_w24;
  fVar27 = fVar30 + param_4 * param_7;
  fVar34 = fVar30 + param_4 * param_8;
  puStack_f8 = &UNK_0147493c;
  lVar20 = puVar4[2];
  fVar35 = fVar34 + 0.0;
  if (lVar20 == 0) {
code_r0x0249c720:
    param_3 = fVar34;
    fVar27 = fVar30;
    param_2 = fVar35;
    puVar7 = (undefined8 *)func_0x00f78af4();
    lVar20 = extraout_x9_00;
    uVar17 = extraout_w8_00;
code_r0x0249c724:
    *(uint *)(puVar4 + 3) = uVar17 + 1;
  }
  else {
    uVar17 = *(uint *)(puVar4 + 3);
    puVar7 = puVar4;
    if (uVar17 != *(uint *)(lVar20 + 0x18)) goto code_r0x0249c724;
    param_11 = *(undefined8 **)(*(long *)(*(long *)(lRam0000000003d3cb28 + 0x18) + 0xc0) + 0x60);
    puVar7 = (undefined8 *)(*(code *)*param_11)(puVar4,uVar17 + 1);
    lVar20 = puVar4[2];
    uVar17 = *(uint *)(puVar4 + 3);
    *(uint *)(puVar4 + 3) = uVar17 + 1;
    fVar35 = param_2;
    fVar30 = fVar27;
    fVar34 = param_3;
    if (lVar20 == 0) goto code_r0x0249c720;
  }
  if (uVar17 < *(uint *)(lVar20 + 0x18)) {
    lVar20 = lVar20 + (long)(int)uVar17 * 0xc;
    *(float *)(lVar20 + 0x20) = fVar27;
    *(float *)(lVar20 + 0x24) = param_2;
    *(float *)(lVar20 + 0x28) = param_3;
    *(int *)((long)puVar4 + 0x1c) = *(int *)((long)puVar4 + 0x1c) + 1;
    return puVar7;
  }
  uVar5 = func_0x00f78b24();
  auVar37 = func_0x00f78ac0(uVar5,0);
  plVar9 = auVar37._8_8_;
  lVar20 = auVar37._0_8_;
  puStack_138 = &System_Collections_Generic_List_float3___System_Collections_IList_Add;
  ppppppuStack_140 = &pppppuStack_100;
  (*(code *)**(undefined8 **)(*(long *)(param_11[3] + 0xc0) + 0x48))(plVar9,0x14);
  if (lVar20 != 0) {
    pcVar22 = (code *)**(undefined8 **)(*(long *)(param_11[3] + 0xc0) + 0x28);
    lVar19 = *(long *)(*(long *)(param_11[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar19);
    }
    if (plVar9 != (long *)0x0) {
      if (*(long *)(*plVar9 + 0x40) == *(long *)(lVar19 + 0x40)) {
        puVar8 = (undefined4 *)func_0x00f78ae4(plVar9);
        (*pcVar22)(*puVar8,puVar8[1],puVar8[2],lVar20,
                   *(undefined8 *)(*(long *)(param_11[3] + 0xc0) + 0x28));
        iVar3 = (*(code *)**(undefined8 **)(*(long *)(param_11[3] + 0xc0) + 0x68))(lVar20);
        return (undefined8 *)(ulong)(iVar3 - 1);
      }
      func_0x00f78e5c(plVar9,lVar19);
      goto code_r0x0249c91c;
    }
  }
  func_0x00f78af4();
code_r0x0249c91c:
                    /* WARNING: Does not return */
  pcVar22 = (code *)SoftwareBreakpoint(1,0x249c920);
  (*pcVar22)();
code_r0x014750c4:
  uVar5 = func_0x00f78b24();
  func_0x00f78ac0(uVar5,0);
  goto code_r0x014750d0;
}



// ============================================================
// RVA: 0x1474770 | Atlas.Geometry.BarrierBehaviour.ToVectorArray
// ============================================================

/* WARNING: Possible PIC construction at 0x01474938: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01474968: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01474a00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01474a20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01474a40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01474efc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01474a24) */
/* WARNING: Removing unreachable block (ram,0x01474a04) */
/* WARNING: Removing unreachable block (ram,0x0147496c) */
/* WARNING: Removing unreachable block (ram,0x0147493c) */
/* WARNING: Removing unreachable block (ram,0x01474a44) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
Atlas_Geometry_BarrierBehaviour__ToVectorArray
          (undefined1 param_1 [16],float param_2,float param_3,float param_4,float param_5,
          float param_6,float param_7,float param_8,undefined8 param_9,long param_10,
          undefined8 *param_11,undefined8 *param_12,undefined8 *param_13)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  float *pfVar15;
  float *pfVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  code *pcVar22;
  float unaff_w24;
  long lVar23;
  undefined8 *******pppppppuVar24;
  undefined *puVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  ulong extraout_d0;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  undefined4 uVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auStack_1f0 [8];
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  undefined8 ******ppppppuStack_100;
  undefined *puStack_f8;
  undefined8 *****pppppuStack_c0;
  undefined *puStack_b8;
  float fStack_a8;
  float fStack_a4;
  undefined8 ****ppppuStack_50;
  undefined *puStack_48;
  
  if ((bRam0000000003eb4881 & 1) == 0) {
    func_0x00f78a20(0x3d3cb08);
    func_0x00f78a20(0x3d3cb10);
    func_0x00f78a20(0x3d1f5d8);
    bRam0000000003eb4881 = 1;
  }
  if (param_10 != 0) {
    uVar17 = *(uint *)(param_10 + 0x18);
    puVar4 = (undefined8 *)func_0x00f78a34(/*UnityEngine.Vector2[]_TypeInfo*/ uRam0000000003d1f5d8,(ulong)uVar17);
    if (0 < (int)uVar17) {
      uVar18 = 0;
      lVar20 = 0x20;
      do {
        if (*(uint *)(param_10 + 0x18) <= uVar18) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        puVar8 = (undefined4 *)(*(long *)(param_10 + 0x10) + lVar20);
        param_2 = (float)puVar8[1];
        uVar26 = /*Unity.Mathematics.float2$$op_Implicit*/ func_0x030c22c8(*puVar8,0);
        if (puVar4 == (undefined8 *)0x0) goto LAB_01474858;
        if (*(uint *)(puVar4 + 3) <= uVar18) goto LAB_0147485c;
        *(undefined4 *)((long)puVar4 + lVar20) = uVar26;
        ((undefined4 *)((long)puVar4 + lVar20))[1] = param_2;
        uVar18 = uVar18 + 1;
        lVar20 = lVar20 + 8;
      } while (uVar17 != uVar18);
    }
    return puVar4;
  }
LAB_01474858:
  func_0x00f78af4();
LAB_0147485c:
  uVar5 = func_0x00f78b24();
  puVar4 = (undefined8 *)func_0x00f78ac0(uVar5,0);
  puStack_48 = &Atlas_Geometry_BarrierBehaviour__AddCrossSectionVerts;
  fVar30 = (float)extraout_d0;
  fVar35 = param_2;
  fVar34 = param_3;
  ppppuStack_50 = (undefined8 ****)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb487e & 1) == 0) {
    fStack_a4 = param_4;
    func_0x00f78a20(0x3d3cb28);
    bRam0000000003eb487e = 1;
    param_4 = fStack_a4;
  }
  pppppuStack_c0 = &ppppuStack_50;
  if (puVar4 == (undefined8 *)0x0) {
    auVar37 = func_0x00f78af4();
    lVar20 = auVar37._0_8_;
    puVar2 = &stack0xffffffffffffff10;
    puStack_b8 = &Atlas_Geometry_BarrierBehaviour__AddQuad;
    puVar4 = param_11;
    if ((bRam0000000003eb487f & 1) == 0) {
      func_0x00f78a20(0x3d3ac90);
      bRam0000000003eb487f = 1;
    }
    if (param_13 == (undefined8 *)0x0) {
      auVar37 = func_0x00f78af4();
      lVar19 = auVar37._8_8_;
      lStack_1d8 = auVar37._0_8_;
      puVar2 = auStack_1f0;
      puStack_f8 = &Atlas_Geometry_BarrierBehaviour__CreateMeshData;
      pppppppuVar24 = &ppppppuStack_100;
      param_11 = (undefined8 *)0x3eb4000;
      uStack_190 = (ulong)(uint)param_7;
      uStack_188 = (ulong)(uint)param_3;
      uStack_180 = (ulong)(uint)param_6;
      uStack_178 = (ulong)(uint)param_2;
      uStack_170 = (ulong)(uint)param_5;
      uStack_168 = extraout_d0 & 0xffffffff;
      uStack_160 = (ulong)(uint)unaff_w24;
      uStack_158 = (ulong)(uint)param_8;
      ppppppuStack_100 = &pppppuStack_c0;
      if ((bRam0000000003eb4883 & 1) == 0) {
        func_0x00f78a20(0x3d3ac90);
        func_0x00f78a20(0x3d3acc8);
        func_0x00f78a20(0x3d3ac78);
        func_0x00f78a20(0x3d1daa8);
        func_0x00f78a20(0x3d26a90);
        func_0x00f78a20(0x3d23990);
        func_0x00f78a20(0x3d1f3d8);
        func_0x00f78a20(0x3d1f690);
        func_0x00f78a20(0x3d1f698);
        bRam0000000003eb4883 = 1;
      }
      uStack_1b0 = 0;
      uStack_1a8 = 0;
      uStack_1a0 = 0;
      if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      puVar7 = (undefined8 *)0x3d26a90;
      puVar11 = (undefined8 *)0x3d26a90;
      iVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar19,0,0);
      if (iVar3 != 0) {
code_r0x01474b68:
        puVar4 = (undefined8 *)func_0x00f78aec(/*Atlas.Geometry.BarrierBehaviour.MeshData_TypeInfo*/ uRam0000000003d26a90);
        /*Atlas.Geometry.BarrierBehaviour.MeshData$$.ctor*/ func_0x01547154(puVar4,0);
        return puVar4;
      }
      if (*(char *)(lStack_1d8 + 0x8c) == '\0') {
        param_12 = puVar11;
        if (lVar19 != 0) goto code_r0x01474bac;
      }
      else {
        param_12 = puVar7;
        if (lVar19 != 0) {
          lVar20 = /*UnityEngine.Mesh$$get_uv2*/ func_0x03241fcc(lVar19,0);
          if (lVar20 == 0) goto code_r0x01474b68;
code_r0x01474bac:
          /*UnityEngine.Mesh$$get_bounds*/ func_0x03241090(&uStack_1c8,lVar19,0);
          uStack_1a8 = uStack_1c0;
          uStack_1b0 = uStack_1c8;
          uStack_1a0 = uStack_1b8;
          if (*(char *)(lStack_1d8 + 0x6c) != '\0') {
            fVar28 = (float)/*UnityEngine.Bounds$$get_min*/ func_0x0321b548(&uStack_1b0,0);
            fVar30 = fVar35;
            fVar27 = fVar34;
            fVar29 = (float)/*UnityEngine.Bounds$$get_max*/ func_0x0321b5b8(&uStack_1b0,0);
            /*UnityEngine.Bounds$$SetMinMax*/ func_0x0321b5d8(-fVar29,fVar35,fVar34,-fVar28,fVar30,fVar27,&uStack_1b0,0);
          }
          /*UnityEngine.Bounds$$get_extents*/ func_0x0321b3e4(&uStack_1b0,0);
          fVar35 = 0.0;
          fVar30 = fVar34;
          if ((int)puVar4 != 0) {
            /*UnityEngine.Bounds$$get_min*/ func_0x0321b548(&uStack_1b0,0);
            fVar35 = -fVar30;
          }
          puVar4 = (undefined8 *)/*UnityEngine.Mesh$$get_vertices*/ func_0x03241cdc(lVar19,0);
          param_11 = (undefined8 *)/*UnityEngine.Mesh$$get_normals*/ func_0x03241d98(lVar19,0);
          lVar20 = /*UnityEngine.Mesh$$get_uv*/ func_0x03241f10(lVar19,0);
          lStack_1d0 = /*UnityEngine.Mesh$$get_uv2*/ func_0x03241fcc(lVar19,0);
          lVar19 = /*UnityEngine.Mesh$$get_triangles*/ func_0x032447ec(lVar19,0);
          if (*(char *)(lStack_1d8 + 0x6c) == '\0') {
code_r0x01474d44:
            param_12 = puVar11;
            if (puVar4 != (undefined8 *)0x0) {
code_r0x01474d48:
              uVar18 = puVar4[3];
              puStack_1e0 = puVar4;
              puVar7 = (undefined8 *)func_0x00f78aec(/*Atlas.Geometry.BarrierBehaviour.MeshData_TypeInfo*/ uRam0000000003d26a90);
              /*Atlas.Geometry.BarrierBehaviour.MeshData$$.ctor*/ func_0x01547154(puVar7,0);
              uVar5 = func_0x00f78a34(/*Unity.Mathematics.float3[]_TypeInfo*/ uRam0000000003d1f698,uVar18);
              param_12 = (undefined8 *)0x3d1f698;
              if (puVar7 != (undefined8 *)0x0) {
                puVar7[2] = uVar5;
                uVar5 = func_0x00f78a34(/*Unity.Mathematics.float3[]_TypeInfo*/ uRam0000000003d1f698,uVar18);
                puVar7[3] = uVar5;
                uVar5 = func_0x00f78a34(/*Unity.Mathematics.float2[]_TypeInfo*/ uRam0000000003d1f690,uVar18);
                puVar7[4] = uVar5;
                uVar5 = func_0x00f78a34(/*float[]_TypeInfo*/ uRam0000000003d1f3d8,uVar18);
                puVar7[6] = uVar5;
                puVar7[7] = lVar19;
                *(float *)(puVar7 + 10) = fVar34 + fVar34;
                fVar27 = (float)/*UnityEngine.Bounds$$get_min*/ func_0x0321b548(&uStack_1b0,0);
                lVar19 = lStack_1d8;
                *(float *)((long)puVar7 + 0x54) = fVar27 - *(float *)(lStack_1d8 + 0x80);
                fVar27 = (float)/*UnityEngine.Bounds$$get_max*/ func_0x0321b5b8(&uStack_1b0,0);
                *(float *)(puVar7 + 0xb) = fVar27 + *(float *)(lVar19 + 0x84);
                if (*(char *)(lVar19 + 0x8c) != '\0') {
                  uVar5 = func_0x00f78a34(/*Unity.Mathematics.float2[]_TypeInfo*/ uRam0000000003d1f690,uVar18);
                  puVar7[5] = uVar5;
                }
                /*UnityEngine.Bounds$$get_min*/ func_0x0321b548(&uStack_1b0,0);
                fVar28 = fVar30;
                /*UnityEngine.Bounds$$get_max*/ func_0x0321b5b8(&uStack_1b0,0);
                param_12 = (undefined8 *)0x3d1daa8;
                param_13 = (undefined8 *)func_0x00f78aec(/*System.Collections.Generic.List<int>_TypeInfo*/ uRam0000000003d1daa8);
                puVar4 = (undefined8 *)0x3d3ac78;
                /*System.Collections.Generic.List<int>$$.ctor*/ func_0x023db018(param_13,uRam0000000003d3ac78);
                lVar19 = func_0x00f78aec(/*System.Collections.Generic.List<int>_TypeInfo*/ uRam0000000003d1daa8);
                /*System.Collections.Generic.List<int>$$.ctor*/ func_0x023db018(lVar19,uRam0000000003d3ac78);
                fVar27 = _UNK_033f8148;
                if (0 < (int)uVar18) {
                  param_12 = (undefined8 *)0x0;
                  uVar12 = 0;
                  puStack_1e8 = (undefined8 *)((uVar18 & 0xffffffff) * 0xc);
                  puVar4 = puStack_1e0 + 5;
                  lVar21 = 0x24;
                  do {
                    auVar37._8_8_ = lVar21;
                    auVar37._0_8_ = uVar12;
                    if (*(uint *)(puStack_1e0 + 3) <= uVar12) goto code_r0x014750c4;
                    pfVar15 = (float *)((long)puVar4 + (long)param_12);
                    fVar29 = pfVar15[-1];
                    fVar32 = *pfVar15;
                    uVar26 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(pfVar15[-2],0);
                    if (fVar32 - fVar30 <= fVar27) {
                      if (param_13 == (undefined8 *)0x0) goto code_r0x014750d0;
                      puVar25 = &UNK_01474f00;
                      goto code_r0x023dbccc;
                    }
                    if (fVar28 - fVar32 <= fVar27) {
                      if (lVar19 == 0) goto code_r0x014750d0;
                      /*System.Collections.Generic.List<int>$$Add*/ func_0x023dbccc(lVar19,uVar12,puRam0000000003d3ac90);
                    }
                    lVar13 = puVar7[2];
                    if (lVar13 == 0) goto code_r0x014750d0;
                    if (*(uint *)(lVar13 + 0x18) <= uVar12) goto code_r0x014750c4;
                    *(undefined4 *)((long)param_12 + lVar13 + 0x20) = uVar26;
                    *(float *)((long)param_12 + lVar13 + 0x24) = fVar29;
                    *(float *)((long)param_12 + lVar13 + 0x28) = fVar35 + fVar32;
                    if (param_11 == (undefined8 *)0x0) goto code_r0x014750d0;
                    if (*(uint *)(param_11 + 3) <= uVar12) goto code_r0x014750c4;
                    lVar23 = puVar7[3];
                    lVar13 = (long)param_11 + (long)param_12;
                    uVar31 = *(undefined4 *)(lVar13 + 0x24);
                    uVar33 = *(undefined4 *)(lVar13 + 0x28);
                    uVar26 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(*(undefined4 *)(lVar13 + 0x20),0);
                    if (lVar23 == 0) goto code_r0x014750d0;
                    if (*(uint *)(lVar23 + 0x18) <= uVar12) goto code_r0x014750c4;
                    *(undefined4 *)((long)param_12 + lVar23 + 0x20) = uVar26;
                    *(undefined4 *)((long)param_12 + lVar23 + 0x24) = uVar31;
                    *(undefined4 *)((long)param_12 + lVar23 + 0x28) = uVar33;
                    if (lVar20 == 0) goto code_r0x014750d0;
                    if (*(uint *)(lVar20 + 0x18) <= uVar12) goto code_r0x014750c4;
                    lVar13 = puVar7[4];
                    uVar31 = *(undefined4 *)(lVar20 + lVar21);
                    uVar26 = /*Unity.Mathematics.float2$$op_Implicit*/ func_0x030c22cc(((undefined4 *)(lVar20 + lVar21))[-1],0);
                    if (lVar13 == 0) goto code_r0x014750d0;
                    if (*(uint *)(lVar13 + 0x18) <= uVar12) goto code_r0x014750c4;
                    ((undefined4 *)(lVar13 + lVar21))[-1] = uVar26;
                    *(undefined4 *)(lVar13 + lVar21) = uVar31;
                    lVar13 = puVar7[6];
                    if (lVar13 == 0) goto code_r0x014750d0;
                    if (*(uint *)(lVar13 + 0x18) <= uVar12) goto code_r0x014750c4;
                    *(float *)(lVar13 + uVar12 * 4 + 0x20) =
                         (1.0 / (fVar34 + fVar34)) * (fVar35 + fVar32);
                    if (((*(char *)(lStack_1d8 + 0x8c) != '\0') && (lStack_1d0 != 0)) &&
                       ((long)uVar12 < (long)(int)*(uint *)(lStack_1d0 + 0x18))) {
                      if (*(uint *)(lStack_1d0 + 0x18) <= uVar12) goto code_r0x014750c4;
                      lVar13 = puVar7[5];
                      uVar31 = *(undefined4 *)(lStack_1d0 + lVar21);
                      uVar26 = /*Unity.Mathematics.float2$$op_Implicit*/ func_0x030c22cc(((undefined4 *)(lStack_1d0 + lVar21))[-1],0);
                      if (lVar13 == 0) goto code_r0x014750d0;
                      if (*(uint *)(lVar13 + 0x18) <= uVar12) goto code_r0x014750c4;
                      ((undefined4 *)(lVar13 + lVar21))[-1] = uVar26;
                      *(undefined4 *)(lVar13 + lVar21) = uVar31;
                    }
                    uVar12 = uVar12 + 1;
                    param_12 = (undefined8 *)((long)param_12 + 0xc);
                    lVar21 = lVar21 + 8;
                  } while (puStack_1e8 != param_12);
                }
                if (param_13 != (undefined8 *)0x0) {
                  uVar5 = /*System.Collections.Generic.List<int>$$ToArray*/ func_0x023dd918(param_13,uRam0000000003d3acc8);
                  puVar7[8] = uVar5;
                  param_12 = (undefined8 *)0x3d3acc8;
                  if (lVar19 != 0) {
                    uVar5 = /*System.Collections.Generic.List<int>$$ToArray*/ func_0x023dd918(lVar19,uRam0000000003d3acc8);
                    puVar7[9] = uVar5;
                    return puVar7;
                  }
                }
              }
            }
          }
          else {
            param_12 = puVar7;
            if (puVar4 != (undefined8 *)0x0) {
              uVar18 = puVar4[3];
              if (0 < (int)uVar18) {
                uVar12 = 0;
                pfVar15 = (float *)(puVar4 + 4);
                pfVar16 = (float *)(param_11 + 4);
                do {
                  *pfVar15 = -*pfVar15;
                  param_12 = puVar11;
                  if (param_11 == (undefined8 *)0x0) goto code_r0x014750d0;
                  param_12 = puVar7;
                  if (*(uint *)(param_11 + 3) <= uVar12) goto code_r0x014750c4;
                  *pfVar16 = -*pfVar16;
                  uVar12 = uVar12 + 1;
                  pfVar15 = pfVar15 + 3;
                  pfVar16 = pfVar16 + 3;
                } while ((uVar18 & 0xffffffff) != uVar12);
              }
              param_12 = puVar11;
              if (lVar19 != 0) {
                uVar17 = *(uint *)(lVar19 + 0x18);
                if (0 < (int)uVar17) {
                  uVar14 = 0;
                  do {
                    param_12 = puVar7;
                    if ((uVar17 <= uVar14) ||
                       (uVar1 = uVar14 + 2, param_12 = puVar11, uVar17 <= uVar1))
                    goto code_r0x014750c4;
                    lVar21 = lVar19 + 0x20;
                    uVar26 = *(undefined4 *)(lVar21 + (long)(int)uVar14 * 4);
                    *(undefined4 *)(lVar21 + (long)(int)uVar14 * 4) =
                         *(undefined4 *)(lVar21 + (long)(int)uVar1 * 4);
                    *(undefined4 *)(lVar21 + (long)(int)uVar1 * 4) = uVar26;
                    uVar14 = uVar14 + 3;
                  } while ((int)uVar14 < (int)uVar17);
                  goto code_r0x01474d44;
                }
                goto code_r0x01474d48;
              }
            }
          }
        }
      }
code_r0x014750d0:
      lVar20 = func_0x00f78af4();
      /*Atlas.Geometry.TrackEditorUpdatableBehaviour$$ClearDependencies*/ func_0x0151103c(lVar20,0);
      puVar7 = *(undefined8 **)(lVar20 + 0x50);
      if ((bRam0000000003eb4d6f & 1) == 0) {
        func_0x00f78a20(0x3d3dce8,puVar7,0);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4d6f = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      puVar11 = (undefined8 *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(puVar7,0,0);
      if (((ulong)puVar11 & 1) != 0) {
        return puVar11;
      }
      puVar11 = *(undefined8 **)(lVar20 + 0x28);
      if (puVar11 == (undefined8 *)0x0) {
        puVar7 = (undefined8 *)func_0x00f78af4();
        puVar4 = puVar7;
        if ((bRam0000000003eb4d70 & 1) == 0) {
          func_0x00f78a20(0x3d3dd00);
          func_0x00f78a20(0x3d3dd08);
          puVar4 = (undefined8 *)func_0x00f78a20(0x3d3dd10);
          bRam0000000003eb4d70 = 1;
        }
        lVar20 = puVar7[5];
        if (lVar20 != 0) {
          iVar3 = *(int *)(lVar20 + 0x18);
          if (iVar3 < 1) goto code_r0x01510950;
          uVar17 = 0;
          do {
            if (*(uint *)(lVar20 + 0x18) <= uVar17) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar20 = *(long *)(*(long *)(lVar20 + 0x10) + (long)(int)uVar17 * 0x10 + 0x20);
            if ((lVar20 == 0) || (puVar7[5] == 0)) break;
            puVar4 = (undefined8 *)
                     /*System.Collections.Generic.List<TrackEditorUpdatableBehaviour.Dependency>$$set_Item*/ func_0x025b57b8(puVar7[5],uVar17,lVar20,*(undefined8 *)(lVar20 + 0x20),
                                     uRam0000000003d3dd10);
            if (iVar3 - 1U == uVar17) goto code_r0x01510950;
            lVar20 = puVar7[5];
            uVar17 = uVar17 + 1;
          } while (lVar20 != 0);
        }
        puVar4 = (undefined8 *)func_0x00f78af4();
code_r0x01510950:
        puVar7[4] = puVar7[3];
        return puVar4;
      }
      puVar10 = (undefined8 *)0xffffffffffffffff;
      lVar20 = puVar11[2];
      if (lVar20 == 0) {
code_r0x025b5b78:
        puVar7 = param_11;
        puVar11 = param_12;
        puVar6 = (undefined8 *)func_0x00f78af4();
        lVar20 = extraout_x9_01;
        uVar17 = extraout_w8_01;
code_r0x025b5b7c:
        *(uint *)(puVar11 + 3) = uVar17 + 1;
      }
      else {
        puVar4 = (undefined8 *)0xffffffffffffffff;
        uVar17 = *(uint *)(puVar11 + 3);
        puVar6 = puVar11;
        if (uVar17 != *(uint *)(lVar20 + 0x18)) goto code_r0x025b5b7c;
        puVar10 = *(undefined8 **)(*(long *)(*(long *)(lRam0000000003d3dce8 + 0x18) + 0xc0) + 0x60);
        puVar6 = (undefined8 *)(*(code *)*puVar10)(puVar11,uVar17 + 1);
        lVar20 = puVar11[2];
        uVar17 = *(uint *)(puVar11 + 3);
        *(uint *)(puVar11 + 3) = uVar17 + 1;
        param_12 = puVar11;
        param_11 = puVar7;
        if (lVar20 == 0) goto code_r0x025b5b78;
      }
      if (uVar17 < *(uint *)(lVar20 + 0x18)) {
        lVar20 = lVar20 + (long)(int)uVar17 * 0x10;
        *(undefined8 **)(lVar20 + 0x20) = puVar7;
        *(undefined8 **)(lVar20 + 0x28) = puVar4;
        *(int *)((long)puVar11 + 0x1c) = *(int *)((long)puVar11 + 0x1c) + 1;
        return puVar6;
      }
      uVar5 = func_0x00f78b24();
      auVar37 = func_0x00f78ac0(uVar5,0);
      plVar9 = auVar37._8_8_;
      lVar20 = auVar37._0_8_;
      (*(code *)**(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 0x48))(plVar9,0x14);
      if (lVar20 != 0) {
        pcVar22 = (code *)**(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 0x28);
        lVar19 = *(long *)(*(long *)(puVar10[3] + 0xc0) + 0x38);
        if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar19);
        }
        if (plVar9 != (long *)0x0) {
          if (*(long *)(*plVar9 + 0x40) == *(long *)(lVar19 + 0x40)) {
            puVar4 = (undefined8 *)func_0x00f78ae4(plVar9);
            (*pcVar22)(lVar20,*puVar4,puVar4[1],*(undefined8 *)(*(long *)(puVar10[3] + 0xc0) + 0x28)
                      );
            iVar3 = (*(code *)**(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 0x68))(lVar20);
            return (undefined8 *)(ulong)(iVar3 - 1);
          }
          func_0x00f78e5c(plVar9,lVar19);
          goto code_r0x025b5d64;
        }
      }
      func_0x00f78af4();
code_r0x025b5d64:
                    /* WARNING: Does not return */
      pcVar22 = (code *)SoftwareBreakpoint(1,0x25b5d68);
      (*pcVar22)();
    }
    puVar7 = (undefined8 *)0x3d3ac90;
    puVar25 = &UNK_01474a04;
    puVar4 = param_13;
    pppppppuVar24 = (undefined8 *******)&pppppuStack_c0;
code_r0x023dbccc:
    puVar10 = auVar37._0_8_;
    *(undefined8 **)(puVar2 + -0x20) = puVar4;
    *(undefined8 **)(puVar2 + -0x18) = param_12;
    *(undefined8 ********)(puVar2 + -0x10) = pppppppuVar24;
    *(undefined **)(puVar2 + -8) = puVar25;
    lVar19 = param_13[2];
    puVar11 = puRam0000000003d3ac90;
    if (lVar19 == 0) {
code_r0x023dbd28:
      puVar10 = puVar4;
      param_13 = param_12;
      puVar6 = (undefined8 *)func_0x00f78af4();
      lVar19 = extraout_x9;
      uVar17 = extraout_w8;
code_r0x023dbd2c:
      *(uint *)(param_13 + 3) = uVar17 + 1;
    }
    else {
      uVar17 = *(uint *)(param_13 + 3);
      puVar6 = param_13;
      if (uVar17 != *(uint *)(lVar19 + 0x18)) goto code_r0x023dbd2c;
      puVar11 = *(undefined8 **)(*(long *)(puRam0000000003d3ac90[3] + 0xc0) + 0x60);
      puVar6 = (undefined8 *)(*(code *)*puVar11)(param_13,uVar17 + 1);
      lVar19 = param_13[2];
      uVar17 = *(uint *)(param_13 + 3);
      *(uint *)(param_13 + 3) = uVar17 + 1;
      param_12 = param_13;
      puVar4 = puVar10;
      if (lVar19 == 0) goto code_r0x023dbd28;
    }
    if (uVar17 < *(uint *)(lVar19 + 0x18)) {
      *(int *)(lVar19 + (long)(int)uVar17 * 4 + 0x20) = (int)puVar10;
      *(int *)((long)param_13 + 0x1c) = *(int *)((long)param_13 + 0x1c) + 1;
      return puVar6;
    }
    uVar5 = func_0x00f78b24();
    auVar36 = func_0x00f78ac0(uVar5,0);
    plVar9 = auVar36._8_8_;
    lVar19 = auVar36._0_8_;
    *(undefined8 **)(puVar2 + -0x60) = puVar7;
    *(long *)(puVar2 + -0x58) = auVar37._8_8_;
    *(long *)(puVar2 + -0x50) = lVar20;
    *(undefined8 **)(puVar2 + -0x48) = param_11;
    *(undefined8 **)(puVar2 + -0x40) = puVar10;
    *(undefined8 **)(puVar2 + -0x38) = param_13;
    *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x28) =
         &System_Collections_Generic_List_int___System_Collections_IList_Add;
    (*(code *)**(undefined8 **)(*(long *)(puVar11[3] + 0xc0) + 0x48))(plVar9,0x14);
    if (lVar19 != 0) {
      pcVar22 = (code *)**(undefined8 **)(*(long *)(puVar11[3] + 0xc0) + 0x28);
      lVar20 = *(long *)(*(long *)(puVar11[3] + 0xc0) + 0x38);
      if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar20);
      }
      if (plVar9 != (long *)0x0) {
        if (*(long *)(*plVar9 + 0x40) == *(long *)(lVar20 + 0x40)) {
          puVar8 = (undefined4 *)func_0x00f78ae4(plVar9);
          (*pcVar22)(lVar19,*puVar8,*(undefined8 *)(*(long *)(puVar11[3] + 0xc0) + 0x28));
          iVar3 = (*(code *)**(undefined8 **)(*(long *)(puVar11[3] + 0xc0) + 0x68))(lVar19);
          return (undefined8 *)(ulong)(iVar3 - 1);
        }
        func_0x00f78e5c(plVar9,lVar20);
        goto code_r0x023dbf10;
      }
    }
    func_0x00f78af4();
code_r0x023dbf10:
                    /* WARNING: Does not return */
    pcVar22 = (code *)SoftwareBreakpoint(1,0x23dbf14);
    (*pcVar22)();
  }
  param_3 = param_3 + param_6 * param_7;
  fStack_a4 = param_3 + 0.0;
  param_2 = param_2 + param_5 * param_7;
  fStack_a8 = param_2 + unaff_w24;
  fVar27 = fVar30 + param_4 * param_7;
  fVar34 = fVar30 + param_4 * param_8;
  puStack_b8 = &UNK_0147493c;
  lVar20 = puVar4[2];
  fVar35 = fVar34 + 0.0;
  if (lVar20 == 0) {
code_r0x0249c720:
    param_3 = fVar34;
    fVar27 = fVar30;
    param_2 = fVar35;
    puVar7 = (undefined8 *)func_0x00f78af4();
    lVar20 = extraout_x9_00;
    uVar17 = extraout_w8_00;
code_r0x0249c724:
    *(uint *)(puVar4 + 3) = uVar17 + 1;
  }
  else {
    uVar17 = *(uint *)(puVar4 + 3);
    puVar7 = puVar4;
    if (uVar17 != *(uint *)(lVar20 + 0x18)) goto code_r0x0249c724;
    param_11 = *(undefined8 **)(*(long *)(*(long *)(lRam0000000003d3cb28 + 0x18) + 0xc0) + 0x60);
    puVar7 = (undefined8 *)(*(code *)*param_11)(puVar4,uVar17 + 1);
    lVar20 = puVar4[2];
    uVar17 = *(uint *)(puVar4 + 3);
    *(uint *)(puVar4 + 3) = uVar17 + 1;
    fVar35 = param_2;
    fVar30 = fVar27;
    fVar34 = param_3;
    if (lVar20 == 0) goto code_r0x0249c720;
  }
  if (uVar17 < *(uint *)(lVar20 + 0x18)) {
    lVar20 = lVar20 + (long)(int)uVar17 * 0xc;
    *(float *)(lVar20 + 0x20) = fVar27;
    *(float *)(lVar20 + 0x24) = param_2;
    *(float *)(lVar20 + 0x28) = param_3;
    *(int *)((long)puVar4 + 0x1c) = *(int *)((long)puVar4 + 0x1c) + 1;
    return puVar7;
  }
  uVar5 = func_0x00f78b24();
  auVar37 = func_0x00f78ac0(uVar5,0);
  plVar9 = auVar37._8_8_;
  lVar20 = auVar37._0_8_;
  puStack_f8 = &System_Collections_Generic_List_float3___System_Collections_IList_Add;
  ppppppuStack_100 = &pppppuStack_c0;
  (*(code *)**(undefined8 **)(*(long *)(param_11[3] + 0xc0) + 0x48))(plVar9,0x14);
  if (lVar20 != 0) {
    pcVar22 = (code *)**(undefined8 **)(*(long *)(param_11[3] + 0xc0) + 0x28);
    lVar19 = *(long *)(*(long *)(param_11[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar19);
    }
    if (plVar9 != (long *)0x0) {
      if (*(long *)(*plVar9 + 0x40) == *(long *)(lVar19 + 0x40)) {
        puVar8 = (undefined4 *)func_0x00f78ae4(plVar9);
        (*pcVar22)(*puVar8,puVar8[1],puVar8[2],lVar20,
                   *(undefined8 *)(*(long *)(param_11[3] + 0xc0) + 0x28));
        iVar3 = (*(code *)**(undefined8 **)(*(long *)(param_11[3] + 0xc0) + 0x68))(lVar20);
        return (undefined8 *)(ulong)(iVar3 - 1);
      }
      func_0x00f78e5c(plVar9,lVar19);
      goto code_r0x0249c91c;
    }
  }
  func_0x00f78af4();
code_r0x0249c91c:
                    /* WARNING: Does not return */
  pcVar22 = (code *)SoftwareBreakpoint(1,0x249c920);
  (*pcVar22)();
code_r0x014750c4:
  uVar5 = func_0x00f78b24();
  func_0x00f78ac0(uVar5,0);
  goto code_r0x014750d0;
}



// ============================================================
// RVA: 0x1474868 | Atlas.Geometry.BarrierBehaviour.AddCrossSectionVerts
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14749a0 | Atlas.Geometry.BarrierBehaviour.AddQuad
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1474a68 | Atlas.Geometry.BarrierBehaviour.CreateMeshData
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Geometry_BarrierBehaviour__CreateMeshData
                (undefined1 param_1 [16],undefined4 param_2,float param_3,long param_4,long param_5,
                long param_6)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  uint extraout_w8;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  long extraout_x9;
  float *pfVar17;
  float *pfVar18;
  ulong uVar19;
  ulong uVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  code *pcVar24;
  long lVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined4 uVar34;
  undefined1 auVar35 [16];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  
  lVar22 = 0x3eb4000;
  if ((bRam0000000003eb4883 & 1) == 0) {
    func_0x00f78a20(0x3d3ac90);
    func_0x00f78a20(0x3d3acc8);
    func_0x00f78a20(0x3d3ac78);
    func_0x00f78a20(0x3d1daa8);
    func_0x00f78a20(0x3d26a90);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d1f3d8);
    func_0x00f78a20(0x3d1f690);
    func_0x00f78a20(0x3d1f698);
    bRam0000000003eb4883 = 1;
  }
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = 0x3d26a90;
  uVar19 = 0x3d26a90;
  iVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(param_5,0,0);
  if (iVar2 != 0) {
code_r0x01474b68:
    uVar3 = func_0x00f78aec(/*Atlas.Geometry.BarrierBehaviour.MeshData_TypeInfo*/ uRam0000000003d26a90);
    /*Atlas.Geometry.BarrierBehaviour.MeshData$$.ctor*/ func_0x01547154(uVar3,0);
    return uVar3;
  }
  if (*(char *)(param_4 + 0x8c) == '\0') {
    uVar20 = uVar19;
    if (param_5 != 0) goto code_r0x01474bac;
  }
  else {
    uVar20 = uVar3;
    if (param_5 != 0) {
      lVar22 = /*UnityEngine.Mesh$$get_uv2*/ func_0x03241fcc(param_5,0);
      if (lVar22 == 0) goto code_r0x01474b68;
code_r0x01474bac:
      /*UnityEngine.Mesh$$get_bounds*/ func_0x03241090(&uStack_d8,param_5,0);
      uStack_b8 = uStack_d0;
      uStack_c0 = uStack_d8;
      uStack_b0 = uStack_c8;
      if (*(char *)(param_4 + 0x6c) != '\0') {
        fVar26 = (float)/*UnityEngine.Bounds$$get_min*/ func_0x0321b548(&uStack_c0,0);
        uVar28 = param_2;
        fVar31 = param_3;
        fVar27 = (float)/*UnityEngine.Bounds$$get_max*/ func_0x0321b5b8(&uStack_c0,0);
        /*UnityEngine.Bounds$$SetMinMax*/ func_0x0321b5d8(-fVar27,param_2,param_3,-fVar26,uVar28,fVar31,&uStack_c0,0);
      }
      /*UnityEngine.Bounds$$get_extents*/ func_0x0321b3e4(&uStack_c0,0);
      fVar26 = 0.0;
      fVar31 = param_3;
      if ((int)param_6 != 0) {
        /*UnityEngine.Bounds$$get_min*/ func_0x0321b548(&uStack_c0,0);
        fVar26 = -fVar31;
      }
      lVar4 = /*UnityEngine.Mesh$$get_vertices*/ func_0x03241cdc(param_5,0);
      lVar22 = /*UnityEngine.Mesh$$get_normals*/ func_0x03241d98(param_5,0);
      lVar5 = /*UnityEngine.Mesh$$get_uv*/ func_0x03241f10(param_5,0);
      lVar6 = /*UnityEngine.Mesh$$get_uv2*/ func_0x03241fcc(param_5,0);
      lVar7 = /*UnityEngine.Mesh$$get_triangles*/ func_0x032447ec(param_5,0);
      param_6 = lVar4;
      if (*(char *)(param_4 + 0x6c) == '\0') {
code_r0x01474d44:
        uVar20 = uVar19;
        if (lVar4 != 0) {
code_r0x01474d48:
          uVar19 = *(ulong *)(lVar4 + 0x18);
          uVar3 = func_0x00f78aec(/*Atlas.Geometry.BarrierBehaviour.MeshData_TypeInfo*/ uRam0000000003d26a90);
          /*Atlas.Geometry.BarrierBehaviour.MeshData$$.ctor*/ func_0x01547154(uVar3,0);
          uVar8 = func_0x00f78a34(/*Unity.Mathematics.float3[]_TypeInfo*/ uRam0000000003d1f698,uVar19);
          uVar20 = 0x3d1f698;
          if (uVar3 != 0) {
            *(undefined8 *)(uVar3 + 0x10) = uVar8;
            uVar8 = func_0x00f78a34(/*Unity.Mathematics.float3[]_TypeInfo*/ uRam0000000003d1f698,uVar19);
            *(undefined8 *)(uVar3 + 0x18) = uVar8;
            uVar8 = func_0x00f78a34(/*Unity.Mathematics.float2[]_TypeInfo*/ uRam0000000003d1f690,uVar19);
            *(undefined8 *)(uVar3 + 0x20) = uVar8;
            uVar8 = func_0x00f78a34(/*float[]_TypeInfo*/ uRam0000000003d1f3d8,uVar19);
            *(undefined8 *)(uVar3 + 0x30) = uVar8;
            *(long *)(uVar3 + 0x38) = lVar7;
            *(float *)(uVar3 + 0x50) = param_3 + param_3;
            fVar27 = (float)/*UnityEngine.Bounds$$get_min*/ func_0x0321b548(&uStack_c0,0);
            *(float *)(uVar3 + 0x54) = fVar27 - *(float *)(param_4 + 0x80);
            fVar27 = (float)/*UnityEngine.Bounds$$get_max*/ func_0x0321b5b8(&uStack_c0,0);
            *(float *)(uVar3 + 0x58) = fVar27 + *(float *)(param_4 + 0x84);
            if (*(char *)(param_4 + 0x8c) != '\0') {
              uVar8 = func_0x00f78a34(/*Unity.Mathematics.float2[]_TypeInfo*/ uRam0000000003d1f690,uVar19);
              *(undefined8 *)(uVar3 + 0x28) = uVar8;
            }
            /*UnityEngine.Bounds$$get_min*/ func_0x0321b548(&uStack_c0,0);
            fVar32 = fVar31;
            /*UnityEngine.Bounds$$get_max*/ func_0x0321b5b8(&uStack_c0,0);
            uVar20 = 0x3d1daa8;
            lVar7 = func_0x00f78aec(/*System.Collections.Generic.List<int>_TypeInfo*/ uRam0000000003d1daa8);
            param_6 = 0x3d3ac78;
            /*System.Collections.Generic.List<int>$$.ctor*/ func_0x023db018(lVar7,uRam0000000003d3ac78);
            lVar9 = func_0x00f78aec(/*System.Collections.Generic.List<int>_TypeInfo*/ uRam0000000003d1daa8);
            /*System.Collections.Generic.List<int>$$.ctor*/ func_0x023db018(lVar9,uRam0000000003d3ac78);
            fVar27 = _UNK_033f8148;
            if (0 < (int)uVar19) {
              uVar20 = 0;
              uVar16 = 0;
              param_6 = lVar4 + 0x28;
              lVar23 = 0x24;
              do {
                if (*(uint *)(lVar4 + 0x18) <= uVar16) goto code_r0x014750c4;
                pfVar17 = (float *)(param_6 + uVar20);
                fVar29 = pfVar17[-1];
                fVar33 = *pfVar17;
                uVar28 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(pfVar17[-2],0);
                if (fVar33 - fVar31 <= fVar27) {
                  if (lVar7 == 0) goto code_r0x014750d0;
                  /*System.Collections.Generic.List<int>$$Add*/ func_0x023dbccc(lVar7,uVar16,uRam0000000003d3ac90);
                }
                if (fVar32 - fVar33 <= fVar27) {
                  if (lVar9 == 0) goto code_r0x014750d0;
                  /*System.Collections.Generic.List<int>$$Add*/ func_0x023dbccc(lVar9,uVar16,uRam0000000003d3ac90);
                }
                lVar14 = *(long *)(uVar3 + 0x10);
                if (lVar14 == 0) goto code_r0x014750d0;
                if (*(uint *)(lVar14 + 0x18) <= uVar16) goto code_r0x014750c4;
                lVar14 = lVar14 + uVar20;
                *(undefined4 *)(lVar14 + 0x20) = uVar28;
                *(float *)(lVar14 + 0x24) = fVar29;
                *(float *)(lVar14 + 0x28) = fVar26 + fVar33;
                if (lVar22 == 0) goto code_r0x014750d0;
                if (*(uint *)(lVar22 + 0x18) <= uVar16) goto code_r0x014750c4;
                lVar25 = *(long *)(uVar3 + 0x18);
                lVar14 = lVar22 + uVar20;
                uVar30 = *(undefined4 *)(lVar14 + 0x24);
                uVar34 = *(undefined4 *)(lVar14 + 0x28);
                uVar28 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(*(undefined4 *)(lVar14 + 0x20),0);
                if (lVar25 == 0) goto code_r0x014750d0;
                if (*(uint *)(lVar25 + 0x18) <= uVar16) goto code_r0x014750c4;
                lVar25 = lVar25 + uVar20;
                *(undefined4 *)(lVar25 + 0x20) = uVar28;
                *(undefined4 *)(lVar25 + 0x24) = uVar30;
                *(undefined4 *)(lVar25 + 0x28) = uVar34;
                if (lVar5 == 0) goto code_r0x014750d0;
                if (*(uint *)(lVar5 + 0x18) <= uVar16) goto code_r0x014750c4;
                lVar14 = *(long *)(uVar3 + 0x20);
                uVar30 = *(undefined4 *)(lVar5 + lVar23);
                uVar28 = /*Unity.Mathematics.float2$$op_Implicit*/ func_0x030c22cc(((undefined4 *)(lVar5 + lVar23))[-1],0);
                if (lVar14 == 0) goto code_r0x014750d0;
                if (*(uint *)(lVar14 + 0x18) <= uVar16) goto code_r0x014750c4;
                ((undefined4 *)(lVar14 + lVar23))[-1] = uVar28;
                *(undefined4 *)(lVar14 + lVar23) = uVar30;
                lVar14 = *(long *)(uVar3 + 0x30);
                if (lVar14 == 0) goto code_r0x014750d0;
                if (*(uint *)(lVar14 + 0x18) <= uVar16) goto code_r0x014750c4;
                *(float *)(lVar14 + uVar16 * 4 + 0x20) =
                     (1.0 / (param_3 + param_3)) * (fVar26 + fVar33);
                if (((*(char *)(param_4 + 0x8c) != '\0') && (lVar6 != 0)) &&
                   ((long)uVar16 < (long)(int)*(uint *)(lVar6 + 0x18))) {
                  if (*(uint *)(lVar6 + 0x18) <= uVar16) goto code_r0x014750c4;
                  lVar14 = *(long *)(uVar3 + 0x28);
                  uVar30 = *(undefined4 *)(lVar6 + lVar23);
                  uVar28 = /*Unity.Mathematics.float2$$op_Implicit*/ func_0x030c22cc(((undefined4 *)(lVar6 + lVar23))[-1],0);
                  if (lVar14 == 0) goto code_r0x014750d0;
                  if (*(uint *)(lVar14 + 0x18) <= uVar16) goto code_r0x014750c4;
                  ((undefined4 *)(lVar14 + lVar23))[-1] = uVar28;
                  *(undefined4 *)(lVar14 + lVar23) = uVar30;
                }
                uVar16 = uVar16 + 1;
                uVar20 = uVar20 + 0xc;
                lVar23 = lVar23 + 8;
              } while ((uVar19 & 0xffffffff) * 0xc != uVar20);
            }
            if (lVar7 != 0) {
              uVar8 = /*System.Collections.Generic.List<int>$$ToArray*/ func_0x023dd918(lVar7,uRam0000000003d3acc8);
              *(undefined8 *)(uVar3 + 0x40) = uVar8;
              uVar20 = 0x3d3acc8;
              if (lVar9 != 0) {
                uVar8 = /*System.Collections.Generic.List<int>$$ToArray*/ func_0x023dd918(lVar9,uRam0000000003d3acc8);
                *(undefined8 *)(uVar3 + 0x48) = uVar8;
                return uVar3;
              }
            }
          }
        }
      }
      else {
        uVar20 = uVar3;
        if (lVar4 != 0) {
          uVar16 = *(ulong *)(lVar4 + 0x18);
          if (0 < (int)uVar16) {
            uVar13 = 0;
            pfVar17 = (float *)(lVar4 + 0x20);
            pfVar18 = (float *)(lVar22 + 0x20);
            do {
              *pfVar17 = -*pfVar17;
              uVar20 = uVar19;
              if (lVar22 == 0) goto code_r0x014750d0;
              uVar20 = uVar3;
              if (*(uint *)(lVar22 + 0x18) <= uVar13) goto code_r0x014750c4;
              *pfVar18 = -*pfVar18;
              uVar13 = uVar13 + 1;
              pfVar17 = pfVar17 + 3;
              pfVar18 = pfVar18 + 3;
            } while ((uVar16 & 0xffffffff) != uVar13);
          }
          uVar20 = uVar19;
          if (lVar7 != 0) {
            uVar21 = *(uint *)(lVar7 + 0x18);
            if (0 < (int)uVar21) {
              uVar15 = 0;
              do {
                uVar20 = uVar3;
                if ((uVar21 <= uVar15) || (uVar1 = uVar15 + 2, uVar20 = uVar19, uVar21 <= uVar1))
                goto code_r0x014750c4;
                lVar9 = lVar7 + 0x20;
                uVar28 = *(undefined4 *)(lVar9 + (long)(int)uVar15 * 4);
                *(undefined4 *)(lVar9 + (long)(int)uVar15 * 4) =
                     *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4);
                *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4) = uVar28;
                uVar15 = uVar15 + 3;
              } while ((int)uVar15 < (int)uVar21);
              goto code_r0x01474d44;
            }
            goto code_r0x01474d48;
          }
        }
      }
    }
  }
code_r0x014750d0:
  lVar4 = func_0x00f78af4();
  /*Atlas.Geometry.TrackEditorUpdatableBehaviour$$ClearDependencies*/ func_0x0151103c(lVar4,0);
  lVar5 = *(long *)(lVar4 + 0x50);
  if ((bRam0000000003eb4d6f & 1) == 0) {
    func_0x00f78a20(0x3d3dce8,lVar5,0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4d6f = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar5,0,0);
  if ((uVar3 & 1) != 0) {
    return uVar3;
  }
  uVar3 = *(ulong *)(lVar4 + 0x28);
  if (uVar3 == 0) {
    uVar19 = func_0x00f78af4();
    uVar3 = uVar19;
    if ((bRam0000000003eb4d70 & 1) == 0) {
      func_0x00f78a20(0x3d3dd00);
      func_0x00f78a20(0x3d3dd08);
      uVar3 = func_0x00f78a20(0x3d3dd10);
      bRam0000000003eb4d70 = 1;
    }
    lVar22 = *(long *)(uVar19 + 0x28);
    if (lVar22 != 0) {
      iVar2 = *(int *)(lVar22 + 0x18);
      if (iVar2 < 1) goto code_r0x01510950;
      uVar21 = 0;
      do {
        if (*(uint *)(lVar22 + 0x18) <= uVar21) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar22 = *(long *)(*(long *)(lVar22 + 0x10) + (long)(int)uVar21 * 0x10 + 0x20);
        if ((lVar22 == 0) || (*(long *)(uVar19 + 0x28) == 0)) break;
        uVar3 = /*System.Collections.Generic.List<TrackEditorUpdatableBehaviour.Dependency>$$set_Item*/ func_0x025b57b8(*(long *)(uVar19 + 0x28),uVar21,lVar22,
                                *(undefined8 *)(lVar22 + 0x20),uRam0000000003d3dd10);
        if (iVar2 - 1U == uVar21) goto code_r0x01510950;
        lVar22 = *(long *)(uVar19 + 0x28);
        uVar21 = uVar21 + 1;
      } while (lVar22 != 0);
    }
    uVar3 = func_0x00f78af4();
code_r0x01510950:
    *(undefined8 *)(uVar19 + 0x20) = *(undefined8 *)(uVar19 + 0x18);
    return uVar3;
  }
  puVar12 = (undefined8 *)0xffffffffffffffff;
  lVar4 = *(long *)(uVar3 + 0x10);
  if (lVar4 == 0) {
code_r0x025b5b78:
    lVar5 = lVar22;
    uVar3 = uVar20;
    uVar19 = func_0x00f78af4();
    lVar4 = extraout_x9;
    uVar21 = extraout_w8;
code_r0x025b5b7c:
    *(uint *)(uVar3 + 0x18) = uVar21 + 1;
  }
  else {
    param_6 = -1;
    uVar21 = *(uint *)(uVar3 + 0x18);
    uVar19 = uVar3;
    if (uVar21 != *(uint *)(lVar4 + 0x18)) goto code_r0x025b5b7c;
    puVar12 = *(undefined8 **)(*(long *)(*(long *)(lRam0000000003d3dce8 + 0x18) + 0xc0) + 0x60);
    uVar19 = (*(code *)*puVar12)(uVar3,uVar21 + 1);
    lVar4 = *(long *)(uVar3 + 0x10);
    uVar21 = *(uint *)(uVar3 + 0x18);
    *(uint *)(uVar3 + 0x18) = uVar21 + 1;
    uVar20 = uVar3;
    lVar22 = lVar5;
    if (lVar4 == 0) goto code_r0x025b5b78;
  }
  if (uVar21 < *(uint *)(lVar4 + 0x18)) {
    lVar4 = lVar4 + (long)(int)uVar21 * 0x10;
    *(long *)(lVar4 + 0x20) = lVar5;
    *(long *)(lVar4 + 0x28) = param_6;
    *(int *)(uVar3 + 0x1c) = *(int *)(uVar3 + 0x1c) + 1;
    return uVar19;
  }
  uVar8 = func_0x00f78b24();
  auVar35 = func_0x00f78ac0(uVar8,0);
  plVar11 = auVar35._8_8_;
  lVar22 = auVar35._0_8_;
  (*(code *)**(undefined8 **)(*(long *)(puVar12[3] + 0xc0) + 0x48))(plVar11,0x14);
  if (lVar22 != 0) {
    pcVar24 = (code *)**(undefined8 **)(*(long *)(puVar12[3] + 0xc0) + 0x28);
    lVar4 = *(long *)(*(long *)(puVar12[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar4);
    }
    if (plVar11 != (long *)0x0) {
      if (*(long *)(*plVar11 + 0x40) == *(long *)(lVar4 + 0x40)) {
        puVar10 = (undefined8 *)func_0x00f78ae4(plVar11);
        (*pcVar24)(lVar22,*puVar10,puVar10[1],*(undefined8 *)(*(long *)(puVar12[3] + 0xc0) + 0x28));
        iVar2 = (*(code *)**(undefined8 **)(*(long *)(puVar12[3] + 0xc0) + 0x68))(lVar22);
        return (ulong)(iVar2 - 1);
      }
      func_0x00f78e5c(plVar11,lVar4);
      goto code_r0x025b5d64;
    }
  }
  func_0x00f78af4();
code_r0x025b5d64:
                    /* WARNING: Does not return */
  pcVar24 = (code *)SoftwareBreakpoint(1,0x25b5d68);
  (*pcVar24)();
code_r0x014750c4:
  uVar8 = func_0x00f78b24();
  func_0x00f78ac0(uVar8,0);
  goto code_r0x014750d0;
}



// ============================================================
// RVA: 0x14750d4 | Atlas.Geometry.BarrierBehaviour.OnInspectorValuesChanged
// ============================================================

ulong Atlas_Geometry_BarrierBehaviour__OnInspectorValuesChanged(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  uint extraout_w8;
  long lVar8;
  long extraout_x9;
  ulong unaff_x19;
  uint uVar9;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long lVar10;
  code *pcVar11;
  undefined1 auVar12 [16];
  
  /*Atlas.Geometry.TrackEditorUpdatableBehaviour$$ClearDependencies*/ func_0x0151103c(param_1,0);
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  if ((bRam0000000003eb4d6f & 1) == 0) {
    func_0x00f78a20(0x3d3dce8,uVar5,0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4d6f = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar5,0,0);
  if ((uVar2 & 1) != 0) {
    return uVar2;
  }
  uVar2 = *(ulong *)(param_1 + 0x28);
  if (uVar2 == 0) {
    uVar3 = func_0x00f78af4();
    uVar2 = uVar3;
    if ((bRam0000000003eb4d70 & 1) == 0) {
      func_0x00f78a20(0x3d3dd00);
      func_0x00f78a20(0x3d3dd08);
      uVar2 = func_0x00f78a20(0x3d3dd10);
      bRam0000000003eb4d70 = 1;
    }
    lVar8 = *(long *)(uVar3 + 0x28);
    if (lVar8 != 0) {
      iVar1 = *(int *)(lVar8 + 0x18);
      if (iVar1 < 1) goto code_r0x01510950;
      uVar9 = 0;
      do {
        if (*(uint *)(lVar8 + 0x18) <= uVar9) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0x10) + (long)(int)uVar9 * 0x10 + 0x20);
        if ((lVar8 == 0) || (*(long *)(uVar3 + 0x28) == 0)) break;
        uVar2 = /*System.Collections.Generic.List<TrackEditorUpdatableBehaviour.Dependency>$$set_Item*/ func_0x025b57b8(*(long *)(uVar3 + 0x28),uVar9,lVar8,*(undefined8 *)(lVar8 + 0x20),
                                uRam0000000003d3dd10);
        if (iVar1 - 1U == uVar9) goto code_r0x01510950;
        lVar8 = *(long *)(uVar3 + 0x28);
        uVar9 = uVar9 + 1;
      } while (lVar8 != 0);
    }
    uVar2 = func_0x00f78af4();
code_r0x01510950:
    *(undefined8 *)(uVar3 + 0x20) = *(undefined8 *)(uVar3 + 0x18);
    return uVar2;
  }
  puVar7 = (undefined8 *)0xffffffffffffffff;
  lVar8 = *(long *)(uVar2 + 0x10);
  if (lVar8 == 0) {
code_r0x025b5b78:
    uVar5 = unaff_x21;
    uVar2 = unaff_x19;
    uVar3 = func_0x00f78af4();
    lVar8 = extraout_x9;
    uVar9 = extraout_w8;
code_r0x025b5b7c:
    *(uint *)(uVar2 + 0x18) = uVar9 + 1;
  }
  else {
    unaff_x20 = 0xffffffffffffffff;
    uVar9 = *(uint *)(uVar2 + 0x18);
    uVar3 = uVar2;
    if (uVar9 != *(uint *)(lVar8 + 0x18)) goto code_r0x025b5b7c;
    puVar7 = *(undefined8 **)(*(long *)(*(long *)(lRam0000000003d3dce8 + 0x18) + 0xc0) + 0x60);
    uVar3 = (*(code *)*puVar7)(uVar2,uVar9 + 1);
    lVar8 = *(long *)(uVar2 + 0x10);
    uVar9 = *(uint *)(uVar2 + 0x18);
    *(uint *)(uVar2 + 0x18) = uVar9 + 1;
    unaff_x19 = uVar2;
    unaff_x21 = uVar5;
    if (lVar8 == 0) goto code_r0x025b5b78;
  }
  if (uVar9 < *(uint *)(lVar8 + 0x18)) {
    lVar8 = lVar8 + (long)(int)uVar9 * 0x10;
    *(undefined8 *)(lVar8 + 0x20) = uVar5;
    *(undefined8 *)(lVar8 + 0x28) = unaff_x20;
    *(int *)(uVar2 + 0x1c) = *(int *)(uVar2 + 0x1c) + 1;
    return uVar3;
  }
  uVar5 = func_0x00f78b24();
  auVar12 = func_0x00f78ac0(uVar5,0);
  plVar6 = auVar12._8_8_;
  lVar8 = auVar12._0_8_;
  (*(code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x48))(plVar6,0x14);
  if (lVar8 != 0) {
    pcVar11 = (code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x28);
    lVar10 = *(long *)(*(long *)(puVar7[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar10);
    }
    if (plVar6 != (long *)0x0) {
      if (*(long *)(*plVar6 + 0x40) == *(long *)(lVar10 + 0x40)) {
        puVar4 = (undefined8 *)func_0x00f78ae4(plVar6);
        (*pcVar11)(lVar8,*puVar4,puVar4[1],*(undefined8 *)(*(long *)(puVar7[3] + 0xc0) + 0x28));
        iVar1 = (*(code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x68))(lVar8);
        return (ulong)(iVar1 - 1);
      }
      func_0x00f78e5c(plVar6,lVar10);
      goto code_r0x025b5d64;
    }
  }
  func_0x00f78af4();
code_r0x025b5d64:
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x25b5d68);
  (*pcVar11)();
}



// ============================================================
// RVA: 0x1475104 | Atlas.Geometry.BarrierBehaviour.OnDrawGizmos
// ============================================================

void Atlas_Geometry_BarrierBehaviour__OnDrawGizmos(void)

{
  return;
}



// ============================================================
// RVA: 0x1475108 | Atlas.Geometry.BarrierBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_Geometry_BarrierBehaviour___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb4885 & 1) == 0) {
    func_0x00f78a20(0x3d3cb18);
    func_0x00f78a20(0x3d1e030);
    bRam0000000003eb4885 = 1;
  }
  *(undefined4 *)(param_1 + 0x60) = 5;
  *(undefined2 *)(param_1 + 0x74) = 0x101;
  *(undefined4 *)(param_1 + 0x78) = 2;
  *(undefined1 *)(param_1 + 0x7c) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0x3a83126f3a83126f;
  *(undefined4 *)(param_1 + 0x88) = 0x41200000;
  *(undefined1 *)(param_1 + 0x8c) = 1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<float3>_TypeInfo*/ uRam0000000003d1e030);
  /*System.Collections.Generic.List<float3>$$.ctor*/ func_0x0249b9d4(uVar1,uRam0000000003d3cb18);
  *(undefined8 *)(param_1 + 0x98) = uVar1;
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



