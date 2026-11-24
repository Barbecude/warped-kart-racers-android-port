// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.SpatialUtils

// ============================================================
// RVA: 0x14fd574 | Atlas.Gameplay.SpatialUtils.GetClosestToTransformIndex
// ============================================================

/* WARNING: Possible PIC construction at 0x014fd698: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014fd69c) */
/* WARNING: Removing unreachable block (ram,0x014fd6a0) */
/* WARNING: Removing unreachable block (ram,0x014fd6a4) */
/* WARNING: Removing unreachable block (ram,0x014fd6cc) */
/* WARNING: Removing unreachable block (ram,0x014fd6d8) */
/* WARNING: Removing unreachable block (ram,0x014fd6dc) */
/* WARNING: Removing unreachable block (ram,0x014fd6e0) */
/* WARNING: Removing unreachable block (ram,0x014fd6e4) */

ulong Atlas_Gameplay_SpatialUtils__GetClosestToTransformIndex
                (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6
                ,float param_7,long param_8,long param_9)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  undefined1 *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  float fStack_a8;
  
  uVar11 = (ulong)(uint)param_4;
  uVar12 = (ulong)(uint)param_3;
  uVar13 = (ulong)(uint)param_2;
  uVar14 = (ulong)(uint)param_1;
  fVar9 = param_2;
  fVar10 = param_3;
  fVar8 = param_4;
  if ((bRam0000000003eb4cd3 & 1) == 0) {
    func_0x00f78a20(0x3d3c490);
    func_0x00f78a20(0x3d3c498);
    bRam0000000003eb4cd3 = 1;
  }
  fStack_a8 = 0.0;
  uStack_b0 = 0;
  if (param_9 == 0) {
LAB_014fd734:
    param_4 = param_7;
    param_3 = param_6;
    param_2 = param_5;
    param_1 = fVar8;
    puVar4 = &Atlas_Gameplay_SpatialUtils__IsInFov;
    fStack_f0 = (float)func_0x00f78af4();
code_r0x014fd738:
    fStack_100 = param_1;
    fStack_fc = param_2;
    fStack_f8 = param_3;
    fStack_ec = fVar9;
    fStack_e8 = fVar10;
    uStack_e0 = uVar14;
    uStack_d8 = uVar13;
    uStack_d0 = uVar12;
    uStack_c8 = uVar11;
    puStack_c0 = &stack0xfffffffffffffff0;
    puStack_b8 = puVar4;
    fVar6 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&fStack_f0,0);
    fVar8 = fVar9;
    fVar5 = fVar10;
    fVar7 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&fStack_100,0);
    return (ulong)(param_4 <= fVar10 * fVar5 + fVar6 * fVar7 + fVar9 * fVar8);
  }
  uVar1 = (ulong)*(uint *)(param_9 + 0x18);
  if (0 < (int)*(uint *)(param_9 + 0x18)) {
    uVar3 = 0;
    do {
      if ((uVar1 & 0xffffffff) <= uVar3) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar2 = *(long *)(*(long *)(param_9 + 0x10) + uVar3 * 8 + 0x20);
      if (lVar2 != param_8) {
        if ((lVar2 == 0) || (fVar5 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar2,0), param_8 == 0))
        goto LAB_014fd734;
        fVar8 = fVar9;
        fVar6 = fVar10;
        fStack_f0 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(param_8,0);
        fStack_f0 = fVar5 - fStack_f0;
        fVar9 = fVar9 - fVar8;
        fVar10 = fVar10 - fVar6;
        uStack_b0 = CONCAT44(fVar9,fStack_f0);
        puVar4 = (undefined *)0x14fd69c;
        fStack_a8 = fVar10;
        goto code_r0x014fd738;
      }
      uVar3 = uVar3 + 1;
      uVar1 = (ulong)*(int *)(param_9 + 0x18);
    } while ((long)uVar3 < (long)uVar1);
  }
  return 0xffffffff;
}



// ============================================================
// RVA: 0x14fd738 | Atlas.Gameplay.SpatialUtils.IsInFov
// ============================================================

