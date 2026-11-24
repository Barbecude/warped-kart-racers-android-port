// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.UIArcadeNextMedalBehaviour

// ============================================================
// RVA: 0x1512aec | Atlas.UI.UIArcadeNextMedalBehaviour.SetVisible
// ============================================================

/* WARNING: Possible PIC construction at 0x01512c1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01512c20) */
/* WARNING: Removing unreachable block (ram,0x01512c28) */

undefined8
Atlas_UI_UIArcadeNextMedalBehaviour__SetVisible
          (long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  int iVar15;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  ulong uVar16;
  ulong uVar17;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined1 **ppuVar18;
  undefined *unaff_x30;
  undefined *puVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  ulong auStack_e0 [18];
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  lVar5 = *(long *)(param_1 + 0x18);
  if (lVar5 != 0) {
UnityEngine_GameObject__SetActive:
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar11 = (*pcRam0000000003ebf4c0)(lVar5,param_2);
    return uVar11;
  }
  auVar20 = func_0x00f78af4();
  puVar4 = &stack0xffffffffffffffb0;
  puStack_18 = &Atlas_UI_UIArcadeNextMedalBehaviour__SetAndVisible;
  ppuVar18 = &puStack_20;
  uVar12 = param_3;
  lVar14 = param_4;
  puStack_20 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4d82 & 1) == 0) {
    puStack_20 = &stack0xfffffffffffffff0;
    func_0x00f78a20(0x3d68930);
    func_0x00f78a20(0x3d68480);
    func_0x00f78a20(0x3d68938);
    func_0x00f78a20(0x3d68940);
    bRam0000000003eb4d82 = 1;
  }
  iVar15 = auVar20._8_4_;
  uVar16 = 0x3eb4000;
  if (iVar15 == 3) {
    lVar5 = *(long *)(auVar20._0_8_ + 0x18);
    if (lVar5 != 0) {
      param_2 = 0;
      register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
      unaff_x29 = puStack_20;
      unaff_x30 = puStack_18;
      goto UnityEngine_GameObject__SetActive;
    }
  }
  else if (param_3 != 0) {
    uVar17 = (ulong)(iVar15 + 1);
    uVar12 = 0;
    uVar6 = Atlas_UI_ArcadeEventMetagameData__GetMedalThresholdString(param_3,uVar17,0);
    uVar16 = uVar17;
    if (param_4 != 0) {
      puVar2 = (undefined8 *)0x3d68940;
      if (iVar15 != 1) {
        puVar2 = (undefined8 *)0x3d68930;
      }
      puVar3 = (undefined8 *)0x3d68938;
      if (iVar15 != 2) {
        puVar3 = puVar2;
      }
      param_4 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(param_4,*puVar3,0);
      uVar11 = /*System.String$$Concat*/ func_0x029bdb88(uVar6,/*STR('<size=100%>')*/ uRam0000000003d68480,0);
      uVar11 = /*System.String$$Format*/ func_0x029bc688(param_4,uVar11,0);
      auVar21._8_8_ = uVar11;
      auVar21._0_8_ = auVar20._0_8_;
      puVar19 = &UNK_01512c20;
      goto code_r0x01512c48;
    }
  }
  uVar17 = uVar12;
  puVar19 = &Atlas_UI_UIArcadeNextMedalBehaviour__Set;
  auVar21 = func_0x00f78af4();
  puVar4 = &stack0xffffffffffffffb0;
  uVar6 = param_3;
