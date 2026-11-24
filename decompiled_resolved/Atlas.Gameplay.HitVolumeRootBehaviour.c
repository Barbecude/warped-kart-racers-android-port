// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.HitVolumeRootBehaviour

// ============================================================
// RVA: 0x15b4dfc | Atlas.Gameplay.HitVolumeRootBehaviour.get_ShortcutHitVolumes
// ============================================================

undefined8 Atlas_Gameplay_HitVolumeRootBehaviour__get_ShortcutHitVolumes(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x15b4e04 | Atlas.Gameplay.HitVolumeRootBehaviour.get_HitVolumes
// ============================================================

undefined8 Atlas_Gameplay_HitVolumeRootBehaviour__get_HitVolumes(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x15b4e0c | Atlas.Gameplay.HitVolumeRootBehaviour.get_VfxHitVolumes
// ============================================================

undefined8 Atlas_Gameplay_HitVolumeRootBehaviour__get_VfxHitVolumes(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x15b4e14 | Atlas.Gameplay.HitVolumeRootBehaviour.get_VfxAdditionalHitVolumes
// ============================================================

undefined8 Atlas_Gameplay_HitVolumeRootBehaviour__get_VfxAdditionalHitVolumes(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x15b4e1c | Atlas.Gameplay.HitVolumeRootBehaviour.TryGetHitVolume
// ============================================================

/* WARNING: Type propagation algorithm not settling */

undefined1 *
Atlas_Gameplay_HitVolumeRootBehaviour__TryGetHitVolume
          (long *param_1,long *param_2,long *param_3,long *param_4,long *param_5,long *param_6,
          long *param_7)

{
  code *pcVar1;
  long **pplVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined1 *puVar17;
  undefined8 uVar18;
  long *plVar19;
  int extraout_w1;
  int extraout_w1_00;
  undefined8 extraout_x1;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  undefined8 uVar23;
  uint uVar24;
  long *plVar25;
  long *plVar26;
  uint uVar27;
  long *plVar28;
  long *plVar29;
  undefined8 *puVar30;
  long lVar31;
  int *piVar32;
  long lVar33;
  long *plVar34;
  int iVar35;
  long *unaff_x23;
  long *plVar36;
  long *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 *******pppppppuVar37;
  undefined *puVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  long alStack_5b8 [2];
  undefined1 auStack_5a8 [16];
  undefined1 auStack_598 [16];
  undefined1 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  long *plStack_570;
  long *plStack_568;
  undefined1 *puStack_560;
  long *plStack_558;
  undefined8 *puStack_550;
  undefined8 uStack_548;
  undefined8 *******pppppppuStack_540;
  undefined *puStack_538;
  long *plStack_530;
  long *plStack_528;
  undefined1 auStack_520 [16];
  long lStack_510;
  long *plStack_508;
  undefined8 *******pppppppuStack_500;
  undefined *puStack_4f8;
  long *plStack_4f0;
  long *plStack_4e8;
  undefined1 auStack_4e0 [16];
  long lStack_4d0;
  long *plStack_4c8;
  undefined8 *******pppppppuStack_4c0;
  undefined *puStack_4b8;
  long *plStack_4b0;
  undefined8 uStack_4a8;
  long *plStack_4a0;
  long lStack_498;
  long lStack_490;
  long *plStack_488;
  undefined8 *******pppppppuStack_480;
  undefined *puStack_478;
  int aiStack_470 [4];
  long *plStack_460;
  long *plStack_458;
  undefined8 uStack_450;
  long *plStack_448;
  long *plStack_440;
  long *plStack_438;
  undefined8 *******pppppppuStack_430;
  undefined *puStack_428;
  undefined8 uStack_420;
  long *plStack_418;
  long *plStack_410;
  long *plStack_408;
  undefined8 *******pppppppuStack_400;
  undefined *puStack_3f8;
  long *plStack_3f0;
  long *plStack_3e8;
  undefined8 *******pppppppuStack_3e0;
  undefined *puStack_3d8;
  long *plStack_3d0;
  long *plStack_3c8;
  undefined8 *******pppppppuStack_3c0;
  undefined *puStack_3b8;
  long *plStack_3b0;
  long *plStack_3a8;
  undefined8 *******pppppppuStack_3a0;
  undefined *puStack_398;
  long *plStack_390;
  long *plStack_388;
  undefined8 *******pppppppuStack_380;
  undefined *puStack_378;
  long *plStack_370;
  long *plStack_368;
  undefined8 *******pppppppuStack_360;
  undefined *puStack_358;
  long *plStack_350;
  long *plStack_348;
  undefined8 *******pppppppuStack_340;
  undefined *puStack_338;
  long *plStack_330;
  long *plStack_328;
  undefined8 *******pppppppuStack_320;
  undefined *puStack_318;
  long *plStack_310;
  long *plStack_308;
  undefined8 *******pppppppuStack_300;
  undefined *puStack_2f8;
  long *plStack_2f0;
  long *plStack_2e8;
  undefined8 *******pppppppuStack_2e0;
  undefined *puStack_2d8;
  long *plStack_2d0;
  long *plStack_2c8;
  undefined8 *******pppppppuStack_2c0;
  undefined *puStack_2b8;
  uint uStack_2ac;
  uint uStack_2a8;
  uint uStack_2a4;
  long *plStack_2a0;
  long *plStack_298;
  long *plStack_290;
  long *plStack_288;
  long *plStack_280;
  long *plStack_278;
  undefined8 *******pppppppuStack_270;
  undefined *puStack_268;
  undefined1 auStack_260 [4];
  uint uStack_25c;
  uint uStack_258;
  uint uStack_254;
  long *plStack_250;
  long *plStack_248;
  long *plStack_240;
  long *plStack_238;
  long *plStack_230;
  long *plStack_228;
  undefined8 *******pppppppuStack_220;
  undefined *puStack_218;
  undefined1 auStack_210 [4];
  uint uStack_20c;
  uint uStack_208;
  uint uStack_204;
  undefined8 *******pppppppuStack_1c0;
  undefined *puStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  undefined8 *******pppppppuStack_190;
  undefined *puStack_188;
  long *plStack_180;
  long *plStack_178;
  long *plStack_170;
  long *plStack_168;
  undefined8 *******pppppppuStack_160;
  undefined *puStack_158;
  long *plStack_150;
  long *plStack_148;
  undefined8 ******ppppppuStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  long *plStack_120;
  long *plStack_118;
  undefined8 *****pppppuStack_110;
  undefined *puStack_108;
  long *plStack_100;
  long *plStack_f8;
  undefined8 ***pppuStack_f0;
  undefined *puStack_e8;
  long **pplStack_e0;
  undefined *puStack_d8;
  long *plStack_b0;
  long *plStack_a8;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  long *plStack_88;
  int iStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  if ((bRam0000000003eb527c & 1) == 0) {
    func_0x00f78a20(0x3d32578);
    func_0x00f78a20(0x3d32580);
    func_0x00f78a20(0x3d32588);
    func_0x00f78a20(0x3d3a798);
    func_0x00f78a20(0x3d24e08);
    bRam0000000003eb527c = 1;
  }
  uStack_68 = 0;
  uStack_60 = 0;
  lStack_58 = 0;
  uStack_70 = 0;
  *param_3 = 0;
  if (param_1[6] != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_68,param_1[6],uRam0000000003d3a798);
    do {
      puVar4 = (undefined1 *)/*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_68,uRam0000000003d32580);
      lVar8 = lStack_58;
      if (((ulong)puVar4 & 1) == 0) {
        iStack_80 = 0x55;
        goto LAB_015b4f30;
      }
      if (lStack_58 == 0) {
        func_0x00f78af4();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x15b4f7c);
        (*pcVar1)();
      }
      uStack_70 = *(undefined8 *)(lStack_58 + 0x18);
      plStack_88 = param_2;
      uVar5 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,&plStack_88);
      uVar6 = /*Atlas.StringID$$Equals*/ func_0x015057f8(&uStack_70,uVar5,0);
    } while ((uVar6 & 1) == 0);
    *param_3 = lVar8;
    iStack_80 = 0x57;
LAB_015b4f30:
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_68,uRam0000000003d32578);
    if (iStack_80 != 0x57) {
      puVar4 = (undefined1 *)0x0;
    }
    return puVar4;
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    puVar7 = (undefined8 *)___cxa_begin_catch();
    param_3 = (long *)*puVar7;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_68,uRam0000000003eb5000);
    if (param_3 == (long *)0x0) {
      return (undefined1 *)0x0;
    }
  }
  else {
    __Unwind_Resume();
  }
  lVar8 = func_0x00f78ac0(param_3,0);
  puStack_98 = &Atlas_Gameplay_HitVolumeRootBehaviour__Awake;
  plStack_b0 = param_2;
  plStack_a8 = param_3;
  puStack_a0 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb527d & 1) == 0) {
    func_0x00f78a20(0x3d536e0);
    func_0x00f78a20(0x3d3a790);
    func_0x00f78a20(0x3d1d9b8);
    bRam0000000003eb527d = 1;
  }
  uVar5 = func_0x00f78aec(/*System.Collections.Generic.List<HitVolumeBehaviour>_TypeInfo*/ uRam0000000003d1d9b8);
  /*System.Collections.Generic.List<StringHelper.ThreadSafeEncoding>$$.ctor*/ func_0x024265d8(uVar5,5,uRam0000000003d3a790);
  plVar21 = plStack_a8;
  plVar9 = plStack_b0;
  *(undefined8 *)(lVar8 + 0x30) = uVar5;
  if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018394e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar4 = (undefined1 *)(*(code *)**(undefined8 **)plRam0000000003d536e0[6])(lVar8,0,uVar5);
    return puVar4;
  }
  plVar14 = plRam0000000003d536e0;
  auVar39 = func_0x00f78af4();
  plStack_a8 = (long *)&UnityEngine_Component__GetComponentsInChildren_UITweenLeaf_;
  plVar25 = plVar14;
  plVar20 = param_4;
  plStack_b0 = (long *)&puStack_a0;
  if ((auVar39._0_8_ != 0) &&
     (plStack_b0 = (long *)&puStack_a0, lVar8 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(auVar39._0_8_,0), plVar21 = plVar14,
     plVar9 = auVar39._8_8_, param_1 = param_4, lVar8 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x01839534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar4 = (undefined1 *)(*(code *)**(undefined8 **)param_4[6])(lVar8,auVar39._8_8_,plVar14);
    return puVar4;
  }
  auVar39 = func_0x00f78af4();
  puStack_d8 = &UnityEngine_Component__GetComponentsInParent_object_;
  pplStack_e0 = &plStack_b0;
  if (auVar39._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x0183955c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar4 = (undefined1 *)(**(code **)**(undefined8 **)(auVar39._8_8_ + 0x30))(auVar39._0_8_,0);
    return puVar4;
  }
  auVar39 = func_0x00f78af4();
  puStack_e8 = &UnityEngine_Component__GetComponentsInParent_object_;
  plVar14 = plVar25;
  plStack_100 = plVar9;
  plStack_f8 = plVar21;
  pppuStack_f0 = &pplStack_e0;
  if ((auVar39._0_8_ != 0) &&
     (pppuStack_f0 = &pplStack_e0, lVar8 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(auVar39._0_8_,0), plVar21 = auVar39._8_8_
     , plVar9 = plVar25, lVar8 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x018395a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar4 = (undefined1 *)(*(code *)**(undefined8 **)plVar25[6])(lVar8,auVar39._8_8_);
    return puVar4;
  }
  auVar39 = func_0x00f78af4();
  uStack_130 = 0x3eb5000;
  puStack_108 = &UnityEngine_Component__GetComponentsInParent_RectMask2D_;
  plVar25 = plVar14;
  plVar36 = plVar20;
  plStack_128 = param_1;
  plStack_120 = plVar9;
  plStack_118 = plVar21;
  pppppuStack_110 = (undefined8 *****)&pppuStack_f0;
  if ((auVar39._0_8_ != 0) &&
     (lVar8 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(auVar39._0_8_,0), plVar21 = plVar14, plVar9 = auVar39._8_8_,
     param_1 = plVar20, lVar8 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x018395f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar4 = (undefined1 *)(*(code *)**(undefined8 **)plVar20[6])(lVar8,auVar39._8_8_,plVar14);
    return puVar4;
  }
  auVar39 = func_0x00f78af4();
  puStack_138 = &UnityEngine_Component__TryGetComponent_UniversalAdditionalCameraData_;
  plVar14 = plVar25;
  plStack_150 = plVar9;
  plStack_148 = plVar21;
  ppppppuStack_140 = &pppppuStack_110;
  if ((auVar39._0_8_ != 0) &&
     (lVar8 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(auVar39._0_8_,0), plVar21 = auVar39._8_8_, plVar9 = plVar25,
     lVar8 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x01839638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar4 = (undefined1 *)(*(code *)**(undefined8 **)plVar25[6])(lVar8,auVar39._8_8_);
    return puVar4;
  }
  auVar39 = func_0x00f78af4();
  plVar34 = auVar39._0_8_;
  plStack_180 = (long *)0x3eb5000;
  puStack_158 = &UnityEngine_ComputeBuffer__SetData_ShaderInput_LightData_;
  plVar20 = *(long **)plVar36[6];
  plVar25 = plVar36;
  plStack_178 = param_1;
  plStack_170 = plVar9;
  plStack_168 = plVar21;
  pppppppuStack_160 = &ppppppuStack_140;
  uVar5 = (*(code *)*plVar20)(auVar39._8_8_,plVar14);
  plVar9 = (long *)/*System.IntPtr$$op_Explicit*/ func_0x02aeb1f8(uVar5,0);
  uVar5 = (*(code *)**(undefined8 **)(plVar36[6] + 0x10))();
  if (plVar34 != (long *)0x0) {
    plVar21 = (long *)0x0;
    plVar25 = (long *)0x0;
    pplVar2 = &plStack_150;
    plVar19 = plVar34;
    plVar20 = plVar14;
    plVar14 = plStack_168;
    plVar36 = plStack_170;
    plVar34 = plStack_178;
    plVar22 = plStack_180;
    pppppppuVar37 = pppppppuStack_160;
    puVar38 = puStack_158;
    goto UnityEngine_ComputeBuffer__InternalSetNativeData;
  }
  auVar39 = func_0x00f78af4();
  plVar19 = auVar39._0_8_;
  puStack_188 = &UnityEngine_ComputeBuffer__SetData_ShaderInput_ShadowData_;
  plVar22 = *(long **)plVar25[6];
  plVar16 = plVar25;
  plStack_1b0 = plVar36;
  plStack_1a8 = plVar9;
  plStack_1a0 = plVar34;
  plStack_198 = plVar14;
  pppppppuStack_190 = &pppppppuStack_160;
  uVar5 = (*(code *)*plVar22)(auVar39._8_8_,plVar20);
  plVar9 = (long *)/*System.IntPtr$$op_Explicit*/ func_0x02aeb1f8(uVar5,0);
  uVar5 = (*(code *)**(undefined8 **)(plVar25[6] + 0x10))();
  if (plVar19 != (long *)0x0) {
    plVar21 = (long *)0x0;
    plVar25 = (long *)0x0;
    pplVar2 = &plStack_180;
    plVar14 = plStack_198;
    plVar36 = plStack_1a0;
    plVar34 = plStack_1a8;
    plVar22 = plStack_1b0;
    pppppppuVar37 = pppppppuStack_190;
    puVar38 = puStack_188;
    goto UnityEngine_ComputeBuffer__InternalSetNativeData;
  }
  auVar39 = func_0x00f78af4();
  plVar9 = auVar39._8_8_;
  plVar36 = auVar39._0_8_;
  puStack_1b8 = &UnityEngine_ComputeBuffer__SetData_int_;
  unaff_x25 = 0x3eb6000;
  plVar14 = plVar22;
  plVar21 = plVar16;
  plVar25 = param_5;
  plVar20 = param_6;
  pppppppuStack_1c0 = &pppppppuStack_190;
  if ((bRam0000000003eb643a & 1) == 0) {
    func_0x00f78a20(0x3d23210);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb643a = 1;
  }
  if (plVar9 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar5 = func_0x00f78aec();
    uVar23 = func_0x00f78a24(0x3d78928);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar23,0);
    uVar23 = func_0x00f78a24(0x3d53788);
    func_0x00f78ac0(uVar5,uVar23);
code_r0x0183997c:
    uVar5 = *(undefined8 *)(param_6[6] + 8);
    lVar8 = func_0x00f78a24(0x3d25458);
    if (((*(ushort *)(lVar8 + 0x132) >> 10 & 1) != 0) &&
       (lVar8 = func_0x00f78a24(0x3d25458), *(int *)(lVar8 + 0xe0) == 0)) {
      func_0x00f78a24(0x3d25458);
      func_0x00f78ad0();
    }
    uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
    uVar23 = (*(code *)**(undefined8 **)(param_6[6] + 0x10))();
    uVar18 = func_0x00f78a24(0x3d6f538);
    plVar21 = (long *)0x0;
    param_5 = (long *)/*System.String$$Format*/ func_0x029bcac4(uVar18,uVar5,uVar23);
    func_0x00f78a24(0x3d1fce8);
    plVar16 = (long *)func_0x00f78aec();
    plVar14 = (long *)0x0;
    /*System.ArgumentException$$.ctor*/ func_0x02922078(plVar16,param_5);
code_r0x01839a20:
    uVar5 = func_0x00f78a24(0x3d53788);
    func_0x00f78ac0(plVar16,uVar5);
  }
  else {
    uVar6 = (*(code *)**(undefined8 **)param_6[6])();
    if ((uVar6 & 1) == 0) goto code_r0x0183997c;
    uVar27 = (uint)plVar22;
    uVar24 = (uint)param_5;
    if (((int)((uint)plVar16 | uVar27 | uVar24) < 0) ||
       (iVar3 = (*(code *)**(undefined8 **)(param_6[6] + 0x18))(plVar9),
       iVar3 < (int)(uVar24 + uVar27))) {
      plVar22 = (long *)0x3d22910;
      uStack_204 = uVar27;
      uVar5 = func_0x00f78a24(0x3d22910);
      plVar36 = (long *)func_0x00f78ae0(uVar5,&uStack_204);
      uStack_208 = (uint)plVar16;
      uVar5 = func_0x00f78a24(0x3d22910);
      uVar5 = func_0x00f78ae0(uVar5,&uStack_208);
      uStack_20c = uVar24;
      uVar23 = func_0x00f78a24(0x3d22910);
      plVar21 = (long *)func_0x00f78ae0(uVar23,&uStack_20c);
      uVar23 = func_0x00f78a24(0x3d69598);
      plVar25 = (long *)0x0;
      param_5 = (long *)/*System.String$$Format*/ func_0x029bdf30(uVar23,plVar36,uVar5);
      func_0x00f78a24(0x3d1fcf8);
      plVar16 = (long *)func_0x00f78aec();
      plVar14 = (long *)0x0;
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a524(plVar16,param_5);
      goto code_r0x01839a20;
    }
    unaff_x26 = 0x3d25000;
    unaff_x25 = 0x3d23210;
    plVar9 = (long *)/*UnityEngine.NoAllocHelpers$$ExtractArrayFromList*/ func_0x0323a838(plVar9,0);
    uVar5 = *(undefined8 *)(param_6[6] + 8);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    param_6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
    if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = /*System.Runtime.InteropServices.Marshal$$SizeOf*/ func_0x02b01148(param_6,0);
    if (plVar36 != (long *)0x0) {
      if (pcRam0000000003ebf1e8 == (code *)0x0) {
        pcRam0000000003ebf1e8 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.ComputeBuffer::InternalSetData(System.Array,System.Int32,System.Int32,System.Int32,System.Int32)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x0322853c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar4 = (undefined1 *)(*pcRam0000000003ebf1e8)(plVar36,plVar9,plVar22,plVar16,param_5,uVar5);
      return puVar4;
    }
  }
  auVar39 = func_0x00f78af4();
  plVar19 = auVar39._0_8_;
  puStack_218 = &UnityEngine_ComputeBuffer__SetData_uint_;
  uVar24 = (uint)plVar21;
  uVar27 = (uint)plVar20;
  plStack_250 = plVar9;
  plStack_248 = param_6;
  plStack_240 = plVar36;
  plStack_238 = plVar22;
  plStack_230 = plVar16;
  plStack_228 = param_5;
  pppppppuStack_220 = &pppppppuStack_1c0;
  if (((int)((uint)plVar25 | uVar24 | uVar27) < 0) || ((int)plVar14 < (int)(uVar27 + uVar24))) {
    plVar16 = (long *)0x3d22910;
    uStack_254 = uVar24;
    uVar5 = func_0x00f78a24(0x3d22910);
    plVar26 = (long *)func_0x00f78ae0(uVar5,&uStack_254);
    uStack_258 = (uint)plVar25;
    uVar5 = func_0x00f78a24(0x3d22910);
    uVar5 = func_0x00f78ae0(uVar5,&uStack_258);
    uStack_25c = uVar27;
    uVar23 = func_0x00f78a24(0x3d22910);
    plVar10 = (long *)func_0x00f78ae0(uVar23,&uStack_25c);
    uVar23 = func_0x00f78a24(0x3d695a0);
    plVar13 = (long *)0x0;
    plVar11 = (long *)/*System.String$$Format*/ func_0x029bdf30(uVar23,plVar26,uVar5);
    func_0x00f78a24(0x3d1fcf8);
    plVar12 = (long *)func_0x00f78aec();
    puVar7 = (undefined8 *)0x0;
    /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a524(plVar12,plVar11);
    uVar5 = func_0x00f78a24(0x3d53790);
    func_0x00f78ac0(plVar12,uVar5);
    plVar28 = plVar20;
    plVar29 = param_7;
  }
  else {
    puVar7 = *(undefined8 **)(param_7[6] + 8);
    plVar10 = plVar21;
    plVar13 = plVar25;
    plVar28 = plVar20;
    plVar29 = param_7;
    uVar5 = (*(code *)*puVar7)(auVar39._8_8_,plVar14);
    plVar9 = (long *)/*System.IntPtr$$op_Explicit*/ func_0x02aeb1f8(uVar5,0);
    uVar5 = (*(code *)**(undefined8 **)(param_7[6] + 0x10))();
    plVar26 = (long *)0x0;
    pplVar2 = (long **)auStack_210;
    plVar14 = plStack_228;
    plVar11 = plVar20;
    plVar36 = plStack_230;
    plVar12 = plVar25;
    plVar34 = plStack_238;
    plVar16 = plVar21;
    plVar22 = plStack_240;
    unaff_x23 = plStack_248;
    param_6 = param_7;
    unaff_x24 = plStack_250;
    pppppppuVar37 = pppppppuStack_220;
    puVar38 = puStack_218;
    if (plVar19 != (long *)0x0) goto UnityEngine_ComputeBuffer__InternalSetNativeData;
  }
  plVar20 = plVar28;
  plVar25 = plVar13;
  plVar21 = plVar10;
  auVar39 = func_0x00f78af4();
  plVar19 = auVar39._0_8_;
  puStack_268 = &UnityEngine_ComputeBuffer__SetData_uint4_;
  uVar24 = (uint)plVar21;
  uVar27 = (uint)plVar20;
  plStack_2a0 = plVar9;
  plStack_298 = param_6;
  plStack_290 = plVar26;
  plStack_288 = plVar16;
  plStack_280 = plVar12;
  plStack_278 = plVar11;
  pppppppuStack_270 = &pppppppuStack_220;
  if (((int)((uint)plVar25 | uVar24 | uVar27) < 0) || ((int)puVar7 < (int)(uVar27 + uVar24))) {
    plVar21 = (long *)0x3d22910;
    uStack_2a4 = uVar24;
    uVar5 = func_0x00f78a24(0x3d22910);
    uVar23 = func_0x00f78ae0(uVar5,&uStack_2a4);
    uStack_2a8 = (uint)plVar25;
    uVar5 = func_0x00f78a24(0x3d22910);
    uVar5 = func_0x00f78ae0(uVar5,&uStack_2a8);
    uStack_2ac = uVar27;
    uVar18 = func_0x00f78a24(0x3d22910);
    plVar16 = (long *)func_0x00f78ae0(uVar18,&uStack_2ac);
    uVar18 = func_0x00f78a24(0x3d695a0);
    plVar26 = (long *)0x0;
    plVar13 = (long *)/*System.String$$Format*/ func_0x029bdf30(uVar18,uVar23,uVar5);
    func_0x00f78a24(0x3d1fcf8);
    plVar25 = (long *)func_0x00f78aec();
    puVar30 = (undefined8 *)0x0;
    /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a524(plVar25,plVar13);
    uVar5 = func_0x00f78a24(0x3d53798);
    func_0x00f78ac0(plVar25,uVar5);
    plVar10 = plVar20;
  }
  else {
    puVar30 = *(undefined8 **)(plVar29[6] + 8);
    plVar16 = plVar21;
    plVar26 = plVar25;
    plVar10 = plVar20;
    uVar5 = (*(code *)*puVar30)(auVar39._8_8_,puVar7);
    plVar9 = (long *)/*System.IntPtr$$op_Explicit*/ func_0x02aeb1f8(uVar5,0);
    uVar5 = (*(code *)**(undefined8 **)(plVar29[6] + 0x10))();
    uVar23 = 0;
    pplVar2 = (long **)auStack_260;
    plVar14 = plStack_278;
    plVar13 = plVar20;
    plVar36 = plStack_280;
    plVar34 = plStack_288;
    plVar22 = plStack_290;
    unaff_x23 = plStack_298;
    param_6 = plVar29;
    unaff_x24 = plStack_2a0;
    pppppppuVar37 = pppppppuStack_270;
    puVar38 = puStack_268;
    if (plVar19 != (long *)0x0) {
UnityEngine_ComputeBuffer__InternalSetNativeData:
      *(undefined8 *)((long)pplVar2 + -0x50) = unaff_x26;
      *(undefined8 *)((long)pplVar2 + -0x48) = unaff_x25;
      *(long **)((long)pplVar2 + -0x40) = unaff_x24;
      *(long **)((long)pplVar2 + -0x38) = unaff_x23;
      *(long **)((long)pplVar2 + -0x30) = plVar22;
      *(long **)((long)pplVar2 + -0x28) = plVar34;
      *(long **)((long)pplVar2 + -0x20) = plVar36;
      *(long **)((long)pplVar2 + -0x18) = plVar14;
      *(undefined8 ********)((long)pplVar2 + -0x10) = pppppppuVar37;
      *(undefined **)((long)pplVar2 + -8) = puVar38;
      if (pcRam0000000003ebf1e0 == (code *)0x0) {
        pcRam0000000003ebf1e0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.ComputeBuffer::InternalSetNativeData(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x032284bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar4 = (undefined1 *)(*pcRam0000000003ebf1e0)(plVar19,plVar9,plVar21,plVar25,plVar20,uVar5);
      return puVar4;
    }
  }
  plVar14 = (long *)func_0x00f78af4();
  puStack_2b8 = &
                Unity_Properties_Internal_ConcreteTypeVisitor__Unity_Properties_Internal_IPropertyBagVisitor_Visit_KeyValuePair_object__object__
  ;
  plStack_2d0 = plVar25;
  plStack_2c8 = plVar13;
  pppppppuStack_2c0 = &pppppppuStack_270;
  if (plVar14 != (long *)0x0) {
    puVar7 = (undefined8 *)
             func_0x00f78acc(*(undefined8 *)
                              (*plVar14 + (ulong)*(ushort *)(*(long *)plVar16[6] + 0x48) * 0x10 +
                              0x140));
                    /* WARNING: Could not recover jumptable at 0x01839d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar4 = (undefined1 *)(*(code *)*puVar7)(plVar14,puVar30,puVar7);
    return puVar4;
  }
  plVar14 = (long *)func_0x00f78af4();
  puStack_2d8 = &
                Unity_Properties_Internal_ConcreteTypeVisitor__Unity_Properties_Internal_IPropertyBagVisitor_Visit_PropertyWrapper_object__
  ;
  plStack_2f0 = plVar25;
  plStack_2e8 = plVar13;
  pppppppuStack_2e0 = &pppppppuStack_2c0;
  if (plVar14 != (long *)0x0) {
    puVar7 = (undefined8 *)
             func_0x00f78acc(*(undefined8 *)
                              (*plVar14 + (ulong)*(ushort *)(*(long *)plVar16[6] + 0x48) * 0x10 +
                              0x140));
                    /* WARNING: Could not recover jumptable at 0x01839da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar4 = (undefined1 *)(*(code *)*puVar7)(plVar14,puVar30,puVar7);
    return puVar4;
  }
  plVar14 = (long *)func_0x00f78af4();
  puStack_2f8 = &
                Unity_Properties_Internal_ConcreteTypeVisitor__Unity_Properties_Internal_IPropertyBagVisitor_Visit_Bounds_
  ;
  plStack_310 = plVar25;
  plStack_308 = plVar13;
  pppppppuStack_300 = &pppppppuStack_2e0;
  if (plVar14 != (long *)0x0) {
    puVar7 = (undefined8 *)
             func_0x00f78acc(*(undefined8 *)
                              (*plVar14 + (ulong)*(ushort *)(*(long *)plVar16[6] + 0x48) * 0x10 +
                              0x140));
                    /* WARNING: Could not recover jumptable at 0x01839df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar4 = (undefined1 *)(*(code *)*puVar7)(plVar14,puVar30,puVar7);
    return puVar4;
  }
  plVar14 = (long *)func_0x00f78af4();
  puStack_318 = &
                Unity_Properties_Internal_ConcreteTypeVisitor__Unity_Properties_Internal_IPropertyBagVisitor_Visit_BoundsInt_
  ;
  plStack_330 = plVar25;
  plStack_328 = plVar13;
  pppppppuStack_320 = &pppppppuStack_300;
  if (plVar14 != (long *)0x0) {
    puVar7 = (undefined8 *)
             func_0x00f78acc(*(undefined8 *)
                              (*plVar14 + (ulong)*(ushort *)(*(long *)plVar16[6] + 0x48) * 0x10 +
                              0x140));
                    /* WARNING: Could not recover jumptable at 0x01839e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar4 = (undefined1 *)(*(code *)*puVar7)(plVar14,puVar30,puVar7);
    return puVar4;
  }
  plVar14 = (long *)func_0x00f78af4();
  puStack_338 = &
                Unity_Properties_Internal_ConcreteTypeVisitor__Unity_Properties_Internal_IPropertyBagVisitor_Visit_Keyframe_
  ;
  plStack_350 = plVar25;
  plStack_348 = plVar13;
  pppppppuStack_340 = &pppppppuStack_320;
  if (plVar14 != (long *)0x0) {
    puVar7 = (undefined8 *)
             func_0x00f78acc(*(undefined8 *)
                              (*plVar14 + (ulong)*(ushort *)(*(long *)plVar16[6] + 0x48) * 0x10 +
                              0x140));
                    /* WARNING: Could not recover jumptable at 0x01839ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar4 = (undefined1 *)(*(code *)*puVar7)(plVar14,puVar30,puVar7);
    return puVar4;
  }
  plVar14 = (long *)func_0x00f78af4();
  puStack_358 = &
                Unity_Properties_Internal_ConcreteTypeVisitor__Unity_Properties_Internal_IPropertyBagVisitor_Visit_object_
  ;
  plStack_370 = plVar25;
  plStack_368 = plVar13;
  pppppppuStack_360 = &pppppppuStack_340;
  if (plVar14 != (long *)0x0) {
    puVar7 = (undefined8 *)
             func_0x00f78acc(*(undefined8 *)
                              (*plVar14 + (ulong)*(ushort *)(*(long *)plVar16[6] + 0x48) * 0x10 +
                              0x140));
                    /* WARNING: Could not recover jumptable at 0x01839ef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar4 = (undefined1 *)(*(code *)*puVar7)(plVar14,puVar30,puVar7);
    return puVar4;
  }
  plVar14 = (long *)func_0x00f78af4();
  puStack_378 = &
                Unity_Properties_Internal_ConcreteTypeVisitor__Unity_Properties_Internal_IPropertyBagVisitor_Visit_Rect_
  ;
  plStack_390 = plVar25;
  plStack_388 = plVar13;
  pppppppuStack_380 = &pppppppuStack_360;
  if (plVar14 != (long *)0x0) {
    puVar7 = (undefined8 *)
             func_0x00f78acc(*(undefined8 *)
                              (*plVar14 + (ulong)*(ushort *)(*(long *)plVar16[6] + 0x48) * 0x10 +
                              0x140));
                    /* WARNING: Could not recover jumptable at 0x01839f48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar4 = (undefined1 *)(*(code *)*puVar7)(plVar14,puVar30,puVar7);
    return puVar4;
  }
  plVar14 = (long *)func_0x00f78af4();
  puStack_398 = &
                Unity_Properties_Internal_ConcreteTypeVisitor__Unity_Properties_Internal_IPropertyBagVisitor_Visit_RectInt_
  ;
  plStack_3b0 = plVar25;
  plStack_3a8 = plVar13;
  pppppppuStack_3a0 = &pppppppuStack_380;
  if (plVar14 != (long *)0x0) {
    puVar7 = (undefined8 *)
             func_0x00f78acc(*(undefined8 *)
                              (*plVar14 + (ulong)*(ushort *)(*(long *)plVar16[6] + 0x48) * 0x10 +
                              0x140));
                    /* WARNING: Could not recover jumptable at 0x01839f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar4 = (undefined1 *)(*(code *)*puVar7)(plVar14,puVar30,puVar7);
    return puVar4;
  }
  plVar14 = (long *)func_0x00f78af4();
  puStack_3b8 = &
                Unity_Properties_Internal_ConcreteTypeVisitor__Unity_Properties_Internal_IPropertyBagVisitor_Visit_Vector2Int_
  ;
  plStack_3d0 = plVar25;
  plStack_3c8 = plVar13;
  pppppppuStack_3c0 = &pppppppuStack_3a0;
  if (plVar14 != (long *)0x0) {
    puVar7 = (undefined8 *)
             func_0x00f78acc(*(undefined8 *)
                              (*plVar14 + (ulong)*(ushort *)(*(long *)plVar16[6] + 0x48) * 0x10 +
                              0x140));
                    /* WARNING: Could not recover jumptable at 0x01839ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar4 = (undefined1 *)(*(code *)*puVar7)(plVar14,puVar30,puVar7);
    return puVar4;
  }
  plVar14 = (long *)func_0x00f78af4();
  puStack_3d8 = &
                Unity_Properties_Internal_ConcreteTypeVisitor__Unity_Properties_Internal_IPropertyBagVisitor_Visit_Vector3Int_
  ;
  plStack_3f0 = plVar25;
  plStack_3e8 = plVar13;
  pppppppuStack_3e0 = &pppppppuStack_3c0;
  if (plVar14 != (long *)0x0) {
    puVar7 = (undefined8 *)
             func_0x00f78acc(*(undefined8 *)
                              (*plVar14 + (ulong)*(ushort *)(*(long *)plVar16[6] + 0x48) * 0x10 +
                              0x140));
                    /* WARNING: Could not recover jumptable at 0x0183a044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar4 = (undefined1 *)(*(code *)*puVar7)(plVar14,puVar30,puVar7);
    return puVar4;
  }
  auVar39 = func_0x00f78af4();
  puStack_3f8 = &Core_Contexts_ContextManager__GetContext_object_;
  pppppppuStack_430 = &pppppppuStack_400;
  uStack_420 = uVar23;
  plStack_418 = plVar21;
  plStack_410 = plVar25;
  plStack_408 = plVar13;
  pppppppuStack_400 = &pppppppuStack_3e0;
  if (auVar39._0_8_ != 0) {
    uVar5 = /*Core.Contexts.ContextManager$$GetContext*/ func_0x0163d75c(auVar39._0_8_,auVar39._8_8_,0);
    lVar8 = *(long *)puVar30[6];
    if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar8);
    }
    lVar8 = func_0x00f78adc(uVar5,lVar8);
    lVar33 = *(long *)puVar30[6];
    if ((*(ushort *)(lVar33 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar33);
    }
    if (lVar8 != 0) {
      puVar4 = (undefined1 *)func_0x00f78adc(lVar8,lVar33);
      if (puVar4 != (undefined1 *)0x0) {
        return puVar4;
      }
      func_0x00f78e5c(lVar8,lVar33);
    }
    return (undefined1 *)0x0;
  }
  auVar39 = func_0x00f78af4();
  plVar14 = auVar39._0_8_;
  puStack_428 = &System_Diagnostics_Contracts_Contract__ForAll_Type_;
  puVar7 = puVar30;
  plStack_460 = plVar9;
  plStack_458 = param_6;
  uStack_450 = uVar23;
  plStack_448 = plVar21;
  plStack_440 = plVar25;
  plStack_438 = plVar13;
  if ((bRam0000000003eb643b & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d22180);
    bRam0000000003eb643b = 1;
  }
  aiStack_470[2] = 0;
  if (plVar14 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar23 = func_0x00f78aec();
    uVar5 = 0x3d78478;
  }
  else {
    if (auVar39._8_8_ != 0) {
      lVar8 = *(long *)puVar30[6];
      if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar8);
      }
      lVar33 = *plVar14;
      uVar6 = (ulong)*(ushort *)(lVar33 + 0x12a);
      if (uVar6 != 0) {
        piVar32 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == lVar8) {
            puVar15 = (undefined8 *)(lVar33 + (long)*piVar32 * 0x10 + 0x138);
            goto code_r0x0183a1a8;
          }
          piVar32 = piVar32 + 4;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)0x0;
      puVar15 = (undefined8 *)func_0x00fac1f0(plVar14,lVar8);
code_r0x0183a1a8:
      plVar21 = (long *)(*(code *)*puVar15)(plVar14,puVar15[1]);
      if (plVar21 != (long *)0x0) {
        do {
          lVar8 = *plVar21;
          uVar6 = (ulong)*(ushort *)(lVar8 + 0x12a);
          if (uVar6 != 0) {
            piVar32 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar32 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                puVar15 = (undefined8 *)(lVar8 + (long)*piVar32 * 0x10 + 0x138);
                goto code_r0x0183a210;
              }
              piVar32 = piVar32 + 4;
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
          puVar7 = (undefined8 *)0x0;
          puVar15 = (undefined8 *)func_0x00fac1f0(plVar21);
code_r0x0183a210:
          uVar6 = (*(code *)*puVar15)(plVar21,puVar15[1]);
          if ((uVar6 & 1) == 0) {
            aiStack_470[0] = 0x4d;
            goto code_r0x0183a2d0;
          }
          lVar8 = *(long *)(puVar30[6] + 8);
          if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar8);
          }
          lVar33 = *plVar21;
          uVar6 = (ulong)*(ushort *)(lVar33 + 0x12a);
          if (uVar6 != 0) {
            piVar32 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
            do {
              if (*(long *)(piVar32 + -2) == lVar8) {
                puVar7 = (undefined8 *)(lVar33 + (long)*piVar32 * 0x10 + 0x138);
                goto code_r0x0183a284;
              }
              piVar32 = piVar32 + 4;
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar21,lVar8,0);
code_r0x0183a284:
          uVar5 = (*(code *)*puVar7)(plVar21,puVar7[1]);
          puVar7 = *(undefined8 **)(puVar30[6] + 0x10);
          uVar6 = (*(code *)*puVar7)(auVar39._8_8_,uVar5);
        } while ((uVar6 & 1) != 0);
        aiStack_470[0] = 0x4f;
code_r0x0183a2d0:
        plVar14 = (long *)0x0;
        lVar33 = 0;
        lVar8 = 0;
        aiStack_470[2] = 1;
        do {
          if (plVar21 != (long *)0x0) {
            lVar31 = *plVar21;
            uVar6 = (ulong)*(ushort *)(lVar31 + 0x12a);
            if (uVar6 != 0) {
              piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
              do {
                if (*(long *)(piVar32 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                  puVar30 = (undefined8 *)(lVar31 + (long)*piVar32 * 0x10 + 0x138);
                  goto code_r0x0183a334;
                }
                piVar32 = piVar32 + 4;
                uVar6 = uVar6 - 1;
              } while (uVar6 != 0);
            }
            puVar7 = (undefined8 *)0x0;
            puVar30 = (undefined8 *)func_0x00fac1f0(plVar21);
code_r0x0183a334:
            (*(code *)*puVar30)(plVar21,puVar30[1]);
          }
          if (lVar8 == 0) {
            if ((int)plVar14 == 0) {
              puVar4 = (undefined1 *)(ulong)(aiStack_470[lVar33] != 0x4f);
            }
            else {
              puVar4 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
            }
            return puVar4;
          }
          func_0x00f78ac0(lVar8,0);
          if (extraout_w1_00 != 1) goto code_r0x0183a424;
          plVar14 = (long *)___cxa_begin_catch();
          lVar8 = *plVar14;
          ___cxa_end_catch();
          lVar33 = -1;
          plVar14 = (long *)((long)&MACH_HEADER.magic + 1);
        } while( true );
      }
      goto code_r0x0183a3e0;
    }
    func_0x00f78a24(0x3d1fcf0);
    uVar23 = func_0x00f78aec();
    uVar5 = 0x3d7b050;
  }
  uVar5 = func_0x00f78a24(uVar5);
  /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar23,uVar5,0);
  uVar5 = func_0x00f78a24(0x3d539a0);
  func_0x00f78ac0(uVar23,uVar5);
code_r0x0183a3e0:
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x183a3e8);
  (*pcVar1)();
