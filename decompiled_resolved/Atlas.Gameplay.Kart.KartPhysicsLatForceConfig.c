// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Kart.KartPhysicsLatForceConfig

// ============================================================
// RVA: 0x15db99c | Atlas.Gameplay.Kart.KartPhysicsLatForceConfig..ctor
// ============================================================

/* WARNING: Possible PIC construction at 0x015dbb90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015dbbb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015dbb94) */
/* WARNING: Removing unreachable block (ram,0x015dbb9c) */
/* WARNING: Removing unreachable block (ram,0x015dbbbc) */
/* WARNING: Removing unreachable block (ram,0x015dbbc4) */
/* WARNING: Removing unreachable block (ram,0x015dbbe0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
Atlas_Gameplay_Kart_KartPhysicsLatForceConfig___ctor(float *param_1,long *param_2,float *param_3)

{
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  float *extraout_x1;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  float *pfVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  float fVar12;
  uint uVar13;
  float fVar14;
  undefined1 auVar15 [16];
  ulong unaff_d8;
  ulong unaff_d9;
  undefined1 auVar16 [16];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  float *pfStack_a0;
  float *pfStack_98;
  long *plStack_90;
  float *pfStack_88;
  undefined1 **ppuStack_80;
  undefined *puStack_78;
  undefined1 *puStack_30;
  undefined *puStack_28;
  float *pfVar1;
  long *plVar5;
  
  if (*(long *)param_3 != 0) {
    fVar12 = (float)/*UnityEngine.Rigidbody$$get_mass*/ func_0x032a24c4(*(long *)param_3,0);
    lVar6 = *param_2;
    if (lVar6 != 0) {
      *param_1 = fVar12 * *(float *)(lVar6 + 0x68);
      *(ulong *)(param_1 + 1) =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar6 + 0x78) >> 0x20) * fVar12,
                    (float)*(undefined8 *)(lVar6 + 0x78) * fVar12);
      fVar12 = fVar12 * *(float *)(lVar6 + 0x180);
      param_1[3] = fVar12;
      return ZEXT416((uint)fVar12);
    }
  }
  auVar16 = func_0x00f78af4();
  plVar5 = auVar16._8_8_;
  pfVar1 = auVar16._0_8_;
  puStack_28 = &Atlas_Gameplay_Kart_KartPhysicsLngForceConfig___ctor;
  pfVar9 = (float *)0x3eb5000;
  puStack_30 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb539c & 1) == 0) {
    func_0x00f78a20(0x3d1fb90);
    bRam0000000003eb539c = 1;
  }
  if (*(long *)param_3 == 0) {
code_r0x015dbc08:
    func_0x00f78af4();
    pfStack_98 = param_3;
  }
  else {
    fVar12 = (float)/*UnityEngine.Rigidbody$$get_mass*/ func_0x032a24c4(*(long *)param_3,0);
    lVar6 = *plVar5;
    if (lVar6 == 0) goto code_r0x015dbc08;
    unaff_d8 = (ulong)(uint)fVar12;
    *pfVar1 = fVar12 * *(float *)(lVar6 + 0x38);
    if (*(long *)(lVar6 + 0x20) == 0) goto code_r0x015dbc08;
    uVar2 = /*UnityEngine.AnimationCurve$$get_keys*/ func_0x03217adc(*(long *)(lVar6 + 0x20),0);
    pfVar9 = (float *)func_0x00f78aec(/*UnityEngine.AnimationCurve_TypeInfo*/ uRam0000000003d1fb90);
    /*UnityEngine.AnimationCurve$$.ctor*/ func_0x0321818c(pfVar9,uVar2,0);
    param_3 = pfVar1 + 4;
    *(float **)param_3 = pfVar9;
    if ((*plVar5 == 0) || (lVar6 = *(long *)(*plVar5 + 0x28), lVar6 == 0)) goto code_r0x015dbc08;
    uVar2 = /*UnityEngine.AnimationCurve$$get_keys*/ func_0x03217adc(lVar6,0);
    uVar3 = func_0x00f78aec(/*UnityEngine.AnimationCurve_TypeInfo*/ uRam0000000003d1fb90);
    /*UnityEngine.AnimationCurve$$.ctor*/ func_0x0321818c(uVar3,uVar2,0);
    pfVar9 = pfVar1 + 6;
    *(undefined8 *)pfVar9 = uVar3;
    if ((*plVar5 == 0) || (lVar6 = *(long *)(*plVar5 + 0x148), lVar6 == 0)) goto code_r0x015dbc08;
    uVar2 = /*UnityEngine.AnimationCurve$$get_keys*/ func_0x03217adc(lVar6,0);
    uVar3 = func_0x00f78aec(/*UnityEngine.AnimationCurve_TypeInfo*/ uRam0000000003d1fb90);
    /*UnityEngine.AnimationCurve$$.ctor*/ func_0x0321818c(uVar3,uVar2,0);
    *(undefined8 *)(pfVar1 + 8) = uVar3;
    pfVar1[1] = 0.0;
    pfVar1[2] = 0.0;
    if ((*plVar5 == 0) || (lVar6 = *(long *)(*plVar5 + 0x28), lVar6 == 0)) goto code_r0x015dbc08;
    lVar6 = /*UnityEngine.AnimationCurve$$get_keys*/ func_0x03217adc(lVar6,0);
    if ((*plVar5 == 0) ||
       (((lVar4 = *(long *)(*plVar5 + 0x28), lVar4 == 0 ||
         (lVar4 = /*UnityEngine.AnimationCurve$$get_keys*/ func_0x03217adc(lVar4,0), lVar4 == 0)) || (lVar6 == 0)))) goto code_r0x015dbc08;
    uVar13 = *(int *)(lVar4 + 0x18) - 1;
    pfStack_98 = param_3;
    if (uVar13 < *(uint *)(lVar6 + 0x18)) {
      uVar13 = /*UnityEngine.Keyframe$$get_time*/ func_0x03231e84(lVar6 + (long)(int)uVar13 * 0x1c + 0x20,0);
      unaff_d9 = (ulong)uVar13;
      puVar11 = &UNK_015dbb94;
      goto code_r0x015dbc18;
    }
  }
  uVar2 = func_0x00f78b24();
  puVar11 = &Atlas_Gameplay_Kart_KartPhysicsLngForceConfig__CurveMultiplyValue;
  fVar12 = (float)func_0x00f78ac0(uVar2,0);
  param_3 = extraout_x1;
