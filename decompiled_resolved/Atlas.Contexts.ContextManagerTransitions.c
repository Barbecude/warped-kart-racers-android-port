// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Contexts.ContextManagerTransitions

// ============================================================
// RVA: 0x15727d4 | Atlas.Contexts.ContextManagerTransitions.Init
// ============================================================

/* WARNING: Possible PIC construction at 0x015729d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01572a20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01572c20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01572ea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01572e50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01572ea8) */
/* WARNING: Removing unreachable block (ram,0x01572ee8) */
/* WARNING: Removing unreachable block (ram,0x01572eb0) */
/* WARNING: Removing unreachable block (ram,0x01572a24) */
/* WARNING: Removing unreachable block (ram,0x01572a48) */
/* WARNING: Removing unreachable block (ram,0x014b0d8c) */
/* WARNING: Removing unreachable block (ram,0x01572e54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * Atlas_Contexts_ContextManagerTransitions__Init
                 (long param_1,undefined8 param_2,long *param_3,long param_4,long *param_5)

{
  float fVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  int iVar6;
  long lVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  uint uVar7;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  long *plVar17;
  undefined1 **ppuVar18;
  undefined *puVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  long *plStack_68;
  long lStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  if ((bRam0000000003eb5046 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d26d68);
    func_0x00f78a20(0x3d53988);
    func_0x00f78a20(0x3d53990);
    func_0x00f78a20(0x3d57360);
    bRam0000000003eb5046 = 1;
  }
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(long **)(param_1 + 0x18) = param_3;
  *(long **)(param_1 + 0x28) = param_5;
  if ((param_4 != 0) && (*(long *)(param_4 + 0x10) != 0)) {
    lVar8 = /*Core.Definitions.GameDefinitions$$GetFirstDefinition<object>*/ func_0x0185c7fc(*(long *)(param_4 + 0x10),uRam0000000003d57360);
    *(long *)(param_1 + 0x20) = lVar8;
    if (lVar8 != 0) {
      lVar8 = *(long *)(lVar8 + 0x128);
      param_5 = (long *)0x0;
      if (lVar8 != 0) {
        param_3 = (long *)0x3d26000;
        param_2 = 0x3d53000;
        fVar20 = (float)/*UnityEngine.Random$$get_value*/ func_0x03252940(0);
        fVar20 = fVar20 * 2.1474836e+09;
        fVar1 = -fVar20;
        if (fVar20 != INFINITY) {
          fVar1 = fVar20;
        }
        /*Atlas.Maths.NiceRandomSelection$$Init*/ func_0x014b0d28(param_1 + 0x34,*(int *)(lVar8 + 0x18) + -1,(int)fVar1,0);
        lVar8 = *(long *)(param_1 + 0x10);
        param_5 = (long *)func_0x00f78aec(/*Core.Contexts.ContextManager.CanProgressDelegate_TypeInfo*/ uRam0000000003d26d68);
        /*Core.Contexts.ContextManager.CanProgressDelegate$$.ctor*/ func_0x0163e26c(param_5,param_1,uRam0000000003d53988,0);
        param_4 = 0;
        if (lVar8 != 0) {
          param_3 = (long *)0x3d1f000;
          param_2 = 0x3d53000;
          /*Core.Contexts.ContextManager$$AddCanDeInitContextCallback*/ func_0x0163d7f4(lVar8,param_5,0);
          lVar8 = *(long *)(param_1 + 0x10);
          plVar9 = (long *)func_0x00f78aec(/*System.Action_TypeInfo*/ lRam0000000003d1fa78);
          /*System.Action$$.ctor*/ func_0x02924c80(plVar9,param_1,uRam0000000003d53990,0);
          param_4 = 0;
          param_5 = plVar9;
          if (lVar8 != 0) {
            puVar4 = (undefined8 *)&stack0xffffffffffffffd0;
            ppuVar18 = (undefined1 **)&stack0xfffffffffffffff0;
            if ((bRam0000000003eb56ed & 1) == 0) {
              func_0x00f78a20(0x3d1fa78,plVar9,0);
              bRam0000000003eb56ed = 1;
            }
            param_3 = (long *)0x3d1fa78;
            plVar17 = (long *)(lVar8 + 0x10);
            plVar10 = (long *)*plVar17;
            while ((plVar13 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(plVar10,plVar9,0), plVar13 == (long *)0x0 ||
                   (*plVar13 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
              plVar13 = (long *)func_0x00ff0f44(plVar17,plVar13,plVar10);
              bVar5 = plVar10 == plVar13;
              plVar10 = plVar13;
              if (bVar5) {
                return plVar13;
              }
            }
            puVar19 = &Core_Contexts_ContextManager__remove_OnInitFinished;
            auVar23 = func_0x00f78e5c(plVar13);
            goto code_r0x0163cd24;
          }
        }
      }
    }
  }
  plVar9 = (long *)func_0x00f78af4();
  puVar4 = &uStack_80;
  uStack_80 = 0x3eb5000;
  puStack_48 = &Atlas_Contexts_ContextManagerTransitions__DeInit;
  ppuVar18 = &puStack_50;
  auVar22._8_8_ = 0x3eb5000;
  auVar22._0_8_ = plVar9;
  uStack_78 = param_2;
  plStack_70 = param_3;
  plStack_68 = param_5;
  lStack_60 = param_4;
  lStack_58 = param_1;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5047 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d26d68);
    func_0x00f78a20(0x3d53988);
    func_0x00f78a20(0x3d53990);
    bRam0000000003eb5047 = 1;
  }
  plVar10 = (long *)0x3d1fa78;
  if ((int)plVar9[10] == 0) {
    param_3 = plVar9 + 2;
    plVar17 = (long *)*param_3;
    plVar10 = (long *)func_0x00f78aec(/*System.Action_TypeInfo*/ lRam0000000003d1fa78);
    auVar23._8_8_ = plVar10;
    auVar23._0_8_ = plVar17;
    /*System.Action$$.ctor*/ func_0x02924c80(plVar10,plVar9,uRam0000000003d53990,0);
    if (plVar17 != (long *)0x0) {
      puVar19 = &UNK_01572a24;
code_r0x0163cd24:
      *(long **)((long)puVar4 + -0x30) = param_3;
      *(long **)((long)puVar4 + -0x28) = plVar10;
      *(long **)((long)puVar4 + -0x20) = plVar17;
      *(long **)((long)puVar4 + -0x18) = plVar9;
      *(undefined1 ***)((long)puVar4 + -0x10) = ppuVar18;
      *(undefined **)((long)puVar4 + -8) = puVar19;
      if ((bRam0000000003eb56ee & 1) == 0) {
        func_0x00f78a20(0x3d1fa78);
        bRam0000000003eb56ee = 1;
      }
      plVar10 = (long *)(auVar23._0_8_ + 0x10);
      plVar9 = (long *)*plVar10;
      while ((plVar17 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(plVar9,auVar23._8_8_,0), plVar17 == (long *)0x0 ||
             (*plVar17 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
        plVar17 = (long *)func_0x00ff0f44(plVar10,plVar17,plVar9);
        bVar5 = plVar9 == plVar17;
        plVar9 = plVar17;
        if (bVar5) {
          return plVar17;
        }
      }
      lVar8 = func_0x00f78e5c(plVar17);
      return (long *)(ulong)*(byte *)(lVar8 + 0x50);
    }
    puVar19 = &Atlas_Contexts_ContextManagerTransitions__ReleaseLoadedKeyArt;
    uVar11 = func_0x00f78af4();
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar11;
    puVar2 = &uStack_80;
  }
  else {
    puVar19 = &UNK_015729dc;
    puVar2 = &uStack_80;
  }
code_r0x01572a80:
  do {
    lVar8 = auVar22._0_8_;
    *(long *)((long)puVar2 + -0x20) = auVar22._8_8_;
    *(long **)((long)puVar2 + -0x18) = plVar9;
    *(undefined1 ***)((long)puVar2 + -0x10) = ppuVar18;
    *(undefined **)((long)puVar2 + -8) = puVar19;
    if ((bRam0000000003eb504b & 1) == 0) {
      func_0x00f78a20(0x3d1fdb0);
      bRam0000000003eb504b = 1;
    }
    iVar6 = /*Core.Assets.AssetManagerHandle$$IsValid*/ func_0x01637a38(lVar8 + 0x4c,0);
    if (iVar6 == 0) {
code_r0x01572ad4:
      plVar9 = /*Core.Assets.AssetManagerHandle_TypeInfo*/ plRam0000000003d1fdb0;
      if (((*(ushort *)((long)/*Core.Assets.AssetManagerHandle_TypeInfo*/ plRam0000000003d1fdb0 + 0x132) >> 10 & 1) != 0) &&
         ((int)/*Core.Assets.AssetManagerHandle_TypeInfo*/ plRam0000000003d1fdb0[0x1c] == 0)) {
        func_0x00f78ad0();
        plVar9 = /*Core.Assets.AssetManagerHandle_TypeInfo*/ plRam0000000003d1fdb0;
      }
      /*Core.Assets.AssetManagerHandle_TypeInfo*/ plRam0000000003d1fdb0 = plVar9;
      *(undefined4 *)(lVar8 + 0x4c) = *(undefined4 *)plVar9[0x17];
      *(undefined4 *)(lVar8 + 0x50) = 0;
      return plVar9;
    }
    if (*(long *)(lVar8 + 0x28) != 0) {
      /*Core.Assets.AssetManager$$Release*/ func_0x016363a4(*(long *)(lVar8 + 0x28),*(undefined4 *)(lVar8 + 0x4c),0);
      goto code_r0x01572ad4;
    }
    plVar9 = (long *)func_0x00f78af4();
    puVar3 = (undefined1 *)((long)puVar2 + -0x40);
    *(undefined8 *)((long)puVar2 + -0x40) = 0x3eb5000;
    *(long *)((long)puVar2 + -0x38) = lVar8;
    *(undefined1 **)((long)puVar2 + -0x30) = (undefined1 *)((long)puVar2 + -0x10);
    *(undefined **)((long)puVar2 + -0x28) = &Atlas_Contexts_ContextManagerTransitions__Update;
    ppuVar18 = (undefined1 **)((long)puVar2 + -0x30);
    uVar16 = 0x3eb5000;
    auVar22._8_8_ = 0x3eb5000;
    auVar22._0_8_ = plVar9;
    plVar17 = plVar9;
    if ((bRam0000000003eb5048 & 1) == 0) {
      func_0x00f78a20(0x3d51bc0);
      func_0x00f78a20(0x3d1fe98);
      plVar17 = (long *)func_0x00f78a20(0x3d23050);
      bRam0000000003eb5048 = 1;
    }
    iVar6 = (int)plVar9[6];
    if (iVar6 < 0) {
code_r0x01572c2c:
      if ((int)plVar9[10] != 1) {
        return plVar17;
      }
      if (plVar9[5] == 0) {
code_r0x01572c8c:
        puVar19 = &Atlas_Contexts_ContextManagerTransitions__OnKeyArtLoaded;
        auVar21 = func_0x00f78af4();
      }
      else {
        plVar17 = (long *)/*Core.Assets.AssetManager$$HasAssetFinishedLoading*/ func_0x01636d40(plVar9[5],*(undefined4 *)((long)plVar9 + 0x4c),0);
        if ((int)plVar17 == 0) {
          return plVar17;
        }
        if (plVar9[5] == 0) goto code_r0x01572c8c;
        uVar16 = /*Core.Assets.AssetManager$$GetLoadedAsset<Sprite>*/ func_0x01818628(plVar9[5],*(undefined4 *)((long)plVar9 + 0x4c),uRam0000000003d51bc0
                                );
        auVar21._8_8_ = uVar16;
        auVar21._0_8_ = plVar9;
        ppuVar18 = *(undefined1 ***)((long)puVar2 + -0x30);
        puVar19 = *(undefined **)((long)puVar2 + -0x28);
        puVar3 = (undefined1 *)((long)puVar2 + -0x20);
        uVar16 = *(undefined8 *)((long)puVar2 + -0x40);
        plVar9 = *(long **)((long)puVar2 + -0x38);
      }
      uVar14 = auVar21._8_8_;
      lVar8 = auVar21._0_8_;
      *(long **)(puVar3 + -0x30) = param_3;
      *(long **)(puVar3 + -0x28) = plVar10;
      *(undefined8 *)(puVar3 + -0x20) = uVar16;
      *(long **)(puVar3 + -0x18) = plVar9;
      *(undefined1 ***)(puVar3 + -0x10) = ppuVar18;
      *(undefined **)(puVar3 + -8) = puVar19;
      if ((bRam0000000003eb504c & 1) == 0) {
        func_0x00f78a20(0x3d6d100);
        bRam0000000003eb504c = 1;
      }
      *(undefined8 *)(lVar8 + 0x50) = _UNK_033f8620;
      *(undefined8 *)(lVar8 + 0x58) = uVar14;
      if (*(long *)(lVar8 + 0x18) != 0) {
        plVar9 = (long *)/*Atlas.UI.TransitionManager$$StartTransitionSequence*/ func_0x01511d44(*(long *)(lVar8 + 0x18),0,/*STR('GENERIC_LOADING')*/ uRam0000000003d6d100,uVar14,0,0);
        *(undefined4 *)(lVar8 + 0x30) = 0xffffffff;
        return plVar9;
      }
      lVar12 = func_0x00f78af4();
      *(undefined8 *)(puVar3 + -0x50) = uVar14;
      *(long *)(puVar3 + -0x48) = lVar8;
      *(undefined1 **)(puVar3 + -0x40) = puVar3 + -0x10;
      *(undefined **)(puVar3 + -0x38) = &Atlas_Contexts_ContextManagerTransitions__CanDeInitContext;
      lVar8 = 0x3eb5000;
      if ((bRam0000000003eb5049 & 1) == 0) {
        func_0x00f78a20(0x3d21b28);
        bRam0000000003eb5049 = 1;
      }
      *(undefined8 *)(puVar3 + -0x58) = 0;
      if (*(long *)(lVar12 + 0x18) == 0) goto code_r0x01572e58;
      iVar6 = /*Atlas.UI.TransitionManager$$get_IsTransitionHidden*/ func_0x01511a90(*(long *)(lVar12 + 0x18),0);
      if ((iVar6 == 0) || (*(int *)(lVar12 + 0x50) == 1)) {
code_r0x01572dfc:
        if (*(long *)(lVar12 + 0x18) != 0) {
          plVar9 = (long *)/*Atlas.UI.TransitionManager$$get_IsTransitionFullyVisible*/ func_0x01511a60(*(long *)(lVar12 + 0x18),0);
          return plVar9;
        }
code_r0x01572e58:
        func_0x00f78af4();
code_r0x01572e5c:
        uVar16 = func_0x00f78b24();
        puVar19 = &Atlas_Contexts_ContextManagerTransitions__RequestKeyArt;
        auVar22 = func_0x00f78ac0(uVar16,0);
      }
      else {
        if (*(long *)(lVar12 + 0x10) == 0) goto code_r0x01572e58;
        iVar6 = /*Core.Contexts.ContextManager$$TryGetRequestedContext*/ func_0x0163d7e0(*(long *)(lVar12 + 0x10),puVar3 + -0x58,0);
        if ((iVar6 == 0) || (*(long **)(puVar3 + -0x58) == (long *)0x0)) {
code_r0x01572dc8:
          *(undefined4 *)(lVar12 + 0x54) = 1;
          *(undefined8 *)(lVar12 + 0x58) = 0;
          if (*(long *)(lVar12 + 0x18) != 0) {
            /*Atlas.UI.TransitionManager$$StartTransitionSequence*/ func_0x01511d44(*(long *)(lVar12 + 0x18),1,0,0,0,0);
            *(undefined4 *)(lVar12 + 0x30) = 0xffffffff;
            goto code_r0x01572dfc;
          }
          goto code_r0x01572e58;
        }
        lVar15 = **(long **)(puVar3 + -0x58);
        if ((*(byte *)(lVar15 + 300) < *(byte *)(/*Atlas.Contexts.GameContextInfoBase_TypeInfo*/ lRam0000000003d21b28 + 300)) ||
           (*(long *)(*(long *)(lVar15 + 200) + (ulong)*(byte *)(/*Atlas.Contexts.GameContextInfoBase_TypeInfo*/ lRam0000000003d21b28 + 300) * 8 +
                     -8) != /*Atlas.Contexts.GameContextInfoBase_TypeInfo*/ lRam0000000003d21b28)) goto code_r0x01572dc8;
        if (*(long *)(lVar12 + 0x20) == 0) goto code_r0x01572e58;
        lVar8 = *(long *)(*(long *)(lVar12 + 0x20) + 0x128);
        uVar7 = /*Atlas.Maths.NiceRandomSelection$$SelectNext*/ func_0x014b0d94(lVar12 + 0x34,0);
        if (lVar8 == 0) goto code_r0x01572e58;
        if (*(uint *)(lVar8 + 0x18) <= uVar7) goto code_r0x01572e5c;
        auVar22._8_8_ = *(undefined8 *)(lVar8 + (long)(int)uVar7 * 8 + 0x20);
        auVar22._0_8_ = lVar12;
        puVar19 = &UNK_01572e54;
      }
      plVar9 = auVar22._0_8_;
      puVar2 = (undefined8 *)(puVar3 + -0x90);
      *(long **)(puVar3 + -0x90) = param_3;
      *(undefined8 *)(puVar3 + -0x88) = 0x3eb5000;
      *(long *)(puVar3 + -0x80) = lVar8;
      *(long *)(puVar3 + -0x78) = lVar12;
      *(undefined1 **)(puVar3 + -0x70) = puVar3 + -0x40;
      *(undefined **)(puVar3 + -0x68) = puVar19;
      ppuVar18 = (undefined1 **)(puVar3 + -0x70);
      plVar10 = (long *)0x3eb5000;
      if ((bRam0000000003eb504a & 1) == 0) {
        func_0x00f78a20(0x3d6ba50);
        bRam0000000003eb504a = 1;
      }
      puVar19 = &UNK_01572ea8;
      goto code_r0x01572a80;
    }
    if (plVar9[2] == 0) goto code_r0x01572c8c;
    plVar17 = *(long **)(plVar9[2] + 0x68);
    if (plVar17 != (long *)0x0) {
      lVar8 = *plVar17;
      if ((*(byte *)(/*Atlas.Contexts.AtlasContext_TypeInfo*/ lRam0000000003d1fe98 + 300) <= *(byte *)(lVar8 + 300)) &&
         (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(/*Atlas.Contexts.AtlasContext_TypeInfo*/ lRam0000000003d1fe98 + 300) * 8 + -8)
          == /*Atlas.Contexts.AtlasContext_TypeInfo*/ lRam0000000003d1fe98)) {
        plVar17 = (long *)(**(code **)(lVar8 + 0x218))(plVar17,*(undefined8 *)(lVar8 + 0x220));
        if ((int)plVar17 == 0) goto code_r0x01572c2c;
        iVar6 = (int)plVar9[6];
      }
    }
    *(int *)(plVar9 + 6) = iVar6 + 1;
    if (iVar6 + 1 < 3) goto code_r0x01572c2c;
    if (plVar9[3] == 0) goto code_r0x01572c8c;
    /*Atlas.UI.TransitionManager$$EndTransitionSequence*/ func_0x01511e3c(plVar9[3],*(undefined4 *)((long)plVar9 + 0x54),plVar9[0xb],0,0);
    if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar17 = (long *)/*Atlas.UI.LoadingBehaviour$$Hide*/ func_0x01487c38(0);
    if ((int)plVar9[10] != 2) {
      *(undefined4 *)(plVar9 + 6) = 0xffffffff;
      goto code_r0x01572c2c;
    }
    puVar19 = &UNK_01572c24;
    puVar2 = (undefined8 *)((long)puVar2 + -0x40);
  } while( true );
}