code_r0x01512c48:
  while( true ) {
    lVar7 = auVar21._0_8_;
    *(long *)(puVar4 + -0x20) = param_4;
    *(long *)(puVar4 + -0x18) = auVar20._0_8_;
    *(undefined1 ***)(puVar4 + -0x10) = ppuVar18;
    *(undefined **)(puVar4 + -8) = puVar19;
    lVar13 = 0;
    uVar11 = Atlas_UI_ArcadeMedalSprites__GetMedalSprite(lVar7 + 0x30,uVar17);
    lVar5 = lVar14;
    if (*(long *)(lVar7 + 0x28) != 0) {
      lVar13 = 0;
      /*UnityEngine.UI.Image$$set_sprite*/ func_0x032c2184(*(long *)(lVar7 + 0x28),uVar11);
      plVar8 = *(long **)(lVar7 + 0x20);
      lVar5 = lVar14;
      if (plVar8 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01512ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar11 = (**(code **)(*plVar8 + 0x558))
                           (plVar8,auVar21._8_8_,*(undefined8 *)(*plVar8 + 0x560));
        return uVar11;
      }
    }
    auVar22 = func_0x00f78af4();
    uVar9 = auVar22._0_8_;
    *(undefined8 *)(puVar4 + -0x60) = unaff_x24;
    *(ulong *)(puVar4 + -0x58) = uVar6;
    *(ulong *)(puVar4 + -0x50) = uVar16;
    *(long *)(puVar4 + -0x48) = auVar20._8_8_;
    *(undefined1 (*) [16])(puVar4 + -0x40) = auVar21;
    *(undefined1 **)(puVar4 + -0x30) = puVar4 + -0x10;
    *(undefined **)(puVar4 + -0x28) = &Atlas_UI_UIArcadeNextMedalBehaviour__Set;
    uVar17 = 0x3eb4000;
    uVar11 = uVar9;
    lVar14 = lVar5;
    if ((bRam0000000003eb4d83 & 1) == 0) {
      func_0x00f78a20(0x3d68930);
      func_0x00f78a20(0x3d68480);
      func_0x00f78a20(0x3d68938);
      uVar11 = func_0x00f78a20(0x3d68940);
      bRam0000000003eb4d83 = 1;
    }
    iVar15 = auVar22._8_4_;
    if (iVar15 == 3) {
      return uVar11;
    }
    if (lVar13 == 0) break;
    uVar17 = (ulong)(iVar15 + 1);
    uVar11 = Atlas_UI_ArcadeEventMetagameData__GetMedalThresholdString(lVar13,uVar17,0);
    if (lVar5 == 0) break;
    puVar2 = (undefined8 *)0x3d68940;
    if (iVar15 != 1) {
      puVar2 = (undefined8 *)0x3d68930;
    }
    puVar3 = (undefined8 *)0x3d68938;
    if (iVar15 != 2) {
      puVar3 = puVar2;
    }
    uVar10 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(lVar5,*puVar3,0);
    uVar11 = /*System.String$$Concat*/ func_0x029bdb88(uVar11,/*STR('<size=100%>')*/ uRam0000000003d68480,0);
    uVar11 = /*System.String$$Format*/ func_0x029bc688(uVar10,uVar11,0);
    auVar21._8_8_ = uVar11;
    auVar21._0_8_ = uVar9;
    ppuVar18 = *(undefined1 ***)(puVar4 + -0x30);
    puVar19 = *(undefined **)(puVar4 + -0x28);
    param_4 = *(long *)(puVar4 + -0x40);
    puVar1 = (ulong *)(puVar4 + -0x50);
    auVar20._8_8_ = *(undefined8 *)(puVar4 + -0x48);
    auVar20._0_8_ = *(undefined8 *)(puVar4 + -0x38);
    unaff_x24 = *(undefined8 *)(puVar4 + -0x60);
    uVar6 = *(ulong *)(puVar4 + -0x58);
    puVar4 = puVar4 + -0x20;
    uVar16 = *puVar1;
  }
  uVar11 = func_0x00f78af4();
  *(ulong *)(puVar4 + -0x90) = uVar17;
  *(long *)(puVar4 + -0x88) = auVar22._8_8_;
  *(long *)(puVar4 + -0x80) = lVar5;
  *(undefined8 *)(puVar4 + -0x78) = uVar9;
  *(undefined1 **)(puVar4 + -0x70) = puVar4 + -0x30;
  *(undefined **)(puVar4 + -0x68) = &Atlas_UI_UIArcadeNextMedalBehaviour___ctor;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return uVar11;
}



// ============================================================
// RVA: 0x1512b0c | Atlas.UI.UIArcadeNextMedalBehaviour.SetAndVisible
// ============================================================

/* WARNING: Possible PIC construction at 0x01512c1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01512c20) */
/* WARNING: Removing unreachable block (ram,0x01512c28) */

