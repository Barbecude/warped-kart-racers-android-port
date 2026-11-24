// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Rendering.WibbleBehaviour

// ============================================================
// RVA: 0x1530ec0 | Atlas.Rendering.WibbleBehaviour.get_Target
// ============================================================

undefined4 Atlas_Rendering_WibbleBehaviour__get_Target(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x1530ecc | Atlas.Rendering.WibbleBehaviour.get_WibbleEnd
// ============================================================

undefined1  [16]
Atlas_Rendering_WibbleBehaviour__get_WibbleEnd
          (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,uint param_5,
          long param_6)

{
  ulong *puVar1;
  long lVar3;
  long lVar4;
  undefined8 ***pppuVar5;
  undefined *puVar6;
  float fVar7;
  float fVar8;
  undefined4 extraout_s0;
  undefined4 uVar9;
  uint uVar10;
  ulong extraout_d0;
  ulong extraout_d0_00;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  ulong uStack_150;
  ulong uStack_148;
  undefined8 **ppuStack_130;
  undefined *puStack_128;
  undefined8 auStack_120 [2];
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  undefined8 **ppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  float fStack_a8;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_20;
  undefined *puStack_18;
  undefined8 ***pppuVar2;
  
  if (*(long *)(param_6 + 0x40) != 0) {
    return ZEXT416(*(uint *)(*(long *)(param_6 + 0x40) + 0x24));
  }
  lVar3 = func_0x00f78af4();
  puStack_18 = &Atlas_Rendering_WibbleBehaviour__ApplyForceInDirection;
  fVar8 = param_3;
  fVar12 = param_2;
  uStack_60 = param_4;
  puStack_20 = &stack0xfffffffffffffff0;
  lVar4 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar3,0);
  if (lVar4 != 0) {
    fVar8 = param_3;
    fVar12 = param_2;
    fVar7 = (float)/*UnityEngine.Transform$$InverseTransformDirection*/ func_0x03276b34(extraout_d0 & 0xffffffff,lVar4,0);
    lVar3 = *(long *)(lVar3 + 0x40);
    if (lVar3 != 0) {
      fVar13 = (float)uStack_60;
      auVar11._0_8_ =
           CONCAT44(fVar12 * fVar13 + (float)((ulong)*(undefined8 *)(lVar3 + 0x24) >> 0x20),
                    fVar7 * fVar13 + (float)*(undefined8 *)(lVar3 + 0x24));
      *(ulong *)(lVar3 + 0x24) = auVar11._0_8_;
      *(float *)(lVar3 + 0x2c) = fVar8 * fVar13 + *(float *)(lVar3 + 0x2c);
      auVar11._8_8_ = 0;
      return auVar11;
    }
  }
  lVar3 = func_0x00f78af4();
  puStack_68 = &Atlas_Rendering_WibbleBehaviour__ApplyForceAtPoint;
  fVar7 = fVar8;
  fVar13 = fVar12;
  uStack_c0 = param_4;
  ppuStack_70 = &puStack_20;
  lVar4 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar3,0);
  if (lVar4 != 0) {
    fVar7 = fVar8;
    fVar13 = fVar12;
    fVar8 = (float)/*UnityEngine.Transform$$InverseTransformPoint*/ func_0x03276e54(extraout_d0_00 & 0xffffffff,lVar4,0);
    lVar4 = *(long *)(lVar3 + 0x40);
    if (lVar4 != 0) {
      fStack_a8 = *(float *)(lVar4 + 0x2c) - fVar7;
      param_4 = *(undefined8 *)(lVar4 + 0x24);
      uStack_b0 = CONCAT44((float)((ulong)param_4 >> 0x20) - fVar13,(float)param_4 - fVar8);
      fVar7 = fStack_a8;
      /*UnityEngine.Vector3$$Normalize*/ func_0x0327b824(&uStack_b0,0);
      lVar3 = *(long *)(lVar3 + 0x40);
      if (lVar3 != 0) {
        fVar12 = (float)uStack_c0;
        fVar8 = *(float *)(lVar3 + 0x2c) + fStack_a8 * fVar12;
        *(ulong *)(lVar3 + 0x24) =
             CONCAT44((float)((ulong)*(undefined8 *)(lVar3 + 0x24) >> 0x20) +
                      (float)((ulong)uStack_b0 >> 0x20) * fVar12,
                      (float)*(undefined8 *)(lVar3 + 0x24) + (float)uStack_b0 * fVar12);
        *(float *)(lVar3 + 0x2c) = fVar8;
        return ZEXT416((uint)fVar8);
      }
    }
  }
  lVar3 = func_0x00f78af4();
  puStack_c8 = &Atlas_Rendering_WibbleBehaviour__ApplyImpulseAtPoint;
  fVar8 = fVar13;
  fVar12 = fVar7;
  auStack_120[0] = param_4;
  ppuStack_d0 = &ppuStack_70;
  lVar4 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar3,0);
  if (lVar4 != 0) {
    fVar8 = fVar13;
    fVar12 = fVar7;
    fStack_110 = (float)/*UnityEngine.Transform$$InverseTransformPoint*/ func_0x03276e54(extraout_s0,lVar4,0);
    lVar4 = *(long *)(lVar3 + 0x40);
    if (lVar4 != 0) {
      fStack_108 = *(float *)(lVar4 + 0x2c) - fVar12;
      fStack_110 = (float)*(undefined8 *)(lVar4 + 0x24) - fStack_110;
      fStack_10c = (float)((ulong)*(undefined8 *)(lVar4 + 0x24) >> 0x20) - fVar8;
      /*UnityEngine.Vector3$$Normalize*/ func_0x0327b824(&fStack_110,0);
      *(uint *)(lVar3 + 0x54) = param_5;
      fVar8 = (float)auStack_120[0];
      *(ulong *)(lVar3 + 0x58) = CONCAT44(fStack_10c * fVar8,fStack_110 * fVar8);
      *(float *)(lVar3 + 0x60) = fStack_108 * fVar8;
      return ZEXT416((uint)(fStack_108 * fVar8));
    }
  }
  lVar3 = func_0x00f78af4();
  puVar1 = &uStack_150;
  puStack_128 = &Atlas_Rendering_WibbleBehaviour__Awake;
  pppuVar5 = &ppuStack_130;
  lVar4 = *(long *)(lVar3 + 0x40);
  uVar14 = *(undefined8 *)(lVar3 + 0x20);
  uVar15 = *(undefined4 *)(lVar3 + 0x28);
  uStack_150 = (ulong)(uint)fVar7;
  uStack_148 = (ulong)param_5;
  ppuStack_130 = &ppuStack_d0;
  uVar9 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  if (lVar4 == 0) {
    puVar6 = &Atlas_Rendering_WibbleBehaviour__SetParameters;
    lVar3 = func_0x00f78af4();
  }
  else {
    *(undefined8 *)(lVar4 + 0x24) = uVar14;
    *(undefined4 *)(lVar4 + 0x2c) = uVar15;
    *(undefined4 *)(lVar4 + 0x30) = uVar9;
    *(float *)(lVar4 + 0x34) = fVar8;
    *(float *)(lVar4 + 0x38) = fVar12;
    uVar9 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    *(undefined4 *)(lVar4 + 0x3c) = uVar9;
    *(float *)(lVar4 + 0x40) = fVar8;
    *(float *)(lVar4 + 0x44) = fVar12;
    puVar1 = auStack_120;
    pppuVar5 = (undefined8 ***)ppuStack_130;
    puVar6 = puStack_128;
  }
  while( true ) {
    pppuVar2 = (undefined8 ***)((long)puVar1 + -0x10);
    *(undefined8 ****)((long)puVar1 + -0x10) = pppuVar5;
    *(undefined **)((long)puVar1 + -8) = puVar6;
    lVar4 = *(long *)(lVar3 + 0x40);
    if (lVar4 != 0) break;
    puVar6 = &Atlas_Rendering_WibbleBehaviour__OnValidate;
    lVar3 = func_0x00f78af4();
    puVar1 = (ulong *)((long)puVar1 + -0x10);
    pppuVar5 = pppuVar2;
  }
  *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + 0x2c);
  uVar10 = *(uint *)(lVar3 + 0x28);
  *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(lVar3 + 0x20);
  *(uint *)(lVar4 + 0x20) = uVar10;
  return ZEXT416(uVar10);
}



// ============================================================
// RVA: 0x1530ef0 | Atlas.Rendering.WibbleBehaviour.ApplyForceInDirection
// ============================================================

void Atlas_Rendering_WibbleBehaviour__ApplyForceInDirection
               (undefined4 param_1,float param_2,float param_3,undefined8 param_4,uint param_5,
               long param_6)

