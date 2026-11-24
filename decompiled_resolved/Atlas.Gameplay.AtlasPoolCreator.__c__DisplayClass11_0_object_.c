// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.AtlasPoolCreator.<>c__DisplayClass11_0<object>

// ============================================================
// RVA: 0x1b1719c | Atlas.Gameplay.AtlasPoolCreator.<>c__DisplayClass11_0<object>..ctor
// ============================================================

undefined1  [16]
Atlas_Gameplay_AtlasPoolCreator___c__DisplayClass11_0_object____ctor
          (ulong param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  undefined1 *puVar4;
  undefined8 ****ppppuVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined2 *puVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined4 *puVar19;
  undefined2 *puVar20;
  undefined1 *puVar21;
  long *extraout_x1;
  long *plVar22;
  long extraout_x1_00;
  long extraout_x1_01;
  long extraout_x1_02;
  long extraout_x1_03;
  long extraout_x1_04;
  long extraout_x1_05;
  long extraout_x1_06;
  long extraout_x1_07;
  ulong uVar23;
  ulong uVar24;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar25;
  long lVar26;
  undefined8 *extraout_x8;
  uint *puVar27;
  ushort *puVar28;
  uint uVar29;
  uint *puVar30;
  ushort *puVar31;
  ushort *puVar32;
  long lVar33;
  undefined8 uVar34;
  ulong unaff_x20;
  int iVar35;
  undefined8 unaff_x21;
  undefined8 uVar36;
  undefined8 unaff_x25;
  undefined8 *****pppppuVar37;
  undefined8 uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  undefined8 ****ppppuStack_a0;
  undefined *puStack_98;
  undefined8 ***pppuStack_90;
  undefined *puStack_88;
  undefined8 **ppuStack_80;
  undefined *puStack_78;
  code *pcStack_68;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  if (param_1 != 0) {
System_Object___ctor:
    auVar40._8_8_ = 0;
    auVar40._0_8_ = param_1;
    return auVar40;
  }
  auVar39 = func_0x00f78af4();
  lVar9 = auVar39._8_8_;
  lVar12 = auVar39._0_8_;
  puStack_18 = &
               Atlas_Gameplay_AtlasPoolCreator___c__DisplayClass11_0_object____CreateAndAddGameObjectPool_b__0
  ;
  puStack_20 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb6ace & 1) == 0) {
    puStack_20 = &stack0xfffffffffffffff0;
    func_0x00f78a20(0x3d21b60);
    bRam0000000003eb6ace = 1;
  }
  uVar16 = /*UnityEngine.GameObject_TypeInfo*/ uRam0000000003d21b60;
  lVar33 = *(long *)(lVar12 + 0x10);
  if (lVar33 == 0) {
    func_0x00f78af4();
  }
  else {
    unaff_x20 = (ulong)*(uint *)(lVar12 + 0x18);
    unaff_x21 = *(undefined8 *)(lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + 0x28);
    lVar26 = *(long *)(param_5 + 0x18);
    UNRECOVERED_JUMPTABLE = *(code **)**(undefined8 **)(lVar26 + 0xc0);
    if (lVar9 == 0) {
      lVar8 = 0;
code_r0x01b17254:
                    /* WARNING: Could not recover jumptable at 0x01b17284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar39 = (*UNRECOVERED_JUMPTABLE)
                          (lVar33,lVar8,unaff_x20,unaff_x21,lVar12,**(undefined8 **)(lVar26 + 0xc0))
      ;
      return auVar39;
    }
    pcStack_68 = UNRECOVERED_JUMPTABLE;
    lVar8 = func_0x00f78adc(lVar9,/*UnityEngine.GameObject_TypeInfo*/ uRam0000000003d21b60);
    unaff_x25 = uVar16;
    if (lVar8 != 0) {
      lVar26 = *(long *)(param_5 + 0x18);
      UNRECOVERED_JUMPTABLE = pcStack_68;
      goto code_r0x01b17254;
    }
  }
  lVar9 = func_0x00f78e5c(lVar9,unaff_x25);
  pppuStack_90 = &ppuStack_80;
  puStack_78 = &
               Atlas_Gameplay_AtlasPoolCreator___c__DisplayClass11_0_object____CreateAndAddGameObjectPool_b__1
  ;
  auVar39._0_8_ = *(long *)(lVar9 + 0x10);
  if (auVar39._0_8_ != 0) {
    auVar39._8_8_ = *(undefined8 *)(lVar9 + 0x30);
    return auVar39;
  }
  ppuStack_80 = (undefined8 **)&puStack_20;
  param_1 = func_0x00f78af4();
  if (param_1 != 0) goto System_Object___ctor;
  puStack_88 = &Newtonsoft_Json_Utilities_StringUtils___c__DisplayClass14_0_object____ctor;
  lVar9 = func_0x00f78af4();
  puStack_98 = &
               Newtonsoft_Json_Utilities_StringUtils___c__DisplayClass14_0_object____ForgivingCaseSensitiveFind_b__0
  ;
  pppppuVar37 = &ppppuStack_a0;
  uStack_b0 = unaff_x20;
  lStack_a8 = lVar33;
  if (*(long *)(lVar9 + 0x10) == 0) {
    ppppuStack_a0 = &pppuStack_90;
    lVar33 = func_0x00f78af4();
    puStack_b8 = &
                 Newtonsoft_Json_Utilities_StringUtils___c__DisplayClass14_0_object____ForgivingCaseSensitiveFind_b__1
    ;
    if (*(long *)(lVar33 + 0x10) == 0) {
      param_1 = func_0x00f78af4();
      if (param_1 == 0) {
        auVar39 = func_0x00f78af4();
        lVar12 = auVar39._8_8_;
        uStack_138 = auVar39._0_8_;
        uStack_140 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        uStack_158 = 0;
        uStack_160 = 0;
        uStack_148 = 0;
        uStack_150 = 0;
        (**(code **)**(undefined8 **)(*(long *)(lVar12 + 0x18) + 0xc0))(&uStack_1a0);
        uStack_140 = uStack_188;
        uStack_148 = uStack_190;
        uStack_150 = uStack_198;
        uStack_158 = uStack_1a0;
        uStack_160 = CONCAT44(uStack_160._4_4_,0xffffffff);
        uStack_1d8 = uStack_1a0;
        uStack_1e0 = uStack_160;
        uStack_1c8 = uStack_190;
        uStack_1d0 = uStack_198;
        uStack_1b8 = uStack_138;
        uStack_1c0 = uStack_188;
        uStack_1a8 = uStack_128;
        uStack_1b0 = uStack_130;
        uStack_168 = uStack_188;
        uStack_170 = uStack_190;
        uStack_178 = uStack_198;
        uStack_180 = uStack_1a0;
        /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder<Achievements>$$Start<Internal.<>c__DisplayClass242_0.<<FinishRequestAndInvokeAsyncWithResult>b__0>d<Achievements>>*/ func_0x01708df8(&uStack_180,&uStack_160,
                        *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x18) + 0xc0) + 0x10));
        auVar39 = /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder<Achievements>$$get_Task*/ func_0x01caf24c(&uStack_1f8,(ulong)&uStack_160 | 8,
                                  *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x18) + 0xc0) + 0x18)
                                 );
        extraout_x8[1] = uStack_1f0;
        *extraout_x8 = uStack_1f8;
        extraout_x8[2] = uStack_1e8;
        return auVar39;
      }
      goto System_Object___ctor;
    }
    lVar26 = (**(code **)**(undefined8 **)(*(long *)(param_3 + 0x18) + 0xc0))();
    lVar33 = *(long *)(lVar33 + 0x18);
    uVar23 = 4;
    ppppuVar5 = (undefined8 ****)&uStack_b0;
  }
  else {
    ppppuStack_a0 = &pppuStack_90;
    lVar26 = (**(code **)**(undefined8 **)(*(long *)(param_3 + 0x18) + 0xc0))();
    lVar33 = *(long *)(lVar9 + 0x18);
    uVar23 = 5;
    ppppuVar5 = &pppuStack_90;
    lVar9 = lStack_a8;
    unaff_x20 = uStack_b0;
    pppppuVar37 = (undefined8 *****)ppppuStack_a0;
    puStack_b8 = puStack_98;
  }
  auVar43._8_8_ = lVar33;
  auVar43._0_8_ = lVar26;
  *(long *)((long)ppppuVar5 + -0x30) = lVar12;
  *(undefined8 *)((long)ppppuVar5 + -0x28) = unaff_x21;
  *(ulong *)((long)ppppuVar5 + -0x20) = unaff_x20;
  *(long *)((long)ppppuVar5 + -0x18) = lVar9;
  *(undefined8 ******)((long)ppppuVar5 + -0x10) = pppppuVar37;
  *(undefined **)((long)ppppuVar5 + -8) = puStack_b8;
  lVar12 = lVar33;
  uVar24 = uVar23;
  if ((bRam0000000003eb9444 & 1) == 0) {
    func_0x00f78a20(0x3d20b50,lVar33,uVar23,0);
    bRam0000000003eb9444 = 1;
    lVar12 = extraout_x1_04;
  }
  iVar7 = (int)uVar24;
  if (5 < (uint)uVar23) {
code_r0x029cafec:
    uVar16 = func_0x00f78a24(0x3d746f0);
    uVar16 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar16,0);
    func_0x00f78a24(0x3d1fce8);
    uVar17 = func_0x00f78aec();
    uVar18 = func_0x00f78a24(0x3d784e0);
    /*System.ArgumentException$$.ctor*/ func_0x02920824(uVar17,uVar16,uVar18,0);
    iVar7 = (int)uVar18;
    uVar16 = func_0x00f78a24(0x3d5daf0);
    func_0x00f78ac0(uVar17,uVar16);
    goto System_Buffer__Memcpy;
  }
  if (lVar26 == lVar33) {
    uVar14 = 1;
    goto code_r0x029caf20;
  }
  uVar14 = 0;
  if ((lVar26 == 0) || (lVar33 == 0)) goto code_r0x029caf20;
  switch(uVar23) {
  case 0:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar15 = (long *)/*System.Globalization.CultureInfo$$get_CurrentCulture*/ func_0x02a7f288(0);
    break;
  case 1:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar15 = (long *)/*System.Globalization.CultureInfo$$get_CurrentCulture*/ func_0x02a7f288(0);
    goto joined_r0x029caeec;
  case 2:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar15 = (long *)/*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
    break;
  case 3:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar15 = (long *)/*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
joined_r0x029caeec:
    if ((plVar15 == (long *)0x0) ||
       (plVar15 = (long *)(**(code **)(*plVar15 + 0x1f8))(plVar15,*(undefined8 *)(*plVar15 + 0x200))
       , plVar15 == (long *)0x0)) goto System_Buffer__Memcpy;
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar15 + 0x1a8);
    uVar16 = *(undefined8 *)(*plVar15 + 0x1b0);
    uVar17 = 1;
    goto code_r0x029caf14;
  case 4:
    if (*(int *)(lVar26 + 0x10) == *(int *)(lVar33 + 0x10)) {
      uVar16 = *(undefined8 *)((long)ppppuVar5 + -0x10);
      uVar38 = *(undefined8 *)((long)ppppuVar5 + -8);
      uVar17 = *(undefined8 *)((long)ppppuVar5 + -0x20);
      uVar34 = *(undefined8 *)((long)ppppuVar5 + -0x18);
      uVar18 = *(undefined8 *)((long)ppppuVar5 + -0x30);
      uVar36 = *(undefined8 *)((long)ppppuVar5 + -0x28);
      puVar4 = (undefined1 *)ppppuVar5;
System_String__EqualsHelper:
      lVar12 = auVar43._0_8_;
      *(undefined8 *)(puVar4 + -0x30) = uVar18;
      *(undefined8 *)(puVar4 + -0x28) = uVar36;
      *(undefined8 *)(puVar4 + -0x20) = uVar17;
      *(undefined8 *)(puVar4 + -0x18) = uVar34;
      *(undefined8 *)(puVar4 + -0x10) = uVar16;
      *(undefined8 *)(puVar4 + -8) = uVar38;
      if ((lVar12 != 0) && (auVar43._8_8_ != 0)) {
        plVar15 = (long *)(lVar12 + 0x14);
        iVar7 = *(int *)(lVar12 + 0x10);
        plVar22 = (long *)(auVar43._8_8_ + 0x14);
        auVar39 = /*System.Environment$$get_Is64BitProcess*/ func_0x02acb354(0);
        auVar41._8_8_ = auVar39._8_8_;
        if ((auVar39._0_8_ & 1) == 0) {
          iVar35 = iVar7;
          if (9 < iVar7) goto code_r0x029ca704;
          goto code_r0x029ca774;
        }
        iVar35 = iVar7;
        if (0xb < iVar7) goto code_r0x029ca6b0;
        goto code_r0x029ca774;
      }
      auVar39 = func_0x00f78af4();
      lVar9 = auVar39._8_8_;
      lVar12 = auVar39._0_8_;
      *(undefined8 *)(puVar4 + -0x60) = uVar18;
      *(undefined8 *)(puVar4 + -0x58) = uVar36;
      *(undefined8 *)(puVar4 + -0x50) = uVar17;
      *(undefined8 *)(puVar4 + -0x48) = uVar34;
      *(undefined1 **)(puVar4 + -0x40) = puVar4 + -0x10;
      *(undefined **)(puVar4 + -0x38) = &System_String__CompareOrdinalHelper;
      if ((bRam0000000003eb9441 & 1) == 0) {
        func_0x00f78a20(0x3d232c0);
        bRam0000000003eb9441 = 1;
      }
      if ((lVar12 != 0) && (lVar9 != 0)) {
        uVar1 = *(undefined4 *)(lVar12 + 0x10);
        uVar2 = *(undefined4 *)(lVar9 + 0x10);
        if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        auVar39 = /*System.Math$$Min*/ func_0x02b020f4(uVar1,uVar2,0);
        auVar42._8_8_ = auVar39._8_8_;
        uVar23 = auVar39._0_8_;
        puVar27 = (uint *)(lVar12 + 0x14);
        puVar30 = (uint *)(lVar9 + 0x14);
        uVar25 = auVar39._0_4_;
        if ((int)uVar25 < 10) goto code_r0x029ca8c8;
        lVar33 = 4;
        goto code_r0x029ca858;
      }
      auVar43 = func_0x00f78af4();
      plVar22 = auVar43._8_8_;
      plVar13 = auVar43._0_8_;
      *(undefined8 *)(puVar4 + -0x90) = uVar18;
      *(undefined8 *)(puVar4 + -0x88) = 0x3eb9000;
      *(undefined1 (*) [16])(puVar4 + -0x80) = auVar39;
      *(undefined1 **)(puVar4 + -0x70) = puVar4 + -0x40;
      *(undefined **)(puVar4 + -0x68) = &System_String__Equals;
      plVar15 = plVar22;
      if ((bRam0000000003eb9442 & 1) == 0) {
        func_0x00f78a20(0x3d24dd0);
        bRam0000000003eb9442 = 1;
        plVar15 = extraout_x1;
      }
      if (plVar13 != (long *)0x0) {
        if (plVar22 != (long *)0x0) {
          if (*plVar22 == /*string_TypeInfo*/ lRam0000000003d24dd0) {
            if (plVar13 == plVar22) {
              uVar16 = 1;
              goto code_r0x029ca9c8;
            }
            uVar23 = uVar24;
            if (plVar22 == (long *)0x0) goto code_r0x029caa44;
            plVar15 = plVar22;
            if ((int)plVar13[2] == (int)plVar22[2]) goto code_r0x029ca9f4;
          }
          else {
            plVar15 = (long *)0x0;
          }
        }
        uVar16 = 0;
        plVar22 = plVar15;
code_r0x029ca9c8:
        auVar44._8_8_ = plVar22;
        auVar44._0_8_ = uVar16;
        return auVar44;
      }
      func_0x00f78a24(0x3d23938);
      plVar13 = (long *)func_0x00f78aec();
      /*System.NullReferenceException$$.ctor*/ func_0x02950520(plVar13,0);
      uVar16 = func_0x00f78a24(0x3d5dad8);
      func_0x00f78ac0(plVar13,uVar16);
      uVar23 = uVar24;