bool Atlas_Gameplay_SpatialUtils__IsInFov
               (undefined4 param_1,float param_2,float param_3,undefined4 param_4,undefined4 param_5
               ,undefined4 param_6,float param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_40;
  float fStack_3c;
  float fStack_38;
  
  uStack_50 = param_4;
  uStack_4c = param_5;
  uStack_48 = param_6;
  uStack_40 = param_1;
  fStack_3c = param_2;
  fStack_38 = param_3;
  fVar1 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&uStack_40,0);
  fVar3 = param_2;
  fVar4 = param_3;
  fVar2 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&uStack_50,0);
  return param_7 <= param_3 * fVar4 + fVar1 * fVar2 + param_2 * fVar3;
}



// ============================================================
// RVA: 0x14fd7b4 | Atlas.Gameplay.SpatialUtils.HasLoS
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Gameplay_SpatialUtils__HasLoS
                (float param_1,float param_2,float param_3,float param_4,long param_5,ulong param_6,
                ulong param_7,ulong param_8,ulong param_9)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 extraout_x1;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  ulong uVar11;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar12;
  undefined *puVar13;
  ulong extraout_d0;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  ulong unaff_d11;
  undefined1 auVar19 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  
  puVar12 = &stack0xfffffffffffffff0;
  uVar11 = 0x3eb4000;
  uVar7 = param_7;
  fVar14 = param_2;
  fVar16 = param_3;
  if ((bRam0000000003eb4cd5 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4cd5 = 1;
  }
  uStack_5c = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_70 = 0;
  uVar4 = param_7;
  fVar10 = param_3;
  if (param_5 == 0) {
LAB_014fd930:
    puVar13 = &Atlas_Gameplay_SpatialUtils__GetClosestToTransform;
    uVar3 = func_0x00f78af4();
    auVar19._8_8_ = extraout_x1;
    auVar19._0_8_ = uVar3;
    puVar1 = &uStack_c0;
    uVar5 = extraout_d0;
    while( true ) {
      fVar18 = param_4;
      fVar17 = fVar16;
      fVar15 = fVar14;
      uVar9 = param_9;
      uVar8 = uVar7;
      lVar6 = auVar19._8_8_;
      uVar3 = auVar19._0_8_;
      *(ulong *)((long)puVar1 + -0x60) = unaff_d11;
      *(ulong *)((long)puVar1 + -0x58) = (ulong)(uint)param_1;
      *(ulong *)((long)puVar1 + -0x50) = (ulong)(uint)param_2;
      *(ulong *)((long)puVar1 + -0x48) = (ulong)(uint)fVar10;
      *(undefined8 *)((long)puVar1 + -0x40) = unaff_x24;
      *(undefined8 *)((long)puVar1 + -0x38) = unaff_x23;
      *(ulong *)((long)puVar1 + -0x30) = uVar11;
      *(ulong *)((long)puVar1 + -0x28) = param_6;
      *(ulong *)((long)puVar1 + -0x20) = uVar4;
      *(long *)((long)puVar1 + -0x18) = param_5;
      *(undefined1 **)((long)puVar1 + -0x10) = puVar12;
      *(undefined **)((long)puVar1 + -8) = puVar13;
      unaff_d11 = uVar5 & 0xffffffff;
      unaff_x24 = 0x3eb4000;
      if ((bRam0000000003eb4cd4 & 1) == 0) {
        func_0x00f78a20(0x3d3c498);
        bRam0000000003eb4cd4 = 1;
      }
      fVar14 = fVar15;
      fVar16 = fVar17;
      uVar2 = Atlas_Gameplay_SpatialUtils__GetClosestToTransformIndex
                        (uVar5 & 0xffffffff,fVar15,fVar17,fVar18,uVar3,lVar6,uVar8,param_8,
                         uVar9 & 0xffffffff);
      if ((int)uVar2 < 0) break;
      if (lVar6 != 0) {
        if (*(uint *)(lVar6 + 0x18) <= uVar2) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        return *(ulong *)(*(long *)(lVar6 + 0x10) + (ulong)uVar2 * 8 + 0x20);
      }
      auVar19 = func_0x00f78af4();
      *(ulong *)((long)puVar1 + -0x80) = param_8;
      *(undefined8 *)((long)puVar1 + -0x78) = 0;
      *(undefined1 **)((long)puVar1 + -0x70) = (undefined1 *)((long)puVar1 + -0x10);
      *(undefined **)((long)puVar1 + -0x68) = &Atlas_Gameplay_SpatialUtils__GetClosestToTransform;
      uVar5 = /*UnityEngine.Vector3$$get_forward*/ func_0x03275868(0);
      param_8 = 0;
      puVar12 = *(undefined1 **)((long)puVar1 + -0x70);
      puVar13 = *(undefined **)((long)puVar1 + -0x68);
      uVar4 = *(ulong *)((long)puVar1 + -0x80);
      param_5 = *(long *)((long)puVar1 + -0x78);
      puVar1 = (undefined8 *)((long)puVar1 + -0x60);
      uVar7 = 0;
      param_9 = 0;
      param_6 = uVar8;
      uVar11 = uVar9;
      unaff_x23 = uVar3;
      param_4 = _UNK_033f85cc;
      fVar10 = fVar18;
      param_2 = fVar17;
      param_1 = fVar15;
    }
    return 0;
  }
  uVar11 = 0x3d23000;
  fStack_90 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(param_5,0);
  fStack_90 = fStack_90 - param_1;
  fStack_8c = fVar14 - param_2;
  fStack_88 = fVar16 - param_3;
  param_4 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&fStack_90,0);
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  fVar14 = param_2;
  /*UnityEngine.Ray$$.ctor*/ func_0x03252c50(param_1,&uStack_a8,0);
  fVar10 = (float)(param_6 >> 0x20);
  uVar3 = /*UnityEngine.LayerMask$$op_Implicit*/ func_0x032326f8(param_6 & 0xffffffff,0);
  uStack_b8 = uStack_a0;
  uStack_c0 = uStack_a8;
  uStack_b0 = uStack_98;
  param_9 = 0;
  /*UnityEngine.Physics$$Raycast*/ func_0x032a0440(fVar10,&uStack_c0,&uStack_80,uVar3);
  uVar4 = /*UnityEngine.RaycastHit$$get_collider*/ func_0x032a1e30(&uStack_80,0);
  param_8 = param_7;
  fVar16 = param_3;
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
    param_8 = param_7;
    fVar16 = param_3;
  }
  uVar7 = 0;
  uVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar4,0);
  if ((int)uVar5 != 0) {
    lVar6 = /*UnityEngine.RaycastHit$$get_collider*/ func_0x032a1e30(&uStack_80,0);
    if (lVar6 == 0) goto LAB_014fd930;
    lVar6 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar6,0);
    uVar5 = (ulong)(lVar6 == param_5);
  }
  return uVar5;
}