long Atlas_UI_UIArcadeNextMedalBehaviour__SetAndVisible
               (long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 unaff_x24;
  undefined1 *puVar18;
  undefined *puVar19;
  undefined1 auVar20 [16];
  ulong auStack_d0 [18];
  
  puVar4 = &stack0xffffffffffffffc0;
  puVar18 = &stack0xfffffffffffffff0;
  uVar12 = param_3;
  lVar11 = param_4;
  if ((bRam0000000003eb4d82 & 1) == 0) {
    func_0x00f78a20(0x3d68930);
    func_0x00f78a20(0x3d68480);
    func_0x00f78a20(0x3d68938);
    func_0x00f78a20(0x3d68940);
    bRam0000000003eb4d82 = 1;
  }
  iVar15 = (int)param_2;
  uVar16 = 0x3eb4000;
  if (iVar15 == 3) {
    lVar5 = *(long *)(param_1 + 0x18);
    if (lVar5 != 0) {
      if (pcRam0000000003ebf4c0 == (code *)0x0) {
        pcRam0000000003ebf4c0 =
             (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
      }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar11 = (*pcRam0000000003ebf4c0)(lVar5,0);
      return lVar11;
    }
  }
  else if (param_3 != 0) {
    uVar17 = (ulong)(iVar15 + 1);
    uVar12 = 0;
    uVar6 = Atlas_UI_ArcadeEventMetagameData__GetMedalThresholdString(param_3,uVar17,0);
    uVar16 = uVar17;
    if (param_4 != 0) {
      puVar2 = (undefined8 *)0x3d68940;
      if (iVar15 != 1) {
        puVar2 = (undefined8 *)0x3d68930;
      }
      puVar3 = (undefined8 *)0x3d68938;
      if (iVar15 != 2) {
        puVar3 = puVar2;
      }
      param_4 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(param_4,*puVar3,0);
      uVar10 = /*System.String$$Concat*/ func_0x029bdb88(uVar6,/*STR('<size=100%>')*/ uRam0000000003d68480,0);
      uVar10 = /*System.String$$Format*/ func_0x029bc688(param_4,uVar10,0);
      puVar19 = &UNK_01512c20;
      lVar5 = param_1;
      goto code_r0x01512c48;
    }
  }
  uVar17 = uVar12;
  puVar19 = &Atlas_UI_UIArcadeNextMedalBehaviour__Set;
  auVar20 = func_0x00f78af4();
  uVar10 = auVar20._8_8_;
  puVar4 = &stack0xffffffffffffffc0;
  lVar5 = auVar20._0_8_;
  uVar6 = param_3;
code_r0x01512c48:
  while( true ) {
    *(long *)(puVar4 + -0x20) = param_4;
    *(long *)(puVar4 + -0x18) = param_1;
    *(undefined1 **)(puVar4 + -0x10) = puVar18;
    *(undefined **)(puVar4 + -8) = puVar19;
    lVar13 = 0;
    uVar7 = Atlas_UI_ArcadeMedalSprites__GetMedalSprite(lVar5 + 0x30,uVar17);
    lVar14 = lVar11;
    if (*(long *)(lVar5 + 0x28) != 0) {
      lVar13 = 0;
      /*UnityEngine.UI.Image$$set_sprite*/ func_0x032c2184(*(long *)(lVar5 + 0x28),uVar7);
      plVar8 = *(long **)(lVar5 + 0x20);
      lVar14 = lVar11;
      if (plVar8 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01512ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar11 = (**(code **)(*plVar8 + 0x558))(plVar8,uVar10,*(undefined8 *)(*plVar8 + 0x560));
        return lVar11;
      }
    }
    auVar20 = func_0x00f78af4();
    lVar9 = auVar20._0_8_;
    *(undefined8 *)(puVar4 + -0x60) = unaff_x24;
    *(ulong *)(puVar4 + -0x58) = uVar6;
    *(ulong *)(puVar4 + -0x50) = uVar16;
    *(undefined8 *)(puVar4 + -0x48) = param_2;
    *(long *)(puVar4 + -0x40) = lVar5;
    *(undefined8 *)(puVar4 + -0x38) = uVar10;
    *(undefined1 **)(puVar4 + -0x30) = puVar4 + -0x10;
    *(undefined **)(puVar4 + -0x28) = &Atlas_UI_UIArcadeNextMedalBehaviour__Set;
    uVar17 = 0x3eb4000;
    lVar5 = lVar9;
    lVar11 = lVar14;
    if ((bRam0000000003eb4d83 & 1) == 0) {
      func_0x00f78a20(0x3d68930);
      func_0x00f78a20(0x3d68480);
      func_0x00f78a20(0x3d68938);
      lVar5 = func_0x00f78a20(0x3d68940);
      bRam0000000003eb4d83 = 1;
    }
    iVar15 = auVar20._8_4_;
    if (iVar15 == 3) {
      return lVar5;
    }
    if (lVar13 == 0) break;
    uVar17 = (ulong)(iVar15 + 1);
    uVar10 = Atlas_UI_ArcadeEventMetagameData__GetMedalThresholdString(lVar13,uVar17,0);
    if (lVar14 == 0) break;
    puVar2 = (undefined8 *)0x3d68940;
    if (iVar15 != 1) {
      puVar2 = (undefined8 *)0x3d68930;
    }
    puVar3 = (undefined8 *)0x3d68938;
    if (iVar15 != 2) {
      puVar3 = puVar2;
    }
    uVar7 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(lVar14,*puVar3,0);
    uVar10 = /*System.String$$Concat*/ func_0x029bdb88(uVar10,/*STR('<size=100%>')*/ uRam0000000003d68480,0);
    uVar10 = /*System.String$$Format*/ func_0x029bc688(uVar7,uVar10,0);
    puVar18 = *(undefined1 **)(puVar4 + -0x30);
    puVar19 = *(undefined **)(puVar4 + -0x28);
    param_4 = *(long *)(puVar4 + -0x40);
    param_1 = *(long *)(puVar4 + -0x38);
    puVar1 = (ulong *)(puVar4 + -0x50);
    param_2 = *(undefined8 *)(puVar4 + -0x48);
    unaff_x24 = *(undefined8 *)(puVar4 + -0x60);
    uVar6 = *(ulong *)(puVar4 + -0x58);
    puVar4 = puVar4 + -0x20;
    lVar5 = lVar9;
    uVar16 = *puVar1;
  }
  lVar11 = func_0x00f78af4();
  *(ulong *)(puVar4 + -0x90) = uVar17;
  *(long *)(puVar4 + -0x88) = auVar20._8_8_;
  *(long *)(puVar4 + -0x80) = lVar14;
  *(long *)(puVar4 + -0x78) = lVar9;
  *(undefined1 **)(puVar4 + -0x70) = puVar4 + -0x30;
  *(undefined **)(puVar4 + -0x68) = &Atlas_UI_UIArcadeNextMedalBehaviour___ctor;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return lVar11;
}



// ============================================================
// RVA: 0x1512c48 | Atlas.UI.UIArcadeNextMedalBehaviour.Set
// ============================================================

long Atlas_UI_UIArcadeNextMedalBehaviour__Set
               (long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  int iVar10;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar11 [16];
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    lVar9 = 0;
    uVar3 = Atlas_UI_ArcadeMedalSprites__GetMedalSprite(param_1 + 0x30,param_3);
    lVar5 = param_4;
    if (*(long *)(param_1 + 0x28) != 0) {
      lVar9 = 0;
      /*UnityEngine.UI.Image$$set_sprite*/ func_0x032c2184(*(long *)(param_1 + 0x28),uVar3);
      plVar4 = *(long **)(param_1 + 0x20);
      lVar5 = param_4;
      if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01512ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar5 = (**(code **)(*plVar4 + 0x558))(plVar4,param_2,*(undefined8 *)(*plVar4 + 0x560));
        return lVar5;
      }
    }
    auVar11 = func_0x00f78af4();
    lVar6 = auVar11._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x40) = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x38) = param_2;
    *(undefined1 **)((long)register0x00000008 + -0x30) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x28) = &Atlas_UI_UIArcadeNextMedalBehaviour__Set;
    param_3 = 0x3eb4000;
    lVar7 = lVar6;
    param_4 = lVar5;
    if ((bRam0000000003eb4d83 & 1) == 0) {
      func_0x00f78a20(0x3d68930);
      func_0x00f78a20(0x3d68480);
      func_0x00f78a20(0x3d68938);
      lVar7 = func_0x00f78a20(0x3d68940);
      bRam0000000003eb4d83 = 1;
    }
    iVar10 = auVar11._8_4_;
    if (iVar10 == 3) {
      return lVar7;
    }
    if (lVar9 == 0) break;
    param_3 = (ulong)(iVar10 + 1);
    uVar3 = Atlas_UI_ArcadeEventMetagameData__GetMedalThresholdString(lVar9,param_3,0);
    if (lVar5 == 0) break;
    puVar1 = (undefined8 *)0x3d68940;
    if (iVar10 != 1) {
      puVar1 = (undefined8 *)0x3d68930;
    }
    puVar2 = (undefined8 *)0x3d68938;
    if (iVar10 != 2) {
      puVar2 = puVar1;
    }
    uVar8 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(lVar5,*puVar2,0);
    uVar3 = /*System.String$$Concat*/ func_0x029bdb88(uVar3,/*STR('<size=100%>')*/ uRam0000000003d68480,0);
    param_2 = /*System.String$$Format*/ func_0x029bc688(uVar8,uVar3,0);
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x30);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x28);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x40);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x38);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x50);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x48);
    unaff_x24 = *(undefined8 *)((long)register0x00000008 + -0x60);
    unaff_x23 = *(undefined8 *)((long)register0x00000008 + -0x58);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x20);
    param_1 = lVar6;
  }
  lVar9 = func_0x00f78af4();
  *(ulong *)((long)register0x00000008 + -0x90) = param_3;
  *(long *)((long)register0x00000008 + -0x88) = auVar11._8_8_;
  *(long *)((long)register0x00000008 + -0x80) = lVar5;
  *(long *)((long)register0x00000008 + -0x78) = lVar6;
  *(undefined1 **)((long)register0x00000008 + -0x70) =
       (undefined1 *)((long)register0x00000008 + -0x30);
  *(undefined **)((long)register0x00000008 + -0x68) = &Atlas_UI_UIArcadeNextMedalBehaviour___ctor;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return lVar9;
}