code_r0x029caa44:
      auVar43 = func_0x00f78af4();
      lVar33 = auVar43._8_8_;
      lVar9 = auVar43._0_8_;
      *(undefined8 *)(puVar4 + -0xc0) = uVar18;
      *(undefined8 *)(puVar4 + -0xb8) = 0x3eb9000;
      *(long **)(puVar4 + -0xb0) = plVar22;
      *(long **)(puVar4 + -0xa8) = plVar13;
      *(undefined1 **)(puVar4 + -0xa0) = puVar4 + -0x70;
      *(undefined **)(puVar4 + -0x98) = &System_String__Equals;
      lVar12 = lVar33;
      uVar24 = uVar23;
      if ((bRam0000000003eb9443 & 1) == 0) {
        func_0x00f78a20(0x3d20b50);
        bRam0000000003eb9443 = 1;
        lVar12 = extraout_x1_00;
      }
      if (5 < (uint)uVar23) {
code_r0x029caca0:
        uVar16 = func_0x00f78a24(0x3d746f0);
        uVar16 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar16,0);
        func_0x00f78a24(0x3d1fce8);
        uVar17 = func_0x00f78aec();
        uVar18 = func_0x00f78a24(0x3d784e0);
        /*System.ArgumentException$$.ctor*/ func_0x02920824(uVar17,uVar16,uVar18,0);
        uVar16 = func_0x00f78a24(0x3d5dae8);
        func_0x00f78ac0(uVar17,uVar16);
        goto code_r0x029cad04;
      }
      if (lVar9 == lVar33) {
        uVar23 = 1;
        goto code_r0x029cac7c;
      }
      if (lVar33 == 0) goto code_r0x029cac78;
      switch(uVar23 & 0xffffffff) {
      case 0:
        if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar15 = (long *)/*System.Globalization.CultureInfo$$get_CurrentCulture*/ func_0x02a7f288(0);
        break;
      case 1:
        if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar15 = (long *)/*System.Globalization.CultureInfo$$get_CurrentCulture*/ func_0x02a7f288(0);
        goto joined_r0x029caba0;
      case 2:
        if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar15 = (long *)/*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
        break;
      case 3:
        if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar15 = (long *)/*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
joined_r0x029caba0:
        if ((plVar15 == (long *)0x0) ||
           (plVar15 = (long *)(**(code **)(*plVar15 + 0x1f8))
                                        (plVar15,*(undefined8 *)(*plVar15 + 0x200)),
           plVar15 == (long *)0x0)) goto code_r0x029cad04;
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar15 + 0x1a8);
        uVar16 = *(undefined8 *)(*plVar15 + 0x1b0);
        uVar17 = 1;
        goto code_r0x029cabc8;
      case 4:
        if (*(int *)(lVar9 + 0x10) != *(int *)(lVar33 + 0x10)) goto code_r0x029cac78;
        uVar16 = *(undefined8 *)(puVar4 + -0xa0);
        uVar38 = *(undefined8 *)(puVar4 + -0x98);
        uVar17 = *(undefined8 *)(puVar4 + -0xb0);
        uVar34 = *(undefined8 *)(puVar4 + -0xa8);
        uVar18 = *(undefined8 *)(puVar4 + -0xc0);
        uVar36 = *(undefined8 *)(puVar4 + -0xb8);
        puVar4 = puVar4 + -0x90;
        goto System_String__EqualsHelper;
      case 5:
        iVar7 = *(int *)(lVar9 + 0x10);
        if (iVar7 != *(int *)(lVar33 + 0x10)) {
code_r0x029cac78:
          uVar23 = 0;
          goto code_r0x029cac7c;
        }
        if (iVar7 == 0) goto code_r0x029cac68;
        lVar26 = (long)iVar7 << 1;
        puVar28 = (ushort *)(lVar9 + 0x16);
        puVar32 = (ushort *)(lVar9 + 0x14);
        lVar12 = lVar26;
        goto code_r0x029cac24;
      default:
        goto code_r0x029caca0;
      }
      if ((plVar15 == (long *)0x0) ||
         (plVar15 = (long *)(**(code **)(*plVar15 + 0x1f8))
                                      (plVar15,*(undefined8 *)(*plVar15 + 0x200)),
         plVar15 == (long *)0x0)) {
code_r0x029cad04:
        auVar39 = func_0x00f78af4();
        auVar46._8_8_ = auVar39._8_8_;
        lVar12 = auVar39._0_8_;
        if (*(int *)(lVar12 + 0x10) == 0) {
          auVar47._8_8_ = auVar46._8_8_;
          auVar47._0_8_ = 1;
          return auVar47;
        }
        lVar9 = (long)*(int *)(lVar12 + 0x10) * 2;
        puVar28 = (ushort *)(lVar12 + 0x14);
        puVar32 = (ushort *)(lVar12 + 0x16);
        do {
          lVar9 = lVar9 + -2;
          uVar3 = *puVar28;
          auVar46._1_7_ = 0;
          auVar46[0] = uVar3 < 0x80;
          puVar28 = puVar32;
          puVar32 = puVar32 + 1;
        } while (uVar3 < 0x80 && lVar9 != 0);
        return auVar46;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar15 + 0x1a8);
      uVar16 = *(undefined8 *)(*plVar15 + 0x1b0);
      uVar17 = 0;
code_r0x029cabc8:
      iVar7 = (*UNRECOVERED_JUMPTABLE)(plVar15,lVar9,lVar33,uVar17,uVar16);
      lVar12 = extraout_x1_01;
      goto code_r0x029cabcc;
    }
    goto code_r0x029cafd0;
  case 5:
    iVar7 = *(int *)(lVar26 + 0x10);
    if (iVar7 == *(int *)(lVar33 + 0x10)) {
      if (iVar7 != 0) {
        lVar9 = (long)iVar7 << 1;
        puVar28 = (ushort *)(lVar26 + 0x16);
        puVar32 = (ushort *)(lVar26 + 0x14);
        lVar12 = lVar9;
        do {
          puVar31 = puVar28;
          if (0x7f < *puVar32) goto code_r0x029cafd8;
          lVar12 = lVar12 + -2;
          puVar28 = puVar31 + 1;
          puVar32 = puVar31;
        } while (lVar12 != 0);
        if (iVar7 != 0) {
          puVar28 = (ushort *)(lVar33 + 0x16);
          puVar32 = (ushort *)(lVar33 + 0x14);
          do {
            puVar31 = puVar28;
            if (0x7f < *puVar32) goto code_r0x029cafd8;
            lVar9 = lVar9 + -2;
            puVar28 = puVar31 + 1;
            puVar32 = puVar31;
          } while (lVar9 != 0);
        }
      }
      iVar7 = /*System.String$$CompareOrdinalIgnoreCaseHelper*/ func_0x029ca590(lVar26,lVar33);
      lVar12 = extraout_x1_06;
      goto code_r0x029caf18;
    }
code_r0x029cafd0:
    uVar14 = 0;
    goto code_r0x029caf20;
  default:
    goto code_r0x029cafec;
  }
  if ((plVar15 == (long *)0x0) ||
     (plVar15 = (long *)(**(code **)(*plVar15 + 0x1f8))(plVar15,*(undefined8 *)(*plVar15 + 0x200)),
     plVar15 == (long *)0x0)) {
System_Buffer__Memcpy:
    auVar49 = func_0x00f78af4();
    puVar21 = auVar49._8_8_;
    puVar4 = auVar49._0_8_;
    uVar25 = iVar7 * 2;
    if (((auVar49._8_4_ | auVar49._0_4_) & 3) != 0) {
      if ((0 < (int)uVar25) && ((auVar49._0_4_ & auVar49._8_4_ & 1) != 0)) {
        auVar49._8_8_ = puVar21 + 1;
        auVar49._0_8_ = puVar4 + 1;
        *puVar4 = *puVar21;
        uVar25 = uVar25 - 1;
      }
      puVar20 = auVar49._8_8_;
      puVar11 = auVar49._0_8_;
      if ((((auVar49._0_4_ >> 1 & 1) != 0) && ((auVar49._8_4_ >> 1 & 1) != 0)) && (1 < (int)uVar25))
      {
        auVar49._8_8_ = puVar20 + 1;
        auVar49._0_8_ = puVar11 + 1;
        *puVar11 = *puVar20;
        uVar25 = uVar25 - 2;
      }
      uVar29 = auVar49._0_4_ | auVar49._8_4_;
      if ((uVar29 & 1) != 0) {
        uVar29 = uVar25;
        if (7 < (int)uVar25) {
          do {
            puVar21 = auVar49._8_8_;
            puVar4 = auVar49._0_8_;
            *puVar4 = *puVar21;
            puVar4[1] = puVar21[1];
            puVar4[2] = puVar21[2];
            puVar4[3] = puVar21[3];
            puVar4[4] = puVar21[4];
            puVar4[5] = puVar21[5];
            puVar4[6] = puVar21[6];
            puVar4[7] = puVar21[7];
            auVar49._8_8_ = puVar21 + 8;
            auVar49._0_8_ = puVar4 + 8;
            uVar25 = uVar29 - 8;
            bVar6 = 0xf < uVar29;
            uVar29 = uVar25;
          } while (bVar6);
        }
        uVar29 = uVar25;
        if (1 < (int)uVar25) {
          do {
            puVar21 = auVar49._8_8_;
            puVar4 = auVar49._0_8_;
            *puVar4 = *puVar21;
            puVar4[1] = puVar21[1];
            auVar49._8_8_ = puVar21 + 2;
            auVar49._0_8_ = puVar4 + 2;
            uVar25 = uVar29 - 2;
            bVar6 = 3 < uVar29;
            uVar29 = uVar25;
          } while (bVar6);
        }
        if (uVar25 == 1) {
          *auVar49._0_8_ = *auVar49._8_8_;
        }
        return auVar49;
      }
      if ((uVar29 >> 1 & 1) != 0) {
        uVar29 = uVar25;
        if (7 < (int)uVar25) {
          do {
            puVar20 = auVar49._8_8_;
            puVar11 = auVar49._0_8_;
            *puVar11 = *puVar20;
            puVar11[1] = puVar20[1];
            puVar11[2] = puVar20[2];
            puVar11[3] = puVar20[3];
            auVar49._8_8_ = puVar20 + 4;
            auVar49._0_8_ = puVar11 + 4;
            uVar25 = uVar29 - 8;
            bVar6 = 0xf < uVar29;
            uVar29 = uVar25;
          } while (bVar6);
        }
        uVar29 = uVar25;
        if (1 < (int)uVar25) {
          do {
            puVar20 = auVar49._8_8_;
            puVar11 = auVar49._0_8_;
            auVar49._8_8_ = puVar20 + 1;
            auVar49._0_8_ = puVar11 + 1;
            *puVar11 = *puVar20;
            uVar25 = uVar29 - 2;
            bVar6 = 3 < uVar29;
            uVar29 = uVar25;
          } while (bVar6);
        }
        if (uVar25 == 1) {
          *auVar49._0_8_ = *auVar49._8_8_;
        }
        return auVar49;
      }
    }
    uVar29 = uVar25;
    if (0xf < (int)uVar25) {
      do {
        puVar19 = auVar49._8_8_;
        puVar10 = auVar49._0_8_;
        *puVar10 = *puVar19;
        puVar10[1] = puVar19[1];
        puVar10[2] = puVar19[2];
        puVar10[3] = puVar19[3];
        auVar49._8_8_ = puVar19 + 4;
        auVar49._0_8_ = puVar10 + 4;
        uVar25 = uVar29 - 0x10;
        bVar6 = 0x1f < uVar29;
        uVar29 = uVar25;
      } while (bVar6);
    }
    uVar29 = uVar25;
    if (3 < (int)uVar25) {
      do {
        puVar19 = auVar49._8_8_;
        puVar10 = auVar49._0_8_;
        auVar49._8_8_ = puVar19 + 1;
        auVar49._0_8_ = puVar10 + 1;
        *puVar10 = *puVar19;
        uVar25 = uVar29 - 4;
        bVar6 = 7 < uVar29;
        uVar29 = uVar25;
      } while (bVar6);
    }
    if (0 < (int)uVar25) {
      uVar25 = uVar25 + 1;
      do {
        puVar21 = auVar49._8_8_;
        puVar4 = auVar49._0_8_;
        auVar49._8_8_ = puVar21 + 1;
        auVar49._0_8_ = puVar4 + 1;
        *puVar4 = *puVar21;
        uVar25 = uVar25 - 1;
      } while (1 < uVar25);
    }
    return auVar49;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar15 + 0x1a8);
  uVar16 = *(undefined8 *)(*plVar15 + 0x1b0);
  uVar17 = 0;
