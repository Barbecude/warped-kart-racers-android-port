// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Pickups.PickupSpotsRootBehaviour

// ============================================================
// RVA: 0x14bb450 | Atlas.Gameplay.Pickups.PickupSpotsRootBehaviour.get_PickupSpots
// ============================================================

undefined8 Atlas_Gameplay_Pickups_PickupSpotsRootBehaviour__get_PickupSpots(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x14bb458 | Atlas.Gameplay.Pickups.PickupSpotsRootBehaviour.Awake
// ============================================================

/* WARNING: Type propagation algorithm not settling */

undefined1 *
Atlas_Gameplay_Pickups_PickupSpotsRootBehaviour__Awake
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
  
  if ((bRam0000000003eb4aed & 1) == 0) {
    func_0x00f78a20(0x3d536f0);
    func_0x00f78a20(0x3d3b858);
    func_0x00f78a20(0x3d1dcb8);
    bRam0000000003eb4aed = 1;
  }
  uVar4 = func_0x00f78aec(/*System.Collections.Generic.List<PickupSpotBehaviour>_TypeInfo*/ uRam0000000003d1dcb8);
  /*System.Collections.Generic.List<StringHelper.ThreadSafeEncoding>$$.ctor*/ func_0x024265d8(uVar4,0x28,uRam0000000003d3b858);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018394e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar5 = (undefined1 *)(*(code *)**(undefined8 **)puRam0000000003d536f0[6])(param_1,0,uVar4);
    return puVar5;
  }
  puVar14 = puRam0000000003d536f0;
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
// RVA: 0x14bb4fc | Atlas.Gameplay.Pickups.PickupSpotsRootBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_Gameplay_Pickups_PickupSpotsRootBehaviour___ctor(ulong param_1)

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