// ============================================================
// RVA: 0x1572960 | Atlas.Contexts.ContextManagerTransitions.DeInit
// ============================================================

/* WARNING: Possible PIC construction at 0x015729d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01572c20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01572ea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01572e50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01572ea8) */
/* WARNING: Removing unreachable block (ram,0x01572ee8) */
/* WARNING: Removing unreachable block (ram,0x01572eb0) */
/* WARNING: Removing unreachable block (ram,0x01572e54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Contexts_ContextManagerTransitions__DeInit(long param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined8 uVar5;
  long *plVar6;
  uint uVar4;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *unaff_x22;
  undefined1 *puVar12;
  undefined *puVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  puVar12 = &stack0xfffffffffffffff0;
  uVar9 = 0x3eb5000;
  if ((bRam0000000003eb5047 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d26d68);
    func_0x00f78a20(0x3d53988);
    func_0x00f78a20(0x3d53990);
    bRam0000000003eb5047 = 1;
  }
  uVar5 = 0x3d1fa78;
  if (*(int *)(param_1 + 0x50) == 0) {
    unaff_x22 = (long *)(param_1 + 0x10);
    lVar10 = *unaff_x22;
    uVar5 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(uVar5,param_1,uRam0000000003d53990,0);
    if (lVar10 != 0) {
      /*Core.Contexts.ContextManager$$remove_OnInitFinished*/ func_0x0163cd24(lVar10,uVar5,0);
      lVar10 = *(long *)(param_1 + 0x10);
      uVar5 = func_0x00f78aec(/*Core.Contexts.ContextManager.CanProgressDelegate_TypeInfo*/ uRam0000000003d26d68);
      /*Core.Contexts.ContextManager.CanProgressDelegate$$.ctor*/ func_0x0163e26c(uVar5,param_1,uRam0000000003d53988,0);
      if (lVar10 != 0) {
        /*Core.Contexts.ContextManager$$RemoveCanDeInitContextCallback*/ func_0x0163d858(lVar10,uVar5,0);
        *(undefined8 *)(param_1 + 0x18) = 0;
        *unaff_x22 = 0;
        *(undefined8 *)(param_1 + 0x28) = 0;
        *(undefined8 *)(param_1 + 0x20) = 0;
        *(undefined8 *)(param_1 + 0x34) = 0;
        return;
      }
    }
    uVar9 = 0;
    puVar13 = &Atlas_Contexts_ContextManagerTransitions__ReleaseLoadedKeyArt;
    lVar10 = func_0x00f78af4();
    puVar1 = &stack0xffffffffffffffc0;
  }
  else {
    puVar13 = (undefined *)0x15729dc;
    puVar1 = &stack0xffffffffffffffc0;
    lVar10 = param_1;
  }
