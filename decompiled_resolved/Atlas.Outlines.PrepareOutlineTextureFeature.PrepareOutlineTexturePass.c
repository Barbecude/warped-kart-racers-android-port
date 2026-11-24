// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Outlines.PrepareOutlineTextureFeature.PrepareOutlineTexturePass

// ============================================================
// RVA: 0x145d0ec | Atlas.Outlines.PrepareOutlineTextureFeature.PrepareOutlineTexturePass..ctor
// ============================================================

void Atlas_Outlines_PrepareOutlineTextureFeature_PrepareOutlineTexturePass___ctor
               (undefined4 param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_388 [472];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  undefined4 uStack_178;
  undefined2 uStack_172;
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
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined8 uStack_10c;
  undefined2 uStack_102;
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
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  undefined4 auStack_90 [2];
  undefined4 auStack_88 [6];
  
  if ((bRam0000000003eb47fa & 1) == 0) {
    func_0x00f78a20(0x3d55c40);
    func_0x00f78a20(0x3d55e18);
    func_0x00f78a20(0x3d35910);
    func_0x00f78a20(0x3d1cbd0);
    func_0x00f78a20(0x3d3be38);
    func_0x00f78a20(0x3d3be30);
    func_0x00f78a20(0x3d1dde8);
    func_0x00f78a20(0x3d23e80);
    func_0x00f78a20(0x3d64cd8);
    func_0x00f78a20(0x3d29b70);
    func_0x00f78a20(0x3d70db8);
    func_0x00f78a20(0x3d70db0);
    func_0x00f78a20(0x3d70da8);
    bRam0000000003eb47fa = 1;
  }
  *(undefined4 *)(param_2 + 0x88) = 0x3f800000;
  /*UnityEngine.Rendering.Universal.ScriptableRenderPass$$.ctor*/ func_0x0313f0a0(param_2,0);
  uVar1 = func_0x00f78aec(/*UnityEngine.Rendering.ProfilingSampler_TypeInfo*/ uRam0000000003d23e80);
  /*UnityEngine.Rendering.ProfilingSampler$$.ctor*/ func_0x030f6e90(uVar1,/*STR('Outline Prepare Texture')*/ uRam0000000003d70da8,0);
  *(undefined8 *)(param_2 + 0x90) = uVar1;
  uStack_178 = param_4;
  if (((*(ushort *)(/*Atlas.Outlines.PrepareOutlineTextureFeature.PrepareOutlineTexturePass.<>c_TypeInfo*/ lRam0000000003d29b70 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Outlines.PrepareOutlineTextureFeature.PrepareOutlineTexturePass.<>c_TypeInfo*/ lRam0000000003d29b70 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = 0x3d55e18;
  puVar2 = *(undefined8 **)(/*Atlas.Outlines.PrepareOutlineTextureFeature.PrepareOutlineTexturePass.<>c_TypeInfo*/ lRam0000000003d29b70 + 0xb8);
  lVar3 = puVar2[1];
  if (lVar3 == 0) {
    if (((*(ushort *)(/*Atlas.Outlines.PrepareOutlineTextureFeature.PrepareOutlineTexturePass.<>c_TypeInfo*/ lRam0000000003d29b70 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Outlines.PrepareOutlineTextureFeature.PrepareOutlineTexturePass.<>c_TypeInfo*/ lRam0000000003d29b70 + 0xe0) == 0)) {
      func_0x00f78ad0();
      puVar2 = *(undefined8 **)(/*Atlas.Outlines.PrepareOutlineTextureFeature.PrepareOutlineTexturePass.<>c_TypeInfo*/ lRam0000000003d29b70 + 0xb8);
    }
    uVar4 = *puVar2;
    lVar3 = func_0x00f78aec(/*System.Func<OutlineLayerMaterialMapping, PrepareOutlineTextureFeature.FilterMaterialPair>_TypeInfo*/ uRam0000000003d1cbd0);
    /*System.Func<OutlineLayerMaterialMapping, PrepareOutlineTextureFeature.FilterMaterialPair>$$.ctor*/ func_0x0217b120(lVar3,uVar4,uRam0000000003d64cd8,uRam0000000003d35910);
    *(long *)(*(long *)(/*Atlas.Outlines.PrepareOutlineTextureFeature.PrepareOutlineTexturePass.<>c_TypeInfo*/ lRam0000000003d29b70 + 0xb8) + 8) = lVar3;
  }
  uVar4 = /*System.Linq.Enumerable$$Select<OutlineLayerMaterialMapping, PrepareOutlineTextureFeature.FilterMaterialPair>*/ func_0x01852038(param_3,lVar3,uRam0000000003d55c40);
  uVar4 = /*System.Linq.Enumerable$$ToArray<PrepareOutlineTextureFeature.FilterMaterialPair>*/ func_0x018547b0(uVar4,uRam0000000003d55e18);
  *(undefined8 *)(param_2 + 0x80) = uVar4;
  lVar3 = func_0x00f78aec(/*System.Collections.Generic.List<ShaderTagId>_TypeInfo*/ uRam0000000003d1dde8);
  /*System.Collections.Generic.List<ShaderTagId>$$.ctor*/ func_0x0245a574(lVar3,uRam0000000003d3be30);
  auStack_88[0] = 0;
  uVar4 = 0;
  /*UnityEngine.Rendering.ShaderTagId$$.ctor*/ func_0x03260d44(auStack_88,/*STR('OutlineData')*/ uRam0000000003d70db0,0);
  if (lVar3 != 0) {
    uVar1 = 0x3d3be38;
    /*System.Collections.Generic.List<ShaderTagId>$$Add*/ func_0x0245b22c(lVar3,auStack_88[0],uRam0000000003d3be38);
    *(long *)(param_2 + 0x98) = lVar3;
    lVar3 = func_0x00f78aec(/*System.Collections.Generic.List<ShaderTagId>_TypeInfo*/ uRam0000000003d1dde8);
    /*System.Collections.Generic.List<ShaderTagId>$$.ctor*/ func_0x0245a574(lVar3,uRam0000000003d3be30);
    auStack_90[0] = 0;
    uVar4 = 0;
    /*UnityEngine.Rendering.ShaderTagId$$.ctor*/ func_0x03260d44(auStack_90,/*STR('OutlineDataScale')*/ uRam0000000003d70db8,0);
    if (lVar3 != 0) {
      /*System.Collections.Generic.List<ShaderTagId>$$Add*/ func_0x0245b22c(lVar3,auStack_90[0],uRam0000000003d3be38);
      *(long *)(param_2 + 0xa0) = lVar3;
      uStack_9c = 0;
      uStack_a0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_a4 = 0;
      uStack_b0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      /*UnityEngine.Rendering.RenderStateBlock$$.ctor*/ func_0x03258a6c(&uStack_100,4,0);
      *(undefined8 *)(param_2 + 0xe0) = uStack_c8;
      *(undefined8 *)(param_2 + 0xd8) = uStack_d0;
      *(undefined8 *)(param_2 + 0xf0) = uStack_b8;
      *(undefined8 *)(param_2 + 0xe8) = uStack_c0;
      *(ulong *)(param_2 + 0x100) = CONCAT44(uStack_a4,uStack_a8);
      *(undefined8 *)(param_2 + 0xf8) = uStack_b0;
      *(undefined8 *)(param_2 + 0x10c) = uStack_9c;
      *(ulong *)(param_2 + 0x104) = CONCAT44(uStack_a0,uStack_a4);
      *(undefined8 *)(param_2 + 0xb0) = uStack_f8;
      *(undefined8 *)(param_2 + 0xa8) = uStack_100;
      *(undefined8 *)(param_2 + 0xc0) = uStack_e8;
      *(undefined8 *)(param_2 + 0xb8) = uStack_f0;
      *(undefined8 *)(param_2 + 0xd0) = uStack_d8;
      *(undefined8 *)(param_2 + 200) = uStack_e0;
      uStack_102 = 0;
      /*UnityEngine.Rendering.DepthState$$.ctor*/ func_0x0322cb58(&uStack_102,0,3,0);
      /*UnityEngine.Rendering.RenderStateBlock$$set_depthState*/ func_0x03258b38(param_2 + 0xa8,uStack_102,0);
      uStack_10c = 0;
      uStack_110 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_114 = 0;
      uStack_120 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      /*UnityEngine.Rendering.RenderStateBlock$$.ctor*/ func_0x03258a6c(&uStack_170,4,0);
      *(undefined8 *)(param_2 + 0x15c) = uStack_128;
      *(undefined8 *)(param_2 + 0x154) = uStack_130;
      *(ulong *)(param_2 + 0x16c) = CONCAT44(uStack_114,uStack_118);
      *(undefined8 *)(param_2 + 0x164) = uStack_120;
      *(undefined8 *)(param_2 + 0x178) = uStack_10c;
      *(ulong *)(param_2 + 0x170) = CONCAT44(uStack_110,uStack_114);
      *(undefined8 *)(param_2 + 0x11c) = uStack_168;
      *(undefined8 *)(param_2 + 0x114) = uStack_170;
      *(undefined8 *)(param_2 + 300) = uStack_158;
      *(undefined8 *)(param_2 + 0x124) = uStack_160;
      *(undefined8 *)(param_2 + 0x13c) = uStack_148;
      *(undefined8 *)(param_2 + 0x134) = uStack_150;
      *(undefined8 *)(param_2 + 0x14c) = uStack_138;
      *(undefined8 *)(param_2 + 0x144) = uStack_140;
      uStack_172 = 0;
      /*UnityEngine.Rendering.DepthState$$.ctor*/ func_0x0322cb58(&uStack_172,1,4,0);
      /*UnityEngine.Rendering.RenderStateBlock$$set_depthState*/ func_0x03258b38((undefined8 *)(param_2 + 0x114),uStack_172,0);
      *(undefined4 *)(param_2 + 0x88) = param_1;
      *(char *)(param_2 + 0x8c) = (char)uStack_178;
      *(undefined4 *)(param_2 + 0x10) = 300;
      return;
    }
  }
  auVar5 = func_0x00f78af4();
  uStack_1b0 = 0x3d55c40;
  uStack_1a8 = 0x3d1dde8;
  pcStack_188 = Atlas_Outlines_PrepareOutlineTextureFeature__AddRenderPasses;
  lStack_1a0 = param_2;
  uStack_198 = uVar1;
  puStack_190 = &stack0xfffffffffffffff0;
  _memcpy(auStack_388,uVar4,0x1d8);
  Atlas_Outlines_PrepareOutlineTextureFeature__AddRenderPassesDevice
            (auVar5._0_8_,auVar5._8_8_,auStack_388);
  return;
}



// ============================================================
// RVA: 0x145d874 | Atlas.Outlines.PrepareOutlineTextureFeature.PrepareOutlineTexturePass.SetRenderTexture
// ============================================================

void Atlas_Outlines_PrepareOutlineTextureFeature_PrepareOutlineTexturePass__SetRenderTexture
               (long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
               undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *(undefined8 *)(param_1 + 0x180) = param_2;
  uVar2 = param_3[1];
  uVar1 = *param_3;
  uVar4 = param_3[3];
  uVar3 = param_3[2];
  *(undefined8 *)(param_1 + 0x1a8) = param_3[4];
  *(undefined8 *)(param_1 + 400) = uVar2;
  *(undefined8 *)(param_1 + 0x188) = uVar1;
  *(undefined8 *)(param_1 + 0x1a0) = uVar4;
  *(undefined8 *)(param_1 + 0x198) = uVar3;
  *(undefined8 *)(param_1 + 0x1b0) = param_4;
  *(undefined1 *)(param_1 + 0x1b8) = param_5;
  return;
}



// ============================================================
// RVA: 0x145e150 | Atlas.Outlines.PrepareOutlineTextureFeature.PrepareOutlineTexturePass.Configure
// ============================================================

void Atlas_Outlines_PrepareOutlineTextureFeature_PrepareOutlineTexturePass__Configure(long param_1)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  int extraout_w1;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  undefined1 auVar13 [16];
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined1 auStack_618 [8];
  undefined8 uStack_610;
  undefined1 auStack_608 [312];
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
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
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long lStack_250;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
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
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
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
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = *(undefined8 *)(param_1 + 400);
  uStack_60 = *(undefined8 *)(param_1 + 0x188);
  uStack_48 = *(undefined8 *)(param_1 + 0x1a0);
  uStack_50 = *(undefined8 *)(param_1 + 0x198);
  uStack_40 = *(undefined8 *)(param_1 + 0x1a8);
  uStack_88 = *(undefined8 *)(param_1 + 400);
  uStack_90 = *(undefined8 *)(param_1 + 0x188);
  uStack_78 = *(undefined8 *)(param_1 + 0x1a0);
  uStack_80 = *(undefined8 *)(param_1 + 0x198);
  uStack_70 = *(undefined8 *)(param_1 + 0x1a8);
  /*UnityEngine.Rendering.RenderTargetIdentifier$$op_Implicit*/ func_0x03259324(&uStack_b8,0,0);
  uStack_d8 = uStack_88;
  uStack_e0 = uStack_90;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  uStack_c0 = uStack_70;
  uStack_108 = uStack_b0;
  uStack_110 = uStack_b8;
  uStack_f8 = uStack_a0;
  uStack_100 = uStack_a8;
  uStack_f0 = uStack_98;
  puVar6 = (undefined8 *)0x0;
  iVar2 = /*UnityEngine.Rendering.RenderTargetIdentifier$$op_Equality*/ func_0x03259874(&uStack_e0,&uStack_110);
  if (iVar2 != 0) {
    if (*(long *)(param_1 + 0x1b0) == 0) {
      auVar13 = func_0x00f78af4();
      uStack_610 = auVar13._8_8_;
      lVar8 = auVar13._0_8_;
      lStack_250 = *(long *)PTR_03a5d648;
      if ((bRam0000000003eb47fb & 1) == 0) {
        func_0x00f78a20(0x3d20878);
        func_0x00f78a20(0x3d70da8);
        bRam0000000003eb47fb = 1;
      }
      auStack_618[0] = 0;
      uStack_630 = 0;
      uStack_628 = 0;
      uStack_620 = 0;
      uStack_260 = 0;
      uStack_278 = 0;
      uStack_280 = 0;
      uStack_268 = 0;
      uStack_270 = 0;
      uStack_298 = 0;
      uStack_2a0 = 0;
      uStack_288 = 0;
      uStack_290 = 0;
      uStack_2b8 = 0;
      uStack_2c0 = 0;
      uStack_2a8 = 0;
      uStack_2b0 = 0;
      uStack_2d8 = 0;
      uStack_2e0 = 0;
      uStack_2c8 = 0;
      uStack_2d0 = 0;
      uStack_2f8 = 0;
      uStack_300 = 0;
      uStack_2e8 = 0;
      uStack_2f0 = 0;
      uStack_318 = 0;
      uStack_320 = 0;
      uStack_308 = 0;
      uStack_310 = 0;
      uStack_338 = 0;
      uStack_340 = 0;
      uStack_328 = 0;
      uStack_330 = 0;
      uStack_358 = 0;
      uStack_360 = 0;
      uStack_348 = 0;
      uStack_350 = 0;
      uStack_378 = 0;
      uStack_380 = 0;
      uStack_368 = 0;
      uStack_370 = 0;
      uStack_388 = 0;
      uStack_390 = 0;
      uStack_3a0 = 0;
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
      uStack_4b8 = 0;
      uStack_4c0 = 0;
      uStack_4a8 = 0;
      uStack_4b0 = 0;
      uStack_4c8 = 0;
      uStack_4d0 = 0;
      if (((*(ushort *)(/*UnityEngine.Rendering.CommandBufferPool_TypeInfo*/ lRam0000000003d20878 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Rendering.CommandBufferPool_TypeInfo*/ lRam0000000003d20878 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar3 = /*UnityEngine.Rendering.CommandBufferPool$$Get*/ func_0x030df67c(/*STR('Outline Prepare Texture')*/ uRam0000000003d70da8,0);
      /*UnityEngine.Rendering.ProfilingScope$$.ctor*/ func_0x030f72ec(auStack_618,lVar3,*(undefined8 *)(lVar8 + 0x90),0);
      lVar9 = *(long *)(lVar8 + 0x80);
      if (lVar9 == 0) {
        func_0x00f78af4();
code_r0x0145e618:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x145e61c);
        (*pcVar1)();
      }
      if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
        uVar10 = 0;
        uVar12 = *(undefined4 *)((long)puVar6 + 0x10c);
        uVar7 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
        puVar11 = (undefined8 *)(lVar9 + 0x20);
        do {
          if (uVar7 <= uVar10) {
            uVar5 = func_0x00f78b24();
            func_0x00f78ac0(uVar5,0);
            goto code_r0x0145e618;
          }
          uStack_628 = puVar11[1];
          uStack_630 = *puVar11;
          uStack_620 = puVar11[2];
          if ((*(float *)(lVar8 + 0x88) == 1.0) && (*(char *)(lVar8 + 0x8c) == '\0')) {
            /*UnityEngine.Rendering.Universal.ScriptableRenderPass$$CreateDrawingSettings*/ func_0x031410d4(auStack_608,lVar8,*(undefined8 *)(lVar8 + 0x98),puVar6,uVar12,0);
            _memcpy(&uStack_390,auStack_608,0x138);
            /*UnityEngine.Rendering.ScriptableRenderContext$$DrawRenderers*/ func_0x0326065c(&uStack_610,*puVar6,puVar6[1],&uStack_390,&uStack_630,lVar8 + 0xa8,0);
          }
          else {
            /*UnityEngine.Rendering.Universal.ScriptableRenderPass$$CreateDrawingSettings*/ func_0x031410d4(auStack_608,lVar8,*(undefined8 *)(lVar8 + 0xa0),puVar6,uVar12,0);
            _memcpy(&uStack_4d0,auStack_608,0x138);
            /*UnityEngine.Rendering.ScriptableRenderContext$$DrawRenderers*/ func_0x0326065c(&uStack_610,*puVar6,puVar6[1],&uStack_4d0,&uStack_630,lVar8 + 0x114,0);
          }
          uVar10 = uVar10 + 1;
          uVar7 = (ulong)*(uint *)(lVar9 + 0x18);
          puVar11 = puVar11 + 3;
        } while ((long)uVar10 < (long)(int)*(uint *)(lVar9 + 0x18));
      }
      /*UnityEngine.Rendering.ProfilingScope$$Dispose*/ func_0x030f72f0(auStack_618,0);
      do {
        /*UnityEngine.Rendering.ScriptableRenderContext$$ExecuteCommandBuffer*/ func_0x03260a3c(&uStack_610,lVar3,0);
        if (lVar3 == 0) {
          func_0x00f78af4();
        }
        else {
          /*UnityEngine.Rendering.CommandBuffer$$Clear*/ func_0x03224170(lVar3,0);
          if (((*(ushort *)(/*UnityEngine.Rendering.CommandBufferPool_TypeInfo*/ lRam0000000003d20878 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Rendering.CommandBufferPool_TypeInfo*/ lRam0000000003d20878 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          /*UnityEngine.Rendering.CommandBufferPool$$Release*/ func_0x030df728(lVar3,0);
          if (*(long *)PTR_03a5d648 == lStack_250) {
            return;
          }
        }
        ___stack_chk_fail();
        if (extraout_w1 != 1) goto code_r0x0145e668;
        plVar4 = (long *)___cxa_begin_catch();
        lVar8 = *plVar4;
        ___cxa_end_catch();
        /*UnityEngine.Rendering.ProfilingScope$$Dispose*/ func_0x030f72f0(auStack_618,0);
      } while (lVar8 == 0);
      func_0x00f78ac0(lVar8,0);
code_r0x0145e668:
      __Unwind_Resume();
      return;
    }
    /*UnityEngine.Rendering.Universal.ScriptableRenderer$$get_cameraDepthTarget*/ func_0x0314cdb0(&uStack_60,*(long *)(param_1 + 0x1b0),0);
  }
  if ((*(float *)(param_1 + 0x88) == 1.0) && (*(char *)(param_1 + 0x8c) == '\0')) {
    /*UnityEngine.Rendering.RenderTargetIdentifier$$op_Implicit*/ func_0x032593ec(&uStack_90,*(undefined8 *)(param_1 + 0x180),0);
    uStack_168 = uStack_58;
    uStack_170 = uStack_60;
    uStack_158 = uStack_48;
    uStack_160 = uStack_50;
    uStack_150 = uStack_40;
    uStack_138 = uStack_88;
    uStack_140 = uStack_90;
    uStack_128 = uStack_78;
    uStack_130 = uStack_80;
    uStack_120 = uStack_70;
    /*UnityEngine.Rendering.Universal.ScriptableRenderPass$$ConfigureTarget*/ func_0x03145358(param_1,&uStack_140,&uStack_170,0);
    if (*(char *)(param_1 + 0x1b8) == '\0') {
      uVar12 = 0x3f800000;
    }
    else {
      uVar12 = 0;
    }
    uStack_88 = 0;
    uStack_90 = 0;
    /*UnityEngine.Color$$.ctor*/ func_0x03222f84(0,0,0,uVar12,&uStack_90,0);
    uVar5 = 1;
  }
  else {
    /*UnityEngine.Rendering.RenderTargetIdentifier$$op_Implicit*/ func_0x032593ec(&uStack_90,*(undefined8 *)(param_1 + 0x180),0);
    uStack_1c8 = uStack_58;
    uStack_1d0 = uStack_60;
    uStack_1b8 = uStack_48;
    uStack_1c0 = uStack_50;
    uStack_1b0 = uStack_40;
    uStack_198 = uStack_88;
    uStack_1a0 = uStack_90;
    uStack_188 = uStack_78;
    uStack_190 = uStack_80;
    uStack_180 = uStack_70;
    /*UnityEngine.Rendering.Universal.ScriptableRenderPass$$ConfigureTarget*/ func_0x03145358(param_1,&uStack_1a0,&uStack_1d0,0);
    if (*(char *)(param_1 + 0x1b8) == '\0') {
      uVar12 = 0x3f800000;
    }
    else {
      uVar12 = 0;
    }
    uStack_88 = 0;
    uStack_90 = 0;
    /*UnityEngine.Color$$.ctor*/ func_0x03222f84(0,0,0,uVar12,&uStack_90,0);
    uVar5 = 3;
  }
  /*UnityEngine.Rendering.Universal.ScriptableRenderPass$$ConfigureClear*/ func_0x0314b45c((undefined4)uStack_90,uStack_90._4_4_,(undefined4)uStack_88,uStack_88._4_4_,
                  param_1,uVar5,0);
  return;
}



// ============================================================
// RVA: 0x145e354 | Atlas.Outlines.PrepareOutlineTextureFeature.PrepareOutlineTexturePass.Execute
// ============================================================

void Atlas_Outlines_PrepareOutlineTextureFeature_PrepareOutlineTexturePass__Execute
               (long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  int extraout_w1;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined1 auStack_448 [8];
  undefined8 uStack_440;
  undefined1 auStack_438 [312];
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
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
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_80;
  
  lStack_80 = *(long *)PTR_03a5d648;
  uStack_440 = param_2;
  if ((bRam0000000003eb47fb & 1) == 0) {
    func_0x00f78a20(0x3d20878);
    func_0x00f78a20(0x3d70da8);
    bRam0000000003eb47fb = 1;
  }
  auStack_448[0] = 0;
  uStack_460 = 0;
  uStack_458 = 0;
  uStack_450 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1d0 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  if (((*(ushort *)(/*UnityEngine.Rendering.CommandBufferPool_TypeInfo*/ lRam0000000003d20878 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Rendering.CommandBufferPool_TypeInfo*/ lRam0000000003d20878 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar3 = /*UnityEngine.Rendering.CommandBufferPool$$Get*/ func_0x030df67c(/*STR('Outline Prepare Texture')*/ uRam0000000003d70da8,0);
  /*UnityEngine.Rendering.ProfilingScope$$.ctor*/ func_0x030f72ec(auStack_448,lVar3,*(undefined8 *)(param_1 + 0x90),0);
  lVar7 = *(long *)(param_1 + 0x80);
  if (lVar7 == 0) {
    func_0x00f78af4();
code_r0x0145e618:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x145e61c);
    (*pcVar2)();
  }
  if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
    uVar8 = 0;
    uVar1 = *(undefined4 *)((long)param_3 + 0x10c);
    uVar6 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
    puVar9 = (undefined8 *)(lVar7 + 0x20);
    do {
      if (uVar6 <= uVar8) {
        uVar4 = func_0x00f78b24();
        func_0x00f78ac0(uVar4,0);
        goto code_r0x0145e618;
      }
      uStack_458 = puVar9[1];
      uStack_460 = *puVar9;
      uStack_450 = puVar9[2];
      if ((*(float *)(param_1 + 0x88) == 1.0) && (*(char *)(param_1 + 0x8c) == '\0')) {
        /*UnityEngine.Rendering.Universal.ScriptableRenderPass$$CreateDrawingSettings*/ func_0x031410d4(auStack_438,param_1,*(undefined8 *)(param_1 + 0x98),param_3,uVar1,0);
        _memcpy(&uStack_1c0,auStack_438,0x138);
        /*UnityEngine.Rendering.ScriptableRenderContext$$DrawRenderers*/ func_0x0326065c(&uStack_440,*param_3,param_3[1],&uStack_1c0,&uStack_460,param_1 + 0xa8,0);
      }
      else {
        /*UnityEngine.Rendering.Universal.ScriptableRenderPass$$CreateDrawingSettings*/ func_0x031410d4(auStack_438,param_1,*(undefined8 *)(param_1 + 0xa0),param_3,uVar1,0);
        _memcpy(&uStack_300,auStack_438,0x138);
        /*UnityEngine.Rendering.ScriptableRenderContext$$DrawRenderers*/ func_0x0326065c(&uStack_440,*param_3,param_3[1],&uStack_300,&uStack_460,param_1 + 0x114,0);
      }
      uVar8 = uVar8 + 1;
      uVar6 = (ulong)*(uint *)(lVar7 + 0x18);
      puVar9 = puVar9 + 3;
    } while ((long)uVar8 < (long)(int)*(uint *)(lVar7 + 0x18));
  }
  /*UnityEngine.Rendering.ProfilingScope$$Dispose*/ func_0x030f72f0(auStack_448,0);
  do {
    /*UnityEngine.Rendering.ScriptableRenderContext$$ExecuteCommandBuffer*/ func_0x03260a3c(&uStack_440,lVar3,0);
    if (lVar3 == 0) {
      func_0x00f78af4();
    }
    else {
      /*UnityEngine.Rendering.CommandBuffer$$Clear*/ func_0x03224170(lVar3,0);
      if (((*(ushort *)(/*UnityEngine.Rendering.CommandBufferPool_TypeInfo*/ lRam0000000003d20878 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Rendering.CommandBufferPool_TypeInfo*/ lRam0000000003d20878 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*UnityEngine.Rendering.CommandBufferPool$$Release*/ func_0x030df728(lVar3,0);
      if (*(long *)PTR_03a5d648 == lStack_80) {
        return;
      }
    }
    ___stack_chk_fail();
    if (extraout_w1 != 1) goto code_r0x0145e668;
    plVar5 = (long *)___cxa_begin_catch();
    lVar7 = *plVar5;
    ___cxa_end_catch();
    /*UnityEngine.Rendering.ProfilingScope$$Dispose*/ func_0x030f72f0(auStack_448,0);
  } while (lVar7 == 0);
  func_0x00f78ac0(lVar7,0);
code_r0x0145e668:
  __Unwind_Resume();
  return;
}



// ============================================================
// RVA: 0x145e66c | Atlas.Outlines.PrepareOutlineTextureFeature.PrepareOutlineTexturePass.FrameCleanup
// ============================================================

void Atlas_Outlines_PrepareOutlineTextureFeature_PrepareOutlineTexturePass__FrameCleanup(void)

{
  return;
}



