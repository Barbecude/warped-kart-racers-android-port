// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.TopBarScreen.<>c__DisplayClass18_0

// ============================================================
// RVA: 0x156b5a8 | Atlas.UI.Screens.TopBarScreen.<>c__DisplayClass18_0..ctor
// ============================================================

void Atlas_UI_Screens_TopBarScreen___c__DisplayClass18_0___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x156b5b0 | Atlas.UI.Screens.TopBarScreen.<>c__DisplayClass18_0.<CreateElement>b__0
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
Atlas_UI_Screens_TopBarScreen___c__DisplayClass18_0___CreateElement_b__0
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
          undefined8 param_5,undefined8 param_6,undefined4 *param_7)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  undefined8 extraout_x1;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  float *pfVar18;
  uint uVar19;
  ulong unaff_x19;
  long unaff_x20;
  undefined8 uVar20;
  undefined8 unaff_x21;
  undefined4 *puVar21;
  undefined8 uVar22;
  undefined4 *unaff_x22;
  long unaff_x23;
  long lVar23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  int iVar24;
  long unaff_x28;
  undefined1 *puVar25;
  undefined8 unaff_x29;
  code *pcVar26;
  undefined8 unaff_x30;
  undefined4 uVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined4 uVar34;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [12];
  
  lVar10 = *(long *)(param_4 + 0x10);
  if (lVar10 != 0) {
    uVar11 = *(uint *)(param_4 + 0x18);
    uVar12 = (ulong)uVar11;
    auVar36._8_4_ = uVar11;
    auVar36._0_8_ = lVar10;
    auVar36._12_4_ = 0;
    lVar15 = 0;
    puVar3 = &stack0xffffffffffffffe0;
    lVar17 = *(long *)(lVar10 + 0x70);
    uVar7 = unaff_x19;
    lVar16 = unaff_x20;
    if (lVar17 == 0) {
LAB_0150ced4:
      uVar12 = uVar7;
      func_0x00f78af4();
LAB_0150ced8:
      uVar5 = func_0x00f78b24();
      pcVar26 = Atlas_UI_Screens_TopBarScreen__OnElementAnimatingInComplete;
      auVar36 = func_0x00f78ac0(uVar5,0);
      unaff_x19 = uVar12;
      unaff_x20 = lVar16;
      goto code_r0x0150cee4;
    }
    if (*(uint *)(lVar17 + 0x18) <= uVar11) goto LAB_0150ced8;
    lVar17 = lVar17 + (long)(int)uVar11 * 0x60;
    *(undefined4 *)(lVar17 + 0x58) = 0;
    lVar17 = *(long *)(lVar17 + 0x28);
    uVar7 = uVar12;
    lVar16 = lVar10;
    if ((lVar17 == 0) || (lVar10 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar17,0), lVar10 == 0)) goto LAB_0150ced4;
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar10,0,0);
    puVar3 = (undefined1 *)register0x00000008;