code_r0x01572a80:
  do {
    *(undefined8 *)(puVar1 + -0x20) = uVar9;
    *(long *)(puVar1 + -0x18) = param_1;
    *(undefined1 **)(puVar1 + -0x10) = puVar12;
    *(undefined **)(puVar1 + -8) = puVar13;
    if ((bRam0000000003eb504b & 1) == 0) {
      func_0x00f78a20(0x3d1fdb0);
      bRam0000000003eb504b = 1;
    }
    iVar3 = /*Core.Assets.AssetManagerHandle$$IsValid*/ func_0x01637a38(lVar10 + 0x4c,0);
    if (iVar3 == 0) {
code_r0x01572ad4:
      if (((*(ushort *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      *(undefined4 *)(lVar10 + 0x4c) = **(undefined4 **)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0xb8);
      *(undefined4 *)(lVar10 + 0x50) = 0;
      return;
    }
    if (*(long *)(lVar10 + 0x28) != 0) {
      /*Core.Assets.AssetManager$$Release*/ func_0x016363a4(*(long *)(lVar10 + 0x28),*(undefined4 *)(lVar10 + 0x4c),0);
      goto code_r0x01572ad4;
    }
    param_1 = func_0x00f78af4();
    puVar2 = puVar1 + -0x40;
    *(undefined8 *)(puVar1 + -0x40) = 0x3eb5000;
    *(long *)(puVar1 + -0x38) = lVar10;
    *(undefined1 **)(puVar1 + -0x30) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x28) = &Atlas_Contexts_ContextManagerTransitions__Update;
    puVar12 = puVar1 + -0x30;
    uVar9 = 0x3eb5000;
    if ((bRam0000000003eb5048 & 1) == 0) {
      func_0x00f78a20(0x3d51bc0);
      func_0x00f78a20(0x3d1fe98);
      func_0x00f78a20(0x3d23050);
      bRam0000000003eb5048 = 1;
    }
    iVar3 = *(int *)(param_1 + 0x30);
    if (iVar3 < 0) {
code_r0x01572c2c:
      if (*(int *)(param_1 + 0x50) != 1) {
        return;
      }
      if (*(long *)(param_1 + 0x28) == 0) {
code_r0x01572c8c:
        puVar13 = &Atlas_Contexts_ContextManagerTransitions__OnKeyArtLoaded;
        auVar14 = func_0x00f78af4();
      }
      else {
        iVar3 = /*Core.Assets.AssetManager$$HasAssetFinishedLoading*/ func_0x01636d40(*(long *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x4c),0);
        if (iVar3 == 0) {
          return;
        }
        if (*(long *)(param_1 + 0x28) == 0) goto code_r0x01572c8c;
        uVar9 = /*Core.Assets.AssetManager$$GetLoadedAsset<Sprite>*/ func_0x01818628(*(long *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x4c),
                                uRam0000000003d51bc0);
        auVar14._8_8_ = uVar9;
        auVar14._0_8_ = param_1;
        puVar12 = *(undefined1 **)(puVar1 + -0x30);
        puVar13 = *(undefined **)(puVar1 + -0x28);
        puVar2 = puVar1 + -0x20;
        uVar9 = *(undefined8 *)(puVar1 + -0x40);
        param_1 = *(long *)(puVar1 + -0x38);
      }
      uVar8 = auVar14._8_8_;
      lVar10 = auVar14._0_8_;
      *(long **)(puVar2 + -0x30) = unaff_x22;
      *(undefined8 *)(puVar2 + -0x28) = uVar5;
      *(undefined8 *)(puVar2 + -0x20) = uVar9;
      *(long *)(puVar2 + -0x18) = param_1;
      *(undefined1 **)(puVar2 + -0x10) = puVar12;
      *(undefined **)(puVar2 + -8) = puVar13;
      if ((bRam0000000003eb504c & 1) == 0) {
        func_0x00f78a20(0x3d6d100);
        bRam0000000003eb504c = 1;
      }
      *(undefined8 *)(lVar10 + 0x50) = _UNK_033f8620;
      *(undefined8 *)(lVar10 + 0x58) = uVar8;
      if (*(long *)(lVar10 + 0x18) != 0) {
        /*Atlas.UI.TransitionManager$$StartTransitionSequence*/ func_0x01511d44(*(long *)(lVar10 + 0x18),0,/*STR('GENERIC_LOADING')*/ uRam0000000003d6d100,uVar8,0,0);
        *(undefined4 *)(lVar10 + 0x30) = 0xffffffff;
        return;
      }
      lVar7 = func_0x00f78af4();
      *(undefined8 *)(puVar2 + -0x50) = uVar8;
      *(long *)(puVar2 + -0x48) = lVar10;
      *(undefined1 **)(puVar2 + -0x40) = puVar2 + -0x10;
      *(undefined **)(puVar2 + -0x38) = &Atlas_Contexts_ContextManagerTransitions__CanDeInitContext;
      lVar11 = 0x3eb5000;
      if ((bRam0000000003eb5049 & 1) == 0) {
        func_0x00f78a20(0x3d21b28);
        bRam0000000003eb5049 = 1;
      }
      *(undefined8 *)(puVar2 + -0x58) = 0;
      if (*(long *)(lVar7 + 0x18) == 0) goto code_r0x01572e58;
      iVar3 = /*Atlas.UI.TransitionManager$$get_IsTransitionHidden*/ func_0x01511a90(*(long *)(lVar7 + 0x18),0);
      if ((iVar3 == 0) || (*(int *)(lVar7 + 0x50) == 1)) {
code_r0x01572dfc:
        if (*(long *)(lVar7 + 0x18) != 0) {
          /*Atlas.UI.TransitionManager$$get_IsTransitionFullyVisible*/ func_0x01511a60(*(long *)(lVar7 + 0x18),0);
          return;
        }
code_r0x01572e58:
        func_0x00f78af4();
code_r0x01572e5c:
        uVar9 = func_0x00f78b24();
        puVar13 = &Atlas_Contexts_ContextManagerTransitions__RequestKeyArt;
        auVar15 = func_0x00f78ac0(uVar9,0);
      }
      else {
        if (*(long *)(lVar7 + 0x10) == 0) goto code_r0x01572e58;
        iVar3 = /*Core.Contexts.ContextManager$$TryGetRequestedContext*/ func_0x0163d7e0(*(long *)(lVar7 + 0x10),puVar2 + -0x58,0);
        if ((iVar3 == 0) || (*(long **)(puVar2 + -0x58) == (long *)0x0)) {
code_r0x01572dc8:
          *(undefined4 *)(lVar7 + 0x54) = 1;
          *(undefined8 *)(lVar7 + 0x58) = 0;
          if (*(long *)(lVar7 + 0x18) != 0) {
            /*Atlas.UI.TransitionManager$$StartTransitionSequence*/ func_0x01511d44(*(long *)(lVar7 + 0x18),1,0,0,0,0);
            *(undefined4 *)(lVar7 + 0x30) = 0xffffffff;
            goto code_r0x01572dfc;
          }
          goto code_r0x01572e58;
        }
        lVar10 = **(long **)(puVar2 + -0x58);
        if ((*(byte *)(lVar10 + 300) < *(byte *)(/*Atlas.Contexts.GameContextInfoBase_TypeInfo*/ lRam0000000003d21b28 + 300)) ||
           (*(long *)(*(long *)(lVar10 + 200) + (ulong)*(byte *)(/*Atlas.Contexts.GameContextInfoBase_TypeInfo*/ lRam0000000003d21b28 + 300) * 8 +
                     -8) != /*Atlas.Contexts.GameContextInfoBase_TypeInfo*/ lRam0000000003d21b28)) goto code_r0x01572dc8;
        if (*(long *)(lVar7 + 0x20) == 0) goto code_r0x01572e58;
        lVar11 = *(long *)(*(long *)(lVar7 + 0x20) + 0x128);
        uVar4 = /*Atlas.Maths.NiceRandomSelection$$SelectNext*/ func_0x014b0d94(lVar7 + 0x34,0);
        if (lVar11 == 0) goto code_r0x01572e58;
        if (*(uint *)(lVar11 + 0x18) <= uVar4) goto code_r0x01572e5c;
        auVar15._8_8_ = *(undefined8 *)(lVar11 + (long)(int)uVar4 * 8 + 0x20);
        auVar15._0_8_ = lVar7;
        puVar13 = &UNK_01572e54;
      }
      uVar9 = auVar15._8_8_;
      lVar10 = auVar15._0_8_;
      puVar1 = puVar2 + -0x90;
      *(long **)(puVar2 + -0x90) = unaff_x22;
      *(undefined8 *)(puVar2 + -0x88) = 0x3eb5000;
      *(long *)(puVar2 + -0x80) = lVar11;
      *(long *)(puVar2 + -0x78) = lVar7;
      *(undefined1 **)(puVar2 + -0x70) = puVar2 + -0x40;
      *(undefined **)(puVar2 + -0x68) = puVar13;
      puVar12 = puVar2 + -0x70;
      uVar5 = 0x3eb5000;
      if ((bRam0000000003eb504a & 1) == 0) {
        func_0x00f78a20(0x3d6ba50);
        bRam0000000003eb504a = 1;
      }
      puVar13 = &UNK_01572ea8;
      param_1 = lVar10;
      goto code_r0x01572a80;
    }
    if (*(long *)(param_1 + 0x10) == 0) goto code_r0x01572c8c;
    plVar6 = *(long **)(*(long *)(param_1 + 0x10) + 0x68);
    if (plVar6 != (long *)0x0) {
      lVar10 = *plVar6;
      if ((*(byte *)(/*Atlas.Contexts.AtlasContext_TypeInfo*/ lRam0000000003d1fe98 + 300) <= *(byte *)(lVar10 + 300)) &&
         (*(long *)(*(long *)(lVar10 + 200) + (ulong)*(byte *)(/*Atlas.Contexts.AtlasContext_TypeInfo*/ lRam0000000003d1fe98 + 300) * 8 + -8)
          == /*Atlas.Contexts.AtlasContext_TypeInfo*/ lRam0000000003d1fe98)) {
        iVar3 = (**(code **)(lVar10 + 0x218))(plVar6,*(undefined8 *)(lVar10 + 0x220));
        if (iVar3 == 0) goto code_r0x01572c2c;
        iVar3 = *(int *)(param_1 + 0x30);
      }
    }
    *(int *)(param_1 + 0x30) = iVar3 + 1;
    if (iVar3 + 1 < 3) goto code_r0x01572c2c;
    if (*(long *)(param_1 + 0x18) == 0) goto code_r0x01572c8c;
    /*Atlas.UI.TransitionManager$$EndTransitionSequence*/ func_0x01511e3c(*(long *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x54),
                    *(undefined8 *)(param_1 + 0x58),0,0);
    if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*Atlas.UI.LoadingBehaviour$$Hide*/ func_0x01487c38(0);
    if (*(int *)(param_1 + 0x50) != 2) {
      *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
      goto code_r0x01572c2c;
    }
    puVar13 = &UNK_01572c24;
    puVar1 = puVar1 + -0x40;
    lVar10 = param_1;
  } while( true );
}



// ============================================================
// RVA: 0x1572a80 | Atlas.Contexts.ContextManagerTransitions.ReleaseLoadedKeyArt
// ============================================================

/* WARNING: Possible PIC construction at 0x01572e50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01572e54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Contexts_ContextManagerTransitions__ReleaseLoadedKeyArt(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  uint uVar3;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 ****ppppuVar11;
  undefined *puVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uStack_40;
  long lStack_38;
  undefined8 ***pppuStack_30;
  undefined *puStack_28;
  
  if ((bRam0000000003eb504b & 1) == 0) {
    func_0x00f78a20(0x3d1fdb0);
    bRam0000000003eb504b = 1;
  }
  iVar2 = /*Core.Assets.AssetManagerHandle$$IsValid*/ func_0x01637a38(param_1 + 0x4c,0);
  if (iVar2 == 0) {
LAB_01572ad4:
    if (((*(ushort *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    *(undefined4 *)(param_1 + 0x4c) = **(undefined4 **)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0xb8);
    *(undefined4 *)(param_1 + 0x50) = 0;
    return;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    /*Core.Assets.AssetManager$$Release*/ func_0x016363a4(*(long *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x4c),0);
    goto LAB_01572ad4;
  }
  lVar5 = func_0x00f78af4();
  puVar1 = &uStack_40;
  uStack_40 = 0x3eb5000;
  puStack_28 = &Atlas_Contexts_ContextManagerTransitions__Update;
  ppppuVar11 = &pppuStack_30;
  uVar10 = 0x3eb5000;
  lStack_38 = param_1;
  pppuStack_30 = (undefined8 ***)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb5048 & 1) == 0) {
    func_0x00f78a20(0x3d51bc0);
    func_0x00f78a20(0x3d1fe98);
    func_0x00f78a20(0x3d23050);
    bRam0000000003eb5048 = 1;
  }
  iVar2 = *(int *)(lVar5 + 0x30);
  if (iVar2 < 0) {
code_r0x01572c2c:
    if (*(int *)(lVar5 + 0x50) != 1) {
      return;
    }
    if (*(long *)(lVar5 + 0x28) == 0) goto code_r0x01572c8c;
    iVar2 = /*Core.Assets.AssetManager$$HasAssetFinishedLoading*/ func_0x01636d40(*(long *)(lVar5 + 0x28),*(undefined4 *)(lVar5 + 0x4c),0);
    if (iVar2 == 0) {
      return;
    }
    if (*(long *)(lVar5 + 0x28) == 0) goto code_r0x01572c8c;
    uVar10 = /*Core.Assets.AssetManager$$GetLoadedAsset<Sprite>*/ func_0x01818628(*(long *)(lVar5 + 0x28),*(undefined4 *)(lVar5 + 0x4c),
                             uRam0000000003d51bc0);
    auVar13._8_8_ = uVar10;
    auVar13._0_8_ = lVar5;
    puVar1 = (undefined8 *)&stack0xffffffffffffffe0;
    lVar5 = lStack_38;
    uVar10 = uStack_40;
    ppppuVar11 = (undefined8 ****)pppuStack_30;
    puVar12 = puStack_28;
  }
  else {
    if (*(long *)(lVar5 + 0x10) != 0) {
      plVar6 = *(long **)(*(long *)(lVar5 + 0x10) + 0x68);
      if (plVar6 != (long *)0x0) {
        lVar8 = *plVar6;
        if ((*(byte *)(/*Atlas.Contexts.AtlasContext_TypeInfo*/ lRam0000000003d1fe98 + 300) <= *(byte *)(lVar8 + 300)) &&
           (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(/*Atlas.Contexts.AtlasContext_TypeInfo*/ lRam0000000003d1fe98 + 300) * 8 + -8
                     ) == /*Atlas.Contexts.AtlasContext_TypeInfo*/ lRam0000000003d1fe98)) {
          iVar2 = (**(code **)(lVar8 + 0x218))(plVar6,*(undefined8 *)(lVar8 + 0x220));
          if (iVar2 == 0) goto code_r0x01572c2c;
          iVar2 = *(int *)(lVar5 + 0x30);
        }
      }
      *(int *)(lVar5 + 0x30) = iVar2 + 1;
      if (2 < iVar2 + 1) {
        if (*(long *)(lVar5 + 0x18) == 0) goto code_r0x01572c8c;
        /*Atlas.UI.TransitionManager$$EndTransitionSequence*/ func_0x01511e3c(*(long *)(lVar5 + 0x18),*(undefined4 *)(lVar5 + 0x54),
                        *(undefined8 *)(lVar5 + 0x58),0,0);
        if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        /*Atlas.UI.LoadingBehaviour$$Hide*/ func_0x01487c38(0);
        if (*(int *)(lVar5 + 0x50) == 2) {
          Atlas_Contexts_ContextManagerTransitions__ReleaseLoadedKeyArt(lVar5);
        }
        *(undefined4 *)(lVar5 + 0x30) = 0xffffffff;
      }
      goto code_r0x01572c2c;
    }
code_r0x01572c8c:
    puVar12 = &Atlas_Contexts_ContextManagerTransitions__OnKeyArtLoaded;
    auVar13 = func_0x00f78af4();
  }
  uVar7 = auVar13._8_8_;
  lVar8 = auVar13._0_8_;
  *(undefined8 *)((long)puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)((long)puVar1 + -0x28) = unaff_x21;
  *(undefined8 *)((long)puVar1 + -0x20) = uVar10;
  *(long *)((long)puVar1 + -0x18) = lVar5;
  *(undefined8 *****)((long)puVar1 + -0x10) = ppppuVar11;
  *(undefined **)((long)puVar1 + -8) = puVar12;
  if ((bRam0000000003eb504c & 1) == 0) {
    func_0x00f78a20(0x3d6d100);
    bRam0000000003eb504c = 1;
  }
  *(undefined8 *)(lVar8 + 0x50) = _UNK_033f8620;
  *(undefined8 *)(lVar8 + 0x58) = uVar7;
  if (*(long *)(lVar8 + 0x18) != 0) {
    /*Atlas.UI.TransitionManager$$StartTransitionSequence*/ func_0x01511d44(*(long *)(lVar8 + 0x18),0,/*STR('GENERIC_LOADING')*/ uRam0000000003d6d100,uVar7,0,0);
    *(undefined4 *)(lVar8 + 0x30) = 0xffffffff;
    return;
  }
  lVar5 = func_0x00f78af4();
  *(undefined8 *)((long)puVar1 + -0x50) = uVar7;
  *(long *)((long)puVar1 + -0x48) = lVar8;
  *(undefined1 **)((long)puVar1 + -0x40) = (undefined1 *)((long)puVar1 + -0x10);
  *(undefined **)((long)puVar1 + -0x38) =
       &Atlas_Contexts_ContextManagerTransitions__CanDeInitContext;
  lVar8 = 0x3eb5000;
  if ((bRam0000000003eb5049 & 1) == 0) {
    func_0x00f78a20(0x3d21b28);
    bRam0000000003eb5049 = 1;
  }
  *(undefined8 *)((long)puVar1 + -0x58) = 0;
  if (*(long *)(lVar5 + 0x18) == 0) goto code_r0x01572e58;
  iVar2 = /*Atlas.UI.TransitionManager$$get_IsTransitionHidden*/ func_0x01511a90(*(long *)(lVar5 + 0x18),0);
  if ((iVar2 == 0) || (*(int *)(lVar5 + 0x50) == 1)) {
code_r0x01572dfc:
    if (*(long *)(lVar5 + 0x18) != 0) {
      /*Atlas.UI.TransitionManager$$get_IsTransitionFullyVisible*/ func_0x01511a60(*(long *)(lVar5 + 0x18),0);
      return;
    }
code_r0x01572e58:
    func_0x00f78af4();
  }
  else {
    if (*(long *)(lVar5 + 0x10) == 0) goto code_r0x01572e58;
    iVar2 = /*Core.Contexts.ContextManager$$TryGetRequestedContext*/ func_0x0163d7e0(*(long *)(lVar5 + 0x10),(undefined1 *)((long)puVar1 + -0x58),0);
    if ((iVar2 == 0) || (*(long **)((long)puVar1 + -0x58) == (long *)0x0)) {
code_r0x01572dc8:
      *(undefined4 *)(lVar5 + 0x54) = 1;
      *(undefined8 *)(lVar5 + 0x58) = 0;
      if (*(long *)(lVar5 + 0x18) != 0) {
        /*Atlas.UI.TransitionManager$$StartTransitionSequence*/ func_0x01511d44(*(long *)(lVar5 + 0x18),1,0,0,0,0);
        *(undefined4 *)(lVar5 + 0x30) = 0xffffffff;
        goto code_r0x01572dfc;
      }
      goto code_r0x01572e58;
    }
    lVar9 = **(long **)((long)puVar1 + -0x58);
    if ((*(byte *)(lVar9 + 300) < *(byte *)(/*Atlas.Contexts.GameContextInfoBase_TypeInfo*/ lRam0000000003d21b28 + 300)) ||
       (*(long *)(*(long *)(lVar9 + 200) + (ulong)*(byte *)(/*Atlas.Contexts.GameContextInfoBase_TypeInfo*/ lRam0000000003d21b28 + 300) * 8 + -8) !=
        /*Atlas.Contexts.GameContextInfoBase_TypeInfo*/ lRam0000000003d21b28)) goto code_r0x01572dc8;
    if (*(long *)(lVar5 + 0x20) == 0) goto code_r0x01572e58;
    lVar8 = *(long *)(*(long *)(lVar5 + 0x20) + 0x128);
    uVar3 = /*Atlas.Maths.NiceRandomSelection$$SelectNext*/ func_0x014b0d94(lVar5 + 0x34,0);
    if (lVar8 == 0) goto code_r0x01572e58;
    if (uVar3 < *(uint *)(lVar8 + 0x18)) {
      auVar14._8_8_ = *(undefined8 *)(lVar8 + (long)(int)uVar3 * 8 + 0x20);
      auVar14._0_8_ = lVar5;
      puVar12 = &UNK_01572e54;
      goto code_r0x01572e68;
    }
  }
  uVar10 = func_0x00f78b24();
  puVar12 = &Atlas_Contexts_ContextManagerTransitions__RequestKeyArt;
  auVar14 = func_0x00f78ac0(uVar10,0);
code_r0x01572e68:
  lVar9 = auVar14._0_8_;
  *(undefined8 *)((long)puVar1 + -0x90) = unaff_x22;
  *(undefined8 *)((long)puVar1 + -0x88) = 0x3eb5000;
  *(long *)((long)puVar1 + -0x80) = lVar8;
  *(long *)((long)puVar1 + -0x78) = lVar5;
  *(undefined1 **)((long)puVar1 + -0x70) = (undefined1 *)((long)puVar1 + -0x40);
  *(undefined **)((long)puVar1 + -0x68) = puVar12;
  if ((bRam0000000003eb504a & 1) == 0) {
    func_0x00f78a20(0x3d6ba50);
    bRam0000000003eb504a = 1;
  }
  Atlas_Contexts_ContextManagerTransitions__ReleaseLoadedKeyArt(lVar9);
  if (*(long *)(lVar9 + 0x28) == 0) {
    lVar5 = func_0x00f78af4();
    *(undefined4 *)(lVar5 + 0x30) = 0;
    return;
  }
  uVar4 = /*Core.Assets.AssetManager$$RequestSpriteAsset*/ func_0x01636004(*(long *)(lVar9 + 0x28),auVar14._8_8_,/*STR('Default')*/ uRam0000000003d6ba50,0,0,0);
  *(undefined4 *)(lVar9 + 0x4c) = uVar4;
  *(undefined4 *)(lVar9 + 0x50) = 1;
  return;
}