// ============================================================
// RVA: 0x1512ca8 | Atlas.UI.UIArcadeNextMedalBehaviour.Set
// ============================================================

long Atlas_UI_UIArcadeNextMedalBehaviour__Set
               (undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 unaff_x19;
  long unaff_x20;
  int iVar9;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  ulong uVar10;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auVar11 [16];
  
  auVar11._8_8_ = param_2;
  auVar11._0_8_ = param_1;
  while( true ) {
    lVar4 = auVar11._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    uVar10 = 0x3eb4000;
    lVar5 = lVar4;
    lVar8 = param_4;
    if ((bRam0000000003eb4d83 & 1) == 0) {
      func_0x00f78a20(0x3d68930);
      func_0x00f78a20(0x3d68480);
      func_0x00f78a20(0x3d68938);
      lVar5 = func_0x00f78a20(0x3d68940);
      bRam0000000003eb4d83 = 1;
    }
    iVar9 = auVar11._8_4_;
    if (iVar9 == 3) {
      return lVar5;
    }
    if (param_3 == 0) break;
    uVar10 = (ulong)(iVar9 + 1);
    uVar6 = Atlas_UI_ArcadeEventMetagameData__GetMedalThresholdString(param_3,uVar10,0);
    if (param_4 == 0) break;
    puVar1 = (undefined8 *)0x3d68940;
    if (iVar9 != 1) {
      puVar1 = (undefined8 *)0x3d68930;
    }
    puVar2 = (undefined8 *)0x3d68938;
    if (iVar9 != 2) {
      puVar2 = puVar1;
    }
    uVar7 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(param_4,*puVar2,0);
    uVar6 = /*System.String$$Concat*/ func_0x029bdb88(uVar6,/*STR('<size=100%>')*/ uRam0000000003d68480,0);
    unaff_x19 = /*System.String$$Format*/ func_0x029bc688(uVar7,uVar6,0);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x30);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x28);
    unaff_x24 = *(undefined8 *)((long)register0x00000008 + -0x40);
    unaff_x23 = *(undefined8 *)((long)register0x00000008 + -0x38);
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    param_3 = 0;
    uVar6 = Atlas_UI_ArcadeMedalSprites__GetMedalSprite(lVar4 + 0x30,uVar10);
    param_4 = lVar8;
    if (*(long *)(lVar4 + 0x28) != 0) {
      param_3 = 0;
      /*UnityEngine.UI.Image$$set_sprite*/ func_0x032c2184(*(long *)(lVar4 + 0x28),uVar6);
      plVar3 = *(long **)(lVar4 + 0x20);
      param_4 = lVar8;
      if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01512ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar5 = (**(code **)(*plVar3 + 0x558))(plVar3,unaff_x19,*(undefined8 *)(*plVar3 + 0x560));
        return lVar5;
      }
    }
    unaff_x30 = Atlas_UI_UIArcadeNextMedalBehaviour__Set;
    auVar11 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x20);
    unaff_x20 = lVar4;
  }
  lVar5 = func_0x00f78af4();
  *(ulong *)((long)register0x00000008 + -0x70) = uVar10;
  *(long *)((long)register0x00000008 + -0x68) = auVar11._8_8_;
  *(long *)((long)register0x00000008 + -0x60) = param_4;
  *(long *)((long)register0x00000008 + -0x58) = lVar4;
  *(undefined1 **)((long)register0x00000008 + -0x50) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x48) = &Atlas_UI_UIArcadeNextMedalBehaviour___ctor;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return lVar5;
}



// ============================================================
// RVA: 0x1512dd4 | Atlas.UI.UIArcadeNextMedalBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_UIArcadeNextMedalBehaviour___ctor(ulong param_1)

{
  undefined1 auVar1 [16];
  
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1;
  return auVar1;
}



