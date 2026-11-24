// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Definitions.AtlasAssetManagerExtensions

// ============================================================
// RVA: 0x1458624 | Atlas.Definitions.AtlasAssetManagerExtensions.RequestAsset
// ============================================================

undefined1 *
Atlas_Definitions_AtlasAssetManagerExtensions__RequestAsset
          (long param_1,long param_2,undefined1 *param_3,undefined1 *param_4,undefined1 *param_5)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined1 *puVar11;
  undefined1 *puVar12;
  long *extraout_x8;
  long *extraout_x8_00;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  long *plVar10;
  
  auVar13._8_8_ = unaff_x23;
  auVar13._0_8_ = unaff_x22;
  if ((bRam0000000003eb47c2 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb47c2 = 1;
  }
  if (((param_2 == 0) || (plVar7 = *(long **)(param_2 + 0x50), plVar7 == (long *)0x0)) ||
     (plVar7 = (long *)(**(code **)(*plVar7 + 0x198))(plVar7,*(undefined8 *)(*plVar7 + 0x1a0)),
     param_1 == 0)) {
    func_0x00f78af4();
    plVar7 = extraout_x8;
  }
  else if ((plVar7 == (long *)0x0) || (*plVar7 == /*string_TypeInfo*/ lRam0000000003d24dd0)) {
    puVar12 = (undefined1 *)0x0;
    puVar5 = (undefined1 *)register0x00000008;
Core_Assets_AssetManager__RequestAsset:
    do {
      puVar11 = (undefined1 *)0x0;
      *(undefined8 *)(puVar5 + -0x60) = unaff_x28;
      *(undefined8 *)(puVar5 + -0x58) = unaff_x27;
      *(undefined8 *)(puVar5 + -0x50) = unaff_x26;
      *(long **)(puVar5 + -0x48) = unaff_x25;
      *(undefined8 *)(puVar5 + -0x40) = unaff_x24;
      *(long *)(puVar5 + -0x38) = auVar13._8_8_;
      *(long *)(puVar5 + -0x30) = auVar13._0_8_;
      *(undefined1 **)(puVar5 + -0x28) = unaff_x21;
      *(undefined1 **)(puVar5 + -0x20) = unaff_x20;
      *(undefined1 **)(puVar5 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar5 + -0x10) = unaff_x29;
      *(undefined **)(puVar5 + -8) = unaff_x30;
      unaff_x26 = 0x3eb5000;
      unaff_x20 = puVar12;
      unaff_x19 = param_3;
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
      *(undefined8 *)(puVar5 + -0xf8) = 0;
      *(undefined4 *)(puVar5 + -0x100) = 0;
      if (*(long *)(param_1 + 0x30) != 0) {
        puVar11 = puVar5 + -0xf8;
        unaff_x20 = puRam0000000003d2fec0;
        iVar6 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(*(long *)(param_1 + 0x30),param_3);
        if ((iVar6 == 0) || (uVar8 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(plVar7,0), (uVar8 & 1) != 0)) {
          return (undefined1 *)0x0;
        }
        if (*(long *)(param_1 + 0x20) != 0) {
          puVar11 = puVar5 + -0x100;
          unaff_x20 = puRam0000000003d2fad0;
          uVar8 = /*System.Collections.Generic.Dictionary<string, AssetManagerHandle>$$TryGetValue*/ func_0x01ec0ed8(*(long *)(param_1 + 0x20),plVar7);
          if ((uVar8 & 1) == 0) {
            unaff_x20 = (undefined1 *)0x0;
            puVar11 = param_3;
            /*Core.Assets.AssetManager$$AddAsset*/ func_0x016360d4(puVar5 + -0xf0,param_1,plVar7);
            uVar3 = *(undefined4 *)(puVar5 + -0xf0);
            *(undefined4 *)(puVar5 + -0x100) = uVar3;
            unaff_x19 = puVar12;
code_r0x01635e94:
            uVar4 = *(uint *)(param_1 + 0x38);
            puVar12 = (undefined1 *)(ulong)uVar4;
            *(uint *)(param_1 + 0x38) = uVar4 + 1;
            lVar9 = *(long *)(param_1 + 0x10);
            if (lVar9 != 0) {
              *(uint *)(puVar5 + -0xf0) = uVar4;
              *(undefined4 *)(puVar5 + -0xec) = uVar3;
              *(undefined1 **)(puVar5 + -0xe8) = param_4;
              *(undefined1 **)(puVar5 + -0xe0) = param_5;
              *(undefined8 *)(puVar5 + -0xd8) = 0;
              puVar11 = puRam0000000003d3ccc0;
              /*System.Collections.Generic.List<AssetManager.AssetRequest>$$Add*/ func_0x024afe2c(lVar9,puVar5 + -0xf0);
              if (*(long *)(param_1 + 0x28) != 0) {
                puVar11 = (undefined1 *)(ulong)*(uint *)(puVar5 + -0x100);
                unaff_x20 = puRam0000000003d2dfd0;
                /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManagerHandle>$$set_Item*/ func_0x01e2cb1c(*(long *)(param_1 + 0x28),puVar12);
                if ((*(long *)(puVar5 + -0xf8) != 0) &&
                   (lVar9 = *(long *)(*(long *)(puVar5 + -0xf8) + 0x20), lVar9 != 0)) {
                  /*System.Collections.Generic.HashSet<AssetManagerHandle>$$Add*/ func_0x021cf8ec(lVar9,*(undefined4 *)(puVar5 + -0x100),uRam0000000003d35c70);
                  return puVar12;
                }
              }
            }
          }
          else if (*(long *)(param_1 + 0x18) != 0) {
            puVar11 = puRam0000000003d2e030;
            /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$get_Item*/ func_0x01e2fa1c(puVar5 + -0xf0,*(long *)(param_1 + 0x18),
                            *(undefined4 *)(puVar5 + -0x100));
            *(undefined8 *)(puVar5 + -0x138) = *(undefined8 *)(puVar5 + -0xa8);
            *(undefined8 *)(puVar5 + -0x140) = *(undefined8 *)(puVar5 + -0xb0);
            *(undefined8 *)(puVar5 + -0x128) = *(undefined8 *)(puVar5 + -0x98);
            *(undefined8 *)(puVar5 + -0x130) = *(undefined8 *)(puVar5 + -0xa0);
            *(undefined8 *)(puVar5 + -0x118) = *(undefined8 *)(puVar5 + -0x88);
            *(undefined8 *)(puVar5 + -0x120) = *(undefined8 *)(puVar5 + -0x90);
            *(undefined8 *)(puVar5 + -0x108) = *(undefined8 *)(puVar5 + -0x78);
            *(undefined8 *)(puVar5 + -0x110) = *(undefined8 *)(puVar5 + -0x80);
            *(undefined8 *)(puVar5 + -0x178) = *(undefined8 *)(puVar5 + -0xe8);
            *(undefined8 *)(puVar5 + -0x180) = *(undefined8 *)(puVar5 + -0xf0);
            *(undefined8 *)(puVar5 + -0x168) = *(undefined8 *)(puVar5 + -0xd8);
            *(undefined8 *)(puVar5 + -0x170) = *(undefined8 *)(puVar5 + -0xe0);
            *(undefined8 *)(puVar5 + -0x158) = *(undefined8 *)(puVar5 + -200);
            *(undefined8 *)(puVar5 + -0x160) = *(undefined8 *)(puVar5 + -0xd0);
            *(undefined8 *)(puVar5 + -0x148) = *(undefined8 *)(puVar5 + -0xb8);
            *(undefined8 *)(puVar5 + -0x150) = *(undefined8 *)(puVar5 + -0xc0);
            lVar9 = *(long *)(param_1 + 0x18);
            if (lVar9 != 0) {
              *(undefined8 *)(puVar5 + -0xa8) = *(undefined8 *)(puVar5 + -0x138);
              *(undefined8 *)(puVar5 + -0xb0) = *(undefined8 *)(puVar5 + -0x140);
              *(undefined8 *)(puVar5 + -0x98) = *(undefined8 *)(puVar5 + -0x128);
              *(undefined8 *)(puVar5 + -0xa0) = *(undefined8 *)(puVar5 + -0x130);
              *(undefined8 *)(puVar5 + -0x88) = *(undefined8 *)(puVar5 + -0x118);
              *(undefined8 *)(puVar5 + -0x90) = *(undefined8 *)(puVar5 + -0x120);
              *(undefined8 *)(puVar5 + -0x78) = *(undefined8 *)(puVar5 + -0x108);
              *(undefined8 *)(puVar5 + -0x80) = *(undefined8 *)(puVar5 + -0x110);
              *(undefined8 *)(puVar5 + -0xe8) = *(undefined8 *)(puVar5 + -0x178);
              *(undefined8 *)(puVar5 + -0xf0) = *(undefined8 *)(puVar5 + -0x180);
              *(undefined8 *)(puVar5 + -0xd8) = *(undefined8 *)(puVar5 + -0x168);
              *(undefined8 *)(puVar5 + -0xe0) = *(undefined8 *)(puVar5 + -0x170);
              *(undefined8 *)(puVar5 + -200) = *(undefined8 *)(puVar5 + -0x158);
              *(undefined8 *)(puVar5 + -0xd0) = *(undefined8 *)(puVar5 + -0x160);
              *(undefined8 *)(puVar5 + -0xb8) = *(undefined8 *)(puVar5 + -0x148);
              *(undefined8 *)(puVar5 + -0xc0) = *(undefined8 *)(puVar5 + -0x150);
              *(int *)(puVar5 + -0x70) = *(int *)(puVar5 + -0x70) + 1;
              *(undefined4 *)(puVar5 + -0x6c) = *(undefined4 *)(puVar5 + -0x6c);
              puVar11 = puVar5 + -0xf0;
              unaff_x20 = puRam0000000003d2e038;
              /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$set_Item*/ func_0x01e2fae4(lVar9,*(undefined4 *)(puVar5 + -0x100));
              uVar3 = *(undefined4 *)(puVar5 + -0x100);
              goto code_r0x01635e94;
            }
          }
        }
      }
      auVar13 = func_0x00f78af4();
      plVar10 = auVar13._8_8_;
      lVar9 = auVar13._0_8_;
      *(undefined8 *)(puVar5 + -0x1c0) = 0;
      *(undefined1 **)(puVar5 + -0x1b8) = param_3;
      *(undefined1 **)(puVar5 + -0x1b0) = puVar12;
      *(undefined1 **)(puVar5 + -0x1a8) = param_4;
      *(undefined1 **)(puVar5 + -0x1a0) = param_5;
      *(long *)(puVar5 + -0x198) = param_1;
      *(undefined1 **)(puVar5 + -400) = puVar5 + -0x10;
      *(undefined **)(puVar5 + -0x188) = &Core_Assets_AssetManager__RequestAsset;
      unaff_x29 = puVar5 + -400;
      unaff_x24 = 0x3eb5000;
      param_3 = puVar11;
      param_4 = unaff_x20;
      param_5 = unaff_x19;
      if ((bRam0000000003eb567c & 1) == 0) {
        func_0x00f78a20(0x3d24dd0);
        bRam0000000003eb567c = 1;
      }
      unaff_x25 = plVar7;
      if (plVar10 == (long *)0x0) {
        func_0x00f78af4();
        plVar7 = extraout_x8_00;
code_r0x01635fe4:
        unaff_x30 = &Core_Assets_AssetManager__RequestSpriteAsset;
        auVar14 = func_0x00f78e5c(plVar7);
        param_1 = auVar14._0_8_;
        puVar12 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
        puVar5 = puVar5 + -0x1c0;
        plVar7 = auVar14._8_8_;
        unaff_x21 = puVar11;
        goto Core_Assets_AssetManager__RequestAsset;
      }
      plVar7 = (long *)(**(code **)(*plVar10 + 0x198))(plVar10,*(undefined8 *)(*plVar10 + 0x1a0));
      if ((plVar7 != (long *)0x0) && (*plVar7 != /*string_TypeInfo*/ lRam0000000003d24dd0)) goto code_r0x01635fe4;
      puVar12 = (undefined1 *)0x0;
      unaff_x29 = *(undefined1 **)(puVar5 + -400);
      unaff_x30 = *(undefined **)(puVar5 + -0x188);
      plVar10 = (long *)(puVar5 + -0x1a0);
      plVar1 = (long *)(puVar5 + -0x198);
      plVar2 = (long *)(puVar5 + -0x1a8);
      unaff_x24 = *(undefined8 *)(puVar5 + -0x1c0);
      auVar13._8_8_ = *(undefined8 *)(puVar5 + -0x1b8);
      auVar13._0_8_ = *(undefined8 *)(puVar5 + -0x1b0);
      puVar5 = puVar5 + -0x180;
      param_1 = lVar9;
      param_3 = puVar11;
      param_4 = unaff_x20;
      param_5 = unaff_x19;
      unaff_x19 = (undefined1 *)*plVar1;
      unaff_x20 = (undefined1 *)*plVar10;
      unaff_x21 = (undefined1 *)*plVar2;
    } while( true );
  }
  lVar9 = func_0x00f78e5c(plVar7);
  return *(undefined1 **)(lVar9 + 0x48);
}