// ============================================================
// RVA: 0x1572b14 | Atlas.Contexts.ContextManagerTransitions.Update
// ============================================================

/* WARNING: Possible PIC construction at 0x01572e50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01572e54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Contexts_ContextManagerTransitions__Update(long param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar4;
  uint uVar3;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar10;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar11;
  undefined *unaff_x30;
  undefined *puVar12;
  undefined1 auVar13 [16];
  
  puVar1 = &stack0xffffffffffffffe0;
  puVar11 = &stack0xfffffffffffffff0;
  uVar10 = 0x3eb5000;
  if ((bRam0000000003eb5048 & 1) == 0) {
    func_0x00f78a20(0x3d51bc0);
    func_0x00f78a20(0x3d1fe98);
    func_0x00f78a20(0x3d23050);
    bRam0000000003eb5048 = 1;
  }
  iVar2 = *(int *)(param_1 + 0x30);
  if (iVar2 < 0) {
LAB_01572c2c:
    if (*(int *)(param_1 + 0x50) != 1) {
      return;
    }
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_01572c8c;
    iVar2 = /*Core.Assets.AssetManager$$HasAssetFinishedLoading*/ func_0x01636d40(*(long *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x4c),0);
    if (iVar2 == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_01572c8c;
    uVar6 = /*Core.Assets.AssetManager$$GetLoadedAsset<Sprite>*/ func_0x01818628(*(long *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x4c),
                            uRam0000000003d51bc0);
    puVar1 = (undefined1 *)register0x00000008;
    lVar8 = param_1;
    param_1 = unaff_x19;
    uVar10 = unaff_x20;
    puVar11 = unaff_x29;
  }
  else {
    if (*(long *)(param_1 + 0x10) != 0) {
      plVar5 = *(long **)(*(long *)(param_1 + 0x10) + 0x68);
      if (plVar5 != (long *)0x0) {
        lVar8 = *plVar5;
        if ((*(byte *)(/*Atlas.Contexts.AtlasContext_TypeInfo*/ lRam0000000003d1fe98 + 300) <= *(byte *)(lVar8 + 300)) &&
           (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(/*Atlas.Contexts.AtlasContext_TypeInfo*/ lRam0000000003d1fe98 + 300) * 8 + -8
                     ) == /*Atlas.Contexts.AtlasContext_TypeInfo*/ lRam0000000003d1fe98)) {
          iVar2 = (**(code **)(lVar8 + 0x218))(plVar5,*(undefined8 *)(lVar8 + 0x220));
          if (iVar2 == 0) goto LAB_01572c2c;
          iVar2 = *(int *)(param_1 + 0x30);
        }
      }
      *(int *)(param_1 + 0x30) = iVar2 + 1;
      if (2 < iVar2 + 1) {
        if (*(long *)(param_1 + 0x18) == 0) goto LAB_01572c8c;
        /*Atlas.UI.TransitionManager$$EndTransitionSequence*/ func_0x01511e3c(*(long *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x54),
                        *(undefined8 *)(param_1 + 0x58),0,0);
        if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        /*Atlas.UI.LoadingBehaviour$$Hide*/ func_0x01487c38(0);
        if (*(int *)(param_1 + 0x50) == 2) {
          Atlas_Contexts_ContextManagerTransitions__ReleaseLoadedKeyArt(param_1);
        }
        *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
      }
      goto LAB_01572c2c;
    }