// ============================================================
// RVA: 0x14fd934 | Atlas.Gameplay.SpatialUtils.GetClosestToTransform
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
Atlas_Gameplay_SpatialUtils__GetClosestToTransform
          (uint param_1,uint param_2,uint param_3,uint param_4,undefined8 param_5,undefined8 param_6
          ,undefined8 param_7,undefined8 param_8,ulong param_9)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  ulong unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  ulong unaff_d11;
  undefined1 auVar6 [16];
  
  auVar6._8_8_ = param_6;
  auVar6._0_8_ = param_5;
  while( true ) {
    uVar5 = param_9;
    uVar4 = param_7;
    lVar3 = auVar6._8_8_;
    uVar2 = auVar6._0_8_;
    *(ulong *)((long)register0x00000008 + -0x60) = unaff_d11;
    *(ulong *)((long)register0x00000008 + -0x58) = unaff_d10;
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_d9;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    unaff_d8 = (ulong)param_4;
    unaff_d9 = (ulong)param_3;
    unaff_d10 = (ulong)param_2;
    unaff_d11 = (ulong)param_1;
    unaff_x24 = 0x3eb4000;
    if ((bRam0000000003eb4cd4 & 1) == 0) {
      func_0x00f78a20(0x3d3c498);
      bRam0000000003eb4cd4 = 1;
    }
    uVar1 = Atlas_Gameplay_SpatialUtils__GetClosestToTransformIndex
                      (param_1,param_2,param_3,param_4,uVar2,lVar3,uVar4,param_8,uVar5 & 0xffffffff)
    ;
    if ((int)uVar1 < 0) break;
    if (lVar3 != 0) {
      if (*(uint *)(lVar3 + 0x18) <= uVar1) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      return *(undefined8 *)(*(long *)(lVar3 + 0x10) + (ulong)uVar1 * 8 + 0x20);
    }
    auVar6 = func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0x80) = param_8;
    *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
    *(undefined1 **)((long)register0x00000008 + -0x70) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x68) =
         &Atlas_Gameplay_SpatialUtils__GetClosestToTransform;
    param_1 = /*UnityEngine.Vector3$$get_forward*/ func_0x03275868(0);
    param_8 = 0;
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x70);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x68);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x80);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x78);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_7 = 0;
    param_9 = 0;
    unaff_x21 = uVar4;
    unaff_x22 = uVar5;
    unaff_x23 = uVar2;
    param_4 = _UNK_033f85cc;
  }
  return 0;
}



