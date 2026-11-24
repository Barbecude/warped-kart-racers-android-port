// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Outlines.OutlineFeature.AntialiasPass

// ============================================================
// RVA: 0x145c7d0 | Atlas.Outlines.OutlineFeature.AntialiasPass..ctor
// ============================================================

void Atlas_Outlines_OutlineFeature_AntialiasPass___ctor
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb47f5 & 1) == 0) {
    func_0x00f78a20(0x3d23e80);
    func_0x00f78a20(0x3d70d80);
    bRam0000000003eb47f5 = 1;
  }
  /*UnityEngine.Rendering.Universal.ScriptableRenderPass$$.ctor*/ func_0x0313f0a0(param_1,0);
  *(undefined8 *)(param_1 + 0xe0) = param_2;
  *(undefined8 *)(param_1 + 0xe8) = param_3;
  uVar1 = func_0x00f78aec(/*UnityEngine.Rendering.ProfilingSampler_TypeInfo*/ uRam0000000003d23e80);
  /*UnityEngine.Rendering.ProfilingSampler$$.ctor*/ func_0x030f6e90(uVar1,/*STR('Outline Antialias Render Pass')*/ uRam0000000003d70d80,0);
  *(undefined8 *)(param_1 + 0xf0) = uVar1;
  return;
}



// ============================================================
// RVA: 0x145cf04 | Atlas.Outlines.OutlineFeature.AntialiasPass.Setup
// ============================================================

void Atlas_Outlines_OutlineFeature_AntialiasPass__Setup
               (long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *(undefined8 *)(param_1 + 0x80) = param_2;
  uVar2 = param_3[1];
  uVar1 = *param_3;
  uVar4 = param_3[3];
  uVar3 = param_3[2];
  *(undefined8 *)(param_1 + 0xa8) = param_3[4];
  *(undefined8 *)(param_1 + 0xa0) = uVar4;
  *(undefined8 *)(param_1 + 0x98) = uVar3;
  *(undefined8 *)(param_1 + 0x90) = uVar2;
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  return;
}



// ============================================================
// RVA: 0x145d9c0 | Atlas.Outlines.OutlineFeature.AntialiasPass.Configure
// ============================================================

void Atlas_Outlines_OutlineFeature_AntialiasPass__Configure
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  undefined4 uVar1;
  
  uVar1 = /*UnityEngine.Color$$get_black*/ func_0x032235bc(0);
  *(undefined4 *)(param_5 + 0x6c) = 0;
  *(undefined4 *)(param_5 + 0x70) = uVar1;
  *(undefined4 *)(param_5 + 0x74) = param_2;
  *(undefined4 *)(param_5 + 0x78) = param_3;
  *(undefined4 *)(param_5 + 0x7c) = param_4;
  return;
}



// ============================================================
// RVA: 0x145d9f0 | Atlas.Outlines.OutlineFeature.AntialiasPass.Execute
// ============================================================

