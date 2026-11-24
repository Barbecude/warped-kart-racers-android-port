// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Services.ReplicatorFloorClampEsq

// ============================================================
// RVA: 0x16820f8 | Core.Services.ReplicatorFloorClampEsq.Init
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
Core_Services_ReplicatorFloorClampEsq__Init
          (undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  float extraout_s0;
  float fVar8;
  float fVar9;
  undefined8 extraout_d0;
  undefined8 extraout_var;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined8 uStack_ec;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((bRam0000000003eb59fa & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb59fa = 1;
  }
  *(undefined1 *)(param_4 + 0x10) = 1;
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(param_5,0,0);
  auVar10._8_8_ = extraout_var;
  auVar10._0_8_ = extraout_d0;
  if (iVar2 == 0) {
    if (param_5 == 0) {
      lVar3 = func_0x00f78af4();
      if ((bRam0000000003eb59fb & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        func_0x00f78a20(0x3d243f8);
        bRam0000000003eb59fb = 1;
      }
      uStack_ec = 0;
      uStack_f0 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_f4 = 0;
      uStack_100 = 0;
      if (((*(byte *)(/*Core.Services.ReplicatorFloorClampEsq_TypeInfo*/ lRam0000000003d243f8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(/*Core.Services.ReplicatorFloorClampEsq_TypeInfo*/ lRam0000000003d243f8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar7 = *(undefined8 *)(*(long *)(/*Core.Services.ReplicatorFloorClampEsq_TypeInfo*/ lRam0000000003d243f8 + 0xb8) + 8);
      /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar7,0);
      if (*(char *)(lVar3 + 0x10) != '\0') {
        fVar11 = *(float *)(lVar3 + 0x14);
        fVar12 = *(float *)(lVar3 + 0x18);
        /*UnityEngine.Vector3$$get_down*/ func_0x0327c0f8(0);
        fVar11 = fVar11 + fVar12;
        param_2 = param_2 + fVar11;
        uStack_128 = 0;
        uStack_120 = 0;
        uStack_118 = 0;
        fVar12 = param_2;
        fVar9 = param_3;
        /*UnityEngine.Ray$$.ctor*/ func_0x03252c50(extraout_s0,&uStack_128,0);
        if (((*(ushort *)(/*Core.Services.ReplicatorFloorClampEsq_TypeInfo*/ lRam0000000003d243f8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Services.ReplicatorFloorClampEsq_TypeInfo*/ lRam0000000003d243f8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar4 = /*UnityEngine.LayerMask$$op_Implicit*/ func_0x032326f8(**(undefined4 **)(/*Core.Services.ReplicatorFloorClampEsq_TypeInfo*/ lRam0000000003d243f8 + 0xb8),0);
        uStack_138 = uStack_120;
        uStack_140 = uStack_128;
        uStack_130 = uStack_118;
        /*UnityEngine.Physics$$Raycast*/ func_0x032a0440(fVar11 + _UNK_033f85d0,&uStack_140,&uStack_110,uVar4,1,0);
        fVar8 = (float)/*UnityEngine.Vector3$$get_down*/ func_0x0327c0f8(0);
        /*UnityEngine.Color$$get_white*/ func_0x032235a8(0);
        /*Debug$$DrawLine*/ func_0x0162ed3c(extraout_s0,param_2,param_3,extraout_s0 + fVar11 * fVar8,
                        param_2 + fVar11 * fVar12,param_3 + fVar11 * fVar9,0);
        uVar4 = /*UnityEngine.RaycastHit$$get_collider*/ func_0x032a1e30(&uStack_110,0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar5 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar4,0,0);
        fVar12 = 0.0;
        if ((uVar5 & 1) == 0) {
          lVar6 = /*UnityEngine.RaycastHit$$get_collider*/ func_0x032a1e30(&uStack_110,0);
          if (lVar6 == 0) {
            func_0x00f78af4();
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x168243c);
            (*pcVar1)();
          }
          uVar5 = /*UnityEngine.Collider$$get_isTrigger*/ func_0x0329e9e4(lVar6,0);
          fVar12 = 0.0;
          if ((uVar5 & 1) == 0) {
            fVar9 = (float)/*UnityEngine.RaycastHit$$get_distance*/ func_0x032a1f20(&uStack_110,0);
            *(float *)(lVar3 + 0x18) = fVar11 - fVar9;
            fVar12 = *(float *)(lVar3 + 0x14) * 2.5;
            if (fVar11 - fVar9 <= fVar12) goto code_r0x016823f8;
          }
        }
        *(float *)(lVar3 + 0x18) = fVar12;
      }
code_r0x016823f8:
      /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$EndSample*/ func_0x03250f64(uVar7,0);
      return ZEXT416((uint)extraout_s0);
    }
    /*UnityEngine.Collider$$get_bounds*/ func_0x0329eb38(&uStack_68,param_5,0);
    uStack_48 = uStack_60;
    uStack_50 = uStack_68;
    uStack_40 = uStack_58;
    auVar10 = /*UnityEngine.Bounds$$get_size*/ func_0x0321b508(&uStack_50,0);
    *(float *)(param_4 + 0x14) = param_2;
  }
  else {
    *(undefined1 *)(param_4 + 0x10) = 0;
  }
  return auVar10;
}



// ============================================================
// RVA: 0x16821c4 | Core.Services.ReplicatorFloorClampEsq.ClampToFloor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float Core_Services_ReplicatorFloorClampEsq__ClampToFloor
                (float param_1,float param_2,float param_3,long param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  
  if ((bRam0000000003eb59fb & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d243f8);
    bRam0000000003eb59fb = 1;
  }
  uStack_7c = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_90 = 0;
  if (((*(byte *)(/*Core.Services.ReplicatorFloorClampEsq_TypeInfo*/ lRam0000000003d243f8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*Core.Services.ReplicatorFloorClampEsq_TypeInfo*/ lRam0000000003d243f8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar5 = *(undefined8 *)(*(long *)(/*Core.Services.ReplicatorFloorClampEsq_TypeInfo*/ lRam0000000003d243f8 + 0xb8) + 8);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar5,0);
  if (*(char *)(param_4 + 0x10) != '\0') {
    fVar8 = *(float *)(param_4 + 0x14);
    fVar9 = *(float *)(param_4 + 0x18);
    /*UnityEngine.Vector3$$get_down*/ func_0x0327c0f8(0);
    fVar8 = fVar8 + fVar9;
    param_2 = param_2 + fVar8;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    fVar9 = param_2;
    fVar7 = param_3;
    /*UnityEngine.Ray$$.ctor*/ func_0x03252c50(param_1,&uStack_b8,0);
    if (((*(ushort *)(/*Core.Services.ReplicatorFloorClampEsq_TypeInfo*/ lRam0000000003d243f8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Services.ReplicatorFloorClampEsq_TypeInfo*/ lRam0000000003d243f8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar2 = /*UnityEngine.LayerMask$$op_Implicit*/ func_0x032326f8(**(undefined4 **)(/*Core.Services.ReplicatorFloorClampEsq_TypeInfo*/ lRam0000000003d243f8 + 0xb8),0);
    uStack_c8 = uStack_b0;
    uStack_d0 = uStack_b8;
    uStack_c0 = uStack_a8;
    /*UnityEngine.Physics$$Raycast*/ func_0x032a0440(fVar8 + _UNK_033f85d0,&uStack_d0,&uStack_a0,uVar2,1,0);
    fVar6 = (float)/*UnityEngine.Vector3$$get_down*/ func_0x0327c0f8(0);
    /*UnityEngine.Color$$get_white*/ func_0x032235a8(0);
    /*Debug$$DrawLine*/ func_0x0162ed3c(param_1,param_2,param_3,param_1 + fVar8 * fVar6,param_2 + fVar8 * fVar9,
                    param_3 + fVar8 * fVar7,0);
    uVar2 = /*UnityEngine.RaycastHit$$get_collider*/ func_0x032a1e30(&uStack_a0,0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar2,0,0);
    fVar9 = 0.0;
    if ((uVar3 & 1) == 0) {
      lVar4 = /*UnityEngine.RaycastHit$$get_collider*/ func_0x032a1e30(&uStack_a0,0);
      if (lVar4 == 0) {
        func_0x00f78af4();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x168243c);
        (*pcVar1)();
      }
      uVar3 = /*UnityEngine.Collider$$get_isTrigger*/ func_0x0329e9e4(lVar4,0);
      fVar9 = 0.0;
      if ((uVar3 & 1) == 0) {
        fVar7 = (float)/*UnityEngine.RaycastHit$$get_distance*/ func_0x032a1f20(&uStack_a0,0);
        *(float *)(param_4 + 0x18) = fVar8 - fVar7;
        fVar9 = *(float *)(param_4 + 0x14) * 2.5;
        if (fVar8 - fVar7 <= fVar9) goto LAB_016823f8;
      }
    }
    *(float *)(param_4 + 0x18) = fVar9;
  }
LAB_016823f8:
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$EndSample*/ func_0x03250f64(uVar5,0);
  return param_1;
}



// ============================================================
// RVA: 0x16824ac | Core.Services.ReplicatorFloorClampEsq..ctor
// ============================================================

void Core_Services_ReplicatorFloorClampEsq___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x16824b4 | Core.Services.ReplicatorFloorClampEsq..cctor
// ============================================================

ulong Core_Services_ReplicatorFloorClampEsq___cctor(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  if ((bRam0000000003eb59fc & 1) == 0) {
    func_0x00f78a20(0x3d243f8);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d6ba50);
    func_0x00f78a20(0x3d71df8);
    func_0x00f78a20(0x3d70a90);
    bRam0000000003eb59fc = 1;
  }
  plVar4 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,1);
  if (plVar4 == (long *)0x0) {
LAB_01682624:
    func_0x00f78af4();
  }
  else {
    if ((/*STR('Default')*/ lRam0000000003d6ba50 != 0) &&
       (lVar5 = func_0x00f78adc(/*STR('Default')*/ lRam0000000003d6ba50,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
    {
LAB_01682630:
      uVar7 = func_0x00f78b14();
      goto code_r0x01682634;
    }
    if ((int)plVar4[3] != 0) {
      plVar4[4] = /*STR('Default')*/ lRam0000000003d6ba50;
      uVar1 = /*UnityEngine.LayerMask$$GetMask*/ func_0x03232748(plVar4,0);
      plVar4 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,1);
      if (plVar4 == (long *)0x0) goto LAB_01682624;
      if ((/*STR('Obstacle')*/ lRam0000000003d70a90 != 0) &&
         (lVar5 = func_0x00f78adc(/*STR('Obstacle')*/ lRam0000000003d70a90,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)
         ) goto LAB_01682630;
      if ((int)plVar4[3] != 0) {
        plVar4[4] = /*STR('Obstacle')*/ lRam0000000003d70a90;
        uVar2 = /*UnityEngine.LayerMask$$GetMask*/ func_0x03232748(plVar4,0);
        uVar3 = /*UnityEngine.LayerMask$$op_Implicit*/ func_0x032326fc(uVar2 | uVar1,0);
        **(undefined4 **)(/*Core.Services.ReplicatorFloorClampEsq_TypeInfo*/ lRam0000000003d243f8 + 0xb8) = uVar3;
        uVar6 = /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$CreateMarker*/ func_0x03250e74(/*STR('ReplicatorFloorClampEsq.ClampToFloor()')*/ uRam0000000003d71df8,1,0,0,0);
        *(ulong *)(*(long *)(/*Core.Services.ReplicatorFloorClampEsq_TypeInfo*/ lRam0000000003d243f8 + 0xb8) + 8) = uVar6;
        return uVar6;
      }
    }
  }
  uVar7 = func_0x00f78b24();
code_r0x01682634:
  lVar5 = func_0x00f78ac0(uVar7,0);
  return (ulong)*(uint *)(lVar5 + 0x10);
}