{
  ulong *puVar1;
  long lVar3;
  long lVar4;
  undefined8 ***pppuVar5;
  undefined *puVar6;
  float fVar7;
  float fVar8;
  undefined4 extraout_s0;
  undefined4 uVar9;
  ulong extraout_d0;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  ulong uStack_140;
  ulong uStack_138;
  undefined8 **ppuStack_120;
  undefined *puStack_118;
  undefined8 auStack_110 [2];
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  undefined1 **ppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  float fStack_98;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 ***pppuVar2;
  
  uStack_50 = param_4;
  fVar8 = param_3;
  fVar10 = param_2;
  lVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_6,0);
  if (lVar3 != 0) {
    fVar8 = param_3;
    fVar10 = param_2;
    fVar7 = (float)/*UnityEngine.Transform$$InverseTransformDirection*/ func_0x03276b34(param_1,lVar3,0);
    lVar3 = *(long *)(param_6 + 0x40);
    if (lVar3 != 0) {
      fVar11 = (float)uStack_50;
      *(ulong *)(lVar3 + 0x24) =
           CONCAT44(fVar10 * fVar11 + (float)((ulong)*(undefined8 *)(lVar3 + 0x24) >> 0x20),
                    fVar7 * fVar11 + (float)*(undefined8 *)(lVar3 + 0x24));
      *(float *)(lVar3 + 0x2c) = fVar8 * fVar11 + *(float *)(lVar3 + 0x2c);
      return;
    }
  }
  lVar3 = func_0x00f78af4();
  puStack_58 = &Atlas_Rendering_WibbleBehaviour__ApplyForceAtPoint;
  fVar7 = fVar8;
  fVar11 = fVar10;
  uStack_b0 = param_4;
  puStack_60 = &stack0xfffffffffffffff0;
  lVar4 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar3,0);
  if (lVar4 != 0) {
    fVar7 = fVar8;
    fVar11 = fVar10;
    fVar8 = (float)/*UnityEngine.Transform$$InverseTransformPoint*/ func_0x03276e54(extraout_d0 & 0xffffffff,lVar4,0);
    lVar4 = *(long *)(lVar3 + 0x40);
    if (lVar4 != 0) {
      fStack_98 = *(float *)(lVar4 + 0x2c) - fVar7;
      param_4 = *(undefined8 *)(lVar4 + 0x24);
      uStack_a0 = CONCAT44((float)((ulong)param_4 >> 0x20) - fVar11,(float)param_4 - fVar8);
      fVar7 = fStack_98;
      /*UnityEngine.Vector3$$Normalize*/ func_0x0327b824(&uStack_a0,0);
      lVar3 = *(long *)(lVar3 + 0x40);
      if (lVar3 != 0) {
        fVar8 = (float)uStack_b0;
        *(ulong *)(lVar3 + 0x24) =
             CONCAT44((float)((ulong)*(undefined8 *)(lVar3 + 0x24) >> 0x20) +
                      (float)((ulong)uStack_a0 >> 0x20) * fVar8,
                      (float)*(undefined8 *)(lVar3 + 0x24) + (float)uStack_a0 * fVar8);
        *(float *)(lVar3 + 0x2c) = *(float *)(lVar3 + 0x2c) + fStack_98 * fVar8;
        return;
      }
    }
  }
  lVar3 = func_0x00f78af4();
  puStack_b8 = &Atlas_Rendering_WibbleBehaviour__ApplyImpulseAtPoint;
  fVar8 = fVar11;
  fVar10 = fVar7;
  auStack_110[0] = param_4;
  ppuStack_c0 = &puStack_60;
  lVar4 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar3,0);
  if (lVar4 != 0) {
    fVar8 = fVar11;
    fVar10 = fVar7;
    fStack_100 = (float)/*UnityEngine.Transform$$InverseTransformPoint*/ func_0x03276e54(extraout_s0,lVar4,0);
    lVar4 = *(long *)(lVar3 + 0x40);
    if (lVar4 != 0) {
      fStack_f8 = *(float *)(lVar4 + 0x2c) - fVar10;
      fStack_100 = (float)*(undefined8 *)(lVar4 + 0x24) - fStack_100;
      fStack_fc = (float)((ulong)*(undefined8 *)(lVar4 + 0x24) >> 0x20) - fVar8;
      /*UnityEngine.Vector3$$Normalize*/ func_0x0327b824(&fStack_100,0);
      *(uint *)(lVar3 + 0x54) = param_5;
      fVar8 = (float)auStack_110[0];
      *(ulong *)(lVar3 + 0x58) = CONCAT44(fStack_fc * fVar8,fStack_100 * fVar8);
      *(float *)(lVar3 + 0x60) = fStack_f8 * fVar8;
      return;
    }
  }
  lVar3 = func_0x00f78af4();
  puVar1 = &uStack_140;
  puStack_118 = &Atlas_Rendering_WibbleBehaviour__Awake;
  pppuVar5 = &ppuStack_120;
  lVar4 = *(long *)(lVar3 + 0x40);
  uVar12 = *(undefined8 *)(lVar3 + 0x20);
  uVar13 = *(undefined4 *)(lVar3 + 0x28);
  uStack_140 = (ulong)(uint)fVar7;
  uStack_138 = (ulong)param_5;
  ppuStack_120 = &ppuStack_c0;
  uVar9 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  if (lVar4 == 0) {
    puVar6 = &Atlas_Rendering_WibbleBehaviour__SetParameters;
    lVar3 = func_0x00f78af4();
  }
  else {
    *(undefined8 *)(lVar4 + 0x24) = uVar12;
    *(undefined4 *)(lVar4 + 0x2c) = uVar13;
    *(undefined4 *)(lVar4 + 0x30) = uVar9;
    *(float *)(lVar4 + 0x34) = fVar8;
    *(float *)(lVar4 + 0x38) = fVar10;
    uVar9 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    *(undefined4 *)(lVar4 + 0x3c) = uVar9;
    *(float *)(lVar4 + 0x40) = fVar8;
    *(float *)(lVar4 + 0x44) = fVar10;
    puVar1 = auStack_110;
    pppuVar5 = (undefined8 ***)ppuStack_120;
    puVar6 = puStack_118;
  }
  while( true ) {
    pppuVar2 = (undefined8 ***)((long)puVar1 + -0x10);
    *(undefined8 ****)((long)puVar1 + -0x10) = pppuVar5;
    *(undefined **)((long)puVar1 + -8) = puVar6;
    lVar4 = *(long *)(lVar3 + 0x40);
    if (lVar4 != 0) break;
    puVar6 = &Atlas_Rendering_WibbleBehaviour__OnValidate;
    lVar3 = func_0x00f78af4();
    puVar1 = (ulong *)((long)puVar1 + -0x10);
    pppuVar5 = pppuVar2;
  }
  *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + 0x2c);
  uVar9 = *(undefined4 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(lVar3 + 0x20);
  *(undefined4 *)(lVar4 + 0x20) = uVar9;
  return;
}



// ============================================================
// RVA: 0x1530f88 | Atlas.Rendering.WibbleBehaviour.ApplyForceAtPoint
// ============================================================

void Atlas_Rendering_WibbleBehaviour__ApplyForceAtPoint
               (undefined4 param_1,float param_2,float param_3,undefined8 param_4,uint param_5,
               long param_6)