LAB_01572c8c:
    unaff_x30 = &Atlas_Contexts_ContextManagerTransitions__OnKeyArtLoaded;
    auVar13 = func_0x00f78af4();
    uVar6 = auVar13._8_8_;
    lVar8 = auVar13._0_8_;
  }
  *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar1 + -0x20) = uVar10;
  *(long *)(puVar1 + -0x18) = param_1;
  *(undefined1 **)(puVar1 + -0x10) = puVar11;
  *(undefined **)(puVar1 + -8) = unaff_x30;
  if ((bRam0000000003eb504c & 1) == 0) {
    func_0x00f78a20(0x3d6d100);
    bRam0000000003eb504c = 1;
  }
  *(undefined8 *)(lVar8 + 0x50) = _UNK_033f8620;
  *(undefined8 *)(lVar8 + 0x58) = uVar6;
  if (*(long *)(lVar8 + 0x18) != 0) {
    /*Atlas.UI.TransitionManager$$StartTransitionSequence*/ func_0x01511d44(*(long *)(lVar8 + 0x18),0,/*STR('GENERIC_LOADING')*/ uRam0000000003d6d100,uVar6,0,0);
    *(undefined4 *)(lVar8 + 0x30) = 0xffffffff;
    return;
  }
  lVar7 = func_0x00f78af4();
  *(undefined8 *)(puVar1 + -0x50) = uVar6;
  *(long *)(puVar1 + -0x48) = lVar8;
  *(undefined1 **)(puVar1 + -0x40) = puVar1 + -0x10;
  *(undefined **)(puVar1 + -0x38) = &Atlas_Contexts_ContextManagerTransitions__CanDeInitContext;
  lVar8 = 0x3eb5000;
  if ((bRam0000000003eb5049 & 1) == 0) {
    func_0x00f78a20(0x3d21b28);
    bRam0000000003eb5049 = 1;
  }
  *(undefined8 *)(puVar1 + -0x58) = 0;
  if (*(long *)(lVar7 + 0x18) == 0) goto code_r0x01572e58;
  iVar2 = /*Atlas.UI.TransitionManager$$get_IsTransitionHidden*/ func_0x01511a90(*(long *)(lVar7 + 0x18),0);
  if ((iVar2 == 0) || (*(int *)(lVar7 + 0x50) == 1)) {
code_r0x01572dfc:
    if (*(long *)(lVar7 + 0x18) != 0) {
      /*Atlas.UI.TransitionManager$$get_IsTransitionFullyVisible*/ func_0x01511a60(*(long *)(lVar7 + 0x18),0);
      return;
    }
code_r0x01572e58:
    func_0x00f78af4();
  }
  else {
    if (*(long *)(lVar7 + 0x10) == 0) goto code_r0x01572e58;
    iVar2 = /*Core.Contexts.ContextManager$$TryGetRequestedContext*/ func_0x0163d7e0(*(long *)(lVar7 + 0x10),puVar1 + -0x58,0);
    if ((iVar2 == 0) || (*(long **)(puVar1 + -0x58) == (long *)0x0)) {
code_r0x01572dc8:
      *(undefined4 *)(lVar7 + 0x54) = 1;
      *(undefined8 *)(lVar7 + 0x58) = 0;
      if (*(long *)(lVar7 + 0x18) != 0) {
        /*Atlas.UI.TransitionManager$$StartTransitionSequence*/ func_0x01511d44(*(long *)(lVar7 + 0x18),1,0,0,0,0);
        *(undefined4 *)(lVar7 + 0x30) = 0xffffffff;
        goto code_r0x01572dfc;
      }
      goto code_r0x01572e58;
    }
    lVar9 = **(long **)(puVar1 + -0x58);
    if ((*(byte *)(lVar9 + 300) < *(byte *)(/*Atlas.Contexts.GameContextInfoBase_TypeInfo*/ lRam0000000003d21b28 + 300)) ||
       (*(long *)(*(long *)(lVar9 + 200) + (ulong)*(byte *)(/*Atlas.Contexts.GameContextInfoBase_TypeInfo*/ lRam0000000003d21b28 + 300) * 8 + -8) !=
        /*Atlas.Contexts.GameContextInfoBase_TypeInfo*/ lRam0000000003d21b28)) goto code_r0x01572dc8;
    if (*(long *)(lVar7 + 0x20) == 0) goto code_r0x01572e58;
    lVar8 = *(long *)(*(long *)(lVar7 + 0x20) + 0x128);
    uVar3 = /*Atlas.Maths.NiceRandomSelection$$SelectNext*/ func_0x014b0d94(lVar7 + 0x34,0);
    if (lVar8 == 0) goto code_r0x01572e58;
    if (uVar3 < *(uint *)(lVar8 + 0x18)) {
      auVar13._8_8_ = *(undefined8 *)(lVar8 + (long)(int)uVar3 * 8 + 0x20);
      auVar13._0_8_ = lVar7;
      puVar12 = &UNK_01572e54;
      goto code_r0x01572e68;
    }
  }
  uVar10 = func_0x00f78b24();
  puVar12 = &Atlas_Contexts_ContextManagerTransitions__RequestKeyArt;
  auVar13 = func_0x00f78ac0(uVar10,0);