code_r0x029caf14:
  iVar7 = (*UNRECOVERED_JUMPTABLE)(plVar15,lVar26,lVar33,uVar17,uVar16);
  lVar12 = extraout_x1_05;
code_r0x029caf18:
  uVar14 = (ulong)(iVar7 == 0);
code_r0x029caf20:
  auVar48._8_8_ = lVar12;
  auVar48._0_8_ = uVar14;
  return auVar48;
code_r0x029cafd8:
  iVar7 = /*System.Globalization.TextInfo$$CompareOrdinalIgnoreCase*/ func_0x029e9154(lVar26,lVar33,0);
  lVar12 = extraout_x1_07;
  goto code_r0x029caf18;
  while( true ) {
    plVar15 = plVar15 + 3;
    plVar22 = plVar22 + 3;
    iVar7 = iVar35 + -0xc;
    bVar6 = iVar35 < 0x18;
    iVar35 = iVar7;
    if (bVar6) break;
code_r0x029ca6b0:
    if (((*plVar15 != *plVar22) || (plVar15[1] != plVar22[1])) || (plVar15[2] != plVar22[2]))
    goto code_r0x029ca7ac;
  }
  goto code_r0x029ca774;
code_r0x029ca7ac:
  uVar23 = 0;
  goto code_r0x029ca7b8;
code_r0x029ca948:
  uVar25 = (uint)*(ushort *)((long)puVar27 + 2);
  uVar29 = (uint)*(ushort *)((long)puVar30 + 2);
  goto code_r0x029ca950;
code_r0x029ca9f4:
  uVar16 = *(undefined8 *)(puVar4 + -0x70);
  uVar38 = *(undefined8 *)(puVar4 + -0x68);
  uVar17 = *(undefined8 *)(puVar4 + -0x80);
  uVar34 = *(undefined8 *)(puVar4 + -0x78);
  uVar18 = *(undefined8 *)(puVar4 + -0x90);
  uVar36 = *(undefined8 *)(puVar4 + -0x88);
  puVar4 = puVar4 + -0x60;
  goto System_String__EqualsHelper;
code_r0x029cac8c:
  iVar7 = /*System.Globalization.TextInfo$$CompareOrdinalIgnoreCase*/ func_0x029e9154(lVar9,lVar33,0);
  lVar12 = extraout_x1_03;
  goto code_r0x029cabcc;
  while( true ) {
    if (puVar27[1] != puVar30[1]) goto code_r0x029ca930;
    if (puVar27[2] != puVar30[2]) {
      lVar33 = 8;
      goto code_r0x029ca930;
    }
    if (puVar27[3] != puVar30[3]) {
      lVar33 = 0xc;
      goto code_r0x029ca930;
    }
    if (puVar27[4] != puVar30[4]) {
      lVar33 = 0x10;
      goto code_r0x029ca930;
    }
    puVar27 = puVar27 + 5;
    puVar30 = puVar30 + 5;
    iVar7 = (int)uVar23;
    uVar25 = iVar7 - 10;
    uVar23 = (ulong)uVar25;
    if (iVar7 < 0x14) break;
code_r0x029ca858:
    if (*puVar27 != *puVar30) {
      lVar33 = 0;
code_r0x029ca930:
      puVar27 = (uint *)(lVar33 + (long)puVar27);
      puVar30 = (uint *)(lVar33 + (long)puVar30);
      uVar25 = (uint)(ushort)*puVar27 - (uint)(ushort)*puVar30;
      uVar23 = (ulong)uVar25;
      if (uVar25 != 0) goto code_r0x029ca954;
      goto code_r0x029ca948;
    }
  }
code_r0x029ca8c8:
  if (0 < (int)uVar25) {
    iVar7 = uVar25 + 2;
    do {
      if (*puVar27 != *puVar30) {
        uVar25 = (*puVar27 & 0xffff) - (*puVar30 & 0xffff);
        uVar23 = (ulong)uVar25;
        if (uVar25 == 0) goto code_r0x029ca948;
        goto code_r0x029ca954;
      }
      puVar27 = puVar27 + 1;
      puVar30 = puVar30 + 1;
      iVar7 = iVar7 + -2;
    } while (2 < iVar7);
  }
  uVar25 = *(uint *)(lVar12 + 0x10);
  uVar29 = *(uint *)(lVar9 + 0x10);
code_r0x029ca950:
  uVar23 = (ulong)(uVar25 - uVar29);
code_r0x029ca954:
  auVar42._0_8_ = uVar23;
  return auVar42;
  while( true ) {
    lVar12 = lVar12 + -2;
    puVar28 = puVar31 + 1;
    puVar32 = puVar31;
    if (lVar12 == 0) break;
code_r0x029cac24:
    puVar31 = puVar28;
    if (0x7f < *puVar32) goto code_r0x029cac8c;
  }
  if (iVar7 != 0) {
    puVar28 = (ushort *)(lVar33 + 0x16);
    puVar32 = (ushort *)(lVar33 + 0x14);
    do {
      puVar31 = puVar28;
      if (0x7f < *puVar32) goto code_r0x029cac8c;
      lVar26 = lVar26 + -2;
      puVar28 = puVar31 + 1;
      puVar32 = puVar31;
    } while (lVar26 != 0);
  }
code_r0x029cac68:
  iVar7 = /*System.String$$CompareOrdinalIgnoreCaseHelper*/ func_0x029ca590(lVar9,lVar33);
  lVar12 = extraout_x1_02;
code_r0x029cabcc:
  uVar23 = (ulong)(iVar7 == 0);
code_r0x029cac7c:
  auVar45._8_8_ = lVar12;
  auVar45._0_8_ = uVar23;
  return auVar45;
  while( true ) {
    plVar15 = (long *)((long)plVar15 + 0x14);
    plVar22 = (long *)((long)plVar22 + 0x14);
    iVar7 = iVar35 + -10;
    bVar6 = iVar35 < 0x14;
    iVar35 = iVar7;
    if (bVar6) break;
code_r0x029ca704:
    if ((((int)*plVar15 != (int)*plVar22) ||
        (*(int *)((long)plVar15 + 4) != *(int *)((long)plVar22 + 4))) ||
       (((int)plVar15[1] != (int)plVar22[1] ||
        ((*(int *)((long)plVar15 + 0xc) != *(int *)((long)plVar22 + 0xc) ||
         ((int)plVar15[2] != (int)plVar22[2])))))) goto code_r0x029ca7ac;
  }
code_r0x029ca774:
  if (iVar7 < 1) {
    uVar23 = 1;
  }
  else {
    iVar7 = iVar7 + 2;
    do {
      bVar6 = (int)*plVar15 == (int)*plVar22;
      uVar23 = (ulong)bVar6;
      if (!bVar6) break;
      plVar15 = (long *)((long)plVar15 + 4);
      plVar22 = (long *)((long)plVar22 + 4);
      iVar7 = iVar7 + -2;
    } while (2 < iVar7);
  }
code_r0x029ca7b8:
  auVar41._0_8_ = uVar23;
  return auVar41;
}



// ============================================================
// RVA: 0x1b171b4 | Atlas.Gameplay.AtlasPoolCreator.<>c__DisplayClass11_0<object>.<CreateAndAddGameObjectPool>b__0
// ============================================================