{
  ulong *puVar1;
  long lVar3;
  long lVar4;
  undefined8 ***pppuVar5;
  undefined *puVar6;
  float fVar7;
  undefined4 extraout_s0;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  ulong uStack_f0;
  ulong uStack_e8;
  undefined8 **ppuStack_d0;
  undefined *puStack_c8;
  undefined8 auStack_c0 [2];
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  undefined8 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  float fStack_48;
  undefined8 ***pppuVar2;
  
  uStack_60 = param_4;
  fVar10 = param_3;
  fVar9 = param_2;
  lVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_6,0);
  if (lVar3 != 0) {
    fVar10 = param_3;
    fVar9 = param_2;
    fVar7 = (float)/*UnityEngine.Transform$$InverseTransformPoint*/ func_0x03276e54(param_1,lVar3,0);
    lVar3 = *(long *)(param_6 + 0x40);
    if (lVar3 != 0) {
      fStack_48 = *(float *)(lVar3 + 0x2c) - fVar10;
      param_4 = *(undefined8 *)(lVar3 + 0x24);
      uStack_50 = CONCAT44((float)((ulong)param_4 >> 0x20) - fVar9,(float)param_4 - fVar7);
      fVar10 = fStack_48;
      /*UnityEngine.Vector3$$Normalize*/ func_0x0327b824(&uStack_50,0);
      lVar3 = *(long *)(param_6 + 0x40);
      if (lVar3 != 0) {
        fVar10 = (float)uStack_60;
        *(ulong *)(lVar3 + 0x24) =
             CONCAT44((float)((ulong)*(undefined8 *)(lVar3 + 0x24) >> 0x20) +
                      (float)((ulong)uStack_50 >> 0x20) * fVar10,
                      (float)*(undefined8 *)(lVar3 + 0x24) + (float)uStack_50 * fVar10);
        *(float *)(lVar3 + 0x2c) = *(float *)(lVar3 + 0x2c) + fStack_48 * fVar10;
        return;
      }
    }
  }
  lVar3 = func_0x00f78af4();
  puStack_68 = &Atlas_Rendering_WibbleBehaviour__ApplyImpulseAtPoint;
  fVar7 = fVar9;
  fVar11 = fVar10;
  auStack_c0[0] = param_4;
  puStack_70 = (undefined8 *)&stack0xfffffffffffffff0;
  lVar4 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar3,0);
  if (lVar4 != 0) {
    fVar7 = fVar9;
    fVar11 = fVar10;
    fStack_b0 = (float)/*UnityEngine.Transform$$InverseTransformPoint*/ func_0x03276e54(extraout_s0,lVar4,0);
    lVar4 = *(long *)(lVar3 + 0x40);
    if (lVar4 != 0) {
      fStack_a8 = *(float *)(lVar4 + 0x2c) - fVar11;
      fStack_b0 = (float)*(undefined8 *)(lVar4 + 0x24) - fStack_b0;
      fStack_ac = (float)((ulong)*(undefined8 *)(lVar4 + 0x24) >> 0x20) - fVar7;
      /*UnityEngine.Vector3$$Normalize*/ func_0x0327b824(&fStack_b0,0);
      *(uint *)(lVar3 + 0x54) = param_5;
      fVar10 = (float)auStack_c0[0];
      *(ulong *)(lVar3 + 0x58) = CONCAT44(fStack_ac * fVar10,fStack_b0 * fVar10);
      *(float *)(lVar3 + 0x60) = fStack_a8 * fVar10;
      return;
    }
  }
  lVar3 = func_0x00f78af4();
  puVar1 = &uStack_f0;
  puStack_c8 = &Atlas_Rendering_WibbleBehaviour__Awake;
  pppuVar5 = &ppuStack_d0;
  lVar4 = *(long *)(lVar3 + 0x40);
  uVar12 = *(undefined8 *)(lVar3 + 0x20);
  uVar13 = *(undefined4 *)(lVar3 + 0x28);
  uStack_f0 = (ulong)(uint)fVar10;
  uStack_e8 = (ulong)param_5;
  ppuStack_d0 = &puStack_70;
  uVar8 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  if (lVar4 == 0) {
    puVar6 = &Atlas_Rendering_WibbleBehaviour__SetParameters;
    lVar3 = func_0x00f78af4();
  }
  else {
    *(undefined8 *)(lVar4 + 0x24) = uVar12;
    *(undefined4 *)(lVar4 + 0x2c) = uVar13;
    *(undefined4 *)(lVar4 + 0x30) = uVar8;
    *(float *)(lVar4 + 0x34) = fVar7;
    *(float *)(lVar4 + 0x38) = fVar11;
    uVar8 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    *(undefined4 *)(lVar4 + 0x3c) = uVar8;
    *(float *)(lVar4 + 0x40) = fVar7;
    *(float *)(lVar4 + 0x44) = fVar11;
    puVar1 = auStack_c0;
    pppuVar5 = (undefined8 ***)ppuStack_d0;
    puVar6 = puStack_c8;
  }
  while( true ) {
    pppuVar2 = (undefined8 ***)((long)puVar1 + -0x10);
    *(undefined8 ****)((long)puVar1 + -0x10) = pppuVar5;
    *(undefined **)((long)puVar1 + -8) = puVar6;
    lVar4 = *(long *)(lVar3 + 0x40);
    if (lVar4 != 0) break;
    puVar6 = &Atlas_Rendering_WibbleBehaviour__OnValidate;
    lVar3 = func_0x00f78af4();
    puVar1 = (ulong *)((long)puVar1 + -0x10);
    pppuVar5 = pppuVar2;
  }
  *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + 0x2c);
  uVar8 = *(undefined4 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(lVar3 + 0x20);
  *(undefined4 *)(lVar4 + 0x20) = uVar8;
  return;
}



// ============================================================
// RVA: 0x1531054 | Atlas.Rendering.WibbleBehaviour.ApplyImpulseAtPoint
// ============================================================

void Atlas_Rendering_WibbleBehaviour__ApplyImpulseAtPoint
               (undefined4 param_1,float param_2,float param_3,undefined8 param_4,uint param_5,
               long param_6)

{
  ulong *puVar1;
  long lVar3;
  long lVar4;
  undefined8 ***pppuVar5;
  undefined *puVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 **ppuStack_70;
  undefined *puStack_68;
  undefined8 auStack_60 [2];
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  undefined8 ***pppuVar2;
  
  auStack_60[0] = param_4;
  fVar8 = param_2;
  fVar9 = param_3;
  lVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_6,0);
  if (lVar3 != 0) {
    fVar8 = param_2;
    fVar9 = param_3;
    fStack_50 = (float)/*UnityEngine.Transform$$InverseTransformPoint*/ func_0x03276e54(param_1,lVar3,0);
    lVar3 = *(long *)(param_6 + 0x40);
    if (lVar3 != 0) {
      fStack_48 = *(float *)(lVar3 + 0x2c) - fVar9;
      fStack_50 = (float)*(undefined8 *)(lVar3 + 0x24) - fStack_50;
      fStack_4c = (float)((ulong)*(undefined8 *)(lVar3 + 0x24) >> 0x20) - fVar8;
      /*UnityEngine.Vector3$$Normalize*/ func_0x0327b824(&fStack_50,0);
      *(uint *)(param_6 + 0x54) = param_5;
      fVar8 = (float)auStack_60[0];
      *(ulong *)(param_6 + 0x58) = CONCAT44(fStack_4c * fVar8,fStack_50 * fVar8);
      *(float *)(param_6 + 0x60) = fStack_48 * fVar8;
      return;
    }
  }
  lVar3 = func_0x00f78af4();
  puVar1 = &uStack_90;
  puStack_68 = &Atlas_Rendering_WibbleBehaviour__Awake;
  pppuVar5 = &ppuStack_70;
  lVar4 = *(long *)(lVar3 + 0x40);
  uVar10 = *(undefined8 *)(lVar3 + 0x20);
  uVar11 = *(undefined4 *)(lVar3 + 0x28);
  uStack_90 = (ulong)(uint)param_3;
  uStack_88 = (ulong)param_5;
  ppuStack_70 = (undefined8 **)&stack0xfffffffffffffff0;
  uVar7 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  if (lVar4 == 0) {
    puVar6 = &Atlas_Rendering_WibbleBehaviour__SetParameters;
    lVar3 = func_0x00f78af4();
  }
  else {
    *(undefined8 *)(lVar4 + 0x24) = uVar10;
    *(undefined4 *)(lVar4 + 0x2c) = uVar11;
    *(undefined4 *)(lVar4 + 0x30) = uVar7;
    *(float *)(lVar4 + 0x34) = fVar8;
    *(float *)(lVar4 + 0x38) = fVar9;
    uVar7 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    *(undefined4 *)(lVar4 + 0x3c) = uVar7;
    *(float *)(lVar4 + 0x40) = fVar8;
    *(float *)(lVar4 + 0x44) = fVar9;
    puVar1 = auStack_60;
    pppuVar5 = (undefined8 ***)ppuStack_70;
    puVar6 = puStack_68;
  }
  while( true ) {
    pppuVar2 = (undefined8 ***)((long)puVar1 + -0x10);
    *(undefined8 ****)((long)puVar1 + -0x10) = pppuVar5;
    *(undefined **)((long)puVar1 + -8) = puVar6;
    lVar4 = *(long *)(lVar3 + 0x40);
    if (lVar4 != 0) break;
    puVar6 = &Atlas_Rendering_WibbleBehaviour__OnValidate;
    lVar3 = func_0x00f78af4();
    puVar1 = (ulong *)((long)puVar1 + -0x10);
    pppuVar5 = pppuVar2;
  }
  *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + 0x2c);
  uVar7 = *(undefined4 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(lVar3 + 0x20);
  *(undefined4 *)(lVar4 + 0x20) = uVar7;
  return;
}



// ============================================================
// RVA: 0x1531110 | Atlas.Rendering.WibbleBehaviour.Awake
// ============================================================

