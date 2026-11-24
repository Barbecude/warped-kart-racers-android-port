// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Outlines.OutlineFeature.OutlinePass

// ============================================================
// RVA: 0x145c734 | Atlas.Outlines.OutlineFeature.OutlinePass..ctor
// ============================================================

void Atlas_Outlines_OutlineFeature_OutlinePass___ctor
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb47f7 & 1) == 0) {
    func_0x00f78a20(0x3d23e80);
    func_0x00f78a20(0x3d70da0);
    bRam0000000003eb47f7 = 1;
  }
  /*UnityEngine.Rendering.Universal.ScriptableRenderPass$$.ctor*/ func_0x0313f0a0(param_1,0);
  *(undefined8 *)(param_1 + 0x100) = param_2;
  *(undefined8 *)(param_1 + 0x108) = param_3;
  uVar1 = func_0x00f78aec(/*UnityEngine.Rendering.ProfilingSampler_TypeInfo*/ uRam0000000003d23e80);
  /*UnityEngine.Rendering.ProfilingSampler$$.ctor*/ func_0x030f6e90(uVar1,/*STR('Outline Final Render Pass')*/ uRam0000000003d70da0,0);
  *(undefined8 *)(param_1 + 0x110) = uVar1;
  return;
}



// ============================================================
// RVA: 0x145cedc | Atlas.Outlines.OutlineFeature.OutlinePass.Setup
// ============================================================

void Atlas_Outlines_OutlineFeature_OutlinePass__Setup
               (long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  *(undefined8 *)(param_1 + 0xa0) = param_2[4];
  *(undefined8 *)(param_1 + 0x88) = uVar2;
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  *(undefined8 *)(param_1 + 0x98) = uVar4;
  *(undefined8 *)(param_1 + 0x90) = uVar3;
  uVar2 = param_3[1];
  uVar1 = *param_3;
  uVar4 = param_3[3];
  uVar3 = param_3[2];
  *(undefined8 *)(param_1 + 200) = param_3[4];
  *(undefined8 *)(param_1 + 0xc0) = uVar4;
  *(undefined8 *)(param_1 + 0xb8) = uVar3;
  *(undefined8 *)(param_1 + 0xb0) = uVar2;
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  return;
}



// ============================================================
// RVA: 0x145dcc4 | Atlas.Outlines.OutlineFeature.OutlinePass.Configure
// ============================================================

void Atlas_Outlines_OutlineFeature_OutlinePass__Configure(void)

{
  return;
}



// ============================================================
// RVA: 0x145dcc8 | Atlas.Outlines.OutlineFeature.OutlinePass.Execute
// ============================================================

