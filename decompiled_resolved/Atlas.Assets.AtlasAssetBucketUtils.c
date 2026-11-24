// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Assets.AtlasAssetBucketUtils

// ============================================================
// RVA: 0x1458320 | Atlas.Assets.AtlasAssetBucketUtils.CreateBuckets
// ============================================================

/* WARNING: Possible PIC construction at 0x01458440: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01458470: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014584a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014584d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01458500: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01635710: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014585b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01635be8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014585f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014585bc) */
/* WARNING: Removing unreachable block (ram,0x01635714) */
/* WARNING: Removing unreachable block (ram,0x01635718) */
/* WARNING: Removing unreachable block (ram,0x0163577c) */
/* WARNING: Removing unreachable block (ram,0x01635750) */
/* WARNING: Removing unreachable block (ram,0x01ed77c0) */
/* WARNING: Removing unreachable block (ram,0x01ed77e8) */
/* WARNING: Removing unreachable block (ram,0x01ed7810) */
/* WARNING: Removing unreachable block (ram,0x01ed7828) */
/* WARNING: Removing unreachable block (ram,0x01ed784c) */
/* WARNING: Removing unreachable block (ram,0x01ed786c) */
/* WARNING: Removing unreachable block (ram,0x01ed7878) */
/* WARNING: Removing unreachable block (ram,0x01ed78b8) */
/* WARNING: Removing unreachable block (ram,0x01ed78bc) */
/* WARNING: Removing unreachable block (ram,0x01ed78e0) */
/* WARNING: Removing unreachable block (ram,0x01ed797c) */
/* WARNING: Removing unreachable block (ram,0x01ed7908) */
/* WARNING: Removing unreachable block (ram,0x01ed7928) */
/* WARNING: Removing unreachable block (ram,0x01ed7934) */
/* WARNING: Removing unreachable block (ram,0x01ed7994) */
/* WARNING: Removing unreachable block (ram,0x01ed7998) */
/* WARNING: Removing unreachable block (ram,0x01ed79bc) */
/* WARNING: Removing unreachable block (ram,0x01ed79c8) */
/* WARNING: Removing unreachable block (ram,0x01ed79d4) */
/* WARNING: Removing unreachable block (ram,0x01ed79e4) */
/* WARNING: Removing unreachable block (ram,0x01ed79ec) */
/* WARNING: Removing unreachable block (ram,0x01ed7a34) */
/* WARNING: Removing unreachable block (ram,0x01ed7a40) */
/* WARNING: Removing unreachable block (ram,0x01ed7a74) */
/* WARNING: Removing unreachable block (ram,0x01ed7b20) */
/* WARNING: Removing unreachable block (ram,0x01ed7b2c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b34) */
/* WARNING: Removing unreachable block (ram,0x01ed7b3c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b40) */
/* WARNING: Removing unreachable block (ram,0x01ed7b48) */
/* WARNING: Removing unreachable block (ram,0x01ed7b50) */
/* WARNING: Removing unreachable block (ram,0x01ed7a94) */
/* WARNING: Removing unreachable block (ram,0x01ed7ab8) */
/* WARNING: Removing unreachable block (ram,0x01ed7ac4) */
/* WARNING: Removing unreachable block (ram,0x01ed7acc) */
/* WARNING: Removing unreachable block (ram,0x01ed7ad8) */
/* WARNING: Removing unreachable block (ram,0x01ed7ae4) */
/* WARNING: Removing unreachable block (ram,0x01ed7b80) */
/* WARNING: Removing unreachable block (ram,0x01ed7b84) */
/* WARNING: Removing unreachable block (ram,0x01ed7bb0) */
/* WARNING: Removing unreachable block (ram,0x01ed7bb8) */
/* WARNING: Removing unreachable block (ram,0x01ed7bc8) */
/* WARNING: Removing unreachable block (ram,0x01ed7bd0) */
/* WARNING: Removing unreachable block (ram,0x01ed7d50) */
/* WARNING: Removing unreachable block (ram,0x01ed7bfc) */
/* WARNING: Removing unreachable block (ram,0x01ed7c08) */
/* WARNING: Removing unreachable block (ram,0x01ed7c10) */
/* WARNING: Removing unreachable block (ram,0x01ed7c18) */
/* WARNING: Removing unreachable block (ram,0x01ed7c24) */
/* WARNING: Removing unreachable block (ram,0x01ed7c2c) */
/* WARNING: Removing unreachable block (ram,0x01ed7c90) */
/* WARNING: Removing unreachable block (ram,0x01ed7c9c) */
/* WARNING: Removing unreachable block (ram,0x01ed7d18) */
/* WARNING: Removing unreachable block (ram,0x01ed7d1c) */
/* WARNING: Removing unreachable block (ram,0x01ed7d80) */
/* WARNING: Removing unreachable block (ram,0x01ed7c54) */
/* WARNING: Removing unreachable block (ram,0x01ed7c64) */
/* WARNING: Removing unreachable block (ram,0x01ed7c74) */
/* WARNING: Removing unreachable block (ram,0x01ed7ae8) */
/* WARNING: Removing unreachable block (ram,0x01ed7b68) */
/* WARNING: Removing unreachable block (ram,0x01ed7b08) */
/* WARNING: Removing unreachable block (ram,0x01ed7b0c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b1c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b60) */
/* WARNING: Removing unreachable block (ram,0x01ed7b6c) */
/* WARNING: Removing unreachable block (ram,0x01ed7a50) */
/* WARNING: Removing unreachable block (ram,0x01ed79f0) */
/* WARNING: Removing unreachable block (ram,0x01ed7a00) */
/* WARNING: Removing unreachable block (ram,0x01ed7a28) */
/* WARNING: Removing unreachable block (ram,0x01ed7938) */
/* WARNING: Removing unreachable block (ram,0x01ed7958) */
/* WARNING: Removing unreachable block (ram,0x01ed7980) */
/* WARNING: Removing unreachable block (ram,0x01ed787c) */
/* WARNING: Removing unreachable block (ram,0x01ed78a4) */
/* WARNING: Removing unreachable block (ram,0x01ed789c) */
/* WARNING: Removing unreachable block (ram,0x01ed78a8) */
/* WARNING: Removing unreachable block (ram,0x01ed77f8) */
/* WARNING: Removing unreachable block (ram,0x01ed77cc) */
/* WARNING: Removing unreachable block (ram,0x01458504) */
/* WARNING: Removing unreachable block (ram,0x014584d4) */
/* WARNING: Removing unreachable block (ram,0x014584a4) */
/* WARNING: Removing unreachable block (ram,0x01458474) */
/* WARNING: Removing unreachable block (ram,0x01458444) */
/* WARNING: Removing unreachable block (ram,0x014585fc) */
/* WARNING: Removing unreachable block (ram,0x01635c14) */

undefined1  [16]
Atlas_Assets_AtlasAssetBucketUtils__CreateBuckets
          (long param_1,undefined8 param_2,long *param_3,long *param_4,long *param_5)