void Atlas_Outlines_OutlineFeature_AntialiasPass__Execute
               (long param_1,undefined8 param_2,long param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  long lVar3;
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
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
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
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  uStack_48 = param_2;
  if ((bRam0000000003eb47f6 & 1) == 0) {
    func_0x00f78a20(0x3d20878);
    func_0x00f78a20(0x3d70d80);
    bRam0000000003eb47f6 = 1;
  }
  auStack_50[0] = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (((*(byte *)(/*UnityEngine.Rendering.CommandBufferPool_TypeInfo*/ lRam0000000003d20878 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Rendering.CommandBufferPool_TypeInfo*/ lRam0000000003d20878 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar3 = /*UnityEngine.Rendering.CommandBufferPool$$Get*/ func_0x030df67c(/*STR('Outline Antialias Render Pass')*/ uRam0000000003d70d80,0);
  /*UnityEngine.Rendering.ProfilingScope$$.ctor*/ func_0x030f72ec(auStack_50,lVar3,*(undefined8 *)(param_1 + 0xf0),0);
  uStack_88 = *(undefined8 *)(param_3 + 0xb0);
  uStack_90 = *(undefined8 *)(param_3 + 0xa8);
  uStack_78 = *(undefined8 *)(param_3 + 0xc0);
  uStack_80 = *(undefined8 *)(param_3 + 0xb8);
  uStack_68 = *(undefined8 *)(param_3 + 0xd0);
  uStack_70 = *(undefined8 *)(param_3 + 200);
  uStack_60 = *(undefined4 *)(param_3 + 0xd8);
  /*UnityEngine.RenderTextureDescriptor$$set_depthBufferBits*/ func_0x0325b5e8(&uStack_90,0,0);
  if (lVar3 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0xb0);
    uStack_c8 = uStack_88;
    uStack_d0 = uStack_90;
    uStack_b8 = uStack_78;
    uStack_c0 = uStack_80;
    uStack_a8 = uStack_68;
    uStack_b0 = uStack_70;
    uStack_a0 = uStack_60;
    /*UnityEngine.Rendering.CommandBuffer$$GetTemporaryRT*/ func_0x032248d4(lVar3,*puVar1,&uStack_d0,1,0);
    /*UnityEngine.Rendering.RenderTargetIdentifier$$op_Implicit*/ func_0x032593ec(&uStack_128,*(undefined8 *)(param_1 + 0x80),0);
    uStack_f8 = uStack_120;
    uStack_100 = uStack_128;
    uStack_e8 = uStack_110;
    uStack_f0 = uStack_118;
    uStack_e0 = uStack_108;
    /*UnityEngine.Rendering.Universal.RenderTargetHandle$$Identifier*/ func_0x03143f30(&uStack_128,puVar1,0);
    uStack_178 = uStack_120;
    uStack_180 = uStack_128;
    uStack_168 = uStack_110;
    uStack_170 = uStack_118;
    uStack_160 = uStack_108;
    uStack_148 = uStack_f8;
    uStack_150 = uStack_100;
    uStack_138 = uStack_e8;
    uStack_140 = uStack_f0;
    uStack_130 = uStack_e0;
    /*UnityEngine.Rendering.Universal.ScriptableRenderPass$$Blit*/ func_0x0314b90c(param_1,lVar3,&uStack_150,&uStack_180,*(undefined8 *)(param_1 + 0xe0),0,0);
    /*UnityEngine.Rendering.Universal.RenderTargetHandle$$Identifier*/ func_0x03143f30(&uStack_128,puVar1,0);
    uStack_1a8 = uStack_120;
    uStack_1b0 = uStack_128;
    uStack_198 = uStack_110;
    uStack_1a0 = uStack_118;
    uStack_190 = uStack_108;
    uStack_1d8 = *(undefined8 *)(param_1 + 0x90);
    uStack_1e0 = *(undefined8 *)(param_1 + 0x88);
    uStack_1c8 = *(undefined8 *)(param_1 + 0xa0);
    uStack_1d0 = *(undefined8 *)(param_1 + 0x98);
    uStack_1c0 = *(undefined8 *)(param_1 + 0xa8);
    /*UnityEngine.Rendering.Universal.ScriptableRenderPass$$Blit*/ func_0x0314b90c(param_1,lVar3,&uStack_1b0,&uStack_1e0,0,0,0);
    /*UnityEngine.Rendering.ProfilingScope$$Dispose*/ func_0x030f72f0(auStack_50,0);
    /*UnityEngine.Rendering.ScriptableRenderContext$$ExecuteCommandBuffer*/ func_0x03260a3c(&uStack_48,lVar3,0);
    /*UnityEngine.Rendering.CommandBuffer$$Clear*/ func_0x03224170(lVar3,0);
    if (((*(ushort *)(/*UnityEngine.Rendering.CommandBufferPool_TypeInfo*/ lRam0000000003d20878 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Rendering.CommandBufferPool_TypeInfo*/ lRam0000000003d20878 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*UnityEngine.Rendering.CommandBufferPool$$Release*/ func_0x030df728(lVar3,0);
    return;
  }
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x145dc38);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x145dc9c | Atlas.Outlines.OutlineFeature.AntialiasPass.FrameCleanup
// ============================================================

void Atlas_Outlines_OutlineFeature_AntialiasPass__FrameCleanup(long param_1,long param_2)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0xb0);
    if (pcRam0000000003ebf050 == (code *)0x0) {
      pcRam0000000003ebf050 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.Rendering.CommandBuffer::ReleaseTemporaryRT(System.Int32)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03224a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ebf050)(param_2,uVar1);
    return;
  }
  func_0x00f78af4();
  return;
}