void Atlas_Outlines_OutlineFeature_OutlinePass__Execute
               (long param_1,undefined8 param_2,long param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
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
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  uStack_48 = param_2;
  if ((bRam0000000003eb47f8 & 1) == 0) {
    func_0x00f78a20(0x3d20878);
    func_0x00f78a20(0x3d243a8);
    func_0x00f78a20(0x3d70da0);
    bRam0000000003eb47f8 = 1;
  }
  auStack_50[0] = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  if (((*(byte *)(/*UnityEngine.Rendering.CommandBufferPool_TypeInfo*/ lRam0000000003d20878 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Rendering.CommandBufferPool_TypeInfo*/ lRam0000000003d20878 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar3 = /*UnityEngine.Rendering.CommandBufferPool$$Get*/ func_0x030df67c(/*STR('Outline Final Render Pass')*/ uRam0000000003d70da0,0);
  /*UnityEngine.Rendering.ProfilingScope$$.ctor*/ func_0x030f72ec(auStack_50,lVar3,*(undefined8 *)(param_1 + 0x110),0);
  uStack_e8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_f0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_d8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_e0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_d0 = *(undefined8 *)(param_1 + 200);
  if (((*(byte *)(/*UnityEngine.Rendering.Universal.RenderTargetHandle_TypeInfo*/ lRam0000000003d243a8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Rendering.Universal.RenderTargetHandle_TypeInfo*/ lRam0000000003d243a8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar5 = *(undefined8 **)(/*UnityEngine.Rendering.Universal.RenderTargetHandle_TypeInfo*/ lRam0000000003d243a8 + 0xb8);
  uStack_68 = puVar5[3];
  uStack_70 = puVar5[2];
  uStack_58 = puVar5[5];
  uStack_60 = puVar5[4];
  uStack_78 = puVar5[1];
  uStack_80 = *puVar5;
  /*UnityEngine.Rendering.Universal.RenderTargetHandle$$Identifier*/ func_0x03143f30(&uStack_118,&uStack_80,0);
  uStack_168 = uStack_110;
  uStack_170 = uStack_118;
  uStack_158 = uStack_100;
  uStack_160 = uStack_108;
  uStack_150 = uStack_f8;
  uStack_138 = uStack_e8;
  uStack_140 = uStack_f0;
  uStack_128 = uStack_d8;
  uStack_130 = uStack_e0;
  uStack_120 = uStack_d0;
  uVar4 = /*UnityEngine.Rendering.RenderTargetIdentifier$$op_Equality*/ func_0x03259874(&uStack_140,&uStack_170,0);
  if ((uVar4 & 1) == 0) {
    uStack_298 = *(undefined8 *)(param_1 + 0x88);
    uStack_2a0 = *(undefined8 *)(param_1 + 0x80);
    uStack_288 = *(undefined8 *)(param_1 + 0x98);
    uStack_290 = *(undefined8 *)(param_1 + 0x90);
    uStack_280 = *(undefined8 *)(param_1 + 0xa0);
    uStack_2c8 = *(undefined8 *)(param_1 + 0xb0);
    uStack_2d0 = *(undefined8 *)(param_1 + 0xa8);
    uStack_2b8 = *(undefined8 *)(param_1 + 0xc0);
    uStack_2c0 = *(undefined8 *)(param_1 + 0xb8);
    uStack_2b0 = *(undefined8 *)(param_1 + 200);
    /*UnityEngine.Rendering.Universal.ScriptableRenderPass$$Blit*/ func_0x0314b90c(param_1,lVar3,&uStack_2a0,&uStack_2d0,*(undefined8 *)(param_1 + 0x100),0,0);
  }
  else {
    uStack_b8 = *(undefined8 *)(param_3 + 0xb0);
    uStack_c0 = *(undefined8 *)(param_3 + 0xa8);
    uStack_a8 = *(undefined8 *)(param_3 + 0xc0);
    uStack_b0 = *(undefined8 *)(param_3 + 0xb8);
    uStack_98 = *(undefined8 *)(param_3 + 0xd0);
    uStack_a0 = *(undefined8 *)(param_3 + 200);
    uStack_90 = *(undefined4 *)(param_3 + 0xd8);
    /*UnityEngine.RenderTextureDescriptor$$set_depthBufferBits*/ func_0x0325b5e8(&uStack_c0,0,0);
    if (lVar3 == 0) goto LAB_0145dfec;
    puVar1 = (undefined4 *)(param_1 + 0xd0);
    uStack_1a8 = uStack_b8;
    uStack_1b0 = uStack_c0;
    uStack_198 = uStack_a8;
    uStack_1a0 = uStack_b0;
    uStack_188 = uStack_98;
    uStack_190 = uStack_a0;
    uStack_180 = uStack_90;
    /*UnityEngine.Rendering.CommandBuffer$$GetTemporaryRT*/ func_0x032248d4(lVar3,*puVar1,&uStack_1b0,1,0);
    uStack_e8 = *(undefined8 *)(param_1 + 0x88);
    uStack_f0 = *(undefined8 *)(param_1 + 0x80);
    uStack_d8 = *(undefined8 *)(param_1 + 0x98);
    uStack_e0 = *(undefined8 *)(param_1 + 0x90);
    uStack_d0 = *(undefined8 *)(param_1 + 0xa0);
    /*UnityEngine.Rendering.Universal.RenderTargetHandle$$Identifier*/ func_0x03143f30(&uStack_118,puVar1,0);
    uStack_208 = uStack_110;
    uStack_210 = uStack_118;
    uStack_1f8 = uStack_100;
    uStack_200 = uStack_108;
    uStack_1f0 = uStack_f8;
    uStack_1d8 = uStack_e8;
    uStack_1e0 = uStack_f0;
    uStack_1c8 = uStack_d8;
    uStack_1d0 = uStack_e0;
    uStack_1c0 = uStack_d0;
    /*UnityEngine.Rendering.Universal.ScriptableRenderPass$$Blit*/ func_0x0314b90c(param_1,lVar3,&uStack_1e0,&uStack_210,*(undefined8 *)(param_1 + 0x100),0,0);
    /*UnityEngine.Rendering.Universal.RenderTargetHandle$$Identifier*/ func_0x03143f30(&uStack_118,puVar1,0);
    uStack_238 = uStack_110;
    uStack_240 = uStack_118;
    uStack_228 = uStack_100;
    uStack_230 = uStack_108;
    uStack_220 = uStack_f8;
    uStack_268 = *(undefined8 *)(param_1 + 0x88);
    uStack_270 = *(undefined8 *)(param_1 + 0x80);
    uStack_258 = *(undefined8 *)(param_1 + 0x98);
    uStack_260 = *(undefined8 *)(param_1 + 0x90);
    uStack_250 = *(undefined8 *)(param_1 + 0xa0);
    /*UnityEngine.Rendering.Universal.ScriptableRenderPass$$Blit*/ func_0x0314b90c(param_1,lVar3,&uStack_240,&uStack_270,0,0,0);
  }
  /*UnityEngine.Rendering.ProfilingScope$$Dispose*/ func_0x030f72f0(auStack_50,0);
  /*UnityEngine.Rendering.ScriptableRenderContext$$ExecuteCommandBuffer*/ func_0x03260a3c(&uStack_48,lVar3,0);
  if (lVar3 != 0) {
    /*UnityEngine.Rendering.CommandBuffer$$Clear*/ func_0x03224170(lVar3,0);
    if (((*(ushort *)(/*UnityEngine.Rendering.CommandBufferPool_TypeInfo*/ lRam0000000003d20878 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Rendering.CommandBufferPool_TypeInfo*/ lRam0000000003d20878 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*UnityEngine.Rendering.CommandBufferPool$$Release*/ func_0x030df728(lVar3,0);
    return;
  }
  func_0x00f78af4();
LAB_0145dfec:
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x145dff4);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x145e04c | Atlas.Outlines.OutlineFeature.OutlinePass.FrameCleanup
// ============================================================

void Atlas_Outlines_OutlineFeature_OutlinePass__FrameCleanup(long param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int extraout_w1;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  undefined1 auVar13 [16];
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined1 auStack_738 [8];
  undefined8 uStack_730;
  undefined1 auStack_728 [312];
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  long lStack_370;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_200;
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
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000003eb47f9 & 1) == 0) {
    func_0x00f78a20(0x3d243a8);
    bRam0000000003eb47f9 = 1;
  }
  uStack_98 = *(undefined8 *)(param_1 + 0xb0);
  uStack_a0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_88 = *(undefined8 *)(param_1 + 0xc0);
  uStack_90 = *(undefined8 *)(param_1 + 0xb8);
  uStack_80 = *(undefined8 *)(param_1 + 200);
  if (((*(byte *)(/*UnityEngine.Rendering.Universal.RenderTargetHandle_TypeInfo*/ lRam0000000003d243a8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Rendering.Universal.RenderTargetHandle_TypeInfo*/ lRam0000000003d243a8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar7 = *(undefined8 **)(/*UnityEngine.Rendering.Universal.RenderTargetHandle_TypeInfo*/ lRam0000000003d243a8 + 0xb8);
  uStack_58 = puVar7[3];
  uStack_60 = puVar7[2];
  uStack_48 = puVar7[5];
  uStack_50 = puVar7[4];
  uStack_68 = puVar7[1];
  uStack_70 = *puVar7;
  /*UnityEngine.Rendering.Universal.RenderTargetHandle$$Identifier*/ func_0x03143f30(&uStack_c8,&uStack_70,0);
  uStack_e8 = uStack_98;
  uStack_f0 = uStack_a0;
  uStack_d8 = uStack_88;
  uStack_e0 = uStack_90;
  uStack_d0 = uStack_80;
  uStack_118 = uStack_c0;
  uStack_120 = uStack_c8;
  uStack_108 = uStack_b0;
  uStack_110 = uStack_b8;
  uStack_100 = uStack_a8;
  iVar2 = /*UnityEngine.Rendering.RenderTargetIdentifier$$op_Equality*/ func_0x03259874(&uStack_f0,&uStack_120,0);
  if (iVar2 != 0) {
    if (param_2 == 0) {
      lVar3 = func_0x00f78af4();
      uStack_178 = *(undefined8 *)(lVar3 + 400);
      uStack_180 = *(undefined8 *)(lVar3 + 0x188);
      uStack_168 = *(undefined8 *)(lVar3 + 0x1a0);
      uStack_170 = *(undefined8 *)(lVar3 + 0x198);
      uStack_160 = *(undefined8 *)(lVar3 + 0x1a8);
      uStack_1a8 = *(undefined8 *)(lVar3 + 400);
      uStack_1b0 = *(undefined8 *)(lVar3 + 0x188);
      uStack_198 = *(undefined8 *)(lVar3 + 0x1a0);
      uStack_1a0 = *(undefined8 *)(lVar3 + 0x198);
      uStack_190 = *(undefined8 *)(lVar3 + 0x1a8);
      /*UnityEngine.Rendering.RenderTargetIdentifier$$op_Implicit*/ func_0x03259324(&uStack_1d8,0,0);
      uStack_1f8 = uStack_1a8;
      uStack_200 = uStack_1b0;
      uStack_1e8 = uStack_198;
      uStack_1f0 = uStack_1a0;
      uStack_1e0 = uStack_190;
      uStack_228 = uStack_1d0;
      uStack_230 = uStack_1d8;
      uStack_218 = uStack_1c0;
      uStack_220 = uStack_1c8;
      uStack_210 = uStack_1b8;
      puVar7 = (undefined8 *)0x0;
      iVar2 = /*UnityEngine.Rendering.RenderTargetIdentifier$$op_Equality*/ func_0x03259874(&uStack_200,&uStack_230);
      if (iVar2 != 0) {
        if (*(long *)(lVar3 + 0x1b0) == 0) {
          auVar13 = func_0x00f78af4();
          uStack_730 = auVar13._8_8_;
          lVar3 = auVar13._0_8_;
          lStack_370 = *(long *)PTR_03a5d648;
          if ((bRam0000000003eb47fb & 1) == 0) {
            func_0x00f78a20(0x3d20878);
            func_0x00f78a20(0x3d70da8);
            bRam0000000003eb47fb = 1;
          }
          auStack_738[0] = 0;
          uStack_750 = 0;
          uStack_748 = 0;
          uStack_740 = 0;
          uStack_380 = 0;
          uStack_398 = 0;
          uStack_3a0 = 0;
          uStack_388 = 0;
          uStack_390 = 0;
          uStack_3b8 = 0;
          uStack_3c0 = 0;
          uStack_3a8 = 0;
          uStack_3b0 = 0;
          uStack_3d8 = 0;
          uStack_3e0 = 0;
          uStack_3c8 = 0;
          uStack_3d0 = 0;
          uStack_3f8 = 0;
          uStack_400 = 0;
          uStack_3e8 = 0;
          uStack_3f0 = 0;
          uStack_418 = 0;
          uStack_420 = 0;
          uStack_408 = 0;
          uStack_410 = 0;
          uStack_438 = 0;
          uStack_440 = 0;
          uStack_428 = 0;
          uStack_430 = 0;
          uStack_458 = 0;
          uStack_460 = 0;
          uStack_448 = 0;
          uStack_450 = 0;
          uStack_478 = 0;
          uStack_480 = 0;
          uStack_468 = 0;
          uStack_470 = 0;
          uStack_498 = 0;
          uStack_4a0 = 0;
          uStack_488 = 0;
          uStack_490 = 0;
          uStack_4a8 = 0;
          uStack_4b0 = 0;
          uStack_4c0 = 0;
          uStack_4d8 = 0;
          uStack_4e0 = 0;
          uStack_4c8 = 0;
          uStack_4d0 = 0;
          uStack_4f8 = 0;
          uStack_500 = 0;
          uStack_4e8 = 0;
          uStack_4f0 = 0;
          uStack_518 = 0;
          uStack_520 = 0;
          uStack_508 = 0;
          uStack_510 = 0;
          uStack_538 = 0;
          uStack_540 = 0;
          uStack_528 = 0;
          uStack_530 = 0;
          uStack_558 = 0;
          uStack_560 = 0;
          uStack_548 = 0;
          uStack_550 = 0;
          uStack_578 = 0;
          uStack_580 = 0;
          uStack_568 = 0;
          uStack_570 = 0;
          uStack_598 = 0;
          uStack_5a0 = 0;
          uStack_588 = 0;
          uStack_590 = 0;
          uStack_5b8 = 0;
          uStack_5c0 = 0;
          uStack_5a8 = 0;
          uStack_5b0 = 0;
          uStack_5d8 = 0;
          uStack_5e0 = 0;
          uStack_5c8 = 0;
          uStack_5d0 = 0;
          uStack_5e8 = 0;
          uStack_5f0 = 0;
          if (((*(ushort *)(/*UnityEngine.Rendering.CommandBufferPool_TypeInfo*/ lRam0000000003d20878 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Rendering.CommandBufferPool_TypeInfo*/ lRam0000000003d20878 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar4 = /*UnityEngine.Rendering.CommandBufferPool$$Get*/ func_0x030df67c(/*STR('Outline Prepare Texture')*/ uRam0000000003d70da8,0);
          /*UnityEngine.Rendering.ProfilingScope$$.ctor*/ func_0x030f72ec(auStack_738,lVar4,*(undefined8 *)(lVar3 + 0x90),0);
          lVar9 = *(long *)(lVar3 + 0x80);
          if (lVar9 == 0) {
            func_0x00f78af4();
code_r0x0145e618:
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x145e61c);
            (*pcVar1)();
          }
          if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
            uVar10 = 0;
            uVar12 = *(undefined4 *)((long)puVar7 + 0x10c);
            uVar8 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
            puVar11 = (undefined8 *)(lVar9 + 0x20);
            do {
              if (uVar8 <= uVar10) {
                uVar6 = func_0x00f78b24();
                func_0x00f78ac0(uVar6,0);
                goto code_r0x0145e618;
              }
              uStack_748 = puVar11[1];
              uStack_750 = *puVar11;
              uStack_740 = puVar11[2];
              if ((*(float *)(lVar3 + 0x88) == 1.0) && (*(char *)(lVar3 + 0x8c) == '\0')) {
                /*UnityEngine.Rendering.Universal.ScriptableRenderPass$$CreateDrawingSettings*/ func_0x031410d4(auStack_728,lVar3,*(undefined8 *)(lVar3 + 0x98),puVar7,uVar12,0);
                _memcpy(&uStack_4b0,auStack_728,0x138);
                /*UnityEngine.Rendering.ScriptableRenderContext$$DrawRenderers*/ func_0x0326065c(&uStack_730,*puVar7,puVar7[1],&uStack_4b0,&uStack_750,lVar3 + 0xa8,0
                               );
              }
              else {
                /*UnityEngine.Rendering.Universal.ScriptableRenderPass$$CreateDrawingSettings*/ func_0x031410d4(auStack_728,lVar3,*(undefined8 *)(lVar3 + 0xa0),puVar7,uVar12,0);
                _memcpy(&uStack_5f0,auStack_728,0x138);
                /*UnityEngine.Rendering.ScriptableRenderContext$$DrawRenderers*/ func_0x0326065c(&uStack_730,*puVar7,puVar7[1],&uStack_5f0,&uStack_750,lVar3 + 0x114,
                                0);
              }
              uVar10 = uVar10 + 1;
              uVar8 = (ulong)*(uint *)(lVar9 + 0x18);
              puVar11 = puVar11 + 3;
            } while ((long)uVar10 < (long)(int)*(uint *)(lVar9 + 0x18));
          }
          /*UnityEngine.Rendering.ProfilingScope$$Dispose*/ func_0x030f72f0(auStack_738,0);
          do {
            /*UnityEngine.Rendering.ScriptableRenderContext$$ExecuteCommandBuffer*/ func_0x03260a3c(&uStack_730,lVar4,0);
            if (lVar4 == 0) {
              func_0x00f78af4();
            }
            else {
              /*UnityEngine.Rendering.CommandBuffer$$Clear*/ func_0x03224170(lVar4,0);
              if (((*(ushort *)(/*UnityEngine.Rendering.CommandBufferPool_TypeInfo*/ lRam0000000003d20878 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Rendering.CommandBufferPool_TypeInfo*/ lRam0000000003d20878 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              /*UnityEngine.Rendering.CommandBufferPool$$Release*/ func_0x030df728(lVar4,0);
              if (*(long *)PTR_03a5d648 == lStack_370) {
                return;
              }
            }
            ___stack_chk_fail();
            if (extraout_w1 != 1) goto code_r0x0145e668;
            plVar5 = (long *)___cxa_begin_catch();
            lVar3 = *plVar5;
            ___cxa_end_catch();
            /*UnityEngine.Rendering.ProfilingScope$$Dispose*/ func_0x030f72f0(auStack_738,0);
          } while (lVar3 == 0);
          func_0x00f78ac0(lVar3,0);
code_r0x0145e668:
          __Unwind_Resume();
          return;
        }
        /*UnityEngine.Rendering.Universal.ScriptableRenderer$$get_cameraDepthTarget*/ func_0x0314cdb0(&uStack_180,*(long *)(lVar3 + 0x1b0),0);
      }
      if ((*(float *)(lVar3 + 0x88) == 1.0) && (*(char *)(lVar3 + 0x8c) == '\0')) {
        /*UnityEngine.Rendering.RenderTargetIdentifier$$op_Implicit*/ func_0x032593ec(&uStack_1b0,*(undefined8 *)(lVar3 + 0x180),0);
        uStack_288 = uStack_178;
        uStack_290 = uStack_180;
        uStack_278 = uStack_168;
        uStack_280 = uStack_170;
        uStack_270 = uStack_160;
        uStack_258 = uStack_1a8;
        uStack_260 = uStack_1b0;
        uStack_248 = uStack_198;
        uStack_250 = uStack_1a0;
        uStack_240 = uStack_190;
        /*UnityEngine.Rendering.Universal.ScriptableRenderPass$$ConfigureTarget*/ func_0x03145358(lVar3,&uStack_260,&uStack_290,0);
        if (*(char *)(lVar3 + 0x1b8) == '\0') {
          uVar12 = 0x3f800000;
        }
        else {
          uVar12 = 0;
        }
        uStack_1a8 = 0;
        uStack_1b0 = 0;
        /*UnityEngine.Color$$.ctor*/ func_0x03222f84(0,0,0,uVar12,&uStack_1b0,0);
        uVar6 = 1;
      }
      else {
        /*UnityEngine.Rendering.RenderTargetIdentifier$$op_Implicit*/ func_0x032593ec(&uStack_1b0,*(undefined8 *)(lVar3 + 0x180),0);
        uStack_2e8 = uStack_178;
        uStack_2f0 = uStack_180;
        uStack_2d8 = uStack_168;
        uStack_2e0 = uStack_170;
        uStack_2d0 = uStack_160;
        uStack_2b8 = uStack_1a8;
        uStack_2c0 = uStack_1b0;
        uStack_2a8 = uStack_198;
        uStack_2b0 = uStack_1a0;
        uStack_2a0 = uStack_190;
        /*UnityEngine.Rendering.Universal.ScriptableRenderPass$$ConfigureTarget*/ func_0x03145358(lVar3,&uStack_2c0,&uStack_2f0,0);
        if (*(char *)(lVar3 + 0x1b8) == '\0') {
          uVar12 = 0x3f800000;
        }
        else {
          uVar12 = 0;
        }
        uStack_1a8 = 0;
        uStack_1b0 = 0;
        /*UnityEngine.Color$$.ctor*/ func_0x03222f84(0,0,0,uVar12,&uStack_1b0,0);
        uVar6 = 3;
      }
      /*UnityEngine.Rendering.Universal.ScriptableRenderPass$$ConfigureClear*/ func_0x0314b45c((undefined4)uStack_1b0,uStack_1b0._4_4_,(undefined4)uStack_1a8,
                      uStack_1a8._4_4_,lVar3,uVar6,0);
      return;
    }
    /*UnityEngine.Rendering.CommandBuffer$$ReleaseTemporaryRT*/ func_0x032249d0(param_2,*(undefined4 *)(param_1 + 0xd0),0);
  }
  return;
}