void Atlas_Rendering_WibbleBehaviour__Awake
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined1 *puVar1;
  long lVar3;
  undefined1 *unaff_x29;
  undefined1 *puVar4;
  undefined *unaff_x30;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined1 *puVar2;
  
  puVar1 = &stack0xffffffffffffffd0;
  puVar4 = &stack0xfffffffffffffff0;
  lVar3 = *(long *)(param_4 + 0x40);
  uVar6 = *(undefined8 *)(param_4 + 0x20);
  uVar7 = *(undefined4 *)(param_4 + 0x28);
  uVar5 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  if (lVar3 == 0) {
    unaff_x30 = &Atlas_Rendering_WibbleBehaviour__SetParameters;
    param_4 = func_0x00f78af4();
  }
  else {
    *(undefined8 *)(lVar3 + 0x24) = uVar6;
    *(undefined4 *)(lVar3 + 0x2c) = uVar7;
    *(undefined4 *)(lVar3 + 0x30) = uVar5;
    *(undefined4 *)(lVar3 + 0x34) = param_2;
    *(undefined4 *)(lVar3 + 0x38) = param_3;
    uVar5 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    *(undefined4 *)(lVar3 + 0x3c) = uVar5;
    *(undefined4 *)(lVar3 + 0x40) = param_2;
    *(undefined4 *)(lVar3 + 0x44) = param_3;
    puVar1 = (undefined1 *)register0x00000008;
    puVar4 = unaff_x29;
  }
  while( true ) {
    puVar2 = puVar1 + -0x10;
    *(undefined1 **)(puVar1 + -0x10) = puVar4;
    *(undefined **)(puVar1 + -8) = unaff_x30;
    lVar3 = *(long *)(param_4 + 0x40);
    if (lVar3 != 0) break;
    unaff_x30 = &Atlas_Rendering_WibbleBehaviour__OnValidate;
    param_4 = func_0x00f78af4();
    puVar1 = puVar1 + -0x10;
    puVar4 = puVar2;
  }
  *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(param_4 + 0x2c);
  uVar5 = *(undefined4 *)(param_4 + 0x28);
  *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(param_4 + 0x20);
  *(undefined4 *)(lVar3 + 0x20) = uVar5;
  return;
}



// ============================================================
// RVA: 0x1531170 | Atlas.Rendering.WibbleBehaviour.SetParameters
// ============================================================

void Atlas_Rendering_WibbleBehaviour__SetParameters(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined4 uVar3;
  
  while( true ) {
    puVar1 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    lVar2 = *(long *)(param_1 + 0x40);
    if (lVar2 != 0) break;
    unaff_x30 = &Atlas_Rendering_WibbleBehaviour__OnValidate;
    param_1 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x10);
    unaff_x29 = puVar1;
  }
  *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(param_1 + 0x2c);
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(param_1 + 0x20);
  *(undefined4 *)(lVar2 + 0x20) = uVar3;
  return;
}



// ============================================================
// RVA: 0x15311a4 | Atlas.Rendering.WibbleBehaviour.OnValidate
// ============================================================

void Atlas_Rendering_WibbleBehaviour__OnValidate(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined4 uVar3;
  
  while( true ) {
    puVar1 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    lVar2 = *(long *)(param_1 + 0x40);
    if (lVar2 != 0) break;
    unaff_x30 = Atlas_Rendering_WibbleBehaviour__OnValidate;
    param_1 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x10);
    unaff_x29 = puVar1;
  }
  *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(param_1 + 0x2c);
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(param_1 + 0x20);
  *(undefined4 *)(lVar2 + 0x20) = uVar3;
  return;
}



// ============================================================
// RVA: 0x15311a8 | Atlas.Rendering.WibbleBehaviour.FixedUpdate
// ============================================================

