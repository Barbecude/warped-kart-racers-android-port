// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Services.Client

// ============================================================
// RVA: 0x16659c8 | Core.Services.Client.Create
// ============================================================

undefined8 Core_Services_Client__Create(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb589c & 1) == 0) {
    func_0x00f78a20(0x3d22970);
    bRam0000000003eb589c = 1;
  }
  uVar1 = func_0x00f78aec(/*Core.Services.Internal_TypeInfo*/ uRam0000000003d22970);
  /*Core.Services.Internal$$.ctor*/ func_0x01665a1c();
  return uVar1;
}



// ============================================================
// RVA: 0x1665bd0 | Core.Services.Client..ctor
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x166735c | Core.Services.Client.Hash
// ============================================================

/* WARNING: Possible PIC construction at 0x016673e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016673ec) */
/* WARNING: Removing unreachable block (ram,0x01667418) */
/* WARNING: Removing unreachable block (ram,0x01667404) */

undefined8 Core_Services_Client__Hash(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 ****ppppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  long lVar6;
  code *pcVar7;
  undefined **ppuVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined *puStack_2e8;
  long lStack_2e0;
  undefined **ppuStack_2d0;
  long lStack_2c8;
  undefined **ppuStack_2c0;
  undefined8 uStack_2b8;
  undefined8 ***pppuStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined **ppuStack_280;
  long lStack_278;
  undefined **ppuStack_270;
  undefined8 uStack_268;
  undefined8 ***pppuStack_260;
  undefined *puStack_258;
  undefined *puStack_248;
  long lStack_240;
  undefined **ppuStack_230;
  long lStack_228;
  undefined **ppuStack_220;
  undefined8 uStack_218;
  undefined8 ***pppuStack_210;
  undefined *puStack_208;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined **ppuStack_1e0;
  long lStack_1d8;
  undefined **ppuStack_1d0;
  undefined8 uStack_1c8;
  undefined8 ***pppuStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1a8;
  long lStack_1a0;
  undefined **ppuStack_190;
  long lStack_188;
  undefined **ppuStack_180;
  undefined8 uStack_178;
  undefined1 ***pppuStack_170;
  undefined *puStack_168;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined **ppuStack_140;
  long lStack_138;
  undefined **ppuStack_130;
  undefined8 uStack_128;
  undefined1 **ppuStack_120;
  undefined *puStack_118;
  undefined8 ***pppuStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR_03a5d648;
  if ((bRam0000000003eb589e & 1) == 0) {
    func_0x00f78a20(0x3d22970);
    bRam0000000003eb589e = 1;
  }
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  if (((*(byte *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uStack_b8 = uStack_78;
  auStack_c0 = (undefined1  [8])uStack_80;
  uStack_a8 = uStack_68;
  uStack_b0 = uStack_70;
  uStack_98 = uStack_58;
  uStack_a0 = uStack_60;
  uStack_88 = uStack_48;
  uStack_90 = uStack_50;
  uStack_c8 = 0x16673ec;
  puStack_d0 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5982 & 1) == 0) {
    func_0x00f78a20(0x3d22970);
    bRam0000000003eb5982 = 1;
  }
  if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  ppuVar8 = (undefined **)(auStack_c0 + 2);
  uVar1 = _strlen();
  if (uVar1 < 0xfffffffffffffff0) {
    if (uVar1 < 0x17) {
      ppppuVar2 = &pppuStack_108;
      uStack_f8 = CONCAT17((char)uVar1,(undefined7)uStack_f8);
      if (uVar1 == 0) goto code_r0x00ffe9f0;
    }
    else {
      uVar9 = uVar1 + 0x10 & 0xfffffffffffffff0;
      ppppuVar2 = (undefined8 ****)func_0x005237c4(uVar9);
      uStack_f8 = uVar9 | 0x8000000000000000;
      pppuStack_108 = ppppuVar2;
      uStack_100 = uVar1;
    }
    _memcpy(ppppuVar2,ppuVar8,uVar1);
code_r0x00ffe9f0:
    *(undefined1 *)((long)ppppuVar2 + uVar1) = 0;
    uVar3 = func_0x010d9730(&pppuStack_108);
    if ((long)uStack_f8 < 0) {
      func_0x00523aec(pppuStack_108);
    }
    return uVar3;
  }
  uVar3 = __ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv(&pppuStack_108);
  if ((long)uStack_f8 < 0) {
    func_0x00523aec(pppuStack_108);
  }
  uVar4 = __Unwind_Resume(uVar3);
  puStack_118 = &_ServicesLogin;
  lStack_138 = *(long *)PTR_03a5d648;
  ppuStack_130 = ppuVar8;
  uStack_128 = uVar3;
  ppuStack_120 = &puStack_d0;
  if (lRam0000000003ff79e0 == 0) {
    uVar3 = 2;
  }
  else {
    puStack_158 = &UNK_03c66428;
    puStack_150 = &_servicesClient;
    ppuStack_140 = &puStack_158;
    uVar3 = func_0x01004b88(&_servicesClient,uVar4,&puStack_158);
    ppuVar8 = &puStack_158;
    if (&puStack_158 == ppuStack_140) {
      pcVar7 = *(code **)(*ppuStack_140 + 0x20);
    }
    else {
      if (ppuStack_140 == (undefined **)0x0) goto code_r0x00ffead4;
      pcVar7 = *(code **)(*ppuStack_140 + 0x28);
    }
    (*pcVar7)();
  }
code_r0x00ffead4:
  if (*(long *)PTR_03a5d648 == lStack_138) {
    return uVar3;
  }
  uVar3 = ___stack_chk_fail();
  ppuVar5 = ppuStack_140;
  if (ppuVar8 != ppuStack_140) {
    func_0x01222b24();
    ppuVar5 = (undefined **)__Unwind_Resume(uVar3);
  }
  (**(code **)(*ppuVar5 + 0x20))();
  auVar10 = __Unwind_Resume(uVar3);
  lVar6 = auVar10._0_8_;
  puStack_168 = &__ZN4Core8Services6Client5LoginEPv;
  lStack_188 = *(long *)PTR_03a5d648;
  ppuStack_180 = ppuVar8;
  uStack_178 = uVar3;
  pppuStack_170 = &ppuStack_120;
  if (*(long *)(lVar6 + 8) == 0) {
    uVar3 = 2;
  }
  else {
    puStack_1a8 = &UNK_03c66428;
    lStack_1a0 = lVar6;
    ppuStack_190 = &puStack_1a8;
    uVar3 = func_0x01004b88(lVar6,auVar10._8_8_,&puStack_1a8);
    ppuVar8 = &puStack_1a8;
    if (&puStack_1a8 == ppuStack_190) {
      pcVar7 = *(code **)(*ppuStack_190 + 0x20);
    }
    else {
      if (ppuStack_190 == (undefined **)0x0) goto code_r0x00ffebac;
      pcVar7 = *(code **)(*ppuStack_190 + 0x28);
    }
    (*pcVar7)();
  }
code_r0x00ffebac:
  if (*(long *)PTR_03a5d648 == lStack_188) {
    return uVar3;
  }
  uVar3 = ___stack_chk_fail();
  ppuVar5 = ppuStack_190;
  if (ppuVar8 != ppuStack_190) {
    func_0x01222b3c();
    ppuVar5 = (undefined **)__Unwind_Resume(uVar3);
  }
  (**(code **)(*ppuVar5 + 0x20))();
  uVar4 = __Unwind_Resume(uVar3);
  puStack_1b8 = &_ServicesLogout;
  lStack_1d8 = *(long *)PTR_03a5d648;
  ppuStack_1d0 = ppuVar8;
  uStack_1c8 = uVar3;
  pppuStack_1c0 = &pppuStack_170;
  if (lRam0000000003ff79e0 == 0) {
    uVar3 = 2;
  }
  else {
    puStack_1f8 = &UNK_03c66968;
    puStack_1f0 = &_servicesClient;
    ppuStack_1e0 = &puStack_1f8;
    uVar3 = func_0x01004b88(&_servicesClient,uVar4,&puStack_1f8);
    ppuVar8 = &puStack_1f8;
    if (&puStack_1f8 == ppuStack_1e0) {
      pcVar7 = *(code **)(*ppuStack_1e0 + 0x20);
    }
    else {
      if (ppuStack_1e0 == (undefined **)0x0) goto code_r0x00ffec94;
      pcVar7 = *(code **)(*ppuStack_1e0 + 0x28);
    }
    (*pcVar7)();
  }
code_r0x00ffec94:
  if (*(long *)PTR_03a5d648 == lStack_1d8) {
    return uVar3;
  }
  uVar3 = ___stack_chk_fail();
  ppuVar5 = ppuStack_1e0;
  if (ppuVar8 != ppuStack_1e0) {
    func_0x01222b54();
    ppuVar5 = (undefined **)__Unwind_Resume(uVar3);
  }
  (**(code **)(*ppuVar5 + 0x20))();
  auVar10 = __Unwind_Resume(uVar3);
  lVar6 = auVar10._0_8_;
  puStack_208 = &__ZN4Core8Services6Client6LogoutEPv;
  lStack_228 = *(long *)PTR_03a5d648;
  ppuStack_220 = ppuVar8;
  uStack_218 = uVar3;
  pppuStack_210 = &pppuStack_1c0;
  if (*(long *)(lVar6 + 8) == 0) {
    uVar3 = 2;
  }
  else {
    puStack_248 = &UNK_03c66968;
    lStack_240 = lVar6;
    ppuStack_230 = &puStack_248;
    uVar3 = func_0x01004b88(lVar6,auVar10._8_8_,&puStack_248);
    ppuVar8 = &puStack_248;
    if (&puStack_248 == ppuStack_230) {
      pcVar7 = *(code **)(*ppuStack_230 + 0x20);
    }
    else {
      if (ppuStack_230 == (undefined **)0x0) goto code_r0x00ffed6c;
      pcVar7 = *(code **)(*ppuStack_230 + 0x28);
    }
    (*pcVar7)();
  }
code_r0x00ffed6c:
  if (*(long *)PTR_03a5d648 == lStack_228) {
    return uVar3;
  }
  uVar3 = ___stack_chk_fail();
  ppuVar5 = ppuStack_230;
  if (ppuVar8 != ppuStack_230) {
    func_0x01222b6c();
    ppuVar5 = (undefined **)__Unwind_Resume(uVar3);
  }
  (**(code **)(*ppuVar5 + 0x20))();
  uVar4 = __Unwind_Resume(uVar3);
  puStack_258 = &_ServicesGetGroup;
  lStack_278 = *(long *)PTR_03a5d648;
  ppuStack_270 = ppuVar8;
  uStack_268 = uVar3;
  pppuStack_260 = &pppuStack_210;
  if (lRam0000000003ff79e0 == 0) {
    uVar3 = 2;
  }
  else {
    puStack_298 = &UNK_03c5f178;
    puStack_290 = &_servicesClient;
    ppuStack_280 = &puStack_298;
    uVar3 = func_0x01004b88(&_servicesClient,uVar4,&puStack_298);
    ppuVar8 = &puStack_298;
    if (&puStack_298 == ppuStack_280) {
      pcVar7 = *(code **)(*ppuStack_280 + 0x20);
    }
    else {
      if (ppuStack_280 == (undefined **)0x0) goto code_r0x00ffee54;
      pcVar7 = *(code **)(*ppuStack_280 + 0x28);
    }
    (*pcVar7)();
  }
code_r0x00ffee54:
  if (*(long *)PTR_03a5d648 == lStack_278) {
    return uVar3;
  }
  uVar3 = ___stack_chk_fail();
  ppuVar5 = ppuStack_280;
  if (ppuVar8 != ppuStack_280) {
    func_0x01222b84();
    ppuVar5 = (undefined **)__Unwind_Resume(uVar3);
  }
  (**(code **)(*ppuVar5 + 0x20))();
  auVar10 = __Unwind_Resume(uVar3);
  lVar6 = auVar10._0_8_;
  puStack_2a8 = &__ZN4Core8Services6Client8GetGroupEPv;
  lStack_2c8 = *(long *)PTR_03a5d648;
  ppuStack_2c0 = ppuVar8;
  uStack_2b8 = uVar3;
  pppuStack_2b0 = &pppuStack_260;
  if (*(long *)(lVar6 + 8) == 0) {
    uVar3 = 2;
  }
  else {
    puStack_2e8 = &UNK_03c5f178;
    lStack_2e0 = lVar6;
    ppuStack_2d0 = &puStack_2e8;
    uVar3 = func_0x01004b88(lVar6,auVar10._8_8_,&puStack_2e8);
    ppuVar8 = &puStack_2e8;
    if (&puStack_2e8 == ppuStack_2d0) {
      pcVar7 = *(code **)(*ppuStack_2d0 + 0x20);
    }
    else {
      if (ppuStack_2d0 == (undefined **)0x0) goto code_r0x00ffef2c;
      pcVar7 = *(code **)(*ppuStack_2d0 + 0x28);
    }
    (*pcVar7)();
  }
code_r0x00ffef2c:
  if (*(long *)PTR_03a5d648 == lStack_2c8) {
    return uVar3;
  }
  uVar3 = ___stack_chk_fail();
  ppuVar5 = ppuStack_2d0;
  if (ppuVar8 != ppuStack_2d0) {
    func_0x01222b9c();
    ppuVar5 = (undefined **)__Unwind_Resume(uVar3);
  }
  (**(code **)(*ppuVar5 + 0x20))();
  __Unwind_Resume(uVar3);
  if (lRam0000000003ff79e0 == 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00ffefa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(**(long **)(lRam0000000003ff79e0 + 0x10) + 0x30))();
  return uVar3;
}



