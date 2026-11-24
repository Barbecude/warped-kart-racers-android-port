// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Kart.KartPhysicsLngForceConfig

// ============================================================
// RVA: 0x15db9fc | Atlas.Gameplay.Kart.KartPhysicsLngForceConfig..ctor
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
Atlas_Gameplay_Kart_KartPhysicsLngForceConfig___ctor(float *param_1,long *param_2,float *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  float *extraout_x1;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  float *pfVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  float fVar10;
  uint uVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  ulong unaff_d8;
  ulong unaff_d9;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  float *pfStack_80;
  float *pfStack_78;
  long *plStack_70;
  float *pfStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  pfVar7 = (float *)0x3eb5000;
  if ((bRam0000000003eb539c & 1) == 0) {
    func_0x00f78a20(0x3d1fb90);
    bRam0000000003eb539c = 1;
  }
  if (*(long *)param_3 == 0) {
LAB_015dbc08:
    func_0x00f78af4();
    pfStack_78 = param_3;
  }
  else {
    fVar10 = (float)/*UnityEngine.Rigidbody$$get_mass*/ func_0x032a24c4(*(long *)param_3,0);
    lVar4 = *param_2;
    if (lVar4 == 0) goto LAB_015dbc08;
    unaff_d8 = (ulong)(uint)fVar10;
    *param_1 = fVar10 * *(float *)(lVar4 + 0x38);
    if (*(long *)(lVar4 + 0x20) == 0) goto LAB_015dbc08;
    uVar1 = /*UnityEngine.AnimationCurve$$get_keys*/ func_0x03217adc(*(long *)(lVar4 + 0x20),0);
    pfVar7 = (float *)func_0x00f78aec(/*UnityEngine.AnimationCurve_TypeInfo*/ uRam0000000003d1fb90);
    /*UnityEngine.AnimationCurve$$.ctor*/ func_0x0321818c(pfVar7,uVar1,0);
    param_3 = param_1 + 4;
    *(float **)param_3 = pfVar7;
    if ((*param_2 == 0) || (lVar4 = *(long *)(*param_2 + 0x28), lVar4 == 0)) goto LAB_015dbc08;
    uVar1 = /*UnityEngine.AnimationCurve$$get_keys*/ func_0x03217adc(lVar4,0);
    uVar2 = func_0x00f78aec(/*UnityEngine.AnimationCurve_TypeInfo*/ uRam0000000003d1fb90);
    /*UnityEngine.AnimationCurve$$.ctor*/ func_0x0321818c(uVar2,uVar1,0);
    pfVar7 = param_1 + 6;
    *(undefined8 *)pfVar7 = uVar2;
    if ((*param_2 == 0) || (lVar4 = *(long *)(*param_2 + 0x148), lVar4 == 0)) goto LAB_015dbc08;
    uVar1 = /*UnityEngine.AnimationCurve$$get_keys*/ func_0x03217adc(lVar4,0);
    uVar2 = func_0x00f78aec(/*UnityEngine.AnimationCurve_TypeInfo*/ uRam0000000003d1fb90);
    /*UnityEngine.AnimationCurve$$.ctor*/ func_0x0321818c(uVar2,uVar1,0);
    *(undefined8 *)(param_1 + 8) = uVar2;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    if ((*param_2 == 0) || (lVar4 = *(long *)(*param_2 + 0x28), lVar4 == 0)) goto LAB_015dbc08;
    lVar4 = /*UnityEngine.AnimationCurve$$get_keys*/ func_0x03217adc(lVar4,0);
    if ((*param_2 == 0) ||
       (((lVar3 = *(long *)(*param_2 + 0x28), lVar3 == 0 ||
         (lVar3 = /*UnityEngine.AnimationCurve$$get_keys*/ func_0x03217adc(lVar3,0), lVar3 == 0)) || (lVar4 == 0)))) goto LAB_015dbc08;
    uVar11 = *(int *)(lVar3 + 0x18) - 1;
    pfStack_78 = param_3;
    if (uVar11 < *(uint *)(lVar4 + 0x18)) {
      uVar11 = /*UnityEngine.Keyframe$$get_time*/ func_0x03231e84(lVar4 + (long)(int)uVar11 * 0x1c + 0x20,0);
      unaff_d9 = (ulong)uVar11;
      puVar9 = (undefined *)0x15dbb94;
      goto code_r0x015dbc18;
    }
  }
  uVar1 = func_0x00f78b24();
  puVar9 = &Atlas_Gameplay_Kart_KartPhysicsLngForceConfig__CurveMultiplyValue;
  fVar10 = (float)func_0x00f78ac0(uVar1,0);
  param_3 = extraout_x1;
code_r0x015dbc18:
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_90 = unaff_d9;
  uStack_88 = unaff_d8;
  pfStack_80 = pfVar7;
  plStack_70 = param_2;
  pfStack_68 = param_1;
  puStack_60 = &stack0xfffffffffffffff0;
  puStack_58 = puVar9;
  if (*(long *)param_3 != 0) {
    lVar4 = /*UnityEngine.AnimationCurve$$get_keys*/ func_0x03217adc(*(long *)param_3,0);
    if (lVar4 != 0) {
      if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
        uVar6 = 0;
        uVar5 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
        puVar8 = (undefined8 *)(lVar4 + 0x20);
        do {
          if (uVar5 <= uVar6) {
code_r0x015dbd10:
            uVar1 = func_0x00f78b24();
            func_0x00f78ac0(uVar1,0);
            goto code_r0x015dbd1c;
          }
          uStack_a8 = puVar8[1];
          uStack_b0 = *puVar8;
          uStack_a0 = puVar8[2];
          uStack_98 = *(undefined4 *)(puVar8 + 3);
          fVar12 = (float)/*UnityEngine.Keyframe$$get_value*/ func_0x03231e94(&uStack_b0,0);
          /*UnityEngine.Keyframe$$set_value*/ func_0x03231e9c(fVar12 * fVar10,&uStack_b0,0);
          if (*(uint *)(lVar4 + 0x18) <= uVar6) goto code_r0x015dbd10;
          *(undefined4 *)(puVar8 + 3) = uStack_98;
          puVar8[2] = uStack_a0;
          puVar8[1] = uStack_a8;
          *puVar8 = uStack_b0;
          uVar6 = uVar6 + 1;
          uVar5 = (ulong)*(uint *)(lVar4 + 0x18);
          puVar8 = (undefined8 *)((long)puVar8 + 0x1c);
        } while ((long)uVar6 < (long)(int)*(uint *)(lVar4 + 0x18));
      }
      if (*(long *)param_3 != 0) {
        auVar13 = /*UnityEngine.AnimationCurve$$set_keys*/ func_0x03217b5c(*(long *)param_3,lVar4,0);
        return auVar13;
      }
    }
  }