code_r0x0183a424:
  auVar39 = __Unwind_Resume();
  plVar20 = auVar39._0_8_;
  uStack_4a8 = 0x3d22180;
  puStack_478 = &
                System_Dynamic_Utils_ContractUtils__RequiresArrayRange_KeyValuePair_string__object__
  ;
  plVar25 = plVar16;
  plStack_4b0 = plVar9;
  plStack_4a0 = plVar14;
  lStack_498 = lVar33;
  lStack_490 = lVar8;
  plStack_488 = plVar21;
  pppppppuStack_480 = &pppppppuStack_430;
  if ((int)puVar7 < 0) {
code_r0x0183a520:
    auVar39._8_8_ = lVar33;
    auVar39._0_8_ = plVar14;
    plVar21 = plVar26;
    func_0x00f78a24(0x3d1fcf8);
    plVar16 = (long *)func_0x00f78aec();
    puVar7 = (undefined8 *)0x0;
    /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a524(plVar16,plVar26);
    uVar5 = func_0x00f78a24(0x3d539b0);
    func_0x00f78ac0(plVar16,uVar5);
    plStack_4e8 = plVar26;
  }
  else {
    if (auVar39._8_4_ < 0) {
code_r0x0183a4e8:
      func_0x00f78a24(0x3d1fcf8);
      lVar8 = func_0x00f78aec();
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a524(lVar8,plVar16,0);
      uVar5 = func_0x00f78a24(0x3d539b0);
      func_0x00f78ac0(lVar8,uVar5);
      lVar33 = auVar39._8_8_;
      goto code_r0x0183a520;
    }
    plVar21 = plVar26;
    plStack_4e8 = (long *)0x3d22180;
    if (plVar20 != (long *)0x0) {
      lVar8 = *(long *)plVar10[6];
      if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar8);
      }
      lVar33 = *plVar20;
      uVar6 = (ulong)*(ushort *)(lVar33 + 0x12a);
      if (uVar6 != 0) {
        piVar32 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == lVar8) {
            puVar30 = (undefined8 *)(lVar33 + (long)*piVar32 * 0x10 + 0x138);
            goto code_r0x0183a4bc;
          }
          piVar32 = piVar32 + 4;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      puVar30 = (undefined8 *)func_0x00fac1f0(plVar20,lVar8,0);