{
  uint uVar1;
  long *plVar2;
  undefined4 uVar3;
  uint uVar4;
  code *pcVar5;
  long **pplVar6;
  undefined1 *puVar7;
  long **pplVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  long lVar13;
  int extraout_w1;
  long *plVar14;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar15;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  int extraout_w1_00;
  undefined8 extraout_x1_03;
  long *plVar16;
  long *plVar17;
  long *extraout_x8;
  long *extraout_x8_00;
  long lVar18;
  long *plVar19;
  long *plVar20;
  ulong unaff_x22;
  long *unaff_x23;
  ulong unaff_x24;
  long *plVar21;
  long *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *****pppppuVar22;
  undefined *puVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  uint uStack_14c;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  long lStack_f8;
  undefined8 ****ppppuStack_a0;
  code *pcStack_98;
  undefined8 ***pppuStack_70;
  undefined *puStack_68;
  
  if ((bRam0000000003eb47c0 & 1) == 0) {
    func_0x00f78a20(0x3d68fe8);
    func_0x00f78a20(0x3d6a910);
    func_0x00f78a20(0x3d6bac0);
    func_0x00f78a20(0x3d6d468);
    func_0x00f78a20(0x3d6d480);
    func_0x00f78a20(0x3d72328);
    func_0x00f78a20(0x3d6d050);
    func_0x00f78a20(0x3d69818);
    func_0x00f78a20(0x3d6efb0);
    func_0x00f78a20(0x3d695f0);
    func_0x00f78a20(0x3d76438);
    bRam0000000003eb47c0 = 1;
  }
  pppuStack_70 = (undefined8 ***)&stack0xfffffffffffffff0;
  if (param_1 != 0) {
    ppppuStack_a0 = (undefined8 ****)0x3d72000;
    pcStack_98 = (code *)0x3d6d000;
    puStack_68 = (undefined *)0x1458444;
    if ((bRam0000000003eb567a & 1) == 0) {
      func_0x00f78a20(0x3d26978,/*STR('Karts')*/ uRam0000000003d6efb0,2,0xc,0);
      func_0x00f78a20(0x3d2feb0);
      func_0x00f78a20(0x3d35c68);
      func_0x00f78a20(0x3d1cdf8);
      bRam0000000003eb567a = 1;
    }
    auVar26._0_8_ = func_0x00f78aec(/*Core.Assets.AssetManager.BucketInstance_TypeInfo*/ uRam0000000003d26978);
    auVar26._8_8_ = 0;
    return auVar26;
  }
  auVar24 = func_0x00f78af4();
  plVar17 = auVar24._8_8_;
  plVar16 = auVar24._0_8_;
  pplVar8 = (long **)&stack0xffffffffffffff70;
  puStack_68 = &Atlas_Assets_AtlasAssetBucketUtils__PurgeContextBuckets;
  pppppuVar22 = (undefined8 *****)&pppuStack_70;
  plVar20 = (long *)0x3eb4000;
  if ((bRam0000000003eb47c1 & 1) == 0) {
    func_0x00f78a20(0x3d6d050);
    func_0x00f78a20(0x3d695f0);
    bRam0000000003eb47c1 = 1;
  }
  plVar21 = /*STR('FrontEndContext')*/ plRam0000000003d6d050;
  if (auVar24._8_4_ == 0) {
    if (plVar16 != (long *)0x0) {
      puVar23 = &UNK_014585fc;
      plVar17 = /*STR('FrontEndContext')*/ plRam0000000003d6d050;
code_r0x016366f0:
      *(undefined8 *)((long)pplVar8 + -0x50) = unaff_x28;
      *(undefined8 *)((long)pplVar8 + -0x48) = unaff_x27;
      *(ulong *)((long)pplVar8 + -0x40) = unaff_x24;
      *(long **)((long)pplVar8 + -0x38) = unaff_x23;
      *(ulong *)((long)pplVar8 + -0x30) = unaff_x22;
      *(long **)((long)pplVar8 + -0x28) = plVar20;
      *(long *)((long)pplVar8 + -0x20) = auVar24._8_8_;
      *(long *)((long)pplVar8 + -0x18) = auVar24._0_8_;
      *(undefined8 ******)((long)pplVar8 + -0x10) = pppppuVar22;
      *(undefined **)((long)pplVar8 + -8) = puVar23;
      if ((bRam0000000003eb5681 & 1) == 0) {
        func_0x00f78a20(0x3d2fec0);
        func_0x00f78a20(0x3d2e020);
        func_0x00f78a20(0x3d32190);
        func_0x00f78a20(0x3d32168);
        func_0x00f78a20(0x3d32198);
        func_0x00f78a20(0x3d32180);
        func_0x00f78a20(0x3d321a0);
        func_0x00f78a20(0x3d32188);
        func_0x00f78a20(0x3d35c78);
        func_0x00f78a20(0x3d35c88);
        func_0x00f78a20(0x3d39d50);
        func_0x00f78a20(0x3d39d60);
        func_0x00f78a20(0x3d39d48);
        func_0x00f78a20(0x3d1d7d0);
        bRam0000000003eb5681 = 1;
      }
      *(undefined8 *)((long)pplVar8 + -0x58) = 0;
      *(undefined8 *)((long)pplVar8 + -0x80) = 0;
      *(undefined8 *)((long)pplVar8 + -0x98) = 0;
      *(undefined8 *)((long)pplVar8 + -0xa0) = 0;
      *(undefined8 *)((long)pplVar8 + -0x88) = 0;
      *(undefined8 *)((long)pplVar8 + -0x90) = 0;
      *(undefined8 *)((long)pplVar8 + -0xb8) = 0;
      *(undefined8 *)((long)pplVar8 + -0xc0) = 0;
      *(undefined8 *)((long)pplVar8 + -0xa8) = 0;
      *(undefined8 *)((long)pplVar8 + -0xb0) = 0;
      *(undefined8 *)((long)pplVar8 + -0xd8) = 0;
      *(undefined8 *)((long)pplVar8 + -0xe0) = 0;
      *(undefined8 *)((long)pplVar8 + -200) = 0;
      *(undefined8 *)((long)pplVar8 + -0xd0) = 0;
      *(undefined8 *)((long)pplVar8 + -0xf8) = 0;
      *(undefined8 *)((long)pplVar8 + -0x100) = 0;
      *(undefined8 *)((long)pplVar8 + -0xe8) = 0;
      *(undefined8 *)((long)pplVar8 + -0xf0) = 0;
      *(undefined8 *)((long)pplVar8 + -0x118) = 0;
      *(undefined8 *)((long)pplVar8 + -0x110) = 0;
      *(undefined8 *)((long)pplVar8 + -0x108) = 0;
      *(undefined4 *)((long)pplVar8 + -0x120) = 0;
      if (plVar16[6] == 0) goto code_r0x016369bc;
      iVar9 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(plVar16[6],plVar17,(undefined1 *)((long)pplVar8 + -0x58),
                              plRam0000000003d2fec0);
      if (iVar9 == 0) {
        uVar10 = 0;
        uVar15 = extraout_x1_01;
code_r0x0163698c:
        auVar30._8_8_ = uVar15;
        auVar30._0_8_ = uVar10;
        return auVar30;
      }
      if (*(long *)((long)pplVar8 + -0x58) == 0) goto code_r0x016369bc;
      lVar18 = *(long *)(*(long *)((long)pplVar8 + -0x58) + 0x20);
      if (lVar18 == 0) goto code_r0x016369bc;
      uVar3 = *(undefined4 *)(lVar18 + 0x20);
      plVar17 = (long *)func_0x00f78aec(/*System.Collections.Generic.List<AssetManagerHandle>_TypeInfo*/ uRam0000000003d1d7d0);
      /*System.Collections.Generic.List<AssetManagerHandle>$$.ctor*/ func_0x0236ed70(plVar17,uVar3,plRam0000000003d39d48);
      if (*(long *)((long)pplVar8 + -0x58) == 0) goto code_r0x016369bc;
      lVar18 = *(long *)(*(long *)((long)pplVar8 + -0x58) + 0x20);
      if (lVar18 == 0) goto code_r0x016369bc;
      /*System.Collections.Generic.HashSet<AssetManagerHandle>$$GetEnumerator*/ func_0x021cf268((undefined1 *)((long)pplVar8 + -0x140),lVar18,uRam0000000003d35c78);
      *(undefined8 *)((long)pplVar8 + -0x68) = *(undefined8 *)((long)pplVar8 + -0x138);
      *(undefined8 *)((long)pplVar8 + -0x70) = *(undefined8 *)((long)pplVar8 + -0x140);
      *(undefined8 *)((long)pplVar8 + -0x60) = *(undefined8 *)((long)pplVar8 + -0x130);
      while (uVar10 = /*System.Collections.Generic.HashSet.Enumerator<AssetManagerHandle>$$MoveNext*/ func_0x01f636e0((undefined1 *)((long)pplVar8 + -0x70),uRam0000000003d32180),
            (uVar10 & 1) != 0) {
        if (plVar16[3] == 0) {
          func_0x00f78af4();
          goto code_r0x016369b8;
        }
        uVar3 = *(undefined4 *)((long)pplVar8 + -0x60);
        iVar9 = /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$TryGetValue*/ func_0x01e31a4c(plVar16[3],uVar3,(undefined1 *)((long)pplVar8 + -0x100),
                                uRam0000000003d2e020);
        if (iVar9 != 0 && *(int *)((long)pplVar8 + -0x80) < 1) {
          if (plVar17 == (long *)0x0) {
            func_0x00f78af4();
code_r0x016369b8:
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x16369bc);
            (*pcVar5)();
          }
          /*System.Collections.Generic.List<AssetManagerHandle>$$Add*/ func_0x0236f95c(plVar17,uVar3,plRam0000000003d39d50);
        }
      }
      /*System.Collections.Generic.HashSet.Enumerator<AssetManagerHandle>$$Dispose*/ func_0x01f636dc((undefined1 *)((long)pplVar8 + -0x70),uRam0000000003d32168);
      *(undefined4 *)((long)pplVar8 + -0x120) = 0;
      do {
        if (plVar17 != (long *)0x0) {
          /*System.Collections.Generic.List<AssetManagerHandle>$$GetEnumerator*/ func_0x0237041c((undefined1 *)((long)pplVar8 + -0x118),plVar17,uRam0000000003d39d60);
          uVar10 = 0;
          while (uVar11 = /*System.Collections.Generic.List.Enumerator<AssetManagerHandle>$$MoveNext*/ func_0x01f639a0((undefined1 *)((long)pplVar8 + -0x118),
                                          uRam0000000003d32198), (uVar11 & 1) != 0) {
            /*Core.Assets.AssetManager$$ReleaseAsset*/ func_0x016353e4(plVar16,*(undefined4 *)((long)pplVar8 + -0x108));
            uVar10 = (ulong)((int)uVar10 + 1);
          }
          *(undefined4 *)((long)pplVar8 + -0x128) = 0xb0;
          *(int *)((long)pplVar8 + -0x120) = *(int *)((long)pplVar8 + -0x120) + 1;
          /*System.Collections.Generic.List.Enumerator<AssetManagerHandle>$$Dispose*/ func_0x01f6399c((undefined1 *)((long)pplVar8 + -0x118),uRam0000000003d32190);
          uVar15 = extraout_x1_02;
          goto code_r0x0163698c;
        }
code_r0x016369bc:
        func_0x00f78af4();
        if (extraout_w1_00 != 1) goto code_r0x01636a40;
        plVar20 = (long *)___cxa_begin_catch();
        lVar18 = *plVar20;
        ___cxa_end_catch();
        /*System.Collections.Generic.HashSet.Enumerator<AssetManagerHandle>$$Dispose*/ func_0x01f636dc((undefined1 *)((long)pplVar8 + -0x70),uRam0000000003d32168);
      } while (lVar18 == 0);
      func_0x00f78ac0(lVar18,0);
code_r0x01636a40:
      iVar9 = __Unwind_Resume();
      auVar31._1_7_ = 0;
      auVar31[0] = iVar9 != (int)extraout_x1_03;
      auVar31._8_8_ = extraout_x1_03;
      return auVar31;
    }
  }
  else if (plVar16 != (long *)0x0) {
    param_3 = (long *)0x0;
    pplVar8 = &plStack_180;
    pplVar6 = &plStack_180;
    pcStack_98 = (code *)&UNK_014585bc;
    plVar19 = (long *)0x3eb5000;
    ppppuStack_a0 = pppppuVar22;
    if ((bRam0000000003eb5682 & 1) == 0) {
      func_0x00f78a20(0x3d1fdb0);
      func_0x00f78a20(0x3d2df80);
      func_0x00f78a20(0x3d2fec0);
      func_0x00f78a20(0x3d32190);
      func_0x00f78a20(0x3d32168);
      func_0x00f78a20(0x3d339f0);
      func_0x00f78a20(0x3d339f8);
      func_0x00f78a20(0x3d32198);
      func_0x00f78a20(0x3d32180);
      func_0x00f78a20(0x3d321a0);
      func_0x00f78a20(0x3d32188);
      func_0x00f78a20(0x3d33a28);
      func_0x00f78a20(0x3d35c78);
      func_0x00f78a20(0x3d35c88);
      func_0x00f78a20(0x3d391b8);
      func_0x00f78a20(0x3d391c0);
      func_0x00f78a20(0x3d39d50);
      func_0x00f78a20(0x3d39d60);
      func_0x00f78a20(0x3d39d48);
      func_0x00f78a20(0x3d1d7d0);
      bRam0000000003eb5682 = 1;
    }
    lStack_f8 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_14c = 0;
    if (plVar16[6] == 0) goto code_r0x01635c24;
    param_3 = &lStack_f8;
    param_4 = plRam0000000003d2fec0;
    auVar26 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(plVar16[6],plVar21);
    if (auVar26._0_4_ == 0) {
      return auVar26;
    }
    if (lStack_f8 == 0) goto code_r0x01635c24;
    if (*(long *)(lStack_f8 + 0x20) == 0) goto code_r0x01635c24;
    unaff_x22 = (ulong)*(uint *)(*(long *)(lStack_f8 + 0x20) + 0x20);
    plVar20 = (long *)func_0x00f78aec(/*System.Collections.Generic.List<AssetManagerHandle>_TypeInfo*/ uRam0000000003d1d7d0);
    param_3 = plRam0000000003d39d48;
    /*System.Collections.Generic.List<AssetManagerHandle>$$.ctor*/ func_0x0236ed70(plVar20,unaff_x22);
    if (lStack_f8 == 0) goto code_r0x01635c24;
    plStack_180 = plVar21;
    if (*(long *)(lStack_f8 + 0x20) == 0) goto code_r0x01635c24;
    /*System.Collections.Generic.HashSet<AssetManagerHandle>$$GetEnumerator*/ func_0x021cf268(&uStack_178,*(long *)(lStack_f8 + 0x20),uRam0000000003d35c78);
    uStack_108 = uStack_170;
    uStack_110 = uStack_178;
    uStack_100 = uStack_168;
    unaff_x26 = 0x3d339f8;
    unaff_x27 = 0x3d1fdb0;
    unaff_x28 = 0x3d39d50;
    plVar19 = &lStack_158;
    unaff_x25 = (long *)0x0;
    while( true ) {
      uVar10 = /*System.Collections.Generic.HashSet.Enumerator<AssetManagerHandle>$$MoveNext*/ func_0x01f636e0(&uStack_110,uRam0000000003d32180);
      if ((uVar10 & 1) == 0) break;
      if (plVar16[5] == 0) {
        func_0x00f78af4();
code_r0x01635c20:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1635c24);
        (*pcVar5)();
      }
      iVar9 = (int)uStack_100;
      /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManagerHandle>$$GetEnumerator*/ func_0x01e2d0f8(&uStack_178,plVar16[5],uRam0000000003d2df80);
      uStack_128 = uStack_170;
      uStack_130 = uStack_178;
      uStack_118 = uStack_160;
      uStack_120 = uStack_168;
      while (uVar11 = /*System.Collections.Generic.Dictionary.Enumerator<AssetManagerHandle, AssetManagerHandle>$$MoveNext*/ func_0x01fb7ce0(&uStack_130,uRam0000000003d339f8), uVar10 = uStack_120,
            (uVar11 & 1) != 0) {
        if (((*(ushort *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (iVar9 == (int)(uVar10 >> 0x20)) {
          if (plVar20 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x01635c20;
          }
          param_3 = plRam0000000003d39d50;
          /*System.Collections.Generic.List<AssetManagerHandle>$$Add*/ func_0x0236f95c(plVar20,uVar10 & 0xffffffff);
        }
      }
      unaff_x22 = 0;
      *(undefined4 *)((long)plVar19 + (long)(int)unaff_x25 * 4) = 0x86;
      uVar4 = uStack_14c;
      uVar1 = uStack_14c + 1;
      plVar21 = (long *)(ulong)uVar1;
      uStack_14c = uVar1;
      /*System.Collections.Generic.Dictionary.Enumerator<AssetManagerHandle, AssetManagerHandle>$$Dispose*/ func_0x01fb7e4c(&uStack_130,uRam0000000003d339f0);
      unaff_x25 = (long *)0x0;
      if ((uVar1 != 0) &&
         (unaff_x25 = plVar21, *(int *)((long)plVar19 + (long)(int)uVar4 * 4) == 0x86)) {
        unaff_x25 = (long *)(ulong)uVar4;
        uStack_14c = uVar4;
      }
    }
    *(undefined4 *)((long)&lStack_158 + (long)(int)unaff_x25 * 4) = 0x9f;
    uStack_14c = uStack_14c + 1;
    unaff_x24 = (ulong)uStack_14c;
    /*System.Collections.Generic.HashSet.Enumerator<AssetManagerHandle>$$Dispose*/ func_0x01f636dc(&uStack_110,uRam0000000003d32168);
    do {
      if ((int)unaff_x24 != 0) {
        uVar1 = (int)unaff_x24 - 1;
        if (*(int *)((long)&lStack_158 + (long)(int)uVar1 * 4) == 0x9f) {
          unaff_x24 = (ulong)uVar1;
          uStack_14c = uVar1;
        }
      }
      if (plVar20 != (long *)0x0) {
        /*System.Collections.Generic.List<AssetManagerHandle>$$GetEnumerator*/ func_0x0237041c(&uStack_148,plVar20,uRam0000000003d39d60);
        auVar24._8_8_ = plVar16;
        auVar24._0_8_ = 0x3d32198;
        while (uVar10 = /*System.Collections.Generic.List.Enumerator<AssetManagerHandle>$$MoveNext*/ func_0x01f639a0(&uStack_148,uRam0000000003d32198), (uVar10 & 1) != 0) {
          /*Core.Assets.AssetManager$$RemoveReference*/ func_0x01635330(plVar16,uStack_138 & 0xffffffff);
        }
        *(undefined4 *)((long)&lStack_158 + (long)(int)unaff_x24 * 4) = 0xd3;
        uStack_14c = uStack_14c + 1;
        /*System.Collections.Generic.List.Enumerator<AssetManagerHandle>$$Dispose*/ func_0x01f6399c(&uStack_148,uRam0000000003d32190);
        puVar23 = &UNK_01635bec;
        plVar17 = plStack_180;
        unaff_x23 = plVar21;
        pppppuVar22 = &ppppuStack_a0;
        goto code_r0x016366f0;
      }
code_r0x01635c24:
      func_0x00f78af4();
      if (extraout_w1 != 1) goto code_r0x01635cac;
      puVar12 = (ulong *)___cxa_begin_catch();
      unaff_x22 = *puVar12;
      ___cxa_end_catch();
      /*System.Collections.Generic.HashSet.Enumerator<AssetManagerHandle>$$Dispose*/ func_0x01f636dc(&uStack_110,uRam0000000003d32168);
    } while (unaff_x22 == 0);
    func_0x00f78ac0(unaff_x22,0);
code_r0x01635cac:
    auVar27 = __Unwind_Resume();
    plVar17 = plVar16;
    unaff_x23 = plVar21;
    pppppuVar22 = &ppppuStack_a0;
    pcVar5 = (code *)&Core_Assets_AssetManager__RequestAsset;
    goto code_r0x01635cb0;
  }
  auVar26 = func_0x00f78af4();
  pcStack_98 = Atlas_Definitions_AtlasAssetManagerExtensions__RequestAsset;
  ppppuStack_a0 = pppppuVar22;
  if ((bRam0000000003eb47c2 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb47c2 = 1;
  }
  if ((auVar26._8_8_ != 0) && (plVar20 = *(long **)(auVar26._8_8_ + 0x50), plVar20 != (long *)0x0))
  {
    plVar20 = (long *)(**(code **)(*plVar20 + 0x198))(plVar20,*(undefined8 *)(*plVar20 + 0x1a0));
    auVar27._8_8_ = plVar20;
    auVar27._0_8_ = auVar26._0_8_;
    if (auVar26._0_8_ != 0) {
      if ((plVar20 == (long *)0x0) || (*plVar20 == /*string_TypeInfo*/ lRam0000000003d24dd0)) {
        plVar20 = (long *)0x3eb4000;
        pplVar6 = (long **)&stack0xffffffffffffff70;
        plVar19 = plVar16;
        pppppuVar22 = (undefined8 *****)ppppuStack_a0;
        pcVar5 = pcStack_98;
code_r0x01635cb0:
        auVar29._8_8_ = unaff_x23;
        auVar29._0_8_ = unaff_x22;
        plVar16 = (long *)0x0;
        puVar7 = (undefined1 *)pplVar6;
        while( true ) {
          plVar14 = auVar27._8_8_;
          lVar18 = auVar27._0_8_;
          plVar21 = (long *)0x0;
          *(undefined8 *)(puVar7 + -0x60) = unaff_x28;
          *(undefined8 *)(puVar7 + -0x58) = unaff_x27;
          *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
          *(long **)(puVar7 + -0x48) = unaff_x25;
          *(ulong *)(puVar7 + -0x40) = unaff_x24;
          *(long *)(puVar7 + -0x38) = auVar29._8_8_;
          *(long *)(puVar7 + -0x30) = auVar29._0_8_;
          *(long **)(puVar7 + -0x28) = plVar20;
          *(long **)(puVar7 + -0x20) = plVar17;
          *(long **)(puVar7 + -0x18) = plVar19;
          *(undefined8 ******)(puVar7 + -0x10) = pppppuVar22;
          *(code **)(puVar7 + -8) = pcVar5;
          unaff_x26 = 0x3eb5000;
          plVar17 = plVar16;
          plVar19 = param_3;
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
          *(undefined8 *)(puVar7 + -0xf8) = 0;
          *(undefined4 *)(puVar7 + -0x100) = 0;
          if (*(long *)(lVar18 + 0x30) == 0) goto code_r0x01635f30;
          plVar21 = (long *)(puVar7 + -0xf8);
          plVar17 = plRam0000000003d2fec0;
          iVar9 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(*(long *)(lVar18 + 0x30),param_3);
          uVar15 = extraout_x1;
          if (iVar9 == 0) break;
          auVar26 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(plVar14,0);
          uVar15 = auVar26._8_8_;
          if ((auVar26._0_8_ & 1) != 0) break;
          if (*(long *)(lVar18 + 0x20) != 0) {
            plVar21 = (long *)(puVar7 + -0x100);
            plVar17 = plRam0000000003d2fad0;
            uVar10 = /*System.Collections.Generic.Dictionary<string, AssetManagerHandle>$$TryGetValue*/ func_0x01ec0ed8(*(long *)(lVar18 + 0x20),plVar14);
            if ((uVar10 & 1) == 0) {
              plVar17 = (long *)0x0;
              plVar21 = param_3;
              /*Core.Assets.AssetManager$$AddAsset*/ func_0x016360d4(puVar7 + -0xf0,lVar18,plVar14);
              uVar3 = *(undefined4 *)(puVar7 + -0xf0);
              *(undefined4 *)(puVar7 + -0x100) = uVar3;
              plVar19 = plVar16;
code_r0x01635e94:
              uVar1 = *(uint *)(lVar18 + 0x38);
              plVar16 = (long *)(ulong)uVar1;
              *(uint *)(lVar18 + 0x38) = uVar1 + 1;
              lVar13 = *(long *)(lVar18 + 0x10);
              if (lVar13 != 0) {
                *(uint *)(puVar7 + -0xf0) = uVar1;
                *(undefined4 *)(puVar7 + -0xec) = uVar3;
                *(long **)(puVar7 + -0xe8) = param_4;
                *(long **)(puVar7 + -0xe0) = param_5;
                *(undefined8 *)(puVar7 + -0xd8) = 0;
                plVar21 = plRam0000000003d3ccc0;
                /*System.Collections.Generic.List<AssetManager.AssetRequest>$$Add*/ func_0x024afe2c(lVar13,puVar7 + -0xf0);
                if (*(long *)(lVar18 + 0x28) != 0) {
                  plVar21 = (long *)(ulong)*(uint *)(puVar7 + -0x100);
                  plVar17 = plRam0000000003d2dfd0;
                  /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManagerHandle>$$set_Item*/ func_0x01e2cb1c(*(long *)(lVar18 + 0x28),plVar16);
                  if ((*(long *)(puVar7 + -0xf8) != 0) &&
                     (lVar13 = *(long *)(*(long *)(puVar7 + -0xf8) + 0x20), lVar13 != 0)) {
                    /*System.Collections.Generic.HashSet<AssetManagerHandle>$$Add*/ func_0x021cf8ec(lVar13,*(undefined4 *)(puVar7 + -0x100),uRam0000000003d35c70);
                    uVar15 = extraout_x1_00;
code_r0x01635f0c:
                    auVar28._8_8_ = uVar15;
                    auVar28._0_8_ = plVar16;
                    return auVar28;
                  }
                }
              }
            }
            else if (*(long *)(lVar18 + 0x18) != 0) {
              plVar21 = plRam0000000003d2e030;
              /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$get_Item*/ func_0x01e2fa1c(puVar7 + -0xf0,*(long *)(lVar18 + 0x18),
                              *(undefined4 *)(puVar7 + -0x100));
              *(undefined8 *)(puVar7 + -0x138) = *(undefined8 *)(puVar7 + -0xa8);
              *(undefined8 *)(puVar7 + -0x140) = *(undefined8 *)(puVar7 + -0xb0);
              *(undefined8 *)(puVar7 + -0x128) = *(undefined8 *)(puVar7 + -0x98);
              *(undefined8 *)(puVar7 + -0x130) = *(undefined8 *)(puVar7 + -0xa0);
              *(undefined8 *)(puVar7 + -0x118) = *(undefined8 *)(puVar7 + -0x88);
              *(undefined8 *)(puVar7 + -0x120) = *(undefined8 *)(puVar7 + -0x90);
              *(undefined8 *)(puVar7 + -0x108) = *(undefined8 *)(puVar7 + -0x78);
              *(undefined8 *)(puVar7 + -0x110) = *(undefined8 *)(puVar7 + -0x80);
              *(undefined8 *)(puVar7 + -0x178) = *(undefined8 *)(puVar7 + -0xe8);
              *(undefined8 *)(puVar7 + -0x180) = *(undefined8 *)(puVar7 + -0xf0);
              *(undefined8 *)(puVar7 + -0x168) = *(undefined8 *)(puVar7 + -0xd8);
              *(undefined8 *)(puVar7 + -0x170) = *(undefined8 *)(puVar7 + -0xe0);
              *(undefined8 *)(puVar7 + -0x158) = *(undefined8 *)(puVar7 + -200);
              *(undefined8 *)(puVar7 + -0x160) = *(undefined8 *)(puVar7 + -0xd0);
              *(undefined8 *)(puVar7 + -0x148) = *(undefined8 *)(puVar7 + -0xb8);
              *(undefined8 *)(puVar7 + -0x150) = *(undefined8 *)(puVar7 + -0xc0);
              lVar13 = *(long *)(lVar18 + 0x18);
              if (lVar13 != 0) {
                *(undefined8 *)(puVar7 + -0xa8) = *(undefined8 *)(puVar7 + -0x138);
                *(undefined8 *)(puVar7 + -0xb0) = *(undefined8 *)(puVar7 + -0x140);
                *(undefined8 *)(puVar7 + -0x98) = *(undefined8 *)(puVar7 + -0x128);
                *(undefined8 *)(puVar7 + -0xa0) = *(undefined8 *)(puVar7 + -0x130);
                *(undefined8 *)(puVar7 + -0x88) = *(undefined8 *)(puVar7 + -0x118);
                *(undefined8 *)(puVar7 + -0x90) = *(undefined8 *)(puVar7 + -0x120);
                *(undefined8 *)(puVar7 + -0x78) = *(undefined8 *)(puVar7 + -0x108);
                *(undefined8 *)(puVar7 + -0x80) = *(undefined8 *)(puVar7 + -0x110);
                *(undefined8 *)(puVar7 + -0xe8) = *(undefined8 *)(puVar7 + -0x178);
                *(undefined8 *)(puVar7 + -0xf0) = *(undefined8 *)(puVar7 + -0x180);
                *(undefined8 *)(puVar7 + -0xd8) = *(undefined8 *)(puVar7 + -0x168);
                *(undefined8 *)(puVar7 + -0xe0) = *(undefined8 *)(puVar7 + -0x170);
                *(undefined8 *)(puVar7 + -200) = *(undefined8 *)(puVar7 + -0x158);
                *(undefined8 *)(puVar7 + -0xd0) = *(undefined8 *)(puVar7 + -0x160);
                *(undefined8 *)(puVar7 + -0xb8) = *(undefined8 *)(puVar7 + -0x148);
                *(undefined8 *)(puVar7 + -0xc0) = *(undefined8 *)(puVar7 + -0x150);
                *(int *)(puVar7 + -0x70) = *(int *)(puVar7 + -0x70) + 1;
                *(undefined4 *)(puVar7 + -0x6c) = *(undefined4 *)(puVar7 + -0x6c);
                plVar21 = (long *)(puVar7 + -0xf0);
                plVar17 = plRam0000000003d2e038;
                /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$set_Item*/ func_0x01e2fae4(lVar13,*(undefined4 *)(puVar7 + -0x100));
                uVar3 = *(undefined4 *)(puVar7 + -0x100);
                goto code_r0x01635e94;
              }
            }
          }
code_r0x01635f30:
          auVar29 = func_0x00f78af4();
          plVar20 = auVar29._8_8_;
          *(undefined8 *)(puVar7 + -0x1c0) = 0;
          *(long **)(puVar7 + -0x1b8) = param_3;
          *(long **)(puVar7 + -0x1b0) = plVar16;
          *(long **)(puVar7 + -0x1a8) = param_4;
          *(long **)(puVar7 + -0x1a0) = param_5;
          *(long *)(puVar7 + -0x198) = lVar18;
          *(undefined1 **)(puVar7 + -400) = puVar7 + -0x10;
          *(undefined **)(puVar7 + -0x188) = &Core_Assets_AssetManager__RequestAsset;
          pppppuVar22 = (undefined8 *****)(puVar7 + -400);
          unaff_x24 = 0x3eb5000;
          param_3 = plVar21;
          param_4 = plVar17;
          param_5 = plVar19;
          if ((bRam0000000003eb567c & 1) == 0) {
            func_0x00f78a20(0x3d24dd0);
            bRam0000000003eb567c = 1;
          }
          unaff_x25 = plVar14;
          if (plVar20 == (long *)0x0) {
            func_0x00f78af4();
            plVar20 = extraout_x8_00;
code_r0x01635fe4:
            pcVar5 = (code *)&Core_Assets_AssetManager__RequestSpriteAsset;
            auVar27 = func_0x00f78e5c(plVar20);
            plVar16 = (long *)((long)&MACH_HEADER.magic + 1);
            puVar7 = puVar7 + -0x1c0;
            plVar20 = plVar21;
          }
          else {
            plVar20 = (long *)(**(code **)(*plVar20 + 0x198))
                                        (plVar20,*(undefined8 *)(*plVar20 + 0x1a0));
            auVar27._8_8_ = plVar20;
            auVar27._0_8_ = auVar29._0_8_;
            if ((plVar20 != (long *)0x0) && (*plVar20 != /*string_TypeInfo*/ lRam0000000003d24dd0))
            goto code_r0x01635fe4;
            plVar16 = (long *)0x0;
            pppppuVar22 = *(undefined8 ******)(puVar7 + -400);
            pcVar5 = *(code **)(puVar7 + -0x188);
            plVar20 = (long *)(puVar7 + -0x1a0);
            plVar14 = (long *)(puVar7 + -0x198);
            plVar2 = (long *)(puVar7 + -0x1a8);
            unaff_x24 = *(ulong *)(puVar7 + -0x1c0);
            auVar29._8_8_ = *(undefined8 *)(puVar7 + -0x1b8);
            auVar29._0_8_ = *(undefined8 *)(puVar7 + -0x1b0);
            puVar7 = puVar7 + -0x180;
            param_3 = plVar21;
            param_4 = plVar17;
            param_5 = plVar19;
            plVar19 = (long *)*plVar14;
            plVar17 = (long *)*plVar20;
            plVar20 = (long *)*plVar2;
          }
        }
        plVar16 = (long *)0x0;
        goto code_r0x01635f0c;
      }
      goto LAB_014586d8;
    }
  }
  func_0x00f78af4();
  plVar20 = extraout_x8;
LAB_014586d8:
  auVar26 = func_0x00f78e5c(plVar20);
  auVar25._8_8_ = auVar26._8_8_;
  auVar25._0_8_ = *(undefined8 *)(auVar26._0_8_ + 0x48);
  return auVar25;
}



// ============================================================
// RVA: 0x1458558 | Atlas.Assets.AtlasAssetBucketUtils.PurgeContextBuckets
// ============================================================

/* WARNING: Possible PIC construction at 0x014585b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01635be8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014585f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014585bc) */
/* WARNING: Removing unreachable block (ram,0x014585fc) */
/* WARNING: Removing unreachable block (ram,0x01635c14) */
/* WARNING: Type propagation algorithm not settling */

long * Atlas_Assets_AtlasAssetBucketUtils__PurgeContextBuckets
                 (long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  uint uVar1;
  long *plVar2;
  undefined4 uVar3;
  uint uVar4;
  code *pcVar5;
  long **pplVar6;
  undefined1 *puVar7;
  long **pplVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  long lVar15;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  long *plVar16;
  long *extraout_x8;
  long *extraout_x8_00;
  long *plVar17;
  long *plVar18;
  ulong unaff_x22;
  long *unaff_x23;
  ulong unaff_x24;
  long *plVar19;
  long *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar20;
  undefined *puVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  uint uStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  long lStack_98;
  undefined8 *******pppppppuStack_40;
  code *pcStack_38;
  
  pplVar8 = (long **)&stack0xffffffffffffffd0;
  pppppppuVar20 = (undefined8 *******)&stack0xfffffffffffffff0;
  plVar18 = (long *)0x3eb4000;
  if ((bRam0000000003eb47c1 & 1) == 0) {
    func_0x00f78a20(0x3d6d050);
    func_0x00f78a20(0x3d695f0);
    bRam0000000003eb47c1 = 1;
  }
  plVar19 = /*STR('FrontEndContext')*/ plRam0000000003d6d050;
  if ((int)param_2 == 0) {
    if (param_1 != (long *)0x0) {
      puVar21 = &UNK_014585fc;
      plVar17 = /*STR('FrontEndContext')*/ plRam0000000003d6d050;
      plVar11 = param_1;
code_r0x016366f0:
      *(undefined8 *)((long)pplVar8 + -0x50) = unaff_x28;
      *(undefined8 *)((long)pplVar8 + -0x48) = unaff_x27;
      *(ulong *)((long)pplVar8 + -0x40) = unaff_x24;
      *(long **)((long)pplVar8 + -0x38) = unaff_x23;
      *(ulong *)((long)pplVar8 + -0x30) = unaff_x22;
      *(long **)((long)pplVar8 + -0x28) = plVar18;
      *(long **)((long)pplVar8 + -0x20) = param_2;
      *(long **)((long)pplVar8 + -0x18) = plVar11;
      *(undefined8 ********)((long)pplVar8 + -0x10) = pppppppuVar20;
      *(undefined **)((long)pplVar8 + -8) = puVar21;
      if ((bRam0000000003eb5681 & 1) == 0) {
        func_0x00f78a20(0x3d2fec0);
        func_0x00f78a20(0x3d2e020);
        func_0x00f78a20(0x3d32190);
        func_0x00f78a20(0x3d32168);
        func_0x00f78a20(0x3d32198);
        func_0x00f78a20(0x3d32180);
        func_0x00f78a20(0x3d321a0);
        func_0x00f78a20(0x3d32188);
        func_0x00f78a20(0x3d35c78);
        func_0x00f78a20(0x3d35c88);
        func_0x00f78a20(0x3d39d50);
        func_0x00f78a20(0x3d39d60);
        func_0x00f78a20(0x3d39d48);
        func_0x00f78a20(0x3d1d7d0);
        bRam0000000003eb5681 = 1;
      }
      *(undefined8 *)((long)pplVar8 + -0x58) = 0;
      *(undefined8 *)((long)pplVar8 + -0x80) = 0;
      *(undefined8 *)((long)pplVar8 + -0x98) = 0;
      *(undefined8 *)((long)pplVar8 + -0xa0) = 0;
      *(undefined8 *)((long)pplVar8 + -0x88) = 0;
      *(undefined8 *)((long)pplVar8 + -0x90) = 0;
      *(undefined8 *)((long)pplVar8 + -0xb8) = 0;
      *(undefined8 *)((long)pplVar8 + -0xc0) = 0;
      *(undefined8 *)((long)pplVar8 + -0xa8) = 0;
      *(undefined8 *)((long)pplVar8 + -0xb0) = 0;
      *(undefined8 *)((long)pplVar8 + -0xd8) = 0;
      *(undefined8 *)((long)pplVar8 + -0xe0) = 0;
      *(undefined8 *)((long)pplVar8 + -200) = 0;
      *(undefined8 *)((long)pplVar8 + -0xd0) = 0;
      *(undefined8 *)((long)pplVar8 + -0xf8) = 0;
      *(undefined8 *)((long)pplVar8 + -0x100) = 0;
      *(undefined8 *)((long)pplVar8 + -0xe8) = 0;
      *(undefined8 *)((long)pplVar8 + -0xf0) = 0;
      *(undefined8 *)((long)pplVar8 + -0x118) = 0;
      *(undefined8 *)((long)pplVar8 + -0x110) = 0;
      *(undefined8 *)((long)pplVar8 + -0x108) = 0;
      *(undefined4 *)((long)pplVar8 + -0x120) = 0;
      if (param_1[6] == 0) goto code_r0x016369bc;
      iVar9 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(param_1[6],plVar17,(undefined1 *)((long)pplVar8 + -0x58),
                              plRam0000000003d2fec0);
      if (iVar9 == 0) {
        return (long *)0x0;
      }
      if (*(long *)((long)pplVar8 + -0x58) == 0) goto code_r0x016369bc;
      lVar10 = *(long *)(*(long *)((long)pplVar8 + -0x58) + 0x20);
      if (lVar10 == 0) goto code_r0x016369bc;
      uVar3 = *(undefined4 *)(lVar10 + 0x20);
      plVar17 = (long *)func_0x00f78aec(/*System.Collections.Generic.List<AssetManagerHandle>_TypeInfo*/ uRam0000000003d1d7d0);
      /*System.Collections.Generic.List<AssetManagerHandle>$$.ctor*/ func_0x0236ed70(plVar17,uVar3,plRam0000000003d39d48);
      if (*(long *)((long)pplVar8 + -0x58) == 0) goto code_r0x016369bc;
      lVar10 = *(long *)(*(long *)((long)pplVar8 + -0x58) + 0x20);
      if (lVar10 == 0) goto code_r0x016369bc;
      /*System.Collections.Generic.HashSet<AssetManagerHandle>$$GetEnumerator*/ func_0x021cf268((undefined1 *)((long)pplVar8 + -0x140),lVar10,uRam0000000003d35c78);
      *(undefined8 *)((long)pplVar8 + -0x68) = *(undefined8 *)((long)pplVar8 + -0x138);
      *(undefined8 *)((long)pplVar8 + -0x70) = *(undefined8 *)((long)pplVar8 + -0x140);
      *(undefined8 *)((long)pplVar8 + -0x60) = *(undefined8 *)((long)pplVar8 + -0x130);
      while (uVar12 = /*System.Collections.Generic.HashSet.Enumerator<AssetManagerHandle>$$MoveNext*/ func_0x01f636e0((undefined1 *)((long)pplVar8 + -0x70),uRam0000000003d32180),
            (uVar12 & 1) != 0) {
        if (param_1[3] == 0) {
          func_0x00f78af4();
          goto code_r0x016369b8;
        }
        uVar3 = *(undefined4 *)((long)pplVar8 + -0x60);
        iVar9 = /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$TryGetValue*/ func_0x01e31a4c(param_1[3],uVar3,(undefined1 *)((long)pplVar8 + -0x100),
                                uRam0000000003d2e020);
        if (iVar9 != 0 && *(int *)((long)pplVar8 + -0x80) < 1) {
          if (plVar17 == (long *)0x0) {
            func_0x00f78af4();
code_r0x016369b8:
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x16369bc);
            (*pcVar5)();
          }
          /*System.Collections.Generic.List<AssetManagerHandle>$$Add*/ func_0x0236f95c(plVar17,uVar3,plRam0000000003d39d50);
        }
      }
      /*System.Collections.Generic.HashSet.Enumerator<AssetManagerHandle>$$Dispose*/ func_0x01f636dc((undefined1 *)((long)pplVar8 + -0x70),uRam0000000003d32168);
      *(undefined4 *)((long)pplVar8 + -0x120) = 0;
      do {
        if (plVar17 != (long *)0x0) {
          /*System.Collections.Generic.List<AssetManagerHandle>$$GetEnumerator*/ func_0x0237041c((undefined1 *)((long)pplVar8 + -0x118),plVar17,uRam0000000003d39d60);
          plVar18 = (long *)0x0;
          while (uVar12 = /*System.Collections.Generic.List.Enumerator<AssetManagerHandle>$$MoveNext*/ func_0x01f639a0((undefined1 *)((long)pplVar8 + -0x118),
                                          uRam0000000003d32198), (uVar12 & 1) != 0) {
            /*Core.Assets.AssetManager$$ReleaseAsset*/ func_0x016353e4(param_1,*(undefined4 *)((long)pplVar8 + -0x108));
            plVar18 = (long *)(ulong)((int)plVar18 + 1);
          }
          *(undefined4 *)((long)pplVar8 + -0x128) = 0xb0;
          *(int *)((long)pplVar8 + -0x120) = *(int *)((long)pplVar8 + -0x120) + 1;
          /*System.Collections.Generic.List.Enumerator<AssetManagerHandle>$$Dispose*/ func_0x01f6399c((undefined1 *)((long)pplVar8 + -0x118),uRam0000000003d32190);
          return plVar18;
        }
code_r0x016369bc:
        func_0x00f78af4();
        if (extraout_w1_00 != 1) goto code_r0x01636a40;
        plVar18 = (long *)___cxa_begin_catch();
        lVar10 = *plVar18;
        ___cxa_end_catch();
        /*System.Collections.Generic.HashSet.Enumerator<AssetManagerHandle>$$Dispose*/ func_0x01f636dc((undefined1 *)((long)pplVar8 + -0x70),uRam0000000003d32168);
      } while (lVar10 == 0);
      func_0x00f78ac0(lVar10,0);
code_r0x01636a40:
      iVar9 = __Unwind_Resume();
      return (long *)(ulong)(iVar9 != extraout_w1_01);
    }
  }
  else if (param_1 != (long *)0x0) {
    param_3 = (long *)0x0;
    pplVar8 = &plStack_120;
    pplVar6 = &plStack_120;
    pcStack_38 = (code *)0x14585bc;
    plVar17 = (long *)0x3eb5000;
    pppppppuStack_40 = pppppppuVar20;
    if ((bRam0000000003eb5682 & 1) == 0) {
      func_0x00f78a20(0x3d1fdb0);
      func_0x00f78a20(0x3d2df80);
      func_0x00f78a20(0x3d2fec0);
      func_0x00f78a20(0x3d32190);
      func_0x00f78a20(0x3d32168);
      func_0x00f78a20(0x3d339f0);
      func_0x00f78a20(0x3d339f8);
      func_0x00f78a20(0x3d32198);
      func_0x00f78a20(0x3d32180);
      func_0x00f78a20(0x3d321a0);
      func_0x00f78a20(0x3d32188);
      func_0x00f78a20(0x3d33a28);
      func_0x00f78a20(0x3d35c78);
      func_0x00f78a20(0x3d35c88);
      func_0x00f78a20(0x3d391b8);
      func_0x00f78a20(0x3d391c0);
      func_0x00f78a20(0x3d39d50);
      func_0x00f78a20(0x3d39d60);
      func_0x00f78a20(0x3d39d48);
      func_0x00f78a20(0x3d1d7d0);
      bRam0000000003eb5682 = 1;
    }
    lStack_98 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_ec = 0;
    param_2 = param_1;
    if (param_1[6] == 0) goto code_r0x01635c24;
    param_3 = &lStack_98;
    param_4 = plRam0000000003d2fec0;
    plVar11 = (long *)/*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(param_1[6],plVar19);
    if ((int)plVar11 == 0) {
      return plVar11;
    }
    if (lStack_98 == 0) goto code_r0x01635c24;
    if (*(long *)(lStack_98 + 0x20) == 0) goto code_r0x01635c24;
    unaff_x22 = (ulong)*(uint *)(*(long *)(lStack_98 + 0x20) + 0x20);
    plVar18 = (long *)func_0x00f78aec(/*System.Collections.Generic.List<AssetManagerHandle>_TypeInfo*/ uRam0000000003d1d7d0);
    param_3 = plRam0000000003d39d48;
    /*System.Collections.Generic.List<AssetManagerHandle>$$.ctor*/ func_0x0236ed70(plVar18,unaff_x22);
    if (lStack_98 == 0) goto code_r0x01635c24;
    plStack_120 = plVar19;
    if (*(long *)(lStack_98 + 0x20) == 0) goto code_r0x01635c24;
    /*System.Collections.Generic.HashSet<AssetManagerHandle>$$GetEnumerator*/ func_0x021cf268(&uStack_118,*(long *)(lStack_98 + 0x20),uRam0000000003d35c78);
    uStack_a8 = uStack_110;
    uStack_b0 = uStack_118;
    uStack_a0 = uStack_108;
    unaff_x26 = 0x3d339f8;
    unaff_x27 = 0x3d1fdb0;
    unaff_x28 = 0x3d39d50;
    plVar17 = &lStack_f8;
    unaff_x25 = (long *)0x0;
    while( true ) {
      uVar12 = /*System.Collections.Generic.HashSet.Enumerator<AssetManagerHandle>$$MoveNext*/ func_0x01f636e0(&uStack_b0,uRam0000000003d32180);
      if ((uVar12 & 1) == 0) break;
      if (param_1[5] == 0) {
        func_0x00f78af4();
code_r0x01635c20:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1635c24);
        (*pcVar5)();
      }
      iVar9 = (int)uStack_a0;
      /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManagerHandle>$$GetEnumerator*/ func_0x01e2d0f8(&uStack_118,param_1[5],uRam0000000003d2df80);
      uStack_c8 = uStack_110;
      uStack_d0 = uStack_118;
      uStack_b8 = uStack_100;
      uStack_c0 = uStack_108;
      while (uVar13 = /*System.Collections.Generic.Dictionary.Enumerator<AssetManagerHandle, AssetManagerHandle>$$MoveNext*/ func_0x01fb7ce0(&uStack_d0,uRam0000000003d339f8), uVar12 = uStack_c0,
            (uVar13 & 1) != 0) {
        if (((*(ushort *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (iVar9 == (int)(uVar12 >> 0x20)) {
          if (plVar18 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x01635c20;
          }
          param_3 = plRam0000000003d39d50;
          /*System.Collections.Generic.List<AssetManagerHandle>$$Add*/ func_0x0236f95c(plVar18,uVar12 & 0xffffffff);
        }
      }
      unaff_x22 = 0;
      *(undefined4 *)((long)plVar17 + (long)(int)unaff_x25 * 4) = 0x86;
      uVar4 = uStack_ec;
      uVar1 = uStack_ec + 1;
      plVar19 = (long *)(ulong)uVar1;
      uStack_ec = uVar1;
      /*System.Collections.Generic.Dictionary.Enumerator<AssetManagerHandle, AssetManagerHandle>$$Dispose*/ func_0x01fb7e4c(&uStack_d0,uRam0000000003d339f0);
      unaff_x25 = (long *)0x0;
      if ((uVar1 != 0) &&
         (unaff_x25 = plVar19, *(int *)((long)plVar17 + (long)(int)uVar4 * 4) == 0x86)) {
        unaff_x25 = (long *)(ulong)uVar4;
        uStack_ec = uVar4;
      }
    }
    *(undefined4 *)((long)&lStack_f8 + (long)(int)unaff_x25 * 4) = 0x9f;
    uStack_ec = uStack_ec + 1;
    unaff_x24 = (ulong)uStack_ec;
    /*System.Collections.Generic.HashSet.Enumerator<AssetManagerHandle>$$Dispose*/ func_0x01f636dc(&uStack_b0,uRam0000000003d32168);
    do {
      if ((int)unaff_x24 != 0) {
        uVar1 = (int)unaff_x24 - 1;
        if (*(int *)((long)&lStack_f8 + (long)(int)uVar1 * 4) == 0x9f) {
          unaff_x24 = (ulong)uVar1;
          uStack_ec = uVar1;
        }
      }
      if (plVar18 != (long *)0x0) {
        /*System.Collections.Generic.List<AssetManagerHandle>$$GetEnumerator*/ func_0x0237041c(&uStack_e8,plVar18,uRam0000000003d39d60);
        while (uVar12 = /*System.Collections.Generic.List.Enumerator<AssetManagerHandle>$$MoveNext*/ func_0x01f639a0(&uStack_e8,uRam0000000003d32198), (uVar12 & 1) != 0) {
          /*Core.Assets.AssetManager$$RemoveReference*/ func_0x01635330(param_1,uStack_d8 & 0xffffffff);
        }
        *(undefined4 *)((long)&lStack_f8 + (long)(int)unaff_x24 * 4) = 0xd3;
        uStack_ec = uStack_ec + 1;
        /*System.Collections.Generic.List.Enumerator<AssetManagerHandle>$$Dispose*/ func_0x01f6399c(&uStack_e8,uRam0000000003d32190);
        puVar21 = &UNK_01635bec;
        plVar17 = plStack_120;
        plVar11 = (long *)0x3d32198;
        unaff_x23 = plVar19;
        pppppppuVar20 = &pppppppuStack_40;
        goto code_r0x016366f0;
      }
code_r0x01635c24:
      func_0x00f78af4();
      if (extraout_w1 != 1) goto code_r0x01635cac;
      puVar14 = (ulong *)___cxa_begin_catch();
      unaff_x22 = *puVar14;
      ___cxa_end_catch();
      /*System.Collections.Generic.HashSet.Enumerator<AssetManagerHandle>$$Dispose*/ func_0x01f636dc(&uStack_b0,uRam0000000003d32168);
    } while (unaff_x22 == 0);
    func_0x00f78ac0(unaff_x22,0);
code_r0x01635cac:
    auVar22 = __Unwind_Resume();
    unaff_x23 = plVar19;
    pppppppuVar20 = &pppppppuStack_40;
    pcVar5 = (code *)&Core_Assets_AssetManager__RequestAsset;
    goto code_r0x01635cb0;
  }
  auVar23 = func_0x00f78af4();
  pcStack_38 = Atlas_Definitions_AtlasAssetManagerExtensions__RequestAsset;
  pppppppuStack_40 = pppppppuVar20;
  if ((bRam0000000003eb47c2 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb47c2 = 1;
  }
  if ((auVar23._8_8_ != 0) && (plVar18 = *(long **)(auVar23._8_8_ + 0x50), plVar18 != (long *)0x0))
  {
    plVar18 = (long *)(**(code **)(*plVar18 + 0x198))(plVar18,*(undefined8 *)(*plVar18 + 0x1a0));
    auVar22._8_8_ = plVar18;
    auVar22._0_8_ = auVar23._0_8_;
    if (auVar23._0_8_ != 0) {
      if ((plVar18 == (long *)0x0) || (*plVar18 == /*string_TypeInfo*/ lRam0000000003d24dd0)) {
        plVar18 = (long *)0x3eb4000;
        pplVar6 = (long **)&stack0xffffffffffffffd0;
        plVar17 = param_1;
        pppppppuVar20 = pppppppuStack_40;
        pcVar5 = pcStack_38;
code_r0x01635cb0:
        auVar23._8_8_ = unaff_x23;
        auVar23._0_8_ = unaff_x22;
        plVar19 = (long *)0x0;
        puVar7 = (undefined1 *)pplVar6;
Core_Assets_AssetManager__RequestAsset:
        do {
          plVar16 = auVar22._8_8_;
          lVar10 = auVar22._0_8_;
          plVar11 = (long *)0x0;
          *(undefined8 *)(puVar7 + -0x60) = unaff_x28;
          *(undefined8 *)(puVar7 + -0x58) = unaff_x27;
          *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
          *(long **)(puVar7 + -0x48) = unaff_x25;
          *(ulong *)(puVar7 + -0x40) = unaff_x24;
          *(long *)(puVar7 + -0x38) = auVar23._8_8_;
          *(long *)(puVar7 + -0x30) = auVar23._0_8_;
          *(long **)(puVar7 + -0x28) = plVar18;
          *(long **)(puVar7 + -0x20) = param_2;
          *(long **)(puVar7 + -0x18) = plVar17;
          *(undefined8 ********)(puVar7 + -0x10) = pppppppuVar20;
          *(code **)(puVar7 + -8) = pcVar5;
          unaff_x26 = 0x3eb5000;
          param_2 = plVar19;
          plVar17 = param_3;
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
          *(undefined8 *)(puVar7 + -0xf8) = 0;
          *(undefined4 *)(puVar7 + -0x100) = 0;
          if (*(long *)(lVar10 + 0x30) != 0) {
            plVar11 = (long *)(puVar7 + -0xf8);
            param_2 = plRam0000000003d2fec0;
            iVar9 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(*(long *)(lVar10 + 0x30),param_3);
            if ((iVar9 == 0) || (uVar12 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(plVar16,0), (uVar12 & 1) != 0)) {
              return (long *)0x0;
            }
            if (*(long *)(lVar10 + 0x20) != 0) {
              plVar11 = (long *)(puVar7 + -0x100);
              param_2 = plRam0000000003d2fad0;
              uVar12 = /*System.Collections.Generic.Dictionary<string, AssetManagerHandle>$$TryGetValue*/ func_0x01ec0ed8(*(long *)(lVar10 + 0x20),plVar16);
              if ((uVar12 & 1) == 0) {
                param_2 = (long *)0x0;
                plVar11 = param_3;
                /*Core.Assets.AssetManager$$AddAsset*/ func_0x016360d4(puVar7 + -0xf0,lVar10,plVar16);
                uVar3 = *(undefined4 *)(puVar7 + -0xf0);
                *(undefined4 *)(puVar7 + -0x100) = uVar3;
                plVar17 = plVar19;
code_r0x01635e94:
                uVar1 = *(uint *)(lVar10 + 0x38);
                plVar19 = (long *)(ulong)uVar1;
                *(uint *)(lVar10 + 0x38) = uVar1 + 1;
                lVar15 = *(long *)(lVar10 + 0x10);
                if (lVar15 != 0) {
                  *(uint *)(puVar7 + -0xf0) = uVar1;
                  *(undefined4 *)(puVar7 + -0xec) = uVar3;
                  *(long **)(puVar7 + -0xe8) = param_4;
                  *(long **)(puVar7 + -0xe0) = param_5;
                  *(undefined8 *)(puVar7 + -0xd8) = 0;
                  plVar11 = plRam0000000003d3ccc0;
                  /*System.Collections.Generic.List<AssetManager.AssetRequest>$$Add*/ func_0x024afe2c(lVar15,puVar7 + -0xf0);
                  if (*(long *)(lVar10 + 0x28) != 0) {
                    plVar11 = (long *)(ulong)*(uint *)(puVar7 + -0x100);
                    param_2 = plRam0000000003d2dfd0;
                    /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManagerHandle>$$set_Item*/ func_0x01e2cb1c(*(long *)(lVar10 + 0x28),plVar19);
                    if ((*(long *)(puVar7 + -0xf8) != 0) &&
                       (lVar15 = *(long *)(*(long *)(puVar7 + -0xf8) + 0x20), lVar15 != 0)) {
                      /*System.Collections.Generic.HashSet<AssetManagerHandle>$$Add*/ func_0x021cf8ec(lVar15,*(undefined4 *)(puVar7 + -0x100),uRam0000000003d35c70);
                      return plVar19;
                    }
                  }
                }
              }
              else if (*(long *)(lVar10 + 0x18) != 0) {
                plVar11 = plRam0000000003d2e030;
                /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$get_Item*/ func_0x01e2fa1c(puVar7 + -0xf0,*(long *)(lVar10 + 0x18),
                                *(undefined4 *)(puVar7 + -0x100));
                *(undefined8 *)(puVar7 + -0x138) = *(undefined8 *)(puVar7 + -0xa8);
                *(undefined8 *)(puVar7 + -0x140) = *(undefined8 *)(puVar7 + -0xb0);
                *(undefined8 *)(puVar7 + -0x128) = *(undefined8 *)(puVar7 + -0x98);
                *(undefined8 *)(puVar7 + -0x130) = *(undefined8 *)(puVar7 + -0xa0);
                *(undefined8 *)(puVar7 + -0x118) = *(undefined8 *)(puVar7 + -0x88);
                *(undefined8 *)(puVar7 + -0x120) = *(undefined8 *)(puVar7 + -0x90);
                *(undefined8 *)(puVar7 + -0x108) = *(undefined8 *)(puVar7 + -0x78);
                *(undefined8 *)(puVar7 + -0x110) = *(undefined8 *)(puVar7 + -0x80);
                *(undefined8 *)(puVar7 + -0x178) = *(undefined8 *)(puVar7 + -0xe8);
                *(undefined8 *)(puVar7 + -0x180) = *(undefined8 *)(puVar7 + -0xf0);
                *(undefined8 *)(puVar7 + -0x168) = *(undefined8 *)(puVar7 + -0xd8);
                *(undefined8 *)(puVar7 + -0x170) = *(undefined8 *)(puVar7 + -0xe0);
                *(undefined8 *)(puVar7 + -0x158) = *(undefined8 *)(puVar7 + -200);
                *(undefined8 *)(puVar7 + -0x160) = *(undefined8 *)(puVar7 + -0xd0);
                *(undefined8 *)(puVar7 + -0x148) = *(undefined8 *)(puVar7 + -0xb8);
                *(undefined8 *)(puVar7 + -0x150) = *(undefined8 *)(puVar7 + -0xc0);
                lVar15 = *(long *)(lVar10 + 0x18);
                if (lVar15 != 0) {
                  *(undefined8 *)(puVar7 + -0xa8) = *(undefined8 *)(puVar7 + -0x138);
                  *(undefined8 *)(puVar7 + -0xb0) = *(undefined8 *)(puVar7 + -0x140);
                  *(undefined8 *)(puVar7 + -0x98) = *(undefined8 *)(puVar7 + -0x128);
                  *(undefined8 *)(puVar7 + -0xa0) = *(undefined8 *)(puVar7 + -0x130);
                  *(undefined8 *)(puVar7 + -0x88) = *(undefined8 *)(puVar7 + -0x118);
                  *(undefined8 *)(puVar7 + -0x90) = *(undefined8 *)(puVar7 + -0x120);
                  *(undefined8 *)(puVar7 + -0x78) = *(undefined8 *)(puVar7 + -0x108);
                  *(undefined8 *)(puVar7 + -0x80) = *(undefined8 *)(puVar7 + -0x110);
                  *(undefined8 *)(puVar7 + -0xe8) = *(undefined8 *)(puVar7 + -0x178);
                  *(undefined8 *)(puVar7 + -0xf0) = *(undefined8 *)(puVar7 + -0x180);
                  *(undefined8 *)(puVar7 + -0xd8) = *(undefined8 *)(puVar7 + -0x168);
                  *(undefined8 *)(puVar7 + -0xe0) = *(undefined8 *)(puVar7 + -0x170);
                  *(undefined8 *)(puVar7 + -200) = *(undefined8 *)(puVar7 + -0x158);
                  *(undefined8 *)(puVar7 + -0xd0) = *(undefined8 *)(puVar7 + -0x160);
                  *(undefined8 *)(puVar7 + -0xb8) = *(undefined8 *)(puVar7 + -0x148);
                  *(undefined8 *)(puVar7 + -0xc0) = *(undefined8 *)(puVar7 + -0x150);
                  *(int *)(puVar7 + -0x70) = *(int *)(puVar7 + -0x70) + 1;
                  *(undefined4 *)(puVar7 + -0x6c) = *(undefined4 *)(puVar7 + -0x6c);
                  plVar11 = (long *)(puVar7 + -0xf0);
                  param_2 = plRam0000000003d2e038;
                  /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$set_Item*/ func_0x01e2fae4(lVar15,*(undefined4 *)(puVar7 + -0x100));
                  uVar3 = *(undefined4 *)(puVar7 + -0x100);
                  goto code_r0x01635e94;
                }
              }
            }
          }
          auVar23 = func_0x00f78af4();
          plVar18 = auVar23._8_8_;
          *(undefined8 *)(puVar7 + -0x1c0) = 0;
          *(long **)(puVar7 + -0x1b8) = param_3;
          *(long **)(puVar7 + -0x1b0) = plVar19;
          *(long **)(puVar7 + -0x1a8) = param_4;
          *(long **)(puVar7 + -0x1a0) = param_5;
          *(long *)(puVar7 + -0x198) = lVar10;
          *(undefined1 **)(puVar7 + -400) = puVar7 + -0x10;
          *(undefined **)(puVar7 + -0x188) = &Core_Assets_AssetManager__RequestAsset;
          pppppppuVar20 = (undefined8 *******)(puVar7 + -400);
          unaff_x24 = 0x3eb5000;
          param_3 = plVar11;
          param_4 = param_2;
          param_5 = plVar17;
          if ((bRam0000000003eb567c & 1) == 0) {
            func_0x00f78a20(0x3d24dd0);
            bRam0000000003eb567c = 1;
          }
          unaff_x25 = plVar16;
          if (plVar18 == (long *)0x0) {
            func_0x00f78af4();
            plVar18 = extraout_x8_00;
          }
          else {
            plVar18 = (long *)(**(code **)(*plVar18 + 0x198))
                                        (plVar18,*(undefined8 *)(*plVar18 + 0x1a0));
            auVar22._8_8_ = plVar18;
            auVar22._0_8_ = auVar23._0_8_;
            if ((plVar18 == (long *)0x0) || (*plVar18 == /*string_TypeInfo*/ lRam0000000003d24dd0)) {
              plVar19 = (long *)0x0;
              pppppppuVar20 = *(undefined8 ********)(puVar7 + -400);
              pcVar5 = *(code **)(puVar7 + -0x188);
              plVar18 = (long *)(puVar7 + -0x1a0);
              plVar16 = (long *)(puVar7 + -0x198);
              plVar2 = (long *)(puVar7 + -0x1a8);
              unaff_x24 = *(ulong *)(puVar7 + -0x1c0);
              auVar23._8_8_ = *(undefined8 *)(puVar7 + -0x1b8);
              auVar23._0_8_ = *(undefined8 *)(puVar7 + -0x1b0);
              puVar7 = puVar7 + -0x180;
              param_3 = plVar11;
              param_4 = param_2;
              param_5 = plVar17;
              plVar17 = (long *)*plVar16;
              param_2 = (long *)*plVar18;
              plVar18 = (long *)*plVar2;
              goto Core_Assets_AssetManager__RequestAsset;
            }
          }
          pcVar5 = (code *)&Core_Assets_AssetManager__RequestSpriteAsset;
          auVar22 = func_0x00f78e5c(plVar18);
          plVar19 = (long *)((long)&MACH_HEADER.magic + 1);
          puVar7 = puVar7 + -0x1c0;
          plVar18 = plVar11;
        } while( true );
      }
      goto LAB_014586d8;
    }
  }
  func_0x00f78af4();
  plVar18 = extraout_x8;
LAB_014586d8:
  lVar10 = func_0x00f78e5c(plVar18);
  return *(long **)(lVar10 + 0x48);
}



