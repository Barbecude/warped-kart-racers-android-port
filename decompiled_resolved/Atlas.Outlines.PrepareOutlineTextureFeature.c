// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Outlines.PrepareOutlineTextureFeature

// ============================================================
// RVA: 0x145d05c | Atlas.Outlines.PrepareOutlineTextureFeature.get_OutlineColourTexture
// ============================================================

undefined8 Atlas_Outlines_PrepareOutlineTextureFeature__get_OutlineColourTexture(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



// ============================================================
// RVA: 0x145d064 | Atlas.Outlines.PrepareOutlineTextureFeature.get_OutlineDepthTexture
// ============================================================

undefined8 Atlas_Outlines_PrepareOutlineTextureFeature__get_OutlineDepthTexture(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



// ============================================================
// RVA: 0x145d06c | Atlas.Outlines.PrepareOutlineTextureFeature.Create
// ============================================================

void Atlas_Outlines_PrepareOutlineTextureFeature__Create(long param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if ((bRam0000000003eb47f0 & 1) == 0) {
    func_0x00f78a20(0x3d28750);
    bRam0000000003eb47f0 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar1 = *(undefined1 *)(param_1 + 0x34);
  uVar2 = func_0x00f78aec(/*Atlas.Outlines.PrepareOutlineTextureFeature.PrepareOutlineTexturePass_TypeInfo*/ uRam0000000003d28750);
  /*Atlas.Outlines.PrepareOutlineTextureFeature.PrepareOutlineTexturePass$$.ctor*/ func_0x0145d0ec(uVar4,uVar2,uVar3,uVar1);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  return;
}



// ============================================================
// RVA: 0x145d4d8 | Atlas.Outlines.PrepareOutlineTextureFeature.AddRenderPasses
// ============================================================

void Atlas_Outlines_PrepareOutlineTextureFeature__AddRenderPasses
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_208 [472];
  
  _memcpy(auStack_208,param_3,0x1d8);
  /*Atlas.Outlines.PrepareOutlineTextureFeature$$AddRenderPassesDevice*/ func_0x0145d528(param_1,param_2,auStack_208);
  return;
}



// ============================================================
// RVA: 0x145d528 | Atlas.Outlines.PrepareOutlineTextureFeature.AddRenderPassesDevice
// ============================================================

/* WARNING: Possible PIC construction at 0x0145d70c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0145d710) */
/* WARNING: Removing unreachable block (ram,0x0145d724) */
/* WARNING: Removing unreachable block (ram,0x0145d72c) */
/* WARNING: Removing unreachable block (ram,0x0145d738) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_Outlines_PrepareOutlineTextureFeature__AddRenderPassesDevice
               (long param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  ulong extraout_x1;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar7 = param_3;
  if ((bRam0000000003eb47f1 & 1) == 0) {
    func_0x00f78a20(0x3d232c0);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d23e20);
    bRam0000000003eb47f1 = 1;
  }
  iVar2 = *(int *)(param_3 + 0x15);
  iVar1 = *(int *)((long)param_3 + 0xac);
  fVar18 = *(float *)(param_1 + 0x30);
  if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar10 = _UNK_033f7d88;
  dVar11 = (double)/*System.Math$$Max*/ func_0x02b01fb0(_UNK_033f7d88,(double)fVar18,0);
  dVar16 = dVar11 * (double)iVar2;
  dVar11 = -(dVar11 * (double)iVar2);
  if (dVar16 != INFINITY) {
    dVar11 = dVar16;
  }
  dVar16 = (double)/*System.Math$$Max*/ func_0x02b01fb0(uVar10,(double)*(float *)(param_1 + 0x30),0);
  dVar17 = dVar16 * (double)iVar1;
  dVar16 = -(dVar16 * (double)iVar1);
  if (dVar17 != INFINITY) {
    dVar16 = dVar17;
  }
  uVar10 = *(undefined8 *)(param_1 + 0x40);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar6 = (ulong)(uint)(int)dVar11;
  puVar8 = (undefined8 *)(ulong)(uint)(int)dVar16;
  iVar2 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar10,0);
  if (iVar2 == 0) {
LAB_0145d684:
    uVar10 = *(undefined8 *)(param_1 + 0x40);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar2 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar10,0);
    if (iVar2 != 0) {
      if (*(long *)(param_1 + 0x40) == 0) goto LAB_0145d7bc;
      /*UnityEngine.RenderTexture$$Release*/ func_0x03259fb0(*(long *)(param_1 + 0x40),0);
    }
    uVar10 = *(undefined8 *)(param_1 + 0x48);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar2 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar10,0);
    if (iVar2 == 0) goto code_r0x0145d7c0;
    if (*(long *)(param_1 + 0x48) != 0) {
      /*UnityEngine.RenderTexture$$Release*/ func_0x03259fb0(*(long *)(param_1 + 0x48),0);
      goto code_r0x0145d7c0;
    }
  }
  else {
    plVar4 = *(long **)(param_1 + 0x40);
    if (plVar4 != (long *)0x0) {
      uVar3 = (**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400));
      if (uVar3 != (int)dVar11) goto LAB_0145d684;
      plVar4 = *(long **)(param_1 + 0x40);
      if (plVar4 != (long *)0x0) {
        uVar3 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
        if (uVar3 != (int)dVar16) goto LAB_0145d684;
        lVar5 = *(long *)(param_1 + 0x38);
        uVar10 = *(undefined8 *)(param_1 + 0x40);
        /*UnityEngine.Rendering.RenderTargetIdentifier$$op_Implicit*/ func_0x03259324(&uStack_88,0,0);
        if (lVar5 != 0) {
          uVar9 = *(undefined1 *)(param_1 + 0x35);
          *(undefined8 *)(lVar5 + 0x180) = uVar10;
          *(undefined8 *)(lVar5 + 400) = uStack_80;
          *(undefined8 *)(lVar5 + 0x188) = uStack_88;
          *(undefined8 *)(lVar5 + 0x1a0) = uStack_70;
          *(undefined8 *)(lVar5 + 0x198) = uStack_78;
          *(undefined8 *)(lVar5 + 0x1a8) = uStack_68;
          *(long *)(lVar5 + 0x1b0) = param_2;
          *(undefined1 *)(lVar5 + 0x1b8) = uVar9;
          if (param_2 != 0) {
            lVar5 = /*UnityEngine.Rendering.Universal.ScriptableRenderer$$EnqueuePass*/ func_0x03143324(param_2,*(undefined8 *)(param_1 + 0x38),0);
            return lVar5;
          }
        }
      }
    }
  }