code_r0x0183a4bc:
      puVar4 = (undefined1 *)(*(code *)*puVar30)(plVar20,puVar30[1]);
      plVar14 = plVar20;
      if ((int)puVar7 <= (int)puVar4 - auVar39._8_4_) {
        return puVar4;
      }
      goto code_r0x0183a4e8;
    }
  }
  auVar40 = func_0x00f78af4();
  plVar20 = auVar40._0_8_;
  puStack_4b8 = &System_Dynamic_Utils_ContractUtils__RequiresArrayRange_string_;
  plVar14 = plVar25;
  plStack_4f0 = plVar9;
  lStack_4d0 = lVar8;
  plStack_4c8 = plVar16;
  pppppppuStack_4c0 = &pppppppuStack_480;
  auStack_4e0 = auVar39;
  if (-1 < (int)puVar7) {
    plVar36 = auVar39._0_8_;
    if (-1 < auVar40._8_4_) {
      plVar36 = plStack_4e8;
      auStack_520 = auVar40;
      if (plVar20 == (long *)0x0) goto code_r0x0183a694;
      lVar8 = *(long *)plVar10[6];
      if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar8);
      }
      lVar33 = *plVar20;
      uVar6 = (ulong)*(ushort *)(lVar33 + 0x12a);
      if (uVar6 != 0) {
        piVar32 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == lVar8) {
            puVar30 = (undefined8 *)(lVar33 + (long)*piVar32 * 0x10 + 0x138);
            goto code_r0x0183a5f4;
          }
          piVar32 = piVar32 + 4;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      puVar30 = (undefined8 *)func_0x00fac1f0(plVar20,lVar8,0);