undefined1  [16]
Atlas_Gameplay_AtlasPoolCreator___c__DisplayClass11_0_object____CreateAndAddGameObjectPool_b__0
          (long param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  undefined1 *puVar4;
  undefined8 ****ppppuVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined2 *puVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined4 *puVar18;
  undefined2 *puVar19;
  undefined1 *puVar20;
  long *extraout_x1;
  long *plVar21;
  long extraout_x1_00;
  long extraout_x1_01;
  long extraout_x1_02;
  long extraout_x1_03;
  long extraout_x1_04;
  long extraout_x1_05;
  long extraout_x1_06;
  long extraout_x1_07;
  ulong uVar22;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar23;
  long lVar24;
  undefined8 *extraout_x8;
  uint *puVar25;
  ushort *puVar26;
  long lVar27;
  uint uVar28;
  uint *puVar29;
  ushort *puVar30;
  ushort *puVar31;
  long lVar32;
  undefined8 uVar33;
  ulong unaff_x20;
  int iVar34;
  undefined8 unaff_x21;
  undefined8 uVar35;
  undefined8 unaff_x25;
  undefined8 *****pppppuVar36;
  undefined8 uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_a8;
  ulong uStack_a0;
  long lStack_98;
  undefined8 ****ppppuStack_90;
  undefined *puStack_88;
  undefined8 ***pppuStack_80;
  undefined *puStack_78;
  undefined8 **ppuStack_70;
  undefined *puStack_68;
  code *pcStack_58;
  
  if ((bRam0000000003eb6ace & 1) == 0) {
    func_0x00f78a20(0x3d21b60);
    bRam0000000003eb6ace = 1;
  }
  uVar15 = /*UnityEngine.GameObject_TypeInfo*/ uRam0000000003d21b60;
  lVar32 = *(long *)(param_1 + 0x10);
  if (lVar32 == 0) {
    func_0x00f78af4();
  }
  else {
    unaff_x20 = (ulong)*(uint *)(param_1 + 0x18);
    unaff_x21 = *(undefined8 *)(param_1 + 0x20);
    param_1 = *(long *)(param_1 + 0x28);
    lVar24 = *(long *)(param_5 + 0x18);
    UNRECOVERED_JUMPTABLE = *(code **)**(undefined8 **)(lVar24 + 0xc0);
    if (param_2 == 0) {
      lVar8 = 0;
LAB_01b17254:
                    /* WARNING: Could not recover jumptable at 0x01b17284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar38 = (*UNRECOVERED_JUMPTABLE)
                          (lVar32,lVar8,unaff_x20,unaff_x21,param_1,**(undefined8 **)(lVar24 + 0xc0)
                          );
      return auVar38;
    }
    pcStack_58 = UNRECOVERED_JUMPTABLE;
    lVar8 = func_0x00f78adc(param_2,/*UnityEngine.GameObject_TypeInfo*/ uRam0000000003d21b60);
    unaff_x25 = uVar15;
    if (lVar8 != 0) {
      lVar24 = *(long *)(param_5 + 0x18);
      UNRECOVERED_JUMPTABLE = pcStack_58;
      goto LAB_01b17254;
    }
  }
  lVar24 = func_0x00f78e5c(param_2,unaff_x25);
  pppuStack_80 = &ppuStack_70;
  puStack_68 = &
               Atlas_Gameplay_AtlasPoolCreator___c__DisplayClass11_0_object____CreateAndAddGameObjectPool_b__1
  ;
  auVar38._0_8_ = *(long *)(lVar24 + 0x10);
  if (auVar38._0_8_ != 0) {
    auVar38._8_8_ = *(undefined8 *)(lVar24 + 0x30);
    return auVar38;
  }
  ppuStack_70 = (undefined8 **)&stack0xfffffffffffffff0;
  uVar9 = func_0x00f78af4();
  if (uVar9 != 0) {
System_Object___ctor:
    auVar39._8_8_ = 0;
    auVar39._0_8_ = uVar9;
    return auVar39;
  }
  puStack_78 = &Newtonsoft_Json_Utilities_StringUtils___c__DisplayClass14_0_object____ctor;
  lVar24 = func_0x00f78af4();
  puStack_88 = &
               Newtonsoft_Json_Utilities_StringUtils___c__DisplayClass14_0_object____ForgivingCaseSensitiveFind_b__0
  ;
  pppppuVar36 = &ppppuStack_90;
  uStack_a0 = unaff_x20;
  lStack_98 = lVar32;
  if (*(long *)(lVar24 + 0x10) == 0) {
    ppppuStack_90 = &pppuStack_80;
    lVar32 = func_0x00f78af4();
    puStack_a8 = &
                 Newtonsoft_Json_Utilities_StringUtils___c__DisplayClass14_0_object____ForgivingCaseSensitiveFind_b__1
    ;
    if (*(long *)(lVar32 + 0x10) == 0) {
      uVar9 = func_0x00f78af4();
      if (uVar9 == 0) {
        auVar38 = func_0x00f78af4();
        lVar32 = auVar38._8_8_;
        uStack_128 = auVar38._0_8_;
        uStack_130 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        uStack_148 = 0;
        uStack_150 = 0;
        uStack_138 = 0;
        uStack_140 = 0;
        (**(code **)**(undefined8 **)(*(long *)(lVar32 + 0x18) + 0xc0))(&uStack_190);
        uStack_130 = uStack_178;
        uStack_138 = uStack_180;
        uStack_140 = uStack_188;
        uStack_148 = uStack_190;
        uStack_150 = CONCAT44(uStack_150._4_4_,0xffffffff);
        uStack_1c8 = uStack_190;
        uStack_1d0 = uStack_150;
        uStack_1b8 = uStack_180;
        uStack_1c0 = uStack_188;
        uStack_1a8 = uStack_128;
        uStack_1b0 = uStack_178;
        uStack_198 = uStack_118;
        uStack_1a0 = uStack_120;
        uStack_158 = uStack_178;
        uStack_160 = uStack_180;
        uStack_168 = uStack_188;
        uStack_170 = uStack_190;
        /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder<Achievements>$$Start<Internal.<>c__DisplayClass242_0.<<FinishRequestAndInvokeAsyncWithResult>b__0>d<Achievements>>*/ func_0x01708df8(&uStack_170,&uStack_150,
                        *(undefined8 *)(*(long *)(*(long *)(lVar32 + 0x18) + 0xc0) + 0x10));
        auVar38 = /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder<Achievements>$$get_Task*/ func_0x01caf24c(&uStack_1e8,(ulong)&uStack_150 | 8,
                                  *(undefined8 *)(*(long *)(*(long *)(lVar32 + 0x18) + 0xc0) + 0x18)
                                 );
        extraout_x8[1] = uStack_1e0;
        *extraout_x8 = uStack_1e8;
        extraout_x8[2] = uStack_1d8;
        return auVar38;
      }
      goto System_Object___ctor;
    }
    lVar8 = (**(code **)**(undefined8 **)(*(long *)(param_3 + 0x18) + 0xc0))();
    lVar32 = *(long *)(lVar32 + 0x18);
    uVar9 = 4;
    ppppuVar5 = (undefined8 ****)&uStack_a0;
  }
  else {
    ppppuStack_90 = &pppuStack_80;
    lVar8 = (**(code **)**(undefined8 **)(*(long *)(param_3 + 0x18) + 0xc0))();
    lVar32 = *(long *)(lVar24 + 0x18);
    uVar9 = 5;
    ppppuVar5 = &pppuStack_80;
    lVar24 = lStack_98;
    unaff_x20 = uStack_a0;
    pppppuVar36 = (undefined8 *****)ppppuStack_90;
    puStack_a8 = puStack_88;
  }
  auVar42._8_8_ = lVar32;
  auVar42._0_8_ = lVar8;
  *(long *)((long)ppppuVar5 + -0x30) = param_1;
  *(undefined8 *)((long)ppppuVar5 + -0x28) = unaff_x21;
  *(ulong *)((long)ppppuVar5 + -0x20) = unaff_x20;
  *(long *)((long)ppppuVar5 + -0x18) = lVar24;
  *(undefined8 ******)((long)ppppuVar5 + -0x10) = pppppuVar36;
  *(undefined **)((long)ppppuVar5 + -8) = puStack_a8;
  lVar24 = lVar32;
  uVar22 = uVar9;
  if ((bRam0000000003eb9444 & 1) == 0) {
    func_0x00f78a20(0x3d20b50,lVar32,uVar9,0);
    bRam0000000003eb9444 = 1;
    lVar24 = extraout_x1_04;
  }
  iVar7 = (int)uVar22;
  if (5 < (uint)uVar9) {
code_r0x029cafec:
    uVar15 = func_0x00f78a24(0x3d746f0);
    uVar15 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar15,0);
    func_0x00f78a24(0x3d1fce8);
    uVar16 = func_0x00f78aec();
    uVar17 = func_0x00f78a24(0x3d784e0);
    /*System.ArgumentException$$.ctor*/ func_0x02920824(uVar16,uVar15,uVar17,0);
    iVar7 = (int)uVar17;
    uVar15 = func_0x00f78a24(0x3d5daf0);
    func_0x00f78ac0(uVar16,uVar15);
    goto System_Buffer__Memcpy;
  }
  if (lVar8 == lVar32) {
    uVar13 = 1;
    goto code_r0x029caf20;
  }
  uVar13 = 0;
  if ((lVar8 == 0) || (lVar32 == 0)) goto code_r0x029caf20;
  switch(uVar9) {
  case 0:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar14 = (long *)/*System.Globalization.CultureInfo$$get_CurrentCulture*/ func_0x02a7f288(0);
    break;
  case 1:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar14 = (long *)/*System.Globalization.CultureInfo$$get_CurrentCulture*/ func_0x02a7f288(0);
    goto joined_r0x029caeec;
  case 2:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar14 = (long *)/*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
    break;
  case 3:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar14 = (long *)/*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
joined_r0x029caeec:
    if ((plVar14 == (long *)0x0) ||
       (plVar14 = (long *)(**(code **)(*plVar14 + 0x1f8))(plVar14,*(undefined8 *)(*plVar14 + 0x200))
       , plVar14 == (long *)0x0)) goto System_Buffer__Memcpy;
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar14 + 0x1a8);
    uVar15 = *(undefined8 *)(*plVar14 + 0x1b0);
    uVar16 = 1;
    goto code_r0x029caf14;
  case 4:
    if (*(int *)(lVar8 + 0x10) == *(int *)(lVar32 + 0x10)) {
      uVar15 = *(undefined8 *)((long)ppppuVar5 + -0x10);
      uVar37 = *(undefined8 *)((long)ppppuVar5 + -8);
      uVar16 = *(undefined8 *)((long)ppppuVar5 + -0x20);
      uVar33 = *(undefined8 *)((long)ppppuVar5 + -0x18);
      uVar17 = *(undefined8 *)((long)ppppuVar5 + -0x30);
      uVar35 = *(undefined8 *)((long)ppppuVar5 + -0x28);
      puVar4 = (undefined1 *)ppppuVar5;
System_String__EqualsHelper:
      lVar32 = auVar42._0_8_;
      *(undefined8 *)(puVar4 + -0x30) = uVar17;
      *(undefined8 *)(puVar4 + -0x28) = uVar35;
      *(undefined8 *)(puVar4 + -0x20) = uVar16;
      *(undefined8 *)(puVar4 + -0x18) = uVar33;
      *(undefined8 *)(puVar4 + -0x10) = uVar15;
      *(undefined8 *)(puVar4 + -8) = uVar37;
      if ((lVar32 != 0) && (auVar42._8_8_ != 0)) {
        plVar14 = (long *)(lVar32 + 0x14);
        iVar7 = *(int *)(lVar32 + 0x10);
        plVar21 = (long *)(auVar42._8_8_ + 0x14);
        auVar38 = /*System.Environment$$get_Is64BitProcess*/ func_0x02acb354(0);
        auVar40._8_8_ = auVar38._8_8_;
        if ((auVar38._0_8_ & 1) == 0) {
          iVar34 = iVar7;
          if (9 < iVar7) goto code_r0x029ca704;
          goto code_r0x029ca774;
        }
        iVar34 = iVar7;
        if (0xb < iVar7) goto code_r0x029ca6b0;
        goto code_r0x029ca774;
      }
      auVar38 = func_0x00f78af4();
      lVar24 = auVar38._8_8_;
      lVar32 = auVar38._0_8_;
      *(undefined8 *)(puVar4 + -0x60) = uVar17;
      *(undefined8 *)(puVar4 + -0x58) = uVar35;
      *(undefined8 *)(puVar4 + -0x50) = uVar16;
      *(undefined8 *)(puVar4 + -0x48) = uVar33;
      *(undefined1 **)(puVar4 + -0x40) = puVar4 + -0x10;
      *(undefined **)(puVar4 + -0x38) = &System_String__CompareOrdinalHelper;
      if ((bRam0000000003eb9441 & 1) == 0) {
        func_0x00f78a20(0x3d232c0);
        bRam0000000003eb9441 = 1;
      }
      if ((lVar32 != 0) && (lVar24 != 0)) {
        uVar1 = *(undefined4 *)(lVar32 + 0x10);
        uVar2 = *(undefined4 *)(lVar24 + 0x10);
        if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        auVar38 = /*System.Math$$Min*/ func_0x02b020f4(uVar1,uVar2,0);
        auVar41._8_8_ = auVar38._8_8_;
        uVar9 = auVar38._0_8_;
        puVar25 = (uint *)(lVar32 + 0x14);
        puVar29 = (uint *)(lVar24 + 0x14);
        uVar23 = auVar38._0_4_;
        if ((int)uVar23 < 10) goto code_r0x029ca8c8;
        lVar8 = 4;
        goto code_r0x029ca858;
      }
      auVar42 = func_0x00f78af4();
      plVar21 = auVar42._8_8_;
      plVar12 = auVar42._0_8_;
      *(undefined8 *)(puVar4 + -0x90) = uVar17;
      *(undefined8 *)(puVar4 + -0x88) = 0x3eb9000;
      *(undefined1 (*) [16])(puVar4 + -0x80) = auVar38;
      *(undefined1 **)(puVar4 + -0x70) = puVar4 + -0x40;
      *(undefined **)(puVar4 + -0x68) = &System_String__Equals;
      plVar14 = plVar21;
      if ((bRam0000000003eb9442 & 1) == 0) {
        func_0x00f78a20(0x3d24dd0);
        bRam0000000003eb9442 = 1;
        plVar14 = extraout_x1;
      }
      if (plVar12 != (long *)0x0) {
        if (plVar21 != (long *)0x0) {
          if (*plVar21 == /*string_TypeInfo*/ lRam0000000003d24dd0) {
            if (plVar12 == plVar21) {
              uVar15 = 1;
              goto code_r0x029ca9c8;
            }
            uVar9 = uVar22;
            if (plVar21 == (long *)0x0) goto code_r0x029caa44;
            plVar14 = plVar21;
            if ((int)plVar12[2] == (int)plVar21[2]) goto code_r0x029ca9f4;
          }
          else {
            plVar14 = (long *)0x0;
          }
        }
        uVar15 = 0;
        plVar21 = plVar14;
code_r0x029ca9c8:
        auVar43._8_8_ = plVar21;
        auVar43._0_8_ = uVar15;
        return auVar43;
      }
      func_0x00f78a24(0x3d23938);
      plVar12 = (long *)func_0x00f78aec();
      /*System.NullReferenceException$$.ctor*/ func_0x02950520(plVar12,0);
      uVar15 = func_0x00f78a24(0x3d5dad8);
      func_0x00f78ac0(plVar12,uVar15);
      uVar9 = uVar22;