LAB_0145d7bc:
  func_0x00f78af4();
  uVar6 = extraout_x1;
  puVar8 = puVar7;
code_r0x0145d7c0:
  if ((bRam0000000003eb47f2 & 1) == 0) {
    func_0x00f78a20(0x3d243b8);
    func_0x00f78a20(0x3d70d90);
    bRam0000000003eb47f2 = 1;
  }
  lVar5 = func_0x00f78aec(/*UnityEngine.RenderTexture_TypeInfo*/ uRam0000000003d243b8);
  uVar10 = 0;
  uVar9 = 0xc;
  /*UnityEngine.RenderTexture$$.ctor*/ func_0x0325a964(lVar5,uVar6);
  if (lVar5 != 0) {
    /*UnityEngine.Object$$set_name*/ func_0x03248994(lVar5,/*STR('Outline Color Texture')*/ uRam0000000003d70d90,0);
    /*UnityEngine.Texture$$set_filterMode*/ func_0x0326ea28(lVar5,1,0);
    return lVar5;
  }
  auVar19 = func_0x00f78af4();
  lVar5 = auVar19._0_8_;
  *(long *)(lVar5 + 0x180) = auVar19._8_8_;
  uVar13 = puVar8[1];
  uVar12 = *puVar8;
  uVar15 = puVar8[3];
  uVar14 = puVar8[2];
  *(undefined8 *)(lVar5 + 0x1a8) = puVar8[4];
  *(undefined8 *)(lVar5 + 400) = uVar13;
  *(undefined8 *)(lVar5 + 0x188) = uVar12;
  *(undefined8 *)(lVar5 + 0x1a0) = uVar15;
  *(undefined8 *)(lVar5 + 0x198) = uVar14;
  *(undefined8 *)(lVar5 + 0x1b0) = uVar10;
  *(undefined1 *)(lVar5 + 0x1b8) = uVar9;
  return lVar5;
}



// ============================================================
// RVA: 0x145d7c0 | Atlas.Outlines.PrepareOutlineTextureFeature.RecreateColorTexture
// ============================================================