code_r0x015dbc18:
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_b0 = unaff_d9;
  uStack_a8 = unaff_d8;
  pfStack_a0 = pfVar9;
  ppuStack_80 = &puStack_30;
  puStack_78 = puVar11;
  if (*(long *)param_3 != 0) {
    plStack_90 = plVar5;
    pfStack_88 = pfVar1;
    lVar6 = /*UnityEngine.AnimationCurve$$get_keys*/ func_0x03217adc(*(long *)param_3,0);
    auVar16._8_8_ = plStack_90;
    auVar16._0_8_ = pfStack_88;
    if (lVar6 != 0) {
      if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
        uVar8 = 0;
        uVar7 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
        puVar10 = (undefined8 *)(lVar6 + 0x20);
        do {
          if (uVar7 <= uVar8) {
code_r0x015dbd10:
            uVar2 = func_0x00f78b24();
            func_0x00f78ac0(uVar2,0);
            auVar16._8_8_ = plStack_90;
            auVar16._0_8_ = pfStack_88;
            goto code_r0x015dbd1c;
          }
          uStack_c8 = puVar10[1];
          uStack_d0 = *puVar10;
          uStack_c0 = puVar10[2];
          uStack_b8 = *(undefined4 *)(puVar10 + 3);
          fVar14 = (float)/*UnityEngine.Keyframe$$get_value*/ func_0x03231e94(&uStack_d0,0);
          /*UnityEngine.Keyframe$$set_value*/ func_0x03231e9c(fVar14 * fVar12,&uStack_d0,0);
          if (*(uint *)(lVar6 + 0x18) <= uVar8) goto code_r0x015dbd10;
          *(undefined4 *)(puVar10 + 3) = uStack_b8;
          puVar10[2] = uStack_c0;
          puVar10[1] = uStack_c8;
          *puVar10 = uStack_d0;
          uVar8 = uVar8 + 1;
          uVar7 = (ulong)*(uint *)(lVar6 + 0x18);
          puVar10 = (undefined8 *)((long)puVar10 + 0x1c);
        } while ((long)uVar8 < (long)(int)*(uint *)(lVar6 + 0x18));
      }
      auVar16._8_8_ = plStack_90;
      auVar16._0_8_ = pfStack_88;
      if (*(long *)param_3 != 0) {
        auVar16 = /*UnityEngine.AnimationCurve$$set_keys*/ func_0x03217b5c(*(long *)param_3,lVar6,0);
        return auVar16;
      }
    }
  }
code_r0x015dbd1c:
  plStack_90 = auVar16._8_8_;
  pfStack_88 = auVar16._0_8_;
  auVar16 = func_0x00f78af4();
  *auVar16._0_8_ = _UNK_033f8d10;
  if (*auVar16._8_8_ != 0) {
    fVar12 = *(float *)(*auVar16._8_8_ + 0x188);
    auVar15._0_8_ =
         CONCAT44((float)((ulong)_UNK_033f8d18 >> 0x20) * fVar12,(float)_UNK_033f8d18 * fVar12);
    auVar16._0_8_[1] = auVar15._0_8_;
    auVar15._8_8_ = 0;
    return auVar15;
  }
  lVar6 = func_0x00f78af4();
  return ZEXT416(*(uint *)(lVar6 + 0x10));
}