Atlas_UI_Screens_TopBarScreen__UpdateElement:
    *(long *)(puVar3 + -0x60) = unaff_x28;
    *(long *)(puVar3 + -0x58) = unaff_x27;
    *(long *)(puVar3 + -0x50) = unaff_x26;
    *(long *)(puVar3 + -0x48) = unaff_x25;
    *(long *)(puVar3 + -0x40) = unaff_x24;
    *(long *)(puVar3 + -0x38) = unaff_x23;
    *(undefined4 **)(puVar3 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar3 + -0x28) = unaff_x21;
    *(long *)(puVar3 + -0x20) = unaff_x20;
    *(ulong *)(puVar3 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar3 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar3 + -8) = unaff_x30;
    lVar10 = 0x3eb4000;
    if ((bRam0000000003eb4d5b & 1) == 0) {
      func_0x00f78a20(0x3d2a408);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4d5b = 1;
    }
    lVar16 = *(long *)(auVar36._0_8_ + 0x70);
    if (lVar16 == 0) goto LAB_0150c7d4;
    uVar11 = auVar36._8_4_;
    if (*(uint *)(lVar16 + 0x18) <= uVar11) goto LAB_0150c7d8;
    unaff_x25 = (long)(int)uVar11;
    lVar16 = lVar16 + unaff_x25 * 0x60;
    unaff_x26 = *(long *)(lVar16 + 0x20);
    unaff_x22 = *(undefined4 **)(lVar16 + 0x28);
    uVar5 = *(undefined8 *)(lVar16 + 0x30);
    uVar14 = *(undefined8 *)(lVar16 + 0x48);
    uVar20 = *(undefined8 *)(lVar16 + 0x40);
    *(undefined8 *)(puVar3 + -0xe8) = *(undefined8 *)(lVar16 + 0x38);
    *(undefined8 *)(puVar3 + -0xf0) = uVar5;
    *(undefined8 *)(puVar3 + -0xd8) = uVar14;
    *(undefined8 *)(puVar3 + -0xe0) = uVar20;
    lVar10 = *(long *)(lVar16 + 0x50);
    iVar24 = *(int *)(lVar16 + 0x58);
    iVar1 = *(int *)(lVar16 + 0x5c);
    unaff_x23 = *(long *)(lVar16 + 0x60);
    unaff_x24 = *(long *)(lVar16 + 0x68);
    uVar5 = *(undefined8 *)(lVar16 + 0x70);
    *(undefined8 *)(puVar3 + -0xf8) = *(undefined8 *)(lVar16 + 0x78);
    *(undefined8 *)(puVar3 + -0x100) = uVar5;
    if (iVar1 == iVar24) {
LAB_0150c768:
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      puVar4 = (undefined8 *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar10,0,0);
      if ((int)puVar4 == 0) {
        return puVar4;
      }
      if (lVar10 != 0) {
        puVar4 = (undefined8 *)/*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar10,iVar24 == 2,0);
        return puVar4;
      }
    }
    else if (iVar24 == 2) {
      if (iVar1 == 0) {
        if (unaff_x24 == 0) goto LAB_0150c7d4;
        uVar20 = *(undefined8 *)(lVar16 + 0x38);
        uVar5 = *(undefined8 *)(lVar16 + 0x30);
        uVar22 = *(undefined8 *)(lVar16 + 0x48);
        uVar14 = *(undefined8 *)(lVar16 + 0x40);
        *(undefined8 *)(puVar3 + -0x118) = uVar20;
        *(undefined8 *)(puVar3 + -0x120) = uVar5;
        *(undefined8 *)(puVar3 + -0x108) = uVar22;
        *(undefined8 *)(puVar3 + -0x110) = uVar14;
        uVar33 = *(undefined8 *)(lVar16 + 0x78);
        uVar32 = *(undefined8 *)(lVar16 + 0x70);
        *(undefined8 *)(puVar3 + -0x128) = uVar33;
        *(undefined8 *)(puVar3 + -0x130) = uVar32;
        *(long *)(puVar3 + -200) = unaff_x26;
        *(undefined4 **)(puVar3 + -0xc0) = unaff_x22;
        *(undefined8 *)(puVar3 + -0xb0) = uVar20;
        *(undefined8 *)(puVar3 + -0xb8) = uVar5;
        *(undefined8 *)(puVar3 + -0xa0) = uVar22;
        *(undefined8 *)(puVar3 + -0xa8) = uVar14;
        *(long *)(puVar3 + -0x98) = lVar10;
        *(undefined8 *)(puVar3 + -0x90) = _UNK_033f8620;
        *(long *)(puVar3 + -0x88) = unaff_x23;
        *(long *)(puVar3 + -0x80) = unaff_x24;
        *(undefined8 *)(puVar3 + -0x70) = uVar33;
        *(undefined8 *)(puVar3 + -0x78) = uVar32;
        lVar16 = unaff_x24;
LAB_0150c724:
        /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(lVar16,puVar3 + -200,uRam0000000003d2a408);
        iVar24 = 1;
      }
      else {
        iVar24 = 2;
      }
LAB_0150c72c:
      lVar16 = *(long *)(auVar36._0_8_ + 0x70);
      if (lVar16 != 0) {
        if (*(uint *)(lVar16 + 0x18) <= uVar11) goto LAB_0150c7d8;
        lVar16 = lVar16 + unaff_x25 * 0x60;
        *(long *)(lVar16 + 0x20) = unaff_x26;
        *(undefined4 **)(lVar16 + 0x28) = unaff_x22;
        uVar5 = *(undefined8 *)(puVar3 + -0xf0);
        uVar14 = *(undefined8 *)(puVar3 + -0xd8);
        uVar20 = *(undefined8 *)(puVar3 + -0xe0);
        *(undefined8 *)(lVar16 + 0x38) = *(undefined8 *)(puVar3 + -0xe8);
        *(undefined8 *)(lVar16 + 0x30) = uVar5;
        *(undefined8 *)(lVar16 + 0x48) = uVar14;
        *(undefined8 *)(lVar16 + 0x40) = uVar20;
        *(long *)(lVar16 + 0x50) = lVar10;
        *(int *)(lVar16 + 0x58) = iVar24;
        *(int *)(lVar16 + 0x5c) = iVar1;
        *(long *)(lVar16 + 0x60) = unaff_x23;
        *(long *)(lVar16 + 0x68) = unaff_x24;
        uVar5 = *(undefined8 *)(puVar3 + -0x100);
        *(undefined8 *)(lVar16 + 0x78) = *(undefined8 *)(puVar3 + -0xf8);
        *(undefined8 *)(lVar16 + 0x70) = uVar5;
        goto LAB_0150c768;
      }
    }
    else {
      if (iVar24 != 0) goto LAB_0150c72c;
      if (iVar1 != 2) {
        iVar24 = 0;
        goto LAB_0150c72c;
      }
      if (((unaff_x22 != (undefined4 *)0x0) && (lVar16 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x22,0), lVar16 != 0))
         && (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar16,1,0), unaff_x23 != 0)) {
        *(long *)(puVar3 + -200) = unaff_x26;
        *(undefined4 **)(puVar3 + -0xc0) = unaff_x22;
        *(undefined8 *)(puVar3 + -0xb0) = *(undefined8 *)(puVar3 + -0xe8);
        *(undefined8 *)(puVar3 + -0xb8) = *(undefined8 *)(puVar3 + -0xf0);
        *(undefined8 *)(puVar3 + -0xa0) = *(undefined8 *)(puVar3 + -0xd8);
        *(undefined8 *)(puVar3 + -0xa8) = *(undefined8 *)(puVar3 + -0xe0);
        *(long *)(puVar3 + -0x98) = lVar10;
        *(undefined8 *)(puVar3 + -0x90) = _UNK_033f8628;
        *(long *)(puVar3 + -0x88) = unaff_x23;
        *(long *)(puVar3 + -0x80) = unaff_x24;
        *(undefined8 *)(puVar3 + -0x70) = *(undefined8 *)(puVar3 + -0xf8);
        *(undefined8 *)(puVar3 + -0x78) = *(undefined8 *)(puVar3 + -0x100);
        lVar16 = unaff_x23;
        goto LAB_0150c724;
      }
    }
LAB_0150c7d4:
    func_0x00f78af4();
LAB_0150c7d8:
    uVar5 = func_0x00f78b24();
    auVar35 = func_0x00f78ac0(uVar5,0);
    lVar16 = auVar35._8_8_;
    *(long *)(puVar3 + -0x180) = unaff_x26;
    *(long *)(puVar3 + -0x178) = unaff_x25;
    *(long *)(puVar3 + -0x170) = unaff_x24;
    *(long *)(puVar3 + -0x168) = unaff_x23;
    *(undefined4 **)(puVar3 + -0x160) = unaff_x22;
    *(undefined1 (*) [16])(puVar3 + -0x158) = auVar36;
    *(long *)(puVar3 + -0x148) = lVar10;
    *(undefined1 **)(puVar3 + -0x140) = puVar3 + -0x10;
    *(code **)(puVar3 + -0x138) = Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
    if ((bRam0000000003eb4d55 & 1) == 0) {
      func_0x00f78a20(0x3d5e6e0);
      func_0x00f78a20(0x3d5e7a8);
      func_0x00f78a20(0x3d5e7d0);
      func_0x00f78a20(0x3d5e850);
      func_0x00f78a20(0x3d5e888);
      bRam0000000003eb4d55 = 1;
    }
    uVar5 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar16 + 0x18),*(undefined4 *)(lVar16 + 0x1c),
                            *(undefined4 *)(lVar16 + 0x20),_UNK_033f8144,
                            *(undefined8 *)(lVar16 + 0x10),0,0);
    uVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar5,10,uRam0000000003d5e7a8);
    uVar5 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar5,*(undefined8 *)(lVar16 + 0x58),uRam0000000003d5e6e0);
    uVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar5,1,uRam0000000003d5e888);
    puVar4 = (undefined8 *)/*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar5,auVar35._0_8_,uRam0000000003d5e850);
    if ((puVar4 != (undefined8 *)0x0) && (*(char *)(puVar4 + 0x1d) != '\0')) {
      puVar4[6] = *(undefined8 *)(lVar16 + 0x10);
    }
    return puVar4;
  }
  lVar10 = func_0x00f78af4();
  pcVar26 = (code *)&Atlas_UI_Screens_TopBarScreen___c__DisplayClass18_0___CreateElement_b__1;
  if (*(long *)(lVar10 + 0x10) == 0) {
    puVar4 = (undefined8 *)func_0x00f78af4();
    return puVar4;
  }
  auVar36._8_4_ = *(undefined4 *)(lVar10 + 0x18);
  auVar36._0_8_ = *(long *)(lVar10 + 0x10);
  auVar36._12_4_ = 0;
  lVar15 = 0;
  puVar3 = &stack0xfffffffffffffff0;
code_r0x0150cee4:
  *(undefined1 **)(puVar3 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(puVar3 + -8) = pcVar26;
  lVar10 = *(long *)(auVar36._0_8_ + 0x70);
  if (lVar10 == 0) {
    func_0x00f78af4();
  }
  else if (auVar36._8_4_ < *(uint *)(lVar10 + 0x18)) {
    *(undefined4 *)(lVar10 + (long)(int)auVar36._8_4_ * 0x60 + 0x58) = 2;
    unaff_x29 = *(undefined8 *)(puVar3 + -0x10);
    unaff_x30 = *(undefined8 *)(puVar3 + -8);
    goto Atlas_UI_Screens_TopBarScreen__UpdateElement;
  }
  uVar5 = func_0x00f78b24();
  func_0x00f78ac0(uVar5,0);
  *(long *)(puVar3 + -0x50) = unaff_x24;
  *(long *)(puVar3 + -0x48) = unaff_x23;
  *(undefined4 **)(puVar3 + -0x40) = unaff_x22;
  *(undefined8 *)(puVar3 + -0x38) = unaff_x21;
  *(long *)(puVar3 + -0x30) = unaff_x20;
  *(ulong *)(puVar3 + -0x28) = unaff_x19;
  *(undefined1 **)(puVar3 + -0x20) = puVar3 + -0x10;
  *(code **)(puVar3 + -0x18) = Atlas_UI_Screens_TopBarScreen__IsElementTypeListed;
  if ((bRam0000000003eb4d5c & 1) == 0) {
    func_0x00f78a20(0x3d337e0);
    func_0x00f78a20(0x3d337e8);
    func_0x00f78a20(0x3d337f0);
    func_0x00f78a20(0x3d3dca8);
    bRam0000000003eb4d5c = 1;
  }
  *(undefined8 *)(puVar3 + -0x68) = 0;
  *(undefined8 *)(puVar3 + -0x60) = 0;
  *(undefined8 *)(puVar3 + -0x58) = 0;
  if (lVar15 != 0) {
    /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$GetEnumerator*/ func_0x023df1f8(puVar3 + -0x68,lVar15,uRam0000000003d3dca8);
    do {
      puVar4 = (undefined8 *)/*System.Collections.Generic.List.Enumerator<TopBarManager.TopBarButton>$$MoveNext*/ func_0x01f694e8(puVar3 + -0x68,uRam0000000003d337e8);
      if (((ulong)puVar4 & 1) == 0) {
        uVar27 = 0x3a;
        goto code_r0x0150d008;
      }
      if (*(uint *)(puVar3 + -0x58) < 9) {
        iVar24 = *(int *)(&UNK_033f869c + (long)(int)*(uint *)(puVar3 + -0x58) * 4);
      }
      else {
        iVar24 = -1;
      }
    } while (iVar24 != (int)extraout_x1);
    uVar27 = 0x3c;
code_r0x0150d008:
    *(undefined4 *)(puVar3 + -0x78) = uVar27;
    /*System.Collections.Generic.List.Enumerator<TopBarManager.TopBarButton>$$Dispose*/ func_0x01f694e4(puVar3 + -0x68,uRam0000000003d337e0);
    if (*(int *)(puVar3 + -0x78) != 0x3c) {
      puVar4 = (undefined8 *)0x0;
    }
    return puVar4;
  }
  auVar36 = func_0x00f78af4();
  if (auVar36._8_4_ == 1) {
    func_0x032ff1a4(auVar36._0_8_,auVar36._8_8_,puVar3 + -0x68);
    return (undefined8 *)0x0;
  }
  lVar10 = __Unwind_Resume();
  *(undefined8 *)(puVar3 + -0x100) = unaff_d11;
  *(undefined8 *)(puVar3 + -0xf8) = unaff_d10;
  *(undefined8 *)(puVar3 + -0xf0) = unaff_d9;
  *(undefined8 *)(puVar3 + -0xe8) = unaff_d8;
  *(long *)(puVar3 + -0xe0) = unaff_x28;
  *(long *)(puVar3 + -0xd8) = unaff_x27;
  *(long *)(puVar3 + -0xd0) = unaff_x26;
  *(long *)(puVar3 + -200) = unaff_x25;
  *(long *)(puVar3 + -0xc0) = unaff_x24;
  *(long *)(puVar3 + -0xb8) = unaff_x23;
  *(undefined4 **)(puVar3 + -0xb0) = unaff_x22;
  *(undefined8 *)(puVar3 + -0xa8) = 0x3eb4000;
  *(undefined8 *)(puVar3 + -0xa0) = 0;
  *(undefined8 *)(puVar3 + -0x98) = extraout_x1;
  *(undefined1 **)(puVar3 + -0x90) = puVar3 + -0x20;
  *(code **)(puVar3 + -0x88) = Atlas_UI_Screens_TopBarScreen__OnBeforeEnter;
  lVar16 = 0x3eb4000;
  if ((bRam0000000003eb4d5f & 1) == 0) {
    func_0x00f78a20(0x3d2a400);
    func_0x00f78a20(0x3d1b608);
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d5e510);
    func_0x00f78a20(0x3d5e518);
    func_0x00f78a20(0x3d5e520);
    func_0x00f78a20(0x3d5e528);
    func_0x00f78a20(0x3d5e530);
    func_0x00f78a20(0x3d5e538);
    func_0x00f78a20(0x3d5e540);
    func_0x00f78a20(0x3d5e548);
    func_0x00f78a20(0x3d5e4e0);
    func_0x00f78a20(0x3d5e4e8);
    func_0x00f78a20(0x3d5e4f0);
    func_0x00f78a20(0x3d5e4f8);
    func_0x00f78a20(0x3d5e500);
    func_0x00f78a20(0x3d5e508);
    func_0x00f78a20(0x3d25328);
    func_0x00f78a20(0x3d41340);
    func_0x00f78a20(0x3d41348);
    bRam0000000003eb4d5f = 1;
  }
  lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar10,uRam0000000003d41348);
  uVar7 = 0x3d41348;
  lVar15 = unaff_x25;
  lVar17 = unaff_x27;
  if ((lVar6 == 0) || (*(long *)(lVar6 + 0x10) == 0)) {
LAB_0150df74:
    func_0x00f78af4();
    unaff_x25 = lVar15;
    unaff_x27 = lVar17;
  }
  else {
    lVar23 = 0x3d41340;
    *(long *)(*(long *)(lVar6 + 0x10) + 0x28) = lVar10;
    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar10,uRam0000000003d41340);
    uVar7 = 0x3d41348;
    unaff_x24 = 0x3d41340;
    if (lVar6 == 0) goto LAB_0150df74;
    puVar21 = (undefined4 *)0x3d1fa78;
    unaff_x23 = 0x3d5e000;
    lVar16 = *(long *)(lVar6 + 0x48);
    uVar7 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    param_7 = (undefined4 *)0x0;
    /*System.Action$$.ctor*/ func_0x02924c80(uVar7,lVar10,uRam0000000003d5e4e0);
    unaff_x22 = (undefined4 *)0x3d1fa78;
    if (lVar16 == 0) goto LAB_0150df74;
    /*Atlas.UI.UIAtlasButton$$add_Pressed*/ func_0x01514430(lVar16,uVar7,0);
    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar10,uRam0000000003d41340);
    unaff_x24 = lVar23;
    if (lVar6 == 0) goto LAB_0150df74;
    unaff_x23 = 0x3d5e000;
    lVar16 = *(long *)(lVar6 + 0x50);
    uVar7 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    param_7 = (undefined4 *)0x0;
    /*System.Action$$.ctor*/ func_0x02924c80(uVar7,lVar10,uRam0000000003d5e4e8);
    unaff_x22 = puVar21;
    if (lVar16 == 0) goto LAB_0150df74;
    /*Atlas.UI.UIAtlasButton$$add_Pressed*/ func_0x01514430(lVar16,uVar7,0);
    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar10,uRam0000000003d41340);
    if (lVar6 == 0) goto LAB_0150df74;
    unaff_x23 = 0x3d5e000;
    lVar16 = *(long *)(lVar6 + 0x98);
    uVar7 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    param_7 = (undefined4 *)0x0;
    /*System.Action$$.ctor*/ func_0x02924c80(uVar7,lVar10,uRam0000000003d5e4f0);
    if (lVar16 == 0) goto LAB_0150df74;
    /*Atlas.UI.UIAtlasButton$$add_Pressed*/ func_0x01514430(lVar16,uVar7,0);
    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar10,uRam0000000003d41340);
    if (lVar6 == 0) goto LAB_0150df74;
    unaff_x23 = 0x3d5e000;
    lVar16 = *(long *)(lVar6 + 0xa0);
    uVar7 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    param_7 = (undefined4 *)0x0;
    /*System.Action$$.ctor*/ func_0x02924c80(uVar7,lVar10,uRam0000000003d5e4f8);
    if (lVar16 == 0) goto LAB_0150df74;
    /*Atlas.UI.UIAtlasButton$$add_Pressed*/ func_0x01514430(lVar16,uVar7,0);
    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar10,uRam0000000003d41340);
    if (lVar6 == 0) goto LAB_0150df74;
    unaff_x23 = 0x3d5e000;
    lVar16 = *(long *)(lVar6 + 0x60);
    uVar7 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    param_7 = (undefined4 *)0x0;
    /*System.Action$$.ctor*/ func_0x02924c80(uVar7,lVar10,uRam0000000003d5e500);
    if (lVar16 == 0) goto LAB_0150df74;
    /*Atlas.UI.UIAtlasButton$$add_Pressed*/ func_0x01514430(lVar16,uVar7,0);
    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar10,uRam0000000003d41340);
    if (lVar6 == 0) goto LAB_0150df74;
    unaff_x23 = 0x3d5e000;
    lVar16 = *(long *)(lVar6 + 0x68);
    uVar7 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    param_7 = (undefined4 *)0x0;
    /*System.Action$$.ctor*/ func_0x02924c80(uVar7,lVar10,uRam0000000003d5e508);
    if (lVar16 == 0) goto LAB_0150df74;
    /*Atlas.UI.UIAtlasButton$$add_Pressed*/ func_0x01514430(lVar16,uVar7,0);
    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar10,uRam0000000003d41340);
    if (lVar6 == 0) goto LAB_0150df74;
    unaff_x23 = 0x3d5e000;
    lVar16 = *(long *)(lVar6 + 0xa0);
    uVar7 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    param_7 = (undefined4 *)0x0;
    /*System.Action$$.ctor*/ func_0x02924c80(uVar7,lVar10,uRam0000000003d5e548);
    if (lVar16 == 0) goto LAB_0150df74;
    /*Atlas.UI.UIAtlasButton$$add_Selected*/ func_0x015141a0(lVar16,uVar7,0);
    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar10,uRam0000000003d41340);
    if (lVar6 == 0) goto LAB_0150df74;
    unaff_x23 = 0x3d5e000;
    lVar16 = *(long *)(lVar6 + 0xa0);
    uVar7 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    param_7 = (undefined4 *)0x0;
    /*System.Action$$.ctor*/ func_0x02924c80(uVar7,lVar10,uRam0000000003d5e540);
    if (lVar16 == 0) goto LAB_0150df74;
    /*Atlas.UI.UIAtlasButton$$add_Deselected*/ func_0x015142e8(lVar16,uVar7,0);
    unaff_x28 = *(long *)(lVar10 + 0x70);
    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar10,uRam0000000003d41340);
    if ((lVar6 == 0) || (*(long *)(lVar6 + 0x48) == 0)) goto LAB_0150df74;
    lVar16 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar6 + 0x48),0);
    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar10,uRam0000000003d41340);
    if ((lVar6 == 0) ||
       ((*(long *)(lVar6 + 0x48) == 0 ||
        (lVar6 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar6 + 0x48),0), lVar6 == 0)))) goto LAB_0150df74;
    uVar7 = /*UnityEngine.Transform$$GetChild*/ func_0x03277648(lVar6,0,0);
    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar10,uRam0000000003d41340);
    if (lVar6 == 0) goto LAB_0150df74;
    lVar23 = 0x3d1b608;
    unaff_x27 = 0x3d2a400;
    unaff_x22 = *(undefined4 **)(lVar6 + 0x48);
    uVar27 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    unaff_x23 = func_0x00f78aec(/*System.Action<TopBarScreen.Element>_TypeInfo*/ uRam0000000003d1b608);
    /*System.Action<TopBarScreen.Element>$$.ctor*/ func_0x01e65254(unaff_x23,lVar10,uRam0000000003d5e510,uRam0000000003d2a400);
    unaff_x24 = func_0x00f78aec(/*System.Action<TopBarScreen.Element>_TypeInfo*/ uRam0000000003d1b608);
    lVar6 = 0x3d2a400;
    /*System.Action<TopBarScreen.Element>$$.ctor*/ func_0x01e65254(unaff_x24,lVar10,uRam0000000003d5e528,uRam0000000003d2a400);
    param_7 = unaff_x22;
    Atlas_UI_Screens_TopBarScreen__CreateElement
              (puVar3 + -0x168,uVar27,param_2,param_3,lVar10,lVar16,uVar7,unaff_x22,0,unaff_x23,
               unaff_x24);
    lVar15 = lVar23;
    unaff_x26 = unaff_x27;
    lVar17 = unaff_x27;
    if (unaff_x28 == 0) goto LAB_0150df74;
    unaff_x25 = lVar23;
    if (*(int *)(unaff_x28 + 0x18) == 0) goto LAB_0150df78;
    uVar5 = *(undefined8 *)(puVar3 + -0x148);
    uVar14 = *(undefined8 *)(puVar3 + -0x130);
    uVar20 = *(undefined8 *)(puVar3 + -0x138);
    *(undefined8 *)(unaff_x28 + 0x48) = *(undefined8 *)(puVar3 + -0x140);
    *(undefined8 *)(unaff_x28 + 0x40) = uVar5;
    *(undefined8 *)(unaff_x28 + 0x58) = uVar14;
    *(undefined8 *)(unaff_x28 + 0x50) = uVar20;
    uVar5 = *(undefined8 *)(puVar3 + -0x128);
    uVar14 = *(undefined8 *)(puVar3 + -0x110);
    uVar20 = *(undefined8 *)(puVar3 + -0x118);
    *(undefined8 *)(unaff_x28 + 0x68) = *(undefined8 *)(puVar3 + -0x120);
    *(undefined8 *)(unaff_x28 + 0x60) = uVar5;
    *(undefined8 *)(unaff_x28 + 0x78) = uVar14;
    *(undefined8 *)(unaff_x28 + 0x70) = uVar20;
    uVar5 = *(undefined8 *)(puVar3 + -0x168);
    uVar14 = *(undefined8 *)(puVar3 + -0x150);
    uVar20 = *(undefined8 *)(puVar3 + -0x158);
    *(undefined8 *)(unaff_x28 + 0x28) = *(undefined8 *)(puVar3 + -0x160);
    *(undefined8 *)(unaff_x28 + 0x20) = uVar5;
    *(undefined8 *)(unaff_x28 + 0x38) = uVar14;
    *(undefined8 *)(unaff_x28 + 0x30) = uVar20;
    unaff_x28 = *(long *)(lVar10 + 0x70);
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar10,uRam0000000003d41340);
    uVar27 = (undefined4)uVar20;
    if ((lVar8 == 0) ||
       (lVar15 = 0x3d1b608, unaff_x26 = lVar6, lVar17 = 0x3d2a400, *(long *)(lVar8 + 0x50) == 0))
    goto LAB_0150df74;
    lVar17 = 0x3d1b608;
    lVar16 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar8 + 0x50),0);
    lVar15 = 0x3d41340;
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar10,uRam0000000003d41340);
    if ((lVar8 == 0) ||
       ((*(long *)(lVar8 + 0x50) == 0 ||
        (lVar8 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar8 + 0x50),0), lVar8 == 0)))) goto LAB_0150df74;
    uVar7 = /*UnityEngine.Transform$$GetChild*/ func_0x03277648(lVar8,0,0);
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar10,uRam0000000003d41340);
    if (lVar8 == 0) goto LAB_0150df74;
    unaff_x22 = *(undefined4 **)(lVar8 + 0x50);
    uVar28 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    unaff_x23 = func_0x00f78aec(/*System.Action<TopBarScreen.Element>_TypeInfo*/ uRam0000000003d1b608);
    /*System.Action<TopBarScreen.Element>$$.ctor*/ func_0x01e65254(unaff_x23,lVar10,uRam0000000003d5e510,uRam0000000003d2a400);
    unaff_x24 = func_0x00f78aec(/*System.Action<TopBarScreen.Element>_TypeInfo*/ uRam0000000003d1b608);
    /*System.Action<TopBarScreen.Element>$$.ctor*/ func_0x01e65254(unaff_x24,lVar10,uRam0000000003d5e528,uRam0000000003d2a400);
    param_7 = unaff_x22;
    Atlas_UI_Screens_TopBarScreen__CreateElement
              (puVar3 + -0x1c8,uVar28,uVar27,param_3,lVar10,lVar16,uVar7,unaff_x22,1,unaff_x23,
               unaff_x24);
    if (unaff_x28 == 0) goto LAB_0150df74;
    unaff_x25 = 0x3d41340;
    unaff_x26 = unaff_x27;
    unaff_x27 = lVar23;
    if ((*(uint *)(unaff_x28 + 0x18) & 0xfffffffe) == 0) goto LAB_0150df78;
    uVar5 = *(undefined8 *)(puVar3 + -0x1a8);
    uVar14 = *(undefined8 *)(puVar3 + -400);
    uVar20 = *(undefined8 *)(puVar3 + -0x198);
    *(undefined8 *)(unaff_x28 + 0xa8) = *(undefined8 *)(puVar3 + -0x1a0);
    *(undefined8 *)(unaff_x28 + 0xa0) = uVar5;
    *(undefined8 *)(unaff_x28 + 0xb8) = uVar14;
    *(undefined8 *)(unaff_x28 + 0xb0) = uVar20;
    uVar5 = *(undefined8 *)(puVar3 + -0x188);
    uVar14 = *(undefined8 *)(puVar3 + -0x170);
    uVar20 = *(undefined8 *)(puVar3 + -0x178);
    *(undefined8 *)(unaff_x28 + 200) = *(undefined8 *)(puVar3 + -0x180);
    *(undefined8 *)(unaff_x28 + 0xc0) = uVar5;
    *(undefined8 *)(unaff_x28 + 0xd8) = uVar14;
    *(undefined8 *)(unaff_x28 + 0xd0) = uVar20;
    uVar5 = *(undefined8 *)(puVar3 + -0x1c8);
    uVar14 = *(undefined8 *)(puVar3 + -0x1b0);
    uVar20 = *(undefined8 *)(puVar3 + -0x1b8);
    *(undefined8 *)(unaff_x28 + 0x88) = *(undefined8 *)(puVar3 + -0x1c0);
    *(undefined8 *)(unaff_x28 + 0x80) = uVar5;
    *(undefined8 *)(unaff_x28 + 0x98) = uVar14;
    *(undefined8 *)(unaff_x28 + 0x90) = uVar20;
    unaff_x28 = *(long *)(lVar10 + 0x70);
    lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar10,uRam0000000003d41340);
    uVar27 = (undefined4)uVar20;
    unaff_x26 = lVar6;
    if ((lVar23 == 0) || (*(long *)(lVar23 + 0x98) == 0)) goto LAB_0150df74;
    lVar16 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar23 + 0x98),0);
    lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar10,uRam0000000003d41340);
    if ((lVar23 == 0) ||
       ((*(long *)(lVar23 + 0x98) == 0 ||
        (lVar23 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar23 + 0x98),0), lVar23 == 0)))) goto LAB_0150df74;
    uVar7 = /*UnityEngine.Transform$$GetChild*/ func_0x03277648(lVar23,0,0);
    lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar10,uRam0000000003d41340);
    if (lVar23 == 0) goto LAB_0150df74;
    unaff_x22 = *(undefined4 **)(lVar23 + 0x98);
    uVar28 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    unaff_x23 = func_0x00f78aec(/*System.Action<TopBarScreen.Element>_TypeInfo*/ uRam0000000003d1b608);
    /*System.Action<TopBarScreen.Element>$$.ctor*/ func_0x01e65254(unaff_x23,lVar10,uRam0000000003d5e510,uRam0000000003d2a400);
    unaff_x24 = func_0x00f78aec(/*System.Action<TopBarScreen.Element>_TypeInfo*/ uRam0000000003d1b608);
    /*System.Action<TopBarScreen.Element>$$.ctor*/ func_0x01e65254(unaff_x24,lVar10,uRam0000000003d5e528,uRam0000000003d2a400);
    param_7 = unaff_x22;
    Atlas_UI_Screens_TopBarScreen__CreateElement
              (puVar3 + -0x228,uVar28,uVar27,param_3,lVar10,lVar16,uVar7,unaff_x22,2,unaff_x23,
               unaff_x24);
    if (unaff_x28 == 0) goto LAB_0150df74;
    unaff_x25 = lVar15;
    unaff_x27 = lVar17;
    if (*(uint *)(unaff_x28 + 0x18) < 3) goto LAB_0150df78;
    uVar5 = *(undefined8 *)(puVar3 + -0x208);
    uVar14 = *(undefined8 *)(puVar3 + -0x1f0);
    uVar20 = *(undefined8 *)(puVar3 + -0x1f8);
    *(undefined8 *)(unaff_x28 + 0x108) = *(undefined8 *)(puVar3 + -0x200);
    *(undefined8 *)(unaff_x28 + 0x100) = uVar5;
    *(undefined8 *)(unaff_x28 + 0x118) = uVar14;
    *(undefined8 *)(unaff_x28 + 0x110) = uVar20;
    uVar5 = *(undefined8 *)(puVar3 + -0x1e8);
    uVar14 = *(undefined8 *)(puVar3 + -0x1d0);
    uVar20 = *(undefined8 *)(puVar3 + -0x1d8);
    *(undefined8 *)(unaff_x28 + 0x128) = *(undefined8 *)(puVar3 + -0x1e0);
    *(undefined8 *)(unaff_x28 + 0x120) = uVar5;
    *(undefined8 *)(unaff_x28 + 0x138) = uVar14;
    *(undefined8 *)(unaff_x28 + 0x130) = uVar20;
    uVar5 = *(undefined8 *)(puVar3 + -0x228);
    uVar14 = *(undefined8 *)(puVar3 + -0x210);
    uVar20 = *(undefined8 *)(puVar3 + -0x218);
    *(undefined8 *)(unaff_x28 + 0xe8) = *(undefined8 *)(puVar3 + -0x220);
    *(undefined8 *)(unaff_x28 + 0xe0) = uVar5;
    *(undefined8 *)(unaff_x28 + 0xf8) = uVar14;
    *(undefined8 *)(unaff_x28 + 0xf0) = uVar20;
    unaff_x28 = *(long *)(lVar10 + 0x70);
    lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar10,uRam0000000003d41340);
    uVar27 = (undefined4)uVar20;
    if ((lVar23 == 0) || (*(long *)(lVar23 + 0xa0) == 0)) goto LAB_0150df74;
    lVar16 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar23 + 0xa0),0);
    lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar10,uRam0000000003d41340);
    if ((lVar23 == 0) || (*(long *)(lVar23 + 0xa0) == 0)) goto LAB_0150df74;
    uVar7 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar23 + 0xa0),0);
    lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar10,uRam0000000003d41340);
    if (lVar23 == 0) goto LAB_0150df74;
    unaff_x22 = *(undefined4 **)(lVar23 + 0xa0);
    uVar28 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    unaff_x23 = func_0x00f78aec(/*System.Action<TopBarScreen.Element>_TypeInfo*/ uRam0000000003d1b608);
    /*System.Action<TopBarScreen.Element>$$.ctor*/ func_0x01e65254(unaff_x23,lVar10,uRam0000000003d5e510,uRam0000000003d2a400);
    unaff_x24 = func_0x00f78aec(/*System.Action<TopBarScreen.Element>_TypeInfo*/ uRam0000000003d1b608);
    /*System.Action<TopBarScreen.Element>$$.ctor*/ func_0x01e65254(unaff_x24,lVar10,uRam0000000003d5e528,uRam0000000003d2a400);
    param_7 = unaff_x22;
    Atlas_UI_Screens_TopBarScreen__CreateElement
              (puVar3 + -0x288,uVar28,uVar27,param_3,lVar10,lVar16,uVar7,unaff_x22,3,unaff_x23,
               unaff_x24);
    if (unaff_x28 == 0) goto LAB_0150df74;
    if ((*(uint *)(unaff_x28 + 0x18) & 0xfffffffc) == 0) goto LAB_0150df78;
    uVar5 = *(undefined8 *)(puVar3 + -0x268);
    uVar14 = *(undefined8 *)(puVar3 + -0x250);
    uVar20 = *(undefined8 *)(puVar3 + -600);
    *(undefined8 *)(unaff_x28 + 0x168) = *(undefined8 *)(puVar3 + -0x260);
    *(undefined8 *)(unaff_x28 + 0x160) = uVar5;
    *(undefined8 *)(unaff_x28 + 0x178) = uVar14;
    *(undefined8 *)(unaff_x28 + 0x170) = uVar20;
    uVar5 = *(undefined8 *)(puVar3 + -0x248);
    uVar14 = *(undefined8 *)(puVar3 + -0x230);
    uVar20 = *(undefined8 *)(puVar3 + -0x238);
    *(undefined8 *)(unaff_x28 + 0x188) = *(undefined8 *)(puVar3 + -0x240);
    *(undefined8 *)(unaff_x28 + 0x180) = uVar5;
    *(undefined8 *)(unaff_x28 + 0x198) = uVar14;
    *(undefined8 *)(unaff_x28 + 400) = uVar20;
    uVar5 = *(undefined8 *)(puVar3 + -0x288);
    uVar14 = *(undefined8 *)(puVar3 + -0x270);
    uVar20 = *(undefined8 *)(puVar3 + -0x278);
    *(undefined8 *)(unaff_x28 + 0x148) = *(undefined8 *)(puVar3 + -0x280);
    *(undefined8 *)(unaff_x28 + 0x140) = uVar5;
    *(undefined8 *)(unaff_x28 + 0x158) = uVar14;
    *(undefined8 *)(unaff_x28 + 0x150) = uVar20;
    unaff_x28 = *(long *)(lVar10 + 0x70);
    lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar10,uRam0000000003d41340);
    uVar27 = (undefined4)uVar20;
    if ((lVar23 == 0) || (*(long *)(lVar23 + 0x60) == 0)) goto LAB_0150df74;
    lVar16 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar23 + 0x60),0);
    lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar10,uRam0000000003d41340);
    if ((lVar23 == 0) ||
       ((*(long *)(lVar23 + 0x60) == 0 ||
        (lVar23 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar23 + 0x60),0), lVar23 == 0)))) goto LAB_0150df74;
    uVar7 = /*UnityEngine.Transform$$GetChild*/ func_0x03277648(lVar23,0,0);
    lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar10,uRam0000000003d41340);
    if (lVar23 == 0) goto LAB_0150df74;
    unaff_x22 = *(undefined4 **)(lVar23 + 0x60);
    uVar28 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    unaff_x23 = func_0x00f78aec(/*System.Action<TopBarScreen.Element>_TypeInfo*/ uRam0000000003d1b608);
    /*System.Action<TopBarScreen.Element>$$.ctor*/ func_0x01e65254(unaff_x23,lVar10,uRam0000000003d5e510,uRam0000000003d2a400);
    unaff_x24 = func_0x00f78aec(/*System.Action<TopBarScreen.Element>_TypeInfo*/ uRam0000000003d1b608);
    /*System.Action<TopBarScreen.Element>$$.ctor*/ func_0x01e65254(unaff_x24,lVar10,uRam0000000003d5e528,uRam0000000003d2a400);
    param_7 = unaff_x22;
    Atlas_UI_Screens_TopBarScreen__CreateElement
              (puVar3 + -0x2e8,uVar28,uVar27,param_3,lVar10,lVar16,uVar7,unaff_x22,4,unaff_x23,
               unaff_x24);
    if (unaff_x28 == 0) goto LAB_0150df74;
    if (*(uint *)(unaff_x28 + 0x18) < 5) goto LAB_0150df78;
    uVar5 = *(undefined8 *)(puVar3 + -0x2c8);
    uVar14 = *(undefined8 *)(puVar3 + -0x2b0);
    uVar20 = *(undefined8 *)(puVar3 + -0x2b8);
    *(undefined8 *)(unaff_x28 + 0x1c8) = *(undefined8 *)(puVar3 + -0x2c0);
    *(undefined8 *)(unaff_x28 + 0x1c0) = uVar5;
    *(undefined8 *)(unaff_x28 + 0x1d8) = uVar14;
    *(undefined8 *)(unaff_x28 + 0x1d0) = uVar20;
    uVar5 = *(undefined8 *)(puVar3 + -0x2a8);
    uVar14 = *(undefined8 *)(puVar3 + -0x290);
    uVar20 = *(undefined8 *)(puVar3 + -0x298);
    *(undefined8 *)(unaff_x28 + 0x1e8) = *(undefined8 *)(puVar3 + -0x2a0);
    *(undefined8 *)(unaff_x28 + 0x1e0) = uVar5;
    *(undefined8 *)(unaff_x28 + 0x1f8) = uVar14;
    *(undefined8 *)(unaff_x28 + 0x1f0) = uVar20;
    uVar5 = *(undefined8 *)(puVar3 + -0x2e8);
    uVar14 = *(undefined8 *)(puVar3 + -0x2d0);
    uVar20 = *(undefined8 *)(puVar3 + -0x2d8);
    *(undefined8 *)(unaff_x28 + 0x1a8) = *(undefined8 *)(puVar3 + -0x2e0);
    *(undefined8 *)(unaff_x28 + 0x1a0) = uVar5;
    *(undefined8 *)(unaff_x28 + 0x1b8) = uVar14;
    *(undefined8 *)(unaff_x28 + 0x1b0) = uVar20;
    unaff_x28 = *(long *)(lVar10 + 0x70);
    lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar10,uRam0000000003d41340);
    uVar27 = (undefined4)uVar20;
    if ((lVar23 == 0) || (*(long *)(lVar23 + 0x68) == 0)) goto LAB_0150df74;
    lVar16 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar23 + 0x68),0);
    lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar10,uRam0000000003d41340);
    if ((lVar23 == 0) ||
       ((*(long *)(lVar23 + 0x68) == 0 ||
        (lVar23 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar23 + 0x68),0), lVar23 == 0)))) goto LAB_0150df74;
    uVar7 = /*UnityEngine.Transform$$GetChild*/ func_0x03277648(lVar23,0,0);
    lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar10,uRam0000000003d41340);
    if (lVar23 == 0) goto LAB_0150df74;
    unaff_x22 = *(undefined4 **)(lVar23 + 0x68);
    uVar28 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    unaff_x23 = func_0x00f78aec(/*System.Action<TopBarScreen.Element>_TypeInfo*/ uRam0000000003d1b608);
    /*System.Action<TopBarScreen.Element>$$.ctor*/ func_0x01e65254(unaff_x23,lVar10,uRam0000000003d5e510,uRam0000000003d2a400);
    unaff_x24 = func_0x00f78aec(/*System.Action<TopBarScreen.Element>_TypeInfo*/ uRam0000000003d1b608);
    /*System.Action<TopBarScreen.Element>$$.ctor*/ func_0x01e65254(unaff_x24,lVar10,uRam0000000003d5e528,uRam0000000003d2a400);
    param_7 = unaff_x22;
    Atlas_UI_Screens_TopBarScreen__CreateElement
              (puVar3 + -0x348,uVar28,uVar27,param_3,lVar10,lVar16,uVar7,unaff_x22,5,unaff_x23,
               unaff_x24);
    if (unaff_x28 == 0) goto LAB_0150df74;
    if (5 < *(uint *)(unaff_x28 + 0x18)) {
      uVar5 = *(undefined8 *)(puVar3 + -0x328);
      uVar14 = *(undefined8 *)(puVar3 + -0x310);
      uVar20 = *(undefined8 *)(puVar3 + -0x318);
      *(undefined8 *)(unaff_x28 + 0x228) = *(undefined8 *)(puVar3 + -800);
      *(undefined8 *)(unaff_x28 + 0x220) = uVar5;
      *(undefined8 *)(unaff_x28 + 0x238) = uVar14;
      *(undefined8 *)(unaff_x28 + 0x230) = uVar20;
      uVar5 = *(undefined8 *)(puVar3 + -0x308);
      uVar14 = *(undefined8 *)(puVar3 + -0x2f0);
      uVar20 = *(undefined8 *)(puVar3 + -0x2f8);
      *(undefined8 *)(unaff_x28 + 0x248) = *(undefined8 *)(puVar3 + -0x300);
      *(undefined8 *)(unaff_x28 + 0x240) = uVar5;
      *(undefined8 *)(unaff_x28 + 600) = uVar14;
      *(undefined8 *)(unaff_x28 + 0x250) = uVar20;
      uVar5 = *(undefined8 *)(puVar3 + -0x348);
      uVar14 = *(undefined8 *)(puVar3 + -0x330);
      uVar20 = *(undefined8 *)(puVar3 + -0x338);
      *(undefined8 *)(unaff_x28 + 0x208) = *(undefined8 *)(puVar3 + -0x340);
      *(undefined8 *)(unaff_x28 + 0x200) = uVar5;
      *(undefined8 *)(unaff_x28 + 0x218) = uVar14;
      *(undefined8 *)(unaff_x28 + 0x210) = uVar20;
      unaff_x28 = *(long *)(lVar10 + 0x70);
      lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar10,uRam0000000003d41340);
      if (lVar23 != 0) {
        lVar16 = *(long *)(lVar23 + 0x40);
        lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar10,uRam0000000003d41340);
        if (lVar23 != 0) {
          unaff_x24 = 0x3d5e518;
          uVar7 = *(ulong *)(lVar23 + 0x40);
          if (((*(ushort *)(/*Atlas.UI.Screens.TopBarScreen_TypeInfo*/ lRam0000000003d25328 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.UI.Screens.TopBarScreen_TypeInfo*/ lRam0000000003d25328 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          puVar21 = *(undefined4 **)(/*Atlas.UI.Screens.TopBarScreen_TypeInfo*/ lRam0000000003d25328 + 0xb8);
          uVar27 = *puVar21;
          uVar28 = puVar21[1];
          uVar34 = puVar21[2];
          unaff_x22 = (undefined4 *)func_0x00f78aec(/*System.Action<TopBarScreen.Element>_TypeInfo*/ uRam0000000003d1b608);
          /*System.Action<TopBarScreen.Element>$$.ctor*/ func_0x01e65254(unaff_x22,lVar10,uRam0000000003d5e518,uRam0000000003d2a400);
          unaff_x23 = func_0x00f78aec(/*System.Action<TopBarScreen.Element>_TypeInfo*/ uRam0000000003d1b608);
          /*System.Action<TopBarScreen.Element>$$.ctor*/ func_0x01e65254(unaff_x23,lVar10,uRam0000000003d5e530,uRam0000000003d2a400);
          param_7 = (undefined4 *)0x0;
          Atlas_UI_Screens_TopBarScreen__CreateElement
                    (puVar3 + -0x3a8,uVar27,uVar28,uVar34,lVar10,lVar16,uVar7,0,6,unaff_x22,
                     unaff_x23);
          if (unaff_x28 != 0) {
            if (*(uint *)(unaff_x28 + 0x18) < 7) goto LAB_0150df78;
            uVar5 = *(undefined8 *)(puVar3 + -0x388);
            uVar14 = *(undefined8 *)(puVar3 + -0x370);
            uVar20 = *(undefined8 *)(puVar3 + -0x378);
            *(undefined8 *)(unaff_x28 + 0x288) = *(undefined8 *)(puVar3 + -0x380);
            *(undefined8 *)(unaff_x28 + 0x280) = uVar5;
            *(undefined8 *)(unaff_x28 + 0x298) = uVar14;
            *(undefined8 *)(unaff_x28 + 0x290) = uVar20;
            uVar5 = *(undefined8 *)(puVar3 + -0x368);
            uVar14 = *(undefined8 *)(puVar3 + -0x350);
            uVar20 = *(undefined8 *)(puVar3 + -0x358);
            *(undefined8 *)(unaff_x28 + 0x2a8) = *(undefined8 *)(puVar3 + -0x360);
            *(undefined8 *)(unaff_x28 + 0x2a0) = uVar5;
            *(undefined8 *)(unaff_x28 + 0x2b8) = uVar14;
            *(undefined8 *)(unaff_x28 + 0x2b0) = uVar20;
            uVar5 = *(undefined8 *)(puVar3 + -0x3a8);
            uVar14 = *(undefined8 *)(puVar3 + -0x390);
            uVar20 = *(undefined8 *)(puVar3 + -0x398);
            *(undefined8 *)(unaff_x28 + 0x268) = *(undefined8 *)(puVar3 + -0x3a0);
            *(undefined8 *)(unaff_x28 + 0x260) = uVar5;
            *(undefined8 *)(unaff_x28 + 0x278) = uVar14;
            *(undefined8 *)(unaff_x28 + 0x270) = uVar20;
            unaff_x28 = *(long *)(lVar10 + 0x70);
            lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar10,uRam0000000003d41340);
            if (lVar23 != 0) {
              lVar16 = *(long *)(lVar23 + 0x58);
              lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar10,uRam0000000003d41340);
              if (lVar23 != 0) {
                uVar7 = *(ulong *)(lVar23 + 0x58);
                pfVar18 = *(float **)(/*Atlas.UI.Screens.TopBarScreen_TypeInfo*/ lRam0000000003d25328 + 0xb8);
                fVar29 = *pfVar18;
                fVar30 = pfVar18[1];
                fVar31 = pfVar18[2];
                unaff_x22 = (undefined4 *)func_0x00f78aec(/*System.Action<TopBarScreen.Element>_TypeInfo*/ uRam0000000003d1b608);
                /*System.Action<TopBarScreen.Element>$$.ctor*/ func_0x01e65254(unaff_x22,lVar10,uRam0000000003d5e518,uRam0000000003d2a400);
                unaff_x23 = func_0x00f78aec(/*System.Action<TopBarScreen.Element>_TypeInfo*/ uRam0000000003d1b608);
                /*System.Action<TopBarScreen.Element>$$.ctor*/ func_0x01e65254(unaff_x23,lVar10,uRam0000000003d5e530,uRam0000000003d2a400);
                param_7 = (undefined4 *)0x0;
                Atlas_UI_Screens_TopBarScreen__CreateElement
                          (puVar3 + -0x408,-fVar29,-fVar30,-fVar31,lVar10,lVar16,uVar7,0,7,unaff_x22
                           ,unaff_x23);
                if (unaff_x28 != 0) {
                  if ((*(uint *)(unaff_x28 + 0x18) & 0xfffffff8) == 0) goto LAB_0150df78;
                  uVar5 = *(undefined8 *)(puVar3 + -1000);
                  uVar14 = *(undefined8 *)(puVar3 + -0x3d0);
                  uVar20 = *(undefined8 *)(puVar3 + -0x3d8);
                  *(undefined8 *)(unaff_x28 + 0x2e8) = *(undefined8 *)(puVar3 + -0x3e0);
                  *(undefined8 *)(unaff_x28 + 0x2e0) = uVar5;
                  *(undefined8 *)(unaff_x28 + 0x2f8) = uVar14;
                  *(undefined8 *)(unaff_x28 + 0x2f0) = uVar20;
                  uVar5 = *(undefined8 *)(puVar3 + -0x3c8);
                  uVar14 = *(undefined8 *)(puVar3 + -0x3b0);
                  uVar20 = *(undefined8 *)(puVar3 + -0x3b8);
                  *(undefined8 *)(unaff_x28 + 0x308) = *(undefined8 *)(puVar3 + -0x3c0);
                  *(undefined8 *)(unaff_x28 + 0x300) = uVar5;
                  *(undefined8 *)(unaff_x28 + 0x318) = uVar14;
                  *(undefined8 *)(unaff_x28 + 0x310) = uVar20;
                  uVar5 = *(undefined8 *)(puVar3 + -0x408);
                  uVar14 = *(undefined8 *)(puVar3 + -0x3f0);
                  uVar20 = *(undefined8 *)(puVar3 + -0x3f8);
                  *(undefined8 *)(unaff_x28 + 0x2c8) = *(undefined8 *)(puVar3 + -0x400);
                  *(undefined8 *)(unaff_x28 + 0x2c0) = uVar5;
                  *(undefined8 *)(unaff_x28 + 0x2d8) = uVar14;
                  *(undefined8 *)(unaff_x28 + 0x2d0) = uVar20;
                  unaff_x24 = *(long *)(lVar10 + 0x70);
                  lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar10,uRam0000000003d41340);
                  if (lVar23 != 0) {
                    lVar16 = *(long *)(lVar23 + 0x80);
                    lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar10,uRam0000000003d41340);
                    if (lVar23 != 0) {
                      unaff_x28 = 0x3d5e000;
                      uVar7 = *(ulong *)(lVar23 + 0x80);
                      lVar23 = *(long *)(/*Atlas.UI.Screens.TopBarScreen_TypeInfo*/ lRam0000000003d25328 + 0xb8);
                      uVar27 = *(undefined4 *)(lVar23 + 0xc);
                      uVar28 = *(undefined4 *)(lVar23 + 0x10);
                      uVar34 = *(undefined4 *)(lVar23 + 0x14);
                      puVar21 = (undefined4 *)func_0x00f78aec(/*System.Action<TopBarScreen.Element>_TypeInfo*/ uRam0000000003d1b608);
                      /*System.Action<TopBarScreen.Element>$$.ctor*/ func_0x01e65254(puVar21,lVar10,uRam0000000003d5e520,uRam0000000003d2a400);
                      unaff_x23 = func_0x00f78aec(/*System.Action<TopBarScreen.Element>_TypeInfo*/ uRam0000000003d1b608);
                      /*System.Action<TopBarScreen.Element>$$.ctor*/ func_0x01e65254(unaff_x23,lVar10,uRam0000000003d5e538,uRam0000000003d2a400);
                      param_7 = (undefined4 *)0x0;
                      Atlas_UI_Screens_TopBarScreen__CreateElement
                                (puVar3 + -0x468,uVar27,uVar28,uVar34,lVar10,lVar16,uVar7,0,8,
                                 puVar21,unaff_x23);
                      unaff_x22 = puVar21;
                      if (unaff_x24 != 0) {
                        if (*(uint *)(unaff_x24 + 0x18) < 9) goto LAB_0150df78;
                        uVar5 = *(undefined8 *)(puVar3 + -0x448);
                        uVar14 = *(undefined8 *)(puVar3 + -0x430);
                        uVar20 = *(undefined8 *)(puVar3 + -0x438);
                        *(undefined8 *)(unaff_x24 + 0x348) = *(undefined8 *)(puVar3 + -0x440);
                        *(undefined8 *)(unaff_x24 + 0x340) = uVar5;
                        *(undefined8 *)(unaff_x24 + 0x358) = uVar14;
                        *(undefined8 *)(unaff_x24 + 0x350) = uVar20;
                        uVar5 = *(undefined8 *)(puVar3 + -0x428);
                        uVar14 = *(undefined8 *)(puVar3 + -0x410);
                        uVar20 = *(undefined8 *)(puVar3 + -0x418);
                        *(undefined8 *)(unaff_x24 + 0x368) = *(undefined8 *)(puVar3 + -0x420);
                        *(undefined8 *)(unaff_x24 + 0x360) = uVar5;
                        *(undefined8 *)(unaff_x24 + 0x378) = uVar14;
                        *(undefined8 *)(unaff_x24 + 0x370) = uVar20;
                        uVar5 = *(undefined8 *)(puVar3 + -0x468);
                        uVar14 = *(undefined8 *)(puVar3 + -0x450);
                        uVar20 = *(undefined8 *)(puVar3 + -0x458);
                        *(undefined8 *)(unaff_x24 + 0x328) = *(undefined8 *)(puVar3 + -0x460);
                        *(undefined8 *)(unaff_x24 + 800) = uVar5;
                        *(undefined8 *)(unaff_x24 + 0x338) = uVar14;
                        *(undefined8 *)(unaff_x24 + 0x330) = uVar20;
                        lVar16 = *(long *)(lVar10 + 0x70);
                        if (lVar16 != 0) {
                          if (0 < (int)*(ulong *)(lVar16 + 0x18)) {
                            uVar7 = 0;
                            uVar12 = *(ulong *)(lVar16 + 0x18) & 0xffffffff;
                            unaff_x22 = (undefined4 *)(lVar16 + 0x20);
                            do {
                              if (uVar12 <= uVar7) goto LAB_0150df78;
                              puVar21 = unaff_x22 + 0x18;
                              Atlas_UI_Screens_TopBarScreen__ForceButtonState(lVar10,*unaff_x22,0);
                              uVar7 = uVar7 + 1;
                              uVar12 = (ulong)*(uint *)(lVar16 + 0x18);
                              unaff_x22 = puVar21;
                            } while ((long)uVar7 < (long)(int)*(uint *)(lVar16 + 0x18));
                          }
                          lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar10,uRam0000000003d41340);
                          unaff_x22 = puVar21;
                          if ((lVar23 != 0) &&
                             (plVar9 = *(long **)(lVar23 + 0x70), plVar9 != (long *)0x0)) {
                            puVar4 = (undefined8 *)
                                     (**(code **)(*plVar9 + 0x338))
                                               (plVar9,*(undefined8 *)(*plVar9 + 0x340));
                            *(undefined8 **)(lVar10 + 0x98) = puVar4;
                            return puVar4;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_0150df74;
    }
  }
LAB_0150df78:
  uVar5 = func_0x00f78b24();
  uVar5 = func_0x00f78ac0(uVar5,0);
  *(long *)(puVar3 + -0x4b0) = unaff_x24;
  *(long *)(puVar3 + -0x4a8) = unaff_x23;
  *(undefined4 **)(puVar3 + -0x4a0) = unaff_x22;
  *(ulong *)(puVar3 + -0x498) = uVar7;
  *(long *)(puVar3 + -0x490) = lVar16;
  *(long *)(puVar3 + -0x488) = lVar10;
  *(undefined1 **)(puVar3 + -0x480) = puVar3 + -0x90;
  *(code **)(puVar3 + -0x478) = Atlas_UI_Screens_TopBarScreen__OnAfterExit;
  uVar20 = 0x3eb4000;
  lVar10 = 0x3d20bc0;
  if ((bRam0000000003eb4d60 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d5e540);
    func_0x00f78a20(0x3d5e548);
    func_0x00f78a20(0x3d41340);
    func_0x00f78a20(0x3d41348);
    bRam0000000003eb4d60 = 1;
  }
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar14 = 0;
  /*DG.Tweening.DOTween$$Kill*/ func_0x016962e4(uVar5,0);
  lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar5,uRam0000000003d41340);
  uVar22 = 0x3d41340;
  if (lVar16 != 0) {
    lVar15 = 0x3d1fa78;
    unaff_x24 = 0x3d5e000;
    lVar10 = *(long *)(lVar16 + 0xa0);
    uVar20 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    param_7 = (undefined4 *)0x0;
    uVar14 = uRam0000000003d5e540;
    /*System.Action$$.ctor*/ func_0x02924c80(uVar20,uVar5);
    unaff_x23 = 0x3d1fa78;
    if (lVar10 != 0) {
      uVar14 = 0;
      /*Atlas.UI.UIAtlasButton$$remove_Deselected*/ func_0x0151438c(lVar10,uVar20);
      lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar5,uRam0000000003d41340);
      uVar22 = 0x3d41340;
      if (lVar16 != 0) {
        uVar22 = 0x3d5e000;
        lVar10 = *(long *)(lVar16 + 0xa0);
        uVar20 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
        param_7 = (undefined4 *)0x0;
        uVar14 = uRam0000000003d5e548;
        /*System.Action$$.ctor*/ func_0x02924c80(uVar20,uVar5);
        unaff_x23 = lVar15;
        if (lVar10 != 0) {
          uVar22 = 0x3d41000;
          uVar14 = 0;
          /*Atlas.UI.UIAtlasButton$$remove_Selected*/ func_0x01514244(lVar10,uVar20);
          puVar4 = (undefined8 *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar5,uRam0000000003d41348);
          if ((puVar4 != (undefined8 *)0x0) && (puVar4[2] != 0)) {
            *(undefined8 *)(puVar4[2] + 0x28) = 0;
            return puVar4;
          }
        }
      }
    }
  }
  auVar36 = func_0x00f78af4();
  uVar7 = auVar36._8_8_;
  *(undefined8 *)(puVar3 + -0x4e0) = uVar22;
  *(undefined8 *)(puVar3 + -0x4d8) = uVar20;
  *(long *)(puVar3 + -0x4d0) = lVar10;
  *(undefined8 *)(puVar3 + -0x4c8) = uVar5;
  *(undefined1 **)(puVar3 + -0x4c0) = puVar3 + -0x480;
  *(code **)(puVar3 + -0x4b8) = Atlas_UI_Screens_TopBarScreen__OnButtonPressed;
  if ((bRam0000000003eb4d61 & 1) == 0) {
    func_0x00f78a20(0x3d41348);
    bRam0000000003eb4d61 = 1;
  }
  lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(auVar36._0_8_,uRam0000000003d41348);
  if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x10), lVar10 == 0)) {
    uVar5 = func_0x00f78af4();
    *(undefined8 *)(puVar3 + -0x510) = 0x3d41348;
    *(undefined8 *)(puVar3 + -0x508) = 0x3eb4000;
    *(undefined1 (*) [16])(puVar3 + -0x500) = auVar36;
    *(undefined1 **)(puVar3 + -0x4f0) = puVar3 + -0x4c0;
    *(code **)(puVar3 + -0x4e8) =
         Atlas_UI_Screens_TopBarScreen__OnTransparentGameCenterButtonSelected;
    if ((bRam0000000003eb4d62 & 1) == 0) {
      func_0x00f78a20(0x3d41348);
      bRam0000000003eb4d62 = 1;
    }
    lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar5,uRam0000000003d41348);
    if (((lVar10 != 0) && (*(long *)(lVar10 + 0x18) != 0)) &&
       (plVar9 = *(long **)(*(long *)(lVar10 + 0x18) + 0x30), plVar9 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0150e1f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar4 = (undefined8 *)
               (**(code **)(*plVar9 + 0x9c8))(plVar9,1,*(undefined8 *)(*plVar9 + 0x9d0));
      return puVar4;
    }
    uVar20 = func_0x00f78af4();
    *(undefined8 *)(puVar3 + -0x540) = 0x3d41348;
    *(undefined8 *)(puVar3 + -0x538) = 0x3d41348;
    *(undefined8 *)(puVar3 + -0x530) = 0x3eb4000;
    *(undefined8 *)(puVar3 + -0x528) = uVar5;
    *(undefined1 **)(puVar3 + -0x520) = puVar3 + -0x4f0;
    *(code **)(puVar3 + -0x518) =
         Atlas_UI_Screens_TopBarScreen__OnTransparentGameCenterButtonDeselected;
    if ((bRam0000000003eb4d63 & 1) == 0) {
      func_0x00f78a20(0x3d41348);
      bRam0000000003eb4d63 = 1;
    }
    lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar20,uRam0000000003d41348);
    if (((lVar10 != 0) && (*(long *)(lVar10 + 0x18) != 0)) &&
       (plVar9 = *(long **)(*(long *)(lVar10 + 0x18) + 0x30), plVar9 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0150e274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar4 = (undefined8 *)
               (**(code **)(*plVar9 + 0x9c8))(plVar9,0,*(undefined8 *)(*plVar9 + 0x9d0));
      return puVar4;
    }
    lVar10 = func_0x00f78af4();
    *(undefined8 *)(puVar3 + -0x570) = 0x3d41348;
    *(undefined8 *)(puVar3 + -0x568) = 0x3d41348;
    *(undefined8 *)(puVar3 + -0x560) = 0x3eb4000;
    *(undefined8 *)(puVar3 + -0x558) = uVar20;
    *(undefined1 **)(puVar3 + -0x550) = puVar3 + -0x520;
    *(code **)(puVar3 + -0x548) = Atlas_UI_Screens_TopBarScreen___ctor;
    if ((bRam0000000003eb4d64 & 1) == 0) {
      func_0x00f78a20(0x3d2c9a0);
      func_0x00f78a20(0x3d1f8d8);
      bRam0000000003eb4d64 = 1;
    }
    uVar5 = func_0x00f78a34(/*Atlas.UI.Screens.TopBarScreen.Element[]_TypeInfo*/ uRam0000000003d1f8d8,9);
    *(undefined8 *)(lVar10 + 0x70) = uVar5;
    *(undefined1 *)(lVar10 + 0x80) = 1;
    *(undefined8 *)(puVar3 + -0x550) = *(undefined8 *)(puVar3 + -0x550);
    *(undefined8 *)(puVar3 + -0x548) = *(undefined8 *)(puVar3 + -0x548);
    if (lVar10 == 0) {
      auVar36 = func_0x00f78af4();
      puVar13 = auVar36._8_8_;
      puVar4 = auVar36._0_8_;
      uVar20 = puVar13[1];
      uVar5 = *puVar13;
      puVar4[2] = puVar13[2];
      puVar4[1] = uVar20;
      *puVar4 = uVar5;
      return puVar4;
    }
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar4 = (undefined8 *)
             (*(code *)**(undefined8 **)
                         (*(long *)(*(long *)(lRam0000000003d2c9a0 + 0x18) + 0xc0) + 0x38))();
    return puVar4;
  }
  lVar16 = *(long *)(puVar3 + -0x4d0);
  uVar12 = *(ulong *)(puVar3 + -0x4c8);
  unaff_x22 = *(undefined4 **)(puVar3 + -0x4e0);
  unaff_x21 = *(undefined8 *)(puVar3 + -0x4d8);
  *(long *)(puVar3 + -0x4d0) = lVar16;
  *(ulong *)(puVar3 + -0x4c8) = uVar12;
  *(undefined8 *)(puVar3 + -0x4c0) = *(undefined8 *)(puVar3 + -0x4c0);
  *(undefined8 *)(puVar3 + -0x4b8) = *(undefined8 *)(puVar3 + -0x4b8);
  puVar25 = puVar3 + -0x4c0;
  lVar15 = *(long *)(lVar10 + 0x30);
  if (lVar15 == 0) {
code_r0x0150b5a8:
    uVar7 = uVar12;
    func_0x00f78af4();
  }
  else {
    uVar11 = auVar36._8_4_;
    if (uVar11 < *(uint *)(lVar15 + 0x18)) {
      lVar16 = *(long *)(lVar15 + (long)(int)uVar11 * 8 + 0x20);
      if (lVar16 == 0) {
        puVar4 = (undefined8 *)0x0;
        if (8 < uVar11) {
          return (undefined8 *)0x0;
        }
        uVar19 = 0x143;
code_r0x0150b574:
        if ((1 << (ulong)(uVar11 & 0x1f) & uVar19) == 0) {
          return puVar4;
        }
      }
      else {
        puVar4 = (undefined8 *)/*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$Invoke*/ func_0x0156f004(lVar16,0);
        if ((uVar11 != 0) || (((ulong)puVar4 & 1) == 0)) {
          if (8 < uVar11) {
            return puVar4;
          }
          uVar19 = 0x142;
          goto code_r0x0150b574;
        }
      }
      auVar37._8_4_ = uVar11;
      auVar37._0_8_ = *(long *)(lVar10 + 0x28);
      uVar12 = uVar7;
      lVar16 = lVar10;
      if (*(long *)(lVar10 + 0x28) != 0) {
        uVar14 = 0;
        param_7 = (undefined4 *)((long)&MACH_HEADER.magic + 1);
        puVar25 = *(undefined1 **)(puVar3 + -0x4c0);
        pcVar26 = *(code **)(puVar3 + -0x4b8);
        lVar16 = *(long *)(puVar3 + -0x4d0);
        uVar7 = *(ulong *)(puVar3 + -0x4c8);
        puVar3 = puVar3 + -0x4b0;
        goto code_r0x0150b5b8;
      }
      goto code_r0x0150b5a8;
    }
  }
  uVar5 = func_0x00f78b24();
  pcVar26 = Atlas_UI_Screens_TopBarScreen__RequestButtonVisible;
  auVar37 = func_0x00f78ac0(uVar5,0);
  puVar3 = puVar3 + -0x4d0;
code_r0x0150b5b8:
  auVar35._8_8_ = param_7;
  auVar35._0_8_ = auVar37._0_8_;
  auVar2._8_8_ = param_7;
  auVar2._0_8_ = auVar37._0_8_;
  if (auVar37._8_4_ < 9) {
    uVar12 = (ulong)*(uint *)(&UNK_033f869c + (long)(int)auVar37._8_4_ * 4);
    auVar35 = auVar2;
  }
  else {
    uVar12 = 0xffffffff;
  }
  do {
    puVar4 = auVar35._0_8_;
    auVar36._8_8_ = uVar12;
    auVar36._0_8_ = puVar4;
    *(long *)(puVar3 + -0x20) = lVar16;
    *(ulong *)(puVar3 + -0x18) = uVar7;
    *(undefined1 **)(puVar3 + -0x10) = puVar25;
    *(code **)(puVar3 + -8) = pcVar26;
    uVar11 = (uint)uVar12;
    if (uVar11 == 0xffffffff) {
      return puVar4;
    }
    lVar10 = puVar4[0xe];
    if (lVar10 == 0) {
      func_0x00f78af4();
    }
    else {
      uVar7 = uVar12;
      if (uVar11 < *(uint *)(lVar10 + 0x18)) {
        uVar27 = 2;
        if ((int)uVar14 == 0) {
          uVar27 = 0;
        }
        *(undefined4 *)(lVar10 + (long)(int)uVar11 * 0x60 + 0x5c) = uVar27;
        if ((auVar35._8_8_ & 1) == 0) {
          Atlas_UI_Screens_TopBarScreen__ForceButtonState(puVar4,uVar12);
        }
        unaff_x29 = *(undefined8 *)(puVar3 + -0x10);
        unaff_x30 = *(undefined8 *)(puVar3 + -8);
        unaff_x20 = *(long *)(puVar3 + -0x20);
        unaff_x19 = *(ulong *)(puVar3 + -0x18);
        goto Atlas_UI_Screens_TopBarScreen__UpdateElement;
      }
    }
    uVar5 = func_0x00f78b24();
    auVar36 = func_0x00f78ac0(uVar5,0);
    puVar25 = puVar3 + -0x30;
    *(undefined1 **)(puVar3 + -0x30) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
    lVar10 = *(long *)(auVar36._0_8_ + 0x28);
    auVar35._8_8_ = auVar36._8_8_;
    auVar35._0_8_ = lVar10;
    if (lVar10 == 0) {
      pcVar26 = Atlas_UI_Screens_TopBarScreen__HideNextPanel;
      auVar35 = func_0x00f78af4();
      puVar3 = puVar3 + -0x30;
    }
    else {
      puVar25 = *(undefined1 **)(puVar3 + -0x30);
      pcVar26 = *(code **)(puVar3 + -0x28);
      puVar3 = puVar3 + -0x20;
    }
    *(undefined8 **)(puVar3 + -0x20) = puVar4;
    *(ulong *)(puVar3 + -0x18) = uVar7;
    *(undefined1 **)(puVar3 + -0x10) = puVar25;
    *(code **)(puVar3 + -8) = pcVar26;
    Atlas_UI_Screens_TopBarScreen__RequestElementVisible(auVar35._0_8_,4,0,auVar35._8_8_);
    Atlas_UI_Screens_TopBarScreen__RequestElementVisible(auVar35._0_8_,5,0,auVar35._8_8_);
    uVar12 = 7;
    uVar14 = 0;
    puVar25 = *(undefined1 **)(puVar3 + -0x10);
    pcVar26 = *(code **)(puVar3 + -8);
    lVar16 = *(long *)(puVar3 + -0x20);
    uVar7 = *(ulong *)(puVar3 + -0x18);
  } while( true );
}



// ============================================================
// RVA: 0x156b5d8 | Atlas.UI.Screens.TopBarScreen.<>c__DisplayClass18_0.<CreateElement>b__1
// ============================================================
// [DECOMPILE_FAILED]