code_r0x029caa44:
      auVar42 = func_0x00f78af4();
      lVar8 = auVar42._8_8_;
      lVar24 = auVar42._0_8_;
      *(undefined8 *)(puVar4 + -0xc0) = uVar17;
      *(undefined8 *)(puVar4 + -0xb8) = 0x3eb9000;
      *(long **)(puVar4 + -0xb0) = plVar21;
      *(long **)(puVar4 + -0xa8) = plVar12;
      *(undefined1 **)(puVar4 + -0xa0) = puVar4 + -0x70;
      *(undefined **)(puVar4 + -0x98) = &System_String__Equals;
      lVar32 = lVar8;
      uVar22 = uVar9;
      if ((bRam0000000003eb9443 & 1) == 0) {
        func_0x00f78a20(0x3d20b50);
        bRam0000000003eb9443 = 1;
        lVar32 = extraout_x1_00;
      }
      if (5 < (uint)uVar9) {
code_r0x029caca0:
        uVar15 = func_0x00f78a24(0x3d746f0);
        uVar15 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar15,0);
        func_0x00f78a24(0x3d1fce8);
        uVar16 = func_0x00f78aec();
        uVar17 = func_0x00f78a24(0x3d784e0);
        /*System.ArgumentException$$.ctor*/ func_0x02920824(uVar16,uVar15,uVar17,0);
        uVar15 = func_0x00f78a24(0x3d5dae8);
        func_0x00f78ac0(uVar16,uVar15);
        goto code_r0x029cad04;
      }
      if (lVar24 == lVar8) {
        uVar9 = 1;
        goto code_r0x029cac7c;
      }
      if (lVar8 == 0) goto code_r0x029cac78;
      switch(uVar9 & 0xffffffff) {
      case 0:
        if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar14 = (long *)/*System.Globalization.CultureInfo$$get_CurrentCulture*/ func_0x02a7f288(0);
        break;
      case 1:
        if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar14 = (long *)/*System.Globalization.CultureInfo$$get_CurrentCulture*/ func_0x02a7f288(0);
        goto joined_r0x029caba0;
      case 2:
        if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar14 = (long *)/*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
        break;
      case 3:
        if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar14 = (long *)/*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
joined_r0x029caba0:
        if ((plVar14 == (long *)0x0) ||
           (plVar14 = (long *)(**(code **)(*plVar14 + 0x1f8))
                                        (plVar14,*(undefined8 *)(*plVar14 + 0x200)),
           plVar14 == (long *)0x0)) goto code_r0x029cad04;
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar14 + 0x1a8);
        uVar15 = *(undefined8 *)(*plVar14 + 0x1b0);
        uVar16 = 1;
        goto code_r0x029cabc8;
      case 4:
        if (*(int *)(lVar24 + 0x10) != *(int *)(lVar8 + 0x10)) goto code_r0x029cac78;
        uVar15 = *(undefined8 *)(puVar4 + -0xa0);
        uVar37 = *(undefined8 *)(puVar4 + -0x98);
        uVar16 = *(undefined8 *)(puVar4 + -0xb0);
        uVar33 = *(undefined8 *)(puVar4 + -0xa8);
        uVar17 = *(undefined8 *)(puVar4 + -0xc0);
        uVar35 = *(undefined8 *)(puVar4 + -0xb8);
        puVar4 = puVar4 + -0x90;
        goto System_String__EqualsHelper;
      case 5:
        iVar7 = *(int *)(lVar24 + 0x10);
        if (iVar7 != *(int *)(lVar8 + 0x10)) {
code_r0x029cac78:
          uVar9 = 0;
          goto code_r0x029cac7c;
        }
        if (iVar7 == 0) goto code_r0x029cac68;
        lVar27 = (long)iVar7 << 1;
        puVar26 = (ushort *)(lVar24 + 0x16);
        puVar31 = (ushort *)(lVar24 + 0x14);
        lVar32 = lVar27;
        goto code_r0x029cac24;
      default:
        goto code_r0x029caca0;
      }
      if ((plVar14 == (long *)0x0) ||
         (plVar14 = (long *)(**(code **)(*plVar14 + 0x1f8))
                                      (plVar14,*(undefined8 *)(*plVar14 + 0x200)),
         plVar14 == (long *)0x0)) {
code_r0x029cad04:
        auVar38 = func_0x00f78af4();
        auVar45._8_8_ = auVar38._8_8_;
        lVar32 = auVar38._0_8_;
        if (*(int *)(lVar32 + 0x10) == 0) {
          auVar46._8_8_ = auVar45._8_8_;
          auVar46._0_8_ = 1;
          return auVar46;
        }
        lVar24 = (long)*(int *)(lVar32 + 0x10) * 2;
        puVar26 = (ushort *)(lVar32 + 0x14);
        puVar31 = (ushort *)(lVar32 + 0x16);
        do {
          lVar24 = lVar24 + -2;
          uVar3 = *puVar26;
          auVar45._1_7_ = 0;
          auVar45[0] = uVar3 < 0x80;
          puVar26 = puVar31;
          puVar31 = puVar31 + 1;
        } while (uVar3 < 0x80 && lVar24 != 0);
        return auVar45;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar14 + 0x1a8);
      uVar15 = *(undefined8 *)(*plVar14 + 0x1b0);
      uVar16 = 0;
code_r0x029cabc8:
      iVar7 = (*UNRECOVERED_JUMPTABLE)(plVar14,lVar24,lVar8,uVar16,uVar15);
      lVar32 = extraout_x1_01;
      goto code_r0x029cabcc;
    }
    goto code_r0x029cafd0;
  case 5:
    iVar7 = *(int *)(lVar8 + 0x10);
    if (iVar7 == *(int *)(lVar32 + 0x10)) {
      if (iVar7 != 0) {
        lVar27 = (long)iVar7 << 1;
        puVar26 = (ushort *)(lVar8 + 0x16);
        puVar31 = (ushort *)(lVar8 + 0x14);
        lVar24 = lVar27;
        do {
          puVar30 = puVar26;
          if (0x7f < *puVar31) goto code_r0x029cafd8;
          lVar24 = lVar24 + -2;
          puVar26 = puVar30 + 1;
          puVar31 = puVar30;
        } while (lVar24 != 0);
        if (iVar7 != 0) {
          puVar26 = (ushort *)(lVar32 + 0x16);
          puVar31 = (ushort *)(lVar32 + 0x14);
          do {
            puVar30 = puVar26;
            if (0x7f < *puVar31) goto code_r0x029cafd8;
            lVar27 = lVar27 + -2;
            puVar26 = puVar30 + 1;
            puVar31 = puVar30;
          } while (lVar27 != 0);
        }
      }
      iVar7 = /*System.String$$CompareOrdinalIgnoreCaseHelper*/ func_0x029ca590(lVar8,lVar32);
      lVar24 = extraout_x1_06;
      goto code_r0x029caf18;
    }
code_r0x029cafd0:
    uVar13 = 0;
    goto code_r0x029caf20;
  default:
    goto code_r0x029cafec;
  }
  if ((plVar14 == (long *)0x0) ||
     (plVar14 = (long *)(**(code **)(*plVar14 + 0x1f8))(plVar14,*(undefined8 *)(*plVar14 + 0x200)),
     plVar14 == (long *)0x0)) {
System_Buffer__Memcpy:
    auVar48 = func_0x00f78af4();
    puVar20 = auVar48._8_8_;
    puVar4 = auVar48._0_8_;
    uVar23 = iVar7 * 2;
    if (((auVar48._8_4_ | auVar48._0_4_) & 3) != 0) {
      if ((0 < (int)uVar23) && ((auVar48._0_4_ & auVar48._8_4_ & 1) != 0)) {
        auVar48._8_8_ = puVar20 + 1;
        auVar48._0_8_ = puVar4 + 1;
        *puVar4 = *puVar20;
        uVar23 = uVar23 - 1;
      }
      puVar19 = auVar48._8_8_;
      puVar11 = auVar48._0_8_;
      if ((((auVar48._0_4_ >> 1 & 1) != 0) && ((auVar48._8_4_ >> 1 & 1) != 0)) && (1 < (int)uVar23))
      {
        auVar48._8_8_ = puVar19 + 1;
        auVar48._0_8_ = puVar11 + 1;
        *puVar11 = *puVar19;
        uVar23 = uVar23 - 2;
      }
      uVar28 = auVar48._0_4_ | auVar48._8_4_;
      if ((uVar28 & 1) != 0) {
        uVar28 = uVar23;
        if (7 < (int)uVar23) {
          do {
            puVar20 = auVar48._8_8_;
            puVar4 = auVar48._0_8_;
            *puVar4 = *puVar20;
            puVar4[1] = puVar20[1];
            puVar4[2] = puVar20[2];
            puVar4[3] = puVar20[3];
            puVar4[4] = puVar20[4];
            puVar4[5] = puVar20[5];
            puVar4[6] = puVar20[6];
            puVar4[7] = puVar20[7];
            auVar48._8_8_ = puVar20 + 8;
            auVar48._0_8_ = puVar4 + 8;
            uVar23 = uVar28 - 8;
            bVar6 = 0xf < uVar28;
            uVar28 = uVar23;
          } while (bVar6);
        }
        uVar28 = uVar23;
        if (1 < (int)uVar23) {
          do {
            puVar20 = auVar48._8_8_;
            puVar4 = auVar48._0_8_;
            *puVar4 = *puVar20;
            puVar4[1] = puVar20[1];
            auVar48._8_8_ = puVar20 + 2;
            auVar48._0_8_ = puVar4 + 2;
            uVar23 = uVar28 - 2;
            bVar6 = 3 < uVar28;
            uVar28 = uVar23;
          } while (bVar6);
        }
        if (uVar23 == 1) {
          *auVar48._0_8_ = *auVar48._8_8_;
        }
        return auVar48;
      }
      if ((uVar28 >> 1 & 1) != 0) {
        uVar28 = uVar23;
        if (7 < (int)uVar23) {
          do {
            puVar19 = auVar48._8_8_;
            puVar11 = auVar48._0_8_;
            *puVar11 = *puVar19;
            puVar11[1] = puVar19[1];
            puVar11[2] = puVar19[2];
            puVar11[3] = puVar19[3];
            auVar48._8_8_ = puVar19 + 4;
            auVar48._0_8_ = puVar11 + 4;
            uVar23 = uVar28 - 8;
            bVar6 = 0xf < uVar28;
            uVar28 = uVar23;
          } while (bVar6);
        }
        uVar28 = uVar23;
        if (1 < (int)uVar23) {
          do {
            puVar19 = auVar48._8_8_;
            puVar11 = auVar48._0_8_;
            auVar48._8_8_ = puVar19 + 1;
            auVar48._0_8_ = puVar11 + 1;
            *puVar11 = *puVar19;
            uVar23 = uVar28 - 2;
            bVar6 = 3 < uVar28;
            uVar28 = uVar23;
          } while (bVar6);
        }
        if (uVar23 == 1) {
          *auVar48._0_8_ = *auVar48._8_8_;
        }
        return auVar48;
      }
    }
    uVar28 = uVar23;
    if (0xf < (int)uVar23) {
      do {
        puVar18 = auVar48._8_8_;
        puVar10 = auVar48._0_8_;
        *puVar10 = *puVar18;
        puVar10[1] = puVar18[1];
        puVar10[2] = puVar18[2];
        puVar10[3] = puVar18[3];
        auVar48._8_8_ = puVar18 + 4;
        auVar48._0_8_ = puVar10 + 4;
        uVar23 = uVar28 - 0x10;
        bVar6 = 0x1f < uVar28;
        uVar28 = uVar23;
      } while (bVar6);
    }
    uVar28 = uVar23;
    if (3 < (int)uVar23) {
      do {
        puVar18 = auVar48._8_8_;
        puVar10 = auVar48._0_8_;
        auVar48._8_8_ = puVar18 + 1;
        auVar48._0_8_ = puVar10 + 1;
        *puVar10 = *puVar18;
        uVar23 = uVar28 - 4;
        bVar6 = 7 < uVar28;
        uVar28 = uVar23;
      } while (bVar6);
    }
    if (0 < (int)uVar23) {
      uVar23 = uVar23 + 1;
      do {
        puVar20 = auVar48._8_8_;
        puVar4 = auVar48._0_8_;
        auVar48._8_8_ = puVar20 + 1;
        auVar48._0_8_ = puVar4 + 1;
        *puVar4 = *puVar20;
        uVar23 = uVar23 - 1;
      } while (1 < uVar23);
    }
    return auVar48;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar14 + 0x1a8);
  uVar15 = *(undefined8 *)(*plVar14 + 0x1b0);
  uVar16 = 0;
code_r0x029caf14:
  iVar7 = (*UNRECOVERED_JUMPTABLE)(plVar14,lVar8,lVar32,uVar16,uVar15);
  lVar24 = extraout_x1_05;
code_r0x029caf18:
  uVar13 = (ulong)(iVar7 == 0);
code_r0x029caf20:
  auVar47._8_8_ = lVar24;
  auVar47._0_8_ = uVar13;
  return auVar47;
code_r0x029cafd8:
  iVar7 = /*System.Globalization.TextInfo$$CompareOrdinalIgnoreCase*/ func_0x029e9154(lVar8,lVar32,0);
  lVar24 = extraout_x1_07;
  goto code_r0x029caf18;
  while( true ) {
    plVar14 = plVar14 + 3;
    plVar21 = plVar21 + 3;
    iVar7 = iVar34 + -0xc;
    bVar6 = iVar34 < 0x18;
    iVar34 = iVar7;
    if (bVar6) break;
code_r0x029ca6b0:
    if (((*plVar14 != *plVar21) || (plVar14[1] != plVar21[1])) || (plVar14[2] != plVar21[2]))
    goto code_r0x029ca7ac;
  }
  goto code_r0x029ca774;