long Atlas_Outlines_PrepareOutlineTextureFeature__RecreateColorTexture
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  if ((bRam0000000003eb47f2 & 1) == 0) {
    func_0x00f78a20(0x3d243b8);
    func_0x00f78a20(0x3d70d90);
    bRam0000000003eb47f2 = 1;
  }
  lVar1 = func_0x00f78aec(/*UnityEngine.RenderTexture_TypeInfo*/ uRam0000000003d243b8);
  uVar2 = 0;
  uVar3 = 0xc;
  /*UnityEngine.RenderTexture$$.ctor*/ func_0x0325a964(lVar1,param_2);
  if (lVar1 != 0) {
    /*UnityEngine.Object$$set_name*/ func_0x03248994(lVar1,/*STR('Outline Color Texture')*/ uRam0000000003d70d90,0);
    /*UnityEngine.Texture$$set_filterMode*/ func_0x0326ea28(lVar1,1,0);
    return lVar1;
  }
  auVar8 = func_0x00f78af4();
  lVar1 = auVar8._0_8_;
  *(long *)(lVar1 + 0x180) = auVar8._8_8_;
  uVar5 = param_3[1];
  uVar4 = *param_3;
  uVar7 = param_3[3];
  uVar6 = param_3[2];
  *(undefined8 *)(lVar1 + 0x1a8) = param_3[4];
  *(undefined8 *)(lVar1 + 400) = uVar5;
  *(undefined8 *)(lVar1 + 0x188) = uVar4;
  *(undefined8 *)(lVar1 + 0x1a0) = uVar7;
  *(undefined8 *)(lVar1 + 0x198) = uVar6;
  *(undefined8 *)(lVar1 + 0x1b0) = uVar2;
  *(undefined1 *)(lVar1 + 0x1b8) = uVar3;
  return lVar1;
}



// ============================================================
// RVA: 0x145d898 | Atlas.Outlines.PrepareOutlineTextureFeature.RecreateDepthTexture
// ============================================================

long Atlas_Outlines_PrepareOutlineTextureFeature__RecreateDepthTexture
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  if ((bRam0000000003eb47f3 & 1) == 0) {
    func_0x00f78a20(0x3d243b8);
    func_0x00f78a20(0x3d70d98);
    bRam0000000003eb47f3 = 1;
  }
  lVar1 = func_0x00f78aec(/*UnityEngine.RenderTexture_TypeInfo*/ uRam0000000003d243b8);
  /*UnityEngine.RenderTexture$$.ctor*/ func_0x0325a964(lVar1,param_2,param_3,0x10,0x19,0);
  if (lVar1 != 0) {
    /*UnityEngine.Object$$set_name*/ func_0x03248994(lVar1,/*STR('Outline Depth Texture')*/ uRam0000000003d70d98,0);
    return lVar1;
  }
  lVar1 = func_0x00f78af4();
  *(undefined4 *)(lVar1 + 0x30) = 0x3f800000;
  *(undefined1 *)(lVar1 + 0x18) = 1;
  if ((bRam0000000003ec0cc7 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ec0cc7 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*UnityEngine.Object$$.ctor*/ func_0x032343d4(lVar1,0);
  if (pcRam0000000003ec0cc8 == (code *)0x0) {
    pcRam0000000003ec0cc8 =
         (code *)func_0x00f789d4(
                                "UnityEngine.ScriptableObject::CreateScriptableObject(UnityEngine.ScriptableObject)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x0324fa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*pcRam0000000003ec0cc8)(lVar1);
  return lVar1;
}



// ============================================================
// RVA: 0x145d93c | Atlas.Outlines.PrepareOutlineTextureFeature..ctor
// ============================================================

void Atlas_Outlines_PrepareOutlineTextureFeature___ctor(long param_1)

{
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
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
// RVA: 0x145d94c | Atlas.Outlines.PrepareOutlineTextureFeature..cctor
// ============================================================

void Atlas_Outlines_PrepareOutlineTextureFeature___cctor(void)

{
  undefined4 uVar1;
  
  if ((bRam0000000003eb47f4 & 1) == 0) {
    func_0x00f78a20(0x3d23e20);
    func_0x00f78a20(0x3d77348);
    bRam0000000003eb47f4 = 1;
  }
  uVar1 = /*UnityEngine.Shader$$PropertyToID*/ func_0x03261878(/*STR('_OutlineColorTexture')*/ uRam0000000003d77348,0);
  **(undefined4 **)(/*Atlas.Outlines.PrepareOutlineTextureFeature_TypeInfo*/ lRam0000000003d23e20 + 0xb8) = uVar1;
  return;
}