code_r0x0183a5f4:
      puVar4 = (undefined1 *)(*(code *)*puVar30)(plVar20,puVar30[1]);
      plVar36 = plVar20;
      if ((int)puVar7 <= (int)puVar4 - auVar40._8_4_) {
        return puVar4;
      }
    }
    auVar39._8_8_ = auVar40._8_8_;
    auVar39._0_8_ = plVar36;
    func_0x00f78a24(0x3d1fcf8);
    lVar8 = func_0x00f78aec();
    /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a524(lVar8,plVar25,0);
    uVar5 = func_0x00f78a24(0x3d539c0);
    func_0x00f78ac0(lVar8,uVar5);
  }
  func_0x00f78a24(0x3d1fcf8);
  plVar25 = (long *)func_0x00f78aec();
  puVar7 = (undefined8 *)0x0;
  /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a524(plVar25,plVar21);
  uVar5 = func_0x00f78a24(0x3d539c0);
  func_0x00f78ac0(plVar25,uVar5);
  plVar36 = plVar21;
  auStack_520 = auVar39;
code_r0x0183a694:
  puVar4 = auStack_520._0_8_;
  auVar39 = func_0x00f78af4();
  uVar5 = auVar39._8_8_;
  plVar21 = auVar39._0_8_;
  puStack_4f8 = &System_Dynamic_Utils_ContractUtils__RequiresNotNullItems_object_;
  uVar23 = 0;
  plStack_530 = plVar9;
  plStack_528 = plVar36;
  lStack_510 = lVar8;
  plStack_508 = plVar25;
  pppppppuStack_500 = &pppppppuStack_4c0;
  /*System.Dynamic.Utils.ContractUtils$$RequiresNotNull*/ func_0x02b9dd0c(plVar21,uVar5,0);
  if (plVar21 == (long *)0x0) {
code_r0x0183a828:
    iVar3 = func_0x00f78af4();
    puStack_538 = &
                  UnityEngine_Rendering_CoreUnsafeUtils__CombineHashes_Hash128__CoreUnsafeUtils_DefaultKeyGetter_Hash128__
    ;
    auStack_598._0_8_ = 0;
    auStack_598._8_8_ = 0;
    auStack_5a8._0_8_ = 0;
    auStack_5a8._8_8_ = 0;
    uStack_580 = unaff_x26;
    uStack_578 = unaff_x25;
    plStack_570 = plVar9;
    plStack_568 = plVar36;
    puStack_560 = puVar4;
    plStack_558 = plVar21;
    puStack_550 = puVar7;
    uStack_548 = uVar5;
    pppppppuStack_540 = &pppppppuStack_500;
    puVar4 = (undefined1 *)(*(code *)**(undefined8 **)plVar14[6])();
    uStack_588 = SUB81(puVar4,0);
    if (0 < iVar3) {
      iVar35 = 0;
      do {
        auVar39 = (*(code *)**(undefined8 **)(plVar14[6] + 8))(extraout_x1,iVar35);
        lVar8 = plVar14[6];
        lVar33 = *(long *)(lVar8 + 0x10);
        auStack_598 = auVar39;
        if ((*(ushort *)(lVar33 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar33);
          lVar8 = plVar14[6];
        }
        lVar8 = *(long *)(lVar8 + 0x18);
        alStack_5b8[0] = lVar33;
        if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar8);
        }
        uVar6 = (ulong)*(ushort *)(alStack_5b8[0] + 0x12a);
        if (uVar6 != 0) {
          piVar32 = (int *)(*(long *)(alStack_5b8[0] + 0xb0) + 8);
          do {
            if (*(long *)(piVar32 + -2) == lVar8) {
              puVar7 = (undefined8 *)(alStack_5b8[0] + (long)*piVar32 * 0x10 + 0x138);
              goto code_r0x0183a924;
            }
            piVar32 = piVar32 + 4;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(alStack_5b8,lVar8,0);
code_r0x0183a924:
        auVar39 = (*(code *)*puVar7)(auStack_598,auStack_598,puVar7[1]);
        auStack_5a8 = auVar39;
        puVar4 = (undefined1 *)/*UnityEngine.HashUtilities$$AppendHash*/ func_0x032310e0(auStack_5a8,uVar23,0);
        iVar35 = iVar35 + 1;
      } while (iVar35 != iVar3);
    }
    return puVar4;
  }
  lVar8 = *(long *)puVar7[6];
  if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar8);
  }
  lVar33 = *plVar21;
  uVar6 = (ulong)*(ushort *)(lVar33 + 0x12a);
  if (uVar6 != 0) {
    piVar32 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
    do {
      if (*(long *)(piVar32 + -2) == lVar8) {
        puVar30 = (undefined8 *)(lVar33 + (long)*piVar32 * 0x10 + 0x138);
        goto code_r0x0183a728;
      }
      piVar32 = piVar32 + 4;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  puVar30 = (undefined8 *)func_0x00fac1f0(plVar21,lVar8,0);
code_r0x0183a728:
  puVar4 = (undefined1 *)(*(code *)*puVar30)(plVar21,puVar30[1]);
  puVar17 = puVar4;
  if (0 < (int)(uint)puVar4) {
    plVar36 = (long *)0x0;
    do {
      plVar9 = *(long **)(puVar7[6] + 8);
      if ((*(ushort *)((long)plVar9 + 0x132) & 1) == 0) {
        func_0x00fac028(plVar9);
      }
      lVar8 = *plVar21;
      uVar6 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar6 != 0) {
        piVar32 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long **)(piVar32 + -2) == plVar9) {
            puVar30 = (undefined8 *)(lVar8 + (long)*piVar32 * 0x10 + 0x138);
            goto code_r0x0183a7a8;
          }
          piVar32 = piVar32 + 4;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      puVar30 = (undefined8 *)func_0x00fac1f0(plVar21,plVar9,0);
code_r0x0183a7a8:
      puVar17 = (undefined1 *)(*(code *)*puVar30)(plVar21,plVar36,puVar30[1]);
      if (puVar17 == (undefined1 *)0x0) {
        uVar5 = /*System.Dynamic.Utils.ContractUtils$$GetParamName*/ func_0x02ba3454(uVar5,plVar36,0);
        func_0x00f78a24(0x3d1fcf0);
        puVar7 = (undefined8 *)func_0x00f78aec();
        uVar23 = 0;
        /*System.ArgumentNullException$$.ctor*/ func_0x02920400(puVar7,uVar5,0);
        uVar18 = func_0x00f78a24(0x3d539d8);
        func_0x00f78ac0(puVar7,uVar18);
        goto code_r0x0183a828;
      }
      uVar24 = (int)plVar36 + 1;
      plVar36 = (long *)(ulong)uVar24;
    } while (uVar24 != (uint)puVar4);
  }
  return puVar17;
}