code_r0x029ca7ac:
  uVar9 = 0;
  goto code_r0x029ca7b8;
code_r0x029ca948:
  uVar23 = (uint)*(ushort *)((long)puVar25 + 2);
  uVar28 = (uint)*(ushort *)((long)puVar29 + 2);
  goto code_r0x029ca950;
code_r0x029ca9f4:
  uVar15 = *(undefined8 *)(puVar4 + -0x70);
  uVar37 = *(undefined8 *)(puVar4 + -0x68);
  uVar16 = *(undefined8 *)(puVar4 + -0x80);
  uVar33 = *(undefined8 *)(puVar4 + -0x78);
  uVar17 = *(undefined8 *)(puVar4 + -0x90);
  uVar35 = *(undefined8 *)(puVar4 + -0x88);
  puVar4 = puVar4 + -0x60;
  goto System_String__EqualsHelper;
code_r0x029cac8c:
  iVar7 = /*System.Globalization.TextInfo$$CompareOrdinalIgnoreCase*/ func_0x029e9154(lVar24,lVar8,0);
  lVar32 = extraout_x1_03;
  goto code_r0x029cabcc;
  while( true ) {
    if (puVar25[1] != puVar29[1]) goto code_r0x029ca930;
    if (puVar25[2] != puVar29[2]) {
      lVar8 = 8;
      goto code_r0x029ca930;
    }
    if (puVar25[3] != puVar29[3]) {
      lVar8 = 0xc;
      goto code_r0x029ca930;
    }
    if (puVar25[4] != puVar29[4]) {
      lVar8 = 0x10;
      goto code_r0x029ca930;
    }
    puVar25 = puVar25 + 5;
    puVar29 = puVar29 + 5;
    iVar7 = (int)uVar9;
    uVar23 = iVar7 - 10;
    uVar9 = (ulong)uVar23;
    if (iVar7 < 0x14) break;
code_r0x029ca858:
    if (*puVar25 != *puVar29) {
      lVar8 = 0;
code_r0x029ca930:
      puVar25 = (uint *)(lVar8 + (long)puVar25);
      puVar29 = (uint *)(lVar8 + (long)puVar29);
      uVar23 = (uint)(ushort)*puVar25 - (uint)(ushort)*puVar29;
      uVar9 = (ulong)uVar23;
      if (uVar23 != 0) goto code_r0x029ca954;
      goto code_r0x029ca948;
    }
  }
code_r0x029ca8c8:
  if (0 < (int)uVar23) {
    iVar7 = uVar23 + 2;
    do {
      if (*puVar25 != *puVar29) {
        uVar23 = (*puVar25 & 0xffff) - (*puVar29 & 0xffff);
        uVar9 = (ulong)uVar23;
        if (uVar23 == 0) goto code_r0x029ca948;
        goto code_r0x029ca954;
      }
      puVar25 = puVar25 + 1;
      puVar29 = puVar29 + 1;
      iVar7 = iVar7 + -2;
    } while (2 < iVar7);
  }
  uVar23 = *(uint *)(lVar32 + 0x10);
  uVar28 = *(uint *)(lVar24 + 0x10);
code_r0x029ca950:
  uVar9 = (ulong)(uVar23 - uVar28);
code_r0x029ca954:
  auVar41._0_8_ = uVar9;
  return auVar41;
  while( true ) {
    lVar32 = lVar32 + -2;
    puVar26 = puVar30 + 1;
    puVar31 = puVar30;
    if (lVar32 == 0) break;
code_r0x029cac24:
    puVar30 = puVar26;
    if (0x7f < *puVar31) goto code_r0x029cac8c;
  }
  if (iVar7 != 0) {
    puVar26 = (ushort *)(lVar8 + 0x16);
    puVar31 = (ushort *)(lVar8 + 0x14);
    do {
      puVar30 = puVar26;
      if (0x7f < *puVar31) goto code_r0x029cac8c;
      lVar27 = lVar27 + -2;
      puVar26 = puVar30 + 1;
      puVar31 = puVar30;
    } while (lVar27 != 0);
  }
code_r0x029cac68:
  iVar7 = /*System.String$$CompareOrdinalIgnoreCaseHelper*/ func_0x029ca590(lVar24,lVar8);
  lVar32 = extraout_x1_02;
code_r0x029cabcc:
  uVar9 = (ulong)(iVar7 == 0);
code_r0x029cac7c:
  auVar44._8_8_ = lVar32;
  auVar44._0_8_ = uVar9;
  return auVar44;
  while( true ) {
    plVar14 = (long *)((long)plVar14 + 0x14);
    plVar21 = (long *)((long)plVar21 + 0x14);
    iVar7 = iVar34 + -10;
    bVar6 = iVar34 < 0x14;
    iVar34 = iVar7;
    if (bVar6) break;
code_r0x029ca704:
    if ((((int)*plVar14 != (int)*plVar21) ||
        (*(int *)((long)plVar14 + 4) != *(int *)((long)plVar21 + 4))) ||
       (((int)plVar14[1] != (int)plVar21[1] ||
        ((*(int *)((long)plVar14 + 0xc) != *(int *)((long)plVar21 + 0xc) ||
         ((int)plVar14[2] != (int)plVar21[2])))))) goto code_r0x029ca7ac;
  }
code_r0x029ca774:
  if (iVar7 < 1) {
    uVar9 = 1;
  }
  else {
    iVar7 = iVar7 + 2;
    do {
      bVar6 = (int)*plVar14 == (int)*plVar21;
      uVar9 = (ulong)bVar6;
      if (!bVar6) break;
      plVar14 = (long *)((long)plVar14 + 4);
      plVar21 = (long *)((long)plVar21 + 4);
      iVar7 = iVar7 + -2;
    } while (2 < iVar7);
  }
code_r0x029ca7b8:
  auVar40._0_8_ = uVar9;
  return auVar40;
}



// ============================================================
// RVA: 0x1b17298 | Atlas.Gameplay.AtlasPoolCreator.<>c__DisplayClass11_0<object>.<CreateAndAddGameObjectPool>b__1
// ============================================================

undefined1  [16]
Atlas_Gameplay_AtlasPoolCreator___c__DisplayClass11_0_object____CreateAndAddGameObjectPool_b__1
          (long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  undefined1 *puVar4;
  undefined8 ****ppppuVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined2 *puVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined4 *puVar20;
  undefined2 *puVar21;
  undefined1 *puVar22;
  long *extraout_x1;
  long *plVar23;
  long extraout_x1_00;
  long extraout_x1_01;
  long extraout_x1_02;
  long extraout_x1_03;
  long extraout_x1_04;
  long extraout_x1_05;
  long extraout_x1_06;
  long extraout_x1_07;
  ulong uVar24;
  uint uVar25;
  undefined8 *extraout_x8;
  uint *puVar26;
  ushort *puVar27;
  long lVar28;
  uint uVar29;
  uint *puVar30;
  code *pcVar31;
  ushort *puVar32;
  ushort *puVar33;
  long unaff_x19;
  undefined8 uVar34;
  undefined8 unaff_x20;
  int iVar35;
  undefined8 unaff_x21;
  undefined8 uVar36;
  undefined8 unaff_x22;
  undefined8 *****pppppuVar37;
  undefined8 uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_48;
  undefined8 ****ppppuStack_30;
  undefined *puStack_28;
  undefined8 ***pppuStack_20;
  undefined *puStack_18;
  
  auVar39._0_8_ = *(long *)(param_1 + 0x10);
  if (auVar39._0_8_ != 0) {
    auVar39._8_8_ = *(undefined8 *)(param_1 + 0x30);
    return auVar39;
  }
  uVar8 = func_0x00f78af4();
  if (uVar8 != 0) {
System_Object___ctor:
    auVar40._8_8_ = 0;
    auVar40._0_8_ = uVar8;
    return auVar40;
  }
  puStack_18 = &Newtonsoft_Json_Utilities_StringUtils___c__DisplayClass14_0_object____ctor;
  pppuStack_20 = (undefined8 ***)&stack0xfffffffffffffff0;
  lVar9 = func_0x00f78af4();
  puStack_28 = &
               Newtonsoft_Json_Utilities_StringUtils___c__DisplayClass14_0_object____ForgivingCaseSensitiveFind_b__0
  ;
  pppppuVar37 = &ppppuStack_30;
  if (*(long *)(lVar9 + 0x10) == 0) {
    ppppuStack_30 = &pppuStack_20;
    lVar19 = func_0x00f78af4();
    puStack_48 = &
                 Newtonsoft_Json_Utilities_StringUtils___c__DisplayClass14_0_object____ForgivingCaseSensitiveFind_b__1
    ;
    if (*(long *)(lVar19 + 0x10) == 0) {
      uVar8 = func_0x00f78af4();
      if (uVar8 == 0) {
        auVar39 = func_0x00f78af4();
        lVar9 = auVar39._8_8_;
        uStack_c8 = auVar39._0_8_;
        uStack_d0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        (**(code **)**(undefined8 **)(*(long *)(lVar9 + 0x18) + 0xc0))(&uStack_130);
        uStack_d0 = uStack_118;
        uStack_d8 = uStack_120;
        uStack_e0 = uStack_128;
        uStack_e8 = uStack_130;
        uStack_f0 = CONCAT44(uStack_f0._4_4_,0xffffffff);
        uStack_168 = uStack_130;
        uStack_170 = uStack_f0;
        uStack_158 = uStack_120;
        uStack_160 = uStack_128;
        uStack_148 = uStack_c8;
        uStack_150 = uStack_118;
        uStack_138 = uStack_b8;
        uStack_140 = uStack_c0;
        uStack_f8 = uStack_118;
        uStack_100 = uStack_120;
        uStack_108 = uStack_128;
        uStack_110 = uStack_130;
        /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder<Achievements>$$Start<Internal.<>c__DisplayClass242_0.<<FinishRequestAndInvokeAsyncWithResult>b__0>d<Achievements>>*/ func_0x01708df8(&uStack_110,&uStack_f0,
                        *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x18) + 0xc0) + 0x10));
        auVar39 = /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder<Achievements>$$get_Task*/ func_0x01caf24c(&uStack_188,(ulong)&uStack_f0 | 8,
                                  *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x18) + 0xc0) + 0x18))
        ;
        extraout_x8[1] = uStack_180;
        *extraout_x8 = uStack_188;
        extraout_x8[2] = uStack_178;
        return auVar39;
      }
      goto System_Object___ctor;
    }
    lVar10 = (**(code **)**(undefined8 **)(*(long *)(param_3 + 0x18) + 0xc0))();
    lVar19 = *(long *)(lVar19 + 0x18);
    uVar8 = 4;
    ppppuVar5 = (undefined8 ****)&stack0xffffffffffffffc0;
  }
  else {
    ppppuStack_30 = &pppuStack_20;
    lVar10 = (**(code **)**(undefined8 **)(*(long *)(param_3 + 0x18) + 0xc0))();
    lVar19 = *(long *)(lVar9 + 0x18);
    uVar8 = 5;
    ppppuVar5 = &pppuStack_20;
    lVar9 = unaff_x19;
    pppppuVar37 = (undefined8 *****)ppppuStack_30;
    puStack_48 = puStack_28;
  }
  auVar43._8_8_ = lVar19;
  auVar43._0_8_ = lVar10;
  *(undefined8 *)((long)ppppuVar5 + -0x30) = unaff_x22;
  *(undefined8 *)((long)ppppuVar5 + -0x28) = unaff_x21;
  *(undefined8 *)((long)ppppuVar5 + -0x20) = unaff_x20;
  *(long *)((long)ppppuVar5 + -0x18) = lVar9;
  *(undefined8 ******)((long)ppppuVar5 + -0x10) = pppppuVar37;
  *(undefined **)((long)ppppuVar5 + -8) = puStack_48;
  lVar9 = lVar19;
  uVar24 = uVar8;
  if ((bRam0000000003eb9444 & 1) == 0) {
    func_0x00f78a20(0x3d20b50,lVar19,uVar8,0);
    bRam0000000003eb9444 = 1;
    lVar9 = extraout_x1_04;
  }
  iVar7 = (int)uVar24;
  if (5 < (uint)uVar8) {
code_r0x029cafec:
    uVar16 = func_0x00f78a24(0x3d746f0);
    uVar16 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar16,0);
    func_0x00f78a24(0x3d1fce8);
    uVar17 = func_0x00f78aec();
    uVar18 = func_0x00f78a24(0x3d784e0);
    /*System.ArgumentException$$.ctor*/ func_0x02920824(uVar17,uVar16,uVar18,0);
    iVar7 = (int)uVar18;
    uVar16 = func_0x00f78a24(0x3d5daf0);
    func_0x00f78ac0(uVar17,uVar16);
    goto System_Buffer__Memcpy;
  }
  if (lVar10 == lVar19) {
    uVar14 = 1;
    goto code_r0x029caf20;
  }
  uVar14 = 0;
  if ((lVar10 == 0) || (lVar19 == 0)) goto code_r0x029caf20;
  switch(uVar8) {
  case 0:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar15 = (long *)/*System.Globalization.CultureInfo$$get_CurrentCulture*/ func_0x02a7f288(0);
    break;
  case 1:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar15 = (long *)/*System.Globalization.CultureInfo$$get_CurrentCulture*/ func_0x02a7f288(0);
    goto joined_r0x029caeec;
  case 2:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar15 = (long *)/*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
    break;
  case 3:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar15 = (long *)/*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
joined_r0x029caeec:
    if ((plVar15 == (long *)0x0) ||
       (plVar15 = (long *)(**(code **)(*plVar15 + 0x1f8))(plVar15,*(undefined8 *)(*plVar15 + 0x200))
       , plVar15 == (long *)0x0)) goto System_Buffer__Memcpy;
    pcVar31 = *(code **)(*plVar15 + 0x1a8);
    uVar16 = *(undefined8 *)(*plVar15 + 0x1b0);
    uVar17 = 1;
    goto code_r0x029caf14;
  case 4:
    if (*(int *)(lVar10 + 0x10) == *(int *)(lVar19 + 0x10)) {
      uVar16 = *(undefined8 *)((long)ppppuVar5 + -0x10);
      uVar38 = *(undefined8 *)((long)ppppuVar5 + -8);
      uVar17 = *(undefined8 *)((long)ppppuVar5 + -0x20);
      uVar34 = *(undefined8 *)((long)ppppuVar5 + -0x18);
      uVar18 = *(undefined8 *)((long)ppppuVar5 + -0x30);
      uVar36 = *(undefined8 *)((long)ppppuVar5 + -0x28);
      puVar4 = (undefined1 *)ppppuVar5;
System_String__EqualsHelper:
      lVar9 = auVar43._0_8_;
      *(undefined8 *)(puVar4 + -0x30) = uVar18;
      *(undefined8 *)(puVar4 + -0x28) = uVar36;
      *(undefined8 *)(puVar4 + -0x20) = uVar17;
      *(undefined8 *)(puVar4 + -0x18) = uVar34;
      *(undefined8 *)(puVar4 + -0x10) = uVar16;
      *(undefined8 *)(puVar4 + -8) = uVar38;
      if ((lVar9 != 0) && (auVar43._8_8_ != 0)) {
        plVar15 = (long *)(lVar9 + 0x14);
        iVar7 = *(int *)(lVar9 + 0x10);
        plVar23 = (long *)(auVar43._8_8_ + 0x14);
        auVar39 = /*System.Environment$$get_Is64BitProcess*/ func_0x02acb354(0);
        auVar41._8_8_ = auVar39._8_8_;
        if ((auVar39._0_8_ & 1) == 0) {
          iVar35 = iVar7;
          if (9 < iVar7) goto code_r0x029ca704;
          goto code_r0x029ca774;
        }
        iVar35 = iVar7;
        if (0xb < iVar7) goto code_r0x029ca6b0;
        goto code_r0x029ca774;
      }
      auVar39 = func_0x00f78af4();
      lVar19 = auVar39._8_8_;
      lVar9 = auVar39._0_8_;
      *(undefined8 *)(puVar4 + -0x60) = uVar18;
      *(undefined8 *)(puVar4 + -0x58) = uVar36;
      *(undefined8 *)(puVar4 + -0x50) = uVar17;
      *(undefined8 *)(puVar4 + -0x48) = uVar34;
      *(undefined1 **)(puVar4 + -0x40) = puVar4 + -0x10;
      *(undefined **)(puVar4 + -0x38) = &System_String__CompareOrdinalHelper;
      if ((bRam0000000003eb9441 & 1) == 0) {
        func_0x00f78a20(0x3d232c0);
        bRam0000000003eb9441 = 1;
      }
      if ((lVar9 != 0) && (lVar19 != 0)) {
        uVar1 = *(undefined4 *)(lVar9 + 0x10);
        uVar2 = *(undefined4 *)(lVar19 + 0x10);
        if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        auVar39 = /*System.Math$$Min*/ func_0x02b020f4(uVar1,uVar2,0);
        auVar42._8_8_ = auVar39._8_8_;
        uVar8 = auVar39._0_8_;
        puVar26 = (uint *)(lVar9 + 0x14);
        puVar30 = (uint *)(lVar19 + 0x14);
        uVar25 = auVar39._0_4_;
        if ((int)uVar25 < 10) goto code_r0x029ca8c8;
        lVar10 = 4;
        goto code_r0x029ca858;
      }
      auVar43 = func_0x00f78af4();
      plVar23 = auVar43._8_8_;
      plVar13 = auVar43._0_8_;
      *(undefined8 *)(puVar4 + -0x90) = uVar18;
      *(undefined8 *)(puVar4 + -0x88) = 0x3eb9000;
      *(undefined1 (*) [16])(puVar4 + -0x80) = auVar39;
      *(undefined1 **)(puVar4 + -0x70) = puVar4 + -0x40;
      *(undefined **)(puVar4 + -0x68) = &System_String__Equals;
      plVar15 = plVar23;
      if ((bRam0000000003eb9442 & 1) == 0) {
        func_0x00f78a20(0x3d24dd0);
        bRam0000000003eb9442 = 1;
        plVar15 = extraout_x1;
      }
      if (plVar13 != (long *)0x0) {
        if (plVar23 != (long *)0x0) {
          if (*plVar23 == /*string_TypeInfo*/ lRam0000000003d24dd0) {
            if (plVar13 == plVar23) {
              uVar16 = 1;
              goto code_r0x029ca9c8;
            }
            uVar8 = uVar24;
            if (plVar23 == (long *)0x0) goto code_r0x029caa44;
            plVar15 = plVar23;
            if ((int)plVar13[2] == (int)plVar23[2]) goto code_r0x029ca9f4;
          }
          else {
            plVar15 = (long *)0x0;
          }
        }
        uVar16 = 0;
        plVar23 = plVar15;
code_r0x029ca9c8:
        auVar44._8_8_ = plVar23;
        auVar44._0_8_ = uVar16;
        return auVar44;
      }
      func_0x00f78a24(0x3d23938);
      plVar13 = (long *)func_0x00f78aec();
      /*System.NullReferenceException$$.ctor*/ func_0x02950520(plVar13,0);
      uVar16 = func_0x00f78a24(0x3d5dad8);
      func_0x00f78ac0(plVar13,uVar16);
      uVar8 = uVar24;