code_r0x01572e68:
  lVar9 = auVar13._0_8_;
  *(undefined8 *)(puVar1 + -0x90) = unaff_x22;
  *(undefined8 *)(puVar1 + -0x88) = 0x3eb5000;
  *(long *)(puVar1 + -0x80) = lVar8;
  *(long *)(puVar1 + -0x78) = lVar7;
  *(undefined1 **)(puVar1 + -0x70) = puVar1 + -0x40;
  *(undefined **)(puVar1 + -0x68) = puVar12;
  if ((bRam0000000003eb504a & 1) == 0) {
    func_0x00f78a20(0x3d6ba50);
    bRam0000000003eb504a = 1;
  }
  Atlas_Contexts_ContextManagerTransitions__ReleaseLoadedKeyArt(lVar9);
  if (*(long *)(lVar9 + 0x28) == 0) {
    lVar8 = func_0x00f78af4();
    *(undefined4 *)(lVar8 + 0x30) = 0;
    return;
  }
  uVar4 = /*Core.Assets.AssetManager$$RequestSpriteAsset*/ func_0x01636004(*(long *)(lVar9 + 0x28),auVar13._8_8_,/*STR('Default')*/ uRam0000000003d6ba50,0,0,0);
  *(undefined4 *)(lVar9 + 0x4c) = uVar4;
  *(undefined4 *)(lVar9 + 0x50) = 1;
  return;
}