// ============================================================
// RVA: 0x14fda10 | Atlas.Gameplay.SpatialUtils.GetClosestToTransform
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
Atlas_Gameplay_SpatialUtils__GetClosestToTransform
          (undefined1 param_1 [16],uint param_2,uint param_3,undefined8 param_4,undefined8 param_5)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  uint uVar4;
  ulong unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  ulong unaff_d11;
  undefined1 auVar5 [16];
  
  auVar5._8_8_ = param_5;
  auVar5._0_8_ = param_4;
  while( true ) {
    lVar3 = auVar5._8_8_;
    uVar2 = auVar5._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    uVar4 = /*UnityEngine.Vector3$$get_forward*/ func_0x03275868(0);
    uVar1 = _UNK_033f85cc;
    *(ulong *)((long)register0x00000008 + -0x60) = unaff_d11;
    *(ulong *)((long)register0x00000008 + -0x58) = unaff_d10;
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_d9;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x22 = 0;
    unaff_x20 = 0;
    unaff_x21 = 0;
    unaff_d8 = (ulong)_UNK_033f85cc;
    unaff_d9 = (ulong)param_3;
    unaff_d10 = (ulong)param_2;
    unaff_d11 = (ulong)uVar4;
    unaff_x24 = 0x3eb4000;
    if ((bRam0000000003eb4cd4 & 1) == 0) {
      func_0x00f78a20(0x3d3c498);
      bRam0000000003eb4cd4 = 1;
    }
    uVar1 = Atlas_Gameplay_SpatialUtils__GetClosestToTransformIndex
                      (uVar4,param_2,param_3,uVar1,uVar2,lVar3,0,0,0);
    if ((int)uVar1 < 0) break;
    if (lVar3 != 0) {
      if (*(uint *)(lVar3 + 0x18) <= uVar1) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      return *(undefined8 *)(*(long *)(lVar3 + 0x10) + (ulong)uVar1 * 8 + 0x20);
    }
    unaff_x30 = Atlas_Gameplay_SpatialUtils__GetClosestToTransform;
    auVar5 = func_0x00f78af4();
    unaff_x19 = 0;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    unaff_x23 = uVar2;
  }
  return 0;
}