code_r0x029caa44:
      auVar43 = func_0x00f78af4();
      lVar10 = auVar43._8_8_;
      lVar19 = auVar43._0_8_;
      *(undefined8 *)(puVar4 + -0xc0) = uVar18;
      *(undefined8 *)(puVar4 + -0xb8) = 0x3eb9000;
      *(long **)(puVar4 + -0xb0) = plVar23;
      *(long **)(puVar4 + -0xa8) = plVar13;
      *(undefined1 **)(puVar4 + -0xa0) = puVar4 + -0x70;
      *(undefined **)(puVar4 + -0x98) = &System_String__Equals;
      lVar9 = lVar10;
      uVar24 = uVar8;
      if ((bRam0000000003eb9443 & 1) == 0) {
        func_0x00f78a20(0x3d20b50);
        bRam0000000003eb9443 = 1;
        lVar9 = extraout_x1_00;
      }
      if (5 < (uint)uVar8) {
code_r0x029caca0:
        uVar16 = func_0x00f78a24(0x3d746f0);
        uVar16 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar16,0);
        func_0x00f78a24(0x3d1fce8);
        uVar17 = func_0x00f78aec();
        uVar18 = func_0x00f78a24(0x3d784e0);
        /*System.ArgumentException$$.ctor*/ func_0x02920824(uVar17,uVar16,uVar18,0);
        uVar16 = func_0x00f78a24(0x3d5dae8);
        func_0x00f78ac0(uVar17,uVar16);
        goto code_r0x029cad04;
      }
      if (lVar19 == lVar10) {
        uVar8 = 1;
        goto code_r0x029cac7c;
      }
      if (lVar10 == 0) goto code_r0x029cac78;
      switch(uVar8 & 0xffffffff) {
      case 0:
        if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar15 = (long *)/*System.Globalization.CultureInfo$$get_CurrentCulture*/ func_0x02a7f288(0);
        break;
      case 1:
        if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar15 = (long *)/*System.Globalization.CultureInfo$$get_CurrentCulture*/ func_0x02a7f288(0);
        goto joined_r0x029caba0;
      case 2:
        if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar15 = (long *)/*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
        break;
      case 3:
        if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar15 = (long *)/*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
joined_r0x029caba0:
        if ((plVar15 == (long *)0x0) ||
           (plVar15 = (long *)(**(code **)(*plVar15 + 0x1f8))
                                        (plVar15,*(undefined8 *)(*plVar15 + 0x200)),
           plVar15 == (long *)0x0)) goto code_r0x029cad04;
        pcVar31 = *(code **)(*plVar15 + 0x1a8);
        uVar16 = *(undefined8 *)(*plVar15 + 0x1b0);
        uVar17 = 1;
        goto code_r0x029cabc8;
      case 4:
        if (*(int *)(lVar19 + 0x10) != *(int *)(lVar10 + 0x10)) goto code_r0x029cac78;
        uVar16 = *(undefined8 *)(puVar4 + -0xa0);
        uVar38 = *(undefined8 *)(puVar4 + -0x98);
        uVar17 = *(undefined8 *)(puVar4 + -0xb0);
        uVar34 = *(undefined8 *)(puVar4 + -0xa8);
        uVar18 = *(undefined8 *)(puVar4 + -0xc0);
        uVar36 = *(undefined8 *)(puVar4 + -0xb8);
        puVar4 = puVar4 + -0x90;
        goto System_String__EqualsHelper;
      case 5:
        iVar7 = *(int *)(lVar19 + 0x10);
        if (iVar7 != *(int *)(lVar10 + 0x10)) {
code_r0x029cac78:
          uVar8 = 0;
          goto code_r0x029cac7c;
        }
        if (iVar7 == 0) goto code_r0x029cac68;
        lVar28 = (long)iVar7 << 1;
        puVar27 = (ushort *)(lVar19 + 0x16);
        puVar33 = (ushort *)(lVar19 + 0x14);
        lVar9 = lVar28;
        goto code_r0x029cac24;
      default:
        goto code_r0x029caca0;
      }
      if ((plVar15 == (long *)0x0) ||
         (plVar15 = (long *)(**(code **)(*plVar15 + 0x1f8))
                                      (plVar15,*(undefined8 *)(*plVar15 + 0x200)),
         plVar15 == (long *)0x0)) {
code_r0x029cad04:
        auVar39 = func_0x00f78af4();
        auVar46._8_8_ = auVar39._8_8_;
        lVar9 = auVar39._0_8_;
        if (*(int *)(lVar9 + 0x10) == 0) {
          auVar47._8_8_ = auVar46._8_8_;
          auVar47._0_8_ = 1;
          return auVar47;
        }
        lVar19 = (long)*(int *)(lVar9 + 0x10) * 2;
        puVar27 = (ushort *)(lVar9 + 0x14);
        puVar33 = (ushort *)(lVar9 + 0x16);
        do {
          lVar19 = lVar19 + -2;
          uVar3 = *puVar27;
          auVar46._1_7_ = 0;
          auVar46[0] = uVar3 < 0x80;
          puVar27 = puVar33;
          puVar33 = puVar33 + 1;
        } while (uVar3 < 0x80 && lVar19 != 0);
        return auVar46;
      }
      pcVar31 = *(code **)(*plVar15 + 0x1a8);
      uVar16 = *(undefined8 *)(*plVar15 + 0x1b0);
      uVar17 = 0;
code_r0x029cabc8:
      iVar7 = (*pcVar31)(plVar15,lVar19,lVar10,uVar17,uVar16);
      lVar9 = extraout_x1_01;
      goto code_r0x029cabcc;
    }
    goto code_r0x029cafd0;
  case 5:
    iVar7 = *(int *)(lVar10 + 0x10);
    if (iVar7 == *(int *)(lVar19 + 0x10)) {
      if (iVar7 != 0) {
        lVar28 = (long)iVar7 << 1;
        puVar27 = (ushort *)(lVar10 + 0x16);
        puVar33 = (ushort *)(lVar10 + 0x14);
        lVar9 = lVar28;
        do {
          puVar32 = puVar27;
          if (0x7f < *puVar33) goto code_r0x029cafd8;
          lVar9 = lVar9 + -2;
          puVar27 = puVar32 + 1;
          puVar33 = puVar32;
        } while (lVar9 != 0);
        if (iVar7 != 0) {
          puVar27 = (ushort *)(lVar19 + 0x16);
          puVar33 = (ushort *)(lVar19 + 0x14);
          do {
            puVar32 = puVar27;
            if (0x7f < *puVar33) goto code_r0x029cafd8;
            lVar28 = lVar28 + -2;
            puVar27 = puVar32 + 1;
            puVar33 = puVar32;
          } while (lVar28 != 0);
        }
      }
      iVar7 = /*System.String$$CompareOrdinalIgnoreCaseHelper*/ func_0x029ca590(lVar10,lVar19);
      lVar9 = extraout_x1_06;
      goto code_r0x029caf18;
    }
