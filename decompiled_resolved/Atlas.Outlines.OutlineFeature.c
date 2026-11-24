// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Outlines.OutlineFeature

// ============================================================
// RVA: 0x145c670 | Atlas.Outlines.OutlineFeature.get_AntialiasTexture
// ============================================================

undefined8 Atlas_Outlines_OutlineFeature__get_AntialiasTexture(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



// ============================================================
// RVA: 0x145c678 | Atlas.Outlines.OutlineFeature.Create
// ============================================================

/* WARNING: Possible PIC construction at 0x0145c6e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0145c6e8) */
/* WARNING: Removing unreachable block (ram,0x0145c6f4) */

void Atlas_Outlines_OutlineFeature__Create(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  if ((bRam0000000003eb47ec & 1) == 0) {
    func_0x00f78a20(0x3d28510);
    func_0x00f78a20(0x3d28518);
    bRam0000000003eb47ec = 1;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    auVar4 = func_0x00f78af4();
  }
  else {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
    param_3 = *(undefined8 *)(param_1 + 0x38);
    uVar1 = func_0x00f78aec(/*Atlas.Outlines.OutlineFeature.OutlinePass_TypeInfo*/ uRam0000000003d28518);
    auVar4._8_8_ = uVar3;
    auVar4._0_8_ = uVar1;
  }
  lVar2 = auVar4._0_8_;
  if ((bRam0000000003eb47f7 & 1) == 0) {
    func_0x00f78a20(0x3d23e80);
    func_0x00f78a20(0x3d70da0);
    bRam0000000003eb47f7 = 1;
  }
  /*UnityEngine.Rendering.Universal.ScriptableRenderPass$$.ctor*/ func_0x0313f0a0(lVar2,0);
  *(long *)(lVar2 + 0x100) = auVar4._8_8_;
  *(undefined8 *)(lVar2 + 0x108) = param_3;
  uVar1 = func_0x00f78aec(/*UnityEngine.Rendering.ProfilingSampler_TypeInfo*/ uRam0000000003d23e80);
  /*UnityEngine.Rendering.ProfilingSampler$$.ctor*/ func_0x030f6e90(uVar1,/*STR('Outline Final Render Pass')*/ uRam0000000003d70da0,0);
  *(undefined8 *)(lVar2 + 0x110) = uVar1;
  return;
}



// ============================================================
// RVA: 0x145c86c | Atlas.Outlines.OutlineFeature.AddRenderPasses
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Outlines_OutlineFeature__AddRenderPasses(long param_1,long param_2,undefined8 *param_3)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
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
  undefined8 uStack_88;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar8 = param_3;
  if ((bRam0000000003eb47ed & 1) == 0) {
    func_0x00f78a20(0x3d437d8);
    func_0x00f78a20(0x3d210d8);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d23af0);
    func_0x00f78a20(0x3d243a8);
    func_0x00f78a20(0x3d243b8);
    func_0x00f78a20(0x3d70900);
    func_0x00f78a20(0x3d6fd70);
    func_0x00f78a20(0x3d77818);
    func_0x00f78a20(0x3d76fc8);
    func_0x00f78a20(0x3d70908);
    func_0x00f78a20(0x3d70d88);
    bRam0000000003eb47ed = 1;
  }
  puStack_78 = (undefined *)0x0;
  puStack_80 = (undefined1 *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_0145ced8;
  lVar15 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar8 = (undefined8 *)0x0;
  iVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar15,0);
  lVar6 = lRam0000000003d437d8;
  if (iVar3 != 0) {
    lVar15 = **(long **)(lRam0000000003d437d8 + 0x30);
    uVar2 = *(ushort *)(lVar15 + 0x132);
    if ((uVar2 & 1) == 0) {
      func_0x00fac028(lVar15);
      uVar2 = *(ushort *)(lVar15 + 0x132);
    }
    if ((uVar2 >> 10 & 1) != 0) {
      lVar15 = **(long **)(lVar6 + 0x30);
      if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar15);
      }
      if (*(int *)(lVar15 + 0xe0) == 0) {
        lVar15 = **(long **)(lVar6 + 0x30);
        if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar15);
        }
        func_0x00f78ad0(lVar15);
      }
    }
    lVar15 = **(long **)(lVar6 + 0x30);
    if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar15);
    }
    uVar14 = **(undefined8 **)(lVar15 + 0xb8);
    if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar18 = /*STR('Missing Outline Material')*/ uRam0000000003d6fd70;
    uVar9 = 0;
    if ((bRam0000000003ebf39a & 1) == 0) {
      func_0x00f78a20(0x3d210d8);
      func_0x00f78a20(0x3d22300);
      bRam0000000003ebf39a = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (cRam0000000003ca34ff == '\0') {
      func_0x00f78a20(0x3d210d8);
      cRam0000000003ca34ff = '\x01';
    }
    if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar16 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
    if (plVar16 == (long *)0x0) {
      auVar20 = func_0x00f78af4();
      uVar14 = auVar20._8_8_;
      if ((bRam0000000003ebf39b & 1) == 0) {
        func_0x00f78a20(0x3d210d8);
        func_0x00f78a20(0x3d222f8);
        bRam0000000003ebf39b = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (cRam0000000003ca34ff == '\0') {
        func_0x00f78a20(0x3d210d8);
        cRam0000000003ca34ff = '\x01';
      }
      if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar16 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
      if (plVar16 == (long *)0x0) {
        func_0x00f78af4();
        puStack_78 = &UnityEngine_Debug__get_isDebugBuild;
        uStack_90 = uVar14;
        uStack_88 = uVar9;
        puStack_80 = &stack0xffffffffffffffc0;
        if (pcRam0000000003ebf3a0 == (code *)0x0) {
          pcRam0000000003ebf3a0 = (code *)func_0x00f789d4("UnityEngine.Debug::get_isDebugBuild()");
        }
                    /* WARNING: Could not recover jumptable at 0x0322c124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000003ebf3a0)();
        return;
      }
      lVar15 = *plVar16;
      uVar12 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == /*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8) {
            puVar8 = (undefined8 *)(lVar15 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x0322c0c4;
          }
          piVar13 = piVar13 + 4;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)func_0x00fac1f0(plVar16,/*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8,0);
code_r0x0322c0c4:
                    /* WARNING: Could not recover jumptable at 0x0322c0ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar8)(plVar16,2,auVar20._0_8_,uVar14,uVar9,puVar8[1]);
      return;
    }
    lVar15 = *plVar16;
    uVar12 = (ulong)*(ushort *)(lVar15 + 0x12a);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
          puVar8 = (undefined8 *)(lVar15 + (long)(*piVar13 + 7) * 0x10 + 0x138);
          goto code_r0x0322bf94;
        }
        piVar13 = piVar13 + 4;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)func_0x00fac1f0(plVar16,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,7);
code_r0x0322bf94:
                    /* WARNING: Could not recover jumptable at 0x0322bfb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar8)(plVar16,2,uVar18,uVar14,puVar8[1]);
    return;
  }
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_0145ced8;
  uVar10 = 0x1c2;
  if (*(char *)(*(long *)(param_1 + 0x20) + 0x28) != '\0') {
    uVar10 = 500;
  }
  if (*(long *)(param_1 + 0x28) == 0) goto LAB_0145ced8;
  *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x10) = uVar10;
  if (*(long *)(param_1 + 0x30) == 0) goto LAB_0145ced8;
  *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x10) = uVar10;
  iVar3 = *(int *)(param_3 + 0x15);
  uVar1 = *(uint *)((long)param_3 + 0xac);
  puVar11 = (undefined8 *)(ulong)uVar1;
  uVar14 = *(undefined8 *)(param_1 + 0x40);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar14,0);
  if (iVar4 == 0) {
code_r0x0145cb08:
    uVar14 = *(undefined8 *)(param_1 + 0x40);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar14,0);
    if (iVar4 != 0) {
      if (*(long *)(param_1 + 0x40) == 0) goto LAB_0145ced8;
      /*UnityEngine.RenderTexture$$Release*/ func_0x03259fb0(*(long *)(param_1 + 0x40),0);
    }
    lVar6 = func_0x00f78aec(/*UnityEngine.RenderTexture_TypeInfo*/ uRam0000000003d243b8);
    /*UnityEngine.RenderTexture$$.ctor*/ func_0x0325a964(lVar6,iVar3,puVar11,0,8,0);
    *(long *)(param_1 + 0x40) = lVar6;
    puVar8 = puVar11;
    if (lVar6 == 0) goto LAB_0145ced8;
    puVar8 = (undefined8 *)0x0;
    /*UnityEngine.Texture$$set_filterMode*/ func_0x0326ea28(lVar6,1);
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_0145ced8;
    /*UnityEngine.Object$$set_name*/ func_0x03248994(*(long *)(param_1 + 0x40),/*STR('Outline Antialias Texture')*/ uRam0000000003d70d88,0);
    if (((*(ushort *)(/*Atlas.Outlines.OutlineFeature_TypeInfo*/ lRam0000000003d23af0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Outlines.OutlineFeature_TypeInfo*/ lRam0000000003d23af0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar8 = (undefined8 *)0x0;
    /*UnityEngine.Shader$$SetGlobalTexture*/ func_0x03262f68(**(undefined4 **)(/*Atlas.Outlines.OutlineFeature_TypeInfo*/ lRam0000000003d23af0 + 0xb8),*(undefined8 *)(param_1 + 0x40));
  }
  else {
    plVar16 = *(long **)(param_1 + 0x40);
    if (plVar16 == (long *)0x0) goto LAB_0145ced8;
    iVar4 = (**(code **)(*plVar16 + 0x188))(plVar16,*(undefined8 *)(*plVar16 + 400));
    if (iVar4 != iVar3) goto code_r0x0145cb08;
    plVar16 = *(long **)(param_1 + 0x40);
    if (plVar16 == (long *)0x0) goto LAB_0145ced8;
    uVar5 = (**(code **)(*plVar16 + 0x1a8))(plVar16,*(undefined8 *)(*plVar16 + 0x1b0));
    if (uVar5 != uVar1) goto code_r0x0145cb08;
  }
  lVar6 = *(long *)(param_1 + 0x20);
  if (lVar6 == 0) goto LAB_0145ced8;
  lVar7 = *(long *)(lVar6 + 0x18);
  if (*(char *)(lVar6 + 0x11) == '\0') {
    if (lVar7 == 0) goto LAB_0145ced8;
    puVar8 = (undefined8 *)0x0;
    /*UnityEngine.Material$$DisableKeyword*/ func_0x032389bc(lVar7,/*STR('OUTLINE_DEBUG')*/ uRam0000000003d70908);
    if ((*(long *)(param_1 + 0x20) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x20), lVar6 == 0)) goto LAB_0145ced8;
    puVar8 = (undefined8 *)0x0;
    /*UnityEngine.Material$$DisableKeyword*/ func_0x032389bc(lVar6,/*STR('OUTLINE_DEBUG')*/ uRam0000000003d70908);
  }
  else {
    if (lVar7 == 0) goto LAB_0145ced8;
    puVar8 = (undefined8 *)0x0;
    /*UnityEngine.Material$$EnableKeyword*/ func_0x0323896c(lVar7,/*STR('OUTLINE_DEBUG')*/ uRam0000000003d70908);
    if ((*(long *)(param_1 + 0x20) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x20), lVar6 == 0)) goto LAB_0145ced8;
    puVar8 = (undefined8 *)0x0;
    /*UnityEngine.Material$$EnableKeyword*/ func_0x0323896c(lVar6,/*STR('OUTLINE_DEBUG')*/ uRam0000000003d70908);
  }
  if (((*(ushort *)(/*Atlas.Outlines.OutlineFeature_TypeInfo*/ lRam0000000003d23af0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Outlines.OutlineFeature_TypeInfo*/ lRam0000000003d23af0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (/*UnityEngine.Shader$$SetGlobalFloat*/ func_0x03262bb4(*(undefined4 *)(*(long *)(param_1 + 0x20) + 0x2c),
                      *(undefined4 *)(*(long *)(/*Atlas.Outlines.OutlineFeature_TypeInfo*/ lRam0000000003d23af0 + 0xb8) + 4),0), lVar15 != 0))
  {
    fVar17 = (float)/*UnityEngine.Material$$GetFloat*/ func_0x0323baf4(lVar15,/*STR('_EdgeThickness')*/ uRam0000000003d76fc8,0);
    /*UnityEngine.Vector4$$op_Implicit*/ func_0x0327d088(fVar17 * _UNK_033f814c,
                    ((float)iVar3 / (float)(int)uVar1) * _UNK_033f814c * fVar17,0);
    puVar8 = (undefined8 *)0x0;
    /*UnityEngine.Material$$SetVector*/ func_0x0323af1c(lVar15,/*STR('_UVSampleOffset')*/ uRam0000000003d77818);
    lVar15 = *(long *)(param_1 + 0x20);
    if (lVar15 != 0) {
      lVar6 = *(long *)(lVar15 + 0x18);
      if (*(char *)(lVar15 + 0x10) == '\0') {
        if (lVar6 != 0) {
          puVar8 = (undefined8 *)0x0;
          /*UnityEngine.Material$$DisableKeyword*/ func_0x032389bc(lVar6,/*STR('OUTLINE_ANTIALIAS')*/ uRam0000000003d70900);
          if ((*(long *)(param_1 + 0x20) != 0) &&
             (lVar15 = *(long *)(*(long *)(param_1 + 0x20) + 0x20), lVar15 != 0)) {
            puVar8 = (undefined8 *)0x0;
            /*UnityEngine.Material$$DisableKeyword*/ func_0x032389bc(lVar15,/*STR('OUTLINE_ANTIALIAS')*/ uRam0000000003d70900);
            if (param_2 != 0) {
              lVar15 = *(long *)(param_1 + 0x28);
              /*UnityEngine.Rendering.Universal.ScriptableRenderer$$get_cameraColorTarget*/ func_0x0314cd08(&uStack_b8,param_2,0);
              if (((*(ushort *)(/*UnityEngine.Rendering.Universal.RenderTargetHandle_TypeInfo*/ lRam0000000003d243a8 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Rendering.Universal.RenderTargetHandle_TypeInfo*/ lRam0000000003d243a8 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              puVar11 = *(undefined8 **)(/*UnityEngine.Rendering.Universal.RenderTargetHandle_TypeInfo*/ lRam0000000003d243a8 + 0xb8);
              puStack_78 = (undefined *)puVar11[3];
              puStack_80 = (undefined1 *)puVar11[2];
              uStack_68 = puVar11[5];
              uStack_70 = puVar11[4];
              uStack_88 = puVar11[1];
              uStack_90 = *puVar11;
              /*UnityEngine.Rendering.Universal.RenderTargetHandle$$Identifier*/ func_0x03143f30(&uStack_e0,&uStack_90,0);
              if (lVar15 != 0) {
                *(undefined8 *)(lVar15 + 0x88) = uStack_b0;
                *(undefined8 *)(lVar15 + 0x80) = uStack_b8;
                *(undefined8 *)(lVar15 + 0x98) = uStack_a0;
                *(undefined8 *)(lVar15 + 0x90) = uStack_a8;
                *(undefined8 *)(lVar15 + 0xa0) = uStack_98;
                *(undefined8 *)(lVar15 + 0xb0) = uStack_d8;
                *(undefined8 *)(lVar15 + 0xa8) = uStack_e0;
                *(undefined8 *)(lVar15 + 0xc0) = uStack_c8;
                *(undefined8 *)(lVar15 + 0xb8) = uStack_d0;
                *(undefined8 *)(lVar15 + 200) = uStack_c0;
                uVar14 = *(undefined8 *)(param_1 + 0x28);
code_r0x0145ceac:
                /*UnityEngine.Rendering.Universal.ScriptableRenderer$$EnqueuePass*/ func_0x03143324(param_2,uVar14,0);
                return;
              }
            }
          }
        }
      }
      else if (lVar6 != 0) {
        puVar8 = (undefined8 *)0x0;
        /*UnityEngine.Material$$EnableKeyword*/ func_0x0323896c(lVar6,/*STR('OUTLINE_ANTIALIAS')*/ uRam0000000003d70900);
        if ((*(long *)(param_1 + 0x20) != 0) &&
           (lVar15 = *(long *)(*(long *)(param_1 + 0x20) + 0x20), lVar15 != 0)) {
          puVar8 = (undefined8 *)0x0;
          /*UnityEngine.Material$$EnableKeyword*/ func_0x0323896c(lVar15,/*STR('OUTLINE_ANTIALIAS')*/ uRam0000000003d70900);
          if (param_2 != 0) {
            lVar15 = *(long *)(param_1 + 0x28);
            /*UnityEngine.Rendering.Universal.ScriptableRenderer$$get_cameraColorTarget*/ func_0x0314cd08(&uStack_b8,param_2,0);
            /*UnityEngine.Rendering.RenderTargetIdentifier$$op_Implicit*/ func_0x032593ec(&uStack_e0,*(undefined8 *)(param_1 + 0x40),0);
            if (lVar15 != 0) {
              *(undefined8 *)(lVar15 + 0x88) = uStack_b0;
              *(undefined8 *)(lVar15 + 0x80) = uStack_b8;
              *(undefined8 *)(lVar15 + 0x98) = uStack_a0;
              *(undefined8 *)(lVar15 + 0x90) = uStack_a8;
              *(undefined8 *)(lVar15 + 0xa0) = uStack_98;
              *(undefined8 *)(lVar15 + 0xb0) = uStack_d8;
              *(undefined8 *)(lVar15 + 0xa8) = uStack_e0;
              *(undefined8 *)(lVar15 + 0xc0) = uStack_c8;
              *(undefined8 *)(lVar15 + 0xb8) = uStack_d0;
              *(undefined8 *)(lVar15 + 200) = uStack_c0;
              puVar8 = (undefined8 *)0x0;
              /*UnityEngine.Rendering.Universal.ScriptableRenderer$$EnqueuePass*/ func_0x03143324(param_2,*(undefined8 *)(param_1 + 0x28));
              lVar15 = *(long *)(param_1 + 0x30);
              uVar14 = *(undefined8 *)(param_1 + 0x40);
              /*UnityEngine.Rendering.Universal.ScriptableRenderer$$get_cameraColorTarget*/ func_0x0314cd08(&uStack_108,param_2,0);
              if (lVar15 != 0) {
                *(undefined8 *)(lVar15 + 0x80) = uVar14;
                *(undefined8 *)(lVar15 + 0x90) = uStack_100;
                *(undefined8 *)(lVar15 + 0x88) = uStack_108;
                *(undefined8 *)(lVar15 + 0xa0) = uStack_f0;
                *(undefined8 *)(lVar15 + 0x98) = uStack_f8;
                *(undefined8 *)(lVar15 + 0xa8) = uStack_e8;
                uVar14 = *(undefined8 *)(param_1 + 0x30);
                goto code_r0x0145ceac;
              }
            }
          }
        }
      }
    }
  }
LAB_0145ced8:
  auVar20 = func_0x00f78af4();
  puVar11 = auVar20._8_8_;
  lVar15 = auVar20._0_8_;
  uVar18 = puVar11[1];
  uVar14 = *puVar11;
  uVar19 = puVar11[3];
  uVar9 = puVar11[2];
  *(undefined8 *)(lVar15 + 0xa0) = puVar11[4];
  *(undefined8 *)(lVar15 + 0x88) = uVar18;
  *(undefined8 *)(lVar15 + 0x80) = uVar14;
  *(undefined8 *)(lVar15 + 0x98) = uVar19;
  *(undefined8 *)(lVar15 + 0x90) = uVar9;
  uVar18 = puVar8[1];
  uVar14 = *puVar8;
  uVar19 = puVar8[3];
  uVar9 = puVar8[2];
  *(undefined8 *)(lVar15 + 200) = puVar8[4];
  *(undefined8 *)(lVar15 + 0xc0) = uVar19;
  *(undefined8 *)(lVar15 + 0xb8) = uVar9;
  *(undefined8 *)(lVar15 + 0xb0) = uVar18;
  *(undefined8 *)(lVar15 + 0xa8) = uVar14;
  return;
}



// ============================================================
// RVA: 0x145cf20 | Atlas.Outlines.OutlineFeature..ctor
// ============================================================

void Atlas_Outlines_OutlineFeature___ctor(long param_1)

{
  long lVar1;
  
  if ((bRam0000000003eb47ee & 1) == 0) {
    func_0x00f78a20(0x3d28520);
    bRam0000000003eb47ee = 1;
  }
  lVar1 = func_0x00f78aec(/*Atlas.Outlines.OutlineFeature.OutlineSettings_TypeInfo*/ uRam0000000003d28520);
  *(undefined2 *)(lVar1 + 0x10) = 0x101;
  *(undefined4 *)(lVar1 + 0x2c) = 0x3a83126f;
  /*System.Object$$.ctor*/ func_0x0294d018(lVar1,0);
  *(long *)(param_1 + 0x20) = lVar1;
  *(undefined1 *)(param_1 + 0x18) = 1;
  if ((bRam0000000003ec0cc7 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ec0cc7 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*UnityEngine.Object$$.ctor*/ func_0x032343d4(param_1,0);
  if (pcRam0000000003ec0cc8 == (code *)0x0) {
    pcRam0000000003ec0cc8 =
         (code *)func_0x00f789d4(
                                "UnityEngine.ScriptableObject::CreateScriptableObject(UnityEngine.ScriptableObject)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x0324fa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec0cc8)(param_1);
  return;
}



// ============================================================
// RVA: 0x145cfbc | Atlas.Outlines.OutlineFeature..cctor
// ============================================================

void Atlas_Outlines_OutlineFeature___cctor(void)

{
  undefined4 uVar1;
  
  if ((bRam0000000003eb47ef & 1) == 0) {
    func_0x00f78a20(0x3d23af0);
    func_0x00f78a20(0x3d76cd0);
    func_0x00f78a20(0x3d77350);
    bRam0000000003eb47ef = 1;
  }
  uVar1 = /*UnityEngine.Shader$$PropertyToID*/ func_0x03261878(/*STR('_AntialiasTexture')*/ uRam0000000003d76cd0,0);
  **(undefined4 **)(/*Atlas.Outlines.OutlineFeature_TypeInfo*/ lRam0000000003d23af0 + 0xb8) = uVar1;
  uVar1 = /*UnityEngine.Shader$$PropertyToID*/ func_0x03261878(/*STR('_OutlineMipClamp')*/ uRam0000000003d77350,0);
  *(undefined4 *)(*(long *)(/*Atlas.Outlines.OutlineFeature_TypeInfo*/ lRam0000000003d23af0 + 0xb8) + 4) = uVar1;
  return;
}