// ============================================================
// RVA: 0x1572c90 | Atlas.Contexts.ContextManagerTransitions.OnKeyArtLoaded
// ============================================================

/* WARNING: Possible PIC construction at 0x01572e50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01572e54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Contexts_ContextManagerTransitions__OnKeyArtLoaded(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar3;
  uint uVar2;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  long *plStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb504c & 1) == 0) {
    func_0x00f78a20(0x3d6d100);
    bRam0000000003eb504c = 1;
  }
  *(undefined8 *)(param_1 + 0x50) = _UNK_033f8620;
  *(undefined8 *)(param_1 + 0x58) = param_2;
  if (*(long *)(param_1 + 0x18) != 0) {
    /*Atlas.UI.TransitionManager$$StartTransitionSequence*/ func_0x01511d44(*(long *)(param_1 + 0x18),0,/*STR('GENERIC_LOADING')*/ uRam0000000003d6d100,param_2,0,0);
    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
    return;
  }
  lVar4 = func_0x00f78af4();
  puStack_38 = &Atlas_Contexts_ContextManagerTransitions__CanDeInitContext;
  uStack_50 = param_2;
  lStack_48 = param_1;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5049 & 1) == 0) {
    func_0x00f78a20(0x3d21b28);
    bRam0000000003eb5049 = 1;
  }
  plStack_58 = (long *)0x0;
  if (*(long *)(lVar4 + 0x18) == 0) goto code_r0x01572e58;
  iVar1 = /*Atlas.UI.TransitionManager$$get_IsTransitionHidden*/ func_0x01511a90(*(long *)(lVar4 + 0x18),0);
  if ((iVar1 == 0) || (*(int *)(lVar4 + 0x50) == 1)) {
code_r0x01572dfc:
    if (*(long *)(lVar4 + 0x18) != 0) {
      /*Atlas.UI.TransitionManager$$get_IsTransitionFullyVisible*/ func_0x01511a60(*(long *)(lVar4 + 0x18),0);
      return;
    }
code_r0x01572e58:
    func_0x00f78af4();
  }
  else {
    if (*(long *)(lVar4 + 0x10) == 0) goto code_r0x01572e58;
    iVar1 = /*Core.Contexts.ContextManager$$TryGetRequestedContext*/ func_0x0163d7e0(*(long *)(lVar4 + 0x10),&plStack_58,0);
    if ((iVar1 == 0) || (plStack_58 == (long *)0x0)) {
code_r0x01572dc8:
      *(undefined4 *)(lVar4 + 0x54) = 1;
      *(undefined8 *)(lVar4 + 0x58) = 0;
      if (*(long *)(lVar4 + 0x18) != 0) {
        /*Atlas.UI.TransitionManager$$StartTransitionSequence*/ func_0x01511d44(*(long *)(lVar4 + 0x18),1,0,0,0,0);
        *(undefined4 *)(lVar4 + 0x30) = 0xffffffff;
        goto code_r0x01572dfc;
      }
      goto code_r0x01572e58;
    }
    if ((*(byte *)(*plStack_58 + 300) < *(byte *)(/*Atlas.Contexts.GameContextInfoBase_TypeInfo*/ lRam0000000003d21b28 + 300)) ||
       (*(long *)(*(long *)(*plStack_58 + 200) + (ulong)*(byte *)(/*Atlas.Contexts.GameContextInfoBase_TypeInfo*/ lRam0000000003d21b28 + 300) * 8 +
                 -8) != /*Atlas.Contexts.GameContextInfoBase_TypeInfo*/ lRam0000000003d21b28)) goto code_r0x01572dc8;
    if (*(long *)(lVar4 + 0x20) == 0) goto code_r0x01572e58;
    lVar6 = *(long *)(*(long *)(lVar4 + 0x20) + 0x128);
    uVar2 = /*Atlas.Maths.NiceRandomSelection$$SelectNext*/ func_0x014b0d94(lVar4 + 0x34,0);
    if (lVar6 == 0) goto code_r0x01572e58;
    if (uVar2 < *(uint *)(lVar6 + 0x18)) {
      auVar7._8_8_ = *(undefined8 *)(lVar6 + (long)(int)uVar2 * 8 + 0x20);
      auVar7._0_8_ = lVar4;
      goto code_r0x01572e68;
    }
  }
  uVar5 = func_0x00f78b24();
  auVar7 = func_0x00f78ac0(uVar5,0);