// ============================================================
// RVA: 0x14fda54 | Atlas.Gameplay.SpatialUtils.GetClosestToTransformDeg
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
Atlas_Gameplay_SpatialUtils__GetClosestToTransformDeg
          (uint param_1,uint param_2,uint param_3,float param_4,undefined8 param_5,
          undefined8 param_6)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  uint uVar4;
  ulong unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  ulong unaff_d11;
  undefined1 auVar5 [16];
  
  auVar5._8_8_ = param_6;
  auVar5._0_8_ = param_5;
  uVar4 = _cosf(param_4 * _UNK_033f850c * 0.5);
  puVar1 = (undefined1 *)register0x00000008;
  while( true ) {
    lVar3 = auVar5._8_8_;
    uVar2 = auVar5._0_8_;
    *(ulong *)(puVar1 + -0x60) = unaff_d11;
    *(ulong *)(puVar1 + -0x58) = unaff_d10;
    *(ulong *)(puVar1 + -0x50) = unaff_d9;
    *(ulong *)(puVar1 + -0x48) = unaff_d8;
    *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar1 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar1 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar1 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar1 + -8) = unaff_x30;
    unaff_d8 = (ulong)uVar4;
    unaff_d9 = (ulong)param_3;
    unaff_d10 = (ulong)param_2;
    unaff_d11 = (ulong)param_1;
    unaff_x24 = 0x3eb4000;
    if ((bRam0000000003eb4cd4 & 1) == 0) {
      func_0x00f78a20(0x3d3c498);
      bRam0000000003eb4cd4 = 1;
    }
    uVar4 = Atlas_Gameplay_SpatialUtils__GetClosestToTransformIndex
                      (param_1,param_2,param_3,uVar4,uVar2,lVar3,0,0,0);
    if ((int)uVar4 < 0) break;
    if (lVar3 != 0) {
      if (*(uint *)(lVar3 + 0x18) <= uVar4) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      return *(undefined8 *)(*(long *)(lVar3 + 0x10) + (ulong)uVar4 * 8 + 0x20);
    }
    auVar5 = func_0x00f78af4();
    *(undefined8 *)(puVar1 + -0x80) = 0;
    *(undefined8 *)(puVar1 + -0x78) = 0;
    *(undefined1 **)(puVar1 + -0x70) = puVar1 + -0x10;
    *(code **)(puVar1 + -0x68) = Atlas_Gameplay_SpatialUtils__GetClosestToTransform;
    param_1 = /*UnityEngine.Vector3$$get_forward*/ func_0x03275868(0);
    unaff_x29 = *(undefined8 *)(puVar1 + -0x70);
    unaff_x30 = *(undefined8 *)(puVar1 + -0x68);
    unaff_x20 = *(undefined8 *)(puVar1 + -0x80);
    unaff_x19 = *(undefined8 *)(puVar1 + -0x78);
    puVar1 = puVar1 + -0x60;
    unaff_x21 = 0;
    unaff_x22 = 0;
    unaff_x23 = uVar2;
    uVar4 = _UNK_033f85cc;
  }
  return 0;
}



// ============================================================
// RVA: 0x14fdacc | Atlas.Gameplay.SpatialUtils.IsInFov
// ============================================================

void Atlas_Gameplay_SpatialUtils__IsInFov
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6)

{
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  
  fStack_40 = param_4 - param_1;
  fStack_3c = param_5 - param_2;
  fStack_38 = param_6 - param_3;
  /*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&fStack_40,0);
  Atlas_Gameplay_SpatialUtils__IsInFov();
  return;
}



// ============================================================
// RVA: 0x14fdb30 | Atlas.Gameplay.SpatialUtils.IsInFovDeg
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_SpatialUtils__IsInFovDeg
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  float fStack000000000000000c;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  
  fStack_60 = param_4 - param_1;
  param_5 = param_5 - param_2;
  param_6 = param_6 - param_3;
  fStack_5c = param_5;
  fStack_58 = param_6;
  uVar1 = /*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&fStack_60,0);
  uVar2 = _cosf(fStack000000000000000c * _UNK_033f850c * 0.5);
  Atlas_Gameplay_SpatialUtils__IsInFov
            (uVar1,param_5,param_6,uStack0000000000000000,uStack0000000000000004,
             uStack0000000000000008,uVar2);
  return;
}