// ============================================================
// RVA: 0x15b4fc8 | Atlas.Gameplay.HitVolumeRootBehaviour.Awake
// ============================================================

/* WARNING: Type propagation algorithm not settling */

undefined1 *
Atlas_Gameplay_HitVolumeRootBehaviour__Awake
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
          undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  code *pcVar1;
  undefined8 **ppuVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined1 *puVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  int extraout_w1;
  undefined8 extraout_x1;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  uint uVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  uint uVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  long lVar33;
  int *piVar34;
  undefined8 *unaff_x19;
  long lVar35;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  int iVar36;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 *******pppppppuVar37;
  undefined *puVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  long alStack_528 [2];
  undefined1 auStack_518 [16];
  undefined1 auStack_508 [16];
  undefined1 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 *puStack_4e0;
  undefined8 *puStack_4d8;
  undefined1 *puStack_4d0;
  long *plStack_4c8;
  undefined8 *puStack_4c0;
  undefined8 uStack_4b8;
  undefined8 *******pppppppuStack_4b0;
  undefined *puStack_4a8;
  undefined8 *puStack_4a0;
  undefined8 *puStack_498;
  undefined1 auStack_490 [16];
  long lStack_480;
  undefined8 *puStack_478;
  undefined8 *******pppppppuStack_470;
  undefined *puStack_468;
  undefined8 *puStack_460;
  undefined8 *puStack_458;
  undefined1 auStack_450 [16];
  long lStack_440;
  undefined8 *puStack_438;
  undefined8 *******pppppppuStack_430;
  undefined *puStack_428;
  undefined8 *puStack_420;
  undefined8 uStack_418;
  long *plStack_410;
  long lStack_408;
  long lStack_400;
  long *plStack_3f8;
  undefined8 *******pppppppuStack_3f0;
  undefined *puStack_3e8;
  int aiStack_3e0 [4];
  undefined8 *puStack_3d0;
  undefined8 *puStack_3c8;
  undefined8 uStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 *puStack_3b0;
  undefined8 *puStack_3a8;
  undefined8 *******pppppppuStack_3a0;
  undefined *puStack_398;
  undefined8 uStack_390;
  undefined8 *puStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined8 *******pppppppuStack_370;
  undefined *puStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 *******pppppppuStack_350;
  undefined *puStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined8 *******pppppppuStack_330;
  undefined *puStack_328;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  undefined8 *******pppppppuStack_310;
  undefined *puStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined8 *******pppppppuStack_2f0;
  undefined *puStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *******pppppppuStack_2d0;
  undefined *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 *******pppppppuStack_2b0;
  undefined *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 *******pppppppuStack_290;
  undefined *puStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 *******pppppppuStack_270;
  undefined *puStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *******pppppppuStack_250;
  undefined *puStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined8 *******pppppppuStack_230;
  undefined *puStack_228;
  uint uStack_21c;
  uint uStack_218;
  uint uStack_214;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 *******pppppppuStack_1e0;
  undefined *puStack_1d8;
  undefined1 auStack_1d0 [4];
  uint uStack_1cc;
  uint uStack_1c8;
  uint uStack_1c4;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 *******pppppppuStack_190;
  undefined *puStack_188;
  undefined1 auStack_180 [4];
  uint uStack_17c;
  uint uStack_178;
  uint uStack_174;
  undefined8 *******pppppppuStack_130;
  undefined *puStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined8 *******pppppppuStack_100;
  undefined *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *******pppppppuStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 ******ppppppuStack_b0;
  undefined *puStack_a8;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *****pppppuStack_80;
  undefined *puStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 ***pppuStack_60;
  undefined *puStack_58;
  undefined8 *puStack_50;
  undefined *puStack_48;
  
  if ((bRam0000000003eb527d & 1) == 0) {
    func_0x00f78a20(0x3d536e0);
    func_0x00f78a20(0x3d3a790);
    func_0x00f78a20(0x3d1d9b8);
    bRam0000000003eb527d = 1;
  }
  uVar4 = func_0x00f78aec(/*System.Collections.Generic.List<HitVolumeBehaviour>_TypeInfo*/ uRam0000000003d1d9b8);
  /*System.Collections.Generic.List<StringHelper.ThreadSafeEncoding>$$.ctor*/ func_0x024265d8(uVar4,5,uRam0000000003d3a790);
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018394e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar5 = (undefined1 *)(*(code *)**(undefined8 **)puRam0000000003d536e0[6])(param_1,0,uVar4);
    return puVar5;
  }
  puVar14 = puRam0000000003d536e0;
  auVar39 = func_0x00f78af4();
  puVar23 = puVar14;
  puVar22 = param_4;
  if ((auVar39._0_8_ != 0) &&
     (lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(auVar39._0_8_,0), unaff_x19 = puVar14, unaff_x20 = auVar39._8_8_,
     unaff_x21 = param_4, lVar6 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x01839534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar5 = (undefined1 *)(*(code *)**(undefined8 **)param_4[6])(lVar6,auVar39._8_8_,puVar14);
    return puVar5;
  }
  auVar39 = func_0x00f78af4();
  puStack_48 = &UnityEngine_Component__GetComponentsInParent_object_;
  puStack_50 = (undefined8 *)&stack0xffffffffffffffe0;
  if (auVar39._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x0183955c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar5 = (undefined1 *)(**(code **)**(undefined8 **)(auVar39._8_8_ + 0x30))(auVar39._0_8_,0);
    return puVar5;
  }
  auVar39 = func_0x00f78af4();
  puStack_58 = &UnityEngine_Component__GetComponentsInParent_object_;
  puVar14 = puVar23;
  puStack_70 = unaff_x20;
  puStack_68 = unaff_x19;
  pppuStack_60 = (undefined8 ***)&puStack_50;
  if ((auVar39._0_8_ != 0) &&
     (pppuStack_60 = (undefined8 ***)&puStack_50, lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(auVar39._0_8_,0),
     unaff_x19 = auVar39._8_8_, unaff_x20 = puVar23, lVar6 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x018395a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar5 = (undefined1 *)(*(code *)**(undefined8 **)puVar23[6])(lVar6,auVar39._8_8_);
    return puVar5;
  }
  auVar39 = func_0x00f78af4();
  puStack_78 = &UnityEngine_Component__GetComponentsInParent_RectMask2D_;
  puVar23 = puVar14;
  puVar27 = puVar22;
  puStack_98 = unaff_x21;
  puStack_90 = unaff_x20;
  puStack_88 = unaff_x19;
  pppppuStack_80 = (undefined8 *****)&pppuStack_60;
  if ((auVar39._0_8_ != 0) &&
     (lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(auVar39._0_8_,0), unaff_x19 = puVar14, unaff_x20 = auVar39._8_8_,
     unaff_x21 = puVar22, lVar6 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x018395f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar5 = (undefined1 *)(*(code *)**(undefined8 **)puVar22[6])(lVar6,auVar39._8_8_,puVar14);
    return puVar5;
  }
  auVar39 = func_0x00f78af4();
  puStack_a8 = &UnityEngine_Component__TryGetComponent_UniversalAdditionalCameraData_;
  puVar14 = puVar23;
  puStack_c0 = unaff_x20;
  puStack_b8 = unaff_x19;
  ppppppuStack_b0 = &pppppuStack_80;
  if ((auVar39._0_8_ != 0) &&
     (lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(auVar39._0_8_,0), unaff_x19 = auVar39._8_8_, unaff_x20 = puVar23,
     lVar6 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x01839638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar5 = (undefined1 *)(*(code *)**(undefined8 **)puVar23[6])(lVar6,auVar39._8_8_);
    return puVar5;
  }
  auVar39 = func_0x00f78af4();
  puVar18 = auVar39._0_8_;
  puStack_c8 = &UnityEngine_ComputeBuffer__SetData_ShaderInput_LightData_;
  puVar22 = *(undefined8 **)puVar27[6];
  puVar23 = puVar27;
  puStack_f0 = unaff_x22;
  puStack_e8 = unaff_x21;
  puStack_e0 = unaff_x20;
  puStack_d8 = unaff_x19;
  pppppppuStack_d0 = &ppppppuStack_b0;
  uVar4 = (*(code *)*puVar22)(auVar39._8_8_,puVar14);
  puVar7 = (undefined8 *)/*System.IntPtr$$op_Explicit*/ func_0x02aeb1f8(uVar4,0);
  uVar4 = (*(code *)**(undefined8 **)(puVar27[6] + 0x10))();
  if (puVar18 != (undefined8 *)0x0) {
    puVar23 = (undefined8 *)0x0;
    puVar27 = (undefined8 *)0x0;
    ppuVar2 = &puStack_c0;
    puVar21 = puVar18;
    puVar22 = puVar14;
    puVar14 = puStack_d8;
    puVar18 = puStack_e0;
    puVar24 = puStack_e8;
    pppppppuVar37 = pppppppuStack_d0;
    puVar38 = puStack_c8;
    goto UnityEngine_ComputeBuffer__InternalSetNativeData;
  }
  auVar39 = func_0x00f78af4();
  puVar21 = auVar39._0_8_;
  puStack_f8 = &UnityEngine_ComputeBuffer__SetData_ShaderInput_ShadowData_;
  puVar24 = *(undefined8 **)puVar23[6];
  puVar17 = puVar23;
  puStack_120 = puVar27;
  puStack_118 = puVar7;
  puStack_110 = puVar18;
  puStack_108 = puVar14;
  pppppppuStack_100 = &pppppppuStack_d0;
  uVar4 = (*(code *)*puVar24)(auVar39._8_8_,puVar22);
  puVar7 = (undefined8 *)/*System.IntPtr$$op_Explicit*/ func_0x02aeb1f8(uVar4,0);
  uVar4 = (*(code *)**(undefined8 **)(puVar23[6] + 0x10))();
  if (puVar21 != (undefined8 *)0x0) {
    puVar23 = (undefined8 *)0x0;
    puVar27 = (undefined8 *)0x0;
    ppuVar2 = &puStack_f0;
    puVar14 = puStack_108;
    puVar18 = puStack_110;
    puVar24 = puStack_118;
    puStack_f0 = puStack_120;
    pppppppuVar37 = pppppppuStack_100;
    puVar38 = puStack_f8;
    goto UnityEngine_ComputeBuffer__InternalSetNativeData;
  }
  auVar39 = func_0x00f78af4();
  puVar7 = auVar39._8_8_;
  puVar18 = auVar39._0_8_;
  puStack_128 = &UnityEngine_ComputeBuffer__SetData_int_;
  unaff_x25 = 0x3eb6000;
  puVar14 = puVar24;
  puVar23 = puVar17;
  puVar27 = param_5;
  puVar22 = param_6;
  pppppppuStack_130 = &pppppppuStack_100;
  if ((bRam0000000003eb643a & 1) == 0) {
    func_0x00f78a20(0x3d23210);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb643a = 1;
  }
  if (puVar7 == (undefined8 *)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar4 = func_0x00f78aec();
    uVar25 = func_0x00f78a24(0x3d78928);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar4,uVar25,0);
    uVar25 = func_0x00f78a24(0x3d53788);
    func_0x00f78ac0(uVar4,uVar25);
code_r0x0183997c:
    uVar4 = *(undefined8 *)(param_6[6] + 8);
    lVar6 = func_0x00f78a24(0x3d25458);
    if (((*(ushort *)(lVar6 + 0x132) >> 10 & 1) != 0) &&
       (lVar6 = func_0x00f78a24(0x3d25458), *(int *)(lVar6 + 0xe0) == 0)) {
      func_0x00f78a24(0x3d25458);
      func_0x00f78ad0();
    }
    uVar4 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar4,0);
    uVar25 = (*(code *)**(undefined8 **)(param_6[6] + 0x10))();
    uVar20 = func_0x00f78a24(0x3d6f538);
    puVar23 = (undefined8 *)0x0;
    param_5 = (undefined8 *)/*System.String$$Format*/ func_0x029bcac4(uVar20,uVar4,uVar25);
    func_0x00f78a24(0x3d1fce8);
    puVar17 = (undefined8 *)func_0x00f78aec();
    puVar14 = (undefined8 *)0x0;
    /*System.ArgumentException$$.ctor*/ func_0x02922078(puVar17,param_5);
code_r0x01839a20:
    uVar4 = func_0x00f78a24(0x3d53788);
    func_0x00f78ac0(puVar17,uVar4);
  }
  else {
    uVar8 = (*(code *)**(undefined8 **)param_6[6])();
    if ((uVar8 & 1) == 0) goto code_r0x0183997c;
    uVar29 = (uint)puVar24;
    uVar26 = (uint)param_5;
    if (((int)((uint)puVar17 | uVar29 | uVar26) < 0) ||
       (iVar3 = (*(code *)**(undefined8 **)(param_6[6] + 0x18))(puVar7),
       iVar3 < (int)(uVar26 + uVar29))) {
      puVar24 = (undefined8 *)0x3d22910;
      uStack_174 = uVar29;
      uVar4 = func_0x00f78a24(0x3d22910);
      puVar18 = (undefined8 *)func_0x00f78ae0(uVar4,&uStack_174);
      uStack_178 = (uint)puVar17;
      uVar4 = func_0x00f78a24(0x3d22910);
      uVar4 = func_0x00f78ae0(uVar4,&uStack_178);
      uStack_17c = uVar26;
      uVar25 = func_0x00f78a24(0x3d22910);
      puVar23 = (undefined8 *)func_0x00f78ae0(uVar25,&uStack_17c);
      uVar25 = func_0x00f78a24(0x3d69598);
      puVar27 = (undefined8 *)0x0;
      param_5 = (undefined8 *)/*System.String$$Format*/ func_0x029bdf30(uVar25,puVar18,uVar4);
      func_0x00f78a24(0x3d1fcf8);
      puVar17 = (undefined8 *)func_0x00f78aec();
      puVar14 = (undefined8 *)0x0;
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a524(puVar17,param_5);
      goto code_r0x01839a20;
    }
    unaff_x26 = 0x3d25000;
    unaff_x25 = 0x3d23210;
    puVar7 = (undefined8 *)/*UnityEngine.NoAllocHelpers$$ExtractArrayFromList*/ func_0x0323a838(puVar7,0);
    uVar4 = *(undefined8 *)(param_6[6] + 8);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    param_6 = (undefined8 *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar4,0);
    if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = /*System.Runtime.InteropServices.Marshal$$SizeOf*/ func_0x02b01148(param_6,0);
    if (puVar18 != (undefined8 *)0x0) {
      if (pcRam0000000003ebf1e8 == (code *)0x0) {
        pcRam0000000003ebf1e8 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.ComputeBuffer::InternalSetData(System.Array,System.Int32,System.Int32,System.Int32,System.Int32)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x0322853c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar5 = (undefined1 *)(*pcRam0000000003ebf1e8)(puVar18,puVar7,puVar24,puVar17,param_5,uVar4);
      return puVar5;
    }
  }
  auVar39 = func_0x00f78af4();
  puVar21 = auVar39._0_8_;
  puStack_188 = &UnityEngine_ComputeBuffer__SetData_uint_;
  uVar26 = (uint)puVar23;
  uVar29 = (uint)puVar22;
  puStack_1c0 = puVar7;
  puStack_1b8 = param_6;
  puStack_1b0 = puVar18;
  puStack_1a8 = puVar24;
  puStack_1a0 = puVar17;
  puStack_198 = param_5;
  pppppppuStack_190 = &pppppppuStack_130;
  if (((int)((uint)puVar27 | uVar26 | uVar29) < 0) || ((int)puVar14 < (int)(uVar29 + uVar26))) {
    puVar17 = (undefined8 *)0x3d22910;
    uStack_1c4 = uVar26;
    uVar4 = func_0x00f78a24(0x3d22910);
    puVar28 = (undefined8 *)func_0x00f78ae0(uVar4,&uStack_1c4);
    uStack_1c8 = (uint)puVar27;
    uVar4 = func_0x00f78a24(0x3d22910);
    uVar4 = func_0x00f78ae0(uVar4,&uStack_1c8);
    uStack_1cc = uVar29;
    uVar25 = func_0x00f78a24(0x3d22910);
    puVar9 = (undefined8 *)func_0x00f78ae0(uVar25,&uStack_1cc);
    uVar25 = func_0x00f78a24(0x3d695a0);
    puVar12 = (undefined8 *)0x0;
    puVar10 = (undefined8 *)/*System.String$$Format*/ func_0x029bdf30(uVar25,puVar28,uVar4);
    func_0x00f78a24(0x3d1fcf8);
    puVar11 = (undefined8 *)func_0x00f78aec();
    puVar31 = (undefined8 *)0x0;
    /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a524(puVar11,puVar10);
    uVar4 = func_0x00f78a24(0x3d53790);
    func_0x00f78ac0(puVar11,uVar4);
    puVar32 = puVar22;
    puVar30 = param_7;
  }
  else {
    puVar31 = *(undefined8 **)(param_7[6] + 8);
    puVar9 = puVar23;
    puVar12 = puVar27;
    puVar32 = puVar22;
    puVar30 = param_7;
    uVar4 = (*(code *)*puVar31)(auVar39._8_8_,puVar14);
    puVar7 = (undefined8 *)/*System.IntPtr$$op_Explicit*/ func_0x02aeb1f8(uVar4,0);
    uVar4 = (*(code *)**(undefined8 **)(param_7[6] + 0x10))();
    puVar28 = (undefined8 *)0x0;
    ppuVar2 = (undefined8 **)auStack_180;
    puVar14 = puStack_198;
    puVar10 = puVar22;
    puVar18 = puStack_1a0;
    puVar11 = puVar27;
    puVar24 = puStack_1a8;
    puVar17 = puVar23;
    puStack_f0 = puStack_1b0;
    unaff_x23 = puStack_1b8;
    param_6 = param_7;
    unaff_x24 = puStack_1c0;
    pppppppuVar37 = pppppppuStack_190;
    puVar38 = puStack_188;
    if (puVar21 != (undefined8 *)0x0) goto UnityEngine_ComputeBuffer__InternalSetNativeData;
  }
  puVar22 = puVar32;
  puVar27 = puVar12;
  puVar23 = puVar9;
  auVar39 = func_0x00f78af4();
  puVar21 = auVar39._0_8_;
  puStack_1d8 = &UnityEngine_ComputeBuffer__SetData_uint4_;
  uVar26 = (uint)puVar23;
  uVar29 = (uint)puVar22;
  puStack_210 = puVar7;
  puStack_208 = param_6;
  puStack_200 = puVar28;
  puStack_1f8 = puVar17;
  puStack_1f0 = puVar11;
  puStack_1e8 = puVar10;
  pppppppuStack_1e0 = &pppppppuStack_190;
  if (((int)((uint)puVar27 | uVar26 | uVar29) < 0) || ((int)puVar31 < (int)(uVar29 + uVar26))) {
    puVar23 = (undefined8 *)0x3d22910;
    uStack_214 = uVar26;
    uVar4 = func_0x00f78a24(0x3d22910);
    uVar25 = func_0x00f78ae0(uVar4,&uStack_214);
    uStack_218 = (uint)puVar27;
    uVar4 = func_0x00f78a24(0x3d22910);
    uVar4 = func_0x00f78ae0(uVar4,&uStack_218);
    uStack_21c = uVar29;
    uVar20 = func_0x00f78a24(0x3d22910);
    puVar17 = (undefined8 *)func_0x00f78ae0(uVar20,&uStack_21c);
    uVar20 = func_0x00f78a24(0x3d695a0);
    puVar28 = (undefined8 *)0x0;
    puVar12 = (undefined8 *)/*System.String$$Format*/ func_0x029bdf30(uVar20,uVar25,uVar4);
    func_0x00f78a24(0x3d1fcf8);
    puVar27 = (undefined8 *)func_0x00f78aec();
    puVar32 = (undefined8 *)0x0;
    /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a524(puVar27,puVar12);
    uVar4 = func_0x00f78a24(0x3d53798);
    func_0x00f78ac0(puVar27,uVar4);
    puVar9 = puVar22;
  }
  else {
    puVar32 = *(undefined8 **)(puVar30[6] + 8);
    puVar17 = puVar23;
    puVar28 = puVar27;
    puVar9 = puVar22;
    uVar4 = (*(code *)*puVar32)(auVar39._8_8_,puVar31);
    puVar7 = (undefined8 *)/*System.IntPtr$$op_Explicit*/ func_0x02aeb1f8(uVar4,0);
    uVar4 = (*(code *)**(undefined8 **)(puVar30[6] + 0x10))();
    uVar25 = 0;
    ppuVar2 = (undefined8 **)auStack_1d0;
    puVar14 = puStack_1e8;
    puVar12 = puVar22;
    puVar18 = puStack_1f0;
    puVar24 = puStack_1f8;
    puStack_f0 = puStack_200;
    unaff_x23 = puStack_208;
    param_6 = puVar30;
    unaff_x24 = puStack_210;
    pppppppuVar37 = pppppppuStack_1e0;
    puVar38 = puStack_1d8;
    if (puVar21 != (undefined8 *)0x0) {
UnityEngine_ComputeBuffer__InternalSetNativeData:
      *(undefined8 *)((long)ppuVar2 + -0x50) = unaff_x26;
      *(undefined8 *)((long)ppuVar2 + -0x48) = unaff_x25;
      *(undefined8 **)((long)ppuVar2 + -0x40) = unaff_x24;
      *(undefined8 **)((long)ppuVar2 + -0x38) = unaff_x23;
      *(undefined8 **)((long)ppuVar2 + -0x30) = puStack_f0;
      *(undefined8 **)((long)ppuVar2 + -0x28) = puVar24;
      *(undefined8 **)((long)ppuVar2 + -0x20) = puVar18;
      *(undefined8 **)((long)ppuVar2 + -0x18) = puVar14;
      *(undefined8 ********)((long)ppuVar2 + -0x10) = pppppppuVar37;
      *(undefined **)((long)ppuVar2 + -8) = puVar38;
      if (pcRam0000000003ebf1e0 == (code *)0x0) {
        pcRam0000000003ebf1e0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.ComputeBuffer::InternalSetNativeData(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x032284bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar5 = (undefined1 *)(*pcRam0000000003ebf1e0)(puVar21,puVar7,puVar23,puVar27,puVar22,uVar4);
      return puVar5;
    }
  }
  plVar13 = (long *)func_0x00f78af4();
  puStack_228 = &
                Unity_Properties_Internal_ConcreteTypeVisitor__Unity_Properties_Internal_IPropertyBagVisitor_Visit_KeyValuePair_object__object__
  ;
  puStack_240 = puVar27;
  puStack_238 = puVar12;
  pppppppuStack_230 = &pppppppuStack_1e0;
  if (plVar13 != (long *)0x0) {
    puVar14 = (undefined8 *)
              func_0x00f78acc(*(undefined8 *)
                               (*plVar13 + (ulong)*(ushort *)(*(long *)puVar17[6] + 0x48) * 0x10 +
                               0x140));
                    /* WARNING: Could not recover jumptable at 0x01839d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar5 = (undefined1 *)(*(code *)*puVar14)(plVar13,puVar32,puVar14);
    return puVar5;
  }
  plVar13 = (long *)func_0x00f78af4();
  puStack_248 = &
                Unity_Properties_Internal_ConcreteTypeVisitor__Unity_Properties_Internal_IPropertyBagVisitor_Visit_PropertyWrapper_object__
  ;
  puStack_260 = puVar27;
  puStack_258 = puVar12;
  pppppppuStack_250 = &pppppppuStack_230;
  if (plVar13 != (long *)0x0) {
    puVar14 = (undefined8 *)
              func_0x00f78acc(*(undefined8 *)
                               (*plVar13 + (ulong)*(ushort *)(*(long *)puVar17[6] + 0x48) * 0x10 +
                               0x140));
                    /* WARNING: Could not recover jumptable at 0x01839da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar5 = (undefined1 *)(*(code *)*puVar14)(plVar13,puVar32,puVar14);
    return puVar5;
  }
  plVar13 = (long *)func_0x00f78af4();
  puStack_268 = &
                Unity_Properties_Internal_ConcreteTypeVisitor__Unity_Properties_Internal_IPropertyBagVisitor_Visit_Bounds_
  ;
  puStack_280 = puVar27;
  puStack_278 = puVar12;
  pppppppuStack_270 = &pppppppuStack_250;
  if (plVar13 != (long *)0x0) {
    puVar14 = (undefined8 *)
              func_0x00f78acc(*(undefined8 *)
                               (*plVar13 + (ulong)*(ushort *)(*(long *)puVar17[6] + 0x48) * 0x10 +
                               0x140));
                    /* WARNING: Could not recover jumptable at 0x01839df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar5 = (undefined1 *)(*(code *)*puVar14)(plVar13,puVar32,puVar14);
    return puVar5;
  }
  plVar13 = (long *)func_0x00f78af4();
  puStack_288 = &
                Unity_Properties_Internal_ConcreteTypeVisitor__Unity_Properties_Internal_IPropertyBagVisitor_Visit_BoundsInt_
  ;
  puStack_2a0 = puVar27;
  puStack_298 = puVar12;
  pppppppuStack_290 = &pppppppuStack_270;
  if (plVar13 != (long *)0x0) {
    puVar14 = (undefined8 *)
              func_0x00f78acc(*(undefined8 *)
                               (*plVar13 + (ulong)*(ushort *)(*(long *)puVar17[6] + 0x48) * 0x10 +
                               0x140));
                    /* WARNING: Could not recover jumptable at 0x01839e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar5 = (undefined1 *)(*(code *)*puVar14)(plVar13,puVar32,puVar14);
    return puVar5;
  }
  plVar13 = (long *)func_0x00f78af4();
  puStack_2a8 = &
                Unity_Properties_Internal_ConcreteTypeVisitor__Unity_Properties_Internal_IPropertyBagVisitor_Visit_Keyframe_
  ;
  puStack_2c0 = puVar27;
  puStack_2b8 = puVar12;
  pppppppuStack_2b0 = &pppppppuStack_290;
  if (plVar13 != (long *)0x0) {
    puVar14 = (undefined8 *)
              func_0x00f78acc(*(undefined8 *)
                               (*plVar13 + (ulong)*(ushort *)(*(long *)puVar17[6] + 0x48) * 0x10 +
                               0x140));
                    /* WARNING: Could not recover jumptable at 0x01839ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar5 = (undefined1 *)(*(code *)*puVar14)(plVar13,puVar32,puVar14);
    return puVar5;
  }
  plVar13 = (long *)func_0x00f78af4();
  puStack_2c8 = &
                Unity_Properties_Internal_ConcreteTypeVisitor__Unity_Properties_Internal_IPropertyBagVisitor_Visit_object_
  ;
  puStack_2e0 = puVar27;
  puStack_2d8 = puVar12;
  pppppppuStack_2d0 = &pppppppuStack_2b0;
  if (plVar13 != (long *)0x0) {
    puVar14 = (undefined8 *)
              func_0x00f78acc(*(undefined8 *)
                               (*plVar13 + (ulong)*(ushort *)(*(long *)puVar17[6] + 0x48) * 0x10 +
                               0x140));
                    /* WARNING: Could not recover jumptable at 0x01839ef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar5 = (undefined1 *)(*(code *)*puVar14)(plVar13,puVar32,puVar14);
    return puVar5;
  }
  plVar13 = (long *)func_0x00f78af4();
  puStack_2e8 = &
                Unity_Properties_Internal_ConcreteTypeVisitor__Unity_Properties_Internal_IPropertyBagVisitor_Visit_Rect_
  ;
  puStack_300 = puVar27;
  puStack_2f8 = puVar12;
  pppppppuStack_2f0 = &pppppppuStack_2d0;
  if (plVar13 != (long *)0x0) {
    puVar14 = (undefined8 *)
              func_0x00f78acc(*(undefined8 *)
                               (*plVar13 + (ulong)*(ushort *)(*(long *)puVar17[6] + 0x48) * 0x10 +
                               0x140));
                    /* WARNING: Could not recover jumptable at 0x01839f48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar5 = (undefined1 *)(*(code *)*puVar14)(plVar13,puVar32,puVar14);
    return puVar5;
  }
  plVar13 = (long *)func_0x00f78af4();
  puStack_308 = &
                Unity_Properties_Internal_ConcreteTypeVisitor__Unity_Properties_Internal_IPropertyBagVisitor_Visit_RectInt_
  ;
  puStack_320 = puVar27;
  puStack_318 = puVar12;
  pppppppuStack_310 = &pppppppuStack_2f0;
  if (plVar13 != (long *)0x0) {
    puVar14 = (undefined8 *)
              func_0x00f78acc(*(undefined8 *)
                               (*plVar13 + (ulong)*(ushort *)(*(long *)puVar17[6] + 0x48) * 0x10 +
                               0x140));
                    /* WARNING: Could not recover jumptable at 0x01839f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar5 = (undefined1 *)(*(code *)*puVar14)(plVar13,puVar32,puVar14);
    return puVar5;
  }
  plVar13 = (long *)func_0x00f78af4();
  puStack_328 = &
                Unity_Properties_Internal_ConcreteTypeVisitor__Unity_Properties_Internal_IPropertyBagVisitor_Visit_Vector2Int_
  ;
  puStack_340 = puVar27;
  puStack_338 = puVar12;
  pppppppuStack_330 = &pppppppuStack_310;
  if (plVar13 != (long *)0x0) {
    puVar14 = (undefined8 *)
              func_0x00f78acc(*(undefined8 *)
                               (*plVar13 + (ulong)*(ushort *)(*(long *)puVar17[6] + 0x48) * 0x10 +
                               0x140));
                    /* WARNING: Could not recover jumptable at 0x01839ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar5 = (undefined1 *)(*(code *)*puVar14)(plVar13,puVar32,puVar14);
    return puVar5;
  }
  plVar13 = (long *)func_0x00f78af4();
  puStack_348 = &
                Unity_Properties_Internal_ConcreteTypeVisitor__Unity_Properties_Internal_IPropertyBagVisitor_Visit_Vector3Int_
  ;
  puStack_360 = puVar27;
  puStack_358 = puVar12;
  pppppppuStack_350 = &pppppppuStack_330;
  if (plVar13 != (long *)0x0) {
    puVar14 = (undefined8 *)
              func_0x00f78acc(*(undefined8 *)
                               (*plVar13 + (ulong)*(ushort *)(*(long *)puVar17[6] + 0x48) * 0x10 +
                               0x140));
                    /* WARNING: Could not recover jumptable at 0x0183a044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar5 = (undefined1 *)(*(code *)*puVar14)(plVar13,puVar32,puVar14);
    return puVar5;
  }
  auVar39 = func_0x00f78af4();
  puStack_368 = &Core_Contexts_ContextManager__GetContext_object_;
  pppppppuStack_3a0 = &pppppppuStack_370;
  uStack_390 = uVar25;
  puStack_388 = puVar23;
  puStack_380 = puVar27;
  puStack_378 = puVar12;
  pppppppuStack_370 = &pppppppuStack_350;
  if (auVar39._0_8_ != 0) {
    uVar4 = /*Core.Contexts.ContextManager$$GetContext*/ func_0x0163d75c(auVar39._0_8_,auVar39._8_8_,0);
    lVar6 = *(long *)puVar32[6];
    if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar6);
    }
    lVar6 = func_0x00f78adc(uVar4,lVar6);
    lVar35 = *(long *)puVar32[6];
    if ((*(ushort *)(lVar35 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar35);
    }
    if (lVar6 != 0) {
      puVar5 = (undefined1 *)func_0x00f78adc(lVar6,lVar35);
      if (puVar5 != (undefined1 *)0x0) {
        return puVar5;
      }
      func_0x00f78e5c(lVar6,lVar35);
    }
    return (undefined1 *)0x0;
  }
  auVar39 = func_0x00f78af4();
  plVar13 = auVar39._0_8_;
  puStack_398 = &System_Diagnostics_Contracts_Contract__ForAll_Type_;
  puVar14 = puVar32;
  puStack_3d0 = puVar7;
  puStack_3c8 = param_6;
  uStack_3c0 = uVar25;
  puStack_3b8 = puVar23;
  puStack_3b0 = puVar27;
  puStack_3a8 = puVar12;
  if ((bRam0000000003eb643b & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d22180);
    bRam0000000003eb643b = 1;
  }
  aiStack_3e0[2] = 0;
  if (plVar13 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar25 = func_0x00f78aec();
    uVar4 = 0x3d78478;
  }
  else {
    if (auVar39._8_8_ != 0) {
      lVar6 = *(long *)puVar32[6];
      if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar6);
      }
      lVar35 = *plVar13;
      uVar8 = (ulong)*(ushort *)(lVar35 + 0x12a);
      if (uVar8 != 0) {
        piVar34 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
        do {
          if (*(long *)(piVar34 + -2) == lVar6) {
            puVar23 = (undefined8 *)(lVar35 + (long)*piVar34 * 0x10 + 0x138);
            goto code_r0x0183a1a8;
          }
          piVar34 = piVar34 + 4;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      puVar14 = (undefined8 *)0x0;
      puVar23 = (undefined8 *)func_0x00fac1f0(plVar13,lVar6);
code_r0x0183a1a8:
      plVar13 = (long *)(*(code *)*puVar23)(plVar13,puVar23[1]);
      if (plVar13 != (long *)0x0) {
        do {
          lVar6 = *plVar13;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar8 != 0) {
            piVar34 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar34 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                puVar23 = (undefined8 *)(lVar6 + (long)*piVar34 * 0x10 + 0x138);
                goto code_r0x0183a210;
              }
              piVar34 = piVar34 + 4;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          puVar14 = (undefined8 *)0x0;
          puVar23 = (undefined8 *)func_0x00fac1f0(plVar13);
code_r0x0183a210:
          uVar8 = (*(code *)*puVar23)(plVar13,puVar23[1]);
          if ((uVar8 & 1) == 0) {
            aiStack_3e0[0] = 0x4d;
            goto code_r0x0183a2d0;
          }
          lVar6 = *(long *)(puVar32[6] + 8);
          if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar6);
          }
          lVar35 = *plVar13;
          uVar8 = (ulong)*(ushort *)(lVar35 + 0x12a);
          if (uVar8 != 0) {
            piVar34 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
            do {
              if (*(long *)(piVar34 + -2) == lVar6) {
                puVar14 = (undefined8 *)(lVar35 + (long)*piVar34 * 0x10 + 0x138);
                goto code_r0x0183a284;
              }
              piVar34 = piVar34 + 4;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          puVar14 = (undefined8 *)func_0x00fac1f0(plVar13,lVar6,0);
code_r0x0183a284:
          uVar4 = (*(code *)*puVar14)(plVar13,puVar14[1]);
          puVar14 = *(undefined8 **)(puVar32[6] + 0x10);
          uVar8 = (*(code *)*puVar14)(auVar39._8_8_,uVar4);
        } while ((uVar8 & 1) != 0);
        aiStack_3e0[0] = 0x4f;
code_r0x0183a2d0:
        plVar15 = (long *)0x0;
        lVar35 = 0;
        lVar6 = 0;
        aiStack_3e0[2] = 1;
        do {
          if (plVar13 != (long *)0x0) {
            lVar33 = *plVar13;
            uVar8 = (ulong)*(ushort *)(lVar33 + 0x12a);
            if (uVar8 != 0) {
              piVar34 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
              do {
                if (*(long *)(piVar34 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                  puVar23 = (undefined8 *)(lVar33 + (long)*piVar34 * 0x10 + 0x138);
                  goto code_r0x0183a334;
                }
                piVar34 = piVar34 + 4;
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
            }
            puVar14 = (undefined8 *)0x0;
            puVar23 = (undefined8 *)func_0x00fac1f0(plVar13);
code_r0x0183a334:
            (*(code *)*puVar23)(plVar13,puVar23[1]);
          }
          if (lVar6 == 0) {
            if ((int)plVar15 == 0) {
              puVar5 = (undefined1 *)(ulong)(aiStack_3e0[lVar35] != 0x4f);
            }
            else {
              puVar5 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
            }
            return puVar5;
          }
          func_0x00f78ac0(lVar6,0);
          if (extraout_w1 != 1) goto code_r0x0183a424;
          plVar15 = (long *)___cxa_begin_catch();
          lVar6 = *plVar15;
          ___cxa_end_catch();
          lVar35 = -1;
          plVar15 = (long *)((long)&MACH_HEADER.magic + 1);
        } while( true );
      }
      goto code_r0x0183a3e0;
    }
    func_0x00f78a24(0x3d1fcf0);
    uVar25 = func_0x00f78aec();
    uVar4 = 0x3d7b050;
  }
  uVar4 = func_0x00f78a24(uVar4);
  /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar25,uVar4,0);
  uVar4 = func_0x00f78a24(0x3d539a0);
  func_0x00f78ac0(uVar25,uVar4);
code_r0x0183a3e0:
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x183a3e8);
  (*pcVar1)();
code_r0x0183a424:
  auVar39 = __Unwind_Resume();
  plVar16 = auVar39._0_8_;
  uStack_418 = 0x3d22180;
  puStack_3e8 = &
                System_Dynamic_Utils_ContractUtils__RequiresArrayRange_KeyValuePair_string__object__
  ;
  puVar23 = puVar17;
  puStack_420 = puVar7;
  plStack_410 = plVar15;
  lStack_408 = lVar35;
  lStack_400 = lVar6;
  plStack_3f8 = plVar13;
  pppppppuStack_3f0 = &pppppppuStack_3a0;
  if ((int)puVar14 < 0) {
code_r0x0183a520:
    auVar39._8_8_ = lVar35;
    auVar39._0_8_ = plVar15;
    puVar22 = puVar28;
    func_0x00f78a24(0x3d1fcf8);
    puVar17 = (undefined8 *)func_0x00f78aec();
    puVar14 = (undefined8 *)0x0;
    /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a524(puVar17,puVar28);
    uVar4 = func_0x00f78a24(0x3d539b0);
    func_0x00f78ac0(puVar17,uVar4);
    puStack_458 = puVar28;
  }
  else {
    if (auVar39._8_4_ < 0) {
code_r0x0183a4e8:
      func_0x00f78a24(0x3d1fcf8);
      lVar6 = func_0x00f78aec();
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a524(lVar6,puVar17,0);
      uVar4 = func_0x00f78a24(0x3d539b0);
      func_0x00f78ac0(lVar6,uVar4);
      lVar35 = auVar39._8_8_;
      goto code_r0x0183a520;
    }
    puVar22 = puVar28;
    puStack_458 = (undefined8 *)0x3d22180;
    if (plVar16 != (long *)0x0) {
      lVar6 = *(long *)puVar9[6];
      if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar6);
      }
      lVar35 = *plVar16;
      uVar8 = (ulong)*(ushort *)(lVar35 + 0x12a);
      if (uVar8 != 0) {
        piVar34 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
        do {
          if (*(long *)(piVar34 + -2) == lVar6) {
            puVar22 = (undefined8 *)(lVar35 + (long)*piVar34 * 0x10 + 0x138);
            goto code_r0x0183a4bc;
          }
          piVar34 = piVar34 + 4;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      puVar22 = (undefined8 *)func_0x00fac1f0(plVar16,lVar6,0);
code_r0x0183a4bc:
      puVar5 = (undefined1 *)(*(code *)*puVar22)(plVar16,puVar22[1]);
      plVar15 = plVar16;
      if ((int)puVar14 <= (int)puVar5 - auVar39._8_4_) {
        return puVar5;
      }
      goto code_r0x0183a4e8;
    }
  }
  auVar40 = func_0x00f78af4();
  plVar13 = auVar40._0_8_;
  puStack_428 = &System_Dynamic_Utils_ContractUtils__RequiresArrayRange_string_;
  puVar27 = puVar23;
  puStack_460 = puVar7;
  lStack_440 = lVar6;
  puStack_438 = puVar17;
  pppppppuStack_430 = &pppppppuStack_3f0;
  auStack_450 = auVar39;
  if (-1 < (int)puVar14) {
    plVar15 = auVar39._0_8_;
    if (-1 < auVar40._8_4_) {
      puVar18 = puStack_458;
      auStack_490 = auVar40;
      if (plVar13 == (long *)0x0) goto code_r0x0183a694;
      lVar6 = *(long *)puVar9[6];
      if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar6);
      }
      lVar35 = *plVar13;
      uVar8 = (ulong)*(ushort *)(lVar35 + 0x12a);
      if (uVar8 != 0) {
        piVar34 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
        do {
          if (*(long *)(piVar34 + -2) == lVar6) {
            puVar18 = (undefined8 *)(lVar35 + (long)*piVar34 * 0x10 + 0x138);
            goto code_r0x0183a5f4;
          }
          piVar34 = piVar34 + 4;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      puVar18 = (undefined8 *)func_0x00fac1f0(plVar13,lVar6,0);
code_r0x0183a5f4:
      puVar5 = (undefined1 *)(*(code *)*puVar18)(plVar13,puVar18[1]);
      plVar15 = plVar13;
      if ((int)puVar14 <= (int)puVar5 - auVar40._8_4_) {
        return puVar5;
      }
    }
    auVar39._8_8_ = auVar40._8_8_;
    auVar39._0_8_ = plVar15;
    func_0x00f78a24(0x3d1fcf8);
    lVar6 = func_0x00f78aec();
    /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a524(lVar6,puVar23,0);
    uVar4 = func_0x00f78a24(0x3d539c0);
    func_0x00f78ac0(lVar6,uVar4);
  }
  func_0x00f78a24(0x3d1fcf8);
  puVar23 = (undefined8 *)func_0x00f78aec();
  puVar14 = (undefined8 *)0x0;
  /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a524(puVar23,puVar22);
  uVar4 = func_0x00f78a24(0x3d539c0);
  func_0x00f78ac0(puVar23,uVar4);
  puVar18 = puVar22;
  auStack_490 = auVar39;
code_r0x0183a694:
  puVar5 = auStack_490._0_8_;
  auVar39 = func_0x00f78af4();
  uVar4 = auVar39._8_8_;
  plVar13 = auVar39._0_8_;
  puStack_468 = &System_Dynamic_Utils_ContractUtils__RequiresNotNullItems_object_;
  uVar25 = 0;
  puStack_4a0 = puVar7;
  puStack_498 = puVar18;
  lStack_480 = lVar6;
  puStack_478 = puVar23;
  pppppppuStack_470 = &pppppppuStack_430;
  /*System.Dynamic.Utils.ContractUtils$$RequiresNotNull*/ func_0x02b9dd0c(plVar13,uVar4,0);
  if (plVar13 == (long *)0x0) {
code_r0x0183a828:
    iVar3 = func_0x00f78af4();
    puStack_4a8 = &
                  UnityEngine_Rendering_CoreUnsafeUtils__CombineHashes_Hash128__CoreUnsafeUtils_DefaultKeyGetter_Hash128__
    ;
    auStack_508._0_8_ = 0;
    auStack_508._8_8_ = 0;
    auStack_518._0_8_ = 0;
    auStack_518._8_8_ = 0;
    uStack_4f0 = unaff_x26;
    uStack_4e8 = unaff_x25;
    puStack_4e0 = puVar7;
    puStack_4d8 = puVar18;
    puStack_4d0 = puVar5;
    plStack_4c8 = plVar13;
    puStack_4c0 = puVar14;
    uStack_4b8 = uVar4;
    pppppppuStack_4b0 = &pppppppuStack_470;
    puVar5 = (undefined1 *)(*(code *)**(undefined8 **)puVar27[6])();
    uStack_4f8 = SUB81(puVar5,0);
    if (0 < iVar3) {
      iVar36 = 0;
      do {
        auVar39 = (*(code *)**(undefined8 **)(puVar27[6] + 8))(extraout_x1,iVar36);
        lVar6 = puVar27[6];
        lVar35 = *(long *)(lVar6 + 0x10);
        auStack_508 = auVar39;
        if ((*(ushort *)(lVar35 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar35);
          lVar6 = puVar27[6];
        }
        lVar6 = *(long *)(lVar6 + 0x18);
        alStack_528[0] = lVar35;
        if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar6);
        }
        uVar8 = (ulong)*(ushort *)(alStack_528[0] + 0x12a);
        if (uVar8 != 0) {
          piVar34 = (int *)(*(long *)(alStack_528[0] + 0xb0) + 8);
          do {
            if (*(long *)(piVar34 + -2) == lVar6) {
              puVar14 = (undefined8 *)(alStack_528[0] + (long)*piVar34 * 0x10 + 0x138);
              goto code_r0x0183a924;
            }
            piVar34 = piVar34 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar14 = (undefined8 *)func_0x00fac1f0(alStack_528,lVar6,0);
code_r0x0183a924:
        auVar39 = (*(code *)*puVar14)(auStack_508,auStack_508,puVar14[1]);
        auStack_518 = auVar39;
        puVar5 = (undefined1 *)/*UnityEngine.HashUtilities$$AppendHash*/ func_0x032310e0(auStack_518,uVar25,0);
        iVar36 = iVar36 + 1;
      } while (iVar36 != iVar3);
    }
    return puVar5;
  }
  lVar6 = *(long *)puVar14[6];
  if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar6);
  }
  lVar35 = *plVar13;
  uVar8 = (ulong)*(ushort *)(lVar35 + 0x12a);
  if (uVar8 != 0) {
    piVar34 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
    do {
      if (*(long *)(piVar34 + -2) == lVar6) {
        puVar23 = (undefined8 *)(lVar35 + (long)*piVar34 * 0x10 + 0x138);
        goto code_r0x0183a728;
      }
      piVar34 = piVar34 + 4;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  puVar23 = (undefined8 *)func_0x00fac1f0(plVar13,lVar6,0);
code_r0x0183a728:
  puVar5 = (undefined1 *)(*(code *)*puVar23)(plVar13,puVar23[1]);
  puVar19 = puVar5;
  if (0 < (int)(uint)puVar5) {
    puVar18 = (undefined8 *)0x0;
    do {
      puVar7 = *(undefined8 **)(puVar14[6] + 8);
      if ((*(ushort *)((long)puVar7 + 0x132) & 1) == 0) {
        func_0x00fac028(puVar7);
      }
      lVar6 = *plVar13;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
      if (uVar8 != 0) {
        piVar34 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(undefined8 **)(piVar34 + -2) == puVar7) {
            puVar23 = (undefined8 *)(lVar6 + (long)*piVar34 * 0x10 + 0x138);
            goto code_r0x0183a7a8;
          }
          piVar34 = piVar34 + 4;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      puVar23 = (undefined8 *)func_0x00fac1f0(plVar13,puVar7,0);
code_r0x0183a7a8:
      puVar19 = (undefined1 *)(*(code *)*puVar23)(plVar13,puVar18,puVar23[1]);
      if (puVar19 == (undefined1 *)0x0) {
        uVar4 = /*System.Dynamic.Utils.ContractUtils$$GetParamName*/ func_0x02ba3454(uVar4,puVar18,0);
        func_0x00f78a24(0x3d1fcf0);
        puVar14 = (undefined8 *)func_0x00f78aec();
        uVar25 = 0;
        /*System.ArgumentNullException$$.ctor*/ func_0x02920400(puVar14,uVar4,0);
        uVar20 = func_0x00f78a24(0x3d539d8);
        func_0x00f78ac0(puVar14,uVar20);
        goto code_r0x0183a828;
      }
      uVar26 = (int)puVar18 + 1;
      puVar18 = (undefined8 *)(ulong)uVar26;
    } while (uVar26 != (uint)puVar5);
  }
  return puVar19;
}



// ============================================================
// RVA: 0x15b506c | Atlas.Gameplay.HitVolumeRootBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_Gameplay_HitVolumeRootBehaviour___ctor(ulong param_1)

{
  undefined1 auVar1 [16];
  
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1;
  return auVar1;
}