code_r0x015dbd1c:
  auVar13 = func_0x00f78af4();
  *auVar13._0_8_ = _UNK_033f8d10;
  if (*auVar13._8_8_ != 0) {
    fVar10 = *(float *)(*auVar13._8_8_ + 0x188);
    auVar14._0_8_ =
         CONCAT44((float)((ulong)_UNK_033f8d18 >> 0x20) * fVar10,(float)_UNK_033f8d18 * fVar10);
    auVar13._0_8_[1] = auVar14._0_8_;
    auVar14._8_8_ = 0;
    return auVar14;
  }
  lVar4 = func_0x00f78af4();
  return ZEXT416(*(uint *)(lVar4 + 0x10));
}



// ============================================================
// RVA: 0x15dbc18 | Atlas.Gameplay.Kart.KartPhysicsLngForceConfig.CurveMultiplyValue
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
Atlas_Gameplay_Kart_KartPhysicsLngForceConfig__CurveMultiplyValue
          (float param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  if (*param_3 != 0) {
    lVar1 = /*UnityEngine.AnimationCurve$$get_keys*/ func_0x03217adc(*param_3,0);
    if (lVar1 != 0) {
      if (0 < (int)*(ulong *)(lVar1 + 0x18)) {
        uVar4 = 0;
        uVar3 = *(ulong *)(lVar1 + 0x18) & 0xffffffff;
        puVar5 = (undefined8 *)(lVar1 + 0x20);
        do {
          if (uVar3 <= uVar4) {
LAB_015dbd10:
            uVar2 = func_0x00f78b24();
            func_0x00f78ac0(uVar2,0);
            goto LAB_015dbd1c;
          }
          uStack_58 = puVar5[1];
          uStack_60 = *puVar5;
          uStack_50 = puVar5[2];
          uStack_48 = *(undefined4 *)(puVar5 + 3);
          fVar6 = (float)/*UnityEngine.Keyframe$$get_value*/ func_0x03231e94(&uStack_60,0);
          /*UnityEngine.Keyframe$$set_value*/ func_0x03231e9c(fVar6 * param_1,&uStack_60,0);
          if (*(uint *)(lVar1 + 0x18) <= uVar4) goto LAB_015dbd10;
          *(undefined4 *)(puVar5 + 3) = uStack_48;
          puVar5[2] = uStack_50;
          puVar5[1] = uStack_58;
          *puVar5 = uStack_60;
          uVar4 = uVar4 + 1;
          uVar3 = (ulong)*(uint *)(lVar1 + 0x18);
          puVar5 = (undefined8 *)((long)puVar5 + 0x1c);
        } while ((long)uVar4 < (long)(int)*(uint *)(lVar1 + 0x18));
      }
      if (*param_3 != 0) {
        auVar7 = /*UnityEngine.AnimationCurve$$set_keys*/ func_0x03217b5c(*param_3,lVar1,0);
        return auVar7;
      }
    }
  }
LAB_015dbd1c:
  auVar7 = func_0x00f78af4();
  *auVar7._0_8_ = _UNK_033f8d10;
  if (*auVar7._8_8_ != 0) {
    fVar6 = *(float *)(*auVar7._8_8_ + 0x188);
    auVar8._0_8_ = CONCAT44((float)((ulong)_UNK_033f8d18 >> 0x20) * fVar6,
                            (float)_UNK_033f8d18 * fVar6);
    auVar7._0_8_[1] = auVar8._0_8_;
    auVar8._8_8_ = 0;
    return auVar8;
  }
  lVar1 = func_0x00f78af4();
  return ZEXT416(*(uint *)(lVar1 + 0x10));
}



