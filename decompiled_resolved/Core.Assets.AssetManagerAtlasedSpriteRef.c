// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Assets.AssetManagerAtlasedSpriteRef

// ============================================================
// RVA: 0x16377c8 | Core.Assets.AssetManagerAtlasedSpriteRef.get_Sprite
// ============================================================

undefined8 Core_Assets_AssetManagerAtlasedSpriteRef__get_Sprite(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x16377d0 | Core.Assets.AssetManagerAtlasedSpriteRef.RequestLoad
// ============================================================

undefined1 *
Core_Assets_AssetManagerAtlasedSpriteRef__RequestLoad(long param_1,long param_2,undefined1 *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined8 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  long *extraout_x8;
  long *extraout_x8_00;
  undefined1 *puVar22;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *unaff_x21;
  undefined1 *puVar23;
  long unaff_x22;
  long *unaff_x23;
  undefined8 unaff_x24;
  long *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *puVar24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auVar25 [16];
  
  if ((bRam0000000003eb5693 & 1) == 0) {
    func_0x00f78a20(0x3d26968);
    func_0x00f78a20(0x3d51bd8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5693 = 1;
  }
  plVar14 = *(long **)(param_1 + 0x10);
  if (plVar14 == (long *)0x0) {
    return (undefined1 *)0x0;
  }
  uVar15 = (**(code **)(*plVar14 + 0x1a8))(plVar14,*(undefined8 *)(*plVar14 + 0x1b0));
  puVar16 = (undefined1 *)/*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(uVar15,0);
  if (((ulong)puVar16 & 1) != 0) {
    return puVar16;
  }
  uVar15 = *(undefined8 *)(param_1 + 0x18);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar19 = (undefined8 *)0x0;
  puVar16 = (undefined1 *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar15,0);
  if ((int)puVar16 == 0) {
    return puVar16;
  }
  plVar14 = *(long **)(param_1 + 0x10);
  puVar16 = (undefined1 *)func_0x00f78aec(/*Core.Assets.AssetManager.AssetLoadSuccessHandler_TypeInfo*/ uRam0000000003d26968);
  puVar7 = puRam0000000003d51bd8;
  *(undefined8 *)(puVar16 + 0x10) = *puRam0000000003d51bd8;
  *(long *)(puVar16 + 0x20) = param_1;
  *(undefined8 **)(puVar16 + 0x28) = puVar7;
  if (param_2 == 0) {
    auVar25 = func_0x00f78af4();
    puVar16 = auVar25._0_8_;
    *(undefined8 *)(puVar16 + 0x10) = *puVar19;
    *(long *)(puVar16 + 0x20) = auVar25._8_8_;
    *(undefined8 **)(puVar16 + 0x28) = puVar19;
    return puVar16;
  }
  puVar21 = (undefined1 *)0x0;
  puVar8 = &stack0xffffffffffffffc0;
  puVar24 = &stack0xfffffffffffffff0;
  puVar22 = (undefined1 *)0x0;
  uVar15 = 0x3eb5000;
  puVar17 = param_3;
  puVar20 = puVar16;
  if ((bRam0000000003eb567d & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb567d = 1;
  }
  if (plVar14 == (long *)0x0) {
    func_0x00f78af4();
    plVar13 = extraout_x8_00;
  }
  else {
    plVar13 = (long *)(**(code **)(*plVar14 + 0x198))(plVar14,*(undefined8 *)(*plVar14 + 0x1a0));
    if ((plVar13 == (long *)0x0) || (*plVar13 == /*string_TypeInfo*/ lRam0000000003d24dd0)) {
      puVar18 = (undefined1 *)0x0;
      puVar23 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
      puVar8 = (undefined1 *)register0x00000008;
      lVar10 = param_2;
      puVar17 = param_3;
      puVar20 = puVar16;
      puVar21 = puVar22;
      puVar22 = unaff_x19;
      puVar16 = unaff_x20;
      param_3 = unaff_x21;
      param_2 = unaff_x22;
      plVar14 = unaff_x23;
      uVar15 = unaff_x24;
      puVar24 = unaff_x29;
      goto Core_Assets_AssetManager__RequestAsset;
    }
  }
  unaff_x30 = Core_Assets_AssetManager__RequestMultipleAssets;
  auVar25 = func_0x00f78e5c(plVar13);
  lVar10 = auVar25._0_8_;
  puVar18 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
  puVar23 = (undefined1 *)0x0;
  plVar13 = auVar25._8_8_;
Core_Assets_AssetManager__RequestAsset:
  do {
    *(undefined8 *)(puVar8 + -0x60) = unaff_x28;
    *(undefined8 *)(puVar8 + -0x58) = unaff_x27;
    *(undefined8 *)(puVar8 + -0x50) = unaff_x26;
    *(long **)(puVar8 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar8 + -0x40) = uVar15;
    *(long **)(puVar8 + -0x38) = plVar14;
    *(long *)(puVar8 + -0x30) = param_2;
    *(undefined1 **)(puVar8 + -0x28) = param_3;
    *(undefined1 **)(puVar8 + -0x20) = puVar16;
    *(undefined1 **)(puVar8 + -0x18) = puVar22;
    *(undefined1 **)(puVar8 + -0x10) = puVar24;
    *(code **)(puVar8 + -8) = unaff_x30;
    unaff_x26 = 0x3eb5000;
    param_3 = puVar18;
    puVar16 = puVar23;
    puVar22 = puVar17;
    if ((bRam0000000003eb567e & 1) == 0) {
      func_0x00f78a20(0x3d2fec0);
      func_0x00f78a20(0x3d2fad0);
      func_0x00f78a20(0x3d2e030);
      func_0x00f78a20(0x3d2dfd0);
      func_0x00f78a20(0x3d2e038);
      func_0x00f78a20(0x3d35c70);
      func_0x00f78a20(0x3d3ccc0);
      bRam0000000003eb567e = 1;
    }
    *(undefined8 *)(puVar8 + -0xf8) = 0;
    *(undefined4 *)(puVar8 + -0x100) = 0;
    if (*(long *)(lVar10 + 0x30) != 0) {
      param_3 = puVar8 + -0xf8;
      puVar16 = puRam0000000003d2fec0;
      iVar9 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(*(long *)(lVar10 + 0x30),puVar17);
      if ((iVar9 == 0) || (uVar11 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(plVar13,0), (uVar11 & 1) != 0)) {
        return (undefined1 *)0x0;
      }
      if (*(long *)(lVar10 + 0x20) != 0) {
        param_3 = puVar8 + -0x100;
        puVar16 = puRam0000000003d2fad0;
        uVar11 = /*System.Collections.Generic.Dictionary<string, AssetManagerHandle>$$TryGetValue*/ func_0x01ec0ed8(*(long *)(lVar10 + 0x20),plVar13);
        if ((uVar11 & 1) == 0) {
          param_3 = puVar17;
          puVar16 = puVar18;
          Core_Assets_AssetManager__AddAsset(puVar8 + -0xf0,lVar10,plVar13);
          uVar5 = *(undefined4 *)(puVar8 + -0xf0);
          *(undefined4 *)(puVar8 + -0x100) = uVar5;
          puVar22 = puVar23;
code_r0x01635e94:
          uVar6 = *(uint *)(lVar10 + 0x38);
          puVar23 = (undefined1 *)(ulong)uVar6;
          *(uint *)(lVar10 + 0x38) = uVar6 + 1;
          lVar12 = *(long *)(lVar10 + 0x10);
          if (lVar12 != 0) {
            *(uint *)(puVar8 + -0xf0) = uVar6;
            *(undefined4 *)(puVar8 + -0xec) = uVar5;
            *(undefined1 **)(puVar8 + -0xe8) = puVar20;
            *(undefined1 **)(puVar8 + -0xe0) = puVar21;
            *(undefined8 *)(puVar8 + -0xd8) = 0;
            param_3 = puRam0000000003d3ccc0;
            /*System.Collections.Generic.List<AssetManager.AssetRequest>$$Add*/ func_0x024afe2c(lVar12,puVar8 + -0xf0);
            if (*(long *)(lVar10 + 0x28) != 0) {
              param_3 = (undefined1 *)(ulong)*(uint *)(puVar8 + -0x100);
              puVar16 = puRam0000000003d2dfd0;
              /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManagerHandle>$$set_Item*/ func_0x01e2cb1c(*(long *)(lVar10 + 0x28),puVar23);
              if ((*(long *)(puVar8 + -0xf8) != 0) &&
                 (lVar12 = *(long *)(*(long *)(puVar8 + -0xf8) + 0x20), lVar12 != 0)) {
                /*System.Collections.Generic.HashSet<AssetManagerHandle>$$Add*/ func_0x021cf8ec(lVar12,*(undefined4 *)(puVar8 + -0x100),uRam0000000003d35c70);
                return puVar23;
              }
            }
          }
        }
        else if (*(long *)(lVar10 + 0x18) != 0) {
          param_3 = puRam0000000003d2e030;
          /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$get_Item*/ func_0x01e2fa1c(puVar8 + -0xf0,*(long *)(lVar10 + 0x18),*(undefined4 *)(puVar8 + -0x100));
          *(undefined8 *)(puVar8 + -0x138) = *(undefined8 *)(puVar8 + -0xa8);
          *(undefined8 *)(puVar8 + -0x140) = *(undefined8 *)(puVar8 + -0xb0);
          *(undefined8 *)(puVar8 + -0x128) = *(undefined8 *)(puVar8 + -0x98);
          *(undefined8 *)(puVar8 + -0x130) = *(undefined8 *)(puVar8 + -0xa0);
          *(undefined8 *)(puVar8 + -0x118) = *(undefined8 *)(puVar8 + -0x88);
          *(undefined8 *)(puVar8 + -0x120) = *(undefined8 *)(puVar8 + -0x90);
          *(undefined8 *)(puVar8 + -0x108) = *(undefined8 *)(puVar8 + -0x78);
          *(undefined8 *)(puVar8 + -0x110) = *(undefined8 *)(puVar8 + -0x80);
          *(undefined8 *)(puVar8 + -0x178) = *(undefined8 *)(puVar8 + -0xe8);
          *(undefined8 *)(puVar8 + -0x180) = *(undefined8 *)(puVar8 + -0xf0);
          *(undefined8 *)(puVar8 + -0x168) = *(undefined8 *)(puVar8 + -0xd8);
          *(undefined8 *)(puVar8 + -0x170) = *(undefined8 *)(puVar8 + -0xe0);
          *(undefined8 *)(puVar8 + -0x158) = *(undefined8 *)(puVar8 + -200);
          *(undefined8 *)(puVar8 + -0x160) = *(undefined8 *)(puVar8 + -0xd0);
          *(undefined8 *)(puVar8 + -0x148) = *(undefined8 *)(puVar8 + -0xb8);
          *(undefined8 *)(puVar8 + -0x150) = *(undefined8 *)(puVar8 + -0xc0);
          lVar12 = *(long *)(lVar10 + 0x18);
          if (lVar12 != 0) {
            *(undefined8 *)(puVar8 + -0xa8) = *(undefined8 *)(puVar8 + -0x138);
            *(undefined8 *)(puVar8 + -0xb0) = *(undefined8 *)(puVar8 + -0x140);
            *(undefined8 *)(puVar8 + -0x98) = *(undefined8 *)(puVar8 + -0x128);
            *(undefined8 *)(puVar8 + -0xa0) = *(undefined8 *)(puVar8 + -0x130);
            *(undefined8 *)(puVar8 + -0x88) = *(undefined8 *)(puVar8 + -0x118);
            *(undefined8 *)(puVar8 + -0x90) = *(undefined8 *)(puVar8 + -0x120);
            *(undefined8 *)(puVar8 + -0x78) = *(undefined8 *)(puVar8 + -0x108);
            *(undefined8 *)(puVar8 + -0x80) = *(undefined8 *)(puVar8 + -0x110);
            *(undefined8 *)(puVar8 + -0xe8) = *(undefined8 *)(puVar8 + -0x178);
            *(undefined8 *)(puVar8 + -0xf0) = *(undefined8 *)(puVar8 + -0x180);
            *(undefined8 *)(puVar8 + -0xd8) = *(undefined8 *)(puVar8 + -0x168);
            *(undefined8 *)(puVar8 + -0xe0) = *(undefined8 *)(puVar8 + -0x170);
            *(undefined8 *)(puVar8 + -200) = *(undefined8 *)(puVar8 + -0x158);
            *(undefined8 *)(puVar8 + -0xd0) = *(undefined8 *)(puVar8 + -0x160);
            *(undefined8 *)(puVar8 + -0xb8) = *(undefined8 *)(puVar8 + -0x148);
            *(undefined8 *)(puVar8 + -0xc0) = *(undefined8 *)(puVar8 + -0x150);
            *(int *)(puVar8 + -0x70) = *(int *)(puVar8 + -0x70) + 1;
            *(undefined4 *)(puVar8 + -0x6c) = *(undefined4 *)(puVar8 + -0x6c);
            param_3 = puVar8 + -0xf0;
            puVar16 = puRam0000000003d2e038;
            /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$set_Item*/ func_0x01e2fae4(lVar12,*(undefined4 *)(puVar8 + -0x100));
            uVar5 = *(undefined4 *)(puVar8 + -0x100);
            goto code_r0x01635e94;
          }
        }
      }
    }
    auVar25 = func_0x00f78af4();
    plVar14 = auVar25._8_8_;
    param_2 = auVar25._0_8_;
    *(undefined1 **)(puVar8 + -0x1c0) = puVar18;
    *(undefined1 **)(puVar8 + -0x1b8) = puVar17;
    *(undefined1 **)(puVar8 + -0x1b0) = puVar23;
    *(undefined1 **)(puVar8 + -0x1a8) = puVar20;
    *(undefined1 **)(puVar8 + -0x1a0) = puVar21;
    *(long *)(puVar8 + -0x198) = lVar10;
    *(undefined1 **)(puVar8 + -400) = puVar8 + -0x10;
    *(code **)(puVar8 + -0x188) = Core_Assets_AssetManager__RequestAsset;
    puVar24 = puVar8 + -400;
    uVar15 = 0x3eb5000;
    puVar17 = param_3;
    puVar20 = puVar16;
    puVar21 = puVar22;
    if ((bRam0000000003eb567c & 1) == 0) {
      func_0x00f78a20(0x3d24dd0);
      bRam0000000003eb567c = 1;
    }
    unaff_x25 = plVar13;
    if (plVar14 == (long *)0x0) {
      func_0x00f78af4();
      plVar13 = extraout_x8;
LAB_01635fe4:
      unaff_x30 = Core_Assets_AssetManager__RequestSpriteAsset;
      auVar25 = func_0x00f78e5c(plVar13);
      lVar10 = auVar25._0_8_;
      puVar18 = (undefined1 *)0x0;
      puVar23 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
      puVar8 = puVar8 + -0x1c0;
      plVar13 = auVar25._8_8_;
      goto Core_Assets_AssetManager__RequestAsset;
    }
    plVar13 = (long *)(**(code **)(*plVar14 + 0x198))(plVar14,*(undefined8 *)(*plVar14 + 0x1a0));
    if ((plVar13 != (long *)0x0) && (*plVar13 != /*string_TypeInfo*/ lRam0000000003d24dd0)) goto LAB_01635fe4;
    puVar18 = (undefined1 *)0x0;
    puVar23 = (undefined1 *)0x0;
    puVar24 = *(undefined1 **)(puVar8 + -400);
    unaff_x30 = *(code **)(puVar8 + -0x188);
    plVar1 = (long *)(puVar8 + -0x1a0);
    plVar3 = (long *)(puVar8 + -0x198);
    plVar2 = (long *)(puVar8 + -0x1b0);
    plVar4 = (long *)(puVar8 + -0x1a8);
    uVar15 = *(undefined8 *)(puVar8 + -0x1c0);
    plVar14 = *(long **)(puVar8 + -0x1b8);
    puVar8 = puVar8 + -0x180;
    lVar10 = param_2;
    puVar17 = param_3;
    puVar20 = puVar16;
    puVar21 = puVar22;
    puVar22 = (undefined1 *)*plVar3;
    puVar16 = (undefined1 *)*plVar1;
    param_3 = (undefined1 *)*plVar4;
    param_2 = *plVar2;
  } while( true );
}



// ============================================================
// RVA: 0x16378f4 | Core.Assets.AssetManagerAtlasedSpriteRef.OnAssetLoadSuccessfully
// ============================================================

void Core_Assets_AssetManagerAtlasedSpriteRef__OnAssetLoadSuccessfully(long param_1,long *param_2)

{
  if ((bRam0000000003eb5694 & 1) == 0) {
    func_0x00f78a20(0x3d24b88);
    bRam0000000003eb5694 = 1;
  }
  if (param_2 == (long *)0x0) {
    param_2 = (long *)0x0;
  }
  else if (*param_2 != /*UnityEngine.Sprite_TypeInfo*/ lRam0000000003d24b88) {
    param_2 = (long *)0x0;
  }
  *(long **)(param_1 + 0x18) = param_2;
  return;
}



// ============================================================
// RVA: 0x1637964 | Core.Assets.AssetManagerAtlasedSpriteRef..ctor
// ============================================================

void Core_Assets_AssetManagerAtlasedSpriteRef___ctor(void)

{
  return;
}