/* WARNING: Possible PIC construction at 0x015311cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015315e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01531614: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015315ec) */
/* WARNING: Removing unreachable block (ram,0x015315fc) */
/* WARNING: Removing unreachable block (ram,0x015311d0) */
/* WARNING: Removing unreachable block (ram,0x015311d4) */
/* WARNING: Removing unreachable block (ram,0x015311d8) */
/* WARNING: Removing unreachable block (ram,0x015311dc) */
/* WARNING: Removing unreachable block (ram,0x015311e4) */
/* WARNING: Removing unreachable block (ram,0x01531218) */
/* WARNING: Removing unreachable block (ram,0x01531234) */
/* WARNING: Removing unreachable block (ram,0x01531220) */
/* WARNING: Removing unreachable block (ram,0x015278ec) */
/* WARNING: Removing unreachable block (ram,0x01531618) */
/* WARNING: Removing unreachable block (ram,0x01531664) */
/* WARNING: Removing unreachable block (ram,0x01531620) */
/* WARNING: Removing unreachable block (ram,0x01531634) */
/* WARNING: Removing unreachable block (ram,0x01531638) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Rendering_WibbleBehaviour__FixedUpdate
                (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x21;
  uint uVar9;
  ulong unaff_x22;
  float fVar10;
  float fVar11;
  float extraout_s0;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  ulong unaff_d9;
  ulong unaff_d10;
  float fVar18;
  ulong unaff_d11;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uStack_190;
  float fStack_18c;
  float fStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  undefined1 ****ppppuStack_160;
  undefined *puStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  undefined1 ***pppuStack_130;
  undefined *puStack_128;
  uint uStack_120;
  float fStack_11c;
  float fStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  float fStack_fc;
  float fStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  uStack_90 = /*UnityEngine.Time$$get_fixedDeltaTime*/ func_0x03272c74(0);
  uVar7 = uStack_90 & 0xffffffff;
  uStack_38 = 0x15311d0;
  puStack_40 = &stack0xfffffffffffffff0;
  lVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_4,0);
  fVar16 = param_3;
  if (lVar2 != 0) {
    fVar17 = param_2;
    fVar10 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar2,0);
    uVar7 = (ulong)(uint)fVar10;
    unaff_d9 = (ulong)(uint)fVar17;
    unaff_d10 = (ulong)(uint)param_3;
    fVar18 = *(float *)(param_4 + 0x48);
    unaff_d11 = (ulong)(uint)fVar18;
    fVar19 = *(float *)(param_4 + 0x4c);
    fVar21 = *(float *)(param_4 + 0x50);
    fVar16 = param_3;
    param_2 = fVar17;
    lVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_4,0);
    if (lVar2 != 0) {
      fVar16 = param_3 - fVar21;
      fVar19 = fVar17 - fVar19;
      fVar18 = (float)/*UnityEngine.Transform$$InverseTransformVector*/ func_0x03276cc4(fVar10 - fVar18,lVar2,0);
      fVar11 = (float)uStack_90;
      fVar20 = fVar16 * fVar11;
      fVar21 = *(float *)(param_4 + 0x34);
      if (cRam0000000003ca3505 == '\0') {
        uStack_88 = 0;
        uStack_90 = (ulong)(uint)fVar21;
        func_0x00f78a20(0x3d232c0);
        fVar21 = (float)uStack_90;
        cRam0000000003ca3505 = '\x01';
      }
      fVar18 = fVar18 * fVar11 * fVar21;
      fVar19 = fVar19 * fVar11 * fVar21;
      unaff_d11 = CONCAT44(fVar19,fVar18);
      fVar21 = fVar21 * fVar20;
      uVar3 = /*System.Math_TypeInfo*/ uRam0000000003d232c0;
      if (((*(ushort *)(/*System.Math_TypeInfo*/ uRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Math_TypeInfo*/ uRam0000000003d232c0 + 0xe0) == 0)) {
        uVar3 = func_0x00f78ad0();
      }
      param_2 = SQRT(fVar21 * fVar21 + fVar18 * fVar18 + fVar19 * fVar19);
      fVar11 = *(float *)(param_4 + 0x38);
      if (fVar11 < param_2) {
        fVar16 = fVar18 / param_2;
        fVar19 = fVar19 / param_2;
        param_2 = fVar21 / param_2;
        unaff_d11 = CONCAT44(fVar19 * fVar11,fVar16 * fVar11);
        fVar21 = param_2 * fVar11;
      }
      lVar2 = *(long *)(param_4 + 0x40);
      if (lVar2 != 0) {
        *(ulong *)(lVar2 + 0x24) =
             CONCAT44((float)((ulong)*(undefined8 *)(lVar2 + 0x24) >> 0x20) -
                      (float)(unaff_d11 >> 0x20),
                      (float)*(undefined8 *)(lVar2 + 0x24) - (float)unaff_d11);
        *(float *)(lVar2 + 0x2c) = *(float *)(lVar2 + 0x2c) - fVar21;
        *(float *)(param_4 + 0x48) = fVar10;
        *(float *)(param_4 + 0x4c) = fVar17;
        *(float *)(param_4 + 0x50) = param_3;
        return uVar3;
      }
    }
  }
  uVar4 = func_0x00f78af4();
  puStack_98 = &Atlas_Rendering_WibbleBehaviour__Update;
  uVar8 = 0x3eb4000;
  uVar3 = uVar4;
  uStack_f0 = unaff_d11;
  uStack_e8 = unaff_d10;
  uStack_e0 = unaff_d9;
  uStack_d8 = uVar7;
  ppuStack_a0 = &puStack_40;
  if ((bRam0000000003eb4ea9 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    uVar3 = func_0x00f78a20(0x3d25b58);
    bRam0000000003eb4ea9 = 1;
  }
  uStack_110 = 0;
  uStack_108 = 0;
  if (*(long *)(uVar4 + 0x18) == 0) {
    return uVar3;
  }
  lVar2 = *(long *)(uVar4 + 0x40);
  if (lVar2 != 0) {
    fStack_fc = *(float *)(lVar2 + 0x28);
    fVar17 = *(float *)(lVar2 + 0x2c);
    uStack_100 = /*UnityEngine.Vector3$$Cross*/ func_0x0327b588(*(undefined4 *)(lVar2 + 0x24),fStack_fc,fVar17,
                                 *(undefined4 *)(lVar2 + 0x18),*(undefined4 *)(lVar2 + 0x1c),
                                 *(undefined4 *)(lVar2 + 0x20),0);
    fVar16 = 0.0;
    fStack_f8 = fVar17;
    /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(0x3f800000,0,0,0,&uStack_110,0);
    uVar5 = /*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0(&uStack_100,0);
    uVar3 = (ulong)(uint)_UNK_033f8758;
    if (_UNK_033f8758 < extraout_s0) {
      fVar16 = fStack_f8;
      param_2 = fStack_fc;
      uVar12 = /*UnityEngine.Vector3$$Normalize*/ func_0x0327b718(uStack_100,0);
      lVar2 = *(long *)(uVar4 + 0x40);
      if (lVar2 == 0) goto code_r0x0153158c;
      uVar7 = (ulong)uVar12;
      unaff_d9 = (ulong)(uint)param_2;
      uStack_120 = uVar12;
      fStack_11c = param_2;
      fStack_118 = fVar16;
      fVar17 = (float)/*UnityEngine.Vector3$$SignedAngle*/ func_0x0327bc00(*(undefined4 *)(lVar2 + 0x24),*(undefined4 *)(lVar2 + 0x28),
                                      *(undefined4 *)(lVar2 + 0x2c),*(undefined4 *)(lVar2 + 0x18),
                                      *(undefined4 *)(lVar2 + 0x1c),*(undefined4 *)(lVar2 + 0x20),0)
      ;
      uVar3 = (ulong)(uint)param_2;
      uVar5 = /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(uVar12,uVar3,fVar16,*(float *)(uVar4 + 0x3c) * -fVar17,&uStack_110,0);
    }
    param_2 = (float)uVar3;
    unaff_x21 = *(long *)(uVar4 + 0x18);
    if (unaff_x21 != 0) {
      uVar12 = *(uint *)(unaff_x21 + 0x18);
      if ((int)uVar12 < 1) {
        return uVar5;
      }
      unaff_x22 = 0;
      uVar4 = 0;
      while( true ) {
        param_2 = (float)uVar3;
        uVar9 = (uint)unaff_x22;
        if (uVar12 <= uVar9) break;
        lVar2 = *(long *)(unaff_x21 + (long)(int)uVar9 * 8 + 0x20);
        if (lVar2 == 0) goto code_r0x0153158c;
        uVar8 = /*UnityEngine.Renderer$$get_sharedMaterial*/ func_0x0325bea4(lVar2,0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar5 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar8,uVar4,0);
        param_2 = (float)uVar3;
        if ((uVar5 & 1) == 0) {
          if (((*(ushort *)(/*Atlas.Rendering.WibbleBehaviour_TypeInfo*/ lRam0000000003d25b58 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Rendering.WibbleBehaviour_TypeInfo*/ lRam0000000003d25b58 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          if (uVar8 == 0) goto code_r0x0153158c;
          uVar3 = uStack_110 >> 0x20;
          fVar16 = (float)uStack_108;
          uVar5 = /*UnityEngine.Material$$SetVector*/ func_0x0323af88(uStack_110 & 0xffffffff,uVar3,(float)uStack_108,uStack_108._4_4_,
                                  uVar8,**(undefined4 **)(/*Atlas.Rendering.WibbleBehaviour_TypeInfo*/ lRam0000000003d25b58 + 0xb8),0);
          uVar4 = uVar8;
        }
        unaff_x22 = (ulong)(uVar9 + 1);
        uVar12 = *(uint *)(unaff_x21 + 0x18);
        if ((int)uVar12 <= (int)(uVar9 + 1)) {
          return uVar5;
        }
      }
      goto code_r0x01531590;
    }
  }
code_r0x0153158c:
  func_0x00f78af4();
code_r0x01531590:
  uVar6 = func_0x00f78b24();
  uVar6 = func_0x00f78ac0(uVar6,0);
  puStack_128 = &Atlas_Rendering_WibbleBehaviour__OnDrawGizmos;
  uStack_150 = unaff_d9;
  uStack_148 = uVar7;
  uStack_140 = uVar8;
  uStack_138 = uVar4;
  pppuStack_130 = &ppuStack_a0;
  /*UnityEngine.Color$$get_cyan*/ func_0x032235ec(0);
  /*UnityEngine.Gizmos$$set_color*/ func_0x0322fbcc(0);
  lVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(uVar6,0);
  uStack_170 = uVar8;
  uStack_168 = uVar6;
  ppppuStack_160 = &pppuStack_130;
  if (lVar2 == 0) {
    uVar7 = func_0x00f78af4();
    puStack_158 = &Atlas_Rendering_WibbleBehaviour___ctor;
    uStack_180 = unaff_x22;
    uStack_178 = unaff_x21;
    if ((bRam0000000003eb4eaa & 1) == 0) {
      func_0x00f78a20(0x3d259b8);
      bRam0000000003eb4eaa = 1;
    }
    uVar1 = _UNK_033f87d8;
    uVar15 = _UNK_033f87d0;
    uVar6 = _UNK_033f87c0;
    *(undefined8 *)(uVar7 + 0x28) = _UNK_033f87c8;
    *(undefined8 *)(uVar7 + 0x20) = uVar6;
    *(undefined8 *)(uVar7 + 0x38) = uVar1;
    *(undefined8 *)(uVar7 + 0x30) = uVar15;
    uVar6 = func_0x00f78aec(/*Atlas.Maths.VerletIntegration_TypeInfo*/ uRam0000000003d259b8);
    uVar14 = (undefined4)uVar15;
    /*Atlas.Maths.VerletIntegration$$.ctor*/ func_0x01527998();
    *(undefined8 *)(uVar7 + 0x40) = uVar6;
    uVar13 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    *(undefined4 *)(uVar7 + 0x48) = uVar13;
    *(undefined4 *)(uVar7 + 0x4c) = uVar14;
    *(float *)(uVar7 + 0x50) = fVar16;
    uVar13 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    *(undefined4 *)(uVar7 + 0x58) = uVar13;
    *(undefined4 *)(uVar7 + 0x5c) = uVar14;
    *(float *)(uVar7 + 0x60) = fVar16;
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return uVar7;
  }
  uStack_190 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar2,0);
  uVar12 = _UNK_033f8518;
  uStack_178 = (ulong)_UNK_033f8518;
  puStack_158 = &UNK_015315ec;
  fStack_18c = param_2;
  fStack_188 = fVar16;
  uStack_180 = unaff_d9;
  if (pcRam0000000003ebf570 == (code *)0x0) {
    pcRam0000000003ebf570 =
         (code *)func_0x00f789d4(
                                "UnityEngine.Gizmos::DrawSphere_Injected(UnityEngine.Vector3&,System.Single)"
                                );
  }
  uVar7 = (*pcRam0000000003ebf570)(uVar12,&uStack_190);
  return uVar7;
}



// ============================================================
// RVA: 0x1531238 | Atlas.Rendering.WibbleBehaviour.UpdateAirResistance
// ============================================================

/* WARNING: Possible PIC construction at 0x015315e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01531614: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015315ec) */
/* WARNING: Removing unreachable block (ram,0x015315fc) */
/* WARNING: Removing unreachable block (ram,0x01531618) */
/* WARNING: Removing unreachable block (ram,0x01531664) */
/* WARNING: Removing unreachable block (ram,0x01531620) */
/* WARNING: Removing unreachable block (ram,0x01531634) */
/* WARNING: Removing unreachable block (ram,0x01531638) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Rendering_WibbleBehaviour__UpdateAirResistance
                (ulong param_1,float param_2,float param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long unaff_x21;
  uint uVar8;
  ulong unaff_x22;
  float fVar9;
  float fVar10;
  float extraout_s0;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  ulong unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  float fVar17;
  ulong unaff_d11;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uStack_160;
  float fStack_15c;
  float fStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  undefined1 ***pppuStack_130;
  undefined *puStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  undefined1 **ppuStack_100;
  undefined *puStack_f8;
  uint uStack_f0;
  float fStack_ec;
  float fStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  float fStack_cc;
  float fStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined1 *puStack_70;
  undefined *puStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  
  uStack_60 = param_1;
  lVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_4,0);
  fVar15 = param_3;
  if (lVar2 != 0) {
    fVar16 = param_2;
    fVar9 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar2,0);
    unaff_d8 = (ulong)(uint)fVar9;
    unaff_d9 = (ulong)(uint)fVar16;
    unaff_d10 = (ulong)(uint)param_3;
    fVar17 = *(float *)(param_4 + 0x48);
    unaff_d11 = (ulong)(uint)fVar17;
    fVar18 = *(float *)(param_4 + 0x4c);
    fVar20 = *(float *)(param_4 + 0x50);
    fVar15 = param_3;
    param_2 = fVar16;
    lVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_4,0);
    if (lVar2 != 0) {
      fVar15 = param_3 - fVar20;
      fVar18 = fVar16 - fVar18;
      fVar17 = (float)/*UnityEngine.Transform$$InverseTransformVector*/ func_0x03276cc4(fVar9 - fVar17,lVar2,0);
      fVar10 = (float)uStack_60;
      fVar19 = fVar15 * fVar10;
      fVar20 = *(float *)(param_4 + 0x34);
      if (cRam0000000003ca3505 == '\0') {
        uStack_58 = 0;
        uStack_60 = (ulong)(uint)fVar20;
        func_0x00f78a20(0x3d232c0);
        fVar20 = (float)uStack_60;
        cRam0000000003ca3505 = '\x01';
      }
      fVar17 = fVar17 * fVar10 * fVar20;
      fVar18 = fVar18 * fVar10 * fVar20;
      unaff_d11 = CONCAT44(fVar18,fVar17);
      fVar20 = fVar20 * fVar19;
      uVar3 = /*System.Math_TypeInfo*/ uRam0000000003d232c0;
      if (((*(ushort *)(/*System.Math_TypeInfo*/ uRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Math_TypeInfo*/ uRam0000000003d232c0 + 0xe0) == 0)) {
        uVar3 = func_0x00f78ad0();
      }
      param_2 = SQRT(fVar20 * fVar20 + fVar17 * fVar17 + fVar18 * fVar18);
      fVar10 = *(float *)(param_4 + 0x38);
      if (fVar10 < param_2) {
        fVar15 = fVar17 / param_2;
        fVar18 = fVar18 / param_2;
        param_2 = fVar20 / param_2;
        unaff_d11 = CONCAT44(fVar18 * fVar10,fVar15 * fVar10);
        fVar20 = param_2 * fVar10;
      }
      lVar2 = *(long *)(param_4 + 0x40);
      if (lVar2 != 0) {
        *(ulong *)(lVar2 + 0x24) =
             CONCAT44((float)((ulong)*(undefined8 *)(lVar2 + 0x24) >> 0x20) -
                      (float)(unaff_d11 >> 0x20),
                      (float)*(undefined8 *)(lVar2 + 0x24) - (float)unaff_d11);
        *(float *)(lVar2 + 0x2c) = *(float *)(lVar2 + 0x2c) - fVar20;
        *(float *)(param_4 + 0x48) = fVar9;
        *(float *)(param_4 + 0x4c) = fVar16;
        *(float *)(param_4 + 0x50) = param_3;
        return uVar3;
      }
    }
  }
  uVar4 = func_0x00f78af4();
  puStack_68 = &Atlas_Rendering_WibbleBehaviour__Update;
  uVar7 = 0x3eb4000;
  uVar3 = uVar4;
  uStack_c0 = unaff_d11;
  uStack_b8 = unaff_d10;
  uStack_b0 = unaff_d9;
  uStack_a8 = unaff_d8;
  puStack_70 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4ea9 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    uVar3 = func_0x00f78a20(0x3d25b58);
    bRam0000000003eb4ea9 = 1;
  }
  uStack_e0 = 0;
  uStack_d8 = 0;
  if (*(long *)(uVar4 + 0x18) == 0) {
    return uVar3;
  }
  lVar2 = *(long *)(uVar4 + 0x40);
  if (lVar2 != 0) {
    fStack_cc = *(float *)(lVar2 + 0x28);
    fVar16 = *(float *)(lVar2 + 0x2c);
    uStack_d0 = /*UnityEngine.Vector3$$Cross*/ func_0x0327b588(*(undefined4 *)(lVar2 + 0x24),fStack_cc,fVar16,
                                *(undefined4 *)(lVar2 + 0x18),*(undefined4 *)(lVar2 + 0x1c),
                                *(undefined4 *)(lVar2 + 0x20),0);
    fVar15 = 0.0;
    fStack_c8 = fVar16;
    /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(0x3f800000,0,0,0,&uStack_e0,0);
    uVar5 = /*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0(&uStack_d0,0);
    uVar3 = (ulong)(uint)_UNK_033f8758;
    if (_UNK_033f8758 < extraout_s0) {
      fVar15 = fStack_c8;
      param_2 = fStack_cc;
      uVar11 = /*UnityEngine.Vector3$$Normalize*/ func_0x0327b718(uStack_d0,0);
      lVar2 = *(long *)(uVar4 + 0x40);
      if (lVar2 == 0) goto code_r0x0153158c;
      unaff_d8 = (ulong)uVar11;
      unaff_d9 = (ulong)(uint)param_2;
      uStack_f0 = uVar11;
      fStack_ec = param_2;
      fStack_e8 = fVar15;
      fVar16 = (float)/*UnityEngine.Vector3$$SignedAngle*/ func_0x0327bc00(*(undefined4 *)(lVar2 + 0x24),*(undefined4 *)(lVar2 + 0x28),
                                      *(undefined4 *)(lVar2 + 0x2c),*(undefined4 *)(lVar2 + 0x18),
                                      *(undefined4 *)(lVar2 + 0x1c),*(undefined4 *)(lVar2 + 0x20),0)
      ;
      uVar3 = (ulong)(uint)param_2;
      uVar5 = /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(uVar11,uVar3,fVar15,*(float *)(uVar4 + 0x3c) * -fVar16,&uStack_e0,0);
    }
    param_2 = (float)uVar3;
    unaff_x21 = *(long *)(uVar4 + 0x18);
    if (unaff_x21 != 0) {
      uVar11 = *(uint *)(unaff_x21 + 0x18);
      if ((int)uVar11 < 1) {
        return uVar5;
      }
      unaff_x22 = 0;
      uVar4 = 0;
      while( true ) {
        param_2 = (float)uVar3;
        uVar8 = (uint)unaff_x22;
        if (uVar11 <= uVar8) break;
        lVar2 = *(long *)(unaff_x21 + (long)(int)uVar8 * 8 + 0x20);
        if (lVar2 == 0) goto code_r0x0153158c;
        uVar7 = /*UnityEngine.Renderer$$get_sharedMaterial*/ func_0x0325bea4(lVar2,0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar5 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar7,uVar4,0);
        param_2 = (float)uVar3;
        if ((uVar5 & 1) == 0) {
          if (((*(ushort *)(/*Atlas.Rendering.WibbleBehaviour_TypeInfo*/ lRam0000000003d25b58 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Rendering.WibbleBehaviour_TypeInfo*/ lRam0000000003d25b58 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          if (uVar7 == 0) goto code_r0x0153158c;
          uVar3 = uStack_e0 >> 0x20;
          fVar15 = (float)uStack_d8;
          uVar5 = /*UnityEngine.Material$$SetVector*/ func_0x0323af88(uStack_e0 & 0xffffffff,uVar3,(float)uStack_d8,uStack_d8._4_4_,
                                  uVar7,**(undefined4 **)(/*Atlas.Rendering.WibbleBehaviour_TypeInfo*/ lRam0000000003d25b58 + 0xb8),0);
          uVar4 = uVar7;
        }
        unaff_x22 = (ulong)(uVar8 + 1);
        uVar11 = *(uint *)(unaff_x21 + 0x18);
        if ((int)uVar11 <= (int)(uVar8 + 1)) {
          return uVar5;
        }
      }
      goto code_r0x01531590;
    }
  }
code_r0x0153158c:
  func_0x00f78af4();
code_r0x01531590:
  uVar6 = func_0x00f78b24();
  uVar6 = func_0x00f78ac0(uVar6,0);
  puStack_f8 = &Atlas_Rendering_WibbleBehaviour__OnDrawGizmos;
  uStack_120 = unaff_d9;
  uStack_118 = unaff_d8;
  uStack_110 = uVar7;
  uStack_108 = uVar4;
  ppuStack_100 = &puStack_70;
  /*UnityEngine.Color$$get_cyan*/ func_0x032235ec(0);
  /*UnityEngine.Gizmos$$set_color*/ func_0x0322fbcc(0);
  lVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(uVar6,0);
  uStack_140 = uVar7;
  uStack_138 = uVar6;
  pppuStack_130 = &ppuStack_100;
  if (lVar2 == 0) {
    uVar3 = func_0x00f78af4();
    puStack_128 = &Atlas_Rendering_WibbleBehaviour___ctor;
    uStack_150 = unaff_x22;
    uStack_148 = unaff_x21;
    if ((bRam0000000003eb4eaa & 1) == 0) {
      func_0x00f78a20(0x3d259b8);
      bRam0000000003eb4eaa = 1;
    }
    uVar1 = _UNK_033f87d8;
    uVar14 = _UNK_033f87d0;
    uVar6 = _UNK_033f87c0;
    *(undefined8 *)(uVar3 + 0x28) = _UNK_033f87c8;
    *(undefined8 *)(uVar3 + 0x20) = uVar6;
    *(undefined8 *)(uVar3 + 0x38) = uVar1;
    *(undefined8 *)(uVar3 + 0x30) = uVar14;
    uVar6 = func_0x00f78aec(/*Atlas.Maths.VerletIntegration_TypeInfo*/ uRam0000000003d259b8);
    uVar13 = (undefined4)uVar14;
    /*Atlas.Maths.VerletIntegration$$.ctor*/ func_0x01527998();
    *(undefined8 *)(uVar3 + 0x40) = uVar6;
    uVar12 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    *(undefined4 *)(uVar3 + 0x48) = uVar12;
    *(undefined4 *)(uVar3 + 0x4c) = uVar13;
    *(float *)(uVar3 + 0x50) = fVar15;
    uVar12 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    *(undefined4 *)(uVar3 + 0x58) = uVar12;
    *(undefined4 *)(uVar3 + 0x5c) = uVar13;
    *(float *)(uVar3 + 0x60) = fVar15;
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return uVar3;
  }
  uStack_160 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar2,0);
  uVar11 = _UNK_033f8518;
  uStack_148 = (ulong)_UNK_033f8518;
  puStack_128 = &UNK_015315ec;
  fStack_15c = param_2;
  fStack_158 = fVar15;
  uStack_150 = unaff_d9;
  if (pcRam0000000003ebf570 == (code *)0x0) {
    pcRam0000000003ebf570 =
         (code *)func_0x00f789d4(
                                "UnityEngine.Gizmos::DrawSphere_Injected(UnityEngine.Vector3&,System.Single)"
                                );
  }
  uVar3 = (*pcRam0000000003ebf570)(uVar11,&uStack_160);
  return uVar3;
}



// ============================================================
// RVA: 0x1531388 | Atlas.Rendering.WibbleBehaviour.Update
// ============================================================

/* WARNING: Possible PIC construction at 0x015315e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01531614: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015315ec) */
/* WARNING: Removing unreachable block (ram,0x015315fc) */
/* WARNING: Removing unreachable block (ram,0x01531618) */
/* WARNING: Removing unreachable block (ram,0x01531664) */
/* WARNING: Removing unreachable block (ram,0x01531620) */
/* WARNING: Removing unreachable block (ram,0x01531634) */
/* WARNING: Removing unreachable block (ram,0x01531638) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Rendering_WibbleBehaviour__Update
                (undefined1 param_1 [16],uint param_2,undefined4 param_3,ulong param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x21;
  uint uVar7;
  ulong unaff_x22;
  float extraout_s0;
  uint uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  ulong unaff_d8;
  ulong unaff_d9;
  undefined4 uStack_100;
  uint uStack_fc;
  undefined4 uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined1 **ppuStack_d0;
  undefined *puStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  uint uStack_90;
  uint uStack_8c;
  undefined4 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined4 uStack_68;
  
  uVar6 = 0x3eb4000;
  uVar2 = param_4;
  if ((bRam0000000003eb4ea9 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    uVar2 = func_0x00f78a20(0x3d25b58);
    bRam0000000003eb4ea9 = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  if (*(long *)(param_4 + 0x18) == 0) {
    return uVar2;
  }
  lVar5 = *(long *)(param_4 + 0x40);
  if (lVar5 != 0) {
    uStack_6c = *(uint *)(lVar5 + 0x28);
    uVar12 = *(undefined4 *)(lVar5 + 0x2c);
    uStack_70 = /*UnityEngine.Vector3$$Cross*/ func_0x0327b588(*(undefined4 *)(lVar5 + 0x24),uStack_6c,uVar12,
                                *(undefined4 *)(lVar5 + 0x18),*(undefined4 *)(lVar5 + 0x1c),
                                *(undefined4 *)(lVar5 + 0x20),0);
    param_3 = 0;
    uStack_68 = uVar12;
    /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(0x3f800000,0,0,0,&uStack_80,0);
    uVar3 = /*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0(&uStack_70,0);
    uVar2 = (ulong)(uint)_UNK_033f8758;
    if (_UNK_033f8758 < extraout_s0) {
      param_3 = uStack_68;
      param_2 = uStack_6c;
      uVar8 = /*UnityEngine.Vector3$$Normalize*/ func_0x0327b718(uStack_70,0);
      lVar5 = *(long *)(param_4 + 0x40);
      if (lVar5 == 0) goto LAB_0153158c;
      unaff_d8 = (ulong)uVar8;
      unaff_d9 = (ulong)param_2;
      uStack_90 = uVar8;
      uStack_8c = param_2;
      uStack_88 = param_3;
      fVar9 = (float)/*UnityEngine.Vector3$$SignedAngle*/ func_0x0327bc00(*(undefined4 *)(lVar5 + 0x24),*(undefined4 *)(lVar5 + 0x28),
                                     *(undefined4 *)(lVar5 + 0x2c),*(undefined4 *)(lVar5 + 0x18),
                                     *(undefined4 *)(lVar5 + 0x1c),*(undefined4 *)(lVar5 + 0x20),0);
      uVar2 = (ulong)param_2;
      uVar3 = /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(uVar8,uVar2,param_3,*(float *)(param_4 + 0x3c) * -fVar9,&uStack_80,0);
    }
    param_2 = (uint)uVar2;
    unaff_x21 = *(long *)(param_4 + 0x18);
    if (unaff_x21 != 0) {
      uVar8 = *(uint *)(unaff_x21 + 0x18);
      if ((int)uVar8 < 1) {
        return uVar3;
      }
      unaff_x22 = 0;
      param_4 = 0;
      while( true ) {
        param_2 = (uint)uVar2;
        uVar7 = (uint)unaff_x22;
        if (uVar8 <= uVar7) break;
        lVar5 = *(long *)(unaff_x21 + (long)(int)uVar7 * 8 + 0x20);
        if (lVar5 == 0) goto LAB_0153158c;
        uVar6 = /*UnityEngine.Renderer$$get_sharedMaterial*/ func_0x0325bea4(lVar5,0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar6,param_4,0);
        param_2 = (uint)uVar2;
        if ((uVar3 & 1) == 0) {
          if (((*(ushort *)(/*Atlas.Rendering.WibbleBehaviour_TypeInfo*/ lRam0000000003d25b58 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Rendering.WibbleBehaviour_TypeInfo*/ lRam0000000003d25b58 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          if (uVar6 == 0) goto LAB_0153158c;
          uVar2 = uStack_80 >> 0x20;
          param_3 = (undefined4)uStack_78;
          uVar3 = /*UnityEngine.Material$$SetVector*/ func_0x0323af88(uStack_80 & 0xffffffff,uVar2,(undefined4)uStack_78,uStack_78._4_4_
                                  ,uVar6,**(undefined4 **)(/*Atlas.Rendering.WibbleBehaviour_TypeInfo*/ lRam0000000003d25b58 + 0xb8),0);
          param_4 = uVar6;
        }
        unaff_x22 = (ulong)(uVar7 + 1);
        uVar8 = *(uint *)(unaff_x21 + 0x18);
        if ((int)uVar8 <= (int)(uVar7 + 1)) {
          return uVar3;
        }
      }
      goto LAB_01531590;
    }
  }
LAB_0153158c:
  func_0x00f78af4();
LAB_01531590:
  uVar4 = func_0x00f78b24();
  uVar4 = func_0x00f78ac0(uVar4,0);
  puStack_98 = &Atlas_Rendering_WibbleBehaviour__OnDrawGizmos;
  uStack_c0 = unaff_d9;
  uStack_b8 = unaff_d8;
  uStack_b0 = uVar6;
  uStack_a8 = param_4;
  puStack_a0 = &stack0xfffffffffffffff0;
  /*UnityEngine.Color$$get_cyan*/ func_0x032235ec(0);
  /*UnityEngine.Gizmos$$set_color*/ func_0x0322fbcc(0);
  lVar5 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(uVar4,0);
  uStack_e0 = uVar6;
  uStack_d8 = uVar4;
  ppuStack_d0 = &puStack_a0;
  if (lVar5 == 0) {
    uVar2 = func_0x00f78af4();
    puStack_c8 = &Atlas_Rendering_WibbleBehaviour___ctor;
    uStack_f0 = unaff_x22;
    uStack_e8 = unaff_x21;
    if ((bRam0000000003eb4eaa & 1) == 0) {
      func_0x00f78a20(0x3d259b8);
      bRam0000000003eb4eaa = 1;
    }
    uVar1 = _UNK_033f87d8;
    uVar11 = _UNK_033f87d0;
    uVar4 = _UNK_033f87c0;
    *(undefined8 *)(uVar2 + 0x28) = _UNK_033f87c8;
    *(undefined8 *)(uVar2 + 0x20) = uVar4;
    *(undefined8 *)(uVar2 + 0x38) = uVar1;
    *(undefined8 *)(uVar2 + 0x30) = uVar11;
    uVar4 = func_0x00f78aec(/*Atlas.Maths.VerletIntegration_TypeInfo*/ uRam0000000003d259b8);
    uVar10 = (undefined4)uVar11;
    /*Atlas.Maths.VerletIntegration$$.ctor*/ func_0x01527998();
    *(undefined8 *)(uVar2 + 0x40) = uVar4;
    uVar12 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    *(undefined4 *)(uVar2 + 0x48) = uVar12;
    *(undefined4 *)(uVar2 + 0x4c) = uVar10;
    *(undefined4 *)(uVar2 + 0x50) = param_3;
    uVar12 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    *(undefined4 *)(uVar2 + 0x58) = uVar12;
    *(undefined4 *)(uVar2 + 0x5c) = uVar10;
    *(undefined4 *)(uVar2 + 0x60) = param_3;
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return uVar2;
  }
  uStack_100 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar5,0);
  uVar8 = _UNK_033f8518;
  uStack_e8 = (ulong)_UNK_033f8518;
  puStack_c8 = &UNK_015315ec;
  uStack_fc = param_2;
  uStack_f8 = param_3;
  uStack_f0 = unaff_d9;
  if (pcRam0000000003ebf570 == (code *)0x0) {
    pcRam0000000003ebf570 =
         (code *)func_0x00f789d4(
                                "UnityEngine.Gizmos::DrawSphere_Injected(UnityEngine.Vector3&,System.Single)"
                                );
  }
  uVar2 = (*pcRam0000000003ebf570)(uVar8,&uStack_100);
  return uVar2;
}



// ============================================================
// RVA: 0x153159c | Atlas.Rendering.WibbleBehaviour.OnDrawGizmos
// ============================================================

/* WARNING: Possible PIC construction at 0x015315e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01531614: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015315ec) */
/* WARNING: Removing unreachable block (ram,0x015315fc) */
/* WARNING: Removing unreachable block (ram,0x01531618) */
/* WARNING: Removing unreachable block (ram,0x01531664) */
/* WARNING: Removing unreachable block (ram,0x01531620) */
/* WARNING: Removing unreachable block (ram,0x01531634) */
/* WARNING: Removing unreachable block (ram,0x01531638) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_Rendering_WibbleBehaviour__OnDrawGizmos
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  
  /*UnityEngine.Color$$get_cyan*/ func_0x032235ec(0);
  /*UnityEngine.Gizmos$$set_color*/ func_0x0322fbcc(0);
  lVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_4,0);
  if (lVar2 != 0) {
    uStack_70 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar2,0);
    uVar4 = _UNK_033f8518;
    uStack_6c = param_2;
    uStack_68 = param_3;
    if (pcRam0000000003ebf570 == (code *)0x0) {
      pcRam0000000003ebf570 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.Gizmos::DrawSphere_Injected(UnityEngine.Vector3&,System.Single)"
                                  );
    }
    lVar2 = (*pcRam0000000003ebf570)(uVar4,&uStack_70);
    return lVar2;
  }
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb4eaa & 1) == 0) {
    func_0x00f78a20(0x3d259b8);
    bRam0000000003eb4eaa = 1;
  }
  uVar1 = _UNK_033f87d8;
  uVar6 = _UNK_033f87d0;
  uVar3 = _UNK_033f87c0;
  *(undefined8 *)(lVar2 + 0x28) = _UNK_033f87c8;
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  *(undefined8 *)(lVar2 + 0x38) = uVar1;
  *(undefined8 *)(lVar2 + 0x30) = uVar6;
  uVar3 = func_0x00f78aec(/*Atlas.Maths.VerletIntegration_TypeInfo*/ uRam0000000003d259b8);
  uVar5 = (undefined4)uVar6;
  /*Atlas.Maths.VerletIntegration$$.ctor*/ func_0x01527998();
  *(undefined8 *)(lVar2 + 0x40) = uVar3;
  uVar4 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(lVar2 + 0x48) = uVar4;
  *(undefined4 *)(lVar2 + 0x4c) = uVar5;
  *(undefined4 *)(lVar2 + 0x50) = param_3;
  uVar4 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(lVar2 + 0x58) = uVar4;
  *(undefined4 *)(lVar2 + 0x5c) = uVar5;
  *(undefined4 *)(lVar2 + 0x60) = param_3;
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
// RVA: 0x1531678 | Atlas.Rendering.WibbleBehaviour..ctor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
Atlas_Rendering_WibbleBehaviour___ctor
          (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000003eb4eaa & 1) == 0) {
    func_0x00f78a20(0x3d259b8);
    bRam0000000003eb4eaa = 1;
  }
  uVar1 = _UNK_033f87d8;
  uVar5 = _UNK_033f87d0;
  uVar2 = _UNK_033f87c0;
  *(undefined8 *)(param_4 + 0x28) = _UNK_033f87c8;
  *(undefined8 *)(param_4 + 0x20) = uVar2;
  *(undefined8 *)(param_4 + 0x38) = uVar1;
  *(undefined8 *)(param_4 + 0x30) = uVar5;
  uVar2 = func_0x00f78aec(/*Atlas.Maths.VerletIntegration_TypeInfo*/ uRam0000000003d259b8);
  uVar4 = (undefined4)uVar5;
  /*Atlas.Maths.VerletIntegration$$.ctor*/ func_0x01527998();
  *(undefined8 *)(param_4 + 0x40) = uVar2;
  uVar3 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(param_4 + 0x48) = uVar3;
  *(undefined4 *)(param_4 + 0x4c) = uVar4;
  *(undefined4 *)(param_4 + 0x50) = param_3;
  uVar3 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(param_4 + 0x58) = uVar3;
  *(undefined4 *)(param_4 + 0x5c) = uVar4;
  *(undefined4 *)(param_4 + 0x60) = param_3;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_4;
  return auVar6;
}



// ============================================================
// RVA: 0x1531714 | Atlas.Rendering.WibbleBehaviour..cctor
// ============================================================

void Atlas_Rendering_WibbleBehaviour___cctor(void)

{
  undefined4 uVar1;
  
  if ((bRam0000000003eb4eab & 1) == 0) {
    func_0x00f78a20(0x3d25b58);
    func_0x00f78a20(0x3d76d10);
    bRam0000000003eb4eab = 1;
  }
  uVar1 = /*UnityEngine.Shader$$PropertyToID*/ func_0x03261878(/*STR('_BendParams')*/ uRam0000000003d76d10,0);
  **(undefined4 **)(/*Atlas.Rendering.WibbleBehaviour_TypeInfo*/ lRam0000000003d25b58 + 0xb8) = uVar1;
  return;
}