code_r0x01572e68:
  lVar4 = auVar7._0_8_;
  if ((bRam0000000003eb504a & 1) == 0) {
    func_0x00f78a20(0x3d6ba50);
    bRam0000000003eb504a = 1;
  }
  Atlas_Contexts_ContextManagerTransitions__ReleaseLoadedKeyArt(lVar4);
  if (*(long *)(lVar4 + 0x28) != 0) {
    uVar3 = /*Core.Assets.AssetManager$$RequestSpriteAsset*/ func_0x01636004(*(long *)(lVar4 + 0x28),auVar7._8_8_,/*STR('Default')*/ uRam0000000003d6ba50,0,0,0);
    *(undefined4 *)(lVar4 + 0x4c) = uVar3;
    *(undefined4 *)(lVar4 + 0x50) = 1;
    return;
  }
  lVar4 = func_0x00f78af4();
  *(undefined4 *)(lVar4 + 0x30) = 0;
  return;
}



// ============================================================
// RVA: 0x1572d1c | Atlas.Contexts.ContextManagerTransitions.CanDeInitContext
// ============================================================

/* WARNING: Possible PIC construction at 0x01572e50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01572e54) */

void Atlas_Contexts_ContextManagerTransitions__CanDeInitContext(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  long *plStack_28;
  
  if ((bRam0000000003eb5049 & 1) == 0) {
    func_0x00f78a20(0x3d21b28);
    bRam0000000003eb5049 = 1;
  }
  plStack_28 = (long *)0x0;
  if (*(long *)(param_1 + 0x18) == 0) goto LAB_01572e58;
  iVar1 = /*Atlas.UI.TransitionManager$$get_IsTransitionHidden*/ func_0x01511a90(*(long *)(param_1 + 0x18),0);
  if ((iVar1 == 0) || (*(int *)(param_1 + 0x50) == 1)) {
LAB_01572dfc:
    if (*(long *)(param_1 + 0x18) != 0) {
      /*Atlas.UI.TransitionManager$$get_IsTransitionFullyVisible*/ func_0x01511a60(*(long *)(param_1 + 0x18),0);
      return;
    }
LAB_01572e58:
    func_0x00f78af4();
  }
  else {
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_01572e58;
    iVar1 = /*Core.Contexts.ContextManager$$TryGetRequestedContext*/ func_0x0163d7e0(*(long *)(param_1 + 0x10),&plStack_28,0);
    if ((iVar1 == 0) || (plStack_28 == (long *)0x0)) {
LAB_01572dc8:
      *(undefined4 *)(param_1 + 0x54) = 1;
      *(undefined8 *)(param_1 + 0x58) = 0;
      if (*(long *)(param_1 + 0x18) != 0) {
        /*Atlas.UI.TransitionManager$$StartTransitionSequence*/ func_0x01511d44(*(long *)(param_1 + 0x18),1,0,0,0,0);
        *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
        goto LAB_01572dfc;
      }
      goto LAB_01572e58;
    }
    if ((*(byte *)(*plStack_28 + 300) < *(byte *)(/*Atlas.Contexts.GameContextInfoBase_TypeInfo*/ lRam0000000003d21b28 + 300)) ||
       (*(long *)(*(long *)(*plStack_28 + 200) + (ulong)*(byte *)(/*Atlas.Contexts.GameContextInfoBase_TypeInfo*/ lRam0000000003d21b28 + 300) * 8 +
                 -8) != /*Atlas.Contexts.GameContextInfoBase_TypeInfo*/ lRam0000000003d21b28)) goto LAB_01572dc8;
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_01572e58;
    lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 0x128);
    uVar2 = /*Atlas.Maths.NiceRandomSelection$$SelectNext*/ func_0x014b0d94(param_1 + 0x34,0);
    if (lVar5 == 0) goto LAB_01572e58;
    if (uVar2 < *(uint *)(lVar5 + 0x18)) {
      uVar4 = *(undefined8 *)(lVar5 + (long)(int)uVar2 * 8 + 0x20);
      goto code_r0x01572e68;
    }
  }
  uVar4 = func_0x00f78b24();
  auVar6 = func_0x00f78ac0(uVar4,0);
  uVar4 = auVar6._8_8_;
  param_1 = auVar6._0_8_;
code_r0x01572e68:
  if ((bRam0000000003eb504a & 1) == 0) {
    func_0x00f78a20(0x3d6ba50);
    bRam0000000003eb504a = 1;
  }
  Atlas_Contexts_ContextManagerTransitions__ReleaseLoadedKeyArt(param_1);
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar3 = /*Core.Assets.AssetManager$$RequestSpriteAsset*/ func_0x01636004(*(long *)(param_1 + 0x28),uVar4,/*STR('Default')*/ uRam0000000003d6ba50,0,0,0);
    *(undefined4 *)(param_1 + 0x4c) = uVar3;
    *(undefined4 *)(param_1 + 0x50) = 1;
    return;
  }
  lVar5 = func_0x00f78af4();
  *(undefined4 *)(lVar5 + 0x30) = 0;
  return;
}



// ============================================================
// RVA: 0x1572e68 | Atlas.Contexts.ContextManagerTransitions.RequestKeyArt
// ============================================================

void Atlas_Contexts_ContextManagerTransitions__RequestKeyArt(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  if ((bRam0000000003eb504a & 1) == 0) {
    func_0x00f78a20(0x3d6ba50);
    bRam0000000003eb504a = 1;
  }
  Atlas_Contexts_ContextManagerTransitions__ReleaseLoadedKeyArt(param_1);
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar1 = /*Core.Assets.AssetManager$$RequestSpriteAsset*/ func_0x01636004(*(long *)(param_1 + 0x28),param_2,/*STR('Default')*/ uRam0000000003d6ba50,0,0,0);
    *(undefined4 *)(param_1 + 0x4c) = uVar1;
    *(undefined4 *)(param_1 + 0x50) = 1;
    return;
  }
  lVar2 = func_0x00f78af4();
  *(undefined4 *)(lVar2 + 0x30) = 0;
  return;
}



// ============================================================
// RVA: 0x1572eec | Atlas.Contexts.ContextManagerTransitions.InitFinished
// ============================================================

void Atlas_Contexts_ContextManagerTransitions__InitFinished(long param_1)

{
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}



// ============================================================
// RVA: 0x1572ef4 | Atlas.Contexts.ContextManagerTransitions..ctor
// ============================================================

void Atlas_Contexts_ContextManagerTransitions___ctor(long param_1)

{
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  return;
}