code_r0x029cafd0:
    uVar14 = 0;
    goto code_r0x029caf20;
  default:
    goto code_r0x029cafec;
  }
  if ((plVar15 == (long *)0x0) ||
     (plVar15 = (long *)(**(code **)(*plVar15 + 0x1f8))(plVar15,*(undefined8 *)(*plVar15 + 0x200)),
     plVar15 == (long *)0x0)) {
System_Buffer__Memcpy:
    auVar49 = func_0x00f78af4();
    puVar22 = auVar49._8_8_;
    puVar4 = auVar49._0_8_;
    uVar25 = iVar7 * 2;
    if (((auVar49._8_4_ | auVar49._0_4_) & 3) != 0) {
      if ((0 < (int)uVar25) && ((auVar49._0_4_ & auVar49._8_4_ & 1) != 0)) {
        auVar49._8_8_ = puVar22 + 1;
        auVar49._0_8_ = puVar4 + 1;
        *puVar4 = *puVar22;
        uVar25 = uVar25 - 1;
      }
      puVar21 = auVar49._8_8_;
      puVar12 = auVar49._0_8_;
      if ((((auVar49._0_4_ >> 1 & 1) != 0) && ((auVar49._8_4_ >> 1 & 1) != 0)) && (1 < (int)uVar25))
      {
        auVar49._8_8_ = puVar21 + 1;
        auVar49._0_8_ = puVar12 + 1;
        *puVar12 = *puVar21;
        uVar25 = uVar25 - 2;
      }
      uVar29 = auVar49._0_4_ | auVar49._8_4_;
      if ((uVar29 & 1) != 0) {
        uVar29 = uVar25;
        if (7 < (int)uVar25) {
          do {
            puVar22 = auVar49._8_8_;
            puVar4 = auVar49._0_8_;
            *puVar4 = *puVar22;
            puVar4[1] = puVar22[1];
            puVar4[2] = puVar22[2];
            puVar4[3] = puVar22[3];
            puVar4[4] = puVar22[4];
            puVar4[5] = puVar22[5];
            puVar4[6] = puVar22[6];
            puVar4[7] = puVar22[7];
            auVar49._8_8_ = puVar22 + 8;
            auVar49._0_8_ = puVar4 + 8;
            uVar25 = uVar29 - 8;
            bVar6 = 0xf < uVar29;
            uVar29 = uVar25;
          } while (bVar6);
        }
        uVar29 = uVar25;
        if (1 < (int)uVar25) {
          do {
            puVar22 = auVar49._8_8_;
            puVar4 = auVar49._0_8_;
            *puVar4 = *puVar22;
            puVar4[1] = puVar22[1];
            auVar49._8_8_ = puVar22 + 2;
            auVar49._0_8_ = puVar4 + 2;
            uVar25 = uVar29 - 2;
            bVar6 = 3 < uVar29;
            uVar29 = uVar25;
          } while (bVar6);
        }
        if (uVar25 == 1) {
          *auVar49._0_8_ = *auVar49._8_8_;
        }
        return auVar49;
      }
      if ((uVar29 >> 1 & 1) != 0) {
        uVar29 = uVar25;
        if (7 < (int)uVar25) {
          do {
            puVar21 = auVar49._8_8_;
            puVar12 = auVar49._0_8_;
            *puVar12 = *puVar21;
            puVar12[1] = puVar21[1];
            puVar12[2] = puVar21[2];
            puVar12[3] = puVar21[3];
            auVar49._8_8_ = puVar21 + 4;
            auVar49._0_8_ = puVar12 + 4;
            uVar25 = uVar29 - 8;
            bVar6 = 0xf < uVar29;
            uVar29 = uVar25;
          } while (bVar6);
        }
        uVar29 = uVar25;
        if (1 < (int)uVar25) {
          do {
            puVar21 = auVar49._8_8_;
            puVar12 = auVar49._0_8_;
            auVar49._8_8_ = puVar21 + 1;
            auVar49._0_8_ = puVar12 + 1;
            *puVar12 = *puVar21;
            uVar25 = uVar29 - 2;
            bVar6 = 3 < uVar29;
            uVar29 = uVar25;
          } while (bVar6);
        }
        if (uVar25 == 1) {
          *auVar49._0_8_ = *auVar49._8_8_;
        }
        return auVar49;
      }
    }
    uVar29 = uVar25;
    if (0xf < (int)uVar25) {
      do {
        puVar20 = auVar49._8_8_;
        puVar11 = auVar49._0_8_;
        *puVar11 = *puVar20;
        puVar11[1] = puVar20[1];
        puVar11[2] = puVar20[2];
        puVar11[3] = puVar20[3];
        auVar49._8_8_ = puVar20 + 4;
        auVar49._0_8_ = puVar11 + 4;
        uVar25 = uVar29 - 0x10;
        bVar6 = 0x1f < uVar29;
        uVar29 = uVar25;
      } while (bVar6);
    }
    uVar29 = uVar25;
    if (3 < (int)uVar25) {
      do {
        puVar20 = auVar49._8_8_;
        puVar11 = auVar49._0_8_;
        auVar49._8_8_ = puVar20 + 1;
        auVar49._0_8_ = puVar11 + 1;
        *puVar11 = *puVar20;
        uVar25 = uVar29 - 4;
        bVar6 = 7 < uVar29;
        uVar29 = uVar25;
      } while (bVar6);
    }
    if (0 < (int)uVar25) {
      uVar25 = uVar25 + 1;
      do {
        puVar22 = auVar49._8_8_;
        puVar4 = auVar49._0_8_;
        auVar49._8_8_ = puVar22 + 1;
        auVar49._0_8_ = puVar4 + 1;
        *puVar4 = *puVar22;
        uVar25 = uVar25 - 1;
      } while (1 < uVar25);
    }
    return auVar49;
  }
  pcVar31 = *(code **)(*plVar15 + 0x1a8);
  uVar16 = *(undefined8 *)(*plVar15 + 0x1b0);
  uVar17 = 0;
code_r0x029caf14:
  iVar7 = (*pcVar31)(plVar15,lVar10,lVar19,uVar17,uVar16);
  lVar9 = extraout_x1_05;
code_r0x029caf18:
  uVar14 = (ulong)(iVar7 == 0);
code_r0x029caf20:
  auVar48._8_8_ = lVar9;
  auVar48._0_8_ = uVar14;
  return auVar48;
code_r0x029cafd8:
  iVar7 = /*System.Globalization.TextInfo$$CompareOrdinalIgnoreCase*/ func_0x029e9154(lVar10,lVar19,0);
  lVar9 = extraout_x1_07;
  goto code_r0x029caf18;
  while( true ) {
    plVar15 = plVar15 + 3;
    plVar23 = plVar23 + 3;
    iVar7 = iVar35 + -0xc;
    bVar6 = iVar35 < 0x18;
    iVar35 = iVar7;
    if (bVar6) break;
code_r0x029ca6b0:
    if (((*plVar15 != *plVar23) || (plVar15[1] != plVar23[1])) || (plVar15[2] != plVar23[2]))
    goto code_r0x029ca7ac;
  }
  goto code_r0x029ca774;
code_r0x029ca7ac:
  uVar8 = 0;
  goto code_r0x029ca7b8;
code_r0x029ca948:
  uVar25 = (uint)*(ushort *)((long)puVar26 + 2);
  uVar29 = (uint)*(ushort *)((long)puVar30 + 2);
  goto code_r0x029ca950;
code_r0x029ca9f4:
  uVar16 = *(undefined8 *)(puVar4 + -0x70);
  uVar38 = *(undefined8 *)(puVar4 + -0x68);
  uVar17 = *(undefined8 *)(puVar4 + -0x80);
  uVar34 = *(undefined8 *)(puVar4 + -0x78);
  uVar18 = *(undefined8 *)(puVar4 + -0x90);
  uVar36 = *(undefined8 *)(puVar4 + -0x88);
  puVar4 = puVar4 + -0x60;
  goto System_String__EqualsHelper;
code_r0x029cac8c:
  iVar7 = /*System.Globalization.TextInfo$$CompareOrdinalIgnoreCase*/ func_0x029e9154(lVar19,lVar10,0);
  lVar9 = extraout_x1_03;
  goto code_r0x029cabcc;
  while( true ) {
    if (puVar26[1] != puVar30[1]) goto code_r0x029ca930;
    if (puVar26[2] != puVar30[2]) {
      lVar10 = 8;
      goto code_r0x029ca930;
    }
    if (puVar26[3] != puVar30[3]) {
      lVar10 = 0xc;
      goto code_r0x029ca930;
    }
    if (puVar26[4] != puVar30[4]) {
      lVar10 = 0x10;
      goto code_r0x029ca930;
    }
    puVar26 = puVar26 + 5;
    puVar30 = puVar30 + 5;
    iVar7 = (int)uVar8;
    uVar25 = iVar7 - 10;
    uVar8 = (ulong)uVar25;
    if (iVar7 < 0x14) break;
code_r0x029ca858:
    if (*puVar26 != *puVar30) {
      lVar10 = 0;
code_r0x029ca930:
      puVar26 = (uint *)(lVar10 + (long)puVar26);
      puVar30 = (uint *)(lVar10 + (long)puVar30);
      uVar25 = (uint)(ushort)*puVar26 - (uint)(ushort)*puVar30;
      uVar8 = (ulong)uVar25;
      if (uVar25 != 0) goto code_r0x029ca954;
      goto code_r0x029ca948;
    }
  }
code_r0x029ca8c8:
  if (0 < (int)uVar25) {
    iVar7 = uVar25 + 2;
    do {
      if (*puVar26 != *puVar30) {
        uVar25 = (*puVar26 & 0xffff) - (*puVar30 & 0xffff);
        uVar8 = (ulong)uVar25;
        if (uVar25 == 0) goto code_r0x029ca948;
        goto code_r0x029ca954;
      }
      puVar26 = puVar26 + 1;
      puVar30 = puVar30 + 1;
      iVar7 = iVar7 + -2;
    } while (2 < iVar7);
  }
  uVar25 = *(uint *)(lVar9 + 0x10);
  uVar29 = *(uint *)(lVar19 + 0x10);
code_r0x029ca950:
  uVar8 = (ulong)(uVar25 - uVar29);
code_r0x029ca954:
  auVar42._0_8_ = uVar8;
  return auVar42;
  while( true ) {
    lVar9 = lVar9 + -2;
    puVar27 = puVar32 + 1;
    puVar33 = puVar32;
    if (lVar9 == 0) break;
code_r0x029cac24:
    puVar32 = puVar27;
    if (0x7f < *puVar33) goto code_r0x029cac8c;
  }
  if (iVar7 != 0) {
    puVar27 = (ushort *)(lVar10 + 0x16);
    puVar33 = (ushort *)(lVar10 + 0x14);
    do {
      puVar32 = puVar27;
      if (0x7f < *puVar33) goto code_r0x029cac8c;
      lVar28 = lVar28 + -2;
      puVar27 = puVar32 + 1;
      puVar33 = puVar32;
    } while (lVar28 != 0);
  }
code_r0x029cac68:
  iVar7 = /*System.String$$CompareOrdinalIgnoreCaseHelper*/ func_0x029ca590(lVar19,lVar10);
  lVar9 = extraout_x1_02;
code_r0x029cabcc:
  uVar8 = (ulong)(iVar7 == 0);
code_r0x029cac7c:
  auVar45._8_8_ = lVar9;
  auVar45._0_8_ = uVar8;
  return auVar45;
  while( true ) {
    plVar15 = (long *)((long)plVar15 + 0x14);
    plVar23 = (long *)((long)plVar23 + 0x14);
    iVar7 = iVar35 + -10;
    bVar6 = iVar35 < 0x14;
    iVar35 = iVar7;
    if (bVar6) break;
code_r0x029ca704:
    if ((((int)*plVar15 != (int)*plVar23) ||
        (*(int *)((long)plVar15 + 4) != *(int *)((long)plVar23 + 4))) ||
       (((int)plVar15[1] != (int)plVar23[1] ||
        ((*(int *)((long)plVar15 + 0xc) != *(int *)((long)plVar23 + 0xc) ||
         ((int)plVar15[2] != (int)plVar23[2])))))) goto code_r0x029ca7ac;
  }
code_r0x029ca774:
  if (iVar7 < 1) {
    uVar8 = 1;
  }
  else {
    iVar7 = iVar7 + 2;
    do {
      bVar6 = (int)*plVar15 == (int)*plVar23;
      uVar8 = (ulong)bVar6;
      if (!bVar6) break;
      plVar15 = (long *)((long)plVar15 + 4);
      plVar23 = (long *)((long)plVar23 + 4);
      iVar7 = iVar7 + -2;
    } while (2 < iVar7);
  }
code_r0x029ca7b8:
  auVar41._0_8_ = uVar8;
  return auVar41;
}



